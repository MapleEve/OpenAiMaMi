// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/codex_project_state
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::codex_project_state::inspect::hefe15e461739813d @ 0x100ad2d60 size=3872 lines=637 =====
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::inspect::hefe15e461739813d(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v3; // r15
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r14
  _QWORD *v15; // r14
  __int64 v16; // rsi
  char *v17; // r14
  __int64 v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __m256i **v21; // rdi
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r12
  _QWORD *v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r14
  _QWORD *v31; // r13
  __int64 v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r14
  _QWORD *v36; // r13
  __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rax
  char v43; // r13
  __int64 v44; // r12
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 (__fastcall **v47)(); // r14
  char v48; // r13
  _QWORD *v49; // r12
  __int64 v50; // rsi
  __int64 (__fastcall **v51)(); // rax
  __int64 v52; // rcx
  __int64 i; // rax
  __int64 v54; // rsi
  __int64 v56; // r15
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  void *v64; // rax
  __int64 v65; // r14
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // [rsp+0h] [rbp-1D0h]
  __int64 v69; // [rsp+8h] [rbp-1C8h]
  __int64 v70; // [rsp+10h] [rbp-1C0h]
  __int64 v71; // [rsp+18h] [rbp-1B8h]
  __int64 v72; // [rsp+20h] [rbp-1B0h] BYREF
  __int64 (__fastcall **v73)(); // [rsp+28h] [rbp-1A8h]
  __int64 v74; // [rsp+30h] [rbp-1A0h]
  __int64 v75; // [rsp+38h] [rbp-198h]
  __int64 v76; // [rsp+40h] [rbp-190h]
  __int64 (__fastcall **v77)(); // [rsp+48h] [rbp-188h]
  __int64 v78; // [rsp+50h] [rbp-180h]
  _QWORD v79[2]; // [rsp+58h] [rbp-178h] BYREF
  __int128 v80; // [rsp+68h] [rbp-168h]
  __int64 v81; // [rsp+B8h] [rbp-118h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-110h]
  __int64 v83; // [rsp+C8h] [rbp-108h]
  __int64 v84; // [rsp+D0h] [rbp-100h]
  __int64 v85; // [rsp+D8h] [rbp-F8h]
  __int64 v86; // [rsp+E0h] [rbp-F0h]
  __int64 v87; // [rsp+E8h] [rbp-E8h]
  int v88; // [rsp+F4h] [rbp-DCh]
  __int64 v89; // [rsp+F8h] [rbp-D8h]
  __int64 v90; // [rsp+100h] [rbp-D0h]
  __int64 v91; // [rsp+108h] [rbp-C8h]
  unsigned __int64 v92; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v93; // [rsp+118h] [rbp-B8h]
  __int64 (__fastcall **v94)(); // [rsp+120h] [rbp-B0h]
  __int64 v95; // [rsp+128h] [rbp-A8h] BYREF
  __m256i v96; // [rsp+130h] [rbp-A0h] BYREF
  int v97; // [rsp+154h] [rbp-7Ch]
  __int64 v98; // [rsp+158h] [rbp-78h] BYREF
  _BYTE v99[23]; // [rsp+160h] [rbp-70h]
  unsigned __int64 v100; // [rsp+178h] [rbp-58h]
  __int64 v101; // [rsp+180h] [rbp-50h]
  _QWORD *v102; // [rsp+188h] [rbp-48h]
  char v103; // [rsp+197h] [rbp-39h] BYREF
  __int64 v104; // [rsp+198h] [rbp-38h]
  char v105; // [rsp+1A7h] [rbp-29h]

  v6 = *(_QWORD *)(a2 + 8);
  v84 = a2;
  std::path::Path::_join::hb1a495d4f06b13b8(&v81, v6, *(_QWORD *)(a2 + 16), ".codex-global-state.json", 24);
  v7 = v83;
  v85 = v82;
  std::sys::fs::metadata::h32fa16d3052ea535(&v72, v82, v83);
  v8 = 0x8000000000000000LL;
  if ( (_DWORD)v72 == 1 )
  {
    if ( ((unsigned __int8)v73 & 3) == 1 )
    {
      v17 = (char *)v73 - 1;
      v3 = *(__int64 *)((char *)v73 - 1);
      v18 = *(__int64 *)((char *)v73 + 7);
      if ( *(_QWORD *)v18 )
        (*(void (__fastcall **)(__int64))v18)(v3);
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v19, *(_QWORD *)(v18 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 24, 8);
      v8 = 0x8000000000000000LL;
      v2 = 0;
    }
    else
    {
      v2 = 0;
    }
    v104 = 0x8000000000000000LL;
LABEL_26:
    v96.i8[0] = 6;
    v100 = 0x8000000000000000LL;
LABEL_27:
    LOBYTE(v3) = 1;
    LODWORD(v102) = 0;
    v105 = v2;
    v97 = 0;
LABEL_28:
    v92 = 0;
    v94 = nullptr;
    v20 = 0;
    goto LABEL_29;
  }
  v3 = (__int64)&v92;
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v92, v85, v7);
  v9 = v92;
  if ( v92 == 0x8000000000000000LL )
  {
    v10 = v93;
    v95 = v93;
    v96.i64[0] = 0;
    *(__int128 *)((char *)v96.i128 + 8) = 1u;
    v74 = 1610612768;
    v72 = (__int64)&v96;
    v73 = &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1057;
    if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0(
                            &v95,
                            &v72) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1666,
        55,
        &v103,
        &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1683,
        &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1668);
    v86 = v96.i64[1];
    v104 = v96.i64[0];
    v70 = v96.i64[2];
    if ( (v10 & 3) == 1 )
    {
      v11 = v10 - 1;
      v3 = *(_QWORD *)(v10 - 1);
      v12 = *(_QWORD *)(v10 + 7);
      if ( *(_QWORD *)v12 )
        (*(void (__fastcall **)(__int64))v12)(v3);
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v13, *(_QWORD *)(v12 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24, 8);
    }
    LOBYTE(v2) = 1;
    v8 = 0x8000000000000000LL;
    goto LABEL_26;
  }
  v14 = v93;
  v72 = v93;
  v73 = v94;
  v74 = 0;
  v75 = 0;
  v76 = v93;
  v77 = v94;
  serde_json::de::from_trait::h99bf8e350a0ab991(&v96, &v72);
  v2 = v96.u8[0];
  if ( v96.u8[0] != 5 )
  {
    v104 = v14;
    if ( v96.u8[0] == 6 )
    {
      v15 = (_QWORD *)v96.i64[1];
      v95 = v96.i64[1];
      v92 = 0;
      v93 = 1;
      v94 = nullptr;
      v74 = 1610612768;
      v72 = (__int64)&v92;
      v73 = &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1057;
      if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d(
                              &v95,
                              &v72) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1666,
          55,
          &v103,
          &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1683,
          &anon_934eb766a8cad5eebd2cfa1275fd1b1a_1668);
      v100 = v92;
      v91 = v93;
      v3 = (__int64)v94;
      if ( *v15 == 1 )
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0f9d15e22e253cd(v15 + 1);
      }
      else if ( !*v15 )
      {
        v16 = v15[2];
        if ( v16 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15[1], v16, 1);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 40, 8);
      v65 = v91;
      if ( !v9 )
        goto LABEL_110;
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96);
      v3 = 34;
      v64 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1);
      if ( !v64 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34);
      v65 = (__int64)v64;
      qmemcpy(v64, "global-state root is not an object", 34);
      v100 = 34;
      if ( !v9 )
        goto LABEL_110;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v9, 1);
