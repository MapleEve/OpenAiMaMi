// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408c2e40 | successor of pre-update 0x140c6ad00 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_1408C2E40(__int64 a1, __int64 a2, char ***a3, const __m128i *a4)
{
  unsigned __int64 v4; // r15
  const __m128i *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // r12
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // eax
  __int8 v23; // al
  __int64 v24; // rdi
  __m128i v25; // xmm0
  const __m128i *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rcx
  char ***v30; // rsi
  __int64 v31; // rdi
  char **v32; // rbx
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  char v35; // bl
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r13
  __int64 v42; // rcx
  char ***v43; // rdx
  unsigned __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r12
  __int64 v48; // rbx
  char v49; // al
  char *v50; // r12
  char v51; // dl
  unsigned int v52; // eax
  int v53; // ecx
  int v54; // r8d
  int v55; // eax
  unsigned int v56; // ecx
  char ***v57; // rdx
  unsigned __int64 v58; // rdi
  int v59; // eax
  char *v60; // rdx
  char *v61; // rcx
  unsigned __int64 v62; // rax
  char v63; // cl
  char v64; // r8
  int v65; // r8d
  unsigned int v66; // ecx
  __int64 v67; // rsi
  __int64 v68; // rcx
  __m128i *v69; // rbx
  __m128i *v70; // rdx
  __m128i *v71; // rbx
  __m128i *v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rsi
  int v75; // ecx
  char v76; // dl
  char v77; // r8
  char v78; // r9
  __int64 v79; // rsi
  int v80; // r8d
  int v81; // edx
  char **v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rsi
  __int64 v85; // r13
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rbx
  __int64 v88; // r14
  __int64 v89; // rsi
  unsigned __int64 v90; // rbx
  char **v91; // rsi
  unsigned __int64 v92; // rbx
  char **v93; // r13
  __int64 v94; // r15
  unsigned __int64 v95; // rbx
  __int64 v96; // r13
  unsigned __int64 v97; // rbx
  __m128i *v98; // r15
  __m128i *v99; // r15
  __m128i *v100; // rax
  __m128i *v101; // r15
  char **v102; // rax
  __m128i *v103; // r15
  __int64 v104; // rsi
  __int64 v105; // rbx
  __int64 v106; // r14
  unsigned __int64 v107; // rsi
  __m128i *v108; // r15
  __m128i *v109; // r15
  __m128i *v110; // rax
  __m128i *v111; // r15
  char **v112; // rcx
  char **v113; // rax
  __int64 v114; // rbx
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rsi
  unsigned __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rsi
  void *v122; // r13
  unsigned __int64 v123; // r12
  __int64 v124; // r12
  __int64 v125; // r13
  unsigned __int64 v126; // rbx
  __int64 v127; // r13
  __int64 v128; // rbx
  __int64 v129; // rsi
  __int64 v130; // r14
  __int64 v131; // r12
  unsigned __int64 v132; // rbx
  __int64 v133; // r14
  __int64 v134; // rcx
  bool v135; // bl
  __int64 v136; // rsi
  char *v137; // rcx
  unsigned __int64 v138; // r12
  int v139; // edx
  unsigned __int8 *v140; // r8
  int v141; // r9d
  int v142; // r10d
  int v143; // edx
  char *v144; // rsi
  char *v145; // r12
  __int64 v146; // r13
  char **v147; // rsi
  char v148; // di
  char **v149; // rsi
  char ***v151; // rsi
  __int64 v152; // rsi
  __int64 v153; // rdi
  __int64 v154; // rbx
  const __m128i *v155; // r14
  __m128i si128; // xmm0
  __int64 v158; // rax
  __int64 v159; // rdx
  unsigned __int64 v160; // rax
  __int64 v161; // rsi
  __int64 v163; // rbx
  char **v164; // rbx
  unsigned __int64 v165; // rbx
  char **v166; // r14
  _QWORD v167[2]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v168; // [rsp+50h] [rbp-30h] BYREF
  __int128 v169; // [rsp+60h] [rbp-20h]
  __m128i v170; // [rsp+70h] [rbp-10h]
  _QWORD v171[2]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v172; // [rsp+90h] [rbp+10h] BYREF
  __int128 v173; // [rsp+98h] [rbp+18h]
  __int64 v174; // [rsp+A8h] [rbp+28h] BYREF
  char **v175; // [rsp+B0h] [rbp+30h]
  __int64 v176; // [rsp+B8h] [rbp+38h]
  __int64 v177; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v178; // [rsp+C8h] [rbp+48h]
  __int64 v179; // [rsp+D0h] [rbp+50h]
  __int64 v180; // [rsp+E8h] [rbp+68h]
  __int64 v181; // [rsp+F0h] [rbp+70h]
  char **v182; // [rsp+F8h] [rbp+78h]
  __int64 v183; // [rsp+100h] [rbp+80h]
  __int128 v184; // [rsp+108h] [rbp+88h]
  char ***v185; // [rsp+118h] [rbp+98h]
  char **v186; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v187; // [rsp+128h] [rbp+A8h]
  __int128 v188; // [rsp+130h] [rbp+B0h]
  char ***v189; // [rsp+140h] [rbp+C0h]
  char **v190; // [rsp+148h] [rbp+C8h]
  char ***v191; // [rsp+150h] [rbp+D0h]
  __int64 v192; // [rsp+158h] [rbp+D8h]
  char ***v193; // [rsp+160h] [rbp+E0h]
  __int64 v194; // [rsp+168h] [rbp+E8h]
  char v195; // [rsp+170h] [rbp+F0h]
  __int16 v196; // [rsp+178h] [rbp+F8h]
  __m128i v197; // [rsp+190h] [rbp+110h] BYREF
  __int128 v198; // [rsp+1A0h] [rbp+120h]
  __m128i v199; // [rsp+1B0h] [rbp+130h]
  __int64 v200; // [rsp+1C0h] [rbp+140h]
  __int64 v201; // [rsp+1C8h] [rbp+148h]
  char **v202; // [rsp+1D0h] [rbp+150h]
  __int64 v203; // [rsp+1D8h] [rbp+158h]
  char *v204; // [rsp+1E0h] [rbp+160h]
  __m128i *v205; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v206; // [rsp+1F0h] [rbp+170h]
  __m128i *v207; // [rsp+1F8h] [rbp+178h]
  __int64 v208; // [rsp+200h] [rbp+180h] BYREF
  __int64 v209; // [rsp+208h] [rbp+188h]
  __int64 v210; // [rsp+210h] [rbp+190h]
  const __m128i *v211; // [rsp+218h] [rbp+198h]
  char ***v212; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v213; // [rsp+228h] [rbp+1A8h]
  unsigned __int64 v214; // [rsp+230h] [rbp+1B0h]
  char v215; // [rsp+23Fh] [rbp+1BFh]
  __int64 v216; // [rsp+240h] [rbp+1C0h]
  char **v217; // [rsp+248h] [rbp+1C8h]
  __int8 v218; // [rsp+257h] [rbp+1D7h]
  __int64 v219; // [rsp+258h] [rbp+1D8h]
  __int64 v220; // [rsp+260h] [rbp+1E0h]

  v220 = -2;
  v5 = a4;
  v185 = a3;
  v183 = a2;
  v180 = a1;
  v6 = a4[2].m128i_i64[0];
  *((_QWORD *)&v184 + 1) = a4[2].m128i_i64[1];
  *(_QWORD *)&v184 = v6;
  sub_140215800(&v177, v6, v6 + (*((_QWORD *)&v184 + 1) << 8));
  v7 = v179;
  v8 = v5[3].m128i_i64[0];
  v9 = v5[3].m128i_i64[1];
  v204 = (char *)(v8 + 24 * v9);
  v181 = v9;
  v211 = v5;
  v182 = (char **)v8;
  if ( v9 )
  {
    v10 = v178;
    v11 = 8 * v179;
    v219 = v179;
    while ( 1 )
    {
      if ( v7 )
      {
        v12 = *(_QWORD *)(v8 + 8);
        v4 = *(_QWORD *)(v8 + 16);
        v13 = 0;
        while ( 1 )
        {
          v14 = *(_QWORD *)(v10 + v13);
          if ( *(_QWORD *)(v14 + 16) == v4 && !(unsigned int)sub_141923B40(*(_QWORD *)(v14 + 8), v12, v4) )
            break;
          v13 += 8;
          if ( v11 == v13 )
            goto LABEL_4;
        }
        sub_140935420(&v186, v14);
        v15 = v187;
        v16 = v188;
        if ( (_QWORD)v188 )
        {
          sub_1408FEA60(*(_QWORD *)(v187 + 24), *(_QWORD *)(v187 + 32));
          v4 = v17;
          v18 = (_QWORD *)(v15 + 72);
          do
          {
            v19 = *(v18 - 7);
            if ( v19 )
              sub_140001660(*(v18 - 6), v19, 1);
            v20 = *(v18 - 1);
            if ( v20 > 0 )
              sub_140001660(*v18, v20, 1);
            v21 = *(v18 - 4);
            if ( v21 )
              sub_140001660(*(v18 - 3), v21, 1);
            v18 += 12;
            --v16;
          }
          while ( v16 );
          v22 = (int)v186;
          if ( v186 )
            sub_140001660(v15, 96LL * (_QWORD)v186, 8);
          if ( v4 )
          {
            LOBYTE(v22) = 1;
            LODWORD(v217) = v22;
            v5 = v211;
            v7 = v219;
            goto LABEL_25;
          }
        }
        else if ( v186 )
        {
          sub_140001660(v187, 96LL * (_QWORD)v186, 8);
        }
      }
LABEL_4:
      v8 += 24;
      v7 = v219;
      if ( (char *)v8 == v204 )
      {
        LODWORD(v217) = 0;
        v5 = v211;
        goto LABEL_25;
      }
    }
  }
  LODWORD(v217) = 0;
LABEL_25:
  v23 = v5[5].m128i_i8[0];
  v24 = v5[1].m128i_i64[0];
  v216 = v5->m128i_i64[0];
  if ( ((unsigned __int8)v23 ^ 1 | (v216 == 0) | (v24 == 0)) == 1 || !v7 )
    LODWORD(v217) = 0;
  v218 = v211[5].m128i_i8[1];
  if ( v218 )
  {
    v25 = _mm_loadu_si128(v211 + 4);
    sub_140D62C40((unsigned int)&v168, v184, DWORD2(v184), (_DWORD)v182, v181, v25.m128i_i64[0], v25.m128i_i64[1]);
  }
  else
  {
    v186 = v182;
    v187 = (__int64)v204;
    v188 = v184;
    v189 = nullptr;
    v194 = 0;
    v215 = 1;
    v26 = (const __m128i *)sub_1404D9AA0(0);
    if ( !v26 )
    {
      v215 = 1;
      sub_14196A580(&off_141A6E388);
    }
    v27 = _mm_loadu_si128(v26);
    ++v26->m128i_i64[0];
    v198 = xmmword_141A57990;
    v197 = *(__m128i *)&off_141A57980;
    v199 = v27;
    sub_140861C70(&v197, &v186);
    v170 = v199;
    v169 = v198;
    v168 = _mm_load_si128(&v197);
  }
  sub_1408C72F0(&v174, v183, v185);
  v30 = (char ***)v176;
  if ( v176 < 0 )
  {
    v31 = 0;
    goto LABEL_34;
  }
  v183 = v24;
  v32 = v175;
  if ( v176 )
  {
    nullsub_1(v29, v28);
    v31 = 1;
    v33 = sub_140001650(v30, 1);
    if ( !v33 )
LABEL_34:
      sub_14196B2DB(v31, v30);
  }
  else
  {
    v33 = 1;
  }
  v212 = v30;
  v204 = (char *)v33;
  v213 = v33;
  v214 = 0;
  LOBYTE(v208) = 2;
  v188 = 0;
  v186 = v32;
  v187 = (__int64)v30;
  v189 = v30;
  v190 = v32;
  v191 = v30;
  v192 = 0;
  v193 = v30;
  v194 = 0xA0000000ALL;
  v195 = 1;
  v196 = 0;
  v34 = 0;
LABEL_40:
  LODWORD(v219) = 0;
  v35 = 0;
  while ( 1 )
  {
    v36 = sub_140867020((__int64 *)&v186);
    v38 = v36;
    if ( !v36 )
      break;
    v4 = v37;
    v39 = sub_1408FEA60(v36, v37);
    v41 = v40;
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v208, v38, v4) )
    {
      if ( v41 && *(_BYTE *)v39 == 91 && *(_BYTE *)(v39 + v41 - 1) == 93 )
      {
        if ( v41 == 1 || *(char *)(v39 + 1) <= -65 )
          sub_14196B4F0(v39, v41, 1, v41 - 1, (__int64)&off_141A496C8);
        if ( !(_BYTE)v217 )
          goto LABEL_109;
        v35 = 1;
        if ( !sub_1408D03C0((unsigned __int64 *)(v39 + 1), v41 - 2) )
          goto LABEL_109;
      }
      else if ( (v35 & 1) != 0 )
      {
        v35 = 1;
      }
      else
      {
        if ( (v219 & 1) != 0 )
          goto LABEL_109;
        if ( (_BYTE)v217 && v41 && *(_BYTE *)v39 != 35 )
        {
          if ( v41 <= 0xF )
          {
            v45 = 0;
            while ( *(_BYTE *)(v39 + v45) != 61 )
            {
              if ( v41 == ++v45 )
                goto LABEL_51;
            }
LABEL_76:
            v48 = 1;
            while ( 2 )
            {
              v50 = (&off_141A54B10)[v48];
              if ( v41 < (unsigned __int64)v50
                || (unsigned int)sub_141923B40((&off_141A54B10)[v48 - 1], v39, (&off_141A54B10)[v48])
                || v50 == (char *)v41 )
              {
                goto LABEL_81;
              }
              v51 = v50[v39];
              v52 = (unsigned __int8)v51;
              if ( v51 < 0 )
              {
                v53 = v51 & 0x1F;
                v54 = v50[v39 + 1] & 0x3F;
                if ( (unsigned __int8)v51 > 0xDFu )
                {
                  v55 = (v54 << 6) | v50[v39 + 2] & 0x3F;
                  if ( (unsigned __int8)v51 < 0xF0u )
                  {
                    v52 = (v53 << 12) | v55;
                    if ( v52 == 32 )
                      goto LABEL_40;
                  }
                  else
                  {
                    v52 = ((v51 & 7) << 18) | (v55 << 6) | v50[v39 + 3] & 0x3F;
                    if ( v52 == 32 )
                      goto LABEL_40;
                  }
LABEL_92:
                  if ( v52 == 61 || v52 - 9 < 5 )
                    goto LABEL_40;
                  if ( v52 >= 0x85 )
                  {
                    v56 = v52 >> 8;
                    if ( v52 >> 8 > 0x1F )
                    {
                      if ( v56 == 32 )
                      {
                        v49 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v52) >> 1;
LABEL_80:
                        if ( (v49 & 1) != 0 )
                          goto LABEL_40;
                      }
                      else if ( v56 == 48 )
                      {
                        v49 = v52 == 12288;
                        goto LABEL_80;
                      }
                    }
                    else
                    {
                      if ( !v56 )
                      {
                        v49 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v52);
                        goto LABEL_80;
                      }
                      if ( v56 == 22 )
                      {
                        v49 = v52 == 5760;
                        goto LABEL_80;
                      }
                    }
                  }
LABEL_81:
                  v48 += 2;
                  if ( v48 == 11 )
                    goto LABEL_51;
                  continue;
                }
                v52 = v54 | (v53 << 6);
              }
              break;
            }
            if ( v52 == 32 )
              goto LABEL_40;
            goto LABEL_92;
          }
          LOBYTE(v42) = 61;
          if ( sub_1416E2CC0(v42, v39) == 1 )
            goto LABEL_76;
        }
