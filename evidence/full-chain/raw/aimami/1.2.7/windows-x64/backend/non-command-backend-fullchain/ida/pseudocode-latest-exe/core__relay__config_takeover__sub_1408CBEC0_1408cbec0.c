// win 1.2.7 latest-exe | module src/core/relay/config_takeover.rs | ea 0x1408cbec0 | successor of pre-update 0x140ef7dc0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.8, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1408CBEC0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rsi
  unsigned __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // rdi
  __int64 v29; // r12
  unsigned __int64 v30; // rsi
  __int64 v31; // rbx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r15
  __int64 v42; // r15
  __int64 v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 v49; // rsi
  double result; // xmm0_8
  unsigned __int64 v51; // r15
  __int64 v52; // rbx
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // r15
  __int64 v56; // rsi
  unsigned __int64 v57; // rbx
  int v58[4]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v59; // [rsp+38h] [rbp-48h]
  __int64 *v60; // [rsp+40h] [rbp-40h]
  __int64 v61; // [rsp+48h] [rbp-38h]
  unsigned __int64 v62; // [rsp+50h] [rbp-30h]
  _QWORD v63[5]; // [rsp+58h] [rbp-28h] BYREF
  char v64; // [rsp+80h] [rbp+0h]
  __int16 v65; // [rsp+88h] [rbp+8h]
  __int64 v66; // [rsp+90h] [rbp+10h]
  __int64 v67; // [rsp+98h] [rbp+18h] BYREF
  __int64 v68; // [rsp+A0h] [rbp+20h]
  unsigned __int64 v69; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v70; // [rsp+B0h] [rbp+30h]
  __int64 v71; // [rsp+B8h] [rbp+38h]
  char v72; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v73; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v74; // [rsp+D0h] [rbp+50h]
  __int64 v75; // [rsp+D8h] [rbp+58h]
  __int64 v76; // [rsp+E0h] [rbp+60h]

  v76 = -2;
  v71 = a2;
  if ( !(a5 | a7) )
  {
    if ( a3 < 0 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    if ( a3 )
    {
      v14 = a1;
      nullsub_1(a1, a2);
      v10 = 1;
      v15 = sub_140001650(a3, 1);
      if ( !v15 )
LABEL_7:
        sub_14196B2DB(v10, a3);
      v16 = v15;
      sub_1419234B0(v15, v71, a3);
      a1 = v14;
    }
    else
    {
      v16 = 1;
    }
    *a1 = a3;
    a1[1] = v16;
    a1[2] = a3;
    return result;
  }
  v7 = a3 + 256;
  if ( a3 + 256 < 0 )
  {
    v8 = 0;
    goto LABEL_4;
  }
  v70 = a3;
  v60 = a1;
  if ( a3 == -256 )
  {
    v13 = 1;
  }
  else
  {
    nullsub_1(a1, a2);
    v8 = 1;
    v12 = sub_140001650(v7, 1);
    if ( !v12 )
LABEL_4:
      sub_14196B2DB(v8, v7);
    v13 = v12;
  }
  v17 = a6;
  v73 = v7;
  v74 = v13;
  v75 = 0;
  v66 = a4 + 24 * a5;
  v18 = 0;
  if ( a4 != v66 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(a4 + 8);
      v20 = *(_QWORD *)(a4 + 16);
      v21 = v73;
      if ( v20 > v73 - v18 )
        break;
      if ( v20 )
        goto LABEL_18;
LABEL_19:
      v22 = v20 + v18;
      v75 = v22;
      if ( v21 == v22 )
      {
        sub_141939070((unsigned int)&v73, v21, 1, 1, 1);
        v13 = v74;
      }
      a4 += 24;
      *(_BYTE *)(v13 + v22) = 10;
      v18 = v22 + 1;
      v75 = v18;
      if ( a4 == v66 )
        goto LABEL_24;
    }
    sub_141939070((unsigned int)&v73, v18, v20, 1, 1);
    v18 = v75;
    v21 = v73;
    v13 = v74;
LABEL_18:
    sub_1419234B0(v13 + v18, v19, v20);
    goto LABEL_19;
  }
