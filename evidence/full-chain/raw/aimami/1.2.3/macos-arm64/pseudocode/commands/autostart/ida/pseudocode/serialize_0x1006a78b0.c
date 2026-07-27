// __ZN13codexmate_lib8commands9autostart1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..autostart..AutostartState$GT$9serialize @ 0x1006a78b0
__int64 __fastcall codexmate_lib::commands::autostart::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..autostart..AutostartState$GT$::serialize::h7a971d27ef1d5fe0(
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

  v6 = *a2; /*0x1006a78c0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1006a78c3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1006a78ca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1006a7990*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1006a7998*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1006a78d4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1006a78db*/
  v12 = 256; /*0x1006a78df*/
  v13 = a2; /*0x1006a78e5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x1006a78fc*/
             &v12,
             &anon_4776471024d1e9bb78f2861cb2b51e1e_482,
             7,
             a1);
  if ( !result ) /*0x1006a7904*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x1006a7915*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1006a7921*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x1006a793c*/
                 &v12,
                 &anon_4776471024d1e9bb78f2861cb2b51e1e_737,
                 14,
                 a1 + 1);
      if ( !result ) /*0x1006a7944*/
      {
        result = 0; /*0x1006a7946*/
        if ( (v12 & 1) == 0 ) /*0x1006a794c*/
        {
          if ( HIBYTE(v12) ) /*0x1006a7952*/
          {
            v10 = *v13; /*0x1006a7958*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x1006a795b*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x1006a7962*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1006a79b4*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x1006a79b9*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x1006a7968*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x1006a796f*/
            return 0; /*0x1006a7973*/
          }
        }
      }
    }
  }
  return result; /*0x1006a7906*/
}