// __ZN13codexmate_lib4core6models1_99_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..LogoutPayload$GT$9serialize @ 0x100344b50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..LogoutPayload$GT$::serialize::h98b9563e3c294ef7(
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

  v6 = *a2; /*0x100344b60*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100344b63*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100344b6a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100344c30*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100344c38*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100344b74*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100344b7b*/
  v12 = 256; /*0x100344b7f*/
  v13 = a2; /*0x100344b85*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100344b9c*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_1013,
             11,
             a1);
  if ( !result ) /*0x100344ba4*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x100344bb5*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344bc1*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100344bdc*/
                 &v12,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_1014,
                 12,
                 a1 + 1);
      if ( !result ) /*0x100344be4*/
      {
        result = 0; /*0x100344be6*/
        if ( (v12 & 1) == 0 ) /*0x100344bec*/
        {
          if ( HIBYTE(v12) ) /*0x100344bf2*/
          {
            v10 = *v13; /*0x100344bf8*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x100344bfb*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x100344c02*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100344c54*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x100344c59*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x100344c08*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x100344c0f*/
            return 0; /*0x100344c13*/
          }
        }
      }
    }
  }
  return result; /*0x100344ba6*/
}