// __ZN13codexmate_lib4core5relay10translator6stream23OpenAiToAnthropicStream18emit_message_start @ 0x100aabf30 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::emit_message_start::h172b875acf9978ec(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  _DWORD *v4; // rax
  void *v5; // rax
  char **v6; // rdi
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rcx
  char *v9; // rdx
  __int64 v10; // rdx
  char ***v11; // rsi
  _DWORD *v12; // rax
  __int64 v13; // r12
  _WORD *v14; // rax
  _QWORD *v15; // r15
  signed __int64 v16; // r12
  __int64 v17; // r15
  const void *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbx
  char **v21; // rdi
  __int64 (__fastcall *v22)(); // rax
  __int64 v23; // rcx
  char *v24; // rdx
  __int64 v25; // rdx
  char ***v26; // rsi
  _DWORD *v27; // rax
  _DWORD *v28; // rax
  char **v29; // rdi
  __int64 (__fastcall *v30)(); // rax
  __int64 v31; // rcx
  char *v32; // rdx
  __int64 v33; // rdx
  char ***v34; // rsi
  _DWORD *v35; // rax
  __int64 v36; // rax
  char **v37; // rdi
  __int64 (__fastcall *v38)(); // rax
  __int64 v39; // rcx
  char *v40; // rdx
  __int64 v41; // rdx
  char ***v42; // rsi
  __int64 v43; // rax
  signed __int64 v44; // r12
  __int64 v45; // r15
  const void *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rbx
  char **v49; // rdi
  __int64 (__fastcall *v50)(); // rax
  __int64 v51; // rcx
  char *v52; // rdx
  __int64 v53; // rdx
  char ***v54; // rsi
  _DWORD *v55; // rax
  char **v56; // rdi
  __int64 (__fastcall *v57)(); // rax
  __int64 v58; // rcx
  char *v59; // rdx
  __int64 v60; // rdx
  char ***v61; // rsi
  void *v62; // rax
  char **v63; // rdi
  __int64 (__fastcall *v64)(); // rax
  __int64 v65; // rcx
  char *v66; // rdx
  _QWORD *v67; // rdx
  char ***v68; // rsi
  void *v69; // rax
  char **v70; // rdi
  __int64 (__fastcall *v71)(); // rax
  __int64 v72; // rcx
  char *v73; // rdx
  _QWORD *v74; // rdx
  char ***v75; // rsi
  __int64 v76; // rax
  __int64 v77; // r14
  void *v78; // rax
  char **v79; // rdi
  __int64 (__fastcall *v80)(); // rax
  __int64 v81; // rcx
  char *v82; // rdx
  __int64 v83; // rdx
  char ***v84; // rsi
  void *v85; // rax
  __int64 (__fastcall *v86)(); // rax
  __int64 v87; // rcx
  char *v88; // rdx
  __int64 v89; // rdx
  __int64 (__fastcall *v90)(); // rax
  __int64 v91; // rcx
  char *v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // r14
  __int64 (__fastcall *v95)(); // rax
  __int64 v96; // rcx
  char *v97; // rdx
  _QWORD *v98; // rdx
  _QWORD v100[3]; // [rsp+0h] [rbp-200h] BYREF
  _QWORD v101[4]; // [rsp+18h] [rbp-1E8h] BYREF
  __int64 v102; // [rsp+38h] [rbp-1C8h]
  __int64 v103; // [rsp+40h] [rbp-1C0h] BYREF
  void *v104; // [rsp+48h] [rbp-1B8h]
  __int64 v105; // [rsp+50h] [rbp-1B0h]
  _QWORD v106[2]; // [rsp+58h] [rbp-1A8h] BYREF
  __int64 v107; // [rsp+68h] [rbp-198h]
  _QWORD v108[2]; // [rsp+70h] [rbp-190h] BYREF
  __int64 (__fastcall *v109)(); // [rsp+80h] [rbp-180h]
  _QWORD *v110; // [rsp+88h] [rbp-178h]
  _QWORD *v111; // [rsp+90h] [rbp-170h]
  __int64 v112; // [rsp+98h] [rbp-168h]
  __int64 v113; // [rsp+A0h] [rbp-160h]
  __int64 v114; // [rsp+A8h] [rbp-158h]
  _QWORD v115[2]; // [rsp+B0h] [rbp-150h] BYREF
  __int64 v116; // [rsp+C0h] [rbp-140h]
  _QWORD *v117; // [rsp+C8h] [rbp-138h]
  char ***v118; // [rsp+D0h] [rbp-130h]
  __int64 v119; // [rsp+D8h] [rbp-128h]
  __int64 v120; // [rsp+E0h] [rbp-120h]
  __int64 v121; // [rsp+E8h] [rbp-118h] BYREF
  _DWORD *v122; // [rsp+F0h] [rbp-110h]
  __int64 v123; // [rsp+F8h] [rbp-108h]
  __int64 v124; // [rsp+100h] [rbp-100h]
  char **v125; // [rsp+108h] [rbp-F8h] BYREF
  __int64 (__fastcall *v126)(); // [rsp+110h] [rbp-F0h]
  _QWORD **v127; // [rsp+118h] [rbp-E8h]
  __int64 (__fastcall *v128)(); // [rsp+120h] [rbp-E0h]
  __int64 v129; // [rsp+128h] [rbp-D8h]
  __int64 v130; // [rsp+130h] [rbp-D0h]
  __int64 v131; // [rsp+138h] [rbp-C8h]
  _QWORD *v132; // [rsp+140h] [rbp-C0h] BYREF
  __int64 v133; // [rsp+148h] [rbp-B8h]
  __int64 v134; // [rsp+150h] [rbp-B0h]
  __int64 v135; // [rsp+158h] [rbp-A8h]
  char **v136; // [rsp+160h] [rbp-A0h] BYREF
  __int64 (__fastcall *v137)(); // [rsp+168h] [rbp-98h]
  _QWORD **v138; // [rsp+170h] [rbp-90h]
  __int64 (__fastcall *v139)(); // [rsp+178h] [rbp-88h]
  __int64 v140; // [rsp+180h] [rbp-80h]
  __int64 v141; // [rsp+188h] [rbp-78h]
  __int64 v142; // [rsp+190h] [rbp-70h]
  char *v143; // [rsp+198h] [rbp-68h] BYREF
  __int64 v144; // [rsp+1A0h] [rbp-60h]
  __int64 v145; // [rsp+1A8h] [rbp-58h]
  __int64 v146; // [rsp+1B0h] [rbp-50h]
  __int64 v147; // [rsp+1B8h] [rbp-48h] BYREF
  __int64 v148; // [rsp+1C0h] [rbp-40h]
  __int64 v149; // [rsp+1C8h] [rbp-38h]
  __int64 v150; // [rsp+1D0h] [rbp-30h]

  v110 = a2; /*0x100aabf44*/
  v108[0] = 0; /*0x100aabf4e*/
  v109 = nullptr; /*0x100aabf59*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100aabf64*/
  v3 = 4; /*0x100aabf69*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aabf79*/
  if ( !v4 ) /*0x100aabf81*/
    goto LABEL_80; /*0x100aabf81*/
  *v4 = 1701869940; /*0x100aabf8a*/
  v121 = 4; /*0x100aabf90*/
  v122 = v4; /*0x100aabf9b*/
  v123 = 4; /*0x100aabfa2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aabfad*/
  v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100aabfbc*/
  if ( !v5 ) /*0x100aabfc4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100aad568*/
  qmemcpy(v5, "message_start", 13); /*0x100aabfe2*/
  LOBYTE(v147) = 3; /*0x100aabfe5*/
  v148 = 13; /*0x100aabfe9*/
  v149 = (__int64)v5; /*0x100aabff1*/
  v150 = 13; /*0x100aabff5*/
  v6 = (char **)&v136; /*0x100aabffd*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v108, &v121); /*0x100aac012*/
  if ( __OFSUB__(0, v136) ) /*0x100aac019*/
  {
    v7 = v137; /*0x100aac022*/
    v8 = 32LL * (_QWORD)v139; /*0x100aac030*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aac039*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aac042*/
    v9 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aac046*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aac04f*/
    v143 = v9; /*0x100aac053*/
    *(_QWORD *)((char *)v137 + v8 + 24) = v150; /*0x100aac05b*/
    *(_QWORD *)((char *)v7 + v8 + 16) = v149; /*0x100aac064*/
    v10 = v147; /*0x100aac069*/
    v11 = (char ***)v148; /*0x100aac06d*/
    *(_QWORD *)((char *)v7 + v8 + 8) = v148; /*0x100aac071*/
    *(_QWORD *)((char *)v7 + v8) = v10; /*0x100aac076*/
    if ( (_BYTE)v143 != 6 ) /*0x100aac07e*/
    {
      v6 = &v143; /*0x100aac084*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aac088*/
    }
  }
  else
  {
    v131 = v142; /*0x100aac096*/
    v130 = v141; /*0x100aac0a1*/
    v129 = v140; /*0x100aac0ac*/
    v128 = v139; /*0x100aac0ba*/
    v127 = v138; /*0x100aac0c8*/
    v126 = v137; /*0x100aac0dd*/
    v125 = v136; /*0x100aac0e4*/
    v135 = v150; /*0x100aac0ef*/
    v134 = v149; /*0x100aac0fa*/
    v133 = v148; /*0x100aac109*/
    v132 = (_QWORD *)v147; /*0x100aac110*/
    v6 = &v143; /*0x100aac117*/
    v11 = &v125; /*0x100aac11b*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aac129*/
      &v143,
      &v125,
      &v132);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v11); /*0x100aac12e*/
  v3 = 7; /*0x100aac133*/
  v12 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100aac143*/
  if ( !v12 ) /*0x100aac14b*/
