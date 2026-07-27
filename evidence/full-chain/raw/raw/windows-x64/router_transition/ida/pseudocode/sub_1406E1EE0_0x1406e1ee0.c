// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1406E1EE0(
        __int128 *a1,
        void *a2,
        __int64 a3,
        char a4,
        __int128 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8,
        unsigned __int8 *a9)
{
  __int8 v9; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  int v14; // edx
  unsigned int v15; // edx
  __m512i *v16; // r12
  __int64 v17; // rdx
  char v18; // al
  __int64 i; // rcx
  char v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  int v25; // edx
  __int64 v26; // r13
  __int64 v27; // rax
  unsigned int v28; // edx
  int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  char v33; // r15
  char v34; // di
  int v35; // esi
  int v36; // edx
  int v37; // r12d
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int32 v41; // edi
  __int8 v42; // si
  unsigned __int64 v43; // rax
  unsigned int v44; // edx
  bool v45; // zf
  bool v46; // al
  int v47; // r9d
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // r12
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rsi
  unsigned __int64 v56; // rax
  unsigned int v57; // edx
  bool v58; // al
  char v59; // r15
  __int64 v60; // r15
  _QWORD *v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdi
  _QWORD *v65; // r15
  __int64 result; // rax
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int128 v70; // xmm3
  _OWORD *v71; // rax
  __int64 v72; // rax
  unsigned int v73; // edx
  __int128 *v74; // rax
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  __int128 *v78; // rax
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm2
  __int64 v82; // rdi
  __int64 v83; // rsi
  _QWORD *v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // r9
  __int128 *v87; // rax
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm2
  char v91; // r15
  bool v92; // r12
  __int64 v93; // rdi
  _QWORD *v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rcx
  __int128 *v99; // rax
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  __int64 v103; // rbx
  _QWORD *v104; // r14
  __int64 v105; // rdx
  __int128 *v106; // rax
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  __int128 v109; // xmm2
  __int64 v110; // rsi
  __int64 v111; // rax
  unsigned int v112; // edx
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm2
  __int128 v116; // xmm3
  __int128 v117; // xmm4
  __int128 *v118; // rcx
  __int64 v119; // rax
  unsigned int v120; // edx
  __int128 v121; // xmm0
  __int128 v122; // xmm1
  __int128 v123; // xmm2
  __int128 v124; // xmm3
  __int128 v125; // xmm4
  __int128 *v126; // rcx
  _QWORD *v127; // rsi
  __int64 v128; // rdx
  __int64 v129; // rax
  unsigned int v130; // edx
  __int128 v131; // xmm0
  __int128 v132; // xmm1
  __int128 v133; // xmm2
  __int64 v134; // [rsp+48h] [rbp-38h]
  _BYTE v135[24]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v136[24]; // [rsp+68h] [rbp-18h] BYREF
  __m512i v137; // [rsp+80h] [rbp+0h] BYREF
  __int128 v138; // [rsp+C0h] [rbp+40h]
  __int128 v139; // [rsp+D0h] [rbp+50h]
  __int128 v140; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v141; // [rsp+F0h] [rbp+70h]
  __int128 v142; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v143; // [rsp+108h] [rbp+88h]
  __int128 v144; // [rsp+110h] [rbp+90h] BYREF
  __int64 v145; // [rsp+120h] [rbp+A0h]
  __int128 v146; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v147; // [rsp+138h] [rbp+B8h]
  __int128 v148; // [rsp+140h] [rbp+C0h]
  __int128 v149; // [rsp+150h] [rbp+D0h]
  __int128 v150; // [rsp+160h] [rbp+E0h]
  __int64 v151; // [rsp+170h] [rbp+F0h]
  __m256i v152; // [rsp+180h] [rbp+100h] BYREF
  __int128 v153; // [rsp+1A0h] [rbp+120h]
  __int128 v154; // [rsp+1B0h] [rbp+130h]
  __int128 v155; // [rsp+1C0h] [rbp+140h]
  __int128 v156; // [rsp+1D0h] [rbp+150h]
  __int64 v157; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v158; // [rsp+1E8h] [rbp+168h]
  __int64 v159; // [rsp+1F8h] [rbp+178h] BYREF
  __int128 v160; // [rsp+200h] [rbp+180h]
  __int64 v161; // [rsp+210h] [rbp+190h] BYREF
  __int128 v162; // [rsp+218h] [rbp+198h]
  __int128 v163; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v164; // [rsp+238h] [rbp+1B8h]
  __int64 v165; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v166; // [rsp+248h] [rbp+1C8h]
  __int64 v167; // [rsp+258h] [rbp+1D8h] BYREF
  __int128 v168; // [rsp+260h] [rbp+1E0h]
  __int64 v169; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v170; // [rsp+278h] [rbp+1F8h]
  __int64 v171; // [rsp+288h] [rbp+208h] BYREF
  __int128 v172; // [rsp+290h] [rbp+210h]
  __int64 v173; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v174; // [rsp+2A8h] [rbp+228h]
  __int64 v175; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 v176; // [rsp+2C0h] [rbp+240h]
  __int64 v177; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v178; // [rsp+2D8h] [rbp+258h]
  __int64 v179; // [rsp+2E8h] [rbp+268h] BYREF
  __int128 v180; // [rsp+2F0h] [rbp+270h]
  __int64 v181; // [rsp+300h] [rbp+280h] BYREF
  int v182; // [rsp+308h] [rbp+288h]
  __int128 v183; // [rsp+310h] [rbp+290h] BYREF
  __int64 v184; // [rsp+320h] [rbp+2A0h]
  __int64 v185; // [rsp+328h] [rbp+2A8h]
  __int64 v186; // [rsp+330h] [rbp+2B0h]
  unsigned __int8 *v187; // [rsp+338h] [rbp+2B8h]
  _BYTE v188[96]; // [rsp+340h] [rbp+2C0h] BYREF
  _QWORD v189[2]; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v190; // [rsp+3B0h] [rbp+330h] BYREF
  int v191; // [rsp+3B8h] [rbp+338h]
  __int64 v192; // [rsp+3C0h] [rbp+340h] BYREF
  __int64 v193; // [rsp+3C8h] [rbp+348h]
  __int64 v194; // [rsp+3D0h] [rbp+350h]
  _BYTE *v195; // [rsp+3D8h] [rbp+358h]
  unsigned __int64 v196; // [rsp+3E0h] [rbp+360h]
  __int64 v197; // [rsp+3E8h] [rbp+368h]
  __int64 v198; // [rsp+3F0h] [rbp+370h]
  __int64 v199; // [rsp+3F8h] [rbp+378h]
  __int128 v200; // [rsp+400h] [rbp+380h] BYREF
  __int128 v201; // [rsp+410h] [rbp+390h]
  __int128 v202; // [rsp+420h] [rbp+3A0h]
  __int128 v203; // [rsp+430h] [rbp+3B0h]
  __int128 v204; // [rsp+440h] [rbp+3C0h]
  __int128 v205; // [rsp+450h] [rbp+3D0h]
  __int128 v206; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v207; // [rsp+470h] [rbp+3F0h]
  __int64 v208; // [rsp+480h] [rbp+400h]
  __int64 v209; // [rsp+488h] [rbp+408h]
  __m256i v210; // [rsp+490h] [rbp+410h] BYREF
  __int128 v211; // [rsp+4B0h] [rbp+430h]
  __int128 v212; // [rsp+4C0h] [rbp+440h]
  __int128 v213; // [rsp+4D0h] [rbp+450h]
  __int128 v214; // [rsp+4E0h] [rbp+460h]
  unsigned int v215; // [rsp+4FCh] [rbp+47Ch]
  __m256i v216; // [rsp+500h] [rbp+480h] BYREF
  __int128 v217; // [rsp+520h] [rbp+4A0h]
  __int128 v218; // [rsp+530h] [rbp+4B0h]
  __int128 v219; // [rsp+540h] [rbp+4C0h]
  __int128 v220; // [rsp+550h] [rbp+4D0h]
  __int32 v221; // [rsp+568h] [rbp+4E8h] BYREF
  __int8 v222; // [rsp+56Ch] [rbp+4ECh] BYREF
  __int128 v223; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v224; // [rsp+580h] [rbp+500h]
  _BYTE *v225; // [rsp+590h] [rbp+510h]
  __int128 *v226; // [rsp+598h] [rbp+518h]
  __m512i v227; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v228; // [rsp+5E0h] [rbp+560h]
  __int128 v229; // [rsp+5F0h] [rbp+570h]
  _BYTE v230[96]; // [rsp+600h] [rbp+580h] BYREF
  __m256i v231; // [rsp+660h] [rbp+5E0h]
  __int128 v232; // [rsp+680h] [rbp+600h]
  __int128 v233; // [rsp+690h] [rbp+610h]
  __int128 v234; // [rsp+6A0h] [rbp+620h]
  __int128 v235; // [rsp+6B0h] [rbp+630h]
  __m256i FileHandle; // [rsp+6C0h] [rbp+640h] BYREF
  __int128 v237; // [rsp+6E0h] [rbp+660h]
  _BYTE v238[48]; // [rsp+6F0h] [rbp+670h]
  char v239; // [rsp+72Eh] [rbp+6AEh]
  __int8 v240; // [rsp+72Fh] [rbp+6AFh] BYREF
  __m512i v241; // [rsp+730h] [rbp+6B0h] BYREF
  __m256i v242; // [rsp+770h] [rbp+6F0h]
  __int64 v243; // [rsp+790h] [rbp+710h]
  char v244; // [rsp+79Fh] [rbp+71Fh] BYREF
  void *Buf; // [rsp+7A0h] [rbp+720h]
  char v246; // [rsp+7AFh] [rbp+72Fh]
  __int64 v247; // [rsp+7B0h] [rbp+730h]
  char v248; // [rsp+7BAh] [rbp+73Ah]
  char v249; // [rsp+7BBh] [rbp+73Bh]
  char v250; // [rsp+7BCh] [rbp+73Ch] BYREF
  char v251; // [rsp+7BDh] [rbp+73Dh]
  char v252; // [rsp+7BEh] [rbp+73Eh] BYREF
  unsigned __int8 v253; // [rsp+7BFh] [rbp+73Fh] BYREF
  __int64 v254; // [rsp+7C0h] [rbp+740h]

  v254 = -2;
  v9 = a3;
  Buf = a2;
  v226 = a1;
  v253 = a3;
  v244 = a4;
  v183 = a5;
  v190 = sub_141471910(a1, a2, a3);
  v191 = v10;
  v13 = sub_141471910(v11, v10, v12);
  v196 = sub_141491390(v13, v14, 12, 0, (__int64)&off_1417874D0);
  v215 = v15;
  *(_QWORD *)v230 = &v244;
  *(_QWORD *)&v230[8] = sub_1407B87B0;
  *(_QWORD *)&v230[16] = &v183;
  *(_QWORD *)&v230[24] = sub_14041F680;
  sub_14149C0F0(&v179, &unk_1417874E8, v230);
  v227.m512i_i8[0] = v9;
  v247 = v180;
  *(_OWORD *)FileHandle.m256i_i8 = v180;
  *(_QWORD *)v230 = &v227;
  *(_QWORD *)&v230[8] = sub_1407B2DA0;
  *(_QWORD *)&v230[16] = &FileHandle;
  *(_QWORD *)&v230[24] = sub_14041F680;
  v16 = &v241;
  sub_14149C0F0(&v241, &unk_141787489, v230);
  sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStart_1, 5, (__int64)&v241);
  LODWORD(v17) = v179;
  if ( v179 )
    sub_140001660(v247, v179, 1);
  v184 = *a6;
  v225 = (_BYTE *)a6[1];
  v208 = a6[2];
  v209 = a6[3];
  v197 = a6[5];
  v198 = a6[4];
  v195 = (_BYTE *)a6[6];
  v185 = *a7;
  v186 = a7[1];
  v187 = (unsigned __int8 *)a7[2];
  v18 = 1;
  for ( i = 0; ; i = (unsigned int)v247 )
  {
    if ( (i & 1) != 0 || (unsigned __int8)v18 > 3u )
    {
      nullsub_1(i);
      v71 = (_OWORD *)sub_140001650(109, 1);
      if ( !v71 )
        sub_1416C2D4B(1, 109);
      *(_OWORD *)((char *)v71 + 93) = *(__int128 *)((char *)&xmmword_141787551 + 13);
      v71[5] = xmmword_141787551;
      v71[4] = xmmword_141787541;
      v71[3] = xmmword_141787531;
      v71[2] = xmmword_141787521;
      qmemcpy(v71, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
      v227.m512i_i64[1] = 109;
      v227.m512i_i64[2] = (__int64)v71;
      v227.m512i_i64[3] = 109;
      v227.m512i_i64[0] = 10;
      v241.m512i_i64[0] = 0;
      *(_OWORD *)&v241.m512i_u64[1] = 1u;
      *(_QWORD *)&v230[16] = 1610612768;
      *(_QWORD *)v230 = v16;
      *(_QWORD *)&v230[8] = &off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v227, v230) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v243 = v241.m512i_i64[1];
      v247 = v241.m512i_i64[0];
      write((int)&FileHandle, Buf, v253);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        v242 = *(__m256i *)&v238[16];
        *(_OWORD *)&v241.m512i_u64[6] = *(_OWORD *)v238;
        *(_OWORD *)&v241.m512i_u64[4] = v237;
        *(__m256i *)v241.m512i_i8 = FileHandle;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v216.m256i_i64[0] = (__int64)v16;
          v216.m256i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v230 = 0;
          *(_QWORD *)&v230[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v230[16] = 0x2Du;
          *(_QWORD *)&v230[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v230[40] = 35;
          *(_QWORD *)&v230[48] = 2;
          *(_QWORD *)&v230[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v230[64] = 45;
          *(_QWORD *)&v230[72] = 0x15F00000001LL;
          *(_QWORD *)&v230[80] = &unk_14178FCF6;
          *(_QWORD *)&v230[88] = &v216;
          sub_1412C36A0(&v252, v230);
        }
        sub_1406CDA20(&v241);
      }
      if ( v247 )
        sub_140001660(v243, v247, 1);
      v241.m512i_i64[0] = 0;
      *(_OWORD *)&v241.m512i_u64[1] = 1u;
      *(_QWORD *)&v230[16] = 1610612768;
      *(_QWORD *)v230 = v16;
      *(_QWORD *)&v230[8] = &off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v227, v230) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      Buf = (void *)v241.m512i_i64[0];
      v216.m256i_i8[0] = v253;
      v247 = v241.m512i_i64[1];
      *(_OWORD *)FileHandle.m256i_i8 = *(_OWORD *)&v241.m512i_u64[1];
      *(_QWORD *)v230 = &v216;
      *(_QWORD *)&v230[8] = sub_1407B2DA0;
      *(_QWORD *)&v230[16] = &FileHandle;
      *(_QWORD *)&v230[24] = sub_14041F680;
      sub_14149C0F0(&v241, &unk_141787489, v230);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aRetryExhausted, 15, (__int64)&v241);
      if ( Buf )
        sub_140001660(v247, Buf, 1);
      goto LABEL_129;
    }
    LOBYTE(v17) = v18 == 3;
    LODWORD(v247) = v17;
    v20 = v18 + 1;
    if ( v18 == 3 )
      v20 = 3;
    v250 = v18;
    write((int)&FileHandle, Buf, v253);
    if ( FileHandle.m256i_i32[0] != -1 )
    {
      v242 = *(__m256i *)&v238[16];
      *(_OWORD *)&v241.m512i_u64[6] = *(_OWORD *)v238;
      *(_OWORD *)&v241.m512i_u64[4] = v237;
      *(__m256i *)v241.m512i_i8 = FileHandle;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v227.m512i_i64[0] = (__int64)v16;
        v227.m512i_i64[1] = (__int64)sub_140B036A0;
        *(_QWORD *)v230 = 0;
        *(_QWORD *)&v230[8] = aCodexmateLibCo_27;
        *(_OWORD *)&v230[16] = 0x2Du;
        *(_QWORD *)&v230[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v230[40] = 35;
        *(_QWORD *)&v230[48] = 2;
        *(_QWORD *)&v230[56] = aCodexmateLibCo_27;
        *(_QWORD *)&v230[64] = 45;
        *(_QWORD *)&v230[72] = 0x15F00000001LL;
        *(_QWORD *)&v230[80] = &unk_14178FCF6;
        *(_QWORD *)&v230[88] = &v227;
        sub_1412C36A0(&v252, v230);
      }
      sub_1406CDA20(v16);
    }
    v181 = sub_141471910(v22, v21, v23);
    v182 = v25;
    if ( !v244 )
    {
      acquire_with_policy((unsigned int)&v137, 5, 0, 0, 0);
      if ( v137.m512i_i32[0] == -1 )
        goto LABEL_18;
LABEL_120:
      v229 = v139;
      v228 = v138;
      v227 = v137;
      v241.m512i_i64[0] = 0;
      *(_OWORD *)&v241.m512i_u64[1] = 1u;
      *(_QWORD *)&v230[16] = 1610612768;
      *(_QWORD *)v230 = v16;
      *(_QWORD *)&v230[8] = &off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v227, v230) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v243 = v241.m512i_i64[1];
      v247 = v241.m512i_i64[0];
      write((int)&FileHandle, Buf, v253);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        v242 = *(__m256i *)&v238[16];
        *(_OWORD *)&v241.m512i_u64[6] = *(_OWORD *)v238;
        *(_OWORD *)&v241.m512i_u64[4] = v237;
        *(__m256i *)v241.m512i_i8 = FileHandle;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v216.m256i_i64[0] = (__int64)v16;
          v216.m256i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v230 = 0;
          *(_QWORD *)&v230[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v230[16] = 0x2Du;
          *(_QWORD *)&v230[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v230[40] = 35;
          *(_QWORD *)&v230[48] = 2;
          *(_QWORD *)&v230[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v230[64] = 45;
          *(_QWORD *)&v230[72] = 0x15F00000001LL;
          *(_QWORD *)&v230[80] = &unk_14178FCF6;
          *(_QWORD *)&v230[88] = &v216;
          sub_1412C36A0(&v252, v230);
        }
        sub_1406CDA20(&v241);
      }
      if ( v247 )
        sub_140001660(v243, v247, 1);
      v72 = sub_141471AC0(&v181);
      *(_OWORD *)v241.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v72 + v73 / 0xF4240uLL;
      *(_QWORD *)v230 = &v250;
      *(_QWORD *)&v230[8] = sub_1414A9660;
      *(_QWORD *)&v230[16] = v16;
      *(_QWORD *)&v230[24] = sub_1414A9600;
      *(_QWORD *)&v230[32] = &v227;
      *(_QWORD *)&v230[40] = sub_140B036A0;
      sub_14149C0F0(&v177, &unk_1417878F4, v230);
      v216.m256i_i8[0] = v253;
      Buf = (void *)v178;
      *(_OWORD *)FileHandle.m256i_i8 = v178;
      *(_QWORD *)v230 = &v216;
      *(_QWORD *)&v230[8] = sub_1407B2DA0;
      *(_QWORD *)&v230[16] = &FileHandle;
      *(_QWORD *)&v230[24] = sub_14041F680;
      sub_14149C0F0(&v241, &unk_141787489, v230);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopFailed, 11, (__int64)&v241);
      if ( v177 )
        sub_140001660(Buf, v177, 1);
