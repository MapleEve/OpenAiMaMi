// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402e2740 | name sub_1402E2740
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402E2740(signed __int64 *a1, const __m128i *a2, signed __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __m128i *v10; // rax
  __int64 v11; // r14
  const __m128i *v12; // r15
  signed __int64 v13; // rdx
  signed __int64 v14; // r14
  unsigned __int64 v15; // rbx
  __int8 *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned __int8 *v19; // rbx
  bool v20; // zf
  __int64 v21; // r12
  __m128i *v22; // rax
  __m128i *v23; // r13
  __int64 v24; // rcx
  signed __int64 v25; // r14
  signed __int64 v26; // r14
  unsigned __int8 *v27; // rdx
  unsigned __int8 *v28; // rdx
  unsigned __int8 *v29; // r12
  char *v30; // rdx
  int v31; // r8d
  int v32; // r9d
  int v33; // r11d
  int v34; // r8d
  unsigned __int8 v35; // r10
  signed __int64 v36; // [rsp+30h] [rbp-50h] BYREF
  __int64 v37; // [rsp+38h] [rbp-48h]
  signed __int64 v38; // [rsp+40h] [rbp-40h]
  int v39; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v40; // [rsp+A0h] [rbp+20h]
  __int64 v41; // [rsp+B0h] [rbp+30h]

  v41 = -2;
  sub_1416B2790((unsigned int)&v36, (_DWORD)a2, a3, (unsigned int)"You have a web_search tool available.", 37);
  result = sub_140372350(&v39, &v36);
  if ( v39 != 1 )
  {
    if ( a3 < 0 )
    {
      v9 = 0;
      goto LABEL_8;
    }
    if ( a3 )
    {
      nullsub_1(v7);
      v9 = 1;
      v10 = (__m128i *)sub_140001650(a3, 1);
      if ( !v10 )
LABEL_8:
        sub_141938D2B(v9, a3);
      v11 = (__int64)v10;
      result = sub_1418F44E0(v10, a2, a3);
    }
    else
    {
      v11 = 1;
    }
    *a1 = a3;
    a1[1] = v11;
    a1[2] = a3;
    return result;
  }
  v8 = v40;
  if ( v40 )
  {
    if ( a3 <= v40 )
    {
      if ( a3 != v40 )
LABEL_5:
        sub_141938F40((_DWORD)a2, a3, 0, v40, (__int64)&off_1419E8400);
    }
    else if ( a2->m128i_i8[v40] <= -65 )
    {
      goto LABEL_5;
    }
  }
  v12 = (const __m128i *)sub_140E91540(a2, v40);
  v14 = v13;
  v15 = a3 - v8;
  v16 = &a2->m128i_i8[v8];
  sub_1416B2790((unsigned int)&v36, (_DWORD)v16, v15, (unsigned int)&unk_1419E8418, 2);
  sub_140372350(&v39, &v36);
  if ( v39 != 1 )
  {
    v18 = 1;
    v19 = nullptr;
    v20 = v14 == 0;
    if ( v14 >= 0 )
      goto LABEL_25;
LABEL_19:
    v21 = 0;
    goto LABEL_20;
  }
  if ( v40 )
  {
    if ( v15 <= v40 )
    {
      if ( v15 != v40 )
LABEL_17:
        sub_141938F40((_DWORD)v16, v15, v40, v15, (__int64)&off_1419E8420);
    }
    else if ( v16[v40] < -64 )
    {
      goto LABEL_17;
    }
  }
  v19 = (unsigned __int8 *)(v15 - v40);
  v18 = (__int64)&v16[v40];
  v20 = v14 == 0;
  if ( v14 < 0 )
    goto LABEL_19;
LABEL_25:
  if ( !v20 )
  {
    nullsub_1(v17);
    v21 = 1;
    v22 = (__m128i *)sub_140001650(v14, 1);
    if ( v22 )
    {
      v23 = v22;
      sub_1418F44E0(v22, v12, v14);
      v36 = v14;
      v37 = (__int64)v23;
      v38 = v14;
      if ( v19 )
      {
        sub_14190D590((unsigned int)&v36, v14, 2, 1, 1);
        v24 = v37;
        v25 = v38;
        *(_WORD *)(v37 + v38) = 2570;
        v26 = v25 + 2;
        v38 = v26;
LABEL_31:
        v27 = nullptr;
        while ( v27 != v19 )
        {
          v29 = v27;
          v30 = (char *)&v27[v18];
          v31 = (unsigned __int8)*v30;
          if ( *v30 >= 0 )
          {
            v28 = (unsigned __int8 *)(v30 + 1);
          }
          else
          {
            v32 = v31 & 0x1F;
            v33 = v30[1] & 0x3F;
            if ( (unsigned __int8)v31 <= 0xDFu )
            {
              v28 = (unsigned __int8 *)(v30 + 2);
              v31 = v33 | (v32 << 6);
            }
            else
            {
              v34 = (v33 << 6) | v30[2] & 0x3F;
              if ( (unsigned __int8)*v30 < 0xF0u )
              {
                v28 = (unsigned __int8 *)(v30 + 3);
                v31 = (v32 << 12) | v34;
              }
              else
              {
                v35 = v30[3];
                v28 = (unsigned __int8 *)(v30 + 4);
                v31 = ((v32 & 7) << 18) | (v34 << 6) | v35 & 0x3F;
              }
            }
          }
          v27 = &v28[-v18];
          if ( v31 != 10 )
            goto LABEL_42;
        }
        v29 = v19;
LABEL_42:
        if ( v19 - v29 > (unsigned __int64)(v36 - v26) )
        {
          sub_14190D590((unsigned int)&v36, v26, (_DWORD)v19 - (_DWORD)v29, 1, 1);
          v24 = v37;
          v26 = v38;
        }
        else if ( v19 == v29 )
        {
LABEL_45:
          v38 = v19 - v29 + v26;
          goto LABEL_46;
        }
        sub_1418F44E0((__m128i *)(v26 + v24), (const __m128i *)&v29[v18], v19 - v29);
        goto LABEL_45;
      }
      goto LABEL_46;
    }
LABEL_20:
    sub_141938D2B(v21, v14);
  }
  v36 = 0;
  v37 = 1;
  v38 = 0;
  if ( v19 )
  {
    v24 = 1;
    v26 = 0;
    goto LABEL_31;
  }
LABEL_46:
  a1[2] = v38;
  *a1 = v36;
  result = v37;
  a1[1] = v37;
  return result;
}
