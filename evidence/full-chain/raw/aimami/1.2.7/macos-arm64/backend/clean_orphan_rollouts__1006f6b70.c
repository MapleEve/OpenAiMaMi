// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h495708b22bcc1db7; addr: 0x1006f6b70; session: <审计会话>; decompiled_at: 2026-10-26T03:22:23Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h495708b22bcc1db7(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-B58h] BYREF
  __int64 v7; // [rsp+170h] [rbp-9F0h]
  __int64 v8; // [rsp+178h] [rbp-9E8h]
  __int64 v9; // [rsp+180h] [rbp-9E0h]
  __int64 v10; // [rsp+188h] [rbp-9D8h]
  _BYTE v11[1648]; // [rsp+190h] [rbp-9D0h] BYREF
  __int64 v12; // [rsp+800h] [rbp-360h]
  char v13; // [rsp+808h] [rbp-358h]
  _QWORD __dst[102]; // [rsp+810h] [rbp-350h] BYREF

  v1 = __src[113]; /*0x1006f6b8c*/
  __dst[67] = __src[117]; /*0x1006f6b9a*/
  v2 = __src[115]; /*0x1006f6ba1*/
  __dst[66] = __src[116]; /*0x1006f6baf*/
  __dst[65] = v2; /*0x1006f6bb6*/
  memcpy(__dst, __src, 0x208u); /*0x1006f6bcf*/
  v9 = __src[112]; /*0x1006f6bdb*/
  v3 = __src[110]; /*0x1006f6be2*/
  v8 = __src[111]; /*0x1006f6bf0*/
  v7 = v3; /*0x1006f6bf7*/
  memcpy(v11, __dst, 0x330u); /*0x1006f6c0d*/
  v11[816] = 0; /*0x1006f6c12*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f6c2b*/
  v10 = v1; /*0x1006f6c30*/
  v12 = __src[114]; /*0x1006f6c3e*/
  v13 = 0; /*0x1006f6c45*/
  v4 = tauri::async_runtime::spawn::hfe2cf9e24fb0284d(__srca); /*0x1006f6c54*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f6c5a*/
  if ( (_BYTE)result ) /*0x1006f6c61*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f6c66*/
  return result; /*0x1006f6c6b*/
}