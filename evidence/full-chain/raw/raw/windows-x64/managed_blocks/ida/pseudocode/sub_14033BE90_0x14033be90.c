// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x14033be90
// name: sub_14033BE90
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int8 *__fastcall sub_14033BE90(__int64 a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v4; // rcx
  unsigned __int8 *v5; // r10
  unsigned __int8 *v6; // r10
  unsigned __int8 *v7; // r9
  char *v8; // r10
  int v9; // esi
  int v10; // r11d
  int v11; // edi
  int v12; // esi
  unsigned __int8 v13; // di
  unsigned __int8 *v14; // rdx
  int v15; // edi
  char v16; // bl
  char v17; // bp
  char v18; // r14
  unsigned __int8 *v19; // rdx
  int v20; // ebp
  int v21; // ebx

  v4 = &a2[a1];
  v5 = nullptr;
  do
  {
    if ( v5 == a2 )
    {
      v5 = a2;
      v7 = nullptr;
      break;
    }
    v7 = v5;
    v8 = (char *)&v5[a1];
    v9 = (unsigned __int8)*v8;
    if ( *v8 >= 0 )
    {
      v6 = (unsigned __int8 *)(v8 + 1);
    }
    else
    {
      v10 = v9 & 0x1F;
      v11 = v8[1] & 0x3F;
      if ( (unsigned __int8)v9 <= 0xDFu )
      {
        v6 = (unsigned __int8 *)(v8 + 2);
        v9 = v11 | (v10 << 6);
      }
      else
      {
        v12 = (v11 << 6) | v8[2] & 0x3F;
        if ( (unsigned __int8)*v8 < 0xF0u )
        {
          v6 = (unsigned __int8 *)(v8 + 3);
          v9 = (v10 << 12) | v12;
        }
        else
        {
          v13 = v8[3];
          v6 = (unsigned __int8 *)(v8 + 4);
          v9 = ((v10 & 7) << 18) | (v12 << 6) | v13 & 0x3F;
        }
      }
    }
    v5 = &a2[v6 - v4];
  }
  while ( v9 == a3 );
  while ( v5 != a2 )
  {
    v14 = &a2[a1];
    v15 = (char)*(v14 - 1);
    if ( v15 >= 0 )
    {
      a2 = &v14[-a1 - 1];
      if ( v15 != a3 )
        return &v7[a1];
    }
    else
    {
      v16 = *(v14 - 2);
      if ( v16 >= -64 )
      {
        v19 = v14 - 2;
        v21 = v16 & 0x1F;
      }
      else
      {
        v17 = *(v14 - 3);
        if ( v17 >= -64 )
        {
          v19 = v14 - 3;
          v20 = v17 & 0xF;
        }
        else
        {
          v18 = *(v14 - 4);
          v19 = v14 - 4;
          v20 = ((v18 & 7) << 6) | v17 & 0x3F;
        }
        v21 = (v20 << 6) | v16 & 0x3F;
      }
      a2 = &v19[-a1];
      if ( ((v21 << 6) | v15 & 0x3F) != a3 )
        return &v7[a1];
    }
  }
  return &v7[a1];
}