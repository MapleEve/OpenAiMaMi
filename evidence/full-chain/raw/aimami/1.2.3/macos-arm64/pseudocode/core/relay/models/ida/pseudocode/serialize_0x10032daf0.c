// __ZN13codexmate_lib4core5relay6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayState$GT$9serialize @ 0x10032daf0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayState$GT$::serialize::hd090e36434aa2bb5(
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
  _QWORD v9[2]; // [rsp+8h] [rbp-38h] BYREF
  __int64 v10; // [rsp+18h] [rbp-28h] BYREF
  __int64 v11; // [rsp+20h] [rbp-20h]

  v6 = *(_QWORD **)a2; /*0x10032db00*/
  ++*(_QWORD *)(a2 + 24); /*0x10032db03*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10032db07*/
  v7 = v6[2]; /*0x10032db0b*/
  if ( *v6 == v7 ) /*0x10032db12*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10032dc61*/
    v7 = v6[2]; /*0x10032dc69*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10032db1c*/
  v6[2] = v7 + 1; /*0x10032db23*/
  LOWORD(v10) = 256; /*0x10032db27*/
  v11 = a2; /*0x10032db2d*/
  result = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x10032db48*/
             &v10,
             &anon_b0ee9adff4519c22b647af231a5a39fa_26,
             13,
             a1 + 288);
  if ( !result ) /*0x10032db50*/
  {
    if ( (_BYTE)v10 ) /*0x10032db56*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032db5d*/
    result = serde_core::ser::SerializeMap::serialize_entry::hfc763dd55d3dd445( /*0x10032db72*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_399,
               9,
               a1);
    if ( !result ) /*0x10032db7a*/
    {
      if ( (_BYTE)v10 ) /*0x10032db8b*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032db8b*/
      result = serde_core::ser::SerializeMap::serialize_entry::h8822c8aa1b9edadf( /*0x10032dba1*/
                 &v10,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_400,
                 11,
                 a1 + 24);
      if ( !result ) /*0x10032dba9*/
      {
        if ( (_BYTE)v10 ) /*0x10032dbaf*/
          return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032dbaf*/
        result = serde_core::ser::SerializeMap::serialize_entry::hfeeab83269b55838( /*0x10032dbc5*/
                   &v10,
                   &anon_b0ee9adff4519c22b647af231a5a39fa_283,
                   5,
                   a1 + 48);
        if ( !result ) /*0x10032dbcd*/
        {
          if ( (_BYTE)v10 ) /*0x10032dbd3*/
            return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032dbd3*/
          result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x10032dbec*/
                     &v10,
                     &anon_b0ee9adff4519c22b647af231a5a39fa_401,
                     18,
                     a1 + 292);
          if ( !result ) /*0x10032dbf4*/
          {
            if ( (_BYTE)v10 ) /*0x10032dbfa*/
              return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032dbfa*/
            result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x10032dc1a*/
                       &v10,
                       &anon_b0ee9adff4519c22b647af231a5a39fa_402,
                       24,
                       a1 + 293);
            if ( !result ) /*0x10032dc22*/
            {
              v9[1] = v11; /*0x10032dc30*/
              v9[0] = v10; /*0x10032dc34*/
              _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(v9); /*0x10032dc3c*/
              return 0; /*0x10032dc41*/
            }
          }
        }
      }
    }
  }
  return result; /*0x10032db7c*/
}