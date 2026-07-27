// __ZN13codexmate_lib4core6models1_111_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountImportPreviewEntry$GT$9serialize @ 0x1003422c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountImportPreviewEntry$GT$::serialize::hd12fe5dd9ffe7443(
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

  v6 = *a2; /*0x1003422d0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1003422d3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1003422da*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003424a3*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003424ab*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1003422e4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1003422eb*/
  v9 = 256; /*0x1003422ef*/
  v10 = a2; /*0x1003422f5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034230c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_30,
             10,
             a1);
  if ( !result ) /*0x100342314*/
  {
    if ( (_BYTE)v9 ) /*0x100342325*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342325*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034234a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_602,
               5,
               a1 + 24);
    if ( result ) /*0x100342352*/
      return result; /*0x100342352*/
    if ( (_BYTE)v9 ) /*0x100342358*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342358*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034236e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_87,
               4,
               a1 + 48);
    if ( result ) /*0x100342376*/
      return result; /*0x100342376*/
    if ( (_BYTE)v9 ) /*0x10034237c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034237c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100342392*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_609,
               8,
               a1 + 72);
    if ( result ) /*0x10034239a*/
      return result; /*0x10034239a*/
    if ( (_BYTE)v9 ) /*0x1003423a4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003423a4*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1003423ba*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_605,
               13,
               a1 + 96);
    if ( result ) /*0x1003423c2*/
      return result; /*0x1003423c2*/
    if ( (_BYTE)v9 ) /*0x1003423cc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003423cc*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1003423e6*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_606,
               11,
               a1 + 120);
    if ( result ) /*0x1003423ee*/
      return result; /*0x1003423ee*/
    if ( (_BYTE)v9 ) /*0x1003423f8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003423f8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100342415*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_896,
               8,
               a1 + 144);
    if ( result ) /*0x10034241d*/
      return result; /*0x10034241d*/
    if ( (_BYTE)v9 ) /*0x100342427*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342331*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100342447*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_897,
               15,
               a1 + 145);
    if ( !result ) /*0x10034244f*/
    {
      result = 0; /*0x100342455*/
      if ( (v9 & 1) == 0 ) /*0x10034245b*/
      {
        if ( HIBYTE(v9) ) /*0x100342465*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10034247e*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100342483*/
        }
      }
    }
  }
  return result; /*0x100342316*/
}