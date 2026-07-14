void __fastcall alloc::vec::Vec$LT$T$C$A$GT$::retain::h40cdd47c79f2fe38(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  __m128i v8; // xmm3
  size_t v10; // rbx
  int v11; // eax
  __m128i v12; // xmm1
  __int64 v13; // rdx
  int v14; // eax
  bool v15; // zf
  __m128i v16; // xmm2
  __int64 i; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rsi
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r14
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rbx
  __m128i v27; // xmm2
  size_t v29; // rdx
  __int64 v30; // rax
  const void *v31; // rdi
  _QWORD *v32; // r15
  unsigned __int64 v33; // r12
  size_t v34; // r14
  int v35; // eax
  _QWORD *v36; // r12
  __int64 v37; // rcx
  __m128i v38; // xmm1
  __int64 v39; // rsi
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rbx
  __int64 v42; // r15
  _QWORD *v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rsi
  __m128i v47; // [rsp+0h] [rbp-B0h] BYREF
  __m128i v48; // [rsp+10h] [rbp-A0h] BYREF
  __m128i v49; // [rsp+20h] [rbp-90h] BYREF
  __m128i v50; // [rsp+30h] [rbp-80h] BYREF
  __int64 v51; // [rsp+48h] [rbp-68h]
  _QWORD *v52; // [rsp+50h] [rbp-60h]
  __int64 v53; // [rsp+58h] [rbp-58h]
  __int64 v54; // [rsp+60h] [rbp-50h]
  __int64 v55; // [rsp+68h] [rbp-48h]
  __int64 v56; // [rsp+70h] [rbp-40h]
  __int64 v57; // [rsp+78h] [rbp-38h]
  unsigned __int64 v58; // [rsp+80h] [rbp-30h]

  v53 = a1; /*0x1006f2984*/
  v2 = *(_QWORD *)(a1 + 16); /*0x1006f2988*/
  if ( !v2 ) /*0x1006f298f*/
    return; /*0x1006f298f*/
  v57 = *(_QWORD *)(v53 + 8); /*0x1006f299d*/
  v52 = a2 + 4; /*0x1006f29a5*/
  v3 = a2[3]; /*0x1006f29a9*/
  v4 = *a2; /*0x1006f29ad*/
  v54 = a2[1]; /*0x1006f29b4*/
  v51 = v4; /*0x1006f29b8*/
  v55 = v4 - 24; /*0x1006f29c0*/
  v50.i64[0] = v3; /*0x1006f29c4*/
  v56 = v2; /*0x1006f29cb*/
  if ( v3 ) /*0x1006f29cf*/
  {
    v5 = 0; /*0x1006f29d5*/
LABEL_12:
    v19 = v57 + 168 * v5; /*0x1006f2abd*/
    v20 = v19 + 128; /*0x1006f2acc*/
    v18 = core::hash::BuildHasher::hash_one::hf01745fa5506c7f9(v52, v19 + 128); /*0x1006f2adb*/
    v12 = (__m128i)-1LL; /*0x1006f2ae0*/
    v13 = v55; /*0x1006f2ae8*/
    v16 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v18 >> 57), (__m128i)0LL); /*0x1006f2af7*/
    for ( i = 0; ; i += 16 ) /*0x1006f2afc*/
    {
      v6 = v54 & v18; /*0x1006f29e0*/
      HIDWORD(_RCX) = HIDWORD(v51); /*0x1006f29e4*/
      v8 = _mm_loadu_si128((const __m128i *)(v51 + v6)); /*0x1006f29e8*/
      _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v8, v16)); /*0x1006f29f5*/
      if ( _R15D ) /*0x1006f29fd*/
      {
        v10 = *(_QWORD *)(v19 + 144); /*0x1006f2a03*/
        v58 = v6; /*0x1006f2a0a*/
        v47 = v16; /*0x1006f2a0e*/
        v48.i64[0] = i; /*0x1006f2a16*/
        v49 = v8; /*0x1006f2a1d*/
        while ( 1 ) /*0x1006f2a25*/
        {
          __asm { tzcnt ecx, r15d } /*0x1006f2a25*/
          _RCX = -(__int64)(v54 & (v6 + _RCX)); /*0x1006f2a31*/
          if ( v10 == *(_QWORD *)(v13 + 24 * _RCX + 16) ) /*0x1006f2a3d*/
          {
            v11 = memcmp(*(const void **)(v19 + 136), *(const void **)(v13 + 24 * _RCX + 8), v10); /*0x1006f2a51*/
            v12 = (__m128i)-1LL; /*0x1006f2a56*/
            v13 = v55; /*0x1006f2a5a*/
            if ( !v11 ) /*0x1006f2a60*/
              break; /*0x1006f2a60*/
          }
          v14 = _R15D - 1; /*0x1006f2a62*/
          LOWORD(v14) = _R15D & (_R15D - 1); /*0x1006f2a66*/
          v15 = (_WORD)v14 == 0; /*0x1006f2a66*/
          _R15D = v14; /*0x1006f2a6a*/
          v6 = v58; /*0x1006f2a6d*/
          v16 = _mm_load_si128(&v47); /*0x1006f2a71*/
          i = v48.i64[0]; /*0x1006f2a79*/
          v8 = _mm_load_si128(&v49); /*0x1006f2a80*/
          if ( v15 ) /*0x1006f2a88*/
            goto LABEL_9; /*0x1006f2a88*/
        }
        if ( ++v5 == v56 ) /*0x1006f2ab7*/
          return; /*0x1006f2ab7*/
        goto LABEL_12; /*0x1006f2ab7*/
      }
