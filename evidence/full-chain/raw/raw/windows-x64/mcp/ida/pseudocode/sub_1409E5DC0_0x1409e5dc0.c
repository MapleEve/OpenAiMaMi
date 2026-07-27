// module: codexmate_lib/core/mcp
// addr: 0x1409e5dc0
// name: sub_1409E5DC0
// win 1.2.1 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
unsigned __int8 *__fastcall sub_1409E5DC0(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rax
  char v3; // r10
  char v4; // r8
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r11
  int v8; // ebx
  unsigned __int8 *v9; // r9
  int v10; // edi
  int v11; // ebx
  int v12; // r14d
  int v13; // ebp
  unsigned __int8 v14; // di
  int v15; // r9d
  int v16; // r14d
  int v17; // ebp
  int v18; // r9d
  int v19; // r14d
  int v20; // ebp
  unsigned __int8 *v21; // r9
  unsigned __int8 *v22; // rdi
  int v23; // ebx
  int v24; // esi
  int v25; // r14d
  int v26; // ebp
  unsigned __int8 v27; // bl

  if ( !a2 )
    return a1;
  v2 = &a2[(_QWORD)a1];
  v3 = 0;
  v4 = 0;
  v5 = a1;
  v6 = nullptr;
  while ( 1 )
  {
    v7 = v5 + 1;
    v8 = *v5;
    if ( (v3 & 1) == 0 )
      break;
    if ( (v8 & 0x80u) != 0 )
    {
      v18 = v8 & 0x1F;
      v19 = v5[1] & 0x3F;
      if ( (unsigned __int8)v8 < 0xE0u )
      {
        v7 = v5 + 2;
        v8 = v19 | (v18 << 6);
        v6 += 2;
        if ( (v4 & 1) != 0 )
          goto LABEL_3;
      }
      else
      {
        v20 = (v19 << 6) | v5[2] & 0x3F;
        if ( (unsigned __int8)v8 < 0xF0u )
        {
          v7 = v5 + 3;
          v8 = (v18 << 12) | v20;
          v6 += 3;
          if ( (v4 & 1) != 0 )
            goto LABEL_3;
        }
        else
        {
          v7 = v5 + 4;
          v8 = ((v8 & 7) << 18) | (v20 << 6) | v5[3] & 0x3F;
          v6 += 4;
          if ( (v4 & 1) != 0 )
            goto LABEL_3;
        }
      }
    }
    else
    {
      ++v6;
      if ( (v4 & 1) != 0 )
        goto LABEL_3;
    }
    if ( v8 == 34 )
      goto LABEL_58;
    if ( v8 != 92 )
    {
      if ( v7 == v2 )
        return a1;
      v9 = v7;
      while ( 1 )
      {
        v10 = *v7;
        if ( (v10 & 0x80u) != 0 )
        {
          v11 = v10 & 0x1F;
          v12 = v7[1] & 0x3F;
          if ( (unsigned __int8)v10 < 0xE0u )
          {
            v7 += 2;
            v10 = v12 | (v11 << 6);
            v6 = &v7[v6 - v9];
            if ( v10 == 34 )
              goto LABEL_58;
          }
          else
          {
            v13 = (v12 << 6) | v7[2] & 0x3F;
            if ( (unsigned __int8)v10 < 0xF0u )
            {
              v7 += 3;
              v10 = (v11 << 12) | v13;
              v6 = &v7[v6 - v9];
              if ( v10 == 34 )
                goto LABEL_58;
            }
            else
            {
              v14 = v7[3];
              v7 += 4;
              v10 = ((v11 & 7) << 18) | (v13 << 6) | v14 & 0x3F;
              v6 = &v7[v6 - v9];
              if ( v10 == 34 )
                goto LABEL_58;
            }
          }
        }
        else
        {
          v6 = &(++v7)[v6 - v9];
          if ( v10 == 34 )
            goto LABEL_58;
        }
        if ( v10 == 92 )
          break;
        v9 = v7;
        if ( v7 == v2 )
          return a1;
      }
    }
LABEL_3:
    v4 ^= 1u;
    v3 = 1;
LABEL_4:
    v5 = v7;
    if ( v7 == v2 )
      return a1;
  }
  if ( (v8 & 0x80u) != 0 )
  {
    v15 = v8 & 0x1F;
    v16 = v5[1] & 0x3F;
    if ( (unsigned __int8)v8 < 0xE0u )
    {
      v7 = v5 + 2;
      v8 = v16 | (v15 << 6);
    }
    else
    {
      v17 = (v16 << 6) | v5[2] & 0x3F;
      if ( (unsigned __int8)v8 < 0xF0u )
      {
        v7 = v5 + 3;
        v8 = (v15 << 12) | v17;
      }
      else
      {
        v7 = v5 + 4;
        v8 = ((v8 & 7) << 18) | (v17 << 6) | v5[3] & 0x3F;
      }
    }
  }
  v21 = &v7[v6 - v5];
  if ( (v4 & 1) != 0 )
  {
LABEL_55:
    v6 = &v7[v6 - v5];
LABEL_56:
    v4 ^= 1u;
    v3 = 0;
    goto LABEL_4;
  }
  if ( v8 == 34 )
  {
    v6 = &v7[v6 - v5];
LABEL_58:
    v3 ^= 1u;
    v4 = 0;
    goto LABEL_4;
  }
  if ( v8 == 92 )
    goto LABEL_55;
  if ( v8 != 35 )
  {
    if ( v7 == v2 )
      return a1;
    v22 = v7;
    while ( 1 )
    {
      v23 = *v7;
      if ( (v23 & 0x80u) != 0 )
      {
        v24 = v23 & 0x1F;
        v25 = v7[1] & 0x3F;
        if ( (unsigned __int8)v23 <= 0xDFu )
        {
          v7 += 2;
          v23 = v25 | (v24 << 6);
        }
        else
        {
          v26 = (v25 << 6) | v7[2] & 0x3F;
          if ( (unsigned __int8)v23 < 0xF0u )
          {
            v7 += 3;
            v23 = (v24 << 12) | v26;
          }
          else
          {
            v27 = v7[3];
            v7 += 4;
            v23 = ((v24 & 7) << 18) | (v26 << 6) | v27 & 0x3F;
          }
        }
      }
      else
      {
        ++v7;
      }
      v6 = &v7[v21 - v22];
      switch ( v23 )
      {
        case '"':
          goto LABEL_58;
        case '#':
          goto LABEL_62;
        case '\\':
          goto LABEL_56;
      }
      v22 = v7;
      v21 = v6;
      if ( v7 == v2 )
        return a1;
    }
  }
  v21 = v6;
LABEL_62:
  if ( v21 )
  {
    if ( v21 >= a2 )
    {
      if ( v21 == a2 )
        return a1;
    }
    else if ( (char)v21[(_QWORD)a1] > -65 )
    {
      return a1;
    }
    sub_1416C2F60((_DWORD)a1, (_DWORD)a2, 0, (_DWORD)v21, (__int64)&off_1417A7638);
  }
  return a1;
}