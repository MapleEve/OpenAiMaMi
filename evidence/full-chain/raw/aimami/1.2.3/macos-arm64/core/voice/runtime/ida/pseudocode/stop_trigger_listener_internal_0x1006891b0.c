// __ZN13codexmate_lib4core5voice7runtime30stop_trigger_listener_internal @ 0x1006891b0 | 基线 same-set
volatile signed __int64 *__fastcall codexmate_lib::core::voice::runtime::stop_trigger_listener_internal::h7b6e46b2a32015f3(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE *v7; // r14
  volatile signed __int64 *result; // rax
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rcx
  volatile signed __int64 *v13; // rdx
  char v14; // al
  __int64 v15; // [rsp+0h] [rbp-50h]
  volatile signed __int64 *v16; // [rsp+8h] [rbp-48h]
  _QWORD v17[2]; // [rsp+10h] [rbp-40h] BYREF
  volatile signed __int64 *v18; // [rsp+20h] [rbp-30h] BYREF

  v2 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x1006891c1*/
  v3 = v2; /*0x1006891c6*/
  v4 = *(_QWORD *)(v2 + 32); /*0x1006891c9*/
  if ( !v4 ) /*0x1006891d0*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v2 + 32); /*0x1006892da*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006891e0*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006891f0*/
  {
    v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1006892e2*/
    v7 = (_BYTE *)(v3 + 40); /*0x1006892ea*/
    v6 = *(unsigned __int8 *)(v3 + 40); /*0x1006892ee*/
    if ( (_BYTE)v6 ) /*0x1006892f4*/
    {
      if ( !v14 ) /*0x1006892f8*/
        return (volatile signed __int64 *)std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v3 + 32)); /*0x10068922a*/
LABEL_5:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100689303*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) )
      {
        *v7 = 1; /*0x100689310*/
      }
      return (volatile signed __int64 *)std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v3 + 32)); /*0x100689314*/
    }
    v9 = v14 ^ 1; /*0x100689319*/
  }
  else
  {
    v7 = (_BYTE *)(v3 + 40); /*0x1006891ff*/
    if ( *(_BYTE *)(v3 + 40) ) /*0x100689203*/
      goto LABEL_5; /*0x100689209*/
    v9 = 0; /*0x10068922f*/
  }
  v10 = -1; /*0x10068923b*/
  if ( *(_QWORD *)(v3 + 888) != -1 ) /*0x100689242*/
    v10 = *(_QWORD *)(v3 + 888) + 1LL; /*0x100689242*/
  *(_QWORD *)(v3 + 888) = v10; /*0x100689246*/
  v11 = *(_QWORD *)(v3 + 64); /*0x10068924d*/
  v12 = *(_QWORD *)(v3 + 72); /*0x100689251*/
  v13 = *(volatile signed __int64 **)(v3 + 80); /*0x100689255*/
  v16 = v13; /*0x100689259*/
  v15 = v12; /*0x10068925d*/
  *(_QWORD *)(v3 + 64) = 3; /*0x100689261*/
  if ( !v9 /*0x100689320*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v13, v12) )
  {
    *v7 = 1; /*0x10068932d*/
  }
  result = (volatile signed __int64 *)std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v3 + 32)); /*0x10068927e*/
  if ( v11 != 3 ) /*0x100689287*/
  {
    v17[0] = v11; /*0x100689289*/
    v17[1] = v15; /*0x100689295*/
    v18 = v16; /*0x100689299*/
    std::sync::mpmc::Sender$LT$T$GT$::send::h5b2fd9c4240d1a7a(v17); /*0x1006892a1*/
    _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc457547a7b90080(v17); /*0x1006892aa*/
    result = v18; /*0x1006892af*/
    if ( !_InterlockedDecrement64(v18) ) /*0x1006892b3*/
      return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(&v18); /*0x1006892bd*/
  }
  return result; /*0x10068921c*/
}