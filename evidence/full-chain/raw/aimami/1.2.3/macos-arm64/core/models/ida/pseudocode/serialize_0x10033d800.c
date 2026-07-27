// __ZN13codexmate_lib4core6models1_104_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillImportPayload$GT$9serialize @ 0x10033d800 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillImportPayload$GT$::serialize::h95e2ee6b12f7b868(
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

  v6 = *a2; /*0x10033d810*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033d813*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033d81a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033d907*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033d90f*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033d824*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033d82b*/
  v9 = 256; /*0x10033d82f*/
  v10 = a2; /*0x10033d835*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8179faf22437e264( /*0x10033d84c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_736,
             5,
             a1);
  if ( !result ) /*0x10033d854*/
  {
    if ( (_BYTE)v9 ) /*0x10033d865*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d865*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10033d88d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_737,
               16,
               a1 + 336);
    if ( result ) /*0x10033d895*/
      return result; /*0x10033d895*/
    if ( (_BYTE)v9 ) /*0x10033d89b*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d871*/
    result = serde_core::ser::SerializeMap::serialize_entry::h4767790154fdcdb7( /*0x10033d8b7*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_277,
               6,
               a1 + 184);
    if ( !result ) /*0x10033d8bf*/
    {
      result = 0; /*0x10033d8c1*/
      if ( (v9 & 1) == 0 ) /*0x10033d8c7*/
      {
        if ( HIBYTE(v9) ) /*0x10033d8cd*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033d8e2*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033d8e7*/
        }
      }
    }
  }
  return result; /*0x10033d856*/
}