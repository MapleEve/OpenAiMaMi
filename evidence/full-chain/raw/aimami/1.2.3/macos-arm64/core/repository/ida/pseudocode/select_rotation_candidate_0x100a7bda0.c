// __ZN13codexmate_lib4core10repository25select_rotation_candidate @ 0x100a7bda0 | 基线 same-set
char *__fastcall codexmate_lib::core::repository::select_rotation_candidate::hfc64782647f30fde(
        char *a1,
        __int64 a2,
        void *a3,
        size_t a4,
        __int64 a5,
        _QWORD *j,
        double a7,
        double a8,
        double a9)
{
  char *v10; // r13
  char *v11; // r9
  size_t v12; // rdx
  __int64 v13; // rbx
  __m128i v14; // xmm2
  __int64 v16; // rax
  const void *v17; // rsi
  int v18; // eax
  __int64 v19; // r8
  char *v20; // rcx
  __int64 v21; // rsi
  __m128i v22; // xmm1
  __int64 i; // r10
  __int64 v24; // rbx
  char *v25; // r12
  size_t v26; // r15
  int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edi
  char v31; // cl
  int v32; // r8d
  int v33; // esi
  int v34; // r8d
  int v35; // edi
  bool v37; // zf
  int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // r8
  char *v41; // r10
  char *v42; // rbx
  int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // r10
  __m128i v47; // xmm1
  __int64 v48; // r11
  const void *v49; // rdi
  unsigned __int64 v50; // rax
  __m128i v51; // xmm2
  __int64 v53; // rax
  int v54; // eax
  unsigned int v55; // eax
  __int64 v56; // rax
  int v57; // r14d
  char v58; // cl
  int v59; // r11d
  int v60; // r9d
  char v61; // al
  int v62; // r11d
  int v63; // r14d
  __int16 v64; // ax
  const void *v65; // rdi
  const void *v66; // rsi
  size_t v67; // rdx
  int v68; // eax
  __int64 v69; // rcx
  bool v70; // cc
  int v71; // eax
  __int32 v72; // eax
  int v73; // eax
  __int16 *v74; // rax
  __m128i v75; // [rsp+0h] [rbp-140h] BYREF
  __m128i v76; // [rsp+10h] [rbp-130h] BYREF
  __int64 v77; // [rsp+28h] [rbp-118h]
  __int64 v78; // [rsp+30h] [rbp-110h]
  _QWORD *v79; // [rsp+38h] [rbp-108h]
  char *v80; // [rsp+40h] [rbp-100h]
  int v81; // [rsp+48h] [rbp-F8h]
  int v82; // [rsp+4Ch] [rbp-F4h]
  __int32 v83; // [rsp+50h] [rbp-F0h]
  char v84; // [rsp+54h] [rbp-ECh]
  __int16 v85; // [rsp+55h] [rbp-EBh] BYREF
  char v86; // [rsp+57h] [rbp-E9h]
  char *v87; // [rsp+58h] [rbp-E8h]
  int v88; // [rsp+60h] [rbp-E0h]
  int v89; // [rsp+64h] [rbp-DCh]
  int v90; // [rsp+68h] [rbp-D8h]
  __int8 v91; // [rsp+6Ch] [rbp-D4h]
  char v92; // [rsp+6Dh] [rbp-D3h] BYREF
  void *__s2; // [rsp+70h] [rbp-D0h]
  _QWORD *v94; // [rsp+78h] [rbp-C8h]
  __m128i v95; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v96; // [rsp+98h] [rbp-A8h]
  __int64 v97; // [rsp+A0h] [rbp-A0h]
  __int64 v98; // [rsp+A8h] [rbp-98h]
  __m128i v99; // [rsp+B0h] [rbp-90h] BYREF
  int v100; // [rsp+CCh] [rbp-74h]
  char *v101; // [rsp+D0h] [rbp-70h]
  __int64 v102; // [rsp+D8h] [rbp-68h]
  __int64 v103; // [rsp+E0h] [rbp-60h]
  size_t __n; // [rsp+E8h] [rbp-58h]
  size_t v105; // [rsp+F0h] [rbp-50h]
  _QWORD *v106; // [rsp+F8h] [rbp-48h]
  int v107; // [rsp+104h] [rbp-3Ch]
  char *v108; // [rsp+108h] [rbp-38h]
  __int16 v109; // [rsp+110h] [rbp-30h]
  char v110; // [rsp+112h] [rbp-2Eh]
  __int16 v111; // [rsp+114h] [rbp-2Ch]
  char v112; // [rsp+116h] [rbp-2Ah]

  __s2 = a3; /*0x100a7bdb4*/
  if ( !a2 ) /*0x100a7bdbe*/
    return nullptr; /*0x100a7c089*/
  v10 = a1; /*0x100a7bdc7*/
  v11 = &a1[352 * a2]; /*0x100a7bdd1*/
  v100 = *(_DWORD *)(a5 + 8); /*0x100a7bdd8*/
  v107 = *(_DWORD *)(a5 + 12); /*0x100a7bddf*/
  v94 = j + 4; /*0x100a7bde6*/
  v12 = a4; /*0x100a7bded*/
  __n = a4; /*0x100a7bdf0*/
  v108 = v11; /*0x100a7bdf4*/
  v106 = j; /*0x100a7bdf8*/
  while ( 1 ) /*0x100a7bf00*/
  {
    v25 = v10; /*0x100a7bf00*/
    v10 += 352; /*0x100a7bf03*/
    v26 = *((_QWORD *)v25 + 25); /*0x100a7bf0a*/
    if ( v26 == v12 ) /*0x100a7bf15*/
    {
      a1 = *((char **)v25 + 24); /*0x100a7bf17*/
      v27 = memcmp(a1, __s2, v12); /*0x100a7bf26*/
      v11 = v108; /*0x100a7bf2b*/
      v12 = __n; /*0x100a7bf2f*/
      if ( !v27 ) /*0x100a7bf35*/
        goto LABEL_40; /*0x100a7bf35*/
    }
    if ( *((_DWORD *)v25 + 40) != 2 && ((v25[176] & 6) == 2 || v25[176] == 4) || v25[338] != 1 ) /*0x100a7bf70*/
      goto LABEL_40; /*0x100a7bf70*/
    if ( j ) /*0x100a7bf79*/
    {
      j = v106; /*0x100a7bf7b*/
      if ( !v106[3] ) /*0x100a7bf84*/
        goto LABEL_40; /*0x100a7bf84*/
      v28 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v94, v25 + 184); /*0x100a7bf99*/
      v11 = v108; /*0x100a7bf9e*/
      v12 = __n; /*0x100a7bfa2*/
      v24 = v28; /*0x100a7bfa6*/
      v20 = (char *)*j; /*0x100a7bfad*/
      v21 = j[1]; /*0x100a7bfb0*/
      v22 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v28 >> 57), (__m128i)0LL); /*0x100a7bfbc*/
      v19 = *j - 24LL; /*0x100a7bfc1*/
      a1 = *((char **)v25 + 24); /*0x100a7bfc5*/
      for ( i = 0; ; i += 16 ) /*0x100a7bfcd*/
      {
        v13 = v21 & v24; /*0x100a7be10*/
        v14 = _mm_loadu_si128((const __m128i *)&v20[v13]); /*0x100a7be13*/
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v14, v22)); /*0x100a7be20*/
        if ( (_DWORD)_RAX ) /*0x100a7be26*/
          break; /*0x100a7be26*/
