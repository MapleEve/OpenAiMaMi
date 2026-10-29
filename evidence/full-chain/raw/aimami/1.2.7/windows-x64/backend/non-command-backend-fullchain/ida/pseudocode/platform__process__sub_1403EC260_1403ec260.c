// win 1.2.7 | module src/platform/process.rs | ea 0x1403ec260 | name sub_1403EC260
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 *__fastcall sub_1403EC260(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-50h]
  _QWORD v13[4]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 *v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  unsigned __int64 v18; // [rsp+78h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+0h]
  __int64 v20; // [rsp+88h] [rbp+8h]
  __int64 v21; // [rsp+90h] [rbp+10h]

  v21 = -2;
  if ( (unsigned __int64)(a3 - a2) > 0xAAAAAAAAAAAAAAA0uLL )
  {
    v4 = 0;
    goto LABEL_3;
  }
  v5 = a2;
  if ( a3 == a2 )
  {
    v18 = 0;
    v19 = 8;
    v20 = 0;
    v6 = 0;
  }
  else
  {
    v16 = a1;
    v6 = (unsigned __int64)(a3 - a2) >> 5;
    v3 = 24 * v6;
    nullsub_1(a1);
    v4 = 8;
    v7 = sub_140001650(24 * v6, 8);
    if ( !v7 )
LABEL_3:
      sub_141938D2B(v4, v3);
    v8 = v7;
    v18 = v6;
    v19 = v7;
    v9 = 0;
    do
    {
      v17 = v9;
      v15 = v5;
      v14 = v5 + 8;
      v13[0] = &v15;
      v13[1] = sub_140286300;
      v13[2] = &v14;
      v13[3] = sub_140369D80;
      sub_1416ABFD0(&v11, &unk_1419E5370, v13);
      *(_QWORD *)(v8 + 16) = v12;
      *(_OWORD *)v8 = v11;
      v9 = v17 + 1;
      v5 += 32;
      v8 += 24;
    }
    while ( v6 != v17 + 1 );
    a1 = v16;
  }
  a1[2] = v6;
  *a1 = v18;
  a1[1] = v19;
  return a1;
}
