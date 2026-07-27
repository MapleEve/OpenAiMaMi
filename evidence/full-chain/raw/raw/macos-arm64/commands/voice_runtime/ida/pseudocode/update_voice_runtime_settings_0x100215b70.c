// __ZN13codexmate_lib8commands13voice_runtime29update_voice_runtime_settings @ 0x100215b70 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::update_voice_runtime_settings::hdabfe1c4c8d038f3(
        _QWORD *__dst,
        __int64 a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  _QWORD v12[4]; // [rsp+10h] [rbp-660h] BYREF
  _BYTE __dsta[680]; // [rsp+30h] [rbp-640h] BYREF
  _QWORD v14[99]; // [rsp+2D8h] [rbp-398h] BYREF
  unsigned __int64 v15; // [rsp+5F0h] [rbp-80h] BYREF
  __int64 v16; // [rsp+638h] [rbp-38h]
  __int64 v17; // [rsp+640h] [rbp-30h]
  __int64 v18; // [rsp+648h] [rbp-28h]

  v15 = 0x8000000000000000LL; /*0x100215b99*/
  codexmate_lib::core::voice::runtime::update_settings_internal::h84dae0cf7084379f( /*0x100215bac*/
    (unsigned int)v14,
    a2,
    a3,
    (unsigned int)&v15,
    a5,
    a6,
    a7);
  v9 = *a4; /*0x100215bb1*/
  if ( *a4 != 0x8000000000000000LL && v9 ) /*0x100215bbc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4[1], v9, 1); /*0x100215bc7*/
  v16 = v14[1]; /*0x100215bda*/
  v17 = v14[2]; /*0x100215be5*/
  v18 = v14[3]; /*0x100215bf0*/
  if ( v14[0] == 2 ) /*0x100215bf8*/
  {
    __dst[3] = v18; /*0x100215bfe*/
    v10 = v16; /*0x100215c02*/
    __dst[2] = v17; /*0x100215c0a*/
    __dst[1] = v10; /*0x100215c0e*/
    *__dst = 2; /*0x100215c12*/
  }
  else
  {
    memcpy(__dsta, &v14[4], sizeof(__dsta)); /*0x100215c2e*/
    v12[0] = v14[0]; /*0x100215c33*/
    v12[1] = v16; /*0x100215c42*/
    v12[2] = v17; /*0x100215c49*/
    v12[3] = v18; /*0x100215c54*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(v14, v12); /*0x100215c69*/
    memcpy(__dst, v14, 0x318u); /*0x100215c7d*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x100215c85*/
  return __dst; /*0x100215c8d*/
}