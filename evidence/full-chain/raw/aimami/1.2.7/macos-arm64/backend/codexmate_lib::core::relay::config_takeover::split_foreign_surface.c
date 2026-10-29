// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::split_foreign_surface::h6723df967ae8fa8d; addr: 0x100221ce0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::config_takeover::split_foreign_surface::h6723df967ae8fa8d(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128i a5,
        __int64 a6,
        int a7)
{
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // r14
  char *v12; // r15
  unsigned __int64 v13; // r13
  __int64 v14; // r12
  char *v15; // rax
  char *v16; // rbx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r10
  char *v22; // rdx
  char v23; // al
  char *v24; // r15
  __int64 v25; // r12
  unsigned __int64 v26; // rdx
  char v27; // di
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  int v30; // esi
  unsigned __int64 v31; // rdx
  bool v32; // zf
  int v33; // esi
  char *v34; // r12
  signed __int64 v35; // rax
  __int64 v36; // rbx
  signed __int64 v37; // rbx
  __int64 v38; // rax
  const __m128i *v39; // rdx
  __int64 v40; // r14
  char *v41; // rdi
  const char *v42; // rsi
  const __m128i *v43; // rdx
  _BYTE *v44; // r9
  __m128i v45; // xmm2
  size_t v46; // rdx
  size_t v47; // rdx
  int v48; // eax
  int v49; // eax
  __int32 v50; // eax
  int v51; // ecx
  __m128i v52; // xmm1
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __m128i v56; // xmm1
  signed __int64 v57; // r12
  signed __int64 v58; // rax
  signed __int64 v59; // r12
  signed __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r15
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  signed __int64 v68; // r12
  signed __int64 v69; // rax
  signed __int64 v70; // r12
  signed __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // rax
  __int8 *v74; // rcx
  unsigned __int64 *v75; // rdi
  const __m128i *v76; // rsi
  __int64 v77; // rdx
  char v78; // r12
  void *v79; // rsi
  char v80; // al
  __int64 v81; // rdx
  __int64 v82; // rax
  char *v83; // rbx
  __int64 v84; // rax
  __int64 v85; // r15
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  signed __int64 v89; // r12
  __int64 v90; // rax
  __int64 v91; // rax
  char *v92; // rbx
  __int64 v93; // rax
  char *v94; // r12
  __int64 v95; // r15
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r15
  __int64 v99; // rax
  size_t v100; // rsi
  __int64 v101; // r15
  size_t v102; // rsi
  __int64 v103; // rax
  __int64 v104; // r14
  __int64 v105; // r13
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rbx
  __int64 v110; // r14
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // r14
  _QWORD *v120; // r15
  __int64 v121; // rsi
  __int64 v122; // rdi
  __int64 v123; // rdi
  __int64 v124; // rdi
  __int64 v128; // [rsp+18h] [rbp-168h] BYREF
  const __m128i *v129; // [rsp+20h] [rbp-160h]
  const __m128i *v130; // [rsp+28h] [rbp-158h]
  __int64 v131; // [rsp+30h] [rbp-150h]
  size_t v132; // [rsp+38h] [rbp-148h]
  size_t v133; // [rsp+40h] [rbp-140h]
  int v134; // [rsp+4Ch] [rbp-134h]
  char *v135; // [rsp+50h] [rbp-130h]
  __int64 v136; // [rsp+58h] [rbp-128h] BYREF
  __int64 v137; // [rsp+60h] [rbp-120h]
  __int64 v138; // [rsp+68h] [rbp-118h]
  __int64 v139; // [rsp+70h] [rbp-110h] BYREF
  __int64 v140; // [rsp+78h] [rbp-108h]
  __int64 v141; // [rsp+80h] [rbp-100h]
  __int64 v142; // [rsp+88h] [rbp-F8h]
  __int64 v143; // [rsp+90h] [rbp-F0h]
  unsigned __int64 v144; // [rsp+98h] [rbp-E8h] BYREF
  const __m128i *v145; // [rsp+A0h] [rbp-E0h]
  const __m128i *v146; // [rsp+A8h] [rbp-D8h]
  __int64 v147; // [rsp+B0h] [rbp-D0h] BYREF
  __int64 v148; // [rsp+B8h] [rbp-C8h]
  __int64 v149; // [rsp+C0h] [rbp-C0h]
  __int64 v150; // [rsp+C8h] [rbp-B8h] BYREF
  const __m128i *v151; // [rsp+D0h] [rbp-B0h]
  const __m128i *v152; // [rsp+D8h] [rbp-A8h]
  __int64 v153; // [rsp+E0h] [rbp-A0h]
  __int64 v154; // [rsp+E8h] [rbp-98h]
  __int64 v155; // [rsp+F0h] [rbp-90h]
  int v156; // [rsp+FCh] [rbp-84h]
  char *v157; // [rsp+100h] [rbp-80h]
  __int64 v158; // [rsp+108h] [rbp-78h]
  size_t __n; // [rsp+110h] [rbp-70h]
  __int64 v160; // [rsp+118h] [rbp-68h]
  void *__src; // [rsp+120h] [rbp-60h]
  const __m128i *v162; // [rsp+128h] [rbp-58h]
  char v163; // [rsp+133h] [rbp-4Dh] BYREF
  int v164; // [rsp+134h] [rbp-4Ch]
  __int64 v165; // [rsp+138h] [rbp-48h]
  char *v166; // [rsp+140h] [rbp-40h] BYREF
  __int64 v167; // [rsp+148h] [rbp-38h]
  __int64 v168; // [rsp+150h] [rbp-30h]

  v157 = (char *)a4; /*0x100221cf4*/
  if ( a4 < 0 ) /*0x100221cfb*/
  {
    v7 = 0; /*0x100221cfd*/
    goto LABEL_3; /*0x100221cfd*/
  }
  v142 = a3; /*0x100221d13*/
  if ( a4 ) /*0x100221d21*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x100221d23*/
    v7 = 1; /*0x100221d28*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v157, 1); /*0x100221d37*/
    if ( !v8 ) /*0x100221d3f*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v157); /*0x100221d00*/
  }
  else
  {
    v8 = 1; /*0x100221d43*/
  }
  LODWORD(v9) = 0; /*0x100221d48*/
  v166 = v157; /*0x100221d56*/
  v165 = v8; /*0x100221d5a*/
  v167 = v8; /*0x100221d5e*/
  v168 = 0; /*0x100221d62*/
  v136 = 0; /*0x100221d6a*/
  v137 = 8; /*0x100221d75*/
  v138 = 0; /*0x100221d80*/
  v139 = 0; /*0x100221d8b*/
  v140 = 8; /*0x100221d96*/
  v141 = 0; /*0x100221da1*/
  v163 = 2; /*0x100221dac*/
  v144 = 0x8000000000000000LL; /*0x100221db0*/
  v10 = 0; /*0x100221db7*/
  v11 = 0; /*0x100221dba*/
  v164 = 0; /*0x100221dbd*/
  v156 = 0; /*0x100221dc4*/
  v12 = nullptr; /*0x100221dce*/
  v13 = 0; /*0x100221dd1*/
  while ( 2 ) /*0x100221dd4*/
  {
    v134 = 0; /*0x100221dd4*/
LABEL_10:
    v143 = v10; /*0x100221de0*/
    __src = v12; /*0x100221de7*/
    LOBYTE(a7) = 2; /*0x100221deb*/
    LODWORD(v158) = 0; /*0x100221dee*/
    v14 = v11; /*0x100221df5*/
    do /*0x100221ef6*/
    {
      LODWORD(v160) = a7; /*0x100221e00*/
      v15 = v157; /*0x100221e04*/
      v16 = v12; /*0x100221e08*/
      if ( (unsigned __int64)v157 < v13 ) /*0x100221e0e*/
        goto LABEL_25; /*0x100221e0e*/
      v17 = v13; /*0x100221e14*/
      while ( 1 ) /*0x100221e2c*/
      {
        v18 = (unsigned __int64)&v15[-v17]; /*0x100221e2c*/
        LODWORD(v9) = v142; /*0x100221e2f*/
        v19 = v142 + v17; /*0x100221e36*/
        if ( v18 >= 0x10 ) /*0x100221e3e*/
          break; /*0x100221e3e*/
        v20 = 0; /*0x100221e40*/
        if ( !v18 ) /*0x100221e45*/
          goto LABEL_24; /*0x100221e45*/
        while ( *(_BYTE *)(v19 + v20) != 10 ) /*0x100221e55*/
        {
          if ( v18 == ++v20 ) /*0x100221e5d*/
            goto LABEL_24; /*0x100221e5d*/
        }
LABEL_20:
        v13 = v20 + v17 + 1; /*0x100221e84*/
        v15 = v157; /*0x100221e8c*/
        if ( v20 + v17 < (unsigned __int64)v157 && *(_BYTE *)(v19 + v20) == 10 ) /*0x100221e9a*/
        {
          v23 = 0; /*0x100221f01*/
          v21 = v20 + v17 + 1; /*0x100221f03*/
          v9 = v13 - v14; /*0x100221f09*/
          v24 = v16; /*0x100221f0c*/
          if ( v13 != v14 ) /*0x100221f0f*/
            goto LABEL_32; /*0x100221f0f*/
LABEL_27:
          a7 = v160; /*0x100221ee0*/
          goto LABEL_28; /*0x100221ee0*/
        }
        v17 += v20 + 1; /*0x100221e20*/
        if ( v13 > (unsigned __int64)v157 ) /*0x100221e26*/
          goto LABEL_25; /*0x100221e26*/
      }
      if ( (core::slice::memchr::memchr_aligned::hda948616f04379f9(10, v142 + v17, v18) & 1) != 0 ) /*0x100221e82*/
        goto LABEL_20; /*0x100221e82*/
LABEL_24:
      v15 = v157; /*0x100221eb0*/
      v13 = (unsigned __int64)v157; /*0x100221eb4*/
LABEL_25:
      LOBYTE(v9) = 1; /*0x100221eb7*/
      v134 = v9; /*0x100221eb9*/
      LOBYTE(v9) = 1; /*0x100221ebf*/
      LODWORD(v158) = v9; /*0x100221ec1*/
      v21 = v14; /*0x100221ec4*/
      v22 = v15; /*0x100221ec7*/
      v23 = 1; /*0x100221eca*/
      if ( v22 == (char *)v14 ) /*0x100221ed2*/
      {
        v21 = (__int64)v157; /*0x100222100*/
        LOBYTE(v15) = 1; /*0x100222104*/
        LODWORD(v158) = (_DWORD)v15; /*0x100222106*/
        v12 = v16; /*0x100222109*/
        break; /*0x100222109*/
      }
      v9 = (unsigned __int64)&v22[-v14]; /*0x100221ed8*/
      v24 = v16; /*0x100221edb*/
      if ( v22 == (char *)v14 ) /*0x100221ed8*/
        goto LABEL_27; /*0x100221ede*/
LABEL_32:
      v25 = v142 + v14; /*0x100221f20*/
      v26 = 0; /*0x100221f27*/
      a7 = v160; /*0x100221f29*/
      v27 = v160; /*0x100221f2d*/
      while ( 2 ) /*0x100221f55*/
      {
        if ( v27 != 2 ) /*0x100221f55*/
        {
          if ( (v27 & 1) != 0 ) /*0x100221f84*/
          {
            v29 = v26 + 3; /*0x100221f86*/
            if ( v26 + 3 > v9 /*0x100221fac*/
              || (unsigned __int16)(anon_0868f19ff3e9f3569e732f60bdb020cc_221 ^ *(_WORD *)(v25 + v26))
               | *(_BYTE *)(v25 + v26 + 2) ^ 0x27 )
            {
              v28 = v26 + 1; /*0x100221f40*/
              v27 = 1; /*0x100221f43*/
              goto LABEL_34; /*0x100221f43*/
            }
            goto LABEL_68; /*0x100221fb0*/
          }
          if ( *(_BYTE *)(v25 + v26) == 92 ) /*0x100221fc5*/
          {
            v28 = v26 + 2; /*0x100221fcb*/
            if ( v9 < v28 ) /*0x100221fd2*/
              v28 = v9; /*0x100221fd2*/
          }
          else
          {
            v29 = v26 + 3; /*0x10022209b*/
            if ( v26 + 3 <= v9 /*0x1002220c5*/
              && !((unsigned __int16)(anon_0868f19ff3e9f3569e732f60bdb020cc_220 ^ *(_WORD *)(v25 + v26))
                 | *(_BYTE *)(v25 + v26 + 2) ^ 0x22) )
            {
LABEL_68:
              LOBYTE(a7) = 2; /*0x1002220d1*/
              v27 = 2; /*0x1002220d4*/
              goto LABEL_35; /*0x1002220d7*/
            }
            v28 = v26 + 1; /*0x1002220c7*/
          }
          v27 = 0; /*0x1002220ca*/
          goto LABEL_34; /*0x1002220cc*/
        }
        v30 = *(unsigned __int8 *)(v25 + v26); /*0x100221f57*/
        if ( v30 == 34 ) /*0x100221f5f*/
        {
          v29 = v26 + 3; /*0x10022202f*/
          if ( v26 + 3 > v9 /*0x100222055*/
            || (unsigned __int16)(anon_0868f19ff3e9f3569e732f60bdb020cc_220 ^ *(_WORD *)(v25 + v26))
             | *(_BYTE *)(v25 + v26 + 2) ^ 0x22 )
          {
            v28 = v26 + 1; /*0x10022205f*/
            v27 = 2; /*0x100222062*/
            while ( v28 < v9 ) /*0x10022207e*/
            {
              v33 = *(unsigned __int8 *)(v25 + v28); /*0x100222084*/
              if ( v33 == 92 ) /*0x10022208c*/
              {
                v28 += 2LL; /*0x100222070*/
                if ( v9 < v28 ) /*0x100222077*/
                  v28 = v9; /*0x100222077*/
              }
              else
              {
                ++v28; /*0x10022208e*/
                if ( v33 == 34 ) /*0x100222094*/
                  goto LABEL_34; /*0x100222094*/
              }
            }
            goto LABEL_34; /*0x10022207e*/
          }
          a7 = 0; /*0x1002220e7*/
          v27 = 0; /*0x1002220ea*/
LABEL_35:
          v26 = v29; /*0x100221f49*/
          if ( v29 >= v9 ) /*0x100221f4f*/
            goto LABEL_28; /*0x100221f4f*/
          continue; /*0x100221f4f*/
        }
        break;
      }
      if ( v30 != 39 ) /*0x100221f68*/
      {
        if ( v30 == 35 ) /*0x100221f6d*/
          goto LABEL_28; /*0x100221f6d*/
        v28 = v26 + 1; /*0x100221f73*/
        v27 = 2; /*0x100221f76*/
LABEL_34:
        v29 = v28; /*0x100221f46*/
        goto LABEL_35; /*0x100221f46*/
      }
      v29 = v26 + 3; /*0x100221fdb*/
      if ( v26 + 3 <= v9 /*0x100222005*/
        && !((unsigned __int16)(anon_0868f19ff3e9f3569e732f60bdb020cc_221 ^ *(_WORD *)(v25 + v26))
           | *(_BYTE *)(v25 + v26 + 2) ^ 0x27) )
      {
        LOBYTE(a7) = 1; /*0x1002220dc*/
        v27 = 1; /*0x1002220df*/
        goto LABEL_35; /*0x1002220e2*/
      }
      v31 = v26 + 1; /*0x10022200b*/
      while ( v31 < v9 ) /*0x100222013*/
      {
        v29 = v31 + 1; /*0x100222019*/
        v32 = *(_BYTE *)(v25 + v31++) == 39; /*0x10022201d*/
        if ( v32 ) /*0x100222025*/
        {
          v27 = 2; /*0x100222027*/
          goto LABEL_35; /*0x10022202a*/
        }
      }
LABEL_28:
      v12 = &v24[v9]; /*0x100221ee4*/
      if ( (_BYTE)a7 == 2 ) /*0x100221eeb*/
        break; /*0x100221eeb*/
      v14 = v21; /*0x100221ef1*/
    }
    while ( !v23 ); /*0x100221ef6*/
    if ( v12 > __src ) /*0x100222116*/
    {
      if ( __src ) /*0x10022211f*/
      {
        if ( __src >= v157 ) /*0x100222129*/
        {
          if ( __src != v157 ) /*0x100222140*/
            goto LABEL_243; /*0x100222140*/
        }
        else if ( *((char *)__src + v142) < -64 ) /*0x100222136*/
        {
          goto LABEL_243; /*0x100222136*/
        }
      }
      if ( v12 >= v157 ) /*0x10022214a*/
      {
        if ( v12 != v157 ) /*0x100222160*/
          goto LABEL_243; /*0x100222160*/
      }
      else if ( v12[v142] <= -65 ) /*0x100222158*/
      {
LABEL_243:
        core::str::slice_error_fail::h480e51fbd8b15eba(v142, v157, __src, v12, &off_101AA32F0); /*0x100223182*/
      }
      v34 = (char *)__src + v142; /*0x100222171*/
      v35 = v12 - (_BYTE *)__src - (v12[v142 - 1] == 10); /*0x10022217f*/
      v160 = v21; /*0x100222182*/
      if ( v35 ) /*0x100222186*/
        v36 = -(__int64)(v34[v35 - 1] == 13); /*0x100222193*/
      else
        v36 = 0; /*0x1002221a0*/
      v37 = v35 + v36; /*0x1002221a2*/
      v38 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6((char *)__src + v142, v37); /*0x1002221ab*/
      v162 = v39; /*0x1002221b0*/
      v40 = v38; /*0x1002221b4*/
      v41 = &v163; /*0x1002221b7*/
      __src = v34; /*0x1002221bb*/
      v42 = v34; /*0x1002221bf*/
      if ( !(unsigned __int8)codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural::hd2d9874b7367456a( /*0x1002221cc*/
                               &v163,
                               v34,
                               v37) )
      {
        v10 = v143; /*0x100222244*/
        if ( (v164 & 1) != 0 ) /*0x10022224b*/
        {
LABEL_129:
          if ( v37 > (unsigned __int64)&v166[-v10] ) /*0x100222527*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100222d64*/
              &v166,
              v10,
              v37,
              1,
              1);
            v11 = v160; /*0x100222d69*/
            v165 = v167; /*0x100222d71*/
            v10 = v168; /*0x100222d75*/
          }
          else
          {
            v11 = v160; /*0x10022252d*/
          }
          memcpy((void *)(v10 + v165), __src, v37); /*0x10022253f*/
          v59 = v37 + v10; /*0x100222544*/
          v168 = v59; /*0x100222547*/
          v60 = v59; /*0x10022254b*/
          if ( v166 == (char *)v59 ) /*0x100222552*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v166, v59, 1, 1, 1); /*0x100222d95*/
            v60 = v168; /*0x100222d9a*/
          }
          LODWORD(v9) = v167; /*0x100222558*/
          v165 = v167; /*0x10022255c*/
          *(_BYTE *)(v167 + v60) = 10; /*0x100222560*/
          v10 = v59 + 1; /*0x100222564*/
          v168 = v10; /*0x100222567*/
          LOBYTE(v60) = 1; /*0x10022256b*/
          v164 = v60; /*0x10022256d*/
          if ( (v134 & 1) != 0 ) /*0x100222577*/
            goto LABEL_210; /*0x100222577*/
          continue; /*0x100222577*/
        }
        if ( v144 != 0x8000000000000000LL ) /*0x100222262*/
          goto LABEL_135; /*0x100222262*/
        goto LABEL_123; /*0x100222262*/
      }
      v43 = v162; /*0x1002221ce*/
      v10 = v143; /*0x1002221da*/
      v44 = (_BYTE *)v40; /*0x1002221e1*/
      switch ( (unsigned __int64)v162 ) /*0x1002221f8*/
      {
        case 0x1EuLL: /*0x1002221f8*/
          a5 = _mm_loadu_si128((const __m128i *)(v40 + 14)); /*0x10022220b*/
          v45 = _mm_or_si128( /*0x10022221d*/
                  _mm_xor_si128(
                    _mm_loadu_si128((const __m128i *)((char *)&anon_0868f19ff3e9f3569e732f60bdb020cc_74 + 14)),
                    a5),
                  _mm_xor_si128(
                    _mm_loadu_si128((const __m128i *)v40),
                    _mm_loadu_si128((const __m128i *)&anon_0868f19ff3e9f3569e732f60bdb020cc_74)));
          if ( _mm_testz_si128(v45, v45) ) /*0x100222221*/
            goto LABEL_149; /*0x100222226*/
          goto LABEL_100; /*0x100222226*/
        case 0x24uLL: /*0x1002221f8*/
          v46 = 36; /*0x10022228f*/
          v41 = (char *)v40; /*0x100222294*/
          v42 = (const char *)&anon_0868f19ff3e9f3569e732f60bdb020cc_223; /*0x100222297*/
          goto LABEL_95; /*0x100222297*/
        case 0x27uLL: /*0x1002221f8*/
          v46 = 39; /*0x10022226d*/
          v41 = (char *)v40; /*0x100222272*/
          v42 = (const char *)&anon_0868f19ff3e9f3569e732f60bdb020cc_95; /*0x100222275*/
LABEL_95:
          v48 = memcmp(v41, v42, v46); /*0x10022229e*/
          v44 = (_BYTE *)v40; /*0x1002222a3*/
          v43 = v162; /*0x1002222a6*/
          if ( v48 ) /*0x1002222ac*/
            goto LABEL_100; /*0x1002222ac*/
LABEL_149:
          if ( v37 > (unsigned __int64)&v166[-v10] ) /*0x10022271e*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100222db8*/
              &v166,
              v10,
              v37,
              1,
              1);
            v11 = v160; /*0x100222dbd*/
            v165 = v167; /*0x100222dc5*/
            v10 = v168; /*0x100222dc9*/
          }
          else
          {
            v11 = v160; /*0x100222724*/
          }
          memcpy((void *)(v10 + v165), __src, v37); /*0x100222736*/
          v70 = v37 + v10; /*0x10022273b*/
          v168 = v70; /*0x10022273e*/
          v71 = v70; /*0x100222742*/
          if ( v166 == (char *)v70 ) /*0x100222749*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v166, v70, 1, 1, 1); /*0x100222de9*/
            v71 = v168; /*0x100222dee*/
          }
          LODWORD(v9) = v167; /*0x10022274f*/
          v165 = v167; /*0x100222753*/
          *(_BYTE *)(v167 + v71) = 10; /*0x100222757*/
          v10 = v70 + 1; /*0x10022275b*/
          v168 = v10; /*0x10022275e*/
          goto LABEL_205; /*0x100222762*/
        case 0x37uLL: /*0x1002221f8*/
          v47 = 55; /*0x1002222b3*/
          v41 = (char *)v40; /*0x1002222b8*/
          v42 = "# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)"; /*0x1002222bb*/
          goto LABEL_99; /*0x1002222c2*/
        case 0x3CuLL: /*0x1002221f8*/
          v47 = 60; /*0x1002222c4*/
          v41 = (char *)v40; /*0x1002222c9*/
          v42 = (const char *)&anon_0868f19ff3e9f3569e732f60bdb020cc_224; /*0x1002222cc*/
          goto LABEL_99; /*0x1002222cc*/
        case 0x40uLL: /*0x1002221f8*/
          v47 = 64; /*0x10022227e*/
          v41 = (char *)v40; /*0x100222283*/
          v42 = (const char *)&anon_0868f19ff3e9f3569e732f60bdb020cc_81; /*0x100222286*/
