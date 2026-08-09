// Pseudocode for load_skill_backups (EA: 0x140d556c0, size: 0x13a3)
// Module: commands/skills
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 load_skill_backups 处理器（commands::skills）。列出技能备份清单。
// Tauri 命令 load_skill_backups 处理器（commands::skills）。列出技能备份清单。
char __fastcall sub_140D556C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r15
  _BYTE *v9; // r14
  volatile void *v10; // rbx
  int v11; // eax
  char *v12; // r14
  char v13; // cl
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 **v18; // r13
  __int128 v19; // rdi
  int v20; // r12d
  unsigned int v21; // r15d
  __int64 v22; // rbx
  PVOID v23; // rcx
  char v24; // al
  unsigned __int64 v25; // rbx
  __int64 v26; // rsi
  unsigned __int64 v27; // r15
  char v28; // bl
  int v29; // r13d
  unsigned int v30; // r12d
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  PVOID v39; // rcx
  char v40; // al
  __int64 v41; // r14
  char *v42; // r15
  __int64 v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rax
  unsigned __int8 v48; // r12
  __int64 v49; // r13
  char v50; // al
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  const char *v57; // rdi
  __int64 v58; // r14
  char v59; // bl
  unsigned __int64 v60; // r12
  __int64 v61; // r15
  __int64 v62; // rsi
  int v63; // r14d
  __int64 v64; // rbx
  int v65; // esi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdi
  int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // r13
  __int64 v75; // rbx
  __int64 v76; // rax
  PVOID v77; // rdx
  __int64 *v78; // rcx
  __int64 *v79; // r13
  void *v80; // rbx
  __int128 v81; // xmm6
  char v82; // cl
  char result; // al
  __int64 v84; // rdi
  __int64 v85; // rdx
  _QWORD *v86; // rdi
  __int64 v87; // [rsp+20h] [rbp-60h]
  __int128 v88; // [rsp+30h] [rbp-50h] BYREF
  __int128 v89; // [rsp+40h] [rbp-40h]
  __int128 v90; // [rsp+50h] [rbp-30h]
  __int128 v91; // [rsp+60h] [rbp-20h]
  __int64 v92; // [rsp+70h] [rbp-10h]
  __int128 v93; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v94[24]; // [rsp+90h] [rbp+10h]
  __m256i v95; // [rsp+A8h] [rbp+28h]
  __int128 v96; // [rsp+C8h] [rbp+48h]
  __int128 v97; // [rsp+D8h] [rbp+58h]
  __int128 v98; // [rsp+E8h] [rbp+68h]
  __int128 v99; // [rsp+F8h] [rbp+78h]
  __int64 v100; // [rsp+108h] [rbp+88h]
  __m256i v101; // [rsp+110h] [rbp+90h]
  __int128 v102; // [rsp+130h] [rbp+B0h]
  __int128 v103; // [rsp+140h] [rbp+C0h]
  __int128 v104; // [rsp+150h] [rbp+D0h]
  __int128 v105; // [rsp+160h] [rbp+E0h]
  __int64 v106; // [rsp+170h] [rbp+F0h]
  __int64 v107; // [rsp+178h] [rbp+F8h] BYREF
  char v108; // [rsp+180h] [rbp+100h]
  int v109; // [rsp+181h] [rbp+101h]
  __int16 v110; // [rsp+185h] [rbp+105h]
  char v111; // [rsp+187h] [rbp+107h]
  __int64 v112; // [rsp+188h] [rbp+108h]
  __int128 v113; // [rsp+190h] [rbp+110h]
  __m256i v114; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v115; // [rsp+1C0h] [rbp+140h]
  __int128 v116; // [rsp+1D0h] [rbp+150h]
  __int128 v117; // [rsp+1E0h] [rbp+160h]
  __int128 v118; // [rsp+1F0h] [rbp+170h]
  __int64 v119; // [rsp+200h] [rbp+180h]
  const char *v120; // [rsp+208h] [rbp+188h] BYREF
  __int64 v121; // [rsp+210h] [rbp+190h]
  __int64 v122; // [rsp+218h] [rbp+198h] BYREF
  _BYTE v123[48]; // [rsp+220h] [rbp+1A0h]
  __int128 v124; // [rsp+250h] [rbp+1D0h]
  __int128 v125; // [rsp+260h] [rbp+1E0h]
  __int128 v126; // [rsp+270h] [rbp+1F0h]
  __int128 v127; // [rsp+280h] [rbp+200h]
  __int64 v128; // [rsp+290h] [rbp+210h]
  __m256i v129; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v130; // [rsp+390h] [rbp+310h]
  __int128 v131; // [rsp+3A0h] [rbp+320h]
  __int128 v132; // [rsp+3B0h] [rbp+330h]
  __int128 v133; // [rsp+3C0h] [rbp+340h]
  __int64 v134; // [rsp+3D0h] [rbp+350h]
  __int128 v135; // [rsp+3D8h] [rbp+358h]
  __int64 v136; // [rsp+3E8h] [rbp+368h]
  __int64 v137; // [rsp+3F0h] [rbp+370h]
  __int64 *v138; // [rsp+3F8h] [rbp+378h] BYREF
  __int64 v139; // [rsp+400h] [rbp+380h]
  __int64 v140; // [rsp+408h] [rbp+388h]
  __int128 v141; // [rsp+410h] [rbp+390h] BYREF
  __int128 v142; // [rsp+420h] [rbp+3A0h]
  __int128 v143; // [rsp+430h] [rbp+3B0h]
  __int64 v144; // [rsp+440h] [rbp+3C0h]
  int v145; // [rsp+448h] [rbp+3C8h]
  __int64 v146; // [rsp+458h] [rbp+3D8h]
  _DWORD v147[2]; // [rsp+460h] [rbp+3E0h]
  _QWORD *v148; // [rsp+468h] [rbp+3E8h]
  _BYTE *v149; // [rsp+470h] [rbp+3F0h]
  __int64 **v150; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v151; // [rsp+480h] [rbp+400h]
  __int64 v152; // [rsp+488h] [rbp+408h]
  __int64 v153; // [rsp+490h] [rbp+410h]
  __int64 *v154; // [rsp+498h] [rbp+418h]
  __int64 v155; // [rsp+4A0h] [rbp+420h]
  PVOID Address; // [rsp+4A8h] [rbp+428h]
  char v157; // [rsp+4B5h] [rbp+435h]
  char v158; // [rsp+4B6h] [rbp+436h]
  char v159; // [rsp+4B7h] [rbp+437h] BYREF
  __int64 v160; // [rsp+4B8h] [rbp+438h]

  v160 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 7664);
  v155 = a1;
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
          goto LABEL_112;
        case 2:
          goto LABEL_111;
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
          v120 = aLoadSkillBacku;
          v121 = 18;
          v122 = (__int64)aRepo_0;
          *(_QWORD *)v123 = 4;
          v153 = v5;
          *(_QWORD *)&v123[8] = v5;
          *(_OWORD *)&v123[16] = (unsigned __int64)(v3 + 4544);
          v6 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 4536) + 16LL));
          if ( v6 )
            goto LABEL_5;
          sub_14172C620((__int64)&v93, (__int64)&v120, (__int64)&v122);
          v28 = v93;
          if ( (_BYTE)v93 == 0xFF )
          {
            v6 = *((_QWORD *)&v93 + 1);
LABEL_5:
            v3 = v155;
            v7 = v155 + 4568;
            *(_QWORD *)(v155 + 4568) = v6;
            *(_BYTE *)(v3 + 5584) = 0;
            v8 = (_QWORD *)(v3 + 5592);
            sub_14172B820(v3 + 5592, v7, 1024);
            v9 = (_BYTE *)(v3 + 7640);
            *(_BYTE *)(v3 + 7640) = 0;
            v5 = v153;
LABEL_7:
            sub_14172B820(v3 + 6616, v8, 1024);
            switch ( *(_BYTE *)(v3 + 7632) )
            {
              case 0:
                goto LABEL_9;
              case 1:
                goto LABEL_114;
              case 2:
                goto LABEL_113;
              case 3:
                goto LABEL_21;
            }
          }
          v154 = (__int64 *)(v3 + 4544);
          v29 = BYTE7(v93);
          v30 = *(unsigned __int16 *)((char *)&v93 + 5);
          v31 = *(unsigned int *)((char *)&v93 + 1);
          v32 = *((_QWORD *)&v93 + 1);
          v19 = *(_OWORD *)v94;
          sub_140CAB140(v153);
          v27 = ((unsigned __int64)((v29 << 16) | v30) << 32) | v31;
          if ( *v154 == -1 )
          {
            v48 = 1;
            v49 = v155;
            goto LABEL_94;
          }
          v148 = (_QWORD *)(v155 + 4552);
          v33 = *(_QWORD *)(v155 + 4552);
          v149 = *(_BYTE **)(v155 + 4560);
          Address = nullptr;
          v146 = v33;
          while ( v149 != Address )
          {
            Address = (char *)Address + 1;
            v34 = v33 + 96;
            sub_140401FB0();
            v33 = v34;
          }
          v47 = *v154;
          v48 = 1;
          v49 = v155;
          if ( !*v154 )
            goto LABEL_94;
          goto LABEL_83;
        case 1:
