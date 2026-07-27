// module: codexmate_lib
// addr: 0x140c97d50
// name: remove_skill
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = remove_skill | mapped via command-name string xref (win-native, ground-truth)
char __fastcall remove_skill(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 *v18; // r15
  char *v19; // rdi
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  int v22; // ebx
  int v23; // r13d
  unsigned int v24; // r12d
  __int64 v25; // r14
  PVOID v26; // rcx
  char v27; // al
  unsigned __int64 v28; // r14
  __int64 v29; // rsi
  _QWORD *v30; // r15
  char *v31; // r13
  unsigned __int64 v32; // r12
  unsigned __int8 v33; // di
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
  __int64 v56; // r14
  char v57; // bl
  unsigned __int64 v58; // r15
  __int64 v59; // r12
  __int64 v60; // r13
  _QWORD *v61; // r13
  __int64 v62; // rsi
  __int64 v63; // r8
  int v64; // ebx
  unsigned int v65; // esi
  __int64 v66; // r14
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
  __int64 v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // r14
  __int64 v99; // r8
  __int64 v100; // rbx
  int v101; // r12d
  unsigned int v102; // ebx
  __int64 v103; // r14
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
  char v133; // cl
  char result; // al
  __int64 v135; // rcx
  __int64 v136; // rax
  _QWORD *v137; // rdx
  __int64 v138; // rbx
  _QWORD *v139; // rcx
  _QWORD *v140; // r13
  __int64 v141; // rdi
  __int64 v142; // rdx
  int v143; // eax
  _QWORD *v144; // rdi
  char v145; // al
  _BYTE v146[224]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v147[28]; // [rsp+118h] [rbp+98h] BYREF
  _OWORD v148[9]; // [rsp+1F8h] [rbp+178h] BYREF
  _QWORD v149[3]; // [rsp+288h] [rbp+208h] BYREF
  char v150; // [rsp+2A0h] [rbp+220h]
  _BYTE v151[7]; // [rsp+2A1h] [rbp+221h]
  __int64 v152; // [rsp+2A8h] [rbp+228h]
  char v153[144]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v154; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v155; // [rsp+348h] [rbp+2C8h]
  __int64 v156; // [rsp+350h] [rbp+2D0h]
  _BYTE v157[24]; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v158; // [rsp+438h] [rbp+3B8h]
  _QWORD *v159; // [rsp+440h] [rbp+3C0h]
  char v160[232]; // [rsp+448h] [rbp+3C8h] BYREF
  _QWORD *v161; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v162; // [rsp+538h] [rbp+4B8h]
  __int64 v163; // [rsp+540h] [rbp+4C0h]
  __int64 v164; // [rsp+5C0h] [rbp+540h] BYREF
  char v165; // [rsp+5C8h] [rbp+548h]
  int v166; // [rsp+5C9h] [rbp+549h]
  __int16 v167; // [rsp+5CDh] [rbp+54Dh]
  char v168; // [rsp+5CFh] [rbp+54Fh]
  __int64 v169; // [rsp+5D0h] [rbp+550h]
  __int64 v170; // [rsp+5D8h] [rbp+558h]
  __int64 v171; // [rsp+5E0h] [rbp+560h]
  __int64 v172; // [rsp+5E8h] [rbp+568h]
  __int128 v173; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v174; // [rsp+600h] [rbp+580h] BYREF
  __int128 v175; // [rsp+610h] [rbp+590h] BYREF
  __int128 v176; // [rsp+620h] [rbp+5A0h]
  __int128 v177; // [rsp+630h] [rbp+5B0h]
  __int128 v178; // [rsp+640h] [rbp+5C0h]
  __int64 v179; // [rsp+760h] [rbp+6E0h]
  __int64 v180; // [rsp+768h] [rbp+6E8h]
  __int64 v181; // [rsp+770h] [rbp+6F0h]
  __int64 v182; // [rsp+778h] [rbp+6F8h]
  _QWORD *v183; // [rsp+780h] [rbp+700h]
  _DWORD v184[2]; // [rsp+788h] [rbp+708h]
  _QWORD *v185; // [rsp+790h] [rbp+710h] BYREF
  __int64 v186; // [rsp+798h] [rbp+718h]
  __int64 v187; // [rsp+7A0h] [rbp+720h]
  _QWORD *v188; // [rsp+7A8h] [rbp+728h]
  char *v189; // [rsp+7B0h] [rbp+730h]
  _QWORD *v190; // [rsp+7B8h] [rbp+738h]
  char *v191; // [rsp+7C0h] [rbp+740h]
  __int64 v192; // [rsp+7C8h] [rbp+748h]
  PVOID Address; // [rsp+7D0h] [rbp+750h]
  _QWORD *v194; // [rsp+7D8h] [rbp+758h]
  __int64 v195; // [rsp+7E0h] [rbp+760h]
  _QWORD *v196; // [rsp+7E8h] [rbp+768h]
  char v197; // [rsp+7F6h] [rbp+776h]
  char v198; // [rsp+7F7h] [rbp+777h] BYREF
  char *v199; // [rsp+7F8h] [rbp+778h]
  __int64 v200; // [rsp+800h] [rbp+780h]

  v200 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 7808);
  v195 = a1;
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
          *(_QWORD *)&v176 = 0;
          *(_QWORD *)&v173 = aRemoveSkill;
          *((_QWORD *)&v173 + 1) = 12;
          *(_QWORD *)&v174 = aRepo_0;
          *((_QWORD *)&v174 + 1) = 4;
          v192 = v7;
          *(_QWORD *)&v175 = v7;
          *((_QWORD *)&v175 + 1) = v5 + 4616;
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4608) + 16LL));
          v196 = (_QWORD *)(v5 + 4616);
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(v157, &v173, &v174);
          v10 = v157[0];
          if ( v157[0] == 0xFF )
          {
            v9 = *(_QWORD *)&v157[8];
LABEL_5:
            *(_QWORD *)&v176 = 0;
            *(_QWORD *)&v173 = aRemoveSkill;
            *((_QWORD *)&v173 + 1) = 12;
            *(_QWORD *)&v174 = aId_8;
            *((_QWORD *)&v174 + 1) = 2;
            *(_QWORD *)&v175 = v192;
            *((_QWORD *)&v175 + 1) = v8;
            sub_1409757B0(v157, &v173);
            v10 = v157[0];
            if ( v157[0] == 0xFF )
            {
              v11 = v158;
              v5 = v195;
              v12 = v195 + 4640;
              v13 = *(_OWORD *)&v157[8];
              *(_QWORD *)(v195 + 4664) = v9;
              *(_OWORD *)(v5 + 4640) = v13;
              *(_QWORD *)(v5 + 4656) = v11;
              *(_BYTE *)(v5 + 5680) = 0;
              v14 = v5 + 5688;
              sub_141684120(v5 + 5688, v12, 1048);
              v183 = (_QWORD *)(v5 + 7784);
              *(_BYTE *)(v5 + 7784) = 0;
              v7 = v192;
LABEL_8:
              v192 = v7;
              v182 = v5 + 6736;
              v179 = v14;
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
          v32 = ((unsigned __int64)((v157[7] << 16) | (unsigned int)*(unsigned __int16 *)&v157[5]) << 32)
              | *(unsigned int *)&v157[1];
          v34 = *(_QWORD *)&v157[8];
          v35 = *(_QWORD *)&v157[16];
          v36 = v158;
          sub_140BF0DE0(v192);
          if ( *v196 == -1 )
          {
            v40 = 1;
            v41 = v195;
            goto LABEL_200;
          }
          v183 = (_QWORD *)(v195 + 4624);
          v37 = *(_QWORD *)(v195 + 4624);
          Address = *(PVOID *)(v195 + 4632);
          v199 = nullptr;
          v182 = v37;
          while ( Address != v199 )
          {
            ++v199;
            v38 = v37 + 96;
            sub_1402C7520();
            v37 = v38;
          }
          v39 = *v196;
          v40 = 1;
          v41 = v195;
          if ( !*v196 )
            goto LABEL_200;
          goto LABEL_199;
        case 1:
LABEL_219:
          v192 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_218:
          v192 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = v5 + 7784;
  v16 = *(unsigned __int8 *)(v5 + 7784);
  v14 = v5 + 5688;
  v183 = (_QWORD *)(v5 + 7784);
  switch ( v16 )
  {
    case 0LL:
      goto LABEL_8;
    case 1LL:
      v192 = v7;
      v181 = v5 + 7784;
      v180 = v5 + 5688;
      sub_1416C3400(&off_1417B7B80, v15, a3, a4);
    case 2LL:
      v192 = v7;
      v181 = v5 + 7784;
      v180 = v5 + 5688;
      sub_1416C3420(&off_1417B7B80, v15, a3, a4);
    case 3LL:
      v179 = v5 + 5688;
      v192 = v7;
      v182 = v5 + 6736;
      switch ( *(_BYTE *)(v5 + 7776) )
      {
        case 0:
LABEL_10:
          v17 = *(volatile void **)(v5 + 6760);
          *(_QWORD *)(v5 + 6768) = v17;
          *(_BYTE *)(v5 + 7777) = 1;
          v199 = *(char **)(v5 + 6736);
          v196 = *(_QWORD **)(v5 + 6744);
          v172 = *(_QWORD *)(v5 + 6752);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) )
          {
            v189 = v199;
            v188 = v196;
            sub_1416C15B0(v17);
          }
          Address = (PVOID)v17;
          v18 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v189 = v199;
            v188 = v196;
            v143 = sub_1416C2250(a1, v15);
            LOBYTE(v143) = v143 ^ 1;
            LODWORD(v194) = v143;
            v19 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
            {
LABEL_30:
              Address = v19;
              sub_1407BC950(v195 + 6776, v19 + 8);
              if ( ((unsigned __int8)v194 & 1) == 0 )
              {
                if ( 2 * *v18 )
                {
                  v189 = v199;
                  v188 = v196;
                  if ( !(unsigned __int8)sub_1416C2250(v43, v42) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v44 = Address;
              v45 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v45 == 2 )
              {
                v189 = v199;
                v188 = v196;
                WakeByAddressSingle(v44);
              }
              v46 = v195;
              *(_BYTE *)(v195 + 7777) = 0;
              v47 = *(_OWORD *)(v46 + 7000);
              v174 = *(_OWORD *)(v46 + 7016);
              v173 = v47;
              v48 = *(_OWORD *)(v46 + 7224);
              v176 = *(_OWORD *)(v46 + 7240);
              v175 = v48;
              *(_QWORD *)&v177 = v199;
              *((_QWORD *)&v177 + 1) = v196;
              *(_QWORD *)&v178 = v172;
              v49 = off_141EC8710;
              if ( *((_DWORD *)off_141EC8710 + 24) )
              {
                v197 = 1;
                v144 = off_141EC8710;
                sub_1416984A3(off_141EC8710);
                v49 = v144;
              }
              if ( *((_DWORD *)v49 + 4) == 2 )
              {
                v50 = 704;
                if ( *(_BYTE *)v49 )
                  v50 = 472;
                v51 = v49[1] + v50;
                v197 = 0;
                v52 = sub_1408992A0(v51, v49, &v173, &off_1417642A8);
              }
              else
              {
                v53 = 704;
                if ( *((_BYTE *)v49 + 64) )
                  v53 = 472;
                v54 = v49[9] + v53;
                v197 = 0;
                v52 = sub_1408992A0(v54, v49 + 8, &v173, &off_141764290);
              }
              v5 = v195;
              *(_QWORD *)(v195 + 7768) = v52;
LABEL_44:
              Address = (PVOID)(v5 + 7768);
              sub_140B014B0(&v173, v5 + 7768, a2);
              v55 = v173;
              if ( (_QWORD)v173 == -3 )
              {
                v60 = v195;
                *(_BYTE *)(v195 + 7776) = 3;
              }
              else
              {
                if ( (_QWORD)v173 == -2 )
                {
                  v56 = *((_QWORD *)&v173 + 1);
                  v57 = v174;
                  LODWORD(v185) = *(_DWORD *)((char *)&v174 + 1);
                  *(_DWORD *)((char *)&v185 + 3) = DWORD1(v174);
                  v58 = 0x800000000000000CuLL;
                  v59 = *((_QWORD *)&v174 + 1);
                }
                else
                {
                  v58 = *((_QWORD *)&v173 + 1);
                  v56 = v174;
                  v57 = BYTE8(v174);
                  LODWORD(v185) = *(_DWORD *)((char *)&v174 + 9);
                  *(_DWORD *)((char *)&v185 + 3) = HIDWORD(v174);
                  v59 = v175;
                  sub_141684120(&v161, (char *)&v175 + 8, 144);
                }
                v61 = v196;
                v184[0] = (_DWORD)v185;
                *(_DWORD *)((char *)v184 + 3) = *(_DWORD *)((char *)&v185 + 3);
                sub_141684120(v148, &v161, 144);
                v62 = *(_QWORD *)Address;
                v191 = v199;
                v190 = v61;
                if ( (unsigned __int8)sub_1412F2A80(v62) )
                {
                  v191 = v199;
                  v190 = v61;
                  sub_1412E7580(v62);
                }
                if ( v55 == -1 )
                {
                  *(_QWORD *)&v173 = v58;
                  *((_QWORD *)&v173 + 1) = v56;
                  LOBYTE(v174) = v57;
                  *(_DWORD *)((char *)&v174 + 1) = v184[0];
                  DWORD1(v174) = *(_DWORD *)((char *)v184 + 3);
                  *((_QWORD *)&v174 + 1) = v59;
                  v175 = v148[0];
                  v176 = v148[1];
                  v177 = v148[2];
                  v178 = v148[3];
                  v185 = nullptr;
                  v186 = 1;
                  v187 = 0;
                  v163 = 1610612768;
                  v161 = &v185;
                  v162 = (__int64)&off_1417C41C0;
                  if ( (unsigned __int8)sub_140B036A0(&v173, &v161) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v198,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v194 = v185;
                  v32 = v186;
                  v33 = v187;
                  v64 = HIBYTE(v187);
                  v65 = *(unsigned __int16 *)((char *)&v187 + 5);
                  v66 = *(unsigned int *)((char *)&v187 + 1);
                  v191 = v199;
                  v30 = v196;
                  v190 = v196;
                  sub_140BF2F60(&v173);
                  goto LABEL_57;
                }
                if ( v55 == -2 )
                {
                  *(_QWORD *)&v173 = v58;
                  *((_QWORD *)&v173 + 1) = v56;
                  LOBYTE(v174) = v57;
                  *(_DWORD *)((char *)&v174 + 1) = v184[0];
                  DWORD1(v174) = *(_DWORD *)((char *)v184 + 3);
                  *((_QWORD *)&v174 + 1) = v59;
                  v175 = v148[0];
                  v185 = nullptr;
                  v186 = 1;
                  v187 = 0;
                  v163 = 1610612768;
                  v161 = &v185;
                  v162 = (__int64)&off_1417C41C0;
                  if ( (unsigned __int8)sub_141230630(&v173, &v161, v63) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v198,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v194 = v185;
                  v32 = v186;
                  v33 = v187;
                  v64 = HIBYTE(v187);
                  v65 = *(unsigned __int16 *)((char *)&v187 + 5);
                  v66 = *(unsigned int *)((char *)&v187 + 1);
                  v191 = v199;
                  v30 = v196;
                  v190 = v196;
                  sub_140BF0F60(&v173);
LABEL_57:
                  v28 = ((unsigned __int64)((v64 << 16) | v65) << 32) | v66;
                  v29 = v195;
                  v67 = *(_QWORD *)(v195 + 6776);
                  v31 = v199;
                  if ( v67 )
                    sub_140001660(*(_QWORD *)(v195 + 6784), v67, 1);
                  v68 = *(_QWORD *)(v29 + 6808);
                  if ( v68 )
                    sub_140001660(*(_QWORD *)(v29 + 6816), v68, 1);
                  v69 = *(_QWORD *)(v29 + 6840);
                  if ( v69 )
                    sub_140001660(*(_QWORD *)(v29 + 6848), v69, 1);
                  v70 = *(_QWORD *)(v29 + 6872);
                  if ( v70 )
                    sub_140001660(*(_QWORD *)(v29 + 6880), v70, 1);
                  v71 = *(_QWORD *)(v29 + 6904);
                  if ( v71 )
                    sub_140001660(*(_QWORD *)(v29 + 6912), v71, 1);
                  v72 = *(_QWORD *)(v29 + 7736);
                  if ( v72 != -1 && v72 )
                    sub_140001660(*(_QWORD *)(v29 + 7744), v72, 1);
                  v73 = *(_QWORD *)(v29 + 6936);
                  if ( v73 )
                    sub_140001660(*(_QWORD *)(v29 + 6944), v73, 1);
                  v74 = *(_QWORD *)(v29 + 6968);
                  if ( v74 )
                    sub_140001660(*(_QWORD *)(v29 + 6976), v74, 1);
                  v75 = *(_QWORD *)(v29 + 7032);
                  if ( v75 )
                    sub_140001660(*(_QWORD *)(v29 + 7040), v75, 1);
                  v76 = *(_QWORD *)(v29 + 7064);
                  if ( v76 )
                    sub_140001660(*(_QWORD *)(v29 + 7072), v76, 1);
                  v77 = *(_QWORD *)(v29 + 7096);
                  if ( v77 )
                    sub_140001660(*(_QWORD *)(v29 + 7104), v77, 1);
                  v78 = *(_QWORD *)(v29 + 7128);
                  if ( v78 )
                    sub_140001660(*(_QWORD *)(v29 + 7136), v78, 1);
                  v79 = *(_QWORD *)(v29 + 7160);
                  if ( v79 )
                    sub_140001660(*(_QWORD *)(v29 + 7168), v79, 1);
                  v80 = *(_QWORD *)(v29 + 7192);
                  if ( v80 )
                    sub_140001660(*(_QWORD *)(v29 + 7200), v80, 1);
                  v81 = *(_QWORD *)(v29 + 7256);
                  if ( v81 )
                    sub_140001660(*(_QWORD *)(v29 + 7264), v81, 1);
                  v82 = *(_QWORD *)(v29 + 7288);
                  if ( v82 )
                    sub_140001660(*(_QWORD *)(v29 + 7296), v82, 1);
                  v83 = *(_QWORD *)(v29 + 7320);
                  if ( v83 )
                    sub_140001660(*(_QWORD *)(v29 + 7328), v83, 1);
                  v84 = *(_QWORD *)(v29 + 7352);
                  if ( v84 )
                    sub_140001660(*(_QWORD *)(v29 + 7360), v84, 1);
                  v85 = *(_QWORD *)(v29 + 7384);
                  if ( v85 )
                    sub_140001660(*(_QWORD *)(v29 + 7392), v85, 1);
                  v86 = *(_QWORD *)(v29 + 7416);
                  if ( v86 )
                    sub_140001660(*(_QWORD *)(v29 + 7424), v86, 1);
                  v87 = *(_QWORD *)(v29 + 7448);
                  if ( v87 )
                    sub_140001660(*(_QWORD *)(v29 + 7456), v87, 1);
                  v88 = *(_QWORD *)(v29 + 7480);
                  if ( v88 )
                    sub_140001660(*(_QWORD *)(v29 + 7488), v88, 1);
                  v89 = *(_QWORD *)(v29 + 7512);
                  if ( v89 )
                    sub_140001660(*(_QWORD *)(v29 + 7520), v89, 1);
                  v90 = *(_QWORD *)(v29 + 7544);
                  if ( v90 )
                    sub_140001660(*(_QWORD *)(v29 + 7552), v90, 1);
                  v91 = *(_QWORD *)(v29 + 7576);
                  if ( v91 )
                    sub_140001660(*(_QWORD *)(v29 + 7584), v91, 1);
                  v92 = *(_QWORD *)(v29 + 7608);
                  if ( v92 )
                    sub_140001660(*(_QWORD *)(v29 + 7616), v92, 1);
                  v93 = *(_QWORD *)(v29 + 7640);
                  if ( v93 )
                    sub_140001660(*(_QWORD *)(v29 + 7648), v93, 1);
                  v94 = *(_QWORD *)(v29 + 7672);
                  if ( v94 )
                    sub_140001660(*(_QWORD *)(v29 + 7680), v94, 1);
                  v95 = *(_QWORD *)(v29 + 7704);
                  if ( v95 )
                    sub_140001660(*(_QWORD *)(v29 + 7712), v95, 1);
                  goto LABEL_116;
                }
                v152 = v59;
                sub_141684120(v153, v148, 144);
                v149[0] = v55;
                v149[1] = v58;
                v149[2] = v56;
                v150 = v57;
                *(_DWORD *)v151 = v184[0];
                *(_DWORD *)&v151[3] = *(_DWORD *)((char *)v184 + 3);
                v191 = v199;
                v190 = v61;
                sub_140ACA880(&v173, v149);
                v194 = *((_QWORD **)&v173 + 1);
                v96 = v173;
                v199 = (char *)v174;
                v33 = BYTE8(v174);
                v101 = HIBYTE(v174);
                v102 = *(unsigned __int16 *)((char *)&v174 + 13);
                v103 = *(unsigned int *)((char *)&v174 + 9);
                v30 = (_QWORD *)v175;
                sub_141684120(v147, (char *)&v175 + 8, 224);
                v60 = v195;
                v104 = *(_QWORD *)(v195 + 6776);
                if ( v104 )
                  sub_140001660(*(_QWORD *)(v195 + 6784), v104, 1);
                v105 = *(_QWORD *)(v60 + 6808);
                if ( v105 )
                  sub_140001660(*(_QWORD *)(v60 + 6816), v105, 1);
                v106 = *(_QWORD *)(v60 + 6840);
                if ( v106 )
                  sub_140001660(*(_QWORD *)(v60 + 6848), v106, 1);
                v107 = *(_QWORD *)(v60 + 6872);
                if ( v107 )
                  sub_140001660(*(_QWORD *)(v60 + 6880), v107, 1);
                v108 = *(_QWORD *)(v60 + 6904);
                if ( v108 )
                  sub_140001660(*(_QWORD *)(v60 + 6912), v108, 1);
                v109 = *(_QWORD *)(v60 + 7736);
                if ( v109 != -1 && v109 )
                  sub_140001660(*(_QWORD *)(v60 + 7744), v109, 1);
                v110 = *(_QWORD *)(v60 + 6936);
                if ( v110 )
                  sub_140001660(*(_QWORD *)(v60 + 6944), v110, 1);
                v111 = *(_QWORD *)(v60 + 6968);
                if ( v111 )
                  sub_140001660(*(_QWORD *)(v60 + 6976), v111, 1);
                v112 = *(_QWORD *)(v60 + 7032);
                if ( v112 )
                  sub_140001660(*(_QWORD *)(v60 + 7040), v112, 1);
                v113 = *(_QWORD *)(v60 + 7064);
                if ( v113 )
                  sub_140001660(*(_QWORD *)(v60 + 7072), v113, 1);
                v114 = *(_QWORD *)(v60 + 7096);
                if ( v114 )
                  sub_140001660(*(_QWORD *)(v60 + 7104), v114, 1);
                v115 = *(_QWORD *)(v60 + 7128);
                if ( v115 )
                  sub_140001660(*(_QWORD *)(v60 + 7136), v115, 1);
                v116 = *(_QWORD *)(v60 + 7160);
                if ( v116 )
                  sub_140001660(*(_QWORD *)(v60 + 7168), v116, 1);
                v117 = *(_QWORD *)(v60 + 7192);
                if ( v117 )
                  sub_140001660(*(_QWORD *)(v60 + 7200), v117, 1);
                v118 = *(_QWORD *)(v60 + 7256);
                if ( v118 )
                  sub_140001660(*(_QWORD *)(v60 + 7264), v118, 1);
                v119 = *(_QWORD *)(v60 + 7288);
                if ( v119 )
                  sub_140001660(*(_QWORD *)(v60 + 7296), v119, 1);
                v120 = *(_QWORD *)(v60 + 7320);
                if ( v120 )
                  sub_140001660(*(_QWORD *)(v60 + 7328), v120, 1);
                v121 = *(_QWORD *)(v60 + 7352);
                if ( v121 )
                  sub_140001660(*(_QWORD *)(v60 + 7360), v121, 1);
                v122 = *(_QWORD *)(v60 + 7384);
                if ( v122 )
                  sub_140001660(*(_QWORD *)(v60 + 7392), v122, 1);
                v123 = *(_QWORD *)(v60 + 7416);
                if ( v123 )
                  sub_140001660(*(_QWORD *)(v60 + 7424), v123, 1);
                v124 = *(_QWORD *)(v60 + 7448);
                if ( v124 )
                  sub_140001660(*(_QWORD *)(v60 + 7456), v124, 1);
                v125 = *(_QWORD *)(v60 + 7480);
                if ( v125 )
                  sub_140001660(*(_QWORD *)(v60 + 7488), v125, 1);
                v126 = *(_QWORD *)(v60 + 7512);
                if ( v126 )
                  sub_140001660(*(_QWORD *)(v60 + 7520), v126, 1);
                v127 = *(_QWORD *)(v60 + 7544);
                if ( v127 )
                  sub_140001660(*(_QWORD *)(v60 + 7552), v127, 1);
                v128 = *(_QWORD *)(v60 + 7576);
                if ( v128 )
                  sub_140001660(*(_QWORD *)(v60 + 7584), v128, 1);
                v129 = *(_QWORD *)(v60 + 7608);
                if ( v129 )
                  sub_140001660(*(_QWORD *)(v60 + 7616), v129, 1);
                v130 = *(_QWORD *)(v60 + 7640);
                if ( v130 )
                  sub_140001660(*(_QWORD *)(v60 + 7648), v130, 1);
                v131 = *(_QWORD *)(v60 + 7672);
                if ( v131 )
                  sub_140001660(*(_QWORD *)(v60 + 7680), v131, 1);
                v132 = *(_QWORD *)(v60 + 7704);
                if ( v132 )
                  sub_140001660(*(_QWORD *)(v60 + 7712), v132, 1);
                *(_BYTE *)(v60 + 7777) = 0;
                sub_141684120(&v154, v147, 224);
                *(_BYTE *)(v60 + 7776) = 1;
                if ( v96 != -2 )
                {
                  v28 = ((unsigned __int64)((v101 << 16) | v102) << 32) | v103;
                  v32 = (unsigned __int64)v199;
                  goto LABEL_119;
                }
              }
              *(_BYTE *)(v60 + 7784) = 3;
              *(_BYTE *)(v60 + 7792) = 3;
              v133 = 3;
              result = 1;
              goto LABEL_201;
            }
          }
          else
          {
            LODWORD(v194) = 0;
            v19 = (char *)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_30;
          }
          v161 = nullptr;
          v162 = 1;
          v163 = 0;
          *(_QWORD *)&v174 = 1610612768;
          *(_QWORD *)&v173 = &v161;
          *((_QWORD *)&v173 + 1) = &off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v173) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v198,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v21 = v161;
          v19 = (char *)v162;
          v22 = (unsigned __int8)v163;
          v23 = HIBYTE(v163);
          v24 = *(unsigned __int16 *)((char *)&v163 + 5);
          v25 = *(unsigned int *)((char *)&v163 + 1);
          if ( !(_BYTE)v194 )
          {
            if ( 2 * *v18 )
            {
              v189 = v199;
              v188 = v196;
              v194 = v161;
              v145 = sub_1416C2250(v20, v161);
              v21 = v194;
              if ( !v145 )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v26 = Address;
          v27 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v27 == 2 )
          {
            v189 = v199;
            v188 = v196;
            v194 = v21;
            WakeByAddressSingle(v26);
            v21 = v194;
          }
          if ( v21 == (_QWORD *)-1LL )
          {
            LODWORD(v194) = v22;
            goto LABEL_30;
          }
          v194 = v21;
          v28 = ((unsigned __int64)((v23 << 16) | v24) << 32) | v25;
          v29 = v195;
          v30 = v196;
          v31 = v199;
          v32 = (unsigned __int64)v19;
          v33 = v22;
LABEL_116:
          if ( ((v31 != nullptr) & *(_BYTE *)(v29 + 7777)) != 0 )
            sub_140001660(v30, v31, 1);
          *(_BYTE *)(v29 + 7777) = 0;
          sub_141684120(&v154, v147, 224);
          *(_BYTE *)(v29 + 7776) = 1;
          v96 = -1;
LABEL_119:
          sub_141684120(v146, &v154, 224);
          sub_140BEAC10(v182);
          v98 = v28 << 8;
          if ( v96 != -1 )
          {
            sub_141684120(v160, v146, 224);
            *(_QWORD *)v157 = v96;
            *(_QWORD *)&v157[8] = v194;
            *(_QWORD *)&v157[16] = v32;
            v158 = v98 | v33;
            v159 = v30;
            sub_140B05FA0(&v173, v157);
            v32 = ((unsigned __int64)((HIBYTE(v173) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v173 + 13)) << 32)
                | *(unsigned int *)((char *)&v173 + 9);
            v10 = BYTE8(v173);
            v35 = *((_QWORD *)&v174 + 1);
            v34 = v174;
            v36 = v175;
            if ( (_QWORD)v173 == -1 )
            {
              v40 = 0;
            }
            else
            {
              HIBYTE(v173) = (((unsigned __int64)((HIBYTE(v173) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v173 + 13)) << 32)
                            | *(unsigned int *)((char *)&v173 + 9)) >> 48;
              *(_WORD *)((char *)&v173 + 13) = WORD2(v32);
              *(_DWORD *)((char *)&v173 + 9) = v32;
              v154 = 0;
              v155 = 1;
              v156 = 0;
              v147[2] = 1610612768;
              v147[0] = &v154;
              v147[1] = &off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v173, v147, v99) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v198,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v34 = v154;
              v35 = v155;
              v36 = v156;
              sub_140BF0F60(&v173);
              v40 = 1;
              v10 = 3;
            }
            v135 = v192;
            goto LABEL_194;
          }
          v36 = v98 | v33;
          if ( v98 < 0 )
          {
            v100 = 0;
            goto LABEL_125;
          }
          if ( !v36 )
          {
            v35 = 1;
            v137 = v194;
            v135 = v192;
            if ( !v194 )
              goto LABEL_193;
            goto LABEL_192;
          }
          nullsub_1(v97);
          v100 = 1;
          v136 = sub_140001650(v98 | v33, 1);
          if ( !v136 )
          {
LABEL_125:
            v199 = (char *)v32;
            sub_1416C2D4B(v100, v98 | v33);
          }
          v35 = v136;
          sub_141684120(v136, v32, v36);
          v137 = v194;
          v135 = v192;
          if ( v194 )
          {
LABEL_192:
            v138 = v135;
            sub_140001660(v32, v137, 1);
            v135 = v138;
          }
LABEL_193:
          v40 = 1;
          v10 = 3;
          v34 = v36;
LABEL_194:
          *(_BYTE *)v183 = 1;
          sub_140BF0DE0(v135);
          v41 = v195;
          if ( *(_QWORD *)(v195 + 4616) != -1 )
          {
            v183 = (_QWORD *)(v195 + 4624);
            v139 = *(_QWORD **)(v195 + 4624);
            Address = *(PVOID *)(v195 + 4632);
            v199 = nullptr;
            v196 = v139;
            while ( Address != v199 )
            {
              ++v199;
              v140 = v139 + 12;
              sub_1402C7520();
              v139 = v140;
            }
            v41 = v195;
            v39 = *(_QWORD *)(v195 + 4616);
            if ( v39 )
LABEL_199:
              sub_140001660(*v183, 96 * v39, 8);
          }
LABEL_200:
          *(_BYTE *)(v41 + 7792) = 1;
          sub_140BE0B40(v192);
          v166 = v32;
          v168 = BYTE6(v32);
          v167 = WORD2(v32);
          v170 = v35;
          v171 = v36;
          v165 = v10;
          v169 = v34;
          v164 = v40;
          v141 = v195;
          *(_BYTE *)(v195 + 7811) = 0;
          sub_141684120(&v173, v141, 360);
          *(_BYTE *)(v141 + 7810) = 0;
          v142 = *(_QWORD *)(v141 + 384);
          *(_BYTE *)(v141 + 7809) = 0;
          *(_QWORD *)&v157[16] = *(_QWORD *)(v141 + 376);
          *(_OWORD *)v157 = *(_OWORD *)(v141 + 360);
          sub_14047E370(
            (unsigned int)&v173,
            v142,
            (unsigned int)&v164,
            (unsigned int)v157,
            *(_DWORD *)(v141 + 7800),
            *(_DWORD *)(v141 + 7804));
          v133 = 1;
          result = 0;
          v60 = v195;
LABEL_201:
          *(_BYTE *)(v60 + 7808) = v133;
          return result;
        case 1:
LABEL_221:
          sub_1416C3400(&off_1417BB0D8, v15, a3, a4);
        case 2:
LABEL_220:
          sub_1416C3420(&off_1417BB0D8, v15, a3, a4);
        case 3:
          goto LABEL_44;
      }
  }
}