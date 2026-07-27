// __ZN13codexmate_lib4core6models1_97_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..CoreWarning$GT$9serialize @ 0x100343eb0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..CoreWarning$GT$::serialize::h4ae11faf6292fb86(
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

  v6 = *a2; /*0x100343ec0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100343ec3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100343eca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100343f91*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100343f99*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100343ed4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100343edb*/
  v12 = 256; /*0x100343edf*/
  v13 = a2; /*0x100343ee5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100343efc*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_54,
             4,
             a1);
  if ( !result ) /*0x100343f04*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x100343f15*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343f21*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd(&v12, "message", 7, a1 + 24); /*0x100343f3d*/
      if ( !result ) /*0x100343f45*/
      {
        result = 0; /*0x100343f47*/
        if ( (v12 & 1) == 0 ) /*0x100343f4d*/
        {
          if ( HIBYTE(v12) ) /*0x100343f53*/
          {
            v10 = *v13; /*0x100343f59*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x100343f5c*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x100343f63*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100343fb5*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x100343fba*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x100343f69*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x100343f70*/
            return 0; /*0x100343f74*/
          }
        }
      }
    }
  }
  return result; /*0x100343f06*/
}