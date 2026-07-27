// __ZN13codexmate_lib4core5relay6models1_113_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$9serialize @ 0x100330670 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$::serialize::hb949d3f800c50ea1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // [rsp+8h] [rbp-78h] BYREF
  __int64 v6; // [rsp+10h] [rbp-70h]
  __int64 v7; // [rsp+18h] [rbp-68h]
  __int64 v8; // [rsp+20h] [rbp-60h]
  __int64 v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-50h]
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]

  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x1003306a2*/
    &v5,
    &anon_b0ee9adff4519c22b647af231a5a39fa_453,
    20,
    8);
  if ( v5 == 0x8000000000000002LL ) /*0x1003306b6*/
  {
    *(_QWORD *)(a1 + 8) = v6; /*0x1003306b8*/
    *(_BYTE *)a1 = 6; /*0x1003306bc*/
  }
  else
  {
    v16 = v10; /*0x1003306d1*/
    v15 = v9; /*0x1003306d9*/
    v14 = v8; /*0x1003306e5*/
    v13 = v7; /*0x1003306e9*/
    v11 = v5; /*0x1003306ed*/
    v12 = v6; /*0x1003306f1*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h936858e4dea4c3cf( /*0x10033070c*/
           &v11,
           &anon_b0ee9adff4519c22b647af231a5a39fa_454,
           4,
           a2 + 144);
    if ( v3 /*0x1003307f7*/
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7(
                 &v11,
                 (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_455,
                 8,
                 a2)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7(
                 &v11,
                 (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_456,
                 14,
                 a2 + 24)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33(
                 &v11,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_446,
                 10,
                 a2 + 48)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33(
                 &v11,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_457,
                 12,
                 a2 + 72)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33(
                 &v11,
                 "upstreamUrl",
                 11,
                 a2 + 96)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hc9f6bcb0895236a8(
                 &v11,
                 (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_448,
                 6,
                 a2 + 152)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33(
                 &v11,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_338,
                 5,
                 a2 + 120)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v3; /*0x1003307f9*/
      *(_BYTE *)a1 = 6; /*0x1003307fd*/
      v4 = v11; /*0x100330800*/
      if ( v11 == 0x8000000000000001LL ) /*0x10033080b*/
      {
        if ( (_BYTE)v12 != 6 ) /*0x100330811*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v12); /*0x10033081b*/
      }
      else
      {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h42178f288fb20d82(&v14); /*0x100330829*/
        if ( v4 != 0x8000000000000000LL && v4 ) /*0x10033083a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v4, 1); /*0x10033084c*/
      }
    }
    else
    {
      v10 = v16; /*0x10033085a*/
      v9 = v15; /*0x100330862*/
      v8 = v14; /*0x10033086a*/
      v7 = v13; /*0x100330872*/
      v6 = v12; /*0x10033087e*/
      v5 = v11; /*0x100330882*/
      _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf( /*0x10033088d*/
        a1,
        &v5);
    }
  }
  return a1; /*0x1003306c2*/
}