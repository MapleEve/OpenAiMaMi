// __ZN13codexmate_lib4core6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ChangeAnalyticsPayload$GT$9serialize @ 0x100340c60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ChangeAnalyticsPayload$GT$::serialize::h98b3e00d2ed23557(
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

  v6 = *a2; /*0x100340c70*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100340c73*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100340c7a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100340da4*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100340dac*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100340c84*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100340c8b*/
  v9 = 256; /*0x100340c8f*/
  v10 = a2; /*0x100340c95*/
  result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100340cad*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_862,
             13,
             a1 + 24);
  if ( !result ) /*0x100340cb5*/
  {
    if ( (_BYTE)v9 ) /*0x100340cc6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340cc6*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100340ceb*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_863,
               13,
               a1 + 28);
    if ( result ) /*0x100340cf3*/
      return result; /*0x100340cf3*/
    if ( (_BYTE)v9 ) /*0x100340cf9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340cf9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100340d0f*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_864,
               12,
               a1 + 32);
    if ( result ) /*0x100340d17*/
      return result; /*0x100340d17*/
    if ( (_BYTE)v9 ) /*0x100340d1d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340cd2*/
    result = serde_core::ser::SerializeMap::serialize_entry::h9bfa979f8c9a8274( /*0x100340d33*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_865,
               13,
               a1 + 36);
    if ( !result ) /*0x100340d3b*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h46f30468f49b59e7( /*0x100340d48*/
                 &v9,
                 a1);
      if ( !result ) /*0x100340d50*/
      {
        result = 0; /*0x100340d56*/
        if ( (v9 & 1) == 0 ) /*0x100340d5c*/
        {
          if ( HIBYTE(v9) ) /*0x100340d66*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100340d7f*/
              *v10,
              &anon_b0ee9adff4519c22b647af231a5a39fa_15,
              1);
            return 0; /*0x100340d84*/
          }
        }
      }
    }
  }
  return result; /*0x100340cb7*/
}