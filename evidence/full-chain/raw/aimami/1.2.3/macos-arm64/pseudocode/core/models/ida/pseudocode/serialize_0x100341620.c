// __ZN13codexmate_lib4core6models1_109_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AutoSwitchStatusPayload$GT$9serialize @ 0x100341620 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AutoSwitchStatusPayload$GT$::serialize::h9549bc20085d6727(
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

  v6 = *a2; /*0x100341630*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100341633*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034163a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100341776*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10034177e*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100341644*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034164b*/
  v9 = 256; /*0x10034164f*/
  v10 = a2; /*0x100341655*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10034166d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_669,
             7,
             a1 + 32);
  if ( !result ) /*0x100341675*/
  {
    if ( (_BYTE)v9 ) /*0x100341686*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341686*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x1003416ab*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_877,
               18,
               a1 + 24);
    if ( result ) /*0x1003416b3*/
      return result; /*0x1003416b3*/
    if ( (_BYTE)v9 ) /*0x1003416b9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003416b9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x1003416cf*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_878,
               22,
               a1 + 28);
    if ( result ) /*0x1003416d7*/
      return result; /*0x1003416d7*/
    if ( (_BYTE)v9 ) /*0x1003416dd*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003416dd*/
    result = serde_core::ser::SerializeMap::serialize_entry::h62e499188d24bfb1( /*0x1003416f3*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_658,
               12,
               a1 + 33);
    if ( result ) /*0x1003416fb*/
      return result; /*0x1003416fb*/
    if ( (_BYTE)v9 ) /*0x100341705*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341692*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034171a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_879,
               12,
               a1);
    if ( !result ) /*0x100341722*/
    {
      result = 0; /*0x100341728*/
      if ( (v9 & 1) == 0 ) /*0x10034172e*/
      {
        if ( HIBYTE(v9) ) /*0x100341738*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100341751*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100341756*/
        }
      }
    }
  }
  return result; /*0x100341677*/
}