LABEL_99:
          v49 = memcmp(v41, v42, v47); /*0x1002222d3*/
          v44 = (_BYTE *)v40; /*0x1002222d8*/
          v43 = v162; /*0x1002222db*/
          if ( v49 ) /*0x1002222e1*/
            goto LABEL_100; /*0x1002222e1*/
          v63 = v144; /*0x1002225bf*/
          v144 = 0x8000000000000000LL; /*0x1002225d0*/
          v11 = v160; /*0x1002225da*/
          if ( v63 != 0x8000000000000000LL ) /*0x1002225de*/
          {
            v135 = v12; /*0x1002225e4*/
            v150 = v63; /*0x1002225eb*/
            v155 = v149; /*0x100222604*/
            v154 = v148; /*0x10022260c*/
            v153 = v147; /*0x100222614*/
            v152 = v146; /*0x10022261f*/
            v151 = v145; /*0x100222623*/
            v64 = v141; /*0x100222626*/
            if ( v141 == v139 ) /*0x100222634*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe7f21ef8a99469c(&v139); /*0x10022263d*/
            v65 = v140; /*0x100222642*/
            v66 = 48 * v64; /*0x10022264d*/
            *(_QWORD *)(v140 + v66 + 40) = v155; /*0x100222658*/
            *(_QWORD *)(v65 + v66 + 32) = v154; /*0x100222664*/
            *(_QWORD *)(v65 + v66 + 24) = v153; /*0x100222670*/
            *(_QWORD *)(v65 + v66 + 16) = v152; /*0x10022267c*/
            v67 = v150; /*0x100222681*/
            *(_QWORD *)(v65 + v66 + 8) = v151; /*0x10022268f*/
            *(_QWORD *)(v65 + v66) = v67; /*0x100222694*/
            v141 = v64 + 1; /*0x10022269b*/
            v12 = v135; /*0x1002226a2*/
          }
          if ( v37 > (unsigned __int64)&v166[-v10] ) /*0x1002226b3*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100222e0c*/
              &v166,
              v10,
              v37,
              1,
              1);
            v165 = v167; /*0x100222e15*/
            v10 = v168; /*0x100222e19*/
          }
          memcpy((void *)(v10 + v165), __src, v37); /*0x1002226c7*/
          v68 = v37 + v10; /*0x1002226cc*/
          v168 = v68; /*0x1002226cf*/
          v69 = v68; /*0x1002226d3*/
          if ( v166 == (char *)v68 ) /*0x1002226da*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v166, v68, 1, 1, 1); /*0x100222e39*/
            v69 = v168; /*0x100222e3e*/
          }
          LODWORD(v9) = v167; /*0x1002226e0*/
          v165 = v167; /*0x1002226e4*/
          *(_BYTE *)(v167 + v69) = 10; /*0x1002226e8*/
          v10 = v68 + 1; /*0x1002226ec*/
          v168 = v10; /*0x1002226ef*/
          LOBYTE(v69) = 1; /*0x1002226f3*/
          v164 = v69; /*0x1002226f5*/
          v156 = 0; /*0x1002226f8*/
          if ( (v134 & 1) != 0 ) /*0x100222709*/
            goto LABEL_210; /*0x100222709*/
          continue; /*0x100222709*/
        default:
