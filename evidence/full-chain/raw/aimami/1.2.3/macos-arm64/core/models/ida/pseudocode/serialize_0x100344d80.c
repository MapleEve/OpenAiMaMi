// __ZN13codexmate_lib4core6models1_99_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SwitchPayload$GT$9serialize @ 0x100344d80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SwitchPayload$GT$::serialize::h2984c081a83a65b0(
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

  v6 = *a2; /*0x100344d90*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100344d93*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100344d9a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100344ee9*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100344ef1*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100344da4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100344dab*/
  v9 = 256; /*0x100344daf*/
  v10 = a2; /*0x100344db5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100344dd0*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_1017,
             18,
             a1 + 376);
  if ( !result ) /*0x100344dd8*/
  {
    if ( (_BYTE)v9 ) /*0x100344de9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344de9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100344e11*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_650,
               16,
               a1 + 352);
    if ( result ) /*0x100344e19*/
      return result; /*0x100344e19*/
    if ( (_BYTE)v9 ) /*0x100344e1f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344e1f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h69e7acef197ce807( /*0x100344e34*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_652,
               13,
               a1);
    if ( result ) /*0x100344e3c*/
      return result; /*0x100344e3c*/
    if ( (_BYTE)v9 ) /*0x100344e42*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344e42*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v9, "authUpdated", 11, a1 + 400); /*0x100344e5b*/
    if ( result ) /*0x100344e63*/
      return result; /*0x100344e63*/
    if ( (_BYTE)v9 ) /*0x100344e6d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344df5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v9, "registryUpdated", 15, a1 + 401); /*0x100344e8d*/
    if ( !result ) /*0x100344e95*/
    {
      result = 0; /*0x100344e9b*/
      if ( (v9 & 1) == 0 ) /*0x100344ea1*/
      {
        if ( HIBYTE(v9) ) /*0x100344eab*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100344ec4*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100344ec9*/
        }
      }
    }
  }
  return result; /*0x100344dda*/
}