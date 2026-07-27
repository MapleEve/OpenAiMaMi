// __ZN13codexmate_lib4core5voice7runtime20send_standby_command @ 0x10067ef10 | 基线 same-set
volatile signed __int64 *__fastcall codexmate_lib::core::voice::runtime::send_standby_command::h0efe221d51ed902b(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // r14
  volatile signed __int64 *result; // rax
  char v10; // al
  bool v11; // of
  __int64 v12; // r13
  char v13; // al
  __int64 v14; // rt0
  _QWORD *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rdx
  char v18; // bl
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-40h]
  volatile signed __int64 *v26; // [rsp+8h] [rbp-38h] BYREF
  _QWORD *v27; // [rsp+10h] [rbp-30h]

  v27 = a3; /*0x10067ef21*/
  v3 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x10067ef28*/
  v4 = v3; /*0x10067ef2d*/
  v5 = *(_QWORD *)(v3 + 32); /*0x10067ef30*/
  if ( !v5 ) /*0x10067ef37*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 32); /*0x10067efa7*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x10067ef43*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10067ef53*/
  {
    v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x10067efac*/
    v8 = (_BYTE *)(v4 + 40); /*0x10067efb4*/
    v7 = *(unsigned __int8 *)(v4 + 40); /*0x10067efb8*/
    if ( (_BYTE)v7 ) /*0x10067efbe*/
    {
      if ( !v13 ) /*0x10067efc2*/
        return (volatile signed __int64 *)std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 32)); /*0x10067ef85*/
LABEL_5:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10067efc6*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) )
      {
        *v8 = 1; /*0x10067efcf*/
      }
      return (volatile signed __int64 *)std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 32)); /*0x10067efd3*/
    }
    v10 = v13 ^ 1; /*0x10067efd5*/
    v11 = __OFSUB__(*(_BYTE *)(v4 + 768), 2); /*0x10067efd7*/
    if ( *(_BYTE *)(v4 + 768) == 2 ) /*0x10067efde*/
    {
LABEL_8:
      v12 = 0; /*0x10067ef95*/
      if ( v10 ) /*0x10067ef9a*/
        goto LABEL_19; /*0x10067ef9a*/
      goto LABEL_18; /*0x10067ef9a*/
    }
  }
  else
  {
    v8 = (_BYTE *)(v4 + 40); /*0x10067ef5e*/
    if ( *(_BYTE *)(v4 + 40) ) /*0x10067ef62*/
      goto LABEL_5; /*0x10067ef68*/
    v10 = 0; /*0x10067ef8a*/
    v11 = __OFSUB__(*(_BYTE *)(v4 + 768), 2); /*0x10067ef8c*/
    if ( *(_BYTE *)(v4 + 768) == 2 ) /*0x10067ef93*/
      goto LABEL_8; /*0x10067ef93*/
  }
  v14 = _InterlockedIncrement64(*(volatile signed __int64 **)(v4 + 760)); /*0x10067efe7*/
  if ( (v14 < 0) ^ v11 | (v14 == 0) ) /*0x10067efeb*/
    BUG(); /*0x10067f19d*/
  v12 = *(_QWORD *)(v4 + 760); /*0x10067eff1*/
  if ( !v10 ) /*0x10067effa*/
  {
LABEL_18:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10067f159*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v5,
                             a2,
                             v6,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *v8 = 1; /*0x10067f166*/
    }
  }
LABEL_19:
  result = (volatile signed __int64 *)std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 32)); /*0x10067f013*/
  if ( !v12 ) /*0x10067f01f*/
    return result; /*0x10067f01f*/
  v26 = (volatile signed __int64 *)v12; /*0x10067f025*/
  v15 = (_QWORD *)(v12 + 16); /*0x10067f029*/
  v16 = *(_QWORD *)(v12 + 16); /*0x10067f02d*/
  if ( !v16 ) /*0x10067f034*/
    v16 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v12 + 16); /*0x10067f086*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v16); /*0x10067f036*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10067f04c*/
  {
    v18 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, a2, v17, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x10067f092*/
    if ( *(_BYTE *)(v12 + 24) ) /*0x10067f095*/
      goto LABEL_24; /*0x10067f09c*/
  }
  else
  {
    v18 = 0; /*0x10067f04e*/
    if ( *(_BYTE *)(v12 + 24) ) /*0x10067f050*/
    {
LABEL_24:
      if ( !v18 /*0x10067f16f*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v16,
                               a2,
                               v17,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v12 + 24) = 1; /*0x10067f17c*/
      }
      goto LABEL_31; /*0x10067f181*/
    }
  }
  v19 = v12 + 28; /*0x10067f09e*/
  v20 = std::io::Write::write_all::h3ce78d18b5b98128(v12 + 28, a2, v27); /*0x10067f0a9*/
  if ( (v20 & 3) == 1 ) /*0x10067f0b6*/
  {
    v27 = (_QWORD *)(v12 + 16); /*0x10067f0fd*/
    v25 = v20 - 1; /*0x10067f107*/
    v22 = *(_QWORD *)(v20 - 1); /*0x10067f10b*/
    v23 = *(_QWORD *)(v20 + 7); /*0x10067f10f*/
    if ( *(_QWORD *)v23 ) /*0x10067f113*/
      (*(void (__fastcall **)(__int64))v23)(v22); /*0x10067f11e*/
    v24 = *(_QWORD *)(v23 + 8); /*0x10067f120*/
    if ( v24 ) /*0x10067f127*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16)); /*0x10067f130*/
    a2 = 24; /*0x10067f135*/
    v19 = v25; /*0x10067f13f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x10067f143*/
    v15 = v27; /*0x10067f148*/
    if ( v18 ) /*0x10067f14e*/
      goto LABEL_31; /*0x10067f14e*/
    goto LABEL_30; /*0x10067f14e*/
  }
  if ( !v18 ) /*0x10067f0ba*/
  {
LABEL_30:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10067f186*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v19,
                             a2,
                             v21,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v12 + 24) = 1; /*0x10067f193*/
    }
  }
LABEL_31:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v15); /*0x10067f0d3*/
  result = v26; /*0x10067f0db*/
  if ( !_InterlockedDecrement64(v26) ) /*0x10067f0df*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(&v26); /*0x10067f0e9*/
  return result; /*0x10067ef77*/
}