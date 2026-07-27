// __ZN13codexmate_lib4core5relay2io1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..io..RelayExportSummary$GT$9serialize @ 0x1005254b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::io::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..io..RelayExportSummary$GT$::serialize::h4f537aa8695f1642(
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

  v7 = *a2; /*0x1005254c0*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x1005254c3*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x1005254ca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1005255b1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x1005255b9*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x1005254d4*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x1005254db*/
  v10 = 256; /*0x1005254df*/
  v11 = a2; /*0x1005254e5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1005254fc*/
             &v10,
             &anon_92869709a5e99ce1936aa4e326b6c562_952,
             8,
             a1);
  if ( !result ) /*0x100525504*/
  {
    if ( (_BYTE)v10 ) /*0x100525515*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100525515*/
    result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6( /*0x10052553a*/
               &v10,
               &anon_92869709a5e99ce1936aa4e326b6c562_953,
               13,
               a1 + 24);
    if ( result ) /*0x100525542*/
      return result; /*0x100525542*/
    if ( (_BYTE)v10 ) /*0x100525548*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100525521*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100525561*/
               &v10,
               &anon_92869709a5e99ce1936aa4e326b6c562_949,
               14,
               a1 + 32);
    if ( !result ) /*0x100525569*/
    {
      result = 0; /*0x10052556b*/
      if ( (v10 & 1) == 0 ) /*0x100525571*/
      {
        if ( HIBYTE(v10) ) /*0x100525577*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(*v11, "}false", 1); /*0x10052558c*/
          return 0; /*0x100525591*/
        }
      }
    }
  }
  return result; /*0x100525506*/
}