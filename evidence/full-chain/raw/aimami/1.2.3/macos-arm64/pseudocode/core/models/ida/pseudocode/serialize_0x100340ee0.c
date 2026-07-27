// __ZN13codexmate_lib4core6models1_108_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PerModeShortcutPayload$GT$9serialize @ 0x100340ee0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..PerModeShortcutPayload$GT$::serialize::h4231229b7dbb7975(
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

  v6 = *a2; /*0x100340ef0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100340ef3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100340efa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100341039*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100341041*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100340f04*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100340f0b*/
  v9 = 256; /*0x100340f0f*/
  v10 = a2; /*0x100340f15*/
  result = serde_core::ser::SerializeMap::serialize_entry::hc8da1b32a96e2c99( /*0x100340f2d*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_867,
             7,
             a1 + 48);
  if ( !result ) /*0x100340f35*/
  {
    if ( (_BYTE)v9 ) /*0x100340f46*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340f46*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100340f6a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_868,
               8,
               a1);
    if ( result ) /*0x100340f72*/
      return result; /*0x100340f72*/
    if ( (_BYTE)v9 ) /*0x100340f78*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340f78*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100340f8e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_869,
               7,
               a1 + 24);
    if ( result ) /*0x100340f96*/
      return result; /*0x100340f96*/
    if ( (_BYTE)v9 ) /*0x100340f9c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340f9c*/
    result = serde_core::ser::SerializeMap::serialize_entry::hefd8f5c45e63ff57( /*0x100340fb2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_870,
               5,
               a1 + 64);
    if ( result ) /*0x100340fba*/
      return result; /*0x100340fba*/
    if ( (_BYTE)v9 ) /*0x100340fc4*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340f52*/
    result = serde_core::ser::SerializeMap::serialize_entry::hdfb9ba3c4f1912f6( /*0x100340fdd*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_871,
               12,
               a1 + 56);
    if ( !result ) /*0x100340fe5*/
    {
      result = 0; /*0x100340feb*/
      if ( (v9 & 1) == 0 ) /*0x100340ff1*/
      {
        if ( HIBYTE(v9) ) /*0x100340ffb*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100341014*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100341019*/
        }
      }
    }
  }
  return result; /*0x100340f37*/
}