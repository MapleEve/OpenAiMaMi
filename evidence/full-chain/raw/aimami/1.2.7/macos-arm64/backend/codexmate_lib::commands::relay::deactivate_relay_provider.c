// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::deactivate_relay_provider::haff1b322d90e0b90; addr: 0x100a04b20; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:29Z
_QWORD *__fastcall codexmate_lib::commands::relay::deactivate_relay_provider::haff1b322d90e0b90(
        _QWORD *__dst,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  _QWORD v12[58]; // [rsp+0h] [rbp-450h] BYREF
  _QWORD v13[4]; // [rsp+1D0h] [rbp-280h] BYREF
  _BYTE __dsta[352]; // [rsp+1F0h] [rbp-260h] BYREF
  _QWORD v15[12]; // [rsp+350h] [rbp-100h] BYREF
  __int64 v16[3]; // [rsp+3B0h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+3C8h] [rbp-88h]
  __int64 v18; // [rsp+3D0h] [rbp-80h]
  __int64 v19; // [rsp+3D8h] [rbp-78h]
  __int64 v20; // [rsp+3E0h] [rbp-70h]
  __int64 v21; // [rsp+3E8h] [rbp-68h]
  __int64 v22; // [rsp+3F0h] [rbp-60h]
  __int64 v23; // [rsp+3F8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+400h] [rbp-50h]
  __int64 v25; // [rsp+408h] [rbp-48h]
  __int64 v26; // [rsp+410h] [rbp-40h] BYREF
  __int64 v27; // [rsp+418h] [rbp-38h]
  __int64 v28; // [rsp+420h] [rbp-30h]

  v4 = a3[1]; /*0x100a04b3a*/
  codexmate_lib::core::relay::manager::RelayManager::deactivate::ha8717a1c23568c44(v12); /*0x100a04b4c*/
  if ( !__OFSUB__(-v12[0], 1) ) /*0x100a04b65*/
  {
    v22 = v12[3]; /*0x100a04c3d*/
    v21 = v12[2]; /*0x100a04c4a*/
    v20 = v12[1]; /*0x100a04c4e*/
    memcpy(__dsta, &v12[4], sizeof(__dsta)); /*0x100a04c65*/
    v17 = v12[1]; /*0x100a04c72*/
    v13[0] = v12[0]; /*0x100a04c7d*/
    v13[1] = v12[1]; /*0x100a04c84*/
    v13[2] = v12[2]; /*0x100a04c8b*/
    v13[3] = v12[3]; /*0x100a04c92*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::he4ad471118e6d581(v12, v13); /*0x100a04ca7*/
    memcpy(__dst, v12, 0x1D0u); /*0x100a04cbb*/
    v10 = *a3; /*0x100a04cc0*/
    if ( !*a3 ) /*0x100a04cc6*/
      return __dst; /*0x100a04cc6*/
LABEL_6:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v10, 1); /*0x100a04cc8*/
    return __dst; /*0x100a04cd0*/
  }
  qmemcpy(v15, &v12[1], sizeof(v15)); /*0x100a04b7d*/
  v26 = 0; /*0x100a04b80*/
  v27 = 1; /*0x100a04b88*/
  v28 = 0; /*0x100a04b90*/
  v16[2] = 1610612768; /*0x100a04b98*/
  v16[0] = (__int64)&v26; /*0x100a04ba7*/
  v16[1] = (__int64)&anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a04bb5*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a04bc6*/
                          v15,
                          v16,
                          v5,
                          (__int64)&anon_25039b10cfdf58965817401c80a821a1_817,
                          v6,
                          v7) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a04d08*/
      &anon_25039b10cfdf58965817401c80a821a1_818,
      55,
      &v23,
      &anon_25039b10cfdf58965817401c80a821a1_840,
      &anon_25039b10cfdf58965817401c80a821a1_820);
  v23 = v26; /*0x100a04bdb*/
  v24 = v27; /*0x100a04bdf*/
  v25 = v28; /*0x100a04be7*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(&v12[1]); /*0x100a04bee*/
  v8 = v23; /*0x100a04c01*/
  v9 = v24; /*0x100a04c05*/
  v17 = v23; /*0x100a04c09*/
  v18 = v24; /*0x100a04c10*/
  v19 = v25; /*0x100a04c14*/
  __dst[3] = v25; /*0x100a04c18*/
  __dst[2] = v9; /*0x100a04c1c*/
  __dst[1] = v8; /*0x100a04c20*/
  *__dst = 0x8000000000000000LL; /*0x100a04c24*/
  v10 = *a3; /*0x100a04c27*/
  if ( *a3 ) /*0x100a04c27*/
    goto LABEL_6; /*0x100a04c2d*/
  return __dst; /*0x100a04cd8*/
}