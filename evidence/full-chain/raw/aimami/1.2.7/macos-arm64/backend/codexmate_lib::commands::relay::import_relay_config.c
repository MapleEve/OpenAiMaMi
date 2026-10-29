// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::import_relay_config::h5fef75815b49a8a1; addr: 0x100a024c0; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:31Z
_QWORD *__fastcall codexmate_lib::commands::relay::import_relay_config::h5fef75815b49a8a1(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        double a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD v13[14]; // [rsp+18h] [rbp-158h] BYREF
  _QWORD v14[12]; // [rsp+88h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-88h]
  __int64 v16; // [rsp+F0h] [rbp-80h]
  __int64 v17; // [rsp+F8h] [rbp-78h]
  __int64 v18; // [rsp+100h] [rbp-70h] BYREF
  __int64 v19; // [rsp+108h] [rbp-68h]
  __int64 v20; // [rsp+110h] [rbp-60h]
  __int64 v21; // [rsp+118h] [rbp-58h] BYREF
  __int64 v22; // [rsp+120h] [rbp-50h]
  __int64 v23; // [rsp+128h] [rbp-48h]
  __int64 *v24; // [rsp+130h] [rbp-40h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+138h] [rbp-38h]
  __int64 v26; // [rsp+140h] [rbp-30h]
  __int64 v27; // [rsp+148h] [rbp-28h]

  v5 = *a4; /*0x100a024d8*/
  v6 = a4[1]; /*0x100a024db*/
  codexmate_lib::core::relay::manager::RelayManager::import_config::he8d337b323dc77ab(v14, a3, v6, a4[2]); /*0x100a024f0*/
  if ( LODWORD(v14[0]) == 11 ) /*0x100a024fc*/
  {
    v15 = v14[2]; /*0x100a0251e*/
    v16 = v14[3]; /*0x100a02525*/
    v17 = v14[4]; /*0x100a02529*/
    v25 = (__int64 (__fastcall **)())v14[2]; /*0x100a0252d*/
    v26 = v14[3]; /*0x100a02531*/
    v27 = v14[4]; /*0x100a02535*/
    v24 = (__int64 *)v14[1]; /*0x100a02539*/
    if ( v5 ) /*0x100a02540*/
      a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100a0254d*/
    codexmate_lib::commands::tray_menu::refresh_tray_menu::h5662bcb50277f8c6(a2); /*0x100a02555*/
    v14[3] = v27; /*0x100a0255e*/
    v14[2] = v26; /*0x100a02569*/
    v14[1] = v25; /*0x100a02578*/
    v14[0] = v24; /*0x100a0257f*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h177314c7b9b971ef(v13, v14); /*0x100a02594*/
    qmemcpy(a1, v13, 0x70u); /*0x100a025a8*/
  }
  else
  {
    qmemcpy(v13, v14, 0x60u); /*0x100a025c6*/
    v21 = 0; /*0x100a025c9*/
    v22 = 1; /*0x100a025d1*/
    v23 = 0; /*0x100a025d9*/
    v26 = 1610612768; /*0x100a025e1*/
    v24 = &v21; /*0x100a025ed*/
    v25 = &anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a025f8*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a02603*/
                            v13,
                            (__int64 *)&v24,
                            v7,
                            (__int64)&anon_25039b10cfdf58965817401c80a821a1_817,
                            v8,
                            v9) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a026ba*/
        &anon_25039b10cfdf58965817401c80a821a1_818,
        55,
        &v18,
        &anon_25039b10cfdf58965817401c80a821a1_840,
        &anon_25039b10cfdf58965817401c80a821a1_820);
    v18 = v21; /*0x100a02618*/
    v19 = v22; /*0x100a0261c*/
    v20 = v23; /*0x100a02624*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v14); /*0x100a0262f*/
    v10 = v18; /*0x100a02638*/
    v11 = v19; /*0x100a0263c*/
    v15 = v18; /*0x100a02640*/
    v16 = v19; /*0x100a02647*/
    v17 = v20; /*0x100a0264b*/
    a1[3] = v20; /*0x100a0264f*/
    a1[2] = v11; /*0x100a02654*/
    a1[1] = v10; /*0x100a02659*/
    *a1 = 0x8000000000000000LL; /*0x100a02668*/
    if ( v5 ) /*0x100a0266f*/
      a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100a0267c*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(a2, a5); /*0x100a02684*/
  return a1; /*0x100a0268c*/
}