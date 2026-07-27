// __ZN13codexmate_lib8commands8accounts40resolve_cached_auto_switch_service_state @ 0x1006a6a80 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::accounts::resolve_cached_auto_switch_service_state::h707237adce5d95c8(
        __int64 a1,
        _BYTE *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r14
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r15
  _BYTE *v10; // rsi
  void **v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // r12
  _QWORD *v17; // r13
  __int64 v18; // rsi
  __int64 v19; // r14
  void *v20; // [rsp+8h] [rbp-778h] BYREF
  _QWORD __dst[101]; // [rsp+10h] [rbp-770h] BYREF
  _QWORD v22[2]; // [rsp+338h] [rbp-448h] BYREF
  void *v23; // [rsp+348h] [rbp-438h]
  _BYTE __src[808]; // [rsp+350h] [rbp-430h] BYREF
  __int64 v25; // [rsp+678h] [rbp-108h]
  __int64 v26; // [rsp+680h] [rbp-100h]
  __int64 v27; // [rsp+688h] [rbp-F8h]
  __int64 v28; // [rsp+690h] [rbp-F0h]
  __int64 v29; // [rsp+698h] [rbp-E8h]
  _QWORD v30[8]; // [rsp+6D8h] [rbp-A8h] BYREF
  _QWORD v31[3]; // [rsp+718h] [rbp-68h] BYREF
  __int64 v32; // [rsp+730h] [rbp-50h]
  __int64 v33; // [rsp+738h] [rbp-48h]

  codexmate_lib::commands::accounts::get_cached_display_snapshot::h4fea18137767a522(v22, a2); /*0x1006a6a9e*/
  if ( LODWORD(v22[0]) != 3 ) /*0x1006a6aaa*/
  {
    v5 = __src[537]; /*0x1006a6b34*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043(v22, a2); /*0x1006a6b42*/
    return v5; /*0x1006a6b42*/
  }
  v2 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 4872LL) + 16LL); /*0x1006a6ac2*/
  if ( !v2 ) /*0x1006a6aca*/
  {
    v20 = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006a6b62*/
    __dst[0] = 76; /*0x1006a6b69*/
    v22[0] = &v20; /*0x1006a6b7b*/
    v22[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a6b89*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006a6ba5*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v22,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v3 = v2; /*0x1006a6ad0*/
  v4 = *v2; /*0x1006a6ad3*/
  if ( !*v2 ) /*0x1006a6ad3*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v2); /*0x1006a6bb2*/
  v5 = 0; /*0x1006a6adf*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006a6ae9*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006a6b00*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v6, v7) ^ 1; /*0x1006a6bc2*/
    if ( *((_BYTE *)v3 + 8) ) /*0x1006a6bc6*/
    {
LABEL_7:
      if ( !v8 /*0x1006a6d4b*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v6, v7) )
      {
        *((_BYTE *)v3 + 8) = 1; /*0x1006a6d58*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v3); /*0x1006a6b2b*/
      LOBYTE(v5) = 4; /*0x1006a6b30*/
      return v5; /*0x1006a6b32*/
    }
  }
  else
  {
    v8 = 0; /*0x1006a6b06*/
    if ( *((_BYTE *)v3 + 8) ) /*0x1006a6b09*/
      goto LABEL_7; /*0x1006a6b10*/
  }
  v10 = v3 + 2; /*0x1006a6bd6*/
  v11 = (void **)v22; /*0x1006a6bda*/
  codexmate_lib::core::repository::Repository::load_bootstrap_state::h3c5dbe1baa3c80e6(v22, (__int64)(v3 + 2)); /*0x1006a6be1*/
  LOBYTE(v5) = 4; /*0x1006a6bed*/
  if ( v23 != (void *)3 ) /*0x1006a6bf3*/
  {
    v10 = __src; /*0x1006a6bf5*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1006a6c08*/
    v20 = v23; /*0x1006a6c0d*/
    v5 = BYTE1(__dst[69]); /*0x1006a6c14*/
    v11 = &v20; /*0x1006a6c1b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043(&v20, __src); /*0x1006a6c22*/
  }
  if ( !v8 /*0x1006a6d6c*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v10, v12, v13) )
  {
    *((_BYTE *)v3 + 8) = 1; /*0x1006a6d79*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v3); /*0x1006a6c4c*/
  v14 = v25; /*0x1006a6c51*/
  if ( v25 != 0x8000000000000000LL ) /*0x1006a6c5b*/
  {
    if ( v28 != 0x8000000000000000LL && v28 ) /*0x1006a6c70*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x1006a6c7e*/
    v15 = v26; /*0x1006a6c83*/
    v16 = v27; /*0x1006a6c8a*/
    if ( v27 ) /*0x1006a6c94*/
    {
      v17 = (_QWORD *)(v26 + 8); /*0x1006a6c96*/
      do /*0x1006a6ca7*/
      {
        v18 = *(v17 - 1); /*0x1006a6ca9*/
        if ( v18 ) /*0x1006a6cb0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v18, 1); /*0x1006a6cbb*/
        v17 += 5; /*0x1006a6ca0*/
        --v16; /*0x1006a6ca4*/
      }
      while ( v16 ); /*0x1006a6ca7*/
    }
    if ( v14 ) /*0x1006a6ccf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 40 * v14, 8); /*0x1006a6ce1*/
  }
  if ( v30[0] != 0x8000000000000000LL ) /*0x1006a6ced*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerListPayload$GT$::h380e229e68d9ef7b(v30); /*0x1006a6cf6*/
  v19 = v31[0]; /*0x1006a6cfb*/
  if ( v31[0] != 0x8000000000000000LL ) /*0x1006a6d02*/
  {
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e99d9d35889ec90(v31); /*0x1006a6d0c*/
    if ( v19 ) /*0x1006a6d14*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31[1], 184 * v19, 8); /*0x1006a6d26*/
    if ( v32 ) /*0x1006a6d32*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v32, 1); /*0x1006a6d41*/
  }
  return v5; /*0x1006a6b49*/
}