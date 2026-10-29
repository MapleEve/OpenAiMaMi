// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::upsert_relay_provider::h9c55623c64b9db2e; addr: 0x100a044e0; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:34Z
_QWORD *__fastcall codexmate_lib::commands::relay::upsert_relay_provider::h9c55623c64b9db2e(
        _QWORD *__dst,
        __int64 a2,
        double a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rsi
  _QWORD v10[32]; // [rsp+0h] [rbp-3D0h] BYREF
  _QWORD v11[42]; // [rsp+100h] [rbp-2D0h] BYREF
  __int64 v12[32]; // [rsp+250h] [rbp-180h] BYREF
  __int64 v13; // [rsp+350h] [rbp-80h]
  __int64 v14; // [rsp+358h] [rbp-78h]
  __int64 v15; // [rsp+360h] [rbp-70h]
  __int64 v16; // [rsp+368h] [rbp-68h]
  __int64 v17; // [rsp+370h] [rbp-60h]
  __int64 v18; // [rsp+378h] [rbp-58h]
  __int64 v19; // [rsp+380h] [rbp-50h] BYREF
  __int64 v20; // [rsp+388h] [rbp-48h]
  __int64 v21; // [rsp+390h] [rbp-40h]
  __int64 v22; // [rsp+398h] [rbp-38h] BYREF
  __int64 v23; // [rsp+3A0h] [rbp-30h]
  __int64 v24; // [rsp+3A8h] [rbp-28h]

  codexmate_lib::core::relay::manager::RelayManager::upsert::h559e40f8145d0495(v11); /*0x100a04505*/
  if ( __OFSUB__(-v11[0], 1) ) /*0x100a04514*/
  {
    qmemcpy(v10, &v11[1], 0x60u); /*0x100a04536*/
    v22 = 0; /*0x100a04539*/
    v23 = 1; /*0x100a04541*/
    v24 = 0; /*0x100a04549*/
    v12[2] = 1610612768; /*0x100a04551*/
    v12[0] = (__int64)&v22; /*0x100a04560*/
    v12[1] = (__int64)&anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a0456e*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a0457f*/
                            v10,
                            v12,
                            v4,
                            (__int64)&anon_25039b10cfdf58965817401c80a821a1_817,
                            v5,
                            v6) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a046bc*/
        &anon_25039b10cfdf58965817401c80a821a1_818,
        55,
        &v19,
        &anon_25039b10cfdf58965817401c80a821a1_840,
        &anon_25039b10cfdf58965817401c80a821a1_820);
    v19 = v22; /*0x100a04594*/
    v20 = v23; /*0x100a04598*/
    v21 = v24; /*0x100a045a0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&v11[1]); /*0x100a045a7*/
    v7 = v19; /*0x100a045ba*/
    v8 = v20; /*0x100a045be*/
    v13 = v19; /*0x100a045c2*/
    v14 = v20; /*0x100a045c6*/
    v15 = v21; /*0x100a045ca*/
    __dst[3] = v21; /*0x100a045ce*/
    __dst[2] = v8; /*0x100a045d2*/
    __dst[1] = v7; /*0x100a045d6*/
    *__dst = 0x8000000000000000LL; /*0x100a045da*/
  }
  else
  {
    v18 = v11[3]; /*0x100a045e6*/
    v17 = v11[2]; /*0x100a045f1*/
    v16 = v11[1]; /*0x100a045f5*/
    memcpy(&v12[4], &v11[4], 0xE0u); /*0x100a0460c*/
    v13 = v11[1]; /*0x100a04619*/
    v12[1] = v11[1]; /*0x100a04621*/
    v12[2] = v11[2]; /*0x100a04628*/
    v12[3] = v11[3]; /*0x100a0462f*/
    v12[0] = v11[0]; /*0x100a04636*/
    codexmate_lib::commands::tray_menu::refresh_tray_menu::h5662bcb50277f8c6(a2); /*0x100a04640*/
    memcpy(v10, v12, sizeof(v10)); /*0x100a0465b*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hc71703e31e3a8aed(v11, v10); /*0x100a0466a*/
    memcpy(__dst, v11, 0x150u); /*0x100a0467e*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(a2, a3); /*0x100a04686*/
  return __dst; /*0x100a0468e*/
}