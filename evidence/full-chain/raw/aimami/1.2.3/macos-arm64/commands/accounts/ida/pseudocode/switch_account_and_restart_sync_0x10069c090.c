// __ZN13codexmate_lib8commands8accounts31switch_account_and_restart_sync @ 0x10069c090 | 基线 same-set
// [FULL IDA decompiler]

void *__fastcall codexmate_lib::commands::accounts::switch_account_and_restart_sync::h4c1d2cf916d0074a(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  double v9; // xmm0_8
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // r12
  char v23; // r13
  unsigned __int64 v24; // rdi
  int v25; // eax
  char *v26; // rdx
  __int128 v27; // kr00_16
  char v28; // r15
  char *v29; // r12
  const void *v31; // r12
  size_t v32; // rdx
  __int64 v33; // r13
  size_t v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r12
  unsigned int v41; // r14d
  _DWORD *v42; // rsi
  __int64 *v43; // rdi
  __int64 i; // rcx
  __int64 v45; // rsi
  __int64 v46; // r15
  _QWORD *v47; // rax
  _QWORD *v48; // r13
  __int64 v49; // rdi
  __int64 v50; // rdx
  char v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // r14
  char v55; // r15
  int v56; // eax
  char *v57; // rdx
  _DWORD *v58; // rdi
  __int64 *v59; // rsi
  __int64 j; // rcx
  __int64 v61; // rbx
  int v62; // r14d
  _QWORD *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned int v66; // edx
  double v67; // xmm0_8
  __int64 v68; // r12
  __int64 v69; // rax
  _QWORD *v70; // rbx
  __int64 v71; // rax
  __int128 v72; // kr20_16
  __int64 v73; // r15
  __int64 v74; // rdx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rdx
  char *v78; // rdx
  char *v79; // rdx
  void *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rdx
  __int64 v87; // rax
  char v88; // r15
  _QWORD *v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // r14
  __int64 v93; // r15
  _QWORD *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rbx
  __int64 v97; // r14
  __int64 v98; // r15
  _QWORD *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // r13
  unsigned __int8 v102; // r14
  __int64 v103; // rbx
  _QWORD *v104; // rax
  __int64 v105; // rbx
  __int64 (__fastcall *v106)(_QWORD, _QWORD); // rdx
  int v107; // eax
  _QWORD *v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rbx
  __int64 v112; // r14
  __int64 v113; // r12
  _QWORD *v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 (__fastcall *v118)(_QWORD, _QWORD); // rax
  __int64 v119; // rax
  __int64 v120; // rsi
  void *v121; // rax
  void *v122; // rbx
  __int64 v123; // r15
  __int64 v124; // rax
  __int64 v125; // rbx
  __int64 v126; // r14
  __int64 v127; // r12
  _QWORD *v128; // rdx
  __int64 v129; // rax
  int v130; // eax
  _QWORD *v131; // rdx
  __int64 v132; // rax
  _QWORD v133[3]; // [rsp+8h] [rbp-B08h] BYREF
  _QWORD v134[3]; // [rsp+20h] [rbp-AF0h] BYREF
  _QWORD v135[3]; // [rsp+38h] [rbp-AD8h] BYREF
  _QWORD __dst[30]; // [rsp+50h] [rbp-AC0h] BYREF
  __int64 v137[3]; // [rsp+140h] [rbp-9D0h] BYREF
  _QWORD v138[61]; // [rsp+158h] [rbp-9B8h] BYREF
  _OWORD v139[29]; // [rsp+340h] [rbp-7D0h] BYREF
  __int128 v140; // [rsp+510h] [rbp-600h] BYREF
  __int64 v141; // [rsp+520h] [rbp-5F0h]
  unsigned __int8 *v142; // [rsp+528h] [rbp-5E8h] BYREF
  __int64 (__fastcall *v143)(_QWORD, _QWORD); // [rsp+530h] [rbp-5E0h]
  __int64 v144; // [rsp+538h] [rbp-5D8h]
  __int64 v145[61]; // [rsp+540h] [rbp-5D0h] BYREF
  __int64 v146; // [rsp+728h] [rbp-3E8h]
  __int64 v147; // [rsp+730h] [rbp-3E0h]
  _BYTE __src[488]; // [rsp+738h] [rbp-3D8h] BYREF
  int v149; // [rsp+920h] [rbp-1F0h] BYREF
  char v150; // [rsp+924h] [rbp-1ECh] BYREF
  _QWORD v151[12]; // [rsp+928h] [rbp-1E8h] BYREF
  __int128 v152; // [rsp+988h] [rbp-188h]
  __int64 v153; // [rsp+998h] [rbp-178h]
  __int64 v154; // [rsp+9A0h] [rbp-170h]
  __int64 v155; // [rsp+9A8h] [rbp-168h]
  __int64 v156; // [rsp+9B0h] [rbp-160h]
  __int64 v157; // [rsp+9B8h] [rbp-158h]
  __int64 v158; // [rsp+9C0h] [rbp-150h]
  __int64 v159; // [rsp+9C8h] [rbp-148h]
  __int64 v160; // [rsp+9D0h] [rbp-140h]
  __int64 v161[12]; // [rsp+9D8h] [rbp-138h] BYREF
  _BYTE *v162; // [rsp+A38h] [rbp-D8h]
  __int64 v163; // [rsp+A40h] [rbp-D0h] BYREF
  __int64 v164; // [rsp+A48h] [rbp-C8h]
  __int64 v165; // [rsp+A50h] [rbp-C0h]
  __int64 v166; // [rsp+A58h] [rbp-B8h]
  __int64 v167; // [rsp+A60h] [rbp-B0h]
  __int64 v168; // [rsp+A68h] [rbp-A8h]
  __int64 v169; // [rsp+A70h] [rbp-A0h]
  size_t v170; // [rsp+A78h] [rbp-98h]
  __int64 v171; // [rsp+A80h] [rbp-90h]
  __int64 *v172; // [rsp+A88h] [rbp-88h] BYREF
  __int64 (__fastcall *v173)(_QWORD, _QWORD); // [rsp+A90h] [rbp-80h]
  __int64 v174; // [rsp+A98h] [rbp-78h]
  _BYTE v175[16]; // [rsp+AA0h] [rbp-70h] BYREF
  __int64 v176; // [rsp+AB0h] [rbp-60h] BYREF
  int v177; // [rsp+AB8h] [rbp-58h]
  __int64 v178; // [rsp+AC0h] [rbp-50h]
  unsigned int v179; // [rsp+ACCh] [rbp-44h] BYREF
  __int64 v180; // [rsp+AD0h] [rbp-40h]
  void *v181; // [rsp+AD8h] [rbp-38h]
  int v182; // [rsp+AE0h] [rbp-30h]
  unsigned __int8 v183; // [rsp+AE7h] [rbp-29h]

  v146 = a4;
  v147 = a3;
  v181 = a1;
  v138[0] = "manual";
  v138[1] = 6;
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v175);
  v176 = std::time::Instant::now::hda76af2c3a449055(v175, a2, v5, v6, v7);
  v177 = v8;
  v145[0] = (__int64)v138;
  v145[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C339A, v145);
  v9 = codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
         (__int64)v175,
         (__int64)"started",
         7,
         __src);
  v10 = *(_QWORD *)(a2 + 136);
  v11 = tauri::state::StateManager::try_get::h18d7865deb554c60(*(_QWORD *)(v10 + 4872) + 16LL);
  if ( !v11 )
  {
    v145[0] = (__int64)&anon_0df76e0cec988e6dc281ac0519b88803_743;
    v145[1] = 61;
    *(_QWORD *)__src = v145;
    *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v12 = v11;
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba(v145, v11, &unk_1016048D3, 57);
  if ( LODWORD(v145[0]) != 11 )
  {
    qmemcpy(__src, v145, 0x60u);
    *(_QWORD *)&v139[0] = 0;
    *((_QWORD *)&v139[0] + 1) = 1;
    *(_QWORD *)&v139[1] = 0;
    v138[2] = 1610612768;
    v138[0] = v139;
    v138[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            __src,
                            v138) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        __dst,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v27 = v139[0];
    v28 = v139[1];
    v29 = (char *)v181;
    *((_DWORD *)v181 + 7) = DWORD1(v139[1]);
    *(_DWORD *)(v29 + 25) = *(_DWORD *)((char *)&v139[1] + 1);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v145);
    *(_OWORD *)(v29 + 8) = v27;
    v29[24] = v28;
    *(_QWORD *)v29 = 2;
    return v181;
  }
  v180 = v145[1];
  v183 = v145[2];
  v13 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(v10 + 4872) + 16LL);
  v14 = v13;
  if ( !v13 )
  {
    v145[0] = (__int64)&anon_0df76e0cec988e6dc281ac0519b88803_748;
    v145[1] = 76;
    *(_QWORD *)__src = v145;
    *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v15 = *v13;
  if ( !*v13 )
    v15 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v13);
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v15);
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v18 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v12, v16, v17) ^ 1;
    if ( *((_BYTE *)v14 + 8) )
      goto LABEL_8;
  }
  else
  {
    v18 = 0;
    if ( *((_BYTE *)v14 + 8) )
    {
LABEL_8:
      v145[0] = 0;
      v145[1] = 1;
      v145[2] = 0;
      *(_QWORD *)&__src[16] = 1610612768;
      *(_QWORD *)__src = v145;
      *(_QWORD *)&__src[8] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
      v19 = 41;
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          __dst,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v21 = v145[0];
      v22 = v145[1];
      v23 = v145[2];
      LODWORD(v138[0]) = *(_DWORD *)((char *)&v145[2] + 1);
      *(_DWORD *)((char *)v138 + 3) = HIDWORD(v145[2]);
      if ( !v18
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v20,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v14 + 8) = 1;
      }
      v24 = *v14;
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v14);
      v25 = v138[0];
      v26 = (char *)v181;
      *((_DWORD *)v181 + 7) = *(_DWORD *)((char *)v138 + 3);
      *(_DWORD *)(v26 + 25) = v25;
      *((_QWORD *)v26 + 1) = v21;
      *((_QWORD *)v26 + 2) = v22;
      v26[24] = v23;
      *(_QWORD *)v26 = 2;
