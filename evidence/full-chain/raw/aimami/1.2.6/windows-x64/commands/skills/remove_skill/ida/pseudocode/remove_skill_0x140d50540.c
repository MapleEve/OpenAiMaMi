// Pseudocode for remove_skill (EA: 0x140d50540, size: 0x19db)
// Module: commands/skills
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 remove_skill 处理器（commands::skills）。按 id 移除已安装技能。⚠破坏性副作用：删除技能数据。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(id)。
// Tauri 命令 remove_skill 处理器（commands::skills）。按 id 移除已安装技能。⚠破坏性副作用：删除技能数据。凭证：命令名串 live 唯一 xref + 前端契约 argKeys(id)。
char __fastcall sub_140D50540(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdi
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // rbx
  __int64 v13; // rax
  volatile void *v14; // rdi
  __int64 *v15; // r15
  char *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  int v19; // ebx
  int v20; // r13d
  unsigned int v21; // r12d
  __int64 v22; // r14
  PVOID v23; // rcx
  char v24; // al
  unsigned __int64 v25; // r14
  __int64 v26; // rsi
  _QWORD *v27; // r15
  char *v28; // r13
  unsigned __int64 v29; // r12
  unsigned __int8 v30; // di
  __int64 v31; // r15
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  unsigned __int8 v37; // bl
  __int64 v38; // r13
  __int64 v39; // rcx
  PVOID v40; // rcx
  char v41; // al
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm0
  _QWORD *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // r14
  char v53; // bl
  unsigned __int64 v54; // r15
  __int64 v55; // r12
  __int64 v56; // r13
  _QWORD *v57; // r13
  __int64 v58; // rsi
  int v59; // ebx
  unsigned int v60; // esi
  __int64 v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
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
  __int64 v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r14
  __int64 v97; // rbx
  int v98; // r12d
  unsigned int v99; // ebx
  __int64 v100; // r14
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
  char v130; // cl
  char result; // al
  __int64 v132; // rcx
  __int64 v133; // rax
  _QWORD *v134; // rdx
  __int64 v135; // rbx
  _QWORD *v136; // rcx
  _QWORD *v137; // r13
  __int64 v138; // rdi
  __int64 v139; // rdx
  int v140; // eax
  _QWORD *v141; // rdi
  char v142; // al
  __int64 v143; // [rsp+20h] [rbp-60h]
  _BYTE v144[224]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v145[28]; // [rsp+118h] [rbp+98h] BYREF
  _OWORD v146[9]; // [rsp+1F8h] [rbp+178h] BYREF
  _QWORD v147[3]; // [rsp+288h] [rbp+208h] BYREF
  char v148; // [rsp+2A0h] [rbp+220h]
  _BYTE v149[7]; // [rsp+2A1h] [rbp+221h]
  __int64 v150; // [rsp+2A8h] [rbp+228h]
  char v151[144]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v152; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v153; // [rsp+348h] [rbp+2C8h]
  __int64 v154; // [rsp+350h] [rbp+2D0h]
  _BYTE v155[24]; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v156; // [rsp+438h] [rbp+3B8h]
  _QWORD *v157; // [rsp+440h] [rbp+3C0h]
  char v158[232]; // [rsp+448h] [rbp+3C8h] BYREF
  _QWORD *v159; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v160; // [rsp+538h] [rbp+4B8h]
  __int64 v161; // [rsp+540h] [rbp+4C0h]
  __int64 v162; // [rsp+5C0h] [rbp+540h] BYREF
  char v163; // [rsp+5C8h] [rbp+548h]
  int v164; // [rsp+5C9h] [rbp+549h]
  __int16 v165; // [rsp+5CDh] [rbp+54Dh]
  char v166; // [rsp+5CFh] [rbp+54Fh]
  __int64 v167; // [rsp+5D0h] [rbp+550h]
  __int64 v168; // [rsp+5D8h] [rbp+558h]
  __int64 v169; // [rsp+5E0h] [rbp+560h]
  __int64 v170; // [rsp+5E8h] [rbp+568h]
  __int128 v171; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v172; // [rsp+600h] [rbp+580h] BYREF
  __int128 v173; // [rsp+610h] [rbp+590h] BYREF
  __int128 v174; // [rsp+620h] [rbp+5A0h]
  __int128 v175; // [rsp+630h] [rbp+5B0h]
  __int128 v176; // [rsp+640h] [rbp+5C0h]
  __int64 v177; // [rsp+760h] [rbp+6E0h]
  __int64 v178; // [rsp+768h] [rbp+6E8h]
  __int64 v179; // [rsp+770h] [rbp+6F0h]
  __int64 v180; // [rsp+778h] [rbp+6F8h]
  _QWORD *v181; // [rsp+780h] [rbp+700h]
  _DWORD v182[2]; // [rsp+788h] [rbp+708h]
  _QWORD *v183; // [rsp+790h] [rbp+710h] BYREF
  __int64 v184; // [rsp+798h] [rbp+718h]
  __int64 v185; // [rsp+7A0h] [rbp+720h]
  _QWORD *v186; // [rsp+7A8h] [rbp+728h]
  char *v187; // [rsp+7B0h] [rbp+730h]
  _QWORD *v188; // [rsp+7B8h] [rbp+738h]
  char *v189; // [rsp+7C0h] [rbp+740h]
  __int64 v190; // [rsp+7C8h] [rbp+748h]
  PVOID Address; // [rsp+7D0h] [rbp+750h]
  _QWORD *v192; // [rsp+7D8h] [rbp+758h]
  __int64 v193; // [rsp+7E0h] [rbp+760h]
  _QWORD *v194; // [rsp+7E8h] [rbp+768h]
  char v195; // [rsp+7F6h] [rbp+776h]
  char v196; // [rsp+7F7h] [rbp+777h] BYREF
  char *v197; // [rsp+7F8h] [rbp+778h]
  __int64 v198; // [rsp+800h] [rbp+780h]

  v198 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 7808);
  v193 = a1;
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
          goto LABEL_219;
        case 2:
          goto LABEL_218;
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
          *(_QWORD *)&v174 = 0;
          *(_QWORD *)&v171 = aRemoveSkill;
          *((_QWORD *)&v171 + 1) = 12;
          *(_QWORD *)&v172 = aRepo_0;
          *((_QWORD *)&v172 + 1) = 4;
          v190 = v5;
          *(_QWORD *)&v173 = v5;
          *((_QWORD *)&v173 + 1) = v3 + 4616;
          v7 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 4608) + 16LL));
          v194 = (_QWORD *)(v3 + 4616);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v155, (__int64)&v171, (__int64)&v172);
          v8 = v155[0];
          if ( v155[0] == 0xFF )
          {
            v7 = *(_QWORD *)&v155[8];
LABEL_5:
            *(_QWORD *)&v174 = 0;
            *(_QWORD *)&v171 = aRemoveSkill;
            *((_QWORD *)&v171 + 1) = 12;
            *(_QWORD *)&v172 = aId_10;
            *((_QWORD *)&v172 + 1) = 2;
            *(_QWORD *)&v173 = v190;
            *((_QWORD *)&v173 + 1) = v6;
            sub_140955980(v155, &v171);
            v8 = v155[0];
            if ( v155[0] == 0xFF )
            {
              v9 = v156;
              v3 = v193;
              v10 = v193 + 4640;
              v11 = *(_OWORD *)&v155[8];
              *(_QWORD *)(v193 + 4664) = v7;
              *(_OWORD *)(v3 + 4640) = v11;
              *(_QWORD *)(v3 + 4656) = v9;
              *(_BYTE *)(v3 + 5680) = 0;
              v12 = v3 + 5688;
              sub_14172B820(v3 + 5688, v10, 1048);
              v181 = (_QWORD *)(v3 + 7784);
              *(_BYTE *)(v3 + 7784) = 0;
              v5 = v190;
LABEL_8:
              v190 = v5;
              v180 = v3 + 6736;
              v177 = v12;
              sub_14172B820(v3 + 6736, v12, 1048);
              switch ( *(_BYTE *)(v3 + 7776) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_221;
                case 2:
                  goto LABEL_220;
                case 3:
                  goto LABEL_44;
              }
            }
          }
          v29 = ((unsigned __int64)((v155[7] << 16) | (unsigned int)*(unsigned __int16 *)&v155[5]) << 32)
              | *(unsigned int *)&v155[1];
          v31 = *(_QWORD *)&v155[8];
          v32 = *(_QWORD *)&v155[16];
          v33 = v156;
          sub_140CAB140(v190);
          if ( *v194 == -1 )
          {
            v37 = 1;
            v38 = v193;
            goto LABEL_200;
          }
          v181 = (_QWORD *)(v193 + 4624);
          v34 = *(_QWORD *)(v193 + 4624);
          Address = *(PVOID *)(v193 + 4632);
          v197 = nullptr;
          v180 = v34;
          while ( Address != v197 )
          {
            ++v197;
            v35 = v34 + 96;
            sub_140401FB0();
            v34 = v35;
          }
          v36 = *v194;
          v37 = 1;
          v38 = v193;
          if ( !*v194 )
            goto LABEL_200;
          goto LABEL_199;
        case 1:
