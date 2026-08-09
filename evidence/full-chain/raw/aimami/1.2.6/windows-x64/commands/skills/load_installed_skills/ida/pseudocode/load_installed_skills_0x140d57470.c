// Pseudocode for load_installed_skills (EA: 0x140d57470, size: 0x1723)
// Module: commands/skills
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 load_installed_skills 处理器（commands::skills）。读取并返回已安装技能列表（mac 符号 CoreEnvelope<SkillListPayload> 佐证）。
// Tauri 命令 load_installed_skills 处理器（commands::skills）。读取并返回已安装技能列表（mac 符号 CoreEnvelope<SkillListPayload> 佐证）。
char __fastcall sub_140D57470(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // r15
  _BYTE *v9; // r14
  volatile void *v10; // rbx
  __int64 *v11; // rbx
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // r13
  __int128 v18; // rdi
  int v19; // r12d
  int v20; // r15d
  __int64 v21; // r14
  PVOID v22; // rcx
  char v23; // al
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r14
  __int64 v26; // rbx
  char v27; // r14
  int v28; // r13d
  unsigned int v29; // ebx
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID v38; // rcx
  char v39; // al
  __int64 v40; // r14
  void *v41; // r15
  __int64 v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rax
  unsigned __int8 v47; // bl
  __int64 v48; // r13
  char v49; // al
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // r14
  char v58; // bl
  __int64 v59; // r15
  _BYTE *v60; // r14
  char v61; // cl
  char result; // al
  __int64 v63; // rsi
  int v64; // ebx
  __int64 v65; // r14
  int v66; // edi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r14
  int v72; // edx
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 v75; // r13
  __int64 v76; // rbx
  __int64 v77; // rax
  PVOID v78; // rdx
  __int64 *v79; // rcx
  __int64 *v80; // r13
  volatile void *v81; // rdi
  PVOID v82; // rcx
  __int64 *v83; // r15
  char *v84; // rcx
  __int64 v85; // rcx
  int v86; // r12d
  __int64 v87; // r14
  PVOID v88; // rcx
  char v89; // al
  __int64 v90; // rsi
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // rcx
  __int128 v98; // xmm6
  PVOID v99; // rcx
  char v100; // al
  int v101; // eax
  _QWORD *v102; // rdi
  int v103; // eax
  __int64 v104; // [rsp+20h] [rbp-60h]
  __int128 v105; // [rsp+30h] [rbp-50h] BYREF
  __int128 v106; // [rsp+40h] [rbp-40h]
  __int128 v107; // [rsp+50h] [rbp-30h]
  __int128 v108; // [rsp+60h] [rbp-20h]
  __int64 v109; // [rsp+70h] [rbp-10h]
  __int128 v110; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v111[24]; // [rsp+90h] [rbp+10h]
  __m256i v112; // [rsp+A8h] [rbp+28h]
  __int128 v113; // [rsp+C8h] [rbp+48h]
  __int128 v114; // [rsp+D8h] [rbp+58h]
  __int128 v115; // [rsp+E8h] [rbp+68h]
  __int128 v116; // [rsp+F8h] [rbp+78h]
  __int64 v117; // [rsp+108h] [rbp+88h]
  __m256i v118; // [rsp+110h] [rbp+90h]
  __int128 v119; // [rsp+130h] [rbp+B0h]
  __int128 v120; // [rsp+140h] [rbp+C0h]
  __int128 v121; // [rsp+150h] [rbp+D0h]
  __int128 v122; // [rsp+160h] [rbp+E0h]
  __int64 v123; // [rsp+170h] [rbp+F0h]
  __int64 v124; // [rsp+178h] [rbp+F8h] BYREF
  char v125; // [rsp+180h] [rbp+100h]
  int v126; // [rsp+181h] [rbp+101h]
  __int16 v127; // [rsp+185h] [rbp+105h]
  char v128; // [rsp+187h] [rbp+107h]
  __int64 v129; // [rsp+188h] [rbp+108h]
  __int128 v130; // [rsp+190h] [rbp+110h]
  __m256i v131; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v132; // [rsp+1C0h] [rbp+140h]
  __int128 v133; // [rsp+1D0h] [rbp+150h]
  __int128 v134; // [rsp+1E0h] [rbp+160h]
  __int128 v135; // [rsp+1F0h] [rbp+170h]
  __int64 v136; // [rsp+200h] [rbp+180h]
  __int64 v137; // [rsp+208h] [rbp+188h] BYREF
  __int64 v138; // [rsp+210h] [rbp+190h]
  __int64 v139; // [rsp+218h] [rbp+198h] BYREF
  _BYTE v140[48]; // [rsp+220h] [rbp+1A0h]
  __int128 v141; // [rsp+250h] [rbp+1D0h]
  __int128 v142; // [rsp+260h] [rbp+1E0h]
  __int128 v143; // [rsp+270h] [rbp+1F0h]
  __int128 v144; // [rsp+280h] [rbp+200h]
  __int64 v145; // [rsp+290h] [rbp+210h]
  __m256i v146; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v147; // [rsp+390h] [rbp+310h]
  __int128 v148; // [rsp+3A0h] [rbp+320h]
  __int128 v149; // [rsp+3B0h] [rbp+330h]
  __int128 v150; // [rsp+3C0h] [rbp+340h]
  __int64 v151; // [rsp+3D0h] [rbp+350h]
  __int128 v152; // [rsp+3E0h] [rbp+360h]
  __int64 v153; // [rsp+3F0h] [rbp+370h]
  __int64 v154; // [rsp+3F8h] [rbp+378h]
  __int128 v155; // [rsp+400h] [rbp+380h] BYREF
  __int128 v156; // [rsp+410h] [rbp+390h]
  __int128 v157; // [rsp+420h] [rbp+3A0h]
  __int128 v158; // [rsp+430h] [rbp+3B0h]
  __int128 v159; // [rsp+440h] [rbp+3C0h] BYREF
  __int128 v160; // [rsp+450h] [rbp+3D0h]
  __int128 v161; // [rsp+460h] [rbp+3E0h]
  __int128 v162; // [rsp+470h] [rbp+3F0h]
  _DWORD v163[2]; // [rsp+488h] [rbp+408h]
  _BYTE *v164; // [rsp+490h] [rbp+410h]
  __int64 *v165; // [rsp+498h] [rbp+418h]
  __int64 v166; // [rsp+4A0h] [rbp+420h]
  __int64 v167; // [rsp+4A8h] [rbp+428h]
  char *v168; // [rsp+4B0h] [rbp+430h]
  __int64 v169; // [rsp+4B8h] [rbp+438h]
  char v170; // [rsp+4C6h] [rbp+446h]
  char v171; // [rsp+4C7h] [rbp+447h]
  PVOID Address; // [rsp+4C8h] [rbp+448h]
  char v173; // [rsp+4D6h] [rbp+456h] BYREF
  char v174; // [rsp+4D7h] [rbp+457h]
  __int64 v175; // [rsp+4D8h] [rbp+458h]

  v175 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 7664);
  v169 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 7665) = 257;
      *(_BYTE *)(a1 + 7667) = 1;
      v5 = a1 + 4024;
      sub_14172B820(a1 + 4024, a1 + 392, 3632);
      switch ( *(_BYTE *)(v3 + 7648) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_144;
        case 2:
          goto LABEL_143;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 4024;
      switch ( *(_BYTE *)(a1 + 7648) )
      {
        case 0:
LABEL_4:
          v137 = (__int64)aLoadInstalledS;
          v138 = 21;
          v139 = (__int64)aRepo_0;
          *(_QWORD *)v140 = 4;
          v167 = v5;
          *(_QWORD *)&v140[8] = v5;
          *(_OWORD *)&v140[16] = (unsigned __int64)(v3 + 4544);
          v6 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 4536) + 16LL));
          if ( v6 )
            goto LABEL_5;
          sub_14172C620((__int64)&v110, (__int64)&v137, (__int64)&v139);
          v27 = v110;
          if ( (_BYTE)v110 == 0xFF )
          {
            v6 = *((_QWORD *)&v110 + 1);
LABEL_5:
            v3 = v169;
            v7 = v169 + 4568;
            *(_QWORD *)(v169 + 4568) = v6;
            *(_BYTE *)(v3 + 5584) = 0;
            v8 = (__int64 *)(v3 + 5592);
            sub_14172B820(v3 + 5592, v7, 1024);
            v9 = (_BYTE *)(v3 + 7640);
            *(_BYTE *)(v3 + 7640) = 0;
            v5 = v167;
LABEL_7:
            sub_14172B820(v3 + 6616, v8, 1024);
            switch ( *(_BYTE *)(v3 + 7632) )
            {
              case 0:
                goto LABEL_9;
              case 1:
                goto LABEL_146;
              case 2:
                goto LABEL_145;
              case 3:
                goto LABEL_20;
            }
          }
          v165 = (__int64 *)(v3 + 4544);
          v28 = BYTE7(v110);
          v29 = *(unsigned __int16 *)((char *)&v110 + 5);
          v30 = *(unsigned int *)((char *)&v110 + 1);
          v31 = *((_QWORD *)&v110 + 1);
          v18 = *(_OWORD *)v111;
          sub_140CAB140(v167);
          v24 = ((unsigned __int64)((v28 << 16) | v29) << 32) | v30;
          if ( *v165 == -1 )
          {
            v47 = 1;
            v48 = v169;
            goto LABEL_104;
          }
          v168 = (char *)(v169 + 4552);
          v32 = *(_QWORD *)(v169 + 4552);
          v164 = *(_BYTE **)(v169 + 4560);
          Address = nullptr;
          v166 = v32;
          while ( v164 != Address )
          {
            Address = (char *)Address + 1;
            v33 = v32 + 96;
            sub_140401FB0();
            v32 = v33;
          }
          v46 = *v165;
          v47 = 1;
          v48 = v169;
          if ( !*v165 )
            goto LABEL_104;
          goto LABEL_84;
        case 1:
