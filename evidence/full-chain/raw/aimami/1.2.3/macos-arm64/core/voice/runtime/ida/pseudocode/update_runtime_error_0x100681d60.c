// __ZN13codexmate_lib4core5voice7runtime20update_runtime_error @ 0x100681d60 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::update_runtime_error::h31b8c40ccc1e9f87(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r13
  char v10; // r14
  __int64 v11; // rsi
  double result; // xmm0_8
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-40h]
  _QWORD *v18; // [rsp+28h] [rbp-38h]
  __int64 *v19; // [rsp+30h] [rbp-30h]

  v19 = a2; /*0x100681d71*/
  v2 = a1; /*0x100681d75*/
  v3 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x100681d78*/
  v4 = v3; /*0x100681d7d*/
  v5 = (_QWORD *)(v3 + 32); /*0x100681d80*/
  v6 = *(_QWORD *)(v3 + 32); /*0x100681d84*/
  if ( !v6 ) /*0x100681d8b*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 32); /*0x100681df0*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x100681d8d*/
  v18 = v5; /*0x100681da2*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100681d9c*/
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8) ^ 1; /*0x100681dfd*/
    v10 = *(_BYTE *)(v4 + 40); /*0x100681e0b*/
    if ( v10 ) /*0x100681e13*/
      goto LABEL_5; /*0x100681e13*/
  }
  else
  {
    v9 = 0; /*0x100681da8*/
    v10 = *(_BYTE *)(v4 + 40); /*0x100681db5*/
    if ( v10 ) /*0x100681dbd*/
    {
LABEL_5:
      if ( !v9 /*0x100681f4c*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8) )
      {
        *(_BYTE *)(v4 + 40) = 1; /*0x100681f59*/
      }
      goto LABEL_19; /*0x100681f5e*/
    }
  }
  v17 = v2; /*0x100681e15*/
  *(_BYTE *)(v4 + 908) = 5; /*0x100681e19*/
  v11 = *(_QWORD *)(v4 + 664); /*0x100681e28*/
  if ( v11 != 0x8000000000000000LL && v11 ) /*0x100681e3b*/
  {
    v6 = *(_QWORD *)(v4 + 672); /*0x100681e3d*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v11, 1); /*0x100681e49*/
  }
  v13 = v19; /*0x100681e4e*/
  *(_QWORD *)(v4 + 680) = v19[2]; /*0x100681e56*/
  v14 = *v13; /*0x100681e5b*/
  v15 = v13[1]; /*0x100681e5e*/
  *(_QWORD *)(v4 + 672) = v15; /*0x100681e62*/
  *(_QWORD *)(v4 + 664) = v14; /*0x100681e67*/
  v2 = v17; /*0x100681e73*/
  if ( *(_BYTE *)(v4 + 744) != 2 ) /*0x100681e77*/
  {
    v6 = v4 + 728; /*0x100681e79*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v4 + 728)) ) /*0x100681e83*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::heff7261dabead4fc(v6); /*0x100681e89*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v4 + 736)) ) /*0x100681e95*/
    {
      v6 = v4 + 736; /*0x100681e9e*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v4 + 736); /*0x100681ea5*/
    }
  }
  *(_BYTE *)(v4 + 744) = 2; /*0x100681eaa*/
  *(_DWORD *)(v4 + 720) = 1000000000; /*0x100681eb2*/
  if ( !v9 /*0x100681f63*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, v11, v7, v15) )
  {
    *(_BYTE *)(v4 + 40) = 1; /*0x100681f70*/
  }
LABEL_19:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v18); /*0x100681ed5*/
  codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)v16, v2); /*0x100681ee8*/
  if ( v16[0] != 0x8000000000000000LL && v16[0] ) /*0x100681efc*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16[1], v16[0], 1); /*0x100681f07*/
  if ( v10 ) /*0x100681f0f*/
  {
    if ( *v19 ) /*0x100681f15*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19[1], *v19, 1); /*0x100681f38*/
  }
  return result; /*0x100681f2a*/
}