// __ZN13codexmate_lib4core5relay12proxy_server22record_forward_failure @ 0x10025e170 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::proxy_server::record_forward_failure::h39a4015ba5fcedd5(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5)
{
  const void *v7; // rbx
  __int64 v8; // r15
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD v20[3]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v21; // [rsp+18h] [rbp-68h]
  __int64 v22; // [rsp+20h] [rbp-60h]
  __int64 v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+38h] [rbp-48h]
  _QWORD *v26; // [rsp+40h] [rbp-40h]
  __int64 v27; // [rsp+48h] [rbp-38h]
  int v28; // [rsp+54h] [rbp-2Ch]

  v24 = a4; /*0x10025e184*/
  v7 = a2; /*0x10025e18b*/
  v8 = *a1; /*0x10025e18e*/
  v9 = (_QWORD *)(*a1 + 16LL); /*0x10025e191*/
  v10 = (_QWORD *)*v9; /*0x10025e195*/
  if ( *v9 ) /*0x10025e195*/
  {
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v10); /*0x10025e19e*/
    if ( !(_BYTE)result ) /*0x10025e1a5*/
      return result; /*0x10025e1a5*/
  }
  else
  {
    v10 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v9); /*0x10025e20d*/
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v10); /*0x10025e210*/
    if ( !(_BYTE)result ) /*0x10025e217*/
      return result; /*0x10025e217*/
  }
  v25 = a5; /*0x10025e1ab*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10025e1ba*/
  {
    v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, a2, v12, v13); /*0x10025e21e*/
    LOBYTE(v14) = v14 ^ 1; /*0x10025e223*/
    v28 = v14; /*0x10025e225*/
    if ( *(_BYTE *)(v8 + 24) ) /*0x10025e228*/
    {
LABEL_5:
      if ( !(_BYTE)v28 /*0x10025e33e*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v10,
                               a2,
                               v12,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v8 + 24) = 1; /*0x10025e34b*/
      }
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x10025e200*/
    }
  }
  else
  {
    v28 = 0; /*0x10025e1c2*/
    if ( *(_BYTE *)(v8 + 24) ) /*0x10025e1c9*/
      goto LABEL_5; /*0x10025e1d0*/
  }
  v26 = v9; /*0x10025e231*/
  v27 = v8; /*0x10025e235*/
  v15 = *(_QWORD *)(v8 + 48); /*0x10025e239*/
  if ( v15 ) /*0x10025e240*/
  {
    v16 = *(_QWORD *)(v27 + 40); /*0x10025e24a*/
    v17 = 232 * v15; /*0x10025e24e*/
    v18 = 0; /*0x10025e255*/
    while ( 1 ) /*0x10025e270*/
    {
      if ( *(_QWORD *)(v16 + v18 + 16) == a3 ) /*0x10025e275*/
      {
        v10 = *(_QWORD **)(v16 + v18 + 8); /*0x10025e277*/
        a2 = v7; /*0x10025e27c*/
        if ( !memcmp(v10, v7, a3) ) /*0x10025e282*/
          break; /*0x10025e282*/
      }
      v18 += 232; /*0x10025e260*/
      if ( v17 == v18 ) /*0x10025e26a*/
        goto LABEL_20; /*0x10025e26a*/
    }
    v10 = v20; /*0x10025e28b*/
    codexmate_lib::core::relay::models::sanitize_error_for_display::h90525d8d08e331fa(v20, v24, v25); /*0x10025e297*/
    v23 = v20[2]; /*0x10025e2a0*/
    v22 = v20[1]; /*0x10025e2ac*/
    v21 = v20[0]; /*0x10025e2b0*/
    a2 = *(const void **)(v16 + v18 + 168); /*0x10025e2bc*/
    if ( a2 != (const void *)0x8000000000000000LL && a2 ) /*0x10025e2d9*/
    {
      v10 = *(_QWORD **)(v16 + v18 + 176); /*0x10025e2db*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, a2, 1); /*0x10025e2e8*/
    }
    *(_QWORD *)(v16 + v18 + 184) = v23; /*0x10025e2f1*/
    v19 = v21; /*0x10025e2f5*/
    *(_QWORD *)(v16 + v18 + 176) = v22; /*0x10025e2fd*/
    *(_QWORD *)(v16 + v18 + 168) = v19; /*0x10025e301*/
  }
LABEL_20:
  if ( !(_BYTE)v28 /*0x10025e355*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v10,
                           a2,
                           v12,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v27 + 24) = 1; /*0x10025e362*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v26); /*0x10025e1f2*/
}