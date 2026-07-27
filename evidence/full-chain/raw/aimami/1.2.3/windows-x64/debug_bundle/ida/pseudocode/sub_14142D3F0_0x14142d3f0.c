// module: codexmate_lib/core/debug_bundle
// addr: 0x14142d3f0
// name: sub_14142D3F0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_14142D3F0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rcx
  _QWORD v4[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = *a1;
  if ( !*(_QWORD *)(v2 + 24) )
    return sub_14142D160();
  v4[0] = v2;
  v4[1] = sub_14142D160;
  v4[2] = v2 + 24;
  v4[3] = sub_1414AC520;
  v4[4] = v2 + 32;
  v4[5] = sub_1414AC520;
  return sub_1414A2FC0(*a2, a2[1], byte_141A0A7DC, (unsigned __int64)v4);
}