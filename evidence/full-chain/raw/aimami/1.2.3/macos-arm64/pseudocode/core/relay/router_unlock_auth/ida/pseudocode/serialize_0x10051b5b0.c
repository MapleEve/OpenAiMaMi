// __ZN13codexmate_lib4core5relay18router_unlock_auth1_130_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthReadiness$GT$9serialize @ 0x10051b5b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthReadiness$GT$::serialize::h627a849232fa9a3d(
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

  v6 = *a2; /*0x10051b5c0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x10051b5c3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10051b5ca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10051b709*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x10051b711*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x10051b5d4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10051b5db*/
  v9 = 256; /*0x10051b5df*/
  v10 = a2; /*0x10051b5e5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10051b5fd*/
             &v9,
             &anon_92869709a5e99ce1936aa4e326b6c562_855,
             17,
             a1 + 24);
  if ( !result ) /*0x10051b605*/
  {
    if ( (_BYTE)v9 ) /*0x10051b616*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10051b616*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10051b63b*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_856,
               18,
               a1 + 25);
    if ( result ) /*0x10051b643*/
      return result; /*0x10051b643*/
    if ( (_BYTE)v9 ) /*0x10051b649*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10051b649*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10051b65e*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_857,
               12,
               a1);
    if ( result ) /*0x10051b666*/
      return result; /*0x10051b666*/
    if ( (_BYTE)v9 ) /*0x10051b66c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10051b66c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10051b682*/
               &v9,
               &anon_92869709a5e99ce1936aa4e326b6c562_858,
               17,
               a1 + 26);
    if ( result ) /*0x10051b68a*/
      return result; /*0x10051b68a*/
    if ( (_BYTE)v9 ) /*0x10051b694*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10051b622*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10051b6ad*/
               &v9,
               "canRestorePreviousAuth",
               22,
               a1 + 27);
    if ( !result ) /*0x10051b6b5*/
    {
      result = 0; /*0x10051b6bb*/
      if ( (v9 & 1) == 0 ) /*0x10051b6c1*/
      {
        if ( HIBYTE(v9) ) /*0x10051b6cb*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(*v10, "}false", 1); /*0x10051b6e4*/
          return 0; /*0x10051b6e9*/
        }
      }
    }
  }
  return result; /*0x10051b607*/
}