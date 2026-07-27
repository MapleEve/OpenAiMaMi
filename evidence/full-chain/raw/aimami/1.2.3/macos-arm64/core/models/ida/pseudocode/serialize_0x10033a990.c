// __ZN13codexmate_lib4core6models1_101_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..RateLimitWindow$GT$9serialize @ 0x10033a990 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..RateLimitWindow$GT$::serialize::h6a17d988adc98262(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  __int16 v9; // [rsp+8h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-20h]

  v6 = *(_QWORD **)a2; /*0x10033a9a0*/
  ++*(_QWORD *)(a2 + 24); /*0x10033a9a3*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10033a9a7*/
  v7 = v6[2]; /*0x10033a9ab*/
  if ( *v6 == v7 ) /*0x10033a9b2*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10033aaa1*/
    v7 = v6[2]; /*0x10033aaa9*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10033a9bc*/
  v6[2] = v7 + 1; /*0x10033a9c3*/
  v9 = 256; /*0x10033a9c7*/
  v10 = a2; /*0x10033a9cd*/
  result = serde_core::ser::SerializeMap::serialize_entry::h511a2f75bf60921b( /*0x10033a9e5*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_641,
             11,
             a1 + 24);
  if ( !result ) /*0x10033a9ed*/
  {
    if ( (_BYTE)v9 ) /*0x10033a9fe*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a9fe*/
    result = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x10033aa23*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_642,
               16,
               a1 + 32);
    if ( result ) /*0x10033aa2b*/
      return result; /*0x10033aa2b*/
    if ( (_BYTE)v9 ) /*0x10033aa31*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033aa31*/
    result = serde_core::ser::SerializeMap::serialize_entry::h0bc3029db88f1fb0( /*0x10033aa47*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_643,
               13,
               a1 + 16);
    if ( result ) /*0x10033aa4f*/
      return result; /*0x10033aa4f*/
    if ( (_BYTE)v9 ) /*0x10033aa55*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033aa0a*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x10033aa6a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_644,
               8,
               a1);
    if ( !result ) /*0x10033aa72*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v9); /*0x10033aa7c*/
      return 0; /*0x10033aa81*/
    }
  }
  return result; /*0x10033a9ef*/
}