LABEL_24:
  v67 = 0;
  v68 = 1;
  v69 = 0;
  v66 = a6 + 48 * a7;
  v23 = 1;
  v24 = 0;
  v25 = 0;
  while ( v17 != v66 )
  {
    if ( v25 )
    {
      if ( v67 == v24 )
      {
        sub_141939070((unsigned int)&v67, v24, 1, 1, 1);
        v23 = v68;
      }
      *(_BYTE *)(v23 + v25++) = 10;
      v69 = v25;
      v24 = v25;
    }
    else
    {
      v25 = 0;
    }
    v26 = v17 + 48;
    v27 = *(_QWORD *)(v17 + 32);
    v28 = v27 + 24LL * *(_QWORD *)(v17 + 40);
    if ( v27 != v28 )
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)(v27 + 8);
        v30 = *(_QWORD *)(v27 + 16);
        v31 = v67;
        if ( v30 > v67 - v24 )
          break;
        if ( v30 )
          goto LABEL_35;
LABEL_36:
        v32 = v30 + v24;
        v69 = v32;
        if ( v31 == v32 )
          sub_141939070((unsigned int)&v67, v31, 1, 1, 1);
        v27 += 24;
        v23 = v68;
        *(_BYTE *)(v68 + v32) = 10;
        v24 = v32 + 1;
        v69 = v24;
        v25 = v24;
        if ( v27 == v28 )
          goto LABEL_25;
      }
      sub_141939070((unsigned int)&v67, v24, v30, 1, 1);
      v31 = v67;
      v24 = v69;
LABEL_35:
      sub_1419234B0(v24 + v68, v29, v30);
      goto LABEL_36;
    }
LABEL_25:
    v17 = v26;
  }
  v72 = 2;
  v61 = 0;
  v62 = v70;
  v63[0] = v71;
  v63[1] = v70;
  v63[2] = 0;
  v63[3] = v70;
  v63[4] = 0xA0000000ALL;
  v64 = 1;
  v65 = 0;
  v33 = 0;
  do
  {
    v34 = v63[0];
    sub_1408FD7D0(v58, v63);
    if ( v58[0] == 1 )
    {
      v35 = v61;
      v61 = v59;
      v36 = v59 - v35;
      v37 = v35 + v34;
      if ( v59 == v35 )
        goto LABEL_49;
      goto LABEL_45;
    }
    if ( HIBYTE(v65) )
      break;
    HIBYTE(v65) = 1;
    v36 = v62 - v61;
    if ( ((unsigned __int8)v65 | (v62 != v61)) != 1 )
      break;
    v37 = v63[0] + v61;
    if ( !v36 )
    {
LABEL_49:
      v38 = 0;
      goto LABEL_50;
    }
LABEL_45:
    v38 = v36 - (*(_BYTE *)(v37 + v36 - 1) == 10);
LABEL_50:
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v72, v37, v38) )
    {
      v39 = sub_1408FEA60(v37, v38);
      if ( v40 == 55 && !(unsigned int)sub_141923B40(v39, &xmmword_141A542EF, 55) )
      {
        v41 = v75;
        if ( !v24 )
          goto LABEL_59;
        if ( v75 )
        {
          if ( v73 == v75 )
            sub_141939070((unsigned int)&v73, v75, 1, 1, 1);
          *(_BYTE *)(v74 + v41) = 10;
          v42 = v41 + 1;
          v75 = v42;
        }
        else
        {
          v42 = 0;
        }
        if ( v33 )
        {
          if ( v70 <= v33 )
          {
            if ( v70 != v33 )
LABEL_95:
              sub_14196B4F0(v71, v70, 0, v33, (__int64)&off_141A54BE0);
          }
          else if ( *(char *)(v71 + v33) < -64 )
          {
            goto LABEL_95;
          }
          if ( v33 > v73 - v42 )
          {
            sub_141939070((unsigned int)&v73, v42, v33, 1, 1);
            v42 = v75;
          }
          sub_1419234B0(v42 + v74, v71, v33);
        }
        v51 = v33 + v42;
        v75 = v51;
        if ( v51 >= 2 )
        {
          if ( *(_WORD *)(v74 + v51 - 2) == 2570 )
            goto LABEL_107;
        }
        else if ( !v51 )
        {
          v51 = 0;
          goto LABEL_107;
        }
        if ( v73 == v51 )
          sub_141939070((unsigned int)&v73, v51, 1, 1, 1);
        *(_BYTE *)(v74 + v51++) = 10;
        v75 = v51;
LABEL_107:
        v52 = v68;
        v53 = v73;
        if ( v24 > v73 - v51 )
        {
          sub_141939070((unsigned int)&v73, v51, v24, 1, 1);
          v53 = v73;
          v51 = v75;
        }
        v54 = v74;
        sub_1419234B0(v74 + v51, v52, v24);
        v55 = v24 + v51;
        v75 = v55;
        if ( v53 == v55 )
        {
          sub_141939070((unsigned int)&v73, v53, 1, 1, 1);
          v54 = v74;
        }
        v56 = v55 + 1;
        *(_BYTE *)(v54 + v55) = 10;
        v75 = v55 + 1;
        if ( v33 )
        {
          if ( v70 <= v33 )
          {
            if ( v70 != v33 )
LABEL_114:
              sub_14196B4F0(v71, v70, v33, v70, (__int64)&off_141A54BF8);
          }
          else if ( *(char *)(v71 + v33) < -64 )
          {
            goto LABEL_114;
          }
        }
        v57 = v70 - v33;
        if ( v70 - v33 > v73 - v56 )
        {
          sub_141939070((unsigned int)&v73, v55 + 1, v57, 1, 1);
          v56 = v75;
          if ( v70 == v33 )
            goto LABEL_119;
        }
        else if ( v70 == v33 )
        {
LABEL_119:
          v45 = v57 + v56;
          goto LABEL_86;
        }
        sub_1419234B0(v56 + v74, v33 + v71, v57);
        goto LABEL_119;
      }
    }
    v33 += v36;
  }
  while ( !HIBYTE(v65) );
  v41 = v75;
