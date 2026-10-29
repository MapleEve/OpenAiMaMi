// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h75a8411929fc23d9; addr: 0x1006fcd00; session: <审计会话>; decompiled_at: 2026-10-26T03:22:25Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h75a8411929fc23d9(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+8h] [rbp-E28h] BYREF
  __int64 v7; // [rsp+170h] [rbp-CC0h]
  __int64 v8; // [rsp+178h] [rbp-CB8h]
  __int64 v9; // [rsp+180h] [rbp-CB0h]
  __int64 v10; // [rsp+188h] [rbp-CA8h]
  _BYTE v11[2128]; // [rsp+190h] [rbp-CA0h] BYREF
  __int64 v12; // [rsp+9E0h] [rbp-450h]
  char v13; // [rsp+9E8h] [rbp-448h]
  _QWORD __dst[132]; // [rsp+9F0h] [rbp-440h] BYREF

  v1 = __src[113]; /*0x1006fcd1c*/
  __dst[67] = __src[117]; /*0x1006fcd2a*/
  v2 = __src[115]; /*0x1006fcd31*/
  __dst[66] = __src[116]; /*0x1006fcd3f*/
  __dst[65] = v2; /*0x1006fcd46*/
  memcpy(__dst, __src, 0x208u); /*0x1006fcd5f*/
  v9 = __src[112]; /*0x1006fcd6b*/
  v3 = __src[110]; /*0x1006fcd72*/
  v8 = __src[111]; /*0x1006fcd80*/
  v7 = v3; /*0x1006fcd87*/
  memcpy(v11, __dst, 0x420u); /*0x1006fcd9d*/
  v11[1056] = 0; /*0x1006fcda2*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006fcdbb*/
  v10 = v1; /*0x1006fcdc0*/
  v12 = __src[114]; /*0x1006fcdce*/
  v13 = 0; /*0x1006fcdd5*/
  v4 = tauri::async_runtime::spawn::h5d7cabedfba98f24(__srca); /*0x1006fcde4*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006fcdea*/
  if ( (_BYTE)result ) /*0x1006fcdf1*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006fcdf6*/
  return result; /*0x1006fcdfb*/
}