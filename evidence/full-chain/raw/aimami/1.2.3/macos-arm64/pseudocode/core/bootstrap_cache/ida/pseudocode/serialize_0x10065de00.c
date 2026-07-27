// __ZN13codexmate_lib4core15bootstrap_cache1_116_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$9serialize @ 0x10065de00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::bootstrap_cache::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::serialize::h6f8736771dd136e2(
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

  v7 = *a2; /*0x10065de10*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10065de13*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10065de1a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10065df50*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x10065df58*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10065de24*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10065de2b*/
  v10 = 256; /*0x10065de2f*/
  v11 = a2; /*0x10065de35*/
  result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x10065de4c*/
             &v10,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_266,
             9,
             a1);
  if ( !result ) /*0x10065de54*/
  {
    if ( (_BYTE)v10 ) /*0x10065de65*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10065de65*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc0c3ae19b057ba91( /*0x10065de8a*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_267,
               19,
               a1 + 16);
    if ( result ) /*0x10065de92*/
      return result; /*0x10065de92*/
    if ( (_BYTE)v10 ) /*0x10065de98*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10065de98*/
    result = serde_core::ser::SerializeMap::serialize_entry::h995d1fd7e5a852cb( /*0x10065deb1*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_268,
               14,
               a1 + 832);
    if ( result ) /*0x10065deb9*/
      return result; /*0x10065deb9*/
    if ( (_BYTE)v10 ) /*0x10065debf*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10065de71*/
    result = serde_core::ser::SerializeMap::serialize_entry::h62a01c20b6ecb32e( /*0x10065ded8*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_269,
               10,
               a1 + 928);
    if ( !result ) /*0x10065dee0*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h0ecad0634c711bbf( /*0x10065def4*/
                 &v10,
                 a1 + 992);
      if ( !result ) /*0x10065defc*/
      {
        result = 0; /*0x10065df02*/
        if ( (v10 & 1) == 0 ) /*0x10065df08*/
        {
          if ( HIBYTE(v10) ) /*0x10065df12*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10065df2b*/
              *v11,
              &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
              1);
            return 0; /*0x10065df30*/
          }
        }
      }
    }
  }
  return result; /*0x10065de56*/
}