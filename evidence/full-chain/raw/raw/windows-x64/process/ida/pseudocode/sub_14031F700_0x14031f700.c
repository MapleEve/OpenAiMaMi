// module: codexmate_lib/platform/process
// addr: 0x14031f700
// name: sub_14031F700
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_14031F700(_QWORD *a1, unsigned __int8 **a2)
{
  __int64 v2; // rbx
  unsigned __int8 *v4; // r15
  unsigned int v5; // esi
  unsigned __int8 *v6; // rax
  __int64 v7; // r8
  unsigned __int8 *v8; // r10
  char v9; // r8
  int v10; // edx
  int v11; // r9d
  int v12; // esi
  __int16 v13; // ax
  __int64 v14; // r13
  __int64 v15; // r12
  unsigned __int128 v16; // rax
  _BOOL8 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  _WORD *v23; // rax
  unsigned __int8 *v24; // r14
  __int16 v25; // bx
  __int16 v26; // r13
  __int64 i; // rdi
  __int16 v28; // cx
  unsigned int v29; // esi
  BOOL v30; // r9d
  unsigned __int64 v31; // r8
  BOOL v32; // edx
  int v33; // r8d
  int v34; // ecx
  int v35; // r8d
  int v36; // esi
  unsigned __int8 v37; // dl
  _QWORD *v39; // [rsp+30h] [rbp-20h]
  __int128 v40; // [rsp+38h] [rbp-18h] BYREF
  __int64 v41; // [rsp+48h] [rbp-8h]
  __int64 v42; // [rsp+50h] [rbp+0h]

  v42 = -2;
  v4 = *a2;
  if ( *a2 )
  {
    LOWORD(v5) = *((_WORD *)a2 + 8);
    if ( (_WORD)v5 )
    {
      *((_WORD *)a2 + 8) = 0;
      v6 = a2[1];
      v7 = 0;
      goto LABEL_18;
    }
    v6 = a2[1];
    if ( v4 != v6 )
    {
      v8 = v4 + 1;
      *a2 = v4 + 1;
      v9 = *v4;
      LOWORD(v5) = *v4;
      if ( (*v4 & 0x80u) != 0 )
      {
        v10 = v5 & 0x1F;
        v8 = v4 + 2;
        *a2 = v4 + 2;
        v11 = v4[1] & 0x3F;
        if ( (unsigned __int8)v5 <= 0xDFu )
        {
          LOWORD(v5) = v11 | ((_WORD)v10 << 6);
        }
        else
        {
          v8 = v4 + 3;
          *a2 = v4 + 3;
          v12 = (v11 << 6) | v4[2] & 0x3F;
          if ( (unsigned __int8)v9 < 0xF0u )
          {
            v5 = (v10 << 12) | v12;
          }
          else
          {
            v8 = v4 + 4;
            *a2 = v4 + 4;
            v5 = ((v10 & 7) << 18) | (v12 << 6) | v4[3] & 0x3F;
          }
          if ( v5 > 0xFFFF )
          {
            *((_WORD *)a2 + 8) = v5 & 0x3FF | 0xDC00;
            v7 = 1;
            v4 = v8;
            LOWORD(v5) = ((v5 + 16711680) >> 10) | 0xD800;
            goto LABEL_18;
          }
        }
      }
      v7 = 0;
      v4 = v8;
LABEL_18:
      v15 = *((unsigned __int16 *)a2 + 12);
      v16 = 0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(v6 - v4);
      v17 = (unsigned __int64)v16 > 0x5555555555555555LL;
      v18 = v7 + (*((_QWORD *)&v16 + 1) >> 1);
      v19 = v18 + v15;
      if ( v15 == 2 )
        v19 = v18;
      v20 = v17 + v19;
      v21 = 3;
      if ( v20 >= 4 )
        v21 = v20;
      if ( v20 > 0x3FFFFFFFFFFFFFFELL )
      {
        v22 = 0;
        goto LABEL_24;
      }
      v39 = a1;
      v14 = v21 + 1;
      goto LABEL_26;
    }
    *a2 = nullptr;
  }
  v13 = *((_WORD *)a2 + 12);
  if ( v13 != 2 )
  {
    LOWORD(v5) = *((_WORD *)a2 + 13);
    *((_WORD *)a2 + 12) = 0;
    if ( (v13 & 1) != 0 )
    {
      v39 = a1;
      v14 = 4;
      v4 = nullptr;
      LOWORD(v15) = 0;
LABEL_26:
      v2 = 2 * v14;
      nullsub_1(a1);
      v22 = 2;
      v23 = (_WORD *)sub_140001650(2 * v14, 2);
      if ( !v23 )
LABEL_24:
        sub_1416C2D4B(v22, v2);
      *v23 = v5;
      *(_QWORD *)&v40 = v14;
      *((_QWORD *)&v40 + 1) = v23;
      v41 = 1;
      v24 = a2[1];
      v25 = *((_WORD *)a2 + 8);
      v26 = *((_WORD *)a2 + 13);
      for ( i = 1; ; v41 = i )
      {
        if ( v4 )
        {
          if ( v25 )
          {
            v28 = 0;
            LOWORD(v29) = v25;
LABEL_33:
            if ( i != (_QWORD)v40 )
            {
              v25 = v28;
              goto LABEL_29;
            }
            v30 = v28 != 0;
            v31 = (v24 - v4) / 3uLL;
            v32 = 0xAAAAAAAAAAAAAAABuLL * (v24 - v4) > 0x5555555555555555LL;
            if ( (_WORD)v15 == 2 )
            {
              v33 = v32 + v30 + v31;
              LOWORD(v15) = 2;
            }
            else
            {
              v33 = v32 + (unsigned __int16)v15 + v30 + v31;
            }
            v25 = v28;
LABEL_44:
            sub_141688D30((unsigned int)&v40, i, v33 + 1, 2, 2);
            v23 = *((_WORD **)&v40 + 1);
            goto LABEL_29;
          }
          if ( v4 != v24 )
            break;
        }
        if ( (v15 & 0xFFFD) == 0 )
        {
          a1 = v39;
          v39[2] = v41;
          *(_OWORD *)v39 = v40;
          return a1;
        }
        LOWORD(v15) = 0;
        v4 = nullptr;
        LOWORD(v29) = v26;
        v33 = 0;
        if ( i == (_QWORD)v40 )
          goto LABEL_44;
LABEL_29:
        v23[i++] = v29;
      }
      LOWORD(v29) = *v4;
      if ( (*v4 & 0x80u) == 0 )
      {
        ++v4;
        v28 = 0;
        goto LABEL_33;
      }
      v34 = v29 & 0x1F;
      v35 = v4[1] & 0x3F;
      if ( (unsigned __int8)v29 <= 0xDFu )
      {
        v4 += 2;
        LOWORD(v29) = v35 | ((_WORD)v34 << 6);
        v28 = 0;
        goto LABEL_33;
      }
      v36 = (v35 << 6) | v4[2] & 0x3F;
      if ( *v4 < 0xF0u )
      {
        v4 += 3;
        v29 = (v34 << 12) | v36;
        if ( v29 > 0xFFFF )
          goto LABEL_48;
      }
      else
      {
        v37 = v4[3];
        v4 += 4;
        v29 = ((v34 & 7) << 18) | (v36 << 6) | v37 & 0x3F;
        if ( v29 > 0xFFFF )
        {
LABEL_48:
          v28 = v29 & 0x3FF | 0xDC00;
          LOWORD(v29) = ((v29 + 16711680) >> 10) | 0xD800;
          goto LABEL_33;
        }
      }
      v28 = 0;
      goto LABEL_33;
    }
  }
  *a1 = 0;
  a1[1] = 2;
  a1[2] = 0;
  return a1;
}