// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x100762260 d=1
_QWORD *__fastcall _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::h3fb6c5eb51045d1d(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  void *v8; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r15
  void *v13; // [rsp+0h] [rbp-50h] BYREF
  __int64 v14; // [rsp+8h] [rbp-48h]
  __int64 v15; // [rsp+10h] [rbp-40h]
  __int64 v16; // [rsp+18h] [rbp-38h]
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h]

  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10076227c*/
  v5 = v3; /*0x10076227e*/
  if ( *(_BYTE *)(v3 + 16) == 1 ) /*0x100762285*/
  {
    v6 = *(_QWORD *)v3; /*0x10076228b*/
    v7 = *(_QWORD *)(v5 + 8); /*0x10076228e*/
  }
  else
  {
    v10 = v4; /*0x100762326*/
    v6 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x10076232c*/
    v7 = v11; /*0x100762334*/
    v4 = v10; /*0x100762337*/
    *(_QWORD *)v5 = v6; /*0x10076233a*/
    *(_QWORD *)(v5 + 8) = v7; /*0x10076233e*/
    *(_BYTE *)(v5 + 16) = 1; /*0x100762343*/
  }
  *(_QWORD *)v5 = v6 + 1; /*0x100762296*/
  v16 = 0; /*0x1007622a0*/
  v15 = 0; /*0x1007622ab*/
  v14 = 0; /*0x1007622b6*/
  v13 = anon_e09fd79b0c076fb9bf9cf83012bf0a76_9; /*0x1007622c1*/
  v17 = v6; /*0x1007622c5*/
  v18 = v7; /*0x1007622c9*/
  if ( v4 != a2 ) /*0x1007622d3*/
  {
    v12 = v4; /*0x10076235a*/
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h50c0c5969bb24bb3( /*0x100762365*/
      &v13,
      (unsigned __int64)(v4 - a2) >> 6,
      &v17,
      1);
    v4 = v12; /*0x10076236a*/
  }
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h5f3e4613bc99f770( /*0x1007622e2*/
    a2,
    v4,
    &v13);
  a1[5] = v18; /*0x1007622eb*/
  a1[4] = v17; /*0x1007622f3*/
  a1[3] = v16; /*0x1007622fb*/
  a1[2] = v15; /*0x100762303*/
  v8 = v13; /*0x100762307*/
  a1[1] = v14; /*0x10076230f*/
  *a1 = v8; /*0x100762313*/
  return a1; /*0x100762319*/
}