LABEL_144:
          v167 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_143:
          v167 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v9 = (_BYTE *)(v3 + 7640);
  v8 = (__int64 *)(v3 + 5592);
  switch ( *(_BYTE *)(v3 + 7640) )
  {
    case 0:
      goto LABEL_7;
    case 1:
      v167 = v5;
      v154 = v3 + 5592;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v167 = v5;
      v154 = v3 + 5592;
      sub_14176EC20(&off_1418851A0);
    case 3:
      switch ( *(_BYTE *)(v3 + 7632) )
      {
        case 0:
LABEL_9:
          v165 = v8;
          v164 = v9;
          v167 = v5;
          v10 = *(volatile void **)(v3 + 6616);
          *(_QWORD *)(v3 + 6624) = v10;
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v10, 1, 0) )
            sub_14176CDB0(v10);
          Address = (PVOID)v10;
          v11 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v101 = sub_14176DA50(a1);
            LOBYTE(v101) = v101 ^ 1;
            LODWORD(v166) = v101;
            v12 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_27;
          }
          else
          {
            LODWORD(v166) = 0;
            v12 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_27;
          }
          *(_QWORD *)&v159 = 0;
          *((_QWORD *)&v159 + 1) = 1;
          *(_QWORD *)&v160 = 0;
          v139 = 1610612768;
          v137 = (__int64)&v159;
          v138 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v137) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v173,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v168 = *((char **)&v159 + 1);
          v17 = (void *)v159;
          LODWORD(v18) = (unsigned __int8)v160;
          v19 = BYTE7(v160);
          v20 = *(unsigned __int16 *)((char *)&v160 + 5);
          v21 = *(unsigned int *)((char *)&v160 + 1);
          if ( !(_BYTE)v166 && 2 * *v11 && !(unsigned __int8)sub_14176DA50(v14) )
            *((_BYTE *)Address + 1) = 1;
          v22 = Address;
          v23 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v23 == 2 )
            WakeByAddressSingle(v22);
          if ( v17 != (void *)-1LL )
          {
            v24 = (unsigned int)(v19 << 16);
            v25 = ((unsigned __int64)((unsigned int)v24 | v20) << 32) | v21;
            v26 = v169;
LABEL_70:
            Address = v17;
            v151 = v136;
            v150 = v135;
            v149 = v134;
            v148 = v133;
            v147 = v132;
            v146 = v131;
            *(_BYTE *)(v26 + 7632) = 1;
            v118 = v146;
            v119 = v147;
            v120 = v148;
            v121 = v149;
            v122 = v150;
            v123 = v151;
            goto LABEL_71;
          }
          v12 = v168;
          LODWORD(v166) = v18;
