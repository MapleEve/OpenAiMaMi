// module: codexmate_lib/commands/accounts
// addr: 0x140cb5e50
// name: load_snapshot
// win 1.2.1 | module src/commands/accounts.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_snapshot | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_snapshot(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // r13
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  signed __int64 v8; // r12
  char v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  char v12; // si
  __int64 v13; // rdi
  __int64 v14; // r12
  _BYTE *v15; // rdi
  __int64 v16; // rbx
  const char *v17; // r14
  _BYTE *v18; // r12
  bool v19; // zf
  char v20; // of
  __int64 v21; // r14
  volatile signed __int64 *v22; // rdi
  __int64 v23; // rt0
  volatile signed __int64 *v24; // rbx
  __int64 v25; // rt0
  _QWORD *v26; // r12
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  _BYTE *v31; // r13
  __int64 v32; // rax
  const char *v33; // rdi
  __int64 v34; // r14
  char v35; // bl
  __int64 v36; // rsi
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _BYTE *v41; // rcx
  _BYTE *v42; // rsi
  __int64 v43; // rax
  unsigned __int8 v44; // di
  char v45; // bl
  char v46; // of
  __int64 v47; // r15
  volatile signed __int64 *v48; // rdi
  __int64 v49; // rt0
  volatile signed __int64 *v50; // r14
  __int64 v51; // rt0
  __int64 v52; // r12
  __int64 v53; // rax
  _QWORD *v54; // rdx
  _QWORD *v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r14
  _BYTE *v62; // r13
  __int64 v63; // rsi
  unsigned __int64 v64; // r15
  __int64 v65; // rcx
  __int64 v66; // rcx
  const char *v67; // rsi
  __int64 v68; // r15
  char v69; // al
  __int64 v70; // rdi
  __int64 v71; // rax
  _BYTE *v72; // rdx
  char v73; // cl
  char result; // al
  __int64 *v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rbx
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rcx
  _BYTE *v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // rax
  const char *v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  _QWORD *v90; // rcx
  _QWORD *v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rdi
  _QWORD *v95; // rsi
  _QWORD *v96; // rsi
  __int64 v97; // [rsp+20h] [rbp-60h]
  __int64 v98; // [rsp+28h] [rbp-58h]
  _BYTE v99[856]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v100[856]; // [rsp+390h] [rbp+310h] BYREF
  _QWORD v101[107]; // [rsp+6E8h] [rbp+668h] BYREF
  _BYTE v102[136]; // [rsp+A40h] [rbp+9C0h] BYREF
  _OWORD v103[53]; // [rsp+AC8h] [rbp+A48h] BYREF
  _QWORD v104[107]; // [rsp+E20h] [rbp+DA0h] BYREF
  char *v105; // [rsp+1178h] [rbp+10F8h] BYREF
  __int64 v106; // [rsp+1180h] [rbp+1100h]
  signed __int64 v107; // [rsp+1188h] [rbp+1108h]
  _BYTE v108[160]; // [rsp+14D0h] [rbp+1450h] BYREF
  const char *v109; // [rsp+1570h] [rbp+14F0h] BYREF
  __int64 v110; // [rsp+1578h] [rbp+14F8h]
  const char *v111; // [rsp+1580h] [rbp+1500h]
  __int64 v112; // [rsp+1588h] [rbp+1508h]
  __int64 v113; // [rsp+1590h] [rbp+1510h]
  _QWORD v114[107]; // [rsp+1598h] [rbp+1518h] BYREF
  __int128 v115; // [rsp+18F0h] [rbp+1870h] BYREF
  __int64 v116; // [rsp+1900h] [rbp+1880h]
  __int64 v117; // [rsp+1908h] [rbp+1888h]
  _QWORD *v118; // [rsp+1910h] [rbp+1890h]
  _OWORD v119[54]; // [rsp+1918h] [rbp+1898h] BYREF
  const char *v120; // [rsp+1C78h] [rbp+1BF8h] BYREF
  __int64 v121; // [rsp+1C80h] [rbp+1C00h]
  const char *v122; // [rsp+1C88h] [rbp+1C08h]
  __int64 v123; // [rsp+1C90h] [rbp+1C10h]
  _BYTE v124[24]; // [rsp+1C98h] [rbp+1C18h] BYREF
  __int128 v125; // [rsp+1CB0h] [rbp+1C30h]
  __int128 v126; // [rsp+1CC0h] [rbp+1C40h]
  __int128 v127; // [rsp+1CD0h] [rbp+1C50h]
  __int128 v128; // [rsp+1CE0h] [rbp+1C60h]
  __int128 v129; // [rsp+1CF0h] [rbp+1C70h]
  __int128 v130; // [rsp+1D00h] [rbp+1C80h]
  _QWORD v131[2]; // [rsp+1FF8h] [rbp+1F78h] BYREF
  __int64 v132; // [rsp+2008h] [rbp+1F88h] BYREF
  char v133; // [rsp+2010h] [rbp+1F90h]
  char v134; // [rsp+2011h] [rbp+1F91h]
  int v135; // [rsp+2012h] [rbp+1F92h]
  __int16 v136; // [rsp+2016h] [rbp+1F96h]
  __int64 v137; // [rsp+2018h] [rbp+1F98h]
  __int64 v138; // [rsp+2020h] [rbp+1FA0h]
  _BYTE *v139; // [rsp+2028h] [rbp+1FA8h]
  __int64 v140; // [rsp+2030h] [rbp+1FB0h]
  __int64 v141; // [rsp+2038h] [rbp+1FB8h]
  _BYTE *v142; // [rsp+2040h] [rbp+1FC0h]
  __int64 v143; // [rsp+2048h] [rbp+1FC8h]
  _BYTE *v144; // [rsp+2050h] [rbp+1FD0h]
  __int64 v145; // [rsp+2058h] [rbp+1FD8h]
  _BYTE *v146; // [rsp+2060h] [rbp+1FE0h]
  _BYTE *v147; // [rsp+2068h] [rbp+1FE8h]
  _BYTE *v148; // [rsp+2070h] [rbp+1FF0h]
  _BYTE *v149; // [rsp+2078h] [rbp+1FF8h]
  __int64 v150; // [rsp+2080h] [rbp+2000h]
  __int64 *v151; // [rsp+2088h] [rbp+2008h]
  __int64 v152; // [rsp+2090h] [rbp+2010h]
  char v153; // [rsp+209Fh] [rbp+201Fh] BYREF
  __int64 v154; // [rsp+20A0h] [rbp+2020h]
  _QWORD *v155; // [rsp+20A8h] [rbp+2028h]
  _BYTE *v156; // [rsp+20B0h] [rbp+2030h]
  _BYTE *v157; // [rsp+20B8h] [rbp+2038h]
  _QWORD *v158; // [rsp+20C0h] [rbp+2040h]
  _BYTE *v159; // [rsp+20C8h] [rbp+2048h]
  __int64 v160; // [rsp+20D0h] [rbp+2050h]
  _BYTE *v161; // [rsp+20D8h] [rbp+2058h]
  _BYTE *v162; // [rsp+20E0h] [rbp+2060h]
  const char *v163; // [rsp+20E8h] [rbp+2068h]
  _QWORD *v164; // [rsp+20F0h] [rbp+2070h]
  __int64 v165; // [rsp+20F8h] [rbp+2078h]
  _QWORD *v166; // [rsp+2100h] [rbp+2080h]
  __int64 v167; // [rsp+2108h] [rbp+2088h]
  char v168; // [rsp+2116h] [rbp+2096h]
  char v169; // [rsp+2117h] [rbp+2097h]
  _BYTE *v170; // [rsp+2118h] [rbp+2098h]
  __int64 v171; // [rsp+2120h] [rbp+20A0h]

  v171 = -2;
  v4 = a2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 5600);
  v167 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 5601) = 257;
      *(_BYTE *)(a1 + 5603) = 1;
      v7 = a1 + 2992;
      sub_141684120(a1 + 2992, a1 + 392, 2600);
      switch ( *(_BYTE *)(v5 + 5584) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_108;
        case 2:
          goto LABEL_107;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 2992;
      switch ( *(_BYTE *)(a1 + 5584) )
      {
        case 0:
LABEL_4:
          v164 = v4;
          v114[1] = 0;
          v109 = aLoadSnapshot;
          v110 = 13;
          v111 = aApp_2;
          v112 = 3;
          v165 = v7;
          v113 = v7;
          v163 = (const char *)(v5 + 3512);
          v114[0] = v5 + 3512;
          sub_1401C3650((__int64)&v120, (__int64)&v109);
          v8 = *(unsigned int *)((char *)&v121 + 2) | ((unsigned __int64)HIWORD(v121) << 32);
          v9 = v121;
          LOBYTE(v4) = BYTE1(v121);
          v10 = (__int64)v122;
          v11 = v123;
          if ( v120 == (const char *)-1LL )
          {
            v170 = *(_BYTE **)v124;
          }
          else
          {
            v119[6] = v130;
            v119[5] = v129;
            v119[4] = v128;
            v119[3] = v127;
            v119[2] = v126;
            v119[1] = v125;
            v119[0] = *(_OWORD *)&v124[8];
            *(_DWORD *)((char *)&v115 + 10) = *(_DWORD *)((char *)&v121 + 2);
            HIWORD(v115) = WORD2(v8);
            v116 = (__int64)v122;
            v117 = v123;
            v118 = *(_QWORD **)v124;
            *(_QWORD *)&v115 = v120;
            WORD4(v115) = v121;
            *(_QWORD *)&v124[16] = 0;
            v120 = aLoadSnapshot;
            v121 = 13;
            v122 = aLocalonly;
            v123 = 9;
            *(_QWORD *)v124 = v165;
            *(_QWORD *)&v124[8] = v163;
            sub_1401BCE80(&v109, &v120);
            v9 = (char)v109;
            v12 = BYTE1(v109);
            if ( (_BYTE)v109 == 0xFF )
            {
              *(_QWORD *)&v124[16] = 0;
              v120 = aLoadSnapshot;
              v121 = 13;
              v122 = aForcemetadata;
              v123 = 13;
              *(_QWORD *)v124 = v165;
              *(_QWORD *)&v124[8] = v163;
              sub_140974DE0(&v109, &v120);
              v9 = (char)v109;
              LOBYTE(v4) = BYTE1(v109);
              if ( (_BYTE)v109 == 0xFF )
              {
                v5 = v167;
                v94 = v167 + 3536;
                sub_141684120(v167 + 3536, &v115, 152);
                *(_BYTE *)(v5 + 3688) = v12;
                *(_BYTE *)(v5 + 3689) = (_BYTE)v4;
                *(_BYTE *)(v5 + 3690) = 0;
                v16 = v5 + 4216;
                sub_141684120(v5 + 4216, v94, 680);
                v15 = (_BYTE *)(v5 + 5576);
                *(_BYTE *)(v5 + 5576) = 0;
                v7 = v165;
                v4 = (char *)v164;
LABEL_8:
                v17 = (const char *)(v5 + 4896);
                sub_141684120(v5 + 4896, v16, 680);
                switch ( *(_BYTE *)(v5 + 5050) )
                {
                  case 0:
                    goto LABEL_10;
                  case 1:
                    goto LABEL_112;
                  case 2:
                    goto LABEL_111;
                  case 3:
                    goto LABEL_15;
                  case 4:
                    goto LABEL_22;
                }
              }
              v36 = *(unsigned int *)((char *)&v109 + 2);
              v37 = HIWORD(v109);
              v10 = v110;
              v11 = (__int64)v111;
              v170 = (_BYTE *)v112;
              sub_140014150(&v115);
              v8 = v36 | (v37 << 32);
            }
            else
            {
              v13 = *(unsigned int *)((char *)&v109 + 2);
              v14 = HIWORD(v109);
              v10 = v110;
              v11 = (__int64)v111;
              v170 = (_BYTE *)v112;
              sub_140014150(&v115);
              v8 = v13 | (v14 << 32);
              LOBYTE(v4) = v12;
            }
          }
          sub_140BF0DE0(v165);
          if ( *(_QWORD *)v163 == -1 )
          {
            v44 = 1;
            goto LABEL_98;
          }
          v166 = (_QWORD *)(v167 + 3520);
          v41 = *(_BYTE **)(v167 + 3520);
          v161 = *(_BYTE **)(v167 + 3528);
          v164 = nullptr;
          v162 = v41;
          while ( v161 != (_BYTE *)v164 )
          {
            v164 = (_QWORD *)((char *)v164 + 1);
            v42 = v41 + 96;
            sub_1402C7520(v41, v38, v39, v40, v97);
            v41 = v42;
          }
          v43 = *(_QWORD *)v163;
          v44 = 1;
          if ( !*(_QWORD *)v163 )
            goto LABEL_98;
          goto LABEL_97;
        case 1:
LABEL_108:
          v165 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_107:
          v165 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = (_BYTE *)(v5 + 5576);
  v16 = v5 + 4216;
  switch ( *(_BYTE *)(v5 + 5576) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v165 = v7;
      v141 = v5 + 5576;
      v140 = v5 + 4216;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2:
      v165 = v7;
      v141 = v5 + 5576;
      v140 = v5 + 4216;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3:
      v17 = (const char *)(v5 + 4896);
      switch ( *(_BYTE *)(v5 + 5050) )
      {
        case 0:
LABEL_10:
          v152 = v16;
          v161 = v15;
          *(_BYTE *)(v5 + 5051) = 1;
          v18 = (_BYTE *)(v5 + 5056);
          sub_141684120(v5 + 5056, v17, 152);
          v19 = *(_BYTE *)(v5 + 5048) == 1;
          v165 = v7;
          v163 = v17;
          if ( !v19 )
          {
            v164 = v4;
            v45 = *(_BYTE *)(v5 + 5049);
            *(_BYTE *)(v5 + 5051) = 0;
            v35 = v45 & 1;
            sub_141684120(v5 + 5056, v17, 152);
            v33 = "full";
            *(_QWORD *)(v5 + 5208) = "full";
            *(_QWORD *)(v5 + 5216) = 4;
            *(_BYTE *)(v5 + 5568) = v35;
            v31 = (_BYTE *)(v5 + 5569);
            *(_BYTE *)(v5 + 5569) = 0;
            v34 = 4;
LABEL_34:
            sub_141684120(v5 + 5224, v18, 152);
            *(_QWORD *)(v5 + 5376) = v33;
            *(_QWORD *)(v5 + 5384) = v34;
            v149 = v31;
            v170 = v18;
            v148 = v18;
            sub_1401C50B0(&v120, v5 + 5224);
            v47 = v167;
            v48 = *(volatile signed __int64 **)(v167 + 5360);
            v49 = _InterlockedIncrement64(v48);
            if ( (v49 < 0) ^ v46 | (v49 == 0)
              || (v50 = *(volatile signed __int64 **)(v47 + 5368),
                  v51 = _InterlockedIncrement64(v50),
                  (v51 < 0) ^ v46 | (v51 == 0)) )
            {
LABEL_118:
              BUG();
            }
            v162 = v31;
            sub_141684120(v102, &v120, 136);
            v52 = v47 + 5392;
            sub_141684120(v47 + 5392, v102, 136);
            *(_QWORD *)(v47 + 5528) = v48;
            *(_QWORD *)(v47 + 5536) = v50;
            *(_BYTE *)(v47 + 5544) = v35;
            v166 = (_QWORD *)(v47 + 5560);
            *(_BYTE *)(v47 + 5560) = 0;
LABEL_39:
            v160 = v52;
            sub_141684120(v108, v52, 160);
            v54 = off_141EC8710;
            v55 = v164;
            if ( *((_DWORD *)off_141EC8710 + 24) )
            {
              v168 = 1;
              v95 = off_141EC8710;
              sub_1416984A3(off_141EC8710);
              v54 = v95;
            }
            if ( *((_DWORD *)v54 + 4) == 2 )
            {
              v56 = 704;
              if ( *(_BYTE *)v54 )
                v56 = 472;
              v57 = v54[1] + v56;
              v168 = 0;
              v58 = sub_14089C7B0(v57, (__int64)v54, (__int64)v108, (__int64)&off_1417642A8);
            }
            else
            {
              v59 = 704;
              if ( *((_BYTE *)v54 + 64) )
                v59 = 472;
              v60 = v54[9] + v59;
              v168 = 0;
              v58 = sub_14089C7B0(v60, (__int64)(v54 + 8), (__int64)v108, (__int64)&off_141764290);
            }
            v5 = v167;
            *(_QWORD *)(v167 + 5552) = v58;
LABEL_49:
            v151 = (__int64 *)(v5 + 5552);
            sub_140AFFB00(&v120, (_QWORD *)(v5 + 5552), v55);
            v61 = (__int64)v120;
            if ( v120 == (const char *)-3LL )
            {
              *(_BYTE *)v166 = 3;
              *v162 = 3;
              v69 = 4;
              goto LABEL_68;
            }
            v62 = v162;
            if ( (_DWORD)v120 == -2 )
            {
              v63 = v121;
              v8 = (signed __int64)v122;
              v64 = 0x800000000000000CuLL;
              v164 = (_QWORD *)v123;
            }
            else
            {
              v64 = v121;
              v63 = (__int64)v122;
              v8 = v123;
              v164 = *(_QWORD **)v124;
              sub_141684120(v104, &v124[8], 856);
            }
            v75 = v151;
            sub_141684120(v103, v104, 856);
            v76 = *v75;
            v157 = v62;
            v156 = v170;
            v155 = v166;
            v154 = v160;
            if ( (unsigned __int8)sub_1412F2A80(v76) )
            {
              v157 = v62;
              v156 = v170;
              v155 = v166;
              v154 = v160;
              sub_1412E7580(v76);
            }
            if ( (_DWORD)v61 == -2 )
            {
              v120 = (const char *)v64;
              v121 = v63;
              v122 = (const char *)v8;
              v123 = (__int64)v164;
              *(_OWORD *)v124 = v103[0];
              v131[0] = &v120;
              v131[1] = sub_141230630;
              sub_14149C0F0(v104, &unk_1417B8CB0, v131);
              v62 = v162;
              v157 = v162;
              v156 = v170;
              v155 = v166;
              v154 = v160;
              sub_140BF0F60(&v120);
              v64 = v104[0];
              v77 = v104[1];
              v8 = v104[2];
              *(_BYTE *)v166 = 1;
              v78 = v167;
            }
            else
            {
              v77 = v63;
              sub_141684120(&v105, v103, 856);
              *(_BYTE *)v166 = 1;
              v78 = v167;
              if ( (_DWORD)v61 != -1 )
              {
                v118 = v164;
                sub_141684120(v119, &v105, 856);
                *((_QWORD *)&v115 + 1) = v64;
                v116 = v77;
                v117 = v8;
                *(_QWORD *)&v115 = v61;
                sub_1403EE240(v78 + 5224, (__int64)&v115, *(_QWORD *)(v78 + 5376), *(_QWORD *)(v78 + 5384), 0, v98);
                sub_141684120(v101, &v105, 856);
                v62 = v162;
                v147 = v162;
                v146 = v170;
                sub_140014150(v78 + 5224);
                v67 = (const char *)v77;
LABEL_77:
                sub_141684120(v100, v101, 856);
                *v62 = 1;
                v4 = (char *)v64;
                v68 = (__int64)v164;
                goto LABEL_78;
              }
            }
            v147 = v62;
            v146 = v170;
            sub_140014150(v78 + 5224);
            v67 = (const char *)v77;
            v61 = -1;
            goto LABEL_77;
          }
          sub_1401C50B0(&v120, v5 + 5056);
          v21 = v167;
          v22 = *(volatile signed __int64 **)(v167 + 5192);
          v23 = _InterlockedIncrement64(v22);
          if ( (v23 < 0) ^ v20 | (v23 == 0) )
            goto LABEL_118;
          v24 = *(volatile signed __int64 **)(v21 + 5200);
          v25 = _InterlockedIncrement64(v24);
          if ( (v25 < 0) ^ v20 | (v25 == 0) )
            goto LABEL_118;
          sub_141684120(v104, &v120, 136);
          v26 = (_QWORD *)(v21 + 5208);
          sub_141684120(v21 + 5208, v104, 136);
          *(_QWORD *)(v21 + 5344) = v22;
          *(_QWORD *)(v21 + 5352) = v24;
          v170 = (_BYTE *)(v21 + 5368);
          *(_BYTE *)(v21 + 5368) = 0;
LABEL_16:
          v166 = v26;
          sub_141684120(v103, v26, 152);
          v27 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v169 = 1;
            v96 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v27 = v96;
          }
          if ( *((_DWORD *)v27 + 4) == 2 )
          {
            v28 = 704;
            if ( *(_BYTE *)v27 )
              v28 = 472;
            v29 = v27[1] + v28;
            v169 = 0;
            v30 = sub_14089B900(v29, (__int64)v27, (__int64)v103, (__int64)&off_1417642A8);
          }
          else
          {
            v65 = 704;
            if ( *((_BYTE *)v27 + 64) )
              v65 = 472;
            v66 = v27[9] + v65;
            v169 = 0;
            v30 = sub_14089B900(v66, (__int64)(v27 + 8), (__int64)v103, (__int64)&off_141764290);
          }
          v5 = v167;
          *(_QWORD *)(v167 + 5360) = v30;
LABEL_56:
          v162 = (_BYTE *)(v5 + 5360);
          sub_140AFFB00(&v120, (_QWORD *)(v5 + 5360), v4);
          v61 = (__int64)v120;
          if ( v120 == (const char *)-3LL )
          {
            *v170 = 3;
            v69 = 3;
LABEL_68:
            v72 = (_BYTE *)v167;
            *(_BYTE *)(v167 + 5050) = v69;
            v72[5576] = 3;
            v72[5584] = 3;
            v73 = 3;
            result = 1;
            goto LABEL_99;
          }
          if ( (_DWORD)v120 == -2 )
          {
            v67 = (const char *)v121;
            v8 = (signed __int64)v122;
            v4 = (char *)0x800000000000000CLL;
            v68 = v123;
          }
          else
          {
            v4 = (char *)v121;
            v67 = v122;
            v8 = v123;
            v68 = *(_QWORD *)v124;
            sub_141684120(&v105, &v124[8], 856);
          }
          sub_141684120(&v115, &v105, 856);
          v70 = *(_QWORD *)v162;
          v159 = v170;
          v158 = v166;
          if ( (unsigned __int8)sub_1412F2A80(v70) )
          {
            v159 = v170;
            v158 = v166;
            sub_1412E7580(v70);
          }
          if ( (_DWORD)v61 == -2 )
          {
            v120 = v4;
            v121 = (__int64)v67;
            v122 = (const char *)v8;
            v123 = v68;
            *(_OWORD *)v124 = v115;
            v101[0] = &v120;
            v101[1] = sub_141230630;
            sub_14149C0F0(&v105, &unk_1417B8CB0, v101);
            v159 = v170;
            v158 = v166;
            sub_140BF0F60(&v120);
            v4 = v105;
            v67 = (const char *)v106;
            v8 = v107;
            v61 = -1;
          }
          else
          {
            sub_141684120(v100, &v115, 856);
          }
          v71 = v167;
          *(_BYTE *)(v167 + 5368) = 1;
          sub_140014150(v71 + 5056);
LABEL_78:
          v79 = v167;
          *(_BYTE *)(v167 + 5051) = 0;
          sub_141684120(v99, v100, 856);
          *(_BYTE *)(v79 + 5050) = 1;
          sub_140BEC2C0(v163);
          if ( (_DWORD)v61 != -1 )
          {
            sub_141684120(v114, v99, 856);
            v109 = (const char *)v61;
            v110 = (__int64)v4;
            v111 = v67;
            v112 = v8;
            v113 = v68;
            sub_140B064D0(&v120, &v109);
            v8 = *(unsigned int *)((char *)&v121 + 2) | ((unsigned __int64)HIWORD(v121) << 32);
            v9 = v121;
            LOBYTE(v4) = BYTE1(v121);
            v10 = (__int64)v122;
            v11 = v123;
            if ( v120 == (const char *)-1LL )
            {
              v170 = *(_BYTE **)v124;
              v44 = 0;
            }
            else
            {
              v105 = nullptr;
              v106 = 1;
              v107 = 0;
              v116 = 1610612768;
              *(_QWORD *)&v115 = &v105;
              *((_QWORD *)&v115 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v120, &v115, *(_QWORD *)v124) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v153,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v10 = (__int64)v105;
              v11 = v106;
              v81 = (_BYTE *)v107;
              sub_140BF0F60(&v120);
              v170 = v81;
              v44 = 1;
              v9 = 3;
            }
            v83 = v165;
            goto LABEL_92;
          }
          if ( v8 < 0 )
          {
            v82 = 0;
            goto LABEL_84;
          }
          if ( !v8 )
          {
            v11 = 1;
            v83 = v165;
            if ( !v4 )
              goto LABEL_91;
            goto LABEL_90;
          }
          nullsub_1(v80);
          v82 = 1;
          v84 = sub_140001650(v8, 1);
          if ( !v84 )
          {
LABEL_84:
            v164 = v4;
            v163 = v67;
            sub_1416C2D4B(v82, v8);
          }
          v11 = v84;
          sub_141684120(v84, v67, v8);
          v83 = v165;
          if ( v4 )
          {
LABEL_90:
            v85 = v67;
            v86 = v83;
            sub_140001660(v85, v4, 1);
            v83 = v86;
          }
LABEL_91:
          v44 = 1;
          v9 = 3;
          v170 = (_BYTE *)v8;
          v10 = v8;
LABEL_92:
          *v161 = 1;
          sub_140BF0DE0(v83);
          if ( *(_QWORD *)(v167 + 3512) != -1 )
          {
            v166 = (_QWORD *)(v167 + 3520);
            v90 = *(_QWORD **)(v167 + 3520);
            v161 = *(_BYTE **)(v167 + 3528);
            v164 = nullptr;
            v163 = (const char *)v90;
            while ( v161 != (_BYTE *)v164 )
            {
              v164 = (_QWORD *)((char *)v164 + 1);
              v91 = v90 + 12;
              sub_1402C7520(v90, v87, v88, v89, v97);
              v90 = v91;
            }
            v43 = *(_QWORD *)(v167 + 3512);
            if ( v43 )
LABEL_97:
              sub_140001660(*v166, 96 * v43, 8);
          }
LABEL_98:
          *(_BYTE *)(v167 + 5584) = 1;
          sub_140BE3D80(v165);
          v135 = v8;
          v136 = WORD2(v8);
          v137 = v10;
          v138 = v11;
          v139 = v170;
          v133 = v9;
          v134 = (char)v4;
          v132 = v44;
          v92 = v167;
          *(_BYTE *)(v167 + 5603) = 0;
          sub_141684120(&v120, v92, 360);
          *(_BYTE *)(v92 + 5602) = 0;
          v93 = *(_QWORD *)(v92 + 384);
          *(_BYTE *)(v92 + 5601) = 0;
          v116 = *(_QWORD *)(v92 + 376);
          v115 = *(_OWORD *)(v92 + 360);
          sub_14047E370(
            (unsigned int)&v120,
            v93,
            (unsigned int)&v132,
            (unsigned int)&v115,
            *(_DWORD *)(v92 + 5592),
            *(_DWORD *)(v92 + 5596));
          v73 = 1;
          result = 0;
          v72 = (_BYTE *)v167;
LABEL_99:
          v72[5600] = v73;
          return result;
        case 1:
LABEL_112:
          v163 = v17;
          v152 = v16;
          v161 = v15;
          v165 = v7;
          sub_1416C3400(&off_1417BB2C0, a2, a3, a4);
        case 2:
LABEL_111:
          v163 = v17;
          v152 = v16;
          v161 = v15;
          v165 = v7;
          sub_1416C3420(&off_1417BB2C0, a2, a3, a4);
        case 3:
LABEL_15:
          v163 = v17;
          v152 = v16;
          v161 = v15;
          v165 = v7;
          v170 = (_BYTE *)(v5 + 5368);
          v26 = (_QWORD *)(v5 + 5208);
          switch ( *(_BYTE *)(v5 + 5368) )
          {
            case 0:
              goto LABEL_16;
            case 1:
              JUMPOUT(0x140CB7381LL);
            case 2:
              v150 = v5 + 5208;
              sub_1416C3420(&off_1417B8048, a2, a3, a4);
            case 3:
              v166 = (_QWORD *)(v5 + 5208);
              goto LABEL_56;
          }
        case 4:
LABEL_22:
          v164 = v4;
          v31 = (_BYTE *)(v5 + 5569);
          v32 = *(unsigned __int8 *)(v5 + 5569);
          v170 = (_BYTE *)(v5 + 5056);
          v165 = v7;
          v161 = v15;
          v152 = v16;
          v163 = v17;
          switch ( v32 )
          {
            case 0LL:
              v33 = *(const char **)(v5 + 5208);
              v34 = *(_QWORD *)(v5 + 5216);
              v35 = *(_BYTE *)(v5 + 5568);
              v18 = (_BYTE *)(v5 + 5056);
              break;
            case 1LL:
              v142 = v170;
              sub_1416C3400(&off_1417BB390, a2, a3, a4);
            case 2LL:
              v142 = v170;
              sub_1416C3420(&off_1417BB390, a2, a3, a4);
            case 3LL:
              v166 = (_QWORD *)(v5 + 5560);
              v53 = *(unsigned __int8 *)(v5 + 5560);
              v52 = v5 + 5392;
              v162 = (_BYTE *)(v5 + 5569);
              switch ( v53 )
              {
                case 0LL:
                  goto LABEL_39;
                case 1LL:
                  v145 = v5 + 5569;
                  v144 = v170;
                  v143 = v5 + 5392;
                  sub_1416C3400(&off_1417B8048, a2, a3, a4);
                case 2LL:
                  v145 = v5 + 5569;
                  v144 = v170;
                  v143 = v5 + 5392;
                  sub_1416C3420(&off_1417B8048, a2, a3, a4);
                case 3LL:
                  v160 = v5 + 5392;
                  v55 = v164;
                  goto LABEL_49;
              }
          }
          goto LABEL_34;
      }
  }
}