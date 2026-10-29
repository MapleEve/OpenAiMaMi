// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::reader::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..reader..Fingerprint$GT$::serialize::h16b0732a46835a0d; addr: 0x1009c0510; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall codexmate_lib::core::analytics::reader::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..reader..Fingerprint$GT$::serialize::h16b0732a46835a0d(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  void *v4; // rsi
  __int64 result; // rax
  __int16 v6; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+10h] [rbp-20h]

  v2 = *a2; /*0x1009c0520*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1009c0523*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1009c052a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1009c0695*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1009c069d*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1009c0534*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1009c053b*/
  v6 = 256; /*0x1009c053f*/
  v7 = a2; /*0x1009c0545*/
  v4 = &anon_f3f46b48c4f9c057aa63801556530189_614; /*0x1009c054d*/
  result = serde_core::ser::SerializeMap::serialize_entry::h7d62dfbef88a8991( /*0x1009c055d*/
             &v6,
             &anon_f3f46b48c4f9c057aa63801556530189_614,
             4,
             a1 + 88);
  if ( !result ) /*0x1009c0565*/
  {
    if ( (_BYTE)v6 ) /*0x1009c0576*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009c0576*/
    v4 = &anon_f3f46b48c4f9c057aa63801556530189_615; /*0x1009c0587*/
    result = serde_core::ser::SerializeMap::serialize_entry::h70d7ac7823c4c52f( /*0x1009c059a*/
               &v6,
               &anon_f3f46b48c4f9c057aa63801556530189_615,
               8,
               a1);
    if ( result ) /*0x1009c05a2*/
      return result; /*0x1009c05a2*/
    if ( (_BYTE)v6 ) /*0x1009c05a8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009c05a8*/
    v4 = &anon_f3f46b48c4f9c057aa63801556530189_616; /*0x1009c05ae*/
    result = serde_core::ser::SerializeMap::serialize_entry::hb32a3c2e86c26e45( /*0x1009c05be*/
               &v6,
               &anon_f3f46b48c4f9c057aa63801556530189_616,
               8,
               a1 + 16);
    if ( result ) /*0x1009c05c6*/
      return result; /*0x1009c05c6*/
    if ( (_BYTE)v6 ) /*0x1009c05cc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009c05cc*/
    v4 = &anon_f3f46b48c4f9c057aa63801556530189_617; /*0x1009c05d2*/
    result = serde_core::ser::SerializeMap::serialize_entry::hb32a3c2e86c26e45( /*0x1009c05e2*/
               &v6,
               &anon_f3f46b48c4f9c057aa63801556530189_617,
               4,
               a1 + 40);
    if ( result ) /*0x1009c05ea*/
      return result; /*0x1009c05ea*/
    if ( (_BYTE)v6 ) /*0x1009c05f4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009c05f4*/
    v4 = &anon_f3f46b48c4f9c057aa63801556530189_618; /*0x1009c05fa*/
    result = serde_core::ser::SerializeMap::serialize_entry::hb32a3c2e86c26e45( /*0x1009c060a*/
               &v6,
               &anon_f3f46b48c4f9c057aa63801556530189_618,
               4,
               a1 + 64);
    if ( result ) /*0x1009c0612*/
      return result; /*0x1009c0612*/
    if ( (_BYTE)v6 ) /*0x1009c061c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009c0582*/
    result = serde_core::ser::SerializeMap::serialize_entry::h7d62dfbef88a8991(&v6, "head_len", 8, a1 + 96); /*0x1009c0639*/
    if ( !result ) /*0x1009c0641*/
    {
      result = 0; /*0x1009c0647*/
      if ( (v6 & 1) == 0 ) /*0x1009c064d*/
      {
        if ( HIBYTE(v6) ) /*0x1009c0657*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hcf6b9c01431e505d( /*0x1009c0670*/
            *v7,
            &anon_f3f46b48c4f9c057aa63801556530189_6,
            1);
          return 0; /*0x1009c0675*/
        }
      }
    }
  }
  return result; /*0x1009c0567*/
}