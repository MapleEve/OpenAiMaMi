// module: codexmate_lib
// addr: 0x140c9ec80
// name: load_installed_skills
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_installed_skills | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_installed_skills(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // r15
  _BYTE *v11; // r14
  volatile void *v12; // rbx
  __int64 *v13; // rbx
  char *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
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
  PVOID v36; // rcx
  char v37; // al
  __int64 v38; // r14
  char *v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rax
  unsigned __int8 v45; // bl
  __int64 v46; // r13
  char v47; // al
  _QWORD *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  const char *v54; // rdi
  __int64 v55; // r14
  char v56; // bl
  __int64 v57; // r15
  _BYTE *v58; // r14
  char v59; // cl
  char result; // al
  __int64 v61; // rsi
  __int64 v62; // r8
  int v63; // ebx
  __int64 v64; // r14
  int v65; // edi
  __int64 v66; // r14
  int v67; // edx
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // r13
  __int64 v72; // rbx
  __int64 v73; // rax
  PVOID v74; // rdx
  __int64 *v75; // rcx
  __int64 *v76; // r13
  volatile void *v77; // rdi
  char *v78; // rcx
  __int64 *v79; // r15
  char *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v83; // r12d
  __int64 v84; // r14
  PVOID v85; // rcx
  char v86; // al
  __int64 v87; // rsi
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int128 v93; // xmm6
  PVOID v94; // rcx
  char v95; // al
  __int64 v96; // r8
  int v97; // eax
  _QWORD *v98; // rdi
  int v99; // eax
  __int128 v100; // [rsp+30h] [rbp-50h] BYREF
  __int128 v101; // [rsp+40h] [rbp-40h]
  __int128 v102; // [rsp+50h] [rbp-30h]
  __int128 v103; // [rsp+60h] [rbp-20h]
  __int64 v104; // [rsp+70h] [rbp-10h]
  __int128 v105; // [rsp+80h] [rbp+0h] BYREF
  _BYTE v106[24]; // [rsp+90h] [rbp+10h]
  __m256i v107; // [rsp+A8h] [rbp+28h]
  __int128 v108; // [rsp+C8h] [rbp+48h]
  __int128 v109; // [rsp+D8h] [rbp+58h]
  __int128 v110; // [rsp+E8h] [rbp+68h]
  __int128 v111; // [rsp+F8h] [rbp+78h]
  __int64 v112; // [rsp+108h] [rbp+88h]
  __m256i v113; // [rsp+110h] [rbp+90h]
  __int128 v114; // [rsp+130h] [rbp+B0h]
  __int128 v115; // [rsp+140h] [rbp+C0h]
  __int128 v116; // [rsp+150h] [rbp+D0h]
  __int128 v117; // [rsp+160h] [rbp+E0h]
  __int64 v118; // [rsp+170h] [rbp+F0h]
  __int64 v119; // [rsp+178h] [rbp+F8h] BYREF
  char v120; // [rsp+180h] [rbp+100h]
  int v121; // [rsp+181h] [rbp+101h]
  __int16 v122; // [rsp+185h] [rbp+105h]
  char v123; // [rsp+187h] [rbp+107h]
  __int64 v124; // [rsp+188h] [rbp+108h]
  __int128 v125; // [rsp+190h] [rbp+110h]
  __m256i v126; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v127; // [rsp+1C0h] [rbp+140h]
  __int128 v128; // [rsp+1D0h] [rbp+150h]
  __int128 v129; // [rsp+1E0h] [rbp+160h]
  __int128 v130; // [rsp+1F0h] [rbp+170h]
  __int64 v131; // [rsp+200h] [rbp+180h]
  const char *v132; // [rsp+208h] [rbp+188h] BYREF
  __int64 v133; // [rsp+210h] [rbp+190h]
  __int64 v134; // [rsp+218h] [rbp+198h] BYREF
  _BYTE v135[48]; // [rsp+220h] [rbp+1A0h]
  __int128 v136; // [rsp+250h] [rbp+1D0h]
  __int128 v137; // [rsp+260h] [rbp+1E0h]
  __int128 v138; // [rsp+270h] [rbp+1F0h]
  __int128 v139; // [rsp+280h] [rbp+200h]
  __int64 v140; // [rsp+290h] [rbp+210h]
  __m256i v141; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v142; // [rsp+390h] [rbp+310h]
  __int128 v143; // [rsp+3A0h] [rbp+320h]
  __int128 v144; // [rsp+3B0h] [rbp+330h]
  __int128 v145; // [rsp+3C0h] [rbp+340h]
  __int64 v146; // [rsp+3D0h] [rbp+350h]
  __int128 v147; // [rsp+3E0h] [rbp+360h]
  __int64 v148; // [rsp+3F0h] [rbp+370h]
  __int64 v149; // [rsp+3F8h] [rbp+378h]
  __int128 v150; // [rsp+400h] [rbp+380h] BYREF
  __int128 v151; // [rsp+410h] [rbp+390h]
  __int128 v152; // [rsp+420h] [rbp+3A0h]
  __int128 v153; // [rsp+430h] [rbp+3B0h]
  __int128 v154; // [rsp+440h] [rbp+3C0h] BYREF
  __int128 v155; // [rsp+450h] [rbp+3D0h]
  __int128 v156; // [rsp+460h] [rbp+3E0h]
  __int128 v157; // [rsp+470h] [rbp+3F0h]
  _DWORD v158[2]; // [rsp+488h] [rbp+408h]
  _BYTE *v159; // [rsp+490h] [rbp+410h]
  __int64 *v160; // [rsp+498h] [rbp+418h]
  __int64 v161; // [rsp+4A0h] [rbp+420h]
  __int64 v162; // [rsp+4A8h] [rbp+428h]
  char *v163; // [rsp+4B0h] [rbp+430h]
  __int64 v164; // [rsp+4B8h] [rbp+438h]
  char v165; // [rsp+4C6h] [rbp+446h]
  char v166; // [rsp+4C7h] [rbp+447h]
  PVOID Address; // [rsp+4C8h] [rbp+448h]
  char v168; // [rsp+4D6h] [rbp+456h] BYREF
  char v169; // [rsp+4D7h] [rbp+457h]
  __int64 v170; // [rsp+4D8h] [rbp+458h]

  v170 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 7664);
  v164 = a1;
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
          goto LABEL_142;
        case 2:
          goto LABEL_141;
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
          v132 = aLoadInstalledS;
          v133 = 21;
          v134 = (__int64)aRepo_0;
          *(_QWORD *)v135 = 4;
          v162 = v7;
          *(_QWORD *)&v135[8] = v7;
          *(_OWORD *)&v135[16] = (unsigned __int64)(v5 + 4544);
          v8 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4536) + 16LL));
          if ( v8 )
            goto LABEL_5;
          sub_1416850A0(&v105, &v132, &v134);
          v27 = v105;
          if ( (_BYTE)v105 == 0xFF )
          {
            v8 = *((_QWORD *)&v105 + 1);
LABEL_5:
            v5 = v164;
            v9 = v164 + 4568;
            *(_QWORD *)(v164 + 4568) = v8;
            *(_BYTE *)(v5 + 5584) = 0;
            v10 = (__int64 *)(v5 + 5592);
            sub_141684120(v5 + 5592, v9, 1024);
            v11 = (_BYTE *)(v5 + 7640);
            *(_BYTE *)(v5 + 7640) = 0;
            v7 = v162;
LABEL_7:
            sub_141684120(v5 + 6616, v10, 1024);
            switch ( *(_BYTE *)(v5 + 7632) )
            {
              case 0:
                goto LABEL_9;
              case 1:
                goto LABEL_144;
              case 2:
                goto LABEL_143;
              case 3:
                goto LABEL_20;
            }
          }
          v160 = (__int64 *)(v5 + 4544);
          v28 = BYTE7(v105);
          v29 = *(unsigned __int16 *)((char *)&v105 + 5);
          v30 = *(unsigned int *)((char *)&v105 + 1);
          v31 = *((_QWORD *)&v105 + 1);
          v18 = *(_OWORD *)v106;
          sub_140BF0DE0(v162);
          v24 = ((unsigned __int64)((v28 << 16) | v29) << 32) | v30;
          if ( *v160 == -1 )
          {
            v45 = 1;
            v46 = v164;
            goto LABEL_104;
          }
          v163 = (char *)(v164 + 4552);
          v32 = *(_QWORD *)(v164 + 4552);
          v159 = *(_BYTE **)(v164 + 4560);
          Address = nullptr;
          v161 = v32;
          while ( v159 != Address )
          {
            Address = (char *)Address + 1;
            v33 = v32 + 96;
            sub_1402C7520();
            v32 = v33;
          }
          v44 = *v160;
          v45 = 1;
          v46 = v164;
          if ( !*v160 )
            goto LABEL_104;
          goto LABEL_84;
        case 1:
