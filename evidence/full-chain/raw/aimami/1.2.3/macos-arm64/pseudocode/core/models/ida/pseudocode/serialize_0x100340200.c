// __ZN13codexmate_lib4core6models1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ForceKillCodexPayload$GT$9serialize @ 0x100340200 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ForceKillCodexPayload$GT$::serialize::hfad9a3fe64567a98(
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

  v6 = *a2; /*0x100340210*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100340213*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034021a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003402de*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003402e6*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100340224*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034022b*/
  v12 = 256; /*0x10034022f*/
  v13 = a2; /*0x100340235*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10034024d*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_827,
             11,
             a1 + 24);
  if ( !result ) /*0x100340255*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x100340266*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340272*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39( /*0x10034028a*/
                 &v12,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_828,
                 9,
                 a1);
      if ( !result ) /*0x100340292*/
      {
        result = 0; /*0x100340294*/
        if ( (v12 & 1) == 0 ) /*0x10034029a*/
        {
          if ( HIBYTE(v12) ) /*0x1003402a0*/
          {
            v10 = *v13; /*0x1003402a6*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x1003402a9*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x1003402b0*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100340302*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x100340307*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x1003402b6*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x1003402bd*/
            return 0; /*0x1003402c1*/
          }
        }
      }
    }
  }
  return result; /*0x100340257*/
}