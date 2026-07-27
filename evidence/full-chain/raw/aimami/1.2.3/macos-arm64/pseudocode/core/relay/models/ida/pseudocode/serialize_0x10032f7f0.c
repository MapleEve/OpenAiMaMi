// __ZN13codexmate_lib4core5relay6models1_109_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayActiveByIde$GT$9serialize @ 0x10032f7f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::serialize::haff1540099d6014e(
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

  v6 = a1; /*0x10032f801*/
  v7 = *(_QWORD **)a2; /*0x10032f804*/
  ++*(_QWORD *)(a2 + 24); /*0x10032f807*/
  *(_BYTE *)(a2 + 32) = 0; /*0x10032f80b*/
  v8 = v7[2]; /*0x10032f80f*/
  if ( *v7 == v8 ) /*0x10032f816*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v7, v7[2], 1, 1, 1, a6); /*0x10032f952*/
    v6 = a1; /*0x10032f95a*/
    v8 = v7[2]; /*0x10032f95d*/
  }
  *(_BYTE *)(v7[1] + v8) = 123; /*0x10032f820*/
  v7[2] = v8 + 1; /*0x10032f827*/
  v18 = 256; /*0x10032f82b*/
  v19 = a2; /*0x10032f831*/
  result = serde_core::ser::SerializeMap::serialize_entry::h41563059e0bf917d( /*0x10032f845*/
             &v18,
             &anon_b0ee9adff4519c22b647af231a5a39fa_391,
             5,
             v6);
  if ( !result && (v18 & 1) == 0 && HIBYTE(v18) ) /*0x10032f861*/
  {
    v11 = v19; /*0x10032f867*/
    v12 = *(_QWORD **)v19; /*0x10032f86b*/
    v13 = *(_QWORD *)(v19 + 24) - 1LL; /*0x10032f874*/
    *(_QWORD *)(v19 + 24) = v13; /*0x10032f877*/
    if ( *(_BYTE *)(v11 + 32) ) /*0x10032f87c*/
    {
      v14 = v12[2]; /*0x10032f88c*/
      if ( *v12 == v14 ) /*0x10032f893*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10032f99d*/
          v12,
          v12[2],
          1,
          1,
          1,
          v10);
        v14 = v12[2]; /*0x10032f9a2*/
      }
      *(_BYTE *)(v12[1] + v14) = 10; /*0x10032f89d*/
      v15 = v14 + 1; /*0x10032f8a2*/
      v12[2] = v15; /*0x10032f8a5*/
      if ( v13 ) /*0x10032f8ac*/
      {
        v16 = *(const void **)(v11 + 8); /*0x10032f8ae*/
        v17 = *(_QWORD *)(v11 + 16); /*0x10032f8b3*/
        do /*0x10032f8e7*/
        {
          if ( v17 > *v12 - v15 ) /*0x10032f8c9*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10032f8ff*/
              v12,
              v15,
              v17,
              1,
              1,
              v10);
            v15 = v12[2]; /*0x10032f904*/
          }
          memcpy((void *)(v15 + v12[1]), v16, v17); /*0x10032f8d8*/
          v15 += v17; /*0x10032f8dd*/
          v12[2] = v15; /*0x10032f8e0*/
          --v13; /*0x10032f8e4*/
        }
        while ( v13 ); /*0x10032f8e7*/
      }
    }
    else
    {
      v15 = v12[2]; /*0x10032f90a*/
    }
    if ( *v12 == v15 ) /*0x10032f911*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v12, v15, 1, 1, 1, v10); /*0x10032f97c*/
      v15 = v12[2]; /*0x10032f981*/
    }
    *(_BYTE *)(v12[1] + v15) = 125; /*0x10032f917*/
    v12[2] = v15 + 1; /*0x10032f91f*/
    return 0; /*0x10032f923*/
  }
  return result; /*0x10032f927*/
}