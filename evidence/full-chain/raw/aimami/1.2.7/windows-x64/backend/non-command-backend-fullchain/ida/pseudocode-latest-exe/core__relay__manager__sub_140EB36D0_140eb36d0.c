// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eb36d0 | successor of pre-update 0x140d964e0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.967, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140EB36D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _QWORD *v9; // r15
  __int64 v10; // rdx
  char v11; // r13
  char v12; // r12
  unsigned int v13; // r15d
  int v14; // ebx
  int v15; // r12d
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int128 v22; // xmm0
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  char v31; // di
  __int128 v32; // xmm2
  _QWORD *v33; // rcx
  __int64 v34; // r8
  signed __int8 v35; // al
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  char v40; // cl
  unsigned int v41; // eax
  __int64 v42; // r8
  __int128 v43; // rax
  __int64 v44; // rcx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int64 v48; // rdx
  __int64 v49; // rax
  char v50; // dl
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  unsigned __int64 v54; // r12
  __int64 v55; // rdx
  __int64 v56; // r15
  __int64 v57; // r13
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rdx
  int v60; // ebx
  __int64 v61; // rdi
  __int64 v62; // r15
  char v63; // bl
  __int64 v64; // rcx
  __int64 v65; // rax
  bool v66; // zf
  __int64 v67; // r8
  char v68; // dl
  _BYTE *v69; // rdi
  int v70; // r15d
  __int64 v71; // rbx
  char v72; // bl
  __int64 v73; // r13
  __int64 v74; // rax
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  PVOID v78; // rcx
  char v79; // al
  __int64 v80; // rbx
  _QWORD *v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdi
  _QWORD *v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v98; // r15
  __int64 v99; // r12
  __int64 v100; // rdx
  int v101; // edi
  int v102; // ebx
  __int64 v103; // r13
  __int64 v104; // rax
  __int64 v105; // r15
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  __int128 v108; // xmm2
  char v109; // di
  char v110; // bl
  _QWORD *v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rax
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm2
  void *v119; // rdi
  void *v120; // rdi
  char v121; // cl
  _QWORD v122[32]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v123[8]; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v124; // [rsp+158h] [rbp+D8h]
  __int64 v125; // [rsp+160h] [rbp+E0h]
  __int64 v126[8]; // [rsp+210h] [rbp+190h] BYREF
  __int128 v127; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v128; // [rsp+260h] [rbp+1E0h]
  __int128 v129; // [rsp+270h] [rbp+1F0h]
  char v130; // [rsp+3BCh] [rbp+33Ch]
  __int128 v131; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v132; // [rsp+3E0h] [rbp+360h]
  __int128 v133; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v134; // [rsp+400h] [rbp+380h]
  _OWORD v135[3]; // [rsp+410h] [rbp+390h] BYREF
  __int64 v136; // [rsp+440h] [rbp+3C0h]
  __int128 v137; // [rsp+448h] [rbp+3C8h] BYREF
  __int64 v138; // [rsp+458h] [rbp+3D8h]
  __int128 v139; // [rsp+460h] [rbp+3E0h] BYREF
  __int128 v140; // [rsp+470h] [rbp+3F0h]
  __int128 v141; // [rsp+480h] [rbp+400h]
  __int128 v142; // [rsp+490h] [rbp+410h]
  __int128 v143; // [rsp+4A0h] [rbp+420h]
  __int128 v144; // [rsp+4B0h] [rbp+430h]
  _QWORD *v145; // [rsp+4C8h] [rbp+448h]
  __m512i v146; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v147; // [rsp+510h] [rbp+490h]
  __int64 v148; // [rsp+520h] [rbp+4A0h]
  _BYTE v149[384]; // [rsp+530h] [rbp+4B0h] BYREF
  _QWORD *v150; // [rsp+6B0h] [rbp+630h]
  __int128 v151; // [rsp+6B8h] [rbp+638h] BYREF
  __int64 v152; // [rsp+6C8h] [rbp+648h]
  __int128 v153; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v154; // [rsp+6E0h] [rbp+660h]
  __int128 v155; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v156; // [rsp+700h] [rbp+680h]
  __int128 v157; // [rsp+710h] [rbp+690h] BYREF
  __int64 v158; // [rsp+720h] [rbp+6A0h]
  __int64 v159; // [rsp+728h] [rbp+6A8h]
  unsigned __int64 v160; // [rsp+730h] [rbp+6B0h]
  __int64 v161; // [rsp+738h] [rbp+6B8h] BYREF
  __int64 v162; // [rsp+740h] [rbp+6C0h]
  __int64 v163; // [rsp+748h] [rbp+6C8h]
  __m512i v164; // [rsp+750h] [rbp+6D0h] BYREF
  _BYTE v165[24]; // [rsp+790h] [rbp+710h] BYREF
  _BYTE v166[24]; // [rsp+7A8h] [rbp+728h] BYREF
  _BYTE v167[24]; // [rsp+7C0h] [rbp+740h] BYREF
  _BYTE v168[24]; // [rsp+7D8h] [rbp+758h]
  __int64 v169; // [rsp+7F0h] [rbp+770h]
  __int64 v170; // [rsp+7F8h] [rbp+778h]
  __int128 v171; // [rsp+810h] [rbp+790h]
  __int64 v172; // [rsp+820h] [rbp+7A0h]
  __int64 v173; // [rsp+828h] [rbp+7A8h]
  __int128 v174; // [rsp+830h] [rbp+7B0h]
  unsigned __int64 v175; // [rsp+840h] [rbp+7C0h]
  int v176; // [rsp+848h] [rbp+7C8h]
  int v177; // [rsp+84Ch] [rbp+7CCh]
  __int64 v178; // [rsp+850h] [rbp+7D0h]
  unsigned __int64 v179; // [rsp+858h] [rbp+7D8h]
  PVOID Address; // [rsp+860h] [rbp+7E0h]
  __int64 *v181; // [rsp+868h] [rbp+7E8h]
  __int64 v182; // [rsp+870h] [rbp+7F0h]
  unsigned int v183; // [rsp+87Ch] [rbp+7FCh]
  __int64 v184; // [rsp+880h] [rbp+800h]
  char v185; // [rsp+88Eh] [rbp+80Eh]
  char v186; // [rsp+88Fh] [rbp+80Fh]
  char v187; // [rsp+890h] [rbp+810h]
  char v188; // [rsp+891h] [rbp+811h]
  char v189; // [rsp+892h] [rbp+812h]
  char v190; // [rsp+893h] [rbp+813h]
  int v191; // [rsp+894h] [rbp+814h]
  __int64 v192; // [rsp+898h] [rbp+818h]
  char v193; // [rsp+8A4h] [rbp+824h]
  char v194; // [rsp+8A5h] [rbp+825h]
  char v195; // [rsp+8A6h] [rbp+826h]
  char v196; // [rsp+8A7h] [rbp+827h]
  char v197; // [rsp+8A8h] [rbp+828h]
  char v198; // [rsp+8A9h] [rbp+829h]
  char v199; // [rsp+8AAh] [rbp+82Ah]
  unsigned __int8 v200; // [rsp+8ABh] [rbp+82Bh]
  char v201; // [rsp+8ACh] [rbp+82Ch]
  char v202; // [rsp+8ADh] [rbp+82Dh]
  char v203; // [rsp+8AEh] [rbp+82Eh]
  char v204; // [rsp+8AFh] [rbp+82Fh]
  char v205; // [rsp+8B0h] [rbp+830h]
  char v206; // [rsp+8B1h] [rbp+831h]
  char v207; // [rsp+8B2h] [rbp+832h]
  char v208; // [rsp+8B3h] [rbp+833h]
  char v209; // [rsp+8B4h] [rbp+834h]
  char v210; // [rsp+8B5h] [rbp+835h]
  char v211; // [rsp+8B6h] [rbp+836h]
  char v212; // [rsp+8B7h] [rbp+837h]
  char v213; // [rsp+8B8h] [rbp+838h]
  char v214; // [rsp+8B9h] [rbp+839h]
  char v215; // [rsp+8BAh] [rbp+83Ah]
  char v216; // [rsp+8BBh] [rbp+83Bh]
  char v217; // [rsp+8BCh] [rbp+83Ch]
  char v218; // [rsp+8BDh] [rbp+83Dh]
  char v219; // [rsp+8BEh] [rbp+83Eh]
  char v220; // [rsp+8BFh] [rbp+83Fh]
  __int64 v221; // [rsp+8C0h] [rbp+840h]

  v221 = -2;
  v192 = a3;
  v5 = a2[2];
  if ( *(_QWORD *)(v5 + 16) != -1 )
  {
    v206 = 1;
    v205 = 1;
    v204 = 1;
    sub_1416DB410(&v149[8], v5 + 16);
    *(_QWORD *)v149 = 9;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v149[80];
    v6 = *(_OWORD *)&v149[16];
    v7 = *(_OWORD *)&v149[32];
    v8 = *(_OWORD *)&v149[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v149[64];
    *(_OWORD *)(a1 + 56) = v8;
    *(_OWORD *)(a1 + 40) = v7;
    *(_OWORD *)(a1 + 24) = v6;
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v149;
    *(_QWORD *)a1 = -1;
    v9 = (_QWORD *)v192;
    v10 = *(_QWORD *)(v192 + 96);
    v11 = 1;
    if ( v10 != -1 && v10 )
      sub_140001660(*(_QWORD *)(v192 + 104), v10, 1);
    v12 = 1;
LABEL_109:
    if ( *v9 )
      sub_140001660(v9[1], *v9, 1);
LABEL_111:
    v87 = v9[3];
    if ( v87 )
      sub_140001660(v9[4], v87, 1);
    v88 = v9[6];
    if ( v88 )
      sub_140001660(v9[7], v88, 1);
    v89 = v9[9];
    if ( v89 )
      sub_140001660(v9[10], v89, 1);
    v90 = v9[15];
    if ( v90 != -1 )
    {
      v91 = v9[17];
      if ( v91 )
      {
        v92 = (_QWORD *)(v9[16] + 72LL);
        do
        {
          v93 = *(v92 - 7);
          if ( v93 )
            sub_140001660(*(v92 - 6), v93, 1);
          v94 = *(v92 - 1);
          if ( v94 > 0 )
            sub_140001660(*v92, v94, 1);
          v95 = *(v92 - 4);
          if ( v95 )
            sub_140001660(*(v92 - 3), v95, 1);
          v92 += 12;
          --v91;
        }
        while ( v91 );
        v90 = v9[15];
      }
      if ( v90 )
        sub_140001660(v9[16], 96 * v90, 8);
    }
    if ( v11 )
    {
      v96 = v9[18];
      if ( v96 != -1 && v12 && v96 )
        sub_140001660(v9[19], v96, 1);
    }
    return a1;
  }
  v206 = 1;
  v205 = 1;
  v204 = 1;
  sub_1414331D0(v149);
  v13 = *(_DWORD *)v149;
  v14 = (*(int *)v149 >> 13) - 1;
  v15 = 0;
  if ( *(int *)v149 >> 13 <= 0 )
  {
    v16 = (1 - (*(int *)v149 >> 13)) / 0x190u + 1;
    v14 += 400 * v16;
    v15 = -146097 * v16;
  }
  v17 = *(unsigned int *)&v149[4];
  v18 = *(unsigned int *)&v149[8];
  v206 = 1;
  v205 = 1;
  v204 = 1;
  v145 = (_QWORD *)(v192 + 48);
  sub_1416DB410(&v161, v192 + 48);
  v19 = v192;
  v181 = (__int64 *)(v192 + 96);
  if ( *(_QWORD *)(v192 + 96) != -1 )
  {
    v20 = *(_QWORD *)(v192 + 104);
    v21 = *(_QWORD *)(v192 + 112);
    v199 = 1;
    v198 = 1;
    v197 = 1;
    sub_1409FA7A0(v149, v20, v21);
    if ( *(_QWORD *)v149 != -1 )
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v149[16];
      v22 = *(_OWORD *)v149;
LABEL_20:
      *(_OWORD *)(a1 + 16) = v22;
      *(_QWORD *)(a1 + 8) = 9;
      *(_QWORD *)a1 = -1;
      v11 = 1;
      v12 = 1;
      v31 = 1;
      v9 = (_QWORD *)v192;
      goto LABEL_103;
    }
    v19 = v192;
  }
  LODWORD(v23) = 0;
  if ( *(_QWORD *)(v19 + 120) != -1 )
    v23 = *(_QWORD *)(v19 + 136);
  LODWORD(v24) = 8;
  if ( *(_QWORD *)(v19 + 120) != -1 )
    v24 = *(_QWORD *)(v19 + 128);
  v25 = *(_QWORD *)(v19 + 80);
  v26 = *(_QWORD *)(v19 + 88);
  v27 = *(_BYTE *)(v19 + 169);
  v199 = 1;
  v198 = 1;
  v197 = 1;
  sub_1409F94C0((unsigned int)v149, v24, v23, v25, v26, v27);
  if ( *(_QWORD *)v149 == -1 )
  {
    *(_QWORD *)&v128 = *(_QWORD *)&v149[24];
    v22 = *(_OWORD *)&v149[8];
    *(_OWORD *)v164.m512i_i8 = *(_OWORD *)&v149[8];
    *(_OWORD *)&v164.m512i_u64[4] = v129;
    v32 = v128;
    *(_OWORD *)&v164.m512i_u64[2] = v128;
    *(_OWORD *)(a1 + 48) = v129;
    *(_OWORD *)(a1 + 32) = v32;
    goto LABEL_20;
  }
  v129 = *(_OWORD *)&v149[32];
  v128 = *(_OWORD *)&v149[16];
  LOBYTE(v191) = v149[48];
  *(_OWORD *)&v164.m512i_u64[2] = *(_OWORD *)&v149[16];
  *(_OWORD *)v164.m512i_i8 = *(_OWORD *)v149;
  *(_OWORD *)&v164.m512i_u64[4] = *(_OWORD *)&v149[32];
  v158 = *(_QWORD *)&v149[16];
  v157 = *(_OWORD *)v149;
  v156 = *(_QWORD *)&v149[40];
  v155 = *(_OWORD *)&v164.m512i_u64[3];
  v28 = *(_QWORD *)(v192 + 32);
  v29 = *(_QWORD *)(v192 + 40);
  v190 = 1;
  v189 = 1;
  v188 = 1;
  sub_140992D30(v149, v28, v29);
  v127 = *(_OWORD *)&v149[8];
  *(_QWORD *)&v128 = *(_QWORD *)&v149[24];
  if ( *(_DWORD *)v149 == 1 )
  {
    *(_QWORD *)(a1 + 32) = v128;
    *(_OWORD *)(a1 + 16) = v127;
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)a1 = -1;
    v11 = 1;
    v12 = 1;
    v31 = 1;
