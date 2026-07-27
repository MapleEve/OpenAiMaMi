// module: codexmate_lib/core/debug_bundle
// addr: 0x140329230
// name: sub_140329230
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140329230(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+38h] [rbp-18h]
  _QWORD v10[7]; // [rsp+48h] [rbp-8h] BYREF

  v10[1] = -2;
  v2 = *(_QWORD *)(a2 + 64);
  if ( v2 > 0x555555555555555LL )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( 24 * v2 )
  {
    v5 = a2;
    nullsub_1(a1);
    v3 = 8;
    v6 = sub_140001650(24 * v2, 8);
    if ( !v6 )
LABEL_3:
      sub_1416C2D4B(v3, 24 * v2);
    a2 = v5;
  }
  else
  {
    v6 = 8;
    v2 = 0;
  }
  *(_QWORD *)&v9 = v2;
  *((_QWORD *)&v9 + 1) = v6;
  v10[0] = 0;
  v8[0] = v10;
  v8[1] = 0;
  v8[2] = v6;
  sub_14044AEA0(a2, v8);
  *(_QWORD *)(a1 + 16) = v10[0];
  *(_OWORD *)a1 = v9;
  return a1;
}