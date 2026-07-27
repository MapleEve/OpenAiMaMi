// win 1.2.1 | module src/core/relay/router_unlock_auth.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_cleanup_backup(__int64 a1, __m128i *a2, __m128i *a3, __int64 a4, __int64 a5)
{
  __m128i *v8; // rdi
  __m128i v9; // xmm0
  _BYTE *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  bool v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rdx
  __m128i v19; // xmm6
  __int64 v20; // rdi
  __int64 result; // rax
  char v22; // r15
  __int64 v23; // rdx
  __m128i v24; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h]
  __m128i v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h]
  _QWORD v28[2]; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v29; // [rsp+100h] [rbp+80h] BYREF
  __m128i v30; // [rsp+110h] [rbp+90h] BYREF
  __m128i *v31; // [rsp+120h] [rbp+A0h]
  __int64 v32; // [rsp+128h] [rbp+A8h]
  __int64 v33; // [rsp+130h] [rbp+B0h]
  const char *v34; // [rsp+138h] [rbp+B8h]
  __int64 v35; // [rsp+140h] [rbp+C0h]
  __int64 v36; // [rsp+148h] [rbp+C8h]
  void *v37; // [rsp+150h] [rbp+D0h]
  __m128i **v38; // [rsp+158h] [rbp+D8h]
  __int64 v39; // [rsp+160h] [rbp+E0h]
  __int64 v40; // [rsp+168h] [rbp+E8h]
  __int64 v41; // [rsp+178h] [rbp+F8h]
  __int64 v42; // [rsp+180h] [rbp+100h]
  __int64 v43; // [rsp+190h] [rbp+110h]
  __int64 v44; // [rsp+198h] [rbp+118h]
  __m128i v45; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v46; // [rsp+1C0h] [rbp+140h]
  __int64 v47; // [rsp+1C8h] [rbp+148h]
  _OWORD v48[2]; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i *v49; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i *v50; // [rsp+1F8h] [rbp+178h]
  __int128 v51; // [rsp+200h] [rbp+180h]
  __int64 v52; // [rsp+210h] [rbp+190h]
  __m128i *v53; // [rsp+218h] [rbp+198h]
  char v54; // [rsp+227h] [rbp+1A7h] BYREF
  __m128i *v55; // [rsp+228h] [rbp+1A8h]
  char v56; // [rsp+237h] [rbp+1B7h]
  __int64 v57; // [rsp+238h] [rbp+1B8h]

  v57 = -2; /*0x14048f56e*/
  v28[0] = a4; /*0x14048f589*/
  v28[1] = a5; /*0x14048f58d*/
  sub_14148D3C0(&v49, a2, a3); /*0x14048f598*/
  if ( v49 == (__m128i *)-1LL ) /*0x14048f5af*/
  {
    *(_QWORD *)&v48[0] = v50; /*0x14048f770*/
    v29.m128i_i64[0] = (__int64)v28; /*0x14048f77b*/
    v29.m128i_i64[1] = (__int64)sub_14041F680; /*0x14048f789*/
    v30.m128i_i64[0] = (__int64)v48; /*0x14048f797*/
    v30.m128i_i64[1] = (__int64)sub_141490720; /*0x14048f7a5*/
    sub_14149C0F0(&v26, &unk_14175780C, &v29); /*0x14048f7be*/
    v19 = v26; /*0x14048f7c4*/
    v20 = v27; /*0x14048f7c8*/
    result = sub_140018650(v48); /*0x14048f7d3*/
    *(__m128i *)(a1 + 8) = v19; /*0x14048f7d8*/
    *(_QWORD *)(a1 + 24) = v20; /*0x14048f7dc*/
    *(_QWORD *)a1 = 10; /*0x14048f7e0*/
    return result; /*0x14048f7e7*/
  }
  v55 = v49; /*0x14048f5b5*/
  v8 = (__m128i *)v51; /*0x14048f5bc*/
  v53 = v50; /*0x14048f5ca*/
  sub_140496580(&v45, v50, v51); /*0x14048f5d4*/
  if ( v45.m128i_i64[0] == -1 ) /*0x14048f5e5*/
  {
    *(_QWORD *)(a1 + 8) = v55; /*0x14048f7f3*/
    result = (__int64)v53; /*0x14048f7f7*/
    *(_QWORD *)(a1 + 16) = v53; /*0x14048f7fe*/
    *(_QWORD *)(a1 + 24) = v8; /*0x14048f802*/
    *(_QWORD *)a1 = -1; /*0x14048f806*/
    return result; /*0x14048f80d*/
  }
  v47 = v45.m128i_i64[0]; /*0x14048f5eb*/
  v49 = v53; /*0x14048f5f9*/
  v50 = v8; /*0x14048f600*/
  v51 = 0; /*0x14048f60b*/
  v56 = 1; /*0x14048f613*/
  sub_1408A8DF0(&v29, &v49); /*0x14048f62b*/
  if ( v29.m128i_i8[0] == -1 ) /*0x14048f638*/
  {
    v56 = 1; /*0x14048f812*/
    sub_140348CF0(&v29); /*0x14048f820*/
    goto LABEL_53; /*0x14048f826*/
  }
  v9 = _mm_loadu_si128(&v29); /*0x14048f63e*/
  v48[1] = _mm_loadu_si128(&v30); /*0x14048f64e*/
  v48[0] = v9; /*0x14048f656*/
  v10 = (_BYTE *)sub_141433D50("aimami_router_unlock_auth", 25, v48); /*0x14048f671*/
  if ( v10 && *v10 == 1 && v10[1] ) /*0x14048f681*/
    goto LABEL_23; /*0x14048f685*/
  v11 = sub_141433D50(aOpenaiApiKey_3, 14, v48); /*0x14048f69e*/
  v14 = v11 /*0x14048f997*/
     && *(_BYTE *)v11 == 3
     && (v12 = sub_14033BC10(*(_QWORD *)(v11 + 16), *(_QWORD *)(v11 + 24)), v13 >= 0x17)
     && _mm_movemask_epi8(
          _mm_and_si128(
            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v12), (__m128i)xmmword_141748DB0),
            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v12 + 7)), (__m128i)xmmword_141748DA0))) == 0xFFFF;
  v15 = sub_141433D50(aTokens_1, 6, v48); /*0x14048f6db*/
  if ( v15 && *(_BYTE *)v15 == 5 ) /*0x14048f6ed*/
  {
    if ( *(_QWORD *)(v15 + 24) != 0 || !v14 ) /*0x14048f6fb*/
      goto LABEL_14; /*0x14048f6fe*/
LABEL_23:
    v56 = 1; /*0x14048f834*/
    sub_1400104F0(v48); /*0x14048f842*/
    goto LABEL_49; /*0x14048f848*/
  }
  if ( v14 ) /*0x14048f82e*/
    goto LABEL_23; /*0x14048f82e*/
