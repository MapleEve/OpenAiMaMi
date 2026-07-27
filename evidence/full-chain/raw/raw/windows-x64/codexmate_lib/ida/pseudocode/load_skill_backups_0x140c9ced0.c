// module: codexmate_lib
// addr: 0x140c9ced0
// name: load_skill_backups
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_skill_backups | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_skill_backups(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r15
  _BYTE *v11; // r14
  volatile void *v12; // rbx
  int v13; // eax
  char *v14; // r14
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rcx
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
  PVOID v37; // rcx
  char v38; // al
  __int64 v39; // r14
  char *v40; // r15
  __int64 v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  unsigned __int8 v46; // r12
  __int64 v47; // r13
  char v48; // al
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  const char *v55; // rdi
  __int64 v56; // r14
  char v57; // bl
  unsigned __int64 v58; // r12
  __int64 v59; // r15
  _BYTE *v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // r8
  int v63; // r14d
  __int64 v64; // rbx
  int v65; // esi
  __int64 v66; // rdi
  int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // r13
  __int64 v71; // rbx
  __int64 v72; // rax
  PVOID v73; // rdx
  __int64 *v74; // rcx
  __int64 *v75; // r13
  void *v76; // rbx
  __int128 v77; // xmm6
  char v78; // cl
  char result; // al
  __int64 v80; // r8
  __int64 v81; // rdi
  __int64 v82; // rdx
  _QWORD *v83; // rdi
  __int128 v84; // [rsp+30h] [rbp-50h] BYREF
  __int128 v85; // [rsp+40h] [rbp-40h]
  __int128 v86; // [rsp+50h] [rbp-30h]
  __int128 v87; // [rsp+60h] [rbp-20h]
  __int64 v88; // [rsp+70h] [rbp-10h]
  __int128 v89; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v90[24]; // [rsp+90h] [rbp+10h]
  __m256i v91; // [rsp+A8h] [rbp+28h]
  __int128 v92; // [rsp+C8h] [rbp+48h]
  __int128 v93; // [rsp+D8h] [rbp+58h]
  __int128 v94; // [rsp+E8h] [rbp+68h]
  __int128 v95; // [rsp+F8h] [rbp+78h]
  __int64 v96; // [rsp+108h] [rbp+88h]
  __m256i v97; // [rsp+110h] [rbp+90h]
  __int128 v98; // [rsp+130h] [rbp+B0h]
  __int128 v99; // [rsp+140h] [rbp+C0h]
  __int128 v100; // [rsp+150h] [rbp+D0h]
  __int128 v101; // [rsp+160h] [rbp+E0h]
  __int64 v102; // [rsp+170h] [rbp+F0h]
  __int64 v103; // [rsp+178h] [rbp+F8h] BYREF
  char v104; // [rsp+180h] [rbp+100h]
  int v105; // [rsp+181h] [rbp+101h]
  __int16 v106; // [rsp+185h] [rbp+105h]
  char v107; // [rsp+187h] [rbp+107h]
  __int64 v108; // [rsp+188h] [rbp+108h]
  __int128 v109; // [rsp+190h] [rbp+110h]
  __m256i v110; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v111; // [rsp+1C0h] [rbp+140h]
  __int128 v112; // [rsp+1D0h] [rbp+150h]
  __int128 v113; // [rsp+1E0h] [rbp+160h]
  __int128 v114; // [rsp+1F0h] [rbp+170h]
  __int64 v115; // [rsp+200h] [rbp+180h]
  const char *v116; // [rsp+208h] [rbp+188h] BYREF
  __int64 v117; // [rsp+210h] [rbp+190h]
  __int64 v118; // [rsp+218h] [rbp+198h] BYREF
  _BYTE v119[48]; // [rsp+220h] [rbp+1A0h]
  __int128 v120; // [rsp+250h] [rbp+1D0h]
  __int128 v121; // [rsp+260h] [rbp+1E0h]
  __int128 v122; // [rsp+270h] [rbp+1F0h]
  __int128 v123; // [rsp+280h] [rbp+200h]
  __int64 v124; // [rsp+290h] [rbp+210h]
  __m256i v125; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v126; // [rsp+390h] [rbp+310h]
  __int128 v127; // [rsp+3A0h] [rbp+320h]
  __int128 v128; // [rsp+3B0h] [rbp+330h]
  __int128 v129; // [rsp+3C0h] [rbp+340h]
  __int64 v130; // [rsp+3D0h] [rbp+350h]
  __int128 v131; // [rsp+3D8h] [rbp+358h]
  __int64 v132; // [rsp+3E8h] [rbp+368h]
  __int64 v133; // [rsp+3F0h] [rbp+370h]
  __int64 *v134; // [rsp+3F8h] [rbp+378h] BYREF
  __int64 v135; // [rsp+400h] [rbp+380h]
  __int64 v136; // [rsp+408h] [rbp+388h]
  __int128 v137; // [rsp+410h] [rbp+390h] BYREF
  __int128 v138; // [rsp+420h] [rbp+3A0h]
  __int128 v139; // [rsp+430h] [rbp+3B0h]
  __int64 v140; // [rsp+440h] [rbp+3C0h]
  int v141; // [rsp+448h] [rbp+3C8h]
  __int64 v142; // [rsp+458h] [rbp+3D8h]
  _DWORD v143[2]; // [rsp+460h] [rbp+3E0h]
  _QWORD *v144; // [rsp+468h] [rbp+3E8h]
  _BYTE *v145; // [rsp+470h] [rbp+3F0h]
  __int64 **v146; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v147; // [rsp+480h] [rbp+400h]
  __int64 v148; // [rsp+488h] [rbp+408h]
  __int64 v149; // [rsp+490h] [rbp+410h]
  __int64 *v150; // [rsp+498h] [rbp+418h]
  __int64 v151; // [rsp+4A0h] [rbp+420h]
  PVOID Address; // [rsp+4A8h] [rbp+428h]
  char v153; // [rsp+4B5h] [rbp+435h]
  char v154; // [rsp+4B6h] [rbp+436h]
  char v155; // [rsp+4B7h] [rbp+437h] BYREF
  __int64 v156; // [rsp+4B8h] [rbp+438h]

  v156 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 7664);
  v151 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 7665) = 257;
      *(_BYTE *)(a1 + 7667) = 1;
      v7 = a1 + 4024;
      sub_141684120(a1 + 4024, a1 + 392, 3632);
      switch ( *(_BYTE *)(v5 + 7648) )
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
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 4024;
      switch ( *(_BYTE *)(a1 + 7648) )
      {
        case 0:
LABEL_4:
          v116 = aLoadSkillBacku;
          v117 = 18;
          v118 = (__int64)aRepo_0;
          *(_QWORD *)v119 = 4;
          v149 = v7;
          *(_QWORD *)&v119[8] = v7;
          *(_OWORD *)&v119[16] = (unsigned __int64)(v5 + 4544);
          v8 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4536) + 16LL));
          if ( v8 )
            goto LABEL_5;
          sub_1416850A0(&v89, &v116, &v118);
          v28 = v89;
          if ( (_BYTE)v89 == 0xFF )
          {
            v8 = *((_QWORD *)&v89 + 1);
LABEL_5:
            v5 = v151;
            v9 = v151 + 4568;
            *(_QWORD *)(v151 + 4568) = v8;
            *(_BYTE *)(v5 + 5584) = 0;
            v10 = (_QWORD *)(v5 + 5592);
            sub_141684120(v5 + 5592, v9, 1024);
            v11 = (_BYTE *)(v5 + 7640);
            *(_BYTE *)(v5 + 7640) = 0;
            v7 = v149;
LABEL_7:
            sub_141684120(v5 + 6616, v10, 1024);
            switch ( *(_BYTE *)(v5 + 7632) )
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
          v150 = (__int64 *)(v5 + 4544);
          v29 = BYTE7(v89);
          v30 = *(unsigned __int16 *)((char *)&v89 + 5);
          v31 = *(unsigned int *)((char *)&v89 + 1);
          v32 = *((_QWORD *)&v89 + 1);
          v19 = *(_OWORD *)v90;
          sub_140BF0DE0(v149);
          v27 = ((unsigned __int64)((v29 << 16) | v30) << 32) | v31;
          if ( *v150 == -1 )
          {
            v46 = 1;
            v47 = v151;
            goto LABEL_94;
          }
          v144 = (_QWORD *)(v151 + 4552);
          v33 = *(_QWORD *)(v151 + 4552);
          v145 = *(_BYTE **)(v151 + 4560);
          Address = nullptr;
          v142 = v33;
          while ( v145 != Address )
          {
            Address = (char *)Address + 1;
            v34 = v33 + 96;
            sub_1402C7520();
            v33 = v34;
          }
          v45 = *v150;
          v46 = 1;
          v47 = v151;
          if ( !*v150 )
            goto LABEL_94;
          goto LABEL_83;
        case 1:
LABEL_112:
          v149 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_111:
          v149 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v11 = (_BYTE *)(v5 + 7640);
  v10 = (_QWORD *)(v5 + 5592);
  switch ( *(_BYTE *)(v5 + 7640) )
  {
    case 0:
      goto LABEL_7;
    case 1:
      v149 = v7;
      v133 = v5 + 5592;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2:
      v149 = v7;
      v133 = v5 + 5592;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3:
      switch ( *(_BYTE *)(v5 + 7632) )
      {
        case 0:
LABEL_9:
          v144 = v10;
          v145 = v11;
          v149 = v7;
          v12 = *(volatile void **)(v5 + 6616);
          *(_QWORD *)(v5 + 6624) = v12;
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v12, 1, 0) )
            sub_1416C15B0(v12);
          Address = (PVOID)v12;
          if ( 2 * *off_141EC90B8 )
          {
            v13 = sub_1416C2250(a1, a2);
            LOBYTE(v13) = v13 ^ 1;
          }
          else
          {
            v13 = 0;
          }
          v14 = (char *)Address;
          v15 = *((_BYTE *)Address + 1);
          LODWORD(v150) = v13;
          if ( !v15 )
            goto LABEL_28;
          *(_QWORD *)&v137 = 0;
          *((_QWORD *)&v137 + 1) = 1;
          *(_QWORD *)&v138 = 0;
          v118 = 1610612768;
          v116 = (const char *)&v137;
          v117 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v116) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v155,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v14 = *((char **)&v137 + 1);
          v18 = (__int64 **)v137;
          LODWORD(v19) = (unsigned __int8)v138;
          v20 = BYTE7(v138);
          v21 = *(unsigned __int16 *)((char *)&v138 + 5);
          v22 = *(unsigned int *)((char *)&v138 + 1);
          if ( !(_BYTE)v150 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v17, v16) )
            *((_BYTE *)Address + 1) = 1;
          v23 = Address;
          v24 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v24 == 2 )
            WakeByAddressSingle(v23);
          if ( v18 != (__int64 **)-1LL )
          {
            v25 = ((unsigned __int64)((v20 << 16) | v21) << 32) | v22;
            v26 = v151;
            v27 = (unsigned __int64)v14;
LABEL_69:
            Address = v18;
            v130 = v115;
            v129 = v114;
            v128 = v113;
            v127 = v112;
            v126 = v111;
            v125 = v110;
            *(_BYTE *)(v26 + 7632) = 1;
            v97 = v125;
            v98 = v126;
            v99 = v127;
            v100 = v128;
            v101 = v129;
            v102 = v130;
            goto LABEL_70;
          }
          LODWORD(v150) = v19;
