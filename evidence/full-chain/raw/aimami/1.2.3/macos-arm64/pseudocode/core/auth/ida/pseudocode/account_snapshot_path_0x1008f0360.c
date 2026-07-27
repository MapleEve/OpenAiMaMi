// __ZN13codexmate_lib4core4auth21account_snapshot_path28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1008f0360
// 1.2.3 NEW-delta | codexmate_lib::core::auth::account_snapshot_path::_$u7b$$u7b$closure$u7d$$u7d$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
char __fastcall codexmate_lib::core::auth::account_snapshot_path::_$u7b$$u7b$closure$u7d$$u7d$::h6430d60871dc1d41(
        unsigned __int8 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int8 *v8; // rcx
  char result; // al
  __int64 v10; // r13
  unsigned __int8 v11; // r15
  __m128i v12; // xmm2
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  __m128i v15; // xmm2
  __int64 v16; // rdx
  __int64 v17; // r12
  __m128i si128; // xmm2
  __m128i v19; // xmm5
  __m128i v20; // xmm6
  __int64 v21; // rdx
  __m128i v22; // xmm3
  __m128i v23; // xmm4
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  unsigned __int8 *v33; // rbx
  int v34; // ecx
  int v35; // edx
  int v36; // edi
  int v37; // esi
  __m128i v38; // [rsp-B8h] [rbp-B8h] BYREF
  __m128i v39; // [rsp-A8h] [rbp-A8h] BYREF
  __m128i v40; // [rsp-98h] [rbp-98h] BYREF
  __m128i v41; // [rsp-88h] [rbp-88h] BYREF
  unsigned __int8 *v42; // [rsp-78h] [rbp-78h] BYREF
  unsigned __int64 v43; // [rsp-70h] [rbp-70h]
  void *v44; // [rsp-68h] [rbp-68h]
  __int64 v45; // [rsp-60h] [rbp-60h]
  __m128i v46; // [rsp-58h] [rbp-58h] BYREF
  __m128i v47[4]; // [rsp-48h] [rbp-48h] BYREF

  if ( !a2 ) /*0x1008f0363*/
    return 0; /*0x1008f03be*/
  v6 = a1; /*0x1008f037c*/
  if ( a2 <= 2 ) /*0x1008f0383*/
  {
    if ( a2 == 2 && *(_WORD *)a1 == 14906 ) /*0x1008f03cb*/
      return 0; /*0x1008f03cb*/
  }
  else
  {
    if ( a2 <= 0x10 ) /*0x1008f0389*/
    {
      v7 = a2 + 1; /*0x1008f038b*/
      v8 = a1; /*0x1008f038f*/
      while ( *(_WORD *)v8 != 14906 ) /*0x1008f03a5*/
      {
        ++v8; /*0x1008f03ab*/
        if ( --v7 < 3 ) /*0x1008f03b5*/
          goto LABEL_41; /*0x1008f03b5*/
      }
      return 0; /*0x1008f03a5*/
    }
    v42 = a1; /*0x1008f03d6*/
    v43 = a2; /*0x1008f03da*/
    v44 = &unk_101676791; /*0x1008f03e5*/
    v45 = 1; /*0x1008f03e9*/
    if ( a2 >= 0x42 ) /*0x1008f03f5*/
    {
      v17 = 0; /*0x1008f04c4*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_101676420); /*0x1008f04c7*/
      while ( 1 ) /*0x1008f04dd*/
      {
        v19 = _mm_loadu_si128((const __m128i *)&a1[v17 + 16]); /*0x1008f04dd*/
        v20 = _mm_loadu_si128((const __m128i *)&a1[v17 + 17]); /*0x1008f04e4*/
        v21 = (unsigned int)_mm_movemask_epi8( /*0x1008f04f7*/
                              _mm_and_si128(
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&a1[v17 + 1]), si128),
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&a1[v17]), si128)));
        v22 = _mm_loadu_si128((const __m128i *)&a1[v17 + 32]); /*0x1008f04fb*/
        v23 = _mm_loadu_si128((const __m128i *)&a1[v17 + 33]); /*0x1008f0502*/
        v24 = _mm_loadu_si128((const __m128i *)&a1[v17 + 48]); /*0x1008f0509*/
        v25 = _mm_loadu_si128((const __m128i *)&a1[v17 + 49]); /*0x1008f0510*/
        if ( (_DWORD)v21 ) /*0x1008f0519*/
        {
          v46 = v24; /*0x1008f0598*/
          v47[0] = v25; /*0x1008f059d*/
          v29 = ((__int64 (__fastcall *)(unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::ha76d4189e28c1a6f)( /*0x1008f05bf*/
                  &v42,
                  v17,
                  v21,
                  0,
                  a5,
                  a6,
                  v19.i64[0],
                  v19.i64[1],
                  v20.i64[0],
                  v20.i64[1],
                  v22.i64[0],
                  v22.i64[1],
                  v23.i64[0],
                  v23.i64[1]);
          v20 = _mm_load_si128(&v39); /*0x1008f05c4*/
          v19 = _mm_load_si128(&v38); /*0x1008f05cc*/
          v23 = _mm_load_si128(&v41); /*0x1008f05d4*/
          v22 = _mm_load_si128(&v40); /*0x1008f05d9*/
          v25 = _mm_load_si128(v47); /*0x1008f05e1*/
          v24 = _mm_load_si128(&v46); /*0x1008f05e6*/
          si128 = _mm_load_si128((const __m128i *)&xmmword_101676420); /*0x1008f05eb*/
          v11 = v29; /*0x1008f05f3*/
        }
        else
        {
          v11 = 0; /*0x1008f051b*/
        }
        v26 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v20, si128), _mm_cmpeq_epi8(v19, si128))); /*0x1008f052a*/
        if ( (_WORD)v26 ) /*0x1008f0531*/
        {
          v46 = v24; /*0x1008f060b*/
          v47[0] = v25; /*0x1008f0610*/
          v30 = ((__int64 (__fastcall *)(unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::ha76d4189e28c1a6f)( /*0x1008f0622*/
                  &v42,
                  v17 + 16,
                  v26,
                  v11,
                  a5,
                  a6,
                  v38.i64[0],
                  v38.i64[1],
                  v39.i64[0],
                  v39.i64[1],
                  v22.i64[0],
                  v22.i64[1],
                  v23.i64[0],
                  v23.i64[1]);
          v23 = _mm_load_si128(&v41); /*0x1008f0627*/
          v22 = _mm_load_si128(&v40); /*0x1008f062c*/
          v25 = _mm_load_si128(v47); /*0x1008f0634*/
          v24 = _mm_load_si128(&v46); /*0x1008f0639*/
          si128 = _mm_load_si128((const __m128i *)&xmmword_101676420); /*0x1008f063e*/
          v11 |= v30; /*0x1008f0646*/
        }
        v27 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v23, si128), _mm_cmpeq_epi8(v22, si128))); /*0x1008f0543*/
        if ( (_WORD)v27 ) /*0x1008f054a*/
        {
          v46 = v24; /*0x1008f065e*/
          v47[0] = v25; /*0x1008f0663*/
          v31 = ((__int64 (__fastcall *)(unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::ha76d4189e28c1a6f)( /*0x1008f0668*/
                  &v42,
                  v17 + 32,
                  v27,
                  v11,
                  a5,
                  a6,
                  v38.i64[0],
                  v38.i64[1],
                  v39.i64[0],
                  v39.i64[1],
                  v40.i64[0],
                  v40.i64[1],
                  v41.i64[0],
                  v41.i64[1]);
          v25 = _mm_load_si128(v47); /*0x1008f066d*/
          v24 = _mm_load_si128(&v46); /*0x1008f0672*/
          si128 = _mm_load_si128((const __m128i *)&xmmword_101676420); /*0x1008f0677*/
          v11 |= v31; /*0x1008f067f*/
        }
        v28 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v25, si128), _mm_cmpeq_epi8(v24, si128))); /*0x1008f055c*/
        if ( (_WORD)v28 ) /*0x1008f0563*/
        {
          v32 = ((__int64 (__fastcall *)(unsigned __int8 **, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::ha76d4189e28c1a6f)( /*0x1008f0697*/
                  &v42,
                  v17 + 48,
                  v28,
                  v11,
                  a5,
                  a6,
                  v38.i64[0],
                  v38.i64[1],
                  v39.i64[0],
                  v39.i64[1],
                  v40.i64[0],
                  v40.i64[1],
                  v41.i64[0],
                  v41.i64[1]);
          si128 = _mm_load_si128((const __m128i *)&xmmword_101676420); /*0x1008f069c*/
          v11 |= v32; /*0x1008f06a4*/
          v10 = v17 + 64; /*0x1008f06a7*/
          if ( v17 + 129 >= a2 ) /*0x1008f06b6*/
            goto LABEL_14; /*0x1008f06b6*/
        }
        else
        {
          v10 = v17 + 64; /*0x1008f0569*/
          if ( v17 + 129 >= a2 ) /*0x1008f0578*/
            goto LABEL_14; /*0x1008f0578*/
        }
        v17 = v10; /*0x1008f057e*/
        if ( v11 ) /*0x1008f0584*/
          goto LABEL_14; /*0x1008f0584*/
      }
    }
    v10 = 0; /*0x1008f03fb*/
    v11 = 0; /*0x1008f03fe*/
