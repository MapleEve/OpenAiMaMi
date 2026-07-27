// __ZN13codexmate_lib4core6models1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnoseApiState$GT$9serialize @ 0x10033b500 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnoseApiState$GT$::serialize::h34708c440a0101e2(
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

  v6 = *a2; /*0x10033b510*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033b513*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033b51a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033b631*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033b639*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033b524*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033b52b*/
  v9 = 256; /*0x10033b52f*/
  v10 = a2; /*0x10033b535*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033b54d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_661,
             17,
             a1 + 48);
  if ( !result ) /*0x10033b555*/
  {
    if ( (_BYTE)v9 ) /*0x10033b566*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b566*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033b58b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_662,
               17,
               a1 + 52);
    if ( result ) /*0x10033b593*/
      return result; /*0x10033b593*/
    if ( (_BYTE)v9 ) /*0x10033b599*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b599*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033b5ae*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_663,
               16,
               a1);
    if ( result ) /*0x10033b5b6*/
      return result; /*0x10033b5b6*/
    if ( (_BYTE)v9 ) /*0x10033b5bc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b572*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033b5d5*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_664,
               23,
               a1 + 24);
    if ( !result ) /*0x10033b5dd*/
    {
      result = 0; /*0x10033b5e3*/
      if ( (v9 & 1) == 0 ) /*0x10033b5e9*/
      {
        if ( HIBYTE(v9) ) /*0x10033b5f3*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033b60c*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033b611*/
        }
      }
    }
  }
  return result; /*0x10033b557*/
}