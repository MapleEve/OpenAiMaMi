// module: codexmate_lib/platform/debug_log
// addr: 0x140403d70
// name: sub_140403D70
// win 1.2.1 | module src/platform/debug_log.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140403D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // r12d
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rsi
  unsigned __int64 v27; // r8
  unsigned __int8 v28; // al
  unsigned __int8 *v29; // rdx
  unsigned int v30; // edx
  unsigned __int8 *v31; // r9
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
  unsigned int v48; // r9d
  unsigned int v49; // r10d
  __int64 v50; // rdi
  unsigned __int8 *v51; // r8
  unsigned __int64 v52; // r9
  char v53; // cl
  unsigned int v54; // ecx
  unsigned int v55; // edx
  char **v56; // rcx
  int *v57; // r14
  __int64 v58; // rax
  unsigned __int64 v59; // r15
  unsigned int v60; // r12d
  unsigned __int8 *v61; // r9
  unsigned __int64 v62; // r8
  unsigned __int8 v63; // al
  unsigned int v64; // edx
  int v65; // eax
  __int64 v66; // r12
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  _DWORD *v69; // r8
  void *v70; // rax
  _DWORD *v71; // r10
  unsigned __int64 v72; // r12
  __int64 v73; // r8
  int v74; // r15d
  __int64 v75; // rax
  __int64 v76; // r8
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // rax
  int *v79; // rdx
  unsigned __int64 v80; // r14
  __int64 v81; // rdi
  __int64 v82; // rdi
  int v83; // r8d
  unsigned __int64 v84; // rdx
  _DWORD *v85; // r9
  int v86; // r10d
  _DWORD *v87; // r11
  __int64 v88; // r10
  bool v89; // cc
  int v90; // r10d
  __int64 v91; // r11
  int v92; // edi
  _DWORD *v93; // r15
  __int64 v94; // rdi
  unsigned __int64 v95; // r14
  __int64 v96; // rdi
  unsigned __int64 v97; // rax
  __int64 v98; // rdx
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rcx
  __int64 v101; // r8
  unsigned int v102; // r8d
  char v103; // r8
  unsigned __int64 v104; // r8
  __int64 v105; // rdi
  void *v106; // rax
  unsigned __int64 v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // r14
  __int64 v113; // rax
  unsigned __int8 *v114; // r13
  unsigned __int8 *v115; // rdi
  __int64 v116; // rax
  __int64 v117; // r8
  __int64 v118; // rax
  unsigned int v119; // r15d
  int v120; // eax
  int v121; // edx
  int v122; // r15d
  unsigned __int8 v123; // cl
  unsigned __int64 v124; // r12
  unsigned __int64 v125; // r8
  char v126; // al
  unsigned int v127; // ecx
  __int64 v128; // rdx
  char v129; // cl
  unsigned int v130; // r8d
  unsigned int v131; // eax
  __int64 v132; // rax
  unsigned __int64 v133; // rax
  char v134; // al
  unsigned int v135; // ecx
  char v136; // cl
  unsigned int v137; // edx
  __int64 v138; // r14
  __int64 v139; // r14
  __int64 v140; // rdi
  __int64 result; // rax
  _OWORD *v142; // rcx
  _QWORD v143[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v144; // [rsp+50h] [rbp-30h]
  __int64 v145; // [rsp+58h] [rbp-28h] BYREF
  __int64 v146; // [rsp+60h] [rbp-20h]
  unsigned __int64 v147; // [rsp+68h] [rbp-18h]
  __int64 v148; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int8 *v149; // [rsp+78h] [rbp-8h]
  unsigned __int64 v150; // [rsp+80h] [rbp+0h]
  __int64 v151; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int64 v152; // [rsp+90h] [rbp+10h]
  __int64 v153; // [rsp+98h] [rbp+18h]
  __int64 v154; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v155; // [rsp+A8h] [rbp+28h]
  __int64 v156; // [rsp+B0h] [rbp+30h]
  __int64 v157; // [rsp+C0h] [rbp+40h]
  __int64 v158; // [rsp+C8h] [rbp+48h]
  __int64 v159; // [rsp+D0h] [rbp+50h]
  __int128 v160; // [rsp+D8h] [rbp+58h] BYREF
  unsigned __int64 v161; // [rsp+E8h] [rbp+68h]
  __int64 v162; // [rsp+F0h] [rbp+70h] BYREF
  unsigned __int8 *v163; // [rsp+F8h] [rbp+78h]
  __int64 v164; // [rsp+100h] [rbp+80h]
  unsigned __int64 v165; // [rsp+108h] [rbp+88h]
  __int64 v166; // [rsp+110h] [rbp+90h]
  unsigned __int8 *v167; // [rsp+118h] [rbp+98h]
  __int64 v168; // [rsp+120h] [rbp+A0h]
  unsigned __int64 v169; // [rsp+128h] [rbp+A8h]
  __int64 v170; // [rsp+130h] [rbp+B0h]

  v170 = -2;
  v5 = a3;
  if ( a3 < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v144 = a1;
  if ( a3 )
  {
    v8 = a4;
    nullsub_1(a1);
    v6 = 1;
    v9 = sub_140001650(v5, 1);
    if ( !v9 )
LABEL_3:
      sub_1416C2D4B(v6, v5);
    v166 = v9;
    sub_141684120(v9, a2, v5);
    a4 = v8;
    if ( v8 )
      goto LABEL_7;
LABEL_13:
    v10 = v5;
    goto LABEL_16;
  }
  v166 = 1;
  if ( !a4 )
    goto LABEL_13;
LABEL_7:
  v158 = v166;
  v157 = v5;
  sub_14149B760(&v160, a4, a5);
  if ( v161 )
  {
    v169 = *((_QWORD *)&v160 + 1);
    v168 = v5;
    sub_140342CA0(&v154, v166, v5, *((unsigned __int8 **)&v160 + 1), v161, aCodex_1, 8u);
    if ( v168 )
      sub_140001660(v166, v168, 1);
    v10 = v154;
    v166 = v155;
    v5 = v156;
    v11 = v160;
    if ( (unsigned __int64)(v160 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_16;
    goto LABEL_15;
  }
  v10 = v5;
  v11 = v160;
  if ( (unsigned __int64)(v160 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_15:
    sub_140001660(*((_QWORD *)&v160 + 1), v11, 1);
LABEL_16:
  v158 = v166;
  v159 = v10;
  v157 = v10;
  sub_14128C7A0(&v154);
  if ( v154 != -1 )
  {
    v168 = v154;
    v169 = v155;
    sub_14149B760(&v148, v155, v156);
    if ( v150 )
    {
      v167 = v149;
      sub_140342CA0((__int64 *)&v160, v166, v5, v149, v150, (unsigned __int8 *)&aCodex_1[8], 1u);
      if ( v159 )
        sub_140001660(v166, v159, 1);
      v166 = *((_QWORD *)&v160 + 1);
      v159 = v160;
      v5 = v161;
    }
    if ( (unsigned __int64)(v148 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v149, v148, 1);
    if ( v168 )
      sub_140001660(v169, v168, 1);
  }
  v158 = v166;
  v157 = v159;
  sub_14031EDD0(&v145, v166, v166 + v5);
  if ( v5 < 0 )
  {
    v13 = 0;
    goto LABEL_27;
  }
  if ( v5 )
  {
    nullsub_1(v12);
    v13 = 1;
    v14 = sub_140001650(v5, 1);
    if ( !v14 )
LABEL_27:
      sub_1416C2D4B(v13, v5);
  }
  else
  {
    v14 = 1;
  }
  v162 = v5;
  v167 = (unsigned __int8 *)v14;
  v163 = (unsigned __int8 *)v14;
  v164 = 0;
  v15 = 0;
  v16 = 0;
  v17 = v147;
  v168 = 0;
  if ( !v147 )
    goto LABEL_33;
  do
  {
    while ( 1 )
    {
      v22 = v146;
      v23 = *(_DWORD *)(v146 + 4 * v16);
      v12 = 0;
      if ( v23 == 39 )
        v12 = 39;
      if ( v23 == 34 )
        v12 = 34;
      v169 = v16;
      v24 = v16 - (((_DWORD)v12 == 0) - 1LL);
      if ( v24 < v17 )
      {
        v165 = v146 + 4 * v169;
        if ( !v169 )
          break;
        if ( (_DWORD)v12 )
          break;
        v25 = *(_DWORD *)(v165 - 4);
        if ( (unsigned int)(v25 - 48) >= 0xA && (v25 & 0xFFFFFFDF) - 65 >= 0x1A && v25 != 45 && v25 != 95 )
          break;
      }
LABEL_51:
      if ( v23 >= 0x80 )
      {
        v27 = 4LL - (v23 < 0x10000);
        if ( v23 < 0x800 )
          v27 = 2;
        if ( v27 > v162 - v168 )
          sub_141688D30((unsigned int)&v162, v168, v27, 1, 1);
        v28 = v23 & 0x3F | 0x80;
        v12 = v23 >> 6;
        v29 = v163;
        v167 = v163;
        if ( v23 < 0x800 )
        {
          LOBYTE(v12) = v12 | 0xC0;
          v20 = v168;
          v163[v168] = v12;
          v29[v20 + 1] = v28;
          v21 = 2;
        }
        else
        {
          LOBYTE(v12) = v12 & 0x3F | 0x80;
          v30 = v23 >> 12;
          v20 = v168;
          v31 = v167;
          if ( v23 > 0xFFFF )
          {
            v167[v168] = (v23 >> 18) | 0xF0;
            v31[v20 + 1] = v30 & 0x3F | 0x80;
            v31[v20 + 2] = v12;
            v31[v20 + 3] = v28;
            v21 = 4;
          }
          else
          {
            v167[v168] = v30 | 0xE0;
            v31[v20 + 1] = v12;
            v31[v20 + 2] = v28;
            v21 = 3;
          }
        }
      }
      else
      {
        v26 = v168;
        if ( v162 == v168 )
          sub_141688D30((unsigned int)&v162, v168, 1, 1, 1);
        v167 = v163;
        v163[v26] = v23;
        v21 = 1;
        v20 = v26;
      }
      v15 = v21 + v20;
      v164 = v15;
      v16 = v169 + 1;
      v17 = v147;
      v168 = v15;
      if ( v169 + 1 >= v147 )
        goto LABEL_33;
    }
    v32 = 0;
    while ( 1 )
    {
      v33 = (&off_141752C00)[v32 + 1];
      v34 = v24;
      if ( v33 )
      {
        v35 = (&off_141752C00)[v32];
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
                goto LABEL_63;
            }
            else
            {
              v40 = (v39 << 6) | v35[2] & 0x3F;
              if ( (unsigned __int8)*v35 < 0xF0u )
              {
                v35 += 3;
                v37 = (v38 << 12) | v40;
                if ( v34 >= v17 )
                  goto LABEL_63;
              }
              else
              {
                v41 = v35[3];
                v35 += 4;
                v37 = ((v38 & 7) << 18) | (v40 << 6) | v41 & 0x3F;
                if ( v34 >= v17 )
                  goto LABEL_63;
              }
            }
          }
          else
          {
            ++v35;
            if ( v34 >= v17 )
              goto LABEL_63;
          }
          v42 = *(_DWORD *)(v146 + 4 * v34) ^ 0x20;
          if ( (unsigned int)(*(_DWORD *)(v146 + 4 * v34) - 65) >= 0x1A )
            v42 = *(_DWORD *)(v146 + 4 * v34);
          v43 = v37 | 0x20;
          if ( (unsigned int)(v37 - 65) >= 0x1A )
            v43 = v37;
          if ( v42 != v43 )
            goto LABEL_63;
          ++v34;
        }
        while ( v35 != v36 );
      }
      if ( (_DWORD)v12 )
      {
        if ( v34 >= v17 || *(_DWORD *)(v146 + 4 * v34) != (_DWORD)v12 )
          goto LABEL_63;
        ++v34;
      }
      else if ( v34 < v17 )
      {
        v44 = *(_DWORD *)(v146 + 4 * v34);
        if ( (unsigned int)(v44 - 48) < 0xA || (v44 & 0xFFFFFFDF) - 65 < 0x1A || v44 == 45 || v44 == 95 )
          goto LABEL_63;
      }
      if ( v34 < v17 )
      {
        v45 = v34 + 1;
        while ( 1 )
        {
          v48 = *(_DWORD *)(v146 + 4 * v45 - 4);
          if ( v48 - 9 >= 5 && v48 != 32 )
            break;
LABEL_95:
          v47 = v45 - v17 + 1;
          ++v45;
          if ( v47 == 1 )
            goto LABEL_63;
        }
        if ( v48 < 0x85 )
          goto LABEL_107;
        v49 = v48 >> 8;
        if ( v48 >> 8 <= 0x1F )
        {
          if ( v49 )
          {
            if ( v49 != 22 )
              goto LABEL_107;
            v46 = v48 == 5760;
          }
          else
          {
            v46 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v48);
          }
          goto LABEL_94;
        }
        if ( v49 == 32 )
        {
          v46 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v48) >> 1;
          goto LABEL_94;
        }
        if ( v49 == 48 )
        {
          v46 = v48 == 12288;
LABEL_94:
          if ( (v46 & 1) == 0 )
            goto LABEL_107;
          goto LABEL_95;
        }
LABEL_107:
        if ( v48 == 61 || v48 == 58 )
          break;
      }
LABEL_63:
      v32 += 3;
      if ( v32 == 93 )
        goto LABEL_51;
    }
    if ( v45 >= v17 )
    {
      v50 = v168;
      v51 = v167;
      v52 = v165;
    }
    else
    {
      v50 = v168;
      v51 = v167;
      v52 = v165;
      do
      {
        v54 = *(_DWORD *)(v146 + 4 * v45);
        if ( v54 - 9 >= 5 && v54 != 32 )
        {
          if ( v54 < 0x85 )
            goto LABEL_128;
          v55 = v54 >> 8;
          if ( v54 >> 8 > 0x1F )
          {
            if ( v55 == 32 )
            {
              v53 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v54) >> 1;
            }
            else
            {
              if ( v55 != 48 )
                goto LABEL_128;
              v53 = v54 == 12288;
            }
          }
          else if ( v55 )
          {
            if ( v55 != 22 )
              goto LABEL_128;
            v53 = v54 == 5760;
          }
          else
          {
            v53 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v54);
          }
          if ( (v53 & 1) == 0 )
            goto LABEL_128;
        }
        ++v45;
      }
      while ( v45 < v17 );
      v45 = v17;
    }
LABEL_128:
    if ( v45 < v169 || v45 > v17 )
      sub_1416C32F0(v169, v45, v17, &off_141752EE8);
    v56 = &off_141752C00;
    LOBYTE(v168) = (&off_141752C00)[v32 + 2];
    v57 = (int *)(v146 + 4 * v45);
    while ( (int *)v52 != v57 )
    {
      v59 = v52;
      v60 = *(_DWORD *)v52;
      if ( *(_DWORD *)v52 >= 0x80u )
      {
        v61 = v51;
        v62 = 4LL - (v60 < 0x10000);
        if ( v60 < 0x800 )
          v62 = 2;
        if ( v62 > v162 - v50 )
        {
          sub_141688D30((unsigned int)&v162, v50, v62, 1, 1);
          v61 = v163;
        }
        v63 = v60 & 0x3F | 0x80;
        v56 = (char **)(v60 >> 6);
        if ( v60 < 0x800 )
        {
          LOBYTE(v56) = (unsigned __int8)v56 | 0xC0;
          v51 = v61;
          v61[v50] = (unsigned __int8)v56;
          v61[v50 + 1] = v63;
          v58 = 2;
        }
        else
        {
          LOBYTE(v56) = (unsigned __int8)v56 & 0x3F | 0x80;
          v64 = v60 >> 12;
          v51 = v61;
          if ( v60 > 0xFFFF )
          {
            v61[v50] = (v60 >> 18) | 0xF0;
            v61[v50 + 1] = v64 & 0x3F | 0x80;
            v61[v50 + 2] = (unsigned __int8)v56;
            v61[v50 + 3] = v63;
            v58 = 4;
          }
          else
          {
            v61[v50] = v64 | 0xE0;
            v61[v50 + 1] = (unsigned __int8)v56;
            v61[v50 + 2] = v63;
            v58 = 3;
          }
        }
      }
      else
      {
        if ( v162 == v50 )
          sub_141688D30((unsigned int)&v162, v50, 1, 1, 1);
        v51 = v163;
        v163[v50] = v60;
        v58 = 1;
      }
      v50 += v58;
      v164 = v50;
      v52 = v59 + 4;
    }
    v167 = v51;
    if ( !(_BYTE)v168 )
    {
      nullsub_1(v56);
      v70 = (void *)sub_140001650(10, 1);
      if ( !v70 )
        sub_1416C2D4B(1, 10);
LABEL_163:
      v72 = (unsigned __int64)v70;
      qmemcpy(v70, "[REDACTED]", 10);
      v151 = 10;
      v152 = (unsigned __int64)v70;
      v153 = 10;
      v169 = 10;
      v73 = v50;
      if ( v45 < v17 )
        goto LABEL_164;
      goto LABEL_287;
    }
    if ( v45 >= v17 )
    {
      nullsub_1(v56);
      v70 = (void *)sub_140001650(10, 1);
      if ( !v70 )
        sub_1416C2D4B(1, 10);
      goto LABEL_163;
    }
    v65 = *v57;
    v66 = v50;
    if ( *v57 <= 90 )
    {
      if ( v65 == 34 || v65 == 39 )
      {
        v67 = v45 + 1;
        v68 = v45 + 1;
        v69 = (_DWORD *)(v22 + 4 * v45);
        if ( v45 + 1 < v17 )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(v22 + 4 * v68) == v65 )
            {
              v71 = v69;
              v52 = 0;
              while ( *v71 == 92 )
              {
                ++v52;
                --v71;
                if ( v68 == v52 )
                {
                  v52 = v68;
                  break;
                }
              }
              if ( (v52 & 1) == 0 )
                break;
            }
            ++v68;
            ++v69;
            if ( v68 == v17 )
            {
              v68 = v17;
              goto LABEL_277;
            }
          }
        }
        goto LABEL_277;
      }
