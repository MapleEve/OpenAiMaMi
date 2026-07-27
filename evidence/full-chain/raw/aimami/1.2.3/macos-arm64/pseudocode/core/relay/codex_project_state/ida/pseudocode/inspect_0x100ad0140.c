// __ZN13codexmate_lib4core5relay19codex_project_state7inspect @ 0x100ad0140 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::inspect::hec557ca3f520652c(
        __int64 a1,
        __int64 *a2,
        __m128 a3)
{
  int v3; // r13d
  __int64 v4; // r15
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  __m256i *v11; // r12
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rsi
  char *v26; // r14
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdx
  __m256i **v30; // rdi
  __int64 v31; // rsi
  double v32; // xmm0_8
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // r12
  _QWORD *v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r14
  _QWORD *v42; // r13
  __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // r14
  _QWORD *v47; // r13
  __int64 v48; // r12
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 *v53; // rax
  char v54; // r13
  __int64 v55; // r12
  __int64 v56; // r14
  __int64 v57; // r15
  __int64 (__fastcall **v58)(); // r14
  char v59; // r13
  _QWORD *v60; // r12
  __int64 v61; // rsi
  __int64 (__fastcall **v62)(); // rax
  __int64 v63; // rcx
  __int64 i; // rax
  __int64 v65; // rsi
  __int64 v67; // r15
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  int v74; // eax
  void *v75; // rax
  __int64 v76; // r14
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // [rsp+0h] [rbp-1D0h]
  __int64 v80; // [rsp+8h] [rbp-1C8h]
  __int64 v81; // [rsp+10h] [rbp-1C0h]
  __int64 v82; // [rsp+18h] [rbp-1B8h]
  __m256i *v83; // [rsp+20h] [rbp-1B0h] BYREF
  __int64 (__fastcall **v84)(); // [rsp+28h] [rbp-1A8h]
  __int64 v85; // [rsp+30h] [rbp-1A0h]
  __int64 v86; // [rsp+38h] [rbp-198h]
  __int64 v87; // [rsp+40h] [rbp-190h]
  __int64 (__fastcall **v88)(); // [rsp+48h] [rbp-188h]
  __int64 v89; // [rsp+50h] [rbp-180h]
  _QWORD v90[2]; // [rsp+58h] [rbp-178h] BYREF
  __int128 v91; // [rsp+68h] [rbp-168h]
  __int64 v92; // [rsp+B8h] [rbp-118h] BYREF
  __int64 v93; // [rsp+C0h] [rbp-110h]
  __int64 v94; // [rsp+C8h] [rbp-108h]
  __int64 *v95; // [rsp+D0h] [rbp-100h]
  __int64 v96; // [rsp+D8h] [rbp-F8h]
  __int64 v97; // [rsp+E0h] [rbp-F0h]
  __int64 v98; // [rsp+E8h] [rbp-E8h]
  int v99; // [rsp+F4h] [rbp-DCh]
  __int64 v100; // [rsp+F8h] [rbp-D8h]
  __int64 v101; // [rsp+100h] [rbp-D0h]
  __int64 v102; // [rsp+108h] [rbp-C8h]
  __m256i *v103; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v104; // [rsp+118h] [rbp-B8h]
  __int64 (__fastcall **v105)(); // [rsp+120h] [rbp-B0h]
  __int64 v106; // [rsp+128h] [rbp-A8h] BYREF
  __m256i v107; // [rsp+130h] [rbp-A0h] BYREF
  int v108; // [rsp+154h] [rbp-7Ch]
  __int64 v109; // [rsp+158h] [rbp-78h] BYREF
  _BYTE v110[23]; // [rsp+160h] [rbp-70h]
  unsigned __int64 v111; // [rsp+178h] [rbp-58h]
  __int64 v112; // [rsp+180h] [rbp-50h]
  _QWORD *v113; // [rsp+188h] [rbp-48h]
  char v114; // [rsp+197h] [rbp-39h] BYREF
  __int64 v115; // [rsp+198h] [rbp-38h]
  char v116; // [rsp+1A7h] [rbp-29h]

  v7 = a2[1]; /*0x100ad015a*/
  v95 = a2; /*0x100ad015e*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v92, v7, a2[2], ".codex-global-state.json", 24); /*0x100ad017d*/
  v8 = v94; /*0x100ad0189*/
  v96 = v93; /*0x100ad0197*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v83, v93, v94); /*0x100ad01a1*/
  v9 = 0x8000000000000000LL; /*0x100ad01a6*/
  if ( (_DWORD)v83 == 1 ) /*0x100ad01b7*/
  {
    v10 = (unsigned __int8)v84 & 3; /*0x100ad01c2*/
    if ( (_DWORD)v10 == 1 ) /*0x100ad01c8*/
    {
      v26 = (char *)v84 - 1; /*0x100ad043a*/
      v4 = *(__int64 *)((char *)v84 - 1); /*0x100ad043e*/
      v27 = *(__int64 *)((char *)v84 + 7); /*0x100ad0442*/
      if ( *(_QWORD *)v27 ) /*0x100ad0446*/
        (*(void (__fastcall **)(__int64))v27)(v4); /*0x100ad0452*/
      v28 = *(_QWORD *)(v27 + 8); /*0x100ad0454*/
      if ( v28 ) /*0x100ad045c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v28, *(_QWORD *)(v27 + 16)); /*0x100ad0466*/
      *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 24, 8); /*0x100ad0478*/
      v9 = 0x8000000000000000LL; /*0x100ad047d*/
      v3 = 0; /*0x100ad0480*/
    }
    else
    {
      v3 = 0; /*0x100ad01ce*/
    }
    v115 = 0x8000000000000000LL; /*0x100ad0483*/
LABEL_26:
    v107.i8[0] = 6; /*0x100ad0487*/
    v111 = 0x8000000000000000LL; /*0x100ad048e*/
LABEL_27:
    LOBYTE(v4) = 1; /*0x100ad0492*/
    LODWORD(v113) = 0; /*0x100ad0495*/
    v116 = v3; /*0x100ad049c*/
    v108 = 0; /*0x100ad04a0*/
LABEL_28:
    v103 = nullptr; /*0x100ad04a7*/
    v105 = nullptr; /*0x100ad04b2*/
    v29 = 0; /*0x100ad04bd*/
    goto LABEL_29; /*0x100ad04bd*/
  }
  v4 = (__int64)&v103; /*0x100ad01d6*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v103, v96, v8); /*0x100ad01ea*/
  v11 = v103; /*0x100ad01ef*/
  if ( v103 == (__m256i *)0x8000000000000000LL ) /*0x100ad0203*/
  {
    v12 = v104; /*0x100ad0209*/
    v106 = v104; /*0x100ad0210*/
    v107.i64[0] = 0; /*0x100ad0217*/
    *(__int128 *)((char *)v107.i128 + 8) = 1u; /*0x100ad0222*/
    v85 = 1610612768; /*0x100ad0238*/
    v83 = &v107; /*0x100ad024a*/
    v84 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100ad0258*/
    if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0( /*0x100ad026d*/
                            &v106,
                            &v83) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100ad102c*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        &v114,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v97 = v107.i64[1]; /*0x100ad028c*/
    v115 = v107.i64[0]; /*0x100ad028c*/
    v81 = v107.i64[2]; /*0x100ad029a*/
    if ( (v12 & 3) == 1 ) /*0x100ad02aa*/
    {
      v13 = v12 - 1; /*0x100ad02ac*/
      v4 = *(_QWORD *)(v12 - 1); /*0x100ad02b1*/
      v14 = *(_QWORD *)(v12 + 7); /*0x100ad02b6*/
      if ( *(_QWORD *)v14 ) /*0x100ad02bb*/
        (*(void (__fastcall **)(__int64))v14)(v4); /*0x100ad02c7*/
      v15 = *(_QWORD *)(v14 + 8); /*0x100ad02c9*/
      if ( v15 ) /*0x100ad02d1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v15, *(_QWORD *)(v14 + 16)); /*0x100ad02db*/
      *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x100ad02ed*/
    }
    LOBYTE(v3) = 1; /*0x100ad02f2*/
    v9 = 0x8000000000000000LL; /*0x100ad02f5*/
    goto LABEL_26; /*0x100ad02ff*/
  }
  v16 = v104; /*0x100ad0304*/
  v83 = (__m256i *)v104; /*0x100ad0312*/
  v84 = v105; /*0x100ad0319*/
  v85 = 0; /*0x100ad0320*/
  v86 = 0; /*0x100ad032b*/
  v87 = v104; /*0x100ad0336*/
  v88 = v105; /*0x100ad033d*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v107, &v83); /*0x100ad0352*/
  v3 = v107.u8[0]; /*0x100ad0357*/
  if ( v107.u8[0] != 5 ) /*0x100ad0363*/
  {
    v115 = v16; /*0x100ad0369*/
    if ( v107.u8[0] == 6 ) /*0x100ad0371*/
    {
      v21 = (_QWORD *)v107.i64[1]; /*0x100ad0377*/
      v106 = v107.i64[1]; /*0x100ad037e*/
      v103 = nullptr; /*0x100ad0385*/
      v104 = 1; /*0x100ad0390*/
      v105 = nullptr; /*0x100ad039b*/
      v85 = 1610612768; /*0x100ad03a6*/
      v83 = (__m256i *)&v103; /*0x100ad03b1*/
      v84 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100ad03bf*/
      if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x100ad03d4*/
                              &v106,
                              &v83,
                              v17,
                              v18,
                              v19,
                              v20) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100ad1051*/
          &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
          55,
          &v114,
          &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
          &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
      v111 = (unsigned __int64)v103; /*0x100ad03e8*/
      v102 = v104; /*0x100ad03f3*/
      v4 = (__int64)v105; /*0x100ad03fa*/
      if ( *v21 == 1 ) /*0x100ad0408*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v21 + 1, &v83, v22, v23, v24); /*0x100ad0f37*/
      }
      else if ( !*v21 ) /*0x100ad0401*/
      {
        v25 = v21[2]; /*0x100ad0417*/
        if ( v25 ) /*0x100ad041e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21[1], v25, 1); /*0x100ad042d*/
      }
      *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 40, 8); /*0x100ad0f49*/
      v76 = v102; /*0x100ad0f4e*/
      if ( !v11 ) /*0x100ad0f58*/
        goto LABEL_110; /*0x100ad0f58*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v107, &v83); /*0x100ad0d36*/
      v4 = 34; /*0x100ad0d3b*/
      v75 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100ad0d4b*/
      if ( !v75 ) /*0x100ad0d53*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100ad1075*/
      v76 = (__int64)v75; /*0x100ad0d59*/
      qmemcpy(v75, "global-state root is not an object", 34); /*0x100ad0d90*/
      v111 = 34; /*0x100ad0d9f*/
      if ( !v11 ) /*0x100ad0da6*/
        goto LABEL_110; /*0x100ad0da6*/
    }
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, v11, 1); /*0x100ad0db4*/
LABEL_110:
    v82 = v4; /*0x100ad0db9*/
    v102 = v76; /*0x100ad0dc0*/
    if ( (_BYTE)v3 != 6 ) /*0x100ad0dcb*/
      *(double *)a3.i64 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v107); /*0x100ad0dd4*/
    v107.i8[0] = 6; /*0x100ad0dd9*/
    v10 = *(_QWORD *)v110; /*0x100ad0de4*/
    *(__int64 *)((char *)v107.i64 + 1) = v109; /*0x100ad0de8*/
    *(__int128 *)((char *)v107.i128 + 9) = *(_OWORD *)v110; /*0x100ad0def*/
    v107.i64[3] = *(_QWORD *)&v110[15]; /*0x100ad0e05*/
    LOBYTE(v3) = 1; /*0x100ad0e0c*/
    v9 = 0x8000000000000000LL; /*0x100ad0e0f*/
    v115 = 0x8000000000000000LL; /*0x100ad0e19*/
    goto LABEL_27; /*0x100ad0e1d*/
  }
  *(_QWORD *)&v110[15] = v107.i64[3]; /*0x100ad0c2f*/
  *(_OWORD *)v110 = *(__int128 *)((char *)v107.i128 + 9); /*0x100ad0c4c*/
  v109 = *(__int64 *)((char *)v107.i64 + 1); /*0x100ad0c50*/
  if ( v11 ) /*0x100ad0c57*/
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v11, 1); /*0x100ad0c64*/
  v107.i8[0] = 5; /*0x100ad0c69*/
  *(__int64 *)((char *)v107.i64 + 1) = v109; /*0x100ad0c78*/
  *(__int128 *)((char *)v107.i128 + 9) = *(_OWORD *)v110; /*0x100ad0c7f*/
  v107.i64[3] = *(_QWORD *)&v110[15]; /*0x100ad0c95*/
  v73 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad0caf*/
          "projectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
          22,
          &v107);
  v9 = 0x8000000000000000LL; /*0x100ad0cb4*/
  if ( !v73 || *(_BYTE *)v73 != 4 ) /*0x100ad0cca*/
  {
    LOBYTE(v73) = 1; /*0x100ad0e71*/
    LODWORD(v113) = v73; /*0x100ad0e73*/
    LODWORD(v4) = 0; /*0x100ad0e76*/
    LOBYTE(v3) = 1; /*0x100ad0e79*/
    v111 = 0x8000000000000000LL; /*0x100ad0e7c*/
    v116 = 1; /*0x100ad0e80*/
    LOBYTE(v73) = 1; /*0x100ad0e84*/
    v108 = v73; /*0x100ad0e86*/
    v115 = 0x8000000000000000LL; /*0x100ad0e89*/
    goto LABEL_28; /*0x100ad0e8d*/
  }
  _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h01917927eb5c2747( /*0x100ad0ce6*/
    &v83,
    *(_QWORD *)(v73 + 16),
    *(_QWORD *)(v73 + 16) + 32LL * *(_QWORD *)(v73 + 24));
  v74 = v85; /*0x100ad0ceb*/
  v105 = (__int64 (__fastcall **)())v85; /*0x100ad0cf2*/
  v29 = (__int64)v83; /*0x100ad0cf9*/
  v10 = (__int64)v84; /*0x100ad0d00*/
  v104 = (__int64)v84; /*0x100ad0d07*/
  v103 = v83; /*0x100ad0d0e*/
  LOBYTE(v74) = 1; /*0x100ad0d15*/
  LODWORD(v113) = v74; /*0x100ad0d17*/
  LODWORD(v4) = 0; /*0x100ad0d1a*/
  LOBYTE(v3) = 1; /*0x100ad0d1d*/
  v111 = 0x8000000000000000LL; /*0x100ad0d20*/
  v116 = 1; /*0x100ad0d24*/
  LOBYTE(v74) = 1; /*0x100ad0d28*/
  v108 = v74; /*0x100ad0d2a*/
  v115 = 0x8000000000000000LL; /*0x100ad0d2d*/