LABEL_100:
          if ( (v164 & 1) != 0 ) /*0x1002222eb*/
            goto LABEL_129; /*0x1002222eb*/
          if ( !v43 || *v44 != 91 || v43->i8[(_QWORD)v44 - 1] != 93 ) /*0x100222302*/
          {
            if ( v144 == 0x8000000000000000LL ) /*0x100222319*/
            {
              if ( (v156 & 1) != 0 ) /*0x100222326*/
                goto LABEL_123; /*0x100222326*/
              codexmate_lib::core::relay::config_takeover::top_level_assignment_key::he3d52e653d4f28df(&v150, v44); /*0x100222336*/
              if ( v150 != 0x8000000000000000LL ) /*0x10022234f*/
              {
                switch ( (unsigned __int64)v152 ) /*0x10022237f*/
                {
                  case 5uLL: /*0x10022237f*/
                    v50 = v151->i32[0] ^ 0x65646F6D; /*0x100222388*/
                    v51 = v151->u8[4] ^ 0x6C; /*0x10022238e*/
                    goto LABEL_111; /*0x100222391*/
                  case 7uLL: /*0x10022237f*/
                    v50 = v151->i32[0] ^ 0x666F7270; /*0x1002223b8*/
                    v51 = *(__int32 *)((char *)v151->i32 + 3) ^ 0x656C6966; /*0x1002223c2*/
LABEL_111:
                    if ( !(v50 | v51) ) /*0x1002223c4*/
                      goto LABEL_165; /*0x1002223c6*/
                    goto LABEL_120; /*0x1002223c6*/
                  case 0xEuLL: /*0x10022237f*/
                    v53 = v151->i64[0] ^ 0x72705F6C65646F6DLL; /*0x1002223f9*/
                    v54 = *(__int64 *)((char *)v151->i64 + 6); /*0x1002223fc*/
                    v55 = 0x72656469766F7270LL; /*0x100222400*/
                    goto LABEL_116; /*0x10022240a*/
                  case 0xFuLL: /*0x10022237f*/
                    v53 = v151->i64[0] ^ 0x625F69616E65706FLL; /*0x100222419*/
                    v54 = *(__int64 *)((char *)v151->i64 + 7); /*0x10022241c*/
                    v55 = 0x6C72755F65736162LL; /*0x100222420*/
LABEL_116:
                    if ( !(v53 | v55 ^ v54) ) /*0x10022242d*/
                      goto LABEL_165; /*0x100222430*/
                    goto LABEL_120; /*0x100222430*/
                  case 0x12uLL: /*0x10022237f*/
                    a5 = _mm_xor_si128(_mm_loadu_si128(v151), (__m128i)xmmword_1016E9970); /*0x10022243b*/
                    v52 = _mm_xor_si128(_mm_cvtsi32_si128(v151[1].u16[0]), (__m128i)xmmword_1016E9980); /*0x10022244b*/
                    goto LABEL_119; /*0x10022244b*/
                  case 0x16uLL: /*0x10022237f*/
                    a5 = _mm_xor_si128(_mm_loadu_si128(v151), (__m128i)xmmword_1016E9960); /*0x100222397*/
                    v52 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v151->u16[3]), (__m128i)xmmword_1016E9950); /*0x1002223a4*/
                    goto LABEL_119; /*0x1002223ac*/
                  case 0x18uLL: /*0x10022237f*/
                    a5 = _mm_xor_si128(_mm_loadu_si128(v151), (__m128i)xmmword_1016E9940); /*0x1002223d5*/
                    v52 = _mm_xor_si128(_mm_loadl_epi64(v151 + 1), (__m128i)xmmword_1016E9930); /*0x1002223e2*/
LABEL_119:
                    v56 = _mm_or_si128(v52, a5); /*0x100222453*/
                    if ( !_mm_testz_si128(v56, v56) ) /*0x10022245c*/
                      goto LABEL_120; /*0x10022245c*/
LABEL_165:
                    v162 = v151; /*0x1002228c9*/
                    v158 = v150; /*0x1002228cd*/
                    v79 = __src; /*0x1002228d8*/
                    v80 = codexmate_lib::core::relay::config_takeover::is_aimami_owned_top_level_line::h17c5a44b3f4027d0( /*0x1002228df*/
                            a2,
                            __src,
                            v37);
                    v10 = v143; /*0x1002228e6*/
                    v11 = v160; /*0x1002228ed*/
                    if ( v80 ) /*0x1002228f1*/
                      goto LABEL_194; /*0x1002228f1*/
                    if ( v37 < 0 ) /*0x1002228fa*/
                    {
                      v123 = 0; /*0x10022315a*/
                    }
                    else
                    {
                      __n = v37; /*0x100222900*/
                      if ( !v37 ) /*0x100222904*/
                      {
                        v83 = v12; /*0x100222c07*/
                        v82 = 1; /*0x100222c0a*/
LABEL_191:
                        v132 = v82; /*0x100222c0f*/
                        memcpy((void *)v82, __src, __n); /*0x100222c21*/
                        v98 = v138; /*0x100222c26*/
                        if ( v138 == v136 ) /*0x100222c34*/
                          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v136); /*0x100222c3d*/
                        v99 = v137; /*0x100222c42*/
                        v9 = 3 * v98; /*0x100222c49*/
                        v100 = __n; /*0x100222c4d*/
                        *(_QWORD *)(v137 + 8 * v9) = __n; /*0x100222c51*/
                        *(_QWORD *)(v99 + 8 * v9 + 8) = v132; /*0x100222c5c*/
                        *(_QWORD *)(v99 + 8 * v9 + 16) = v100; /*0x100222c61*/
                        v138 = v98 + 1; /*0x100222c69*/
                        v12 = v83; /*0x100222c70*/
LABEL_194:
                        if ( v158 ) /*0x100222c7a*/
                          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v158, 1); /*0x100222c85*/
                        v156 = 0; /*0x100222c8a*/
LABEL_205:
                        v164 = 0; /*0x100222d36*/
                        if ( (v134 & 1) != 0 ) /*0x100222d44*/
                          goto LABEL_210; /*0x100222d44*/
                        continue; /*0x100222d44*/
                      }
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v79, v81); /*0x10022290a*/
                      v82 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1); /*0x100222917*/
                      if ( v82 ) /*0x10022291f*/
                      {
                        v83 = v12; /*0x100222925*/
                        goto LABEL_191; /*0x100222928*/
                      }
                      v132 = __n; /*0x1002231cd*/
                      v123 = 1; /*0x1002231d4*/
                    }
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v123, v132); /*0x10022316b*/
                  default:
