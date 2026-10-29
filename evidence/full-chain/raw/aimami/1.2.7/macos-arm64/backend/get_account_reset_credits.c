// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfc5706c0b9f07a9c; addr: 0x100705fe0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:27Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfc5706c0b9f07a9c(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+0h] [rbp-F00h] BYREF
  __int64 v7; // [rsp+168h] [rbp-D98h]
  __int64 v8; // [rsp+170h] [rbp-D90h]
  __int64 v9; // [rsp+178h] [rbp-D88h]
  __int64 v10; // [rsp+180h] [rbp-D80h]
  _BYTE v11[2272]; // [rsp+188h] [rbp-D78h] BYREF
  __int64 v12; // [rsp+A68h] [rbp-498h]
  char v13; // [rsp+A70h] [rbp-490h]
  _QWORD __dst[141]; // [rsp+A78h] [rbp-488h] BYREF

  v1 = __src[113]; /*0x100705ffc*/
  __dst[67] = __src[117]; /*0x10070600a*/
  v2 = __src[115]; /*0x100706011*/
  __dst[66] = __src[116]; /*0x10070601f*/
  __dst[65] = v2; /*0x100706026*/
  memcpy(__dst, __src, 0x208u); /*0x10070603f*/
  v9 = __src[112]; /*0x10070604b*/
  v3 = __src[110]; /*0x100706052*/
  v8 = __src[111]; /*0x100706060*/
  v7 = v3; /*0x100706067*/
  memcpy(v11, __dst, 0x468u); /*0x10070607d*/
  v11[1128] = 0; /*0x100706082*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x10070609b*/
  v10 = v1; /*0x1007060a0*/
  v12 = __src[114]; /*0x1007060ae*/
  v13 = 0; /*0x1007060b5*/
  v4 = tauri::async_runtime::spawn::h313fcefe479f4ce6(__srca); /*0x1007060c4*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1007060ca*/
  if ( (_BYTE)result ) /*0x1007060d1*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1007060d6*/
  return result; /*0x1007060db*/
}