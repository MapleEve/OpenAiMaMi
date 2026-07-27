// __ZN13codexmate_lib4core5relay6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayProvider$GT$9serialize @ 0x10032ed50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayProvider$GT$::serialize::h4956d472f3f9ba05(
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

  v6 = *(_QWORD **)a2; /*0x10032ed60*/
  ++*(_QWORD *)(a2 + 24); /*0x10032ed63*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10032ed67*/
  v7 = v6[2]; /*0x10032ed6b*/
  if ( *v6 == v7 ) /*0x10032ed72*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10032f06c*/
    v7 = v6[2]; /*0x10032f074*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10032ed7c*/
  v6[2] = v7 + 1; /*0x10032ed83*/
  LOWORD(v10) = 256; /*0x10032ed87*/
  v11 = a2; /*0x10032ed8d*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032eda4*/
             &v10,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1);
  if ( !result ) /*0x10032edac*/
  {
    if ( (_BYTE)v10 ) /*0x10032edb2*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032edb9*/
    result = serde_core::ser::SerializeMap::serialize_entry::ha168e1e50f37c618( /*0x10032edd2*/
               &v10,
               &anon_b0ee9adff4519c22b647af231a5a39fa_411,
               3,
               a1 + 232);
    if ( !result ) /*0x10032edda*/
    {
      if ( (_BYTE)v10 ) /*0x10032edeb*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032edeb*/
      result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032ee01*/
                 &v10,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_55,
                 4,
                 a1 + 24);
      if ( !result ) /*0x10032ee09*/
      {
        if ( (_BYTE)v10 ) /*0x10032ee0f*/
          return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ee0f*/
        result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032ee25*/
                   &v10,
                   &anon_b0ee9adff4519c22b647af231a5a39fa_412,
                   7,
                   a1 + 48);
        if ( !result ) /*0x10032ee2d*/
        {
          if ( (_BYTE)v10 ) /*0x10032ee33*/
            return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ee33*/
          result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x10032ee50*/
                     &v10,
                     &anon_b0ee9adff4519c22b647af231a5a39fa_413,
                     12,
                     a1 + 228);
          if ( !result ) /*0x10032ee58*/
          {
            if ( (_BYTE)v10 ) /*0x10032ee5e*/
              return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ee5e*/
            result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032ee78*/
                       &v10,
                       &anon_b0ee9adff4519c22b647af231a5a39fa_414,
                       5,
                       a1 + 96);
            if ( !result ) /*0x10032ee80*/
            {
              result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hde705a82e2639286( /*0x10032ee91*/
                         &v10,
                         a1 + 230);
              if ( !result ) /*0x10032ee99*/
              {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hd7d3867f338a740f( /*0x10032eeaa*/
                           &v10,
                           a1 + 231);
                if ( !result ) /*0x10032eeb2*/
                {
                  result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::heb6e0044434b17b3( /*0x10032eec0*/
                             &v10,
                             a1 + 120);
                  if ( !result ) /*0x10032eec8*/
                  {
                    if ( (_BYTE)v10 ) /*0x10032eed2*/
                      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032eed2*/
                    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10032eeef*/
                               &v10,
                               &anon_b0ee9adff4519c22b647af231a5a39fa_418,
                               12,
                               a1 + 144);
                    if ( !result ) /*0x10032eef7*/
                    {
                      if ( (_BYTE)v10 ) /*0x10032ef01*/
                        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ef01*/
                      result = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x10032ef1e*/
                                 &v10,
                                 &anon_b0ee9adff4519c22b647af231a5a39fa_419,
                                 11,
                                 a1 + 224);
                      if ( !result ) /*0x10032ef26*/
                      {
                        if ( (_BYTE)v10 ) /*0x10032ef30*/
                          return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ef30*/
                        result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10032ef4d*/
                                   &v10,
                                   &anon_b0ee9adff4519c22b647af231a5a39fa_420,
                                   9,
                                   a1 + 192);
                        if ( !result ) /*0x10032ef55*/
                        {
                          if ( (_BYTE)v10 ) /*0x10032ef5f*/
                            return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ef5f*/
                          result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10032ef7c*/
                                     &v10,
                                     &anon_b0ee9adff4519c22b647af231a5a39fa_421,
                                     12,
                                     a1 + 200);
                          if ( !result ) /*0x10032ef84*/
                          {
                            if ( (_BYTE)v10 ) /*0x10032ef8e*/
                              return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032ef8e*/
                            result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10032efab*/
                                       &v10,
                                       &anon_b0ee9adff4519c22b647af231a5a39fa_422,
                                       9,
                                       a1 + 208);
                            if ( !result ) /*0x10032efb3*/
                            {
                              if ( (_BYTE)v10 ) /*0x10032efbd*/
                                return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032efbd*/
                              result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10032efda*/
                                         &v10,
                                         &anon_b0ee9adff4519c22b647af231a5a39fa_27,
                                         9,
                                         a1 + 216);
                              if ( !result ) /*0x10032efe2*/
                              {
                                if ( (_BYTE)v10 ) /*0x10032efec*/
                                  return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032efec*/
                                result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10032f009*/
                                           &v10,
                                           &anon_b0ee9adff4519c22b647af231a5a39fa_423,
                                           9,
                                           a1 + 168);
                                if ( !result ) /*0x10032f011*/
                                {
                                  result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h5cc7984ea6706fd5( /*0x10032f025*/
                                             &v10,
                                             a1 + 229);
                                  if ( !result ) /*0x10032f02d*/
                                  {
                                    v9[1] = v11; /*0x10032f03b*/
                                    v9[0] = v10; /*0x10032f03f*/
                                    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(v9); /*0x10032f047*/
                                    return 0; /*0x10032f04c*/
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x10032eddc*/
}