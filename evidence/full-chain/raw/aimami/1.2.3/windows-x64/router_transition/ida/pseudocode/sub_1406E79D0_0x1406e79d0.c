// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1406E79D0(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int128 a6,
        __int64 **a7,
        __int64 *a8,
        __int64 a9,
        unsigned __int8 *a10)
{
  __int8 v10; // si
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rbx
  char v21; // si
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  int v26; // edx
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rcx
  char v30; // r13
  __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int32 v39; // r14d
  __int8 v40; // r15
  unsigned __int64 v41; // rax
  unsigned int v42; // edx
  bool v43; // zf
  bool v44; // al
  int v45; // r9d
  __int64 v46; // rdx
  __int64 v47; // r12
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // r13
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // r14
  unsigned __int64 v56; // rax
  unsigned int v57; // edx
  __int64 v58; // r13
  bool v59; // al
  char v60; // r15
  char v61; // al
  _QWORD *v62; // r14
  __int64 v63; // rdx
  __int64 v64; // r15
  __int64 v65; // r12
  _QWORD *v66; // r14
  __int64 v67; // rdx
  __int64 v68; // rcx
  _OWORD *v69; // rax
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm2
  __int128 v73; // xmm3
  __int64 v74; // rax
  unsigned int v75; // edx
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm2
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  __int64 v83; // rdi
  __int64 v84; // rsi
  _QWORD *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // r9
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  char v92; // r15
  bool v93; // bl
  __int64 v94; // rdi
  _QWORD *v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rax
  __int64 v99; // rcx
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  __int64 v103; // rsi
  _QWORD *v104; // rdi
  __int64 v105; // rdx
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  __int128 v108; // xmm2
  __int64 v109; // rdi
  __int64 v110; // rax
  unsigned int v111; // edx
  __int128 v112; // xmm0
  __int128 v113; // xmm1
  __int128 v114; // xmm2
  __int128 v115; // xmm3
  __int128 v116; // xmm4
  __int64 v117; // rax
  unsigned int v118; // edx
  __int128 v119; // xmm0
  __int128 v120; // xmm1
  __int128 v121; // xmm2
  __int128 v122; // xmm3
  __int128 v123; // xmm4
  _QWORD *v124; // rsi
  __int64 v125; // rdx
  __int64 v126; // rax
  unsigned int v127; // edx
  __int128 v128; // xmm0
  __int128 v129; // xmm1
  __int128 v130; // xmm2
  _BYTE v131[24]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v132[24]; // [rsp+58h] [rbp-28h] BYREF
  __m512i v133; // [rsp+70h] [rbp-10h] BYREF
  __int128 v134; // [rsp+B0h] [rbp+30h]
  __int128 v135; // [rsp+C0h] [rbp+40h]
  __int128 v136; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v137; // [rsp+E0h] [rbp+60h]
  __int128 v138; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v139; // [rsp+F8h] [rbp+78h]
  __int128 v140; // [rsp+100h] [rbp+80h] BYREF
  __int64 v141; // [rsp+110h] [rbp+90h]
  __int128 v142; // [rsp+118h] [rbp+98h] BYREF
  __int64 v143; // [rsp+128h] [rbp+A8h]
  __m256i v144; // [rsp+130h] [rbp+B0h]
  __int128 v145; // [rsp+150h] [rbp+D0h]
  __int64 v146; // [rsp+160h] [rbp+E0h]
  __m256i v147; // [rsp+168h] [rbp+E8h] BYREF
  __int128 v148; // [rsp+188h] [rbp+108h]
  __int128 v149; // [rsp+198h] [rbp+118h]
  __int128 v150; // [rsp+1A8h] [rbp+128h]
  __int128 v151; // [rsp+1B8h] [rbp+138h]
  __int64 v152; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v153; // [rsp+1D0h] [rbp+150h]
  __int64 v154; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v155; // [rsp+1E8h] [rbp+168h]
  __int64 v156; // [rsp+1F8h] [rbp+178h] BYREF
  __int128 v157; // [rsp+200h] [rbp+180h]
  __int128 v158; // [rsp+210h] [rbp+190h] BYREF
  __int64 v159; // [rsp+220h] [rbp+1A0h]
  __int64 v160; // [rsp+228h] [rbp+1A8h] BYREF
  __int128 v161; // [rsp+230h] [rbp+1B0h]
  __int64 v162; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v163; // [rsp+248h] [rbp+1C8h]
  __int64 v164; // [rsp+258h] [rbp+1D8h] BYREF
  __int128 v165; // [rsp+260h] [rbp+1E0h]
  __int64 v166; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v167; // [rsp+278h] [rbp+1F8h]
  __int64 v168; // [rsp+288h] [rbp+208h] BYREF
  __int128 v169; // [rsp+290h] [rbp+210h]
  __int64 v170; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v171; // [rsp+2A8h] [rbp+228h]
  __int64 v172; // [rsp+2B8h] [rbp+238h] BYREF
  __int128 v173; // [rsp+2C0h] [rbp+240h]
  __int64 v174; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v175; // [rsp+2D8h] [rbp+258h]
  _BYTE v176[96]; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v177; // [rsp+348h] [rbp+2C8h] BYREF
  int v178; // [rsp+350h] [rbp+2D0h]
  __int128 v179; // [rsp+358h] [rbp+2D8h] BYREF
  __int64 *v180; // [rsp+368h] [rbp+2E8h]
  __int64 *v181; // [rsp+370h] [rbp+2F0h]
  __int64 v182; // [rsp+378h] [rbp+2F8h]
  __int64 v183; // [rsp+380h] [rbp+300h]
  unsigned __int8 *v184; // [rsp+388h] [rbp+308h]
  _QWORD v185[2]; // [rsp+390h] [rbp+310h] BYREF
  __int64 v186; // [rsp+3A0h] [rbp+320h] BYREF
  int v187; // [rsp+3A8h] [rbp+328h]
  __int128 v188; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v189; // [rsp+3C0h] [rbp+340h]
  __int128 v190; // [rsp+3D0h] [rbp+350h]
  __int128 v191; // [rsp+3E0h] [rbp+360h]
  __int128 v192; // [rsp+3F0h] [rbp+370h]
  __int128 v193; // [rsp+400h] [rbp+380h]
  __int64 v194; // [rsp+410h] [rbp+390h] BYREF
  __int64 v195; // [rsp+418h] [rbp+398h]
  __int64 v196; // [rsp+420h] [rbp+3A0h]
  unsigned __int64 v197; // [rsp+428h] [rbp+3A8h]
  __int64 v198; // [rsp+430h] [rbp+3B0h]
  __int64 v199; // [rsp+438h] [rbp+3B8h]
  __int128 v200; // [rsp+440h] [rbp+3C0h] BYREF
  __int64 v201; // [rsp+450h] [rbp+3D0h]
  __m256i v202; // [rsp+460h] [rbp+3E0h] BYREF
  __int128 v203; // [rsp+480h] [rbp+400h]
  __int128 v204; // [rsp+490h] [rbp+410h]
  __int128 v205; // [rsp+4A0h] [rbp+420h]
  __int128 v206; // [rsp+4B0h] [rbp+430h]
  unsigned int v207; // [rsp+4C4h] [rbp+444h]
  __int64 i; // [rsp+4C8h] [rbp+448h]
  __m256i v209; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v210; // [rsp+4F0h] [rbp+470h]
  __int128 v211; // [rsp+500h] [rbp+480h]
  __int128 v212; // [rsp+510h] [rbp+490h]
  __int128 v213; // [rsp+520h] [rbp+4A0h]
  __int32 v214; // [rsp+538h] [rbp+4B8h] BYREF
  __int8 v215; // [rsp+53Ch] [rbp+4BCh] BYREF
  __int128 v216; // [rsp+540h] [rbp+4C0h] BYREF
  __int64 v217; // [rsp+550h] [rbp+4D0h]
  __m512i v218; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v219; // [rsp+5A0h] [rbp+520h]
  __int128 v220; // [rsp+5B0h] [rbp+530h]
  __m256i v221; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v222; // [rsp+5E0h] [rbp+560h]
  __int128 v223; // [rsp+5F0h] [rbp+570h]
  __int128 v224; // [rsp+600h] [rbp+580h]
  __int128 v225; // [rsp+610h] [rbp+590h]
  __m256i v226; // [rsp+620h] [rbp+5A0h]
  __int128 v227; // [rsp+640h] [rbp+5C0h]
  __int128 v228; // [rsp+650h] [rbp+5D0h]
  __int128 v229; // [rsp+660h] [rbp+5E0h]
  __int128 v230; // [rsp+670h] [rbp+5F0h]
  __m256i FileHandle; // [rsp+680h] [rbp+600h] BYREF
  __int128 v232; // [rsp+6A0h] [rbp+620h]
  __int128 v233; // [rsp+6B0h] [rbp+630h]
  __int128 v234; // [rsp+6C0h] [rbp+640h]
  __int128 v235; // [rsp+6D0h] [rbp+650h]
  __m256i v236; // [rsp+6E0h] [rbp+660h] BYREF
  __int128 v237; // [rsp+700h] [rbp+680h]
  __int128 v238; // [rsp+710h] [rbp+690h]
  __int128 v239; // [rsp+720h] [rbp+6A0h]
  __int128 v240; // [rsp+730h] [rbp+6B0h]
  char v241; // [rsp+74Eh] [rbp+6CEh]
  __int8 v242; // [rsp+74Fh] [rbp+6CFh] BYREF
  __int64 *v243; // [rsp+750h] [rbp+6D0h]
  char v244; // [rsp+75Fh] [rbp+6DFh] BYREF
  void *Buf; // [rsp+760h] [rbp+6E0h]
  char v246; // [rsp+76Fh] [rbp+6EFh]
  __int64 v247; // [rsp+770h] [rbp+6F0h]
  char v248; // [rsp+77Ah] [rbp+6FAh]
  char v249; // [rsp+77Bh] [rbp+6FBh]
  char v250; // [rsp+77Ch] [rbp+6FCh]
  char v251; // [rsp+77Dh] [rbp+6FDh] BYREF
  char v252; // [rsp+77Eh] [rbp+6FEh] BYREF
  unsigned __int8 v253; // [rsp+77Fh] [rbp+6FFh] BYREF
  __int64 v254; // [rsp+780h] [rbp+700h]

  v254 = -2;
  v10 = a3;
  Buf = a2;
  v11 = a1;
  v253 = a3;
  v244 = a4;
  v179 = a6;
  v186 = sub_141471910(a1, a2, a3);
  v187 = v12;
  v15 = sub_141471910(v13, v12, v14);
  v197 = sub_141491390(v15, v16, 12, 0, (__int64)&off_1417874D0);
  v207 = v17;
  v221.m256i_i64[0] = (__int64)&v244;
  v221.m256i_i64[1] = (__int64)sub_1407B87B0;
  v221.m256i_i64[2] = (__int64)&v179;
  v221.m256i_i64[3] = (__int64)sub_14041F680;
  sub_14149C0F0(&v174, &unk_1417874E8, &v221);
  v218.m512i_i8[0] = v10;
  v247 = v175;
  *(_OWORD *)FileHandle.m256i_i8 = v175;
  v221.m256i_i64[0] = (__int64)&v218;
  v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
  v221.m256i_i64[2] = (__int64)&FileHandle;
  v221.m256i_i64[3] = (__int64)sub_14041F680;
  sub_14149C0F0(&v236, &unk_141787489, &v221);
  sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStart_1, 5, (__int64)&v236);
  if ( v174 )
    sub_140001660(v247, v174, 1);
  v243 = *a7;
  v180 = a7[1];
  v181 = a7[2];
  v182 = *a8;
  v183 = a8[1];
  v184 = (unsigned __int8 *)a8[2];
  v19 = 1;
  v20 = 0;
  for ( i = v11; ; v11 = i )
  {
    while ( 1 )
    {
      if ( (v20 & 1) != 0 || (unsigned __int8)v19 > 3u )
      {
        nullsub_1(v18);
        v69 = (_OWORD *)sub_140001650(109, 1);
        if ( !v69 )
          sub_1416C2D4B(1, 109);
        *(_OWORD *)((char *)v69 + 93) = *(__int128 *)((char *)&xmmword_141787551 + 13);
        v69[5] = xmmword_141787551;
        v69[4] = xmmword_141787541;
        v69[3] = xmmword_141787531;
        v69[2] = xmmword_141787521;
        qmemcpy(v69, "CODEX_TRANSITION_REENTRY_TIMEOUT", 32);
        v218.m512i_i64[1] = 109;
        v218.m512i_i64[2] = (__int64)v69;
        v218.m512i_i64[3] = 109;
        v218.m512i_i64[0] = 10;
        v236.m256i_i64[0] = 0;
        *(_OWORD *)&v236.m256i_u64[1] = 1u;
        v221.m256i_i64[2] = 1610612768;
        v221.m256i_i64[0] = (__int64)&v236;
        v221.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v218, &v221) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v252,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v243 = (__int64 *)v236.m256i_i64[1];
        v247 = v236.m256i_i64[0];
        write((int)&FileHandle, Buf, v253);
        if ( FileHandle.m256i_i32[0] != -1 )
        {
          v240 = v235;
          v239 = v234;
          v238 = v233;
          v237 = v232;
          v236 = FileHandle;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v209.m256i_i64[0] = (__int64)&v236;
            v209.m256i_i64[1] = (__int64)sub_140B036A0;
            v221.m256i_i64[0] = 0;
            v221.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v221.m256i_u64[2] = 0x2Du;
            *(_QWORD *)&v222 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v222 + 1) = 35;
            *(_QWORD *)&v223 = 2;
            *((_QWORD *)&v223 + 1) = aCodexmateLibCo_27;
            *(_QWORD *)&v224 = 45;
            *((_QWORD *)&v224 + 1) = 0x15F00000001LL;
            *(_QWORD *)&v225 = &unk_14178FCF6;
            *((_QWORD *)&v225 + 1) = &v209;
            sub_1412C36A0(&v252, &v221);
          }
          sub_1406CDA20(&v236);
        }
        if ( v247 )
          sub_140001660(v243, v247, 1);
        v236.m256i_i64[0] = 0;
        *(_OWORD *)&v236.m256i_u64[1] = 1u;
        v221.m256i_i64[2] = 1610612768;
        v221.m256i_i64[0] = (__int64)&v236;
        v221.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v218, &v221) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v252,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        Buf = (void *)v236.m256i_i64[0];
        v209.m256i_i8[0] = v253;
        v247 = v236.m256i_i64[1];
        *(_OWORD *)FileHandle.m256i_i8 = *(_OWORD *)&v236.m256i_u64[1];
        v221.m256i_i64[0] = (__int64)&v209;
        v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v221.m256i_i64[2] = (__int64)&FileHandle;
        v221.m256i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&v236, &unk_141787489, &v221);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aRetryExhausted, 15, (__int64)&v236);
        if ( Buf )
          sub_140001660(v247, Buf, 1);
        goto LABEL_104;
      }
      LOBYTE(v20) = v19 == 3;
      v21 = v19 + 1;
      if ( v19 == 3 )
        v21 = 3;
      v251 = v19;
      write((int)&FileHandle, Buf, v253);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        v240 = v235;
        v239 = v234;
        v238 = v233;
        v237 = v232;
        v236 = FileHandle;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v218.m512i_i64[0] = (__int64)&v236;
          v218.m512i_i64[1] = (__int64)sub_140B036A0;
          v221.m256i_i64[0] = 0;
          v221.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v221.m256i_u64[2] = 0x2Du;
          *(_QWORD *)&v222 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v222 + 1) = 35;
          *(_QWORD *)&v223 = 2;
          *((_QWORD *)&v223 + 1) = aCodexmateLibCo_27;
          *(_QWORD *)&v224 = 45;
          *((_QWORD *)&v224 + 1) = 0x15F00000001LL;
          *(_QWORD *)&v225 = &unk_14178FCF6;
          *((_QWORD *)&v225 + 1) = &v218;
          sub_1412C36A0(&v252, &v221);
        }
        sub_1406CDA20(&v236);
      }
      v177 = sub_141471910(v23, v22, v24);
      v178 = v26;
      if ( !v244 )
      {
        acquire_with_policy((unsigned int)&v133, 5, 0, 0, a5);
        if ( v133.m512i_i32[0] == -1 )
          goto LABEL_16;
LABEL_105:
        v220 = v135;
        v219 = v134;
        v218 = v133;
        v236.m256i_i64[0] = 0;
        *(_OWORD *)&v236.m256i_u64[1] = 1u;
        v221.m256i_i64[2] = 1610612768;
        v221.m256i_i64[0] = (__int64)&v236;
        v221.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v218, &v221) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v252,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v243 = (__int64 *)v236.m256i_i64[1];
        v247 = v236.m256i_i64[0];
        write((int)&FileHandle, Buf, v253);
        if ( FileHandle.m256i_i32[0] != -1 )
        {
          v240 = v235;
          v239 = v234;
          v238 = v233;
          v237 = v232;
          v236 = FileHandle;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v209.m256i_i64[0] = (__int64)&v236;
            v209.m256i_i64[1] = (__int64)sub_140B036A0;
            v221.m256i_i64[0] = 0;
            v221.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v221.m256i_u64[2] = 0x2Du;
            *(_QWORD *)&v222 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v222 + 1) = 35;
            *(_QWORD *)&v223 = 2;
            *((_QWORD *)&v223 + 1) = aCodexmateLibCo_27;
            *(_QWORD *)&v224 = 45;
            *((_QWORD *)&v224 + 1) = 0x15F00000001LL;
            *(_QWORD *)&v225 = &unk_14178FCF6;
            *((_QWORD *)&v225 + 1) = &v209;
            sub_1412C36A0(&v252, &v221);
          }
          sub_1406CDA20(&v236);
        }
        if ( v247 )
          sub_140001660(v243, v247, 1);
        v74 = sub_141471AC0(&v177);
        *(_OWORD *)v236.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v74 + v75 / 0xF4240uLL;
        v221.m256i_i64[0] = (__int64)&v251;
        v221.m256i_i64[1] = (__int64)sub_1414A9660;
        v221.m256i_i64[2] = (__int64)&v236;
        v221.m256i_i64[3] = (__int64)sub_1414A9600;
        *(_QWORD *)&v222 = &v218;
        *((_QWORD *)&v222 + 1) = sub_140B036A0;
        sub_14149C0F0(&v172, &unk_1417878F4, &v221);
        v209.m256i_i8[0] = v253;
        Buf = (void *)v173;
        *(_OWORD *)FileHandle.m256i_i8 = v173;
        v221.m256i_i64[0] = (__int64)&v209;
        v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v221.m256i_i64[2] = (__int64)&FileHandle;
        v221.m256i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&v236, &unk_141787489, &v221);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopFailed, 11, (__int64)&v236);
        v11 = i;
        if ( v172 )
          sub_140001660(Buf, v172, 1);