LABEL_12:
      if ( !v183
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v24,
                               v19,
                               v26,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v180 + 8) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v180);
      return v181;
    }
  }
  v178 = a2;
  v31 = (const void *)v14[27];
  v32 = v14[28];
  if ( v32 )
  {
    v33 = v10;
    v34 = v14[28];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v12);
    v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v34, 1);
    v32 = v34;
    v10 = v33;
    if ( !v35 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v32);
  }
  else
  {
    v35 = 1;
  }
  v162 = (_BYTE *)v35;
  v36 = v35;
  v170 = v32;
  memcpy((void *)v35, v31, v32);
  if ( !v18
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v36,
                           v31,
                           v37,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v14 + 8) = 1;
  }
  v38 = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v14);
  v171 = v10;
  LOBYTE(v38) = 1;
  v182 = v38;
  std::path::Path::_join::hb1a495d4f06b13b8(v138, v162, v170, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_57, 24);
  v39 = v138[1];
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)__src,
    v138[1],
    v138[2],
    (__int64)"account transitionatomic write: missing parentaimami",
    18);
  v40 = *(_QWORD *)__src;
  v41 = *(_DWORD *)&__src[8];
  if ( *(_QWORD *)__src != 11 )
  {
    v42 = &__src[12];
    v43 = v145;
    for ( i = 21; i; --i )
    {
      *(_DWORD *)v43 = *v42++;
      v43 = (__int64 *)((char *)v43 + 4);
    }
  }
  v45 = v138[0];
  if ( v138[0] )
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v138[0], 1);
  if ( (_DWORD)v40 != 11 )
  {
    *(_QWORD *)__src = v40;
    *(_DWORD *)&__src[8] = v41;
    v58 = &__src[12];
    v59 = v145;
    for ( j = 21; j; --j )
    {
      *v58 = *(_DWORD *)v59;
      v59 = (__int64 *)((char *)v59 + 4);
      ++v58;
    }
    *(_QWORD *)&v139[0] = 0;
    *((_QWORD *)&v139[0] + 1) = 1;
    *(_QWORD *)&v139[1] = 0;
    v138[2] = 1610612768;
    v138[0] = v139;
    v138[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            __src,
                            v138) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        __dst,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v61 = *(_QWORD *)&v139[0];
    v62 = DWORD2(v139[0]);
    __dst[0] = *(_QWORD *)((char *)v139 + 12);
    LODWORD(__dst[1]) = DWORD1(v139[1]);
    v24 = (unsigned __int64)__src;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
    v63 = v181;
    *((_DWORD *)v181 + 7) = __dst[1];
    *(_QWORD *)((char *)v63 + 20) = __dst[0];
    v63[1] = v61;
    *((_DWORD *)v63 + 4) = v62;
    *v63 = 2;
    v19 = v170;
    if ( v170 )
    {
      v24 = (unsigned __int64)v162;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v170, 1);
    }
    goto LABEL_12;
  }
  v179 = v41;
  v46 = v171;
  v47 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(v171 + 4872) + 16LL);
  v48 = v47;
  if ( !v47 )
  {
    v145[0] = (__int64)&anon_0df76e0cec988e6dc281ac0519b88803_748;
    v145[1] = 76;
    *(_QWORD *)__src = v145;
    *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    core::panicking::panic_fmt::h3a793735daf6e4ec(
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v49 = *v47;
  if ( !*v47 )
    v49 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v47);
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v49);
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v51 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v49, v45, v50, 0x7FFFFFFFFFFFFFFFLL) ^ 1;
    if ( *((_BYTE *)v48 + 8) )
      goto LABEL_40;
  }
  else
  {
    v51 = 0;
    if ( *((_BYTE *)v48 + 8) )
    {
LABEL_40:
      v145[0] = 0;
      v145[1] = 1;
      v145[2] = 0;
      *(_QWORD *)&__src[16] = 1610612768;
      *(_QWORD *)__src = v145;
      *(_QWORD *)&__src[8] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          __dst,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v53 = v145[0];
      v54 = v145[1];
      v55 = v145[2];
      LODWORD(v138[0]) = *(_DWORD *)((char *)&v145[2] + 1);
      *(_DWORD *)((char *)v138 + 3) = HIDWORD(v145[2]);
      if ( !v51
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v52,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v48 + 8) = 1;
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v48);
      v56 = v138[0];
      v57 = (char *)v181;
      *((_DWORD *)v181 + 7) = *(_DWORD *)((char *)v138 + 3);
      *(_DWORD *)(v57 + 25) = v56;
      *((_QWORD *)v57 + 1) = v53;
      *((_QWORD *)v57 + 2) = v54;
      v57[24] = v55;
      *(_QWORD *)v57 = 2;
      goto LABEL_88;
    }
  }
  codexmate_lib::core::repository::Repository::preflight_account_switch::hfae264efc19f9c01(
    v145,
    v48 + 2,
    v147,
    v146,
    v9);
  if ( LODWORD(v145[0]) != 11 )
  {
    qmemcpy(__src, v145, 0x60u);
    *(_QWORD *)&v139[0] = 0;
    *((_QWORD *)&v139[0] + 1) = 1;
    *(_QWORD *)&v139[1] = 0;
    v138[2] = 1610612768;
    v138[0] = v139;
    v138[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            __src,
                            v138) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        __dst,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v72 = v139[0];
    v73 = *(_QWORD *)&v139[1];
    __dst[0] = codexmate_lib::commands::accounts::switch_error_code::h067c73bb59b91569(
                 *((unsigned __int8 **)&v139[0] + 1),
                 *(unsigned __int8 **)&v139[1]);
    __dst[1] = v74;
    *(_QWORD *)&v139[0] = __dst;
    *((_QWORD *)&v139[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v138, (char *)&loc_1017C33C3 + 2, v139);
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
      (__int64)v175,
      (__int64)&unk_101602180,
      16,
      v138);
    v75 = v181;
    *(_OWORD *)((char *)v181 + 8) = v72;
    v75[3] = v73;
    *v75 = 2;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v145);
    if ( !v51
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v145,
                             &unk_101602180,
                             v76,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v48 + 8) = 1;
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v48);
    goto LABEL_88;
  }
  LOBYTE(v161[0]) = v145[1];
  if ( !v51
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v145,
                           v48 + 2,
                           v64,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v48 + 8) = 1;
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v48);
  *(_QWORD *)__src = v161;
  *(_QWORD *)&__src[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v135, &unk_1017C351D, __src);
  codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
    (__int64)v175,
    (__int64)&unk_10160490C,
    12,
    v135);
  v65 = std::time::Instant::elapsed::h457f209775ed485c(&v176);
  v139[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v65 + v66 / 0xF4240uLL;
  v138[0] = &unk_10160492D;
  v138[1] = 14;
  *(_QWORD *)__src = v175;
  *(_QWORD *)&__src[8] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c;
  *(_QWORD *)&__src[16] = v139;
  *(_QWORD *)&__src[24] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
  *(_QWORD *)&__src[32] = v138;
  *(_QWORD *)&__src[40] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v145, (char *)&loc_1017C33A0 + 4, __src);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_10160470B, 14, &unk_101604918, 21, v145);
  codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v145, 5, 0, 0, 0);
  if ( LODWORD(v145[0]) != 11 )
  {
    qmemcpy(__src, v145, 0x60u);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he3b02506b1ba193d(v139, __src);
    v161[0] = (__int64)codexmate_lib::commands::accounts::switch_error_code::h067c73bb59b91569(
                         *((unsigned __int8 **)&v139[0] + 1),
                         *(unsigned __int8 **)&v139[1]);
    v161[1] = v77;
    __dst[0] = v161;
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v138, (char *)&loc_1017C33C3 + 2, __dst);
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
      (__int64)v175,
      (__int64)&unk_101604B29,
      20,
      v138);
    v78 = (char *)v181;
    *((_QWORD *)v181 + 3) = *(_QWORD *)&v139[1];
    *(_OWORD *)(v78 + 8) = v139[0];
    *(_QWORD *)v78 = 2;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v145);
