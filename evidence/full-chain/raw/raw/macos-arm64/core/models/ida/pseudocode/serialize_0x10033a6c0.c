// __ZN13codexmate_lib4core6models1_101_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ChangeDaySeries$GT$9serialize @ 0x10033a6c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ChangeDaySeries$GT$::serialize::h0e0ef27640362a1a(
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

  v6 = *a2; /*0x10033a6d0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033a6d3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033a6da*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033a7f1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033a7f9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033a6e4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033a6eb*/
  v9 = 256; /*0x10033a6ef*/
  v10 = a2; /*0x10033a6f5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033a70c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_620,
             4,
             a1);
  if ( !result ) /*0x10033a714*/
  {
    if ( (_BYTE)v9 ) /*0x10033a725*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a725*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033a74a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_627,
               8,
               a1 + 24);
    if ( result ) /*0x10033a752*/
      return result; /*0x10033a752*/
    if ( (_BYTE)v9 ) /*0x10033a758*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a758*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033a76e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_628,
               8,
               a1 + 28);
    if ( result ) /*0x10033a776*/
      return result; /*0x10033a776*/
    if ( (_BYTE)v9 ) /*0x10033a77c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a731*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033a795*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_629,
               7,
               a1 + 32);
    if ( !result ) /*0x10033a79d*/
    {
      result = 0; /*0x10033a7a3*/
      if ( (v9 & 1) == 0 ) /*0x10033a7a9*/
      {
        if ( HIBYTE(v9) ) /*0x10033a7b3*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033a7cc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033a7d1*/
        }
      }
    }
  }
  return result; /*0x10033a716*/
}