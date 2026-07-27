// __ZN13codexmate_lib4core5relay7manager1_114_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..manager..RouterToggleProgress$GT$9serialize @ 0x100284b30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..manager..RouterToggleProgress$GT$::serialize::h5ff508b34a479481(
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

  v6 = *a2; /*0x100284b40*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100284b43*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100284b4a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100284c2e*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100284c36*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100284b54*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100284b5b*/
  v9 = 256; /*0x100284b5f*/
  v10 = a2; /*0x100284b65*/
  result = serde_core::ser::SerializeMap::serialize_entry::hb0a7272cd279ba7d( /*0x100284b7d*/
             &v9,
             &anon_39a6e93098609d65551b0fc4eadbbbd9_666,
             4,
             a1 + 24);
  if ( !result ) /*0x100284b85*/
  {
    if ( (_BYTE)v9 ) /*0x100284b96*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100284b96*/
    result = serde_core::ser::SerializeMap::serialize_entry::hb0a7272cd279ba7d( /*0x100284bbb*/
               &v9,
               "totalresult=error stage=preflight",
               5,
               a1 + 25);
    if ( result ) /*0x100284bc3*/
      return result; /*0x100284bc3*/
    if ( (_BYTE)v9 ) /*0x100284bc9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100284ba2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100284bde*/
               &v9,
               &anon_39a6e93098609d65551b0fc4eadbbbd9_667,
               5,
               a1);
    if ( !result ) /*0x100284be6*/
    {
      result = 0; /*0x100284be8*/
      if ( (v9 & 1) == 0 ) /*0x100284bee*/
      {
        if ( HIBYTE(v9) ) /*0x100284bf4*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100284c09*/
            *v10,
            &anon_39a6e93098609d65551b0fc4eadbbbd9_10,
            1);
          return 0; /*0x100284c0e*/
        }
      }
    }
  }
  return result; /*0x100284b87*/
}