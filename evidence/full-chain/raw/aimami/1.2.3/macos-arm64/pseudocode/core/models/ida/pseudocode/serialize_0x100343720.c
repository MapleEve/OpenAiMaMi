// __ZN13codexmate_lib4core6models1_116_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyMutationPayload$GT$9serialize @ 0x100343720 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyMutationPayload$GT$::serialize::h0971840ebadc00c9(
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
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int16 v12; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-20h]

  v6 = *a2; /*0x100343730*/
  v7 = *(_QWORD *)(*a2 + 16LL); /*0x100343733*/
  if ( *(_QWORD *)*a2 == v7 ) /*0x10034373a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100343801*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1,
      a6);
    v7 = *(_QWORD *)(v6 + 16); /*0x100343809*/
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 8) + v7) = 123; /*0x100343744*/
  *(_QWORD *)(v6 + 16) = v7 + 1; /*0x10034374b*/
  v12 = 256; /*0x10034374f*/
  v13 = a2; /*0x100343755*/
  result = serde_core::ser::SerializeMap::serialize_entry::h0d071136e662123d( /*0x10034376c*/
             &v12,
             &anon_b0ee9adff4519c22b647af231a5a39fa_801,
             9,
             a1);
  if ( !result ) /*0x100343774*/
  {
    if ( (_BYTE)v12 == 1 ) /*0x100343785*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100343791*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::h0cc6452ac64c3bb0(&v12, "entry", 5, a1 + 128); /*0x1003437ad*/
      if ( !result ) /*0x1003437b5*/
      {
        result = 0; /*0x1003437b7*/
        if ( (v12 & 1) == 0 ) /*0x1003437bd*/
        {
          if ( HIBYTE(v12) ) /*0x1003437c3*/
          {
            v10 = *v13; /*0x1003437c9*/
            v11 = *(_QWORD *)(*v13 + 16LL); /*0x1003437cc*/
            if ( *(_QWORD *)*v13 == v11 ) /*0x1003437d3*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100343825*/
                *v13,
                v11,
                1,
                1,
                1,
                v9);
              v11 = *(_QWORD *)(v10 + 16); /*0x10034382a*/
            }
            *(_BYTE *)(*(_QWORD *)(v10 + 8) + v11) = 125; /*0x1003437d9*/
            *(_QWORD *)(v10 + 16) = v11 + 1; /*0x1003437e0*/
            return 0; /*0x1003437e4*/
          }
        }
      }
    }
  }
  return result; /*0x100343776*/
}