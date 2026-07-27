// __ZN13codexmate_lib4core13quota_history1_110_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..quota_history..QuotaHistoryPoint$GT$9serialize @ 0x100323040 | 基线 same-set
__int64 __fastcall codexmate_lib::core::quota_history::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..quota_history..QuotaHistoryPoint$GT$::serialize::h166ecc8744bb0d3a(
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

  v6 = *a2; /*0x100323050*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100323053*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10032305a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100323171*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100323179*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100323064*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10032306b*/
  v9 = 256; /*0x10032306f*/
  v10 = a2; /*0x100323075*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10032308d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_117,
             9,
             a1 + 56);
  if ( !result ) /*0x100323095*/
  {
    if ( (_BYTE)v9 ) /*0x1003230a6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003230a6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003230cb*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_30,
               10,
               a1 + 32);
    if ( result ) /*0x1003230d3*/
      return result; /*0x1003230d3*/
    if ( (_BYTE)v9 ) /*0x1003230d9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003230d9*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafefe5532b3f0fa1( /*0x1003230ee*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_118,
               18,
               a1);
    if ( result ) /*0x1003230f6*/
      return result; /*0x1003230f6*/
    if ( (_BYTE)v9 ) /*0x1003230fc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003230b2*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafefe5532b3f0fa1( /*0x100323115*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_119,
               20,
               a1 + 16);
    if ( !result ) /*0x10032311d*/
    {
      result = 0; /*0x100323123*/
      if ( (v9 & 1) == 0 ) /*0x100323129*/
      {
        if ( HIBYTE(v9) ) /*0x100323133*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10032314c*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100323151*/
        }
      }
    }
  }
  return result; /*0x100323097*/
}