// win 1.2.7 | module src/core/repository/account_reset_credits.rs | ea 0x140ed7fa0 | name sub_140ED7FA0
// win 1.2.7 | module src/core/repository/account_reset_credits.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140ED7FA0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rdi
  __int128 v6; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int128 v16; // rax
  __int64 v17; // rbx
  const __m128i *v18[6]; // [rsp+20h] [rbp-60h] BYREF
  const __m128i *v19[6]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+80h] [rbp+0h] BYREF
  __m256i v21; // [rsp+90h] [rbp+10h]
  __int128 v22; // [rsp+B0h] [rbp+30h] BYREF
  __m256i v23; // [rsp+C0h] [rbp+40h]
  __int64 v24; // [rsp+E8h] [rbp+68h]
  __int128 v25; // [rsp+F0h] [rbp+70h] BYREF
  __m256i v26; // [rsp+100h] [rbp+80h]
  __int64 v27; // [rsp+120h] [rbp+A0h]
  __int64 v28; // [rsp+128h] [rbp+A8h]

  v28 = -2;
  if ( (unsigned __int8)sub_140ED8760(a2) || a2[9] == -1 || (v4 = a2[11]) == 0 )
  {
    *a1 = -1;
    return a1;
  }
  v5 = a2 + 9;
  if ( a2[15] == -1 || !a2[17] )
  {
    if ( a2[6] == -1 )
      v8 = 0;
    else
      v8 = a2[7];
    sub_140ED4C20((__int64)v19, v8, a2[8]);
    sub_140ED4C20((__int64)v18, a2[10], v4);
    sub_140ED45E0(&v25, v19, aHttpsApiOpenai, 27);
    if ( (_QWORD)v25 )
    {
      v21 = v26;
      v20 = v25;
    }
    else
    {
      sub_140ED45E0(&v20, v18, aHttpsApiOpenai, 27);
    }
    if ( (_QWORD)v20 )
    {
      v23 = v21;
      v22 = v20;
    }
    else
    {
      v10 = sub_14167F170(v9);
      v15 = v10;
      if ( *(_BYTE *)(v10 + 16) == 1 )
      {
        v16 = *(_OWORD *)v10;
      }
      else
      {
        *(_QWORD *)&v16 = sub_141696260(v12, v11, v13, v14);
        *(_OWORD *)v15 = v16;
        *(_BYTE *)(v15 + 16) = 1;
      }
      *(_QWORD *)v15 = v16 + 1;
      *(_OWORD *)v23.m256i_i8 = *(&off_141A56DB0 + 1);
      v22 = off_141A56DB0;
      *(_OWORD *)&v23.m256i_u64[2] = v16;
    }
    sub_140ED4440(&v25, &v22, aChatgptAccount_0, 18);
    if ( (_QWORD)v25 != -1 )
    {
      v17 = v26.m256i_i64[0];
      if ( v26.m256i_i64[0] )
      {
        v24 = *((_QWORD *)&v25 + 1);
        v27 = v25;
        sub_1416AC440(&v25, v5);
        a1[2] = v26.m256i_i64[0];
        *(_OWORD *)a1 = v25;
        a1[3] = v27;
        a1[4] = v24;
        a1[5] = v17;
        sub_1403705B0((const __m128i **)&v22);
        sub_1403705B0(v18);
LABEL_26:
        sub_1403705B0(v19);
        return a1;
      }
      if ( (_QWORD)v25 )
        sub_140001660(*((_QWORD *)&v25 + 1), v25, 1);
    }
    *a1 = -1;
    sub_1403705B0((const __m128i **)&v22);
    sub_1403705B0(v18);
    goto LABEL_26;
  }
  sub_1416AC440(&v22, v5);
  sub_1416AC440(&v20, a2 + 15);
  v26.m256i_i64[0] = v23.m256i_i64[0];
  v6 = v22;
  v25 = v22;
  *(_OWORD *)&v26.m256i_u64[1] = v20;
  v26.m256i_i64[3] = v21.m256i_i64[0];
  a1[4] = *((_QWORD *)&v20 + 1);
  a1[5] = v26.m256i_i64[3];
  *((_OWORD *)a1 + 1) = *(_OWORD *)v26.m256i_i8;
  *(_OWORD *)a1 = v6;
  return a1;
}
