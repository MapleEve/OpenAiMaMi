// __ZN13codexmate_lib4core5relay6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayState$GT$9serialize @ 0x10032d950 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayState$GT$::serialize::h983ce2199da46808(
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

  v6 = *a2; /*0x10032d960*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10032d963*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10032d96a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10032dade*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10032dae6*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10032d974*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10032d97b*/
  v9 = 256; /*0x10032d97f*/
  v10 = a2; /*0x10032d985*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10032d9a0*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_26,
             13,
             a1 + 288);
  if ( !result ) /*0x10032d9a8*/
  {
    if ( (_BYTE)v9 ) /*0x10032d9b9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032d9b9*/
    result = serde_core::ser::SerializeMap::serialize_entry::hf91e17e954f892a8( /*0x10032d9dd*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_399,
               9,
               a1);
    if ( result ) /*0x10032d9e5*/
      return result; /*0x10032d9e5*/
    if ( (_BYTE)v9 ) /*0x10032d9eb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032d9eb*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9e7c618de2b36ef5( /*0x10032da01*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_400,
               11,
               a1 + 24);
    if ( result ) /*0x10032da09*/
      return result; /*0x10032da09*/
    if ( (_BYTE)v9 ) /*0x10032da0f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032da0f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h657df04c91435ce8( /*0x10032da25*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_283,
               5,
               a1 + 48);
    if ( result ) /*0x10032da2d*/
      return result; /*0x10032da2d*/
    if ( (_BYTE)v9 ) /*0x10032da37*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032da37*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10032da50*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_401,
               18,
               a1 + 292);
    if ( result ) /*0x10032da58*/
      return result; /*0x10032da58*/
    if ( (_BYTE)v9 ) /*0x10032da62*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032d9c5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10032da82*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_402,
               24,
               a1 + 293);
    if ( !result ) /*0x10032da8a*/
    {
      result = 0; /*0x10032da90*/
      if ( (v9 & 1) == 0 ) /*0x10032da96*/
      {
        if ( HIBYTE(v9) ) /*0x10032daa0*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10032dab9*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10032dabe*/
        }
      }
    }
  }
  return result; /*0x10032d9aa*/
}