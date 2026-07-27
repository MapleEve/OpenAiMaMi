// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountRefreshReport$GT$9serialize @ 0x10033ec70
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountRefreshReport$GT$::serialize::hfcc2b4b1ade551e8(
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

  v6 = *a2; /*0x10033ec80*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033ec83*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033ec8a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033ee4d*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033ee55*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033ec94*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033ec9b*/
  v9 = 256; /*0x10033ec9f*/
  v10 = a2; /*0x10033eca5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033ecbc*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_777,
             8,
             a1);
  if ( !result ) /*0x10033ecc4*/
  {
    if ( (_BYTE)v9 ) /*0x10033ecd5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ecd5*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbdf2dae178ac43c6( /*0x10033ecfa*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_778,
               5,
               a1 + 112);
    if ( result ) /*0x10033ed02*/
      return result; /*0x10033ed02*/
    if ( (_BYTE)v9 ) /*0x10033ed08*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ed08*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033ed1e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_30,
               10,
               a1 + 24);
    if ( result ) /*0x10033ed26*/
      return result; /*0x10033ed26*/
    if ( (_BYTE)v9 ) /*0x10033ed2c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ed2c*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033ed42*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_779,
               9,
               a1 + 96);
    if ( result ) /*0x10033ed4a*/
      return result; /*0x10033ed4a*/
    if ( (_BYTE)v9 ) /*0x10033ed54*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ed54*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033ed6a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_780,
               10,
               a1 + 104);
    if ( result ) /*0x10033ed72*/
      return result; /*0x10033ed72*/
    if ( (_BYTE)v9 ) /*0x10033ed7c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ed7c*/
    result = serde_core::ser::SerializeMap::serialize_entry::he23459580e4179b8( /*0x10033ed96*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_280,
               5,
               a1 + 48);
    if ( result ) /*0x10033ed9e*/
      return result; /*0x10033ed9e*/
    if ( (_BYTE)v9 ) /*0x10033eda8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033eda8*/
    result = serde_core::ser::SerializeMap::serialize_entry::he23459580e4179b8( /*0x10033edc2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_781,
               8,
               a1 + 64);
    if ( result ) /*0x10033edca*/
      return result; /*0x10033edca*/
    if ( (_BYTE)v9 ) /*0x10033edd4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ece1*/
    result = serde_core::ser::SerializeMap::serialize_entry::he23459580e4179b8(&v9, "usage", 5, a1 + 80); /*0x10033edf1*/
    if ( !result ) /*0x10033edf9*/
    {
      result = 0; /*0x10033edff*/
      if ( (v9 & 1) == 0 ) /*0x10033ee05*/
      {
        if ( HIBYTE(v9) ) /*0x10033ee0f*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033ee28*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033ee2d*/
        }
      }
    }
  }
  return result; /*0x10033ecc6*/
}