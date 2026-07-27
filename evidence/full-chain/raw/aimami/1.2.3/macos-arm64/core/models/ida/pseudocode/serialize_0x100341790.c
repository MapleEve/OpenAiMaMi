// __ZN13codexmate_lib4core6models1_109_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionAnalyticsPayload$GT$9serialize @ 0x100341790 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionAnalyticsPayload$GT$::serialize::ha6e478c218563c77(
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

  v6 = *a2; /*0x1003417a0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1003417a3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1003417aa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003418be*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003418c6*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1003417b4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1003417bb*/
  v9 = 256; /*0x1003417bf*/
  v10 = a2; /*0x1003417c5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x1003417dd*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_880,
             13,
             a1 + 32);
  if ( !result ) /*0x1003417e5*/
  {
    if ( (_BYTE)v9 ) /*0x1003417f6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003417f6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5dc1ceeecd15401c( /*0x10034181b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_881,
               8,
               a1 + 24);
    if ( result ) /*0x100341823*/
      return result; /*0x100341823*/
    if ( (_BYTE)v9 ) /*0x100341829*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341829*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274(&v9, "activeDays", 10, a1 + 36); /*0x10034183f*/
    if ( result ) /*0x100341847*/
      return result; /*0x100341847*/
    if ( (_BYTE)v9 ) /*0x10034184d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341802*/
    result = serde_core::ser::SerializeMap::serialize_entry::h52308f533c82f400( /*0x100341862*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_839,
               6,
               a1);
    if ( !result ) /*0x10034186a*/
    {
      result = 0; /*0x100341870*/
      if ( (v9 & 1) == 0 ) /*0x100341876*/
      {
        if ( HIBYTE(v9) ) /*0x100341880*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100341899*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10034189e*/
        }
      }
    }
  }
  return result; /*0x1003417e7*/
}