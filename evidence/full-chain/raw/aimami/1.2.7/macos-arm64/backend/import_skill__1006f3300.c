// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h06c94738ac87e249; addr: 0x1006f3300; session: <审计会话>; decompiled_at: 2026-10-26T03:22:31Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h06c94738ac87e249(
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

  v12[230] = 0; /*0x1006f3312*/
  __dst[136] = 0; /*0x1006f3321*/
  v1 = __src[113]; /*0x1006f333a*/
  __dst[67] = __src[117]; /*0x1006f3348*/
  v2 = __src[115]; /*0x1006f334f*/
  __dst[66] = __src[116]; /*0x1006f335d*/
  __dst[65] = v2; /*0x1006f3364*/
  memcpy(__dst, __src, 0x208u); /*0x1006f337d*/
  v10 = __src[112]; /*0x1006f3389*/
  v3 = __src[110]; /*0x1006f3390*/
  v9 = __src[111]; /*0x1006f339e*/
  v8 = v3; /*0x1006f33a5*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006f33bb*/
  v13 = 0; /*0x1006f33c0*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f33d9*/
  v11 = v1; /*0x1006f33de*/
  v14 = __src[114]; /*0x1006f33ec*/
  v15 = 0; /*0x1006f33f0*/
  v4 = tauri::async_runtime::spawn::hcd549dc56d7855ac(__srca); /*0x1006f33fc*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f3402*/
  if ( (_BYTE)result ) /*0x1006f3409*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f340e*/
  return result; /*0x1006f3413*/
}