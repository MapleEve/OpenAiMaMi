// __ZN13codexmate_lib4core5relay2io1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..io..RelayImportSummary$GT$9serialize @ 0x1005256f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::io::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..io..RelayImportSummary$GT$::serialize::hea7e7442c78cea7d(
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
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int16 v13; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+10h] [rbp-20h]

  v7 = *a2; /*0x100525700*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x100525703*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10052570a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1005257ce*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x1005257d6*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x100525714*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10052571b*/
  v13 = 256; /*0x10052571f*/
  v14 = a2; /*0x100525725*/
  result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6( /*0x10052573d*/
             &v13,
             &anon_92869709a5e99ce1936aa4e326b6c562_955,
             13,
             a1 + 24);
  if ( !result ) /*0x100525745*/
  {
    if ( (_BYTE)v13 == 1 ) /*0x100525756*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100525762*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h49d4d5196ca7a46e(&v13, "skipped", 7, a1); /*0x10052577a*/
      if ( !result ) /*0x100525782*/
      {
        result = 0; /*0x100525784*/
        if ( (v13 & 1) == 0 ) /*0x10052578a*/
        {
          if ( HIBYTE(v13) ) /*0x100525790*/
          {
            v11 = *v14; /*0x100525796*/
            v12 = *(_QWORD *)(*v14 + 16LL); /*0x100525799*/
            if ( *(_QWORD *)*v14 == v12 ) /*0x1005257a0*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1005257f2*/
                *v14,
                v12,
                1,
                1,
                1,
                v10);
              v12 = *(_QWORD *)(v11 + 16); /*0x1005257f7*/
            }
            *(_BYTE *)(*(_QWORD *)(v11 + 8) + v12) = 125; /*0x1005257a6*/
            *(_QWORD *)(v11 + 16) = v12 + 1; /*0x1005257ad*/
            return 0; /*0x1005257b1*/
          }
        }
      }
    }
  }
  return result; /*0x100525747*/
}