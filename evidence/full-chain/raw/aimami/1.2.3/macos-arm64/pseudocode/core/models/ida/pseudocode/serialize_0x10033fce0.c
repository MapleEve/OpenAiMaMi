// __ZN13codexmate_lib4core6models1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiProxyConfigPayload$GT$9serialize @ 0x10033fce0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiProxyConfigPayload$GT$::serialize::h2b63a77e2db41748(
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

  v6 = *a2; /*0x10033fcf0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10033fcf3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10033fcfa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033fdbe*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10033fdc6*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10033fd04*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10033fd0b*/
  v12 = 256; /*0x10033fd0f*/
  v13 = a2; /*0x10033fd15*/
  result = serde_core::ser::SerializeMap::serialize_entry::hf35fc30f9ef72b82(&v12, "mode", 4, a1 + 24); /*0x10033fd2d*/
  if ( !result ) /*0x10033fd35*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x10033fd46*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fd52*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10033fd6a*/
                 &v12,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_673,
                 3,
                 a1);
      if ( !result ) /*0x10033fd72*/
      {
        result = 0; /*0x10033fd74*/
        if ( (v12 & 1) == 0 ) /*0x10033fd7a*/
        {
          if ( HIBYTE(v12) ) /*0x10033fd80*/
          {
            v10 = *v13; /*0x10033fd86*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x10033fd89*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x10033fd90*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033fde2*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x10033fde7*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x10033fd96*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x10033fd9d*/
            return 0; /*0x10033fda1*/
          }
        }
      }
    }
  }
  return result; /*0x10033fd37*/
}