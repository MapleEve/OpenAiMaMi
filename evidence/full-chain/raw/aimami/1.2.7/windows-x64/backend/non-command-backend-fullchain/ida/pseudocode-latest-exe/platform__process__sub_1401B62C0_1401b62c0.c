// win 1.2.7 latest-exe | module src/platform/process.rs | ea 0x1401b62c0 | successor of pre-update 0x140391650 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
_QWORD *__fastcall sub_1401B62C0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int128 *v4; // r13
  __int128 *v5; // r15
  __int64 v6; // r12
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // r8
  char v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r15
  _QWORD *v13; // r13
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  _QWORD *v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  _QWORD *v26; // [rsp+78h] [rbp-8h]
  __int64 v27; // [rsp+80h] [rbp+0h]
  __int64 v28; // [rsp+88h] [rbp+8h]

  v28 = -2;
  v2 = a1;
  v21 = a2[2];
  v3 = *a2;
  v4 = (__int128 *)a2[1];
  v26 = a2;
  v5 = (__int128 *)a2[3];
  if ( v4 == v5 )
  {
    v6 = v3;
    v11 = (char *)v5 - (char *)v4;
    if ( !v11 )
      goto LABEL_19;
    goto LABEL_15;
  }
  v22 = a1;
  v6 = v3;
  do
  {
    v25 = *((_QWORD *)v4 + 1);
    v7 = *v4;
    v27 = *((_QWORD *)v4 + 2);
    v8 = *((_QWORD *)v4 + 3);
    v4 += 2;
    v26[1] = v4;
    v19 = v3;
    v20 = v6;
    sub_14098FEE0(&v16);
    v9 = v17;
    v24 = v16;
    v23 = v17;
    if ( v16 == -1 )
      v9 = 0;
    v10 = sub_140990720(v27, v8, v9, v18);
    if ( v24 > 0 )
      sub_140001660(v23, v24, 1);
    if ( v10 )
    {
      *(_OWORD *)v6 = v7;
      *(_QWORD *)(v6 + 16) = v27;
      *(_QWORD *)(v6 + 24) = v8;
      v6 += 32;
    }
    else if ( v25 )
    {
      sub_140001660(v27, v25, 1);
    }
  }
  while ( v4 != v5 );
  v4 = (__int128 *)v26[1];
  v2 = v22;
  v11 = v26[3] - (_QWORD)v4;
  if ( v11 )
  {
LABEL_15:
    v12 = v11 >> 5;
    v13 = v4 + 1;
    do
    {
      v14 = *(v13 - 1);
      if ( v14 )
        sub_140001660(*v13, v14, 1);
      v13 += 4;
      --v12;
    }
    while ( v12 );
  }
LABEL_19:
  *v2 = v21;
  v2[1] = v3;
  v2[2] = (unsigned __int64)(v6 - v3) >> 5;
  return v2;
}
