// module: codexmate_lib/core/mcp
// addr: 0x140fc6ea0
// name: sub_140FC6EA0
// win 1.2.1 | module src/core/mcp.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
bool __fastcall sub_140FC6EA0(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)sub_140FD1560(a1 + 40);
  return v1 && *v1 != 8;
}