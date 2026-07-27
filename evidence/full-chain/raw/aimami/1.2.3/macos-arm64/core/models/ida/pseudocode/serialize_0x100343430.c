// __ZN13codexmate_lib4core6models1_115_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionMigrateWorktreePayload$GT$9serialize @ 0x100343430 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionMigrateWorktreePayload$GT$::serialize::hf13fc9797368518a(
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

  v6 = *a2; /*0x100343440*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100343443*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034344a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003435e1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003435e9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100343454*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034345b*/
  v9 = 256; /*0x10034345f*/
  v10 = a2; /*0x100343465*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034347c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_792,
             9,
             a1);
  if ( !result ) /*0x100343484*/
  {
    if ( (_BYTE)v9 ) /*0x100343495*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343495*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003434ba*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_670,
               10,
               a1 + 24);
    if ( result ) /*0x1003434c2*/
      return result; /*0x1003434c2*/
    if ( (_BYTE)v9 ) /*0x1003434c8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003434c8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003434de*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_771,
               10,
               a1 + 48);
    if ( result ) /*0x1003434e6*/
      return result; /*0x1003434e6*/
    if ( (_BYTE)v9 ) /*0x1003434ec*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003434ec*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100343502*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_956,
               13,
               a1 + 120);
    if ( result ) /*0x10034350a*/
      return result; /*0x10034350a*/
    if ( (_BYTE)v9 ) /*0x100343514*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343514*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10034352a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_957,
               14,
               a1 + 121);
    if ( result ) /*0x100343532*/
      return result; /*0x100343532*/
    if ( (_BYTE)v9 ) /*0x10034353c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034353c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100343556*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_958,
               12,
               a1 + 72);
    if ( result ) /*0x10034355e*/
      return result; /*0x10034355e*/
    if ( (_BYTE)v9 ) /*0x100343568*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003434a1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100343585*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_959,
               17,
               a1 + 96);
    if ( !result ) /*0x10034358d*/
    {
      result = 0; /*0x100343593*/
      if ( (v9 & 1) == 0 ) /*0x100343599*/
      {
        if ( HIBYTE(v9) ) /*0x1003435a3*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003435bc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x1003435c1*/
        }
      }
    }
  }
  return result; /*0x100343486*/
}