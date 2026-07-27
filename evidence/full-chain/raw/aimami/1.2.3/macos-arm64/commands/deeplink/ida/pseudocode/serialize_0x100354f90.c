// __ZN13codexmate_lib8commands8deeplink1_113_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..deeplink..ImportDeeplinkPayload$GT$9serialize @ 0x100354f90 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::deeplink::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..commands..deeplink..ImportDeeplinkPayload$GT$::serialize::ha7d8c34c0ad0afae(
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

  v6 = *a2; /*0x100354fa0*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100354fa3*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100354faa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1003550e9*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x1003550f1*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100354fb4*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100354fbb*/
  v9 = 256; /*0x100354fbf*/
  v10 = a2; /*0x100354fc5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100354fdc*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_55,
             4,
             a1);
  if ( !result ) /*0x100354fe4*/
  {
    if ( (_BYTE)v9 ) /*0x100354ff5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100354ff5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10035501a*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_412,
               7,
               a1 + 24);
    if ( result ) /*0x100355022*/
      return result; /*0x100355022*/
    if ( (_BYTE)v9 ) /*0x100355028*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100355028*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10035503e*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_444,
               6,
               a1 + 48);
    if ( result ) /*0x100355046*/
      return result; /*0x100355046*/
    if ( (_BYTE)v9 ) /*0x10035504c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10035504c*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100355062*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_414,
               5,
               a1 + 72);
    if ( result ) /*0x10035506a*/
      return result; /*0x10035506a*/
    if ( (_BYTE)v9 ) /*0x100355074*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100355001*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x10035508d*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_1078,
               10,
               a1 + 96);
    if ( !result ) /*0x100355095*/
    {
      result = 0; /*0x10035509b*/
      if ( (v9 & 1) == 0 ) /*0x1003550a1*/
      {
        if ( HIBYTE(v9) ) /*0x1003550ab*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x1003550c4*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x1003550c9*/
        }
      }
    }
  }
  return result; /*0x100354fe6*/
}