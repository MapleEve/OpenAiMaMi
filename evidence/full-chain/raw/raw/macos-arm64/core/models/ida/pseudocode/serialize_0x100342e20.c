// __ZN13codexmate_lib4core6models1_111_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyAppPayload$GT$9serialize @ 0x100342e20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyAppPayload$GT$::serialize::h5f83b15e52f3a38e(
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

  v6 = *a2; /*0x100342e30*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100342e33*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x100342e3a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100342f21*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100342f29*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100342e44*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x100342e4b*/
  v9 = 256; /*0x100342e4f*/
  v10 = a2; /*0x100342e55*/
  result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100342e6c*/
             &v9,
             &anon_b0ee9adff4519c22b647af231a5a39fa_937,
             8,
             a1);
  if ( !result ) /*0x100342e74*/
  {
    if ( (_BYTE)v9 ) /*0x100342e85*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342e85*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100342eaa*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_55,
               4,
               a1 + 24);
    if ( result ) /*0x100342eb2*/
      return result; /*0x100342eb2*/
    if ( (_BYTE)v9 ) /*0x100342eb8*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342e91*/
    result = serde_core::ser::SerializeMap::serialize_entry::h439d813c12b56bfd( /*0x100342ed1*/
               &v9,
               &anon_b0ee9adff4519c22b647af231a5a39fa_938,
               4,
               a1 + 48);
    if ( !result ) /*0x100342ed9*/
    {
      result = 0; /*0x100342edb*/
      if ( (v9 & 1) == 0 ) /*0x100342ee1*/
      {
        if ( HIBYTE(v9) ) /*0x100342ee7*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100342efc*/
            *v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100342f01*/
        }
      }
    }
  }
  return result; /*0x100342e76*/
}