LABEL_129:
      result = (__int64)v226;
      v226[5] = v229;
      *(_OWORD *)(result + 64) = v228;
      v67 = *(_OWORD *)v227.m512i_i8;
      v68 = *(_OWORD *)&v227.m512i_u64[2];
      v69 = *(_OWORD *)&v227.m512i_u64[4];
      v70 = *(_OWORD *)&v227.m512i_u64[6];
LABEL_130:
      *(_OWORD *)(result + 48) = v70;
      *(_OWORD *)(result + 32) = v69;
      *(_OWORD *)(result + 16) = v68;
      *(_OWORD *)result = v67;
      return result;
    }
    LOBYTE(v24) = 1;
    acquire_with_policy((unsigned int)&v137, 3, 0, v24, 0);
    if ( v137.m512i_i32[0] != -1 )
      goto LABEL_120;
LABEL_18:
    v26 = (__int64)v16;
    v151 = v137.m512i_i64[7];
    v150 = *(_OWORD *)&v137.m512i_u64[5];
    v149 = *(_OWORD *)&v137.m512i_u64[3];
    v148 = *(_OWORD *)&v137.m512i_u64[1];
    v240 = v137.m512i_i8[56];
    v251 = 1;
    v27 = sub_141471AC0(&v181);
    *(_OWORD *)v241.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v27 + v28 / 0xF4240uLL;
    *(_QWORD *)v230 = &v250;
    *(_QWORD *)&v230[8] = sub_1414A9660;
    *(_QWORD *)&v230[16] = v16;
    *(_QWORD *)&v230[24] = sub_1414A9600;
    *(_QWORD *)&v230[32] = &v240;
    *(_QWORD *)&v230[40] = sub_1414AC660;
    v251 = 1;
    sub_14149C0F0(&v175, &unk_141787591, v230);
    v227.m512i_i8[0] = v253;
    v243 = v176;
    *(_OWORD *)FileHandle.m256i_i8 = v176;
    *(_QWORD *)v230 = &v227;
    *(_QWORD *)&v230[8] = sub_1407B2DA0;
    *(_QWORD *)&v230[16] = &FileHandle;
    *(_QWORD *)&v230[24] = sub_14041F680;
    v29 = (int)v16;
    sub_14149C0F0(v16, &unk_141787489, v230);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopComplete, 13, (__int64)v16);
    if ( v175 )
      sub_140001660(v243, v175, 1);
    v251 = 1;
    write((int)&FileHandle, Buf, v253);
    if ( FileHandle.m256i_i32[0] != -1 )
    {
      v242 = *(__m256i *)&v238[16];
      *(_OWORD *)&v241.m512i_u64[6] = *(_OWORD *)v238;
      *(_OWORD *)&v241.m512i_u64[4] = v237;
      *(__m256i *)v241.m512i_i8 = FileHandle;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v227.m512i_i64[0] = (__int64)v16;
        v227.m512i_i64[1] = (__int64)sub_140B036A0;
        *(_QWORD *)v230 = 0;
        *(_QWORD *)&v230[8] = aCodexmateLibCo_27;
        *(_OWORD *)&v230[16] = 0x2Du;
        *(_QWORD *)&v230[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v230[40] = 35;
        *(_QWORD *)&v230[48] = 2;
        *(_QWORD *)&v230[56] = aCodexmateLibCo_27;
        *(_QWORD *)&v230[64] = 45;
        *(_QWORD *)&v230[72] = 0x15F00000001LL;
        *(_QWORD *)&v230[80] = &unk_14178FCF6;
        *(_QWORD *)&v230[88] = &v227;
        sub_1412C36A0(&v252, v230);
      }
      v251 = 1;
      sub_1406CDA20(v16);
    }
    v33 = v250;
    v34 = v240;
    LOBYTE(v200) = v240;
    BYTE1(v200) = v250;
    v251 = 1;
    v35 = sub_141471910(v31, v30, v32);
    v37 = v36;
    if ( v33 == 1 )
    {
      v210.m256i_i64[0] = v184;
      if ( *v225 )
      {
        v251 = 1;
        reconcile_router_on((__int128 *)v230, v209, v208);
        v38 = *(_QWORD *)v230;
        *(_OWORD *)v227.m512i_i8 = *(_OWORD *)&v230[8];
        *(_OWORD *)&v227.m512i_u64[2] = *(_OWORD *)&v230[24];
        *(_OWORD *)&v227.m512i_u64[4] = *(_OWORD *)&v230[40];
        v227.m512i_i64[6] = *(_QWORD *)&v230[56];
        if ( *(_QWORD *)v230 == -1 )
          goto LABEL_39;
LABEL_30:
        *(_OWORD *)&v238[24] = *(_OWORD *)&v230[80];
        *(_OWORD *)&v238[8] = *(_OWORD *)&v230[64];
        *(_QWORD *)v238 = v227.m512i_i64[6];
        FileHandle = *(__m256i *)v227.m512i_i8;
        v237 = *(_OWORD *)&v227.m512i_u64[4];
        v241.m512i_i64[0] = v38;
        v242.m256i_i64[3] = *(_QWORD *)&v230[88];
        *(_OWORD *)&v242.m256i_u64[1] = *(_OWORD *)&v238[16];
        v241.m512i_i64[7] = v227.m512i_i64[6];
        v242.m256i_i64[0] = *(_QWORD *)&v230[64];
        *(_OWORD *)&v241.m512i_u64[5] = *(_OWORD *)&v227.m512i_u64[4];
        *(_OWORD *)&v241.m512i_u64[3] = *(_OWORD *)&v227.m512i_u64[2];
        *(_OWORD *)&v241.m512i_u64[1] = *(_OWORD *)v227.m512i_i8;
        if ( v38 != -1 )
          goto LABEL_38;
        goto LABEL_40;
      }
      v251 = 1;
      sub_140850400(
        (unsigned int)v230,
        v208,
        v209,
        v197,
        (__int64)aToggle,
        6,
        0,
        v34,
        (__int64)&v210,
        (__int64)&unk_141788208);
    }
    else
    {
      if ( *v225 )
      {
        v251 = 1;
        reconcile_router_on((__int128 *)v230, v209, v208);
        v38 = *(_QWORD *)v230;
        *(_OWORD *)v227.m512i_i8 = *(_OWORD *)&v230[8];
        *(_OWORD *)&v227.m512i_u64[2] = *(_OWORD *)&v230[24];
        *(_OWORD *)&v227.m512i_u64[4] = *(_OWORD *)&v230[40];
        v227.m512i_i64[6] = *(_QWORD *)&v230[56];
        if ( *(_QWORD *)v230 == -1 )
        {
LABEL_39:
          v216 = *(__m256i *)v227.m512i_i8;
          v217 = *(_OWORD *)&v227.m512i_u64[4];
          *(_QWORD *)&v218 = v227.m512i_i64[6];
          sub_14032C050(&v227, &v216.m256i_u64[3]);
          *(_QWORD *)&v230[48] = v218;
          *(_OWORD *)&v230[32] = v217;
          *(__m256i *)v230 = v216;
          *(_QWORD *)&v230[72] = v227.m512i_i64[2];
          *(_OWORD *)&v230[56] = *(_OWORD *)v227.m512i_i8;
          FileHandle = v216;
          v237 = v217;
          *(_QWORD *)v238 = v218;
          *(_QWORD *)&v238[8] = v227.m512i_i64[0];
          *(_OWORD *)&v238[16] = *(_OWORD *)&v230[64];
          v242.m256i_i64[3] = v227.m512i_i64[2];
          *(_OWORD *)&v242.m256i_u64[1] = *(_OWORD *)&v238[8];
          v242.m256i_i64[0] = v218;
          *(_OWORD *)&v241.m512i_u64[6] = v217;
          *(__m256i *)&v241.m512i_u64[2] = v216;
          *(_OWORD *)v241.m512i_i8 = 0xFFFFFFFFFFFFFFFFuLL;
          goto LABEL_40;
        }
        goto LABEL_30;
      }
      v251 = 1;
      sub_140850400((unsigned int)v230, v208, v209, v197, (__int64)&unk_141788236, 13, 0, v34, 0, v134);
    }
    if ( *(_DWORD *)v230 == -1 )
    {
      v242 = *(__m256i *)&v230[56];
      *(_OWORD *)&v241.m512i_u64[6] = *(_OWORD *)&v230[40];
      *(_OWORD *)&v241.m512i_u64[4] = *(_OWORD *)&v230[24];
      *(_OWORD *)&v241.m512i_u64[2] = *(_OWORD *)&v230[8];
      v241.m512i_i64[1] = 1;
      v241.m512i_i64[0] = -1;
    }
    else
    {
      v242 = *(__m256i *)&v230[64];
      v241 = *(__m512i *)v230;
      if ( *(_QWORD *)v230 != -1 )
      {
LABEL_38:
        v227.m512i_i64[0] = v26;
        LOBYTE(v29) = *v195;
        *(_QWORD *)v230 = (char *)&v200 + 1;
        *(_QWORD *)&v230[8] = sub_1414A9660;
        *(_QWORD *)&v230[16] = &v200;
        *(_QWORD *)&v230[24] = sub_1414AC660;
        *(_QWORD *)&v230[32] = &v227;
        *(_QWORD *)&v230[40] = sub_140AFE250;
        sub_14149C0F0(&FileHandle, &unk_14178828B, v230);
        sub_1407DC650(v29, (unsigned int)aReconcile, 9, v35, v37, (__int64)&FileHandle);
        goto LABEL_41;
      }
    }
