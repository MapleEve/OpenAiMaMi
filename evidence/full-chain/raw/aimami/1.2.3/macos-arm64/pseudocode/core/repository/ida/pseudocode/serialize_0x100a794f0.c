// __ZN13codexmate_lib4core10repository1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..MysteryRouteGrant$GT$9serialize @ 0x100a794f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..MysteryRouteGrant$GT$::serialize::h3a08fe4b8c5f554e(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // [rsp+0h] [rbp-80h] BYREF
  __int64 v7; // [rsp+8h] [rbp-78h]
  __int64 v8; // [rsp+10h] [rbp-70h]
  __int64 v9; // [rsp+18h] [rbp-68h]
  __int64 v10; // [rsp+20h] [rbp-60h]
  __int64 v11; // [rsp+28h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]

  v2 = *a2; /*0x100a7950f*/
  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x100a7952f*/
    &v6,
    &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_266,
    17,
    (__PAIR128__(2, *a2) - 1) >> 64);
  if ( v6 == 0x8000000000000002LL ) /*0x100a79543*/
  {
    *(_QWORD *)(a1 + 8) = v7; /*0x100a79545*/
    *(_BYTE *)a1 = 6; /*0x100a79549*/
  }
  else
  {
    v17 = v11; /*0x100a79560*/
    v16 = v10; /*0x100a79568*/
    v15 = v9; /*0x100a79574*/
    v14 = v8; /*0x100a79578*/
    v12 = v6; /*0x100a7957c*/
    v13 = v7; /*0x100a79580*/
    v4 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbacef538d33d9aa7( /*0x100a79598*/
           &v12,
           (__int64)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_267,
           5,
           (__int64)(a2 + 2));
    if ( v4 /*0x100a79618*/
      || v2
      && (v4 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h1272f2975ba8dfb2(
                 &v12,
                 &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_268,
                 11,
                 a2)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v4; /*0x100a795a2*/
      *(_BYTE *)a1 = 6; /*0x100a795a6*/
      v5 = v12; /*0x100a795a9*/
      if ( v12 == 0x8000000000000001LL ) /*0x100a795b4*/
      {
        if ( (_BYTE)v13 != 6 ) /*0x100a795ba*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v13); /*0x100a795c0*/
      }
      else
      {
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h42178f288fb20d82(&v15); /*0x100a795cb*/
        if ( v5 != 0x8000000000000000LL && v5 ) /*0x100a795dc*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v5, 1); /*0x100a795ee*/
      }
    }
    else
    {
      v11 = v17; /*0x100a7961e*/
      v10 = v16; /*0x100a79626*/
      v9 = v15; /*0x100a7962e*/
      v8 = v14; /*0x100a79636*/
      v7 = v13; /*0x100a79642*/
      v6 = v12; /*0x100a79646*/
      _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf( /*0x100a79651*/
        a1,
        &v6);
    }
  }
  return a1; /*0x100a7954f*/
}