// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d964e0 | name sub_140D964E0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D964E0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _QWORD *v9; // r15
  __int64 v10; // rdx
  char v11; // r13
  char v12; // r12
  unsigned int v13; // r12d
  int v14; // ebx
  int v15; // r15d
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
  char v30; // di
  __int128 v31; // xmm2
  _QWORD *v32; // rcx
  __int64 v33; // r8
  signed __int8 v34; // al
  void *v35; // rax
  __int64 v36; // rcx
  char v37; // cl
  unsigned int v38; // eax
  __int128 v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int64 v44; // rdx
  __int64 v45; // rax
  char v46; // dl
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  unsigned __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // r12
  unsigned __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r15
  __int64 v58; // rdi
  __int64 v59; // r15
  char v60; // bl
  __int64 v61; // rcx
  __int64 v62; // rax
  bool v63; // zf
  __int64 v64; // r8
  char v65; // dl
  _BYTE *v66; // rdi
  char v67; // r12
  __int64 v68; // rbx
  char v69; // bl
  _BYTE *v70; // r12
  __m128i *v71; // r15
  __int64 v72; // rax
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  PVOID v76; // rcx
  char v77; // al
  __int64 v78; // rbx
  _QWORD *v79; // r14
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 *v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdi
  _QWORD *v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v96; // r15
  __int64 v97; // r12
  __int64 v98; // rdx
  __int32 v99; // edi
  int v100; // ebx
  __int64 v101; // r13
  __int64 v102; // rax
  __m128i *v103; // r15
  __int128 v104; // xmm0
  __int128 v105; // xmm1
  __int128 v106; // xmm2
  char v107; // di
  char v108; // bl
  _QWORD *v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rax
  __int128 v114; // xmm0
  __int128 v115; // xmm1
  __int128 v116; // xmm2
  void *v117; // rdi
  void *v118; // rdi
  char v119; // cl
  __m128i v120[16]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v121; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v122; // [rsp+160h] [rbp+E0h]
  __int64 v123[8]; // [rsp+210h] [rbp+190h] BYREF
  __m128i v124; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v125; // [rsp+260h] [rbp+1E0h]
  __int128 v126; // [rsp+270h] [rbp+1F0h]
  char v127; // [rsp+3BCh] [rbp+33Ch]
  __int128 v128; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v129; // [rsp+3E0h] [rbp+360h]
  __int128 v130; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v131; // [rsp+400h] [rbp+380h]
  _OWORD v132[3]; // [rsp+410h] [rbp+390h] BYREF
  __int64 v133; // [rsp+440h] [rbp+3C0h]
  __int128 v134; // [rsp+448h] [rbp+3C8h] BYREF
  __int64 v135; // [rsp+458h] [rbp+3D8h]
  __int128 v136; // [rsp+460h] [rbp+3E0h] BYREF
  __int128 v137; // [rsp+470h] [rbp+3F0h]
  __int128 v138; // [rsp+480h] [rbp+400h]
  __int128 v139; // [rsp+490h] [rbp+410h]
  __int128 v140; // [rsp+4A0h] [rbp+420h]
  __int128 v141; // [rsp+4B0h] [rbp+430h]
  _QWORD *v142; // [rsp+4C0h] [rbp+440h]
  __int64 v143; // [rsp+4C8h] [rbp+448h]
  __m512i v144; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v145; // [rsp+510h] [rbp+490h]
  __int64 v146; // [rsp+520h] [rbp+4A0h]
  _BYTE v147[384]; // [rsp+530h] [rbp+4B0h] BYREF
  _QWORD *v148; // [rsp+6B0h] [rbp+630h]
  __int128 v149; // [rsp+6B8h] [rbp+638h] BYREF
  __int64 v150; // [rsp+6C8h] [rbp+648h]
  __m128i v151; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v152; // [rsp+6E0h] [rbp+660h]
  __int128 v153; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v154; // [rsp+700h] [rbp+680h]
  __int128 v155; // [rsp+710h] [rbp+690h] BYREF
  __int64 v156; // [rsp+720h] [rbp+6A0h]
  __int64 v157; // [rsp+730h] [rbp+6B0h]
  __int64 v158; // [rsp+738h] [rbp+6B8h] BYREF
  __int64 v159; // [rsp+740h] [rbp+6C0h]
  __int64 v160; // [rsp+748h] [rbp+6C8h]
  __m512i v161; // [rsp+750h] [rbp+6D0h] BYREF
  _BYTE v162[24]; // [rsp+790h] [rbp+710h] BYREF
  _BYTE v163[24]; // [rsp+7A8h] [rbp+728h] BYREF
  _BYTE v164[24]; // [rsp+7C0h] [rbp+740h] BYREF
  _BYTE v165[24]; // [rsp+7D8h] [rbp+758h]
  __int64 v166; // [rsp+7F0h] [rbp+770h]
  __int64 v167; // [rsp+7F8h] [rbp+778h]
  __int128 v168; // [rsp+810h] [rbp+790h]
  __int64 v169; // [rsp+820h] [rbp+7A0h]
  __int64 v170; // [rsp+828h] [rbp+7A8h]
  __int128 v171; // [rsp+830h] [rbp+7B0h]
  unsigned __int64 v172; // [rsp+840h] [rbp+7C0h]
  int v173; // [rsp+848h] [rbp+7C8h]
  int v174; // [rsp+84Ch] [rbp+7CCh]
  __int64 v175; // [rsp+850h] [rbp+7D0h]
  __int64 v176; // [rsp+858h] [rbp+7D8h]
  PVOID Address; // [rsp+860h] [rbp+7E0h]
  __int64 *v178; // [rsp+868h] [rbp+7E8h]
  __int64 v179; // [rsp+870h] [rbp+7F0h]
  unsigned int v180; // [rsp+87Ch] [rbp+7FCh]
  __int64 v181; // [rsp+880h] [rbp+800h]
  char v182; // [rsp+88Eh] [rbp+80Eh]
  char v183; // [rsp+88Fh] [rbp+80Fh]
  char v184; // [rsp+890h] [rbp+810h]
  char v185; // [rsp+891h] [rbp+811h]
  char v186; // [rsp+892h] [rbp+812h]
  char v187; // [rsp+893h] [rbp+813h]
  int v188; // [rsp+894h] [rbp+814h]
  __int64 v189; // [rsp+898h] [rbp+818h]
  char v190; // [rsp+8A4h] [rbp+824h]
  char v191; // [rsp+8A5h] [rbp+825h]
  char v192; // [rsp+8A6h] [rbp+826h]
  char v193; // [rsp+8A7h] [rbp+827h]
  char v194; // [rsp+8A8h] [rbp+828h]
  char v195; // [rsp+8A9h] [rbp+829h]
  char v196; // [rsp+8AAh] [rbp+82Ah]
  unsigned __int8 v197; // [rsp+8ABh] [rbp+82Bh]
  char v198; // [rsp+8ACh] [rbp+82Ch]
  char v199; // [rsp+8ADh] [rbp+82Dh]
  char v200; // [rsp+8AEh] [rbp+82Eh]
  char v201; // [rsp+8AFh] [rbp+82Fh]
  char v202; // [rsp+8B0h] [rbp+830h]
  char v203; // [rsp+8B1h] [rbp+831h]
  char v204; // [rsp+8B2h] [rbp+832h]
  char v205; // [rsp+8B3h] [rbp+833h]
  char v206; // [rsp+8B4h] [rbp+834h]
  char v207; // [rsp+8B5h] [rbp+835h]
  char v208; // [rsp+8B6h] [rbp+836h]
  char v209; // [rsp+8B7h] [rbp+837h]
  char v210; // [rsp+8B8h] [rbp+838h]
  char v211; // [rsp+8B9h] [rbp+839h]
  char v212; // [rsp+8BAh] [rbp+83Ah]
  char v213; // [rsp+8BBh] [rbp+83Bh]
  char v214; // [rsp+8BCh] [rbp+83Ch]
  char v215; // [rsp+8BDh] [rbp+83Dh]
  char v216; // [rsp+8BEh] [rbp+83Eh]
  char v217; // [rsp+8BFh] [rbp+83Fh]
  __int64 v218; // [rsp+8C0h] [rbp+840h]

  v218 = -2;
  v189 = a3;
  v5 = a2[2];
  if ( *(_QWORD *)(v5 + 16) != -1 )
  {
    v203 = 1;
    v202 = 1;
    v201 = 1;
    sub_1416AC440(&v147[8], v5 + 16);
    *(_QWORD *)v147 = 9;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v147[80];
    v6 = *(_OWORD *)&v147[16];
    v7 = *(_OWORD *)&v147[32];
    v8 = *(_OWORD *)&v147[48];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v147[64];
    *(_OWORD *)(a1 + 56) = v8;
    *(_OWORD *)(a1 + 40) = v7;
    *(_OWORD *)(a1 + 24) = v6;
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v147;
    *(_QWORD *)a1 = -1;
    v9 = (_QWORD *)v189;
    v10 = *(_QWORD *)(v189 + 96);
    v11 = 1;
    if ( v10 != -1 && v10 )
      sub_140001660(*(_QWORD *)(v189 + 104), v10, 1);
    v12 = 1;
LABEL_110:
    if ( *v9 )
      sub_140001660(v9[1], *v9, 1);
LABEL_112:
    v85 = v9[3];
    if ( v85 )
      sub_140001660(v9[4], v85, 1);
    v86 = v9[6];
    if ( v86 )
      sub_140001660(v9[7], v86, 1);
    v87 = v9[9];
    if ( v87 )
      sub_140001660(v9[10], v87, 1);
    v88 = v9[15];
    if ( v88 != -1 )
    {
      v89 = v9[17];
      if ( v89 )
      {
        v90 = (_QWORD *)(v9[16] + 72LL);
        do
        {
          v91 = *(v90 - 7);
          if ( v91 )
            sub_140001660(*(v90 - 6), v91, 1);
          v92 = *(v90 - 1);
          if ( v92 != -1 && v92 )
            sub_140001660(*v90, v92, 1);
          v93 = *(v90 - 4);
          if ( v93 )
            sub_140001660(*(v90 - 3), v93, 1);
          v90 += 12;
          --v89;
        }
        while ( v89 );
        v88 = v9[15];
      }
      if ( v88 )
        sub_140001660(v9[16], 96 * v88, 8);
    }
    if ( v11 )
    {
      v94 = v9[18];
      if ( v94 != -1 && v12 && v94 )
        sub_140001660(v9[19], v94, 1);
    }
    return a1;
  }
  v203 = 1;
  v202 = 1;
  v201 = 1;
  sub_141406CE0(v147);
  v13 = *(_DWORD *)v147;
  v14 = (*(int *)v147 >> 13) - 1;
  v15 = 0;
  if ( *(int *)v147 >> 13 <= 0 )
  {
    v16 = (1 - (*(int *)v147 >> 13)) / 0x190u + 1;
    v14 += 400 * v16;
    v15 = -146097 * v16;
  }
  v17 = *(unsigned int *)&v147[4];
  v18 = *(unsigned int *)&v147[8];
  v203 = 1;
  v202 = 1;
  v201 = 1;
  v142 = (_QWORD *)(v189 + 48);
  sub_1416AC440(&v158, v189 + 48);
  v19 = v189;
  v178 = (__int64 *)(v189 + 96);
  if ( *(_QWORD *)(v189 + 96) != -1 )
  {
    v20 = *(_QWORD *)(v189 + 104);
    v21 = *(_QWORD *)(v189 + 112);
    v196 = 1;
    v195 = 1;
    v194 = 1;
    sub_14102D940(v147, v20, v21);
    if ( *(_QWORD *)v147 != -1 )
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v147[16];
      v22 = *(_OWORD *)v147;
LABEL_20:
      *(_OWORD *)(a1 + 16) = v22;
      *(_QWORD *)(a1 + 8) = 9;
      *(_QWORD *)a1 = -1;
      v11 = 1;
      v12 = 1;
      v30 = 1;
      v9 = (_QWORD *)v189;
      goto LABEL_104;
    }
    v19 = v189;
  }
  v23 = 0;
  if ( *(_QWORD *)(v19 + 120) != -1 )
    v23 = *(_QWORD *)(v19 + 136);
  v24 = 8;
  if ( *(_QWORD *)(v19 + 120) != -1 )
    v24 = *(_QWORD *)(v19 + 128);
  v25 = *(_QWORD *)(v19 + 80);
  v26 = *(_QWORD *)(v19 + 88);
  v27 = *(_BYTE *)(v19 + 169);
  v196 = 1;
  v195 = 1;
  v194 = 1;
  sub_14102C620((__int64)v147, v24, v23, v25, v26, v27);
  if ( *(_QWORD *)v147 == -1 )
  {
    *(_QWORD *)&v125 = *(_QWORD *)&v147[24];
    v22 = *(_OWORD *)&v147[8];
    *(_OWORD *)v161.m512i_i8 = *(_OWORD *)&v147[8];
    *(_OWORD *)&v161.m512i_u64[4] = v126;
    v31 = v125;
    *(_OWORD *)&v161.m512i_u64[2] = v125;
    *(_OWORD *)(a1 + 48) = v126;
    *(_OWORD *)(a1 + 32) = v31;
    goto LABEL_20;
  }
  v126 = *(_OWORD *)&v147[32];
  v125 = *(_OWORD *)&v147[16];
  LOBYTE(v188) = v147[48];
  *(_OWORD *)&v161.m512i_u64[2] = *(_OWORD *)&v147[16];
  *(_OWORD *)v161.m512i_i8 = *(_OWORD *)v147;
  *(_OWORD *)&v161.m512i_u64[4] = *(_OWORD *)&v147[32];
  v156 = *(_QWORD *)&v147[16];
  v155 = *(_OWORD *)v147;
  v154 = *(_QWORD *)&v147[40];
  v153 = *(_OWORD *)&v161.m512i_u64[3];
  v28 = *(_QWORD *)(v189 + 32);
  v29 = *(_QWORD *)(v189 + 40);
  v187 = 1;
  v186 = 1;
  v185 = 1;
  sub_140EF67C0(v147, v28, v29);
  v124 = *(__m128i *)&v147[8];
  *(_QWORD *)&v125 = *(_QWORD *)&v147[24];
  if ( *(_DWORD *)v147 == 1 )
  {
    *(_QWORD *)(a1 + 32) = v125;
    *(__m128i *)(a1 + 16) = v124;
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)a1 = -1;
    v11 = 1;
    v12 = 1;
    v30 = 1;
