// module: codexmate_lib/core/debug_bundle
// addr: 0x140328620
// name: sub_140328620
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140328620(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  _QWORD v11[3]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-18h]
  _QWORD v13[7]; // [rsp+48h] [rbp-8h] BYREF

  v13[1] = -2;
  v4 = a2[1];
  v5 = v4 - *a2;
  if ( v5 > 0xAAAAAAAAAAAAAAA0uLL )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( v4 == *a2 )
  {
    v8 = 8;
    v9 = 0;
  }
  else
  {
    v7 = a2;
    v2 = 3 * (v5 >> 2);
    nullsub_1(v4);
    v6 = 8;
    v8 = sub_140001650(v2, 8);
    if ( !v8 )
LABEL_3:
      sub_1416C2D4B(v6, v2);
    v9 = v5 >> 5;
    a2 = v7;
  }
  *(_QWORD *)&v12 = v9;
  *((_QWORD *)&v12 + 1) = v8;
  v13[0] = 0;
  v11[2] = v8;
  v11[0] = v13;
  v11[1] = 0;
  sub_140995120(a2, v11);
  *(_QWORD *)(a1 + 16) = v13[0];
  *(_OWORD *)a1 = v12;
  return a1;
}