LABEL_27:
          Address = v12;
          sub_140A80280(v169 + 6632, v12 + 8);
          if ( (v166 & 1) == 0 && 2 * *v11 && !(unsigned __int8)sub_14176DA50(v35) )
            *((_BYTE *)Address + 1) = 1;
          v38 = Address;
          v39 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v39 == 2 )
            WakeByAddressSingle(v38);
          v40 = v169;
          v41 = *(void **)(v169 + 6872);
          if ( (__int64)v41 < 0 )
          {
            v42 = 0;
            goto LABEL_33;
          }
          if ( v41 )
          {
            v43 = *(_QWORD *)(v169 + 6864);
            nullsub_1(v38, v34, v36, v37, v104);
            v42 = 1;
            v44 = sub_140001650(v41, 1);
            if ( !v44 )
LABEL_33:
              sub_14176E54B(v42, v41);
            v45 = v44;
            sub_14172B820(v44, v43, v41);
          }
          else
          {
            v45 = 1;
          }
          v49 = *(_BYTE *)(v40 + 6880);
          v137 = (__int64)v41;
          v168 = (char *)v45;
          v138 = v45;
          Address = v41;
          v139 = (__int64)v41;
          v140[0] = v49;
          v50 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v170 = 0;
            v102 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v50 = v102;
          }
          if ( *((_DWORD *)v50 + 4) == 2 )
          {
            v51 = 704;
            if ( *(_BYTE *)v50 )
              v51 = 472;
            v52 = v50[1] + v51;
            v170 = 1;
            v53 = sub_14085A140(v52, v50, &v137, &off_1417EBF48);
          }
          else
          {
            v54 = 704;
            if ( *((_BYTE *)v50 + 64) )
              v54 = 472;
            v55 = v50[9] + v54;
            v170 = 1;
            v53 = sub_14085A140(v55, v50 + 8, &v137, &off_1417EBF30);
          }
          v3 = v169;
          *(_QWORD *)(v169 + 7624) = v53;
