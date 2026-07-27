// module: codexmate_lib/core/relay/config_takeover
// addr: 0x1404101a0
// name: read_backup
// win 1.2.3 | = mac codexmate_lib::core::relay::config_takeover::read_backup | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_backup(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __m128i v8; // xmm0
  unsigned __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // rdx
  __m128i v12; // kr10_16
  __int64 v13; // r14
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // [rsp+28h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-50h]
  __int64 v19; // [rsp+38h] [rbp-48h]
  __m128i v20; // [rsp+48h] [rbp-38h] BYREF
  __m128i v21; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int128 v22; // [rsp+68h] [rbp-18h]
  __int128 v23; // [rsp+78h] [rbp-8h]
  __m128i v24; // [rsp+88h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+18h]
  __m256i v26; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int128 v27; // [rsp+C0h] [rbp+40h]
  __int128 v28; // [rsp+D0h] [rbp+50h]
  __m128i v29; // [rsp+E0h] [rbp+60h]
  __int64 v30; // [rsp+F0h] [rbp+70h]
  __int64 v31; // [rsp+100h] [rbp+80h]
  _QWORD v32[2]; // [rsp+108h] [rbp+88h] BYREF
  __int64 v33; // [rsp+118h] [rbp+98h] BYREF
  __int64 v34; // [rsp+120h] [rbp+A0h]
  __int64 v35; // [rsp+128h] [rbp+A8h]
  __int64 v36; // [rsp+130h] [rbp+B0h]
  __int64 v37; // [rsp+138h] [rbp+B8h]

  v37 = -2;
  sub_141473FA0((unsigned int)&v17, a2, a3, (unsigned int)"router-takeover-backup.json", 27);
  v4 = v19;
  v34 = v18;
  sub_141486710(&v20, v18, v19);
  if ( v20.m128i_i32[0] == 2 )
  {
    v26.m256i_i64[1] = v20.m128i_i64[1];
    v26.m256i_i64[0] = 2;
LABEL_4:
    result = sub_140018650(&v26.m256i_u64[1]);
    *(_OWORD *)a1 = -1;
    goto LABEL_5;
  }
  *(__m128i *)v26.m256i_i8 = v20;
  v30 = v25;
  v29 = _mm_loadu_si128(&v24);
  v28 = v23;
  v27 = v22;
  *(__m128i *)&v26.m256i_u64[2] = v21;
  if ( v20.m128i_i64[0] == 2 )
    goto LABEL_4;
  sub_14148D130(&v26, v34, v4);
  v6 = v26.m256i_i64[1];
  if ( v26.m256i_i64[0] == -1 )
  {
    v33 = v26.m256i_i64[1];
    v32[0] = &v33;
    v32[1] = sub_141490720;
    sub_14149C0F0(&v20, &unk_14174D7F3, v32);
    v12 = v20;
    v13 = v21.m128i_i64[0];
    result = sub_140018650(&v33);
    *(__m128i *)(a1 + 8) = v12;
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)a1 = 10;
    goto LABEL_5;
  }
  v35 = v26.m256i_i64[0];
  *(_OWORD *)v26.m256i_i8 = *(_OWORD *)&v26.m256i_u64[1];
  *(_OWORD *)&v26.m256i_u64[2] = 0;
  v31 = v6;
  v27 = __PAIR128__(v26.m256i_u64[1], v6);
  sub_1408A7710(&v20, &v26);
  result = v20.m128i_i64[1];
  v7 = v20.m128i_i64[0];
  if ( v20.m128i_i64[0] != -1 )
  {
    *(_QWORD *)(a1 + 88) = v25;
    v8 = _mm_loadu_si128(&v21);
    v9 = v22;
    v10 = v23;
    *(__m128i *)(a1 + 72) = v24;
    *(_OWORD *)(a1 + 56) = v10;
    *(_OWORD *)(a1 + 40) = v9;
    *(__m128i *)(a1 + 24) = v8;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)a1 = -1;
    v11 = v35;
    if ( !v35 )
      goto LABEL_5;
LABEL_19:
    result = sub_140001660(v31, v11, 1);
    goto LABEL_5;
  }
  v32[0] = v20.m128i_i64[1];
  v26.m256i_i64[0] = (__int64)v32;
  v26.m256i_i64[1] = (__int64)sub_14142D3F0;
  sub_14149C0F0(&v20, &unk_14174D80C, &v26);
  v26.m256i_i64[2] = v21.m128i_i64[0];
  *(__m128i *)v26.m256i_i8 = _mm_loadu_si128(&v20);
  v14 = *(_QWORD *)v32[0];
  v15 = *(_QWORD *)v32[0] == 1;
  v36 = v32[0];
  if ( v15 )
  {
    sub_140018650(v32[0] + 8LL);
  }
  else if ( !v14 )
  {
    v16 = *(_QWORD *)(v36 + 16);
    if ( v16 )
      sub_140001660(*(_QWORD *)(v36 + 8), v16, 1);
  }
  sub_140001660(v36, 40, 8);
  *(_QWORD *)a1 = 9;
  *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)&v26);
  result = v26.m256i_i64[2];
  *(_QWORD *)(a1 + 24) = v26.m256i_i64[2];
  v11 = v35;
  if ( v35 )
    goto LABEL_19;
LABEL_5:
  if ( v17 )
    return sub_140001660(v34, v17, 1);
  return result;
}