LABEL_120:
                    if ( v150 ) /*0x100222465*/
                      *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v151, v150, 1); /*0x10022246c*/
                    break; /*0x10022246c*/
                }
              }
              v10 = v143; /*0x100222471*/
LABEL_123:
              if ( v37 > (unsigned __int64)&v166[-v10] ) /*0x100222482*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1002224e2*/
                  &v166,
                  v10,
                  v37,
                  1,
                  1);
                v165 = v167; /*0x1002224eb*/
                v10 = v168; /*0x1002224ef*/
              }
              memcpy((void *)(v10 + v165), __src, v37); /*0x100222492*/
              v57 = v37 + v10; /*0x100222497*/
              v168 = v57; /*0x10022249a*/
              v58 = v57; /*0x10022249e*/
              v11 = v160; /*0x1002224a5*/
              if ( v166 == (char *)v57 ) /*0x1002224a9*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x10022250f*/
                  &v166,
                  v57,
                  1,
                  1,
                  1);
                v58 = v168; /*0x100222514*/
              }
              LODWORD(v9) = v167; /*0x1002224ab*/
              v165 = v167; /*0x1002224af*/
              *(_BYTE *)(v167 + v58) = 10; /*0x1002224b3*/
              v10 = v57 + 1; /*0x1002224b7*/
              v168 = v10; /*0x1002224ba*/
              if ( (v158 & 1) != 0 ) /*0x1002224c2*/
                goto LABEL_210; /*0x1002224c2*/
              goto LABEL_10; /*0x1002224c2*/
            }
