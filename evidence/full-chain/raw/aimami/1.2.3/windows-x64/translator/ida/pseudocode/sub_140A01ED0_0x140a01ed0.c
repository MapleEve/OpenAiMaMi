// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A01ED0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  char **v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  _BYTE *v19; // r15
  _BYTE *v20; // r14
  _BYTE *v21; // rax
  _BYTE *v22; // rdi
  _BYTE *v23; // rdx
  char v24; // dl
  int v25; // r8d
  int v26; // r9d
  int v27; // r10d
  int v28; // r8d
  _BYTE *v29; // r15
  __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rax
  _BYTE v34[104]; // [rsp+30h] [rbp-50h] BYREF
  char v35[8]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+20h]
  __int64 v37; // [rsp+B0h] [rbp+30h]
  __int64 v38; // [rsp+B8h] [rbp+38h]
  __int64 v39; // [rsp+C0h] [rbp+40h]

  v39 = -2; /*0x140a01eeb*/
  result = sub_14033C560(a2, a3); /*0x140a01f02*/
  v8 = a3 - v7; /*0x140a01f0a*/
  if ( a3 == v7 ) /*0x140a01f0d*/
    goto LABEL_4; /*0x140a01f0d*/
  if ( v8 >= a3 ) /*0x140a01f12*/
  {
    if ( !v7 ) /*0x140a01f5e*/
      goto LABEL_20; /*0x140a01f5e*/
LABEL_11:
    v9 = &off_1417A7D08; /*0x140a01f60*/
LABEL_12:
    sub_1416C2F60(a2, a3, v8, a3, (__int64)v9); /*0x140a01f67*/
  }
  if ( *(char *)(a2 + v8) < -64 ) /*0x140a01f19*/
    goto LABEL_11; /*0x140a01f19*/
