// __ZN13codexmate_lib4core5relay16codex_diagnostic27fix_config_toml_syntax_text @ 0x100502d50 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_diagnostic::fix_config_toml_syntax_text::hcfdbad13ceb8a6f8(
        _QWORD *a1,
        _QWORD *a2)
{
  void *v3; // r12
  __int64 v4; // r15
  _QWORD *result; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 *v15; // rsi
  _QWORD *v16; // r14
  void *v17; // rdi
  size_t v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r15
  _QWORD *v22; // r13
  __int64 v23; // rsi
  _QWORD *v24; // r9
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // r14
  void *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 v33; // r12
  _QWORD *v34; // rax
  size_t v35; // r13
  char *v36; // r12
  _BYTE *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r9
  size_t v45; // r13
  size_t v46; // rax
  __int64 v47; // r13
  __int64 v48; // rcx
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r15
  __int64 v57; // rbx
  char *v58; // r13
  char *v59; // rax
  __int64 v60; // rbx
  __int64 v61; // r12
  __int64 v62; // rdx
  _QWORD *v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 *v67; // rsi
  size_t v68; // rdx
  __int64 v69; // r9
  __int64 v70; // r14
  size_t v71; // r12
  __int64 v72; // rbx
  __int64 v73; // r15
  const void *v74; // rsi
  __int64 v75; // r14
  __int64 v76; // r9
  __int64 v77; // r12
  __int64 v78; // r12
  __int64 v79; // r15
  _QWORD *v80; // rbx
  __int64 v81; // rsi
  char *v82; // r14
  unsigned __int64 v83; // rbx
  _QWORD *v84; // r13
  __int64 v85; // rsi
  __int64 v86; // rbx
  __int64 v87; // r12
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 *v92; // rdi
  __int64 *v93; // rsi
  __int64 v94; // r14
  __int64 v95; // rsi
  __int64 *v96; // r14
  __int64 v97; // r15
  __int64 **v98; // r12
  void *v99; // rax
  __int64 v100; // r14
  _QWORD *v101; // rcx
  void *v102; // r12
  size_t v103; // rdx
  size_t v104; // r15
  void *v105; // rdi
  __int64 v106; // rsi
  const void *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r15
  __int64 v110; // rax
  void *v111; // r12
  const void *v112; // rsi
  size_t v113; // rdx
  __int64 v114; // rax
  _BYTE v115[104]; // [rsp+8h] [rbp-3D8h] BYREF
  _BYTE __src[144]; // [rsp+70h] [rbp-370h] BYREF
  char *v117; // [rsp+100h] [rbp-2E0h]
  char *v118; // [rsp+108h] [rbp-2D8h]
  __int64 v119; // [rsp+110h] [rbp-2D0h]
  char *v120; // [rsp+118h] [rbp-2C8h]
  _QWORD *v121; // [rsp+120h] [rbp-2C0h] BYREF
  _QWORD v122[12]; // [rsp+128h] [rbp-2B8h] BYREF
  _BYTE __dst[144]; // [rsp+188h] [rbp-258h] BYREF
  _QWORD v124[12]; // [rsp+218h] [rbp-1C8h] BYREF
  __int64 v125; // [rsp+278h] [rbp-168h] BYREF
  _QWORD v126[12]; // [rsp+280h] [rbp-160h] BYREF
  __int64 v127; // [rsp+2E0h] [rbp-100h] BYREF
  __int64 v128; // [rsp+2E8h] [rbp-F8h]
  __int64 v129; // [rsp+2F0h] [rbp-F0h]
  char *v130; // [rsp+2F8h] [rbp-E8h]
  size_t v131; // [rsp+300h] [rbp-E0h]
  void *v132; // [rsp+308h] [rbp-D8h]
  char *v133; // [rsp+310h] [rbp-D0h]
  _QWORD v134[12]; // [rsp+318h] [rbp-C8h] BYREF
  __int64 v135; // [rsp+378h] [rbp-68h] BYREF
  __int64 v136; // [rsp+380h] [rbp-60h]
  __int64 v137; // [rsp+388h] [rbp-58h] BYREF
  __int64 v138; // [rsp+390h] [rbp-50h]
  __int64 v139; // [rsp+398h] [rbp-48h]
  _QWORD *v140; // [rsp+3A0h] [rbp-40h]
  __int64 v141; // [rsp+3A8h] [rbp-38h]
  __int64 v142; // [rsp+3B0h] [rbp-30h]

  v3 = (void *)a2[7]; /*0x100502d6a*/
  v4 = a2[8]; /*0x100502d6e*/
  codexmate_lib::core::relay::codex_diagnostic::read_config_or_empty::h4de2a23e2dcec008(&v121, (__int64)v3, v4); /*0x100502d7f*/
  result = v121; /*0x100502d84*/
  v6 = v122[0]; /*0x100502d8b*/
  v7 = v122[1]; /*0x100502d92*/
  v8 = v122[2]; /*0x100502d99*/
  if ( v121 != (_QWORD *)11 ) /*0x100502da4*/
  {
    a1[11] = v122[10]; /*0x100502e9e*/
    a1[10] = v122[9]; /*0x100502ea9*/
    a1[9] = v122[8]; /*0x100502eb4*/
    a1[8] = v122[7]; /*0x100502ebf*/
    a1[7] = v122[6]; /*0x100502eca*/
    a1[6] = v122[5]; /*0x100502ed5*/
    v19 = v122[3]; /*0x100502ed9*/
    a1[5] = v122[4]; /*0x100502eea*/
    a1[4] = v19; /*0x100502eee*/
    a1[1] = v6; /*0x100502ef2*/
    a1[2] = v7; /*0x100502ef6*/
    a1[3] = v8; /*0x100502efa*/
    *a1 = result; /*0x100502efe*/
    return result; /*0x100502f01*/
  }
  v132 = v3; /*0x100502daa*/
  v131 = v4; /*0x100502db1*/
  v135 = v122[1]; /*0x100502dbf*/
  v136 = v122[0]; /*0x100502dc3*/
  codexmate_lib::core::relay::codex_writer::strip_all_managed_blocks::h80da2768569d91b4(&v127, v122[1], v122[2]); /*0x100502dc7*/
  v9 = v128; /*0x100502dcc*/
  v10 = v129; /*0x100502dd3*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x100502de7*/
    v115,
    v128,
    v129);
  v140 = a1; /*0x100502dec*/
  qmemcpy(v126, &v115[8], sizeof(v126)); /*0x100502e0a*/
  if ( *(_QWORD *)v115 == 2 ) /*0x100502e11*/
  {
    qmemcpy(v124, v126, sizeof(v124)); /*0x100502e2d*/
    qmemcpy(v134, v124, sizeof(v134)); /*0x100502e3f*/
    v15 = &v125; /*0x100502e3f*/
    v14 = 0; /*0x100502e3f*/
    v16 = v140; /*0x100502e42*/
    if ( LODWORD(v134[0]) == 2 ) /*0x100502e4d*/
      goto LABEL_4; /*0x100502e4d*/
    goto LABEL_10; /*0x100502e4d*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x100502f19*/
  qmemcpy(v124, v126, sizeof(v124)); /*0x100502f34*/
  v121 = *(_QWORD **)v115; /*0x100502f37*/
  qmemcpy(v122, v124, sizeof(v122)); /*0x100502f4d*/
  v15 = (__int64 *)&v121; /*0x100502f57*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x100502f5e*/
    v115,
    &v121);
  v16 = v140; /*0x100502f63*/
  if ( *(_DWORD *)v115 == 2 ) /*0x100502f6e*/
  {
    v134[4] = *(_QWORD *)&v115[32]; /*0x100502f77*/
    v134[3] = *(_QWORD *)&v115[24]; /*0x100502f85*/
    v14 = *(_QWORD *)&v115[16]; /*0x100502f93*/
    v134[2] = *(_QWORD *)&v115[16]; /*0x100502f9a*/
    v134[1] = *(_QWORD *)&v115[8]; /*0x100502fa1*/
    v134[0] = 2; /*0x100502fa8*/
  }
  else
  {
    qmemcpy(v134, v115, sizeof(v134)); /*0x100502fd5*/
    v15 = (__int64 *)&v115[96]; /*0x100502fd5*/
    v14 = 0; /*0x100502fd5*/
    if ( LODWORD(v134[0]) != 2 ) /*0x100502fdf*/
    {
LABEL_10:
      if ( v134[3] ) /*0x100502fef*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134[4], v134[3], 1); /*0x100502ffd*/
      v142 = v9; /*0x100503002*/
      if ( !__OFSUB__(-v134[9], 1) && v134[9] ) /*0x100503012*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134[10], v134[9], 1); /*0x10050301d*/
      v20 = v134[7]; /*0x100503022*/
      v21 = v134[8]; /*0x100503029*/
      if ( v134[8] ) /*0x100503033*/
      {
        v22 = (_QWORD *)(v134[7] + 8LL); /*0x100503035*/
        do /*0x100503047*/
        {
          v23 = *(v22 - 1); /*0x100503049*/
          if ( v23 ) /*0x100503050*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v23, 1); /*0x10050305b*/
          v22 += 3; /*0x100503040*/
          --v21; /*0x100503044*/
        }
        while ( v21 ); /*0x100503047*/
      }
      if ( v134[6] ) /*0x10050306c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 24LL * v134[6], 8); /*0x10050307e*/
      codexmate_lib::core::relay::codex_diagnostic::backup_config_before_fix::hbfd176d416815de7(&v121, a2); /*0x10050308d*/
      v24 = v140; /*0x100503092*/
      v25 = v142; /*0x100503096*/
      result = v121; /*0x10050309a*/
      v26 = v122[0]; /*0x1005030a1*/
      v27 = v122[1]; /*0x1005030a8*/
      if ( v121 != (_QWORD *)11 ) /*0x1005030b3*/
      {
        v48 = v122[2]; /*0x100503406*/
        v49 = v122[3]; /*0x10050340d*/
        v140[11] = v122[10]; /*0x10050341b*/
        v24[10] = v122[9]; /*0x100503426*/
        v24[9] = v122[8]; /*0x100503431*/
        v24[8] = v122[7]; /*0x10050343c*/
        v24[7] = v122[6]; /*0x100503447*/
        v24[6] = v122[5]; /*0x100503452*/
        v24[5] = v122[4]; /*0x10050345d*/
        v24[4] = v49; /*0x100503461*/
        v24[1] = v26; /*0x100503465*/
        v24[2] = v27; /*0x100503469*/
        v24[3] = v48; /*0x10050346d*/
        *v24 = result; /*0x100503471*/
        goto LABEL_128; /*0x100503474*/
      }
      if ( 2LL * v122[0] ) /*0x1005030b9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122[1], v122[0], 1); /*0x1005030cb*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v26); /*0x1005030d0*/
      v28 = 226; /*0x1005030d5*/
      v29 = 1; /*0x1005030da*/
      v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(226, 1); /*0x1005030ea*/
      if ( !v30 ) /*0x1005030f2*/
LABEL_141:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x100503da3*/
      v31 = (__int64)v30; /*0x1005030f8*/
      memcpy(v30, &unk_1015FCF2C, 0xE2u); /*0x10050310a*/
      v137 = 226; /*0x10050310f*/
      v138 = v31; /*0x100503117*/
      v139 = 226; /*0x10050311b*/
      v124[0] = 0; /*0x100503123*/
      v124[1] = 8; /*0x10050312e*/
      v124[2] = 0; /*0x100503139*/
      v126[0] = 0; /*0x100503144*/
      v126[1] = 1; /*0x10050314f*/
      v126[2] = 0; /*0x10050315a*/
      v121 = nullptr; /*0x100503165*/
      v122[0] = v10; /*0x100503170*/
      v122[1] = v25; /*0x10050317e*/
      v122[2] = v10; /*0x100503185*/
      v122[3] = 0; /*0x10050318c*/
      v122[4] = v10; /*0x100503197*/
      v122[5] = 0xA0000000ALL; /*0x1005031a8*/
      LOBYTE(v122[6]) = 1; /*0x1005031af*/
      LOWORD(v122[7]) = 0; /*0x1005031b6*/
      v32 = 0; /*0x1005031bf*/
      while ( 1 ) /*0x1005031d0*/
      {
        v33 = v122[1]; /*0x1005031d0*/
        _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1005031e1*/
          v115,
          &v122[1]);
        if ( *(_DWORD *)v115 == 1 ) /*0x1005031ed*/
        {
          v34 = v121; /*0x1005031f6*/
          v121 = *(_QWORD **)&v115[16]; /*0x1005031fd*/
          v35 = *(_QWORD *)&v115[16] - (_QWORD)v34; /*0x100503204*/
          v36 = (char *)v34 + v33; /*0x100503207*/
          if ( *(_QWORD **)&v115[16] != v34 ) /*0x10050320d*/
            goto LABEL_33; /*0x10050320d*/
          goto LABEL_39; /*0x10050320d*/
        }
        if ( BYTE1(v122[7]) ) /*0x100503227*/
          break; /*0x100503227*/
        BYTE1(v122[7]) = 1; /*0x10050322d*/
        v35 = v122[0] - (_QWORD)v121; /*0x100503242*/
        if ( (LOBYTE(v122[7]) | (v122[0] != (_QWORD)v121)) != 1 ) /*0x100503250*/
          break; /*0x100503250*/
        v36 = (char *)v121 + v122[1]; /*0x100503256*/
        if ( v35 ) /*0x100503260*/
        {
LABEL_33:
          if ( v36[v35 - 1] == 10 ) /*0x100503268*/
          {
            if ( v35 == 1 ) /*0x100503270*/
            {
              v35 = 0; /*0x100503280*/
            }
            else if ( v36[v35 - 2] == 13 ) /*0x100503278*/
            {
              v35 -= 2LL; /*0x10050327a*/
            }
            else
            {
              --v35; /*0x100503285*/
            }
          }
        }
LABEL_39:
        v37 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v36, v35); /*0x100503290*/
        if ( v38 ) /*0x10050329e*/
        {
          if ( *v37 == 91 && v37[v38 - 1] == 93 ) /*0x1005032b2*/
          {
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v29, v32); /*0x1005032be*/
            if ( v40 ) /*0x1005032c6*/
            {
              v142 = v126[0]; /*0x1005032d3*/
              v126[0] = 0; /*0x1005032d7*/
              v126[1] = 1; /*0x1005032e2*/
              v126[2] = 0; /*0x1005032ed*/
              v41 = v124[2]; /*0x1005032f8*/
              if ( v124[2] == v124[0] ) /*0x100503306*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v124); /*0x10050330f*/
              v42 = v124[1]; /*0x100503314*/
              v43 = 3 * v41; /*0x10050331b*/
              *(_QWORD *)(v124[1] + 8 * v43) = v142; /*0x100503323*/
              *(_QWORD *)(v42 + 8 * v43 + 8) = v29; /*0x100503327*/
              *(_QWORD *)(v42 + 8 * v43 + 16) = v32; /*0x10050332c*/
              v124[2] = v41 + 1; /*0x100503334*/
              v29 = 1; /*0x10050333b*/
              v32 = 0; /*0x100503341*/
            }
          }
        }
        if ( v35 > v126[0] - v32 ) /*0x10050335d*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1005033c9*/
            v126,
            v32,
            v35,
            1,
            1,
            v39);
          v29 = v126[1]; /*0x1005033ce*/
          v32 = v126[2]; /*0x1005033d5*/
        }
        memcpy((void *)(v32 + v29), v36, v35); /*0x10050336b*/
        v45 = v32 + v35; /*0x100503370*/
        v126[2] = v45; /*0x100503373*/
        v46 = v45; /*0x10050337a*/
        if ( v126[0] == v45 ) /*0x100503384*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1005033f8*/
            v126,
            v45,
            1,
            1,
            1,
            v44);
          v46 = v126[2]; /*0x1005033fd*/
        }
        v29 = v126[1]; /*0x100503386*/
        *(_BYTE *)(v126[1] + v46) = 10; /*0x10050338d*/
        v47 = v45 + 1; /*0x100503392*/
        v126[2] = v47; /*0x100503395*/
        v32 = v47; /*0x1005033a3*/
        if ( BYTE1(v122[7]) ) /*0x1005033a6*/
          goto LABEL_56; /*0x1005033a6*/
      }
      v47 = v32; /*0x100503512*/
