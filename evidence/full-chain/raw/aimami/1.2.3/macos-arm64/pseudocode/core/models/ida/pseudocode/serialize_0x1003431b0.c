// __ZN13codexmate_lib4core6models1_114_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionWorktreeMigrationInfo$GT$9serialize @ 0x1003431b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..SessionWorktreeMigrationInfo$GT$::serialize::h182d74f3cfc231b3(
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

  v6 = *a2; /*0x1003431c0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x1003431c3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x1003431ca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100343309*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100343311*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x1003431d4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x1003431db*/
  v9 = 256; /*0x1003431df*/
  v10 = a2; /*0x1003431e5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003431fc*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_670,
             10,
             a1);
  if ( !result ) /*0x100343204*/
  {
    if ( (_BYTE)v9 ) /*0x100343215*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343215*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034323a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_771,
               10,
               a1 + 24);
    if ( result ) /*0x100343242*/
      return result; /*0x100343242*/
    if ( (_BYTE)v9 ) /*0x100343248*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343248*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10034325e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_952,
               11,
               a1 + 72);
    if ( result ) /*0x100343266*/
      return result; /*0x100343266*/
    if ( (_BYTE)v9 ) /*0x10034326c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034326c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x100343282*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_953,
               10,
               a1 + 73);
    if ( result ) /*0x10034328a*/
      return result; /*0x10034328a*/
    if ( (_BYTE)v9 ) /*0x100343294*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343221*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x1003432ad*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_954,
               13,
               a1 + 48);
    if ( !result ) /*0x1003432b5*/
    {
      result = 0; /*0x1003432bb*/
      if ( (v9 & 1) == 0 ) /*0x1003432c1*/
      {
        if ( HIBYTE(v9) ) /*0x1003432cb*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003432e4*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x1003432e9*/
        }
      }
    }
  }
  return result; /*0x100343206*/
}