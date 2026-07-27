// __ZN13codexmate_lib4core9analytics1_110_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..UsageAnalyticsPayload$GT$9serialize @ 0x10068af50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::analytics::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..UsageAnalyticsPayload$GT$::serialize::h49d5baf16c4e544e(
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

  v7 = *a2; /*0x10068af60*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10068af63*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10068af6a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10068b04e*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x10068b056*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10068af74*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10068af7b*/
  v10 = 256; /*0x10068af7f*/
  v11 = a2; /*0x10068af85*/
  result = serde_core::ser::SerializeMap::serialize_entry::h340e61dfb410c095( /*0x10068af9d*/
             &v10,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_600,
             5,
             a1 + 80);
  if ( !result ) /*0x10068afa5*/
  {
    if ( (_BYTE)v10 ) /*0x10068afb6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068afb6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h01cbef9bd0f2cd05( /*0x10068afdb*/
               &v10,
               &anon_4776471024d1e9bb78f2861cb2b51e1e_601,
               12,
               a1 + 24);
    if ( result ) /*0x10068afe3*/
      return result; /*0x10068afe3*/
    if ( (_BYTE)v10 ) /*0x10068afe9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10068afc2*/
    result = serde_core::ser::SerializeMap::serialize_entry::hb07baf7c00c36605( /*0x10068affe*/
               &v10,
               "dailyActivityusage-analytics-index-v1.json[AiMaMi][usage-analytics] ignored invalid incremental index\"timestamp\"",
               13,
               a1);
    if ( !result ) /*0x10068b006*/
    {
      result = 0; /*0x10068b008*/
      if ( (v10 & 1) == 0 ) /*0x10068b00e*/
      {
        if ( HIBYTE(v10) ) /*0x10068b014*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10068b029*/
            *v11,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_133,
            1);
          return 0; /*0x10068b02e*/
        }
      }
    }
  }
  return result; /*0x10068afa7*/
}