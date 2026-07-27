// __ZN13codexmate_lib4core8sessions24is_codex_visible_session @ 0x100539620 | 基线 same-set
__int64 __fastcall codexmate_lib::core::sessions::is_codex_visible_session::h7d18eca42be782d4(
        char *a1,
        signed __int64 a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 *v9; // r13
  char *v10; // r15
  __int64 v13; // rax
  __int64 v14; // r12
  bool v16; // zf
  unsigned __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // r15
  __m128i v21; // xmm1
  __int64 v22; // r12
  char *v23; // rsi
  __m128i v24; // xmm2
  size_t v25; // rax
  __m128i v26; // xmm3
  __int64 v28; // r14
  __int64 i; // rsi
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int8 *v33; // rcx
  __int64 v34; // rdx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  __m128i v41; // xmm0
  char *v42; // r9
  unsigned __int64 v43; // rax
  __int64 v45; // r12
  __m128i si128; // xmm1
  __int64 v47; // r13
  char *v48; // rdx
  __m128i v49; // xmm2
  __m128i v50; // xmm3
  __int64 v52; // r14
  int v53; // eax
  __int64 v54; // rdi
  char *v55; // r15
  signed __int64 v56; // rdx
  char *v57; // r12
  signed __int64 v58; // rax
  char *v59; // rdx
  int v60; // ecx
  char v61; // si
  char v62; // di
  char v63; // r8
  char *v64; // rdx
  int v65; // edi
  int v66; // esi
  signed __int64 v67; // r13
  char *v68; // rax
  int v69; // ecx
  char v70; // dl
  char v71; // si
  char v72; // di
  char *v73; // rax
  int v74; // esi
  int v75; // edx
  __int64 v76; // rdi
  __int64 v77; // r15
  unsigned __int64 v78; // rax
  __int64 v80; // r15
  __int64 v81; // rsi
  __m128i v82; // xmm1
  __int64 v83; // r12
  __int64 v84; // rdi
  __m128i v85; // xmm2
  __int64 v86; // rax
  __m128i v87; // xmm3
  int v89; // eax
  unsigned __int64 v90; // rax
  __int64 v91; // r9
  unsigned __int64 v92; // rsi
  __m128i v93; // xmm1
  __int64 v94; // r12
  __int64 v95; // rdi
  __m128i v96; // xmm2
  size_t v97; // rax
  __m128i v98; // xmm3
  __int64 v100; // r15
  int v101; // eax
  unsigned int v102; // eax
  __int64 v103; // rax
  __int64 v104; // r14
  unsigned __int64 v105; // rdx
  unsigned __int16 v106; // r8
  char v109; // si
  bool v110; // cc
  _QWORD *v111; // rdi
  __int64 v112; // rsi
  const void *v113; // r12
  int v114; // eax
  __int64 v115; // r13
  const void *v116; // rdi
  __int64 v117; // rax
  __m128i v118; // [rsp+0h] [rbp-100h] BYREF
  __m128i v119; // [rsp+10h] [rbp-F0h] BYREF
  __int64 v120; // [rsp+20h] [rbp-E0h]
  __int64 v121; // [rsp+28h] [rbp-D8h]
  __m128i v122; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v123; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v124; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v125; // [rsp+60h] [rbp-A0h]
  signed __int64 v126; // [rsp+68h] [rbp-98h]
  __m128i v127; // [rsp+70h] [rbp-90h] BYREF
  __m128i v128; // [rsp+80h] [rbp-80h] BYREF
  void *__s1[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v130; // [rsp+A8h] [rbp-58h]
  _QWORD *v131; // [rsp+B0h] [rbp-50h]
  __int64 v132; // [rsp+B8h] [rbp-48h]
  void *__src; // [rsp+C0h] [rbp-40h]
  size_t __n; // [rsp+C8h] [rbp-38h]
  __int64 v135; // [rsp+D0h] [rbp-30h]

  v6 = a2; /*0x100539634*/
  if ( a2 < 0 ) /*0x10053963a*/
  {
    v7 = 0; /*0x10053963c*/
    goto LABEL_3; /*0x10053963c*/
  }
  _R14 = (unsigned __int64)a6; /*0x10053964a*/
  v9 = a3; /*0x10053964d*/
  v10 = a1; /*0x100539650*/
  v135 = a4; /*0x100539653*/
  v130 = (unsigned __int64)a5; /*0x100539657*/
  __src = a1; /*0x10053965b*/
  if ( a2 ) /*0x10053965f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100539667*/
    v7 = 1; /*0x10053966c*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a2, 1); /*0x10053967a*/
    if ( !v13 ) /*0x100539682*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, a2); /*0x10053963f*/
    v14 = v13; /*0x100539684*/
    v9 = a3; /*0x100539687*/
    _R14 = (unsigned __int64)a6; /*0x10053968a*/
    v10 = (char *)__src; /*0x10053968d*/
  }
  else
  {
    v14 = 1; /*0x100539693*/
  }
  memcpy((void *)v14, v10, a2); /*0x1005396a2*/
  v124 = a2; /*0x1005396a7*/
  v125 = v14; /*0x1005396ae*/
  v126 = a2; /*0x1005396b5*/
  if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(_R14, &v124) ) /*0x1005396c6*/
    return 0; /*0x1005396d1*/
  v16 = v9[3] == 0; /*0x1005396d6*/
  v131 = (_QWORD *)_R14; /*0x1005396db*/
  if ( v16 ) /*0x1005396df*/
    goto LABEL_32; /*0x1005396df*/
  v17 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v9 + 4, v10, a2); /*0x1005396ef*/
  _RCX = v17 >> 57; /*0x1005396f7*/
  v19 = *v9; /*0x1005396fb*/
  v122.i64[0] = (__int64)v9; /*0x1005396ff*/
  v20 = v9[1]; /*0x100539706*/
  v21 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v17 >> 57), (__m128i)0LL); /*0x100539712*/
  v22 = v19 - 232; /*0x100539717*/
  v23 = nullptr; /*0x10053971e*/
  v24 = (__m128i)-1LL; /*0x100539720*/
  while ( 1 ) /*0x100539724*/
  {
    v25 = v20 & v17; /*0x100539724*/
    v26 = _mm_loadu_si128((const __m128i *)(v19 + v25)); /*0x100539727*/
    _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v26, v21)); /*0x100539734*/
    if ( _R13D ) /*0x10053973c*/
      break; /*0x10053973c*/
