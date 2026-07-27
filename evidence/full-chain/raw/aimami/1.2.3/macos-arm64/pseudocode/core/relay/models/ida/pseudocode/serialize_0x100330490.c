// __ZN13codexmate_lib4core5relay6models1_113_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$9serialize @ 0x100330490 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$::serialize::h3631e75778ace3d6(
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

  v6 = *a2; /*0x1003304a0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1003304a3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1003304aa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033065d*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100330665*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1003304b4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1003304bb*/
  v9 = 256; /*0x1003304bf*/
  v10 = a2; /*0x1003304c5*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x1003304e0*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_454,
             4,
             a1 + 144);
  if ( !result ) /*0x1003304e8*/
  {
    if ( (_BYTE)v9 ) /*0x1003304f9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003304f9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033051d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_455,
               8,
               a1);
    if ( result ) /*0x100330525*/
      return result; /*0x100330525*/
    if ( (_BYTE)v9 ) /*0x10033052b*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033052b*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100330541*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_456,
               14,
               a1 + 24);
    if ( result ) /*0x100330549*/
      return result; /*0x100330549*/
    if ( (_BYTE)v9 ) /*0x10033054f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033054f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100330565*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_446,
               10,
               a1 + 48);
    if ( result ) /*0x10033056d*/
      return result; /*0x10033056d*/
    if ( (_BYTE)v9 ) /*0x100330577*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100330577*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033058d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_457,
               12,
               a1 + 72);
    if ( result ) /*0x100330595*/
      return result; /*0x100330595*/
    if ( (_BYTE)v9 ) /*0x10033059f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033059f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3(&v9, "upstreamUrl", 11, a1 + 96); /*0x1003305b9*/
    if ( result ) /*0x1003305c1*/
      return result; /*0x1003305c1*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h4a14b66c7ee8440e( /*0x1003305d2*/
               &v9,
               a1 + 152);
    if ( result ) /*0x1003305da*/
      return result; /*0x1003305da*/
    if ( (_BYTE)v9 ) /*0x1003305e4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100330505*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100330601*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_338,
               5,
               a1 + 120);
    if ( !result ) /*0x100330609*/
    {
      result = 0; /*0x10033060f*/
      if ( (v9 & 1) == 0 ) /*0x100330615*/
      {
        if ( HIBYTE(v9) ) /*0x10033061f*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100330638*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10033063d*/
        }
      }
    }
  }
  return result; /*0x1003304ea*/
}