// __ZN13codexmate_lib4core6models1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..InstalledSkillSummary$GT$9serialize @ 0x100340310 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..InstalledSkillSummary$GT$::serialize::h9a17149ac7ac570f(
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

  v6 = *a2; /*0x100340320*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100340323*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034032a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003404f4*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003404fc*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100340334*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034033b*/
  v9 = 256; /*0x10034033f*/
  v10 = a2; /*0x100340345*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034035d*/
             &v9,
             "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
             2,
             a1 + 16);
  if ( !result ) /*0x100340365*/
  {
    if ( (_BYTE)v9 ) /*0x100340376*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340376*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034039b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_55,
               4,
               a1 + 40);
    if ( result ) /*0x1003403a3*/
      return result; /*0x1003403a3*/
    if ( (_BYTE)v9 ) /*0x1003403a9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003403a9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1003403c2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_733,
               5,
               a1 + 136);
    if ( result ) /*0x1003403ca*/
      return result; /*0x1003403ca*/
    if ( (_BYTE)v9 ) /*0x1003403d0*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003403d0*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1003403e9*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_721,
               7,
               a1 + 160);
    if ( result ) /*0x1003403f1*/
      return result; /*0x1003403f1*/
    if ( (_BYTE)v9 ) /*0x1003403fb*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003403fb*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100340415*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_734,
               12,
               a1 + 64);
    if ( result ) /*0x10034041d*/
      return result; /*0x10034041d*/
    if ( (_BYTE)v9 ) /*0x100340427*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340427*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100340441*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_830,
               13,
               a1 + 88);
    if ( result ) /*0x100340449*/
      return result; /*0x100340449*/
    if ( (_BYTE)v9 ) /*0x100340453*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340453*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034046d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_831,
               13,
               a1 + 112);
    if ( result ) /*0x100340475*/
      return result; /*0x100340475*/
    if ( (_BYTE)v9 ) /*0x10034047f*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340382*/
    result = serde_core::ser::SerializeMap::serialize_entry::he1c08c68bad7779b( /*0x100340498*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_27,
               9,
               a1);
    if ( !result ) /*0x1003404a0*/
    {
      result = 0; /*0x1003404a6*/
      if ( (v9 & 1) == 0 ) /*0x1003404ac*/
      {
        if ( HIBYTE(v9) ) /*0x1003404b6*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003404cf*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x1003404d4*/
        }
      }
    }
  }
  return result; /*0x100340367*/
}