LABEL_14:
  sub_1408A9B00(&v26, &v49); /*0x14048f704*/
  if ( v26.m128i_i64[0] == -2 ) /*0x14048f71a*/
  {
    v16 = *(_QWORD *)v26.m128i_i64[1]; /*0x14048f724*/
    v17 = *(_QWORD *)v26.m128i_i64[1] == 1; /*0x14048f727*/
    v52 = v26.m128i_i64[1]; /*0x14048f72b*/
    if ( v17 ) /*0x14048f732*/
    {
      sub_140018650(v26.m128i_i64[1] + 8); /*0x14048f9a4*/
    }
    else if ( !v16 ) /*0x14048f73b*/
    {
      v18 = *(_QWORD *)(v52 + 16); /*0x14048f748*/
      if ( v18 ) /*0x14048f74f*/
        sub_140001660(*(_QWORD *)(v52 + 8), v18, 1); /*0x14048f766*/
    }
    sub_140001660(v52, 40, 8); /*0x14048f9bc*/
    v22 = 0; /*0x14048f9c1*/
  }
  else
  {
    sub_141684120(&v29, &v26, 176); /*0x14048f861*/
    v22 = sub_1403CCAD0(&v29); /*0x14048f870*/
    if ( v29.m128i_i64[0] != -1 && v29.m128i_i64[0] ) /*0x14048f883*/
      sub_140001660(v29.m128i_i64[1], v29.m128i_i64[0], 1); /*0x14048f892*/
    if ( v30.m128i_i64[1] != -1 && v30.m128i_i64[1] ) /*0x14048f8a7*/
      sub_140001660(v31, v30.m128i_i64[1], 1); /*0x14048f8b6*/
    if ( v33 != -1 && v33 ) /*0x14048f8cb*/
      sub_140001660(v34, v33, 1); /*0x14048f8da*/
    if ( v36 != -1 && v36 ) /*0x14048f8ef*/
      sub_140001660(v37, v36, 1); /*0x14048f8fe*/
    if ( v39 != -1 && v39 ) /*0x14048f913*/
      sub_140001660(v40, v39, 1); /*0x14048f922*/
    if ( v41 != -1 && v41 ) /*0x14048f937*/
      sub_140001660(v42, v41, 1); /*0x14048f946*/
    if ( v43 != -1 && v43 ) /*0x14048f95b*/
      sub_140001660(v44, v43, 1); /*0x14048f96a*/
  }
  v56 = 1; /*0x14048f9c4*/
  sub_1400104F0(v48); /*0x14048f9d2*/
  if ( !v22 ) /*0x14048f9db*/
  {
LABEL_53:
    v27 = v46; /*0x14048fadf*/
    v26 = _mm_loadu_si128(&v45); /*0x14048faf2*/
    v49 = a2; /*0x14048faf7*/
    v50 = a3; /*0x14048fafe*/
    v29.m128i_i64[0] = (__int64)v28; /*0x14048fb09*/
    v29.m128i_i64[1] = (__int64)sub_14041F680; /*0x14048fb17*/
    v30.m128i_i64[0] = (__int64)&v49; /*0x14048fb1e*/
    v30.m128i_i64[1] = (__int64)sub_14148F3A0; /*0x14048fb2c*/
    v31 = &v26; /*0x14048fb37*/
    v32 = (__int64)sub_1400015F0; /*0x14048fb45*/
    sub_14149C0F0(&v24, &unk_141757839, &v29); /*0x14048fb5e*/
    result = v25; /*0x14048fb64*/
    *(_QWORD *)(a1 + 24) = v25; /*0x14048fb68*/
    *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v24); /*0x14048fb71*/
    *(_QWORD *)a1 = 10; /*0x14048fb76*/
    v23 = v26.m128i_i64[0]; /*0x14048fb7d*/
    if ( !v26.m128i_i64[0] ) /*0x14048fb84*/
      goto LABEL_55; /*0x14048fb84*/
    goto LABEL_54; /*0x14048fb84*/
  }
