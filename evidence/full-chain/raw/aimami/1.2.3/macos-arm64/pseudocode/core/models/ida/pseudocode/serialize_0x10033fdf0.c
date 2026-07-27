// __ZN13codexmate_lib4core6models1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiProxyConfigPayload$GT$9serialize @ 0x10033fdf0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..models..ApiProxyConfigPayload$GT$::serialize::h2d7b466491f2fd76(
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
  __int64 v9; // r9
  __int64 v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // r13
  const void *v13; // r14
  size_t v14; // r15
  __int64 v15; // r12
  __int64 v16; // rsi
  __int16 v17; // [rsp+8h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-30h]

  v6 = *(_QWORD **)a2; /*0x10033fe04*/
  ++*(_QWORD *)(a2 + 24); /*0x10033fe07*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10033fe0b*/
  v7 = v6[2]; /*0x10033fe0f*/
  if ( *v6 == v7 ) /*0x10033fe16*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v6, v6[2], 1, 1, 1, a6); /*0x10033ff72*/
    v7 = v6[2]; /*0x10033ff7a*/
  }
  *(_BYTE *)(v6[1] + v7) = 123; /*0x10033fe20*/
  v6[2] = v7 + 1; /*0x10033fe27*/
  v17 = 256; /*0x10033fe2b*/
  v18 = a2; /*0x10033fe31*/
  result = serde_core::ser::SerializeMap::serialize_entry::h708b3d3eb88860c2(&v17, "mode", 4, a1 + 24); /*0x10033fe49*/
  if ( !result ) /*0x10033fe51*/
  {
    if ( (_BYTE)v17 == 1 ) /*0x10033fe66*/
    {
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10033fe76*/
    }
    else
    {
      result = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x10033fe8e*/
                 &v17,
                 &anon_b0ee9adff4519c22b647af231a5a39fa_673,
                 3,
                 a1);
      if ( !result ) /*0x10033fe96*/
      {
        result = 0; /*0x10033fe98*/
        if ( (v17 & 1) == 0 ) /*0x10033fe9e*/
        {
          if ( HIBYTE(v17) ) /*0x10033fea4*/
          {
            v10 = v18; /*0x10033fea6*/
            v11 = *(_QWORD **)v18; /*0x10033feaa*/
            v12 = *(_QWORD *)(v18 + 24) - 1LL; /*0x10033feb1*/
            *(_QWORD *)(v18 + 24) = v12; /*0x10033feb4*/
            if ( *(_BYTE *)(v10 + 32) == 1 ) /*0x10033febd*/
            {
              alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2e7a6d12419ac1ab(v11, "\n", 1); /*0x10033fece*/
              if ( v12 ) /*0x10033fed6*/
              {
                v13 = *(const void **)(v10 + 8); /*0x10033fed8*/
                v14 = *(_QWORD *)(v10 + 16); /*0x10033fedc*/
                v15 = v11[2]; /*0x10033fee0*/
                do /*0x10033ff17*/
                {
                  if ( v14 > *v11 - v15 ) /*0x10033fef9*/
                  {
                    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033ff2f*/
                      v11,
                      v15,
                      v14,
                      1,
                      1,
                      v9);
                    v15 = v11[2]; /*0x10033ff34*/
                  }
                  memcpy((void *)(v15 + v11[1]), v13, v14); /*0x10033ff08*/
                  v15 += v14; /*0x10033ff0d*/
                  v11[2] = v15; /*0x10033ff10*/
                  --v12; /*0x10033ff14*/
                }
                while ( v12 ); /*0x10033ff17*/
              }
            }
            v16 = v11[2]; /*0x10033ff3a*/
            if ( *v11 == v16 ) /*0x10033ff41*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10033ff96*/
                v11,
                v16,
                1,
                1,
                1,
                v9);
              v16 = v11[2]; /*0x10033ff9b*/
            }
            *(_BYTE *)(v11[1] + v16) = 125; /*0x10033ff47*/
            v11[2] = v16 + 1; /*0x10033ff4e*/
            return 0; /*0x10033ff52*/
          }
        }
      }
    }
  }
  return result; /*0x10033fe53*/
}