LABEL_17:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v26, v24)); /*0x1005397b9*/
    if ( (_DWORD)_RCX ) /*0x1005397c3*/
      goto LABEL_90; /*0x1005397c3*/
    v17 = (unsigned __int64)&v23[v25 + 16]; /*0x1005397c9*/
    v23 += 16; /*0x1005397ce*/
  }
  __n = v25; /*0x10053973e*/
  v132 = v19; /*0x100539742*/
  v128 = v21; /*0x100539746*/
  __s1[0] = v23; /*0x10053974b*/
  v127 = v26; /*0x10053974f*/
  while ( 1 ) /*0x100539757*/
  {
    __asm { tzcnt ecx, r13d } /*0x100539757*/
    _RCX = -(__int64)(v20 & (v25 + _RCX)); /*0x100539762*/
    v28 = 232 * _RCX; /*0x100539765*/
    if ( v6 == *(_QWORD *)(v22 + 232 * _RCX + 16) ) /*0x100539771*/
    {
      i = *(_QWORD *)(v22 + v28 + 8); /*0x100539777*/
      if ( !memcmp(__src, (const void *)i, v6) ) /*0x100539782*/
        break; /*0x100539782*/
    }
    v30 = _R13D - 1; /*0x10053978b*/
    LOWORD(v30) = _R13D & (_R13D - 1); /*0x10053978f*/
    v16 = (_WORD)v30 == 0; /*0x10053978f*/
    _R13D = v30; /*0x100539793*/
    v25 = __n; /*0x100539796*/
    _R14 = (unsigned __int64)v131; /*0x10053979a*/
    v19 = v132; /*0x10053979e*/
    v21 = _mm_load_si128(&v128); /*0x1005397a2*/
    v23 = (char *)__s1[0]; /*0x1005397a7*/
    v24 = (__m128i)-1LL; /*0x1005397ab*/
    v26 = _mm_load_si128(&v127); /*0x1005397af*/
    if ( v16 ) /*0x1005397b7*/
      goto LABEL_17; /*0x1005397b7*/
  }
  __n = v6; /*0x1005397d7*/
  v31 = v135; /*0x1005397e5*/
  if ( *(_BYTE *)(v132 + v28 - 4) ) /*0x1005397df*/
  {
    LODWORD(v135) = 0; /*0x1005397eb*/
    _R14 = (unsigned __int64)v131; /*0x1005397f2*/
    v6 = __n; /*0x1005397f6*/
    goto LABEL_91; /*0x1005397fa*/
  }
  v32 = v28 + v132; /*0x1005397ff*/
  v33 = *(unsigned __int8 **)(v28 + v132 - 152); /*0x100539802*/
  v34 = *(_QWORD *)(v28 + v132 - 144); /*0x100539809*/
  if ( v34 == 19 ) /*0x100539814*/
  {
    v41 = _mm_or_si128( /*0x10053990b*/
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)v33), (__m128i)xmmword_1015FBE90),
            _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v33 + 3)), (__m128i)xmmword_1015FBE80));
    _R14 = (unsigned __int64)v131; /*0x100539914*/
    v6 = __n; /*0x100539918*/
    v10 = (char *)__src; /*0x10053991c*/
    if ( !_mm_testz_si128(v41, v41) ) /*0x100539920*/
      goto LABEL_32; /*0x100539920*/
  }
  else
  {
    _R14 = (unsigned __int64)v131; /*0x10053981e*/
    v6 = __n; /*0x100539822*/
    v10 = (char *)__src; /*0x100539826*/
    if ( v34 != 6 ) /*0x10053982a*/
      goto LABEL_32; /*0x10053982a*/
    v35 = *v33; /*0x100539830*/
    i = (unsigned int)(v35 - 65); /*0x100539833*/
    LOBYTE(i) = v35 | (32 * ((unsigned __int8)(v35 - 65) < 0x1Au)); /*0x100539842*/
    if ( (_BYTE)i != 111 ) /*0x100539849*/
      goto LABEL_127; /*0x100539849*/
    v36 = v33[1]; /*0x10053984f*/
    i = (unsigned int)(v36 - 65); /*0x100539853*/
    LOBYTE(i) = v36 | (32 * ((unsigned __int8)(v36 - 65) < 0x1Au)); /*0x100539862*/
    if ( (_BYTE)i != 112 ) /*0x100539869*/
      goto LABEL_127; /*0x100539869*/
    v37 = v33[2]; /*0x10053986b*/
    i = (unsigned int)(v37 - 65); /*0x10053986f*/
    LOBYTE(i) = v37 | (32 * ((unsigned __int8)(v37 - 65) < 0x1Au)); /*0x10053987e*/
    if ( (_BYTE)i != 101 ) /*0x100539885*/
      goto LABEL_127; /*0x100539885*/
    v38 = v33[3]; /*0x100539887*/
    i = (unsigned int)(v38 - 65); /*0x10053988b*/
    LOBYTE(i) = v38 | (32 * ((unsigned __int8)(v38 - 65) < 0x1Au)); /*0x10053989a*/
    if ( (_BYTE)i != 110 /*0x1005398d9*/
      || (v39 = v33[4],
          i = (unsigned int)(v39 - 65),
          LOBYTE(i) = v39 | (32 * ((unsigned __int8)(v39 - 65) < 0x1Au)),
          (_BYTE)i != 97)
      || (v40 = v33[5],
          i = (unsigned int)(v40 - 65),
          LOBYTE(i) = v40 | (32 * ((unsigned __int8)(v40 - 65) < 0x1Au)),
          (_BYTE)i != 105) )
    {
LABEL_127:
      if ( *(_DWORD *)v33 ^ 0x616D6961 | *((unsigned __int16 *)v33 + 2) ^ 0x3169 ) /*0x1005398ec*/
        goto LABEL_32; /*0x1005398ee*/
    }
  }
  v42 = v10; /*0x10053992e*/
  LOBYTE(v10) = 1; /*0x10053993b*/
  v16 = *(_QWORD *)(v135 + 24) == 0; /*0x10053993e*/
  v132 = v32; /*0x100539943*/
  if ( v16 ) /*0x100539947*/
  {
    v48 = nullptr; /*0x100539a5e*/
    v54 = 0; /*0x100539a60*/
  }
  else
  {
    v43 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v135 + 32, v42, v6); /*0x100539957*/
    HIDWORD(_RCX) = HIDWORD(v135); /*0x10053995c*/
    v10 = *(char **)v135; /*0x100539967*/
    v45 = *(_QWORD *)(v135 + 8); /*0x10053996a*/
    si128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v43 >> 57), (__m128i)0LL); /*0x100539976*/
    v47 = *(_QWORD *)v135 - 192LL; /*0x10053997b*/
    v48 = nullptr; /*0x100539982*/
    v49 = (__m128i)-1LL; /*0x100539984*/
    for ( i = 0; ; i += 16 ) /*0x100539988*/
    {
      v31 = v45 & v43; /*0x10053998a*/
      v50 = _mm_loadu_si128((const __m128i *)&v10[v31]); /*0x10053998d*/
      _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v50, si128)); /*0x10053999b*/
      if ( _EBX ) /*0x1005399a1*/
        break; /*0x1005399a1*/
