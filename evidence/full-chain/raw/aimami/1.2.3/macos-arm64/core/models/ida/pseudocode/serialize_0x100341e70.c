// __ZN13codexmate_lib4core6models1_110_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PendingAutoSwitchPayload$GT$9serialize @ 0x100341e70 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PendingAutoSwitchPayload$GT$::serialize::h70f13a3723ef5efc(
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

  v6 = *a2; /*0x100341e80*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100341e83*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100341e8a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100342008*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100342010*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100341e94*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100341e9b*/
  v9 = 256; /*0x100341e9f*/
  v10 = a2; /*0x100341ea5*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x100341ec0*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_889,
             11,
             a1 + 704);
  if ( !result ) /*0x100341ec8*/
  {
    if ( (_BYTE)v9 ) /*0x100341ed9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341ed9*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x100341f01*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_890,
               14,
               a1 + 712);
    if ( result ) /*0x100341f09*/
      return result; /*0x100341f09*/
    if ( (_BYTE)v9 ) /*0x100341f0f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341f0f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h69e7acef197ce807( /*0x100341f24*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_891,
               14,
               a1);
    if ( result ) /*0x100341f2c*/
      return result; /*0x100341f2c*/
    if ( (_BYTE)v9 ) /*0x100341f32*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341f32*/
    result = serde_core::ser::SerializeMap::serialize_entry::h69e7acef197ce807( /*0x100341f4b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_892,
               16,
               a1 + 352);
    if ( result ) /*0x100341f53*/
      return result; /*0x100341f53*/
    if ( (_BYTE)v9 ) /*0x100341f5d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341f5d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100341f7a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_877,
               18,
               a1 + 720);
    if ( result ) /*0x100341f82*/
      return result; /*0x100341f82*/
    if ( (_BYTE)v9 ) /*0x100341f8c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341ee5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100341fac*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_878,
               22,
               a1 + 724);
    if ( !result ) /*0x100341fb4*/
    {
      result = 0; /*0x100341fba*/
      if ( (v9 & 1) == 0 ) /*0x100341fc0*/
      {
        if ( HIBYTE(v9) ) /*0x100341fca*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100341fe3*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100341fe8*/
        }
      }
    }
  }
  return result; /*0x100341eca*/
}