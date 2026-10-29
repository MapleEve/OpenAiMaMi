// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb39cbe504951d69a; addr: 0x1006ffc70; session: <审计会话>; decompiled_at: 2026-10-26T03:22:31Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb39cbe504951d69a(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-A38h] BYREF
  __int64 v7; // [rsp+170h] [rbp-8D0h]
  __int64 v8; // [rsp+178h] [rbp-8C8h]
  __int64 v9; // [rsp+180h] [rbp-8C0h]
  __int64 v10; // [rsp+188h] [rbp-8B8h]
  _BYTE v11[1456]; // [rsp+190h] [rbp-8B0h] BYREF
  __int64 v12; // [rsp+740h] [rbp-300h]
  char v13; // [rsp+748h] [rbp-2F8h]
  _QWORD __dst[90]; // [rsp+750h] [rbp-2F0h] BYREF

  v1 = __src[113]; /*0x1006ffc8c*/
  __dst[67] = __src[117]; /*0x1006ffc9a*/
  v2 = __src[115]; /*0x1006ffca1*/
  __dst[66] = __src[116]; /*0x1006ffcaf*/
  __dst[65] = v2; /*0x1006ffcb6*/
  memcpy(__dst, __src, 0x208u); /*0x1006ffccf*/
  v9 = __src[112]; /*0x1006ffcdb*/
  v3 = __src[110]; /*0x1006ffce2*/
  v8 = __src[111]; /*0x1006ffcf0*/
  v7 = v3; /*0x1006ffcf7*/
  memcpy(v11, __dst, 0x2D0u); /*0x1006ffd0d*/
  v11[720] = 0; /*0x1006ffd12*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006ffd2b*/
  v10 = v1; /*0x1006ffd30*/
  v12 = __src[114]; /*0x1006ffd3e*/
  v13 = 0; /*0x1006ffd45*/
  v4 = tauri::async_runtime::spawn::hbbfaefabbe2d2e0d(__srca); /*0x1006ffd54*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006ffd5a*/
  if ( (_BYTE)result ) /*0x1006ffd61*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006ffd66*/
  return result; /*0x1006ffd6b*/
}