LABEL_29:
  v30 = &v83; /*0x100ad04bf*/
  v31 = (__int64)v95; /*0x100ad04c9*/
  v79 = v29; /*0x100ad04d0*/
  v99 = v4; /*0x100ad04d7*/
  v32 = codexmate_lib::core::relay::codex_project_state::collect_project_state_from_active_db::h5cda1553b816d601( /*0x100ad04de*/
          (unsigned __int64 *)&v83,
          v95,
          v29,
          v10,
          a3);
  if ( (_BYTE)v4 ) /*0x100ad04e6*/
  {
    v112 = 0; /*0x100ad04e8*/
    v33 = 0; /*0x100ad04f0*/
    v34 = 0; /*0x100ad04f3*/
    v98 = 0; /*0x100ad04f6*/
LABEL_65:
    v52 = 0; /*0x100ad07c0*/
    goto LABEL_66; /*0x100ad07c0*/
  }
  v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad0519*/
          &unk_10167D49C,
          30,
          &v107);
  if ( !v35 || *(_BYTE *)v35 != 4 ) /*0x100ad0526*/
  {
    v109 = 0; /*0x100ad0596*/
    v34 = 0; /*0x100ad05a4*/
    goto LABEL_40; /*0x100ad05ae*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1048dfd19ac0896e( /*0x100ad053b*/
    &v109,
    *(_QWORD *)(v35 + 16),
    *(_QWORD *)(v35 + 16) + 32LL * *(_QWORD *)(v35 + 24));
  v36 = *(_QWORD *)v110; /*0x100ad0540*/
  if ( !*(_QWORD *)&v110[8] ) /*0x100ad054b*/
  {
    v34 = 0; /*0x100ad0e22*/
    v69 = v109; /*0x100ad0e25*/
    if ( !v109 ) /*0x100ad0e2c*/
      goto LABEL_40; /*0x100ad0e2c*/
    goto LABEL_39; /*0x100ad0e2c*/
  }
  LODWORD(v112) = v3; /*0x100ad0551*/
  v37 = *(_QWORD *)&v110[8]; /*0x100ad0555*/
  v38 = (_QWORD *)(*(_QWORD *)v110 + 8LL); /*0x100ad0558*/
  v34 = *(_QWORD *)&v110[8]; /*0x100ad055c*/
  do /*0x100ad0577*/
  {
    v39 = *(v38 - 1); /*0x100ad057d*/
    if ( v39 ) /*0x100ad0584*/
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v38, v39, 1); /*0x100ad058f*/
    v38 += 3; /*0x100ad0570*/
    --v37; /*0x100ad0574*/
  }
  while ( v37 ); /*0x100ad0577*/
  v9 = 0x8000000000000000LL; /*0x100ad0b49*/
  v3 = v112; /*0x100ad0b53*/
  v69 = v109; /*0x100ad0b57*/
  if ( v109 ) /*0x100ad0b5e*/
