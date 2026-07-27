// __ZN13codexmate_lib4core5relay15config_takeover21split_foreign_surface @ 0x1008f5d00 | 基线 same-set
double __fastcall codexmate_lib::core::relay::config_takeover::split_foreign_surface::h312bc0dc86a91007(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128i a5)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  signed __int64 v12; // r14
  __int8 *v13; // rbx
  char *v14; // rdi
  const char *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r12
  __m128i v20; // xmm2
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // r12
  const __m128i *v26; // r15
  __int32 v27; // eax
  int v28; // ecx
  unsigned __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  __m128i v42; // xmm1
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __m128i v47; // xmm1
  __int64 v48; // r9
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // r12
  const __m128i *v53; // rdi
  const __m128i *v54; // rsi
  __int64 v55; // r9
  char v56; // r15
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // r15
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // r15
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rbx
  __int64 v86; // r15
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // r14
  _QWORD *v96; // r15
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 v99; // rdi
  __int64 v100; // rdi
  const __m128i *v104; // [rsp+18h] [rbp-158h] BYREF
  const __m128i *v105; // [rsp+20h] [rbp-150h]
  __int64 v106; // [rsp+28h] [rbp-148h] BYREF
  __int64 v107; // [rsp+30h] [rbp-140h]
  __int64 v108; // [rsp+38h] [rbp-138h]
  __int64 v109; // [rsp+40h] [rbp-130h]
  __int64 v110; // [rsp+48h] [rbp-128h]
  char v111; // [rsp+50h] [rbp-120h]
  __int16 v112; // [rsp+58h] [rbp-118h]
  unsigned __int64 v113; // [rsp+60h] [rbp-110h] BYREF
  const __m128i *v114; // [rsp+68h] [rbp-108h]
  __int64 v115; // [rsp+70h] [rbp-100h]
  signed __int64 v116; // [rsp+78h] [rbp-F8h]
  signed __int64 v117; // [rsp+80h] [rbp-F0h]
  signed __int64 v118; // [rsp+88h] [rbp-E8h]
  __int64 v119; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v120; // [rsp+98h] [rbp-D8h]
  __int64 v121; // [rsp+A0h] [rbp-D0h]
  __int64 v122; // [rsp+A8h] [rbp-C8h] BYREF
  __int64 v123; // [rsp+B0h] [rbp-C0h]
  __int64 v124; // [rsp+B8h] [rbp-B8h]
  unsigned __int64 v125; // [rsp+C0h] [rbp-B0h] BYREF
  const __m128i *v126; // [rsp+C8h] [rbp-A8h]
  __int64 v127; // [rsp+D0h] [rbp-A0h]
  __int64 v128; // [rsp+D8h] [rbp-98h]
  __int64 v129; // [rsp+E0h] [rbp-90h]
  __int64 v130; // [rsp+E8h] [rbp-88h]
  unsigned __int64 v131; // [rsp+F0h] [rbp-80h] BYREF
  const __m128i *v132; // [rsp+F8h] [rbp-78h]
  const __m128i *v133; // [rsp+100h] [rbp-70h]
  __int64 v134; // [rsp+108h] [rbp-68h] BYREF
  __int64 v135; // [rsp+110h] [rbp-60h]
  __int64 v136; // [rsp+118h] [rbp-58h]
  int v137; // [rsp+120h] [rbp-50h]
  int v138; // [rsp+124h] [rbp-4Ch]
  __int64 v139; // [rsp+128h] [rbp-48h]
  __int64 v140; // [rsp+130h] [rbp-40h] BYREF
  __int64 v141; // [rsp+138h] [rbp-38h]
  __int64 v142; // [rsp+140h] [rbp-30h]

  if ( a4 < 0 ) /*0x1008f5d1a*/
  {
    v6 = 0; /*0x1008f5d1c*/
    goto LABEL_3; /*0x1008f5d1c*/
  }
  if ( a4 ) /*0x1008f5d38*/
  {
    v7 = a3; /*0x1008f5d3a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1008f5d3d*/
    v6 = 1; /*0x1008f5d42*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x1008f5d50*/
    if ( !v8 ) /*0x1008f5d58*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, a4); /*0x1008f5d1f*/
    a3 = v7; /*0x1008f5d5a*/
  }
  else
  {
    v8 = 1; /*0x1008f5d5f*/
  }
  v140 = a4; /*0x1008f5d6e*/
  v139 = v8; /*0x1008f5d72*/
  v141 = v8; /*0x1008f5d76*/
  v142 = 0; /*0x1008f5d7a*/
  v119 = 0; /*0x1008f5d82*/
  v120 = 8; /*0x1008f5d8d*/
  v121 = 0; /*0x1008f5d98*/
  v122 = 0; /*0x1008f5da3*/
  v123 = 8; /*0x1008f5dae*/
  v124 = 0; /*0x1008f5db9*/
  v131 = 0x8000000000000000LL; /*0x1008f5dc4*/
  v104 = nullptr; /*0x1008f5dc8*/
  v105 = (const __m128i *)a4; /*0x1008f5dd3*/
  v106 = a3; /*0x1008f5dda*/
  v107 = a4; /*0x1008f5de1*/
  v108 = 0; /*0x1008f5de8*/
  v109 = a4; /*0x1008f5df3*/
  v110 = 0xA0000000ALL; /*0x1008f5e04*/
  v111 = 1; /*0x1008f5e0b*/
  v112 = 0; /*0x1008f5e12*/
  v9 = 0; /*0x1008f5e1b*/
  v138 = 0; /*0x1008f5e1e*/
  v137 = 0; /*0x1008f5e25*/
  while ( 1 ) /*0x1008f5e30*/
  {
    v10 = v106; /*0x1008f5e30*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1008f5e45*/
      &v125,
      &v106);
    if ( (_DWORD)v125 == 1 ) /*0x1008f5e51*/
    {
      v11 = (__int64)v104; /*0x1008f5e5a*/
      v104 = (const __m128i *)v127; /*0x1008f5e61*/
      v12 = v127 - v11; /*0x1008f5e68*/
      v13 = (__int8 *)(v11 + v10); /*0x1008f5e6b*/
      if ( v127 != v11 ) /*0x1008f5e71*/
        goto LABEL_15; /*0x1008f5e71*/
      goto LABEL_21; /*0x1008f5e71*/
    }
    if ( HIBYTE(v112) ) /*0x1008f5e87*/
      break; /*0x1008f5e87*/
    HIBYTE(v112) = 1; /*0x1008f5e8d*/
    v12 = (char *)v105 - (char *)v104; /*0x1008f5ea2*/
    if ( ((unsigned __int8)v112 | (v105 != v104)) != 1 ) /*0x1008f5eb0*/
      break; /*0x1008f5eb0*/
    v13 = &v104->i8[v106]; /*0x1008f5eb6*/
    if ( v12 ) /*0x1008f5ec0*/
    {
LABEL_15:
      if ( v13[v12 - 1] == 10 ) /*0x1008f5ec8*/
      {
        if ( v12 == 1 ) /*0x1008f5ed0*/
        {
          v12 = 0; /*0x1008f5ee0*/
        }
        else if ( v13[v12 - 2] == 13 ) /*0x1008f5ed8*/
        {
          v12 -= 2LL; /*0x1008f5eda*/
        }
        else
        {
          --v12; /*0x1008f5ee5*/
        }
      }
    }
