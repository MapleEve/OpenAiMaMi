// module: codexmate_lib/core/debug_bundle
// addr: 0x140328340
// name: sub_140328340
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 *__fastcall sub_140328340(unsigned __int64 *a1, __int64 *a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int128 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h]
  unsigned __int64 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  __int64 v19; // [rsp+60h] [rbp+0h]

  v19 = -2;
  v3 = *a2;
  v4 = a2[1] - *a2;
  if ( v4 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v5 = 0;
    goto LABEL_3;
  }
  if ( a2[1] == v3 )
  {
    v16 = 0;
    v17 = 8;
    v9 = 0;
  }
  else
  {
    v6 = a1;
    nullsub_1(a1);
    v5 = 8;
    v7 = sub_140001650(v4, 8);
    if ( !v7 )
LABEL_3:
      sub_1416C2D4B(v5, v4);
    v8 = v7;
    v9 = v4 / 0x18;
    v16 = v4 / 0x18;
    v17 = v7;
    v10 = a2[2];
    v11 = 0;
    v12 = 0;
    do
    {
      v18 = v12;
      sub_140403D70(
        (__int64)&v14,
        *(_QWORD *)(v3 + v11 + 8),
        *(_QWORD *)(v3 + v11 + 16),
        *(_QWORD *)(v10 + 8),
        *(_QWORD *)(v10 + 16));
      *(_QWORD *)(v8 + v11 + 16) = v15;
      *(_OWORD *)(v8 + v11) = v14;
      v12 = v18 + 1;
      v11 += 24;
    }
    while ( v9 != v18 + 1 );
    a1 = v6;
  }
  a1[2] = v9;
  *a1 = v16;
  a1[1] = v17;
  return a1;
}