LABEL_88:
    v88 = 1;
    goto LABEL_89;
  }
  v160 = v145[7];
  v159 = v145[6];
  v158 = v145[5];
  v157 = v145[4];
  v156 = v145[3];
  v155 = v145[2];
  v154 = v145[1];
  codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
    (__int64)v175,
    (__int64)&unk_10160493B,
    14,
    (__int64)&unk_101604949,
    12);
  v67 = codexmate_lib::commands::accounts::capture_switch_rollback_state::he4656c31ac00a9e7((__int64)__src, v46);
  v68 = v178;
  if ( *(_QWORD *)__src == 0x8000000000000000LL )
  {
    v165 = *(_QWORD *)&__src[24];
    v164 = *(_QWORD *)&__src[16];
    v163 = *(_QWORD *)&__src[8];
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v46);
    v69 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
    if ( !v69 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
    v70 = (_QWORD *)v69;
    v145[0] = (__int64)&v163;
    v145[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v161, &unk_1017C37B2, v145);
    v70[2] = v161[2];
    v71 = v161[0];
    v70[1] = v161[1];
    *v70 = v71;
    v151[0] = 1;
    v151[1] = v70;
    v151[2] = 1;
    v145[6] = v160;
    v145[5] = v159;
    v145[4] = v158;
    v145[3] = v157;
    v145[2] = v156;
    v145[1] = v155;
    v145[0] = v154;
    codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v138, (__int64)v145);
    if ( LODWORD(v138[0]) == 11 )
    {
      codexmate_lib::platform::process::CodexProcessLifecycle::launch::ha2d4ffcf3d332a03(v138, (__int64)v145);
      if ( LODWORD(v138[0]) != 11 )
      {
        qmemcpy(v145, v138, 0x60u);
        v172 = v145;
        v173 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v139, (char *)&loc_1017C33E6 + 2, &v172);
        alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(v151, v139);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v145);
      }
    }
    else
    {
      qmemcpy(v145, v138, 0x60u);
      v172 = v145;
      v173 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v139, &unk_1017C37D5, &v172);
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(v151, v139);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v145);
    }
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
      (__int64)v175,
      (__int64)"failed | ",
      6,
      (__int64)&unk_101604B06,
      35);
    alloc::str::join_generic_copy::heca7a5e86402c6b6(v145, v151[1], v151[2], " | ", 3);
    v86 = v181;
    *((_QWORD *)v181 + 3) = v145[2];
    v87 = v145[0];
    v86[2] = v145[1];
    v86[1] = v87;
    *v86 = 2;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(v151, v67);
    if ( v163 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v164, v163, 1);
    goto LABEL_88;
  }
  memcpy(__dst, __src, sizeof(__dst));
  codexmate_lib::commands::accounts::switch_account_and_restart_sync::_$u7b$$u7b$closure$u7d$$u7d$::hd65f2b4d1184839f(
    __src,
    v147,
    v146,
    v46);
  if ( *(_DWORD *)__src != 2 )
  {
    v80 = memcpy(v138, __src, sizeof(v138));
    LOBYTE(v80) = 1;
    v182 = (int)v80;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v138[44]);
    v145[2] = *(_QWORD *)&__src[16];
    v145[1] = *(_QWORD *)&__src[8];
    v145[0] = *(_QWORD *)__src;
    if ( __dst[27] != 0x8000000000000000LL && __dst[27] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[28], __dst[27], 1);
    __dst[29] = v145[2];
    __dst[28] = v145[1];
    __dst[27] = v145[0];
    v81 = &v138[50];
    *(_QWORD *)__src = &v138[50];
    *(_QWORD *)&__src[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    *(_QWORD *)&__src[16] = (char *)&v138[50] + 1;
    *(_QWORD *)&__src[24] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
    LOBYTE(v81) = 1;
    v182 = (int)v81;
    v82 = alloc::fmt::format::format_inner::h3c16c74008a310d4(v134, &unk_1017C352F, __src);
    LOBYTE(v82) = 1;
    v182 = v82;
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
      (__int64)v175,
      (__int64)&unk_101604955,
      14,
      v134);
    LOBYTE(v83) = 1;
    v182 = v83;
    v84 = codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(
            (__int64)v137,
            v171,
            v138[45],
            v138[46]);
    if ( v137[0] != 0x8000000000000000LL )
    {
      *(_QWORD *)&__src[48] = v160;
      *(_QWORD *)&__src[40] = v159;
      *(_QWORD *)&__src[32] = v158;
      *(_QWORD *)&__src[24] = v157;
      *(_QWORD *)&__src[16] = v156;
      *(_QWORD *)&__src[8] = v155;
      *(_QWORD *)__src = v154;
      codexmate_lib::commands::accounts::finish_switch_failure::h6eeb88217806168c(
        v139,
        (__int64)v175,
        __dst,
        (__int64 *)__src,
        v137);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v180,
        v183);
      *(_QWORD *)&__src[16] = *(_QWORD *)&v139[1];
      *(_OWORD *)__src = v139[0];
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
        v145,
        v68,
        (__int64)v175,
        (__int64 *)__src);
