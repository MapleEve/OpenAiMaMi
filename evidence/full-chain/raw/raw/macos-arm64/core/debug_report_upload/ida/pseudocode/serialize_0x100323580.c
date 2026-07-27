// __ZN13codexmate_lib4core19debug_report_upload1_123_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..debug_report_upload..DebugReportUploadPayload$GT$9serialize @ 0x100323580 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_report_upload::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..debug_report_upload..DebugReportUploadPayload$GT$::serialize::h4f99d9eed08f49cc(
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
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int16 v12; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-20h]

  v6 = *a2; /*0x100323590*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100323593*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10032359a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100323661*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100323669*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1003235a4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1003235ab*/
  v12 = 256; /*0x1003235af*/
  v13 = a2; /*0x1003235b5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003235cc*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_135,
             8,
             a1);
  if ( !result ) /*0x1003235d4*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x1003235e5*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003235f1*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6( /*0x10032360d*/
                 &v12,
                 "bytesfailed to build async fetch_models clientfailed to build async direct fetch_models clientfailed to"
                 " build async health check clientfailed to build async direct health check clientdeepseek-chatdeepseek-r"
                 "easonerdeepseek-v4-flashdeepseek-v4-proglm-5.1glm-5.2mimo-v2.5-pro",
                 5,
                 a1 + 24);
      if ( !result ) /*0x100323615*/
      {
        result = 0; /*0x100323617*/
        if ( (v12 & 1) == 0 ) /*0x10032361d*/
        {
          if ( HIBYTE(v12) ) /*0x100323623*/
          {
            v10 = *v13; /*0x100323629*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x10032362c*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x100323633*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100323685*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x10032368a*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x100323639*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x100323640*/
            return 0; /*0x100323644*/
          }
        }
      }
    }
  }
  return result; /*0x1003235d6*/
}