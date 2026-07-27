// __ZN13codexmate_lib4core5relay10translator6stream23AnthropicToOpenAiStream3new @ 0x100aa5710 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::new::h4363bdbb5ff1d11d(
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

  if ( a3 < 0 ) /*0x100aa5727*/
  {
    v4 = 0; /*0x100aa5729*/
    goto LABEL_3; /*0x100aa5729*/
  }
  if ( a3 ) /*0x100aa573a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100aa573f*/
    v4 = 1; /*0x100aa5744*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100aa5752*/
    if ( !v5 ) /*0x100aa575a*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a3); /*0x100aa572c*/
    v6 = v5; /*0x100aa575c*/
  }
  else
  {
    v6 = 1; /*0x100aa5764*/
  }
  memcpy((void *)v6, a2, a3); /*0x100aa5770*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v21); /*0x100aa5779*/
  v19[1] = v22; /*0x100aa5786*/
  v19[0] = v21; /*0x100aa578a*/
  v24 = nullptr; /*0x100aa5791*/
  v25 = 1; /*0x100aa5799*/
  v26 = 0; /*0x100aa57a1*/
  v23 = 1610612768; /*0x100aa57a9*/
  v21 = &v24; /*0x100aa57b5*/
  v22 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100aa57c0*/
  if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(v19, &v21) ) /*0x100aa57cf*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100aa5924*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v20,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v28 = v6; /*0x100aa57dc*/
  v7 = v24; /*0x100aa57e0*/
  v8 = v25; /*0x100aa57e4*/
  if ( v26 <= 0x10 ) /*0x100aa57f0*/
  {
    if ( v26 != 16 ) /*0x100aa5814*/
LABEL_11:
      core::str::slice_error_fail::h480e51fbd8b15eba(v25, v26, 0, 16, &off_101974418); /*0x100aa57f9*/
  }
  else if ( *(char *)(v25 + 16) < -64 ) /*0x100aa57f7*/
  {
    goto LABEL_11; /*0x100aa57f7*/
  }
  v20[0] = v25; /*0x100aa5816*/
  v20[1] = 16; /*0x100aa581a*/
  v24 = v20; /*0x100aa5826*/
  v25 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aa5831*/
  v9 = &unk_1017C9F13; /*0x100aa5835*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v21, &unk_1017C9F13, &v24); /*0x100aa5844*/
  if ( v7 ) /*0x100aa584c*/
  {
    v9 = v7; /*0x100aa5856*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x100aa5859*/
  }
  v27 = v21; /*0x100aa5862*/
  v10 = v22; /*0x100aa5866*/
  v11 = v23; /*0x100aa586a*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100aa5875*/
  v15 = v12; /*0x100aa5877*/
  if ( *(_BYTE *)(v12 + 16) == 1 ) /*0x100aa587e*/
  {
    v16 = *(_QWORD *)v12; /*0x100aa5884*/
    v17 = *(_QWORD *)(v15 + 8); /*0x100aa5887*/
  }
  else
  {
    v16 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100aa592b*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v9,
            v13,
            v14);
    *(_QWORD *)v15 = v16; /*0x100aa5930*/
    *(_QWORD *)(v15 + 8) = v17; /*0x100aa5933*/
    *(_BYTE *)(v15 + 16) = 1; /*0x100aa5937*/
  }
  *(_QWORD *)v15 = v16 + 1; /*0x100aa588f*/
  *(_QWORD *)a1 = a3; /*0x100aa5892*/
  *(_QWORD *)(a1 + 8) = v28; /*0x100aa5899*/
  *(_QWORD *)(a1 + 16) = a3; /*0x100aa589d*/
  *(_QWORD *)(a1 + 24) = v27; /*0x100aa58a5*/
  *(_QWORD *)(a1 + 32) = v10; /*0x100aa58a9*/
  *(_QWORD *)(a1 + 40) = v11; /*0x100aa58ad*/
  *(_WORD *)(a1 + 100) = 0; /*0x100aa58b1*/
  *(_QWORD *)(a1 + 48) = &xmmword_1015FBEC0; /*0x100aa58bf*/
  *(_QWORD *)(a1 + 56) = 0; /*0x100aa58ca*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100aa58d5*/
  *(_QWORD *)(a1 + 72) = 0; /*0x100aa58e0*/
  *(_QWORD *)(a1 + 80) = v16; /*0x100aa58e4*/
  *(_QWORD *)(a1 + 88) = v17; /*0x100aa58e8*/
  *(_DWORD *)(a1 + 96) = 0; /*0x100aa58ec*/
  return a1; /*0x100aa58f7*/
}