// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf488f1210d3a049d; addr: 0x100705430; session: <审计会话>; decompiled_at: 2026-10-26T03:22:26Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf488f1210d3a049d(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-BE8h] BYREF
  __int64 v7; // [rsp+170h] [rbp-A80h]
  __int64 v8; // [rsp+178h] [rbp-A78h]
  __int64 v9; // [rsp+180h] [rbp-A70h]
  __int64 v10; // [rsp+188h] [rbp-A68h]
  _BYTE v11[1744]; // [rsp+190h] [rbp-A60h] BYREF
  __int64 v12; // [rsp+860h] [rbp-390h]
  char v13; // [rsp+868h] [rbp-388h]
  _QWORD __dst[108]; // [rsp+870h] [rbp-380h] BYREF

  v1 = __src[113]; /*0x10070544c*/
  __dst[67] = __src[117]; /*0x10070545a*/
  v2 = __src[115]; /*0x100705461*/
  __dst[66] = __src[116]; /*0x10070546f*/
  __dst[65] = v2; /*0x100705476*/
  memcpy(__dst, __src, 0x208u); /*0x10070548f*/
  v9 = __src[112]; /*0x10070549b*/
  v3 = __src[110]; /*0x1007054a2*/
  v8 = __src[111]; /*0x1007054b0*/
  v7 = v3; /*0x1007054b7*/
  memcpy(v11, __dst, 0x360u); /*0x1007054cd*/
  v11[864] = 0; /*0x1007054d2*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1007054eb*/
  v10 = v1; /*0x1007054f0*/
  v12 = __src[114]; /*0x1007054fe*/
  v13 = 0; /*0x100705505*/
  v4 = tauri::async_runtime::spawn::hbf0a51761bbcf433(__srca); /*0x100705514*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x10070551a*/
  if ( (_BYTE)result ) /*0x100705521*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x100705526*/
  return result; /*0x10070552b*/
}