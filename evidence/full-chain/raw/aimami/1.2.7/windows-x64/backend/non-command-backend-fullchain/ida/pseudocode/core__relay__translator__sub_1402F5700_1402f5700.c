// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402f5700 | name sub_1402F5700
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
unsigned __int64 *__fastcall sub_1402F5700(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r14
  char **v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  _BYTE *v12; // rcx
  unsigned __int64 v13; // r13
  __int64 v14; // r12
  const __m128i *v16; // r14
  __m128i *v17; // rax
  unsigned __int64 v18; // r8
  _BYTE *v19; // r15
  _BYTE *v20; // r14
  _BYTE *v21; // rax
  _BYTE *v22; // rdi
  _BYTE *v23; // rdx
  char v24; // dl
  int v25; // r8d
  int v26; // r9d
  int v27; // r10d
  int v28; // r8d
  const __m128i *v29; // r15
  signed __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // rdi
  __m128i *v33; // rax
  _BYTE v34[104]; // [rsp+30h] [rbp-50h] BYREF
  char v35[8]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+20h]
  unsigned __int64 v37; // [rsp+B0h] [rbp+30h]
  __int64 v38; // [rsp+B8h] [rbp+38h]
  __int64 v39; // [rsp+C0h] [rbp+40h]

  v39 = -2;
  sub_140E91B30(a2, a3);
  v7 = a3 - v6;
  if ( a3 == v6 )
    goto LABEL_4;
  if ( v7 >= a3 )
  {
    if ( !v6 )
      goto LABEL_25;
LABEL_11:
    v8 = &off_1419E86B0;
LABEL_12:
    sub_141938F40(a2, a3, v7, a3, (__int64)v8);
  }
  if ( *(char *)(a2 + v7) < -64 )
    goto LABEL_11;
LABEL_4:
  if ( v6 < 7 || *(_DWORD *)(a2 + v7) ^ 0x6968743C | *(_DWORD *)(a2 + v7 + 3) ^ 0x3E6B6E69 )
    goto LABEL_25;
  v7 += 7LL;
  if ( v7 )
  {
    if ( a3 <= v7 )
    {
      if ( a3 != v7 )
        goto LABEL_9;
    }
    else if ( *(char *)(a2 + v7) < -64 )
    {
LABEL_9:
      v8 = &off_1419E86C8;
      goto LABEL_12;
    }
  }
  sub_1416B2790((unsigned int)v34, a2 + v7, a3 - v7, (unsigned int)aThink_0, 8);
  sub_140372350(v35, v34);
  if ( !v35[0] )
  {
LABEL_25:
    *a1 = -1;
    return a1;
  }
  v9 = v7 + v36;
  if ( __CFADD__(v7, v36)
    || v9 > a3
    || a3 != v7 && (v7 && *(char *)(a2 + v7) <= -65 || v9 != a3 && *(char *)(a2 + v9) <= -65) )
  {
    sub_141938F40(a2, a3, v7, v7 + v36, (__int64)&off_1419E86E0);
  }
  v10 = sub_140E91160(a2 + v7, v36);
  v13 = v11;
  if ( v11 < 0 )
  {
    v14 = 0;
    goto LABEL_24;
  }
  if ( v11 )
  {
    v16 = (const __m128i *)v10;
    nullsub_1(v12);
    v14 = 1;
    v17 = (__m128i *)sub_140001650(v13, 1);
    if ( !v17 )
LABEL_24:
      sub_141938D2B(v14, v13);
    v38 = (__int64)v17;
    sub_1418F44E0(v17, v16, v13);
  }
  else
  {
    v38 = 1;
  }
  v18 = v9 + 8;
  if ( v9 != -8 )
  {
    if ( a3 <= v18 )
    {
      if ( a3 != v18 )
      {
LABEL_34:
        v37 = v13;
        sub_141938F40(a2, a3, v18, a3, (__int64)&off_1419E86F8);
      }
    }
    else if ( *(char *)(a2 + v18) <= -65 )
    {
      goto LABEL_34;
    }
  }
  v19 = (_BYTE *)(a2 + v18);
  v20 = (_BYTE *)(a3 - v18);
  if ( a3 == v18 )
  {
    v21 = nullptr;
    goto LABEL_54;
  }
  v22 = (_BYTE *)(a3 + a2);
  v21 = nullptr;
  v23 = v19;
  do
  {
    v12 = v23;
    v24 = *v23;
    v25 = (unsigned __int8)v24;
    if ( v24 < 0 )
    {
      v26 = v24 & 0x1F;
      v27 = v12[1] & 0x3F;
      if ( (unsigned __int8)v24 <= 0xDFu )
      {
        v23 = v12 + 2;
        v25 = v27 | (v26 << 6);
        if ( (v12[1] & 0x3B | (v26 << 6) & 0x1FFFFB) == 9 )
          goto LABEL_39;
      }
      else
      {
        v28 = (v27 << 6) | v12[2] & 0x3F;
        if ( (unsigned __int8)v24 < 0xF0u )
        {
          v23 = v12 + 3;
          v25 = (v26 << 12) | v28;
          if ( (v25 & 0x1FFFFB) == 9 )
            goto LABEL_39;
        }
        else
        {
          v23 = v12 + 4;
          v25 = ((v26 & 7) << 18) | (v28 << 6) | v12[3] & 0x3F;
          if ( (v25 & 0x1FFFFB) == 9 )
            goto LABEL_39;
        }
      }
    }
    else
    {
      v23 = v12 + 1;
      if ( (v25 & 0x1FFFFB) == 9 )
        goto LABEL_39;
    }
    if ( v25 != 10 && v25 != 32 )
      goto LABEL_54;
LABEL_39:
    v21 = &v23[v21 - v12];
  }
  while ( v23 != v22 );
  v21 = v20;
LABEL_54:
  v29 = (const __m128i *)&v19[(_QWORD)v21];
  v30 = v20 - v21;
  if ( v30 < 0 )
  {
    v31 = 0;
    goto LABEL_56;
  }
  v32 = 1;
  if ( v30 )
  {
    nullsub_1(v12);
    v31 = 1;
    v33 = (__m128i *)sub_140001650(v30, 1);
    if ( !v33 )
    {
LABEL_56:
      v37 = v13;
      sub_141938D2B(v31, v30);
    }
    v32 = (__int64)v33;
    sub_1418F44E0(v33, v29, v30);
  }
  *a1 = v13;
  a1[1] = v38;
  a1[2] = v13;
  a1[3] = v30;
  a1[4] = v32;
  a1[5] = v30;
  return a1;
}
