// __ZN13codexmate_lib4core5relay6models1_109_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayProxyStatus$GT$9serialize @ 0x10032fbe0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayProxyStatus$GT$::serialize::haaf399e83b54b9b8(
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

  v6 = *a2; /*0x10032fbf0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10032fbf3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10032fbfa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10032fd39*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10032fd41*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10032fc04*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10032fc0b*/
  v9 = 256; /*0x10032fc0f*/
  v10 = a2; /*0x10032fc15*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10032fc2d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_438,
             7,
             a1 + 74);
  if ( !result ) /*0x10032fc35*/
  {
    if ( (_BYTE)v9 ) /*0x10032fc46*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032fc46*/
    result = serde_core::ser::SerializeMap::serialize_entry::h1e11462d6b7bfbd4( /*0x10032fc6b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_284,
               4,
               a1 + 72);
    if ( result ) /*0x10032fc73*/
      return result; /*0x10032fc73*/
    if ( (_BYTE)v9 ) /*0x10032fc79*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032fc79*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10032fc8e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_412,
               7,
               a1);
    if ( result ) /*0x10032fc96*/
      return result; /*0x10032fc96*/
    if ( (_BYTE)v9 ) /*0x10032fc9c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032fc9c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10032fcb2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_439,
               12,
               a1 + 24);
    if ( result ) /*0x10032fcba*/
      return result; /*0x10032fcba*/
    if ( (_BYTE)v9 ) /*0x10032fcc4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032fc52*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10032fcdd*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_423,
               9,
               a1 + 48);
    if ( !result ) /*0x10032fce5*/
    {
      result = 0; /*0x10032fceb*/
      if ( (v9 & 1) == 0 ) /*0x10032fcf1*/
      {
        if ( HIBYTE(v9) ) /*0x10032fcfb*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10032fd14*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10032fd19*/
        }
      }
    }
  }
  return result; /*0x10032fc37*/
}