// win 1.2.7 latest-exe | module src/platform/debug_log.rs | ea 0x14072b5b0 | successor of pre-update 0x14021d340 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
double __fastcall sub_14072B5B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // ebx
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rsi
  unsigned __int64 v27; // r8
  char v28; // al
  __int64 v29; // rdx
  unsigned int v30; // edx
  char *v31; // r9
  __int64 v32; // rax
  char *v33; // r9
  unsigned __int64 v34; // r13
  char *v35; // r10
  char *v36; // r9
  int v37; // r11d
  int v38; // edi
  int v39; // r14d
  int v40; // r11d
  char v41; // r14
  int v42; // r15d
  int v43; // r14d
  int v44; // r9d
  unsigned __int64 v45; // r13
  char v46; // r10
  __int64 v47; // r9
  unsigned __int64 v48; // r9
  unsigned int v49; // r10d
  __int64 v50; // rdi
  char *v51; // r8
  char v52; // cl
  unsigned int v53; // ecx
  char **v54; // rcx
  int *v55; // r14
  unsigned int *i; // r15
  __int64 v57; // rax
  unsigned int v58; // ebx
  unsigned __int64 v59; // r8
  unsigned __int8 v60; // al
  int v61; // eax
  __int64 v62; // r15
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  _DWORD *v65; // r8
  unsigned int *v66; // rax
  _DWORD *v67; // r10
  unsigned int *v68; // r15
  __int64 v69; // r8
  int v70; // ebx
  unsigned __int64 v71; // rax
  __int64 v72; // r8
  unsigned __int64 v73; // rdi
  unsigned __int64 v74; // rax
  int *v75; // rdx
  unsigned __int64 v76; // r14
  __int64 v77; // rdi
  __int64 v78; // rdi
  int v79; // r8d
  unsigned __int64 v80; // rdx
  _DWORD *v81; // r9
  int v82; // r10d
  _DWORD *v83; // r11
  __int64 v84; // r10
  bool v85; // cc
  int v86; // r10d
  __int64 v87; // r11
  int v88; // edi
  _DWORD *v89; // rbx
  __int64 v90; // rdi
  unsigned __int64 v91; // rbx
  __int64 v92; // rdi
  unsigned __int64 v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rcx
  __int64 v97; // r8
  unsigned int v98; // r8d
  char v99; // r8
  unsigned __int64 v100; // r8
  __int64 v101; // rdi
  void *v102; // rax
  unsigned __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // r14
  __int64 v109; // rax
  char *v110; // r13
  unsigned __int8 *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // rax
  unsigned int v115; // r15d
  int v116; // eax
  int v117; // edx
  int v118; // r15d
  unsigned __int8 v119; // cl
  __int64 v120; // r12
  unsigned __int64 v121; // r8
  char v122; // al
  unsigned int v123; // ecx
  __int64 v124; // rdx
  char v125; // cl
  unsigned int v126; // r8d
  unsigned int v127; // eax
  __int64 v128; // rax
  unsigned __int64 v129; // rax
  char v130; // al
  unsigned int v131; // ecx
  char v132; // cl
  unsigned int v133; // edx
  __int64 v134; // r14
  __int64 v135; // r14
  __int64 v136; // rdi
  _OWORD *v137; // rcx
  double result; // xmm0_8
  __int64 v139; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v140; // [rsp+40h] [rbp-40h]
  __int64 v141; // [rsp+48h] [rbp-38h]
  __int64 v142; // [rsp+50h] [rbp-30h]
  __int64 v143; // [rsp+58h] [rbp-28h] BYREF
  __int64 v144; // [rsp+60h] [rbp-20h]
  unsigned __int64 v145; // [rsp+68h] [rbp-18h]
  __int128 v146; // [rsp+70h] [rbp-10h] BYREF
  __int64 v147; // [rsp+80h] [rbp+0h]
  __int128 v148; // [rsp+90h] [rbp+10h] BYREF
  __int64 v149; // [rsp+A0h] [rbp+20h]
  __int64 v150; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v151; // [rsp+B0h] [rbp+30h]
  __int64 v152; // [rsp+B8h] [rbp+38h]
  __int64 v153; // [rsp+C8h] [rbp+48h]
  __int64 v154; // [rsp+D0h] [rbp+50h]
  __int64 v155; // [rsp+D8h] [rbp+58h]
  unsigned int *v156; // [rsp+E0h] [rbp+60h]
  unsigned __int64 v157; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v158; // [rsp+F0h] [rbp+70h]
  __int64 v159; // [rsp+F8h] [rbp+78h]
  __int128 v160; // [rsp+100h] [rbp+80h] BYREF
  __int64 v161; // [rsp+110h] [rbp+90h]
  __int64 v162; // [rsp+120h] [rbp+A0h]
  char *v163; // [rsp+128h] [rbp+A8h]
  __int64 v164; // [rsp+130h] [rbp+B0h]
  unsigned __int64 v165; // [rsp+138h] [rbp+B8h]
  __int64 v166; // [rsp+140h] [rbp+C0h]

  v166 = -2;
  v4 = a3;
  if ( a3 < 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v142 = a1;
  if ( a3 )
  {
    nullsub_1(a1, a2);
    v5 = 1;
    v8 = sub_140001650(v4, 1);
    if ( !v8 )
LABEL_3:
      sub_14196B2DB(v5, v4);
    v162 = v8;
    sub_1419234B0(v8, a2, v4);
    if ( a4 )
      goto LABEL_7;
LABEL_13:
    v9 = v4;
    goto LABEL_17;
  }
  v162 = 1;
  if ( !a4 )
    goto LABEL_13;
LABEL_7:
  v154 = v162;
  v153 = v4;
  sub_1416DA570(&v160);
  if ( v161 )
  {
    v165 = *((_QWORD *)&v160 + 1);
    v164 = v4;
    sub_1406553F0((unsigned int)&v150, v162, v4, DWORD2(v160), v161, (__int64)aCodex_0, 8);
    if ( v164 )
      sub_140001660(v162, v164, 1);
    v9 = v150;
    v162 = v151;
    v4 = v152;
    v10 = v160;
    if ( (_QWORD)v160 == -1 )
      goto LABEL_17;
    goto LABEL_15;
  }
  v9 = v4;
  v10 = v160;
  if ( (_QWORD)v160 != -1 )
  {
LABEL_15:
    if ( v10 )
      sub_140001660(*((_QWORD *)&v160 + 1), v10, 1);
  }
LABEL_17:
  v154 = v162;
  v155 = v9;
  v153 = v9;
  sub_1414CB590(&v150);
  if ( v150 != -1 )
  {
    v164 = v150;
    v165 = v151;
    sub_1416DA570(&v148);
    if ( v149 )
    {
      v163 = *((char **)&v148 + 1);
      sub_1406553F0((unsigned int)&v160, v162, v4, DWORD2(v148), v149, (__int64)&aCodex_0[8], 1);
      if ( v155 )
        sub_140001660(v162, v155, 1);
      v162 = *((_QWORD *)&v160 + 1);
      v155 = v160;
      v4 = v161;
    }
    if ( (_QWORD)v148 != -1 && (_QWORD)v148 )
      sub_140001660(*((_QWORD *)&v148 + 1), v148, 1);
    if ( v164 )
      sub_140001660(v165, v164, 1);
  }
  v154 = v162;
  v153 = v155;
  sub_140219620(&v143, v162, v162 + v4);
  if ( v4 < 0 )
  {
    v13 = 0;
    goto LABEL_29;
  }
  if ( v4 )
  {
    nullsub_1(v12, v11);
    v13 = 1;
    v14 = sub_140001650(v4, 1);
    if ( !v14 )
LABEL_29:
      sub_14196B2DB(v13, v4);
  }
  else
  {
    v14 = 1;
  }
  v157 = v4;
  v163 = (char *)v14;
  v158 = v14;
  v159 = 0;
  v15 = 0;
  v16 = 0;
  v17 = v145;
  v164 = 0;
  if ( !v145 )
    goto LABEL_35;
  do
  {
    while ( 1 )
    {
      v22 = v144;
      v23 = *(_DWORD *)(v144 + 4 * v16);
      v12 = 0;
      if ( v23 == 39 )
        v12 = 39;
      if ( v23 == 34 )
        v12 = 34;
      v165 = v16;
      v24 = v16 - (((_DWORD)v12 == 0) - 1LL);
      if ( v24 < v17 )
      {
        v156 = (unsigned int *)(v144 + 4 * v165);
        if ( !v165 )
          break;
        if ( (_DWORD)v12 )
          break;
        v25 = *(v156 - 1);
        if ( (unsigned int)(v25 - 48) >= 0xA && (v25 & 0xFFFFFFDF) - 65 >= 0x1A && v25 != 45 && v25 != 95 )
          break;
      }
LABEL_53:
      if ( v23 >= 0x80 )
      {
        v27 = 4LL - (v23 < 0x10000);
        if ( v23 < 0x800 )
          v27 = 2;
        if ( v27 > v157 - v164 )
          sub_141939070((unsigned int)&v157, v164, v27, 1, 1);
        v28 = v23 & 0x3F | 0x80;
        v12 = v23 >> 6;
        v29 = v158;
        v163 = (char *)v158;
        if ( v23 < 0x800 )
        {
          LOBYTE(v12) = v12 | 0xC0;
          v20 = v164;
          *(_BYTE *)(v158 + v164) = v12;
          *(_BYTE *)(v29 + v20 + 1) = v28;
          v21 = 2;
        }
        else
        {
          LOBYTE(v12) = v12 & 0x3F | 0x80;
          v30 = v23 >> 12;
          v20 = v164;
          v31 = v163;
          if ( v23 > 0xFFFF )
          {
            v163[v164] = (v23 >> 18) | 0xF0;
            v31[v20 + 1] = v30 & 0x3F | 0x80;
            v31[v20 + 2] = v12;
            v31[v20 + 3] = v28;
            v21 = 4;
          }
          else
          {
            v163[v164] = v30 | 0xE0;
            v31[v20 + 1] = v12;
            v31[v20 + 2] = v28;
            v21 = 3;
          }
        }
      }
      else
      {
        v26 = v164;
        if ( v157 == v164 )
          sub_141939070((unsigned int)&v157, v164, 1, 1, 1);
        v163 = (char *)v158;
        *(_BYTE *)(v158 + v26) = v23;
        v21 = 1;
        v20 = v26;
      }
      v15 = v21 + v20;
      v159 = v15;
      v16 = v165 + 1;
      v17 = v145;
      v164 = v15;
      if ( v165 + 1 >= v145 )
        goto LABEL_35;
    }
    v32 = 0;
    while ( 1 )
    {
      v33 = (&off_141A3E850)[v32 + 1];
      v34 = v24;
      if ( v33 )
      {
        v35 = (&off_141A3E850)[v32];
        v36 = &v33[(_QWORD)v35];
        v34 = v24;
        do
        {
          v37 = (unsigned __int8)*v35;
          if ( *v35 < 0 )
          {
            v38 = v37 & 0x1F;
            v39 = v35[1] & 0x3F;
            if ( (unsigned __int8)v37 <= 0xDFu )
            {
              v35 += 2;
              v37 = v39 | (v38 << 6);
              if ( v34 >= v17 )
                goto LABEL_65;
            }
            else
            {
              v40 = (v39 << 6) | v35[2] & 0x3F;
              if ( (unsigned __int8)*v35 < 0xF0u )
              {
                v35 += 3;
                v37 = (v38 << 12) | v40;
                if ( v34 >= v17 )
                  goto LABEL_65;
              }
              else
              {
                v41 = v35[3];
                v35 += 4;
                v37 = ((v38 & 7) << 18) | (v40 << 6) | v41 & 0x3F;
                if ( v34 >= v17 )
                  goto LABEL_65;
              }
            }
          }
          else
          {
            ++v35;
            if ( v34 >= v17 )
              goto LABEL_65;
          }
          v42 = *(_DWORD *)(v144 + 4 * v34) ^ 0x20;
          if ( (unsigned int)(*(_DWORD *)(v144 + 4 * v34) - 65) >= 0x1A )
            v42 = *(_DWORD *)(v144 + 4 * v34);
          v43 = v37 | 0x20;
          if ( (unsigned int)(v37 - 65) >= 0x1A )
            v43 = v37;
          if ( v42 != v43 )
            goto LABEL_65;
          ++v34;
        }
        while ( v35 != v36 );
      }
      if ( (_DWORD)v12 )
      {
        if ( v34 >= v17 || *(_DWORD *)(v144 + 4 * v34) != (_DWORD)v12 )
          goto LABEL_65;
        ++v34;
      }
      else if ( v34 < v17 )
      {
        v44 = *(_DWORD *)(v144 + 4 * v34);
        if ( (unsigned int)(v44 - 48) < 0xA || (v44 & 0xFFFFFFDF) - 65 < 0x1A || v44 == 45 || v44 == 95 )
          goto LABEL_65;
      }
      if ( v34 < v17 )
      {
        v45 = v34 + 1;
        while ( 1 )
        {
          v48 = *(unsigned int *)(v144 + 4 * v45 - 4);
          if ( (unsigned int)(v48 - 9) >= 5 && (_DWORD)v48 != 32 )
            break;
LABEL_97:
          v47 = v45 - v17 + 1;
          ++v45;
          if ( v47 == 1 )
            goto LABEL_65;
        }
        if ( (unsigned int)v48 < 0x85 )
          goto LABEL_109;
        v49 = (unsigned int)v48 >> 8;
        if ( (unsigned int)v48 >> 8 <= 0x1F )
        {
          if ( v49 )
          {
            if ( v49 != 22 )
              goto LABEL_109;
            v46 = (_DWORD)v48 == 5760;
          }
          else
          {
            v46 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v48);
          }
          goto LABEL_96;
        }
        if ( v49 == 32 )
        {
          v46 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v48) >> 1;
          goto LABEL_96;
        }
        if ( v49 == 48 )
        {
          v46 = (_DWORD)v48 == 12288;
LABEL_96:
          if ( (v46 & 1) == 0 )
            goto LABEL_109;
          goto LABEL_97;
        }
LABEL_109:
        if ( (_DWORD)v48 == 61 || (_DWORD)v48 == 58 )
          break;
      }
LABEL_65:
      v32 += 3;
      if ( v32 == 93 )
        goto LABEL_53;
    }
    if ( v45 >= v17 )
    {
      v50 = v164;
      v51 = v163;
    }
    else
    {
      v50 = v164;
      v51 = v163;
      do
      {
        v53 = *(_DWORD *)(v144 + 4 * v45);
        v24 = v53 - 9;
        if ( (unsigned int)v24 >= 5 && v53 != 32 )
        {
          if ( v53 < 0x85 )
            goto LABEL_130;
          v24 = v53 >> 8;
          if ( v53 >> 8 > 0x1F )
          {
            if ( (_DWORD)v24 == 32 )
            {
              v24 = (unsigned __int64)off_1422402D0;
              v52 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v53) >> 1;
            }
            else
            {
              if ( (_DWORD)v24 != 48 )
                goto LABEL_130;
              v52 = v53 == 12288;
            }
          }
          else if ( (_DWORD)v24 )
          {
            if ( (_DWORD)v24 != 22 )
              goto LABEL_130;
            v52 = v53 == 5760;
          }
          else
          {
            v24 = (unsigned __int64)off_1422402D0;
            v52 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v53);
          }
          if ( (v52 & 1) == 0 )
            goto LABEL_130;
        }
        ++v45;
      }
      while ( v45 < v17 );
      v45 = v17;
    }
