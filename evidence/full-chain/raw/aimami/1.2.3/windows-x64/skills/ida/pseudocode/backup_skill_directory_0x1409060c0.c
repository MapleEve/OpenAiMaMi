// module: codexmate_lib/core/skills
// addr: 0x1409060c0
// name: backup_skill_directory
// win 1.2.3 | truncation-stub REDUCED to full body (48714 chars) via py_eval direct ida_hexrays.decompile paged retrieval (red line 13/20) | session win-1.2.3-truncation-reducer-20260726
// win 1.2.3 | = mac codexmate_lib::core::skills::backup_skill_directory | cross-platform string-signature match (name<->func, win-native)
// win 1.2.3 | = mac codexmate_lib::core::skills::backup_skill_directory | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall backup_skill_directory(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rbx
  __int64 v29; // r13
  __int64 v30; // r9
  __int64 v31; // r10
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // r8
  char v44; // al
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  unsigned __int64 v73; // rax
  __int64 v74; // rcx
  unsigned __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r10
  _QWORD *v80; // r11
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r14
  unsigned int v85; // ebx
  unsigned int v86; // r15d
  __int64 v87; // r12
  __int64 v88; // r15
  __int64 v89; // rax
  __int64 v90; // rbx
  _QWORD *v91; // rax
  _QWORD *v92; // r15
  __int64 v93; // r14
  __int64 v94; // rbx
  __int64 v95; // rax
  int v96; // eax
  char v97; // r15
  __int64 v98; // r14
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // r15
  __int64 v102; // rbx
  _QWORD *v103; // rbx
  __int64 v104; // r14
  __int64 v105; // r14
  __int64 v106; // r15
  __int64 v107; // r12
  unsigned int v108; // ebx
  __int64 v109; // r14
  unsigned int v110; // ebx
  __int64 v111; // r14
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rcx
  _QWORD *v118; // rax
  __int64 v119; // rdx
  char v121; // al
  __int64 v122; // rdx
  __int128 v123; // [rsp+20h] [rbp-60h]
  __int128 v124; // [rsp+30h] [rbp-50h]
  __int128 v125; // [rsp+40h] [rbp-40h]
  __int128 v126; // [rsp+50h] [rbp-30h]
  __int128 v127; // [rsp+60h] [rbp-20h]
  __int128 v128; // [rsp+70h] [rbp-10h]
  __int128 v129; // [rsp+80h] [rbp+0h]
  _QWORD *v130; // [rsp+90h] [rbp+10h] BYREF
  char v131; // [rsp+98h] [rbp+18h]
  __int64 v132; // [rsp+A0h] [rbp+20h]
  __int64 v133; // [rsp+A8h] [rbp+28h]
  __int64 v134; // [rsp+B0h] [rbp+30h]
  __int64 v135; // [rsp+B8h] [rbp+38h]
  __int64 v136; // [rsp+C0h] [rbp+40h]
  __int64 v137; // [rsp+C8h] [rbp+48h]
  __int128 v138; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v139; // [rsp+E0h] [rbp+60h]
  __int128 v140; // [rsp+F0h] [rbp+70h]
  __int128 v141; // [rsp+100h] [rbp+80h]
  __int128 v142; // [rsp+110h] [rbp+90h]
  __int128 v143; // [rsp+120h] [rbp+A0h]
  __int128 v144; // [rsp+130h] [rbp+B0h]
  __int128 v145; // [rsp+140h] [rbp+C0h]
  char v146; // [rsp+157h] [rbp+D7h] BYREF
  __int64 v147; // [rsp+158h] [rbp+D8h]
  __int128 v148; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v149; // [rsp+170h] [rbp+F0h]
  __int128 v150; // [rsp+180h] [rbp+100h]
  __int128 v151; // [rsp+190h] [rbp+110h]
  __int128 v152; // [rsp+1A0h] [rbp+120h]
  __int128 v153; // [rsp+1B0h] [rbp+130h]
  __int128 v154; // [rsp+1C0h] [rbp+140h]
  __int128 v155; // [rsp+1D0h] [rbp+150h]
  _QWORD *v156; // [rsp+1E0h] [rbp+160h]
  __int64 v157; // [rsp+1F0h] [rbp+170h]
  _QWORD *v158; // [rsp+1F8h] [rbp+178h]
  __int64 v159; // [rsp+200h] [rbp+180h]
  __int64 v160; // [rsp+208h] [rbp+188h]
  __int64 v161; // [rsp+210h] [rbp+190h]
  char v162; // [rsp+21Bh] [rbp+19Bh]
  char v163; // [rsp+21Ch] [rbp+19Ch]
  char v164; // [rsp+21Dh] [rbp+19Dh]
  char v165; // [rsp+21Eh] [rbp+19Eh]
  char v166; // [rsp+21Fh] [rbp+19Fh]
  __int64 v167; // [rsp+220h] [rbp+1A0h]
  __int64 v168; // [rsp+228h] [rbp+1A8h]
  __int64 v169; // [rsp+230h] [rbp+1B0h]
  __int64 v170; // [rsp+238h] [rbp+1B8h]
  __int64 v171; // [rsp+240h] [rbp+1C0h]
  __int64 v172; // [rsp+248h] [rbp+1C8h]
  __int64 v173; // [rsp+250h] [rbp+1D0h]
  __int64 v174; // [rsp+258h] [rbp+1D8h]
  _QWORD *v175; // [rsp+260h] [rbp+1E0h]
  __int64 v176; // [rsp+268h] [rbp+1E8h]
  __int64 v177; // [rsp+270h] [rbp+1F0h]
  __int64 v178; // [rsp+278h] [rbp+1F8h]
  _QWORD *v179; // [rsp+280h] [rbp+200h]
  char v180; // [rsp+28Bh] [rbp+20Bh]
  char v181; // [rsp+28Ch] [rbp+20Ch]
  char v182; // [rsp+28Dh] [rbp+20Dh]
  char v183; // [rsp+28Eh] [rbp+20Eh]
  char v184; // [rsp+28Fh] [rbp+20Fh]
  __int64 v185; // [rsp+290h] [rbp+210h]

  v185 = -2;
  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 < v9 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    v12 = v10 + 1;
    v13 = -(__int64)v9;
    v14 = 0x100002600LL;
    while ( 1 )
    {
      a3 = *(unsigned __int8 *)(v11 + v12 - 1);
      if ( a3 > 0x20 || !_bittest64(&v14, a3) )
        break;
      *(_QWORD *)(a2 + 40) = v12;
      a3 = v13 + v12++ + 1;
      if ( a3 == 1 )
        goto LABEL_6;
    }
    if ( (_DWORD)a3 != 91 )
    {
      if ( (_DWORD)a3 == 123 )
      {
        v16 = (*(_BYTE *)(a2 + 72))-- == 1;
        if ( !v16 )
        {
          *(_QWORD *)(a2 + 40) = v12;
          v130 = (_QWORD *)a2;
          v131 = 1;
          v17 = -2;
          v18 = -1;
          v172 = 0;
          v19 = -1;
          v20 = -1;
          v21 = -1;
          v135 = a1;
LABEL_13:
          v175 = (_QWORD *)v18;
LABEL_14:
          v177 = v17;
          while ( 2 )
          {
            v178 = v19;
LABEL_16:
            v179 = (_QWORD *)v20;
LABEL_17:
            v176 = v21;
LABEL_18:
            v171 = v18;
            v170 = v17;
            v169 = v19;
            v168 = v20;
            v167 = v21;
            v184 = 1;
            v183 = 1;
            v182 = 1;
            v181 = 1;
            v180 = 1;
            sub_1408C4160(&v148, &v130);
            if ( (_BYTE)v148 == 1 )
            {
              v29 = *((_QWORD *)&v148 + 1);
LABEL_119:
              v97 = 1;
LABEL_120:
              LODWORD(v173) = 0;
              v19 = v178;
              v98 = (__int64)v179;
              goto LABEL_121;
            }
            v25 = (__int64)v175;
            v26 = (__int64)v179;
            v27 = v177;
            if ( BYTE1(v148) == 1 )
            {
              v28 = v130;
              ++v130[5];
              v4 = (__int64)(v28 + 3);
              v28[2] = 0;
              v171 = v25;
              v170 = v27;
              v169 = v178;
              v168 = v26;
              v167 = v176;
              v184 = 1;
              v183 = 1;
              v182 = 1;
              v181 = 1;
              v180 = 1;
              sub_141435D60(&v148, v28 + 3, v28);
              v29 = *((_QWORD *)&v148 + 1);
              if ( (_DWORD)v148 == 2 )
                goto LABEL_119;
              v30 = (__int64)v175;
              v31 = v177;
              switch ( (__int64)v149 )
              {
                case 4LL:
                  if ( **((_DWORD **)&v148 + 1) != 1701667182 )
                    goto LABEL_33;
                  if ( v178 == -1 )
                  {
                    v58 = v28[4];
                    v59 = v28[5];
                    if ( v59 >= v58 )
                    {
LABEL_191:
                      *(_QWORD *)&v148 = 3;
                      v171 = v30;
                      v170 = v31;
                      v169 = -1;
                      v168 = (__int64)v179;
                      v167 = v176;
                      v184 = 1;
                      v183 = 1;
                      v182 = 1;
                      v181 = 1;
                      v180 = 1;
                      v115 = sub_14169AEA0(v28, &v148, v22);
                    }
                    else
                    {
                      v60 = *(_QWORD *)v4;
                      v61 = v59 + 1;
                      v62 = -(__int64)v58;
                      while ( 1 )
                      {
                        v63 = *(unsigned __int8 *)(v60 + v61 - 1);
                        if ( v63 > 0x3A )
                          goto LABEL_249;
                        if ( !_bittest64(&v14, v63) )
                          break;
                        v28[5] = v61;
                        v22 = v62 + v61++ + 1;
                        if ( v22 == 1 )
                          goto LABEL_191;
                      }
                      if ( v63 == 58 )
                      {
                        v28[5] = v61;
                        v171 = v30;
                        v170 = v31;
                        v169 = -1;
                        v168 = (__int64)v179;
                        v167 = v176;
                        v184 = 1;
                        v183 = 1;
                        v182 = 1;
                        v181 = 1;
                        v180 = 1;
                        sub_1409587C0(&v138, v28);
                        v29 = *((_QWORD *)&v138 + 1);
                        if ( (_QWORD)v138 != -1 )
                        {
                          v159 = v139;
                          v158 = *((_QWORD **)&v138 + 1);
                          v19 = v138;
                          v18 = (__int64)v175;
                          v20 = (__int64)v179;
                          v21 = v176;
                          v17 = v177;
                          continue;
                        }
                        goto LABEL_193;
                      }
LABEL_249:
                      *(_QWORD *)&v148 = 6;
                      v171 = v30;
                      v170 = v31;
                      v169 = -1;
                      v168 = (__int64)v179;
                      v167 = v176;
                      v184 = 1;
                      v183 = 1;
                      v182 = 1;
                      v181 = 1;
                      v180 = 1;
                      v115 = sub_14169AEA0(v28, &v148, v63);
                    }
                    v29 = v115;
LABEL_193:
                    v18 = (__int64)v175;
                    v98 = (__int64)v179;
                    v17 = v177;
                    v97 = 1;
                    v19 = -1;
                    goto LABEL_197;
                  }
                  *(_QWORD *)&v138 = aName_6;
                  *((_QWORD *)&v138 + 1) = 4;
                  *(_QWORD *)&v148 = &v138;
                  *((_QWORD *)&v148 + 1) = sub_14041F680;
                  v171 = (__int64)v175;
                  v170 = v177;
                  v169 = v178;
                  v168 = (__int64)v179;
                  v167 = v176;
                  v184 = 1;
                  v183 = 1;
                  v182 = 1;
                  v181 = 1;
                  v180 = 1;
                  v82 = sub_141697610(&unk_14177DAF4, &v148, v22);
LABEL_109:
                  v29 = v82;
                  break;
                case 5LL:
                  if ( **((_DWORD **)&v148 + 1) ^ 0x6C746974 | *(unsigned __int8 *)(*((_QWORD *)&v148 + 1) + 4LL) ^ 0x65 )
                    goto LABEL_33;
                  if ( v177 != -2 )
                  {
                    *(_QWORD *)&v138 = aTitle_4;
                    *((_QWORD *)&v138 + 1) = 5;
                    *(_QWORD *)&v148 = &v138;
                    *((_QWORD *)&v148 + 1) = sub_14041F680;
                    v171 = (__int64)v175;
                    v170 = v177;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v82 = sub_141697610(&unk_14177DAF4, &v148, v22);
                    goto LABEL_109;
                  }
                  v64 = v28[4];
                  v65 = v28[5];
                  if ( v65 >= v64 )
                  {
LABEL_188:
                    *(_QWORD *)&v148 = 3;
                    v171 = v30;
                    v170 = -2;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v114 = sub_14169AEA0(v28, &v148, v22);
LABEL_189:
                    v29 = v114;
LABEL_190:
                    v18 = (__int64)v175;
                    v19 = v178;
                    v98 = (__int64)v179;
                    v83 = v174;
                    v97 = 1;
                    v17 = -2;
                    LODWORD(v173) = 0;
                    LOBYTE(v22) = 1;
                    LOBYTE(v172) = 1;
                    LOBYTE(v4) = 1;
                    goto LABEL_123;
                  }
                  v66 = *(_QWORD *)v4;
                  v67 = v65 + 1;
                  v68 = -(__int64)v64;
                  while ( 1 )
                  {
                    v69 = *(unsigned __int8 *)(v66 + v67 - 1);
                    if ( v69 > 0x3A )
                      goto LABEL_250;
                    if ( !_bittest64(&v14, v69) )
                      break;
                    v28[5] = v67;
                    v22 = v68 + v67++ + 1;
                    if ( v22 == 1 )
                      goto LABEL_188;
                  }
                  if ( v69 != 58 )
                  {
LABEL_250:
                    *(_QWORD *)&v148 = 6;
                    v171 = v30;
                    v170 = -2;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v114 = sub_14169AEA0(v28, &v148, v69);
                    goto LABEL_189;
                  }
                  v28[5] = v67;
                  v171 = v30;
                  v170 = -2;
                  v169 = v178;
                  v168 = (__int64)v179;
                  v167 = v176;
                  v184 = 1;
                  v183 = 1;
                  v182 = 1;
                  v181 = 1;
                  v180 = 1;
                  sub_1408C7930(&v138, v28);
                  v29 = *((_QWORD *)&v138 + 1);
                  v17 = v138;
                  if ( (_QWORD)v138 == -2 )
                    goto LABEL_190;
                  v132 = v139;
                  v160 = *((_QWORD *)&v138 + 1);
                  v18 = (__int64)v175;
                  v19 = v178;
                  v20 = (__int64)v179;
                  v21 = v176;
                  goto LABEL_14;
                case 7LL:
                  if ( **((_DWORD **)&v148 + 1) ^ 0x6C696B73 | *(_DWORD *)(*((_QWORD *)&v148 + 1) + 3LL) ^ 0x44496C6C )
                    goto LABEL_33;
                  if ( v179 != (_QWORD *)-1LL )
                  {
                    *(_QWORD *)&v138 = aSkillid;
                    *((_QWORD *)&v138 + 1) = 7;
                    *(_QWORD *)&v148 = &v138;
                    *((_QWORD *)&v148 + 1) = sub_14041F680;
                    v171 = (__int64)v175;
                    v170 = v177;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v82 = sub_141697610(&unk_14177DAF4, &v148, v22);
                    goto LABEL_109;
                  }
                  v52 = v28[4];
                  v53 = v28[5];
                  if ( v53 >= v52 )
                  {
LABEL_181:
                    *(_QWORD *)&v148 = 3;
                    v171 = v30;
                    v170 = v31;
                    v169 = v178;
                    v168 = -1;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v112 = sub_14169AEA0(v28, &v148, v22);
LABEL_182:
                    v29 = v112;
LABEL_183:
                    v19 = v178;
                    v97 = 1;
                    v98 = -1;
                    LODWORD(v173) = 0;
LABEL_121:
                    LOBYTE(v22) = 1;
                    LOBYTE(v172) = 1;
                    LOBYTE(v4) = 1;
                    v18 = (__int64)v175;
                    v83 = v174;
LABEL_122:
                    v17 = v177;
                    goto LABEL_123;
                  }
                  v54 = *(_QWORD *)v4;
                  v55 = v53 + 1;
                  v56 = -(__int64)v52;
                  while ( 1 )
                  {
                    v57 = *(unsigned __int8 *)(v54 + v55 - 1);
                    if ( v57 > 0x3A )
                      goto LABEL_252;
                    if ( !_bittest64(&v14, v57) )
                      break;
                    v28[5] = v55;
                    v22 = v56 + v55++ + 1;
                    if ( v22 == 1 )
                      goto LABEL_181;
                  }
                  if ( v57 != 58 )
                  {
LABEL_252:
                    *(_QWORD *)&v148 = 6;
                    v171 = v30;
                    v170 = v31;
                    v169 = v178;
                    v168 = -1;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v112 = sub_14169AEA0(v28, &v148, v57);
                    goto LABEL_182;
                  }
                  v28[5] = v55;
                  v171 = v30;
                  v170 = v31;
                  v169 = v178;
                  v168 = -1;
                  v167 = v176;
                  v184 = 1;
                  v183 = 1;
                  v182 = 1;
                  v181 = 1;
                  v180 = 1;
                  sub_1409587C0(&v138, v28);
                  v29 = *((_QWORD *)&v138 + 1);
                  if ( (_QWORD)v138 == -1 )
                    goto LABEL_183;
                  v147 = v139;
                  v161 = *((_QWORD *)&v138 + 1);
                  v20 = v138;
                  v18 = (__int64)v175;
                  v19 = v178;
                  v21 = v176;
                  v17 = v177;
                  goto LABEL_16;
                case 8LL:
                  if ( **((_QWORD **)&v148 + 1) != 0x444970756B636162LL )
                    goto LABEL_33;
                  if ( v176 != -1 )
                  {
                    *(_QWORD *)&v138 = aBackupid;
                    *((_QWORD *)&v138 + 1) = 8;
                    *(_QWORD *)&v148 = &v138;
                    *((_QWORD *)&v148 + 1) = sub_14041F680;
                    v171 = (__int64)v175;
                    v170 = v177;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v82 = sub_141697610(&unk_14177DAF4, &v148, v22);
                    goto LABEL_109;
                  }
                  v46 = v28[4];
                  v47 = v28[5];
                  if ( v47 >= v46 )
                  {
LABEL_194:
                    *(_QWORD *)&v148 = 3;
                    v171 = v30;
                    v170 = v31;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = -1;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v116 = sub_14169AEA0(v28, &v148, v22);
LABEL_195:
                    v29 = v116;
LABEL_196:
                    v18 = (__int64)v175;
                    v19 = v178;
                    v98 = (__int64)v179;
                    v17 = v177;
                    v97 = 1;
                    v176 = -1;
LABEL_197:
                    LODWORD(v173) = 0;
LABEL_144:
                    LOBYTE(v22) = 1;
                    LOBYTE(v172) = 1;
                    LOBYTE(v4) = 1;
                    v83 = v174;
LABEL_123:
                    if ( ((unsigned __int8)v97 & ((unsigned __int64)(v18 - 1) < 0xFFFFFFFFFFFFFFFEuLL)) != 0 )
                    {
                      a1 = v98;
                      v84 = v19;
                      v85 = v22;
                      v86 = v4;
                      v87 = v17;
                      sub_140001660(v83, v18, 1);
                      v22 = v85;
                      v19 = v84;
                      v98 = a1;
                      v17 = v87;
                      v4 = v86;
                    }
                    v26 = v160;
                    v88 = (unsigned int)v173;
                    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    {
LABEL_126:
                      if ( (_BYTE)v22 )
                        sub_140001660(v26, v17, 1);
                    }
LABEL_128:
                    if ( (((unsigned __int64)(v19 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & (unsigned __int8)v172) != 0 )
                      sub_140001660(v158, v19, 1);
                    if ( ((unsigned __int8)v4 & ((unsigned __int64)(v98 - 1) < 0xFFFFFFFFFFFFFFFEuLL)) != 0 )
                      sub_140001660(v161, v98, 1);
                    v89 = v176 + 1;
                    LOBYTE(v89) = v88 | ((unsigned __int64)(v176 + 1) < 2);
                    v90 = -1;
                    if ( !(_BYTE)v89 )
                      v89 = sub_140001660(v157, v176, 1);
                    v25 = (__int64)v175;
LABEL_135:
                    *(_QWORD *)&v138 = v90;
                    *((_QWORD *)&v138 + 1) = v29;
                    *(_QWORD *)&v139 = v17;
                    *((_QWORD *)&v139 + 1) = v179;
                    *(_QWORD *)&v140 = v22;
                    *((_QWORD *)&v140 + 1) = v89;
                    *(_QWORD *)&v141 = v178;
                    *((_QWORD *)&v141 + 1) = v4;
                    *(_QWORD *)&v142 = v88;
                    *((_QWORD *)&v142 + 1) = v25;
                    *(_QWORD *)&v143 = v23;
                    *((_QWORD *)&v143 + 1) = v98;
                    *(_QWORD *)&v144 = v173;
                    *((_QWORD *)&v144 + 1) = v24;
                    *(_QWORD *)&v145 = v26;
                    *((_QWORD *)&v145 + 1) = a1;
                    ++*(_BYTE *)(a2 + 72);
                    v91 = (_QWORD *)sub_1409691A0(a2);
                    v92 = v91;
                    v155 = v145;
                    v154 = v144;
                    v153 = v143;
                    v152 = v142;
                    v151 = v141;
                    v150 = v140;
                    v149 = v139;
                    v148 = v138;
                    v156 = v91;
                    v93 = v138;
                    a1 = v135;
                    if ( (_QWORD)v138 == -1 )
                    {
                      v94 = *((_QWORD *)&v148 + 1);
                      v93 = -1;
                      if ( v91 )
                      {
                        v95 = *v91;
                        v16 = *v92 == 1;
                        v179 = v92;
                        if ( v16 )
                        {
LABEL_217:
                          sub_140018650(v92 + 1);
                          goto LABEL_218;
                        }
LABEL_214:
                        if ( !v95 )
                        {
                          v119 = v179[2];
                          if ( v119 )
                            sub_140001660(v179[1], v119, 1);
                        }
LABEL_218:
                        sub_140001660(v179, 40, 8);
                      }
                      goto LABEL_219;
                    }
LABEL_209:
                    if ( v92 )
                    {
                      sub_1408A4BA0(&v148);
                      v93 = -1;
                      v94 = (__int64)v92;
                    }
                    else
                    {
                      v94 = *((_QWORD *)&v148 + 1);
                      v123 = v149;
                      v124 = v150;
                      v125 = v151;
                      v126 = v152;
                      v127 = v153;
                      v128 = v154;
                      v129 = v155;
                    }
                    goto LABEL_219;
                  }
                  v48 = *(_QWORD *)v4;
                  v49 = v47 + 1;
                  v50 = -(__int64)v46;
                  while ( 1 )
                  {
                    v51 = *(unsigned __int8 *)(v48 + v49 - 1);
                    if ( v51 > 0x3A )
                      goto LABEL_253;
                    if ( !_bittest64(&v14, v51) )
                      break;
                    v28[5] = v49;
                    v22 = v50 + v49++ + 1;
                    if ( v22 == 1 )
                      goto LABEL_194;
                  }
                  if ( v51 != 58 )
                  {
LABEL_253:
                    *(_QWORD *)&v148 = 6;
                    v171 = v30;
                    v170 = v31;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = -1;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v116 = sub_14169AEA0(v28, &v148, v51);
                    goto LABEL_195;
                  }
                  v28[5] = v49;
                  v171 = v30;
                  v170 = v31;
                  v169 = v178;
                  v168 = (__int64)v179;
                  v167 = -1;
                  v184 = 1;
                  v183 = 1;
                  v182 = 1;
                  v181 = 1;
                  v180 = 1;
                  sub_1409587C0(&v138, v28);
                  v29 = *((_QWORD *)&v138 + 1);
                  v21 = v138;
                  if ( (_QWORD)v138 == -1 )
                    goto LABEL_196;
                  v134 = v139;
                  v157 = *((_QWORD *)&v138 + 1);
                  v18 = (__int64)v175;
                  v19 = v178;
                  v20 = (__int64)v179;
                  v17 = v177;
                  goto LABEL_17;
                case 9LL:
                  if ( **((_QWORD **)&v148 + 1) ^ 0x4164657461657263LL
                     | *(unsigned __int8 *)(*((_QWORD *)&v148 + 1) + 8LL) ^ 0x74LL )
                  {
                    goto LABEL_33;
                  }
                  if ( v172 )
                  {
                    *(_QWORD *)&v138 = aCreatedat_3;
                    *((_QWORD *)&v138 + 1) = 9;
                    *(_QWORD *)&v148 = &v138;
                    *((_QWORD *)&v148 + 1) = sub_14041F680;
                    v171 = (__int64)v175;
                    v170 = v177;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v82 = sub_141697610(&unk_14177DAF4, &v148, v22);
                    goto LABEL_109;
                  }
                  v38 = v28[4];
                  v39 = v28[5];
                  if ( v39 >= v38 )
                  {
LABEL_48:
                    *(_QWORD *)&v148 = 3;
                    v171 = v30;
                    v170 = v31;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v136 = sub_14169AEA0(v28, &v148, v22);
                  }
                  else
                  {
                    v40 = *(_QWORD *)v4;
                    v41 = v39 + 1;
                    v42 = -(__int64)v38;
                    while ( 1 )
                    {
                      v43 = *(unsigned __int8 *)(v40 + v41 - 1);
                      if ( v43 > 0x3A )
                        break;
                      if ( !_bittest64(&v14, v43) )
                      {
                        if ( v43 == 58 )
                        {
                          v28[5] = v41;
                          v171 = v30;
                          v170 = v31;
                          v169 = v178;
                          v168 = (__int64)v179;
                          v167 = v176;
                          v184 = 1;
                          v183 = 1;
                          v182 = 1;
                          v181 = 1;
                          v180 = 1;
                          v44 = sub_140959500(v28);
                          v136 = v45;
                          goto LABEL_52;
                        }
                        break;
                      }
                      v28[5] = v41;
                      v22 = v42 + v41++ + 1;
                      if ( v22 == 1 )
                        goto LABEL_48;
                    }
                    *(_QWORD *)&v148 = 6;
                    v171 = v30;
                    v170 = v31;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v136 = sub_14169AEA0(v28, &v148, v43);
                  }
                  v44 = 1;
LABEL_52:
                  v18 = (__int64)v175;
                  v19 = v178;
                  v20 = (__int64)v179;
                  v17 = v177;
                  if ( (v44 & 1) != 0 )
                  {
                    v97 = 1;
                    LODWORD(v173) = 0;
                    v98 = (__int64)v179;
                    v29 = v136;
                    goto LABEL_144;
                  }
                  v172 = 1;
                  v21 = v176;
                  goto LABEL_18;
                case 12LL:
                  if ( **((_QWORD **)&v148 + 1) ^ 0x65766974616C6572LL
                     | *(unsigned int *)(*((_QWORD *)&v148 + 1) + 8LL) ^ 0x68746150LL )
                  {
                    goto LABEL_33;
                  }
                  if ( v175 != (_QWORD *)-1LL )
                  {
                    *(_QWORD *)&v138 = aRelativepath_0;
                    *((_QWORD *)&v138 + 1) = 12;
                    *(_QWORD *)&v148 = &v138;
                    *((_QWORD *)&v148 + 1) = sub_14041F680;
                    v171 = (__int64)v175;
                    v170 = v177;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v82 = sub_141697610(&unk_14177DAF4, &v148, v22);
                    goto LABEL_109;
                  }
                  v70 = v28[4];
                  v71 = v28[5];
                  if ( v71 >= v70 )
                  {
LABEL_184:
                    *(_QWORD *)&v148 = 3;
                    v171 = -1;
                    v170 = v31;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v113 = sub_14169AEA0(v28, &v148, v22);
LABEL_185:
                    v29 = v113;
LABEL_186:
                    v26 = v160;
                    v19 = v178;
                    v17 = v177;
                    LOBYTE(v4) = 1;
                    v88 = 0;
                    LOBYTE(v172) = 1;
                    LOBYTE(v22) = 1;
                    v98 = (__int64)v179;
                    if ( (unsigned __int64)(v177 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                      goto LABEL_126;
                    goto LABEL_128;
                  }
                  v72 = *(_QWORD *)v4;
                  v73 = v71 + 1;
                  v74 = -(__int64)v70;
                  while ( 1 )
                  {
                    v75 = *(unsigned __int8 *)(v72 + v73 - 1);
                    if ( v75 > 0x3A )
                      goto LABEL_251;
                    if ( !_bittest64(&v14, v75) )
                      break;
                    v28[5] = v73;
                    v22 = v74 + v73++ + 1;
                    if ( v22 == 1 )
                      goto LABEL_184;
                  }
                  if ( v75 != 58 )
                  {
LABEL_251:
                    *(_QWORD *)&v148 = 6;
                    v171 = -1;
                    v170 = v31;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v113 = sub_14169AEA0(v28, &v148, v75);
                    goto LABEL_185;
                  }
                  v28[5] = v73;
                  v171 = -1;
                  v170 = v31;
                  v169 = v178;
                  v168 = (__int64)v179;
                  v167 = v176;
                  v184 = 1;
                  v183 = 1;
                  v182 = 1;
                  v181 = 1;
                  v180 = 1;
                  sub_1409587C0(&v138, v28);
                  v29 = *((_QWORD *)&v138 + 1);
                  if ( (_QWORD)v138 == -1 )
                    goto LABEL_186;
                  v174 = *((_QWORD *)&v138 + 1);
                  v133 = v139;
                  v18 = v138;
                  v19 = v178;
                  v20 = (__int64)v179;
                  v21 = v176;
                  v17 = v177;
                  goto LABEL_13;
                default:
LABEL_33:
                  v32 = v28[4];
                  v33 = v28[5];
                  if ( v33 >= v32 )
                    goto LABEL_108;
                  v34 = *(_QWORD *)v4;
                  v35 = v33 + 1;
                  v36 = -(__int64)v32;
                  while ( 1 )
                  {
                    v37 = *(unsigned __int8 *)(v34 + v35 - 1);
                    if ( v37 > 0x3A )
                      goto LABEL_222;
                    if ( !_bittest64(&v14, v37) )
                      break;
                    v28[5] = v35;
                    v22 = v36 + v35++ + 1;
                    if ( v22 == 1 )
                    {
LABEL_108:
                      *(_QWORD *)&v148 = 3;
                      v171 = v30;
                      v170 = v31;
                      v169 = v178;
                      v168 = (__int64)v179;
                      v167 = v176;
                      v184 = 1;
                      v183 = 1;
                      v182 = 1;
                      v181 = 1;
                      v180 = 1;
                      v82 = sub_14169AEA0(v28, &v148, v22);
                      goto LABEL_109;
                    }
                  }
                  if ( v37 != 58 )
                  {
LABEL_222:
                    *(_QWORD *)&v148 = 6;
                    v171 = v30;
                    v170 = v31;
                    v169 = v178;
                    v168 = (__int64)v179;
                    v167 = v176;
                    v184 = 1;
                    v183 = 1;
                    v182 = 1;
                    v181 = 1;
                    v180 = 1;
                    v82 = sub_14169AEA0(v28, &v148, v37);
                    goto LABEL_109;
                  }
                  v28[5] = v35;
                  v171 = v30;
                  v170 = v31;
                  v169 = v178;
                  v168 = (__int64)v179;
                  v167 = v176;
                  v184 = 1;
                  v183 = 1;
                  v182 = 1;
                  v181 = 1;
                  v180 = 1;
                  v29 = sub_1409682B0(v28);
                  v18 = (__int64)v175;
                  v19 = v178;
                  v20 = (__int64)v179;
                  v21 = v176;
                  v17 = v177;
                  if ( !v29 )
                    goto LABEL_18;
                  v97 = 1;
                  LODWORD(v173) = 0;
                  v98 = (__int64)v179;
                  goto LABEL_144;
              }
              goto LABEL_119;
            }
            break;
          }
          if ( v176 == -1 )
          {
            *(_QWORD *)&v138 = aBackupid;
            *((_QWORD *)&v138 + 1) = 8;
            *(_QWORD *)&v148 = &v138;
            *((_QWORD *)&v148 + 1) = sub_14041F680;
            v171 = (__int64)v175;
            v170 = v177;
            v169 = v178;
            v168 = (__int64)v179;
            v167 = -1;
            v184 = 1;
            v183 = 1;
            v182 = 1;
            v181 = 1;
            v180 = 1;
            v29 = sub_141697610(&unk_14177DA78, &v148, v177);
            v97 = 1;
            v176 = -1;
            goto LABEL_120;
          }
          v96 = v178;
          if ( v179 == (_QWORD *)-1LL )
          {
            LOBYTE(v159) = 1;
            *(_QWORD *)&v138 = aSkillid;
            *((_QWORD *)&v138 + 1) = 7;
            *(_QWORD *)&v148 = &v138;
            *((_QWORD *)&v148 + 1) = sub_14041F680;
            v166 = 1;
            v165 = 1;
            v164 = 1;
            v100 = sub_141697610(&unk_14177DA78, &v148, v177);
            v29 = v100;
            v97 = 1;
            LOBYTE(v22) = 1;
            LOBYTE(v172) = 1;
            v19 = v178;
            v83 = v174;
LABEL_172:
            v4 = (unsigned __int8)v159;
            LOBYTE(v100) = 1;
            LODWORD(v173) = v100;
            if ( v176 )
            {
              v110 = v22;
              v111 = v83;
              sub_140001660(v157, v176, 1);
              v22 = v110;
              v83 = v111;
              v19 = v178;
            }
            else
            {
              v176 = 0;
            }
            v98 = (__int64)v179;
            v18 = (__int64)v175;
            goto LABEL_122;
          }
          if ( v178 == -1 )
          {
            LOBYTE(v172) = 1;
            LOBYTE(v159) = (_QWORD *)((char *)v179 + 1) == nullptr;
            *(_QWORD *)&v138 = aName_6;
            *((_QWORD *)&v138 + 1) = 4;
            *(_QWORD *)&v148 = &v138;
            *((_QWORD *)&v148 + 1) = sub_14041F680;
            v163 = 1;
            v162 = 1;
            v100 = sub_141697610(&unk_14177DA78, &v148, v177);
            v29 = v100;
            v97 = 1;
            LOBYTE(v22) = 1;
            v19 = v178;
            v83 = v174;
LABEL_170:
            if ( v179 )
            {
              v107 = v19;
              v108 = v22;
              v109 = v83;
              v100 = sub_140001660(v161, v179, 1);
              v22 = v108;
              v19 = v107;
              v83 = v109;
            }
            goto LABEL_172;
          }
          if ( v177 == -2 )
          {
            LOBYTE(v96) = 1;
            LODWORD(v137) = v96;
            v173 = -1;
            v22 = v161;
            v24 = v160;
            v88 = v159;
            v89 = v147;
            v98 = v133;
          }
          else
          {
            LODWORD(v137) = 0;
            v173 = v177;
            v22 = v161;
            v24 = v160;
            v88 = v159;
            v89 = v147;
            v98 = v133;
            v26 = v132;
          }
          v17 = v134;
          LOBYTE(v147) = (_QWORD *)((char *)v175 + 1) == nullptr;
          v4 = (__int64)v158;
          if ( v175 == (_QWORD *)-1LL )
          {
            LOBYTE(v172) = v178 == -1;
            LOBYTE(v159) = (_QWORD *)((char *)v179 + 1) == nullptr;
            v160 = v24;
            *(_QWORD *)&v138 = aRelativepath_0;
            *((_QWORD *)&v138 + 1) = 12;
            *(_QWORD *)&v148 = &v138;
            *((_QWORD *)&v148 + 1) = sub_14041F680;
            v29 = sub_141697610(&unk_14177DA78, &v148, v22);
          }
          else
          {
            if ( (v172 & 1) != 0 )
            {
              v90 = v176;
              v29 = v157;
              v23 = v174;
              a1 = v136;
              goto LABEL_135;
            }
            LOBYTE(v172) = v178 == -1;
            LOBYTE(v159) = (_QWORD *)((char *)v179 + 1) == nullptr;
            v160 = v24;
            *(_QWORD *)&v138 = aCreatedat_3;
            *((_QWORD *)&v138 + 1) = 9;
            *(_QWORD *)&v148 = &v138;
            *((_QWORD *)&v148 + 1) = sub_14041F680;
            v29 = sub_141697610(&unk_14177DA78, &v148, v22);
            if ( v175 )
            {
              v102 = v174;
              sub_140001660(v174, v175, 1);
              v83 = v102;
              v103 = v158;
LABEL_165:
              LODWORD(v100) = v173 - 1;
              if ( (unsigned __int64)(v173 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              {
                v104 = v83;
                v100 = sub_140001660(v160, v173, 1);
                v83 = v104;
              }
              v105 = v178;
              if ( v178 )
              {
                v106 = v83;
                v100 = sub_140001660(v103, v178, 1);
                v83 = v106;
              }
              v19 = v105;
              v97 = v147;
              v22 = (unsigned int)v137;
              goto LABEL_170;
            }
          }
          v103 = v158;
          v83 = v174;
          goto LABEL_165;
        }
        goto LABEL_223;
      }
      v94 = sub_14169AF10(a2, &v146, &unk_14179EFA8);
LABEL_226:
      v15 = sub_141689D00(v94, a2);
      goto LABEL_8;
    }
    v16 = (*(_BYTE *)(a2 + 72))-- == 1;
    if ( v16 )
    {
LABEL_223:
      *(_QWORD *)&v148 = 24;
      goto LABEL_7;
    }
    *(_QWORD *)(a2 + 40) = v12;
    *(_QWORD *)&v138 = a2;
    BYTE8(v138) = 1;
    sub_1408C4040(&v148, &v138);
    if ( (_BYTE)v148 == 1 )
    {
      v81 = *((_QWORD *)&v148 + 1);
      goto LABEL_148;
    }
    if ( BYTE1(v148) != 1 )
    {
      v81 = sub_141697AC0(0, &off_14179DE80, &unk_14179CD10);
      goto LABEL_148;
    }
    sub_1409587C0(&v148, v138);
    v81 = *((_QWORD *)&v148 + 1);
    if ( (_QWORD)v148 == -1 )
    {
LABEL_148:
      v99 = -1;
      goto LABEL_208;
    }
    v172 = *((_QWORD *)&v148 + 1);
    v177 = v148;
    v6 = v149;
    sub_1408C4040(&v148, &v138);
    if ( (_BYTE)v148 == 1 )
    {
      v77 = *((_QWORD *)&v148 + 1);
      v76 = v177;
LABEL_205:
      if ( v76 )
      {
        v3 = v77;
        sub_140001660(v172, v76, 1);
        v77 = v3;
      }
      v81 = v77;
      v99 = -1;
LABEL_208:
      *(_QWORD *)&v138 = v99;
      *((_QWORD *)&v138 + 1) = v81;
      *(_QWORD *)&v139 = v14;
      *((_QWORD *)&v139 + 1) = v76;
      *(_QWORD *)&v140 = v77;
      *((_QWORD *)&v140 + 1) = v6;
      *(_QWORD *)&v141 = v79;
      *((_QWORD *)&v141 + 1) = v78;
      *(_QWORD *)&v142 = v5;
      *((_QWORD *)&v142 + 1) = v179;
      *(_QWORD *)&v143 = v178;
      *((_QWORD *)&v143 + 1) = v176;
      *(_QWORD *)&v144 = v4;
      *((_QWORD *)&v144 + 1) = v80;
      *(_QWORD *)&v145 = v175;
      *((_QWORD *)&v145 + 1) = v3;
      ++*(_BYTE *)(a2 + 72);
      v118 = (_QWORD *)sub_140969250(a2);
      v92 = v118;
      v155 = v145;
      v154 = v144;
      v153 = v143;
      v152 = v142;
      v151 = v141;
      v150 = v140;
      v149 = v139;
      v148 = v138;
      v156 = v118;
      v93 = v138;
      if ( (_QWORD)v138 != -1 )
        goto LABEL_209;
      v94 = *((_QWORD *)&v148 + 1);
      v93 = -1;
      if ( v118 )
      {
        v95 = *v118;
        v16 = *v92 == 1;
        v179 = v92;
        if ( v16 )
          goto LABEL_217;
        goto LABEL_214;
      }
LABEL_219:
      if ( v93 != -1 )
      {
        *(_OWORD *)(a1 + 112) = v129;
        *(_OWORD *)(a1 + 96) = v128;
        *(_OWORD *)(a1 + 80) = v127;
        *(_OWORD *)(a1 + 64) = v126;
        *(_OWORD *)(a1 + 48) = v125;
        *(_OWORD *)(a1 + 32) = v124;
        *(_OWORD *)(a1 + 16) = v123;
        *(_QWORD *)a1 = v93;
        *(_QWORD *)(a1 + 8) = v94;
        return a1;
      }
      goto LABEL_226;
    }
    if ( BYTE1(v148) != 1 )
    {
      v77 = sub_141697AC0(1, &off_14179DE80, &unk_14179CD10);
      v76 = v177;
      goto LABEL_205;
    }
    sub_1409587C0(&v148, v138);
    v77 = *((_QWORD *)&v148 + 1);
    if ( (_QWORD)v148 == -1 )
    {
      v76 = v177;
      goto LABEL_205;
    }
    v160 = *((_QWORD *)&v148 + 1);
    v173 = v148;
    v3 = v149;
    sub_1408C4040(&v148, &v138);
    if ( (_BYTE)v148 == 1 )
    {
      v5 = *((_QWORD *)&v148 + 1);
      v76 = v177;
LABEL_202:
      if ( v173 )
      {
        v3 = v76;
        sub_140001660(v160, v173, 1);
        v76 = v3;
      }
      v77 = v5;
      goto LABEL_205;
    }
    if ( BYTE1(v148) != 1 )
    {
      v5 = sub_141697AC0(2, &off_14179DE80, &unk_14179CD10);
      v76 = v177;
      goto LABEL_202;
    }
    sub_1409587C0(&v148, v138);
    v5 = *((_QWORD *)&v148 + 1);
    if ( (_QWORD)v148 == -1 )
    {
      v76 = v177;
      goto LABEL_202;
    }
    v161 = *((_QWORD *)&v148 + 1);
    v174 = v148;
    v101 = v149;
    sub_1408C4040(&v148, &v138);
    if ( (_BYTE)v148 == 1 )
    {
      v5 = *((_QWORD *)&v148 + 1);
      goto LABEL_199;
    }
    if ( BYTE1(v148) != 1 )
    {
      v5 = sub_141697AC0(3, &off_14179DE80, &unk_14179CD10);
      goto LABEL_199;
    }
    sub_1408C7930(&v148, v138);
    v5 = *((_QWORD *)&v148 + 1);
    v157 = v148;
    if ( (_QWORD)v148 == -2 )
    {
LABEL_199:
      v76 = v177;
      v117 = v161;
      v14 = v174;
LABEL_200:
      if ( v14 )
      {
        v3 = v76;
        sub_140001660(v117, v14, 1);
        v76 = v3;
      }
      goto LABEL_202;
    }
    v158 = *((_QWORD **)&v148 + 1);
    v4 = v149;
    sub_1408C4040(&v148, &v138);
    if ( (_BYTE)v148 == 1 )
    {
      v5 = *((_QWORD *)&v148 + 1);
    }
    else if ( BYTE1(v148) == 1 )
    {
      sub_1409587C0(&v148, v138);
      v175 = (_QWORD *)v4;
      v137 = v6;
      v147 = v3;
      v178 = *((_QWORD *)&v148 + 1);
      v179 = (_QWORD *)v148;
      if ( (_QWORD)v148 == -1 )
      {
        v117 = v161;
        v5 = v178;
        goto LABEL_241;
      }
      v5 = v101;
      v176 = v149;
      sub_1408C4040(&v148, &v138);
      if ( (_BYTE)v148 == 1 )
      {
        v159 = *((_QWORD *)&v148 + 1);
      }
      else if ( BYTE1(v148) == 1 )
      {
        v121 = sub_140959500(v138);
        v159 = v122;
        if ( (v121 & 1) == 0 )
        {
          v81 = v172;
          v99 = v177;
          v77 = v160;
          v76 = v173;
          v78 = v161;
          v79 = v174;
          v80 = v158;
          v4 = v157;
          v6 = v147;
          v14 = v137;
          v3 = v159;
          goto LABEL_208;
        }
      }
      else
      {
        v159 = sub_141697AC0(5, &off_14179DE80, &unk_14179CD10);
      }
      if ( v179 )
        sub_140001660(v178, v179, 1);
      v5 = v159;
    }
    else
    {
      v5 = sub_141697AC0(4, &off_14179DE80, &unk_14179CD10);
    }
    v117 = v161;
LABEL_241:
    v78 = v157;
    v76 = v177;
    v14 = v174;
    if ( v157 > 0 )
    {
      v6 = v117;
      v3 = v177;
      sub_140001660(v158, v157, 1);
      v117 = v6;
      v76 = v3;
    }
    goto LABEL_200;
  }
LABEL_6:
  *(_QWORD *)&v148 = 5;
LABEL_7:
  v15 = sub_14169AEA0(a2, &v148, a3);
LABEL_8:
  *(_QWORD *)(a1 + 8) = v15;
  *(_QWORD *)a1 = -1;
  return a1;
}
