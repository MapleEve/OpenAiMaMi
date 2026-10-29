// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h433e322939b89536; addr: 0x1006f5dd0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:24Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h433e322939b89536(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-13C8h] BYREF
  __int64 v7; // [rsp+170h] [rbp-1260h]
  __int64 v8; // [rsp+178h] [rbp-1258h]
  __int64 v9; // [rsp+180h] [rbp-1250h]
  __int64 v10; // [rsp+188h] [rbp-1248h]
  _QWORD v11[192]; // [rsp+190h] [rbp-1240h] BYREF
  char v12; // [rsp+790h] [rbp-C40h]
  __int64 v13; // [rsp+DA0h] [rbp-630h]
  char v14; // [rsp+DA8h] [rbp-628h]
  _QWORD __dst[192]; // [rsp+DB0h] [rbp-620h] BYREF

  v11[68] = 0; /*0x1006f5de2*/
  v1 = __src[113]; /*0x1006f5dfb*/
  __dst[67] = __src[117]; /*0x1006f5e09*/
  v2 = __src[115]; /*0x1006f5e10*/
  __dst[66] = __src[116]; /*0x1006f5e1e*/
  __dst[65] = v2; /*0x1006f5e25*/
  memcpy(__dst, __src, 0x208u); /*0x1006f5e3e*/
  v9 = __src[112]; /*0x1006f5e4a*/
  v3 = __src[110]; /*0x1006f5e51*/
  v8 = __src[111]; /*0x1006f5e5f*/
  v7 = v3; /*0x1006f5e66*/
  memcpy(v11, __dst, sizeof(v11)); /*0x1006f5e7c*/
  v12 = 0; /*0x1006f5e81*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f5e9a*/
  v10 = v1; /*0x1006f5e9f*/
  v13 = __src[114]; /*0x1006f5ead*/
  v14 = 0; /*0x1006f5eb4*/
  v4 = tauri::async_runtime::spawn::h64c9cfc57c59bae6(__srca); /*0x1006f5ec3*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f5ec9*/
  if ( (_BYTE)result ) /*0x1006f5ed0*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f5ed5*/
  return result; /*0x1006f5eda*/
}