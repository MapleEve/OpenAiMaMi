// codexmate_lib::commands::system::confirm_pending_auto_switch_and_restart_sync
// owner_ea: 0x10049ce00, size: 0x2c52
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// DESTRUCTIVE SIDE EFFECTS: process_restart
// notes: Confirms pending auto account switch, writes AccountSwitchTrace, triggers restart

// 1.2.4→1.2.6 delta 新增命令: 同步确认待定自动切换并重启。使用 uuid v4、std::time::Instant 计时、StateManager::try_get、AccountSwitchTrace::event 追踪。调用 confirm_pending_auto_switch_async closure。A-level owner for commands::system::confirm_pending_auto_switch_and_restart_sync
char *__fastcall codexmate_lib::commands::system::confirm_pending_auto_switch_and_restart_sync::h6b0072257be9b4ff(
        char *a1,
        __int64 a2)
{
  int v2; // edx
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  char v9; // r13
  __int64 v10; // r14
  __int64 v11; // r15
  char v12; // r12
  unsigned __int64 v13; // rdi
  int v14; // eax
  char *v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r14
  char v18; // r15
  signed __int64 v20; // r14
  __int64 v21; // r15
  const void *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r13
  unsigned int v28; // r15d
  _QWORD *v29; // r14
  _DWORD *v30; // rsi
  _DWORD *v31; // rdi
  __int64 i; // rcx
  __int64 v33; // rax
  unsigned int v34; // edx
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rbx
  _DWORD *v40; // rdi
  _DWORD *v41; // rsi
  __int64 j; // rcx
  __int64 v43; // rbx
  int v44; // r14d
  _QWORD *v45; // rcx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // rdx
  char *v50; // rax
  char v51; // r14
  _QWORD *v52; // rax
  _QWORD *v53; // r14
  __int64 v54; // rdi
  int v55; // ebx
  char v56; // r13
  __int128 v57; // kr60_16
  __int64 v58; // rax
  unsigned int v59; // edx
  __int64 v60; // rax
  __int64 v61; // rbx
  _QWORD *v62; // r14
  __int64 v63; // rsi
  __int64 v64; // rbx
  _BYTE *v65; // rdi
  void *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // r14
  __int64 v77; // r15
  _QWORD *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 v81; // r14
  __int64 v82; // r15
  _QWORD *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // r14
  unsigned __int8 v86; // bl
  __int64 v87; // r15
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // rdx
  int v91; // eax
  _QWORD *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  __int128 v95; // kr70_16
  __int64 v96; // r15
  char *v97; // rdx
  __int64 (__fastcall *v98)(_QWORD, _QWORD); // rax
  __int64 v99; // rax
  __int64 v100; // rsi
  void *v101; // rax
  void *v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rbx
  __int64 v105; // r14
  __int64 v106; // r15
  _QWORD *v107; // rdx
  __int64 v108; // rax
  int v109; // eax
  _QWORD *v110; // rdx
  __int64 v111; // rax
  _BYTE v112[24]; // [rsp+0h] [rbp-AF0h] BYREF
  _BYTE v113[24]; // [rsp+18h] [rbp-AD8h] BYREF
  _QWORD __dst[30]; // [rsp+30h] [rbp-AC0h] BYREF
  _QWORD v115[3]; // [rsp+120h] [rbp-9D0h] BYREF
  _QWORD v116[61]; // [rsp+138h] [rbp-9B8h] BYREF
  _OWORD v117[29]; // [rsp+320h] [rbp-7D0h] BYREF
  __int128 v118; // [rsp+4F0h] [rbp-600h] BYREF
  __int64 v119; // [rsp+500h] [rbp-5F0h]
  _QWORD v120[61]; // [rsp+508h] [rbp-5E8h] BYREF
  _BYTE __src[488]; // [rsp+6F0h] [rbp-400h] BYREF
  int v122; // [rsp+8D8h] [rbp-218h] BYREF
  char v123; // [rsp+8DCh] [rbp-214h] BYREF
  __int128 v124; // [rsp+8E0h] [rbp-210h]
  __int64 v125; // [rsp+8F0h] [rbp-200h]
  __int64 v126; // [rsp+8F8h] [rbp-1F8h]
  __int64 v127; // [rsp+900h] [rbp-1F0h]
  __int64 v128; // [rsp+908h] [rbp-1E8h]
  __int64 v129; // [rsp+910h] [rbp-1E0h]
  __int64 v130; // [rsp+918h] [rbp-1D8h]
  __int64 v131; // [rsp+920h] [rbp-1D0h]
  __int64 v132; // [rsp+928h] [rbp-1C8h]
  _OWORD v133[6]; // [rsp+930h] [rbp-1C0h] BYREF
  _BYTE *v134; // [rsp+990h] [rbp-160h]
  _OWORD v135[6]; // [rsp+998h] [rbp-158h] BYREF
  signed __int64 v136; // [rsp+9F8h] [rbp-F8h]
  unsigned __int128 v137; // [rsp+A00h] [rbp-F0h] BYREF
  __int64 v138; // [rsp+A10h] [rbp-E0h]
  unsigned __int128 v139; // [rsp+A20h] [rbp-D0h] BYREF
  __int64 v140; // [rsp+A30h] [rbp-C0h]
  __int128 v141; // [rsp+A38h] [rbp-B8h]
  __int128 v142; // [rsp+A48h] [rbp-A8h]
  unsigned __int64 v143; // [rsp+A58h] [rbp-98h]
  __int64 v144; // [rsp+A60h] [rbp-90h]
  _BYTE v145[16]; // [rsp+A68h] [rbp-88h] BYREF
  __int64 v146; // [rsp+A78h] [rbp-78h] BYREF
  int v147; // [rsp+A80h] [rbp-70h]
  unsigned __int128 v148; // [rsp+A88h] [rbp-68h] BYREF
  __int64 v149; // [rsp+A98h] [rbp-58h]
  unsigned int v150; // [rsp+AA4h] [rbp-4Ch] BYREF
  __int64 v151; // [rsp+AA8h] [rbp-48h]
  _QWORD *v152; // [rsp+AB0h] [rbp-40h]
  void *v153; // [rsp+AB8h] [rbp-38h]
  int v154; // [rsp+AC0h] [rbp-30h]
  unsigned __int8 v155; // [rsp+AC7h] [rbp-29h]

  v116[0] = &unk_101672BFC;
  v116[1] = 4;
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v145);
  v146 = std::time::Instant::now::hda76af2c3a449055(v145);
  v147 = v2;
  v120[0] = v116;
  v120[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_10185B6F0, v120);
  codexmate_lib::commands::accounts::AccountSwitchTrace::event::h0798609cccacc532(v145, "started", 7, __src);
  v151 = a2;
  v3 = *(_QWORD *)(a2 + 136);
  v4 = tauri::state::StateManager::try_get::h26c0868cf4d9a197(*(_QWORD *)(v3 + 4872) + 16LL);
  if ( !v4 )
  {
    v120[0] = &anon_c267236184b514dd3bb615f659186bd4_1439;
    v120[1] = 61;
    *(_QWORD *)__src = v120;
    *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      &anon_c267236184b514dd3bb615f659186bd4_1461,
      __src,
      &anon_c267236184b514dd3bb615f659186bd4_1462);
  }
  v5 = v4;
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::h89b23dc8a7f5cba8(v120, v4, &unk_101673FC5, 57);
  if ( LODWORD(v120[0]) != 11 )
  {
    qmemcpy(__src, v120, 0x60u);
    *(_QWORD *)&v117[0] = 0;
    *((_QWORD *)&v117[0] + 1) = 1;
    *(_QWORD *)&v117[1] = 0;
    v116[2] = 1610612768;
    v116[0] = v117;
    v116[1] = &anon_d8252eabb9881fde8202db2e5219cf3a_1159;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e(
                            __src,
                            v116) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result::u"
        "nwrap()` on an `Err` valueErrorIoInvalidArchiveUnsupportedArchiveFileNotFoundInvalidPassword",
        55,
        &v139,
        &anon_d8252eabb9881fde8202db2e5219cf3a_1187,
        &anon_d8252eabb9881fde8202db2e5219cf3a_1162);
    v17 = *((_QWORD *)&v117[0] + 1);
    v16 = *(_QWORD *)&v117[0];
    v18 = v117[1];
    *((_DWORD *)a1 + 7) = DWORD1(v117[1]);
    *(_DWORD *)(a1 + 25) = *(_DWORD *)((char *)&v117[1] + 1);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v120);
    *(_OWORD *)(a1 + 8) = __PAIR128__(v17, v16);
    v15 = a1;
    a1[24] = v18;
    *(_QWORD *)a1 = 2;
    return v15;
  }
  v153 = a1;
  v152 = (_QWORD *)v120[1];
  v155 = v120[2];
  v6 = (_QWORD *)tauri::state::StateManager::try_get::hafe77731d78fca24(*(_QWORD *)(v3 + 4872) + 16LL);
  v7 = v6;
  if ( !v6 )
  {
    v120[0] = &anon_c267236184b514dd3bb615f659186bd4_1435;
    v120[1] = 76;
    *(_QWORD *)__src = v120;
    *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      &anon_c267236184b514dd3bb615f659186bd4_1461,
      __src,
      &anon_c267236184b514dd3bb615f659186bd4_1462);
  }
  v8 = *v6;
  if ( !*v6 )
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h10ddfa5357ade07a(v6);
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v8, v5);
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8) ^ 1;
    if ( *((_BYTE *)v7 + 8) )
      goto LABEL_8;
  }
  else
  {
    v9 = 0;
    if ( *((_BYTE *)v7 + 8) )
    {
LABEL_8:
      v120[0] = 0;
      v120[1] = 1;
      v120[2] = 0;
      *(_QWORD *)&__src[16] = 1610612768;
      *(_QWORD *)__src = v120;
      *(_QWORD *)&__src[8] = &anon_d8252eabb9881fde8202db2e5219cf3a_1159;
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              &anon_aee73f113797d29047cd8e0f456f5ed4_1517,
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result:"
          ":unwrap()` on an `Err` valueErrorIoInvalidArchiveUnsupportedArchiveFileNotFoundInvalidPassword",
          55,
          &v139,
          &anon_d8252eabb9881fde8202db2e5219cf3a_1187,
          &anon_d8252eabb9881fde8202db2e5219cf3a_1162);
      v10 = v120[0];
      v11 = v120[1];
      v12 = v120[2];
      LODWORD(v116[0]) = *(_DWORD *)((char *)&v120[2] + 1);
      *(_DWORD *)((char *)v116 + 3) = HIDWORD(v120[2]);
      if ( !v9
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_aee73f113797d29047cd8e0f456f5ed4_1517) )
      {
        *((_BYTE *)v7 + 8) = 1;
      }
      v13 = *v7;
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v7);
      v14 = v116[0];
      v15 = (char *)v153;
      *((_DWORD *)v153 + 7) = *(_DWORD *)((char *)v116 + 3);
      *(_DWORD *)(v15 + 25) = v14;
      *((_QWORD *)v15 + 1) = v10;
      *((_QWORD *)v15 + 2) = v11;
      v15[24] = v12;
      *(_QWORD *)v15 = 2;
