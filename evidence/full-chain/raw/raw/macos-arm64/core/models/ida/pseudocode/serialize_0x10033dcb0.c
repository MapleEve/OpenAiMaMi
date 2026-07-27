// __ZN13codexmate_lib4core6models1_105_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiProxyTestPayload$GT$9serialize @ 0x10033dcb0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiProxyTestPayload$GT$::serialize::h97fd116c65dfe124(
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

  v6 = *a2; /*0x10033dcc0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033dcc3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033dcca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033dde1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033dde9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033dcd4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033dcdb*/
  v9 = 256; /*0x10033dcdf*/
  v10 = a2; /*0x10033dce5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033dcfc*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_54,
             4,
             a1);
  if ( !result ) /*0x10033dd04*/
  {
    if ( (_BYTE)v9 ) /*0x10033dd15*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033dd15*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10033dd3a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_749,
               9,
               a1 + 56);
    if ( result ) /*0x10033dd42*/
      return result; /*0x10033dd42*/
    if ( (_BYTE)v9 ) /*0x10033dd48*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033dd48*/
    result = serde_core::ser::SerializeMap::serialize_entry::h1ad50ae5e6e43a37( /*0x10033dd5e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_750,
               10,
               a1 + 48);
    if ( result ) /*0x10033dd66*/
      return result; /*0x10033dd66*/
    if ( (_BYTE)v9 ) /*0x10033dd6c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033dd21*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, "message", 7, a1 + 24); /*0x10033dd85*/
    if ( !result ) /*0x10033dd8d*/
    {
      result = 0; /*0x10033dd93*/
      if ( (v9 & 1) == 0 ) /*0x10033dd99*/
      {
        if ( HIBYTE(v9) ) /*0x10033dda3*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033ddbc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033ddc1*/
        }
      }
    }
  }
  return result; /*0x10033dd06*/
}