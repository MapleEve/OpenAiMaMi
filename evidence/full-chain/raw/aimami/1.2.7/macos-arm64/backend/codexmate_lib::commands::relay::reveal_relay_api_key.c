// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::reveal_relay_api_key::hcef2d56b673e7bea; addr: 0x100a02e50; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:33Z
_QWORD *__fastcall codexmate_lib::commands::relay::reveal_relay_api_key::hcef2d56b673e7bea(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v10; // rax
  _BYTE v11[96]; // [rsp+8h] [rbp-188h] BYREF
  _BYTE v12[104]; // [rsp+68h] [rbp-128h] BYREF
  __int64 v13[12]; // [rsp+D0h] [rbp-C0h] BYREF
  _QWORD v14[3]; // [rsp+130h] [rbp-60h] BYREF
  __int64 v15; // [rsp+148h] [rbp-48h] BYREF
  __int64 v16; // [rsp+150h] [rbp-40h]
  __int64 v17; // [rsp+158h] [rbp-38h]
  __int64 v18; // [rsp+160h] [rbp-30h] BYREF
  __int64 v19; // [rsp+168h] [rbp-28h]
  __int64 v20; // [rsp+170h] [rbp-20h]

  v4 = a3[1]; /*0x100a02e66*/
  codexmate_lib::core::relay::manager::RelayManager::reveal_api_key::hddd93882a5c908f2(v13, a2); /*0x100a02e78*/
  if ( LODWORD(v13[0]) == 11 ) /*0x100a02e84*/
  {
    v14[2] = v13[3]; /*0x100a02e91*/
    v14[1] = v13[2]; /*0x100a02ea3*/
    v14[0] = v13[1]; /*0x100a02ea7*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hc7f5ca0494e41b10(v12, v14); /*0x100a02eb6*/
    v7 = *(_QWORD *)v12; /*0x100a02ebb*/
    qmemcpy(v11, &v12[8], sizeof(v11)); /*0x100a02ed8*/
    qmemcpy(a1 + 1, v11, 0x60u); /*0x100a02ee7*/
    *a1 = v7; /*0x100a02eea*/
    v8 = *a3; /*0x100a02eed*/
    if ( *a3 ) /*0x100a02eed*/
LABEL_3:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v8, 1); /*0x100a02ef5*/
  }
  else
  {
    qmemcpy(v11, v13, sizeof(v11)); /*0x100a02f29*/
    qmemcpy(v12, v11, 0x60u); /*0x100a02f3e*/
    v18 = 0; /*0x100a02f41*/
    v19 = 1; /*0x100a02f49*/
    v20 = 0; /*0x100a02f51*/
    v13[2] = 1610612768; /*0x100a02f59*/
    v13[0] = (__int64)&v18; /*0x100a02f68*/
    v13[1] = (__int64)&anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a02f76*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a02f87*/
                            v12,
                            v13,
                            (__int64)v12,
                            0,
                            v5,
                            v6) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a03008*/
        &anon_25039b10cfdf58965817401c80a821a1_818,
        55,
        &v15,
        &anon_25039b10cfdf58965817401c80a821a1_840,
        &anon_25039b10cfdf58965817401c80a821a1_820);
    v15 = v18; /*0x100a02f98*/
    v16 = v19; /*0x100a02f9c*/
    v17 = v20; /*0x100a02fa4*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v11); /*0x100a02faf*/
    a1[3] = v17; /*0x100a02fb8*/
    v10 = v15; /*0x100a02fbc*/
    a1[2] = v16; /*0x100a02fc4*/
    a1[1] = v10; /*0x100a02fc8*/
    *a1 = 0x8000000000000000LL; /*0x100a02fd6*/
    v8 = *a3; /*0x100a02fd9*/
    if ( *a3 ) /*0x100a02fd9*/
      goto LABEL_3; /*0x100a02fdf*/
  }
  return a1; /*0x100a02f05*/
}