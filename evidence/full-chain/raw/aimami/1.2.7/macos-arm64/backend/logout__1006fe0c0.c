// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_{{closure}}::_{{closure}}::h97423308d6f1d6b5; addr: 0x1006fe0c0; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:32Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h97423308d6f1d6b5(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[504]; // [rsp+8h] [rbp-3108h] BYREF
  _QWORD __srca[49]; // [rsp+FC8h] [rbp-2148h] BYREF
  _QWORD v8[504]; // [rsp+1150h] [rbp-1FC0h] BYREF
  char v9; // [rsp+2110h] [rbp-1000h]
  __int64 v10; // [rsp+30E0h] [rbp-30h]
  char v11; // [rsp+30E8h] [rbp-28h]

  v8[500] = 0; /*0x1006fe0d2*/
  __srca[37] = 0; /*0x1006fe0e1*/
  __dst[29] = 0; /*0x1006fe0f0*/
  v1 = __src[113]; /*0x1006fe109*/
  __dst[67] = __src[117]; /*0x1006fe117*/
  v2 = __src[115]; /*0x1006fe11e*/
  __dst[66] = __src[116]; /*0x1006fe12c*/
  __dst[65] = v2; /*0x1006fe133*/
  memcpy(__dst, __src, 0x208u); /*0x1006fe14c*/
  __srca[47] = __src[112]; /*0x1006fe158*/
  v3 = __src[110]; /*0x1006fe15f*/
  __srca[46] = __src[111]; /*0x1006fe16d*/
  __srca[45] = v3; /*0x1006fe174*/
  memcpy(v8, __dst, sizeof(v8)); /*0x1006fe18a*/
  v9 = 0; /*0x1006fe18f*/
  memcpy(__srca, __src + 65, 0x168u); /*0x1006fe1a8*/
  __srca[48] = v1; /*0x1006fe1ad*/
  v10 = __src[114]; /*0x1006fe1bb*/
  v11 = 0; /*0x1006fe1bf*/
  v4 = tauri::async_runtime::spawn::h4c319a7b5d00dec6(__srca); /*0x1006fe1cb*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fe1d1*/
  if ( (_BYTE)result ) /*0x1006fe1d8*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fe1dd*/
  return result; /*0x1006fe1e2*/
}