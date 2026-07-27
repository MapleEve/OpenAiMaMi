// __ZN13codexmate_lib4core10repository1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..RegistryItem$GT$9serialize @ 0x100a78d60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..RegistryItem$GT$::serialize::ha3bc1932fb4198a2(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r12
  char v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 result; // rax
  __int16 v12; // [rsp+8h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-30h]

  v7 = *(_BYTE *)(a1 + 418); /*0x100a78d74*/
  v8 = *(_BYTE *)(a1 + 419); /*0x100a78d7c*/
  v9 = *(_QWORD **)a2; /*0x100a78d84*/
  ++*(_QWORD *)(a2 + 24); /*0x100a78d87*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100a78d8b*/
  v10 = v9[2]; /*0x100a78d8f*/
  if ( *v9 == v10 ) /*0x100a78d96*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v9, v9[2], 1, 1, 1, a7); /*0x100a791e1*/
    v10 = v9[2]; /*0x100a791e9*/
  }
  *(_BYTE *)(v9[1] + v10) = 123; /*0x100a78da0*/
  v9[2] = v10 + 1; /*0x100a78da7*/
  v12 = 256; /*0x100a78dab*/
  v13 = a2; /*0x100a78db1*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a78dcc*/
             &v12,
             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_225,
             10,
             a1 + 192);
  if ( !result ) /*0x100a78dd4*/
  {
    if ( !(_BYTE)v12 ) /*0x100a78de9*/
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a78e15*/
                 &v12,
                 &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_226,
                 12,
                 a1 + 216);
      if ( result ) /*0x100a78e1d*/
        return result; /*0x100a78e1d*/
      if ( !(_BYTE)v12 ) /*0x100a78e23*/
      {
        result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a78e3c*/
                   &v12,
                   &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_227,
                   5,
                   a1 + 240);
        if ( result ) /*0x100a78e44*/
          return result; /*0x100a78e44*/
        if ( !(_BYTE)v12 ) /*0x100a78e4a*/
        {
          result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a78e63*/
                     &v12,
                     &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_228,
                     5,
                     a1 + 264);
          if ( result ) /*0x100a78e6b*/
            return result; /*0x100a78e6b*/
          if ( !(_BYTE)v12 ) /*0x100a78e75*/
          {
            result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x100a78e92*/
                       &v12,
                       &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_229,
                       11,
                       a1 + 336);
            if ( result ) /*0x100a78e9a*/
              return result; /*0x100a78e9a*/
            if ( !(_BYTE)v12 ) /*0x100a78ea4*/
            {
              result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x100a78ec1*/
                         &v12,
                         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_230,
                         13,
                         a1 + 360);
              if ( result ) /*0x100a78ec9*/
                return result; /*0x100a78ec9*/
              if ( !(_BYTE)v12 ) /*0x100a78ed3*/
              {
                result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x100a78ef0*/
                           &v12,
                           &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_231,
                           11,
                           a1 + 384);
                if ( result ) /*0x100a78ef8*/
                  return result; /*0x100a78ef8*/
                if ( !(_BYTE)v12 ) /*0x100a78f02*/
                {
                  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a78f1f*/
                             &v12,
                             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_232,
                             4,
                             a1 + 288);
                  if ( result ) /*0x100a78f27*/
                    return result; /*0x100a78f27*/
                  if ( v7 != 3 ) /*0x100a78f31*/
                  {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6fae227a4501c0fd( /*0x100a78f3e*/
                               &v12,
                               a1 + 418);
                    if ( result ) /*0x100a78f46*/
                      return result; /*0x100a78f46*/
                  }
                  if ( !(_BYTE)v12 ) /*0x100a78f50*/
                  {
                    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x100a78f69*/
                               &v12,
                               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_234,
                               18,
                               a1);
                    if ( result ) /*0x100a78f71*/
                      return result; /*0x100a78f71*/
                    if ( !(_BYTE)v12 ) /*0x100a78f7b*/
                    {
                      result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a78f98*/
                                 &v12,
                                 &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_235,
                                 8,
                                 a1 + 312);
                      if ( result ) /*0x100a78fa0*/
                        return result; /*0x100a78fa0*/
                      if ( !(_BYTE)v12 ) /*0x100a78faa*/
                      {
                        result = serde_core::ser::SerializeMap::serialize_entry::h23a74540ff12e1b1( /*0x100a78fc7*/
                                   &v12,
                                   &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_236,
                                   21,
                                   a1 + 416);
                        if ( result ) /*0x100a78fcf*/
                          return result; /*0x100a78fcf*/
                        if ( !(_BYTE)v12 ) /*0x100a78fd9*/
                        {
                          result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x100a78ff3*/
                                     &v12,
                                     &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_237,
                                     21,
                                     a1 + 16);
                          if ( result ) /*0x100a78ffb*/
                            return result; /*0x100a78ffb*/
                          if ( !(_BYTE)v12 ) /*0x100a79005*/
                          {
                            result = serde_core::ser::SerializeMap::serialize_entry::h23a74540ff12e1b1( /*0x100a79022*/
                                       &v12,
                                       &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_238,
                                       21,
                                       a1 + 417);
                            if ( result ) /*0x100a7902a*/
                              return result; /*0x100a7902a*/
                            if ( v8 != 3 ) /*0x100a79034*/
                            {
                              result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb1a7a337f249b7d0( /*0x100a79041*/
                                         &v12,
                                         a1 + 419);
                              if ( result ) /*0x100a79049*/
                                return result; /*0x100a79049*/
                            }
                            if ( !(_BYTE)v12 ) /*0x100a79053*/
                            {
                              result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x100a7906d*/
                                         &v12,
                                         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_240,
                                         25,
                                         a1 + 32);
                              if ( result ) /*0x100a79075*/
                                return result; /*0x100a79075*/
                              if ( !(_BYTE)v12 ) /*0x100a7907f*/
                              {
                                result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x100a79099*/
                                           &v12,
                                           &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_241,
                                           25,
                                           a1 + 48);
                                if ( result ) /*0x100a790a1*/
                                  return result; /*0x100a790a1*/
                                if ( !(_BYTE)v12 ) /*0x100a790ab*/
                                {
                                  result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x100a790c5*/
                                             &v12,
                                             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_242,
                                             26,
                                             a1 + 64);
                                  if ( result ) /*0x100a790cd*/
                                    return result; /*0x100a790cd*/
                                  if ( !(_BYTE)v12 ) /*0x100a790d7*/
                                  {
                                    result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100a790f4*/
                                               &v12,
                                               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_243,
                                               9,
                                               a1 + 408);
                                    if ( result ) /*0x100a790fc*/
                                      return result; /*0x100a790fc*/
                                    if ( !(_BYTE)v12 ) /*0x100a79106*/
                                    {
                                      result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x100a79120*/
                                                 &v12,
                                                 &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_244,
                                                 10,
                                                 a1 + 80);
                                      if ( result ) /*0x100a79128*/
                                        return result; /*0x100a79128*/
                                      if ( !(_BYTE)v12 ) /*0x100a79132*/
                                      {
                                        result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x100a7914c*/
                                                   &v12,
                                                   &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_245,
                                                   11,
                                                   a1 + 96);
                                        if ( result ) /*0x100a79154*/
                                          return result; /*0x100a79154*/
                                        if ( !(_BYTE)v12 ) /*0x100a7915e*/
                                        {
                                          result = serde_core::ser::SerializeMap::serialize_entry::h693b71da87627dc7( /*0x100a79178*/
                                                     &v12,
                                                     &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_246,
                                                     19,
                                                     a1 + 112);
                                          if ( result ) /*0x100a79180*/
                                            return result; /*0x100a79180*/
                                          if ( !(_BYTE)v12 ) /*0x100a7918a*/
                                          {
                                            result = serde_core::ser::SerializeMap::serialize_entry::h693b71da87627dc7( /*0x100a791aa*/
                                                       &v12,
                                                       &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_247,
                                                       21,
                                                       a1 + 152);
                                            if ( !result ) /*0x100a791b2*/
                                            {
                                              _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v12); /*0x100a791bc*/
                                              return 0; /*0x100a791c1*/
                                            }
                                            return result; /*0x100a791c1*/
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
    return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100a78df9*/
  }
  return result; /*0x100a78dd6*/
}