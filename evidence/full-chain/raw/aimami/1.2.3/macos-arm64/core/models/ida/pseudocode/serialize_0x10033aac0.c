// __ZN13codexmate_lib4core6models1_101_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..RateLimitWindow$GT$9serialize @ 0x10033aac0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..RateLimitWindow$GT$::serialize::hda3ee23705efb2d8(
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

  v6 = *a2; /*0x10033aad0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033aad3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033aada*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033abee*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033abf6*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033aae4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033aaeb*/
  v9 = 256; /*0x10033aaef*/
  v10 = a2; /*0x10033aaf5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h5dc1ceeecd15401c( /*0x10033ab0d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_641,
             11,
             a1 + 24);
  if ( !result ) /*0x10033ab15*/
  {
    if ( (_BYTE)v9 ) /*0x10033ab26*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ab26*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033ab4b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_642,
               16,
               a1 + 32);
    if ( result ) /*0x10033ab53*/
      return result; /*0x10033ab53*/
    if ( (_BYTE)v9 ) /*0x10033ab59*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ab59*/
    result = serde_core::ser::SerializeMap::serialize_entry::h1ad50ae5e6e43a37( /*0x10033ab6f*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_643,
               13,
               a1 + 16);
    if ( result ) /*0x10033ab77*/
      return result; /*0x10033ab77*/
    if ( (_BYTE)v9 ) /*0x10033ab7d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ab32*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x10033ab92*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_644,
               8,
               a1);
    if ( !result ) /*0x10033ab9a*/
    {
      result = 0; /*0x10033aba0*/
      if ( (v9 & 1) == 0 ) /*0x10033aba6*/
      {
        if ( HIBYTE(v9) ) /*0x10033abb0*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033abc9*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033abce*/
        }
      }
    }
  }
  return result; /*0x10033ab17*/
}