LABEL_40:
    LOBYTE(v29) = *v195;
    v216.m256i_i64[0] = v241.m512i_i64[4];
    v227.m512i_i64[0] = v242.m256i_i64[3];
    *(_QWORD *)v230 = (char *)&v200 + 1;
    *(_QWORD *)&v230[8] = sub_1414A9660;
    *(_QWORD *)&v230[16] = &v200;
    *(_QWORD *)&v230[24] = sub_1414AC660;
    *(_QWORD *)&v230[32] = &v216;
    *(_QWORD *)&v230[40] = sub_1414AC520;
    *(_QWORD *)&v230[48] = &v227;
    *(_QWORD *)&v230[56] = sub_1414AC520;
    sub_14149C0F0(&FileHandle, &unk_141788243, v230);
    sub_1407DC650(v29, (unsigned int)aReconcile, 9, v35, v37, (__int64)&FileHandle);
LABEL_41:
    *(__m256i *)&v188[64] = v242;
    *(__m512i *)v188 = v241;
    *(_QWORD *)&v230[48] = v151;
    *(_OWORD *)&v230[32] = v150;
    *(_OWORD *)&v230[16] = v149;
    *(_OWORD *)v230 = v148;
    v246 = 1;
    sub_140387CC0(&v152, v230);
    *(_OWORD *)&v230[80] = *(_OWORD *)&v188[80];
    *(_OWORD *)&v230[64] = *(_OWORD *)&v188[64];
    *(_OWORD *)&v230[48] = *(_OWORD *)&v188[48];
    *(_OWORD *)&v230[32] = *(_OWORD *)&v188[32];
    *(_OWORD *)&v230[16] = *(_OWORD *)&v188[16];
    *(_OWORD *)v230 = *(_OWORD *)v188;
    v235 = v156;
    v234 = v155;
    v233 = v154;
    v232 = v153;
    v231 = v152;
    v16 = (__m512i *)v26;
    if ( *(_QWORD *)v188 == -1 )
      break;
    v199 = *(_QWORD *)v188;
    if ( v152.m256i_i64[0] != -1 )
    {
      v205 = *(_OWORD *)&v188[80];
      v204 = *(_OWORD *)&v188[64];
      v203 = *(_OWORD *)&v188[48];
      v202 = *(_OWORD *)&v188[32];
      v201 = *(_OWORD *)&v188[16];
      v200 = *(_OWORD *)v188;
      v214 = v156;
      v213 = v155;
      v212 = v154;
      v211 = v153;
      v210 = v152;
      v241.m512i_i64[0] = (__int64)&v200;
      v241.m512i_i64[1] = (__int64)sub_140B036A0;
      v241.m512i_i64[2] = (__int64)&v210;
      v241.m512i_i64[3] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v146, &unk_1417878C9, &v241);
      *(_OWORD *)&v216.m256i_u64[1] = v146;
      v216.m256i_i64[3] = v147;
      v216.m256i_i64[0] = 10;
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v241.m512i_i64[2] = 1610612768;
      v241.m512i_i64[0] = (__int64)&FileHandle;
      v241.m512i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v216, &v241) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v243 = FileHandle.m256i_i64[1];
      v247 = FileHandle.m256i_i64[0];
      write((int)&v227, Buf, v253);
      if ( v227.m512i_i32[0] != -1 )
      {
        *(_OWORD *)&v238[32] = v229;
        *(_OWORD *)&v238[16] = v228;
        *(_OWORD *)v238 = *(_OWORD *)&v227.m512i_u64[6];
        v237 = *(_OWORD *)&v227.m512i_u64[4];
        FileHandle = *(__m256i *)v227.m512i_i8;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v223 = &FileHandle;
          *((_QWORD *)&v223 + 1) = sub_140B036A0;
          v241.m512i_i64[0] = 0;
          v241.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v241.m512i_u64[2] = 0x2Du;
          v241.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
          v241.m512i_i64[5] = 35;
          v241.m512i_i64[6] = 2;
          v241.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
          v242.m256i_i64[0] = 45;
          v242.m256i_i64[1] = 0x15F00000001LL;
          v242.m256i_i64[2] = (__int64)&unk_14178FCF6;
          v242.m256i_i64[3] = (__int64)&v223;
          sub_1412C36A0(&v252, &v241);
        }
        sub_1406CDA20(&FileHandle);
      }
      if ( v247 )
        sub_140001660(v243, v247, 1);
      v241.m512i_i64[0] = (__int64)&v250;
      v241.m512i_i64[1] = (__int64)sub_1414A9660;
      v241.m512i_i64[2] = (__int64)&v216;
      v241.m512i_i64[3] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v167, &unk_1417876C6, &v241);
      LOBYTE(v223) = v253;
      Buf = (void *)v168;
      *(_OWORD *)v227.m512i_i8 = v168;
      v241.m512i_i64[0] = (__int64)&v223;
      v241.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v241.m512i_i64[2] = (__int64)&v227;
      v241.m512i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&FileHandle, &unk_141787489, &v241);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
      if ( v167 )
        sub_140001660(Buf, v167, 1);
      v74 = v226;
      v226[5] = v220;
      v74[4] = v219;
      v75 = *(_OWORD *)v216.m256i_i8;
      v76 = *(_OWORD *)&v216.m256i_u64[2];
      v77 = v217;
      v74[3] = v218;
      v74[2] = v77;
      v74[1] = v76;
      *v74 = v75;
      sub_1406CDA20(&v210);
      return sub_1406CDA20(&v200);
    }
    v220 = *(_OWORD *)&v188[80];
    v219 = *(_OWORD *)&v188[64];
    v218 = *(_OWORD *)&v188[48];
    v217 = *(_OWORD *)&v188[32];
    v216 = *(__m256i *)v188;
    v41 = v231.m256i_i32[2];
    v42 = v231.m256i_i8[12];
    v43 = sub_141471910(*(_QWORD *)v188, v39, v40);
    v45 = v43 == v196;
    v46 = v43 < v196;
    if ( v45 )
      v46 = v44 < v215;
    if ( v244 )
    {
LABEL_98:
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v241.m512i_i64[2] = 1610612768;
      v241.m512i_i64[0] = (__int64)&FileHandle;
      v241.m512i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v216, &v241) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v243 = FileHandle.m256i_i64[1];
      v247 = FileHandle.m256i_i64[0];
      write((int)&v227, Buf, v253);
      if ( v227.m512i_i32[0] != -1 )
      {
        *(_OWORD *)&v238[32] = v229;
        *(_OWORD *)&v238[16] = v228;
        *(_OWORD *)v238 = *(_OWORD *)&v227.m512i_u64[6];
        v237 = *(_OWORD *)&v227.m512i_u64[4];
        FileHandle = *(__m256i *)v227.m512i_i8;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v210.m256i_i64[0] = (__int64)&FileHandle;
          v210.m256i_i64[1] = (__int64)sub_140B036A0;
          v241.m512i_i64[0] = 0;
          v241.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v241.m512i_u64[2] = 0x2Du;
          v241.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
          v241.m512i_i64[5] = 35;
          v241.m512i_i64[6] = 2;
          v241.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
          v242.m256i_i64[0] = 45;
          v242.m256i_i64[1] = 0x15F00000001LL;
          v242.m256i_i64[2] = (__int64)&unk_14178FCF6;
          v242.m256i_i64[3] = (__int64)&v210;
          sub_1412C36A0(&v252, &v241);
        }
        sub_1406CDA20(&FileHandle);
      }
      if ( v247 )
        sub_140001660(v243, v247, 1);
      v241.m512i_i64[0] = (__int64)&v250;
      v241.m512i_i64[1] = (__int64)sub_1414A9660;
      v241.m512i_i64[2] = (__int64)&v216;
      v241.m512i_i64[3] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v171, &unk_1417876C6, &v241);
      v210.m256i_i8[0] = v253;
      Buf = (void *)v172;
      *(_OWORD *)v227.m512i_i8 = v172;
      v241.m512i_i64[0] = (__int64)&v210;
      v241.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v241.m512i_i64[2] = (__int64)&v227;
      v241.m512i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&FileHandle, &unk_141787489, &v241);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
      if ( v171 )
        sub_140001660(Buf, v171, 1);
      result = (__int64)v226;
      v226[5] = v220;
      *(_OWORD *)(result + 64) = v219;
      v67 = *(_OWORD *)v216.m256i_i8;
      v68 = *(_OWORD *)&v216.m256i_u64[2];
      v69 = v217;
      v70 = v218;
      goto LABEL_130;
    }
    if ( v41 )
    {
      if ( !v46 || (unsigned __int8)v250 >= 3u )
        goto LABEL_98;
    }
    else if ( (v46 & (unsigned __int8)v42 & ((unsigned __int8)v250 < 3u)) == 0 )
    {
      goto LABEL_98;
    }
    FileHandle.m256i_i64[0] = 0;
    *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
    v241.m512i_i64[2] = 1610612768;
    v241.m512i_i64[0] = (__int64)&FileHandle;
    v241.m512i_i64[1] = (__int64)&off_141790AA0;
    if ( (unsigned __int8)sub_140B036A0(&v216, v26) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v252,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v210.m256i_i64[2] = FileHandle.m256i_i64[2];
    *(_OWORD *)v210.m256i_i8 = *(_OWORD *)FileHandle.m256i_i8;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      FileHandle.m256i_i64[0] = (__int64)&v253;
      FileHandle.m256i_i64[1] = (__int64)sub_1407B2DA0;
      FileHandle.m256i_i64[2] = (__int64)&v250;
      FileHandle.m256i_i64[3] = (__int64)sub_1414A9660;
      *(_QWORD *)&v237 = &v210;
      *((_QWORD *)&v237 + 1) = sub_1400015F0;
      v241.m512i_i64[0] = 0;
      v241.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
      *(_OWORD *)&v241.m512i_u64[2] = 0x2Du;
      v241.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
      v241.m512i_i64[5] = 35;
      v241.m512i_i64[6] = 2;
      v241.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
      v242.m256i_i64[0] = 45;
      v242.m256i_i64[1] = 0xA800000001LL;
      v242.m256i_i64[2] = (__int64)&unk_14178785E;
      v242.m256i_i64[3] = (__int64)&FileHandle;
      sub_1412C36A0(&v252, v26);
    }
    write((int)&v227, Buf, v253);
    if ( v227.m512i_i32[0] != -1 )
    {
      *(_OWORD *)&v238[32] = v229;
      *(_OWORD *)&v238[16] = v228;
      *(_OWORD *)v238 = *(_OWORD *)&v227.m512i_u64[6];
      v237 = *(_OWORD *)&v227.m512i_u64[4];
      FileHandle = *(__m256i *)v227.m512i_i8;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)&v200 = &FileHandle;
        *((_QWORD *)&v200 + 1) = sub_140B036A0;
        v241.m512i_i64[0] = 0;
        v241.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
        *(_OWORD *)&v241.m512i_u64[2] = 0x2Du;
        v241.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
        v241.m512i_i64[5] = 35;
        v241.m512i_i64[6] = 2;
        v241.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
        v242.m256i_i64[0] = 45;
        v242.m256i_i64[1] = 0x15F00000001LL;
        v242.m256i_i64[2] = (__int64)&unk_14178FCF6;
        v242.m256i_i64[3] = (__int64)&v200;
        sub_1412C36A0(&v252, v26);
      }
      sub_1406CDA20(&FileHandle);
    }
    v241.m512i_i64[0] = (__int64)&v250;
    v241.m512i_i64[1] = (__int64)sub_1414A9660;
    v241.m512i_i64[2] = (__int64)&v210;
    v241.m512i_i64[3] = (__int64)sub_1400015F0;
    sub_14149C0F0(&v173, &unk_1417876C6, v26);
    LOBYTE(v200) = v253;
    v243 = v174;
    *(_OWORD *)v227.m512i_i8 = v174;
    v241.m512i_i64[0] = (__int64)&v200;
    v241.m512i_i64[1] = (__int64)sub_1407B2DA0;
    v241.m512i_i64[2] = (__int64)&v227;
    v241.m512i_i64[3] = (__int64)sub_14041F680;
    sub_14149C0F0(&FileHandle, &unk_141787489, v26);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileRetry, 15, (__int64)&FileHandle);
    if ( v173 )
      sub_140001660(v243, v173, 1);
    if ( v210.m256i_i64[0] )
      sub_140001660(v210.m256i_i64[1], v210.m256i_i64[0], 1);
    sub_1406CDA20(&v216);
