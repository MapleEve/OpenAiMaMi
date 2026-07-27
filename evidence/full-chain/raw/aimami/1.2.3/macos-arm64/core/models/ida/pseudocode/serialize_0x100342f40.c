// __ZN13codexmate_lib4core6models1_113_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountImportPreviewPayload$GT$9serialize @ 0x100342f40 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountImportPreviewPayload$GT$::serialize::h21020c6497869de9(
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

  v6 = *a2; /*0x100342f50*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100342f53*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100342f5a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10034319e*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003431a6*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100342f64*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100342f6b*/
  v9 = 256; /*0x100342f6f*/
  v10 = a2; /*0x100342f75*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100342f8c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_940,
             8,
             a1);
  if ( !result ) /*0x100342f94*/
  {
    if ( (_BYTE)v9 ) /*0x100342fa5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342fa5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100342fca*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_941,
               13,
               a1 + 24);
    if ( result ) /*0x100342fd2*/
      return result; /*0x100342fd2*/
    if ( (_BYTE)v9 ) /*0x100342fd8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342fd8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100342ff1*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_26,
               13,
               a1 + 152);
    if ( result ) /*0x100342ff9*/
      return result; /*0x100342ff9*/
    if ( (_BYTE)v9 ) /*0x100342fff*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342fff*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100343015*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_760,
               4,
               a1 + 48);
    if ( result ) /*0x10034301d*/
      return result; /*0x10034301d*/
    if ( (_BYTE)v9 ) /*0x100343027*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343027*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100343041*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_942,
               10,
               a1 + 72);
    if ( result ) /*0x100343049*/
      return result; /*0x100343049*/
    if ( (_BYTE)v9 ) /*0x100343053*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343053*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x100343070*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_772,
               10,
               a1 + 144);
    if ( result ) /*0x100343078*/
      return result; /*0x100343078*/
    if ( (_BYTE)v9 ) /*0x100343082*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343082*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10034309c*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_943,
               16,
               a1 + 120);
    if ( result ) /*0x1003430a4*/
      return result; /*0x1003430a4*/
    if ( (_BYTE)v9 ) /*0x1003430ae*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003430ae*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x1003430cb*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_649,
               12,
               a1 + 156);
    if ( result ) /*0x1003430d3*/
      return result; /*0x1003430d3*/
    if ( (_BYTE)v9 ) /*0x1003430dd*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003430dd*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x1003430fa*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_944,
               8,
               a1 + 160);
    if ( result ) /*0x100343102*/
      return result; /*0x100343102*/
    if ( (_BYTE)v9 ) /*0x10034310c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342fb1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100343129*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_945,
               13,
               a1 + 164);
    if ( !result ) /*0x100343131*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h671c85294eab2d89( /*0x100343142*/
                 &v9,
                 a1 + 96);
      if ( !result ) /*0x10034314a*/
      {
        result = 0; /*0x100343150*/
        if ( (v9 & 1) == 0 ) /*0x100343156*/
        {
          if ( HIBYTE(v9) ) /*0x100343160*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100343179*/
              *v10,
              &anon_b0ee9adff4519c22b647af231a5a39fa_15,
              1);
            return 0; /*0x10034317e*/
          }
        }
      }
    }
  }
  return result; /*0x100342f96*/
}