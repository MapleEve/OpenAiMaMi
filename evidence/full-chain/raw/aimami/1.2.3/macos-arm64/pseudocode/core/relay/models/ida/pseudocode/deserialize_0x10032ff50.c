// __ZN13codexmate_lib4core5relay6models1_110_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayNetworkMode$GT$11deserialize @ 0x10032ff50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayNetworkMode$GT$::deserialize::h6bc4e4d7fac28467(
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

  v2 = *(unsigned __int8 *)a2; /*0x10032ff61*/
  if ( v2 == 3 ) /*0x10032ff67*/
  {
    v11 = a2[3]; /*0x10032ff9d*/
    v3 = a2[1]; /*0x10032ffa1*/
    v10 = a2[2]; /*0x10032ffa9*/
    v9 = v3; /*0x10032ffad*/
    LOBYTE(v12) = 6; /*0x10032ffb1*/
    _$LT$serde_json..value..de..EnumDeserializer$u20$as$u20$serde_core..de..EnumAccess$GT$::variant_seed::h9847785789aa84dd( /*0x10032ffbd*/
      v13,
      &v9);
    v4 = v13[0]; /*0x10032ffc2*/
    v5 = v14; /*0x10032ffc7*/
    if ( v13[0] == 2 /*0x100330002*/
      || (v8[3] = v17,
          v8[2] = v16,
          v8[1] = v15,
          v8[0] = v14,
          (v5 = _$LT$serde_json..value..de..VariantDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::hff2a6c2dec43b4b5(v8)) != 0) )
    {
      *(_QWORD *)(a1 + 8) = v5; /*0x100330004*/
      *(_BYTE *)a1 = 1; /*0x10033000a*/
    }
    else
    {
      *(_BYTE *)(a1 + 1) = v4; /*0x10033001b*/
      *(_BYTE *)a1 = 0; /*0x100330021*/
    }
  }
  else if ( v2 == 5 ) /*0x10032ff6c*/
  {
    serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::deserialize_enum::h93b906fb89b1252e( /*0x10032ff92*/
      a1,
      a2 + 1,
      &anon_b0ee9adff4519c22b647af231a5a39fa_434,
      16,
      &anon_b0ee9adff4519c22b647af231a5a39fa_441,
      2);
  }
  else
  {
    v12 = a2[3]; /*0x100330029*/
    v11 = a2[2]; /*0x100330031*/
    v7 = *a2; /*0x100330035*/
    v10 = a2[1]; /*0x10033003f*/
    v9 = v7; /*0x100330043*/
    serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::unexpected::h241dbdc633fc2621(v13, &v9); /*0x10033004f*/
    *(_QWORD *)(a1 + 8) = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::invalid_type::h13d4925c1d6aa5cd( /*0x10033006b*/
                            v13,
                            &anon_b0ee9adff4519c22b647af231a5a39fa_20,
                            &anon_b0ee9adff4519c22b647af231a5a39fa_21);
    *(_BYTE *)a1 = 1; /*0x10033006f*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a2); /*0x100330075*/
  }
  return a1; /*0x10033000f*/
}