LABEL_104:
        *(_OWORD *)(v11 + 80) = v220;
        *(_OWORD *)(v11 + 64) = v219;
        v70 = *(_OWORD *)v218.m512i_i8;
        v71 = *(_OWORD *)&v218.m512i_u64[2];
        v72 = *(_OWORD *)&v218.m512i_u64[4];
        v73 = *(_OWORD *)&v218.m512i_u64[6];
LABEL_125:
        *(_OWORD *)(v11 + 48) = v73;
        *(_OWORD *)(v11 + 32) = v72;
        *(_OWORD *)(v11 + 16) = v71;
        *(_OWORD *)v11 = v70;
        return v11;
      }
      LOBYTE(v25) = 1;
      acquire_with_policy((unsigned int)&v133, 3, 0, v25, a5);
      if ( v133.m512i_i32[0] != -1 )
        goto LABEL_105;
LABEL_16:
      v146 = v133.m512i_i64[7];
      v145 = *(_OWORD *)&v133.m512i_u64[5];
      v144 = *(__m256i *)&v133.m512i_u64[1];
      v242 = v133.m512i_i8[56];
      v249 = 1;
      v27 = sub_141471AC0(&v177);
      *(_OWORD *)v236.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v27 + v28 / 0xF4240uLL;
      v221.m256i_i64[0] = (__int64)&v251;
      v221.m256i_i64[1] = (__int64)sub_1414A9660;
      v221.m256i_i64[2] = (__int64)&v236;
      v221.m256i_i64[3] = (__int64)sub_1414A9600;
      *(_QWORD *)&v222 = &v242;
      *((_QWORD *)&v222 + 1) = sub_1414AC660;
      v249 = 1;
      sub_14149C0F0(&v170, &unk_141787591, &v221);
      v218.m512i_i8[0] = v253;
      v247 = v171;
      *(_OWORD *)FileHandle.m256i_i8 = v171;
      v221.m256i_i64[0] = (__int64)&v218;
      v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v221.m256i_i64[2] = (__int64)&FileHandle;
      v221.m256i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&v236, &unk_141787489, &v221);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopComplete, 13, (__int64)&v236);
      if ( v170 )
        sub_140001660(v247, v170, 1);
      v249 = 1;
      write((int)&FileHandle, Buf, v253);
      if ( FileHandle.m256i_i32[0] != -1 )
      {
        v240 = v235;
        v239 = v234;
        v238 = v233;
        v237 = v232;
        v236 = FileHandle;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v218.m512i_i64[0] = (__int64)&v236;
          v218.m512i_i64[1] = (__int64)sub_140B036A0;
          v221.m256i_i64[0] = 0;
          v221.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v221.m256i_u64[2] = 0x2Du;
          *(_QWORD *)&v222 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v222 + 1) = 35;
          *(_QWORD *)&v223 = 2;
          *((_QWORD *)&v223 + 1) = aCodexmateLibCo_27;
          *(_QWORD *)&v224 = 45;
          *((_QWORD *)&v224 + 1) = 0x15F00000001LL;
          *(_QWORD *)&v225 = &unk_14178FCF6;
          *((_QWORD *)&v225 + 1) = &v218;
          sub_1412C36A0(&v252, &v221);
        }
        v249 = 1;
        sub_1406CDA20(&v236);
      }
      v30 = v242;
      if ( v251 != 1 )
      {
        v236.m256i_i64[0] = (__int64)v243;
        v236.m256i_i64[1] = (__int64)sub_14041F680;
        v249 = 1;
        sub_14149C0F0(&v221, &unk_141788351, &v236);
        v31 = v221.m256i_i64[2];
        v36 = v221.m256i_i64[1];
        goto LABEL_30;
      }
      v31 = v243[1];
      if ( v31 < 0 )
      {
        v68 = 0;
        goto LABEL_92;
      }
      if ( v31 )
      {
        v32 = *v243;
        nullsub_1(v29);
        v33 = sub_140001650(v31, 1);
        if ( !v33 )
        {
          v199 = v31;
          v68 = 1;
LABEL_92:
          v249 = 1;
          sub_1416C2D4B(v68, v199);
        }
        v34 = v32;
        v35 = v33;
        sub_141684120(v33, v34, v31);
        v36 = v35;
        v199 = v35;
      }
      else
      {
        v36 = 1;
        v199 = 1;
      }
      v221.m256i_i64[0] = v31;
      v221.m256i_i64[1] = v36;
      v221.m256i_i64[2] = v31;
