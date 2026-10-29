// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..threads..ThreadDetail$GT$::serialize::h1cc940ceaec9e1b2; addr: 0x1008ab720; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall codexmate_lib::core::analytics::threads::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..threads..ThreadDetail$GT$::serialize::h1cc940ceaec9e1b2(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  void *v4; // rsi
  __int64 result; // rax
  __int16 v6; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+10h] [rbp-20h]

  v2 = *a2; /*0x1008ab730*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1008ab733*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1008ab73a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1008ab827*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1008ab82f*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1008ab744*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1008ab74b*/
  v6 = 256; /*0x1008ab74f*/
  v7 = a2; /*0x1008ab755*/
  v4 = &anon_0868f19ff3e9f3569e732f60bdb020cc_1146; /*0x1008ab759*/
  result = serde_core::ser::SerializeMap::serialize_entry::hba22378e113453fe( /*0x1008ab76c*/
             &v6,
             &anon_0868f19ff3e9f3569e732f60bdb020cc_1146,
             5,
             a1);
  if ( !result ) /*0x1008ab774*/
  {
    if ( (_BYTE)v6 ) /*0x1008ab785*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab785*/
    v4 = &anon_0868f19ff3e9f3569e732f60bdb020cc_1147; /*0x1008ab79d*/
    result = serde_core::ser::SerializeMap::serialize_entry::hd4a9b83a799cf6b2( /*0x1008ab7ad*/
               &v6,
               &anon_0868f19ff3e9f3569e732f60bdb020cc_1147,
               8,
               a1 + 208);
    if ( result ) /*0x1008ab7b5*/
      return result; /*0x1008ab7b5*/
    if ( (_BYTE)v6 ) /*0x1008ab7bb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab791*/
    result = serde_core::ser::SerializeMap::serialize_entry::he7d5cac70c005856( /*0x1008ab7d7*/
               &v6,
               &anon_0868f19ff3e9f3569e732f60bdb020cc_959,
               5,
               a1 + 232);
    if ( !result ) /*0x1008ab7df*/
    {
      result = 0; /*0x1008ab7e1*/
      if ( (v6 & 1) == 0 ) /*0x1008ab7e7*/
      {
        if ( HIBYTE(v6) ) /*0x1008ab7ed*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hcf6b9c01431e505d(*v7, "}false", 1); /*0x1008ab802*/
          return 0; /*0x1008ab807*/
        }
      }
    }
  }
  return result; /*0x1008ab776*/
}