// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_diagnostic::fix_config_toml_syntax_text::h5ca9421c872ad1ef; addr: 0x100870bf0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:21Z
_QWORD *__fastcall codexmate_lib::core::relay::codex_diagnostic::fix_config_toml_syntax_text::h5ca9421c872ad1ef(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdx
  _QWORD *v18; // r9
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r14
  char *v23; // rax
  char *v24; // r15
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r12
  __int64 v28; // rax
  size_t v29; // rbx
  _BYTE *v30; // r12
  __int64 v31; // rax
  bool v32; // cf
  size_t v33; // rax
  _BYTE *v34; // rcx
  _BYTE *v35; // r15
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdi
  size_t v45; // rbx
  size_t v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r15
  __int64 v59; // rbx
  char *v60; // r14
  char *v61; // rax
  __int64 v62; // rbx
  __int64 v63; // r13
  __int64 v64; // rdx
  size_t v65; // rdx
  __int64 v66; // r12
  size_t v67; // r13
  __int64 v68; // rbx
  __int64 v69; // r15
  const void *v70; // rsi
  char *v71; // r12
  __int64 v72; // r13
  __int64 v73; // r13
  __int64 v74; // r15
  _QWORD *v75; // rbx
  __int64 v76; // rsi
  unsigned __int64 v77; // rbx
  _QWORD *v78; // r14
  __int64 v79; // rsi
  void *v80; // rbx
  __int64 v81; // r14
  __int64 v82; // rdx
  __int64 *v83; // rdi
  __int64 v84; // r12
  __int64 v85; // rsi
  __int64 *v86; // r14
  __int64 v87; // r15
  __int64 **v88; // r12
  void *v89; // rax
  void *v90; // r15
  __int64 v91; // rdx
  _QWORD *v92; // rax
  void *v94; // r14
  size_t v95; // rdx
  size_t v96; // r15
  void *v97; // rdi
  __int64 v98; // rsi
  const void *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r15
  __int64 v102; // rax
  void *v103; // r14
  const void *v104; // rsi
  size_t v105; // rdx
  _QWORD *v106; // rax
  __int64 v107; // rax
  _BYTE v108[104]; // [rsp+8h] [rbp-3D8h] BYREF
  _BYTE __src[144]; // [rsp+70h] [rbp-370h] BYREF
  char *v110; // [rsp+100h] [rbp-2E0h]
  char *v111; // [rsp+108h] [rbp-2D8h]
  __int64 v112; // [rsp+110h] [rbp-2D0h]
  char *v113; // [rsp+118h] [rbp-2C8h]
  __int64 v114; // [rsp+120h] [rbp-2C0h] BYREF
  _QWORD v115[12]; // [rsp+128h] [rbp-2B8h] BYREF
  _BYTE __dst[144]; // [rsp+188h] [rbp-258h] BYREF
  _QWORD v117[12]; // [rsp+218h] [rbp-1C8h] BYREF
  __int64 v118; // [rsp+278h] [rbp-168h]
  _QWORD v119[12]; // [rsp+280h] [rbp-160h] BYREF
  __int64 v120; // [rsp+2E0h] [rbp-100h] BYREF
  __int64 v121; // [rsp+2E8h] [rbp-F8h]
  __int64 v122; // [rsp+2F0h] [rbp-F0h]
  char *v123; // [rsp+2F8h] [rbp-E8h]
  __int64 v124; // [rsp+300h] [rbp-E0h]
  __int64 v125; // [rsp+308h] [rbp-D8h]
  char *v126; // [rsp+310h] [rbp-D0h]
  _QWORD v127[12]; // [rsp+318h] [rbp-C8h] BYREF
  __int64 v128; // [rsp+378h] [rbp-68h] BYREF
  __int64 v129; // [rsp+380h] [rbp-60h]
  _QWORD *v130; // [rsp+388h] [rbp-58h]
  __int64 v131; // [rsp+390h] [rbp-50h] BYREF
  char *v132; // [rsp+398h] [rbp-48h]
  __int64 v133; // [rsp+3A0h] [rbp-40h]
  __int64 v134; // [rsp+3A8h] [rbp-38h]
  __int64 v135; // [rsp+3B0h] [rbp-30h]

  v3 = a1; /*0x100870c07*/
  v4 = *(_QWORD *)(a2 + 64); /*0x100870c0e*/
  v124 = *(_QWORD *)(a2 + 56); /*0x100870c19*/
  codexmate_lib::core::relay::codex_diagnostic::read_config_or_empty::had6e43715af5d666(&v114, v124, v4); /*0x100870c23*/
  v5 = v114; /*0x100870c28*/
  v6 = v115[0]; /*0x100870c2f*/
  v7 = v115[1]; /*0x100870c36*/
  v8 = v115[2]; /*0x100870c3d*/
  if ( v114 != 11 ) /*0x100870c48*/
  {
    a1[11] = v115[10]; /*0x100870d30*/
    a1[10] = v115[9]; /*0x100870d3c*/
    a1[9] = v115[8]; /*0x100870d48*/
    a1[8] = v115[7]; /*0x100870d54*/
    a1[7] = v115[6]; /*0x100870d60*/
    a1[6] = v115[5]; /*0x100870d6c*/
    v12 = v115[3]; /*0x100870d71*/
    a1[5] = v115[4]; /*0x100870d7f*/
    a1[4] = v12; /*0x100870d84*/
    a1[1] = v6; /*0x100870d89*/
    a1[2] = v7; /*0x100870d8e*/
    a1[3] = v8; /*0x100870d93*/
    *a1 = v5; /*0x100870d98*/
    return v3; /*0x100870d9c*/
  }
  v125 = v4; /*0x100870c4e*/
  v128 = v115[1]; /*0x100870c5c*/
  codexmate_lib::core::relay::codex_writer::strip_all_managed_blocks::h8f68f82138157f3d(&v120, v115[1], v115[2]); /*0x100870c60*/
  v9 = v122; /*0x100870c6c*/
  v135 = v121; /*0x100870c7a*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x100870c81*/
    v108,
    v121,
    v122);
  qmemcpy(v119, &v108[8], sizeof(v119)); /*0x100870ca0*/
  if ( *(_QWORD *)v108 == 2 ) /*0x100870ca7*/
  {
    qmemcpy(v117, v119, sizeof(v117)); /*0x100870cc3*/
    qmemcpy(v127, v117, sizeof(v127)); /*0x100870cd5*/
    v130 = a1; /*0x100870cdf*/
    if ( LODWORD(v127[0]) == 2 ) /*0x100870ce3*/
      goto LABEL_4; /*0x100870ce3*/
    goto LABEL_10; /*0x100870ce3*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x100870db4*/
  qmemcpy(v117, v119, sizeof(v117)); /*0x100870dcf*/
  v114 = *(_QWORD *)v108; /*0x100870dd2*/
  qmemcpy(v115, v117, sizeof(v115)); /*0x100870de8*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::hdd6c0cc269136a64( /*0x100870df9*/
    v108,
    &v114);
  if ( *(_DWORD *)v108 == 2 ) /*0x100870e05*/
  {
    v127[4] = *(_QWORD *)&v108[32]; /*0x100870e0e*/
    v127[3] = *(_QWORD *)&v108[24]; /*0x100870e1c*/
    v127[2] = *(_QWORD *)&v108[16]; /*0x100870e31*/
    v127[1] = *(_QWORD *)&v108[8]; /*0x100870e38*/
    v127[0] = 2; /*0x100870e3f*/
    v130 = a1; /*0x100870e51*/
  }
  else
  {
    qmemcpy(v127, v108, sizeof(v127)); /*0x100870e70*/
    v130 = a1; /*0x100870e7a*/
    if ( LODWORD(v127[0]) != 2 ) /*0x100870e7e*/
    {
LABEL_10:
      if ( v127[3] ) /*0x100870e8e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127[4], v127[3], 1); /*0x100870e9c*/
      v134 = v6; /*0x100870ea1*/
      if ( !__OFSUB__(-v127[9], 1) && v127[9] ) /*0x100870eb1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127[10], v127[9], 1); /*0x100870ebc*/
      v13 = v127[7]; /*0x100870ec1*/
      v14 = v127[8]; /*0x100870ec8*/
      if ( v127[8] ) /*0x100870ed2*/
      {
        v15 = (_QWORD *)(v127[7] + 8LL); /*0x100870ed4*/
        do /*0x100870ee7*/
        {
          v16 = *(v15 - 1); /*0x100870ee9*/
          if ( v16 ) /*0x100870ef1*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v15, v16, 1); /*0x100870efc*/
          v15 += 3; /*0x100870ee0*/
          --v14; /*0x100870ee4*/
        }
        while ( v14 ); /*0x100870ee7*/
      }
      if ( v127[6] ) /*0x100870f0d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24LL * v127[6], 8); /*0x100870f1f*/
      v6 = v134; /*0x100870f2e*/
      codexmate_lib::core::relay::codex_diagnostic::backup_config_before_fix::h3ff8ee72b3285bf0(&v114, a2); /*0x100870f32*/
      v18 = v130; /*0x100870f37*/
      v19 = v114; /*0x100870f3b*/
      v20 = v115[0]; /*0x100870f42*/
      v21 = v115[1]; /*0x100870f49*/
      if ( v114 != 11 ) /*0x100870f54*/
      {
        v48 = v115[2]; /*0x1008712ff*/
        v49 = v115[3]; /*0x100871306*/
        v130[11] = v115[10]; /*0x100871314*/
        v18[10] = v115[9]; /*0x10087131f*/
        v18[9] = v115[8]; /*0x10087132a*/
        v18[8] = v115[7]; /*0x100871335*/
        v18[7] = v115[6]; /*0x100871340*/
        v18[6] = v115[5]; /*0x10087134b*/
        v18[5] = v115[4]; /*0x100871356*/
        v18[4] = v49; /*0x10087135a*/
        v18[1] = v20; /*0x10087135e*/
        v18[2] = v21; /*0x100871362*/
        v18[3] = v48; /*0x100871366*/
        *v18 = v19; /*0x10087136a*/
        goto LABEL_131; /*0x10087136d*/
      }
      if ( 2LL * v115[0] ) /*0x100870f5a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115[1], v115[0], 1); /*0x100870f6c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v20, v17); /*0x100870f71*/
      v22 = 226; /*0x100870f76*/
      v23 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(226, 1); /*0x100870f86*/
      if ( !v23 ) /*0x100870f8e*/
LABEL_145:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22); /*0x100871c83*/
      v24 = v23; /*0x100870f94*/
      memcpy(v23, &unk_10178832F, 0xE2u); /*0x100870fa6*/
      v131 = 226; /*0x100870fab*/
      v132 = v24; /*0x100870fb3*/
      v133 = 226; /*0x100870fb7*/
      v117[0] = 0; /*0x100870fbf*/
      v117[1] = 8; /*0x100870fca*/
      v117[2] = 0; /*0x100870fd5*/
      v119[0] = 0; /*0x100870fe0*/
      v119[1] = 1; /*0x100870feb*/
      v119[2] = 0; /*0x100870ff6*/
      LOBYTE(v127[0]) = 2; /*0x100871001*/
      v114 = 0; /*0x100871008*/
      v115[0] = v9; /*0x100871013*/
      v115[1] = v135; /*0x10087101e*/
      v115[2] = v9; /*0x100871025*/
      v115[3] = 0; /*0x10087102c*/
      v115[4] = v9; /*0x100871037*/
      v115[5] = 0xA0000000ALL; /*0x100871048*/
      LOBYTE(v115[6]) = 1; /*0x10087104f*/
      LOWORD(v115[7]) = 0; /*0x100871056*/
      v25 = 0; /*0x10087105f*/
      v26 = 1; /*0x100871062*/
      while ( 1 ) /*0x100871070*/
      {
        v27 = v115[1]; /*0x100871070*/
        _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100871085*/
          v108,
          &v115[1]);
        if ( *(_DWORD *)v108 != 1 ) /*0x100871091*/
          break; /*0x100871091*/
        v28 = v114; /*0x10087109a*/
        v114 = *(_QWORD *)&v108[16]; /*0x1008710a1*/
        v29 = *(_QWORD *)&v108[16] - v28; /*0x1008710a8*/
        v30 = (_BYTE *)(v28 + v27); /*0x1008710ab*/
        v31 = *(_QWORD *)&v108[16] - v28; /*0x1008710ae*/
        v32 = v31 == 0; /*0x1008710b1*/
        v33 = v31 - 1; /*0x1008710b1*/
        v135 = v26; /*0x1008710b5*/
        if ( v32 ) /*0x1008710b9*/
          goto LABEL_40; /*0x1008710b9*/
LABEL_33:
        if ( v30[v33] == 10 ) /*0x10087110f*/
        {
          v29 -= 2LL; /*0x100871111*/
          if ( !v33 || (v34 = v30, v30[v29] != 13) ) /*0x100871122*/
            v34 = nullptr; /*0x100871124*/
          if ( v34 ) /*0x100871129*/
            v30 = v34; /*0x10087112d*/
          else
            v29 = v33; /*0x100871129*/
        }
LABEL_40:
        v35 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v30, v29); /*0x100871131*/
        v37 = v36; /*0x10087113f*/
        if ( ((unsigned __int8)codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural::hd2d9874b7367456a( /*0x100871175*/
                                 v127,
                                 v30,
                                 v29)
            & (v36 != 0)) == 1
          && *v35 == 91
          && v35[v37 - 1] == 93 )
        {
          if ( v37 == 1 || (char)v35[1] <= -65 ) /*0x10087118c*/
            core::str::slice_error_fail::h480e51fbd8b15eba( /*0x100871c7c*/
              v35,
              v37,
              1,
              v37 - 1,
              &anon_0868f19ff3e9f3569e732f60bdb020cc_222);
          v38 = v135; /*0x100871196*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v135, v25); /*0x10087119c*/
          if ( v39 ) /*0x1008711a4*/
          {
            v40 = v119[0]; /*0x1008711aa*/
            v119[0] = 0; /*0x1008711b1*/
            v119[1] = 1; /*0x1008711bc*/
            v119[2] = 0; /*0x1008711c7*/
            v41 = v117[2]; /*0x1008711d2*/
            if ( v117[2] == v117[0] ) /*0x1008711e0*/
              alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v117); /*0x1008711e9*/
            v42 = v117[1]; /*0x1008711ee*/
            v43 = 3 * v41; /*0x1008711f5*/
            *(_QWORD *)(v117[1] + 8 * v43) = v40; /*0x1008711f9*/
            *(_QWORD *)(v42 + 8 * v43 + 8) = v135; /*0x100871201*/
            *(_QWORD *)(v42 + 8 * v43 + 16) = v25; /*0x100871206*/
            v117[2] = v41 + 1; /*0x10087120e*/
            v44 = 1; /*0x100871215*/
            v25 = 0; /*0x10087121a*/
            if ( v29 <= v119[0] ) /*0x10087122a*/
              goto LABEL_51; /*0x10087122a*/
LABEL_56:
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1008712a4*/
              v119,
              v25,
              v29,
              1,
              1);
            v44 = v119[1]; /*0x1008712c1*/
            v25 = v119[2]; /*0x1008712c8*/
            goto LABEL_51; /*0x1008712cf*/
          }
          v44 = v38; /*0x100871292*/
          if ( v29 > v119[0] - v25 ) /*0x1008712a2*/
            goto LABEL_56; /*0x1008712a2*/
        }
        else
        {
          v44 = v135; /*0x100871230*/
          if ( v29 > v119[0] - v25 ) /*0x100871241*/
            goto LABEL_56; /*0x100871241*/
        }