LABEL_40:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v50, v49)); /*0x100539a20*/
      v32 = v132; /*0x100539a2a*/
      if ( (_DWORD)_RCX ) /*0x100539a2e*/
      {
        v54 = 0; /*0x100539a64*/
        v6 = __n; /*0x100539a66*/
        v42 = (char *)__src; /*0x100539a6a*/
        LOBYTE(v10) = 1; /*0x100539a78*/
        goto LABEL_48; /*0x100539a7b*/
      }
      v43 = v31 + i + 16; /*0x100539a30*/
    }
    v128.i64[0] = v31; /*0x1005399a3*/
    *(__m128i *)__s1 = si128; /*0x1005399a7*/
    v127.i64[0] = i; /*0x1005399ac*/
    v123 = v50; /*0x1005399b3*/
    while ( 1 ) /*0x1005399bb*/
    {
      __asm { tzcnt ecx, ebx } /*0x1005399bb*/
      _RCX = -(v45 & (v31 + _RCX)); /*0x1005399c5*/
      v52 = 192 * _RCX; /*0x1005399cc*/
      if ( __n == *(_QWORD *)(v47 + 192 * _RCX + 16) ) /*0x1005399d9*/
      {
        i = *(_QWORD *)(v47 + v52 + 8); /*0x1005399e0*/
        LODWORD(v31) = memcmp(__src, (const void *)i, __n); /*0x1005399e8*/
        if ( !(_DWORD)v31 ) /*0x1005399ef*/
          break; /*0x1005399ef*/
      }
      v53 = _EBX - 1; /*0x1005399f1*/
      LOWORD(v53) = _EBX & (_EBX - 1); /*0x1005399f4*/
      v16 = (_WORD)v53 == 0; /*0x1005399f4*/
      _EBX = v53; /*0x1005399f7*/
      v31 = v128.i64[0]; /*0x1005399f9*/
      _R14 = (unsigned __int64)v131; /*0x1005399fd*/
      v48 = nullptr; /*0x100539a01*/
      si128 = _mm_load_si128((const __m128i *)__s1); /*0x100539a06*/
      v49 = (__m128i)-1LL; /*0x100539a0b*/
      i = v127.i64[0]; /*0x100539a0f*/
      v50 = _mm_load_si128(&v123); /*0x100539a16*/
      if ( v16 ) /*0x100539a1e*/
        goto LABEL_40; /*0x100539a1e*/
    }
    v48 = &v10[v52 - 168]; /*0x100539a3e*/
    if ( *(_QWORD *)&v10[v52 - 104] == 0x8000000000000000LL ) /*0x100539a55*/
    {
      v10 = nullptr; /*0x100539a57*/
      v54 = 0; /*0x100539a5a*/
    }
    else
    {
      v55 = &v10[v52]; /*0x100539a7d*/
      v54 = *((_QWORD *)v55 - 12); /*0x100539a80*/
      i = *((_QWORD *)v55 - 11); /*0x100539a84*/
      v10 = nullptr; /*0x100539a88*/
    }
    _R14 = (unsigned __int64)v131; /*0x100539a8b*/
    v6 = __n; /*0x100539a8f*/
    v42 = (char *)__src; /*0x100539a93*/
    v32 = v132; /*0x100539a97*/
  }