LABEL_8:
        j = v106; /*0x100a7bed0*/
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v14, (__m128i)-1LL)) ) /*0x100a7bed8*/
          goto LABEL_40; /*0x100a7bee2*/
        v24 = v13 + i + 16; /*0x100a7bee8*/
      }
      v101 = v20; /*0x100a7be2c*/
      v102 = v21; /*0x100a7be30*/
      v95 = v22; /*0x100a7be34*/
      v103 = i; /*0x100a7be3c*/
      v99 = v14; /*0x100a7be40*/
      while ( 1 ) /*0x100a7be48*/
      {
        v96 = _RAX; /*0x100a7be48*/
        __asm { tzcnt eax, eax } /*0x100a7be4f*/
        v16 = -3 * (v21 & (v13 + _RAX)); /*0x100a7be5c*/
        if ( v26 == *(_QWORD *)(v19 + 8 * v16 + 16) ) /*0x100a7be65*/
        {
          v17 = *(const void **)(v19 + 8 * v16 + 8); /*0x100a7be6b*/
          v105 = v19; /*0x100a7be6f*/
          v18 = memcmp(a1, v17, v26); /*0x100a7be7c*/
          v19 = v105; /*0x100a7be87*/
          v11 = v108; /*0x100a7be8b*/
          v12 = __n; /*0x100a7be8f*/
          if ( !v18 ) /*0x100a7be95*/
            break; /*0x100a7be95*/
        }
        _RAX = (unsigned int)(v96 - 1); /*0x100a7bea2*/
        LOWORD(_RAX) = v96 & (v96 - 1); /*0x100a7bea5*/
        v20 = v101; /*0x100a7bea8*/
        v21 = v102; /*0x100a7beac*/
        v22 = _mm_load_si128(&v95); /*0x100a7beb0*/
        i = v103; /*0x100a7beb8*/
        v14 = _mm_load_si128(&v99); /*0x100a7bebc*/
        if ( !(_WORD)_RAX ) /*0x100a7bec4*/
          goto LABEL_8; /*0x100a7bec4*/
      }
    }
    v29 = *((_QWORD *)v25 + 10); /*0x100a7bfd5*/
    if ( v29 == 2 ) /*0x100a7bfde*/
    {
      j = v106; /*0x100a7bfe6*/
      if ( *((_DWORD *)v25 + 30) != 2 ) /*0x100a7bfea*/
      {
        v30 = *((_DWORD *)v25 + 38); /*0x100a7bff0*/
        v31 = 0; /*0x100a7bff8*/
        if ( v30 <= 0 ) /*0x100a7bffc*/
          v30 = 0; /*0x100a7bffc*/
        if ( v30 >= 100 ) /*0x100a7c007*/
          v30 = 100; /*0x100a7c007*/
        LODWORD(a1) = v30 - v107; /*0x100a7c00a*/
        v32 = 0x1FFFFFFF; /*0x100a7c00d*/
        v33 = (int)a1; /*0x100a7c013*/
        if ( (int)a1 > 0 ) /*0x100a7c017*/
          break; /*0x100a7c017*/
      }
      goto LABEL_40; /*0x100a7c017*/
    }
    v34 = *((_DWORD *)v25 + 28); /*0x100a7c01e*/
    if ( v34 <= 0 ) /*0x100a7c02b*/
      v34 = 0; /*0x100a7c02b*/
    if ( v34 >= 100 ) /*0x100a7c038*/
      v34 = 100; /*0x100a7c038*/
    v32 = v34 - v100; /*0x100a7c03c*/
    v31 = 1; /*0x100a7c040*/
    if ( *((_DWORD *)v25 + 30) == 2 ) /*0x100a7c048*/
    {
      v33 = v32; /*0x100a7c04a*/
      j = v106; /*0x100a7c04d*/
      if ( v32 > 0 ) /*0x100a7c053*/
        break; /*0x100a7c053*/
      goto LABEL_40; /*0x100a7c053*/
    }
    v35 = *((_DWORD *)v25 + 38); /*0x100a7c057*/
    v31 = 0; /*0x100a7c05f*/
    if ( v35 <= 0 ) /*0x100a7c063*/
      v35 = 0; /*0x100a7c063*/
    if ( v35 >= 100 ) /*0x100a7c069*/
      v35 = 100; /*0x100a7c069*/
    LODWORD(a1) = v35 - v107; /*0x100a7c06c*/
    v33 = v32; /*0x100a7c072*/
    if ( (int)a1 < v32 ) /*0x100a7c075*/
      v33 = (int)a1; /*0x100a7c075*/
    j = v106; /*0x100a7c078*/
    if ( v33 > 0 ) /*0x100a7c07e*/
      break; /*0x100a7c07e*/
