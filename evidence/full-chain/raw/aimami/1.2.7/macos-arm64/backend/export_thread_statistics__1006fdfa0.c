// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_{{closure}}::_{{closure}}::h96f780d86b9312c1; addr: 0x1006fdfa0; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:30Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h96f780d86b9312c1(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-1218h] BYREF
  __int64 v7; // [rsp+170h] [rbp-10B0h]
  __int64 v8; // [rsp+178h] [rbp-10A8h]
  __int64 v9; // [rsp+180h] [rbp-10A0h]
  __int64 v10; // [rsp+188h] [rbp-1098h]
  _QWORD v11[174]; // [rsp+190h] [rbp-1090h] BYREF
  char v12; // [rsp+700h] [rbp-B20h]
  __int64 v13; // [rsp+C80h] [rbp-5A0h]
  char v14; // [rsp+C88h] [rbp-598h]
  _QWORD __dst[174]; // [rsp+C90h] [rbp-590h] BYREF

  v11[14] = 0; /*0x1006fdfb2*/
  v1 = __src[113]; /*0x1006fdfcb*/
  __dst[67] = __src[117]; /*0x1006fdfd9*/
  v2 = __src[115]; /*0x1006fdfe0*/
  __dst[66] = __src[116]; /*0x1006fdfee*/
  __dst[65] = v2; /*0x1006fdff5*/
  memcpy(__dst, __src, 0x208u); /*0x1006fe00e*/
  v9 = __src[112]; /*0x1006fe01a*/
  v3 = __src[110]; /*0x1006fe021*/
  v8 = __src[111]; /*0x1006fe02f*/
  v7 = v3; /*0x1006fe036*/
  memcpy(v11, __dst, sizeof(v11)); /*0x1006fe04c*/
  v12 = 0; /*0x1006fe051*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006fe06a*/
  v10 = v1; /*0x1006fe06f*/
  v13 = __src[114]; /*0x1006fe07d*/
  v14 = 0; /*0x1006fe084*/
  v4 = tauri::async_runtime::spawn::hc080bf57454d1c4e(__srca); /*0x1006fe093*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fe099*/
  if ( (_BYTE)result ) /*0x1006fe0a0*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fe0a5*/
  return result; /*0x1006fe0aa*/
}