// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x1013c6290 d=2
unsigned __int64 __fastcall hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h50c0c5969bb24bb3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rax
  bool v6; // cf
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // r14
  size_t v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  const __m128i *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  size_t v19; // r15
  __int64 v21; // rax
  __m128i *v22; // r8
  const __m128i *v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rdx
  const __m128i **v26; // rcx
  __int64 v27; // r15
  const __m128i *v28; // rdi
  __int64 v30; // r12
  const __m128i *v31; // r14
  __m128i v32; // xmm0
  int v33; // ebx
  __int64 v34; // r13
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rsi
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  __m128i si128; // xmm0
  __int64 v48; // rdi
  __int64 v49; // rdx
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r9
  __int64 v52; // r12
  unsigned __int64 v53; // rax
  const __m128i *v54; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rsi
  unsigned __int64 v58; // r8
  unsigned __int64 v60; // rax
  __int64 i64; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  const __m128i *v68; // rax
  __int64 v69; // r9
  unsigned __int64 v70; // rax
  __int64 v71; // r13
  __m128i *v72; // r15
  __m128i *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  const __m128i *v77; // rax
  const __m128i *v78; // rsi
  __int64 v79; // [rsp+0h] [rbp-90h]
  __int64 v80; // [rsp+0h] [rbp-90h]
  __int64 v81; // [rsp+8h] [rbp-88h]
  __int64 (__fastcall *v82)(); // [rsp+8h] [rbp-88h]
  __int64 v83; // [rsp+10h] [rbp-80h]
  __int64 v84; // [rsp+10h] [rbp-80h]
  unsigned __int64 v85; // [rsp+38h] [rbp-58h]
  const __m128i *v87; // [rsp+50h] [rbp-40h]
  unsigned __int64 v88; // [rsp+58h] [rbp-38h]
  unsigned __int64 v90; // [rsp+60h] [rbp-30h]

  _R13 = a4; /*0x1013c62a1*/
  v5 = *(_QWORD *)(a1 + 24); /*0x1013c62a8*/
  v6 = __CFADD__(v5, a2); /*0x1013c62ac*/
  v7 = v5 + a2; /*0x1013c62ac*/
  if ( v6 ) /*0x1013c62af*/
    return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0((unsigned __int8)_R13); /*0x1013c62af*/
  v9 = *(_QWORD *)(a1 + 8); /*0x1013c62b8*/
  v10 = v9 + 1; /*0x1013c62bc*/
  v11 = ((v9 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v9 + 1) >> 3); /*0x1013c62ce*/
  if ( v9 < 8 ) /*0x1013c62d5*/
    v11 = *(_QWORD *)(a1 + 8); /*0x1013c62d5*/
  if ( v7 <= v11 >> 1 ) /*0x1013c62e2*/
  {
    if ( v9 == -1 ) /*0x1013c630f*/
    {
      v44 = 0; /*0x1013c65ce*/
    }
    else
    {
      v14 = *(const __m128i **)a1; /*0x1013c6315*/
      v15 = (v10 >> 4) - (((v10 & 0xF) == 0) - 1LL); /*0x1013c6328*/
      if ( v15 == 1 ) /*0x1013c6330*/
      {
        v16 = 0; /*0x1013c6336*/
      }
      else
      {
        v45 = v15 & 0x1FFFFFFFFFFFFFFELL; /*0x1013c65df*/
        v46 = 0; /*0x1013c65e2*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_101591360); /*0x1013c65e5*/
        do /*0x1013c6625*/
        {
          v14[v46] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v14[v46]), si128); /*0x1013c65fe*/
          v16 = v46 * 16 + 32; /*0x1013c6604*/
          v14[v46 + 1] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v14[v46 + 1]), si128); /*0x1013c6617*/
          v46 += 2; /*0x1013c661e*/
          v45 -= 2; /*0x1013c6621*/
        }
        while ( v45 ); /*0x1013c6625*/
      }
      if ( (v15 & 1) != 0 ) /*0x1013c6629*/
        *(const __m128i *)((char *)v14 + v16) = _mm_or_si128( /*0x1013c663c*/
                                                  _mm_cmpgt_epi8((__m128i)0LL, *(const __m128i *)((char *)v14 + v16)),
                                                  (__m128i)xmmword_101591360);
      if ( v10 < 0x10 ) /*0x1013c6645*/
      {
        v48 = 16; /*0x1013c6920*/
      }
      else
      {
        v48 = v9 + 1; /*0x1013c664b*/
        v10 = 16; /*0x1013c664e*/
      }
      memmove(&v14->i8[v48], v14, v10); /*0x1013c6656*/
      v82 = core::ops::function::FnOnce::call_once::hf3c0f388473ad5d0; /*0x1013c6662*/
      v84 = 48; /*0x1013c6669*/
      v80 = a1; /*0x1013c6671*/
      v52 = 0; /*0x1013c667a*/
      v90 = v9; /*0x1013c667d*/
      do /*0x1013c67df*/
      {
        v71 = v52++; /*0x1013c67e5*/
        v68 = *(const __m128i **)a1; /*0x1013c67eb*/
        if ( __OFSUB__(0, *(_BYTE *)(*(_QWORD *)a1 + v71)) ) /*0x1013c67ee*/
        {
          v72 = (__m128i *)&v68[-3 * v52]; /*0x1013c6802*/
          i64 = -v71; /*0x1013c6808*/
          while ( 1 ) /*0x1013c6699*/
          {
            v53 = core::hash::BuildHasher::hash_one::hfe5c95a42219c4db( /*0x1013c6699*/
                    a3,
                    &v68[-3 * v71 - 3],
                    v49,
                    i64,
                    v50,
                    v51,
                    v80,
                    v82,
                    v84);
            v54 = *(const __m128i **)a1; /*0x1013c669e*/
            v55 = *(_QWORD *)(a1 + 8); /*0x1013c66a1*/
            v56 = v53 & v55; /*0x1013c66a8*/
            _RDI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)a1 + (v53 & v55)))); /*0x1013c66b0*/
            v58 = v53 & v55; /*0x1013c66b4*/
            if ( !(_DWORD)_RDI ) /*0x1013c66b9*/
            {
              v69 = 16; /*0x1013c6788*/
              v58 = v53 & *(_QWORD *)(a1 + 8); /*0x1013c678e*/
              do /*0x1013c67a7*/
              {
                v58 = v55 & (v69 + v58); /*0x1013c6794*/
                _RDI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v54 + v58))); /*0x1013c679d*/
                v69 += 16; /*0x1013c67a1*/
              }
              while ( !(_DWORD)_RDI ); /*0x1013c67a7*/
            }
            __asm { tzcnt edi, edi } /*0x1013c66bf*/
            _RDI = v55 & (v58 + _RDI); /*0x1013c66c6*/
            if ( v54->i8[_RDI] >= 0 ) /*0x1013c66cd*/
            {
              _RDI = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v54)); /*0x1013c67b3*/
              __asm { tzcnt edi, edi } /*0x1013c67b7*/
            }
            v50 = v71 - v56; /*0x1013c66d6*/
            v51 = v55 & ((v71 - v56) ^ (_RDI - v56)); /*0x1013c66e2*/
            if ( v51 < 0x10 ) /*0x1013c66e9*/
            {
              v70 = v53 >> 57; /*0x1013c67c0*/
              v49 = (v71 - 16) & v55; /*0x1013c67c8*/
              v54->i8[v71] = v70; /*0x1013c67cb*/
              *(_BYTE *)(*(_QWORD *)a1 + v49 + 16) = v70; /*0x1013c67d2*/
              goto LABEL_53; /*0x1013c67d2*/
            }
            v50 = v54->u8[_RDI]; /*0x1013c66fa*/
            v60 = v53 >> 57; /*0x1013c66ff*/
            v51 = v55 & (_RDI - 16); /*0x1013c6707*/
            v54->i8[_RDI] = v60; /*0x1013c670a*/
            *(_BYTE *)(*(_QWORD *)a1 + v51 + 16) = v60; /*0x1013c6710*/
            if ( (_BYTE)v50 == 0xFF ) /*0x1013c6719*/
              break; /*0x1013c6719*/
            i64 = (__int64)v54[-3 * _RDI].i64; /*0x1013c671f*/
            v62 = v72->i64[0]; /*0x1013c6722*/
            v72->i64[0] = *(_QWORD *)(i64 - 48); /*0x1013c6729*/
            *(_QWORD *)(i64 - 48) = v62; /*0x1013c672c*/
            v63 = v72->i64[1]; /*0x1013c6730*/
            v72->i64[1] = *(_QWORD *)(i64 - 40); /*0x1013c6738*/
            *(_QWORD *)(i64 - 40) = v63; /*0x1013c673c*/
            v64 = v72[1].i64[0]; /*0x1013c6740*/
            v72[1].i64[0] = *(_QWORD *)(i64 - 32); /*0x1013c6748*/
            *(_QWORD *)(i64 - 32) = v64; /*0x1013c674c*/
            v65 = v72[1].i64[1]; /*0x1013c6750*/
            v72[1].i64[1] = *(_QWORD *)(i64 - 24); /*0x1013c6758*/
            *(_QWORD *)(i64 - 24) = v65; /*0x1013c675c*/
            v66 = v72[2].i64[0]; /*0x1013c6760*/
            v72[2].i64[0] = *(_QWORD *)(i64 - 16); /*0x1013c6768*/
            *(_QWORD *)(i64 - 16) = v66; /*0x1013c676c*/
            v67 = v72[2].i64[1]; /*0x1013c6770*/
            v49 = *(_QWORD *)(i64 - 8); /*0x1013c6774*/
            v72[2].i64[1] = v49; /*0x1013c6778*/
            *(_QWORD *)(i64 - 8) = v67; /*0x1013c677c*/
            v68 = *(const __m128i **)a1; /*0x1013c6780*/
          }
          v73 = (__m128i *)&v54[-3 * _RDI - 3]; /*0x1013c681b*/
          v74 = *(_QWORD *)(a1 + 8) & (v71 - 16); /*0x1013c6824*/
          *(_BYTE *)(*(_QWORD *)a1 + v71) = -1; /*0x1013c682b*/
          *(_BYTE *)(*(_QWORD *)a1 + v74 + 16) = -1; /*0x1013c6833*/
          v73[2].i64[1] = v72[2].i64[1]; /*0x1013c683c*/
          v73[2].i64[0] = v72[2].i64[0]; /*0x1013c6844*/
          v73[1].i64[1] = v72[1].i64[1]; /*0x1013c684c*/
          v73[1].i64[0] = v72[1].i64[0]; /*0x1013c6854*/
          v75 = v72->i64[0]; /*0x1013c6858*/
          v49 = v72->i64[1]; /*0x1013c685b*/
          v73->i64[1] = v49; /*0x1013c685f*/
          v73->i64[0] = v75; /*0x1013c6863*/
