// module: codexmate_lib/core/sessions
// addr: 0x140749160
// name: sub_140749160
// win 1.2.1 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140749160(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *v5; // r14
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  char v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // r12d
  int v14; // r12d
  int v15; // r8d
  int v16; // r9d
  char v17; // dl
  unsigned __int64 v18; // r8
  char v19; // r9
  unsigned int v20; // edx
  char v21; // dl
  unsigned int v22; // r8d
  __int64 result; // rax
  __int128 v24; // [rsp+28h] [rbp-18h] BYREF
  __int64 v25; // [rsp+38h] [rbp-8h]
  __int64 v26; // [rsp+40h] [rbp+0h]

  v26 = -2;
  v5 = a2;
  *(_QWORD *)&v24 = 0;
  *((_QWORD *)&v24 + 1) = 1;
  v25 = 0;
  v7 = &a2[a3];
  v8 = 1;
  v9 = 0;
  while ( v5 != v7 )
  {
    v11 = *v5;
    if ( *v5 < 0 )
    {
      v14 = v11 & 0x1F;
      v15 = v5[1] & 0x3F;
      if ( (unsigned __int8)v11 <= 0xDFu )
      {
        v5 += 2;
        v13 = v15 | (v14 << 6);
        v12 = v24;
        if ( v13 >= 0x80 )
          goto LABEL_16;
      }
      else
      {
        v16 = (v15 << 6) | v5[2] & 0x3F;
        if ( (unsigned __int8)*v5 < 0xF0u )
        {
          v5 += 3;
          v13 = v16 | (v14 << 12);
          v12 = v24;
          if ( v13 >= 0x80 )
          {
LABEL_16:
            v18 = 4LL - (v13 < 0x10000);
            if ( v13 < 0x800 )
              v18 = 2;
            if ( v18 > v12 - v9 )
            {
              sub_141688D30((unsigned int)&v24, v9, v18, 1, 1);
              v8 = *((_QWORD *)&v24 + 1);
            }
            v19 = v13 & 0x3F | 0x80;
            v20 = v13 >> 6;
            if ( v13 < 0x800 )
            {
              *(_BYTE *)(v8 + v9) = v20 | 0xC0;
              *(_BYTE *)(v8 + v9 + 1) = v19;
              v10 = 2;
            }
            else
            {
              v21 = v20 & 0x3F | 0x80;
              v22 = v13 >> 12;
              if ( v13 > 0xFFFF )
              {
                *(_BYTE *)(v8 + v9) = (v13 >> 18) | 0xF0;
                *(_BYTE *)(v8 + v9 + 1) = v22 & 0x3F | 0x80;
                *(_BYTE *)(v8 + v9 + 2) = v21;
                *(_BYTE *)(v8 + v9 + 3) = v19;
                v10 = 4;
              }
              else
              {
                *(_BYTE *)(v8 + v9) = v22 | 0xE0;
                *(_BYTE *)(v8 + v9 + 1) = v21;
                *(_BYTE *)(v8 + v9 + 2) = v19;
                v10 = 3;
              }
            }
            goto LABEL_3;
          }
        }
        else
        {
          v17 = v5[3];
          v5 += 4;
          v13 = (v16 << 6) | v17 & 0x3F | ((v14 & 7) << 18);
          v12 = v24;
          if ( v13 >= 0x80 )
            goto LABEL_16;
        }
      }
    }
    else
    {
      ++v5;
      v12 = v24;
      LOBYTE(v13) = v11;
    }
    if ( v12 == v9 )
      sub_141688D30((unsigned int)&v24, v9, 1, 1, 1);
    v8 = *((_QWORD *)&v24 + 1);
    *(_BYTE *)(*((_QWORD *)&v24 + 1) + v9) = v13;
    v10 = 1;
LABEL_3:
    --a4;
    v9 += v10;
    v25 = v9;
    if ( !a4 )
      break;
  }
  result = v25;
  *(_QWORD *)(a1 + 16) = v25;
  *(_OWORD *)a1 = v24;
  return result;
}