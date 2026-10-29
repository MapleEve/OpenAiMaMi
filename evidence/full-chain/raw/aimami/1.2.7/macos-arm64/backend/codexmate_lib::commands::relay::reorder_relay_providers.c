// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::reorder_relay_providers::h2dfa62913d045c10; addr: 0x100a04960; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:32Z
_QWORD *__fastcall codexmate_lib::commands::relay::reorder_relay_providers::h2dfa62913d045c10(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-3E0h] BYREF
  _BYTE v8[376]; // [rsp+8h] [rbp-3D8h] BYREF
  _QWORD v9[4]; // [rsp+180h] [rbp-260h] BYREF
  _BYTE __dst[352]; // [rsp+1A0h] [rbp-240h] BYREF
  _QWORD v11[12]; // [rsp+300h] [rbp-E0h] BYREF
  __int64 v12[3]; // [rsp+360h] [rbp-80h] BYREF
  __int64 v13; // [rsp+378h] [rbp-68h]
  __int64 v14; // [rsp+380h] [rbp-60h]
  __int64 v15; // [rsp+388h] [rbp-58h]
  __int64 v16; // [rsp+390h] [rbp-50h] BYREF
  __int64 v17; // [rsp+398h] [rbp-48h]
  __int64 v18; // [rsp+3A0h] [rbp-40h]
  __int64 v19; // [rsp+3A8h] [rbp-38h]
  __int64 v20; // [rsp+3B0h] [rbp-30h]
  __int64 v21; // [rsp+3B8h] [rbp-28h]
  char v22[25]; // [rsp+3C7h] [rbp-19h] BYREF

  codexmate_lib::core::relay::manager::RelayManager::reorder::h5c36ac0666c7a972(&v7); /*0x100a0497a*/
  if ( __OFSUB__(-v7, 1) ) /*0x100a04989*/
  {
    qmemcpy(v11, v8, sizeof(v11)); /*0x100a049ab*/
    v16 = 0; /*0x100a049ae*/
    v17 = 1; /*0x100a049b6*/
    v18 = 0; /*0x100a049be*/
    v12[2] = 1610612768; /*0x100a049c6*/
    v12[0] = (__int64)&v16; /*0x100a049d2*/
    v12[1] = (__int64)&anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a049dd*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a049e8*/
                            v11,
                            v12,
                            v1,
                            (__int64)&anon_25039b10cfdf58965817401c80a821a1_817,
                            v2,
                            v3) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a04ae1*/
        &anon_25039b10cfdf58965817401c80a821a1_818,
        55,
        v22,
        &anon_25039b10cfdf58965817401c80a821a1_840,
        &anon_25039b10cfdf58965817401c80a821a1_820);
    v19 = v16; /*0x100a04a07*/
    v20 = v17; /*0x100a04a0b*/
    v21 = v18; /*0x100a04a13*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v8); /*0x100a04a1a*/
    v15 = v21; /*0x100a04a23*/
    v4 = v19; /*0x100a04a27*/
    v5 = v20; /*0x100a04a2b*/
    v14 = v20; /*0x100a04a2f*/
    v13 = v19; /*0x100a04a33*/
    a1[3] = v21; /*0x100a04a37*/
    a1[2] = v5; /*0x100a04a3b*/
    a1[1] = v4; /*0x100a04a3f*/
    *a1 = 0x8000000000000000LL; /*0x100a04a43*/
  }
  else
  {
    v21 = *(_QWORD *)&v8[16]; /*0x100a04a4c*/
    v20 = *(_QWORD *)&v8[8]; /*0x100a04a57*/
    v19 = *(_QWORD *)v8; /*0x100a04a5b*/
    memcpy(__dst, &v8[24], sizeof(__dst)); /*0x100a04a72*/
    v13 = *(_QWORD *)v8; /*0x100a04a7f*/
    v9[0] = v7; /*0x100a04a87*/
    v9[1] = *(_QWORD *)v8; /*0x100a04a8e*/
    v9[2] = *(_QWORD *)&v8[8]; /*0x100a04a95*/
    v9[3] = *(_QWORD *)&v8[16]; /*0x100a04a9c*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::he4ad471118e6d581(a1, v9); /*0x100a04aad*/
  }
  return a1; /*0x100a04ab5*/
}