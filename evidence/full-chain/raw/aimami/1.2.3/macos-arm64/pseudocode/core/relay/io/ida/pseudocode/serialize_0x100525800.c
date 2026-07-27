// __ZN13codexmate_lib4core5relay2io1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..io..RelayExportProvider$GT$9serialize @ 0x100525800 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::io::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..io..RelayExportProvider$GT$::serialize::h69ab4d30a6d834cb(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-30h] BYREF
  __int64 v13; // [rsp+18h] [rbp-28h]

  v7 = *(_QWORD *)(a1 + 144); /*0x100525812*/
  v8 = *(_QWORD **)a2; /*0x100525819*/
  ++*(_QWORD *)(a2 + 24); /*0x10052581c*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100525820*/
  v9 = v8[2]; /*0x100525824*/
  if ( *v8 == v9 ) /*0x10052582b*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v8, v8[2], 1, 1, 1, a7); /*0x1005259f9*/
    v9 = v8[2]; /*0x100525a01*/
  }
  *(_BYTE *)(v8[1] + v9) = 123; /*0x100525835*/
  v8[2] = v9 + 1; /*0x10052583c*/
  LOWORD(v12) = 256; /*0x100525840*/
  v13 = a2; /*0x100525846*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10052585d*/
             &v12,
             &anon_92869709a5e99ce1936aa4e326b6c562_188,
             2,
             a1);
  if ( !result ) /*0x100525865*/
  {
    if ( (_BYTE)v12 ) /*0x10052586b*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100525872*/
    result = serde_core::ser::SerializeMap::serialize_entry::ha168e1e50f37c618( /*0x10052588b*/
               &v12,
               &anon_92869709a5e99ce1936aa4e326b6c562_957,
               3,
               a1 + 171);
    if ( !result ) /*0x100525893*/
    {
      if ( (_BYTE)v12 ) /*0x1005258a6*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1005258a6*/
      result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(&v12, "name", 4, a1 + 24); /*0x1005258bc*/
      if ( !result ) /*0x1005258c4*/
      {
        if ( (_BYTE)v12 ) /*0x1005258ca*/
          return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1005258ca*/
        result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x1005258e0*/
                   &v12,
                   &anon_92869709a5e99ce1936aa4e326b6c562_958,
                   7,
                   a1 + 48);
        if ( !result /*0x100525902*/
          && (__OFSUB__(-v7, 1)
           || (result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h1fdfc55407656bf0(
                          &v12,
                          a1 + 144)) == 0) )
        {
          if ( (_BYTE)v12 ) /*0x100525908*/
            return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100525908*/
          result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea(&v12, "model", 5, a1 + 72); /*0x100525922*/
          if ( !result ) /*0x10052592a*/
          {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hde705a82e2639286( /*0x10052593b*/
                       &v12,
                       a1 + 169);
            if ( !result ) /*0x100525943*/
            {
              result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hd7d3867f338a740f( /*0x100525954*/
                         &v12,
                         a1 + 170);
              if ( !result ) /*0x10052595c*/
              {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::heb6e0044434b17b3( /*0x10052596a*/
                           &v12,
                           a1 + 96);
                if ( !result ) /*0x100525972*/
                {
                  if ( (_BYTE)v12 ) /*0x10052597c*/
                    return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10052597c*/
                  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100525996*/
                             &v12,
                             "extraHeaderslastErrorproxyproviderNameupstreamUrlaimami-debug-tail.logaimami-debug.log.1aim"
                             "ami-debug-previous-tail.logaimami-crash-tail.logaimami-crash.log.1aimami-crash-previous-tail.log",
                             12,
                             a1 + 120);
                  if ( !result ) /*0x10052599e*/
                  {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h5cc7984ea6706fd5( /*0x1005259b2*/
                               &v12,
                               a1 + 168);
                    if ( !result ) /*0x1005259ba*/
                    {
                      v11[1] = v13; /*0x1005259c8*/
                      v11[0] = v12; /*0x1005259cc*/
                      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910( /*0x1005259d4*/
                        v11,
                        a3);
                      return 0; /*0x1005259d9*/
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
  return result; /*0x100525895*/
}