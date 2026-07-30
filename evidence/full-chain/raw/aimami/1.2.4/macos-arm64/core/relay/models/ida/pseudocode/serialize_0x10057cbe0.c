// __ZN13codexmate_lib4core5relay6models1_111_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$9serialize @ 0x10057cbe0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$::serialize::h15e15bcccbd9b6b1(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int16 v8; // [rsp+0h] [rbp-30h] BYREF
  _QWORD *v9; // [rsp+8h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 48); /*0x10057cbf2*/
  v3 = *a2; /*0x10057cbf6*/
  v4 = *(_QWORD *)(*a2 + 16LL); /*0x10057cbf9*/
  if ( *(_QWORD *)*a2 == v4 ) /*0x10057cc00*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b( /*0x10057ccfa*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v4 = *(_QWORD *)(v3 + 16); /*0x10057cd02*/
  }
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + v4) = 123; /*0x10057cc0a*/
  *(_QWORD *)(v3 + 16) = v4 + 1; /*0x10057cc11*/
  v8 = 256; /*0x10057cc15*/
  v9 = a2; /*0x10057cc1b*/
  result = serde_core::ser::SerializeMap::serialize_entry::h35f68ea844550900( /*0x10057cc32*/
             &v8,
             &anon_d163fe72d6e6e73a137b22815ab75905_495,
             10,
             a1);
  if ( !result ) /*0x10057cc3a*/
  {
    if ( (_BYTE)v8 ) /*0x10057cc4d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10057cc5b*/
    result = serde_core::ser::SerializeMap::serialize_entry::h35f68ea844550900( /*0x10057cc74*/
               &v8,
               &anon_d163fe72d6e6e73a137b22815ab75905_30,
               5,
               a1 + 24);
    if ( result ) /*0x10057cc7c*/
      return result; /*0x10057cc7c*/
    if ( !__OFSUB__(-v2, 1) ) /*0x10057cc81*/
    {
      if ( (_BYTE)v8 ) /*0x10057ccb8*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10057ccb8*/
      result = serde_core::ser::SerializeMap::serialize_entry::h0137e4468ad1de50( /*0x10057ccd1*/
                 &v8,
                 &anon_d163fe72d6e6e73a137b22815ab75905_496,
                 11,
                 a1 + 48);
      if ( result ) /*0x10057ccd9*/
        return result; /*0x10057ccd9*/
    }
    result = 0; /*0x10057cc83*/
    if ( (v8 & 1) == 0 && HIBYTE(v8) ) /*0x10057cc8f*/
    {
      v6 = *v9; /*0x10057cc95*/
      v7 = *(_QWORD *)(*v9 + 16LL); /*0x10057cc98*/
      if ( *(_QWORD *)*v9 == v7 ) /*0x10057cc9f*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(*v9, v7, 1, 1, 1); /*0x10057cd1e*/
        v7 = *(_QWORD *)(v6 + 16); /*0x10057cd23*/
      }
      *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 125; /*0x10057cca5*/
      *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10057ccac*/
      return 0; /*0x10057ccb0*/
    }
  }
  return result; /*0x10057cc3c*/
}