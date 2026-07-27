// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x140415b00
// name: sub_140415B00
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_140415B00(__int64 *a1, _BYTE *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  _BYTE *v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // r15
  _BYTE *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int8 *v14; // rdx
  char *v15; // r8
  int v16; // r9d
  int v17; // r10d
  int v18; // edi
  int v19; // r9d
  unsigned __int8 v20; // r11
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // [rsp+38h] [rbp-80h]
  _QWORD v26[5]; // [rsp+40h] [rbp-78h] BYREF
  char v27; // [rsp+68h] [rbp-50h]
  __int16 v28; // [rsp+70h] [rbp-48h]
  int v29; // [rsp+78h] [rbp-40h] BYREF
  __int64 v30; // [rsp+80h] [rbp-38h]

  if ( !a3 || *a2 == 35 )
    goto LABEL_3;
  if ( a3 > 0xF )
  {
    v5 = a1;
    LOBYTE(a1) = 61;
    v6 = a2;
    v7 = a3;
    v8 = sub_1414A3EA0(a1, a2, a3);
    a3 = v7;
    a2 = v6;
    a1 = v5;
    if ( v8 != 1 )
      goto LABEL_3;
  }
  else
  {
    v4 = 0;
    while ( a2[v4] != 61 )
    {
      if ( a3 == ++v4 )
        goto LABEL_3;
    }
  }
  v9 = a1;
  v25 = a3;
  v10 = a2;
  v26[0] = a2;
  v26[1] = a3;
  v26[2] = 0;
  v26[3] = a3;
  v26[4] = 0x3D0000003DLL;
  v27 = 1;
  v28 = 1;
  sub_140421EE0(&v29, v26);
  if ( v29 != 1 )
  {
    if ( HIBYTE(v28) || ((unsigned __int8)v28 | (v25 != 0)) != 1 )
    {
      a1 = v9;
      *v9 = -1;
      return a1;
    }
    v11 = sub_14033BC10(v26[0], v25);
    a1 = v9;
    if ( !v12 )
      goto LABEL_3;
    goto LABEL_13;
  }
  v11 = sub_14033BC10(v10, v30);
  a1 = v9;
  if ( !v12 )
  {
LABEL_3:
    *a1 = -1;
    return a1;
  }
LABEL_13:
  v13 = v12;
  v14 = (unsigned __int8 *)(v12 + v11);
  v15 = (char *)v11;
  while ( v15 != (char *)v14 )
  {
    v16 = (unsigned __int8)*v15;
    if ( *v15 < 0 )
    {
      v17 = v16 & 0x1F;
      v18 = v15[1] & 0x3F;
      if ( (unsigned __int8)v16 <= 0xDFu )
      {
        v15 += 2;
        v16 = v18 | (v17 << 6);
        if ( v16 != 45 )
          goto LABEL_25;
      }
      else
      {
        v19 = (v18 << 6) | v15[2] & 0x3F;
        if ( (unsigned __int8)*v15 < 0xF0u )
        {
          v15 += 3;
          v16 = (v17 << 12) | v19;
          if ( v16 != 45 )
          {
LABEL_25:
            if ( v16 != 95 && (unsigned int)(v16 - 58) <= 0xFFFFFFF5 && (v16 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
              goto LABEL_3;
          }
        }
        else
        {
          v20 = v15[3];
          v15 += 4;
          v16 = ((v17 & 7) << 18) | (v19 << 6) | v20 & 0x3F;
          if ( v16 != 45 )
            goto LABEL_25;
        }
      }
    }
    else
    {
      ++v15;
      if ( v16 != 45 )
        goto LABEL_25;
    }
  }
  if ( v13 < 0 )
  {
    v21 = 0;
    goto LABEL_36;
  }
  v22 = v11;
  nullsub_1(a1);
  v21 = 1;
  v23 = sub_140001650(v13, 1);
  if ( !v23 )
LABEL_36:
    sub_1416C2D4B(v21, v13);
  v24 = v23;
  sub_141684120(v23, v22, v13);
  a1 = v9;
  *v9 = v13;
  v9[1] = v24;
  v9[2] = v13;
  return a1;
}