LABEL_219:
          v190 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_218:
          v190 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v13 = *(unsigned __int8 *)(v3 + 7784);
  v12 = v3 + 5688;
  v181 = (_QWORD *)(v3 + 7784);
  switch ( v13 )
  {
    case 0LL:
      goto LABEL_8;
    case 1LL:
      v190 = v5;
      v179 = v3 + 7784;
      v178 = v3 + 5688;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v190 = v5;
      v179 = v3 + 7784;
      v178 = v3 + 5688;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      v177 = v3 + 5688;
      v190 = v5;
      v180 = v3 + 6736;
      switch ( *(_BYTE *)(v3 + 7776) )
      {
        case 0:
LABEL_10:
          v14 = *(volatile void **)(v3 + 6760);
          *(_QWORD *)(v3 + 6768) = v14;
          *(_BYTE *)(v3 + 7777) = 1;
          v197 = *(char **)(v3 + 6736);
          v194 = *(_QWORD **)(v3 + 6744);
          v170 = *(_QWORD *)(v3 + 6752);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v14, 1, 0) )
          {
            v187 = v197;
            v186 = v194;
            sub_14176CDB0(v14);
          }
          Address = (PVOID)v14;
          v15 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v187 = v197;
            v186 = v194;
            v140 = sub_14176DA50(a1);
            LOBYTE(v140) = v140 ^ 1;
            LODWORD(v192) = v140;
            v16 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
            {
LABEL_30:
              Address = v16;
              sub_140A80280(v193 + 6776, v16 + 8);
              if ( ((unsigned __int8)v192 & 1) == 0 )
              {
                if ( 2 * *v15 )
                {
                  v187 = v197;
                  v186 = v194;
                  if ( !(unsigned __int8)sub_14176DA50(v39) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v40 = Address;
              v41 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v41 == 2 )
              {
                v187 = v197;
                v186 = v194;
                WakeByAddressSingle(v40);
              }
              v42 = v193;
              *(_BYTE *)(v193 + 7777) = 0;
              v43 = *(_OWORD *)(v42 + 7000);
              v172 = *(_OWORD *)(v42 + 7016);
              v171 = v43;
              v44 = *(_OWORD *)(v42 + 7224);
              v174 = *(_OWORD *)(v42 + 7240);
              v173 = v44;
              *(_QWORD *)&v175 = v197;
              *((_QWORD *)&v175 + 1) = v194;
              *(_QWORD *)&v176 = v170;
              v45 = off_141FB97C0;
              if ( *((_DWORD *)off_141FB97C0 + 24) )
              {
                v195 = 1;
                v141 = off_141FB97C0;
                sub_14172E34C(off_141FB97C0);
                v45 = v141;
              }
              if ( *((_DWORD *)v45 + 4) == 2 )
              {
                v46 = 704;
                if ( *(_BYTE *)v45 )
                  v46 = 472;
                v47 = v45[1] + v46;
                v195 = 0;
                v48 = sub_140859520(v47, v45, &v171, &off_1417EBF48);
              }
              else
              {
                v49 = 704;
                if ( *((_BYTE *)v45 + 64) )
                  v49 = 472;
                v50 = v45[9] + v49;
                v195 = 0;
                v48 = sub_140859520(v50, v45 + 8, &v171, &off_1417EBF30);
              }
              v3 = v193;
              *(_QWORD *)(v193 + 7768) = v48;
LABEL_44:
              Address = (PVOID)(v3 + 7768);
              sub_140503870(&v171, v3 + 7768, a2);
              v51 = v171;
              if ( (_QWORD)v171 == -3 )
              {
                v56 = v193;
                *(_BYTE *)(v193 + 7776) = 3;
              }
              else
              {
                if ( (_QWORD)v171 == -2 )
                {
                  v52 = *((_QWORD *)&v171 + 1);
                  v53 = v172;
                  LODWORD(v183) = *(_DWORD *)((char *)&v172 + 1);
                  *(_DWORD *)((char *)&v183 + 3) = DWORD1(v172);
                  v54 = 0x800000000000000CuLL;
                  v55 = *((_QWORD *)&v172 + 1);
                }
                else
                {
                  v54 = *((_QWORD *)&v171 + 1);
                  v52 = v172;
                  v53 = BYTE8(v172);
                  LODWORD(v183) = *(_DWORD *)((char *)&v172 + 9);
                  *(_DWORD *)((char *)&v183 + 3) = HIDWORD(v172);
                  v55 = v173;
                  sub_14172B820(&v159, (char *)&v173 + 8, 144);
                }
                v57 = v194;
                v182[0] = (_DWORD)v183;
                *(_DWORD *)((char *)v182 + 3) = *(_DWORD *)((char *)&v183 + 3);
                sub_14172B820(v146, &v159, 144);
                v58 = *(_QWORD *)Address;
                v189 = v197;
                v188 = v57;
                if ( (unsigned __int8)sub_141398090(v58) )
                {
                  v189 = v197;
                  v188 = v57;
                  sub_14139A2E0(v58);
                }
                if ( v51 == -1 )
                {
                  *(_QWORD *)&v171 = v54;
                  *((_QWORD *)&v171 + 1) = v52;
                  LOBYTE(v172) = v53;
                  *(_DWORD *)((char *)&v172 + 1) = v182[0];
                  DWORD1(v172) = *(_DWORD *)((char *)v182 + 3);
                  *((_QWORD *)&v172 + 1) = v55;
                  v173 = v146[0];
                  v174 = v146[1];
                  v175 = v146[2];
                  v176 = v146[3];
                  v183 = nullptr;
                  v184 = 1;
                  v185 = 0;
                  v161 = 1610612768;
                  v159 = &v183;
                  v160 = (__int64)&off_141891B48;
                  if ( (unsigned __int8)sub_1405060F0(&v171, &v159) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v196,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v192 = v183;
                  v29 = v184;
                  v30 = v185;
                  v59 = HIBYTE(v185);
                  v60 = *(unsigned __int16 *)((char *)&v185 + 5);
                  v61 = *(unsigned int *)((char *)&v185 + 1);
                  v189 = v197;
                  v27 = v194;
                  v188 = v194;
                  sub_140CAC460(&v171);
                  goto LABEL_57;
                }
                if ( v51 == -2 )
                {
                  *(_QWORD *)&v171 = v54;
                  *((_QWORD *)&v171 + 1) = v52;
                  LOBYTE(v172) = v53;
                  *(_DWORD *)((char *)&v172 + 1) = v182[0];
                  DWORD1(v172) = *(_DWORD *)((char *)v182 + 3);
                  *((_QWORD *)&v172 + 1) = v55;
                  v173 = v146[0];
                  v183 = nullptr;
                  v184 = 1;
                  v185 = 0;
                  v161 = 1610612768;
                  v159 = &v183;
                  v160 = (__int64)&off_141891B48;
                  if ( (unsigned __int8)sub_1412DDF00(&v171, &v159) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v196,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v192 = v183;
                  v29 = v184;
                  v30 = v185;
                  v59 = HIBYTE(v185);
                  v60 = *(unsigned __int16 *)((char *)&v185 + 5);
                  v61 = *(unsigned int *)((char *)&v185 + 1);
                  v189 = v197;
                  v27 = v194;
                  v188 = v194;
                  sub_140CAB2C0(&v171);
LABEL_57:
                  v25 = ((unsigned __int64)((v59 << 16) | v60) << 32) | v61;
                  v26 = v193;
                  v62 = *(_QWORD *)(v193 + 6776);
                  v28 = v197;
                  if ( v62 )
                    sub_140001660(*(_QWORD *)(v193 + 6784), v62, 1);
                  v63 = *(_QWORD *)(v26 + 6808);
                  if ( v63 )
                    sub_140001660(*(_QWORD *)(v26 + 6816), v63, 1);
                  v64 = *(_QWORD *)(v26 + 6840);
                  if ( v64 )
                    sub_140001660(*(_QWORD *)(v26 + 6848), v64, 1);
                  v65 = *(_QWORD *)(v26 + 6872);
                  if ( v65 )
                    sub_140001660(*(_QWORD *)(v26 + 6880), v65, 1);
                  v66 = *(_QWORD *)(v26 + 6904);
                  if ( v66 )
                    sub_140001660(*(_QWORD *)(v26 + 6912), v66, 1);
                  v67 = *(_QWORD *)(v26 + 7736);
                  if ( v67 != -1 && v67 )
                    sub_140001660(*(_QWORD *)(v26 + 7744), v67, 1);
                  v68 = *(_QWORD *)(v26 + 6936);
                  if ( v68 )
                    sub_140001660(*(_QWORD *)(v26 + 6944), v68, 1);
                  v69 = *(_QWORD *)(v26 + 6968);
                  if ( v69 )
                    sub_140001660(*(_QWORD *)(v26 + 6976), v69, 1);
                  v70 = *(_QWORD *)(v26 + 7032);
                  if ( v70 )
                    sub_140001660(*(_QWORD *)(v26 + 7040), v70, 1);
                  v71 = *(_QWORD *)(v26 + 7064);
                  if ( v71 )
                    sub_140001660(*(_QWORD *)(v26 + 7072), v71, 1);
                  v72 = *(_QWORD *)(v26 + 7096);
                  if ( v72 )
                    sub_140001660(*(_QWORD *)(v26 + 7104), v72, 1);
                  v73 = *(_QWORD *)(v26 + 7128);
                  if ( v73 )
                    sub_140001660(*(_QWORD *)(v26 + 7136), v73, 1);
                  v74 = *(_QWORD *)(v26 + 7160);
                  if ( v74 )
                    sub_140001660(*(_QWORD *)(v26 + 7168), v74, 1);
                  v75 = *(_QWORD *)(v26 + 7192);
                  if ( v75 )
                    sub_140001660(*(_QWORD *)(v26 + 7200), v75, 1);
                  v76 = *(_QWORD *)(v26 + 7256);
                  if ( v76 )
                    sub_140001660(*(_QWORD *)(v26 + 7264), v76, 1);
                  v77 = *(_QWORD *)(v26 + 7288);
                  if ( v77 )
                    sub_140001660(*(_QWORD *)(v26 + 7296), v77, 1);
                  v78 = *(_QWORD *)(v26 + 7320);
                  if ( v78 )
                    sub_140001660(*(_QWORD *)(v26 + 7328), v78, 1);
                  v79 = *(_QWORD *)(v26 + 7352);
                  if ( v79 )
                    sub_140001660(*(_QWORD *)(v26 + 7360), v79, 1);
                  v80 = *(_QWORD *)(v26 + 7384);
                  if ( v80 )
                    sub_140001660(*(_QWORD *)(v26 + 7392), v80, 1);
                  v81 = *(_QWORD *)(v26 + 7416);
                  if ( v81 )
                    sub_140001660(*(_QWORD *)(v26 + 7424), v81, 1);
                  v82 = *(_QWORD *)(v26 + 7448);
                  if ( v82 )
                    sub_140001660(*(_QWORD *)(v26 + 7456), v82, 1);
                  v83 = *(_QWORD *)(v26 + 7480);
                  if ( v83 )
                    sub_140001660(*(_QWORD *)(v26 + 7488), v83, 1);
                  v84 = *(_QWORD *)(v26 + 7512);
                  if ( v84 )
                    sub_140001660(*(_QWORD *)(v26 + 7520), v84, 1);
                  v85 = *(_QWORD *)(v26 + 7544);
                  if ( v85 )
                    sub_140001660(*(_QWORD *)(v26 + 7552), v85, 1);
                  v86 = *(_QWORD *)(v26 + 7576);
                  if ( v86 )
                    sub_140001660(*(_QWORD *)(v26 + 7584), v86, 1);
                  v87 = *(_QWORD *)(v26 + 7608);
                  if ( v87 )
                    sub_140001660(*(_QWORD *)(v26 + 7616), v87, 1);
                  v88 = *(_QWORD *)(v26 + 7640);
                  if ( v88 )
                    sub_140001660(*(_QWORD *)(v26 + 7648), v88, 1);
                  v89 = *(_QWORD *)(v26 + 7672);
                  if ( v89 )
                    sub_140001660(*(_QWORD *)(v26 + 7680), v89, 1);
                  v90 = *(_QWORD *)(v26 + 7704);
                  if ( v90 )
                    sub_140001660(*(_QWORD *)(v26 + 7712), v90, 1);
                  goto LABEL_116;
                }
                v150 = v55;
                sub_14172B820(v151, v146, 144);
                v147[0] = v51;
                v147[1] = v54;
                v147[2] = v52;
                v148 = v53;
                *(_DWORD *)v149 = v182[0];
                *(_DWORD *)&v149[3] = *(_DWORD *)((char *)v182 + 3);
                v189 = v197;
                v188 = v57;
                sub_1404CCFF0(&v171, v147);
                v192 = *((_QWORD **)&v171 + 1);
                v91 = v171;
                v197 = (char *)v172;
                v30 = BYTE8(v172);
                v98 = HIBYTE(v172);
                v99 = *(unsigned __int16 *)((char *)&v172 + 13);
                v100 = *(unsigned int *)((char *)&v172 + 9);
                v27 = (_QWORD *)v173;
                sub_14172B820(v145, (char *)&v173 + 8, 224);
                v56 = v193;
                v101 = *(_QWORD *)(v193 + 6776);
                if ( v101 )
                  sub_140001660(*(_QWORD *)(v193 + 6784), v101, 1);
                v102 = *(_QWORD *)(v56 + 6808);
                if ( v102 )
                  sub_140001660(*(_QWORD *)(v56 + 6816), v102, 1);
                v103 = *(_QWORD *)(v56 + 6840);
                if ( v103 )
                  sub_140001660(*(_QWORD *)(v56 + 6848), v103, 1);
                v104 = *(_QWORD *)(v56 + 6872);
                if ( v104 )
                  sub_140001660(*(_QWORD *)(v56 + 6880), v104, 1);
                v105 = *(_QWORD *)(v56 + 6904);
                if ( v105 )
                  sub_140001660(*(_QWORD *)(v56 + 6912), v105, 1);
                v106 = *(_QWORD *)(v56 + 7736);
                if ( v106 != -1 && v106 )
                  sub_140001660(*(_QWORD *)(v56 + 7744), v106, 1);
                v107 = *(_QWORD *)(v56 + 6936);
                if ( v107 )
                  sub_140001660(*(_QWORD *)(v56 + 6944), v107, 1);
                v108 = *(_QWORD *)(v56 + 6968);
                if ( v108 )
                  sub_140001660(*(_QWORD *)(v56 + 6976), v108, 1);
                v109 = *(_QWORD *)(v56 + 7032);
                if ( v109 )
                  sub_140001660(*(_QWORD *)(v56 + 7040), v109, 1);
                v110 = *(_QWORD *)(v56 + 7064);
                if ( v110 )
                  sub_140001660(*(_QWORD *)(v56 + 7072), v110, 1);
                v111 = *(_QWORD *)(v56 + 7096);
                if ( v111 )
                  sub_140001660(*(_QWORD *)(v56 + 7104), v111, 1);
                v112 = *(_QWORD *)(v56 + 7128);
                if ( v112 )
                  sub_140001660(*(_QWORD *)(v56 + 7136), v112, 1);
                v113 = *(_QWORD *)(v56 + 7160);
                if ( v113 )
                  sub_140001660(*(_QWORD *)(v56 + 7168), v113, 1);
                v114 = *(_QWORD *)(v56 + 7192);
                if ( v114 )
                  sub_140001660(*(_QWORD *)(v56 + 7200), v114, 1);
                v115 = *(_QWORD *)(v56 + 7256);
                if ( v115 )
                  sub_140001660(*(_QWORD *)(v56 + 7264), v115, 1);
                v116 = *(_QWORD *)(v56 + 7288);
                if ( v116 )
                  sub_140001660(*(_QWORD *)(v56 + 7296), v116, 1);
                v117 = *(_QWORD *)(v56 + 7320);
                if ( v117 )
                  sub_140001660(*(_QWORD *)(v56 + 7328), v117, 1);
                v118 = *(_QWORD *)(v56 + 7352);
                if ( v118 )
                  sub_140001660(*(_QWORD *)(v56 + 7360), v118, 1);
                v119 = *(_QWORD *)(v56 + 7384);
                if ( v119 )
                  sub_140001660(*(_QWORD *)(v56 + 7392), v119, 1);
                v120 = *(_QWORD *)(v56 + 7416);
                if ( v120 )
                  sub_140001660(*(_QWORD *)(v56 + 7424), v120, 1);
                v121 = *(_QWORD *)(v56 + 7448);
                if ( v121 )
                  sub_140001660(*(_QWORD *)(v56 + 7456), v121, 1);
                v122 = *(_QWORD *)(v56 + 7480);
                if ( v122 )
                  sub_140001660(*(_QWORD *)(v56 + 7488), v122, 1);
                v123 = *(_QWORD *)(v56 + 7512);
                if ( v123 )
                  sub_140001660(*(_QWORD *)(v56 + 7520), v123, 1);
                v124 = *(_QWORD *)(v56 + 7544);
                if ( v124 )
                  sub_140001660(*(_QWORD *)(v56 + 7552), v124, 1);
                v125 = *(_QWORD *)(v56 + 7576);
                if ( v125 )
                  sub_140001660(*(_QWORD *)(v56 + 7584), v125, 1);
                v126 = *(_QWORD *)(v56 + 7608);
                if ( v126 )
                  sub_140001660(*(_QWORD *)(v56 + 7616), v126, 1);
                v127 = *(_QWORD *)(v56 + 7640);
                if ( v127 )
                  sub_140001660(*(_QWORD *)(v56 + 7648), v127, 1);
                v128 = *(_QWORD *)(v56 + 7672);
                if ( v128 )
                  sub_140001660(*(_QWORD *)(v56 + 7680), v128, 1);
                v129 = *(_QWORD *)(v56 + 7704);
                if ( v129 )
                  sub_140001660(*(_QWORD *)(v56 + 7712), v129, 1);
                *(_BYTE *)(v56 + 7777) = 0;
                sub_14172B820(&v152, v145, 224);
                *(_BYTE *)(v56 + 7776) = 1;
                if ( v91 != -2 )
                {
                  v25 = ((unsigned __int64)((v98 << 16) | v99) << 32) | v100;
                  v29 = (unsigned __int64)v197;
                  goto LABEL_119;
                }
              }
              *(_BYTE *)(v56 + 7784) = 3;
              *(_BYTE *)(v56 + 7792) = 3;
              v130 = 3;
              result = 1;
              goto LABEL_201;
            }
          }
          else
          {
            LODWORD(v192) = 0;
            v16 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_30;
          }
          v159 = nullptr;
          v160 = 1;
          v161 = 0;
          *(_QWORD *)&v172 = 1610612768;
          *(_QWORD *)&v171 = &v159;
          *((_QWORD *)&v171 + 1) = &off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v171) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v196,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v18 = v159;
          v16 = (char *)v160;
          v19 = (unsigned __int8)v161;
          v20 = HIBYTE(v161);
          v21 = *(unsigned __int16 *)((char *)&v161 + 5);
          v22 = *(unsigned int *)((char *)&v161 + 1);
          if ( !(_BYTE)v192 )
          {
            if ( 2 * *v15 )
            {
              v187 = v197;
              v186 = v194;
              v192 = v159;
              v142 = sub_14176DA50(v17);
              v18 = v192;
              if ( !v142 )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v23 = Address;
          v24 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v24 == 2 )
          {
            v187 = v197;
            v186 = v194;
            v192 = v18;
            WakeByAddressSingle(v23);
            v18 = v192;
          }
          if ( v18 == (_QWORD *)-1LL )
          {
            LODWORD(v192) = v19;
            goto LABEL_30;
          }
          v192 = v18;
          v25 = ((unsigned __int64)((v20 << 16) | v21) << 32) | v22;
          v26 = v193;
          v27 = v194;
          v28 = v197;
          v29 = (unsigned __int64)v16;
          v30 = v19;
LABEL_116:
          if ( ((v28 != nullptr) & *(_BYTE *)(v26 + 7777)) != 0 )
            sub_140001660(v27, v28, 1);
          *(_BYTE *)(v26 + 7777) = 0;
          sub_14172B820(&v152, v145, 224);
          *(_BYTE *)(v26 + 7776) = 1;
          v91 = -1;
LABEL_119:
          sub_14172B820(v144, &v152, 224);
          sub_140CA4F80(v180);
          v96 = v25 << 8;
          if ( v91 != -1 )
          {
            sub_14172B820(v158, v144, 224);
            *(_QWORD *)v155 = v91;
            *(_QWORD *)&v155[8] = v192;
            *(_QWORD *)&v155[16] = v29;
            v156 = v96 | v30;
            v157 = v27;
            sub_140508E20(&v171, v155);
            v29 = ((unsigned __int64)((HIBYTE(v171) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v171 + 13)) << 32)
                | *(unsigned int *)((char *)&v171 + 9);
            v8 = BYTE8(v171);
            v32 = *((_QWORD *)&v172 + 1);
            v31 = v172;
            v33 = v173;
            if ( (_QWORD)v171 == -1 )
            {
              v37 = 0;
            }
            else
            {
              HIBYTE(v171) = (((unsigned __int64)((HIBYTE(v171) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v171 + 13)) << 32)
                            | *(unsigned int *)((char *)&v171 + 9)) >> 48;
              *(_WORD *)((char *)&v171 + 13) = WORD2(v29);
              *(_DWORD *)((char *)&v171 + 9) = v29;
              v152 = 0;
              v153 = 1;
              v154 = 0;
              v145[2] = 1610612768;
              v145[0] = &v152;
              v145[1] = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v171, v145) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v196,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v31 = v152;
              v32 = v153;
              v33 = v154;
              sub_140CAB2C0(&v171);
              v37 = 1;
              v8 = 3;
            }
            v132 = v190;
            goto LABEL_194;
          }
          v33 = v96 | v30;
          if ( v96 < 0 )
          {
            v97 = 0;
            goto LABEL_125;
          }
          if ( !v33 )
          {
            v32 = 1;
            v134 = v192;
            v132 = v190;
            if ( !v192 )
              goto LABEL_193;
            goto LABEL_192;
          }
          nullsub_1(v93, v92, v94, v95, v143);
          v97 = 1;
          v133 = sub_140001650(v96 | v30, 1);
          if ( !v133 )
          {
LABEL_125:
            v197 = (char *)v29;
            sub_14176E54B(v97, v96 | v30);
          }
          v32 = v133;
          sub_14172B820(v133, v29, v33);
          v134 = v192;
          v132 = v190;
          if ( v192 )
          {
LABEL_192:
            v135 = v132;
            sub_140001660(v29, v134, 1);
            v132 = v135;
          }
LABEL_193:
          v37 = 1;
          v8 = 3;
          v31 = v33;
LABEL_194:
          *(_BYTE *)v181 = 1;
          sub_140CAB140(v132);
          v38 = v193;
          if ( *(_QWORD *)(v193 + 4616) != -1 )
          {
            v181 = (_QWORD *)(v193 + 4624);
            v136 = *(_QWORD **)(v193 + 4624);
            Address = *(PVOID *)(v193 + 4632);
            v197 = nullptr;
            v194 = v136;
            while ( Address != v197 )
            {
              ++v197;
              v137 = v136 + 12;
              sub_140401FB0();
              v136 = v137;
            }
            v38 = v193;
            v36 = *(_QWORD *)(v193 + 4616);
            if ( v36 )
LABEL_199:
              sub_140001660(*v181, 96 * v36, 8);
          }
LABEL_200:
          *(_BYTE *)(v38 + 7792) = 1;
          sub_140C9A380(v190);
          v164 = v29;
          v166 = BYTE6(v29);
          v165 = WORD2(v29);
          v168 = v32;
          v169 = v33;
          v163 = v8;
          v167 = v31;
          v162 = v37;
          v138 = v193;
          *(_BYTE *)(v193 + 7811) = 0;
          sub_14172B820(&v171, v138, 360);
          *(_BYTE *)(v138 + 7810) = 0;
          v139 = *(_QWORD *)(v138 + 384);
          *(_BYTE *)(v138 + 7809) = 0;
          *(_QWORD *)&v155[16] = *(_QWORD *)(v138 + 376);
          *(_OWORD *)v155 = *(_OWORD *)(v138 + 360);
          sub_140AFFC30(
            (__int64)&v171,
            v139,
            (__int64)&v162,
            (__int128 *)v155,
            *(_DWORD *)(v138 + 7800),
            *(_DWORD *)(v138 + 7804));
          v130 = 1;
          result = 0;
          v56 = v193;
LABEL_201:
          *(_BYTE *)(v56 + 7808) = v130;
          return result;
        case 1:
LABEL_221:
          sub_14176EC00(&off_141888760);
        case 2:
LABEL_220:
          sub_14176EC20(&off_141888760);
        case 3:
          goto LABEL_44;
      }
  }
}
