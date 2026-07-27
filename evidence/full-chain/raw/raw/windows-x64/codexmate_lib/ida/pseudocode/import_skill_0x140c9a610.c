// module: codexmate_lib
// addr: 0x140c9a610
// name: import_skill
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = import_skill | mapped via command-name string xref (win-native, ground-truth)
char __fastcall import_skill(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rdi
  char v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  volatile void *v17; // rdi
  __int64 v18; // rbx
  __int64 *v19; // r15
  char *v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // r14
  int v24; // r13d
  unsigned int v25; // r12d
  __int64 v26; // rdi
  PVOID v27; // rcx
  char v28; // al
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned __int8 v40; // bl
  __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rcx
  PVOID v44; // rcx
  char v45; // al
  __int64 v46; // rax
  __int128 v47; // xmm0
  __int128 v48; // xmm0
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdi
  char v56; // bl
  unsigned __int64 v57; // r15
  __int64 v58; // r13
  char v59; // cl
  char result; // al
  __int64 v61; // r13
  __int64 v62; // rsi
  __int64 v63; // r8
  int v64; // ebx
  unsigned int v65; // esi
  __int64 v66; // rdi
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
  __int64 v96; // r15
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rbx
  __int64 v100; // r8
  int v101; // ebx
  unsigned int v102; // esi
  __int64 v103; // rdi
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
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rax
  _QWORD *v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rbx
  char *v137; // rcx
  char *v138; // r13
  __int64 v139; // rdi
  __int64 v140; // rdx
  int v141; // eax
  _QWORD *v142; // rdi
  char v143; // al
  _BYTE v144[384]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v145[48]; // [rsp+1B8h] [rbp+138h] BYREF
  _OWORD v146[19]; // [rsp+338h] [rbp+2B8h] BYREF
  _QWORD v147[3]; // [rsp+468h] [rbp+3E8h] BYREF
  char v148; // [rsp+480h] [rbp+400h]
  _BYTE v149[7]; // [rsp+481h] [rbp+401h]
  unsigned __int64 v150; // [rsp+488h] [rbp+408h]
  char v151[304]; // [rsp+490h] [rbp+410h] BYREF
  __int64 v152; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v153; // [rsp+5C8h] [rbp+548h]
  __int64 v154; // [rsp+5D0h] [rbp+550h]
  _BYTE v155[24]; // [rsp+740h] [rbp+6C0h] BYREF
  __int64 v156; // [rsp+758h] [rbp+6D8h]
  unsigned __int64 v157; // [rsp+760h] [rbp+6E0h]
  char v158[384]; // [rsp+768h] [rbp+6E8h] BYREF
  _QWORD *v159; // [rsp+8E8h] [rbp+868h] BYREF
  __int64 v160; // [rsp+8F0h] [rbp+870h]
  __int64 v161; // [rsp+8F8h] [rbp+878h]
  __int64 v162; // [rsp+A18h] [rbp+998h] BYREF
  char v163; // [rsp+A20h] [rbp+9A0h]
  int v164; // [rsp+A21h] [rbp+9A1h]
  __int16 v165; // [rsp+A25h] [rbp+9A5h]
  char v166; // [rsp+A27h] [rbp+9A7h]
  __int64 v167; // [rsp+A28h] [rbp+9A8h]
  __int64 v168; // [rsp+A30h] [rbp+9B0h]
  __int64 v169; // [rsp+A38h] [rbp+9B8h]
  __int128 v170; // [rsp+A40h] [rbp+9C0h] BYREF
  __int128 v171; // [rsp+A50h] [rbp+9D0h] BYREF
  __int128 v172; // [rsp+A60h] [rbp+9E0h] BYREF
  __int128 v173; // [rsp+A70h] [rbp+9F0h]
  __int128 v174; // [rsp+A80h] [rbp+A00h]
  __int128 v175; // [rsp+A90h] [rbp+A10h]
  __int64 v176; // [rsp+BE8h] [rbp+B68h]
  __int64 v177; // [rsp+BF0h] [rbp+B70h]
  __int64 v178; // [rsp+BF8h] [rbp+B78h]
  __int64 v179; // [rsp+C00h] [rbp+B80h]
  _QWORD *v180; // [rsp+C08h] [rbp+B88h]
  _DWORD v181[2]; // [rsp+C10h] [rbp+B90h]
  _QWORD *v182; // [rsp+C18h] [rbp+B98h] BYREF
  __int64 v183; // [rsp+C20h] [rbp+BA0h]
  __int64 v184; // [rsp+C28h] [rbp+BA8h]
  __int64 v185; // [rsp+C30h] [rbp+BB0h]
  __int64 v186; // [rsp+C38h] [rbp+BB8h]
  char *v187; // [rsp+C40h] [rbp+BC0h]
  __int64 v188; // [rsp+C48h] [rbp+BC8h]
  __int64 v189; // [rsp+C50h] [rbp+BD0h]
  __int64 v190; // [rsp+C58h] [rbp+BD8h]
  _QWORD *v191; // [rsp+C60h] [rbp+BE0h]
  PVOID Address; // [rsp+C68h] [rbp+BE8h]
  __int64 v193; // [rsp+C70h] [rbp+BF0h]
  __int64 v194; // [rsp+C78h] [rbp+BF8h]
  __int64 v195; // [rsp+C80h] [rbp+C00h]
  char v196; // [rsp+C8Eh] [rbp+C0Eh]
  char v197; // [rsp+C8Fh] [rbp+C0Fh] BYREF
  __int64 v198; // [rsp+C90h] [rbp+C10h]

  v198 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 7808);
  v194 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 7809) = 257;
      *(_BYTE *)(a1 + 7811) = 1;
      v7 = a1 + 4096;
      sub_141684120(a1 + 4096, a1 + 392, 3704);
      switch ( *(_BYTE *)(v5 + 7792) )
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
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 4096;
      switch ( *(_BYTE *)(a1 + 7792) )
      {
        case 0:
LABEL_4:
          v8 = v5 + 4616;
          *(_QWORD *)&v173 = 0;
          *(_QWORD *)&v170 = aImportSkill;
          *((_QWORD *)&v170 + 1) = 12;
          *(_QWORD *)&v171 = aRepo_0;
          *((_QWORD *)&v171 + 1) = 4;
          v190 = v7;
          *(_QWORD *)&v172 = v7;
          *((_QWORD *)&v172 + 1) = v5 + 4616;
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4608) + 16LL));
          Address = (PVOID)(v5 + 4616);
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(v155, &v170, &v171);
          v10 = v155[0];
          if ( v155[0] == 0xFF )
          {
            v9 = *(_QWORD *)&v155[8];
LABEL_5:
            *(_QWORD *)&v173 = 0;
            *(_QWORD *)&v170 = aImportSkill;
            *((_QWORD *)&v170 + 1) = 12;
            *(_QWORD *)&v171 = aPath_10;
            *((_QWORD *)&v171 + 1) = 4;
            *(_QWORD *)&v172 = v190;
            *((_QWORD *)&v172 + 1) = v8;
            sub_1409757B0(v155, &v170);
            v10 = v155[0];
            if ( v155[0] == 0xFF )
            {
              v11 = v156;
              v5 = v194;
              v12 = v194 + 4640;
              v13 = *(_OWORD *)&v155[8];
              *(_QWORD *)(v194 + 4664) = v9;
              *(_OWORD *)(v5 + 4640) = v13;
              *(_QWORD *)(v5 + 4656) = v11;
              *(_BYTE *)(v5 + 5680) = 0;
              v14 = v5 + 5688;
              sub_141684120(v5 + 5688, v12, 1048);
              v180 = (_QWORD *)(v5 + 7784);
              *(_BYTE *)(v5 + 7784) = 0;
              v7 = v190;
LABEL_8:
              v190 = v7;
              v179 = v5 + 6736;
              v176 = v14;
              sub_141684120(v5 + 6736, v14, 1048);
              switch ( *(_BYTE *)(v5 + 7776) )
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
          v34 = *(_QWORD *)&v155[8];
          v35 = *(_QWORD *)&v155[16];
          v36 = v156;
          sub_140BF0DE0(v190);
          if ( *(_QWORD *)Address == -1 )
          {
            v40 = 1;
            v41 = v194;
            goto LABEL_201;
          }
          v180 = (_QWORD *)(v194 + 4624);
          v37 = *(_QWORD *)(v194 + 4624);
          v193 = *(_QWORD *)(v194 + 4632);
          v195 = 0;
          v179 = v37;
          while ( v193 != v195 )
          {
            ++v195;
            v38 = v37 + 96;
            sub_1402C7520();
            v37 = v38;
          }
          v39 = *(_QWORD *)Address;
          v40 = 1;
          v41 = v194;
          if ( !*(_QWORD *)Address )
            goto LABEL_201;
          goto LABEL_200;
        case 1:
LABEL_219:
          v190 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_218:
          v190 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = v5 + 7784;
  v16 = *(unsigned __int8 *)(v5 + 7784);
  v14 = v5 + 5688;
  v180 = (_QWORD *)(v5 + 7784);
  switch ( v16 )
  {
    case 0LL:
      goto LABEL_8;
    case 1LL:
      v190 = v7;
      v178 = v5 + 7784;
      v177 = v5 + 5688;
      sub_1416C3400(&off_1417B7B80, v15, a3, a4);
    case 2LL:
      v190 = v7;
      v178 = v5 + 7784;
      v177 = v5 + 5688;
      sub_1416C3420(&off_1417B7B80, v15, a3, a4);
    case 3LL:
      v176 = v5 + 5688;
      v190 = v7;
      v179 = v5 + 6736;
      switch ( *(_BYTE *)(v5 + 7776) )
      {
        case 0:
LABEL_10:
          v17 = *(volatile void **)(v5 + 6760);
          *(_QWORD *)(v5 + 6768) = v17;
          *(_BYTE *)(v5 + 7777) = 1;
          v195 = *(_QWORD *)(v5 + 6736);
          v193 = *(_QWORD *)(v5 + 6744);
          v18 = *(_QWORD *)(v5 + 6752);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) )
          {
            v186 = v195;
            v185 = v193;
            sub_1416C15B0(v17);
          }
          Address = (PVOID)v17;
          v19 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v186 = v195;
            v185 = v193;
            v141 = sub_1416C2250(a1, v15);
            LOBYTE(v141) = v141 ^ 1;
            LODWORD(v191) = v141;
            v20 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
            {
LABEL_30:
              Address = v20;
              sub_1407BC950(v194 + 6776, v20 + 8);
              if ( ((unsigned __int8)v191 & 1) == 0 )
              {
                if ( 2 * *v19 )
                {
                  v186 = v195;
                  v185 = v193;
                  if ( !(unsigned __int8)sub_1416C2250(v43, v42) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v44 = Address;
              v45 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v45 == 2 )
              {
                v186 = v195;
                v185 = v193;
                WakeByAddressSingle(v44);
              }
              v46 = v194;
              *(_BYTE *)(v194 + 7777) = 0;
              v47 = *(_OWORD *)(v46 + 7000);
              v171 = *(_OWORD *)(v46 + 7016);
              v170 = v47;
              v48 = *(_OWORD *)(v46 + 7224);
              v173 = *(_OWORD *)(v46 + 7240);
              v172 = v48;
              *(_QWORD *)&v174 = v195;
              *((_QWORD *)&v174 + 1) = v193;
              *(_QWORD *)&v175 = v18;
              v49 = off_141EC8710;
              if ( *((_DWORD *)off_141EC8710 + 24) )
              {
                v196 = 1;
                v142 = off_141EC8710;
                sub_1416984A3(off_141EC8710);
                v49 = v142;
              }
              if ( *((_DWORD *)v49 + 4) == 2 )
              {
                v50 = 704;
                if ( *(_BYTE *)v49 )
                  v50 = 472;
                v51 = v49[1] + v50;
                v196 = 0;
                v52 = sub_140898F60(v51, v49, &v170, &off_1417642A8);
              }
              else
              {
                v53 = 704;
                if ( *((_BYTE *)v49 + 64) )
                  v53 = 472;
                v54 = v49[9] + v53;
                v196 = 0;
                v52 = sub_140898F60(v54, v49 + 8, &v170, &off_141764290);
              }
              v5 = v194;
              *(_QWORD *)(v194 + 7768) = v52;
LABEL_44:
              Address = (PVOID)(v5 + 7768);
              sub_140B012C0(&v170, v5 + 7768, a2);
              v55 = v170;
              if ( (_QWORD)v170 == -2 )
              {
                v58 = v194;
                *(_BYTE *)(v194 + 7776) = 3;
              }
              else
              {
                if ( (_DWORD)v170 == -1 )
                {
                  v23 = *((_QWORD *)&v170 + 1);
                  v56 = v171;
                  LODWORD(v182) = *(_DWORD *)((char *)&v171 + 1);
                  *(_DWORD *)((char *)&v182 + 3) = DWORD1(v171);
                  v57 = 0x800000000000000CuLL;
                  v29 = *((_QWORD *)&v171 + 1);
                }
                else
                {
                  v57 = *((_QWORD *)&v170 + 1);
                  v23 = v171;
                  v56 = BYTE8(v171);
                  LODWORD(v182) = *(_DWORD *)((char *)&v171 + 9);
                  *(_DWORD *)((char *)&v182 + 3) = HIDWORD(v171);
                  v29 = v172;
                  sub_141684120(&v159, (char *)&v172 + 8, 304);
                }
                v61 = v193;
                v181[0] = (_DWORD)v182;
                *(_DWORD *)((char *)v181 + 3) = *(_DWORD *)((char *)&v182 + 3);
                sub_141684120(v146, &v159, 304);
                v62 = *(_QWORD *)Address;
                v189 = v195;
                v188 = v61;
                if ( (unsigned __int8)sub_1412F2A80(v62) )
                {
                  v189 = v195;
                  v188 = v61;
                  sub_1412E7580(v62);
                }
                if ( (_DWORD)v55 == 2 )
                {
                  *(_QWORD *)&v170 = v57;
                  *((_QWORD *)&v170 + 1) = v23;
                  LOBYTE(v171) = v56;
                  *(_DWORD *)((char *)&v171 + 1) = v181[0];
                  DWORD1(v171) = *(_DWORD *)((char *)v181 + 3);
                  *((_QWORD *)&v171 + 1) = v29;
                  v172 = v146[0];
                  v173 = v146[1];
                  v174 = v146[2];
                  v175 = v146[3];
                  v182 = nullptr;
                  v183 = 1;
                  v184 = 0;
                  v161 = 1610612768;
                  v159 = &v182;
                  v160 = (__int64)&off_1417C41C0;
                  if ( (unsigned __int8)sub_140B036A0(&v170, &v159) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v197,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v191 = v182;
                  v187 = (char *)v183;
                  LOBYTE(v23) = v184;
                  v64 = HIBYTE(v184);
                  v65 = *(unsigned __int16 *)((char *)&v184 + 5);
                  v66 = *(unsigned int *)((char *)&v184 + 1);
                  v189 = v195;
                  v188 = v193;
                  sub_140BF2F60(&v170);
                  goto LABEL_58;
                }
                if ( (_DWORD)v55 == -1 )
                {
                  *(_QWORD *)&v170 = v57;
                  *((_QWORD *)&v170 + 1) = v23;
                  LOBYTE(v171) = v56;
                  *(_DWORD *)((char *)&v171 + 1) = v181[0];
                  DWORD1(v171) = *(_DWORD *)((char *)v181 + 3);
                  *((_QWORD *)&v171 + 1) = v29;
                  v172 = v146[0];
                  v182 = nullptr;
                  v183 = 1;
                  v184 = 0;
                  v161 = 1610612768;
                  v159 = &v182;
                  v160 = (__int64)&off_1417C41C0;
                  if ( (unsigned __int8)sub_141230630(&v170, &v159, v63) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v197,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v191 = v182;
                  v187 = (char *)v183;
                  LOBYTE(v23) = v184;
                  v64 = HIBYTE(v184);
                  v65 = *(unsigned __int16 *)((char *)&v184 + 5);
                  v66 = *(unsigned int *)((char *)&v184 + 1);
                  v189 = v195;
                  v188 = v193;
                  sub_140BF0F60(&v170);
LABEL_58:
                  v30 = ((unsigned __int64)((v64 << 16) | v65) << 32) | v66;
                  v31 = v194;
                  v67 = *(_QWORD *)(v194 + 6776);
                  v32 = v179;
                  v33 = v195;
                  if ( v67 )
                    sub_140001660(*(_QWORD *)(v194 + 6784), v67, 1);
                  v68 = *(_QWORD *)(v31 + 6808);
                  if ( v68 )
                    sub_140001660(*(_QWORD *)(v31 + 6816), v68, 1);
                  v69 = *(_QWORD *)(v31 + 6840);
                  if ( v69 )
                    sub_140001660(*(_QWORD *)(v31 + 6848), v69, 1);
                  v70 = *(_QWORD *)(v31 + 6872);
                  if ( v70 )
                    sub_140001660(*(_QWORD *)(v31 + 6880), v70, 1);
                  v71 = *(_QWORD *)(v31 + 6904);
                  if ( v71 )
                    sub_140001660(*(_QWORD *)(v31 + 6912), v71, 1);
                  v72 = *(_QWORD *)(v31 + 7736);
                  if ( v72 != -1 && v72 )
                    sub_140001660(*(_QWORD *)(v31 + 7744), v72, 1);
                  v73 = *(_QWORD *)(v31 + 6936);
                  if ( v73 )
                    sub_140001660(*(_QWORD *)(v31 + 6944), v73, 1);
                  v74 = *(_QWORD *)(v31 + 6968);
                  if ( v74 )
                    sub_140001660(*(_QWORD *)(v31 + 6976), v74, 1);
                  v75 = *(_QWORD *)(v31 + 7032);
                  if ( v75 )
                    sub_140001660(*(_QWORD *)(v31 + 7040), v75, 1);
                  v76 = *(_QWORD *)(v31 + 7064);
                  if ( v76 )
                    sub_140001660(*(_QWORD *)(v31 + 7072), v76, 1);
                  v77 = *(_QWORD *)(v31 + 7096);
                  if ( v77 )
                    sub_140001660(*(_QWORD *)(v31 + 7104), v77, 1);
                  v78 = *(_QWORD *)(v31 + 7128);
                  if ( v78 )
                    sub_140001660(*(_QWORD *)(v31 + 7136), v78, 1);
                  v79 = *(_QWORD *)(v31 + 7160);
                  if ( v79 )
                    sub_140001660(*(_QWORD *)(v31 + 7168), v79, 1);
                  v80 = *(_QWORD *)(v31 + 7192);
                  if ( v80 )
                    sub_140001660(*(_QWORD *)(v31 + 7200), v80, 1);
                  v81 = *(_QWORD *)(v31 + 7256);
                  if ( v81 )
                    sub_140001660(*(_QWORD *)(v31 + 7264), v81, 1);
                  v82 = *(_QWORD *)(v31 + 7288);
                  if ( v82 )
                    sub_140001660(*(_QWORD *)(v31 + 7296), v82, 1);
                  v83 = *(_QWORD *)(v31 + 7320);
                  if ( v83 )
                    sub_140001660(*(_QWORD *)(v31 + 7328), v83, 1);
                  v84 = *(_QWORD *)(v31 + 7352);
                  if ( v84 )
                    sub_140001660(*(_QWORD *)(v31 + 7360), v84, 1);
                  v85 = *(_QWORD *)(v31 + 7384);
                  if ( v85 )
                    sub_140001660(*(_QWORD *)(v31 + 7392), v85, 1);
                  v86 = *(_QWORD *)(v31 + 7416);
                  if ( v86 )
                    sub_140001660(*(_QWORD *)(v31 + 7424), v86, 1);
                  v87 = *(_QWORD *)(v31 + 7448);
                  if ( v87 )
                    sub_140001660(*(_QWORD *)(v31 + 7456), v87, 1);
                  v88 = *(_QWORD *)(v31 + 7480);
                  if ( v88 )
                    sub_140001660(*(_QWORD *)(v31 + 7488), v88, 1);
                  v89 = *(_QWORD *)(v31 + 7512);
                  if ( v89 )
                    sub_140001660(*(_QWORD *)(v31 + 7520), v89, 1);
                  v90 = *(_QWORD *)(v31 + 7544);
                  if ( v90 )
                    sub_140001660(*(_QWORD *)(v31 + 7552), v90, 1);
                  v91 = *(_QWORD *)(v31 + 7576);
                  if ( v91 )
                    sub_140001660(*(_QWORD *)(v31 + 7584), v91, 1);
                  v92 = *(_QWORD *)(v31 + 7608);
                  if ( v92 )
                    sub_140001660(*(_QWORD *)(v31 + 7616), v92, 1);
                  v93 = *(_QWORD *)(v31 + 7640);
                  if ( v93 )
                    sub_140001660(*(_QWORD *)(v31 + 7648), v93, 1);
                  v94 = *(_QWORD *)(v31 + 7672);
                  if ( v94 )
                    sub_140001660(*(_QWORD *)(v31 + 7680), v94, 1);
                  v95 = *(_QWORD *)(v31 + 7704);
                  if ( v95 )
                    sub_140001660(*(_QWORD *)(v31 + 7712), v95, 1);
                  goto LABEL_117;
                }
                v150 = v29;
                sub_141684120(v151, v146, 304);
                v147[0] = v55;
                v147[1] = v57;
                v147[2] = v23;
                v148 = v56;
                *(_DWORD *)v149 = v181[0];
                *(_DWORD *)&v149[3] = *(_DWORD *)((char *)v181 + 3);
                v189 = v195;
                v188 = v61;
                sub_140ACA6E0(&v170, v147);
                v191 = *((_QWORD **)&v170 + 1);
                v96 = v170;
                v187 = (char *)v171;
                LOBYTE(v23) = BYTE8(v171);
                v101 = HIBYTE(v171);
                v102 = *(unsigned __int16 *)((char *)&v171 + 13);
                v103 = *(unsigned int *)((char *)&v171 + 9);
                v29 = v172;
                sub_141684120(v145, (char *)&v172 + 8, 384);
                v58 = v194;
                v104 = *(_QWORD *)(v194 + 6776);
                if ( v104 )
                  sub_140001660(*(_QWORD *)(v194 + 6784), v104, 1);
                v105 = *(_QWORD *)(v58 + 6808);
                if ( v105 )
                  sub_140001660(*(_QWORD *)(v58 + 6816), v105, 1);
                v106 = *(_QWORD *)(v58 + 6840);
                if ( v106 )
                  sub_140001660(*(_QWORD *)(v58 + 6848), v106, 1);
                v107 = *(_QWORD *)(v58 + 6872);
                if ( v107 )
                  sub_140001660(*(_QWORD *)(v58 + 6880), v107, 1);
                v108 = *(_QWORD *)(v58 + 6904);
                if ( v108 )
                  sub_140001660(*(_QWORD *)(v58 + 6912), v108, 1);
                v109 = *(_QWORD *)(v58 + 7736);
                if ( v109 != -1 && v109 )
                  sub_140001660(*(_QWORD *)(v58 + 7744), v109, 1);
                v110 = *(_QWORD *)(v58 + 6936);
                if ( v110 )
                  sub_140001660(*(_QWORD *)(v58 + 6944), v110, 1);
                v111 = *(_QWORD *)(v58 + 6968);
                if ( v111 )
                  sub_140001660(*(_QWORD *)(v58 + 6976), v111, 1);
                v112 = *(_QWORD *)(v58 + 7032);
                if ( v112 )
                  sub_140001660(*(_QWORD *)(v58 + 7040), v112, 1);
                v113 = *(_QWORD *)(v58 + 7064);
                if ( v113 )
                  sub_140001660(*(_QWORD *)(v58 + 7072), v113, 1);
                v114 = *(_QWORD *)(v58 + 7096);
                if ( v114 )
                  sub_140001660(*(_QWORD *)(v58 + 7104), v114, 1);
                v115 = *(_QWORD *)(v58 + 7128);
                if ( v115 )
                  sub_140001660(*(_QWORD *)(v58 + 7136), v115, 1);
                v116 = *(_QWORD *)(v58 + 7160);
                if ( v116 )
                  sub_140001660(*(_QWORD *)(v58 + 7168), v116, 1);
                v117 = *(_QWORD *)(v58 + 7192);
                if ( v117 )
                  sub_140001660(*(_QWORD *)(v58 + 7200), v117, 1);
                v118 = *(_QWORD *)(v58 + 7256);
                if ( v118 )
                  sub_140001660(*(_QWORD *)(v58 + 7264), v118, 1);
                v119 = *(_QWORD *)(v58 + 7288);
                if ( v119 )
                  sub_140001660(*(_QWORD *)(v58 + 7296), v119, 1);
                v120 = *(_QWORD *)(v58 + 7320);
                if ( v120 )
                  sub_140001660(*(_QWORD *)(v58 + 7328), v120, 1);
                v121 = *(_QWORD *)(v58 + 7352);
                if ( v121 )
                  sub_140001660(*(_QWORD *)(v58 + 7360), v121, 1);
                v122 = *(_QWORD *)(v58 + 7384);
                if ( v122 )
                  sub_140001660(*(_QWORD *)(v58 + 7392), v122, 1);
                v123 = *(_QWORD *)(v58 + 7416);
                if ( v123 )
                  sub_140001660(*(_QWORD *)(v58 + 7424), v123, 1);
                v124 = *(_QWORD *)(v58 + 7448);
                if ( v124 )
                  sub_140001660(*(_QWORD *)(v58 + 7456), v124, 1);
                v125 = *(_QWORD *)(v58 + 7480);
                if ( v125 )
                  sub_140001660(*(_QWORD *)(v58 + 7488), v125, 1);
                v126 = *(_QWORD *)(v58 + 7512);
                if ( v126 )
                  sub_140001660(*(_QWORD *)(v58 + 7520), v126, 1);
                v127 = *(_QWORD *)(v58 + 7544);
                if ( v127 )
                  sub_140001660(*(_QWORD *)(v58 + 7552), v127, 1);
                v128 = *(_QWORD *)(v58 + 7576);
                if ( v128 )
                  sub_140001660(*(_QWORD *)(v58 + 7584), v128, 1);
                v129 = *(_QWORD *)(v58 + 7608);
                if ( v129 )
                  sub_140001660(*(_QWORD *)(v58 + 7616), v129, 1);
                v130 = *(_QWORD *)(v58 + 7640);
                if ( v130 )
                  sub_140001660(*(_QWORD *)(v58 + 7648), v130, 1);
                v131 = *(_QWORD *)(v58 + 7672);
                if ( v131 )
                  sub_140001660(*(_QWORD *)(v58 + 7680), v131, 1);
                v132 = *(_QWORD *)(v58 + 7704);
                if ( v132 )
                  sub_140001660(*(_QWORD *)(v58 + 7712), v132, 1);
                *(_BYTE *)(v58 + 7777) = 0;
                sub_141684120(&v152, v145, 384);
                *(_BYTE *)(v58 + 7776) = 1;
                if ( v96 != -1 )
                {
                  v30 = ((unsigned __int64)((v101 << 16) | v102) << 32) | v103;
                  v32 = v179;
                  goto LABEL_120;
                }
              }
              *(_BYTE *)(v58 + 7784) = 3;
              *(_BYTE *)(v58 + 7792) = 3;
              v59 = 3;
              result = 1;
              goto LABEL_202;
            }
          }
          else
          {
            LODWORD(v191) = 0;
            v20 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_30;
          }
          v159 = nullptr;
          v160 = 1;
          v161 = 0;
          *(_QWORD *)&v171 = 1610612768;
          *(_QWORD *)&v170 = &v159;
          *((_QWORD *)&v170 + 1) = &off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v170) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v197,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v22 = v159;
          v20 = (char *)v160;
          LODWORD(v23) = (unsigned __int8)v161;
          v24 = HIBYTE(v161);
          v25 = *(unsigned __int16 *)((char *)&v161 + 5);
          v26 = *(unsigned int *)((char *)&v161 + 1);
          if ( !(_BYTE)v191 )
          {
            if ( 2 * *v19 )
            {
              v186 = v195;
              v185 = v193;
              v191 = v159;
              v187 = (char *)v160;
              v143 = sub_1416C2250(v21, v159);
              v20 = v187;
              v22 = v191;
              if ( !v143 )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v27 = Address;
          v28 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v28 == 2 )
          {
            v186 = v195;
            v185 = v193;
            v187 = v20;
            v191 = v22;
            WakeByAddressSingle(v27);
            v20 = v187;
            v22 = v191;
          }
          if ( v22 == (_QWORD *)-1LL )
          {
            LODWORD(v191) = v23;
            goto LABEL_30;
          }
          v187 = v20;
          v191 = v22;
          v29 = (unsigned __int64)((v24 << 16) | v25) << 32;
          v30 = v29 | v26;
          v31 = v194;
          v32 = v179;
          v33 = v195;
LABEL_117:
          if ( ((v33 != 0) & *(_BYTE *)(v31 + 7777)) != 0 )
            sub_140001660(v193, v33, 1);
          *(_BYTE *)(v31 + 7777) = 0;
          sub_141684120(&v152, v145, 384);
          *(_BYTE *)(v31 + 7776) = 1;
          v96 = 2;
LABEL_120:
          sub_141684120(v144, &v152, 384);
          sub_140BEAC10(v32);
          v98 = v30 << 8;
          if ( v96 != 2 )
          {
            sub_141684120(v158, v144, 384);
            *(_QWORD *)v155 = v96;
            *(_QWORD *)&v155[8] = v191;
            *(_QWORD *)&v155[16] = v187;
            v156 = v98 | (unsigned __int8)v23;
            v157 = v29;
            sub_140B05D10(&v170, v155);
            v29 = ((unsigned __int64)((HIBYTE(v170) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v170 + 13)) << 32)
                | *(unsigned int *)((char *)&v170 + 9);
            v10 = BYTE8(v170);
            v35 = *((_QWORD *)&v171 + 1);
            v34 = v171;
            v36 = v172;
            if ( (_QWORD)v170 == -1 )
            {
              v40 = 0;
            }
            else
            {
              HIBYTE(v170) = (((unsigned __int64)((HIBYTE(v170) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v170 + 13)) << 32)
                            | *(unsigned int *)((char *)&v170 + 9)) >> 48;
              *(_WORD *)((char *)&v170 + 13) = WORD2(v29);
              *(_DWORD *)((char *)&v170 + 9) = v29;
              v152 = 0;
              v153 = 1;
              v154 = 0;
              v145[2] = 1610612768;
              v145[0] = &v152;
              v145[1] = &off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v170, v145, v100) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v197,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v34 = v152;
              v35 = v153;
              v36 = v154;
              sub_140BF0F60(&v170);
              v40 = 1;
              v10 = 3;
            }
            v135 = v190;
            goto LABEL_195;
          }
          v36 = v98 | (unsigned __int8)v23;
          if ( v98 < 0 )
          {
            v99 = 0;
            goto LABEL_123;
          }
          if ( v36 )
          {
            nullsub_1(v97);
            v99 = 1;
            v133 = sub_140001650(v36, 1);
            if ( !v133 )
LABEL_123:
              sub_1416C2D4B(v99, v36);
            v35 = v133;
            sub_141684120(v133, v187, v36);
            v134 = v191;
            v135 = v190;
            if ( !v191 )
              goto LABEL_192;
          }
          else
          {
            v35 = 1;
            v134 = v191;
            v135 = v190;
            if ( !v191 )
              goto LABEL_192;
          }
          v136 = v135;
          sub_140001660(v187, v134, 1);
          v135 = v136;
LABEL_192:
          v40 = 1;
          v10 = 3;
          v34 = v36;
LABEL_195:
          *(_BYTE *)v180 = 1;
          sub_140BF0DE0(v135);
          v41 = v194;
          if ( *(_QWORD *)(v194 + 4616) != -1 )
          {
            v180 = (_QWORD *)(v194 + 4624);
            v137 = *(char **)(v194 + 4624);
            v193 = *(_QWORD *)(v194 + 4632);
            v195 = 0;
            Address = v137;
            while ( v193 != v195 )
            {
              ++v195;
              v138 = v137 + 96;
              sub_1402C7520();
              v137 = v138;
            }
            v41 = v194;
            v39 = *(_QWORD *)(v194 + 4616);
            if ( v39 )
LABEL_200:
              sub_140001660(*v180, 96 * v39, 8);
          }
LABEL_201:
          *(_BYTE *)(v41 + 7792) = 1;
          sub_140BE0B40(v190);
          v164 = v29;
          v166 = BYTE6(v29);
          v165 = WORD2(v29);
          v168 = v35;
          v169 = v36;
          v163 = v10;
          v167 = v34;
          v162 = v40;
          v139 = v194;
          *(_BYTE *)(v194 + 7811) = 0;
          sub_141684120(&v170, v139, 360);
          *(_BYTE *)(v139 + 7810) = 0;
          v140 = *(_QWORD *)(v139 + 384);
          *(_BYTE *)(v139 + 7809) = 0;
          *(_QWORD *)&v155[16] = *(_QWORD *)(v139 + 376);
          *(_OWORD *)v155 = *(_OWORD *)(v139 + 360);
          sub_14047E370(
            (unsigned int)&v170,
            v140,
            (unsigned int)&v162,
            (unsigned int)v155,
            *(_DWORD *)(v139 + 7800),
            *(_DWORD *)(v139 + 7804));
          v59 = 1;
          result = 0;
          v58 = v194;
LABEL_202:
          *(_BYTE *)(v58 + 7808) = v59;
          return result;
        case 1:
LABEL_221:
          sub_1416C3400(&off_1417BB0C0, v15, a3, a4);
        case 2:
LABEL_220:
          sub_1416C3420(&off_1417BB0C0, v15, a3, a4);
        case 3:
          goto LABEL_44;
      }
  }
}