// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND resolve_relay_route node 0x1010e8a20 depth=1
_QWORD *__fastcall core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        unsigned __int64 a5)
{
  _QWORD *v6; // r10
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned __int8 v17; // di
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r9
  unsigned __int64 v21; // rsi
  __int64 v22; // r8
  unsigned __int8 v23; // di
  __int64 v24; // r8
  __int64 v25; // rdi
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rax
  unsigned __int8 v38; // al
  __int64 v39; // r11
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r10
  __int64 v44; // r11
  unsigned __int64 v45; // r9
  unsigned __int8 v46; // al
  __int64 v47; // r14
  __int64 v48; // r10
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __m128i v52; // xmm0
  __int64 v53; // rcx
  __m128i si128; // xmm2
  __m128i v55; // xmm3
  __m128i v56; // xmm4
  __m128i v57; // xmm1
  __m128i v58; // xmm5
  __m128i v59; // xmm6
  __m128i v60; // xmm1
  __int64 v61; // rsi
  __int64 v62; // rdx
  __m128i v63; // xmm0
  __int64 v64; // rcx
  __m128i v65; // xmm2
  __m128i v66; // xmm3
  __m128i v67; // xmm4
  __m128i v68; // xmm1
  __m128i v69; // xmm5
  __m128i v70; // xmm6
  __m128i v71; // xmm1
  _QWORD *v74; // [rsp+8h] [rbp-38h]
  __int64 v75; // [rsp+10h] [rbp-30h]

  v6 = (_QWORD *)a1; /*0x1010e8a34*/
  if ( !a5 ) /*0x1010e8a3a*/
  {
    *(_QWORD *)(a1 + 72) = a2; /*0x1010e8a5e*/
    *(_QWORD *)(a1 + 80) = a3; /*0x1010e8a62*/
    *(_QWORD *)(a1 + 88) = a4; /*0x1010e8a66*/
    *(_QWORD *)(a1 + 96) = 0; /*0x1010e8a6a*/
    *(_QWORD *)a1 = 0; /*0x1010e8a72*/
    *(_QWORD *)(a1 + 8) = 0; /*0x1010e8a79*/
    *(_QWORD *)(a1 + 16) = a3; /*0x1010e8a81*/
    *(_WORD *)(a1 + 24) = 257; /*0x1010e8a85*/
    *(_BYTE *)(a1 + 26) = 0; /*0x1010e8a8c*/
    return v6; /*0x1010e8a91*/
  }
  if ( a5 == 1 ) /*0x1010e8a47*/
  {
    v8 = 1; /*0x1010e8a49*/
    v9 = 0; /*0x1010e8a4f*/
    v10 = 0; /*0x1010e8a51*/
    v11 = 1; /*0x1010e8a54*/
    goto LABEL_30; /*0x1010e8a59*/
  }
  v12 = a3; /*0x1010e8a96*/
  v13 = 1; /*0x1010e8a99*/
  v14 = 1; /*0x1010e8aa1*/
  v15 = 0; /*0x1010e8aa6*/
  v8 = 1; /*0x1010e8aa9*/
  v9 = 0; /*0x1010e8aaf*/
  do /*0x1010e8b0f*/
  {
    while ( 1 ) /*0x1010e8ad7*/
    {
      v16 = v9 + v15; /*0x1010e8ad7*/
      if ( v9 + v15 >= a5 ) /*0x1010e8ade*/
LABEL_83:
        core::panicking::panic_bounds_check::h56740b1198b22635(v16, a5, (__int64)&off_1015B05C0); /*0x1010e8fcf*/
      v17 = a4[v16]; /*0x1010e8ae4*/
      if ( a4[v13] >= v17 ) /*0x1010e8aed*/
        break; /*0x1010e8aed*/
      v14 += v15 + 1; /*0x1010e8ac0*/
      v8 = v14 - v9; /*0x1010e8ac8*/
LABEL_7:
      v15 = 0; /*0x1010e8acb*/
      v13 = v14; /*0x1010e8ace*/
      if ( v14 >= a5 ) /*0x1010e8ad5*/
        goto LABEL_17; /*0x1010e8ad5*/
    }
    if ( a4[v13] != v17 ) /*0x1010e8aef*/
    {
      v9 = v14++; /*0x1010e8b20*/
      v8 = 1; /*0x1010e8b26*/
      goto LABEL_7; /*0x1010e8b2c*/
    }
    v18 = v15 + 1; /*0x1010e8af1*/
    v19 = v18; /*0x1010e8af7*/
    if ( v18 == v8 ) /*0x1010e8afa*/
      v19 = 0; /*0x1010e8afa*/
    else
      v18 = 0; /*0x1010e8afe*/
    v14 += v18; /*0x1010e8b02*/
    v15 = v19; /*0x1010e8b05*/
    v13 = v14 + v19; /*0x1010e8b08*/
  }
  while ( v14 + v19 < a5 ); /*0x1010e8b0f*/
LABEL_17:
  v20 = 1; /*0x1010e8b2e*/
  v21 = 1; /*0x1010e8b36*/
  v22 = 0; /*0x1010e8b3b*/
  v11 = 1; /*0x1010e8b3e*/
  v10 = 0; /*0x1010e8b43*/
  do /*0x1010e8ba0*/
  {
    while ( 1 ) /*0x1010e8b67*/
    {
      v16 = v10 + v22; /*0x1010e8b67*/
      if ( v10 + v22 >= a5 ) /*0x1010e8b6f*/
        goto LABEL_83; /*0x1010e8b6f*/
      v23 = a4[v16]; /*0x1010e8b75*/
      if ( a4[v20] <= v23 ) /*0x1010e8b7e*/
        break; /*0x1010e8b7e*/
      v21 += v22 + 1; /*0x1010e8b50*/
      v11 = v21 - v10; /*0x1010e8b58*/
LABEL_19:
      v22 = 0; /*0x1010e8b5b*/
      v20 = v21; /*0x1010e8b5e*/
      if ( v21 >= a5 ) /*0x1010e8b65*/
        goto LABEL_29; /*0x1010e8b65*/
    }
    if ( a4[v20] != v23 ) /*0x1010e8b80*/
    {
      v10 = v21++; /*0x1010e8bb0*/
      v11 = 1; /*0x1010e8bb6*/
      goto LABEL_19; /*0x1010e8bbb*/
    }
    v24 = v22 + 1; /*0x1010e8b82*/
    v25 = v24; /*0x1010e8b88*/
    if ( v24 == v11 ) /*0x1010e8b8b*/
      v25 = 0; /*0x1010e8b8b*/
    else
      v24 = 0; /*0x1010e8b8f*/
    v21 += v24; /*0x1010e8b93*/
    v22 = v25; /*0x1010e8b96*/
    v20 = v21 + v25; /*0x1010e8b99*/
  }
  while ( v21 + v25 < a5 ); /*0x1010e8ba0*/
LABEL_29:
  a3 = v12; /*0x1010e8bbd*/
LABEL_30:
  if ( v9 <= v10 ) /*0x1010e8bc3*/
    v8 = v11; /*0x1010e8bc7*/
  else
    v10 = v9; /*0x1010e8bc3*/
  v26 = a5 - v10; /*0x1010e8bce*/
  if ( a5 < v10 ) /*0x1010e8bd1*/
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v10, a5, (__int64)&off_1015B0620); /*0x1010e8fb8*/
  v27 = v10 + v8; /*0x1010e8bda*/
  if ( __CFADD__(v10, v8) || v27 > a5 ) /*0x1010e8be6*/
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v8, v27, a5, (__int64)&off_1015B0608); /*0x1010e8fca*/
  v75 = a3; /*0x1010e8bec*/
  v74 = v6; /*0x1010e8bf0*/
  if ( memcmp(a4, &a4[v8], v10) ) /*0x1010e8bfe*/
  {
    if ( a5 >= 4 ) /*0x1010e8c0b*/
    {
      v28 = a5 & 0xFFFFFFFFFFFFFFFCLL; /*0x1010e8dd2*/
      v52 = 0; /*0x1010e8dd6*/
      v53 = 0; /*0x1010e8dda*/
      si128 = _mm_load_si128((const __m128i *)"??"); /*0x1010e8ddc*/
      v55 = _mm_cvtsi32_si128(0x3Fu); /*0x1010e8de4*/
      v56 = _mm_load_si128((const __m128i *)&xmmword_1012FD510); /*0x1010e8dec*/
      v57 = 0; /*0x1010e8df4*/
      v6 = v74; /*0x1010e8df8*/
      v30 = v75; /*0x1010e8dfc*/
      do /*0x1010e8e81*/
      {
        v58 = _mm_cvtsi32_si128(*(unsigned __int16 *)&a4[v53]); /*0x1010e8e05*/
        v59 = _mm_cvtsi32_si128(*(unsigned __int16 *)&a4[v53 + 2]); /*0x1010e8e0f*/
        v52 = _mm_or_si128( /*0x1010e8e52*/
                v52,
                _mm_blend_epi16(
                  _mm_sll_epi64(v56, _mm_shuffle_epi32(_mm_cvtepu8_epi64(_mm_and_si128(v58, si128)), 238)),
                  _mm_sll_epi64(v56, _mm_and_si128(v58, v55)),
                  15));
        v57 = _mm_or_si128( /*0x1010e8e76*/
                v57,
                _mm_blend_epi16(
                  _mm_sll_epi64(v56, _mm_shuffle_epi32(_mm_cvtepu8_epi64(_mm_and_si128(v59, si128)), 238)),
                  _mm_sll_epi64(v56, _mm_and_si128(v59, v55)),
                  15));
        v53 += 4; /*0x1010e8e7a*/
      }
      while ( v28 != v53 ); /*0x1010e8e81*/
      v60 = _mm_or_si128(v57, v52); /*0x1010e8e87*/
      v29 = _mm_or_si128(_mm_shuffle_epi32(v60, 238), v60).u64[0]; /*0x1010e8e94*/
      goto LABEL_87; /*0x1010e8e99*/
    }
    v28 = 0; /*0x1010e8c11*/
    v29 = 0; /*0x1010e8c13*/
    v6 = v74; /*0x1010e8c15*/
    v30 = v75; /*0x1010e8c19*/
    do /*0x1010e900e*/
    {
      v29 |= 1LL << a4[v28++]; /*0x1010e9004*/
LABEL_87:
      ; /*0x1010e900b*/
    }
    while ( a5 != v28 ); /*0x1010e900e*/
    if ( v26 <= v10 ) /*0x1010e9013*/
      v26 = v10; /*0x1010e9013*/
    v61 = -1; /*0x1010e901a*/
    v62 = -1; /*0x1010e9021*/
    v8 = v26 + 1; /*0x1010e9028*/
    v50 = v10; /*0x1010e902b*/
    goto LABEL_91; /*0x1010e902b*/
  }
  v31 = a5 - 1; /*0x1010e8c22*/
  v32 = 1; /*0x1010e8c26*/
  v33 = 0; /*0x1010e8c2e*/
  v34 = 1; /*0x1010e8c31*/
  v35 = 0; /*0x1010e8c37*/
  while ( v34 + v33 < a5 ) /*0x1010e8c5f*/
  {
    v36 = ~v34 + a5 - v33; /*0x1010e8c6d*/
    if ( v36 >= a5 ) /*0x1010e8c73*/
LABEL_84:
      core::panicking::panic_bounds_check::h56740b1198b22635(v36, a5, (__int64)&off_1015B05D8); /*0x1010e8fde*/
    v37 = v31 - v33 - v35; /*0x1010e8c7f*/
    if ( v37 >= a5 ) /*0x1010e8c85*/
LABEL_85:
      core::panicking::panic_bounds_check::h56740b1198b22635(v37, a5, (__int64)&off_1015B05F0); /*0x1010e8fed*/
    v38 = a4[v37]; /*0x1010e8c8f*/
    if ( a4[v36] >= v38 ) /*0x1010e8c98*/
    {
      if ( a4[v36] != v38 ) /*0x1010e8cb0*/
      {
        v32 = 1; /*0x1010e8c40*/
        v33 = 0; /*0x1010e8c46*/
        v35 = v34++; /*0x1010e8c49*/
        if ( v8 == 1 ) /*0x1010e8c52*/
          break; /*0x1010e8c52*/
        continue; /*0x1010e8c52*/
      }
      v40 = v33 + 1; /*0x1010e8cb2*/
      v41 = v40; /*0x1010e8cb8*/
      if ( v40 == v32 ) /*0x1010e8cbb*/
        v41 = 0; /*0x1010e8cbb*/
      else
        v40 = 0; /*0x1010e8cbf*/
      v39 = v34 + v40; /*0x1010e8cc6*/
      v33 = v41; /*0x1010e8cc9*/
    }
    else
    {
      v39 = v33 + v34 + 1; /*0x1010e8c9a*/
      v32 = v39 - v35; /*0x1010e8ca2*/
      v33 = 0; /*0x1010e8ca5*/
    }
    v34 = v39; /*0x1010e8cd2*/
    if ( v32 == v8 ) /*0x1010e8cd8*/
      break; /*0x1010e8cd8*/
  }
  v42 = 1; /*0x1010e8cde*/
  v43 = 0; /*0x1010e8ce6*/
  v44 = 1; /*0x1010e8ce9*/
  v45 = 0; /*0x1010e8cef*/
  while ( v44 + v43 < a5 ) /*0x1010e8d1f*/
  {
    v36 = ~v44 + a5 - v43; /*0x1010e8d2d*/
    if ( v36 >= a5 ) /*0x1010e8d33*/
      goto LABEL_84; /*0x1010e8d33*/
    v37 = v31 - v43 - v45; /*0x1010e8d3f*/
    if ( v37 >= a5 ) /*0x1010e8d45*/
      goto LABEL_85; /*0x1010e8d45*/
    v46 = a4[v37]; /*0x1010e8d4f*/
    if ( a4[v36] <= v46 ) /*0x1010e8d58*/
    {
      if ( a4[v36] != v46 ) /*0x1010e8d70*/
      {
        v42 = 1; /*0x1010e8d00*/
        v43 = 0; /*0x1010e8d06*/
        v45 = v44++; /*0x1010e8d09*/
        if ( v8 == 1 ) /*0x1010e8d12*/
          break; /*0x1010e8d12*/
        continue; /*0x1010e8d12*/
      }
      v48 = v43 + 1; /*0x1010e8d72*/
      v49 = v48; /*0x1010e8d78*/
      if ( v48 == v42 ) /*0x1010e8d7b*/
        v49 = 0; /*0x1010e8d7b*/
      else
        v48 = 0; /*0x1010e8d7f*/
      v47 = v44 + v48; /*0x1010e8d86*/
      v43 = v49; /*0x1010e8d89*/
    }
    else
    {
      v47 = v43 + v44 + 1; /*0x1010e8d5a*/
      v42 = v47 - v45; /*0x1010e8d62*/
      v43 = 0; /*0x1010e8d65*/
    }
    v44 = v47; /*0x1010e8d92*/
    if ( v42 == v8 ) /*0x1010e8d98*/
      break; /*0x1010e8d98*/
  }
  if ( v45 > v35 ) /*0x1010e8da1*/
    v35 = v45; /*0x1010e8da1*/
  v50 = a5 - v35; /*0x1010e8da8*/
  if ( v8 ) /*0x1010e8dae*/
  {
    v6 = v74; /*0x1010e8db8*/
    v30 = v75; /*0x1010e8dbc*/
    if ( v8 < 4 ) /*0x1010e8dc0*/
    {
      v51 = 0; /*0x1010e8dc6*/
      v29 = 0; /*0x1010e8dc8*/
      goto LABEL_78; /*0x1010e8dca*/
    }
    v51 = v8 & 0xFFFFFFFFFFFFFFFCLL; /*0x1010e8eb8*/
    v63 = 0; /*0x1010e8ebc*/
    v64 = 0; /*0x1010e8ec0*/
    v65 = _mm_load_si128((const __m128i *)"??"); /*0x1010e8ec2*/
    v66 = _mm_cvtsi32_si128(0x3Fu); /*0x1010e8eca*/
    v67 = _mm_load_si128((const __m128i *)&xmmword_1012FD510); /*0x1010e8ed2*/
    v68 = 0; /*0x1010e8eda*/
    do /*0x1010e8f61*/
    {
      v69 = _mm_cvtsi32_si128(*(unsigned __int16 *)&a4[v64]); /*0x1010e8ee5*/
      v70 = _mm_cvtsi32_si128(*(unsigned __int16 *)&a4[v64 + 2]); /*0x1010e8eef*/
      v63 = _mm_or_si128( /*0x1010e8f32*/
              v63,
              _mm_blend_epi16(
                _mm_sll_epi64(v67, _mm_shuffle_epi32(_mm_cvtepu8_epi64(_mm_and_si128(v69, v65)), 238)),
                _mm_sll_epi64(v67, _mm_and_si128(v69, v66)),
                15));
      v68 = _mm_or_si128( /*0x1010e8f56*/
              v68,
              _mm_blend_epi16(
                _mm_sll_epi64(v67, _mm_shuffle_epi32(_mm_cvtepu8_epi64(_mm_and_si128(v70, v65)), 238)),
                _mm_sll_epi64(v67, _mm_and_si128(v70, v66)),
                15));
      v64 += 4; /*0x1010e8f5a*/
    }
    while ( v51 != v64 ); /*0x1010e8f61*/
    v71 = _mm_or_si128(v68, v63); /*0x1010e8f67*/
    v29 = _mm_or_si128(_mm_shuffle_epi32(v71, 238), v71).u64[0]; /*0x1010e8f74*/
    if ( v8 == v51 ) /*0x1010e8f7c*/
    {
      v61 = 0; /*0x1010e8f7e*/
    }
    else
    {
LABEL_78:
      v61 = 0; /*0x1010e8f82*/
      do /*0x1010e8f9f*/
        v29 |= 1LL << a4[v51++]; /*0x1010e8f95*/
      while ( v8 != v51 ); /*0x1010e8f9f*/
    }
    v62 = a5; /*0x1010e8fa1*/
  }
  else
  {
    v61 = 0; /*0x1010e8e9e*/
    v62 = a5; /*0x1010e8ea0*/
    v29 = 0; /*0x1010e8ea3*/
    v8 = 0; /*0x1010e8ea5*/
    v6 = v74; /*0x1010e8ea8*/
    v30 = v75; /*0x1010e8eac*/
  }
LABEL_91:
  v6[9] = a2; /*0x1010e902e*/
  v6[10] = v30; /*0x1010e9036*/
  v6[11] = a4; /*0x1010e903a*/
  v6[12] = a5; /*0x1010e903e*/
  *v6 = 1; /*0x1010e9042*/
  v6[1] = v10; /*0x1010e9049*/
  v6[2] = v50; /*0x1010e904d*/
  v6[3] = v8; /*0x1010e9051*/
  v6[4] = v29; /*0x1010e9055*/
  v6[5] = 0; /*0x1010e9059*/
  v6[6] = v30; /*0x1010e9061*/
  v6[7] = v61; /*0x1010e9065*/
  v6[8] = v62; /*0x1010e9069*/
  return v6; /*0x1010e9070*/
}