LABEL_39:
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24 * v69, 8); /*0x100ad05b0*/
LABEL_40:
  v40 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad05c5*/
          &unk_10167D513,
          13,
          &v107);
  if ( !v40 || *(_BYTE *)v40 != 4 ) /*0x100ad05e5*/
  {
    v109 = 0; /*0x100ad0656*/
    v100 = 0; /*0x100ad0664*/
    goto LABEL_49; /*0x100ad0676*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1048dfd19ac0896e( /*0x100ad05fa*/
    &v109,
    *(_QWORD *)(v40 + 16),
    *(_QWORD *)(v40 + 16) + 32LL * *(_QWORD *)(v40 + 24));
  v41 = *(_QWORD *)v110; /*0x100ad05ff*/
  if ( !*(_QWORD *)&v110[8] ) /*0x100ad060a*/
  {
    v100 = 0; /*0x100ad0e37*/
    v70 = v109; /*0x100ad0e42*/
    if ( !v109 ) /*0x100ad0e49*/
      goto LABEL_49; /*0x100ad0e49*/
    goto LABEL_48; /*0x100ad0e49*/
  }
  LODWORD(v112) = v3; /*0x100ad0610*/
  v101 = v34; /*0x100ad0614*/
  v42 = (_QWORD *)(*(_QWORD *)v110 + 8LL); /*0x100ad061e*/
  v100 = *(_QWORD *)&v110[8]; /*0x100ad0622*/
  v43 = *(_QWORD *)&v110[8]; /*0x100ad0629*/
  do /*0x100ad0637*/
  {
    v44 = *(v42 - 1); /*0x100ad063d*/
    if ( v44 ) /*0x100ad0644*/
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v44, 1); /*0x100ad064f*/
    v42 += 3; /*0x100ad0630*/
    --v43; /*0x100ad0634*/
  }
  while ( v43 ); /*0x100ad0637*/
  v9 = 0x8000000000000000LL; /*0x100ad0b69*/
  v34 = v101; /*0x100ad0b6c*/
  v3 = v112; /*0x100ad0b73*/
  v70 = v109; /*0x100ad0b77*/
  if ( v109 ) /*0x100ad0b7e*/
