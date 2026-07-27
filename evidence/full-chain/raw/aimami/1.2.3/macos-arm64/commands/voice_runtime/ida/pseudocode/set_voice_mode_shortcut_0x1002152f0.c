// __ZN13codexmate_lib8commands13voice_runtime23set_voice_mode_shortcut @ 0x1002152f0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::set_voice_mode_shortcut::hb2a8625638bf68ad(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        __int64 a9)
{
  __int64 v11; // rax
  _QWORD v13[4]; // [rsp+10h] [rbp-610h] BYREF
  _BYTE __dsta[680]; // [rsp+30h] [rbp-5F0h] BYREF
  _QWORD v15[99]; // [rsp+2D8h] [rbp-348h] BYREF
  __int64 v16; // [rsp+5F0h] [rbp-30h]
  __int64 v17; // [rsp+5F8h] [rbp-28h]
  __int64 v18; // [rsp+600h] [rbp-20h]

  if ( (a8 & 1) == 0 ) /*0x10021530e*/
    a9 = 0; /*0x100215316*/
  codexmate_lib::core::voice::runtime::set_mode_shortcut::h0b6716797ad0a2da(v15, a7, a9); /*0x10021532d*/
  v16 = v15[1]; /*0x100215340*/
  v17 = v15[2]; /*0x10021534b*/
  v18 = v15[3]; /*0x100215356*/
  if ( v15[0] == 2 ) /*0x10021535e*/
  {
    __dst[3] = v18; /*0x100215364*/
    v11 = v16; /*0x100215368*/
    __dst[2] = v17; /*0x100215370*/
    __dst[1] = v11; /*0x100215374*/
    *__dst = 2; /*0x100215378*/
  }
  else
  {
    memcpy(__dsta, &v15[4], sizeof(__dsta)); /*0x100215394*/
    v13[0] = v15[0]; /*0x100215399*/
    v13[1] = v16; /*0x1002153a8*/
    v13[2] = v17; /*0x1002153af*/
    v13[3] = v18; /*0x1002153ba*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(v15, v13); /*0x1002153cf*/
    memcpy(__dst, v15, 0x318u); /*0x1002153e3*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1002153eb*/
  return __dst; /*0x1002153f3*/
}