LABEL_110:
    v71 = v3;
    v91 = v65;
    if ( (_BYTE)v2 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v96);
    v96.i8[0] = 6;
    *(__int64 *)((char *)v96.i64 + 1) = v98;
    *(__int128 *)((char *)v96.i128 + 9) = *(_OWORD *)v99;
    v96.i64[3] = *(_QWORD *)&v99[15];
    LOBYTE(v2) = 1;
    v8 = 0x8000000000000000LL;
    v104 = 0x8000000000000000LL;
    goto LABEL_27;
  }
  *(_QWORD *)&v99[15] = v96.i64[3];
  *(_OWORD *)v99 = *(__int128 *)((char *)v96.i128 + 9);
  v98 = *(__int64 *)((char *)v96.i64 + 1);
  if ( v9 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v9, 1);
  v96.i8[0] = 5;
  *(__int64 *)((char *)v96.i64 + 1) = v98;
  *(__int128 *)((char *)v96.i128 + 9) = *(_OWORD *)v99;
  v96.i64[3] = *(_QWORD *)&v99[15];
  v62 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1018D69E1, 22, &v96);
  v8 = 0x8000000000000000LL;
  if ( !v62 || *(_BYTE *)v62 != 4 )
  {
    LOBYTE(v62) = 1;
    LODWORD(v102) = v62;
    LODWORD(v3) = 0;
    LOBYTE(v2) = 1;
    v100 = 0x8000000000000000LL;
    v105 = 1;
    LOBYTE(v62) = 1;
    v97 = v62;
    v104 = 0x8000000000000000LL;
    goto LABEL_28;
  }
  v63 = _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h9af5a640ddc73d31(
          &v92,
          *(_QWORD *)(v62 + 16),
          *(_QWORD *)(v62 + 16) + 32LL * *(_QWORD *)(v62 + 24));
  v20 = v92;
  LOBYTE(v63) = 1;
  LODWORD(v102) = v63;
  LODWORD(v3) = 0;
  LOBYTE(v2) = 1;
  v100 = 0x8000000000000000LL;
  v105 = 1;
  LOBYTE(v63) = 1;
  v97 = v63;
  v104 = 0x8000000000000000LL;
