// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::delete_relay_provider::h377b05ca2f92eb23; addr: 0x100a03060; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:29Z
_QWORD *__fastcall codexmate_lib::commands::relay::delete_relay_provider::h377b05ca2f92eb23(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        double a5)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-128h] BYREF
  _BYTE v15[88]; // [rsp+10h] [rbp-120h] BYREF
  _BYTE v16[96]; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v17[3]; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-48h]
  __int64 v20; // [rsp+F0h] [rbp-40h]
  __int64 v21; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v22; // [rsp+100h] [rbp-30h]
  __int64 v23; // [rsp+108h] [rbp-28h]

  v7 = a4[1]; /*0x100a0307b*/
  codexmate_lib::core::relay::manager::RelayManager::delete::hdb473d73b49427d7(&v14, a3, v7, a4[2]); /*0x100a03090*/
  codexmate_lib::commands::tray_menu::refresh_tray_menu::h5662bcb50277f8c6(a2); /*0x100a03098*/
  if ( v14 == 11 ) /*0x100a030a8*/
  {
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::ha5ae8915f2eb3f75(v16); /*0x100a030b1*/
    qmemcpy(a1, v16, 0x50u); /*0x100a030c5*/
    v11 = *a4; /*0x100a030c8*/
    if ( *a4 ) /*0x100a030c8*/
LABEL_3:
      a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v11, 1); /*0x100a030d0*/
  }
  else
  {
    qmemcpy(&v16[8], v15, 0x58u); /*0x100a0310b*/
    *(_QWORD *)v16 = v14; /*0x100a0310e*/
    v21 = 0; /*0x100a03115*/
    v22 = 1; /*0x100a0311d*/
    v23 = 0; /*0x100a03125*/
    v17[2] = 1610612768; /*0x100a0312d*/
    v17[0] = (__int64)&v21; /*0x100a03139*/
    v17[1] = (__int64)&anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a03144*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a03153*/
                            v16,
                            v17,
                            v8,
                            0,
                            v9,
                            v10) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a031d8*/
        &anon_25039b10cfdf58965817401c80a821a1_818,
        55,
        &v18,
        &anon_25039b10cfdf58965817401c80a821a1_840,
        &anon_25039b10cfdf58965817401c80a821a1_820);
    v18 = v21; /*0x100a03164*/
    v19 = v22; /*0x100a03168*/
    v20 = v23; /*0x100a03170*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v16); /*0x100a0317b*/
    a1[3] = v20; /*0x100a03184*/
    v13 = v18; /*0x100a03189*/
    a1[2] = v19; /*0x100a03191*/
    a1[1] = v13; /*0x100a03196*/
    *a1 = 0x8000000000000000LL; /*0x100a031a5*/
    v11 = *a4; /*0x100a031a9*/
    if ( *a4 ) /*0x100a031a9*/
      goto LABEL_3; /*0x100a031af*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(a2, a5); /*0x100a030dd*/
  return a1; /*0x100a030e8*/
}