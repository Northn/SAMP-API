#include "sampapi/0.3.7-R5-1/CObjectEdit.h"

SAMPAPI_BEGIN_V037R5_1

CObjectEdit*& RefObjectEdit(VersionTag) {
  return *reinterpret_cast<CObjectEdit**>(sampapi::GetAddress(0x26E8A8));
}

CObjectEdit::CObjectEdit(IDirect3DDevice9* RefDevice) {
  reinterpret_cast<CObjectEdit*(__thiscall*)(CObjectEdit*, IDirect3DDevice9*)>(sampapi::GetAddress(0x71470))(this, RefDevice);
}

float CObjectEdit::WorldToScreen(sampapi::CVector* in, float (&out)[2]) {
  return reinterpret_cast<float(__thiscall*)(CObjectEdit*, sampapi::CVector*, float*)>(sampapi::GetAddress(0x71530))(this, in, out);
}

float CObjectEdit::WorldToScreen(sampapi::CVector* in, float* out) {
  return reinterpret_cast<float(__thiscall*)(CObjectEdit*, sampapi::CVector*, float*)>(sampapi::GetAddress(0x71530))(this, in, out);
}

int CObjectEdit::RenderAxes(sampapi::CMatrix* a2, float linesize) {
  return reinterpret_cast<int(__thiscall*)(CObjectEdit*, sampapi::CMatrix*, float)>(sampapi::GetAddress(0x71630))(this, a2, linesize);
}

const char* CObjectEdit::GetRenderChar(BOOL for_big_font) {
  return reinterpret_cast<const char*(__thiscall*)(CObjectEdit*, BOOL)>(sampapi::GetAddress(0x718B0))(this, for_big_font);
}

void CObjectEdit::TryChangeProcessType() {
  reinterpret_cast<void(__thiscall*)(CObjectEdit*)>(sampapi::GetAddress(0x719B0))(this);
}

void CObjectEdit::SetEditMode(ObjectEditMode mode) {
  reinterpret_cast<void(__thiscall*)(CObjectEdit*, ObjectEditMode)>(sampapi::GetAddress(0x71B00))(this, mode);
}

void CObjectEdit::ResetMousePos() {
  reinterpret_cast<void(__thiscall*)(CObjectEdit*)>(sampapi::GetAddress(0x71CD0))(this);
}

void CObjectEdit::EnterEditObject(sampapi::ID object_id, BOOL player_object) {
  reinterpret_cast<void
(__thiscall*)(CObjectEdit*, sampapi::ID, BOOL)>(sampapi::GetAddress(0x71D30))(this, object_id, player_object);
}

void CObjectEdit::SendEditEndNotification(int response) {
  reinterpret_cast<void(__thiscall*)(CObjectEdit*, int)>(sampapi::GetAddress(0x721C0))(this, response);
}

void CObjectEdit::SendAttachedEditEndNotification(int response) {
  reinterpret_cast<void(__thiscall*)(CObjectEdit*, int)>(sampapi::GetAddress(0x723D0))(this, response);
}

void CObjectEdit::Disable(BOOL result) {
  reinterpret_cast<void(__thiscall*)(CObjectEdit*, BOOL)>(sampapi::GetAddress(0x724D0))(this, result);
}

BOOL CObjectEdit::RenderControlsForObject(sampapi::CMatrix* object_matrix, float linesize) {
  return reinterpret_cast<BOOL(__thiscall*)(CObjectEdit*, sampapi::CMatrix*, float)>(sampapi::GetAddress(0x72540))(this, object_matrix, linesize);
}

void CObjectEdit::ApplyChanges(ObjectEditProcessType type, float diff) {
  reinterpret_cast<void(__thiscall*)(CObjectEdit*, ObjectEditProcessType, float)>(sampapi::GetAddress(0x72D70))(this, type, diff);
}

void CObjectEdit::ProcessMouseMove() {
  reinterpret_cast<float(__thiscall*)(CObjectEdit*)>(sampapi::GetAddress(0x72D90))(this);
}

BOOL CObjectEdit::MsgProc(UINT uMsg, WPARAM wParam, LPARAM lParam) {
  return reinterpret_cast<BOOL(__thiscall*)(CObjectEdit*, UINT, WPARAM, LPARAM)>(sampapi::GetAddress(0x72E60))(this, uMsg, wParam, lParam);
}

void CObjectEdit::Render() {
  reinterpret_cast<void(__thiscall*)(CObjectEdit*)>(sampapi::GetAddress(0x73090))(this);
}

const char* CObjectEdit::GetMaxSizeChar() {
  return reinterpret_cast<const char*(__cdecl*)()>(sampapi::GetAddress(0x718A0))();
}

SAMPAPI_END