LABEL_21:
    v14 = v13; /*0x1008f5ef0*/
    v15 = (const char *)v12; /*0x1008f5ef3*/
    v17 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v13, v12); /*0x1008f5efb*/
    v19 = v18; /*0x1008f5efe*/
    switch ( v18 ) /*0x1008f5f1d*/
    {
      case 30LL: /*0x1008f5f1d*/
        a5 = _mm_loadu_si128((const __m128i *)(v17 + 14)); /*0x1008f5f30*/
        v20 = _mm_or_si128( /*0x1008f5f42*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  a5),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v17),
                  _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
        if ( _mm_testz_si128(v20, v20) ) /*0x1008f5f46*/
          goto LABEL_29; /*0x1008f5f4b*/
        goto LABEL_35; /*0x1008f5f4b*/
      case 36LL: /*0x1008f5f1d*/
        v14 = (char *)v17; /*0x1008f5f97*/
        v15 = (const char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_99; /*0x1008f5f9a*/
        if ( !memcmp((const void *)v17, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99, 0x24u) ) /*0x1008f5fa1*/
          goto LABEL_29; /*0x1008f5fa8*/
        goto LABEL_35; /*0x1008f5fa8*/
      case 39LL: /*0x1008f5f1d*/
        v14 = (char *)v17; /*0x1008f5f58*/
        v15 = (const char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_100; /*0x1008f5f5b*/
        if ( memcmp((const void *)v17, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100, 0x27u) ) /*0x1008f5f62*/
          goto LABEL_35; /*0x1008f5f69*/
LABEL_29:
        if ( v12 > (unsigned __int64)(v140 - v9) ) /*0x1008f5fb4*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f69e9*/
            &v140,
            v9,
            v12,
            1,
            1,
            v16);
          v139 = v141; /*0x1008f69f2*/
          v9 = v142; /*0x1008f69f6*/
        }
        memcpy((void *)(v9 + v139), v13, v12); /*0x1008f5fc7*/
        v22 = v9 + v12; /*0x1008f5fcc*/
        v142 = v22; /*0x1008f5fcf*/
        v23 = v22; /*0x1008f5fd3*/
        if ( v140 == v22 ) /*0x1008f5fda*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f6a16*/
            &v140,
            v22,
            1,
            1,
            1,
            v21);
          v23 = v142; /*0x1008f6a1b*/
        }
        v139 = v141; /*0x1008f5fe4*/
        *(_BYTE *)(v141 + v23) = 10; /*0x1008f5fe8*/
        v24 = v22 + 1; /*0x1008f5fec*/
        v142 = v24; /*0x1008f5fef*/
        v138 = 0; /*0x1008f5ff3*/
        goto LABEL_59; /*0x1008f5ffa*/
      case 55LL: /*0x1008f5f1d*/
        v14 = (char *)v17; /*0x1008f6004*/
        v15 = (const char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_101; /*0x1008f6007*/
        if ( memcmp((const void *)v17, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) ) /*0x1008f600e*/
          goto LABEL_35; /*0x1008f6015*/
        goto LABEL_45; /*0x1008f6015*/
      case 60LL: /*0x1008f5f1d*/
        v14 = (char *)v17; /*0x1008f60d3*/
        v15 = (const char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_102; /*0x1008f60d6*/
        if ( !memcmp((const void *)v17, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) ) /*0x1008f60dd*/
          goto LABEL_45; /*0x1008f60e4*/
        goto LABEL_35; /*0x1008f60e4*/
      case 64LL: /*0x1008f5f1d*/
        v14 = (char *)v17; /*0x1008f5f76*/
        v15 = "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)"; /*0x1008f5f79*/
        if ( memcmp((const void *)v17, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u) ) /*0x1008f5f80*/
          goto LABEL_35; /*0x1008f5f87*/
LABEL_45:
        v29 = v131; /*0x1008f60ea*/
        v131 = 0x8000000000000000LL; /*0x1008f60f8*/
        if ( v29 != 0x8000000000000000LL ) /*0x1008f60ff*/
        {
          v125 = v29; /*0x1008f6105*/
          v130 = v136; /*0x1008f611b*/
          v129 = v135; /*0x1008f6123*/
          v128 = v134; /*0x1008f612b*/
          v127 = (__int64)v133; /*0x1008f6136*/
          v126 = v132; /*0x1008f613a*/
          v30 = v124; /*0x1008f613d*/
          if ( v124 == v122 ) /*0x1008f614b*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v122); /*0x1008f6154*/
          v31 = v123; /*0x1008f6159*/
          v32 = 48 * v30; /*0x1008f6164*/
          *(_QWORD *)(v123 + v32 + 40) = v130; /*0x1008f616f*/
          *(_QWORD *)(v31 + v32 + 32) = v129; /*0x1008f617b*/
          *(_QWORD *)(v31 + v32 + 24) = v128; /*0x1008f6187*/
          *(_QWORD *)(v31 + v32 + 16) = v127; /*0x1008f6193*/
          v33 = v125; /*0x1008f6198*/
          *(_QWORD *)(v31 + v32 + 8) = v126; /*0x1008f61a6*/
          *(_QWORD *)(v31 + v32) = v33; /*0x1008f61ab*/
          v124 = v30 + 1; /*0x1008f61b2*/
        }
        if ( v12 > (unsigned __int64)(v140 - v9) ) /*0x1008f61c3*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f6a39*/
            &v140,
            v9,
            v12,
            1,
            1,
            v16);
          v139 = v141; /*0x1008f6a42*/
          v9 = v142; /*0x1008f6a46*/
        }
        memcpy((void *)(v9 + v139), v13, v12); /*0x1008f61d6*/
        v35 = v9 + v12; /*0x1008f61db*/
        v142 = v35; /*0x1008f61de*/
        v36 = v35; /*0x1008f61e2*/
        if ( v140 == v35 ) /*0x1008f61e9*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f6a66*/
            &v140,
            v35,
            1,
            1,
            1,
            v34);
          v36 = v142; /*0x1008f6a6b*/
        }
        v139 = v141; /*0x1008f61f3*/
        *(_BYTE *)(v141 + v36) = 10; /*0x1008f61f7*/
        v24 = v35 + 1; /*0x1008f61fb*/
        v142 = v24; /*0x1008f61fe*/
        LOBYTE(v36) = 1; /*0x1008f6202*/
        v138 = v36; /*0x1008f6204*/
        v137 = 0; /*0x1008f6207*/
        goto LABEL_59; /*0x1008f620e*/
      default:
