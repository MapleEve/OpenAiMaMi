// __ZN13codexmate_lib8commands8accounts35perform_switch_payload_with_restart @ 0x1006a1800
// [FULL — hexrays 全解 53045B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::commands::accounts::perform_switch_payload_with_restart | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::commands::accounts::perform_switch_payload_with_restart::h152c5b791ab39a92(
        void *a1,
        __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // edx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r15
  char v19; // r12
  unsigned __int64 v20; // rdi
  int v21; // eax
  char *v22; // rdx
  _QWORD *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // r14
  char v26; // r15
  char *v27; // r12
  const void *v29; // r12
  size_t v30; // rdx
  __int64 v31; // rbx
  size_t v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // r14
  unsigned int v39; // r13d
  _DWORD *v40; // rsi
  _DWORD *v41; // rdi
  __int64 i; // rcx
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // r14
  _DWORD *v50; // rdi
  _DWORD *v51; // rsi
  __int64 j; // rcx
  __int64 v53; // rbx
  int v54; // r14d
  __int64 v55; // rbx
  __int64 v56; // r14
  __int64 v57; // r15
  __int64 v58; // rdx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // r14
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rdx
  char v65; // bl
  __int128 v66; // kr30_16
  __int64 v67; // rax
  unsigned int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rbx
  _QWORD *v71; // r14
  __int64 v72; // rsi
  char v73; // bl
  int v74; // eax
  _BYTE *v75; // rsi
  _BYTE *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rax
  void *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rbx
  __int64 v88; // r14
  __int64 v89; // r15
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // r14
  __int64 v93; // r15
  __int64 v94; // rax
  __int64 v95; // r14
  unsigned __int8 v96; // bl
  __int64 v97; // r12
  __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rax
  __int128 v102; // kr40_16
  __int64 v103; // r15
  __int64 (__fastcall *v104)(_QWORD, _QWORD); // rax
  __int64 v105; // rax
  __int64 v106; // rsi
  void *v107; // rax
  void *v108; // rbx
  __int64 v109; // rax
  __int64 v110; // rbx
  __int64 v111; // r14
  __int64 v112; // r15
  _QWORD *v113; // rdx
  __int64 v114; // rax
  int v115; // eax
  _QWORD *v116; // rdx
  __int64 v117; // rax
  _BYTE v118[24]; // [rsp+0h] [rbp-AF0h] BYREF
  _BYTE v119[24]; // [rsp+18h] [rbp-AD8h] BYREF
  _QWORD __dst[30]; // [rsp+30h] [rbp-AC0h] BYREF
  _QWORD v121[3]; // [rsp+120h] [rbp-9D0h] BYREF
  _QWORD v122[61]; // [rsp+138h] [rbp-9B8h] BYREF
  _BYTE v123[456]; // [rsp+320h] [rbp-7D0h] BYREF
  _QWORD v124[3]; // [rsp+4E8h] [rbp-608h] BYREF
  __int64 v125; // [rsp+500h] [rbp-5F0h]
  _QWORD v126[61]; // [rsp+508h] [rbp-5E8h] BYREF
  _BYTE __src[488]; // [rsp+6F0h] [rbp-400h] BYREF
  int v128; // [rsp+8D8h] [rbp-218h] BYREF
  char v129; // [rsp+8DCh] [rbp-214h] BYREF
  __int64 v130; // [rsp+8E0h] [rbp-210h]
  __int64 v131; // [rsp+8E8h] [rbp-208h]
  __int64 v132; // [rsp+8F0h] [rbp-200h]
  __int64 v133; // [rsp+8F8h] [rbp-1F8h]
  __int64 v134; // [rsp+900h] [rbp-1F0h]
  __int64 v135; // [rsp+908h] [rbp-1E8h]
  __int64 v136; // [rsp+910h] [rbp-1E0h]
  __int64 v137; // [rsp+918h] [rbp-1D8h]
  __int64 v138; // [rsp+920h] [rbp-1D0h]
  __int64 v139; // [rsp+928h] [rbp-1C8h]
  _OWORD v140[6]; // [rsp+930h] [rbp-1C0h] BYREF
  _BYTE *v141; // [rsp+990h] [rbp-160h]
  _OWORD v142[6]; // [rsp+998h] [rbp-158h] BYREF
  size_t v143; // [rsp+9F8h] [rbp-F8h]
  unsigned __int128 v144; // [rsp+A00h] [rbp-F0h] BYREF
  __int64 v145; // [rsp+A10h] [rbp-E0h]
  unsigned __int128 v146; // [rsp+A20h] [rbp-D0h] BYREF
  __int64 v147; // [rsp+A30h] [rbp-C0h]
  __int128 v148; // [rsp+A38h] [rbp-B8h]
  __int128 v149; // [rsp+A48h] [rbp-A8h]
  unsigned __int64 v150; // [rsp+A58h] [rbp-98h]
  __int64 v151; // [rsp+A60h] [rbp-90h]
  _BYTE v152[16]; // [rsp+A68h] [rbp-88h] BYREF
  __int64 v153; // [rsp+A78h] [rbp-78h] BYREF
  int v154; // [rsp+A80h] [rbp-70h]
  unsigned __int128 v155; // [rsp+A88h] [rbp-68h] BYREF
  __int64 v156; // [rsp+A98h] [rbp-58h]
  unsigned int v157; // [rsp+AA4h] [rbp-4Ch] BYREF
  void *v158; // [rsp+AA8h] [rbp-48h]
  __int64 v159; // [rsp+AB0h] [rbp-40h]
  _QWORD *v160; // [rsp+AB8h] [rbp-38h]
  int v161; // [rsp+AC0h] [rbp-30h]
  unsigned __int8 v162; // [rsp+AC7h] [rbp-29h]

  v158 = a1;
  v122[0] = "autohighUSERkeysNULLUser.gitAuth";
  v122[1] = 4;
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v152);
  v153 = std::time::Instant::now::hda76af2c3a449055(v152, a2, v2, v3, v4);
  v154 = v5;
  v126[0] = v122;
  v126[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C339A, v126);
  codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(v152, "started", 7, __src);
  v159 = a2;
  v6 = *(_QWORD *)(a2 + 136);
  v7 = tauri::state::StateManager::try_get::h18d7865deb554c60(*(_QWORD *)(v6 + 4872) + 16LL);
  if ( !v7 )
  {
    v126[0] = &anon_0df76e0cec988e6dc281ac0519b88803_743;
    v126[1] = 61;
    *(_QWORD *)__src = v126;
    *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v8 = v7;
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba(v126, v7, &unk_1016048D3, 57);
  if ( LODWORD(v126[0]) != 11 )
  {
    qmemcpy(__src, v126, 0x60u);
    *(_QWORD *)v123 = 0;
    *(_QWORD *)&v123[8] = 1;
    *(_QWORD *)&v123[16] = 0;
    v122[2] = 1610612768;
    v122[0] = v123;
    v122[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            __src,
                            v122) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v146,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v24 = *(_QWORD *)v123;
    v25 = *(_QWORD *)&v123[8];
    v26 = v123[16];
    v27 = (char *)v158;
    *((_DWORD *)v158 + 7) = *(_DWORD *)&v123[20];
    *(_DWORD *)(v27 + 25) = *(_DWORD *)&v123[17];
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v126);
    *((_QWORD *)v27 + 1) = v24;
    *((_QWORD *)v27 + 2) = v25;
    v27[24] = v26;
    v23 = v27;
    *(_QWORD *)v27 = 2;
    return v23;
  }
  v160 = (_QWORD *)v126[1];
  v162 = v126[2];
  v9 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(v6 + 4872) + 16LL);
  v10 = v9;
  if ( !v9 )
  {
    v126[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748;
    v126[1] = 76;
    *(_QWORD *)__src = v126;
    *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v11 = *v9;
  if ( !*v9 )
    v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v9);
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11);
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v8, v12, v13) ^ 1;
    if ( *((_BYTE *)v10 + 8) )
      goto LABEL_8;
  }
  else
  {
    v14 = 0;
    if ( *((_BYTE *)v10 + 8) )
    {
LABEL_8:
      v126[0] = 0;
      v126[1] = 1;
      v126[2] = 0;
      *(_QWORD *)&__src[16] = 1610612768;
      *(_QWORD *)__src = v126;
      *(_QWORD *)&__src[8] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
      v15 = 41;
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v146,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v17 = v126[0];
      v18 = v126[1];
      v19 = v126[2];
      LODWORD(v122[0]) = *(_DWORD *)((char *)&v126[2] + 1);
      *(_DWORD *)((char *)v122 + 3) = HIDWORD(v126[2]);
      if ( !v14
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v16,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v10 + 8) = 1;
      }
      v20 = *v10;
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10);
      v21 = v122[0];
      v22 = (char *)v158;
      *((_DWORD *)v158 + 7) = *(_DWORD *)((char *)v122 + 3);
      *(_DWORD *)(v22 + 25) = v21;
      *((_QWORD *)v22 + 1) = v17;
      *((_QWORD *)v22 + 2) = v18;
      v23 = v22;
      v22[24] = v19;
      *(_QWORD *)v22 = 2;