LABEL_94:
      v89 = v181;
      *((_QWORD *)v181 + 3) = v145[2];
      v90 = v145[0];
      v89[2] = v145[1];
      v89[1] = v90;
      *v89 = 2;
LABEL_95:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$GT$::h979f018b3821b1f3(v138);
      goto LABEL_96;
    }
    LOBYTE(v84) = 1;
    v182 = v84;
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
      (__int64)v175,
      (__int64)&unk_101604963,
      13,
      (__int64)&unk_101604970,
      9);
    *(_QWORD *)&__src[48] = v160;
    *(_QWORD *)&__src[40] = v159;
    *(_QWORD *)&__src[32] = v158;
    *(_QWORD *)&__src[24] = v157;
    *(_QWORD *)&__src[16] = v156;
    *(_QWORD *)&__src[8] = v155;
    *(_QWORD *)__src = v154;
    codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v161, (__int64)__src);
    if ( LODWORD(v161[0]) != 11 )
    {
      qmemcpy(v139, v161, 0x60u);
      codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(
        (__int64)&v163,
        v171,
        v138[45],
        v138[46]);
      if ( v163 == 0x8000000000000000LL )
      {
        *(_QWORD *)__src = v139;
        *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017C3742, __src);
        codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v138[57], &unk_101604AD5, 23, v151);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v180,
          v183);
        memcpy(__src, v138, sizeof(__src));
        codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
          v145,
          v68,
          (__int64)v175,
          __src,
          (__int64)&unk_101604AEC,
          26);
        memcpy(v181, v145, 0x1E8u);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v139);
        goto LABEL_96;
      }
      v151[2] = v165;
      v151[1] = v164;
      v151[0] = v163;
      *(_QWORD *)__src = v139;
      *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      *(_QWORD *)&__src[16] = v151;
      *(_QWORD *)&__src[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v145, &unk_1017C3636, __src);
      v91 = v145[0];
      v92 = v145[1];
      v93 = v145[2];
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
        (__int64)v175,
        (__int64)"failed | ",
        6,
        (__int64)&unk_101604A4E,
        32);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v180,
        v183);
      *(_QWORD *)__src = v91;
      *(_QWORD *)&__src[8] = v92;
      *(_QWORD *)&__src[16] = v93;
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
        v145,
        v68,
        (__int64)v175,
        (__int64 *)__src);
      v94 = v181;
      *((_QWORD *)v181 + 3) = v145[2];
      v95 = v145[0];
      v94[2] = v145[1];
      v94[1] = v95;
      *v94 = 2;
      if ( v151[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v151[1], v151[0], 1);
      v182 = 0;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v139);
      goto LABEL_95;
    }
    v149 = v161[1];
    v150 = BYTE4(v161[1]);
    if ( BYTE4(v161[1]) & 1 | (LODWORD(v161[1]) != 0) )
    {
      *(_QWORD *)__src = &v149;
      *(_QWORD *)&__src[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed;
      *(_QWORD *)&__src[16] = &v150;
      *(_QWORD *)&__src[24] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v133, &unk_1017C3553, __src);
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
        (__int64)v175,
        (__int64)&unk_101604979,
        14,
        v133);
      codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v161, 5, 0, 0, 0);
      if ( LODWORD(v161[0]) != 11 )
      {
        qmemcpy(v139, v161, 0x60u);
        codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(
          (__int64)&v172,
          v171,
          v138[45],
          v138[46]);
        if ( v172 == (__int64 *)0x8000000000000000LL )
        {
          *(_QWORD *)__src = v139;
          *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017C36DE, __src);
          codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v138[57], &unk_101604AD5, 23, v151);
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
            v180,
            v183);
          memcpy(__src, v138, sizeof(__src));
          codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
            v145,
            v68,
            (__int64)v175,
            __src,
            (__int64)&unk_101604AEC,
            26);
          memcpy(v181, v145, 0x1E8u);
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v139);
          goto LABEL_96;
        }
        v151[2] = v174;
        v151[1] = v173;
        v151[0] = v172;
        *(_QWORD *)__src = v139;
        *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&__src[16] = v151;
        *(_QWORD *)&__src[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v145, &unk_1017C3636, __src);
        v96 = v145[0];
        v97 = v145[1];
        v98 = v145[2];
        codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
          (__int64)v175,
          (__int64)"failed | ",
          6,
          (__int64)&unk_101604A4E,
          32);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v180,
          v183);
        *(_QWORD *)__src = v96;
        *(_QWORD *)&__src[8] = v97;
        *(_QWORD *)&__src[16] = v98;
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
          v145,
          v178,
          (__int64)v175,
          (__int64 *)__src);
        v99 = v181;
        *((_QWORD *)v181 + 3) = v145[2];
        v100 = v145[0];
        v99[2] = v145[1];
        v99[1] = v100;
        *v99 = 2;
        if ( v151[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v151[1], v151[0], 1);
        v182 = 0;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v139);
        goto LABEL_95;
      }
      v169 = v161[7];
      v168 = v161[6];
      v167 = v161[5];
      v166 = v161[4];
      v165 = v161[3];
      v164 = v161[2];
      v163 = v161[1];
      v85 = tauri::Manager::state::he23903daf699d7bb(v68);
      std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(v161, v85);
      if ( LODWORD(v161[0]) == 1 )
      {
        v145[0] = v161[1];
        LOBYTE(v145[1]) = v161[2];
        *(_QWORD *)__src = v145;
        *(_QWORD *)&__src[8] = _$LT$std..sync..poison..PoisonError$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h12b693ddd6822b12;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v139, &unk_1017C36BC, __src);
        v152 = v139[0];
        v153 = *(_QWORD *)&v139[1];
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v145[0],
          LODWORD(v145[1]));
