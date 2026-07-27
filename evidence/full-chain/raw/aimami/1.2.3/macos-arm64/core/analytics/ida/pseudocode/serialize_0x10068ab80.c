// __ZN13codexmate_lib4core9analytics1_101_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..TodaySummary$GT$9serialize @ 0x10068ab80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::analytics::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..TodaySummary$GT$::serialize::h4b356a4c2d341ac4(
        __int64 a1,
        _QWORD *a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int16 v10; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+10h] [rbp-20h]

  v7 = *a2; /*0x10068ab90*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10068ab93*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10068ab9a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10068ac81*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x10068ac89*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10068aba4*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10068abab*/
  v10 = 256; /*0x10068abaf*/
  v11 = a2; /*0x10068abb5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10068abcd*/
             &v10,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_583,
             12,
             a1 + 8);
  if ( !result ) /*0x10068abd5*/
  {
    if ( (_BYTE)v10 ) /*0x10068abe6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068abe6*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10068ac0a*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_584,
               13,
               a1);
    if ( result ) /*0x10068ac12*/
      return result; /*0x10068ac12*/
    if ( (_BYTE)v10 ) /*0x10068ac18*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068abf2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10068ac31*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_585,
               21,
               a1 + 12);
    if ( !result ) /*0x10068ac39*/
    {
      result = 0; /*0x10068ac3b*/
      if ( (v10 & 1) == 0 ) /*0x10068ac41*/
      {
        if ( HIBYTE(v10) ) /*0x10068ac47*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10068ac5c*/
            *v11,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
            1);
          return 0; /*0x10068ac61*/
        }
      }
    }
  }
  return result; /*0x10068abd7*/
}