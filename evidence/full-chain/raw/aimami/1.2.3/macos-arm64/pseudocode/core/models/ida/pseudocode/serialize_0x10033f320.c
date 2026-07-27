// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionDeletePayload$GT$9serialize @ 0x10033f320 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionDeletePayload$GT$::serialize::h799a0ba041869131(
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

  v6 = *a2; /*0x10033f330*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033f333*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033f33a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033f421*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033f429*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033f344*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033f34b*/
  v9 = 256; /*0x10033f34f*/
  v10 = a2; /*0x10033f355*/
  result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39( /*0x10033f36c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_790,
             10,
             a1);
  if ( !result ) /*0x10033f374*/
  {
    if ( (_BYTE)v9 ) /*0x10033f385*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f385*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033f3aa*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_791,
               12,
               a1 + 48);
    if ( result ) /*0x10033f3b2*/
      return result; /*0x10033f3b2*/
    if ( (_BYTE)v9 ) /*0x10033f3b8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f391*/
    result = serde_core::ser::SerializeMap::serialize_entry::h0447fc1033cb66d7(&v9, "failed", 6, a1 + 24); /*0x10033f3d1*/
    if ( !result ) /*0x10033f3d9*/
    {
      result = 0; /*0x10033f3db*/
      if ( (v9 & 1) == 0 ) /*0x10033f3e1*/
      {
        if ( HIBYTE(v9) ) /*0x10033f3e7*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033f3fc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033f401*/
        }
      }
    }
  }
  return result; /*0x10033f376*/
}