LABEL_90:
    v9 = (_QWORD *)v192;
    if ( (_QWORD)v155 )
      sub_140001660(*((_QWORD *)&v155 + 1), v155, 1);
    v80 = v158;
    if ( v158 )
    {
      v81 = (_QWORD *)(*((_QWORD *)&v157 + 1) + 72LL);
      do
      {
        v82 = *(v81 - 7);
        if ( v82 )
          sub_140001660(*(v81 - 6), v82, 1);
        v83 = *(v81 - 1);
        if ( v83 > 0 )
          sub_140001660(*v81, v83, 1);
        v84 = *(v81 - 4);
        if ( v84 )
          sub_140001660(*(v81 - 3), v84, 1);
        v81 += 12;
        --v80;
      }
      while ( v80 );
    }
    if ( (_QWORD)v157 )
      sub_140001660(*((_QWORD *)&v157 + 1), 96 * v157, 8);
LABEL_103:
    v85 = v181;
    if ( v161 )
      sub_140001660(v162, v161, 1);
    v86 = *v85;
    if ( *v85 != -1 && v86 )
      sub_140001660(v9[13], v86, 1);
    if ( !v31 )
      goto LABEL_111;
    goto LABEL_109;
  }
  v33 = a2;
  v154 = v128;
  v153 = v127;
  v34 = a2[4];
  Address = (PVOID)(v34 + 16);
  LOBYTE(v30) = 1;
  v35 = _InterlockedCompareExchange8((volatile signed __int8 *)(v34 + 16), 1, 0);
  v178 = v34;
  if ( v35 )
  {
    v216 = 1;
    v215 = 1;
    v214 = 1;
    sub_141969A30((volatile void *)(v34 + 16));
    v34 = v178;
    v33 = a2;
  }
  if ( 2 * *off_142240260 )
  {
    v216 = 1;
    v215 = 1;
    v214 = 1;
    v41 = sub_14196A710(v33, v30, v34);
    v33 = a2;
    LOBYTE(v41) = v41 ^ 1;
    v183 = v41;
    if ( *(_BYTE *)(v178 + 17) )
      goto LABEL_25;
  }
  else
  {
    v183 = 0;
    if ( *(_BYTE *)(v34 + 17) )
    {
LABEL_25:
      nullsub_1(v33, v30);
      v36 = (void *)sub_140001650(40, 1);
      if ( !v36 )
        sub_14196B2DB(1, 40);
      qmemcpy(v36, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v183 )
      {
        v39 = 2 * *off_142240260;
        if ( v39 )
        {
          v216 = 1;
          v215 = 1;
          v214 = 1;
          v120 = v36;
          v121 = sub_14196A710(v39, v37, v38);
          v36 = v120;
          if ( !v121 )
            *(_BYTE *)(v178 + 17) = 1;
        }
      }
      v40 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v40 == 2 )
      {
        v216 = 1;
        v215 = 1;
        v214 = 1;
        v119 = v36;
        WakeByAddressSingle(Address);
        v36 = v119;
      }
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = 40;
      *(_QWORD *)(a1 + 24) = v36;
      *(_QWORD *)(a1 + 32) = 40;
      *(_QWORD *)a1 = -1;
      v11 = 1;
      v12 = 1;
      v31 = 1;
LABEL_88:
      if ( (_QWORD)v153 )
        sub_140001660(*((_QWORD *)&v153 + 1), v153, 1);
      goto LABEL_90;
    }
  }
  v203 = 1;
  v202 = 1;
  v201 = 1;
  sub_1408741F0(v149, v33 + 5, aUpsertingARela, 26);
  v43 = *(_OWORD *)v149;
  v44 = v149[16];
  if ( *(_QWORD *)v149 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v149[80];
    v45 = *(_OWORD *)&v149[17];
    v46 = *(_OWORD *)&v149[33];
    v47 = *(_OWORD *)&v149[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v149[65];
    *(_OWORD *)(a1 + 57) = v47;
    *(_OWORD *)(a1 + 41) = v46;
    *(_OWORD *)(a1 + 25) = v45;
    *(_OWORD *)(a1 + 8) = v43;
    *(_BYTE *)(a1 + 24) = v44;
    *(_QWORD *)a1 = -1;
    v11 = 1;
    v12 = 1;
    v31 = 1;
    goto LABEL_84;
  }
  v159 = *(_QWORD *)&v149[8];
  v200 = v149[16];
  v48 = a2[1] + 16LL;
  v209 = 1;
  v208 = 1;
  v207 = 1;
  sub_1408740F0(v149, v48);
  v209 = 1;
  v208 = 1;
  v207 = 1;
  v49 = sub_140E9BA60(v149, &off_141AA0C00);
  LOBYTE(v184) = v50 & 1;
  v182 = v49;
  sub_140ED7B40(&v127, v49 + 8);
  v220 = 1;
  v219 = 1;
  v218 = 1;
  v217 = 1;
  sub_14002B980(v182, (unsigned __int8)v184);
  if ( v130 )
  {
    v220 = 1;
    v219 = 1;
    v218 = 1;
    v217 = 1;
    sub_140ED3EE0(v149);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v149[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v149[64];
    v51 = *(_OWORD *)v149;
    v52 = *(_OWORD *)&v149[16];
    v53 = *(_OWORD *)&v149[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v149[48];
    *(_OWORD *)(a1 + 40) = v53;
    *(_OWORD *)(a1 + 24) = v52;
    *(_OWORD *)(a1 + 8) = v51;
    *(_QWORD *)a1 = -1;
    v11 = 1;
    v12 = 1;
    v31 = 1;
LABEL_82:
    sub_140292E20(&v127);
LABEL_83:
    v203 = v11;
    v202 = v12;
    v201 = v31;
    sub_14002B980(v159, v200);
LABEL_84:
    if ( !(_BYTE)v183 )
    {
      if ( 2 * *off_142240260 )
      {
        v216 = v11;
        v215 = v12;
        v214 = v31;
        if ( !(unsigned __int8)sub_14196A710(v44, *((_QWORD *)&v43 + 1), v42) )
          *(_BYTE *)(v178 + 17) = 1;
      }
    }
    v78 = Address;
    v79 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v79 == 2 )
    {
      v216 = v11;
      v215 = v12;
      v214 = v31;
      WakeByAddressSingle(v78);
    }
    goto LABEL_88;
  }
  v54 = 1000
      * (v17
       + 86400LL * (int)(((v14 / 100) >> 2) + ((1461 * v14) >> 2) + v15 + ((v13 >> 4) & 0x1FF) - v14 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v18) >> 50);
  if ( *v181 != -1 )
  {
    v220 = 1;
    v219 = 1;
    v218 = 1;
    v217 = 1;
    sub_1416DB410(v149, v181);
    v55 = *(_QWORD *)&v149[8];
    v184 = *(_QWORD *)v149;
    v56 = *(_QWORD *)&v149[16];
    v57 = *((_QWORD *)&v127 + 1);
    v58 = v128;
    *(_QWORD *)v149 = *((_QWORD *)&v127 + 1);
    *(_QWORD *)&v149[8] = *((_QWORD *)&v127 + 1) + ((_QWORD)v128 << 8);
    v182 = v55;
    v60 = sub_140DDD720(v149, v55, *(_QWORD *)&v149[16]);
    v179 = v58;
    v160 = v59;
    if ( ((v59 < v58) & (unsigned __int8)v60) != 0 )
    {
      v187 = 1;
      v186 = 1;
      v185 = 1;
      sub_140EDA6C0(v122, v57 + (v59 << 8));
      if ( v122[0] != -1 )
      {
        sub_1419234B0(&v164, v122, 256);
LABEL_49:
        v195 = 1;
        v194 = 1;
        v193 = 1;
        sub_1416DB410(&v151, &v165[8]);
        if ( v164.m512i_i64[0] )
          sub_140001660(v164.m512i_i64[1], v164.m512i_i64[0], 1);
        v164.m512i_i64[0] = v184;
        v164.m512i_i64[1] = v182;
        v164.m512i_i64[2] = v56;
        *(_QWORD *)&v149[16] = *(_QWORD *)(v192 + 16);
        *(_OWORD *)v149 = *(_OWORD *)v192;
        if ( v164.m512i_i64[3] )
          sub_140001660(v164.m512i_i64[4], v164.m512i_i64[3], 1);
        v164.m512i_i64[5] = *(_QWORD *)&v149[16];
        *(_OWORD *)&v164.m512i_u64[3] = *(_OWORD *)v149;
        v213 = 1;
        v212 = 1;
        sub_1416DB410(v149, &v153);
        if ( v164.m512i_i64[6] )
          sub_140001660(v164.m512i_i64[7], v164.m512i_i64[6], 1);
        *(_QWORD *)v165 = *(_QWORD *)&v149[16];
        *(_OWORD *)&v164.m512i_u64[6] = *(_OWORD *)v149;
        v213 = 1;
        v212 = 1;
        sub_1416DB410(v149, &v155);
        v69 = &v166[8];
        if ( *(_QWORD *)&v166[8] )
          sub_140001660(*(_QWORD *)&v166[16], *(_QWORD *)&v166[8], 1);
        *(_QWORD *)v167 = *(_QWORD *)&v149[16];
        *(_OWORD *)&v166[8] = *(_OWORD *)v149;
        BYTE2(v177) = v191;
        HIBYTE(v177) = *(_BYTE *)(v192 + 170);
        v213 = 1;
        v212 = 1;
        sub_140230EE0(v149, &v157);
        v70 = v60;
        sub_1401A3440(&v167[8]);
        *(_QWORD *)v168 = *(_QWORD *)&v149[16];
        *(_OWORD *)&v167[8] = *(_OWORD *)v149;
        v71 = v192;
        if ( *(_QWORD *)(v192 + 144) == -1 )
        {
          LOBYTE(v69) = 1;
        }
        else
        {
          *(_QWORD *)&v149[16] = *(_QWORD *)(v192 + 160);
          *(_OWORD *)v149 = *(_OWORD *)(v192 + 144);
          if ( *(_QWORD *)&v168[8] )
            sub_140001660(*(_QWORD *)&v168[16], *(_QWORD *)&v168[8], 1);
          v169 = *(_QWORD *)&v149[16];
          *(_OWORD *)&v168[8] = *(_OWORD *)v149;
          LODWORD(v69) = 0;
        }
        BYTE1(v177) = *(_BYTE *)(v71 + 168);
        v175 = v54;
        if ( !*((_QWORD *)&v174 + 1) )
          *((_QWORD *)&v174 + 1) = v54;
        v72 = v70;
        if ( v163 )
        {
          v213 = 1;
          v212 = (char)v69;
          sub_1416DB410(v149, &v161);
          if ( *(_QWORD *)&v165[8] )
            sub_140001660(*(_QWORD *)&v165[16], *(_QWORD *)&v165[8], 1);
          *(_QWORD *)v166 = *(_QWORD *)&v149[16];
          *(_OWORD *)&v165[8] = *(_OWORD *)v149;
          LOBYTE(v70) = 1;
        }
        else
        {
          if ( *(_QWORD *)&v165[8] )
            sub_140001660(*(_QWORD *)&v165[16], *(_QWORD *)&v165[8], 1);
          *(_QWORD *)v166 = v152;
          *(_OWORD *)&v165[8] = v151;
          v70 = 0;
        }
        v191 = (int)v69;
        if ( (v72 & 1) != 0 )
        {
          v213 = v70;
          v212 = (char)v69;
          sub_140EDA6C0(v149, &v164);
          if ( v160 >= v179 )
          {
            LODWORD(v181) = v70;
            sub_14196B673(v160, v179, &off_141AA0C28);
          }
          v73 = (v160 << 8) + v57;
          sub_140292FD0(v73);
          sub_1419234B0(v73, v149, 256);
        }
        else
        {
          v213 = v70;
          v212 = (char)v69;
          sub_140EDA6C0(v149, &v164);
          v213 = v70;
          v212 = (char)v69;
          sub_140EBCAC0(&v127, v149);
        }
        v74 = sub_1419234B0(v123, &v164, 256);
        if ( (_BYTE)v70 && (_QWORD)v151 )
          sub_140001660(*((_QWORD *)&v151 + 1), v151, 1);
        LOBYTE(v74) = 1;
        LODWORD(v184) = v74;
        goto LABEL_79;
      }
    }
    else
    {
      v122[0] = -1;
    }
    v164.m512i_i64[0] = 0;
    v164.m512i_i64[1] = 1;
    *(_OWORD *)&v164.m512i_u64[2] = 0;
    v164.m512i_i64[4] = 1;
    *(_OWORD *)&v164.m512i_u64[5] = 0;
    v164.m512i_i64[7] = 1;
    *(_OWORD *)v165 = 0;
    *(_QWORD *)&v165[16] = 1;
    *(_OWORD *)v166 = 0;
    *(_QWORD *)&v171 = 0x8000000000000001uLL;
    *(_QWORD *)&v166[16] = 1;
    *(_OWORD *)v167 = 0;
    *(_QWORD *)&v167[16] = 8;
    *(_OWORD *)v168 = 0;
    *(_QWORD *)&v168[16] = 1;
    v169 = 0;
    v176 = 0;
    v173 = -1;
    v174 = 0;
    v175 = 0;
    v170 = -1;
    v177 = 0;
    goto LABEL_49;
  }
  v220 = 1;
  v219 = 1;
  v218 = 1;
  v217 = 1;
  sub_140ED3F80(v149);
  v164.m512i_i64[0] = (__int64)v149;
  v164.m512i_i64[1] = (__int64)sub_1400015F0;
  sub_1416DAFA0(&v137, &unk_141AA0C18, &v164);
  if ( *(_QWORD *)v149 )
    sub_140001660(*(_QWORD *)&v149[8], *(_QWORD *)v149, 1);
  v160 = *((_QWORD *)&v137 + 1);
  v179 = v137;
  v184 = *(_QWORD *)v192;
  v182 = *(_QWORD *)(v192 + 8);
  v61 = *(_QWORD *)(v192 + 16);
  sub_1416DB410(&v133, &v153);
  sub_1416DB410(&v146, &v161);
  sub_1416DB410(&v139, &v155);
  v62 = v192;
  v63 = *(_BYTE *)(v192 + 170);
  sub_140230EE0(v149, &v157);
  v64 = *(_QWORD *)(v62 + 144);
  v65 = 0;
  v66 = v64 == -1;
  if ( v64 == -1 )
    v64 = 0;
  v67 = 1;
  if ( !v66 )
  {
    v67 = *(_QWORD *)(v62 + 152);
    v65 = *(_QWORD *)(v62 + 160);
  }
  v68 = *(_BYTE *)(v62 + 168);
  v164.m512i_i64[2] = v138;
  *(_OWORD *)v164.m512i_i8 = v137;
  v164.m512i_i64[3] = v184;
  v164.m512i_i64[4] = v182;
  v164.m512i_i64[5] = v61;
  *(_OWORD *)&v164.m512i_u64[6] = v133;
  *(_QWORD *)v165 = v134;
  *(_OWORD *)&v165[8] = *(_OWORD *)v146.m512i_i8;
  *(_QWORD *)v166 = v146.m512i_i64[2];
  LOBYTE(v177) = 0;
  *(_QWORD *)&v171 = 0x8000000000000001uLL;
  *(_QWORD *)v167 = v140;
  *(_OWORD *)&v166[8] = v139;
  BYTE2(v177) = v191;
  HIBYTE(v177) = v63;
  *(_OWORD *)&v167[8] = *(_OWORD *)v149;
  *(_QWORD *)v168 = *(_QWORD *)&v149[16];
  *(_QWORD *)&v168[8] = v64;
  *(_QWORD *)&v168[16] = v67;
  v169 = v65;
  v176 = 0;
  v173 = -1;
  *(_QWORD *)&v174 = 0;
  *((_QWORD *)&v174 + 1) = v54;
  v175 = v54;
  v170 = -1;
  BYTE1(v177) = v68;
  sub_140EDA6C0(v149, &v164);
  sub_140EBCAC0(&v127, v149);
  sub_1419234B0(v123, &v164, 256);
  LODWORD(v184) = 0;
  v191 = 0;
LABEL_79:
  v211 = 1;
  v210 = 1;
  sub_140E9EBF0(v149, a2);
  if ( *(_DWORD *)v149 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v149[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v149[64];
    v75 = *(_OWORD *)v149;
    v76 = *(_OWORD *)&v149[16];
    v77 = *(_OWORD *)&v149[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v149[48];
    *(_OWORD *)(a1 + 40) = v77;
    *(_OWORD *)(a1 + 24) = v76;
    *(_OWORD *)(a1 + 8) = v75;
LABEL_81:
    *(_QWORD *)a1 = -1;
    v12 = v191;
    v11 = v184;
    sub_140292FD0(v123);
    v31 = 0;
    goto LABEL_82;
  }
  v98 = v163;
  if ( v126[0] < 0 )
  {
    if ( !v163 )
    {
LABEL_146:
      *(_QWORD *)&v133 = -1;
      sub_1419234B0(&v164, v123, 256);
      goto LABEL_147;
    }
    v99 = *a2;
    v101 = v124;
    v102 = v125;
    v103 = v162;
  }
  else
  {
    if ( !v163 )
      goto LABEL_146;
    v99 = *a2;
    v100 = *a2 + 16LL;
    v101 = v124;
    v102 = v125;
    v211 = 1;
    v210 = 1;
    sub_140D70EF0((unsigned int)v149, v100, v124, v125, (__int64)v126);
    v103 = v162;
    if ( (unsigned __int8)sub_140D85B60(v149, v162, v98) )
      goto LABEL_146;
  }
  v211 = 1;
  v210 = 1;
  sub_140D713E0((unsigned int)&v164, v99 + 16, v101, v102, v103, v98);
  if ( v164.m512i_i64[0] == -1 )
  {
    v132 = v164.m512i_i64[3];
    v131 = *(_OWORD *)&v164.m512i_u64[1];
    v211 = 1;
    v210 = 1;
    sub_140E9AB70(v149, &v131);
    v115 = *(_QWORD *)v149;
    v141 = *(_OWORD *)&v149[40];
    v142 = *(_OWORD *)&v149[56];
    v143 = *(_OWORD *)&v149[72];
    v146 = *(__m512i *)&v149[8];
    v147 = *(_OWORD *)&v149[72];
    v148 = *(_QWORD *)&v149[88];
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v149[88];
    *(_OWORD *)(a1 + 80) = v147;
    v116 = *(_OWORD *)v146.m512i_i8;
    v117 = *(_OWORD *)&v146.m512i_u64[2];
    v118 = *(_OWORD *)&v146.m512i_u64[4];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v146.m512i_u64[6];
    *(_OWORD *)(a1 + 48) = v118;
    *(_OWORD *)(a1 + 32) = v117;
    *(_OWORD *)(a1 + 16) = v116;
    *(_QWORD *)(a1 + 8) = v115;
    goto LABEL_81;
  }
  *(_QWORD *)&v144 = *(_QWORD *)&v165[16];
  v143 = *(_OWORD *)v165;
  v146 = v164;
  v147 = *(_OWORD *)v165;
  v148 = *(_QWORD *)&v165[16];
  v136 = *(_QWORD *)&v165[16];
  v135[2] = *(_OWORD *)v165;
  v135[1] = *(_OWORD *)&v164.m512i_u64[6];
  v135[0] = *(_OWORD *)&v164.m512i_u64[4];
  v134 = *(_OWORD *)&v164.m512i_u64[2];
  v133 = *(_OWORD *)v164.m512i_i8;
  sub_1419234B0(&v164, v123, 256);
  v196 = 1;
  sub_1416DB410(v149, v135);
  if ( (__int64)v171 > 0 )
    sub_140001660(*((_QWORD *)&v171 + 1), v171, 1);
  v172 = *(_QWORD *)&v149[16];
  v171 = *(_OWORD *)v149;
  LOBYTE(v177) = 1;
LABEL_147:
  *(_QWORD *)&v139 = *((_QWORD *)&v127 + 1);
  *((_QWORD *)&v139 + 1) = *((_QWORD *)&v127 + 1) + ((_QWORD)v128 << 8);
  v104 = sub_140DDD7A0(&v139, v164.m512i_i64[1], v164.m512i_i64[2]);
  if ( v104 )
  {
    v105 = v104;
    v196 = 1;
    sub_140EDA6C0(v149, &v164);
    sub_140292FD0(v105);
    sub_1419234B0(v105, v149, 256);
  }
  v150 = a2;
  sub_1419234B0(v149, &v127, 384);
  v196 = 0;
  sub_140CD6490(&v139, &v133, v149);
  if ( (_DWORD)v139 != -1 )
  {
    *(_OWORD *)(a1 + 88) = v144;
    *(_OWORD *)(a1 + 72) = v143;
    v106 = v139;
    v107 = v140;
    v108 = v141;
    *(_OWORD *)(a1 + 56) = v142;
    *(_OWORD *)(a1 + 40) = v108;
    *(_OWORD *)(a1 + 24) = v107;
    *(_OWORD *)(a1 + 8) = v106;
    *(_QWORD *)a1 = -1;
    sub_140292FD0(&v164);
    v31 = 0;
    v12 = v191;
    v11 = v184;
    goto LABEL_83;
  }
  *(_QWORD *)v166 = 0;
  v109 = v191;
  v110 = v184;
  if ( (__int64)v171 > 0 )
    sub_140001660(*((_QWORD *)&v171 + 1), v171, 1);
  *(_QWORD *)&v171 = 0x8000000000000000uLL;
  sub_1419234B0(a1, &v164, 256);
  v203 = v110;
  v202 = v109;
  v201 = 0;
  sub_14002B980(v159, v200);
  v216 = v110;
  v215 = v109;
  v214 = 0;
  sub_14002B980(Address, v183);
  if ( (_QWORD)v153 )
    sub_140001660(*((_QWORD *)&v153 + 1), v153, 1);
  v111 = (_QWORD *)v192;
  if ( (_QWORD)v155 )
    sub_140001660(*((_QWORD *)&v155 + 1), v155, 1);
  sub_1401A3440(&v157);
  if ( v161 )
    sub_140001660(v162, v161, 1);
  v112 = *v181;
  if ( *v181 != -1 && v112 )
    sub_140001660(v111[13], v112, 1);
  v113 = v111[3];
  if ( v113 )
    sub_140001660(v111[4], v113, 1);
  if ( *v145 )
    sub_140001660(v111[7], *v145, 1);
  v114 = v111[9];
  if ( v114 )
    sub_140001660(v111[10], v114, 1);
  sub_140B6AA50(v111 + 15);
  return a1;
}
