// __ZN13codexmate_lib4core6models1_104_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionListPayload$GT$9serialize @ 0x10033d520 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionListPayload$GT$::serialize::h9b4d76982de8d6a8(
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

  v6 = *a2; /*0x10033d530*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033d533*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033d53a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033d601*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033d609*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033d544*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033d54b*/
  v12 = 256; /*0x10033d54f*/
  v13 = a2; /*0x10033d555*/
  result = serde_core::ser::SerializeMap::serialize_entry::haccd74c03e670fe8( /*0x10033d56c*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_28,
             5,
             a1);
  if ( !result ) /*0x10033d574*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x10033d585*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d591*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10033d5ad*/
                 &v12,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_678,
                 5,
                 a1 + 24);
      if ( !result ) /*0x10033d5b5*/
      {
        result = 0; /*0x10033d5b7*/
        if ( (v12 & 1) == 0 ) /*0x10033d5bd*/
        {
          if ( HIBYTE(v12) ) /*0x10033d5c3*/
          {
            v10 = *v13; /*0x10033d5c9*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x10033d5cc*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x10033d5d3*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033d625*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x10033d62a*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x10033d5d9*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x10033d5e0*/
            return 0; /*0x10033d5e4*/
          }
        }
      }
    }
  }
  return result; /*0x10033d576*/
}