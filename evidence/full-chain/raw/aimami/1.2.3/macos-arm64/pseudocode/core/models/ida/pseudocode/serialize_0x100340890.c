// __ZN13codexmate_lib4core6models1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceWorkspacePayload$GT$9serialize @ 0x100340890 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceWorkspacePayload$GT$::serialize::hee4998dc0bd0a84b(
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

  v6 = *a2; /*0x1003408a0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1003408a3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1003408aa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100340a15*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100340a1d*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1003408b4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1003408bb*/
  v9 = 256; /*0x1003408bf*/
  v10 = a2; /*0x1003408c5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h5d3435ddbc19767e( /*0x1003408dc*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_842,
             9,
             a1);
  if ( !result ) /*0x1003408e4*/
  {
    if ( (_BYTE)v9 ) /*0x1003408f5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003408f5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h1f1b5f67eb245677( /*0x10034091a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_843,
               10,
               a1 + 24);
    if ( result ) /*0x100340922*/
      return result; /*0x100340922*/
    if ( (_BYTE)v9 ) /*0x100340928*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340928*/
    result = serde_core::ser::SerializeMap::serialize_entry::h2d3c1c4ad1f2a083( /*0x10034093e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_844,
               14,
               a1 + 48);
    if ( result ) /*0x100340946*/
      return result; /*0x100340946*/
    if ( (_BYTE)v9 ) /*0x10034094c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034094c*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc4f16e1d0a9b80ea( /*0x100340962*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_845,
               7,
               a1 + 72);
    if ( result ) /*0x10034096a*/
      return result; /*0x10034096a*/
    if ( (_BYTE)v9 ) /*0x100340974*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340974*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034098a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_670,
               10,
               a1 + 96);
    if ( result ) /*0x100340992*/
      return result; /*0x100340992*/
    if ( (_BYTE)v9 ) /*0x10034099c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340901*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99(&v9, "lastUpdatedAt", 13, a1 + 120); /*0x1003409b9*/
    if ( !result ) /*0x1003409c1*/
    {
      result = 0; /*0x1003409c7*/
      if ( (v9 & 1) == 0 ) /*0x1003409cd*/
      {
        if ( HIBYTE(v9) ) /*0x1003409d7*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003409f0*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x1003409f5*/
        }
      }
    }
  }
  return result; /*0x1003408e6*/
}