LABEL_257:
      v68 = v45;
      while ( 2 )
      {
        v100 = *(unsigned int *)(v22 + 4 * v68);
        if ( v100 <= 0x20 )
        {
          v101 = 0x100003E00LL;
          if ( _bittest64(&v101, v100) )
            goto LABEL_276;
        }
        if ( (unsigned int)v100 >= 0x85 )
        {
          v102 = (unsigned int)v100 >> 8;
          if ( (unsigned int)v100 >> 8 > 0x1F )
          {
            if ( v102 == 32 )
            {
              v52 = (unsigned __int64)off_141EC9120;
              v103 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v100) >> 1;
              goto LABEL_270;
            }
            if ( v102 == 48 )
            {
              v103 = (_DWORD)v100 == 12288;
              goto LABEL_270;
            }
          }
          else
          {
            if ( !v102 )
            {
              v52 = (unsigned __int64)off_141EC9120;
              v103 = *((_BYTE *)off_141EC9120 + (unsigned __int8)v100);
              goto LABEL_270;
            }
            if ( v102 == 22 )
            {
              v103 = (_DWORD)v100 == 5760;
LABEL_270:
              if ( (v103 & 1) != 0 )
                goto LABEL_276;
            }
          }
        }
        v104 = (unsigned int)(v100 - 44);
        if ( (unsigned int)v104 <= 0x31 )
        {
          v52 = 0x2000000008001LL;
          if ( _bittest64((const __int64 *)&v52, v104) )
            goto LABEL_276;
        }
        if ( (_DWORD)v100 == 125 )
          goto LABEL_276;
        if ( v17 == ++v68 )
          goto LABEL_275;
        continue;
      }
    }
    if ( v65 != 91 && v65 != 123 )
      goto LABEL_257;
    v90 = -1;
    v68 = v45;
    v52 = 0;
    while ( 2 )
    {
      v91 = v22 - 4 + 4 * v68;
      while ( 1 )
      {
        v92 = *(_DWORD *)(v22 + 4 * v68);
        if ( v90 == -1 )
          break;
        if ( v92 == v90 )
        {
          v93 = (_DWORD *)v91;
          v94 = 0;
          while ( *v93 == 92 )
          {
            ++v94;
            --v93;
            if ( v68 == v94 )
            {
              LOBYTE(v94) = v68;
              break;
            }
          }
          v90 = (v94 & 1) == 0 ? -1 : v90;
        }
        ++v68;
        v91 += 4;
        if ( v68 == v17 )
        {
LABEL_275:
          v68 = v17;
          goto LABEL_276;
        }
      }
      if ( v92 == 34 || v92 == 39 )
      {
        v90 = *(_DWORD *)(v22 + 4 * v68);
      }
      else if ( v92 == v65 )
      {
        ++v52;
        v90 = -1;
      }
      else
      {
        v90 = -1;
        if ( v92 == ((32 * (v65 == 123)) | 0x5D) )
        {
          v89 = v52-- <= 1;
          if ( v89 )
          {
            ++v68;
            break;
          }
        }
      }
      if ( ++v68 < v17 )
        continue;
      break;
    }
