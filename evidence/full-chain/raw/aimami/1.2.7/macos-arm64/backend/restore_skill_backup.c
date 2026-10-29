// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h560314ab706e389e; addr: 0x1006f7f50; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h560314ab706e389e(
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

  v12[230] = 0; /*0x1006f7f62*/
  __dst[136] = 0; /*0x1006f7f71*/
  v1 = __src[113]; /*0x1006f7f8a*/
  __dst[67] = __src[117]; /*0x1006f7f98*/
  v2 = __src[115]; /*0x1006f7f9f*/
  __dst[66] = __src[116]; /*0x1006f7fad*/
  __dst[65] = v2; /*0x1006f7fb4*/
  memcpy(__dst, __src, 0x208u); /*0x1006f7fcd*/
  v10 = __src[112]; /*0x1006f7fd9*/
  v3 = __src[110]; /*0x1006f7fe0*/
  v9 = __src[111]; /*0x1006f7fee*/
  v8 = v3; /*0x1006f7ff5*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006f800b*/
  v13 = 0; /*0x1006f8010*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f8029*/
  v11 = v1; /*0x1006f802e*/
  v14 = __src[114]; /*0x1006f803c*/
  v15 = 0; /*0x1006f8040*/
  v4 = tauri::async_runtime::spawn::h8d3d916d4c4135b5(__srca); /*0x1006f804c*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f8052*/
  if ( (_BYTE)result ) /*0x1006f8059*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f805e*/
  return result; /*0x1006f8063*/
}