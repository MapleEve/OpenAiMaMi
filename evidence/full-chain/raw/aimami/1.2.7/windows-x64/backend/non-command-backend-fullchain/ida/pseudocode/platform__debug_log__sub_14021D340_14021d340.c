// win 1.2.7 | module src/platform/debug_log.rs | ea 0x14021d340 | name sub_14021D340
// win 1.2.7 | module src/platform/debug_log.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14021D340(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  signed __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v8; // rsi
  __m128i *v9; // rax
  signed __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r14
  unsigned int v23; // ebx
  unsigned __int64 v24; // rdx
  __int32 v25; // eax
  __int64 v26; // rsi
  unsigned __int64 v27; // r8
  char v28; // al
  __int64 v29; // rdx
  unsigned int v30; // edx
  char *v31; // r9
  __int64 v32; // rax
  char *v33; // r9
  unsigned __int64 v34; // r12
  char *v35; // r10
  char *v36; // r9
  int v37; // r11d
  int v38; // edi
  int v39; // r13d
  int v40; // r11d
  char v41; // si
  int v42; // r13d
  int v43; // edi
  int v44; // r9d
  unsigned __int64 v45; // r12
  char v46; // r10
  __int64 v47; // r9
  unsigned int v48; // r9d
  unsigned int v49; // r10d
  __int64 v50; // rsi
  char *v51; // r8
  char v52; // cl
  unsigned int v53; // ecx
  unsigned int v54; // edx
  char **v55; // rcx
  const __m128i *v56; // rdi
  const __m128i *i; // r13
  __int64 v58; // rax
  unsigned int v59; // ebx
  unsigned __int64 v60; // r8
  unsigned __int8 v61; // al
  unsigned int v62; // edx
  int v63; // eax
  int *v64; // rbx
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // r13
  unsigned __int64 v67; // rcx
  __m128i *v68; // rax
  _DWORD *v69; // r8
  __int64 v70; // rdx
  unsigned __int64 v71; // r13
  __int64 v72; // r8
  int v73; // esi
  signed __int64 v74; // rax
  __int64 v75; // r8
  __int64 v76; // rdi
  int *v77; // r9
  unsigned __int64 v78; // rax
  int *v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rdi
  __int64 v83; // rdi
  int v84; // r8d
  unsigned __int64 v85; // rdx
  _DWORD *v86; // r9
  int v87; // r10d
  _DWORD *v88; // r11
  __int64 v89; // r10
  bool v90; // cc
  int v91; // r9d
  unsigned __int64 v92; // r8
  __int64 v93; // r10
  int v94; // r11d
  _DWORD *v95; // rsi
  __int64 v96; // r11
  __int64 v97; // rsi
  unsigned __int64 v98; // rax
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  unsigned int v102; // edx
  char v103; // dl
  unsigned __int64 v104; // rdx
  __int64 v105; // r8
  __m128i *v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // r14
  __int64 v111; // rax
  char *v112; // r15
  unsigned __int8 *v113; // rdi
  const __m128i *v114; // rax
  const __m128i *v115; // r8
  __int64 v116; // rax
  unsigned int v117; // r13d
  int v118; // eax
  int v119; // edx
  int v120; // r13d
  unsigned __int8 v121; // cl
  __int64 v122; // r12
  unsigned __int64 v123; // r8
  char v124; // al
  unsigned int v125; // ecx
  __int64 v126; // rdx
  char v127; // cl
  unsigned int v128; // r8d
  unsigned int v129; // eax
  __int64 v130; // rax
  unsigned __int64 v131; // rax
  __int8 v132; // al
  unsigned int v133; // ecx
  __int8 v134; // cl
  unsigned int v135; // edx
  const __m128i *v136; // r14
  const __m128i *v137; // r14
  __int64 v138; // rdi
  __int64 result; // rax
  __int64 v141; // [rsp+40h] [rbp-40h] BYREF
  __int64 v142; // [rsp+48h] [rbp-38h]
  unsigned __int64 v143; // [rsp+50h] [rbp-30h]
  __int64 v144; // [rsp+58h] [rbp-28h]
  __int128 v145; // [rsp+60h] [rbp-20h] BYREF
  __int64 v146; // [rsp+70h] [rbp-10h]
  __int128 v147; // [rsp+78h] [rbp-8h] BYREF
  __int64 v148; // [rsp+88h] [rbp+8h]
  signed __int64 v149; // [rsp+90h] [rbp+10h]
  __int64 v150; // [rsp+98h] [rbp+18h]
  signed __int64 v151; // [rsp+A0h] [rbp+20h]
  const __m128i *v152; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v153; // [rsp+B0h] [rbp+30h]
  signed __int64 v154; // [rsp+B8h] [rbp+38h]
  signed __int64 v155; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v156; // [rsp+D0h] [rbp+50h]
  __int64 v157; // [rsp+D8h] [rbp+58h]
  unsigned __int64 v158; // [rsp+E0h] [rbp+60h]
  const __m128i *v159; // [rsp+E8h] [rbp+68h]
  __int128 v160; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v161; // [rsp+100h] [rbp+80h]
  __int64 v162; // [rsp+108h] [rbp+88h]
  __int64 v163; // [rsp+110h] [rbp+90h]
  char *v164; // [rsp+118h] [rbp+98h]
  __int64 v165; // [rsp+120h] [rbp+A0h]

  v165 = -2;
  v5 = a3;
  if ( a3 < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( a3 )
  {
    v8 = a4;
    nullsub_1(a1);
    v6 = 1;
    v9 = (__m128i *)sub_140001650(v5, 1);
    if ( !v9 )
LABEL_3:
      sub_141938D2B(v6, v5);
    v162 = (__int64)v9;
    sub_1418F44E0(v9, a2, v5);
    a4 = v8;
    if ( v8 )
      goto LABEL_7;
LABEL_13:
    v10 = v5;
    goto LABEL_17;
  }
  v162 = 1;
  if ( !a4 )
    goto LABEL_13;
LABEL_7:
  v150 = v162;
  v149 = v5;
  sub_1416AB5A0(&v160, a4, a5);
  if ( v161 )
  {
    v158 = *((_QWORD *)&v160 + 1);
    v163 = v5;
    sub_14018D680((unsigned int)&v152, v162, v5, DWORD2(v160), v161, (__int64)aCodex, 8);
    if ( v163 )
      sub_140001660(v162, v163, 1);
    v10 = (signed __int64)v152;
    v162 = v153;
    v5 = v154;
    v11 = v160;
    if ( (_QWORD)v160 == -1 )
      goto LABEL_17;
    goto LABEL_15;
  }
  v10 = v5;
  v11 = v160;
  if ( (_QWORD)v160 != -1 )
  {
LABEL_15:
    if ( v11 )
      sub_140001660(*((_QWORD *)&v160 + 1), v11, 1);
  }
LABEL_17:
  v150 = v162;
  v151 = v10;
  v149 = v10;
  sub_14149D270(&v152);
  if ( v152 != (const __m128i *)-1LL )
  {
    v163 = (__int64)v152;
    v158 = v153;
    sub_1416AB5A0(&v147, v153, v154);
    if ( v148 )
    {
      v164 = *((char **)&v147 + 1);
      sub_14018D680((unsigned int)&v160, v162, v5, DWORD2(v147), v148, (__int64)&aCodex[8], 1);
      if ( v151 )
        sub_140001660(v162, v151, 1);
      v162 = *((_QWORD *)&v160 + 1);
      v151 = v160;
      v5 = v161;
    }
    v12 = v163;
    if ( (_QWORD)v147 != -1 && (_QWORD)v147 )
      sub_140001660(*((_QWORD *)&v147 + 1), v147, 1);
    if ( v12 )
      sub_140001660(v158, v12, 1);
  }
  v150 = v162;
  v149 = v151;
  sub_1403E3520(&v141, v162, v162 + v5);
  if ( v5 < 0 )
  {
    v14 = 0;
    goto LABEL_29;
  }
  if ( v5 )
  {
    nullsub_1(v13);
    v14 = 1;
    v15 = sub_140001650(v5, 1);
    if ( !v15 )
LABEL_29:
      sub_141938D2B(v14, v5);
  }
  else
  {
    v15 = 1;
  }
  v155 = v5;
  v164 = (char *)v15;
  v156 = v15;
  v157 = 0;
  v16 = 0;
  v17 = 0;
  v18 = v143;
  v163 = 0;
  if ( !v143 )
    goto LABEL_35;
LABEL_42:
  while ( 2 )
  {
    v22 = v142;
    v23 = *(_DWORD *)(v142 + 4 * v17);
    v13 = 0;
    if ( v23 == 39 )
      v13 = 39;
    if ( v23 == 34 )
      v13 = 34;
    v158 = v17;
    v24 = v17 - (((_DWORD)v13 == 0) - 1LL);
    if ( v24 < v18 )
    {
      v159 = (const __m128i *)(v142 + 4 * v158);
      if ( !v158
        || (_DWORD)v13
        || (v25 = v159[-1].m128i_i32[3], (unsigned int)(v25 - 48) >= 0xA)
        && (v25 & 0xFFFFFFDF) - 65 >= 0x1A
        && v25 != 45
        && v25 != 95 )
      {
        v32 = 0;
        while ( 1 )
        {
          v33 = (&off_1419DCAF8)[v32 + 1];
          v34 = v24;
          if ( v33 )
          {
            v35 = (&off_1419DCAF8)[v32];
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
                  if ( v34 >= v18 )
                    goto LABEL_65;
                }
                else
                {
                  v40 = (v39 << 6) | v35[2] & 0x3F;
                  if ( (unsigned __int8)*v35 < 0xF0u )
                  {
                    v35 += 3;
                    v37 = (v38 << 12) | v40;
                    if ( v34 >= v18 )
                      goto LABEL_65;
                  }
                  else
                  {
                    v41 = v35[3];
                    v35 += 4;
                    v37 = ((v38 & 7) << 18) | (v40 << 6) | v41 & 0x3F;
                    if ( v34 >= v18 )
                      goto LABEL_65;
                  }
                }
              }
              else
              {
                ++v35;
                if ( v34 >= v18 )
                  goto LABEL_65;
              }
              v42 = *(_DWORD *)(v142 + 4 * v34) ^ 0x20;
              if ( (unsigned int)(*(_DWORD *)(v142 + 4 * v34) - 65) >= 0x1A )
                v42 = *(_DWORD *)(v142 + 4 * v34);
              v43 = v37 | 0x20;
              if ( (unsigned int)(v37 - 65) >= 0x1A )
                v43 = v37;
              if ( v42 != v43 )
                goto LABEL_65;
              ++v34;
            }
            while ( v35 != v36 );
          }
          if ( (_DWORD)v13 )
          {
            if ( v34 >= v18 || *(_DWORD *)(v142 + 4 * v34) != (_DWORD)v13 )
              goto LABEL_65;
            ++v34;
          }
          else if ( v34 < v18 )
          {
            v44 = *(_DWORD *)(v142 + 4 * v34);
            if ( (unsigned int)(v44 - 48) < 0xA || (v44 & 0xFFFFFFDF) - 65 < 0x1A || v44 == 45 || v44 == 95 )
              goto LABEL_65;
          }
          if ( v34 < v18 )
            break;
LABEL_65:
          v32 += 3;
          if ( v32 == 93 )
            goto LABEL_53;
        }
        v45 = v34 + 1;
        while ( 1 )
        {
          v48 = *(_DWORD *)(v142 + 4 * v45 - 4);
          if ( v48 - 9 >= 5 && v48 != 32 )
          {
            if ( v48 < 0x85 )
              goto LABEL_109;
            v49 = v48 >> 8;
            if ( v48 >> 8 > 0x1F )
            {
              if ( v49 == 32 )
              {
                v46 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v48) >> 1;
              }
              else
              {
                if ( v49 != 48 )
                {
LABEL_109:
                  if ( v48 == 61 || v48 == 58 )
                  {
                    if ( v45 >= v18 )
                    {
                      v50 = v163;
                      v51 = v164;
                    }
                    else
                    {
                      v50 = v163;
                      v51 = v164;
                      do
                      {
                        v53 = *(_DWORD *)(v142 + 4 * v45);
                        if ( v53 - 9 >= 5 && v53 != 32 )
                        {
                          if ( v53 < 0x85 )
                            goto LABEL_130;
                          v54 = v53 >> 8;
                          if ( v53 >> 8 > 0x1F )
                          {
                            if ( v54 == 32 )
                            {
                              v52 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v53) >> 1;
                            }
                            else
                            {
                              if ( v54 != 48 )
                                goto LABEL_130;
                              v52 = v53 == 12288;
                            }
                          }
                          else if ( v54 )
                          {
                            if ( v54 != 22 )
                              goto LABEL_130;
                            v52 = v53 == 5760;
                          }
                          else
                          {
                            v52 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v53);
                          }
                          if ( (v52 & 1) == 0 )
                            goto LABEL_130;
                        }
                        ++v45;
                      }
                      while ( v45 < v18 );
                      v45 = v18;
                    }
LABEL_130:
                    if ( v45 < v158 || v45 > v18 )
                      sub_1419392D0(v158, v45, v18, &off_1419DCDE0);
                    v55 = &off_1419DCAF8;
                    LOBYTE(v158) = (&off_1419DCAF8)[v32 + 2];
                    v56 = (const __m128i *)(v142 + 4 * v45);
                    for ( i = v159; i != v56; i = (const __m128i *)((char *)i + 4) )
                    {
                      v59 = i->m128i_i32[0];
                      if ( i->m128i_i32[0] >= 0x80u )
                      {
                        v60 = 4LL - (v59 < 0x10000);
                        if ( v59 < 0x800 )
                          v60 = 2;
                        if ( v60 > v155 - v50 )
                          sub_14190D590((unsigned int)&v155, v50, v60, 1, 1);
                        v61 = v59 & 0x3F | 0x80;
                        v55 = (char **)(v59 >> 6);
                        v51 = (char *)v156;
                        if ( v59 < 0x800 )
                        {
                          LOBYTE(v55) = (unsigned __int8)v55 | 0xC0;
                          *(_BYTE *)(v156 + v50) = (_BYTE)v55;
                          v51[v50 + 1] = v61;
                          v58 = 2;
                        }
                        else
                        {
                          LOBYTE(v55) = (unsigned __int8)v55 & 0x3F | 0x80;
                          v62 = v59 >> 12;
                          if ( v59 > 0xFFFF )
                          {
                            *(_BYTE *)(v156 + v50) = (v59 >> 18) | 0xF0;
                            v51[v50 + 1] = v62 & 0x3F | 0x80;
                            v51[v50 + 2] = (char)v55;
                            v51[v50 + 3] = v61;
                            v58 = 4;
                          }
                          else
                          {
                            *(_BYTE *)(v156 + v50) = v62 | 0xE0;
                            v51[v50 + 1] = (char)v55;
                            v51[v50 + 2] = v61;
                            v58 = 3;
                          }
                        }
                      }
                      else
                      {
                        if ( v155 == v50 )
                          sub_14190D590((unsigned int)&v155, v50, 1, 1, 1);
                        v51 = (char *)v156;
                        *(_BYTE *)(v156 + v50) = v59;
                        v58 = 1;
                      }
                      v50 += v58;
                      v157 = v50;
                    }
                    v164 = v51;
                    if ( !(_BYTE)v158 )
                    {
                      v64 = (int *)(v22 + 4 * v45);
                      nullsub_1(v55);
                      v68 = (__m128i *)sub_140001650(10, 1);
                      if ( !v68 )
                        sub_141938D2B(1, 10);
                      goto LABEL_165;
                    }
                    if ( v45 >= v18 )
                    {
                      v64 = (int *)(v22 + 4 * v45);
                      nullsub_1(v55);
                      v68 = (__m128i *)sub_140001650(10, 1);
                      if ( !v68 )
                        sub_141938D2B(1, 10);
LABEL_165:
                      v13 = (unsigned __int64)v68;
                      qmemcpy(v68, "[REDACTED]", 10);
                      *(_QWORD *)&v160 = 10;
                      v159 = v68;
                      *((_QWORD *)&v160 + 1) = v68;
                      v161 = 10;
                      v71 = 10;
                      v72 = v50;
                      goto LABEL_166;
                    }
                    v63 = v56->m128i_i32[0];
                    v163 = v50;
                    v64 = (int *)(v22 + 4 * v45);
                    if ( v63 <= 90 )
                    {
                      if ( v63 == 34 || v63 == 39 )
                      {
                        v65 = v45 + 1;
                        v66 = v45 + 1;
                        v67 = v22 + 4 * v45;
                        if ( v45 + 1 < v18 )
                        {
                          while ( 1 )
                          {
                            if ( *(_DWORD *)(v22 + 4 * v66) == v63 )
                            {
                              v69 = (_DWORD *)v67;
                              v70 = 0;
                              while ( *v69 == 92 )
                              {
                                ++v70;
                                --v69;
                                if ( v66 == v70 )
                                {
                                  LOBYTE(v70) = v66;
                                  break;
                                }
                              }
                              if ( (v70 & 1) == 0 )
                                break;
                            }
                            ++v66;
                            v67 += 4LL;
                            if ( v66 == v18 )
                            {
                              v66 = v18;
                              goto LABEL_290;
                            }
                          }
                        }
                        goto LABEL_290;
                      }
LABEL_270:
                      v66 = v45;
                      while ( 2 )
                      {
                        v67 = *(unsigned int *)(v22 + 4 * v66);
                        if ( v67 <= 0x20 )
                        {
                          v101 = 0x100003E00LL;
                          if ( _bittest64(&v101, v67) )
                            goto LABEL_289;
                        }
                        if ( (unsigned int)v67 >= 0x85 )
                        {
                          v102 = (unsigned int)v67 >> 8;
                          if ( (unsigned int)v67 >> 8 > 0x1F )
                          {
                            if ( v102 == 32 )
                            {
                              v103 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v67) >> 1;
                              goto LABEL_283;
                            }
                            if ( v102 == 48 )
                            {
                              v103 = (_DWORD)v67 == 12288;
                              goto LABEL_283;
                            }
                          }
                          else
                          {
                            if ( !v102 )
                            {
                              v103 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v67);
                              goto LABEL_283;
                            }
                            if ( v102 == 22 )
                            {
                              v103 = (_DWORD)v67 == 5760;
LABEL_283:
                              if ( (v103 & 1) != 0 )
                                goto LABEL_289;
                            }
                          }
                        }
                        v104 = (unsigned int)(v67 - 44);
                        if ( (unsigned int)v104 <= 0x31 )
                        {
                          v105 = 0x2000000008001LL;
                          if ( _bittest64(&v105, v104) )
                            goto LABEL_289;
                        }
                        if ( (_DWORD)v67 == 125 )
                          goto LABEL_289;
                        if ( v18 == ++v66 )
                          goto LABEL_288;
                        continue;
                      }
                    }
                    if ( v63 != 91 && v63 != 123 )
                      goto LABEL_270;
                    v67 = (32 * (v63 == 123)) | 0x5Du;
                    v91 = -1;
                    v66 = v45;
                    v92 = 0;
                    while ( 2 )
                    {
                      v93 = v22 - 4 + 4 * v66;
                      while ( 1 )
                      {
                        v94 = *(_DWORD *)(v22 + 4 * v66);
                        if ( v91 == -1 )
                          break;
                        if ( v94 == v91 )
                        {
                          v95 = (_DWORD *)v93;
                          v96 = 0;
                          while ( *v95 == 92 )
                          {
                            ++v96;
                            --v95;
                            if ( v66 == v96 )
                            {
                              LOBYTE(v96) = v66;
                              break;
                            }
                          }
                          v91 = (v96 & 1) == 0 ? -1 : v91;
                        }
                        ++v66;
                        v93 += 4;
                        if ( v66 == v18 )
                        {
LABEL_288:
                          v66 = v18;
                          goto LABEL_289;
                        }
                      }
                      if ( v94 == 34 || v94 == 39 )
                      {
                        v91 = *(_DWORD *)(v22 + 4 * v66);
                      }
                      else if ( v94 == v63 )
                      {
                        ++v92;
                        v91 = -1;
                      }
                      else
                      {
                        v91 = -1;
                        if ( v94 == (_DWORD)v67 )
                        {
                          v90 = v92-- <= 1;
                          if ( v90 )
                          {
                            ++v66;
                            break;
                          }
                        }
                      }
                      if ( ++v66 < v18 )
                        continue;
                      break;
                    }
LABEL_289:
                    v65 = v45 + (v63 == 39);
LABEL_290:
                    if ( v66 <= v65 )
                    {
                      nullsub_1(v67);
                      v106 = (__m128i *)sub_140001650(10, 1);
                      if ( !v106 )
                        sub_141938D2B(1, 10);
                      v13 = (unsigned __int64)v106;
                      qmemcpy(v106, "[REDACTED]", 10);
                      *(_QWORD *)&v160 = 10;
                      v159 = v106;
                      *((_QWORD *)&v160 + 1) = v106;
                      v161 = 10;
                      v71 = 10;
                      v72 = v163;
                    }
                    else
                    {
                      if ( v66 > v18 )
                        sub_1419392D0(v65, v66, v18, &off_1419DC9A8);
                      v152 = nullptr;
                      v153 = 1;
                      v154 = 0;
                      sub_14190D590((unsigned int)&v152, 0, v66 - v65, 1, 1);
                      sub_1401ADB00(v22 + 4 * v65, v22 + 4 * v66, &v152);
                      v159 = v152;
                      v144 = v153;
                      sub_1401A4B40(&v152, v153, v154);
                      *(_QWORD *)&v145 = &v152;
                      *(_QWORD *)&v160 = &v145;
                      *((_QWORD *)&v160 + 1) = sub_1402863B0;
                      sub_1416ABFD0(&v147, &unk_141A1C1CB, &v160);
                      if ( (_QWORD)v147 == -1 )
                      {
                        *(_QWORD *)&v145 = 0;
                        *((_QWORD *)&v145 + 1) = 1;
                        v146 = 0;
                      }
                      else
                      {
                        v161 = v148;
                        v160 = v147;
                        sub_1402AEA10((char *)&v152 + 1, (char *)&v152 + 6, &v160);
                        v146 = v161;
                        v145 = v160;
                      }
                      *(_QWORD *)&v147 = &v145;
                      *((_QWORD *)&v147 + 1) = sub_1400015F0;
                      sub_1416ABFD0(&v160, &unk_1419DC993, &v147);
                      if ( (_QWORD)v145 )
                        sub_140001660(*((_QWORD *)&v145 + 1), v145, 1);
                      if ( v159 )
                        sub_140001660(v144, v159, 1);
                      v159 = *((const __m128i **)&v160 + 1);
                      v71 = v161;
                      v72 = v163;
                    }
LABEL_166:
                    if ( v45 >= v18 )
                    {
                      if ( v71 > v155 - v72 )
                      {
                        sub_14190D590((unsigned int)&v155, v72, v71, 1, 1);
                        v72 = v157;
LABEL_186:
                        v164 = (char *)v156;
                        v80 = v72;
                        sub_1418F44E0((__m128i *)(v156 + v72), v159, v71);
                        v72 = v80;
                      }
                      else if ( v71 )
                      {
                        goto LABEL_186;
                      }
                      v16 = v71 + v72;
                      v157 = v16;
                      v81 = v160;
                      if ( !(_QWORD)v160 )
                        goto LABEL_307;
LABEL_306:
                      v107 = v16;
                      sub_140001660(*((_QWORD *)&v160 + 1), v81, 1);
                      v16 = v107;
                      goto LABEL_307;
                    }
                    v73 = *v64;
                    if ( *v64 > 90 )
                    {
                      if ( v73 == 91 || v73 == 123 )
                      {
                        if ( v71 > v155 - v72 )
                        {
                          sub_14190D590((unsigned int)&v155, v72, v71, 1, 1);
                          v72 = v157;
LABEL_193:
                          v164 = (char *)v156;
                          v82 = v72;
                          sub_1418F44E0((__m128i *)(v156 + v72), v159, v71);
                          v72 = v82;
                        }
                        else if ( v71 )
                        {
                          goto LABEL_193;
                        }
                        v83 = v71 + v72;
                        v157 = v71 + v72;
                        v13 = v22 - 4;
                        v84 = -1;
                        v85 = 0;
                        while ( 2 )
                        {
                          v86 = (_DWORD *)(v13 + 4 * v45);
                          while ( 1 )
                          {
                            v87 = *(_DWORD *)(v22 + 4 * v45);
                            if ( v84 == -1 )
                              break;
                            if ( v87 == v84 )
                            {
                              v88 = v86;
                              v89 = 0;
                              while ( *v88 == 92 )
                              {
                                ++v89;
                                --v88;
                                if ( v45 == v89 )
                                {
                                  LOBYTE(v89) = v45;
                                  break;
                                }
                              }
                              v84 = (v89 & 1) == 0 ? -1 : v84;
                            }
                            ++v45;
                            ++v86;
                            if ( v45 == v18 )
                            {
                              v45 = v18;
                              v16 = v83;
                              v81 = v160;
                              if ( (_QWORD)v160 )
                                goto LABEL_306;
                              goto LABEL_307;
                            }
                          }
                          if ( v87 == 34 || v87 == 39 )
                          {
                            v84 = *(_DWORD *)(v22 + 4 * v45);
                          }
                          else if ( v87 == v73 )
                          {
                            ++v85;
                            v84 = -1;
                          }
                          else
                          {
                            v84 = -1;
                            if ( v87 == ((32 * (v73 == 123)) | 0x5D) )
                            {
                              v90 = v85-- <= 1;
                              if ( v90 )
                              {
                                ++v45;
                                v16 = v83;
                                v81 = v160;
                                if ( (_QWORD)v160 )
                                  goto LABEL_306;
                                goto LABEL_307;
                              }
                            }
                          }
                          if ( ++v45 < v18 )
                            continue;
                          break;
                        }
                        v16 = v83;
                        v81 = v160;
                        if ( (_QWORD)v160 )
                          goto LABEL_306;
                        goto LABEL_307;
                      }
LABEL_239:
                      if ( v71 > v155 - v72 )
                      {
                        sub_14190D590((unsigned int)&v155, v72, v71, 1, 1);
                        v72 = v157;
LABEL_241:
                        v164 = (char *)v156;
                        v97 = v72;
                        sub_1418F44E0((__m128i *)(v156 + v72), v159, v71);
                        v72 = v97;
                      }
                      else if ( v71 )
                      {
                        goto LABEL_241;
                      }
                      v16 = v71 + v72;
                      v157 = v16;
                      if ( !(_BYTE)v158 )
                      {
                        while ( 1 )
                        {
                          v100 = *(unsigned int *)(v22 + 4 * v45);
                          if ( v100 <= 0x3B )
                          {
                            v13 = 0x800100000002400LL;
                            if ( _bittest64((const __int64 *)&v13, v100) )
                              break;
                          }
                          if ( (_DWORD)v100 == 93 || (_DWORD)v100 == 125 )
                            break;
                          if ( v18 == ++v45 )
                          {
LABEL_266:
                            v45 = v18;
                            v81 = v160;
                            if ( (_QWORD)v160 )
                              goto LABEL_306;
                            goto LABEL_307;
                          }
                        }
LABEL_305:
                        v81 = v160;
                        if ( !(_QWORD)v160 )
                          goto LABEL_307;
                        goto LABEL_306;
                      }
                      while ( 2 )
                      {
                        v98 = *(unsigned int *)(v22 + 4 * v45);
                        if ( v98 <= 0x20 )
                        {
                          v13 = 0x100003E00LL;
                          if ( _bittest64((const __int64 *)&v13, v98) )
                            goto LABEL_305;
                        }
                        if ( (unsigned int)v98 >= 0x85 )
                        {
                          v13 = (unsigned int)v98 >> 8;
                          if ( (unsigned int)v98 >> 8 > 0x1F )
                          {
                            if ( (_DWORD)v13 == 32 )
                            {
                              v13 = *((unsigned __int8 *)off_1421E7280 + (unsigned __int8)v98);
                              LOBYTE(v13) = (unsigned __int8)v13 >> 1;
                              goto LABEL_255;
                            }
                            if ( (_DWORD)v13 == 48 )
                            {
                              LOBYTE(v13) = (_DWORD)v98 == 12288;
                              goto LABEL_255;
                            }
                          }
                          else
                          {
                            if ( !(_DWORD)v13 )
                            {
                              v13 = *((unsigned __int8 *)off_1421E7280 + (unsigned __int8)v98);
                              goto LABEL_255;
                            }
                            if ( (_DWORD)v13 == 22 )
                            {
                              LOBYTE(v13) = (_DWORD)v98 == 5760;
LABEL_255:
                              if ( (v13 & 1) != 0 )
                                goto LABEL_305;
                            }
                          }
                        }
                        v13 = (unsigned int)(v98 - 44);
                        if ( (unsigned int)v13 <= 0x31 )
                        {
                          v99 = 0x2000000008001LL;
                          if ( _bittest64(&v99, v13) )
                            goto LABEL_305;
                        }
                        if ( (_DWORD)v98 == 125 )
                          goto LABEL_305;
                        if ( v18 == ++v45 )
                          goto LABEL_266;
                        continue;
                      }
                    }
                    if ( v73 != 34 && v73 != 39 )
                      goto LABEL_239;
                    v74 = v155;
                    if ( v155 == v72 )
                    {
                      v108 = v72;
                      sub_14190D590((unsigned int)&v155, v72, 1, 1, 1);
                      v74 = v155;
                      v72 = v108;
                    }
                    v164 = (char *)v156;
                    *(_BYTE *)(v156 + v72) = v73;
                    v75 = v72 + 1;
                    v157 = v75;
                    if ( v71 > v74 - v75 )
                    {
                      sub_14190D590((unsigned int)&v155, v75, v71, 1, 1);
                      v164 = (char *)v156;
                      v75 = v157;
LABEL_174:
                      v76 = v75;
                      sub_1418F44E0((__m128i *)&v164[v75], v159, v71);
                      v75 = v76;
                    }
                    else if ( v71 )
                    {
                      goto LABEL_174;
                    }
                    v16 = v71 + v75;
                    v157 = v16;
                    v13 = v45 + 1;
                    if ( v45 + 1 < v18 )
                    {
                      v77 = v64;
                      while ( 1 )
                      {
                        v78 = v13;
                        if ( *(_DWORD *)(v22 + 4 * v13) == v73 )
                        {
                          v79 = v77;
                          v13 = 0;
                          while ( *v79 == 92 )
                          {
                            ++v13;
                            --v79;
                            if ( v78 == v13 )
                            {
                              v13 = v78;
                              break;
                            }
                          }
                          if ( (v13 & 1) == 0 )
                            break;
                        }
                        v13 = v78 + 1;
                        ++v77;
                        v45 = v78;
                        if ( v78 + 1 == v18 )
                          goto LABEL_266;
                      }
                      if ( v155 == v16 )
                      {
                        v109 = v16;
                        sub_14190D590((unsigned int)&v155, v16, 1, 1, 1);
                        v164 = (char *)v156;
                        v16 = v109;
                      }
                      v164[v16++] = v73;
                      v157 = v16;
                      v45 += 2LL;
                      goto LABEL_305;
                    }
                    ++v45;
                    v81 = v160;
                    if ( (_QWORD)v160 )
                      goto LABEL_306;
LABEL_307:
                    v17 = v45;
                    v18 = v143;
                    v163 = v16;
                    if ( v45 >= v143 )
                      goto LABEL_35;
                    goto LABEL_42;
                  }
                  goto LABEL_65;
                }
                v46 = v48 == 12288;
              }
            }
            else if ( v49 )
            {
              if ( v49 != 22 )
                goto LABEL_109;
              v46 = v48 == 5760;
            }
            else
            {
              v46 = *((_BYTE *)off_1421E7280 + (unsigned __int8)v48);
            }
            if ( (v46 & 1) == 0 )
              goto LABEL_109;
          }
          v47 = v45 - v18 + 1;
          ++v45;
          if ( v47 == 1 )
            goto LABEL_65;
        }
      }
    }
