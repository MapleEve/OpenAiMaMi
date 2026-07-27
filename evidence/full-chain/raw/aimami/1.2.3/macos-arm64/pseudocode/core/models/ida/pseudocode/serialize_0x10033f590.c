// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ToolAnalyticsPayload$GT$9serialize @ 0x10033f590 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ToolAnalyticsPayload$GT$::serialize::h4954e700e15052eb(
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

  v6 = *a2; /*0x10033f5a0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033f5a3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033f5aa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033f6d4*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033f6dc*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033f5b4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033f5bb*/
  v9 = 256; /*0x10033f5bf*/
  v10 = a2; /*0x10033f5c5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033f5dd*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_794,
             10,
             a1 + 24);
  if ( !result ) /*0x10033f5e5*/
  {
    if ( (_BYTE)v9 ) /*0x10033f5f6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f5f6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033f61b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_795,
               13,
               a1 + 28);
    if ( result ) /*0x10033f623*/
      return result; /*0x10033f623*/
    if ( (_BYTE)v9 ) /*0x10033f629*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f629*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033f63f*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_796,
               11,
               a1 + 32);
    if ( result ) /*0x10033f647*/
      return result; /*0x10033f647*/
    if ( (_BYTE)v9 ) /*0x10033f64d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f602*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033f663*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_797,
               9,
               a1 + 36);
    if ( !result ) /*0x10033f66b*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6d21e31ccbe8956c( /*0x10033f678*/
                 &v9,
                 a1);
      if ( !result ) /*0x10033f680*/
      {
        result = 0; /*0x10033f686*/
        if ( (v9 & 1) == 0 ) /*0x10033f68c*/
        {
          if ( HIBYTE(v9) ) /*0x10033f696*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033f6af*/
              *v10,
              &anon_b0ee9adff4519c22b647af231a5a39fa_15,
              1);
            return 0; /*0x10033f6b4*/
          }
        }
      }
    }
  }
  return result; /*0x10033f5e7*/
}