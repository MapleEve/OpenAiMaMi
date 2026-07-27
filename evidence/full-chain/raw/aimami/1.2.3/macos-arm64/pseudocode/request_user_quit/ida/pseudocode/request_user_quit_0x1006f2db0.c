// __ZN13codexmate_lib17request_user_quit @ 0x1006f2db0
__int64 __fastcall codexmate_lib::request_user_quit::h1f24750a32dd88a5(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int8 v8; // r14
  char v9; // r15
  char v10; // of
  __int64 v11; // rt0
  volatile signed __int64 *v12; // r15
  __int64 v13; // rt0
  void *v14; // rax
  void *v15; // r12
  _BYTE v16[24]; // [rsp+8h] [rbp-2D8h] BYREF
  _QWORD __dst[36]; // [rsp+20h] [rbp-2C0h] BYREF
  char v18; // [rsp+144h] [rbp-19Ch]
  _QWORD __src[37]; // [rsp+148h] [rbp-198h] BYREF
  _QWORD v20[2]; // [rsp+270h] [rbp-70h] BYREF
  __int64 v21; // [rsp+280h] [rbp-60h] BYREF
  __int64 v22; // [rsp+288h] [rbp-58h]
  __int64 v23; // [rsp+290h] [rbp-50h]
  __int64 v24; // [rsp+298h] [rbp-48h]
  __int64 v25; // [rsp+2A0h] [rbp-40h]
  __int64 v26; // [rsp+2A8h] [rbp-38h]
  char v27; // [rsp+2B6h] [rbp-2Ah] BYREF
  char v28; // [rsp+2B7h] [rbp-29h] BYREF

  if ( codexmate_lib::EXIT_APPROVED::h7d8393eb9503152a ) /*0x1006f2dd0*/
    return tauri::app::AppHandle$LT$R$GT$::exit::h3fe6fa98deeed9cb(a1, 0); /*0x1006f2de8*/
  v5 = *(_QWORD *)(a1 + 136); /*0x1006f2ded*/
  v6 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*(_QWORD *)(v5 + 4872) + 16LL); /*0x1006f2dff*/
  if ( !v6 ) /*0x1006f2e07*/
  {
    v28 = 0; /*0x1006f2e21*/
    goto LABEL_17; /*0x1006f2e25*/
  }
  v7 = v6; /*0x1006f2e09*/
  v8 = codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::ha887099746f9e103(v6, a2); /*0x1006f2e14*/
  if ( v8 ) /*0x1006f2e19*/
  {
    v28 = 2; /*0x1006f2e1b*/
    goto LABEL_8; /*0x1006f2e1f*/
  }
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(__src, v7); /*0x1006f2e37*/
  codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(__dst, __src); /*0x1006f2e46*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(__src); /*0x1006f2e52*/
  v9 = v18; /*0x1006f2e57*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(__dst); /*0x1006f2e66*/
  v28 = v9; /*0x1006f2e6b*/
  if ( !v9 ) /*0x1006f2e72*/
  {
LABEL_17:
    codexmate_lib::EXIT_APPROVED::h7d8393eb9503152a = 1; /*0x1006f310c*/
    return tauri::app::AppHandle$LT$R$GT$::exit::h3fe6fa98deeed9cb(a1, 0); /*0x1006f3119*/
  }
LABEL_8:
  __src[0] = &v28; /*0x1006f2e78*/
  __src[1] = _$LT$codexmate_lib..RouterExitGuardState$u20$as$u20$core..fmt..Debug$GT$::fmt::h7a740a979031780a; /*0x1006f2e8a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v16, &unk_1017C3EC2, __src); /*0x1006f2ea9*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_10160612E, 10, &unk_101606138, 11, v16); /*0x1006f2ec9*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006f2ed8*/
  v11 = _InterlockedIncrement64((volatile signed __int64 *)v5); /*0x1006f2edd*/
  if ( (v11 < 0) ^ v10 | (v11 == 0) /*0x1006f2ef3*/
    || (v12 = *(volatile signed __int64 **)(a1 + 144), v13 = _InterlockedIncrement64(v12), (v13 < 0) ^ v10 | (v13 == 0)) )
  {
    BUG(); /*0x1006f313f*/
  }
  memcpy(__dst, __src, 0x88u); /*0x1006f2f0c*/
  __dst[17] = v5; /*0x1006f2f11*/
  __dst[18] = v12; /*0x1006f2f18*/
  LOBYTE(__dst[19]) = 1; /*0x1006f2f1f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1006f2f26*/
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(160, 8); /*0x1006f2f35*/
  if ( !v14 ) /*0x1006f2f3d*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 160); /*0x1006f313a*/
  v15 = v14; /*0x1006f2f43*/
  memcpy(v14, __dst, 0xA0u); /*0x1006f2f62*/
  __src[1] = v15; /*0x1006f2f67*/
  __src[2] = &anon_0df76e0cec988e6dc281ac0519b88803_1168; /*0x1006f2f75*/
  LOBYTE(__src[0]) = 28; /*0x1006f2f7c*/
  tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(&v21, a1, __src, a3, a4); /*0x1006f2f91*/
  if ( (_DWORD)v21 != 19 ) /*0x1006f2f9a*/
  {
    __src[3] = v23; /*0x1006f2fa0*/
    __src[2] = v22; /*0x1006f2faf*/
    __src[1] = v21; /*0x1006f2fb6*/
    __src[0] = 0x8000000000000000LL; /*0x1006f2fbd*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1006f2fcb*/
  }
  result = tauri::Emitter::emit::hf5a1532e14bbcbf2(&v21, a1, &unk_101606143, 23, v8); /*0x1006f2fe7*/
  if ( v21 != 0x8000000000000025LL ) /*0x1006f2ff4*/
  {
    __dst[5] = v26; /*0x1006f2ffe*/
    __dst[4] = v25; /*0x1006f3009*/
    __dst[3] = v24; /*0x1006f3014*/
    __dst[2] = v23; /*0x1006f301f*/
    __dst[1] = v22; /*0x1006f302e*/
    __dst[0] = v21; /*0x1006f3035*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006f304a*/
    {
      v20[0] = __dst; /*0x1006f3050*/
      v20[1] = _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80; /*0x1006f305b*/
      __src[6] = 2; /*0x1006f305f*/
      __src[7] = &unk_10160615A; /*0x1006f3071*/
      __src[8] = 13; /*0x1006f3078*/
      __src[10] = &unk_1017C3EF6; /*0x1006f308a*/
      __src[11] = v20; /*0x1006f3095*/
      __src[0] = 0; /*0x1006f309c*/
      __src[1] = &unk_10160615A; /*0x1006f30a7*/
      __src[2] = 13; /*0x1006f30ae*/
      __src[3] = 0; /*0x1006f30b9*/
      __src[4] = "src/lib.rs"; /*0x1006f30cb*/
      __src[5] = 10; /*0x1006f30d2*/
      __src[9] = 0x6200000001LL; /*0x1006f30e7*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v27, __src); /*0x1006f30f9*/
    }
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__dst); /*0x1006f3105*/
  }
  return result; /*0x1006f2dd7*/
}