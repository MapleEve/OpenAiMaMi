// OWNER: load_relay_state
// LABEL: codexmate_lib::commands::relay::load_relay_state::h32179ca79633a42f
// ADDRESS: 0x1004c3c20
// SIZE: decompiled text 3259 bytes, 0 truncation (decompile_truncated=None)
// ROLE: command_owner (Tauri IPC handler)
// BINARY: AiMaMi 1.1.8 universal.app/Contents/MacOS/AiMaMi (x86_64 slice, per 分析工具就绪门
// SESSION: <审计会话>
// CALL_CHAIN (depth0->1): ensure_proxy_started -> snapshot -> sanitize_for_export -> drop_in_place(RelayState) -> {CoreEnvelope::ok | CoreError::fmt+unwrap_failed}
// DELTA vs 1.0.9 (owner 0x1001dff6c): the manual inline apiKey-zero loop + second RelayState::clone that existed directly in the 1.0.9 owner body have been REMOVED from the owner and replaced by a single call to the new centralized codexmate_lib::core::relay::storage::sanitize_for_export (0x1004b14b0). Structural continuity preserved: ensure_proxy_started -> snapshot are unchanged in position/order.

_QWORD *__fastcall codexmate_lib::commands::relay::load_relay_state::h32179ca79633a42f(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _BYTE v5[344]; // [rsp+0h] [rbp-5C0h] BYREF
  _QWORD v6[4]; // [rsp+158h] [rbp-468h] BYREF
  _BYTE v7[312]; // [rsp+178h] [rbp-448h] BYREF
  __int64 v8; // [rsp+2B0h] [rbp-310h] BYREF
  _QWORD __src[42]; // [rsp+2B8h] [rbp-308h] BYREF
  _QWORD __dst[42]; // [rsp+408h] [rbp-1B8h] BYREF
  __int64 v11; // [rsp+558h] [rbp-68h]
  __int64 v12; // [rsp+560h] [rbp-60h]
  __int64 v13; // [rsp+568h] [rbp-58h]
  __int64 v14; // [rsp+570h] [rbp-50h] BYREF
  __int64 v15; // [rsp+578h] [rbp-48h]
  __int64 v16; // [rsp+580h] [rbp-40h]
  __int64 v17; // [rsp+588h] [rbp-38h]
  __int64 v18; // [rsp+590h] [rbp-30h]
  __int64 v19; // [rsp+598h] [rbp-28h]
  char v20[25]; // [rsp+5A7h] [rbp-19h] BYREF

  // Step 1: ensure proxy is started (TCP liveness probe + optional spawn + storage::save on new state)
  codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hd0b215828faba6dc(a2); /*0x1004c3c39*/

  // Step 2: snapshot current state (clone RelayState under Mutex)
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(v5, a2); /*0x1004c3c4b*/

  // Step 3 (NEW in 1.1.8): centralized sanitize_for_export replaces the old inline manual apiKey-zero loop
  codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92((__int64)&v8, (__int64)v5); /*0x1004c3c5a*/

  // Step 4: drop the raw (unsanitized) snapshot
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v5); /*0x1004c3c66*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1004c3c85*/

  if ( __OFSUB__(-v8, 1) ) /*0x1004c3c8d*/
  {
    // Error branch: ensure_proxy_started failed -> pack CoreError into error envelope
    qmemcpy(v5, __dst, 0x60u); /*0x1004c3cac*/
    v14 = 0; /*0x1004c3caf*/
    v15 = 1; /*0x1004c3cb7*/
    v16 = 0; /*0x1004c3cbf*/
    __src[1] = 1610612768; /*0x1004c3cc7*/
    v8 = (__int64)&v14; /*0x1004c3cd6*/
    __src[0] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004c3ce4*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004c3cf5*/
                            v5,
                            &v8) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c3dfc*/
        "a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap()` on an `Err` value",
        55,
        v20,
        &anon_3e4c14ac1826b92abbb84b981a88c995_940,
        &anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v17 = v14; /*0x1004c3d14*/
    v18 = v15; /*0x1004c3d18*/
    v19 = v16; /*0x1004c3d20*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x1004c3d2b*/
    v13 = v19; /*0x1004c3d34*/
    v2 = v17; /*0x1004c3d38*/
    v3 = v18; /*0x1004c3d3c*/
    v12 = v18; /*0x1004c3d40*/
    v11 = v17; /*0x1004c3d44*/
    a1[3] = v19; /*0x1004c3d48*/
    a1[2] = v3; /*0x1004c3d4c*/
    a1[1] = v2; /*0x1004c3d50*/
    *a1 = 0x8000000000000000LL; /*0x1004c3d54*/  // Err discriminant
  }
  else
  {
    // Success branch: build IPC response from sanitized RelayState
    v19 = __dst[2]; /*0x1004c3d60*/
    v18 = __dst[1]; /*0x1004c3d72*/
    v17 = __dst[0]; /*0x1004c3d76*/
    memcpy(v7, &__dst[3], sizeof(v7)); /*0x1004c3d8d*/
    v11 = __dst[0]; /*0x1004c3d9a*/
    v6[0] = v8; /*0x1004c3da2*/
    v6[1] = __dst[0]; /*0x1004c3da9*/
    v6[2] = __dst[1]; /*0x1004c3db0*/
    v6[3] = __dst[2]; /*0x1004c3db7*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8cb36c706799a66b(a1, v6); /*0x1004c3dc8*/
  }
  return a1; /*0x1004c3dd0*/
}