LABEL_12:
      if ( !v155
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v13) )
      {
        *((_BYTE *)v152 + 8) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v152);
      return v15;
    }
  }
  v20 = v7[28];
  if ( v20 < 0 )
  {
    v21 = 0;
    goto LABEL_24;
  }
  v22 = (const void *)v7[27];
  v144 = v3;
  if ( v20 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v5);
    v21 = 1;
    v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v20, 1);
    if ( !v23 )
LABEL_24:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, v20);
  }
  else
  {
    v23 = 1;
  }
  v134 = (_BYTE *)v23;
  v24 = v23;
  v136 = v20;
  memcpy((void *)v23, v22, v20);
  if ( !v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v24) )
  {
    *((_BYTE *)v7 + 8) = 1;
  }
  v25 = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v7);
  LOBYTE(v25) = 1;
  v154 = v25;
  std::path::Path::_join::hb1a495d4f06b13b8(v116, v134, v136, &anon_9d64d47fc319f676115352a1d8325eac_28, 24);
  v26 = v116[1];
  codexmate_lib::core::account_coordination::FileLock::acquire::h3f3285fd8d177aec(
    __src,
    v116[1],
    v116[2],
    &anon_9d64d47fc319f676115352a1d8325eac_29,
    18);
  v27 = *(_QWORD *)__src;
  v28 = *(_DWORD *)&__src[8];
  v29 = v153;
  if ( *(_QWORD *)__src != 11 )
  {
    v30 = &__src[12];
    v31 = v120;
    for ( i = 21; i; --i )
      *v31++ = *v30++;
  }
  if ( v116[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v116[0], 1);
  if ( (_DWORD)v27 != 11 )
  {
    *(_QWORD *)__src = v27;
    *(_DWORD *)&__src[8] = v28;
    v40 = &__src[12];
    v41 = v120;
    for ( j = 21; j; --j )
      *v40++ = *v41++;
    *(_QWORD *)&v117[0] = 0;
    *((_QWORD *)&v117[0] + 1) = 1;
    *(_QWORD *)&v117[1] = 0;
    v116[2] = 1610612768;
    v116[0] = v117;
    v116[1] = &anon_d8252eabb9881fde8202db2e5219cf3a_1159;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e(
                            __src,
                            v116) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result::u"
        "nwrap()` on an `Err` valueErrorIoInvalidArchiveUnsupportedArchiveFileNotFoundInvalidPassword",
        55,
        &v139,
        &anon_d8252eabb9881fde8202db2e5219cf3a_1187,
        &anon_d8252eabb9881fde8202db2e5219cf3a_1162);
    v43 = *(_QWORD *)&v117[0];
    v44 = DWORD2(v117[0]);
    __dst[0] = *(_QWORD *)((char *)v117 + 12);
    LODWORD(__dst[1]) = DWORD1(v117[1]);
    v13 = (unsigned __int64)__src;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(__src);
    v45 = v153;
    *((_DWORD *)v153 + 7) = __dst[1];
    *(_QWORD *)((char *)v45 + 20) = __dst[0];
    v45[1] = v43;
    *((_DWORD *)v45 + 4) = v44;
    v15 = (char *)v45;
    *v45 = 2;
    if ( v136 )
    {
      v13 = (unsigned __int64)v134;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v136, 1);
    }
    goto LABEL_12;
  }
  v150 = v28;
  v33 = std::time::Instant::elapsed::h457f209775ed485c(&v146);
  v117[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v33 + v34 / 0xF4240uLL;
  v116[0] = &unk_10167401F;
  v116[1] = 14;
  *(_QWORD *)__src = v145;
  *(_QWORD *)&__src[8] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c;
  *(_QWORD *)&__src[16] = v117;
  *(_QWORD *)&__src[24] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
  *(_QWORD *)&__src[32] = v116;
  *(_QWORD *)&__src[40] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v120, &unk_10185B6FA, __src);
  codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a(&unk_101673DFD, 14, &unk_10167400A, 21, v120);
  codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::hae3756d704dc2ef8(v120, 5, 0, 0, 0);
  if ( LODWORD(v120[0]) == 11 )
  {
    v132 = v120[7];
    v131 = v120[6];
    v130 = v120[5];
    v129 = v120[4];
    v128 = v120[3];
    v127 = v120[2];
    v126 = v120[1];
    v35 = std::time::Instant::elapsed::h457f209775ed485c(&v146);
    v117[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v35 + v36 / 0xF4240uLL;
    v116[0] = &unk_10167403B;
    v116[1] = 12;
    *(_QWORD *)__src = v145;
    *(_QWORD *)&__src[8] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c;
    *(_QWORD *)&__src[16] = v117;
    *(_QWORD *)&__src[24] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&__src[32] = v116;
    *(_QWORD *)&__src[40] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v120, &unk_10185B6FA, __src);
    codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a(&unk_101673DFD, 14, &unk_10167402D, 14, v120);
    v37 = v144;
    codexmate_lib::commands::accounts::capture_switch_rollback_state::h4346441c41b6915f(__src, v144);
    if ( *(_QWORD *)__src == 0x8000000000000000LL )
    {
      v140 = *(_QWORD *)&__src[24];
      v139 = *(_OWORD *)&__src[8];
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v37);
      v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
      if ( !v38 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
      v39 = v38;
      v120[0] = &v139;
      v120[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v133, &unk_10185BADA, v120);
      *(_QWORD *)(v39 + 16) = *(_QWORD *)&v133[1];
      *(_OWORD *)v39 = v133[0];
      *(_QWORD *)&v135[0] = 1;
      *((_QWORD *)&v135[0] + 1) = v39;
      *(_QWORD *)&v135[1] = 1;
      v120[6] = v132;
      v120[5] = v131;
      v120[4] = v130;
      v120[3] = v129;
      v120[2] = v128;
      v120[1] = v127;
      v120[0] = v126;
      codexmate_lib::platform::process::CodexTransitionFence::finish::hfa886e64c0b837ba(v116, v120);
      if ( LODWORD(v116[0]) == 11 )
      {
        codexmate_lib::platform::process::CodexProcessLifecycle::launch::h511205403a8bdda7(v116);
        if ( LODWORD(v116[0]) != 11 )
        {
          qmemcpy(v120, v116, 0x60u);
          *(_QWORD *)&v148 = v120;
          *((_QWORD *)&v148 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &unk_10185B73E, &v148);
          alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(v135, v117);
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v120);
        }
      }
      else
      {
        qmemcpy(v120, v116, 0x60u);
        *(_QWORD *)&v148 = v120;
        *((_QWORD *)&v148 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &unk_10185BAFD, &v148);
        alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h4ac0b55ef1755d97(v135, v117);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v120);
      }
      v58 = std::time::Instant::elapsed::h457f209775ed485c(&v146);
      v137 = 0x3E8 * (unsigned __int128)(unsigned __int64)v58 + v59 / 0xF4240uLL;
      *(_QWORD *)&v148 = "code=SWITCH_ROLLBACK_CAPTURE_FAILEDquiet_acquire_failedaimami";
      *((_QWORD *)&v148 + 1) = 35;
      v120[0] = v145;
      v120[1] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c;
      v120[2] = &v137;
      v120[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
      v120[4] = &v148;
      v120[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v116, &unk_10185B6FA, v120);
      codexmate_lib::platform::debug_log::app_event::hb05f8873cac9750a(&unk_101673DFD, 14, "failed | ", 6, v116);
      alloc::str::join_generic_copy::h02d08564f831751b(v120, *((_QWORD *)&v135[0] + 1), *(_QWORD *)&v135[1], " | ", 3);
      v29[3] = v120[2];
      v60 = v120[0];
      v29[2] = v120[1];
      v29[1] = v60;
      *v29 = 2;
      v61 = *(_QWORD *)&v135[1];
      if ( *(_QWORD *)&v135[1] )
      {
        v62 = (_QWORD *)(*((_QWORD *)&v135[0] + 1) + 8LL);
        do
        {
          v63 = *(v62 - 1);
          if ( v63 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v62, v63, 1);
          v62 += 3;
          --v61;
        }
        while ( v61 );
      }
      if ( *(_QWORD *)&v135[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v135[0] + 1), 24LL * *(_QWORD *)&v135[0], 8);
      if ( (_QWORD)v139 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v139 + 1), v139, 1);
      v51 = 1;
      v15 = (char *)v153;
      goto LABEL_95;
    }
    v143 = 0x8000000000000000LL;
    memcpy(__dst, __src, sizeof(__dst));
    v52 = (_QWORD *)tauri::state::StateManager::try_get::hafe77731d78fca24(*(_QWORD *)(v144 + 4872) + 16LL);
    v53 = v52;
    if ( !v52 )
    {
      *(_QWORD *)&v117[0] = &anon_c267236184b514dd3bb615f659186bd4_1435;
      *((_QWORD *)&v117[0] + 1) = 76;
      *(_QWORD *)__src = v117;
      *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
      core::panicking::panic_fmt::h3a793735daf6e4ec(
        &anon_c267236184b514dd3bb615f659186bd4_1461,
        __src,
        &anon_c267236184b514dd3bb615f659186bd4_1462);
    }
    v54 = *v52;
    if ( !*v52 )
      v54 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h10ddfa5357ade07a(v52);
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v54, __src);
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v55 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v54);
      LOBYTE(v55) = v55 ^ 1;
      if ( *((_BYTE *)v53 + 8) )
        goto LABEL_57;
    }
    else
    {
      v55 = 0;
      if ( *((_BYTE *)v53 + 8) )
      {
LABEL_57:
        *(_QWORD *)&v117[0] = 0;
        *((_QWORD *)&v117[0] + 1) = 1;
        *(_QWORD *)&v117[1] = 0;
        *(_QWORD *)&__src[16] = 1610612768;
        *(_QWORD *)__src = v117;
        *(_QWORD *)&__src[8] = &anon_d8252eabb9881fde8202db2e5219cf3a_1159;
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                &anon_aee73f113797d29047cd8e0f456f5ed4_1517,
                                41,
                                __src) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Resul"
            "t::unwrap()` on an `Err` valueErrorIoInvalidArchiveUnsupportedArchiveFileNotFoundInvalidPassword",
            55,
            &v139,
            &anon_d8252eabb9881fde8202db2e5219cf3a_1187,
            &anon_d8252eabb9881fde8202db2e5219cf3a_1162);
        v56 = v117[1];
        LODWORD(v148) = *(_DWORD *)((char *)&v117[1] + 1);
        *(_DWORD *)((char *)&v148 + 3) = DWORD1(v117[1]);
        v57 = v117[0];
        if ( !(_BYTE)v55
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_aee73f113797d29047cd8e0f456f5ed4_1517) )
        {
          *((_BYTE *)v53 + 8) = 1;
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v53);
        *(_DWORD *)((char *)&v137 + 3) = *(_DWORD *)((char *)&v148 + 3);
        LODWORD(v137) = v148;