LABEL_35:
        if ( (v138 & 1) != 0 ) /*0x1008f6024*/
        {
          if ( v12 > (unsigned __int64)(v140 - v9) ) /*0x1008f621a*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f6999*/
              &v140,
              v9,
              v12,
              1,
              1,
              v16);
            v139 = v141; /*0x1008f69a2*/
            v9 = v142; /*0x1008f69a6*/
          }
          memcpy((void *)(v9 + v139), v13, v12); /*0x1008f622d*/
          v38 = v9 + v12; /*0x1008f6232*/
          v142 = v38; /*0x1008f6235*/
          v39 = v38; /*0x1008f6239*/
          if ( v140 == v38 ) /*0x1008f6240*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f69c6*/
              &v140,
              v38,
              1,
              1,
              1,
              v37);
            v39 = v142; /*0x1008f69cb*/
          }
          v139 = v141; /*0x1008f624a*/
          *(_BYTE *)(v141 + v39) = 10; /*0x1008f624e*/
          v24 = v38 + 1; /*0x1008f6252*/
          v142 = v24; /*0x1008f6255*/
          LOBYTE(v39) = 1; /*0x1008f6259*/
          v138 = v39; /*0x1008f625b*/
LABEL_59:
          v9 = v24; /*0x1008f625e*/
          if ( HIBYTE(v112) ) /*0x1008f626b*/
            goto LABEL_137; /*0x1008f626b*/
        }
        else
        {
          if ( v19 && *(_BYTE *)v17 == 91 && *(_BYTE *)(v17 + v19 - 1) == 93 ) /*0x1008f603b*/
          {
            if ( v19 == 1 || *(char *)(v17 + 1) <= -65 ) /*0x1008f644d*/
              core::str::slice_error_fail::h480e51fbd8b15eba( /*0x1008f6d9e*/
                v17,
                v19,
                1,
                v19 - 1,
                &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97);
            v51 = v17 + 1; /*0x1008f6453*/
            v52 = v19 - 2; /*0x1008f6456*/
            *(double *)a5.i64 = codexmate_lib::core::relay::config_takeover::normalize_section_key::h5aa1cacb5786d356( /*0x1008f6467*/
                                  &v113,
                                  v51,
                                  v52);
            v53 = (const __m128i *)v51; /*0x1008f646c*/
            v54 = (const __m128i *)v52; /*0x1008f646f*/
            if ( !(unsigned __int8)codexmate_lib::core::relay::config_takeover::is_foreign_model_section::h9031f03a25b35ea5( /*0x1008f6479*/
                                     v51,
                                     v52) )
            {
              v60 = v131; /*0x1008f6568*/
              v131 = 0x8000000000000000LL; /*0x1008f6576*/
              if ( v60 != 0x8000000000000000LL ) /*0x1008f657d*/
              {
                v125 = v60; /*0x1008f6583*/
                v130 = v136; /*0x1008f6599*/
                v129 = v135; /*0x1008f65a1*/
                v128 = v134; /*0x1008f65a9*/
                v127 = (__int64)v133; /*0x1008f65b4*/
                v126 = v132; /*0x1008f65b8*/
                v61 = v124; /*0x1008f65bb*/
                if ( v124 == v122 ) /*0x1008f65c9*/
                  alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v122); /*0x1008f65d2*/
                v62 = v123; /*0x1008f65d7*/
                v63 = 48 * v61; /*0x1008f65e2*/
                *(_QWORD *)(v123 + v63 + 40) = v130; /*0x1008f65ed*/
                *(_QWORD *)(v62 + v63 + 32) = v129; /*0x1008f65f9*/
                *(_QWORD *)(v62 + v63 + 24) = v128; /*0x1008f6605*/
                *(_QWORD *)(v62 + v63 + 16) = v127; /*0x1008f6611*/
                v64 = v125; /*0x1008f6616*/
                *(_QWORD *)(v62 + v63 + 8) = v126; /*0x1008f6624*/
                *(_QWORD *)(v62 + v63) = v64; /*0x1008f6629*/
                v124 = v61 + 1; /*0x1008f6630*/
              }
              if ( v12 > (unsigned __int64)(v140 - v9) ) /*0x1008f6641*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f6a89*/
                  &v140,
                  v9,
                  v12,
                  1,
                  1,
                  v55);
                v139 = v141; /*0x1008f6a92*/
                v9 = v142; /*0x1008f6a96*/
              }
              memcpy((void *)(v9 + v139), v13, v12); /*0x1008f6654*/
              v66 = v9 + v12; /*0x1008f6659*/
              v142 = v66; /*0x1008f665c*/
              v67 = v66; /*0x1008f6660*/
              if ( v140 == v66 ) /*0x1008f6667*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f6ab6*/
                  &v140,
                  v66,
                  1,
                  1,
                  1,
                  v65);
                v67 = v142; /*0x1008f6abb*/
              }
              v139 = v141; /*0x1008f6671*/
              *(_BYTE *)(v141 + v67) = 10; /*0x1008f6675*/
              v142 = v66 + 1; /*0x1008f667c*/
              v9 = v66 + 1; /*0x1008f6680*/
