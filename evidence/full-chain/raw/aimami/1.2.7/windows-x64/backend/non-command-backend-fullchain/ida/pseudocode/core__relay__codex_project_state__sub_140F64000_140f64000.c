// win 1.2.7 | module src/core/relay/codex_project_state.rs | ea 0x140f64000 | name sub_140F64000
// win 1.2.7 | module src/core/relay/codex_project_state.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F64000(_QWORD *a1, __int64 a2, __int64 a3, const __m128i *a4, unsigned __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __m128i *v15; // rax
  __m128i *v16; // r15
  __int64 v17; // rax
  __int64 result; // rax
  _OWORD *v19; // rcx
  _QWORD v20[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  _QWORD *v26; // [rsp+78h] [rbp-8h]
  __m256i v27; // [rsp+80h] [rbp+0h] BYREF
  __m256i v28; // [rsp+A8h] [rbp+28h] BYREF
  char v29; // [rsp+CFh] [rbp+4Fh]
  __int64 v30; // [rsp+D0h] [rbp+50h]

  v30 = -2;
  v26 = a1;
  if ( a2 )
  {
    v25 = a3;
LABEL_3:
    v6 = a2 + 360;
    v7 = *(unsigned __int16 *)(a2 + 626);
    v23 = a2;
    v8 = a2 - 32;
    v24 = v7;
    v9 = 3LL * (unsigned int)(8 * v7);
    v10 = -1;
    do
    {
      if ( !v9 )
      {
        v10 = v24;
LABEL_11:
        if ( !v25 )
          goto LABEL_20;
        --v25;
        a2 = *(_QWORD *)(v23 + 8 * v10 + 632);
        goto LABEL_3;
      }
      v11 = v6 + 24;
      v12 = a5 - *(_QWORD *)(v6 + 16);
      v13 = sub_1418F4B70(a4, *(_QWORD *)(v6 + 8));
      if ( v13 )
        v12 = v13;
      LOBYTE(v14) = (v12 > 0) - (v12 < 0);
      v8 += 32;
      ++v10;
      v9 -= 24;
      v6 = v11;
    }
    while ( (_BYTE)v14 == 1 );
    if ( (_BYTE)v14 )
      goto LABEL_11;
    *(_QWORD *)&v21 = 0;
    v22 = 0;
    nullsub_1(v14);
    v15 = (__m128i *)sub_140001650(a5, 1);
    if ( !v15 )
      sub_141938D2B(1, a5);
    v16 = v15;
    sub_1418F44E0(v15, a4, a5);
    v20[0] = a5;
    v20[1] = v16;
    v20[2] = a5;
    v29 = 1;
    sub_140412420(&v28, v8);
    if ( v28.m256i_i8[0] == -1 )
    {
      v27.m256i_i64[0] = v28.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_18,
        43,
        (unsigned int)&v27,
        (unsigned int)&off_141A58C48,
        (__int64)&off_141A581E0);
    }
    v27 = v28;
    v29 = 0;
    sub_140E72AA0(&v28, &v21, v20, &v27);
    if ( v28.m256i_i8[0] != -1 )
      sub_14002F9D0(&v28);
    *(_OWORD *)&v28.m256i_u64[1] = v21;
    v28.m256i_i64[3] = v22;
    v28.m256i_i8[0] = 5;
    v17 = sub_1416419F0(a4, a5, &v28);
    if ( v17 && *(_BYTE *)v17 == 4 )
    {
      sub_1403D5C80(&v27, *(_QWORD *)(v17 + 16), *(_QWORD *)(v17 + 16) + 32LL * *(_QWORD *)(v17 + 24));
    }
    else
    {
      v27.m256i_i64[0] = 0;
      *(_OWORD *)&v27.m256i_u64[1] = 8u;
    }
    sub_14002F9D0(&v28);
    result = v27.m256i_i64[2];
    v19 = v26;
    v26[2] = v27.m256i_i64[2];
    *v19 = *(_OWORD *)v27.m256i_i8;
  }
  else
  {
LABEL_20:
    result = (__int64)v26;
    *v26 = 0;
    *(_QWORD *)(result + 8) = 8;
    *(_QWORD *)(result + 16) = 0;
  }
  return result;
}
