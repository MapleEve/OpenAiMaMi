// __ZN13codexmate_lib8commands5relay21upsert_relay_provider @ 0x10053f260 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::relay::upsert_relay_provider::haed180b7ea673c1f(
        _QWORD *__dst,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        double a5,
        double a6)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  _BYTE v10[232]; // [rsp+8h] [rbp-388h] BYREF
  _QWORD v11[39]; // [rsp+F0h] [rbp-2A0h] BYREF
  _QWORD v12[29]; // [rsp+228h] [rbp-168h] BYREF
  __int64 v13; // [rsp+310h] [rbp-80h]
  __int64 v14; // [rsp+318h] [rbp-78h]
  __int64 v15; // [rsp+320h] [rbp-70h]
  __int64 v16; // [rsp+328h] [rbp-68h]
  __int64 v17; // [rsp+330h] [rbp-60h]
  __int64 v18; // [rsp+338h] [rbp-58h]
  __int64 v19; // [rsp+340h] [rbp-50h] BYREF
  __int64 v20; // [rsp+348h] [rbp-48h]
  __int64 v21; // [rsp+350h] [rbp-40h]
  __int64 v22; // [rsp+358h] [rbp-38h] BYREF
  __int64 v23; // [rsp+360h] [rbp-30h]
  __int64 v24; // [rsp+368h] [rbp-28h]

  codexmate_lib::core::relay::manager::RelayManager::upsert::h5326725eb16ae26b(v11, a3, a4, a5, a6); /*0x10053f285*/
  if ( __OFSUB__(-v11[0], 1) ) /*0x10053f294*/
  {
    qmemcpy(v10, &v11[1], 0x60u); /*0x10053f2b6*/
    v22 = 0; /*0x10053f2b9*/
    v23 = 1; /*0x10053f2c1*/
    v24 = 0; /*0x10053f2c9*/
    v12[2] = 1610612768; /*0x10053f2d1*/
    v12[0] = &v22; /*0x10053f2e0*/
    v12[1] = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10053f2ee*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10053f2ff*/
                            v10,
                            v12) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053f43c*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        &v19,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    v19 = v22; /*0x10053f314*/
    v20 = v23; /*0x10053f318*/
    v21 = v24; /*0x10053f320*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v11[1]); /*0x10053f327*/
    v7 = v19; /*0x10053f33a*/
    v8 = v20; /*0x10053f33e*/
    v13 = v19; /*0x10053f342*/
    v14 = v20; /*0x10053f346*/
    v15 = v21; /*0x10053f34a*/
    __dst[3] = v21; /*0x10053f34e*/
    __dst[2] = v8; /*0x10053f352*/
    __dst[1] = v7; /*0x10053f356*/
    *__dst = 0x8000000000000000LL; /*0x10053f35a*/
  }
  else
  {
    v18 = v11[3]; /*0x10053f366*/
    v17 = v11[2]; /*0x10053f371*/
    v16 = v11[1]; /*0x10053f375*/
    memcpy(&v12[4], &v11[4], 0xC8u); /*0x10053f38c*/
    v13 = v11[1]; /*0x10053f399*/
    v12[1] = v11[1]; /*0x10053f3a1*/
    v12[2] = v11[2]; /*0x10053f3a8*/
    v12[3] = v11[3]; /*0x10053f3af*/
    v12[0] = v11[0]; /*0x10053f3b6*/
    codexmate_lib::commands::tray_menu::refresh_tray_menu::hb183d41320062922(a2); /*0x10053f3c0*/
    memcpy(v10, v12, sizeof(v10)); /*0x10053f3db*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8e7cb16a780864e6((__int64)v11, v10); /*0x10053f3ea*/
    memcpy(__dst, v11, 0x138u); /*0x10053f3fe*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x10053f406*/
  return __dst; /*0x10053f40e*/
}