LABEL_12:
      if ( !v162
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v20,
                               v15,
                               v22,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v160 + 8) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v160);
      return v23;
    }
  }
  v29 = (const void *)v10[27];
  v30 = v10[28];
  if ( v30 )
  {
    v31 = v6;
    v32 = v10[28];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v8);
    v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v32, 1);
    v30 = v32;
    v6 = v31;
    if ( !v33 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v30);
  }
  else
  {
    v33 = 1;
  }
  v141 = (_BYTE *)v33;
  v34 = v33;
  v143 = v30;
  memcpy((void *)v33, v29, v30);
  if ( !v14
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v34,
                           v29,
                           v35,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v10 + 8) = 1;
  }
  v36 = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10);
  v151 = v6;
  LOBYTE(v36) = 1;
  v161 = v36;
  std::path::Path::_join::hb1a495d4f06b13b8(v122, v141, v143, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_57, 24);
  v23 = v158;
  v37 = v122[1];
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)__src,
    v122[1],
    v122[2],
    (__int64)"account transitionatomic write: missing parentaimami",
    18);
  v38 = *(_QWORD *)__src;
  v39 = *(_DWORD *)&__src[8];
  if ( *(_QWORD *)__src != 11 )
  {
    v40 = &__src[12];
    v41 = v126;
    for ( i = 21; i; --i )
      *v41++ = *v40++;
  }
  if ( v122[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v122[0], 1);
  if ( (_DWORD)v38 != 11 )
  {
    *(_QWORD *)__src = v38;
    *(_DWORD *)&__src[8] = v39;
    v50 = &__src[12];
    v51 = v126;
    for ( j = 21; j; --j )
      *v50++ = *v51++;
    *(_QWORD *)v123 = 0;
    *(_QWORD *)&v123[8] = 1;
    *(_QWORD *)&v123[16] = 0;
    v122[2] = 1610612768;
    v122[0] = v123;
    v122[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            __src,
                            v122) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v146,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v53 = *(_QWORD *)v123;
    v54 = *(_DWORD *)&v123[8];
    __dst[0] = *(_QWORD *)&v123[12];
    LODWORD(__dst[1]) = *(_DWORD *)&v123[20];
    v20 = (unsigned __int64)__src;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
    *((_DWORD *)v23 + 7) = __dst[1];
    *(_QWORD *)((char *)v23 + 20) = __dst[0];
    v23[1] = v53;
    *((_DWORD *)v23 + 4) = v54;
    *v23 = 2;
    v15 = v143;
    if ( v143 )
    {
      v20 = (unsigned __int64)v141;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v143, 1);
    }
    goto LABEL_12;
  }
  v157 = v39;
  v43 = std::time::Instant::elapsed::h457f209775ed485c(&v153);
  *(_OWORD *)v123 = 0x3E8 * (unsigned __int128)(unsigned __int64)v43 + v44 / 0xF4240uLL;
  v122[0] = &unk_10160492D;
  v122[1] = 14;
  *(_QWORD *)__src = v152;
  *(_QWORD *)&__src[8] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c;
  *(_QWORD *)&__src[16] = v123;
  *(_QWORD *)&__src[24] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
  *(_QWORD *)&__src[32] = v122;
  *(_QWORD *)&__src[40] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v126, (char *)&loc_1017C33A0 + 4, __src);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_10160470B, 14, &unk_101604918, 21, v126);
  codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v126, 5, 0, 0, 0);
  if ( LODWORD(v126[0]) != 11 )
  {
    qmemcpy(__src, v126, 0x60u);
    *(_QWORD *)v123 = 0;
    *(_QWORD *)&v123[8] = 1;
    *(_QWORD *)&v123[16] = 0;
    v122[2] = 1610612768;
    v122[0] = v123;
    v122[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            __src,
                            v122) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v146,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v55 = *(_QWORD *)v123;
    v56 = *(_QWORD *)&v123[8];
    v57 = *(_QWORD *)&v123[16];
    __dst[0] = codexmate_lib::commands::accounts::switch_error_code::h067c73bb59b91569(
                 *(_QWORD *)&v123[8],
                 *(_QWORD *)&v123[16]);
    __dst[1] = v58;
    *(_QWORD *)v123 = __dst;
    *(_QWORD *)&v123[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v122, (char *)&loc_1017C33C3 + 2, v123);
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(v152, &unk_101604B29, 20, v122);
    v59 = v158;
    *((_QWORD *)v158 + 1) = v55;
    v59[2] = v56;
    v59[3] = v57;
    v23 = v59;
    *v59 = 2;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v126);
    goto LABEL_68;
  }
  v139 = v126[7];
  v138 = v126[6];
  v137 = v126[5];
  v136 = v126[4];
  v135 = v126[3];
  v134 = v126[2];
  v133 = v126[1];
  v45 = std::time::Instant::elapsed::h457f209775ed485c(&v153);
  *(_OWORD *)v123 = 0x3E8 * (unsigned __int128)(unsigned __int64)v45 + v46 / 0xF4240uLL;
  v122[0] = &unk_101604949;
  v122[1] = 12;
  *(_QWORD *)__src = v152;
  *(_QWORD *)&__src[8] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c;
  *(_QWORD *)&__src[16] = v123;
  *(_QWORD *)&__src[24] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
  *(_QWORD *)&__src[32] = v122;
  *(_QWORD *)&__src[40] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v126, (char *)&loc_1017C33A0 + 4, __src);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_10160470B, 14, &unk_10160493B, 14, v126);
  v47 = v151;
  codexmate_lib::commands::accounts::capture_switch_rollback_state::he4656c31ac00a9e7(__src, v151);
  if ( *(_QWORD *)__src == 0x8000000000000000LL )
  {
    v147 = *(_QWORD *)&__src[24];
    v146 = *(_OWORD *)&__src[8];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v47);
    v48 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v48 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v49 = v48;
    v126[0] = &v146;
    v126[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v140, &unk_1017C37B2, v126);
    *(_QWORD *)(v49 + 16) = *(_QWORD *)&v140[1];
    *(_OWORD *)v49 = v140[0];
    *(_QWORD *)&v142[0] = 1;
    *((_QWORD *)&v142[0] + 1) = v49;
    *(_QWORD *)&v142[1] = 1;
    v126[6] = v139;
    v126[5] = v138;
    v126[4] = v137;
    v126[3] = v136;
    v126[2] = v135;
    v126[1] = v134;
    v126[0] = v133;
    codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v122, v126);
    if ( LODWORD(v122[0]) == 11 )
    {
      codexmate_lib::platform::process::CodexProcessLifecycle::launch::ha2d4ffcf3d332a03(v122, (__int64)v126);
      if ( LODWORD(v122[0]) != 11 )
      {
        qmemcpy(v126, v122, 0x60u);
        *(_QWORD *)&v155 = v126;
        *((_QWORD *)&v155 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v123, (char *)&loc_1017C33E6 + 2, &v155);
        alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(v142, v123);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v126);
      }
    }
    else
    {
      qmemcpy(v126, v122, 0x60u);
      *(_QWORD *)&v155 = v126;
      *((_QWORD *)&v155 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v123, &unk_1017C37D5, &v155);
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(v142, v123);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v126);
    }
    v67 = std::time::Instant::elapsed::h457f209775ed485c(&v153);
    v144 = 0x3E8 * (unsigned __int128)(unsigned __int64)v67 + v68 / 0xF4240uLL;
    *(_QWORD *)&v155 = &unk_101604B06;
    *((_QWORD *)&v155 + 1) = 35;
    v126[0] = v152;
    v126[1] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c;
    v126[2] = &v144;
    v126[3] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    v126[4] = &v155;
    v126[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v122, (char *)&loc_1017C33A0 + 4, v126);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_10160470B, 14, "failed | ", 6, v122);
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v126, *((_QWORD *)&v142[0] + 1), *(_QWORD *)&v142[1], " | ", 3);
    v23[3] = v126[2];
    v69 = v126[0];
    v23[2] = v126[1];
    v23[1] = v69;
    *v23 = 2;
    v70 = *(_QWORD *)&v142[1];
    if ( *(_QWORD *)&v142[1] )
    {
      v71 = (_QWORD *)(*((_QWORD *)&v142[0] + 1) + 8LL);
      do
      {
        v72 = *(v71 - 1);
        if ( v72 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v71, v72, 1);
        v71 += 3;
        --v70;
      }
      while ( v70 );
    }
    if ( *(_QWORD *)&v142[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v142[0] + 1), 24LL * *(_QWORD *)&v142[0], 8);
    if ( (_QWORD)v146 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v146 + 1), v146, 1);