LABEL_29:
  v21 = (__m256i **)&v72;
  v68 = v20;
  v88 = v3;
  codexmate_lib::core::relay::codex_project_state::collect_project_state_from_active_db::h242554a58bf45ba3(&v72, v84);
  if ( (_BYTE)v3 )
  {
    v101 = 0;
    v22 = 0;
    v23 = 0;
    v87 = 0;
LABEL_65:
    v41 = 0;
    goto LABEL_66;
  }
  v24 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1018D6A83, 30, &v96);
  if ( !v24 || *(_BYTE *)v24 != 4 )
  {
    v98 = 0;
    v23 = 0;
    goto LABEL_40;
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h55cf7a836e1c706c(
    &v98,
    *(_QWORD *)(v24 + 16),
    *(_QWORD *)(v24 + 16) + 32LL * *(_QWORD *)(v24 + 24));
  v25 = *(_QWORD *)v99;
  if ( !*(_QWORD *)&v99[8] )
  {
    v23 = 0;
    v58 = v98;
    if ( !v98 )
      goto LABEL_40;
    goto LABEL_39;
  }
  LODWORD(v101) = v2;
  v26 = *(_QWORD *)&v99[8];
  v27 = (_QWORD *)(*(_QWORD *)v99 + 8LL);
  v23 = *(_QWORD *)&v99[8];
  do
  {
    v28 = *(v27 - 1);
    if ( v28 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v27, v28, 1);
    v27 += 3;
    --v26;
  }
  while ( v26 );
  v8 = 0x8000000000000000LL;
  v2 = v101;
  v58 = v98;
  if ( v98 )
LABEL_39:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24 * v58, 8);
LABEL_40:
  v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "project-orderactive-workspace-rootsthread-workspace-root-hints",
          13,
          &v96);
  if ( !v29 || *(_BYTE *)v29 != 4 )
  {
    v98 = 0;
    v89 = 0;
    goto LABEL_49;
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h55cf7a836e1c706c(
    &v98,
    *(_QWORD *)(v29 + 16),
    *(_QWORD *)(v29 + 16) + 32LL * *(_QWORD *)(v29 + 24));
  v30 = *(_QWORD *)v99;
  if ( !*(_QWORD *)&v99[8] )
  {
    v89 = 0;
    v59 = v98;
    if ( !v98 )
      goto LABEL_49;
    goto LABEL_48;
  }
  LODWORD(v101) = v2;
  v90 = v23;
  v31 = (_QWORD *)(*(_QWORD *)v99 + 8LL);
  v89 = *(_QWORD *)&v99[8];
  v32 = *(_QWORD *)&v99[8];
  do
  {
    v33 = *(v31 - 1);
    if ( v33 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v31, v33, 1);
    v31 += 3;
    --v32;
  }
  while ( v32 );
  v8 = 0x8000000000000000LL;
  v23 = v90;
  v2 = v101;
  v59 = v98;
  if ( v98 )
LABEL_48:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 24 * v59, 8);
LABEL_49:
  v34 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "active-workspace-rootsthread-workspace-root-hints",
          22,
          &v96);
  if ( !v34 || *(_BYTE *)v34 != 4 )
  {
    v98 = 0;
    v87 = 0;
    goto LABEL_58;
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h55cf7a836e1c706c(
    &v98,
    *(_QWORD *)(v34 + 16),
    *(_QWORD *)(v34 + 16) + 32LL * *(_QWORD *)(v34 + 24));
  v35 = *(_QWORD *)v99;
  if ( !*(_QWORD *)&v99[8] )
  {
    v87 = 0;
    v60 = v98;
    if ( !v98 )
      goto LABEL_58;
    goto LABEL_57;
  }
  LODWORD(v101) = v2;
  v90 = v23;
  v36 = (_QWORD *)(*(_QWORD *)v99 + 8LL);
  v37 = *(_QWORD *)&v99[8];
  v87 = *(_QWORD *)&v99[8];
  do
  {
    v38 = *(v36 - 1);
    if ( v38 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v36, v38, 1);
    v36 += 3;
    --v37;
  }
  while ( v37 );
  v8 = 0x8000000000000000LL;
  v23 = v90;
  LOBYTE(v2) = v101;
  v60 = v98;
  if ( v98 )
LABEL_57:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 24 * v60, 8);
LABEL_58:
  v39 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1018D69E1, 22, &v96);
  v22 = v89;
  if ( v39 && *(_BYTE *)v39 == 4 )
    v101 = *(_QWORD *)(v39 + 24);
  else
    v101 = 0;
  v21 = (__m256i **)"thread-workspace-root-hints";
  v40 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "thread-workspace-root-hints",
          27,
          &v96);
  if ( !v40 || *(_BYTE *)v40 != 5 )
    goto LABEL_65;
  v41 = *(_QWORD *)(v40 + 24);
