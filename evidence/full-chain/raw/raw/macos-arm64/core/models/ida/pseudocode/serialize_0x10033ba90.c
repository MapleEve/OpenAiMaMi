// __ZN13codexmate_lib4core6models1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillListPayload$GT$9serialize @ 0x10033ba90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillListPayload$GT$::serialize::he426875fef45f6e6(
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

  v6 = *a2; /*0x10033baa0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033baa3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033baaa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033bbc1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033bbc9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033bab4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033babb*/
  v9 = 256; /*0x10033babf*/
  v10 = a2; /*0x10033bac5*/
  result = serde_core::ser::SerializeMap::serialize_entry::hce598d56f2ca7dd3( /*0x10033badc*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_28,
             5,
             a1);
  if ( !result ) /*0x10033bae4*/
  {
    if ( (_BYTE)v9 ) /*0x10033baf5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033baf5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033bb1a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_678,
               5,
               a1 + 56);
    if ( result ) /*0x10033bb22*/
      return result; /*0x10033bb22*/
    if ( (_BYTE)v9 ) /*0x10033bb28*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033bb28*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033bb3e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_679,
               8,
               a1 + 24);
    if ( result ) /*0x10033bb46*/
      return result; /*0x10033bb46*/
    if ( (_BYTE)v9 ) /*0x10033bb4c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033bb01*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033bb65*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_651,
               10,
               a1 + 48);
    if ( !result ) /*0x10033bb6d*/
    {
      result = 0; /*0x10033bb73*/
      if ( (v9 & 1) == 0 ) /*0x10033bb79*/
      {
        if ( HIBYTE(v9) ) /*0x10033bb83*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033bb9c*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033bba1*/
        }
      }
    }
  }
  return result; /*0x10033bae6*/
}