LABEL_48:
  if ( *(_QWORD *)(v32 - 136) == 0x8000000000000000LL ) /*0x100539aa2*/
  {
    if ( !v54 ) /*0x100539aa7*/
      goto LABEL_108; /*0x100539aa7*/
  }
  else if ( !v54 ) /*0x100539ab1*/
  {
    v54 = *(_QWORD *)(v32 - 128); /*0x100539ab3*/
    i = *(_QWORD *)(v32 - 120); /*0x100539ab7*/
  }
  v128.i64[0] = (__int64)v48; /*0x100539abb*/
  v57 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v54, i); /*0x100539ac4*/
  do /*0x100539b3b*/
  {
    while ( 1 ) /*0x100539ad4*/
    {
      v58 = v56; /*0x100539ad4*/
      if ( !v56 ) /*0x100539ada*/
        goto LABEL_66; /*0x100539ada*/
      v59 = &v57[v56]; /*0x100539adc*/
      v60 = v57[v58 - 1]; /*0x100539ae0*/
      if ( v60 < 0 ) /*0x100539ae6*/
        break; /*0x100539ae6*/
      v56 = v58 - 1; /*0x100539acc*/
      if ( v60 != 47 ) /*0x100539ad2*/
        goto LABEL_66; /*0x100539ad2*/
    }
    v61 = *(v59 - 2); /*0x100539ae8*/
    if ( v61 >= -64 ) /*0x100539af0*/
    {
      v64 = v59 - 2; /*0x100539b15*/
      v66 = v61 & 0x1F; /*0x100539b19*/
    }
    else
    {
      v62 = *(v59 - 3); /*0x100539af2*/
      if ( v62 >= -64 ) /*0x100539afa*/
      {
        v64 = v59 - 3; /*0x100539b1e*/
        v65 = v62 & 0xF; /*0x100539b22*/
      }
      else
      {
        v63 = *(v59 - 4); /*0x100539afc*/
        v64 = v59 - 4; /*0x100539b01*/
        v65 = ((v63 & 7) << 6) | v62 & 0x3F; /*0x100539b10*/
      }
      v54 = (unsigned int)(v65 << 6); /*0x100539b25*/
      v66 = v54 | v61 & 0x3F; /*0x100539b2b*/
    }
    i = (unsigned int)(v66 << 6); /*0x100539b2d*/
    v56 = v64 - v57; /*0x100539b35*/
  }
  while ( ((unsigned int)i | v60 & 0x3F) == 0x2F ); /*0x100539b3b*/
  do /*0x100539bab*/
  {
    while ( 1 ) /*0x100539b4a*/
    {
LABEL_66:
      if ( !v58 ) /*0x100539b4d*/
      {
        v127.i64[0] = (__int64)v10; /*0x100539bc0*/
        v77 = 1; /*0x100539bc7*/
        v67 = 0; /*0x100539bcd*/
        goto LABEL_79; /*0x100539bcd*/
      }
      v67 = v58; /*0x100539b4f*/
      v68 = &v57[v58]; /*0x100539b52*/
      v69 = *(v68 - 1); /*0x100539b55*/
      if ( v69 < 0 ) /*0x100539b5b*/
        break; /*0x100539b5b*/
      v58 = v68 - 1 - v57; /*0x100539b42*/
      if ( v69 != 92 ) /*0x100539b48*/
        goto LABEL_75; /*0x100539b48*/
    }
    v70 = *(v68 - 2); /*0x100539b5d*/
    if ( v70 >= -64 ) /*0x100539b64*/
    {
      v73 = v68 - 2; /*0x100539b85*/
      v75 = v70 & 0x1F; /*0x100539b89*/
    }
    else
    {
      v71 = *(v68 - 3); /*0x100539b66*/
      if ( v71 >= -64 ) /*0x100539b6e*/
      {
        v73 = v68 - 3; /*0x100539b8e*/
        v74 = v71 & 0xF; /*0x100539b92*/
      }
      else
      {
        v72 = *(v68 - 4); /*0x100539b70*/
        v73 = v68 - 4; /*0x100539b74*/
        v54 = (unsigned __int8)(v72 & 7) << 6; /*0x100539b7b*/
        v74 = v54 | v71 & 0x3F; /*0x100539b81*/
      }
      i = (unsigned int)(v74 << 6); /*0x100539b95*/
      v75 = i | v70 & 0x3F; /*0x100539b9b*/
    }
    v58 = v73 - v57; /*0x100539ba5*/
  }
  while ( ((v75 << 6) | v69 & 0x3F) == 0x5C ); /*0x100539bab*/
