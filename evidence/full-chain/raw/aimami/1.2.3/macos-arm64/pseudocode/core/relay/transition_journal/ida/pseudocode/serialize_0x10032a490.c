// __ZN13codexmate_lib4core5relay18transition_journal1_128_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..transition_journal..RecentTransitionFailure$GT$9serialize @ 0x10032a490 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::transition_journal::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..transition_journal..RecentTransitionFailure$GT$::serialize::ha89ece50bb586d32(
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

  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x10032a4c2*/
    &v5,
    &anon_b0ee9adff4519c22b647af231a5a39fa_266,
    23,
    4);
  if ( v5 == 0x8000000000000002LL ) /*0x10032a4d6*/
  {
    *(_QWORD *)(a1 + 8) = v6; /*0x10032a4d8*/
    *(_BYTE *)a1 = 6; /*0x10032a4dc*/
  }
  else
  {
    v16 = v10; /*0x10032a4f1*/
    v15 = v9; /*0x10032a4f9*/
    v14 = v8; /*0x10032a505*/
    v13 = v7; /*0x10032a509*/
    v11 = v5; /*0x10032a50d*/
    v12 = v6; /*0x10032a511*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::ha7e997d65798c84b( /*0x10032a529*/
           &v11,
           &anon_b0ee9adff4519c22b647af231a5a39fa_253,
           6,
           a2 + 56);
    if ( v3 /*0x10032a58d*/
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7(
                 &v11,
                 (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_254,
                 5,
                 a2)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h936858e4dea4c3cf(
                 &v11,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_255,
                 12,
                 a2 + 48)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33(
                 &v11,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_256,
                 6,
                 a2 + 24)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v3; /*0x10032a58f*/
      *(_BYTE *)a1 = 6; /*0x10032a593*/
      v4 = v11; /*0x10032a596*/
      if ( v11 == 0x8000000000000001LL ) /*0x10032a5a1*/
      {
        if ( (_BYTE)v12 != 6 ) /*0x10032a5a7*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v12); /*0x10032a5b1*/
      }
      else
      {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h42178f288fb20d82(&v14); /*0x10032a5bf*/
        if ( v4 != 0x8000000000000000LL && v4 ) /*0x10032a5d0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v4, 1); /*0x10032a5e2*/
      }
    }
    else
    {
      v10 = v16; /*0x10032a5f0*/
      v9 = v15; /*0x10032a5f8*/
      v8 = v14; /*0x10032a600*/
      v7 = v13; /*0x10032a608*/
      v6 = v12; /*0x10032a614*/
      v5 = v11; /*0x10032a618*/
      _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf( /*0x10032a623*/
        a1,
        &v5);
    }
  }
  return a1; /*0x10032a4e2*/
}