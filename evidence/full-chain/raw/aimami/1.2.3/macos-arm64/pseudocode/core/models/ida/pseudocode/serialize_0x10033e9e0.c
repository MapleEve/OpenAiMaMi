// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountImportSkipped$GT$9serialize @ 0x10033e9e0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountImportSkipped$GT$::serialize::h0f32a3bcb70d9f09(
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

  v6 = *a2; /*0x10033e9f0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033e9f3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033e9fa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033eae1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033eae9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033ea04*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033ea0b*/
  v9 = 256; /*0x10033ea0f*/
  v10 = a2; /*0x10033ea15*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033ea2c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_30,
             10,
             a1);
  if ( !result ) /*0x10033ea34*/
  {
    if ( (_BYTE)v9 ) /*0x10033ea45*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ea45*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033ea6a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_602,
               5,
               a1 + 24);
    if ( result ) /*0x10033ea72*/
      return result; /*0x10033ea72*/
    if ( (_BYTE)v9 ) /*0x10033ea78*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033ea51*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033ea91*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_256,
               6,
               a1 + 48);
    if ( !result ) /*0x10033ea99*/
    {
      result = 0; /*0x10033ea9b*/
      if ( (v9 & 1) == 0 ) /*0x10033eaa1*/
      {
        if ( HIBYTE(v9) ) /*0x10033eaa7*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033eabc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033eac1*/
        }
      }
    }
  }
  return result; /*0x10033ea36*/
}