LABEL_40:
    if ( v10 == v11 ) /*0x100a7c083*/
      return nullptr; /*0x100a7c083*/
  }
  if ( v10 != v11 ) /*0x100a7c0a4*/
  {
    v95.i32[0] = v32; /*0x100a7c0a6*/
    v37 = (_DWORD)v29 == 2; /*0x100a7c0ad*/
    v38 = (int)a1; /*0x100a7c0b0*/
    if ( v31 ) /*0x100a7c0be*/
      v38 = 0x1FFFFFFF; /*0x100a7c0be*/
    LODWORD(v102) = v38; /*0x100a7c0c2*/
    LOBYTE(v26) = v31 + v37; /*0x100a7c0c5*/
    v39 = 0x2E8BA2E8BA2E8BA3LL * ((unsigned __int64)(v11 - v10) >> 5); /*0x100a7c0d9*/
    v40 = 0; /*0x100a7c0dd*/
    v96 = v39; /*0x100a7c0e0*/
    do /*0x100a7c0f7*/
    {
      v41 = &v10[352 * v40]; /*0x100a7c0f7*/
      v105 = *((_QWORD *)v41 + 25); /*0x100a7c104*/
      if ( v105 == v12 ) /*0x100a7c10b*/
      {
        LODWORD(v108) = v26; /*0x100a7c10d*/
        LODWORD(j) = v33; /*0x100a7c118*/
        v26 = v40; /*0x100a7c122*/
        v42 = &v10[352 * v40]; /*0x100a7c125*/
        v43 = memcmp(*((const void **)v41 + 24), __s2, v12); /*0x100a7c128*/
        v41 = v42; /*0x100a7c12d*/
        v40 = v26; /*0x100a7c130*/
        LODWORD(v26) = (_DWORD)v108; /*0x100a7c133*/
        v39 = v96; /*0x100a7c137*/
        v12 = __n; /*0x100a7c141*/
        if ( !v43 ) /*0x100a7c147*/
          goto LABEL_92; /*0x100a7c147*/
      }
      if ( *((_DWORD *)v41 + 40) != 2 && ((v41[176] & 6) == 2 || v41[176] == 4) || v41[338] != 1 ) /*0x100a7c163*/
        goto LABEL_92; /*0x100a7c163*/
      if ( v106 ) /*0x100a7c16e*/
      {
        if ( !v106[3] ) /*0x100a7c17d*/
          goto LABEL_92; /*0x100a7c17d*/
        v99.i64[0] = v40; /*0x100a7c183*/
        LODWORD(v108) = v26; /*0x100a7c18a*/
        LODWORD(v103) = v33; /*0x100a7c18e*/
        v101 = v41; /*0x100a7c19f*/
        v44 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v94, v41 + 184); /*0x100a7c1a3*/
        v45 = *v106; /*0x100a7c1b3*/
        v46 = v106[1]; /*0x100a7c1b6*/
        v47 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v44 >> 57), (__m128i)0LL); /*0x100a7c1c2*/
        v48 = *v106 - 24LL; /*0x100a7c1c7*/
        v49 = *((const void **)v101 + 24); /*0x100a7c1cf*/
        for ( j = nullptr; ; j += 2 ) /*0x100a7c1d6*/
        {
          v50 = v46 & v44; /*0x100a7c1d9*/
          v51 = _mm_loadu_si128((const __m128i *)(v45 + v50)); /*0x100a7c1dc*/
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v51, v47)); /*0x100a7c1ea*/
          if ( (_DWORD)_RCX ) /*0x100a7c1f0*/
            break; /*0x100a7c1f0*/