LABEL_48:
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 24 * v70, 8); /*0x100ad0678*/
LABEL_49:
  v45 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad068d*/
          &unk_10167D520,
          22,
          &v107);
  if ( !v45 || *(_BYTE *)v45 != 4 ) /*0x100ad06ad*/
  {
    v109 = 0; /*0x100ad0726*/
    v98 = 0; /*0x100ad0734*/
    goto LABEL_58; /*0x100ad0746*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1048dfd19ac0896e( /*0x100ad06c2*/
    &v109,
    *(_QWORD *)(v45 + 16),
    *(_QWORD *)(v45 + 16) + 32LL * *(_QWORD *)(v45 + 24));
  v46 = *(_QWORD *)v110; /*0x100ad06c7*/
  if ( !*(_QWORD *)&v110[8] ) /*0x100ad06d2*/
  {
    v98 = 0; /*0x100ad0e54*/
    v71 = v109; /*0x100ad0e5f*/
    if ( !v109 ) /*0x100ad0e66*/
      goto LABEL_58; /*0x100ad0e66*/
    goto LABEL_57; /*0x100ad0e66*/
  }
  LODWORD(v112) = v3; /*0x100ad06d8*/
  v101 = v34; /*0x100ad06dc*/
  v47 = (_QWORD *)(*(_QWORD *)v110 + 8LL); /*0x100ad06e6*/
  v48 = *(_QWORD *)&v110[8]; /*0x100ad06ea*/
  v98 = *(_QWORD *)&v110[8]; /*0x100ad06ed*/
  do /*0x100ad0707*/
  {
    v49 = *(v47 - 1); /*0x100ad070d*/
    if ( v49 ) /*0x100ad0714*/
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v47, v49, 1); /*0x100ad071f*/
    v47 += 3; /*0x100ad0700*/
    --v48; /*0x100ad0704*/
  }
  while ( v48 ); /*0x100ad0707*/
  v9 = 0x8000000000000000LL; /*0x100ad0b89*/
  v34 = v101; /*0x100ad0b8c*/
  LOBYTE(v3) = v112; /*0x100ad0b93*/
  v71 = v109; /*0x100ad0b97*/
  if ( v109 ) /*0x100ad0b9e*/
