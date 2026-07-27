// __ZN13codexmate_lib8commands5relay31get_codex_router_auth_readiness @ 0x10053fd20 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::relay::get_codex_router_auth_readiness::h898be560227c07db(
        __int64 a1,
        __int64 a2)
{
  __int64 v3[36]; // [rsp+8h] [rbp-158h] BYREF
  char v4; // [rsp+12Dh] [rbp-33h]
  _QWORD v5[3]; // [rsp+130h] [rbp-30h] BYREF
  __int64 v6; // [rsp+148h] [rbp-18h]

  codexmate_lib::core::relay::router_unlock_auth::readiness::h0f20581d20d4ef84( /*0x10053fd3f*/
    (__int64)v5,
    (_QWORD *)(*(_QWORD *)a2 + 16LL));
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555((__int64)v3, a2); /*0x10053fd4e*/
  if ( v4 ) /*0x10053fd57*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v3); /*0x10053fd60*/
    BYTE1(v6) = 1; /*0x10053fd65*/
  }
  else
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v3); /*0x10053fd72*/
  }
  v3[3] = v6; /*0x10053fd7b*/
  v3[2] = v5[2]; /*0x10053fd86*/
  v3[1] = v5[1]; /*0x10053fd95*/
  v3[0] = v5[0]; /*0x10053fd9c*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hfcccfab8d11ab999(a1, v3); /*0x10053fdad*/
  return a1; /*0x10053fdb5*/
}