LABEL_59:
          v12 = __n; /*0x100a7c2c1*/
          v33 = v103; /*0x100a7c2d3*/
          LODWORD(v26) = (_DWORD)v108; /*0x100a7c2d6*/
          v40 = v99.i64[0]; /*0x100a7c2da*/
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v51, (__m128i)-1LL)) ) /*0x100a7c2c9*/
            goto LABEL_92; /*0x100a7c2e1*/
          v44 = (unsigned __int64)j + v50 + 16; /*0x100a7c2e7*/
        }
        v98 = v50; /*0x100a7c1f6*/
        v77 = v45; /*0x100a7c1fd*/
        v78 = v46; /*0x100a7c204*/
        v75 = v47; /*0x100a7c20b*/
        v79 = j; /*0x100a7c213*/
        v76 = v51; /*0x100a7c21a*/
        while ( 1 ) /*0x100a7c222*/
        {
          v97 = _RCX; /*0x100a7c222*/
          __asm { tzcnt ecx, ecx } /*0x100a7c229*/
          v53 = -3LL * (v46 & (v50 + _RCX)); /*0x100a7c236*/
          if ( v105 == *(_QWORD *)(v48 + 8 * v53 + 16) ) /*0x100a7c243*/
          {
            LODWORD(j) = (_DWORD)v49; /*0x100a7c251*/
            v26 = v48; /*0x100a7c254*/
            v54 = memcmp(v49, *(const void **)(v48 + 8 * v53 + 8), v105); /*0x100a7c257*/
            v48 = v26; /*0x100a7c25c*/
            v41 = v101; /*0x100a7c262*/
            v40 = v99.i64[0]; /*0x100a7c266*/
            LODWORD(v26) = (_DWORD)v108; /*0x100a7c26d*/
            v33 = v103; /*0x100a7c271*/
            v12 = __n; /*0x100a7c274*/
            if ( !v54 ) /*0x100a7c27a*/
              break; /*0x100a7c27a*/
          }
          v55 = v97 - 1; /*0x100a7c287*/
          LOWORD(v55) = v97 & (v97 - 1); /*0x100a7c28a*/
          _RCX = v55; /*0x100a7c28d*/
          v50 = v98; /*0x100a7c28f*/
          v45 = v77; /*0x100a7c296*/
          v46 = v78; /*0x100a7c29d*/
          v47 = _mm_load_si128(&v75); /*0x100a7c2a4*/
          j = v79; /*0x100a7c2ac*/
          v51 = _mm_load_si128(&v76); /*0x100a7c2b3*/
          if ( ((unsigned __int16)v97 & (unsigned __int16)(v97 - 1)) == 0 ) /*0x100a7c2bb*/
            goto LABEL_59; /*0x100a7c2bb*/
        }
      }
      v56 = *((_QWORD *)v41 + 10); /*0x100a7c323*/
      if ( v56 == 2 ) /*0x100a7c32b*/
      {
        if ( *((_DWORD *)v41 + 30) != 2 ) /*0x100a7c336*/
        {
          v57 = *((_DWORD *)v41 + 38); /*0x100a7c33c*/
          v58 = 0; /*0x100a7c343*/
          if ( v57 <= 0 ) /*0x100a7c348*/
            v57 = 0; /*0x100a7c348*/
          if ( v57 >= 100 ) /*0x100a7c356*/
            v57 = 100; /*0x100a7c356*/
          LODWORD(j) = v57 - v107; /*0x100a7c35a*/
          v59 = 0x1FFFFFFF; /*0x100a7c35e*/
          v60 = (int)j; /*0x100a7c364*/
          if ( (int)j > 0 ) /*0x100a7c36a*/
            goto LABEL_71; /*0x100a7c36a*/
        }
      }
      else
      {
        v62 = *((_DWORD *)v41 + 28); /*0x100a7c440*/
        if ( v62 <= 0 ) /*0x100a7c44c*/
          v62 = 0; /*0x100a7c44c*/
        if ( v62 >= 100 ) /*0x100a7c459*/
          v62 = 100; /*0x100a7c459*/
        v59 = v62 - v100; /*0x100a7c45d*/
        v58 = 1; /*0x100a7c461*/
        if ( *((_DWORD *)v41 + 30) == 2 ) /*0x100a7c468*/
        {
          v60 = v59; /*0x100a7c46a*/
          if ( v59 > 0 ) /*0x100a7c470*/
            goto LABEL_71; /*0x100a7c470*/
        }
        else
        {
          v63 = *((_DWORD *)v41 + 38); /*0x100a7c478*/
          v58 = 0; /*0x100a7c47f*/
          if ( v63 <= 0 ) /*0x100a7c484*/
            v63 = 0; /*0x100a7c484*/
          if ( v63 >= 100 ) /*0x100a7c492*/
            v63 = 100; /*0x100a7c492*/
          LODWORD(j) = v63 - v107; /*0x100a7c496*/
          v60 = v59; /*0x100a7c49d*/
          if ( (int)j < v59 ) /*0x100a7c4a0*/
            v60 = (int)j; /*0x100a7c4a0*/
          if ( v60 > 0 ) /*0x100a7c4a7*/
          {
LABEL_71:
            if ( v58 ) /*0x100a7c381*/
              LODWORD(j) = 0x1FFFFFFF; /*0x100a7c381*/
            v80 = v25; /*0x100a7c385*/
            v81 = v33; /*0x100a7c38c*/
            v82 = v102; /*0x100a7c395*/
            v83 = v95.i32[0]; /*0x100a7c3a1*/
            v84 = v26; /*0x100a7c3a7*/
            v86 = v112; /*0x100a7c3b9*/
            v85 = v111; /*0x100a7c3c0*/
            v87 = v41; /*0x100a7c3c3*/
            v88 = v60; /*0x100a7c3ca*/
            v89 = (int)j; /*0x100a7c3d1*/
            v90 = v59; /*0x100a7c3d8*/
            v99.i8[0] = v58 + ((_DWORD)v56 == 2); /*0x100a7c3df*/
            v91 = v99.i8[0]; /*0x100a7c3e6*/
            if ( v33 == v60 ) /*0x100a7c3f6*/
            {
              v61 = ((unsigned __int8)v26 > (unsigned int)v99.i8[0]) - ((unsigned __int8)v26 < (unsigned int)v99.i8[0]); /*0x100a7c409*/
              if ( (_BYTE)v26 == v99.i8[0] ) /*0x100a7c40e*/
              {
                if ( (_DWORD)v102 == (_DWORD)j ) /*0x100a7c41e*/
                {
                  v61 = (v95.i32[0] > v59) - (v95.i32[0] < v59); /*0x100a7c431*/
                  if ( v95.i32[0] > v59 == v95.i32[0] < v59 ) /*0x100a7c435*/
                    goto LABEL_97; /*0x100a7c435*/
                }
                else
                {
                  v61 = ((int)v102 > (int)j) - ((int)v102 < (int)j); /*0x100a7c5bf*/
                  if ( !v61 ) /*0x100a7c5c3*/
                  {
LABEL_97:
                    LODWORD(v108) = v26; /*0x100a7c4e9*/
                    v65 = *((const void **)v41 + 24); /*0x100a7c4ed*/
                    LODWORD(v103) = v33; /*0x100a7c4f4*/
                    v66 = *((const void **)v25 + 24); /*0x100a7c4f7*/
                    v67 = *((_QWORD *)v25 + 25); /*0x100a7c4ff*/
                    v98 = v105 - v67; /*0x100a7c511*/
                    if ( v105 < v67 ) /*0x100a7c518*/
                      v67 = v105; /*0x100a7c518*/
                    v26 = v40; /*0x100a7c51c*/
                    v101 = v41; /*0x100a7c51f*/
                    LODWORD(v105) = v59; /*0x100a7c523*/
                    LODWORD(v97) = v60; /*0x100a7c527*/
                    v68 = memcmp(v65, v66, v67); /*0x100a7c52e*/
                    v60 = v97; /*0x100a7c533*/
                    v59 = v105; /*0x100a7c53a*/
                    v41 = v101; /*0x100a7c53e*/
                    v40 = v26; /*0x100a7c542*/
                    LOBYTE(v26) = (_BYTE)v108; /*0x100a7c545*/
                    v33 = v103; /*0x100a7c549*/
                    v12 = __n; /*0x100a7c54c*/
                    v69 = v98; /*0x100a7c554*/
                    if ( v68 ) /*0x100a7c55b*/
                      v69 = v68; /*0x100a7c55b*/
                    v61 = (v69 > 0) - (v69 < 0); /*0x100a7c568*/
                  }
                }
LABEL_102:
                v70 = v61 <= 0; /*0x100a7c56a*/
                if ( v61 <= 0 ) /*0x100a7c56c*/
                {
                  v25 = v41; /*0x100a7c56c*/
                  v33 = v60; /*0x100a7c570*/
                }
                v71 = v102; /*0x100a7c574*/
                if ( v70 ) /*0x100a7c577*/
                  v71 = (int)j; /*0x100a7c577*/
                LODWORD(v102) = v71; /*0x100a7c57b*/
                v72 = v95.i32[0]; /*0x100a7c57e*/
                if ( v70 ) /*0x100a7c584*/
                  v72 = v59; /*0x100a7c584*/
                v95.i32[0] = v72; /*0x100a7c588*/
                v73 = (unsigned __int8)v26; /*0x100a7c58e*/
                LODWORD(v26) = v99.u8[0]; /*0x100a7c592*/
                if ( !v70 ) /*0x100a7c59a*/
                  LODWORD(v26) = v73; /*0x100a7c59a*/
                v74 = (__int16 *)&v92; /*0x100a7c59e*/
                if ( !v70 ) /*0x100a7c5ac*/
                  v74 = &v85; /*0x100a7c5ac*/
                v110 = *((_BYTE *)v74 + 2); /*0x100a7c5b4*/
                v64 = *v74; /*0x100a7c5b7*/
                goto LABEL_93; /*0x100a7c5ba*/
              }
            }
            else
            {
              v61 = (v33 > v60) - (v33 < v60); /*0x100a7c4df*/
            }
            if ( !v61 ) /*0x100a7c4e3*/
              goto LABEL_97; /*0x100a7c4e3*/
            goto LABEL_102; /*0x100a7c4e3*/
          }
        }
      }
LABEL_92:
      v110 = v112; /*0x100a7c4b0*/
      v64 = v111; /*0x100a7c4b7*/
LABEL_93:
      v109 = v64; /*0x100a7c4bb*/
      v112 = v110; /*0x100a7c4c3*/
      v111 = v64; /*0x100a7c4ca*/
      ++v40; /*0x100a7c4ce*/
    }
    while ( v40 != v39 ); /*0x100a7c0f7*/
  }
  return v25; /*0x100a7c08f*/
}