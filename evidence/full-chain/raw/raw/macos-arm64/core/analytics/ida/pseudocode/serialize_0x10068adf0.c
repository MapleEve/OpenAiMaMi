// __ZN13codexmate_lib4core9analytics1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..CachedRolloutEntry$GT$9serialize @ 0x10068adf0
__int64 __fastcall codexmate_lib::core::analytics::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..CachedRolloutEntry$GT$::serialize::h013622d12a9265c6(
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

  v6 = *a2; /*0x10068ae00*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10068ae03*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10068ae0a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10068af37*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10068af3f*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10068ae14*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10068ae1b*/
  v9 = 256; /*0x10068ae1f*/
  v10 = a2; /*0x10068ae25*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10068ae3d*/
             &v9,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_589,
             8,
             a1 + 64);
  if ( !result ) /*0x10068ae45*/
  {
    if ( (_BYTE)v9 ) /*0x10068ae56*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10068ae56*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc15dbe813cceb201( /*0x10068ae7a*/
               &v9,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_590,
               15,
               a1);
    if ( result ) /*0x10068ae82*/
      return result; /*0x10068ae82*/
    if ( (_BYTE)v9 ) /*0x10068ae88*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10068ae88*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10068ae9e*/
               &v9,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_591,
               8,
               a1 + 72);
    if ( result ) /*0x10068aea6*/
      return result; /*0x10068aea6*/
    if ( (_BYTE)v9 ) /*0x10068aeac*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10068ae62*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10068aec2*/
               &v9,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_592,
               12,
               a1 + 16);
    if ( !result ) /*0x10068aeca*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h140ad99f47edcd8d( /*0x10068aedb*/
                 &v9,
                 a1 + 40);
      if ( !result ) /*0x10068aee3*/
      {
        result = 0; /*0x10068aee9*/
        if ( (v9 & 1) == 0 ) /*0x10068aeef*/
        {
          if ( HIBYTE(v9) ) /*0x10068aef9*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10068af12*/
              *v10,
              &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
              1);
            return 0; /*0x10068af17*/
          }
        }
      }
    }
  }
  return result; /*0x10068ae47*/
}