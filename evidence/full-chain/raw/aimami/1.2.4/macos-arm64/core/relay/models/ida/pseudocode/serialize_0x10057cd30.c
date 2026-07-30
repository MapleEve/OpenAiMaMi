// __ZN13codexmate_lib4core5relay6models1_111_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$9serialize @ 0x10057cd30 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$::serialize::h5b6e6241ac0b94f9(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-80h] BYREF
  __int64 v6; // [rsp+8h] [rbp-78h]
  __int64 v7; // [rsp+10h] [rbp-70h]
  __int64 v8; // [rsp+18h] [rbp-68h]
  __int64 v9; // [rsp+20h] [rbp-60h]
  __int64 v10; // [rsp+28h] [rbp-58h]
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]

  v2 = *(_QWORD *)(a2 + 48); /*0x10057cd4f*/
  _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hc07ee8b43a325222( /*0x10057cd72*/
    &v5,
    &anon_d163fe72d6e6e73a137b22815ab75905_494,
    18,
    __OFSUB__(-v2, 1) ^ 3LL);
  if ( v5 == 0x8000000000000002LL ) /*0x10057cd86*/
  {
    *(_QWORD *)(a1 + 8) = v6; /*0x10057cd88*/
    *(_BYTE *)a1 = 6; /*0x10057cd8c*/
  }
  else
  {
    v16 = v10; /*0x10057cd95*/
    v15 = v9; /*0x10057cd9d*/
    v14 = v8; /*0x10057cda9*/
    v13 = v7; /*0x10057cdad*/
    v11 = v5; /*0x10057cdb1*/
    v12 = v6; /*0x10057cdb5*/
    v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hac89de9caf35a480( /*0x10057cdcc*/
           &v11,
           &anon_d163fe72d6e6e73a137b22815ab75905_495,
           10,
           a2);
    if ( v3 /*0x10057ce38*/
      || (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hac89de9caf35a480(
                 &v11,
                 &anon_d163fe72d6e6e73a137b22815ab75905_30,
                 5,
                 a2 + 24)) != 0
      || v2 != 0x8000000000000000LL
      && (v3 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h4b7da712eecea5ba(
                 &v11,
                 &anon_d163fe72d6e6e73a137b22815ab75905_496,
                 11,
                 a2 + 48)) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v3; /*0x10057cdf4*/
      *(_BYTE *)a1 = 6; /*0x10057cdf8*/
      core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::hd6fa3b3b30df0e03(&v11); /*0x10057cdff*/
    }
    else
    {
      v10 = v16; /*0x10057ce3e*/
      v9 = v15; /*0x10057ce46*/
      v8 = v14; /*0x10057ce4e*/
      v7 = v13; /*0x10057ce56*/
      v6 = v12; /*0x10057ce62*/
      v5 = v11; /*0x10057ce66*/
      ((void (__fastcall *)(__int64, __int64 *))_$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h813b134a3b8a10cf)( /*0x10057ce71*/
        a1,
        &v5);
    }
  }
  return a1; /*0x10057ce07*/
}