LABEL_28:
          Address = v14;
          sub_1407BC950(v151 + 6632, v14 + 8);
          if ( ((unsigned __int8)v150 & 1) == 0 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v36, v35) )
            *((_BYTE *)Address + 1) = 1;
          v37 = Address;
          v38 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v38 == 2 )
            WakeByAddressSingle(v37);
          v39 = v151;
          v40 = *(char **)(v151 + 7128);
          if ( (__int64)v40 < 0 )
          {
            v41 = 0;
            goto LABEL_34;
          }
          if ( v40 )
          {
            v42 = *(_QWORD *)(v151 + 7120);
            nullsub_1(v37);
            v41 = 1;
            v43 = sub_140001650(v40, 1);
            if ( !v43 )
LABEL_34:
              sub_1416C2D4B(v41, v40);
            v44 = v43;
            sub_141684120(v43, v42, v40);
          }
          else
          {
            v44 = 1;
          }
          v48 = *(_BYTE *)(v39 + 7136);
          v116 = v40;
          v150 = (__int64 *)v44;
          v117 = v44;
          Address = v40;
          v118 = (__int64)v40;
          v119[0] = v48;
          v49 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v154 = 0;
            v83 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v49 = v83;
          }
          if ( *((_DWORD *)v49 + 4) == 2 )
          {
            v50 = 704;
            if ( *(_BYTE *)v49 )
              v50 = 472;
            v51 = v49[1] + v50;
            v154 = 1;
            v52 = sub_1408995E0(v51, v49, &v116, &off_1417642A8);
          }
          else
          {
            v53 = 704;
            if ( *((_BYTE *)v49 + 64) )
              v53 = 472;
            v54 = v49[9] + v53;
            v154 = 1;
            v52 = sub_1408995E0(v54, v49 + 8, &v116, &off_141764290);
          }
          v5 = v151;
          *(_QWORD *)(v151 + 7624) = v52;
