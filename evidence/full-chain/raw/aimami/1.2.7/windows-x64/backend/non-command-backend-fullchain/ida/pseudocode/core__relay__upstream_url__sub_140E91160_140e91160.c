// win 1.2.7 | module src/core/relay/upstream_url.rs (anchor: emits "<invalid relay URL>" literal; mac parity core__relay__upstream_url.c:1318 same literal) | ea 0x140e91160 | name sub_140E91160
_BYTE *__fastcall sub_140E91160(_BYTE *a1, __int64 a2)
{
  _BYTE *v3; // r8
  __int64 v4; // rdx
  _BYTE *v5; // r9
  char v6; // r11
  _BYTE *v7; // rsi
  __int64 v8; // rcx
  char v9; // r9
  unsigned int v10; // r11d
  int v11; // edx
  int v12; // edi
  int v13; // r11d
  unsigned int v14; // esi
  char v15; // bl
  _BYTE *v16; // r11
  unsigned int v17; // esi
  char v18; // di
  char v19; // bl
  int v20; // ebx
  int v21; // edi
  unsigned int v22; // edi

  v3 = &a1[a2];
  if ( !a2 )
  {
    v5 = a1;
    v8 = 0;
LABEL_26:
    if ( v5 == v3 )
      return &a1[v8];
    while ( 1 )
    {
      v16 = v3;
      v17 = (char)*(v3 - 1);
      if ( (v17 & 0x80000000) != 0 )
      {
        v18 = *(v3 - 2);
        if ( v18 >= -64 )
        {
          v3 -= 2;
          v21 = v18 & 0x1F;
        }
        else
        {
          v19 = *(v3 - 3);
          if ( v19 >= -64 )
          {
            v3 -= 3;
            v20 = v19 & 0xF;
          }
          else
          {
            v3 -= 4;
            v20 = ((*(v16 - 4) & 7) << 6) | v19 & 0x3F;
          }
          v21 = (v20 << 6) | v18 & 0x3F;
        }
        v17 = (v21 << 6) | v17 & 0x3F;
        if ( v17 - 9 < 5 )
          goto LABEL_30;
      }
      else
      {
        --v3;
        if ( v17 - 9 < 5 )
          goto LABEL_30;
      }
      if ( v17 != 32 )
      {
        if ( v17 < 0x85 )
          return &a1[v8];
        v22 = v17 >> 8;
        if ( v17 >> 8 > 0x1F )
        {
          if ( v22 == 32 )
          {
            v15 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v17) >> 1;
          }
          else
          {
            if ( v22 != 48 )
              return &a1[v8];
            v15 = v17 == 12288;
          }
        }
        else if ( v22 )
        {
          if ( v22 != 22 )
            return &a1[v8];
          v15 = v17 == 5760;
        }
        else
        {
          v15 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v17);
        }
        if ( (v15 & 1) == 0 )
          return &a1[v8];
      }
LABEL_30:
      if ( v5 == v3 )
        return &a1[v8];
    }
  }
  v4 = 0;
  v5 = a1;
  do
  {
    v7 = v5;
    v8 = v4;
    v9 = *v5;
    v10 = (unsigned __int8)v9;
    if ( v9 < 0 )
    {
      v11 = v9 & 0x1F;
      v12 = v7[1] & 0x3F;
      if ( (unsigned __int8)v9 <= 0xDFu )
      {
        v5 = v7 + 2;
        v10 = v12 | (v11 << 6);
      }
      else
      {
        v13 = (v12 << 6) | v7[2] & 0x3F;
        if ( (unsigned __int8)v9 < 0xF0u )
        {
          v5 = v7 + 3;
          v10 = (v11 << 12) | v13;
        }
        else
        {
          v5 = v7 + 4;
          v10 = ((v11 & 7) << 18) | (v13 << 6) | v7[3] & 0x3F;
        }
      }
    }
    else
    {
      v5 = v7 + 1;
    }
    v4 = v8 + v5 - v7;
    if ( v10 - 9 >= 5 && v10 != 32 )
    {
      if ( v10 < 0x85 )
        goto LABEL_26;
      v14 = v10 >> 8;
      if ( v10 >> 8 > 0x1F )
      {
        if ( v14 == 32 )
        {
          v6 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v10) >> 1;
        }
        else
        {
          if ( v14 != 48 )
            goto LABEL_26;
          v6 = v10 == 12288;
        }
      }
      else if ( v14 )
      {
        if ( v14 != 22 )
          goto LABEL_26;
        v6 = v10 == 5760;
      }
      else
      {
        v6 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v10);
      }
      if ( (v6 & 1) == 0 )
        goto LABEL_26;
    }
  }
  while ( v5 != v3 );
  v8 = 0;
  return &a1[v8];
}