LABEL_51:
        memcpy((void *)(v25 + v44), v30, v29); /*0x100871243*/
        v45 = v25 + v29; /*0x100871251*/
        v119[2] = v45; /*0x100871254*/
        v46 = v45; /*0x10087125b*/
        if ( v119[0] == v45 ) /*0x100871265*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(v119, v45, 1, 1, 1); /*0x1008712ee*/
          v46 = v119[2]; /*0x1008712f3*/
        }
        v26 = v119[1]; /*0x100871267*/
        *(_BYTE *)(v119[1] + v46) = 10; /*0x10087126e*/
        v47 = v45 + 1; /*0x100871273*/
        v119[2] = v47; /*0x100871276*/
        v25 = v47; /*0x100871284*/
        if ( BYTE1(v115[7]) ) /*0x100871287*/
          goto LABEL_61; /*0x100871287*/
      }
      if ( !BYTE1(v115[7]) ) /*0x1008710c7*/
      {
        BYTE1(v115[7]) = 1; /*0x1008710cd*/
        v29 = v115[0] - v114; /*0x1008710e2*/
        if ( (LOBYTE(v115[7]) | (v115[0] != v114)) == 1 ) /*0x1008710f0*/
        {
          v30 = (_BYTE *)(v115[1] + v114); /*0x1008710f6*/
          v33 = v29 - 1; /*0x100871100*/
          v135 = v26; /*0x100871104*/
          if ( !v29 ) /*0x100871108*/
            goto LABEL_40; /*0x100871108*/
          goto LABEL_33; /*0x100871108*/
        }
      }
      v47 = v25; /*0x100871414*/