LABEL_130:
    if ( v45 < v165 || v45 > v17 )
      sub_14196B880(v165, v45, v17, &off_141A3EB38);
    v54 = &off_141A3E850;
    LOBYTE(v164) = (&off_141A3E850)[v32 + 2];
    v55 = (int *)(v144 + 4 * v45);
    for ( i = v156; i != (unsigned int *)v55; ++i )
    {
      v58 = *i;
      if ( *i >= 0x80 )
      {
        v59 = 4LL - (v58 < 0x10000);
        if ( v58 < 0x800 )
          v59 = 2;
        if ( v59 > v157 - v50 )
          sub_141939070((unsigned int)&v157, v50, v59, 1, 1);
        v60 = v58 & 0x3F | 0x80;
        v54 = (char **)(v58 >> 6);
        v51 = (char *)v158;
        if ( v58 < 0x800 )
        {
          LOBYTE(v54) = (unsigned __int8)v54 | 0xC0;
          *(_BYTE *)(v158 + v50) = (_BYTE)v54;
          v51[v50 + 1] = v60;
          v57 = 2;
        }
        else
        {
          LOBYTE(v54) = (unsigned __int8)v54 & 0x3F | 0x80;
          v24 = v58 >> 12;
          if ( v58 > 0xFFFF )
          {
            LOBYTE(v24) = v24 & 0x3F | 0x80;
            *(_BYTE *)(v158 + v50) = (v58 >> 18) | 0xF0;
            v51[v50 + 1] = v24;
            v51[v50 + 2] = (char)v54;
            v51[v50 + 3] = v60;
            v57 = 4;
          }
          else
          {
            LOBYTE(v24) = v24 | 0xE0;
            *(_BYTE *)(v158 + v50) = v24;
            v51[v50 + 1] = (char)v54;
            v51[v50 + 2] = v60;
            v57 = 3;
          }
        }
      }
      else
      {
        if ( v157 == v50 )
          sub_141939070((unsigned int)&v157, v50, 1, 1, 1);
        v51 = (char *)v158;
        *(_BYTE *)(v158 + v50) = v58;
        v57 = 1;
      }
      v50 += v57;
      v159 = v50;
    }
    v163 = v51;
    if ( !(_BYTE)v164 )
    {
      nullsub_1(v54, v24);
      v66 = (unsigned int *)sub_140001650(10, 1);
      if ( !v66 )
        sub_14196B2DB(1, 10);
LABEL_165:
      v68 = v66;
      qmemcpy(v66, "[REDACTED]", 10);
      *(_QWORD *)&v160 = 10;
      *((_QWORD *)&v160 + 1) = v66;
      v161 = 10;
      v165 = 10;
      v69 = v50;
      if ( v45 < v17 )
        goto LABEL_166;
      goto LABEL_285;
    }
    if ( v45 >= v17 )
    {
      nullsub_1(v54, v24);
      v66 = (unsigned int *)sub_140001650(10, 1);
      if ( !v66 )
        sub_14196B2DB(1, 10);
      goto LABEL_165;
    }
    v61 = *v55;
    v62 = v50;
    if ( *v55 <= 90 )
    {
      if ( v61 == 34 || v61 == 39 )
      {
        v63 = v45 + 1;
        v64 = v45 + 1;
        v65 = (_DWORD *)(v22 + 4 * v45);
        if ( v45 + 1 < v17 )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(v22 + 4 * v64) == v61 )
            {
              v67 = v65;
              v48 = 0;
              while ( *v67 == 92 )
              {
                ++v48;
                --v67;
                if ( v64 == v48 )
                {
                  v48 = v64;
                  break;
                }
              }
              if ( (v48 & 1) == 0 )
                break;
            }
            ++v64;
            ++v65;
            if ( v64 == v17 )
            {
              v64 = v17;
              goto LABEL_279;
            }
          }
        }
        goto LABEL_279;
      }
