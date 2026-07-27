// __ZN13codexmate_lib8commands10account_io25import_accounts_from_file28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006fa3d0 | 基线 same-set
double __fastcall codexmate_lib::commands::account_io::import_accounts_from_file::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf154d2bcfcf098b1(
        char *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r15
  char v11; // r13
  int v12; // eax
  _QWORD *v13; // r14
  signed __int64 v14; // r15
  __int64 v15; // rax
  const void *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rdi
  _QWORD *v24; // rsi
  __int64 *v25; // rcx
  __int64 v26; // rax
  double result; // xmm0_8
  __int64 v28; // rsi
  __int64 v29; // rsi
  int v30; // eax
  char v31; // al
  _QWORD v32[12]; // [rsp+10h] [rbp-150h] BYREF
  _QWORD v33[12]; // [rsp+70h] [rbp-F0h] BYREF
  _QWORD v34[3]; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-78h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-70h]
  __int64 v37; // [rsp+F8h] [rbp-68h]
  __int64 v38; // [rsp+100h] [rbp-60h] BYREF
  __int64 v39; // [rsp+108h] [rbp-58h]
  __int64 v40; // [rsp+110h] [rbp-50h]
  const void *v41; // [rsp+118h] [rbp-48h]
  __int64 v42; // [rsp+120h] [rbp-40h]
  __int64 *v43; // [rsp+128h] [rbp-38h]
  int v44; // [rsp+134h] [rbp-2Ch]

  v42 = a2; /*0x1006fa3e7*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006fa3fd*/
  v43 = v3; /*0x1006fa402*/
  if ( !v3 ) /*0x1006fa40d*/
  {
    v33[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006fa796*/
    v33[1] = 76; /*0x1006fa79d*/
    v32[0] = v33; /*0x1006fa7af*/
    v32[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006fa7bd*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006fa7d9*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v32,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = *v3; /*0x1006fa413*/
  if ( !*v3 ) /*0x1006fa413*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v43); /*0x1006fa7ec*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006fa41f*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006fa42e*/
  {
    v30 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1006fa7f4*/
    LOBYTE(v30) = v30 ^ 1; /*0x1006fa7f9*/
    v44 = v30; /*0x1006fa7fb*/
  }
  else
  {
    v44 = 0; /*0x1006fa43a*/
  }
  v7 = (_QWORD *)v42; /*0x1006fa456*/
  if ( *((_BYTE *)v43 + 8) )
  {
    v33[0] = 0; /*0x1006fa460*/
    v33[1] = 1; /*0x1006fa46b*/
    v33[2] = 0; /*0x1006fa476*/
    v32[2] = 1610612768; /*0x1006fa481*/
    v32[0] = v33; /*0x1006fa493*/
    v32[1] = &off_101969DD0; /*0x1006fa4a1*/
    if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                            "poisoned lock: another task failed inside",
                            41,
                            v32) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v35, &unk_101969E38, &off_101969E00); /*0x1006fa821*/
    v9 = v33[0]; /*0x1006fa4cb*/
    v10 = v33[1]; /*0x1006fa4d2*/
    v11 = v33[2]; /*0x1006fa4d9*/
    LODWORD(v34[0]) = *(_DWORD *)((char *)&v33[2] + 1); /*0x1006fa4e7*/
    *(_DWORD *)((char *)v34 + 3) = HIDWORD(v33[2]); /*0x1006fa4f3*/
    if ( !(_BYTE)v44
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             "poisoned lock: another task failed inside",
                             41,
                             v8,
                             &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
    {
      *((_BYTE *)v43 + 8) = 1; /*0x1006fa839*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v43); /*0x1006fa512*/
    v12 = v34[0]; /*0x1006fa517*/
    *((_DWORD *)a1 + 7) = *(_DWORD *)((char *)v34 + 3); /*0x1006fa523*/
    *(_DWORD *)(a1 + 25) = v12; /*0x1006fa528*/
    *((_QWORD *)a1 + 1) = v9; /*0x1006fa52d*/
    *((_QWORD *)a1 + 2) = v10; /*0x1006fa532*/
    a1[24] = v11; /*0x1006fa537*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006fa53f*/
    core::ptr::drop_in_place$LT$codexmate_lib..commands..account_io..import_accounts_from_file..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1d8c0b987b77fb04(v42); /*0x1006fa547*/
    return result; /*0x1006fa547*/
  }
  v13 = v43 + 2; /*0x1006fa55e*/
  v14 = *(_QWORD *)(v42 + 168); /*0x1006fa562*/
  if ( v14 < 0 ) /*0x1006fa56c*/
  {
    v15 = 0; /*0x1006fa56e*/
    goto LABEL_14; /*0x1006fa56e*/
  }
  v16 = *(const void **)(v42 + 160); /*0x1006fa580*/
  if ( v14 ) /*0x1006fa587*/
  {
    v41 = *(const void **)(v42 + 160); /*0x1006fa589*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v16); /*0x1006fa58d*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1); /*0x1006fa59f*/
    v15 = 1; /*0x1006fa5a2*/
    if ( !v17 ) /*0x1006fa5aa*/
LABEL_14:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v14); /*0x1006fa570*/
    v16 = v41; /*0x1006fa5ac*/
  }
  else
  {
    v17 = 1; /*0x1006fa5b2*/
  }
  v41 = (const void *)v17; /*0x1006fa5b7*/
  memcpy((void *)v17, v16, v14); /*0x1006fa5be*/
  v18 = *(_QWORD *)(v42 + 184); /*0x1006fa5c3*/
  v19 = *(_QWORD *)(v42 + 192); /*0x1006fa5ca*/
  v20 = *(unsigned __int8 *)(v42 + 224); /*0x1006fa5d1*/
  v32[2] = *(_QWORD *)(v42 + 216); /*0x1006fa5e0*/
  v21 = *(_QWORD *)(v42 + 200); /*0x1006fa5e7*/
  v32[1] = *(_QWORD *)(v42 + 208); /*0x1006fa5f5*/
  v32[0] = v21; /*0x1006fa5fc*/
  ((void (__fastcall *)(_QWORD *, _QWORD *, __int64, signed __int64, __int64, __int64, int, _QWORD *))codexmate_lib::core::account_io::import_accounts::hcd371295de7a0192)( /*0x1006fa626*/
    v33,
    v13,
    v17,
    v14,
    v18,
    v19,
    v20,
    v32);
  if ( LODWORD(v33[0]) != 11 ) /*0x1006fa639*/
  {
    qmemcpy(v32, v33, sizeof(v32)); /*0x1006fa676*/
    v38 = 0; /*0x1006fa679*/
    v39 = 1; /*0x1006fa681*/
    v40 = 0; /*0x1006fa689*/
    v34[2] = 1610612768; /*0x1006fa691*/
    v34[0] = &v38; /*0x1006fa69d*/
    v34[1] = &off_101969DD0; /*0x1006fa6ab*/
    v24 = v34; /*0x1006fa6b2*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fa6bc*/
                            v32,
                            v34) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v35, &unk_101969E38, &off_101969E00); /*0x1006fa860*/
    v35 = v38; /*0x1006fa6d1*/
    v36 = v39; /*0x1006fa6d5*/
    v37 = v40; /*0x1006fa6dd*/
    v23 = v33; /*0x1006fa6e1*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v33); /*0x1006fa6e8*/
    *((_QWORD *)a1 + 3) = v37; /*0x1006fa6f1*/
    v26 = v35; /*0x1006fa6f6*/
    *((_QWORD *)a1 + 2) = v36; /*0x1006fa6fe*/
    *((_QWORD *)a1 + 1) = v26; /*0x1006fa703*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006fa70c*/
    v25 = v43; /*0x1006fa714*/
    if ( (_BYTE)v44 ) /*0x1006fa718*/
      goto LABEL_25; /*0x1006fa718*/
    goto LABEL_24; /*0x1006fa718*/
  }
  qmemcpy(a1, &v33[1], 0x50u); /*0x1006fa64a*/
  v24 = &v33[11]; /*0x1006fa64a*/
  v23 = a1 + 80; /*0x1006fa64a*/
  v25 = v43; /*0x1006fa651*/
  if ( !(_BYTE)v44 ) /*0x1006fa655*/
  {
LABEL_24:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006fa720*/
    {
      v31 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v23, v24, v22, v25); /*0x1006fa867*/
      v25 = v43; /*0x1006fa86e*/
      if ( !v31 ) /*0x1006fa872*/
        *((_BYTE *)v43 + 8) = 1; /*0x1006fa878*/
    }
  }
LABEL_25:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v25); /*0x1006fa726*/
  if ( v14 ) /*0x1006fa731*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v14, 1); /*0x1006fa73f*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v7); /*0x1006fa747*/
  v28 = v7[19]; /*0x1006fa74c*/
  if ( v28 ) /*0x1006fa756*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7[20], v28, 1); /*0x1006fa764*/
  v29 = v7[22]; /*0x1006fa769*/
  if ( v29 ) /*0x1006fa773*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7[23], v29, 1); /*0x1006fa785*/
  return result; /*0x1006fa54c*/
}