// __ZN13codexmate_lib4core6models1_104_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatus$GT$9serialize @ 0x10033d130 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatus$GT$::serialize::ha2723b3b3bea335f(
        __int64 *a1,
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

  v6 = *a1; /*0x10033d142*/
  v7 = *a2; /*0x10033d145*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10033d148*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10033d14f*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033d21c*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v8 = *(_QWORD *)(v7 + 16); /*0x10033d224*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10033d159*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10033d160*/
  v13 = 256; /*0x10033d164*/
  v14 = a2; /*0x10033d16a*/
  result = serde_core::ser::SerializeMap::serialize_entry::ha3f4bc21ceca1fcc( /*0x10033d182*/
             &v13,
             &anon_b0ee9adff4519c22b647af231a5a39fa_54,
             4,
             a1 + 2);
  if ( !result ) /*0x10033d18a*/
  {
    if ( !v6 ) /*0x10033d19c*/
      goto LABEL_9; /*0x10033d19c*/
    if ( (_BYTE)v13 == 1 ) /*0x10033d1a2*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d1b0*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x10033d1c8*/
               &v13,
               &anon_b0ee9adff4519c22b647af231a5a39fa_731,
               20,
               a1);
    if ( !result ) /*0x10033d1d0*/
    {
LABEL_9:
      result = 0; /*0x10033d1d2*/
      if ( (v13 & 1) == 0 && HIBYTE(v13) ) /*0x10033d1de*/
      {
        v11 = *v14; /*0x10033d1e4*/
        v12 = *(_QWORD *)(*v14 + 16LL); /*0x10033d1e7*/
        if ( *(_QWORD *)*v14 == v12 ) /*0x10033d1ee*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033d240*/
            *v14,
            v12,
            1,
            1,
            1,
            v10);
          v12 = *(_QWORD *)(v11 + 16); /*0x10033d245*/
        }
        *(_BYTE *)(*(_QWORD *)(v11 + 8) + v12) = 125; /*0x10033d1f4*/
        *(_QWORD *)(v11 + 16) = v12 + 1; /*0x10033d1fb*/
        return 0; /*0x10033d1ff*/
      }
    }
  }
  return result; /*0x10033d18c*/
}