LABEL_49:
  v27 = v46; /*0x14048f9e1*/
  v26 = _mm_loadu_si128(&v45); /*0x14048f9f4*/
  result = *(_QWORD *)off_141EC8D80; /*0x14048fa00*/
  if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14048fa07*/
  {
    v49 = &v26; /*0x14048fa11*/
    v50 = (__m128i *)sub_1400015F0; /*0x14048fa1f*/
    v29.m128i_i64[0] = 0; /*0x14048fa26*/
    v29.m128i_i64[1] = (__int64)aCodexmateLibCo_20; /*0x14048fa38*/
    v30 = (__m128i)0x2EuLL; /*0x14048fa3f*/
    v31 = (__m128i *)aSrcCoreRelayRo; /*0x14048fa5c*/
    v32 = 36; /*0x14048fa63*/
    v33 = 2; /*0x14048fa6e*/
    v34 = aCodexmateLibCo_20; /*0x14048fa79*/
    v35 = 46; /*0x14048fa80*/
    v36 = 0x1A900000001LL; /*0x14048fa95*/
    v37 = &unk_14175A0A6; /*0x14048faa3*/
    v38 = &v49; /*0x14048faaa*/
    result = sub_1412C36A0(&v54, &v29); /*0x14048fabf*/
  }
  *(_OWORD *)a1 = -1; /*0x14048fac9*/
  v23 = v26.m128i_i64[0]; /*0x14048facd*/
  if ( !v26.m128i_i64[0] ) /*0x14048fad4*/
    goto LABEL_55; /*0x14048fad4*/
LABEL_54:
  result = sub_140001660(v26.m128i_i64[1], v23, 1); /*0x14048fb86*/
LABEL_55:
  if ( v55 ) /*0x14048fb9f*/
    return sub_140001660(v53, v55, 1); /*0x14048fbae*/
  return result; /*0x14048fbb3*/
}