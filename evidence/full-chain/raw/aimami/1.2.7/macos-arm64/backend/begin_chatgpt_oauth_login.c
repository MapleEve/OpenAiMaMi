// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hdf88e763f872df0f; addr: 0x100702d40; session: <审计会话>; decompiled_at: 2026-10-26T03:22:22Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hdf88e763f872df0f(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[642]; // [rsp+8h] [rbp-3DF8h] BYREF
  _BYTE __srca[360]; // [rsp+1418h] [rbp-29E8h] BYREF
  __int64 v8; // [rsp+1580h] [rbp-2880h]
  __int64 v9; // [rsp+1588h] [rbp-2878h]
  __int64 v10; // [rsp+1590h] [rbp-2870h]
  __int64 v11; // [rsp+1598h] [rbp-2868h]
  _QWORD v12[642]; // [rsp+15A0h] [rbp-2860h] BYREF
  char v13; // [rsp+29B0h] [rbp-1450h]
  __int64 v14; // [rsp+2DE0h] [rbp-1020h]
  __int64 v15; // [rsp+3DD0h] [rbp-30h]
  char v16; // [rsp+3DD8h] [rbp-28h]

  v14 = 0; /*0x100702d52*/
  v12[264] = 0; /*0x100702d61*/
  __dst[443] = 0; /*0x100702d70*/
  v1 = __src[113]; /*0x100702d89*/
  __dst[67] = __src[117]; /*0x100702d97*/
  v2 = __src[115]; /*0x100702d9e*/
  __dst[66] = __src[116]; /*0x100702dac*/
  __dst[65] = v2; /*0x100702db3*/
  memcpy(__dst, __src, 0x208u); /*0x100702dcc*/
  v10 = __src[112]; /*0x100702dd8*/
  v3 = __src[110]; /*0x100702ddf*/
  v9 = __src[111]; /*0x100702ded*/
  v8 = v3; /*0x100702df4*/
  memcpy(v12, __dst, sizeof(v12)); /*0x100702e0a*/
  v13 = 0; /*0x100702e0f*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x100702e28*/
  v11 = v1; /*0x100702e2d*/
  v15 = __src[114]; /*0x100702e3b*/
  v16 = 0; /*0x100702e3f*/
  v4 = tauri::async_runtime::spawn::h03b423e8d3451b7f(__srca); /*0x100702e4b*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x100702e51*/
  if ( (_BYTE)result ) /*0x100702e58*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x100702e5d*/
  return result; /*0x100702e62*/
}