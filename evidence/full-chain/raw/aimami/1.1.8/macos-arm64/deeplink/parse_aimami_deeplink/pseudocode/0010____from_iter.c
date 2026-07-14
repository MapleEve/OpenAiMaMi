// mac 1.1.8 parse_aimami_deeplink node va=0x1005192f0 depth=1
// _::from_iter
_QWORD *__fastcall _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::h40523b948e4f9760(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *result; // rax
  void *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-E8h] BYREF
  _QWORD v12[3]; // [rsp+20h] [rbp-D0h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-B8h] BYREF
  _QWORD v14[6]; // [rsp+50h] [rbp-A0h] BYREF
  _QWORD v15[2]; // [rsp+80h] [rbp-70h] BYREF
  _QWORD *v16; // [rsp+90h] [rbp-60h]
  void *v17; // [rsp+98h] [rbp-58h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-50h]
  __int64 v19; // [rsp+A8h] [rbp-48h]
  __int64 v20; // [rsp+B0h] [rbp-40h]
  __int64 v21; // [rsp+B8h] [rbp-38h]
  __int64 v22; // [rsp+C0h] [rbp-30h]

  v16 = a1; /*0x100519304*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10051930f*/
  v4 = v2; /*0x100519311*/
  if ( *(_BYTE *)(v2 + 16) == 1 ) /*0x100519318*/
  {
    v5 = *(_QWORD *)v2; /*0x10051931e*/
    v6 = *(_QWORD *)(v4 + 8); /*0x100519321*/
  }
  else
  {
    v9 = v3; /*0x100519493*/
    v5 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x10051949c*/
    v6 = v10; /*0x1005194a7*/
    v3 = v9; /*0x1005194aa*/
    *(_QWORD *)v4 = v5; /*0x1005194ad*/
    *(_QWORD *)(v4 + 8) = v6; /*0x1005194b0*/
    *(_BYTE *)(v4 + 16) = 1; /*0x1005194b4*/
  }
  *(_QWORD *)v4 = v5 + 1; /*0x100519329*/
  v20 = 0; /*0x100519333*/
  v19 = 0; /*0x10051933e*/
  v18 = 0; /*0x100519349*/
  v17 = anon_daf50d54a2d3ecbdf54de6a8568b21ab_88; /*0x100519354*/
  v21 = v5; /*0x100519358*/
  v22 = v6; /*0x10051935c*/
  v15[0] = a2; /*0x100519360*/
  v15[1] = v3; /*0x100519364*/
  _$LT$form_urlencoded..ParseIntoOwned$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h27f65271964bff85( /*0x100519373*/
    v14,
    v15);
  if ( !__OFSUB__(0, v14[0]) ) /*0x100519381*/
  {
    do /*0x100519448*/
    {
      v13[2] = v14[2]; /*0x1005193b7*/
      v13[1] = v14[1]; /*0x1005193cc*/
      v13[0] = v14[0]; /*0x1005193d3*/
      v12[0] = v14[3]; /*0x1005193e1*/
      v12[1] = v14[4]; /*0x1005193e8*/
      v12[2] = v14[5]; /*0x1005193f3*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h0863545c6138448b(&v11, &v17, v13, v12); /*0x10051940f*/
      if ( v11 != 0x8000000000000000LL && v11 ) /*0x100519423*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100519431*/
      _$LT$form_urlencoded..ParseIntoOwned$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h27f65271964bff85( /*0x10051943c*/
        v14,
        v15);
    }
    while ( v14[0] != 0x8000000000000000LL ); /*0x100519448*/
  }
  result = v16; /*0x100519452*/
  v16[5] = v22; /*0x100519456*/
  result[4] = v21; /*0x10051945e*/
  result[3] = v20; /*0x100519466*/
  result[2] = v19; /*0x10051946e*/
  v8 = v17; /*0x100519472*/
  result[1] = v18; /*0x10051947a*/
  *result = v8; /*0x10051947e*/
  return result; /*0x100519481*/
}