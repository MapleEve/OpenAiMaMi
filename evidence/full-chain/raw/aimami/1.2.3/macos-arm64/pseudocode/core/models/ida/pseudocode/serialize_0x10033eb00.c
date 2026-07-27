// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountImportPayload$GT$9serialize @ 0x10033eb00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountImportPayload$GT$::serialize::hf759fcf746a7e539(
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

  v6 = *a2; /*0x10033eb10*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033eb13*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033eb1a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033ec59*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033ec61*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033eb24*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033eb2b*/
  v9 = 256; /*0x10033eb2f*/
  v10 = a2; /*0x10033eb35*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033eb4d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_774,
             13,
             a1 + 72);
  if ( !result ) /*0x10033eb55*/
  {
    if ( (_BYTE)v9 ) /*0x10033eb66*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033eb66*/
    result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39(&v9, "importedAccountKeys", 19, a1); /*0x10033eb8a*/
    if ( result ) /*0x10033eb92*/
      return result; /*0x10033eb92*/
    if ( (_BYTE)v9 ) /*0x10033eb98*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033eb98*/
    result = serde_core::ser::SerializeMap::serialize_entry::h0a31cd795af05b34( /*0x10033ebae*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_773,
               7,
               a1 + 24);
    if ( result ) /*0x10033ebb6*/
      return result; /*0x10033ebb6*/
    if ( (_BYTE)v9 ) /*0x10033ebbc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ebbc*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033ebd2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_687,
               20,
               a1 + 76);
    if ( result ) /*0x10033ebda*/
      return result; /*0x10033ebda*/
    if ( (_BYTE)v9 ) /*0x10033ebe4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033eb72*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033ebfd*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_650,
               16,
               a1 + 48);
    if ( !result ) /*0x10033ec05*/
    {
      result = 0; /*0x10033ec0b*/
      if ( (v9 & 1) == 0 ) /*0x10033ec11*/
      {
        if ( HIBYTE(v9) ) /*0x10033ec1b*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033ec34*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033ec39*/
        }
      }
    }
  }
  return result; /*0x10033eb57*/
}