LABEL_259:
      v64 = v45;
      while ( 2 )
      {
        v96 = *(unsigned int *)(v22 + 4 * v64);
        if ( v96 <= 0x20 )
        {
          v97 = 0x100003E00LL;
          if ( _bittest64(&v97, v96) )
            goto LABEL_278;
        }
        if ( (unsigned int)v96 >= 0x85 )
        {
          v98 = (unsigned int)v96 >> 8;
          if ( (unsigned int)v96 >> 8 > 0x1F )
          {
            if ( v98 == 32 )
            {
              v48 = (unsigned __int64)off_1422402D0;
              v99 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v96) >> 1;
              goto LABEL_272;
            }
            if ( v98 == 48 )
            {
              v99 = (_DWORD)v96 == 12288;
              goto LABEL_272;
            }
          }
          else
          {
            if ( !v98 )
            {
              v48 = (unsigned __int64)off_1422402D0;
              v99 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v96);
              goto LABEL_272;
            }
            if ( v98 == 22 )
            {
              v99 = (_DWORD)v96 == 5760;
LABEL_272:
              if ( (v99 & 1) != 0 )
                goto LABEL_278;
            }
          }
        }
        v100 = (unsigned int)(v96 - 44);
        if ( (unsigned int)v100 <= 0x31 )
        {
          v48 = 0x2000000008001LL;
          if ( _bittest64((const __int64 *)&v48, v100) )
            goto LABEL_278;
        }
        if ( (_DWORD)v96 == 125 )
          goto LABEL_278;
        if ( v17 == ++v64 )
          goto LABEL_277;
        continue;
      }
    }
    if ( v61 != 91 && v61 != 123 )
      goto LABEL_259;
    v86 = -1;
    v64 = v45;
    v48 = 0;
    while ( 2 )
    {
      v87 = v22 - 4 + 4 * v64;
      while ( 1 )
      {
        v88 = *(_DWORD *)(v22 + 4 * v64);
        if ( v86 == -1 )
          break;
        if ( v88 == v86 )
        {
          v89 = (_DWORD *)v87;
          v90 = 0;
          while ( *v89 == 92 )
          {
            ++v90;
            --v89;
            if ( v64 == v90 )
            {
              LOBYTE(v90) = v64;
              break;
            }
          }
          v86 = (v90 & 1) == 0 ? -1 : v86;
        }
        ++v64;
        v87 += 4;
        if ( v64 == v17 )
        {
LABEL_277:
          v64 = v17;
          goto LABEL_278;
        }
      }
      if ( v88 == 34 || v88 == 39 )
      {
        v86 = *(_DWORD *)(v22 + 4 * v64);
      }
      else if ( v88 == v61 )
      {
        ++v48;
        v86 = -1;
      }
      else
      {
        v86 = -1;
        if ( v88 == ((32 * (v61 == 123)) | 0x5D) )
        {
          v85 = v48-- <= 1;
          if ( v85 )
          {
            ++v64;
            break;
          }
        }
      }
      if ( ++v64 < v17 )
        continue;
      break;
    }