LABEL_5:
    v18 = v20;
  }
  if ( v152.m256i_i64[0] != -1 )
  {
    v199 = *(_QWORD *)v188;
    v220 = v156;
    v219 = v155;
    v218 = v154;
    v217 = v153;
    v216 = v152;
    FileHandle.m256i_i64[0] = 0;
    *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
    v241.m512i_i64[2] = 1610612768;
    v241.m512i_i64[0] = (__int64)&FileHandle;
    v241.m512i_i64[1] = (__int64)&off_141790AA0;
    if ( (unsigned __int8)sub_140B036A0(&v216, &v241) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v252,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v243 = FileHandle.m256i_i64[1];
    v247 = FileHandle.m256i_i64[0];
    write((int)&v227, Buf, v253);
    if ( v227.m512i_i32[0] != -1 )
    {
      *(_OWORD *)&v238[32] = v229;
      *(_OWORD *)&v238[16] = v228;
      *(_OWORD *)v238 = *(_OWORD *)&v227.m512i_u64[6];
      v237 = *(_OWORD *)&v227.m512i_u64[4];
      FileHandle = *(__m256i *)v227.m512i_i8;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v210.m256i_i64[0] = (__int64)&FileHandle;
        v210.m256i_i64[1] = (__int64)sub_140B036A0;
        v241.m512i_i64[0] = 0;
        v241.m512i_i64[1] = (__int64)aCodexmateLibCo_27;
        *(_OWORD *)&v241.m512i_u64[2] = 0x2Du;
        v241.m512i_i64[4] = (__int64)aSrcCoreRelayRo_1;
        v241.m512i_i64[5] = 35;
        v241.m512i_i64[6] = 2;
        v241.m512i_i64[7] = (__int64)aCodexmateLibCo_27;
        v242.m256i_i64[0] = 45;
        v242.m256i_i64[1] = 0x15F00000001LL;
        v242.m256i_i64[2] = (__int64)&unk_14178FCF6;
        v242.m256i_i64[3] = (__int64)&v210;
        sub_1412C36A0(&v252, &v241);
      }
      sub_1406CDA20(&FileHandle);
    }
    if ( v247 )
      sub_140001660(v243, v247, 1);
    v241.m512i_i64[0] = (__int64)&v250;
    v241.m512i_i64[1] = (__int64)sub_1414A9660;
    v241.m512i_i64[2] = (__int64)&v216;
    v241.m512i_i64[3] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v169, &unk_1417876C6, &v241);
    v210.m256i_i8[0] = v253;
    Buf = (void *)v170;
    *(_OWORD *)v227.m512i_i8 = v170;
    v241.m512i_i64[0] = (__int64)&v210;
    v241.m512i_i64[1] = (__int64)sub_1407B2DA0;
    v241.m512i_i64[2] = (__int64)&v227;
    v241.m512i_i64[3] = (__int64)sub_14041F680;
    sub_14149C0F0(&FileHandle, &unk_141787489, &v241);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aSettleFailed, 13, (__int64)&FileHandle);
    if ( v169 )
      sub_140001660(Buf, v169, 1);
    v78 = v226;
    v226[5] = v220;
    v78[4] = v219;
    v79 = *(_OWORD *)v216.m256i_i8;
    v80 = *(_OWORD *)&v216.m256i_u64[2];
    v81 = v217;
    v78[3] = v218;
    v78[2] = v81;
    v78[1] = v80;
    *v78 = v79;
    sub_1406CE2E0(&v230[8]);
    v82 = *(_QWORD *)&v230[88];
    v83 = *(_QWORD *)&v230[80];
    if ( *(_QWORD *)&v230[88] )
    {
      v84 = (_QWORD *)(*(_QWORD *)&v230[80] + 8LL);
      do
      {
        v85 = *(v84 - 1);
        if ( v85 )
          sub_140001660(*v84, v85, 1);
        v84 += 3;
        --v82;
      }
      while ( v82 );
    }
    result = *(_QWORD *)&v230[72];
    if ( !*(_QWORD *)&v230[72] )
      return result;
    return sub_140001660(v83, 24 * result, 8);
  }
  *(_QWORD *)&v214 = *(_QWORD *)&v188[88];
  v213 = *(_OWORD *)&v188[72];
  v212 = *(_OWORD *)&v188[56];
  v211 = *(_OWORD *)&v188[40];
  v210 = *(__m256i *)&v188[8];
  v221 = v231.m256i_i32[2];
  v222 = v231.m256i_i8[12];
  v47 = *v187;
  v48 = *(_QWORD *)(v185 + 24);
  v239 = 1;
  sub_140852800((unsigned int)&v192, v48, v186, v47, (v231.m256i_i32[2] == 0) & (v231.m256i_i8[12] ^ 1));
  v49 = v194;
  if ( !v194 )
  {
    if ( (v221 || (v222 & 1) != 0) && *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)v230 = &v253;
      *(_QWORD *)&v230[8] = sub_1407B2DA0;
      *(_QWORD *)&v230[16] = &v250;
      *(_QWORD *)&v230[24] = sub_1414A9660;
      *(_QWORD *)&v230[32] = &v221;
      *(_QWORD *)&v230[40] = sub_1414AB780;
      *(_QWORD *)&v230[48] = &v222;
      *(_QWORD *)&v230[56] = sub_1414AC660;
      v241.m512i_i64[0] = (__int64)aCodexmateLibCo_27;
      v241.m512i_i64[1] = 45;
      v241.m512i_i64[2] = (__int64)aCodexmateLibCo_27;
      v241.m512i_i64[3] = 45;
      v241.m512i_i64[4] = (__int64)&off_141787640;
      v249 = 1;
      sub_140985BA0(&unk_1417875CB, v230, 2, &v241);
    }
    v86 = *a9;
    v249 = 1;
    sub_14084BFF0(&v216, a8, &v210, v86);
    if ( v216.m256i_i32[0] != -1 )
    {
      v229 = v220;
      v228 = v219;
      *(_OWORD *)&v227.m512i_u64[6] = v218;
      *(_OWORD *)&v227.m512i_u64[4] = v217;
      *(__m256i *)v227.m512i_i8 = v216;
      *(_QWORD *)v230 = &v253;
      *(_QWORD *)&v230[8] = sub_1407B2DA0;
      *(_QWORD *)&v230[16] = &v227;
      *(_QWORD *)&v230[24] = sub_140B036A0;
      sub_14149C0F0(&v144, &unk_141787685, v230);
      *(_OWORD *)&FileHandle.m256i_u64[1] = v144;
      FileHandle.m256i_i64[3] = v145;
      FileHandle.m256i_i64[0] = 10;
      v241.m512i_i64[0] = 0;
      *(_OWORD *)&v241.m512i_u64[1] = 1u;
      *(_QWORD *)&v230[16] = 1610612768;
      *(_QWORD *)v230 = v26;
      *(_QWORD *)&v230[8] = &off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&FileHandle, v230) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v243 = v241.m512i_i64[1];
      v247 = v241.m512i_i64[0];
      write((int)&v241, Buf, v253);
      if ( v241.m512i_i32[0] != -1 )
      {
        *(__m256i *)&v230[64] = v242;
        *(__m512i *)v230 = v241;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v223 = v230;
          *((_QWORD *)&v223 + 1) = sub_140B036A0;
          *(_QWORD *)&v200 = aCodexmateLibCo_27;
          *((_QWORD *)&v200 + 1) = 45;
          *(_QWORD *)&v201 = aCodexmateLibCo_27;
          *((_QWORD *)&v201 + 1) = 45;
          *(_QWORD *)&v202 = &off_14178FD30;
          sub_140985BA0(&unk_14178FCF6, &v223, 2, &v200);
        }
        sub_1406CDA20(v230);
      }
      if ( v247 )
        sub_140001660(v243, v247, 1);
      *(_QWORD *)v230 = &v250;
      *(_QWORD *)&v230[8] = sub_1414A9660;
      *(_QWORD *)&v230[16] = &FileHandle;
      *(_QWORD *)&v230[24] = sub_140B036A0;
      sub_14149C0F0(&v165, &unk_1417876C6, v230);
      LOBYTE(v223) = v253;
      Buf = (void *)v166;
      v200 = v166;
      *(_QWORD *)v230 = &v223;
      *(_QWORD *)&v230[8] = sub_1407B2DA0;
      *(_QWORD *)&v230[16] = &v200;
      *(_QWORD *)&v230[24] = sub_14041F680;
      sub_14149C0F0(&v241, &unk_141787489, v230);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v241);
      if ( v165 )
        sub_140001660(Buf, v165, 1);
      v87 = v226;
      v226[5] = *(_OWORD *)&v238[32];
      v87[4] = *(_OWORD *)&v238[16];
      v88 = *(_OWORD *)FileHandle.m256i_i8;
      v89 = *(_OWORD *)&FileHandle.m256i_u64[2];
      v90 = v237;
      v87[3] = *(_OWORD *)v238;
      v87[2] = v90;
      v87[1] = v89;
      *v87 = v88;
      v249 = 1;
      sub_1406CDA20(&v227);
      v91 = 1;
      result = v193;
      v243 = v193;
      v92 = 1;
      goto LABEL_173;
    }
    v110 = v214;
    if ( (_QWORD)v214 )
    {
      v249 = 1;
      sub_140440300((unsigned int)v230, DWORD2(v213), v214, (unsigned int)&unk_1417876F9, 3);
      v243 = *(_QWORD *)&v230[8];
      v247 = *(_QWORD *)v230;
      sub_1407A0A20(Buf, v253, *(__int128 *)&v230[8]);
      if ( v247 )
        sub_140001660(v243, v247, 1);
      v249 = 1;
      v111 = sub_141471AC0(&v190);
      *(_OWORD *)v241.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v111 + v112 / 0xF4240uLL;
      FileHandle.m256i_i64[0] = v110;
      *(_QWORD *)v230 = &v250;
      *(_QWORD *)&v230[8] = sub_1414A9660;
      *(_QWORD *)&v230[16] = v26;
      *(_QWORD *)&v230[24] = sub_1414A9600;
      *(_QWORD *)&v230[32] = &FileHandle;
      *(_QWORD *)&v230[40] = sub_1414AC520;
      v249 = 1;
      sub_14149C0F0(v135, &unk_141787704, v230);
      v249 = 1;
      sub_1406DB090(v253, aDegraded, 8, v135);
      v113 = *(_OWORD *)v210.m256i_i8;
      v114 = *(_OWORD *)&v210.m256i_u64[2];
      v115 = v211;
      v116 = v212;
      *(_OWORD *)&v230[48] = v212;
      *(_OWORD *)&v230[32] = v211;
      *(__m256i *)v230 = v210;
      v117 = v213;
      *(_OWORD *)&v230[64] = v213;
      result = v214;
      *(_QWORD *)&v230[80] = v214;
      v118 = v226;
      *((_QWORD *)v226 + 11) = v214;
      *(__int128 *)((char *)v118 + 72) = v117;
      *(__int128 *)((char *)v118 + 56) = v116;
      *(__int128 *)((char *)v118 + 40) = v115;
      *(__int128 *)((char *)v118 + 24) = v114;
      *(__int128 *)((char *)v118 + 8) = v113;
      *(_QWORD *)v118 = -1;
    }
    else
    {
      v249 = 1;
      sub_140ADF0F0(Buf);
      v249 = 1;
      v129 = sub_141471AC0(&v190);
      *(_OWORD *)v241.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v129 + v130 / 0xF4240uLL;
      *(_QWORD *)v230 = &v250;
      *(_QWORD *)&v230[8] = sub_1414A9660;
      *(_QWORD *)&v230[16] = v26;
      *(_QWORD *)&v230[24] = sub_1414A9600;
      v249 = 1;
      sub_14149C0F0(v136, &unk_1417876DA, v230);
      v249 = 1;
      sub_1406DB090(v253, aStable, 6, v136);
      v131 = *(_OWORD *)v210.m256i_i8;
      v132 = *(_OWORD *)&v210.m256i_u64[2];
      v133 = v211;
      result = (__int64)v226;
      v226[4] = v212;
      *(_OWORD *)(result + 48) = v133;
      *(_OWORD *)(result + 32) = v132;
      *(_OWORD *)(result + 16) = v131;
      *(_QWORD *)(result + 8) = 2;
      *(_QWORD *)result = -1;
    }
    if ( v192 )
      result = sub_140001660(v193, 32 * v192, 8);
    if ( v110 )
      return result;
