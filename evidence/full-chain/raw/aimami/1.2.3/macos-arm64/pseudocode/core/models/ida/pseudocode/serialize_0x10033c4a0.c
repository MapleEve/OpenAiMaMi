// __ZN13codexmate_lib4core6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceHistoryEntry$GT$9serialize @ 0x10033c4a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceHistoryEntry$GT$::serialize::hf41d1aec6ab20aef(
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

  v6 = *a2; /*0x10033c4b0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033c4b3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033c4ba*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033c8bb*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033c8c3*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033c4c4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033c4cb*/
  v9 = 256; /*0x10033c4cf*/
  v10 = a2; /*0x10033c4d5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c4ed*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1 + 16);
  if ( !result ) /*0x10033c4f5*/
  {
    if ( (_BYTE)v9 ) /*0x10033c506*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c506*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c52b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_695,
               10,
               a1 + 40);
    if ( result ) /*0x10033c533*/
      return result; /*0x10033c533*/
    if ( (_BYTE)v9 ) /*0x10033c539*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c539*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c54f*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_696,
               13,
               a1 + 64);
    if ( result ) /*0x10033c557*/
      return result; /*0x10033c557*/
    if ( (_BYTE)v9 ) /*0x10033c55d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c55d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h680e87d10ce3b7be( /*0x10033c576*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_697,
               12,
               a1 + 432);
    if ( result ) /*0x10033c57e*/
      return result; /*0x10033c57e*/
    if ( (_BYTE)v9 ) /*0x10033c588*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c588*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c5a2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_698,
               13,
               a1 + 88);
    if ( result ) /*0x10033c5aa*/
      return result; /*0x10033c5aa*/
    if ( (_BYTE)v9 ) /*0x10033c5b4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c5b4*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c5ce*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_699,
               7,
               a1 + 112);
    if ( result ) /*0x10033c5d6*/
      return result; /*0x10033c5d6*/
    if ( (_BYTE)v9 ) /*0x10033c5e0*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c5e0*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c5fd*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_700,
               12,
               a1 + 136);
    if ( result ) /*0x10033c605*/
      return result; /*0x10033c605*/
    if ( (_BYTE)v9 ) /*0x10033c60f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c60f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c62c*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_701,
               12,
               a1 + 160);
    if ( result ) /*0x10033c634*/
      return result; /*0x10033c634*/
    if ( (_BYTE)v9 ) /*0x10033c63e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c63e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c65b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_702,
               13,
               a1 + 184);
    if ( result ) /*0x10033c663*/
      return result; /*0x10033c663*/
    if ( (_BYTE)v9 ) /*0x10033c66d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c66d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c68a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_703,
               14,
               a1 + 208);
    if ( result ) /*0x10033c692*/
      return result; /*0x10033c692*/
    if ( (_BYTE)v9 ) /*0x10033c69c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c69c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c6b9*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_704,
               13,
               a1 + 232);
    if ( result ) /*0x10033c6c1*/
      return result; /*0x10033c6c1*/
    if ( (_BYTE)v9 ) /*0x10033c6cb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c6cb*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c6e8*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_448,
               6,
               a1 + 256);
    if ( result ) /*0x10033c6f0*/
      return result; /*0x10033c6f0*/
    if ( (_BYTE)v9 ) /*0x10033c6fa*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c6fa*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033c717*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_705,
               15,
               a1 + 376);
    if ( result ) /*0x10033c71f*/
      return result; /*0x10033c71f*/
    if ( (_BYTE)v9 ) /*0x10033c729*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c729*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c746*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_706,
               11,
               a1 + 280);
    if ( result ) /*0x10033c74e*/
      return result; /*0x10033c74e*/
    if ( (_BYTE)v9 ) /*0x10033c758*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c758*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c775*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_707,
               8,
               a1 + 304);
    if ( result ) /*0x10033c77d*/
      return result; /*0x10033c77d*/
    if ( (_BYTE)v9 ) /*0x10033c787*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c787*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c7a4*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_708,
               11,
               a1 + 328);
    if ( result ) /*0x10033c7ac*/
      return result; /*0x10033c7ac*/
    if ( (_BYTE)v9 ) /*0x10033c7b6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c7b6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033c7d3*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_709,
               10,
               a1 + 352);
    if ( result ) /*0x10033c7db*/
      return result; /*0x10033c7db*/
    if ( (_BYTE)v9 ) /*0x10033c7e5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c7e5*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc15dbe813cceb201( /*0x10033c7fe*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_710,
               13,
               a1);
    if ( result ) /*0x10033c806*/
      return result; /*0x10033c806*/
    if ( (_BYTE)v9 ) /*0x10033c810*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c810*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033c82d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_711,
               12,
               a1 + 400);
    if ( result ) /*0x10033c835*/
      return result; /*0x10033c835*/
    if ( (_BYTE)v9 ) /*0x10033c83f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c512*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033c85f*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_422,
               9,
               a1 + 424);
    if ( !result ) /*0x10033c867*/
    {
      result = 0; /*0x10033c86d*/
      if ( (v9 & 1) == 0 ) /*0x10033c873*/
      {
        if ( HIBYTE(v9) ) /*0x10033c87d*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033c896*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033c89b*/
        }
      }
    }
  }
  return result; /*0x10033c4f7*/
}