__int64 __fastcall sub_1406FABE0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 result; // rax
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int128 *v8; // rbx
  __int64 *v9; // r12
  __int128 *v10; // rdi
  __int64 v11; // r15
  _QWORD *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  __int64 *v26; // r15
  __int64 v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r13
  __int128 *v42; // r15
  __int64 *v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  void *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r13
  __int128 *v66; // r15
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  char v80; // r14
  __int128 *v81; // r13
  __int64 v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  void *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r9
  __int64 v95; // rcx
  __int64 v96; // r8
  char v97; // r14
  __int128 *v98; // r13
  __int64 v99; // rdi
  __int64 v100; // rbx
  __int64 v101; // rsi
  __int64 v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  _DWORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  _QWORD *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // r13
  __int128 *v119; // r15
  __int64 v120; // rdi
  __int64 v121; // rsi
  __int64 v122; // rax
  __int64 v123; // r14
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r9
  __int64 v131; // rcx
  __int64 v132; // r8
  char v133; // r14
  __int128 *v134; // r13
  __int64 v135; // rdi
  __int64 v136; // rbx
  __int64 v137; // rsi
  __int64 v138; // rax
  __int64 v139; // rsi
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  void *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // r9
  __int64 v148; // rcx
  __int64 v149; // r8
  char v150; // r14
  __int128 *v151; // r13
  __int64 v152; // rdi
  __int64 v153; // rbx
  __int64 v154; // rsi
  __int64 v155; // rax
  __int64 v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  void *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  _QWORD *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // r13
  __int128 *v187; // r15
  __int64 v188; // rdi
  __int64 v189; // rsi
  __int64 v190; // rax
  __int64 v191; // r14
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  void *v196; // rax
  __int64 v197; // rdx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // r13
  __int128 *v201; // r15
  __int64 v202; // rdi
  __int64 v203; // rsi
  __int64 v204; // rax
  __int64 v205; // r14
  __int64 v206; // rcx
  __int64 v207; // r13
  __int128 *v208; // r15
  __int64 *v209; // rdi
  __int64 v210; // r12
  __int64 v211; // rsi
  __int64 v212; // r9
  __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // [rsp+20h] [rbp-60h]
  __int64 v216; // [rsp+20h] [rbp-60h]
  __int64 v217; // [rsp+20h] [rbp-60h]
  __int64 v218; // [rsp+20h] [rbp-60h]
  __int64 v219; // [rsp+20h] [rbp-60h]
  __int64 v220; // [rsp+20h] [rbp-60h]
  __int64 v221; // [rsp+20h] [rbp-60h]
  __int64 v222; // [rsp+20h] [rbp-60h]
  __int64 v223; // [rsp+20h] [rbp-60h]
  __int64 v224; // [rsp+20h] [rbp-60h]
  __int64 v225; // [rsp+20h] [rbp-60h]
  __int64 v226; // [rsp+20h] [rbp-60h]
  __int64 v227; // [rsp+20h] [rbp-60h]
  __int64 v228; // [rsp+20h] [rbp-60h]
  __int64 v229; // [rsp+20h] [rbp-60h]
  __int64 v230; // [rsp+20h] [rbp-60h]
  __int64 v231; // [rsp+20h] [rbp-60h]
  _BYTE v232[31]; // [rsp+29h] [rbp-57h]
  _QWORD v233[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v234; // [rsp+60h] [rbp-20h]
  __int64 v235; // [rsp+68h] [rbp-18h]
  __int64 v236; // [rsp+70h] [rbp-10h]
  __int64 v237; // [rsp+78h] [rbp-8h]
  __int64 v238; // [rsp+80h] [rbp+0h]
  __int64 v239; // [rsp+88h] [rbp+8h]
  __int64 v240; // [rsp+90h] [rbp+10h]
  __int64 v241; // [rsp+98h] [rbp+18h]
  __int64 v242; // [rsp+A0h] [rbp+20h]
  __int64 v243; // [rsp+A8h] [rbp+28h]
  __int64 v244; // [rsp+B0h] [rbp+30h]
  __int64 v245; // [rsp+B8h] [rbp+38h]
  __int64 v246; // [rsp+C0h] [rbp+40h]
  __int128 v247; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v248; // [rsp+D8h] [rbp+58h]
  __int128 v249; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v250; // [rsp+F0h] [rbp+70h]
  __int64 v251; // [rsp+F8h] [rbp+78h]
  _QWORD *v252; // [rsp+100h] [rbp+80h]
  __int64 v253; // [rsp+108h] [rbp+88h]
  __int64 v254; // [rsp+110h] [rbp+90h] BYREF
  _DWORD *v255; // [rsp+118h] [rbp+98h]
  __int64 v256; // [rsp+120h] [rbp+A0h]
  __int64 v257; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v258; // [rsp+130h] [rbp+B0h]
  _QWORD *v259; // [rsp+138h] [rbp+B8h]
  __int64 v260; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v261; // [rsp+148h] [rbp+C8h]
  __int64 v262; // [rsp+158h] [rbp+D8h]
  _QWORD v263[9]; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v264; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v265; // [rsp+1B0h] [rbp+130h]
  __int64 v266; // [rsp+1C0h] [rbp+140h]
  __int128 v267; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v268; // [rsp+1D8h] [rbp+158h]
  _OWORD v269[2]; // [rsp+1E0h] [rbp+160h] BYREF
  _QWORD *v270; // [rsp+208h] [rbp+188h]
  __int128 v271; // [rsp+210h] [rbp+190h] BYREF
  __int128 v272; // [rsp+220h] [rbp+1A0h]
  _QWORD *v273; // [rsp+230h] [rbp+1B0h]
  __int128 v274; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v275; // [rsp+248h] [rbp+1C8h]
  char v276; // [rsp+251h] [rbp+1D1h]
  char v277; // [rsp+252h] [rbp+1D2h]
  char v278; // [rsp+253h] [rbp+1D3h]
  char v279; // [rsp+254h] [rbp+1D4h]
  char v280; // [rsp+255h] [rbp+1D5h]
  char v281; // [rsp+256h] [rbp+1D6h]
  char v282; // [rsp+257h] [rbp+1D7h]
  char v283; // [rsp+258h] [rbp+1D8h]
  char v284; // [rsp+259h] [rbp+1D9h]
  char v285; // [rsp+25Ah] [rbp+1DAh]
  char v286; // [rsp+25Bh] [rbp+1DBh]
  char v287; // [rsp+25Ch] [rbp+1DCh]
  char v288; // [rsp+25Dh] [rbp+1DDh]
  char v289; // [rsp+25Eh] [rbp+1DEh]
  char v290; // [rsp+25Fh] [rbp+1DFh]
  __int64 v291; // [rsp+260h] [rbp+1E0h]

  v291 = -2;
  v2 = *a1;
  result = a1[1];
  v4 = *(_QWORD **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  if ( *a1 != result )
  {
    v236 = *(_QWORD *)(a2 + 16);
    v6 = a1[2];
    v237 = 0x2E8BA2E8BA2E8BA3LL * ((unsigned __int64)(result - v2) >> 5);
    v7 = 0x6449646165726874LL;
    v8 = &v247;
    v9 = &v260;
    v10 = &v271;
    v11 = 0x5074756F6C6C6F72LL;
    result = 0;
    v252 = v4;
    v235 = v6;
    do
    {
      v251 = v5;
      v234 = result;
      v12 = (_QWORD *)(v2 + 352 * result);
      v13 = *(_QWORD *)(v6 + 32);
      v14 = 216LL * *(_QWORD *)(v6 + 40);
      v263[0] = v13;
      v263[1] = v13 + v14;
      v273 = v12;
      v263[2] = v12;
      sub_14044EBF0(&v257, v263);
      v15 = v2;
      *(_QWORD *)&v247 = 0;
      v248 = 0;
      nullsub_1(v17, v16, v18, v19, v215);
      v20 = (__int64 *)sub_140001650(8, 1);
      if ( !v20 )
        sub_14176E54B(1, 8);
      *v20 = v7;
      v260 = 8;
      *(_QWORD *)&v261 = v20;
      *((_QWORD *)&v261 + 1) = 8;
      v25 = v273[6];
      if ( v25 < 0 )
      {
        v29 = 0;
LABEL_121:
        v289 = 1;
        sub_14176E54B(v29, v25);
      }
      v253 = v15;
      if ( v25 )
      {
        v26 = v9;
        v27 = v7;
        v28 = v273[5];
        nullsub_1(v22, v21, v23, v24, v216);
        v29 = 1;
        v30 = sub_140001650(v25, 1);
        if ( !v30 )
          goto LABEL_121;
        v31 = v30;
        sub_14172B820(v30, v28, v25);
        v7 = v27;
        v9 = v26;
        v10 = &v271;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v31 = 1;
      }
      LOBYTE(v271) = 3;
      *((_QWORD *)&v271 + 1) = v25;
      *(_QWORD *)&v272 = v31;
      *((_QWORD *)&v272 + 1) = v25;
      v289 = 0;
      sub_1401A27E0(v269, v8, v9, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      nullsub_1(v33, v32, v34, v35, v216);
      v36 = sub_140001650(11, 1);
      if ( !v36 )
        sub_14176E54B(1, 11);
      *(_QWORD *)v36 = v11;
      *(_DWORD *)(v36 + 7) = 1752457552;
      v264 = 11;
      v270 = (_QWORD *)v36;
      *(_QWORD *)&v265 = v36;
      *((_QWORD *)&v265 + 1) = 11;
      sub_141543160(v9, v273[1], v273[2]);
      v41 = *((_QWORD *)&v261 + 1);
      v270 = (_QWORD *)v261;
      if ( v261 < 0 )
      {
        v45 = 0;
LABEL_123:
        v288 = 1;
        sub_14176E54B(v45, v41);
      }
      if ( *((_QWORD *)&v261 + 1) )
      {
        v42 = v10;
        v43 = v9;
        v44 = v7;
        nullsub_1(v38, v37, v39, v40, v217);
        v45 = 1;
        v46 = sub_140001650(v41, 1);
        if ( !v46 )
          goto LABEL_123;
        v47 = v46;
        sub_14172B820(v46, v270, v41);
        v7 = v44;
        v9 = v43;
        v10 = v42;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v47 = 1;
      }
      LOBYTE(v271) = 3;
      *((_QWORD *)&v271 + 1) = v41;
      *(_QWORD *)&v272 = v47;
      *((_QWORD *)&v272 + 1) = v41;
      v288 = 0;
      sub_1401A27E0(v269, v8, &v264, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      v51 = v260;
      if ( v260 > 0 )
        sub_140001660(v270, v260, 1);
      nullsub_1(v48, v51, v49, v50, v217);
      v52 = (void *)sub_140001650(15, 1);
      if ( !v52 )
        sub_14176E54B(1, 15);
      qmemcpy(v52, "originalRollout", 15);
      v233[0] = 15;
      v233[1] = v52;
      v233[2] = 15;
      *(_QWORD *)&v249 = 0;
      v250 = 0;
      nullsub_1(0x6C616E696769726FLL, v53, v54, v55, v218);
      v56 = sub_140001650(5, 1);
      if ( !v56 )
        sub_14176E54B(1, 5);
      *(_BYTE *)(v56 + 4) = 116;
      *(_DWORD *)v56 = 1936877926;
      v254 = 5;
      v255 = (_DWORD *)v56;
      v256 = 5;
      *(_QWORD *)&v267 = 0;
      v268 = 0;
      nullsub_1(v58, v57, v59, v60, v219);
      v61 = (_QWORD *)sub_140001650(8, 1);
      if ( !v61 )
        sub_14176E54B(1, 8);
      *v61 = 0x72656469766F7270LL;
      *(_QWORD *)&v274 = 8;
      *((_QWORD *)&v274 + 1) = v61;
      v275 = 8;
      v65 = v273[9];
      if ( v65 < 0 )
      {
        v68 = 0;
LABEL_125:
        v287 = 1;
        sub_14176E54B(v68, v65);
      }
      if ( v65 )
      {
        v66 = v10;
        v67 = v273[8];
        nullsub_1(0x72656469766F7270LL, v62, v63, v64, v220);
        v68 = 1;
        v69 = sub_140001650(v65, 1);
        if ( !v69 )
          goto LABEL_125;
        v70 = v69;
        sub_14172B820(v69, v67, v65);
        v7 = 0x6449646165726874LL;
        v10 = v66;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v70 = 1;
      }
      LOBYTE(v271) = 3;
      *((_QWORD *)&v271 + 1) = v65;
      *(_QWORD *)&v272 = v70;
      *((_QWORD *)&v272 + 1) = v65;
      v287 = 0;
      sub_1401A27E0(v269, &v267, &v274, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      nullsub_1(v72, v71, v73, v74, v220);
      v75 = sub_140001650(5, 1);
      if ( !v75 )
        sub_14176E54B(1, 5);
      *(_BYTE *)(v75 + 4) = 108;
      *(_DWORD *)v75 = 1701080941;
      *(_QWORD *)&v274 = 5;
      *((_QWORD *)&v274 + 1) = v75;
      v275 = 5;
      v78 = v238;
      if ( v273[10] == -1 )
      {
        v80 = 0;
        v87 = v240;
      }
      else
      {
        v79 = v273[12];
        if ( v79 < 0 )
        {
          v84 = 0;
LABEL_127:
          v286 = 1;
          sub_14176E54B(v84, v79);
        }
        v80 = 3;
        if ( v79 )
        {
          v81 = v8;
          v82 = v273[11];
          v83 = v273[12];
          nullsub_1(v238, v76, v79, v77, v221);
          v84 = 1;
          v85 = sub_140001650(v83, 1);
          v79 = v83;
          if ( !v85 )
            goto LABEL_127;
          v86 = v85;
          sub_14172B820(v85, v82, v83);
          v78 = v86;
          v87 = v83;
          v7 = 0x6449646165726874LL;
          v8 = v81;
          v10 = &v271;
        }
        else
        {
          v78 = 1;
          v87 = 0;
        }
      }
      LOBYTE(v271) = v80;
      *((_QWORD *)&v271 + 1) = v87;
      v238 = v78;
      *(_QWORD *)&v272 = v78;
      v240 = v87;
      *((_QWORD *)&v272 + 1) = v87;
      v286 = 0;
      sub_1401A27E0(v269, &v267, &v274, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      nullsub_1(v89, v88, v90, v91, v221);
      v92 = (void *)sub_140001650(15, 1);
      if ( !v92 )
        sub_14176E54B(1, 15);
      qmemcpy(v92, "reasoningEffort", 15);
      *(_QWORD *)&v274 = 15;
      *((_QWORD *)&v274 + 1) = v92;
      v275 = 15;
      v95 = v239;
      if ( v273[13] == -1 )
      {
        v97 = 0;
        v104 = v241;
      }
      else
      {
        v96 = v273[15];
        if ( v96 < 0 )
        {
          v101 = 0;
LABEL_131:
          v285 = 1;
          sub_14176E54B(v101, v96);
        }
        v97 = 3;
        if ( v96 )
        {
          v98 = v8;
          v99 = v273[14];
          v100 = v273[15];
          nullsub_1(v239, v93, v96, v94, v222);
          v101 = 1;
          v102 = sub_140001650(v100, 1);
          v96 = v100;
          if ( !v102 )
            goto LABEL_131;
          v103 = v102;
          sub_14172B820(v102, v99, v100);
          v95 = v103;
          v104 = v100;
          v7 = 0x6449646165726874LL;
          v8 = v98;
          v10 = &v271;
        }
        else
        {
          v95 = 1;
          v104 = 0;
        }
      }
      LOBYTE(v271) = v97;
      *((_QWORD *)&v271 + 1) = v104;
      v239 = v95;
      *(_QWORD *)&v272 = v95;
      v241 = v104;
      *((_QWORD *)&v272 + 1) = v104;
      v285 = 0;
      sub_1401A27E0(v269, &v267, &v274, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      v262 = v268;
      v261 = v267;
      LOBYTE(v260) = 5;
      v284 = 0;
      sub_1401A27E0(v10, &v249, &v254, v9);
      if ( (_BYTE)v271 != 0xFF )
        sub_1401FF690(v10);
      nullsub_1(v106, v105, v107, v108, v222);
      v109 = (_DWORD *)sub_140001650(4, 1);
      if ( !v109 )
        sub_14176E54B(1, 4);
      *v109 = 1953718636;
      v254 = 4;
      v255 = v109;
      v256 = 4;
      *(_QWORD *)&v267 = 0;
      v268 = 0;
      nullsub_1(v111, v110, v112, v113, v223);
      v114 = (_QWORD *)sub_140001650(8, 1);
      if ( !v114 )
        sub_14176E54B(1, 8);
      *v114 = 0x72656469766F7270LL;
      *(_QWORD *)&v274 = 8;
      *((_QWORD *)&v274 + 1) = v114;
      v275 = 8;
      v118 = v273[18];
      if ( v118 < 0 )
      {
        v121 = 0;
LABEL_129:
        v283 = 1;
        sub_14176E54B(v121, v118);
      }
      if ( v118 )
      {
        v119 = v10;
        v120 = v273[17];
        nullsub_1(0x72656469766F7270LL, v115, v116, v117, v224);
        v121 = 1;
        v122 = sub_140001650(v118, 1);
        if ( !v122 )
          goto LABEL_129;
        v123 = v122;
        sub_14172B820(v122, v120, v118);
        v7 = 0x6449646165726874LL;
        v10 = v119;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v123 = 1;
      }
      LOBYTE(v271) = 3;
      *((_QWORD *)&v271 + 1) = v118;
      *(_QWORD *)&v272 = v123;
      *((_QWORD *)&v272 + 1) = v118;
      v283 = 0;
      sub_1401A27E0(v269, &v267, &v274, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      nullsub_1(v125, v124, v126, v127, v224);
      v128 = sub_140001650(5, 1);
      if ( !v128 )
        sub_14176E54B(1, 5);
      *(_BYTE *)(v128 + 4) = 108;
      *(_DWORD *)v128 = 1701080941;
      *(_QWORD *)&v274 = 5;
      *((_QWORD *)&v274 + 1) = v128;
      v275 = 5;
      v131 = v242;
      if ( v273[19] == -1 )
      {
        v133 = 0;
        v140 = v244;
      }
      else
      {
        v132 = v273[21];
        if ( v132 < 0 )
        {
          v137 = 0;
LABEL_133:
          v282 = 1;
          sub_14176E54B(v137, v132);
        }
        v133 = 3;
        if ( v132 )
        {
          v134 = v8;
          v135 = v273[20];
          v136 = v273[21];
          nullsub_1(v242, v129, v132, v130, v225);
          v137 = 1;
          v138 = sub_140001650(v136, 1);
          v132 = v136;
          if ( !v138 )
            goto LABEL_133;
          v139 = v138;
          sub_14172B820(v138, v135, v136);
          v131 = v139;
          v140 = v136;
          v7 = 0x6449646165726874LL;
          v8 = v134;
          v10 = &v271;
        }
        else
        {
          v131 = 1;
          v140 = 0;
        }
      }
      LOBYTE(v271) = v133;
      *((_QWORD *)&v271 + 1) = v140;
      v242 = v131;
      *(_QWORD *)&v272 = v131;
      v244 = v140;
      *((_QWORD *)&v272 + 1) = v140;
      v282 = 0;
      sub_1401A27E0(v269, &v267, &v274, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      nullsub_1(v142, v141, v143, v144, v225);
      v145 = (void *)sub_140001650(15, 1);
      if ( !v145 )
        sub_14176E54B(1, 15);
      qmemcpy(v145, "reasoningEffort", 15);
      *(_QWORD *)&v274 = 15;
      *((_QWORD *)&v274 + 1) = v145;
      v275 = 15;
      v148 = v243;
      if ( v273[22] == -1 )
      {
        v150 = 0;
        v157 = v245;
      }
      else
      {
        v149 = v273[24];
        if ( v149 < 0 )
        {
          v154 = 0;
LABEL_137:
          v281 = 1;
          sub_14176E54B(v154, v149);
        }
        v150 = 3;
        if ( v149 )
        {
          v151 = v8;
          v152 = v273[23];
          v153 = v273[24];
          nullsub_1(v243, v146, v149, v147, v226);
          v154 = 1;
          v155 = sub_140001650(v153, 1);
          v149 = v153;
          if ( !v155 )
            goto LABEL_137;
          v156 = v155;
          sub_14172B820(v155, v152, v153);
          v148 = v156;
          v157 = v153;
          v7 = 0x6449646165726874LL;
          v8 = v151;
          v10 = &v271;
        }
        else
        {
          v148 = 1;
          v157 = 0;
        }
      }
      LOBYTE(v271) = v150;
      *((_QWORD *)&v271 + 1) = v157;
      v243 = v148;
      *(_QWORD *)&v272 = v148;
      v245 = v157;
      *((_QWORD *)&v272 + 1) = v157;
      v281 = 0;
      sub_1401A27E0(v269, &v267, &v274, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      v262 = v268;
      v261 = v267;
      LOBYTE(v260) = 5;
      v280 = 0;
      sub_1401A27E0(v10, &v249, &v254, v9);
      if ( (_BYTE)v271 != 0xFF )
        sub_1401FF690(v10);
      v266 = v250;
      v265 = v249;
      LOBYTE(v264) = 5;
      v279 = 0;
      sub_1401A27E0(v10, v8, v233, &v264);
      if ( (_BYTE)v271 != 0xFF )
        sub_1401FF690(v10);
      nullsub_1(v159, v158, v160, v161, v226);
      v162 = (void *)sub_140001650(14, 1);
      if ( !v162 )
        sub_14176E54B(1, 14);
      qmemcpy(v162, "originalDbRows", 14);
      v260 = 14;
      *(_QWORD *)&v261 = v162;
      *((_QWORD *)&v261 + 1) = 14;
      v290 = 1;
      sub_140AB4550(v10, &v257);
      if ( (_BYTE)v271 == 0xFF )
      {
        *(_QWORD *)&v269[0] = *((_QWORD *)&v271 + 1);
        sub_14176E860(
          (unsigned int)aCalledResultUn_11,
          43,
          (unsigned int)v269,
          (unsigned int)&off_14183D550,
          (__int64)&off_14183D288);
      }
      v269[1] = v272;
      v269[0] = v271;
      v290 = 0;
      sub_1401A27E0(v10, v8, v9, v269);
      if ( (_BYTE)v271 != 0xFF )
        sub_1401FF690(v10);
      nullsub_1(v164, v163, v165, v166, v227);
      v167 = sub_140001650(6, 1);
      if ( !v167 )
        sub_14176E54B(1, 6);
      *(_WORD *)(v167 + 4) = 29797;
      *(_DWORD *)v167 = 1735549300;
      *(_QWORD *)&v267 = 6;
      *((_QWORD *)&v267 + 1) = v167;
      v268 = 6;
      *(_QWORD *)&v274 = 0;
      v275 = 0;
      nullsub_1(v169, v168, v170, v171, v228);
      v172 = (_QWORD *)sub_140001650(8, 1);
      if ( !v172 )
        sub_14176E54B(1, 8);
      *v172 = 0x72656469766F7270LL;
      v264 = 8;
      *(_QWORD *)&v265 = v172;
      *((_QWORD *)&v265 + 1) = 8;
      nullsub_1(0x72656469766F7270LL, v173, v174, v175, v229);
      v176 = sub_140001650(6, 1);
      v270 = (_QWORD *)v176;
      if ( !v176 )
        sub_14176E54B(1, 6);
      *(_WORD *)(v176 + 4) = 26977;
      *(_DWORD *)v176 = 1852141679;
      LOBYTE(v271) = 3;
      *((_QWORD *)&v271 + 1) = 6;
      *(_QWORD *)&v272 = v176;
      *((_QWORD *)&v272 + 1) = 6;
      sub_1401A27E0(v269, &v274, &v264, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      nullsub_1(v178, v177, v179, v180, v230);
      v181 = sub_140001650(5, 1);
      if ( !v181 )
        sub_14176E54B(1, 5);
      *(_BYTE *)(v181 + 4) = 108;
      *(_DWORD *)v181 = 1701080941;
      v264 = 5;
      *(_QWORD *)&v265 = v181;
      *((_QWORD *)&v265 + 1) = 5;
      v186 = v273[39];
      if ( v186 < 0 )
      {
        v189 = 0;
LABEL_135:
        v278 = 1;
        sub_14176E54B(v189, v186);
      }
      if ( v186 )
      {
        v187 = v10;
        v188 = v273[38];
        nullsub_1(v183, v182, v184, v185, v231);
        v189 = 1;
        v190 = sub_140001650(v186, 1);
        if ( !v190 )
          goto LABEL_135;
        v191 = v190;
        sub_14172B820(v190, v188, v186);
        v7 = 0x6449646165726874LL;
        v10 = v187;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v191 = 1;
      }
      LOBYTE(v271) = 3;
      *((_QWORD *)&v271 + 1) = v186;
      *(_QWORD *)&v272 = v191;
      *((_QWORD *)&v272 + 1) = v186;
      v278 = 0;
      sub_1401A27E0(v269, &v274, &v264, v10);
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      nullsub_1(v193, v192, v194, v195, v231);
      v196 = (void *)sub_140001650(15, 1);
      if ( !v196 )
        sub_14176E54B(1, 15);
      qmemcpy(v196, "reasoningEffort", 15);
      v264 = 15;
      *(_QWORD *)&v265 = v196;
      *((_QWORD *)&v265 + 1) = 15;
      v200 = v273[42];
      if ( v200 < 0 )
      {
        v203 = 0;
LABEL_139:
        v277 = 1;
        sub_14176E54B(v203, v200);
      }
      if ( v200 )
      {
        v201 = v10;
        v202 = v273[41];
        nullsub_1(0x6E696E6F73616572LL, v197, v198, v199, v215);
        v203 = 1;
        v204 = sub_140001650(v200, 1);
        if ( !v204 )
          goto LABEL_139;
        v205 = v204;
        sub_14172B820(v204, v202, v200);
        v7 = 0x6449646165726874LL;
        v10 = v201;
        v11 = 0x5074756F6C6C6F72LL;
      }
      else
      {
        v205 = 1;
      }
      LOBYTE(v271) = 3;
      *((_QWORD *)&v271 + 1) = v200;
      *(_QWORD *)&v272 = v205;
      *((_QWORD *)&v272 + 1) = v200;
      v277 = 0;
      sub_1401A27E0(v269, &v274, &v264, v10);
      v2 = v253;
      if ( LOBYTE(v269[0]) != 0xFF )
        sub_1401FF690(v269);
      v262 = v275;
      v261 = v274;
      LOBYTE(v260) = 5;
      v276 = 0;
      sub_1401A27E0(v10, v8, &v267, v9);
      if ( (_BYTE)v271 != 0xFF )
        sub_1401FF690(v10);
      *(_QWORD *)&v232[23] = v248;
      *(_OWORD *)&v232[7] = v247;
      v206 = v258;
      v270 = v259;
      v246 = v258;
      v273 = nullptr;
      while ( v270 != v273 )
      {
        v273 = (_QWORD *)((char *)v273 + 1);
        v207 = v11;
        v208 = v10;
        v209 = v9;
        v210 = v7;
        v211 = v206 + 32;
        sub_1403FF680();
        v206 = v211;
        v7 = v210;
        v9 = v209;
        v10 = v208;
        v11 = v207;
        v2 = v253;
      }
      if ( v257 )
        sub_140001660(v258, 32 * v257, 8);
      v212 = v251;
      v213 = 32 * v251;
      v214 = v236;
      *(_BYTE *)(v236 + v213) = 5;
      *(_OWORD *)(v214 + v213 + 1) = *(_OWORD *)v232;
      *(_OWORD *)(v214 + v213 + 16) = *(_OWORD *)&v232[15];
      v5 = v212 + 1;
      result = v234 + 1;
      v4 = v252;
      v6 = v235;
    }
    while ( v234 + 1 != v237 );
  }
  *v4 = v5;
  return result;
}
