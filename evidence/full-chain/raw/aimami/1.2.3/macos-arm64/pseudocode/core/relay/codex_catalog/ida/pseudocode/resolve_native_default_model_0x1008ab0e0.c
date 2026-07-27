// __ZN13codexmate_lib4core5relay13codex_catalog28resolve_native_default_model @ 0x1008ab0e0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::resolve_native_default_model::hdcb8d9b9260fe2d4(
        _QWORD *a1,
        __int64 *a2)
{
  double v3; // xmm0_8
  size_t v4; // rsi
  __int128 *v5; // rdi
  size_t v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int8 v12; // bl
  void *v13; // rdx
  __int128 *v14; // r14
  __int128 *v15; // rsi
  __int128 *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r15
  __int128 *v19; // r12
  void *v20; // r13
  __int128 *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  __int64 v25; // r13
  unsigned __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rax
  _BYTE *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r14
  _DWORD *v37; // rax
  __int64 v38; // r14
  _QWORD *v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 (__fastcall *v43)(); // rsi
  size_t v45; // rcx
  size_t v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // r13
  __int64 v49; // r14
  size_t v50; // r12
  size_t v51; // rdx
  size_t v52; // rbx
  __int64 v53; // rbx
  int v54; // eax
  char v55; // cl
  __int64 v57; // r15
  unsigned __int64 v58; // r14
  __int64 v59; // rax
  _BYTE *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  bool v68; // cc
  size_t v69; // rax
  size_t v70; // rdx
  const void *v71; // r14
  __int64 v72; // r15
  __int64 v73; // r12
  __int64 v74; // r13
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdi
  size_t v78; // rbx
  size_t v79; // rdx
  __int64 v80; // rax
  void *v81; // r13
  __int64 v82; // r15
  size_t v83; // r14
  _QWORD *v84; // rax
  __int64 v85; // r12
  __int64 v86; // rdi
  __int64 v87; // r14
  __int128 v88; // [rsp+8h] [rbp-2B8h] BYREF
  __int128 v89; // [rsp+18h] [rbp-2A8h]
  __int128 *v90; // [rsp+28h] [rbp-298h]
  __int128 *v91; // [rsp+30h] [rbp-290h]
  void *v92; // [rsp+38h] [rbp-288h]
  void *v93; // [rsp+40h] [rbp-280h]
  __int128 *v94; // [rsp+48h] [rbp-278h]
  __int128 *v95; // [rsp+50h] [rbp-270h]
  __int128 *v96; // [rsp+58h] [rbp-268h]
  __int128 *v97; // [rsp+60h] [rbp-260h]
  __int64 v98; // [rsp+68h] [rbp-258h]
  _BYTE __dst[144]; // [rsp+70h] [rbp-250h] BYREF
  __m256i v100; // [rsp+100h] [rbp-1C0h] BYREF
  __int128 *v101; // [rsp+120h] [rbp-1A0h]
  __int128 *v102; // [rsp+128h] [rbp-198h]
  void *v103; // [rsp+130h] [rbp-190h]
  void *v104; // [rsp+138h] [rbp-188h]
  __int128 *v105; // [rsp+140h] [rbp-180h]
  __int128 *v106; // [rsp+148h] [rbp-178h]
  __int128 *v107; // [rsp+150h] [rbp-170h]
  __int128 *v108; // [rsp+158h] [rbp-168h]
  __int64 v109; // [rsp+160h] [rbp-160h]
  _BYTE __src[144]; // [rsp+168h] [rbp-158h] BYREF
  __int128 *v111; // [rsp+1F8h] [rbp-C8h]
  __int128 *v112; // [rsp+200h] [rbp-C0h]
  __int128 *v113; // [rsp+208h] [rbp-B8h]
  _BYTE v114[15]; // [rsp+210h] [rbp-B0h]
  __int64 (__fastcall *v115)(); // [rsp+220h] [rbp-A0h] BYREF
  __int64 v116; // [rsp+228h] [rbp-98h]
  __int64 v117; // [rsp+230h] [rbp-90h]
  _QWORD *v118; // [rsp+238h] [rbp-88h]
  unsigned __int64 v119; // [rsp+240h] [rbp-80h]
  _QWORD v120[2]; // [rsp+248h] [rbp-78h]
  __int64 v121; // [rsp+258h] [rbp-68h]
  _QWORD v122[2]; // [rsp+260h] [rbp-60h]
  unsigned __int64 v123; // [rsp+270h] [rbp-50h]
  __int64 v124; // [rsp+278h] [rbp-48h]
  void *__s2; // [rsp+280h] [rbp-40h]
  __int64 v126; // [rsp+288h] [rbp-38h]
  size_t __n; // [rsp+290h] [rbp-30h]

  v118 = a1; /*0x1008ab0f7*/
  v3 = codexmate_lib::core::relay::codex_catalog::load_official_models::h3b14ca3421b9b87d(&v115, a2[1], a2[2]); /*0x1008ab10d*/
  v4 = a2[7]; /*0x1008ab112*/
  v5 = &v88; /*0x1008ab11a*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v88, v4, a2[8]); /*0x1008ab121*/
  v119 = 0x8000000000000000LL; /*0x1008ab130*/
  v6 = v88; /*0x1008ab134*/
  if ( __OFSUB__(-(__int64)v88, 1) ) /*0x1008ab13e*/
  {
    if ( (BYTE8(v88) & 3) != 1 ) /*0x1008ab152*/
    {
LABEL_31:
      v24 = 0x8000000000000000LL; /*0x1008ab4ae*/
      goto LABEL_32; /*0x1008ab4ae*/
    }
    v7 = *((_QWORD *)&v88 + 1) - 1LL; /*0x1008ab158*/
    v8 = *(_QWORD *)(*((_QWORD *)&v88 + 1) - 1LL); /*0x1008ab15c*/
    v9 = *(_QWORD *)(*((_QWORD *)&v88 + 1) + 7LL); /*0x1008ab160*/
    if ( *(_QWORD *)v9 ) /*0x1008ab164*/
      (*(void (__fastcall **)(__int64, double))v9)(v8, v3); /*0x1008ab170*/
    v10 = *(_QWORD *)(v9 + 8); /*0x1008ab172*/
    if ( v10 ) /*0x1008ab17a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x1008ab184*/
    v4 = 24; /*0x1008ab189*/
    v11 = 8; /*0x1008ab18e*/
    v5 = (__int128 *)v7; /*0x1008ab193*/
LABEL_8:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, v11); /*0x1008ab196*/
    goto LABEL_31; /*0x1008ab19b*/
  }
  v124 = *((_QWORD *)&v88 + 1); /*0x1008ab1b5*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x1008ab1b9*/
    &v100,
    *((_QWORD *)&v88 + 1),
    v89);
  __n = v6; /*0x1008ab1be*/
  v12 = v100.i8[16]; /*0x1008ab1d0*/
  v122[0] = *(__int64 *)((char *)&v100.i64[2] + 1); /*0x1008ab1de*/
  *(_QWORD *)((char *)v122 + 7) = v100.i64[3]; /*0x1008ab1e9*/
  v5 = v102; /*0x1008ab1f4*/
  v13 = v104; /*0x1008ab1fb*/
  v14 = v106; /*0x1008ab209*/
  v15 = v107; /*0x1008ab210*/
  v16 = v108; /*0x1008ab217*/
  if ( v100.i64[0] == 2 ) /*0x1008ab222*/
  {
    v120[0] = v122[0]; /*0x1008ab22c*/
    *(_QWORD *)((char *)v120 + 7) = *(_QWORD *)((char *)v122 + 7); /*0x1008ab230*/
    v17 = *(_QWORD *)((char *)v122 + 7); /*0x1008ab238*/
    v122[0] = v120[0]; /*0x1008ab23c*/
    *(_QWORD *)((char *)v122 + 7) = v17; /*0x1008ab240*/
    v18 = (__int64)v101; /*0x1008ab244*/
    v19 = v105; /*0x1008ab247*/
    if ( v100.i64[1] == 2 ) /*0x1008ab24e*/
      goto LABEL_11; /*0x1008ab24e*/
  }
  else
  {
    v123 = (unsigned __int64)v103; /*0x1008ab286*/
    v126 = v109; /*0x1008ab291*/
    __s2 = v104; /*0x1008ab295*/
    v111 = v102; /*0x1008ab299*/
    v121 = (__int64)v107; /*0x1008ab2a0*/
    v112 = v108; /*0x1008ab2b7*/
    v113 = v105; /*0x1008ab2be*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1008ab2c5*/
    v120[0] = v122[0]; /*0x1008ab2ce*/
    *(_QWORD *)((char *)v120 + 7) = *(_QWORD *)((char *)v122 + 7); /*0x1008ab2d6*/
    v88 = v100.i128[0]; /*0x1008ab2da*/
    LOBYTE(v89) = v100.i8[16]; /*0x1008ab2e8*/
    *(_QWORD *)((char *)&v89 + 1) = v120[0]; /*0x1008ab2f2*/
    *((_QWORD *)&v89 + 1) = *(_QWORD *)((char *)v122 + 7); /*0x1008ab2fd*/
    v90 = v101; /*0x1008ab304*/
    v91 = v102; /*0x1008ab312*/
    v92 = v103; /*0x1008ab31d*/
    v93 = v104; /*0x1008ab32c*/
    v94 = v105; /*0x1008ab33a*/
    v95 = v106; /*0x1008ab341*/
    v96 = v107; /*0x1008ab34c*/
    v97 = v108; /*0x1008ab35a*/
    v98 = v109; /*0x1008ab365*/
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x1008ab37a*/
      &v100,
      &v88);
    v12 = v100.i8[8]; /*0x1008ab386*/
    v122[0] = *(__int64 *)((char *)&v100.i64[1] + 1); /*0x1008ab394*/
    *(_QWORD *)((char *)v122 + 7) = v100.i64[2]; /*0x1008ab39f*/
    if ( v100.i64[0] == 2 ) /*0x1008ab3a7*/
    {
      v18 = v100.i64[3]; /*0x1008ab3a9*/
      v5 = v101; /*0x1008ab3b0*/
LABEL_11:
      v14 = v5; /*0x1008ab254*/
      *(_QWORD *)&v114[7] = *(_QWORD *)((char *)v122 + 7); /*0x1008ab25f*/
      *(_QWORD *)v114 = v122[0]; /*0x1008ab266*/
      v4 = __n; /*0x1008ab26d*/
      if ( !__n ) /*0x1008ab274*/
        goto LABEL_30; /*0x1008ab274*/
LABEL_29:
      v5 = (__int128 *)v124; /*0x1008ab497*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v4, 1); /*0x1008ab4a0*/
      goto LABEL_30; /*0x1008ab4a0*/
    }
    v13 = v103; /*0x1008ab3c3*/
    v19 = (__int128 *)v104; /*0x1008ab3ca*/
    v14 = v105; /*0x1008ab3d1*/
    v15 = v106; /*0x1008ab3d8*/
    v16 = v107; /*0x1008ab3df*/
    v18 = v100.i64[3]; /*0x1008ab3e6*/
    v5 = v101; /*0x1008ab3ed*/
  }
  v20 = v13; /*0x1008ab3fe*/
  if ( v18 ) /*0x1008ab404*/
  {
    v21 = v15; /*0x1008ab40b*/
    v22 = v18; /*0x1008ab40e*/
    v18 = (__int64)v16; /*0x1008ab411*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v22, 1); /*0x1008ab414*/
    v16 = (__int128 *)v18; /*0x1008ab419*/
    v15 = v21; /*0x1008ab41c*/
  }
  if ( 2LL * (_QWORD)v15 ) /*0x1008ab41f*/
  {
    v5 = v16; /*0x1008ab438*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1008ab43b*/
    if ( !v14 ) /*0x1008ab443*/
      goto LABEL_26; /*0x1008ab443*/
  }
  else if ( !v14 ) /*0x1008ab42f*/
  {
    goto LABEL_26; /*0x1008ab42f*/
  }
  v18 = (__int64)v19 + 8; /*0x1008ab445*/
  do /*0x1008ab457*/
  {
    v23 = *(_QWORD *)(v18 - 8); /*0x1008ab459*/
    if ( v23 ) /*0x1008ab460*/
    {
      v5 = *(__int128 **)v18; /*0x1008ab462*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v18, v23, 1); /*0x1008ab46a*/
    }
    v18 += 24; /*0x1008ab450*/
    v14 = (__int128 *)((char *)v14 - 1); /*0x1008ab454*/
  }
  while ( v14 ); /*0x1008ab457*/