LABEL_53:
          v9 = v90; /*0x1013c67d6*/
        }
      }
      while ( v71 != v9 ); /*0x1013c67df*/
      v76 = *(_QWORD *)(a1 + 8); /*0x1013c686b*/
      v5 = *(_QWORD *)(a1 + 24); /*0x1013c686f*/
      v44 = ((v76 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v76 + 1) >> 3); /*0x1013c6882*/
      if ( v76 < 8 ) /*0x1013c6889*/
        v44 = *(_QWORD *)(a1 + 8); /*0x1013c6889*/
    }
    *(_QWORD *)(a1 + 16) = v44 - v5; /*0x1013c689a*/
    return 0x8000000000000001LL; /*0x1013c6890*/
  }
  else
  {
    v12 = v11 + 1; /*0x1013c62e4*/
    if ( v12 <= v7 ) /*0x1013c62ea*/
      v12 = v7; /*0x1013c62ea*/
    if ( v12 >= 0xF ) /*0x1013c62f2*/
    {
      if ( v12 > 0x1FFFFFFFFFFFFFFFLL ) /*0x1013c634d*/
        return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0((unsigned __int8)_R13); /*0x1013c63c4*/
      _BitScanReverse64(&v12, 8 * v12 / 7 - 1); /*0x1013c6373*/
      v13 = (0xFFFFFFFFFFFFFFFFLL >> ~(_BYTE)v12) + 1; /*0x1013c6383*/
    }
    else
    {
      v13 = 4; /*0x1013c6301*/
      if ( v12 >= 4 ) /*0x1013c6306*/
        v13 = (v12 & 8) + 8; /*0x1013c6306*/
    }
    v17 = 48 * v13; /*0x1013c638e*/
    if ( !is_mul_ok(0x30u, v13) ) /*0x1013c638e*/
      return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0((unsigned __int8)_R13); /*0x1013c638e*/
    v18 = 48 * v13; /*0x1013c6393*/
    v19 = v13 + 16 + v17; /*0x1013c63a7*/
    if ( __CFADD__(v13 + 16, v17) || v19 > 0x7FFFFFFFFFFFFFF0LL ) /*0x1013c63b4*/
      return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0((unsigned __int8)_R13); /*0x1013c63b9*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1013c63cd*/
    v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 0x10u); /*0x1013c63da*/
    if ( v21 ) /*0x1013c63e2*/
    {
      v87 = (const __m128i *)(v18 + v21); /*0x1013c63fa*/
      memset((void *)(v18 + v21), 255, v13 + 16); /*0x1013c6406*/
      v23 = v87; /*0x1013c640b*/
      v24 = v13 - 1; /*0x1013c6413*/
      v25 = (v13 & 0xFFFFFFFFFFFFFFF8LL) - (v13 >> 3); /*0x1013c6422*/
      if ( v13 - 1 < 8 ) /*0x1013c6429*/
        v25 = v13 - 1; /*0x1013c6429*/
      v79 = a1 + 32; /*0x1013c642d*/
      v26 = (const __m128i **)a1; /*0x1013c6434*/
      v81 = 48; /*0x1013c6438*/
      v83 = 16; /*0x1013c6443*/
      v88 = v25; /*0x1013c6453*/
      v27 = *(_QWORD *)(a1 + 24); /*0x1013c6463*/
      if ( v27 ) /*0x1013c646a*/
      {
        v28 = *(const __m128i **)a1; /*0x1013c6470*/
        _EBX = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)*(_QWORD *)a1)); /*0x1013c647b*/
        v30 = 0; /*0x1013c6485*/
        v31 = *(const __m128i **)a1; /*0x1013c6488*/
        v85 = v13 - 1; /*0x1013c648b*/
        do /*0x1013c658e*/
        {
          if ( !(_WORD)_EBX ) /*0x1013c6493*/
          {
            do /*0x1013c64b8*/
            {
              v32 = _mm_load_si128(++v31); /*0x1013c64a0*/
              v33 = _mm_movemask_epi8(v32); /*0x1013c64aa*/
              v30 += 16; /*0x1013c64ae*/
            }
            while ( v33 == 0xFFFF ); /*0x1013c64b8*/
            _EBX = ~v33; /*0x1013c64ba*/
          }
          __asm { tzcnt r13d, ebx } /*0x1013c64bc*/
          v34 = v30 + _R13; /*0x1013c64c1*/
          v35 = core::hash::BuildHasher::hash_one::hfe5c95a42219c4db( /*0x1013c64db*/
                  a3,
                  &v28[-3 * v34 - 3],
                  v25,
                  v26,
                  v22,
                  v23,
                  v79,
                  v81,
                  v83);
          v24 = v85; /*0x1013c64e3*/
          v36 = v85 & v35; /*0x1013c64e7*/
          v23 = v87; /*0x1013c64ea*/
          _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v87 + (v85 & v35)))); /*0x1013c64f4*/
          if ( !(_DWORD)_RDX ) /*0x1013c64fa*/
          {
            v42 = 16; /*0x1013c6599*/
            do /*0x1013c65b4*/
            {
              v36 = v85 & (v42 + v36); /*0x1013c65a1*/
              _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v87 + v36))); /*0x1013c65aa*/
              v42 += 16; /*0x1013c65ae*/
            }
            while ( !(_DWORD)_RDX ); /*0x1013c65b4*/
          }
          __asm { tzcnt edx, edx } /*0x1013c6500*/
          _RDX = v85 & (v36 + _RDX); /*0x1013c6507*/
          if ( v87->i8[_RDX] >= 0 ) /*0x1013c650f*/
          {
            _ECX = _mm_movemask_epi8(_mm_load_si128(v87)); /*0x1013c65c1*/
            __asm { tzcnt edx, ecx } /*0x1013c65c5*/
          }
          v26 = (const __m128i **)(_EBX & (unsigned int)(_EBX - 1)); /*0x1013c6518*/
          --v27; /*0x1013c651a*/
          v39 = v35 >> 57; /*0x1013c651d*/
          v87->i8[_RDX] = v39; /*0x1013c6528*/
          v87[1].i8[v85 & (_RDX - 16)] = v39; /*0x1013c652c*/
          v28 = *(const __m128i **)a1; /*0x1013c6535*/
          _R13 = 16 * v34; /*0x1013c6538*/
          v40 = *(_QWORD *)a1 - 3 * _R13; /*0x1013c6544*/
          v22 = (__m128i *)&v87[-3 * _RDX - 3]; /*0x1013c6553*/
          v22->i64[1] = *(_QWORD *)(v40 - 40); /*0x1013c655e*/
          v22[2].i64[1] = *(_QWORD *)(v40 - 8); /*0x1013c6566*/
          v22[2].i64[0] = *(_QWORD *)(v40 - 16); /*0x1013c656e*/
          v22[1].i64[1] = *(_QWORD *)(v40 - 24); /*0x1013c6576*/
          v41 = *(_QWORD *)(v40 - 48); /*0x1013c657a*/
          v25 = *(_QWORD *)(v40 - 32); /*0x1013c657e*/
          v22[1].i64[0] = v25; /*0x1013c6582*/
          v22->i64[0] = v41; /*0x1013c6586*/
          _EBX &= _EBX - 1; /*0x1013c6589*/
        }
        while ( v27 ); /*0x1013c658e*/
        v26 = (const __m128i **)a1; /*0x1013c68a0*/
        v77 = *(const __m128i **)(a1 + 24); /*0x1013c68a4*/
      }
      else
      {
        v77 = nullptr; /*0x1013c68c0*/
      }
      *v26 = v23; /*0x1013c68c9*/
      v78 = v26[1]; /*0x1013c68cc*/
      v26[1] = (const __m128i *)v24; /*0x1013c68d0*/
      v26[2] = (const __m128i *)(v88 - (_QWORD)v77); /*0x1013c68d4*/
      v26[3] = v77; /*0x1013c68d8*/
      if ( v78 ) /*0x1013c68df*/
      {
        if ( &v78->i8[(48LL * (_QWORD)v78 + 63) & 0xFFFFFFFFFFFFFFF0LL] != (__int8 *)-17LL ) /*0x1013c68f8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013c6902*/
      }
      return 0x8000000000000001LL; /*0x1013c6907*/
    }
    else
    {
      return hashbrown::raw::Fallibility::alloc_err::hcaa6512332942e5a((unsigned __int8)_R13, 16, v19); /*0x1013c68b6*/
    }
  }
}