LABEL_66:
  v42 = &v98;
  v90 = v23;
  v89 = v22;
  v69 = v41;
  if ( v104 != 0x8000000000000000LL || v77 )
    goto LABEL_68;
  if ( (_BYTE)v2 )
  {
    if ( !(_BYTE)v102 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21);
      v56 = 37;
      v57 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
      if ( v57 )
      {
        *(_QWORD *)((char *)v57 + 29) = 0x909EE6A3A7E895B3LL;
        v57[3] = 0xE895B3E6A097E620LL;
        v102 = v57;
        qmemcpy(v57, ".codex-global-state.json", 24);
        v8 = 37;
LABEL_132:
        v98 = v8;
        v42 = &v95;
        v43 = 1;
        goto LABEL_69;
      }
      goto LABEL_135;
    }
  }
  else if ( !v74 && v80 == 0 )
  {
    goto LABEL_68;
  }
  if ( !v23 && v74 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21);
    v56 = 55;
    v66 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(55, 1);
    if ( v66 )
    {
      *(_QWORD *)((char *)v66 + 47) = 0x64776320AE9BE7B9LL;
      v66[5] = 0xB9A1E9A89CE598ADLL;
      v66[4] = 0xE593BAE58BA8E7BFLL;
      v66[3] = 0xBAE786BDE48CBCEFLL;
      v66[2] = 0xBAA9E7BAB8E4A38FLL;
      v66[1] = 0xE5A585E5AE9BE7B9LL;
      v102 = v66;
      *v66 = 0xA1E9207865646F43LL;
      v8 = 55;
      goto LABEL_132;
    }
    goto LABEL_135;
  }
  if ( *((_QWORD *)&v80 + 1) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21);
    v56 = 67;
    v61 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(67, 1);
    if ( v61 )
    {
      v8 = 67;
      v102 = v61;
      memcpy(v61, &unk_1018D6908, 0x43u);
      goto LABEL_132;
    }
