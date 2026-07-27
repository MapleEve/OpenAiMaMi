// __ZN13codexmate_lib24install_macos_quit_guard28application_should_terminate @ 0x1006f4de0
// 1.2.3 NEW-delta | codexmate_lib::install_macos_quit_guard::application_should_terminate | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::install_macos_quit_guard::application_should_terminate::ha894118da6b1850d(
        id a1,
        __int64 a2,
        double a3,
        double a4)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  char v7; // r14
  _BYTE v8[296]; // [rsp+8h] [rbp-298h] BYREF
  _BYTE v9[296]; // [rsp+130h] [rbp-170h] BYREF
  _BYTE v10[24]; // [rsp+258h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+270h] [rbp-30h] BYREF
  char v12; // [rsp+287h] [rbp-19h] BYREF

  result = 1; /*0x1006f4df7*/
  if ( !codexmate_lib::QUIT_GUARD_APP::h4f333942b3e666f9 && !codexmate_lib::EXIT_APPROVED::h7d8393eb9503152a ) /*0x1006f4e0e*/
  {
    v5 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*(_QWORD *)(qword_1019FF130 + 4872) + 16LL); /*0x1006f4e26*/
    v6 = v5; /*0x1006f4e2b*/
    if ( v5 ) /*0x1006f4e31*/
    {
      v7 = 2; /*0x1006f4e3b*/
      if ( !codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::ha887099746f9e103(v5, a2) ) /*0x1006f4e36*/
      {
        codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v9, v6); /*0x1006f4e4c*/
        codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(v8, v9); /*0x1006f4e5f*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v9); /*0x1006f4e6b*/
        v7 = v8[292]; /*0x1006f4e70*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v8); /*0x1006f4e7f*/
      }
    }
    else
    {
      v7 = 0; /*0x1006f4e86*/
    }
    v12 = v7; /*0x1006f4e89*/
    v11[0] = &v12; /*0x1006f4e91*/
    v11[1] = _$LT$codexmate_lib..RouterExitGuardState$u20$as$u20$core..fmt..Debug$GT$::fmt::h7a740a979031780a; /*0x1006f4e9c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v10, &unk_1017C3FA5, v11); /*0x1006f4eb2*/
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_10160612E, 10, &unk_101606050, 16, v10); /*0x1006f4ed2*/
    if ( v12 ) /*0x1006f4edb*/
    {
      codexmate_lib::request_user_quit::h1f24750a32dd88a5((__int64)&unk_1019FF0A8, 10, a3, a4); /*0x1006f4ee4*/
      return 0; /*0x1006f4ee9*/
    }
    else
    {
      return 1; /*0x1006f4eed*/
    }
  }
  return result; /*0x1006f4ef2*/
}