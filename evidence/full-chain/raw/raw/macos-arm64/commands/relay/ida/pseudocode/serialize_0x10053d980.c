// __ZN13codexmate_lib8commands5relay1_110_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..relay..CodexRouterDiagnostic$GT$9serialize @ 0x10053d980 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::relay::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..relay..CodexRouterDiagnostic$GT$::serialize::h5a185e3a6f68395c(
        __int64 a1,
        _QWORD *a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int16 v10; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+10h] [rbp-20h]

  v7 = *a2; /*0x10053d990*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10053d993*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10053d99a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10053dc6b*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x10053dc73*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10053d9a4*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10053d9ab*/
  v10 = 256; /*0x10053d9af*/
  v11 = a2; /*0x10053d9b5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v10, &unk_1015FF233, 14, a1 + 314); /*0x10053d9d0*/
  if ( !result ) /*0x10053d9d8*/
  {
    if ( (_BYTE)v10 ) /*0x10053d9e9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053d9e9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v10, "proxy_running", 13, a1 + 315); /*0x10053da11*/
    if ( result ) /*0x10053da19*/
      return result; /*0x10053da19*/
    if ( (_BYTE)v10 ) /*0x10053da1f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053da1f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h1e11462d6b7bfbd4(&v10, &unk_1015FF241, 10, a1 + 312); /*0x10053da38*/
    if ( result ) /*0x10053da40*/
      return result; /*0x10053da40*/
    if ( (_BYTE)v10 ) /*0x10053da46*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053da46*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10053da5c*/
               &v10,
               "proxy_last_errorlast_codex_routeregistry-backupsquota-store.json",
               16,
               a1 + 48);
    if ( result ) /*0x10053da64*/
      return result; /*0x10053da64*/
    if ( (_BYTE)v10 ) /*0x10053da6e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053da6e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39(&v10, &unk_1015FF24B, 20, a1); /*0x10053da87*/
    if ( result ) /*0x10053da8f*/
      return result; /*0x10053da8f*/
    if ( (_BYTE)v10 ) /*0x10053da99*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053da99*/
    result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6(&v10, &unk_1015FF25F, 20, a1 + 304); /*0x10053dab6*/
    if ( result ) /*0x10053dabe*/
      return result; /*0x10053dabe*/
    if ( (_BYTE)v10 ) /*0x10053dac8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053dac8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3(&v10, &unk_1015FF273, 12, a1 + 72); /*0x10053dae2*/
    if ( result ) /*0x10053daea*/
      return result; /*0x10053daea*/
    if ( (_BYTE)v10 ) /*0x10053daf4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053daf4*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v10, &unk_1015FF27F, 14, a1 + 316); /*0x10053db11*/
    if ( result ) /*0x10053db19*/
      return result; /*0x10053db19*/
    if ( (_BYTE)v10 ) /*0x10053db23*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053db23*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v10, &unk_1015FF28D, 22, a1 + 317); /*0x10053db40*/
    if ( result ) /*0x10053db48*/
      return result; /*0x10053db48*/
    if ( (_BYTE)v10 ) /*0x10053db52*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053db52*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v10, &unk_1015FF2A3, 23, a1 + 318); /*0x10053db6f*/
    if ( result ) /*0x10053db77*/
      return result; /*0x10053db77*/
    if ( (_BYTE)v10 ) /*0x10053db81*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053db81*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3(&v10, &unk_1015FF2BA, 22, a1 + 96); /*0x10053db9b*/
    if ( result ) /*0x10053dba3*/
      return result; /*0x10053dba3*/
    if ( (_BYTE)v10 ) /*0x10053dbad*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053dbad*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3(&v10, &unk_1015FF2D0, 19, a1 + 120); /*0x10053dbc7*/
    if ( result ) /*0x10053dbcf*/
      return result; /*0x10053dbcf*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::he62b5f0ca387754d( /*0x10053dbe0*/
               &v10,
               a1 + 144);
    if ( result ) /*0x10053dbe8*/
      return result; /*0x10053dbe8*/
    if ( (_BYTE)v10 ) /*0x10053dbf2*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053d9f5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10053dc0f*/
               &v10,
               &anon_92869709a5e99ce1936aa4e326b6c562_197,
               7,
               a1 + 24);
    if ( !result ) /*0x10053dc17*/
    {
      result = 0; /*0x10053dc1d*/
      if ( (v10 & 1) == 0 ) /*0x10053dc23*/
      {
        if ( HIBYTE(v10) ) /*0x10053dc2d*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(*v11, "}false", 1); /*0x10053dc46*/
          return 0; /*0x10053dc4b*/
        }
      }
    }
  }
  return result; /*0x10053d9da*/
}