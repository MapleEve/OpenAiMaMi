// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3625c0c117c38978; addr: 0x1006f5350; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3625c0c117c38978(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[534]; // [rsp+8h] [rbp-33D8h] BYREF
  _BYTE __srca[360]; // [rsp+10B8h] [rbp-2328h] BYREF
  __int64 v8; // [rsp+1220h] [rbp-21C0h]
  __int64 v9; // [rsp+1228h] [rbp-21B8h]
  __int64 v10; // [rsp+1230h] [rbp-21B0h]
  __int64 v11; // [rsp+1238h] [rbp-21A8h]
  _QWORD v12[534]; // [rsp+1240h] [rbp-21A0h] BYREF
  char v13; // [rsp+22F0h] [rbp-10F0h]
  __int64 v14; // [rsp+23C0h] [rbp-1020h]
  __int64 v15; // [rsp+33B0h] [rbp-30h]
  char v16; // [rsp+33B8h] [rbp-28h]

  v14 = 0; /*0x1006f5362*/
  v12[48] = 0; /*0x1006f5371*/
  __dst[119] = 0; /*0x1006f5380*/
  v1 = __src[113]; /*0x1006f5399*/
  __dst[67] = __src[117]; /*0x1006f53a7*/
  v2 = __src[115]; /*0x1006f53ae*/
  __dst[66] = __src[116]; /*0x1006f53bc*/
  __dst[65] = v2; /*0x1006f53c3*/
  memcpy(__dst, __src, 0x208u); /*0x1006f53dc*/
  v10 = __src[112]; /*0x1006f53e8*/
  v3 = __src[110]; /*0x1006f53ef*/
  v9 = __src[111]; /*0x1006f53fd*/
  v8 = v3; /*0x1006f5404*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1006f541a*/
  v13 = 0; /*0x1006f541f*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1006f5438*/
  v11 = v1; /*0x1006f543d*/
  v15 = __src[114]; /*0x1006f544b*/
  v16 = 0; /*0x1006f544f*/
  v4 = tauri::async_runtime::spawn::h58cf431dedf38ff5(__srca); /*0x1006f545b*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006f5461*/
  if ( (_BYTE)result ) /*0x1006f5468*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006f546d*/
  return result; /*0x1006f5472*/
}