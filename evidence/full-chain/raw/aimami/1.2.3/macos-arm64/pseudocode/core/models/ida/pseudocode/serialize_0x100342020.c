// __ZN13codexmate_lib4core6models1_110_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PendingAutoSwitchPayload$GT$9serialize @ 0x100342020 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PendingAutoSwitchPayload$GT$::serialize::hf56a2ea380f84821(
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

  v6 = *(_QWORD **)a2; /*0x100342030*/
  ++*(_QWORD *)(a2 + 24); /*0x100342033*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100342037*/
  v7 = v6[2]; /*0x10034203b*/
  if ( *v6 == v7 ) /*0x100342042*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10034219b*/
    v7 = v6[2]; /*0x1003421a3*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10034204c*/
  v6[2] = v7 + 1; /*0x100342053*/
  v9 = 256; /*0x100342057*/
  v10 = a2; /*0x10034205d*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100342078*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_889,
             11,
             a1 + 704);
  if ( !result ) /*0x100342080*/
  {
    if ( (_BYTE)v9 ) /*0x100342091*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342091*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x1003420b9*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_890,
               14,
               a1 + 712);
    if ( result ) /*0x1003420c1*/
      return result; /*0x1003420c1*/
    if ( (_BYTE)v9 ) /*0x1003420c7*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003420c7*/
    result = serde_core::ser::SerializeMap::serialize_entry::ha147b5f805d0bd9d( /*0x1003420dc*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_891,
               14,
               a1);
    if ( result ) /*0x1003420e4*/
      return result; /*0x1003420e4*/
    if ( (_BYTE)v9 ) /*0x1003420ea*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003420ea*/
    result = serde_core::ser::SerializeMap::serialize_entry::ha147b5f805d0bd9d( /*0x100342103*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_892,
               16,
               a1 + 352);
    if ( result ) /*0x10034210b*/
      return result; /*0x10034210b*/
    if ( (_BYTE)v9 ) /*0x100342115*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342115*/
    result = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x100342132*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_877,
               18,
               a1 + 720);
    if ( result ) /*0x10034213a*/
      return result; /*0x10034213a*/
    if ( (_BYTE)v9 ) /*0x100342144*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034209d*/
    result = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x100342164*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_878,
               22,
               a1 + 724);
    if ( !result ) /*0x10034216c*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v9); /*0x100342176*/
      return 0; /*0x10034217b*/
    }
  }
  return result; /*0x100342082*/
}