LABEL_142:
          v162 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_141:
          v162 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v11 = (_BYTE *)(v5 + 7640);
  v10 = (__int64 *)(v5 + 5592);
  switch ( *(_BYTE *)(v5 + 7640) )
  {
    case 0:
      goto LABEL_7;
    case 1:
      v162 = v7;
      v149 = v5 + 5592;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2:
      v162 = v7;
      v149 = v5 + 5592;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3:
      switch ( *(_BYTE *)(v5 + 7632) )
      {
        case 0:
LABEL_9:
          v160 = v10;
          v159 = v11;
          v162 = v7;
          v12 = *(volatile void **)(v5 + 6616);
          *(_QWORD *)(v5 + 6624) = v12;
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v12, 1, 0) )
            sub_1416C15B0(v12);
          Address = (PVOID)v12;
          v13 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v97 = sub_1416C2250(a1, a2);
            LOBYTE(v97) = v97 ^ 1;
            LODWORD(v161) = v97;
            v14 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_27;
          }
          else
          {
            LODWORD(v161) = 0;
            v14 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_27;
          }
          *(_QWORD *)&v154 = 0;
          *((_QWORD *)&v154 + 1) = 1;
          *(_QWORD *)&v155 = 0;
          v134 = 1610612768;
          v132 = (const char *)&v154;
          v133 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v132) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v168,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v163 = *((char **)&v154 + 1);
          v17 = (void *)v154;
          LODWORD(v18) = (unsigned __int8)v155;
          v19 = BYTE7(v155);
          v20 = *(unsigned __int16 *)((char *)&v155 + 5);
          v21 = *(unsigned int *)((char *)&v155 + 1);
          if ( !(_BYTE)v161 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v16, v15) )
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
            v26 = v164;