LABEL_132:
              if ( v113 ) /*0x1008f6950*/
                *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1); /*0x1008f695e*/
LABEL_134:
              LOBYTE(v67) = 1; /*0x1008f6963*/
              v137 = v67; /*0x1008f6965*/
              v138 = 0; /*0x1008f6968*/
              v24 = v9; /*0x1008f6976*/
              if ( HIBYTE(v112) ) /*0x1008f6979*/
                goto LABEL_137; /*0x1008f6979*/
              continue; /*0x1008f6979*/
            }
            if ( v131 == 0x8000000000000000LL ) /*0x1008f648d*/
              goto LABEL_92; /*0x1008f648d*/
            v53 = v132; /*0x1008f6688*/
            v54 = v133; /*0x1008f668c*/
            v56 = 1; /*0x1008f66a3*/
            if ( (unsigned __int8)codexmate_lib::core::relay::config_takeover::section_overlaps::h06c28989e9c4d786( /*0x1008f669e*/
                                    (__int64)v132,
                                    (__int64)v133,
                                    (__int64)v114,
                                    v115) )
            {
LABEL_109:
              LODWORD(v67) = 0; /*0x1008f66aa*/
              if ( v131 != 0x8000000000000000LL ) /*0x1008f66b8*/
              {
                if ( v12 < 0 ) /*0x1008f66c1*/
                {
                  v100 = 0; /*0x1008f6d77*/
LABEL_169:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v100, v118); /*0x1008f6d79*/
                }
                if ( v12 ) /*0x1008f66c7*/
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v54); /*0x1008f66cd*/
                  v68 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x1008f66da*/
                  if ( !v68 ) /*0x1008f66e2*/
                  {
                    v118 = v12; /*0x1008f6dc1*/
                    v100 = 1; /*0x1008f6dc8*/
                    goto LABEL_169; /*0x1008f6dcd*/
                  }
                }
                else
                {
                  v68 = 1; /*0x1008f68f0*/
                }
                v118 = v68; /*0x1008f68f5*/
                memcpy((void *)v68, v13, v12); /*0x1008f6905*/
                v77 = v136; /*0x1008f690a*/
                if ( v136 == v134 ) /*0x1008f6912*/
                  *(double *)a5.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v134); /*0x1008f6918*/
                v67 = v135; /*0x1008f691d*/
                v78 = 3 * v77; /*0x1008f6921*/
                *(_QWORD *)(v135 + 8 * v78) = v12; /*0x1008f6925*/
                *(_QWORD *)(v67 + 8 * v78 + 8) = v118; /*0x1008f6930*/
                *(_QWORD *)(v67 + 8 * v78 + 16) = v12; /*0x1008f6935*/
                v136 = v77 + 1; /*0x1008f693d*/
              }
              if ( !v56 ) /*0x1008f6944*/
                goto LABEL_134; /*0x1008f6944*/
              goto LABEL_132; /*0x1008f6944*/
            }
            v69 = v131; /*0x1008f66ed*/
            v131 = 0x8000000000000000LL; /*0x1008f66fb*/
            if ( v69 == 0x8000000000000000LL ) /*0x1008f6702*/
            {
LABEL_92:
              v127 = v115; /*0x1008f649a*/
              v126 = v114; /*0x1008f64af*/
              v125 = v113; /*0x1008f64b6*/
            }
            else
            {
              v125 = v69; /*0x1008f6708*/
              v130 = v136; /*0x1008f671e*/
              v129 = v135; /*0x1008f6726*/
              v128 = v134; /*0x1008f672e*/
              v127 = (__int64)v133; /*0x1008f6739*/
              v126 = v132; /*0x1008f673d*/
              v70 = v124; /*0x1008f6740*/
              if ( v124 == v122 ) /*0x1008f674e*/
              {
                v53 = (const __m128i *)&v122; /*0x1008f6750*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v122); /*0x1008f6757*/
              }
              v71 = v123; /*0x1008f675c*/
              v72 = 48 * v70; /*0x1008f6767*/
              *(_QWORD *)(v123 + v72 + 40) = v130; /*0x1008f6772*/
              *(_QWORD *)(v71 + v72 + 32) = v129; /*0x1008f677e*/
              *(_QWORD *)(v71 + v72 + 24) = v128; /*0x1008f678a*/
              *(_QWORD *)(v71 + v72 + 16) = v127; /*0x1008f6796*/
              v73 = v125; /*0x1008f679b*/
              v54 = v126; /*0x1008f67a2*/
              *(_QWORD *)(v71 + v72 + 8) = v126; /*0x1008f67a9*/
              *(_QWORD *)(v71 + v72) = v73; /*0x1008f67ae*/
              v124 = v70 + 1; /*0x1008f67b5*/
              v127 = v115; /*0x1008f67c3*/
              v126 = v114; /*0x1008f67d8*/
              v125 = v113; /*0x1008f67df*/
              if ( v131 != 0x8000000000000000LL ) /*0x1008f67f4*/
              {
                v53 = (const __m128i *)&v131; /*0x1008f67fa*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSection$GT$::hea572aa79bc4c7c3( /*0x1008f67fe*/
                  &v131,
                  *(double *)a5.i64);
              }
            }
            v133 = (const __m128i *)v127; /*0x1008f64c4*/
            v132 = v126; /*0x1008f64d6*/
            v131 = v125; /*0x1008f64da*/
            v134 = 0; /*0x1008f64de*/
            v135 = 8; /*0x1008f64e6*/
            v136 = 0; /*0x1008f64ee*/
            v56 = 0; /*0x1008f64f6*/
            goto LABEL_109; /*0x1008f64f9*/
          }
          if ( v131 == 0x8000000000000000LL ) /*0x1008f604f*/
          {
            if ( (v137 & 1) != 0 /*0x1008f6085*/
              || (codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(
                    &v125,
                    v17,
                    v19),
                  v25 = v125,
                  v125 == 0x8000000000000000LL) )
            {
LABEL_82:
              if ( v12 > (unsigned __int64)(v140 - v9) ) /*0x1008f63ea*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f68b5*/
                  &v140,
                  v9,
                  v12,
                  1,
                  1,
                  v16);
                v139 = v141; /*0x1008f68be*/
                v9 = v142; /*0x1008f68c2*/
              }
              memcpy((void *)(v9 + v139), v13, v12); /*0x1008f63fd*/
              v49 = v9 + v12; /*0x1008f6402*/
              v142 = v49; /*0x1008f6405*/
              v50 = v49; /*0x1008f6409*/
              if ( v140 == v49 ) /*0x1008f6410*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008f68e2*/
                  &v140,
                  v49,
                  1,
                  1,
                  1,
                  v48);
                v50 = v142; /*0x1008f68e7*/
              }
              v139 = v141; /*0x1008f641a*/
              *(_BYTE *)(v141 + v50) = 10; /*0x1008f641e*/
              v24 = v49 + 1; /*0x1008f6422*/
              v142 = v24; /*0x1008f6425*/
              v9 = v24; /*0x1008f6430*/
              if ( HIBYTE(v112) ) /*0x1008f6433*/
                goto LABEL_137; /*0x1008f6433*/
            }
            else
            {
              v26 = v126; /*0x1008f608b*/
              switch ( v127 ) /*0x1008f60b5*/
              {
                case 5LL: /*0x1008f60b5*/
                  v27 = v126->i32[0] ^ 0x65646F6D; /*0x1008f60bf*/
                  v28 = v126->u8[4] ^ 0x6C; /*0x1008f60c6*/
                  goto LABEL_67; /*0x1008f60c9*/
                case 7LL: /*0x1008f60b5*/
                  v27 = v126->i32[0] ^ 0x666F7270; /*0x1008f62d0*/
                  v28 = *(__int32 *)((char *)v126->i32 + 3) ^ 0x656C6966; /*0x1008f62db*/
LABEL_67:
                  if ( !(v27 | v28) ) /*0x1008f62dd*/
                    goto LABEL_68; /*0x1008f62df*/
                  goto LABEL_80; /*0x1008f62df*/
                case 14LL: /*0x1008f60b5*/
                  v44 = v126->i64[0] ^ 0x72705F6C65646F6DLL; /*0x1008f6358*/
                  v45 = *(__int64 *)((char *)v126->i64 + 6); /*0x1008f635b*/
                  v46 = 0x72656469766F7270LL; /*0x1008f635f*/
                  goto LABEL_76; /*0x1008f6369*/
                case 15LL: /*0x1008f60b5*/
                  v44 = v126->i64[0] ^ 0x625F69616E65706FLL; /*0x1008f6378*/
                  v45 = *(__int64 *)((char *)v126->i64 + 7); /*0x1008f637b*/
                  v46 = 0x6C72755F65736162LL; /*0x1008f637f*/
LABEL_76:
                  if ( !(v44 | v46 ^ v45) ) /*0x1008f638c*/
                    goto LABEL_68; /*0x1008f638f*/
                  goto LABEL_80; /*0x1008f638f*/
                case 18LL: /*0x1008f60b5*/
                  a5 = _mm_xor_si128(_mm_loadu_si128(v126), (__m128i)xmmword_1015FBD60); /*0x1008f639b*/
                  v42 = _mm_xor_si128(_mm_cvtsi32_si128(v126[1].u16[0]), (__m128i)xmmword_1015FBD70); /*0x1008f63ac*/
                  goto LABEL_79; /*0x1008f63ac*/
                case 22LL: /*0x1008f60b5*/
                  a5 = _mm_xor_si128(_mm_loadu_si128(v126), (__m128i)xmmword_1015FBD50); /*0x1008f62ad*/
                  v42 = _mm_xor_si128( /*0x1008f62bb*/
                          _mm_loadu_si128((const __m128i *)&v126->u16[3]),
                          *(__m128i *)"reasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id");
                  goto LABEL_79; /*0x1008f62c3*/
                case 24LL: /*0x1008f60b5*/
                  a5 = _mm_xor_si128(_mm_loadu_si128(v126), (__m128i)xmmword_1016731F0); /*0x1008f6333*/
                  v42 = _mm_xor_si128(_mm_loadl_epi64(v126 + 1), (__m128i)xmmword_1016731E0); /*0x1008f6341*/
LABEL_79:
                  v47 = _mm_or_si128(v42, a5); /*0x1008f63b4*/
                  if ( !_mm_testz_si128(v47, v47) ) /*0x1008f63bd*/
                    goto LABEL_80; /*0x1008f63bd*/
LABEL_68:
                  if ( (unsigned __int8)codexmate_lib::core::relay::config_takeover::is_aimami_owned_top_level_line::h65b2fd252fc2ca9f( /*0x1008f62f2*/
                                          a2,
                                          v13,
                                          v12) )
                    goto LABEL_123; /*0x1008f62f9*/
                  if ( v12 < 0 ) /*0x1008f6302*/
                  {
                    v99 = 0; /*0x1008f6d67*/
LABEL_167:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v99, v117); /*0x1008f6d69*/
                  }
                  if ( v12 ) /*0x1008f6308*/
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v13); /*0x1008f630e*/
                    v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x1008f631b*/
                    if ( !v43 ) /*0x1008f6323*/
                    {
                      v117 = v12; /*0x1008f6db3*/
                      v99 = 1; /*0x1008f6dba*/
                      goto LABEL_167; /*0x1008f6dbf*/
                    }
                  }
                  else
                  {
                    v43 = 1; /*0x1008f6808*/
                  }
                  v117 = v43; /*0x1008f680d*/
                  memcpy((void *)v43, v13, v12); /*0x1008f681d*/
                  v74 = v121; /*0x1008f6822*/
                  if ( v121 == v119 ) /*0x1008f6830*/
                    *(double *)a5.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v119); /*0x1008f6839*/
                  v75 = v120; /*0x1008f683e*/
                  v76 = 3 * v74; /*0x1008f6845*/
                  *(_QWORD *)(v120 + 8 * v76) = v12; /*0x1008f6849*/
                  *(_QWORD *)(v75 + 8 * v76 + 8) = v117; /*0x1008f6854*/
                  *(_QWORD *)(v75 + 8 * v76 + 16) = v12; /*0x1008f6859*/
                  v121 = v74 + 1; /*0x1008f6861*/