LABEL_112:
          v153 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_111:
          v153 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v9 = (_BYTE *)(v3 + 7640);
  v8 = (_QWORD *)(v3 + 5592);
  switch ( *(_BYTE *)(v3 + 7640) )
  {
    case 0:
      goto LABEL_7;
    case 1:
      v153 = v5;
      v137 = v3 + 5592;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v153 = v5;
      v137 = v3 + 5592;
      sub_14176EC20(&off_1418851A0);
    case 3:
      switch ( *(_BYTE *)(v3 + 7632) )
      {
        case 0:
LABEL_9:
          v148 = v8;
          v149 = v9;
          v153 = v5;
          v10 = *(volatile void **)(v3 + 6616);
          *(_QWORD *)(v3 + 6624) = v10;
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v10, 1, 0) )
            sub_14176CDB0(v10);
          Address = (PVOID)v10;
          if ( 2 * *off_141FBA168 )
          {
            v11 = sub_14176DA50(a1);
            LOBYTE(v11) = v11 ^ 1;
          }
          else
          {
            v11 = 0;
          }
          v12 = (char *)Address;
          v13 = *((_BYTE *)Address + 1);
          LODWORD(v154) = v11;
          if ( !v13 )
            goto LABEL_28;
          *(_QWORD *)&v141 = 0;
          *((_QWORD *)&v141 + 1) = 1;
          *(_QWORD *)&v142 = 0;
          v122 = 1610612768;
          v120 = (const char *)&v141;
          v121 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v120) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v159,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v12 = *((char **)&v141 + 1);
          v18 = (__int64 **)v141;
          LODWORD(v19) = (unsigned __int8)v142;
          v20 = BYTE7(v142);
          v21 = *(unsigned __int16 *)((char *)&v142 + 5);
          v22 = *(unsigned int *)((char *)&v142 + 1);
          if ( !(_BYTE)v154 && 2 * *off_141FBA168 && !(unsigned __int8)sub_14176DA50(v15) )
            *((_BYTE *)Address + 1) = 1;
          v23 = Address;
          v24 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v24 == 2 )
            WakeByAddressSingle(v23);
          if ( v18 != (__int64 **)-1LL )
          {
            v25 = ((unsigned __int64)((v20 << 16) | v21) << 32) | v22;
            v26 = v155;
            v27 = (unsigned __int64)v12;
LABEL_69:
            Address = v18;
            v134 = v119;
            v133 = v118;
            v132 = v117;
            v131 = v116;
            v130 = v115;
            v129 = v114;
            *(_BYTE *)(v26 + 7632) = 1;
            v101 = v129;
            v102 = v130;
            v103 = v131;
            v104 = v132;
            v105 = v133;
            v106 = v134;
            goto LABEL_70;
          }
          LODWORD(v154) = v19;
