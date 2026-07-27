// __ZN13codexmate_lib4core12debug_bundle1_110_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..debug_bundle..DebugBundlePayload$GT$9serialize @ 0x1004d58d0
__int64 __fastcall codexmate_lib::core::debug_bundle::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..debug_bundle..DebugBundlePayload$GT$::serialize::h297f812cd3e7f956(
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

  v6 = *a2; /*0x1004d58e0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1004d58e3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1004d58ea*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1004d5a55*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1004d5a5d*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1004d58f4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1004d58fb*/
  v9 = 256; /*0x1004d58ff*/
  v10 = a2; /*0x1004d5905*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1004d591c*/
             &v9,
             &anon_92869709a5e99ce1936aa4e326b6c562_195,
             10,
             a1);
  if ( !result ) /*0x1004d5924*/
  {
    if ( (_BYTE)v9 ) /*0x1004d5935*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004d5935*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1004d595a*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_196,
               8,
               a1 + 24);
    if ( result ) /*0x1004d5962*/
      return result; /*0x1004d5962*/
    if ( (_BYTE)v9 ) /*0x1004d5968*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004d5968*/
    result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6(&v9, "bytes", 5, a1 + 96); /*0x1004d597e*/
    if ( result ) /*0x1004d5986*/
      return result; /*0x1004d5986*/
    if ( (_BYTE)v9 ) /*0x1004d598c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004d598c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1004d59a2*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_197,
               7,
               a1 + 48);
    if ( result ) /*0x1004d59aa*/
      return result; /*0x1004d59aa*/
    if ( (_BYTE)v9 ) /*0x1004d59b4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004d59b4*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v9, "targetMode", 10, a1 + 72); /*0x1004d59ca*/
    if ( result ) /*0x1004d59d2*/
      return result; /*0x1004d59d2*/
    if ( (_BYTE)v9 ) /*0x1004d59dc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004d5941*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28(&v9, "hasIssues, ", 9, a1 + 104); /*0x1004d59f9*/
    if ( !result ) /*0x1004d5a01*/
    {
      result = 0; /*0x1004d5a07*/
      if ( (v9 & 1) == 0 ) /*0x1004d5a0d*/
      {
        if ( HIBYTE(v9) ) /*0x1004d5a17*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(*v10, "}false", 1); /*0x1004d5a30*/
          return 0; /*0x1004d5a35*/
        }
      }
    }
  }
  return result; /*0x1004d5926*/
}