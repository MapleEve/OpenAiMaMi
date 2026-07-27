// __ZN13codexmate_lib4core6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..McpServerRemovePayload$GT$9serialize @ 0x100340dc0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..McpServerRemovePayload$GT$::serialize::h93cfaffa62a3fb68(
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

  v6 = *a2; /*0x100340dd0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100340dd3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100340dda*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100340ec1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100340ec9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100340de4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100340deb*/
  v9 = 256; /*0x100340def*/
  v10 = a2; /*0x100340df5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100340e0c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_866,
             11,
             a1);
  if ( !result ) /*0x100340e14*/
  {
    if ( (_BYTE)v9 ) /*0x100340e25*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340e25*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100340e4a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_678,
               5,
               a1 + 48);
    if ( result ) /*0x100340e52*/
      return result; /*0x100340e52*/
    if ( (_BYTE)v9 ) /*0x100340e58*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340e31*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100340e71*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_670,
               10,
               a1 + 24);
    if ( !result ) /*0x100340e79*/
    {
      result = 0; /*0x100340e7b*/
      if ( (v9 & 1) == 0 ) /*0x100340e81*/
      {
        if ( HIBYTE(v9) ) /*0x100340e87*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100340e9c*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100340ea1*/
        }
      }
    }
  }
  return result; /*0x100340e16*/
}