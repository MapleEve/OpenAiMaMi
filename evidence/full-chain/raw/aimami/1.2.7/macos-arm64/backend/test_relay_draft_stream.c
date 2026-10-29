// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h7a25f467cac3d4df; addr: 0x1006fce10; session: <审计会话>; decompiled_at: 2026-10-26T03:34:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h7a25f467cac3d4df(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[645]; // [rsp+0h] [rbp-3E40h] BYREF
  _BYTE __srca[360]; // [rsp+1428h] [rbp-2A18h] BYREF
  __int64 v8; // [rsp+1590h] [rbp-28B0h]
  __int64 v9; // [rsp+1598h] [rbp-28A8h]
  __int64 v10; // [rsp+15A0h] [rbp-28A0h]
  __int64 v11; // [rsp+15A8h] [rbp-2898h]
  _QWORD v12[645]; // [rsp+15B0h] [rbp-2890h] BYREF
  char v13; // [rsp+29D8h] [rbp-1468h]
  __int64 v14; // [rsp+2E20h] [rbp-1020h]
  __int64 v15; // [rsp+3E10h] [rbp-30h]
  char v16; // [rsp+3E18h] [rbp-28h]

  v14 = 0; /*0x1006fce22*/
  v12[270] = 0; /*0x1006fce31*/
  __dst[452] = 0; /*0x1006fce40*/
  v1 = __src[113]; /*0x1006fce59*/
  __dst[67] = __src[117]; /*0x1006fce67*/
  v2 = __src[115]; /*0x1006fce6e*/
  __dst[66] = __src[116]; /*0x1006fce7c*/
  __dst[65] = v2; /*0x1006fce83*/
  memcpy(__dst, __src, 0x208u); /*0x1006fce9c*/
  v10 = __src[112]; /*0x1006fcea8*/
  v3 = __src[110]; /*0x1006fceaf*/
  v9 = __src[111]; /*0x1006fcebd*/
  v8 = v3; /*0x1006fcec4*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006fceda*/
  v13 = 0; /*0x1006fcedf*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006fcef8*/
  v11 = v1; /*0x1006fcefd*/
  v15 = __src[114]; /*0x1006fcf0b*/
  v16 = 0; /*0x1006fcf0f*/
  v4 = tauri::async_runtime::spawn::h2d01329da26e0735(__srca); /*0x1006fcf1b*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fcf21*/
  if ( (_BYTE)result ) /*0x1006fcf28*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fcf2d*/
  return result; /*0x1006fcf32*/
}