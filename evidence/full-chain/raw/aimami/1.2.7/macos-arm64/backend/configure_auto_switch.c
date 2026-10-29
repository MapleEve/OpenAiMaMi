// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1564042fee397acf; addr: 0x1006f3ed0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:23Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1564042fee397acf(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[525]; // [rsp+0h] [rbp-3300h] BYREF
  _BYTE __srca[360]; // [rsp+1068h] [rbp-2298h] BYREF
  __int64 v8; // [rsp+11D0h] [rbp-2130h]
  __int64 v9; // [rsp+11D8h] [rbp-2128h]
  __int64 v10; // [rsp+11E0h] [rbp-2120h]
  __int64 v11; // [rsp+11E8h] [rbp-2118h]
  _QWORD v12[525]; // [rsp+11F0h] [rbp-2110h] BYREF
  char v13; // [rsp+2258h] [rbp-10A8h]
  __int64 v14; // [rsp+22E0h] [rbp-1020h]
  __int64 v15; // [rsp+32D0h] [rbp-30h]
  char v16; // [rsp+32D8h] [rbp-28h]

  v14 = 0; /*0x1006f3ee2*/
  v12[30] = 0; /*0x1006f3ef1*/
  __dst[92] = 0; /*0x1006f3f00*/
  v1 = __src[113]; /*0x1006f3f19*/
  __dst[67] = __src[117]; /*0x1006f3f27*/
  v2 = __src[115]; /*0x1006f3f2e*/
  __dst[66] = __src[116]; /*0x1006f3f3c*/
  __dst[65] = v2; /*0x1006f3f43*/
  memcpy(__dst, __src, 0x208u); /*0x1006f3f5c*/
  v10 = __src[112]; /*0x1006f3f68*/
  v3 = __src[110]; /*0x1006f3f6f*/
  v9 = __src[111]; /*0x1006f3f7d*/
  v8 = v3; /*0x1006f3f84*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006f3f9a*/
  v13 = 0; /*0x1006f3f9f*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f3fb8*/
  v11 = v1; /*0x1006f3fbd*/
  v15 = __src[114]; /*0x1006f3fcb*/
  v16 = 0; /*0x1006f3fcf*/
  v4 = tauri::async_runtime::spawn::h2d683a7677dd078f(__srca); /*0x1006f3fdb*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f3fe1*/
  if ( (_BYTE)result ) /*0x1006f3fe8*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f3fed*/
  return result; /*0x1006f3ff2*/
}