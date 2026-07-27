// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountExportPayload$GT$9serialize @ 0x10033e890 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountExportPayload$GT$::serialize::hb92d76ca5521d7e2(
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

  v6 = *a2; /*0x10033e8a0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033e8a3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033e8aa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033e9c1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033e9c9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033e8b4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033e8bb*/
  v9 = 256; /*0x10033e8bf*/
  v10 = a2; /*0x10033e8c5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033e8dc*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_771,
             10,
             a1);
  if ( !result ) /*0x10033e8e4*/
  {
    if ( (_BYTE)v9 ) /*0x10033e8f5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e8f5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033e91a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_649,
               12,
               a1 + 56);
    if ( result ) /*0x10033e922*/
      return result; /*0x10033e922*/
    if ( (_BYTE)v9 ) /*0x10033e928*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e928*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033e93e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_772,
               10,
               a1 + 48);
    if ( result ) /*0x10033e946*/
      return result; /*0x10033e946*/
    if ( (_BYTE)v9 ) /*0x10033e94c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e901*/
    result = serde_core::ser::SerializeMap::serialize_entry::h84668011abceb8ad( /*0x10033e965*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_773,
               7,
               a1 + 24);
    if ( !result ) /*0x10033e96d*/
    {
      result = 0; /*0x10033e973*/
      if ( (v9 & 1) == 0 ) /*0x10033e979*/
      {
        if ( HIBYTE(v9) ) /*0x10033e983*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033e99c*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033e9a1*/
        }
      }
    }
  }
  return result; /*0x10033e8e6*/
}