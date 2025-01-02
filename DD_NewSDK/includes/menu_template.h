#pragma once
#include "includes/ImGui/imgui.h"
// #include "includes/ImGui/imgui_impl_win32.h"
// #include "includes/ImGui/imgui_impl_dx9.h"

class Menu_template {
public:
  virtual ~Menu_template() = default;

  void Render() {
    OnBegin();  // Call the customizable Begin logic
    RenderUI(); // Call the customizable UI elements logic
    OnEnd();    // Call the customizable End logic
  }

protected:
  virtual void Init() {}
  // Overloadable methods for customization
  virtual void OnBegin() { ImGui::Begin("Default Window"); }

  virtual void OnEnd() { ImGui::End(); }

  virtual void RenderUI() { ImGui::Text("Default UI"); }
};
