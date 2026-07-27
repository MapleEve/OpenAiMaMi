// __ZN13codexmate_lib4core6models1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiProxyDetectPayload$GT$9serialize @ 0x10033ffb0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiProxyDetectPayload$GT$::serialize::h0b778a1f61c8f046(
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

  v6 = *a2; /*0x10033ffc0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033ffc3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033ffca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003400de*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003400e6*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033ffd4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033ffdb*/
  v9 = 256; /*0x10033ffdf*/
  v10 = a2; /*0x10033ffe5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10033fffd*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_820,
             5,
             a1 + 88);
  if ( !result ) /*0x100340005*/
  {
    if ( (_BYTE)v9 ) /*0x100340016*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340016*/
    result = serde_core::ser::SerializeMap::serialize_entry::h97f33b6fd681bf6d(&v9, "mode", 4, a1 + 89); /*0x10034003b*/
    if ( result ) /*0x100340043*/
      return result; /*0x100340043*/
    if ( (_BYTE)v9 ) /*0x100340049*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340049*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10034005f*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_673,
               3,
               a1 + 64);
    if ( result ) /*0x100340067*/
      return result; /*0x100340067*/
    if ( (_BYTE)v9 ) /*0x10034006d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340022*/
    result = serde_core::ser::SerializeMap::serialize_entry::hb235278536f103d4(&v9, "probe", 5, a1); /*0x100340082*/
    if ( !result ) /*0x10034008a*/
    {
      result = 0; /*0x100340090*/
      if ( (v9 & 1) == 0 ) /*0x100340096*/
      {
        if ( HIBYTE(v9) ) /*0x1003400a0*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003400b9*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x1003400be*/
        }
      }
    }
  }
  return result; /*0x100340007*/
}