LABEL_91:
        v15 = (char *)v153;
        v135[0] = v57;
        LOBYTE(v135[1]) = v56;
        *(_DWORD *)((char *)&v135[1] + 1) = v137;
        DWORD1(v135[1]) = *(_DWORD *)((char *)&v137 + 3);
        *(_QWORD *)&__src[48] = v132;
        *(_QWORD *)&__src[40] = v131;
        *(_QWORD *)&__src[32] = v130;
        *(_QWORD *)&__src[24] = v129;
        *(_QWORD *)&__src[16] = v128;
        *(_QWORD *)&__src[8] = v127;
        *(_QWORD *)__src = v126;
        codexmate_lib::commands::accounts::finish_switch_failure::hb5a5acd5c6b2a185(v133, v145, __dst, __src, v135);
        if ( !v155
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v133) )
        {
          *((_BYTE *)v152 + 8) = 1;
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v152);
        *(_QWORD *)&__src[16] = *(_QWORD *)&v133[1];
        *(_OWORD *)__src = v133[0];
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h2a6e393a7acd84de(v117, v151, v145, __src);
        *((_QWORD *)v15 + 3) = *(_QWORD *)&v117[1];
        *(_OWORD *)(v15 + 8) = v117[0];
        *(_QWORD *)v15 = 2;
        goto LABEL_94;
      }
    }
    v154 = v55;
    codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::hf635cf2cd2a071fe(__src);
    v64 = *(_QWORD *)__src;
    if ( *(_QWORD *)__src == 2 )
    {
      qmemcpy(v117, &__src[8], 0x60u);
      *(_QWORD *)&v135[0] = 0;
      *((_QWORD *)&v135[0] + 1) = 1;
      *(_QWORD *)&v135[1] = 0;
      *(_QWORD *)&v133[1] = 1610612768;
      *(_QWORD *)&v133[0] = v135;
      *((_QWORD *)&v133[0] + 1) = &anon_d8252eabb9881fde8202db2e5219cf3a_1159;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e(
                              v117,
                              v133) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result:"
          ":unwrap()` on an `Err` valueErrorIoInvalidArchiveUnsupportedArchiveFileNotFoundInvalidPassword",
          55,
          &v139,
          &anon_d8252eabb9881fde8202db2e5219cf3a_1187,
          &anon_d8252eabb9881fde8202db2e5219cf3a_1162);
      v57 = v135[0];
      v56 = v135[1];
      LODWORD(v139) = *(_DWORD *)((char *)&v135[1] + 1);
      *(_DWORD *)((char *)&v139 + 3) = DWORD1(v135[1]);
      v65 = &__src[8];
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(&__src[8]);
      LODWORD(v137) = v139;
      *(_DWORD *)((char *)&v137 + 3) = *(_DWORD *)((char *)&v139 + 3);
    }
    else
    {
      v56 = __src[24];
      LODWORD(v137) = *(_DWORD *)&__src[25];
      *(_DWORD *)((char *)&v137 + 3) = *(_DWORD *)&__src[28];
      v65 = v120;
      memcpy(v120, &__src[32], 0x1C8u);
      v57 = *(_OWORD *)&__src[8];
    }
    if ( !(_BYTE)v154
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v65) )
    {
      *((_BYTE *)v53 + 8) = 1;
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v53);
    if ( (_DWORD)v64 == 2 )
      goto LABEL_91;
    HIDWORD(v116[3]) = *(_DWORD *)((char *)&v137 + 3);
    *(_DWORD *)((char *)&v116[3] + 1) = v137;
    v66 = memcpy(&v116[4], v120, 0x1C8u);
    v116[0] = v64;
    *(_OWORD *)&v116[1] = v57;
    LOBYTE(v116[3]) = v56;
    LOBYTE(v66) = 1;
    v154 = (int)v66;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v116[44]);
    v120[2] = *(_QWORD *)&__src[16];
    v120[1] = *(_QWORD *)&__src[8];
    v120[0] = *(_QWORD *)__src;
    if ( __dst[27] != v143 && __dst[27] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[28], __dst[27], 1);
    __dst[29] = v120[2];
    __dst[28] = v120[1];
    __dst[27] = v120[0];
    v67 = &v116[50];
    *(_QWORD *)__src = &v116[50];
    *(_QWORD *)&__src[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    *(_QWORD *)&__src[16] = (char *)&v116[50] + 1;
    *(_QWORD *)&__src[24] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    LOBYTE(v67) = 1;
    v154 = (int)v67;
    v68 = alloc::fmt::format::format_inner::h3c16c74008a310d4(v113, &unk_10185B857, __src);
    LOBYTE(v68) = 1;
    v154 = v68;
    v69 = codexmate_lib::commands::accounts::AccountSwitchTrace::event::h0798609cccacc532(
            v145,
            &unk_101674047,
            14,
            v113);
    LOBYTE(v69) = 1;
    v154 = v69;
    codexmate_lib::commands::accounts::verify_account_switch::hf28ef18a797a3d8e(v115, v144, v116[45], v116[46]);
    v70 = v143;
    if ( v115[0] != v143 )
    {
      *(_QWORD *)&__src[48] = v132;
      *(_QWORD *)&__src[40] = v131;
      *(_QWORD *)&__src[32] = v130;
      *(_QWORD *)&__src[24] = v129;
      *(_QWORD *)&__src[16] = v128;
      *(_QWORD *)&__src[8] = v127;
      *(_QWORD *)__src = v126;
      codexmate_lib::commands::accounts::finish_switch_failure::hb5a5acd5c6b2a185(v117, v145, __dst, __src, v115);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
        v152,
        v155);
      *(_QWORD *)&__src[16] = *(_QWORD *)&v117[1];
      *(_OWORD *)__src = v117[0];
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h2a6e393a7acd84de(v120, v151, v145, __src);
      v15 = (char *)v153;
      v73 = v120[2];
LABEL_109:
      *((_QWORD *)v15 + 3) = v73;
      v74 = v120[0];
      *((_QWORD *)v15 + 2) = v120[1];
      *((_QWORD *)v15 + 1) = v74;
      *(_QWORD *)v15 = 2;
LABEL_116:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$GT$::hf979afc7504388d8(v116);
      goto LABEL_94;
    }
    LOBYTE(v70) = 1;
    v154 = v70;
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
      v145,
      &unk_101674055,
      13,
      &unk_101674062,
      9);
    *(_QWORD *)&__src[48] = v132;
    *(_QWORD *)&__src[40] = v131;
    *(_QWORD *)&__src[32] = v130;
    *(_QWORD *)&__src[24] = v129;
    *(_QWORD *)&__src[16] = v128;
    *(_QWORD *)&__src[8] = v127;
    *(_QWORD *)__src = v126;
    codexmate_lib::platform::process::CodexTransitionFence::finish::hfa886e64c0b837ba(v133, __src);
    if ( LODWORD(v133[0]) != 11 )
    {
      qmemcpy(v117, v133, 0x60u);
      codexmate_lib::commands::accounts::verify_account_switch::hf28ef18a797a3d8e(&v139, v144, v116[45], v116[46]);
      if ( (_QWORD)v139 == v143 )
      {
        *(_QWORD *)__src = v117;
        *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v135, &unk_10185BA6A, __src);
        codexmate_lib::commands::accounts::push_core_warning::h3bd13936ad3f42b2(
          &v116[57],
          "CLIENT_RESTART_DEFERREDcommitted_restart_deferredcode=SWITCH_ROLLBACK_CAPTURE_FAILEDquiet_acquire_failedaimami",
          23,
          v135);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
          v152,
          v155);
        memcpy(__src, v116, sizeof(__src));
        codexmate_lib::commands::accounts::finalize_committed_switch::h5abc7bcc1de9ec95(v120);
        v15 = (char *)v153;
        memcpy(v153, v120, 0x1E8u);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v117);