LABEL_56:
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v29, v47); /*0x100503515*/
      if ( v51 ) /*0x10050352a*/
      {
        v52 = v126[0]; /*0x10050352c*/
        v53 = v124[2]; /*0x100503533*/
        if ( v124[2] == v124[0] ) /*0x10050353d*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v124); /*0x100503546*/
        v54 = v124[1]; /*0x10050354b*/
        v55 = 3 * v53; /*0x100503552*/
        *(_QWORD *)(v124[1] + 8 * v55) = v52; /*0x100503556*/
        *(_QWORD *)(v54 + 8 * v55 + 8) = v29; /*0x10050355a*/
        *(_QWORD *)(v54 + 8 * v55 + 16) = v47; /*0x10050355f*/
        v56 = v53 + 1; /*0x100503564*/
        v57 = v124[0]; /*0x100503567*/
        v58 = (char *)v124[1]; /*0x10050356e*/
      }
      else
      {
        v57 = v124[0]; /*0x100503577*/
        v58 = (char *)v124[1]; /*0x10050357a*/
        v56 = v124[2]; /*0x100503581*/
        if ( v126[0] ) /*0x100503592*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v126[0], 1); /*0x10050359c*/
      }
      v117 = v58; /*0x1005035b4*/
      v118 = v58; /*0x1005035bb*/
      v125 = v57; /*0x1005035c2*/
      v119 = v57; /*0x1005035c9*/
      v130 = &v58[24 * v56]; /*0x1005035d0*/
      v120 = v130; /*0x1005035d7*/
      v133 = v58; /*0x1005035de*/
      if ( v56 ) /*0x1005035e8*/
      {
        v59 = v133; /*0x1005035f5*/
        while ( 1 ) /*0x100503631*/
        {
          v58 = v59 + 24; /*0x100503631*/
          v60 = *(_QWORD *)v59; /*0x100503635*/
          if ( *(_QWORD *)v59 == 0x8000000000000000LL ) /*0x10050363b*/
          {
LABEL_95:
            v118 = v58; /*0x10050394c*/
            break; /*0x10050394c*/
          }
          v61 = *((_QWORD *)v59 + 2); /*0x100503645*/
          v142 = *((_QWORD *)v59 + 1); /*0x100503649*/
          v141 = v60; /*0x100503650*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v142, v61); /*0x100503654*/
          if ( v62 ) /*0x10050365c*/
          {
            _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x10050366c*/
              v115,
              v142,
              v61);
            qmemcpy(v126, &v115[8], sizeof(v126)); /*0x100503687*/
            if ( *(_QWORD *)v115 == 2 ) /*0x10050368e*/
            {
              qmemcpy(v124, v126, sizeof(v124)); /*0x1005036a6*/
              qmemcpy(v134, v124, sizeof(v134)); /*0x1005036b8*/
              v67 = &v125; /*0x1005036b8*/
              v66 = 0; /*0x1005036b8*/
              if ( LODWORD(v134[0]) == 2 ) /*0x1005036c6*/
                goto LABEL_72; /*0x1005036c6*/
            }
            else
            {
              memcpy(__dst, __src, sizeof(__dst)); /*0x100503773*/
              qmemcpy(v124, v126, sizeof(v124)); /*0x10050378a*/
              v121 = *(_QWORD **)v115; /*0x10050378d*/
              qmemcpy(v122, v124, sizeof(v122)); /*0x1005037a3*/
              _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x1005037b8*/
                v115,
                &v121);
              if ( *(_DWORD *)v115 == 2 ) /*0x1005037c4*/
              {
                v67 = (__int64 *)&v115[8]; /*0x1005037c6*/
                v63 = &v134[1]; /*0x1005037d1*/
                v134[4] = *(_QWORD *)&v115[32]; /*0x1005037d8*/
                v134[3] = *(_QWORD *)&v115[24]; /*0x1005037e0*/
                v66 = *(_QWORD *)&v115[16]; /*0x1005037e7*/
                v134[2] = *(_QWORD *)&v115[16]; /*0x1005037eb*/
                v134[1] = *(_QWORD *)&v115[8]; /*0x1005037ef*/
                v134[0] = 2; /*0x1005037f2*/
LABEL_72:
                core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v134[1], v67, v63, v66, v64, v65); /*0x1005036cc*/
                v70 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hdd9c7a1211e7482d(v142, v61); /*0x1005036e4*/
                v71 = v68; /*0x1005036e7*/
                v72 = v137; /*0x1005036ea*/
                v73 = v139; /*0x1005036ee*/
                if ( v68 > v137 - v139 ) /*0x1005036fb*/
                {
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100503903*/
                    &v137,
                    v139,
                    v68,
                    1,
                    1,
                    v69);
                  v74 = (const void *)v70; /*0x100503908*/
                  v72 = v137; /*0x10050390b*/
                  v73 = v139; /*0x10050390f*/
                }
                else
                {
                  v74 = (const void *)v70; /*0x100503701*/
                }
                v75 = v138; /*0x100503704*/
                memcpy((void *)(v138 + v73), v74, v71); /*0x10050370f*/
                v77 = v73 + v71; /*0x100503714*/
                v139 = v77; /*0x100503717*/
                if ( (unsigned __int64)(v72 - v77) <= 1 ) /*0x100503722*/
                {
                  v60 = v141; /*0x10050392f*/
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100503933*/
                    &v137,
                    v77,
                    2,
                    1,
                    1,
                    v76);
                  v75 = v138; /*0x10050393f*/
                  v77 = v139; /*0x100503943*/
                }
                else
                {
                  v60 = v141; /*0x10050372f*/
                }
                *(_WORD *)(v75 + v77) = 2570; /*0x100503733*/
                v139 = v77 + 2; /*0x10050373e*/
                if ( !v60 ) /*0x10050374f*/
                  goto LABEL_67; /*0x10050374f*/
