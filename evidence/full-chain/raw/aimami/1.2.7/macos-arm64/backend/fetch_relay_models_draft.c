// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf07474e2d10a78e5; addr: 0x1007052f0; session: <审计会话>; decompiled_at: 2026-10-26T03:22:26Z
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf07474e2d10a78e5(
        _QWORD *__src)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD __dst[606]; // [rsp+8h] [rbp-3A98h] BYREF
  _BYTE __srca[360]; // [rsp+12F8h] [rbp-27A8h] BYREF
  __int64 v8; // [rsp+1460h] [rbp-2640h]
  __int64 v9; // [rsp+1468h] [rbp-2638h]
  __int64 v10; // [rsp+1470h] [rbp-2630h]
  __int64 v11; // [rsp+1478h] [rbp-2628h]
  _QWORD v12[606]; // [rsp+1480h] [rbp-2620h] BYREF
  char v13; // [rsp+2770h] [rbp-1330h]
  __int64 v14; // [rsp+2A80h] [rbp-1020h]
  __int64 v15; // [rsp+3A70h] [rbp-30h]
  char v16; // [rsp+3A78h] [rbp-28h]

  v14 = 0; /*0x100705302*/
  v12[192] = 0; /*0x100705311*/
  __dst[335] = 0; /*0x100705320*/
  v1 = __src[113]; /*0x100705339*/
  __dst[67] = __src[117]; /*0x100705347*/
  v2 = __src[115]; /*0x10070534e*/
  __dst[66] = __src[116]; /*0x10070535c*/
  __dst[65] = v2; /*0x100705363*/
  memcpy(__dst, __src, 0x208u); /*0x10070537c*/
  v10 = __src[112]; /*0x100705388*/
  v3 = __src[110]; /*0x10070538f*/
  v9 = __src[111]; /*0x10070539d*/
  v8 = v3; /*0x1007053a4*/
  memcpy(v12, __dst, sizeof(v12)); /*0x1007053ba*/
  v13 = 0; /*0x1007053bf*/
  memcpy(__srca, __src + 65, sizeof(__srca)); /*0x1007053d8*/
  v11 = v1; /*0x1007053dd*/
  v15 = __src[114]; /*0x1007053eb*/
  v16 = 0; /*0x1007053ef*/
  v4 = tauri::async_runtime::spawn::hd99963a26303b001(__srca); /*0x1007053fb*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x100705401*/
  if ( (_BYTE)result ) /*0x100705408*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x10070540d*/
  return result; /*0x100705412*/
}