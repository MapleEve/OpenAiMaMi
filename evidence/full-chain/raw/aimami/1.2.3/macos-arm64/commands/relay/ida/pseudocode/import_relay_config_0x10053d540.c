// __ZN13codexmate_lib8commands5relay19import_relay_config @ 0x10053d540 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::relay::import_relay_config::he8675bfbd55552b0(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __m128i a5,
        __m128i a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  _BYTE v11[112]; // [rsp+18h] [rbp-158h] BYREF
  __int64 v12[12]; // [rsp+88h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+E8h] [rbp-88h]
  __int64 v14; // [rsp+F0h] [rbp-80h]
  __int64 v15; // [rsp+F8h] [rbp-78h]
  __int64 v16; // [rsp+100h] [rbp-70h] BYREF
  __int64 v17; // [rsp+108h] [rbp-68h]
  __int64 v18; // [rsp+110h] [rbp-60h]
  __int64 v19; // [rsp+118h] [rbp-58h] BYREF
  __int64 v20; // [rsp+120h] [rbp-50h]
  __int64 v21; // [rsp+128h] [rbp-48h]
  __int64 *v22; // [rsp+130h] [rbp-40h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+138h] [rbp-38h]
  __int64 v24; // [rsp+140h] [rbp-30h]
  __int64 v25; // [rsp+148h] [rbp-28h]

  v6 = *a4; /*0x10053d558*/
  v7 = a4[1]; /*0x10053d55b*/
  codexmate_lib::core::relay::manager::RelayManager::import_config::hbe26932a7c7d94f1(v12, a3, v7, a4[2], a5, a6); /*0x10053d570*/
  if ( LODWORD(v12[0]) == 11 ) /*0x10053d57c*/
  {
    v13 = v12[2]; /*0x10053d59e*/
    v14 = v12[3]; /*0x10053d5a5*/
    v15 = v12[4]; /*0x10053d5a9*/
    v23 = (__int64 (__fastcall **)())v12[2]; /*0x10053d5ad*/
    v24 = v12[3]; /*0x10053d5b1*/
    v25 = v12[4]; /*0x10053d5b5*/
    v22 = (__int64 *)v12[1]; /*0x10053d5b9*/
    if ( v6 ) /*0x10053d5c0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x10053d5cd*/
    codexmate_lib::commands::tray_menu::refresh_tray_menu::hb183d41320062922(a2); /*0x10053d5d5*/
    v12[3] = v25; /*0x10053d5de*/
    v12[2] = v24; /*0x10053d5e9*/
    v12[1] = (__int64)v23; /*0x10053d5f8*/
    v12[0] = (__int64)v22; /*0x10053d5ff*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h805ff6e1850606e3((__int64)v11, v12); /*0x10053d614*/
    qmemcpy(a1, v11, 0x70u); /*0x10053d628*/
  }
  else
  {
    qmemcpy(v11, v12, 0x60u); /*0x10053d646*/
    v19 = 0; /*0x10053d649*/
    v20 = 1; /*0x10053d651*/
    v21 = 0; /*0x10053d659*/
    v24 = 1610612768; /*0x10053d661*/
    v22 = &v19; /*0x10053d66d*/
    v23 = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10053d678*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10053d683*/
                            v11,
                            &v22) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053d73a*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        &v16,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    v16 = v19; /*0x10053d698*/
    v17 = v20; /*0x10053d69c*/
    v18 = v21; /*0x10053d6a4*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v12); /*0x10053d6af*/
    v8 = v16; /*0x10053d6b8*/
    v9 = v17; /*0x10053d6bc*/
    v13 = v16; /*0x10053d6c0*/
    v14 = v17; /*0x10053d6c7*/
    v15 = v18; /*0x10053d6cb*/
    a1[3] = v18; /*0x10053d6cf*/
    a1[2] = v9; /*0x10053d6d4*/
    a1[1] = v8; /*0x10053d6d9*/
    *a1 = 0x8000000000000000LL; /*0x10053d6e8*/
    if ( v6 ) /*0x10053d6ef*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x10053d6fc*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x10053d704*/
  return a1; /*0x10053d70c*/
}