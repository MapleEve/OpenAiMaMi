// mac 1.1.8 delete_sessions node va=0x10111bde0 depth=1
// hashbrown3raw21RawTable::reserve_rehash
__int64 __fastcall hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v5; // r15
  bool v6; // cf
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  size_t v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  const __m128i *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  size_t v19; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  const __m128i *v24; // r12
  __int64 v25; // rbx
  __int64 v27; // r14
  __m128i v28; // xmm0
  int v29; // r15d
  __int64 v30; // r13
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rcx
  const __m128i *v34; // r8
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rsi
  unsigned __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rdi
  __m128i si128; // xmm0
  __int64 v46; // rdi
  __int64 v47; // r13
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v51; // r9
  __m128i *v53; // rdx
  __int8 v54; // r9
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  __m128i *v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // [rsp+0h] [rbp-70h]
  unsigned __int64 v66; // [rsp+8h] [rbp-68h]
  unsigned __int64 v67; // [rsp+10h] [rbp-60h]
  __int64 v68; // [rsp+18h] [rbp-58h]
  unsigned __int64 v70; // [rsp+28h] [rbp-48h]
  unsigned __int8 v71; // [rsp+30h] [rbp-40h]
  const __m128i *v72; // [rsp+30h] [rbp-40h]
  size_t __len; // [rsp+38h] [rbp-38h]
  size_t __lena; // [rsp+38h] [rbp-38h]
  __int64 v75; // [rsp+40h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 24); /*0x10111bdf8*/
  v6 = __CFADD__(v5, a2); /*0x10111bdfc*/
  v7 = v5 + a2; /*0x10111bdfc*/
  if ( v6 ) /*0x10111bdff*/
    return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0(a4, v7); /*0x10111bdff*/
  v8 = *(_QWORD *)(a1 + 8); /*0x10111be05*/
  v9 = v8 + 1; /*0x10111be09*/
  v10 = ((v8 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v8 + 1) >> 3); /*0x10111be1b*/
  if ( v8 < 8 ) /*0x10111be22*/
    v10 = *(_QWORD *)(a1 + 8); /*0x10111be22*/
  v75 = a1; /*0x10111be2f*/
  if ( v7 <= v10 >> 1 ) /*0x10111be33*/
  {
    if ( v8 == -1 ) /*0x10111be63*/
    {
      v42 = 0; /*0x10111c0cc*/
    }
    else
    {
      v13 = *(const __m128i **)a1; /*0x10111be69*/
      v14 = (v9 >> 4) - (((v9 & 0xF) == 0) - 1LL); /*0x10111be7c*/
      if ( v14 == 1 ) /*0x10111be84*/
      {
        v15 = 0; /*0x10111be8a*/
      }
      else
      {
        v43 = v14 & 0x1FFFFFFFFFFFFFFELL; /*0x10111c0dd*/
        v44 = 0; /*0x10111c0e0*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_10125B490); /*0x10111c0e2*/
        do /*0x10111c125*/
        {
          v13[v44] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v13[v44]), si128); /*0x10111c0fe*/
          v15 = v44 * 16 + 32; /*0x10111c104*/
          v13[v44 + 1] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, v13[v44 + 1]), si128); /*0x10111c117*/
          v44 += 2; /*0x10111c11e*/
          v43 -= 2; /*0x10111c121*/
        }
        while ( v43 ); /*0x10111c125*/
      }
      if ( (v14 & 1) != 0 ) /*0x10111c129*/
        *(const __m128i *)((char *)v13 + v15) = _mm_or_si128( /*0x10111c13d*/
                                                  _mm_cmpgt_epi8((__m128i)0LL, *(const __m128i *)((char *)v13 + v15)),
                                                  (__m128i)xmmword_10125B490);
      if ( v9 < 0x10 ) /*0x10111c147*/
      {
        v46 = 16; /*0x10111c39e*/
      }
      else
      {
        v46 = v8 + 1; /*0x10111c14d*/
        v9 = 16; /*0x10111c150*/
      }
      memmove(&v13->i8[v46], v13, v9); /*0x10111c15b*/
      v47 = 0; /*0x10111c162*/
      a1 = v75; /*0x10111c165*/
      do /*0x10111c293*/
      {
        if ( __OFSUB__(0, v13->i8[v47]) ) /*0x10111c295*/
        {
          v61 = (__m128i *)&v13[~v47]; /*0x10111c2a8*/
          while ( 1 ) /*0x10111c179*/
          {
            v48 = core::hash::BuildHasher::hash_one::h93317f3b4d40df8f(a3, &v13[-v47 - 1]); /*0x10111c179*/
            a1 = v75; /*0x10111c17e*/
            v49 = *(_QWORD *)(v75 + 8); /*0x10111c182*/
            _RSI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v13 + (v48 & v49)))); /*0x10111c192*/
            v51 = v48 & v49; /*0x10111c196*/
            if ( !(_DWORD)_RSI ) /*0x10111c19b*/
            {
              v58 = 16; /*0x10111c229*/
              v51 = v48 & *(_QWORD *)(v75 + 8); /*0x10111c22f*/
              do /*0x10111c248*/
              {
                v51 = v49 & (v58 + v51); /*0x10111c235*/
                _RSI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v13 + v51))); /*0x10111c23e*/
                v58 += 16; /*0x10111c242*/
              }
              while ( !(_DWORD)_RSI ); /*0x10111c248*/
            }
            __asm { tzcnt esi, esi } /*0x10111c1a1*/
            _RSI = v49 & (v51 + _RSI); /*0x10111c1a8*/
            if ( v13->i8[_RSI] >= 0 ) /*0x10111c1b0*/
            {
              _RSI = (unsigned int)_mm_movemask_epi8(_mm_load_si128(v13)); /*0x10111c256*/
              __asm { tzcnt esi, esi } /*0x10111c25a*/
            }
            if ( (v49 & ((v47 - (v48 & v49)) ^ (_RSI - (v48 & v49)))) < 0x10 ) /*0x10111c1cc*/
            {
              v59 = v48 >> 57; /*0x10111c270*/
              v13->i8[v47] = v59; /*0x10111c27b*/
              v13 = *(const __m128i **)v75; /*0x10111c27f*/
              *(_BYTE *)(*(_QWORD *)v75 + ((v47 - 16) & v49) + 16) = v59; /*0x10111c282*/
              goto LABEL_54; /*0x10111c282*/
            }
            v53 = (__m128i *)&v13[~_RSI]; /*0x10111c1dc*/
            v54 = v13->i8[_RSI]; /*0x10111c1df*/
            v55 = v48 >> 57; /*0x10111c1e4*/
            v13->i8[_RSI] = v55; /*0x10111c1ef*/
            v13 = *(const __m128i **)v75; /*0x10111c1f3*/
            *(_BYTE *)(*(_QWORD *)v75 + (v49 & (_RSI - 16)) + 16) = v55; /*0x10111c1f6*/
            if ( v54 == -1 ) /*0x10111c1ff*/
              break; /*0x10111c1ff*/
            v56 = v61->i64[0]; /*0x10111c205*/
            v61->i64[0] = v53->i64[0]; /*0x10111c20b*/
            v53->i64[0] = v56; /*0x10111c20e*/
            v57 = v61->i64[1]; /*0x10111c211*/
            v61->i64[1] = v53->i64[1]; /*0x10111c219*/
            v53->i64[1] = v57; /*0x10111c21d*/
            v13 = *(const __m128i **)v75; /*0x10111c221*/
          }
          v62 = *(_QWORD *)(v75 + 8) & (v47 - 16); /*0x10111c2be*/
          v13->i8[v47] = -1; /*0x10111c2c2*/
          v13[1].i8[v62] = -1; /*0x10111c2c7*/
          v63 = v61->i64[0]; /*0x10111c2cd*/
          v53->i64[1] = v61->i64[1]; /*0x10111c2d4*/
          v53->i64[0] = v63; /*0x10111c2d8*/
        }
