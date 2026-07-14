// codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::hc374473223f0c370
// addr: 0x1005c4030
// decompiled via 反编译器 MCP (mac) live 1.1.8 IDB, session <审计会话>
// TRUNCATION NOTICE: this decompile output is capped by the 反编译器 MCP decompile tool at 66667 chars
// for the `code` field (confirmed identical after re-fetching the full output artifact via the
// tool's own download_url — the cap is server-side, not a transport truncation). basic_blocks on
// this address confirms the true function extent is 0x1005c4030-0x1005c6762 (230 basic blocks,
// ~0x2732/~10034 bytes), i.e. roughly the last ~15% of the function body (the common LABEL_132
// epilogue plus some duplicate CoreError-formatting/rollback sub-branches nested inside the
// v133(enabled)-true branch, and the a3==0(disable)-path short-circuit tail) is not captured in
// this .c file. This is NOT an accepted_unknown/genuine_ceiling claim: every callee symbol reached
// by the missing tail was independently recovered via a full-text regex scan of this same 66667-char
// buffer (every callee this owner makes appears at least once as a `path::name::hHASH(` call token
// somewhere in the captured 66667 chars, including ones whose actual call site is further down in
// the missing ~15%, because the mangled/demangled name+hash also appears earlier in the buffer at a
// different call site or in an adjacent branch) — see evidence.md Confirmed #1 and recovery_attempts
// for the two additional tool calls attempted (curl re-download of the full artifact; basic_blocks
// extent confirmation) before accepting this as a scope-bounded limitation for this round.

