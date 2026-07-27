// __ZN13codexmate_lib4core5voice7runtime15restore_runtime @ 0x10066faf0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::restore_runtime::h12992ea32117f69a(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r12
  __int64 v10; // rdx
  _OWORD *v11; // r14
  __int64 v12; // r13
  char v13; // bl
  __int64 v14; // r12
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  __int128 v19; // kr00_16
  unsigned __int64 *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r15
  char v23; // r12
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // rax
  void *v27; // r12
  __int64 (__fastcall *v28)(); // rsi
  size_t v29; // rdx
  __int64 v30; // rax
  const char *v31; // rdi
  __int64 v32; // rsi
  _QWORD *v33; // rax
  _QWORD *v34; // r12
  __int64 v35; // r15
  __int64 v36; // rax
  void *v37; // r12
  __int64 (__fastcall *v38)(); // rsi
  size_t v39; // rdx
  __int64 v40; // rax
  const char *v41; // rdi
  __int64 v42; // rsi
  _QWORD *v43; // rax
  _QWORD *v44; // r12
  __int64 v45; // rdi
  __int64 v46; // r15
  __int64 v47; // rax
  void *v48; // r12
  __int64 (__fastcall *v49)(); // rsi
  size_t v50; // rdx
  __int64 v51; // rax
  const char *v52; // rdi
  __int64 v53; // rsi
  _QWORD *v54; // rax
  _QWORD *v55; // r12
  __int64 v56; // rbx
  __int64 v57; // r13
  __int64 v58; // rdi
  __int64 v59; // rdx
  char v60; // r12
  char v61; // al
  __int64 v62; // rdx
  char v63; // r9
  __int128 v64; // kr10_16
  char v65; // r12
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rsi
  _OWORD *v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rsi
  __int64 v75; // rsi
  __int64 v76; // rsi
  __int64 v77; // rsi
  __int64 v78; // rsi
  char v79; // cl
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rsi
  __int128 *v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rsi
  _OWORD *v87; // rax
  _OWORD **v89; // [rsp+8h] [rbp-788h] BYREF
  __int64 (__fastcall **v90)(); // [rsp+10h] [rbp-780h]
  __int64 v91; // [rsp+18h] [rbp-778h]
  __int128 v92; // [rsp+238h] [rbp-558h]
  __int128 v93; // [rsp+2F0h] [rbp-4A0h]
  __int128 v94; // [rsp+300h] [rbp-490h]
  __int64 v95; // [rsp+310h] [rbp-480h]
  _QWORD v96[3]; // [rsp+318h] [rbp-478h] BYREF
  __int64 v97; // [rsp+330h] [rbp-460h]
  _OWORD __dst[23]; // [rsp+338h] [rbp-458h] BYREF
  _OWORD *v99; // [rsp+4A8h] [rbp-2E8h] BYREF
  _QWORD v100[52]; // [rsp+4B0h] [rbp-2E0h] BYREF
  __int128 v101; // [rsp+650h] [rbp-140h] BYREF
  __int64 v102; // [rsp+660h] [rbp-130h]
  _OWORD v103[6]; // [rsp+668h] [rbp-128h] BYREF
  unsigned __int64 v104; // [rsp+6C8h] [rbp-C8h] BYREF
  _DWORD v105[2]; // [rsp+6D0h] [rbp-C0h]
  _OWORD v106[6]; // [rsp+6D8h] [rbp-B8h] BYREF
  _QWORD *v107; // [rsp+738h] [rbp-58h]
  __int128 v108; // [rsp+740h] [rbp-50h] BYREF
  __int64 v109; // [rsp+750h] [rbp-40h]
  __int64 v110; // [rsp+758h] [rbp-38h]
  _BYTE v111[41]; // [rsp+767h] [rbp-29h] BYREF

  v4 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x10066fb1c*/
  if ( !v4 ) /*0x10066fb24*/
  {
    v99 = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x10066fc5e*/
    v100[0] = 76; /*0x10066fc65*/
    v89 = &v99; /*0x10066fc77*/
    v90 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10066fc85*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x10066fca1*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v89,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v5 = v4; /*0x10066fb2a*/
  v6 = *v4; /*0x10066fb2d*/
  if ( !*v4 ) /*0x10066fb2d*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4); /*0x10066fcae*/
  v110 = a1; /*0x10066fb39*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x10066fb3d*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8) ^ 1; /*0x10066fcbe*/
    if ( *((_BYTE *)v5 + 8) ) /*0x10066fccc*/
      goto LABEL_6; /*0x10066fcd3*/
LABEL_12:
    _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178( /*0x10066fcd9*/
      &v89,
      v5 + 2);
    v18 = v9 == 0; /*0x10066fcec*/
    v14 = v110; /*0x10066fcef*/
    if ( v18 /*0x100670780*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v89, v5 + 2, v16, v17) )
    {
      *((_BYTE *)v5 + 8) = 1; /*0x10067078d*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x10066fd04*/
    codexmate_lib::core::voice::runtime::read_runtime_file::h7a5982944da78c50(&v99); /*0x10066fd17*/
    v104 = 0x8000000000000000LL; /*0x10066fd2e*/
    if ( v99 == (_OWORD *)0x8000000000000000LL ) /*0x10066fd38*/
    {
      qmemcpy(v106, v100, sizeof(v106)); /*0x10066fd50*/
      *(_QWORD *)&v108 = 0; /*0x10066fd53*/
      *((_QWORD *)&v108 + 1) = 1; /*0x10066fd5b*/
      v109 = 0; /*0x10066fd63*/
      *(_QWORD *)&v103[1] = 1610612768; /*0x10066fd6b*/
      *(_QWORD *)&v103[0] = &v108; /*0x10066fd7a*/
      *((_QWORD *)&v103[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10066fd88*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10066fd99*/
                              v106,
                              v103) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006707b5*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          v111,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v101 = v108; /*0x10066fdae*/
      v102 = v109; /*0x10066fdc0*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v100); /*0x10066fdca*/
      v19 = v101; /*0x10066fddd*/
      v94 = v101; /*0x10066fde4*/
      v95 = v102; /*0x10066fdf2*/
      *(_QWORD *)(v14 + 16) = v102; /*0x10066fdf9*/
      *(_OWORD *)v14 = v19; /*0x10066fe03*/
      goto LABEL_120; /*0x10066fe07*/
    }
    v100[51] = v100[2]; /*0x10066fe17*/
    v100[50] = v100[1]; /*0x10066fe25*/
    v100[49] = v100[0]; /*0x10066fe2c*/
    v20 = &v100[3]; /*0x10066fe33*/
    memcpy(__dst, &v100[3], sizeof(__dst)); /*0x10066fe3f*/
    v95 = v100[2]; /*0x10066fe4b*/
    v96[1] = v100[0]; /*0x10066fe60*/
    v96[2] = v100[1]; /*0x10066fe67*/
    v97 = v100[2]; /*0x10066fe6e*/
    v96[0] = v99; /*0x10066fe75*/
    v21 = *(_QWORD *)&__dst[20]; /*0x10066fe7c*/
    if ( *(_QWORD *)&__dst[20] /*0x10066fe99*/
      && (v22 = *((_QWORD *)&__dst[20] + 1),
          v20 = *((unsigned __int64 **)&__dst[20] + 1),
          !(unsigned __int8)codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d(
                              *(_QWORD *)&__dst[20],
                              *((_QWORD *)&__dst[20] + 1))) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v20); /*0x10066feb3*/
      if ( v22 ) /*0x10066febb*/
      {
        v25 = 129; /*0x10066febd*/
        v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(129, 1); /*0x10066fecd*/
        if ( !v26 ) /*0x10066fed5*/
          goto LABEL_128; /*0x10066fed5*/
        v27 = (void *)v26; /*0x10066fedb*/
        v28 = anon_4776471024d1e9bb78f2861cb2b51e1e_542; /*0x10066fede*/
        v29 = 129; /*0x10066fee5*/
      }
      else
      {
        v25 = 285; /*0x10066feec*/
        v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(285, 1); /*0x10066fefc*/
        if ( !v30 ) /*0x10066ff04*/
          goto LABEL_128; /*0x10066ff04*/
        v27 = (void *)v30; /*0x10066ff0a*/
        v28 = (__int64 (__fastcall *)())&anon_4776471024d1e9bb78f2861cb2b51e1e_541; /*0x10066ff0d*/
        v29 = 285; /*0x10066ff14*/
      }
      memcpy(v27, v28, v29); /*0x10066ff1c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v25, 1); /*0x10066ff3a*/
      v99 = &__dst[20]; /*0x10066ff3f*/
      v100[0] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x10066ff4d*/
      v100[1] = (char *)&__dst[20] + 8; /*0x10066ff54*/
      v100[2] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10066ff62*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v108, &unk_1017C30B9, &v99); /*0x10066ff7b*/
      v31 = "voicesidecar_exit_stale"; /*0x10066ff80*/
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x10066ff9c*/
        "voicesidecar_exit_stale",
        5,
        "trigger_binding_sanitizedwater1/AiMaMi.app/Contents/Resources/resources/voice/voice_sidecarkeepalive",
        25,
        &v108);
      *(_QWORD *)&__dst[20] = 0; /*0x10066ffa1*/
      v32 = *((_QWORD *)&__dst[2] + 1); /*0x10066ffac*/
      if ( *((_QWORD *)&__dst[2] + 1) ) /*0x10066ffb6*/
      {
        v31 = *(const char **)&__dst[3]; /*0x10066ffb8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[3], *((_QWORD *)&__dst[2] + 1), 1); /*0x10066ffc4*/
      }
      *((_QWORD *)&__dst[2] + 1) = 0; /*0x10066ffc9*/
      __dst[3] = 1u; /*0x10066ffd4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, v32); /*0x10066ffea*/
      v25 = 8; /*0x10066ffef*/
      v33 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x10066ffff*/
      if ( !v33 ) /*0x100670007*/
        goto LABEL_128; /*0x100670007*/
      v34 = v33; /*0x10067000d*/
      *v33 = 0x7265696669646F6DLL; /*0x10067001a*/
      v20 = *(unsigned __int64 **)&__dst[4]; /*0x10067001e*/
      if ( *(_QWORD *)&__dst[4] ) /*0x100670028*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[4] + 1), *(_QWORD *)&__dst[4], 1); /*0x100670036*/
      *(_QWORD *)&__dst[4] = 8; /*0x10067003b*/
      *((_QWORD *)&__dst[4] + 1) = v34; /*0x100670046*/
      *(_QWORD *)&__dst[5] = 8; /*0x10067004d*/
      *((_QWORD *)&__dst[20] + 1) = 0; /*0x100670058*/
      v23 = 1; /*0x100670063*/
      v24 = *(_QWORD *)&__dst[21]; /*0x100670066*/
      if ( !*(_QWORD *)&__dst[21] ) /*0x100670070*/
        goto LABEL_44; /*0x100670070*/
    }
    else
    {
      v23 = 0; /*0x10066fe9b*/
      v24 = *(_QWORD *)&__dst[21]; /*0x10066fe9e*/
      if ( !*(_QWORD *)&__dst[21] ) /*0x10066fea8*/
        goto LABEL_44; /*0x10066fea8*/
    }
    v35 = *((_QWORD *)&__dst[21] + 1); /*0x100670076*/
    v20 = *((unsigned __int64 **)&__dst[21] + 1); /*0x10067007d*/
    if ( !(unsigned __int8)codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d( /*0x100670080*/
                             v24,
                             *((_QWORD *)&__dst[21] + 1)) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v20); /*0x10067008d*/
      if ( v35 ) /*0x100670095*/
      {
        v25 = 129; /*0x100670097*/
        v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(129, 1); /*0x1006700a7*/
        if ( !v36 ) /*0x1006700af*/
          goto LABEL_128; /*0x1006700af*/
        v37 = (void *)v36; /*0x1006700b5*/
        v38 = anon_4776471024d1e9bb78f2861cb2b51e1e_542; /*0x1006700b8*/
        v39 = 129; /*0x1006700bf*/
      }
      else
      {
        v25 = 285; /*0x1006700c6*/
        v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(285, 1); /*0x1006700d6*/
        if ( !v40 ) /*0x1006700de*/
          goto LABEL_128; /*0x1006700de*/
        v37 = (void *)v40; /*0x1006700e4*/
        v38 = (__int64 (__fastcall *)())&anon_4776471024d1e9bb78f2861cb2b51e1e_541; /*0x1006700e7*/
        v39 = 285; /*0x1006700ee*/
      }
      memcpy(v37, v38, v39); /*0x1006700f6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v25, 1); /*0x100670114*/
      v99 = &__dst[21]; /*0x100670119*/
      v100[0] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100670127*/
      v100[1] = (char *)&__dst[21] + 8; /*0x10067012e*/
      v100[2] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10067013c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v103, &unk_1017C30D7, &v99); /*0x100670158*/
      v41 = "voicesidecar_exit_stale"; /*0x10067015d*/
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x10067017c*/
        "voicesidecar_exit_stale",
        5,
        "trigger_binding_sanitizedwater1/AiMaMi.app/Contents/Resources/resources/voice/voice_sidecarkeepalive",
        25,
        v103);
      *(_QWORD *)&__dst[21] = 0; /*0x100670181*/
      v42 = *((_QWORD *)&__dst[5] + 1); /*0x10067018c*/
      if ( *((_QWORD *)&__dst[5] + 1) ) /*0x100670196*/
      {
        v41 = *(const char **)&__dst[6]; /*0x100670198*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[6], *((_QWORD *)&__dst[5] + 1), 1); /*0x1006701a4*/
      }
      *((_QWORD *)&__dst[5] + 1) = 0; /*0x1006701a9*/
      __dst[6] = 1u; /*0x1006701b4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v42); /*0x1006701ca*/
      v25 = 8; /*0x1006701cf*/
      v43 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1006701df*/
      if ( !v43 ) /*0x1006701e7*/
        goto LABEL_128; /*0x1006701e7*/
      v44 = v43; /*0x1006701ed*/
      *v43 = 0x7265696669646F6DLL; /*0x1006701fa*/
      v20 = *(unsigned __int64 **)&__dst[7]; /*0x1006701fe*/
      if ( *(_QWORD *)&__dst[7] ) /*0x100670208*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[7] + 1), *(_QWORD *)&__dst[7], 1); /*0x100670216*/
      *(_QWORD *)&__dst[7] = 8; /*0x10067021b*/
      *((_QWORD *)&__dst[7] + 1) = v44; /*0x100670226*/
      *(_QWORD *)&__dst[8] = 8; /*0x10067022d*/
      *((_QWORD *)&__dst[21] + 1) = 0; /*0x100670238*/
      v23 = 1; /*0x100670243*/
    }
