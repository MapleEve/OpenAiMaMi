// __ZN13codexmate_lib4core6models1_98_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..CodexSession$GT$9serialize @ 0x100344560 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..CodexSession$GT$::serialize::h36645b80651aff61(
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

  v6 = *a2; /*0x100344570*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100344573*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034457a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003448d8*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003448e0*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100344584*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034458b*/
  v9 = 256; /*0x10034458f*/
  v10 = a2; /*0x100344595*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003445ad*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1 + 16);
  if ( !result ) /*0x1003445b5*/
  {
    if ( (_BYTE)v9 ) /*0x1003445c6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003445c6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003445eb*/
               &v9,
               "threadNameprojectNameprojectPathparentSessionIddepthagentNicknameagentRoleisArchivedexcerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               10,
               a1 + 40);
    if ( result ) /*0x1003445f3*/
      return result; /*0x1003445f3*/
    if ( (_BYTE)v9 ) /*0x1003445f9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003445f9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5dc1ceeecd15401c( /*0x100344612*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_27,
               9,
               a1 + 312);
    if ( result ) /*0x10034461a*/
      return result; /*0x10034461a*/
    if ( (_BYTE)v9 ) /*0x100344620*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344620*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b(&v9, &unk_1015E3AD0, 8, a1); /*0x100344635*/
    if ( result ) /*0x10034463d*/
      return result; /*0x10034463d*/
    if ( (_BYTE)v9 ) /*0x100344647*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344647*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100344661*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_940,
               8,
               a1 + 64);
    if ( result ) /*0x100344669*/
      return result; /*0x100344669*/
    if ( (_BYTE)v9 ) /*0x100344673*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344673*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10034468d*/
               &v9,
               "projectNameprojectPathparentSessionIddepthagentNicknameagentRoleisArchivedexcerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               11,
               a1 + 88);
    if ( result ) /*0x100344695*/
      return result; /*0x100344695*/
    if ( (_BYTE)v9 ) /*0x10034469f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034469f*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1003446b9*/
               &v9,
               "projectPathparentSessionIddepthagentNicknameagentRoleisArchivedexcerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               11,
               a1 + 112);
    if ( result ) /*0x1003446c1*/
      return result; /*0x1003446c1*/
    if ( (_BYTE)v9 ) /*0x1003446cb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003446cb*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1003446e8*/
               &v9,
               "parentSessionIddepthagentNicknameagentRoleisArchivedexcerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               15,
               a1 + 136);
    if ( result ) /*0x1003446f0*/
      return result; /*0x1003446f0*/
    if ( (_BYTE)v9 ) /*0x1003446fa*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003446fa*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100344717*/
               &v9,
               "depthagentNicknameagentRoleisArchivedexcerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               5,
               a1 + 320);
    if ( result ) /*0x10034471f*/
      return result; /*0x10034471f*/
    if ( (_BYTE)v9 ) /*0x100344729*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344729*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100344746*/
               &v9,
               "agentNicknameagentRoleisArchivedexcerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               13,
               a1 + 160);
    if ( result ) /*0x10034474e*/
      return result; /*0x10034474e*/
    if ( (_BYTE)v9 ) /*0x100344758*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344758*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x100344775*/
               &v9,
               "agentRoleisArchivedexcerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               9,
               a1 + 184);
    if ( result ) /*0x10034477d*/
      return result; /*0x10034477d*/
    if ( (_BYTE)v9 ) /*0x100344787*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344787*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x1003447a4*/
               &v9,
               "isArchivedexcerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               10,
               a1 + 324);
    if ( result ) /*0x1003447ac*/
      return result; /*0x1003447ac*/
    if ( (_BYTE)v9 ) /*0x1003447b6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003447b6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1003447d3*/
               &v9,
               "excerptprojectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               7,
               a1 + 208);
    if ( result ) /*0x1003447db*/
      return result; /*0x1003447db*/
    if ( (_BYTE)v9 ) /*0x1003447e5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003447e5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100344802*/
               &v9,
               "projectPathMissingisConversationThreadrolloutMissingworktreeMigration",
               18,
               a1 + 325);
    if ( result ) /*0x10034480a*/
      return result; /*0x10034480a*/
    if ( (_BYTE)v9 ) /*0x100344814*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100344814*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100344831*/
               &v9,
               "isConversationThreadrolloutMissingworktreeMigration",
               20,
               a1 + 326);
    if ( result ) /*0x100344839*/
      return result; /*0x100344839*/
    if ( (_BYTE)v9 ) /*0x100344843*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003445d2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100344860*/
               &v9,
               "rolloutMissingworktreeMigration",
               14,
               a1 + 327);
    if ( !result ) /*0x100344868*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h910df138417392b0( /*0x10034487c*/
                 &v9,
                 a1 + 232);
      if ( !result ) /*0x100344884*/
      {
        result = 0; /*0x10034488a*/
        if ( (v9 & 1) == 0 ) /*0x100344890*/
        {
          if ( HIBYTE(v9) ) /*0x10034489a*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003448b3*/
              *v10,
              &anon_b0ee9adff4519c22b647af231a5a39fa_15,
              1);
            return 0; /*0x1003448b8*/
          }
        }
      }
    }
  }
  return result; /*0x1003445b7*/
}