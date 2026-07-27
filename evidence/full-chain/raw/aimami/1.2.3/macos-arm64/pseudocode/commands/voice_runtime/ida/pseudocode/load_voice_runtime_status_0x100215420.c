// __ZN13codexmate_lib8commands13voice_runtime25load_voice_runtime_status @ 0x100215420 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::load_voice_runtime_status::h2a141da9fdd724d5(
        _QWORD *__dst,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[4]; // [rsp+0h] [rbp-610h] BYREF
  _BYTE __dsta[680]; // [rsp+20h] [rbp-5F0h] BYREF
  _QWORD v6[99]; // [rsp+2C8h] [rbp-348h] BYREF
  __int64 v7; // [rsp+5E0h] [rbp-30h]
  __int64 v8; // [rsp+5E8h] [rbp-28h]
  __int64 v9; // [rsp+5F0h] [rbp-20h]

  codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(v6); /*0x10021543d*/
  v7 = v6[1]; /*0x100215450*/
  v8 = v6[2]; /*0x10021545b*/
  v9 = v6[3]; /*0x100215466*/
  if ( v6[0] == 2 ) /*0x10021546e*/
  {
    __dst[3] = v9; /*0x100215474*/
    v2 = v7; /*0x100215478*/
    __dst[2] = v8; /*0x100215480*/
    __dst[1] = v2; /*0x100215484*/
    *__dst = 2; /*0x100215488*/
  }
  else
  {
    memcpy(__dsta, &v6[4], sizeof(__dsta)); /*0x1002154a4*/
    v4[0] = v6[0]; /*0x1002154a9*/
    v4[1] = v7; /*0x1002154b8*/
    v4[2] = v8; /*0x1002154bf*/
    v4[3] = v9; /*0x1002154ca*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(v6, v4); /*0x1002154df*/
    memcpy(__dst, v6, 0x318u); /*0x1002154f3*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1002154fb*/
  return __dst; /*0x100215503*/
}