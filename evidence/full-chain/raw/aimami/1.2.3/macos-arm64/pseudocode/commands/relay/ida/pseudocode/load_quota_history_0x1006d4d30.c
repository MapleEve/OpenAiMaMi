// __ZN5tauri3ipc23InvokeResolver$LT$R$GT$24respond_async_serialized17h3f3f5ab1a8933563E @ 0x1006d4d30 | 基线 same-set | Tauri command=load_quota_history
__int64 __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized::h3f3f5ab1a8933563(
        _QWORD *__src,
        const void *a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _BYTE __srca[360]; // [rsp+0h] [rbp-1A20h] BYREF
  __int64 v7; // [rsp+168h] [rbp-18B8h]
  __int64 v8; // [rsp+170h] [rbp-18B0h]
  __int64 v9; // [rsp+178h] [rbp-18A8h]
  __int64 v10; // [rsp+180h] [rbp-18A0h]
  _QWORD __dst[783]; // [rsp+188h] [rbp-1898h] BYREF
  char v12; // [rsp+1A00h] [rbp-20h]

  __dst[272] = 0; /*0x1006d4d40*/
  v2 = __src[48]; /*0x1006d4d52*/
  v9 = __src[47]; /*0x1006d4d60*/
  v3 = __src[45]; /*0x1006d4d67*/
  v8 = __src[46]; /*0x1006d4d75*/
  v7 = v3; /*0x1006d4d7c*/
  memcpy(__dst, a2, 0xC38u); /*0x1006d4d8f*/
  memcpy(__srca, __src, sizeof(__srca)); /*0x1006d4da6*/
  v10 = v2; /*0x1006d4dab*/
  __dst[782] = __src[49]; /*0x1006d4db9*/
  v12 = 0; /*0x1006d4dbd*/
  v4 = tauri::async_runtime::spawn::h44133ce5c89b91ab(__srca); /*0x1006d4dc9*/
  result = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v4); /*0x1006d4dcf*/
  if ( (_BYTE)result ) /*0x1006d4dd6*/
    return tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v4); /*0x1006d4ddb*/
  return result; /*0x1006d4de0*/
}