LABEL_61:
      v135 = v26; /*0x100871417*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v26, v47); /*0x100871421*/
      if ( v53 ) /*0x100871429*/
      {
        v54 = v119[0]; /*0x10087142b*/
        v55 = v117[2]; /*0x100871432*/
        v6 = v134; /*0x100871440*/
        if ( v117[2] == v117[0] ) /*0x100871444*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v117); /*0x10087144d*/
        v56 = v117[1]; /*0x100871452*/
        v57 = 3 * v55; /*0x100871459*/
        *(_QWORD *)(v117[1] + 8 * v57) = v54; /*0x10087145d*/
        *(_QWORD *)(v56 + 8 * v57 + 8) = v135; /*0x100871465*/
        *(_QWORD *)(v56 + 8 * v57 + 16) = v47; /*0x10087146a*/
        v58 = v55 + 1; /*0x10087146f*/
        v59 = v117[0]; /*0x100871472*/
        v60 = (char *)v117[1]; /*0x100871479*/
      }
      else
      {
        v59 = v117[0]; /*0x10087148c*/
        v60 = (char *)v117[1]; /*0x100871493*/
        v58 = v117[2]; /*0x10087149a*/
        v6 = v134; /*0x1008714ab*/
        if ( v119[0] ) /*0x1008714b9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v119[0], 1); /*0x1008714c4*/
      }
      v110 = v60; /*0x1008714d1*/
      v111 = v60; /*0x1008714d8*/
      v118 = v59; /*0x1008714df*/
      v112 = v59; /*0x1008714e6*/
      v123 = &v60[24 * v58]; /*0x1008714ed*/
      v113 = v123; /*0x1008714f4*/
      v126 = v60; /*0x1008714fb*/
      if ( v58 ) /*0x100871505*/
      {
        v61 = v126; /*0x10087150b*/
        while ( 1 ) /*0x100871530*/
        {
          v60 = v61 + 24; /*0x100871530*/
          v62 = *(_QWORD *)v61; /*0x100871534*/
          if ( *(_QWORD *)v61 == 0x8000000000000000LL ) /*0x10087153a*/
          {
LABEL_98:
            v111 = v60; /*0x100871837*/
            v6 = v134; /*0x10087183e*/
            goto LABEL_99; /*0x10087183e*/
          }
          v63 = *((_QWORD *)v61 + 2); /*0x100871544*/
          v135 = *((_QWORD *)v61 + 1); /*0x100871548*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v135, v63); /*0x10087154f*/
          if ( v64 ) /*0x100871557*/
            break; /*0x100871557*/
LABEL_95:
          if ( v62 ) /*0x1008717c8*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v62, 1); /*0x1008717da*/
          v61 = v60; /*0x100871520*/
          if ( v60 == v123 ) /*0x10087152a*/
            goto LABEL_98; /*0x10087152a*/
        }
        v129 = v62; /*0x10087155d*/
        _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x10087156f*/
          v108,
          v135,
          v63);
        qmemcpy(v119, &v108[8], sizeof(v119)); /*0x100871591*/
        if ( *(_QWORD *)v108 == 2 ) /*0x100871598*/
        {
          qmemcpy(v117, v119, sizeof(v117)); /*0x1008715b0*/
          qmemcpy(v127, v117, sizeof(v127)); /*0x1008715c2*/
          if ( LODWORD(v127[0]) == 2 ) /*0x1008715cc*/
          {
LABEL_74:
            core::ptr::drop_in_place$LT$toml..value..Value$GT$::h6c4010814cfa0f22(&v127[1]); /*0x1008715d2*/
            v66 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb99b93290e05c92a(v135, v63); /*0x1008715ea*/
            v67 = v65; /*0x1008715ed*/
            v68 = v131; /*0x1008715f0*/
            v69 = v133; /*0x1008715f4*/
            if ( v65 > v131 - v133 ) /*0x100871601*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1008717f9*/
                &v131,
                v133,
                v65,
                1,
                1);
              v70 = (const void *)v66; /*0x1008717fe*/
              v68 = v131; /*0x100871801*/
              v69 = v133; /*0x100871805*/
            }
            else
            {
              v70 = (const void *)v66; /*0x100871607*/
            }
            v71 = v132; /*0x10087160a*/
            memcpy(&v132[v69], v70, v67); /*0x100871615*/
            v72 = v69 + v67; /*0x10087161a*/
            v133 = v72; /*0x10087161d*/
            if ( (unsigned __int64)(v68 - v72) <= 1 ) /*0x100871628*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x100871825*/
                &v131,
                v72,
                2,
                1,
                1);
              v71 = v132; /*0x10087182a*/
              v72 = v133; /*0x10087182e*/
            }
            *(_WORD *)&v71[v72] = 2570; /*0x10087162e*/
            v133 = v72 + 2; /*0x100871639*/