LABEL_178:
    v83 = *((_QWORD *)&v213 + 1);
    v93 = v214;
    if ( (_QWORD)v214 )
    {
      v94 = (_QWORD *)(*((_QWORD *)&v213 + 1) + 8LL);
      do
      {
        v95 = *(v94 - 1);
        if ( v95 )
          sub_140001660(*v94, v95, 1);
        v94 += 3;
        --v93;
      }
      while ( v93 );
    }
    result = v213;
    if ( !(_QWORD)v213 )
      return result;
    return sub_140001660(v83, 24 * result, 8);
  }
  v249 = 1;
  v243 = v193;
  sub_140328B20(v26, v193, v193 + 32 * v194);
  v51 = v241.m512i_i64[2];
  v50 = v241.m512i_i64[1];
  sub_140440300((unsigned int)v230, v241.m512i_i32[2], v241.m512i_i32[4], (unsigned int)&unk_1417876F9, 3);
  v207 = *(_QWORD *)&v230[16];
  v206 = *(_OWORD *)v230;
  if ( v51 )
  {
    v55 = (_QWORD *)(v50 + 8);
    do
    {
      v52 = *(v55 - 1);
      if ( v52 )
        sub_140001660(*v55, v52, 1);
      v55 += 3;
      --v51;
    }
    while ( v51 );
  }
  if ( v241.m512i_i64[0] )
    sub_140001660(v50, 24 * v241.m512i_i64[0], 8);
  v248 = 1;
  v56 = sub_141471910(v53, v52, v54);
  v16 = (__m512i *)v26;
  v45 = v56 == v196;
  v58 = v56 < v196;
  if ( v45 )
    v58 = v57 < v215;
  v59 = v244;
  if ( !v244 )
  {
    if ( v221 )
    {
      if ( !v58 || (unsigned __int8)v250 >= 3u )
        goto LABEL_202;
    }
    else if ( (v58 & (unsigned __int8)v222 & ((unsigned __int8)v250 < 3u)) == 0 )
    {
LABEL_202:
      *(_QWORD *)v230 = &v253;
      *(_QWORD *)&v230[8] = sub_1407B2DA0;
      *(_QWORD *)&v230[16] = &v206;
      *(_QWORD *)&v230[24] = sub_1400015F0;
      v248 = 1;
      sub_14149C0F0(&v140, &unk_14178772E, v230);
      *(_OWORD *)&FileHandle.m256i_u64[1] = v140;
      FileHandle.m256i_i64[3] = v141;
      FileHandle.m256i_i64[0] = 10;
      v241.m512i_i64[0] = 0;
      *(_OWORD *)&v241.m512i_u64[1] = 1u;
      *(_QWORD *)&v230[16] = 1610612768;
      *(_QWORD *)v230 = v26;
      *(_QWORD *)&v230[8] = &off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&FileHandle, v230) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v225 = (_BYTE *)v241.m512i_i64[1];
      v247 = v241.m512i_i64[0];
      write((int)&v241, Buf, v253);
      if ( v241.m512i_i32[0] != -1 )
      {
        *(__m256i *)&v230[64] = v242;
        *(__m512i *)v230 = v241;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v216.m256i_i64[0] = (__int64)v230;
          v216.m256i_i64[1] = (__int64)sub_140B036A0;
          v227.m512i_i64[0] = (__int64)aCodexmateLibCo_27;
          v227.m512i_i64[1] = 45;
          v227.m512i_i64[2] = (__int64)aCodexmateLibCo_27;
          v227.m512i_i64[3] = 45;
          v227.m512i_i64[4] = (__int64)&off_14178FD30;
          sub_140985BA0(&unk_14178FCF6, &v216, 2, &v227);
        }
        sub_1406CDA20(v230);
      }
      if ( v247 )
        sub_140001660(v225, v247, 1);
      v241.m512i_i64[0] = v49;
      *(_QWORD *)v230 = &v250;
      *(_QWORD *)&v230[8] = sub_1414A9660;
      *(_QWORD *)&v230[16] = &v241;
      *(_QWORD *)&v230[24] = sub_1414AC520;
      sub_14149C0F0(&v157, &unk_14178774F, v230);
      v216.m256i_i8[0] = v253;
      Buf = (void *)v158;
      *(_OWORD *)v227.m512i_i8 = v158;
      *(_QWORD *)v230 = &v216;
      *(_QWORD *)&v230[8] = sub_1407B2DA0;
      *(_QWORD *)&v230[16] = &v227;
      *(_QWORD *)&v230[24] = sub_14041F680;
      sub_14149C0F0(&v241, &unk_141787489, v230);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aPostconditionF, 20, (__int64)&v241);
      if ( v157 )
        sub_140001660(Buf, v157, 1);
      v106 = v226;
      v226[5] = *(_OWORD *)&v238[32];
      v106[4] = *(_OWORD *)&v238[16];
      v107 = *(_OWORD *)FileHandle.m256i_i8;
      v108 = *(_OWORD *)&FileHandle.m256i_u64[2];
      v109 = v237;
      v106[3] = *(_OWORD *)v238;
      v106[2] = v109;
      v106[1] = v108;
      *v106 = v107;
      v92 = 1;
      goto LABEL_223;
    }
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v241.m512i_i64[0] = (__int64)&v253;
      v241.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v241.m512i_i64[2] = (__int64)&v250;
      v241.m512i_i64[3] = (__int64)sub_1414A9660;
      v241.m512i_i64[4] = (__int64)&v206;
      v241.m512i_i64[5] = (__int64)sub_1400015F0;
      *(_QWORD *)v230 = 0;
      *(_QWORD *)&v230[8] = aCodexmateLibCo_27;
      *(_OWORD *)&v230[16] = 0x2Du;
      *(_QWORD *)&v230[32] = aSrcCoreRelayRo_1;
      *(_QWORD *)&v230[40] = 35;
      *(_QWORD *)&v230[48] = 2;
      *(_QWORD *)&v230[56] = aCodexmateLibCo_27;
      *(_QWORD *)&v230[64] = 45;
      *(_QWORD *)&v230[72] = 0x10B00000001LL;
      *(_QWORD *)&v230[80] = &unk_1417877DC;
      *(_QWORD *)&v230[88] = v26;
      v248 = 1;
      sub_1412C36A0(&v252, v230);
    }
    v248 = 1;
    write((int)&FileHandle, Buf, v253);
    if ( FileHandle.m256i_i32[0] != -1 )
    {
      v242 = *(__m256i *)&v238[16];
      *(_OWORD *)&v241.m512i_u64[6] = *(_OWORD *)v238;
      *(_OWORD *)&v241.m512i_u64[4] = v237;
      *(__m256i *)v241.m512i_i8 = FileHandle;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v227.m512i_i64[0] = v26;
        v227.m512i_i64[1] = (__int64)sub_140B036A0;
        *(_QWORD *)v230 = 0;
        *(_QWORD *)&v230[8] = aCodexmateLibCo_27;
        *(_OWORD *)&v230[16] = 0x2Du;
        *(_QWORD *)&v230[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v230[40] = 35;
        *(_QWORD *)&v230[48] = 2;
        *(_QWORD *)&v230[56] = aCodexmateLibCo_27;
        *(_QWORD *)&v230[64] = 45;
        *(_QWORD *)&v230[72] = 0x15F00000001LL;
        *(_QWORD *)&v230[80] = &unk_14178FCF6;
        *(_QWORD *)&v230[88] = &v227;
        sub_1412C36A0(&v252, v230);
      }
      v248 = 1;
      sub_1406CDA20(v26);
    }
    v60 = v243;
    if ( (_QWORD)v206 )
      sub_140001660(*((_QWORD *)&v206 + 1), v206, 1);
    v61 = (_QWORD *)(v60 + 8);
    do
    {
      v62 = *(v61 - 1);
      if ( v62 )
        sub_140001660(*v61, v62, 1);
      v61 += 4;
      --v49;
    }
    while ( v49 );
    if ( v192 )
      sub_140001660(v60, 32 * v192, 8);
    sub_1406CE2E0(&v210);
    v63 = *((_QWORD *)&v213 + 1);
    v64 = v214;
    if ( (_QWORD)v214 )
    {
      v65 = (_QWORD *)(*((_QWORD *)&v213 + 1) + 8LL);
      do
      {
        v17 = *(v65 - 1);
        if ( v17 )
          sub_140001660(*v65, v17, 1);
        v65 += 3;
        --v64;
      }
      while ( v64 );
    }
    if ( (_QWORD)v213 )
      sub_140001660(v63, 24 * v213, 8);
    goto LABEL_5;
  }
  v224 = *(_QWORD *)&v188[88];
  v223 = *(_OWORD *)&v188[72];
  *(_QWORD *)v230 = &v206;
  *(_QWORD *)&v230[8] = sub_1400015F0;
  sub_14149C0F0(&v163, &unk_14178777C, v230);
  v96 = v224;
  if ( v224 == (_QWORD)v223 )
    sub_141689AB0(&v223);
  v97 = *((_QWORD *)&v223 + 1);
  v98 = 3 * v96;
  *(_QWORD *)(*((_QWORD *)&v223 + 1) + 8 * v98 + 16) = v164;
  *(_OWORD *)(v97 + 8 * v98) = v163;
  v224 = v96 + 1;
  sub_14084BFF0(&v216, a8, &v188[8], *a9);
  v92 = v216.m256i_i64[0] != -1;
  if ( v216.m256i_i64[0] == -1 )
  {
    sub_140440300((unsigned int)v230, DWORD2(v223), v224, (unsigned int)&unk_1417876F9, 3);
    v225 = *(_BYTE **)&v230[8];
    v247 = *(_QWORD *)v230;
    sub_1407A0A20(Buf, v253, *(__int128 *)&v230[8]);
    if ( v247 )
      sub_140001660(v225, v247, 1);
    v119 = sub_141471AC0(&v190);
    *(_OWORD *)v241.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v119 + v120 / 0xF4240uLL;
    FileHandle.m256i_i64[0] = v224;
    *(_QWORD *)v230 = &v250;
    *(_QWORD *)&v230[8] = sub_1414A9660;
    *(_QWORD *)&v230[16] = v26;
    *(_QWORD *)&v230[24] = sub_1414A9600;
    *(_QWORD *)&v230[32] = &FileHandle;
    *(_QWORD *)&v230[40] = sub_1414AC520;
    sub_14149C0F0(&v159, &unk_141787704, v230);
    v227.m512i_i8[0] = v253;
    Buf = (void *)v160;
    *(_OWORD *)FileHandle.m256i_i8 = v160;
    *(_QWORD *)v230 = &v227;
    *(_QWORD *)&v230[8] = sub_1407B2DA0;
    *(_QWORD *)&v230[16] = &FileHandle;
    *(_QWORD *)&v230[24] = sub_14041F680;
    sub_14149C0F0(&v241, &unk_141787489, v230);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aDegraded, 8, (__int64)&v241);
    if ( v159 )
      sub_140001660(Buf, v159, 1);
    v121 = *(_OWORD *)v210.m256i_i8;
    v122 = *(_OWORD *)&v210.m256i_u64[2];
    v123 = v211;
    v124 = v212;
    *(_OWORD *)&v230[48] = v212;
    *(_OWORD *)&v230[32] = v211;
    *(__m256i *)v230 = v210;
    v125 = v223;
    *(_OWORD *)&v230[64] = v223;
    *(_QWORD *)&v230[80] = v224;
    v126 = v226;
    *((_QWORD *)v226 + 11) = v224;
    *(__int128 *)((char *)v126 + 72) = v125;
    *(__int128 *)((char *)v126 + 56) = v124;
    *(__int128 *)((char *)v126 + 40) = v123;
    *(__int128 *)((char *)v126 + 24) = v122;
    *(__int128 *)((char *)v126 + 8) = v121;
    *(_QWORD *)v126 = -1;
  }
  else
  {
    v229 = v220;
    v228 = v219;
    *(_OWORD *)&v227.m512i_u64[6] = v218;
    *(_OWORD *)&v227.m512i_u64[4] = v217;
    *(__m256i *)v227.m512i_i8 = v216;
    *(_QWORD *)v230 = &v253;
    *(_QWORD *)&v230[8] = sub_1407B2DA0;
    *(_QWORD *)&v230[16] = &v227;
    *(_QWORD *)&v230[24] = sub_140B036A0;
    sub_14149C0F0(&v142, &unk_1417877B9, v230);
    *(_OWORD *)&FileHandle.m256i_u64[1] = v142;
    FileHandle.m256i_i64[3] = v143;
    FileHandle.m256i_i64[0] = 10;
    v241.m512i_i64[0] = 0;
    *(_OWORD *)&v241.m512i_u64[1] = 1u;
    *(_QWORD *)&v230[16] = 1610612768;
    *(_QWORD *)v230 = v26;
    *(_QWORD *)&v230[8] = &off_141790AA0;
    if ( (unsigned __int8)sub_140B036A0(&FileHandle, v230) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v252,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v225 = (_BYTE *)v241.m512i_i64[1];
    v247 = v241.m512i_i64[0];
    write((int)&v241, Buf, v253);
    if ( v241.m512i_i32[0] != -1 )
    {
      *(__m256i *)&v230[64] = v242;
      *(__m512i *)v230 = v241;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v189[0] = v230;
        v189[1] = sub_140B036A0;
        *(_QWORD *)&v200 = aCodexmateLibCo_27;
        *((_QWORD *)&v200 + 1) = 45;
        *(_QWORD *)&v201 = aCodexmateLibCo_27;
        *((_QWORD *)&v201 + 1) = 45;
        *(_QWORD *)&v202 = &off_14178FD30;
        sub_140985BA0(&unk_14178FCF6, v189, 2, &v200);
      }
      sub_1406CDA20(v230);
    }
    if ( v247 )
      sub_140001660(v225, v247, 1);
    *(_QWORD *)v230 = &v250;
    *(_QWORD *)&v230[8] = sub_1414A9660;
    *(_QWORD *)&v230[16] = &FileHandle;
    *(_QWORD *)&v230[24] = sub_140B036A0;
    sub_14149C0F0(&v161, &unk_1417876C6, v230);
    LOBYTE(v189[0]) = v253;
    Buf = (void *)v162;
    v200 = v162;
    *(_QWORD *)v230 = v189;
    *(_QWORD *)&v230[8] = sub_1407B2DA0;
    *(_QWORD *)&v230[16] = &v200;
    *(_QWORD *)&v230[24] = sub_14041F680;
    sub_14149C0F0(&v241, &unk_141787489, v230);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v241);
    if ( v161 )
      sub_140001660(Buf, v161, 1);
    v99 = v226;
    v226[5] = *(_OWORD *)&v238[32];
    v99[4] = *(_OWORD *)&v238[16];
    v100 = *(_OWORD *)FileHandle.m256i_i8;
    v101 = *(_OWORD *)&FileHandle.m256i_u64[2];
    v102 = v237;
    v99[3] = *(_OWORD *)v238;
    v99[2] = v102;
    v99[1] = v101;
    *v99 = v100;
    sub_1406CDA20(&v227);
    v103 = v224;
    if ( v224 )
    {
      v104 = (_QWORD *)(*((_QWORD *)&v223 + 1) + 8LL);
      do
      {
        v105 = *(v104 - 1);
        if ( v105 )
          sub_140001660(*v104, v105, 1);
        v104 += 3;
        --v103;
      }
      while ( v103 );
    }
    if ( (_QWORD)v223 )
      sub_140001660(*((_QWORD *)&v223 + 1), 24 * v223, 8);
  }
LABEL_223:
  if ( (_QWORD)v206 )
    sub_140001660(*((_QWORD *)&v206 + 1), v206, 1);
  v91 = v59 ^ 1;
  result = v243;
  v127 = (_QWORD *)(v243 + 8);
  do
  {
    v128 = *(v127 - 1);
    if ( v128 )
      result = sub_140001660(*v127, v128, 1);
    v127 += 4;
    --v49;
  }
  while ( v49 );
LABEL_173:
  if ( v192 )
    result = sub_140001660(v243, 32 * v192, 8);
  if ( v92 )
    result = sub_1406CE2E0(&v210);
  if ( v91 )
    goto LABEL_178;
  return result;
}
