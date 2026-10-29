// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1e92b67b31812bcf; addr: 0x1006f46a0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:24Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1e92b67b31812bcf(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[369]; // [rsp+0h] [rbp-2460h] BYREF
  _BYTE __srca[360]; // [rsp+B88h] [rbp-18D8h] BYREF
  __int64 v8; // [rsp+CF0h] [rbp-1770h]
  __int64 v9; // [rsp+CF8h] [rbp-1768h]
  __int64 v10; // [rsp+D00h] [rbp-1760h]
  __int64 v11; // [rsp+D08h] [rbp-1758h]
  _QWORD v12[369]; // [rsp+D10h] [rbp-1750h] BYREF
  char v13; // [rsp+1898h] [rbp-BC8h]
  __int64 v14; // [rsp+2430h] [rbp-30h]
  char v15; // [rsp+2438h] [rbp-28h]

  v12[230] = 0; /*0x1006f46b2*/
  __dst[136] = 0; /*0x1006f46c1*/
  v1 = __src[113]; /*0x1006f46da*/
  __dst[67] = __src[117]; /*0x1006f46e8*/
  v2 = __src[115]; /*0x1006f46ef*/
  __dst[66] = __src[116]; /*0x1006f46fd*/
  __dst[65] = v2; /*0x1006f4704*/
  memcpy(__dst, __src, 0x208u); /*0x1006f471d*/
  v10 = __src[112]; /*0x1006f4729*/
  v3 = __src[110]; /*0x1006f4730*/
  v9 = __src[111]; /*0x1006f473e*/
  v8 = v3; /*0x1006f4745*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006f475b*/
  v13 = 0; /*0x1006f4760*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f4779*/
  v11 = v1; /*0x1006f477e*/
  v14 = __src[114]; /*0x1006f478c*/
  v15 = 0; /*0x1006f4790*/
  v4 = tauri::async_runtime::spawn::h26105eb6d9dea5a9(__srca); /*0x1006f479c*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f47a2*/
  if ( (_BYTE)result ) /*0x1006f47a9*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f47ae*/
  return result; /*0x1006f47b3*/
}