// __ZN13codexmate_lib4core5voice7runtime19capture_trigger_key @ 0x100677d80 | 基线 same-set
void *__fastcall codexmate_lib::core::voice::runtime::capture_trigger_key::habd31d650c9b9928(
        void *a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // r12
  char v9; // r15
  void *result; // rax
  char v11; // al
  _QWORD v12[5]; // [rsp+8h] [rbp-A8h] BYREF
  _BYTE v13[72]; // [rsp+30h] [rbp-80h] BYREF
  void *v14; // [rsp+78h] [rbp-38h]
  int v15; // [rsp+80h] [rbp-30h]
  int v16; // [rsp+84h] [rbp-2Ch]

  v15 = a3; /*0x100677d94*/
  v14 = a1; /*0x100677d9a*/
  v3 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100677da1*/
  v4 = v3; /*0x100677da6*/
  v5 = *(_QWORD *)(v3 + 32); /*0x100677da9*/
  if ( !v5 ) /*0x100677db0*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 32); /*0x100677f18*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100677dc0*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x100677dcf*/
  {
    v8 = (_BYTE *)(v4 + 40); /*0x100677dde*/
    if ( *(_BYTE *)(v4 + 40) ) /*0x100677de2*/
      goto LABEL_5; /*0x100677de8*/
    v16 = *(unsigned __int8 *)(v4 + 898); /*0x100677e02*/
LABEL_8:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100677f6f*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) )
    {
      *v8 = 1; /*0x100677f7c*/
    }
    goto LABEL_9; /*0x100677f81*/
  }
  v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x100677f20*/
  v8 = (_BYTE *)(v4 + 40); /*0x100677f28*/
  v7 = *(unsigned __int8 *)(v4 + 40); /*0x100677f2c*/
  if ( (_BYTE)v7 ) /*0x100677f32*/
  {
    if ( !v11 ) /*0x100677f36*/
    {
LABEL_6:
      v9 = 0; /*0x100677df6*/
      goto LABEL_10; /*0x100677df9*/
    }
LABEL_5:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100677f41*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) )
    {
      *v8 = 1; /*0x100677f4e*/
    }
    goto LABEL_6; /*0x100677f53*/
  }
  v7 = *(unsigned __int8 *)(v4 + 898); /*0x100677f58*/
  v16 = *(unsigned __int8 *)(v4 + 898); /*0x100677f5f*/
  if ( v11 ) /*0x100677f64*/
    goto LABEL_8; /*0x100677f64*/
LABEL_9:
  v9 = v16; /*0x100677e11*/
LABEL_10:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 32)); /*0x100677e15*/
  codexmate_lib::core::voice::runtime::stop_trigger_listener_internal::h7b6e46b2a32015f3(a2); /*0x100677e21*/
  codexmate_lib::platform::voice_trigger_macos::capture_trigger_key::hee242bc553fd8f6d((__int64)v13, a2); /*0x100677e2d*/
  if ( *(_QWORD *)v13 == 0x8000000000000000LL ) /*0x100677e3c*/
  {
    if ( !v9 ) /*0x100677e60*/
      goto LABEL_17; /*0x100677e60*/
  }
  else
  {
    v12[4] = *(_QWORD *)&v13[40]; /*0x100677e6c*/
    v12[3] = *(_QWORD *)&v13[32]; /*0x100677e78*/
    v13[64] = v15; /*0x100677ead*/
    if ( !v9 ) /*0x100677eb7*/
      goto LABEL_17; /*0x100677eb7*/
  }
  codexmate_lib::core::voice::runtime::restart_trigger_listener_internal::hbf9d14de69187c5e((__int64)v12, a2); /*0x100677ec3*/
  if ( v12[0] != 0x8000000000000000LL && v12[0] ) /*0x100677ed7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12[1], v12[0], 1); /*0x100677ee5*/
LABEL_17:
  result = v14; /*0x100677eea*/
  qmemcpy(v14, v13, 0x48u); /*0x100677efa*/
  return result; /*0x100677efd*/
}