LABEL_80:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x100aad557*/
  v102 = a1; /*0x100aac151*/
  *(_DWORD *)((char *)v12 + 3) = 1701273971; /*0x100aac158*/
  *v12 = 1936942445; /*0x100aac15f*/
  v101[0] = 7; /*0x100aac165*/
  v101[3] = v12; /*0x100aac170*/
  v101[1] = v12; /*0x100aac177*/
  v101[2] = 7; /*0x100aac17e*/
  v115[0] = 0; /*0x100aac189*/
  v116 = 0; /*0x100aac194*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100aac19f*/
  v13 = 2; /*0x100aac1a4*/
  v14 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100aac1b4*/
  v15 = v110; /*0x100aac1bc*/
  if ( !v14 ) /*0x100aac1c3*/
    goto LABEL_79; /*0x100aac1c3*/
  *v14 = 25705; /*0x100aac1cc*/
  v121 = 2; /*0x100aac1d1*/
  v122 = v14; /*0x100aac1dc*/
  v123 = 2; /*0x100aac1e3*/
  v16 = v15[5]; /*0x100aac1ee*/
  if ( v16 < 0 ) /*0x100aac1f5*/
  {
    v17 = 0; /*0x100aac1f7*/
    goto LABEL_11; /*0x100aac1f7*/
  }
  v18 = (const void *)v15[4]; /*0x100aac20a*/
  if ( v16 ) /*0x100aac20e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100aac210*/
    v17 = 1; /*0x100aac215*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x100aac223*/
    if ( !v19 ) /*0x100aac22b*/
