// __ZN13codexmate_lib4core10repository1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..AutoSwitchConfig$GT$9serialize @ 0x100a793c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..AutoSwitchConfig$GT$::serialize::hfdafc69db94d7667(
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

  v7 = *(_QWORD **)a2; /*0x100a793d0*/
  ++*(_QWORD *)(a2 + 24); /*0x100a793d3*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100a793d7*/
  v8 = v7[2]; /*0x100a793db*/
  if ( *v7 == v8 ) /*0x100a793e2*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a7); /*0x100a794d4*/
    v8 = v7[2]; /*0x100a794dc*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x100a793ec*/
  v7[2] = v8 + 1; /*0x100a793f3*/
  v10 = 256; /*0x100a793f7*/
  v11 = a2; /*0x100a793fd*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100a79414*/
             &v10,
             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_254,
             8,
             a1);
  if ( !result ) /*0x100a7941c*/
  {
    if ( (_BYTE)v10 ) /*0x100a7942d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100a7942d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x100a79452*/
               &v10,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_251,
               7,
               a1 + 16);
    if ( result ) /*0x100a7945a*/
      return result; /*0x100a7945a*/
    if ( (_BYTE)v10 ) /*0x100a79460*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100a79460*/
    result = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x100a79476*/
               &v10,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_255,
               18,
               a1 + 8);
    if ( result ) /*0x100a7947e*/
      return result; /*0x100a7947e*/
    if ( (_BYTE)v10 ) /*0x100a79484*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100a79439*/
    result = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x100a7949d*/
               &v10,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_256,
               22,
               a1 + 12);
    if ( !result ) /*0x100a794a5*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v10); /*0x100a794af*/
      return 0; /*0x100a794b4*/
    }
  }
  return result; /*0x100a7941e*/
}