LABEL_51:
          Address = (PVOID)(v3 + 7624);
          sub_1405011F0(&v137, v3 + 7624, a2);
          v56 = v137;
          if ( v137 == -3 )
          {
            v60 = (_BYTE *)v169;
            *(_BYTE *)(v169 + 7632) = 3;
LABEL_55:
            v60[7640] = 3;
            v60[7648] = 3;
            v61 = 3;
            result = 1;
            goto LABEL_105;
          }
          if ( (_DWORD)v137 == -2 )
          {
            v57 = v138;
            v58 = v139;
            LODWORD(v155) = *(_DWORD *)((char *)&v139 + 1);
            *(_DWORD *)((char *)&v155 + 3) = HIDWORD(v139);
            v24 = 0x800000000000000CuLL;
            v59 = *(_QWORD *)v140;
          }
          else
          {
            v24 = v138;
            v57 = v139;
            v58 = v140[0];
            LODWORD(v155) = *(_DWORD *)&v140[1];
            *(_DWORD *)((char *)&v155 + 3) = *(_DWORD *)&v140[4];
            v59 = *(_QWORD *)&v140[8];
            v159 = *(_OWORD *)&v140[16];
            v160 = *(_OWORD *)&v140[32];
            v161 = v141;
            *(_QWORD *)&v162 = v142;
          }
          v163[0] = v155;
          *(_DWORD *)((char *)v163 + 3) = *(_DWORD *)((char *)&v155 + 3);
          v106 = v159;
          v107 = v160;
          v108 = v161;
          v109 = v162;
          v63 = *(_QWORD *)Address;
          if ( (unsigned __int8)sub_141398090(*(_QWORD *)Address) )
            sub_14139A2E0(v63);
          if ( (_DWORD)v56 != -1 )
          {
            if ( (_DWORD)v56 == -2 )
            {
              v137 = v24;
              v138 = v57;
              LOBYTE(v139) = v58;
              *(_DWORD *)((char *)&v139 + 1) = v163[0];
              HIDWORD(v139) = *(_DWORD *)((char *)v163 + 3);
              *(_QWORD *)v140 = v59;
              *(_OWORD *)&v140[8] = v106;
              *(_QWORD *)&v155 = 0;
              *((_QWORD *)&v155 + 1) = 1;
              *(_QWORD *)&v156 = 0;
              *(_QWORD *)&v160 = 1610612768;
              *(_QWORD *)&v159 = &v155;
              *((_QWORD *)&v159 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v137, &v159) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v173,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v168 = *((char **)&v155 + 1);
              v17 = (void *)v155;
              LOBYTE(v18) = v156;
              v64 = BYTE7(v156);
              DWORD2(v18) = *(unsigned __int16 *)((char *)&v156 + 5);
              v65 = *(unsigned int *)((char *)&v156 + 1);
              sub_140CAB2C0(&v137);
            }
            else
            {
              v137 = v56;
              v138 = v24;
              v139 = v57;
              v140[0] = v58;
              *(_DWORD *)&v140[1] = v163[0];
              *(_DWORD *)&v140[4] = *(_DWORD *)((char *)v163 + 3);
              *(_QWORD *)&v140[8] = v59;
              *(_OWORD *)&v140[16] = v106;
              *(_OWORD *)&v140[32] = v107;
              v141 = v108;
              *(_QWORD *)&v142 = v109;
              *(_QWORD *)&v155 = 0;
              *((_QWORD *)&v155 + 1) = 1;
              *(_QWORD *)&v156 = 0;
              *(_QWORD *)&v160 = 1610612768;
              *(_QWORD *)&v159 = &v155;
              *((_QWORD *)&v159 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1405060F0(&v137, &v159) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v173,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v168 = *((char **)&v155 + 1);
              v17 = (void *)v155;
              LOBYTE(v18) = v156;
              v64 = BYTE7(v156);
              DWORD2(v18) = *(unsigned __int16 *)((char *)&v156 + 5);
              v65 = *(unsigned int *)((char *)&v156 + 1);
              sub_140CAC460(&v137);
            }
            v25 = ((unsigned __int64)((unsigned int)(v64 << 16) | DWORD2(v18)) << 32) | v65;
            v26 = v169;
LABEL_69:
            sub_140206980(v26 + 6632);
            goto LABEL_70;
          }
          HIDWORD(v153) = *(_DWORD *)((char *)v163 + 3);
          *(_DWORD *)((char *)&v153 + 1) = v163[0];
          *(_QWORD *)&v152 = v24;
          *((_QWORD *)&v152 + 1) = v57;
          LOBYTE(v153) = v58;
          v66 = v153;
          v105 = *(_OWORD *)(v169 + 6864);
          *(_QWORD *)&v159 = 0;
          *((_QWORD *)&v159 + 1) = 1;
          *(_QWORD *)&v160 = 0;
          v139 = 1610612768;
          v137 = (__int64)&v159;
          v138 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_141536D40(&v105, &v137) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v173,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v168 = *((char **)&v159 + 1);
          Address = (PVOID)v159;
          v71 = v160;
          LODWORD(v159) = sub_14151CAC0(v68, v67, v69, v70, v104);
          DWORD1(v159) = v72;
          sub_14151CA70(&v137, &v159, 3577643008LL, 27111902);
          if ( (_BYTE)v137 )
            v73 = 0;
          else
            v73 = v138;
          v155 = v152;
          *(_QWORD *)&v156 = v153;
          DWORD2(v158) = v66;
          v82 = Address;
          *((_QWORD *)&v156 + 1) = Address;
          *(_QWORD *)&v157 = v168;
          *((_QWORD *)&v157 + 1) = v71;
          *(_QWORD *)&v158 = v73;
          v81 = *(volatile void **)(v169 + 6624);
          LOBYTE(v82) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v81, 1, 0) )
          {
            v174 = 1;
            sub_14176CDB0(v81);
          }
          Address = (PVOID)v81;
          v83 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v174 = 1;
            v103 = sub_14176DA50(v82);
            LOBYTE(v103) = v103 ^ 1;
            LODWORD(v166) = v103;
            v84 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_107;
          }
          else
          {
            LODWORD(v166) = 0;
            v84 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_107;
          }
          *(_QWORD *)&v159 = 0;
          *((_QWORD *)&v159 + 1) = 1;
          *(_QWORD *)&v160 = 0;
          v139 = 1610612768;
          v137 = (__int64)&v159;
          v138 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v137) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v173,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v168 = *((char **)&v159 + 1);
          v17 = (void *)v159;
          LODWORD(v18) = (unsigned __int8)v160;
          v86 = BYTE7(v160);
          DWORD2(v18) = *(unsigned __int16 *)((char *)&v160 + 5);
          v87 = *(unsigned int *)((char *)&v160 + 1);
          if ( !(_BYTE)v166 )
          {
            if ( 2 * *v83 )
            {
              v174 = 1;
              if ( !(unsigned __int8)sub_14176DA50(v85) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v88 = Address;
          v89 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v89 == 2 )
          {
            v174 = 1;
            WakeByAddressSingle(v88);
          }
          if ( v17 != (void *)-1LL )
          {
            sub_14046F290(&v155);
            v24 = (unsigned int)(v86 << 16);
            v90 = (unsigned int)v24 | DWORD2(v18);
            if ( (_QWORD)v155 )
              sub_140001660(*((_QWORD *)&v155 + 1), 184 * v155, 8);
            v91 = v90 << 32;
            v26 = v169;
            if ( *((_QWORD *)&v156 + 1) )
              sub_140001660(v157, *((_QWORD *)&v156 + 1), 1);
            v25 = v91 | v87;
            goto LABEL_69;
          }
          v84 = v168;
          LODWORD(v166) = v18;
LABEL_107:
          Address = v84;
          v171 = 1;
          v94 = sub_140539CD0(v84 + 8);
          if ( v94 )
          {
            v137 = 2;
            v138 = v94;
          }
          else
          {
            v95 = *((_QWORD *)Address + 78);
            v96 = *((_QWORD *)Address + 79);
            v171 = 1;
            sub_140B8D2F0(&v137, v95, v96, &v155);
            if ( v137 == -1 )
              goto LABEL_111;
          }
          v171 = 1;
          sub_140CAC460(&v137);
LABEL_111:
          v162 = v158;
          v161 = v157;
          v160 = v156;
          v159 = v155;
          v171 = 0;
          sub_1404CC8B0(&v137, &v159);
          *((_QWORD *)&v18 + 1) = v137;
          v24 = v138;
          v168 = (char *)v139;
          v98 = *(_OWORD *)v140;
          *(_QWORD *)&v18 = *(_QWORD *)v140;
          v131 = *(__m256i *)&v140[16];
          v132 = v141;
          v133 = v142;
          v134 = v143;
          v135 = v144;
          v136 = v145;
          if ( (v166 & 1) == 0 )
          {
            if ( 2 * *v83 )
            {
              v174 = 0;
              if ( !(unsigned __int8)sub_14176DA50(v97) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v99 = Address;
          v100 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v100 == 2 )
          {
            v174 = 0;
            WakeByAddressSingle(v99);
          }
          v60 = (_BYTE *)v169;
          sub_140206980(v169 + 6632);
          v151 = v136;
          v150 = v135;
          v149 = v134;
          v148 = v133;
          v147 = v132;
          v146 = v131;
          v60[7632] = 1;
          if ( *((_QWORD *)&v18 + 1) == -2 )
            goto LABEL_55;
          v123 = v151;
          v122 = v150;
          v121 = v149;
          v120 = v148;
          v119 = v147;
          v118 = v146;
          if ( *((_QWORD *)&v18 + 1) != -1 )
          {
            v117 = v123;
            v116 = v122;
            v115 = v121;
            v114 = v120;
            v113 = v119;
            v112 = v118;
            *(_QWORD *)&v110 = *((_QWORD *)&v18 + 1);
            *((_QWORD *)&v110 + 1) = v24;
            *(_QWORD *)v111 = v168;
            *(_OWORD *)&v111[8] = v98;
            sub_140508170(&v137, &v110);
            v24 = ((unsigned __int64)((HIBYTE(v138) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v138 + 5)) << 32)
                | *(unsigned int *)((char *)&v138 + 1);
            v27 = v138;
            v31 = v139;
            v18 = *(_OWORD *)v140;
            if ( v137 == -1 )
            {
              v47 = 0;
            }
            else
            {
              HIBYTE(v138) = (((unsigned __int64)((HIBYTE(v138) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v138 + 5)) << 32)
                            | *(unsigned int *)((char *)&v138 + 1)) >> 48;
              *(_WORD *)((char *)&v138 + 5) = WORD2(v24);
              *(_DWORD *)((char *)&v138 + 1) = v24;
              v146.m256i_i64[0] = 0;
              *(_OWORD *)&v146.m256i_u64[1] = 1u;
              v131.m256i_i64[2] = 1610612768;
              v131.m256i_i64[0] = (__int64)&v146;
              v131.m256i_i64[1] = (__int64)&off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v137, &v131) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v173,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v18 = *(_OWORD *)&v146.m256i_u64[1];
              v31 = v146.m256i_i64[0];
              sub_140CAB2C0(&v137);
              v47 = 1;
              v27 = 3;
            }
            v75 = v167;
            goto LABEL_79;
          }
          Address = (PVOID)v24;
          v25 = (unsigned __int64)v18 >> 8;
LABEL_71:
          v74 = v25 << 8;
          *((_QWORD *)&v18 + 1) = v74 | (unsigned __int8)v18;
          v75 = v167;
          if ( v74 < 0 )
          {
            v76 = 0;
            goto LABEL_73;
          }
          if ( *((_QWORD *)&v18 + 1) )
          {
            nullsub_1(v22, v13, v15, v16, v104);
            v76 = 1;
            v77 = sub_140001650(v74 | (unsigned __int8)v18, 1);
            if ( !v77 )
LABEL_73:
              sub_14176E54B(v76, v74 | (unsigned __int8)v18);
            *(_QWORD *)&v18 = v77;
            sub_14172B820(v77, v168, *((_QWORD *)&v18 + 1));
            v78 = Address;
            if ( !Address )
              goto LABEL_78;
          }
          else
          {
            *(_QWORD *)&v18 = 1;
            v78 = Address;
            if ( !Address )
              goto LABEL_78;
          }
          sub_140001660(v168, v78, 1);
LABEL_78:
          v47 = 1;
          v27 = 3;
          v31 = *((_QWORD *)&v18 + 1);
LABEL_79:
          *v164 = 1;
          v167 = v75;
          sub_140CAB140(v75);
          v48 = v169;
          if ( *(_QWORD *)(v169 + 4544) != -1 )
          {
            v168 = (char *)(v169 + 4552);
            v79 = *(__int64 **)(v169 + 4552);
            v164 = *(_BYTE **)(v169 + 4560);
            Address = nullptr;
            v165 = v79;
            while ( v164 != Address )
            {
              Address = (char *)Address + 1;
              v80 = v79 + 12;
              sub_140401FB0();
              v79 = v80;
            }
            v48 = v169;
            v46 = *(_QWORD *)(v169 + 4544);
            if ( v46 )
LABEL_84:
              sub_140001660(*(_QWORD *)v168, 96 * v46, 8);
          }
LABEL_104:
          *(_BYTE *)(v48 + 7648) = 1;
          sub_140C9A700(v167);
          v126 = v24;
          v128 = BYTE6(v24);
          v127 = WORD2(v24);
          v130 = v18;
          v125 = v27;
          v129 = v31;
          v124 = v47;
          v92 = v169;
          *(_BYTE *)(v169 + 7667) = 0;
          sub_14172B820(&v137, v92, 360);
          *(_BYTE *)(v92 + 7666) = 0;
          v93 = *(_QWORD *)(v92 + 384);
          *(_BYTE *)(v92 + 7665) = 0;
          *(_QWORD *)v111 = *(_QWORD *)(v92 + 376);
          v110 = *(_OWORD *)(v92 + 360);
          sub_140AFFC30((__int64)&v137, v93, (__int64)&v124, &v110, *(_DWORD *)(v92 + 7656), *(_DWORD *)(v92 + 7660));
          v61 = 1;
          result = 0;
          v60 = (_BYTE *)v169;
LABEL_105:
          v60[7664] = v61;
          return result;
        case 1:
LABEL_146:
          v165 = v8;
          v164 = v9;
          JUMPOUT(0x140D58B43LL);
        case 2:
LABEL_145:
          v165 = v8;
          v164 = v9;
          v167 = v5;
          sub_14176EC20(&off_1418887C0);
        case 3:
LABEL_20:
          v165 = v8;
          v164 = v9;
          v167 = v5;
          goto LABEL_51;
      }
  }
}
