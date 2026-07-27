// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x14040c9f0
// name: sub_14040C9F0
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_14040C9F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int8 *v20; // rdi
  __int64 v21; // r14
  __int128 *v22; // r10
  __int64 v23; // rcx
  unsigned int v24; // r12d
  int v25; // ecx
  int v26; // r8d
  int v27; // r12d
  unsigned __int8 v28; // dl
  unsigned int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // edx
  int v34; // r12d
  unsigned __int8 v35; // cl
  unsigned __int64 v36; // r8
  char v37; // cl
  unsigned int v38; // edx
  char v39; // dl
  unsigned int v40; // r8d
  char v41; // r8
  unsigned __int64 v42; // r8
  unsigned int v43; // edx
  __int128 *v44; // r12
  __int128 *v45; // r12
  __int128 *v46; // r12
  __int128 *v47; // r12
  __int128 *v48; // r12
  int v50; // [rsp+28h] [rbp-58h] BYREF
  __int64 v51; // [rsp+30h] [rbp-50h]
  __int64 v52; // [rsp+38h] [rbp-48h]
  __int128 v53; // [rsp+40h] [rbp-40h] BYREF
  __int64 v54; // [rsp+50h] [rbp-30h]
  __int64 v55; // [rsp+58h] [rbp-28h] BYREF
  __int64 v56; // [rsp+60h] [rbp-20h]
  __int64 v57; // [rsp+68h] [rbp-18h]
  __int64 v58; // [rsp+70h] [rbp-10h]
  __int64 v59; // [rsp+78h] [rbp-8h]
  char v60; // [rsp+80h] [rbp+0h]
  __int16 v61; // [rsp+88h] [rbp+8h]
  __int64 v62; // [rsp+90h] [rbp+10h]

  v62 = -2;
  v54 = a3;
  v55 = a2;
  v56 = a3;
  v57 = 0;
  v58 = a3;
  v59 = 0x3D0000003DLL;
  v60 = 1;
  v61 = 1;
  v53 = 1u;
  LOBYTE(v4) = sub_140421EE0(&v50, &v55);
  if ( v50 == 1 )
  {
    v5 = v52;
    *((_QWORD *)&v53 + 1) = v52;
  }
  else
  {
    if ( HIBYTE(v61) )
      goto LABEL_39;
    HIBYTE(v61) = 1;
    v5 = *((_QWORD *)&v53 + 1);
    if ( !(_BYTE)v61 && v54 == *((_QWORD *)&v53 + 1) )
      goto LABEL_39;
  }
  LOBYTE(v4) = v53;
  if ( !(_QWORD)v53 )
  {
LABEL_39:
    *a1 = -1;
    return (char)v4;
  }
  if ( (_QWORD)v53 == 1 )
  {
    if ( HIBYTE(v61) || !(_BYTE)v61 && v54 == v5 )
      goto LABEL_39;
    v6 = v54 - v5;
    goto LABEL_9;
  }
  LOBYTE(v4) = v53 - 1;
  *(_QWORD *)&v53 = v53 - 1;
  if ( HIBYTE(v61) )
    goto LABEL_39;
  v8 = v55;
  LOBYTE(v4) = sub_140421EE0(&v50, &v55);
  if ( v50 != 1 )
  {
    if ( HIBYTE(v61) )
      goto LABEL_39;
    v5 = *((_QWORD *)&v53 + 1);
    v6 = v54 - *((_QWORD *)&v53 + 1);
    LOBYTE(v4) = v61 | (v54 != *((_QWORD *)&v53 + 1));
    if ( (_BYTE)v4 != 1 )
      goto LABEL_39;
LABEL_9:
    v7 = v55 + v5;
    goto LABEL_17;
  }
  v6 = v51 - *((_QWORD *)&v53 + 1);
  v7 = *((_QWORD *)&v53 + 1) + v8;
LABEL_17:
  v9 = sub_14033BC10(v7, v6);
  v11 = v10;
  v54 = v10;
  v55 = v9;
  v56 = v10;
  v57 = 0;
  v58 = v10;
  v59 = 0x2300000023LL;
  v60 = 1;
  v61 = 1;
  v53 = 1u;
  sub_140421EE0(&v50, &v55);
  if ( v50 == 1 )
  {
    v12 = v51 - *((_QWORD *)&v53 + 1);
    v13 = v9 + *((_QWORD *)&v53 + 1);
  }
  else if ( HIBYTE(v61)
         || (v12 = v54 - *((_QWORD *)&v53 + 1), ((unsigned __int8)v61 | (v54 != *((_QWORD *)&v53 + 1))) != 1) )
  {
    v13 = 0;
  }
  else
  {
    v13 = v55 + *((_QWORD *)&v53 + 1);
  }
  if ( v13 )
    v9 = v13;
  else
    v12 = v11;
  v4 = (char *)sub_14033BC10(v9, v12);
  if ( !v14 )
    goto LABEL_39;
  v16 = v4;
  v17 = v14;
  if ( *v4 == 34 )
  {
    if ( v14 == 1 )
    {
      v17 = 1;
      goto LABEL_40;
    }
    if ( v4[v14 - 1] == 34 )
    {
      v17 = v14 - 2;
      if ( v14 != 2 )
      {
        v16 = v4 + 1;
        goto LABEL_36;
      }
      goto LABEL_39;
    }
  }
