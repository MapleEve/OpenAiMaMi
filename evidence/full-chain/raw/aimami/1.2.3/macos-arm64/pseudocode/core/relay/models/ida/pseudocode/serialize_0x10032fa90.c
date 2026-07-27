// __ZN13codexmate_lib4core5relay6models1_109_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayProxyStatus$GT$9serialize @ 0x10032fa90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayProxyStatus$GT$::serialize::h119cfb667aeb3bc1(
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

  v6 = *(_QWORD **)a2; /*0x10032faa0*/
  ++*(_QWORD *)(a2 + 24); /*0x10032faa3*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10032faa7*/
  v7 = v6[2]; /*0x10032faab*/
  if ( *v6 == v7 ) /*0x10032fab2*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10032fbcc*/
    v7 = v6[2]; /*0x10032fbd4*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10032fabc*/
  v6[2] = v7 + 1; /*0x10032fac3*/
  v9 = 256; /*0x10032fac7*/
  v10 = a2; /*0x10032facd*/
  result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x10032fae5*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_438,
             7,
             a1 + 74);
  if ( !result ) /*0x10032faed*/
  {
    if ( (_BYTE)v9 ) /*0x10032fafe*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032fafe*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9e6a011e3bbe5c6b( /*0x10032fb23*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_284,
               4,
               a1 + 72);
    if ( result ) /*0x10032fb2b*/
      return result; /*0x10032fb2b*/
    if ( (_BYTE)v9 ) /*0x10032fb31*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032fb31*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032fb46*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_412,
               7,
               a1);
    if ( result ) /*0x10032fb4e*/
      return result; /*0x10032fb4e*/
    if ( (_BYTE)v9 ) /*0x10032fb54*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032fb54*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032fb6a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_439,
               12,
               a1 + 24);
    if ( result ) /*0x10032fb72*/
      return result; /*0x10032fb72*/
    if ( (_BYTE)v9 ) /*0x10032fb7c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032fb0a*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10032fb95*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_423,
               9,
               a1 + 48);
    if ( !result ) /*0x10032fb9d*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v9); /*0x10032fba7*/
      return 0; /*0x10032fbac*/
    }
  }
  return result; /*0x10032faef*/
}