LABEL_75:
  if ( v67 < 0 ) /*0x100539bb0*/
  {
    v76 = 0; /*0x100539bb6*/
    goto LABEL_77; /*0x100539bb6*/
  }
  v127.i64[0] = (__int64)v10; /*0x100539fc5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, i); /*0x100539fcc*/
  v117 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v67, 1); /*0x100539fd9*/
  v76 = 1; /*0x100539fde*/
  if ( !v117 ) /*0x100539fe6*/
LABEL_77:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v76, v67); /*0x100539bb8*/
  v77 = v117; /*0x100539fec*/
  _R14 = (unsigned __int64)v131; /*0x100539fef*/
  v6 = __n; /*0x100539ff3*/
LABEL_79:
  memcpy((void *)v77, v57, v67); /*0x100539bd0*/
  v124 = v67; /*0x100539bde*/
  __s1[0] = (void *)v77; /*0x100539be5*/
  v125 = v77; /*0x100539be9*/
  v126 = v67; /*0x100539bf0*/
  if ( !*(_QWORD *)(v130 + 24) ) /*0x100539c00*/
  {
LABEL_88:
    if ( v67 ) /*0x100539d09*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1[0], v67, 1); /*0x100539d17*/
LABEL_90:
    LODWORD(v135) = 0; /*0x100539d1c*/
LABEL_91:
    v10 = (char *)__src; /*0x100539d23*/
    goto LABEL_92; /*0x100539d23*/
  }
  v78 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v130 + 32, &v124); /*0x100539c11*/
  _RCX = v78 >> 57; /*0x100539c19*/
  v80 = *(_QWORD *)v130; /*0x100539c21*/
  v81 = *(_QWORD *)(v130 + 8); /*0x100539c24*/
  v82 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v78 >> 57), (__m128i)0LL); /*0x100539c30*/
  v83 = *(_QWORD *)v130 - 24LL; /*0x100539c35*/
  v84 = 0; /*0x100539c39*/
  v85 = (__m128i)-1LL; /*0x100539c3b*/
  while ( 1 ) /*0x100539c3f*/
  {
    v86 = v81 & v78; /*0x100539c3f*/
    v87 = _mm_loadu_si128((const __m128i *)(v80 + v86)); /*0x100539c42*/
    _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v87, v82)); /*0x100539c50*/
    if ( _EBX ) /*0x100539c56*/
      break; /*0x100539c56*/
