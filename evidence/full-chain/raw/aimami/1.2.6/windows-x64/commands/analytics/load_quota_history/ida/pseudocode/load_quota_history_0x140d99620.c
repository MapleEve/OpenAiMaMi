// Pseudocode for load_quota_history (EA: 0x140d99620, size: 0x1b79)
// Module: commands/analytics
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:加载配额历史(accountKey)。归属:锚src\commands\analytics.rs。
// Tauri命令handler:加载配额历史(accountKey)。归属:锚src\commands\analytics.rs。
char __fastcall load_quota_history(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdi
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // r15
  _BYTE *v13; // r14
  unsigned __int64 v14; // r12
  volatile void *v15; // rdi
  __int64 *v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // r14
  char v19; // cl
  __int64 v20; // rcx
  const char **v21; // rbx
  int v22; // edi
  int v23; // r13d
  unsigned int v24; // r12d
  __int64 v25; // r15
  PVOID v26; // rcx
  char v27; // al
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // r15
  __int64 v31; // r13
  const char **v32; // r12
  unsigned __int8 v33; // bl
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  __int128 *v36; // rdx
  char *v37; // r14
  __int64 v38; // rdi
  __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r12
  __int64 v42; // rax
  unsigned __int8 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rcx
  PVOID v46; // rcx
  char v47; // al
  __int64 v48; // rax
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  _QWORD *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  char *v58; // r12
  char v59; // r15
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rdi
  __int64 v62; // r13
  __int64 v63; // r13
  __int64 v64; // rsi
  __int64 v65; // rsi
  int v66; // r12d
  unsigned int v67; // r15d
  __int64 v68; // rdi
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
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rdx
  char v99; // cl
  char result; // al
  void *v101; // r15
  int v102; // r14d
  int v103; // esi
  __int64 v104; // rdi
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
  __int64 v133; // rdx
  __int64 v134; // rdx
  PVOID v135; // r13
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdi
  __int64 v141; // rbx
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rbx
  char *v145; // rcx
  char *v146; // r13
  __int64 v147; // rdi
  __int64 v148; // rdx
  _QWORD *v149; // rdi
  __int64 v150; // [rsp+20h] [rbp-60h]
  _OWORD v151[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v152; // [rsp+60h] [rbp-20h]
  __int128 v153; // [rsp+70h] [rbp-10h]
  __int128 v154; // [rsp+80h] [rbp+0h]
  __int128 v155; // [rsp+90h] [rbp+10h]
  __int128 v156; // [rsp+A0h] [rbp+20h]
  __int64 v157; // [rsp+B0h] [rbp+30h] BYREF
  char v158; // [rsp+B8h] [rbp+38h]
  int v159; // [rsp+B9h] [rbp+39h]
  __int16 v160; // [rsp+BDh] [rbp+3Dh]
  char v161; // [rsp+BFh] [rbp+3Fh]
  char *v162; // [rsp+C0h] [rbp+40h]
  __int64 v163; // [rsp+C8h] [rbp+48h]
  __int64 v164; // [rsp+D0h] [rbp+50h]
  __int64 v165; // [rsp+E8h] [rbp+68h]
  __int128 v166; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v167; // [rsp+100h] [rbp+80h]
  __int128 v168; // [rsp+110h] [rbp+90h]
  __int128 v169; // [rsp+120h] [rbp+A0h]
  const char *v170; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v171; // [rsp+138h] [rbp+B8h]
  char *v172; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v173; // [rsp+148h] [rbp+C8h]
  _BYTE v174[24]; // [rsp+150h] [rbp+D0h]
  __int128 v175; // [rsp+168h] [rbp+E8h]
  __int128 v176; // [rsp+178h] [rbp+F8h]
  __int128 v177; // [rsp+188h] [rbp+108h]
  _QWORD v178[2]; // [rsp+298h] [rbp+218h] BYREF
  char v179; // [rsp+2A8h] [rbp+228h]
  int v180; // [rsp+2A9h] [rbp+229h]
  __int16 v181; // [rsp+2ADh] [rbp+22Dh]
  char v182; // [rsp+2AFh] [rbp+22Fh]
  _BYTE v183[24]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v184; // [rsp+2C8h] [rbp+248h]
  unsigned __int64 v185; // [rsp+2D0h] [rbp+250h]
  __int128 v186; // [rsp+2D8h] [rbp+258h]
  __int128 v187; // [rsp+2E8h] [rbp+268h]
  __int128 v188; // [rsp+2F8h] [rbp+278h]
  __int128 v189; // [rsp+308h] [rbp+288h]
  __int128 v190; // [rsp+320h] [rbp+2A0h] BYREF
  __int128 v191; // [rsp+330h] [rbp+2B0h]
  __int128 v192; // [rsp+340h] [rbp+2C0h]
  __int128 v193; // [rsp+350h] [rbp+2D0h]
  __int128 v194; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v195; // [rsp+370h] [rbp+2F0h]
  __int128 v196; // [rsp+380h] [rbp+300h]
  __int64 v197; // [rsp+390h] [rbp+310h]
  __int64 v198; // [rsp+3A0h] [rbp+320h]
  __int64 v199; // [rsp+3A8h] [rbp+328h]
  __int128 v200; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v201; // [rsp+3C0h] [rbp+340h]
  __int128 v202; // [rsp+3D0h] [rbp+350h]
  __int64 v203; // [rsp+3E0h] [rbp+360h]
  __int64 v204; // [rsp+3F0h] [rbp+370h]
  __int64 v205; // [rsp+3F8h] [rbp+378h]
  __int64 v206; // [rsp+400h] [rbp+380h]
  const char **v207; // [rsp+408h] [rbp+388h] BYREF
  __int64 v208; // [rsp+410h] [rbp+390h]
  __int64 v209; // [rsp+418h] [rbp+398h]
  __int64 v210; // [rsp+420h] [rbp+3A0h]
  _BYTE *v211; // [rsp+428h] [rbp+3A8h]
  __int64 *v212; // [rsp+430h] [rbp+3B0h]
  unsigned __int64 v213; // [rsp+438h] [rbp+3B8h]
  __int64 v214; // [rsp+440h] [rbp+3C0h]
  __int64 v215; // [rsp+448h] [rbp+3C8h]
  __int64 v216; // [rsp+450h] [rbp+3D0h]
  PVOID v217; // [rsp+458h] [rbp+3D8h]
  __int64 v218; // [rsp+460h] [rbp+3E0h]
  __int64 v219; // [rsp+468h] [rbp+3E8h]
  __int64 v220; // [rsp+470h] [rbp+3F0h]
  __int64 v221; // [rsp+478h] [rbp+3F8h]
  char v222; // [rsp+487h] [rbp+407h] BYREF
  __int64 v223; // [rsp+488h] [rbp+408h]
  __int64 v224; // [rsp+490h] [rbp+410h]
  char v225; // [rsp+49Fh] [rbp+41Fh]
  __int64 v226; // [rsp+4A0h] [rbp+420h]
  PVOID Address; // [rsp+4A8h] [rbp+428h]
  __int64 v228; // [rsp+4B0h] [rbp+430h]

  v228 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 0x2000);
  v223 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 8193) = 257;
      *(_BYTE *)(a1 + 8195) = 1;
      v5 = a1 + 4288;
      sub_14172B820(a1 + 4288, a1 + 392, 3896);
      switch ( *(_BYTE *)(v3 + 8176) )
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
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 4288;
      switch ( *(_BYTE *)(a1 + 8176) )
      {
        case 0:
LABEL_4:
          v6 = v3 + 4808;
          *(_QWORD *)&v174[16] = 0;
          v170 = aLoadQuotaHisto;
          v171 = 18;
          v172 = aRepo_0;
          v173 = 4;
          v220 = v5;
          *(_QWORD *)v174 = v5;
          *(_QWORD *)&v174[8] = v3 + 4808;
          v7 = sub_140029DD0((volatile void *)(*(_QWORD *)(v3 + 4800) + 16LL));
          Address = (PVOID)(v3 + 4808);
          if ( v7 )
            goto LABEL_5;
          sub_14172C620((__int64)v183, (__int64)&v170, (__int64)&v172);
          v8 = v183[0];
          if ( v183[0] == 0xFF )
          {
            v7 = *(_QWORD *)&v183[8];
LABEL_5:
            *(_QWORD *)&v174[16] = 0;
            v170 = aLoadQuotaHisto;
            v171 = 18;
            v172 = aAccountkey_6;
            v173 = 10;
            *(_QWORD *)v174 = v220;
            *(_QWORD *)&v174[8] = v6;
            sub_140952570(v183, &v170);
            v8 = v183[0];
            if ( v183[0] == 0xFF )
            {
              v9 = v184;
              v3 = v223;
              v10 = v223 + 4832;
              v11 = *(_OWORD *)&v183[8];
              *(_QWORD *)(v223 + 4856) = v7;
              *(_OWORD *)(v3 + 4832) = v11;
              *(_QWORD *)(v3 + 4848) = v9;
              *(_BYTE *)(v3 + 5936) = 0;
              v12 = v3 + 5944;
              sub_14172B820(v3 + 5944, v10, 1112);
              v13 = (_BYTE *)(v3 + 8168);
              *(_BYTE *)(v3 + 8168) = 0;
              v5 = v220;
LABEL_8:
              v14 = v3 + 7056;
              sub_14172B820(v3 + 7056, v12, 1112);
              switch ( *(_BYTE *)(v3 + 8160) )
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
          v30 = ((unsigned __int64)((v183[7] << 16) | (unsigned int)*(unsigned __int16 *)&v183[5]) << 32)
              | *(unsigned int *)&v183[1];
          v37 = *(char **)&v183[8];
          v38 = *(_QWORD *)&v183[16];
          v39 = v184;
          sub_140CAB140(v220);
          if ( *(_QWORD *)Address == -1 )
          {
            v43 = 1;
            v44 = v223;
            goto LABEL_207;
          }
          v221 = v223 + 4816;
          v40 = *(_QWORD *)(v223 + 4816);
          v224 = *(_QWORD *)(v223 + 4824);
          v226 = 0;
          v213 = v40;
          while ( v224 != v226 )
          {
            ++v226;
            v41 = v40 + 96;
            sub_140401FB0();
            v40 = v41;
          }
          v42 = *(_QWORD *)Address;
          v43 = 1;
          v44 = v223;
          if ( !*(_QWORD *)Address )
            goto LABEL_207;
          goto LABEL_206;
        case 1:
LABEL_224:
          v220 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_223:
          v220 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_7;
      }
  }
LABEL_7:
  v13 = (_BYTE *)(v3 + 8168);
  v12 = v3 + 5944;
  switch ( *(_BYTE *)(v3 + 8168) )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v220 = v5;
      v205 = v3 + 8168;
      v204 = v3 + 5944;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v220 = v5;
      v205 = v3 + 8168;
      v204 = v3 + 5944;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v14 = v3 + 7056;
      switch ( *(_BYTE *)(v3 + 8160) )
      {
        case 0:
LABEL_10:
          v165 = a2;
          v213 = v14;
          v210 = v12;
          v211 = v13;
          v220 = v5;
          v15 = *(volatile void **)(v3 + 7080);
          *(_QWORD *)(v3 + 7088) = v15;
          *(_BYTE *)(v3 + 8161) = 1;
          v226 = *(_QWORD *)(v3 + 7056);
          v224 = *(_QWORD *)(v3 + 7064);
          v212 = *(__int64 **)(v3 + 7072);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8((volatile signed __int8 *)v15, 1, 0) )
          {
            v215 = v226;
            v214 = v224;
            sub_14176CDB0(v15);
          }
          Address = (PVOID)v15;
          v16 = off_141FBA168;
          if ( 2 * *off_141FBA168 )
          {
            v215 = v226;
            v214 = v224;
            v17 = sub_14176DA50(a1);
            LOBYTE(v17) = v17 ^ 1;
          }
          else
          {
            v17 = 0;
          }
          v18 = (unsigned __int64)Address;
          v19 = *((_BYTE *)Address + 1);
          LODWORD(v221) = v17;
          if ( !v19 )
            goto LABEL_33;
          *(_QWORD *)&v200 = 0;
          *((_QWORD *)&v200 + 1) = 1;
          *(_QWORD *)&v201 = 0;
          v172 = (char *)1610612768;
          v170 = (const char *)&v200;
          v171 = (__int64)&off_141891B48;
          if ( (unsigned __int8)sub_1415544B0(
                                  "poisoned lock: another task failed insidefatal runtime error: thread result panicked o"
                                  "n drop, aborting\n",
                                  41,
                                  &v170) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v222,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v18 = *((_QWORD *)&v200 + 1);
          v21 = (const char **)v200;
          v22 = (unsigned __int8)v201;
          v23 = BYTE7(v201);
          v24 = *(unsigned __int16 *)((char *)&v201 + 5);
          v25 = *(unsigned int *)((char *)&v201 + 1);
          if ( !(_BYTE)v221 )
          {
            if ( 2 * *v16 )
            {
              v215 = v226;
              v214 = v224;
              if ( !(unsigned __int8)sub_14176DA50(v20) )
                *((_BYTE *)Address + 1) = 1;
            }
          }
          v26 = Address;
          v27 = *(_BYTE *)Address;
          *(_BYTE *)Address = 0;
          if ( v27 == 2 )
          {
            v215 = v226;
            v214 = v224;
            WakeByAddressSingle(v26);
          }
          if ( v21 == (const char **)-1LL )
          {
            LODWORD(v221) = v22;
LABEL_33:
            Address = (PVOID)v18;
            sub_140A80280(v223 + 7096, v18 + 8);
            if ( (v221 & 1) == 0 )
            {
              if ( 2 * *v16 )
              {
                v215 = v226;
                v214 = v224;
                if ( !(unsigned __int8)sub_14176DA50(v45) )
                  *((_BYTE *)Address + 1) = 1;
              }
            }
            v46 = Address;
            v47 = *(_BYTE *)Address;
            *(_BYTE *)Address = 0;
            if ( v47 == 2 )
            {
              v215 = v226;
              v214 = v224;
              WakeByAddressSingle(v46);
            }
            v48 = v223;
            *(_BYTE *)(v223 + 8161) = 0;
            v36 = (__int128 *)(v48 + 8088);
            v49 = *(_OWORD *)(v48 + 7624);
            *(_OWORD *)(v48 + 8088) = *(_OWORD *)(v48 + 7608);
            *(_OWORD *)(v48 + 8104) = v49;
            *(_QWORD *)(v48 + 8120) = v226;
            *(_QWORD *)(v48 + 8128) = v224;
            *(_QWORD *)(v48 + 8136) = v212;
            Address = (PVOID)(v48 + 8152);
            *(_BYTE *)(v48 + 8152) = 0;
            a2 = v165;
LABEL_38:
            v152 = *((_QWORD *)v36 + 6);
            v50 = *v36;
            v51 = v36[1];
            v221 = (__int64)v36;
            v151[2] = v36[2];
            v151[1] = v51;
            v151[0] = v50;
            v52 = off_141FB97C0;
            if ( *((_DWORD *)off_141FB97C0 + 24) )
            {
              v225 = 1;
              v149 = off_141FB97C0;
              sub_14172E34C(off_141FB97C0);
              v52 = v149;
            }
            if ( *((_DWORD *)v52 + 4) == 2 )
            {
              v53 = 704;
              if ( *(_BYTE *)v52 )
                v53 = 472;
              v54 = v52[1] + v53;
              v225 = 0;
              v55 = sub_14085E4B0(v54, v52, v151, &off_1417EBF48);
            }
            else
            {
              v56 = 704;
              if ( *((_BYTE *)v52 + 64) )
                v56 = 472;
              v57 = v52[9] + v56;
              v225 = 0;
              v55 = sub_14085E4B0(v57, v52 + 8, v151, &off_1417EBF30);
            }
            v3 = v223;
            *(_QWORD *)(v223 + 8144) = v55;
LABEL_48:
            v212 = (__int64 *)(v3 + 8144);
            sub_1405032E0(&v170, v3 + 8144, a2);
            v18 = (unsigned __int64)v170;
            if ( v170 == (const char *)-3LL )
            {
              v63 = v223;
              *(_BYTE *)(v223 + 8152) = 3;
              *(_BYTE *)(v63 + 8160) = 3;
            }
            else
            {
              if ( (_DWORD)v170 == -2 )
              {
                v58 = (char *)v171;
                v59 = (char)v172;
                v60 = ((unsigned __int64)((HIBYTE(v172) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v172 + 5)) << 32)
                    | *(unsigned int *)((char *)&v172 + 1);
                v61 = 0x800000000000000CuLL;
                v62 = v173;
              }
              else
              {
                v61 = v171;
                v58 = v172;
                v59 = v173;
                v60 = ((unsigned __int64)((HIBYTE(v173) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v173 + 5)) << 32)
                    | *(unsigned int *)((char *)&v173 + 1);
                v62 = *(_QWORD *)v174;
                v194 = *(_OWORD *)&v174[8];
                v195 = v175;
                v196 = v176;
                v197 = v177;
              }
              v200 = v194;
              v201 = v195;
              v202 = v196;
              v203 = v197;
              v64 = *v212;
              v219 = v226;
              v218 = v224;
              v217 = Address;
              v216 = v221;
              if ( (unsigned __int8)sub_141398090(v64) )
              {
                v219 = v226;
                v218 = v224;
                v217 = Address;
                v216 = v221;
                sub_14139A2E0(v64);
              }
              if ( (_DWORD)v18 != -1 )
              {
                if ( (_DWORD)v18 == -2 )
                {
                  v170 = (const char *)v61;
                  v171 = (__int64)v58;
                  LOBYTE(v172) = v59;
                  *(_DWORD *)((char *)&v172 + 1) = v60;
                  HIBYTE(v172) = BYTE6(v60);
                  *(_WORD *)((char *)&v172 + 5) = WORD2(v60);
                  v173 = v62;
                  *(_OWORD *)v174 = v200;
                  v207 = &v170;
                  v208 = (__int64)sub_1412DDF00;
                  sub_141543AF0(&v194, &unk_1418862F1, &v207);
                  v219 = v226;
                  v218 = v224;
                  v217 = Address;
                  v216 = v221;
                  sub_140CAB2C0(&v170);
                  Address = *((PVOID *)&v194 + 1);
                  v32 = (const char **)v194;
                  v33 = v195;
                  v34 = ((unsigned __int64)((BYTE7(v195) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v195 + 5)) << 32)
                      | *(unsigned int *)((char *)&v195 + 1);
                }
                else
                {
                  v170 = (const char *)v18;
                  v171 = v61;
                  v172 = v58;
                  LOBYTE(v173) = v59;
                  *(_DWORD *)((char *)&v173 + 1) = v60;
                  HIBYTE(v173) = BYTE6(v60);
                  *(_WORD *)((char *)&v173 + 5) = WORD2(v60);
                  *(_QWORD *)v174 = v62;
                  *(_OWORD *)&v174[8] = v200;
                  v175 = v201;
                  v176 = v202;
                  *(_QWORD *)&v177 = v203;
                  v207 = nullptr;
                  v208 = 1;
                  v209 = 0;
                  *(_QWORD *)&v195 = 1610612768;
                  *(_QWORD *)&v194 = &v207;
                  *((_QWORD *)&v194 + 1) = &off_141891B48;
                  if ( (unsigned __int8)sub_1405060F0(&v170, &v194) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v222,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v32 = v207;
                  v101 = (void *)v208;
                  v33 = v209;
                  v102 = HIBYTE(v209);
                  v103 = *(unsigned __int16 *)((char *)&v209 + 5);
                  v104 = *(unsigned int *)((char *)&v209 + 1);
                  v219 = v226;
                  v218 = v224;
                  v217 = Address;
                  v216 = v221;
                  sub_140CAC460(&v170);
                  Address = v101;
                  v18 = (unsigned int)(v102 << 16);
                  v34 = ((unsigned __int64)((unsigned int)v18 | v103) << 32) | v104;
                }
                v29 = v223;
                *(_BYTE *)(v223 + 8152) = 1;
                v105 = *(_QWORD *)(v29 + 7096);
                v30 = v213;
                v31 = v226;
                if ( v105 )
                  sub_140001660(*(_QWORD *)(v29 + 7104), v105, 1);
                v106 = *(_QWORD *)(v29 + 7128);
                if ( v106 )
                  sub_140001660(*(_QWORD *)(v29 + 7136), v106, 1);
                v107 = *(_QWORD *)(v29 + 7160);
                if ( v107 )
                  sub_140001660(*(_QWORD *)(v29 + 7168), v107, 1);
                v108 = *(_QWORD *)(v29 + 7192);
                if ( v108 )
                  sub_140001660(*(_QWORD *)(v29 + 7200), v108, 1);
                v109 = *(_QWORD *)(v29 + 7224);
                if ( v109 )
                  sub_140001660(*(_QWORD *)(v29 + 7232), v109, 1);
                v110 = *(_QWORD *)(v29 + 8056);
                if ( v110 != -1 && v110 )
                  sub_140001660(*(_QWORD *)(v29 + 8064), v110, 1);
                v111 = *(_QWORD *)(v29 + 7256);
                if ( v111 )
                  sub_140001660(*(_QWORD *)(v29 + 7264), v111, 1);
                v112 = *(_QWORD *)(v29 + 7288);
                if ( v112 )
                  sub_140001660(*(_QWORD *)(v29 + 7296), v112, 1);
                v113 = *(_QWORD *)(v29 + 7320);
                if ( v113 )
                  sub_140001660(*(_QWORD *)(v29 + 7328), v113, 1);
                v114 = *(_QWORD *)(v29 + 7352);
                if ( v114 )
                  sub_140001660(*(_QWORD *)(v29 + 7360), v114, 1);
                v115 = *(_QWORD *)(v29 + 7384);
                if ( v115 )
                  sub_140001660(*(_QWORD *)(v29 + 7392), v115, 1);
                v116 = *(_QWORD *)(v29 + 7416);
                if ( v116 )
                  sub_140001660(*(_QWORD *)(v29 + 7424), v116, 1);
                v117 = *(_QWORD *)(v29 + 7448);
                if ( v117 )
                  sub_140001660(*(_QWORD *)(v29 + 7456), v117, 1);
                v118 = *(_QWORD *)(v29 + 7480);
                if ( v118 )
                  sub_140001660(*(_QWORD *)(v29 + 7488), v118, 1);
                v119 = *(_QWORD *)(v29 + 7512);
                if ( v119 )
                  sub_140001660(*(_QWORD *)(v29 + 7520), v119, 1);
                v120 = *(_QWORD *)(v29 + 7544);
                if ( v120 )
                  sub_140001660(*(_QWORD *)(v29 + 7552), v120, 1);
                v121 = *(_QWORD *)(v29 + 7576);
                if ( v121 )
                  sub_140001660(*(_QWORD *)(v29 + 7584), v121, 1);
                v122 = *(_QWORD *)(v29 + 7640);
                if ( v122 )
                  sub_140001660(*(_QWORD *)(v29 + 7648), v122, 1);
                v123 = *(_QWORD *)(v29 + 7672);
                if ( v123 )
                  sub_140001660(*(_QWORD *)(v29 + 7680), v123, 1);
                v124 = *(_QWORD *)(v29 + 7704);
                if ( v124 )
                  sub_140001660(*(_QWORD *)(v29 + 7712), v124, 1);
                v125 = *(_QWORD *)(v29 + 7736);
                if ( v125 )
                  sub_140001660(*(_QWORD *)(v29 + 7744), v125, 1);
                v126 = *(_QWORD *)(v29 + 7768);
                if ( v126 )
                  sub_140001660(*(_QWORD *)(v29 + 7776), v126, 1);
                v127 = *(_QWORD *)(v29 + 7800);
                if ( v127 )
                  sub_140001660(*(_QWORD *)(v29 + 7808), v127, 1);
                v128 = *(_QWORD *)(v29 + 7832);
                if ( v128 )
                  sub_140001660(*(_QWORD *)(v29 + 7840), v128, 1);
                v129 = *(_QWORD *)(v29 + 7864);
                if ( v129 )
                  sub_140001660(*(_QWORD *)(v29 + 7872), v129, 1);
                v130 = *(_QWORD *)(v29 + 7896);
                if ( v130 )
                  sub_140001660(*(_QWORD *)(v29 + 7904), v130, 1);
                v131 = *(_QWORD *)(v29 + 7928);
                if ( v131 )
                  sub_140001660(*(_QWORD *)(v29 + 7936), v131, 1);
                v132 = *(_QWORD *)(v29 + 7960);
                if ( v132 )
                  sub_140001660(*(_QWORD *)(v29 + 7968), v132, 1);
                v133 = *(_QWORD *)(v29 + 7992);
                if ( v133 )
                  sub_140001660(*(_QWORD *)(v29 + 8000), v133, 1);
                v134 = *(_QWORD *)(v29 + 8024);
                if ( v134 )
                  sub_140001660(*(_QWORD *)(v29 + 8032), v134, 1);
                goto LABEL_184;
              }
              *(_BYTE *)Address = 1;
              v178[0] = v61;
              v178[1] = v58;
              v179 = v59;
              v180 = v60;
              v182 = BYTE6(v60);
              v181 = WORD2(v60);
              v199 = v226;
              v198 = v224;
              sub_1404CFE40(&v170, v178);
              v65 = (__int64)v170;
              v226 = v171;
              Address = v172;
              v33 = v173;
              v66 = HIBYTE(v173);
              v67 = *(unsigned __int16 *)((char *)&v173 + 5);
              v68 = *(unsigned int *)((char *)&v173 + 1);
              v18 = *(_QWORD *)v174;
              v166 = *(_OWORD *)&v174[8];
              v167 = v175;
              v168 = v176;
              v169 = v177;
              v63 = v223;
              v69 = *(_QWORD *)(v223 + 7096);
              if ( v69 )
                sub_140001660(*(_QWORD *)(v223 + 7104), v69, 1);
              v70 = *(_QWORD *)(v63 + 7128);
              if ( v70 )
                sub_140001660(*(_QWORD *)(v63 + 7136), v70, 1);
              v71 = *(_QWORD *)(v63 + 7160);
              if ( v71 )
                sub_140001660(*(_QWORD *)(v63 + 7168), v71, 1);
              v72 = *(_QWORD *)(v63 + 7192);
              if ( v72 )
                sub_140001660(*(_QWORD *)(v63 + 7200), v72, 1);
              v73 = *(_QWORD *)(v63 + 7224);
              if ( v73 )
                sub_140001660(*(_QWORD *)(v63 + 7232), v73, 1);
              v74 = *(_QWORD *)(v63 + 8056);
              if ( v74 != -1 && v74 )
                sub_140001660(*(_QWORD *)(v63 + 8064), v74, 1);
              v75 = *(_QWORD *)(v63 + 7256);
              if ( v75 )
                sub_140001660(*(_QWORD *)(v63 + 7264), v75, 1);
              v76 = *(_QWORD *)(v63 + 7288);
              if ( v76 )
                sub_140001660(*(_QWORD *)(v63 + 7296), v76, 1);
              v77 = *(_QWORD *)(v63 + 7320);
              if ( v77 )
                sub_140001660(*(_QWORD *)(v63 + 7328), v77, 1);
              v78 = *(_QWORD *)(v63 + 7352);
              if ( v78 )
                sub_140001660(*(_QWORD *)(v63 + 7360), v78, 1);
              v79 = *(_QWORD *)(v63 + 7384);
              if ( v79 )
                sub_140001660(*(_QWORD *)(v63 + 7392), v79, 1);
              v80 = *(_QWORD *)(v63 + 7416);
              if ( v80 )
                sub_140001660(*(_QWORD *)(v63 + 7424), v80, 1);
              v81 = *(_QWORD *)(v63 + 7448);
              if ( v81 )
                sub_140001660(*(_QWORD *)(v63 + 7456), v81, 1);
              v82 = *(_QWORD *)(v63 + 7480);
              if ( v82 )
                sub_140001660(*(_QWORD *)(v63 + 7488), v82, 1);
              v83 = *(_QWORD *)(v63 + 7512);
              if ( v83 )
                sub_140001660(*(_QWORD *)(v63 + 7520), v83, 1);
              v84 = *(_QWORD *)(v63 + 7544);
              if ( v84 )
                sub_140001660(*(_QWORD *)(v63 + 7552), v84, 1);
              v85 = *(_QWORD *)(v63 + 7576);
              if ( v85 )
                sub_140001660(*(_QWORD *)(v63 + 7584), v85, 1);
              v86 = *(_QWORD *)(v63 + 7640);
              if ( v86 )
                sub_140001660(*(_QWORD *)(v63 + 7648), v86, 1);
              v87 = *(_QWORD *)(v63 + 7672);
              if ( v87 )
                sub_140001660(*(_QWORD *)(v63 + 7680), v87, 1);
              v88 = *(_QWORD *)(v63 + 7704);
              if ( v88 )
                sub_140001660(*(_QWORD *)(v63 + 7712), v88, 1);
              v89 = *(_QWORD *)(v63 + 7736);
              if ( v89 )
                sub_140001660(*(_QWORD *)(v63 + 7744), v89, 1);
              v90 = *(_QWORD *)(v63 + 7768);
              if ( v90 )
                sub_140001660(*(_QWORD *)(v63 + 7776), v90, 1);
              v91 = *(_QWORD *)(v63 + 7800);
              if ( v91 )
                sub_140001660(*(_QWORD *)(v63 + 7808), v91, 1);
              v92 = *(_QWORD *)(v63 + 7832);
              if ( v92 )
                sub_140001660(*(_QWORD *)(v63 + 7840), v92, 1);
              v93 = *(_QWORD *)(v63 + 7864);
              if ( v93 )
                sub_140001660(*(_QWORD *)(v63 + 7872), v93, 1);
              v94 = *(_QWORD *)(v63 + 7896);
              if ( v94 )
                sub_140001660(*(_QWORD *)(v63 + 7904), v94, 1);
              v95 = *(_QWORD *)(v63 + 7928);
              if ( v95 )
                sub_140001660(*(_QWORD *)(v63 + 7936), v95, 1);
              v96 = *(_QWORD *)(v63 + 7960);
              if ( v96 )
                sub_140001660(*(_QWORD *)(v63 + 7968), v96, 1);
              v97 = *(_QWORD *)(v63 + 7992);
              if ( v97 )
                sub_140001660(*(_QWORD *)(v63 + 8000), v97, 1);
              v98 = *(_QWORD *)(v63 + 8024);
              if ( v98 )
                sub_140001660(*(_QWORD *)(v63 + 8032), v98, 1);
              *(_BYTE *)(v63 + 8161) = 0;
              v193 = v169;
              v192 = v168;
              v191 = v167;
              v190 = v166;
              *(_BYTE *)(v63 + 8160) = 1;
              if ( v65 != -2 )
              {
                v34 = ((unsigned __int64)((v66 << 16) | v67) << 32) | v68;
                v30 = v213;
                v32 = (const char **)v226;
                goto LABEL_187;
              }
            }
            *(_BYTE *)(v63 + 8168) = 3;
            *(_BYTE *)(v63 + 8176) = 3;
            v99 = 3;
            result = 1;
            goto LABEL_208;
          }
          v28 = ((unsigned __int64)((v23 << 16) | v24) << 32) | v25;
          v29 = v223;
          v30 = v213;
          v31 = v226;
          v32 = v21;
          Address = (PVOID)v18;
          v33 = v22;
          v34 = v28;
LABEL_184:
          if ( (((unsigned __int64)(v31 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & *(_BYTE *)(v29 + 8161)) != 0 )
            sub_140001660(v224, v31, 1);
          *(_BYTE *)(v29 + 8161) = 0;
          v193 = v169;
          v192 = v168;
          v191 = v167;
          v190 = v166;
          *(_BYTE *)(v29 + 8160) = 1;
          v65 = -1;
LABEL_187:
          v135 = Address;
          v156 = v193;
          v155 = v192;
          v154 = v191;
          v153 = v190;
          sub_140CA76D0(v30);
          v140 = v34 << 8;
          if ( v65 != -1 )
          {
            v189 = v156;
            v188 = v155;
            v187 = v154;
            v186 = v153;
            *(_QWORD *)v183 = v65;
            *(_QWORD *)&v183[8] = v32;
            *(_QWORD *)&v183[16] = v135;
            v184 = v140 | v33;
            v185 = v18;
            sub_14050DD40(&v170, v183);
            v30 = ((unsigned __int64)((HIBYTE(v171) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v171 + 5)) << 32)
                | *(unsigned int *)((char *)&v171 + 1);
            v8 = v171;
            v37 = v172;
            v38 = v173;
            v39 = *(_QWORD *)v174;
            if ( v170 == (const char *)-1LL )
            {
              v43 = 0;
            }
            else
            {
              HIBYTE(v171) = (((unsigned __int64)((HIBYTE(v171) << 16)
                                                | (unsigned int)*(unsigned __int16 *)((char *)&v171 + 5)) << 32)
                            | *(unsigned int *)((char *)&v171 + 1)) >> 48;
              *(_WORD *)((char *)&v171 + 5) = WORD2(v30);
              *(_DWORD *)((char *)&v171 + 1) = v30;
              *(_QWORD *)&v190 = 0;
              *((_QWORD *)&v190 + 1) = 1;
              *(_QWORD *)&v191 = 0;
              *(_QWORD *)&v167 = 1610612768;
              *(_QWORD *)&v166 = &v190;
              *((_QWORD *)&v166 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v170, &v166) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v222,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v38 = *((_QWORD *)&v190 + 1);
              v37 = (char *)v190;
              v39 = v191;
              sub_140CAB2C0(&v170);
              v43 = 1;
              v8 = 3;
            }
            v142 = v220;
            goto LABEL_201;
          }
          v39 = v140 | v33;
          if ( v140 < 0 )
          {
            v141 = 0;
            goto LABEL_193;
          }
          if ( !v39 )
          {
            v38 = 1;
            v142 = v220;
            if ( !v32 )
              goto LABEL_200;
            goto LABEL_199;
          }
          nullsub_1(v137, v136, v138, v139, v150);
          v141 = 1;
          v143 = sub_140001650(v39, 1);
          if ( !v143 )
          {
LABEL_193:
            Address = v135;
            v226 = (__int64)v32;
            sub_14176E54B(v141, v39);
          }
          v38 = v143;
          sub_14172B820(v143, v135, v39);
          v142 = v220;
          if ( v32 )
          {
LABEL_199:
            v144 = v142;
            sub_140001660(v135, v32, 1);
            v142 = v144;
          }
LABEL_200:
          v43 = 1;
          v8 = 3;
          v37 = (char *)v39;
LABEL_201:
          *v211 = 1;
          sub_140CAB140(v142);
          v44 = v223;
          if ( *(_QWORD *)(v223 + 4808) != -1 )
          {
            v221 = v223 + 4816;
            v145 = *(char **)(v223 + 4816);
            v224 = *(_QWORD *)(v223 + 4824);
            v226 = 0;
            Address = v145;
            while ( v224 != v226 )
            {
              ++v226;
              v146 = v145 + 96;
              sub_140401FB0();
              v145 = v146;
            }
            v44 = v223;
            v42 = *(_QWORD *)(v223 + 4808);
            if ( v42 )
LABEL_206:
              sub_140001660(*(_QWORD *)v221, 96 * v42, 8);
          }
LABEL_207:
          *(_BYTE *)(v44 + 8176) = 1;
          sub_140CA0FE0(v220);
          v159 = v30;
          v161 = BYTE6(v30);
          v160 = WORD2(v30);
          v163 = v38;
          v164 = v39;
          v158 = v8;
          v162 = v37;
          v157 = v43;
          v147 = v223;
          *(_BYTE *)(v223 + 8195) = 0;
          sub_14172B820(&v170, v147, 360);
          *(_BYTE *)(v147 + 8194) = 0;
          v148 = *(_QWORD *)(v147 + 384);
          *(_BYTE *)(v147 + 8193) = 0;
          *(_QWORD *)&v183[16] = *(_QWORD *)(v147 + 376);
          *(_OWORD *)v183 = *(_OWORD *)(v147 + 360);
          sub_140AFFC30(
            (__int64)&v170,
            v148,
            (__int64)&v157,
            (__int128 *)v183,
            *(_DWORD *)(v147 + 8184),
            *(_DWORD *)(v147 + 8188));
          v99 = 1;
          result = 0;
          v63 = v223;
LABEL_208:
          *(_BYTE *)(v63 + 0x2000) = v99;
          return result;
        case 1:
LABEL_226:
          v213 = v14;
          v210 = v12;
          v211 = v13;
          JUMPOUT(0x140D9B10FLL);
        case 2:
LABEL_225:
          v213 = v14;
          v210 = v12;
          v211 = v13;
          v220 = v5;
          sub_14176EC20(&off_141888B48);
        case 3:
LABEL_22:
          Address = (PVOID)(v3 + 8152);
          v35 = *(unsigned __int8 *)(v3 + 8152);
          v36 = (__int128 *)(v3 + 8088);
          v220 = v5;
          v211 = v13;
          v210 = v12;
          v213 = v14;
          switch ( v35 )
          {
            case 0LL:
              goto LABEL_38;
            case 1LL:
              v206 = v3 + 8088;
              sub_14176EC00(&off_1418856B8);
            case 2LL:
              v206 = v3 + 8088;
              sub_14176EC20(&off_1418856B8);
            case 3LL:
              v221 = v3 + 8088;
              goto LABEL_48;
          }
      }
  }
}
