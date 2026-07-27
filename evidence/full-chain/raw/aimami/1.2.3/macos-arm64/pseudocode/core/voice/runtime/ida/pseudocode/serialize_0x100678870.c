// __ZN13codexmate_lib4core5voice7runtime1_109_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..voice..runtime..PerModeShortcut$GT$9serialize @ 0x100678870 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..voice..runtime..PerModeShortcut$GT$::serialize::he3a7411b82c11d48(
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

  v7 = *(_QWORD **)a2; /*0x100678880*/
  ++*(_QWORD *)(a2 + 24); /*0x100678883*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100678887*/
  v8 = v7[2]; /*0x10067888b*/
  if ( *v7 == v8 ) /*0x100678892*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a7); /*0x1006789ac*/
    v8 = v7[2]; /*0x1006789b4*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x10067889c*/
  v7[2] = v8 + 1; /*0x1006788a3*/
  v10 = 256; /*0x1006788a7*/
  v11 = a2; /*0x1006788ad*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x1006788c5*/
             &v10,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_472,
             7,
             a1 + 48);
  if ( !result ) /*0x1006788cd*/
  {
    if ( (_BYTE)v10 ) /*0x1006788de*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1006788de*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100678902*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_473,
               8,
               a1);
    if ( result ) /*0x10067890a*/
      return result; /*0x10067890a*/
    if ( (_BYTE)v10 ) /*0x100678910*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100678910*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100678926*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_474,
               7,
               a1 + 24);
    if ( result ) /*0x10067892e*/
      return result; /*0x10067892e*/
    if ( (_BYTE)v10 ) /*0x100678934*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100678934*/
    result = serde_core::ser::SerializeMap::serialize_entry::h030a06b2d94ffc74( /*0x10067894a*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_475,
               5,
               a1 + 64);
    if ( result ) /*0x100678952*/
      return result; /*0x100678952*/
    if ( (_BYTE)v10 ) /*0x10067895c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1006788ea*/
    result = serde_core::ser::SerializeMap::serialize_entry::h22d15134cc13a0b5( /*0x100678975*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_476,
               12,
               a1 + 56);
    if ( !result ) /*0x10067897d*/
    {
      _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(&v10); /*0x100678987*/
      return 0; /*0x10067898c*/
    }
  }
  return result; /*0x1006788cf*/
}