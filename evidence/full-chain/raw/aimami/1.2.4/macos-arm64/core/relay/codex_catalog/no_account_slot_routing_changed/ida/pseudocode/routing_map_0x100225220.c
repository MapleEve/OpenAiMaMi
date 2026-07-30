// __ZN13codexmate_lib4core5relay13codex_catalog31no_account_slot_routing_changed11routing_map @ 0x100225220 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_catalog::no_account_slot_routing_changed::routing_map::h0ea74b873e1cc3e2(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // r14
  __int64 *v9; // rdx
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  _QWORD v13[3]; // [rsp+0h] [rbp-120h] BYREF
  __int64 v14; // [rsp+18h] [rbp-108h]
  __int64 v15; // [rsp+20h] [rbp-100h]
  _QWORD v16[3]; // [rsp+30h] [rbp-F0h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-B8h]
  __int64 v20; // [rsp+70h] [rbp-B0h]
  __int64 v21; // [rsp+78h] [rbp-A8h]
  __int64 v22; // [rsp+80h] [rbp-A0h]
  __int64 v23; // [rsp+88h] [rbp-98h]
  _QWORD v24[3]; // [rsp+90h] [rbp-90h] BYREF
  _QWORD v25[3]; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-58h]
  __int64 v28; // [rsp+D0h] [rbp-50h]
  __int64 v29; // [rsp+D8h] [rbp-48h]
  __int64 v30; // [rsp+E0h] [rbp-40h]
  __int64 v31; // [rsp+E8h] [rbp-38h]
  __int64 *v32; // [rsp+F0h] [rbp-30h]

  v32 = a1; /*0x10022523a*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100225245*/
  if ( *(_BYTE *)(v4 + 16) == 1 ) /*0x10022524b*/
  {
    v5 = *(_QWORD *)v4; /*0x100225251*/
    v6 = *(_QWORD *)(v4 + 8); /*0x100225254*/
  }
  else
  {
    v11 = v4; /*0x100225442*/
    v5 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x10022544a*/
    v4 = v11; /*0x10022544d*/
    v6 = v12; /*0x100225450*/
    *(_QWORD *)v4 = v5; /*0x100225453*/
    *(_QWORD *)(v4 + 8) = v12; /*0x100225456*/
    *(_BYTE *)(v4 + 16) = 1; /*0x10022545a*/
  }
  *(_QWORD *)v4 = v5 + 1; /*0x10022525c*/
  hashbrown::raw::RawTableInner::fallible_with_capacity::h25bfde60e259c0b1(&v18, 72, a3, 1); /*0x100225273*/
  v29 = v21; /*0x10022527f*/
  v28 = v20; /*0x10022528a*/
  v27 = v19; /*0x10022529c*/
  v26 = v18; /*0x1002252a0*/
  v30 = v5; /*0x1002252a4*/
  v31 = v6; /*0x1002252a8*/
  if ( a3 ) /*0x1002252af*/
  {
    v7 = 72 * a3; /*0x1002252b9*/
    v8 = (_QWORD *)(a2 + 48); /*0x1002252ce*/
    while ( *v8 != 0x8000000000000000LL ) /*0x1002252e3*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v17, v8); /*0x1002252f3*/
      v25[2] = v17[2]; /*0x100225303*/
      v25[1] = v17[1]; /*0x100225315*/
      v25[0] = v17[0]; /*0x100225319*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v24, v8 - 6); /*0x100225324*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v16, v8 - 3); /*0x100225334*/
      v20 = v24[2]; /*0x10022533d*/
      v19 = v24[1]; /*0x100225352*/
      v18 = v24[0]; /*0x100225359*/
      v23 = v16[2]; /*0x100225367*/
      v22 = v16[1]; /*0x10022537a*/
      v21 = v16[0]; /*0x10022537f*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1803c7708970560b(v13, &v26, v25, &v18); /*0x100225395*/
      if ( v13[0] != 0x8000000000000000LL ) /*0x1002253a4*/
      {
        if ( v13[0] ) /*0x1002253ec*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13[1], v13[0], 1); /*0x1002253fa*/
        if ( v14 ) /*0x100225409*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v14, 1); /*0x100225417*/
        break; /*0x100225417*/
      }
      v8 += 9; /*0x1002253a6*/
      v7 -= 72; /*0x1002253aa*/
      if ( !v7 ) /*0x1002253ae*/
        goto LABEL_8; /*0x1002253ae*/
    }
    *v32 = 0; /*0x10022541c*/
    return core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$$LP$alloc..string..String$C$alloc..string..String$RP$$GT$$GT$::h9346c027758bfcda(&v26); /*0x10022542b*/
  }
  else
  {
LABEL_8:
    v9 = v32; /*0x1002253b4*/
    v32[5] = v31; /*0x1002253bc*/
    v9[4] = v30; /*0x1002253c4*/
    v9[3] = v29; /*0x1002253cc*/
    v9[2] = v28; /*0x1002253d4*/
    result = v26; /*0x1002253d8*/
    v9[1] = v27; /*0x1002253e0*/
    *v9 = result; /*0x1002253e4*/
  }
  return result; /*0x100225430*/
}