LABEL_54:
        ; /*0x10111c28c*/
      }
      while ( v47++ != v8 ); /*0x10111c293*/
      v64 = *(_QWORD *)(a1 + 8); /*0x10111c2dd*/
      v5 = *(_QWORD *)(a1 + 24); /*0x10111c2e1*/
      v42 = ((v64 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v64 + 1) >> 3); /*0x10111c2f4*/
      if ( v64 < 8 ) /*0x10111c2fb*/
        v42 = *(_QWORD *)(a1 + 8); /*0x10111c2fb*/
    }
    *(_QWORD *)(a1 + 16) = v42 - v5; /*0x10111c30c*/
    return 0x8000000000000001LL; /*0x10111c302*/
  }
  else
  {
    v11 = v10 + 1; /*0x10111be35*/
    if ( v11 <= v7 ) /*0x10111be3b*/
      v11 = v7; /*0x10111be3b*/
    if ( v11 >= 0xF ) /*0x10111be43*/
    {
      if ( v11 > 0x1FFFFFFFFFFFFFFFLL ) /*0x10111bea1*/
        return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0(a4, v7); /*0x10111bea1*/
      v16 = (0x2492492492492493LL * (unsigned __int128)(8 * v11)) >> 64; /*0x10111beb4*/
      _BitScanReverse64(&v11, ((v16 + ((8 * v11 - v16) >> 1)) >> 2) - 1); /*0x10111bec7*/
      v17 = 0xFFFFFFFFFFFFFFFFLL >> ~(_BYTE)v11; /*0x10111bed4*/
      if ( v17 > 0xFFFFFFFFFFFFFFELL ) /*0x10111bee4*/
        return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0(a4, v7); /*0x10111bee4*/
      v12 = v17 + 1; /*0x10111bee6*/
    }
    else
    {
      v12 = 4; /*0x10111be52*/
      if ( v11 >= 4 ) /*0x10111be57*/
        v12 = (v11 & 8) + 8; /*0x10111be57*/
    }
    v18 = 16 * v12; /*0x10111bef6*/
    v7 = v12 + 16; /*0x10111befa*/
    v19 = 16 * v12 + v12 + 16; /*0x10111bf01*/
    if ( __CFADD__(16 * v12, v12 + 16) || v19 > 0x7FFFFFFFFFFFFFF0LL ) /*0x10111bf0e*/
      return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0(a4, v7); /*0x10111bf1e*/
    __len = v12 + 16; /*0x10111bf23*/
    v71 = a4; /*0x10111bf27*/
    _R13 = v12; /*0x10111bf2b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10111bf2e*/
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 0x10u); /*0x10111bf3b*/
    if ( v22 ) /*0x10111bf43*/
    {
      v23 = (_R13 & 0xFFFFFFFFFFFFFFF8LL) - (_R13 >> 3); /*0x10111bf61*/
      v70 = _R13 - 1; /*0x10111bf68*/
      if ( _R13 - 1 < 8 ) /*0x10111bf6c*/
        v23 = _R13 - 1; /*0x10111bf6c*/
      v66 = v23; /*0x10111bf70*/
      v72 = (const __m128i *)(v18 + v22); /*0x10111bf74*/
      memset((void *)(v18 + v22), 255, __len); /*0x10111bf81*/
      if ( v5 ) /*0x10111bf89*/
      {
        v67 = v8; /*0x10111bf8f*/
        v24 = *(const __m128i **)a1; /*0x10111bf97*/
        v25 = v5; /*0x10111bfa0*/
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)*(_QWORD *)a1)); /*0x10111bfa8*/
        v65 = *(_QWORD *)a1 - 16LL; /*0x10111bfb0*/
        v27 = 0; /*0x10111bfb4*/
        __lena = *(_QWORD *)a1; /*0x10111bfb7*/
        v68 = v25; /*0x10111bfbb*/
        do /*0x10111c088*/
        {
          if ( !(_WORD)_R15D ) /*0x10111bfc4*/
          {
            do /*0x10111bfeb*/
            {
              v28 = _mm_load_si128(++v24); /*0x10111bfd0*/
              v29 = _mm_movemask_epi8(v28); /*0x10111bfdb*/
              v27 += 16; /*0x10111bfe0*/
            }
            while ( v29 == 0xFFFF ); /*0x10111bfeb*/
            _R15D = ~v29; /*0x10111bfed*/
          }
          __asm { tzcnt r13d, r15d } /*0x10111bff0*/
          v30 = v27 + _R13; /*0x10111bff5*/
          v31 = core::hash::BuildHasher::hash_one::h93317f3b4d40df8f(a3, v65 - 16 * v30); /*0x10111c00a*/
          v32 = v70; /*0x10111c012*/
          v33 = v70 & v31; /*0x10111c016*/
          v34 = v72; /*0x10111c019*/
          _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v72 + (v70 & v31)))); /*0x10111c023*/
          if ( (_DWORD)_RDX ) /*0x10111c029*/
          {
            a1 = v75; /*0x10111c02b*/
          }
          else
          {
            v40 = 16; /*0x10111c093*/
            a1 = v75; /*0x10111c098*/
            do /*0x10111c0b2*/
            {
              v33 = v70 & (v40 + v33); /*0x10111c09f*/
              _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v72 + v33))); /*0x10111c0a8*/
              v40 += 16; /*0x10111c0ac*/
            }
            while ( !(_DWORD)_RDX ); /*0x10111c0b2*/
          }
          __asm { tzcnt edx, edx } /*0x10111c02f*/
          _RDX = v70 & (v33 + _RDX); /*0x10111c036*/
          if ( v72->i8[_RDX] >= 0 ) /*0x10111c03e*/
          {
            _ECX = _mm_movemask_epi8(_mm_load_si128(v72)); /*0x10111c0bf*/
            __asm { tzcnt edx, ecx } /*0x10111c0c3*/
          }
          --v25; /*0x10111c047*/
          v37 = v31 >> 57; /*0x10111c04a*/
          v72->i8[_RDX] = v37; /*0x10111c055*/
          v72[1].i8[v70 & (_RDX - 16)] = v37; /*0x10111c059*/
          _R13 = 16 * ~v30; /*0x10111c061*/
          v38 = ~_RDX; /*0x10111c068*/
          v39 = *(_QWORD *)(__lena + _R13); /*0x10111c070*/
          v72[v38].i64[1] = *(_QWORD *)(__lena + _R13 + 8); /*0x10111c079*/
          v72[v38].i64[0] = v39; /*0x10111c07e*/
          _R15D &= _R15D - 1; /*0x10111c082*/
        }
        while ( v25 ); /*0x10111c088*/
        v8 = v67; /*0x10111c312*/
        v5 = v68; /*0x10111c316*/
      }
      else
      {
        v34 = v72; /*0x10111c33a*/
        v32 = _R13 - 1; /*0x10111c33e*/
      }
      *(_QWORD *)a1 = v34; /*0x10111c349*/
      *(_QWORD *)(a1 + 8) = v32; /*0x10111c34c*/
      *(_QWORD *)(a1 + 16) = v66 - v5; /*0x10111c350*/
      if ( v8 ) /*0x10111c357*/
      {
        if ( ((16 * v8 + 31) & 0xFFFFFFFFFFFFFFF0LL) + v8 != -17 ) /*0x10111c36f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10111c380*/
      }
      return 0x8000000000000001LL; /*0x10111c385*/
    }
    else
    {
      return hashbrown::raw::Fallibility::alloc_err::hcaa6512332942e5a(v71, 16, v19); /*0x10111c328*/
    }
  }
}