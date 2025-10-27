#pragma once

#include "SDK.hpp"
#include <SDK/DD_Core_structs.hpp>
#include <chrono>


class Event {
public:
  enum class Type : uint8_t { MoveTo, RotateToAngle, RotateToLocation, BuildTower };
  Event(int index) : playerIndex(index) {};

  int playerIndex;
  virtual bool doEvent() = 0;
  virtual Type getType() const = 0;
};

class TimedEvent : public Event {
public:
  TimedEvent(int index, float timeSeconds)
      : Event(index),
        startTime(std::chrono::steady_clock::now()),
        timeToComplete(timeSeconds) {};
  std::chrono::steady_clock::time_point startTime;
  float timeToComplete;
  virtual bool doEvent() = 0;
  virtual Type getType() const = 0;
};

class BuildTowerEvent : public Event {
public:
  BuildTowerEvent(int index,int tower, Classes::FVector &pos, float rot)
      : Event(index), towerIndex(tower),towerLocation(pos), towerRotation(rot) {};

  bool doEvent() override;
  Type getType() const override { return Type::BuildTower; };

private:
  int towerIndex{};
  Classes::FVector towerLocation;
  float towerRotation;
};

class MoveToPlayerEvent : public Event {
public:
  MoveToPlayerEvent(int index, Classes::FVector &pos)
      : Event(index), moveLocation(pos) {};

  bool doEvent() override;
  void changeMove(Classes::FVector pos);
  Type getType() const override { return Type::MoveTo; };

private:
  Classes::FVector moveLocation;
};


class RotateToAngleEvent : public Event {
public:
  RotateToAngleEvent(int index, Classes::FRotator &rot)
      : Event(index), rotation(rot) {};

  bool doEvent() override;
  void changeRotation(Classes::FRotator& rot) {rotation = rot;};
  Type getType() const override { return Type::RotateToAngle; };

private:
  Classes::FRotator rotation;
};


class RotateToLocationEvent : public Event {
public:
  RotateToLocationEvent(int index, Classes::FVector &pos)
      : Event(index), location(pos) {};

  bool doEvent() override;
  void changeRotation(Classes::FVector& pos) {location = pos;};
  Type getType() const override { return Type::RotateToAngle; };

private:
  Classes::FVector location;
};
