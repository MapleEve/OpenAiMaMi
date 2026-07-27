// __ZN13codexmate_lib4core5relay6models1_102_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayIde$GT$11deserialize @ 0x10032d000 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..relay..models..RelayIde$GT$::deserialize::h10f6dee21a494958(
        __int64 *a1)
{
  int v1; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // [rsp+8h] [rbp-88h] BYREF
  __int64 v7; // [rsp+10h] [rbp-80h]
  __int64 v8; // [rsp+18h] [rbp-78h]
  __int64 v9; // [rsp+20h] [rbp-70h]
  char v10; // [rsp+40h] [rbp-50h] BYREF
  _BYTE v11[7]; // [rsp+41h] [rbp-4Fh]
  __int64 v12; // [rsp+48h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-40h]
  __int64 v14; // [rsp+58h] [rbp-38h]
  char v15; // [rsp+60h] [rbp-30h] BYREF
  _BYTE v16[7]; // [rsp+61h] [rbp-2Fh]
  __int64 v17; // [rsp+68h] [rbp-28h]
  __int64 v18; // [rsp+70h] [rbp-20h]
  __int64 v19; // [rsp+78h] [rbp-18h]

  v1 = *(unsigned __int8 *)a1; /*0x10032d00e*/
  if ( v1 == 3 ) /*0x10032d014*/
  {
    v8 = a1[3]; /*0x10032d050*/
    v3 = a1[1]; /*0x10032d054*/
    v7 = a1[2]; /*0x10032d05c*/
    v6 = v3; /*0x10032d060*/
    LOBYTE(v9) = 6; /*0x10032d067*/
    _$LT$serde_json..value..de..EnumDeserializer$u20$as$u20$serde_core..de..EnumAccess$GT$::variant_seed::hefb090934dafa765( /*0x10032d076*/
      &v10,
      &v6);
    if ( v10 == 7 ) /*0x10032d081*/
    {
      return v12; /*0x10032d083*/
    }
    else
    {
      *(_DWORD *)&v16[3] = *(_DWORD *)&v11[3]; /*0x10032d08f*/
      *(_DWORD *)v16 = *(_DWORD *)v11; /*0x10032d092*/
      v18 = v13; /*0x10032d09d*/
      v19 = v14; /*0x10032d0a5*/
      v15 = v10; /*0x10032d0a9*/
      v17 = v12; /*0x10032d0ac*/
      return _$LT$serde_json..value..de..VariantDeserializer$u20$as$u20$serde_core..de..VariantAccess$GT$::unit_variant::hff2a6c2dec43b4b5(&v15); /*0x10032d0b4*/
    }
  }
  else if ( v1 == 5 ) /*0x10032d019*/
  {
    return serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::deserialize_enum::hd2b1710ab5417b1a( /*0x10032d047*/
             a1 + 1,
             &anon_b0ee9adff4519c22b647af231a5a39fa_390,
             8,
             &anon_b0ee9adff4519c22b647af231a5a39fa_392,
             1);
  }
  else
  {
    v9 = a1[3]; /*0x10032d0c9*/
    v8 = a1[2]; /*0x10032d0d1*/
    v4 = *a1; /*0x10032d0d5*/
    v7 = a1[1]; /*0x10032d0df*/
    v6 = v4; /*0x10032d0e3*/
    serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::unexpected::h241dbdc633fc2621(&v15, &v6); /*0x10032d0f5*/
    v5 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::invalid_type::h13d4925c1d6aa5cd( /*0x10032d111*/
           &v15,
           &anon_b0ee9adff4519c22b647af231a5a39fa_20,
           &anon_b0ee9adff4519c22b647af231a5a39fa_21);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(a1); /*0x10032d117*/
    return v5; /*0x10032d11c*/
  }
}