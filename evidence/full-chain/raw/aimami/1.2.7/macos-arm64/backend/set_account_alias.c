// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hedfc5786f01a444d; addr: 0x1007040e0; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hedfc5786f01a444d(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+0h] [rbp-1530h] BYREF
  __int64 v7; // [rsp+168h] [rbp-13C8h]
  __int64 v8; // [rsp+170h] [rbp-13C0h]
  __int64 v9; // [rsp+178h] [rbp-13B8h]
  __int64 v10; // [rsp+180h] [rbp-13B0h]
  _QWORD v11[207]; // [rsp+188h] [rbp-13A8h] BYREF
  char v12; // [rsp+800h] [rbp-D30h]
  __int64 v13; // [rsp+E88h] [rbp-6A8h]
  char v14; // [rsp+E90h] [rbp-6A0h]
  _QWORD __dst[207]; // [rsp+E98h] [rbp-698h] BYREF

  v11[113] = 0; /*0x1007040f2*/
  v1 = __src[113]; /*0x10070410b*/
  __dst[67] = __src[117]; /*0x100704119*/
  v2 = __src[115]; /*0x100704120*/
  __dst[66] = __src[116]; /*0x10070412e*/
  __dst[65] = v2; /*0x100704135*/
  memcpy(__dst, __src, 0x208u); /*0x10070414e*/
  v9 = __src[112]; /*0x10070415a*/
  v3 = __src[110]; /*0x100704161*/
  v8 = __src[111]; /*0x10070416f*/
  v7 = v3; /*0x100704176*/
  memcpy(v11, __dst, sizeof(v11)); /*0x10070418c*/
  v12 = 0; /*0x100704191*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1007041aa*/
  v10 = v1; /*0x1007041af*/
  v13 = __src[114]; /*0x1007041bd*/
  v14 = 0; /*0x1007041c4*/
  v4 = tauri::async_runtime::spawn::h4c919c1bc1d2aa80(__srca); /*0x1007041d3*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1007041d9*/
  if ( (_BYTE)result ) /*0x1007041e0*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1007041e5*/
  return result; /*0x1007041ea*/
}