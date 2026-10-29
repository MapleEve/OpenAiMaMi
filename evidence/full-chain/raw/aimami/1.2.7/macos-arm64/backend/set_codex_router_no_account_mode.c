// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h5f32b760e9f69503; addr: 0x1006f9350; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h5f32b760e9f69503(
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

  v11[77] = 0; /*0x1006f9362*/
  v1 = __src[113]; /*0x1006f937b*/
  __dst[67] = __src[117]; /*0x1006f9389*/
  v2 = __src[115]; /*0x1006f9390*/
  __dst[66] = __src[116]; /*0x1006f939e*/
  __dst[65] = v2; /*0x1006f93a5*/
  memcpy(__dst, __src, 0x208u); /*0x1006f93be*/
  v9 = __src[112]; /*0x1006f93ca*/
  v3 = __src[110]; /*0x1006f93d1*/
  v8 = __src[111]; /*0x1006f93df*/
  v7 = v3; /*0x1006f93e6*/
  memcpy(v11, __dst, sizeof(v11)); /*0x1006f93fc*/
  v12 = 0; /*0x1006f9401*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f941a*/
  v10 = v1; /*0x1006f941f*/
  v13 = __src[114]; /*0x1006f942d*/
  v14 = 0; /*0x1006f9434*/
  v4 = tauri::async_runtime::spawn::h8d4f4d2d729fe8c0(__srca); /*0x1006f9443*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f9449*/
  if ( (_BYTE)result ) /*0x1006f9450*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f9455*/
  return result; /*0x1006f945a*/
}