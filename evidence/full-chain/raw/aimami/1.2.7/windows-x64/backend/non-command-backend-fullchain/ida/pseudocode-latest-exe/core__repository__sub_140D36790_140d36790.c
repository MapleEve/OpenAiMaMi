// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d36790 | successor of pre-update 0x14021ac80 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
double __fastcall sub_140D36790(_QWORD *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  _BYTE *v8; // rax
  __int64 v9; // rdi
  double result; // xmm0_8
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // r14
  _QWORD *v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbx
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 i; // r13
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+28h] [rbp-58h] BYREF
  char v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h] BYREF
  int v29; // [rsp+70h] [rbp-10h] BYREF
  __int64 v30; // [rsp+78h] [rbp-8h] BYREF
  _BYTE *v31; // [rsp+80h] [rbp+0h]
  __int64 v32; // [rsp+88h] [rbp+8h]
  __int16 v33; // [rsp+90h] [rbp+10h] BYREF
  _QWORD *v34; // [rsp+98h] [rbp+18h]
  __int64 v35; // [rsp+A0h] [rbp+20h]

  v35 = -2;
  v3 = *(_DWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 24);
  sub_14022CB80(&v25, a2);
  v28 = v4;
  v7 = 3;
  if ( v3 >= 4 )
    v7 = v3;
  v29 = v7;
  nullsub_1(v6, v5);
  v8 = (_BYTE *)sub_140001650(128, 1);
  if ( !v8 )
    sub_14196B2DB(1, 128);
  v30 = 128;
  v31 = v8;
  v23[0] = &v30;
  v23[1] = asc_141A907A8;
  v23[2] = 2;
  v23[3] = 1;
  v24 = 0;
  *v8 = 123;
  v32 = 1;
  v33 = 256;
  v34 = v23;
  v9 = sub_1407A12A0(&v33, &qword_141A90A1F, 13, &v29);
  if ( v9 )
    goto LABEL_8;
  if ( (_BYTE)v33 )
    goto LABEL_6;
  v9 = sub_1407A1A50(&v33, aUpdatedat_2, 9, &v28);
  if ( v9 )
    goto LABEL_8;
  if ( (_BYTE)v33 )
  {
LABEL_6:
    v9 = sub_141967030();
    goto LABEL_8;
  }
  v9 = sub_140797CE0(&v33, aItems_3, 5, &v25);
  if ( v9 )
  {
LABEL_8:
    if ( v30 )
      result = sub_140001660(v31, v30, 1);
    goto LABEL_10;
  }
  if ( (v33 & 1) == 0 && HIBYTE(v33) )
  {
    v15 = v34;
    v16 = (_QWORD *)*v34;
    v17 = v34[3] - 1LL;
    v34[3] = v17;
    if ( *((_BYTE *)v15 + 32) == 1 )
    {
      sub_1401E6F40(v16, "\n}falsetrue", 1);
      if ( v17 )
      {
        v18 = v15[1];
        v19 = v15[2];
        v20 = v16[2];
        for ( i = 0; i != v17; ++i )
        {
          if ( v19 > *v16 - v20 )
          {
            sub_141939070((_DWORD)v16, v20, v19, 1, 1);
            v20 = v16[2];
          }
          else if ( !v19 )
          {
            goto LABEL_27;
          }
          result = sub_1419234B0(v20 + v16[1], v18, v19);
LABEL_27:
          v20 += v19;
          v16[2] = v20;
        }
      }
    }
    sub_1401E6F40(v16, "}falsetrue", 1);
  }
  v9 = (__int64)v31;
  if ( v30 != -1 )
  {
    v22 = v32;
    a1[1] = v30;
    a1[2] = v9;
    a1[3] = v22;
    *a1 = -1;
    sub_140234FD0((__int64)&v25);
    goto LABEL_34;
  }
LABEL_10:
  *a1 = 3;
  a1[1] = v9;
  v11 = v27;
  if ( v27 )
  {
    v12 = (_QWORD *)(v26 + 152);
    do
    {
      v13 = *(v12 - 1);
      if ( v13 )
        result = sub_140001660(*v12, v13, 1);
      if ( *((_DWORD *)v12 - 14) != 2 )
      {
        v14 = *(v12 - 5);
        if ( v14 > 0 )
          result = sub_140001660(*(v12 - 4), v14, 1);
      }
      v12 += 24;
      --v11;
    }
    while ( v11 );
  }
LABEL_34:
  if ( v25 )
    return sub_140001660(v26, 192 * v25, 8);
  return result;
}