LABEL_68:
    v73 = 1;
    goto LABEL_92;
  }
  v150 = 0x8000000000000000LL;
  memcpy(__dst, __src, sizeof(__dst));
  v60 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(v151 + 4872) + 16LL);
  v61 = v60;
  if ( !v60 )
  {
    *(_QWORD *)v123 = &anon_0df76e0cec988e6dc281ac0519b88803_748;
    *(_QWORD *)&v123[8] = 76;
    *(_QWORD *)__src = v123;
    *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v62 = *v60;
  if ( !*v60 )
    v62 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v60);
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v62);
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v74 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v62, __src, v63, 0x7FFFFFFFFFFFFFFFLL);
    LOBYTE(v74) = v74 ^ 1;
    v161 = v74;
    if ( *((_BYTE *)v61 + 8) )
      goto LABEL_54;
  }
  else
  {
    v161 = 0;
    if ( *((_BYTE *)v61 + 8) )
    {
LABEL_54:
      *(_QWORD *)v123 = 0;
      *(_QWORD *)&v123[8] = 1;
      *(_QWORD *)&v123[16] = 0;
      *(_QWORD *)&__src[16] = 1610612768;
      *(_QWORD *)__src = v123;
      *(_QWORD *)&__src[8] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v146,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v65 = v123[16];
      LODWORD(v155) = *(_DWORD *)&v123[17];
      *(_DWORD *)((char *)&v155 + 3) = *(_DWORD *)&v123[20];
      v66 = *(_OWORD *)v123;
      if ( !(_BYTE)v161
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v64,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v61 + 8) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v61);
      *(_DWORD *)((char *)&v144 + 3) = *(_DWORD *)((char *)&v155 + 3);
      LODWORD(v144) = v155;
LABEL_88:
      v142[0] = v66;
      LOBYTE(v142[1]) = v65;
      *(_DWORD *)((char *)&v142[1] + 1) = v144;
      DWORD1(v142[1]) = *(_DWORD *)((char *)&v144 + 3);
      *(_QWORD *)&__src[48] = v139;
      *(_QWORD *)&__src[40] = v138;
      *(_QWORD *)&__src[32] = v137;
      *(_QWORD *)&__src[24] = v136;
      *(_QWORD *)&__src[16] = v135;
      *(_QWORD *)&__src[8] = v134;
      *(_QWORD *)__src = v133;
      codexmate_lib::commands::accounts::finish_switch_failure::h6eeb88217806168c(v140, v152, __dst, __src, v142);
      if ( !v162
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v140,
                               v152,
                               v78,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v160 + 8) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v160);
      *(_QWORD *)&__src[16] = *(_QWORD *)&v140[1];
      *(_OWORD *)__src = v140[0];
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
        v123,
        v159,
        (__int64)v152,
        (__int64 *)__src);
      v23[3] = *(_QWORD *)&v123[16];
      v79 = *(_QWORD *)v123;
      v23[2] = *(_QWORD *)&v123[8];
      v23[1] = v79;
      *v23 = 2;
      goto LABEL_91;
    }
  }
  codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::h2b185c86ff3a49b4(__src, v61 + 2);
  v125 = *(_QWORD *)__src;
  if ( *(_QWORD *)__src == 2 )
  {
    qmemcpy(v123, &__src[8], 0x60u);
    *(_QWORD *)&v142[0] = 0;
    *((_QWORD *)&v142[0] + 1) = 1;
    *(_QWORD *)&v142[1] = 0;
    *(_QWORD *)&v140[1] = 1610612768;
    *(_QWORD *)&v140[0] = v142;
    *((_QWORD *)&v140[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    v75 = v140;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v123,
                            v140) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v146,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v66 = v142[0];
    v65 = v142[1];
    LODWORD(v146) = *(_DWORD *)((char *)&v142[1] + 1);
    *(_DWORD *)((char *)&v146 + 3) = DWORD1(v142[1]);
    v76 = &__src[8];
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[8]);
    LODWORD(v144) = v146;
    *(_DWORD *)((char *)&v144 + 3) = *(_DWORD *)((char *)&v146 + 3);
  }
  else
  {
    v65 = __src[24];
    LODWORD(v144) = *(_DWORD *)&__src[25];
    *(_DWORD *)((char *)&v144 + 3) = *(_DWORD *)&__src[28];
    v75 = &__src[32];
    v76 = v126;
    memcpy(v126, &__src[32], 0x1C8u);
    v66 = *(_OWORD *)&__src[8];
  }
  if ( !(_BYTE)v161
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v76,
                           v75,
                           v77,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v61 + 8) = 1;
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v61);
  if ( (_DWORD)v125 == 2 )
    goto LABEL_88;
  HIDWORD(v122[3]) = *(_DWORD *)((char *)&v144 + 3);
  *(_DWORD *)((char *)&v122[3] + 1) = v144;
  v80 = memcpy(&v122[4], v126, 0x1C8u);
  v122[0] = v125;
  *(_OWORD *)&v122[1] = v66;
  LOBYTE(v122[3]) = v65;
  LOBYTE(v80) = 1;
  v161 = (int)v80;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v122[44]);
  v126[2] = *(_QWORD *)&__src[16];
  v126[1] = *(_QWORD *)&__src[8];
  v126[0] = *(_QWORD *)__src;
  if ( __dst[27] != v150 && __dst[27] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[28], __dst[27], 1);
  __dst[29] = v126[2];
  __dst[28] = v126[1];
  __dst[27] = v126[0];
  v81 = &v122[50];
  *(_QWORD *)__src = &v122[50];
  *(_QWORD *)&__src[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
  *(_QWORD *)&__src[16] = (char *)&v122[50] + 1;
  *(_QWORD *)&__src[24] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
  LOBYTE(v81) = 1;
  v161 = (int)v81;
  v82 = alloc::fmt::format::format_inner::h3c16c74008a310d4(v119, &unk_1017C352F, __src);
  LOBYTE(v82) = 1;
  v161 = v82;
  v83 = codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(v152, &unk_101604955, 14, v119);
  LOBYTE(v83) = 1;
  v161 = v83;
  codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(v121, v151, v122[45], v122[46]);
  v84 = v150;
  if ( v121[0] != v150 )
  {
    *(_QWORD *)&__src[48] = v139;
    *(_QWORD *)&__src[40] = v138;
    *(_QWORD *)&__src[32] = v137;
    *(_QWORD *)&__src[24] = v136;
    *(_QWORD *)&__src[16] = v135;
    *(_QWORD *)&__src[8] = v134;
    *(_QWORD *)__src = v133;
    codexmate_lib::commands::accounts::finish_switch_failure::h6eeb88217806168c(v123, v152, __dst, __src, v121);
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
      v160,
      v162);
    *(_QWORD *)&__src[16] = *(_QWORD *)&v123[16];
    *(_QWORD *)&__src[8] = *(_QWORD *)&v123[8];
    *(_QWORD *)__src = *(_QWORD *)v123;
    codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
      v126,
      v159,
      (__int64)v152,
      (__int64 *)__src);
