// __ZN13codexmate_lib4core5voice9workspace15remove_template @ 0x100afe060 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::remove_template::h0a77b8f4c3af74d5(
        __int64 a1,
        __int64 a2,
        void *a3,
        size_t a4)
{
  _QWORD *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r15
  char v8; // r14
  char v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rsi
  void *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // r15
  const void *v18; // rdi
  void *v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // rax
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v28[12]; // [rsp+0h] [rbp-1E0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-180h] BYREF
  _QWORD v30[15]; // [rsp+68h] [rbp-178h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-100h]
  __int64 v32; // [rsp+E8h] [rbp-F8h]
  _QWORD v33[16]; // [rsp+F0h] [rbp-F0h] BYREF
  _QWORD v34[2]; // [rsp+170h] [rbp-70h] BYREF
  _QWORD v35[2]; // [rsp+180h] [rbp-60h] BYREF
  void *__s2; // [rsp+190h] [rbp-50h]
  __int64 v37; // [rsp+198h] [rbp-48h]
  _QWORD *v38; // [rsp+1A0h] [rbp-40h]
  _QWORD *v39; // [rsp+1A8h] [rbp-38h]
  char v40; // [rsp+1B7h] [rbp-29h]

  v37 = a2; /*0x100afe077*/
  v5 = (_QWORD *)a1; /*0x100afe07b*/
  __s2 = a3; /*0x100afe07e*/
  v35[0] = a3; /*0x100afe082*/
  v35[1] = a4; /*0x100afe086*/
  codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119(v33); /*0x100afe091*/
  v6 = v33[0]; /*0x100afe096*/
  v7 = v33[1]; /*0x100afe09d*/
  v8 = v33[2]; /*0x100afe0a4*/
  if ( v33[0] != 11 ) /*0x100afe0b0*/
  {
    memcpy((void *)(a1 + 25), (char *)&v33[2] + 1, 0x4Fu); /*0x100afe124*/
    *(_QWORD *)(a1 + 8) = v6; /*0x100afe129*/
    *(_QWORD *)(a1 + 16) = v7; /*0x100afe12d*/
    *(_BYTE *)(a1 + 24) = v8; /*0x100afe131*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100afe13f*/
    return v5; /*0x100afe35f*/
  }
  v39 = (_QWORD *)v33[1]; /*0x100afe0b2*/
  v9 = v33[2]; /*0x100afe0c1*/
  codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v33, v37); /*0x100afe0c4*/
  qmemcpy(v28, &v33[1], sizeof(v28)); /*0x100afe0f3*/
  if ( __OFSUB__(-v33[0], 1) ) /*0x100afe0dd*/
  {
    qmemcpy((void *)(a1 + 8), v28, 0x60u); /*0x100afe108*/
    v13 = (__int64)&v29; /*0x100afe108*/
    v12 = (__int64 *)(a1 + 104); /*0x100afe108*/
    v11 = 0; /*0x100afe108*/
    *v5 = 0x8000000000000000LL; /*0x100afe10b*/
    goto LABEL_15; /*0x100afe10f*/
  }
  v40 = v9; /*0x100afe148*/
  v38 = (_QWORD *)a1; /*0x100afe14b*/
  v32 = v34[1]; /*0x100afe153*/
  v31 = v34[0]; /*0x100afe15e*/
  v30[14] = v33[15]; /*0x100afe169*/
  v30[13] = v33[14]; /*0x100afe17b*/
  v30[12] = v33[13]; /*0x100afe182*/
  qmemcpy(v30, v28, 0x60u); /*0x100afe19c*/
  v29 = v33[0]; /*0x100afe19f*/
  v14 = __s2; /*0x100afe1b0*/
  if ( !v30[1] ) /*0x100afe1b4*/
  {
LABEL_13:
    v28[0] = v35; /*0x100afe29c*/
    v28[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100afe2ae*/
    v9 = v40; /*0x100afe2ca*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v33[1], &unk_1017CBF28, v28); /*0x100afe2ce*/
    v20 = v38; /*0x100afe2d3*/
    v33[0] = 8; /*0x100afe2e1*/
    v21 = v33[1]; /*0x100afe2ec*/
    qmemcpy(v38 + 3, &v33[2], 0x50u); /*0x100afe303*/
    v13 = (__int64)&v33[12]; /*0x100afe303*/
    v20[1] = 8; /*0x100afe306*/
    v20[2] = v21; /*0x100afe30e*/
LABEL_14:
    v5 = v20; /*0x100afe312*/
    *v20 = 0x8000000000000000LL; /*0x100afe315*/
    v12 = &v29; /*0x100afe318*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v29); /*0x100afe31f*/
LABEL_15:
    if ( (v9 & 1) == 0 /*0x100afe482*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12, v13, v10, v11) )
    {
      *((_BYTE *)v39 + 8) = 1; /*0x100afe493*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v39); /*0x100afe346*/
    return v5; /*0x100afe346*/
  }
  v15 = v30[0]; /*0x100afe1ba*/
  v16 = 112LL * v30[1]; /*0x100afe1c1*/
  v17 = 0; /*0x100afe1c5*/
  while ( 1 ) /*0x100afe1dd*/
  {
    if ( *(_QWORD *)(v15 + v17 + 16) == a4 ) /*0x100afe1e2*/
    {
      v18 = *(const void **)(v15 + v17 + 8); /*0x100afe1e4*/
      if ( !memcmp(v18, v14, a4) ) /*0x100afe1ef*/
        break; /*0x100afe1ef*/
    }
    v17 += 112; /*0x100afe1d0*/
    if ( v16 == v17 ) /*0x100afe1d7*/
      goto LABEL_13; /*0x100afe1d7*/
  }
  if ( *(_BYTE *)(v15 + v17 + 104) ) /*0x100afe1f8*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v14); /*0x100afe204*/
    v13 = 1; /*0x100afe20e*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x100afe213*/
    v20 = v38; /*0x100afe21b*/
    v9 = v40; /*0x100afe21f*/
    if ( !v19 ) /*0x100afe22d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42); /*0x100afe4b9*/
    qmemcpy(v19, "Built-in voice templates cannot be removed", 42); /*0x100afe275*/
    v20[1] = 9; /*0x100afe27e*/
    v20[2] = 42; /*0x100afe286*/
    v20[3] = v19; /*0x100afe28e*/
    v20[4] = 42; /*0x100afe292*/
    goto LABEL_14; /*0x100afe29a*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::retain::hd8ac37196522bf17(&v29, v35); /*0x100afe36b*/
  LODWORD(v32) = 1; /*0x100afe370*/
  v9 = v40; /*0x100afe37a*/
  v23 = std::time::SystemTime::now::h1fe79e41f9d5677f(&v29, v35); /*0x100afe37e*/
  v20 = v38; /*0x100afe383*/
  v28[0] = v23; /*0x100afe391*/
  LODWORD(v28[1]) = v24; /*0x100afe398*/
  std::time::SystemTime::duration_since::had059553cab94f96(v33, v28, 0, 0); /*0x100afe3b0*/
  if ( LOBYTE(v33[0]) ) /*0x100afe3bc*/
    v25 = 0; /*0x100afe3c7*/
  else
    v25 = v33[1]; /*0x100afe3be*/
  v31 = v25; /*0x100afe3c9*/
  codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(&v29); /*0x100afe3d7*/
  codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v33, v37, &v29); /*0x100afe3ee*/
  if ( LODWORD(v33[0]) != 11 ) /*0x100afe3fa*/
  {
    qmemcpy(v20 + 1, v33, 0x60u); /*0x100afe47a*/
    v13 = (__int64)&v33[12]; /*0x100afe47a*/
    goto LABEL_14; /*0x100afe47a*/
  }
  codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47( /*0x100afe41c*/
    v33,
    *(_QWORD *)(v37 + 536),
    *(_QWORD *)(v37 + 544),
    (__int64)&v29);
  qmemcpy(v20, v33, 0x80u); /*0x100afe430*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v29); /*0x100afe43a*/
  if ( (v9 & 1) == 0 /*0x100afe49c*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v29, v34, v26, v27) )
  {
    *((_BYTE *)v39 + 8) = 1; /*0x100afe4a9*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v39); /*0x100afe45d*/
  return v20; /*0x100afe34e*/
}