LABEL_51:
        sub_1408D1C90(&v197, v39, v41);
        if ( v197.m128i_i64[0] != -1 )
        {
          if ( (_QWORD)v198 == 5
            && !(*(_DWORD *)v197.m128i_i64[1] ^ 0x65646F6D | *(unsigned __int8 *)(v197.m128i_i64[1] + 4) ^ 0x6C) )
          {
            if ( v197.m128i_i64[0] )
              sub_140001660(v197.m128i_i64[1], v197.m128i_i64[0], 1);
            sub_1408C8A30(&v197, v39, v41);
            v46 = v197.m128i_i64[0];
            if ( v197.m128i_i64[0] != -1 )
            {
              v47 = v197.m128i_i64[1];
              if ( (unsigned __int8)sub_1408CB7F0(v197.m128i_i64[1], v198, (unsigned int)v217, &v168) )
              {
                if ( v46 )
                  sub_140001660(v47, v46, 1);
                goto LABEL_40;
              }
              if ( v46 )
                sub_140001660(v47, v46, 1);
            }
          }
          else if ( v197.m128i_i64[0] )
          {
            sub_140001660(v197.m128i_i64[1], v197.m128i_i64[0], 1);
          }
        }
LABEL_58:
        v43 = v212;
        if ( v4 > (unsigned __int64)v212 - v34 )
        {
          sub_141939070((unsigned int)&v212, v34, v4, 1, 1);
          v204 = (char *)v213;
          v34 = v214;
        }
        else if ( !v4 )
        {
          goto LABEL_61;
        }
        sub_1419234B0(&v204[v34], v38, v4);
        v43 = v212;
