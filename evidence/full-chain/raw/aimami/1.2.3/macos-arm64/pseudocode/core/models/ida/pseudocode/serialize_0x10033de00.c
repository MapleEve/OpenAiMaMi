// __ZN13codexmate_lib4core6models1_105_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..CoreSnapshotPayload$GT$9serialize @ 0x10033de00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..CoreSnapshotPayload$GT$::serialize::h58b7fdab25140d97(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int16 v13; // [rsp+0h] [rbp-30h] BYREF
  _QWORD *v14; // [rsp+8h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 696); /*0x10033de12*/
  v7 = *a2; /*0x10033de19*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10033de1c*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10033de23*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033df23*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v8 = *(_QWORD *)(v7 + 16); /*0x10033df2b*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10033de2d*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10033de34*/
  v13 = 256; /*0x10033de38*/
  v14 = a2; /*0x10033de3e*/
  result = serde_core::ser::SerializeMap::serialize_entry::haac7b2458e27889b( /*0x10033de55*/
             &v13,
             &anon_b0ee9adff4519c22b647af231a5a39fa_448,
             6,
             a1);
  if ( !result ) /*0x10033de5d*/
  {
    if ( (_BYTE)v13 ) /*0x10033de70*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033de7e*/
    result = serde_core::ser::SerializeMap::serialize_entry::h71e4a4d8f1ba324e( /*0x10033de9a*/
               &v13,
               &anon_b0ee9adff4519c22b647af231a5a39fa_753,
               8,
               a1 + 672);
    if ( result ) /*0x10033dea2*/
      return result; /*0x10033dea2*/
    if ( !__OFSUB__(-v6, 1) ) /*0x10033dea7*/
    {
      if ( (_BYTE)v13 ) /*0x10033dede*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033dede*/
      result = serde_core::ser::SerializeMap::serialize_entry::hf5188b1e1c7be501( /*0x10033defa*/
                 &v13,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_754,
                 13,
                 a1 + 696);
      if ( result ) /*0x10033df02*/
        return result; /*0x10033df02*/
    }
    result = 0; /*0x10033dea9*/
    if ( (v13 & 1) == 0 && HIBYTE(v13) ) /*0x10033deb5*/
    {
      v11 = *v14; /*0x10033debb*/
      v12 = *(_QWORD *)(*v14 + 16LL); /*0x10033debe*/
      if ( *(_QWORD *)*v14 == v12 ) /*0x10033dec5*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(*v14, v12, 1, 1, 1, v10); /*0x10033df47*/
        v12 = *(_QWORD *)(v11 + 16); /*0x10033df4c*/
      }
      *(_BYTE *)(*(_QWORD *)(v11 + 8) + v12) = 125; /*0x10033decb*/
      *(_QWORD *)(v11 + 16) = v12 + 1; /*0x10033ded2*/
      return 0; /*0x10033ded6*/
    }
  }
  return result; /*0x10033de5f*/
}