LABEL_94:
        core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::hda2d6f42ecdf4434(__dst);
        v51 = 0;
        goto LABEL_95;
      }
      *(_QWORD *)&v135[1] = v140;
      v135[0] = v139;
      *(_QWORD *)__src = v117;
      *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
      *(_QWORD *)&__src[16] = v135;
      *(_QWORD *)&__src[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v120, &unk_10185B95E, __src);
      v75 = v120[0];
      v76 = v120[1];
      v77 = v120[2];
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
        v145,
        "failed | ",
        6,
        &unk_101674140,
        32);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
        v152,
        v155);
      *(_QWORD *)__src = v75;
      *(_QWORD *)&__src[8] = v76;
      *(_QWORD *)&__src[16] = v77;
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h2a6e393a7acd84de(v120, v151, v145, __src);
      v78 = v153;
      *((_QWORD *)v153 + 3) = v120[2];
      v79 = v120[0];
      v78[2] = v120[1];
      v78[1] = v79;
      *v78 = 2;
      if ( *(_QWORD *)&v135[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v135[0] + 1), *(_QWORD *)&v135[0], 1);
      v154 = 0;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v117);
      goto LABEL_115;
    }
    v122 = DWORD2(v133[0]);
    v123 = BYTE12(v133[0]);
    if ( BYTE12(v133[0]) & 1 | (DWORD2(v133[0]) != 0) )
    {
      *(_QWORD *)__src = &v122;
      *(_QWORD *)&__src[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
      *(_QWORD *)&__src[16] = &v123;
      *(_QWORD *)&__src[24] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v112, &unk_10185B87B, __src);
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h0798609cccacc532(v145, &unk_10167406B, 14, v112);
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::hae3756d704dc2ef8(v133, 5, 0, 0, 0);
      if ( LODWORD(v133[0]) != 11 )
      {
        qmemcpy(v117, v133, 0x60u);
        codexmate_lib::commands::accounts::verify_account_switch::hf28ef18a797a3d8e(&v148, v144, v116[45], v116[46]);
        if ( (_QWORD)v148 == v143 )
        {
          *(_QWORD *)__src = v117;
          *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v135, &unk_10185BA06, __src);
          codexmate_lib::commands::accounts::push_core_warning::h3bd13936ad3f42b2(
            &v116[57],
            "CLIENT_RESTART_DEFERREDcommitted_restart_deferredcode=SWITCH_ROLLBACK_CAPTURE_FAILEDquiet_acquire_failedaimami",
            23,
            v135);
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
            v152,
            v155);
          memcpy(__src, v116, sizeof(__src));
          codexmate_lib::commands::accounts::finalize_committed_switch::h5abc7bcc1de9ec95(v120);
          v15 = (char *)v153;
          memcpy(v153, v120, 0x1E8u);
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v117);
          goto LABEL_94;
        }
        *(_QWORD *)&v135[1] = v149;
        v135[0] = v148;
        *(_QWORD *)__src = v117;
        *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
        *(_QWORD *)&__src[16] = v135;
        *(_QWORD *)&__src[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v120, &unk_10185B95E, __src);
        v80 = v120[0];
        v81 = v120[1];
        v82 = v120[2];
        codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
          v145,
          "failed | ",
          6,
          &unk_101674140,
          32);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
          v152,
          v155);
        *(_QWORD *)__src = v80;
        *(_QWORD *)&__src[8] = v81;
        *(_QWORD *)&__src[16] = v82;
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h2a6e393a7acd84de(v120, v151, v145, __src);
        v83 = v153;
        *((_QWORD *)v153 + 3) = v120[2];
        v84 = v120[0];
        v83[2] = v120[1];
        v83[1] = v84;
        *v83 = 2;
        if ( *(_QWORD *)&v135[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v135[0] + 1), *(_QWORD *)&v135[0], 1);
        v154 = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v117);
        goto LABEL_115;
      }
      v142 = v133[3];
      v141 = v133[2];
      v140 = *((_QWORD *)&v133[1] + 1);
      v139 = *(_OWORD *)((char *)v133 + 8);
      v72 = tauri::Manager::state::h451a993517cb5f2e(v151, 5, v71, *(_QWORD *)&v133[1]);
      std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hff6f7323089bd76f(v133, v72);
      if ( LODWORD(v133[0]) == 1 )
      {
        v120[0] = *((_QWORD *)&v133[0] + 1);
        LOBYTE(v120[1]) = v133[1];
        *(_QWORD *)__src = v120;
        *(_QWORD *)&__src[8] = _$LT$std..sync..poison..PoisonError$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hd4c01f0287eff036;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &unk_10185B9E4, __src);
        v124 = v117[0];
        v125 = *(_QWORD *)&v117[1];
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
          v120[0],
          LODWORD(v120[1]));
