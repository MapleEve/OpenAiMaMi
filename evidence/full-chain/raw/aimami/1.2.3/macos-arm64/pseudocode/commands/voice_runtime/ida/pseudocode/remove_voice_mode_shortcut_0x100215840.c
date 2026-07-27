// __ZN13codexmate_lib8commands13voice_runtime26remove_voice_mode_shortcut @ 0x100215840 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::remove_voice_mode_shortcut::hc6c0a1843ba39c74(
        _QWORD *__dst,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD v9[4]; // [rsp+0h] [rbp-620h] BYREF
  _BYTE __dsta[680]; // [rsp+20h] [rbp-600h] BYREF
  _QWORD v11[99]; // [rsp+2C8h] [rbp-358h] BYREF
  __int64 v12; // [rsp+5E0h] [rbp-40h]
  __int64 v13; // [rsp+5E8h] [rbp-38h]
  __int64 v14; // [rsp+5F0h] [rbp-30h]

  v5 = a3[1]; /*0x10021585d*/
  codexmate_lib::core::voice::runtime::remove_mode_shortcut::hb36ae4780f9670c5(v11); /*0x10021586f*/
  v12 = v11[1]; /*0x100215882*/
  v13 = v11[2]; /*0x10021588d*/
  v14 = v11[3]; /*0x100215898*/
  if ( v11[0] != 2 ) /*0x1002158a0*/
  {
    memcpy(__dsta, &v11[4], sizeof(__dsta)); /*0x100215907*/
    v9[0] = v11[0]; /*0x10021590c*/
    v9[1] = v12; /*0x10021591b*/
    v9[2] = v13; /*0x100215922*/
    v9[3] = v14; /*0x10021592d*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(v11, v9); /*0x100215942*/
    memcpy(__dst, v11, 0x318u); /*0x100215956*/
    v7 = *a3; /*0x10021595b*/
    if ( !*a3 ) /*0x10021595b*/
      goto LABEL_4; /*0x100215962*/
    goto LABEL_3; /*0x100215962*/
  }
  __dst[3] = v14; /*0x1002158a6*/
  v6 = v12; /*0x1002158aa*/
  __dst[2] = v13; /*0x1002158b2*/
  __dst[1] = v6; /*0x1002158b6*/
  *__dst = 2; /*0x1002158ba*/
  v7 = *a3; /*0x1002158c1*/
  if ( *a3 ) /*0x1002158c1*/
LABEL_3:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, 1); /*0x1002158ca*/
LABEL_4:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1002158d7*/
  return __dst; /*0x1002158e2*/
}