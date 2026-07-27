// module: codexmate_lib/core/relay/legacy_virtual_auth
// addr: 0x140579290
// name: read_marker_0
// win 1.2.3 | = mac codexmate_lib::core::relay::legacy_virtual_auth::read_marker | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_marker_0(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __m128i v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  __m256i v17; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int128 v18; // [rsp+88h] [rbp+8h]
  __int64 v19; // [rsp+98h] [rbp+18h]
  __int64 v20; // [rsp+A0h] [rbp+20h]
  __int64 v21; // [rsp+A8h] [rbp+28h]
  __m128i v22; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v23; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+58h]
  _QWORD v25[4]; // [rsp+E0h] [rbp+60h] BYREF

  v25[1] = -2;
  sub_141473FA0((unsigned int)&v14, a2, a3, (unsigned int)&unk_14176237F, 24);
  v19 = v15;
  sub_14148D130(&v17, v15, v16);
  v4 = v17.m256i_i64[1];
  if ( v17.m256i_i64[0] == -1 )
  {
    if ( (unsigned __int8)sub_140570640(v17.m256i_i64[1]) )
    {
      v25[0] = v4;
      v22.m128i_i64[0] = (__int64)v25;
      v22.m128i_i64[1] = (__int64)sub_141490720;
      sub_14149C0F0(&v12, &unk_141762397, &v22);
      *(_QWORD *)(a1 + 24) = v13;
      *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v12);
      *(_QWORD *)a1 = 10;
      result = sub_140018650(v25);
    }
    else
    {
      v22.m128i_i64[0] = v4;
      *(_OWORD *)a1 = -1;
      result = sub_140018650(&v22);
    }
    goto LABEL_15;
  }
  v21 = v17.m256i_i64[0];
  *(_OWORD *)v17.m256i_i8 = *(_OWORD *)&v17.m256i_u64[1];
  *(_OWORD *)&v17.m256i_u64[2] = 0;
  v20 = v4;
  v18 = __PAIR128__(v17.m256i_u64[1], v4);
  sub_1408A7C50(&v22, &v17);
  result = v22.m128i_i64[1];
  v6 = v22.m128i_i64[0];
  if ( v22.m128i_i64[0] != -1 )
  {
    *(__m128i *)(a1 + 24) = _mm_loadu_si128(&v23);
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)a1 = -1;
    v7 = v21;
    v8 = v20;
    if ( !v21 )
      goto LABEL_15;
LABEL_14:
    result = sub_140001660(v8, v7, 1);
    goto LABEL_15;
  }
  v25[0] = v22.m128i_i64[1];
  v22.m128i_i64[0] = (__int64)v25;
  v22.m128i_i64[1] = (__int64)sub_14142D3F0;
  sub_14149C0F0(&v17, &unk_141760BF8, &v22);
  v23.m128i_i64[0] = v17.m256i_i64[2];
  v22 = _mm_loadu_si128((const __m128i *)&v17);
  v9 = *(_QWORD *)v25[0];
  v10 = *(_QWORD *)v25[0] == 1;
  v24 = v25[0];
  if ( v10 )
  {
    sub_140018650(v25[0] + 8LL);
  }
  else if ( !v9 )
  {
    v11 = *(_QWORD *)(v24 + 16);
    if ( v11 )
      sub_140001660(*(_QWORD *)(v24 + 8), v11, 1);
  }
  sub_140001660(v24, 40, 8);
  *(_QWORD *)a1 = 10;
  *(__m128i *)(a1 + 8) = _mm_load_si128(&v22);
  result = v23.m128i_i64[0];
  *(_QWORD *)(a1 + 24) = v23.m128i_i64[0];
  v7 = v21;
  v8 = v20;
  if ( v21 )
    goto LABEL_14;
LABEL_15:
  if ( v14 )
    return sub_140001660(v19, v14, 1);
  return result;
}