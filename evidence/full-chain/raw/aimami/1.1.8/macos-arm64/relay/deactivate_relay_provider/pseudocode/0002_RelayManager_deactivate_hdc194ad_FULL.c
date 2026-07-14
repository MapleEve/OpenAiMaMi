// codexmate_lib::core::relay::manager::RelayManager::deactivate::h14167deaa58af5c5
addr: 0x1005c0250
role: core deactivation logic (mutex-guarded clone, retain-filter, persist, sync_codex_config_with_outcome, sanitize_for_export)
0-truncation full decompile
// --- refs ---
// ref: 0x1010fb380 __ZN3std3sys4sync8once_box16OnceBox$LT$T$GT$10initialize17hf1a0da68c4a8085fE
// ref: 0x1010a4220 __ZN3std3sys3pal4unix4sync5mutex5Mutex4lock17h6b8bb4259dcc18d0E
// ref: 0x10112adb0 __ZN3std9panicking11panic_count17is_zero_slow_path17h509d4bac4686b0cdE
// ref: 0x101130130 __ZN4core6result13unwrap_failed17h855bccc0ecc45c4fE
// ref: 0x1012cb463 _anon.1f22c03b288e649fafb3d21192ed4cff.595
// ref: 0x101534850 _anon.1f22c03b288e649fafb3d21192ed4cff.853
// ref: 0x1015341c8 off_1015341C8
// ref: 0x1015b9b78 __ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h0191519d82e04aa6E
// ref: 0x10061f260 __ZN85_$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$5clone17hdc194ad118c67832E
// ref: 0x1010a4240 __ZN3std3sys3pal4unix4sync5mutex5Mutex6unlock17hb9acd26a137dd78dE
// ref: 0x100001470 __RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2
// ref: 0x100001430 __RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc
// ref: 0x101130a02 _memcpy
// ref: 0x1012cbcd4 unk_1012CBCD4
// ref: 0x1006f3140 __ZN5alloc3vec16Vec$LT$T$C$A$GT$6retain17hdeb8fbe0d48f8862E
// ref: 0x1012cb477 unk_1012CB477
// ref: 0x10112fd51 __ZN5alloc7raw_vec12handle_error17h81a7e8c5d8a11b4fE
// ref: 0x1005cccf0 __ZN13codexmate_lib4core5relay7manager12RelayManager7persist17he97af7bc6e4923b9E
// ref: 0x1005c8130 __ZN13codexmate_lib4core5relay7manager12RelayManager30sync_codex_config_with_outcome17h7744b56677bf50f9E
// ref: 0x1004b14b0 __ZN13codexmate_lib4core5relay7storage19sanitize_for_export17heb20e442c9650b92E
// ref: 0x1005f0940 __ZN4core3ptr67drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$17ha31523a10c4e8151E_5
// --- decompiled pseudocode (反编译器 Hex-Rays, x86_64 slice) ---

_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::deactivate::h14167deaa58af5c5(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6)
{
  __int64 v7; // r12
  _QWORD *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  char v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r14
  void *v16; // rax
  void *v17; // r15
  __int64 v18; // r14
  void *v19; // rax
  void *v20; // r15
  __int64 v21; // rax
  _BYTE v23[24]; // [rsp+0h] [rbp-350h] BYREF
  _BYTE v24[16]; // [rsp+18h] [rbp-338h] BYREF
  __int64 v25; // [rsp+28h] [rbp-328h]
  char v26; // [rsp+154h] [rbp-1FCh]
  _DWORD v27[24]; // [rsp+158h] [rbp-1F8h] BYREF
  _QWORD __src[43]; // [rsp+1B8h] [rbp-198h] BYREF
  __int64 v29; // [rsp+310h] [rbp-40h]
  __int64 v30; // [rsp+318h] [rbp-38h]
  __int64 v31; // [rsp+320h] [rbp-30h]

  v29 = a4; /*0x1005c0264*/
  v30 = a3; /*0x1005c0268*/
  v31 = a2; /*0x1005c026f*/
  v7 = *(_QWORD *)(a2 + 8); /*0x1005c0273*/
  v8 = (_QWORD *)(v7 + 16); /*0x1005c0277*/
  v9 = *(_QWORD *)(v7 + 16); /*0x1005c027c*/
  if ( !v9 ) /*0x1005c0284*/
    v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v7 + 16); /*0x1005c04d4*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c0294*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005c02aa*/
  {
    v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, a2, v10, a5, a6) ^ 1; /*0x1005c04e4*/
    if ( !*(_BYTE *)(v7 + 24) ) /*0x1005c04f0*/
      goto LABEL_5; /*0x1005c04f0*/