LABEL_66:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, v60, 1); /*0x100503610*/
                goto LABEL_67; /*0x10050361c*/
              }
              qmemcpy(v134, v115, sizeof(v134)); /*0x10050381f*/
              v67 = (__int64 *)&v115[96]; /*0x10050381f*/
              v66 = 0; /*0x10050381f*/
              if ( LODWORD(v134[0]) == 2 ) /*0x100503829*/
                goto LABEL_72; /*0x100503829*/
            }
            if ( v134[3] ) /*0x100503839*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134[4], v134[3], 1); /*0x100503847*/
            if ( v134[9] != 0x8000000000000000LL && v134[9] ) /*0x100503858*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134[10], v134[9], 1); /*0x100503863*/
            v78 = v134[7]; /*0x100503868*/
            v79 = v134[8]; /*0x10050386f*/
            if ( v134[8] ) /*0x100503879*/
            {
              v80 = (_QWORD *)(v134[7] + 8LL); /*0x10050387b*/
              do /*0x100503897*/
              {
                v81 = *(v80 - 1); /*0x100503899*/
                if ( v81 ) /*0x1005038a0*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v80, v81, 1); /*0x1005038aa*/
                v80 += 3; /*0x100503890*/
                --v79; /*0x100503894*/
              }
              while ( v79 ); /*0x100503897*/
            }
            if ( v134[6] ) /*0x1005038ca*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, 24LL * v134[6], 8); /*0x1005038e0*/
            v60 = v141; /*0x100503607*/
          }
          if ( v60 ) /*0x10050360e*/
            goto LABEL_66; /*0x10050360e*/