LABEL_30:
      v247 = v36;
      sub_140851F40((unsigned int)v176, (_DWORD)v180, (_DWORD)v181, v36, v31, v30);
      if ( v221.m256i_i64[0] )
        sub_140001660(v247, v221.m256i_i64[0], 1);
      *(_QWORD *)&v223 = v146;
      v222 = v145;
      v221 = v144;
      v246 = 1;
      sub_140387CC0(&v147, &v221);
      v225 = *(_OWORD *)&v176[80];
      v224 = *(_OWORD *)&v176[64];
      v223 = *(_OWORD *)&v176[48];
      v222 = *(_OWORD *)&v176[32];
      v221 = *(__m256i *)v176;
      v230 = v151;
      v229 = v150;
      v228 = v149;
      v227 = v148;
      v226 = v147;
      if ( *(_QWORD *)v176 == -1 )
        break;
      v198 = *(_QWORD *)v176;
      if ( v147.m256i_i64[0] != -1 )
      {
        v193 = *(_OWORD *)&v176[80];
        v192 = *(_OWORD *)&v176[64];
        v191 = *(_OWORD *)&v176[48];
        v190 = *(_OWORD *)&v176[32];
        v189 = *(_OWORD *)&v176[16];
        v188 = *(_OWORD *)v176;
        v206 = v151;
        v205 = v150;
        v204 = v149;
        v203 = v148;
        v202 = v147;
        v236.m256i_i64[0] = (__int64)&v188;
        v236.m256i_i64[1] = (__int64)sub_140B036A0;
        v236.m256i_i64[2] = (__int64)&v202;
        v236.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v142, &unk_1417878C9, &v236);
        *(_OWORD *)&v209.m256i_u64[1] = v142;
        v209.m256i_i64[3] = v143;
        v209.m256i_i64[0] = 10;
        FileHandle.m256i_i64[0] = 0;
        *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
        v236.m256i_i64[2] = 1610612768;
        v236.m256i_i64[0] = (__int64)&FileHandle;
        v236.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v209, &v236) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v252,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v243 = (__int64 *)FileHandle.m256i_i64[1];
        v247 = FileHandle.m256i_i64[0];
        write((int)&v218, Buf, v253);
        if ( v218.m512i_i32[0] != -1 )
        {
          v235 = v220;
          v234 = v219;
          v233 = *(_OWORD *)&v218.m512i_u64[6];
          v232 = *(_OWORD *)&v218.m512i_u64[4];
          FileHandle = *(__m256i *)v218.m512i_i8;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v216 = &FileHandle;
            *((_QWORD *)&v216 + 1) = sub_140B036A0;
            v236.m256i_i64[0] = 0;
            v236.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v236.m256i_u64[2] = 0x2Du;
            *(_QWORD *)&v237 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v237 + 1) = 35;
            *(_QWORD *)&v238 = 2;
            *((_QWORD *)&v238 + 1) = aCodexmateLibCo_27;
            *(_QWORD *)&v239 = 45;
            *((_QWORD *)&v239 + 1) = 0x15F00000001LL;
            *(_QWORD *)&v240 = &unk_14178FCF6;
            *((_QWORD *)&v240 + 1) = &v216;
            sub_1412C36A0(&v252, &v236);
          }
          sub_1406CDA20(&FileHandle);
        }
        if ( v247 )
          sub_140001660(v243, v247, 1);
        v236.m256i_i64[0] = (__int64)&v251;
        v236.m256i_i64[1] = (__int64)sub_1414A9660;
        v236.m256i_i64[2] = (__int64)&v209;
        v236.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v162, &unk_1417876C6, &v236);
        LOBYTE(v216) = v253;
        Buf = (void *)v163;
        *(_OWORD *)v218.m512i_i8 = v163;
        v236.m256i_i64[0] = (__int64)&v216;
        v236.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v236.m256i_i64[2] = (__int64)&v218;
        v236.m256i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&FileHandle, &unk_141787489, &v236);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
        if ( v162 )
          sub_140001660(Buf, v162, 1);
        *(_OWORD *)(v11 + 80) = v213;
        *(_OWORD *)(v11 + 64) = v212;
        v77 = *(_OWORD *)v209.m256i_i8;
        v78 = *(_OWORD *)&v209.m256i_u64[2];
        v79 = v210;
        *(_OWORD *)(v11 + 48) = v211;
        *(_OWORD *)(v11 + 32) = v79;
        *(_OWORD *)(v11 + 16) = v78;
        *(_OWORD *)v11 = v77;
        sub_1406CDA20(&v202);
        sub_1406CDA20(&v188);
        return v11;
      }
      v213 = *(_OWORD *)&v176[80];
      v212 = *(_OWORD *)&v176[64];
      v211 = *(_OWORD *)&v176[48];
      v210 = *(_OWORD *)&v176[32];
      v209 = *(__m256i *)v176;
      v39 = v226.m256i_i32[2];
      v40 = v226.m256i_i8[12];
      v41 = sub_141471910(*(_QWORD *)v176, v37, v38);
      v43 = v41 == v197;
      v44 = v41 < v197;
      if ( v43 )
        v44 = v42 < v207;
      if ( v244 )
      {
LABEL_115:
        FileHandle.m256i_i64[0] = 0;
        *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
        v236.m256i_i64[2] = 1610612768;
        v236.m256i_i64[0] = (__int64)&FileHandle;
        v236.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v209, &v236) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v252,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v243 = (__int64 *)FileHandle.m256i_i64[1];
        v247 = FileHandle.m256i_i64[0];
        write((int)&v218, Buf, v253);
        if ( v218.m512i_i32[0] != -1 )
        {
          v235 = v220;
          v234 = v219;
          v233 = *(_OWORD *)&v218.m512i_u64[6];
          v232 = *(_OWORD *)&v218.m512i_u64[4];
          FileHandle = *(__m256i *)v218.m512i_i8;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v202.m256i_i64[0] = (__int64)&FileHandle;
            v202.m256i_i64[1] = (__int64)sub_140B036A0;
            v236.m256i_i64[0] = 0;
            v236.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
            *(_OWORD *)&v236.m256i_u64[2] = 0x2Du;
            *(_QWORD *)&v237 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v237 + 1) = 35;
            *(_QWORD *)&v238 = 2;
            *((_QWORD *)&v238 + 1) = aCodexmateLibCo_27;
            *(_QWORD *)&v239 = 45;
            *((_QWORD *)&v239 + 1) = 0x15F00000001LL;
            *(_QWORD *)&v240 = &unk_14178FCF6;
            *((_QWORD *)&v240 + 1) = &v202;
            sub_1412C36A0(&v252, &v236);
          }
          sub_1406CDA20(&FileHandle);
        }
        if ( v247 )
          sub_140001660(v243, v247, 1);
        v236.m256i_i64[0] = (__int64)&v251;
        v236.m256i_i64[1] = (__int64)sub_1414A9660;
        v236.m256i_i64[2] = (__int64)&v209;
        v236.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v166, &unk_1417876C6, &v236);
        v202.m256i_i8[0] = v253;
        Buf = (void *)v167;
        *(_OWORD *)v218.m512i_i8 = v167;
        v236.m256i_i64[0] = (__int64)&v202;
        v236.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v236.m256i_i64[2] = (__int64)&v218;
        v236.m256i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&FileHandle, &unk_141787489, &v236);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&FileHandle);
        v11 = i;
        if ( v166 )
          sub_140001660(Buf, v166, 1);
        *(_OWORD *)(v11 + 80) = v213;
        *(_OWORD *)(v11 + 64) = v212;
        v70 = *(_OWORD *)v209.m256i_i8;
        v71 = *(_OWORD *)&v209.m256i_u64[2];
        v72 = v210;
        v73 = v211;
        goto LABEL_125;
      }
      if ( v39 )
      {
        if ( !v44 || (unsigned __int8)v251 >= 3u )
          goto LABEL_115;
      }
      else if ( (v44 & (unsigned __int8)v40 & ((unsigned __int8)v251 < 3u)) == 0 )
      {
        goto LABEL_115;
      }
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v236.m256i_i64[2] = 1610612768;
      v236.m256i_i64[0] = (__int64)&FileHandle;
      v236.m256i_i64[1] = (__int64)&off_141790AA0;
      v61 = sub_140B036A0(&v209, &v236);
      v11 = i;
      if ( v61 )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v202.m256i_i64[2] = FileHandle.m256i_i64[2];
      *(_OWORD *)v202.m256i_i8 = *(_OWORD *)FileHandle.m256i_i8;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        FileHandle.m256i_i64[0] = (__int64)&v253;
        FileHandle.m256i_i64[1] = (__int64)sub_1407B2DA0;
        FileHandle.m256i_i64[2] = (__int64)&v251;
        FileHandle.m256i_i64[3] = (__int64)sub_1414A9660;
        *(_QWORD *)&v232 = &v202;
        *((_QWORD *)&v232 + 1) = sub_1400015F0;
        v236.m256i_i64[0] = 0;
        v236.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
        *(_OWORD *)&v236.m256i_u64[2] = 0x2Du;
        *(_QWORD *)&v237 = aSrcCoreRelayRo_1;
        *((_QWORD *)&v237 + 1) = 35;
        *(_QWORD *)&v238 = 2;
        *((_QWORD *)&v238 + 1) = aCodexmateLibCo_27;
        *(_QWORD *)&v239 = 45;
        *((_QWORD *)&v239 + 1) = 0xA800000001LL;
        *(_QWORD *)&v240 = &unk_14178785E;
        *((_QWORD *)&v240 + 1) = &FileHandle;
        sub_1412C36A0(&v252, &v236);
      }
      write((int)&v218, Buf, v253);
      if ( v218.m512i_i32[0] != -1 )
      {
        v235 = v220;
        v234 = v219;
        v233 = *(_OWORD *)&v218.m512i_u64[6];
        v232 = *(_OWORD *)&v218.m512i_u64[4];
        FileHandle = *(__m256i *)v218.m512i_i8;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v188 = &FileHandle;
          *((_QWORD *)&v188 + 1) = sub_140B036A0;
          v236.m256i_i64[0] = 0;
          v236.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v236.m256i_u64[2] = 0x2Du;
          *(_QWORD *)&v237 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v237 + 1) = 35;
          *(_QWORD *)&v238 = 2;
          *((_QWORD *)&v238 + 1) = aCodexmateLibCo_27;
          *(_QWORD *)&v239 = 45;
          *((_QWORD *)&v239 + 1) = 0x15F00000001LL;
          *(_QWORD *)&v240 = &unk_14178FCF6;
          *((_QWORD *)&v240 + 1) = &v188;
          sub_1412C36A0(&v252, &v236);
        }
        sub_1406CDA20(&FileHandle);
      }
      v236.m256i_i64[0] = (__int64)&v251;
      v236.m256i_i64[1] = (__int64)sub_1414A9660;
      v236.m256i_i64[2] = (__int64)&v202;
      v236.m256i_i64[3] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v168, &unk_1417876C6, &v236);
      LOBYTE(v188) = v253;
      v247 = v169;
      *(_OWORD *)v218.m512i_i8 = v169;
      v236.m256i_i64[0] = (__int64)&v188;
      v236.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v236.m256i_i64[2] = (__int64)&v218;
      v236.m256i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&FileHandle, &unk_141787489, &v236);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileRetry, 15, (__int64)&FileHandle);
      if ( v168 )
        sub_140001660(v247, v168, 1);
      if ( v202.m256i_i64[0] )
        sub_140001660(v202.m256i_i64[1], v202.m256i_i64[0], 1);
      sub_1406CDA20(&v209);
      v19 = v21;
    }
    if ( v147.m256i_i64[0] != -1 )
    {
      v198 = *(_QWORD *)v176;
      v213 = v151;
      v212 = v150;
      v211 = v149;
      v210 = v148;
      v209 = v147;
      FileHandle.m256i_i64[0] = 0;
      *(_OWORD *)&FileHandle.m256i_u64[1] = 1u;
      v236.m256i_i64[2] = 1610612768;
      v236.m256i_i64[0] = (__int64)&FileHandle;
      v236.m256i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v209, &v236) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v243 = (__int64 *)FileHandle.m256i_i64[1];
      v247 = FileHandle.m256i_i64[0];
      write((int)&v218, Buf, v253);
      if ( v218.m512i_i32[0] != -1 )
      {
        v235 = v220;
        v234 = v219;
        v233 = *(_OWORD *)&v218.m512i_u64[6];
        v232 = *(_OWORD *)&v218.m512i_u64[4];
        FileHandle = *(__m256i *)v218.m512i_i8;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v202.m256i_i64[0] = (__int64)&FileHandle;
          v202.m256i_i64[1] = (__int64)sub_140B036A0;
          v236.m256i_i64[0] = 0;
          v236.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
          *(_OWORD *)&v236.m256i_u64[2] = 0x2Du;
          *(_QWORD *)&v237 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v237 + 1) = 35;
          *(_QWORD *)&v238 = 2;
          *((_QWORD *)&v238 + 1) = aCodexmateLibCo_27;
          *(_QWORD *)&v239 = 45;
          *((_QWORD *)&v239 + 1) = 0x15F00000001LL;
          *(_QWORD *)&v240 = &unk_14178FCF6;
          *((_QWORD *)&v240 + 1) = &v202;
          sub_1412C36A0(&v252, &v236);
        }
        sub_1406CDA20(&FileHandle);
      }
      if ( v247 )
        sub_140001660(v243, v247, 1);
      v236.m256i_i64[0] = (__int64)&v251;
      v236.m256i_i64[1] = (__int64)sub_1414A9660;
      v236.m256i_i64[2] = (__int64)&v209;
      v236.m256i_i64[3] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v164, &unk_1417876C6, &v236);
      v202.m256i_i8[0] = v253;
      Buf = (void *)v165;
      *(_OWORD *)v218.m512i_i8 = v165;
      v236.m256i_i64[0] = (__int64)&v202;
      v236.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v236.m256i_i64[2] = (__int64)&v218;
      v236.m256i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&FileHandle, &unk_141787489, &v236);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aSettleFailed, 13, (__int64)&FileHandle);
      if ( v164 )
        sub_140001660(Buf, v164, 1);
      *(_OWORD *)(v11 + 80) = v213;
      *(_OWORD *)(v11 + 64) = v212;
      v80 = *(_OWORD *)v209.m256i_i8;
      v81 = *(_OWORD *)&v209.m256i_u64[2];
      v82 = v210;
      *(_OWORD *)(v11 + 48) = v211;
      *(_OWORD *)(v11 + 32) = v82;
      *(_OWORD *)(v11 + 16) = v81;
      *(_OWORD *)v11 = v80;
      sub_1406CE2E0(&v221.m256i_u64[1]);
      v83 = *((_QWORD *)&v225 + 1);
      v84 = v225;
      if ( *((_QWORD *)&v225 + 1) )
      {
        v85 = (_QWORD *)(v225 + 8);
        do
        {
          v86 = *(v85 - 1);
          if ( v86 )
            sub_140001660(*v85, v86, 1);
          v85 += 3;
          --v83;
        }
        while ( v83 );
      }
      v87 = *((_QWORD *)&v224 + 1);
      goto LABEL_178;
    }
    *(_QWORD *)&v206 = *(_QWORD *)&v176[88];
    v205 = *(_OWORD *)&v176[72];
    v204 = *(_OWORD *)&v176[56];
    v203 = *(_OWORD *)&v176[40];
    v202 = *(__m256i *)&v176[8];
    v214 = v226.m256i_i32[2];
    v215 = v226.m256i_i8[12];
    v45 = *v184;
    v46 = *(_QWORD *)(v182 + 24);
    v241 = 1;
    sub_140852800((unsigned int)&v194, v46, v183, v45, (v226.m256i_i32[2] == 0) & (v226.m256i_i8[12] ^ 1));
    v47 = v196;
    if ( !v196 )
    {
      if ( (v214 || (v215 & 1) != 0) && *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v221.m256i_i64[0] = (__int64)&v253;
        v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v221.m256i_i64[2] = (__int64)&v251;
        v221.m256i_i64[3] = (__int64)sub_1414A9660;
        *(_QWORD *)&v222 = &v214;
        *((_QWORD *)&v222 + 1) = sub_1414AB780;
        *(_QWORD *)&v223 = &v215;
        *((_QWORD *)&v223 + 1) = sub_1414AC660;
        v236.m256i_i64[0] = (__int64)aCodexmateLibCo_27;
        v236.m256i_i64[1] = 45;
        v236.m256i_i64[2] = (__int64)aCodexmateLibCo_27;
        v236.m256i_i64[3] = 45;
        *(_QWORD *)&v237 = &off_141787640;
        v250 = 1;
        sub_140985BA0(&unk_1417875CB, &v221, 2, &v236);
      }
      v88 = *a10;
      v250 = 1;
      sub_14084BFF0(&v209, a9, &v202, v88);
      if ( v209.m256i_i32[0] != -1 )
      {
        v220 = v213;
        v219 = v212;
        *(_OWORD *)&v218.m512i_u64[6] = v211;
        *(_OWORD *)&v218.m512i_u64[4] = v210;
        *(__m256i *)v218.m512i_i8 = v209;
        v221.m256i_i64[0] = (__int64)&v253;
        v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v221.m256i_i64[2] = (__int64)&v218;
        v221.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v140, &unk_141787685, &v221);
        *(_OWORD *)&FileHandle.m256i_u64[1] = v140;
        FileHandle.m256i_i64[3] = v141;
        FileHandle.m256i_i64[0] = 10;
        v236.m256i_i64[0] = 0;
        *(_OWORD *)&v236.m256i_u64[1] = 1u;
        v221.m256i_i64[2] = 1610612768;
        v221.m256i_i64[0] = (__int64)&v236;
        v221.m256i_i64[1] = (__int64)&off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&FileHandle, &v221) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v252,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v243 = (__int64 *)v236.m256i_i64[1];
        v247 = v236.m256i_i64[0];
        write((int)&v236, Buf, v253);
        if ( v236.m256i_i32[0] != -1 )
        {
          v225 = v240;
          v224 = v239;
          v223 = v238;
          v222 = v237;
          v221 = v236;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v216 = &v221;
            *((_QWORD *)&v216 + 1) = sub_140B036A0;
            *(_QWORD *)&v188 = aCodexmateLibCo_27;
            *((_QWORD *)&v188 + 1) = 45;
            *(_QWORD *)&v189 = aCodexmateLibCo_27;
            *((_QWORD *)&v189 + 1) = 45;
            *(_QWORD *)&v190 = &off_14178FD30;
            sub_140985BA0(&unk_14178FCF6, &v216, 2, &v188);
          }
          sub_1406CDA20(&v221);
        }
        if ( v247 )
          sub_140001660(v243, v247, 1);
        v221.m256i_i64[0] = (__int64)&v251;
        v221.m256i_i64[1] = (__int64)sub_1414A9660;
        v221.m256i_i64[2] = (__int64)&FileHandle;
        v221.m256i_i64[3] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v160, &unk_1417876C6, &v221);
        LOBYTE(v216) = v253;
        Buf = (void *)v161;
        v188 = v161;
        v221.m256i_i64[0] = (__int64)&v216;
        v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
        v221.m256i_i64[2] = (__int64)&v188;
        v221.m256i_i64[3] = (__int64)sub_14041F680;
        sub_14149C0F0(&v236, &unk_141787489, &v221);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v236);
        if ( v160 )
          sub_140001660(Buf, v160, 1);
        *(_OWORD *)(v11 + 80) = v235;
        *(_OWORD *)(v11 + 64) = v234;
        v89 = *(_OWORD *)FileHandle.m256i_i8;
        v90 = *(_OWORD *)&FileHandle.m256i_u64[2];
        v91 = v232;
        *(_OWORD *)(v11 + 48) = v233;
        *(_OWORD *)(v11 + 32) = v91;
        *(_OWORD *)(v11 + 16) = v90;
        *(_OWORD *)v11 = v89;
        v250 = 1;
        sub_1406CDA20(&v218);
        v92 = 1;
        v58 = v195;
        v93 = 1;
        goto LABEL_167;
      }
      v109 = v206;
      if ( (_QWORD)v206 )
      {
        v250 = 1;
        sub_140440300((unsigned int)&v221, DWORD2(v205), v206, (unsigned int)&unk_1417876F9, 3);
        v243 = (__int64 *)v221.m256i_i64[1];
        v247 = v221.m256i_i64[0];
        sub_1407A0A20(Buf, v253, *(__int128 *)&v221.m256i_u64[1]);
        if ( v247 )
          sub_140001660(v243, v247, 1);
        v250 = 1;
        v110 = sub_141471AC0(&v186);
        *(_OWORD *)v236.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v110 + v111 / 0xF4240uLL;
        FileHandle.m256i_i64[0] = v109;
        v221.m256i_i64[0] = (__int64)&v251;
        v221.m256i_i64[1] = (__int64)sub_1414A9660;
        v221.m256i_i64[2] = (__int64)&v236;
        v221.m256i_i64[3] = (__int64)sub_1414A9600;
        *(_QWORD *)&v222 = &FileHandle;
        *((_QWORD *)&v222 + 1) = sub_1414AC520;
        v250 = 1;
        sub_14149C0F0(v131, &unk_141787704, &v221);
        v250 = 1;
        sub_1406DB090(v253, aDegraded, 8, v131);
        v112 = *(_OWORD *)v202.m256i_i8;
        v113 = *(_OWORD *)&v202.m256i_u64[2];
        v114 = v203;
        v115 = v204;
        v223 = v204;
        v222 = v203;
        v221 = v202;
        v116 = v205;
        v224 = v205;
        *(_QWORD *)&v225 = v206;
        *(_QWORD *)(v11 + 88) = v206;
        *(_OWORD *)(v11 + 72) = v116;
        *(_OWORD *)(v11 + 56) = v115;
        *(_OWORD *)(v11 + 40) = v114;
        *(_OWORD *)(v11 + 24) = v113;
        *(_OWORD *)(v11 + 8) = v112;
      }
      else
      {
        v250 = 1;
        sub_140ADF0F0(Buf);
        v250 = 1;
        v126 = sub_141471AC0(&v186);
        *(_OWORD *)v236.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v126 + v127 / 0xF4240uLL;
        v221.m256i_i64[0] = (__int64)&v251;
        v221.m256i_i64[1] = (__int64)sub_1414A9660;
        v221.m256i_i64[2] = (__int64)&v236;
        v221.m256i_i64[3] = (__int64)sub_1414A9600;
        v250 = 1;
        sub_14149C0F0(v132, &unk_1417876DA, &v221);
        v250 = 1;
        sub_1406DB090(v253, aStable, 6, v132);
        v128 = *(_OWORD *)v202.m256i_i8;
        v129 = *(_OWORD *)&v202.m256i_u64[2];
        v130 = v203;
        *(_OWORD *)(v11 + 64) = v204;
        *(_OWORD *)(v11 + 48) = v130;
        *(_OWORD *)(v11 + 32) = v129;
        *(_OWORD *)(v11 + 16) = v128;
        *(_QWORD *)(v11 + 8) = 2;
      }
      *(_QWORD *)v11 = -1;
      if ( v194 )
        sub_140001660(v195, 32 * v194, 8);
      if ( v109 )
        return v11;