LABEL_278:
    v63 = v45 + (v61 == 39);
LABEL_279:
    if ( v64 <= v63 )
    {
      nullsub_1(v63, v64);
      v102 = (void *)sub_140001650(10, 1);
      if ( !v102 )
        sub_14196B2DB(1, 10);
      v12 = (unsigned __int64)v102;
      qmemcpy(v102, "[REDACTED]", 10);
      *(_QWORD *)&v160 = 10;
      *((_QWORD *)&v160 + 1) = v102;
      v161 = 10;
      v165 = 10;
      v69 = v62;
      v68 = (unsigned int *)v102;
      if ( v45 >= v17 )
        goto LABEL_285;
LABEL_166:
      v70 = *v55;
      if ( *v55 <= 90 )
      {
        if ( v70 == 34 || v70 == 39 )
        {
          v71 = v157;
          if ( v157 == v69 )
          {
            v156 = v68;
            v106 = v69;
            sub_141939070((unsigned int)&v157, v69, 1, 1, 1);
            v71 = v157;
            v69 = v106;
            v68 = v156;
          }
          v163 = (char *)v158;
          *(_BYTE *)(v158 + v69) = v70;
          v72 = v69 + 1;
          v159 = v72;
          v73 = v165;
          if ( v165 > v71 - v72 )
          {
            v156 = v68;
            sub_141939070((unsigned int)&v157, v72, v165, 1, 1);
            v163 = (char *)v158;
            v72 = v159;
            v68 = v156;
            v73 = v165;
          }
          else if ( !v165 )
          {
            goto LABEL_174;
          }
          v164 = v72;
          sub_1419234B0(&v163[v72], v68, v73);
          v72 = v164;
LABEL_174:
          v15 = v73 + v72;
          v159 = v15;
          v12 = v45 + 1;
          if ( v45 + 1 < v17 )
          {
            while ( 1 )
            {
              v74 = v12;
              if ( *(_DWORD *)(v22 + 4 * v12) == v70 )
              {
                v75 = v55;
                v12 = 0;
                while ( *v75 == 92 )
                {
                  ++v12;
                  --v75;
                  if ( v74 == v12 )
                  {
                    v12 = v74;
                    break;
                  }
                }
                if ( (v12 & 1) == 0 )
                  break;
              }
              v12 = v74 + 1;
              ++v55;
              v45 = v74;
              if ( v74 + 1 == v17 )
                goto LABEL_258;
            }
            if ( v157 == v15 )
            {
              v156 = v68;
              v107 = v15;
              sub_141939070((unsigned int)&v157, v15, 1, 1, 1);
              v163 = (char *)v158;
              v15 = v107;
            }
            v163[v15++] = v70;
            v159 = v15;
            v45 += 2LL;
          }
          else
          {
            ++v45;
          }
          goto LABEL_289;
        }
LABEL_231:
        v91 = v165;
        if ( v165 > v157 - v69 )
        {
          v156 = v68;
          sub_141939070((unsigned int)&v157, v69, v165, 1, 1);
          v69 = v159;
          v68 = v156;
          v91 = v165;
        }
        else if ( !v165 )
        {
          goto LABEL_234;
        }
        v163 = (char *)v158;
        v92 = v69;
        sub_1419234B0(v158 + v69, v68, v91);
        v69 = v92;
LABEL_234:
        v15 = v91 + v69;
        v159 = v15;
        if ( !(_BYTE)v164 )
        {
          while ( 1 )
          {
            v95 = *(unsigned int *)(v22 + 4 * v45);
            if ( v95 <= 0x3B )
            {
              v12 = 0x800100000002400LL;
              if ( _bittest64((const __int64 *)&v12, v95) )
                goto LABEL_289;
            }
            if ( (_DWORD)v95 == 93 || (_DWORD)v95 == 125 )
              goto LABEL_289;
            if ( v17 == ++v45 )
            {
LABEL_258:
              v45 = v17;
              goto LABEL_289;
            }
          }
        }
        while ( 1 )
        {
          v93 = *(unsigned int *)(v22 + 4 * v45);
          if ( v93 <= 0x20 )
          {
            v12 = 0x100003E00LL;
            if ( _bittest64((const __int64 *)&v12, v93) )
              goto LABEL_289;
          }
          if ( (unsigned int)v93 >= 0x85 )
          {
            v12 = (unsigned int)v93 >> 8;
            if ( (unsigned int)v93 >> 8 > 0x1F )
            {
              if ( (_DWORD)v12 == 32 )
              {
                v12 = *((unsigned __int8 *)off_1422402D0 + (unsigned __int8)v93);
                LOBYTE(v12) = (unsigned __int8)v12 >> 1;
              }
              else
              {
                if ( (_DWORD)v12 != 48 )
                  goto LABEL_248;
                LOBYTE(v12) = (_DWORD)v93 == 12288;
              }
            }
            else if ( (_DWORD)v12 )
            {
              if ( (_DWORD)v12 != 22 )
                goto LABEL_248;
              LOBYTE(v12) = (_DWORD)v93 == 5760;
            }
            else
            {
              v12 = *((unsigned __int8 *)off_1422402D0 + (unsigned __int8)v93);
            }
            if ( (v12 & 1) != 0 )
              goto LABEL_289;
          }
LABEL_248:
          v12 = (unsigned int)(v93 - 44);
          if ( (unsigned int)v12 <= 0x31 )
          {
            v94 = 0x2000000008001LL;
            if ( _bittest64(&v94, v12) )
              goto LABEL_289;
          }
          if ( (_DWORD)v93 == 125 )
            goto LABEL_289;
          if ( v17 == ++v45 )
            goto LABEL_258;
        }
      }
      if ( v70 != 91 && v70 != 123 )
        goto LABEL_231;
      v76 = v165;
      if ( v165 > v157 - v69 )
      {
        v156 = v68;
        sub_141939070((unsigned int)&v157, v69, v165, 1, 1);
        v69 = v159;
        v68 = v156;
        v76 = v165;
      }
      else if ( !v165 )
      {
LABEL_188:
        v78 = v76 + v69;
        v159 = v76 + v69;
        v12 = v22 - 4;
        v79 = -1;
        v80 = 0;
        while ( 2 )
        {
          v81 = (_DWORD *)(v12 + 4 * v45);
          while ( 1 )
          {
            v82 = *(_DWORD *)(v22 + 4 * v45);
            if ( v79 == -1 )
              break;
            if ( v82 == v79 )
            {
              v83 = v81;
              v84 = 0;
              while ( *v83 == 92 )
              {
                ++v84;
                --v83;
                if ( v45 == v84 )
                {
                  LOBYTE(v84) = v45;
                  break;
                }
              }
              v79 = (v84 & 1) == 0 ? -1 : v79;
            }
            ++v45;
            ++v81;
            if ( v45 == v17 )
            {
              v45 = v17;
              v15 = v78;
              goto LABEL_289;
            }
          }
          if ( v82 == 34 || v82 == 39 )
          {
            v79 = *(_DWORD *)(v22 + 4 * v45);
          }
          else if ( v82 == v70 )
          {
            ++v80;
            v79 = -1;
          }
          else
          {
            v79 = -1;
            if ( v82 == ((32 * (v70 == 123)) | 0x5D) )
            {
              v85 = v80-- <= 1;
              if ( v85 )
              {
                ++v45;
                v15 = v78;
                goto LABEL_289;
              }
            }
          }
          if ( ++v45 < v17 )
            continue;
          break;
        }
        v15 = v78;
        goto LABEL_289;
      }
      v163 = (char *)v158;
      v77 = v69;
      sub_1419234B0(v158 + v69, v68, v76);
      v69 = v77;
      goto LABEL_188;
    }
    if ( v64 > v17 )
      sub_14196B880(v63, v64, v17, &off_141A3E768);
    sub_1401D27C0(&v139, v22 + 4 * v63, v22 + 4 * v64, v48);
    v101 = v62;
    v165 = v140;
    sub_1406CCAB0(&v150, v140, v141);
    *(_QWORD *)&v146 = &v150;
    *(_QWORD *)&v160 = &v146;
    *((_QWORD *)&v160 + 1) = sub_140763680;
    sub_1416DAFA0(&v148, &unk_141A07040, &v160);
    if ( (_QWORD)v148 == -1 )
    {
      *(_QWORD *)&v146 = 0;
      *((_QWORD *)&v146 + 1) = 1;
      v147 = 0;
    }
    else
    {
      v161 = v149;
      v160 = v148;
      sub_14085B4D0((char *)&v150 + 1, (char *)&v150 + 6, &v160);
      v147 = v161;
      v146 = v160;
    }
    *(_QWORD *)&v148 = &v146;
    *((_QWORD *)&v148 + 1) = sub_1400015F0;
    sub_1416DAFA0(&v160, &unk_141A3E75A, &v148);
    if ( (_QWORD)v146 )
      sub_140001660(*((_QWORD *)&v146 + 1), v146, 1);
    if ( v139 )
      sub_140001660(v165, v139, 1);
    v68 = *((unsigned int **)&v160 + 1);
    v165 = v161;
    v69 = v101;
    if ( v45 < v17 )
      goto LABEL_166;