LABEL_67:
          v59 = v58; /*0x100503621*/
          if ( v58 == v130 ) /*0x10050362b*/
            goto LABEL_95; /*0x10050362b*/
        }
      }
      v82 = v133; /*0x100503953*/
      if ( v130 != v58 ) /*0x100503977*/
      {
        v83 = (v130 - v58) / 0x18uLL; /*0x10050397c*/
        v84 = v58 + 8; /*0x100503980*/
        do /*0x100503997*/
        {
          v85 = *(v84 - 1); /*0x100503999*/
          if ( v85 ) /*0x1005039a0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v84, v85, 1); /*0x1005039ab*/
          v84 += 3; /*0x100503990*/
          --v83; /*0x100503994*/
        }
        while ( v83 ); /*0x100503997*/
      }
      if ( v125 ) /*0x1005039bc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, 24 * v125, 8); /*0x1005039ce*/
      v86 = v138; /*0x1005039d3*/
      v87 = v139; /*0x1005039d7*/
      _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x1005039e8*/
        v115,
        v138,
        v139);
      qmemcpy(v126, &v115[8], sizeof(v126)); /*0x100503a07*/
      if ( *(_QWORD *)v115 == 2 ) /*0x100503a0e*/
      {
        qmemcpy(v124, v126, sizeof(v124)); /*0x100503a26*/
        qmemcpy(v134, v124, sizeof(v134)); /*0x100503a38*/
        v93 = &v125; /*0x100503a38*/
        v92 = &v135; /*0x100503a38*/
        v91 = 0; /*0x100503a38*/
        if ( LODWORD(v134[0]) == 2 ) /*0x100503a4c*/
        {
LABEL_105:
          core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v134[1], v93, v88, v91, v89, v90); /*0x100503a52*/
          v94 = v137; /*0x100503a5e*/
          goto LABEL_125; /*0x100503a62*/
        }
      }
      else
      {
        memcpy(__dst, __src, sizeof(__dst)); /*0x100503a7a*/
        qmemcpy(v124, v126, sizeof(v124)); /*0x100503a95*/
        v121 = *(_QWORD **)v115; /*0x100503a98*/
        qmemcpy(v122, v124, sizeof(v122)); /*0x100503aae*/
        v93 = (__int64 *)&v121; /*0x100503ab8*/
        _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x100503abf*/
          v115,
          &v121);
        if ( *(_DWORD *)v115 == 2 ) /*0x100503acb*/
        {
          v134[4] = *(_QWORD *)&v115[32]; /*0x100503ad4*/
          v134[3] = *(_QWORD *)&v115[24]; /*0x100503ae2*/
          v91 = *(_QWORD *)&v115[16]; /*0x100503af0*/
          v134[2] = *(_QWORD *)&v115[16]; /*0x100503af7*/
          v134[1] = *(_QWORD *)&v115[8]; /*0x100503afe*/
          v134[0] = 2; /*0x100503b05*/
          goto LABEL_105; /*0x100503b21*/
        }
        qmemcpy(v134, v115, sizeof(v134)); /*0x100503b3c*/
        v93 = (__int64 *)&v115[96]; /*0x100503b3c*/
        v92 = &v135; /*0x100503b3c*/
        v91 = 0; /*0x100503b3c*/
        if ( LODWORD(v134[0]) == 2 ) /*0x100503b50*/
          goto LABEL_105; /*0x100503b50*/
      }
      if ( v134[3] ) /*0x100503b60*/
      {
        v92 = (__int64 *)v134[4]; /*0x100503b62*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134[4], v134[3], 1); /*0x100503b6e*/
      }
      v95 = v134[9]; /*0x100503b73*/
      if ( v134[9] != 0x8000000000000000LL && v134[9] ) /*0x100503b7f*/
      {
        v92 = (__int64 *)v134[10]; /*0x100503b81*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134[10], v134[9], 1); /*0x100503b8a*/
      }
      v96 = (__int64 *)v134[7]; /*0x100503b8f*/
      v97 = v134[8]; /*0x100503b96*/
      if ( v134[8] ) /*0x100503ba0*/
      {
        v98 = (__int64 **)(v134[7] + 8LL); /*0x100503ba2*/
        do /*0x100503bb7*/
        {
          v95 = (__int64)*(v98 - 1); /*0x100503bb9*/
          if ( v95 ) /*0x100503bc1*/
          {
            v92 = *v98; /*0x100503bc3*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v98, v95, 1); /*0x100503bcc*/
          }
          v98 += 3; /*0x100503bb0*/
          --v97; /*0x100503bb4*/
        }
        while ( v97 ); /*0x100503bb7*/
      }
      if ( v134[6] ) /*0x100503bdd*/
      {
        v95 = 24LL * v134[6]; /*0x100503be3*/
        v92 = v96; /*0x100503bec*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v96, 24LL * v134[6], 8); /*0x100503bef*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v92, v95); /*0x100503bf4*/
      v87 = 226; /*0x100503bf9*/
      v99 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(226, 1); /*0x100503c09*/
      if ( !v99 ) /*0x100503c11*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 226); /*0x100503dbc*/
      v100 = (__int64)v99; /*0x100503c17*/
      memcpy(v99, &unk_1015FCF2C, 0xE2u); /*0x100503c29*/
      if ( v137 ) /*0x100503c35*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v137, 1); /*0x100503c3f*/
      v86 = v100; /*0x100503c44*/
      v94 = 226; /*0x100503c47*/
LABEL_125:
      result = (_QWORD *)codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100503c4d*/
                           v132,
                           v131,
                           v86,
                           v87,
                           1);
      if ( result ) /*0x100503c6f*/
      {
        v101 = v140; /*0x100503c71*/
        *v140 = 2; /*0x100503c75*/
        v101[1] = result; /*0x100503c7c*/
        if ( !v94 ) /*0x100503c83*/
          goto LABEL_128; /*0x100503c83*/
LABEL_127:
        result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v94, 1); /*0x100503c85*/
        goto LABEL_128; /*0x100503c90*/
      }
      v102 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v86, v87); /*0x100503ce6*/
      v104 = v103; /*0x100503ce9*/
      v105 = &unk_1015FCF2C; /*0x100503cec*/
      v106 = 226; /*0x100503cf3*/
      v107 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(&unk_1015FCF2C, 226); /*0x100503cf8*/
      if ( v104 == v108 && (v105 = v102, v106 = (__int64)v107, !memcmp(v102, v107, v104)) ) /*0x100503d12*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v106); /*0x100503d73*/
        v109 = 75; /*0x100503d78*/
        v114 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(75, 1); /*0x100503d88*/
        if ( v114 ) /*0x100503d90*/
        {
          v111 = (void *)v114; /*0x100503d92*/
          v112 = &unk_1015FDD82; /*0x100503d95*/
          v113 = 75; /*0x100503d9c*/
LABEL_137:
          memcpy(v111, v112, v113); /*0x100503d46*/
          result = v140; /*0x100503d4e*/
          v140[1] = v109; /*0x100503d52*/
          result[2] = v111; /*0x100503d56*/
          result[3] = v109; /*0x100503d5a*/
          *result = 11; /*0x100503d5e*/
          if ( !v94 ) /*0x100503d68*/
            goto LABEL_128; /*0x100503d68*/
          goto LABEL_127; /*0x100503d68*/
        }
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v105, v106); /*0x100503d14*/
        v109 = 109; /*0x100503d19*/
        v110 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(109, 1); /*0x100503d29*/
        if ( v110 ) /*0x100503d31*/
        {
          v111 = (void *)v110; /*0x100503d37*/
          v112 = &unk_1015FDD15; /*0x100503d3a*/
          v113 = 109; /*0x100503d41*/
          goto LABEL_137; /*0x100503d41*/
        }
      }
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v109); /*0x100503dcb*/
    }
  }