LABEL_28:
          Address = v12;
          sub_140A80280(v155 + 6632, v12 + 8);
          if ( ((unsigned __int8)v154 & 1) == 0 && 2 * *off_141FBA168 && !(unsigned __int8)sub_14176DA50(v36) )
            *((_BYTE *)Address + 1) = 1;
          v39 = Address;
          v40 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v40 == 2 )
            WakeByAddressSingle(v39);
          v41 = v155;
          v42 = *(char **)(v155 + 7128);
          if ( (__int64)v42 < 0 )
          {
            v43 = 0;
            goto LABEL_34;
          }
          if ( v42 )
          {
            v44 = *(_QWORD *)(v155 + 7120);
            nullsub_1(v39, v35, v37, v38, v87);
            v43 = 1;
            v45 = sub_140001650(v42, 1);
            if ( !v45 )
LABEL_34:
              sub_14176E54B(v43, v42);
            v46 = v45;
            sub_14172B820(v45, v44, v42);
          }
          else
          {
            v46 = 1;
          }
          v50 = *(_BYTE *)(v41 + 7136);
          v120 = v42;
          v154 = (__int64 *)v46;
          v121 = v46;
          Address = v42;
          v122 = (__int64)v42;
          v123[0] = v50;
          v51 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v158 = 0;
            v86 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v51 = v86;
          }
          if ( *((_DWORD *)v51 + 4) == 2 )
          {
            v52 = 704;
            if ( *(_BYTE *)v51 )
              v52 = 472;
            v53 = v51[1] + v52;
            v158 = 1;
            v54 = sub_140859860(v53, v51, &v120, &off_1417EBF48);
          }
          else
          {
            v55 = 704;
            if ( *((_BYTE *)v51 + 64) )
              v55 = 472;
            v56 = v51[9] + v55;
            v158 = 1;
            v54 = sub_140859860(v56, v51 + 8, &v120, &off_1417EBF30);
          }
          v3 = v155;
          *(_QWORD *)(v155 + 7624) = v54;