LABEL_135:
            if ( v37 < 0 ) /*0x100222585*/
            {
              v122 = 0; /*0x10022314a*/
            }
            else
            {
              v135 = v12; /*0x10022258b*/
              if ( !v37 ) /*0x100222592*/
              {
                v62 = 1; /*0x100222767*/
                v11 = v160; /*0x10022276c*/
LABEL_155:
                v131 = v62; /*0x100222770*/
                memcpy((void *)v62, __src, v37); /*0x10022277e*/
                v72 = v149; /*0x100222783*/
                if ( v149 == v147 ) /*0x100222791*/
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v147); /*0x10022279a*/
                v73 = v148; /*0x10022279f*/
                v9 = 3 * v72; /*0x1002227a6*/
                *(_QWORD *)(v148 + 8 * v9) = v37; /*0x1002227aa*/
                *(_QWORD *)(v73 + 8 * v9 + 8) = v131; /*0x1002227b5*/
                *(_QWORD *)(v73 + 8 * v9 + 16) = v37; /*0x1002227ba*/
                v149 = v72 + 1; /*0x1002227c2*/
                v164 = 0; /*0x1002227c9*/
                v12 = v135; /*0x1002227d0*/
                if ( (v134 & 1) != 0 ) /*0x1002227de*/
                  goto LABEL_210; /*0x1002227de*/
                continue; /*0x1002227de*/
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v42, v43); /*0x100222598*/
              v61 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1); /*0x1002225a5*/
              v11 = v160; /*0x1002225ad*/
              if ( v61 ) /*0x1002225b1*/
              {
                v62 = v61; /*0x1002225b7*/
                goto LABEL_155; /*0x1002225ba*/
              }
              v131 = v37; /*0x1002231a2*/
              v122 = 1; /*0x1002231a9*/
            }
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v122, v131); /*0x100223153*/
          }
          v74 = &v43[-1].i8[15]; /*0x1002227ec*/
          if ( v43 == (const __m128i *)1 || (char)v44[1] <= -65 ) /*0x1002227fa*/
            core::str::slice_error_fail::h480e51fbd8b15eba(v44, v43, 1, v74, &anon_0868f19ff3e9f3569e732f60bdb020cc_222); /*0x1002231c2*/
          v158 = (__int64)(v44 + 1); /*0x10022280f*/
          v162 = (const __m128i *)((char *)v43 - 2); /*0x100222813*/
          codexmate_lib::core::relay::config_takeover::normalize_section_key::h15c28a8fd386a89c( /*0x100222817*/
            &v128,
            v44 + 1,
            (char *)&v43[-1].u64[1] + 6,
            v74);
          v11 = v160; /*0x10022281c*/
          v75 = (unsigned __int64 *)v158; /*0x100222820*/
          v76 = v162; /*0x100222824*/
          if ( !(unsigned __int8)codexmate_lib::core::relay::config_takeover::is_foreign_model_section::h2a75f3a02657ab49( /*0x10022282f*/
                                   v158,
                                   v162) )
          {
            v84 = v144; /*0x10022292d*/
            v144 = 0x8000000000000000LL; /*0x10022293e*/
            if ( v84 != 0x8000000000000000LL ) /*0x100222948*/
            {
              v135 = v12; /*0x10022294e*/
              v150 = v84; /*0x100222955*/
              v155 = v149; /*0x10022296e*/
              v154 = v148; /*0x100222976*/
              v153 = v147; /*0x10022297e*/
              v152 = v146; /*0x100222989*/
              v151 = v145; /*0x10022298d*/
              v85 = v141; /*0x100222990*/
              if ( v141 == v139 ) /*0x10022299e*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe7f21ef8a99469c(&v139); /*0x1002229a7*/
              v86 = v140; /*0x1002229ac*/
              v87 = 48 * v85; /*0x1002229b7*/
              *(_QWORD *)(v140 + v87 + 40) = v155; /*0x1002229c2*/
              *(_QWORD *)(v86 + v87 + 32) = v154; /*0x1002229ce*/
              *(_QWORD *)(v86 + v87 + 24) = v153; /*0x1002229da*/
              *(_QWORD *)(v86 + v87 + 16) = v152; /*0x1002229e6*/
              v88 = v150; /*0x1002229eb*/
              *(_QWORD *)(v86 + v87 + 8) = v151; /*0x1002229f9*/
              *(_QWORD *)(v86 + v87) = v88; /*0x1002229fe*/
              v141 = v85 + 1; /*0x100222a05*/
              v12 = v135; /*0x100222a0c*/
            }
            if ( v37 > (unsigned __int64)&v166[-v10] ) /*0x100222a1d*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100222e5c*/
                &v166,
                v10,
                v37,
                1,
                1);
              v165 = v167; /*0x100222e65*/
              v10 = v168; /*0x100222e69*/
            }
            memcpy((void *)(v10 + v165), __src, v37); /*0x100222a31*/
            v89 = v37 + v10; /*0x100222a36*/
            v168 = v89; /*0x100222a39*/
            v90 = v89; /*0x100222a3d*/
            if ( v166 == (char *)v89 ) /*0x100222a44*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100222e89*/
                &v166,
                v89,
                1,
                1,
                1);
              v90 = v168; /*0x100222e8e*/
            }
            LODWORD(v9) = v167; /*0x100222a4a*/
            v165 = v167; /*0x100222a4e*/
            *(_BYTE *)(v167 + v90) = 10; /*0x100222a52*/
            v10 = v89 + 1; /*0x100222a56*/
            v168 = v10; /*0x100222a59*/
