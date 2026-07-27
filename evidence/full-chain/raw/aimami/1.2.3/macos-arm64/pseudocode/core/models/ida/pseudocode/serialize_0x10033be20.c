// __ZN13codexmate_lib4core6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..OauthLoginPayload$GT$9serialize @ 0x10033be20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..OauthLoginPayload$GT$::serialize::h8f66880e63eddce3(
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

  v6 = *a2; /*0x10033be30*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033be33*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033be3a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033bfd1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033bfd9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033be44*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033be4b*/
  v9 = 256; /*0x10033be4f*/
  v10 = a2; /*0x10033be55*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10033be6d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_686,
             8,
             a1 + 100);
  if ( !result ) /*0x10033be75*/
  {
    if ( (_BYTE)v9 ) /*0x10033be86*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033be86*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033beaa*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_30,
               10,
               a1);
    if ( result ) /*0x10033beb2*/
      return result; /*0x10033beb2*/
    if ( (_BYTE)v9 ) /*0x10033beb8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033beb8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033bece*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_602,
               5,
               a1 + 24);
    if ( result ) /*0x10033bed6*/
      return result; /*0x10033bed6*/
    if ( (_BYTE)v9 ) /*0x10033bedc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033bedc*/
    result = serde_core::ser::SerializeMap::serialize_entry::ha47fef76527fff6d( /*0x10033bef2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_87,
               4,
               a1 + 101);
    if ( result ) /*0x10033befa*/
      return result; /*0x10033befa*/
    if ( (_BYTE)v9 ) /*0x10033bf04*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033bf04*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033bf1a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_687,
               20,
               a1 + 96);
    if ( result ) /*0x10033bf22*/
      return result; /*0x10033bf22*/
    if ( (_BYTE)v9 ) /*0x10033bf2c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033bf2c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033bf46*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_650,
               16,
               a1 + 72);
    if ( result ) /*0x10033bf4e*/
      return result; /*0x10033bf4e*/
    if ( (_BYTE)v9 ) /*0x10033bf58*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033be92*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033bf75*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_688,
               7,
               a1 + 48);
    if ( !result ) /*0x10033bf7d*/
    {
      result = 0; /*0x10033bf83*/
      if ( (v9 & 1) == 0 ) /*0x10033bf89*/
      {
        if ( HIBYTE(v9) ) /*0x10033bf93*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033bfac*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033bfb1*/
        }
      }
    }
  }
  return result; /*0x10033be77*/
}