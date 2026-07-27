// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceGeneratePayload$GT$9serialize @ 0x10033f6f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceGeneratePayload$GT$::serialize::h7be60a993a12aee9(
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

  v6 = *a2; /*0x10033f700*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033f703*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033f70a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033f859*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033f861*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033f714*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033f71b*/
  v9 = 256; /*0x10033f71f*/
  v10 = a2; /*0x10033f725*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033f740*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_799,
             6,
             a1 + 440);
  if ( !result ) /*0x10033f748*/
  {
    if ( (_BYTE)v9 ) /*0x10033f759*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f759*/
    result = serde_core::ser::SerializeMap::serialize_entry::ha3c43a9b07b2f225( /*0x10033f77d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_800,
               12,
               a1);
    if ( result ) /*0x10033f785*/
      return result; /*0x10033f785*/
    if ( (_BYTE)v9 ) /*0x10033f78b*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f78b*/
    result = serde_core::ser::SerializeMap::serialize_entry::h0d071136e662123d( /*0x10033f7a4*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_801,
               9,
               a1 + 464);
    if ( result ) /*0x10033f7ac*/
      return result; /*0x10033f7ac*/
    if ( (_BYTE)v9 ) /*0x10033f7b2*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f7b2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, "processingStatus", 16, a1 + 592); /*0x10033f7cb*/
    if ( result ) /*0x10033f7d3*/
      return result; /*0x10033f7d3*/
    if ( (_BYTE)v9 ) /*0x10033f7dd*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f765*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033f7fd*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_705,
               15,
               a1 + 616);
    if ( !result ) /*0x10033f805*/
    {
      result = 0; /*0x10033f80b*/
      if ( (v9 & 1) == 0 ) /*0x10033f811*/
      {
        if ( HIBYTE(v9) ) /*0x10033f81b*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033f834*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033f839*/
        }
      }
    }
  }
  return result; /*0x10033f74a*/
}