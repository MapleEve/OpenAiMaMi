// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..McpServerListPayload$GT$9serialize @ 0x10033ef70 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..McpServerListPayload$GT$::serialize::h44add227822a8383(
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

  v6 = *a2; /*0x10033ef80*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033ef83*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033ef8a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033f0a1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033f0a9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033ef94*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033ef9b*/
  v9 = 256; /*0x10033ef9f*/
  v10 = a2; /*0x10033efa5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h6dd8d4a1e0f16b0a( /*0x10033efbc*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_28,
             5,
             a1);
  if ( !result ) /*0x10033efc4*/
  {
    if ( (_BYTE)v9 ) /*0x10033efd5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033efd5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033effa*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_678,
               5,
               a1 + 56);
    if ( result ) /*0x10033f002*/
      return result; /*0x10033f002*/
    if ( (_BYTE)v9 ) /*0x10033f008*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f008*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033f01e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_670,
               10,
               a1 + 24);
    if ( result ) /*0x10033f026*/
      return result; /*0x10033f026*/
    if ( (_BYTE)v9 ) /*0x10033f02c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033efe1*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033f045*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_651,
               10,
               a1 + 48);
    if ( !result ) /*0x10033f04d*/
    {
      result = 0; /*0x10033f053*/
      if ( (v9 & 1) == 0 ) /*0x10033f059*/
      {
        if ( HIBYTE(v9) ) /*0x10033f063*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033f07c*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033f081*/
        }
      }
    }
  }
  return result; /*0x10033efc6*/
}