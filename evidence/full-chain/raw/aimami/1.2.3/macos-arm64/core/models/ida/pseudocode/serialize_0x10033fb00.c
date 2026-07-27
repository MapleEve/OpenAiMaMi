// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyEntry$GT$9serialize @ 0x10033fb00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyEntry$GT$::serialize::hdad428181d248345(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  __int16 v9; // [rsp+8h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-20h]

  v6 = *(_QWORD **)a2; /*0x10033fb10*/
  ++*(_QWORD *)(a2 + 24); /*0x10033fb13*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10033fb17*/
  v7 = v6[2]; /*0x10033fb1b*/
  if ( *v6 == v7 ) /*0x10033fb22*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10033fcca*/
    v7 = v6[2]; /*0x10033fcd2*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10033fb2c*/
  v6[2] = v7 + 1; /*0x10033fb33*/
  v9 = 256; /*0x10033fb37*/
  v10 = a2; /*0x10033fb3d*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033fb54*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1);
  if ( !result ) /*0x10033fb5c*/
  {
    if ( (_BYTE)v9 ) /*0x10033fb6d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fb6d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(&v9, "source", 6, a1 + 24); /*0x10033fb92*/
    if ( result ) /*0x10033fb9a*/
      return result; /*0x10033fb9a*/
    if ( (_BYTE)v9 ) /*0x10033fba0*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fba0*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033fbb6*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_809,
               11,
               a1 + 48);
    if ( result ) /*0x10033fbbe*/
      return result; /*0x10033fbbe*/
    if ( (_BYTE)v9 ) /*0x10033fbc4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fbc4*/
    result = serde_core::ser::SerializeMap::serialize_entry::hb959c5a3e0f1f992( /*0x10033fbdd*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_760,
               4,
               a1 + 152);
    if ( result ) /*0x10033fbe5*/
      return result; /*0x10033fbe5*/
    if ( (_BYTE)v9 ) /*0x10033fbef*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fbef*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10033fc09*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_810,
               11,
               a1 + 72);
    if ( result ) /*0x10033fc11*/
      return result; /*0x10033fc11*/
    if ( (_BYTE)v9 ) /*0x10033fc1b*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fc1b*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10033fc35*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_811,
               7,
               a1 + 96);
    if ( result ) /*0x10033fc3d*/
      return result; /*0x10033fc3d*/
    if ( (_BYTE)v9 ) /*0x10033fc47*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fc47*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10033fc61*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_812,
               5,
               a1 + 120);
    if ( result ) /*0x10033fc69*/
      return result; /*0x10033fc69*/
    if ( (_BYTE)v9 ) /*0x10033fc73*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fb79*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10033fc93*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_27,
               9,
               a1 + 144);
    if ( !result ) /*0x10033fc9b*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v9); /*0x10033fca5*/
      return 0; /*0x10033fcaa*/
    }
  }
  return result; /*0x10033fb5e*/
}