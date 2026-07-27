// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionExportPayload$GT$9serialize @ 0x10033f440 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionExportPayload$GT$::serialize::h562639397c6deb48(
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

  v6 = *a2; /*0x10033f450*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033f453*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033f45a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033f571*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033f579*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033f464*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033f46b*/
  v9 = 256; /*0x10033f46f*/
  v10 = a2; /*0x10033f475*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033f48c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_792,
             9,
             a1);
  if ( !result ) /*0x10033f494*/
  {
    if ( (_BYTE)v9 ) /*0x10033f4a5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f4a5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033f4ca*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_771,
               10,
               a1 + 24);
    if ( result ) /*0x10033f4d2*/
      return result; /*0x10033f4d2*/
    if ( (_BYTE)v9 ) /*0x10033f4d8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f4d8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033f4ee*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_793,
               8,
               a1 + 48);
    if ( result ) /*0x10033f4f6*/
      return result; /*0x10033f4f6*/
    if ( (_BYTE)v9 ) /*0x10033f4fc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f4b1*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033f515*/
               &v9,
               "bytesfailed to build async fetch_models clientfailed to build async direct fetch_models clientfailed to b"
               "uild async health check clientfailed to build async direct health check clientdeepseek-chatdeepseek-reaso"
               "nerdeepseek-v4-flashdeepseek-v4-proglm-5.1glm-5.2mimo-v2.5-pro",
               5,
               a1 + 72);
    if ( !result ) /*0x10033f51d*/
    {
      result = 0; /*0x10033f523*/
      if ( (v9 & 1) == 0 ) /*0x10033f529*/
      {
        if ( HIBYTE(v9) ) /*0x10033f533*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033f54c*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033f551*/
        }
      }
    }
  }
  return result; /*0x10033f496*/
}