LABEL_202:
            if ( v128 ) /*0x100222d1b*/
              *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v128, 1); /*0x100222d29*/
LABEL_204:
            LOBYTE(v90) = 1; /*0x100222d2e*/
            v156 = v90; /*0x100222d30*/
            goto LABEL_205; /*0x100222d30*/
          }
          if ( v144 == 0x8000000000000000LL ) /*0x100222846*/
            goto LABEL_163; /*0x100222846*/
          v75 = (unsigned __int64 *)v145; /*0x100222a62*/
          v76 = v146; /*0x100222a69*/
          v78 = 1; /*0x100222a83*/
          if ( !(unsigned __int8)codexmate_lib::core::relay::config_takeover::section_overlaps::h5079f18037fafe5c( /*0x100222a88*/
                                   v145,
                                   v146,
                                   v129,
                                   v130) )
          {
            v93 = v144; /*0x100222ad7*/
            v144 = 0x8000000000000000LL; /*0x100222ae8*/
            if ( v93 == 0x8000000000000000LL ) /*0x100222af2*/
            {
LABEL_163:
              v152 = v130; /*0x10022284c*/
              v151 = v129; /*0x100222868*/
              v150 = v128; /*0x10022286f*/
            }
            else
            {
              v94 = v12; /*0x100222af8*/
              v150 = v93; /*0x100222afb*/
              v155 = v149; /*0x100222b14*/
              v154 = v148; /*0x100222b1c*/
              v153 = v147; /*0x100222b24*/
              v152 = v146; /*0x100222b2f*/
              v151 = v145; /*0x100222b33*/
              v95 = v141; /*0x100222b36*/
              if ( v141 == v139 ) /*0x100222b44*/
              {
                v75 = (unsigned __int64 *)&v139; /*0x100222b46*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe7f21ef8a99469c(&v139); /*0x100222b4d*/
              }
              v96 = v140; /*0x100222b52*/
              v97 = 48 * v95; /*0x100222b5d*/
              *(_QWORD *)(v140 + v97 + 40) = v155; /*0x100222b68*/
              *(_QWORD *)(v96 + v97 + 32) = v154; /*0x100222b74*/
              *(_QWORD *)(v96 + v97 + 24) = v153; /*0x100222b80*/
              *(_QWORD *)(v96 + v97 + 16) = v152; /*0x100222b8c*/
              v77 = v150; /*0x100222b91*/
              v76 = v151; /*0x100222b98*/
              *(_QWORD *)(v96 + v97 + 8) = v151; /*0x100222b9f*/
              *(_QWORD *)(v96 + v97) = v77; /*0x100222ba4*/
              v141 = v95 + 1; /*0x100222bab*/
              v152 = v130; /*0x100222bb9*/
              v151 = v129; /*0x100222bce*/
              v150 = v128; /*0x100222bd5*/
              v12 = v94; /*0x100222bed*/
              if ( v144 != 0x8000000000000000LL ) /*0x100222bf0*/
              {
                v75 = &v144; /*0x100222bf6*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSection$GT$::hffb0833786b8a6f2(&v144); /*0x100222bfd*/
              }
            }
            v146 = v152; /*0x10022287d*/
            LODWORD(v9) = (_DWORD)v151; /*0x10022288b*/
            v145 = v151; /*0x100222892*/
            v144 = v150; /*0x100222899*/
            v147 = 0; /*0x1002228a0*/
            v148 = 8; /*0x1002228ab*/
            v149 = 0; /*0x1002228b6*/
            v78 = 0; /*0x1002228c1*/
          }
          LODWORD(v90) = 0; /*0x100222a8a*/
          if ( v144 == 0x8000000000000000LL ) /*0x100222a9b*/
            goto LABEL_201; /*0x100222a9b*/
          if ( v37 < 0 ) /*0x100222aa4*/
          {
            v124 = 0; /*0x100223172*/
          }
          else
          {
            __n = v37; /*0x100222aaa*/
            if ( !v37 ) /*0x100222aae*/
            {
              v92 = v12; /*0x100222c99*/
              v91 = 1; /*0x100222c9c*/
              goto LABEL_198; /*0x100222c9c*/
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v75, v76, v77); /*0x100222ab4*/
            v91 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1); /*0x100222ac1*/
            if ( v91 ) /*0x100222ac9*/
            {
              v92 = v12; /*0x100222acf*/
LABEL_198:
              v133 = v91; /*0x100222ca1*/
              memcpy((void *)v91, __src, __n); /*0x100222cb3*/
              v101 = v149; /*0x100222cb8*/
              if ( v149 == v147 ) /*0x100222cc6*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v147); /*0x100222ccf*/
              v90 = v148; /*0x100222cd4*/
              v9 = 3 * v101; /*0x100222cdb*/
              v102 = __n; /*0x100222cdf*/
              *(_QWORD *)(v148 + 8 * v9) = __n; /*0x100222ce3*/
              *(_QWORD *)(v90 + 8 * v9 + 8) = v133; /*0x100222cee*/
              *(_QWORD *)(v90 + 8 * v9 + 16) = v102; /*0x100222cf3*/
              v149 = v101 + 1; /*0x100222cfb*/
              v12 = v92; /*0x100222d02*/
LABEL_201:
              v32 = v78 == 0; /*0x100222d05*/
              v10 = v143; /*0x100222d08*/
              if ( v32 ) /*0x100222d0f*/
                goto LABEL_204; /*0x100222d0f*/
              goto LABEL_202; /*0x100222d0f*/
            }
            v133 = __n; /*0x1002231df*/
            v124 = 1; /*0x1002231e6*/
          }
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v124, v133); /*0x10022317b*/
      }
    }
    break;
  }
  v10 = v143; /*0x100222e97*/
