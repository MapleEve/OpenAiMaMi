// __ZN13codexmate_lib4core5relay6models1_111_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$9serialize @ 0x10057cea0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..CodexNoAccountSlot$GT$::serialize::hd45297edabb9d307(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r15
  _QWORD *v3; // r14
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // r13
  const void *v9; // r14
  size_t v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  __int16 v13; // [rsp+8h] [rbp-38h] BYREF
  __int64 v14; // [rsp+10h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 48); /*0x10057ceb4*/
  v3 = *(_QWORD **)a2; /*0x10057ceb8*/
  ++*(_QWORD *)(a2 + 24); /*0x10057cebb*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10057cebf*/
  v4 = v3[2]; /*0x10057cec3*/
  if ( *v3 == v4 ) /*0x10057ceca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(v3, v3[2], 1, 1, 1); /*0x10057d066*/
    v4 = v3[2]; /*0x10057d06e*/
  }
  *(_BYTE *)(v3[1] + v4) = 123; /*0x10057ced4*/
  v3[2] = v4 + 1; /*0x10057cedb*/
  v13 = 256; /*0x10057cedf*/
  v14 = a2; /*0x10057cee5*/
  result = serde_core::ser::SerializeMap::serialize_entry::h94df9d84f21fb232( /*0x10057cefc*/
             &v13,
             &anon_d163fe72d6e6e73a137b22815ab75905_495,
             10,
             a1);
  if ( !result ) /*0x10057cf04*/
  {
    if ( (_BYTE)v13 ) /*0x10057cf19*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10057cf29*/
    result = serde_core::ser::SerializeMap::serialize_entry::h94df9d84f21fb232( /*0x10057cf42*/
               &v13,
               &anon_d163fe72d6e6e73a137b22815ab75905_30,
               5,
               a1 + 24);
    if ( result ) /*0x10057cf4a*/
      return result; /*0x10057cf4a*/
    if ( !__OFSUB__(-v2, 1) ) /*0x10057cf4f*/
    {
      if ( (_BYTE)v13 ) /*0x10057cffe*/
        return serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x10057cffe*/
      result = serde_core::ser::SerializeMap::serialize_entry::hf0a36f825d13b3c3( /*0x10057d01b*/
                 &v13,
                 &anon_d163fe72d6e6e73a137b22815ab75905_496,
                 11,
                 a1 + 48);
      if ( result ) /*0x10057d023*/
        return result; /*0x10057d023*/
    }
    result = 0; /*0x10057cf55*/
    if ( (v13 & 1) == 0 && HIBYTE(v13) ) /*0x10057cf61*/
    {
      v6 = v14; /*0x10057cf63*/
      v7 = *(_QWORD **)v14; /*0x10057cf67*/
      v8 = *(_QWORD *)(v14 + 24) - 1LL; /*0x10057cf6e*/
      *(_QWORD *)(v14 + 24) = v8; /*0x10057cf71*/
      if ( *(_BYTE *)(v6 + 32) == 1 ) /*0x10057cf7a*/
      {
        alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hb7718f1332063bb9( /*0x10057cf8f*/
          v7,
          &anon_d163fe72d6e6e73a137b22815ab75905_113,
          1);
        if ( v8 ) /*0x10057cf97*/
        {
          v9 = *(const void **)(v6 + 8); /*0x10057cf9d*/
          v10 = *(_QWORD *)(v6 + 16); /*0x10057cfa1*/
          v11 = v7[2]; /*0x10057cfa5*/
          do /*0x10057cfd7*/
          {
            if ( v10 > *v7 - v11 ) /*0x10057cfb9*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b( /*0x10057cfef*/
                v7,
                v11,
                v10,
                1,
                1);
              v11 = v7[2]; /*0x10057cff4*/
            }
            memcpy((void *)(v11 + v7[1]), v9, v10); /*0x10057cfc8*/
            v11 += v10; /*0x10057cfcd*/
            v7[2] = v11; /*0x10057cfd0*/
            --v8; /*0x10057cfd4*/
          }
          while ( v8 ); /*0x10057cfd7*/
        }
      }
      v12 = v7[2]; /*0x10057d02e*/
      if ( *v7 == v12 ) /*0x10057d035*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(v7, v12, 1, 1, 1); /*0x10057d08a*/
        v12 = v7[2]; /*0x10057d08f*/
      }
      *(_BYTE *)(v7[1] + v12) = 125; /*0x10057d03b*/
      v7[2] = v12 + 1; /*0x10057d042*/
      return 0; /*0x10057d046*/
    }
  }
  return result; /*0x10057cf06*/
}