LABEL_11:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, v16); /*0x100aac1fa*/
    v20 = v19; /*0x100aac22d*/
    v15 = v110; /*0x100aac230*/
  }
  else
  {
    v20 = 1; /*0x100aac239*/
  }
  memcpy((void *)v20, v18, v16); /*0x100aac247*/
  LOBYTE(v147) = 3; /*0x100aac24c*/
  v148 = v16; /*0x100aac250*/
  v149 = v20; /*0x100aac254*/
  v150 = v16; /*0x100aac258*/
  v21 = (char **)&v136; /*0x100aac25c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v115, &v121); /*0x100aac271*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aac287*/
  {
    v22 = v137; /*0x100aac289*/
    v23 = 32LL * (_QWORD)v139; /*0x100aac297*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aac2a0*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aac2a9*/
    v24 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aac2ad*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aac2b6*/
    v143 = v24; /*0x100aac2ba*/
    *(_QWORD *)((char *)v137 + v23 + 24) = v150; /*0x100aac2c2*/
    *(_QWORD *)((char *)v22 + v23 + 16) = v149; /*0x100aac2cb*/
    v25 = v147; /*0x100aac2d0*/
    v26 = (char ***)v148; /*0x100aac2d4*/
    *(_QWORD *)((char *)v22 + v23 + 8) = v148; /*0x100aac2d8*/
    *(_QWORD *)((char *)v22 + v23) = v25; /*0x100aac2dd*/
    if ( (_BYTE)v143 != 6 ) /*0x100aac2e5*/
    {
      v21 = &v143; /*0x100aac2eb*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aac2ef*/
    }
  }
  else
  {
    v131 = v142; /*0x100aac2fd*/
    v130 = v141; /*0x100aac308*/
    v129 = v140; /*0x100aac313*/
    v128 = v139; /*0x100aac321*/
    v127 = v138; /*0x100aac32f*/
    v126 = v137; /*0x100aac344*/
    v125 = v136; /*0x100aac34b*/
    v135 = v150; /*0x100aac356*/
    v134 = v149; /*0x100aac361*/
    v133 = v148; /*0x100aac370*/
    v132 = (_QWORD *)v147; /*0x100aac377*/
    v21 = &v143; /*0x100aac37e*/
    v26 = &v125; /*0x100aac382*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aac390*/
      &v143,
      &v125,
      &v132);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v26); /*0x100aac395*/
  v13 = 4; /*0x100aac39a*/
  v27 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aac3aa*/
  if ( !v27 ) /*0x100aac3b2*/
    goto LABEL_79; /*0x100aac3b2*/
  *v27 = 1701869940; /*0x100aac3bb*/
  v121 = 4; /*0x100aac3c1*/
  v122 = v27; /*0x100aac3cc*/
  v123 = 4; /*0x100aac3d3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aac3de*/
  v28 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100aac3ed*/
  if ( !v28 ) /*0x100aac3f5*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100aad579*/
  *(_DWORD *)((char *)v28 + 3) = 1701273971; /*0x100aac3fb*/
  *v28 = 1936942445; /*0x100aac402*/
  LOBYTE(v147) = 3; /*0x100aac408*/
  v148 = 7; /*0x100aac40c*/
  v149 = (__int64)v28; /*0x100aac414*/
  v150 = 7; /*0x100aac418*/
  v29 = (char **)&v136; /*0x100aac420*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v115, &v121); /*0x100aac435*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aac441*/
  {
    v30 = v137; /*0x100aac443*/
    v31 = 32LL * (_QWORD)v139; /*0x100aac451*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aac45a*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aac463*/
    v32 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aac467*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aac470*/
    v143 = v32; /*0x100aac474*/
    *(_QWORD *)((char *)v137 + v31 + 24) = v150; /*0x100aac47c*/
    *(_QWORD *)((char *)v30 + v31 + 16) = v149; /*0x100aac485*/
    v33 = v147; /*0x100aac48a*/
    v34 = (char ***)v148; /*0x100aac48e*/
    *(_QWORD *)((char *)v30 + v31 + 8) = v148; /*0x100aac492*/
    *(_QWORD *)((char *)v30 + v31) = v33; /*0x100aac497*/
    if ( (_BYTE)v143 != 6 ) /*0x100aac49f*/
    {
      v29 = &v143; /*0x100aac4a5*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aac4a9*/
    }
  }
  else
  {
    v131 = v142; /*0x100aac4b7*/
    v130 = v141; /*0x100aac4c2*/
    v129 = v140; /*0x100aac4cd*/
    v128 = v139; /*0x100aac4db*/
    v127 = v138; /*0x100aac4e9*/
    v126 = v137; /*0x100aac4fe*/
    v125 = v136; /*0x100aac505*/
    v135 = v150; /*0x100aac510*/
    v134 = v149; /*0x100aac51b*/
    v133 = v148; /*0x100aac52a*/
    v132 = (_QWORD *)v147; /*0x100aac531*/
    v29 = &v143; /*0x100aac538*/
    v34 = &v125; /*0x100aac53c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aac54a*/
      &v143,
      &v125,
      &v132);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v34); /*0x100aac54f*/
  v35 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aac55e*/
  if ( !v35 ) /*0x100aac566*/
    goto LABEL_79; /*0x100aac566*/
  *v35 = 1701605234; /*0x100aac56f*/
  v121 = 4; /*0x100aac575*/
  v122 = v35; /*0x100aac580*/
  v123 = 4; /*0x100aac587*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aac592*/
  v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100aac5a1*/
  if ( !v36 ) /*0x100aac5a9*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100aad58a*/
  *(_QWORD *)v36 = 0x6E61747369737361LL; /*0x100aac5b9*/
  *(_BYTE *)(v36 + 8) = 116; /*0x100aac5bc*/
  LOBYTE(v147) = 3; /*0x100aac5c0*/
  v148 = 9; /*0x100aac5c4*/
  v149 = v36; /*0x100aac5cc*/
  v150 = 9; /*0x100aac5d0*/
  v37 = (char **)&v136; /*0x100aac5d8*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v115, &v121); /*0x100aac5ed*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aac5f9*/
  {
    v38 = v137; /*0x100aac5fb*/
    v39 = 32LL * (_QWORD)v139; /*0x100aac609*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aac612*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aac61b*/
    v40 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aac61f*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aac628*/
    v143 = v40; /*0x100aac62c*/
    *(_QWORD *)((char *)v137 + v39 + 24) = v150; /*0x100aac634*/
    *(_QWORD *)((char *)v38 + v39 + 16) = v149; /*0x100aac63d*/
    v41 = v147; /*0x100aac642*/
    v42 = (char ***)v148; /*0x100aac646*/
    *(_QWORD *)((char *)v38 + v39 + 8) = v148; /*0x100aac64a*/
    *(_QWORD *)((char *)v38 + v39) = v41; /*0x100aac64f*/
    if ( (_BYTE)v143 != 6 ) /*0x100aac657*/
    {
      v37 = &v143; /*0x100aac65d*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aac661*/
    }
  }
  else
  {
    v131 = v142; /*0x100aac66f*/
    v130 = v141; /*0x100aac67a*/
    v129 = v140; /*0x100aac685*/
    v128 = v139; /*0x100aac693*/
    v127 = v138; /*0x100aac6a1*/
    v126 = v137; /*0x100aac6b6*/
    v125 = v136; /*0x100aac6bd*/
    v135 = v150; /*0x100aac6c8*/
    v134 = v149; /*0x100aac6d3*/
    v133 = v148; /*0x100aac6e2*/
    v132 = (_QWORD *)v147; /*0x100aac6e9*/
    v37 = &v143; /*0x100aac6f0*/
    v42 = &v125; /*0x100aac6f4*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aac702*/
      &v143,
      &v125,
      &v132);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, v42); /*0x100aac707*/
  v13 = 5; /*0x100aac70c*/
  v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aac71c*/
  if ( !v43 ) /*0x100aac724*/
    goto LABEL_79; /*0x100aac724*/
  *(_BYTE *)(v43 + 4) = 108; /*0x100aac72d*/
  *(_DWORD *)v43 = 1701080941; /*0x100aac731*/
  v121 = 5; /*0x100aac737*/
  v122 = (_DWORD *)v43; /*0x100aac742*/
  v123 = 5; /*0x100aac749*/
  v44 = v15[2]; /*0x100aac754*/
  if ( v44 < 0 ) /*0x100aac75b*/
  {
    v45 = 0; /*0x100aac75d*/
    goto LABEL_35; /*0x100aac75d*/
  }
  v46 = (const void *)v15[1]; /*0x100aac770*/
  if ( v44 ) /*0x100aac774*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100aac776*/
    v45 = 1; /*0x100aac77b*/
    v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v44, 1); /*0x100aac789*/
    if ( !v47 ) /*0x100aac791*/
