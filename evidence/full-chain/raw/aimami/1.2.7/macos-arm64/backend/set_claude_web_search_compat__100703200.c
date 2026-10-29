// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_{{closure}}::_{{closure}}::he1810057a7cd0121; addr: 0x100703200; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:33Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he1810057a7cd0121(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+0h] [rbp-960h] BYREF
  __int64 v7; // [rsp+168h] [rbp-7F8h]
  __int64 v8; // [rsp+170h] [rbp-7F0h]
  __int64 v9; // [rsp+178h] [rbp-7E8h]
  __int64 v10; // [rsp+180h] [rbp-7E0h]
  _BYTE v11[1312]; // [rsp+188h] [rbp-7D8h] BYREF
  __int64 v12; // [rsp+6A8h] [rbp-2B8h]
  char v13; // [rsp+6B0h] [rbp-2B0h]
  _QWORD __dst[81]; // [rsp+6B8h] [rbp-2A8h] BYREF

  v1 = __src[113]; /*0x10070321c*/
  __dst[67] = __src[117]; /*0x10070322a*/
  v2 = __src[115]; /*0x100703231*/
  __dst[66] = __src[116]; /*0x10070323f*/
  __dst[65] = v2; /*0x100703246*/
  memcpy(__dst, __src, 0x208u); /*0x10070325f*/
  v9 = __src[112]; /*0x10070326b*/
  v3 = __src[110]; /*0x100703272*/
  v8 = __src[111]; /*0x100703280*/
  v7 = v3; /*0x100703287*/
  memcpy(v11, __dst, 0x288u); /*0x10070329d*/
  v11[648] = 0; /*0x1007032a2*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1007032bb*/
  v10 = v1; /*0x1007032c0*/
  v12 = __src[114]; /*0x1007032ce*/
  v13 = 0; /*0x1007032d5*/
  v4 = tauri::async_runtime::spawn::haccd8f023fce39e2(__srca); /*0x1007032e4*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1007032ea*/
  if ( (_BYTE)result ) /*0x1007032f1*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1007032f6*/
  return result; /*0x1007032fb*/
}