// __ZN13codexmate_lib4core5relay6models1_106_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$11deserialize @ 0x10032e4f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$::deserialize::h7aaec311f8437db4(
        __int64 a1,
        __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rax
  char v4; // r14
  __int64 v5; // rax
  __int64 v7; // rax
  _QWORD v8[4]; // [rsp+0h] [rbp-90h] BYREF
  __int64 v9; // [rsp+20h] [rbp-70h] BYREF
  __int64 v10; // [rsp+28h] [rbp-68h]
  __int64 v11; // [rsp+30h] [rbp-60h]
  __int64 v12; // [rsp+38h] [rbp-58h]
  _BYTE v13[8]; // [rsp+58h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp-30h]
  __int64 v15; // [rsp+68h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp-20h]
  __int64 v17; // [rsp+78h] [rbp-18h]

  v2 = *(unsigned __int8 *)a2; /*0x10032e501*/
  if ( v2 == 3 ) /*0x10032e507*/
  {
    v11 = a2[3]; /*0x10032e53d*/
    v3 = a2[1]; /*0x10032e541*/
    v10 = a2[2]; /*0x10032e549*/
    v9 = v3; /*0x10032e54d*/
    LOBYTE(v12) = 6; /*0x10032e551*/
    _$LT$serde_json..value..de..EnumDeserializer$u20$as$u20$serde_core..de..EnumAccess$GT$::variant_seed::hfd8f5913295c1b47( /*0x10032e55d*/
      v13,
      &v9);
    v4 = v13[0]; /*0x10032e562*/
    v5 = v14; /*0x10032e567*/
    if ( v13[0] == 3 /*0x10032e5a2*/
      || (v8[3] = v17,
          v8[2] = v16,
          v8[1] = v15,
          v8[0] = v14,
          (v5 = _$LT$serde_json..value..de..VariantDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::hff2a6c2dec43b4b5(v8)) != 0) )
    {
      *(_QWORD *)(a1 + 8) = v5; /*0x10032e5a4*/
      *(_BYTE *)a1 = 1; /*0x10032e5aa*/
    }
    else
    {
      *(_BYTE *)(a1 + 1) = v4; /*0x10032e5bb*/
      *(_BYTE *)a1 = 0; /*0x10032e5c1*/
    }
  }
  else if ( v2 == 5 ) /*0x10032e50c*/
  {
    serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::deserialize_enum::hbd4a1d8a6c33c5e5( /*0x10032e532*/
      a1,
      a2 + 1,
      &anon_b0ee9adff4519c22b647af231a5a39fa_405,
      12,
      &anon_b0ee9adff4519c22b647af231a5a39fa_409,
      3);
  }
  else
  {
    v12 = a2[3]; /*0x10032e5c9*/
    v11 = a2[2]; /*0x10032e5d1*/
    v7 = *a2; /*0x10032e5d5*/
    v10 = a2[1]; /*0x10032e5df*/
    v9 = v7; /*0x10032e5e3*/
    serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::unexpected::h241dbdc633fc2621(v13, &v9); /*0x10032e5ef*/
    *(_QWORD *)(a1 + 8) = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::invalid_type::h13d4925c1d6aa5cd( /*0x10032e60b*/
                            v13,
                            &anon_b0ee9adff4519c22b647af231a5a39fa_20,
                            &anon_b0ee9adff4519c22b647af231a5a39fa_21);
    *(_BYTE *)a1 = 1; /*0x10032e60f*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2); /*0x10032e615*/
  }
  return a1; /*0x10032e5af*/
}