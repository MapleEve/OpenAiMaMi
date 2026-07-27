// __ZN13codexmate_lib4core6models1_100_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountSummary$GT$9serialize @ 0x100339b90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountSummary$GT$::serialize::h7e7aadcd4e0ee95a(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int16 v10; // [rsp+0h] [rbp-30h] BYREF
  _QWORD *v11; // [rsp+8h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 160); /*0x100339ba2*/
  v7 = *a2; /*0x100339ba9*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x100339bac*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x100339bb3*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100339fdd*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v8 = *(_QWORD *)(v7 + 16); /*0x100339fe5*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x100339bbd*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x100339bc4*/
  v10 = 256; /*0x100339bc8*/
  v11 = a2; /*0x100339bce*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100339be9*/
             &v10,
             &anon_b0ee9adff4519c22b647af231a5a39fa_30,
             10,
             a1 + 184);
  if ( !result ) /*0x100339bf1*/
  {
    if ( (_BYTE)v10 ) /*0x100339c04*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339c04*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100339c2e*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_602,
               5,
               a1 + 208);
    if ( result ) /*0x100339c36*/
      return result; /*0x100339c36*/
    if ( (_BYTE)v10 ) /*0x100339c3c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339c3c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100339c55*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_603,
               5,
               a1 + 232);
    if ( result ) /*0x100339c5d*/
      return result; /*0x100339c5d*/
    if ( (_BYTE)v10 ) /*0x100339c63*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339c63*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100339c7c*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_604,
               11,
               a1 + 256);
    if ( result ) /*0x100339c84*/
      return result; /*0x100339c84*/
    if ( (_BYTE)v10 ) /*0x100339c8e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339c8e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100339cab*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_605,
               13,
               a1 + 280);
    if ( result ) /*0x100339cb3*/
      return result; /*0x100339cb3*/
    if ( (_BYTE)v10 ) /*0x100339cbd*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339cbd*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100339cda*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_606,
               11,
               a1 + 304);
    if ( result ) /*0x100339ce2*/
      return result; /*0x100339ce2*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h2d7fdbfffdc6dc3f( /*0x100339cf3*/
               &v10,
               a1 + 344);
    if ( result ) /*0x100339cfb*/
      return result; /*0x100339cfb*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hebe0237ee95d6f90( /*0x100339d0c*/
               &v10,
               a1 + 341);
    if ( result ) /*0x100339d14*/
      return result; /*0x100339d14*/
    if ( (_BYTE)v10 ) /*0x100339d1e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339d1e*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x100339d37*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_608,
               14,
               a1);
    if ( result ) /*0x100339d3f*/
      return result; /*0x100339d3f*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::haa6071e46c53a3b1( /*0x100339d50*/
               &v10,
               a1 + 336);
    if ( result ) /*0x100339d58*/
      return result; /*0x100339d58*/
    if ( (_BYTE)v10 ) /*0x100339d62*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339d62*/
    result = serde_core::ser::SerializeMap::serialize_entry::he21b920816c38598( /*0x100339d7f*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_610,
               21,
               a1 + 339);
    if ( result ) /*0x100339d87*/
      return result; /*0x100339d87*/
    if ( (_BYTE)v10 ) /*0x100339d91*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339d91*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x100339dab*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_611,
               21,
               a1 + 16);
    if ( result ) /*0x100339db3*/
      return result; /*0x100339db3*/
    if ( (_BYTE)v10 ) /*0x100339dbd*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339dbd*/
    result = serde_core::ser::SerializeMap::serialize_entry::he21b920816c38598( /*0x100339dda*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_612,
               21,
               a1 + 340);
    if ( result ) /*0x100339de2*/
      return result; /*0x100339de2*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb1e43da328cc39b7( /*0x100339df3*/
               &v10,
               a1 + 342);
    if ( result ) /*0x100339dfb*/
      return result; /*0x100339dfb*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h3682039d28d46631( /*0x100339e0c*/
               &v10,
               a1 + 343);
    if ( result ) /*0x100339e14*/
      return result; /*0x100339e14*/
    if ( (_BYTE)v10 ) /*0x100339e1e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339e1e*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x100339e38*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_615,
               22,
               a1 + 32);
    if ( result ) /*0x100339e40*/
      return result; /*0x100339e40*/
    if ( (_BYTE)v10 ) /*0x100339e4a*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339e4a*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100339e67*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_616,
               8,
               a1 + 337);
    if ( result ) /*0x100339e6f*/
      return result; /*0x100339e6f*/
    if ( (_BYTE)v10 ) /*0x100339e79*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339e79*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x100339e96*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_422,
               9,
               a1 + 328);
    if ( result ) /*0x100339e9e*/
      return result; /*0x100339e9e*/
    if ( (_BYTE)v10 ) /*0x100339ea8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339ea8*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x100339ec2*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_617,
               10,
               a1 + 48);
    if ( result ) /*0x100339eca*/
      return result; /*0x100339eca*/
    if ( (_BYTE)v10 ) /*0x100339ed4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339ed4*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x100339eee*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_618,
               11,
               a1 + 64);
    if ( result ) /*0x100339ef6*/
      return result; /*0x100339ef6*/
    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h575cf43b7c7716f5( /*0x100339f07*/
               &v10,
               a1 + 338);
    if ( result ) /*0x100339f0f*/
      return result; /*0x100339f0f*/
    if ( (_BYTE)v10 ) /*0x100339f19*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339f19*/
    result = serde_core::ser::SerializeMap::serialize_entry::h199be8ca7babe5ef( /*0x100339f33*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_33,
               13,
               a1 + 80);
    if ( result ) /*0x100339f3b*/
      return result; /*0x100339f3b*/
    if ( (_BYTE)v10 ) /*0x100339f45*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100339c12*/
    result = serde_core::ser::SerializeMap::serialize_entry::h199be8ca7babe5ef( /*0x100339f5f*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_34,
               15,
               a1 + 120);
    if ( !result /*0x100339f89*/
      && ((_DWORD)v6 == 2
       || (result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h60679c62059cf216(
                      &v10,
                      a1 + 160)) == 0) )
    {
      result = 0; /*0x100339f8f*/
      if ( (v10 & 1) == 0 ) /*0x100339f95*/
      {
        if ( HIBYTE(v10) ) /*0x100339f9f*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100339fb8*/
            *v11,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100339fbd*/
        }
      }
    }
  }
  return result; /*0x100339bf3*/
}