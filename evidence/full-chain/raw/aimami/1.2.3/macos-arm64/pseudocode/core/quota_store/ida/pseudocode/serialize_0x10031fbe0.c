// __ZN13codexmate_lib4core11quota_store1_105_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..quota_store..QuotaStoreItem$GT$9serialize @ 0x10031fbe0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::quota_store::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..quota_store..QuotaStoreItem$GT$::serialize::h19972fdfe337ae37(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r12
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  __int16 v11; // [rsp+8h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-30h]

  v6 = *a1; /*0x10031fbf4*/
  v7 = a1[12]; /*0x10031fbf7*/
  v8 = *(_QWORD **)a2; /*0x10031fbfb*/
  ++*(_QWORD *)(a2 + 24); /*0x10031fbfe*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10031fc02*/
  v9 = v8[2]; /*0x10031fc06*/
  if ( *v8 == v9 ) /*0x10031fc0d*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v8, v8[2], 1, 1, 1, a6); /*0x10031fd83*/
    v9 = v8[2]; /*0x10031fd8b*/
  }
  *(_BYTE *)(v8[1] + v9) = 123; /*0x10031fc17*/
  v8[2] = v9 + 1; /*0x10031fc1e*/
  v11 = 256; /*0x10031fc22*/
  v12 = a2; /*0x10031fc28*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x10031fc40*/
             &v11,
             &anon_b0ee9adff4519c22b647af231a5a39fa_30,
             10,
             a1 + 15);
  if ( !result ) /*0x10031fc48*/
  {
    if ( !(_BYTE)v11 ) /*0x10031fc5d*/
    {
      result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x10031fc89*/
                 &v11,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_31,
                 10,
                 a1 + 18);
      if ( result ) /*0x10031fc91*/
        return result; /*0x10031fc91*/
      if ( !(_BYTE)v11 ) /*0x10031fc97*/
      {
        result = serde_core::ser::SerializeMap::serialize_entry::ha90588858759b3e5( /*0x10031fcb0*/
                   &v11,
                   &anon_b0ee9adff4519c22b647af231a5a39fa_32,
                   11,
                   a1 + 19);
        if ( result ) /*0x10031fcb8*/
          return result; /*0x10031fcb8*/
        if ( !(_BYTE)v11 ) /*0x10031fcbe*/
        {
          result = serde_core::ser::SerializeMap::serialize_entry::h693b71da87627dc7( /*0x10031fcd4*/
                     &v11,
                     &anon_b0ee9adff4519c22b647af231a5a39fa_33,
                     13,
                     a1 + 2);
          if ( result ) /*0x10031fcdc*/
            return result; /*0x10031fcdc*/
          if ( !(_BYTE)v11 ) /*0x10031fce6*/
          {
            result = serde_core::ser::SerializeMap::serialize_entry::h693b71da87627dc7( /*0x10031fd00*/
                       &v11,
                       &anon_b0ee9adff4519c22b647af231a5a39fa_34,
                       15,
                       a1 + 7);
            if ( result ) /*0x10031fd08*/
              return result; /*0x10031fd08*/
            if ( (_DWORD)v7 != 2 ) /*0x10031fd12*/
            {
              result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6798f2afedc456e4( /*0x10031fd1c*/
                         &v11,
                         a1 + 12);
              if ( result ) /*0x10031fd24*/
                return result; /*0x10031fd24*/
            }
            if ( !v6 ) /*0x10031fd2d*/
            {
LABEL_19:
              _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v11); /*0x10031fd5a*/
              return 0; /*0x10031fd63*/
            }
            if ( !(_BYTE)v11 ) /*0x10031fd33*/
            {
              result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x10031fd4c*/
                         &v11,
                         "tokenStatusUpdatedAtfalseprolitechatgptprolitepro",
                         20,
                         a1);
              if ( result ) /*0x10031fd54*/
                return result; /*0x10031fd54*/
              goto LABEL_19; /*0x10031fd54*/
            }
          }
        }
      }
    }
    return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10031fc6d*/
  }
  return result; /*0x10031fc4a*/
}