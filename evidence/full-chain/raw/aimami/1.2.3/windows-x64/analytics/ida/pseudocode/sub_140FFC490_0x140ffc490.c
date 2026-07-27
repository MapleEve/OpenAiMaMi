// module: codexmate_lib/core/analytics
// addr: 0x140ffc490
// name: sub_140FFC490
// win 1.2.1 | module src/core/analytics.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FFC490(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v5; // [rsp+2Ch] [rbp-1Ch] BYREF
  int v6; // [rsp+34h] [rbp-14h]

  sub_140FFA6E0(&v5);
  v3 = sub_140FFD2D0(v2, &v5);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = v3;
  return a1;
}