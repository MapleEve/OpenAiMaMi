// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x14077d150
// name: sub_14077D150
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14077D150(__int64 *a1, char *a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v7; // rax
  unsigned __int8 *v8; // rdi
  __int64 v9; // r14
  __int64 *v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // r12d
  int v13; // ecx
  int v14; // r8d
  int v15; // r12d
  unsigned __int8 v16; // dl
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // r12d
  unsigned __int8 v23; // cl
  unsigned __int64 v24; // r8
  char v25; // cl
  unsigned int v26; // edx
  char v27; // dl
  unsigned int v28; // r8d
  char v29; // r8
  unsigned __int64 v30; // r8
  unsigned int v31; // edx
  __int64 *v32; // r12
  __int64 *v33; // r12
  __int64 *v34; // r12
  __int64 *v35; // r12
  __int64 *v36; // r12
  __int64 *v37; // r12
  __int64 *v38; // r12
  __int64 result; // rax
  __int64 v40; // [rsp+28h] [rbp-18h] BYREF
  __int64 v41; // [rsp+30h] [rbp-10h]
  __int64 v42; // [rsp+38h] [rbp-8h]
  __int64 v43; // [rsp+40h] [rbp+0h]

  v43 = -2;
  if ( a3 < 0 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v40 = 0;
    v41 = 1;
    v42 = 0;
    goto LABEL_83;
  }
  nullsub_1(a1);
  v4 = 1;
  v7 = sub_140001650(a3, 1);
  if ( !v7 )
LABEL_3:
    sub_1416C2D4B(v4, a3);
  v40 = a3;
  v41 = v7;
  v42 = 0;
  v8 = (unsigned __int8 *)&a2[a3];
  v9 = 0;
  v10 = &v40;
  while ( 1 )
  {
    v12 = (unsigned __int8)*a2;
    if ( *a2 < 0 )
    {
      v13 = v12 & 0x1F;
      v14 = a2[1] & 0x3F;
      if ( (unsigned __int8)v12 <= 0xDFu )
      {
        a2 += 2;
        v12 = v14 | (v13 << 6);
        if ( v12 != 92 )
          goto LABEL_27;
      }
      else
      {
        v15 = (v14 << 6) | a2[2] & 0x3F;
        if ( (unsigned __int8)*a2 < 0xF0u )
        {
          a2 += 3;
          v12 = (v13 << 12) | v15;
          if ( v12 != 92 )
          {
LABEL_27:
            if ( v12 < 0x80 )
            {
              if ( v40 == v9 )
              {
                sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
                v10 = &v40;
              }
              v7 = v41;
              *(_BYTE *)(v41 + v9) = v12;
              v11 = 1;
              goto LABEL_8;
            }
            v24 = 4LL - (v12 < 0x10000);
            if ( v12 < 0x800 )
              v24 = 2;
            if ( v24 > v40 - v9 )
            {
              sub_141688D30((_DWORD)v10, v9, v24, 1, 1);
              v10 = &v40;
              v7 = v41;
            }
            v25 = v12 & 0x3F | 0x80;
            v26 = v12 >> 6;
            if ( v12 < 0x800 )
            {
              *(_BYTE *)(v7 + v9) = v26 | 0xC0;
              *(_BYTE *)(v7 + v9 + 1) = v25;
              v9 += 2;
              goto LABEL_9;
            }
            v27 = v26 & 0x3F | 0x80;
            v28 = v12 >> 12;
            if ( v12 > 0xFFFF )
            {
              v29 = v28 & 0x3F | 0x80;
              *(_BYTE *)(v7 + v9) = (v12 >> 18) | 0xF0;
LABEL_39:
              *(_BYTE *)(v7 + v9 + 1) = v29;
              *(_BYTE *)(v7 + v9 + 2) = v27;
              *(_BYTE *)(v7 + v9 + 3) = v25;
              v11 = 4;
              goto LABEL_8;
            }
            goto LABEL_7;
          }
        }
        else
        {
          v16 = a2[3];
          a2 += 4;
          v12 = ((v13 & 7) << 18) | (v15 << 6) | v16 & 0x3F;
          if ( v12 != 92 )
            goto LABEL_27;
        }
      }
    }
    else
    {
      ++a2;
      if ( v12 != 92 )
        goto LABEL_27;
    }
    if ( a2 == (char *)v8 )
      break;
    v17 = (unsigned __int8)*a2;
    if ( *a2 < 0 )
    {
      v20 = v17 & 0x1F;
      v21 = a2[1] & 0x3F;
      if ( (unsigned __int8)v17 <= 0xDFu )
      {
        a2 += 2;
        v17 = v21 | (v20 << 6);
        v18 = v40;
        v19 = v17 - 92;
LABEL_41:
        switch ( v19 )
        {
          case 0LL:
            if ( v18 == v9 )
            {
              v35 = v10;
              sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
              v10 = v35;
            }
            v7 = v41;
            *(_BYTE *)(v41 + v9++) = 92;
            break;
          case 1LL:
          case 2LL:
          case 3LL:
          case 4LL:
          case 5LL:
          case 7LL:
          case 8LL:
          case 9LL:
          case 11LL:
          case 12LL:
          case 13LL:
          case 14LL:
          case 15LL:
          case 16LL:
          case 17LL:
          case 19LL:
          case 20LL:
          case 21LL:
          case 23LL:
            goto LABEL_65;
          case 6LL:
            if ( v18 == v9 )
            {
              v36 = v10;
              sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
              v10 = v36;
            }
            v7 = v41;
            *(_BYTE *)(v41 + v9++) = 8;
            break;
          case 10LL:
            if ( v18 == v9 )
            {
              v32 = v10;
              sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
              v10 = v32;
            }
            v7 = v41;
            *(_BYTE *)(v41 + v9++) = 12;
            break;
          case 18LL:
            if ( v18 == v9 )
            {
              v34 = v10;
              sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
              v10 = v34;
            }
            v7 = v41;
            *(_BYTE *)(v41 + v9++) = 10;
            break;
          case 22LL:
            if ( v18 == v9 )
            {
              v37 = v10;
              sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
              v10 = v37;
            }
            v7 = v41;
            *(_BYTE *)(v41 + v9++) = 13;
            break;
          case 24LL:
            if ( v18 == v9 )
            {
              v33 = v10;
              sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
              v10 = v33;
            }
            v7 = v41;
            *(_BYTE *)(v41 + v9++) = 9;
            break;
          default:
            goto LABEL_61;
        }
        goto LABEL_9;
      }
      v22 = (v21 << 6) | a2[2] & 0x3F;
      if ( (unsigned __int8)*a2 < 0xF0u )
      {
        a2 += 3;
        v17 = (v20 << 12) | v22;
        v18 = v40;
        v19 = v17 - 92;
        if ( (unsigned int)v19 <= 0x18 )
          goto LABEL_41;
      }
      else
      {
        v23 = a2[3];
        a2 += 4;
        v17 = ((v20 & 7) << 18) | (v22 << 6) | v23 & 0x3F;
        v18 = v40;
        v19 = v17 - 92;
        if ( (unsigned int)v19 <= 0x18 )
          goto LABEL_41;
      }
    }
    else
    {
      ++a2;
      v18 = v40;
      v19 = v17 - 92;
      if ( (unsigned int)v19 <= 0x18 )
        goto LABEL_41;
    }
LABEL_61:
    if ( v17 == 34 )
    {
      if ( v18 == v9 )
      {
        v38 = v10;
        sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
        v10 = v38;
      }
      v7 = v41;
      *(_BYTE *)(v41 + v9++) = 34;
      goto LABEL_9;
    }
LABEL_65:
    if ( v18 == v9 )
    {
      sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
      v10 = &v40;
    }
    v7 = v41;
    *(_BYTE *)(v41 + v9++) = 92;
    v42 = v9;
    if ( v17 < 0x80 )
    {
      if ( v40 == v9 )
      {
        sub_141688D30((_DWORD)v10, v9, 1, 1, 1);
        v10 = &v40;
        v7 = v41;
      }
      *(_BYTE *)(v7 + v9) = v17;
      v11 = 1;
      goto LABEL_8;
    }
    v30 = 4LL - (v17 < 0x10000);
    if ( v17 < 0x800 )
      v30 = 2;
    if ( v30 > v40 - v9 )
    {
      sub_141688D30((_DWORD)v10, v9, v30, 1, 1);
      v10 = &v40;
      v7 = v41;
    }
    v25 = v17 & 0x3F | 0x80;
    v31 = v17 >> 6;
    if ( v17 < 0x800 )
    {
      *(_BYTE *)(v7 + v9) = v31 | 0xC0;
      *(_BYTE *)(v7 + v9 + 1) = v25;
      v11 = 2;
      goto LABEL_8;
    }
    v27 = v31 & 0x3F | 0x80;
    v28 = v17 >> 12;
    if ( v17 > 0xFFFF )
    {
      v29 = v28 & 0x3F | 0x80;
      *(_BYTE *)(v7 + v9) = (v17 >> 18) | 0xF0;
      goto LABEL_39;
    }
LABEL_7:
    *(_BYTE *)(v7 + v9) = v28 | 0xE0;
    *(_BYTE *)(v7 + v9 + 1) = v27;
    *(_BYTE *)(v7 + v9 + 2) = v25;
    v11 = 3;
LABEL_8:
    v9 += v11;
LABEL_9:
    v42 = v9;
    if ( a2 == (char *)v8 )
      goto LABEL_83;
  }
  if ( v40 == v9 )
    sub_141688D30((unsigned int)&v40, v9, 1, 1, 1);
  *(_BYTE *)(v41 + v9) = 92;
  v42 = v9 + 1;
LABEL_83:
  a1[2] = v42;
  *a1 = v40;
  result = v41;
  a1[1] = v41;
  return result;
}