LABEL_4:
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v134[1], v15, v11, v14, v12, v13); /*0x100502e53*/
  v17 = v132; /*0x100502e5f*/
  v18 = v131; /*0x100502e66*/
  result = (_QWORD *)codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100502e79*/
                       v132,
                       v131,
                       v9,
                       v10,
                       1);
  if ( !result ) /*0x100502e81*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v18); /*0x100503479*/
    v28 = 48; /*0x10050347e*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1); /*0x10050348d*/
    if ( result ) /*0x100503495*/
    {
      result[5] = 0xB8B8E5A3ADE68DA4LL; /*0x1005034a5*/
      result[4] = 0xE5A281E695B3E6ADLL; /*0x1005034b3*/
      result[3] = 0xAFE8204C4D4F5420LL; /*0x1005034c1*/
      result[2] = 0x8E90E5206B636F6CLL; /*0x1005034cf*/
      result[1] = 0x6220646567616E61LL; /*0x1005034dd*/
      *result = 0x6D20A499E985B8E6LL; /*0x1005034eb*/
      v50 = v140; /*0x1005034ee*/
      v140[1] = 48; /*0x1005034f2*/
      v50[2] = result; /*0x1005034fa*/
      v50[3] = 48; /*0x1005034fe*/
      *v50 = 11; /*0x100503506*/
      goto LABEL_128; /*0x10050350d*/
    }
    goto LABEL_141; /*0x100503495*/
  }
  *v16 = 2; /*0x100502e87*/
  v16[1] = result; /*0x100502e8e*/
LABEL_128:
  if ( v127 ) /*0x100503c9f*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v128, v127, 1); /*0x100503cad*/
  if ( v136 ) /*0x100503cb9*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v136, 1); /*0x100503cc4*/
  return result; /*0x100503cc9*/
}