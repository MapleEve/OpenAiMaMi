// __ZN13codexmate_lib8platform9debug_log7bounded @ 0x10091a460 | 基线 same-set
_QWORD *__fastcall codexmate_lib::platform::debug_log::bounded::h95d3a386b5ba0844(
        _QWORD *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v6; // r13
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // r12d
  int v11; // ecx
  int v12; // esi
  int v13; // edx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  char v16; // dl
  unsigned int v17; // esi
  char v18; // si
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v22; // rdx
  unsigned __int8 *v23; // [rsp+8h] [rbp-48h]
  __int64 v24; // [rsp+10h] [rbp-40h] BYREF
  __int64 v25; // [rsp+18h] [rbp-38h]
  __int64 v26; // [rsp+20h] [rbp-30h]

  v24 = 0; /*0x10091a475*/
  v25 = 1; /*0x10091a47d*/
  v26 = 0; /*0x10091a485*/
  if ( !a3 ) /*0x10091a494*/
    goto LABEL_31; /*0x10091a494*/
  v6 = a2; /*0x10091a49d*/
  v23 = &a2[a3]; /*0x10091a4a0*/
  v7 = a4 + 1; /*0x10091a4a4*/
  v8 = 1; /*0x10091a4a7*/
  v9 = 0; /*0x10091a4ac*/
  while ( 1 ) /*0x10091a4d5*/
  {
    v10 = *v6; /*0x10091a4d5*/
    if ( (v10 & 0x80u) == 0 ) /*0x10091a4dd*/
    {
      ++v6; /*0x10091a4df*/
      if ( !--v7 ) /*0x10091a4e5*/
        goto LABEL_28; /*0x10091a4e5*/
      goto LABEL_16; /*0x10091a4e5*/
    }
    v11 = v10 & 0x1F; /*0x10091a4f3*/
    v12 = v6[1] & 0x3F; /*0x10091a4fb*/
    if ( (unsigned __int8)v10 <= 0xDFu ) /*0x10091a502*/
    {
      v6 += 2; /*0x10091a54d*/
      v10 = v12 | (v11 << 6); /*0x10091a556*/
      if ( !--v7 ) /*0x10091a55c*/
        goto LABEL_28; /*0x10091a55c*/
      goto LABEL_16; /*0x10091a55c*/
    }
    v13 = (v12 << 6) | v6[2] & 0x3F; /*0x10091a513*/
    if ( (unsigned __int8)v10 >= 0xF0u ) /*0x10091a519*/
      break; /*0x10091a519*/
    v10 = (v11 << 12) | v13; /*0x10091a568*/
    v6 += 3; /*0x10091a56b*/
    if ( !--v7 ) /*0x10091a571*/
      goto LABEL_28; /*0x10091a571*/
LABEL_16:
    v14 = 1; /*0x10091a580*/
    if ( v10 >= 0x80 ) /*0x10091a58c*/
    {
      v14 = 2; /*0x10091a58e*/
      if ( v10 >= 0x800 ) /*0x10091a59a*/
        v14 = 4LL - (v10 < 0x10000); /*0x10091a5a8*/
    }
    v15 = v9; /*0x10091a5b3*/
    if ( v14 > v24 - v9 ) /*0x10091a5b9*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v24, v9, v14, 1, 1, a6); /*0x10091a666*/
      v8 = v25; /*0x10091a66b*/
      v15 = v26; /*0x10091a66f*/
      if ( v10 >= 0x80 ) /*0x10091a67e*/
      {
LABEL_21:
        v16 = v10 & 0x3F | 0x80; /*0x10091a5cc*/
        v17 = v10 >> 6; /*0x10091a5d8*/
        if ( v10 >= 0x800 ) /*0x10091a5e2*/
        {
          v18 = v17 & 0x3F | 0x80; /*0x10091a604*/
          v19 = v10 >> 12; /*0x10091a60b*/
          if ( v10 > 0xFFFF ) /*0x10091a616*/
          {
            *(_BYTE *)(v8 + v15) = (v10 >> 18) | 0xF0; /*0x10091a63e*/
            *(_BYTE *)(v8 + v15 + 1) = v19 & 0x3F | 0x80; /*0x10091a642*/
            *(_BYTE *)(v8 + v15 + 2) = v18; /*0x10091a647*/
            *(_BYTE *)(v8 + v15 + 3) = v16; /*0x10091a64c*/
          }
          else
          {
            *(_BYTE *)(v8 + v15) = v19 | 0xE0; /*0x10091a61c*/
            *(_BYTE *)(v8 + v15 + 1) = v18; /*0x10091a620*/
            *(_BYTE *)(v8 + v15 + 2) = v16; /*0x10091a625*/
          }
        }
        else
        {
          *(_BYTE *)(v8 + v15) = v17 | 0xC0; /*0x10091a5e8*/
          *(_BYTE *)(v8 + v15 + 1) = v16; /*0x10091a5ec*/
        }
        goto LABEL_4; /*0x10091a5f0*/
      }
    }
    else if ( v10 >= 0x80 ) /*0x10091a5c6*/
    {
      goto LABEL_21; /*0x10091a5c6*/
    }
    *(_BYTE *)(v8 + v15) = v10; /*0x10091a4c0*/
LABEL_4:
    v9 += v14; /*0x10091a4c4*/
    v26 = v9; /*0x10091a4c7*/
    if ( v6 == v23 ) /*0x10091a4cf*/
      goto LABEL_31; /*0x10091a4cf*/
  }
  v10 = ((v10 & 7) << 18) | (v13 << 6) | v6[3] & 0x3F; /*0x10091a52f*/
  if ( v10 == 1114112 ) /*0x10091a539*/
    goto LABEL_31; /*0x10091a539*/
  v6 += 4; /*0x10091a53f*/
  if ( --v7 ) /*0x10091a546*/
    goto LABEL_16; /*0x10091a546*/
LABEL_28:
  if ( (unsigned __int64)(v24 - v9) <= 0xD ) /*0x10091a694*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v24, v9, 14, 1, 1, a6); /*0x10091a700*/
    v9 = v26; /*0x10091a705*/
  }
  v20 = v25; /*0x10091a696*/
  *(_QWORD *)(v25 + v9 + 6) = 0x5D64657461636E75LL; /*0x10091a6a4*/
  *(_QWORD *)(v20 + v9) = 0x6E7572745B2E2E2ELL; /*0x10091a6b3*/
  v26 = v9 + 14; /*0x10091a6bb*/
LABEL_31:
  a1[2] = v26; /*0x10091a6bf*/
  v22 = v24; /*0x10091a6cb*/
  a1[1] = v25; /*0x10091a6d3*/
  *a1 = v22; /*0x10091a6d7*/
  return a1; /*0x10091a6da*/
}