LABEL_35:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45, v44); /*0x100aac760*/
    v48 = v47; /*0x100aac793*/
  }
  else
  {
    v48 = 1; /*0x100aac798*/
  }
  memcpy((void *)v48, v46, v44); /*0x100aac7a6*/
  LOBYTE(v147) = 3; /*0x100aac7ab*/
  v148 = v44; /*0x100aac7af*/
  v149 = v48; /*0x100aac7b3*/
  v150 = v44; /*0x100aac7b7*/
  v49 = (char **)&v136; /*0x100aac7bb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v115, &v121); /*0x100aac7d0*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aac7e6*/
  {
    v50 = v137; /*0x100aac7e8*/
    v51 = 32LL * (_QWORD)v139; /*0x100aac7f6*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aac7ff*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aac808*/
    v52 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aac80c*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aac815*/
    v143 = v52; /*0x100aac819*/
    *(_QWORD *)((char *)v137 + v51 + 24) = v150; /*0x100aac821*/
    *(_QWORD *)((char *)v50 + v51 + 16) = v149; /*0x100aac82a*/
    v53 = v147; /*0x100aac82f*/
    v54 = (char ***)v148; /*0x100aac833*/
    *(_QWORD *)((char *)v50 + v51 + 8) = v148; /*0x100aac837*/
    *(_QWORD *)((char *)v50 + v51) = v53; /*0x100aac83c*/
    if ( (_BYTE)v143 != 6 ) /*0x100aac844*/
    {
      v49 = &v143; /*0x100aac84a*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aac84e*/
    }
  }
  else
  {
    v131 = v142; /*0x100aac85c*/
    v130 = v141; /*0x100aac867*/
    v129 = v140; /*0x100aac872*/
    v128 = v139; /*0x100aac880*/
    v127 = v138; /*0x100aac88e*/
    v126 = v137; /*0x100aac8a3*/
    v125 = v136; /*0x100aac8aa*/
    v135 = v150; /*0x100aac8b5*/
    v134 = v149; /*0x100aac8c0*/
    v133 = v148; /*0x100aac8cf*/
    v132 = (_QWORD *)v147; /*0x100aac8d6*/
    v49 = &v143; /*0x100aac8dd*/
    v54 = &v125; /*0x100aac8e1*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aac8ef*/
      &v143,
      &v125,
      &v132);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v54); /*0x100aac8f4*/
  v13 = 7; /*0x100aac8f9*/
  v55 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100aac909*/
  if ( !v55 ) /*0x100aac911*/
    goto LABEL_79; /*0x100aac911*/
  *(_DWORD *)((char *)v55 + 3) = 1953391988; /*0x100aac917*/
  *v55 = 1953394531; /*0x100aac91e*/
  v121 = 7; /*0x100aac924*/
  v122 = v55; /*0x100aac92f*/
  v123 = 7; /*0x100aac936*/
  v148 = 0; /*0x100aac941*/
  v149 = 8; /*0x100aac949*/
  v150 = 0; /*0x100aac951*/
  LOBYTE(v147) = 4; /*0x100aac959*/
  v56 = (char **)&v136; /*0x100aac95d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v115, &v121); /*0x100aac972*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aac97e*/
  {
    v57 = v137; /*0x100aac980*/
    v58 = 32LL * (_QWORD)v139; /*0x100aac98e*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aac997*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aac9a0*/
    v59 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aac9a4*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aac9ad*/
    v143 = v59; /*0x100aac9b1*/
    *(_QWORD *)((char *)v137 + v58 + 24) = v150; /*0x100aac9b9*/
    *(_QWORD *)((char *)v57 + v58 + 16) = v149; /*0x100aac9c2*/
    v60 = v147; /*0x100aac9c7*/
    v61 = (char ***)v148; /*0x100aac9cb*/
    *(_QWORD *)((char *)v57 + v58 + 8) = v148; /*0x100aac9cf*/
    *(_QWORD *)((char *)v57 + v58) = v60; /*0x100aac9d4*/
    if ( (_BYTE)v143 != 6 ) /*0x100aac9dc*/
    {
      v56 = &v143; /*0x100aac9e2*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aac9e6*/
    }
  }
  else
  {
    v131 = v142; /*0x100aac9f4*/
    v130 = v141; /*0x100aac9ff*/
    v129 = v140; /*0x100aaca0a*/
    v128 = v139; /*0x100aaca18*/
    v127 = v138; /*0x100aaca26*/
    v126 = v137; /*0x100aaca3b*/
    v125 = v136; /*0x100aaca42*/
    v135 = v150; /*0x100aaca4d*/
    v134 = v149; /*0x100aaca58*/
    v133 = v148; /*0x100aaca67*/
    v132 = (_QWORD *)v147; /*0x100aaca6e*/
    v56 = &v143; /*0x100aaca75*/
    v61 = &v125; /*0x100aaca79*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aaca87*/
      &v143,
      &v125,
      &v132);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, v61); /*0x100aaca8c*/
  v13 = 11; /*0x100aaca91*/
  v62 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100aacaa1*/
  if ( !v62 ) /*0x100aacaa9*/
    goto LABEL_79; /*0x100aacaa9*/
  qmemcpy(v62, "stop_reason", 11); /*0x100aacab9*/
  v121 = 11; /*0x100aacac3*/
  v122 = v62; /*0x100aacace*/
  v123 = 11; /*0x100aacad5*/
  LOBYTE(v117) = 0; /*0x100aacae0*/
  v150 = v120; /*0x100aacaee*/
  v149 = v119; /*0x100aacb00*/
  v148 = (__int64)v118; /*0x100aacb04*/
  v147 = (__int64)v117; /*0x100aacb0f*/
  v63 = (char **)&v136; /*0x100aacb13*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v115, &v121); /*0x100aacb28*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aacb34*/
  {
    v64 = v137; /*0x100aacb36*/
    v65 = 32LL * (_QWORD)v139; /*0x100aacb44*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aacb4d*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aacb56*/
    v66 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aacb5a*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aacb63*/
    v143 = v66; /*0x100aacb67*/
    *(_QWORD *)((char *)v137 + v65 + 24) = v120; /*0x100aacb72*/
    *(_QWORD *)((char *)v64 + v65 + 16) = v119; /*0x100aacb7e*/
    v67 = v117; /*0x100aacb83*/
    v68 = v118; /*0x100aacb8a*/
    *(_QWORD *)((char *)v64 + v65 + 8) = v118; /*0x100aacb91*/
    *(_QWORD *)((char *)v64 + v65) = v67; /*0x100aacb96*/
    if ( (_BYTE)v143 != 6 ) /*0x100aacb9e*/
    {
      v63 = &v143; /*0x100aacba4*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aacba8*/
    }
  }
  else
  {
    v131 = v142; /*0x100aacbb6*/
    v130 = v141; /*0x100aacbc1*/
    v129 = v140; /*0x100aacbcc*/
    v128 = v139; /*0x100aacbda*/
    v127 = v138; /*0x100aacbe8*/
    v126 = v137; /*0x100aacbfd*/
    v125 = v136; /*0x100aacc04*/
    v135 = v120; /*0x100aacc12*/
    v134 = v119; /*0x100aacc20*/
    v133 = (__int64)v118; /*0x100aacc35*/
    v132 = v117; /*0x100aacc3c*/
    v63 = &v143; /*0x100aacc43*/
    v68 = &v125; /*0x100aacc47*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aacc55*/
      &v143,
      &v125,
      &v132);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v63, v68); /*0x100aacc5a*/
  v13 = 13; /*0x100aacc5f*/
  v69 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100aacc6f*/
  if ( !v69 ) /*0x100aacc77*/
    goto LABEL_79; /*0x100aacc77*/
  qmemcpy(v69, "stop_sequence", 13); /*0x100aacc95*/
  v147 = 13; /*0x100aacc98*/
  v148 = (__int64)v69; /*0x100aacca0*/
  v149 = 13; /*0x100aacca4*/
  v70 = (char **)&v136; /*0x100aaccac*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v115, &v147); /*0x100aaccbe*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aaccca*/
  {
    v71 = v137; /*0x100aacccc*/
    v72 = 32LL * (_QWORD)v139; /*0x100aaccda*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aacce3*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aaccec*/
    v73 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aaccf0*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aaccf9*/
    v143 = v73; /*0x100aaccfd*/
    *(_QWORD *)((char *)v137 + v72 + 24) = v120; /*0x100aacd08*/
    *(_QWORD *)((char *)v71 + v72 + 16) = v119; /*0x100aacd14*/
    v74 = v117; /*0x100aacd19*/
    v75 = v118; /*0x100aacd20*/
    *(_QWORD *)((char *)v71 + v72 + 8) = v118; /*0x100aacd27*/
    *(_QWORD *)((char *)v71 + v72) = v74; /*0x100aacd2c*/
    if ( (_BYTE)v143 != 6 ) /*0x100aacd34*/
    {
      v70 = &v143; /*0x100aacd3a*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aacd3e*/
    }
  }
  else
  {
    v131 = v142; /*0x100aacd4c*/
    v130 = v141; /*0x100aacd57*/
    v129 = v140; /*0x100aacd62*/
    v128 = v139; /*0x100aacd70*/
    v127 = v138; /*0x100aacd7e*/
    v126 = v137; /*0x100aacd93*/
    v125 = v136; /*0x100aacd9a*/
    v135 = v120; /*0x100aacda8*/
    v134 = v119; /*0x100aacdb6*/
    v133 = (__int64)v118; /*0x100aacdcb*/
    v132 = v117; /*0x100aacdd2*/
    v70 = &v143; /*0x100aacdd9*/
    v75 = &v125; /*0x100aacddd*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aacdeb*/
      &v143,
      &v125,
      &v132);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v75); /*0x100aacdf0*/
  v13 = 5; /*0x100aacdf5*/
  v76 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aace05*/
  if ( !v76 ) /*0x100aace0d*/
