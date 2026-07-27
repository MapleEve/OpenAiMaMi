// __ZN13codexmate_lib4core5voice7runtime1_112_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..voice..runtime..VoiceTriggerConfig$GT$9serialize @ 0x10067e9b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..voice..runtime..VoiceTriggerConfig$GT$::serialize::h584d8b4340c36ab6(
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

  v7 = *a2; /*0x10067e9c0*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10067e9c3*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10067e9ca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10067eaf7*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x10067eaff*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10067e9d4*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10067e9db*/
  v10 = 256; /*0x10067e9df*/
  v11 = a2; /*0x10067e9e5*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10067e9fd*/
             &v10,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_472,
             7,
             a1 + 48);
  if ( !result ) /*0x10067ea05*/
  {
    if ( (_BYTE)v10 ) /*0x10067ea16*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10067ea16*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10067ea3a*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_473,
               8,
               a1);
    if ( result ) /*0x10067ea42*/
      return result; /*0x10067ea42*/
    if ( (_BYTE)v10 ) /*0x10067ea48*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10067ea48*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10067ea5e*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_474,
               7,
               a1 + 24);
    if ( result ) /*0x10067ea66*/
      return result; /*0x10067ea66*/
    if ( (_BYTE)v10 ) /*0x10067ea6c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10067ea22*/
    result = serde_core::ser::SerializeMap::serialize_entry::hefd8f5c45e63ff57( /*0x10067ea82*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_475,
               5,
               a1 + 64);
    if ( !result ) /*0x10067ea8a*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h80012d056cdfb45b( /*0x10067ea9b*/
                 &v10,
                 a1 + 56);
      if ( !result ) /*0x10067eaa3*/
      {
        result = 0; /*0x10067eaa9*/
        if ( (v10 & 1) == 0 ) /*0x10067eaaf*/
        {
          if ( HIBYTE(v10) ) /*0x10067eab9*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10067ead2*/
              *v11,
              &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
              1);
            return 0; /*0x10067ead7*/
          }
        }
      }
    }
  }
  return result; /*0x10067ea07*/
}