LABEL_57:
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24 * v71, 8); /*0x100ad0748*/
LABEL_58:
  v50 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad075d*/
          "projectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''",
          22,
          &v107);
  v33 = v100; /*0x100ad0775*/
  if ( v50 && *(_BYTE *)v50 == 4 ) /*0x100ad0784*/
    v112 = *(_QWORD *)(v50 + 24); /*0x100ad078a*/
  else
    v112 = 0; /*0x100ad0790*/
  v30 = (__m256i **)&unk_10167D536; /*0x100ad0798*/
  v31 = 27; /*0x100ad07a6*/
  v51 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ad07ab*/
          &unk_10167D536,
          27,
          &v107);
  if ( !v51 || *(_BYTE *)v51 != 5 ) /*0x100ad07b8*/
    goto LABEL_65; /*0x100ad07b8*/
  v52 = *(_QWORD *)(v51 + 24); /*0x100ad07ba*/
LABEL_66:
  v53 = &v109; /*0x100ad07c2*/
  v101 = v34; /*0x100ad07ca*/
  v100 = v33; /*0x100ad07d1*/
  v80 = v52; /*0x100ad07d8*/
  if ( v115 != 0x8000000000000000LL || v88 ) /*0x100ad07e9*/
    goto LABEL_68; /*0x100ad07e9*/
  if ( (_BYTE)v3 ) /*0x100ad0ac2*/
  {
    if ( !(_BYTE)v113 ) /*0x100ad0acc*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v31); /*0x100ad0ad2*/
      v67 = 37; /*0x100ad0ad7*/
      v68 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x100ad0ae7*/
      if ( v68 ) /*0x100ad0aef*/
      {
        *(_QWORD *)((char *)v68 + 29) = 0x909EE6A3A7E895B3LL; /*0x100ad0aff*/
        v68[3] = 0xE895B3E6A097E620LL; /*0x100ad0b0d*/
        v113 = v68; /*0x100ad0b37*/
        qmemcpy(v68, ".codex-global-state.json", 24); /*0x100ad0b3b*/
        v9 = 37; /*0x100ad0b3e*/
LABEL_132:
        v109 = v9; /*0x100ad0ffb*/
        v53 = &v106; /*0x100ad0fff*/
        v54 = 1; /*0x100ad1006*/
        goto LABEL_69; /*0x100ad1009*/
      }
      goto LABEL_135; /*0x100ad0aef*/
    }
  }
  else if ( !v85 && v91 == 0 ) /*0x100ad0bbb*/
  {
    goto LABEL_68; /*0x100ad0bbb*/
  }
  if ( !v34 && v85 ) /*0x100ad0e9a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v31); /*0x100ad0ea0*/
    v67 = 55; /*0x100ad0ea5*/
    v77 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(55, 1); /*0x100ad0eb5*/
    if ( v77 ) /*0x100ad0ebd*/
    {
      *(_QWORD *)((char *)v77 + 47) = 0x64776320AE9BE7B9LL; /*0x100ad0ecd*/
      v77[5] = 0xB9A1E9A89CE598ADLL; /*0x100ad0edb*/
      v77[4] = 0xE593BAE58BA8E7BFLL; /*0x100ad0ee9*/
      v77[3] = 0xBAE786BDE48CBCEFLL; /*0x100ad0ef7*/
      v77[2] = 0xBAA9E7BAB8E4A38FLL; /*0x100ad0f05*/
      v77[1] = 0xE5A585E5AE9BE7B9LL; /*0x100ad0f13*/
      v113 = v77; /*0x100ad0f21*/
      *v77 = 0xA1E9207865646F43LL; /*0x100ad0f25*/
      v9 = 55; /*0x100ad0f28*/
      goto LABEL_132; /*0x100ad0f2e*/
    }
    goto LABEL_135; /*0x100ad0ebd*/
  }
  if ( *((_QWORD *)&v91 + 1) ) /*0x100ad0bdc*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v31); /*0x100ad0be2*/
    v67 = 67; /*0x100ad0be7*/
    v72 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(67, 1); /*0x100ad0bf7*/
    if ( v72 ) /*0x100ad0bff*/
    {
      v9 = 67; /*0x100ad0c0c*/
      v113 = v72; /*0x100ad0c17*/
      memcpy(v72, &unk_10167D2E3, 0x43u); /*0x100ad0c1e*/
      goto LABEL_132; /*0x100ad0c23*/
    }
