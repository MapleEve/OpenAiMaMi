// __ZN13codexmate_lib4core6models1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceHistoryEntry$GT$9serialize @ 0x10033c0a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceHistoryEntry$GT$::serialize::h8155513df1942c4e(
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

  v6 = *(_QWORD **)a2; /*0x10033c0b0*/
  ++*(_QWORD *)(a2 + 24); /*0x10033c0b3*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10033c0b7*/
  v7 = v6[2]; /*0x10033c0bb*/
  if ( *v6 == v7 ) /*0x10033c0c2*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10033c488*/
    v7 = v6[2]; /*0x10033c490*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10033c0cc*/
  v6[2] = v7 + 1; /*0x10033c0d3*/
  v9 = 256; /*0x10033c0d7*/
  v10 = a2; /*0x10033c0dd*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c0f5*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1 + 16);
  if ( !result ) /*0x10033c0fd*/
  {
    if ( !(_BYTE)v9 ) /*0x10033c10e*/
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c133*/
                 &v9,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_695,
                 10,
                 a1 + 40);
      if ( result ) /*0x10033c13b*/
        return result; /*0x10033c13b*/
      if ( !(_BYTE)v9 ) /*0x10033c141*/
      {
        result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c157*/
                   &v9,
                   &anon_b0ee9adff4519c22b647af231a5a39fa_696,
                   13,
                   a1 + 64);
        if ( result ) /*0x10033c15f*/
          return result; /*0x10033c15f*/
        if ( !(_BYTE)v9 ) /*0x10033c165*/
        {
          result = serde_core::ser::SerializeMap::serialize_entry::h838d618defddccd1( /*0x10033c17e*/
                     &v9,
                     &anon_b0ee9adff4519c22b647af231a5a39fa_697,
                     12,
                     a1 + 432);
          if ( result ) /*0x10033c186*/
            return result; /*0x10033c186*/
          if ( !(_BYTE)v9 ) /*0x10033c190*/
          {
            result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c1aa*/
                       &v9,
                       &anon_b0ee9adff4519c22b647af231a5a39fa_698,
                       13,
                       a1 + 88);
            if ( result ) /*0x10033c1b2*/
              return result; /*0x10033c1b2*/
            if ( !(_BYTE)v9 ) /*0x10033c1bc*/
            {
              result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c1d6*/
                         &v9,
                         &anon_b0ee9adff4519c22b647af231a5a39fa_699,
                         7,
                         a1 + 112);
              if ( result ) /*0x10033c1de*/
                return result; /*0x10033c1de*/
              if ( !(_BYTE)v9 ) /*0x10033c1e8*/
              {
                result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c205*/
                           &v9,
                           &anon_b0ee9adff4519c22b647af231a5a39fa_700,
                           12,
                           a1 + 136);
                if ( result ) /*0x10033c20d*/
                  return result; /*0x10033c20d*/
                if ( !(_BYTE)v9 ) /*0x10033c217*/
                {
                  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c234*/
                             &v9,
                             &anon_b0ee9adff4519c22b647af231a5a39fa_701,
                             12,
                             a1 + 160);
                  if ( result ) /*0x10033c23c*/
                    return result; /*0x10033c23c*/
                  if ( !(_BYTE)v9 ) /*0x10033c246*/
                  {
                    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c263*/
                               &v9,
                               &anon_b0ee9adff4519c22b647af231a5a39fa_702,
                               13,
                               a1 + 184);
                    if ( result ) /*0x10033c26b*/
                      return result; /*0x10033c26b*/
                    if ( !(_BYTE)v9 ) /*0x10033c275*/
                    {
                      result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c292*/
                                 &v9,
                                 &anon_b0ee9adff4519c22b647af231a5a39fa_703,
                                 14,
                                 a1 + 208);
                      if ( result ) /*0x10033c29a*/
                        return result; /*0x10033c29a*/
                      if ( !(_BYTE)v9 ) /*0x10033c2a4*/
                      {
                        result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c2c1*/
                                   &v9,
                                   &anon_b0ee9adff4519c22b647af231a5a39fa_704,
                                   13,
                                   a1 + 232);
                        if ( result ) /*0x10033c2c9*/
                          return result; /*0x10033c2c9*/
                        if ( !(_BYTE)v9 ) /*0x10033c2d3*/
                        {
                          result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c2f0*/
                                     &v9,
                                     &anon_b0ee9adff4519c22b647af231a5a39fa_448,
                                     6,
                                     a1 + 256);
                          if ( result ) /*0x10033c2f8*/
                            return result; /*0x10033c2f8*/
                          if ( !(_BYTE)v9 ) /*0x10033c302*/
                          {
                            result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10033c31f*/
                                       &v9,
                                       &anon_b0ee9adff4519c22b647af231a5a39fa_705,
                                       15,
                                       a1 + 376);
                            if ( result ) /*0x10033c327*/
                              return result; /*0x10033c327*/
                            if ( !(_BYTE)v9 ) /*0x10033c331*/
                            {
                              result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c34e*/
                                         &v9,
                                         &anon_b0ee9adff4519c22b647af231a5a39fa_706,
                                         11,
                                         a1 + 280);
                              if ( result ) /*0x10033c356*/
                                return result; /*0x10033c356*/
                              if ( !(_BYTE)v9 ) /*0x10033c360*/
                              {
                                result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c37d*/
                                           &v9,
                                           &anon_b0ee9adff4519c22b647af231a5a39fa_707,
                                           8,
                                           a1 + 304);
                                if ( result ) /*0x10033c385*/
                                  return result; /*0x10033c385*/
                                if ( !(_BYTE)v9 ) /*0x10033c38f*/
                                {
                                  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c3ac*/
                                             &v9,
                                             &anon_b0ee9adff4519c22b647af231a5a39fa_708,
                                             11,
                                             a1 + 328);
                                  if ( result ) /*0x10033c3b4*/
                                    return result; /*0x10033c3b4*/
                                  if ( !(_BYTE)v9 ) /*0x10033c3be*/
                                  {
                                    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10033c3db*/
                                               &v9,
                                               &anon_b0ee9adff4519c22b647af231a5a39fa_709,
                                               10,
                                               a1 + 352);
                                    if ( result ) /*0x10033c3e3*/
                                      return result; /*0x10033c3e3*/
                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h96d5e2ad730c2b76( /*0x10033c3f0*/
                                               &v9,
                                               a1);
                                    if ( result ) /*0x10033c3f8*/
                                      return result; /*0x10033c3f8*/
                                    if ( !(_BYTE)v9 ) /*0x10033c402*/
                                    {
                                      result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10033c41f*/
                                                 &v9,
                                                 &anon_b0ee9adff4519c22b647af231a5a39fa_711,
                                                 12,
                                                 a1 + 400);
                                      if ( result ) /*0x10033c427*/
                                        return result; /*0x10033c427*/
                                      if ( !(_BYTE)v9 ) /*0x10033c431*/
                                      {
                                        result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10033c451*/
                                                   &v9,
                                                   &anon_b0ee9adff4519c22b647af231a5a39fa_422,
                                                   9,
                                                   a1 + 424);
                                        if ( !result ) /*0x10033c459*/
                                        {
                                          _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v9); /*0x10033c463*/
                                          return 0; /*0x10033c468*/
                                        }
                                        return result; /*0x10033c468*/
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
    }
    return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033c11a*/
  }
  return result; /*0x10033c0ff*/
}