// module: codexmate_lib/commands/accounts
// addr: 0x1403db1e0
// name: sub_1403DB1E0
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char *__fastcall sub_1403DB1E0(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rsi
  __int64 v4; // r9
  char v5; // r11
  char v6; // r8
  _BYTE *v7; // r14
  __int64 v8; // rdi
  char v9; // si
  unsigned int v10; // r8d
  int v11; // ebx
  int v12; // r10d
  int v13; // r8d
  unsigned int v14; // r10d
  __int64 v15; // r14
  char *v16; // r9
  unsigned __int8 *v17; // rdi
  char *v18; // r15
  int v19; // r12d
  int v20; // ebp
  int v21; // r10d
  int v22; // r12d
  unsigned __int8 v23; // r10
  char *result; // rax

  v2 = 0;
  v3 = a1;
  v4 = 0;
  while ( 2 )
  {
    v5 = 1;
    while ( 1 )
    {
      if ( v3 == &a1[a2] )
      {
        v3 = &a1[a2];
        v15 = v4;
        v8 = a2;
        if ( a2 != v4 )
          goto LABEL_31;
        goto LABEL_2;
      }
      v7 = v3;
      v8 = v2;
      v9 = *v3;
      v10 = (unsigned __int8)v9;
      if ( v9 < 0 )
      {
        v11 = v9 & 0x1F;
        v12 = v7[1] & 0x3F;
        if ( (unsigned __int8)v9 <= 0xDFu )
        {
          v3 = v7 + 2;
          v10 = v12 | (v11 << 6);
        }
        else
        {
          v13 = (v12 << 6) | v7[2] & 0x3F;
          if ( (unsigned __int8)v9 < 0xF0u )
          {
            v3 = v7 + 3;
            v10 = (v11 << 12) | v13;
          }
          else
          {
            v3 = v7 + 4;
            v10 = ((v11 & 7) << 18) | (v13 << 6) | v7[3] & 0x3F;
          }
        }
      }
      else
      {
        v3 = v7 + 1;
      }
      v2 = v8 + v3 - v7;
      if ( v10 == 32 || v10 == 58 )
        break;
      if ( v10 - 9 < 5 )
      {
LABEL_30:
        v5 = 0;
        v15 = v8 + v3 - v7;
        if ( v8 != v4 )
          goto LABEL_31;
        goto LABEL_2;
      }
      if ( v10 >= 0x85 )
      {
        v14 = v10 >> 8;
        if ( v10 >> 8 > 0x1F )
        {
          if ( v14 == 32 )
          {
            v6 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v10) >> 1;
LABEL_5:
            if ( (v6 & 1) != 0 )
              goto LABEL_30;
          }
          else if ( v14 == 48 )
          {
            v6 = v10 == 12288;
            goto LABEL_5;
          }
        }
        else
        {
          if ( !v14 )
          {
            v6 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v10);
            goto LABEL_5;
          }
          if ( v14 == 22 )
          {
            v6 = v10 == 5760;
            goto LABEL_5;
          }
        }
      }
    }
    v15 = v8 + v3 - v7;
    v5 = 0;
    if ( v8 != v4 )
    {
LABEL_31:
      v16 = &a1[v4];
      v17 = &a1[v8];
      v18 = v16;
      while ( v18 != (char *)v17 )
      {
        v19 = (unsigned __int8)*v18;
        if ( *v18 >= 0 )
        {
          ++v18;
        }
        else
        {
          v20 = v19 & 0x1F;
          v21 = v18[1] & 0x3F;
          if ( (unsigned __int8)v19 <= 0xDFu )
          {
            v18 += 2;
            v19 = v21 | (v20 << 6);
          }
          else
          {
            v22 = (v21 << 6) | v18[2] & 0x3F;
            if ( (unsigned __int8)*v18 < 0xF0u )
            {
              v18 += 3;
              v19 = (v20 << 12) | v22;
            }
            else
            {
              v23 = v18[3];
              v18 += 4;
              v19 = ((v20 & 7) << 18) | (v22 << 6) | v23 & 0x3F;
            }
          }
        }
        if ( (unsigned int)(v19 - 91) < 0xFFFFFFE6 && v19 != 95 )
          goto LABEL_2;
      }
      goto LABEL_42;
    }
LABEL_2:
    v4 = v15;
    if ( !v5 )
      continue;
    break;
  }
  v16 = nullptr;
LABEL_42:
  result = (char *)&unk_141751218;
  if ( v16 )
    return v16;
  return result;
}