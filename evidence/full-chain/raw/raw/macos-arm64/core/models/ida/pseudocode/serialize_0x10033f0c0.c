// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..RefreshChannelReport$GT$9serialize @ 0x10033f0c0
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..RefreshChannelReport$GT$::serialize::habef7ed8cda915d9(
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

  v6 = *a2; /*0x10033f0d0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033f0d3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033f0da*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033f1f1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033f1f9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033f0e4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033f0eb*/
  v9 = 256; /*0x10033f0ef*/
  v10 = a2; /*0x10033f0f5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033f10c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_786,
             9,
             a1);
  if ( !result ) /*0x10033f114*/
  {
    if ( (_BYTE)v9 ) /*0x10033f125*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f125*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274(&v9, "succeeded", 9, a1 + 4); /*0x10033f14a*/
    if ( result ) /*0x10033f152*/
      return result; /*0x10033f152*/
    if ( (_BYTE)v9 ) /*0x10033f158*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f158*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274(&v9, "failed", 6, a1 + 8); /*0x10033f16e*/
    if ( result ) /*0x10033f176*/
      return result; /*0x10033f176*/
    if ( (_BYTE)v9 ) /*0x10033f17c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f131*/
    result = serde_core::ser::SerializeMap::serialize_entry::hba56d962058a556d( /*0x10033f195*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_448,
               6,
               a1 + 12);
    if ( !result ) /*0x10033f19d*/
    {
      result = 0; /*0x10033f1a3*/
      if ( (v9 & 1) == 0 ) /*0x10033f1a9*/
      {
        if ( HIBYTE(v9) ) /*0x10033f1b3*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033f1cc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033f1d1*/
        }
      }
    }
  }
  return result; /*0x10033f116*/
}