LABEL_135:
    v104 = 0x8000000000000000LL;
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v56);
  }
  v43 = 0;
  if ( !v41 && (_QWORD)v80 )
  {
    if ( v23 || v74 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21);
      v56 = 36;
      v67 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
      if ( v67 )
      {
        *(_QWORD *)(v67 + 24) = 0xB8E484B0E5A098E6LL;
        *(_QWORD *)(v67 + 16) = 0x849AE7AE9BE7B9A1LL;
        *(_QWORD *)(v67 + 8) = 0xE9B088E58BA8E7BFLL;
        *(_QWORD *)v67 = 0xBAE7207865646F43LL;
        v102 = (_QWORD *)v67;
        *(_DWORD *)(v67 + 32) = -1163270214;
        v8 = 36;
        goto LABEL_132;
      }
      goto LABEL_135;
    }
LABEL_68:
    v43 = 0;
  }
LABEL_69:
  *v42 = v8;
  v44 = v98;
  v45 = v95;
  codexmate_lib::core::relay::codex_project_state::active_db_path::hc8d3deae3506a663(&v98, v84);
  *(_QWORD *)(a1 + 40) = v77;
  *(_QWORD *)(a1 + 32) = v76;
  *(_QWORD *)(a1 + 24) = v75;
  *(_QWORD *)(a1 + 120) = v44;
  *(_QWORD *)(a1 + 128) = v102;
  *(_QWORD *)(a1 + 136) = v45;
  *(_QWORD *)(a1 + 16) = v83;
  *(_QWORD *)(a1 + 8) = v82;
  *(_QWORD *)a1 = v81;
  *(_BYTE *)(a1 + 216) = v105;
  *(_BYTE *)(a1 + 217) = v97;
  *(_QWORD *)(a1 + 48) = v100;
  *(_QWORD *)(a1 + 56) = v91;
  *(_QWORD *)(a1 + 64) = v71;
  *(_QWORD *)(a1 + 72) = v104;
  *(_QWORD *)(a1 + 80) = v86;
  *(_QWORD *)(a1 + 88) = v70;
  *(_QWORD *)(a1 + 144) = v90;
  *(_QWORD *)(a1 + 152) = v89;
  *(_QWORD *)(a1 + 160) = v87;
  *(_QWORD *)(a1 + 168) = v101;
  *(_QWORD *)(a1 + 176) = v69;
  *(_QWORD *)(a1 + 96) = v98;
  *(_OWORD *)(a1 + 104) = *(_OWORD *)v99;
  *(_QWORD *)(a1 + 184) = v78;
  v46 = v74;
  *(_QWORD *)(a1 + 192) = v74;
  *(_OWORD *)(a1 + 200) = v80;
  *(_BYTE *)(a1 + 218) = v43;
  v47 = v73;
  v48 = v88;
  if ( v46 )
  {
    v49 = v73 + 1;
    do
    {
      v50 = *(v49 - 1);
      if ( v50 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v49, v50, 1);
      v49 += 3;
      --v46;
    }
    while ( v46 );
  }
  if ( v72 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 24 * v72, 8);
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h56f8dd89fedb6e90(v79);
  if ( v68 )
  {
    v51 = v94;
    v73 = nullptr;
    v74 = v68;
    v75 = v93;
    v77 = nullptr;
    v78 = v68;
    v79[0] = v93;
    v52 = 1;
  }
  else
  {
    v52 = 0;
    v51 = nullptr;
  }
  v72 = v52;
  v76 = v52;
  v79[1] = v51;
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6b2286ad0da7cdd4(&v98, &v72);
  for ( i = v98; v98; i = v98 )
  {
    v54 = *(_QWORD *)(i + 24LL * *(_QWORD *)&v99[8] + 8);
    if ( v54 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(i + 24LL * *(_QWORD *)&v99[8] + 16), v54, 1);
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6b2286ad0da7cdd4(&v98, &v72);
  }
  if ( !v48 )
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v96);
  return a1;
}

