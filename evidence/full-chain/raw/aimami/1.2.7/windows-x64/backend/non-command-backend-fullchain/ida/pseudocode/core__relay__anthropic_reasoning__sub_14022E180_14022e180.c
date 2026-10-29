// win 1.2.7 | module src/core/relay/anthropic_reasoning.rs | ea 0x14022e180 | name sub_14022E180
// win 1.2.7 | module src/core/relay/anthropic_reasoning.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14022E180(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4)
{
  int *v7; // r14
  _BYTE *v8; // r15
  __int64 v9; // rcx
  unsigned __int8 v10; // cl
  unsigned int v11; // eax
  unsigned __int64 v12; // r9
  bool v13; // cf
  unsigned int v14; // ecx
  int v15; // edx
  char result; // al
  _BYTE *v17; // rcx
  _BYTE *v18; // rbx
  int *v19; // r15
  unsigned __int64 v20; // r9
  unsigned __int8 *v21; // r14
  char *v22; // r10
  unsigned __int64 v23; // rdx
  int v24; // r11d
  unsigned __int8 *v25; // r13
  int v26; // ebp
  int v27; // r14d
  int v28; // r11d
  char v29; // r8
  int v30; // r9d
  int v31; // r10d
  int v32; // r11d
  int v33; // r9d
  int v34; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+30h] [rbp-B8h]
  _BYTE v36[168]; // [rsp+40h] [rbp-A8h] BYREF

  sub_1416B2790((unsigned int)v36, a1, a2, a3, a4);
  sub_140292200(&v34, v36);
  if ( v34 != 1 )
    return 0;
  v7 = &v34;
  v8 = v36;
  while ( 1 )
  {
    if ( v35 )
    {
      v9 = v35 - 1;
      if ( v35 - 1 >= a2 )
        sub_1419390C3(v9, a2, &off_1419D70F0);
      v10 = *(_BYTE *)(a1 + v9) - 45;
      if ( v10 >= 0x14u )
      {
        LOBYTE(v11) = 0;
        v12 = a4 + v35;
        v13 = a4 + v35 < a2;
        if ( a4 + v35 == a2 )
          goto LABEL_15;
      }
      else
      {
        v11 = 0x82005u >> v10;
        v12 = a4 + v35;
        v13 = a4 + v35 < a2;
        if ( a4 + v35 == a2 )
          goto LABEL_15;
      }
    }
    else
    {
      LOBYTE(v11) = 1;
      v12 = a4;
      v13 = a4 < a2;
      if ( a4 == a2 )
        goto LABEL_15;
    }
    if ( !v13 )
      sub_1419390C3(v12, a2, &off_1419D7108);
    v14 = *(unsigned __int8 *)(a1 + v12) - 45;
    if ( v14 > 0x13 )
      goto LABEL_3;
    v15 = 532485;
    if ( !_bittest(&v15, v14) )
      goto LABEL_3;
LABEL_15:
    if ( (v11 & 1) == 0 )
      goto LABEL_3;
    if ( v12 )
      break;
LABEL_19:
    result = 1;
    if ( v12 == a2 )
      return result;
    v17 = (_BYTE *)(a1 + v12);
    if ( *(_BYTE *)(a1 + v12) != 45 )
      return result;
    v18 = v8;
    v19 = v7;
    v20 = a2 + ~v12;
    v21 = nullptr;
    v22 = v17 + 1;
    while ( v22 != (char *)(a1 + a2) )
    {
      v23 = (unsigned __int64)v21;
      v24 = (unsigned __int8)*v22;
      if ( *v22 < 0 )
      {
        v26 = v24 & 0x1F;
        v27 = v22[1] & 0x3F;
        if ( (unsigned __int8)v24 <= 0xDFu )
        {
          v25 = (unsigned __int8 *)(v22 + 2);
          v24 = v27 | (v26 << 6);
          if ( (v22[1] & 0x3D | (v26 << 6) & 0x1FFFFD) == 0x2D )
            goto LABEL_37;
        }
        else
        {
          v28 = (v27 << 6) | v22[2] & 0x3F;
          if ( (unsigned __int8)*v22 < 0xF0u )
          {
            v25 = (unsigned __int8 *)(v22 + 3);
            v24 = (v26 << 12) | v28;
            if ( (v24 & 0x1FFFFD) == 0x2D )
              goto LABEL_37;
          }
          else
          {
            v25 = (unsigned __int8 *)(v22 + 4);
            v24 = ((v26 & 7) << 18) | (v28 << 6) | v22[3] & 0x3F;
            if ( (v24 & 0x1FFFFD) == 0x2D )
              goto LABEL_37;
          }
        }
      }
      else
      {
        v25 = (unsigned __int8 *)(v22 + 1);
        if ( (v24 & 0x1FFFFD) == 0x2D )
          goto LABEL_37;
      }
      if ( v24 != 64 )
      {
        v21 = &v25[v23 - (_QWORD)v22];
        v22 = (char *)v25;
        if ( v24 != 58 )
          continue;
      }
      goto LABEL_37;
    }
    v23 = v20;
LABEL_37:
    if ( !v23 )
      return result;
    v29 = v17[1];
    v30 = (unsigned __int8)v29;
    v7 = v19;
    v8 = v18;
    if ( v29 >= 0 )
      goto LABEL_44;
    v31 = v29 & 0x1F;
    v32 = v17[2] & 0x3F;
    if ( (unsigned __int8)v29 <= 0xDFu )
    {
      v30 = v32 | (v31 << 6);
LABEL_44:
      if ( (unsigned int)(v30 - 48) > 9 )
        return result;
      goto LABEL_45;
    }
    v33 = (v32 << 6) | v17[3] & 0x3F;
    if ( (unsigned __int8)v29 < 0xF0u )
    {
      if ( ((v31 << 12) | (unsigned int)v33) - 48 > 9 )
        return result;
    }
    else if ( (((v29 & 7) << 18) | (v33 << 6) | v17[4] & 0x3Fu) - 48 > 9 )
    {
      return result;
    }
LABEL_45:
    if ( v23 == 8
      && (unsigned __int8)(v29 - 58) >= 0xF6u
      && (unsigned __int8)(v17[2] - 58) >= 0xF6u
      && (unsigned __int8)(v17[3] - 58) >= 0xF6u
      && (unsigned __int8)(v17[4] - 58) >= 0xF6u
      && (unsigned __int8)(v17[5] - 58) >= 0xF6u
      && (unsigned __int8)(v17[6] - 58) >= 0xF6u
      && (unsigned __int8)(v17[7] - 58) >= 0xF6u
      && (unsigned __int8)(v17[8] - 48) < 0xAu )
    {
      return result;
    }
LABEL_3:
    sub_140292200(v7, v8);
    if ( !(_BYTE)v34 )
      return 0;
  }
  if ( v12 < a2 )
  {
    if ( *(char *)(a1 + v12) < -64 )
      goto LABEL_60;
    goto LABEL_19;
  }
  result = 1;
  if ( v12 != a2 )
LABEL_60:
    sub_141938F40(a1, a2, v12, a2, (__int64)&off_1419D7120);
  return result;
}