LABEL_44:
    v45 = *(_QWORD *)&__dst[19]; /*0x100670246*/
    if ( !*(_QWORD *)&__dst[19] ) /*0x100670250*/
      goto LABEL_57; /*0x100670250*/
    v46 = *((_QWORD *)&__dst[19] + 1); /*0x100670256*/
    v20 = *((unsigned __int64 **)&__dst[19] + 1); /*0x10067025d*/
    if ( (unsigned __int8)codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d( /*0x100670260*/
                            *(_QWORD *)&__dst[19],
                            *((_QWORD *)&__dst[19] + 1)) )
      goto LABEL_57; /*0x100670267*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v20); /*0x10067026d*/
    if ( v46 ) /*0x100670275*/
    {
      v25 = 129; /*0x100670277*/
      v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(129, 1); /*0x100670287*/
      if ( !v47 ) /*0x10067028f*/
        goto LABEL_128; /*0x10067028f*/
      v48 = (void *)v47; /*0x100670295*/
      v49 = anon_4776471024d1e9bb78f2861cb2b51e1e_542; /*0x100670298*/
      v50 = 129; /*0x10067029f*/
    }
    else
    {
      v25 = 285; /*0x1006702a6*/
      v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(285, 1); /*0x1006702b6*/
      if ( !v51 ) /*0x1006702be*/
        goto LABEL_128; /*0x1006702be*/
      v48 = (void *)v51; /*0x1006702c4*/
      v49 = (__int64 (__fastcall *)())&anon_4776471024d1e9bb78f2861cb2b51e1e_541; /*0x1006702c7*/
      v50 = 285; /*0x1006702ce*/
    }
    memcpy(v48, v49, v50); /*0x1006702d6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v25, 1); /*0x1006702f4*/
    v99 = &__dst[19]; /*0x1006702f9*/
    v100[0] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100670307*/
    v100[1] = (char *)&__dst[19] + 8; /*0x10067030e*/
    v100[2] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10067031c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v106, &unk_1017C30F7, &v99); /*0x100670338*/
    v52 = "voicesidecar_exit_stale"; /*0x10067033d*/
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x10067035c*/
      "voicesidecar_exit_stale",
      5,
      "trigger_binding_sanitizedwater1/AiMaMi.app/Contents/Resources/resources/voice/voice_sidecarkeepalive",
      25,
      v106);
    *(_QWORD *)&__dst[19] = 0; /*0x100670361*/
    v53 = v97; /*0x10067036c*/
    if ( v97 ) /*0x100670376*/
    {
      v52 = *(const char **)&__dst[0]; /*0x100670378*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[0], v97, 1); /*0x100670384*/
    }
    v97 = 0; /*0x100670389*/
    __dst[0] = 1u; /*0x100670394*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52, v53); /*0x1006703aa*/
    v25 = 8; /*0x1006703af*/
    v54 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1006703bf*/
    if ( v54 )
    {
      v55 = v54; /*0x1006703cd*/
      *v54 = 0x7265696669646F6DLL; /*0x1006703da*/
      v20 = *(unsigned __int64 **)&__dst[1]; /*0x1006703de*/
      if ( *(_QWORD *)&__dst[1] ) /*0x1006703e8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[1] + 1), *(_QWORD *)&__dst[1], 1); /*0x1006703f6*/
      *(_QWORD *)&__dst[1] = 8; /*0x1006703fb*/
      *((_QWORD *)&__dst[1] + 1) = v55; /*0x100670406*/
      *(_QWORD *)&__dst[2] = 8; /*0x10067040d*/
      *((_QWORD *)&__dst[19] + 1) = 0; /*0x100670418*/
      v23 = 1; /*0x100670423*/
LABEL_57:
      v56 = *((_QWORD *)&__dst[17] + 1); /*0x100670426*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::retain::h26b6e216aeaa91e0(&__dst[16]); /*0x100670434*/
      if ( (*((_QWORD *)&__dst[17] + 1) != v56) | (unsigned __int8)v23 ) /*0x100670443*/
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10067045a*/
        {
          v100[5] = 2; /*0x100670460*/
          v100[6] = "codexmate_lib::core::voice::runtimestandby"; /*0x100670472*/
          v100[7] = 35; /*0x100670479*/
          v100[9] = "[AiMaMi][voice] unsafe trigger bindings sanitized from voice-runtime.json (details in app events)quit\n"; /*0x10067048b*/
          v100[10] = 195; /*0x100670492*/
          v99 = nullptr; /*0x10067049d*/
          v100[0] = "codexmate_lib::core::voice::runtimestandby"; /*0x1006704a8*/
          v100[1] = 35; /*0x1006704af*/
          v100[2] = 0; /*0x1006704ba*/
          v100[3] = "src/core/voice/runtime/mod.rs"; /*0x1006704cc*/
          v100[4] = 29; /*0x1006704d3*/
          v100[8] = 0x27B00000001LL; /*0x1006704e8*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v111, &v99); /*0x1006704fa*/
        }
        v20 = (unsigned __int64 *)&v89; /*0x100670506*/
        codexmate_lib::core::voice::runtime::write_runtime_file::hbc4e21afe493dd65(v103, &v89, v96); /*0x100670514*/
        if ( LODWORD(v103[0]) != 11 ) /*0x100670520*/
        {
          qmemcpy(v106, v103, sizeof(v106)); /*0x10067053c*/
          v20 = &v104; /*0x10067053c*/
          if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100670546*/
          {
            *(_QWORD *)&v108 = v106; /*0x10067054c*/
            *((_QWORD *)&v108 + 1) = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100670557*/
            v100[5] = 2; /*0x10067055b*/
            v100[6] = "codexmate_lib::core::voice::runtimestandby"; /*0x10067056d*/
            v100[7] = 35; /*0x100670574*/
            v100[9] = &loc_1017C2E71; /*0x100670586*/
            v100[10] = &v108; /*0x100670591*/
            v99 = nullptr; /*0x100670598*/
            v100[0] = "codexmate_lib::core::voice::runtimestandby"; /*0x1006705a3*/
            v100[1] = 35; /*0x1006705aa*/
            v100[2] = 0; /*0x1006705b5*/
            v100[3] = "src/core/voice/runtime/mod.rs"; /*0x1006705c7*/
            v100[4] = 29; /*0x1006705ce*/
            v100[8] = 0x27F00000001LL; /*0x1006705e3*/
            v20 = (unsigned __int64 *)&v99; /*0x1006705ee*/
            _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v111, &v99); /*0x1006705f5*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v106); /*0x100670601*/
        }
      }
      v57 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x10067060e*/
      v107 = (_QWORD *)(v57 + 32); /*0x100670615*/
      v58 = *(_QWORD *)(v57 + 32); /*0x100670619*/
      if ( !v58 ) /*0x100670620*/
        v58 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v107); /*0x1006707c8*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v58); /*0x100670626*/
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      {
        v60 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v58, v20, v59, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x1006707d8*/
        if ( *(_BYTE *)(v57 + 40) ) /*0x1006707e3*/
          goto LABEL_68; /*0x1006707ea*/
      }
      else
      {
        v60 = 0; /*0x100670648*/
        if ( *(_BYTE *)(v57 + 40) )
        {
LABEL_68:
          *(_QWORD *)&v106[0] = 0; /*0x100670658*/
          *((_QWORD *)&v106[0] + 1) = 1; /*0x100670663*/
          *(_QWORD *)&v106[1] = 0; /*0x10067066e*/
          v100[1] = 1610612768; /*0x100670679*/
          v99 = v106; /*0x10067068b*/
          v100[0] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100670699*/
          v61 = _$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                  "poisoned lock: another task failed inside",
                  41,
                  &v99);
          v63 = v60; /*0x1006706b8*/
          if ( v61 ) /*0x1006706bd*/
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100670f7f*/
              &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
              55,
              v111,
              &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
              &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
          v64 = v106[0]; /*0x1006706ca*/
          v65 = v106[1]; /*0x1006706d1*/
          LODWORD(v103[0]) = *(_DWORD *)((char *)&v106[1] + 1); /*0x1006706df*/
          *(_DWORD *)((char *)v103 + 3) = DWORD1(v106[1]); /*0x1006706eb*/
          if ( !v63
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   "poisoned lock: another task failed inside",
                                   41,
                                   v62,
                                   0x7FFFFFFFFFFFFFFFLL) )
          {
            *(_BYTE *)(v57 + 40) = 1; /*0x100670fb8*/
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v107); /*0x100670713*/
          v66 = v103[0]; /*0x100670718*/
          v67 = v110; /*0x100670724*/
          *(_DWORD *)(v110 + 20) = *(_DWORD *)((char *)v103 + 3); /*0x100670728*/
          *(_DWORD *)(v67 + 17) = v66; /*0x10067072b*/
          *(_OWORD *)v67 = v64; /*0x10067072e*/
          *(_BYTE *)(v67 + 16) = v65; /*0x100670735*/
          v14 = v67; /*0x100670739*/
          goto LABEL_119; /*0x10067073c*/
        }
      }
      *(_BYTE *)(v57 + 900) = 0; /*0x1006707f0*/
      codexmate_lib::core::voice::runtime::active_trigger_from_file::h358f7a2569fbbfb7(&v99, v96); /*0x100670806*/
      *(_BYTE *)(v57 + 898) = BYTE6(__dst[22]); /*0x100670812*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v106, v96); /*0x100670827*/
      v68 = *(_QWORD *)(v57 + 88); /*0x100670830*/
      if ( v68 ) /*0x100670837*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 96), v68, 1); /*0x100670842*/
      *(_QWORD *)(v57 + 104) = *(_QWORD *)&v106[1]; /*0x10067084e*/
      *(_OWORD *)(v57 + 88) = v106[0]; /*0x100670864*/
      *(_QWORD *)(v57 + 824) = v100[5]; /*0x10067086e*/
      v69 = *(_QWORD *)(v57 + 112); /*0x100670879*/
      if ( v69 ) /*0x100670880*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 120), v69, 1); /*0x10067088b*/
      *(_QWORD *)(v57 + 128) = v100[1]; /*0x100670897*/
      v70 = v99; /*0x10067089b*/
      *(_QWORD *)(v57 + 120) = v100[0]; /*0x1006708a9*/
      *(_QWORD *)(v57 + 112) = v70; /*0x1006708ad*/
      v71 = *(_QWORD *)(v57 + 136); /*0x1006708be*/
      if ( v71 ) /*0x1006708c8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 144), v71, 1); /*0x1006708d6*/
      *(_QWORD *)(v57 + 152) = v100[4]; /*0x1006708df*/
      v72 = v100[2]; /*0x1006708e3*/
      *(_QWORD *)(v57 + 144) = v100[3]; /*0x1006708ea*/
      *(_QWORD *)(v57 + 136) = v72; /*0x1006708ee*/
      *(_BYTE *)(v57 + 899) = BYTE7(__dst[22]); /*0x1006708f8*/
      *(_QWORD *)(v57 + 832) = v100[6]; /*0x100670906*/
      *(_QWORD *)(v57 + 840) = *(_QWORD *)&__dst[20]; /*0x100670914*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100670929*/
        v106,
        (char *)&__dst[2] + 8);
      v73 = *(_QWORD *)(v57 + 160); /*0x100670935*/
      if ( v73 ) /*0x10067093f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 168), v73, 1); /*0x10067094d*/
      *(_QWORD *)(v57 + 176) = *(_QWORD *)&v106[1]; /*0x100670959*/
      *(_OWORD *)(v57 + 160) = v106[0]; /*0x10067096f*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v106, &__dst[4]); /*0x100670980*/
      v74 = *(_QWORD *)(v57 + 184); /*0x10067098c*/
      if ( v74 ) /*0x100670996*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 192), v74, 1); /*0x1006709a4*/
      *(_QWORD *)(v57 + 200) = *(_QWORD *)&v106[1]; /*0x1006709b0*/
      *(_OWORD *)(v57 + 184) = v106[0]; /*0x1006709c6*/
      *(_OWORD *)(v57 + 848) = *(_OWORD *)((char *)&__dst[20] + 8); /*0x1006709d0*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x1006709e6*/
        v106,
        (char *)&__dst[5] + 8);
      v75 = *(_QWORD *)(v57 + 208); /*0x1006709f2*/
      if ( v75 ) /*0x1006709fc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 216), v75, 1); /*0x100670a0a*/
      *(_QWORD *)(v57 + 224) = *(_QWORD *)&v106[1]; /*0x100670a16*/
      *(_OWORD *)(v57 + 208) = v106[0]; /*0x100670a2c*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v106, &__dst[7]); /*0x100670a3d*/
      v76 = *(_QWORD *)(v57 + 232); /*0x100670a49*/
      if ( v76 ) /*0x100670a53*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 240), v76, 1); /*0x100670a61*/
      *(_QWORD *)(v57 + 248) = *(_QWORD *)&v106[1]; /*0x100670a6d*/
      *(_OWORD *)(v57 + 232) = v106[0]; /*0x100670a83*/
      *(_QWORD *)(v57 + 864) = *((_QWORD *)&__dst[21] + 1); /*0x100670a8d*/
      *(_BYTE *)(v57 + 901) = BYTE9(__dst[22]); /*0x100670a9b*/
      codexmate_lib::core::voice::runtime::normalize_recognition_language::h7e55ddc3ae8f6e78( /*0x100670ab7*/
        v106,
        *(_QWORD *)&__dst[9],
        *((_QWORD *)&__dst[9] + 1));
      v77 = *(_QWORD *)(v57 + 256); /*0x100670ac3*/
      if ( v77 ) /*0x100670acd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 264), v77, 1); /*0x100670adb*/
      *(_QWORD *)(v57 + 272) = *(_QWORD *)&v106[1]; /*0x100670ae7*/
      *(_OWORD *)(v57 + 256) = v106[0]; /*0x100670afd*/
      *(_BYTE *)(v57 + 903) = BYTE10(__dst[22]); /*0x100670b07*/
      codexmate_lib::core::voice::runtime::normalize_processing_mode_id::hecc8c93fa1ac0fb0( /*0x100670b23*/
        v106,
        *((_QWORD *)&__dst[10] + 1),
        *(_QWORD *)&__dst[11]);
      v78 = *(_QWORD *)(v57 + 280); /*0x100670b2f*/
      if ( v78 ) /*0x100670b39*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 288), v78, 1); /*0x100670b47*/
      *(_QWORD *)(v57 + 296) = *(_QWORD *)&v106[1]; /*0x100670b53*/
      *(_OWORD *)(v57 + 280) = v106[0]; /*0x100670b69*/
      v93 = __dst[18]; /*0x100670b73*/
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h08697cf7f9d0479a( /*0x100670b88*/
        v106,
        &__dst[16]);
      v106[2] = v93; /*0x100670b94*/
      v103[0] = v106[0]; /*0x100670ba9*/
      v103[1] = v106[1]; /*0x100670bbe*/
      v103[2] = v93; /*0x100670be1*/
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd743cfc519763180(v57 + 776); /*0x100670bf9*/
      *(_OWORD *)(v57 + 808) = v103[2]; /*0x100670c10*/
      *(_OWORD *)(v57 + 792) = v103[1]; /*0x100670c26*/
      *(_OWORD *)(v57 + 776) = v103[0]; /*0x100670c3c*/
      *(_WORD *)(v57 + 896) = WORD2(__dst[22]); /*0x100670c46*/
      if ( *(_QWORD *)&__dst[14] == 10 ) /*0x100670c60*/
      {
        if ( anon_b0ee9adff4519c22b647af231a5a39fa_1128 ^ **((_QWORD **)&__dst[13] + 1) /*0x100670cc5*/
           | *(_WORD *)(*((_QWORD *)&__dst[13] + 1) + 8LL) ^ 0x3170u )
        {
          v80 = _byteswap_uint64(**((_QWORD **)&__dst[13] + 1)); /*0x100670ccd*/
          v81 = _byteswap_uint64(anon_b0ee9adff4519c22b647af231a5a39fa_1130); /*0x100670cd7*/
          if ( v80 != v81 /*0x100670cfd*/
            || (v80 = (unsigned __int16)__ROL2__(*(_WORD *)(*((_QWORD *)&__dst[13] + 1) + 8LL), 8),
                v81 = (unsigned __int16)__ROL2__(12912, 8),
                v82 = 0,
                v80 != (unsigned __int16)v81) )
          {
            v82 = 2 * (v80 >= v81) - 1; /*0x100670d07*/
          }
          v79 = 2 - (v82 == 0); /*0x100670d10*/
          goto LABEL_107; /*0x100670d13*/
        }
      }
      else
      {
        v79 = 2; /*0x100670c62*/
        if ( *(_QWORD *)&__dst[14] != 6 ) /*0x100670c68*/
        {
LABEL_107:
          *(_BYTE *)(v57 + 902) = v79; /*0x100670d17*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100670d2c*/
            v106,
            (char *)&__dst[14] + 8);
          v83 = *(_QWORD *)(v57 + 568); /*0x100670d38*/
          if ( v83 ) /*0x100670d42*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v57 + 576), v83, 1); /*0x100670d50*/
          *(_QWORD *)(v57 + 584) = *(_QWORD *)&v106[1]; /*0x100670d5c*/
          *(_OWORD *)(v57 + 568) = v106[0]; /*0x100670d72*/
          *(_BYTE *)(v57 + 904) = BYTE11(__dst[22]); /*0x100670d7c*/
          v101 = v92; /*0x100670d91*/
          *(_QWORD *)&v103[0] = 0; /*0x100670d9f*/
          *((_QWORD *)&v103[0] + 1) = 1; /*0x100670daa*/
          *(_QWORD *)&v103[1] = 0; /*0x100670db5*/
          *(_QWORD *)&v106[1] = 1610612768; /*0x100670dc0*/
          *(_QWORD *)&v106[0] = v103; /*0x100670dd2*/
          *((_QWORD *)&v106[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100670de0*/
          v84 = &v101; /*0x100670de7*/
          if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x100670df5*/
                                  &v101,
                                  v106) )
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100670fa4*/
              &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
              55,
              v111,
              &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
              &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
          v108 = v103[0]; /*0x100670e10*/
          v109 = *(_QWORD *)&v103[1]; /*0x100670e1f*/
          v86 = *(_QWORD *)(v57 + 544); /*0x100670e2d*/
          if ( v86 ) /*0x100670e37*/
          {
            v84 = *(__int128 **)(v57 + 552); /*0x100670e39*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v86, 1); /*0x100670e45*/
          }
          *(_QWORD *)(v57 + 560) = v109; /*0x100670e4e*/
          *(_OWORD *)(v57 + 544) = v108; /*0x100670e5e*/
          if ( !v60 /*0x100670fc2*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   v84,
                                   v86,
                                   v85,
                                   0x7FFFFFFFFFFFFFFFLL) )
          {
            *(_BYTE *)(v57 + 40) = 1; /*0x100670fcf*/
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v107); /*0x100670e8a*/
          codexmate_lib::core::voice::runtime::sync_permissions_internal::h1300a66e8cd539dc(&v99, a2); /*0x100670e99*/
          if ( v99 == (_OWORD *)v104 ) /*0x100670eac*/
          {
            codexmate_lib::core::voice::runtime::restart_trigger_listener_internal::hbf9d14de69187c5e((__int64)&v99, a2); /*0x100670eb8*/
            if ( v99 == (_OWORD *)v104 ) /*0x100670ecb*/
            {
              codexmate_lib::core::voice::runtime::ensure_standby_sidecar::h2b73fed91d90f079(a2); /*0x100670ed0*/
              codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)&v99, a2); /*0x100670edf*/
              if ( v99 == (_OWORD *)v104 ) /*0x100670ef2*/
              {
                v14 = v110; /*0x100670ef4*/
                *(_QWORD *)v110 = v104; /*0x100670ef8*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(v96); /*0x100670f03*/
LABEL_120:
                core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v89); /*0x100670f3d*/
                return v14; /*0x100670f44*/
              }
            }
          }
          v14 = v110; /*0x100670f11*/
          *(_QWORD *)(v110 + 16) = v100[1]; /*0x100670f15*/
          v87 = v99; /*0x100670f1a*/
          *(_QWORD *)(v14 + 8) = v100[0]; /*0x100670f28*/
          *(_QWORD *)v14 = v87; /*0x100670f2d*/
