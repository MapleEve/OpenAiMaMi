// __ZN13codexmate_lib4core5relay16codex_diagnostic1_119_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_diagnostic..DiagnosticReport$GT$9serialize @ 0x1004e94a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_diagnostic..DiagnosticReport$GT$::serialize::ha3bdd91d387be63b(
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

  v6 = *a2; /*0x1004e94b0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1004e94b3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1004e94ba*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004e95a1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1004e95a9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1004e94c4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1004e94cb*/
  v9 = 256; /*0x1004e94cf*/
  v10 = a2; /*0x1004e94d5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h021dc96e08a63766( /*0x1004e94ec*/
             &v9,
             &anon_92869709a5e99ce1936aa4e326b6c562_406,
             5,
             a1);
  if ( !result ) /*0x1004e94f4*/
  {
    if ( (_BYTE)v9 ) /*0x1004e9505*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004e9505*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v9, "hasIssues, ", 9, a1 + 24); /*0x1004e952a*/
    if ( result ) /*0x1004e9532*/
      return result; /*0x1004e9532*/
    if ( (_BYTE)v9 ) /*0x1004e9538*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004e9511*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v9, "transitionInFlight", 18, a1 + 25); /*0x1004e9551*/
    if ( !result ) /*0x1004e9559*/
    {
      result = 0; /*0x1004e955b*/
      if ( (v9 & 1) == 0 ) /*0x1004e9561*/
      {
        if ( HIBYTE(v9) ) /*0x1004e9567*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(*v10, "}false", 1); /*0x1004e957c*/
          return 0; /*0x1004e9581*/
        }
      }
    }
  }
  return result; /*0x1004e94f6*/
}