LABEL_52:
          Address = (PVOID)(v3 + 7624);
          sub_140501010(&v120, v3 + 7624, a2);
          v57 = v120;
          if ( v120 == (const char *)-3LL )
          {
            v14 = (_BYTE *)v155;
            *(_BYTE *)(v155 + 7632) = 3;
            goto LABEL_88;
          }
          if ( (_DWORD)v120 == -2 )
          {
            v58 = v121;
            v59 = v122;
            LODWORD(v150) = *(_DWORD *)((char *)&v122 + 1);
            *(_DWORD *)((char *)&v150 + 3) = HIDWORD(v122);
            v60 = 0x800000000000000CuLL;
            v61 = *(_QWORD *)v123;
          }
          else
          {
            v60 = v121;
            v58 = v122;
            v59 = v123[0];
            LODWORD(v150) = *(_DWORD *)&v123[1];
            *(_DWORD *)((char *)&v150 + 3) = *(_DWORD *)&v123[4];
            v61 = *(_QWORD *)&v123[8];
            v141 = *(_OWORD *)&v123[16];
            v142 = *(_OWORD *)&v123[32];
            v143 = v124;
            v144 = v125;
          }
          v147[0] = (_DWORD)v150;
          *(_DWORD *)((char *)v147 + 3) = *(_DWORD *)((char *)&v150 + 3);
          v89 = v141;
          v90 = v142;
          v91 = v143;
          v92 = v144;
          v62 = *(_QWORD *)Address;
          if ( (unsigned __int8)sub_141398090(*(_QWORD *)Address) )
            sub_14139A2E0(v62);
          if ( (_DWORD)v57 != -1 )
          {
            if ( (_DWORD)v57 == -2 )
            {
              v120 = (const char *)v60;
              v121 = v58;
              LOBYTE(v122) = v59;
              *(_DWORD *)((char *)&v122 + 1) = v147[0];
              HIDWORD(v122) = *(_DWORD *)((char *)v147 + 3);
              *(_QWORD *)v123 = v61;
              *(_OWORD *)&v123[8] = v89;
              v150 = nullptr;
              v151 = 1;
              v152 = 0;
              *(_QWORD *)&v142 = 1610612768;
              *(_QWORD *)&v141 = &v150;
              *((_QWORD *)&v141 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v120, &v141) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v159,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v18 = v150;
              v27 = v151;
              LOBYTE(v19) = v152;
              v63 = HIBYTE(v152);
              DWORD2(v19) = *(unsigned __int16 *)((char *)&v152 + 5);
              v64 = *(unsigned int *)((char *)&v152 + 1);
              sub_140CAB2C0(&v120);
            }
            else
            {
              v120 = v57;
              v121 = v60;
              v122 = v58;
              v123[0] = v59;
              *(_DWORD *)&v123[1] = v147[0];
              *(_DWORD *)&v123[4] = *(_DWORD *)((char *)v147 + 3);
              *(_QWORD *)&v123[8] = v61;
              *(_OWORD *)&v123[16] = v89;
              *(_OWORD *)&v123[32] = v90;
              v124 = v91;
              *(_QWORD *)&v125 = v92;
              v150 = nullptr;
              v151 = 1;
              v152 = 0;
              *(_QWORD *)&v142 = 1610612768;
              *(_QWORD *)&v141 = &v150;
              *((_QWORD *)&v141 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1405060F0(&v120, &v141) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v159,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v18 = v150;
              v27 = v151;
              LOBYTE(v19) = v152;
              v63 = HIBYTE(v152);
              DWORD2(v19) = *(unsigned __int16 *)((char *)&v152 + 5);
              v64 = *(unsigned int *)((char *)&v152 + 1);
              sub_140CAC460(&v120);
            }
            v25 = ((unsigned __int64)((unsigned int)(v63 << 16) | DWORD2(v19)) << 32) | v64;
            v26 = v155;
            sub_140206980(v155 + 6632);
            goto LABEL_69;
          }
          HIDWORD(v136) = *(_DWORD *)((char *)v147 + 3);
          *(_DWORD *)((char *)&v136 + 1) = v147[0];
          *(_QWORD *)&v135 = v60;
          *((_QWORD *)&v135 + 1) = v58;
          LOBYTE(v136) = v59;
          v65 = v136;
          Address = (PVOID)(v155 + 6632);
          v88 = *(_OWORD *)(v155 + 7120);
          v138 = nullptr;
          v139 = 1;
          v140 = 0;
          v152 = 1610612768;
          v150 = &v138;
          v151 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_141536D40(&v88, &v150) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v159,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v154 = v138;
          v146 = v139;
          v70 = v140;
          LODWORD(v138) = sub_14151CAC0(v67, v66, v68, v69, v87);
          HIDWORD(v138) = v71;
          sub_14151CA70(&v150, &v138, 3577643008LL, 27111902);
          if ( (_BYTE)v150 )
            v72 = 0;
          else
            v72 = v151;
          v141 = v135;
          *(_QWORD *)&v142 = v136;
          v145 = v65;
          *((_QWORD *)&v142 + 1) = v154;
          *(_QWORD *)&v143 = v146;
          *((_QWORD *)&v143 + 1) = v70;
          v144 = v72;
          v157 = 0;
          sub_1404CED40(&v120, &v141);
          *((_QWORD *)&v19 + 1) = v120;
          v80 = (void *)v121;
          v27 = v122;
          v81 = *(_OWORD *)v123;
          *(_QWORD *)&v19 = *(_QWORD *)v123;
          v114 = *(__m256i *)&v123[16];
          v115 = v124;
          v116 = v125;
          v117 = v126;
          v118 = v127;
          v119 = v128;
          sub_140206980(Address);
          v129 = v114;
          v130 = v115;
          v131 = v116;
          v132 = v117;
          v133 = v118;
          v134 = v119;
          v14 = (_BYTE *)v155;
          *(_BYTE *)(v155 + 7632) = 1;
          if ( *((_QWORD *)&v19 + 1) == -2 )
          {
LABEL_88:
            v14[7640] = 3;
            v14[7648] = 3;
            v82 = 3;
            result = 1;
            goto LABEL_95;
          }
          v106 = v134;
          v105 = v133;
          v104 = v132;
          v103 = v131;
          v102 = v130;
          v101 = v129;
          if ( *((_QWORD *)&v19 + 1) != -1 )
          {
            v100 = v106;
            v99 = v105;
            v98 = v104;
            v97 = v103;
            v96 = v102;
            v95 = v101;
            *(_QWORD *)&v93 = *((_QWORD *)&v19 + 1);
            *((_QWORD *)&v93 + 1) = v80;
            *(_QWORD *)v94 = v27;
            *(_OWORD *)&v94[8] = v81;
            sub_14050BEB0(&v120, &v93);
            v27 = ((unsigned __int64)((HIBYTE(v121) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v121 + 5)) << 32)
                | *(unsigned int *)((char *)&v121 + 1);
            v28 = v121;
            v32 = v122;
            v19 = *(_OWORD *)v123;
            if ( v120 == (const char *)-1LL )
            {
              v48 = 0;
            }
            else
            {
              HIBYTE(v121) = (((unsigned __int64)((HIBYTE(v121) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v121 + 5)) << 32)
                            | *(unsigned int *)((char *)&v121 + 1)) >> 48;
              *(_WORD *)((char *)&v121 + 5) = WORD2(v27);
              *(_DWORD *)((char *)&v121 + 1) = v27;
              v129.m256i_i64[0] = 0;
              *(_OWORD *)&v129.m256i_u64[1] = 1u;
              v114.m256i_i64[2] = 1610612768;
              v114.m256i_i64[0] = (__int64)&v129;
              v114.m256i_i64[1] = (__int64)&off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v120, &v114) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v159,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v19 = *(_OWORD *)&v129.m256i_u64[1];
              v32 = v129.m256i_i64[0];
              sub_140CAB2C0(&v120);
              v48 = 1;
              v28 = 3;
            }
            v74 = v153;
            goto LABEL_78;
          }
          Address = v80;
          v25 = (unsigned __int64)v19 >> 8;
