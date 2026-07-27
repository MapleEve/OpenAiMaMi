// win 1.2.3 delta | aimami_relay_cleanup_3 @ 0x1408559e0 | changelog ②关闭路由修复
// [FULL IDA decompiler 28264B]
// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1408559E0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _QWORD *v9; // r15
  __int64 v10; // rdx
  char v11; // r14
  char v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // rbx
  int v15; // r15d
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 *v19; // rcx
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
  __int64 v30; // rcx
  char v31; // di
  __int128 v32; // xmm2
  __int64 *v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v47; // rdx
  signed __int8 v48; // al
  void *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  char v52; // cl
  unsigned int v53; // eax
  __int128 v54; // rax
  __int64 v55; // rcx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int64 v59; // rdx
  __int64 v60; // rax
  char v61; // dl
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  unsigned __int64 v65; // r13
  __int64 v66; // rdx
  __int64 v67; // r12
  unsigned __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // r15
  __int64 v73; // rdi
  __int64 *v74; // r15
  __int64 v75; // rcx
  __int64 v76; // rax
  bool v77; // zf
  __int64 v78; // r8
  char v79; // dl
  _BYTE *v80; // rdi
  __int64 v81; // r12
  __int64 *v82; // rbx
  __int64 v83; // r15
  __int64 v84; // rax
  __int64 v85; // rdi
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  PVOID v89; // rcx
  char v90; // al
  __int64 v91; // rbx
  _QWORD *v92; // r14
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // r12
  __int128 v97; // xmm0
  __int128 v98; // xmm2
  __int128 v99; // xmm3
  __int128 v100; // xmm1
  __int64 v101; // r12
  int v102; // edx
  __int64 v103; // rax
  __int64 v104; // r15
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rax
  char v108; // bl
  char v109; // di
  _QWORD *v110; // rbx
  __int64 *v111; // rdi
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm2
  void *v118; // rdi
  void *v119; // rdi
  char v120; // cl
  _BYTE v121[88]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v122; // [rsp+A0h] [rbp+20h]
  _QWORD v123[29]; // [rsp+130h] [rbp+B0h] BYREF
  _BYTE v124[232]; // [rsp+218h] [rbp+198h] BYREF
  __int128 v125; // [rsp+300h] [rbp+280h] BYREF
  __int128 v126; // [rsp+310h] [rbp+290h]
  __int128 v127; // [rsp+320h] [rbp+2A0h]
  char v128; // [rsp+424h] [rbp+3A4h]
  __int128 v129; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 v130; // [rsp+440h] [rbp+3C0h]
  __int128 v131; // [rsp+448h] [rbp+3C8h] BYREF
  __int64 v132; // [rsp+458h] [rbp+3D8h]
  __int128 v133; // [rsp+460h] [rbp+3E0h] BYREF
  __int128 *v134; // [rsp+470h] [rbp+3F0h]
  __int128 v135; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v136; // [rsp+488h] [rbp+408h]
  unsigned __int64 v137; // [rsp+490h] [rbp+410h]
  __m256i v138; // [rsp+498h] [rbp+418h] BYREF
  __int128 v139; // [rsp+4B8h] [rbp+438h]
  __int128 v140; // [rsp+4C8h] [rbp+448h]
  __int128 v141; // [rsp+4D8h] [rbp+458h]
  __int128 v142; // [rsp+4E8h] [rbp+468h]
  __int128 v143; // [rsp+4F8h] [rbp+478h] BYREF
  __int64 v144; // [rsp+508h] [rbp+488h]
  __int128 v145; // [rsp+510h] [rbp+490h] BYREF
  __int64 v146; // [rsp+520h] [rbp+4A0h]
  __int128 v147; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v148; // [rsp+540h] [rbp+4C0h]
  __int128 v149; // [rsp+550h] [rbp+4D0h] BYREF
  __int64 v150; // [rsp+560h] [rbp+4E0h]
  _BYTE v151[288]; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v152; // [rsp+698h] [rbp+618h] BYREF
  __int64 v153; // [rsp+6A0h] [rbp+620h]
  __int64 v154; // [rsp+6A8h] [rbp+628h]
  __int64 v155; // [rsp+6B0h] [rbp+630h]
  __int64 v156; // [rsp+6B8h] [rbp+638h]
  __int128 v157; // [rsp+6C0h] [rbp+640h] BYREF
  _BYTE v158[48]; // [rsp+6D0h] [rbp+650h]
  _BYTE v159[24]; // [rsp+700h] [rbp+680h] BYREF
  _BYTE v160[24]; // [rsp+718h] [rbp+698h] BYREF
  _BYTE v161[24]; // [rsp+730h] [rbp+6B0h] BYREF
  _BYTE v162[24]; // [rsp+748h] [rbp+6C8h]
  __int64 v163; // [rsp+760h] [rbp+6E0h]
  __int64 v164; // [rsp+768h] [rbp+6E8h]
  __int64 v165; // [rsp+780h] [rbp+700h]
  __int128 v166; // [rsp+788h] [rbp+708h]
  unsigned __int64 v167; // [rsp+798h] [rbp+718h]
  int v168; // [rsp+7A0h] [rbp+720h]
  int v169; // [rsp+7A4h] [rbp+724h]
  __int64 v170; // [rsp+7A8h] [rbp+728h]
  __int128 v171; // [rsp+7B0h] [rbp+730h] BYREF
  __int128 *v172; // [rsp+7C0h] [rbp+740h]
  __int64 (__fastcall *v173)(); // [rsp+7C8h] [rbp+748h]
  __int128 v174; // [rsp+7D0h] [rbp+750h] BYREF
  __int128 *v175; // [rsp+7E0h] [rbp+760h]
  __int64 v176; // [rsp+7F0h] [rbp+770h]
  PVOID Address; // [rsp+7F8h] [rbp+778h]
  __int64 v178; // [rsp+800h] [rbp+780h]
  __int64 v179; // [rsp+808h] [rbp+788h]
  _QWORD *v180; // [rsp+810h] [rbp+790h]
  __int64 *v181; // [rsp+818h] [rbp+798h]
  __int64 v182; // [rsp+820h] [rbp+7A0h]
  unsigned __int64 v183; // [rsp+828h] [rbp+7A8h]
  unsigned int v184; // [rsp+830h] [rbp+7B0h]
  char v185; // [rsp+836h] [rbp+7B6h]
  char v186; // [rsp+837h] [rbp+7B7h]
  char v187; // [rsp+838h] [rbp+7B8h]
  char v188; // [rsp+839h] [rbp+7B9h]
  char v189; // [rsp+83Ah] [rbp+7BAh]
  char v190; // [rsp+83Bh] [rbp+7BBh]
  int v191; // [rsp+83Ch] [rbp+7BCh]
  __int64 *v192; // [rsp+840h] [rbp+7C0h]
  char v193; // [rsp+848h] [rbp+7C8h]
  char v194; // [rsp+849h] [rbp+7C9h]
  char v195; // [rsp+84Ah] [rbp+7CAh]
  char v196; // [rsp+84Bh] [rbp+7CBh]
  char v197; // [rsp+84Ch] [rbp+7CCh]
  char v198; // [rsp+84Dh] [rbp+7CDh]
  unsigned __int8 v199; // [rsp+84Eh] [rbp+7CEh]
  char v200; // [rsp+84Fh] [rbp+7CFh]
  char v201; // [rsp+850h] [rbp+7D0h]
  char v202; // [rsp+851h] [rbp+7D1h]
  char v203; // [rsp+852h] [rbp+7D2h]
  char v204; // [rsp+853h] [rbp+7D3h]
  char v205; // [rsp+854h] [rbp+7D4h]
  char v206; // [rsp+855h] [rbp+7D5h]
  char v207; // [rsp+856h] [rbp+7D6h]
  char v208; // [rsp+857h] [rbp+7D7h]
  char v209; // [rsp+858h] [rbp+7D8h]
  char v210; // [rsp+859h] [rbp+7D9h]
  char v211; // [rsp+85Ah] [rbp+7DAh]
  char v212; // [rsp+85Bh] [rbp+7DBh]
  char v213; // [rsp+85Ch] [rbp+7DCh]
  char v214; // [rsp+85Dh] [rbp+7DDh]
  char v215; // [rsp+85Eh] [rbp+7DEh]
  char v216; // [rsp+85Fh] [rbp+7DFh]
  __int64 v217; // [rsp+860h] [rbp+7E0h]

  v217 = -2;
  v192 = a3;
  v5 = a2[2];
  if ( *(_QWORD *)(v5 + 16) != -1 )
  {
    v205 = 1;
    v204 = 1;
    v203 = 1;
    sub_14149C500(&v151[8], v5 + 16);
    *(_QWORD *)v151 = 9;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v151[80];
    v6 = *(_OWORD *)&v151[16];
    v7 = *(_OWORD *)&v151[32];
    v8 = *(_OWORD *)&v151[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v151[64];
    *(_OWORD *)(a1 + 56) = v8;
    *(_OWORD *)(a1 + 40) = v7;
    *(_OWORD *)(a1 + 24) = v6;
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v151;
    *(_QWORD *)a1 = -1;
    v9 = v192;
    v10 = v192[12];
    v11 = 1;
    if ( v10 != -1 && v10 )
      sub_140001660(v192[13], v10, 1);
    v12 = 1;
LABEL_26:
    if ( *v9 )
      sub_140001660(v9[1], *v9, 1);
LABEL_28:
    v36 = v9[3];
    if ( v36 )
      sub_140001660(v9[4], v36, 1);
    v37 = v9[6];
    if ( v37 )
      sub_140001660(v9[7], v37, 1);
    v38 = v9[9];
    if ( v38 )
      sub_140001660(v9[10], v38, 1);
    v39 = v9[15];
    if ( v39 != -1 )
    {
      v40 = v9[17];
      if ( v40 )
      {
        v41 = (_QWORD *)(v9[16] + 72LL);
        do
        {
          v42 = *(v41 - 7);
          if ( v42 )
            sub_140001660(*(v41 - 6), v42, 1);
          v43 = *(v41 - 1);
          if ( v43 != -1 && v43 )
            sub_140001660(*v41, v43, 1);
          v44 = *(v41 - 4);
          if ( v44 )
            sub_140001660(*(v41 - 3), v44, 1);
          v41 += 12;
          --v40;
        }
        while ( v40 );
        v39 = v9[15];
      }
      if ( v39 )
        sub_140001660(v9[16], 96 * v39, 8);
    }
    if ( v11 )
    {
      v45 = v9[18];
      if ( v45 != -1 && v12 && v45 )
        sub_140001660(v9[19], v45, 1);
    }
    return a1;
  }
  v205 = 1;
  v204 = 1;
  v203 = 1;
  sub_140FFA6E0(v151);
  v13 = *(_DWORD *)v151;
  v14 = (unsigned int)((*(int *)v151 >> 13) - 1);
  v15 = 0;
  if ( *(int *)v151 >> 13 <= 0 )
  {
    v16 = (1 - (*(int *)v151 >> 13)) / 0x190u + 1;
    v14 = 400 * v16 + (unsigned int)v14;
    v15 = -146097 * v16;
  }
  v17 = *(unsigned int *)&v151[4];
  v18 = *(unsigned int *)&v151[8];
  v205 = 1;
  v204 = 1;
  v203 = 1;
  v180 = v192 + 6;
  sub_14149C500(&v152, v192 + 6);
  v19 = v192;
  v181 = v192 + 12;
  if ( v192[12] != -1 )
  {
    v20 = v192[13];
    v21 = v192[14];
    v198 = 1;
    v197 = 1;
    v196 = 1;
    sub_140AE73A0(v151, v20, v21);
    if ( *(_QWORD *)v151 != -1 )
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v151[16];
      v22 = *(_OWORD *)v151;
      goto LABEL_20;
    }
    v19 = v192;
  }
  LODWORD(v23) = 0;
  if ( v19[15] != -1 )
    v23 = v19[17];
  LODWORD(v24) = 8;
  if ( v19[15] != -1 )
    v24 = v19[16];
  v25 = v19[10];
  v26 = v19[11];
  v27 = *((_BYTE *)v19 + 169);
  v198 = 1;
  v197 = 1;
  v196 = 1;
  sub_140AE6160((unsigned int)v151, v24, v23, v25, v26, v27);
  if ( *(_QWORD *)v151 == -1 )
  {
    *(_QWORD *)&v126 = *(_QWORD *)&v151[24];
    v22 = *(_OWORD *)&v151[8];
    v157 = *(_OWORD *)&v151[8];
    *(_OWORD *)&v158[16] = v127;
    v32 = v126;
    *(_OWORD *)v158 = v126;
    *(_OWORD *)(a1 + 48) = v127;
    *(_OWORD *)(a1 + 32) = v32;
LABEL_20:
    *(_OWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)a1 = -1;
    v11 = 1;
    v12 = 1;
    v31 = 1;
    v9 = v192;
    v33 = v181;
    v34 = v152;
    if ( v152 )
LABEL_21:
      sub_140001660(v153, v34, 1);
LABEL_22:
    v35 = *v33;
    if ( *v33 != -1 && v35 )
      sub_140001660(v9[13], v35, 1);
    if ( !v31 )
      goto LABEL_28;
    goto LABEL_26;
  }
  v127 = *(_OWORD *)&v151[32];
  v126 = *(_OWORD *)&v151[16];
  LOBYTE(v191) = v151[48];
  *(_OWORD *)v158 = *(_OWORD *)&v151[16];
  v157 = *(_OWORD *)v151;
  *(_OWORD *)&v158[16] = *(_OWORD *)&v151[32];
  v150 = *(_QWORD *)&v151[16];
  v149 = *(_OWORD *)v151;
  v148 = *(_QWORD *)&v151[40];
  v147 = *(_OWORD *)&v158[8];
  v28 = v192[4];
  v29 = v192[5];
  v190 = 1;
  v189 = 1;
  v188 = 1;
  sub_140A49CF0(v151, v28, v29);
  v30 = *(_QWORD *)&v151[24];
  v125 = *(_OWORD *)&v151[8];
  *(_QWORD *)&v126 = *(_QWORD *)&v151[24];
  if ( *(_DWORD *)v151 == 1 )
  {
    *(_QWORD *)(a1 + 32) = v126;
    *(_OWORD *)(a1 + 16) = v125;
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)a1 = -1;
    LOBYTE(v14) = 1;
    v12 = 1;
    v31 = 1;
    goto LABEL_123;
  }
  v146 = v126;
  v145 = v125;
  v47 = a2[4];
  Address = (PVOID)(v47 + 16);
  LOBYTE(v30) = 1;
  v48 = _InterlockedCompareExchange8((volatile signed __int8 *)(v47 + 16), 1, 0);
  v170 = v47;
  if ( v48 )
  {
    v216 = 1;
    v215 = 1;
    v214 = 1;
    sub_1416C15B0((volatile void *)(v47 + 16));
    v47 = v170;
  }
  if ( 2 * *off_141EC90B8 )
  {
    v216 = 1;
    v215 = 1;
    v214 = 1;
    v53 = sub_1416C2250(v30, v47);
    LOBYTE(v53) = v53 ^ 1;
    v184 = v53;
    if ( *(_BYTE *)(v170 + 17) )
      goto LABEL_58;
  }
  else
  {
    v184 = 0;
    if ( *(_BYTE *)(v47 + 17) )
    {
LABEL_58:
      nullsub_1(v30);
      v49 = (void *)sub_140001650(40, 1);
      if ( !v49 )
        sub_1416C2D4B(1, 40);
      qmemcpy(v49, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v184 )
      {
        v51 = 2 * *off_141EC90B8;
        if ( v51 )
        {
          v216 = 1;
          v215 = 1;
          v214 = 1;
          v119 = v49;
          v120 = sub_1416C2250(v51, v50);
          v49 = v119;
          if ( !v120 )
            *(_BYTE *)(v170 + 17) = 1;
        }
      }
      v52 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v52 == 2 )
      {
        v216 = 1;
        v215 = 1;
        v214 = 1;
        v118 = v49;
        WakeByAddressSingle(Address);
        v49 = v118;
      }
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = 40;
      *(_QWORD *)(a1 + 24) = v49;
      *(_QWORD *)(a1 + 32) = 40;
      *(_QWORD *)a1 = -1;
      LOBYTE(v14) = 1;
      v12 = 1;
      v31 = 1;
LABEL_121:
      if ( (_QWORD)v145 )
        sub_140001660(*((_QWORD *)&v145 + 1), v145, 1);
LABEL_123:
      v9 = v192;
      v33 = v181;
      v191 = v14;
      if ( (_QWORD)v147 )
        sub_140001660(*((_QWORD *)&v147 + 1), v147, 1);
      v91 = v150;
      if ( v150 )
      {
        v92 = (_QWORD *)(*((_QWORD *)&v149 + 1) + 72LL);
        do
        {
          v93 = *(v92 - 7);
          if ( v93 )
            sub_140001660(*(v92 - 6), v93, 1);
          v94 = *(v92 - 1);
          if ( v94 != -1 && v94 )
            sub_140001660(*v92, v94, 1);
          v95 = *(v92 - 4);
          if ( v95 )
            sub_140001660(*(v92 - 3), v95, 1);
          v92 += 12;
          --v91;
        }
        while ( v91 );
      }
      if ( (_QWORD)v149 )
        sub_140001660(*((_QWORD *)&v149 + 1), 96 * v149, 8);
      v11 = v191;
      v34 = v152;
      if ( v152 )
        goto LABEL_21;
      goto LABEL_22;
    }
  }
  v202 = 1;
  v201 = 1;
  v200 = 1;
  sub_1403B7E80(v151, a2 + 5, aUpsertingARela, 26);
  v54 = *(_OWORD *)v151;
  v55 = v151[16];
  if ( *(_QWORD *)v151 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v151[80];
    v56 = *(_OWORD *)&v151[17];
    v57 = *(_OWORD *)&v151[33];
    v58 = *(_OWORD *)&v151[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v151[65];
    *(_OWORD *)(a1 + 57) = v58;
    *(_OWORD *)(a1 + 41) = v57;
    *(_OWORD *)(a1 + 25) = v56;
    *(_OWORD *)(a1 + 8) = v54;
    *(_BYTE *)(a1 + 24) = v55;
    *(_QWORD *)a1 = -1;
    LOBYTE(v14) = 1;
    v12 = 1;
    v31 = 1;
    goto LABEL_117;
  }
  v155 = *(_QWORD *)&v151[8];
  v199 = v151[16];
  v59 = a2[1] + 16LL;
  v208 = 1;
  v207 = 1;
  v206 = 1;
  sub_140B93B50(v151, v59);
  v208 = 1;
  v207 = 1;
  v206 = 1;
  v60 = sub_14083F5B0(v151, &off_141797C78);
  LOBYTE(v182) = v61 & 1;
  v183 = v60;
  sub_140892360(&v125, v60 + 8);
  v213 = 1;
  v212 = 1;
  v211 = 1;
  sub_14000E270(v183, (unsigned __int8)v182);
  if ( v128 )
  {
    v213 = 1;
    v212 = 1;
    v211 = 1;
    sub_1408732C0(v151);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v151[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v151[64];
    v62 = *(_OWORD *)v151;
    v63 = *(_OWORD *)&v151[16];
    v64 = *(_OWORD *)&v151[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v151[48];
    *(_OWORD *)(a1 + 40) = v64;
    *(_OWORD *)(a1 + 24) = v63;
    *(_OWORD *)(a1 + 8) = v62;
    *(_QWORD *)a1 = -1;
    LOBYTE(v14) = 1;
    v12 = 1;
    v31 = 1;
LABEL_116:
    v208 = v14;
    v207 = v12;
    v206 = v31;
    sub_140018740(&v125);
    v202 = v14;
    v201 = v12;
    v200 = v31;
    sub_14000E270(v155, v199);
LABEL_117:
    if ( !(_BYTE)v184 )
    {
      if ( 2 * *off_141EC90B8 )
      {
        v216 = v14;
        v215 = v12;
        v214 = v31;
        if ( !(unsigned __int8)sub_1416C2250(v55, *((_QWORD *)&v54 + 1)) )
          *(_BYTE *)(v170 + 17) = 1;
      }
    }
    v89 = Address;
    v90 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v90 == 2 )
    {
      v216 = v14;
      v215 = v12;
      v214 = v31;
      WakeByAddressSingle(v89);
    }
    goto LABEL_121;
  }
  v65 = 1000
      * (v17
       + 86400LL
       * (int)((((int)v14 / 100) >> 2) + ((1461 * (int)v14) >> 2) + v15 + ((v13 >> 4) & 0x1FF) - (int)v14 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v18) >> 50);
  if ( *v181 != -1 )
  {
    v213 = 1;
    v212 = 1;
    v211 = 1;
    sub_14149C500(v151, v181);
    v66 = *(_QWORD *)&v151[8];
    v183 = *(_QWORD *)v151;
    v67 = *((_QWORD *)&v125 + 1);
    v68 = v126;
    *(_QWORD *)v151 = *((_QWORD *)&v125 + 1);
    *(_QWORD *)&v151[8] = *((_QWORD *)&v125 + 1) + 232 * v126;
    v176 = v66;
    v69 = *(_QWORD *)&v151[16];
    v70 = sub_1407E2220(v151);
    v72 = v71;
    v156 = v70;
    if ( ((v71 < v68) & (unsigned __int8)v70) != 0 )
    {
      v187 = 1;
      v186 = 1;
      v185 = 1;
      sub_1404DFAF0(v123, 232 * v71 + v67);
      if ( v123[0] != -1 )
      {
        sub_141684120(&v157, v123, 232);
LABEL_82:
        v195 = 1;
        v194 = 1;
        v193 = 1;
        sub_14149C500(&v143, &v159[8]);
        v137 = v72;
        if ( (_QWORD)v157 )
          sub_140001660(*((_QWORD *)&v157 + 1), v157, 1);
        *(_QWORD *)&v157 = v183;
        *((_QWORD *)&v157 + 1) = v176;
        *(_QWORD *)v158 = v69;
        *(_QWORD *)&v151[16] = v192[2];
        *(_OWORD *)v151 = *(_OWORD *)v192;
        if ( *(_QWORD *)&v158[8] )
          sub_140001660(*(_QWORD *)&v158[16], *(_QWORD *)&v158[8], 1);
        *(_QWORD *)&v158[24] = *(_QWORD *)&v151[16];
        *(_OWORD *)&v158[8] = *(_OWORD *)v151;
        v210 = 1;
        v209 = 1;
        sub_14149C500(v151, &v145);
        if ( *(_QWORD *)&v158[32] )
          sub_140001660(*(_QWORD *)&v158[40], *(_QWORD *)&v158[32], 1);
        *(_QWORD *)v159 = *(_QWORD *)&v151[16];
        *(_OWORD *)&v158[32] = *(_OWORD *)v151;
        v210 = 1;
        v209 = 1;
        sub_14149C500(v151, &v147);
        v80 = &v160[8];
        if ( *(_QWORD *)&v160[8] )
          sub_140001660(*(_QWORD *)&v160[16], *(_QWORD *)&v160[8], 1);
        *(_QWORD *)v161 = *(_QWORD *)&v151[16];
        *(_OWORD *)&v160[8] = *(_OWORD *)v151;
        BYTE2(v169) = v191;
        HIBYTE(v169) = *((_BYTE *)v192 + 170);
        v210 = 1;
        v209 = 1;
        sub_1403318E0(v151, &v149);
        v81 = v156;
        sub_14000A300(&v161[8]);
        *(_QWORD *)v162 = *(_QWORD *)&v151[16];
        *(_OWORD *)&v161[8] = *(_OWORD *)v151;
        v82 = v192;
        if ( v192[18] == -1 )
        {
          LOBYTE(v80) = 1;
        }
        else
        {
          *(_QWORD *)&v151[16] = v192[20];
          *(_OWORD *)v151 = *((_OWORD *)v192 + 9);
          if ( *(_QWORD *)&v162[8] )
            sub_140001660(*(_QWORD *)&v162[16], *(_QWORD *)&v162[8], 1);
          v163 = *(_QWORD *)&v151[16];
          *(_OWORD *)&v162[8] = *(_OWORD *)v151;
          LODWORD(v80) = 0;
        }
        BYTE1(v169) = *((_BYTE *)v82 + 168);
        v167 = v65;
        if ( !*((_QWORD *)&v166 + 1) )
          *((_QWORD *)&v166 + 1) = v65;
        v14 = v81;
        if ( v154 )
        {
          v210 = 1;
          v209 = (char)v80;
          sub_14149C500(v151, &v152);
          if ( *(_QWORD *)&v159[8] )
            sub_140001660(*(_QWORD *)&v159[16], *(_QWORD *)&v159[8], 1);
          *(_QWORD *)v160 = *(_QWORD *)&v151[16];
          *(_OWORD *)&v159[8] = *(_OWORD *)v151;
          LOBYTE(v81) = 1;
        }
        else
        {
          if ( *(_QWORD *)&v159[8] )
            sub_140001660(*(_QWORD *)&v159[16], *(_QWORD *)&v159[8], 1);
          *(_QWORD *)v160 = v144;
          *(_OWORD *)&v159[8] = v143;
          LODWORD(v81) = 0;
        }
        LODWORD(v182) = (_DWORD)v80;
        if ( (v14 & 1) != 0 )
        {
          v210 = v81;
          v209 = (char)v80;
          sub_1404DFAF0(v151, &v157);
          if ( v137 >= (unsigned __int64)v126 )
          {
            LODWORD(v181) = v81;
            sub_1416C30E3(v137, v126, &off_141797CA0);
          }
          v83 = *((_QWORD *)&v125 + 1) + 232 * v137;
          sub_140018960(v83);
          sub_141684120(v83, v151, 232);
        }
        else
        {
          v210 = v81;
          v209 = (char)v80;
          sub_1404DFAF0(v151, &v157);
          v210 = v81;
          v209 = (char)v80;
          sub_1408436C0(&v125, v151);
        }
        v84 = sub_141684120(v124, &v157, 232);
        if ( (_BYTE)v81 && (_QWORD)v143 )
          v84 = sub_140001660(*((_QWORD *)&v143 + 1), v143, 1);
        LOBYTE(v84) = 1;
        v191 = v84;
        goto LABEL_112;
      }
    }
    else
    {
      v123[0] = -1;
    }
    *(_QWORD *)&v157 = 0;
    *((_QWORD *)&v157 + 1) = 1;
    *(_OWORD *)v158 = 0;
    *(_QWORD *)&v158[16] = 1;
    *(_OWORD *)&v158[24] = 0;
    *(_QWORD *)&v158[40] = 1;
    *(_OWORD *)v159 = 0;
    *(_QWORD *)&v159[16] = 1;
    *(_OWORD *)v160 = 0;
    *(_QWORD *)&v160[16] = 1;
    *(_OWORD *)v161 = 0;
    *(_QWORD *)&v161[16] = 8;
    *(_OWORD *)v162 = 0;
    *(_QWORD *)&v162[16] = 1;
    v163 = 0;
    v168 = 0;
    v165 = -1;
    v166 = 0;
    v167 = 0;
    v164 = -1;
    v169 = 0;
    goto LABEL_82;
  }
  v213 = 1;
  v212 = 1;
  v211 = 1;
  sub_140873360(v151);
  *(_QWORD *)&v157 = v151;
  *((_QWORD *)&v157 + 1) = sub_1400015F0;
  sub_14149C0F0(&v135, &unk_141797C90, &v157);
  if ( *(_QWORD *)v151 )
    sub_140001660(*(_QWORD *)&v151[8], *(_QWORD *)v151, 1);
  v156 = *((_QWORD *)&v135 + 1);
  v176 = v135;
  v182 = *v192;
  v183 = v192[1];
  v73 = v192[2];
  sub_14149C500(&v174, &v145);
  sub_14149C500(&v171, &v152);
  sub_14149C500(&v138, &v147);
  v74 = v192;
  LOBYTE(v14) = *((_BYTE *)v192 + 170);
  sub_1403318E0(v151, &v149);
  v75 = v74[18];
  v76 = 0;
  v77 = v75 == -1;
  if ( v75 == -1 )
    v75 = 0;
  v78 = 1;
  if ( !v77 )
  {
    v78 = v74[19];
    v76 = v74[20];
  }
  v79 = *((_BYTE *)v74 + 168);
  *(_QWORD *)v158 = v136;
  v157 = v135;
  *(_QWORD *)&v158[8] = v182;
  *(_QWORD *)&v158[16] = v183;
  *(_QWORD *)&v158[24] = v73;
  *(_OWORD *)&v158[32] = v174;
  *(_QWORD *)v159 = v175;
  *(_OWORD *)&v159[8] = v171;
  *(_QWORD *)v160 = v172;
  LOBYTE(v169) = 0;
  *(_OWORD *)&v160[8] = *(_OWORD *)v138.m256i_i8;
  *(_QWORD *)v161 = v138.m256i_i64[2];
  BYTE2(v169) = v191;
  HIBYTE(v169) = v14;
  *(_QWORD *)v162 = *(_QWORD *)&v151[16];
  *(_OWORD *)&v161[8] = *(_OWORD *)v151;
  *(_QWORD *)&v162[8] = v75;
  *(_QWORD *)&v162[16] = v78;
  v163 = v76;
  v168 = 0;
  v165 = -1;
  *(_QWORD *)&v166 = 0;
  *((_QWORD *)&v166 + 1) = v65;
  v167 = v65;
  v164 = -1;
  BYTE1(v169) = v79;
  sub_1404DFAF0(v151, &v157);
  sub_1408436C0(&v125, v151);
  sub_141684120(v124, &v157, 232);
  v191 = 0;
  LODWORD(v182) = 0;
LABEL_112:
  sub_1404DFAF0(&v157, v124);
  v85 = v154;
  sub_140846F90(v151, a2);
  if ( *(_DWORD *)v151 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v151[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v151[64];
    v86 = *(_OWORD *)v151;
    v87 = *(_OWORD *)&v151[16];
    v88 = *(_OWORD *)&v151[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v151[48];
    *(_OWORD *)(a1 + 40) = v88;
    *(_OWORD *)(a1 + 24) = v87;
    *(_OWORD *)(a1 + 8) = v86;
LABEL_114:
    *(_QWORD *)a1 = -1;
    v12 = v182;
    LODWORD(v14) = v191;
LABEL_115:
    sub_140018960(&v157);
    sub_140018960(v124);
    v31 = 0;
    goto LABEL_116;
  }
  if ( v85 )
  {
    v96 = *a2 + 16LL;
    sub_1404D9190(&v138, v96, *((_QWORD *)&v157 + 1), *(_QWORD *)v158);
    if ( v138.m256i_i32[0] == 1 )
    {
      v172 = (__int128 *)v138.m256i_i64[3];
      v171 = *(_OWORD *)&v138.m256i_u64[1];
      sub_140832300(v151, &v171);
      v97 = *(_OWORD *)&v151[16];
      v98 = *(_OWORD *)&v151[48];
      v99 = *(_OWORD *)&v151[64];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v151[32];
      *(_OWORD *)(a1 + 56) = v98;
      *(_OWORD *)(a1 + 72) = v99;
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v151[80];
      v100 = *(_OWORD *)v151;
      *(_OWORD *)(a1 + 24) = v97;
      *(_OWORD *)(a1 + 8) = v100;
      goto LABEL_114;
    }
    v14 = v138.m256i_i64[3];
    v65 = v138.m256i_u64[2];
    v178 = v138.m256i_i64[2];
    v179 = v138.m256i_i64[1];
    v102 = v96;
    v101 = v138.m256i_i64[1];
    sub_1404D9720((unsigned int)&v174, v102, DWORD2(v157), *(_DWORD *)v158, v153, v85);
    if ( (_QWORD)v174 != -1 )
    {
      v183 = v65;
      v180 = (_QWORD *)v101;
      v172 = v175;
      v171 = v174;
      if ( *(_QWORD *)off_141EC8D80 )
      {
        v138.m256i_i64[0] = (__int64)&v157;
        v138.m256i_i64[1] = (__int64)sub_1400015F0;
        v138.m256i_i64[2] = (__int64)&v171;
        v138.m256i_i64[3] = (__int64)sub_1400015F0;
        *(_QWORD *)v151 = aCodexmateLibCo_5;
        *(_QWORD *)&v151[8] = 35;
        *(_QWORD *)&v151[16] = aCodexmateLibCo_5;
        *(_QWORD *)&v151[24] = 35;
        *(_QWORD *)&v151[32] = &off_141797D30;
        sub_140985BA0(&unk_141797CFF, &v138, 1, v151);
      }
      *(_QWORD *)v151 = &v171;
      *(_QWORD *)&v151[8] = sub_1400015F0;
      sub_14149C0F0(&v131, &unk_141797D48, v151);
      *(_QWORD *)(a1 + 32) = v132;
      *(_OWORD *)(a1 + 16) = v131;
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)a1 = -1;
      if ( (_QWORD)v171 )
        sub_140001660(*((_QWORD *)&v171 + 1), v171, 1);
      v12 = v182;
      LODWORD(v14) = v191;
      v101 = (__int64)v180;
      goto LABEL_183;
    }
    LOBYTE(v169) = 1;
  }
  else
  {
    v101 = -1;
  }
  v138.m256i_i64[0] = *((_QWORD *)&v125 + 1);
  v138.m256i_i64[1] = *((_QWORD *)&v125 + 1) + 232 * v126;
  v103 = sub_1406186C0(&v138, *((_QWORD *)&v157 + 1), *(_QWORD *)v158);
  v183 = v65;
  if ( v103 )
  {
    v104 = v103;
    v179 = v101;
    v178 = v65;
    sub_14149C500(v151, &v159[8]);
    v105 = *(_QWORD *)(v104 + 72);
    if ( v105 )
      sub_140001660(*(_QWORD *)(v104 + 80), v105, 1);
    *(_QWORD *)(v104 + 88) = *(_QWORD *)&v151[16];
    *(_OWORD *)(v104 + 72) = *(_OWORD *)v151;
    *(_BYTE *)(v104 + 228) = v169;
    v65 = v183;
  }
  v179 = v101;
  v178 = v65;
  sub_140892360(v151, &v125);
  v179 = v101;
  v178 = v65;
  sub_1408582D0(&v138, a2, v151);
  if ( v138.m256i_i32[0] != -1 )
  {
    *(_OWORD *)&v151[80] = v142;
    *(_OWORD *)&v151[64] = v141;
    *(_OWORD *)&v151[48] = v140;
    *(_OWORD *)&v151[32] = v139;
    *(__m256i *)v151 = v138;
    if ( v85 )
    {
      v106 = *a2 + 16LL;
      v107 = 0;
      v180 = (_QWORD *)v101;
      if ( v101 != -1 )
        v107 = v65;
      sub_140872D30((unsigned int)&v133, v106, DWORD2(v157), *(_DWORD *)v158, v107, v14);
      if ( (_QWORD)v133 != -1 )
      {
        v175 = v134;
        v174 = v133;
        *(_QWORD *)&v171 = v151;
        *((_QWORD *)&v171 + 1) = sub_140B036A0;
        v172 = &v174;
        v173 = sub_1400015F0;
        sub_14149C0F0(&v129, &unk_141797CB8, &v171);
        *(_QWORD *)(a1 + 32) = v130;
        *(_OWORD *)(a1 + 16) = v129;
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)a1 = -1;
        if ( (_QWORD)v174 )
          sub_140001660(*((_QWORD *)&v174 + 1), v174, 1);
        v101 = (__int64)v180;
        v179 = (__int64)v180;
        v178 = v183;
        sub_1407DA310(v151);
        goto LABEL_182;
      }
      v101 = (__int64)v180;
    }
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v151[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v151[64];
    v115 = *(_OWORD *)v151;
    v116 = *(_OWORD *)&v151[16];
    v117 = *(_OWORD *)&v151[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v151[48];
    *(_OWORD *)(a1 + 40) = v117;
    *(_OWORD *)(a1 + 24) = v116;
    *(_OWORD *)(a1 + 8) = v115;
    *(_QWORD *)a1 = -1;
LABEL_182:
    v12 = v182;
    LODWORD(v14) = v191;
LABEL_183:
    if ( (unsigned __int64)(v101 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v183, v101, 1);
    goto LABEL_115;
  }
  v179 = v101;
  v178 = v65;
  sub_1404DFAF0(v121, &v157);
  v122 = 0;
  sub_141684120(a1, v121, 232);
  if ( (unsigned __int64)(v101 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v65, v101, 1);
  sub_140018960(&v157);
  sub_140018960(v124);
  v108 = v191;
  v208 = v191;
  v109 = v182;
  v207 = v182;
  v206 = 0;
  sub_140018740(&v125);
  v202 = v108;
  v201 = v109;
  v200 = 0;
  sub_14000E270(v155, v199);
  v216 = v108;
  v215 = v109;
  v214 = 0;
  sub_14000E270(Address, v184);
  if ( (_QWORD)v145 )
    sub_140001660(*((_QWORD *)&v145 + 1), v145, 1);
  v110 = v192;
  v111 = v181;
  if ( (_QWORD)v147 )
    sub_140001660(*((_QWORD *)&v147 + 1), v147, 1);
  sub_14000A300(&v149);
  if ( v152 )
    sub_140001660(v153, v152, 1);
  v112 = *v111;
  if ( *v111 != -1 && v112 )
    sub_140001660(v110[13], v112, 1);
  v113 = v110[3];
  if ( v113 )
    sub_140001660(v110[4], v113, 1);
  if ( *v180 )
    sub_140001660(v110[7], *v180, 1);
  v114 = v110[9];
  if ( v114 )
    sub_140001660(v110[10], v114, 1);
  sub_140007DD0(v110 + 15);
  return a1;
}