LABEL_23:
    __src[0] = v7 + 16; /*0x1005c04f6*/
    LOBYTE(__src[1]) = v11; /*0x1005c04fd*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c0525*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      __src,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_1015341C8);
  }
  v11 = 0; /*0x1005c02b0*/
  if ( *(_BYTE *)(v7 + 24) ) /*0x1005c02b3*/
    goto LABEL_23; /*0x1005c02bb*/
LABEL_5:
  v12 = v7 + 32; /*0x1005c02c1*/
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hdc194ad118c67832( /*0x1005c02cd*/
    v23,
    v7 + 32);
  if ( !v11 /*0x1005c052c*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v23, v12, v13, a5, a6) )
  {
    *(_BYTE *)(v7 + 24) = 1; /*0x1005c0539*/
  }
  v14 = *v8; /*0x1005c02ea*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v8, v12, v13, a5, a6); /*0x1005c02ed*/
  if ( v26 ) /*0x1005c02f9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14); /*0x1005c02fb*/
    v15 = 107; /*0x1005c0300*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(107, 1); /*0x1005c0310*/
    if ( v16 ) /*0x1005c0318*/
    {
      v17 = v16; /*0x1005c031e*/
      memcpy(v16, &unk_1012CBCD4, 0x6Bu); /*0x1005c0330*/
      __dst[1] = 9; /*0x1005c0335*/
      __dst[2] = 107; /*0x1005c033d*/
      __dst[3] = v17; /*0x1005c0345*/
      __dst[4] = 107; /*0x1005c0349*/
LABEL_20:
      *__dst = 0x8000000000000000LL; /*0x1005c049e*/
      goto LABEL_21; /*0x1005c04a8*/
    }
    goto LABEL_26; /*0x1005c0318*/
  }
  __src[0] = v30; /*0x1005c0361*/
  __src[1] = v29; /*0x1005c036c*/
  v18 = v25; /*0x1005c0373*/
  alloc::vec::Vec$LT$T$C$A$GT$::retain::hdeb8fbe0d48f8862(v24, __src); /*0x1005c0381*/
  if ( !v25 && v18 && v26 ) /*0x1005c039c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24); /*0x1005c039e*/
    v15 = 123; /*0x1005c03a3*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(123, 1); /*0x1005c03b3*/
    if ( v19 ) /*0x1005c03bb*/
    {
      v20 = v19; /*0x1005c03c1*/
      memcpy(v19, &unk_1012CB477, 0x7Bu); /*0x1005c03d3*/
      __dst[1] = 9; /*0x1005c03d8*/
      __dst[2] = 123; /*0x1005c03e0*/
      __dst[3] = v20; /*0x1005c03e8*/
      __dst[4] = 123; /*0x1005c03ec*/
      goto LABEL_20; /*0x1005c03f4*/
    }
LABEL_26:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v15); /*0x1005c0544*/
  }
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hdc194ad118c67832( /*0x1005c0407*/
    __src,
    v23);
  codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(v27, v31, __src); /*0x1005c041e*/
  if ( v27[0] != 10 ) /*0x1005c042a*/
  {
    qmemcpy(__dst + 1, v27, 0x60u); /*0x1005c0482*/
    goto LABEL_20; /*0x1005c0482*/
  }
  codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9(__src, v31); /*0x1005c0437*/
  v21 = __src[0]; /*0x1005c043c*/
  if ( __src[0] != 10 ) /*0x1005c0447*/
  {
    qmemcpy(__dst + 2, &__src[1], 0x58u); /*0x1005c0497*/
    __dst[1] = v21; /*0x1005c049a*/
    goto LABEL_20; /*0x1005c049a*/
  }
  codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92(__src, v23); /*0x1005c0457*/
  memcpy(__dst, __src, 0x158u); /*0x1005c046b*/
LABEL_21:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v23); /*0x1005c04ab*/
  return __dst; /*0x1005c04ba*/
}