LABEL_86:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v87, v85)); /*0x100539ce8*/
    v6 = __n; /*0x100539cf2*/
    if ( (_DWORD)_RCX ) /*0x100539cf6*/
      goto LABEL_88; /*0x100539cf6*/
    v78 = v86 + v84 + 16; /*0x100539cf8*/
    v84 += 16; /*0x100539cfd*/
  }
  v123.i64[0] = v86; /*0x100539c5c*/
  v118 = v82; /*0x100539c63*/
  v120 = v81; /*0x100539c6b*/
  v121 = v84; /*0x100539c72*/
  v119 = v87; /*0x100539c79*/
  while ( 1 ) /*0x100539c81*/
  {
    __asm { tzcnt ecx, ebx } /*0x100539c81*/
    _RCX = -(__int64)(v81 & (v86 + _RCX)); /*0x100539c8b*/
    if ( v67 == *(_QWORD *)(v83 + 24 * _RCX + 16) ) /*0x100539c97*/
    {
      LODWORD(v31) = memcmp(__s1[0], *(const void **)(v83 + 24 * _RCX + 8), v67); /*0x100539ca8*/
      if ( !(_DWORD)v31 ) /*0x100539caf*/
        break; /*0x100539caf*/
    }
    v89 = _EBX - 1; /*0x100539cb5*/
    LOWORD(v89) = _EBX & (_EBX - 1); /*0x100539cb8*/
    v16 = (_WORD)v89 == 0; /*0x100539cb8*/
    _EBX = v89; /*0x100539cbb*/
    v86 = v123.i64[0]; /*0x100539cbd*/
    v82 = _mm_load_si128(&v118); /*0x100539cc4*/
    v81 = v120; /*0x100539ccc*/
    v84 = v121; /*0x100539cd3*/
    v85 = (__m128i)-1LL; /*0x100539cda*/
    v87 = _mm_load_si128(&v119); /*0x100539cde*/
    if ( v16 ) /*0x100539ce6*/
      goto LABEL_86; /*0x100539ce6*/
  }
  if ( v67 ) /*0x100539ed6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1[0], v67, 1); /*0x100539ee4*/
  v6 = __n; /*0x100539ee9*/
  v42 = (char *)__src; /*0x100539eed*/
  v32 = v132; /*0x100539ef1*/
  LOBYTE(v10) = v127.i8[0]; /*0x100539eff*/
  v48 = (char *)v128.i64[0]; /*0x100539f06*/
