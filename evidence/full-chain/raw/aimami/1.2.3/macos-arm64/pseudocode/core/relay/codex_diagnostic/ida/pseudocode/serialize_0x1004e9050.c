// __ZN13codexmate_lib4core5relay16codex_diagnostic1_117_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_diagnostic..DiagnosticItem$GT$9serialize @ 0x1004e9050 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_diagnostic..DiagnosticItem$GT$::serialize::heca89e9fb7ddb67d(
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

  v6 = *a2; /*0x1004e9060*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1004e9063*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1004e906a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004e91a9*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1004e91b1*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1004e9074*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1004e907b*/
  v9 = 256; /*0x1004e907f*/
  v10 = a2; /*0x1004e9085*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1004e909c*/
             &v9,
             &anon_92869709a5e99ce1936aa4e326b6c562_188,
             2,
             a1);
  if ( !result ) /*0x1004e90a4*/
  {
    if ( (_BYTE)v9 ) /*0x1004e90b5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004e90b5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, "status", 6, a1 + 24); /*0x1004e90da*/
    if ( result ) /*0x1004e90e2*/
      return result; /*0x1004e90e2*/
    if ( (_BYTE)v9 ) /*0x1004e90e8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004e90e8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1004e90fe*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_402,
               5,
               a1 + 48);
    if ( result ) /*0x1004e9106*/
      return result; /*0x1004e9106*/
    if ( (_BYTE)v9 ) /*0x1004e910c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004e910c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1004e9122*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_403,
               6,
               a1 + 72);
    if ( result ) /*0x1004e912a*/
      return result; /*0x1004e912a*/
    if ( (_BYTE)v9 ) /*0x1004e9134*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004e90c1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x1004e914d*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_404,
               7,
               a1 + 96);
    if ( !result ) /*0x1004e9155*/
    {
      result = 0; /*0x1004e915b*/
      if ( (v9 & 1) == 0 ) /*0x1004e9161*/
      {
        if ( HIBYTE(v9) ) /*0x1004e916b*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(*v10, "}false", 1); /*0x1004e9184*/
          return 0; /*0x1004e9189*/
        }
      }
    }
  }
  return result; /*0x1004e90a6*/
}