LABEL_61:
        v44 = v4 + v34;
        v214 = v44;
        if ( v43 == (char ***)v44 )
          sub_141939070((unsigned int)&v212, (_DWORD)v43, 1, 1, 1);
        v204 = (char *)v213;
        *(_BYTE *)(v213 + v44) = 10;
        v34 = v44 + 1;
        v214 = v34;
        v35 = 0;
      }
    }
    else if ( (v35 & 1) != 0 )
    {
      v35 = 1;
    }
    else
    {
      if ( (v219 & 1) == 0 )
        goto LABEL_58;
LABEL_109:
      v57 = v212;
      if ( v4 > (unsigned __int64)v212 - v34 )
      {
        sub_141939070((unsigned int)&v212, v34, v4, 1, 1);
        v204 = (char *)v213;
        v34 = v214;
      }
      else if ( !v4 )
      {
        goto LABEL_112;
      }
      sub_1419234B0(&v204[v34], v38, v4);
      v57 = v212;
LABEL_112:
      v58 = v4 + v34;
      v214 = v58;
      if ( v57 == (char ***)v58 )
        sub_141939070((unsigned int)&v212, (_DWORD)v57, 1, 1, 1);
      v59 = v213;
      v204 = (char *)v213;
      *(_BYTE *)(v213 + v58) = 10;
      v34 = v58 + 1;
      v214 = v34;
      LOBYTE(v59) = 1;
      LODWORD(v219) = v59;
      v35 = 0;
    }
  }
  if ( v34 >= 2 )
  {
    if ( *(_WORD *)&v204[v34 - 2] != 2570 )
    {
LABEL_137:
      v185 = v212;
      if ( !(_BYTE)v217 )
        goto LABEL_281;
      goto LABEL_138;
    }
    v60 = &v204[v34];
    v61 = &v204[v34 - 2];
    while ( 1 )
    {
      v62 = -1;
      if ( *(v60 - 1) >= 0 )
        goto LABEL_135;
      v63 = *v61;
      if ( v63 > -65 )
      {
        v66 = v63 & 0x1F;
        if ( v66 < 2 )
          goto LABEL_135;
      }
      else
      {
        v64 = *(v60 - 3);
        if ( v64 > -65 )
          v65 = v64 & 0xF;
        else
          v65 = ((*(v60 - 4) & 7) << 6) | v64 & 0x3F;
        v66 = (v65 << 6) | v63 & 0x3F;
        if ( v66 < 2 )
          goto LABEL_135;
      }
      v62 = -2;
      if ( v66 >= 0x20 )
        v62 = (v66 < 0x400) | 0xFFFFFFFFFFFFFFFCuLL;
LABEL_135:
      v34 += v62;
      if ( v34 < 2 )
      {
        v214 = v34;
        if ( v34 )
          goto LABEL_121;
LABEL_280:
        v34 = 0;
        v185 = v212;
        if ( !(_BYTE)v217 )
          goto LABEL_281;
LABEL_138:
        if ( !v216 )
        {
          v104 = -1;
          if ( v183 )
            goto LABEL_210;
          goto LABEL_282;
        }
        v67 = v211->m128i_i64[1];
        sub_1401F5580((__int64)&v172, v184, SDWORD2(v184), (int)v182, v181);
        v184 = v173;
        v205 = nullptr;
        v206 = 1;
        v207 = nullptr;
        sub_141939070((unsigned int)&v205, 0, 55, 1, 1);
        v68 = v206;
        v69 = v207;
        *(__m128i *)((char *)&v207[2] + v206) = (__m128i)xmmword_141A5430F;
        *(__m128i *)((char *)&v69[1] + v68) = (__m128i)xmmword_141A542FF;
        *(__m128i *)((char *)v69 + v68) = _mm_loadu_si128((const __m128i *)&xmmword_141A542EF);
        *(__int64 *)((char *)&v69[2].m128i_i64[1] + v68 + 7) = 0x29594C4C41554E41LL;
        v207 = (__m128i *)((char *)v69 + 55);
        v70 = v205;
        if ( v205 == (__m128i *)((char *)&v69[3].m128i_u32[1] + 3) )
        {
          sub_141939070((unsigned int)&v205, (_DWORD)v69 + 55, 1, 1, 1);
          v70 = v205;
          v68 = v206;
        }
        v69[3].m128i_i8[v68 + 7] = 10;
        v71 = (__m128i *)((char *)v69 + 56);
        v207 = v71;
        if ( (unsigned __int64)((char *)v70 - (char *)v71) <= 0x2B )
        {
          sub_141939070((unsigned int)&v205, (_DWORD)v71, 44, 1, 1);
          v71 = v207;
          v70 = v205;
          v68 = v206;
        }
        *(__m128i *)((char *)&v71[1] + v68 + 12) = *(__m128i *)((char *)&xmmword_141A54336 + 12);
        *(__m128i *)((char *)&v71[1] + v68) = (__m128i)xmmword_141A54336;
        *(__m128i *)((char *)v71 + v68) = _mm_loadu_si128((const __m128i *)&xmmword_141A54326);
        v72 = (__m128i *)((char *)v71 + 44);
        v207 = v72;
        if ( (unsigned __int64)((char *)v70 - (char *)v72) <= 0x3A )
        {
          sub_141939070((unsigned int)&v205, (_DWORD)v72, 59, 1, 1);
          v72 = v207;
          v70 = v205;
          v68 = v206;
        }
        *(__m128i *)((char *)&v72[2] + v68 + 11) = *(__m128i *)((char *)&xmmword_141A54372 + 11);
        *(__m128i *)((char *)&v72[2] + v68) = (__m128i)xmmword_141A54372;
        *(__m128i *)((char *)&v72[1] + v68) = (__m128i)xmmword_141A54362;
        *(__m128i *)((char *)v72 + v68) = _mm_loadu_si128((const __m128i *)&xmmword_141A54352);
        v207 = (__m128i *)((char *)v72 + 59);
        if ( v70 == (__m128i *)((char *)&v72[3].m128i_u64[1] + 3) )
        {
          sub_141939070((unsigned int)&v205, (_DWORD)v70, 1, 1, 1);
          v68 = v206;
        }
        v72[3].m128i_i8[v68 + 11] = 10;
        v207 = (__m128i *)((char *)v72 + 60);
        while ( 1 )
        {
          v73 = v67;
          if ( !v67 )
            break;
          v74 = v216 + v67;
          v75 = *(char *)(v216 + v73 - 1);
          if ( v75 >= 0 )
          {
            v67 = v73 - 1;
            if ( v75 != 47 )
              break;
          }
          else
          {
            v76 = *(_BYTE *)(v74 - 2);
            if ( v76 >= -64 )
            {
              v79 = v74 - 2;
              v81 = v76 & 0x1F;
            }
            else
            {
              v77 = *(_BYTE *)(v74 - 3);
              if ( v77 >= -64 )
              {
                v79 = v74 - 3;
                v80 = v77 & 0xF;
              }
              else
              {
                v78 = *(_BYTE *)(v74 - 4);
                v79 = v74 - 4;
                v80 = ((v78 & 7) << 6) | v77 & 0x3F;
              }
              v81 = (v80 << 6) | v76 & 0x3F;
            }
            v67 = v79 - v216;
            if ( ((v81 << 6) | v75 & 0x3F) != 0x2F )
              break;
          }
        }
        v167[0] = v216;
        v167[1] = v73;
        v186 = (char **)v167;
        v187 = (__int64)sub_140191200;
        sub_1416DAFA0(&v208, &unk_141A54A15, &v186);
        v212 = nullptr;
        v213 = 1;
        v214 = 0;
        v197.m128i_i64[0] = (__int64)&off_141A544A8;
        v197.m128i_i64[1] = (__int64)sub_140191200;
        sub_1416DAFA0(&v186, &unk_141A54A28, &v197);
        v82 = v186;
        v83 = v187;
        v84 = v188;
        if ( (_QWORD)v188 )
        {
          v217 = (char **)v187;
          v219 = (__int64)v186;
          sub_141939070((unsigned int)&v212, 0, v188, 1, 1);
          v85 = v213;
          v165 = v214;
          v166 = v217;
          sub_1419234B0(v214 + v213, v217, v84);
          v83 = (__int64)v166;
          v82 = (char **)v219;
          v86 = v84 + v165;
          v214 = v86;
          if ( v219 )
LABEL_160:
            sub_140001660(v83, v82, 1);
        }
        else
        {
          v85 = 1;
          v86 = 0;
          v214 = 0;
          if ( v186 )
            goto LABEL_160;
        }
        if ( (unsigned __int64)v212 - v86 <= 0x1C )
        {
          sub_141939070((unsigned int)&v212, v86, 29, 1, 1);
          v85 = v213;
          v86 = v214;
        }
        *(_OWORD *)(v85 + v86 + 13) = *(__int128 *)((char *)&xmmword_141A54A3F + 13);
        *(__m128i *)(v85 + v86) = _mm_loadu_si128((const __m128i *)&xmmword_141A54A3F);
        v87 = v86 + 29;
        v214 = v87;
        v88 = v209;
        sub_1408C2800(&v186, v209, v210);
        v171[0] = &v186;
        v171[1] = sub_1400015F0;
        sub_1416DAFA0(&v197, &unk_141A54A5C, v171);
        if ( v186 )
          sub_140001660(v187, v186, 1);
        v219 = v197.m128i_i64[1];
        v217 = (char **)v197.m128i_i64[0];
        v89 = v198;
        if ( (unsigned __int64)v198 > (unsigned __int64)v212 - v87 )
        {
          sub_141939070((unsigned int)&v212, v87, v198, 1, 1);
          v85 = v213;
          v87 = v214;
LABEL_167:
          sub_1419234B0(v87 + v85, v219, v89);
        }
        else if ( (_QWORD)v198 )
        {
          goto LABEL_167;
        }
        v90 = v89 + v87;
        v214 = v90;
        if ( v217 )
          sub_140001660(v219, v217, 1);
        if ( (unsigned __int64)v212 - v90 <= 0x16 )
        {
          sub_141939070((unsigned int)&v212, v90, 23, 1, 1);
          v90 = v214;
        }
        v91 = (char **)v213;
        *(__m128i *)(v213 + v90) = _mm_loadu_si128(&xmmword_141A54A6E);
        *(char **)((char *)v91 + v90 + 15) = (char *)0xA227365736E6F70LL;
        v92 = v90 + 23;
        v214 = v92;
        LOBYTE(v171[0]) = v218 ^ 1;
        v197.m128i_i64[0] = (__int64)v171;
        v197.m128i_i64[1] = (__int64)sub_1416EBC20;
        sub_1416DAFA0(&v186, &unk_141A54A85, &v197);
        v93 = v186;
        v219 = v187;
        v94 = v188;
        if ( (unsigned __int64)v188 > (unsigned __int64)v212 - v92 )
        {
          v217 = v186;
          sub_141939070((unsigned int)&v212, v92, v188, 1, 1);
          v91 = (char **)v213;
          v92 = v214;
          v93 = v217;
LABEL_174:
          sub_1419234B0((char *)v91 + v92, v219, v94);
        }
        else if ( (_QWORD)v188 )
        {
          goto LABEL_174;
        }
        v95 = v94 + v92;
        v214 = v95;
        if ( v93 )
          sub_140001660(v219, v93, 1);
        v96 = (__int64)v212;
        if ( (unsigned __int64)v212 - v95 <= 0x1B )
        {
          sub_141939070((unsigned int)&v212, v95, 28, 1, 1);
          v95 = v214;
          v96 = (__int64)v212;
          v91 = (char **)v213;
        }
        *(_OWORD *)((char *)v91 + v95 + 12) = *(__int128 *)((char *)&xmmword_141A54AA1 + 12);
        *(__m128i *)((char *)v91 + v95) = _mm_loadu_si128((const __m128i *)&xmmword_141A54AA1);
        v97 = v95 + 28;
        if ( v208 )
          sub_140001660(v88, v208, 1);
        v98 = v207;
        if ( v97 > (char *)v205 - (char *)v207 )
        {
          v219 = v96;
          v217 = v91;
          sub_141939070((unsigned int)&v205, (_DWORD)v207, v97, 1, 1);
          v98 = v207;
          v91 = v217;
          v96 = v219;
        }
        sub_1419234B0(&v98->m128i_i8[v206], v91, v97);
        v99 = (__m128i *)((char *)v98 + v97);
        v207 = v99;
        if ( v96 )
          sub_140001660(v91, v96, 1);
        if ( v218 )
        {
          v100 = v205;
          if ( v205 == v99 )
          {
            sub_141939070((unsigned int)&v205, (_DWORD)v99, 1, 1, 1);
            v100 = v205;
          }
          v217 = (char **)v206;
          v99->m128i_i8[v206] = 10;
          v101 = (__m128i *)&v99->m128i_i8[1];
          v207 = v101;
          if ( (unsigned __int64)((char *)v100 - (char *)v101) <= 0x4F )
          {
            sub_141939070((unsigned int)&v205, (_DWORD)v101, 80, 1, 1);
            v217 = (char **)v206;
            v101 = v207;
          }
          v102 = v217;
          *(__m128i *)((char *)&v101[4] + (_QWORD)v217) = (__m128i)xmmword_141A5446F;
          *(__m128i *)((char *)&v101[3] + (_QWORD)v102) = (__m128i)xmmword_141A5445F;
          *(__m128i *)((char *)&v101[2] + (_QWORD)v102) = (__m128i)xmmword_141A5444F;
          *(__m128i *)((char *)&v101[1] + (_QWORD)v102) = (__m128i)xmmword_141A5443F;
          *(__m128i *)((char *)v101 + (_QWORD)v102) = _mm_loadu_si128((const __m128i *)&xmmword_141A5442F);
          v103 = v101 + 5;
          goto LABEL_205;
        }
        sub_1408C2800(&v197, v184, *((_QWORD *)&v184 + 1));
        v186 = &off_141A543A8;
        v187 = (__int64)sub_140191200;
        *(_QWORD *)&v188 = &v197;
        *((_QWORD *)&v188 + 1) = sub_1400015F0;
        sub_1416DAFA0(&v212, &unk_141A543B8, &v186);
        if ( v197.m128i_i64[0] )
          sub_140001660(v197.m128i_i64[1], v197.m128i_i64[0], 1);
        v105 = (__int64)v212;
        v106 = v213;
        v107 = v214;
        if ( v214 > (char *)v205 - (char *)v99 )
        {
          v217 = (char **)v213;
          v219 = (__int64)v212;
          sub_141939070((unsigned int)&v205, (_DWORD)v99, v214, 1, 1);
          v108 = v207;
          v105 = v219;
          v106 = (__int64)v217;
LABEL_197:
          sub_1419234B0(&v108->m128i_i8[v206], v106, v107);
        }
        else
        {
          v108 = v207;
          if ( v214 )
            goto LABEL_197;
        }
        v109 = (__m128i *)((char *)v108 + v107);
        v207 = v109;
        if ( v105 )
          sub_140001660(v106, v105, 1);
        v110 = v205;
        if ( v205 == v109 )
        {
          sub_141939070((unsigned int)&v205, (_DWORD)v109, 1, 1, 1);
          v110 = v205;
        }
        v217 = (char **)v206;
        v109->m128i_i8[v206] = 10;
        v111 = (__m128i *)&v109->m128i_i8[1];
        v207 = v111;
        if ( (unsigned __int64)((char *)v110 - (char *)v111) <= 0x55 )
        {
          sub_141939070((unsigned int)&v205, (_DWORD)v111, 86, 1, 1);
          v217 = (char **)v206;
          v111 = v207;
        }
        v112 = v217;
        *(__m128i *)((char *)&v111[4] + (_QWORD)v217) = (__m128i)xmmword_141A54419;
        *(__m128i *)((char *)&v111[3] + (_QWORD)v112) = (__m128i)xmmword_141A54409;
        *(__m128i *)((char *)&v111[2] + (_QWORD)v112) = (__m128i)xmmword_141A543F9;
        *(__m128i *)((char *)&v111[1] + (_QWORD)v112) = (__m128i)xmmword_141A543E9;
        *(__m128i *)((char *)v111 + (_QWORD)v112) = _mm_loadu_si128((const __m128i *)&xmmword_141A543D9);
        *(__int64 *)((char *)&v111[4].m128i_i64[1] + (_QWORD)v112 + 6) = 0xA8B9EE5A1A8E6ACLL;
        v103 = (__m128i *)((char *)v111 + 86);
LABEL_205:
        v207 = v103;
        v104 = (__int64)v205;
        if ( (unsigned __int64)((char *)v205 - (char *)v103) <= 0x1D )
        {
          sub_141939070((unsigned int)&v205, (_DWORD)v103, 30, 1, 1);
          v103 = v207;
          v104 = (__int64)v205;
          v217 = (char **)v206;
        }
        v113 = v217;
        *(__m128i *)((char *)v103 + (_QWORD)v217 + 14) = *(__m128i *)((char *)&xmmword_141A5447F + 14);
        *(__m128i *)((char *)v103 + (_QWORD)v113) = _mm_loadu_si128((const __m128i *)&xmmword_141A5447F);
        if ( v172 )
          sub_140001660(v173, v172, 1);
        v4 = (unsigned __int64)&v103[1].m128i_u64[1] + 6;
        if ( !v183 )
          goto LABEL_282;
LABEL_210:
        v219 = v104;
        v208 = 0;
        v209 = 1;
        v210 = 0;
        sub_141939070((unsigned int)&v208, 0, 64, 1, 1);
        v114 = v209;
        v115 = v210;
        *(_OWORD *)(v209 + v210 + 48) = xmmword_141A5450E;
        qmemcpy((void *)(v114 + v115 + 16), "ay codex-router top start (DO NO", 32);
        *(__m128i *)(v114 + v115) = _mm_loadu_si128((const __m128i *)&xmmword_141A544DE);
        v210 = v115 + 64;
        v116 = v208;
        if ( v208 == v115 + 64 )
        {
          sub_141939070((unsigned int)&v208, v115 + 64, 1, 1, 1);
          v116 = v208;
          v114 = v209;
        }
        *(_BYTE *)(v114 + v115 + 64) = 10;
        v117 = v115 + 65;
        v210 = v117;
        if ( (unsigned __int64)(v116 - v117) <= 0x61 )
        {
          sub_141939070((unsigned int)&v208, v117, 98, 1, 1);
          v114 = v209;
          v117 = v210;
        }
        *(_OWORD *)(v114 + v117 + 80) = xmmword_141A5456E;
        *(_OWORD *)(v114 + v117 + 64) = xmmword_141A5455E;
        *(_OWORD *)(v114 + v117 + 48) = xmmword_141A5454E;
        *(_OWORD *)(v114 + v117 + 32) = xmmword_141A5453E;
        *(_OWORD *)(v114 + v117 + 16) = xmmword_141A5452E;
        *(__m128i *)(v114 + v117) = _mm_loadu_si128((const __m128i *)&xmmword_141A5451E);
        *(_WORD *)(v114 + v117 + 96) = 2692;
        v118 = v117 + 98;
        v210 = v118;
        v119 = v208 - v118;
        if ( v218 )
        {
          if ( v119 <= 0x68 )
          {
            sub_141939070((unsigned int)&v208, v118, 105, 1, 1);
            v114 = v209;
            v118 = v210;
          }
          *(_OWORD *)(v114 + v118 + 89) = *(__int128 *)((char *)&xmmword_141A5462D + 9);
          *(_OWORD *)(v114 + v118 + 80) = xmmword_141A5462D;
          *(_OWORD *)(v114 + v118 + 64) = xmmword_141A5461D;
          *(_OWORD *)(v114 + v118 + 48) = xmmword_141A5460D;
          *(_OWORD *)(v114 + v118 + 32) = xmmword_141A545FD;
          *(_OWORD *)(v114 + v118 + 16) = xmmword_141A545ED;
          *(__m128i *)(v114 + v118) = _mm_loadu_si128((const __m128i *)&xmmword_141A545DD);
          v120 = v118 + 105;
        }
        else
        {
          if ( v119 <= 0x5C )
          {
            sub_141939070((unsigned int)&v208, v118, 93, 1, 1);
            v114 = v209;
            v118 = v210;
          }
          *(_OWORD *)(v114 + v118 + 77) = *(__int128 *)((char *)&xmmword_141A545C0 + 13);
          *(_OWORD *)(v114 + v118 + 64) = xmmword_141A545C0;
          *(_OWORD *)(v114 + v118 + 48) = xmmword_141A545B0;
          *(_OWORD *)(v114 + v118 + 32) = xmmword_141A545A0;
          *(_OWORD *)(v114 + v118 + 16) = xmmword_141A54590;
          *(__m128i *)(v114 + v118) = _mm_loadu_si128((const __m128i *)&xmmword_141A54580);
          v120 = v118 + 93;
        }
        v210 = v120;
        if ( (unsigned __int64)(v208 - v120) <= 0x46 )
        {
          sub_141939070((unsigned int)&v208, v120, 71, 1, 1);
          v114 = v209;
          v120 = v210;
        }
        *(_OWORD *)(v114 + v120 + 48) = xmmword_141A54676;
        *(_OWORD *)(v114 + v120 + 32) = xmmword_141A54666;
        *(_OWORD *)(v114 + v120 + 16) = xmmword_141A54656;
        *(__m128i *)(v114 + v120) = _mm_loadu_si128((const __m128i *)&xmmword_141A54646);
        *(_QWORD *)(v114 + v120 + 63) = 0xAA499E9BBA7E7A8LL;
        v121 = v120 + 71;
        v210 = v121;
        if ( !v218 )
        {
          if ( (unsigned __int64)(v208 - v121) <= 0x57 )
          {
            sub_141939070((unsigned int)&v208, v121, 88, 1, 1);
            v114 = v209;
            v121 = v210;
          }
          *(_OWORD *)(v114 + v121 + 64) = xmmword_141A546CD;
          *(_OWORD *)(v114 + v121 + 48) = xmmword_141A546BD;
          *(_OWORD *)(v114 + v121 + 32) = xmmword_141A546AD;
          *(_OWORD *)(v114 + v121 + 16) = xmmword_141A5469D;
          *(__m128i *)(v114 + v121) = _mm_loadu_si128((const __m128i *)&xmmword_141A5468D);
          *(_QWORD *)(v114 + v121 + 80) = 0xAA18AE58D9CE6B9LL;
          v121 += 88;
          v210 = v121;
          if ( !(unsigned __int8)sub_1408C6CD0(v204, v34, aExperimentalRe, 33) )
          {
            sub_1408C2800(&v197, aHttpsChatgptCo, 37);
            v186 = &off_141A54708;
            v187 = (__int64)sub_140191200;
            *(_QWORD *)&v188 = &v197;
            *((_QWORD *)&v188 + 1) = sub_1400015F0;
            sub_1416DAFA0(&v212, &unk_141A54718, &v186);
            if ( v197.m128i_i64[0] )
              sub_140001660(v197.m128i_i64[1], v197.m128i_i64[0], 1);
            v122 = v212;
            v216 = v213;
            v123 = v214;
            if ( v214 > v208 - v121 )
            {
              v211 = (const __m128i *)v212;
              sub_141939070((unsigned int)&v208, v121, v214, 1, 1);
              v114 = v209;
              v121 = v210;
              v122 = (void *)v211;
LABEL_231:
              sub_1419234B0(v121 + v114, v216, v123);
            }
            else if ( v214 )
            {
              goto LABEL_231;
            }
            v121 += v123;
            v210 = v121;
            if ( v122 )
              sub_140001660(v216, v122, 1);
          }
          if ( !(unsigned __int8)sub_1408C6CD0(v204, v34, aExperimentalRe_0, 42) )
          {
            sub_1408C2800(&v197, aHttpsChatgptCo, 37);
            v186 = &off_141A54750;
            v187 = (__int64)sub_140191200;
            *(_QWORD *)&v188 = &v197;
            *((_QWORD *)&v188 + 1) = sub_1400015F0;
            sub_1416DAFA0(&v212, &unk_141A54718, &v186);
            if ( v197.m128i_i64[0] )
              sub_140001660(v197.m128i_i64[1], v197.m128i_i64[0], 1);
            v124 = (__int64)v212;
            v125 = v213;
            v126 = v214;
            if ( v214 > v208 - v121 )
            {
              v211 = (const __m128i *)v213;
              v216 = (__int64)v212;
              sub_141939070((unsigned int)&v208, v121, v214, 1, 1);
              v121 = v210;
              v124 = v216;
              v125 = (__int64)v211;
LABEL_239:
              sub_1419234B0(v121 + v209, v125, v126);
            }
            else if ( v214 )
            {
              goto LABEL_239;
            }
            v121 += v126;
            v210 = v121;
            if ( v124 )
              sub_140001660(v125, v124, 1);
          }
        }
        sub_1408C2800(&v186, &dword_141A5449D, 6);
        v212 = &v186;
        v213 = (__int64)sub_1400015F0;
        sub_1416DAFA0(&v197, &unk_141A54760, &v212);
        if ( v186 )
          sub_140001660(v187, v186, 1);
        v216 = v197.m128i_i64[1];
        v127 = v197.m128i_i64[0];
        v128 = v198;
        if ( (unsigned __int64)v198 > v208 - v121 )
        {
          v211 = (const __m128i *)v197.m128i_i64[0];
          sub_141939070((unsigned int)&v208, v121, v198, 1, 1);
          v121 = v210;
          v127 = (__int64)v211;
LABEL_246:
          sub_1419234B0(v121 + v209, v216, v128);
        }
        else if ( (_QWORD)v198 )
        {
          goto LABEL_246;
        }
        v129 = v128 + v121;
        v210 = v129;
        if ( v127 )
          sub_140001660(v216, v127, 1);
        if ( v218 )
        {
          sub_1416DA570(&v186);
          v216 = v187;
          sub_1408C2800(&v197, v187, v188);
          v205 = &v197;
          v206 = (__int64)sub_1400015F0;
          sub_1416DAFA0(&v212, &unk_141A54778, &v205);
          if ( v197.m128i_i64[0] )
            sub_140001660(v197.m128i_i64[1], v197.m128i_i64[0], 1);
          if ( (__int64)v186 > 0 )
            sub_140001660(v216, v186, 1);
          v130 = (__int64)v212;
          v131 = v213;
          v132 = v214;
          if ( v214 > v208 - v129 )
          {
            v211 = (const __m128i *)v213;
            v216 = (__int64)v212;
            sub_141939070((unsigned int)&v208, v129, v214, 1, 1);
            v129 = v210;
            v130 = v216;
            v131 = (__int64)v211;
LABEL_256:
            sub_1419234B0(v129 + v209, v131, v132);
          }
          else if ( v214 )
          {
            goto LABEL_256;
          }
          v129 += v132;
          v210 = v129;
          if ( v130 )
            sub_140001660(v131, v130, 1);
        }
        v133 = v208;
        if ( (unsigned __int64)(v208 - v129) <= 0x26 )
        {
          sub_141939070((unsigned int)&v208, v129, 39, 1, 1);
          v133 = v208;
          v129 = v210;
        }
        v134 = v209;
        *(_OWORD *)(v209 + v129 + 16) = xmmword_141A547A4;
        *(__m128i *)(v134 + v129) = _mm_loadu_si128((const __m128i *)&xmmword_141A54794);
        v216 = v134;
        *(_QWORD *)(v134 + v129 + 31) = 0x646E6520706F7420LL;
        v135 = v219 == -1;
        if ( v133 == -1 )
        {
          v104 = v219;
          goto LABEL_283;
        }
        v136 = v129 + 39;
        LOBYTE(v211) = v219 == -1;
        if ( v34 )
        {
          v137 = v204;
          v138 = 0;
          while ( 1 )
          {
            v139 = (unsigned __int8)*v137;
            if ( *v137 < 0 )
            {
              v141 = v139 & 0x1F;
              v142 = v137[1] & 0x3F;
              if ( (unsigned __int8)v139 <= 0xDFu )
              {
                v140 = (unsigned __int8 *)(v137 + 2);
                v139 = v142 | (v141 << 6);
                if ( v139 != 13 )
                  goto LABEL_275;
              }
              else
              {
                v143 = (v142 << 6) | v137[2] & 0x3F;
                if ( (unsigned __int8)*v137 < 0xF0u )
                {
                  v140 = (unsigned __int8 *)(v137 + 3);
                  v139 = (v141 << 12) | v143;
                  if ( v139 != 13 )
                  {
LABEL_275:
                    if ( v139 != 10 )
                      goto LABEL_335;
                  }
                }
                else
                {
                  v140 = (unsigned __int8 *)(v137 + 4);
                  v139 = ((v141 & 7) << 18) | (v143 << 6) | v137[3] & 0x3F;
                  if ( v139 != 13 )
                    goto LABEL_275;
                }
              }
            }
            else
            {
              v140 = (unsigned __int8 *)(v137 + 1);
              if ( v139 != 13 )
                goto LABEL_275;
            }
            v138 = (unsigned __int64)&v140[v138 - (_QWORD)v137];
            v137 = (char *)v140;
            if ( v140 == (unsigned __int8 *)&v204[v34] )
            {
              v138 = v34;
              goto LABEL_335;
            }
          }
        }
        v138 = 0;
LABEL_335:
        v186 = nullptr;
        v187 = 1;
        *(_QWORD *)&v188 = 0;
        v203 = v219;
        v202 = v217;
        v201 = v133;
        v200 = v216;
        sub_141939070((unsigned int)&v186, 0, v136, 1, 1);
        v146 = v187;
        v163 = v188;
        sub_1419234B0(v188 + v187, v216, v136);
        v164 = (char **)(v136 + v163);
        *(_QWORD *)&v188 = v164;
        if ( v186 == v164 )
        {
          v203 = v219;
          v202 = v217;
          v201 = v133;
          v200 = v216;
          sub_141939070((unsigned int)&v186, (_DWORD)v164, 1, 1, 1);
          v146 = v187;
        }
        v34 -= v138;
        *((_BYTE *)v164 + v146) = 10;
        v147 = (char **)((char *)v164 + 1);
        *(_QWORD *)&v188 = (char *)v164 + 1;
        if ( v34 )
        {
          if ( v186 == v147 )
          {
            v203 = v219;
            v202 = v217;
            v201 = v133;
            v200 = v216;
            sub_141939070((unsigned int)&v186, (_DWORD)v164 + 1, 1, 1, 1);
            v146 = v187;
          }
          v145 = &v204[v138];
          *((_BYTE *)v164 + v146 + 1) = 10;
          *(_QWORD *)&v188 = (char *)v164 + 2;
          v144 = (char *)v164 + 2;
          v135 = (char)v211;
          if ( v34 > (char *)v186 - v144 )
          {
LABEL_341:
            v203 = v219;
            v202 = v217;
            v201 = v133;
            v200 = v216;
            sub_141939070((unsigned int)&v186, (_DWORD)v144, v34, 1, 1);
            v144 = (char *)v188;
          }
          v146 = v187;
          sub_1419234B0(&v144[v187], v145, v34);
          v147 = (char **)&v144[v34];
          *(_QWORD *)&v188 = v147;
          if ( v145[v34 - 1] == 10 )
          {
            v148 = 1;
            if ( v135 )
              goto LABEL_310;
            goto LABEL_287;
          }
          if ( v186 == v147 )
          {
            v203 = v219;
            v202 = v217;
            v201 = v133;
            v200 = v216;
            sub_141939070((unsigned int)&v186, (_DWORD)v147, 1, 1, 1);
            v146 = v187;
          }
          *((_BYTE *)v147 + v146) = 10;
          v147 = (char **)((char *)v147 + 1);
          *(_QWORD *)&v188 = v147;
          v148 = 1;
          if ( v135 )
            goto LABEL_310;
        }
        else
        {
          v148 = 1;
          if ( (_BYTE)v211 )
            goto LABEL_310;
LABEL_287:
          if ( !v147 )
          {
            v147 = nullptr;
            goto LABEL_304;
          }
        }
        if ( v147 == (char **)1 || *(_WORD *)((char *)v147 + v146 - 2) != 2570 )
        {
          if ( *((_BYTE *)v147 + v146 - 1) == 10 )
          {
            if ( v186 == v147 )
            {
              v203 = v219;
              v202 = v217;
              v201 = v133;
              v200 = v216;
              sub_141939070((unsigned int)&v186, (_DWORD)v147, 1, 1, 1);
              v146 = v187;
            }
            *((_BYTE *)v147 + v146) = 10;
            v147 = (char **)((char *)v147 + 1);
          }
          else
          {
            if ( (unsigned __int64)((char *)v186 - (char *)v147) <= 1 )
            {
              v203 = v219;
              v202 = v217;
              v201 = v133;
              v200 = v216;
              sub_141939070((unsigned int)&v186, (_DWORD)v147, 2, 1, 1);
              v146 = v187;
              v147 = (char **)v188;
            }
            *(_WORD *)((char *)v147 + v146) = 2570;
            v147 = (char **)(v188 + 2);
          }
          *(_QWORD *)&v188 = v147;
        }
        goto LABEL_304;
      }
      v60 = &v204[v34];
      v61 = &v204[v34 - 2];
      if ( *(_WORD *)v61 != 2570 )
        goto LABEL_137;
    }
  }
  if ( !v34 )
    goto LABEL_280;
