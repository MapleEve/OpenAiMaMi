// __ZN13codexmate_lib4core6models1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AppStatusPayload$GT$9serialize @ 0x10033b160 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AppStatusPayload$GT$::serialize::h0659a41035b5460f(
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

  v6 = *a2; /*0x10033b170*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033b173*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033b17a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033b317*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033b31f*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033b184*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033b18b*/
  v9 = 256; /*0x10033b18f*/
  v10 = a2; /*0x10033b195*/
  result = serde_core::ser::SerializeMap::serialize_entry::h068109d964210d2f( /*0x10033b1b0*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_630,
             5,
             a1 + 352);
  if ( !result ) /*0x10033b1b8*/
  {
    if ( (_BYTE)v9 ) /*0x10033b1c9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b1c9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033b1f1*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_649,
               12,
               a1 + 664);
    if ( result ) /*0x10033b1f9*/
      return result; /*0x10033b1f9*/
    if ( (_BYTE)v9 ) /*0x10033b1ff*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b1ff*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033b218*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_650,
               16,
               a1 + 568);
    if ( result ) /*0x10033b220*/
      return result; /*0x10033b220*/
    if ( (_BYTE)v9 ) /*0x10033b226*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b1d5*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10033b23f*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_651,
               10,
               a1 + 656);
    if ( !result ) /*0x10033b247*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h77d7a209aacef9c1( /*0x10033b254*/
                 &v9,
                 a1);
      if ( !result ) /*0x10033b25c*/
      {
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h575cf43b7c7716f5( /*0x10033b26d*/
                   &v9,
                   a1 + 668);
        if ( !result ) /*0x10033b275*/
        {
          result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hc445b932a7edae8a( /*0x10033b286*/
                     &v9,
                     a1 + 528);
          if ( !result ) /*0x10033b28e*/
          {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h96daebc74cf221d2( /*0x10033b29f*/
                       &v9,
                       a1 + 592);
            if ( !result ) /*0x10033b2a7*/
            {
              result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hbc60766303ebe7c7( /*0x10033b2bb*/
                         &v9,
                         a1 + 624);
              if ( !result ) /*0x10033b2c3*/
              {
                result = 0; /*0x10033b2c9*/
                if ( (v9 & 1) == 0 ) /*0x10033b2cf*/
                {
                  if ( HIBYTE(v9) ) /*0x10033b2d9*/
                  {
                    alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033b2f2*/
                      *v10,
                      &anon_b0ee9adff4519c22b647af231a5a39fa_15,
                      1);
                    return 0; /*0x10033b2f7*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x10033b1ba*/
}