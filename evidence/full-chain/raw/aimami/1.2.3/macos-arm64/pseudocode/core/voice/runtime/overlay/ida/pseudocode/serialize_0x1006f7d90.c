// __ZN13codexmate_lib4core5voice7runtime7overlay1_127_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..voice..runtime..overlay..VoiceSearchResultPayload$GT$9serialize @ 0x1006f7d90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::overlay::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..voice..runtime..overlay..VoiceSearchResultPayload$GT$::serialize::h213ee5a0b0615c86(
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

  v7 = *a2; /*0x1006f7da0*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x1006f7da3*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x1006f7daa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1006f7e71*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x1006f7e79*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x1006f7db4*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x1006f7dbb*/
  v13 = 256; /*0x1006f7dbf*/
  v14 = a2; /*0x1006f7dc5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1006f7ddc*/
             &v13,
             &anon_b756970ae374bf3e9e8d782d8f9d3f8c_182,
             5,
             a1);
  if ( !result ) /*0x1006f7de4*/
  {
    if ( (_BYTE)v13 == 1 ) /*0x1006f7df5*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x1006f7e01*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1006f7e1d*/
                 &v13,
                 &anon_b756970ae374bf3e9e8d782d8f9d3f8c_183,
                 6,
                 a1 + 24);
      if ( !result ) /*0x1006f7e25*/
      {
        result = 0; /*0x1006f7e27*/
        if ( (v13 & 1) == 0 ) /*0x1006f7e2d*/
        {
          if ( HIBYTE(v13) ) /*0x1006f7e33*/
          {
            v11 = *v14; /*0x1006f7e39*/
            v12 = *(_QWORD *)(*v14 + 16LL); /*0x1006f7e3c*/
            if ( *(_QWORD *)*v14 == v12 ) /*0x1006f7e43*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1006f7e95*/
                *v14,
                v12,
                1,
                1,
                1,
                v10);
              v12 = *(_QWORD *)(v11 + 16); /*0x1006f7e9a*/
            }
            *(_BYTE *)(*(_QWORD *)(v11 + 8) + v12) = 125; /*0x1006f7e49*/
            *(_QWORD *)(v11 + 16) = v12 + 1; /*0x1006f7e50*/
            return 0; /*0x1006f7e54*/
          }
        }
      }
    }
  }
  return result; /*0x1006f7de6*/
}