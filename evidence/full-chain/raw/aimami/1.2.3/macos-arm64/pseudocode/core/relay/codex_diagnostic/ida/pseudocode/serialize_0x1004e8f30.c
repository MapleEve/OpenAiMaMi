// __ZN13codexmate_lib4core5relay16codex_diagnostic1_112_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$9serialize @ 0x1004e8f30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_diagnostic..FixResult$GT$::serialize::hcacb150234c006b3(
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

  v6 = *a2; /*0x1004e8f40*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1004e8f43*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1004e8f4a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004e9031*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1004e9039*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1004e8f54*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1004e8f5b*/
  v9 = 256; /*0x1004e8f5f*/
  v10 = a2; /*0x1004e8f65*/
  result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39( /*0x1004e8f7c*/
             &v9,
             &anon_92869709a5e99ce1936aa4e326b6c562_398,
             8,
             a1);
  if ( !result ) /*0x1004e8f84*/
  {
    if ( (_BYTE)v9 ) /*0x1004e8f95*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004e8f95*/
    result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39( /*0x1004e8fba*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_399,
               9,
               a1 + 24);
    if ( result ) /*0x1004e8fc2*/
      return result; /*0x1004e8fc2*/
    if ( (_BYTE)v9 ) /*0x1004e8fc8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004e8fa1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39( /*0x1004e8fe1*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_400,
               7,
               a1 + 48);
    if ( !result ) /*0x1004e8fe9*/
    {
      result = 0; /*0x1004e8feb*/
      if ( (v9 & 1) == 0 ) /*0x1004e8ff1*/
      {
        if ( HIBYTE(v9) ) /*0x1004e8ff7*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(*v10, "}false", 1); /*0x1004e900c*/
          return 0; /*0x1004e9011*/
        }
      }
    }
  }
  return result; /*0x1004e8f86*/
}