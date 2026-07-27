// __ZN13codexmate_lib4core6models1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DaemonRunPayload$GT$9serialize @ 0x10033b330 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DaemonRunPayload$GT$::serialize::h26fa33aea5dfa140(
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

  v6 = *a2; /*0x10033b340*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033b343*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033b34a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033b4e1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033b4e9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033b354*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033b35b*/
  v9 = 256; /*0x10033b35f*/
  v10 = a2; /*0x10033b365*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033b37d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_655,
             10,
             a1 + 72);
  if ( !result ) /*0x10033b385*/
  {
    if ( (_BYTE)v9 ) /*0x10033b396*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b396*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10033b3bb*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_656,
               7,
               a1 + 80);
    if ( result ) /*0x10033b3c3*/
      return result; /*0x10033b3c3*/
    if ( (_BYTE)v9 ) /*0x10033b3c9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b3c9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10033b3df*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_657,
               17,
               a1 + 81);
    if ( result ) /*0x10033b3e7*/
      return result; /*0x10033b3e7*/
    if ( (_BYTE)v9 ) /*0x10033b3ed*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b3ed*/
    result = serde_core::ser::SerializeMap::serialize_entry::h62e499188d24bfb1( /*0x10033b403*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_658,
               12,
               a1 + 82);
    if ( result ) /*0x10033b40b*/
      return result; /*0x10033b40b*/
    if ( (_BYTE)v9 ) /*0x10033b415*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b415*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033b42a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_650,
               16,
               a1);
    if ( result ) /*0x10033b432*/
      return result; /*0x10033b432*/
    if ( (_BYTE)v9 ) /*0x10033b43c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b43c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033b456*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_659,
               18,
               a1 + 24);
    if ( result ) /*0x10033b45e*/
      return result; /*0x10033b45e*/
    if ( (_BYTE)v9 ) /*0x10033b468*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b3a2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033b485*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_660,
               23,
               a1 + 48);
    if ( !result ) /*0x10033b48d*/
    {
      result = 0; /*0x10033b493*/
      if ( (v9 & 1) == 0 ) /*0x10033b499*/
      {
        if ( HIBYTE(v9) ) /*0x10033b4a3*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033b4bc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033b4c1*/
        }
      }
    }
  }
  return result; /*0x10033b387*/
}