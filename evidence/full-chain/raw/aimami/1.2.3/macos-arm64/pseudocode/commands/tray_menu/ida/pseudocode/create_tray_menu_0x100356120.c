// __ZN13codexmate_lib8commands9tray_menu16create_tray_menu @ 0x100356120 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::tray_menu::create_tray_menu::hde51ac4cf9ae029a(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rcx
  char v13; // bl
  int v14; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r12
  _QWORD *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rbx
  _QWORD __src[102]; // [rsp+0h] [rbp-7A0h] BYREF
  _BYTE __dst[832]; // [rsp+330h] [rbp-470h] BYREF
  __int64 v26; // [rsp+670h] [rbp-130h]
  __int64 v27; // [rsp+678h] [rbp-128h]
  __int64 v28; // [rsp+680h] [rbp-120h]
  __int64 v29; // [rsp+688h] [rbp-118h]
  __int64 v30; // [rsp+690h] [rbp-110h]
  __int64 v31[8]; // [rsp+6D0h] [rbp-D0h] BYREF
  _QWORD v32[3]; // [rsp+710h] [rbp-90h] BYREF
  __int64 v33; // [rsp+728h] [rbp-78h]
  __int64 v34; // [rsp+730h] [rbp-70h]
  _QWORD *v35; // [rsp+750h] [rbp-50h]
  __int64 v36; // [rsp+758h] [rbp-48h] BYREF
  __int64 v37; // [rsp+760h] [rbp-40h]
  __int64 v38; // [rsp+768h] [rbp-38h]
  _BYTE v39[7]; // [rsp+770h] [rbp-30h]
  char v40[41]; // [rsp+777h] [rbp-29h] BYREF

  v2 = a1; /*0x100356137*/
  codexmate_lib::commands::accounts::get_cached_display_snapshot::h4fea18137767a522(__src); /*0x100356144*/
  if ( LODWORD(__src[0]) != 3 ) /*0x100356150*/
  {
    memcpy(__dst, __src, 0x330u); /*0x10035628a*/
    codexmate_lib::commands::tray_menu::create_tray_menu_from_snapshot::h8112836b79b9e4a6(a1, a2, __dst); /*0x100356298*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043(__src); /*0x1003562a4*/
    return v2; /*0x1003562a4*/
  }
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x100356168*/
  if ( !v3 ) /*0x100356170*/
  {
    __src[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1003562c5*/
    __src[1] = 76; /*0x1003562cc*/
    *(_QWORD *)__dst = __src; /*0x1003562d7*/
    *(_QWORD *)&__dst[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1003562e5*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100356301*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __dst,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = v3; /*0x100356176*/
  v35 = a1; /*0x100356179*/
  v5 = *v3; /*0x10035617d*/
  if ( !*v3 ) /*0x10035617d*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3); /*0x10035630e*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100356193*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x10035631b*/
    LOBYTE(v8) = v8 ^ 1; /*0x10035631d*/
    if ( *((_BYTE *)v4 + 8) ) /*0x100356320*/
      goto LABEL_7; /*0x100356327*/
  }
  else
  {
    v8 = 0; /*0x1003561b0*/
    if ( *((_BYTE *)v4 + 8) )
    {
LABEL_7:
      v36 = 0; /*0x1003561bf*/
      v37 = 1; /*0x1003561c7*/
      v38 = 0; /*0x1003561cf*/
      __src[2] = 1610612768; /*0x1003561d7*/
      __src[0] = &v36; /*0x1003561e6*/
      __src[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003561f4*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __src) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003564e1*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          v40,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      v10 = v36; /*0x10035621b*/
      v11 = v37; /*0x10035621f*/
      v12 = v8; /*0x100356223*/
      v13 = v38; /*0x100356225*/
      *(_DWORD *)v39 = *(_DWORD *)((char *)&v38 + 1); /*0x10035622c*/
      *(_DWORD *)&v39[3] = HIDWORD(v38); /*0x100356232*/
      if ( !(_BYTE)v12
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v9,
                               v12) )
      {
        *((_BYTE *)v4 + 8) = 1; /*0x1003564f5*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x10035624f*/
      v2 = v35; /*0x100356254*/
      *v35 = v10; /*0x100356258*/
      v2[1] = v11; /*0x10035625c*/
      *((_BYTE *)v2 + 16) = v13; /*0x100356260*/
      v14 = *(_DWORD *)&v39[3]; /*0x100356267*/
      *(_DWORD *)((char *)v2 + 17) = *(_DWORD *)v39; /*0x10035626a*/
      *((_DWORD *)v2 + 5) = v14; /*0x10035626e*/
      return v2; /*0x100356272*/
    }
  }
  codexmate_lib::core::repository::Repository::load_bootstrap_state::h3c5dbe1baa3c80e6(__dst, (__int64)(v4 + 2)); /*0x10035633b*/
  if ( !(_BYTE)v8 /*0x1003564ff*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, v4 + 2, v16, v17) )
  {
    *((_BYTE *)v4 + 8) = 1; /*0x10035650c*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x10035635a*/
  v2 = v35; /*0x10035635f*/
  if ( *(_DWORD *)&__dst[16] == 3 ) /*0x10035636a*/
  {
    codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::hd1ec4bbdd0bd5734(v35, a2); /*0x100356372*/
    v18 = v26; /*0x100356377*/
    if ( v26 == 0x8000000000000000LL ) /*0x100356381*/
      goto LABEL_31; /*0x100356381*/
LABEL_21:
    if ( v29 != 0x8000000000000000LL && v29 ) /*0x1003563e1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v29, 1); /*0x1003563ef*/
    v19 = v27; /*0x1003563f4*/
    v20 = v28; /*0x1003563fb*/
    if ( v28 ) /*0x100356405*/
    {
      v21 = (_QWORD *)(v27 + 8); /*0x100356407*/
      do /*0x100356417*/
      {
        v22 = *(v21 - 1); /*0x100356419*/
        if ( v22 ) /*0x100356420*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v21, v22, 1); /*0x10035642a*/
        v21 += 5; /*0x100356410*/
        --v20; /*0x100356414*/
      }
      while ( v20 ); /*0x100356417*/
    }
    if ( v18 ) /*0x10035643e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 40 * v18, 8); /*0x100356450*/
    goto LABEL_31; /*0x100356450*/
  }
  memcpy(__src, &__dst[16], sizeof(__src)); /*0x1003563a4*/
  codexmate_lib::commands::tray_menu::create_tray_menu_from_snapshot::h8112836b79b9e4a6(v35, a2, __src); /*0x1003563b2*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043(&__dst[16]); /*0x1003563ba*/
  v18 = v26; /*0x1003563c2*/
  if ( v26 != 0x8000000000000000LL ) /*0x1003563cc*/
    goto LABEL_21; /*0x1003563cc*/
LABEL_31:
  if ( v31[0] != 0x8000000000000000LL ) /*0x10035645c*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerListPayload$GT$::h380e229e68d9ef7b(v31); /*0x100356465*/
  v23 = v32[0]; /*0x10035646a*/
  if ( v32[0] != 0x8000000000000000LL ) /*0x100356474*/
  {
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e99d9d35889ec90(v32); /*0x100356481*/
    if ( v23 ) /*0x100356489*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32[1], 184 * v23, 8); /*0x10035649e*/
    if ( v33 ) /*0x1003564aa*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x1003564b9*/
  }
  return v2; /*0x1003562ac*/
}