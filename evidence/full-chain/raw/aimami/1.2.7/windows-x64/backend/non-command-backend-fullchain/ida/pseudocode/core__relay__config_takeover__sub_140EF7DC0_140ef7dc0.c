// win 1.2.7 | module src/core/relay/config_takeover.rs | ea 0x140ef7dc0 | name sub_140EF7DC0
// win 1.2.7 | module src/core/relay/config_takeover.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EF7DC0(
        signed __int64 *a1,
        const __m128i *a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  signed __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  __m128i *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbx
  const __m128i *v20; // rsi
  unsigned __int64 v21; // r12
  signed __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rsi
  __int64 v27; // r15
  __int64 v28; // r13
  __int64 v29; // rdi
  const __m128i *v30; // r12
  unsigned __int64 v31; // rsi
  __int64 v32; // rbx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rsi
  const __m128i *v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // r12
  unsigned __int64 v52; // r12
  const __m128i *v53; // rbx
  signed __int64 v54; // rsi
  __int64 v55; // rdi
  unsigned __int64 v56; // r12
  __int64 v57; // rsi
  unsigned __int64 v58; // rbx
  int v59[4]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v60; // [rsp+38h] [rbp-48h]
  signed __int64 *v61; // [rsp+40h] [rbp-40h]
  __int64 v62; // [rsp+48h] [rbp-38h]
  unsigned __int64 v63; // [rsp+50h] [rbp-30h]
  _QWORD v64[5]; // [rsp+58h] [rbp-28h] BYREF
  char v65; // [rsp+80h] [rbp+0h]
  __int16 v66; // [rsp+88h] [rbp+8h]
  __int64 v67; // [rsp+90h] [rbp+10h]
  __int64 v68; // [rsp+98h] [rbp+18h] BYREF
  __int64 v69; // [rsp+A0h] [rbp+20h]
  unsigned __int64 v70; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v71; // [rsp+B0h] [rbp+30h]
  const __m128i *v72; // [rsp+B8h] [rbp+38h]
  char v73; // [rsp+C7h] [rbp+47h] BYREF
  signed __int64 v74; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v75; // [rsp+D0h] [rbp+50h]
  __int64 v76; // [rsp+D8h] [rbp+58h]
  __int64 v77; // [rsp+E0h] [rbp+60h]

  v77 = -2;
  v72 = a2;
  result = a5 | a7;
  if ( !(a5 | a7) )
  {
    if ( a3 < 0 )
    {
      v11 = 0;
      goto LABEL_7;
    }
    if ( a3 )
    {
      nullsub_1(a1);
      v11 = 1;
      v16 = (__m128i *)sub_140001650(a3, 1);
      if ( !v16 )
LABEL_7:
        sub_141938D2B(v11, a3);
      v17 = (__int64)v16;
      result = sub_1418F44E0(v16, v72, a3);
    }
    else
    {
      v17 = 1;
    }
    *a1 = a3;
    a1[1] = v17;
    a1[2] = a3;
    return result;
  }
  v61 = a1;
  v8 = a3 + 256;
  if ( a3 + 256 < 0 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  v71 = a3;
  if ( a3 == -256 )
  {
    v14 = 1;
  }
  else
  {
    nullsub_1(a1);
    v9 = 1;
    v13 = sub_140001650(v8, 1);
    if ( !v13 )
LABEL_4:
      sub_141938D2B(v9, v8);
    v14 = v13;
  }
  v18 = a6;
  v74 = v8;
  v75 = v14;
  v76 = 0;
  v67 = a4 + 24 * a5;
  v19 = 0;
  if ( a4 != v67 )
  {
    while ( 1 )
    {
      v20 = *(const __m128i **)(a4 + 8);
      v21 = *(_QWORD *)(a4 + 16);
      v22 = v74;
      if ( v21 > v74 - v19 )
        break;
      if ( v21 )
        goto LABEL_18;
LABEL_19:
      v23 = v21 + v19;
      v76 = v23;
      if ( v22 == v23 )
      {
        sub_14190D590((unsigned int)&v74, v22, 1, 1, 1);
        v14 = v75;
      }
      a4 += 24;
      *(_BYTE *)(v14 + v23) = 10;
      v19 = v23 + 1;
      v76 = v19;
      if ( a4 == v67 )
        goto LABEL_24;
    }
    sub_14190D590((unsigned int)&v74, v19, v21, 1, 1);
    v19 = v76;
    v22 = v74;
    v14 = v75;
LABEL_18:
    sub_1418F44E0((__m128i *)(v14 + v19), v20, v21);
    goto LABEL_19;
  }
LABEL_24:
  v68 = 0;
  v69 = 1;
  v70 = 0;
  v67 = a6 + 48 * a7;
  v24 = 1;
  v25 = 0;
  v26 = 0;
  while ( v18 != v67 )
  {
    if ( v26 )
    {
      if ( v68 == v25 )
      {
        sub_14190D590((unsigned int)&v68, v25, 1, 1, 1);
        v24 = v69;
      }
      *(_BYTE *)(v24 + v26++) = 10;
      v70 = v26;
      v25 = v26;
    }
    else
    {
      v26 = 0;
    }
    v27 = v18 + 48;
    v28 = *(_QWORD *)(v18 + 32);
    v29 = v28 + 24LL * *(_QWORD *)(v18 + 40);
    if ( v28 != v29 )
    {
      while ( 1 )
      {
        v30 = *(const __m128i **)(v28 + 8);
        v31 = *(_QWORD *)(v28 + 16);
        v32 = v68;
        if ( v31 > v68 - v25 )
          break;
        if ( v31 )
          goto LABEL_35;
LABEL_36:
        v33 = v31 + v25;
        v70 = v33;
        if ( v32 == v33 )
          sub_14190D590((unsigned int)&v68, v32, 1, 1, 1);
        v28 += 24;
        v24 = v69;
        *(_BYTE *)(v69 + v33) = 10;
        v25 = v33 + 1;
        v70 = v25;
        v26 = v25;
        if ( v28 == v29 )
          goto LABEL_25;
      }
      sub_14190D590((unsigned int)&v68, v25, v31, 1, 1);
      v32 = v68;
      v25 = v70;
LABEL_35:
      sub_1418F44E0((__m128i *)(v25 + v69), v30, v31);
      goto LABEL_36;
    }
LABEL_25:
    v18 = v27;
  }
  v73 = 2;
  v62 = 0;
  v63 = v71;
  v64[0] = v72;
  v64[1] = v71;
  v64[2] = 0;
  v64[3] = v71;
  v64[4] = 0xA0000000ALL;
  v65 = 1;
  v66 = 0;
  v34 = 0;
  while ( 1 )
  {
    v35 = v64[0];
    sub_140F9C6A0(v59, v64);
    if ( v59[0] == 1 )
    {
      v36 = v62;
      v62 = v60;
      v37 = v60 - v36;
      v38 = v36 + v35;
      v39 = 0;
      if ( v60 != v36 )
        goto LABEL_45;
    }
    else
    {
      if ( HIBYTE(v66) || (HIBYTE(v66) = 1, v37 = v63 - v62, ((unsigned __int8)v66 | (v63 != v62)) != 1) )
      {
LABEL_54:
        v43 = v76;
        goto LABEL_55;
      }
      v38 = v64[0] + v62;
      v39 = 0;
      if ( v37 )
      {
LABEL_45:
        LOBYTE(v39) = *(_BYTE *)(v38 + v37 - 1) == 10;
        v39 = -v39;
      }
    }
    v40 = v37 + v39;
    if ( (unsigned __int8)sub_1402B5F80(&v73, v38, v40) )
    {
      v41 = sub_140E91160(v38, v40);
      if ( v42 == 55 && !(unsigned int)sub_1418F4B70(v41, aAimamiRelayMan_1) )
        break;
    }
    v34 += v37;
    if ( HIBYTE(v66) )
      goto LABEL_54;
  }
  v43 = v76;
  if ( !v25 )
  {
LABEL_55:
    if ( v43 )
    {
      sub_140E91160(v72, v71);
      if ( v44 )
      {
        if ( v74 == v43 )
          sub_14190D590((unsigned int)&v74, v43, 1, 1, 1);
        *(_BYTE *)(v75 + v43++) = 10;
        v76 = v43;
      }
    }
    else
    {
      v43 = 0;
    }
    v45 = v71;
    if ( v71 > v74 - v43 )
    {
      sub_14190D590((unsigned int)&v74, v43, v71, 1, 1);
      v43 = v76;
      v45 = v71;
    }
    else if ( !v71 )
    {
      goto LABEL_64;
    }
    sub_1418F44E0((__m128i *)(v43 + v75), v72, v45);
LABEL_64:
    v46 = v45 + v43;
    v76 = v46;
    if ( !v25 )
      goto LABEL_82;
    if ( v46 )
    {
      v47 = v75;
      if ( *(_BYTE *)(v75 + v46 - 1) == 10 )
      {
        v48 = 1;
        if ( v46 != 1 )
        {
          v48 = v46;
          if ( *(_WORD *)(v75 + v46 - 2) == 2570 )
            goto LABEL_79;
        }
      }
      else
      {
        if ( v74 == v46 )
        {
          sub_14190D590((unsigned int)&v74, v46, 1, 1, 1);
          v47 = v75;
        }
        *(_BYTE *)(v47 + v46++) = 10;
        v76 = v46;
        v48 = v46;
        if ( *(_WORD *)(v47 + v46 - 2) == 2570 )
          goto LABEL_79;
      }
      if ( v74 == v48 )
      {
        sub_14190D590((unsigned int)&v74, v48, 1, 1, 1);
        v47 = v75;
      }
      *(_BYTE *)(v47 + v48) = 10;
      v76 = v48 + 1;
      v46 = v48 + 1;
      goto LABEL_79;
    }
    v46 = 0;
LABEL_79:
    v49 = (const __m128i *)v69;
    if ( v25 > v74 - v46 )
    {
      sub_14190D590((unsigned int)&v74, v46, v25, 1, 1);
      v46 = v76;
    }
    sub_1418F44E0((__m128i *)(v46 + v75), v49, v25);
    v46 += v25;
    goto LABEL_82;
  }
  if ( v76 )
  {
    if ( v74 == v76 )
      sub_14190D590((unsigned int)&v74, v76, 1, 1, 1);
    *(_BYTE *)(v75 + v43) = 10;
    v51 = v43 + 1;
    v76 = v51;
  }
  else
  {
    v51 = 0;
  }
  if ( v34 )
  {
    if ( v71 <= v34 )
    {
      if ( v71 != v34 )
LABEL_96:
        sub_141938F40((_DWORD)v72, v71, 0, v34, (__int64)&off_141A5BFD8);
    }
    else if ( v72->m128i_i8[v34] < -64 )
    {
      goto LABEL_96;
    }
    if ( v34 > v74 - v51 )
    {
      sub_14190D590((unsigned int)&v74, v51, v34, 1, 1);
      v51 = v76;
    }
    sub_1418F44E0((__m128i *)(v51 + v75), v72, v34);
  }
  v52 = v34 + v51;
  v76 = v52;
  if ( v52 >= 2 )
  {
    if ( *(_WORD *)(v75 + v52 - 2) != 2570 )
      goto LABEL_105;
  }
  else
  {
    if ( !v52 )
    {
      v52 = 0;
      goto LABEL_108;
    }
LABEL_105:
    if ( v74 == v52 )
      sub_14190D590((unsigned int)&v74, v52, 1, 1, 1);
    *(_BYTE *)(v75 + v52++) = 10;
    v76 = v52;
  }
LABEL_108:
  v53 = (const __m128i *)v69;
  v54 = v74;
  if ( v25 > v74 - v52 )
  {
    sub_14190D590((unsigned int)&v74, v52, v25, 1, 1);
    v54 = v74;
    v52 = v76;
  }
  v55 = v75;
  sub_1418F44E0((__m128i *)(v75 + v52), v53, v25);
  v56 = v25 + v52;
  v76 = v56;
  if ( v54 == v56 )
  {
    sub_14190D590((unsigned int)&v74, v54, 1, 1, 1);
    v55 = v75;
  }
  v57 = v56 + 1;
  *(_BYTE *)(v55 + v56) = 10;
  v76 = v56 + 1;
  if ( v34 )
  {
    if ( v71 <= v34 )
    {
      if ( v71 != v34 )
LABEL_115:
        sub_141938F40((_DWORD)v72, v71, v34, v71, (__int64)&off_141A5BFF8);
    }
    else if ( v72->m128i_i8[v34] < -64 )
    {
      goto LABEL_115;
    }
  }
  v58 = v71 - v34;
  if ( v71 - v34 > v74 - v57 )
  {
    sub_14190D590((unsigned int)&v74, v56 + 1, v58, 1, 1);
    v57 = v76;
    if ( v71 != v34 )
LABEL_119:
      sub_1418F44E0((__m128i *)(v57 + v75), (const __m128i *)((char *)v72 + v34), v58);
  }
  else if ( v71 != v34 )
  {
    goto LABEL_119;
  }
  v46 = v58 + v57;
LABEL_82:
  v50 = v75;
  result = sub_140EF8930(v61, v75, v46);
  if ( v68 )
    result = sub_140001660(v69, v68, 1);
  if ( v74 )
    return sub_140001660(v50, v74, 1);
  return result;
}
