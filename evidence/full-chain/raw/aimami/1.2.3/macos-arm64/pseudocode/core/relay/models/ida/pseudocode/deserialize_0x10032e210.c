// __ZN13codexmate_lib4core5relay6models1_106_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$11deserialize @ 0x10032e210 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$::deserialize::h189206b19fb95956(
        __int64 a1,
        unsigned __int8 *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  _QWORD v5[5]; // [rsp+8h] [rbp-28h] BYREF

  v2 = *a2; /*0x10032e21e*/
  if ( v2 == 3 ) /*0x10032e224*/
  {
    v3 = *((_QWORD *)a2 + 3); /*0x10032e256*/
    v5[0] = *((_QWORD *)a2 + 2); /*0x10032e25a*/
    v5[1] = v3; /*0x10032e25e*/
    v5[2] = 0; /*0x10032e262*/
    _$LT$codexmate_lib..core..relay..models.._..$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$..deserialize..__Visitor$u20$as$u20$serde_core..de..Visitor$GT$::visit_enum::h9798227327825285( /*0x10032e271*/
      a1,
      v5);
  }
  else if ( v2 == 5 ) /*0x10032e229*/
  {
    serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$$RF$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::deserialize_enum::h464e54f5df966bdf( /*0x10032e24b*/
      a1,
      a2 + 8,
      &anon_b0ee9adff4519c22b647af231a5a39fa_405,
      12,
      &anon_b0ee9adff4519c22b647af231a5a39fa_409,
      3);
  }
  else
  {
    serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::unexpected::h241dbdc633fc2621(v5, a2); /*0x10032e289*/
    *(_QWORD *)(a1 + 8) = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::invalid_type::h13d4925c1d6aa5cd( /*0x10032e2a4*/
                            v5,
                            &anon_338d2c24067067f307e22096ebff88a8_71,
                            &anon_338d2c24067067f307e22096ebff88a8_72);
    *(_BYTE *)a1 = 1; /*0x10032e2a8*/
  }
  return a1; /*0x10032e279*/
}