LABEL_36:
  if ( v17 < 0 )
  {
    v18 = 0;
    goto LABEL_38;
  }
LABEL_40:
  nullsub_1(v15);
  v18 = 1;
  v19 = sub_140001650(v17, 1);
  if ( !v19 )
LABEL_38:
    sub_1416C2D4B(v18, v17);
  *(_QWORD *)&v53 = v17;
  *((_QWORD *)&v53 + 1) = v19;
  v54 = 0;
  v20 = (unsigned __int8 *)&v16[v17];
  v21 = 0;
  v22 = &v53;
  while ( 1 )
  {
    v24 = (unsigned __int8)*v16;
    if ( *v16 < 0 )
    {
      v25 = v24 & 0x1F;
      v26 = v16[1] & 0x3F;
      if ( (unsigned __int8)v24 <= 0xDFu )
      {
        v16 += 2;
        v24 = v26 | (v25 << 6);
        if ( v24 != 92 )
          goto LABEL_62;
      }
      else
      {
        v27 = (v26 << 6) | v16[2] & 0x3F;
        if ( (unsigned __int8)*v16 < 0xF0u )
        {
          v16 += 3;
          v24 = (v25 << 12) | v27;
          if ( v24 != 92 )
          {
LABEL_62:
            if ( v24 < 0x80 )
            {
              if ( (_QWORD)v53 == v21 )
              {
                sub_141688D30((_DWORD)v22, v21, 1, 1, 1);
                v22 = &v53;
              }
              v19 = *((_QWORD *)&v53 + 1);
              *(_BYTE *)(*((_QWORD *)&v53 + 1) + v21) = v24;
              v23 = 1;
              goto LABEL_43;
            }
            v36 = 4LL - (v24 < 0x10000);
            if ( v24 < 0x800 )
              v36 = 2;
            if ( v36 > (__int64)v53 - v21 )
            {
              sub_141688D30((_DWORD)v22, v21, v36, 1, 1);
              v22 = &v53;
              v19 = *((_QWORD *)&v53 + 1);
            }
            v37 = v24 & 0x3F | 0x80;
            v38 = v24 >> 6;
            if ( v24 < 0x800 )
            {
              *(_BYTE *)(v19 + v21) = v38 | 0xC0;
              *(_BYTE *)(v19 + v21 + 1) = v37;
              v21 += 2;
              goto LABEL_44;
            }
            v39 = v38 & 0x3F | 0x80;
            v40 = v24 >> 12;
            if ( v24 > 0xFFFF )
            {
              v41 = v40 & 0x3F | 0x80;
              *(_BYTE *)(v19 + v21) = (v24 >> 18) | 0xF0;
LABEL_74:
              *(_BYTE *)(v19 + v21 + 1) = v41;
              *(_BYTE *)(v19 + v21 + 2) = v39;
              *(_BYTE *)(v19 + v21 + 3) = v37;
              v23 = 4;
              goto LABEL_43;
            }
            goto LABEL_42;
          }
        }
        else
        {
          v28 = v16[3];
          v16 += 4;
          v24 = ((v25 & 7) << 18) | (v27 << 6) | v28 & 0x3F;
          if ( v24 != 92 )
            goto LABEL_62;
        }
      }
    }
    else
    {
      ++v16;
      if ( v24 != 92 )
        goto LABEL_62;
    }
    if ( v16 == (char *)v20 )
      break;
    v29 = (unsigned __int8)*v16;
    if ( *v16 < 0 )
    {
      v32 = v29 & 0x1F;
      v33 = v16[1] & 0x3F;
      if ( (unsigned __int8)v29 <= 0xDFu )
      {
        v16 += 2;
        v29 = v33 | (v32 << 6);
        v30 = v53;
        v31 = v29 - 92;
LABEL_76:
        switch ( v31 )
        {
          case 0LL:
            if ( v30 == v21 )
            {
              v45 = v22;
              sub_141688D30((_DWORD)v22, v21, 1, 1, 1);
              v22 = v45;
            }
            v19 = *((_QWORD *)&v53 + 1);
            *(_BYTE *)(*((_QWORD *)&v53 + 1) + v21++) = 92;
            break;
          case 1LL:
          case 2LL:
          case 3LL:
          case 4LL:
          case 5LL:
          case 6LL:
          case 7LL:
          case 8LL:
          case 9LL:
          case 10LL:
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
            goto LABEL_94;
          case 18LL:
            if ( v30 == v21 )
            {
              v47 = v22;
              sub_141688D30((_DWORD)v22, v21, 1, 1, 1);
              v22 = v47;
            }
            v19 = *((_QWORD *)&v53 + 1);
            *(_BYTE *)(*((_QWORD *)&v53 + 1) + v21++) = 10;
            break;
          case 22LL:
            if ( v30 == v21 )
            {
              v44 = v22;
              sub_141688D30((_DWORD)v22, v21, 1, 1, 1);
              v22 = v44;
            }
            v19 = *((_QWORD *)&v53 + 1);
            *(_BYTE *)(*((_QWORD *)&v53 + 1) + v21++) = 13;
            break;
          case 24LL:
            if ( v30 == v21 )
            {
              v46 = v22;
              sub_141688D30((_DWORD)v22, v21, 1, 1, 1);
              v22 = v46;
            }
            v19 = *((_QWORD *)&v53 + 1);
            *(_BYTE *)(*((_QWORD *)&v53 + 1) + v21++) = 9;
            break;
          default:
            goto LABEL_90;
        }
        goto LABEL_44;
      }
      v34 = (v33 << 6) | v16[2] & 0x3F;
      if ( (unsigned __int8)*v16 < 0xF0u )
      {
        v16 += 3;
        v29 = (v32 << 12) | v34;
        v30 = v53;
        v31 = v29 - 92;
        if ( (unsigned int)v31 <= 0x18 )
          goto LABEL_76;
      }
      else
      {
        v35 = v16[3];
        v16 += 4;
        v29 = ((v32 & 7) << 18) | (v34 << 6) | v35 & 0x3F;
        v30 = v53;
        v31 = v29 - 92;
        if ( (unsigned int)v31 <= 0x18 )
          goto LABEL_76;
      }
    }
    else
    {
      ++v16;
      v30 = v53;
      v31 = v29 - 92;
      if ( (unsigned int)v31 <= 0x18 )
        goto LABEL_76;
    }
LABEL_90:
    if ( v29 == 34 )
    {
      if ( v30 == v21 )
      {
        v48 = v22;
        sub_141688D30((_DWORD)v22, v21, 1, 1, 1);
        v22 = v48;
      }
      v19 = *((_QWORD *)&v53 + 1);
      *(_BYTE *)(*((_QWORD *)&v53 + 1) + v21++) = 34;
      goto LABEL_44;
    }
LABEL_94:
    if ( v30 == v21 )
    {
      sub_141688D30((_DWORD)v22, v21, 1, 1, 1);
      v22 = &v53;
    }
    v19 = *((_QWORD *)&v53 + 1);
    *(_BYTE *)(*((_QWORD *)&v53 + 1) + v21++) = 92;
    v54 = v21;
    if ( v29 < 0x80 )
    {
      if ( (_QWORD)v53 == v21 )
      {
        sub_141688D30((_DWORD)v22, v21, 1, 1, 1);
        v22 = &v53;
        v19 = *((_QWORD *)&v53 + 1);
      }
      *(_BYTE *)(v19 + v21) = v29;
      v23 = 1;
      goto LABEL_43;
    }
    v42 = 4LL - (v29 < 0x10000);
    if ( v29 < 0x800 )
      v42 = 2;
    if ( v42 > (__int64)v53 - v21 )
    {
      sub_141688D30((_DWORD)v22, v21, v42, 1, 1);
      v22 = &v53;
      v19 = *((_QWORD *)&v53 + 1);
    }
    v37 = v29 & 0x3F | 0x80;
    v43 = v29 >> 6;
    if ( v29 < 0x800 )
    {
      *(_BYTE *)(v19 + v21) = v43 | 0xC0;
      *(_BYTE *)(v19 + v21 + 1) = v37;
      v23 = 2;
      goto LABEL_43;
    }
    v39 = v43 & 0x3F | 0x80;
    v40 = v29 >> 12;
    if ( v29 > 0xFFFF )
    {
      v41 = v40 & 0x3F | 0x80;
      *(_BYTE *)(v19 + v21) = (v29 >> 18) | 0xF0;
      goto LABEL_74;
    }
LABEL_42:
    *(_BYTE *)(v19 + v21) = v40 | 0xE0;
    *(_BYTE *)(v19 + v21 + 1) = v39;
    *(_BYTE *)(v19 + v21 + 2) = v37;
    v23 = 3;
LABEL_43:
    v21 += v23;
LABEL_44:
    v54 = v21;
    if ( v16 == (char *)v20 )
      goto LABEL_111;
  }
  if ( (_QWORD)v53 == v21 )
    sub_141688D30((unsigned int)&v53, v21, 1, 1, 1);
  *(_BYTE *)(*((_QWORD *)&v53 + 1) + v21) = 92;
  v54 = v21 + 1;
LABEL_111:
  LOBYTE(v4) = v54;
  a1[2] = v54;
  *(_OWORD *)a1 = v53;
  return (char)v4;
}