LABEL_14:
    if ( v10 + 17 < a2 && !v11 ) /*0x1008f040d*/
    {
      v12 = _mm_load_si128((const __m128i *)&xmmword_101676420); /*0x1008f040f*/
      do /*0x1008f0439*/
      {
        v13 = (unsigned int)_mm_movemask_epi8( /*0x1008f0439*/
                              _mm_and_si128(
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&a1[v10 + 1]), v12),
                                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&a1[v10]), v12)));
        if ( (_DWORD)v13 ) /*0x1008f043f*/
        {
          v14 = core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::ha76d4189e28c1a6f( /*0x1008f0460*/
                  &v42,
                  v10,
                  v13,
                  0,
                  a5,
                  a6,
                  v38.i64[0],
                  v38.i64[1],
                  v39.i64[0],
                  v39.i64[1],
                  v40.i64[0],
                  v40.i64[1],
                  v41.i64[0],
                  v41.i64[1],
                  v42,
                  v43,
                  v44,
                  v45,
                  v46.i64[0],
                  v46.i64[1],
                  v47[0].i64[0],
                  v47[0].i64[1]);
          v12 = _mm_load_si128((const __m128i *)&xmmword_101676420); /*0x1008f0465*/
          v11 = v14; /*0x1008f046d*/
          if ( v10 + 33 >= a2 ) /*0x1008f0477*/
            break; /*0x1008f0477*/
        }
        else
        {
          v11 = 0; /*0x1008f0441*/
          if ( v10 + 33 >= a2 ) /*0x1008f044b*/
            break; /*0x1008f044b*/
        }
        v10 += 16; /*0x1008f044d*/
      }
      while ( !v11 ); /*0x1008f0439*/
    }
    v15 = _mm_load_si128((const __m128i *)&xmmword_101676420); /*0x1008f0479*/
    v16 = (unsigned int)_mm_movemask_epi8( /*0x1008f049b*/
                          _mm_and_si128(
                            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&a1[a2 - 16]), v15),
                            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)&a1[a2 - 17]), v15)));
    if ( (_DWORD)v16 ) /*0x1008f04a1*/
    {
      if ( (unsigned __int8)((__int64 (__fastcall *)(unsigned __int8 **, unsigned __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))core::str::pattern::simd_contains::_$u7b$$u7b$closure$u7d$$u7d$::ha76d4189e28c1a6f)( /*0x1008f06d5*/
                              &v42,
                              a2 - 17,
                              v16,
                              v11,
                              a5,
                              a6,
                              v38.i64[0],
                              v38.i64[1],
                              v39.i64[0],
                              v39.i64[1],
                              v40.i64[0],
                              v40.i64[1],
                              v41.i64[0],
                              v41.i64[1])
         | v11 )
      {
        return 0; /*0x1008f06db*/
      }
    }
    else if ( v11 ) /*0x1008f04aa*/
    {
      return 0; /*0x1008f04b0*/
    }
  }