LABEL_123:
                  if ( v25 ) /*0x1008f686b*/
                    *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x1008f6878*/
                  v137 = 0; /*0x1008f687d*/
                  v138 = 0; /*0x1008f6884*/
                  v24 = v9; /*0x1008f6892*/
                  if ( HIBYTE(v112) ) /*0x1008f6895*/
                    goto LABEL_137; /*0x1008f6895*/
                  break; /*0x1008f6895*/
                default:
LABEL_80:
                  if ( v125 ) /*0x1008f63c6*/
                    *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v126, v125, 1); /*0x1008f63d3*/
                  goto LABEL_82; /*0x1008f63d3*/
              }
            }
          }
          else
          {
            if ( v12 < 0 ) /*0x1008f6279*/
            {
              v98 = 0; /*0x1008f6d57*/
              goto LABEL_165; /*0x1008f6d57*/
            }
            if ( !v12 ) /*0x1008f627f*/
            {
              v41 = 1; /*0x1008f64fe*/
              goto LABEL_95; /*0x1008f64fe*/
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v15); /*0x1008f6285*/
            v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x1008f6292*/
            if ( !v40 ) /*0x1008f629a*/
            {
              v116 = v12; /*0x1008f6da5*/
              v98 = 1; /*0x1008f6dac*/
LABEL_165:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v98, v116); /*0x1008f6d59*/
            }
            v41 = v40; /*0x1008f62a0*/
