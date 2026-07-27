// __ZN13codexmate_lib4core6models1_100_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..TokenDaySeries$GT$9serialize @ 0x10033a520 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..TokenDaySeries$GT$::serialize::hb27c114f83a1c72b(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  __int16 v9; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+10h] [rbp-20h]

  v6 = *a2; /*0x10033a530*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033a533*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033a53a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033a6a5*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033a6ad*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033a544*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033a54b*/
  v9 = 256; /*0x10033a54f*/
  v10 = a2; /*0x10033a555*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033a56c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_620,
             4,
             a1);
  if ( !result ) /*0x10033a574*/
  {
    if ( (_BYTE)v9 ) /*0x10033a585*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a585*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033a5aa*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_621,
               11,
               a1 + 24);
    if ( result ) /*0x10033a5b2*/
      return result; /*0x10033a5b2*/
    if ( (_BYTE)v9 ) /*0x10033a5b8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a5b8*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033a5ce*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_622,
               12,
               a1 + 32);
    if ( result ) /*0x10033a5d6*/
      return result; /*0x10033a5d6*/
    if ( (_BYTE)v9 ) /*0x10033a5dc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a5dc*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033a5f2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_623,
               15,
               a1 + 40);
    if ( result ) /*0x10033a5fa*/
      return result; /*0x10033a5fa*/
    if ( (_BYTE)v9 ) /*0x10033a604*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a604*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033a61a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_624,
               11,
               a1 + 48);
    if ( result ) /*0x10033a622*/
      return result; /*0x10033a622*/
    if ( (_BYTE)v9 ) /*0x10033a62c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a591*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033a649*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_625,
               10,
               a1 + 56);
    if ( !result ) /*0x10033a651*/
    {
      result = 0; /*0x10033a657*/
      if ( (v9 & 1) == 0 ) /*0x10033a65d*/
      {
        if ( HIBYTE(v9) ) /*0x10033a667*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033a680*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033a685*/
        }
      }
    }
  }
  return result; /*0x10033a576*/
}