// ===== codexmate_lib::core::relay::codex_project_state::repair_if_needed::h631e20668f558f04 @ 0x100acb850 size=1331 lines=219 =====
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::repair_if_needed::h631e20668f558f04(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // [rsp+8h] [rbp-338h] BYREF
  _QWORD v17[12]; // [rsp+10h] [rbp-330h] BYREF
  _QWORD v18[13]; // [rsp+E8h] [rbp-258h] BYREF
  _QWORD v19[12]; // [rsp+150h] [rbp-1F0h] BYREF
  _QWORD v20[3]; // [rsp+1B0h] [rbp-190h] BYREF
  __int64 v21; // [rsp+1C8h] [rbp-178h]
  __int64 v22; // [rsp+1D0h] [rbp-170h]
  __int64 v23; // [rsp+1D8h] [rbp-168h]
  __int64 v24; // [rsp+1E0h] [rbp-160h]
  __int64 v25; // [rsp+1E8h] [rbp-158h]
  __int64 v26; // [rsp+1F8h] [rbp-148h]
  __int64 v27; // [rsp+200h] [rbp-140h]
  __int64 v28; // [rsp+210h] [rbp-130h]
  __int64 v29; // [rsp+218h] [rbp-128h]
  __int64 v30; // [rsp+220h] [rbp-120h]
  __int64 v31; // [rsp+228h] [rbp-118h]
  __int64 v32; // [rsp+230h] [rbp-110h]
  __int64 v33; // [rsp+240h] [rbp-100h]
  __int64 v34; // [rsp+260h] [rbp-E0h]
  char v35; // [rsp+28Ah] [rbp-B6h]
  _QWORD v36[3]; // [rsp+290h] [rbp-B0h] BYREF
  _QWORD v37[3]; // [rsp+2A8h] [rbp-98h] BYREF
  _QWORD v38[2]; // [rsp+2C0h] [rbp-80h] BYREF
  _QWORD v39[3]; // [rsp+2D0h] [rbp-70h] BYREF
  __int64 v40; // [rsp+2E8h] [rbp-58h]
  __int64 v41; // [rsp+2F0h] [rbp-50h]
  __int64 v42; // [rsp+2F8h] [rbp-48h]
  __int64 v43; // [rsp+300h] [rbp-40h] BYREF
  __int64 v44; // [rsp+308h] [rbp-38h]
  __int64 v45; // [rsp+310h] [rbp-30h]

  codexmate_lib::core::relay::codex_project_state::inspect::hefe15e461739813d((__int64)v20, a2);
  codexmate_lib::core::relay::codex_project_state::stability_issue::hb16ab2f7d040b62e(&v16, v20);
  v2 = v16;
  if ( __OFSUB__(-v16, 1) )
  {
    v40 = v16;
    v41 = v33;
    v42 = v34;
    v3 = v28;
    v4 = v29;
    v5 = v30;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v16);
    v6 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
    if ( !v6 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39);
    *(_QWORD *)((char *)v6 + 31) = 0x8DA4E5AEBFE4809CLL;
    v6[3] = 0x9CE9A097E68CBCEFLL;
    v6[2] = 0xB8B8E5A3ADE695BCLL;
    v6[1] = 0xE5A2B4E7AE9BE7B9LL;
    *v6 = 0xA1E9207865646F43LL;
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 48) = v3;
    *(_QWORD *)(a1 + 56) = v4;
    *(_QWORD *)(a1 + 64) = v5;
    *(_QWORD *)a1 = 39;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = 39;
    *(_QWORD *)(a1 + 72) = v41;
    *(_QWORD *)(a1 + 80) = v42;
    *(_QWORD *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 96) = 0;
    v2 = v40;
    goto LABEL_11;
  }
  v45 = v17[1];
  v44 = v17[0];
  v43 = v16;
  if ( !v35 )
  {
    v16 = (__int64)&v43;
    v17[0] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v37, &unk_101A3DECB, &v16);
    *(_QWORD *)(a1 + 32) = v37[2];
    v8 = v37[0];
    *(_QWORD *)(a1 + 24) = v37[1];
    *(_QWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 8) = 10;
    goto LABEL_8;
  }
  codexmate_lib::core::relay::codex_project_state::repair::h4636eadd3928e8ee(&v16, a2);
  v7 = v16;
  qmemcpy(v19, v17, sizeof(v19));
  if ( v16 == 0x8000000000000000LL )
  {
    qmemcpy((void *)(a1 + 8), v19, 0x60u);
LABEL_8:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_9;
  }
  qmemcpy(&v18[1], v19, 0x60u);
  v18[0] = v16;
  codexmate_lib::core::relay::codex_project_state::inspect::hefe15e461739813d((__int64)&v16, a2);
  codexmate_lib::core::relay::codex_project_state::stability_issue::hb16ab2f7d040b62e(v39, &v16);
  if ( v39[0] != 0x8000000000000000LL )
  {
    v19[2] = v39[2];
    v19[1] = v39[1];
    v19[0] = v39[0];
    v38[0] = v19;
    v38[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v36, &unk_101A3DEFD, v38);
    *(_QWORD *)(a1 + 32) = v36[2];
    v14 = v36[0];
    *(_QWORD *)(a1 + 24) = v36[1];
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    if ( v19[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19[1], v19[0], 1);
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::hd3734991d97024a4(&v16);
    if ( 2LL * v18[3] )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[4], v18[3], 1);
      v15 = v18[6];
      if ( !(2LL * v18[6]) )
      {
LABEL_39:
        if ( !v7 )
        {
LABEL_9:
          if ( v43 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v43, 1);
LABEL_11:
          if ( v20[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20[1], v20[0], 1);
          if ( 2 * v24 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1);
            v9 = v26;
            if ( !(2 * v26) )
            {
LABEL_15:
              if ( v2 == 0x8000000000000000LL )
                goto LABEL_20;
              goto LABEL_19;
            }
          }
          else
          {
            v9 = v26;
            if ( !(2 * v26) )
              goto LABEL_15;
          }
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v9, 1);
          if ( v2 == 0x8000000000000000LL )
            goto LABEL_20;
LABEL_19:
          if ( 2 * v28 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1);
            v10 = v23;
            if ( v23 )
            {
LABEL_21:
              v11 = (_QWORD *)(v22 + 8);
              do
              {
                v12 = *(v11 - 1);
                if ( v12 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v12, 1);
                v11 += 3;
                --v10;
              }
              while ( v10 );
            }
LABEL_26:
            if ( v21 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24 * v21, 8);
            if ( 2 * v31 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v31, 1);
            return a1;
          }
LABEL_20:
          v10 = v23;
          if ( v23 )
            goto LABEL_21;
          goto LABEL_26;
        }
LABEL_43:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[1], v7, 1);
        goto LABEL_9;
      }
    }
    else
    {
      v15 = v18[6];
      if ( !(2LL * v18[6]) )
        goto LABEL_39;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[7], v15, 1);
    if ( !v7 )
      goto LABEL_9;
    goto LABEL_43;
  }
  qmemcpy((void *)a1, v18, 0x68u);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::hd3734991d97024a4(&v16);
  if ( v43 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v43, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::hd3734991d97024a4(v20);
  return a1;
}

