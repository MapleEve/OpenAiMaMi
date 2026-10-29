// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha92863620b7e8c0f; addr: 0x1006fee70; session: <审计会话>; decompiled_at: 2026-10-26T03:22:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha92863620b7e8c0f(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[690]; // [rsp+8h] [rbp-4278h] BYREF
  _BYTE __srca[360]; // [rsp+1598h] [rbp-2CE8h] BYREF
  __int64 v8; // [rsp+1700h] [rbp-2B80h]
  __int64 v9; // [rsp+1708h] [rbp-2B78h]
  __int64 v10; // [rsp+1710h] [rbp-2B70h]
  __int64 v11; // [rsp+1718h] [rbp-2B68h]
  _QWORD v12[690]; // [rsp+1720h] [rbp-2B60h] BYREF
  char v13; // [rsp+2CB0h] [rbp-15D0h]
  __int64 v14; // [rsp+3260h] [rbp-1020h]
  __int64 v15; // [rsp+4250h] [rbp-30h]
  char v16; // [rsp+4258h] [rbp-28h]

  v14 = 0; /*0x1006fee82*/
  v12[360] = 0; /*0x1006fee91*/
  __dst[587] = 0; /*0x1006feea0*/
  __dst[75] = 0; /*0x1006feeaf*/
  v1 = __src[113]; /*0x1006feec8*/
  __dst[67] = __src[117]; /*0x1006feed6*/
  v2 = __src[115]; /*0x1006feedd*/
  __dst[66] = __src[116]; /*0x1006feeeb*/
  __dst[65] = v2; /*0x1006feef2*/
  memcpy(__dst, __src, 0x208u); /*0x1006fef0b*/
  v10 = __src[112]; /*0x1006fef17*/
  v3 = __src[110]; /*0x1006fef1e*/
  v9 = __src[111]; /*0x1006fef2c*/
  v8 = v3; /*0x1006fef33*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006fef49*/
  v13 = 0; /*0x1006fef4e*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006fef67*/
  v11 = v1; /*0x1006fef6c*/
  v15 = __src[114]; /*0x1006fef7a*/
  v16 = 0; /*0x1006fef7e*/
  v4 = tauri::async_runtime::spawn::hae143355e10cb9d2(__srca); /*0x1006fef8a*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fef90*/
  if ( (_BYTE)result ) /*0x1006fef97*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fef9c*/
  return result; /*0x1006fefa1*/
}