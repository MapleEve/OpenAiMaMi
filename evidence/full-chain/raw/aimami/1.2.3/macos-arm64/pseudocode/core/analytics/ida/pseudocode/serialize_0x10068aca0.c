// __ZN13codexmate_lib4core9analytics1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..DailyActivity$GT$9serialize @ 0x10068aca0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::analytics::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..DailyActivity$GT$::serialize::h2001aad742384f0f(
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

  v7 = *a2; /*0x10068acb0*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10068acb3*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10068acba*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10068add1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x10068add9*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10068acc4*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10068accb*/
  v10 = 256; /*0x10068accf*/
  v11 = a2; /*0x10068acd5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10068acec*/
             &v10,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_586,
             4,
             a1);
  if ( !result ) /*0x10068acf4*/
  {
    if ( (_BYTE)v10 ) /*0x10068ad05*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068ad05*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10068ad2a*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_583,
               12,
               a1 + 32);
    if ( result ) /*0x10068ad32*/
      return result; /*0x10068ad32*/
    if ( (_BYTE)v10 ) /*0x10068ad38*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068ad38*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10068ad4e*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_584,
               13,
               a1 + 24);
    if ( result ) /*0x10068ad56*/
      return result; /*0x10068ad56*/
    if ( (_BYTE)v10 ) /*0x10068ad5c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068ad11*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274(&v10, "activityLevel", 13, a1 + 36); /*0x10068ad75*/
    if ( !result ) /*0x10068ad7d*/
    {
      result = 0; /*0x10068ad83*/
      if ( (v10 & 1) == 0 ) /*0x10068ad89*/
      {
        if ( HIBYTE(v10) ) /*0x10068ad93*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10068adac*/
            *v11,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
            1);
          return 0; /*0x10068adb1*/
        }
      }
    }
  }
  return result; /*0x10068acf6*/
}