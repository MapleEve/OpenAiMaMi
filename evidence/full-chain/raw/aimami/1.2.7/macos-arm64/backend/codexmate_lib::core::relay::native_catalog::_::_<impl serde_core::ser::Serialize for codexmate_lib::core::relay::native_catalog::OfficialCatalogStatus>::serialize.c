// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_catalog::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..native_catalog..OfficialCatalogStatus$GT$::serialize::h7b3ba049023163ec; addr: 0x1005d34e0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall codexmate_lib::core::relay::native_catalog::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..native_catalog..OfficialCatalogStatus$GT$::serialize::h7b3ba049023163ec(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  void *v4; // rsi
  __int64 result; // rax
  __int16 v6; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+10h] [rbp-20h]

  v2 = *a2; /*0x1005d34f0*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1005d34f3*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1005d34fa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1005d3627*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1005d362f*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1005d3504*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1005d350b*/
  v6 = 256; /*0x1005d350f*/
  v7 = a2; /*0x1005d3515*/
  v4 = &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_498; /*0x1005d351d*/
  result = serde_core::ser::SerializeMap::serialize_entry::h971e5d2d456a2749( /*0x1005d352d*/
             &v6,
             &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_498,
             9,
             a1 + 28);
  if ( !result ) /*0x1005d3535*/
  {
    if ( (_BYTE)v6 ) /*0x1005d3546*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1005d3546*/
    v4 = &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_499; /*0x1005d3557*/
    result = serde_core::ser::SerializeMap::serialize_entry::h3f2c8484ae866d3b( /*0x1005d356a*/
               &v6,
               &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_499,
               9,
               a1);
    if ( result ) /*0x1005d3572*/
      return result; /*0x1005d3572*/
    if ( (_BYTE)v6 ) /*0x1005d3578*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1005d3578*/
    v4 = &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_500; /*0x1005d357e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h7d62dfbef88a8991( /*0x1005d358e*/
               &v6,
               &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_500,
               10,
               a1 + 8);
    if ( result ) /*0x1005d3596*/
      return result; /*0x1005d3596*/
    if ( (_BYTE)v6 ) /*0x1005d359c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1005d3552*/
    result = serde_core::ser::SerializeMap::serialize_entry::h7d62dfbef88a8991( /*0x1005d35b2*/
               &v6,
               &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_501,
               14,
               a1 + 16);
    if ( !result ) /*0x1005d35ba*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hc49aeafd6bfe002f( /*0x1005d35cb*/
                 &v6,
                 a1 + 24);
      if ( !result ) /*0x1005d35d3*/
      {
        result = 0; /*0x1005d35d9*/
        if ( (v6 & 1) == 0 ) /*0x1005d35df*/
        {
          if ( HIBYTE(v6) ) /*0x1005d35e9*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hcf6b9c01431e505d( /*0x1005d3602*/
              *v7,
              &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_17,
              1);
            return 0; /*0x1005d3607*/
          }
        }
      }
    }
  }
  return result; /*0x1005d3537*/
}