LABEL_52:
          Address = (PVOID)(v5 + 7624);
          sub_140AFEC50(&v116, v5 + 7624, a2);
          v55 = v116;
          if ( v116 == (const char *)-3LL )
          {
            v60 = (_BYTE *)v151;
            *(_BYTE *)(v151 + 7632) = 3;
            goto LABEL_88;
          }
          if ( (_DWORD)v116 == -2 )
          {
            v56 = v117;
            v57 = v118;
            LODWORD(v146) = *(_DWORD *)((char *)&v118 + 1);
            *(_DWORD *)((char *)&v146 + 3) = HIDWORD(v118);
            v58 = 0x800000000000000CuLL;
            v59 = *(_QWORD *)v119;
          }
          else
          {
            v58 = v117;
            v56 = v118;
            v57 = v119[0];
            LODWORD(v146) = *(_DWORD *)&v119[1];
            *(_DWORD *)((char *)&v146 + 3) = *(_DWORD *)&v119[4];
            v59 = *(_QWORD *)&v119[8];
            v137 = *(_OWORD *)&v119[16];
            v138 = *(_OWORD *)&v119[32];
            v139 = v120;
            v140 = v121;
          }
          v143[0] = (_DWORD)v146;
          *(_DWORD *)((char *)v143 + 3) = *(_DWORD *)((char *)&v146 + 3);
          v85 = v137;
          v86 = v138;
          v87 = v139;
          v88 = v140;
          v61 = *(_QWORD *)Address;
          if ( (unsigned __int8)sub_1412F2A80(*(_QWORD *)Address) )
            sub_1412E7580(v61);
          if ( (_DWORD)v55 != -1 )
          {
            if ( (_DWORD)v55 == -2 )
            {
              v116 = (const char *)v58;
              v117 = v56;
              LOBYTE(v118) = v57;
              *(_DWORD *)((char *)&v118 + 1) = v143[0];
              HIDWORD(v118) = *(_DWORD *)((char *)v143 + 3);
              *(_QWORD *)v119 = v59;
              *(_OWORD *)&v119[8] = v85;
              v146 = nullptr;
              v147 = 1;
              v148 = 0;
              *(_QWORD *)&v138 = 1610612768;
              *(_QWORD *)&v137 = &v146;
              *((_QWORD *)&v137 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v116, &v137, v62) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v155,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v18 = v146;
              v27 = v147;
              LOBYTE(v19) = v148;
              v63 = HIBYTE(v148);
              DWORD2(v19) = *(unsigned __int16 *)((char *)&v148 + 5);
              v64 = *(unsigned int *)((char *)&v148 + 1);
              sub_140BF0F60(&v116);
            }
            else
            {
              v116 = v55;
              v117 = v58;
              v118 = v56;
              v119[0] = v57;
              *(_DWORD *)&v119[1] = v143[0];
              *(_DWORD *)&v119[4] = *(_DWORD *)((char *)v143 + 3);
              *(_QWORD *)&v119[8] = v59;
              *(_OWORD *)&v119[16] = v85;
              *(_OWORD *)&v119[32] = v86;
              v120 = v87;
              *(_QWORD *)&v121 = v88;
              v146 = nullptr;
              v147 = 1;
              v148 = 0;
              *(_QWORD *)&v138 = 1610612768;
              *(_QWORD *)&v137 = &v146;
              *((_QWORD *)&v137 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_140B036A0(&v116, &v137) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v155,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v18 = v146;
              v27 = v147;
              LOBYTE(v19) = v148;
              v63 = HIBYTE(v148);
              DWORD2(v19) = *(unsigned __int16 *)((char *)&v148 + 5);
              v64 = *(unsigned int *)((char *)&v148 + 1);
              sub_140BF2F60(&v116);
            }
            v25 = ((unsigned __int64)((unsigned int)(v63 << 16) | DWORD2(v19)) << 32) | v64;
            v26 = v151;
            sub_140016620(v151 + 6632);
            goto LABEL_69;
          }
          HIDWORD(v132) = *(_DWORD *)((char *)v143 + 3);
          *(_DWORD *)((char *)&v132 + 1) = v143[0];
          *(_QWORD *)&v131 = v58;
          *((_QWORD *)&v131 + 1) = v56;
          LOBYTE(v132) = v57;
          v65 = v132;
          Address = (PVOID)(v151 + 6632);
          v84 = *(_OWORD *)(v151 + 7120);
          v134 = nullptr;
          v135 = 1;
          v136 = 0;
          v148 = 1610612768;
          v146 = &v134;
          v147 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_14148F3A0(&v84, &v146, v62) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v155,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v150 = v134;
          v142 = v135;
          v66 = v136;
          LODWORD(v134) = sub_141475580();
          HIDWORD(v134) = v67;
          sub_141475530(&v146, &v134, 3577643008LL, 27111902);
          if ( (_BYTE)v146 )
            v68 = 0;
          else
            v68 = v147;
          v137 = v131;
          *(_QWORD *)&v138 = v132;
          v141 = v65;
          *((_QWORD *)&v138 + 1) = v150;
          *(_QWORD *)&v139 = v142;
          *((_QWORD *)&v139 + 1) = v66;
          v140 = v68;
          v153 = 0;
          sub_140ACC5D0(&v116, &v137);
          *((_QWORD *)&v19 + 1) = v116;
          v76 = (void *)v117;
          v27 = v118;
          v77 = *(_OWORD *)v119;
          *(_QWORD *)&v19 = *(_QWORD *)v119;
          v110 = *(__m256i *)&v119[16];
          v111 = v120;
          v112 = v121;
          v113 = v122;
          v114 = v123;
          v115 = v124;
          sub_140016620(Address);
          v125 = v110;
          v126 = v111;
          v127 = v112;
          v128 = v113;
          v129 = v114;
          v130 = v115;
          v60 = (_BYTE *)v151;
          *(_BYTE *)(v151 + 7632) = 1;
          if ( *((_QWORD *)&v19 + 1) == -2 )
          {
LABEL_88:
            v60[7640] = 3;
            v60[7648] = 3;
            v78 = 3;
            result = 1;
            goto LABEL_95;
          }
          v102 = v130;
          v101 = v129;
          v100 = v128;
          v99 = v127;
          v98 = v126;
          v97 = v125;
          if ( *((_QWORD *)&v19 + 1) != -1 )
          {
            v96 = v102;
            v95 = v101;
            v94 = v100;
            v93 = v99;
            v92 = v98;
            v91 = v97;
            *(_QWORD *)&v89 = *((_QWORD *)&v19 + 1);
            *((_QWORD *)&v89 + 1) = v76;
            *(_QWORD *)v90 = v27;
            *(_OWORD *)&v90[8] = v77;
            sub_140B09030(&v116, &v89);
            v27 = ((unsigned __int64)((HIBYTE(v117) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v117 + 5)) << 32)
                | *(unsigned int *)((char *)&v117 + 1);
            v28 = v117;
            v32 = v118;
            v19 = *(_OWORD *)v119;
            if ( v116 == (const char *)-1LL )
            {
              v46 = 0;
            }
            else
            {
              HIBYTE(v117) = (((unsigned __int64)((HIBYTE(v117) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v117 + 5)) << 32)
                            | *(unsigned int *)((char *)&v117 + 1)) >> 48;
              *(_WORD *)((char *)&v117 + 5) = WORD2(v27);
              *(_DWORD *)((char *)&v117 + 1) = v27;
              v125.m256i_i64[0] = 0;
              *(_OWORD *)&v125.m256i_u64[1] = 1u;
              v110.m256i_i64[2] = 1610612768;
              v110.m256i_i64[0] = (__int64)&v125;
              v110.m256i_i64[1] = (__int64)&off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v116, &v110, v80) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v155,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v19 = *(_OWORD *)&v125.m256i_u64[1];
              v32 = v125.m256i_i64[0];
              sub_140BF0F60(&v116);
              v46 = 1;
              v28 = 3;
            }
            v70 = v149;
            goto LABEL_78;
          }
          Address = v76;
          v25 = (unsigned __int64)v19 >> 8;
