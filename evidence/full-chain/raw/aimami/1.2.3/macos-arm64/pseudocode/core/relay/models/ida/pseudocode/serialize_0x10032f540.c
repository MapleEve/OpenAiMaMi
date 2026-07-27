// __ZN13codexmate_lib4core5relay6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayTestResult$GT$9serialize @ 0x10032f540 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayTestResult$GT$::serialize::h2ff602e9d4f78aa0(
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

  v6 = *a2; /*0x10032f550*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10032f553*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10032f55a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10032f66e*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10032f676*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10032f564*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10032f56b*/
  v9 = 256; /*0x10032f56f*/
  v10 = a2; /*0x10032f575*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10032f58d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_429,
             2,
             a1 + 56);
  if ( !result ) /*0x10032f595*/
  {
    if ( (_BYTE)v9 ) /*0x10032f5a6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f5a6*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10032f5cb*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_420,
               9,
               a1 + 48);
    if ( result ) /*0x10032f5d3*/
      return result; /*0x10032f5d3*/
    if ( (_BYTE)v9 ) /*0x10032f5d9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f5d9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10032f5ef*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_430,
               12,
               a1 + 24);
    if ( result ) /*0x10032f5f7*/
      return result; /*0x10032f5f7*/
    if ( (_BYTE)v9 ) /*0x10032f5fd*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10032f5b2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39( /*0x10032f612*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_431,
               12,
               a1);
    if ( !result ) /*0x10032f61a*/
    {
      result = 0; /*0x10032f620*/
      if ( (v9 & 1) == 0 ) /*0x10032f626*/
      {
        if ( HIBYTE(v9) ) /*0x10032f630*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10032f649*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x10032f64e*/
        }
      }
    }
  }
  return result; /*0x10032f597*/
}