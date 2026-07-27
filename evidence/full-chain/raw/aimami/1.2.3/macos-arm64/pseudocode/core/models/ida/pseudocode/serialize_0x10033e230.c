// __ZN13codexmate_lib4core6models1_105_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoicePromptTemplate$GT$9serialize @ 0x10033e230 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoicePromptTemplate$GT$::serialize::hd6e992e78d967f79(
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

  v6 = *a2; /*0x10033e240*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033e243*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033e24a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033e3e1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033e3e9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033e254*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033e25b*/
  v9 = 256; /*0x10033e25f*/
  v10 = a2; /*0x10033e265*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033e27c*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1);
  if ( !result ) /*0x10033e284*/
  {
    if ( (_BYTE)v9 ) /*0x10033e295*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e295*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033e2ba*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_733,
               5,
               a1 + 24);
    if ( result ) /*0x10033e2c2*/
      return result; /*0x10033e2c2*/
    if ( (_BYTE)v9 ) /*0x10033e2c8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e2c8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033e2de*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_759,
               11,
               a1 + 48);
    if ( result ) /*0x10033e2e6*/
      return result; /*0x10033e2e6*/
    if ( (_BYTE)v9 ) /*0x10033e2ec*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e2ec*/
    result = serde_core::ser::SerializeMap::serialize_entry::h680e87d10ce3b7be( /*0x10033e302*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_760,
               4,
               a1 + 105);
    if ( result ) /*0x10033e30a*/
      return result; /*0x10033e30a*/
    if ( (_BYTE)v9 ) /*0x10033e314*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e314*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033e32a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_761,
               7,
               a1 + 72);
    if ( result ) /*0x10033e332*/
      return result; /*0x10033e332*/
    if ( (_BYTE)v9 ) /*0x10033e33c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e33c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10033e356*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_762,
               7,
               a1 + 104);
    if ( result ) /*0x10033e35e*/
      return result; /*0x10033e35e*/
    if ( (_BYTE)v9 ) /*0x10033e368*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e2a1*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033e385*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_27,
               9,
               a1 + 96);
    if ( !result ) /*0x10033e38d*/
    {
      result = 0; /*0x10033e393*/
      if ( (v9 & 1) == 0 ) /*0x10033e399*/
      {
        if ( HIBYTE(v9) ) /*0x10033e3a3*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033e3bc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033e3c1*/
        }
      }
    }
  }
  return result; /*0x10033e286*/
}