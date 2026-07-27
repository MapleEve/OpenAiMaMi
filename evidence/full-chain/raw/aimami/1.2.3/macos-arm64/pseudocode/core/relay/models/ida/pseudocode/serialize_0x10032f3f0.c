// __ZN13codexmate_lib4core5relay6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayModelEntry$GT$9serialize @ 0x10032f3f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayModelEntry$GT$::serialize::habbadfe61465f688(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  __int16 v9; // [rsp+8h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-20h]

  v6 = *(_QWORD **)a2; /*0x10032f400*/
  ++*(_QWORD *)(a2 + 24); /*0x10032f403*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10032f407*/
  v7 = v6[2]; /*0x10032f40b*/
  if ( *v6 == v7 ) /*0x10032f412*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10032f52c*/
    v7 = v6[2]; /*0x10032f534*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10032f41c*/
  v6[2] = v7 + 1; /*0x10032f423*/
  v9 = 256; /*0x10032f427*/
  v10 = a2; /*0x10032f42d*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032f445*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_414,
             5,
             a1 + 16);
  if ( !result ) /*0x10032f44d*/
  {
    if ( (_BYTE)v9 ) /*0x10032f45e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f45e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h74b05ea98929bdc5( /*0x10032f483*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_415,
               7,
               a1 + 88);
    if ( result ) /*0x10032f48b*/
      return result; /*0x10032f48b*/
    if ( (_BYTE)v9 ) /*0x10032f491*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f491*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x10032f4a6*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_426,
               13,
               a1);
    if ( result ) /*0x10032f4ae*/
      return result; /*0x10032f4ae*/
    if ( (_BYTE)v9 ) /*0x10032f4b4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f4b4*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10032f4ca*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_427,
               11,
               a1 + 64);
    if ( result ) /*0x10032f4d2*/
      return result; /*0x10032f4d2*/
    if ( (_BYTE)v9 ) /*0x10032f4dc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f46a*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032f4f5*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_428,
               6,
               a1 + 40);
    if ( !result ) /*0x10032f4fd*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v9); /*0x10032f507*/
      return 0; /*0x10032f50c*/
    }
  }
  return result; /*0x10032f44f*/
}