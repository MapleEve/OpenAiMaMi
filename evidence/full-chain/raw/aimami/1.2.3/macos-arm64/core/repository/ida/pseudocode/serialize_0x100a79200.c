// __ZN13codexmate_lib4core10repository1_103_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..HotspotConfig$GT$9serialize @ 0x100a79200 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..HotspotConfig$GT$::serialize::h9507cb037debfb8d(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rcx
  _QWORD *v7; // rbx
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

  v6 = a1; /*0x100a79211*/
  v7 = *(_QWORD **)a2; /*0x100a79214*/
  ++*(_QWORD *)(a2 + 24); /*0x100a79217*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100a7921b*/
  v8 = v7[2]; /*0x100a7921f*/
  if ( *v7 == v8 ) /*0x100a79226*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a6); /*0x100a79362*/
    v6 = a1; /*0x100a7936a*/
    v8 = v7[2]; /*0x100a7936d*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x100a79230*/
  v7[2] = v8 + 1; /*0x100a79237*/
  v18 = 256; /*0x100a7923b*/
  v19 = a2; /*0x100a79241*/
  result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x100a79255*/
             &v18,
             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_251,
             7,
             v6);
  if ( !result && (v18 & 1) == 0 && HIBYTE(v18) ) /*0x100a79271*/
  {
    v11 = v19; /*0x100a79277*/
    v12 = *(_QWORD **)v19; /*0x100a7927b*/
    v13 = *(_QWORD *)(v19 + 24) - 1LL; /*0x100a79284*/
    *(_QWORD *)(v19 + 24) = v13; /*0x100a79287*/
    if ( *(_BYTE *)(v11 + 32) ) /*0x100a7928c*/
    {
      v14 = v12[2]; /*0x100a7929c*/
      if ( *v12 == v14 ) /*0x100a792a3*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a793ad*/
          v12,
          v12[2],
          1,
          1,
          1,
          v10);
        v14 = v12[2]; /*0x100a793b2*/
      }
      *(_BYTE *)(v12[1] + v14) = 10; /*0x100a792ad*/
      v15 = v14 + 1; /*0x100a792b2*/
      v12[2] = v15; /*0x100a792b5*/
      if ( v13 ) /*0x100a792bc*/
      {
        v16 = *(const void **)(v11 + 8); /*0x100a792be*/
        v17 = *(_QWORD *)(v11 + 16); /*0x100a792c3*/
        do /*0x100a792f7*/
        {
          if ( v17 > *v12 - v15 ) /*0x100a792d9*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a7930f*/
              v12,
              v15,
              v17,
              1,
              1,
              v10);
            v15 = v12[2]; /*0x100a79314*/
          }
          memcpy((void *)(v15 + v12[1]), v16, v17); /*0x100a792e8*/
          v15 += v17; /*0x100a792ed*/
          v12[2] = v15; /*0x100a792f0*/
          --v13; /*0x100a792f4*/
        }
        while ( v13 ); /*0x100a792f7*/
      }
    }
    else
    {
      v15 = v12[2]; /*0x100a7931a*/
    }
    if ( *v12 == v15 ) /*0x100a79321*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v12, v15, 1, 1, 1, v10); /*0x100a7938c*/
      v15 = v12[2]; /*0x100a79391*/
    }
    *(_BYTE *)(v12[1] + v15) = 125; /*0x100a79327*/
    v12[2] = v15 + 1; /*0x100a7932f*/
    return 0; /*0x100a79333*/
  }
  return result; /*0x100a79337*/
}