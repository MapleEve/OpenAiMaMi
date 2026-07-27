// __ZN13codexmate_lib4core5relay6models1_104_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$11deserialize @ 0x10032ddd0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$::deserialize::h82c03b4ce5ac2d4d(
        __int64 a1,
        unsigned __int8 *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  _QWORD v5[5]; // [rsp+8h] [rbp-28h] BYREF

  v2 = *a2; /*0x10032ddde*/
  if ( v2 == 3 ) /*0x10032dde4*/
  {
    v3 = *((_QWORD *)a2 + 3); /*0x10032de16*/
    v5[0] = *((_QWORD *)a2 + 2); /*0x10032de1a*/
    v5[1] = v3; /*0x10032de1e*/
    v5[2] = 0; /*0x10032de22*/
    _$LT$codexmate_lib..core..relay..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayBrand$GT$..deserialize..__Visitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_enum::hfc84e02cc3197b4d( /*0x10032de31*/
      a1,
      v5);
  }
  else if ( v2 == 5 ) /*0x10032dde9*/
  {
    serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$$RF$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::deserialize_enum::h38edbd229c9023f6( /*0x10032de0b*/
      a1,
      a2 + 8,
      &anon_b0ee9adff4519c22b647af231a5a39fa_393,
      10,
      &anon_b0ee9adff4519c22b647af231a5a39fa_403,
      7);
  }
  else
  {
    serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::unexpected::h241dbdc633fc2621(v5, a2); /*0x10032de49*/
    *(_QWORD *)(a1 + 8) = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::invalid_type::h13d4925c1d6aa5cd( /*0x10032de64*/
                            v5,
                            &anon_338d2c24067067f307e22096ebff88a8_71,
                            &anon_338d2c24067067f307e22096ebff88a8_72);
    *(_BYTE *)a1 = 1; /*0x10032de68*/
  }
  return a1; /*0x10032de39*/
}