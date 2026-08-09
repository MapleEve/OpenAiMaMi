// Pseudocode for delete_skill_backup (EA: 0x140d4b270, size: 0x1ae5)
// Module: commands/skills
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 delete_skill_backup 处理器（commands::skills）。按 id 删除指定技能的本地备份数据。⚠破坏性副作用：删除本机备份文件。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(id) + mac 符号 commands::skills。
// Tauri 命令 delete_skill_backup 处理器（commands::skills）。按 id 删除指定技能的本地备份数据。⚠破坏性副作用：删除本机备份文件。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(id) + mac 符号 commands::skills。
char __fastcall sub_140D4B270(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // r14
  __int64 v13; // rax
  volatile void *v14; // rdi
  __int64 *v15; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r14
  int v19; // ebx
  int v20; // r13d
  unsigned int v21; // r12d
  __int64 v22; // r15
  PVOID v23; // rcx
  char v24; // al
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r12
  __int64 v29; // r13
  unsigned __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // r14
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int8 v38; // r12
  __int64 v39; // r13
  __int64 v40; // rcx
  PVOID v41; // rcx
  char v42; // al
  __int64 v43; // rax
  __int128 v44; // xmm0
  _QWORD *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r14
  unsigned __int8 v52; // bl
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // r15
  __int64 v55; // r13
  char v56; // cl
  char result; // al
  __int64 v58; // rsi
  int v59; // r14d
  unsigned int v60; // esi
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rsi
  int v64; // r12d
  unsigned int v65; // r15d
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdx
  int v97; // r14d
  unsigned int v98; // esi
  __int64 v99; // r12
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rbx
  __int64 v134; // rbx
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rbx
  char *v138; // rcx
  char *v139; // r13
  __int64 v140; // rdi
  __int64 v141; // rdx
  int v142; // eax
  _QWORD *v143; // rdi
  __int64 v144; // [rsp+20h] [rbp-60h]
  __int128 v145; // [rsp+30h] [rbp-50h]
  __int128 v146; // [rsp+40h] [rbp-40h]
  __int128 v147; // [rsp+50h] [rbp-30h]
  __int128 v148; // [rsp+60h] [rbp-20h]
  __int64 v149; // [rsp+70h] [rbp-10h]
  __int128 v150; // [rsp+80h] [rbp+0h]
  __int128 v151; // [rsp+90h] [rbp+10h]
  __int128 v152; // [rsp+A0h] [rbp+20h]
  __int64 v153; // [rsp+B0h] [rbp+30h]
  __int64 v154; // [rsp+C0h] [rbp+40h] BYREF
  char v155; // [rsp+C8h] [rbp+48h]
  int v156; // [rsp+C9h] [rbp+49h]
  __int16 v157; // [rsp+CDh] [rbp+4Dh]
  char v158; // [rsp+CFh] [rbp+4Fh]
  __int64 v159; // [rsp+D0h] [rbp+50h]
  __int64 v160; // [rsp+D8h] [rbp+58h]
  __int64 v161; // [rsp+E0h] [rbp+60h]
  _QWORD v162[2]; // [rsp+E8h] [rbp+68h] BYREF
  unsigned __int8 v163; // [rsp+F8h] [rbp+78h]
  int v164; // [rsp+F9h] [rbp+79h]
  __int16 v165; // [rsp+FDh] [rbp+7Dh]
  char v166; // [rsp+FFh] [rbp+7Fh]
  unsigned __int64 v167; // [rsp+100h] [rbp+80h]
  __int64 v168; // [rsp+108h] [rbp+88h]
  __int128 v169; // [rsp+110h] [rbp+90h] BYREF
  __int128 v170; // [rsp+120h] [rbp+A0h]
  __int128 v171; // [rsp+130h] [rbp+B0h]
  __int128 v172; // [rsp+140h] [rbp+C0h]
  __int64 v173; // [rsp+150h] [rbp+D0h]
  _BYTE v174[24]; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v175; // [rsp+178h] [rbp+F8h]
  __int64 v176; // [rsp+180h] [rbp+100h]
  __int128 v177; // [rsp+188h] [rbp+108h]
  __int128 v178; // [rsp+198h] [rbp+118h]
  __int128 v179; // [rsp+1A8h] [rbp+128h]
  __int128 v180; // [rsp+1B8h] [rbp+138h]
  __int64 v181; // [rsp+1C8h] [rbp+148h]
  __int128 v182; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v183; // [rsp+1E0h] [rbp+160h] BYREF
  _BYTE v184[24]; // [rsp+1F0h] [rbp+170h]
  __int128 v185; // [rsp+208h] [rbp+188h]
  __int128 v186; // [rsp+218h] [rbp+198h]
  __int128 v187; // [rsp+228h] [rbp+1A8h]
  __int64 v188; // [rsp+238h] [rbp+1B8h]
  __int128 v189; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v190; // [rsp+350h] [rbp+2D0h]
  __int128 v191; // [rsp+360h] [rbp+2E0h]
  __int128 v192; // [rsp+370h] [rbp+2F0h]
  __int64 v193; // [rsp+380h] [rbp+300h]
  __int64 v194; // [rsp+390h] [rbp+310h]
  __int64 v195; // [rsp+398h] [rbp+318h]
  __int64 v196; // [rsp+3A0h] [rbp+320h]
  __int64 v197; // [rsp+3A8h] [rbp+328h]
  __int128 v198; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v199; // [rsp+3C0h] [rbp+340h]
  __int128 v200; // [rsp+3D0h] [rbp+350h]
  __int64 v201; // [rsp+3E0h] [rbp+360h]
  __int64 v202; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v203; // [rsp+3F8h] [rbp+378h]
  unsigned __int64 v204; // [rsp+400h] [rbp+380h]
  _QWORD *v205; // [rsp+408h] [rbp+388h]
  unsigned __int64 v206; // [rsp+410h] [rbp+390h]
  unsigned __int64 v207; // [rsp+418h] [rbp+398h]
  __int64 v208; // [rsp+420h] [rbp+3A0h]
  unsigned __int64 v209; // [rsp+428h] [rbp+3A8h]
  __int64 v210; // [rsp+430h] [rbp+3B0h]
  int v211; // [rsp+43Ch] [rbp+3BCh]
  __int64 v212; // [rsp+440h] [rbp+3C0h]
  PVOID Address; // [rsp+448h] [rbp+3C8h]
  __int64 v214; // [rsp+450h] [rbp+3D0h]
  unsigned __int64 v215; // [rsp+458h] [rbp+3D8h]
  char v216; // [rsp+466h] [rbp+3E6h]
  char v217; // [rsp+467h] [rbp+3E7h] BYREF
  __int64 v218; // [rsp+468h] [rbp+3E8h]
  __int64 v219; // [rsp+470h] [rbp+3F0h]

  v219 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 7808);
  v214 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 7809) = 257;
      *(_BYTE *)(a1 + 7811) = 1;
      v5 = a1 + 4096;
      sub_14172B820(a1 + 4096, a1 + 392, 3704);
      switch ( *(_BYTE *)(v3 + 7792) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_225;
        case 2:
          goto LABEL_224;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 4096;
      switch ( *(_BYTE *)(a1 + 7792) )
      {
        case 0:
LABEL_4:
          v6 = v3 + 4616;
          *(_QWORD *)&v184[16] = 0;
          *(_QWORD *)&v182 = aDeleteSkillBac;
          *((_QWORD *)&v182 + 1) = 19;
          *(_QWORD *)&v183 = aRepo_0;
          *((_QWORD *)&v183 + 1) = 4;
          v212 = v5;
          *(_QWORD *)v184 = v5;
          *(_QWORD *)&v184[8] = v3 + 4616;
          v7 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 4608) + 16LL));
          Address = (PVOID)(v3 + 4616);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v174, (__int64)&v182, (__int64)&v183);
          v8 = v174[0];
          if ( v174[0] == 0xFF )
          {
            v7 = *(_QWORD *)&v174[8];
LABEL_5:
            *(_QWORD *)&v184[16] = 0;
            *(_QWORD *)&v182 = aDeleteSkillBac;
            *((_QWORD *)&v182 + 1) = 19;
            *(_QWORD *)&v183 = aId_10;
            *((_QWORD *)&v183 + 1) = 2;
            *(_QWORD *)v184 = v212;
            *(_QWORD *)&v184[8] = v6;
            sub_140955980(v174, &v182);
            v8 = v174[0];
            if ( v174[0] == 0xFF )
            {
              v9 = v175;
              v3 = v214;
              v10 = v214 + 4640;
              v11 = *(_OWORD *)&v174[8];
              *(_QWORD *)(v214 + 4664) = v7;
              *(_OWORD *)(v3 + 4640) = v11;
              *(_QWORD *)(v3 + 4656) = v9;
              *(_BYTE *)(v3 + 5680) = 0;
              v12 = v3 + 5688;
              sub_14172B820(v3 + 5688, v10, 1048);
              v205 = (_QWORD *)(v3 + 7784);
              *(_BYTE *)(v3 + 7784) = 0;
              v5 = v212;
LABEL_8:
              v212 = v5;
              v206 = v3 + 6736;
              v194 = v12;
              sub_14172B820(v3 + 6736, v12, 1048);
              switch ( *(_BYTE *)(v3 + 7776) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_227;
                case 2:
                  goto LABEL_226;
                case 3:
                  goto LABEL_44;
              }
            }
          }
          v27 = ((unsigned __int64)((v174[7] << 16) | (unsigned int)*(unsigned __int16 *)&v174[5]) << 32)
              | *(unsigned int *)&v174[1];
          v32 = *(_QWORD *)&v174[8];
          v33 = *(_QWORD *)&v174[16];
          v34 = v175;
          sub_140CAB140(v212);
          if ( *(_QWORD *)Address == -1 )
          {
            v38 = 1;
            v39 = v214;
            goto LABEL_207;
          }
          v205 = (_QWORD *)(v214 + 4624);
          v35 = *(_QWORD *)(v214 + 4624);
          v215 = *(_QWORD *)(v214 + 4632);
          v218 = 0;
          v206 = v35;
          while ( v215 != v218 )
          {
            ++v218;
            v36 = v35 + 96;
            sub_140401FB0();
            v35 = v36;
          }
          v37 = *(_QWORD *)Address;
          v38 = 1;
          v39 = v214;
          if ( !*(_QWORD *)Address )
            goto LABEL_207;
          goto LABEL_206;
        case 1:
