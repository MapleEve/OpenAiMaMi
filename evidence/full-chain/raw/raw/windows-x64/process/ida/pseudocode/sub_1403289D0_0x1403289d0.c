// module: codexmate_lib/platform/process
// addr: 0x1403289d0
// name: sub_1403289D0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 *__fastcall sub_1403289D0(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]

  v17 = -2;
  if ( (unsigned __int64)(a3 - a2) > 0xAAAAAAAAAAAAAAA0uLL )
  {
    v4 = 0;
    goto LABEL_3;
  }
  v5 = a2;
  if ( a3 == a2 )
  {
    v14 = 0;
    v15 = 8;
    v7 = 0;
  }
  else
  {
    v7 = (unsigned __int64)(a3 - a2) >> 5;
    v3 = 24 * v7;
    nullsub_1(a1);
    v4 = 8;
    v8 = sub_140001650(24 * v7, 8);
    if ( !v8 )
LABEL_3:
      sub_1416C2D4B(v4, v3);
    v9 = v8;
    v14 = v7;
    v15 = v8;
    v10 = 0;
    do
    {
      v16 = v10;
      sub_140380850(&v12, v5);
      *(_QWORD *)(v9 + 16) = v13;
      *(_OWORD *)v9 = v12;
      v10 = v16 + 1;
      v5 += 32;
      v9 += 24;
    }
    while ( v7 != v16 + 1 );
  }
  a1[2] = v7;
  *a1 = v14;
  a1[1] = v15;
  return a1;
}