LABEL_70:
          v73 = v25 << 8;
          *((_QWORD *)&v19 + 1) = v73 | (unsigned __int8)v19;
          v74 = v153;
          if ( v73 < 0 )
          {
            v75 = 0;
            goto LABEL_72;
          }
          if ( *((_QWORD *)&v19 + 1) )
          {
            nullsub_1(v23, v14, v16, v17, v87);
            v75 = 1;
            v76 = sub_140001650(*((_QWORD *)&v19 + 1), 1);
            if ( !v76 )
            {
LABEL_72:
              v154 = (__int64 *)v27;
              sub_14176E54B(v75, *((_QWORD *)&v19 + 1));
            }
            *(_QWORD *)&v19 = v76;
            sub_14172B820(v76, v27, *((_QWORD *)&v19 + 1));
            v77 = Address;
            if ( !Address )
              goto LABEL_77;
          }
          else
          {
            *(_QWORD *)&v19 = 1;
            v77 = Address;
            if ( !Address )
              goto LABEL_77;
          }
          sub_140001660(v27, v77, 1);
LABEL_77:
          v48 = 1;
          v28 = 3;
          v32 = *((_QWORD *)&v19 + 1);
LABEL_78:
          *v149 = 1;
          v153 = v74;
          sub_140CAB140(v74);
          v49 = v155;
          if ( *(_QWORD *)(v155 + 4544) != -1 )
          {
            v148 = (_QWORD *)(v155 + 4552);
            v78 = *(__int64 **)(v155 + 4552);
            v149 = *(_BYTE **)(v155 + 4560);
            Address = nullptr;
            v154 = v78;
            while ( v149 != Address )
            {
              Address = (char *)Address + 1;
              v79 = v78 + 12;
              sub_140401FB0();
              v78 = v79;
            }
            v49 = v155;
            v47 = *(_QWORD *)(v155 + 4544);
            if ( v47 )
LABEL_83:
              sub_140001660(*v148, 96 * v47, 8);
          }
