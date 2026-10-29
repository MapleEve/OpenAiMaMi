// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hd52f2fbb94f6c575; addr: 0x100702a00; session: <审计会话>; decompiled_at: 2026-10-26T03:33:20Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hd52f2fbb94f6c575(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[279]; // [rsp+0h] [rbp-1BF0h] BYREF
  _BYTE __srca[360]; // [rsp+8B8h] [rbp-1338h] BYREF
  __int64 v8; // [rsp+A20h] [rbp-11D0h]
  __int64 v9; // [rsp+A28h] [rbp-11C8h]
  __int64 v10; // [rsp+A30h] [rbp-11C0h]
  __int64 v11; // [rsp+A38h] [rbp-11B8h]
  _QWORD v12[279]; // [rsp+A40h] [rbp-11B0h] BYREF
  char v13; // [rsp+12F8h] [rbp-8F8h]
  __int64 v14; // [rsp+1BC0h] [rbp-30h]
  char v15; // [rsp+1BC8h] [rbp-28h]

  v12[50] = 0; /*0x100702a12*/
  v1 = __src[113]; /*0x100702a2b*/
  __dst[67] = __src[117]; /*0x100702a39*/
  v2 = __src[115]; /*0x100702a40*/
  __dst[66] = __src[116]; /*0x100702a4e*/
  __dst[65] = v2; /*0x100702a55*/
  memcpy(__dst, __src, 0x208u); /*0x100702a6e*/
  v10 = __src[112]; /*0x100702a7a*/
  v3 = __src[110]; /*0x100702a81*/
  v9 = __src[111]; /*0x100702a8f*/
  v8 = v3; /*0x100702a96*/
  memcpy(v12, __dst, sizeof(v12)); /*0x100702aac*/
  v13 = 0; /*0x100702ab1*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x100702aca*/
  v11 = v1; /*0x100702acf*/
  v14 = __src[114]; /*0x100702add*/
  v15 = 0; /*0x100702ae1*/
  v4 = tauri::async_runtime::spawn::hcf12321f3adcfa2e(__srca); /*0x100702aed*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x100702af3*/
  if ( (_BYTE)result ) /*0x100702afa*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x100702aff*/
  return result; /*0x100702b04*/
}