LABEL_108:
  if ( (_BYTE)v10 ) /*0x100539f0d*/
  {
    v113 = nullptr; /*0x100539f0f*/
    v10 = v42; /*0x100539f12*/
  }
  else
  {
    v10 = v42; /*0x100539f1b*/
    if ( *((_QWORD *)v48 + 11) == 0x8000000000000000LL ) /*0x100539f1e*/
    {
      v113 = nullptr; /*0x100539f20*/
    }
    else
    {
      v113 = *((const void **)v48 + 12); /*0x100539f25*/
      v31 = *((_QWORD *)v48 + 13); /*0x100539f29*/
    }
  }
  if ( *(_QWORD *)(v32 - 40) == 0x8000000000000000LL ) /*0x100539f31*/
  {
    if ( !v113 && *(_QWORD *)(v32 - 168) == 6 ) /*0x100539f44*/
    {
      v114 = **(_DWORD **)(v32 - 176) ^ 0x6F637376 | *(unsigned __int16 *)(*(_QWORD *)(v32 - 176) + 4LL) ^ 0x6564; /*0x100539f61*/
      LOBYTE(v114) = v114 == 0; /*0x100539f63*/
      LODWORD(v135) = v114; /*0x100539f66*/
      goto LABEL_92; /*0x100539f69*/
    }
LABEL_32:
    LODWORD(v135) = 0; /*0x100539922*/
    goto LABEL_92; /*0x100539929*/
  }
  v115 = *(_QWORD *)(v32 - 24); /*0x100539f6e*/
  if ( v113 ) /*0x100539f75*/
  {
    if ( v115 != v31 ) /*0x100539f7a*/
      goto LABEL_32; /*0x100539f7a*/
    v116 = *(const void **)(v32 - 32); /*0x100539f80*/
  }
  else
  {
    v116 = *(const void **)(v32 - 32); /*0x100539f86*/
    v113 = v116; /*0x100539f8a*/
  }
  if ( memcmp(v116, v113, *(_QWORD *)(v32 - 24)) ) /*0x100539f93*/
    goto LABEL_32; /*0x100539f9a*/
  LODWORD(v135) = codexmate_lib::core::sessions::is_codex_visible_session::h7d18eca42be782d4( /*0x100539fbd*/
                    v113,
                    v115,
                    v122.i64[0],
                    v135,
                    v130,
                    _R14);
LABEL_92:
  v90 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(_R14 + 32, v10, v6); /*0x100539d27*/
  v91 = *(_QWORD *)_R14; /*0x100539d3d*/
  v92 = *(_QWORD *)(_R14 + 8); /*0x100539d40*/
  v93 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v90 >> 57), (__m128i)0LL); /*0x100539d4c*/
  v94 = *(_QWORD *)_R14 - 24LL; /*0x100539d51*/
  v95 = 0; /*0x100539d55*/
  v96 = (__m128i)-1LL; /*0x100539d57*/
  while ( 1 ) /*0x100539d5b*/
  {
    v97 = v92 & v90; /*0x100539d5b*/
    v98 = _mm_loadu_si128((const __m128i *)(v91 + v97)); /*0x100539d5e*/
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v98, v93)); /*0x100539d6c*/
    if ( (_DWORD)_RCX ) /*0x100539d72*/
      break; /*0x100539d72*/
