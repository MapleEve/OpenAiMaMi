// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x101120a70 depth=1
// hashbrown3raw21RawTable::reserve_rehash
__int64 __fastcall hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(
        char **a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  char *v5; // r9
  bool v6; // cf
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  size_t v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  const __m128i *v12; // r10
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  const __m128i **v15; // r8
  char *v16; // r12
  const __m128i *v17; // r14
  __int64 v19; // rbx
  __m128i v20; // xmm0
  int v21; // r15d
  __int64 v22; // r13
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v27; // rax
  const __m128i *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdi
  const __m128i *v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __m128i si128; // xmm0
  __int64 v41; // rdi
  __int64 v42; // r14
  unsigned __int64 v43; // rax
  const __m128i *v44; // rcx
  char *v45; // rdx
  unsigned __int64 v47; // r8
  __int64 *v49; // rsi
  __int8 v50; // r8
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  char *v55; // rax
  __int64 v56; // r9
  unsigned __int64 v58; // rax
  __int64 *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  char *v64; // rax
  const __m128i *v65; // rsi
  const __m128i *v67; // [rsp+8h] [rbp-A8h] BYREF
  unsigned __int64 v68; // [rsp+10h] [rbp-A0h]
  __int64 v69; // [rsp+18h] [rbp-98h]
  __int64 v70; // [rsp+20h] [rbp-90h]
  char **v71; // [rsp+28h] [rbp-88h]
  __int64 v72; // [rsp+30h] [rbp-80h]
  __int64 v73; // [rsp+38h] [rbp-78h]
  const __m128i *v74; // [rsp+40h] [rbp-70h]
  unsigned __int64 v75; // [rsp+48h] [rbp-68h]
  __int64 v76; // [rsp+50h] [rbp-60h]
  __int64 v77; // [rsp+58h] [rbp-58h]
  unsigned __int64 v78; // [rsp+60h] [rbp-50h]
  const __m128i *v79; // [rsp+68h] [rbp-48h]
  __int64 v80; // [rsp+70h] [rbp-40h]
  __int64 v81; // [rsp+78h] [rbp-38h]
  char **v82; // [rsp+80h] [rbp-30h]

  v81 = a3; /*0x101120a84*/
  v5 = a1[3]; /*0x101120a88*/
  v6 = __CFADD__(v5, a2); /*0x101120a8c*/
  v7 = (unsigned __int64)&v5[a2]; /*0x101120a8c*/
  if ( v6 ) /*0x101120a8f*/
    return hashbrown::raw::Fallibility::capacity_overflow::hdab0eb499f8b52b0(a4); /*0x101120fa7*/
  v8 = (unsigned __int64)a1[1]; /*0x101120a95*/
  v9 = v8 + 1; /*0x101120a99*/
  v10 = ((v8 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v8 + 1) >> 3); /*0x101120aab*/
  if ( v8 < 8 ) /*0x101120ab2*/
    v10 = (unsigned __int64)a1[1]; /*0x101120ab2*/
  v82 = a1; /*0x101120abf*/
  if ( v7 <= v10 >> 1 ) /*0x101120ac3*/
  {
    if ( v8 == -1 ) /*0x101120c8d*/
    {
      v37 = 0; /*0x101120cbd*/
    }
    else
    {
      v33 = *a1; /*0x101120c8f*/
      v34 = (v9 >> 4) - (((v9 & 0xF) == 0) - 1LL); /*0x101120ca2*/
      if ( v34 == 1 ) /*0x101120caa*/
      {
        v35 = 0; /*0x101120cac*/
      }
      else
      {
        v38 = v34 & 0x1FFFFFFFFFFFFFFELL; /*0x101120cce*/
        v39 = 0; /*0x101120cd1*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_10125B490); /*0x101120cd4*/
        do /*0x101120d15*/
        {
          *(__m128i *)&v33[v39] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, *(__m128i *)&v33[v39]), si128); /*0x101120cee*/
          v35 = v39 + 32; /*0x101120cf4*/
          *(__m128i *)&v33[v39 + 16] = _mm_or_si128(_mm_cmpgt_epi8((__m128i)0LL, *(__m128i *)&v33[v39 + 16]), si128); /*0x101120d07*/
          v39 += 32; /*0x101120d0e*/
          v38 -= 2; /*0x101120d11*/
        }
        while ( v38 ); /*0x101120d15*/
      }
      if ( (v34 & 1) != 0 ) /*0x101120d19*/
        *(__m128i *)&v33[v35] = _mm_or_si128( /*0x101120d2c*/
                                  _mm_cmpgt_epi8((__m128i)0LL, *(__m128i *)&v33[v35]),
                                  (__m128i)xmmword_10125B490);
      if ( v9 < 0x10 ) /*0x101120d35*/
      {
        v41 = 16; /*0x101120fac*/
      }
      else
      {
        v41 = v8 + 1; /*0x101120d3b*/
        v9 = 16; /*0x101120d3e*/
      }
      memmove(&v33[v41], v33, v9); /*0x101120d46*/
      v72 = (__int64)core::ops::function::FnOnce::call_once::hf1fcc1f4cc038952; /*0x101120d52*/
      v73 = 24; /*0x101120d56*/
      a1 = v82; /*0x101120d5e*/
      v71 = v82; /*0x101120d62*/
      v42 = 0; /*0x101120d6c*/
      do /*0x101120ead*/
      {
        v55 = *a1; /*0x101120eaf*/
        if ( __OFSUB__(0, (*a1)[v42]) ) /*0x101120eb2*/
        {
          v60 = (__int64 *)&v55[24 * ~v42]; /*0x101120ec2*/
          while ( 1 ) /*0x101120d89*/
          {
            v43 = core::hash::BuildHasher::hash_one::h4efcb5d226b82e7a(v81, &v55[-24 * v42 - 24]); /*0x101120d89*/
            a1 = v82; /*0x101120d8e*/
            v44 = (const __m128i *)*v82; /*0x101120d92*/
            v45 = v82[1]; /*0x101120d95*/
            _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)&(*v82)[v43 & (unsigned __int64)v45])); /*0x101120da4*/
            v47 = v43 & (unsigned __int64)v45; /*0x101120da9*/
            if ( !(_DWORD)_R10 ) /*0x101120daf*/
            {
              v56 = 16; /*0x101120e4f*/
              v47 = v43 & (unsigned __int64)v82[1]; /*0x101120e55*/
              do /*0x101120e70*/
              {
                v47 = (unsigned __int64)v45 & (v56 + v47); /*0x101120e5b*/
                _R10 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v44 + v47))); /*0x101120e64*/
                v56 += 16; /*0x101120e69*/
              }
              while ( !(_DWORD)_R10 ); /*0x101120e70*/
            }
            __asm { tzcnt r10d, r10d } /*0x101120db5*/
            _R10 = (unsigned __int64)v45 & (v47 + _R10); /*0x101120dbd*/
            if ( v44->i8[_R10] >= 0 ) /*0x101120dc5*/
            {
              _R8D = _mm_movemask_epi8(_mm_load_si128(v44)); /*0x101120e7c*/
              __asm { tzcnt r10d, r8d } /*0x101120e81*/
            }
            if ( ((unsigned __int64)v45 /*0x101120de1*/
                & ((v42 - (v43 & (unsigned __int64)v45))
                 ^ (_R10 - (v43 & (unsigned __int64)v45)))) < 0x10 )
            {
              v58 = v43 >> 57; /*0x101120e90*/
              v44->i8[v42] = v58; /*0x101120e9b*/
              (*a1)[((v42 - 16) & (unsigned __int64)v45) + 16] = v58; /*0x101120ea2*/
              goto LABEL_43; /*0x101120ea2*/
            }
            v49 = &v44->i64[3 * ~_R10]; /*0x101120df1*/
            v50 = v44->i8[_R10]; /*0x101120df5*/
            v51 = v43 >> 57; /*0x101120dfa*/
            v44->i8[_R10] = v51; /*0x101120e05*/
            (*a1)[((unsigned __int64)v45 & (_R10 - 16)) + 16] = v51; /*0x101120e0c*/
            if ( v50 == -1 ) /*0x101120e15*/
              break; /*0x101120e15*/
            v52 = *v60; /*0x101120e1b*/
            *v60 = *v49; /*0x101120e21*/
            *v49 = v52; /*0x101120e24*/
            v53 = v60[1]; /*0x101120e27*/
            v60[1] = v49[1]; /*0x101120e2f*/
            v49[1] = v53; /*0x101120e33*/
            v54 = v60[2]; /*0x101120e37*/
            v60[2] = v49[2]; /*0x101120e3f*/
            v49[2] = v54; /*0x101120e43*/
            v55 = *a1; /*0x101120e47*/
          }
          v61 = (unsigned __int64)a1[1] & (v42 - 16); /*0x101120ed9*/
          (*a1)[v42] = -1; /*0x101120ee0*/
          (*a1)[v61 + 16] = -1; /*0x101120ee8*/
          v49[2] = v60[2]; /*0x101120ef1*/
          v62 = *v60; /*0x101120ef5*/
          v49[1] = v60[1]; /*0x101120efc*/
          *v49 = v62; /*0x101120f00*/
        }
