// Pseudocode for restore_skill_backup (EA: 0x140d4dc70, size: 0x19fe)
// Module: commands/skills
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 restore_skill_backup 处理器（commands::skills）。按 id 从备份恢复技能。⚠副作用：写回覆盖技能数据。
// Tauri 命令 restore_skill_backup 处理器（commands::skills）。按 id 从备份恢复技能。⚠副作用：写回覆盖技能数据。
char __fastcall sub_140D4DC70(__int64 a1, __int64 a2)
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
  __int64 v15; // rbx
  __int64 *v16; // r15
  char *v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // r14
  int v21; // r13d
  unsigned int v22; // r12d
  __int64 v23; // rdi
  PVOID v24; // rcx
  char v25; // al
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 v30; // rbx
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
  char v52; // bl
  unsigned __int64 v53; // r15
  __int64 v54; // r13
  char v55; // cl
  char result; // al
  __int64 v57; // r13
  __int64 v58; // rsi
  int v59; // ebx
  unsigned int v60; // esi
  __int64 v61; // rdi
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
  __int64 v91; // r15
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdi
  __int64 v97; // rbx
  int v98; // ebx
  unsigned int v99; // esi
  __int64 v100; // rdi
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
  __int64 v130; // rax
  _QWORD *v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rbx
  char *v134; // rcx
  char *v135; // r13
  __int64 v136; // rdi
  __int64 v137; // rdx
  int v138; // eax
  _QWORD *v139; // rdi
  char v140; // al
  __int64 v141; // [rsp+20h] [rbp-60h]
  _BYTE v142[528]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v143[66]; // [rsp+248h] [rbp+1C8h] BYREF
  _OWORD v144[28]; // [rsp+458h] [rbp+3D8h] BYREF
  _QWORD v145[3]; // [rsp+618h] [rbp+598h] BYREF
  char v146; // [rsp+630h] [rbp+5B0h]
  _BYTE v147[7]; // [rsp+631h] [rbp+5B1h]
  unsigned __int64 v148; // [rsp+638h] [rbp+5B8h]
  char v149[448]; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v150; // [rsp+800h] [rbp+780h] BYREF
  __int64 v151; // [rsp+808h] [rbp+788h]
  __int64 v152; // [rsp+810h] [rbp+790h]
  _QWORD *v153; // [rsp+A10h] [rbp+990h] BYREF
  __int64 v154; // [rsp+A18h] [rbp+998h]
  __int64 v155; // [rsp+A20h] [rbp+9A0h]
  _BYTE v156[24]; // [rsp+BD0h] [rbp+B50h] BYREF
  __int64 v157; // [rsp+BE8h] [rbp+B68h]
  unsigned __int64 v158; // [rsp+BF0h] [rbp+B70h]
  char v159[536]; // [rsp+BF8h] [rbp+B78h] BYREF
  __int128 v160; // [rsp+E10h] [rbp+D90h] BYREF
  __int128 v161; // [rsp+E20h] [rbp+DA0h] BYREF
  __int128 v162; // [rsp+E30h] [rbp+DB0h] BYREF
  __int128 v163; // [rsp+E40h] [rbp+DC0h]
  __int128 v164; // [rsp+E50h] [rbp+DD0h]
  __int128 v165; // [rsp+E60h] [rbp+DE0h]
  __int64 v166; // [rsp+1050h] [rbp+FD0h] BYREF
  char v167; // [rsp+1058h] [rbp+FD8h]
  int v168; // [rsp+1059h] [rbp+FD9h]
  __int16 v169; // [rsp+105Dh] [rbp+FDDh]
  char v170; // [rsp+105Fh] [rbp+FDFh]
  __int64 v171; // [rsp+1060h] [rbp+FE0h]
  __int64 v172; // [rsp+1068h] [rbp+FE8h]
  __int64 v173; // [rsp+1070h] [rbp+FF0h]
  __int64 v174; // [rsp+1078h] [rbp+FF8h]
  __int64 v175; // [rsp+1080h] [rbp+1000h]
  __int64 v176; // [rsp+1088h] [rbp+1008h]
  __int64 v177; // [rsp+1090h] [rbp+1010h]
  _QWORD *v178; // [rsp+1098h] [rbp+1018h]
  _DWORD v179[2]; // [rsp+10A0h] [rbp+1020h]
  _QWORD *v180; // [rsp+10A8h] [rbp+1028h] BYREF
  __int64 v181; // [rsp+10B0h] [rbp+1030h]
  __int64 v182; // [rsp+10B8h] [rbp+1038h]
  __int64 v183; // [rsp+10C0h] [rbp+1040h]
  __int64 v184; // [rsp+10C8h] [rbp+1048h]
  char *v185; // [rsp+10D0h] [rbp+1050h]
  __int64 v186; // [rsp+10D8h] [rbp+1058h]
  __int64 v187; // [rsp+10E0h] [rbp+1060h]
  __int64 v188; // [rsp+10E8h] [rbp+1068h]
  _QWORD *v189; // [rsp+10F0h] [rbp+1070h]
  PVOID Address; // [rsp+10F8h] [rbp+1078h]
  __int64 v191; // [rsp+1100h] [rbp+1080h]
  __int64 v192; // [rsp+1108h] [rbp+1088h]
  __int64 v193; // [rsp+1110h] [rbp+1090h]
  char v194; // [rsp+111Eh] [rbp+109Eh]
  char v195; // [rsp+111Fh] [rbp+109Fh] BYREF
  __int64 v196; // [rsp+1120h] [rbp+10A0h]

  v196 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 7808);
  v192 = a1;
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
          *(_QWORD *)&v163 = 0;
          *(_QWORD *)&v160 = aRestoreSkillBa;
          *((_QWORD *)&v160 + 1) = 20;
          *(_QWORD *)&v161 = aRepo_0;
          *((_QWORD *)&v161 + 1) = 4;
          v188 = v5;
          *(_QWORD *)&v162 = v5;
          *((_QWORD *)&v162 + 1) = v3 + 4616;
          v7 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 4608) + 16LL));
          Address = (PVOID)(v3 + 4616);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v156, (__int64)&v160, (__int64)&v161);
          v8 = v156[0];
          if ( v156[0] == 0xFF )
          {
            v7 = *(_QWORD *)&v156[8];
LABEL_5:
            *(_QWORD *)&v163 = 0;
            *(_QWORD *)&v160 = aRestoreSkillBa;
            *((_QWORD *)&v160 + 1) = 20;
            *(_QWORD *)&v161 = aId_10;
            *((_QWORD *)&v161 + 1) = 2;
            *(_QWORD *)&v162 = v188;
            *((_QWORD *)&v162 + 1) = v6;
            sub_140955980(v156, &v160);
            v8 = v156[0];
            if ( v156[0] == 0xFF )
            {
              v9 = v157;
              v3 = v192;
              v10 = v192 + 4640;
              v11 = *(_OWORD *)&v156[8];
              *(_QWORD *)(v192 + 4664) = v7;
              *(_OWORD *)(v3 + 4640) = v11;
              *(_QWORD *)(v3 + 4656) = v9;
              *(_BYTE *)(v3 + 5680) = 0;
              v12 = v3 + 5688;
              sub_14172B820(v3 + 5688, v10, 1048);
              v178 = (_QWORD *)(v3 + 7784);
              *(_BYTE *)(v3 + 7784) = 0;
              v5 = v188;
LABEL_8:
              v188 = v5;
              v177 = v3 + 6736;
              v174 = v12;
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
          v26 = ((unsigned __int64)((v156[7] << 16) | (unsigned int)*(unsigned __int16 *)&v156[5]) << 32)
              | *(unsigned int *)&v156[1];
          v31 = *(_QWORD *)&v156[8];
          v32 = *(_QWORD *)&v156[16];
          v33 = v157;
          sub_140CAB140(v188);
          if ( *(_QWORD *)Address == -1 )
          {
            v37 = 1;
            v38 = v192;
            goto LABEL_201;
          }
          v178 = (_QWORD *)(v192 + 4624);
          v34 = *(_QWORD *)(v192 + 4624);
          v191 = *(_QWORD *)(v192 + 4632);
          v193 = 0;
          v177 = v34;
          while ( v191 != v193 )
          {
            ++v193;
            v35 = v34 + 96;
            sub_140401FB0();
            v34 = v35;
          }
          v36 = *(_QWORD *)Address;
          v37 = 1;
          v38 = v192;
          if ( !*(_QWORD *)Address )
            goto LABEL_201;
          goto LABEL_200;
        case 1:
LABEL_219:
          v188 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_218:
          v188 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v13 = *(unsigned __int8 *)(v3 + 7784);
  v12 = v3 + 5688;
  v178 = (_QWORD *)(v3 + 7784);
  switch ( v13 )
  {
    case 0LL:
      goto LABEL_8;
    case 1LL:
      v188 = v5;
      v176 = v3 + 7784;
      v175 = v3 + 5688;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v188 = v5;
      v176 = v3 + 7784;
      v175 = v3 + 5688;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      v174 = v3 + 5688;
      v188 = v5;
      v177 = v3 + 6736;
      switch ( *(_BYTE *)(v3 + 7776) )
      {
        case 0:
LABEL_10:
          v14 = *(volatile void **)(v3 + 6760);
          *(_QWORD *)(v3 + 6768) = v14;
          *(_BYTE *)(v3 + 7777) = 1;
          v193 = *(_QWORD *)(v3 + 6736);
          v191 = *(_QWORD *)(v3 + 6744);
          v15 = *(_QWORD *)(v3 + 6752);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v14, 1, 0) )
          {
            v184 = v193;
            v183 = v191;
            sub_14176CDB0(v14);
          }
          Address = (PVOID)v14;
          v16 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v184 = v193;
            v183 = v191;
            v138 = sub_14176DA50(a1);
            LOBYTE(v138) = v138 ^ 1;
            LODWORD(v189) = v138;
            v17 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
            {
LABEL_30:
              Address = v17;
              sub_140A80280(v192 + 6776, v17 + 8);
              if ( ((unsigned __int8)v189 & 1) == 0 )
              {
                if ( 2 * *v16 )
                {
                  v184 = v193;
                  v183 = v191;
                  if ( !(unsigned __int8)sub_14176DA50(v39) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v40 = Address;
              v41 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v41 == 2 )
              {
                v184 = v193;
                v183 = v191;
                WakeByAddressSingle(v40);
              }
              v42 = v192;
              *(_BYTE *)(v192 + 7777) = 0;
              v43 = *(_OWORD *)(v42 + 7000);
              v161 = *(_OWORD *)(v42 + 7016);
              v160 = v43;
              v44 = *(_OWORD *)(v42 + 7224);
              v163 = *(_OWORD *)(v42 + 7240);
              v162 = v44;
              *(_QWORD *)&v164 = v193;
              *((_QWORD *)&v164 + 1) = v191;
              *(_QWORD *)&v165 = v15;
              v45 = off_141FB97C0;
              if ( *((_DWORD *)off_141FB97C0 + 24) )
              {
                v194 = 1;
                v139 = off_141FB97C0;
                sub_14172E34C(off_141FB97C0);
                v45 = v139;
              }
              if ( *((_DWORD *)v45 + 4) == 2 )
              {
                v46 = 704;
                if ( *(_BYTE *)v45 )
                  v46 = 472;
                v47 = v45[1] + v46;
                v194 = 0;
                v48 = sub_140859E00(v47, v45, &v160, &off_1417EBF48);
              }
              else
              {
                v49 = 704;
                if ( *((_BYTE *)v45 + 64) )
                  v49 = 472;
                v50 = v45[9] + v49;
                v194 = 0;
                v48 = sub_140859E00(v50, v45 + 8, &v160, &off_1417EBF30);
              }
              v3 = v192;
              *(_QWORD *)(v192 + 7768) = v48;
LABEL_44:
              Address = (PVOID)(v3 + 7768);
              sub_140503A30(&v160, v3 + 7768, a2);
              v51 = v160;
              if ( (_QWORD)v160 == -2 )
              {
                v54 = v192;
                *(_BYTE *)(v192 + 7776) = 3;
              }
              else
              {
                if ( (_DWORD)v160 == -1 )
                {
                  v20 = *((_QWORD *)&v160 + 1);
                  v52 = v161;
                  LODWORD(v180) = *(_DWORD *)((char *)&v161 + 1);
                  *(_DWORD *)((char *)&v180 + 3) = DWORD1(v161);
                  v53 = 0x800000000000000CuLL;
                  v26 = *((_QWORD *)&v161 + 1);
                }
                else
                {
                  v53 = *((_QWORD *)&v160 + 1);
                  v20 = v161;
                  v52 = BYTE8(v161);
                  LODWORD(v180) = *(_DWORD *)((char *)&v161 + 9);
                  *(_DWORD *)((char *)&v180 + 3) = HIDWORD(v161);
                  v26 = v162;
                  sub_14172B820(&v153, (char *)&v162 + 8, 448);
                }
                v57 = v191;
                v179[0] = (_DWORD)v180;
                *(_DWORD *)((char *)v179 + 3) = *(_DWORD *)((char *)&v180 + 3);
                sub_14172B820(v144, &v153, 448);
                v58 = *(_QWORD *)Address;
                v187 = v193;
                v186 = v57;
                if ( (unsigned __int8)sub_141398090(v58) )
                {
                  v187 = v193;
                  v186 = v57;
                  sub_14139A2E0(v58);
                }
                if ( (_DWORD)v51 == 2 )
                {
                  *(_QWORD *)&v160 = v53;
                  *((_QWORD *)&v160 + 1) = v20;
                  LOBYTE(v161) = v52;
                  *(_DWORD *)((char *)&v161 + 1) = v179[0];
                  DWORD1(v161) = *(_DWORD *)((char *)v179 + 3);
                  *((_QWORD *)&v161 + 1) = v26;
                  v162 = v144[0];
                  v163 = v144[1];
                  v164 = v144[2];
                  v165 = v144[3];
                  v180 = nullptr;
                  v181 = 1;
                  v182 = 0;
                  v155 = 1610612768;
                  v153 = &v180;
                  v154 = (__int64)&off_141891B48;
                  if ( (unsigned __int8)sub_1405060F0(&v160, &v153) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v195,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v189 = v180;
                  v185 = (char *)v181;
                  LOBYTE(v20) = v182;
                  v59 = HIBYTE(v182);
                  v60 = *(unsigned __int16 *)((char *)&v182 + 5);
                  v61 = *(unsigned int *)((char *)&v182 + 1);
                  v187 = v193;
                  v186 = v191;
                  sub_140CAC460(&v160);
                  goto LABEL_58;
                }
                if ( (_DWORD)v51 == -1 )
                {
                  *(_QWORD *)&v160 = v53;
                  *((_QWORD *)&v160 + 1) = v20;
                  LOBYTE(v161) = v52;
                  *(_DWORD *)((char *)&v161 + 1) = v179[0];
                  DWORD1(v161) = *(_DWORD *)((char *)v179 + 3);
                  *((_QWORD *)&v161 + 1) = v26;
                  v162 = v144[0];
                  v180 = nullptr;
                  v181 = 1;
                  v182 = 0;
                  v155 = 1610612768;
                  v153 = &v180;
                  v154 = (__int64)&off_141891B48;
                  if ( (unsigned __int8)sub_1412DDF00(&v160, &v153) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v195,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v189 = v180;
                  v185 = (char *)v181;
                  LOBYTE(v20) = v182;
                  v59 = HIBYTE(v182);
                  v60 = *(unsigned __int16 *)((char *)&v182 + 5);
                  v61 = *(unsigned int *)((char *)&v182 + 1);
                  v187 = v193;
                  v186 = v191;
                  sub_140CAB2C0(&v160);
LABEL_58:
                  v27 = ((unsigned __int64)((v59 << 16) | v60) << 32) | v61;
                  v28 = v192;
                  v62 = *(_QWORD *)(v192 + 6776);
                  v29 = v177;
                  v30 = v193;
                  if ( v62 )
                    sub_140001660(*(_QWORD *)(v192 + 6784), v62, 1);
                  v63 = *(_QWORD *)(v28 + 6808);
                  if ( v63 )
                    sub_140001660(*(_QWORD *)(v28 + 6816), v63, 1);
                  v64 = *(_QWORD *)(v28 + 6840);
                  if ( v64 )
                    sub_140001660(*(_QWORD *)(v28 + 6848), v64, 1);
                  v65 = *(_QWORD *)(v28 + 6872);
                  if ( v65 )
                    sub_140001660(*(_QWORD *)(v28 + 6880), v65, 1);
                  v66 = *(_QWORD *)(v28 + 6904);
                  if ( v66 )
                    sub_140001660(*(_QWORD *)(v28 + 6912), v66, 1);
                  v67 = *(_QWORD *)(v28 + 7736);
                  if ( v67 != -1 && v67 )
                    sub_140001660(*(_QWORD *)(v28 + 7744), v67, 1);
                  v68 = *(_QWORD *)(v28 + 6936);
                  if ( v68 )
                    sub_140001660(*(_QWORD *)(v28 + 6944), v68, 1);
                  v69 = *(_QWORD *)(v28 + 6968);
                  if ( v69 )
                    sub_140001660(*(_QWORD *)(v28 + 6976), v69, 1);
                  v70 = *(_QWORD *)(v28 + 7032);
                  if ( v70 )
                    sub_140001660(*(_QWORD *)(v28 + 7040), v70, 1);
                  v71 = *(_QWORD *)(v28 + 7064);
                  if ( v71 )
                    sub_140001660(*(_QWORD *)(v28 + 7072), v71, 1);
                  v72 = *(_QWORD *)(v28 + 7096);
                  if ( v72 )
                    sub_140001660(*(_QWORD *)(v28 + 7104), v72, 1);
                  v73 = *(_QWORD *)(v28 + 7128);
                  if ( v73 )
                    sub_140001660(*(_QWORD *)(v28 + 7136), v73, 1);
                  v74 = *(_QWORD *)(v28 + 7160);
                  if ( v74 )
                    sub_140001660(*(_QWORD *)(v28 + 7168), v74, 1);
                  v75 = *(_QWORD *)(v28 + 7192);
                  if ( v75 )
                    sub_140001660(*(_QWORD *)(v28 + 7200), v75, 1);
                  v76 = *(_QWORD *)(v28 + 7256);
                  if ( v76 )
                    sub_140001660(*(_QWORD *)(v28 + 7264), v76, 1);
                  v77 = *(_QWORD *)(v28 + 7288);
                  if ( v77 )
                    sub_140001660(*(_QWORD *)(v28 + 7296), v77, 1);
                  v78 = *(_QWORD *)(v28 + 7320);
                  if ( v78 )
                    sub_140001660(*(_QWORD *)(v28 + 7328), v78, 1);
                  v79 = *(_QWORD *)(v28 + 7352);
                  if ( v79 )
                    sub_140001660(*(_QWORD *)(v28 + 7360), v79, 1);
                  v80 = *(_QWORD *)(v28 + 7384);
                  if ( v80 )
                    sub_140001660(*(_QWORD *)(v28 + 7392), v80, 1);
                  v81 = *(_QWORD *)(v28 + 7416);
                  if ( v81 )
                    sub_140001660(*(_QWORD *)(v28 + 7424), v81, 1);
                  v82 = *(_QWORD *)(v28 + 7448);
                  if ( v82 )
                    sub_140001660(*(_QWORD *)(v28 + 7456), v82, 1);
                  v83 = *(_QWORD *)(v28 + 7480);
                  if ( v83 )
                    sub_140001660(*(_QWORD *)(v28 + 7488), v83, 1);
                  v84 = *(_QWORD *)(v28 + 7512);
                  if ( v84 )
                    sub_140001660(*(_QWORD *)(v28 + 7520), v84, 1);
                  v85 = *(_QWORD *)(v28 + 7544);
                  if ( v85 )
                    sub_140001660(*(_QWORD *)(v28 + 7552), v85, 1);
                  v86 = *(_QWORD *)(v28 + 7576);
                  if ( v86 )
                    sub_140001660(*(_QWORD *)(v28 + 7584), v86, 1);
                  v87 = *(_QWORD *)(v28 + 7608);
                  if ( v87 )
                    sub_140001660(*(_QWORD *)(v28 + 7616), v87, 1);
                  v88 = *(_QWORD *)(v28 + 7640);
                  if ( v88 )
                    sub_140001660(*(_QWORD *)(v28 + 7648), v88, 1);
                  v89 = *(_QWORD *)(v28 + 7672);
                  if ( v89 )
                    sub_140001660(*(_QWORD *)(v28 + 7680), v89, 1);
                  v90 = *(_QWORD *)(v28 + 7704);
                  if ( v90 )
                    sub_140001660(*(_QWORD *)(v28 + 7712), v90, 1);
                  goto LABEL_117;
                }
                v148 = v26;
                sub_14172B820(v149, v144, 448);
                v145[0] = v51;
                v145[1] = v53;
                v145[2] = v20;
                v146 = v52;
                *(_DWORD *)v147 = v179[0];
                *(_DWORD *)&v147[3] = *(_DWORD *)((char *)v179 + 3);
                v187 = v193;
                v186 = v57;
                sub_1404CD4A0(&v160, v145);
                v189 = *((_QWORD **)&v160 + 1);
                v91 = v160;
                v185 = (char *)v161;
                LOBYTE(v20) = BYTE8(v161);
                v98 = HIBYTE(v161);
                v99 = *(unsigned __int16 *)((char *)&v161 + 13);
                v100 = *(unsigned int *)((char *)&v161 + 9);
                v26 = v162;
                sub_14172B820(v143, (char *)&v162 + 8, 528);
                v54 = v192;
                v101 = *(_QWORD *)(v192 + 6776);
                if ( v101 )
                  sub_140001660(*(_QWORD *)(v192 + 6784), v101, 1);
                v102 = *(_QWORD *)(v54 + 6808);
                if ( v102 )
                  sub_140001660(*(_QWORD *)(v54 + 6816), v102, 1);
                v103 = *(_QWORD *)(v54 + 6840);
                if ( v103 )
                  sub_140001660(*(_QWORD *)(v54 + 6848), v103, 1);
                v104 = *(_QWORD *)(v54 + 6872);
                if ( v104 )
                  sub_140001660(*(_QWORD *)(v54 + 6880), v104, 1);
                v105 = *(_QWORD *)(v54 + 6904);
                if ( v105 )
                  sub_140001660(*(_QWORD *)(v54 + 6912), v105, 1);
                v106 = *(_QWORD *)(v54 + 7736);
                if ( v106 != -1 && v106 )
                  sub_140001660(*(_QWORD *)(v54 + 7744), v106, 1);
                v107 = *(_QWORD *)(v54 + 6936);
                if ( v107 )
                  sub_140001660(*(_QWORD *)(v54 + 6944), v107, 1);
                v108 = *(_QWORD *)(v54 + 6968);
                if ( v108 )
                  sub_140001660(*(_QWORD *)(v54 + 6976), v108, 1);
                v109 = *(_QWORD *)(v54 + 7032);
                if ( v109 )
                  sub_140001660(*(_QWORD *)(v54 + 7040), v109, 1);
                v110 = *(_QWORD *)(v54 + 7064);
                if ( v110 )
                  sub_140001660(*(_QWORD *)(v54 + 7072), v110, 1);
                v111 = *(_QWORD *)(v54 + 7096);
                if ( v111 )
                  sub_140001660(*(_QWORD *)(v54 + 7104), v111, 1);
                v112 = *(_QWORD *)(v54 + 7128);
                if ( v112 )
                  sub_140001660(*(_QWORD *)(v54 + 7136), v112, 1);
                v113 = *(_QWORD *)(v54 + 7160);
                if ( v113 )
                  sub_140001660(*(_QWORD *)(v54 + 7168), v113, 1);
                v114 = *(_QWORD *)(v54 + 7192);
                if ( v114 )
                  sub_140001660(*(_QWORD *)(v54 + 7200), v114, 1);
                v115 = *(_QWORD *)(v54 + 7256);
                if ( v115 )
                  sub_140001660(*(_QWORD *)(v54 + 7264), v115, 1);
                v116 = *(_QWORD *)(v54 + 7288);
                if ( v116 )
                  sub_140001660(*(_QWORD *)(v54 + 7296), v116, 1);
                v117 = *(_QWORD *)(v54 + 7320);
                if ( v117 )
                  sub_140001660(*(_QWORD *)(v54 + 7328), v117, 1);
                v118 = *(_QWORD *)(v54 + 7352);
                if ( v118 )
                  sub_140001660(*(_QWORD *)(v54 + 7360), v118, 1);
                v119 = *(_QWORD *)(v54 + 7384);
                if ( v119 )
                  sub_140001660(*(_QWORD *)(v54 + 7392), v119, 1);
                v120 = *(_QWORD *)(v54 + 7416);
                if ( v120 )
                  sub_140001660(*(_QWORD *)(v54 + 7424), v120, 1);
                v121 = *(_QWORD *)(v54 + 7448);
                if ( v121 )
                  sub_140001660(*(_QWORD *)(v54 + 7456), v121, 1);
                v122 = *(_QWORD *)(v54 + 7480);
                if ( v122 )
                  sub_140001660(*(_QWORD *)(v54 + 7488), v122, 1);
                v123 = *(_QWORD *)(v54 + 7512);
                if ( v123 )
                  sub_140001660(*(_QWORD *)(v54 + 7520), v123, 1);
                v124 = *(_QWORD *)(v54 + 7544);
                if ( v124 )
                  sub_140001660(*(_QWORD *)(v54 + 7552), v124, 1);
                v125 = *(_QWORD *)(v54 + 7576);
                if ( v125 )
                  sub_140001660(*(_QWORD *)(v54 + 7584), v125, 1);
                v126 = *(_QWORD *)(v54 + 7608);
                if ( v126 )
                  sub_140001660(*(_QWORD *)(v54 + 7616), v126, 1);
                v127 = *(_QWORD *)(v54 + 7640);
                if ( v127 )
                  sub_140001660(*(_QWORD *)(v54 + 7648), v127, 1);
                v128 = *(_QWORD *)(v54 + 7672);
                if ( v128 )
                  sub_140001660(*(_QWORD *)(v54 + 7680), v128, 1);
                v129 = *(_QWORD *)(v54 + 7704);
                if ( v129 )
                  sub_140001660(*(_QWORD *)(v54 + 7712), v129, 1);
                *(_BYTE *)(v54 + 7777) = 0;
                sub_14172B820(&v150, v143, 528);
                *(_BYTE *)(v54 + 7776) = 1;
                if ( v91 != -1 )
                {
                  v27 = ((unsigned __int64)((v98 << 16) | v99) << 32) | v100;
                  v29 = v177;
                  goto LABEL_120;
                }
              }
              *(_BYTE *)(v54 + 7784) = 3;
              *(_BYTE *)(v54 + 7792) = 3;
              v55 = 3;
              result = 1;
              goto LABEL_202;
            }
          }
          else
          {
            LODWORD(v189) = 0;
            v17 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_30;
          }
          v153 = nullptr;
          v154 = 1;
          v155 = 0;
          *(_QWORD *)&v161 = 1610612768;
          *(_QWORD *)&v160 = &v153;
          *((_QWORD *)&v160 + 1) = &off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v160) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v195,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v19 = v153;
          v17 = (char *)v154;
          LODWORD(v20) = (unsigned __int8)v155;
          v21 = HIBYTE(v155);
          v22 = *(unsigned __int16 *)((char *)&v155 + 5);
          v23 = *(unsigned int *)((char *)&v155 + 1);
          if ( !(_BYTE)v189 )
          {
            if ( 2 * *v16 )
            {
              v184 = v193;
              v183 = v191;
              v189 = v153;
              v185 = (char *)v154;
              v140 = sub_14176DA50(v18);
              v17 = v185;
              v19 = v189;
              if ( !v140 )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v24 = Address;
          v25 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v25 == 2 )
          {
            v184 = v193;
            v183 = v191;
            v185 = v17;
            v189 = v19;
            WakeByAddressSingle(v24);
            v17 = v185;
            v19 = v189;
          }
          if ( v19 == (_QWORD *)-1LL )
          {
            LODWORD(v189) = v20;
            goto LABEL_30;
          }
          v185 = v17;
          v189 = v19;
          v26 = (unsigned __int64)((v21 << 16) | v22) << 32;
          v27 = v26 | v23;
          v28 = v192;
          v29 = v177;
          v30 = v193;
LABEL_117:
          if ( ((v30 != 0) & *(_BYTE *)(v28 + 7777)) != 0 )
            sub_140001660(v191, v30, 1);
          *(_BYTE *)(v28 + 7777) = 0;
          sub_14172B820(&v150, v143, 528);
          *(_BYTE *)(v28 + 7776) = 1;
          v91 = 2;
LABEL_120:
          sub_14172B820(v142, &v150, 528);
          sub_140CA4F80(v29);
          v96 = v27 << 8;
          if ( v91 != 2 )
          {
            sub_14172B820(v159, v142, 528);
            *(_QWORD *)v156 = v91;
            *(_QWORD *)&v156[8] = v189;
            *(_QWORD *)&v156[16] = v185;
            v157 = v96 | (unsigned __int8)v20;
            v158 = v26;
            sub_1405095E0(&v160, v156);
            v26 = ((unsigned __int64)((HIBYTE(v160) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v160 + 13)) << 32)
                | *(unsigned int *)((char *)&v160 + 9);
            v8 = BYTE8(v160);
            v32 = *((_QWORD *)&v161 + 1);
            v31 = v161;
            v33 = v162;
            if ( (_QWORD)v160 == -1 )
            {
              v37 = 0;
            }
            else
            {
              HIBYTE(v160) = (((unsigned __int64)((HIBYTE(v160) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v160 + 13)) << 32)
                            | *(unsigned int *)((char *)&v160 + 9)) >> 48;
              *(_WORD *)((char *)&v160 + 13) = WORD2(v26);
              *(_DWORD *)((char *)&v160 + 9) = v26;
              v150 = 0;
              v151 = 1;
              v152 = 0;
              v143[2] = 1610612768;
              v143[0] = &v150;
              v143[1] = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v160, v143) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v195,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v31 = v150;
              v32 = v151;
              v33 = v152;
              sub_140CAB2C0(&v160);
              v37 = 1;
              v8 = 3;
            }
            v132 = v188;
            goto LABEL_195;
          }
          v33 = v96 | (unsigned __int8)v20;
          if ( v96 < 0 )
          {
            v97 = 0;
            goto LABEL_123;
          }
          if ( v33 )
          {
            nullsub_1(v93, v92, v94, v95, v141);
            v97 = 1;
            v130 = sub_140001650(v33, 1);
            if ( !v130 )
LABEL_123:
              sub_14176E54B(v97, v33);
            v32 = v130;
            sub_14172B820(v130, v185, v33);
            v131 = v189;
            v132 = v188;
            if ( !v189 )
              goto LABEL_192;
          }
          else
          {
            v32 = 1;
            v131 = v189;
            v132 = v188;
            if ( !v189 )
              goto LABEL_192;
          }
          v133 = v132;
          sub_140001660(v185, v131, 1);
          v132 = v133;
LABEL_192:
          v37 = 1;
          v8 = 3;
          v31 = v33;
LABEL_195:
          *(_BYTE *)v178 = 1;
          sub_140CAB140(v132);
          v38 = v192;
          if ( *(_QWORD *)(v192 + 4616) != -1 )
          {
            v178 = (_QWORD *)(v192 + 4624);
            v134 = *(char **)(v192 + 4624);
            v191 = *(_QWORD *)(v192 + 4632);
            v193 = 0;
            Address = v134;
            while ( v191 != v193 )
            {
              ++v193;
              v135 = v134 + 96;
              sub_140401FB0();
              v134 = v135;
            }
            v38 = v192;
            v36 = *(_QWORD *)(v192 + 4616);
            if ( v36 )
LABEL_200:
              sub_140001660(*v178, 96 * v36, 8);
          }
LABEL_201:
          *(_BYTE *)(v38 + 7792) = 1;
          sub_140C9A380(v188);
          v168 = v26;
          v170 = BYTE6(v26);
          v169 = WORD2(v26);
          v172 = v32;
          v173 = v33;
          v167 = v8;
          v171 = v31;
          v166 = v37;
          v136 = v192;
          *(_BYTE *)(v192 + 7811) = 0;
          sub_14172B820(&v160, v136, 360);
          *(_BYTE *)(v136 + 7810) = 0;
          v137 = *(_QWORD *)(v136 + 384);
          *(_BYTE *)(v136 + 7809) = 0;
          *(_QWORD *)&v156[16] = *(_QWORD *)(v136 + 376);
          *(_OWORD *)v156 = *(_OWORD *)(v136 + 360);
          sub_140AFFC30(
            (__int64)&v160,
            v137,
            (__int64)&v166,
            (__int128 *)v156,
            *(_DWORD *)(v136 + 7800),
            *(_DWORD *)(v136 + 7804));
          v55 = 1;
          result = 0;
          v54 = v192;
LABEL_202:
          *(_BYTE *)(v54 + 7808) = v55;
          return result;
        case 1:
LABEL_221:
          sub_14176EC00(&off_1418887A8);
        case 2:
LABEL_220:
          sub_14176EC20(&off_1418887A8);
        case 3:
          goto LABEL_44;
      }
  }
}
