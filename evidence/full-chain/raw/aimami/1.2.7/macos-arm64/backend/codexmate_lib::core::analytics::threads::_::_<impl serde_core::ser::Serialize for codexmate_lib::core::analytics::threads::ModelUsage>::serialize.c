// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..threads..ModelUsage$GT$::serialize::hfe4dd5ca55a1087e; addr: 0x1008ab360; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall codexmate_lib::core::analytics::threads::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..threads..ModelUsage$GT$::serialize::hfe4dd5ca55a1087e(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int16 v7; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+10h] [rbp-20h]

  v2 = *a2; /*0x1008ab370*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1008ab373*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1008ab37a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1008ab441*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1008ab449*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1008ab384*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1008ab38b*/
  v7 = 256; /*0x1008ab38f*/
  v8 = a2; /*0x1008ab395*/
  result = serde_core::ser::SerializeMap::serialize_entry::hb32a3c2e86c26e45( /*0x1008ab3ac*/
             &v7,
             &anon_0868f19ff3e9f3569e732f60bdb020cc_65,
             5,
             a1);
  if ( !result ) /*0x1008ab3b4*/
  {
    if ( (_BYTE)v7 == 1 ) /*0x1008ab3c5*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v7, &anon_0868f19ff3e9f3569e732f60bdb020cc_65); /*0x1008ab3d1*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h3f2c8484ae866d3b(&v7, "tokenslast_refresh", 6, a1 + 24); /*0x1008ab3ed*/
      if ( !result ) /*0x1008ab3f5*/
      {
        result = 0; /*0x1008ab3f7*/
        if ( (v7 & 1) == 0 ) /*0x1008ab3fd*/
        {
          if ( HIBYTE(v7) ) /*0x1008ab403*/
          {
            v5 = *v8; /*0x1008ab409*/
            v6 = *(_QWORD *)(*v8 + 16LL); /*0x1008ab40c*/
            if ( *(_QWORD *)*v8 == v6 ) /*0x1008ab413*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(*v8, v6, 1, 1, 1); /*0x1008ab465*/
              v6 = *(_QWORD *)(v5 + 16); /*0x1008ab46a*/
            }
            *(_BYTE *)(*(_QWORD *)(v5 + 8) + v6) = 125; /*0x1008ab419*/
            *(_QWORD *)(v5 + 16) = v6 + 1; /*0x1008ab420*/
            return 0; /*0x1008ab424*/
          }
        }
      }
    }
  }
  return result; /*0x1008ab3b6*/
}