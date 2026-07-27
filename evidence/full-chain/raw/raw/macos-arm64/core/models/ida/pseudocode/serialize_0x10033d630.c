// __ZN13codexmate_lib4core6models1_104_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillBackupSummary$GT$9serialize @ 0x10033d630 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SkillBackupSummary$GT$::serialize::h6e872945d31108c2(
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

  v6 = *a2; /*0x10033d640*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033d643*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033d64a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033d7e4*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033d7ec*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033d654*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033d65b*/
  v9 = 256; /*0x10033d65f*/
  v10 = a2; /*0x10033d665*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033d67c*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1);
  if ( !result ) /*0x10033d684*/
  {
    if ( (_BYTE)v9 ) /*0x10033d695*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d695*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033d6ba*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_732,
               7,
               a1 + 24);
    if ( result ) /*0x10033d6c2*/
      return result; /*0x10033d6c2*/
    if ( (_BYTE)v9 ) /*0x10033d6c8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d6c8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033d6de*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_55,
               4,
               a1 + 48);
    if ( result ) /*0x10033d6e6*/
      return result; /*0x10033d6e6*/
    if ( (_BYTE)v9 ) /*0x10033d6ec*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d6ec*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033d702*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_733,
               5,
               a1 + 120);
    if ( result ) /*0x10033d70a*/
      return result; /*0x10033d70a*/
    if ( (_BYTE)v9 ) /*0x10033d714*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d714*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033d72a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_734,
               12,
               a1 + 72);
    if ( result ) /*0x10033d732*/
      return result; /*0x10033d732*/
    if ( (_BYTE)v9 ) /*0x10033d73c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d73c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033d756*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_735,
               10,
               a1 + 96);
    if ( result ) /*0x10033d75e*/
      return result; /*0x10033d75e*/
    if ( (_BYTE)v9 ) /*0x10033d768*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d6a1*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033d788*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_422,
               9,
               a1 + 144);
    if ( !result ) /*0x10033d790*/
    {
      result = 0; /*0x10033d796*/
      if ( (v9 & 1) == 0 ) /*0x10033d79c*/
      {
        if ( HIBYTE(v9) ) /*0x10033d7a6*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033d7bf*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033d7c4*/
        }
      }
    }
  }
  return result; /*0x10033d686*/
}