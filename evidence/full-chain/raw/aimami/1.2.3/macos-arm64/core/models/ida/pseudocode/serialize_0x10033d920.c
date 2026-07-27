// __ZN13codexmate_lib4core6models1_104_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillRemovePayload$GT$9serialize @ 0x10033d920 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillRemovePayload$GT$::serialize::h9d33deeee3e8231b(
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

  v6 = *a2; /*0x10033d930*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033d933*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033d93a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033da24*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033da2c*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033d944*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033d94b*/
  v9 = 256; /*0x10033d94f*/
  v10 = a2; /*0x10033d955*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033d96c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_738,
             14,
             a1);
  if ( !result ) /*0x10033d974*/
  {
    if ( (_BYTE)v9 ) /*0x10033d985*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d985*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5dc510300653645a( /*0x10033d9aa*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_277,
               6,
               a1 + 24);
    if ( result ) /*0x10033d9b2*/
      return result; /*0x10033d9b2*/
    if ( (_BYTE)v9 ) /*0x10033d9b8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d991*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033d9d4*/
               &v9,
               "remainingInstalledCount",
               23,
               a1 + 176);
    if ( !result ) /*0x10033d9dc*/
    {
      result = 0; /*0x10033d9de*/
      if ( (v9 & 1) == 0 ) /*0x10033d9e4*/
      {
        if ( HIBYTE(v9) ) /*0x10033d9ea*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033d9ff*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033da04*/
        }
      }
    }
  }
  return result; /*0x10033d976*/
}