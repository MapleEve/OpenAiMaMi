// __ZN13codexmate_lib4core6models1_98_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AppPathState$GT$9serialize @ 0x1003441e0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AppPathState$GT$::serialize::h9d8ac4e83f2c17be(
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

  v6 = *a2; /*0x1003441f0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1003441f3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1003441fa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100344421*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100344429*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100344204*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034420b*/
  v9 = 256; /*0x10034420f*/
  v10 = a2; /*0x100344215*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034422c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_979,
             9,
             a1);
  if ( !result ) /*0x100344234*/
  {
    if ( (_BYTE)v9 ) /*0x100344245*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344245*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034426a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_980,
               12,
               a1 + 24);
    if ( result ) /*0x100344272*/
      return result; /*0x100344272*/
    if ( (_BYTE)v9 ) /*0x100344278*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344278*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034428e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_981,
               8,
               a1 + 48);
    if ( result ) /*0x100344296*/
      return result; /*0x100344296*/
    if ( (_BYTE)v9 ) /*0x10034429c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034429c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003442b2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_982,
               12,
               a1 + 72);
    if ( result ) /*0x1003442ba*/
      return result; /*0x1003442ba*/
    if ( (_BYTE)v9 ) /*0x1003442c4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003442c4*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003442da*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_983,
               12,
               a1 + 96);
    if ( result ) /*0x1003442e2*/
      return result; /*0x1003442e2*/
    if ( (_BYTE)v9 ) /*0x1003442ec*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003442ec*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100344306*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_984,
               15,
               a1 + 120);
    if ( result ) /*0x10034430e*/
      return result; /*0x10034430e*/
    if ( (_BYTE)v9 ) /*0x100344318*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344318*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100344335*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_985,
               17,
               a1 + 144);
    if ( result ) /*0x10034433d*/
      return result; /*0x10034433d*/
    if ( (_BYTE)v9 ) /*0x100344347*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344347*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100344364*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_986,
               10,
               a1 + 168);
    if ( result ) /*0x10034436c*/
      return result; /*0x10034436c*/
    if ( (_BYTE)v9 ) /*0x100344376*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344376*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100344393*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_987,
               14,
               a1 + 169);
    if ( result ) /*0x10034439b*/
      return result; /*0x10034439b*/
    if ( (_BYTE)v9 ) /*0x1003443a5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344251*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x1003443c5*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_988,
               14,
               a1 + 170);
    if ( !result ) /*0x1003443cd*/
    {
      result = 0; /*0x1003443d3*/
      if ( (v9 & 1) == 0 ) /*0x1003443d9*/
      {
        if ( HIBYTE(v9) ) /*0x1003443e3*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003443fc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100344401*/
        }
      }
    }
  }
  return result; /*0x100344236*/
}