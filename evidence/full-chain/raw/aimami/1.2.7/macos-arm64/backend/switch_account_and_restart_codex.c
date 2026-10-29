// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6583eecf558dca4b; addr: 0x1006faf50; session: <审计会话>; decompiled_at: 2026-10-26T03:34:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6583eecf558dca4b(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[267]; // [rsp+0h] [rbp-1AD0h] BYREF
  _BYTE __srca[360]; // [rsp+858h] [rbp-1278h] BYREF
  __int64 v8; // [rsp+9C0h] [rbp-1110h]
  __int64 v9; // [rsp+9C8h] [rbp-1108h]
  __int64 v10; // [rsp+9D0h] [rbp-1100h]
  __int64 v11; // [rsp+9D8h] [rbp-10F8h]
  _QWORD v12[267]; // [rsp+9E0h] [rbp-10F0h] BYREF
  char v13; // [rsp+1238h] [rbp-898h]
  __int64 v14; // [rsp+1AA0h] [rbp-30h]
  char v15; // [rsp+1AA8h] [rbp-28h]

  v12[26] = 0; /*0x1006faf62*/
  v1 = __src[113]; /*0x1006faf7b*/
  __dst[67] = __src[117]; /*0x1006faf89*/
  v2 = __src[115]; /*0x1006faf90*/
  __dst[66] = __src[116]; /*0x1006faf9e*/
  __dst[65] = v2; /*0x1006fafa5*/
  memcpy(__dst, __src, 0x208u); /*0x1006fafbe*/
  v10 = __src[112]; /*0x1006fafca*/
  v3 = __src[110]; /*0x1006fafd1*/
  v9 = __src[111]; /*0x1006fafdf*/
  v8 = v3; /*0x1006fafe6*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006faffc*/
  v13 = 0; /*0x1006fb001*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006fb01a*/
  v11 = v1; /*0x1006fb01f*/
  v14 = __src[114]; /*0x1006fb02d*/
  v15 = 0; /*0x1006fb031*/
  v4 = tauri::async_runtime::spawn::h53c657f841154456(__srca); /*0x1006fb03d*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fb043*/
  if ( (_BYTE)result ) /*0x1006fb04a*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fb04f*/
  return result; /*0x1006fb054*/
}