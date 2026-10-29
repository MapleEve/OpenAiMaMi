// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he2da6ce1573c6b82; addr: 0x100703310; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::he2da6ce1573c6b82(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[519]; // [rsp+0h] [rbp-3270h] BYREF
  _BYTE __srca[360]; // [rsp+1038h] [rbp-2238h] BYREF
  __int64 v8; // [rsp+11A0h] [rbp-20D0h]
  __int64 v9; // [rsp+11A8h] [rbp-20C8h]
  __int64 v10; // [rsp+11B0h] [rbp-20C0h]
  __int64 v11; // [rsp+11B8h] [rbp-20B8h]
  _QWORD v12[519]; // [rsp+11C0h] [rbp-20B0h] BYREF
  char v13; // [rsp+21F8h] [rbp-1078h]
  __int64 v14; // [rsp+2250h] [rbp-1020h]
  __int64 v15; // [rsp+3240h] [rbp-30h]
  char v16; // [rsp+3248h] [rbp-28h]

  v14 = 0; /*0x100703322*/
  v12[18] = 0; /*0x100703331*/
  __dst[74] = 0; /*0x100703340*/
  v1 = __src[113]; /*0x100703359*/
  __dst[67] = __src[117]; /*0x100703367*/
  v2 = __src[115]; /*0x10070336e*/
  __dst[66] = __src[116]; /*0x10070337c*/
  __dst[65] = v2; /*0x100703383*/
  memcpy(__dst, __src, 0x208u); /*0x10070339c*/
  v10 = __src[112]; /*0x1007033a8*/
  v3 = __src[110]; /*0x1007033af*/
  v9 = __src[111]; /*0x1007033bd*/
  v8 = v3; /*0x1007033c4*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1007033da*/
  v13 = 0; /*0x1007033df*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1007033f8*/
  v11 = v1; /*0x1007033fd*/
  v15 = __src[114]; /*0x10070340b*/
  v16 = 0; /*0x10070340f*/
  v4 = tauri::async_runtime::spawn::h455e150d7f616a8a(__srca); /*0x10070341b*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x100703421*/
  if ( (_BYTE)result ) /*0x100703428*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x10070342d*/
  return result; /*0x100703432*/
}