LABEL_53:
    if ( v23 >= 0x80 )
    {
      v27 = 4LL - (v23 < 0x10000);
      if ( v23 < 0x800 )
        v27 = 2;
      if ( v27 > v155 - v163 )
        sub_14190D590((unsigned int)&v155, v163, v27, 1, 1);
      v28 = v23 & 0x3F | 0x80;
      v13 = v23 >> 6;
      v29 = v156;
      v164 = (char *)v156;
      if ( v23 < 0x800 )
      {
        LOBYTE(v13) = v13 | 0xC0;
        v20 = v163;
        *(_BYTE *)(v156 + v163) = v13;
        *(_BYTE *)(v29 + v20 + 1) = v28;
        v21 = 2;
      }
      else
      {
        LOBYTE(v13) = v13 & 0x3F | 0x80;
        v30 = v23 >> 12;
        v20 = v163;
        v31 = v164;
        if ( v23 > 0xFFFF )
        {
          v164[v163] = (v23 >> 18) | 0xF0;
          v31[v20 + 1] = v30 & 0x3F | 0x80;
          v31[v20 + 2] = v13;
          v31[v20 + 3] = v28;
          v21 = 4;
        }
        else
        {
          v164[v163] = v30 | 0xE0;
          v31[v20 + 1] = v13;
          v31[v20 + 2] = v28;
          v21 = 3;
        }
      }
    }
    else
    {
      v26 = v163;
      if ( v155 == v163 )
        sub_14190D590((unsigned int)&v155, v163, 1, 1, 1);
      v164 = (char *)v156;
      *(_BYTE *)(v156 + v26) = v23;
      v21 = 1;
      v20 = v26;
    }
    v16 = v21 + v20;
    v157 = v16;
    v17 = v158 + 1;
    v18 = v143;
    v163 = v16;
    if ( v158 + 1 < v143 )
      continue;
    break;
  }