LABEL_95:
            v116 = v41; /*0x1008f6503*/
            memcpy((void *)v41, v13, v12); /*0x1008f6510*/
            v57 = v136; /*0x1008f6515*/
            if ( v136 == v134 ) /*0x1008f651d*/
              *(double *)a5.i64 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v134); /*0x1008f6523*/
            v58 = v135; /*0x1008f6528*/
            v59 = 3 * v57; /*0x1008f652c*/
            *(_QWORD *)(v135 + 8 * v59) = v12; /*0x1008f6530*/
            *(_QWORD *)(v58 + 8 * v59 + 8) = v116; /*0x1008f653b*/
            *(_QWORD *)(v58 + 8 * v59 + 16) = v12; /*0x1008f6540*/
            v136 = v57 + 1; /*0x1008f6548*/
            v138 = 0; /*0x1008f654c*/
            v24 = v9; /*0x1008f655a*/
            if ( HIBYTE(v112) ) /*0x1008f655d*/
              goto LABEL_137; /*0x1008f655d*/
          }
        }
        break; /*0x1008f63d3*/
    }
  }
  v24 = v9; /*0x1008f6ac4*/
LABEL_137:
  v79 = v131; /*0x1008f6ac7*/
  v131 = 0x8000000000000000LL; /*0x1008f6ad5*/
  v80 = v124; /*0x1008f6ad9*/
  if ( v79 == 0x8000000000000000LL ) /*0x1008f6ae3*/
  {
    v81 = v139; /*0x1008f6ae5*/
    if ( !v124 ) /*0x1008f6aec*/
      goto LABEL_151; /*0x1008f6aec*/
LABEL_143:
    v85 = v123; /*0x1008f6bba*/
    v86 = v123 + 48 * v80; /*0x1008f6bc9*/
    do /*0x1008f6bd7*/
    {
LABEL_145:
      v87 = *(_QWORD *)(v85 + 40); /*0x1008f6bd9*/
      while ( v87 ) /*0x1008f6be0*/
      {
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x1008f6bf4*/
          *(_QWORD *)(*(_QWORD *)(v85 + 32) + 24 * v87 - 16),
          *(_QWORD *)(*(_QWORD *)(v85 + 32) + 24 * v87 - 8));
        if ( v88 ) /*0x1008f6bfc*/
          break; /*0x1008f6bfc*/
        v89 = *(_QWORD *)(v85 + 40); /*0x1008f6bfe*/
        if ( !v89 ) /*0x1008f6c05*/
          break; /*0x1008f6c05*/
        v87 = v89 - 1; /*0x1008f6c07*/
        *(_QWORD *)(v85 + 40) = v87; /*0x1008f6c0a*/
        v90 = *(_QWORD *)(v85 + 32); /*0x1008f6c0e*/
        v91 = *(_QWORD *)(v90 + 24 * v87); /*0x1008f6c16*/
        if ( 2 * v91 ) /*0x1008f6c1a*/
        {
          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v90 + 24 * v87 + 8), v91, 1); /*0x1008f6c34*/
          goto LABEL_145; /*0x1008f6c39*/
        }
      }
      v85 += 48; /*0x1008f6bd0*/
    }
    while ( v85 != v86 ); /*0x1008f6bd7*/
  }
  else
  {
    v104 = (const __m128i *)v79; /*0x1008f6af7*/
    v105 = v132; /*0x1008f6b09*/
    v106 = (__int64)v133; /*0x1008f6b10*/
    v107 = v134; /*0x1008f6b1b*/
    v108 = v135; /*0x1008f6b26*/
    v109 = v136; /*0x1008f6b31*/
    v81 = v139; /*0x1008f6b3f*/
    if ( v124 == v122 ) /*0x1008f6b43*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v122); /*0x1008f6b4c*/
    v82 = v123; /*0x1008f6b51*/
    v83 = 48 * v80; /*0x1008f6b5c*/
    *(_QWORD *)(v123 + v83 + 40) = v109; /*0x1008f6b67*/
    *(_QWORD *)(v82 + v83 + 32) = v108; /*0x1008f6b73*/
    *(_QWORD *)(v82 + v83 + 24) = v107; /*0x1008f6b7f*/
    *(_QWORD *)(v82 + v83 + 16) = v106; /*0x1008f6b8b*/
    v84 = (__int64)v104; /*0x1008f6b90*/
    *(_QWORD *)(v82 + v83 + 8) = v105; /*0x1008f6b9e*/
    *(_QWORD *)(v82 + v83) = v84; /*0x1008f6ba3*/
    v124 = ++v80; /*0x1008f6baa*/
    if ( v80 ) /*0x1008f6bb4*/
      goto LABEL_143; /*0x1008f6bb4*/
  }