LABEL_210:
  v103 = v144; /*0x100222e9e*/
  v144 = 0x8000000000000000LL; /*0x100222eaf*/
  v104 = v141; /*0x100222eb6*/
  if ( v103 == 0x8000000000000000LL ) /*0x100222ec0*/
  {
    v105 = v165; /*0x100222ec2*/
    if ( !v141 ) /*0x100222ec9*/
      goto LABEL_224; /*0x100222ec9*/
LABEL_216:
    v109 = v140; /*0x100222f9a*/
    v110 = v140 + 48 * v104; /*0x100222fa9*/
    do /*0x100222fb7*/
    {
LABEL_218:
      v111 = *(_QWORD *)(v109 + 40); /*0x100222fb9*/
      while ( v111 ) /*0x100222fc0*/
      {
        core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6( /*0x100222fd4*/
          *(_QWORD *)(*(_QWORD *)(v109 + 32) + 24 * v111 - 16),
          *(_QWORD *)(*(_QWORD *)(v109 + 32) + 24 * v111 - 8));
        if ( v112 ) /*0x100222fdc*/
          break; /*0x100222fdc*/
        v113 = *(_QWORD *)(v109 + 40); /*0x100222fde*/
        if ( !v113 ) /*0x100222fe5*/
          break; /*0x100222fe5*/
        v111 = v113 - 1; /*0x100222fe7*/
        *(_QWORD *)(v109 + 40) = v111; /*0x100222fea*/
        v114 = *(_QWORD *)(v109 + 32); /*0x100222fee*/
        v115 = *(_QWORD *)(v114 + 24 * v111); /*0x100222ff6*/
        if ( 2 * v115 ) /*0x100222ffa*/
        {
          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v114 + 24 * v111 + 8), v115, 1); /*0x100223014*/
          goto LABEL_218; /*0x100223019*/
        }
      }
      v109 += 48; /*0x100222fb0*/
    }
    while ( v109 != v110 ); /*0x100222fb7*/
  }
  else
  {
    v150 = v103; /*0x100222ed4*/
    v151 = v145; /*0x100222ee9*/
    v152 = v146; /*0x100222ef0*/
    v153 = v147; /*0x100222efb*/
    v154 = v148; /*0x100222f06*/
    v155 = v149; /*0x100222f11*/
    v105 = v165; /*0x100222f1f*/
    if ( v141 == v139 ) /*0x100222f23*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfe7f21ef8a99469c(&v139); /*0x100222f2c*/
    v106 = v140; /*0x100222f31*/
    v107 = 48 * v104; /*0x100222f3c*/
    *(_QWORD *)(v140 + v107 + 40) = v155; /*0x100222f47*/
    *(_QWORD *)(v106 + v107 + 32) = v154; /*0x100222f53*/
    *(_QWORD *)(v106 + v107 + 24) = v153; /*0x100222f5f*/
    *(_QWORD *)(v106 + v107 + 16) = v152; /*0x100222f6b*/
    v108 = v150; /*0x100222f70*/
    *(_QWORD *)(v106 + v107 + 8) = v151; /*0x100222f7e*/
    *(_QWORD *)(v106 + v107) = v108; /*0x100222f83*/
    v141 = ++v104; /*0x100222f8a*/
    if ( v104 ) /*0x100222f94*/
      goto LABEL_216; /*0x100222f94*/
  }
