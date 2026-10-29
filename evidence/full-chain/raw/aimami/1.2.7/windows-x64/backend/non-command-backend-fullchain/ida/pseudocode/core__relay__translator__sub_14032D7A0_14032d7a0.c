// win 1.2.7 | module src/core/relay/translator.rs | ea 0x14032d7a0 | name sub_14032D7A0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_14032D7A0(
        __int64 *a1,
        __m128i *a2,
        signed __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __m128i *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // rsi
  __int64 *v22; // rdi
  __m128i *v23; // rax
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v27; // [rsp+28h] [rbp-48h]
  __int64 v28; // [rsp+30h] [rbp-40h]
  __int64 v29; // [rsp+38h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-30h]
  __int64 v31; // [rsp+48h] [rbp-28h]
  __int64 v32; // [rsp+50h] [rbp-20h]
  const __m128i *v33; // [rsp+58h] [rbp-18h]
  __int64 v34; // [rsp+60h] [rbp-10h]
  __int64 *v35; // [rsp+68h] [rbp-8h]
  __int64 v36; // [rsp+70h] [rbp+0h]

  v36 = -2;
  if ( a3 < 0 )
  {
    v7 = 0;
    goto LABEL_3;
  }
  v35 = a1;
  v33 = a4;
  if ( a3 )
  {
    nullsub_1(a1);
    v7 = 1;
    v9 = (__m128i *)sub_140001650(a3, 1);
    if ( !v9 )
LABEL_3:
      sub_141938D2B(v7, a3);
    v34 = (__int64)v9;
    v10 = a3;
    sub_1418F44E0(v9, a2, a3);
  }
  else
  {
    v10 = 0;
    v34 = 1;
  }
  v11 = *(_QWORD *)(a6 + 32);
  v32 = v10;
  if ( v11 )
  {
    v12 = *(_QWORD *)(a6 + 40);
    while ( 1 )
    {
      v13 = v11 + 8;
      v27 = v11;
      v28 = *(unsigned __int16 *)(v11 + 1066);
      v14 = 3LL * (unsigned int)(8 * v28);
      v15 = -1;
      do
      {
        if ( !v14 )
        {
          v15 = v28;
          goto LABEL_18;
        }
        v16 = v13 + 24;
        v17 = v10 - *(_QWORD *)(v13 + 16);
        v18 = sub_1418F4B70(a2, *(_QWORD *)(v13 + 8));
        if ( v18 )
          v17 = v18;
        LOBYTE(v19) = (v17 > 0) - (v17 < 0);
        ++v15;
        v14 -= 24;
        v13 = v16;
      }
      while ( (_BYTE)v19 == 1 );
      if ( !(_BYTE)v19 )
        break;
LABEL_18:
      if ( v12-- == 0 )
        goto LABEL_23;
      v11 = *(_QWORD *)(v27 + 8 * v15 + 1072);
    }
    if ( a5 < 0 )
    {
      v21 = 0;
      goto LABEL_22;
    }
    if ( a5 )
    {
      nullsub_1(v19);
      v21 = 1;
      v23 = (__m128i *)sub_140001650(a5, 1);
      v22 = v35;
      if ( !v23 )
LABEL_22:
        sub_141938D2B(v21, a5);
      v24 = (__int64)v23;
      sub_1418F44E0(v23, v33, a5);
    }
    else
    {
      v24 = 1;
      v22 = v35;
    }
    v29 = a5;
    v30 = v24;
    v31 = a5;
  }
  else
  {
LABEL_23:
    sub_140300F30((__int64)&v29, a2, v10, v33, a5);
    v22 = v35;
  }
  v25 = v32;
  *v22 = v32;
  v22[1] = v34;
  v22[2] = v25;
  v22[3] = v29;
  v22[4] = v30;
  v22[5] = v31;
  return v22;
}