LABEL_70:
            Address = v17;
            v146 = v131;
            v145 = v130;
            v144 = v129;
            v143 = v128;
            v142 = v127;
            v141 = v126;
            *(_BYTE *)(v26 + 7632) = 1;
            v113 = v141;
            v114 = v142;
            v115 = v143;
            v116 = v144;
            v117 = v145;
            v118 = v146;
            goto LABEL_71;
          }
          v14 = v163;
          LODWORD(v161) = v18;
LABEL_27:
          Address = v14;
          sub_1407BC950(v164 + 6632, v14 + 8);
          if ( (v161 & 1) == 0 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v35, v34) )
            *((_BYTE *)Address + 1) = 1;
          v36 = Address;
          v37 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v37 == 2 )
            WakeByAddressSingle(v36);
          v38 = v164;
          v39 = *(char **)(v164 + 6872);
          if ( (__int64)v39 < 0 )
          {
            v40 = 0;
            goto LABEL_33;
          }
          if ( v39 )
          {
            v41 = *(_QWORD *)(v164 + 6864);
            nullsub_1(v36);
            v40 = 1;
            v42 = sub_140001650(v39, 1);
            if ( !v42 )
LABEL_33:
              sub_1416C2D4B(v40, v39);
            v43 = v42;
            sub_141684120(v42, v41, v39);
          }
          else
          {
            v43 = 1;
          }
          v47 = *(_BYTE *)(v38 + 6880);
          v132 = v39;
          v163 = (char *)v43;
          v133 = v43;
          Address = v39;
          v134 = (__int64)v39;
          v135[0] = v47;
          v48 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v166 = 0;
            v98 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v48 = v98;
          }
          if ( *((_DWORD *)v48 + 4) == 2 )
          {
            v49 = 704;
            if ( *(_BYTE *)v48 )
              v49 = 472;
            v50 = v48[1] + v49;
            v166 = 1;
            v51 = sub_140899EC0(v50, v48, &v132, &off_1417642A8);
          }
          else
          {
            v52 = 704;
            if ( *((_BYTE *)v48 + 64) )
              v52 = 472;
            v53 = v48[9] + v52;
            v166 = 1;
            v51 = sub_140899EC0(v53, v48 + 8, &v132, &off_141764290);
          }
          v5 = v164;
          *(_QWORD *)(v164 + 7624) = v51;