LABEL_94:
          *(_BYTE *)(v49 + 7648) = 1;
          sub_140C9A700(v153);
          v109 = v27;
          v111 = BYTE6(v27);
          v110 = WORD2(v27);
          v113 = v19;
          v108 = v28;
          v112 = v32;
          v107 = v48;
          v84 = v155;
          *(_BYTE *)(v155 + 7667) = 0;
          sub_14172B820(&v120, v84, 360);
          *(_BYTE *)(v84 + 7666) = 0;
          v85 = *(_QWORD *)(v84 + 384);
          *(_BYTE *)(v84 + 7665) = 0;
          *(_QWORD *)v94 = *(_QWORD *)(v84 + 376);
          v93 = *(_OWORD *)(v84 + 360);
          sub_140AFFC30((__int64)&v120, v85, (__int64)&v107, &v93, *(_DWORD *)(v84 + 7656), *(_DWORD *)(v84 + 7660));
          v82 = 1;
          result = 0;
          v14 = (_BYTE *)v155;
LABEL_95:
          v14[7664] = v82;
          return result;
        case 1:
LABEL_114:
          v148 = v8;
          v149 = v9;
          JUMPOUT(0x140D56A13LL);
        case 2:
LABEL_113:
          v148 = v8;
          v149 = v9;
          v153 = v5;
          sub_14176EC20(&off_141888778);
        case 3:
LABEL_21:
          v148 = v8;
          v149 = v9;
          v153 = v5;
          goto LABEL_52;
      }
  }
}