LABEL_151:
  codexmate_lib::core::relay::config_takeover::tidy_blank_lines::ha2f63e114ed499f6((__int64 *)&v104, v81, v24); /*0x1008f6c3b*/
  a1[8] = v124; /*0x1008f6c5b*/
  a1[7] = v123; /*0x1008f6c66*/
  a1[6] = v122; /*0x1008f6c71*/
  a1[5] = v121; /*0x1008f6c7c*/
  v92 = v119; /*0x1008f6c80*/
  a1[4] = v120; /*0x1008f6c8e*/
  a1[3] = v92; /*0x1008f6c92*/
  a1[2] = v106; /*0x1008f6c9d*/
  v93 = (__int64)v104; /*0x1008f6ca1*/
  a1[1] = (__int64)v105; /*0x1008f6caf*/
  *a1 = v93; /*0x1008f6cb3*/
  if ( v131 != 0x8000000000000000LL ) /*0x1008f6cc7*/
  {
    if ( v131 ) /*0x1008f6ccc*/
      *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1); /*0x1008f6cd7*/
    v94 = v135; /*0x1008f6cdc*/
    v95 = v136; /*0x1008f6ce0*/
    if ( v136 ) /*0x1008f6ce7*/
    {
      v96 = (_QWORD *)(v135 + 8); /*0x1008f6ce9*/
      do /*0x1008f6cf7*/
      {
        v97 = *(v96 - 1); /*0x1008f6cf9*/
        if ( v97 ) /*0x1008f6d00*/
          *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v96, v97, 1); /*0x1008f6d0a*/
        v96 += 3; /*0x1008f6cf0*/
        --v95; /*0x1008f6cf4*/
      }
      while ( v95 ); /*0x1008f6cf7*/
    }
    if ( v134 ) /*0x1008f6d18*/
      *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, 24 * v134, 8); /*0x1008f6d2a*/
  }
  if ( v140 ) /*0x1008f6d36*/
    *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v140, 1); /*0x1008f6d40*/
  return *(double *)a5.i64; /*0x1008f6d45*/
}