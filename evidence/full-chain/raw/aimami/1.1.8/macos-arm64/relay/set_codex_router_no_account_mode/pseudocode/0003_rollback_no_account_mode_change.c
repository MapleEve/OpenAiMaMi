__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::rollback_no_account_mode_change::h34954cee4f0bb57e(
        __int64 *a1,
        char a2,
        double a3,
        double a4)
{
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rdx
  char v10; // al
  __int64 result; // rax
  _BYTE v12[345]; // [rsp+0h] [rbp-310h] BYREF
  _BYTE __dst[87]; // [rsp+159h] [rbp-1B7h] BYREF
  _QWORD v14[12]; // [rsp+1B0h] [rbp-160h] BYREF
  _QWORD v15[12]; // [rsp+210h] [rbp-100h] BYREF
  _QWORD v16[2]; // [rsp+270h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+280h] [rbp-90h] BYREF
  _QWORD __src[11]; // [rsp+288h] [rbp-88h] BYREF
  char v19; // [rsp+2E6h] [rbp-2Ah] BYREF
  char v20; // [rsp+2E7h] [rbp-29h] BYREF

  v20 = a2; /*0x1005c8b47*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x1005c8b5a*/
  {
    if ( !a2 ) /*0x1005c8c2b*/
    {
LABEL_3:
      v5 = (__int64 *)(*a1 + 16); /*0x1005c8c03*/
      codexmate_lib::core::relay::router_unlock_auth::cleanup::h242b88d72bef9392((__int64)&v17, v5, a3); /*0x1005c8c11*/
      v6 = v17; /*0x1005c8c16*/
      if ( v17 == 10 ) /*0x1005c8c21*/
        goto LABEL_10; /*0x1005c8c21*/
      goto LABEL_7; /*0x1005c8c21*/
    }
  }
  else
  {
    v15[0] = &v20; /*0x1005c8b64*/
    v15[1] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005c8b72*/
    __src[5] = 2; /*0x1005c8b79*/
    __src[6] = "codexmate_lib::core::relay::manager"; /*0x1005c8b88*/
    __src[7] = 35; /*0x1005c8b8c*/
    __src[9] = &unk_10122C7A3; /*0x1005c8b9b*/
    __src[10] = v15; /*0x1005c8ba6*/
    v17 = 0; /*0x1005c8baa*/
    __src[0] = "codexmate_lib::core::relay::manager"; /*0x1005c8bb5*/
    __src[1] = 35; /*0x1005c8bbc*/
    __src[2] = 0; /*0x1005c8bc4*/
    __src[3] = "src/core/relay/manager.rs"; /*0x1005c8bd3*/
    __src[4] = 25; /*0x1005c8bd7*/
    __src[8] = 0x4C600000001LL; /*0x1005c8be9*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v19, &v17); /*0x1005c8bf8*/
    if ( !v20 ) /*0x1005c8c01*/
      goto LABEL_3; /*0x1005c8c01*/
  }
  v5 = (__int64 *)(*a1 + 16); /*0x1005c8c30*/
  codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth::h2f0328bac8ed85a3( /*0x1005c8c40*/
    &v17,
    (__int64)v5,
    1,
    a3);
  v6 = v17; /*0x1005c8c45*/
  if ( v17 == 10 ) /*0x1005c8c50*/
    goto LABEL_10; /*0x1005c8c50*/
LABEL_7:
  memcpy(__dst, (char *)__src + 1, sizeof(__dst)); /*0x1005c8c56*/
  v15[0] = v6; /*0x1005c8c76*/
  LOBYTE(v15[1]) = __src[0]; /*0x1005c8c7d*/
  v5 = (__int64 *)__dst; /*0x1005c8c8b*/
  memcpy((char *)&v15[1] + 1, __dst, 0x57u); /*0x1005c8c97*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c8ca4*/
  {
    v14[0] = v15; /*0x1005c8cb1*/
    v14[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c8cbf*/
    __src[5] = 2; /*0x1005c8cc6*/
    __src[6] = "codexmate_lib::core::relay::manager"; /*0x1005c8cd5*/
    __src[7] = 35; /*0x1005c8cd9*/
    __src[9] = &unk_10122C7E2; /*0x1005c8ce8*/
    __src[10] = v14; /*0x1005c8cf3*/
    v17 = 0; /*0x1005c8cf7*/
    __src[0] = "codexmate_lib::core::relay::manager"; /*0x1005c8d02*/
    __src[1] = 35; /*0x1005c8d09*/
    __src[2] = 0; /*0x1005c8d11*/
    __src[3] = "src/core/relay/manager.rs"; /*0x1005c8d20*/
    __src[4] = 25; /*0x1005c8d24*/
    __src[8] = 0x4CF00000001LL; /*0x1005c8d36*/
    v5 = &v17; /*0x1005c8d3e*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v19, &v17); /*0x1005c8d45*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v15); /*0x1005c8d51*/
LABEL_10:
  v7 = a1[1]; /*0x1005c8d56*/
  v8 = *(_QWORD *)(v7 + 16); /*0x1005c8d5e*/
  if ( !v8 ) /*0x1005c8d65*/
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v7 + 16); /*0x1005c8fce*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c8d6b*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005c8d7b*/
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, v5, v9, a3, a4) ^ 1; /*0x1005c8fdb*/
    if ( !*(_BYTE *)(v7 + 24) ) /*0x1005c8fe4*/
      goto LABEL_14; /*0x1005c8fe4*/
LABEL_26:
    v17 = v7 + 16; /*0x1005c8fea*/
    LOBYTE(__src[0]) = v10; /*0x1005c8ff1*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c9018*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      &v17,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_101534438);
  }
  v10 = 0; /*0x1005c8d87*/
  if ( *(_BYTE *)(v7 + 24) ) /*0x1005c8d89*/
    goto LABEL_26; /*0x1005c8d90*/
LABEL_14:
  *(_BYTE *)(v7 + 373) = v20; /*0x1005c8d96*/
  if ( !v10 /*0x1005c901f*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, v5, v9, a3, a4) )
  {
    *(_BYTE *)(v7 + 24) = 1; /*0x1005c902c*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v7 + 16), v5, v9, a3, a4); /*0x1005c8dbf*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)v12, (__int64)a1, a3, a4); /*0x1005c8dd1*/
  codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(v14, a1, v12, a3, a4); /*0x1005c8de6*/
  if ( LODWORD(v14[0]) != 10 ) /*0x1005c8df2*/
  {
    qmemcpy(v15, v14, sizeof(v15)); /*0x1005c8e0e*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c8e19*/
    {
      v16[0] = v15; /*0x1005c8e1f*/
      v16[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c8e2d*/
      __src[5] = 2; /*0x1005c8e34*/
      __src[6] = "codexmate_lib::core::relay::manager"; /*0x1005c8e43*/
      __src[7] = 35; /*0x1005c8e47*/
      __src[9] = &unk_10122C817; /*0x1005c8e56*/
      __src[10] = v16; /*0x1005c8e61*/
      v17 = 0; /*0x1005c8e65*/
      __src[0] = "codexmate_lib::core::relay::manager"; /*0x1005c8e70*/
      __src[1] = 35; /*0x1005c8e77*/
      __src[2] = 0; /*0x1005c8e7f*/
      __src[3] = "src/core/relay/manager.rs"; /*0x1005c8e8e*/
      __src[4] = 25; /*0x1005c8e92*/
      __src[8] = 0x4D700000001LL; /*0x1005c8ea4*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v19, &v17); /*0x1005c8eb3*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v15); /*0x1005c8ebf*/
  }
  codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9(&v17, a1, a3, a4); /*0x1005c8ece*/
  result = v17; /*0x1005c8ed3*/
  if ( v17 != 10 ) /*0x1005c8ede*/
  {
    qmemcpy(&v15[1], __src, 0x58u); /*0x1005c8ef7*/
    v15[0] = v17; /*0x1005c8efa*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1005c8f09*/
    {
      v14[0] = v15; /*0x1005c8f16*/
      v14[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1005c8f24*/
      __src[5] = 2; /*0x1005c8f2b*/
      __src[6] = "codexmate_lib::core::relay::manager"; /*0x1005c8f3a*/
      __src[7] = 35; /*0x1005c8f3e*/
      __src[9] = &unk_10122C855; /*0x1005c8f4d*/
      __src[10] = v14; /*0x1005c8f51*/
      v17 = 0; /*0x1005c8f55*/
      __src[0] = "codexmate_lib::core::relay::manager"; /*0x1005c8f60*/
      __src[1] = 35; /*0x1005c8f67*/
      __src[2] = 0; /*0x1005c8f6f*/
      __src[3] = "src/core/relay/manager.rs"; /*0x1005c8f7e*/
      __src[4] = 25; /*0x1005c8f82*/
      __src[8] = 0x4DA00000001LL; /*0x1005c8f94*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v19, &v17); /*0x1005c8fa3*/
    }
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v15); /*0x1005c8faf*/
  }
  return result; /*0x1005c8fb4*/
}
---REFS---
0x10068fab0 __ZN13codexmate_lib4core5relay18router_unlock_auth7cleanup17h242b88d72bef9392E
0x1010dc410 __ZN43_$LT$bool$u20$as$u20$core..fmt..Display$GT$3fmt17hfa84701fb0a9c855E
0x1012cb4f2 aCodexmateLibCo_1
0x10122c7a3 unk_10122C7A3
0x10122bc53 _anon.1f22c03b288e649fafb3d21192ed4cff.596
0x100ef1800 __ZN61_$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$3log17h3cdc1ad4dece8a2dE
0x1015b7600 __ZN3log20MAX_LOG_LEVEL_FILTER17hd46d17d60ca2fba8E
0x10068eeb0 __ZN13codexmate_lib4core5relay18router_unlock_auth27install_virtual_unlock_auth17h2f0328bac8ed85a3E
0x101130a02 _memcpy
0x100500e10 __ZN77_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$3fmt17habc7ed17d00203bbE
0x10122c7e2 unk_10122C7E2
0x1005ee440 __ZN4core3ptr59drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$17h754f3a2a741d9d03E_7
0x1010fb380 __ZN3std3sys4sync8once_box16OnceBox$LT$T$GT$10initialize17hf1a0da68c4a8085fE
0x1010a4220 __ZN3std3sys3pal4unix4sync5mutex5Mutex4lock17h6b8bb4259dcc18d0E
0x10112adb0 __ZN3std9panicking11panic_count17is_zero_slow_path17h509d4bac4686b0cdE
0x101130130 __ZN4core6result13unwrap_failed17h855bccc0ecc45c4fE
0x1012cb463 _anon.1f22c03b288e649fafb3d21192ed4cff.595
0x101534850 _anon.1f22c03b288e649fafb3d21192ed4cff.853
0x101534438 off_101534438
0x1015b9b78 __ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h0191519d82e04aa6E
0x1010a4240 __ZN3std3sys3pal4unix4sync5mutex5Mutex6unlock17hb9acd26a137dd78dE
0x1005cdf60 __ZN13codexmate_lib4core5relay7manager12RelayManager8snapshot17h0d4cb54a50479cd3E
0x1005cccf0 __ZN13codexmate_lib4core5relay7manager12RelayManager7persist17he97af7bc6e4923b9E
0x10122c817 unk_10122C817
0x1005c8130 __ZN13codexmate_lib4core5relay7manager12RelayManager30sync_codex_config_with_outcome17h7744b56677bf50f9E
0x10122c855 unk_10122C855
