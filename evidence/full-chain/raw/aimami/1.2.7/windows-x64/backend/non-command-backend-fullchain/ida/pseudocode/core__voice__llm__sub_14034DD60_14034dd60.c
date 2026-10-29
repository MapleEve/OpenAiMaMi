// win 1.2.7 | module src/core/voice/llm.rs | ea 0x14034dd60 | name sub_14034DD60
// win 1.2.7 | module src/core/voice/llm.rs | attributed via panic-Location xref (win-native)
unsigned __int64 *__fastcall sub_14034DD60(unsigned __int64 *a1, __int64 a2)
{
  const __m128i *v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int8 *v10; // r14
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // r15
  const __m128i *v17; // r14
  __m128i *v18; // rax
  __int64 v19; // rbx
  unsigned __int64 *v20; // rax
  _BYTE v22[104]; // [rsp+30h] [rbp-50h] BYREF
  int v23; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v24; // [rsp+A0h] [rbp+20h]
  _QWORD *v25; // [rsp+B0h] [rbp+30h]
  const __m128i *v26; // [rsp+B8h] [rbp+38h]
  unsigned __int64 *v27; // [rsp+C0h] [rbp+40h]
  __int64 v28; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v29; // [rsp+D0h] [rbp+50h]
  __int64 v30; // [rsp+D8h] [rbp+58h]
  __int64 v31; // [rsp+E0h] [rbp+60h]

  v31 = -2;
  v27 = a1;
  v28 = 0;
  v29 = 1;
  v30 = 0;
  v2 = *(const __m128i **)(a2 + 8);
  v25 = (_QWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = 1;
  v5 = 0;
  v26 = v2;
  while ( 1 )
  {
    sub_1416B2790((unsigned int)v22, (_DWORD)v2, v3, (unsigned int)aThink, 7);
    sub_140372350(&v23, v22);
    if ( v23 != 1 )
      break;
    v6 = v24;
    if ( v24 )
    {
      if ( v24 >= v3 )
      {
        if ( v24 != v3 )
LABEL_43:
          sub_141938F40((_DWORD)v2, v3, 0, v24, (__int64)&off_1419E9D50);
      }
      else if ( v2->m128i_i8[v24] <= -65 )
      {
        goto LABEL_43;
      }
      if ( v24 > v28 - v5 )
      {
        sub_14190D590((unsigned int)&v28, v5, v24, 1, 1);
        v4 = v29;
        v5 = v30;
      }
      sub_1418F44E0((__m128i *)(v4 + v5), v2, v6);
      v5 += v6;
      v30 = v5;
      v7 = v6 + 7;
      if ( !v7 )
      {
        v8 = 0;
        goto LABEL_20;
      }
    }
    else
    {
      v7 = 7;
    }
    if ( v7 >= v3 )
    {
      v8 = v3;
      if ( v7 != v3 )
LABEL_42:
        sub_141938F40((_DWORD)v2, v3, v7, v3, (__int64)&off_1419E9D68);
    }
    else
    {
      if ( v2->m128i_i8[v7] < -64 )
        goto LABEL_42;
      v8 = v7;
    }
LABEL_20:
    v9 = v3 - v8;
    v10 = &v2->m128i_i8[v8];
    sub_1416B2790((unsigned int)v22, (_DWORD)v10, v9, (unsigned int)aThink_0, 8);
    sub_140372350(&v23, v22);
    if ( v23 != 1 )
      goto LABEL_29;
    v11 = v24 + 8;
    if ( v24 != -8 )
    {
      if ( v9 > v11 )
      {
        if ( v10[v11] < -64 )
          goto LABEL_44;
      }
      else if ( v9 != v11 )
      {
LABEL_44:
        sub_141938F40((_DWORD)v10, v9, v11, v9, (__int64)&off_1419E9D80);
      }
    }
    v3 = v9 - v11;
    v2 = (const __m128i *)&v10[v11];
  }
  if ( v3 > v28 - v5 )
  {
    sub_14190D590((unsigned int)&v28, v5, v3, 1, 1);
    v4 = v29;
    v5 = v30;
LABEL_27:
    sub_1418F44E0((__m128i *)(v5 + v4), v2, v3);
  }
  else if ( v3 )
  {
    goto LABEL_27;
  }
  v5 += v3;
  v30 = v5;
LABEL_29:
  v12 = sub_140E91160(v4, v5);
  v15 = v13;
  if ( v13 < 0 )
  {
    v16 = 0;
    goto LABEL_31;
  }
  if ( v13 )
  {
    v17 = (const __m128i *)v12;
    nullsub_1(v14);
    v16 = 1;
    v18 = (__m128i *)sub_140001650(v15, 1);
    if ( !v18 )
LABEL_31:
      sub_141938D2B(v16, v15);
    v19 = (__int64)v18;
    sub_1418F44E0(v18, v17, v15);
  }
  else
  {
    v19 = 1;
  }
  v20 = v27;
  *v27 = v15;
  v20[1] = v19;
  v20[2] = v15;
  if ( v28 )
    sub_140001660(v4, v28, 1);
  if ( *v25 )
    sub_140001660(v26, *v25, 1);
  return v27;
}