LABEL_135:
    v115 = 0x8000000000000000LL; /*0x100ad1058*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v67); /*0x100ad1064*/
  }
  v54 = 0; /*0x100ad0f63*/
  if ( !v52 && (_QWORD)v91 ) /*0x100ad0f77*/
  {
    if ( v34 || v85 ) /*0x100ad0f8a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v31); /*0x100ad0f90*/
      v67 = 36; /*0x100ad0f95*/
      v78 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x100ad0fa5*/
      if ( v78 ) /*0x100ad0fad*/
      {
        *(_QWORD *)(v78 + 24) = 0xB8E484B0E5A098E6LL; /*0x100ad0fbd*/
        *(_QWORD *)(v78 + 16) = 0x849AE7AE9BE7B9A1LL; /*0x100ad0fcb*/
        *(_QWORD *)(v78 + 8) = 0xE9B088E58BA8E7BFLL; /*0x100ad0fd9*/
        *(_QWORD *)v78 = 0xBAE7207865646F43LL; /*0x100ad0fe7*/
        v113 = (_QWORD *)v78; /*0x100ad0fea*/
        *(_DWORD *)(v78 + 32) = -1163270214; /*0x100ad0fee*/
        v9 = 36; /*0x100ad0ff5*/
        goto LABEL_132; /*0x100ad0ff5*/
      }
      goto LABEL_135; /*0x100ad0fad*/
    }
