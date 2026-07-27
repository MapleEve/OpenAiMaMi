// __ZN13codexmate_lib4core5relay12codex_writer27router_http_contract_issues @ 0x1007c5620 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_writer::router_http_contract_issues::hc4329a58b4f5a619(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  __int8 v10; // r14
  __int128 v11; // kr00_16
  int *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // rsi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  _QWORD *v36; // r12
  __int64 v37; // rsi
  __int128 v38; // kr10_16
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  int v42; // esi
  char v43; // r9
  char v44; // r10
  unsigned __int64 v45; // r8
  int v46; // r10d
  int v47; // r9d
  __m128i v48; // xmm0
  __int64 *v49; // r15
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // r12
  __int64 v62; // rax
  _BYTE *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 v69; // r12
  __int64 v70; // rax
  _BYTE *v71; // rax
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // rcx
  char *v78; // rsi
  size_t v79; // rdx
  char *v80; // r12
  int v81; // ecx
  char v82; // r10
  char v83; // r8
  char v84; // r9
  char *v85; // r12
  int v86; // r8d
  int v87; // r10d
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rax
  int v90; // r11d
  char v91; // r8
  char v92; // r9
  char v93; // r10
  unsigned __int64 v94; // rax
  int v95; // r9d
  int v96; // r8d
  _BYTE v97[24]; // [rsp+8h] [rbp-3A8h] BYREF
  _BYTE v98[40]; // [rsp+20h] [rbp-390h] BYREF
  _BYTE v99[15]; // [rsp+48h] [rbp-368h]
  __m512i __s1; // [rsp+58h] [rbp-358h] BYREF
  __int64 v101; // [rsp+98h] [rbp-318h]
  __int64 v102; // [rsp+A0h] [rbp-310h]
  __int64 v103; // [rsp+A8h] [rbp-308h]
  __int64 v104; // [rsp+B0h] [rbp-300h]
  __int64 v105; // [rsp+B8h] [rbp-2F8h]
  _BYTE __src[144]; // [rsp+C0h] [rbp-2F0h] BYREF
  _BYTE v107[48]; // [rsp+150h] [rbp-260h] BYREF
  __int128 v108; // [rsp+180h] [rbp-230h]
  __int64 v109; // [rsp+190h] [rbp-220h]
  __int64 v110; // [rsp+198h] [rbp-218h]
  __int64 v111; // [rsp+1A0h] [rbp-210h]
  __int64 v112; // [rsp+1A8h] [rbp-208h]
  __int64 v113; // [rsp+1B0h] [rbp-200h]
  _BYTE __dst[144]; // [rsp+1B8h] [rbp-1F8h] BYREF
  _QWORD v115[2]; // [rsp+248h] [rbp-168h] BYREF
  _BYTE v116[31]; // [rsp+258h] [rbp-158h]
  _BYTE v117[24]; // [rsp+278h] [rbp-138h]
  __int64 v118; // [rsp+290h] [rbp-120h]
  __int64 v119; // [rsp+298h] [rbp-118h]
  __int64 v120; // [rsp+2A0h] [rbp-110h]
  __int64 v121; // [rsp+2A8h] [rbp-108h]
  __int128 v122; // [rsp+2B0h] [rbp-100h]
  _QWORD v123[2]; // [rsp+2C0h] [rbp-F0h]
  void *__s2; // [rsp+2D0h] [rbp-E0h]
  __int128 v125; // [rsp+2D8h] [rbp-D8h]
  _QWORD v126[2]; // [rsp+2E8h] [rbp-C8h]
  __int128 v127; // [rsp+2F8h] [rbp-B8h]
  _BYTE v128[15]; // [rsp+308h] [rbp-A8h]
  __int128 v129; // [rsp+318h] [rbp-98h] BYREF
  __int64 v130; // [rsp+328h] [rbp-88h]
  __int64 v131; // [rsp+330h] [rbp-80h]
  __int64 v132; // [rsp+338h] [rbp-78h]
  __int64 v133; // [rsp+340h] [rbp-70h]
  __int64 v134; // [rsp+348h] [rbp-68h]
  __int128 v135; // [rsp+350h] [rbp-60h] BYREF
  __int64 v136; // [rsp+360h] [rbp-50h]
  __int64 v137; // [rsp+368h] [rbp-48h]
  __int64 v138; // [rsp+370h] [rbp-40h]
  __int64 v139; // [rsp+378h] [rbp-38h]
  __int64 v140; // [rsp+380h] [rbp-30h]

  __s2 = a4; /*0x1007c5637*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622(&__s1, a2, a3); /*0x1007c5648*/
  v9 = __s1.i64[1]; /*0x1007c5654*/
  v10 = __s1.i8[16]; /*0x1007c565b*/
  v122 = *(__int128 *)((char *)&__s1.i128[1] + 1); /*0x1007c566a*/
  v123[0] = *(__int64 *)((char *)&__s1.i64[4] + 1); /*0x1007c5686*/
  *(_QWORD *)((char *)v123 + 7) = __s1.i64[5]; /*0x1007c5694*/
  v135 = __s1.i128[3]; /*0x1007c56a2*/
  v136 = v101; /*0x1007c56b8*/
  v137 = v102; /*0x1007c56c3*/
  v138 = v103; /*0x1007c56ce*/
  v139 = v104; /*0x1007c56d9*/
  v140 = v105; /*0x1007c56e4*/
  if ( __s1.i64[0] == 2 ) /*0x1007c56ec*/
  {
    v125 = v122; /*0x1007c5700*/
    v126[0] = v123[0]; /*0x1007c5715*/
    *(_QWORD *)((char *)v126 + 7) = *(_QWORD *)((char *)v123 + 7); /*0x1007c5723*/
    v129 = v135; /*0x1007c5732*/
    v130 = v136; /*0x1007c5744*/
    v131 = v137; /*0x1007c574f*/
    v132 = v138; /*0x1007c5757*/
    v133 = v139; /*0x1007c575f*/
    v134 = v140; /*0x1007c5767*/
    *(_QWORD *)&v128[7] = *(_QWORD *)((char *)v123 + 7); /*0x1007c5772*/
    *(_QWORD *)v128 = v126[0]; /*0x1007c5780*/
    v127 = v122; /*0x1007c579c*/
    v121 = v140; /*0x1007c57a7*/
    v120 = v139; /*0x1007c57b2*/
    v119 = v138; /*0x1007c57bd*/
    v118 = v137; /*0x1007c57c8*/
    *(_QWORD *)&v117[16] = v136; /*0x1007c57d6*/
    v11 = v135; /*0x1007c57e4*/
  }
  else
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x1007c5803*/
    v125 = v122; /*0x1007c5816*/
    v126[0] = v123[0]; /*0x1007c582b*/
    *(_QWORD *)((char *)v126 + 7) = *(_QWORD *)((char *)v123 + 7); /*0x1007c5839*/
    v129 = v135; /*0x1007c5848*/
    v130 = v136; /*0x1007c585a*/
    v131 = v137; /*0x1007c5865*/
    v132 = v138; /*0x1007c586d*/
    v133 = v139; /*0x1007c5875*/
    v134 = v140; /*0x1007c587d*/
    *(_OWORD *)v107 = __s1.i128[0]; /*0x1007c5888*/
    v107[16] = __s1.i8[16]; /*0x1007c588f*/
    *(_OWORD *)&v107[17] = v122; /*0x1007c58a4*/
    *(_QWORD *)&v107[33] = v126[0]; /*0x1007c58b9*/
    *(_QWORD *)&v107[40] = *(_QWORD *)((char *)v123 + 7); /*0x1007c58c7*/
    v108 = v135; /*0x1007c58dc*/
    v109 = v136; /*0x1007c58f1*/
    v110 = v137; /*0x1007c58fc*/
    v111 = v138; /*0x1007c5907*/
    v112 = v139; /*0x1007c5912*/
    v113 = v140; /*0x1007c591d*/
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x1007c5932*/
      &__s1,
      v107);
    v9 = __s1.i64[0]; /*0x1007c5937*/
    v10 = __s1.i8[8]; /*0x1007c593e*/
    v127 = *(__int128 *)((char *)__s1.i128 + 9); /*0x1007c594d*/
    *(_QWORD *)v128 = *(__int64 *)((char *)&__s1.i64[3] + 1); /*0x1007c5969*/
    *(_QWORD *)&v128[7] = __s1.i64[4]; /*0x1007c5977*/
    if ( __s1.i64[0] == 2 ) /*0x1007c5982*/
      goto LABEL_6; /*0x1007c5982*/
    v121 = v104; /*0x1007c598b*/
    v120 = v103; /*0x1007c5999*/
    v119 = v102; /*0x1007c59a7*/
    v118 = v101; /*0x1007c59b5*/
    *(_QWORD *)&v117[16] = __s1.i64[7]; /*0x1007c59c3*/
    v11 = *(__int128 *)((char *)&__s1.i128[2] + 8); /*0x1007c59d1*/
  }
  *(_OWORD *)v117 = v11; /*0x1007c59df*/
