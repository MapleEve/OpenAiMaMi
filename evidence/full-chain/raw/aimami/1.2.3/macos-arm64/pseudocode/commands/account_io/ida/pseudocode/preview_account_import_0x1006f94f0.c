// __ZN13codexmate_lib8commands10account_io22preview_account_import28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006f94f0 | 基线 same-set
double __fastcall codexmate_lib::commands::account_io::preview_account_import::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hced42275c1eef73f(
        _DWORD *__dst,
        __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rcx
  char v12; // r15
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rsi
  double result; // xmm0_8
  _QWORD *v17; // r14
  signed __int64 v18; // rdx
  __int64 v19; // r13
  const void *v20; // rsi
  signed __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r13
  signed __int64 v24; // r15
  signed __int64 v25; // rcx
  char v26; // r15
  __int64 v27; // r13
  _QWORD *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  const void *v31; // rsi
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // al
  _DWORD __dsta[34]; // [rsp+8h] [rbp-308h] BYREF
  _QWORD v37[31]; // [rsp+90h] [rbp-280h] BYREF
  _BYTE v38[168]; // [rsp+188h] [rbp-188h] BYREF
  _QWORD v39[6]; // [rsp+230h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+260h] [rbp-B0h]
  __int64 v41; // [rsp+268h] [rbp-A8h]
  __int64 v42; // [rsp+270h] [rbp-A0h]
  __int64 v43; // [rsp+278h] [rbp-98h]
  __int64 v44; // [rsp+280h] [rbp-90h]
  __int64 v45; // [rsp+288h] [rbp-88h]
  __int64 v46; // [rsp+290h] [rbp-80h] BYREF
  __int64 v47; // [rsp+298h] [rbp-78h]
  __int64 v48; // [rsp+2A0h] [rbp-70h]
  __int64 v49; // [rsp+2A8h] [rbp-68h] BYREF
  __int64 v50; // [rsp+2B0h] [rbp-60h]
  __int64 v51; // [rsp+2B8h] [rbp-58h]
  _QWORD *v52; // [rsp+2C0h] [rbp-50h]
  unsigned int v53; // [rsp+2CCh] [rbp-44h]
  __int64 v54; // [rsp+2D0h] [rbp-40h]
  const void *v55; // [rsp+2D8h] [rbp-38h]
  _QWORD *v56; // [rsp+2E0h] [rbp-30h]

  v54 = a2; /*0x1006f9507*/
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006f951d*/
  v56 = v3; /*0x1006f9522*/
  if ( !v3 ) /*0x1006f952d*/
  {
    *(_QWORD *)v38 = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006f9985*/
    *(_QWORD *)&v38[8] = 76; /*0x1006f998c*/
    v37[0] = v38; /*0x1006f999e*/
    v37[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006f99ac*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006f99c8*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v37,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = *v3; /*0x1006f9533*/
  if ( !*v3 ) /*0x1006f9533*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v56); /*0x1006f99db*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006f953f*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006f954e*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1006f99e8*/
    LOBYTE(v7) = v7 ^ 1; /*0x1006f99eb*/
  }
  else
  {
    v7 = 0; /*0x1006f955a*/
  }
  if ( *((_BYTE *)v56 + 8) )
  {
    *(_QWORD *)v38 = 0; /*0x1006f9578*/
    *(_QWORD *)&v38[8] = 1; /*0x1006f9583*/
    *(_QWORD *)&v38[16] = 0; /*0x1006f958e*/
    v37[2] = 1610612768; /*0x1006f9599*/
    v37[0] = v38; /*0x1006f95ab*/
    v37[1] = &off_101969DD0; /*0x1006f95b9*/
    if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                            "poisoned lock: another task failed inside",
                            41,
                            v37) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v46, &unk_101969E38, &off_101969E00); /*0x1006f9a12*/
    v9 = *(_QWORD *)v38; /*0x1006f95e0*/
    v10 = *(_QWORD *)&v38[8]; /*0x1006f95e7*/
    v11 = v7; /*0x1006f95ee*/
    v12 = v38[16]; /*0x1006f95f1*/
    __dsta[0] = *(_DWORD *)&v38[17]; /*0x1006f95ff*/
    *(_DWORD *)((char *)__dsta + 3) = *(_DWORD *)&v38[20]; /*0x1006f960b*/
    if ( !(_BYTE)v11
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             "poisoned lock: another task failed inside",
                             41,
                             v8,
                             v11) )
    {
      *((_BYTE *)v56 + 8) = 1; /*0x1006f9a2a*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v56); /*0x1006f962f*/
    v13 = __dsta[0]; /*0x1006f9634*/
    __dst[7] = *(_DWORD *)((char *)__dsta + 3); /*0x1006f9640*/
    *(_DWORD *)((char *)__dst + 25) = v13; /*0x1006f9645*/
    *((_QWORD *)__dst + 1) = v9; /*0x1006f964a*/
    *((_QWORD *)__dst + 2) = v10; /*0x1006f964f*/
    *((_BYTE *)__dst + 24) = v12; /*0x1006f9654*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1006f965c*/
LABEL_11:
    v14 = v54; /*0x1006f9660*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v54); /*0x1006f9667*/
    goto LABEL_12; /*0x1006f9667*/
  }
  v17 = v56 + 2; /*0x1006f969b*/
  v18 = *(_QWORD *)(v54 + 168); /*0x1006f96a3*/
  if ( v18 < 0 ) /*0x1006f96ad*/
  {
    v19 = 0; /*0x1006f96af*/
    goto LABEL_17; /*0x1006f96af*/
  }
  v20 = *(const void **)(v54 + 160); /*0x1006f96c2*/
  v53 = v7; /*0x1006f96c9*/
  if ( v18 ) /*0x1006f96cd*/
  {
    v55 = v20; /*0x1006f96cf*/
    v21 = v18; /*0x1006f96d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v20); /*0x1006f96d6*/
    v19 = 1; /*0x1006f96db*/
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v21, 1); /*0x1006f96e9*/
    v18 = v21; /*0x1006f96ee*/
    if ( !v22 ) /*0x1006f96f8*/
