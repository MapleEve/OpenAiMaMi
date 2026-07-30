// __ZN13codexmate_lib4core5relay13codex_catalog21no_account_slot_slugs @ 0x10021fdc0 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::no_account_slot_slugs::he9e07b17926d2ef6(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  void *v12; // rax
  __int64 v14; // [rsp+10h] [rbp-A0h] BYREF
  char *v15; // [rsp+18h] [rbp-98h]
  __int64 v16; // [rsp+20h] [rbp-90h]
  char *v17; // [rsp+28h] [rbp-88h] BYREF
  char *v18; // [rsp+30h] [rbp-80h]
  __int64 v19; // [rsp+38h] [rbp-78h]
  char *v20; // [rsp+40h] [rbp-70h]
  char *v21; // [rsp+48h] [rbp-68h]
  char *v22; // [rsp+50h] [rbp-60h]
  __int64 v23; // [rsp+58h] [rbp-58h]
  char *v24; // [rsp+60h] [rbp-50h]
  void *v25; // [rsp+68h] [rbp-48h] BYREF
  char *v26; // [rsp+70h] [rbp-40h]
  char *v27; // [rsp+78h] [rbp-38h]
  char *v28; // [rsp+80h] [rbp-30h]
  __int64 v29; // [rsp+88h] [rbp-28h] BYREF
  __int64 v30; // [rsp+90h] [rbp-20h]

  codexmate_lib::core::relay::codex_catalog::normalize_no_account_slot_preference::h2650e5fed1d457cb( /*0x10021fdf0*/
    (unsigned int)&v17,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    1);
  v25 = v18; /*0x10021fe0c*/
  v26 = v18; /*0x10021fe10*/
  v27 = v17; /*0x10021fe14*/
  v28 = &v18[72 * v19]; /*0x10021fe18*/
  v29 = a2; /*0x10021fe1c*/
  v30 = a3; /*0x10021fe20*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h08242c5fce00d719( /*0x10021fe2f*/
    &v14,
    &v25);
  v21 = v15; /*0x10021fe57*/
  v22 = v15; /*0x10021fe5b*/
  v23 = v14; /*0x10021fe5f*/
  v24 = &v15[136 * v16]; /*0x10021fe63*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10021fe6e*/
  v9 = v8; /*0x10021fe70*/
  if ( *(_BYTE *)(v8 + 16) == 1 ) /*0x10021fe77*/
  {
    v10 = *(_QWORD *)v8; /*0x10021fe7d*/
    v11 = *(_QWORD *)(v9 + 8); /*0x10021fe80*/
  }
  else
  {
    v10 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x10021ff40*/
    *(_QWORD *)v9 = v10; /*0x10021ff45*/
    *(_QWORD *)(v9 + 8) = v11; /*0x10021ff48*/
    *(_BYTE *)(v9 + 16) = 1; /*0x10021ff4c*/
  }
  *(_QWORD *)v9 = v10 + 1; /*0x10021fe88*/
  v28 = nullptr; /*0x10021fe92*/
  v27 = nullptr; /*0x10021fe9d*/
  v26 = nullptr; /*0x10021fea8*/
  v25 = anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x10021feb3*/
  v29 = v10; /*0x10021feb7*/
  v30 = v11; /*0x10021febb*/
  if ( v24 != v22 ) /*0x10021fec7*/
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57( /*0x10021ff75*/
      &v25,
      0xF0F0F0F0F0F0F0F1LL * ((unsigned __int64)(v24 - v22) >> 3),
      &v29,
      1);
  v20 = v24; /*0x10021fed1*/
  v19 = v23; /*0x10021fed9*/
  v18 = v22; /*0x10021fee5*/
  v17 = v21; /*0x10021fee9*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h21649a92865aad8f( /*0x10021fefb*/
    &v17,
    &v25);
  a1[5] = v30; /*0x10021ff04*/
  a1[4] = v29; /*0x10021ff0c*/
  a1[3] = v28; /*0x10021ff14*/
  a1[2] = v27; /*0x10021ff1c*/
  v12 = v25; /*0x10021ff20*/
  a1[1] = v26; /*0x10021ff28*/
  *a1 = v12; /*0x10021ff2c*/
  return a1; /*0x10021ff32*/
}