LABEL_225:
          v212 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_224:
          v212 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v13 = *(unsigned __int8 *)(v3 + 7784);
  v12 = v3 + 5688;
  v205 = (_QWORD *)(v3 + 7784);
  switch ( v13 )
  {
    case 0LL:
      goto LABEL_8;
    case 1LL:
      v212 = v5;
      v197 = v3 + 7784;
      v196 = v3 + 5688;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v212 = v5;
      v197 = v3 + 7784;
      v196 = v3 + 5688;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      v194 = v3 + 5688;
      v212 = v5;
      v206 = v3 + 6736;
      switch ( *(_BYTE *)(v3 + 7776) )
      {
        case 0:
LABEL_10:
          v195 = a2;
          v14 = *(volatile void **)(v3 + 6760);
          *(_QWORD *)(v3 + 6768) = v14;
          *(_BYTE *)(v3 + 7777) = 1;
          v218 = *(_QWORD *)(v3 + 6736);
          v215 = *(_QWORD *)(v3 + 6744);
          v168 = *(_QWORD *)(v3 + 6752);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v14, 1, 0) )
          {
            v208 = v218;
            v207 = v215;
            sub_14176CDB0(v14);
          }
          Address = (PVOID)v14;
          v15 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v208 = v218;
            v207 = v215;
            v142 = sub_14176DA50(a1);
            LOBYTE(v142) = v142 ^ 1;
            v211 = v142;
            v16 = (unsigned __int64)Address;
            if ( !*((_BYTE *)Address + 1) )
            {
LABEL_30:
              Address = (PVOID)v16;
              sub_140A80280(v214 + 6776, v16 + 8);
              if ( (v211 & 1) == 0 )
              {
                if ( 2 * *v15 )
                {
                  v208 = v218;
                  v207 = v215;
                  if ( !(unsigned __int8)sub_14176DA50(v40) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v41 = Address;
              v42 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v42 == 2 )
              {
                v208 = v218;
                v207 = v215;
                WakeByAddressSingle(v41);
              }
              v43 = v214;
              *(_BYTE *)(v214 + 7777) = 0;
              v44 = *(_OWORD *)(v43 + 7224);
              v183 = *(_OWORD *)(v43 + 7240);
              v182 = v44;
              *(_QWORD *)v184 = v218;
              *(_QWORD *)&v184[8] = v215;
              *(_QWORD *)&v184[16] = v168;
              v45 = off_141FB97C0;
              if ( *((_DWORD *)off_141FB97C0 + 24) )
              {
                v216 = 1;
                v143 = off_141FB97C0;
                sub_14172E34C(off_141FB97C0);
                v45 = v143;
              }
              if ( *((_DWORD *)v45 + 4) == 2 )
              {
                v46 = 704;
                if ( *(_BYTE *)v45 )
                  v46 = 472;
                v47 = v45[1] + v46;
                v216 = 0;
                v48 = sub_140859B20(v47, v45, &v182, &off_1417EBF48);
              }
              else
              {
                v49 = 704;
                if ( *((_BYTE *)v45 + 64) )
                  v49 = 472;
                v50 = v45[9] + v49;
                v216 = 0;
                v48 = sub_140859B20(v50, v45 + 8, &v182, &off_1417EBF30);
              }
              a2 = v195;
              v3 = v214;
              *(_QWORD *)(v214 + 7768) = v48;
LABEL_44:
              Address = (PVOID)(v3 + 7768);
              sub_140504570(&v182, v3 + 7768, a2);
              v51 = v182;
              if ( (_QWORD)v182 == -3 )
              {
                v55 = v214;
                *(_BYTE *)(v214 + 7776) = 3;
              }
              else
              {
                if ( (_DWORD)v182 == -2 )
                {
                  v29 = *((_QWORD *)&v182 + 1);
                  v52 = v183;
                  v53 = ((unsigned __int64)((BYTE7(v183) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v183 + 5)) << 32)
                      | *(unsigned int *)((char *)&v183 + 1);
                  v54 = 0x800000000000000CuLL;
                  v16 = *((_QWORD *)&v183 + 1);
                }
                else
                {
                  v54 = *((_QWORD *)&v182 + 1);
                  v29 = v183;
                  v52 = BYTE8(v183);
                  v53 = ((unsigned __int64)((HIBYTE(v183) << 16)
                                          | (unsigned int)*(unsigned __int16 *)((char *)&v183 + 13)) << 32)
                      | *(unsigned int *)((char *)&v183 + 9);
                  v16 = *(_QWORD *)v184;
                  v198 = *(_OWORD *)&v184[8];
                  v199 = v185;
                  v200 = v186;
                  v201 = v187;
                }
                v150 = v198;
                v151 = v199;
                v152 = v200;
                v153 = v201;
                v58 = *(_QWORD *)Address;
                v210 = v218;
                v209 = v215;
                if ( (unsigned __int8)sub_141398090(v58) )
                {
                  v210 = v218;
                  v209 = v215;
                  sub_14139A2E0(v58);
                }
                if ( (_DWORD)v51 != -1 )
                {
                  if ( (_DWORD)v51 == -2 )
                  {
                    *(_QWORD *)&v182 = v54;
                    *((_QWORD *)&v182 + 1) = v29;
                    LOBYTE(v183) = v52;
                    *(_DWORD *)((char *)&v183 + 1) = v53;
                    BYTE7(v183) = BYTE6(v53);
                    *(_WORD *)((char *)&v183 + 5) = WORD2(v53);
                    *((_QWORD *)&v183 + 1) = v16;
                    *(_OWORD *)v184 = v150;
                    v202 = 0;
                    v203 = 1;
                    v204 = 0;
                    *(_QWORD *)&v199 = 1610612768;
                    *(_QWORD *)&v198 = &v202;
                    *((_QWORD *)&v198 + 1) = &off_141891B48;
                    if ( (unsigned __int8)sub_1412DDF00(&v182, &v198) )
                      sub_14176E860(
                        (unsigned int)aADisplayImplem_11,
                        55,
                        (unsigned int)&v217,
                        (unsigned int)&unk_141889838,
                        (__int64)&off_141891C00);
                    v29 = v202;
                    v28 = v203;
                    LOBYTE(v16) = v204;
                    v59 = HIBYTE(v204);
                    v60 = *(unsigned __int16 *)((char *)&v204 + 5);
                    v61 = *(unsigned int *)((char *)&v204 + 1);
                    v210 = v218;
                    v209 = v215;
                    sub_140CAB2C0(&v182);
                    v30 = ((unsigned __int64)((v59 << 16) | v60) << 32) | v61;
                    v26 = v214;
                    v27 = v206;
                    v31 = v218;
                    v62 = *(_QWORD *)(v214 + 6776);
                    if ( !v62 )
                      goto LABEL_125;
                    goto LABEL_124;
                  }
                  *(_QWORD *)&v182 = v51;
                  *((_QWORD *)&v182 + 1) = v54;
                  *(_QWORD *)&v183 = v29;
                  BYTE8(v183) = v52;
                  *(_DWORD *)((char *)&v183 + 9) = v53;
                  HIBYTE(v183) = BYTE6(v53);
                  *(_WORD *)((char *)&v183 + 13) = WORD2(v53);
                  *(_QWORD *)v184 = v16;
                  *(_OWORD *)&v184[8] = v150;
                  v185 = v151;
                  v186 = v152;
                  *(_QWORD *)&v187 = v153;
                  v202 = 0;
                  v203 = 1;
                  v204 = 0;
                  *(_QWORD *)&v199 = 1610612768;
                  *(_QWORD *)&v198 = &v202;
                  *((_QWORD *)&v198 + 1) = &off_141891B48;
                  if ( (unsigned __int8)sub_1405060F0(&v182, &v198) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v217,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v29 = v202;
                  v52 = v203;
                  v97 = HIBYTE(v203);
                  v98 = *(unsigned __int16 *)((char *)&v203 + 5);
                  v99 = *(unsigned int *)((char *)&v203 + 1);
                  v16 = v204;
                  v210 = v218;
                  v209 = v215;
                  sub_140CAC460(&v182);
                  v53 = ((unsigned __int64)((v97 << 16) | v98) << 32) | v99;
LABEL_123:
                  v31 = v218;
                  v28 = v52 | (v53 << 8);
                  v30 = v16 >> 8;
                  v26 = v214;
                  v27 = v206;
                  v62 = *(_QWORD *)(v214 + 6776);
                  if ( !v62 )
                  {
LABEL_125:
                    v100 = *(_QWORD *)(v26 + 6808);
                    if ( v100 )
                      sub_140001660(*(_QWORD *)(v26 + 6816), v100, 1);
                    v101 = *(_QWORD *)(v26 + 6840);
                    if ( v101 )
                      sub_140001660(*(_QWORD *)(v26 + 6848), v101, 1);
                    v102 = *(_QWORD *)(v26 + 6872);
                    if ( v102 )
                      sub_140001660(*(_QWORD *)(v26 + 6880), v102, 1);
                    v103 = *(_QWORD *)(v26 + 6904);
                    if ( v103 )
                      sub_140001660(*(_QWORD *)(v26 + 6912), v103, 1);
                    v104 = *(_QWORD *)(v26 + 7736);
                    if ( v104 != -1 && v104 )
                      sub_140001660(*(_QWORD *)(v26 + 7744), v104, 1);
                    v105 = *(_QWORD *)(v26 + 6936);
                    if ( v105 )
                      sub_140001660(*(_QWORD *)(v26 + 6944), v105, 1);
                    v106 = *(_QWORD *)(v26 + 6968);
                    if ( v106 )
                      sub_140001660(*(_QWORD *)(v26 + 6976), v106, 1);
                    v107 = *(_QWORD *)(v26 + 7000);
                    if ( v107 )
                      sub_140001660(*(_QWORD *)(v26 + 7008), v107, 1);
                    v108 = *(_QWORD *)(v26 + 7032);
                    if ( v108 )
                      sub_140001660(*(_QWORD *)(v26 + 7040), v108, 1);
                    v109 = *(_QWORD *)(v26 + 7064);
                    if ( v109 )
                      sub_140001660(*(_QWORD *)(v26 + 7072), v109, 1);
                    v110 = *(_QWORD *)(v26 + 7096);
                    if ( v110 )
                      sub_140001660(*(_QWORD *)(v26 + 7104), v110, 1);
                    v111 = *(_QWORD *)(v26 + 7128);
                    if ( v111 )
                      sub_140001660(*(_QWORD *)(v26 + 7136), v111, 1);
                    v112 = *(_QWORD *)(v26 + 7160);
                    if ( v112 )
                      sub_140001660(*(_QWORD *)(v26 + 7168), v112, 1);
                    v113 = *(_QWORD *)(v26 + 7192);
                    if ( v113 )
                      sub_140001660(*(_QWORD *)(v26 + 7200), v113, 1);
                    v114 = *(_QWORD *)(v26 + 7256);
                    if ( v114 )
                      sub_140001660(*(_QWORD *)(v26 + 7264), v114, 1);
                    v115 = *(_QWORD *)(v26 + 7288);
                    if ( v115 )
                      sub_140001660(*(_QWORD *)(v26 + 7296), v115, 1);
                    v116 = *(_QWORD *)(v26 + 7320);
                    if ( v116 )
                      sub_140001660(*(_QWORD *)(v26 + 7328), v116, 1);
                    v117 = *(_QWORD *)(v26 + 7352);
                    if ( v117 )
                      sub_140001660(*(_QWORD *)(v26 + 7360), v117, 1);
                    v118 = *(_QWORD *)(v26 + 7384);
                    if ( v118 )
                      sub_140001660(*(_QWORD *)(v26 + 7392), v118, 1);
                    v119 = *(_QWORD *)(v26 + 7416);
                    if ( v119 )
                      sub_140001660(*(_QWORD *)(v26 + 7424), v119, 1);
                    v120 = *(_QWORD *)(v26 + 7448);
                    if ( v120 )
                      sub_140001660(*(_QWORD *)(v26 + 7456), v120, 1);
                    v121 = *(_QWORD *)(v26 + 7480);
                    if ( v121 )
                      sub_140001660(*(_QWORD *)(v26 + 7488), v121, 1);
                    v122 = *(_QWORD *)(v26 + 7512);
                    if ( v122 )
                      sub_140001660(*(_QWORD *)(v26 + 7520), v122, 1);
                    v123 = *(_QWORD *)(v26 + 7544);
                    if ( v123 )
                      sub_140001660(*(_QWORD *)(v26 + 7552), v123, 1);
                    v124 = *(_QWORD *)(v26 + 7576);
                    if ( v124 )
                      sub_140001660(*(_QWORD *)(v26 + 7584), v124, 1);
                    v125 = *(_QWORD *)(v26 + 7608);
                    if ( v125 )
                      sub_140001660(*(_QWORD *)(v26 + 7616), v125, 1);
                    v126 = *(_QWORD *)(v26 + 7640);
                    if ( v126 )
                      sub_140001660(*(_QWORD *)(v26 + 7648), v126, 1);
                    v127 = *(_QWORD *)(v26 + 7672);
                    if ( v127 )
                      sub_140001660(*(_QWORD *)(v26 + 7680), v127, 1);
                    v128 = *(_QWORD *)(v26 + 7704);
                    if ( v128 )
                      sub_140001660(*(_QWORD *)(v26 + 7712), v128, 1);
                    goto LABEL_184;
                  }
LABEL_124:
                  sub_140001660(*(_QWORD *)(v26 + 6784), v62, 1);
                  goto LABEL_125;
                }
                if ( v54 == -1 )
                  goto LABEL_123;
                v162[0] = v54;
                v162[1] = v29;
                v163 = v52;
                v164 = v53;
                v166 = BYTE6(v53);
                v165 = WORD2(v53);
                v167 = v16;
                v210 = v218;
                v209 = v215;
                sub_1404CF1E0(&v182, v162);
                v218 = *((_QWORD *)&v182 + 1);
                v63 = v182;
                v215 = v183;
                LOBYTE(v16) = BYTE8(v183);
                v64 = HIBYTE(v183);
                v65 = *(unsigned __int16 *)((char *)&v183 + 13);
                v66 = *(unsigned int *)((char *)&v183 + 9);
                v31 = *(_QWORD *)v184;
                v169 = *(_OWORD *)&v184[8];
                v170 = v185;
                v171 = v186;
                v172 = v187;
                v173 = v188;
                v55 = v214;
                v67 = *(_QWORD *)(v214 + 6776);
                if ( v67 )
                  sub_140001660(*(_QWORD *)(v214 + 6784), v67, 1);
                v68 = *(_QWORD *)(v55 + 6808);
                if ( v68 )
                  sub_140001660(*(_QWORD *)(v55 + 6816), v68, 1);
                v69 = *(_QWORD *)(v55 + 6840);
                if ( v69 )
                  sub_140001660(*(_QWORD *)(v55 + 6848), v69, 1);
                v70 = *(_QWORD *)(v55 + 6872);
                if ( v70 )
                  sub_140001660(*(_QWORD *)(v55 + 6880), v70, 1);
                v71 = *(_QWORD *)(v55 + 6904);
                if ( v71 )
                  sub_140001660(*(_QWORD *)(v55 + 6912), v71, 1);
                v72 = *(_QWORD *)(v55 + 7736);
                if ( v72 != -1 && v72 )
                  sub_140001660(*(_QWORD *)(v55 + 7744), v72, 1);
                v73 = *(_QWORD *)(v55 + 6936);
                if ( v73 )
                  sub_140001660(*(_QWORD *)(v55 + 6944), v73, 1);
                v74 = *(_QWORD *)(v55 + 6968);
                if ( v74 )
                  sub_140001660(*(_QWORD *)(v55 + 6976), v74, 1);
                v75 = *(_QWORD *)(v55 + 7000);
                if ( v75 )
                  sub_140001660(*(_QWORD *)(v55 + 7008), v75, 1);
                v76 = *(_QWORD *)(v55 + 7032);
                if ( v76 )
                  sub_140001660(*(_QWORD *)(v55 + 7040), v76, 1);
                v77 = *(_QWORD *)(v55 + 7064);
                if ( v77 )
                  sub_140001660(*(_QWORD *)(v55 + 7072), v77, 1);
                v78 = *(_QWORD *)(v55 + 7096);
                if ( v78 )
                  sub_140001660(*(_QWORD *)(v55 + 7104), v78, 1);
                v79 = *(_QWORD *)(v55 + 7128);
                if ( v79 )
                  sub_140001660(*(_QWORD *)(v55 + 7136), v79, 1);
                v80 = *(_QWORD *)(v55 + 7160);
                if ( v80 )
                  sub_140001660(*(_QWORD *)(v55 + 7168), v80, 1);
                v81 = *(_QWORD *)(v55 + 7192);
                if ( v81 )
                  sub_140001660(*(_QWORD *)(v55 + 7200), v81, 1);
                v82 = *(_QWORD *)(v55 + 7256);
                if ( v82 )
                  sub_140001660(*(_QWORD *)(v55 + 7264), v82, 1);
                v83 = *(_QWORD *)(v55 + 7288);
                if ( v83 )
                  sub_140001660(*(_QWORD *)(v55 + 7296), v83, 1);
                v84 = *(_QWORD *)(v55 + 7320);
                if ( v84 )
                  sub_140001660(*(_QWORD *)(v55 + 7328), v84, 1);
                v85 = *(_QWORD *)(v55 + 7352);
                if ( v85 )
                  sub_140001660(*(_QWORD *)(v55 + 7360), v85, 1);
                v86 = *(_QWORD *)(v55 + 7384);
                if ( v86 )
                  sub_140001660(*(_QWORD *)(v55 + 7392), v86, 1);
                v87 = *(_QWORD *)(v55 + 7416);
                if ( v87 )
                  sub_140001660(*(_QWORD *)(v55 + 7424), v87, 1);
                v88 = *(_QWORD *)(v55 + 7448);
                if ( v88 )
                  sub_140001660(*(_QWORD *)(v55 + 7456), v88, 1);
                v89 = *(_QWORD *)(v55 + 7480);
                if ( v89 )
                  sub_140001660(*(_QWORD *)(v55 + 7488), v89, 1);
                v90 = *(_QWORD *)(v55 + 7512);
                if ( v90 )
                  sub_140001660(*(_QWORD *)(v55 + 7520), v90, 1);
                v91 = *(_QWORD *)(v55 + 7544);
                if ( v91 )
                  sub_140001660(*(_QWORD *)(v55 + 7552), v91, 1);
                v92 = *(_QWORD *)(v55 + 7576);
                if ( v92 )
                  sub_140001660(*(_QWORD *)(v55 + 7584), v92, 1);
                v93 = *(_QWORD *)(v55 + 7608);
                if ( v93 )
                  sub_140001660(*(_QWORD *)(v55 + 7616), v93, 1);
                v94 = *(_QWORD *)(v55 + 7640);
                if ( v94 )
                  sub_140001660(*(_QWORD *)(v55 + 7648), v94, 1);
                v95 = *(_QWORD *)(v55 + 7672);
                if ( v95 )
                  sub_140001660(*(_QWORD *)(v55 + 7680), v95, 1);
                v96 = *(_QWORD *)(v55 + 7704);
                if ( v96 )
                  sub_140001660(*(_QWORD *)(v55 + 7712), v96, 1);
                *(_BYTE *)(v55 + 7777) = 0;
                v193 = v173;
                v192 = v172;
                v191 = v171;
                v190 = v170;
                v189 = v169;
                *(_BYTE *)(v55 + 7776) = 1;
                if ( v63 != -2 )
                {
                  v30 = ((unsigned __int64)((v64 << 16) | v65) << 32) | v66;
                  v27 = v206;
                  v28 = v215;
                  v29 = v218;
                  goto LABEL_187;
                }
              }
              *(_BYTE *)(v55 + 7784) = 3;
              *(_BYTE *)(v55 + 7792) = 3;
              v56 = 3;
              result = 1;
              goto LABEL_208;
            }
          }
          else
          {
            v211 = 0;
            v16 = (unsigned __int64)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_30;
          }
          *(_QWORD *)&v198 = 0;
          *((_QWORD *)&v198 + 1) = 1;
          *(_QWORD *)&v199 = 0;
          *(_QWORD *)&v183 = 1610612768;
          *(_QWORD *)&v182 = &v198;
          *((_QWORD *)&v182 + 1) = &off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v182) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v217,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v16 = *((_QWORD *)&v198 + 1);
          v18 = v198;
          v19 = (unsigned __int8)v199;
          v20 = BYTE7(v199);
          v21 = *(unsigned __int16 *)((char *)&v199 + 5);
          v22 = *(unsigned int *)((char *)&v199 + 1);
          if ( !(_BYTE)v211 )
          {
            if ( 2 * *v15 )
            {
              v208 = v218;
              v207 = v215;
              if ( !(unsigned __int8)sub_14176DA50(v17) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v23 = Address;
          v24 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v24 == 2 )
          {
            v208 = v218;
            v207 = v215;
            WakeByAddressSingle(v23);
          }
          if ( v18 == -1 )
          {
            v211 = v19;
            goto LABEL_30;
          }
          v25 = ((unsigned __int64)((v20 << 16) | v21) << 32) | v22;
          v26 = v214;
          v27 = v206;
          v28 = v16;
          v29 = v18;
          LOBYTE(v16) = v19;
          v30 = v25;
          v31 = v218;
LABEL_184:
          if ( ((v31 != 0) & *(_BYTE *)(v26 + 7777)) != 0 )
            sub_140001660(v215, v31, 1);
          *(_BYTE *)(v26 + 7777) = 0;
          v193 = v173;
          v192 = v172;
          v191 = v171;
          v190 = v170;
          v189 = v169;
          *(_BYTE *)(v26 + 7776) = 1;
          v63 = -1;
LABEL_187:
          v149 = v193;
          v148 = v192;
          v147 = v191;
          v146 = v190;
          v145 = v189;
          sub_140CA5850(v27);
          v133 = v30 << 8;
          if ( v63 != -1 )
          {
            v181 = v149;
            v180 = v148;
            v179 = v147;
            v178 = v146;
            v177 = v145;
            *(_QWORD *)v174 = v63;
            *(_QWORD *)&v174[8] = v29;
            *(_QWORD *)&v174[16] = v28;
            v175 = v133 | (unsigned __int8)v16;
            v176 = v31;
            sub_14050C8D0(&v182, v174);
            v27 = ((unsigned __int64)((HIBYTE(v182) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v182 + 13)) << 32)
                | *(unsigned int *)((char *)&v182 + 9);
            v8 = BYTE8(v182);
            v33 = *((_QWORD *)&v183 + 1);
            v32 = v183;
            v34 = *(_QWORD *)v184;
            if ( (_QWORD)v182 == -1 )
            {
              v38 = 0;
            }
            else
            {
              HIBYTE(v182) = (((unsigned __int64)((HIBYTE(v182) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v182 + 13)) << 32)
                            | *(unsigned int *)((char *)&v182 + 9)) >> 48;
              *(_WORD *)((char *)&v182 + 13) = WORD2(v27);
              *(_DWORD *)((char *)&v182 + 9) = v27;
              *(_QWORD *)&v189 = 0;
              *((_QWORD *)&v189 + 1) = 1;
              *(_QWORD *)&v190 = 0;
              *(_QWORD *)&v170 = 1610612768;
              *(_QWORD *)&v169 = &v189;
              *((_QWORD *)&v169 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v182, &v169) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v217,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v33 = *((_QWORD *)&v189 + 1);
              v32 = v189;
              v34 = v190;
              sub_140CAB2C0(&v182);
              v38 = 1;
              v8 = 3;
            }
            v135 = v212;
            goto LABEL_201;
          }
          v34 = v133 | (unsigned __int8)v16;
          if ( v133 < 0 )
          {
            v134 = 0;
            goto LABEL_193;
          }
          if ( !v34 )
          {
            v33 = 1;
            v135 = v212;
            if ( !v29 )
              goto LABEL_200;
            goto LABEL_199;
          }
          nullsub_1(v130, v129, v131, v132, v144);
          v134 = 1;
          v136 = sub_140001650(v34, 1);
          if ( !v136 )
          {
LABEL_193:
            v218 = v29;
            v215 = v28;
            sub_14176E54B(v134, v34);
          }
          v33 = v136;
          sub_14172B820(v136, v28, v34);
          v135 = v212;
          if ( v29 )
          {
LABEL_199:
            v137 = v135;
            sub_140001660(v28, v29, 1);
            v135 = v137;
          }
LABEL_200:
          v38 = 1;
          v8 = 3;
          v32 = v34;
LABEL_201:
          *(_BYTE *)v205 = 1;
          sub_140CAB140(v135);
          v39 = v214;
          if ( *(_QWORD *)(v214 + 4616) != -1 )
          {
            v205 = (_QWORD *)(v214 + 4624);
            v138 = *(char **)(v214 + 4624);
            v215 = *(_QWORD *)(v214 + 4632);
            v218 = 0;
            Address = v138;
            while ( v215 != v218 )
            {
              ++v218;
              v139 = v138 + 96;
              sub_140401FB0();
              v138 = v139;
            }
            v39 = v214;
            v37 = *(_QWORD *)(v214 + 4616);
            if ( v37 )
LABEL_206:
              sub_140001660(*v205, 96 * v37, 8);
          }
LABEL_207:
          *(_BYTE *)(v39 + 7792) = 1;
          sub_140C9A000(v212);
          v156 = v27;
          v158 = BYTE6(v27);
          v157 = WORD2(v27);
          v160 = v33;
          v161 = v34;
          v155 = v8;
          v159 = v32;
          v154 = v38;
          v140 = v214;
          *(_BYTE *)(v214 + 7811) = 0;
          sub_14172B820(&v182, v140, 360);
          *(_BYTE *)(v140 + 7810) = 0;
          v141 = *(_QWORD *)(v140 + 384);
          *(_BYTE *)(v140 + 7809) = 0;
          *(_QWORD *)&v174[16] = *(_QWORD *)(v140 + 376);
          *(_OWORD *)v174 = *(_OWORD *)(v140 + 360);
          sub_140AFFC30(
            (__int64)&v182,
            v141,
            (__int64)&v154,
            (__int128 *)v174,
            *(_DWORD *)(v140 + 7800),
            *(_DWORD *)(v140 + 7804));
          v56 = 1;
          result = 0;
          v55 = v214;
LABEL_208:
          *(_BYTE *)(v55 + 7808) = v56;
          return result;
        case 1:
LABEL_227:
          sub_14176EC00(&off_141888790);
        case 2:
LABEL_226:
          sub_14176EC20(&off_141888790);
        case 3:
          goto LABEL_44;
      }
  }
}
