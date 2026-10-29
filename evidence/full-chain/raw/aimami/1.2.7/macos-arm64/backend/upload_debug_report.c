// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h92b9ed62eab2b0b4; addr: 0x1006fde60; session: <审计会话>; decompiled_at: 2026-10-26T03:34:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h92b9ed62eab2b0b4(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[516]; // [rsp+8h] [rbp-3228h] BYREF
  _BYTE __srca[360]; // [rsp+1028h] [rbp-2208h] BYREF
  __int64 v8; // [rsp+1190h] [rbp-20A0h]
  __int64 v9; // [rsp+1198h] [rbp-2098h]
  __int64 v10; // [rsp+11A0h] [rbp-2090h]
  __int64 v11; // [rsp+11A8h] [rbp-2088h]
  _QWORD v12[516]; // [rsp+11B0h] [rbp-2080h] BYREF
  char v13; // [rsp+21D0h] [rbp-1060h]
  __int64 v14; // [rsp+2210h] [rbp-1020h]
  __int64 v15; // [rsp+3200h] [rbp-30h]
  char v16; // [rsp+3208h] [rbp-28h]

  v14 = 0; /*0x1006fde72*/
  v12[12] = 0; /*0x1006fde81*/
  __dst[65] = 0; /*0x1006fde90*/
  v1 = __src[113]; /*0x1006fdea9*/
  __dst[67] = __src[117]; /*0x1006fdeb7*/
  v2 = __src[115]; /*0x1006fdebe*/
  __dst[66] = __src[116]; /*0x1006fdecc*/
  __dst[65] = v2; /*0x1006fded3*/
  memcpy(__dst, __src, 0x208u); /*0x1006fdeec*/
  v10 = __src[112]; /*0x1006fdef8*/
  v3 = __src[110]; /*0x1006fdeff*/
  v9 = __src[111]; /*0x1006fdf0d*/
  v8 = v3; /*0x1006fdf14*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006fdf2a*/
  v13 = 0; /*0x1006fdf2f*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006fdf48*/
  v11 = v1; /*0x1006fdf4d*/
  v15 = __src[114]; /*0x1006fdf5b*/
  v16 = 0; /*0x1006fdf5f*/
  v4 = tauri::async_runtime::spawn::h8ca2ac35d2965182(__srca); /*0x1006fdf6b*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fdf71*/
  if ( (_BYTE)result ) /*0x1006fdf78*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fdf7d*/
  return result; /*0x1006fdf82*/
}