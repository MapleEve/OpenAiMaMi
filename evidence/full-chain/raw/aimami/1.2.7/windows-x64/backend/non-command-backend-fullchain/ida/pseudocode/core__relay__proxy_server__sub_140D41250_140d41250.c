// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d41250 | name sub_140D41250
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D41250(_OWORD *a1, __int128 *a2, _QWORD *a3)
{
  __int128 *v3; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int128 v8; // xmm0
  _QWORD *v9; // r15
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm3
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdx
  _QWORD *v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  char *v32; // r10
  __int64 v33; // r15
  __int64 v34; // r13
  __int128 *v35; // rbx
  __int64 v36; // r12
  __int64 v37; // r14
  char v38; // al
  __int128 *v39; // rdi
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  char result; // al
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int128 *v46; // r15
  __int64 v47; // rax
  __int128 *v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  int v51; // edx
  __int64 v52; // rbx
  __int128 *v53; // rdi
  __int128 *v54; // rdx
  char *v55; // r15
  char v56; // al
  __int64 v57; // rdi
  __int64 v58; // rdx
  char v59; // r15
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdi
  __int64 v63; // rdx
  char v64; // r15
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdi
  __int64 v68; // rdx
  char v69; // r15
  __int64 v70; // rdi
  __int64 v71; // rdx
  char v72; // r15
  __int128 v73; // xmm1
  __int128 v74; // xmm2
  __int128 v75; // xmm3
  __int128 *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // r8
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm2
  __int128 v84; // xmm3
  char v85; // al
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  __int128 v89; // xmm3
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm3
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm2
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm3
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm2
  __int64 v102; // rdx
  __int128 *v103; // r15
  __int128 v104; // xmm0
  __int128 v105; // xmm1
  __int128 v106; // xmm2
  unsigned __int64 v107; // rdx
  bool v108; // cf
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  __int128 v113; // xmm2
  __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // r14
  __int64 v117; // r15
  __int64 v118; // rbx
  int v119; // edx
  int v120; // ecx
  unsigned int v121; // ecx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // r8
  __int128 *v126; // rax
  __int128 v127; // xmm0
  __int128 v128; // xmm1
  __int128 v129; // xmm2
  __int128 *v130; // rax
  __int128 v131; // xmm0
  __int128 v132; // xmm1
  __int128 v133; // xmm2
  __int128 v134; // xmm0
  __int128 v135; // xmm1
  __int128 v136; // xmm2
  __int128 v137; // xmm3
  __int128 v138; // xmm4
  __int128 v139; // xmm5
  __int128 v140; // xmm6
  __int128 *v141; // rdi
  bool v142; // zf
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rdi
  __int64 v146; // rdx
  __int64 v147; // rax
  char *v148; // rcx
  _BYTE *v149; // [rsp+40h] [rbp-40h] BYREF
  __int128 v150; // [rsp+48h] [rbp-38h]
  __int128 v151; // [rsp+58h] [rbp-28h]
  __int128 v152; // [rsp+68h] [rbp-18h]
  __int128 v153; // [rsp+78h] [rbp-8h]
  __int128 v154; // [rsp+88h] [rbp+8h]
  __int128 v155; // [rsp+98h] [rbp+18h]
  __int128 v156; // [rsp+A8h] [rbp+28h]
  __int128 v157; // [rsp+B8h] [rbp+38h]
  __int128 v158; // [rsp+140h] [rbp+C0h]
  __int128 v159; // [rsp+150h] [rbp+D0h]
  __int128 v160; // [rsp+160h] [rbp+E0h]
  __int128 v161; // [rsp+170h] [rbp+F0h]
  __int128 v162; // [rsp+180h] [rbp+100h]
  __int128 v163; // [rsp+190h] [rbp+110h]
  __int128 v164; // [rsp+1A0h] [rbp+120h]
  __int128 v165; // [rsp+1B0h] [rbp+130h]
  __int128 v166; // [rsp+1C0h] [rbp+140h]
  _OWORD v167[5]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v168; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v169; // [rsp+230h] [rbp+1B0h]
  __int128 v170; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v171; // [rsp+250h] [rbp+1D0h]
  __int128 v172; // [rsp+260h] [rbp+1E0h]
  __int128 v173; // [rsp+270h] [rbp+1F0h]
  __int128 v174; // [rsp+280h] [rbp+200h]
  __int128 v175; // [rsp+290h] [rbp+210h]
  __int128 v176; // [rsp+2A0h] [rbp+220h]
  __int128 v177; // [rsp+2B0h] [rbp+230h]
  __int128 v178; // [rsp+2C0h] [rbp+240h]
  __int128 v179; // [rsp+2D0h] [rbp+250h]
  __int128 v180; // [rsp+2E0h] [rbp+260h]
  __int128 v181; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v182; // [rsp+300h] [rbp+280h]
  __int128 v183; // [rsp+310h] [rbp+290h]
  __int128 v184; // [rsp+320h] [rbp+2A0h]
  __int128 v185; // [rsp+330h] [rbp+2B0h]
  __int128 v186; // [rsp+340h] [rbp+2C0h]
  __int128 v187; // [rsp+350h] [rbp+2D0h]
  __int128 v188; // [rsp+360h] [rbp+2E0h]
  __int128 v189; // [rsp+370h] [rbp+2F0h]
  __int128 v190; // [rsp+380h] [rbp+300h]
  __int128 v191; // [rsp+390h] [rbp+310h]
  __int128 v192; // [rsp+3A0h] [rbp+320h]
  __int128 v193; // [rsp+3B0h] [rbp+330h]
  __int128 v194; // [rsp+3C0h] [rbp+340h]
  __int128 v195; // [rsp+3D0h] [rbp+350h]
  __int64 v196; // [rsp+3E0h] [rbp+360h]
  _BYTE v197[128]; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v198; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v199; // [rsp+480h] [rbp+400h]
  __int128 v200; // [rsp+490h] [rbp+410h]
  __int128 v201; // [rsp+4A0h] [rbp+420h]
  __int128 v202; // [rsp+4B0h] [rbp+430h]
  __int128 v203; // [rsp+4C0h] [rbp+440h]
  __int128 v204; // [rsp+4D0h] [rbp+450h]
  __int128 v205; // [rsp+4E0h] [rbp+460h]
  char v206; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v207; // [rsp+4F8h] [rbp+478h]
  __int64 v208; // [rsp+508h] [rbp+488h]
  __int128 v209; // [rsp+510h] [rbp+490h] BYREF
  __int128 v210; // [rsp+520h] [rbp+4A0h]
  __int64 v211; // [rsp+530h] [rbp+4B0h]
  __int128 v212; // [rsp+540h] [rbp+4C0h]
  _BYTE v213[128]; // [rsp+550h] [rbp+4D0h] BYREF
  _BYTE v214[136]; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v215; // [rsp+658h] [rbp+5D8h]
  __int64 v216; // [rsp+7A8h] [rbp+728h]
  _QWORD *v217; // [rsp+7B0h] [rbp+730h]
  __int64 v218; // [rsp+7B8h] [rbp+738h]
  __int128 *v219; // [rsp+7C0h] [rbp+740h]
  __int64 v220; // [rsp+7D8h] [rbp+758h]
  _QWORD *v221; // [rsp+7E0h] [rbp+760h]
  __int128 *v222; // [rsp+7E8h] [rbp+768h]
  __int64 v223; // [rsp+7F0h] [rbp+770h]
  __int64 v224; // [rsp+7F8h] [rbp+778h]
  __int64 v225; // [rsp+800h] [rbp+780h]
  char *v226; // [rsp+808h] [rbp+788h]
  __int64 v227; // [rsp+810h] [rbp+790h]
  _QWORD *v228; // [rsp+818h] [rbp+798h]
  _BYTE v229[128]; // [rsp+820h] [rbp+7A0h] BYREF
  __int64 v230; // [rsp+8A0h] [rbp+820h]
  _QWORD *v231; // [rsp+8A8h] [rbp+828h]
  __int64 v232; // [rsp+8B0h] [rbp+830h]
  _QWORD *v233; // [rsp+8B8h] [rbp+838h]
  char v234; // [rsp+8C7h] [rbp+847h] BYREF
  _QWORD *v235; // [rsp+8C8h] [rbp+848h]
  __int64 v236; // [rsp+8D0h] [rbp+850h]
  char *v237; // [rsp+8D8h] [rbp+858h]
  __int64 v238; // [rsp+8E0h] [rbp+860h]
  _QWORD *v239; // [rsp+8E8h] [rbp+868h]
  char *v240; // [rsp+8F0h] [rbp+870h]
  __int128 *v241; // [rsp+8F8h] [rbp+878h]
  __int128 *v242; // [rsp+900h] [rbp+880h]
  _QWORD *v243; // [rsp+908h] [rbp+888h]
  __int128 *v244; // [rsp+910h] [rbp+890h]
  char v245; // [rsp+91Fh] [rbp+89Fh]
  __int128 *v246; // [rsp+920h] [rbp+8A0h]
  __int64 v247; // [rsp+928h] [rbp+8A8h]

  v247 = -2;
  v235 = a3;
  v3 = a2;
  v5 = *((unsigned __int8 *)a2 + 1872);
  v244 = a2;
  switch ( v5 )
  {
    case 0LL:
      v6 = *((_QWORD *)a2 + 5);
      v7 = *((_QWORD *)a2 + 6);
      *((_BYTE *)a2 + 1873) = 1;
      v211 = *((_QWORD *)a2 + 4);
      v8 = *a2;
      v210 = a2[1];
      v209 = v8;
      v9 = (_QWORD *)a2 + 7;
      sub_140DAC840((char *)a2 + 56, v6);
      v3 = v244;
      if ( !*((_QWORD *)v244 + 9) )
      {
        v243 = v9;
        *(_QWORD *)v229 = aCodex_2;
        *(_QWORD *)&v229[8] = 5;
        v149 = v229;
        *(_QWORD *)&v150 = sub_140186EE0;
        sub_1416ABFD0(v214, &unk_141A48268, &v149);
        v246 = *(__int128 **)v214;
        LOWORD(v20) = 502;
        v240 = *(char **)&v214[8];
        sub_140DAFCE0((unsigned int)v197, v20, *(_DWORD *)&v214[8], *(_DWORD *)&v214[16], (__int64)aProxyUpstream, 14);
        if ( v246 )
          sub_140001660(v240, v246, 1);
        v21 = *((_QWORD *)v244 + 8);
        v240 = *((char **)v244 + 9);
        v246 = nullptr;
        v241 = (__int128 *)v21;
        while ( v240 != (char *)v246 )
        {
          v246 = (__int128 *)((char *)v246 + 1);
          v22 = v21 + 256;
          sub_14038CFC0(v21);
          v21 = v22;
        }
        if ( *v243 )
          sub_140001660(*((_QWORD *)v244 + 8), *v243 << 8, 8);
        sub_140409B40((char *)&v209 + 8);
        goto LABEL_36;
      }
      *(_QWORD *)&v214[56] = v9[2];
      *(_OWORD *)&v214[40] = *(_OWORD *)v9;
      *((_BYTE *)v244 + 1873) = 0;
      *(_QWORD *)&v214[32] = v211;
      v10 = v209;
      v11 = v210;
      v163 = v209;
      v164 = v210;
      v166 = *(_OWORD *)&v214[48];
      v12 = *(_OWORD *)&v214[32];
      v165 = *(_OWORD *)&v214[32];
      v13 = (__int64)(v3 + 5);
      v3[8] = *(_OWORD *)&v214[48];
      v3[7] = v12;
      v3[6] = v11;
      v3[5] = v10;
      *((_QWORD *)v3 + 18) = v6;
      *((_QWORD *)v3 + 19) = v7;
      v243 = (_QWORD *)v3 + 103;
      *((_BYTE *)v3 + 824) = 0;
LABEL_6:
      *((_QWORD *)v3 + 20) = v6;
      *(__int128 *)((char *)v3 + 168) = *(__int128 *)((char *)v3 + 120);
      v16 = *((_QWORD *)v3 + 17);
      *((_QWORD *)v3 + 23) = v16;
      *((_QWORD *)v3 + 24) = v7;
      v17 = *(_OWORD *)(v13 + 16);
      *(__int128 *)((char *)v3 + 200) = *(_OWORD *)v13;
      *(__int128 *)((char *)v3 + 216) = v17;
      *((_QWORD *)v3 + 29) = *(_QWORD *)(v13 + 32);
      if ( !v16 )
      {
        v23 = v243;
        v233 = v243;
        v232 = v13;
        v24 = v13;
        LOWORD(v13) = 502;
        sub_140DAFCE0((unsigned int)v213, v13, (unsigned int)aNoCandidatePro, 31, (__int64)aProxyUpstream, 14);
        v25 = v24;
        v26 = v23;
        goto LABEL_111;
      }
      v241 = (__int128 *)v13;
      *((_QWORD *)v3 + 30) = -1;
      *((_QWORD *)v3 + 46) = v16;
      v18 = *((_QWORD *)v3 + 22);
      v19 = v18 + (v16 << 8);
      *((_QWORD *)v3 + 47) = v18;
      *((_QWORD *)v3 + 48) = v19;
      *((_QWORD *)v3 + 49) = 0;
      break;
    case 1LL:
      sub_1419393E0(&off_141A48290);
    case 2LL:
      sub_141939400(&off_141A48290);
    case 3LL:
      v14 = (_QWORD *)a2 + 103;
      v15 = *((unsigned __int8 *)a2 + 824);
      v13 = (__int64)(a2 + 5);
      v243 = (_QWORD *)v3 + 103;
      switch ( v15 )
      {
        case 0LL:
          v6 = *((_QWORD *)v3 + 18);
          v7 = *((_QWORD *)v3 + 19);
          goto LABEL_6;
        case 1LL:
          v219 = v3 + 5;
          sub_1419393E0(&off_141A48310);
        case 2LL:
          v219 = v3 + 5;
          sub_141939400(&off_141A48310);
        case 3LL:
          v241 = v3 + 5;
          v32 = (char *)v3 + 888;
          v33 = (__int64)(v3 + 52);
          switch ( *((_BYTE *)v3 + 888) )
          {
            case 0:
              v34 = *((_QWORD *)v3 + 104);
              v35 = *((__int128 **)v3 + 105);
              v36 = *((_QWORD *)v3 + 106);
              v37 = *((_QWORD *)v3 + 107);
              goto LABEL_40;
            case 1:
              v224 = (__int64)v3 + 824;
              v223 = (__int64)v241;
              v222 = v3 + 52;
              sub_1419393E0(&off_141A48000);
            case 2:
              v224 = (__int64)v3 + 824;
              v223 = (__int64)v241;
              v222 = v3 + 52;
              sub_141939400(&off_141A48000);
            case 3:
              v240 = (char *)v3 + 888;
              v246 = v3 + 52;
              goto LABEL_84;
            case 4:
              v240 = (char *)v3 + 888;
              v246 = v3 + 52;
              goto LABEL_74;
            case 5:
              v240 = (char *)v3 + 888;
              v246 = v3 + 52;
              goto LABEL_69;
            case 6:
              v240 = (char *)v3 + 888;
              v246 = v3 + 52;
              goto LABEL_88;
          }
        case 4LL:
          v241 = v3 + 5;
          goto LABEL_107;
        case 5LL:
          v241 = v3 + 5;
          goto LABEL_19;
      }
  }
  while ( 1 )
  {
    if ( v18 == v19 )
    {
      if ( *((_QWORD *)v3 + 30) == -1 )
      {
        v233 = v243;
        v232 = (__int64)v241;
        LOWORD(v13) = 502;
        sub_140DAFCE0((unsigned int)v229, v13, (unsigned int)aAllRelayProvid, 66, (__int64)aProxyUpstream, 14);
      }
      else
      {
        *(_QWORD *)v229 = *((_QWORD *)v3 + 30);
        v73 = *(__int128 *)((char *)v3 + 264);
        v74 = *(__int128 *)((char *)v3 + 280);
        v75 = *(__int128 *)((char *)v3 + 296);
        *(_OWORD *)&v229[8] = *(__int128 *)((char *)v3 + 248);
        *(_OWORD *)&v229[24] = v73;
        *(_OWORD *)&v229[40] = v74;
        *(_OWORD *)&v229[56] = v75;
        *(_OWORD *)&v229[72] = *(__int128 *)((char *)v3 + 312);
        *(_OWORD *)&v229[88] = *(__int128 *)((char *)v3 + 328);
        *(_OWORD *)&v229[104] = *(__int128 *)((char *)v3 + 344);
        *(_QWORD *)&v229[120] = *((_QWORD *)v3 + 45);
      }
      *(_OWORD *)&v214[112] = *(_OWORD *)&v229[112];
      *(_OWORD *)&v214[96] = *(_OWORD *)&v229[96];
      *(_OWORD *)&v214[80] = *(_OWORD *)&v229[80];
      *(_OWORD *)&v214[64] = *(_OWORD *)&v229[64];
      *(_OWORD *)&v214[48] = *(_OWORD *)&v229[48];
      *(_OWORD *)&v214[32] = *(_OWORD *)&v229[32];
      *(_OWORD *)&v214[16] = *(_OWORD *)&v229[16];
      *(_OWORD *)v214 = *(_OWORD *)v229;
      v3 = v244;
      sub_1418F44E0((__m128i *)v244 + 52, (const __m128i *)v214, 0x1D0u);
      *((_BYTE *)v3 + 1296) = 0;
LABEL_19:
      v246 = v3 + 52;
      sub_140D442B0(v229, v3 + 52, v235);
      if ( *(_DWORD *)v229 != -1 )
      {
        *(_OWORD *)&v213[112] = *(_OWORD *)&v229[112];
        *(_OWORD *)&v213[96] = *(_OWORD *)&v229[96];
        *(_OWORD *)&v213[80] = *(_OWORD *)&v229[80];
        *(_OWORD *)&v213[64] = *(_OWORD *)&v229[64];
        *(_OWORD *)&v213[48] = *(_OWORD *)&v229[48];
        *(_OWORD *)&v213[32] = *(_OWORD *)&v229[32];
        *(_OWORD *)&v213[16] = *(_OWORD *)&v229[16];
        *(_OWORD *)v213 = *(_OWORD *)v229;
        v27 = v243;
        v233 = v243;
        v28 = (__int64)v241;
        v232 = (__int64)v241;
        sub_140D13740((__int64)v246);
        v221 = v27;
        v220 = v28;
        sub_140409B40(v244 + 13);
        v235 = v244 + 11;
        v29 = *((_QWORD *)v244 + 22);
        v240 = *((char **)v244 + 23);
        v246 = nullptr;
        v242 = (__int128 *)v29;
        v30 = v29;
        while ( v240 != (char *)v246 )
        {
          v246 = (__int128 *)((char *)v246 + 1);
          v31 = v30 + 256;
          sub_14038CFC0(v30);
          v30 = v31;
        }
        goto LABEL_114;
      }
      v38 = 5;
      goto LABEL_119;
    }
    *((_QWORD *)v3 + 47) = v18 + 256;
    v44 = *((_QWORD *)v3 + 20);
    v45 = *((_QWORD *)v3 + 49) + 1LL;
    *((_QWORD *)v3 + 49) = v45;
    v217 = v243;
    v216 = (__int64)v241;
    sub_140DAE9D0(&v149, v44);
    if ( v149 == (_BYTE *)-1LL )
    {
      *(_OWORD *)&v213[112] = v157;
      *(_OWORD *)&v213[96] = v156;
      *(_OWORD *)&v213[80] = v155;
      *(_OWORD *)&v213[64] = v154;
      *(_OWORD *)&v213[48] = v153;
      *(_OWORD *)&v213[32] = v152;
      *(_OWORD *)&v213[16] = v151;
      *(_OWORD *)v213 = v150;
      v76 = v244;
      v25 = (__int64)v241;
      v26 = v243;
      if ( *((_DWORD *)v244 + 60) == -1 )
      {
LABEL_111:
        v243 = v26;
        v221 = v26;
        v241 = (__int128 *)v25;
        v220 = v25;
        sub_140409B40(v244 + 13);
        v235 = v244 + 11;
        v143 = *((_QWORD *)v244 + 22);
        v240 = *((char **)v244 + 23);
        v246 = nullptr;
        v242 = (__int128 *)v143;
        v144 = v143;
        while ( v240 != (char *)v246 )
        {
          v246 = (__int128 *)((char *)v246 + 1);
          v145 = v144 + 256;
          sub_14038CFC0(v144);
          v144 = v145;
        }
LABEL_114:
        v39 = v244;
        v146 = *((_QWORD *)v244 + 21);
        if ( v146 )
          sub_140001660(*v235, v146 << 8, 8);
        v147 = *(_QWORD *)v213;
        v189 = *(_OWORD *)&v213[8];
        v190 = *(_OWORD *)&v213[24];
        v191 = *(_OWORD *)&v213[40];
        v192 = *(_OWORD *)&v213[56];
        v193 = *(_OWORD *)&v213[72];
        v194 = *(_OWORD *)&v213[88];
        v195 = *(_OWORD *)&v213[104];
        v196 = *(_QWORD *)&v213[120];
        *(_BYTE *)v243 = 1;
        if ( v147 == -1 )
          goto LABEL_123;
        *(_QWORD *)v197 = v147;
        *(_OWORD *)&v197[8] = v189;
        *(_OWORD *)&v197[24] = v190;
        *(_OWORD *)&v197[40] = v191;
        *(_OWORD *)&v197[56] = v192;
        *(_OWORD *)&v197[72] = v193;
        *(_OWORD *)&v197[88] = v194;
        *(_OWORD *)&v197[104] = v195;
        *(_QWORD *)&v197[120] = v196;
        sub_140D138A0((__int64)v241);
LABEL_36:
        v39 = v244;
        *((_BYTE *)v244 + 1873) = 0;
        a1[7] = *(_OWORD *)&v197[112];
        a1[6] = *(_OWORD *)&v197[96];
        a1[5] = *(_OWORD *)&v197[80];
        a1[4] = *(_OWORD *)&v197[64];
        v40 = *(_OWORD *)v197;
        v41 = *(_OWORD *)&v197[16];
        v42 = *(_OWORD *)&v197[32];
        a1[3] = *(_OWORD *)&v197[48];
        a1[2] = v42;
        a1[1] = v41;
        *a1 = v40;
        result = 1;
        goto LABEL_124;
      }
LABEL_110:
      v233 = v26;
      v232 = v25;
      sub_140402280((__int64)(v76 + 15));
      v25 = (__int64)v241;
      goto LABEL_111;
    }
    v46 = v244;
    v35 = v244 + 25;
    sub_1418F44E0((__m128i *)v244 + 25, (const __m128i *)&v149, 0x100u);
    *((_QWORD *)v46 + 82) = v35;
    *((_QWORD *)v46 + 83) = v45;
    v34 = *((_QWORD *)v46 + 20);
    v36 = *((_QWORD *)v46 + 24);
    v37 = (__int64)v46 + 200;
    *((_QWORD *)v46 + 104) = v34;
    *((_QWORD *)v46 + 105) = v35;
    *((_QWORD *)v46 + 106) = v36;
    *((_QWORD *)v46 + 107) = (char *)v46 + 200;
    v32 = (char *)v46 + 888;
    *((_BYTE *)v46 + 888) = 0;
    v33 = (__int64)(v46 + 52);
    v14 = v243;
LABEL_40:
    v47 = 8LL * (*((_BYTE *)v35 + 254) != 2) + 12;
    v48 = &xmmword_141A47FEC;
    if ( *((_BYTE *)v35 + 254) == 2 )
      v48 = (__int128 *)&unk_141A47FE0;
    v49 = *((_QWORD *)v35 + 7);
    v50 = *((_QWORD *)v35 + 8);
    v228 = v14;
    v227 = (__int64)v241;
    v240 = v32;
    v226 = v32;
    v225 = v33;
    sub_140EF68B0((unsigned int)&v206, v49, v50, (_DWORD)v48, v47, 0);
    v246 = (__int128 *)v33;
    v243 = v14;
    if ( v206 )
    {
      v242 = (__int128 *)v207;
      LOWORD(v51) = 400;
      v218 = *((_QWORD *)&v207 + 1);
      sub_140DAFCE0((unsigned int)v214, v51, DWORD2(v207), v208, (__int64)aProxyUpstream, 14);
      *(_OWORD *)&v229[112] = *(_OWORD *)&v214[112];
      *(_OWORD *)&v229[96] = *(_OWORD *)&v214[96];
      *(_OWORD *)&v229[80] = *(_OWORD *)&v214[80];
      *(_OWORD *)&v229[64] = *(_OWORD *)&v214[64];
      *(_OWORD *)&v229[48] = *(_OWORD *)&v214[48];
      *(_OWORD *)&v229[32] = *(_OWORD *)&v214[32];
      *(_OWORD *)&v229[16] = *(_OWORD *)&v214[16];
      *(_OWORD *)v229 = *(_OWORD *)v214;
      if ( v242 )
        sub_140001660(v218, v242, 1);
      v52 = 5;
      v53 = v244;
      goto LABEL_92;
    }
    v54 = v244;
    *((_QWORD *)v244 + 110) = v208;
    v54[54] = v207;
    v55 = (char *)(v37 + 8);
    v56 = *((_BYTE *)v35 + 254);
    if ( *(_DWORD *)v37 == 1 )
      break;
    if ( v56 != 2 )
    {
      v70 = *((_QWORD *)v244 + 109);
      v71 = *((_QWORD *)v244 + 110);
      v72 = *v55;
      switch ( v72 )
      {
        case 0:
          break;
        case 1:
          v214[1] = *(_BYTE *)(v37 + 9);
          break;
        case 2:
          *(_OWORD *)&v214[8] = *(_OWORD *)(v37 + 16);
          break;
        case 3:
          v239 = v243;
          v238 = (__int64)v241;
          v237 = v240;
          v236 = (__int64)v246;
          v242 = (__int128 *)v71;
          sub_1416AC440(&v214[8], v37 + 16);
          v71 = (__int64)v242;
          break;
        case 4:
          v242 = *((__int128 **)v244 + 110);
          v79 = *(_QWORD *)(v37 + 24);
          v80 = *(_QWORD *)(v37 + 32);
          v239 = v243;
          v238 = (__int64)v241;
          v237 = v240;
          v236 = (__int64)v246;
          sub_1403918C0(&v214[8], v79, v80);
          v71 = (__int64)v242;
          break;
        case 5:
          v239 = v243;
          v238 = (__int64)v241;
          v237 = v240;
          v236 = (__int64)v246;
          v242 = (__int128 *)v71;
          sub_140E8D7E0(&v214[8], v37 + 16);
          v71 = (__int64)v242;
          break;
      }
      v214[0] = v72;
      v86 = *(_OWORD *)&v214[16];
      v161 = *(_OWORD *)&v214[16];
      v87 = *(_OWORD *)v214;
      v160 = *(_OWORD *)v214;
      v88 = v158;
      v89 = v159;
      v3 = v244;
      v244[60] = v162;
      v3[59] = v86;
      v3[58] = v87;
      v3[57] = v89;
      v3[56] = v88;
      *((_QWORD *)v3 + 122) = v70;
      *((_QWORD *)v3 + 123) = v71;
      *((_QWORD *)v3 + 127) = v34;
      *((_QWORD *)v3 + 128) = v35;
      *((_QWORD *)v3 + 129) = v36;
      *((_BYTE *)v3 + 1041) = 0;
LABEL_74:
      v242 = v3 + 56;
      sub_140D3D090((__int64)v214, (__int64)(v3 + 56), (__int64)v235);
      v52 = *(_QWORD *)v214;
      if ( *(_QWORD *)v214 == -1 )
      {
        v85 = 4;
        goto LABEL_121;
      }
      goto LABEL_70;
    }
    v60 = *((_QWORD *)v35 + 13);
    v61 = *((_QWORD *)v35 + 14);
    v239 = v14;
    v238 = (__int64)v241;
    v237 = v240;
    v236 = (__int64)v246;
    sub_140315080(&v170, v37 + 8, v60, v61);
    v62 = *((_QWORD *)v244 + 109);
    v63 = *((_QWORD *)v244 + 110);
    v64 = *v55;
    switch ( v64 )
    {
      case 0:
        break;
      case 1:
        v214[1] = *(_BYTE *)(v37 + 9);
        break;
      case 2:
        *(_OWORD *)&v214[8] = *(_OWORD *)(v37 + 16);
        break;
      case 3:
        v242 = *((__int128 **)v244 + 110);
        sub_1416AC440(&v214[8], v37 + 16);
        v63 = (__int64)v242;
        break;
      case 4:
        v242 = *((__int128 **)v244 + 110);
        sub_1403918C0(&v214[8], *(_QWORD *)(v37 + 24), *(_QWORD *)(v37 + 32));
        v63 = (__int64)v242;
        break;
      case 5:
        v242 = *((__int128 **)v244 + 110);
        sub_140E8D7E0(&v214[8], v37 + 16);
        v63 = (__int64)v242;
        break;
    }
    v214[0] = v64;
    v90 = v170;
    v91 = v171;
    v185 = v170;
    v186 = v171;
    v188 = *(_OWORD *)&v214[16];
    v92 = *(_OWORD *)v214;
    v187 = *(_OWORD *)v214;
    v3 = v244;
    v244[63] = *(_OWORD *)&v214[16];
    v3[62] = v92;
    v3[61] = v91;
    v3[60] = v90;
    v93 = v181;
    v94 = v182;
    v95 = v183;
    v3[59] = v184;
    v3[58] = v95;
    v3[57] = v94;
    v3[56] = v93;
    *((_QWORD *)v3 + 128) = v62;
    *((_QWORD *)v3 + 129) = v63;
    *((_QWORD *)v3 + 133) = v34;
    *((_QWORD *)v3 + 134) = v35;
    *((_QWORD *)v3 + 135) = v36;
    *(_WORD *)((char *)v3 + 1093) = 0;
LABEL_84:
    v242 = v3 + 56;
    sub_140D38BA0((__int64)v214, v3 + 56, v235);
    v52 = *(_QWORD *)v214;
    if ( *(_QWORD *)v214 == -1 )
    {
      v85 = 3;
      goto LABEL_121;
    }
LABEL_89:
    *(_OWORD *)&v229[112] = *(_OWORD *)&v214[120];
    *(_OWORD *)&v229[96] = *(_OWORD *)&v214[104];
    *(_OWORD *)&v229[80] = *(_OWORD *)&v214[88];
    *(_OWORD *)&v229[64] = *(_OWORD *)&v214[72];
    *(_OWORD *)&v229[48] = *(_OWORD *)&v214[56];
    *(_OWORD *)&v229[32] = *(_OWORD *)&v214[40];
    *(_OWORD *)&v229[16] = *(_OWORD *)&v214[24];
    *(_OWORD *)v229 = *(_OWORD *)&v214[8];
    v212 = v215;
    v239 = v243;
    v238 = (__int64)v241;
    v237 = v240;
    v236 = (__int64)v246;
    sub_140D127F0((__int64)v242);
LABEL_90:
    v53 = v244;
    v102 = *((_QWORD *)v244 + 108);
    if ( v102 )
      sub_140001660(*((_QWORD *)v244 + 109), v102, 1);
LABEL_92:
    v103 = v246;
    v179 = *(_OWORD *)&v229[112];
    v178 = *(_OWORD *)&v229[96];
    v177 = *(_OWORD *)&v229[80];
    v176 = *(_OWORD *)&v229[64];
    v175 = *(_OWORD *)&v229[48];
    v174 = *(_OWORD *)&v229[32];
    v173 = *(_OWORD *)&v229[16];
    v172 = *(_OWORD *)v229;
    v180 = v212;
    *((_BYTE *)v53 + 888) = 1;
    *((_QWORD *)v53 + 84) = v52;
    *(__int128 *)((char *)v53 + 792) = v179;
    *(__int128 *)((char *)v53 + 776) = v178;
    *(__int128 *)((char *)v53 + 760) = v177;
    *(__int128 *)((char *)v53 + 744) = v176;
    v104 = v172;
    v105 = v173;
    v106 = v174;
    *(__int128 *)((char *)v53 + 728) = v175;
    *(__int128 *)((char *)v53 + 712) = v106;
    *(__int128 *)((char *)v53 + 696) = v105;
    *(__int128 *)((char *)v53 + 680) = v104;
    *(__int128 *)((char *)v53 + 808) = v180;
    v231 = v243;
    v230 = (__int64)v241;
    sub_140D12720((__int64)v103);
    v3 = v244;
    v107 = *((_QWORD *)v244 + 84);
    v108 = v107 < 3;
    v109 = v107 - 3;
    v110 = 1;
    if ( !v108 )
      v110 = v109;
    if ( v110 != 1 )
    {
      v130 = (__int128 *)((char *)v244 + 680);
      if ( !v110 )
      {
        *(_OWORD *)&v214[112] = *(__int128 *)((char *)v244 + 792);
        *(_OWORD *)&v214[96] = *(__int128 *)((char *)v244 + 776);
        *(_OWORD *)&v214[80] = *(__int128 *)((char *)v244 + 760);
        *(_OWORD *)&v214[64] = *(__int128 *)((char *)v244 + 744);
        v131 = *v130;
        v132 = *(__int128 *)((char *)v244 + 696);
        v133 = *(__int128 *)((char *)v244 + 712);
        *(_OWORD *)&v214[48] = *(__int128 *)((char *)v244 + 728);
        *(_OWORD *)&v214[32] = v133;
        *(_OWORD *)&v214[16] = v132;
        *(_OWORD *)v214 = v131;
        sub_140DBC820(
          *((_QWORD *)v244 + 20) + 8LL,
          *(_QWORD *)(*((_QWORD *)v244 + 82) + 8LL),
          *(_QWORD *)(*((_QWORD *)v244 + 82) + 16LL));
        *(_OWORD *)&v213[112] = *(_OWORD *)&v214[112];
        *(_OWORD *)&v213[96] = *(_OWORD *)&v214[96];
        *(_OWORD *)&v213[80] = *(_OWORD *)&v214[80];
        *(_OWORD *)&v213[64] = *(_OWORD *)&v214[64];
        *(_OWORD *)&v213[48] = *(_OWORD *)&v214[48];
        *(_OWORD *)&v213[32] = *(_OWORD *)&v214[32];
        *(_OWORD *)&v213[16] = *(_OWORD *)&v214[16];
        *(_OWORD *)v213 = *(_OWORD *)v214;
        goto LABEL_109;
      }
      v134 = *v130;
      v135 = *(__int128 *)((char *)v244 + 696);
      v136 = *(__int128 *)((char *)v244 + 712);
      v137 = *(__int128 *)((char *)v244 + 728);
      v138 = *(__int128 *)((char *)v244 + 744);
      v139 = *(__int128 *)((char *)v244 + 760);
      v140 = *(__int128 *)((char *)v244 + 776);
      v103[7] = *(__int128 *)((char *)v244 + 792);
      v103[6] = v140;
      v103[5] = v139;
      v103[4] = v138;
      v103[3] = v137;
      v103[2] = v136;
      v103[1] = v135;
      *v103 = v134;
      *((_BYTE *)v3 + 1296) = 0;
LABEL_107:
      v246 = v3 + 52;
      sub_140D442B0(v214, v3 + 52, v235);
      if ( *(_DWORD *)v214 != -1 )
      {
        *(_OWORD *)&v213[112] = *(_OWORD *)&v214[112];
        *(_OWORD *)&v213[96] = *(_OWORD *)&v214[96];
        *(_OWORD *)&v213[80] = *(_OWORD *)&v214[80];
        *(_OWORD *)&v213[64] = *(_OWORD *)&v214[64];
        *(_OWORD *)&v213[48] = *(_OWORD *)&v214[48];
        *(_OWORD *)&v213[32] = *(_OWORD *)&v214[32];
        *(_OWORD *)&v213[16] = *(_OWORD *)&v214[16];
        *(_OWORD *)v213 = *(_OWORD *)v214;
        v231 = v243;
        v230 = (__int64)v241;
        sub_140D13740((__int64)v246);
LABEL_109:
        v141 = v244;
        sub_14038CFC0(v244 + 25);
        v76 = v141;
        v142 = *((_DWORD *)v141 + 60) == -1;
        v25 = (__int64)v241;
        v26 = v243;
        if ( v142 )
          goto LABEL_111;
        goto LABEL_110;
      }
      v38 = 4;
LABEL_119:
      v148 = (char *)v243;
      goto LABEL_122;
    }
    *(_OWORD *)&v214[112] = v244[49];
    *(_OWORD *)&v214[96] = v244[48];
    *(_OWORD *)&v214[80] = v244[47];
    *(_OWORD *)&v214[64] = v244[46];
    v111 = v244[42];
    v112 = v244[43];
    v113 = v244[44];
    *(_OWORD *)&v214[48] = v244[45];
    *(_OWORD *)&v214[32] = v113;
    *(_OWORD *)&v214[16] = v112;
    *(_OWORD *)v214 = v111;
    *(_QWORD *)&v182 = *((_QWORD *)v244 + 102);
    v181 = v244[50];
    v114 = *((_QWORD *)v244 + 20);
    v115 = *((_QWORD *)v244 + 82);
    v116 = *(_QWORD *)(v115 + 8);
    v117 = *(_QWORD *)(v115 + 16);
    v245 = 1;
    sub_141406CE0(v229);
    v118 = v114 + 8;
    v119 = (*(int *)v229 >> 13) - 1;
    v120 = 0;
    if ( *(int *)v229 >> 13 <= 0 )
    {
      v121 = (1 - (*(int *)v229 >> 13)) / 0x190u + 1;
      v119 += 400 * v121;
      v120 = -146097 * v121;
    }
    v245 = 1;
    *(_QWORD *)&v167[0] = sub_140DBC550(
                            v118,
                            v116,
                            v117,
                            1000
                          * (*(unsigned int *)&v229[4]
                           + 86400LL
                           * (((v119 / 100) >> 2)
                            + ((1461 * v119) >> 2)
                            + v120
                            + ((*(_DWORD *)v229 >> 4) & 0x1FF)
                            - v119 / 100
                            - 719163))
                          + *(unsigned int *)&v229[8] / 0xF4240uLL);
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v198 = *((_QWORD *)v244 + 82);
      *((_QWORD *)&v198 + 1) = sub_1400015F0;
      *(_QWORD *)&v199 = (char *)v244 + 664;
      *((_QWORD *)&v199 + 1) = sub_1416BCB10;
      *(_QWORD *)&v200 = v244 + 23;
      *((_QWORD *)&v200 + 1) = sub_1416BCB10;
      *(_QWORD *)&v201 = v167;
      *((_QWORD *)&v201 + 1) = sub_1416BCBE0;
      *(_QWORD *)&v202 = &v181;
      *((_QWORD *)&v202 + 1) = sub_1400015F0;
      *(_QWORD *)&v229[48] = 2;
      *(_QWORD *)&v229[56] = aCodexmateLibCo_8;
      *(_QWORD *)&v229[64] = 40;
      *(_QWORD *)&v229[80] = &unk_141A48328;
      *(_QWORD *)&v229[88] = &v198;
      *(_QWORD *)v229 = 0;
      *(_QWORD *)&v229[8] = aCodexmateLibCo_8;
      *(_OWORD *)&v229[16] = 0x28u;
      *(_QWORD *)&v229[32] = aSrcCoreRelayPr_0;
      *(_QWORD *)&v229[40] = 30;
      *(_QWORD *)&v229[72] = 0x5AF00000001LL;
      v245 = 1;
      sub_1414D53A0(&v234, v229);
    }
    v122 = *((_QWORD *)v244 + 20);
    v123 = *((_QWORD *)v244 + 82);
    v124 = *(_QWORD *)(v123 + 8);
    v125 = *(_QWORD *)(v123 + 16);
    v245 = 1;
    sub_140DAE450(v122, v124, v125, DWORD2(v181), v182);
    v246 = v244 + 15;
    if ( *((_DWORD *)v244 + 60) != -1 )
      sub_140402280((__int64)v246);
    v126 = v246;
    v246[7] = *(_OWORD *)&v214[112];
    v126[6] = *(_OWORD *)&v214[96];
    v126[5] = *(_OWORD *)&v214[80];
    v126[4] = *(_OWORD *)&v214[64];
    v127 = *(_OWORD *)v214;
    v128 = *(_OWORD *)&v214[16];
    v129 = *(_OWORD *)&v214[32];
    v126[3] = *(_OWORD *)&v214[48];
    v126[2] = v129;
    v126[1] = v128;
    *v126 = v127;
    if ( (_QWORD)v181 )
      sub_140001660(*((_QWORD *)&v181 + 1), v181, 1);
    v3 = v244;
    sub_14038CFC0(v244 + 25);
    v18 = *((_QWORD *)v3 + 47);
    v19 = *((_QWORD *)v3 + 48);
  }
  if ( v56 == 2 )
  {
    v57 = *((_QWORD *)v244 + 109);
    v58 = *((_QWORD *)v244 + 110);
    v59 = *v55;
    switch ( v59 )
    {
      case 0:
        break;
      case 1:
        v214[1] = *(_BYTE *)(v37 + 9);
        break;
      case 2:
        *(_OWORD *)&v214[8] = *(_OWORD *)(v37 + 16);
        break;
      case 3:
        v239 = v243;
        v238 = (__int64)v241;
        v237 = v240;
        v236 = (__int64)v246;
        v242 = (__int128 *)v58;
        sub_1416AC440(&v214[8], v37 + 16);
        v58 = (__int64)v242;
        break;
      case 4:
        v242 = *((__int128 **)v244 + 110);
        v77 = *(_QWORD *)(v37 + 24);
        v78 = *(_QWORD *)(v37 + 32);
        v239 = v243;
        v238 = (__int64)v241;
        v237 = v240;
        v236 = (__int64)v246;
        sub_1403918C0(&v214[8], v77, v78);
        v58 = (__int64)v242;
        break;
      case 5:
        v239 = v243;
        v238 = (__int64)v241;
        v237 = v240;
        v236 = (__int64)v246;
        v242 = (__int128 *)v58;
        sub_140E8D7E0(&v214[8], v37 + 16);
        v58 = (__int64)v242;
        break;
    }
    v214[0] = v59;
    v81 = *(_OWORD *)&v214[16];
    v167[3] = *(_OWORD *)&v214[16];
    v82 = *(_OWORD *)v214;
    v167[2] = *(_OWORD *)v214;
    v83 = v167[0];
    v84 = v167[1];
    v3 = v244;
    v244[60] = v167[4];
    v3[59] = v81;
    v3[58] = v82;
    v3[57] = v84;
    v3[56] = v83;
    *((_QWORD *)v3 + 122) = v57;
    *((_QWORD *)v3 + 123) = v58;
    *((_QWORD *)v3 + 127) = v34;
    *((_QWORD *)v3 + 128) = v35;
    *((_QWORD *)v3 + 129) = v36;
    *((_BYTE *)v3 + 1041) = 0;
LABEL_69:
    v242 = v3 + 56;
    sub_140D3D090((__int64)v214, (__int64)(v3 + 56), (__int64)v235);
    v52 = *(_QWORD *)v214;
    if ( *(_QWORD *)v214 == -1 )
    {
      v85 = 5;
      goto LABEL_121;
    }
LABEL_70:
    *(_OWORD *)&v229[112] = *(_OWORD *)&v214[120];
    *(_OWORD *)&v229[96] = *(_OWORD *)&v214[104];
    *(_OWORD *)&v229[80] = *(_OWORD *)&v214[88];
    *(_OWORD *)&v229[64] = *(_OWORD *)&v214[72];
    *(_OWORD *)&v229[48] = *(_OWORD *)&v214[56];
    *(_OWORD *)&v229[32] = *(_OWORD *)&v214[40];
    *(_OWORD *)&v229[16] = *(_OWORD *)&v214[24];
    *(_OWORD *)v229 = *(_OWORD *)&v214[8];
    v212 = v215;
    v239 = v243;
    v238 = (__int64)v241;
    v237 = v240;
    v236 = (__int64)v246;
    sub_140D12D70((__int64)v242);
    goto LABEL_90;
  }
  v65 = *((_QWORD *)v35 + 13);
  v66 = *((_QWORD *)v35 + 14);
  v239 = v14;
  v238 = (__int64)v241;
  v237 = v240;
  v236 = (__int64)v246;
  sub_140310F30(&v168, v37 + 8, v65, v66);
  v67 = *((_QWORD *)v244 + 109);
  v68 = *((_QWORD *)v244 + 110);
  v69 = *v55;
  switch ( v69 )
  {
    case 0:
      break;
    case 1:
      v214[1] = *(_BYTE *)(v37 + 9);
      break;
    case 2:
      *(_OWORD *)&v214[8] = *(_OWORD *)(v37 + 16);
      break;
    case 3:
      v242 = *((__int128 **)v244 + 110);
      sub_1416AC440(&v214[8], v37 + 16);
      v68 = (__int64)v242;
      break;
    case 4:
      v242 = *((__int128 **)v244 + 110);
      sub_1403918C0(&v214[8], *(_QWORD *)(v37 + 24), *(_QWORD *)(v37 + 32));
      v68 = (__int64)v242;
      break;
    case 5:
      v242 = *((__int128 **)v244 + 110);
      sub_140E8D7E0(&v214[8], v37 + 16);
      v68 = (__int64)v242;
      break;
  }
  v214[0] = v69;
  v96 = v168;
  v97 = v169;
  v202 = v168;
  v203 = v169;
  v205 = *(_OWORD *)&v214[16];
  v98 = *(_OWORD *)v214;
  v204 = *(_OWORD *)v214;
  v3 = v244;
  v244[63] = *(_OWORD *)&v214[16];
  v3[62] = v98;
  v3[61] = v97;
  v3[60] = v96;
  v99 = v198;
  v100 = v199;
  v101 = v200;
  v3[59] = v201;
  v3[58] = v101;
  v3[57] = v100;
  v3[56] = v99;
  *((_QWORD *)v3 + 128) = v67;
  *((_QWORD *)v3 + 129) = v68;
  *((_QWORD *)v3 + 133) = v34;
  *((_QWORD *)v3 + 134) = v35;
  *((_QWORD *)v3 + 135) = v36;
  *(_WORD *)((char *)v3 + 1093) = 256;
LABEL_88:
  v242 = v3 + 56;
  sub_140D38BA0((__int64)v214, v3 + 56, v235);
  v52 = *(_QWORD *)v214;
  if ( *(_QWORD *)v214 != -1 )
    goto LABEL_89;
  v85 = 6;
LABEL_121:
  v148 = (char *)v243;
  *v240 = v85;
  v38 = 3;
LABEL_122:
  *v148 = v38;
  v39 = v244;
LABEL_123:
  *(_QWORD *)a1 = -1;
  result = 3;
LABEL_124:
  *((_BYTE *)v39 + 1872) = result;
  return result;
}
