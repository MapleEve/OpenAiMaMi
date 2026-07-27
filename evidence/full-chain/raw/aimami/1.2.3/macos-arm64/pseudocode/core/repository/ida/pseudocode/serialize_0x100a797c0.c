// __ZN13codexmate_lib4core10repository1_107_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..MysteryRouteGrant$GT$9serialize @ 0x100a797c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..MysteryRouteGrant$GT$::serialize::hd901f1a7deeaef79(
        __int64 *a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r14
  const void *v17; // r15
  size_t v18; // r12
  __int16 v19; // [rsp+8h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-30h]

  v7 = *a1; /*0x100a797d4*/
  v8 = *(_QWORD **)a2; /*0x100a797d7*/
  ++*(_QWORD *)(a2 + 24); /*0x100a797da*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100a797de*/
  v9 = v8[2]; /*0x100a797e2*/
  if ( *v8 == v9 ) /*0x100a797e9*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v8, v8[2], 1, 1, 1, a7); /*0x100a79953*/
    v9 = v8[2]; /*0x100a7995b*/
  }
  *(_BYTE *)(v8[1] + v9) = 123; /*0x100a797f3*/
  v8[2] = v9 + 1; /*0x100a797fa*/
  v19 = 256; /*0x100a797fe*/
  v20 = a2; /*0x100a79804*/
  result = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a7981c*/
             &v19,
             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_267,
             5,
             a1 + 2);
  if ( !result ) /*0x100a79824*/
  {
    if ( !v7 ) /*0x100a79838*/
      goto LABEL_9; /*0x100a79838*/
    if ( (_BYTE)v19 == 1 ) /*0x100a7983e*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(a3); /*0x100a7984e*/
    result = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x100a79866*/
               &v19,
               &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_268,
               11,
               a1);
    if ( !result ) /*0x100a7986e*/
    {
LABEL_9:
      result = 0; /*0x100a79870*/
      if ( (v19 & 1) == 0 && HIBYTE(v19) ) /*0x100a7987c*/
      {
        v12 = v20; /*0x100a7987e*/
        v13 = *(_QWORD **)v20; /*0x100a79882*/
        v14 = *(_QWORD *)(v20 + 24) - 1LL; /*0x100a7988b*/
        *(_QWORD *)(v20 + 24) = v14; /*0x100a7988e*/
        if ( *(_BYTE *)(v12 + 32) ) /*0x100a79893*/
        {
          v15 = v13[2]; /*0x100a7989b*/
          if ( *v13 == v15 ) /*0x100a798a2*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a7999b*/
              v13,
              v13[2],
              1,
              1,
              1,
              v11);
            v15 = v13[2]; /*0x100a799a0*/
          }
          *(_BYTE *)(v13[1] + v15) = 10; /*0x100a798ac*/
          v16 = v15 + 1; /*0x100a798b1*/
          v13[2] = v16; /*0x100a798b4*/
          if ( v14 ) /*0x100a798bb*/
          {
            v17 = *(const void **)(v12 + 8); /*0x100a798bd*/
            v18 = *(_QWORD *)(v12 + 16); /*0x100a798c2*/
            do /*0x100a798f7*/
            {
              if ( v18 > *v13 - v16 ) /*0x100a798d9*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a7990f*/
                  v13,
                  v16,
                  v18,
                  1,
                  1,
                  v11);
                v16 = v13[2]; /*0x100a79914*/
              }
              memcpy((void *)(v16 + v13[1]), v17, v18); /*0x100a798e8*/
              v16 += v18; /*0x100a798ed*/
              v13[2] = v16; /*0x100a798f0*/
              --v14; /*0x100a798f4*/
            }
            while ( v14 ); /*0x100a798f7*/
          }
        }
        else
        {
          v16 = v13[2]; /*0x100a7991a*/
        }
        if ( *v13 == v16 ) /*0x100a79921*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a7997a*/
            v13,
            v16,
            1,
            1,
            1,
            v11);
          v16 = v13[2]; /*0x100a7997f*/
        }
        *(_BYTE *)(v13[1] + v16) = 125; /*0x100a79927*/
        v13[2] = v16 + 1; /*0x100a7992f*/
        return 0; /*0x100a79933*/
      }
    }
  }
  return result; /*0x100a79826*/
}