LABEL_26:
  v12 = 7; /*0x1008ab471*/
  if ( v20 ) /*0x1008ab476*/
  {
    v5 = v19; /*0x1008ab486*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24LL * (_QWORD)v20, 8); /*0x1008ab489*/
  }
  v4 = __n; /*0x1008ab48e*/
  if ( __n ) /*0x1008ab495*/
    goto LABEL_29; /*0x1008ab495*/
LABEL_30:
  if ( v12 == 7 ) /*0x1008ab4a8*/
    goto LABEL_31; /*0x1008ab4a8*/
  *((_QWORD *)&v88 + 1) = *(_QWORD *)&v114[7]; /*0x1008ab70c*/
  *(_QWORD *)((char *)&v88 + 1) = *(_QWORD *)v114; /*0x1008ab713*/
  *(_QWORD *)&v89 = v18; /*0x1008ab71a*/
  *((_QWORD *)&v89 + 1) = v14; /*0x1008ab721*/
  LOBYTE(v88) = v12; /*0x1008ab728*/
  if ( v12 != 6 ) /*0x1008ab731*/
    goto LABEL_111; /*0x1008ab731*/
  v45 = *((_QWORD *)&v88 + 1); /*0x1008ab737*/
  if ( !*((_QWORD *)&v88 + 1) ) /*0x1008ab741*/
    goto LABEL_111; /*0x1008ab741*/
  v126 = v18; /*0x1008ab747*/
