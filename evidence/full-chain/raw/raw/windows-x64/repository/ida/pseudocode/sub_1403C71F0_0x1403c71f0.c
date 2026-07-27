// module: codexmate_lib/core/repository
// addr: 0x1403c71f0
// name: sub_1403C71F0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403C71F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // xmm0
  int v6; // [rsp+20h] [rbp-68h] BYREF
  __int128 v7; // [rsp+28h] [rbp-60h]
  __int128 v8; // [rsp+38h] [rbp-50h]
  __int64 v9; // [rsp+48h] [rbp-40h]

  sub_1403C7270(&v6, a2, a3);
  if ( v6 == -1 )
  {
    *(_QWORD *)(a1 + 32) = v9;
    v5 = v7;
    *(_OWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v5;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 3;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 8;
    *(_OWORD *)(a1 + 16) = 0;
    sub_14034ED40(&v6);
  }
  return a1;
}