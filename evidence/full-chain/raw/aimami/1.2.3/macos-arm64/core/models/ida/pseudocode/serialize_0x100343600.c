// __ZN13codexmate_lib4core6models1_116_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceRuntimePermissionsPayload$GT$9serialize @ 0x100343600 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceRuntimePermissionsPayload$GT$::serialize::h7fb062cbb5166528(
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

  v6 = *a2; /*0x100343610*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100343613*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034361a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100343701*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100343709*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100343624*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034362b*/
  v9 = 256; /*0x10034362f*/
  v10 = a2; /*0x100343635*/
  result = serde_core::ser::SerializeMap::serialize_entry::hf3f935912128e1c0( /*0x10034364c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_962,
             10,
             a1);
  if ( !result ) /*0x100343654*/
  {
    if ( (_BYTE)v9 ) /*0x100343665*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343665*/
    result = serde_core::ser::SerializeMap::serialize_entry::hf3f935912128e1c0( /*0x10034368a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_963,
               17,
               a1 + 1);
    if ( result ) /*0x100343692*/
      return result; /*0x100343692*/
    if ( (_BYTE)v9 ) /*0x100343698*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343671*/
    result = serde_core::ser::SerializeMap::serialize_entry::hf3f935912128e1c0( /*0x1003436b1*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_964,
               13,
               a1 + 2);
    if ( !result ) /*0x1003436b9*/
    {
      result = 0; /*0x1003436bb*/
      if ( (v9 & 1) == 0 ) /*0x1003436c1*/
      {
        if ( HIBYTE(v9) ) /*0x1003436c7*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003436dc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x1003436e1*/
        }
      }
    }
  }
  return result; /*0x100343656*/
}