LABEL_66:
  v46 = v45 + 360; /*0x1008ab74b*/
  v47 = *(unsigned __int16 *)(v45 + 626); /*0x1008ab752*/
  __n = v45; /*0x1008ab759*/
  v48 = (_QWORD *)(v45 - 8); /*0x1008ab75d*/
  v124 = v47; /*0x1008ab761*/
  v49 = 3LL * (unsigned int)(8 * v47); /*0x1008ab76c*/
  v18 = -1; /*0x1008ab770*/
  do /*0x1008ab7d4*/
  {
    if ( !v49 ) /*0x1008ab783*/
    {
      v18 = v124; /*0x1008ab7e2*/
LABEL_76:
      if ( v126-- == 0 ) /*0x1008ab7e6*/
        goto LABEL_111; /*0x1008ab7ef*/
      v45 = *(_QWORD *)(__n + 8 * v18 + 632); /*0x1008ab7f5*/
      goto LABEL_66; /*0x1008ab7fd*/
    }
    v50 = v46 + 24; /*0x1008ab785*/
    v4 = *(_QWORD *)(v46 + 8); /*0x1008ab789*/
    v51 = *(_QWORD *)(v46 + 16); /*0x1008ab78d*/
    v52 = v51 - 5; /*0x1008ab794*/
    if ( v51 >= 5 ) /*0x1008ab79d*/
      v51 = 5; /*0x1008ab79d*/
    v53 = -(__int64)v52; /*0x1008ab7a1*/
    v54 = memcmp("model", (const void *)v4, v51); /*0x1008ab7ab*/
    if ( v54 ) /*0x1008ab7b4*/
      v53 = v54; /*0x1008ab7b4*/
    v55 = (v53 > 0) - (v53 < 0); /*0x1008ab7c1*/
    v48 += 4; /*0x1008ab7c3*/
    ++v18; /*0x1008ab7c7*/
    v49 -= 24; /*0x1008ab7ca*/
    v46 = v50; /*0x1008ab7ce*/
  }
  while ( v55 == 1 ); /*0x1008ab7d4*/
  if ( v55 ) /*0x1008ab7db*/
    goto LABEL_76; /*0x1008ab7db*/
  if ( !*((_BYTE *)v48 - 24) /*0x1008ab994*/
    && (v4 = *v48,
        v71 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(v48 - 1), *v48),
        v71 != nullptr && v70 != 0) )
  {
    v78 = v70; /*0x1008abb14*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v100, v70, 0, 1, 1); /*0x1008abb19*/
    v79 = v78; /*0x1008abb1e*/
    v33 = v100.i64[1]; /*0x1008abb21*/
    if ( v100.i8[0] ) /*0x1008abb2f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v100.i64[1], v100.i64[2]); /*0x1008abc09*/
    v18 = v100.i64[2]; /*0x1008abb35*/
    v4 = (size_t)v71; /*0x1008abb3f*/
    __n = v79; /*0x1008abb42*/
    memcpy((void *)v100.i64[2], v71, v79); /*0x1008abb46*/
  }
  else
  {
LABEL_111:
    v33 = 0x8000000000000000LL; /*0x1008ab99f*/
  }
  __s2 = (void *)v18; /*0x1008ab9a9*/
  v5 = &v88; /*0x1008ab9ad*/
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v88); /*0x1008ab9b4*/
  v24 = 0x8000000000000000LL; /*0x1008ab9c3*/
  if ( v33 != 0x8000000000000000LL ) /*0x1008ab9c9*/
  {
    v5 = (__int128 *)__s2; /*0x1008ab9d4*/
    if ( __n >= 0xD && !(*(_QWORD *)__s2 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)__s2 + 5) ^ 0x5F79616C65725F69LL) ) /*0x1008ab9f8*/
    {
      if ( !v33 ) /*0x1008ababb*/
        goto LABEL_31; /*0x1008ababb*/
      v11 = 1; /*0x1008abac1*/
      v4 = v33; /*0x1008abac6*/
      goto LABEL_8; /*0x1008abac9*/
    }
    v72 = v116; /*0x1008ab9fe*/
    v73 = v117; /*0x1008aba05*/
    if ( v117 ) /*0x1008aba0f*/
    {
      v74 = 32 * v117; /*0x1008aba18*/
      v126 = v116; /*0x1008aba23*/
      while ( 1 ) /*0x1008aba3a*/
      {
        v4 = 4; /*0x1008aba3a*/
        v5 = (__int128 *)&anon_10420c9971c21f44d230d15b39fb3fec_727; /*0x1008aba3f*/
        v75 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008aba45*/
                &anon_10420c9971c21f44d230d15b39fb3fec_727,
                4,
                v72);
        if ( v75 ) /*0x1008aba4d*/
        {
          if ( *(_BYTE *)v75 == 3 && *(_QWORD *)(v75 + 24) == __n ) /*0x1008aba5c*/
          {
            v5 = *(__int128 **)(v75 + 16); /*0x1008aba5e*/
            v4 = (size_t)__s2; /*0x1008aba62*/
            if ( !memcmp(v5, __s2, __n) ) /*0x1008aba6a*/
              break; /*0x1008aba6a*/
          }
        }
        v72 += 32; /*0x1008aba30*/
        v74 -= 32; /*0x1008aba34*/
        if ( !v74 ) /*0x1008aba38*/
          goto LABEL_128; /*0x1008aba38*/
      }
