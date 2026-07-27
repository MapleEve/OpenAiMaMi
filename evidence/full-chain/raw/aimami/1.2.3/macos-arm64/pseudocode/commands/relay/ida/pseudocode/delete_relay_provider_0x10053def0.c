// __ZN13codexmate_lib8commands5relay21delete_relay_provider @ 0x10053def0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::relay::delete_relay_provider::hfce5b74d936ec669(
        _QWORD *a1,
        __int64 a2,
        _QWORD **a3,
        __int64 *a4)
{
  void *v6; // r14
  __int64 v8; // rsi
  __int64 v10; // rax
  _BYTE v11[96]; // [rsp+8h] [rbp-128h] BYREF
  _QWORD v12[12]; // [rsp+68h] [rbp-C8h] BYREF
  _QWORD v13[3]; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v14; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v15; // [rsp+E8h] [rbp-48h]
  __int64 v16; // [rsp+F0h] [rbp-40h]
  __int64 v17; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v18; // [rsp+100h] [rbp-30h]
  __int64 v19; // [rsp+108h] [rbp-28h]

  v6 = (void *)a4[1]; /*0x10053df0b*/
  codexmate_lib::core::relay::manager::RelayManager::delete::h416d4edd721ced6b(v12, a3, v6, a4[2]); /*0x10053df20*/
  if ( LODWORD(v12[0]) == 11 ) /*0x10053df2c*/
  {
    codexmate_lib::commands::tray_menu::refresh_tray_menu::hb183d41320062922(a2); /*0x10053df31*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf6edda7bcbeb3a54((__int64)v11, (__int64)a3); /*0x10053df3d*/
    qmemcpy(a1, v11, 0x50u); /*0x10053df51*/
    v8 = *a4; /*0x10053df54*/
    if ( *a4 ) /*0x10053df54*/
LABEL_3:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, 1); /*0x10053df5c*/
  }
  else
  {
    qmemcpy(v11, v12, sizeof(v11)); /*0x10053df9a*/
    v17 = 0; /*0x10053df9d*/
    v18 = 1; /*0x10053dfa5*/
    v19 = 0; /*0x10053dfad*/
    v13[2] = 1610612768; /*0x10053dfb5*/
    v13[0] = &v17; /*0x10053dfc1*/
    v13[1] = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10053dfcc*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10053dfd7*/
                            v11,
                            v13) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053e05c*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        &v14,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    v14 = v17; /*0x10053dfe8*/
    v15 = v18; /*0x10053dfec*/
    v16 = v19; /*0x10053dff4*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v12); /*0x10053dfff*/
    a1[3] = v16; /*0x10053e008*/
    v10 = v14; /*0x10053e00d*/
    a1[2] = v15; /*0x10053e015*/
    a1[1] = v10; /*0x10053e01a*/
    *a1 = 0x8000000000000000LL; /*0x10053e029*/
    v8 = *a4; /*0x10053e02d*/
    if ( *a4 ) /*0x10053e02d*/
      goto LABEL_3; /*0x10053e033*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x10053df69*/
  return a1; /*0x10053df74*/
}