LABEL_126:
        v119 = v125;
        v118 = v124;
LABEL_127:
        *(_OWORD *)&__src[40] = v142;
        *(_OWORD *)&__src[24] = v141;
        *(_QWORD *)&__src[16] = v140;
        *(_OWORD *)__src = v139;
        codexmate_lib::commands::accounts::finish_switch_failure::hb5a5acd5c6b2a185(v133, v145, __dst, __src, &v118);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
          v152,
          v155);
        *(_QWORD *)&__src[16] = *(_QWORD *)&v133[1];
        *(_OWORD *)__src = v133[0];
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h2a6e393a7acd84de(v120, v151, v145, __src);
        v73 = v120[2];
        v15 = (char *)v153;
        goto LABEL_109;
      }
      v85 = *((_QWORD *)&v133[0] + 1);
      v86 = v133[1];
      codexmate_lib::core::repository::Repository::switch_account::h1a07f57e437aa206(__src);
      v87 = *(_QWORD *)__src;
      if ( *(_QWORD *)__src == 2 )
      {
        qmemcpy(v120, &__src[8], 0x60u);
        codexmate_lib::commands::system::run_daemon_once_blocking::_$u7b$$u7b$closure$u7d$$u7d$::h28a32fc2e7d2ee14(
          v117,
          v120);
        v124 = v117[0];
        v125 = *(_QWORD *)&v117[1];
      }
      else
      {
        v125 = *(_QWORD *)&__src[24];
        v124 = *(_OWORD *)&__src[8];
        memcpy(v117, &__src[32], 0x1C8u);
      }
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
        v85,
        v86);
      if ( (_DWORD)v87 == 2 )
        goto LABEL_126;
      *(_QWORD *)&__src[24] = v125;
      *(_OWORD *)&__src[8] = v124;
      memcpy(&__src[32], v117, 0x1C8u);
      *(_QWORD *)__src = v87;
      codexmate_lib::commands::accounts::perform_switch_payload_with_restart_inner::_$u7b$$u7b$closure$u7d$$u7d$::h685390a3475d5188(
        &v118,
        v144,
        v116[45],
        v116[46],
        __src);
      if ( (_QWORD)v118 != v143 )
        goto LABEL_127;
      *(_OWORD *)&__src[40] = v142;
      *(_OWORD *)&__src[24] = v141;
      *(_QWORD *)&__src[16] = v140;
      *(_OWORD *)__src = v139;
      v88 = codexmate_lib::platform::process::CodexTransitionFence::finish::hfa886e64c0b837ba(v135, __src);
      if ( LODWORD(v135[0]) != 11 )
      {
        qmemcpy(v133, v135, sizeof(v133));
        LOBYTE(v88) = 1;
        v154 = v88;
        codexmate_lib::commands::accounts::verify_account_switch::hf28ef18a797a3d8e(&v137, v144, v116[45], v116[46]);
        if ( (_QWORD)v137 == v143 )
        {
          *(_QWORD *)__src = v133;
          v98 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
          *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
          LOBYTE(v98) = 1;
          v154 = (int)v98;
          v99 = alloc::fmt::format::format_inner::h3c16c74008a310d4(&v148, &unk_10185B983, __src);
          LOBYTE(v99) = 1;
          v154 = v99;
          codexmate_lib::commands::accounts::push_core_warning::h3bd13936ad3f42b2(
            &v116[57],
            "CLIENT_RESTART_DEFERREDcommitted_restart_deferredcode=SWITCH_ROLLBACK_CAPTURE_FAILEDquiet_acquire_failedaimami",
            23,
            &v148);
          v154 = 0;
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
            v152,
            v155);
          memcpy(__src, v116, sizeof(__src));
          v154 = 0;
          codexmate_lib::commands::accounts::finalize_committed_switch::h5abc7bcc1de9ec95(v120);
          memcpy(v153, v120, 0x1E8u);
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v133);
          v15 = (char *)v153;
          goto LABEL_94;
        }
        v149 = v138;
        v148 = v137;
        *(_QWORD *)__src = v133;
        *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
        *(_QWORD *)&__src[16] = &v148;
        *(_QWORD *)&__src[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v103 = alloc::fmt::format::format_inner::h3c16c74008a310d4(v120, &unk_10185B95E, __src);
        v104 = v120[0];
        v105 = v120[1];
        v106 = v120[2];
        LOBYTE(v103) = 1;
        v154 = v103;
        codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
          v145,
          "failed | ",
          6,
          &unk_101674140,
          32);
        v154 = 0;
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
          v152,
          v155);
        *(_QWORD *)__src = v104;
        *(_QWORD *)&__src[8] = v105;
        *(_QWORD *)&__src[16] = v106;
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h2a6e393a7acd84de(v120, v151, v145, __src);
        v107 = v153;
        *((_QWORD *)v153 + 3) = v120[2];
        v108 = v120[0];
        v107[2] = v120[1];
        v107[1] = v108;
        *v107 = 2;
        if ( (_QWORD)v148 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v148 + 1), v148, 1);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v133);
        goto LABEL_115;
      }
      if ( DWORD2(v135[0]) || BYTE12(v135[0]) )
      {
        v100 = v144;
        codexmate_lib::commands::accounts::verify_account_switch::hf28ef18a797a3d8e(v135, v144, v116[45], v116[46]);
        if ( *(_QWORD *)&v135[0] == v143 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v135, v100);
          v101 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(103, 1);
          if ( !v101 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 103);
          v102 = v101;
          memcpy(v101, &unk_101674160, 0x67u);
          *(_QWORD *)__src = 103;
          *(_QWORD *)&__src[8] = v102;
          *(_QWORD *)&__src[16] = 103;
          codexmate_lib::commands::accounts::push_core_warning::h3bd13936ad3f42b2(
            &v116[57],
            "CLIENT_RESTART_DEFERREDcommitted_restart_deferredcode=SWITCH_ROLLBACK_CAPTURE_FAILEDquiet_acquire_failedaimami",
            23,
            __src);
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
            v152,
            v155);
          memcpy(__src, v116, sizeof(__src));
          codexmate_lib::commands::accounts::finalize_committed_switch::h5abc7bcc1de9ec95(v120);
          v15 = (char *)v153;
          memcpy(v153, v120, 0x1E8u);
          goto LABEL_94;
        }
        *(_QWORD *)&v133[1] = *(_QWORD *)&v135[1];
        v109 = v135[0];
        v133[0] = v135[0];
        LOBYTE(v109) = 1;
        v154 = v109;
        codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
          v145,
          "failed | ",
          6,
          &unk_101674140,
          32);
        v154 = 0;
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
          v152,
          v155);
        v120[0] = v133;
        v120[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v154 = 0;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_10185B93E, v120);
        v154 = 0;
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h2a6e393a7acd84de(v120, v151, v145, __src);
        v110 = v153;
        *((_QWORD *)v153 + 3) = v120[2];
        v111 = v120[0];
        v110[2] = v120[1];
        v110[1] = v111;
        *v110 = 2;
        if ( *(_QWORD *)&v133[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v133[0] + 1), *(_QWORD *)&v133[0], 1);
