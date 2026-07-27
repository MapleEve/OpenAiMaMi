// __ZN13codexmate_lib4core8sessions14truncate_chars @ 0x100532720 | 基线 same-set
__int64 __fastcall codexmate_lib::core::sessions::truncate_chars::h3765a461484b5383(
        _QWORD *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned int v9; // r15d
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  unsigned __int64 v13; // rbx
  char v14; // r12
  __int64 v15; // rcx
  char v16; // dl
  unsigned int v17; // r8d
  char v18; // r8
  __int64 result; // rax
  unsigned __int8 *v20; // [rsp+8h] [rbp-58h]
  unsigned __int8 *v21; // [rsp+18h] [rbp-48h]
  __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+28h] [rbp-38h]
  __int64 v24; // [rsp+30h] [rbp-30h]

  v22 = 0; /*0x100532738*/
  v23 = 1; /*0x100532740*/
  v24 = 0; /*0x100532748*/
  v20 = &a2[a3]; /*0x100532753*/
  v7 = 1; /*0x100532757*/
  v8 = 0; /*0x10053275c*/
  while ( a2 != v20 ) /*0x10053278f*/
  {
    v9 = *a2; /*0x100532795*/
    if ( (v9 & 0x80u) == 0 ) /*0x10053279c*/
    {
      v21 = a2 + 1; /*0x1005327a1*/
LABEL_12:
      v13 = 1; /*0x100532830*/
      v14 = 1; /*0x100532835*/
      goto LABEL_13; /*0x100532835*/
    }
    v10 = v9 & 0x1F; /*0x1005327b3*/
    v11 = a2[1] & 0x3F; /*0x1005327bb*/
    if ( (unsigned __int8)v9 <= 0xDFu ) /*0x1005327c3*/
    {
      v9 = v11 | (v10 << 6); /*0x100532815*/
      v21 = a2 + 2; /*0x10053281f*/
      if ( v9 < 0x80 ) /*0x100532823*/
        goto LABEL_12; /*0x100532823*/
    }
    else
    {
      v12 = (v11 << 6) | a2[2] & 0x3F; /*0x1005327d0*/
      if ( (unsigned __int8)v9 < 0xF0u ) /*0x1005327d7*/
      {
        v9 = (v10 << 12) | v12; /*0x1005328ee*/
        v21 = a2 + 3; /*0x1005328f8*/
        if ( v9 < 0x80 ) /*0x1005328fc*/
          goto LABEL_12; /*0x1005328fc*/
      }
      else
      {
        v9 = ((v9 & 7) << 18) | (v12 << 6) | a2[3] & 0x3F; /*0x1005327f6*/
        v21 = a2 + 4; /*0x100532800*/
        if ( v9 < 0x80 ) /*0x100532804*/
          goto LABEL_12; /*0x100532804*/
      }
    }
    if ( v9 >= 0x800 ) /*0x100532909*/
      v13 = 4LL - (v9 < 0x10000); /*0x10053291e*/
    else
      v13 = 2; /*0x10053290b*/
    v14 = 0; /*0x100532922*/
LABEL_13:
    v15 = v8; /*0x100532838*/
    if ( v13 > v22 - v8 ) /*0x100532845*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v22, v8, v13, 1, 1, a6); /*0x10053293b*/
      v7 = v23; /*0x100532940*/
      v15 = v24; /*0x100532944*/
      if ( !v14 ) /*0x10053294f*/
      {
LABEL_15:
        v16 = v9 & 0x3F | 0x80; /*0x100532854*/
        v17 = v9 >> 6; /*0x100532860*/
        a2 = v21; /*0x10053286b*/
        if ( v9 >= 0x800 ) /*0x10053286f*/
        {
          v18 = v17 & 0x3F | 0x80; /*0x100532894*/
          a6 = v9 >> 12; /*0x10053289b*/
          if ( v9 > 0xFFFF ) /*0x1005328a6*/
          {
            LOBYTE(a6) = a6 & 0x3F | 0x80; /*0x1005328c2*/
            *(_BYTE *)(v7 + v15) = (v9 >> 18) | 0xF0; /*0x1005328ce*/
            *(_BYTE *)(v7 + v15 + 1) = a6; /*0x1005328d2*/
            *(_BYTE *)(v7 + v15 + 2) = v18; /*0x1005328d7*/
            *(_BYTE *)(v7 + v15 + 3) = v16; /*0x1005328dc*/
          }
          else
          {
            LOBYTE(a6) = a6 | 0xE0; /*0x1005328a8*/
            *(_BYTE *)(v7 + v15) = a6; /*0x1005328ac*/
            *(_BYTE *)(v7 + v15 + 1) = v18; /*0x1005328b0*/
            *(_BYTE *)(v7 + v15 + 2) = v16; /*0x1005328b5*/
          }
        }
        else
        {
          *(_BYTE *)(v7 + v15) = v17 | 0xC0; /*0x100532875*/
          *(_BYTE *)(v7 + v15 + 1) = v16; /*0x100532879*/
        }
        goto LABEL_3; /*0x10053287d*/
      }
    }
    else if ( !v14 ) /*0x10053284e*/
    {
      goto LABEL_15; /*0x10053284e*/
    }
    *(_BYTE *)(v7 + v15) = v9; /*0x100532770*/
    a2 = v21; /*0x100532774*/
LABEL_3:
    --a4; /*0x100532778*/
    v8 += v13; /*0x10053277b*/
    v24 = v8; /*0x10053277e*/
    if ( !a4 ) /*0x100532785*/
      break; /*0x100532785*/
  }
  a1[2] = v24; /*0x10053295a*/
  result = v22; /*0x100532966*/
  a1[1] = v23; /*0x10053296e*/
  *a1 = result; /*0x100532972*/
  return result; /*0x100532975*/
}