LABEL_131:
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1008abad3*/
      {
        v36 = 0; /*0x1008abad5*/
        goto LABEL_108; /*0x1008abadb*/
      }
      if ( __n ) /*0x1008abb50*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, v4); /*0x1008abb52*/
        v36 = 1; /*0x1008abb57*/
        v80 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1008abb66*/
        v81 = __s2; /*0x1008abb6e*/
        if ( !v80 ) /*0x1008abb72*/
        {
          v33 = __n; /*0x1008abc13*/
          goto LABEL_108; /*0x1008abc17*/
        }
        v82 = v80; /*0x1008abb78*/
      }
      else
      {
        v82 = 1; /*0x1008abb7d*/
        v81 = __s2; /*0x1008abb83*/
      }
      v83 = __n; /*0x1008abb8d*/
      memcpy((void *)v82, v81, __n); /*0x1008abb94*/
      v84 = v118; /*0x1008abb99*/
      *v118 = v83; /*0x1008abba0*/
      v84[1] = v82; /*0x1008abba3*/
      v84[2] = v83; /*0x1008abba7*/
      if ( v33 ) /*0x1008abbae*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v33, 1); /*0x1008abbbb*/
      v85 = v73 + 1; /*0x1008abbc0*/
      v86 = v126; /*0x1008abbc3*/
      v87 = v126; /*0x1008abbc7*/
      while ( v85 != 1 ) /*0x1008abbd4*/
      {
        --v85; /*0x1008abbda*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v86); /*0x1008abbdd*/
        v86 += 32; /*0x1008abbe2*/
      }
      v42 = v87; /*0x1008abbe7*/
      v43 = v115; /*0x1008abbea*/
      if ( v115 ) /*0x1008abbf4*/
        goto LABEL_61; /*0x1008abbf4*/
      return v118; /*0x1008abbf4*/
    }
    if ( __n >= 4 ) /*0x1008abaa2*/
    {
      v126 = v116; /*0x1008abaa4*/
      if ( *(_DWORD *)__s2 == 762605671 ) /*0x1008abaae*/
        goto LABEL_131; /*0x1008abaae*/
    }
