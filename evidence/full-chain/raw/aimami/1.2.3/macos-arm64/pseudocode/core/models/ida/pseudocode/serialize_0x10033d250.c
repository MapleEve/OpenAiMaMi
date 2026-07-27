// __ZN13codexmate_lib4core6models1_104_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatus$GT$9serialize @ 0x10033d250 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..AccountTokenStatus$GT$::serialize::he43417e9b4b14ee6(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // r12
  _QWORD *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r14
  const void *v16; // r15
  size_t v17; // r12
  __int16 v18; // [rsp+8h] [rbp-38h] BYREF
  __int64 v19; // [rsp+10h] [rbp-30h]

  v6 = *a1; /*0x10033d264*/
  v7 = *(_QWORD **)a2; /*0x10033d267*/
  ++*(_QWORD *)(a2 + 24); /*0x10033d26a*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10033d26e*/
  v8 = v7[2]; /*0x10033d272*/
  if ( *v7 == v8 ) /*0x10033d279*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a6); /*0x10033d3e3*/
    v8 = v7[2]; /*0x10033d3eb*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x10033d283*/
  v7[2] = v8 + 1; /*0x10033d28a*/
  v18 = 256; /*0x10033d28e*/
  v19 = a2; /*0x10033d294*/
  result = serde_core::ser::SerializeMap::serialize_entry::h1a47c60e9ae2745d( /*0x10033d2ac*/
             &v18,
             &anon_b0ee9adff4519c22b647af231a5a39fa_54,
             4,
             a1 + 2);
  if ( !result ) /*0x10033d2b4*/
  {
    if ( !v6 ) /*0x10033d2c8*/
      goto LABEL_9; /*0x10033d2c8*/
    if ( (_BYTE)v18 == 1 ) /*0x10033d2ce*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033d2de*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x10033d2f6*/
               &v18,
               &anon_b0ee9adff4519c22b647af231a5a39fa_731,
               20,
               a1);
    if ( !result ) /*0x10033d2fe*/
    {
LABEL_9:
      result = 0; /*0x10033d300*/
      if ( (v18 & 1) == 0 && HIBYTE(v18) ) /*0x10033d30c*/
      {
        v11 = v19; /*0x10033d30e*/
        v12 = *(_QWORD **)v19; /*0x10033d312*/
        v13 = *(_QWORD *)(v19 + 24) - 1LL; /*0x10033d31b*/
        *(_QWORD *)(v19 + 24) = v13; /*0x10033d31e*/
        if ( *(_BYTE *)(v11 + 32) ) /*0x10033d323*/
        {
          v14 = v12[2]; /*0x10033d32b*/
          if ( *v12 == v14 ) /*0x10033d332*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033d42b*/
              v12,
              v12[2],
              1,
              1,
              1,
              v10);
            v14 = v12[2]; /*0x10033d430*/
          }
          *(_BYTE *)(v12[1] + v14) = 10; /*0x10033d33c*/
          v15 = v14 + 1; /*0x10033d341*/
          v12[2] = v15; /*0x10033d344*/
          if ( v13 ) /*0x10033d34b*/
          {
            v16 = *(const void **)(v11 + 8); /*0x10033d34d*/
            v17 = *(_QWORD *)(v11 + 16); /*0x10033d352*/
            do /*0x10033d387*/
            {
              if ( v17 > *v12 - v15 ) /*0x10033d369*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033d39f*/
                  v12,
                  v15,
                  v17,
                  1,
                  1,
                  v10);
                v15 = v12[2]; /*0x10033d3a4*/
              }
              memcpy((void *)(v15 + v12[1]), v16, v17); /*0x10033d378*/
              v15 += v17; /*0x10033d37d*/
              v12[2] = v15; /*0x10033d380*/
              --v13; /*0x10033d384*/
            }
            while ( v13 ); /*0x10033d387*/
          }
        }
        else
        {
          v15 = v12[2]; /*0x10033d3aa*/
        }
        if ( *v12 == v15 ) /*0x10033d3b1*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033d40a*/
            v12,
            v15,
            1,
            1,
            1,
            v10);
          v15 = v12[2]; /*0x10033d40f*/
        }
        *(_BYTE *)(v12[1] + v15) = 125; /*0x10033d3b7*/
        v12[2] = v15 + 1; /*0x10033d3bf*/
        return 0; /*0x10033d3c3*/
      }
    }
  }
  return result; /*0x10033d2b6*/
}