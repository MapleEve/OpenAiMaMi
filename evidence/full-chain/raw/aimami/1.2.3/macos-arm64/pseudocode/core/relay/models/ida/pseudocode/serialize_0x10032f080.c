// __ZN13codexmate_lib4core5relay6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayModelEntry$GT$9serialize @ 0x10032f080 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayModelEntry$GT$::serialize::h516c35eff6878d91(
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

  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x10032f0b2*/
    &v5,
    &anon_b0ee9adff4519c22b647af231a5a39fa_425,
    15,
    5);
  if ( v5 == 0x8000000000000002LL ) /*0x10032f0c6*/
  {
    *(_QWORD *)(a1 + 8) = v6; /*0x10032f0c8*/
    *(_BYTE *)a1 = 6; /*0x10032f0cc*/
  }
  else
  {
    v16 = v10; /*0x10032f0e1*/
    v15 = v9; /*0x10032f0e9*/
    v14 = v8; /*0x10032f0f5*/
    v13 = v7; /*0x10032f0f9*/
    v11 = v5; /*0x10032f0fd*/
    v12 = v6; /*0x10032f101*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7( /*0x10032f119*/
           &v11,
           (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_414,
           5,
           a2 + 16);
    if ( v3 /*0x10032f19b*/
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h7991eab4eeb1fb64(
                 &v11,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_415,
                 7,
                 a2 + 88)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h1272f2975ba8dfb2(
                 &v11,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_426,
                 13,
                 a2)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb2e5990ae042c33(
                 &v11,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_427,
                 11,
                 a2 + 64)) != 0
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7(
                 &v11,
                 (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_428,
                 6,
                 a2 + 40)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v3; /*0x10032f19d*/
      *(_BYTE *)a1 = 6; /*0x10032f1a1*/
      v4 = v11; /*0x10032f1a4*/
      if ( v11 == 0x8000000000000001LL ) /*0x10032f1af*/
      {
        if ( (_BYTE)v12 != 6 ) /*0x10032f1b5*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v12); /*0x10032f1bf*/
      }
      else
      {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h42178f288fb20d82(&v14); /*0x10032f1cd*/
        if ( v4 != 0x8000000000000000LL && v4 ) /*0x10032f1de*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v4, 1); /*0x10032f1f0*/
      }
    }
    else
    {
      v10 = v16; /*0x10032f1fe*/
      v9 = v15; /*0x10032f206*/
      v8 = v14; /*0x10032f20e*/
      v7 = v13; /*0x10032f216*/
      v6 = v12; /*0x10032f222*/
      v5 = v11; /*0x10032f226*/
      _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf( /*0x10032f231*/
        a1,
        &v5);
    }
  }
  return a1; /*0x10032f0d2*/
}