LABEL_121:
  v34 = *v204 != 10;
  v185 = v212;
  if ( (_BYTE)v217 )
    goto LABEL_138;
LABEL_281:
  v104 = -1;
LABEL_282:
  v135 = v104 == -1;
LABEL_283:
  v219 = v104;
  v186 = nullptr;
  v187 = 1;
  *(_QWORD *)&v188 = 0;
  v133 = -1;
  if ( v34 )
  {
    LODWORD(v144) = 0;
    v145 = v204;
    goto LABEL_341;
  }
  v147 = nullptr;
  if ( v135 )
  {
    v148 = 1;
    v146 = 1;
    goto LABEL_310;
  }
LABEL_304:
  if ( v4 > (char *)v186 - (char *)v147 )
  {
    v203 = v219;
    v202 = v217;
    v201 = v133;
    v200 = v216;
    sub_141939070((unsigned int)&v186, (_DWORD)v147, v4, 1, 1);
    v147 = (char **)v188;
LABEL_306:
    sub_1419234B0((char *)v147 + v187, v217, v4);
    v147 = (char **)v188;
  }
  else if ( v4 )
  {
    goto LABEL_306;
  }
  v149 = (char **)((char *)v147 + v4);
  *(_QWORD *)&v188 = v149;
  if ( v186 == v149 )
  {
    v203 = v219;
    v202 = v217;
    v201 = v133;
    v200 = v216;
    sub_141939070((unsigned int)&v186, (_DWORD)v149, 1, 1, 1);
  }
  *((_BYTE *)v149 + v187) = 10;
  v147 = (char **)((char *)v149 + 1);
  *(_QWORD *)&v188 = v147;
  v148 = 0;
  v146 = v187;
