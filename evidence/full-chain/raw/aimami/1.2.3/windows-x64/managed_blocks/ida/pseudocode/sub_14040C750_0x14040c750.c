// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x14040c750
// name: sub_14040C750
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14040C750(__int64 *a1, _BYTE *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // r15
  _BYTE *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int8 *v13; // rdx
  char *v14; // r8
  int v15; // r9d
  int v16; // r10d
  int v17; // edi
  int v18; // r9d
  unsigned __int8 v19; // r11
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // [rsp+38h] [rbp-80h]
  _QWORD v25[5]; // [rsp+40h] [rbp-78h] BYREF
  char v26; // [rsp+68h] [rbp-50h]
  __int16 v27; // [rsp+70h] [rbp-48h]
  int v28; // [rsp+78h] [rbp-40h] BYREF
  __int64 v29; // [rsp+80h] [rbp-38h]

  if ( !a3 || *a2 == 35 )
    goto LABEL_3;
  if ( a3 > 0xF )
  {
    v4 = a1;
    LOBYTE(a1) = 61;
    v5 = a2;
    v6 = a3;
    v7 = sub_1414A3EA0(a1, a2, a3);
    a3 = v6;
    a2 = v5;
    a1 = v4;
    if ( v7 != 1 )
      goto LABEL_3;
  }
  else
  {
    v3 = 0;
    while ( a2[v3] != 61 )
    {
      if ( a3 == ++v3 )
        goto LABEL_3;
    }
  }
  v8 = a1;
  v24 = a3;
  v9 = a2;
  v25[0] = a2;
  v25[1] = a3;
  v25[2] = 0;
  v25[3] = a3;
  v25[4] = 0x3D0000003DLL;
  v26 = 1;
  v27 = 1;
  sub_140421EE0(&v28, v25);
  if ( v28 != 1 )
  {
    if ( HIBYTE(v27) || ((unsigned __int8)v27 | (v24 != 0)) != 1 )
    {
      *v8 = -1;
      return;
    }
    v10 = sub_14033BC10(v25[0], v24);
    a1 = v8;
    if ( v11 )
      goto LABEL_12;
LABEL_3:
    *a1 = -1;
    return;
  }
  v10 = sub_14033BC10(v9, v29);
  a1 = v8;
  if ( !v11 )
    goto LABEL_3;
LABEL_12:
  v12 = v11;
  v13 = (unsigned __int8 *)(v11 + v10);
  v14 = (char *)v10;
  while ( v14 != (char *)v13 )
  {
    v15 = (unsigned __int8)*v14;
    if ( *v14 < 0 )
    {
      v16 = v15 & 0x1F;
      v17 = v14[1] & 0x3F;
      if ( (unsigned __int8)v15 <= 0xDFu )
      {
        v14 += 2;
        v15 = v17 | (v16 << 6);
        if ( v15 != 45 )
          goto LABEL_24;
      }
      else
      {
        v18 = (v17 << 6) | v14[2] & 0x3F;
        if ( (unsigned __int8)*v14 < 0xF0u )
        {
          v14 += 3;
          v15 = (v16 << 12) | v18;
          if ( v15 != 45 )
          {
LABEL_24:
            if ( v15 != 95 && (unsigned int)(v15 - 58) <= 0xFFFFFFF5 && (v15 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
              goto LABEL_3;
          }
        }
        else
        {
          v19 = v14[3];
          v14 += 4;
          v15 = ((v16 & 7) << 18) | (v18 << 6) | v19 & 0x3F;
          if ( v15 != 45 )
            goto LABEL_24;
        }
      }
    }
    else
    {
      ++v14;
      if ( v15 != 45 )
        goto LABEL_24;
    }
  }
  if ( v12 < 0 )
  {
    v20 = 0;
    goto LABEL_35;
  }
  v21 = v10;
  nullsub_1(a1);
  v20 = 1;
  v22 = sub_140001650(v12, 1);
  if ( !v22 )
LABEL_35:
    sub_1416C2D4B(v20, v12);
  v23 = v22;
  sub_141684120(v22, v21, v12);
  *v8 = v12;
  v8[1] = v23;
  v8[2] = v12;
}