// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..threads..ThreadUsage$GT$::serialize::h0ecd75592e42fcd1; addr: 0x1008ab470; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:16Z
// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall codexmate_lib::core::analytics::threads::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..threads..ThreadUsage$GT$::serialize::h0ecd75592e42fcd1(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  char *v4; // rsi
  __int64 result; // rax
  __int16 v6; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+10h] [rbp-20h]

  v2 = *a2; /*0x1008ab480*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1008ab483*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1008ab48a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1008ab70c*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1008ab714*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1008ab494*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1008ab49b*/
  v6 = 256; /*0x1008ab49f*/
  v7 = a2; /*0x1008ab4a5*/
  v4 = (char *)&anon_0868f19ff3e9f3569e732f60bdb020cc_26; /*0x1008ab4b0*/
  result = serde_core::ser::SerializeMap::serialize_entry::hb32a3c2e86c26e45( /*0x1008ab4c0*/
             &v6,
             &anon_0868f19ff3e9f3569e732f60bdb020cc_26,
             2,
             a1 + 128);
  if ( !result ) /*0x1008ab4c8*/
  {
    if ( (_BYTE)v6 ) /*0x1008ab4d9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab4d9*/
    v4 = "input"; /*0x1008ab4ea*/
    result = serde_core::ser::SerializeMap::serialize_entry::h3ededfa423e4c066(&v6, "input", 5, a1); /*0x1008ab4fd*/
    if ( result ) /*0x1008ab505*/
      return result; /*0x1008ab505*/
    if ( (_BYTE)v6 ) /*0x1008ab50b*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab50b*/
    v4 = (char *)&unk_10178BB1A; /*0x1008ab511*/
    result = serde_core::ser::SerializeMap::serialize_entry::h3ededfa423e4c066(&v6, &unk_10178BB1A, 6, a1 + 16); /*0x1008ab521*/
    if ( result ) /*0x1008ab529*/
      return result; /*0x1008ab529*/
    if ( (_BYTE)v6 ) /*0x1008ab52f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab52f*/
    v4 = "output/metadata/exit_codeisError"; /*0x1008ab535*/
    result = serde_core::ser::SerializeMap::serialize_entry::h3ededfa423e4c066( /*0x1008ab545*/
               &v6,
               "output/metadata/exit_codeisError",
               6,
               a1 + 32);
    if ( result ) /*0x1008ab54d*/
      return result; /*0x1008ab54d*/
    if ( (_BYTE)v6 ) /*0x1008ab557*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab557*/
    v4 = "reasoning"; /*0x1008ab55d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h3ededfa423e4c066(&v6, "reasoning", 9, a1 + 48); /*0x1008ab56d*/
    if ( result ) /*0x1008ab575*/
      return result; /*0x1008ab575*/
    if ( (_BYTE)v6 ) /*0x1008ab57f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab57f*/
    v4 = (char *)&anon_0868f19ff3e9f3569e732f60bdb020cc_1139; /*0x1008ab589*/
    result = serde_core::ser::SerializeMap::serialize_entry::h3ededfa423e4c066( /*0x1008ab599*/
               &v6,
               &anon_0868f19ff3e9f3569e732f60bdb020cc_1139,
               5,
               a1 + 64);
    if ( result ) /*0x1008ab5a1*/
      return result; /*0x1008ab5a1*/
    if ( (_BYTE)v6 ) /*0x1008ab5ab*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab5ab*/
    v4 = (char *)&unk_10178BB25; /*0x1008ab5b5*/
    result = serde_core::ser::SerializeMap::serialize_entry::hd63f84276f0da819(&v6, &unk_10178BB25, 5, a1 + 80); /*0x1008ab5c5*/
    if ( result ) /*0x1008ab5cd*/
      return result; /*0x1008ab5cd*/
    if ( (_BYTE)v6 ) /*0x1008ab5d7*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab5d7*/
    v4 = (char *)&unk_10178BB2A; /*0x1008ab5e1*/
    result = serde_core::ser::SerializeMap::serialize_entry::hd63f84276f0da819(&v6, &unk_10178BB2A, 14, a1 + 96); /*0x1008ab5f1*/
    if ( result ) /*0x1008ab5f9*/
      return result; /*0x1008ab5f9*/
    if ( (_BYTE)v6 ) /*0x1008ab603*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab603*/
    result = serde_core::ser::SerializeMap::serialize_entry::hd63f84276f0da819(&v6, &unk_10178BB38, 5, a1 + 112); /*0x1008ab61d*/
    if ( result ) /*0x1008ab625*/
      return result; /*0x1008ab625*/
    v4 = (char *)(a1 + 152); /*0x1008ab62b*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h17e59dd8c6c9eaf2( /*0x1008ab636*/
               &v6,
               a1 + 152);
    if ( result ) /*0x1008ab63e*/
      return result; /*0x1008ab63e*/
    if ( (_BYTE)v6 ) /*0x1008ab648*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab648*/
    v4 = (char *)&unk_10178BB3D; /*0x1008ab655*/
    result = serde_core::ser::SerializeMap::serialize_entry::h971e5d2d456a2749(&v6, &unk_10178BB3D, 7, a1 + 200); /*0x1008ab665*/
    if ( result ) /*0x1008ab66d*/
      return result; /*0x1008ab66d*/
    if ( (_BYTE)v6 ) /*0x1008ab677*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008ab4e5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h971e5d2d456a2749(&v6, &unk_10178BB44, 12, a1 + 201); /*0x1008ab694*/
    if ( !result ) /*0x1008ab69c*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::he4da7b3c470f970c( /*0x1008ab6b0*/
                 &v6,
                 a1 + 176);
      if ( !result ) /*0x1008ab6b8*/
      {
        result = 0; /*0x1008ab6be*/
        if ( (v6 & 1) == 0 ) /*0x1008ab6c4*/
        {
          if ( HIBYTE(v6) ) /*0x1008ab6ce*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hcf6b9c01431e505d(*v7, "}false", 1); /*0x1008ab6e7*/
            return 0; /*0x1008ab6ec*/
          }
        }
      }
    }
  }
  return result; /*0x1008ab4ca*/
}