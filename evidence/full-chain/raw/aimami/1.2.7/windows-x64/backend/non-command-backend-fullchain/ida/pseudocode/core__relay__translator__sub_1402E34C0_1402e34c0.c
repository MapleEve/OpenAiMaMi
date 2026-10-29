// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402e34c0 | name sub_1402E34C0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
signed __int64 *__fastcall sub_1402E34C0(signed __int64 *a1, const __m128i *a2, signed __int64 a3)
{
  signed __int64 v3; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 i; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rbx
  int v20; // eax
  __m128i *v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // r12
  int v29; // eax
  bool v30; // sf
  __int64 v31; // r15
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // r14
  __m128i *v35; // rcx
  const __m128i *v36; // rdx
  const __m128i *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v42; // [rsp+20h] [rbp-60h] BYREF
  __int64 v43; // [rsp+28h] [rbp-58h]
  __int128 v44; // [rsp+30h] [rbp-50h]
  __int64 v45; // [rsp+40h] [rbp-40h]
  __int64 v46; // [rsp+48h] [rbp-38h]
  __int128 v47; // [rsp+50h] [rbp-30h]
  __int64 v48; // [rsp+60h] [rbp-20h]
  __int64 v49; // [rsp+68h] [rbp-18h]
  signed __int64 v50; // [rsp+70h] [rbp-10h]
  const __m128i *v51; // [rsp+78h] [rbp-8h]
  char v52[8]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v53; // [rsp+88h] [rbp+8h] BYREF
  signed __int64 v54; // [rsp+98h] [rbp+18h]
  __int64 v55; // [rsp+A0h] [rbp+20h]
  signed __int64 v56; // [rsp+A8h] [rbp+28h]
  __int128 v57; // [rsp+B0h] [rbp+30h]
  signed __int64 *v58; // [rsp+C0h] [rbp+40h]
  __int64 v59; // [rsp+C8h] [rbp+48h]
  __int64 v60; // [rsp+D0h] [rbp+50h]

  v60 = -2;
  v3 = a3;
  v6 = sub_140E91160(a2, a3);
  if ( !v7 )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return a1;
  }
  v42 = v6;
  v43 = v7;
  v44 = 0;
  v45 = v6;
  v46 = v7;
  sub_14062D280(v52, &v42);
  if ( v52[0] == -1 )
  {
    sub_14002F910(&v53);
    v9 = v3 == 0;
    if ( v3 >= 0 )
    {
LABEL_23:
      if ( v9 )
      {
        v22 = 1;
        goto LABEL_27;
      }
      nullsub_1(v8);
      v10 = 1;
      v21 = (__m128i *)sub_140001650(v3, 1);
      if ( v21 )
      {
        v22 = (__int64)v21;
        sub_1418F44E0(v21, a2, v3);
LABEL_27:
        *a1 = v3;
        a1[1] = v22;
        a1[2] = v3;
        return a1;
      }
LABEL_9:
      sub_141938D2B(v10, v3);
    }
LABEL_8:
    v10 = 0;
    goto LABEL_9;
  }
  if ( v52[0] != 5 )
  {
    if ( v52[0] == 3 )
    {
      a1[2] = v54;
      *(_OWORD *)a1 = v53;
      return a1;
    }
    sub_14002F9D0(v52);
    v9 = v3 == 0;
    if ( v3 >= 0 )
      goto LABEL_23;
    goto LABEL_8;
  }
  v51 = a2;
  v58 = a1;
  v11 = v53;
  v50 = v54;
  v57 = v53;
  if ( (_QWORD)v53 )
  {
    v56 = v3;
    v59 = *((_QWORD *)&v57 + 1);
    for ( i = v57; ; i = *(_QWORD *)(v55 + 8 * v17 + 632) )
    {
      v13 = i + 360;
      v14 = *(unsigned __int16 *)(i + 626);
      v55 = i;
      v15 = i - 32;
      v49 = v14;
      v16 = 3LL * (unsigned int)(8 * v14);
      v17 = -1;
      do
      {
        if ( !v16 )
        {
          v17 = v49;
          goto LABEL_20;
        }
        v18 = v13 + 24;
        v19 = 5LL - *(_QWORD *)(v13 + 16);
        v20 = sub_1418F4B70(aInput_0, *(_QWORD *)(v13 + 8));
        if ( v20 )
          v19 = v20;
        LOBYTE(v11) = (v19 > 0) - (v19 < 0);
        v15 += 32;
        ++v17;
        v16 -= 24;
        v13 = v18;
      }
      while ( (_BYTE)v11 == 1 );
      if ( !(_BYTE)v11 )
        goto LABEL_39;
LABEL_20:
      if ( !v59 )
        break;
      --v59;
    }
    v59 = *((_QWORD *)&v57 + 1);
    v23 = v57;
    v3 = v56;
    while ( 1 )
    {
      v24 = v23 + 360;
      v15 = v23 - 32;
      v55 = *(unsigned __int16 *)(v23 + 626);
      v11 = (unsigned int)(8 * v55);
      v25 = 3 * v11;
      v26 = -1;
      do
      {
        if ( !v25 )
        {
          v26 = v55;
          goto LABEL_37;
        }
        v27 = v24 + 24;
        v28 = 5LL - *(_QWORD *)(v24 + 16);
        v29 = sub_1418F4B70(aPatch_0, *(_QWORD *)(v24 + 8));
        if ( v29 )
          v28 = v29;
        v9 = v28 == 0;
        v30 = v28 < 0;
        v3 = v56;
        LOBYTE(v11) = (!v30 && !v9) - v30;
        v15 += 32;
        ++v26;
        v25 -= 24;
        v24 = v27;
      }
      while ( (_BYTE)v11 == 1 );
      if ( !(_BYTE)v11 )
        break;
LABEL_37:
      if ( !v59 )
        goto LABEL_43;
      --v59;
      v23 = *(_QWORD *)(v23 + 8 * v26 + 632);
    }
LABEL_39:
    v3 = v56;
    if ( *(_BYTE *)v15 == 3 )
    {
      v3 = *(_QWORD *)(v15 + 24);
      if ( v3 < 0 )
      {
        v31 = 0;
        goto LABEL_42;
      }
      if ( v3 )
      {
        v37 = *(const __m128i **)(v15 + 16);
        nullsub_1(v11);
        v31 = 1;
        v38 = sub_140001650(v3, 1);
        a1 = v58;
        if ( !v38 )
LABEL_42:
          sub_141938D2B(v31, v3);
        v34 = v38;
        v35 = (__m128i *)v38;
        v36 = v37;
        goto LABEL_52;
      }
LABEL_53:
      v34 = 1;
      v3 = 0;
      a1 = v58;
      goto LABEL_54;
    }
  }
LABEL_43:
  if ( v3 < 0 )
  {
    v32 = 0;
    goto LABEL_45;
  }
  if ( !v3 )
    goto LABEL_53;
  nullsub_1(v11);
  v32 = 1;
  v33 = sub_140001650(v3, 1);
  a1 = v58;
  if ( !v33 )
LABEL_45:
    sub_141938D2B(v32, v3);
  v34 = v33;
  v35 = (__m128i *)v33;
  v36 = v51;
LABEL_52:
  sub_1418F44E0(v35, v36, v3);
LABEL_54:
  *a1 = v3;
  a1[1] = v34;
  a1[2] = v3;
  if ( (_QWORD)v57 )
  {
    v43 = 0;
    v44 = v57;
    v46 = 0;
    v47 = v57;
    v39 = 1;
    v40 = v50;
  }
  else
  {
    v39 = 0;
    v40 = 0;
  }
  v42 = v39;
  v45 = v39;
  v48 = v40;
  sub_140DF2FD0(&v42);
  return a1;
}
