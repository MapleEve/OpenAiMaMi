// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9ff8c3b63ba2b3da; addr: 0x1006fe6f0; session: <审计会话>; decompiled_at: 2026-10-26T03:34:29Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9ff8c3b63ba2b3da(
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

  v12[26] = 0; /*0x1006fe702*/
  v1 = __src[113]; /*0x1006fe71b*/
  __dst[67] = __src[117]; /*0x1006fe729*/
  v2 = __src[115]; /*0x1006fe730*/
  __dst[66] = __src[116]; /*0x1006fe73e*/
  __dst[65] = v2; /*0x1006fe745*/
  memcpy(__dst, __src, 0x208u); /*0x1006fe75e*/
  v10 = __src[112]; /*0x1006fe76a*/
  v3 = __src[110]; /*0x1006fe771*/
  v9 = __src[111]; /*0x1006fe77f*/
  v8 = v3; /*0x1006fe786*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006fe79c*/
  v13 = 0; /*0x1006fe7a1*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006fe7ba*/
  v11 = v1; /*0x1006fe7bf*/
  v14 = __src[114]; /*0x1006fe7cd*/
  v15 = 0; /*0x1006fe7d1*/
  v4 = tauri::async_runtime::spawn::h885bdcf0e232b987(__srca); /*0x1006fe7dd*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fe7e3*/
  if ( (_BYTE)result ) /*0x1006fe7ea*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fe7ef*/
  return result; /*0x1006fe7f4*/
}