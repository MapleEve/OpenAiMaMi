// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9b03da8807bc702c; addr: 0x1006fe5b0; session: <审计会话>; decompiled_at: 2026-10-26T03:34:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9b03da8807bc702c(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[633]; // [rsp+0h] [rbp-3D20h] BYREF
  _BYTE __srca[360]; // [rsp+13C8h] [rbp-2958h] BYREF
  __int64 v8; // [rsp+1530h] [rbp-27F0h]
  __int64 v9; // [rsp+1538h] [rbp-27E8h]
  __int64 v10; // [rsp+1540h] [rbp-27E0h]
  __int64 v11; // [rsp+1548h] [rbp-27D8h]
  _QWORD v12[633]; // [rsp+1550h] [rbp-27D0h] BYREF
  char v13; // [rsp+2918h] [rbp-1408h]
  __int64 v14; // [rsp+2D00h] [rbp-1020h]
  __int64 v15; // [rsp+3CF0h] [rbp-30h]
  char v16; // [rsp+3CF8h] [rbp-28h]

  v14 = 0; /*0x1006fe5c2*/
  v12[246] = 0; /*0x1006fe5d1*/
  __dst[416] = 0; /*0x1006fe5e0*/
  v1 = __src[113]; /*0x1006fe5f9*/
  __dst[67] = __src[117]; /*0x1006fe607*/
  v2 = __src[115]; /*0x1006fe60e*/
  __dst[66] = __src[116]; /*0x1006fe61c*/
  __dst[65] = v2; /*0x1006fe623*/
  memcpy(__dst, __src, 0x208u); /*0x1006fe63c*/
  v10 = __src[112]; /*0x1006fe648*/
  v3 = __src[110]; /*0x1006fe64f*/
  v9 = __src[111]; /*0x1006fe65d*/
  v8 = v3; /*0x1006fe664*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006fe67a*/
  v13 = 0; /*0x1006fe67f*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006fe698*/
  v11 = v1; /*0x1006fe69d*/
  v15 = __src[114]; /*0x1006fe6ab*/
  v16 = 0; /*0x1006fe6af*/
  v4 = tauri::async_runtime::spawn::h1db49b2456916981(__srca); /*0x1006fe6bb*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fe6c1*/
  if ( (_BYTE)result ) /*0x1006fe6c8*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fe6cd*/
  return result; /*0x1006fe6d2*/
}