LABEL_59:
  if ( v41 )
  {
    sub_1408FEA60(v71, v70);
    if ( v43 )
    {
      if ( v73 == v41 )
        sub_141939070((unsigned int)&v73, v41, 1, 1, 1);
      *(_BYTE *)(v74 + v41++) = 10;
      v75 = v41;
    }
  }
  else
  {
    v41 = 0;
  }
  v44 = v70;
  if ( v70 > v73 - v41 )
  {
    sub_141939070((unsigned int)&v73, v41, v70, 1, 1);
    v41 = v75;
    v44 = v70;
LABEL_67:
    sub_1419234B0(v41 + v74, v71, v44);
  }
  else if ( v70 )
  {
    goto LABEL_67;
  }
  v45 = v44 + v41;
  v75 = v45;
  if ( v24 )
  {
    if ( !v45 )
    {
      v45 = 0;
      goto LABEL_83;
    }
    v46 = v74;
    if ( *(_BYTE *)(v74 + v45 - 1) == 10 )
    {
      v47 = 1;
      if ( v45 != 1 )
      {
        v47 = v45;
        if ( *(_WORD *)(v74 + v45 - 2) == 2570 )
          goto LABEL_83;
      }
LABEL_80:
      if ( v73 == v47 )
      {
        sub_141939070((unsigned int)&v73, v47, 1, 1, 1);
        v46 = v74;
      }
      *(_BYTE *)(v46 + v47) = 10;
      v75 = v47 + 1;
      v45 = v47 + 1;
    }
    else
    {
      if ( v73 == v45 )
      {
        sub_141939070((unsigned int)&v73, v45, 1, 1, 1);
        v46 = v74;
      }
      *(_BYTE *)(v46 + v45++) = 10;
      v75 = v45;
      v47 = v45;
      if ( *(_WORD *)(v46 + v45 - 2) != 2570 )
        goto LABEL_80;
    }
LABEL_83:
    v48 = v68;
    if ( v24 > v73 - v45 )
    {
      sub_141939070((unsigned int)&v73, v45, v24, 1, 1);
      v45 = v75;
    }
    sub_1419234B0(v45 + v74, v48, v24);
    v45 += v24;
  }
LABEL_86:
  v49 = v74;
  sub_1408CCA30(v60, v74, v45);
  if ( v67 )
    result = sub_140001660(v68, v67, 1);
  if ( v73 )
    return sub_140001660(v49, v73, 1);
  return result;
}
