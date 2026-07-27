// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x14040d940
// name: sub_14040D940
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14040D940(__int64 a1, char *a2, __int64 a3)
{
  char *v3; // rbx
  unsigned __int8 *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r12
  char v8; // al
  char v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // esi
  int v12; // ecx
  int v13; // r9d
  int v14; // esi
  unsigned __int8 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  char v18; // al
  unsigned int v19; // ecx
  char v20; // cl
  unsigned int v21; // edx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 result; // rax
  __int128 v48; // [rsp+30h] [rbp-40h] BYREF
  __int64 v49; // [rsp+40h] [rbp-30h]
  __int64 v50; // [rsp+48h] [rbp-28h] BYREF
  __int64 v51; // [rsp+50h] [rbp-20h]
  __int64 v52; // [rsp+58h] [rbp-18h]
  __int64 v53; // [rsp+60h] [rbp-10h]
  __int64 v54; // [rsp+68h] [rbp-8h]
  __int64 v55; // [rsp+70h] [rbp+0h]

  v55 = -2;
  v3 = a2;
  *(_QWORD *)&v48 = 0;
  *((_QWORD *)&v48 + 1) = 8;
  v49 = 0;
  v50 = 0;
  v51 = 1;
  v52 = 0;
  v4 = (unsigned __int8 *)&a2[a3];
  v5 = 1;
LABEL_2:
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( v3 != (char *)v4 )
  {
    v11 = (unsigned __int8)*v3;
    if ( *v3 < 0 )
    {
      v12 = v11 & 0x1F;
      v13 = v3[1] & 0x3F;
      if ( (unsigned __int8)v11 <= 0xDFu )
      {
        v3 += 2;
        v11 = v13 | (v12 << 6);
        if ( (v8 & 1) == 0 )
          goto LABEL_14;
      }
      else
      {
        v14 = (v13 << 6) | v3[2] & 0x3F;
        if ( (unsigned __int8)*v3 >= 0xF0u )
        {
          v15 = v3[3];
          v3 += 4;
          v11 = ((v12 & 7) << 18) | (v14 << 6) | v15 & 0x3F;
          if ( (v8 & 1) != 0 )
            goto LABEL_31;
          goto LABEL_14;
        }
        v3 += 3;
        v11 = (v12 << 12) | v14;
        if ( (v8 & 1) == 0 )
          goto LABEL_14;
      }
LABEL_31:
      if ( v11 < 0x80 )
      {
        if ( v50 == v6 )
          goto LABEL_28;
        goto LABEL_29;
      }
      v22 = 4LL - (v11 < 0x10000);
      if ( v11 < 0x800 )
        v22 = 2;
      if ( v22 > v50 - v6 )
        sub_141688D30((unsigned int)&v50, v6, v22, 1, 1);
      v18 = v11 & 0x3F | 0x80;
      v19 = v11 >> 6;
      v5 = v51;
      if ( v11 < 0x800 )
        goto LABEL_3;
LABEL_23:
      v20 = v19 & 0x3F | 0x80;
      v21 = v11 >> 12;
      if ( v11 > 0xFFFF )
      {
        *(_BYTE *)(v5 + v7) = (v11 >> 18) | 0xF0;
        *(_BYTE *)(v5 + v7 + 1) = v21 & 0x3F | 0x80;
        *(_BYTE *)(v5 + v7 + 2) = v20;
        *(_BYTE *)(v5 + v7 + 3) = v18;
        v10 = 4;
      }
      else
      {
        *(_BYTE *)(v5 + v7) = v21 | 0xE0;
        *(_BYTE *)(v5 + v7 + 1) = v20;
        *(_BYTE *)(v5 + v7 + 2) = v18;
        v10 = 3;
      }
LABEL_4:
      v6 = v7 + v10;
      v52 = v6;
      v8 = 0;
      v7 = v6;
    }
    else
    {
      ++v3;
      if ( (v8 & 1) != 0 )
        goto LABEL_31;
LABEL_14:
      v8 = v9 & (v11 == 92);
      if ( v8 )
      {
        v9 = 1;
      }
      else
      {
        if ( v11 == 46 )
        {
          if ( (v9 & 1) == 0 )
          {
            v23 = sub_14033BC10(v5, v7);
            if ( v24 < 0 )
            {
              v28 = 0;
            }
            else
            {
              v26 = v24;
              v53 = v24;
              if ( !v24 )
              {
                v54 = 1;
                v30 = v49;
                if ( v49 != (_QWORD)v48 )
                  goto LABEL_50;
                goto LABEL_49;
              }
              v27 = v23;
              nullsub_1(v25);
              v28 = 1;
              v29 = sub_140001650(v26, 1);
              if ( v29 )
              {
                v54 = v29;
                sub_141684120(v29, v27, v26);
                v30 = v49;
                if ( v49 != (_QWORD)v48 )
                {
LABEL_50:
                  v31 = *((_QWORD *)&v48 + 1);
                  v32 = 3 * v30;
                  v33 = v53;
                  *(_QWORD *)(*((_QWORD *)&v48 + 1) + 8 * v32) = v53;
                  *(_QWORD *)(v31 + 8 * v32 + 8) = v54;
                  *(_QWORD *)(v31 + 8 * v32 + 16) = v33;
                  v49 = v30 + 1;
                  v52 = 0;
                  goto LABEL_2;
                }
LABEL_49:
                sub_141689AB0(&v48);
                goto LABEL_50;
              }
              v54 = v26;
            }
            sub_1416C2D4B(v28, v54);
          }
          v16 = v50;
LABEL_27:
          if ( v16 == v6 )
LABEL_28:
            sub_141688D30((unsigned int)&v50, v6, 1, 1, 1);
LABEL_29:
          v5 = v51;
          *(_BYTE *)(v51 + v7) = v11;
          v10 = 1;
          goto LABEL_4;
        }
        if ( v11 != 34 )
        {
          v16 = v50;
          if ( v11 < 0x80 )
            goto LABEL_27;
          v17 = 4LL - (v11 < 0x10000);
          if ( v11 < 0x800 )
            v17 = 2;
          if ( v17 > v50 - v6 )
          {
            sub_141688D30((unsigned int)&v50, v6, v17, 1, 1);
            v5 = v51;
          }
          v18 = v11 & 0x3F | 0x80;
          v19 = v11 >> 6;
          if ( v11 < 0x800 )
          {
LABEL_3:
            *(_BYTE *)(v5 + v7) = v19 | 0xC0;
            *(_BYTE *)(v5 + v7 + 1) = v18;
            v10 = 2;
            goto LABEL_4;
          }
          goto LABEL_23;
        }
        v9 ^= 1u;
      }
    }
  }
  v34 = v51;
  v35 = sub_14033BC10(v51, v7);
  v38 = v36;
  if ( v36 < 0 )
  {
    v39 = 0;
    goto LABEL_53;
  }
  v54 = v36;
  if ( !v36 )
  {
    v53 = 1;
    v42 = v49;
    if ( v49 != (_QWORD)v48 )
      goto LABEL_62;
    goto LABEL_61;
  }
  v40 = v35;
  nullsub_1(v37);
  v39 = 1;
  v41 = sub_140001650(v38, 1);
  if ( !v41 )
LABEL_53:
    sub_1416C2D4B(v39, v38);
  v53 = v41;
  sub_141684120(v41, v40, v38);
  v42 = v49;
  if ( v49 == (_QWORD)v48 )
LABEL_61:
    sub_141689AB0(&v48);
LABEL_62:
  v43 = *((_QWORD *)&v48 + 1);
  v44 = 3 * v42;
  v45 = v54;
  *(_QWORD *)(*((_QWORD *)&v48 + 1) + 8 * v44) = v54;
  *(_QWORD *)(v43 + 8 * v44 + 8) = v53;
  *(_QWORD *)(v43 + 8 * v44 + 16) = v45;
  v49 = v42 + 1;
  result = a1;
  *(_QWORD *)(a1 + 16) = v42 + 1;
  *(_OWORD *)a1 = v48;
  if ( v50 )
    return sub_140001660(v34, v50, 1);
  return result;
}