LABEL_128:
    v24 = v33; /*0x1008abab0*/
  }
LABEL_32:
  v123 = v24; /*0x1008ab4b8*/
  v126 = v116; /*0x1008ab4c3*/
  v25 = v117; /*0x1008ab4c7*/
  if ( v117 ) /*0x1008ab4d1*/
  {
    v26 = 32 * v117 - 32; /*0x1008ab4de*/
    v124 = 0x7FFFFFFFFFFFFFFFLL; /*0x1008ab4f6*/
    v27 = v126; /*0x1008ab4fa*/
    while ( 1 ) /*0x1008ab532*/
    {
      v4 = 10; /*0x1008ab532*/
      v5 = (__int128 *)"visibility"; /*0x1008ab537*/
      v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008ab53d*/
              "visibility",
              10,
              v27);
      if ( !v29 || *(_BYTE *)v29 != 3 || *(_QWORD *)(v29 + 24) != 4 || **(_DWORD **)(v29 + 16) != 1701079400 ) /*0x1008ab55d*/
      {
        v4 = 16; /*0x1008ab560*/
        v5 = (__int128 *)&unk_101674A70; /*0x1008ab565*/
        v30 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008ab56f*/
                         &unk_101674A70,
                         16,
                         v27);
        if ( !v30 || *v30 != 1 || v30[1] == 1 ) /*0x1008ab582*/
        {
          v4 = 4; /*0x1008ab590*/
          v5 = (__int128 *)&anon_10420c9971c21f44d230d15b39fb3fec_727; /*0x1008ab595*/
          v31 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008ab59f*/
                  &anon_10420c9971c21f44d230d15b39fb3fec_727,
                  4,
                  v27);
          if ( v31 ) /*0x1008ab5a7*/
          {
            if ( *(_BYTE *)v31 == 3 ) /*0x1008ab5b0*/
            {
              v5 = *(__int128 **)(v31 + 16); /*0x1008ab5b6*/
              v4 = *(_QWORD *)(v31 + 24); /*0x1008ab5ba*/
              __n = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v5, v4); /*0x1008ab5c3*/
              v33 = v32; /*0x1008ab5c7*/
              if ( v32 ) /*0x1008ab5cd*/
              {
                v4 = 8; /*0x1008ab5d3*/
                v5 = (__int128 *)&unk_101674AB8; /*0x1008ab5d8*/
                v34 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008ab5e2*/
                        &unk_101674AB8,
                        8,
                        v27);
                v28 = v124; /*0x1008ab5e7*/
                if ( v34 ) /*0x1008ab5ee*/
                {
                  v28 = v124; /*0x1008ab5f7*/
                  if ( *(_BYTE *)v34 == 2 ) /*0x1008ab5fb*/
                  {
                    v35 = *(_QWORD *)(v34 + 8); /*0x1008ab601*/
                    if ( v35 ) /*0x1008ab608*/
                    {
                      v28 = v124; /*0x1008ab60e*/
                      if ( (_DWORD)v35 == 1 ) /*0x1008ab615*/
                        v28 = *(_QWORD *)(v34 + 16); /*0x1008ab61b*/
                    }
                    else
                    {
                      v28 = *(_QWORD *)(v34 + 16); /*0x1008ab500*/
                      if ( v28 < 0 ) /*0x1008ab507*/
                        v28 = v124; /*0x1008ab507*/
                    }
                  }
                }
                v121 = v28; /*0x1008ab50c*/
                if ( __n ) /*0x1008ab515*/
                  break; /*0x1008ab515*/
              }
            }
          }
        }
      }
      v27 += 32; /*0x1008ab520*/
      v26 -= 32LL; /*0x1008ab524*/
      if ( v26 == -32 ) /*0x1008ab52c*/
        goto LABEL_53; /*0x1008ab52c*/
    }
    if ( v26 ) /*0x1008ab805*/
    {
      v57 = v27 + 32; /*0x1008ab80b*/
      v58 = v26 >> 5; /*0x1008ab80f*/
      --v119; /*0x1008ab813*/
      do /*0x1008ab827*/
      {
        v4 = 10; /*0x1008ab82d*/
        v5 = (__int128 *)"visibility"; /*0x1008ab832*/
        v59 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008ab83c*/
                "visibility",
                10,
                v57);
        if ( !v59 || *(_BYTE *)v59 != 3 || *(_QWORD *)(v59 + 24) != 4 || **(_DWORD **)(v59 + 16) != 1701079400 ) /*0x1008ab85c*/
        {
          v4 = 16; /*0x1008ab860*/
          v5 = (__int128 *)&unk_101674A70; /*0x1008ab865*/
          v60 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008ab86f*/
                           &unk_101674A70,
                           16,
                           v57);
          if ( !v60 || *v60 != 1 || v60[1] == 1 ) /*0x1008ab882*/
          {
            v4 = 4; /*0x1008ab890*/
            v5 = (__int128 *)&anon_10420c9971c21f44d230d15b39fb3fec_727; /*0x1008ab895*/
            v61 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008ab89f*/
                    &anon_10420c9971c21f44d230d15b39fb3fec_727,
                    4,
                    v57);
            if ( v61 ) /*0x1008ab8a7*/
            {
              if ( *(_BYTE *)v61 == 3 ) /*0x1008ab8b0*/
              {
                v5 = *(__int128 **)(v61 + 16); /*0x1008ab8b6*/
                v4 = *(_QWORD *)(v61 + 24); /*0x1008ab8ba*/
                v124 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v5, v4); /*0x1008ab8c3*/
                v63 = v62; /*0x1008ab8c7*/
                if ( v62 ) /*0x1008ab8cd*/
                {
                  v5 = (__int128 *)&unk_101674AB8; /*0x1008ab8d8*/
                  v64 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008ab8e2*/
                          &unk_101674AB8,
                          8,
                          v57);
                  v4 = v119; /*0x1008ab8e7*/
                  v65 = v119; /*0x1008ab8eb*/
                  if ( v64 ) /*0x1008ab8f1*/
                  {
                    v65 = v119; /*0x1008ab8f6*/
                    if ( *(_BYTE *)v64 == 2 ) /*0x1008ab8f9*/
                    {
                      v66 = *(_QWORD *)(v64 + 8); /*0x1008ab8fb*/
                      v65 = v119; /*0x1008ab8ff*/
                      if ( v66 != 2 ) /*0x1008ab906*/
                      {
                        if ( (_DWORD)v66 == 1 ) /*0x1008ab90b*/
                        {
                          v65 = *(_QWORD *)(v64 + 16); /*0x1008ab90d*/
                        }
                        else
                        {
                          v65 = *(_QWORD *)(v64 + 16); /*0x1008ab913*/
                          if ( v65 < 0 ) /*0x1008ab91a*/
                            v65 = v119; /*0x1008ab91a*/
                        }
                      }
                    }
                  }
                  if ( v124 ) /*0x1008ab926*/
                  {
                    v67 = v121; /*0x1008ab92c*/
                    v68 = v121 <= v65; /*0x1008ab930*/
                    if ( v121 >= v65 ) /*0x1008ab933*/
                      v67 = v65; /*0x1008ab933*/
                    v121 = v67; /*0x1008ab937*/
                    v69 = __n; /*0x1008ab93b*/
                    if ( !v68 ) /*0x1008ab93f*/
                      v69 = v124; /*0x1008ab93f*/
                    __n = v69; /*0x1008ab943*/
                    if ( !v68 ) /*0x1008ab947*/
                      v33 = v63; /*0x1008ab947*/
                  }
                }
              }
            }
          }
        }
        v57 += 32; /*0x1008ab820*/
        --v58; /*0x1008ab824*/
      }
      while ( v58 ); /*0x1008ab827*/
    }
    if ( v33 < 0 ) /*0x1008ab953*/
    {
      v36 = 0; /*0x1008ab959*/
      goto LABEL_108; /*0x1008ab959*/
    }
    if ( !v33 ) /*0x1008aba75*/
    {
      v77 = 1; /*0x1008abae0*/
      goto LABEL_134; /*0x1008abae0*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, v4); /*0x1008aba77*/
    v36 = 1; /*0x1008aba7c*/
    v76 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v33, 1); /*0x1008aba8a*/
    if ( v76 ) /*0x1008aba92*/
    {
      v77 = v76; /*0x1008aba98*/
LABEL_134:
      v38 = v33; /*0x1008abae5*/
      memcpy((void *)v77, (const void *)__n, v33); /*0x1008abaf2*/
      v37 = (_DWORD *)v77; /*0x1008abaf7*/
      goto LABEL_55; /*0x1008abafa*/
    }
