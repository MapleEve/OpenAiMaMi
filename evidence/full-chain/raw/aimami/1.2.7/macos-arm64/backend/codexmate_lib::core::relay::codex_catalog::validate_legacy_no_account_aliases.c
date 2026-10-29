// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_catalog::validate_legacy_no_account_aliases::h498d76d00dd14346; addr: 0x1009ac6f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::validate_legacy_no_account_aliases::h498d76d00dd14346(
        _QWORD *a1,
        __int64 a2,
        double a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  unsigned __int8 *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int8 *v13; // r13
  __int64 v14; // rbx
  _QWORD *v15; // rbx
  __int64 v16; // rsi
  void *v17; // rax
  void *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // [rsp+8h] [rbp-78h] BYREF
  unsigned __int8 *v25; // [rsp+10h] [rbp-70h]
  char *v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+28h] [rbp-58h]
  __int64 v28; // [rsp+30h] [rbp-50h]
  __int64 v29; // [rsp+38h] [rbp-48h]
  __int64 v30; // [rsp+40h] [rbp-40h]
  __int64 v31; // [rsp+48h] [rbp-38h]
  _QWORD *v32; // [rsp+50h] [rbp-30h]

  v32 = a1; /*0x1009ac704*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1009ac70f*/
  v6 = v4; /*0x1009ac711*/
  if ( *(_BYTE *)(v4 + 16) == 1 ) /*0x1009ac718*/
  {
    v7 = *(_QWORD *)v4; /*0x1009ac71e*/
    v8 = *(_QWORD *)(v6 + 8); /*0x1009ac721*/
  }
  else
  {
    v22 = v5; /*0x1009ac8ae*/
    v7 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(a3); /*0x1009ac8b4*/
    v8 = v23; /*0x1009ac8bc*/
    v5 = v22; /*0x1009ac8bf*/
    *(_QWORD *)v6 = v7; /*0x1009ac8c2*/
    *(_QWORD *)(v6 + 8) = v8; /*0x1009ac8c5*/
    *(_BYTE *)(v6 + 16) = 1; /*0x1009ac8c9*/
  }
  *(_QWORD *)v6 = v7 + 1; /*0x1009ac733*/
  v29 = 0; /*0x1009ac73d*/
  v28 = 0; /*0x1009ac748*/
  v27 = 0; /*0x1009ac753*/
  v26 = (char *)anon_f3f46b48c4f9c057aa63801556530189_14; /*0x1009ac75e*/
  v30 = v7; /*0x1009ac762*/
  v31 = v8; /*0x1009ac766*/
  v9 = 72 * v5; /*0x1009ac76e*/
  while ( 1 ) /*0x1009ac780*/
  {
    if ( !v9 ) /*0x1009ac783*/
    {
      v15 = v32; /*0x1009ac7ef*/
      *v32 = 11; /*0x1009ac7f3*/
      v16 = v27; /*0x1009ac7fa*/
      if ( !v27 ) /*0x1009ac801*/
        return v15; /*0x1009ac801*/
      goto LABEL_17; /*0x1009ac801*/
    }
    v10 = *(unsigned __int8 **)(a2 + 32); /*0x1009ac785*/
    v11 = *(_QWORD *)(a2 + 40); /*0x1009ac789*/
    core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v10, v11); /*0x1009ac78d*/
    if ( !v12 ) /*0x1009ac795*/
      goto LABEL_15; /*0x1009ac795*/
    v10 = (unsigned __int8 *)&v24; /*0x1009ac7a3*/
    codexmate_lib::core::relay::models::validate_relay_provider_id::h1647d70a24fec10d( /*0x1009ac7a7*/
      (unsigned __int8 *)&v24,
      *(unsigned __int8 **)(a2 + 8),
      *(_QWORD *)(a2 + 16));
    v11 = v24; /*0x1009ac7ac*/
    if ( v24 != 0x8000000000000000LL ) /*0x1009ac7b3*/
      break; /*0x1009ac7b3*/
    if ( *(_QWORD *)(a2 + 48) != 0x8000000000000000LL ) /*0x1009ac7b9*/
    {
      v13 = *(unsigned __int8 **)(a2 + 56); /*0x1009ac7bb*/
      v14 = *(_QWORD *)(a2 + 64); /*0x1009ac7bf*/
      v10 = v13; /*0x1009ac7c3*/
      v11 = v14; /*0x1009ac7c6*/
      if ( (unsigned __int8)codexmate_lib::core::relay::codex_catalog::is_no_account_slot_slug::had9ebf64ea4cfa18( /*0x1009ac7c9*/
                              v13,
                              v14) )
      {
        v10 = (unsigned __int8 *)&v26; /*0x1009ac7d2*/
        v11 = (__int64)v13; /*0x1009ac7d6*/
        a2 += 72; /*0x1009ac7e1*/
        v9 -= 72; /*0x1009ac7e5*/
        if ( !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h21cd157e3a5e1320(&v26, v13, v14) ) /*0x1009ac7dc*/
          continue; /*0x1009ac7dc*/
      }
    }
    goto LABEL_15; /*0x1009ac7eb*/
  }
  if ( v24 ) /*0x1009ac80b*/
  {
    v10 = v25; /*0x1009ac80d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x1009ac816*/
  }
LABEL_15:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11, v12); /*0x1009ac81b*/
  v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(81, 1); /*0x1009ac82a*/
  if ( !v17 ) /*0x1009ac832*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 81); /*0x1009ac8dd*/
  v18 = v17; /*0x1009ac838*/
  memcpy(v17, &anon_f3f46b48c4f9c057aa63801556530189_380, 0x51u); /*0x1009ac84a*/
  v15 = v32; /*0x1009ac84f*/
  *v32 = 9; /*0x1009ac853*/
  v15[1] = 81; /*0x1009ac85a*/
  v15[2] = v18; /*0x1009ac862*/
  v15[3] = 81; /*0x1009ac866*/
  v16 = v27; /*0x1009ac86e*/
  if ( v27 ) /*0x1009ac875*/
  {
LABEL_17:
    v19 = 16 * v16; /*0x1009ac877*/
    v20 = 17 * v16 + 33; /*0x1009ac881*/
    if ( v20 ) /*0x1009ac885*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v26[-v19 - 16], v20, 16); /*0x1009ac897*/
  }
  return v15; /*0x1009ac89f*/
}