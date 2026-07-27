// win 1.2.1 | module src/commands/analytics.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = load_quota_history | mapped via command-name string xref (win-native, ground-truth)
char __fastcall load_quota_history(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v14; // r15
  _BYTE *v15; // r14
  unsigned __int64 v16; // r12
  volatile void *v17; // rdi
  __int64 *v18; // rsi
  int v19; // eax
  unsigned __int64 v20; // r14
  char v21; // cl
  __int64 v22; // rdx
  __int64 v23; // rcx
  const char **v24; // rbx
  int v25; // edi
  int v26; // r13d
  unsigned int v27; // r12d
  __int64 v28; // r15
  PVOID v29; // rcx
  char v30; // al
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // r15
  __int64 v34; // r13
  const char **v35; // r12
  unsigned __int8 v36; // bl
  unsigned __int64 v37; // rdi
  __int64 v38; // rax
  __int128 *v39; // rdx
  char *v40; // r14
  __int64 v41; // rdi
  __int64 v42; // rsi
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r12
  __int64 v45; // rax
  unsigned __int8 v46; // r12
  __int64 v47; // r13
  __int64 v48; // rdx
  __int64 v49; // rcx
  PVOID v50; // rcx
  char v51; // al
  __int64 v52; // rax
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  _QWORD *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  char *v62; // r12
  char v63; // r15
  unsigned __int64 v64; // rbx
  unsigned __int64 v65; // rdi
  __int64 v66; // r13
  __int64 v67; // r13
  __int64 v68; // rsi
  __int64 v69; // rsi
  int v70; // r12d
  unsigned int v71; // r15d
  __int64 v72; // rdi
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
  char v103; // cl
  char result; // al
  void *v105; // r15
  int v106; // r14d
  int v107; // esi
  __int64 v108; // rdi
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
  __int64 v135; // rdx
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rdx
  PVOID v139; // r13
  __int64 v140; // rcx
  __int64 v141; // rdi
  __int64 v142; // r8
  __int64 v143; // rbx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rbx
  char *v147; // rcx
  char *v148; // r13
  __int64 v149; // rdi
  __int64 v150; // rdx
  _QWORD *v151; // rdi
  _OWORD v152[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v153; // [rsp+60h] [rbp-20h]
  __int128 v154; // [rsp+70h] [rbp-10h]
  __int128 v155; // [rsp+80h] [rbp+0h]
  __int128 v156; // [rsp+90h] [rbp+10h]
  __int128 v157; // [rsp+A0h] [rbp+20h]
  __int64 v158; // [rsp+B0h] [rbp+30h] BYREF
  char v159; // [rsp+B8h] [rbp+38h]
  int v160; // [rsp+B9h] [rbp+39h]
  __int16 v161; // [rsp+BDh] [rbp+3Dh]
  char v162; // [rsp+BFh] [rbp+3Fh]
  char *v163; // [rsp+C0h] [rbp+40h]
  __int64 v164; // [rsp+C8h] [rbp+48h]
  __int64 v165; // [rsp+D0h] [rbp+50h]
  __int64 v166; // [rsp+E8h] [rbp+68h]
  __int128 v167; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v168; // [rsp+100h] [rbp+80h]
  __int128 v169; // [rsp+110h] [rbp+90h]
  __int128 v170; // [rsp+120h] [rbp+A0h]
  const char *v171; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v172; // [rsp+138h] [rbp+B8h]
  char *v173; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v174; // [rsp+148h] [rbp+C8h]
  _BYTE v175[24]; // [rsp+150h] [rbp+D0h]
  __int128 v176; // [rsp+168h] [rbp+E8h]
  __int128 v177; // [rsp+178h] [rbp+F8h]
  __int128 v178; // [rsp+188h] [rbp+108h]
  _QWORD v179[2]; // [rsp+298h] [rbp+218h] BYREF
  char v180; // [rsp+2A8h] [rbp+228h]
  int v181; // [rsp+2A9h] [rbp+229h]
  __int16 v182; // [rsp+2ADh] [rbp+22Dh]
  char v183; // [rsp+2AFh] [rbp+22Fh]
  _BYTE v184[24]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v185; // [rsp+2C8h] [rbp+248h]
  unsigned __int64 v186; // [rsp+2D0h] [rbp+250h]
  __int128 v187; // [rsp+2D8h] [rbp+258h]
  __int128 v188; // [rsp+2E8h] [rbp+268h]
  __int128 v189; // [rsp+2F8h] [rbp+278h]
  __int128 v190; // [rsp+308h] [rbp+288h]
  __int128 v191; // [rsp+320h] [rbp+2A0h] BYREF
  __int128 v192; // [rsp+330h] [rbp+2B0h]
  __int128 v193; // [rsp+340h] [rbp+2C0h]
  __int128 v194; // [rsp+350h] [rbp+2D0h]
  __int128 v195; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v196; // [rsp+370h] [rbp+2F0h]
  __int128 v197; // [rsp+380h] [rbp+300h]
  __int64 v198; // [rsp+390h] [rbp+310h]
  __int64 v199; // [rsp+3A0h] [rbp+320h]
  __int64 v200; // [rsp+3A8h] [rbp+328h]
  __int128 v201; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v202; // [rsp+3C0h] [rbp+340h]
  __int128 v203; // [rsp+3D0h] [rbp+350h]
  __int64 v204; // [rsp+3E0h] [rbp+360h]
  __int64 v205; // [rsp+3F0h] [rbp+370h]
  __int64 v206; // [rsp+3F8h] [rbp+378h]
  __int64 v207; // [rsp+400h] [rbp+380h]
  const char **v208; // [rsp+408h] [rbp+388h] BYREF
  __int64 v209; // [rsp+410h] [rbp+390h]
  __int64 v210; // [rsp+418h] [rbp+398h]
  __int64 v211; // [rsp+420h] [rbp+3A0h]
  _BYTE *v212; // [rsp+428h] [rbp+3A8h]
  __int64 *v213; // [rsp+430h] [rbp+3B0h]
  unsigned __int64 v214; // [rsp+438h] [rbp+3B8h]
  __int64 v215; // [rsp+440h] [rbp+3C0h]
  __int64 v216; // [rsp+448h] [rbp+3C8h]
  __int64 v217; // [rsp+450h] [rbp+3D0h]
  PVOID v218; // [rsp+458h] [rbp+3D8h]
  __int64 v219; // [rsp+460h] [rbp+3E0h]
  __int64 v220; // [rsp+468h] [rbp+3E8h]
  __int64 v221; // [rsp+470h] [rbp+3F0h]
  __int64 v222; // [rsp+478h] [rbp+3F8h]
  char v223; // [rsp+487h] [rbp+407h] BYREF
  __int64 v224; // [rsp+488h] [rbp+408h]
  __int64 v225; // [rsp+490h] [rbp+410h]
  char v226; // [rsp+49Fh] [rbp+41Fh]
  __int64 v227; // [rsp+4A0h] [rbp+420h]
  PVOID Address; // [rsp+4A8h] [rbp+428h]
  __int64 v229; // [rsp+4B0h] [rbp+430h]

  v229 = -2;
  v4 = a2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 0x2000);
  v224 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8193) = 257;
      *(_BYTE *)(a1 + 8195) = 1;
      v7 = a1 + 4288;
      sub_141684120(a1 + 4288, a1 + 392, 3896);
      switch ( *(_BYTE *)(v5 + 8176) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_224;
        case 2:
          goto LABEL_223;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 4288;
      switch ( *(_BYTE *)(a1 + 8176) )
      {
        case 0:
LABEL_4:
          v8 = v5 + 4808;
          *(_QWORD *)&v175[16] = 0;
          v171 = aLoadQuotaHisto;
          v172 = 18;
          v173 = aRepo_0;
          v174 = 4;
          v221 = v7;
          *(_QWORD *)v175 = v7;
          *(_QWORD *)&v175[8] = v5 + 4808;
          v9 = sub_140003640((volatile void *)(*(_QWORD *)(v5 + 4800) + 16LL));
          Address = (PVOID)(v5 + 4808);
          if ( v9 )
            goto LABEL_5;
          sub_1416850A0(v184, &v171, &v173);
          v10 = v184[0];
          if ( v184[0] == 0xFF )
          {
            v9 = *(_QWORD *)&v184[8];
LABEL_5:
            *(_QWORD *)&v175[16] = 0;
            v171 = aLoadQuotaHisto;
            v172 = 18;
            v173 = aAccountkey_5;
            v174 = 10;
            *(_QWORD *)v175 = v221;
            *(_QWORD *)&v175[8] = v8;
            sub_140973410(v184, &v171);
            v10 = v184[0];
            if ( v184[0] == 0xFF )
            {
              v11 = v185;
              v5 = v224;
              v12 = v224 + 4832;
              v13 = *(_OWORD *)&v184[8];
              *(_QWORD *)(v224 + 4856) = v9;
              *(_OWORD *)(v5 + 4832) = v13;
              *(_QWORD *)(v5 + 4848) = v11;
              *(_BYTE *)(v5 + 5936) = 0;
              v14 = v5 + 5944;
              sub_141684120(v5 + 5944, v12, 1112);
              v15 = (_BYTE *)(v5 + 8168);
              *(_BYTE *)(v5 + 8168) = 0;
              v7 = v221;
LABEL_8:
              v16 = v5 + 7056;
              sub_141684120(v5 + 7056, v14, 1112);
              switch ( *(_BYTE *)(v5 + 8160) )
              {
                case 0:
                  goto LABEL_10;
                case 1:
                  goto LABEL_226;
                case 2:
                  goto LABEL_225;
                case 3:
                  goto LABEL_22;
              }
            }
          }
          v33 = ((unsigned __int64)((v184[7] << 16) | (unsigned int)*(unsigned __int16 *)&v184[5]) << 32)
              | *(unsigned int *)&v184[1];
          v40 = *(char **)&v184[8];
          v41 = *(_QWORD *)&v184[16];
          v42 = v185;
          sub_140BF0DE0(v221);
          if ( *(_QWORD *)Address == -1 )
          {
            v46 = 1;
            v47 = v224;
            goto LABEL_207;
          }
          v222 = v224 + 4816;
          v43 = *(_QWORD *)(v224 + 4816);
          v225 = *(_QWORD *)(v224 + 4824);
          v227 = 0;
          v214 = v43;
          while ( v225 != v227 )
          {
            ++v227;
            v44 = v43 + 96;
            sub_1402C7520();
            v43 = v44;
          }
          v45 = *(_QWORD *)Address;
          v46 = 1;
          v47 = v224;
          if ( !*(_QWORD *)Address )
            goto LABEL_207;
          goto LABEL_206;
        case 1:
LABEL_224:
          v221 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_223:
          v221 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = (_BYTE *)(v5 + 8168);
  v14 = v5 + 5944;
  switch ( *(_BYTE *)(v5 + 8168) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v221 = v7;
      v206 = v5 + 8168;
      v205 = v5 + 5944;
      sub_1416C3400(&off_1417B7B80, a2, a3, a4);
    case 2:
      v221 = v7;
      v206 = v5 + 8168;
      v205 = v5 + 5944;
      sub_1416C3420(&off_1417B7B80, a2, a3, a4);
    case 3:
      v16 = v5 + 7056;
      switch ( *(_BYTE *)(v5 + 8160) )
      {
        case 0:
LABEL_10:
          v166 = v4;
          v214 = v16;
          v211 = v14;
          v212 = v15;
          v221 = v7;
          v17 = *(volatile void **)(v5 + 7080);
          *(_QWORD *)(v5 + 7088) = v17;
          *(_BYTE *)(v5 + 8161) = 1;
          v227 = *(_QWORD *)(v5 + 7056);
          v225 = *(_QWORD *)(v5 + 7064);
          v213 = *(__int64 **)(v5 + 7072);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) )
          {
            v216 = v227;
            v215 = v225;
            sub_1416C15B0(v17);
          }
          Address = (PVOID)v17;
          v18 = off_141EC90B8;
          if ( 2 * *off_141EC90B8 )
          {
            v216 = v227;
            v215 = v225;
            v19 = sub_1416C2250(a1, a2);
            LOBYTE(v19) = v19 ^ 1;
          }
          else
          {
            v19 = 0;
          }
          v20 = (unsigned __int64)Address;
          v21 = *((_BYTE *)Address + 1);
          LODWORD(v222) = v19;
          if ( !v21 )
            goto LABEL_33;
          *(_QWORD *)&v201 = 0;
          *((_QWORD *)&v201 + 1) = 1;
          *(_QWORD *)&v202 = 0;
          v173 = (char *)1610612768;
          v171 = (const char *)&v201;
          v172 = (__int64)&off_1417C41C0;
          if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v171) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v223,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v20 = *((_QWORD *)&v201 + 1);
          v24 = (const char **)v201;
          v25 = (unsigned __int8)v202;
          v26 = BYTE7(v202);
          v27 = *(unsigned __int16 *)((char *)&v202 + 5);
          v28 = *(unsigned int *)((char *)&v202 + 1);
          if ( !(_BYTE)v222 )
          {
            if ( 2 * *v18 )
            {
              v216 = v227;
              v215 = v225;
              if ( !(unsigned __int8)sub_1416C2250(v23, v22) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v29 = Address;
          v30 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v30 == 2 )
          {
            v216 = v227;
            v215 = v225;
            WakeByAddressSingle(v29);
          }
          if ( v24 == (const char **)-1LL )
          {
            LODWORD(v222) = v25;
LABEL_33:
            Address = (PVOID)v20;
            sub_1407BC950(v224 + 7096, v20 + 8);
            if ( (v222 & 1) == 0 )
            {
              if ( 2 * *v18 )
              {
                v216 = v227;
                v215 = v225;
                if ( !(unsigned __int8)sub_1416C2250(v49, v48) )
                  *((_BYTE *)Address + 1) = 1;
              }
            }
            v50 = Address;
            v51 = *(_BYTE *)Address;
            *(_BYTE *)Address = 0;
            if ( v51 == 2 )
            {
              v216 = v227;
              v215 = v225;
              WakeByAddressSingle(v50);
            }
            v52 = v224;
            *(_BYTE *)(v224 + 8161) = 0;
            v39 = (__int128 *)(v52 + 8088);
            v53 = *(_OWORD *)(v52 + 7624);
            *(_OWORD *)(v52 + 8088) = *(_OWORD *)(v52 + 7608);
            *(_OWORD *)(v52 + 8104) = v53;
            *(_QWORD *)(v52 + 8120) = v227;
            *(_QWORD *)(v52 + 8128) = v225;
            *(_QWORD *)(v52 + 8136) = v213;
            Address = (PVOID)(v52 + 8152);
            *(_BYTE *)(v52 + 8152) = 0;
            v4 = v166;
LABEL_38:
            v153 = *((_QWORD *)v39 + 6);
            v54 = *v39;
            v55 = v39[1];
            v222 = (__int64)v39;
            v152[2] = v39[2];
            v152[1] = v55;
            v152[0] = v54;
            v56 = off_141EC8710;
            if ( *((_DWORD *)off_141EC8710 + 24) )
            {
              v226 = 1;
              v151 = off_141EC8710;
              sub_1416984A3(off_141EC8710);
              v56 = v151;
            }
            if ( *((_DWORD *)v56 + 4) == 2 )
            {
              v57 = 704;
              if ( *(_BYTE *)v56 )
                v57 = 472;
              v58 = v56[1] + v57;
              v226 = 0;
              v59 = sub_14089DC40(v58, v56, v152, &off_1417642A8);
            }
            else
            {
              v60 = 704;
              if ( *((_BYTE *)v56 + 64) )
                v60 = 472;
              v61 = v56[9] + v60;
              v226 = 0;
              v59 = sub_14089DC40(v61, v56 + 8, v152, &off_141764290);
            }
            v5 = v224;
            *(_QWORD *)(v224 + 8144) = v59;
LABEL_48:
            v213 = (__int64 *)(v5 + 8144);
            sub_140B00F20(&v171, v5 + 8144, v4);
            v20 = (unsigned __int64)v171;
            if ( v171 == (const char *)-3LL )
            {
              v67 = v224;
              *(_BYTE *)(v224 + 8152) = 3;
              *(_BYTE *)(v67 + 8160) = 3;
            }
            else
            {
              if ( (_DWORD)v171 == -2 )
              {
                v62 = (char *)v172;
                v63 = (char)v173;
                v64 = ((unsigned __int64)((HIBYTE(v173) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v173 + 5)) << 32)
                    | *(unsigned int *)((char *)&v173 + 1);
                v65 = 0x800000000000000CuLL;
                v66 = v174;
              }
              else
              {
                v65 = v172;
                v62 = v173;
                v63 = v174;
                v64 = ((unsigned __int64)((HIBYTE(v174) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v174 + 5)) << 32)
                    | *(unsigned int *)((char *)&v174 + 1);
                v66 = *(_QWORD *)v175;
                v195 = *(_OWORD *)&v175[8];
                v196 = v176;
                v197 = v177;
                v198 = v178;
              }
              v201 = v195;
              v202 = v196;
              v203 = v197;
              v204 = v198;
              v68 = *v213;
              v220 = v227;
              v219 = v225;
              v218 = Address;
              v217 = v222;
              if ( (unsigned __int8)sub_1412F2A80(v68) )
              {
                v220 = v227;
                v219 = v225;
                v218 = Address;
                v217 = v222;
                sub_1412E7580(v68);
              }
              if ( (_DWORD)v20 != -1 )
              {
                if ( (_DWORD)v20 == -2 )
                {
                  v171 = (const char *)v65;
                  v172 = (__int64)v62;
                  LOBYTE(v173) = v63;
                  *(_DWORD *)((char *)&v173 + 1) = v64;
                  HIBYTE(v173) = BYTE6(v64);
                  *(_WORD *)((char *)&v173 + 5) = WORD2(v64);
                  v174 = v66;
                  *(_OWORD *)v175 = v201;
                  v208 = &v171;
                  v209 = (__int64)sub_141230630;
                  sub_14149C0F0(&v195, &unk_1417B8CD1, &v208);
                  v220 = v227;
                  v219 = v225;
                  v218 = Address;
                  v217 = v222;
                  sub_140BF0F60(&v171);
                  Address = *((PVOID *)&v195 + 1);
                  v35 = (const char **)v195;
                  v36 = v196;
                  v37 = ((unsigned __int64)((BYTE7(v196) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v196 + 5)) << 32)
                      | *(unsigned int *)((char *)&v196 + 1);
                }
                else
                {
                  v171 = (const char *)v20;
                  v172 = v65;
                  v173 = v62;
                  LOBYTE(v174) = v63;
                  *(_DWORD *)((char *)&v174 + 1) = v64;
                  HIBYTE(v174) = BYTE6(v64);
                  *(_WORD *)((char *)&v174 + 5) = WORD2(v64);
                  *(_QWORD *)v175 = v66;
                  *(_OWORD *)&v175[8] = v201;
                  v176 = v202;
                  v177 = v203;
                  *(_QWORD *)&v178 = v204;
                  v208 = nullptr;
                  v209 = 1;
                  v210 = 0;
                  *(_QWORD *)&v196 = 1610612768;
                  *(_QWORD *)&v195 = &v208;
                  *((_QWORD *)&v195 + 1) = &off_1417C41C0;
                  if ( (unsigned __int8)sub_140B036A0(&v171, &v195) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v223,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v35 = v208;
                  v105 = (void *)v209;
                  v36 = v210;
                  v106 = HIBYTE(v210);
                  v107 = *(unsigned __int16 *)((char *)&v210 + 5);
                  v108 = *(unsigned int *)((char *)&v210 + 1);
                  v220 = v227;
                  v219 = v225;
                  v218 = Address;
                  v217 = v222;
                  sub_140BF2F60(&v171);
                  Address = v105;
                  v20 = (unsigned int)(v106 << 16);
                  v37 = ((unsigned __int64)((unsigned int)v20 | v107) << 32) | v108;
                }
                v32 = v224;
                *(_BYTE *)(v224 + 8152) = 1;
                v109 = *(_QWORD *)(v32 + 7096);
                v33 = v214;
                v34 = v227;
                if ( v109 )
                  sub_140001660(*(_QWORD *)(v32 + 7104), v109, 1);
                v110 = *(_QWORD *)(v32 + 7128);
                if ( v110 )
                  sub_140001660(*(_QWORD *)(v32 + 7136), v110, 1);
                v111 = *(_QWORD *)(v32 + 7160);
                if ( v111 )
                  sub_140001660(*(_QWORD *)(v32 + 7168), v111, 1);
                v112 = *(_QWORD *)(v32 + 7192);
                if ( v112 )
                  sub_140001660(*(_QWORD *)(v32 + 7200), v112, 1);
                v113 = *(_QWORD *)(v32 + 7224);
                if ( v113 )
                  sub_140001660(*(_QWORD *)(v32 + 7232), v113, 1);
                v114 = *(_QWORD *)(v32 + 8056);
                if ( v114 != -1 && v114 )
                  sub_140001660(*(_QWORD *)(v32 + 8064), v114, 1);
                v115 = *(_QWORD *)(v32 + 7256);
                if ( v115 )
                  sub_140001660(*(_QWORD *)(v32 + 7264), v115, 1);
                v116 = *(_QWORD *)(v32 + 7288);
                if ( v116 )
                  sub_140001660(*(_QWORD *)(v32 + 7296), v116, 1);
                v117 = *(_QWORD *)(v32 + 7320);
                if ( v117 )
                  sub_140001660(*(_QWORD *)(v32 + 7328), v117, 1);
                v118 = *(_QWORD *)(v32 + 7352);
                if ( v118 )
                  sub_140001660(*(_QWORD *)(v32 + 7360), v118, 1);
                v119 = *(_QWORD *)(v32 + 7384);
                if ( v119 )
                  sub_140001660(*(_QWORD *)(v32 + 7392), v119, 1);
                v120 = *(_QWORD *)(v32 + 7416);
                if ( v120 )
                  sub_140001660(*(_QWORD *)(v32 + 7424), v120, 1);
                v121 = *(_QWORD *)(v32 + 7448);
                if ( v121 )
                  sub_140001660(*(_QWORD *)(v32 + 7456), v121, 1);
                v122 = *(_QWORD *)(v32 + 7480);
                if ( v122 )
                  sub_140001660(*(_QWORD *)(v32 + 7488), v122, 1);
                v123 = *(_QWORD *)(v32 + 7512);
                if ( v123 )
                  sub_140001660(*(_QWORD *)(v32 + 7520), v123, 1);
                v124 = *(_QWORD *)(v32 + 7544);
                if ( v124 )
                  sub_140001660(*(_QWORD *)(v32 + 7552), v124, 1);
                v125 = *(_QWORD *)(v32 + 7576);
                if ( v125 )
                  sub_140001660(*(_QWORD *)(v32 + 7584), v125, 1);
                v126 = *(_QWORD *)(v32 + 7640);
                if ( v126 )
                  sub_140001660(*(_QWORD *)(v32 + 7648), v126, 1);
                v127 = *(_QWORD *)(v32 + 7672);
                if ( v127 )
                  sub_140001660(*(_QWORD *)(v32 + 7680), v127, 1);
                v128 = *(_QWORD *)(v32 + 7704);
                if ( v128 )
                  sub_140001660(*(_QWORD *)(v32 + 7712), v128, 1);
                v129 = *(_QWORD *)(v32 + 7736);
                if ( v129 )
                  sub_140001660(*(_QWORD *)(v32 + 7744), v129, 1);
                v130 = *(_QWORD *)(v32 + 7768);
                if ( v130 )
                  sub_140001660(*(_QWORD *)(v32 + 7776), v130, 1);
                v131 = *(_QWORD *)(v32 + 7800);
                if ( v131 )
                  sub_140001660(*(_QWORD *)(v32 + 7808), v131, 1);
                v132 = *(_QWORD *)(v32 + 7832);
                if ( v132 )
                  sub_140001660(*(_QWORD *)(v32 + 7840), v132, 1);
                v133 = *(_QWORD *)(v32 + 7864);
                if ( v133 )
                  sub_140001660(*(_QWORD *)(v32 + 7872), v133, 1);
                v134 = *(_QWORD *)(v32 + 7896);
                if ( v134 )
                  sub_140001660(*(_QWORD *)(v32 + 7904), v134, 1);
                v135 = *(_QWORD *)(v32 + 7928);
                if ( v135 )
                  sub_140001660(*(_QWORD *)(v32 + 7936), v135, 1);
                v136 = *(_QWORD *)(v32 + 7960);
                if ( v136 )
                  sub_140001660(*(_QWORD *)(v32 + 7968), v136, 1);
                v137 = *(_QWORD *)(v32 + 7992);
                if ( v137 )
                  sub_140001660(*(_QWORD *)(v32 + 8000), v137, 1);
                v138 = *(_QWORD *)(v32 + 8024);
                if ( v138 )
                  sub_140001660(*(_QWORD *)(v32 + 8032), v138, 1);
                goto LABEL_184;
              }
              *(_BYTE *)Address = 1;
              v179[0] = v65;
              v179[1] = v62;
              v180 = v63;
              v181 = v64;
              v183 = BYTE6(v64);
              v182 = WORD2(v64);
              v200 = v227;
              v199 = v225;
              sub_140ACD6D0(&v171, v179);
              v69 = (__int64)v171;
              v227 = v172;
              Address = v173;
              v36 = v174;
              v70 = HIBYTE(v174);
              v71 = *(unsigned __int16 *)((char *)&v174 + 5);
              v72 = *(unsigned int *)((char *)&v174 + 1);
              v20 = *(_QWORD *)v175;
              v167 = *(_OWORD *)&v175[8];
              v168 = v176;
              v169 = v177;
              v170 = v178;
              v67 = v224;
              v73 = *(_QWORD *)(v224 + 7096);
              if ( v73 )
                sub_140001660(*(_QWORD *)(v224 + 7104), v73, 1);
              v74 = *(_QWORD *)(v67 + 7128);
              if ( v74 )
                sub_140001660(*(_QWORD *)(v67 + 7136), v74, 1);
              v75 = *(_QWORD *)(v67 + 7160);
              if ( v75 )
                sub_140001660(*(_QWORD *)(v67 + 7168), v75, 1);
              v76 = *(_QWORD *)(v67 + 7192);
              if ( v76 )
                sub_140001660(*(_QWORD *)(v67 + 7200), v76, 1);
              v77 = *(_QWORD *)(v67 + 7224);
              if ( v77 )
                sub_140001660(*(_QWORD *)(v67 + 7232), v77, 1);
              v78 = *(_QWORD *)(v67 + 8056);
              if ( v78 != -1 && v78 )
                sub_140001660(*(_QWORD *)(v67 + 8064), v78, 1);
              v79 = *(_QWORD *)(v67 + 7256);
              if ( v79 )
                sub_140001660(*(_QWORD *)(v67 + 7264), v79, 1);
              v80 = *(_QWORD *)(v67 + 7288);
              if ( v80 )
                sub_140001660(*(_QWORD *)(v67 + 7296), v80, 1);
              v81 = *(_QWORD *)(v67 + 7320);
              if ( v81 )
                sub_140001660(*(_QWORD *)(v67 + 7328), v81, 1);
              v82 = *(_QWORD *)(v67 + 7352);
              if ( v82 )
                sub_140001660(*(_QWORD *)(v67 + 7360), v82, 1);
              v83 = *(_QWORD *)(v67 + 7384);
              if ( v83 )
                sub_140001660(*(_QWORD *)(v67 + 7392), v83, 1);
              v84 = *(_QWORD *)(v67 + 7416);
              if ( v84 )
                sub_140001660(*(_QWORD *)(v67 + 7424), v84, 1);
              v85 = *(_QWORD *)(v67 + 7448);
              if ( v85 )
                sub_140001660(*(_QWORD *)(v67 + 7456), v85, 1);
              v86 = *(_QWORD *)(v67 + 7480);
              if ( v86 )
                sub_140001660(*(_QWORD *)(v67 + 7488), v86, 1);
              v87 = *(_QWORD *)(v67 + 7512);
              if ( v87 )
                sub_140001660(*(_QWORD *)(v67 + 7520), v87, 1);
              v88 = *(_QWORD *)(v67 + 7544);
              if ( v88 )
                sub_140001660(*(_QWORD *)(v67 + 7552), v88, 1);
              v89 = *(_QWORD *)(v67 + 7576);
              if ( v89 )
                sub_140001660(*(_QWORD *)(v67 + 7584), v89, 1);
              v90 = *(_QWORD *)(v67 + 7640);
              if ( v90 )
                sub_140001660(*(_QWORD *)(v67 + 7648), v90, 1);
              v91 = *(_QWORD *)(v67 + 7672);
              if ( v91 )
                sub_140001660(*(_QWORD *)(v67 + 7680), v91, 1);
              v92 = *(_QWORD *)(v67 + 7704);
              if ( v92 )
                sub_140001660(*(_QWORD *)(v67 + 7712), v92, 1);
              v93 = *(_QWORD *)(v67 + 7736);
              if ( v93 )
                sub_140001660(*(_QWORD *)(v67 + 7744), v93, 1);
              v94 = *(_QWORD *)(v67 + 7768);
              if ( v94 )
                sub_140001660(*(_QWORD *)(v67 + 7776), v94, 1);
              v95 = *(_QWORD *)(v67 + 7800);
              if ( v95 )
                sub_140001660(*(_QWORD *)(v67 + 7808), v95, 1);
              v96 = *(_QWORD *)(v67 + 7832);
              if ( v96 )
                sub_140001660(*(_QWORD *)(v67 + 7840), v96, 1);
              v97 = *(_QWORD *)(v67 + 7864);
              if ( v97 )
                sub_140001660(*(_QWORD *)(v67 + 7872), v97, 1);
              v98 = *(_QWORD *)(v67 + 7896);
              if ( v98 )
                sub_140001660(*(_QWORD *)(v67 + 7904), v98, 1);
              v99 = *(_QWORD *)(v67 + 7928);
              if ( v99 )
                sub_140001660(*(_QWORD *)(v67 + 7936), v99, 1);
              v100 = *(_QWORD *)(v67 + 7960);
              if ( v100 )
                sub_140001660(*(_QWORD *)(v67 + 7968), v100, 1);
              v101 = *(_QWORD *)(v67 + 7992);
              if ( v101 )
                sub_140001660(*(_QWORD *)(v67 + 8000), v101, 1);
              v102 = *(_QWORD *)(v67 + 8024);
              if ( v102 )
                sub_140001660(*(_QWORD *)(v67 + 8032), v102, 1);
              *(_BYTE *)(v67 + 8161) = 0;
              v194 = v170;
              v193 = v169;
              v192 = v168;
              v191 = v167;
              *(_BYTE *)(v67 + 8160) = 1;
              if ( v69 != -2 )
              {
                v37 = ((unsigned __int64)((v70 << 16) | v71) << 32) | v72;
                v33 = v214;
                v35 = (const char **)v227;
                goto LABEL_187;
              }
            }
            *(_BYTE *)(v67 + 8168) = 3;
            *(_BYTE *)(v67 + 8176) = 3;
            v103 = 3;
            result = 1;
            goto LABEL_208;
          }
          v31 = ((unsigned __int64)((v26 << 16) | v27) << 32) | v28;
          v32 = v224;
          v33 = v214;
          v34 = v227;
          v35 = v24;
          Address = (PVOID)v20;
          v36 = v25;
          v37 = v31;
LABEL_184:
          if ( (((unsigned __int64)(v34 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & *(_BYTE *)(v32 + 8161)) != 0 )
            sub_140001660(v225, v34, 1);
          *(_BYTE *)(v32 + 8161) = 0;
          v194 = v170;
          v193 = v169;
          v192 = v168;
          v191 = v167;
          *(_BYTE *)(v32 + 8160) = 1;
          v69 = -1;
LABEL_187:
          v139 = Address;
          v157 = v194;
          v156 = v193;
          v155 = v192;
          v154 = v191;
          sub_140BED260(v33);
          v141 = v37 << 8;
          if ( v69 != -1 )
          {
            v190 = v157;
            v189 = v156;
            v188 = v155;
            v187 = v154;
            *(_QWORD *)v184 = v69;
            *(_QWORD *)&v184[8] = v35;
            *(_QWORD *)&v184[16] = v139;
            v185 = v141 | v36;
            v186 = v20;
            sub_140B0AEC0(&v171, v184);
            v33 = ((unsigned __int64)((HIBYTE(v172) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v172 + 5)) << 32)
                | *(unsigned int *)((char *)&v172 + 1);
            v10 = v172;
            v40 = v173;
            v41 = v174;
            v42 = *(_QWORD *)v175;
            if ( v171 == (const char *)-1LL )
            {
              v46 = 0;
            }
            else
            {
              HIBYTE(v172) = (((unsigned __int64)((HIBYTE(v172) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v172 + 5)) << 32)
                            | *(unsigned int *)((char *)&v172 + 1)) >> 48;
              *(_WORD *)((char *)&v172 + 5) = WORD2(v33);
              *(_DWORD *)((char *)&v172 + 1) = v33;
              *(_QWORD *)&v191 = 0;
              *((_QWORD *)&v191 + 1) = 1;
              *(_QWORD *)&v192 = 0;
              *(_QWORD *)&v168 = 1610612768;
              *(_QWORD *)&v167 = &v191;
              *((_QWORD *)&v167 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v171, &v167, v142) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v223,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v41 = *((_QWORD *)&v191 + 1);
              v40 = (char *)v191;
              v42 = v192;
              sub_140BF0F60(&v171);
              v46 = 1;
              v10 = 3;
            }
            v144 = v221;
            goto LABEL_201;
          }
          v42 = v141 | v36;
          if ( v141 < 0 )
          {
            v143 = 0;
            goto LABEL_193;
          }
          if ( !v42 )
          {
            v41 = 1;
            v144 = v221;
            if ( !v35 )
              goto LABEL_200;
            goto LABEL_199;
          }
          nullsub_1(v140);
          v143 = 1;
          v145 = sub_140001650(v42, 1);
          if ( !v145 )
          {
LABEL_193:
            Address = v139;
            v227 = (__int64)v35;
            sub_1416C2D4B(v143, v42);
          }
          v41 = v145;
          sub_141684120(v145, v139, v42);
          v144 = v221;
          if ( v35 )
          {
LABEL_199:
            v146 = v144;
            sub_140001660(v139, v35, 1);
            v144 = v146;
          }
LABEL_200:
          v46 = 1;
          v10 = 3;
          v40 = (char *)v42;
LABEL_201:
          *v212 = 1;
          sub_140BF0DE0(v144);
          v47 = v224;
          if ( *(_QWORD *)(v224 + 4808) != -1 )
          {
            v222 = v224 + 4816;
            v147 = *(char **)(v224 + 4816);
            v225 = *(_QWORD *)(v224 + 4824);
            v227 = 0;
            Address = v147;
            while ( v225 != v227 )
            {
              ++v227;
              v148 = v147 + 96;
              sub_1402C7520();
              v147 = v148;
            }
            v47 = v224;
            v45 = *(_QWORD *)(v224 + 4808);
            if ( v45 )
LABEL_206:
              sub_140001660(*(_QWORD *)v222, 96 * v45, 8);
          }
LABEL_207:
          *(_BYTE *)(v47 + 8176) = 1;
          sub_140BE6CB0(v221);
          v160 = v33;
          v162 = BYTE6(v33);
          v161 = WORD2(v33);
          v164 = v41;
          v165 = v42;
          v159 = v10;
          v163 = v40;
          v158 = v46;
          v149 = v224;
          *(_BYTE *)(v224 + 8195) = 0;
          sub_141684120(&v171, v149, 360);
          *(_BYTE *)(v149 + 8194) = 0;
          v150 = *(_QWORD *)(v149 + 384);
          *(_BYTE *)(v149 + 8193) = 0;
          *(_QWORD *)&v184[16] = *(_QWORD *)(v149 + 376);
          *(_OWORD *)v184 = *(_OWORD *)(v149 + 360);
          sub_14047E370(
            (unsigned int)&v171,
            v150,
            (unsigned int)&v158,
            (unsigned int)v184,
            *(_DWORD *)(v149 + 8184),
            *(_DWORD *)(v149 + 8188));
          v103 = 1;
          result = 0;
          v67 = v224;
LABEL_208:
          *(_BYTE *)(v67 + 0x2000) = v103;
          return result;
        case 1:
LABEL_226:
          v214 = v16;
          v211 = v14;
          v212 = v15;
          JUMPOUT(0x140CDD2EFLL);
        case 2:
LABEL_225:
          v214 = v16;
          v211 = v14;
          v212 = v15;
          v221 = v7;
          sub_1416C3420(&off_1417BB490, a2, a3, a4);
        case 3:
LABEL_22:
          Address = (PVOID)(v5 + 8152);
          v38 = *(unsigned __int8 *)(v5 + 8152);
          v39 = (__int128 *)(v5 + 8088);
          v221 = v7;
          v212 = v15;
          v211 = v14;
          v214 = v16;
          switch ( v38 )
          {
            case 0LL:
              goto LABEL_38;
            case 1LL:
              v207 = v5 + 8088;
              sub_1416C3400(&off_1417B8098, v39, a3, a4);
            case 2LL:
              v207 = v5 + 8088;
              sub_1416C3420(&off_1417B8098, v39, a3, a4);
            case 3LL:
              v222 = v5 + 8088;
              goto LABEL_48;
          }
      }
  }
}