LABEL_108:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v36, v33); /*0x1008ab960*/
  }
LABEL_53:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, v4); /*0x1008ab624*/
  v33 = 7; /*0x1008ab629*/
  v36 = 1; /*0x1008ab62e*/
  v37 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1008ab63e*/
  if ( !v37 ) /*0x1008ab646*/
    goto LABEL_108; /*0x1008ab646*/
  *(_DWORD *)((char *)v37 + 3) = 892220717; /*0x1008ab64c*/
  *v37 = 762605671; /*0x1008ab653*/
  v38 = 7; /*0x1008ab659*/
LABEL_55:
  v39 = v118; /*0x1008ab65f*/
  *v118 = v38; /*0x1008ab666*/
  v39[1] = v37; /*0x1008ab669*/
  v39[2] = v38; /*0x1008ab66d*/
  if ( 2 * v123 ) /*0x1008ab675*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v123, 1); /*0x1008ab68b*/
    v126 = v116; /*0x1008ab697*/
    v25 = v117; /*0x1008ab69b*/
  }
  v40 = v25 + 1; /*0x1008ab6a2*/
  v41 = v126; /*0x1008ab6a5*/
  while ( v40 != 1 ) /*0x1008ab6b4*/
  {
    --v40; /*0x1008ab6ba*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v41); /*0x1008ab6bd*/
    v41 += 32; /*0x1008ab6c2*/
  }
  v42 = v126; /*0x1008ab6c7*/
  v43 = v115; /*0x1008ab6cb*/
  if ( v115 ) /*0x1008ab6d5*/
LABEL_61:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, 32LL * (_QWORD)v43, 8); /*0x1008ab6d7*/
  return v118; /*0x1008ab6ec*/
}