LABEL_17:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v18); /*0x1006f96b2*/
    v20 = v55; /*0x1006f96fa*/
  }
  else
  {
    v22 = 1; /*0x1006f9700*/
  }
  v23 = v22; /*0x1006f9705*/
  v24 = v18; /*0x1006f970b*/
  memcpy((void *)v22, v20, v18); /*0x1006f970e*/
  v52 = (_QWORD *)v23; /*0x1006f971d*/
  v55 = (const void *)v24; /*0x1006f9724*/
  v25 = v24; /*0x1006f9728*/
  v26 = v53; /*0x1006f972b*/
  codexmate_lib::core::account_io::preview_import::hfc303afa193f9442(v37, v17, v23, v25); /*0x1006f972f*/
  v27 = v37[0]; /*0x1006f9734*/
  if ( v37[0] == 0x8000000000000000LL ) /*0x1006f9749*/
  {
    qmemcpy(v38, &v37[1], 0x60u); /*0x1006f9761*/
    v49 = 0; /*0x1006f9764*/
    v50 = 1; /*0x1006f976c*/
    v51 = 0; /*0x1006f9774*/
    v39[2] = 1610612768; /*0x1006f977c*/
    v39[0] = &v49; /*0x1006f978b*/
    v39[1] = &off_101969DD0; /*0x1006f9799*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006f97aa*/
                            v38,
                            v39) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v46, &unk_101969E38, &off_101969E00); /*0x1006f9a51*/
    v46 = v49; /*0x1006f97bf*/
    v47 = v50; /*0x1006f97c3*/
    v48 = v51; /*0x1006f97cb*/
    v28 = &v37[1]; /*0x1006f97cf*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v37[1]); /*0x1006f97d2*/
    v29 = v46; /*0x1006f97db*/
    v30 = v47; /*0x1006f97df*/
    v40 = v46; /*0x1006f97e3*/
    v41 = v47; /*0x1006f97ea*/
    v42 = v48; /*0x1006f97f1*/
    *((_QWORD *)__dst + 3) = v48; /*0x1006f97f8*/
    *((_QWORD *)__dst + 2) = v30; /*0x1006f97fd*/
    *((_QWORD *)__dst + 1) = v29; /*0x1006f9802*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1006f9807*/
    v31 = v55; /*0x1006f980b*/
    if ( v55 ) /*0x1006f9812*/
    {
      v28 = v52; /*0x1006f9819*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v55, 1); /*0x1006f981d*/
    }
    v32 = v56; /*0x1006f9825*/
    if ( !v26 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006f9838*/
    {
      v35 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v28, v31, v30, v56); /*0x1006f9a72*/
      v32 = v56; /*0x1006f9a79*/
      if ( !v35 ) /*0x1006f9a7d*/
        *((_BYTE *)v56 + 8) = 1; /*0x1006f9a83*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v32); /*0x1006f9841*/
    goto LABEL_11; /*0x1006f9846*/
  }
  v39[5] = v37[3]; /*0x1006f984f*/
  v39[4] = v37[2]; /*0x1006f985d*/
  v39[3] = v37[1]; /*0x1006f9864*/
  memcpy(__dsta, &v37[4], sizeof(__dsta)); /*0x1006f987e*/
  v42 = v37[3]; /*0x1006f988a*/
  v41 = v37[2]; /*0x1006f989f*/
  v40 = v37[1]; /*0x1006f98a6*/
  v43 = v37[1]; /*0x1006f98ad*/
  v44 = v37[2]; /*0x1006f98b4*/
  v45 = v37[3]; /*0x1006f98bb*/
  if ( v55 ) /*0x1006f98c9*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v55, 1); /*0x1006f98d4*/
  *(_QWORD *)v38 = v27; /*0x1006f98d9*/
  *(_QWORD *)&v38[8] = v43; /*0x1006f98ee*/
  *(_QWORD *)&v38[16] = v44; /*0x1006f98f5*/
  *(_QWORD *)&v38[24] = v45; /*0x1006f9903*/
  memcpy(&v38[32], __dsta, 0x88u); /*0x1006f991d*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::he0c3e5a0a1de9527((__int64)v37, v38); /*0x1006f9930*/
  memcpy(__dst, v37, 0xF8u); /*0x1006f9944*/
  if ( !v26 /*0x1006f9a58*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, v37, v33, v34) )
  {
    *((_BYTE *)v56 + 8) = 1; /*0x1006f9a69*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v56); /*0x1006f9968*/
  v14 = v54; /*0x1006f996d*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v54); /*0x1006f9974*/
LABEL_12:
  v15 = *(_QWORD *)(v14 + 152); /*0x1006f966c*/
  if ( v15 ) /*0x1006f9676*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v14 + 160), v15, 1); /*0x1006f9684*/
  return result; /*0x1006f9689*/
}