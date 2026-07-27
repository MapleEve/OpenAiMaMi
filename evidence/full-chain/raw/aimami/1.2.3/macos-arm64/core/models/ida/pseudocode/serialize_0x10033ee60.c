// __ZN13codexmate_lib4core6models1_106_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnoseSessionState$GT$9serialize @ 0x10033ee60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnoseSessionState$GT$::serialize::had0f669afbde096b(
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

  v6 = *a2; /*0x10033ee70*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033ee73*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033ee7a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033ef3e*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033ef46*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033ee84*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033ee8b*/
  v12 = 256; /*0x10033ee8f*/
  v13 = a2; /*0x10033ee95*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10033eead*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_782,
             18,
             a1 + 16);
  if ( !result ) /*0x10033eeb5*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x10033eec6*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033eed2*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b(&v12, "latestRolloutTimestamp", 22, a1); /*0x10033eeea*/
      if ( !result ) /*0x10033eef2*/
      {
        result = 0; /*0x10033eef4*/
        if ( (v12 & 1) == 0 ) /*0x10033eefa*/
        {
          if ( HIBYTE(v12) ) /*0x10033ef00*/
          {
            v10 = *v13; /*0x10033ef06*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x10033ef09*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x10033ef10*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033ef62*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x10033ef67*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x10033ef16*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x10033ef1d*/
            return 0; /*0x10033ef21*/
          }
        }
      }
    }
  }
  return result; /*0x10033eeb7*/
}