LABEL_43:
        ; /*0x101120ea6*/
      }
      while ( v42++ != v8 ); /*0x101120ead*/
      v63 = (unsigned __int64)a1[1]; /*0x101120f05*/
      v5 = a1[3]; /*0x101120f09*/
      v37 = ((v63 + 1) & 0xFFFFFFFFFFFFFFF8LL) - ((v63 + 1) >> 3); /*0x101120f1c*/
      if ( v63 < 8 ) /*0x101120f23*/
        v37 = (unsigned __int64)a1[1]; /*0x101120f23*/
    }
    v64 = (char *)(v37 - (_QWORD)v5); /*0x101120f27*/
    v13 = 0x8000000000000001LL; /*0x101120f2a*/
    a1[2] = v64; /*0x101120f34*/
  }
  else
  {
    v11 = v10 + 1; /*0x101120ac9*/
    if ( v11 <= v7 ) /*0x101120acf*/
      v11 = v7; /*0x101120acf*/
    hashbrown::raw::RawTableInner::fallible_with_capacity::h8cf3edc5fc942f5c(&v67, 24, v11, a4); /*0x101120ae5*/
    v12 = v67; /*0x101120aea*/
    v13 = v68; /*0x101120af1*/
    v14 = v69; /*0x101120af8*/
    if ( v67 ) /*0x101120b02*/
    {
      v15 = (const __m128i **)v82; /*0x101120b08*/
      v71 = v82 + 4; /*0x101120b17*/
      v72 = 24; /*0x101120b1e*/
      v73 = 16; /*0x101120b26*/
      v74 = v67; /*0x101120b2e*/
      v75 = v68; /*0x101120b32*/
      v76 = v69; /*0x101120b36*/
      v77 = v70; /*0x101120b3a*/
      v16 = v82[3]; /*0x101120b3e*/
      if ( v16 ) /*0x101120b45*/
      {
        v80 = v69; /*0x101120b4b*/
        v17 = (const __m128i *)*v82; /*0x101120b4f*/
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)*v82)); /*0x101120b5c*/
        v19 = 0; /*0x101120b5f*/
        v78 = v68; /*0x101120b61*/
        v79 = v67; /*0x101120b65*/
        do /*0x101120c49*/
        {
          if ( !(_WORD)_R15D ) /*0x101120b74*/
          {
            do /*0x101120b9a*/
            {
              v20 = _mm_load_si128(++v17); /*0x101120b80*/
              v21 = _mm_movemask_epi8(v20); /*0x101120b8a*/
              v19 += 16; /*0x101120b8f*/
            }
            while ( v21 == 0xFFFF ); /*0x101120b9a*/
            _R15D = ~v21; /*0x101120b9c*/
          }
          __asm { tzcnt r13d, r15d } /*0x101120b9f*/
          v22 = v19 + _R13; /*0x101120ba4*/
          v23 = core::hash::BuildHasher::hash_one::h4efcb5d226b82e7a(v81, (char *)&(*v15)[-1] - 24 * v22 - 8); /*0x101120bbd*/
          v13 = v78; /*0x101120bc5*/
          v24 = v78 & v23; /*0x101120bc9*/
          v12 = v79; /*0x101120bcc*/
          _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v79 + (v78 & v23)))); /*0x101120bd6*/
          if ( (_DWORD)_RDX ) /*0x101120bdc*/
          {
            v15 = (const __m128i **)v82; /*0x101120bde*/
          }
          else
          {
            v31 = 16; /*0x101120c51*/
            v15 = (const __m128i **)v82; /*0x101120c56*/
            do /*0x101120c70*/
            {
              v24 = v78 & (v31 + v24); /*0x101120c5d*/
              _RDX = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v79 + v24))); /*0x101120c66*/
              v31 += 16; /*0x101120c6a*/
            }
            while ( !(_DWORD)_RDX ); /*0x101120c70*/
          }
          __asm { tzcnt edx, edx } /*0x101120be2*/
          _RDX = v78 & (v24 + _RDX); /*0x101120be9*/
          if ( v79->i8[_RDX] >= 0 ) /*0x101120bf1*/
          {
            _ECX = _mm_movemask_epi8(_mm_load_si128(v79)); /*0x101120c7d*/
            __asm { tzcnt edx, ecx } /*0x101120c81*/
          }
          --v16; /*0x101120bfe*/
          v27 = v23 >> 57; /*0x101120c01*/
          v79->i8[_RDX] = v27; /*0x101120c0c*/
          v12[1].i8[v13 & (_RDX - 16)] = v27; /*0x101120c10*/
          v28 = *v15; /*0x101120c15*/
          _R13 = ~v22; /*0x101120c18*/
          v29 = 3 * ~_RDX; /*0x101120c23*/
          v12[1].i64[v29] = (*v15)[1].i64[3 * _R13]; /*0x101120c2c*/
          v30 = v28->i64[3 * _R13]; /*0x101120c31*/
          v12->i64[v29 + 1] = v28->i64[3 * _R13 + 1]; /*0x101120c3a*/
          v12->i64[v29] = v30; /*0x101120c3f*/
          _R15D &= _R15D - 1; /*0x101120c43*/
        }
        while ( v16 ); /*0x101120c49*/
        v36 = v15[3]; /*0x101120cb0*/
        v14 = v80; /*0x101120cb4*/
      }
      else
      {
        v36 = nullptr; /*0x101120f3a*/
      }
      v65 = v15[1]; /*0x101120f42*/
      *v15 = v12; /*0x101120f46*/
      v15[1] = (const __m128i *)v13; /*0x101120f49*/
      v15[2] = (const __m128i *)(v14 - (_QWORD)v36); /*0x101120f4d*/
      v15[3] = v36; /*0x101120f51*/
      if ( v65 && &v65->i8[(24LL * (_QWORD)v65 + 39) & 0xFFFFFFFFFFFFFFF0LL] != (__int8 *)-17LL ) /*0x101120f71*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101120f7b*/
      return 0x8000000000000001LL; /*0x101120f80*/
    }
  }
  return v13; /*0x101120f8d*/
}