LABEL_35:
  v158 = v155;
  if ( v141 )
  {
    sub_140001660(v142, 4 * v141, 4);
    v16 = v163;
  }
  if ( v16 < 0 )
  {
    v19 = 0;
    goto LABEL_39;
  }
  v110 = 1;
  v111 = 1;
  if ( v16 )
  {
    nullsub_1(v13);
    v19 = 1;
    v111 = sub_140001650(v163, 1);
    v16 = v163;
    if ( !v111 )
LABEL_39:
      sub_141938D2B(v19, v16);
  }
  *(_QWORD *)&v160 = v16;
  *((_QWORD *)&v160 + 1) = v111;
  v161 = 0;
  v152 = nullptr;
  v153 = 1;
  v154 = 0;
  v112 = v164;
  v113 = (unsigned __int8 *)&v164[v16];
  v114 = nullptr;
  while ( 2 )
  {
    v115 = v114;
LABEL_323:
    if ( v112 != (char *)v113 )
    {
      v117 = (unsigned __int8)*v112;
      if ( *v112 < 0 )
      {
        v118 = v117 & 0x1F;
        v119 = v112[1] & 0x3F;
        if ( (unsigned __int8)v117 <= 0xDFu )
        {
          v112 += 2;
          v117 = v119 | (v118 << 6);
          if ( v117 - 9 >= 5 )
            goto LABEL_334;
        }
        else
        {
          v120 = (v119 << 6) | v112[2] & 0x3F;
          if ( (unsigned __int8)*v112 < 0xF0u )
          {
            v112 += 3;
            v117 = (v118 << 12) | v120;
            if ( v117 - 9 >= 5 )
            {
LABEL_334:
              if ( v117 != 32 )
              {
                if ( v117 < 0x85 )
                  goto LABEL_336;
                v129 = v117 >> 8;
                if ( v117 >> 8 > 0x1F )
                {
                  if ( v129 == 32 )
                  {
                    if ( (*((_BYTE *)off_1421E7280 + (unsigned __int8)v117) & 2) == 0 )
                      goto LABEL_336;
                  }
                  else if ( v129 != 48 || v117 != 12288 )
                  {
LABEL_336:
                    switch ( v117 )
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
                        if ( v117 >= 0x80 )
                        {
                          v131 = 4LL - (v117 < 0x10000);
                          if ( v117 < 0x800 )
                            v131 = 2;
                          if ( v131 > (char *)v152 - (char *)v115 )
                          {
                            v137 = v115;
                            sub_14190D590((unsigned int)&v152, (_DWORD)v115, v131, 1, 1);
                            v115 = v137;
                            v110 = v153;
                          }
                          v132 = v117 & 0x3F | 0x80;
                          v133 = v117 >> 6;
                          if ( v117 >= 0x800 )
                          {
                            v134 = v133 & 0x3F | 0x80;
                            v135 = v117 >> 12;
                            if ( v117 > 0xFFFF )
                            {
                              v115->m128i_i8[v110] = (v117 >> 18) | 0xF0;
                              v115->m128i_i8[v110 + 1] = v135 & 0x3F | 0x80;
                              v115->m128i_i8[v110 + 2] = v134;
                              v115->m128i_i8[v110 + 3] = v132;
                              v130 = 4;
                            }
                            else
                            {
                              v115->m128i_i8[v110] = v135 | 0xE0;
                              v115->m128i_i8[v110 + 1] = v134;
                              v115->m128i_i8[v110 + 2] = v132;
                              v130 = 3;
                            }
                          }
                          else
                          {
                            v115->m128i_i8[v110] = v133 | 0xC0;
                            v115->m128i_i8[v110 + 1] = v132;
                            v130 = 2;
                          }
                        }
                        else
                        {
                          if ( v152 == v115 )
                          {
                            v136 = v115;
                            sub_14190D590((unsigned int)&v152, (_DWORD)v115, 1, 1, 1);
                            v115 = v136;
                          }
                          v110 = v153;
                          v115->m128i_i8[v153] = v117;
                          v130 = 1;
                        }
                        v114 = (const __m128i *)((char *)v115 + v130);
                        v154 = (signed __int64)v114;
                        continue;
                    }
                  }
                }
                else if ( v129 )
                {
                  if ( v129 != 22 || v117 != 5760 )
                    goto LABEL_336;
                }
                else if ( (*((_BYTE *)off_1421E7280 + (unsigned __int8)v117) & 1) == 0 )
                {
                  goto LABEL_336;
                }
              }
            }
          }
          else
          {
            v121 = v112[3];
            v112 += 4;
            v117 = ((v118 & 7) << 18) | (v120 << 6) | v121 & 0x3F;
            if ( v117 - 9 >= 5 )
              goto LABEL_334;
          }
        }
      }
      else
      {
        ++v112;
        if ( v117 - 9 >= 5 )
          goto LABEL_334;
      }
      sub_14021F090(&v160, v110, v115);
      v154 = 0;
      v122 = v161;
      if ( v117 >= 0x80 )
      {
        v123 = 4LL - (v117 < 0x10000);
        if ( v117 < 0x800 )
          v123 = 2;
        if ( v123 > (__int64)v160 - v161 )
          sub_14190D590((unsigned int)&v160, v161, v123, 1, 1);
        v124 = v117 & 0x3F | 0x80;
        v125 = v117 >> 6;
        v126 = *((_QWORD *)&v160 + 1);
        if ( v117 < 0x800 )
        {
          *(_BYTE *)(*((_QWORD *)&v160 + 1) + v122) = v125 | 0xC0;
          *(_BYTE *)(v126 + v122 + 1) = v124;
          v116 = 2;
        }
        else
        {
          v127 = v125 & 0x3F | 0x80;
          v128 = v117 >> 12;
          if ( v117 > 0xFFFF )
          {
            *(_BYTE *)(*((_QWORD *)&v160 + 1) + v122) = (v117 >> 18) | 0xF0;
            *(_BYTE *)(v126 + v122 + 1) = v128 & 0x3F | 0x80;
            *(_BYTE *)(v126 + v122 + 2) = v127;
            *(_BYTE *)(v126 + v122 + 3) = v124;
            v116 = 4;
          }
          else
          {
            *(_BYTE *)(*((_QWORD *)&v160 + 1) + v122) = v128 | 0xE0;
            *(_BYTE *)(v126 + v122 + 1) = v127;
            *(_BYTE *)(v126 + v122 + 2) = v124;
            v116 = 3;
          }
        }
      }
      else
      {
        if ( (_QWORD)v160 == v161 )
          sub_14190D590((unsigned int)&v160, v161, 1, 1, 1);
        *(_BYTE *)(*((_QWORD *)&v160 + 1) + v122) = v117;
        v116 = 1;
      }
      v161 = v122 + v116;
      v115 = nullptr;
      goto LABEL_323;
    }
    break;
  }
  v138 = v153;
  sub_14021F090(&v160, v153, v115);
  result = v161;
  *(_QWORD *)(a1 + 16) = v161;
  *(_OWORD *)a1 = v160;
  if ( v152 )
    result = sub_140001660(v138, v152, 1);
  if ( v158 )
    result = sub_140001660(v164, v158, 1);
  if ( v151 )
    return sub_140001660(v162, v151, 1);
  return result;
}
