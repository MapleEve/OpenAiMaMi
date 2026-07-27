// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x140407090
// name: sub_140407090
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140407090(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int8 *v10; // rdi
  __int64 v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  int v16; // r12d
  unsigned __int8 v17; // cl
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  char v21; // al
  unsigned int v22; // ecx
  char v23; // cl
  unsigned int v24; // edx
  __int64 result; // rax
  _QWORD v26[2]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-48h]
  _QWORD v28[2]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v30; // [rsp+58h] [rbp-28h]
  __int64 v31; // [rsp+60h] [rbp-20h]
  __int128 v32; // [rsp+68h] [rbp-18h] BYREF
  __int64 v33; // [rsp+78h] [rbp-8h]
  __int64 v34; // [rsp+80h] [rbp+0h]

  v34 = -2;
  v3 = a3 + 2;
  if ( a3 + 2 < 0 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  if ( a3 == -2 )
  {
    v9 = 1;
  }
  else
  {
    nullsub_1(a1);
    v4 = 1;
    v8 = sub_140001650(v3, 1);
    if ( !v8 )
LABEL_3:
      sub_1416C2D4B(v4, v3);
    v9 = v8;
  }
  *(_QWORD *)&v32 = v3;
  *((_QWORD *)&v32 + 1) = v9;
  v33 = 0;
  v10 = (unsigned __int8 *)&a2[a3];
  v11 = 0;
  while ( a2 != (char *)v10 )
  {
    v12 = (unsigned __int8)*a2;
    if ( *a2 < 0 )
    {
      v14 = v12 & 0x1F;
      v15 = a2[1] & 0x3F;
      if ( (unsigned __int8)v12 <= 0xDFu )
      {
        a2 += 2;
        v12 = v15 | (v14 << 6);
        v13 = v12 - 8;
LABEL_22:
        switch ( v13 )
        {
          case 0LL:
            if ( (unsigned __int64)(v32 - v11) <= 1 )
            {
              sub_141688D30((unsigned int)&v32, v11, 2, 1, 1);
              v11 = v33;
            }
            v9 = *((_QWORD *)&v32 + 1);
            *(_WORD *)(*((_QWORD *)&v32 + 1) + v11) = 25180;
            goto LABEL_12;
          case 1LL:
            if ( (unsigned __int64)(v32 - v11) <= 1 )
            {
              sub_141688D30((unsigned int)&v32, v11, 2, 1, 1);
              v11 = v33;
            }
            v9 = *((_QWORD *)&v32 + 1);
            *(_WORD *)(*((_QWORD *)&v32 + 1) + v11) = 29788;
            goto LABEL_12;
          case 2LL:
            if ( (unsigned __int64)(v32 - v11) <= 1 )
            {
              sub_141688D30((unsigned int)&v32, v11, 2, 1, 1);
              v11 = v33;
            }
            v9 = *((_QWORD *)&v32 + 1);
            *(_WORD *)(*((_QWORD *)&v32 + 1) + v11) = 28252;
            goto LABEL_12;
          case 3LL:
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
          case 18LL:
          case 19LL:
          case 20LL:
          case 21LL:
          case 22LL:
          case 23LL:
          case 24LL:
          case 25LL:
            goto LABEL_43;
          case 4LL:
            if ( (unsigned __int64)(v32 - v11) <= 1 )
            {
              sub_141688D30((unsigned int)&v32, v11, 2, 1, 1);
              v9 = *((_QWORD *)&v32 + 1);
              v11 = v33;
            }
            *(_WORD *)(v9 + v11) = 26204;
            goto LABEL_12;
          case 5LL:
            if ( (unsigned __int64)(v32 - v11) <= 1 )
            {
              sub_141688D30((unsigned int)&v32, v11, 2, 1, 1);
              v11 = v33;
            }
            v9 = *((_QWORD *)&v32 + 1);
            *(_WORD *)(*((_QWORD *)&v32 + 1) + v11) = 29276;
            goto LABEL_12;
          case 26LL:
            if ( (unsigned __int64)(v32 - v11) <= 1 )
            {
              sub_141688D30((unsigned int)&v32, v11, 2, 1, 1);
              v11 = v33;
            }
            v9 = *((_QWORD *)&v32 + 1);
            *(_WORD *)(*((_QWORD *)&v32 + 1) + v11) = 8796;
            goto LABEL_12;
          default:
            goto LABEL_39;
        }
      }
      v16 = (v15 << 6) | a2[2] & 0x3F;
      if ( (unsigned __int8)*a2 < 0xF0u )
      {
        a2 += 3;
        v12 = (v14 << 12) | v16;
        v13 = v12 - 8;
        if ( (unsigned int)v13 <= 0x1A )
          goto LABEL_22;
      }
      else
      {
        v17 = a2[3];
        a2 += 4;
        v12 = ((v14 & 7) << 18) | (v16 << 6) | v17 & 0x3F;
        v13 = v12 - 8;
        if ( (unsigned int)v13 <= 0x1A )
          goto LABEL_22;
      }
    }
    else
    {
      ++a2;
      v13 = v12 - 8;
      if ( (unsigned int)v13 <= 0x1A )
        goto LABEL_22;
    }
LABEL_39:
    if ( v12 == 92 )
    {
      if ( (unsigned __int64)(v32 - v11) <= 1 )
      {
        sub_141688D30((unsigned int)&v32, v11, 2, 1, 1);
        v11 = v33;
      }
      v9 = *((_QWORD *)&v32 + 1);
      *(_WORD *)(*((_QWORD *)&v32 + 1) + v11) = 23644;
LABEL_12:
      v11 += 2;
      v33 = v11;
    }
    else
    {
LABEL_43:
      if ( v12 >= 0x20 )
      {
        if ( v12 >= 0x80 )
        {
          v20 = 4LL - (v12 < 0x10000);
          if ( v12 < 0x800 )
            v20 = 2;
          if ( v20 > (__int64)v32 - v11 )
            sub_141688D30((unsigned int)&v32, v11, v20, 1, 1);
          v21 = v12 & 0x3F | 0x80;
          v22 = v12 >> 6;
          v9 = *((_QWORD *)&v32 + 1);
          if ( v12 >= 0x800 )
          {
            v23 = v22 & 0x3F | 0x80;
            v24 = v12 >> 12;
            if ( v12 > 0xFFFF )
            {
              *(_BYTE *)(*((_QWORD *)&v32 + 1) + v11) = (v12 >> 18) | 0xF0;
              *(_BYTE *)(v9 + v11 + 1) = v24 & 0x3F | 0x80;
              *(_BYTE *)(v9 + v11 + 2) = v23;
              *(_BYTE *)(v9 + v11 + 3) = v21;
              v19 = 4;
            }
            else
            {
              *(_BYTE *)(*((_QWORD *)&v32 + 1) + v11) = v24 | 0xE0;
              *(_BYTE *)(v9 + v11 + 1) = v23;
              *(_BYTE *)(v9 + v11 + 2) = v21;
              v19 = 3;
            }
          }
          else
          {
            *(_BYTE *)(*((_QWORD *)&v32 + 1) + v11) = v22 | 0xC0;
            *(_BYTE *)(v9 + v11 + 1) = v21;
            v19 = 2;
          }
        }
        else
        {
          if ( (_QWORD)v32 == v11 )
            sub_141688D30((unsigned int)&v32, v11, 1, 1, 1);
          v9 = *((_QWORD *)&v32 + 1);
          *(_BYTE *)(*((_QWORD *)&v32 + 1) + v11) = v12;
          v19 = 1;
        }
        v11 += v19;
        v33 = v11;
      }
      else
      {
        v29 = v12;
        v28[0] = &v29;
        v28[1] = sub_1414AD500;
        sub_14149C0F0(v26, &unk_141752F39, v28);
        v31 = v26[0];
        v30 = v26[1];
        v18 = v27;
        if ( v27 > (__int64)v32 - v11 )
        {
          sub_141688D30((unsigned int)&v32, v11, v27, 1, 1);
          v11 = v33;
LABEL_46:
          v9 = *((_QWORD *)&v32 + 1);
          sub_141684120(*((_QWORD *)&v32 + 1) + v11, v30, v18);
          goto LABEL_47;
        }
        if ( v27 )
          goto LABEL_46;
LABEL_47:
        v11 += v18;
        v33 = v11;
        if ( v31 )
          sub_140001660(v30, v31, 1);
      }
    }
  }
  result = v33;
  *(_QWORD *)(a1 + 16) = v33;
  *(_OWORD *)a1 = v32;
  return result;
}