LABEL_94:
            v62 = v129; /*0x1008717c1*/
            goto LABEL_95; /*0x1008717c1*/
          }
        }
        else
        {
          memcpy(__dst, __src, sizeof(__dst)); /*0x100871663*/
          qmemcpy(v117, v119, sizeof(v117)); /*0x10087167a*/
          v114 = *(_QWORD *)v108; /*0x10087167d*/
          qmemcpy(v115, v117, sizeof(v115)); /*0x100871693*/
          _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::hdd6c0cc269136a64( /*0x1008716a4*/
            v108,
            &v114);
          if ( *(_DWORD *)v108 == 2 ) /*0x1008716b0*/
          {
            v127[4] = *(_QWORD *)&v108[32]; /*0x1008716c4*/
            v127[3] = *(_QWORD *)&v108[24]; /*0x1008716cc*/
            v127[2] = *(_QWORD *)&v108[16]; /*0x1008716d7*/
            v127[1] = *(_QWORD *)&v108[8]; /*0x1008716db*/
            v127[0] = 2; /*0x1008716de*/
            goto LABEL_74; /*0x1008716f0*/
          }
          qmemcpy(v127, v108, sizeof(v127)); /*0x10087170b*/
          if ( LODWORD(v127[0]) == 2 ) /*0x100871715*/
            goto LABEL_74; /*0x100871715*/
        }
        if ( v127[3] ) /*0x100871725*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127[4], v127[3], 1); /*0x100871733*/
        if ( v127[9] != 0x8000000000000000LL && v127[9] ) /*0x100871744*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127[10], v127[9], 1); /*0x10087174f*/
        v73 = v127[7]; /*0x100871754*/
        v74 = v127[8]; /*0x10087175b*/
        if ( v127[8] ) /*0x100871765*/
        {
          v75 = (_QWORD *)(v127[7] + 8LL); /*0x100871767*/
          do /*0x100871777*/
          {
            v76 = *(v75 - 1); /*0x100871779*/
            if ( v76 ) /*0x100871780*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v75, v76, 1); /*0x10087178a*/
            v75 += 3; /*0x100871770*/
            --v74; /*0x100871774*/
          }
          while ( v74 ); /*0x100871777*/
        }
        if ( v127[6] ) /*0x1008717aa*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, 24LL * v127[6], 8); /*0x1008717bc*/
        goto LABEL_94; /*0x1008717bc*/
      }
