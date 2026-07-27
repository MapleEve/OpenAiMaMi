// __ZN13codexmate_lib8commands8accounts15remove_accounts28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100700090 | 基线 same-set
void __fastcall codexmate_lib::commands::accounts::remove_accounts::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h83938b329faaac2e(
        char *__dst,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rbx
  char v13; // r14
  int v14; // eax
  _QWORD *v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdi
  char v27; // al
  _QWORD __src[17]; // [rsp+0h] [rbp-170h] BYREF
  _QWORD v29[12]; // [rsp+88h] [rbp-E8h] BYREF
  _QWORD v30[3]; // [rsp+E8h] [rbp-88h] BYREF
  __int64 v31; // [rsp+100h] [rbp-70h] BYREF
  __int64 v32; // [rsp+108h] [rbp-68h]
  __int64 v33; // [rsp+110h] [rbp-60h]
  __int64 v34; // [rsp+118h] [rbp-58h] BYREF
  __int64 v35; // [rsp+120h] [rbp-50h]
  __int64 v36; // [rsp+128h] [rbp-48h]
  _QWORD *v37; // [rsp+130h] [rbp-40h]
  __int64 *v38; // [rsp+138h] [rbp-38h]
  int v39; // [rsp+144h] [rbp-2Ch]

  v37 = a2; /*0x1007000a7*/
  v3 = a2[17]; /*0x1007000ab*/
  v4 = *(_QWORD *)(v3 + 4872) + 16LL; /*0x1007000b9*/
  LOBYTE(v3) = 1; /*0x1007000bd*/
  v39 = v3; /*0x1007000bf*/
  v5 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(v4); /*0x1007000c2*/
  v38 = v5; /*0x1007000c7*/
  if ( !v5 ) /*0x1007000d2*/
  {
    v29[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1007003cf*/
    v29[1] = 76; /*0x1007003d6*/
    __src[0] = v29; /*0x1007003e8*/
    __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007003f6*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100700412*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v6 = *v5; /*0x1007000d8*/
  if ( !*v5 ) /*0x1007000d8*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v38); /*0x100700425*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x1007000e4*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007000f3*/
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x100700432*/
    LOBYTE(v9) = v9 ^ 1; /*0x100700434*/
  }
  else
  {
    v9 = 0; /*0x1007000ff*/
  }
  if ( !*((_BYTE *)v38 + 8) ) /*0x100700115*/
  {
    v29[2] = v37[21]; /*0x100700280*/
    v20 = v37[19]; /*0x100700287*/
    v29[1] = v37[20]; /*0x100700295*/
    v29[0] = v20; /*0x10070029c*/
    codexmate_lib::core::repository::Repository::remove_accounts::h8128f0f27aa6a603(__src, v38 + 2, v29); /*0x1007002b1*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x1007002c1*/
    {
      qmemcpy(v29, &__src[1], sizeof(v29)); /*0x1007002dd*/
      v34 = 0; /*0x1007002e0*/
      v35 = 1; /*0x1007002e8*/
      v36 = 0; /*0x1007002f0*/
      v30[2] = 1610612768; /*0x1007002f8*/
      v30[0] = &v34; /*0x100700304*/
      v30[1] = &off_101969DD0; /*0x100700312*/
      v21 = v30; /*0x100700316*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100700320*/
                              v29,
                              v30) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v31, &unk_101969E38, &off_101969E00); /*0x100700499*/
      v31 = v34; /*0x100700335*/
      v32 = v35; /*0x100700339*/
      v33 = v36; /*0x100700341*/
      v22 = &__src[1]; /*0x100700345*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x10070034c*/
      *((_QWORD *)__dst + 3) = v33; /*0x100700355*/
      v24 = v31; /*0x100700359*/
      *((_QWORD *)__dst + 2) = v32; /*0x100700361*/
      *((_QWORD *)__dst + 1) = v24; /*0x100700365*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100700369*/
      v25 = v38; /*0x10070036e*/
      if ( (_BYTE)v9 ) /*0x100700372*/
        goto LABEL_23; /*0x100700372*/
    }
    else
    {
      v21 = __src; /*0x100700376*/
      v22 = __dst; /*0x100700382*/
      memcpy(__dst, __src, 0x88u); /*0x100700385*/
      v25 = v38; /*0x10070038c*/
      if ( (_BYTE)v9 ) /*0x100700390*/
      {
LABEL_23:
        v26 = *v25; /*0x10070039e*/
        v39 = 0; /*0x1007003a1*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v26); /*0x1007003a8*/
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1007003b1*/
        return; /*0x1007003b1*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100700398*/
    {
      v39 = 0; /*0x1007004a0*/
      v27 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22, v21, v23, v25); /*0x1007004a7*/
      v25 = v38; /*0x1007004ae*/
      if ( !v27 ) /*0x1007004b2*/
        *((_BYTE *)v38 + 8) = 1; /*0x1007004b8*/
    }
    goto LABEL_23; /*0x1007004bc*/
  }
  v29[0] = 0; /*0x10070011b*/
  v29[1] = 1; /*0x100700126*/
  v29[2] = 0; /*0x100700131*/
  __src[2] = 1610612768; /*0x10070013c*/
  __src[0] = v29; /*0x10070014e*/
  __src[1] = &off_101969DD0; /*0x10070015c*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v31, &unk_101969E38, &off_101969E00); /*0x10070045a*/
  v10 = v29[0]; /*0x100700186*/
  v11 = v9; /*0x10070018d*/
  v12 = v29[1]; /*0x10070018f*/
  v13 = v29[2]; /*0x100700196*/
  LODWORD(v30[0]) = *(_DWORD *)((char *)&v29[2] + 1); /*0x1007001a4*/
  *(_DWORD *)((char *)v30 + 3) = HIDWORD(v29[2]); /*0x1007001b0*/
  if ( !(_BYTE)v11
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v11) )
  {
    *((_BYTE *)v38 + 8) = 1; /*0x100700472*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v38); /*0x1007001cd*/
  v14 = v30[0]; /*0x1007001d2*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v30 + 3); /*0x1007001de*/
  *(_DWORD *)(__dst + 25) = v14; /*0x1007001e2*/
  *((_QWORD *)__dst + 1) = v10; /*0x1007001e6*/
  *((_QWORD *)__dst + 2) = v12; /*0x1007001ea*/
  __dst[24] = v13; /*0x1007001ee*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1007001f5*/
  v15 = v37; /*0x1007001f8*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1007001ff*/
  v16 = v15[21]; /*0x100700204*/
  if ( v16 ) /*0x10070020f*/
  {
    v17 = (_QWORD *)(v15[20] + 8LL); /*0x100700219*/
    do /*0x100700227*/
    {
      v18 = *(v17 - 1); /*0x100700229*/
      if ( v18 ) /*0x100700230*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v18, 1); /*0x10070023a*/
      v17 += 3; /*0x100700220*/
      --v16; /*0x100700224*/
    }
    while ( v16 ); /*0x100700227*/
  }
  v19 = v15[19]; /*0x100700241*/
  if ( v19 ) /*0x10070024c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15[20], 24 * v19, 8); /*0x100700267*/
}