LABEL_79:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13); /*0x100aad548*/
  *(_BYTE *)(v76 + 4) = 101; /*0x100aace16*/
  *(_DWORD *)v76 = 1734439797; /*0x100aace1a*/
  v100[0] = 5; /*0x100aace20*/
  v100[1] = v76; /*0x100aace2b*/
  v100[2] = 5; /*0x100aace32*/
  v106[0] = 0; /*0x100aace3d*/
  v107 = 0; /*0x100aace48*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100aace53*/
  v77 = 12; /*0x100aace58*/
  v78 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100aace68*/
  if ( !v78 ) /*0x100aace70*/
    goto LABEL_84; /*0x100aace70*/
  qmemcpy(v78, "input_tokens", 12); /*0x100aace80*/
  v103 = 12; /*0x100aace8a*/
  v104 = v78; /*0x100aace95*/
  v105 = 12; /*0x100aace9c*/
  LOBYTE(v147) = 2; /*0x100aacea7*/
  v148 = 0; /*0x100aaceab*/
  v149 = 0; /*0x100aaceb3*/
  v79 = (char **)&v136; /*0x100aacebb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v106, &v103); /*0x100aaced0*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aacedc*/
  {
    v80 = v137; /*0x100aacede*/
    v81 = 32LL * (_QWORD)v139; /*0x100aaceec*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aacef5*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aacefe*/
    v82 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aacf02*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aacf0b*/
    v143 = v82; /*0x100aacf0f*/
    *(_QWORD *)((char *)v137 + v81 + 24) = v150; /*0x100aacf17*/
    *(_QWORD *)((char *)v80 + v81 + 16) = v149; /*0x100aacf20*/
    v83 = v147; /*0x100aacf25*/
    v84 = (char ***)v148; /*0x100aacf29*/
    *(_QWORD *)((char *)v80 + v81 + 8) = v148; /*0x100aacf2d*/
    *(_QWORD *)((char *)v80 + v81) = v83; /*0x100aacf32*/
    if ( (_BYTE)v143 != 6 ) /*0x100aacf3a*/
    {
      v79 = &v143; /*0x100aacf40*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aacf44*/
    }
  }
  else
  {
    v131 = v142; /*0x100aacf52*/
    v130 = v141; /*0x100aacf5d*/
    v129 = v140; /*0x100aacf68*/
    v128 = v139; /*0x100aacf76*/
    v127 = v138; /*0x100aacf84*/
    v126 = v137; /*0x100aacf99*/
    v125 = v136; /*0x100aacfa0*/
    v135 = v150; /*0x100aacfab*/
    v134 = v149; /*0x100aacfb6*/
    v133 = v148; /*0x100aacfc5*/
    v132 = (_QWORD *)v147; /*0x100aacfcc*/
    v79 = &v143; /*0x100aacfd3*/
    v84 = &v125; /*0x100aacfd7*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aacfe5*/
      &v143,
      &v125,
      &v132);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v79, v84); /*0x100aacfea*/
  v77 = 13; /*0x100aacfef*/
  v85 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100aacfff*/
  if ( !v85 ) /*0x100aad007*/
