// __ZN13codexmate_lib8commands5relay1_113_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..relay..CodexRouterTogglePayload$GT$9serialize @ 0x10053dc80 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::relay::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..relay..CodexRouterTogglePayload$GT$::serialize::hbd07050174bcd375(
        __int64 a1,
        _QWORD *a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int16 v10; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+10h] [rbp-20h]

  v7 = *a2; /*0x10053dc90*/
  v8 = *(_QWORD *)(*a2 + 16LL); /*0x10053dc93*/
  if ( *(_QWORD *)*a2 == v8 ) /*0x10053dc9a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10053ddba*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a7);
    v8 = *(_QWORD *)(v7 + 16); /*0x10053ddc2*/
  }
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + v8) = 123; /*0x10053dca4*/
  *(_QWORD *)(v7 + 16) = v8 + 1; /*0x10053dcab*/
  v10 = 256; /*0x10053dcaf*/
  v11 = a2; /*0x10053dcb5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h1c772669106cbb28( /*0x10053dccc*/
             &v10,
             &anon_92869709a5e99ce1936aa4e326b6c562_1170,
             5,
             a1);
  if ( !result ) /*0x10053dcd4*/
  {
    if ( (_BYTE)v10 ) /*0x10053dce5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053dce5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h5b31ae72d80922b3( /*0x10053dd0d*/
               &v10,
               &anon_92869709a5e99ce1936aa4e326b6c562_1171,
               16,
               a1 + 320);
    if ( result ) /*0x10053dd15*/
      return result; /*0x10053dd15*/
    if ( (_BYTE)v10 ) /*0x10053dd1b*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053dd1b*/
    result = serde_core::ser::SerializeMap::serialize_entry::h45b777fdb310ee28( /*0x10053dd34*/
               &v10,
               &anon_92869709a5e99ce1936aa4e326b6c562_1172,
               15,
               a1 + 344);
    if ( result ) /*0x10053dd3c*/
      return result; /*0x10053dd3c*/
    if ( (_BYTE)v10 ) /*0x10053dd42*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x10053dcf1*/
    result = serde_core::ser::SerializeMap::serialize_entry::h56de8cf225fbcf39( /*0x10053dd5e*/
               &v10,
               &anon_92869709a5e99ce1936aa4e326b6c562_1173,
               8,
               a1 + 296);
    if ( !result ) /*0x10053dd66*/
    {
      result = 0; /*0x10053dd6c*/
      if ( (v10 & 1) == 0 ) /*0x10053dd72*/
      {
        if ( HIBYTE(v10) ) /*0x10053dd7c*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(*v11, "}false", 1); /*0x10053dd95*/
          return 0; /*0x10053dd9a*/
        }
      }
    }
  }
  return result; /*0x10053dcd6*/
}