LABEL_276:
    v67 = v45 + (v65 == 39);
LABEL_277:
    if ( v68 <= v67 )
    {
      nullsub_1(v67);
      v106 = (void *)sub_140001650(10, 1);
      if ( !v106 )
        sub_1416C2D4B(1, 10);
      v12 = (unsigned __int64)v106;
      qmemcpy(v106, "[REDACTED]", 10);
      v151 = 10;
      v152 = (unsigned __int64)v106;
      v153 = 10;
      v169 = 10;
      v73 = v66;
      v72 = (unsigned __int64)v106;
      if ( v45 >= v17 )
        goto LABEL_287;
LABEL_164:
      v74 = *v57;
      if ( *v57 <= 90 )
      {
        if ( v74 == 34 || v74 == 39 )
        {
          v75 = v162;
          if ( v162 == v73 )
          {
            v165 = v72;
            v110 = v73;
            sub_141688D30((unsigned int)&v162, v73, 1, 1, 1);
            v75 = v162;
            v73 = v110;
            v72 = v165;
          }
          v167 = v163;
          v163[v73] = v74;
          v76 = v73 + 1;
          v164 = v76;
          v77 = v169;
          if ( v169 > v75 - v76 )
          {
            v165 = v72;
            sub_141688D30((unsigned int)&v162, v76, v169, 1, 1);
            v167 = v163;
            v76 = v164;
            v72 = v165;
            v77 = v169;
          }
          else if ( !v169 )
          {
            goto LABEL_172;
          }
          v168 = v76;
          sub_141684120(&v167[v76], v72, v77);
          v76 = v168;
LABEL_172:
          v15 = v77 + v76;
          v164 = v15;
          v12 = v45 + 1;
          if ( v45 + 1 < v17 )
          {
            while ( 1 )
            {
              v78 = v12;
              if ( *(_DWORD *)(v22 + 4 * v12) == v74 )
              {
                v79 = v57;
                v12 = 0;
                while ( *v79 == 92 )
                {
                  ++v12;
                  --v79;
                  if ( v78 == v12 )
                  {
                    v12 = v78;
                    break;
                  }
                }
                if ( (v12 & 1) == 0 )
                  break;
              }
              v12 = v78 + 1;
              ++v57;
              v45 = v78;
              if ( v78 + 1 == v17 )
                goto LABEL_256;
            }
            if ( v162 == v15 )
            {
              v165 = v72;
              v111 = v15;
              sub_141688D30((unsigned int)&v162, v15, 1, 1, 1);
              v167 = v163;
              v15 = v111;
            }
            v167[v15++] = v74;
            v164 = v15;
            v45 += 2LL;
          }
          else
          {
            ++v45;
          }
          goto LABEL_291;
        }
LABEL_229:
        v95 = v169;
        if ( v169 > v162 - v73 )
        {
          v165 = v72;
          sub_141688D30((unsigned int)&v162, v73, v169, 1, 1);
          v73 = v164;
          v72 = v165;
          v95 = v169;
        }
        else if ( !v169 )
        {
          goto LABEL_232;
        }
        v167 = v163;
        v96 = v73;
        sub_141684120(&v163[v73], v72, v95);
        v73 = v96;
LABEL_232:
        v15 = v95 + v73;
        v164 = v15;
        if ( !(_BYTE)v168 )
        {
          while ( 1 )
          {
            v99 = *(unsigned int *)(v22 + 4 * v45);
            if ( v99 <= 0x3B )
            {
              v12 = 0x800100000002400LL;
              if ( _bittest64((const __int64 *)&v12, v99) )
                goto LABEL_291;
            }
            if ( (_DWORD)v99 == 93 || (_DWORD)v99 == 125 )
              goto LABEL_291;
            if ( v17 == ++v45 )
            {
LABEL_256:
              v45 = v17;
              goto LABEL_291;
            }
          }
        }
        while ( 1 )
        {
          v97 = *(unsigned int *)(v22 + 4 * v45);
          if ( v97 <= 0x20 )
          {
            v12 = 0x100003E00LL;
            if ( _bittest64((const __int64 *)&v12, v97) )
              goto LABEL_291;
          }
          if ( (unsigned int)v97 >= 0x85 )
          {
            v12 = (unsigned int)v97 >> 8;
            if ( (unsigned int)v97 >> 8 > 0x1F )
            {
              if ( (_DWORD)v12 == 32 )
              {
                v12 = *((unsigned __int8 *)off_141EC9120 + (unsigned __int8)v97);
                LOBYTE(v12) = (unsigned __int8)v12 >> 1;
              }
              else
              {
                if ( (_DWORD)v12 != 48 )
                  goto LABEL_246;
                LOBYTE(v12) = (_DWORD)v97 == 12288;
              }
            }
            else if ( (_DWORD)v12 )
            {
              if ( (_DWORD)v12 != 22 )
                goto LABEL_246;
              LOBYTE(v12) = (_DWORD)v97 == 5760;
            }
            else
            {
              v12 = *((unsigned __int8 *)off_141EC9120 + (unsigned __int8)v97);
            }
            if ( (v12 & 1) != 0 )
              goto LABEL_291;
          }
LABEL_246:
          v12 = (unsigned int)(v97 - 44);
          if ( (unsigned int)v12 <= 0x31 )
          {
            v98 = 0x2000000008001LL;
            if ( _bittest64(&v98, v12) )
              goto LABEL_291;
          }
          if ( (_DWORD)v97 == 125 )
            goto LABEL_291;
          if ( v17 == ++v45 )
            goto LABEL_256;
        }
      }
      if ( v74 != 91 && v74 != 123 )
        goto LABEL_229;
      v80 = v169;
      if ( v169 > v162 - v73 )
      {
        v165 = v72;
        sub_141688D30((unsigned int)&v162, v73, v169, 1, 1);
        v73 = v164;
        v72 = v165;
        v80 = v169;
      }
      else if ( !v169 )
      {
LABEL_186:
        v82 = v80 + v73;
        v164 = v80 + v73;
        v12 = v22 - 4;
        v83 = -1;
        v84 = 0;
        while ( 2 )
        {
          v85 = (_DWORD *)(v12 + 4 * v45);
          while ( 1 )
          {
            v86 = *(_DWORD *)(v22 + 4 * v45);
            if ( v83 == -1 )
              break;
            if ( v86 == v83 )
            {
              v87 = v85;
              v88 = 0;
              while ( *v87 == 92 )
              {
                ++v88;
                --v87;
                if ( v45 == v88 )
                {
                  LOBYTE(v88) = v45;
                  break;
                }
              }
              v83 = (v88 & 1) == 0 ? -1 : v83;
            }
            ++v45;
            ++v85;
            if ( v45 == v17 )
            {
              v45 = v17;
              v15 = v82;
              goto LABEL_291;
            }
          }
          if ( v86 == 34 || v86 == 39 )
          {
            v83 = *(_DWORD *)(v22 + 4 * v45);
          }
          else if ( v86 == v74 )
          {
            ++v84;
            v83 = -1;
          }
          else
          {
            v83 = -1;
            if ( v86 == ((32 * (v74 == 123)) | 0x5D) )
            {
              v89 = v84-- <= 1;
              if ( v89 )
              {
                ++v45;
                v15 = v82;
                goto LABEL_291;
              }
            }
          }
          if ( ++v45 < v17 )
            continue;
          break;
        }
        v15 = v82;
        goto LABEL_291;
      }
      v167 = v163;
      v81 = v73;
      sub_141684120(&v163[v73], v72, v80);
      v73 = v81;
      goto LABEL_186;
    }
    if ( v68 > v17 )
      sub_1416C32F0(v67, v68, v17, &off_141752AD8);
    sub_1409586F0(&v148, v22 + 4 * v67, v22 + 4 * v68, v52);
    v105 = v66;
    v169 = (unsigned __int64)v149;
    sub_14036E120(&v154, v149, v150);
    sub_140958CD0(&v160, &v154, (char *)&v154 + 6);
    v143[0] = &v160;
    v143[1] = sub_1400015F0;
    sub_14149C0F0(&v151, &unk_141752AC3, v143);
    if ( (_QWORD)v160 )
      sub_140001660(*((_QWORD *)&v160 + 1), v160, 1);
    if ( v148 )
      sub_140001660(v169, v148, 1);
    v72 = v152;
    v169 = v153;
    v73 = v105;
    if ( v45 < v17 )
      goto LABEL_164;
