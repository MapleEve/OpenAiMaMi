// __ZN13codexmate_lib4core6models1_102_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnosePlatform$GT$9serialize @ 0x10033b650 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnosePlatform$GT$::serialize::hfda5f5bfee503420(
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

  v6 = *a2; /*0x10033b660*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033b663*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033b66a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033b731*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033b739*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033b674*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033b67b*/
  v12 = 256; /*0x10033b67f*/
  v13 = a2; /*0x10033b685*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033b69c*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_665,
             2,
             a1);
  if ( !result ) /*0x10033b6a4*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x10033b6b5*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033b6c1*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033b6dd*/
                 &v12,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_666,
                 4,
                 a1 + 24);
      if ( !result ) /*0x10033b6e5*/
      {
        result = 0; /*0x10033b6e7*/
        if ( (v12 & 1) == 0 ) /*0x10033b6ed*/
        {
          if ( HIBYTE(v12) ) /*0x10033b6f3*/
          {
            v10 = *v13; /*0x10033b6f9*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x10033b6fc*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x10033b703*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033b755*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x10033b75a*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x10033b709*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x10033b710*/
            return 0; /*0x10033b714*/
          }
        }
      }
    }
  }
  return result; /*0x10033b6a6*/
}