LABEL_99:
      if ( v123 != v60 ) /*0x10087185f*/
      {
        v77 = (v123 - v60) / 0x18uLL; /*0x100871864*/
        v78 = v60 + 8; /*0x100871868*/
        do /*0x100871877*/
        {
          v79 = *(v78 - 1); /*0x100871879*/
          if ( v79 ) /*0x100871880*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v78, v79, 1); /*0x10087188a*/
          v78 += 3; /*0x100871870*/
          --v77; /*0x100871874*/
        }
        while ( v77 ); /*0x100871877*/
      }
      if ( v118 ) /*0x10087189b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v126, 24 * v118, 8); /*0x1008718b1*/
      v80 = v132; /*0x1008718b6*/
      v81 = v133; /*0x1008718ba*/
      _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x1008718cb*/
        v108,
        v132,
        v133);
      qmemcpy(v119, &v108[8], sizeof(v119)); /*0x1008718ea*/
      if ( *(_QWORD *)v108 == 2 ) /*0x1008718f1*/
      {
        qmemcpy(v117, v119, sizeof(v117)); /*0x100871909*/
        qmemcpy(v127, v117, sizeof(v127)); /*0x10087191b*/
        v83 = &v128; /*0x10087191b*/
        if ( LODWORD(v127[0]) == 2 ) /*0x100871925*/
        {
LABEL_108:
          core::ptr::drop_in_place$LT$toml..value..Value$GT$::h6c4010814cfa0f22(&v127[1]); /*0x10087192b*/
          v84 = v131; /*0x100871937*/
          goto LABEL_128; /*0x10087193b*/
        }
      }
      else
      {
        memcpy(__dst, __src, sizeof(__dst)); /*0x100871953*/
        qmemcpy(v117, v119, sizeof(v117)); /*0x10087196e*/
        v114 = *(_QWORD *)v108; /*0x100871971*/
        qmemcpy(v115, v117, sizeof(v115)); /*0x100871987*/
        _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::hdd6c0cc269136a64( /*0x100871998*/
          v108,
          &v114);
        if ( *(_DWORD *)v108 == 2 ) /*0x1008719a4*/
        {
          v127[4] = *(_QWORD *)&v108[32]; /*0x1008719ad*/
          v127[3] = *(_QWORD *)&v108[24]; /*0x1008719bb*/
          v127[2] = *(_QWORD *)&v108[16]; /*0x1008719d0*/
          v127[1] = *(_QWORD *)&v108[8]; /*0x1008719d7*/
          v127[0] = 2; /*0x1008719de*/
          goto LABEL_108; /*0x1008719f0*/
        }
        qmemcpy(v127, v108, sizeof(v127)); /*0x100871a0b*/
        v83 = &v128; /*0x100871a0b*/
        if ( LODWORD(v127[0]) == 2 ) /*0x100871a15*/
          goto LABEL_108; /*0x100871a15*/
      }
      if ( v127[3] ) /*0x100871a25*/
      {
        v83 = (__int64 *)v127[4]; /*0x100871a27*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127[4], v127[3], 1); /*0x100871a33*/
      }
      v85 = v127[9]; /*0x100871a38*/
      if ( v127[9] != 0x8000000000000000LL && v127[9] ) /*0x100871a44*/
      {
        v83 = (__int64 *)v127[10]; /*0x100871a46*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127[10], v127[9], 1); /*0x100871a4f*/
      }
      v86 = (__int64 *)v127[7]; /*0x100871a54*/
      v87 = v127[8]; /*0x100871a5b*/
      if ( v127[8] ) /*0x100871a65*/
      {
        v88 = (__int64 **)(v127[7] + 8LL); /*0x100871a67*/
        do /*0x100871a77*/
        {
          v85 = (__int64)*(v88 - 1); /*0x100871a79*/
          if ( v85 ) /*0x100871a81*/
          {
            v83 = *v88; /*0x100871a83*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v88, v85, 1); /*0x100871a8c*/
          }
          v88 += 3; /*0x100871a70*/
          --v87; /*0x100871a74*/
        }
        while ( v87 ); /*0x100871a77*/
      }
      if ( v127[6] ) /*0x100871a9d*/
      {
        v85 = 24LL * v127[6]; /*0x100871aa3*/
        v83 = v86; /*0x100871aac*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, 24LL * v127[6], 8); /*0x100871aaf*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v83, v85, v82); /*0x100871ab4*/
      v81 = 226; /*0x100871ab9*/
      v89 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(226, 1); /*0x100871ac9*/
      if ( !v89 ) /*0x100871ad1*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 226); /*0x100871c9c*/
      v90 = v89; /*0x100871ad7*/
      memcpy(v89, &unk_10178832F, 0xE2u); /*0x100871ae9*/
      if ( v131 ) /*0x100871af5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v131, 1); /*0x100871aff*/
      v80 = v90; /*0x100871b04*/
      v84 = 226; /*0x100871b07*/
LABEL_128:
      if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hba6c6a10ebc72e28( /*0x100871b28*/
              v124,
              v125,
              v80,
              v81)
          & 1) != 0 )
      {
        v92 = v130; /*0x100871b2a*/
        *v130 = 2; /*0x100871b2e*/
        v92[1] = v91; /*0x100871b35*/
        if ( !v84 ) /*0x100871b3c*/
          goto LABEL_131; /*0x100871b3c*/
LABEL_130:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v84, 1); /*0x100871b3e*/
        goto LABEL_131; /*0x100871b49*/
      }
      codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hd58b317faccf87e9(v91); /*0x100871b9d*/
      v94 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v80, v81); /*0x100871bad*/
      v96 = v95; /*0x100871bb0*/
      v97 = &unk_10178832F; /*0x100871bb3*/
      v98 = 226; /*0x100871bba*/
      v99 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(&unk_10178832F, 226); /*0x100871bbf*/
      if ( v96 == v100 && (v97 = v94, v98 = (__int64)v99, !memcmp(v94, v99, v96)) ) /*0x100871bd9*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v94, v98, v100); /*0x100871c3a*/
        v101 = 75; /*0x100871c3f*/
        v107 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(75, 1); /*0x100871c4f*/
        if ( v107 ) /*0x100871c57*/
        {
          v103 = (void *)v107; /*0x100871c59*/
          v104 = &unk_101789312; /*0x100871c5c*/
          v105 = 75; /*0x100871c63*/
LABEL_140:
          memcpy(v103, v104, v105); /*0x100871c0d*/
          v106 = v130; /*0x100871c15*/
          v130[1] = v101; /*0x100871c19*/
          v106[2] = v103; /*0x100871c1d*/
          v106[3] = v101; /*0x100871c21*/
          *v106 = 11; /*0x100871c25*/
          if ( !v84 ) /*0x100871c2f*/
            goto LABEL_131; /*0x100871c2f*/
          goto LABEL_130; /*0x100871c2f*/
        }
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v97, v98, v100); /*0x100871bdb*/
        v101 = 109; /*0x100871be0*/
        v102 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(109, 1); /*0x100871bf0*/
        if ( v102 ) /*0x100871bf8*/
        {
          v103 = (void *)v102; /*0x100871bfe*/
          v104 = &unk_1017892A5; /*0x100871c01*/
          v105 = 109; /*0x100871c08*/
          goto LABEL_140; /*0x100871c08*/
        }
      }
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v101); /*0x100871cab*/
    }
  }
