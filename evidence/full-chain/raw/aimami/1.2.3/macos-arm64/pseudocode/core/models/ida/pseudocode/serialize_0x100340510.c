// __ZN13codexmate_lib4core6models1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..TokenAnalyticsPayload$GT$9serialize @ 0x100340510 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..TokenAnalyticsPayload$GT$::serialize::h1b41f711dbfc8372(
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

  v6 = *a2; /*0x100340520*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100340523*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034052a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100340700*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100340708*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100340534*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034053b*/
  v9 = 256; /*0x10034053f*/
  v10 = a2; /*0x100340545*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10034055d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_624,
             11,
             a1 + 24);
  if ( !result ) /*0x100340565*/
  {
    if ( (_BYTE)v9 ) /*0x100340576*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340576*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5dc1ceeecd15401c( /*0x10034059b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_832,
               13,
               a1 + 32);
    if ( result ) /*0x1003405a3*/
      return result; /*0x1003405a3*/
    if ( (_BYTE)v9 ) /*0x1003405a9*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003405a9*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5dc1ceeecd15401c( /*0x1003405bf*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_833,
               8,
               a1 + 40);
    if ( result ) /*0x1003405c7*/
      return result; /*0x1003405c7*/
    if ( (_BYTE)v9 ) /*0x1003405cd*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003405cd*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5dc1ceeecd15401c( /*0x1003405e3*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_834,
               9,
               a1 + 48);
    if ( result ) /*0x1003405eb*/
      return result; /*0x1003405eb*/
    if ( (_BYTE)v9 ) /*0x1003405f5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003405f5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5dc1ceeecd15401c( /*0x10034060b*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_835,
               12,
               a1 + 56);
    if ( result ) /*0x100340613*/
      return result; /*0x100340613*/
    if ( (_BYTE)v9 ) /*0x10034061d*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10034061d*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x100340637*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_836,
               10,
               a1 + 64);
    if ( result ) /*0x10034063f*/
      return result; /*0x10034063f*/
    if ( (_BYTE)v9 ) /*0x100340649*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340649*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x100340663*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_837,
               11,
               a1 + 72);
    if ( result ) /*0x10034066b*/
      return result; /*0x10034066b*/
    if ( (_BYTE)v9 ) /*0x100340675*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340582*/
    result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x10034068f*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_838,
               14,
               a1 + 80);
    if ( !result ) /*0x100340697*/
    {
      result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h6257e601857310b3( /*0x1003406a4*/
                 &v9,
                 a1);
      if ( !result ) /*0x1003406ac*/
      {
        result = 0; /*0x1003406b2*/
        if ( (v9 & 1) == 0 ) /*0x1003406b8*/
        {
          if ( HIBYTE(v9) ) /*0x1003406c2*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003406db*/
              *v10,
              &anon_b0ee9adff4519c22b647af231a5a39fa_15,
              1);
            return 0; /*0x1003406e0*/
          }
        }
      }
    }
  }
  return result; /*0x100340567*/
}