LABEL_224:
  codexmate_lib::core::relay::config_takeover::tidy_blank_lines::h04b8db1c046290aa(&v150, v105, v10); /*0x10022301b*/
  a1[8] = v141; /*0x10022303b*/
  a1[7] = v140; /*0x100223046*/
  a1[6] = v139; /*0x100223051*/
  a1[5] = v138; /*0x10022305c*/
  v116 = v136; /*0x100223060*/
  a1[4] = v137; /*0x10022306e*/
  a1[3] = v116; /*0x100223072*/
  a1[2] = (__int64)v152; /*0x10022307d*/
  v117 = v150; /*0x100223081*/
  a1[1] = (__int64)v151; /*0x10022308f*/
  *a1 = v117; /*0x100223093*/
  if ( v144 != 0x8000000000000000LL ) /*0x1002230aa*/
  {
    if ( v144 ) /*0x1002230af*/
      *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v145, v144, 1); /*0x1002230bd*/
    v118 = v148; /*0x1002230c2*/
    v119 = v149; /*0x1002230c9*/
    if ( v149 ) /*0x1002230d3*/
    {
      v120 = (_QWORD *)(v148 + 8); /*0x1002230d5*/
      do /*0x1002230e7*/
      {
        v121 = *(v120 - 1); /*0x1002230e9*/
        if ( v121 ) /*0x1002230f0*/
          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v120, v121, 1); /*0x1002230fa*/
        v120 += 3; /*0x1002230e0*/
        --v119; /*0x1002230e4*/
      }
      while ( v119 ); /*0x1002230e7*/
    }
    if ( v147 ) /*0x10022310b*/
      *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v118, 24 * v147, 8); /*0x10022311d*/
  }
  if ( v166 ) /*0x100223129*/
    *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, v166, 1); /*0x100223133*/
  return *(double *)a5.i64; /*0x100223138*/
}
