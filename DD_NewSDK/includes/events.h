#pragma once

#include "SDK.hpp"
#include <SDK/DD_Core_structs.hpp>

class Event {
public:
  enum class Type : uint8_t { Move };
  Event(int index) : playerIndex(index) {};

  int playerIndex;
  virtual bool doEvent() = 0;
  virtual Type getType() const = 0;
};

class MovePlayerEvent : public Event {
public:
  MovePlayerEvent(int index, Classes::FVector &pos)
      : Event(index), moveLocation(pos) {};

  bool doEvent() override;
  void changeMove(Classes::FVector pos);
  Type getType() const override { return Type::Move; };

private:
  Classes::FVector moveLocation;
};
