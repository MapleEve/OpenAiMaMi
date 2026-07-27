// __ZN13codexmate_lib4core6models1_105_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoicePromptTemplate$GT$9serialize @ 0x10033e080 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoicePromptTemplate$GT$::serialize::hc795eab9109c3c91(
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

  v6 = *(_QWORD **)a2; /*0x10033e090*/
  ++*(_QWORD *)(a2 + 24); /*0x10033e093*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10033e097*/
  v7 = v6[2]; /*0x10033e09b*/
  if ( *v6 == v7 ) /*0x10033e0a2*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10033e214*/
    v7 = v6[2]; /*0x10033e21c*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10033e0ac*/
  v6[2] = v7 + 1; /*0x10033e0b3*/
  v9 = 256; /*0x10033e0b7*/
  v10 = a2; /*0x10033e0bd*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033e0d4*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1);
  if ( !result ) /*0x10033e0dc*/
  {
    if ( (_BYTE)v9 ) /*0x10033e0ed*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e0ed*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033e112*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_733,
               5,
               a1 + 24);
    if ( result ) /*0x10033e11a*/
      return result; /*0x10033e11a*/
    if ( (_BYTE)v9 ) /*0x10033e120*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e120*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033e136*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_759,
               11,
               a1 + 48);
    if ( result ) /*0x10033e13e*/
      return result; /*0x10033e13e*/
    if ( (_BYTE)v9 ) /*0x10033e144*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e144*/
    result = serde_core::ser::SerializeMap::serialize_entry::h838d618defddccd1( /*0x10033e15a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_760,
               4,
               a1 + 105);
    if ( result ) /*0x10033e162*/
      return result; /*0x10033e162*/
    if ( (_BYTE)v9 ) /*0x10033e16c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e16c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033e182*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_761,
               7,
               a1 + 72);
    if ( result ) /*0x10033e18a*/
      return result; /*0x10033e18a*/
    if ( (_BYTE)v9 ) /*0x10033e194*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e194*/
    result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x10033e1ae*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_762,
               7,
               a1 + 104);
    if ( result ) /*0x10033e1b6*/
      return result; /*0x10033e1b6*/
    if ( (_BYTE)v9 ) /*0x10033e1c0*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033e0f9*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10033e1dd*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_27,
               9,
               a1 + 96);
    if ( !result ) /*0x10033e1e5*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v9); /*0x10033e1ef*/
      return 0; /*0x10033e1f4*/
    }
  }
  return result; /*0x10033e0de*/
}