LABEL_70:
          v69 = v25 << 8;
          *((_QWORD *)&v19 + 1) = v69 | (unsigned __int8)v19;
          v70 = v149;
          if ( v69 < 0 )
          {
            v71 = 0;
            goto LABEL_72;
          }
          if ( *((_QWORD *)&v19 + 1) )
          {
            nullsub_1(v23);
            v71 = 1;
            v72 = sub_140001650(*((_QWORD *)&v19 + 1), 1);
            if ( !v72 )
            {
LABEL_72:
              v150 = (__int64 *)v27;
              sub_1416C2D4B(v71, *((_QWORD *)&v19 + 1));
            }
            *(_QWORD *)&v19 = v72;
            sub_141684120(v72, v27, *((_QWORD *)&v19 + 1));
            v73 = Address;
            if ( !Address )
              goto LABEL_77;
          }
          else
          {
            *(_QWORD *)&v19 = 1;
            v73 = Address;
            if ( !Address )
              goto LABEL_77;
          }
          sub_140001660(v27, v73, 1);
LABEL_77:
          v46 = 1;
          v28 = 3;
          v32 = *((_QWORD *)&v19 + 1);
LABEL_78:
          *v145 = 1;
          v149 = v70;
          sub_140BF0DE0(v70);
          v47 = v151;
          if ( *(_QWORD *)(v151 + 4544) != -1 )
          {
            v144 = (_QWORD *)(v151 + 4552);
            v74 = *(__int64 **)(v151 + 4552);
            v145 = *(_BYTE **)(v151 + 4560);
            Address = nullptr;
            v150 = v74;
            while ( v145 != Address )
            {
              Address = (char *)Address + 1;
              v75 = v74 + 12;
              sub_1402C7520();
              v74 = v75;
            }
            v47 = v151;
            v45 = *(_QWORD *)(v151 + 4544);
            if ( v45 )
LABEL_83:
              sub_140001660(*v144, 96 * v45, 8);
          }
