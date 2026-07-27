// __ZN13codexmate_lib4core6models1_101_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnosePayload$GT$9serialize @ 0x10033a810 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnosePayload$GT$::serialize::heb6d09e35b4eaa14(
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

  v6 = *a2; /*0x10033a820*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033a823*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033a82a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033a979*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033a981*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033a834*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033a83b*/
  v9 = 256; /*0x10033a83f*/
  v10 = a2; /*0x10033a845*/
  result = serde_core::ser::SerializeMap::serialize_entry::h068109d964210d2f( /*0x10033a85d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_630,
             5,
             a1 + 24);
  if ( !result ) /*0x10033a865*/
  {
    if ( (_BYTE)v9 ) /*0x10033a876*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a876*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033a89e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_631,
               11,
               a1 + 200);
    if ( result ) /*0x10033a8a6*/
      return result; /*0x10033a8a6*/
    if ( (_BYTE)v9 ) /*0x10033a8ac*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a8ac*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc99d747ac02e2d6d( /*0x10033a8c5*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_632,
               8,
               a1 + 224);
    if ( result ) /*0x10033a8cd*/
      return result; /*0x10033a8cd*/
    if ( (_BYTE)v9 ) /*0x10033a8d3*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a882*/
    result = serde_core::ser::SerializeMap::serialize_entry::haea170aac3a966f2( /*0x10033a8ec*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_633,
               13,
               a1 + 328);
    if ( !result ) /*0x10033a8f4*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h4dc630a8364621dd( /*0x10033a901*/
                 &v9,
                 a1);
      if ( !result ) /*0x10033a909*/
      {
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hd4ff209cc13b2aff( /*0x10033a91d*/
                   &v9,
                   a1 + 272);
        if ( !result ) /*0x10033a925*/
        {
          result = 0; /*0x10033a92b*/
          if ( (v9 & 1) == 0 ) /*0x10033a931*/
          {
            if ( HIBYTE(v9) ) /*0x10033a93b*/
            {
              alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10033a954*/
                *v10,
                &anon_b0ee9adff4519c22b647af231a5a39fa_15,
                1);
              return 0; /*0x10033a959*/
            }
          }
        }
      }
    }
  }
  return result; /*0x10033a867*/
}