LABEL_9:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v8, v12)) ) /*0x1006f2a94*/
        break; /*0x1006f2a94*/
      v18 = v6 + i + 16; /*0x1006f2a9c*/
    }
    v2 = v56; /*0x1006f2b03*/
    v21 = *(_QWORD *)(v19 + 128); /*0x1006f2b07*/
    if ( !v21 ) /*0x1006f2b11*/
      goto LABEL_15; /*0x1006f2b11*/
    goto LABEL_14; /*0x1006f2b11*/
  }
  v19 = v57; /*0x1006f2db1*/
  v20 = v57 + 128; /*0x1006f2db5*/
  v5 = 0; /*0x1006f2dbc*/
  v21 = *(_QWORD *)(v57 + 128); /*0x1006f2dbf*/
  if ( v21 ) /*0x1006f2dc9*/
LABEL_14:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v20 + 8), v21, 1); /*0x1006f2b13*/
LABEL_15:
  v58 = v5; /*0x1006f2b22*/
  v22 = v5 + 1; /*0x1006f2b26*/
  if ( *(_DWORD *)(v19 + 80) != 2 && !__OFSUB__(-*(_QWORD *)(v19 + 96), 1) && *(_QWORD *)(v19 + 96) ) /*0x1006f2b34*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v19 + 104), *(_QWORD *)(v19 + 96), 1); /*0x1006f2b47*/
  if ( v22 < v2 ) /*0x1006f2b4f*/
  {
    if ( v50.i64[0] ) /*0x1006f2b5a*/
    {
      do /*0x1006f2c8d*/
      {
        v36 = (_QWORD *)(v57 + 168 * v22); /*0x1006f2c9e*/
        v43 = v36 + 16; /*0x1006f2ca2*/
        v40 = core::hash::BuildHasher::hash_one::hf01745fa5506c7f9(v52, v36 + 16); /*0x1006f2cb6*/
        v38 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v40 >> 57), (__m128i)0LL); /*0x1006f2cc5*/
        v39 = 0; /*0x1006f2cca*/
        v37 = v55; /*0x1006f2ccc*/
        while ( 1 ) /*0x1006f2b80*/
        {
          v26 = v54 & v40; /*0x1006f2b80*/
          v27 = _mm_loadu_si128((const __m128i *)(v51 + v26)); /*0x1006f2b88*/
          _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v27, v38)); /*0x1006f2b95*/
          if ( (_DWORD)_RAX ) /*0x1006f2b9b*/
            break; /*0x1006f2b9b*/