LABEL_68:
    v54 = 0; /*0x100ad07ef*/
  }
LABEL_69:
  *v53 = v9; /*0x100ad07f2*/
  v55 = v109; /*0x100ad07f5*/
  v56 = v106; /*0x100ad07f9*/
  codexmate_lib::core::relay::codex_project_state::active_db_path::h3a30f1c5da4f6f85((size_t *)&v109, v95, v32); /*0x100ad0812*/
  *(_QWORD *)(a1 + 40) = v88; /*0x100ad081e*/
  *(_QWORD *)(a1 + 32) = v87; /*0x100ad0829*/
  *(_QWORD *)(a1 + 24) = v86; /*0x100ad0834*/
  *(_QWORD *)(a1 + 120) = v55; /*0x100ad0838*/
  *(_QWORD *)(a1 + 128) = v113; /*0x100ad0840*/
  *(_QWORD *)(a1 + 136) = v56; /*0x100ad0847*/
  *(_QWORD *)(a1 + 16) = v94; /*0x100ad0855*/
  *(_QWORD *)(a1 + 8) = v93; /*0x100ad0860*/
  *(_QWORD *)a1 = v92; /*0x100ad086b*/
  *(_BYTE *)(a1 + 216) = v116; /*0x100ad0872*/
  *(_BYTE *)(a1 + 217) = v108; /*0x100ad087b*/
  *(_QWORD *)(a1 + 48) = v111; /*0x100ad0885*/
  *(_QWORD *)(a1 + 56) = v102; /*0x100ad0890*/
  *(_QWORD *)(a1 + 64) = v82; /*0x100ad089b*/
  *(_QWORD *)(a1 + 72) = v115; /*0x100ad08a3*/
  *(_QWORD *)(a1 + 80) = v97; /*0x100ad08ae*/
  *(_QWORD *)(a1 + 88) = v81; /*0x100ad08b9*/
  *(_QWORD *)(a1 + 144) = v101; /*0x100ad08c4*/
  *(_QWORD *)(a1 + 152) = v100; /*0x100ad08d2*/
  *(_QWORD *)(a1 + 160) = v98; /*0x100ad08e0*/
  *(_QWORD *)(a1 + 168) = v112; /*0x100ad08eb*/
  *(_QWORD *)(a1 + 176) = v80; /*0x100ad08f9*/
  *(_QWORD *)(a1 + 96) = v109; /*0x100ad0904*/
  *(_OWORD *)(a1 + 104) = *(_OWORD *)v110; /*0x100ad090c*/
  *(_QWORD *)(a1 + 184) = v89; /*0x100ad091f*/
  v57 = v85; /*0x100ad0926*/
  *(_QWORD *)(a1 + 192) = v85; /*0x100ad092d*/
  *(_OWORD *)(a1 + 200) = v91; /*0x100ad093b*/
  *(_BYTE *)(a1 + 218) = v54; /*0x100ad0942*/
  v58 = v84; /*0x100ad0949*/
  v59 = v99; /*0x100ad0953*/
  if ( v57 ) /*0x100ad095a*/
  {
    v60 = v84 + 1; /*0x100ad095c*/
    do /*0x100ad0977*/
    {
      v61 = *(v60 - 1); /*0x100ad0979*/
      if ( v61 ) /*0x100ad0981*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v60, v61, 1); /*0x100ad098c*/
      v60 += 3; /*0x100ad0970*/
      --v57; /*0x100ad0974*/
    }
    while ( v57 ); /*0x100ad0977*/
  }
  if ( v83 ) /*0x100ad09a4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, 24LL * (_QWORD)v83, 8); /*0x100ad09b6*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdde816b66763b6c5(v90); /*0x100ad09c1*/
  if ( v79 ) /*0x100ad09d0*/
  {
    v62 = v105; /*0x100ad09d9*/
    v84 = nullptr; /*0x100ad09e0*/
    v85 = v79; /*0x100ad09eb*/
    v86 = v104; /*0x100ad09f2*/
    v88 = nullptr; /*0x100ad09f9*/
    v89 = v79; /*0x100ad0a04*/
    v90[0] = v104; /*0x100ad0a0b*/
    v63 = 1; /*0x100ad0a12*/
  }
  else
  {
    v63 = 0; /*0x100ad0a19*/
    v62 = nullptr; /*0x100ad0a1b*/
  }
  v83 = (__m256i *)v63; /*0x100ad0a1d*/
  v87 = v63; /*0x100ad0a24*/
  v90[1] = v62; /*0x100ad0a2b*/
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v109, &v83); /*0x100ad0a3d*/
  for ( i = v109; v109; i = v109 ) /*0x100ad0a49*/
  {
    v65 = *(_QWORD *)(i + 24LL * *(_QWORD *)&v110[8] + 8); /*0x100ad0a68*/
    if ( v65 ) /*0x100ad0a70*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(i + 24LL * *(_QWORD *)&v110[8] + 16), v65, 1); /*0x100ad0a80*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v109, &v83); /*0x100ad0a8b*/
  }
  if ( !v59 ) /*0x100ad0a9c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v107); /*0x100ad0aa5*/
  return a1; /*0x100ad0aad*/
}