LABEL_51:
          Address = (PVOID)(v5 + 7624);
          sub_140AFEE30(&v132, v5 + 7624, a2);
          v54 = v132;
          if ( v132 == (const char *)-3LL )
          {
            v58 = (_BYTE *)v164;
            *(_BYTE *)(v164 + 7632) = 3;
LABEL_55:
            v58[7640] = 3;
            v58[7648] = 3;
            v59 = 3;
            result = 1;
            goto LABEL_105;
          }
          if ( (_DWORD)v132 == -2 )
          {
            v55 = v133;
            v56 = v134;
            LODWORD(v150) = *(_DWORD *)((char *)&v134 + 1);
            *(_DWORD *)((char *)&v150 + 3) = HIDWORD(v134);
            v24 = 0x800000000000000CuLL;
            v57 = *(_QWORD *)v135;
          }
          else
          {
            v24 = v133;
            v55 = v134;
            v56 = v135[0];
            LODWORD(v150) = *(_DWORD *)&v135[1];
            *(_DWORD *)((char *)&v150 + 3) = *(_DWORD *)&v135[4];
            v57 = *(_QWORD *)&v135[8];
            v154 = *(_OWORD *)&v135[16];
            v155 = *(_OWORD *)&v135[32];
            v156 = v136;
            *(_QWORD *)&v157 = v137;
          }
          v158[0] = v150;
          *(_DWORD *)((char *)v158 + 3) = *(_DWORD *)((char *)&v150 + 3);
          v101 = v154;
          v102 = v155;
          v103 = v156;
          v104 = v157;
          v61 = *(_QWORD *)Address;
          if ( (unsigned __int8)sub_1412F2A80(*(_QWORD *)Address) )
            sub_1412E7580(v61);
          if ( (_DWORD)v54 != -1 )
          {
            if ( (_DWORD)v54 == -2 )
            {
              v132 = (const char *)v24;
              v133 = v55;
              LOBYTE(v134) = v56;
              *(_DWORD *)((char *)&v134 + 1) = v158[0];
              HIDWORD(v134) = *(_DWORD *)((char *)v158 + 3);
              *(_QWORD *)v135 = v57;
              *(_OWORD *)&v135[8] = v101;
              *(_QWORD *)&v150 = 0;
              *((_QWORD *)&v150 + 1) = 1;
              *(_QWORD *)&v151 = 0;
              *(_QWORD *)&v155 = 1610612768;
              *(_QWORD *)&v154 = &v150;
              *((_QWORD *)&v154 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v132, &v154, v62) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v168,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v163 = *((char **)&v150 + 1);
              v17 = (void *)v150;
              LOBYTE(v18) = v151;
              v63 = BYTE7(v151);
              DWORD2(v18) = *(unsigned __int16 *)((char *)&v151 + 5);
              v64 = *(unsigned int *)((char *)&v151 + 1);
              sub_140BF0F60(&v132);
            }
            else
            {
              v132 = v54;
              v133 = v24;
              v134 = v55;
              v135[0] = v56;
              *(_DWORD *)&v135[1] = v158[0];
              *(_DWORD *)&v135[4] = *(_DWORD *)((char *)v158 + 3);
              *(_QWORD *)&v135[8] = v57;
              *(_OWORD *)&v135[16] = v101;
              *(_OWORD *)&v135[32] = v102;
              v136 = v103;
              *(_QWORD *)&v137 = v104;
              *(_QWORD *)&v150 = 0;
              *((_QWORD *)&v150 + 1) = 1;
              *(_QWORD *)&v151 = 0;
              *(_QWORD *)&v155 = 1610612768;
              *(_QWORD *)&v154 = &v150;
              *((_QWORD *)&v154 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_140B036A0(&v132, &v154) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v168,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v163 = *((char **)&v150 + 1);
              v17 = (void *)v150;
              LOBYTE(v18) = v151;
              v63 = BYTE7(v151);
              DWORD2(v18) = *(unsigned __int16 *)((char *)&v151 + 5);
              v64 = *(unsigned int *)((char *)&v151 + 1);
              sub_140BF2F60(&v132);
            }
            v25 = ((unsigned __int64)((unsigned int)(v63 << 16) | DWORD2(v18)) << 32) | v64;
            v26 = v164;
LABEL_69:
            sub_140016620(v26 + 6632);
            goto LABEL_70;
          }
          HIDWORD(v148) = *(_DWORD *)((char *)v158 + 3);
          *(_DWORD *)((char *)&v148 + 1) = v158[0];
          *(_QWORD *)&v147 = v24;
          *((_QWORD *)&v147 + 1) = v55;
          LOBYTE(v148) = v56;
          v65 = v148;
          v100 = *(_OWORD *)(v164 + 6864);
          *(_QWORD *)&v154 = 0;
          *((_QWORD *)&v154 + 1) = 1;
          *(_QWORD *)&v155 = 0;
          v134 = 1610612768;
          v132 = (const char *)&v154;
          v133 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_14148F3A0(&v100, &v132, v62) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v168,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v163 = *((char **)&v154 + 1);
          Address = (PVOID)v154;
          v66 = v155;
          LODWORD(v154) = sub_141475580();
          DWORD1(v154) = v67;
          sub_141475530(&v132, &v154, 3577643008LL, 27111902);
          v68 = v164;
          if ( (_BYTE)v132 )
            v69 = 0;
          else
            v69 = v133;
          v150 = v147;
          *(_QWORD *)&v151 = v148;
          DWORD2(v153) = v65;
          *((_QWORD *)&v151 + 1) = Address;
          v78 = v163;
          *(_QWORD *)&v152 = v163;
          *((_QWORD *)&v152 + 1) = v66;
          *(_QWORD *)&v153 = v69;
          v77 = *(volatile void **)(v164 + 6624);
          LOBYTE(v78) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v77, 1, 0) )
          {
            v169 = 1;
            sub_1416C15B0(v77);
          }
          Address = (PVOID)v77;
          v79 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v169 = 1;
            v99 = sub_1416C2250(v78, v68);
            LOBYTE(v99) = v99 ^ 1;
            LODWORD(v161) = v99;
            v80 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_107;
          }
          else
          {
            LODWORD(v161) = 0;
            v80 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_107;
          }
          *(_QWORD *)&v154 = 0;
          *((_QWORD *)&v154 + 1) = 1;
          *(_QWORD *)&v155 = 0;
          v134 = 1610612768;
          v132 = (const char *)&v154;
          v133 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v132) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v168,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v163 = *((char **)&v154 + 1);
          v17 = (void *)v154;
          LODWORD(v18) = (unsigned __int8)v155;
          v83 = BYTE7(v155);
          DWORD2(v18) = *(unsigned __int16 *)((char *)&v155 + 5);
          v84 = *(unsigned int *)((char *)&v155 + 1);
          if ( !(_BYTE)v161 )
          {
            if ( 2 * *v79 )
            {
              v169 = 1;
              if ( !(unsigned __int8)sub_1416C2250(v82, v81) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v85 = Address;
          v86 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v86 == 2 )
          {
            v169 = 1;
            WakeByAddressSingle(v85);
          }
          if ( v17 != (void *)-1LL )
          {
            sub_140334E90(&v150);
            v24 = (unsigned int)(v83 << 16);
            v87 = (unsigned int)v24 | DWORD2(v18);
            if ( (_QWORD)v150 )
              sub_140001660(*((_QWORD *)&v150 + 1), 184 * v150, 8);
            v88 = v87 << 32;
            v26 = v164;
            if ( *((_QWORD *)&v151 + 1) )
              sub_140001660(v152, *((_QWORD *)&v151 + 1), 1);
            v25 = v88 | v84;
            goto LABEL_69;
          }
          v80 = v163;
          LODWORD(v161) = v18;
LABEL_107:
          Address = v80;
          v165 = 1;
          sub_1403A8CF0(&v132, v80 + 8, &v150);
          if ( (_DWORD)v132 != -1 )
          {
            v165 = 1;
            sub_140BF2F60(&v132);
          }
          v157 = v153;
          v156 = v152;
          v155 = v151;
          v154 = v150;
          v165 = 0;
          sub_140ACA140(&v132, &v154);
          *((_QWORD *)&v18 + 1) = v132;
          v24 = v133;
          v163 = (char *)v134;
          v93 = *(_OWORD *)v135;
          *(_QWORD *)&v18 = *(_QWORD *)v135;
          v126 = *(__m256i *)&v135[16];
          v127 = v136;
          v128 = v137;
          v129 = v138;
          v130 = v139;
          v131 = v140;
          if ( (v161 & 1) == 0 )
          {
            if ( 2 * *v79 )
            {
              v169 = 0;
              if ( !(unsigned __int8)sub_1416C2250(v92, v91) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v94 = Address;
          v95 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v95 == 2 )
          {
            v169 = 0;
            WakeByAddressSingle(v94);
          }
          v58 = (_BYTE *)v164;
          sub_140016620(v164 + 6632);
          v146 = v131;
          v145 = v130;
          v144 = v129;
          v143 = v128;
          v142 = v127;
          v141 = v126;
          v58[7632] = 1;
          if ( *((_QWORD *)&v18 + 1) == -2 )
            goto LABEL_55;
          v118 = v146;
          v117 = v145;
          v116 = v144;
          v115 = v143;
          v114 = v142;
          v113 = v141;
          if ( *((_QWORD *)&v18 + 1) != -1 )
          {
            v112 = v118;
            v111 = v117;
            v110 = v116;
            v109 = v115;
            v108 = v114;
            v107 = v113;
            *(_QWORD *)&v105 = *((_QWORD *)&v18 + 1);
            *((_QWORD *)&v105 + 1) = v24;
            *(_QWORD *)v106 = v163;
            *(_OWORD *)&v106[8] = v93;
            sub_140B052F0(&v132, &v105);
            v24 = ((unsigned __int64)((HIBYTE(v133) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v133 + 5)) << 32)
                | *(unsigned int *)((char *)&v133 + 1);
            v27 = v133;
            v31 = v134;
            v18 = *(_OWORD *)v135;
            if ( v132 == (const char *)-1LL )
            {
              v45 = 0;
            }
            else
            {
              HIBYTE(v133) = (((unsigned __int64)((HIBYTE(v133) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v133 + 5)) << 32)
                            | *(unsigned int *)((char *)&v133 + 1)) >> 48;
              *(_WORD *)((char *)&v133 + 5) = WORD2(v24);
              *(_DWORD *)((char *)&v133 + 1) = v24;
              v141.m256i_i64[0] = 0;
              *(_OWORD *)&v141.m256i_u64[1] = 1u;
              v126.m256i_i64[2] = 1610612768;
              v126.m256i_i64[0] = (__int64)&v141;
              v126.m256i_i64[1] = (__int64)&off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v132, &v126, v96) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v168,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v18 = *(_OWORD *)&v141.m256i_u64[1];
              v31 = v141.m256i_i64[0];
              sub_140BF0F60(&v132);
              v45 = 1;
              v27 = 3;
            }
            v71 = v162;
            goto LABEL_79;
          }
          Address = (PVOID)v24;
          v25 = (unsigned __int64)v18 >> 8;
LABEL_71:
          v70 = v25 << 8;
          *((_QWORD *)&v18 + 1) = v70 | (unsigned __int8)v18;
          v71 = v162;
          if ( v70 < 0 )
          {
            v72 = 0;
            goto LABEL_73;
          }
          if ( *((_QWORD *)&v18 + 1) )
          {
            nullsub_1(v22);
            v72 = 1;
            v73 = sub_140001650(v70 | (unsigned __int8)v18, 1);
            if ( !v73 )
LABEL_73:
              sub_1416C2D4B(v72, v70 | (unsigned __int8)v18);
            *(_QWORD *)&v18 = v73;
            sub_141684120(v73, v163, *((_QWORD *)&v18 + 1));
            v74 = Address;
            if ( !Address )
              goto LABEL_78;
          }
          else
          {
            *(_QWORD *)&v18 = 1;
            v74 = Address;
            if ( !Address )
              goto LABEL_78;
          }
          sub_140001660(v163, v74, 1);
LABEL_78:
          v45 = 1;
          v27 = 3;
          v31 = *((_QWORD *)&v18 + 1);
LABEL_79:
          *v159 = 1;
          v162 = v71;
          sub_140BF0DE0(v71);
          v46 = v164;
          if ( *(_QWORD *)(v164 + 4544) != -1 )
          {
            v163 = (char *)(v164 + 4552);
            v75 = *(__int64 **)(v164 + 4552);
            v159 = *(_BYTE **)(v164 + 4560);
            Address = nullptr;
            v160 = v75;
            while ( v159 != Address )
            {
              Address = (char *)Address + 1;
              v76 = v75 + 12;
              sub_1402C7520();
              v75 = v76;
            }
            v46 = v164;
            v44 = *(_QWORD *)(v164 + 4544);
            if ( v44 )
LABEL_84:
              sub_140001660(*(_QWORD *)v163, 96 * v44, 8);
          }
LABEL_104:
          *(_BYTE *)(v46 + 7648) = 1;
          sub_140BE0EC0(v162);
          v121 = v24;
          v123 = BYTE6(v24);
          v122 = WORD2(v24);
          v125 = v18;
          v120 = v27;
          v124 = v31;
          v119 = v45;
          v89 = v164;
          *(_BYTE *)(v164 + 7667) = 0;
          sub_141684120(&v132, v89, 360);
          *(_BYTE *)(v89 + 7666) = 0;
          v90 = *(_QWORD *)(v89 + 384);
          *(_BYTE *)(v89 + 7665) = 0;
          *(_QWORD *)v106 = *(_QWORD *)(v89 + 376);
          v105 = *(_OWORD *)(v89 + 360);
          sub_14047E370(
            (unsigned int)&v132,
            v90,
            (unsigned int)&v119,
            (unsigned int)&v105,
            *(_DWORD *)(v89 + 7656),
            *(_DWORD *)(v89 + 7660));
          v59 = 1;
          result = 0;
          v58 = (_BYTE *)v164;
LABEL_105:
          v58[7664] = v59;
          return result;
        case 1:
LABEL_144:
          v160 = v10;
          v159 = v11;
          JUMPOUT(0x140CA0317LL);
        case 2:
LABEL_143:
          v160 = v10;
          v159 = v11;
          v162 = v7;
          sub_1416C3420(&off_1417BB138, a2, a3, a4);
        case 3:
LABEL_20:
          v160 = v10;
          v159 = v11;
          v162 = v7;
          goto LABEL_51;
      }
  }
}