LABEL_115:
        v15 = (char *)v153;
        goto LABEL_116;
      }
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
        v145,
        &unk_101674079,
        15,
        &unk_101674062,
        9);
    }
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
      v145,
      &unk_101674088,
      14,
      &unk_10167401F,
      14);
    codexmate_lib::platform::process::CodexProcessLifecycle::launch::h511205403a8bdda7(v135);
    if ( LODWORD(v135[0]) != 11 )
    {
      qmemcpy(v133, v135, sizeof(v133));
      *(_QWORD *)__src = v133;
      *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v148, &unk_10185B89A, __src);
      codexmate_lib::commands::accounts::push_core_warning::h3bd13936ad3f42b2(&v116[57], &unk_101674096, 21, &v148);
      _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h2d39692ca418ee93(__src, v133);
      v89 = *(_QWORD *)&__src[8];
      *(_QWORD *)&v137 = codexmate_lib::commands::accounts::switch_error_code::h17149d14ab408a58(
                           *(_QWORD *)&__src[8],
                           *(_QWORD *)&__src[16]);
      *((_QWORD *)&v137 + 1) = v90;
      v120[0] = &v137;
      v120[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v139, &unk_10185B71B, v120);
      if ( *(_QWORD *)__src )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, *(_QWORD *)__src, 1);
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h0798609cccacc532(v145, &unk_1016740AB, 13, &v139);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
        v152,
        v155);
      memcpy(__src, v116, sizeof(__src));
      codexmate_lib::commands::accounts::finalize_committed_switch::h5abc7bcc1de9ec95(v120);
      v15 = (char *)v153;
      memcpy(v153, v120, 0x1E8u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v133);
      goto LABEL_94;
    }
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
      v145,
      &unk_1016740CF,
      12,
      &unk_101674062,
      9);
    codexmate_lib::commands::accounts::verify_account_switch_after_launch::h459051962aaa5388(
      &v148,
      v144,
      v116[45],
      v116[46]);
    if ( (_QWORD)v148 == v143 )
    {
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
        v145,
        &unk_10167412C,
        13,
        &unk_101674062,
        9);
      alloc::vec::Vec$LT$T$C$A$GT$::retain::ha9ccc1e5e7bf455f(&v116[57]);
      v154 = 0;
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
        v152,
        v155);
      memcpy(__src, v116, sizeof(__src));
      codexmate_lib::commands::accounts::finalize_committed_switch::h5abc7bcc1de9ec95(v120);
      memcpy(v153, v120, 0x1E8u);
      core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::hda2d6f42ecdf4434(__dst);
      v154 = 0;
      core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h8f7de51ccddfd33a(&v150);
      v15 = (char *)v153;
      if ( v136 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v136, 1);
      return v15;
    }
    v140 = v149;
    v91 = v148;
    v139 = v148;
    LOBYTE(v91) = 1;
    v154 = v91;
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
      v145,
      &unk_1016740DB,
      18,
      &unk_1016740ED,
      30);
    codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::hae3756d704dc2ef8(v120, 5, 0, 0, 0);
    if ( LODWORD(v120[0]) == 11 )
    {
      *(_QWORD *)&__src[48] = v120[7];
      *(_QWORD *)&__src[40] = v120[6];
      *(_QWORD *)&__src[32] = v120[5];
      *(_QWORD *)&__src[24] = v120[4];
      *(_QWORD *)&__src[16] = v120[3];
      *(_QWORD *)&__src[8] = v120[2];
      *(_QWORD *)__src = v120[1];
      v120[0] = &v139;
      v120[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v133, &unk_10185B8DF, v120);
      codexmate_lib::commands::accounts::finish_switch_failure::hb5a5acd5c6b2a185(v135, v145, __dst, __src, v133);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
        v152,
        v155);
      *(_QWORD *)&__src[16] = *(_QWORD *)&v135[1];
      *(_OWORD *)__src = v135[0];
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h2a6e393a7acd84de(v120, v151, v145, __src);
      v92 = v153;
      *((_QWORD *)v153 + 3) = v120[2];
      v93 = v120[0];
      v92[2] = v120[1];
      v92[1] = v93;
      *v92 = 2;
    }
    else
    {
      qmemcpy(__src, v120, 0x60u);
      *(_QWORD *)&v133[0] = &v139;
      *((_QWORD *)&v133[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v133[1] = __src;
      *((_QWORD *)&v133[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e;
      v94 = alloc::fmt::format::format_inner::h3c16c74008a310d4(v135, &unk_10185B8FD, v133);
      v95 = v135[0];
      v96 = *(_QWORD *)&v135[1];
      LOBYTE(v94) = 1;
      v154 = v94;
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h4f6af299253444c1(
        v145,
        "failed | ",
        6,
        &unk_10167410B,
        33);
      v154 = 0;
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h8bad7f3e237c75b9(
        v152,
        v155);
      v133[0] = v95;
      *(_QWORD *)&v133[1] = v96;
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h2a6e393a7acd84de(v135, v151, v145, v133);
      v97 = (char *)v153;
      *((_QWORD *)v153 + 3) = *(_QWORD *)&v135[1];
      *(_OWORD *)(v97 + 8) = v135[0];
      *(_QWORD *)v97 = 2;
      v154 = 0;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(__src);
    }
    if ( (_QWORD)v139 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v139 + 1), v139, 1);
    goto LABEL_115;
  }
  qmemcpy(__src, v120, 0x60u);
  *(_QWORD *)&v117[0] = 0;
  *((_QWORD *)&v117[0] + 1) = 1;
  *(_QWORD *)&v117[1] = 0;
  v116[2] = 1610612768;
  v116[0] = v117;
  v116[1] = &anon_d8252eabb9881fde8202db2e5219cf3a_1159;
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h4f993db867903d0e(
                          __src,
                          v116) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result::unw"
      "rap()` on an `Err` valueErrorIoInvalidArchiveUnsupportedArchiveFileNotFoundInvalidPassword",
      55,
      &v139,
      &anon_d8252eabb9881fde8202db2e5219cf3a_1187,
      &anon_d8252eabb9881fde8202db2e5219cf3a_1162);
  v47 = *((_QWORD *)&v117[0] + 1);
  v46 = *(_QWORD *)&v117[0];
  v48 = *(_QWORD *)&v117[1];
  __dst[0] = codexmate_lib::commands::accounts::switch_error_code::h17149d14ab408a58(
               *((_QWORD *)&v117[0] + 1),
               *(_QWORD *)&v117[1]);
  __dst[1] = v49;
  *(_QWORD *)&v117[0] = __dst;
  *((_QWORD *)&v117[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb3d2dce6d5e95943;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v116, &unk_10185B71B, v117);
  codexmate_lib::commands::accounts::AccountSwitchTrace::event::h0798609cccacc532(
    v145,
    "quiet_acquire_failedaimami",
    20,
    v116);
  v50 = (char *)v153;
  *(_OWORD *)((char *)v153 + 8) = __PAIR128__(v47, v46);
  v15 = v50;
  *((_QWORD *)v50 + 3) = v48;
  *(_QWORD *)v50 = 2;
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h4fbc1bbe57320bbc(v120);
  v51 = 1;
LABEL_95:
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2607c48d289dfc5b(&v150);
  v13 = v150;
  close_NOCANCEL(v150);
  if ( v136 )
  {
    v13 = (unsigned __int64)v134;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v136, 1);
  }
  if ( v51 )
    goto LABEL_12;
  return v15;
}

