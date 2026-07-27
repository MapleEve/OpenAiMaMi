// __ZN13codexmate_lib4core6models1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnoseRegistryState$GT$9serialize @ 0x1003400f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..DiagnoseRegistryState$GT$::serialize::h341a827fce770a11(
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

  v6 = *a2; /*0x100340100*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100340103*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034010a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003401d1*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003401d9*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100340114*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034011b*/
  v12 = 256; /*0x10034011f*/
  v13 = a2; /*0x100340125*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10034013c*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_649,
             12,
             a1);
  if ( !result ) /*0x100340144*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x100340155*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340161*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10034017d*/
                 &v12,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_826,
                 16,
                 a1 + 4);
      if ( !result ) /*0x100340185*/
      {
        result = 0; /*0x100340187*/
        if ( (v12 & 1) == 0 ) /*0x10034018d*/
        {
          if ( HIBYTE(v12) ) /*0x100340193*/
          {
            v10 = *v13; /*0x100340199*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x10034019c*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x1003401a3*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003401f5*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x1003401fa*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x1003401a9*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x1003401b0*/
            return 0; /*0x1003401b4*/
          }
        }
      }
    }
  }
  return result; /*0x100340146*/
}