LABEL_287:
    v107 = v169;
    if ( v169 > v162 - v73 )
    {
      v165 = v72;
      sub_141688D30((unsigned int)&v162, v73, v169, 1, 1);
      v73 = v164;
      v72 = v165;
      v107 = v169;
LABEL_289:
      v167 = v163;
      v108 = v73;
      sub_141684120(&v163[v73], v72, v107);
      v73 = v108;
    }
    else if ( v169 )
    {
      goto LABEL_289;
    }
    v15 = v107 + v73;
    v164 = v15;
LABEL_291:
    if ( v151 )
    {
      v109 = v15;
      sub_140001660(v152, v151, 1);
      v15 = v109;
    }
    v16 = v45;
    v17 = v147;
    v168 = v15;
  }
  while ( v45 < v147 );
LABEL_33:
  v18 = v162;
  if ( v145 )
  {
    sub_140001660(v146, 4 * v145, 4);
    v15 = v168;
  }
  v169 = v18;
  if ( v15 < 0 )
  {
    v19 = 0;
    goto LABEL_37;
  }
  v112 = 1;
  v113 = 1;
  if ( v15 )
  {
    nullsub_1(v12);
    v19 = 1;
    v113 = sub_140001650(v168, 1);
    v15 = v168;
    if ( !v113 )
LABEL_37:
      sub_1416C2D4B(v19, v15);
  }
  *(_QWORD *)&v160 = v15;
  *((_QWORD *)&v160 + 1) = v113;
  v161 = 0;
  v154 = 0;
  v155 = 1;
  v156 = 0;
  v114 = v167;
  v115 = &v167[v15];
  v116 = 0;
  while ( 2 )
  {
    v117 = v116;
LABEL_310:
    if ( v114 != v115 )
    {
      v119 = *v114;
      if ( (*v114 & 0x80u) != 0 )
      {
        v120 = v119 & 0x1F;
        v121 = v114[1] & 0x3F;
        if ( (unsigned __int8)v119 <= 0xDFu )
        {
          v114 += 2;
          v119 = v121 | (v120 << 6);
          if ( v119 - 9 >= 5 )
            goto LABEL_321;
        }
        else
        {
          v122 = (v121 << 6) | v114[2] & 0x3F;
          if ( *v114 < 0xF0u )
          {
            v114 += 3;
            v119 = (v120 << 12) | v122;
            if ( v119 - 9 >= 5 )
            {
LABEL_321:
              if ( v119 != 32 )
              {
                if ( v119 < 0x85 )
                  goto LABEL_323;
                v131 = v119 >> 8;
                if ( v119 >> 8 > 0x1F )
                {
                  if ( v131 == 32 )
                  {
                    if ( (*((_BYTE *)off_141EC9120 + (unsigned __int8)v119) & 2) == 0 )
                      goto LABEL_323;
                  }
                  else if ( v131 != 48 || v119 != 12288 )
                  {
LABEL_323:
                    switch ( v119 )
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
                        if ( v119 >= 0x80 )
                        {
                          v133 = 4LL - (v119 < 0x10000);
                          if ( v119 < 0x800 )
                            v133 = 2;
                          if ( v133 > v154 - v117 )
                          {
                            v139 = v117;
                            sub_141688D30((unsigned int)&v154, v117, v133, 1, 1);
                            v117 = v139;
                            v112 = v155;
                          }
                          v134 = v119 & 0x3F | 0x80;
                          v135 = v119 >> 6;
                          if ( v119 >= 0x800 )
                          {
                            v136 = v135 & 0x3F | 0x80;
                            v137 = v119 >> 12;
                            if ( v119 > 0xFFFF )
                            {
                              *(_BYTE *)(v112 + v117) = (v119 >> 18) | 0xF0;
                              *(_BYTE *)(v112 + v117 + 1) = v137 & 0x3F | 0x80;
                              *(_BYTE *)(v112 + v117 + 2) = v136;
                              *(_BYTE *)(v112 + v117 + 3) = v134;
                              v132 = 4;
                            }
                            else
                            {
                              *(_BYTE *)(v112 + v117) = v137 | 0xE0;
                              *(_BYTE *)(v112 + v117 + 1) = v136;
                              *(_BYTE *)(v112 + v117 + 2) = v134;
                              v132 = 3;
                            }
                          }
                          else
                          {
                            *(_BYTE *)(v112 + v117) = v135 | 0xC0;
                            *(_BYTE *)(v112 + v117 + 1) = v134;
                            v132 = 2;
                          }
                        }
                        else
                        {
                          if ( v154 == v117 )
                          {
                            v138 = v117;
                            sub_141688D30((unsigned int)&v154, v117, 1, 1, 1);
                            v117 = v138;
                          }
                          v112 = v155;
                          *(_BYTE *)(v155 + v117) = v119;
                          v132 = 1;
                        }
                        v116 = v117 + v132;
                        v156 = v116;
                        continue;
                    }
                  }
                }
                else if ( v131 )
                {
                  if ( v131 != 22 || v119 != 5760 )
                    goto LABEL_323;
                }
                else if ( (*((_BYTE *)off_141EC9120 + (unsigned __int8)v119) & 1) == 0 )
                {
                  goto LABEL_323;
                }
              }
            }
          }
          else
          {
            v123 = v114[3];
            v114 += 4;
            v119 = ((v120 & 7) << 18) | (v122 << 6) | v123 & 0x3F;
            if ( v119 - 9 >= 5 )
              goto LABEL_321;
          }
        }
      }
      else
      {
        ++v114;
        if ( v119 - 9 >= 5 )
          goto LABEL_321;
      }
      sub_140405A30(&v160, v112, v117);
      v156 = 0;
      v124 = v161;
      if ( v119 >= 0x80 )
      {
        v125 = 4LL - (v119 < 0x10000);
        if ( v119 < 0x800 )
          v125 = 2;
        if ( v125 > (unsigned __int64)v160 - v161 )
          sub_141688D30((unsigned int)&v160, v161, v125, 1, 1);
        v126 = v119 & 0x3F | 0x80;
        v127 = v119 >> 6;
        v128 = *((_QWORD *)&v160 + 1);
        if ( v119 < 0x800 )
        {
          *(_BYTE *)(*((_QWORD *)&v160 + 1) + v124) = v127 | 0xC0;
          *(_BYTE *)(v128 + v124 + 1) = v126;
          v118 = 2;
        }
        else
        {
          v129 = v127 & 0x3F | 0x80;
          v130 = v119 >> 12;
          if ( v119 > 0xFFFF )
          {
            *(_BYTE *)(*((_QWORD *)&v160 + 1) + v124) = (v119 >> 18) | 0xF0;
            *(_BYTE *)(v128 + v124 + 1) = v130 & 0x3F | 0x80;
            *(_BYTE *)(v128 + v124 + 2) = v129;
            *(_BYTE *)(v128 + v124 + 3) = v126;
            v118 = 4;
          }
          else
          {
            *(_BYTE *)(*((_QWORD *)&v160 + 1) + v124) = v130 | 0xE0;
            *(_BYTE *)(v128 + v124 + 1) = v129;
            *(_BYTE *)(v128 + v124 + 2) = v126;
            v118 = 3;
          }
        }
      }
      else
      {
        if ( (_QWORD)v160 == v161 )
          sub_141688D30((unsigned int)&v160, v161, 1, 1, 1);
        *(_BYTE *)(*((_QWORD *)&v160 + 1) + v124) = v119;
        v118 = 1;
      }
      v161 = v124 + v118;
      v117 = 0;
      goto LABEL_310;
    }
    break;
  }
  v140 = v155;
  sub_140405A30(&v160, v155, v117);
  result = v161;
  v142 = (_OWORD *)v144;
  *(_QWORD *)(v144 + 16) = v161;
  *v142 = v160;
  if ( v154 )
    result = sub_140001660(v140, v154, 1);
  if ( v169 )
    result = sub_140001660(v167, v169, 1);
  if ( v159 )
    return sub_140001660(v166, v159, 1);
  return result;
}