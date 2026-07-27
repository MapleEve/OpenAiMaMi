// __ZN13codexmate_lib4core5relay6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayProvider$GT$9serialize @ 0x10032ea00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayProvider$GT$::serialize::h355987d4b8124e1f(
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

  v6 = *a2; /*0x10032ea10*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10032ea13*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10032ea1a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10032ed39*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10032ed41*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10032ea24*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10032ea2b*/
  v9 = 256; /*0x10032ea2f*/
  v10 = a2; /*0x10032ea35*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10032ea4c*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1);
  if ( !result ) /*0x10032ea54*/
  {
    if ( (_BYTE)v9 ) /*0x10032ea65*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ea65*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9db08708d1bdd779( /*0x10032ea8d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_411,
               3,
               a1 + 232);
    if ( result ) /*0x10032ea95*/
      return result; /*0x10032ea95*/
    if ( (_BYTE)v9 ) /*0x10032ea9b*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ea9b*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10032eab1*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_55,
               4,
               a1 + 24);
    if ( result ) /*0x10032eab9*/
      return result; /*0x10032eab9*/
    if ( (_BYTE)v9 ) /*0x10032eabf*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032eabf*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10032ead5*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_412,
               7,
               a1 + 48);
    if ( result ) /*0x10032eadd*/
      return result; /*0x10032eadd*/
    if ( (_BYTE)v9 ) /*0x10032eae7*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032eae7*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10032eb04*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_413,
               12,
               a1 + 228);
    if ( result ) /*0x10032eb0c*/
      return result; /*0x10032eb0c*/
    if ( (_BYTE)v9 ) /*0x10032eb16*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032eb16*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10032eb30*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_414,
               5,
               a1 + 96);
    if ( result ) /*0x10032eb38*/
      return result; /*0x10032eb38*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h50738a7249555d4c( /*0x10032eb49*/
               &v9,
               a1 + 230);
    if ( result ) /*0x10032eb51*/
      return result; /*0x10032eb51*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hed3f1d17bfc2456c( /*0x10032eb62*/
               &v9,
               a1 + 231);
    if ( result ) /*0x10032eb6a*/
      return result; /*0x10032eb6a*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h0de612714b454d3f( /*0x10032eb78*/
               &v9,
               a1 + 120);
    if ( result ) /*0x10032eb80*/
      return result; /*0x10032eb80*/
    if ( (_BYTE)v9 ) /*0x10032eb8a*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032eb8a*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10032eba7*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_418,
               12,
               a1 + 144);
    if ( result ) /*0x10032ebaf*/
      return result; /*0x10032ebaf*/
    if ( (_BYTE)v9 ) /*0x10032ebb9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ebb9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10032ebd6*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_419,
               11,
               a1 + 224);
    if ( result ) /*0x10032ebde*/
      return result; /*0x10032ebde*/
    if ( (_BYTE)v9 ) /*0x10032ebe8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ebe8*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10032ec05*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_420,
               9,
               a1 + 192);
    if ( result ) /*0x10032ec0d*/
      return result; /*0x10032ec0d*/
    if ( (_BYTE)v9 ) /*0x10032ec17*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ec17*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10032ec34*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_421,
               12,
               a1 + 200);
    if ( result ) /*0x10032ec3c*/
      return result; /*0x10032ec3c*/
    if ( (_BYTE)v9 ) /*0x10032ec46*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ec46*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10032ec63*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_422,
               9,
               a1 + 208);
    if ( result ) /*0x10032ec6b*/
      return result; /*0x10032ec6b*/
    if ( (_BYTE)v9 ) /*0x10032ec75*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ec75*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10032ec92*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_27,
               9,
               a1 + 216);
    if ( result ) /*0x10032ec9a*/
      return result; /*0x10032ec9a*/
    if ( (_BYTE)v9 ) /*0x10032eca4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ea71*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10032ecc1*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_423,
               9,
               a1 + 168);
    if ( !result ) /*0x10032ecc9*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h17d88bd7250fec5c( /*0x10032ecdd*/
                 &v9,
                 a1 + 229);
      if ( !result ) /*0x10032ece5*/
      {
        result = 0; /*0x10032eceb*/
        if ( (v9 & 1) == 0 ) /*0x10032ecf1*/
        {
          if ( HIBYTE(v9) ) /*0x10032ecfb*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10032ed14*/
              *v10,
              &anon_b0ee9adff4519c22b647af231a5a39fa_15,
              1);
            return 0; /*0x10032ed19*/
          }
        }
      }
    }
  }
  return result; /*0x10032ea56*/
}