LABEL_111:
        v141 = v153;
        v140 = v152;
LABEL_112:
        *(_QWORD *)&__src[48] = v169;
        *(_QWORD *)&__src[40] = v168;
        *(_QWORD *)&__src[32] = v167;
        *(_QWORD *)&__src[24] = v166;
        *(_QWORD *)&__src[16] = v165;
        *(_QWORD *)&__src[8] = v164;
        *(_QWORD *)__src = v163;
        codexmate_lib::commands::accounts::finish_switch_failure::h6eeb88217806168c(
          v161,
          (__int64)v175,
          __dst,
          (__int64 *)__src,
          (__int64 *)&v140);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v180,
          v183);
        *(_QWORD *)&__src[16] = v161[2];
        *(_QWORD *)&__src[8] = v161[1];
        *(_QWORD *)__src = v161[0];
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
          v145,
          v68,
          (__int64)v175,
          (__int64 *)__src);
        goto LABEL_94;
      }
      v101 = v161[1];
      v102 = v161[2];
      codexmate_lib::core::repository::Repository::switch_account::h8da8a6a163d67813(
        __src,
        v161[1] + 16,
        v138[45],
        v138[46]);
      v103 = *(_QWORD *)__src;
      if ( *(_QWORD *)__src == 2 )
      {
        qmemcpy(v145, &__src[8], 0x60u);
        codexmate_lib::commands::accounts::perform_switch_payload_with_restart_inner::_$u7b$$u7b$closure$u7d$$u7d$::he80cf9d569dc4245(
          v139,
          v145);
        v152 = v139[0];
        v153 = *(_QWORD *)&v139[1];
      }
      else
      {
        v153 = *(_QWORD *)&__src[24];
        v152 = *(_OWORD *)&__src[8];
        memcpy(v139, &__src[32], 0x1C8u);
      }
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v101,
        v102);
      v68 = v178;
      if ( (_DWORD)v103 == 2 )
        goto LABEL_111;
      *(_QWORD *)&__src[24] = v153;
      *(_OWORD *)&__src[8] = v152;
      memcpy(&__src[32], v139, 0x1C8u);
      *(_QWORD *)__src = v103;
      codexmate_lib::commands::accounts::perform_switch_payload_with_restart_inner::_$u7b$$u7b$closure$u7d$$u7d$::h299f2df2dee7db2c(
        &v140,
        v171,
        v138[45],
        v138[46],
        __src);
      if ( (_QWORD)v140 != 0x8000000000000000LL )
        goto LABEL_112;
      *(_QWORD *)&__src[48] = v169;
      *(_QWORD *)&__src[40] = v168;
      *(_QWORD *)&__src[32] = v167;
      *(_QWORD *)&__src[24] = v166;
      *(_QWORD *)&__src[16] = v165;
      *(_QWORD *)&__src[8] = v164;
      *(_QWORD *)__src = v163;
      v104 = codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(v151, (__int64)__src);
      if ( LODWORD(v151[0]) != 11 )
      {
        qmemcpy(v161, v151, sizeof(v161));
        LOBYTE(v104) = 1;
        v182 = (int)v104;
        codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(
          (__int64)&v142,
          v171,
          v138[45],
          v138[46]);
        if ( v142 == (unsigned __int8 *)0x8000000000000000LL )
        {
          *(_QWORD *)__src = v161;
          v118 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          LOBYTE(v118) = 1;
          v182 = (int)v118;
          v119 = alloc::fmt::format::format_inner::h3c16c74008a310d4(&v172, &unk_1017C365B, __src);
          LOBYTE(v119) = 1;
          v182 = v119;
          codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v138[57], &unk_101604AD5, 23, &v172);
          v182 = 0;
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
            v180,
            v183);
          memcpy(__src, v138, sizeof(__src));
          v182 = 0;
          codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
            v145,
            v178,
            (__int64)v175,
            __src,
            (__int64)&unk_101604AEC,
            26);
          memcpy(v181, v145, 0x1E8u);
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v161);
          goto LABEL_96;
        }
        v174 = v144;
        v173 = v143;
        v172 = (__int64 *)v142;
        *(_QWORD *)__src = v161;
        *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        *(_QWORD *)&__src[16] = &v172;
        *(_QWORD *)&__src[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v124 = alloc::fmt::format::format_inner::h3c16c74008a310d4(v145, &unk_1017C3636, __src);
        v125 = v145[0];
        v126 = v145[1];
        v127 = v145[2];
        LOBYTE(v124) = 1;
        v182 = v124;
        codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
          (__int64)v175,
          (__int64)"failed | ",
          6,
          (__int64)&unk_101604A4E,
          32);
        v182 = 0;
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v180,
          v183);
        *(_QWORD *)__src = v125;
        *(_QWORD *)&__src[8] = v126;
        *(_QWORD *)&__src[16] = v127;
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
          v145,
          v178,
          (__int64)v175,
          (__int64 *)__src);
        v128 = v181;
        *((_QWORD *)v181 + 3) = v145[2];
        v129 = v145[0];
        v128[2] = v145[1];
        v128[1] = v129;
        *v128 = 2;
        if ( v172 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173, v172, 1);
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v161);
        goto LABEL_95;
      }
      if ( LODWORD(v151[1]) || BYTE4(v151[1]) )
      {
        v120 = v171;
        codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(
          (__int64)v151,
          v171,
          v138[45],
          v138[46]);
        if ( v151[0] == 0x8000000000000000LL )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v151, v120);
          v121 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(103, 1);
          if ( !v121 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 103);
          v122 = v121;
          memcpy(v121, &unk_101604A6E, 0x67u);
          *(_QWORD *)__src = 103;
          *(_QWORD *)&__src[8] = v122;
          *(_QWORD *)&__src[16] = 103;
          codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v138[57], &unk_101604AD5, 23, __src);
          v123 = v178;
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
            v180,
            v183);
          memcpy(__src, v138, sizeof(__src));
          codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
            v145,
            v123,
            (__int64)v175,
            __src,
            (__int64)&unk_101604AEC,
            26);
          memcpy(v181, v145, 0x1E8u);
          goto LABEL_96;
        }
        v161[2] = v151[2];
        v130 = v151[0];
        v161[1] = v151[1];
        v161[0] = v151[0];
        LOBYTE(v130) = 1;
        v182 = v130;
        codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
          (__int64)v175,
          (__int64)"failed | ",
          6,
          (__int64)&unk_101604A4E,
          32);
        v182 = 0;
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
          v180,
          v183);
        v145[0] = (__int64)v161;
        v145[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        v182 = 0;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C3616, v145);
        v182 = 0;
        codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
          v145,
          v178,
          (__int64)v175,
          (__int64 *)__src);
        v131 = v181;
        *((_QWORD *)v181 + 3) = v145[2];
        v132 = v145[0];
        v131[2] = v145[1];
        v131[1] = v132;
        *v131 = 2;
        v116 = v161[0];
        if ( !v161[0] )
          goto LABEL_95;
        v117 = v161[1];
        goto LABEL_130;
      }
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
        (__int64)v175,
        (__int64)&unk_101604987,
        15,
        (__int64)&unk_101604970,
        9);
      v68 = v178;
    }
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
      (__int64)v175,
      (__int64)&unk_101604996,
      14,
      (__int64)&unk_10160492D,
      14);
    codexmate_lib::platform::process::CodexProcessLifecycle::launch::ha2d4ffcf3d332a03(v151, (__int64)&unk_101604996);
    if ( LODWORD(v151[0]) != 11 )
    {
      qmemcpy(v161, v151, sizeof(v161));
      *(_QWORD *)__src = v161;
      *(_QWORD *)&__src[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v172, &unk_1017C3572, __src);
      codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(&v138[57], &unk_1016049A4, 21, &v172);
      _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he3b02506b1ba193d(__src, v161);
      v105 = *(_QWORD *)&__src[8];
      v142 = codexmate_lib::commands::accounts::switch_error_code::h067c73bb59b91569(
               *(unsigned __int8 **)&__src[8],
               *(unsigned __int8 **)&__src[16]);
      v143 = v106;
      v145[0] = (__int64)&v142;
      v145[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v163, (char *)&loc_1017C33C3 + 2, v145);
      if ( *(_QWORD *)__src )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, *(_QWORD *)__src, 1);
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
        (__int64)v175,
        (__int64)&unk_1016049B9,
        13,
        &v163);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v180,
        v183);
      memcpy(__src, v138, sizeof(__src));
      codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
        v145,
        v68,
        (__int64)v175,
        __src,
        (__int64)&unk_1016049C6,
        23);
      memcpy(v181, v145, 0x1E8u);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v161);
      goto LABEL_96;
    }
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
      (__int64)v175,
      (__int64)&unk_1016049DD,
      12,
      (__int64)&unk_101604970,
      9);
    codexmate_lib::commands::accounts::verify_account_switch_after_launch::h1d7256492405a8a6(
      &v172,
      v171,
      v138[45],
      v138[46]);
    if ( v172 == (__int64 *)0x8000000000000000LL )
    {
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
        (__int64)v175,
        (__int64)&unk_101604A3A,
        13,
        (__int64)&unk_101604970,
        9);
      alloc::vec::Vec$LT$T$C$A$GT$::retain::hbdcef5aa563be83b(&v138[57]);
      v182 = 0;
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v180,
        v183);
      memcpy(__src, v138, sizeof(__src));
      codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
        v145,
        v68,
        (__int64)v175,
        __src,
        (__int64)&unk_101604A47,
        7);
      memcpy(v181, v145, 0x1E8u);
      core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::h50cd59272e9b3399(__dst);
      v182 = 0;
      core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v179);
      if ( v170 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v170, 1);
      return v181;
    }
    v165 = v174;
    v107 = (int)v172;
    v164 = (__int64)v173;
    v163 = (__int64)v172;
    LOBYTE(v107) = 1;
    v182 = v107;
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
      (__int64)v175,
      (__int64)&unk_1016049E9,
      18,
      (__int64)&unk_1016049FB,
      30);
    codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy::h86fd61710471fd87(v145, 5, 0, 0, 0);
    if ( LODWORD(v145[0]) == 11 )
    {
      *(_QWORD *)&__src[48] = v145[7];
      *(_QWORD *)&__src[40] = v145[6];
      *(_QWORD *)&__src[32] = v145[5];
      *(_QWORD *)&__src[24] = v145[4];
      *(_QWORD *)&__src[16] = v145[3];
      *(_QWORD *)&__src[8] = v145[2];
      *(_QWORD *)__src = v145[1];
      v145[0] = (__int64)&v163;
      v145[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v161, &unk_1017C35B7, v145);
      codexmate_lib::commands::accounts::finish_switch_failure::h6eeb88217806168c(
        v151,
        (__int64)v175,
        __dst,
        (__int64 *)__src,
        v161);
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v180,
        v183);
      *(_QWORD *)&__src[16] = v151[2];
      *(_QWORD *)&__src[8] = v151[1];
      *(_QWORD *)__src = v151[0];
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
        v145,
        v178,
        (__int64)v175,
        (__int64 *)__src);
      v108 = v181;
      *((_QWORD *)v181 + 3) = v145[2];
      v109 = v145[0];
      v108[2] = v145[1];
      v108[1] = v109;
      *v108 = 2;
    }
    else
    {
      qmemcpy(__src, v145, 0x60u);
      v161[0] = (__int64)&v163;
      v161[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      v161[2] = (__int64)__src;
      v161[3] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
      v110 = alloc::fmt::format::format_inner::h3c16c74008a310d4(v151, &unk_1017C35D5, v161);
      v111 = v151[0];
      v112 = v151[1];
      v113 = v151[2];
      LOBYTE(v110) = 1;
      v182 = v110;
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h5f6067aefe61cb83(
        (__int64)v175,
        (__int64)"failed | ",
        6,
        (__int64)&unk_101604A19,
        33);
      v182 = 0;
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
        v180,
        v183);
      v161[0] = v111;
      v161[1] = v112;
      v161[2] = v113;
      codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
        v151,
        v178,
        (__int64)v175,
        v161);
      v114 = v181;
      *((_QWORD *)v181 + 3) = v151[2];
      v115 = v151[0];
      v114[2] = v151[1];
      v114[1] = v115;
      *v114 = 2;
      v182 = 0;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
    }
    v116 = v163;
    if ( !v163 )
      goto LABEL_95;
    v117 = v164;
LABEL_130:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117, v116, 1);
    goto LABEL_95;
  }
  v145[6] = v160;
  v145[5] = v159;
  v145[4] = v158;
  v145[3] = v157;
  v145[2] = v156;
  v145[1] = v155;
  v145[0] = v154;
  codexmate_lib::commands::accounts::finish_switch_failure::h6eeb88217806168c(
    v161,
    (__int64)v175,
    __dst,
    v145,
    (__int64 *)&__src[8]);
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1(
    v180,
    v183);
  v145[2] = v161[2];
  v145[1] = v161[1];
  v145[0] = v161[0];
  codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(v139, v68, (__int64)v175, v145);
  v79 = (char *)v181;
  *((_QWORD *)v181 + 3) = *(_QWORD *)&v139[1];
  *(_OWORD *)(v79 + 8) = v139[0];
  *(_QWORD *)v79 = 2;
LABEL_96:
  core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::h50cd59272e9b3399(__dst);
  v88 = 0;
LABEL_89:
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v179);
  v24 = v179;
  close_NOCANCEL(v179);
  v19 = v170;
  if ( v170 )
  {
    v24 = (unsigned __int64)v162;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v162, v170, 1);
  }
  if ( v88 )
    goto LABEL_12;
  return v181;
}
