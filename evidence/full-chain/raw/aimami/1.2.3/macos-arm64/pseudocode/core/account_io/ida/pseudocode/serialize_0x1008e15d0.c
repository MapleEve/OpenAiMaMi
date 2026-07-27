// __ZN13codexmate_lib4core10account_io1_105_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..account_io..ExportedAccount$GT$9serialize @ 0x1008e15d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::account_io::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..account_io..ExportedAccount$GT$::serialize::h9f169c229dc8dfc7(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int16 v10; // [rsp+8h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-20h]

  v7 = *(_QWORD **)a2; /*0x1008e15e0*/
  ++*(_QWORD *)(a2 + 24); /*0x1008e15e3*/
  *(_BYTE *)(a2 + 32) = 0; /*0x1008e15e7*/
  v8 = v7[2]; /*0x1008e15eb*/
  if ( *v7 == v8 ) /*0x1008e15f2*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a7); /*0x1008e189e*/
    v8 = v7[2]; /*0x1008e18a6*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x1008e15fc*/
  v7[2] = v8 + 1; /*0x1008e1603*/
  v10 = 256; /*0x1008e1607*/
  v11 = a2; /*0x1008e160d*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(&v10, &unk_101676707, 10, a1 + 32); /*0x1008e1625*/
  if ( !result ) /*0x1008e162d*/
  {
    if ( (_BYTE)v10 ) /*0x1008e163e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e163e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(&v10, &unk_101676711, 5, a1 + 56); /*0x1008e1663*/
    if ( result ) /*0x1008e166b*/
      return result; /*0x1008e166b*/
    if ( (_BYTE)v10 ) /*0x1008e1671*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e1671*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(&v10, &unk_101676716, 5, a1 + 80); /*0x1008e1687*/
    if ( result ) /*0x1008e168f*/
      return result; /*0x1008e168f*/
    if ( (_BYTE)v10 ) /*0x1008e1695*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e1695*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa(&v10, &unk_10167671B, 11, a1 + 152); /*0x1008e16ae*/
    if ( result ) /*0x1008e16b6*/
      return result; /*0x1008e16b6*/
    if ( (_BYTE)v10 ) /*0x1008e16c0*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e16c0*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa(&v10, &unk_101676726, 13, a1 + 176); /*0x1008e16dd*/
    if ( result ) /*0x1008e16e5*/
      return result; /*0x1008e16e5*/
    if ( (_BYTE)v10 ) /*0x1008e16ef*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e16ef*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa(&v10, &unk_101676733, 11, a1 + 200); /*0x1008e170c*/
    if ( result ) /*0x1008e1714*/
      return result; /*0x1008e1714*/
    if ( (_BYTE)v10 ) /*0x1008e171e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e171e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x1008e1738*/
               &v10,
               "plannonehosttoolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
               4,
               a1 + 104);
    if ( result ) /*0x1008e1740*/
      return result; /*0x1008e1740*/
    if ( (_BYTE)v10 ) /*0x1008e174a*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e174a*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(&v10, &unk_1016021E0, 8, a1 + 128); /*0x1008e1767*/
    if ( result ) /*0x1008e176f*/
      return result; /*0x1008e176f*/
    if ( (_BYTE)v10 ) /*0x1008e1779*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e1779*/
    result = serde_core::ser::SerializeMap::serialize_entry::h23a74540ff12e1b1(&v10, &unk_10167673E, 21, a1 + 408); /*0x1008e1796*/
    if ( result ) /*0x1008e179e*/
      return result; /*0x1008e179e*/
    if ( (_BYTE)v10 ) /*0x1008e17a8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e17a8*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989(&v10, &unk_101676753, 21, a1); /*0x1008e17c1*/
    if ( result ) /*0x1008e17c9*/
      return result; /*0x1008e17c9*/
    if ( (_BYTE)v10 ) /*0x1008e17d3*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e17d3*/
    result = serde_core::ser::SerializeMap::serialize_entry::h23a74540ff12e1b1(&v10, &unk_101676768, 21, a1 + 409); /*0x1008e17f0*/
    if ( result ) /*0x1008e17f8*/
      return result; /*0x1008e17f8*/
    if ( (_BYTE)v10 ) /*0x1008e1802*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e1802*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5(&v10, &unk_10167677D, 9, a1 + 400); /*0x1008e181f*/
    if ( result ) /*0x1008e1827*/
      return result; /*0x1008e1827*/
    if ( (_BYTE)v10 ) /*0x1008e1831*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1008e164a*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989(&v10, &unk_101676786, 10, a1 + 16); /*0x1008e184b*/
    if ( !result ) /*0x1008e1853*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h52311148ca8fa249( /*0x1008e1867*/
                 &v10,
                 a1 + 224);
      if ( !result ) /*0x1008e186f*/
      {
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v10); /*0x1008e1879*/
        return 0; /*0x1008e187e*/
      }
    }
  }
  return result; /*0x1008e162f*/
}