LABEL_4:
  if ( v7 < 7 ) /*0x140a01f1f*/
    goto LABEL_20; /*0x140a01f1f*/
  result = *(_DWORD *)(a2 + v8) ^ 0x6968743Cu; /*0x140a01f2a*/
  if ( (unsigned int)result | *(_DWORD *)(a2 + v8 + 3) ^ 0x3E6B6E69 ) /*0x140a01f38*/
    goto LABEL_20; /*0x140a01f38*/
  v8 += 7LL; /*0x140a01f40*/
  if ( v8 ) /*0x140a01f44*/
  {
    if ( a3 <= v8 ) /*0x140a01f49*/
    {
      if ( a3 != v8 ) /*0x140a01f7f*/
        goto LABEL_9; /*0x140a01f7f*/
    }
    else if ( *(char *)(a2 + v8) < -64 ) /*0x140a01f50*/
    {
LABEL_9:
      v9 = &off_1417A7D20; /*0x140a01f52*/
      goto LABEL_12; /*0x140a01f59*/
    }
  }
  sub_1414A2990((unsigned int)v34, a2 + v8, a3 - v8, (unsigned int)aThink_0, 8); /*0x140a01fa5*/
  result = sub_140A6C6F0(v35, v34); /*0x140a01fb1*/
  if ( !v35[0] ) /*0x140a01fba*/
  {
LABEL_20:
    *a1 = -1; /*0x140a01fdb*/
    return result; /*0x140a01ff5*/
  }
  v10 = v8 + v36; /*0x140a01fc3*/
  if ( __CFADD__(v8, v36) ) /*0x140a01fc6*/
    goto LABEL_25; /*0x140a01fc6*/
  if ( v8 ) /*0x140a01fcb*/
  {
    if ( a3 <= v8 ) /*0x140a01fd0*/
    {
      if ( a3 != v8 ) /*0x140a01ff6*/
        goto LABEL_25; /*0x140a01ff6*/
    }
    else if ( *(char *)(a2 + v8) <= -65 ) /*0x140a01fd7*/
    {
LABEL_25:
      sub_1416C2F60(a2, a3, v8, v8 + v36, (__int64)&off_1417A7D38); /*0x140a02009*/
    }
  }
  if ( v10 ) /*0x140a01ffb*/
  {
    if ( v10 >= a3 ) /*0x140a02000*/
    {
      if ( v10 != a3 ) /*0x140a02028*/
        goto LABEL_25; /*0x140a02028*/
    }
    else if ( *(char *)(a2 + v10) <= -65 ) /*0x140a02007*/
    {
      goto LABEL_25; /*0x140a02007*/
    }
  }
  v11 = sub_14033BC10(a2 + v8, v36); /*0x140a0202d*/
  v14 = v12; /*0x140a02032*/
  if ( v12 < 0 ) /*0x140a02038*/
  {
    v15 = 0; /*0x140a0203a*/
    goto LABEL_29; /*0x140a0203a*/
  }
  if ( v12 ) /*0x140a0204a*/
  {
    v16 = v11; /*0x140a0204c*/
    nullsub_1(v13); /*0x140a0204f*/
    v15 = 1; /*0x140a02054*/
    v17 = sub_140001650(v14, 1); /*0x140a02062*/
    if ( !v17 ) /*0x140a0206a*/
LABEL_29:
      sub_1416C2D4B(v15, v14); /*0x140a0203d*/
    v38 = v17; /*0x140a0206c*/
    sub_141684120(v17, v16, v14); /*0x140a02079*/
  }
  else
  {
    v38 = 1; /*0x140a02085*/
  }
  v18 = v10 + 8; /*0x140a02089*/
  if ( v10 != -8 ) /*0x140a02090*/
  {
    if ( a3 <= v18 ) /*0x140a02095*/
    {
      if ( a3 != v18 ) /*0x140a020c2*/
      {
LABEL_37:
        v37 = v14; /*0x140a0209e*/
        sub_1416C2F60(a2, a3, v18, a3, (__int64)&off_1417A7D50); /*0x140a020b7*/
      }
    }
    else if ( *(char *)(a2 + v18) <= -65 ) /*0x140a0209c*/
    {
      goto LABEL_37; /*0x140a0209c*/
    }
  }
  v19 = (_BYTE *)(a2 + v18); /*0x140a020c4*/
  v20 = (_BYTE *)(a3 - v18); /*0x140a020cb*/
  if ( a3 == v18 ) /*0x140a020ce*/
  {
    v21 = nullptr; /*0x140a020d0*/
    goto LABEL_57; /*0x140a020d2*/
  }
  v22 = (_BYTE *)(a3 + a2); /*0x140a020d7*/
  v21 = nullptr; /*0x140a020da*/
  v23 = v19; /*0x140a020dc*/
  do /*0x140a020f9*/
  {
    v13 = v23; /*0x140a020ff*/
    v24 = *v23; /*0x140a02102*/
    v25 = (unsigned __int8)v24; /*0x140a02105*/
    if ( v24 < 0 ) /*0x140a0210c*/
    {
      v26 = v24 & 0x1F; /*0x140a0212a*/
      v27 = v13[1] & 0x3F; /*0x140a02133*/
      if ( (unsigned __int8)v24 <= 0xDFu ) /*0x140a0213b*/
      {
        v23 = v13 + 2; /*0x140a0218a*/
        v25 = v27 | (v26 << 6); /*0x140a02195*/
        if ( (v13[1] & 0x3B | (v26 << 6) & 0x1FFFFB) == 9 ) /*0x140a021a6*/
          goto LABEL_42; /*0x140a021a6*/
      }
      else
      {
        v28 = (v27 << 6) | v13[2] & 0x3F; /*0x140a0214a*/
        if ( (unsigned __int8)v24 < 0xF0u ) /*0x140a02150*/
        {
          v23 = v13 + 3; /*0x140a021ae*/
          v25 = (v26 << 12) | v28; /*0x140a021b6*/
          if ( (v25 & 0x1FFFFB) == 9 ) /*0x140a021c7*/
            goto LABEL_42; /*0x140a021c7*/
        }
        else
        {
          v23 = v13 + 4; /*0x140a02152*/
          v25 = ((v26 & 7) << 18) | (v28 << 6) | v13[3] & 0x3F; /*0x140a02171*/
          if ( (v25 & 0x1FFFFB) == 9 ) /*0x140a02182*/
            goto LABEL_42; /*0x140a02182*/
        }
      }
    }
    else
    {
      v23 = v13 + 1; /*0x140a0210e*/
      if ( (v25 & 0x1FFFFB) == 9 ) /*0x140a02120*/
        goto LABEL_42; /*0x140a02120*/
    }
    if ( v25 != 10 && v25 != 32 ) /*0x140a021de*/
      goto LABEL_57; /*0x140a021de*/
LABEL_42:
    v21 = &v23[v21 - v13]; /*0x140a020f0*/
  }
  while ( v23 != v22 ); /*0x140a020f9*/
  v21 = v20; /*0x140a021e6*/
LABEL_57:
  v29 = &v19[(_QWORD)v21]; /*0x140a021e9*/
  v30 = v20 - v21; /*0x140a021ec*/
  if ( v30 < 0 ) /*0x140a021ef*/
  {
    v31 = 0; /*0x140a021f1*/
    goto LABEL_59; /*0x140a021f1*/
  }
  v32 = 1; /*0x140a02205*/
  if ( v30 ) /*0x140a0220a*/
  {
    nullsub_1(v13); /*0x140a0220c*/
    v31 = 1; /*0x140a02211*/
    v33 = sub_140001650(v30, 1); /*0x140a0221e*/
    if ( !v33 ) /*0x140a02226*/
    {
LABEL_59:
      v37 = v14; /*0x140a021f3*/
      sub_1416C2D4B(v31, v30); /*0x140a021fd*/
    }
    v32 = v33; /*0x140a02228*/
    sub_141684120(v33, v29, v30); /*0x140a02234*/
  }
  *a1 = v14; /*0x140a02239*/
  result = v38; /*0x140a0223c*/
  a1[1] = v38; /*0x140a02240*/
  a1[2] = v14; /*0x140a02244*/
  a1[3] = v30; /*0x140a02248*/
  a1[4] = v32; /*0x140a0224c*/
  a1[5] = v30; /*0x140a02250*/
  return result; /*0x140a01fe2*/
}