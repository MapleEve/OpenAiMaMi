// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2f544097037198f2; addr: 0x1006f4ff0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:32Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2f544097037198f2(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[378]; // [rsp+8h] [rbp-2538h] BYREF
  _BYTE __srca[360]; // [rsp+BD8h] [rbp-1968h] BYREF
  __int64 v8; // [rsp+D40h] [rbp-1800h]
  __int64 v9; // [rsp+D48h] [rbp-17F8h]
  __int64 v10; // [rsp+D50h] [rbp-17F0h]
  __int64 v11; // [rsp+D58h] [rbp-17E8h]
  _QWORD v12[378]; // [rsp+D60h] [rbp-17E0h] BYREF
  char v13; // [rsp+1930h] [rbp-C10h]
  __int64 v14; // [rsp+2510h] [rbp-30h]
  char v15; // [rsp+2518h] [rbp-28h]

  v12[248] = 0; /*0x1006f5002*/
  __dst[163] = 0; /*0x1006f5011*/
  v1 = __src[113]; /*0x1006f502a*/
  __dst[67] = __src[117]; /*0x1006f5038*/
  v2 = __src[115]; /*0x1006f503f*/
  __dst[66] = __src[116]; /*0x1006f504d*/
  __dst[65] = v2; /*0x1006f5054*/
  memcpy(__dst, __src, 0x208u); /*0x1006f506d*/
  v10 = __src[112]; /*0x1006f5079*/
  v3 = __src[110]; /*0x1006f5080*/
  v9 = __src[111]; /*0x1006f508e*/
  v8 = v3; /*0x1006f5095*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006f50ab*/
  v13 = 0; /*0x1006f50b0*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f50c9*/
  v11 = v1; /*0x1006f50ce*/
  v14 = __src[114]; /*0x1006f50dc*/
  v15 = 0; /*0x1006f50e0*/
  v4 = tauri::async_runtime::spawn::hd347cb63f6c5af68(__srca); /*0x1006f50ec*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f50f2*/
  if ( (_BYTE)result ) /*0x1006f50f9*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f50fe*/
  return result; /*0x1006f5103*/
}