LABEL_84:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v77); /*0x100aad599*/
  qmemcpy(v85, "output_tokens", 13); /*0x100aad025*/
  v103 = 13; /*0x100aad028*/
  v104 = v85; /*0x100aad033*/
  v105 = 13; /*0x100aad03a*/
  LOBYTE(v147) = 2; /*0x100aad045*/
  v148 = 0; /*0x100aad049*/
  v149 = 0; /*0x100aad051*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v106, &v103); /*0x100aad06e*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aad07a*/
  {
    v86 = v137; /*0x100aad07c*/
    v87 = 32LL * (_QWORD)v139; /*0x100aad08a*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aad093*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aad09c*/
    v88 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aad0a0*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aad0a9*/
    v143 = v88; /*0x100aad0ad*/
    *(_QWORD *)((char *)v137 + v87 + 24) = v150; /*0x100aad0b5*/
    *(_QWORD *)((char *)v86 + v87 + 16) = v149; /*0x100aad0be*/
    v89 = v147; /*0x100aad0c3*/
    *(_QWORD *)((char *)v86 + v87 + 8) = v148; /*0x100aad0cb*/
    *(_QWORD *)((char *)v86 + v87) = v89; /*0x100aad0d0*/
    if ( (_BYTE)v143 != 6 ) /*0x100aad0d8*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aad0e2*/
  }
  else
  {
    v131 = v142; /*0x100aad0f0*/
    v130 = v141; /*0x100aad0fb*/
    v129 = v140; /*0x100aad106*/
    v128 = v139; /*0x100aad114*/
    v127 = v138; /*0x100aad122*/
    v126 = v137; /*0x100aad137*/
    v125 = v136; /*0x100aad13e*/
    v135 = v150; /*0x100aad149*/
    v134 = v149; /*0x100aad154*/
    v133 = v148; /*0x100aad163*/
    v132 = (_QWORD *)v147; /*0x100aad16a*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aad183*/
      &v143,
      &v125,
      &v132);
  }
  v122 = (_DWORD *)v106[0]; /*0x100aad196*/
  v123 = v106[1]; /*0x100aad19d*/
  v124 = v107; /*0x100aad1ab*/
  LOBYTE(v121) = 5; /*0x100aad1b2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v115, v100); /*0x100aad1ce*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aad1da*/
  {
    v90 = v137; /*0x100aad1dc*/
    v91 = 32LL * (_QWORD)v139; /*0x100aad1ea*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aad1f3*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aad1fc*/
    v92 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aad200*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aad209*/
    v143 = v92; /*0x100aad20d*/
    *(_QWORD *)((char *)v137 + v91 + 24) = v124; /*0x100aad218*/
    *(_QWORD *)((char *)v90 + v91 + 16) = v123; /*0x100aad224*/
    v93 = v121; /*0x100aad229*/
    *(_QWORD *)((char *)v90 + v91 + 8) = v122; /*0x100aad237*/
    *(_QWORD *)((char *)v90 + v91) = v93; /*0x100aad23c*/
    if ( (_BYTE)v143 != 6 ) /*0x100aad244*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aad24e*/
  }
  else
  {
    v131 = v142; /*0x100aad25c*/
    v130 = v141; /*0x100aad267*/
    v129 = v140; /*0x100aad272*/
    v128 = v139; /*0x100aad280*/
    v127 = v138; /*0x100aad28e*/
    v126 = v137; /*0x100aad2a3*/
    v125 = v136; /*0x100aad2aa*/
    v135 = v124; /*0x100aad2b8*/
    v134 = v123; /*0x100aad2c6*/
    v133 = (__int64)v122; /*0x100aad2db*/
    v132 = (_QWORD *)v121; /*0x100aad2e2*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aad2fb*/
      &v143,
      &v125,
      &v132);
  }
  v112 = v115[0]; /*0x100aad30e*/
  v113 = v115[1]; /*0x100aad315*/
  v114 = v116; /*0x100aad323*/
  LOBYTE(v111) = 5; /*0x100aad32a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, v108, v101); /*0x100aad349*/
  v94 = v102; /*0x100aad35f*/
  if ( v136 == (char **)0x8000000000000000LL ) /*0x100aad366*/
  {
    v95 = v137; /*0x100aad368*/
    v96 = 32LL * (_QWORD)v139; /*0x100aad376*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100aad37f*/
    v145 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100aad388*/
    v97 = *((char **)v137 + 4 * (_QWORD)v139); /*0x100aad38c*/
    v144 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 1); /*0x100aad395*/
    v143 = v97; /*0x100aad399*/
    *(_QWORD *)((char *)v137 + v96 + 24) = v114; /*0x100aad3a4*/
    *(_QWORD *)((char *)v95 + v96 + 16) = v113; /*0x100aad3b0*/
    v98 = v111; /*0x100aad3b5*/
    *(_QWORD *)((char *)v95 + v96 + 8) = v112; /*0x100aad3c3*/
    *(_QWORD *)((char *)v95 + v96) = v98; /*0x100aad3c8*/
    if ( (_BYTE)v143 != 6 ) /*0x100aad3d0*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100aad3da*/
  }
  else
  {
    v131 = v142; /*0x100aad3e8*/
    v130 = v141; /*0x100aad3f3*/
    v129 = v140; /*0x100aad3fe*/
    v128 = v139; /*0x100aad40c*/
    v127 = v138; /*0x100aad41a*/
    v126 = v137; /*0x100aad42f*/
    v125 = v136; /*0x100aad436*/
    v135 = v114; /*0x100aad444*/
    v134 = v113; /*0x100aad452*/
    v133 = v112; /*0x100aad467*/
    v132 = v111; /*0x100aad46e*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aad487*/
      &v143,
      &v125,
      &v132);
  }
  v137 = (__int64 (__fastcall *)())v108[0]; /*0x100aad49a*/
  v138 = (_QWORD **)v108[1]; /*0x100aad4a1*/
  v139 = v109; /*0x100aad4af*/
  LOBYTE(v136) = 5; /*0x100aad4b6*/
  v143 = "message_startcontent_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop"; /*0x100aad4c4*/
  v144 = 13; /*0x100aad4c8*/
  v132 = &v136; /*0x100aad4d0*/
  v125 = &v143; /*0x100aad4db*/
  v126 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aad4e9*/
  v127 = &v132; /*0x100aad4f7*/
  v128 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100aad505*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v94, &unk_1017C9F28, &v125); /*0x100aad51d*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v136); /*0x100aad52e*/
}