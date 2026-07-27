// __ZN13codexmate_lib4core5relay10invariants1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..invariants..Violation$GT$9serialize @ 0x100250e10
__int64 __fastcall codexmate_lib::core::relay::invariants::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..invariants..Violation$GT$::serialize::h5ce7aea37986bb5a(
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

  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x100250e42*/
    &v5,
    &anon_39a6e93098609d65551b0fc4eadbbbd9_112,
    9,
    2);
  if ( v5 == 0x8000000000000002LL ) /*0x100250e56*/
  {
    *(_QWORD *)(a1 + 8) = v6; /*0x100250e58*/
    *(_BYTE *)a1 = 6; /*0x100250e5c*/
  }
  else
  {
    v16 = v10; /*0x100250e71*/
    v15 = v9; /*0x100250e79*/
    v14 = v8; /*0x100250e85*/
    v13 = v7; /*0x100250e89*/
    v11 = v5; /*0x100250e8d*/
    v12 = v6; /*0x100250e91*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb255fc117ffca901( /*0x100250ea9*/
           &v11,
           (__int64)&anon_39a6e93098609d65551b0fc4eadbbbd9_113,
           3,
           a2 + 24);
    if ( v3 /*0x100250ece*/
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7(
                 &v11,
                 (__int64)&anon_39a6e93098609d65551b0fc4eadbbbd9_114,
                 6,
                 a2)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v3; /*0x100250ed0*/
      *(_BYTE *)a1 = 6; /*0x100250ed4*/
      v4 = v11; /*0x100250ed7*/
      if ( v11 == 0x8000000000000001LL ) /*0x100250ee2*/
      {
        if ( (_BYTE)v12 != 6 ) /*0x100250ee8*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v12); /*0x100250ef2*/
      }
      else
      {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h42178f288fb20d82(&v14); /*0x100250f00*/
        if ( v4 != 0x8000000000000000LL && v4 ) /*0x100250f11*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v4, 1); /*0x100250f23*/
      }
    }
    else
    {
      v10 = v16; /*0x100250f31*/
      v9 = v15; /*0x100250f39*/
      v8 = v14; /*0x100250f41*/
      v7 = v13; /*0x100250f49*/
      v6 = v12; /*0x100250f55*/
      v5 = v11; /*0x100250f59*/
      _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf( /*0x100250f64*/
        a1,
        &v5);
    }
  }
  return a1; /*0x100250e62*/
}