LABEL_90:
    v9 = (_QWORD *)v189;
    if ( (_QWORD)v153 )
      sub_140001660(*((_QWORD *)&v153 + 1), v153, 1);
    v78 = v156;
    if ( v156 )
    {
      v79 = (_QWORD *)(*((_QWORD *)&v155 + 1) + 72LL);
      do
      {
        v80 = *(v79 - 7);
        if ( v80 )
          sub_140001660(*(v79 - 6), v80, 1);
        v81 = *(v79 - 1);
        if ( v81 != -1 && v81 )
          sub_140001660(*v79, v81, 1);
        v82 = *(v79 - 4);
        if ( v82 )
          sub_140001660(*(v79 - 3), v82, 1);
        v79 += 12;
        --v78;
      }
      while ( v78 );
    }
    if ( (_QWORD)v155 )
      sub_140001660(*((_QWORD *)&v155 + 1), 96 * v155, 8);
LABEL_104:
    v83 = v178;
    if ( v158 )
      sub_140001660(v159, v158, 1);
    v84 = *v83;
    if ( *v83 != -1 && v84 )
      sub_140001660(v9[13], v84, 1);
    if ( !v30 )
      goto LABEL_112;
    goto LABEL_110;
  }
  v32 = a2;
  v152 = v125;
  v151 = v124;
  v33 = a2[4];
  Address = (PVOID)(v33 + 16);
  v34 = _InterlockedCompareExchange8((volatile signed __int8 *)(v33 + 16), 1, 0);
  v175 = v33;
  if ( v34 )
  {
    v213 = 1;
    v212 = 1;
    v211 = 1;
    sub_141937480((volatile void *)(v33 + 16));
    v33 = v175;
    v32 = a2;
  }
  if ( 2 * *off_1421E7210 )
  {
    v213 = 1;
    v212 = 1;
    v211 = 1;
    v38 = sub_141938160(v32);
    v32 = a2;
    LOBYTE(v38) = v38 ^ 1;
    v180 = v38;
    if ( *(_BYTE *)(v175 + 17) )
      goto LABEL_25;
  }
  else
  {
    v180 = 0;
    if ( *(_BYTE *)(v33 + 17) )
    {
LABEL_25:
      nullsub_1(v32);
      v35 = (void *)sub_140001650(40, 1);
      if ( !v35 )
        sub_141938D2B(1, 40);
      qmemcpy(v35, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v180 )
      {
        v36 = 2 * *off_1421E7210;
        if ( v36 )
        {
          v213 = 1;
          v212 = 1;
          v211 = 1;
          v118 = v35;
          v119 = sub_141938160(v36);
          v35 = v118;
          if ( !v119 )
            *(_BYTE *)(v175 + 17) = 1;
        }
      }
      v37 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v37 == 2 )
      {
        v213 = 1;
        v212 = 1;
        v211 = 1;
        v117 = v35;
        WakeByAddressSingle(Address);
        v35 = v117;
      }
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = 40;
      *(_QWORD *)(a1 + 24) = v35;
      *(_QWORD *)(a1 + 32) = 40;
      *(_QWORD *)a1 = -1;
      v11 = 1;
      v12 = 1;
      v30 = 1;
LABEL_88:
      if ( v151.m128i_i64[0] )
        sub_140001660(v151.m128i_i64[1], v151.m128i_i64[0], 1);
      goto LABEL_90;
    }
  }
  v200 = 1;
  v199 = 1;
  v198 = 1;
  sub_140DA5500(v147, v32 + 5, aUpsertingARela, 26);
  v39 = *(_OWORD *)v147;
  v40 = v147[16];
  if ( *(_QWORD *)v147 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v147[80];
    v41 = *(_OWORD *)&v147[17];
    v42 = *(_OWORD *)&v147[33];
    v43 = *(_OWORD *)&v147[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v147[65];
    *(_OWORD *)(a1 + 57) = v43;
    *(_OWORD *)(a1 + 41) = v42;
    *(_OWORD *)(a1 + 25) = v41;
    *(_OWORD *)(a1 + 8) = v39;
    *(_BYTE *)(a1 + 24) = v40;
    *(_QWORD *)a1 = -1;
    v11 = 1;
    v12 = 1;
    v30 = 1;
    goto LABEL_84;
  }
  v157 = *(_QWORD *)&v147[8];
  v197 = v147[16];
  v44 = a2[1] + 16LL;
  v208 = 1;
  v207 = 1;
  v206 = 1;
  sub_140D9F290(v147, v44);
  v208 = 1;
  v207 = 1;
  v206 = 1;
  v45 = sub_140D6FFF0((__int64)v147, (__int64)&off_141A4B818);
  LOBYTE(v181) = v46 & 1;
  v179 = v45;
  sub_140DCB2E0(&v124, v45 + 8);
  v217 = 1;
  v216 = 1;
  v215 = 1;
  v214 = 1;
  sub_140028CC0(v179, (unsigned __int8)v181);
  if ( v127 )
  {
    v217 = 1;
    v216 = 1;
    v215 = 1;
    v214 = 1;
    sub_140DBD2A0(v147);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v147[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v147[64];
    v47 = *(_OWORD *)v147;
    v48 = *(_OWORD *)&v147[16];
    v49 = *(_OWORD *)&v147[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v147[48];
    *(_OWORD *)(a1 + 40) = v49;
    *(_OWORD *)(a1 + 24) = v48;
    *(_OWORD *)(a1 + 8) = v47;
    *(_QWORD *)a1 = -1;
    v11 = 1;
    v12 = 1;
    v30 = 1;
LABEL_82:
    v208 = v11;
    v207 = v12;
    v206 = v30;
    sub_1407ADB20(&v124);
LABEL_83:
    v200 = v11;
    v199 = v12;
    v198 = v30;
    sub_140028CC0(v157, v197);
LABEL_84:
    if ( !(_BYTE)v180 )
    {
      if ( 2 * *off_1421E7210 )
      {
        v213 = v11;
        v212 = v12;
        v211 = v30;
        if ( !(unsigned __int8)sub_141938160(v40) )
          *(_BYTE *)(v175 + 17) = 1;
      }
    }
    v76 = Address;
    v77 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v77 == 2 )
    {
      v213 = v11;
      v212 = v12;
      v211 = v30;
      WakeByAddressSingle(v76);
    }
    goto LABEL_88;
  }
  v50 = 1000
      * (v17
       + 86400LL * (int)(((v14 / 100) >> 2) + ((1461 * v14) >> 2) + v15 + ((v13 >> 4) & 0x1FF) - v14 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v18) >> 50);
  if ( *v178 != -1 )
  {
    v217 = 1;
    v216 = 1;
    v215 = 1;
    v214 = 1;
    sub_1416AC440(v147, v178);
    v51 = *(_QWORD *)&v147[8];
    v181 = *(_QWORD *)v147;
    v52 = v124.m128i_i64[1];
    v53 = v125;
    *(_QWORD *)v147 = v124.m128i_i64[1];
    *(_QWORD *)&v147[8] = v124.m128i_i64[1] + ((_QWORD)v125 << 8);
    v179 = v51;
    v54 = *(_QWORD *)&v147[16];
    v55 = sub_140D28F20(v147);
    v57 = v56;
    v176 = v55;
    if ( ((v56 < v53) & (unsigned __int8)v55) != 0 )
    {
      v184 = 1;
      v183 = 1;
      v182 = 1;
      sub_140289C00((__int64)v120, (v56 << 8) + v52);
      if ( v120[0].m128i_i64[0] != -1 )
      {
        sub_1418F44E0((__m128i *)&v161, v120, 0x100u);
LABEL_49:
        v192 = 1;
        v191 = 1;
        v190 = 1;
        sub_1416AC440(&v149, &v162[8]);
        if ( v161.m512i_i64[0] )
          sub_140001660(v161.m512i_i64[1], v161.m512i_i64[0], 1);
        v161.m512i_i64[0] = v181;
        v161.m512i_i64[1] = v179;
        v161.m512i_i64[2] = v54;
        *(_QWORD *)&v147[16] = *(_QWORD *)(v189 + 16);
        *(_OWORD *)v147 = *(_OWORD *)v189;
        if ( v161.m512i_i64[3] )
          sub_140001660(v161.m512i_i64[4], v161.m512i_i64[3], 1);
        v161.m512i_i64[5] = *(_QWORD *)&v147[16];
        *(_OWORD *)&v161.m512i_u64[3] = *(_OWORD *)v147;
        v210 = 1;
        v209 = 1;
        sub_1416AC440(v147, &v151);
        if ( v161.m512i_i64[6] )
          sub_140001660(v161.m512i_i64[7], v161.m512i_i64[6], 1);
        *(_QWORD *)v162 = *(_QWORD *)&v147[16];
        *(_OWORD *)&v161.m512i_u64[6] = *(_OWORD *)v147;
        v210 = 1;
        v209 = 1;
        sub_1416AC440(v147, &v153);
        v66 = &v163[8];
        if ( *(_QWORD *)&v163[8] )
          sub_140001660(*(_QWORD *)&v163[16], *(_QWORD *)&v163[8], 1);
        *(_QWORD *)v164 = *(_QWORD *)&v147[16];
        *(_OWORD *)&v163[8] = *(_OWORD *)v147;
        BYTE2(v174) = v188;
        HIBYTE(v174) = *(_BYTE *)(v189 + 170);
        v210 = 1;
        v209 = 1;
        sub_1403F7A40(v147, &v155);
        v67 = v176;
        sub_140191400((__int64 *)&v164[8]);
        *(_QWORD *)v165 = *(_QWORD *)&v147[16];
        *(_OWORD *)&v164[8] = *(_OWORD *)v147;
        v68 = v189;
        if ( *(_QWORD *)(v189 + 144) == -1 )
        {
          LOBYTE(v66) = 1;
        }
        else
        {
          *(_QWORD *)&v147[16] = *(_QWORD *)(v189 + 160);
          *(_OWORD *)v147 = *(_OWORD *)(v189 + 144);
          if ( *(_QWORD *)&v165[8] )
            sub_140001660(*(_QWORD *)&v165[16], *(_QWORD *)&v165[8], 1);
          v166 = *(_QWORD *)&v147[16];
          *(_OWORD *)&v165[8] = *(_OWORD *)v147;
          LODWORD(v66) = 0;
        }
        BYTE1(v174) = *(_BYTE *)(v68 + 168);
        v172 = v50;
        if ( !*((_QWORD *)&v171 + 1) )
          *((_QWORD *)&v171 + 1) = v50;
        v69 = v67;
        if ( v160 )
        {
          v210 = 1;
          v209 = (char)v66;
          sub_1416AC440(v147, &v158);
          v70 = &v162[8];
          if ( *(_QWORD *)&v162[8] )
            sub_140001660(*(_QWORD *)&v162[16], *(_QWORD *)&v162[8], 1);
          *(_QWORD *)v163 = *(_QWORD *)&v147[16];
          *(_OWORD *)&v162[8] = *(_OWORD *)v147;
          LOBYTE(v70) = 1;
        }
        else
        {
          if ( *(_QWORD *)&v162[8] )
            sub_140001660(*(_QWORD *)&v162[16], *(_QWORD *)&v162[8], 1);
          *(_QWORD *)v163 = v150;
          *(_OWORD *)&v162[8] = v149;
          LODWORD(v70) = 0;
        }
        v188 = (int)v66;
        if ( (v69 & 1) != 0 )
        {
          v210 = (char)v70;
          v209 = (char)v66;
          sub_140289C00((__int64)v147, (__int64)&v161);
          if ( v57 >= (unsigned __int64)v125 )
          {
            LODWORD(v178) = (_DWORD)v70;
            sub_1419390C3(v57, v125, &off_141A4B840);
          }
          v71 = (__m128i *)(v124.m128i_i64[1] + (v57 << 8));
          sub_14038CFC0(v71);
          sub_1418F44E0(v71, (const __m128i *)v147, 0x100u);
        }
        else
        {
          v210 = (char)v70;
          v209 = (char)v66;
          sub_140289C00((__int64)v147, (__int64)&v161);
          v210 = (char)v70;
          v209 = (char)v66;
          sub_140DA3970(&v124, v147);
        }
        v72 = sub_1418F44E0(&v121, (const __m128i *)&v161, 0x100u);
        if ( (_BYTE)v70 && (_QWORD)v149 )
          v72 = sub_140001660(*((_QWORD *)&v149 + 1), v149, 1);
        LOBYTE(v72) = 1;
        LODWORD(v181) = v72;
        goto LABEL_79;
      }
    }
    else
    {
      v120[0].m128i_i64[0] = -1;
    }
    v161.m512i_i64[0] = 0;
    v161.m512i_i64[1] = 1;
    *(_OWORD *)&v161.m512i_u64[2] = 0;
    v161.m512i_i64[4] = 1;
    *(_OWORD *)&v161.m512i_u64[5] = 0;
    v161.m512i_i64[7] = 1;
    *(_OWORD *)v162 = 0;
    *(_QWORD *)&v162[16] = 1;
    *(_OWORD *)v163 = 0;
    *(_QWORD *)&v168 = 0x8000000000000001uLL;
    *(_QWORD *)&v163[16] = 1;
    *(_OWORD *)v164 = 0;
    *(_QWORD *)&v164[16] = 8;
    *(_OWORD *)v165 = 0;
    *(_QWORD *)&v165[16] = 1;
    v166 = 0;
    v173 = 0;
    v170 = -1;
    v171 = 0;
    v172 = 0;
    v167 = -1;
    v174 = 0;
    goto LABEL_49;
  }
  v217 = 1;
  v216 = 1;
  v215 = 1;
  v214 = 1;
  sub_140DBD340(v147);
  v161.m512i_i64[0] = (__int64)v147;
  v161.m512i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v134, &unk_141A4B830, &v161);
  if ( *(_QWORD *)v147 )
    sub_140001660(*(_QWORD *)&v147[8], *(_QWORD *)v147, 1);
  v143 = *((_QWORD *)&v134 + 1);
  v176 = v134;
  v181 = *(_QWORD *)v189;
  v179 = *(_QWORD *)(v189 + 8);
  v58 = *(_QWORD *)(v189 + 16);
  sub_1416AC440(&v130, &v151);
  sub_1416AC440(&v144, &v158);
  sub_1416AC440(&v136, &v153);
  v59 = v189;
  v60 = *(_BYTE *)(v189 + 170);
  sub_1403F7A40(v147, &v155);
  v61 = *(_QWORD *)(v59 + 144);
  v62 = 0;
  v63 = v61 == -1;
  if ( v61 == -1 )
    v61 = 0;
  v64 = 1;
  if ( !v63 )
  {
    v64 = *(_QWORD *)(v59 + 152);
    v62 = *(_QWORD *)(v59 + 160);
  }
  v65 = *(_BYTE *)(v59 + 168);
  v161.m512i_i64[2] = v135;
  *(_OWORD *)v161.m512i_i8 = v134;
  v161.m512i_i64[3] = v181;
  v161.m512i_i64[4] = v179;
  v161.m512i_i64[5] = v58;
  *(_OWORD *)&v161.m512i_u64[6] = v130;
  *(_QWORD *)v162 = v131;
  *(_OWORD *)&v162[8] = *(_OWORD *)v144.m512i_i8;
  *(_QWORD *)v163 = v144.m512i_i64[2];
  LOBYTE(v174) = 0;
  *(_QWORD *)&v168 = 0x8000000000000001uLL;
  *(_QWORD *)v164 = v137;
  *(_OWORD *)&v163[8] = v136;
  BYTE2(v174) = v188;
  HIBYTE(v174) = v60;
  *(_OWORD *)&v164[8] = *(_OWORD *)v147;
  *(_QWORD *)v165 = *(_QWORD *)&v147[16];
  *(_QWORD *)&v165[8] = v61;
  *(_QWORD *)&v165[16] = v64;
  v166 = v62;
  v173 = 0;
  v170 = -1;
  *(_QWORD *)&v171 = 0;
  *((_QWORD *)&v171 + 1) = v50;
  v172 = v50;
  v167 = -1;
  BYTE1(v174) = v65;
  sub_140289C00((__int64)v147, (__int64)&v161);
  sub_140DA3970(&v124, v147);
  sub_1418F44E0(&v121, (const __m128i *)&v161, 0x100u);
  LODWORD(v181) = 0;
  v188 = 0;
LABEL_79:
  v205 = 1;
  v204 = 1;
  sub_140D82100(v147, a2);
  if ( *(_DWORD *)v147 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v147[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v147[64];
    v73 = *(_OWORD *)v147;
    v74 = *(_OWORD *)&v147[16];
    v75 = *(_OWORD *)&v147[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v147[48];
    *(_OWORD *)(a1 + 40) = v75;
    *(_OWORD *)(a1 + 24) = v74;
    *(_OWORD *)(a1 + 8) = v73;
LABEL_81:
    *(_QWORD *)a1 = -1;
    v12 = v188;
    v11 = v181;
    sub_14038CFC0(&v121);
    v30 = 0;
    goto LABEL_82;
  }
  v96 = v160;
  if ( v123[0] < 0 )
  {
    if ( !v160 )
    {
LABEL_148:
      *(_QWORD *)&v130 = -1;
      sub_1418F44E0((__m128i *)&v161, &v121, 0x100u);
      goto LABEL_149;
    }
    v97 = *a2;
    v99 = v121.m128i_i32[2];
    v100 = v122;
    v101 = v159;
  }
  else
  {
    if ( !v160 )
      goto LABEL_148;
    v97 = *a2;
    v98 = *a2 + 16LL;
    v99 = v121.m128i_i32[2];
    v100 = v122;
    v205 = 1;
    v204 = 1;
    sub_141044780((unsigned int)v147, v98, v121.m128i_i32[2], v122, (__int64)v123);
    v101 = v159;
    if ( (unsigned __int8)sub_140CA0EE0(v147, v159, v96) )
      goto LABEL_148;
  }
  v205 = 1;
  v204 = 1;
  sub_141044C70((unsigned int)&v161, v97 + 16, v99, v100, v101, v96);
  if ( v161.m512i_i64[0] == -1 )
  {
    v129 = v161.m512i_i64[3];
    v128 = *(_OWORD *)&v161.m512i_u64[1];
    v205 = 1;
    v204 = 1;
    sub_140D38AE0(v147, &v128);
    v113 = *(_QWORD *)v147;
    v138 = *(_OWORD *)&v147[40];
    v139 = *(_OWORD *)&v147[56];
    v140 = *(_OWORD *)&v147[72];
    v144 = *(__m512i *)&v147[8];
    v145 = *(_OWORD *)&v147[72];
    v146 = *(_QWORD *)&v147[88];
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v147[88];
    *(_OWORD *)(a1 + 80) = v145;
    v114 = *(_OWORD *)v144.m512i_i8;
    v115 = *(_OWORD *)&v144.m512i_u64[2];
    v116 = *(_OWORD *)&v144.m512i_u64[4];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v144.m512i_u64[6];
    *(_OWORD *)(a1 + 48) = v116;
    *(_OWORD *)(a1 + 32) = v115;
    *(_OWORD *)(a1 + 16) = v114;
    *(_QWORD *)(a1 + 8) = v113;
    goto LABEL_81;
  }
  *(_QWORD *)&v141 = *(_QWORD *)&v162[16];
  v140 = *(_OWORD *)v162;
  v144 = v161;
  v145 = *(_OWORD *)v162;
  v146 = *(_QWORD *)&v162[16];
  v133 = *(_QWORD *)&v162[16];
  v132[2] = *(_OWORD *)v162;
  v132[1] = *(_OWORD *)&v161.m512i_u64[6];
  v132[0] = *(_OWORD *)&v161.m512i_u64[4];
  v131 = *(_OWORD *)&v161.m512i_u64[2];
  v130 = *(_OWORD *)v161.m512i_i8;
  sub_1418F44E0((__m128i *)&v161, &v121, 0x100u);
  v193 = 1;
  sub_1416AC440(v147, v132);
  if ( (__int64)v168 > 0 )
    sub_140001660(*((_QWORD *)&v168 + 1), v168, 1);
  v169 = *(_QWORD *)&v147[16];
  v168 = *(_OWORD *)v147;
  LOBYTE(v174) = 1;
LABEL_149:
  *(_QWORD *)&v136 = v124.m128i_i64[1];
  *((_QWORD *)&v136 + 1) = v124.m128i_i64[1] + ((_QWORD)v125 << 8);
  v102 = sub_140D28FA0(&v136, v161.m512i_i64[1], v161.m512i_i64[2]);
  if ( v102 )
  {
    v103 = (__m128i *)v102;
    v193 = 1;
    sub_140289C00((__int64)v147, (__int64)&v161);
    sub_14038CFC0(v103);
    sub_1418F44E0(v103, (const __m128i *)v147, 0x100u);
  }
  v148 = a2;
  sub_1418F44E0((__m128i *)v147, &v124, 0x180u);
  v193 = 0;
  sub_140FB9070(&v136, &v130, v147);
  if ( (_DWORD)v136 != -1 )
  {
    *(_OWORD *)(a1 + 88) = v141;
    *(_OWORD *)(a1 + 72) = v140;
    v104 = v136;
    v105 = v137;
    v106 = v138;
    *(_OWORD *)(a1 + 56) = v139;
    *(_OWORD *)(a1 + 40) = v106;
    *(_OWORD *)(a1 + 24) = v105;
    *(_OWORD *)(a1 + 8) = v104;
    *(_QWORD *)a1 = -1;
    sub_14038CFC0(&v161);
    v30 = 0;
    v12 = v188;
    v11 = v181;
    goto LABEL_83;
  }
  *(_QWORD *)v163 = 0;
  v107 = v188;
  v108 = v181;
  if ( (__int64)v168 > 0 )
    sub_140001660(*((_QWORD *)&v168 + 1), v168, 1);
  *(_QWORD *)&v168 = 0x8000000000000000uLL;
  sub_1418F44E0((__m128i *)a1, (const __m128i *)&v161, 0x100u);
  v200 = v108;
  v199 = v107;
  v198 = 0;
  sub_140028CC0(v157, v197);
  v213 = v108;
  v212 = v107;
  v211 = 0;
  sub_140028CC0(Address, v180);
  if ( v151.m128i_i64[0] )
    sub_140001660(v151.m128i_i64[1], v151.m128i_i64[0], 1);
  v109 = (_QWORD *)v189;
  if ( (_QWORD)v153 )
    sub_140001660(*((_QWORD *)&v153 + 1), v153, 1);
  sub_140191400((__int64 *)&v155);
  if ( v158 )
    sub_140001660(v159, v158, 1);
  v110 = *v178;
  if ( *v178 != -1 && v110 )
    sub_140001660(v109[13], v110, 1);
  v111 = v109[3];
  if ( v111 )
    sub_140001660(v109[4], v111, 1);
  if ( *v142 )
    sub_140001660(v109[7], *v142, 1);
  v112 = v109[9];
  if ( v112 )
    sub_140001660(v109[10], v112, 1);
  sub_1404017C0(v109 + 15);
  return a1;
}
