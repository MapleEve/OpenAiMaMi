// __ZN13codexmate_lib4core5relay2io1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..io..RelayImportSkipped$GT$9serialize @ 0x1005255d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::io::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..io..RelayImportSkipped$GT$::serialize::hca908375f2f4027e(
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

  v7 = *a2; /*0x1005255e0*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x1005255e3*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x1005255ea*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1005256d1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x1005256d9*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x1005255f4*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x1005255fb*/
  v10 = 256; /*0x1005255ff*/
  v11 = a2; /*0x100525605*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10052561c*/
             &v10,
             &anon_92869709a5e99ce1936aa4e326b6c562_188,
             2,
             a1);
  if ( !result ) /*0x100525624*/
  {
    if ( (_BYTE)v10 ) /*0x100525635*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100525635*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v10, "name", 4, a1 + 24); /*0x10052565a*/
    if ( result ) /*0x100525662*/
      return result; /*0x100525662*/
    if ( (_BYTE)v10 ) /*0x100525668*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100525641*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100525681*/
               &v10,
               &anon_92869709a5e99ce1936aa4e326b6c562_294,
               6,
               a1 + 48);
    if ( !result ) /*0x100525689*/
    {
      result = 0; /*0x10052568b*/
      if ( (v10 & 1) == 0 ) /*0x100525691*/
      {
        if ( HIBYTE(v10) ) /*0x100525697*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(*v11, "}false", 1); /*0x1005256ac*/
          return 0; /*0x1005256b1*/
        }
      }
    }
  }
  return result; /*0x100525626*/
}