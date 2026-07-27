// __ZN13codexmate_lib4core10repository1_99_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..ApiConfig$GT$9serialize @ 0x100a799b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..ApiConfig$GT$::serialize::hec2b685a8e730189(
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

  v6 = a1; /*0x100a799c1*/
  v7 = *(_QWORD **)a2; /*0x100a799c4*/
  ++*(_QWORD *)(a2 + 24); /*0x100a799c7*/
  *(_BYTE *)(a2 + 32) = 0; /*0x100a799cb*/
  v8 = v7[2]; /*0x100a799cf*/
  if ( *v7 == v8 ) /*0x100a799d6*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a6); /*0x100a79b12*/
    v6 = a1; /*0x100a79b1a*/
    v8 = v7[2]; /*0x100a79b1d*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x100a799e0*/
  v7[2] = v8 + 1; /*0x100a799e7*/
  v18 = 256; /*0x100a799eb*/
  v19 = a2; /*0x100a799f1*/
  result = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x100a79a05*/
             &v18,
             &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_215,
             19,
             v6);
  if ( !result && (v18 & 1) == 0 && HIBYTE(v18) ) /*0x100a79a21*/
  {
    v11 = v19; /*0x100a79a27*/
    v12 = *(_QWORD **)v19; /*0x100a79a2b*/
    v13 = *(_QWORD *)(v19 + 24) - 1LL; /*0x100a79a34*/
    *(_QWORD *)(v19 + 24) = v13; /*0x100a79a37*/
    if ( *(_BYTE *)(v11 + 32) ) /*0x100a79a3c*/
    {
      v14 = v12[2]; /*0x100a79a4c*/
      if ( *v12 == v14 ) /*0x100a79a53*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a79b5d*/
          v12,
          v12[2],
          1,
          1,
          1,
          v10);
        v14 = v12[2]; /*0x100a79b62*/
      }
      *(_BYTE *)(v12[1] + v14) = 10; /*0x100a79a5d*/
      v15 = v14 + 1; /*0x100a79a62*/
      v12[2] = v15; /*0x100a79a65*/
      if ( v13 ) /*0x100a79a6c*/
      {
        v16 = *(const void **)(v11 + 8); /*0x100a79a6e*/
        v17 = *(_QWORD *)(v11 + 16); /*0x100a79a73*/
        do /*0x100a79aa7*/
        {
          if ( v17 > *v12 - v15 ) /*0x100a79a89*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a79abf*/
              v12,
              v15,
              v17,
              1,
              1,
              v10);
            v15 = v12[2]; /*0x100a79ac4*/
          }
          memcpy((void *)(v15 + v12[1]), v16, v17); /*0x100a79a98*/
          v15 += v17; /*0x100a79a9d*/
          v12[2] = v15; /*0x100a79aa0*/
          --v13; /*0x100a79aa4*/
        }
        while ( v13 ); /*0x100a79aa7*/
      }
    }
    else
    {
      v15 = v12[2]; /*0x100a79aca*/
    }
    if ( *v12 == v15 ) /*0x100a79ad1*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v12, v15, 1, 1, 1, v10); /*0x100a79b3c*/
      v15 = v12[2]; /*0x100a79b41*/
    }
    *(_BYTE *)(v12[1] + v15) = 125; /*0x100a79ad7*/
    v12[2] = v15 + 1; /*0x100a79adf*/
    return 0; /*0x100a79ae3*/
  }
  return result; /*0x100a79ae7*/
}