// __ZN13codexmate_lib4core6models1_98_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..CleanPayload$GT$9serialize @ 0x100344440 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..CleanPayload$GT$::serialize::hda7b5f9b2b1fdf3e(
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

  v6 = *a2; /*0x100344450*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100344453*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034445a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100344541*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100344549*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100344464*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034446b*/
  v9 = 256; /*0x10034446f*/
  v10 = a2; /*0x100344475*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x10034448c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_989,
             18,
             a1);
  if ( !result ) /*0x100344494*/
  {
    if ( (_BYTE)v9 ) /*0x1003444a5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003444a5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x1003444ca*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_990,
               22,
               a1 + 4);
    if ( result ) /*0x1003444d2*/
      return result; /*0x1003444d2*/
    if ( (_BYTE)v9 ) /*0x1003444d8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003444b1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x1003444f1*/
               &v9,
               "staleEntriesRemovedthreadNameprojectNameprojectPathparentSessionIddepthagentNicknameagentRoleisArchivedex"
               "cerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               19,
               a1 + 8);
    if ( !result ) /*0x1003444f9*/
    {
      result = 0; /*0x1003444fb*/
      if ( (v9 & 1) == 0 ) /*0x100344501*/
      {
        if ( HIBYTE(v9) ) /*0x100344507*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x10034451c*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100344521*/
        }
      }
    }
  }
  return result; /*0x100344496*/
}