// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h279cc4245696cc25; addr: 0x1006f4ed0; session: <审计会话>; decompiled_at: 2026-10-26T03:33:20Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h279cc4245696cc25(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+0h] [rbp-1410h] BYREF
  __int64 v7; // [rsp+168h] [rbp-12A8h]
  __int64 v8; // [rsp+170h] [rbp-12A0h]
  __int64 v9; // [rsp+178h] [rbp-1298h]
  __int64 v10; // [rsp+180h] [rbp-1290h]
  _QWORD v11[195]; // [rsp+188h] [rbp-1288h] BYREF
  char v12; // [rsp+7A0h] [rbp-C70h]
  __int64 v13; // [rsp+DC8h] [rbp-648h]
  char v14; // [rsp+DD0h] [rbp-640h]
  _QWORD __dst[195]; // [rsp+DD8h] [rbp-638h] BYREF

  v11[77] = 0; /*0x1006f4ee2*/
  v1 = __src[113]; /*0x1006f4efb*/
  __dst[67] = __src[117]; /*0x1006f4f09*/
  v2 = __src[115]; /*0x1006f4f10*/
  __dst[66] = __src[116]; /*0x1006f4f1e*/
  __dst[65] = v2; /*0x1006f4f25*/
  memcpy(__dst, __src, 0x208u); /*0x1006f4f3e*/
  v9 = __src[112]; /*0x1006f4f4a*/
  v3 = __src[110]; /*0x1006f4f51*/
  v8 = __src[111]; /*0x1006f4f5f*/
  v7 = v3; /*0x1006f4f66*/
  memcpy(v11, __dst, sizeof(v11)); /*0x1006f4f7c*/
  v12 = 0; /*0x1006f4f81*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f4f9a*/
  v10 = v1; /*0x1006f4f9f*/
  v13 = __src[114]; /*0x1006f4fad*/
  v14 = 0; /*0x1006f4fb4*/
  v4 = tauri::async_runtime::spawn::h583c2f57a430ed88(__srca); /*0x1006f4fc3*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f4fc9*/
  if ( (_BYTE)result ) /*0x1006f4fd0*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f4fd5*/
  return result; /*0x1006f4fda*/
}