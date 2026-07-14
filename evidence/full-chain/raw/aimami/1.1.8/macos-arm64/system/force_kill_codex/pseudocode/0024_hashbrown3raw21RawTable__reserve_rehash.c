// mac 1.1.8 force_kill_codex node va=0x1010f2650 depth=3
// hashbrown3raw21RawTable::reserve_rehash
__int64 __fastcall hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h65961a3992d9a5d8(
        const __m128i **a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  bool v5; // cf
  unsigned __int64 v6; // rsi
  const __m128i **v7; // rbx
  unsigned __int64 v8; // r14
  size_t v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  const __m128i *v12; // r8
  const __m128i *v13; // rdi
  __int64 v14; // rdx
  const __m128i *v15; // r13
  __m128i v16; // xmm0
  const __m128i *v17; // rbx
  __int64 v19; // r14
  __m128i v20; // xmm0
  int v21; // r12d
  const __m128i *v22; // r15
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rsi
  const __m128i *v31; // r12
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 result; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __m128i si128; // xmm0
  __int64 v39; // rdi
  __int64 v40; // r13
  bool v41; // zf
  __int64 v42; // r14
  const __m128i *i; // rbx
  unsigned __int64 v44; // rax
  const __m128i *v45; // rcx
  unsigned __int64 v47; // rdi
  unsigned __int64 v49; // rdx
  __int8 v50; // di
  unsigned __int64 v51; // rax
  __int64 v52; // r8
  const __m128i **v53; // r9
  const __m128i *v54; // rsi
  __int32 v55; // eax
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  const __m128i *v60; // [rsp+0h] [rbp-90h] BYREF
  const __m128i *v61; // [rsp+8h] [rbp-88h]
  __int64 v62; // [rsp+10h] [rbp-80h]
  const __m128i *v63; // [rsp+20h] [rbp-70h]
  const __m128i *v64; // [rsp+28h] [rbp-68h]
  __int8 *v65; // [rsp+30h] [rbp-60h]
  const __m128i *v66; // [rsp+38h] [rbp-58h]
  __int64 v67; // [rsp+40h] [rbp-50h]
  __int64 v68; // [rsp+48h] [rbp-48h]
  const __m128i *v69; // [rsp+50h] [rbp-40h]
  const __m128i **v70; // [rsp+58h] [rbp-38h]
  unsigned __int64 v71; // [rsp+60h] [rbp-30h]

  v68 = a3; /*0x1010f2661*/
  _R15 = a1[3]; /*0x1010f2665*/
  v5 = __CFADD__(_R15, a2); /*0x1010f2669*/
  v6 = (unsigned __int64)_R15->u64 + a2; /*0x1010f2669*/
  if ( v5 ) /*0x1010f266c*/
    return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0(a4); /*0x1010f2aea*/
  v7 = a1; /*0x1010f2672*/
  v8 = (unsigned __int64)a1[1]; /*0x1010f2675*/
  v9 = v8 + 1; /*0x1010f2679*/
  v10 = ((v8 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v8 + 1) >> 3); /*0x1010f268b*/
  if ( v8 < 8 ) /*0x1010f2692*/
    v10 = (unsigned __int64)a1[1]; /*0x1010f2692*/
  v70 = a1; /*0x1010f269f*/
  if ( v6 <= v10 >> 1 ) /*0x1010f26a3*/
  {
    if ( v8 == -1 ) /*0x1010f281c*/
    {
      v35 = 0; /*0x1010f285c*/
    }
    else
    {
      v31 = *a1; /*0x1010f281e*/
      v32 = (v9 >> 4) - (((v9 & 0xF) == 0) - 1LL); /*0x1010f2831*/
      if ( v32 == 1 ) /*0x1010f2839*/
      {
        v33 = 0; /*0x1010f283b*/
      }
      else
      {
        v36 = v32 & 0x1FFFFFFFFFFFFFFELL; /*0x1010f286d*/
        v37 = 0; /*0x1010f2870*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_10125B490); /*0x1010f2872*/
        do /*0x1010f28b5*/
        {
          v31[v37] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v31[v37]), si128); /*0x1010f288e*/
          v33 = v37 * 16 + 32; /*0x1010f2894*/
          v31[v37 + 1] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v31[v37 + 1]), si128); /*0x1010f28a7*/
          v37 += 2; /*0x1010f28ae*/
          v36 -= 2; /*0x1010f28b1*/
        }
        while ( v36 ); /*0x1010f28b5*/
      }
      if ( (v32 & 1) != 0 ) /*0x1010f28b9*/
        *(const __m128i *)((char *)v31 + v33) = _mm_or_si128( /*0x1010f28cd*/
                                                  _mm_cmpgt_epi8((__m128i)0LL, *(const __m128i *)((char *)v31 + v33)),
                                                  (__m128i)xmmword_10125B490);
      if ( v9 < 0x10 ) /*0x1010f28d7*/
      {
        v39 = 16; /*0x1010f2af1*/
      }
      else
      {
        v39 = v8 + 1; /*0x1010f28dd*/
        v9 = 16; /*0x1010f28e0*/
      }
      memmove(&v31->i8[v39], v31, v9); /*0x1010f28eb*/
      v40 = 0; /*0x1010f28f2*/
      v71 = v8; /*0x1010f28f5*/
      do /*0x1010f2a2a*/
      {
        while ( !__OFSUB__(0, v31->i8[v40]) ) /*0x1010f2917*/
        {
          v41 = v40++ == v8; /*0x1010f2906*/
          if ( v41 ) /*0x1010f290d*/
            goto LABEL_49; /*0x1010f290d*/
        }
        v42 = ~v40; /*0x1010f291c*/
        for ( i = v31; ; i = *v53 ) /*0x1010f2925*/
        {
          v44 = core::hash::BuildHasher::hash_one::hd1616d7d6d01b211(v68, (char *)i - 4 * v40 - 4); /*0x1010f2931*/
          v45 = v70[1]; /*0x1010f293a*/
          _RSI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)i /*0x1010f2949*/
                                                                                 + (v44 & (unsigned __int64)v45))));
          v47 = v44 & (unsigned __int64)v45; /*0x1010f294d*/
          if ( !(_DWORD)_RSI ) /*0x1010f2952*/
          {
            v56 = 16; /*0x1010f29c8*/
            v47 = v44 & (unsigned __int64)v70[1]; /*0x1010f29ce*/
            do /*0x1010f29e6*/
            {
              v47 = (unsigned __int64)v45 & (v56 + v47); /*0x1010f29d4*/
              _RSI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)i + v47))); /*0x1010f29dc*/
              v56 += 16; /*0x1010f29e0*/
            }
            while ( !(_DWORD)_RSI ); /*0x1010f29e6*/
          }
          __asm { tzcnt esi, esi } /*0x1010f2954*/
          _RSI = (unsigned __int64)v45 & (v47 + _RSI); /*0x1010f295b*/
          if ( i->i8[_RSI] >= 0 ) /*0x1010f2962*/
          {
            _RSI = (unsigned int)_mm_movemask_epi8(_mm_load_si128(i)); /*0x1010f29f2*/
            __asm { tzcnt esi, esi } /*0x1010f29f6*/
          }
          if ( ((unsigned __int64)v45 & ((v40 - (v44 & (unsigned __int64)v45)) ^ (_RSI - (v44 & (unsigned __int64)v45)))) < 0x10 ) /*0x1010f297e*/
          {
            v57 = v44 >> 57; /*0x1010f2a00*/
            i->i8[v40] = v57; /*0x1010f2a0b*/
            v7 = v70; /*0x1010f2a0f*/
            v54 = *v70; /*0x1010f2a13*/
            (*v70)[1].i8[(v40 - 16) & (unsigned __int64)v45] = v57; /*0x1010f2a16*/
            goto LABEL_46; /*0x1010f2a16*/
          }
          v49 = ~_RSI; /*0x1010f2987*/
          v50 = i->i8[_RSI]; /*0x1010f298a*/
          v51 = v44 >> 57; /*0x1010f298e*/
          v52 = (unsigned __int64)v45 & (_RSI - 16); /*0x1010f2996*/
          i->i8[_RSI] = v51; /*0x1010f2999*/
          v53 = v70; /*0x1010f299c*/
          v54 = *v70; /*0x1010f29a0*/
          (*v70)[1].i8[v52] = v51; /*0x1010f29a3*/
          if ( v50 == -1 ) /*0x1010f29ac*/
            break; /*0x1010f29ac*/
          v55 = v31->i32[v42]; /*0x1010f29b2*/
          v31->i32[v42] = i->i32[v49]; /*0x1010f29b9*/
          i->i32[v49] = v55; /*0x1010f29bd*/
        }
        v58 = (unsigned __int64)v53[1] & (v40 - 16); /*0x1010f2a36*/
        v54->i8[v40] = -1; /*0x1010f2a3a*/
        v54[1].i8[v58] = -1; /*0x1010f2a3f*/
        i->i32[v49] = v31->i32[v42]; /*0x1010f2a48*/
        v7 = v53; /*0x1010f2a4b*/
