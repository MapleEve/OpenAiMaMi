// __ZN13codexmate_lib4core6models1_105_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillRestorePayload$GT$9serialize @ 0x10033df60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillRestorePayload$GT$::serialize::h673890e446ec3029(
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

  v6 = *a2; /*0x10033df70*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033df73*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033df7a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033e067*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033e06f*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033df84*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033df8b*/
  v9 = 256; /*0x10033df8f*/
  v10 = a2; /*0x10033df95*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8179faf22437e264( /*0x10033dfac*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_755,
             13,
             a1);
  if ( !result ) /*0x10033dfb4*/
  {
    if ( (_BYTE)v9 ) /*0x10033dfc5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033dfc5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5dc510300653645a( /*0x10033dfed*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_277,
               6,
               a1 + 184);
    if ( result ) /*0x10033dff5*/
      return result; /*0x10033dff5*/
    if ( (_BYTE)v9 ) /*0x10033dffb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033dfd1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h4767790154fdcdb7( /*0x10033e017*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_756,
               14,
               a1 + 336);
    if ( !result ) /*0x10033e01f*/
    {
      result = 0; /*0x10033e021*/
      if ( (v9 & 1) == 0 ) /*0x10033e027*/
      {
        if ( HIBYTE(v9) ) /*0x10033e02d*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033e042*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033e047*/
        }
      }
    }
  }
  return result; /*0x10033dfb6*/
}