LABEL_172:
      v84 = *((_QWORD *)&v205 + 1);
      v94 = v206;
      if ( (_QWORD)v206 )
      {
        v95 = (_QWORD *)(*((_QWORD *)&v205 + 1) + 8LL);
        do
        {
          v96 = *(v95 - 1);
          if ( v96 )
            sub_140001660(*v95, v96, 1);
          v95 += 3;
          --v94;
        }
        while ( v94 );
      }
      v87 = v205;
LABEL_178:
      if ( v87 )
        sub_140001660(v84, 24 * v87, 8);
      return v11;
    }
    v48 = v20;
    v250 = 1;
    v49 = v195;
    sub_140328B20(&v236, v195, v195 + 32 * v196);
    v51 = v236.m256i_i64[2];
    v50 = v236.m256i_i64[1];
    sub_140440300((unsigned int)&v221, v236.m256i_i32[2], v236.m256i_i32[4], (unsigned int)&unk_1417876F9, 3);
    v201 = v221.m256i_i64[2];
    v200 = *(_OWORD *)v221.m256i_i8;
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
    if ( v236.m256i_i64[0] )
      sub_140001660(v50, 24 * v236.m256i_i64[0], 8);
    v248 = 1;
    v56 = sub_141471910(v53, v52, v54);
    v11 = i;
    v58 = v49;
    v20 = v48;
    v43 = v56 == v197;
    v59 = v56 < v197;
    if ( v43 )
      v59 = v57 < v207;
    v60 = v244;
    if ( v244 )
      break;
    if ( v214 )
    {
      if ( !v59 || (unsigned __int8)v251 >= 3u )
        goto LABEL_197;
    }
    else if ( (v59 & (unsigned __int8)v215 & ((unsigned __int8)v251 < 3u)) == 0 )
    {
LABEL_197:
      v221.m256i_i64[0] = (__int64)&v253;
      v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v221.m256i_i64[2] = (__int64)&v200;
      v221.m256i_i64[3] = (__int64)sub_1400015F0;
      v248 = 1;
      sub_14149C0F0(&v136, &unk_14178772E, &v221);
      *(_OWORD *)&FileHandle.m256i_u64[1] = v136;
      FileHandle.m256i_i64[3] = v137;
      FileHandle.m256i_i64[0] = 10;
      v236.m256i_i64[0] = 0;
      *(_OWORD *)&v236.m256i_u64[1] = 1u;
      v221.m256i_i64[2] = 1610612768;
      v221.m256i_i64[0] = (__int64)&v236;
      v221.m256i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&FileHandle, &v221) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v252,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v243 = (__int64 *)v236.m256i_i64[1];
      v247 = v236.m256i_i64[0];
      write((int)&v236, Buf, v253);
      if ( v236.m256i_i32[0] != -1 )
      {
        v225 = v240;
        v224 = v239;
        v223 = v238;
        v222 = v237;
        v221 = v236;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v209.m256i_i64[0] = (__int64)&v221;
          v209.m256i_i64[1] = (__int64)sub_140B036A0;
          v218.m512i_i64[0] = (__int64)aCodexmateLibCo_27;
          v218.m512i_i64[1] = 45;
          v218.m512i_i64[2] = (__int64)aCodexmateLibCo_27;
          v218.m512i_i64[3] = 45;
          v218.m512i_i64[4] = (__int64)&off_14178FD30;
          sub_140985BA0(&unk_14178FCF6, &v209, 2, &v218);
        }
        sub_1406CDA20(&v221);
      }
      if ( v247 )
        sub_140001660(v243, v247, 1);
      v236.m256i_i64[0] = v47;
      v221.m256i_i64[0] = (__int64)&v251;
      v221.m256i_i64[1] = (__int64)sub_1414A9660;
      v221.m256i_i64[2] = (__int64)&v236;
      v221.m256i_i64[3] = (__int64)sub_1414AC520;
      sub_14149C0F0(&v152, &unk_14178774F, &v221);
      v209.m256i_i8[0] = v253;
      Buf = (void *)v153;
      *(_OWORD *)v218.m512i_i8 = v153;
      v221.m256i_i64[0] = (__int64)&v209;
      v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v221.m256i_i64[2] = (__int64)&v218;
      v221.m256i_i64[3] = (__int64)sub_14041F680;
      sub_14149C0F0(&v236, &unk_141787489, &v221);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aPostconditionF, 20, (__int64)&v236);
      if ( v152 )
        sub_140001660(Buf, v152, 1);
      *(_OWORD *)(v11 + 80) = v235;
      *(_OWORD *)(v11 + 64) = v234;
      v106 = *(_OWORD *)FileHandle.m256i_i8;
      v107 = *(_OWORD *)&FileHandle.m256i_u64[2];
      v108 = v232;
      *(_OWORD *)(v11 + 48) = v233;
      *(_OWORD *)(v11 + 32) = v108;
      *(_OWORD *)(v11 + 16) = v107;
      *(_OWORD *)v11 = v106;
      v93 = 1;
      goto LABEL_218;
    }
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v236.m256i_i64[0] = (__int64)&v253;
      v236.m256i_i64[1] = (__int64)sub_1407B2DA0;
      v236.m256i_i64[2] = (__int64)&v251;
      v236.m256i_i64[3] = (__int64)sub_1414A9660;
      *(_QWORD *)&v237 = &v200;
      *((_QWORD *)&v237 + 1) = sub_1400015F0;
      v221.m256i_i64[0] = 0;
      v221.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
      *(_OWORD *)&v221.m256i_u64[2] = 0x2Du;
      *(_QWORD *)&v222 = aSrcCoreRelayRo_1;
      *((_QWORD *)&v222 + 1) = 35;
      *(_QWORD *)&v223 = 2;
      *((_QWORD *)&v223 + 1) = aCodexmateLibCo_27;
      *(_QWORD *)&v224 = 45;
      *((_QWORD *)&v224 + 1) = 0x10B00000001LL;
      *(_QWORD *)&v225 = &unk_1417877DC;
      *((_QWORD *)&v225 + 1) = &v236;
      v248 = 1;
      sub_1412C36A0(&v252, &v221);
    }
    v248 = 1;
    write((int)&FileHandle, Buf, v253);
    if ( FileHandle.m256i_i32[0] != -1 )
    {
      v240 = v235;
      v239 = v234;
      v238 = v233;
      v237 = v232;
      v236 = FileHandle;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v218.m512i_i64[0] = (__int64)&v236;
        v218.m512i_i64[1] = (__int64)sub_140B036A0;
        v221.m256i_i64[0] = 0;
        v221.m256i_i64[1] = (__int64)aCodexmateLibCo_27;
        *(_OWORD *)&v221.m256i_u64[2] = 0x2Du;
        *(_QWORD *)&v222 = aSrcCoreRelayRo_1;
        *((_QWORD *)&v222 + 1) = 35;
        *(_QWORD *)&v223 = 2;
        *((_QWORD *)&v223 + 1) = aCodexmateLibCo_27;
        *(_QWORD *)&v224 = 45;
        *((_QWORD *)&v224 + 1) = 0x15F00000001LL;
        *(_QWORD *)&v225 = &unk_14178FCF6;
        *((_QWORD *)&v225 + 1) = &v218;
        sub_1412C36A0(&v252, &v221);
      }
      v248 = 1;
      sub_1406CDA20(&v236);
    }
    if ( (_QWORD)v200 )
      sub_140001660(*((_QWORD *)&v200 + 1), v200, 1);
    v62 = (_QWORD *)(v58 + 8);
    do
    {
      v63 = *(v62 - 1);
      if ( v63 )
        sub_140001660(*v62, v63, 1);
      v62 += 4;
      --v47;
    }
    while ( v47 );
    if ( v194 )
      sub_140001660(v58, 32 * v194, 8);
    sub_1406CE2E0(&v202);
    v64 = *((_QWORD *)&v205 + 1);
    v65 = v206;
    if ( (_QWORD)v206 )
    {
      v66 = (_QWORD *)(*((_QWORD *)&v205 + 1) + 8LL);
      do
      {
        v67 = *(v66 - 1);
        if ( v67 )
          sub_140001660(*v66, v67, 1);
        v66 += 3;
        --v65;
      }
      while ( v65 );
    }
    if ( (_QWORD)v205 )
      sub_140001660(v64, 24 * v205, 8);
    v19 = v21;
  }
  v217 = *(_QWORD *)&v176[88];
  v216 = *(_OWORD *)&v176[72];
  v221.m256i_i64[0] = (__int64)&v200;
  v221.m256i_i64[1] = (__int64)sub_1400015F0;
  sub_14149C0F0(&v158, &unk_14178777C, &v221);
  v97 = v217;
  if ( v217 == (_QWORD)v216 )
    sub_141689AB0(&v216);
  v98 = *((_QWORD *)&v216 + 1);
  v99 = 3 * v97;
  *(_QWORD *)(*((_QWORD *)&v216 + 1) + 8 * v99 + 16) = v159;
  *(_OWORD *)(v98 + 8 * v99) = v158;
  v217 = v97 + 1;
  sub_14084BFF0(&v209, a9, &v176[8], *a10);
  v93 = v209.m256i_i64[0] != -1;
  if ( v209.m256i_i64[0] == -1 )
  {
    sub_140440300((unsigned int)&v221, DWORD2(v216), v217, (unsigned int)&unk_1417876F9, 3);
    v243 = (__int64 *)v221.m256i_i64[1];
    v247 = v221.m256i_i64[0];
    sub_1407A0A20(Buf, v253, *(__int128 *)&v221.m256i_u64[1]);
    if ( v247 )
      sub_140001660(v243, v247, 1);
    v117 = sub_141471AC0(&v186);
    *(_OWORD *)v236.m256i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v117 + v118 / 0xF4240uLL;
    FileHandle.m256i_i64[0] = v217;
    v221.m256i_i64[0] = (__int64)&v251;
    v221.m256i_i64[1] = (__int64)sub_1414A9660;
    v221.m256i_i64[2] = (__int64)&v236;
    v221.m256i_i64[3] = (__int64)sub_1414A9600;
    *(_QWORD *)&v222 = &FileHandle;
    *((_QWORD *)&v222 + 1) = sub_1414AC520;
    sub_14149C0F0(&v154, &unk_141787704, &v221);
    v218.m512i_i8[0] = v253;
    Buf = (void *)v155;
    *(_OWORD *)FileHandle.m256i_i8 = v155;
    v221.m256i_i64[0] = (__int64)&v218;
    v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
    v221.m256i_i64[2] = (__int64)&FileHandle;
    v221.m256i_i64[3] = (__int64)sub_14041F680;
    sub_14149C0F0(&v236, &unk_141787489, &v221);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aDegraded, 8, (__int64)&v236);
    if ( v154 )
      sub_140001660(Buf, v154, 1);
    v119 = *(_OWORD *)v202.m256i_i8;
    v120 = *(_OWORD *)&v202.m256i_u64[2];
    v121 = v203;
    v122 = v204;
    v223 = v204;
    v222 = v203;
    v221 = v202;
    v123 = v216;
    v224 = v216;
    *(_QWORD *)&v225 = v217;
    *(_QWORD *)(v11 + 88) = v217;
    *(_OWORD *)(v11 + 72) = v123;
    *(_OWORD *)(v11 + 56) = v122;
    *(_OWORD *)(v11 + 40) = v121;
    *(_OWORD *)(v11 + 24) = v120;
    *(_OWORD *)(v11 + 8) = v119;
    *(_QWORD *)v11 = -1;
  }
  else
  {
    v220 = v213;
    v219 = v212;
    *(_OWORD *)&v218.m512i_u64[6] = v211;
    *(_OWORD *)&v218.m512i_u64[4] = v210;
    *(__m256i *)v218.m512i_i8 = v209;
    v221.m256i_i64[0] = (__int64)&v253;
    v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
    v221.m256i_i64[2] = (__int64)&v218;
    v221.m256i_i64[3] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v138, &unk_1417877B9, &v221);
    *(_OWORD *)&FileHandle.m256i_u64[1] = v138;
    FileHandle.m256i_i64[3] = v139;
    FileHandle.m256i_i64[0] = 10;
    v236.m256i_i64[0] = 0;
    *(_OWORD *)&v236.m256i_u64[1] = 1u;
    v221.m256i_i64[2] = 1610612768;
    v221.m256i_i64[0] = (__int64)&v236;
    v221.m256i_i64[1] = (__int64)&off_141790AA0;
    if ( (unsigned __int8)sub_140B036A0(&FileHandle, &v221) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v252,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v243 = (__int64 *)v236.m256i_i64[1];
    v247 = v236.m256i_i64[0];
    write((int)&v236, Buf, v253);
    if ( v236.m256i_i32[0] != -1 )
    {
      v225 = v240;
      v224 = v239;
      v223 = v238;
      v222 = v237;
      v221 = v236;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v185[0] = &v221;
        v185[1] = sub_140B036A0;
        *(_QWORD *)&v188 = aCodexmateLibCo_27;
        *((_QWORD *)&v188 + 1) = 45;
        *(_QWORD *)&v189 = aCodexmateLibCo_27;
        *((_QWORD *)&v189 + 1) = 45;
        *(_QWORD *)&v190 = &off_14178FD30;
        sub_140985BA0(&unk_14178FCF6, v185, 2, &v188);
      }
      sub_1406CDA20(&v221);
    }
    if ( v247 )
      sub_140001660(v243, v247, 1);
    v221.m256i_i64[0] = (__int64)&v251;
    v221.m256i_i64[1] = (__int64)sub_1414A9660;
    v221.m256i_i64[2] = (__int64)&FileHandle;
    v221.m256i_i64[3] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v156, &unk_1417876C6, &v221);
    LOBYTE(v185[0]) = v253;
    Buf = (void *)v157;
    v188 = v157;
    v221.m256i_i64[0] = (__int64)v185;
    v221.m256i_i64[1] = (__int64)sub_1407B2DA0;
    v221.m256i_i64[2] = (__int64)&v188;
    v221.m256i_i64[3] = (__int64)sub_14041F680;
    sub_14149C0F0(&v236, &unk_141787489, &v221);
    sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v236);
    if ( v156 )
      sub_140001660(Buf, v156, 1);
    *(_OWORD *)(v11 + 80) = v235;
    *(_OWORD *)(v11 + 64) = v234;
    v100 = *(_OWORD *)FileHandle.m256i_i8;
    v101 = *(_OWORD *)&FileHandle.m256i_u64[2];
    v102 = v232;
    *(_OWORD *)(v11 + 48) = v233;
    *(_OWORD *)(v11 + 32) = v102;
    *(_OWORD *)(v11 + 16) = v101;
    *(_OWORD *)v11 = v100;
    sub_1406CDA20(&v218);
    v103 = v217;
    if ( v217 )
    {
      v104 = (_QWORD *)(*((_QWORD *)&v216 + 1) + 8LL);
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
    if ( (_QWORD)v216 )
      sub_140001660(*((_QWORD *)&v216 + 1), 24 * v216, 8);
  }
LABEL_218:
  if ( (_QWORD)v200 )
    sub_140001660(*((_QWORD *)&v200 + 1), v200, 1);
  v92 = v60 ^ 1;
  v124 = (_QWORD *)(v58 + 8);
  do
  {
    v125 = *(v124 - 1);
    if ( v125 )
      sub_140001660(*v124, v125, 1);
    v124 += 4;
    --v47;
  }
  while ( v47 );
LABEL_167:
  if ( v194 )
    sub_140001660(v58, 32 * v194, 8);
  if ( v93 )
    sub_1406CE2E0(&v202);
  if ( v92 )
    goto LABEL_172;
  return v11;
}
