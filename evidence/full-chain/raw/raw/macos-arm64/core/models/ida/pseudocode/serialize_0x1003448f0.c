// __ZN13codexmate_lib4core6models1_98_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ToolRankItem$GT$9serialize @ 0x1003448f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ToolRankItem$GT$::serialize::h700c736dd5ca299e(
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

  v6 = *a2; /*0x100344900*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100344903*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034490a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003449d1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003449d9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100344914*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034491b*/
  v12 = 256; /*0x10034491f*/
  v13 = a2; /*0x100344925*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034493c*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_55,
             4,
             a1);
  if ( !result ) /*0x100344944*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x100344955*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344961*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10034497d*/
                 &v12,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_676,
                 5,
                 a1 + 24);
      if ( !result ) /*0x100344985*/
      {
        result = 0; /*0x100344987*/
        if ( (v12 & 1) == 0 ) /*0x10034498d*/
        {
          if ( HIBYTE(v12) ) /*0x100344993*/
          {
            v10 = *v13; /*0x100344999*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x10034499c*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x1003449a3*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003449f5*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x1003449fa*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x1003449a9*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x1003449b0*/
            return 0; /*0x1003449b4*/
          }
        }
      }
    }
  }
  return result; /*0x100344946*/
}