LABEL_285:
    v103 = v165;
    if ( v165 > v157 - v69 )
    {
      v156 = v68;
      sub_141939070((unsigned int)&v157, v69, v165, 1, 1);
      v69 = v159;
      v68 = v156;
      v103 = v165;
LABEL_287:
      v163 = (char *)v158;
      v104 = v69;
      sub_1419234B0(v158 + v69, v68, v103);
      v69 = v104;
    }
    else if ( v165 )
    {
      goto LABEL_287;
    }
    v15 = v103 + v69;
    v159 = v15;
LABEL_289:
    if ( (_QWORD)v160 )
    {
      v105 = v15;
      sub_140001660(*((_QWORD *)&v160 + 1), v160, 1);
      v15 = v105;
    }
    v16 = v45;
    v17 = v145;
    v164 = v15;
  }
  while ( v45 < v145 );
LABEL_35:
  v165 = v157;
  v18 = v143;
  if ( v143 )
  {
    sub_140001660(v144, 4 * v143, 4);
    v15 = v164;
  }
  if ( v15 < 0 )
  {
    v19 = 0;
    goto LABEL_39;
  }
  v108 = 1;
  v109 = 1;
  if ( v15 )
  {
    nullsub_1(v12, v18);
    v19 = 1;
    v109 = sub_140001650(v164, 1);
    v15 = v164;
    if ( !v109 )
LABEL_39:
      sub_14196B2DB(v19, v15);
  }
  *(_QWORD *)&v160 = v15;
  *((_QWORD *)&v160 + 1) = v109;
  v161 = 0;
  v150 = 0;
  v151 = 1;
  v152 = 0;
  v110 = v163;
  v111 = (unsigned __int8 *)&v163[v15];
  v112 = 0;
  while ( 2 )
  {
    v113 = v112;
LABEL_315:
    if ( v110 != (char *)v111 )
    {
      v115 = (unsigned __int8)*v110;
      if ( *v110 < 0 )
      {
        v116 = v115 & 0x1F;
        v117 = v110[1] & 0x3F;
        if ( (unsigned __int8)v115 <= 0xDFu )
        {
          v110 += 2;
          v115 = v117 | (v116 << 6);
          if ( v115 - 9 >= 5 )
            goto LABEL_326;
        }
        else
        {
          v118 = (v117 << 6) | v110[2] & 0x3F;
          if ( (unsigned __int8)*v110 < 0xF0u )
          {
            v110 += 3;
            v115 = (v116 << 12) | v118;
            if ( v115 - 9 >= 5 )
            {
LABEL_326:
              if ( v115 != 32 )
              {
                if ( v115 < 0x85 )
                  goto LABEL_328;
                v127 = v115 >> 8;
                if ( v115 >> 8 > 0x1F )
                {
                  if ( v127 == 32 )
                  {
                    if ( (*((_BYTE *)off_1422402D0 + (unsigned __int8)v115) & 2) == 0 )
                      goto LABEL_328;
                  }
                  else if ( v127 != 48 || v115 != 12288 )
                  {
LABEL_328:
                    switch ( v115 )
                    {
                      case '"':
                      case '&':
                      case '\'':
                      case '(':
                      case ')':
                      case ',':
                      case '/':
                      case ':':
                      case ';':
                      case '<':
                      case '=':
                      case '>':
                      case '?':
                      case '[':
                      case ']':
                      case '`':
                      case '{':
                      case '|':
                      case '}':
                        break;
                      default:
                        if ( v115 >= 0x80 )
                        {
                          v129 = 4LL - (v115 < 0x10000);
                          if ( v115 < 0x800 )
                            v129 = 2;
                          if ( v129 > v150 - v113 )
                          {
                            v135 = v113;
                            sub_141939070((unsigned int)&v150, v113, v129, 1, 1);
                            v113 = v135;
                            v108 = v151;
                          }
                          v130 = v115 & 0x3F | 0x80;
                          v131 = v115 >> 6;
                          if ( v115 >= 0x800 )
                          {
                            v132 = v131 & 0x3F | 0x80;
                            v133 = v115 >> 12;
                            if ( v115 > 0xFFFF )
                            {
                              *(_BYTE *)(v108 + v113) = (v115 >> 18) | 0xF0;
                              *(_BYTE *)(v108 + v113 + 1) = v133 & 0x3F | 0x80;
                              *(_BYTE *)(v108 + v113 + 2) = v132;
                              *(_BYTE *)(v108 + v113 + 3) = v130;
                              v128 = 4;
                            }
                            else
                            {
                              *(_BYTE *)(v108 + v113) = v133 | 0xE0;
                              *(_BYTE *)(v108 + v113 + 1) = v132;
                              *(_BYTE *)(v108 + v113 + 2) = v130;
                              v128 = 3;
                            }
                          }
                          else
                          {
                            *(_BYTE *)(v108 + v113) = v131 | 0xC0;
                            *(_BYTE *)(v108 + v113 + 1) = v130;
                            v128 = 2;
                          }
                        }
                        else
                        {
                          if ( v150 == v113 )
                          {
                            v134 = v113;
                            sub_141939070((unsigned int)&v150, v113, 1, 1, 1);
                            v113 = v134;
                          }
                          v108 = v151;
                          *(_BYTE *)(v151 + v113) = v115;
                          v128 = 1;
                        }
                        v112 = v113 + v128;
                        v152 = v112;
                        continue;
                    }
                  }
                }
                else if ( v127 )
                {
                  if ( v127 != 22 || v115 != 5760 )
                    goto LABEL_328;
                }
                else if ( (*((_BYTE *)off_1422402D0 + (unsigned __int8)v115) & 1) == 0 )
                {
                  goto LABEL_328;
                }
              }
            }
          }
          else
          {
            v119 = v110[3];
            v110 += 4;
            v115 = ((v116 & 7) << 18) | (v118 << 6) | v119 & 0x3F;
            if ( v115 - 9 >= 5 )
              goto LABEL_326;
          }
        }
      }
      else
      {
        ++v110;
        if ( v115 - 9 >= 5 )
          goto LABEL_326;
      }
      sub_14072D340(&v160, v108, v113);
      v152 = 0;
      v120 = v161;
      if ( v115 >= 0x80 )
      {
        v121 = 4LL - (v115 < 0x10000);
        if ( v115 < 0x800 )
          v121 = 2;
        if ( v121 > (__int64)v160 - v161 )
          sub_141939070((unsigned int)&v160, v161, v121, 1, 1);
        v122 = v115 & 0x3F | 0x80;
        v123 = v115 >> 6;
        v124 = *((_QWORD *)&v160 + 1);
        if ( v115 < 0x800 )
        {
          *(_BYTE *)(*((_QWORD *)&v160 + 1) + v120) = v123 | 0xC0;
          *(_BYTE *)(v124 + v120 + 1) = v122;
          v114 = 2;
        }
        else
        {
          v125 = v123 & 0x3F | 0x80;
          v126 = v115 >> 12;
          if ( v115 > 0xFFFF )
          {
            *(_BYTE *)(*((_QWORD *)&v160 + 1) + v120) = (v115 >> 18) | 0xF0;
            *(_BYTE *)(v124 + v120 + 1) = v126 & 0x3F | 0x80;
            *(_BYTE *)(v124 + v120 + 2) = v125;
            *(_BYTE *)(v124 + v120 + 3) = v122;
            v114 = 4;
          }
          else
          {
            *(_BYTE *)(*((_QWORD *)&v160 + 1) + v120) = v126 | 0xE0;
            *(_BYTE *)(v124 + v120 + 1) = v125;
            *(_BYTE *)(v124 + v120 + 2) = v122;
            v114 = 3;
          }
        }
      }
      else
      {
        if ( (_QWORD)v160 == v161 )
          sub_141939070((unsigned int)&v160, v161, 1, 1, 1);
        *(_BYTE *)(*((_QWORD *)&v160 + 1) + v120) = v115;
        v114 = 1;
      }
      v161 = v120 + v114;
      v113 = 0;
      goto LABEL_315;
    }
    break;
  }
  v136 = v151;
  sub_14072D340(&v160, v151, v113);
  v137 = (_OWORD *)v142;
  *(_QWORD *)(v142 + 16) = v161;
  result = *(double *)&v160;
  *v137 = v160;
  if ( v150 )
    result = sub_140001660(v136, v150, 1);
  if ( v165 )
    result = sub_140001660(v163, v165, 1);
  if ( v155 )
    return sub_140001660(v162, v155, 1);
  return result;
}
