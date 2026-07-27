// __ZN13codexmate_lib4core5relay10translator6stream23OpenAiToAnthropicStream3new @ 0x100aad790 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::new::hfca717e718c104d7(
        __int64 a1,
        const void *a2,
        signed __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // r13
  void *v9; // rsi
  __int64 (__fastcall **v10)(); // r13
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v19[2]; // [rsp+8h] [rbp-88h] BYREF
  _QWORD v20[2]; // [rsp+18h] [rbp-78h] BYREF
  _QWORD **v21; // [rsp+28h] [rbp-68h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+30h] [rbp-60h]
  __int64 v23; // [rsp+38h] [rbp-58h]
  _QWORD *v24; // [rsp+40h] [rbp-50h] BYREF
  __int64 v25; // [rsp+48h] [rbp-48h]
  unsigned __int64 v26; // [rsp+50h] [rbp-40h]
  _QWORD **v27; // [rsp+58h] [rbp-38h]
  __int64 v28; // [rsp+60h] [rbp-30h]

  if ( a3 < 0 ) /*0x100aad7a7*/
  {
    v4 = 0; /*0x100aad7a9*/
    goto LABEL_3; /*0x100aad7a9*/
  }
  if ( a3 ) /*0x100aad7ba*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100aad7bf*/
    v4 = 1; /*0x100aad7c4*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100aad7d2*/
    if ( !v5 ) /*0x100aad7da*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a3); /*0x100aad7ac*/
    v6 = v5; /*0x100aad7dc*/
  }
  else
  {
    v6 = 1; /*0x100aad7e4*/
  }
  memcpy((void *)v6, a2, a3); /*0x100aad7f0*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v21); /*0x100aad7f9*/
  v19[1] = v22; /*0x100aad806*/
  v19[0] = v21; /*0x100aad80a*/
  v24 = nullptr; /*0x100aad811*/
  v25 = 1; /*0x100aad819*/
  v26 = 0; /*0x100aad821*/
  v23 = 1610612768; /*0x100aad829*/
  v21 = &v24; /*0x100aad835*/
  v22 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100aad840*/
  if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(v19, &v21) ) /*0x100aad84f*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100aad9ac*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v20,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v28 = v6; /*0x100aad85c*/
  v7 = v24; /*0x100aad860*/
  v8 = v25; /*0x100aad864*/
  if ( v26 <= 0x10 ) /*0x100aad870*/
  {
    if ( v26 != 16 ) /*0x100aad894*/
LABEL_11:
      core::str::slice_error_fail::h480e51fbd8b15eba(v25, v26, 0, 16, &off_101974480); /*0x100aad879*/
  }
  else if ( *(char *)(v25 + 16) < -64 ) /*0x100aad877*/
  {
    goto LABEL_11; /*0x100aad877*/
  }
  v20[0] = v25; /*0x100aad896*/
  v20[1] = 16; /*0x100aad89a*/
  v24 = v20; /*0x100aad8a6*/
  v25 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aad8b1*/
  v9 = &unk_1017C5D19; /*0x100aad8b5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v21, &unk_1017C5D19, &v24); /*0x100aad8c4*/
  if ( v7 ) /*0x100aad8cc*/
  {
    v9 = v7; /*0x100aad8d6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x100aad8d9*/
  }
  v27 = v21; /*0x100aad8e2*/
  v10 = v22; /*0x100aad8e6*/
  v11 = v23; /*0x100aad8ea*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100aad8f5*/
  v15 = v12; /*0x100aad8f7*/
  if ( *(_BYTE *)(v12 + 16) == 1 ) /*0x100aad8fe*/
  {
    v16 = *(_QWORD *)v12; /*0x100aad904*/
    v17 = *(_QWORD *)(v15 + 8); /*0x100aad907*/
  }
  else
  {
    v16 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100aad9b3*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v9,
            v13,
            v14);
    *(_QWORD *)v15 = v16; /*0x100aad9b8*/
    *(_QWORD *)(v15 + 8) = v17; /*0x100aad9bb*/
    *(_BYTE *)(v15 + 16) = 1; /*0x100aad9bf*/
  }
  *(_QWORD *)v15 = v16 + 1; /*0x100aad90f*/
  *(_QWORD *)a1 = a3; /*0x100aad912*/
  *(_QWORD *)(a1 + 8) = v28; /*0x100aad919*/
  *(_QWORD *)(a1 + 16) = a3; /*0x100aad91d*/
  *(_QWORD *)(a1 + 24) = v27; /*0x100aad925*/
  *(_QWORD *)(a1 + 32) = v10; /*0x100aad929*/
  *(_QWORD *)(a1 + 40) = v11; /*0x100aad92d*/
  *(_WORD *)(a1 + 108) = 0; /*0x100aad931*/
  *(_DWORD *)(a1 + 48) = 0; /*0x100aad938*/
  *(_QWORD *)(a1 + 56) = &xmmword_1015FBEC0; /*0x100aad947*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100aad952*/
  *(_QWORD *)(a1 + 72) = 0; /*0x100aad95d*/
  *(_QWORD *)(a1 + 80) = 0; /*0x100aad968*/
  *(_QWORD *)(a1 + 88) = v16; /*0x100aad96c*/
  *(_QWORD *)(a1 + 96) = v17; /*0x100aad970*/
  *(_DWORD *)(a1 + 104) = 0; /*0x100aad974*/
  return a1; /*0x100aad97f*/
}