// __ZN13codexmate_lib4core10repository1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..RegistryFile$GT$9serialize @ 0x100a78bf0
// 1.2.3 NEW-delta | codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..RegistryFile$GT$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..RegistryFile$GT$::serialize::hd408f1870c8a0ac9(
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

  v6 = *(_QWORD **)a2; /*0x100a78c00*/
  ++*(_QWORD *)(a2 + 24); /*0x100a78c03*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100a78c07*/
  v7 = v6[2]; /*0x100a78c0b*/
  if ( *v6 == v7 ) /*0x100a78c12*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x100a78d40*/
    v7 = v6[2]; /*0x100a78d48*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x100a78c1c*/
  v6[2] = v7 + 1; /*0x100a78c23*/
  LOWORD(v10) = 256; /*0x100a78c27*/
  v11 = a2; /*0x100a78c2d*/
  result = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x100a78c45*/
             &v10,
             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_218,
             13,
             a1 + 80);
  if ( !result ) /*0x100a78c4d*/
  {
    if ( (_BYTE)v10 ) /*0x100a78c5e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100a78c5e*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100a78c83*/
               &v10,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_219,
               9,
               a1 + 72);
    if ( result ) /*0x100a78c8b*/
      return result; /*0x100a78c8b*/
    if ( (_BYTE)v10 ) /*0x100a78c91*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100a78c91*/
    result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x100a78ca7*/
               &v10,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_220,
               16,
               a1 + 24);
    if ( result ) /*0x100a78caf*/
      return result; /*0x100a78caf*/
    if ( (_BYTE)v10 ) /*0x100a78cb5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100a78c6a*/
    result = serde_core::ser::SerializeMap::serialize_entry::h1d7431f9b5943365( /*0x100a78cca*/
               &v10,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_221,
               5,
               a1);
    if ( !result ) /*0x100a78cd2*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8c667fe47e5b61f0( /*0x100a78ce0*/
                 &v10,
                 a1 + 48);
      if ( !result ) /*0x100a78ce8*/
      {
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h93bf71e88c1def16( /*0x100a78cf9*/
                   &v10,
                   a1 + 84);
        if ( !result ) /*0x100a78d01*/
        {
          v9[1] = v11; /*0x100a78d0f*/
          v9[0] = v10; /*0x100a78d13*/
          _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(v9); /*0x100a78d1b*/
          return 0; /*0x100a78d20*/
        }
      }
    }
  }
  return result; /*0x100a78c4f*/
}