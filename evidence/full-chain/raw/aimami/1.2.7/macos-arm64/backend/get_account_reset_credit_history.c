// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h7c92912f016dde0a; addr: 0x1006fd060; session: <审计会话>; decompiled_at: 2026-10-26T03:22:27Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h7c92912f016dde0a(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-FD8h] BYREF
  __int64 v7; // [rsp+170h] [rbp-E70h]
  __int64 v8; // [rsp+178h] [rbp-E68h]
  __int64 v9; // [rsp+180h] [rbp-E60h]
  __int64 v10; // [rsp+188h] [rbp-E58h]
  _BYTE v11[2416]; // [rsp+190h] [rbp-E50h] BYREF
  __int64 v12; // [rsp+B00h] [rbp-4E0h]
  char v13; // [rsp+B08h] [rbp-4D8h]
  _QWORD __dst[150]; // [rsp+B10h] [rbp-4D0h] BYREF

  v1 = __src[113]; /*0x1006fd07c*/
  __dst[67] = __src[117]; /*0x1006fd08a*/
  v2 = __src[115]; /*0x1006fd091*/
  __dst[66] = __src[116]; /*0x1006fd09f*/
  __dst[65] = v2; /*0x1006fd0a6*/
  memcpy(__dst, __src, 0x208u); /*0x1006fd0bf*/
  v9 = __src[112]; /*0x1006fd0cb*/
  v3 = __src[110]; /*0x1006fd0d2*/
  v8 = __src[111]; /*0x1006fd0e0*/
  v7 = v3; /*0x1006fd0e7*/
  memcpy(v11, __dst, 0x4B0u); /*0x1006fd0fd*/
  v11[1200] = 0; /*0x1006fd102*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006fd11b*/
  v10 = v1; /*0x1006fd120*/
  v12 = __src[114]; /*0x1006fd12e*/
  v13 = 0; /*0x1006fd135*/
  v4 = tauri::async_runtime::spawn::h121bbc085e8f9123(__srca); /*0x1006fd144*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fd14a*/
  if ( (_BYTE)result ) /*0x1006fd151*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fd156*/
  return result; /*0x1006fd15b*/
}