// __ZN13codexmate_lib4core6models1_100_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountSummary$GT$9serialize @ 0x100339ff0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountSummary$GT$::serialize::hd9ace356f3e52689(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int16 v10; // [rsp+0h] [rbp-30h] BYREF
  __int64 v11; // [rsp+8h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 160); /*0x10033a002*/
  v7 = *(_QWORD **)a2; /*0x10033a009*/
  ++*(_QWORD *)(a2 + 24); /*0x10033a00c*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10033a010*/
  v8 = v7[2]; /*0x10033a014*/
  if ( *v7 == v8 ) /*0x10033a01b*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a6); /*0x10033a420*/
    v8 = v7[2]; /*0x10033a428*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x10033a025*/
  v7[2] = v8 + 1; /*0x10033a02c*/
  v10 = 256; /*0x10033a030*/
  v11 = a2; /*0x10033a036*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033a051*/
             &v10,
             &anon_b0ee9adff4519c22b647af231a5a39fa_30,
             10,
             a1 + 184);
  if ( !result ) /*0x10033a059*/
  {
    if ( (_BYTE)v10 ) /*0x10033a06c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a06c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033a096*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_602,
               5,
               a1 + 208);
    if ( result ) /*0x10033a09e*/
      return result; /*0x10033a09e*/
    if ( (_BYTE)v10 ) /*0x10033a0a4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a0a4*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033a0bd*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_603,
               5,
               a1 + 232);
    if ( result ) /*0x10033a0c5*/
      return result; /*0x10033a0c5*/
    if ( (_BYTE)v10 ) /*0x10033a0cb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a0cb*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10033a0e4*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_604,
               11,
               a1 + 256);
    if ( result ) /*0x10033a0ec*/
      return result; /*0x10033a0ec*/
    if ( (_BYTE)v10 ) /*0x10033a0f6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a0f6*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10033a113*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_605,
               13,
               a1 + 280);
    if ( result ) /*0x10033a11b*/
      return result; /*0x10033a11b*/
    if ( (_BYTE)v10 ) /*0x10033a125*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a125*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10033a142*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_606,
               11,
               a1 + 304);
    if ( result ) /*0x10033a14a*/
      return result; /*0x10033a14a*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h377e554ca4bb9ce5( /*0x10033a15b*/
               &v10,
               a1 + 344);
    if ( result ) /*0x10033a163*/
      return result; /*0x10033a163*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6fae227a4501c0fd( /*0x10033a174*/
               &v10,
               a1 + 341);
    if ( result ) /*0x10033a17c*/
      return result; /*0x10033a17c*/
    if ( (_BYTE)v10 ) /*0x10033a186*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a186*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x10033a19f*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_608,
               14,
               a1);
    if ( result ) /*0x10033a1a7*/
      return result; /*0x10033a1a7*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hee587afcd5d61930( /*0x10033a1b8*/
               &v10,
               a1 + 336);
    if ( result ) /*0x10033a1c0*/
      return result; /*0x10033a1c0*/
    if ( (_BYTE)v10 ) /*0x10033a1ca*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a1ca*/
    result = serde_core::ser::SerializeMap::serialize_entry::h23a74540ff12e1b1( /*0x10033a1e7*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_610,
               21,
               a1 + 339);
    if ( result ) /*0x10033a1ef*/
      return result; /*0x10033a1ef*/
    if ( (_BYTE)v10 ) /*0x10033a1f9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a1f9*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x10033a213*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_611,
               21,
               a1 + 16);
    if ( result ) /*0x10033a21b*/
      return result; /*0x10033a21b*/
    if ( (_BYTE)v10 ) /*0x10033a225*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a225*/
    result = serde_core::ser::SerializeMap::serialize_entry::h23a74540ff12e1b1( /*0x10033a242*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_612,
               21,
               a1 + 340);
    if ( result ) /*0x10033a24a*/
      return result; /*0x10033a24a*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hc201d862b2255fa0( /*0x10033a25b*/
               &v10,
               a1 + 342);
    if ( result ) /*0x10033a263*/
      return result; /*0x10033a263*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb1a7a337f249b7d0( /*0x10033a274*/
               &v10,
               a1 + 343);
    if ( result ) /*0x10033a27c*/
      return result; /*0x10033a27c*/
    if ( (_BYTE)v10 ) /*0x10033a286*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a286*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x10033a2a0*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_615,
               22,
               a1 + 32);
    if ( result ) /*0x10033a2a8*/
      return result; /*0x10033a2a8*/
    if ( (_BYTE)v10 ) /*0x10033a2b2*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a2b2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x10033a2cf*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_616,
               8,
               a1 + 337);
    if ( result ) /*0x10033a2d7*/
      return result; /*0x10033a2d7*/
    if ( (_BYTE)v10 ) /*0x10033a2e1*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a2e1*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10033a2fe*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_422,
               9,
               a1 + 328);
    if ( result ) /*0x10033a306*/
      return result; /*0x10033a306*/
    if ( (_BYTE)v10 ) /*0x10033a310*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a310*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x10033a32a*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_617,
               10,
               a1 + 48);
    if ( result ) /*0x10033a332*/
      return result; /*0x10033a332*/
    if ( (_BYTE)v10 ) /*0x10033a33c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a33c*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x10033a356*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_618,
               11,
               a1 + 64);
    if ( result ) /*0x10033a35e*/
      return result; /*0x10033a35e*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h738828cdeaeef152( /*0x10033a36f*/
               &v10,
               a1 + 338);
    if ( result ) /*0x10033a377*/
      return result; /*0x10033a377*/
    if ( (_BYTE)v10 ) /*0x10033a381*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a381*/
    result = serde_core::ser::SerializeMap::serialize_entry::h693b71da87627dc7( /*0x10033a39b*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_33,
               13,
               a1 + 80);
    if ( result ) /*0x10033a3a3*/
      return result; /*0x10033a3a3*/
    if ( (_BYTE)v10 ) /*0x10033a3ad*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033a07a*/
    result = serde_core::ser::SerializeMap::serialize_entry::h693b71da87627dc7( /*0x10033a3c7*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_34,
               15,
               a1 + 120);
    if ( !result /*0x10033a3f1*/
      && ((_DWORD)v6 == 2
       || (result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6798f2afedc456e4(
                      &v10,
                      a1 + 160)) == 0) )
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v10); /*0x10033a3fb*/
      return 0; /*0x10033a400*/
    }
  }
  return result; /*0x10033a05b*/
}