LABEL_106:
    v23[3] = v126[2];
    v86 = v126[0];
    v23[2] = v126[1];
    v23[1] = v86;
    *v23 = 2;
    goto LABEL_107;
  }
  LOBYTE(v84) = 1;
  v161 = v84;
  codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
    v152,
    &unk_101604963,
    13,
    &unk_101604970,
    9);
  *(_QWORD *)&__src[48] = v139;
  *(_QWORD *)&__src[40] = v138;
  *(_QWORD *)&__src[32] = v137;
  *(_QWORD *)&__src[24] = v136;
  *(_QWORD *)&__src[16] = v135;
  *(_QWORD *)&__src[8] = v134;
  *(_QWORD *)__src = v133;
  codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v140, __src);
  if ( LODWORD(v140[0]) == 11 )
  {
    v128 = DWORD2(v140[0]);
    v129 = BYTE12(v140[0]);
    if ( BYTE12(v140[0]) & 1 | (DWORD2(v140[0]) != 0) )
    {
      *(_QWORD *)__src = &v128;
      *(_QWORD *)&__src[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
      *(_QWORD *)&__src[16] = &v129;
      *(_QWORD *)&__src[24] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v118, &unk_1017C3553, __src);
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(v152, &unk_101604979, 14, v118);
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v140, 5, 0, 0, 0);
      if ( LODWORD(v140[0]) != 11 )
      {
        qmemcpy(v123, v140, 0x60u);
        codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(&v155, v151, v122[45], v122[46]);
        if ( (_QWORD)v155 == v150 )
        {
          *(_QWORD *)__src = v123;
          *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v142, &unk_1017C36DE, __src);
          codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v122[57], &unk_101604AD5, 23, v142);
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
            v160,
            v162);
          memcpy(__src, v122, sizeof(__src));
          codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
            v126,
            v159,
            (__int64)v152,
            __src,
            (__int64)&unk_101604AEC,
            26);
          memcpy(v23, v126, 0x1E8u);
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v123);
          goto LABEL_91;
        }
        *(_QWORD *)&v142[1] = v156;
        v142[0] = v155;
        *(_QWORD *)__src = v123;
        *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&__src[16] = v142;
        *(_QWORD *)&__src[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v126, &unk_1017C3636, __src);
        v91 = v126[0];
        v92 = v126[1];
        v93 = v126[2];
        codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
          v152,
          "failed | ",
          6,
          &unk_101604A4E,
          32);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v160,
          v162);
        *(_QWORD *)__src = v91;
        *(_QWORD *)&__src[8] = v92;
        *(_QWORD *)&__src[16] = v93;
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
          v126,
          v159,
          (__int64)v152,
          (__int64 *)__src);
        v23 = v158;
        *((_QWORD *)v158 + 3) = v126[2];
        v94 = v126[0];
        v23[2] = v126[1];
        v23[1] = v94;
        *v23 = 2;
        if ( *(_QWORD *)&v142[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v142[0] + 1), *(_QWORD *)&v142[0], 1);
        v161 = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v123);
        goto LABEL_107;
      }
      v149 = v140[3];
      v148 = v140[2];
      v147 = *((_QWORD *)&v140[1] + 1);
      v146 = *(_OWORD *)((char *)v140 + 8);
      v85 = tauri::Manager::state::he23903daf699d7bb(v159);
      std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(v140, v85);
      if ( LODWORD(v140[0]) == 1 )
      {
        v126[0] = *((_QWORD *)&v140[0] + 1);
        LOBYTE(v126[1]) = v140[1];
        *(_QWORD *)__src = v126;
        *(_QWORD *)&__src[8] = _$LT$std..sync..poison..PoisonError$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h12b693ddd6822b12;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v123, &unk_1017C36BC, __src);
        v130 = *(_QWORD *)v123;
        v131 = *(_QWORD *)&v123[8];
        v132 = *(_QWORD *)&v123[16];
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v126[0],
          LODWORD(v126[1]));
