// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyEntry$GT$9serialize @ 0x10033f900 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyEntry$GT$::serialize::hc4a311ed12d558bd(
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

  v6 = *a2; /*0x10033f910*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033f913*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033f91a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033fae7*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033faef*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033f924*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033f92b*/
  v9 = 256; /*0x10033f92f*/
  v10 = a2; /*0x10033f935*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033f94c*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1);
  if ( !result ) /*0x10033f954*/
  {
    if ( (_BYTE)v9 ) /*0x10033f965*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f965*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, "source", 6, a1 + 24); /*0x10033f98a*/
    if ( result ) /*0x10033f992*/
      return result; /*0x10033f992*/
    if ( (_BYTE)v9 ) /*0x10033f998*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f998*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033f9ae*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_809,
               11,
               a1 + 48);
    if ( result ) /*0x10033f9b6*/
      return result; /*0x10033f9b6*/
    if ( (_BYTE)v9 ) /*0x10033f9bc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f9bc*/
    result = serde_core::ser::SerializeMap::serialize_entry::ha0969c40f13cce10( /*0x10033f9d5*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_760,
               4,
               a1 + 152);
    if ( result ) /*0x10033f9dd*/
      return result; /*0x10033f9dd*/
    if ( (_BYTE)v9 ) /*0x10033f9e7*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f9e7*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033fa01*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_810,
               11,
               a1 + 72);
    if ( result ) /*0x10033fa09*/
      return result; /*0x10033fa09*/
    if ( (_BYTE)v9 ) /*0x10033fa13*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fa13*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033fa2d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_811,
               7,
               a1 + 96);
    if ( result ) /*0x10033fa35*/
      return result; /*0x10033fa35*/
    if ( (_BYTE)v9 ) /*0x10033fa3f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fa3f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033fa59*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_812,
               5,
               a1 + 120);
    if ( result ) /*0x10033fa61*/
      return result; /*0x10033fa61*/
    if ( (_BYTE)v9 ) /*0x10033fa6b*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f971*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033fa8b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_27,
               9,
               a1 + 144);
    if ( !result ) /*0x10033fa93*/
    {
      result = 0; /*0x10033fa99*/
      if ( (v9 & 1) == 0 ) /*0x10033fa9f*/
      {
        if ( HIBYTE(v9) ) /*0x10033faa9*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033fac2*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033fac7*/
        }
      }
    }
  }
  return result; /*0x10033f956*/
}