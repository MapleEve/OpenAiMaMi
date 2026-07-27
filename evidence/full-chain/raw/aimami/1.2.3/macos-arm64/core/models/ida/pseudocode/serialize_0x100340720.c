// __ZN13codexmate_lib4core6models1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceLlmConfigPayload$GT$9serialize @ 0x100340720 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceLlmConfigPayload$GT$::serialize::h834c330b5e400249(
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

  v6 = *a2; /*0x100340730*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100340733*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034073a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100340879*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100340881*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100340744*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034074b*/
  v9 = 256; /*0x10034074f*/
  v10 = a2; /*0x100340755*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10034076c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_840,
             8,
             a1);
  if ( !result ) /*0x100340774*/
  {
    if ( (_BYTE)v9 ) /*0x100340785*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340785*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003407aa*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_444,
               6,
               a1 + 24);
    if ( result ) /*0x1003407b2*/
      return result; /*0x1003407b2*/
    if ( (_BYTE)v9 ) /*0x1003407b8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003407b8*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003407ce*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_414,
               5,
               a1 + 48);
    if ( result ) /*0x1003407d6*/
      return result; /*0x1003407d6*/
    if ( (_BYTE)v9 ) /*0x1003407dc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1003407dc*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x1003407f2*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_412,
               7,
               a1 + 72);
    if ( result ) /*0x1003407fa*/
      return result; /*0x1003407fa*/
    if ( (_BYTE)v9 ) /*0x100340804*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100340791*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10034081d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_841,
               10,
               a1 + 96);
    if ( !result ) /*0x100340825*/
    {
      result = 0; /*0x10034082b*/
      if ( (v9 & 1) == 0 ) /*0x100340831*/
      {
        if ( HIBYTE(v9) ) /*0x10034083b*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100340854*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100340859*/
        }
      }
    }
  }
  return result; /*0x100340776*/
}