LABEL_46:
        v8 = v71; /*0x1010f2a1a*/
        v31 = v54; /*0x1010f2a20*/
        v41 = v40++ == v71; /*0x1010f2a23*/
      }
      while ( !v41 ); /*0x1010f2a2a*/
LABEL_49:
      v59 = (unsigned __int64)v7[1]; /*0x1010f2a50*/
      _R15 = v7[3]; /*0x1010f2a54*/
      v35 = ((v59 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v59 + 1) >> 3); /*0x1010f2a67*/
      if ( v59 < 8 ) /*0x1010f2a6e*/
        v35 = (unsigned __int64)v7[1]; /*0x1010f2a6e*/
    }
    result = 0x8000000000000001LL; /*0x1010f2a75*/
    v7[2] = (const __m128i *)(v35 - (_QWORD)_R15); /*0x1010f2a7f*/
  }
  else
  {
    v11 = v10 + 1; /*0x1010f26a9*/
    if ( v11 <= v6 ) /*0x1010f26af*/
      v11 = v6; /*0x1010f26af*/
    hashbrown::raw::RawTableInner::fallible_with_capacity::hec914f3d2f059464(&v60, 4, v11, a4); /*0x1010f26c5*/
    v12 = v60; /*0x1010f26ca*/
    v13 = v61; /*0x1010f26d1*/
    v14 = v62; /*0x1010f26d8*/
    if ( v60 ) /*0x1010f26df*/
    {
      if ( _R15 ) /*0x1010f26e8*/
      {
        v67 = v62; /*0x1010f26ee*/
        v71 = v8; /*0x1010f26f2*/
        v15 = *v7; /*0x1010f26f6*/
        v16 = _mm_load_si128(*v7); /*0x1010f26f9*/
        v17 = _R15; /*0x1010f26ff*/
        _R12D = ~_mm_movemask_epi8(v16); /*0x1010f2707*/
        v65 = &v15[-1].i8[12]; /*0x1010f270e*/
        v19 = 0; /*0x1010f2712*/
        v69 = v15; /*0x1010f2715*/
        v66 = _R15; /*0x1010f2719*/
        v63 = v61; /*0x1010f271d*/
        v64 = v60; /*0x1010f2721*/
        do /*0x1010f27e3*/
        {
          if ( !(_WORD)_R12D ) /*0x1010f2734*/
          {
            do /*0x1010f275a*/
            {
              v20 = _mm_load_si128(++v15); /*0x1010f2740*/
              v21 = _mm_movemask_epi8(v20); /*0x1010f274a*/
              ++v19; /*0x1010f274f*/
            }
            while ( v21 == 0xFFFF ); /*0x1010f275a*/
            _R12D = ~v21; /*0x1010f275c*/
          }
          __asm { tzcnt r15d, r12d } /*0x1010f275f*/
          v22 = &_R15[v19]; /*0x1010f2764*/
          v23 = core::hash::BuildHasher::hash_one::hd1616d7d6d01b211(v68, &v65[-4 * (_QWORD)v22]); /*0x1010f277a*/
          v13 = v63; /*0x1010f2782*/
          v24 = (unsigned __int64)v63 & v23; /*0x1010f2786*/
          v12 = v64; /*0x1010f2789*/
          _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v64 /*0x1010f2793*/
                                                                                 + ((unsigned __int64)v63 & v23))));
          if ( !(_DWORD)_RDX ) /*0x1010f2799*/
          {
            v29 = 16; /*0x1010f27eb*/
            do /*0x1010f2806*/
            {
              v24 = (unsigned __int64)v63 & (v29 + v24); /*0x1010f27f3*/
              _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v64 + v24))); /*0x1010f27fc*/
              v29 += 16; /*0x1010f2800*/
            }
            while ( !(_DWORD)_RDX ); /*0x1010f2806*/
          }
          __asm { tzcnt edx, edx } /*0x1010f279b*/
          _RDX = (unsigned __int64)v63 & (v24 + _RDX); /*0x1010f27a2*/
          if ( v64->i8[_RDX] >= 0 ) /*0x1010f27aa*/
          {
            _ECX = _mm_movemask_epi8(_mm_load_si128(v64)); /*0x1010f280f*/
            __asm { tzcnt edx, ecx } /*0x1010f2813*/
          }
          v17 = (const __m128i *)((char *)v17 - 1); /*0x1010f27b4*/
          v27 = v23 >> 57; /*0x1010f27b7*/
          v28 = (unsigned __int64)v63 & (_RDX - 16); /*0x1010f27bf*/
          v64->i8[_RDX] = v27; /*0x1010f27c2*/
          v12[1].i8[v28] = v27; /*0x1010f27c6*/
          _R15 = (const __m128i *)~(unsigned __int64)v22; /*0x1010f27cb*/
          v12->i32[~_RDX] = v69->i32[(_QWORD)_R15]; /*0x1010f27d9*/
          _R12D &= _R12D - 1; /*0x1010f27dd*/
        }
        while ( v17 ); /*0x1010f27e3*/
        v7 = v70; /*0x1010f283f*/
        v8 = v71; /*0x1010f2843*/
        _R15 = v66; /*0x1010f2847*/
        v14 = v67; /*0x1010f284b*/
      }
      else
      {
        v69 = *v7; /*0x1010f2a95*/
      }
      result = 0x8000000000000001LL; /*0x1010f2a99*/
      *v7 = v12; /*0x1010f2aa6*/
      v7[1] = v13; /*0x1010f2aa9*/
      v7[2] = (const __m128i *)(v14 - (_QWORD)_R15); /*0x1010f2aad*/
      if ( v8 ) /*0x1010f2ab4*/
      {
        if ( ((4 * v8 + 19) & 0xFFFFFFFFFFFFFFF0LL) + v8 != -17 ) /*0x1010f2ac9*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010f2add*/
          return 0x8000000000000001LL; /*0x1010f2ae2*/
        }
      }
    }
    else
    {
      return (__int64)v61; /*0x1010f2854*/
    }
  }
  return result; /*0x1010f2a83*/
}