void *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::hc374473223f0c370(
        _QWORD *a1,
        __int64 *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  _OWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r14
  _QWORD *v13; // rbx
  __m256i **v14; // rdi
  __int64 v15; // rdx
  char v16; // r15
  char v17; // r12
  __int64 v18; // rbx
  __int16 v19; // ax
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // r14
  _QWORD *v23; // r15
  __int64 v24; // rsi
  bool v25; // r8
  __int64 v26; // r14
  void *v27; // rax
  char v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r15
  char v31; // r12
  void *v32; // rax
  unsigned __int8 v33; // r15
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r12
  __int64 v38; // r14
  _QWORD *v39; // rax
  const char **v40; // rdi
  void *v41; // rax
  void *v42; // rbx
  _QWORD *v43; // rax
  __int64 v44; // r15
  char v45; // r12
  void *v46; // rax
  __int64 v47; // r12
  __int64 v48; // rax
  _OWORD *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rdi
  __int64 v53; // rdx
  char v54; // al
  __int64 v55; // rbx
  _QWORD *v56; // rdx
  __int64 v57; // rbx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  char *v60; // r15
  _QWORD *v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // rcx
  char v64; // r14
  __int64 v65; // r15
  __int64 v66; // rbx
  unsigned __int8 v67; // r13
  __int64 v68; // rbx
  __int64 v69; // r14
  _QWORD *v70; // r15
  __int64 v71; // rsi
  _OWORD *v72; // rdx
  _QWORD *v73; // rax
  __int64 v74; // rax
  _OWORD *v76; // rdx
  _QWORD *v77; // rdx
  __int64 v78; // rax
  char v79; // r14
  _QWORD *v80; // r15
  _QWORD *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  char v84; // dl
  __int128 v85; // kr30_16
  _QWORD *v86; // rax
  __int128 v87; // kr40_16
  _QWORD *v88; // rax
  char *v89; // rdi
  _BYTE *v90; // rsi
  _BYTE *v91; // r14
  __int64 v92; // rbx
  __int64 v93; // r14
  _QWORD *v94; // r15
  __int64 v95; // rsi
  _QWORD *v96; // rax
  _BYTE *v97; // r14
  _BYTE v98[344]; // [rsp+8h] [rbp-8B8h] BYREF
  _BYTE v99[344]; // [rsp+160h] [rbp-760h] BYREF
  _QWORD v100[12]; // [rsp+2B8h] [rbp-608h] BYREF
  _QWORD v101[5]; // [rsp+318h] [rbp-5A8h] BYREF
  _QWORD v102[3]; // [rsp+340h] [rbp-580h] BYREF
  _QWORD v103[3]; // [rsp+358h] [rbp-568h] BYREF
  _QWORD v104[2]; // [rsp+370h] [rbp-550h] BYREF
  __int128 v105; // [rsp+380h] [rbp-540h]
  __int128 v106; // [rsp+390h] [rbp-530h]
  __int64 v107; // [rsp+3A0h] [rbp-520h] BYREF
  __int64 v108; // [rsp+3A8h] [rbp-518h]
  __int64 v109; // [rsp+3B0h] [rbp-510h]
  _QWORD v110[3]; // [rsp+3B8h] [rbp-508h] BYREF
  _BYTE v111[344]; // [rsp+3D0h] [rbp-4F0h] BYREF
  __int64 v112; // [rsp+528h] [rbp-398h] BYREF
  __int64 v113; // [rsp+530h] [rbp-390h]
  _BYTE v114[48]; // [rsp+538h] [rbp-388h]
  __int64 v115; // [rsp+568h] [rbp-358h]
  _OWORD __dst[23]; // [rsp+570h] [rbp-350h] BYREF
  _OWORD v117[6]; // [rsp+6E0h] [rbp-1E0h] BYREF
  __m256i **v118; // [rsp+740h] [rbp-180h] BYREF
  _BYTE v119[88]; // [rsp+748h] [rbp-178h] BYREF
  int v120; // [rsp+7A4h] [rbp-11Ch]
  __int64 v121; // [rsp+7A8h] [rbp-118h]
  _OWORD v122[6]; // [rsp+7B0h] [rbp-110h] BYREF
  __m256i *v123; // [rsp+810h] [rbp-B0h] BYREF
  __int64 v124; // [rsp+818h] [rbp-A8h] BYREF
  const char *v125; // [rsp+820h] [rbp-A0h]
  __int64 v126; // [rsp+828h] [rbp-98h]
  char **v127; // [rsp+830h] [rbp-90h]
  __int64 v128; // [rsp+838h] [rbp-88h]
  char v129; // [rsp+840h] [rbp-80h]
  __m256i v130; // [rsp+848h] [rbp-78h] BYREF
  __int128 v131; // [rsp+868h] [rbp-58h]
  __int16 v132; // [rsp+87Ah] [rbp-46h]
  int v133; // [rsp+87Ch] [rbp-44h]
  void *v134; // [rsp+880h] [rbp-40h]
  __int64 *v135; // [rsp+888h] [rbp-38h]
  char v136; // [rsp+896h] [rbp-2Ah] BYREF
  char v137; // [rsp+897h] [rbp-29h] BYREF

  v120 = a4; /*0x1005c4044*/
  v134 = a1; /*0x1005c404a*/
  v112 = a5; /*0x1005c4058*/
  v113 = a6; /*0x1005c405f*/
  v133 = a3; /*0x1005c4066*/
  v135 = a2; /*0x1005c406b*/
  if ( !a3 ) /*0x1005c406f*/
  {
    v18 = a5; /*0x1005c4160*/
    v100[0] = 0x8000000000000000LL; /*0x1005c4163*/
    goto LABEL_35; /*0x1005c416a*/
  }
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(__dst, a2); /*0x1005c4082*/
  v8 = *(_QWORD *)&__dst[1]; /*0x1005c4087*/
  codexmate_lib::core::relay::manager::valid_codex_active_ids::h98d8c646eef162e0(&v118, __dst); /*0x1005c4098*/
  v115 = v8; /*0x1005c409d*/
  v121 = *(_QWORD *)&v119[8]; /*0x1005c40ab*/
  LOBYTE(v132) = BYTE5(__dst[21]); /*0x1005c40b9*/
  v9 = *a2 + 16; /*0x1005c40bf*/
  HIBYTE(v132) = codexmate_lib::core::relay::codex_diagnostic::config_needs_syntax_fix::hcdf2b65801035e30(v9, __dst); /*0x1005c40d2*/
  v10 = (_OWORD *)v9; /*0x1005c40dc*/
  codexmate_lib::core::relay::config_takeover::inspect::hfe47fd05e43f4241(v111, v9); /*0x1005c40df*/
  v108 = codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_visibility::h464f61e129d62a95(v9); /*0x1005c40ec*/
  v109 = v11; /*0x1005c40f3*/
  v12 = v135[2]; /*0x1005c40fe*/
  v13 = (_QWORD *)(v12 + 16); /*0x1005c4102*/
  v14 = *(__m256i ***)(v12 + 16); /*0x1005c4106*/
  if ( !v14 ) /*0x1005c410d*/
    v14 = (__m256i **)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v12 + 16); /*0x1005c4177*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c410f*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005c4130*/
  {
    v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v14, v10, v15, a7, a8) ^ 1; /*0x1005c4184*/
    if ( *(_BYTE *)(v12 + 24) ) /*0x1005c4188*/
    {
LABEL_6:
      if ( !v16 /*0x1005c66a2*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v14, v10, v15, a7, a8) )
      {
        *(_BYTE *)(v12 + 24) = 1; /*0x1005c66af*/
      }
      v17 = 1; /*0x1005c4153*/
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v13, v10, v15, a7, a8); /*0x1005c4156*/
      goto LABEL_20; /*0x1005c415b*/
    }
  }
  else
  {
    v16 = 0; /*0x1005c4132*/
    if ( *(_BYTE *)(v12 + 24) ) /*0x1005c4135*/
      goto LABEL_6; /*0x1005c413c*/
  }
  if ( *(_QWORD *)(v12 + 32) ) /*0x1005c4191*/
  {
    v19 = *(_WORD *)(v12 + 40); /*0x1005c419c*/
    *(_DWORD *)((char *)v117 + 2) = 16777343; /*0x1005c41a1*/
    WORD3(v117[0]) = v19; /*0x1005c41ab*/
    LOWORD(v117[0]) = 0; /*0x1005c41b2*/
    v10 = v117; /*0x1005c41c2*/
    std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v123, v117, 0, 300000000); /*0x1005c41d0*/
    v20 = (int)v123; /*0x1005c41d5*/
    v14 = &v123; /*0x1005c41dc*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpListener$C$std..io..error..Error$GT$$GT$::h5e072ede2f9d0326(&v123); /*0x1005c41e3*/
    if ( v20 ) /*0x1005c41eb*/
    {
      std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x1005c41f4*/
      v10 = v117; /*0x1005c4200*/
      std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(&v123, v117, 0, 300000000); /*0x1005c420e*/
      v17 = (char)v123; /*0x1005c4213*/
      v14 = &v123; /*0x1005c421a*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpListener$C$std..io..error..Error$GT$$GT$::h5e072ede2f9d0326(&v123); /*0x1005c4221*/
      if ( !v16 ) /*0x1005c4229*/
        goto LABEL_18; /*0x1005c4229*/
    }
    else
    {
      v17 = 0; /*0x1005c4237*/
      if ( !v16 ) /*0x1005c423d*/
      {
LABEL_18:
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1005c66b9*/
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v14, v10, v15, a7, a8) )
        {
          *(_BYTE *)(v12 + 24) = 1; /*0x1005c66c6*/
        }
      }
    }
  }
  else
  {
    v17 = 1; /*0x1005c422d*/
    if ( !v16 ) /*0x1005c4233*/
      goto LABEL_18; /*0x1005c4233*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v13, v10, v15, a7, a8); /*0x1005c4252*/
LABEL_20:
  *((_QWORD *)&v122[3] + 1) = v115; /*0x1005c425a*/
  *(_QWORD *)&v122[4] = v121; /*0x1005c426f*/
  WORD4(v122[5]) = v132; /*0x1005c427a*/
  v122[0] = *(_OWORD *)v111; /*0x1005c4298*/
  v122[1] = *(_OWORD *)&v111[16]; /*0x1005c42ad*/
  v122[2] = *(_OWORD *)&v111[32]; /*0x1005c42c9*/
  *(_QWORD *)&v122[3] = *(_QWORD *)&v111[48]; /*0x1005c42e5*/
  *((_QWORD *)&v122[4] + 1) = v108; /*0x1005c42f3*/
  *(_QWORD *)&v122[5] = v109; /*0x1005c4301*/
  BYTE10(v122[5]) = v17; /*0x1005c4308*/
  v21 = *(_QWORD *)v119; /*0x1005c430f*/
  v22 = *(_QWORD *)&v119[8]; /*0x1005c4316*/
  if ( *(_QWORD *)&v119[8] ) /*0x1005c4320*/
  {
    v23 = (_QWORD *)(*(_QWORD *)v119 + 8LL); /*0x1005c4322*/
    do /*0x1005c4337*/
    {
      v24 = *(v23 - 1); /*0x1005c4339*/
      if ( v24 ) /*0x1005c4340*/
        a7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v23, v24, 1); /*0x1005c434a*/
      v23 += 3; /*0x1005c4330*/
      --v22; /*0x1005c4334*/
    }
    while ( v22 ); /*0x1005c4337*/
  }
  if ( v118 ) /*0x1005c435b*/
    a7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24LL * (_QWORD)v118, 8); /*0x1005c436d*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(__dst); /*0x1005c437c*/
  if ( !*((_QWORD *)&v122[3] + 1) || !*(_QWORD *)&v122[4] ) /*0x1005c4397*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst); /*0x1005c485e*/
    v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(157, 1); /*0x1005c486d*/
    if ( !v41 ) /*0x1005c4875*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 157); /*0x1005c675b*/
    v42 = v41; /*0x1005c487b*/
    memcpy(v41, &unk_1012CBC37, 0x9Du); /*0x1005c488d*/
    v43 = v134; /*0x1005c4892*/
    *((_QWORD *)v134 + 1) = 9; /*0x1005c4896*/
    v43[2] = 157; /*0x1005c489e*/
    v43[3] = v42; /*0x1005c48a6*/
    v43[4] = 157; /*0x1005c48aa*/
    *v43 = 0x8000000000000000LL; /*0x1005c48bc*/
    v40 = (const char **)v122; /*0x1005c48bf*/
    goto LABEL_132; /*0x1005c48c6*/
  }
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x1005c43ab*/
  {
    v25 = 1; /*0x1005c43d4*/
    if ( !LOBYTE(v122[3]) && !*(_QWORD *)&v122[1] ) /*0x1005c43e8*/
      v25 = *((_QWORD *)&v122[2] + 1) != 0; /*0x1005c43f2*/
    LOBYTE(v123) = *((_QWORD *)&v122[4] + 1) != 0; /*0x1005c43fe*/
    v130.i8[0] = v25; /*0x1005c440d*/
    LOBYTE(v118) = *(_QWORD *)&v122[5] != 0; /*0x1005c4411*/
    *(_QWORD *)&__dst[0] = (char *)&v122[3] + 8; /*0x1005c4418*/
    *((_QWORD *)&__dst[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c4426*/
    *(_QWORD *)&__dst[1] = &v122[4]; /*0x1005c442d*/
    *((_QWORD *)&__dst[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c4434*/
    *(_QWORD *)&__dst[2] = (char *)&v122[5] + 8; /*0x1005c443b*/
    *((_QWORD *)&__dst[2] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c4449*/
    *(_QWORD *)&__dst[3] = (char *)&v122[5] + 9; /*0x1005c4450*/
    *((_QWORD *)&__dst[3] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c4457*/
    *(_QWORD *)&__dst[4] = &v130; /*0x1005c4462*/
    *((_QWORD *)&__dst[4] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c4469*/
    *(_QWORD *)&__dst[5] = &v123; /*0x1005c4477*/
    *((_QWORD *)&__dst[5] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c447e*/
    *(_QWORD *)&__dst[6] = &v118; /*0x1005c448c*/
    *((_QWORD *)&__dst[6] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c4493*/
    *(_QWORD *)&__dst[7] = (char *)&v122[5] + 10; /*0x1005c449a*/
    *((_QWORD *)&__dst[7] + 1) = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c44a1*/
    *(_QWORD *)&v111[48] = 3; /*0x1005c44a8*/
    *(_QWORD *)&v111[56] = "codexmate_lib::core::relay::manager"; /*0x1005c44ba*/
    *(_QWORD *)&v111[64] = 35; /*0x1005c44c1*/
    *(_QWORD *)&v111[80] = &unk_10122C16A; /*0x1005c44d3*/
    *(_QWORD *)&v111[88] = __dst; /*0x1005c44da*/
    *(_QWORD *)v111 = 0; /*0x1005c44e1*/
    *(_QWORD *)&v111[8] = "codexmate_lib::core::relay::manager"; /*0x1005c44ec*/
    *(_QWORD *)&v111[16] = 35; /*0x1005c44f3*/
    *(_QWORD *)&v111[24] = 0; /*0x1005c44fe*/
    *(_QWORD *)&v111[32] = "src/core/relay/manager.rs"; /*0x1005c4510*/
    *(_QWORD *)&v111[40] = 25; /*0x1005c4517*/
    *(_QWORD *)&v111[72] = 0x4ED00000001LL; /*0x1005c452c*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v117, v111); /*0x1005c4541*/
  }
  qmemcpy(v100, v122, sizeof(v100)); /*0x1005c4559*/
  a1 = v101; /*0x1005c4559*/
  v18 = v112; /*0x1005c455c*/
LABEL_35:
  v137 = 5; /*0x1005c4563*/
  v110[0] = &v136; /*0x1005c456b*/
  v110[1] = &v112; /*0x1005c4579*/
  v110[2] = &v137; /*0x1005c4584*/
  v136 = 1; /*0x1005c458b*/
  if ( v18 ) /*0x1005c4592*/
  {
    v26 = v113; /*0x1005c4594*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1005c459b*/
    v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1005c45aa*/
    if ( !v27 ) /*0x1005c45b2*/
      goto LABEL_226; /*0x1005c45b2*/
    qmemcpy(v27, "stopping_codex", 14); /*0x1005c45d0*/
    *(_QWORD *)&__dst[0] = 14; /*0x1005c45d3*/
    *((_QWORD *)&__dst[0] + 1) = v27; /*0x1005c45de*/
    *(_QWORD *)&__dst[1] = 14; /*0x1005c45e5*/
    WORD4(__dst[1]) = 1281; /*0x1005c45f0*/
    (*(void (__fastcall **)(__int64, _OWORD *))(v26 + 40))(v18, __dst); /*0x1005c4603*/
  }
  codexmate_lib::platform::process::stop_codex_for_file_edit::h58b70230213b1120((__int64 *)__dst, 5, 0); /*0x1005c4618*/
  if ( LODWORD(__dst[0]) != 10 ) /*0x1005c4624*/
  {
    v39 = v134; /*0x1005c4821*/
    qmemcpy((char *)v134 + 8, __dst, 0x60u); /*0x1005c4835*/
    *v39 = 0x8000000000000000LL; /*0x1005c4842*/
    goto LABEL_54; /*0x1005c4842*/
  }
  v28 = ++v136; /*0x1005c462f*/
  v29 = v112; /*0x1005c4636*/
  if ( (_BYTE)v133 ) /*0x1005c4641*/
  {
    if ( !v112 ) /*0x1005c464a*/
      goto LABEL_43; /*0x1005c464a*/
    v30 = v113; /*0x1005c464c*/
    v31 = v137; /*0x1005c4653*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst); /*0x1005c4658*/
    v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1005c4667*/
    if ( v32 ) /*0x1005c466f*/
    {
      qmemcpy(v32, "preparing_auth", 14); /*0x1005c468d*/
      *(_QWORD *)&__dst[0] = 14; /*0x1005c4690*/
      *((_QWORD *)&__dst[0] + 1) = v32; /*0x1005c469b*/
      *(_QWORD *)&__dst[1] = 14; /*0x1005c46a2*/
      BYTE8(__dst[1]) = v28; /*0x1005c46ad*/
      BYTE9(__dst[1]) = v31; /*0x1005c46b4*/
      (*(void (__fastcall **)(__int64, _OWORD *))(v30 + 40))(v29, __dst); /*0x1005c46c5*/
LABEL_43:
      if ( v100[0] == 0x8000000000000000LL ) /*0x1005c46dd*/
        core::option::expect_failed::ha75f8bdcbd673567(&unk_1012CB55A, 43, &off_101534390); /*0x1005c669d*/
      v118 = (__m256i **)v100[0]; /*0x1005c46ea*/
      qmemcpy(v119, &v100[1], sizeof(v119)); /*0x1005c46fd*/
      v33 = v119[80]; /*0x1005c4700*/
      if ( v119[80] ) /*0x1005c470b*/
      {
        v34 = *v135; /*0x1005c4715*/
        v35 = codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth::h2f0328bac8ed85a3( /*0x1005c4729*/
                __dst,
                *v135 + 16,
                1);
        v36 = *(_QWORD *)&__dst[0]; /*0x1005c472e*/
        if ( *(_QWORD *)&__dst[0] != 10 ) /*0x1005c4739*/
        {
          v64 = BYTE8(__dst[0]); /*0x1005c4f18*/
          v60 = (char *)v134; /*0x1005c4f27*/
          memcpy((char *)v134 + 17, (char *)__dst + 9, 0x57u); /*0x1005c4f34*/
          *((_QWORD *)v60 + 1) = v36; /*0x1005c4f39*/
          v60[16] = v64; /*0x1005c4f3d*/
          goto LABEL_130; /*0x1005c4f41*/
        }
LABEL_46:
        LOBYTE(v35) = 1; /*0x1005c473f*/
        v133 = v35; /*0x1005c4741*/
        if ( !v119[81] ) /*0x1005c474b*/
          goto LABEL_48; /*0x1005c474b*/
        goto LABEL_47; /*0x1005c474b*/
      }
      v34 = *v135; /*0x1005c4e21*/
      v57 = *v135 + 16; /*0x1005c4e24*/
      v58 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557(v57); /*0x1005c4e2c*/
      if ( v58 ) /*0x1005c4e34*/
      {
        v59 = 2; /*0x1005c4e3a*/
      }
      else
      {
        if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_usable_real_oauth_login::h18ba4ce1682b3641(v57) ) /*0x1005c4f49*/
        {
          if ( !(unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::marker_exists::hea0986d78849e3cb(v57) /*0x1005c4f7c*/
            || (codexmate_lib::core::relay::router_unlock_auth::cleanup::h242b88d72bef9392(__dst, v57),
                v59 = *(_QWORD *)&__dst[0],
                *(_QWORD *)&__dst[0] == 10) )
          {
            v133 = 0; /*0x1005c4f82*/
            if ( !v119[81] ) /*0x1005c4f90*/
            {
LABEL_48:
              v37 = v34 + 16; /*0x1005c477a*/
              codexmate_lib::core::relay::config_takeover::inspect::hfe47fd05e43f4241(&v123, v37); /*0x1005c4788*/
              if ( !v129 && !v125 && !v128 ) /*0x1005c47a5*/
              {
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x1005c5d62*/
                {
                  *(_QWORD *)&__dst[0] = "codexmate_lib::core::relay::manager"; /*0x1005c5d6b*/
                  *((_QWORD *)&__dst[0] + 1) = 35; /*0x1005c5d72*/
                  *(_QWORD *)&__dst[1] = "codexmate_lib::core::relay::manager"; /*0x1005c5d7d*/
                  *((_QWORD *)&__dst[1] + 1) = 35; /*0x1005c5d84*/
                  *(_QWORD *)&__dst[2] = &off_101534498; /*0x1005c5d96*/
                  log::__private_api::log::h08ccde1c7672bffb( /*0x1005c5db5*/
                    "[AiMaMi][router-on] config takeover skipped (clean fast path)aimami-relay-rt",
                    123,
                    3,
                    __dst);
                }
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSummary$GT$::hd46fa8e8db38cf21(&v123); /*0x1005c5dc1*/
                *(__m256i *)v114 = v130; /*0x1005c5dd5*/
                *(_OWORD *)&v114[32] = v131; /*0x1005c5df6*/
LABEL_106:
                codexmate_lib::core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence::h02b06405852eb9bf( /*0x1005c5309*/
                  v117,
                  v37);
                if ( LODWORD(v117[0]) == 10 ) /*0x1005c531f*/
                {
                  qmemcpy(__dst, (char *)v117 + 8, 0x58u); /*0x1005c5338*/
                  if ( __dst[4] != 0 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005c535d*/
                  {
                    *(_QWORD *)&v122[0] = &__dst[4]; /*0x1005c5371*/
                    *((_QWORD *)&v122[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c537f*/
                    *(_QWORD *)&v122[1] = (char *)&__dst[4] + 8; /*0x1005c5386*/
                    *((_QWORD *)&v122[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c538d*/
                    *(_QWORD *)v111 = "codexmate_lib::core::relay::manager"; /*0x1005c539b*/
                    *(_QWORD *)&v111[8] = 35; /*0x1005c53a2*/
                    *(_QWORD *)&v111[16] = "codexmate_lib::core::relay::manager"; /*0x1005c53ad*/
                    *(_QWORD *)&v111[24] = 35; /*0x1005c53b4*/
                    *(_QWORD *)&v111[32] = &off_1015343C0; /*0x1005c53c6*/
                    log::__private_api::log::h08ccde1c7672bffb(&unk_10122C51B, v122, 3, v111); /*0x1005c53e7*/
                  }
                  v67 = v33; /*0x1005c53ec*/
                  if ( *((_QWORD *)&__dst[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&__dst[1] + 1) ) /*0x1005c5408*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[2], *((_QWORD *)&__dst[1] + 1), 1); /*0x1005c5416*/
                  v68 = *((_QWORD *)&__dst[0] + 1); /*0x1005c541b*/
                  v69 = *(_QWORD *)&__dst[1]; /*0x1005c5422*/
                  if ( *(_QWORD *)&__dst[1] ) /*0x1005c542c*/
                  {
                    v70 = (_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 8LL); /*0x1005c5432*/
                    do /*0x1005c5447*/
                    {
                      v71 = *(v70 - 1); /*0x1005c544d*/
                      if ( v71 ) /*0x1005c5454*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v70, v71, 1); /*0x1005c545e*/
                      v70 += 3; /*0x1005c5440*/
                      --v69; /*0x1005c5444*/
                    }
                    while ( v69 ); /*0x1005c5447*/
                  }
                  if ( *(_QWORD *)&__dst[0] ) /*0x1005c5532*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, 24LL * *(_QWORD *)&__dst[0], 8); /*0x1005c5544*/
                  codexmate_lib::core::relay::codex_thread_visibility::converge_threads_to_provider::h703ab7f3809d3c3f( /*0x1005c555f*/
                    v117,
                    v37,
                    &unk_1012CB585,
                    6);
                  if ( LODWORD(v117[0]) == 10 ) /*0x1005c556e*/
                  {
                    __dst[3] = *(_OWORD *)((char *)&v117[3] + 8); /*0x1005c5589*/
                    __dst[2] = *(_OWORD *)((char *)&v117[2] + 8); /*0x1005c5597*/
                    __dst[1] = *(_OWORD *)((char *)&v117[1] + 8); /*0x1005c55b3*/
                    __dst[0] = *(_OWORD *)((char *)v117 + 8); /*0x1005c55cf*/
                    if ( *(_QWORD *)&v117[3] ) /*0x1005c55f2*/
                    {
                      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005c55fc*/
                      {
                        *(_QWORD *)v111 = (char *)&__dst[2] + 8; /*0x1005c5617*/
                        *(_QWORD *)&v111[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c5625*/
                        *(_QWORD *)&v111[16] = &__dst[3]; /*0x1005c562c*/
                        *(_QWORD *)&v111[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c5633*/
                        *(_QWORD *)&v111[32] = (char *)&__dst[3] + 8; /*0x1005c563a*/
                        *(_QWORD *)&v111[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c5641*/
                        *(_QWORD *)&v122[0] = "codexmate_lib::core::relay::manager"; /*0x1005c564f*/
                        *((_QWORD *)&v122[0] + 1) = 35; /*0x1005c5656*/
                        *(_QWORD *)&v122[1] = "codexmate_lib::core::relay::manager"; /*0x1005c5661*/
                        *((_QWORD *)&v122[1] + 1) = 35; /*0x1005c5668*/
                        *(_QWORD *)&v122[2] = &off_1015343F0; /*0x1005c567a*/
                        log::__private_api::log::h08ccde1c7672bffb(&unk_10122C57C, v111, 3, v122); /*0x1005c569b*/
                      }
                    }
                    else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005c5a81*/
                    {
                      *(_QWORD *)v111 = "codexmate_lib::core::relay::manager"; /*0x1005c5a8a*/
                      *(_QWORD *)&v111[8] = 35; /*0x1005c5a91*/
                      *(_QWORD *)&v111[16] = "codexmate_lib::core::relay::manager"; /*0x1005c5a9c*/
                      *(_QWORD *)&v111[24] = 35; /*0x1005c5aa3*/
                      *(_QWORD *)&v111[32] = &off_1015343D8; /*0x1005c5ab5*/
                      log::__private_api::log::h08ccde1c7672bffb(&unk_1012CB58B, 105, 3, v111); /*0x1005c5ad4*/
                    }
                    if ( *(_QWORD *)&__dst[0] ) /*0x1005c5ae3*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[0] + 1), *(_QWORD *)&__dst[0], 1); /*0x1005c5af1*/
                    codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h0f711059c93687c0( /*0x1005c5b09*/
                      v110,
                      &unk_1012CB5BF,
                      14);
                    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfc77a7aaab3d25ee(__dst, v135[1] + 16); /*0x1005c5b21*/
                    v83 = core::result::Result$LT$T$C$E$GT$::expect::hef2998741ca1a42b(__dst); /*0x1005c5b2d*/
                    *(_BYTE *)(v83 + 356) = 1; /*0x1005c5b32*/
                    *(_BYTE *)(v83 + 357) = v133; /*0x1005c5b3c*/
                    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::hd68f24e39fd59bd2( /*0x1005c5b4b*/
                      v83,
                      v84 & 1);
                    codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(v98, v135); /*0x1005c5b5b*/
                    codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(v117, v135, v98); /*0x1005c5b72*/
                    if ( LODWORD(v117[0]) != 10 ) /*0x1005c5b7e*/
                    {
                      qmemcpy(v122, v117, sizeof(v122)); /*0x1005c5c1b*/
                      *(_QWORD *)v111 = v122; /*0x1005c5c1e*/
                      *(_QWORD *)&v111[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c5c2c*/
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_10122C5C9, v111); /*0x1005c5c48*/
                      v85 = __dst[0]; /*0x1005c5c54*/
                      codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled::h283784581036905b( /*0x1005c5c74*/
                        v111,
                        v135,
                        *((_QWORD *)&__dst[0] + 1),
                        *(_QWORD *)&__dst[1],
                        v67);
                      if ( *(_DWORD *)v111 != 10 ) /*0x1005c5c80*/
                      {
                        qmemcpy(__dst, v111, 0x60u); /*0x1005c5c9c*/
                        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c5ca7*/
                        {
                          v130.i64[0] = (__int64)__dst; /*0x1005c5ca9*/
                          v130.i64[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c5cad*/
                          v123 = (__m256i *)"codexmate_lib::core::relay::manager"; /*0x1005c5cb8*/
                          v124 = 35; /*0x1005c5cbf*/
                          v125 = "codexmate_lib::core::relay::manager"; /*0x1005c5cca*/
                          v126 = 35; /*0x1005c5cd1*/
                          v127 = &off_101534420; /*0x1005c5ce3*/
                          log::__private_api::log::h08ccde1c7672bffb(&unk_10122C5E9, &v130, 2, &v123); /*0x1005c5d01*/
                        }
                        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x1005c5d0d*/
                      }
                      v86 = v134; /*0x1005c5d12*/
                      qmemcpy((char *)v134 + 8, v122, 0x60u); /*0x1005c5d26*/
                      *v86 = 0x8000000000000000LL; /*0x1005c5d33*/
                      if ( (_QWORD)v85 ) /*0x1005c5d39*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v85 + 1), v85, 1); /*0x1005c5d4a*/
                      goto LABEL_131; /*0x1005c5d4f*/
                    }
                    codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hd0b215828faba6dc(v135); /*0x1005c5b88*/
                    codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h0f711059c93687c0( /*0x1005c5ba0*/
                      v110,
                      "writing_configgpt-5.5launching_codex",
                      14);
                    codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9( /*0x1005c5bb0*/
                      v122,
                      v135);
                    if ( LODWORD(v122[0]) == 10 ) /*0x1005c5bbc*/
                    {
                      if ( BYTE8(v122[0]) ) /*0x1005c5bc9*/
                      {
                        if ( (_BYTE)v120 ) /*0x1005c5bd6*/
                        {
                          codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h0f711059c93687c0( /*0x1005c5bef*/
                            v110,
                            "launching_codex",
                            15);
                          codexmate_lib::core::relay::manager::launch_codex_app_warning::h1ea13dd506032be3(v117); /*0x1005c5bfb*/
                        }
                        else
                        {
                          codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h0f711059c93687c0( /*0x1005c65fc*/
                            v110,
                            "donetooletagfromlinkvaryMenu",
                            4);
                          *(_QWORD *)&v117[0] = 0x8000000000000000LL; /*0x1005c660b*/
                        }
                        codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::hf65da0a57567b4ce( /*0x1005c661d*/
                          v111,
                          v135);
                        __dst[22] = *(_OWORD *)((char *)v117 + 8); /*0x1005c663e*/
                        *((_QWORD *)&__dst[21] + 1) = *(_QWORD *)&v117[0]; /*0x1005c6645*/
                        memcpy(__dst, v111, 0x158u); /*0x1005c6662*/
                        v97 = v134; /*0x1005c666c*/
                        memcpy(v134, __dst, 0x170u); /*0x1005c6676*/
                        v97[368] = v133; /*0x1005c667e*/
                        goto LABEL_131; /*0x1005c6685*/
                      }
                      codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled::h283784581036905b( /*0x1005c655c*/
                        __dst,
                        v135,
                        &unk_1012CB5CD,
                        110,
                        v67);
                      if ( LODWORD(__dst[0]) == 10 ) /*0x1005c6568*/
                        codexmate_lib::core::relay::manager::router_no_active_provider_error::h8696be024e1a9342(__dst); /*0x1005c6571*/
                      v88 = v134; /*0x1005c6576*/
                      v89 = (char *)v134 + 8; /*0x1005c657a*/
                      v90 = __dst; /*0x1005c657e*/
                    }
                    else
                    {
                      qmemcpy(v111, v122, 0x60u); /*0x1005c5e23*/
                      v123 = (__m256i *)v111; /*0x1005c5e26*/
                      v124 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c5e34*/
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &unk_10122C627, &v123); /*0x1005c5e50*/
                      v87 = v117[0]; /*0x1005c5e5c*/
                      codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled::h283784581036905b( /*0x1005c5e7c*/
                        __dst,
                        v135,
                        *((_QWORD *)&v117[0] + 1),
                        *(_QWORD *)&v117[1],
                        v67);
                      if ( LODWORD(__dst[0]) != 10 ) /*0x1005c5e88*/
                      {
                        v96 = v134; /*0x1005c659f*/
                        qmemcpy((char *)v134 + 8, __dst, 0x60u); /*0x1005c65b3*/
                        *v96 = 0x8000000000000000LL; /*0x1005c65c0*/
                        if ( (_QWORD)v87 ) /*0x1005c65c6*/
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v87 + 1), v87, 1); /*0x1005c65d3*/
                        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v111); /*0x1005c65df*/
                        goto LABEL_131; /*0x1005c65e4*/
                      }
                      if ( (_QWORD)v87 ) /*0x1005c5e91*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v87 + 1), v87, 1); /*0x1005c5e9e*/
                      v88 = v134; /*0x1005c5ea3*/
                      v89 = (char *)v134 + 8; /*0x1005c5ea7*/
                      v90 = v111; /*0x1005c5eab*/
                    }
                    qmemcpy(v89, v90, 0x60u); /*0x1005c658a*/
                    *v88 = 0x8000000000000000LL; /*0x1005c6597*/
LABEL_131:
                    v40 = (const char **)&v118; /*0x1005c57db*/
                    goto LABEL_132; /*0x1005c57db*/
                  }
                  qmemcpy(v122, v117, sizeof(v122)); /*0x1005c5813*/
                  *(_QWORD *)v111 = v122; /*0x1005c5816*/
                  *(_QWORD *)&v111[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c5824*/
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_10122C644, v111); /*0x1005c5843*/
                  v130.i128[0] = __dst[0]; /*0x1005c5856*/
                  v130.i64[2] = *(_QWORD *)&__dst[1]; /*0x1005c5865*/
                  codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled::h283784581036905b( /*0x1005c5878*/
                    v111,
                    v135,
                    *((_QWORD *)&__dst[0] + 1),
                    *(_QWORD *)&__dst[1],
                    v67);
                  if ( *(_DWORD *)v111 == 10 ) /*0x1005c5884*/
                  {
                    v76 = v134; /*0x1005c588e*/
                    *((_QWORD *)v134 + 4) = v130.i64[2]; /*0x1005c5892*/
                    v76[1] = v130.i128[0]; /*0x1005c58a2*/
                    *((_QWORD *)v76 + 1) = 9; /*0x1005c58a6*/
                    *(_QWORD *)v76 = 0x8000000000000000LL; /*0x1005c58b8*/
                  }
                  else
                  {
                    qmemcpy(__dst, v111, 0x60u); /*0x1005c59cb*/
                    v123 = &v130; /*0x1005c59d2*/
                    v124 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005c59e0*/
                    v125 = (const char *)__dst; /*0x1005c59e7*/
                    v126 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c59ee*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v102, &unk_10122C677, &v123); /*0x1005c5a0a*/
                    v81 = v134; /*0x1005c5a16*/
                    *((_QWORD *)v134 + 4) = v102[2]; /*0x1005c5a1a*/
                    v82 = v102[0]; /*0x1005c5a1e*/
                    v81[3] = v102[1]; /*0x1005c5a2c*/
                    v81[2] = v82; /*0x1005c5a30*/
                    v81[1] = 9; /*0x1005c5a34*/
                    *v81 = 0x8000000000000000LL; /*0x1005c5a46*/
                    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x1005c5a50*/
                    if ( v130.i64[0] ) /*0x1005c5a5c*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130.i64[1], v130.i64[0], 1); /*0x1005c5a67*/
                  }
                }
                else
                {
                  qmemcpy(v122, v117, sizeof(v122)); /*0x1005c547b*/
                  *(_QWORD *)v111 = v122; /*0x1005c547e*/
                  *(_QWORD *)&v111[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c548c*/
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_10122C6AA, v111); /*0x1005c54ab*/
                  v130.i128[0] = __dst[0]; /*0x1005c54be*/
                  v130.i64[2] = *(_QWORD *)&__dst[1]; /*0x1005c54cd*/
                  codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled::h283784581036905b( /*0x1005c54e0*/
                    v111,
                    v135,
                    *((_QWORD *)&__dst[0] + 1),
                    *(_QWORD *)&__dst[1],
                    v33);
                  if ( *(_DWORD *)v111 == 10 ) /*0x1005c54ec*/
                  {
                    v72 = v134; /*0x1005c54f6*/
                    *((_QWORD *)v134 + 4) = v130.i64[2]; /*0x1005c54fa*/
                    v72[1] = v130.i128[0]; /*0x1005c550a*/
                    *((_QWORD *)v72 + 1) = 9; /*0x1005c550e*/
                    *(_QWORD *)v72 = 0x8000000000000000LL; /*0x1005c5520*/
                  }
                  else
                  {
                    qmemcpy(__dst, v111, 0x60u); /*0x1005c58cf*/
                    v123 = &v130; /*0x1005c58d6*/
                    v124 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005c58e4*/
                    v125 = (const char *)__dst; /*0x1005c58eb*/
                    v126 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c58f2*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v103, &unk_10122C677, &v123); /*0x1005c590e*/
                    v77 = v134; /*0x1005c591a*/
                    *((_QWORD *)v134 + 4) = v103[2]; /*0x1005c591e*/
                    v78 = v103[0]; /*0x1005c5922*/
                    v77[3] = v103[1]; /*0x1005c5930*/
                    v77[2] = v78; /*0x1005c5934*/
                    v77[1] = 9; /*0x1005c5938*/
                    *v77 = 0x8000000000000000LL; /*0x1005c594a*/
                    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x1005c5954*/
                    if ( v130.i64[0] ) /*0x1005c5960*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v130.i64[1], v130.i64[0], 1); /*0x1005c596b*/
                  }
                }
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v122); /*0x1005c5977*/
                goto LABEL_131; /*0x1005c597c*/
              }
              codexmate_lib::core::relay::config_takeover::takeover::h32535426150009cd(v117, v37); /*0x1005c47b5*/
              if ( LODWORD(v117[0]) == 10 ) /*0x1005c47c1*/
              {
                v38 = *((_QWORD *)&v117[0] + 1); /*0x1005c47c7*/
                v130 = *(__m256i *)&v117[1]; /*0x1005c47d5*/
                v131 = v117[3]; /*0x1005c4801*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSummary$GT$::hd46fa8e8db38cf21(&v123); /*0x1005c4817*/
                goto LABEL_100; /*0x1005c481c*/
              }
              LOBYTE(v115) = v33; /*0x1005c4f9b*/
              qmemcpy(v122, v117, sizeof(v122)); /*0x1005c4fb8*/
              *(_QWORD *)v111 = v122; /*0x1005c4fbb*/
              *(_QWORD *)&v111[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c4fc9*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_10122C891, v111); /*0x1005c4fe5*/
              v65 = *((_QWORD *)&__dst[0] + 1); /*0x1005c4ff8*/
              v121 = *(_QWORD *)&__dst[0]; /*0x1005c4ff8*/
              codexmate_lib::core::relay::manager::RelayManager::rollback_router_enabled::h283784581036905b( /*0x1005c501c*/
                v111,
                v135,
                *((_QWORD *)&__dst[0] + 1),
                *(_QWORD *)&__dst[1],
                (unsigned __int8)v115);
              if ( *(_DWORD *)v111 != 10 ) /*0x1005c5028*/
              {
                qmemcpy(__dst, v111, 0x60u); /*0x1005c5044*/
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c5055*/
                {
                  v104[0] = __dst; /*0x1005c5057*/
                  v104[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c505e*/
                  v101[0] = "codexmate_lib::core::relay::manager"; /*0x1005c506c*/
                  v101[1] = 35; /*0x1005c5073*/
                  v101[2] = "codexmate_lib::core::relay::manager"; /*0x1005c507e*/
                  v101[3] = 35; /*0x1005c5085*/
                  v101[4] = &off_1015344B0; /*0x1005c5097*/
                  log::__private_api::log::h08ccde1c7672bffb(&unk_10122C8AC, v104, 2, v101); /*0x1005c50b8*/
                }
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x1005c50c4*/
              }
              v38 = *((_QWORD *)&v122[0] + 1); /*0x1005c50d0*/
              v66 = *(_QWORD *)&v122[0]; /*0x1005c50d0*/
              v130 = *(__m256i *)&v122[1]; /*0x1005c50de*/
              v131 = v122[3]; /*0x1005c510a*/
              v105 = v122[4]; /*0x1005c5120*/
              v106 = v122[5]; /*0x1005c513c*/
              if ( v121 ) /*0x1005c515b*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v121, 1); /*0x1005c5165*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSummary$GT$::hd46fa8e8db38cf21(&v123); /*0x1005c5171*/
              if ( v66 == 10 ) /*0x1005c517a*/
              {
                v33 = v115; /*0x1005c5180*/
LABEL_100:
                *(_OWORD *)&v114[32] = v131; /*0x1005c5188*/
                *(__m256i *)v114 = v130; /*0x1005c51a2*/
                if ( v38 != 0x8000000000000000LL ) /*0x1005c51d7*/
                {
                  *(_QWORD *)&__dst[0] = v38; /*0x1005c51dd*/
                  *((_QWORD *)&__dst[0] + 1) = *(_QWORD *)v114; /*0x1005c51f2*/
                  __dst[1] = *(_OWORD *)&v114[8]; /*0x1005c51f9*/
                  __dst[2] = *(_OWORD *)&v114[24]; /*0x1005c5215*/
                  *(_QWORD *)&__dst[3] = *(_QWORD *)&v114[40]; /*0x1005c5231*/
                  if ( (*(_QWORD *)&v114[8] || *((_QWORD *)&__dst[2] + 1)) /*0x1005c5259*/
                    && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
                  {
                    *(_QWORD *)v111 = __dst; /*0x1005c526d*/
                    *(_QWORD *)&v111[8] = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hd6a65c85f5e82b00; /*0x1005c527b*/
                    *(_QWORD *)&v111[16] = (char *)&__dst[1] + 8; /*0x1005c5282*/
                    *(_QWORD *)&v111[24] = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hd6a65c85f5e82b00; /*0x1005c5289*/
                    *(_QWORD *)&v111[32] = &__dst[3]; /*0x1005c5290*/
                    *(_QWORD *)&v111[40] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c529e*/
                    *(_QWORD *)&v122[0] = "codexmate_lib::core::relay::manager"; /*0x1005c52ac*/
                    *((_QWORD *)&v122[0] + 1) = 35; /*0x1005c52b3*/
                    *(_QWORD *)&v122[1] = "codexmate_lib::core::relay::manager"; /*0x1005c52be*/
                    *((_QWORD *)&v122[1] + 1) = 35; /*0x1005c52c5*/
                    *(_QWORD *)&v122[2] = &off_1015343A8; /*0x1005c52d7*/
                    log::__private_api::log::h08ccde1c7672bffb(&unk_10122C4C8, v111, 3, v122); /*0x1005c52f8*/
                  }
                  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSummary$GT$::hd46fa8e8db38cf21(__dst); /*0x1005c5304*/
                }
                goto LABEL_106; /*0x1005c5304*/
              }
              *(_OWORD *)&v114[32] = v131; /*0x1005c5721*/
              *(__m256i *)v114 = v130; /*0x1005c572c*/
              v60 = (char *)v134; /*0x1005c575b*/
              *(_OWORD *)((char *)v134 + 88) = v106; /*0x1005c576a*/
              *(_OWORD *)(v60 + 72) = v105; /*0x1005c5780*/
              *(_OWORD *)(v60 + 56) = *(_OWORD *)&v114[32]; /*0x1005c5796*/
              *(_OWORD *)(v60 + 40) = *(_OWORD *)&v114[16]; /*0x1005c57ac*/
              v74 = *(_QWORD *)v114; /*0x1005c57b0*/
              *((_QWORD *)v60 + 4) = *(_QWORD *)&v114[8]; /*0x1005c57be*/
              *((_QWORD *)v60 + 3) = v74; /*0x1005c57c2*/
              *((_QWORD *)v60 + 1) = v66; /*0x1005c57c6*/
              *((_QWORD *)v60 + 2) = v38; /*0x1005c57ca*/
LABEL_130:
              *(_QWORD *)v60 = 0x8000000000000000LL; /*0x1005c57ce*/
              goto LABEL_131; /*0x1005c57d8*/
            }
LABEL_47:
            codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(__dst, v135); /*0x1005c474d*/
            codexmate_lib::core::relay::codex_diagnostic::fix_config_preflight::ha2cf8fd1df33dbc8(v34 + 16, __dst); /*0x1005c4769*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(__dst); /*0x1005c4775*/
            goto LABEL_48; /*0x1005c4775*/
          }
        }
        else
        {
          v35 = codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth::h2f0328bac8ed85a3( /*0x1005c56da*/
                  __dst,
                  v57,
                  0);
          v59 = *(_QWORD *)&__dst[0]; /*0x1005c56df*/
          if ( *(_QWORD *)&__dst[0] == 10 ) /*0x1005c56ea*/
            goto LABEL_46; /*0x1005c56ea*/
        }
        v58 = *((_QWORD *)&__dst[0] + 1); /*0x1005c56f0*/
        qmemcpy(v111, &__dst[1], 0x50u); /*0x1005c570a*/
      }
      v60 = (char *)v134; /*0x1005c4e4d*/
      *((_BYTE *)v134 + 23) = HIBYTE(v58); /*0x1005c4e51*/
      *(_WORD *)(v60 + 21) = HIDWORD(v58) >> 8; /*0x1005c4e5c*/
      *(_DWORD *)(v60 + 17) = v58 >> 8; /*0x1005c4e61*/
      qmemcpy(v60 + 24, v111, 0x50u); /*0x1005c4e75*/
      *((_QWORD *)v60 + 1) = v59; /*0x1005c4e78*/
      v60[16] = v58; /*0x1005c4e7c*/
      goto LABEL_130; /*0x1005c4e80*/
    }
LABEL_226:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x1005c6740*/
  }
  if ( v112 ) /*0x1005c48ce*/
  {
    v44 = v113; /*0x1005c48d0*/
    v45 = v137; /*0x1005c48d7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst); /*0x1005c48dc*/
    v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1005c48eb*/
    if ( !v46 ) /*0x1005c48f3*/
      goto LABEL_226; /*0x1005c48f3*/
    qmemcpy(v46, "writing_config", 14); /*0x1005c4911*/
    *(_QWORD *)&__dst[0] = 14; /*0x1005c4914*/
    *((_QWORD *)&__dst[0] + 1) = v46; /*0x1005c491f*/
    *(_QWORD *)&__dst[1] = 14; /*0x1005c4926*/
    BYTE8(__dst[1]) = v28; /*0x1005c4931*/
    BYTE9(__dst[1]) = v45; /*0x1005c4938*/
    (*(void (__fastcall **)(__int64, _OWORD *))(v44 + 40))(v29, __dst); /*0x1005c4949*/
  }
  v47 = *v135 + 16; /*0x1005c4954*/
  codexmate_lib::core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence::h02b06405852eb9bf( /*0x1005c4962*/
    __dst,
    v47);
  v48 = *(_QWORD *)&__dst[0]; /*0x1005c4967*/
  qmemcpy(v111, (char *)__dst + 8, 0x58u); /*0x1005c4981*/
  if ( *(_QWORD *)&__dst[0] != 10 ) /*0x1005c4988*/
  {
    v56 = v134; /*0x1005c4df0*/
    qmemcpy((char *)v134 + 16, v111, 0x58u); /*0x1005c4e04*/
    v56[1] = v48; /*0x1005c4e07*/
    *v56 = 0x8000000000000000LL; /*0x1005c4e15*/
    goto LABEL_54; /*0x1005c4e18*/
  }
  qmemcpy(v122, v111, 0x58u); /*0x1005c49a4*/
  if ( v122[4] != 0 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005c49c9*/
  {
    *(_QWORD *)v111 = &v122[4]; /*0x1005c49dd*/
    *(_QWORD *)&v111[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c49eb*/
    *(_QWORD *)&v111[16] = (char *)&v122[4] + 8; /*0x1005c49f2*/
    *(_QWORD *)&v111[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c49f9*/
    *(_QWORD *)&__dst[3] = 3; /*0x1005c4a00*/
    *((_QWORD *)&__dst[3] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c4a12*/
    *(_QWORD *)&__dst[4] = 35; /*0x1005c4a19*/
    *(_QWORD *)&__dst[5] = &unk_10122C1F9; /*0x1005c4a2b*/
    *((_QWORD *)&__dst[5] + 1) = v111; /*0x1005c4a32*/
    *(_QWORD *)&__dst[0] = 0; /*0x1005c4a39*/
    *((_QWORD *)&__dst[0] + 1) = "codexmate_lib::core::relay::manager"; /*0x1005c4a44*/
    __dst[1] = 0x23u; /*0x1005c4a4b*/
    *(_QWORD *)&__dst[2] = "src/core/relay/manager.rs"; /*0x1005c4a68*/
    *((_QWORD *)&__dst[2] + 1) = 25; /*0x1005c4a6f*/
    *((_QWORD *)&__dst[4] + 1) = 0x51700000001LL; /*0x1005c4a84*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v117, __dst); /*0x1005c4a99*/
  }
  v49 = (_OWORD *)v47; /*0x1005c4ab1*/
  codexmate_lib::core::relay::codex_thread_visibility::converge_threads_to_provider::h703ab7f3809d3c3f( /*0x1005c4ab4*/
    __dst,
    v47,
    "openai",
    6);
  *(_QWORD *)v111 = *((_QWORD *)&__dst[0] + 1); /*0x1005c4ac7*/
  v50 = *(_QWORD *)&__dst[0]; /*0x1005c4ac7*/
  *(_OWORD *)&v111[8] = __dst[1]; /*0x1005c4ad5*/
  *(_OWORD *)&v111[24] = __dst[2]; /*0x1005c4af1*/
  *(_OWORD *)&v111[40] = __dst[3]; /*0x1005c4b0d*/
  *(_QWORD *)&v111[56] = *(_QWORD *)&__dst[4]; /*0x1005c4b29*/
  if ( *(_QWORD *)&__dst[0] == 10 ) /*0x1005c4b34*/
  {
    v117[0] = *(_OWORD *)v111; /*0x1005c4b48*/
    v117[1] = *(_OWORD *)&v111[16]; /*0x1005c4b5d*/
    v117[2] = *(_OWORD *)&v111[32]; /*0x1005c4b79*/
    v117[3] = *(_OWORD *)&v111[48]; /*0x1005c4b95*/
    if ( *(_QWORD *)&v111[40] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005c4bc1*/
    {
      *(_QWORD *)&__dst[0] = (char *)&v117[2] + 8; /*0x1005c4bdc*/
      *((_QWORD *)&__dst[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c4bea*/
      *(_QWORD *)&__dst[1] = &v117[3]; /*0x1005c4bf1*/
      *((_QWORD *)&__dst[1] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c4bf8*/
      *(_QWORD *)&__dst[2] = (char *)&v117[3] + 8; /*0x1005c4bff*/
      *((_QWORD *)&__dst[2] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c4c06*/
      *(_QWORD *)v111 = "codexmate_lib::core::relay::manager"; /*0x1005c4c14*/
      *(_QWORD *)&v111[8] = 35; /*0x1005c4c1b*/
      *(_QWORD *)&v111[16] = "codexmate_lib::core::relay::manager"; /*0x1005c4c26*/
      *(_QWORD *)&v111[24] = 35; /*0x1005c4c2d*/
      *(_QWORD *)&v111[32] = &off_1015342A0; /*0x1005c4c3f*/
      v49 = __dst; /*0x1005c4c4d*/
      log::__private_api::log::h08ccde1c7672bffb(&unk_10122C25B, __dst, 3, v111); /*0x1005c4c60*/
    }
    v51 = v135[1]; /*0x1005c4c69*/
    v52 = *(_QWORD *)(v51 + 16); /*0x1005c4c71*/
    if ( !v52 ) /*0x1005c4c78*/
      v52 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v51 + 16); /*0x1005c66d8*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c4c7e*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005c4c9e*/
    {
      v54 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v52, v49, v53, a7, a8) ^ 1; /*0x1005c66e5*/
      if ( !*(_BYTE *)(v51 + 24) ) /*0x1005c66ee*/
      {
LABEL_73:
        *(_WORD *)(v51 + 372) = 0; /*0x1005c4cb3*/
        if ( !v54 /*0x1005c6729*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v52, v49, v53, a7, a8) )
        {
          *(_BYTE *)(v51 + 24) = 1; /*0x1005c6736*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v51 + 16), v49, v53, a7, a8); /*0x1005c4cd0*/
        codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(v99, v135); /*0x1005c4ce0*/
        codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(__dst, v135, v99); /*0x1005c4cf7*/
        if ( LODWORD(__dst[0]) == 10 ) /*0x1005c4d03*/
        {
          codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9( /*0x1005c4d14*/
            __dst,
            v135);
          v55 = *(_QWORD *)&__dst[0]; /*0x1005c4d19*/
          if ( *(_QWORD *)&__dst[0] == 10 ) /*0x1005c4d24*/
          {
            if ( (unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::hf9c94452b5c1b9f7(v47) ) /*0x1005c4d2d*/
            {
              codexmate_lib::core::relay::legacy_virtual_auth::cleanup::h59fef3b5d2f283ae(v111, v47); /*0x1005c4d44*/
              if ( *(_DWORD *)v111 == 10 ) /*0x1005c4d50*/
              {
                LOBYTE(v123) = v111[8]; /*0x1005c4d5d*/
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x1005c4d71*/
                {
                  v118 = &v123; /*0x1005c4d7e*/
                  *(_QWORD *)v119 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c4d8c*/
                  *(_QWORD *)&__dst[0] = "codexmate_lib::core::relay::manager"; /*0x1005c4d9a*/
                  *((_QWORD *)&__dst[0] + 1) = 35; /*0x1005c4da1*/
                  *(_QWORD *)&__dst[1] = "codexmate_lib::core::relay::manager"; /*0x1005c4dac*/
                  *((_QWORD *)&__dst[1] + 1) = 35; /*0x1005c4db3*/
                  *(_QWORD *)&__dst[2] = &off_1015342D0; /*0x1005c4dc5*/
                  log::__private_api::log::h08ccde1c7672bffb(&unk_10122C2A9, &v118, 3, __dst); /*0x1005c4de6*/
                }
              }
              else
              {
                qmemcpy(__dst, v111, 0x60u); /*0x1005c5ecd*/
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c5ede*/
                {
                  v123 = (__m256i *)__dst; /*0x1005c5ee0*/
                  v124 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c5eee*/
                  v118 = (__m256i **)"codexmate_lib::core::relay::manager"; /*0x1005c5efc*/
                  *(_QWORD *)v119 = 35; /*0x1005c5f03*/
                  *(_QWORD *)&v119[8] = "codexmate_lib::core::relay::manager"; /*0x1005c5f0e*/
                  *(_QWORD *)&v119[16] = 35; /*0x1005c5f15*/
                  *(_QWORD *)&v119[24] = &off_1015342E8; /*0x1005c5f27*/
                  log::__private_api::log::h08ccde1c7672bffb(&unk_10122C2F1, &v123, 2, &v118); /*0x1005c5f48*/
                }
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x1005c5f54*/
              }
            }
            if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::marker_exists::hea0986d78849e3cb(v47) /*0x1005c5f6f*/
              || (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h2cf0fc5daf7e3c4d(v47) == 1 )
            {
              codexmate_lib::core::relay::router_unlock_auth::cleanup::h242b88d72bef9392(v111, v47); /*0x1005c5f7f*/
              if ( *(_DWORD *)v111 == 10 ) /*0x1005c5f8b*/
              {
                LOBYTE(v123) = v111[8]; /*0x1005c5f98*/
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x1005c5fac*/
                {
                  v118 = &v123; /*0x1005c5fb9*/
                  *(_QWORD *)v119 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c5fc7*/
                  *(_QWORD *)&__dst[0] = "codexmate_lib::core::relay::manager"; /*0x1005c5fd5*/
                  *((_QWORD *)&__dst[0] + 1) = 35; /*0x1005c5fdc*/
                  *(_QWORD *)&__dst[1] = "codexmate_lib::core::relay::manager"; /*0x1005c5fe7*/
                  *((_QWORD *)&__dst[1] + 1) = 35; /*0x1005c5fee*/
                  *(_QWORD *)&__dst[2] = &off_101534300; /*0x1005c6000*/
                  log::__private_api::log::h08ccde1c7672bffb(&unk_10122C326, &v118, 3, __dst); /*0x1005c6021*/
                }
              }
              else
              {
                qmemcpy(__dst, v111, 0x60u); /*0x1005c6041*/
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c6052*/
                {
                  v123 = (__m256i *)__dst; /*0x1005c6054*/
                  v124 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c6062*/
                  v118 = (__m256i **)"codexmate_lib::core::relay::manager"; /*0x1005c6070*/
                  *(_QWORD *)v119 = 35; /*0x1005c6077*/
                  *(_QWORD *)&v119[8] = "codexmate_lib::core::relay::manager"; /*0x1005c6082*/
                  *(_QWORD *)&v119[16] = 35; /*0x1005c6089*/
                  *(_QWORD *)&v119[24] = &off_101534318; /*0x1005c609b*/
                  log::__private_api::log::h08ccde1c7672bffb(&unk_10122C374, &v123, 2, &v118); /*0x1005c60bc*/
                }
                core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x1005c60c8*/
              }
            }
            codexmate_lib::core::relay::config_takeover::restore::h5528967c60fb8f1b(v111, v47); /*0x1005c60d7*/
            if ( *(_DWORD *)v111 == 10 ) /*0x1005c60e3*/
            {
              qmemcpy(__dst, &v111[8], 0x48u); /*0x1005c60ff*/
              if ( (*(_QWORD *)&__dst[1] || *((_QWORD *)&__dst[2] + 1)) /*0x1005c6128*/
                && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
              {
                v118 = (__m256i **)__dst; /*0x1005c613c*/
                *(_QWORD *)v119 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hd6a65c85f5e82b00; /*0x1005c614a*/
                *(_QWORD *)&v119[8] = (char *)&__dst[1] + 8; /*0x1005c6151*/
                *(_QWORD *)&v119[16] = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hd6a65c85f5e82b00; /*0x1005c6158*/
                *(_QWORD *)&v119[24] = &__dst[3]; /*0x1005c615f*/
                *(_QWORD *)&v119[32] = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hd6a65c85f5e82b00; /*0x1005c6166*/
                v123 = (__m256i *)"codexmate_lib::core::relay::manager"; /*0x1005c6174*/
                v124 = 35; /*0x1005c617b*/
                v125 = "codexmate_lib::core::relay::manager"; /*0x1005c6186*/
                v126 = 35; /*0x1005c618d*/
                v127 = &off_101534330; /*0x1005c619f*/
                log::__private_api::log::h08ccde1c7672bffb(&unk_10122C3AF, &v118, 3, &v123); /*0x1005c61c0*/
              }
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..RestoreSummary$GT$::hbdb181ed4c9cc782(__dst); /*0x1005c61cc*/
            }
            else
            {
              qmemcpy(__dst, v111, 0x60u); /*0x1005c61ec*/
              if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c61fd*/
              {
                v123 = (__m256i *)__dst; /*0x1005c61ff*/
                v124 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c620d*/
                v118 = (__m256i **)"codexmate_lib::core::relay::manager"; /*0x1005c621b*/
                *(_QWORD *)v119 = 35; /*0x1005c6222*/
                *(_QWORD *)&v119[8] = "codexmate_lib::core::relay::manager"; /*0x1005c622d*/
                *(_QWORD *)&v119[16] = 35; /*0x1005c6234*/
                *(_QWORD *)&v119[24] = &off_101534348; /*0x1005c6246*/
                log::__private_api::log::h08ccde1c7672bffb(&unk_10122C3F6, &v123, 2, &v118); /*0x1005c6267*/
              }
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x1005c6273*/
            }
            codexmate_lib::core::relay::codex_thread_visibility::patch_relay_thread_instructions::h79e520fc89774102( /*0x1005c6282*/
              &v123,
              v47);
            if ( v124 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005c62a3*/
            {
              *(_QWORD *)v111 = &v124; /*0x1005c62ac*/
              *(_QWORD *)&v111[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c62ba*/
              *(_QWORD *)&__dst[0] = "codexmate_lib::core::relay::manager"; /*0x1005c62c8*/
              *((_QWORD *)&__dst[0] + 1) = 35; /*0x1005c62cf*/
              *(_QWORD *)&__dst[1] = "codexmate_lib::core::relay::manager"; /*0x1005c62da*/
              *((_QWORD *)&__dst[1] + 1) = 35; /*0x1005c62e1*/
              *(_QWORD *)&__dst[2] = &off_101534360; /*0x1005c62f3*/
              log::__private_api::log::h08ccde1c7672bffb(&unk_10122C446, v111, 3, __dst); /*0x1005c6314*/
            }
            v107 = codexmate_lib::core::relay::codex_thread_visibility::fallback_relay_model_threads::h5e0afe17f6800fc8( /*0x1005c632d*/
                     v47,
                     "gpt-5.5launching_codex",
                     7);
            if ( v107 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1005c634b*/
            {
              *(_QWORD *)v111 = &v107; /*0x1005c6354*/
              *(_QWORD *)&v111[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005c6362*/
              *(_QWORD *)&__dst[0] = "codexmate_lib::core::relay::manager"; /*0x1005c6370*/
              *((_QWORD *)&__dst[0] + 1) = 35; /*0x1005c6377*/
              *(_QWORD *)&__dst[1] = "codexmate_lib::core::relay::manager"; /*0x1005c6382*/
              *((_QWORD *)&__dst[1] + 1) = 35; /*0x1005c6389*/
              *(_QWORD *)&__dst[2] = &off_101534378; /*0x1005c639b*/
              log::__private_api::log::h08ccde1c7672bffb(&unk_10122C486, v111, 3, __dst); /*0x1005c63bc*/
            }
            if ( (_BYTE)v120 ) /*0x1005c63c8*/
            {
              codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h0f711059c93687c0( /*0x1005c63dd*/
                v110,
                "launching_codex",
                15);
              codexmate_lib::core::relay::manager::launch_codex_app_warning::h1ea13dd506032be3(&v118); /*0x1005c63e9*/
            }
            else
            {
              codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h0f711059c93687c0( /*0x1005c6403*/
                v110,
                "donetooletagfromlinkvaryMenu",
                4);
              v118 = (__m256i **)0x8000000000000000LL; /*0x1005c6412*/
            }
            codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::hf65da0a57567b4ce(v111, v135); /*0x1005c6424*/
            __dst[22] = *(_OWORD *)v119; /*0x1005c6445*/
            *((_QWORD *)&__dst[21] + 1) = v118; /*0x1005c644c*/
            memcpy(__dst, v111, 0x158u); /*0x1005c6469*/
            v91 = v134; /*0x1005c6473*/
            memcpy(v134, __dst, 0x170u); /*0x1005c647d*/
            v91[368] = 0; /*0x1005c6482*/
          }
          else
          {
            v79 = BYTE8(__dst[0]); /*0x1005c5981*/
            v80 = v134; /*0x1005c5990*/
            memcpy((char *)v134 + 17, (char *)__dst + 9, 0x57u); /*0x1005c599d*/
            v80[1] = v55; /*0x1005c59a2*/
            *((_BYTE *)v80 + 16) = v79; /*0x1005c59a6*/
            *v80 = 0x8000000000000000LL; /*0x1005c59b4*/
          }
        }
        else
        {
          v73 = v134; /*0x1005c56a5*/
          qmemcpy((char *)v134 + 8, __dst, 0x60u); /*0x1005c56b9*/
          *v73 = 0x8000000000000000LL; /*0x1005c56c6*/
        }
        if ( *(_QWORD *)&v117[0] ) /*0x1005c6494*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v117[0] + 1), *(_QWORD *)&v117[0], 1); /*0x1005c64a2*/
        goto LABEL_197; /*0x1005c64a2*/
      }
    }
    else
    {
      v54 = 0; /*0x1005c4ca4*/
      if ( !*(_BYTE *)(v51 + 24) ) /*0x1005c4ca6*/
        goto LABEL_73; /*0x1005c4cad*/
    }
    *(_QWORD *)&__dst[0] = v51 + 16; /*0x1005c66f4*/
    BYTE8(__dst[0]) = v54; /*0x1005c66fb*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c6722*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      __dst,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_1015342B8);
  }
  v61 = v134; /*0x1005c4e8c*/
  *((_QWORD *)v134 + 12) = *((_QWORD *)&__dst[5] + 1); /*0x1005c4e90*/
  v62 = *((_QWORD *)&__dst[4] + 1); /*0x1005c4e94*/
  v61[11] = *(_QWORD *)&__dst[5]; /*0x1005c4ea2*/
  v61[10] = v62; /*0x1005c4ea6*/
  v61[9] = *(_QWORD *)&v111[56]; /*0x1005c4eb1*/
  v61[8] = *(_QWORD *)&v111[48]; /*0x1005c4ebc*/
  v61[7] = *(_QWORD *)&v111[40]; /*0x1005c4ec7*/
  v61[6] = *(_QWORD *)&v111[32]; /*0x1005c4ed2*/
  v61[5] = *(_QWORD *)&v111[24]; /*0x1005c4edd*/
  v61[4] = *(_QWORD *)&v111[16]; /*0x1005c4ee8*/
  v63 = *(_QWORD *)v111; /*0x1005c4eec*/
  v61[3] = *(_QWORD *)&v111[8]; /*0x1005c4efa*/
  v61[2] = v63; /*0x1005c4efe*/
  v61[1] = v50; /*0x1005c4f02*/
  *v61 = 0x8000000000000000LL; /*0x1005c4f10*/
LABEL_197:
  if ( *((_QWORD *)&v122[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&v122[1] + 1) ) /*0x1005c64c0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v122[2], *((_QWORD *)&v122[1] + 1), 1); /*0x1005c64ce*/
  v92 = *((_QWORD *)&v122[0] + 1); /*0x1005c64d3*/
  v93 = *(_QWORD *)&v122[1]; /*0x1005c64da*/
  if ( *(_QWORD *)&v122[1] ) /*0x1005c64e4*/
  {
    v94 = (_QWORD *)(*((_QWORD *)&v122[0] + 1) + 8LL); /*0x1005c64e6*/
    do /*0x1005c64f7*/
    {
      v95 = *(v94 - 1); /*0x1005c64f9*/
      if ( v95 ) /*0x1005c6500*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v94, v95, 1); /*0x1005c650a*/
      v94 += 3; /*0x1005c64f0*/
      --v93; /*0x1005c64f4*/
    }
    while ( v93 ); /*0x1005c64f7*/
  }
  if ( *(_QWORD *)&v122[0] ) /*0x1005c651b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, 24LL * *(_QWORD *)&v122[0], 8); /*0x1005c652d*/
LABEL_54:
  if ( v100[0] != 0x8000000000000000LL ) /*0x1005c484c*/
  {
    v40 = (const char **)v100; /*0x1005c4852*/
LABEL_132:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverSummary$GT$::hd46fa8e8db38cf21(v40); /*0x1005c57e2*/
  }
  return v134; /*0x1005c57eb*/
}
