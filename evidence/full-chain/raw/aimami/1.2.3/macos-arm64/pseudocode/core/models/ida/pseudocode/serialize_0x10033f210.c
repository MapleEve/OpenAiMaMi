// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionDeleteFailure$GT$9serialize @ 0x10033f210 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionDeleteFailure$GT$::serialize::hc958623a8242e37e(
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

  v6 = *a2; /*0x10033f220*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033f223*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033f22a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033f2f1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033f2f9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033f234*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033f23b*/
  v12 = 256; /*0x10033f23f*/
  v13 = a2; /*0x10033f245*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033f25c*/
             &v12,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1);
  if ( !result ) /*0x10033f264*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x10033f275*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033f281*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10033f29d*/
                 &v12,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_256,
                 6,
                 a1 + 24);
      if ( !result ) /*0x10033f2a5*/
      {
        result = 0; /*0x10033f2a7*/
        if ( (v12 & 1) == 0 ) /*0x10033f2ad*/
        {
          if ( HIBYTE(v12) ) /*0x10033f2b3*/
          {
            v10 = *v13; /*0x10033f2b9*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x10033f2bc*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x10033f2c3*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033f315*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x10033f31a*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x10033f2c9*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x10033f2d0*/
            return 0; /*0x10033f2d4*/
          }
        }
      }
    }
  }
  return result; /*0x10033f266*/
}