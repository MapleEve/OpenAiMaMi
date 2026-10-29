// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h05f43f4b3adfce11; addr: 0x1006f31f0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:24Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h05f43f4b3adfce11(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-AC8h] BYREF
  __int64 v7; // [rsp+170h] [rbp-960h]
  __int64 v8; // [rsp+178h] [rbp-958h]
  __int64 v9; // [rsp+180h] [rbp-950h]
  __int64 v10; // [rsp+188h] [rbp-948h]
  _BYTE v11[1552]; // [rsp+190h] [rbp-940h] BYREF
  __int64 v12; // [rsp+7A0h] [rbp-330h]
  char v13; // [rsp+7A8h] [rbp-328h]
  _QWORD __dst[96]; // [rsp+7B0h] [rbp-320h] BYREF

  v1 = __src[113]; /*0x1006f320c*/
  __dst[67] = __src[117]; /*0x1006f321a*/
  v2 = __src[115]; /*0x1006f3221*/
  __dst[66] = __src[116]; /*0x1006f322f*/
  __dst[65] = v2; /*0x1006f3236*/
  memcpy(__dst, __src, 0x208u); /*0x1006f324f*/
  v9 = __src[112]; /*0x1006f325b*/
  v3 = __src[110]; /*0x1006f3262*/
  v8 = __src[111]; /*0x1006f3270*/
  v7 = v3; /*0x1006f3277*/
  memcpy(v11, __dst, 0x300u); /*0x1006f328d*/
  v11[768] = 0; /*0x1006f3292*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f32ab*/
  v10 = v1; /*0x1006f32b0*/
  v12 = __src[114]; /*0x1006f32be*/
  v13 = 0; /*0x1006f32c5*/
  v4 = tauri::async_runtime::spawn::hff66323d9d9b0ac4(__srca); /*0x1006f32d4*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f32da*/
  if ( (_BYTE)result ) /*0x1006f32e1*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f32e6*/
  return result; /*0x1006f32eb*/
}