LABEL_6:
  if ( v9 == 2 ) /*0x1007c59ea*/
  {
    *(_QWORD *)&v99[7] = *(_QWORD *)&v128[7]; /*0x1007c59f7*/
    *(_QWORD *)v99 = *(_QWORD *)v128; /*0x1007c5a05*/
    *(_OWORD *)v116 = v127; /*0x1007c5a1a*/
    *(_QWORD *)&v116[16] = *(_QWORD *)v128; /*0x1007c5a36*/
    *(_QWORD *)&v116[23] = *(_QWORD *)&v99[7]; /*0x1007c5a3d*/
    *(__int128 *)((char *)__s1.i128 + 1) = v127; /*0x1007c5a4b*/
    __s1.i64[3] = *(_QWORD *)&v99[7]; /*0x1007c5a60*/
    *(__int64 *)((char *)&__s1.i64[2] + 1) = *(_QWORD *)&v116[16]; /*0x1007c5a67*/
    __s1.i8[0] = v10; /*0x1007c5a6e*/
    v12 = (int *)"model_providers\n"; /*0x1007c5a75*/
    v13 = 15; /*0x1007c5a83*/
    v14 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e( /*0x1007c5a88*/
            "model_providers\n",
            15,
            &__s1,
            *(_QWORD *)&v99[7],
            v7,
            v8);
    if ( !v14 /*0x1007c5ab0*/
      || (v12 = &anon_3ce6d1417794db0febde534c64082f90_165,
          v13 = 6,
          v18 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e(
                  &anon_3ce6d1417794db0febde534c64082f90_165,
                  6,
                  v14,
                  v15,
                  v16,
                  v17),
          (v22 = v18) == 0) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v13); /*0x1007c5c6d*/
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1007c5c7c*/
      if ( !v29 ) /*0x1007c5c84*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1007c6388*/
      v30 = (_QWORD *)v29; /*0x1007c5c8a*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1007c5c8d*/
      v31 = 1; /*0x1007c5c97*/
      v32 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(31, 1); /*0x1007c5c9c*/
      if ( !v32 ) /*0x1007c5ca4*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 31); /*0x1007c63a8*/
      qmemcpy(v32 + 1, "model_providers.aimai1]", 23); /*0x1007c5cd0*/
      v35 = 0x5B2091B0E5BABCE7LL; /*0x1007c5cd4*/
      *v32 = 0x5B2091B0E5BABCE7LL; /*0x1007c5cde*/
      *v30 = 31; /*0x1007c5ce1*/
      v30[1] = v32; /*0x1007c5ce8*/
      v30[2] = 31; /*0x1007c5cec*/
      a1[1] = 1; /*0x1007c5cf4*/
      a1[2] = v30; /*0x1007c5cfc*/
      a1[3] = 1; /*0x1007c5d00*/
      goto LABEL_69; /*0x1007c5d08*/
    }
    *(_QWORD *)&v135 = 0; /*0x1007c5ab6*/
    *((_QWORD *)&v135 + 1) = 8; /*0x1007c5abe*/
    v136 = 0; /*0x1007c5ac6*/
    v23 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e( /*0x1007c5add*/
            "base_urlwire_apihostnameHTTPPort",
            8,
            v18,
            v19,
            v20,
            v21);
    v25 = 1; /*0x1007c5ae2*/
    if ( v23 && !*(_BYTE *)v23 ) /*0x1007c5aef*/
    {
      v25 = *(_QWORD *)(v23 + 16); /*0x1007c5dc6*/
      v26 = *(_QWORD *)(v23 + 24); /*0x1007c5dca*/
    }
    else
    {
      v26 = 0; /*0x1007c5af5*/
    }
    *(_QWORD *)&v129 = v25; /*0x1007c5dce*/
    *((_QWORD *)&v129 + 1) = v26; /*0x1007c5dd5*/
    v39 = v26; /*0x1007c5ddc*/
    do /*0x1007c5e71*/
    {
      while ( 1 ) /*0x1007c5dfc*/
      {
        if ( !v39 ) /*0x1007c5dff*/
          goto LABEL_43; /*0x1007c5dff*/
        v40 = v39; /*0x1007c5e05*/
        v41 = v25 + v39; /*0x1007c5e08*/
        v42 = *(char *)(v25 + v39 - 1); /*0x1007c5e0c*/
        if ( v42 < 0 ) /*0x1007c5e12*/
          break; /*0x1007c5e12*/
        --v39; /*0x1007c5df4*/
        if ( v42 != 47 ) /*0x1007c5dfa*/
          goto LABEL_41; /*0x1007c5dfa*/
      }
      v43 = *(_BYTE *)(v41 - 2); /*0x1007c5e14*/
      if ( v43 >= -64 ) /*0x1007c5e1d*/
      {
        v45 = v41 - 2; /*0x1007c5e44*/
        v47 = v43 & 0x1F; /*0x1007c5e48*/
      }
      else
      {
        v44 = *(_BYTE *)(v41 - 3); /*0x1007c5e1f*/
        if ( v44 >= -64 ) /*0x1007c5e28*/
        {
          v45 = v41 - 3; /*0x1007c5e4e*/
          v46 = v44 & 0xF; /*0x1007c5e52*/
        }
        else
        {
          v45 = v41 - 4; /*0x1007c5e2a*/
          v46 = ((*(_BYTE *)(v41 - 4) & 7) << 6) | v44 & 0x3F; /*0x1007c5e3f*/
        }
        v47 = (v46 << 6) | v43 & 0x3F; /*0x1007c5e5e*/
      }
      v24 = (unsigned int)(v47 << 6); /*0x1007c5e61*/
      v39 = v45 - v25; /*0x1007c5e6b*/
    }
    while ( ((unsigned int)v24 | v42 & 0x3F) == 0x2F ); /*0x1007c5e71*/
