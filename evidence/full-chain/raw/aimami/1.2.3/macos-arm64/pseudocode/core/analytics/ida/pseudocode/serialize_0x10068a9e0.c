// __ZN13codexmate_lib4core9analytics1_101_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..SessionStats$GT$9serialize @ 0x10068a9e0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::analytics::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..SessionStats$GT$::serialize::h0df8fa89718e899d(
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

  v7 = *a2; /*0x10068a9f0*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10068a9f3*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10068a9fa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10068ab65*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x10068ab6d*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10068aa04*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10068aa0b*/
  v10 = 256; /*0x10068aa0f*/
  v11 = a2; /*0x10068aa15*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10068aa2d*/
             &v10,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_577,
             13,
             a1 + 40);
  if ( !result ) /*0x10068aa35*/
  {
    if ( (_BYTE)v10 ) /*0x10068aa46*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068aa46*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10068aa6b*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_578,
               14,
               a1 + 24);
    if ( result ) /*0x10068aa73*/
      return result; /*0x10068aa73*/
    if ( (_BYTE)v10 ) /*0x10068aa79*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068aa79*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10068aa8f*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_579,
               10,
               a1 + 44);
    if ( result ) /*0x10068aa97*/
      return result; /*0x10068aa97*/
    if ( (_BYTE)v10 ) /*0x10068aa9d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068aa9d*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5dc1ceeecd15401c( /*0x10068aab3*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_580,
               23,
               a1 + 32);
    if ( result ) /*0x10068aabb*/
      return result; /*0x10068aabb*/
    if ( (_BYTE)v10 ) /*0x10068aac5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068aac5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10068aada*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_581,
               14,
               a1);
    if ( result ) /*0x10068aae2*/
      return result; /*0x10068aae2*/
    if ( (_BYTE)v10 ) /*0x10068aaec*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068aa52*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10068ab09*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_582,
               15,
               a1 + 48);
    if ( !result ) /*0x10068ab11*/
    {
      result = 0; /*0x10068ab17*/
      if ( (v10 & 1) == 0 ) /*0x10068ab1d*/
      {
        if ( HIBYTE(v10) ) /*0x10068ab27*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10068ab40*/
            *v11,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
            1);
          return 0; /*0x10068ab45*/
        }
      }
    }
  }
  return result; /*0x10068aa37*/
}