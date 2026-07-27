// __ZN13codexmate_lib4core5relay6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayModelEntry$GT$9serialize @ 0x10032f280 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayModelEntry$GT$::serialize::ha7ba21cb4d39e798(
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

  v6 = *a2; /*0x10032f290*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10032f293*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10032f29a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10032f3d9*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10032f3e1*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10032f2a4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10032f2ab*/
  v9 = 256; /*0x10032f2af*/
  v10 = a2; /*0x10032f2b5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10032f2cd*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_414,
             5,
             a1 + 16);
  if ( !result ) /*0x10032f2d5*/
  {
    if ( (_BYTE)v9 ) /*0x10032f2e6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f2e6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h4627b17114f659dd( /*0x10032f30b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_415,
               7,
               a1 + 88);
    if ( result ) /*0x10032f313*/
      return result; /*0x10032f313*/
    if ( (_BYTE)v9 ) /*0x10032f319*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f319*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x10032f32e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_426,
               13,
               a1);
    if ( result ) /*0x10032f336*/
      return result; /*0x10032f336*/
    if ( (_BYTE)v9 ) /*0x10032f33c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f33c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10032f352*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_427,
               11,
               a1 + 64);
    if ( result ) /*0x10032f35a*/
      return result; /*0x10032f35a*/
    if ( (_BYTE)v9 ) /*0x10032f364*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f2f2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10032f37d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_428,
               6,
               a1 + 40);
    if ( !result ) /*0x10032f385*/
    {
      result = 0; /*0x10032f38b*/
      if ( (v9 & 1) == 0 ) /*0x10032f391*/
      {
        if ( HIBYTE(v9) ) /*0x10032f39b*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10032f3b4*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10032f3b9*/
        }
      }
    }
  }
  return result; /*0x10032f2d7*/
}