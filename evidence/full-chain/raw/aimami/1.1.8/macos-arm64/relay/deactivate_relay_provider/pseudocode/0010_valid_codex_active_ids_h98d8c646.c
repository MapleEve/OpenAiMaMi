// codexmate_lib::core::relay::manager::valid_codex_active_ids::h98d8c646eef162e0
addr: 0x1005cf100
role: builds a HashMap<id,&RelayProvider> from RelayState.providers (232-byte stride confirms 1.1.8 RelayProvider layout), then filters a second input id-list down to only ids still present in that map (validates 'still-active candidate' ids against the live provider set)
terminated_reason: data_structure_leaf (hashbrown::HashMap::insert + Vec::from_iter, no further app logic)
0-truncation full decompile
// --- refs ---
// ref: 0x1015b6e50 __ZN3std4hash6random11RandomState3new4KEYS29_$u7b$$u7b$constant$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$23__RUST_STD_INTERNAL_VAL17h546f1d4ea362e384E
// ref: 0x1010a4aa0 __ZN3std3sys6random19hashmap_random_keys17h0ea0c5485cd34a45E
// ref: 0x101533af8 _anon.1f22c03b288e649fafb3d21192ed4cff.8
// ref: 0x10071db20 __ZN9hashbrown3map28HashMap$LT$K$C$V$C$S$C$A$GT$6insert17h919a34fee2aa172fE
// ref: 0x1006b9fe0 __ZN111_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$9from_iter17h034a595852dcfb14E
// ref: 0x100001440 __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// --- decompiled pseudocode (反编译器 Hex-Rays, x86_64 slice) ---

double __fastcall codexmate_lib::core::relay::manager::valid_codex_active_ids::h98d8c646eef162e0(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r12
  __int64 v9; // rcx
  double result; // xmm0_8
  __int64 v11; // r15
  _QWORD v12[3]; // [rsp+0h] [rbp-A0h] BYREF
  char *v13; // [rsp+18h] [rbp-88h] BYREF
  __int64 v14; // [rsp+20h] [rbp-80h]
  __int64 v15; // [rsp+28h] [rbp-78h]
  __int64 v16; // [rsp+30h] [rbp-70h]
  __int64 v17; // [rsp+38h] [rbp-68h]
  __int64 v18; // [rsp+40h] [rbp-60h]
  char *v19; // [rsp+48h] [rbp-58h] BYREF
  __int64 v20; // [rsp+50h] [rbp-50h]
  __int64 v21; // [rsp+58h] [rbp-48h]
  __int64 v22; // [rsp+60h] [rbp-40h]
  __int64 v23; // [rsp+68h] [rbp-38h]
  __int64 v24; // [rsp+70h] [rbp-30h]

  v2 = a2[1]; /*0x1005cf117*/
  v3 = a2[2]; /*0x1005cf11b*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1005cf126*/
  v5 = (_QWORD *)v4; /*0x1005cf128*/
  if ( *(_BYTE *)(v4 + 16) == 1 ) /*0x1005cf12f*/
  {
    v6 = *(_QWORD *)v4; /*0x1005cf135*/
    v7 = v5[1]; /*0x1005cf138*/
  }
  else
  {
    v11 = v4; /*0x1005cf25b*/
    v6 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1005cf25e*/
    v5 = (_QWORD *)v11; /*0x1005cf263*/
    *(_QWORD *)v11 = v6; /*0x1005cf266*/
    *(_QWORD *)(v11 + 8) = v7; /*0x1005cf269*/
    *(_BYTE *)(v11 + 16) = 1; /*0x1005cf26d*/
  }
  *v5 = v6 + 1; /*0x1005cf140*/
  v22 = 0; /*0x1005cf14a*/
  v21 = 0; /*0x1005cf155*/
  v20 = 0; /*0x1005cf160*/
  v19 = (char *)anon_1f22c03b288e649fafb3d21192ed4cff_8; /*0x1005cf16b*/
  v23 = v6; /*0x1005cf16f*/
  v24 = v7; /*0x1005cf173*/
  if ( v3 ) /*0x1005cf17a*/
  {
    v8 = (_QWORD *)(v2 + 16); /*0x1005cf17c*/
    do /*0x1005cf1ab*/
    {
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h919a34fee2aa172f(&v19, *(v8 - 1), *v8); /*0x1005cf19c*/
      v8 += 29; /*0x1005cf1a1*/
      --v3; /*0x1005cf1a8*/
    }
    while ( v3 ); /*0x1005cf1ab*/
  }
  v18 = v24; /*0x1005cf1b1*/
  v17 = v23; /*0x1005cf1b9*/
  v16 = v22; /*0x1005cf1c1*/
  v15 = v21; /*0x1005cf1c9*/
  v14 = v20; /*0x1005cf1d5*/
  v13 = v19; /*0x1005cf1d9*/
  v9 = a2[4] + 24LL * a2[5]; /*0x1005cf1ec*/
  v12[0] = a2[4]; /*0x1005cf1f0*/
  v12[1] = v9; /*0x1005cf1f7*/
  v12[2] = &v13; /*0x1005cf205*/
  ((void (__fastcall *)(__int64, _QWORD *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h034a595852dcfb14)( /*0x1005cf216*/
    a1,
    v12);
  if ( v14 ) /*0x1005cf222*/
  {
    if ( 17 * v14 != -33 ) /*0x1005cf232*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v13[-16 * v14 - 16], 17 * v14 + 33, 16); /*0x1005cf247*/
  }
  return result; /*0x1005cf24c*/
}
