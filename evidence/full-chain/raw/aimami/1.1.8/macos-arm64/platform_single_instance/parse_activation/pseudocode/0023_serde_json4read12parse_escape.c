// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x10105a260 depth=4
// serde_json4read12parse_escape
_QWORD *__fastcall serde_json::read::parse_escape::hbc99868345c93110(
        __int64 *a1,
        unsigned __int8 a2,
        _QWORD *a3,
        double a4,
        double a5,
        double a6)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  int v9; // eax
  unsigned __int64 v10; // r12
  __int64 v12; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  char **v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r12
  char **v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25[8]; // [rsp+0h] [rbp-40h] BYREF

  v6 = a1[1]; /*0x10105a271*/
  v7 = a1[2]; /*0x10105a275*/
  if ( v7 >= v6 ) /*0x10105a27c*/
  {
    v25[0] = 4; /*0x10105a3fa*/
    if ( v7 <= v6 ) /*0x10105a402*/
    {
      v18 = *a1; /*0x10105a408*/
      if ( (memchr::arch::x86_64::memchr::memrchr_raw::FN::h7edc06033e10b4f5() & 1) != 0 ) /*0x10105a425*/
      {
        v20 = v19 - v18; /*0x10105a427*/
        v21 = v20 + 1; /*0x10105a42a*/
        if ( v20 >= v6 ) /*0x10105a431*/
        {
          v22 = &anon_abe04cc3e28f8d11082d563363c2ff71_6; /*0x10105a433*/
          v7 = v20 + 1; /*0x10105a43a*/
          goto LABEL_44; /*0x10105a43d*/
        }
      }
      else
      {
        v21 = 0; /*0x10105a46c*/
      }
      v23 = memchr::arch::x86_64::memchr::count_raw::FN::hd63946b3172d0983() + 1; /*0x10105a491*/
      v24 = v7 - v21; /*0x10105a494*/
      return serde_json::error::Error::syntax::hf7c449ec16fad968(v25, v23, v24); /*0x10105a494*/
    }
    v22 = &anon_abe04cc3e28f8d11082d563363c2ff71_7; /*0x10105a4b7*/
LABEL_44:
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v7, v6, v22, a4, a5, a6); /*0x10105a4be*/
  }
  v8 = *a1; /*0x10105a282*/
  v9 = *(unsigned __int8 *)(*a1 + v7); /*0x10105a285*/
  v10 = v7 + 1; /*0x10105a28b*/
  a1[2] = v7 + 1; /*0x10105a28f*/
  switch ( v9 ) /*0x10105a2b0*/
  {
    case '"': /*0x10105a2b0*/
      v12 = a3[2]; /*0x10105a2b2*/
      if ( v12 == *a3 ) /*0x10105a2b9*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(a3); /*0x10105a2be*/
      *(_BYTE *)(a3[1] + v12) = 34; /*0x10105a2c7*/
      goto LABEL_27; /*0x10105a2cc*/
    case '/': /*0x10105a2b0*/
      v12 = a3[2]; /*0x10105a347*/
      if ( v12 == *a3 ) /*0x10105a34e*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(a3); /*0x10105a353*/
      *(_BYTE *)(a3[1] + v12) = 47; /*0x10105a35c*/
      goto LABEL_27; /*0x10105a361*/
    case '\\': /*0x10105a2b0*/
      v12 = a3[2]; /*0x10105a32b*/
      if ( v12 == *a3 ) /*0x10105a332*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(a3); /*0x10105a337*/
      *(_BYTE *)(a3[1] + v12) = 92; /*0x10105a340*/
      goto LABEL_27; /*0x10105a345*/
    case 'b': /*0x10105a2b0*/
      v12 = a3[2]; /*0x10105a30f*/
      if ( v12 == *a3 ) /*0x10105a316*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(a3); /*0x10105a31b*/
      *(_BYTE *)(a3[1] + v12) = 8; /*0x10105a324*/
      goto LABEL_27; /*0x10105a329*/
    case 'f': /*0x10105a2b0*/
      v12 = a3[2]; /*0x10105a2d1*/
      if ( v12 == *a3 ) /*0x10105a2d8*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(a3); /*0x10105a2dd*/
      *(_BYTE *)(a3[1] + v12) = 12; /*0x10105a2e6*/
      goto LABEL_27; /*0x10105a2eb*/
    case 'n': /*0x10105a2b0*/
      v12 = a3[2]; /*0x10105a2f0*/
      if ( v12 == *a3 ) /*0x10105a2f7*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(a3); /*0x10105a2fc*/
      *(_BYTE *)(a3[1] + v12) = 10; /*0x10105a305*/
      goto LABEL_27; /*0x10105a30a*/
    case 'r': /*0x10105a2b0*/
      v12 = a3[2]; /*0x10105a363*/
      if ( v12 == *a3 ) /*0x10105a36a*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(a3); /*0x10105a36f*/
      *(_BYTE *)(a3[1] + v12) = 13; /*0x10105a378*/
      goto LABEL_27; /*0x10105a37d*/
    case 't': /*0x10105a2b0*/
      v12 = a3[2]; /*0x10105a37f*/
      if ( v12 == *a3 ) /*0x10105a386*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(a3); /*0x10105a38b*/
      *(_BYTE *)(a3[1] + v12) = 9; /*0x10105a394*/
LABEL_27:
      a3[2] = v12 + 1; /*0x10105a399*/
      return nullptr; /*0x10105a3b0*/
    case 'u': /*0x10105a2b0*/
      return (_QWORD *)serde_json::read::parse_unicode_escape::hd2c8f3dc7cf1b241(a1, a2, a3); /*0x10105a4e2*/
    default:
      v25[0] = 12; /*0x10105a3b1*/
      if ( v7 >= v6 ) /*0x10105a3bc*/
      {
        v17 = &anon_abe04cc3e28f8d11082d563363c2ff71_7; /*0x10105a4a1*/
LABEL_42:
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v10, v6, v17, a4, a5, a6); /*0x10105a4a8*/
      }
      if ( (memchr::arch::x86_64::memchr::memrchr_raw::FN::h7edc06033e10b4f5() & 1) != 0 ) /*0x10105a3dd*/
      {
        v15 = v14 - v8; /*0x10105a3df*/
        v16 = v15 + 1; /*0x10105a3e2*/
        if ( v15 >= v6 ) /*0x10105a3e9*/
        {
          v17 = &anon_abe04cc3e28f8d11082d563363c2ff71_6; /*0x10105a3eb*/
          v10 = v15 + 1; /*0x10105a3f2*/
          goto LABEL_42; /*0x10105a3f5*/
        }
      }
      else
      {
        v16 = 0; /*0x10105a43f*/
      }
      v23 = memchr::arch::x86_64::memchr::count_raw::FN::hd63946b3172d0983() + 1; /*0x10105a464*/
      v24 = v10 - v16; /*0x10105a467*/
      break; /*0x10105a46a*/
  }
  return serde_json::error::Error::syntax::hf7c449ec16fad968(v25, v23, v24); /*0x10105a3a2*/
}