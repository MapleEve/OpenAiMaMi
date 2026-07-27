// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1408cd3d0
// name: sub_1408CD3D0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1408CD3D0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  char *v4; // r15
  char *v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int v11; // edi
  int v12; // edi
  int v13; // edx
  int v14; // eax
  char v15; // dl
  int v16; // edi
  unsigned __int64 v17; // r8
  char v18; // al
  unsigned int v19; // r9d
  __int64 v20; // rdx
  char v21; // r9
  unsigned int v22; // r8d
  unsigned __int64 v24; // r8
  __int64 v25; // [rsp+28h] [rbp-18h] BYREF
  __int64 v26; // [rsp+30h] [rbp-10h]
  __int64 v27; // [rsp+38h] [rbp-8h]
  __int64 v28; // [rsp+40h] [rbp+0h]

  v28 = -2;
  v25 = 0;
  v26 = 1;
  v27 = 0;
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    v4 = *(char **)(a2 + 8);
    v5 = *(char **)a2;
    v6 = (unsigned __int64)&v4[-*(_QWORD *)a2];
    if ( v6 )
    {
      v24 = (v6 >> 2) - (((v6 & 3) == 0) - 1LL);
      if ( v3 < v24 )
        v24 = *(_QWORD *)(a2 + 16);
      sub_141688D30((unsigned int)&v25, 0, v24, 1, 1);
    }
    while ( 1 )
    {
      if ( v5 == v4 )
        goto LABEL_26;
      v8 = *v5;
      if ( *v5 >= 0 )
      {
        ++v5;
        v9 = v25;
        v10 = v27;
        LOBYTE(v11) = v8;
        goto LABEL_14;
      }
      v12 = v8 & 0x1F;
      v13 = v5[1] & 0x3F;
      if ( (unsigned __int8)v8 <= 0xDFu )
        break;
      v14 = (v13 << 6) | v5[2] & 0x3F;
      if ( (unsigned __int8)*v5 >= 0xF0u )
      {
        v15 = v5[3];
        v5 += 4;
        v16 = (v12 & 7) << 18;
        v13 = (v14 << 6) | v15 & 0x3F;
        goto LABEL_13;
      }
      v5 += 3;
      v11 = v14 | (v12 << 12);
      v9 = v25;
      v10 = v27;
      if ( v11 >= 0x80 )
      {
LABEL_18:
        v17 = 4LL - (v11 < 0x10000);
        if ( v11 < 0x800 )
          v17 = 2;
        if ( v17 > v9 - v10 )
          sub_141688D30((unsigned int)&v25, v10, v17, 1, 1);
        v18 = v11 & 0x3F | 0x80;
        v19 = v11 >> 6;
        v20 = v26;
        if ( v11 < 0x800 )
        {
          *(_BYTE *)(v26 + v10) = v19 | 0xC0;
          *(_BYTE *)(v20 + v10 + 1) = v18;
          v7 = 2;
        }
        else
        {
          v21 = v19 & 0x3F | 0x80;
          v22 = v11 >> 12;
          if ( v11 > 0xFFFF )
          {
            *(_BYTE *)(v26 + v10) = (v11 >> 18) | 0xF0;
            *(_BYTE *)(v20 + v10 + 1) = v22 & 0x3F | 0x80;
            *(_BYTE *)(v20 + v10 + 2) = v21;
            *(_BYTE *)(v20 + v10 + 3) = v18;
            v7 = 4;
          }
          else
          {
            *(_BYTE *)(v26 + v10) = v22 | 0xE0;
            *(_BYTE *)(v20 + v10 + 1) = v21;
            *(_BYTE *)(v20 + v10 + 2) = v18;
            v7 = 3;
          }
        }
        goto LABEL_5;
      }
LABEL_14:
      if ( v9 == v10 )
        sub_141688D30((unsigned int)&v25, v9, 1, 1, 1);
      *(_BYTE *)(v26 + v10) = v11;
      v7 = 1;
LABEL_5:
      --v3;
      v27 = v7 + v10;
      if ( !v3 )
        goto LABEL_26;
    }
    v5 += 2;
    v16 = v12 << 6;
LABEL_13:
    v11 = v13 | v16;
    v9 = v25;
    v10 = v27;
    if ( v11 >= 0x80 )
      goto LABEL_18;
    goto LABEL_14;
  }
LABEL_26:
  a1[2] = v27;
  *a1 = v25;
  a1[1] = v26;
  return a1;
}