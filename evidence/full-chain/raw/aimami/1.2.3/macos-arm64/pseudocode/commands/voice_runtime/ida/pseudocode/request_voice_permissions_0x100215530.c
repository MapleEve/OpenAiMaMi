// __ZN13codexmate_lib8commands13voice_runtime25request_voice_permissions @ 0x100215530 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::request_voice_permissions::he1132bb1afe35502(
        _QWORD *__dst,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD v6[4]; // [rsp+0h] [rbp-640h] BYREF
  _BYTE __dsta[680]; // [rsp+20h] [rbp-620h] BYREF
  _QWORD v8[102]; // [rsp+2C8h] [rbp-378h] BYREF
  __int64 v9; // [rsp+5F8h] [rbp-48h]
  __int64 v10; // [rsp+600h] [rbp-40h]
  __int64 v11; // [rsp+608h] [rbp-38h]
  __int64 v12; // [rsp+610h] [rbp-30h]
  __int64 v13; // [rsp+618h] [rbp-28h]
  __int64 v14; // [rsp+620h] [rbp-20h]

  v2 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100215549*/
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(v2 + 24) + 32LL))(*(_QWORD *)(v2 + 16), 0, a2); /*0x10021555b*/
  codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(v8); /*0x100215568*/
  v12 = v8[1]; /*0x10021557b*/
  v13 = v8[2]; /*0x100215586*/
  v14 = v8[3]; /*0x100215591*/
  if ( v8[0] == 2 ) /*0x100215599*/
  {
    v3 = v12; /*0x10021559f*/
    v4 = v13; /*0x1002155a3*/
    v9 = v12; /*0x1002155a7*/
    v10 = v13; /*0x1002155ab*/
    v11 = v14; /*0x1002155af*/
    __dst[3] = v14; /*0x1002155b3*/
    __dst[2] = v4; /*0x1002155b7*/
    __dst[1] = v3; /*0x1002155bb*/
    *__dst = 2; /*0x1002155bf*/
  }
  else
  {
    memcpy(__dsta, &v8[4], sizeof(__dsta)); /*0x1002155db*/
    v8[99] = v12; /*0x1002155e8*/
    v9 = v12; /*0x1002155f0*/
    v6[0] = v8[0]; /*0x1002155f4*/
    v6[1] = v12; /*0x1002155fb*/
    v6[2] = v13; /*0x100215602*/
    v6[3] = v14; /*0x100215609*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(v8, v6); /*0x10021561e*/
    memcpy(__dst, v8, 0x318u); /*0x100215632*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x10021563a*/
  return __dst; /*0x100215642*/
}