LABEL_27:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v27, (__m128i)-1LL)) ) /*0x1006f2c38*/
          {
            if ( *v43 ) /*0x1006f2ce0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36[17], *v43, 1); /*0x1006f2cf6*/
            v42 = v56; /*0x1006f2d01*/
            if ( *((_DWORD *)v36 + 20) != 2 ) /*0x1006f2d05*/
            {
              v44 = v36[12]; /*0x1006f2d07*/
              if ( v44 != 0x8000000000000000LL ) /*0x1006f2d19*/
              {
                if ( v44 ) /*0x1006f2d22*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36[13], v44, 1); /*0x1006f2d32*/
              }
            }
            goto LABEL_30; /*0x1006f2d37*/
          }
          v40 = v26 + v39 + 16; /*0x1006f2c44*/
          v39 += 16; /*0x1006f2c49*/
        }
        v29 = v36[18]; /*0x1006f2ba1*/
        v48 = v38; /*0x1006f2ba9*/
        v49.i64[0] = v39; /*0x1006f2bb1*/
        v50 = v27; /*0x1006f2bb8*/
        while ( 1 ) /*0x1006f2bbd*/
        {
          v47.i64[0] = _RAX; /*0x1006f2bbd*/
          __asm { tzcnt eax, eax } /*0x1006f2bc4*/
          v30 = -3LL * (v54 & (v26 + _RAX)); /*0x1006f2bd2*/
          if ( v29 == *(_QWORD *)(v37 + 8 * v30 + 16) ) /*0x1006f2bdb*/
          {
            v31 = (const void *)v36[17]; /*0x1006f2be5*/
            v32 = v36; /*0x1006f2bed*/
            v33 = v22; /*0x1006f2bf0*/
            v34 = v29; /*0x1006f2bf3*/
            v35 = memcmp(v31, *(const void **)(v37 + 8 * v30 + 8), v29); /*0x1006f2bf6*/
            v29 = v34; /*0x1006f2bfb*/
            v22 = v33; /*0x1006f2bfe*/
            v36 = v32; /*0x1006f2c01*/
            v37 = v55; /*0x1006f2c04*/
            if ( !v35 ) /*0x1006f2c0a*/
              break; /*0x1006f2c0a*/
          }
          _RAX = (unsigned int)(v47.i32[0] - 1); /*0x1006f2c13*/
          LOWORD(_RAX) = v47.i16[0] & (v47.i16[0] - 1); /*0x1006f2c16*/
          v38 = _mm_load_si128(&v48); /*0x1006f2c19*/
          v39 = v49.i64[0]; /*0x1006f2c21*/
          v27 = _mm_load_si128(&v50); /*0x1006f2c28*/
          if ( !(_WORD)_RAX ) /*0x1006f2c2d*/
            goto LABEL_27; /*0x1006f2c2d*/
        }
        v41 = v58; /*0x1006f2c60*/
        memcpy((void *)(v57 + 168 * v58), v32, 0xA8u); /*0x1006f2c77*/
        v58 = v41 + 1; /*0x1006f2c7f*/
        v42 = v56; /*0x1006f2c83*/
LABEL_30:
        ++v22; /*0x1006f2c87*/
      }
      while ( v22 != v42 ); /*0x1006f2c8d*/
    }
    else
    {
      v23 = v2 - 1; /*0x1006f2b60*/
      v24 = v58; /*0x1006f2b63*/
      v25 = (_QWORD *)(168 * v58 + v57 + 304); /*0x1006f2b72*/
      do /*0x1006f2d4d*/
      {
        v45 = *(v25 - 1); /*0x1006f2d4f*/
        if ( v45 ) /*0x1006f2d56*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v25, v45, 1); /*0x1006f2d60*/
        if ( *((_DWORD *)v25 - 14) != 2 ) /*0x1006f2d69*/
        {
          v46 = *(v25 - 5); /*0x1006f2d6b*/
          if ( v46 != 0x8000000000000000LL ) /*0x1006f2d7c*/
          {
            if ( v46 ) /*0x1006f2d81*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v25 - 4), v46, 1); /*0x1006f2d8c*/
          }
        }
        --v23; /*0x1006f2d40*/
        v25 += 21; /*0x1006f2d43*/
      }
      while ( v24 != v23 ); /*0x1006f2d4d*/
    }
  }
  *(_QWORD *)(v53 + 16) = v58; /*0x1006f2d9b*/
}