LABEL_119:
          core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(v96); /*0x100670f31*/
          goto LABEL_120; /*0x100670f38*/
        }
        if ( anon_b0ee9adff4519c22b647af231a5a39fa_1127 ^ **((_DWORD **)&__dst[13] + 1) /*0x100670c84*/
           | *(_WORD *)(*((_QWORD *)&__dst[13] + 1) + 4LL) ^ 0x3172 )
        {
          v79 = 2 /*0x100670ca9*/
              - ((anon_b0ee9adff4519c22b647af231a5a39fa_1129 ^ **((_DWORD **)&__dst[13] + 1)
                | *(_WORD *)(*((_QWORD *)&__dst[13] + 1) + 4LL) ^ 0x3272) == 0);
          goto LABEL_107; /*0x100670cab*/
        }
      }
      v79 = 0; /*0x100670d15*/
      goto LABEL_107; /*0x100670d15*/
    }
LABEL_128:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v25); /*0x100670fd9*/
  }
  v9 = 0; /*0x10066fb58*/
  if ( !*((_BYTE *)v5 + 8) ) /*0x10066fb6c*/
    goto LABEL_12; /*0x10066fb6c*/
LABEL_6:
  v99 = nullptr; /*0x10066fb72*/
  v100[0] = 1; /*0x10066fb7d*/
  v100[1] = 0; /*0x10066fb88*/
  v91 = 1610612768; /*0x10066fb93*/
  v89 = &v99; /*0x10066fba5*/
  v90 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10066fbb3*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          &v89) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10067075f*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      v111,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v11 = v99; /*0x10066fbdd*/
  v12 = v100[0]; /*0x10066fbe4*/
  v13 = v100[1]; /*0x10066fbeb*/
  v105[0] = *(_DWORD *)((char *)&v100[1] + 1); /*0x10066fbf8*/
  *(_DWORD *)((char *)v105 + 3) = HIDWORD(v100[1]); /*0x10066fc04*/
  if ( !v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v10,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v5 + 8) = 1; /*0x100670776*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x10066fc25*/
  v14 = v110; /*0x10066fc2a*/
  *(_QWORD *)v110 = v11; /*0x10066fc2e*/
  *(_QWORD *)(v14 + 8) = v12; /*0x10066fc32*/
  *(_BYTE *)(v14 + 16) = v13; /*0x10066fc37*/
  v15 = *(_DWORD *)((char *)v105 + 3); /*0x10066fc42*/
  *(_DWORD *)(v14 + 17) = v105[0]; /*0x10066fc48*/
  *(_DWORD *)(v14 + 20) = v15; /*0x10066fc4d*/
  return v14; /*0x100670f4c*/
}