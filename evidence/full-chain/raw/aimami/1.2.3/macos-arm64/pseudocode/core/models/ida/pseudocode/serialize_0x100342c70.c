// __ZN13codexmate_lib4core6models1_111_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyAppPayload$GT$9serialize @ 0x100342c70 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..VoiceVocabularyAppPayload$GT$::serialize::h26f6c10a93a6f3c6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r15
  _QWORD *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r9
  const void *v13; // r14
  size_t v14; // r15
  __int64 v15; // r12
  __int16 v16; // [rsp+8h] [rbp-38h] BYREF
  __int64 v17; // [rsp+10h] [rbp-30h]

  v6 = *(_QWORD **)a2; /*0x100342c84*/
  ++*(_QWORD *)(a2 + 24); /*0x100342c87*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100342c8b*/
  v7 = v6[2]; /*0x100342c8f*/
  if ( *v6 == v7 ) /*0x100342c96*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x100342e09*/
    v7 = v6[2]; /*0x100342e11*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x100342ca0*/
  v6[2] = v7 + 1; /*0x100342ca7*/
  v16 = 256; /*0x100342cab*/
  v17 = a2; /*0x100342cb1*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100342cc8*/
             &v16,
             &anon_b0ee9adff4519c22b647af231a5a39fa_937,
             8,
             a1);
  if ( !result ) /*0x100342cd0*/
  {
    if ( (_BYTE)v16 ) /*0x100342ce5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342ce5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100342d0e*/
               &v16,
               &anon_b0ee9adff4519c22b647af231a5a39fa_55,
               4,
               a1 + 24);
    if ( result ) /*0x100342d16*/
      return result; /*0x100342d16*/
    if ( (_BYTE)v16 ) /*0x100342d1c*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100342cf5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100342d35*/
               &v16,
               &anon_b0ee9adff4519c22b647af231a5a39fa_938,
               4,
               a1 + 48);
    if ( !result ) /*0x100342d3d*/
    {
      result = 0; /*0x100342d3f*/
      if ( (v16 & 1) == 0 ) /*0x100342d45*/
      {
        if ( HIBYTE(v16) ) /*0x100342d4b*/
        {
          v9 = v17; /*0x100342d4d*/
          v10 = *(_QWORD **)v17; /*0x100342d51*/
          v11 = *(_QWORD *)(v17 + 24) - 1LL; /*0x100342d58*/
          *(_QWORD *)(v17 + 24) = v11; /*0x100342d5b*/
          if ( *(_BYTE *)(v9 + 32) == 1 ) /*0x100342d64*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(v10, "\n", 1); /*0x100342d75*/
            if ( v11 ) /*0x100342d7d*/
            {
              v13 = *(const void **)(v9 + 8); /*0x100342d7f*/
              v14 = *(_QWORD *)(v9 + 16); /*0x100342d83*/
              v15 = v10[2]; /*0x100342d87*/
              do /*0x100342db2*/
              {
                if ( v14 > *v10 - v15 ) /*0x100342d94*/
                {
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100342dca*/
                    v10,
                    v15,
                    v14,
                    1,
                    1,
                    v12);
                  v15 = v10[2]; /*0x100342dcf*/
                }
                memcpy((void *)(v15 + v10[1]), v13, v14); /*0x100342da3*/
                v15 += v14; /*0x100342da8*/
                v10[2] = v15; /*0x100342dab*/
                --v11; /*0x100342daf*/
              }
              while ( v11 ); /*0x100342db2*/
            }
          }
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab( /*0x100342de4*/
            v10,
            &anon_b0ee9adff4519c22b647af231a5a39fa_15,
            1);
          return 0; /*0x100342de9*/
        }
      }
    }
  }
  return result; /*0x100342cd2*/
}