LABEL_4:
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::h6c4010814cfa0f22(&v127[1]); /*0x100870ce9*/
  v10 = v125; /*0x100870cfc*/
  if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hba6c6a10ebc72e28(v124, v125, v135, v9) /*0x100870d11*/
      & 1) == 0 )
  {
    v50 = v11; /*0x100871372*/
    codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hd58b317faccf87e9(v11); /*0x100871375*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v50, v10, v51); /*0x10087137a*/
    v22 = 48; /*0x10087137f*/
    v52 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1); /*0x10087138f*/
    if ( v52 ) /*0x100871397*/
    {
      v52[5] = 0xB8B8E5A3ADE68DA4LL; /*0x1008713a7*/
      v52[4] = 0xE5A281E695B3E6ADLL; /*0x1008713b5*/
      v52[3] = 0xAFE8204C4D4F5420LL; /*0x1008713c3*/
      v52[2] = 0x8E90E5206B636F6CLL; /*0x1008713d1*/
      v52[1] = 0x6220646567616E61LL; /*0x1008713df*/
      *v52 = 0x6D20A499E985B8E6LL; /*0x1008713ed*/
      v3[1] = 48; /*0x1008713f0*/
      v3[2] = v52; /*0x1008713f9*/
      v3[3] = 48; /*0x1008713fe*/
      *v3 = 11; /*0x100871407*/
      goto LABEL_131; /*0x10087140f*/
    }
    goto LABEL_145; /*0x100871397*/
  }
  *a1 = 2; /*0x100870d17*/
  a1[1] = v11; /*0x100870d1f*/
LABEL_131:
  if ( v120 ) /*0x100871b58*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121, v120, 1); /*0x100871b66*/
  v3 = v130; /*0x100871b72*/
  if ( v6 ) /*0x100871b76*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v128, v6, 1); /*0x100871b80*/
  return v3; /*0x100871b88*/
}