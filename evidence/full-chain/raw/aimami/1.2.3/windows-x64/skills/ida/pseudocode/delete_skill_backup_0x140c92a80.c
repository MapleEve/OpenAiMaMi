// module: codexmate_lib (tauri command handler)
// addr: 0x140c92a80
// name: delete_skill_backup
// win 1.2.3 | truncation-stub REDUCED to full body (36962 chars) via py_eval direct ida_hexrays.decompile paged retrieval (red line 13/20) | session win-1.2.3-truncation-reducer-20260726
// win 1.2.3 | = mac codexmate_lib::core::skills::delete_skill_backup | cross-platform string-signature match (name<->func, win-native)
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = delete_skill_backup | mapped via command-name string xref (win-native, ground-truth)
char __fastcall delete_skill_backup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rdi
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  volatile void *v17; // rdi
  __int64 *v18; // rsi
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  int v23; // ebx
  int v24; // r13d
  unsigned int v25; // r12d
  __int64 v26; // r15
  PVOID v27; // rcx
  char v28; // al
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r12
  __int64 v33; // r13
  unsigned __int64 v34; // rbx
  __int64 v35; // r14
  __int64 v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r12
  __int64 v41; // rax
  unsigned __int8 v42; // r12
  __int64 v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  PVOID v46; // rcx
  char v47; // al
  __int64 v48; // rax
  __int128 v49; // xmm0
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r14
  unsigned __int8 v57; // bl
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // r15
  __int64 v60; // r13
  char v61; // cl
  char result; // al
  __int64 v63; // rsi
  __int64 v64; // r8
  int v65; // r14d
  unsigned int v66; // esi
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rsi
  int v70; // r12d
  unsigned int v71; // r15d
  __int64 v72; // rbx
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
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rdx
  int v103; // r14d
  unsigned int v104; // esi
  __int64 v105; // r12
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
  __int64 v133; // rdx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // r8
  __int64 v138; // rbx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rbx
  char *v142; // rcx
  char *v143; // r13
  __int64 v144; // rdi
  __int64 v145; // rdx
  int v146; // eax
  _QWORD *v147; // rdi
  __int128 v148; // [rsp+30h] [rbp-50h]
  __int128 v149; // [rsp+40h] [rbp-40h]
  __int128 v150; // [rsp+50h] [rbp-30h]
  __int128 v151; // [rsp+60h] [rbp-20h]
  __int64 v152; // [rsp+70h] [rbp-10h]
  __int128 v153; // [rsp+80h] [rbp+0h]
  __int128 v154; // [rsp+90h] [rbp+10h]
  __int128 v155; // [rsp+A0h] [rbp+20h]
  __int64 v156; // [rsp+B0h] [rbp+30h]
  __int64 v157; // [rsp+C0h] [rbp+40h] BYREF
  char v158; // [rsp+C8h] [rbp+48h]
  int v159; // [rsp+C9h] [rbp+49h]
  __int16 v160; // [rsp+CDh] [rbp+4Dh]
  char v161; // [rsp+CFh] [rbp+4Fh]
  __int64 v162; // [rsp+D0h] [rbp+50h]
  __int64 v163; // [rsp+D8h] [rbp+58h]
  __int64 v164; // [rsp+E0h] [rbp+60h]
  _QWORD v165[2]; // [rsp+E8h] [rbp+68h] BYREF
  unsigned __int8 v166; // [rsp+F8h] [rbp+78h]
  int v167; // [rsp+F9h] [rbp+79h]
  __int16 v168; // [rsp+FDh] [rbp+7Dh]
  char v169; // [rsp+FFh] [rbp+7Fh]
  unsigned __int64 v170; // [rsp+100h] [rbp+80h]
  __int64 v171; // [rsp+108h] [rbp+88h]
  __int128 v172; // [rsp+110h] [rbp+90h] BYREF
  __int128 v173; // [rsp+120h] [rbp+A0h]
  __int128 v174; // [rsp+130h] [rbp+B0h]
  __int128 v175; // [rsp+140h] [rbp+C0h]
  __int64 v176; // [rsp+150h] [rbp+D0h]
  _BYTE v177[24]; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v178; // [rsp+178h] [rbp+F8h]
  __int64 v179; // [rsp+180h] [rbp+100h]
  __int128 v180; // [rsp+188h] [rbp+108h]
  __int128 v181; // [rsp+198h] [rbp+118h]
  __int128 v182; // [rsp+1A8h] [rbp+128h]
  __int128 v183; // [rsp+1B8h] [rbp+138h]
  __int64 v184; // [rsp+1C8h] [rbp+148h]
  __int128 v185; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v186; // [rsp+1E0h] [rbp+160h] BYREF
  _BYTE v187[24]; // [rsp+1F0h] [rbp+170h]
  __int128 v188; // [rsp+208h] [rbp+188h]
  __int128 v189; // [rsp+218h] [rbp+198h]
  __int128 v190; // [rsp+228h] [rbp+1A8h]
  __int64 v191; // [rsp+238h] [rbp+1B8h]
  __int128 v192; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v193; // [rsp+350h] [rbp+2D0h]
  __int128 v194; // [rsp+360h] [rbp+2E0h]
  __int128 v195; // [rsp+370h] [rbp+2F0h]
  __int64 v196; // [rsp+380h] [rbp+300h]
  __int64 v197; // [rsp+390h] [rbp+310h]
  __int64 v198; // [rsp+398h] [rbp+318h]
  __int64 v199; // [rsp+3A0h] [rbp+320h]
  __int64 v200; // [rsp+3A8h] [rbp+328h]
  __int128 v201; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v202; // [rsp+3C0h] [rbp+340h]
  __int128 v203; // [rsp+3D0h] [rbp+350h]
  __int64 v204; // [rsp+3E0h] [rbp+360h]
  __int64 v205; // [rsp+3F0h] [rbp+370h] BYREF
  __int64 v206; // [rsp+3F8h] [rbp+378h]
  unsigned __int64 v207; // [rsp+400h] [rbp+380h]
  _QWORD *v208; // [rsp+408h] [rbp+388h]
  unsigned __int64 v209; // [rsp+410h] [rbp+390h]
  unsigned __int64 v210; // [rsp+418h] [rbp+398h]
  __int64 v211; // [rsp+420h] [rbp+3A0h]
  unsigned __int64 v212; // [rsp+428h] [rbp+3A8h]
  __int64 v213; // [rsp+430h] [rbp+3B0h]
  int v214; // [rsp+43Ch] [rbp+3BCh]
  __int64 v215; // [rsp+440h] [rbp+3C0h]
  PVOID Address; // [rsp+448h] [rbp+3C8h]
  __int64 v217; // [rsp+450h] [rbp+3D0h]
  unsigned __int64 v218; // [rsp+458h] [rbp+3D8h]
  char v219; // [rsp+466h] [rbp+3E6h]
  char v220; // [rsp+467h] [rbp+3E7h] BYREF
  __int64 v221; // [rsp+468h] [rbp+3E8h]
  __int64 v222; // [rsp+470h] [rbp+3F0h]

  v222 = -2;
  v4 = a2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 7808);
  v217 = a1;
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
          goto LABEL_225;
        case 2:
          goto LABEL_224;
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
          *(_QWORD *)&v187[16] = 0;
          *(_QWORD *)&v185 = aDeleteSkillBac;
          *((_QWORD *)&v185 + 1) = 19;
          *(_QWORD *)&v186 = aRepo_0;
          *((_QWORD *)&v186 + 1) = 4;
          v215 = v7;
          *(_QWORD *)v187 = v7;
          *(_QWORD *)&v187[8] = v5 + 4616;
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4608) + 16LL));
          Address = (PVOID)(v5 + 4616);
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(v177, &v185, &v186);
          v10 = v177[0];
          if ( v177[0] == 0xFF )
          {
            v9 = *(_QWORD *)&v177[8];
LABEL_5:
            *(_QWORD *)&v187[16] = 0;
            *(_QWORD *)&v185 = aDeleteSkillBac;
            *((_QWORD *)&v185 + 1) = 19;
            *(_QWORD *)&v186 = aId_8;
            *((_QWORD *)&v186 + 1) = 2;
            *(_QWORD *)v187 = v215;
            *(_QWORD *)&v187[8] = v8;
            sub_1409757B0(v177, &v185);
            v10 = v177[0];
            if ( v177[0] == 0xFF )
            {
              v11 = v178;
              v5 = v217;
              v12 = v217 + 4640;
              v13 = *(_OWORD *)&v177[8];
              *(_QWORD *)(v217 + 4664) = v9;
              *(_OWORD *)(v5 + 4640) = v13;
              *(_QWORD *)(v5 + 4656) = v11;
              *(_BYTE *)(v5 + 5680) = 0;
              v14 = v5 + 5688;
              sub_141684120(v5 + 5688, v12, 1048);
              v208 = (_QWORD *)(v5 + 7784);
              *(_BYTE *)(v5 + 7784) = 0;
              v7 = v215;
LABEL_8:
              v215 = v7;
              v209 = v5 + 6736;
              v197 = v14;
              sub_141684120(v5 + 6736, v14, 1048);
              switch ( *(_BYTE *)(v5 + 7776) )
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
          v31 = ((unsigned __int64)((v177[7] << 16) | (unsigned int)*(unsigned __int16 *)&v177[5]) << 32)
              | *(unsigned int *)&v177[1];
          v36 = *(_QWORD *)&v177[8];
          v37 = *(_QWORD *)&v177[16];
          v38 = v178;
          sub_140BF0DE0(v215);
          if ( *(_QWORD *)Address == -1 )
          {
            v42 = 1;
            v43 = v217;
            goto LABEL_207;
          }
          v208 = (_QWORD *)(v217 + 4624);
          v39 = *(_QWORD *)(v217 + 4624);
          v218 = *(_QWORD *)(v217 + 4632);
          v221 = 0;
          v209 = v39;
          while ( v218 != v221 )
          {
            ++v221;
            v40 = v39 + 96;
            sub_1402C7520();
            v39 = v40;
          }
          v41 = *(_QWORD *)Address;
          v42 = 1;
          v43 = v217;
          if ( !*(_QWORD *)Address )
            goto LABEL_207;
          goto LABEL_206;
        case 1:
LABEL_225:
          v215 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_224:
          v215 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = v5 + 7784;
  v16 = *(unsigned __int8 *)(v5 + 7784);
  v14 = v5 + 5688;
  v208 = (_QWORD *)(v5 + 7784);
  switch ( v16 )
  {
    case 0LL:
      goto LABEL_8;
    case 1LL:
      v215 = v7;
      v200 = v5 + 7784;
      v199 = v5 + 5688;
      sub_1416C3400(&off_1417B7B80, v15, a3, a4);
    case 2LL:
      v215 = v7;
      v200 = v5 + 7784;
      v199 = v5 + 5688;
      sub_1416C3420(&off_1417B7B80, v15, a3, a4);
    case 3LL:
      v197 = v5 + 5688;
      v215 = v7;
      v209 = v5 + 6736;
      switch ( *(_BYTE *)(v5 + 7776) )
      {
        case 0:
LABEL_10:
          v198 = v4;
          v17 = *(volatile void **)(v5 + 6760);
          *(_QWORD *)(v5 + 6768) = v17;
          *(_BYTE *)(v5 + 7777) = 1;
          v221 = *(_QWORD *)(v5 + 6736);
          v218 = *(_QWORD *)(v5 + 6744);
          v171 = *(_QWORD *)(v5 + 6752);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) )
          {
            v211 = v221;
            v210 = v218;
            sub_1416C15B0(v17);
          }
          Address = (PVOID)v17;
          v18 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v211 = v221;
            v210 = v218;
            v146 = sub_1416C2250(a1, v15);
            LOBYTE(v146) = v146 ^ 1;
            v214 = v146;
            v19 = (unsigned __int64)Address;
            if ( !*((_BYTE *)Address + 1) )
            {
LABEL_30:
              Address = (PVOID)v19;
              sub_1407BC950(v217 + 6776, v19 + 8);
              if ( (v214 & 1) == 0 )
              {
                if ( 2 * *v18 )
                {
                  v211 = v221;
                  v210 = v218;
                  if ( !(unsigned __int8)sub_1416C2250(v45, v44) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v46 = Address;
              v47 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v47 == 2 )
              {
                v211 = v221;
                v210 = v218;
                WakeByAddressSingle(v46);
              }
              v48 = v217;
              *(_BYTE *)(v217 + 7777) = 0;
              v49 = *(_OWORD *)(v48 + 7224);
              v186 = *(_OWORD *)(v48 + 7240);
              v185 = v49;
              *(_QWORD *)v187 = v221;
              *(_QWORD *)&v187[8] = v218;
              *(_QWORD *)&v187[16] = v171;
              v50 = off_141EC8710;
              if ( *((_DWORD *)off_141EC8710 + 24) )
              {
                v219 = 1;
                v147 = off_141EC8710;
                sub_1416984A3(off_141EC8710);
                v50 = v147;
              }
              if ( *((_DWORD *)v50 + 4) == 2 )
              {
                v51 = 704;
                if ( *(_BYTE *)v50 )
                  v51 = 472;
                v52 = v50[1] + v51;
                v219 = 0;
                v53 = sub_1408998A0(v52, v50, &v185, &off_1417642A8);
              }
              else
              {
                v54 = 704;
                if ( *((_BYTE *)v50 + 64) )
                  v54 = 472;
                v55 = v50[9] + v54;
                v219 = 0;
                v53 = sub_1408998A0(v55, v50 + 8, &v185, &off_141764290);
              }
              v4 = v198;
              v5 = v217;
              *(_QWORD *)(v217 + 7768) = v53;
LABEL_44:
              Address = (PVOID)(v5 + 7768);
              sub_140B021B0(&v185, v5 + 7768, v4);
              v56 = v185;
              if ( (_QWORD)v185 == -3 )
              {
                v60 = v217;
                *(_BYTE *)(v217 + 7776) = 3;
              }
              else
              {
                if ( (_DWORD)v185 == -2 )
                {
                  v33 = *((_QWORD *)&v185 + 1);
                  v57 = v186;
                  v58 = ((unsigned __int64)((BYTE7(v186) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v186 + 5)) << 32)
                      | *(unsigned int *)((char *)&v186 + 1);
                  v59 = 0x800000000000000CuLL;
                  v19 = *((_QWORD *)&v186 + 1);
                }
                else
                {
                  v59 = *((_QWORD *)&v185 + 1);
                  v33 = v186;
                  v57 = BYTE8(v186);
                  v58 = ((unsigned __int64)((HIBYTE(v186) << 16)
                                          | (unsigned int)*(unsigned __int16 *)((char *)&v186 + 13)) << 32)
                      | *(unsigned int *)((char *)&v186 + 9);
                  v19 = *(_QWORD *)v187;
                  v201 = *(_OWORD *)&v187[8];
                  v202 = v188;
                  v203 = v189;
                  v204 = v190;
                }
                v153 = v201;
                v154 = v202;
                v155 = v203;
                v156 = v204;
                v63 = *(_QWORD *)Address;
                v213 = v221;
                v212 = v218;
                if ( (unsigned __int8)sub_1412F2A80(v63) )
                {
                  v213 = v221;
                  v212 = v218;
                  sub_1412E7580(v63);
                }
                if ( (_DWORD)v56 != -1 )
                {
                  if ( (_DWORD)v56 == -2 )
                  {
                    *(_QWORD *)&v185 = v59;
                    *((_QWORD *)&v185 + 1) = v33;
                    LOBYTE(v186) = v57;
                    *(_DWORD *)((char *)&v186 + 1) = v58;
                    BYTE7(v186) = BYTE6(v58);
                    *(_WORD *)((char *)&v186 + 5) = WORD2(v58);
                    *((_QWORD *)&v186 + 1) = v19;
                    *(_OWORD *)v187 = v153;
                    v205 = 0;
                    v206 = 1;
                    v207 = 0;
                    *(_QWORD *)&v202 = 1610612768;
                    *(_QWORD *)&v201 = &v205;
                    *((_QWORD *)&v201 + 1) = &off_1417C41C0;
                    if ( (unsigned __int8)sub_141230630(&v185, &v201, v64) )
                      sub_1416C3060(
                        (unsigned int)aADisplayImplem_11,
                        55,
                        (unsigned int)&v220,
                        (unsigned int)&unk_1417BC180,
                        (__int64)&off_1417C4278);
                    v33 = v205;
                    v32 = v206;
                    LOBYTE(v19) = v207;
                    v65 = HIBYTE(v207);
                    v66 = *(unsigned __int16 *)((char *)&v207 + 5);
                    v67 = *(unsigned int *)((char *)&v207 + 1);
                    v213 = v221;
                    v212 = v218;
                    sub_140BF0F60(&v185);
                    v34 = ((unsigned __int64)((v65 << 16) | v66) << 32) | v67;
                    v30 = v217;
                    v31 = v209;
                    v35 = v221;
                    v68 = *(_QWORD *)(v217 + 6776);
                    if ( !v68 )
                      goto LABEL_125;
                    goto LABEL_124;
                  }
                  *(_QWORD *)&v185 = v56;
                  *((_QWORD *)&v185 + 1) = v59;
                  *(_QWORD *)&v186 = v33;
                  BYTE8(v186) = v57;
                  *(_DWORD *)((char *)&v186 + 9) = v58;
                  HIBYTE(v186) = BYTE6(v58);
                  *(_WORD *)((char *)&v186 + 13) = WORD2(v58);
                  *(_QWORD *)v187 = v19;
                  *(_OWORD *)&v187[8] = v153;
                  v188 = v154;
                  v189 = v155;
                  *(_QWORD *)&v190 = v156;
                  v205 = 0;
                  v206 = 1;
                  v207 = 0;
                  *(_QWORD *)&v202 = 1610612768;
                  *(_QWORD *)&v201 = &v205;
                  *((_QWORD *)&v201 + 1) = &off_1417C41C0;
                  if ( (unsigned __int8)sub_140B036A0(&v185, &v201) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v220,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v33 = v205;
                  v57 = v206;
                  v103 = HIBYTE(v206);
                  v104 = *(unsigned __int16 *)((char *)&v206 + 5);
                  v105 = *(unsigned int *)((char *)&v206 + 1);
                  v19 = v207;
                  v213 = v221;
                  v212 = v218;
                  sub_140BF2F60(&v185);
                  v58 = ((unsigned __int64)((v103 << 16) | v104) << 32) | v105;
LABEL_123:
                  v35 = v221;
                  v32 = v57 | (v58 << 8);
                  v34 = v19 >> 8;
                  v30 = v217;
                  v31 = v209;
                  v68 = *(_QWORD *)(v217 + 6776);
                  if ( !v68 )
                  {
LABEL_125:
                    v106 = *(_QWORD *)(v30 + 6808);
                    if ( v106 )
                      sub_140001660(*(_QWORD *)(v30 + 6816), v106, 1);
                    v107 = *(_QWORD *)(v30 + 6840);
                    if ( v107 )
                      sub_140001660(*(_QWORD *)(v30 + 6848), v107, 1);
                    v108 = *(_QWORD *)(v30 + 6872);
                    if ( v108 )
                      sub_140001660(*(_QWORD *)(v30 + 6880), v108, 1);
                    v109 = *(_QWORD *)(v30 + 6904);
                    if ( v109 )
                      sub_140001660(*(_QWORD *)(v30 + 6912), v109, 1);
                    v110 = *(_QWORD *)(v30 + 7736);
                    if ( v110 != -1 && v110 )
                      sub_140001660(*(_QWORD *)(v30 + 7744), v110, 1);
                    v111 = *(_QWORD *)(v30 + 6936);
                    if ( v111 )
                      sub_140001660(*(_QWORD *)(v30 + 6944), v111, 1);
                    v112 = *(_QWORD *)(v30 + 6968);
                    if ( v112 )
                      sub_140001660(*(_QWORD *)(v30 + 6976), v112, 1);
                    v113 = *(_QWORD *)(v30 + 7000);
                    if ( v113 )
                      sub_140001660(*(_QWORD *)(v30 + 7008), v113, 1);
                    v114 = *(_QWORD *)(v30 + 7032);
                    if ( v114 )
                      sub_140001660(*(_QWORD *)(v30 + 7040), v114, 1);
                    v115 = *(_QWORD *)(v30 + 7064);
                    if ( v115 )
                      sub_140001660(*(_QWORD *)(v30 + 7072), v115, 1);
                    v116 = *(_QWORD *)(v30 + 7096);
                    if ( v116 )
                      sub_140001660(*(_QWORD *)(v30 + 7104), v116, 1);
                    v117 = *(_QWORD *)(v30 + 7128);
                    if ( v117 )
                      sub_140001660(*(_QWORD *)(v30 + 7136), v117, 1);
                    v118 = *(_QWORD *)(v30 + 7160);
                    if ( v118 )
                      sub_140001660(*(_QWORD *)(v30 + 7168), v118, 1);
                    v119 = *(_QWORD *)(v30 + 7192);
                    if ( v119 )
                      sub_140001660(*(_QWORD *)(v30 + 7200), v119, 1);
                    v120 = *(_QWORD *)(v30 + 7256);
                    if ( v120 )
                      sub_140001660(*(_QWORD *)(v30 + 7264), v120, 1);
                    v121 = *(_QWORD *)(v30 + 7288);
                    if ( v121 )
                      sub_140001660(*(_QWORD *)(v30 + 7296), v121, 1);
                    v122 = *(_QWORD *)(v30 + 7320);
                    if ( v122 )
                      sub_140001660(*(_QWORD *)(v30 + 7328), v122, 1);
                    v123 = *(_QWORD *)(v30 + 7352);
                    if ( v123 )
                      sub_140001660(*(_QWORD *)(v30 + 7360), v123, 1);
                    v124 = *(_QWORD *)(v30 + 7384);
                    if ( v124 )
                      sub_140001660(*(_QWORD *)(v30 + 7392), v124, 1);
                    v125 = *(_QWORD *)(v30 + 7416);
                    if ( v125 )
                      sub_140001660(*(_QWORD *)(v30 + 7424), v125, 1);
                    v126 = *(_QWORD *)(v30 + 7448);
                    if ( v126 )
                      sub_140001660(*(_QWORD *)(v30 + 7456), v126, 1);
                    v127 = *(_QWORD *)(v30 + 7480);
                    if ( v127 )
                      sub_140001660(*(_QWORD *)(v30 + 7488), v127, 1);
                    v128 = *(_QWORD *)(v30 + 7512);
                    if ( v128 )
                      sub_140001660(*(_QWORD *)(v30 + 7520), v128, 1);
                    v129 = *(_QWORD *)(v30 + 7544);
                    if ( v129 )
                      sub_140001660(*(_QWORD *)(v30 + 7552), v129, 1);
                    v130 = *(_QWORD *)(v30 + 7576);
                    if ( v130 )
                      sub_140001660(*(_QWORD *)(v30 + 7584), v130, 1);
                    v131 = *(_QWORD *)(v30 + 7608);
                    if ( v131 )
                      sub_140001660(*(_QWORD *)(v30 + 7616), v131, 1);
                    v132 = *(_QWORD *)(v30 + 7640);
                    if ( v132 )
                      sub_140001660(*(_QWORD *)(v30 + 7648), v132, 1);
                    v133 = *(_QWORD *)(v30 + 7672);
                    if ( v133 )
                      sub_140001660(*(_QWORD *)(v30 + 7680), v133, 1);
                    v134 = *(_QWORD *)(v30 + 7704);
                    if ( v134 )
                      sub_140001660(*(_QWORD *)(v30 + 7712), v134, 1);
                    goto LABEL_184;
                  }
LABEL_124:
                  sub_140001660(*(_QWORD *)(v30 + 6784), v68, 1);
                  goto LABEL_125;
                }
                if ( v59 == -1 )
                  goto LABEL_123;
                v165[0] = v59;
                v165[1] = v33;
                v166 = v57;
                v167 = v58;
                v169 = BYTE6(v58);
                v168 = WORD2(v58);
                v170 = v19;
                v213 = v221;
                v212 = v218;
                sub_140ACCA70(&v185, v165);
                v221 = *((_QWORD *)&v185 + 1);
                v69 = v185;
                v218 = v186;
                LOBYTE(v19) = BYTE8(v186);
                v70 = HIBYTE(v186);
                v71 = *(unsigned __int16 *)((char *)&v186 + 13);
                v72 = *(unsigned int *)((char *)&v186 + 9);
                v35 = *(_QWORD *)v187;
                v172 = *(_OWORD *)&v187[8];
                v173 = v188;
                v174 = v189;
                v175 = v190;
                v176 = v191;
                v60 = v217;
                v73 = *(_QWORD *)(v217 + 6776);
                if ( v73 )
                  sub_140001660(*(_QWORD *)(v217 + 6784), v73, 1);
                v74 = *(_QWORD *)(v60 + 6808);
                if ( v74 )
                  sub_140001660(*(_QWORD *)(v60 + 6816), v74, 1);
                v75 = *(_QWORD *)(v60 + 6840);
                if ( v75 )
                  sub_140001660(*(_QWORD *)(v60 + 6848), v75, 1);
                v76 = *(_QWORD *)(v60 + 6872);
                if ( v76 )
                  sub_140001660(*(_QWORD *)(v60 + 6880), v76, 1);
                v77 = *(_QWORD *)(v60 + 6904);
                if ( v77 )
                  sub_140001660(*(_QWORD *)(v60 + 6912), v77, 1);
                v78 = *(_QWORD *)(v60 + 7736);
                if ( v78 != -1 && v78 )
                  sub_140001660(*(_QWORD *)(v60 + 7744), v78, 1);
                v79 = *(_QWORD *)(v60 + 6936);
                if ( v79 )
                  sub_140001660(*(_QWORD *)(v60 + 6944), v79, 1);
                v80 = *(_QWORD *)(v60 + 6968);
                if ( v80 )
                  sub_140001660(*(_QWORD *)(v60 + 6976), v80, 1);
                v81 = *(_QWORD *)(v60 + 7000);
                if ( v81 )
                  sub_140001660(*(_QWORD *)(v60 + 7008), v81, 1);
                v82 = *(_QWORD *)(v60 + 7032);
                if ( v82 )
                  sub_140001660(*(_QWORD *)(v60 + 7040), v82, 1);
                v83 = *(_QWORD *)(v60 + 7064);
                if ( v83 )
                  sub_140001660(*(_QWORD *)(v60 + 7072), v83, 1);
                v84 = *(_QWORD *)(v60 + 7096);
                if ( v84 )
                  sub_140001660(*(_QWORD *)(v60 + 7104), v84, 1);
                v85 = *(_QWORD *)(v60 + 7128);
                if ( v85 )
                  sub_140001660(*(_QWORD *)(v60 + 7136), v85, 1);
                v86 = *(_QWORD *)(v60 + 7160);
                if ( v86 )
                  sub_140001660(*(_QWORD *)(v60 + 7168), v86, 1);
                v87 = *(_QWORD *)(v60 + 7192);
                if ( v87 )
                  sub_140001660(*(_QWORD *)(v60 + 7200), v87, 1);
                v88 = *(_QWORD *)(v60 + 7256);
                if ( v88 )
                  sub_140001660(*(_QWORD *)(v60 + 7264), v88, 1);
                v89 = *(_QWORD *)(v60 + 7288);
                if ( v89 )
                  sub_140001660(*(_QWORD *)(v60 + 7296), v89, 1);
                v90 = *(_QWORD *)(v60 + 7320);
                if ( v90 )
                  sub_140001660(*(_QWORD *)(v60 + 7328), v90, 1);
                v91 = *(_QWORD *)(v60 + 7352);
                if ( v91 )
                  sub_140001660(*(_QWORD *)(v60 + 7360), v91, 1);
                v92 = *(_QWORD *)(v60 + 7384);
                if ( v92 )
                  sub_140001660(*(_QWORD *)(v60 + 7392), v92, 1);
                v93 = *(_QWORD *)(v60 + 7416);
                if ( v93 )
                  sub_140001660(*(_QWORD *)(v60 + 7424), v93, 1);
                v94 = *(_QWORD *)(v60 + 7448);
                if ( v94 )
                  sub_140001660(*(_QWORD *)(v60 + 7456), v94, 1);
                v95 = *(_QWORD *)(v60 + 7480);
                if ( v95 )
                  sub_140001660(*(_QWORD *)(v60 + 7488), v95, 1);
                v96 = *(_QWORD *)(v60 + 7512);
                if ( v96 )
                  sub_140001660(*(_QWORD *)(v60 + 7520), v96, 1);
                v97 = *(_QWORD *)(v60 + 7544);
                if ( v97 )
                  sub_140001660(*(_QWORD *)(v60 + 7552), v97, 1);
                v98 = *(_QWORD *)(v60 + 7576);
                if ( v98 )
                  sub_140001660(*(_QWORD *)(v60 + 7584), v98, 1);
                v99 = *(_QWORD *)(v60 + 7608);
                if ( v99 )
                  sub_140001660(*(_QWORD *)(v60 + 7616), v99, 1);
                v100 = *(_QWORD *)(v60 + 7640);
                if ( v100 )
                  sub_140001660(*(_QWORD *)(v60 + 7648), v100, 1);
                v101 = *(_QWORD *)(v60 + 7672);
                if ( v101 )
                  sub_140001660(*(_QWORD *)(v60 + 7680), v101, 1);
                v102 = *(_QWORD *)(v60 + 7704);
                if ( v102 )
                  sub_140001660(*(_QWORD *)(v60 + 7712), v102, 1);
                *(_BYTE *)(v60 + 7777) = 0;
                v196 = v176;
                v195 = v175;
                v194 = v174;
                v193 = v173;
                v192 = v172;
                *(_BYTE *)(v60 + 7776) = 1;
                if ( v69 != -2 )
                {
                  v34 = ((unsigned __int64)((v70 << 16) | v71) << 32) | v72;
                  v31 = v209;
                  v32 = v218;
                  v33 = v221;
                  goto LABEL_187;
                }
              }
              *(_BYTE *)(v60 + 7784) = 3;
              *(_BYTE *)(v60 + 7792) = 3;
              v61 = 3;
              result = 1;
              goto LABEL_208;
            }
          }
          else
          {
            v214 = 0;
            v19 = (unsigned __int64)Address;
            if ( !*((_BYTE *)Address + 1) )
              goto LABEL_30;
          }
          *(_QWORD *)&v201 = 0;
          *((_QWORD *)&v201 + 1) = 1;
          *(_QWORD *)&v202 = 0;
          *(_QWORD *)&v186 = 1610612768;
          *(_QWORD *)&v185 = &v201;
          *((_QWORD *)&v185 + 1) = &off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v185) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v220,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v19 = *((_QWORD *)&v201 + 1);
          v22 = v201;
          v23 = (unsigned __int8)v202;
          v24 = BYTE7(v202);
          v25 = *(unsigned __int16 *)((char *)&v202 + 5);
          v26 = *(unsigned int *)((char *)&v202 + 1);
          if ( !(_BYTE)v214 )
          {
            if ( 2 * *v18 )
            {
              v211 = v221;
              v210 = v218;
              if ( !(unsigned __int8)sub_1416C2250(v21, v20) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v27 = Address;
          v28 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v28 == 2 )
          {
            v211 = v221;
            v210 = v218;
            WakeByAddressSingle(v27);
          }
          if ( v22 == -1 )
          {
            v214 = v23;
            goto LABEL_30;
          }
          v29 = ((unsigned __int64)((v24 << 16) | v25) << 32) | v26;
          v30 = v217;
          v31 = v209;
          v32 = v19;
          v33 = v22;
          LOBYTE(v19) = v23;
          v34 = v29;
          v35 = v221;
LABEL_184:
          if ( ((v35 != 0) & *(_BYTE *)(v30 + 7777)) != 0 )
            sub_140001660(v218, v35, 1);
          *(_BYTE *)(v30 + 7777) = 0;
          v196 = v176;
          v195 = v175;
          v194 = v174;
          v193 = v173;
          v192 = v172;
          *(_BYTE *)(v30 + 7776) = 1;
          v69 = -1;
LABEL_187:
          v152 = v196;
          v151 = v195;
          v150 = v194;
          v149 = v193;
          v148 = v192;
          sub_140BEB4E0(v31);
          v136 = v34 << 8;
          if ( v69 != -1 )
          {
            v184 = v152;
            v183 = v151;
            v182 = v150;
            v181 = v149;
            v180 = v148;
            *(_QWORD *)v177 = v69;
            *(_QWORD *)&v177[8] = v33;
            *(_QWORD *)&v177[16] = v32;
            v178 = v136 | (unsigned __int8)v19;
            v179 = v35;
            sub_140B09A50(&v185, v177);
            v31 = ((unsigned __int64)((HIBYTE(v185) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v185 + 13)) << 32)
                | *(unsigned int *)((char *)&v185 + 9);
            v10 = BYTE8(v185);
            v37 = *((_QWORD *)&v186 + 1);
            v36 = v186;
            v38 = *(_QWORD *)v187;
            if ( (_QWORD)v185 == -1 )
            {
              v42 = 0;
            }
            else
            {
              HIBYTE(v185) = (((unsigned __int64)((HIBYTE(v185) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v185 + 13)) << 32)
                            | *(unsigned int *)((char *)&v185 + 9)) >> 48;
              *(_WORD *)((char *)&v185 + 13) = WORD2(v31);
              *(_DWORD *)((char *)&v185 + 9) = v31;
              *(_QWORD *)&v192 = 0;
              *((_QWORD *)&v192 + 1) = 1;
              *(_QWORD *)&v193 = 0;
              *(_QWORD *)&v173 = 1610612768;
              *(_QWORD *)&v172 = &v192;
              *((_QWORD *)&v172 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v185, &v172, v137) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v220,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v37 = *((_QWORD *)&v192 + 1);
              v36 = v192;
              v38 = v193;
              sub_140BF0F60(&v185);
              v42 = 1;
              v10 = 3;
            }
            v139 = v215;
            goto LABEL_201;
          }
          v38 = v136 | (unsigned __int8)v19;
          if ( v136 < 0 )
          {
            v138 = 0;
            goto LABEL_193;
          }
          if ( !v38 )
          {
            v37 = 1;
            v139 = v215;
            if ( !v33 )
              goto LABEL_200;
            goto LABEL_199;
          }
          nullsub_1(v135);
          v138 = 1;
          v140 = sub_140001650(v38, 1);
          if ( !v140 )
          {
LABEL_193:
            v221 = v33;
            v218 = v32;
            sub_1416C2D4B(v138, v38);
          }
          v37 = v140;
          sub_141684120(v140, v32, v38);
          v139 = v215;
          if ( v33 )
          {
LABEL_199:
            v141 = v139;
            sub_140001660(v32, v33, 1);
            v139 = v141;
          }
LABEL_200:
          v42 = 1;
          v10 = 3;
          v36 = v38;
LABEL_201:
          *(_BYTE *)v208 = 1;
          sub_140BF0DE0(v139);
          v43 = v217;
          if ( *(_QWORD *)(v217 + 4616) != -1 )
          {
            v208 = (_QWORD *)(v217 + 4624);
            v142 = *(char **)(v217 + 4624);
            v218 = *(_QWORD *)(v217 + 4632);
            v221 = 0;
            Address = v142;
            while ( v218 != v221 )
            {
              ++v221;
              v143 = v142 + 96;
              sub_1402C7520();
              v142 = v143;
            }
            v43 = v217;
            v41 = *(_QWORD *)(v217 + 4616);
            if ( v41 )
LABEL_206:
              sub_140001660(*v208, 96 * v41, 8);
          }
LABEL_207:
          *(_BYTE *)(v43 + 7792) = 1;
          sub_140BE07C0(v215);
          v159 = v31;
          v161 = BYTE6(v31);
          v160 = WORD2(v31);
          v163 = v37;
          v164 = v38;
          v158 = v10;
          v162 = v36;
          v157 = v42;
          v144 = v217;
          *(_BYTE *)(v217 + 7811) = 0;
          sub_141684120(&v185, v144, 360);
          *(_BYTE *)(v144 + 7810) = 0;
          v145 = *(_QWORD *)(v144 + 384);
          *(_BYTE *)(v144 + 7809) = 0;
          *(_QWORD *)&v177[16] = *(_QWORD *)(v144 + 376);
          *(_OWORD *)v177 = *(_OWORD *)(v144 + 360);
          sub_14047E370(
            (unsigned int)&v185,
            v145,
            (unsigned int)&v157,
            (unsigned int)v177,
            *(_DWORD *)(v144 + 7800),
            *(_DWORD *)(v144 + 7804));
          v61 = 1;
          result = 0;
          v60 = v217;
LABEL_208:
          *(_BYTE *)(v60 + 7808) = v61;
          return result;
        case 1:
LABEL_227:
          sub_1416C3400(&off_1417BB108, v15, a3, a4);
        case 2:
LABEL_226:
          sub_1416C3420(&off_1417BB108, v15, a3, a4);
        case 3:
          goto LABEL_44;
      }
  }
}
