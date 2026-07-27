// __ZN13codexmate_lib4core6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..RebuildRegistryPayload$GT$9serialize @ 0x100341050 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..RebuildRegistryPayload$GT$::serialize::h82b6b6b216dc21ef(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  __int16 v9; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+10h] [rbp-20h]

  v6 = *a2; /*0x100341060*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100341063*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034106a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100341151*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100341159*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100341074*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034107b*/
  v9 = 256; /*0x10034107f*/
  v10 = a2; /*0x100341085*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10034109d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_649,
             12,
             a1 + 24);
  if ( !result ) /*0x1003410a5*/
  {
    if ( (_BYTE)v9 ) /*0x1003410b6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003410b6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1003410da*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_650,
               16,
               a1);
    if ( result ) /*0x1003410e2*/
      return result; /*0x1003410e2*/
    if ( (_BYTE)v9 ) /*0x1003410e8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003410c2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v9, "registryUpdated", 15, a1 + 28); /*0x100341101*/
    if ( !result ) /*0x100341109*/
    {
      result = 0; /*0x10034110b*/
      if ( (v9 & 1) == 0 ) /*0x100341111*/
      {
        if ( HIBYTE(v9) ) /*0x100341117*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10034112c*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100341131*/
        }
      }
    }
  }
  return result; /*0x1003410a7*/
}