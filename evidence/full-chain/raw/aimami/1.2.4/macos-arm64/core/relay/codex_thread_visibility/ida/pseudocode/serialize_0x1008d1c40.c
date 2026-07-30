// __ZN13codexmate_lib4core5relay23codex_thread_visibility1_136_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_thread_visibility..NoAccountModelRestoreEntry$GT$9serialize @ 0x1008d1c40 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_thread_visibility..NoAccountModelRestoreEntry$GT$::serialize::h58280b2ee2e792aa(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // r15
  _QWORD *v6; // rbx
  __int64 v7; // r13
  const void *v8; // r14
  size_t v9; // r15
  __int64 v10; // r12
  __int16 v11; // [rsp+8h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-30h]

  v2 = *(_QWORD **)a2; /*0x1008d1c54*/
  ++*(_QWORD *)(a2 + 24); /*0x1008d1c57*/
  *(_BYTE *)(a2 + 32) = 0; /*0x1008d1c5b*/
  v3 = v2[2]; /*0x1008d1c5f*/
  if ( *v2 == v3 ) /*0x1008d1c66*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(v2, v2[2], 1, 1, 1); /*0x1008d1dd9*/
    v3 = v2[2]; /*0x1008d1de1*/
  }
  *(_BYTE *)(v2[1] + v3) = 123; /*0x1008d1c70*/
  v2[2] = v3 + 1; /*0x1008d1c77*/
  v11 = 256; /*0x1008d1c7b*/
  v12 = a2; /*0x1008d1c81*/
  result = serde_core::ser::SerializeMap::serialize_entry::h94df9d84f21fb232( /*0x1008d1c98*/
             &v11,
             &anon_727917ecdb2ab9f22bcf5eba88f4827d_621,
             9,
             a1);
  if ( !result ) /*0x1008d1ca0*/
  {
    if ( (_BYTE)v11 ) /*0x1008d1cb5*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1008d1cb5*/
    result = serde_core::ser::SerializeMap::serialize_entry::hf0a36f825d13b3c3( /*0x1008d1cde*/
               &v11,
               &anon_727917ecdb2ab9f22bcf5eba88f4827d_622,
               14,
               a1 + 48);
    if ( result ) /*0x1008d1ce6*/
      return result; /*0x1008d1ce6*/
    if ( (_BYTE)v11 ) /*0x1008d1cec*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1008d1cc5*/
    result = serde_core::ser::SerializeMap::serialize_entry::h94df9d84f21fb232( /*0x1008d1d05*/
               &v11,
               &anon_727917ecdb2ab9f22bcf5eba88f4827d_630,
               14,
               a1 + 24);
    if ( !result ) /*0x1008d1d0d*/
    {
      result = 0; /*0x1008d1d0f*/
      if ( (v11 & 1) == 0 ) /*0x1008d1d15*/
      {
        if ( HIBYTE(v11) ) /*0x1008d1d1b*/
        {
          v5 = v12; /*0x1008d1d1d*/
          v6 = *(_QWORD **)v12; /*0x1008d1d21*/
          v7 = *(_QWORD *)(v12 + 24) - 1LL; /*0x1008d1d28*/
          *(_QWORD *)(v12 + 24) = v7; /*0x1008d1d2b*/
          if ( *(_BYTE *)(v5 + 32) == 1 ) /*0x1008d1d34*/
          {
            alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hb7718f1332063bb9(v6, "\nenabled", 1); /*0x1008d1d45*/
            if ( v7 ) /*0x1008d1d4d*/
            {
              v8 = *(const void **)(v5 + 8); /*0x1008d1d4f*/
              v9 = *(_QWORD *)(v5 + 16); /*0x1008d1d53*/
              v10 = v6[2]; /*0x1008d1d57*/
              do /*0x1008d1d82*/
              {
                if ( v9 > *v6 - v10 ) /*0x1008d1d64*/
                {
                  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b( /*0x1008d1d9a*/
                    v6,
                    v10,
                    v9,
                    1,
                    1);
                  v10 = v6[2]; /*0x1008d1d9f*/
                }
                memcpy((void *)(v10 + v6[1]), v8, v9); /*0x1008d1d73*/
                v10 += v9; /*0x1008d1d78*/
                v6[2] = v10; /*0x1008d1d7b*/
                --v7; /*0x1008d1d7f*/
              }
              while ( v7 ); /*0x1008d1d82*/
            }
          }
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hb7718f1332063bb9( /*0x1008d1db4*/
            v6,
            &anon_727917ecdb2ab9f22bcf5eba88f4827d_17,
            1);
          return 0; /*0x1008d1db9*/
        }
      }
    }
  }
  return result; /*0x1008d1ca2*/
}