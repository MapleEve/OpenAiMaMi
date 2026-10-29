// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc932cde23d73c1b5; addr: 0x100701b70; session: <审计会话>; decompiled_at: 2026-10-26T03:22:26Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc932cde23d73c1b5(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-14E8h] BYREF
  __int64 v7; // [rsp+170h] [rbp-1380h]
  __int64 v8; // [rsp+178h] [rbp-1378h]
  __int64 v9; // [rsp+180h] [rbp-1370h]
  __int64 v10; // [rsp+188h] [rbp-1368h]
  _QWORD v11[204]; // [rsp+190h] [rbp-1360h] BYREF
  char v12; // [rsp+7F0h] [rbp-D00h]
  __int64 v13; // [rsp+E60h] [rbp-690h]
  char v14; // [rsp+E68h] [rbp-688h]
  _QWORD __dst[204]; // [rsp+E70h] [rbp-680h] BYREF

  v11[104] = 0; /*0x100701b82*/
  v1 = __src[113]; /*0x100701b9b*/
  __dst[67] = __src[117]; /*0x100701ba9*/
  v2 = __src[115]; /*0x100701bb0*/
  __dst[66] = __src[116]; /*0x100701bbe*/
  __dst[65] = v2; /*0x100701bc5*/
  memcpy(__dst, __src, 0x208u); /*0x100701bde*/
  v9 = __src[112]; /*0x100701bea*/
  v3 = __src[110]; /*0x100701bf1*/
  v8 = __src[111]; /*0x100701bff*/
  v7 = v3; /*0x100701c06*/
  memcpy(v11, __dst, sizeof(v11)); /*0x100701c1c*/
  v12 = 0; /*0x100701c21*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x100701c3a*/
  v10 = v1; /*0x100701c3f*/
  v13 = __src[114]; /*0x100701c4d*/
  v14 = 0; /*0x100701c54*/
  v4 = tauri::async_runtime::spawn::h0215a899fc95efbf(__srca); /*0x100701c63*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x100701c69*/
  if ( (_BYTE)result ) /*0x100701c70*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x100701c75*/
  return result; /*0x100701c7a*/
}