LABEL_122:
        v124[2] = v132;
        v124[1] = v131;
        v124[0] = v130;
LABEL_123:
        *(_OWORD *)&__src[40] = v149;
        *(_OWORD *)&__src[24] = v148;
        *(_QWORD *)&__src[16] = v147;
        *(_OWORD *)__src = v146;
        codexmate_lib::commands::accounts::finish_switch_failure::h6eeb88217806168c(v140, v152, __dst, __src, v124);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v160,
          v162);
        *(_QWORD *)&__src[16] = *(_QWORD *)&v140[1];
        *(_OWORD *)__src = v140[0];
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
          v126,
          v159,
          (__int64)v152,
          (__int64 *)__src);
        goto LABEL_106;
      }
      v95 = *((_QWORD *)&v140[0] + 1);
      v96 = v140[1];
      codexmate_lib::core::repository::Repository::switch_account::h8da8a6a163d67813(
        __src,
        *((_QWORD *)&v140[0] + 1) + 16LL,
        v122[45],
        v122[46]);
      v97 = *(_QWORD *)__src;
      if ( *(_QWORD *)__src == 2 )
      {
        qmemcpy(v126, &__src[8], 0x60u);
        codexmate_lib::commands::accounts::perform_switch_payload_with_restart_inner::_$u7b$$u7b$closure$u7d$$u7d$::he80cf9d569dc4245(
          v123,
          v126);
        v130 = *(_QWORD *)v123;
        v131 = *(_QWORD *)&v123[8];
        v132 = *(_QWORD *)&v123[16];
      }
      else
      {
        v132 = *(_QWORD *)&__src[24];
        v131 = *(_QWORD *)&__src[16];
        v130 = *(_QWORD *)&__src[8];
        memcpy(v123, &__src[32], sizeof(v123));
      }
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v95,
        v96);
      if ( (_DWORD)v97 == 2 )
        goto LABEL_122;
      *(_QWORD *)&__src[24] = v132;
      *(_QWORD *)&__src[16] = v131;
      *(_QWORD *)&__src[8] = v130;
      memcpy(&__src[32], v123, 0x1C8u);
      *(_QWORD *)__src = v97;
      codexmate_lib::commands::accounts::perform_switch_payload_with_restart_inner::_$u7b$$u7b$closure$u7d$$u7d$::h299f2df2dee7db2c(
        v124,
        v151,
        v122[45],
        v122[46],
        __src);
      if ( v124[0] != v150 )
        goto LABEL_123;
      *(_OWORD *)&__src[40] = v149;
      *(_OWORD *)&__src[24] = v148;
      *(_QWORD *)&__src[16] = v147;
      *(_OWORD *)__src = v146;
      v98 = codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v142, __src);
      if ( LODWORD(v142[0]) != 11 )
      {
        qmemcpy(v140, v142, sizeof(v140));
        LOBYTE(v98) = 1;
        v161 = v98;
        codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(&v144, v151, v122[45], v122[46]);
        if ( (_QWORD)v144 == v150 )
        {
          *(_QWORD *)__src = v140;
          v104 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          LOBYTE(v104) = 1;
          v161 = (int)v104;
          v105 = alloc::fmt::format::format_inner::h3c16c74008a310d4(&v155, &unk_1017C365B, __src);
          LOBYTE(v105) = 1;
          v161 = v105;
          codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v122[57], &unk_101604AD5, 23, &v155);
          v161 = 0;
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
            v160,
            v162);
          memcpy(__src, v122, sizeof(__src));
          v161 = 0;
          codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
            v126,
            v159,
            (__int64)v152,
            __src,
            (__int64)&unk_101604AEC,
            26);
          memcpy(v158, v126, 0x1E8u);
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v140);
          v23 = v158;
          goto LABEL_91;
        }
        v156 = v145;
        v155 = v144;
        *(_QWORD *)__src = v140;
        *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&__src[16] = &v155;
        *(_QWORD *)&__src[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v109 = alloc::fmt::format::format_inner::h3c16c74008a310d4(v126, &unk_1017C3636, __src);
        v110 = v126[0];
        v111 = v126[1];
        v112 = v126[2];
        LOBYTE(v109) = 1;
        v161 = v109;
        codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
          v152,
          "failed | ",
          6,
          &unk_101604A4E,
          32);
        v161 = 0;
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v160,
          v162);
        *(_QWORD *)__src = v110;
        *(_QWORD *)&__src[8] = v111;
        *(_QWORD *)&__src[16] = v112;
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
          v126,
          v159,
          (__int64)v152,
          (__int64 *)__src);
        v113 = v158;
        *((_QWORD *)v158 + 3) = v126[2];
        v114 = v126[0];
        v113[2] = v126[1];
        v113[1] = v114;
        *v113 = 2;
        if ( (_QWORD)v155 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v155 + 1), v155, 1);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v140);
        v23 = v158;
        goto LABEL_107;
      }
      if ( DWORD2(v142[0]) || BYTE12(v142[0]) )
      {
        v106 = v151;
        codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(v142, v151, v122[45], v122[46]);
        if ( *(_QWORD *)&v142[0] == v150 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v142, v106);
          v107 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(103, 1);
          if ( !v107 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 103);
          v108 = v107;
          memcpy(v107, &unk_101604A6E, 0x67u);
          *(_QWORD *)__src = 103;
          *(_QWORD *)&__src[8] = v108;
          *(_QWORD *)&__src[16] = 103;
          codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v122[57], &unk_101604AD5, 23, __src);
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
            v160,
            v162);
          memcpy(__src, v122, sizeof(__src));
          codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
            v126,
            v159,
            (__int64)v152,
            __src,
            (__int64)&unk_101604AEC,
            26);
          v23 = v158;
          memcpy(v158, v126, 0x1E8u);
          goto LABEL_91;
        }
        *(_QWORD *)&v140[1] = *(_QWORD *)&v142[1];
        v115 = v142[0];
        v140[0] = v142[0];
        LOBYTE(v115) = 1;
        v161 = v115;
        codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
          v152,
          "failed | ",
          6,
          &unk_101604A4E,
          32);
        v161 = 0;
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v160,
          v162);
        v126[0] = v140;
        v126[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v161 = 0;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C3616, v126);
        v161 = 0;
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
          v126,
          v159,
          (__int64)v152,
          (__int64 *)__src);
        v116 = v158;
        *((_QWORD *)v158 + 3) = v126[2];
        v117 = v126[0];
        v116[2] = v126[1];
        v116[1] = v117;
        *v116 = 2;
        if ( *(_QWORD *)&v140[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v140[0] + 1), *(_QWORD *)&v140[0], 1);
        v23 = v158;
        goto LABEL_107;
      }
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
        v152,
        &unk_101604987,
        15,
        &unk_101604970,
        9);
      v23 = v158;
    }
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
      v152,
      &unk_101604996,
      14,
      &unk_10160492D,
      14);
    codexmate_lib::platform::process::CodexProcessLifecycle::launch::ha2d4ffcf3d332a03(v142, (__int64)&unk_101604996);
    if ( LODWORD(v142[0]) != 11 )
    {
      qmemcpy(v140, v142, sizeof(v140));
      *(_QWORD *)__src = v140;
      *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v155, &unk_1017C3572, __src);
      codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v122[57], &unk_1016049A4, 21, &v155);
      _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he3b02506b1ba193d(__src, v140);
      v99 = *(_QWORD *)&__src[8];
      *(_QWORD *)&v144 = codexmate_lib::commands::accounts::switch_error_code::h067c73bb59b91569(
                           *(_QWORD *)&__src[8],
                           *(_QWORD *)&__src[16]);
      *((_QWORD *)&v144 + 1) = v100;
      v126[0] = &v144;
      v126[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v146, (char *)&loc_1017C33C3 + 2, v126);
      if ( *(_QWORD *)__src )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, *(_QWORD *)__src, 1);
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(v152, &unk_1016049B9, 13, &v146);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v160,
        v162);
      memcpy(__src, v122, sizeof(__src));
      codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
        v126,
        v159,
        (__int64)v152,
        __src,
        (__int64)&unk_1016049C6,
        23);
      memcpy(v23, v126, 0x1E8u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v140);
      goto LABEL_91;
    }
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
      v152,
      &unk_1016049DD,
      12,
      &unk_101604970,
      9);
    codexmate_lib::commands::accounts::verify_account_switch_after_launch::h1d7256492405a8a6(
      &v155,
      v151,
      v122[45],
      v122[46]);
    if ( (_QWORD)v155 == v150 )
    {
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
        v152,
        &unk_101604A3A,
        13,
        &unk_101604970,
        9);
      alloc::vec::Vec$LT$T$C$A$GT$::retain::hbdcef5aa563be83b(&v122[57]);
      v161 = 0;
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v160,
        v162);
      memcpy(__src, v122, sizeof(__src));
      codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
        v126,
        v159,
        (__int64)v152,
        __src,
        (__int64)&unk_101604A47,
        7);
      memcpy(v23, v126, 0x1E8u);
      core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::h50cd59272e9b3399(__dst);
      v161 = 0;
      core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v157);
      if ( v143 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v143, 1);
      return v23;
    }
    v147 = v156;
    v146 = v155;
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
      v152,
      &unk_1016049E9,
      18,
      &unk_1016049FB,
      30);
    codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v126, 5, 0, 0, 0);
    if ( LODWORD(v126[0]) == 11 )
    {
      *(_QWORD *)&__src[48] = v126[7];
      *(_QWORD *)&__src[40] = v126[6];
      *(_QWORD *)&__src[32] = v126[5];
      *(_QWORD *)&__src[24] = v126[4];
      *(_QWORD *)&__src[16] = v126[3];
      *(_QWORD *)&__src[8] = v126[2];
      *(_QWORD *)__src = v126[1];
      v126[0] = &v146;
      v126[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v140, &unk_1017C35B7, v126);
      codexmate_lib::commands::accounts::finish_switch_failure::h6eeb88217806168c(v142, v152, __dst, __src, v140);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v160,
        v162);
      *(_QWORD *)&__src[16] = *(_QWORD *)&v142[1];
      *(_OWORD *)__src = v142[0];
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
        v126,
        v159,
        (__int64)v152,
        (__int64 *)__src);
      v23 = v158;
      *((_QWORD *)v158 + 3) = v126[2];
      v101 = v126[0];
      v23[2] = v126[1];
      v23[1] = v101;
      *v23 = 2;
    }
    else
    {
      qmemcpy(__src, v126, 0x60u);
      *(_QWORD *)&v140[0] = &v146;
      *((_QWORD *)&v140[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      *(_QWORD *)&v140[1] = __src;
      *((_QWORD *)&v140[1] + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v142, &unk_1017C35D5, v140);
      v102 = v142[0];
      v103 = *(_QWORD *)&v142[1];
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
        v152,
        "failed | ",
        6,
        &unk_101604A19,
        33);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v160,
        v162);
      v140[0] = v102;
      *(_QWORD *)&v140[1] = v103;
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
        v142,
        v159,
        (__int64)v152,
        (__int64 *)v140);
      v23 = v158;
      *((_QWORD *)v158 + 3) = *(_QWORD *)&v142[1];
      *(_OWORD *)(v23 + 1) = v142[0];
      *v23 = 2;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
    }
    if ( (_QWORD)v146 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v146 + 1), v146, 1);
    goto LABEL_107;
  }
  qmemcpy(v123, v140, 0x60u);
  codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(&v146, v151, v122[45], v122[46]);
  if ( (_QWORD)v146 == v150 )
  {
    *(_QWORD *)__src = v123;
    *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v142, &unk_1017C3742, __src);
    codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v122[57], &unk_101604AD5, 23, v142);
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
      v160,
      v162);
    memcpy(__src, v122, sizeof(__src));
    codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
      v126,
      v159,
      (__int64)v152,
      __src,
      (__int64)&unk_101604AEC,
      26);
    memcpy(v23, v126, 0x1E8u);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v123);
    goto LABEL_91;
  }
  *(_QWORD *)&v142[1] = v147;
  v142[0] = v146;
  *(_QWORD *)__src = v123;
  *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
  *(_QWORD *)&__src[16] = v142;
  *(_QWORD *)&__src[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v126, &unk_1017C3636, __src);
  v87 = v126[0];
  v88 = v126[1];
  v89 = v126[2];
  codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
    v152,
    "failed | ",
    6,
    &unk_101604A4E,
    32);
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
    v160,
    v162);
  *(_QWORD *)__src = v87;
  *(_QWORD *)&__src[8] = v88;
  *(_QWORD *)&__src[16] = v89;
  codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
    v126,
    v159,
    (__int64)v152,
    (__int64 *)__src);
  v23 = v158;
  *((_QWORD *)v158 + 3) = v126[2];
  v90 = v126[0];
  v23[2] = v126[1];
  v23[1] = v90;
  *v23 = 2;
  if ( *(_QWORD *)&v142[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v142[0] + 1), *(_QWORD *)&v142[0], 1);
  v161 = 0;
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v123);
LABEL_107:
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$GT$::h979f018b3821b1f3(v122);
LABEL_91:
  core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::h50cd59272e9b3399(__dst);
  v73 = 0;
LABEL_92:
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v157);
  v20 = v157;
  close_NOCANCEL(v157);
  v15 = v143;
  if ( v143 )
  {
    v20 = (unsigned __int64)v141;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v143, 1);
  }
  if ( v73 )
    goto LABEL_12;
  return v23;
}