LABEL_41:
    if ( v40 < 0x10 /*0x1007c5e8b*/
      || (v48 = _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)(v41 - 16)),
                  *(__m128i *)"/codex/router/v1xy-authorizationproxy-authorizatproxy-authenticate"),
          !_mm_testz_si128(v48, v48)) )
    {
LABEL_43:
      *(_QWORD *)v107 = &v129; /*0x1007c5e91*/
      *(_QWORD *)&v107[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007c5ea6*/
      v49 = (__int64 *)v98; /*0x1007c5eb4*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_1017C5183, v107); /*0x1007c5ec5*/
      v50 = v136; /*0x1007c5eca*/
      if ( v136 == (_QWORD)v135 ) /*0x1007c5ed2*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x1007c5ed8*/
LABEL_45:
      v51 = *((_QWORD *)&v135 + 1); /*0x1007c5edd*/
      v40 = 3 * v50; /*0x1007c5ee1*/
      *(_QWORD *)(*((_QWORD *)&v135 + 1) + 8 * v40 + 16) = v49[2]; /*0x1007c5ee9*/
      v52 = *v49; /*0x1007c5eee*/
      *(_QWORD *)(v51 + 8 * v40 + 8) = v49[1]; /*0x1007c5ef5*/
      *(_QWORD *)(v51 + 8 * v40) = v52; /*0x1007c5efa*/
      v136 = v50 + 1; /*0x1007c5f01*/
      goto LABEL_46; /*0x1007c5f01*/
    }
    v78 = (char *)__s2; /*0x1007c61a5*/
    if ( __s2 ) /*0x1007c61af*/
    {
      while ( 1 ) /*0x1007c61c1*/
      {
        v79 = a5; /*0x1007c61c1*/
        if ( !a5 ) /*0x1007c61c7*/
          break; /*0x1007c61c7*/
        v80 = &v78[a5]; /*0x1007c61c9*/
        v81 = v78[v79 - 1]; /*0x1007c61cd*/
        if ( v81 >= 0 ) /*0x1007c61d5*/
        {
          a5 = v79 - 1; /*0x1007c61b9*/
          if ( v81 != 47 ) /*0x1007c61bf*/
            break; /*0x1007c61bf*/
        }
        else
        {
          v82 = *(v80 - 2); /*0x1007c61d7*/
          if ( v82 >= -64 ) /*0x1007c61e1*/
          {
            v85 = v80 - 2; /*0x1007c620a*/
            v87 = v82 & 0x1F; /*0x1007c620e*/
          }
          else
          {
            v83 = *(v80 - 3); /*0x1007c61e3*/
            if ( v83 >= -64 ) /*0x1007c61ed*/
            {
              v85 = v80 - 3; /*0x1007c6214*/
              v86 = v83 & 0xF; /*0x1007c6218*/
            }
            else
            {
              v84 = *(v80 - 4); /*0x1007c61ef*/
              v85 = v80 - 4; /*0x1007c61f5*/
              v86 = ((v84 & 7) << 6) | v83 & 0x3F; /*0x1007c6205*/
            }
            v87 = (v86 << 6) | v82 & 0x3F; /*0x1007c6224*/
            v78 = (char *)__s2; /*0x1007c6227*/
          }
          a5 = v85 - v78; /*0x1007c6238*/
          if ( ((v87 << 6) | v81 & 0x3F) != 0x2F ) /*0x1007c623e*/
            break; /*0x1007c623e*/
        }
      }
      v115[0] = v78; /*0x1007c6240*/
      v115[1] = v79; /*0x1007c6247*/
      while ( 1 ) /*0x1007c625c*/
      {
        v88 = v26; /*0x1007c625c*/
        if ( !v26 ) /*0x1007c6262*/
          break; /*0x1007c6262*/
        v89 = v25 + v26; /*0x1007c6264*/
        v90 = *(char *)(v25 + v88 - 1); /*0x1007c6268*/
        if ( v90 >= 0 ) /*0x1007c6270*/
        {
          v26 = v88 - 1; /*0x1007c6253*/
          if ( v90 != 47 ) /*0x1007c625a*/
            break; /*0x1007c625a*/
        }
        else
        {
          v91 = *(_BYTE *)(v89 - 2); /*0x1007c6272*/
          if ( v91 >= -64 ) /*0x1007c627b*/
          {
            v94 = v89 - 2; /*0x1007c62a2*/
            v96 = v91 & 0x1F; /*0x1007c62a6*/
          }
          else
          {
            v92 = *(_BYTE *)(v89 - 3); /*0x1007c627d*/
            if ( v92 >= -64 ) /*0x1007c6286*/
            {
              v94 = v89 - 3; /*0x1007c62ac*/
              v95 = v92 & 0xF; /*0x1007c62b0*/
            }
            else
            {
              v93 = *(_BYTE *)(v89 - 4); /*0x1007c6288*/
              v94 = v89 - 4; /*0x1007c628d*/
              v95 = ((v93 & 7) << 6) | v92 & 0x3F; /*0x1007c629d*/
            }
            v96 = (v95 << 6) | v91 & 0x3F; /*0x1007c62bc*/
          }
          v78 = (char *)__s2; /*0x1007c62ca*/
          v26 = v94 - v25; /*0x1007c62d1*/
          if ( ((v96 << 6) | v90 & 0x3F) != 0x2F ) /*0x1007c62d8*/
            break; /*0x1007c62d8*/
        }
      }
      if ( v88 != v79 || memcmp((const void *)v25, v78, v79) ) /*0x1007c62df*/
      {
        *(_QWORD *)v107 = v115; /*0x1007c62f3*/
        *(_QWORD *)&v107[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007c6301*/
        *(_QWORD *)&v107[16] = &v129; /*0x1007c630f*/
        *(_QWORD *)&v107[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007c6316*/
        v49 = (__int64 *)v97; /*0x1007c6324*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v97, &unk_1017C51B9, v107); /*0x1007c6335*/
        v50 = v136; /*0x1007c633a*/
        if ( v136 == (_QWORD)v135 ) /*0x1007c6342*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x1007c634c*/
        goto LABEL_45; /*0x1007c6351*/
      }
    }
LABEL_46:
    v53 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e( /*0x1007c5f05*/
            "wire_apihostnameHTTPPort",
            8,
            v22,
            v40,
            v39,
            v24);
    if ( !v53 /*0x1007c5f43*/
      || *(_BYTE *)v53
      || *(_QWORD *)(v53 + 24) != 9
      || (v56 = *(_QWORD *)(v53 + 16),
          v57 = *(_QWORD *)v56 ^ 0x65736E6F70736572LL,
          v57 | *(unsigned __int8 *)(v56 + 8) ^ 0x73LL) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("wire_apihostnameHTTPPort", 8); /*0x1007c5f4c*/
      v58 = 28; /*0x1007c5f51*/
      v59 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x1007c5f61*/
      if ( !v59 ) /*0x1007c5f69*/
        goto LABEL_100; /*0x1007c5f69*/
      v60 = v59; /*0x1007c5f6f*/
      *(_QWORD *)(v59 + 16) = 0x6F7073657220BAB8LL; /*0x1007c5f7c*/
      *(_QWORD *)(v59 + 8) = 0xE4BBA1E985BFE520LL; /*0x1007c5f8a*/
      *(_QWORD *)v59 = 0x6970615F65726977LL; /*0x1007c5f98*/
      *(_DWORD *)(v59 + 24) = 1936028526; /*0x1007c5f9b*/
      v61 = v136; /*0x1007c5fa3*/
      if ( v136 == (_QWORD)v135 ) /*0x1007c5fab*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x1007c5fb1*/
      v62 = *((_QWORD *)&v135 + 1); /*0x1007c5fb6*/
      v57 = 3 * v61; /*0x1007c5fba*/
      *(_QWORD *)(*((_QWORD *)&v135 + 1) + 8 * v57) = 28; /*0x1007c5fbe*/
      *(_QWORD *)(v62 + 8 * v57 + 8) = v60; /*0x1007c5fc6*/
      *(_QWORD *)(v62 + 8 * v57 + 16) = 28; /*0x1007c5fcb*/
      v136 = v61 + 1; /*0x1007c5fd7*/
    }
    v63 = (_BYTE *)_$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e( /*0x1007c5fea*/
                     "requires_openai_auth",
                     20,
                     v22,
                     v57,
                     v54,
                     v55);
    if ( !v63 || *v63 != 3 || !v63[1] ) /*0x1007c5ff9*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("requires_openai_auth", 20); /*0x1007c6003*/
      v58 = 35; /*0x1007c6008*/
      v67 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x1007c6018*/
      if ( !v67 ) /*0x1007c6020*/
        goto LABEL_100; /*0x1007c6020*/
      v68 = v67; /*0x1007c6026*/
      *(_QWORD *)(v67 + 24) = 0x7420BAB8E4BBA1E9LL; /*0x1007c6033*/
      *(_QWORD *)(v67 + 16) = 0x85BFE52068747561LL; /*0x1007c6041*/
      qmemcpy((void *)v67, "requires_openai_", 16); /*0x1007c605d*/
      *(_DWORD *)(v67 + 31) = 1702195828; /*0x1007c6060*/
      v69 = v136; /*0x1007c6068*/
      if ( v136 == (_QWORD)v135 ) /*0x1007c6070*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x1007c6076*/
      v70 = *((_QWORD *)&v135 + 1); /*0x1007c607b*/
      v64 = 3 * v69; /*0x1007c607f*/
      *(_QWORD *)(*((_QWORD *)&v135 + 1) + 8 * v64) = 35; /*0x1007c6083*/
      *(_QWORD *)(v70 + 8 * v64 + 8) = v68; /*0x1007c608b*/
      *(_QWORD *)(v70 + 8 * v64 + 16) = 35; /*0x1007c6090*/
      v136 = v69 + 1; /*0x1007c609c*/
    }
    v31 = 19; /*0x1007c60a7*/
    v71 = (_BYTE *)_$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e( /*0x1007c60af*/
                     "supports_websockets",
                     19,
                     v22,
                     v64,
                     v65,
                     v66);
    if ( v71 && *v71 == 3 && v71[1] != 1 ) /*0x1007c60c2*/
    {
LABEL_68:
      a1[3] = v136; /*0x1007c6165*/
      v35 = *((_QWORD *)&v135 + 1); /*0x1007c6171*/
      *(_OWORD *)(a1 + 1) = v135; /*0x1007c6179*/
LABEL_69:
      *a1 = 0; /*0x1007c617d*/
      core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&__s1, v31, v33, v35, v34); /*0x1007c618b*/
      return a1; /*0x1007c618b*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("supports_websockets", 19); /*0x1007c60c8*/
    v58 = 35; /*0x1007c60cd*/
    v31 = 1; /*0x1007c60d8*/
    v72 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x1007c60dd*/
    if ( v72 ) /*0x1007c60e5*/
    {
      v73 = v72; /*0x1007c60eb*/
      *(_QWORD *)(v72 + 24) = 0x616620BAB8E4BBA1LL; /*0x1007c60f8*/
      *(_QWORD *)(v72 + 16) = 0xE985BFE520737465LL; /*0x1007c6106*/
      qmemcpy((void *)v72, "supports_websock", 16); /*0x1007c6122*/
      *(_DWORD *)(v72 + 31) = 1702063201; /*0x1007c6125*/
      v74 = v136; /*0x1007c612d*/
      if ( v136 == (_QWORD)v135 ) /*0x1007c6135*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v135); /*0x1007c613b*/
      v75 = *((_QWORD *)&v135 + 1); /*0x1007c6140*/
      v76 = 3 * v74; /*0x1007c6144*/
      *(_QWORD *)(*((_QWORD *)&v135 + 1) + 8 * v76) = 35; /*0x1007c6148*/
      *(_QWORD *)(v75 + 8 * v76 + 8) = v73; /*0x1007c6150*/
      *(_QWORD *)(v75 + 8 * v76 + 16) = 35; /*0x1007c6155*/
      v136 = v74 + 1; /*0x1007c6161*/
      goto LABEL_68; /*0x1007c6161*/
    }
LABEL_100:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v58); /*0x1007c638f*/
  }
  *(_QWORD *)v107 = v9; /*0x1007c5afc*/
  v107[8] = v10; /*0x1007c5b03*/
  *(_OWORD *)&v107[9] = v127; /*0x1007c5b18*/
  *(_QWORD *)&v107[25] = *(_QWORD *)v128; /*0x1007c5b2d*/
  *(_QWORD *)&v107[32] = *(_QWORD *)&v128[7]; /*0x1007c5b3b*/
  *(_QWORD *)&v107[40] = *(_QWORD *)v117; /*0x1007c5b50*/
  v108 = *(_OWORD *)&v117[8]; /*0x1007c5b57*/
  v109 = v118; /*0x1007c5b73*/
  v110 = v119; /*0x1007c5b81*/
  v111 = v120; /*0x1007c5b8f*/
  v112 = v121; /*0x1007c5b9d*/
  *(_QWORD *)&v135 = 0; /*0x1007c5ba4*/
  *((_QWORD *)&v135 + 1) = 1; /*0x1007c5bac*/
  v136 = 0; /*0x1007c5bb4*/
  __s1.i64[2] = 1610612768; /*0x1007c5bbc*/
  __s1.i64[0] = (__int64)&v135; /*0x1007c5bcb*/
  __s1.i64[1] = (__int64)&anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c5bd9*/
  if ( (unsigned __int8)_$LT$toml..de..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hb4e2762bdfecb2bd(v107, &__s1) ) /*0x1007c5bee*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c6377*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v129,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v129 = v135; /*0x1007c5c03*/
  v130 = v136; /*0x1007c5c15*/
  if ( *(_QWORD *)&v107[24] ) /*0x1007c5c26*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v107[32], *(_QWORD *)&v107[24], 1); /*0x1007c5c34*/
  if ( !(2 * v110) ) /*0x1007c5c40*/
  {
    v27 = *((_QWORD *)&v108 + 1); /*0x1007c5c51*/
    v28 = v109; /*0x1007c5c58*/
    if ( !v109 ) /*0x1007c5c62*/
      goto LABEL_26; /*0x1007c5c62*/
LABEL_22:
    v36 = (_QWORD *)(v27 + 8); /*0x1007c5d31*/
    do /*0x1007c5d47*/
    {
      v37 = *(v36 - 1); /*0x1007c5d49*/
      if ( v37 ) /*0x1007c5d51*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v36, v37, 1); /*0x1007c5d5c*/
      v36 += 3; /*0x1007c5d40*/
      --v28; /*0x1007c5d44*/
    }
    while ( v28 ); /*0x1007c5d47*/
    goto LABEL_26; /*0x1007c5d47*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v110, 1); /*0x1007c5d19*/
  v27 = *((_QWORD *)&v108 + 1); /*0x1007c5d1e*/
  v28 = v109; /*0x1007c5d25*/
  if ( v109 ) /*0x1007c5d2f*/
    goto LABEL_22; /*0x1007c5d2f*/
LABEL_26:
  if ( (_QWORD)v108 ) /*0x1007c5d6d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 24 * v108, 8); /*0x1007c5d7f*/
  v38 = v129; /*0x1007c5d92*/
  *(_OWORD *)&v116[7] = v129; /*0x1007c5d99*/
  *(_QWORD *)&v116[23] = v130; /*0x1007c5da7*/
  a1[3] = v130; /*0x1007c5dae*/
  *(_OWORD *)(a1 + 1) = v38; /*0x1007c5db6*/
  *a1 = 1; /*0x1007c5dba*/
  return a1; /*0x1007c6193*/
}