LABEL_41:
  v33 = &a1[a2]; /*0x1008f06e1*/
  while ( 1 ) /*0x1008f0723*/
  {
    result = 1; /*0x1008f0723*/
    if ( v6 == v33 ) /*0x1008f0728*/
      break; /*0x1008f0728*/
    v34 = *v6; /*0x1008f072e*/
    if ( (v34 & 0x80u) == 0 ) /*0x1008f0734*/
    {
      ++v6; /*0x1008f06f0*/
    }
    else
    {
      v35 = v34 & 0x1F; /*0x1008f0738*/
      v36 = v6[1] & 0x3F; /*0x1008f0740*/
      if ( (unsigned __int8)v34 <= 0xDFu ) /*0x1008f0746*/
      {
        v6 += 2; /*0x1008f0784*/
        v34 = v36 | (v35 << 6); /*0x1008f078d*/
      }
      else
      {
        v37 = (v36 << 6) | v6[2] & 0x3F; /*0x1008f0753*/
        if ( (unsigned __int8)v34 < 0xF0u ) /*0x1008f0758*/
        {
          v6 += 3; /*0x1008f0794*/
          v34 = (v35 << 12) | v37; /*0x1008f079d*/
        }
        else
        {
          v34 = ((v34 & 7) << 18) | (v37 << 6) | v6[3] & 0x3F; /*0x1008f076d*/
          if ( v34 == 1114112 ) /*0x1008f0775*/
            return result; /*0x1008f0775*/
          v6 += 4; /*0x1008f077b*/
        }
      }
    }
    if ( (v34 & 0x1FFFDFu) - 91 < 0xFFFFFFE6 /*0x1008f0713*/
      && (unsigned int)(v34 - 58) < 0xFFFFFFF6
      && (unsigned int)(v34 - 47) < 0xFFFFFFFE )
    {
      return 0; /*0x1008f071d*/
    }
  }
  return result; /*0x1008f03be*/
}