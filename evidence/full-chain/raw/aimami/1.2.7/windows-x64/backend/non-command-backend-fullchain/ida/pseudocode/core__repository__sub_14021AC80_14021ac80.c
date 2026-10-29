// win 1.2.7 | module src/core/repository.rs | ea 0x14021ac80 | name sub_14021AC80
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14021AC80(_QWORD *a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  _BYTE *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  __int64 v15; // r12
  const __m128i *v16; // rbx
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  __int64 i; // r13
  __int64 v20; // rcx
  __int64 result; // rax
  _QWORD v22[4]; // [rsp+28h] [rbp-58h] BYREF
  char v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h] BYREF
  int v28; // [rsp+70h] [rbp-10h] BYREF
  __int64 v29; // [rsp+78h] [rbp-8h] BYREF
  _BYTE *v30; // [rsp+80h] [rbp+0h]
  __int64 v31; // [rsp+88h] [rbp+8h]
  __int16 v32; // [rsp+90h] [rbp+10h] BYREF
  _QWORD *v33; // [rsp+98h] [rbp+18h]
  __int64 v34; // [rsp+A0h] [rbp+20h]

  v34 = -2;
  v3 = *(_DWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 24);
  sub_1403F2D20(&v24, a2);
  v27 = v4;
  v6 = 3;
  if ( v3 >= 4 )
    v6 = v3;
  v28 = v6;
  nullsub_1(v5);
  v7 = (_BYTE *)sub_140001650(128, 1);
  if ( !v7 )
    sub_141938D2B(1, 128);
  v29 = 128;
  v30 = v7;
  v22[0] = &v29;
  v22[1] = asc_1419D4588;
  v22[2] = 2;
  v22[3] = 1;
  v23 = 0;
  *v7 = 123;
  v31 = 1;
  v32 = 256;
  v33 = v22;
  v8 = sub_140BF9FA0(&v32, aSchemaversion, 13, &v28);
  if ( v8 )
    goto LABEL_8;
  if ( (_BYTE)v32 )
    goto LABEL_6;
  v8 = sub_140BFA750(&v32, aUpdatedat, 9, &v27);
  if ( v8 )
    goto LABEL_8;
  if ( (_BYTE)v32 )
  {
LABEL_6:
    v8 = sub_141934E70();
    goto LABEL_8;
  }
  v8 = sub_140BF0510(&v32, aItems, 5, &v24);
  if ( v8 )
  {
LABEL_8:
    if ( v29 )
      sub_140001660(v30, v29, 1);
    goto LABEL_10;
  }
  if ( (v32 & 1) == 0 && HIBYTE(v32) )
  {
    v13 = v33;
    v14 = (_QWORD *)*v33;
    v15 = v33[3] - 1LL;
    v33[3] = v15;
    if ( *((_BYTE *)v13 + 32) == 1 )
    {
      sub_1403B45A0(v14, asc_1419D6548, 1);
      if ( v15 )
      {
        v16 = (const __m128i *)v13[1];
        v17 = v13[2];
        v18 = v14[2];
        for ( i = 0; i != v15; ++i )
        {
          if ( v17 > *v14 - v18 )
          {
            sub_14190D590((_DWORD)v14, v18, v17, 1, 1);
            v18 = v14[2];
          }
          else if ( !v17 )
          {
            goto LABEL_28;
          }
          sub_1418F44E0((__m128i *)(v18 + v14[1]), v16, v17);
LABEL_28:
          v18 += v17;
          v14[2] = v18;
        }
      }
    }
    sub_1403B45A0(v14, asc_1419D6549, 1);
  }
  v8 = (__int64)v30;
  if ( v29 != -1 )
  {
    v20 = v31;
    a1[1] = v29;
    a1[2] = v8;
    a1[3] = v20;
    *a1 = -1;
    sub_1403FB6B0(&v24);
    goto LABEL_35;
  }
LABEL_10:
  *a1 = 3;
  a1[1] = v8;
  v9 = v26;
  if ( v26 )
  {
    v10 = (_QWORD *)(v25 + 152);
    do
    {
      v11 = *(v10 - 1);
      if ( v11 )
        sub_140001660(*v10, v11, 1);
      if ( *((_DWORD *)v10 - 14) != 2 )
      {
        v12 = *(v10 - 5);
        if ( v12 != -1 )
        {
          if ( v12 )
            sub_140001660(*(v10 - 4), v12, 1);
        }
      }
      v10 += 24;
      --v9;
    }
    while ( v9 );
  }
LABEL_35:
  result = v24;
  if ( v24 )
    return sub_140001660(v25, 192 * v24, 8);
  return result;
}
