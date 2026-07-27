// __ZN13codexmate_lib4core5relay6models1_109_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayActiveByIde$GT$9serialize @ 0x10032f680 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::serialize::h5fc0feb6d3d102e9(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
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

  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x10032f6b2*/
    &v5,
    &anon_b0ee9adff4519c22b647af231a5a39fa_433,
    16,
    1);
  if ( v5 == 0x8000000000000002LL ) /*0x10032f6c6*/
  {
    *(_QWORD *)(a1 + 8) = v6; /*0x10032f6c8*/
    *(_BYTE *)a1 = 6; /*0x10032f6cc*/
  }
  else
  {
    v16 = v10; /*0x10032f6d8*/
    v15 = v9; /*0x10032f6e0*/
    v14 = v8; /*0x10032f6ec*/
    v13 = v7; /*0x10032f6f0*/
    v11 = v5; /*0x10032f6f4*/
    v12 = v6; /*0x10032f6f8*/
    v2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hd52200c1bcd4de12( /*0x10032f70f*/
           &v11,
           &anon_b0ee9adff4519c22b647af231a5a39fa_391,
           5,
           a2);
    if ( v2 ) /*0x10032f717*/
    {
      *(_QWORD *)(a1 + 8) = v2; /*0x10032f719*/
      *(_BYTE *)a1 = 6; /*0x10032f71d*/
      v3 = v11; /*0x10032f720*/
      if ( v11 == 0x8000000000000001LL ) /*0x10032f72b*/
      {
        if ( (_BYTE)v12 != 6 ) /*0x10032f731*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v12); /*0x10032f737*/
      }
      else
      {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h42178f288fb20d82(&v14); /*0x10032f780*/
        if ( v3 != 0x8000000000000000LL && v3 ) /*0x10032f78d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v3, 1); /*0x10032f79b*/
      }
    }
    else
    {
      v10 = v16; /*0x10032f742*/
      v9 = v15; /*0x10032f74a*/
      v8 = v14; /*0x10032f752*/
      v7 = v13; /*0x10032f75a*/
      v6 = v12; /*0x10032f766*/
      v5 = v11; /*0x10032f76a*/
      _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf( /*0x10032f775*/
        a1,
        &v5);
    }
  }
  return a1; /*0x10032f7a3*/
}