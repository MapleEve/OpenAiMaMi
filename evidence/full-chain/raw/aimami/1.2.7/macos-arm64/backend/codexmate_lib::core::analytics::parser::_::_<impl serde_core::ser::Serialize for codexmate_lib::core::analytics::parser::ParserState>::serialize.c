// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..parser..ParserState$GT$::serialize::h18d3d24e5f482dcb; addr: 0x1009bd770; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:19Z
__int64 __fastcall codexmate_lib::core::analytics::parser::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..parser..ParserState$GT$::serialize::h18d3d24e5f482dcb(
        const char *a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 result; // rax
  __int16 v6; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+10h] [rbp-20h]

  v2 = *a2; /*0x1009bd780*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1009bd783*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1009bd78a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1009bdb4b*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1009bdb53*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1009bd794*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1009bd79b*/
  v6 = 256; /*0x1009bd79f*/
  v7 = a2; /*0x1009bd7a5*/
  v4 = (const char *)&anon_f3f46b48c4f9c057aa63801556530189_515; /*0x1009bd7b0*/
  result = serde_core::ser::SerializeMap::serialize_entry::hb32a3c2e86c26e45( /*0x1009bd7c0*/
             &v6,
             &anon_f3f46b48c4f9c057aa63801556530189_515,
             9,
             a1 + 160);
  if ( !result ) /*0x1009bd7c8*/
  {
    if ( (_BYTE)v6 ) /*0x1009bd7ce*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd7d5*/
    v4 = (const char *)&anon_f3f46b48c4f9c057aa63801556530189_583; /*0x1009bd7de*/
    result = serde_core::ser::SerializeMap::serialize_entry::h971e5d2d456a2749( /*0x1009bd7ee*/
               &v6,
               &anon_f3f46b48c4f9c057aa63801556530189_583,
               11,
               a1 + 504);
    if ( !result ) /*0x1009bd7f6*/
    {
      if ( (_BYTE)v6 ) /*0x1009bd807*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd807*/
      v4 = "incomplete"; /*0x1009bd810*/
      result = serde_core::ser::SerializeMap::serialize_entry::h971e5d2d456a2749(&v6, "incomplete", 10, a1 + 505); /*0x1009bd820*/
      if ( !result ) /*0x1009bd828*/
      {
        if ( (_BYTE)v6 ) /*0x1009bd82e*/
          return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd82e*/
        result = serde_core::ser::SerializeMap::serialize_entry::h63bd51431058d76c( /*0x1009bd847*/
                   &v6,
                   &anon_f3f46b48c4f9c057aa63801556530189_584,
                   16,
                   a1 + 496);
        if ( !result ) /*0x1009bd84f*/
        {
          v4 = a1 + 400; /*0x1009bd851*/
          result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::he4da7b3c470f970c( /*0x1009bd85c*/
                     &v6,
                     a1 + 400);
          if ( !result ) /*0x1009bd864*/
          {
            if ( (_BYTE)v6 ) /*0x1009bd86a*/
              return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd86a*/
            result = serde_core::ser::SerializeMap::serialize_entry::h63bd51431058d76c( /*0x1009bd887*/
                       &v6,
                       &anon_f3f46b48c4f9c057aa63801556530189_586,
                       27,
                       a1 + 500);
            if ( !result ) /*0x1009bd88f*/
            {
              v4 = a1 + 32; /*0x1009bd895*/
              result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h69d125372d1d1e8e( /*0x1009bd89d*/
                         &v6,
                         a1 + 32);
              if ( !result ) /*0x1009bd8a5*/
              {
                if ( (_BYTE)v6 ) /*0x1009bd8af*/
                  return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd8af*/
                v4 = (const char *)&anon_f3f46b48c4f9c057aa63801556530189_581; /*0x1009bd8bc*/
                result = serde_core::ser::SerializeMap::serialize_entry::hb32a3c2e86c26e45( /*0x1009bd8cc*/
                           &v6,
                           &anon_f3f46b48c4f9c057aa63801556530189_581,
                           10,
                           a1 + 184);
                if ( !result ) /*0x1009bd8d4*/
                {
                  if ( (_BYTE)v6 ) /*0x1009bd8de*/
                    return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd8de*/
                  result = serde_core::ser::SerializeMap::serialize_entry::ha7e7f3cb0f6b5728( /*0x1009bd8fb*/
                             &v6,
                             &anon_f3f46b48c4f9c057aa63801556530189_570,
                             14,
                             a1 + 320);
                  if ( !result ) /*0x1009bd903*/
                  {
                    v4 = a1; /*0x1009bd90d*/
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h186ba63f80745bf0( /*0x1009bd910*/
                               &v6,
                               a1);
                    if ( !result ) /*0x1009bd918*/
                    {
                      if ( (_BYTE)v6 ) /*0x1009bd922*/
                        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd922*/
                      v4 = (const char *)&anon_f3f46b48c4f9c057aa63801556530189_587; /*0x1009bd92f*/
                      result = serde_core::ser::SerializeMap::serialize_entry::hb32a3c2e86c26e45( /*0x1009bd93f*/
                                 &v6,
                                 &anon_f3f46b48c4f9c057aa63801556530189_587,
                                 12,
                                 a1 + 208);
                      if ( !result ) /*0x1009bd947*/
                      {
                        if ( (_BYTE)v6 ) /*0x1009bd951*/
                          return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd951*/
                        v4 = "modelusagechoicesdeltafinish_reasoncontenttool_callsupstream_protocol_errorChat content or " /*0x1009bd95e*/
                             "conflicting finish_reason arrived after completionid";
                        result = serde_core::ser::SerializeMap::serialize_entry::ha7e7f3cb0f6b5728( /*0x1009bd96e*/
                                   &v6,
                                   "modelusagechoicesdeltafinish_reasoncontenttool_callsupstream_protocol_errorChat conte"
                                   "nt or conflicting finish_reason arrived after completionid",
                                   5,
                                   a1 + 344);
                        if ( !result ) /*0x1009bd976*/
                        {
                          if ( (_BYTE)v6 ) /*0x1009bd980*/
                            return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd980*/
                          v4 = (const char *)&anon_f3f46b48c4f9c057aa63801556530189_588; /*0x1009bd98a*/
                          result = serde_core::ser::SerializeMap::serialize_entry::hd63f84276f0da819( /*0x1009bd99a*/
                                     &v6,
                                     &anon_f3f46b48c4f9c057aa63801556530189_588,
                                     8,
                                     a1 + 16);
                          if ( !result ) /*0x1009bd9a2*/
                          {
                            if ( (_BYTE)v6 ) /*0x1009bd9ac*/
                              return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd9ac*/
                            result = serde_core::ser::SerializeMap::serialize_entry::h971e5d2d456a2749( /*0x1009bd9c9*/
                                       &v6,
                                       &anon_f3f46b48c4f9c057aa63801556530189_589,
                                       21,
                                       a1 + 506);
                            if ( !result ) /*0x1009bd9d1*/
                            {
                              v4 = a1 + 80; /*0x1009bd9d7*/
                              result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h664f610d2678657d( /*0x1009bd9df*/
                                         &v6,
                                         a1 + 80);
                              if ( !result ) /*0x1009bd9e7*/
                              {
                                if ( (_BYTE)v6 ) /*0x1009bd9f1*/
                                  return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bd9f1*/
                                result = serde_core::ser::SerializeMap::serialize_entry::h971e5d2d456a2749( /*0x1009bda0e*/
                                           &v6,
                                           &anon_f3f46b48c4f9c057aa63801556530189_591,
                                           21,
                                           a1 + 507);
                                if ( !result ) /*0x1009bda16*/
                                {
                                  result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6627936bb3618812( /*0x1009bda27*/
                                             &v6,
                                             a1 + 424);
                                  if ( !result ) /*0x1009bda2f*/
                                  {
                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h0d9b7699bdba3454( /*0x1009bda40*/
                                               &v6,
                                               a1 + 232);
                                    if ( !result ) /*0x1009bda48*/
                                    {
                                      v4 = a1 + 448; /*0x1009bda4e*/
                                      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h7545fdd06951f0a9( /*0x1009bda59*/
                                                 &v6,
                                                 a1 + 448);
                                      if ( !result ) /*0x1009bda61*/
                                      {
                                        if ( (_BYTE)v6 ) /*0x1009bda6b*/
                                          return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1009bda6b*/
                                        result = serde_core::ser::SerializeMap::serialize_entry::h971e5d2d456a2749( /*0x1009bda88*/
                                                   &v6,
                                                   &anon_f3f46b48c4f9c057aa63801556530189_595,
                                                   14,
                                                   a1 + 508);
                                        if ( !result ) /*0x1009bda90*/
                                        {
                                          result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hcb44170e89d07a80( /*0x1009bdaa1*/
                                                     &v6,
                                                     a1 + 264);
                                          if ( !result ) /*0x1009bdaa9*/
                                          {
                                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8536fa0399b55ef7( /*0x1009bdaba*/
                                                       &v6,
                                                       a1 + 368);
                                            if ( !result ) /*0x1009bdac2*/
                                            {
                                              result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hf601b421cbcdaa4b( /*0x1009bdad3*/
                                                         &v6,
                                                         a1 + 472);
                                              if ( !result ) /*0x1009bdadb*/
                                              {
                                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h3cf4f9b161ad6736( /*0x1009bdaef*/
                                                           &v6,
                                                           a1 + 288);
                                                if ( !result ) /*0x1009bdaf7*/
                                                {
                                                  result = 0; /*0x1009bdafd*/
                                                  if ( (v6 & 1) == 0 ) /*0x1009bdb03*/
                                                  {
                                                    if ( HIBYTE(v6) ) /*0x1009bdb0d*/
                                                    {
                                                      alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hcf6b9c01431e505d( /*0x1009bdb26*/
                                                        *v7,
                                                        &anon_f3f46b48c4f9c057aa63801556530189_6,
                                                        1);
                                                      return 0; /*0x1009bdb2b*/
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
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x1009bd7f8*/
}