LABEL_94:
          *(_BYTE *)(v47 + 7648) = 1;
          sub_140BE0EC0(v149);
          v105 = v27;
          v107 = BYTE6(v27);
          v106 = WORD2(v27);
          v109 = v19;
          v104 = v28;
          v108 = v32;
          v103 = v46;
          v81 = v151;
          *(_BYTE *)(v151 + 7667) = 0;
          sub_141684120(&v116, v81, 360);
          *(_BYTE *)(v81 + 7666) = 0;
          v82 = *(_QWORD *)(v81 + 384);
          *(_BYTE *)(v81 + 7665) = 0;
          *(_QWORD *)v90 = *(_QWORD *)(v81 + 376);
          v89 = *(_OWORD *)(v81 + 360);
          sub_14047E370(
            (unsigned int)&v116,
            v82,
            (unsigned int)&v103,
            (unsigned int)&v89,
            *(_DWORD *)(v81 + 7656),
            *(_DWORD *)(v81 + 7660));
          v78 = 1;
          result = 0;
          v60 = (_BYTE *)v151;
LABEL_95:
          v60[7664] = v78;
          return result;
        case 1:
LABEL_114:
          v144 = v10;
          v145 = v11;
          JUMPOUT(0x140C9E223LL);
        case 2:
LABEL_113:
          v144 = v10;
          v145 = v11;
          v149 = v7;
          sub_1416C3420(&off_1417BB0F0, a2, a3, a4);
        case 3:
LABEL_21:
          v144 = v10;
          v145 = v11;
          v149 = v7;
          goto LABEL_52;
      }
  }
}