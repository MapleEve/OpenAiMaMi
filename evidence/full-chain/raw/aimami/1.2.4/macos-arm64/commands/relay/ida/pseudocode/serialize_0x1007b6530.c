// __ZN13codexmate_lib8commands5relay1_115_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..relay..CodexNoAccountSlotsPayload$GT$9serialize @ 0x1007b6530 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::commands::relay::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..relay..CodexNoAccountSlotsPayload$GT$::serialize::h5b9b61d4c5f20db4(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 result; // rax
  __int16 v5; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v6; // [rsp+10h] [rbp-20h]

  v2 = *a2; /*0x1007b6540*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1007b6543*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1007b654a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b( /*0x1007b6637*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1007b663f*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1007b6554*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1007b655b*/
  v5 = 256; /*0x1007b655f*/
  v6 = a2; /*0x1007b6565*/
  result = serde_core::ser::SerializeMap::serialize_entry::h501479b8547a313f( /*0x1007b657c*/
             &v5,
             &anon_968df7ff55cc5af6b8e31bcf74ad2104_1072,
             5,
             a1);
  if ( !result ) /*0x1007b6584*/
  {
    if ( (_BYTE)v5 ) /*0x1007b6595*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1007b6595*/
    result = serde_core::ser::SerializeMap::serialize_entry::h0137e4468ad1de50( /*0x1007b65bd*/
               &v5,
               &anon_968df7ff55cc5af6b8e31bcf74ad2104_1073,
               16,
               a1 + 344);
    if ( result ) /*0x1007b65c5*/
      return result; /*0x1007b65c5*/
    if ( (_BYTE)v5 ) /*0x1007b65cb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1007b65a1*/
    result = serde_core::ser::SerializeMap::serialize_entry::hd6b37fb0238a3647( /*0x1007b65e7*/
               &v5,
               &anon_968df7ff55cc5af6b8e31bcf74ad2104_1075,
               8,
               a1 + 320);
    if ( !result ) /*0x1007b65ef*/
    {
      result = 0; /*0x1007b65f1*/
      if ( (v5 & 1) == 0 ) /*0x1007b65f7*/
      {
        if ( HIBYTE(v5) ) /*0x1007b65fd*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hb7718f1332063bb9(*v6, "}false", 1); /*0x1007b6612*/
          return 0; /*0x1007b6617*/
        }
      }
    }
  }
  return result; /*0x1007b6586*/
}