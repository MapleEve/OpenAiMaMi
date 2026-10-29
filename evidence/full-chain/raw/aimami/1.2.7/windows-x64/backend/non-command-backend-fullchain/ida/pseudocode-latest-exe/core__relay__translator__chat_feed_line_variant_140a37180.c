_QWORD *__fastcall sub_140A37180(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  unsigned __int64 v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+68h] [rbp-8h]

  v18 = -2;
  if ( *(_BYTE *)(a2 + 109) )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return a1;
  }
  *(_QWORD *)&v15 = 0;
  *((_QWORD *)&v15 + 1) = 1;
  v16 = 0;
  if ( *(_BYTE *)(a2 + 108) )
  {
    v4 = 1;
    v5 = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 108) = 1;
    sub_140A360B0(&v12, a2);
    v6 = v13;
    v7 = v14;
    if ( v14 )
    {
      v17 = v13;
      sub_141939070((unsigned int)&v15, 0, v14, 1, 1);
      v4 = *((_QWORD *)&v15 + 1);
      v8 = v16;
      v6 = v17;
      sub_1419234B0(*((_QWORD *)&v15 + 1) + v16, v17, v7);
    }
    else
    {
      v4 = 1;
      v8 = 0;
    }
    v5 = v7 + v8;
    v16 = v5;
    if ( v12 )
      sub_140001660(v6, v12, 1);
  }
  sub_140A30AC0(&v12, a2, (__int64)aStop_0, 4);
  v9 = v13;
  v10 = v14;
  if ( v14 > (__int64)v15 - v5 )
  {
    v17 = v13;
    sub_141939070((unsigned int)&v15, v5, v14, 1, 1);
    v4 = *((_QWORD *)&v15 + 1);
    v5 = v16;
    v9 = v17;
    goto LABEL_11;
  }
  if ( v14 )
LABEL_11:
    sub_1419234B0(v5 + v4, v9, v10);
  v16 = v10 + v5;
  if ( v12 )
    sub_140001660(v9, v12, 1);
  a1[2] = v16;
  *(_OWORD *)a1 = v15;
  return a1;
}
