// __ZN13codexmate_lib4core6models1_110_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..McpServerMutationPayload$GT$9serialize @ 0x100341d50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..McpServerMutationPayload$GT$::serialize::hfa10787639870df6(
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
  __int16 v9; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+10h] [rbp-20h]

  v6 = *a2; /*0x100341d60*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100341d63*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100341d6a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100341e57*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100341e5f*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100341d74*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100341d7b*/
  v9 = 256; /*0x100341d7f*/
  v10 = a2; /*0x100341d85*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9294e90f5caad8e1(&v9, "server", 6, a1); /*0x100341d9c*/
  if ( !result ) /*0x100341da4*/
  {
    if ( (_BYTE)v9 ) /*0x100341db5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341db5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100341ddd*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_678,
               5,
               a1 + 248);
    if ( result ) /*0x100341de5*/
      return result; /*0x100341de5*/
    if ( (_BYTE)v9 ) /*0x100341deb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100341dc1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100341e07*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_670,
               10,
               a1 + 224);
    if ( !result ) /*0x100341e0f*/
    {
      result = 0; /*0x100341e11*/
      if ( (v9 & 1) == 0 ) /*0x100341e17*/
      {
        if ( HIBYTE(v9) ) /*0x100341e1d*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100341e32*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100341e37*/
        }
      }
    }
  }
  return result; /*0x100341da6*/
}