LABEL_310:
  v203 = v219;
  v202 = v217;
  v201 = v133;
  v200 = v216;
  sub_1408CCA30(v180, v146, v147);
  if ( v186 )
    sub_140001660(v187, v186, 1);
  _RAX = v133 - 1;
  v151 = v185;
  if ( (unsigned __int64)(v133 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
    sub_140001660(v216, v133, 1);
  if ( !((v219 == 0) | (unsigned __int8)v148) )
    sub_140001660(v217, v219, 1);
  if ( v151 )
    sub_140001660(v204, v151, 1);
  if ( v174 )
    sub_140001660(v175, v174, 1);
  v152 = v168.m128i_i64[1];
  if ( v168.m128i_i64[1] )
  {
    v153 = *((_QWORD *)&v169 + 1);
    if ( *((_QWORD *)&v169 + 1) )
    {
      v154 = v168.m128i_i64[0];
      v155 = (const __m128i *)(v168.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v168.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v155);
            v154 -= 384;
            ++v155;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v158 = -3 * _RAX;
        v159 = *(_QWORD *)(v154 + 8 * v158 - 24);
        if ( v159 )
          sub_140001660(*(_QWORD *)(v154 + 8 * v158 - 16), v159, 1);
        --v153;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v153 );
    }
    v160 = (24 * v152 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v161 = v160 + v152 + 17;
    if ( v161 )
      sub_140001660(v168.m128i_i64[0] - v160, v161, 16);
  }
  if ( v177 )
    sub_140001660(v178, 8 * v177, 8);
  return v180;
}
