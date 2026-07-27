// __ZN13codexmate_lib4core5relay6models1_111_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayQuotaSnapshot$GT$9serialize @ 0x1003302c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayQuotaSnapshot$GT$::serialize::hbafe42d476ef38b7(
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

  v6 = *a2; /*0x1003302d0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1003302d3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1003302da*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100330478*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100330480*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1003302e4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1003302eb*/
  v9 = 256; /*0x1003302ef*/
  v10 = a2; /*0x1003302f5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033030c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_446,
             10,
             a1);
  if ( !result ) /*0x100330314*/
  {
    if ( (_BYTE)v9 ) /*0x100330325*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100330325*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033034a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_447,
               7,
               a1 + 24);
    if ( result ) /*0x100330352*/
      return result; /*0x100330352*/
    if ( (_BYTE)v9 ) /*0x100330358*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100330358*/
    result = serde_core::ser::SerializeMap::serialize_entry::h2fbe83e14fb02748( /*0x100330371*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_448,
               6,
               a1 + 128);
    if ( result ) /*0x100330379*/
      return result; /*0x100330379*/
    if ( (_BYTE)v9 ) /*0x10033037f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033037f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100330395*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_449,
               5,
               a1 + 72);
    if ( result ) /*0x10033039d*/
      return result; /*0x10033039d*/
    if ( (_BYTE)v9 ) /*0x1003303a7*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003303a7*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, "source", 6, a1 + 48); /*0x1003303c1*/
    if ( result ) /*0x1003303c9*/
      return result; /*0x1003303c9*/
    if ( (_BYTE)v9 ) /*0x1003303d3*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003303d3*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x1003303ed*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_27,
               9,
               a1 + 120);
    if ( result ) /*0x1003303f5*/
      return result; /*0x1003303f5*/
    if ( (_BYTE)v9 ) /*0x1003303ff*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100330331*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033041c*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_338,
               5,
               a1 + 96);
    if ( !result ) /*0x100330424*/
    {
      result = 0; /*0x10033042a*/
      if ( (v9 & 1) == 0 ) /*0x100330430*/
      {
        if ( HIBYTE(v9) ) /*0x10033043a*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100330453*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100330458*/
        }
      }
    }
  }
  return result; /*0x100330316*/
}