LABEL_98:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v98, v96)) ) /*0x100539e04*/
      return (unsigned int)v135; /*0x100539e0a*/
    v90 = v97 + v95 + 16; /*0x100539e10*/
    v95 += 16; /*0x100539e15*/
  }
  __n = v97; /*0x100539d78*/
  v122 = v93; /*0x100539d7c*/
  v128.i64[0] = v95; /*0x100539d84*/
  *(__m128i *)__s1 = v98; /*0x100539d88*/
  while ( 1 ) /*0x100539d8d*/
  {
    v132 = _RCX; /*0x100539d8d*/
    __asm { tzcnt r14d, ecx } /*0x100539d91*/
    _R14 = v92 & (v97 + _R14); /*0x100539d99*/
    if ( v6 == *(_QWORD *)(v94 - 24 * _R14 + 16) ) /*0x100539dae*/
    {
      v130 = v92; /*0x100539db4*/
      v100 = v91; /*0x100539dc3*/
      v101 = memcmp(__src, *(const void **)(v94 - 24 * _R14 + 8), v6); /*0x100539dc6*/
      v91 = v100; /*0x100539dcb*/
      v92 = v130; /*0x100539dce*/
      if ( !v101 ) /*0x100539dd4*/
        break; /*0x100539dd4*/
    }
    v102 = v132 - 1; /*0x100539dda*/
    LOWORD(v102) = v132 & (v132 - 1); /*0x100539ddd*/
    _RCX = v102; /*0x100539de0*/
    v97 = __n; /*0x100539de2*/
    v93 = _mm_load_si128(&v122); /*0x100539de9*/
    v95 = v128.i64[0]; /*0x100539df1*/
    v96 = (__m128i)-1LL; /*0x100539df5*/
    v98 = _mm_load_si128((const __m128i *)__s1); /*0x100539df9*/
    if ( ((unsigned __int16)v132 & (unsigned __int16)(v132 - 1)) == 0 ) /*0x100539dfe*/
      goto LABEL_98; /*0x100539dfe*/
  }
  v103 = v100 - 24 * _R14; /*0x100539e1e*/
  v104 = 8 * _R14; /*0x100539e22*/
  v105 = v130 & (0xAAAAAAAAAAAAAAABLL * ((3 * v104) >> 3) - 16); /*0x100539e40*/
  _BitScanReverse( /*0x100539e68*/
    &v106,
    _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v100 + v105)), (__m128i)-1LL)));
  _EDI = _mm_movemask_epi8( /*0x100539e71*/
           _mm_cmpeq_epi8(
             _mm_loadu_si128((const __m128i *)(v100 - 0x5555555555555555LL * ((3 * v104) >> 3))),
             (__m128i)-1LL))
       | 0x10000;
  __asm { tzcnt edi, edi } /*0x100539e77*/
  v109 = 0x80; /*0x100539e7e*/
  v110 = (unsigned __int16)((v106 ^ 0xF) + _EDI) <= 0xFu; /*0x100539e81*/
  v111 = v131; /*0x100539e85*/
  if ( v110 ) /*0x100539e89*/
  {
    ++v131[2]; /*0x100539e8b*/
    v109 = -1; /*0x100539e8f*/
  }
  *(_BYTE *)(v100 - 0x5555555555555555LL * ((3 * v104) >> 3)) = v109; /*0x100539e92*/
  *(_BYTE *)(v100 + v105 + 16) = v109; /*0x100539e96*/
  --v111[3]; /*0x100539e9b*/
  v112 = *(_QWORD *)(v103 - 24); /*0x100539e9f*/
  if ( 2 * v112 ) /*0x100539ea3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v103 - 16), v112, 1); /*0x100539eb9*/
  return (unsigned int)v135; /*0x100539ec1*/
}