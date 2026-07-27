// __ZN13codexmate_lib8commands8sessions24migrate_session_worktree28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1007021b0 | 基线 same-set
double __fastcall codexmate_lib::commands::sessions::migrate_session_worktree::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb35fee275365b5c1(
        _QWORD *a1,
        _QWORD *a2,
        __m128i a3)
{
  volatile signed __int64 **v4; // r14
  _QWORD *v5; // rsi
  char v6; // r15
  void *v7; // rax
  void *v8; // r13
  void *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // r15
  __int64 v15; // r13
  char v16; // bl
  int v17; // eax
  __int64 v18; // rdx
  __int64 **v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rsi
  _QWORD v26[16]; // [rsp+0h] [rbp-160h] BYREF
  _QWORD v27[12]; // [rsp+80h] [rbp-E0h] BYREF
  __int64 *v28; // [rsp+E0h] [rbp-80h] BYREF
  __int64 (__fastcall **v29)(); // [rsp+E8h] [rbp-78h]
  __int64 v30; // [rsp+F0h] [rbp-70h]
  __int64 v31; // [rsp+F8h] [rbp-68h] BYREF
  __int64 v32; // [rsp+100h] [rbp-60h]
  __int64 v33; // [rsp+108h] [rbp-58h]
  __int64 v34; // [rsp+110h] [rbp-50h]
  _QWORD *v35; // [rsp+118h] [rbp-48h]
  __int64 v36; // [rsp+120h] [rbp-40h] BYREF
  __int64 v37; // [rsp+128h] [rbp-38h]
  __int64 v38; // [rsp+130h] [rbp-30h]

  v35 = a2; /*0x1007021c7*/
  v4 = (volatile signed __int64 **)(a2 + 96); /*0x1007021cb*/
  v5 = a2 + 96; /*0x1007021e5*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x1007021e8*/
    (__int64)v27,
    v5,
    (__int64)&unk_101672196,
    33);
  if ( LODWORD(v27[0]) == 11 ) /*0x1007021f4*/
  {
    v34 = v27[1]; /*0x100702201*/
    v6 = v27[2]; /*0x100702205*/
    if ( (unsigned __int8)codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151() ) /*0x10070220d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v5); /*0x10070221d*/
      v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(85, 1); /*0x10070222c*/
      if ( !v7 ) /*0x100702234*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 85); /*0x10070252e*/
      v8 = v7; /*0x10070223a*/
      v9 = v7; /*0x100702253*/
      memcpy(v7, &unk_1016721B7, 0x55u); /*0x100702256*/
      a1[1] = 85; /*0x10070225b*/
      a1[2] = v8; /*0x100702264*/
      a1[3] = 85; /*0x100702269*/
      *a1 = 0x8000000000000000LL; /*0x100702272*/
      v12 = v34; /*0x100702278*/
      if ( v6 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100702292*/
        goto LABEL_15; /*0x100702292*/
      v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, &unk_1016721B7, v10, v11); /*0x100702298*/
      goto LABEL_24; /*0x10070229d*/
    }
    codexmate_lib::core::sessions::migrate_session_worktree::h4d27e7630e1e03cc(v26, v35, v35[94], v35[95], a3); /*0x100702371*/
    if ( __OFSUB__(0, v26[0]) ) /*0x100702382*/
    {
      qmemcpy(v27, &v26[1], sizeof(v27)); /*0x1007023a8*/
      v36 = 0; /*0x1007023ab*/
      v37 = 1; /*0x1007023b3*/
      v38 = 0; /*0x1007023bb*/
      v30 = 1610612768; /*0x1007023c3*/
      v28 = &v36; /*0x1007023cf*/
      v29 = &off_101969DD0; /*0x1007023da*/
      v19 = &v28; /*0x1007023de*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007023e5*/
                              v27,
                              &v28) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v31, &unk_101969E38, &off_101969E00); /*0x100702504*/
      v31 = v36; /*0x1007023fa*/
      v32 = v37; /*0x1007023fe*/
      v33 = v38; /*0x100702406*/
      v20 = &v26[1]; /*0x10070240a*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v26[1]); /*0x10070240d*/
      a1[3] = v33; /*0x100702416*/
      v21 = v31; /*0x10070241b*/
      v22 = v32; /*0x10070241f*/
      a1[2] = v32; /*0x100702423*/
      a1[1] = v21; /*0x100702428*/
      *a1 = 0x8000000000000000LL; /*0x10070242d*/
      v12 = v34; /*0x100702434*/
      if ( v6 ) /*0x100702438*/
        goto LABEL_15; /*0x100702438*/
    }
    else
    {
      qmemcpy(a1, v26, 0x80u); /*0x10070244b*/
      v19 = (__int64 **)v27; /*0x10070244b*/
      v20 = a1 + 16; /*0x10070244b*/
      v22 = 0; /*0x10070244b*/
      v12 = v34; /*0x100702451*/
      if ( v6 ) /*0x100702455*/
        goto LABEL_15; /*0x100702455*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100702467*/
    {
      v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, v19, v18, v22); /*0x10070250b*/
LABEL_24:
      if ( !v13 ) /*0x100702512*/
        *(_BYTE *)(v12 + 8) = 1; /*0x100702518*/
    }
LABEL_15:
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v12); /*0x10070246d*/
    goto LABEL_16; /*0x100702470*/
  }
  qmemcpy(v26, v27, 0x60u); /*0x1007022b8*/
  v36 = 0; /*0x1007022bb*/
  v37 = 1; /*0x1007022c3*/
  v38 = 0; /*0x1007022cb*/
  v30 = 1610612768; /*0x1007022d3*/
  v28 = &v36; /*0x1007022df*/
  v29 = &off_101969DD0; /*0x1007022ea*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007022f5*/
                          v26,
                          &v28) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v31, &unk_101969E38, &off_101969E00); /*0x1007024df*/
  v14 = v36; /*0x100702302*/
  v15 = v37; /*0x100702306*/
  v16 = v38; /*0x10070230a*/
  LODWORD(v31) = *(_DWORD *)((char *)&v38 + 1); /*0x100702311*/
  *(_DWORD *)((char *)&v31 + 3) = HIDWORD(v38); /*0x100702317*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v27); /*0x100702321*/
  v17 = v31; /*0x100702326*/
  *((_DWORD *)a1 + 7) = *(_DWORD *)((char *)&v31 + 3); /*0x10070232c*/
  *(_DWORD *)((char *)a1 + 25) = v17; /*0x100702331*/
  a1[1] = v14; /*0x100702336*/
  a1[2] = v15; /*0x10070233b*/
  *((_BYTE *)a1 + 24) = v16; /*0x100702340*/
  *a1 = 0x8000000000000000LL; /*0x10070234f*/
LABEL_16:
  if ( !_InterlockedDecrement64(*v4) ) /*0x100702478*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h3eb45e02222c53d8(v4); /*0x100702481*/
  v23 = v35; /*0x100702486*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v35); /*0x10070248d*/
  v24 = v23[93]; /*0x100702492*/
  if ( v24 ) /*0x10070249c*/
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23[94], v24, 1); /*0x1007024aa*/
  return *(double *)a3.i64; /*0x1007024af*/
}