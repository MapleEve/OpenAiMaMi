// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_{{closure}}::_{{closure}}::h3815054df0415aa5; addr: 0x1006f5490; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3815054df0415aa5(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-E28h] BYREF
  __int64 v7; // [rsp+170h] [rbp-CC0h]
  __int64 v8; // [rsp+178h] [rbp-CB8h]
  __int64 v9; // [rsp+180h] [rbp-CB0h]
  __int64 v10; // [rsp+188h] [rbp-CA8h]
  _BYTE v11[2128]; // [rsp+190h] [rbp-CA0h] BYREF
  __int64 v12; // [rsp+9E0h] [rbp-450h]
  char v13; // [rsp+9E8h] [rbp-448h]
  _QWORD __dst[132]; // [rsp+9F0h] [rbp-440h] BYREF

  v1 = __src[113]; /*0x1006f54ac*/
  __dst[67] = __src[117]; /*0x1006f54ba*/
  v2 = __src[115]; /*0x1006f54c1*/
  __dst[66] = __src[116]; /*0x1006f54cf*/
  __dst[65] = v2; /*0x1006f54d6*/
  memcpy(__dst, __src, 0x208u); /*0x1006f54ef*/
  v9 = __src[112]; /*0x1006f54fb*/
  v3 = __src[110]; /*0x1006f5502*/
  v8 = __src[111]; /*0x1006f5510*/
  v7 = v3; /*0x1006f5517*/
  memcpy(v11, __dst, 0x420u); /*0x1006f552d*/
  v11[1056] = 0; /*0x1006f5532*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f554b*/
  v10 = v1; /*0x1006f5550*/
  v12 = __src[114]; /*0x1006f555e*/
  v13 = 0; /*0x1006f5565*/
  v4 = tauri::async_runtime::spawn::hf8ceb6def305f158(__srca); /*0x1006f5574*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f557a*/
  if ( (_BYTE)result ) /*0x1006f5581*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f5586*/
  return result; /*0x1006f558b*/
}