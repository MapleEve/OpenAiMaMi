// win 1.2.7 | module src/core/oauth_refresh.rs | ea 0x1402c30a0 | name sub_1402C30A0
// win 1.2.7 | module src/core/oauth_refresh.rs | attributed via panic-Location xref (win-native)
int __fastcall sub_1402C30A0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 v14; // rdi
  void *v15; // r13
  __m128i si128; // xmm1
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // r13
  __int64 v27; // r13
  unsigned __int64 v28; // rax
  char v29; // di
  void *v30; // r13
  __int64 (__fastcall *v31)(unsigned __int64); // rax
  __int64 v32; // rdi
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  void *v35; // rax
  __int64 v36; // r13
  __int64 v37; // r13
  __m128i v38; // xmm1
  __int64 v39; // rdi
  __int64 v40; // rdx
  char v41; // di
  char v42; // r13
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r15
  char v51; // al
  __m128i v52; // kr20_16
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rdi
  __m128i *v60; // rax
  const __m128i *v61; // r14
  __m128i *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rdi
  unsigned __int8 v70; // al
  unsigned __int64 v71; // rdx
  __int64 v72; // rcx
  __m128i *v73; // rax
  __m128i v74; // xmm1
  __int64 v75; // rsi
  __int64 v76; // rdi
  __m128i *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int16 v80; // di
  __m128i v81; // xmm6
  __int64 v82; // rdi
  __int64 v83; // rcx
  __m128i *v84; // rax
  __m128i v85; // xmm0
  __int64 v86; // r14
  __int64 v87; // rdi
  __m128i v88; // xmm0
  __m128i v89; // xmm1
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // r14
  __int64 v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // r14
  __int64 v99; // rdi
  __m128i v100; // xmm0
  __m128i v101; // xmm1
  __m128i *v102; // rax
  __int64 v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // r14
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // rdx
  __int64 v111; // rdx
  __m128i *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __m128i v115; // xmm1
  __int64 v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 *v119; // rbx
  __int64 v120; // rcx
  __int64 v121; // r14
  __m128i v122; // xmm1
  __m128i v123; // xmm0
  __m128i *v124; // rax
  __int64 v125; // r15
  __int64 v126; // rdx
  __m128i v127[11]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v128; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v129; // [rsp+F8h] [rbp+78h]
  __int64 v130; // [rsp+108h] [rbp+88h]
  __m128i v131; // [rsp+110h] [rbp+90h]
  __int128 v132; // [rsp+120h] [rbp+A0h]
  __int64 v133; // [rsp+130h] [rbp+B0h]
  __m128i v134; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v135; // [rsp+148h] [rbp+C8h]
  __m128i v136; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v137; // [rsp+160h] [rbp+E0h]
  __m128i v138; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v139; // [rsp+178h] [rbp+F8h]
  __m128i v140; // [rsp+180h] [rbp+100h] BYREF
  __int64 v141; // [rsp+190h] [rbp+110h]
  __m128i v142; // [rsp+198h] [rbp+118h] BYREF
  __int64 v143; // [rsp+1A8h] [rbp+128h]
  __m128i v144; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v145; // [rsp+1C0h] [rbp+140h]
  __m128i v146; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v147; // [rsp+1D8h] [rbp+158h]
  __m128i v148; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v149; // [rsp+1F0h] [rbp+170h]
  __m128i v150; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v151; // [rsp+208h] [rbp+188h]
  __m128i v152; // [rsp+210h] [rbp+190h] BYREF
  __int64 v153; // [rsp+220h] [rbp+1A0h]
  __m128i v154; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v155; // [rsp+238h] [rbp+1B8h]
  _QWORD v156[2]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v157; // [rsp+250h] [rbp+1D0h]
  __int64 v158; // [rsp+258h] [rbp+1D8h]
  HANDLE hObject[2]; // [rsp+260h] [rbp+1E0h] BYREF
  const char *v160; // [rsp+270h] [rbp+1F0h]
  __int64 v161; // [rsp+278h] [rbp+1F8h]
  const char *v162; // [rsp+280h] [rbp+200h]
  __int64 v163; // [rsp+288h] [rbp+208h]
  __int64 v164; // [rsp+290h] [rbp+210h]
  void *v165; // [rsp+298h] [rbp+218h]
  const char *v166; // [rsp+2A0h] [rbp+220h]
  __int64 v167; // [rsp+2A8h] [rbp+228h]
  const char *v168; // [rsp+2B0h] [rbp+230h]
  __int64 v169; // [rsp+2B8h] [rbp+238h]
  __int64 v170; // [rsp+2C0h] [rbp+240h] BYREF
  __m128i v171; // [rsp+2C8h] [rbp+248h]
  __int64 v172; // [rsp+2D8h] [rbp+258h]
  __m128i v173[4]; // [rsp+2E0h] [rbp+260h] BYREF
  unsigned __int16 v174; // [rsp+328h] [rbp+2A8h]
  __int64 v175; // [rsp+370h] [rbp+2F0h]
  __int128 v176; // [rsp+380h] [rbp+300h] BYREF
  __int64 v177; // [rsp+390h] [rbp+310h]
  __m256i v178; // [rsp+3A0h] [rbp+320h] BYREF
  __m128i v179; // [rsp+3C0h] [rbp+340h] BYREF
  __m128i v180; // [rsp+3D0h] [rbp+350h]
  __m128i v181; // [rsp+3E0h] [rbp+360h] BYREF
  __m128i v182; // [rsp+3F0h] [rbp+370h] BYREF
  __m128i v183; // [rsp+400h] [rbp+380h]
  __int64 v184; // [rsp+410h] [rbp+390h]
  __int64 v185; // [rsp+418h] [rbp+398h]
  __int64 v186; // [rsp+420h] [rbp+3A0h]
  __m128i v187; // [rsp+430h] [rbp+3B0h]
  __int64 v188; // [rsp+440h] [rbp+3C0h]
  __int64 v189; // [rsp+500h] [rbp+480h] BYREF
  __m128i v190; // [rsp+508h] [rbp+488h] BYREF
  __int64 v191; // [rsp+518h] [rbp+498h]
  __int64 v192; // [rsp+520h] [rbp+4A0h]
  __int64 v193; // [rsp+528h] [rbp+4A8h]
  __int64 v194; // [rsp+530h] [rbp+4B0h]
  __int64 v195; // [rsp+538h] [rbp+4B8h]
  __int64 v196; // [rsp+540h] [rbp+4C0h]
  __int64 v197; // [rsp+548h] [rbp+4C8h]
  __int64 v198; // [rsp+550h] [rbp+4D0h]
  __int64 v199; // [rsp+558h] [rbp+4D8h]
  __int64 v200; // [rsp+560h] [rbp+4E0h]
  __int64 v201; // [rsp+568h] [rbp+4E8h]
  _QWORD v202[2]; // [rsp+570h] [rbp+4F0h] BYREF
  __m256i v203; // [rsp+580h] [rbp+500h] BYREF
  __m128i v204[9]; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v205; // [rsp+630h] [rbp+5B0h] BYREF
  __int128 v206; // [rsp+638h] [rbp+5B8h]
  __int64 v207; // [rsp+650h] [rbp+5D0h]
  __int64 v208; // [rsp+658h] [rbp+5D8h]
  __int64 v209; // [rsp+660h] [rbp+5E0h]
  __int64 v210; // [rsp+668h] [rbp+5E8h]
  __m128i v211; // [rsp+670h] [rbp+5F0h] BYREF
  __int64 v212; // [rsp+680h] [rbp+600h]
  __int64 v213; // [rsp+688h] [rbp+608h]
  HANDLE v214[2]; // [rsp+690h] [rbp+610h] BYREF
  HANDLE v215; // [rsp+6A0h] [rbp+620h] BYREF
  __int64 v216; // [rsp+6A8h] [rbp+628h]
  __m128i v217; // [rsp+6B0h] [rbp+630h] BYREF
  __m128i v218; // [rsp+6C0h] [rbp+640h] BYREF
  _BYTE v219[72]; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v220; // [rsp+718h] [rbp+698h]
  __int64 v221; // [rsp+720h] [rbp+6A0h]
  __int64 v222; // [rsp+728h] [rbp+6A8h]
  __int64 v223; // [rsp+730h] [rbp+6B0h]
  __int64 v224; // [rsp+738h] [rbp+6B8h]
  __int64 v225; // [rsp+740h] [rbp+6C0h]
  __int64 v226; // [rsp+748h] [rbp+6C8h]
  __int64 v227; // [rsp+760h] [rbp+6E0h]
  __int64 v228; // [rsp+768h] [rbp+6E8h]
  __int64 v229; // [rsp+7F8h] [rbp+778h]
  __int64 v230; // [rsp+800h] [rbp+780h]
  __int64 v231; // [rsp+808h] [rbp+788h]
  __int64 v232; // [rsp+810h] [rbp+790h]
  __int64 v233; // [rsp+818h] [rbp+798h]
  __int128 v234; // [rsp+820h] [rbp+7A0h]
  __int64 v235; // [rsp+830h] [rbp+7B0h]
  __int64 v236; // [rsp+838h] [rbp+7B8h]
  __int64 v237; // [rsp+840h] [rbp+7C0h]
  __int64 v238; // [rsp+848h] [rbp+7C8h]
  __int64 v239; // [rsp+850h] [rbp+7D0h]
  __int64 v240; // [rsp+858h] [rbp+7D8h]
  void *v241; // [rsp+860h] [rbp+7E0h]
  char v242; // [rsp+869h] [rbp+7E9h]
  char v243; // [rsp+86Ah] [rbp+7EAh]
  _BYTE v244[4]; // [rsp+86Bh] [rbp+7EBh] BYREF
  char v245; // [rsp+86Fh] [rbp+7EFh]
  __int64 v246; // [rsp+870h] [rbp+7F0h]
  __int64 v247; // [rsp+878h] [rbp+7F8h]
  char v248; // [rsp+886h] [rbp+806h]
  char v249; // [rsp+887h] [rbp+807h]
  char v250; // [rsp+888h] [rbp+808h]
  char v251; // [rsp+889h] [rbp+809h]
  char v252; // [rsp+88Ah] [rbp+80Ah]
  char v253; // [rsp+88Bh] [rbp+80Bh]
  char v254; // [rsp+88Ch] [rbp+80Ch]
  char v255; // [rsp+88Dh] [rbp+80Dh]
  char v256; // [rsp+88Eh] [rbp+80Eh]
  char v257; // [rsp+88Fh] [rbp+80Fh]
  __int64 v258; // [rsp+890h] [rbp+810h]
  char v259; // [rsp+89Fh] [rbp+81Fh]
  char v260; // [rsp+8A0h] [rbp+820h]
  char v261; // [rsp+8A1h] [rbp+821h]
  char v262; // [rsp+8A2h] [rbp+822h]
  char v263; // [rsp+8A3h] [rbp+823h]
  char v264; // [rsp+8A4h] [rbp+824h]
  char v265; // [rsp+8A5h] [rbp+825h]
  char v266; // [rsp+8A6h] [rbp+826h]
  char v267; // [rsp+8A7h] [rbp+827h]
  __int64 v268; // [rsp+8A8h] [rbp+828h]

  v268 = -2;
  sub_140FF5600(&v203);
  v258 = v203.m256i_i64[1];
  sub_140FE2210(
    (__int64)&v217,
    v203.m256i_i32[2],
    v203.m256i_i32[4],
    (__int64)"account credential.live-auth.locklive auth.account-domain.lockaccount state.account-transition.lockaccount transition",
    18);
  v14 = v217.m128i_i64[0];
  if ( v217.m128i_i64[0] != -1 )
  {
    v181 = *(__m128i *)&v219[48];
    v180 = *(__m128i *)&v219[32];
    v179 = *(__m128i *)&v219[16];
    *(__m128i *)&v178.m256i_u64[2] = _mm_loadu_si128((const __m128i *)v219);
    *(__m128i *)v178.m256i_i8 = _mm_loadu_si128(&v218);
  }
  v15 = (void *)v217.m128i_i64[1];
  if ( v203.m256i_i64[0] )
    sub_140001660(v258, v203.m256i_i64[0], 1);
  if ( (_DWORD)v14 != -1 )
  {
    v217.m128i_i64[0] = v14;
    v217.m128i_i64[1] = (__int64)v15;
    si128 = _mm_load_si128((const __m128i *)&v178.m256i_u64[2]);
    v218 = *(__m128i *)v178.m256i_i8;
    *(__m128i *)v219 = si128;
    *(__m128i *)&v219[16] = v179;
    *(__m128i *)&v219[32] = v180;
    *(__m128i *)&v219[48] = _mm_load_si128(&v181);
    v170 = 0;
    v171 = (__m128i)1uLL;
    v203.m256i_i64[2] = 1610612768;
    v203.m256i_i64[0] = (__int64)&v170;
    v203.m256i_i64[1] = (__int64)&off_1419E98E0;
    if ( (unsigned __int8)sub_14104A7D0(&v217, &v203) )
      sub_141939040(
        (unsigned int)aADisplayImplem_0,
        55,
        (unsigned int)v244,
        (unsigned int)&unk_1419E6AE0,
        (__int64)&off_1419EB798);
    a1[1].m128i_i64[0] = v171.m128i_i64[1];
    *a1 = _mm_loadu_si128((const __m128i *)&v170);
    return sub_14029DA50(&v217);
  }
  v215 = v15;
  sub_140ED4870(&v217, a2, a3);
  if ( v217.m128i_i64[0] == -2 )
  {
    v182 = *(__m128i *)&v219[56];
    v181 = *(__m128i *)&v219[40];
    v18 = _mm_loadu_si128((const __m128i *)&v217.m128i_u64[1]);
    v19 = _mm_loadu_si128((const __m128i *)&v218.m128i_u64[1]);
    v180 = *(__m128i *)&v219[24];
    v179 = *(__m128i *)&v219[8];
    *(__m128i *)&v178.m256i_u64[2] = v19;
    *(__m128i *)v178.m256i_i8 = v18;
    v203.m256i_i64[0] = (__int64)&v178;
    v203.m256i_i64[1] = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v154, &unk_1419E7B42, &v203);
    a1[1].m128i_i64[0] = v155;
    *a1 = _mm_loadu_si128(&v154);
    sub_14029DA50(&v178);
LABEL_125:
    v65 = sub_141412E80(&v215);
    if ( v65 && (unsigned int)(v65 & 3) - 2 >= 2 && (v65 & 3) != 0 )
    {
      v217.m128i_i64[1] = v65 - 1;
      v217.m128i_i8[0] = 3;
      sub_1416BCB00(&v217.m128i_u64[1]);
    }
    return CloseHandle(v215);
  }
  sub_1418F44E0(v127, &v217, 0xB0u);
  v20 = a4->m128i_i64[0];
  if ( a4->m128i_i64[0] != -1 && v20 )
    sub_140001660(a4->m128i_i64[1], v20, 1);
  v21 = a4[1].m128i_i64[1];
  if ( v21 != -1 && v21 )
    sub_140001660(a4[2].m128i_i64[0], v21, 1);
  sub_140034190(a4[3].m128i_i64);
  v22 = a4[9].m128i_i64[0];
  if ( v22 != -1 && v22 )
    sub_140001660(a4[9].m128i_i64[1], v22, 1);
  sub_1418F44E0(a4, v127, 0xB0u);
  v214[0] = nullptr;
  v258 = -1;
  if ( !a8 )
    goto LABEL_70;
  v246 = -1;
  v267 = 1;
  sub_14169D480(&v203, a8, a9);
  v26 = v203.m256i_u64[1];
  v25 = v203.m256i_i64[0];
  if ( v203.m256i_i64[0] == -1 )
  {
    switch ( v203.m256i_i8[8] & 3 )
    {
      case 0:
        LOBYTE(v28) = *(_BYTE *)(v203.m256i_i64[1] + 16);
        break;
      case 1:
        LOBYTE(v28) = *(_BYTE *)(v203.m256i_i64[1] + 31);
        break;
      case 2:
        v247 = v203.m256i_i64[0];
        v253 = 1;
        v31 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v24, v203.m256i_i64[0]) + 8);
        v253 = 1;
        LOBYTE(v28) = v31(HIDWORD(v26));
        v25 = v247;
        break;
      case 3:
        v28 = HIDWORD(v203.m256i_i64[1]);
        break;
    }
    if ( (_BYTE)v28 )
    {
      if ( (v26 & 3) - 2 >= 2 && (v26 & 3) != 0 )
      {
        v217.m128i_i64[1] = v26 - 1;
        v217.m128i_i8[0] = 3;
        v246 = -1;
        v267 = 1;
        sub_1416BCB00(&v217.m128i_u64[1]);
      }
      goto LABEL_58;
    }
    v247 = v25;
    v217.m128i_i64[0] = v26;
    v253 = 0;
    sub_140032B80(&v217);
    goto LABEL_70;
  }
  v241 = (void *)v203.m256i_i64[1];
  v247 = v203.m256i_i64[0];
  v217 = *(__m128i *)&v203.m256i_u64[1];
  v218 = 0;
  sub_140630900(&v178, &v217);
  v27 = v178.m256i_i64[0];
  if ( v178.m256i_i64[0] != -2 )
  {
    sub_1418F44E0((__m128i *)&v217.m128i_u64[1], (const __m128i *)&v178.m256i_u64[1], 0xA8u);
    v217.m128i_i64[0] = v27;
    v29 = sub_140ED8380(&v217, a4, a8, a9);
    if ( v27 != -1 && v27 )
      sub_140001660(v217.m128i_i64[1], v27, 1);
    if ( v218.m128i_i64[1] != -1 && v218.m128i_i64[1] )
      sub_140001660(*(_QWORD *)v219, v218.m128i_i64[1], 1);
    v30 = v241;
    if ( *(_QWORD *)&v219[16] != -1 && *(_QWORD *)&v219[16] )
      sub_140001660(*(_QWORD *)&v219[24], *(_QWORD *)&v219[16], 1);
    if ( *(_QWORD *)&v219[40] != -1 && *(_QWORD *)&v219[40] )
      sub_140001660(*(_QWORD *)&v219[48], *(_QWORD *)&v219[40], 1);
    if ( *(_QWORD *)&v219[64] != -1 && *(_QWORD *)&v219[64] )
      sub_140001660(v220, *(_QWORD *)&v219[64], 1);
    if ( v222 != -1 && v222 )
      sub_140001660(v223, v222, 1);
    if ( v225 != -1 && v225 )
      sub_140001660(v226, v225, 1);
    if ( v247 )
      sub_140001660(v30, v247, 1);
    if ( v29 )
      goto LABEL_58;
LABEL_70:
    v41 = 0;
    v42 = 0;
    goto LABEL_71;
  }
  sub_14002F910(&v178.m256i_u64[1]);
  if ( v247 )
    sub_140001660(v241, v247, 1);
LABEL_58:
  v246 = -1;
  v267 = 1;
  sub_1416828D0(
    (unsigned int)&v203,
    a6,
    a7,
    (unsigned int)".live-auth.locklive auth.account-domain.lockaccount state.account-transition.lockaccount transition",
    15);
  v258 = v203.m256i_i64[1];
  sub_140FE2210(
    (__int64)&v217,
    v203.m256i_i32[2],
    v203.m256i_i32[4],
    (__int64)"live auth.account-domain.lockaccount state.account-transition.lockaccount transition",
    9);
  v32 = v217.m128i_i64[0];
  if ( v217.m128i_i64[0] != -1 )
  {
    v181 = *(__m128i *)&v219[48];
    v33 = _mm_loadu_si128(&v218);
    v34 = _mm_loadu_si128((const __m128i *)v219);
    v180 = *(__m128i *)&v219[32];
    v179 = *(__m128i *)&v219[16];
    *(__m128i *)&v178.m256i_u64[2] = v34;
    *(__m128i *)v178.m256i_i8 = v33;
  }
  v35 = (void *)v217.m128i_i64[1];
  v36 = a8;
  if ( v203.m256i_i64[0] )
  {
    v37 = v217.m128i_i64[1];
    sub_140001660(v258, v203.m256i_i64[0], 1);
    v35 = (void *)v37;
    v36 = a8;
  }
  if ( (_DWORD)v32 != -1 )
  {
    v217.m128i_i64[0] = v32;
    v217.m128i_i64[1] = (__int64)v35;
    v38 = _mm_load_si128((const __m128i *)&v178.m256i_u64[2]);
    v218 = *(__m128i *)v178.m256i_i8;
    *(__m128i *)v219 = v38;
    *(__m128i *)&v219[16] = v179;
    *(__m128i *)&v219[32] = v180;
    *(__m128i *)&v219[48] = _mm_load_si128(&v181);
    v170 = 0;
    v171 = (__m128i)1uLL;
    v203.m256i_i64[2] = 1610612768;
    v203.m256i_i64[0] = (__int64)&v170;
    v203.m256i_i64[1] = (__int64)&off_1419E98E0;
    if ( (unsigned __int8)sub_14104A7D0(&v217, &v203) )
      sub_141939040(
        (unsigned int)aADisplayImplem_0,
        55,
        (unsigned int)v244,
        (unsigned int)&unk_1419E6AE0,
        (__int64)&off_1419EB798);
    a1[1].m128i_i64[0] = v171.m128i_i64[1];
    *a1 = _mm_loadu_si128((const __m128i *)&v170);
    v246 = -1;
    v267 = 1;
    sub_14029DA50(&v217);
LABEL_116:
    v48 = -1;
    goto LABEL_117;
  }
  v241 = v35;
  hObject[0] = v35;
  sub_14169D480(&v203, v36, a9);
  if ( v203.m256i_i64[0] == -1 )
  {
    v178.m256i_i64[0] = v203.m256i_i64[1];
    v217.m128i_i64[0] = (__int64)&v178;
    v217.m128i_i64[1] = (__int64)sub_1416BB0B0;
    sub_1416ABFD0(&v148, &unk_1419E7837, &v217);
    a1[1].m128i_i64[0] = v149;
    *a1 = _mm_loadu_si128(&v148);
    v207 = -1;
    v251 = 1;
    sub_140032B80(&v178);
    goto LABEL_111;
  }
  v258 = v203.m256i_i64[0];
  v39 = v203.m256i_i64[2];
  v247 = v203.m256i_i64[1];
  *(_OWORD *)v178.m256i_i8 = *(_OWORD *)&v203.m256i_u64[1];
  *(_OWORD *)&v178.m256i_u64[2] = 0;
  v208 = -1;
  v252 = 1;
  sub_140630900(&v217, &v178);
  if ( v217.m128i_i64[0] == -2 )
  {
    v170 = v217.m128i_i64[1];
    v178.m256i_i64[0] = (__int64)&v170;
    v178.m256i_i64[1] = (__int64)sub_14163CE40;
    sub_1416ABFD0(&v150, &unk_1419E7804, &v178);
    a1[1].m128i_i64[0] = v151;
    *a1 = _mm_loadu_si128(&v150);
    v229 = -1;
    v260 = 1;
    v259 = 1;
    sub_14002F910(&v170);
    v40 = v258;
    if ( !v258 )
      goto LABEL_111;
    goto LABEL_68;
  }
  v229 = -1;
  v260 = 1;
  v259 = 1;
  v42 = sub_140ED8380(&v217, a4, v36, a9);
  if ( v42 )
  {
    v230 = v39;
    v213 = -1;
    v257 = 1;
    v256 = 1;
    v66 = sub_1402C22D0(a4, &v217);
    v41 = v66;
    LOBYTE(v66) = 1;
    LODWORD(v239) = v66;
    if ( !v41 )
    {
      v213 = -1;
      v257 = 1;
      v256 = 1;
      v67 = sub_1402C2BE0(a2, a3, v247, v230);
      if ( v67 )
      {
        v170 = v67;
        v178.m256i_i64[0] = (__int64)&v170;
        v178.m256i_i64[1] = (__int64)sub_1416BB0B0;
        sub_1416ABFD0(&v152, &unk_1419E77CA, &v178);
        a1[1].m128i_i64[0] = v153;
        *a1 = _mm_loadu_si128(&v152);
        v213 = -1;
        v257 = 1;
        v256 = 1;
        sub_140032B80(&v170);
        sub_1400342E0(v217.m128i_i64);
        v40 = v258;
        if ( v258 )
LABEL_68:
          sub_140001660(v247, v40, 1);
LABEL_111:
        v63 = sub_141412E80(hObject);
        if ( v63 && (unsigned int)(v63 & 3) - 2 >= 2 && (v63 & 3) != 0 )
        {
          v217.m128i_i64[1] = v63 - 1;
          v217.m128i_i8[0] = 3;
          sub_1416BCB00(&v217.m128i_u64[1]);
        }
        CloseHandle(hObject[0]);
        goto LABEL_116;
      }
      sub_1400342E0(a4->m128i_i64);
      sub_1418F44E0(a4, &v217, 0xB0u);
      LODWORD(v239) = 0;
    }
    sub_14018F650(v214);
    v214[0] = HANDLE_FLAG_INHERIT;
    v214[1] = v241;
    if ( (_BYTE)v239 )
      sub_1400342E0(v217.m128i_i64);
  }
  else
  {
    if ( *(_QWORD *)off_1421E6EC0 < 3u )
      goto LABEL_137;
    v178.m256i_i64[0] = (__int64)aCodexmateLibCo_25;
    v178.m256i_i64[1] = 34;
    v178.m256i_i64[2] = (__int64)aCodexmateLibCo_25;
    v178.m256i_i64[3] = 34;
    v179.m128i_i64[0] = (__int64)&off_1419E7790;
    v229 = -1;
    v260 = 1;
    v259 = 1;
    sub_140BAD520(&unk_1419E772F, 137, 3, &v178);
    if ( v217.m128i_i64[0] != -2 )
LABEL_137:
      sub_1400342E0(v217.m128i_i64);
    if ( v258 )
      sub_140001660(v247, v258, 1);
    v246 = -1;
    v267 = 1;
    sub_140195380(hObject);
    v258 = -1;
    v41 = 0;
  }
LABEL_71:
  if ( a10 )
  {
    if ( v42 )
    {
      v240 = v247;
      v246 = v258;
      v267 = 1;
      if ( (unsigned int)sub_141040BC0((__int64)aChatgpt, 7) == 1 )
        goto LABEL_104;
      v240 = v247;
      v246 = v258;
      v267 = 1;
      if ( (unsigned int)sub_141040BC0((__int64)aCodex_3, 5) == 1 )
        goto LABEL_104;
      v240 = v247;
      v246 = v258;
      v267 = 1;
      sub_140EEE3A0(&v217);
      if ( v217.m128i_i32[0] != -1 )
      {
        v240 = v247;
        v246 = v258;
        v267 = 1;
        sub_14029DA50(&v217);
LABEL_104:
        nullsub_1(v43);
        v60 = (__m128i *)sub_140001650(64, 1);
        if ( !v60 )
        {
          v240 = v247;
          v246 = v258;
          v267 = 1;
          sub_141938D2B(1, 64);
        }
        qmemcpy(&v60[1], "oken refresh deferred while Codex owns auth.json", 48);
        *v60 = _mm_loadu_si128((const __m128i *)&xmmword_1419E7B02);
        a1->m128i_i64[0] = 64;
        a1->m128i_i64[1] = (__int64)v60;
        a1[1].m128i_i64[0] = 64;
        v48 = v258;
        goto LABEL_117;
      }
    }
    goto LABEL_97;
  }
  if ( a4[4].m128i_i64[1] != -1 )
  {
    v44 = a4[5].m128i_i64[1];
    if ( v44 )
    {
      v45 = a4[5].m128i_i64[0];
      v240 = v247;
      v246 = v258;
      v267 = 1;
      v46 = sub_1402C2FB0(v45, v44);
      LOBYTE(v23) = v46 & (v47 >= 301);
      if ( (_BYTE)v23 == 1 )
      {
        v48 = v258;
        if ( !v41 )
          goto LABEL_166;
        if ( !a8 )
        {
          v76 = v258;
          nullsub_1(v23);
          v77 = (__m128i *)sub_140001650(46, 1);
          if ( !v77 )
          {
            v240 = v247;
            v246 = v76;
            v267 = 1;
            sub_141938D2B(1, 46);
          }
          qmemcpy(&v77[1], "efresh lost the live auth path", 30);
          *v77 = _mm_loadu_si128((const __m128i *)&xmmword_1419E78D4);
          a1->m128i_i64[0] = 46;
          a1->m128i_i64[1] = (__int64)v77;
          a1[1].m128i_i64[0] = 46;
          v48 = v76;
          goto LABEL_117;
        }
        v49 = v230;
        if ( v258 == -1 )
          v49 = 0;
        v230 = v49;
        v50 = 1;
        if ( v258 != -1 )
          v50 = v247;
        v240 = v247;
        v246 = v258;
        v267 = 1;
        v51 = sub_1402C7FB0();
        v48 = v258;
        if ( v51 )
          goto LABEL_166;
        v240 = v247;
        v246 = v258;
        v267 = 1;
        sub_14169D480(&v217, a8, a9);
        v52 = v217;
        if ( v217.m128i_i64[0] == -1 )
        {
          v240 = v247;
          v246 = v258;
          v267 = 1;
          sub_14018FAF0(-1, v217.m128i_i64[1]);
          v48 = v258;
          goto LABEL_166;
        }
        v48 = v258;
        if ( v218.m128i_i64[0] != v230 || (v53 = sub_1418F4B70(v217.m128i_i64[1], v50), v48 = v258, v53) )
        {
          if ( !v52.m128i_i64[0] )
          {
LABEL_166:
            a1->m128i_i64[0] = 0x8000000000000000uLL;
            goto LABEL_117;
          }
          v54 = v52.m128i_i64[1];
          v55 = v48;
          v56 = v52.m128i_i64[0];
LABEL_92:
          sub_140001660(v54, v56, 1);
          v48 = v55;
          goto LABEL_166;
        }
        if ( v52.m128i_i64[0] )
        {
          sub_140001660(v52.m128i_i64[1], v52.m128i_i64[0], 1);
          v48 = v258;
        }
        v240 = v247;
        v246 = v48;
        v267 = 1;
        sub_14029F8E0(&v217, (__int64)a4);
        v241 = (void *)v217.m128i_i64[0];
        if ( v217.m128i_i64[0] == -1 )
        {
          v203.m256i_i64[0] = v217.m128i_i64[1];
          v178.m256i_i64[0] = (__int64)&v203;
          v178.m256i_i64[1] = (__int64)sub_14163CE40;
          sub_1416ABFD0(&v146, &unk_1419E78A5, &v178);
          a1[1].m128i_i64[0] = v147;
          *a1 = _mm_loadu_si128(&v146);
          v240 = v247;
          v246 = v258;
          v267 = 1;
          sub_14002F910(&v203);
        }
        else
        {
          v239 = v217.m128i_i64[1];
          if ( (sub_140222E10(a8, a9, v217.m128i_i64[1], v218.m128i_i64[0]) & 1) == 0 )
          {
            sub_1401BD710(v113);
            v48 = v258;
            if ( !v241 )
              goto LABEL_166;
            v54 = v239;
            v55 = v258;
            v56 = (__int64)v241;
            goto LABEL_92;
          }
          v178.m256i_i64[0] = v113;
          v217.m128i_i64[0] = (__int64)&v178;
          v217.m128i_i64[1] = (__int64)sub_1416BB0B0;
          sub_1416ABFD0(&v144, &unk_1419E7869, &v217);
          a1[1].m128i_i64[0] = v145;
          *a1 = _mm_loadu_si128(&v144);
          sub_140032B80(&v178);
          if ( v241 )
          {
            sub_140001660(v239, v241, 1);
            v48 = v258;
            goto LABEL_117;
          }
        }
        v48 = v258;
        goto LABEL_117;
      }
    }
  }
  if ( v42 )
  {
    v240 = v247;
    v246 = v258;
    v267 = 1;
    if ( (unsigned __int8)sub_1402C7FB0() )
    {
      v240 = v247;
      v246 = v258;
      v267 = 1;
      if ( !(unsigned __int8)sub_1402C80E0(a4) )
        goto LABEL_104;
      v57 = 0x8000000000000000uLL;
LABEL_103:
      a1->m128i_i64[0] = v57;
      v48 = v258;
LABEL_117:
      if ( v214[0] )
      {
        v258 = v48;
        v64 = sub_141412E80(&v214[1]);
        if ( v64 && (unsigned int)(v64 & 3) - 2 >= 2 && (v64 & 3) != 0 )
        {
          v217.m128i_i64[1] = v64 - 1;
          v217.m128i_i8[0] = 3;
          sub_1416BCB00(&v217.m128i_u64[1]);
        }
        CloseHandle(v214[1]);
        v48 = v258;
      }
      if ( v48 > 0 )
        sub_140001660(v247, v48, 1);
      goto LABEL_125;
    }
  }
LABEL_97:
  if ( a4[6].m128i_i64[0] == -1 || (v58 = a4[7].m128i_i64[0]) == 0 )
  {
    v57 = 0x8000000000000002uLL;
    goto LABEL_103;
  }
  if ( v58 < 0 )
  {
    v59 = 0;
    goto LABEL_101;
  }
  v61 = (const __m128i *)a4[6].m128i_i64[1];
  v241 = (void *)a4[7].m128i_i64[0];
  nullsub_1(v23);
  v59 = 1;
  v62 = (__m128i *)sub_140001650(v241, 1);
  v58 = (__int64)v241;
  if ( !v62 )
  {
LABEL_101:
    v240 = v247;
    v246 = v258;
    v267 = 1;
    sub_141938D2B(v59, v58);
  }
  v239 = (__int64)v62;
  sub_1418F44E0(v62, v61, (unsigned __int64)v241);
  v265 = 1;
  sub_140FEF000(&v178, a5);
  if ( v178.m256i_i64[0] != -1 )
  {
    if ( v178.m256i_i32[0] == 6 )
    {
      v170 = v178.m256i_i64[1];
      v203.m256i_i64[0] = (__int64)&v170;
      v203.m256i_i64[1] = (__int64)sub_14122E940;
      sub_1416ABFD0(&v217, &unk_1419E5DA0, &v203);
      *(__m128i *)hObject = _mm_loadu_si128(&v217);
      v160 = (const char *)v218.m128i_i64[0];
      v265 = 1;
      sub_140192750(v170);
    }
    else
    {
      v217 = *(__m128i *)v178.m256i_i8;
      v74 = _mm_loadu_si128(&v179);
      v218 = *(__m128i *)&v178.m256i_u64[2];
      *(__m128i *)v219 = v74;
      *(__m128i *)&v219[16] = v180;
      *(__m128i *)&v219[32] = v181;
      *(__m128i *)&v219[48] = _mm_loadu_si128(&v182);
      v170 = 0;
      v171 = (__m128i)1uLL;
      v203.m256i_i64[2] = 1610612768;
      v203.m256i_i64[0] = (__int64)&v170;
      v203.m256i_i64[1] = (__int64)&off_1419E98E0;
      if ( (unsigned __int8)sub_14104A7D0(&v217, &v203) )
        sub_141939040(
          (unsigned int)aADisplayImplem_0,
          55,
          (unsigned int)v244,
          (unsigned int)&unk_1419E6AE0,
          (__int64)&off_1419EB798);
      v160 = (const char *)v171.m128i_i64[1];
      *(__m128i *)hObject = _mm_loadu_si128((const __m128i *)&v170);
      v265 = 1;
      sub_14029DA50(&v217);
    }
    v190 = _mm_load_si128((const __m128i *)hObject);
    v191 = (__int64)v160;
    goto LABEL_148;
  }
  v176 = *(_OWORD *)&v178.m256i_u64[1];
  v177 = v178.m256i_i64[3];
  hObject[0] = aGrantType;
  hObject[1] = (HANDLE)10;
  v160 = aRefreshToken_1;
  v161 = 13;
  v162 = aRefreshToken_1;
  v163 = 13;
  v164 = v239;
  v165 = v241;
  v166 = aClientId;
  v167 = 9;
  v168 = aAppEmoameez73f;
  v169 = 28;
  v178.m256i_i64[2] = 0x202020202020202LL;
  *(__m128i *)v178.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_1419E44A0);
  sub_1403FFEC0((unsigned int)&v217, (unsigned int)&v176, (unsigned int)&v178, (unsigned int)&unk_1419E73FA, 35);
  sub_140CB5CD0((unsigned int)&v178, (unsigned int)&v217, (unsigned int)aUserAgent, 10, (__int64)&unk_1419E7427, 12, 0);
  sub_140CB5CD0((unsigned int)&v217, (unsigned int)&v178, (unsigned int)aAccept, 6, (__int64)&unk_1419E4BBC, 16, 0);
  sub_14125AF30(&v178, &v217, 15, 0);
  sub_140CB6730(&v217, &v178, hObject);
  sub_14125AE40(&v203, &v217);
  v68 = v203.m256i_i64[0];
  if ( v203.m256i_i64[0] == -1 )
  {
    v202[0] = v203.m256i_i64[1];
    v178.m256i_i64[0] = (__int64)v202;
    v178.m256i_i64[1] = (__int64)sub_14122E940;
    sub_1416ABFD0(&v217, &unk_1419E5DCD, &v178);
    *(__m128i *)v178.m256i_i8 = _mm_loadu_si128(&v217);
    v178.m256i_i64[2] = v218.m128i_i64[0];
    sub_140192750(v202[0]);
    v190 = _mm_load_si128((const __m128i *)&v178);
    v191 = v178.m256i_i64[2];
    v189 = -1;
    goto LABEL_172;
  }
  v212 = v203.m256i_i64[3];
  v211 = *(__m128i *)&v203.m256i_u64[1];
  sub_1418F44E0(v173, v204, 0x90u);
  *((_QWORD *)&v206 + 1) = v212;
  v171 = _mm_load_si128(&v211);
  v172 = v212;
  v170 = v68;
  v69 = v174;
  v245 = 1;
  v70 = sub_141234880(&v170);
  if ( ((v71 >= 0x40001) & v70) != 0 )
  {
    LOBYTE(v72) = v71 >= 0x40001;
    nullsub_1(v72);
    v73 = (__m128i *)sub_140001650(47, 1);
    if ( !v73 )
    {
      v245 = 1;
      sub_141938D2B(1, 47);
    }
    qmemcpy(&v73[1], "esponse exceeded the size limit", 31);
    *v73 = _mm_loadu_si128((const __m128i *)&xmmword_1419E4978);
    v190.m128i_i64[0] = 47;
    v190.m128i_i64[1] = (__int64)v73;
    v191 = 47;
    v189 = -1;
    sub_14029CD20(&v170);
    goto LABEL_172;
  }
  v233 = v69;
  v205 = 0;
  v206 = 1u;
  sub_1418F44E0(&v217, (const __m128i *)&v170, 0xB0u);
  v227 = 262145;
  v228 = 262145;
  v78 = sub_140BB21E0(&v217, &v205, 0);
  v80 = v233;
  if ( v78 == 1 )
  {
    v211.m128i_i64[0] = v79;
    v203.m256i_i64[0] = (__int64)&v211;
    v203.m256i_i64[1] = (__int64)sub_1416BB0B0;
    sub_1416ABFD0(&v178, &unk_1419E5268, &v203);
    v81 = *(__m128i *)v178.m256i_i8;
    v82 = v178.m256i_i64[2];
    if ( (v211.m128i_i8[0] & 3u) - 2 >= 2 && (v211.m128i_i8[0] & 3) != 0 )
    {
      v203.m256i_i64[1] = v211.m128i_i64[0] - 1;
      v203.m256i_i8[0] = 3;
      sub_1416BCB00(&v203.m256i_u64[1]);
    }
    v190 = v81;
    v191 = v82;
    v189 = -1;
    sub_14029CD20(&v217);
    goto LABEL_170;
  }
  sub_14029CD20(&v217);
  if ( *((_QWORD *)&v206 + 1) >= 0x40001u )
  {
    nullsub_1(v83);
    v84 = (__m128i *)sub_140001650(47, 1);
    if ( !v84 )
      sub_141938D2B(1, 47);
    qmemcpy(&v84[1], "esponse exceeded the size limit", 31);
    *v84 = _mm_loadu_si128((const __m128i *)&xmmword_1419E4978);
    v190.m128i_i64[0] = 47;
    v190.m128i_i64[1] = (__int64)v84;
    v191 = 47;
    goto LABEL_164;
  }
  if ( (unsigned __int16)(v80 - 200) < 0x64u )
  {
    *(_OWORD *)v178.m256i_i8 = v206;
    *(_OWORD *)&v178.m256i_u64[2] = 0;
    sub_140630570(&v217, &v178);
    if ( v217.m128i_i64[0] != -1 )
    {
      v85 = _mm_loadu_si128((const __m128i *)&v217.m128i_u64[1]);
      v131 = _mm_loadu_si128((const __m128i *)v219);
      v132 = *(_OWORD *)&v219[16];
      v133 = *(_QWORD *)&v219[32];
      v128 = v217.m128i_i64[0];
      v129 = v85;
      v130 = v218.m128i_i64[1];
      sub_1402C7E40(&v189, &v128);
LABEL_170:
      if ( v205 )
        sub_140001660(v206, v205, 1);
LABEL_172:
      if ( _InterlockedDecrement64((volatile signed __int64 *)v176) )
        goto LABEL_174;
      goto LABEL_173;
    }
    sub_1402B4290(&v178, v217.m128i_i64[1]);
    v190 = _mm_loadu_si128((const __m128i *)&v178);
    v191 = v178.m256i_i64[2];
LABEL_164:
    v189 = -1;
    goto LABEL_170;
  }
  *(_OWORD *)v178.m256i_i8 = v206;
  *(_OWORD *)&v178.m256i_u64[2] = 0;
  sub_140630370(&v217, &v178);
  if ( v217.m128i_i64[0] == -2 )
  {
    v178.m256i_i64[0] = -2;
    v114 = sub_140298000(&v217);
LABEL_269:
    v211.m128i_i64[0] = -1;
    LOBYTE(v114) = 1;
    LODWORD(v237) = v114;
    goto LABEL_270;
  }
  v115 = _mm_loadu_si128(&v218);
  *(__m128i *)v178.m256i_i8 = _mm_loadu_si128(&v217);
  LODWORD(v114) = *(_DWORD *)&v219[32];
  v181.m128i_i64[0] = *(_QWORD *)&v219[32];
  v180 = *(__m128i *)&v219[16];
  v179 = *(__m128i *)v219;
  *(__m128i *)&v178.m256i_u64[2] = v115;
  if ( v178.m256i_i64[0] == -2 )
    goto LABEL_269;
  v243 = 0;
  sub_1402C7CE0(&v211, &v178);
  v236 = v211.m128i_i64[0];
  if ( v211.m128i_i64[0] != -1 )
  {
    switch ( v212 )
    {
      case 13LL:
        if ( *(_QWORD *)v211.m128i_i64[1] ^ 0x5F64696C61766E69LL
           | *(_QWORD *)(v211.m128i_i64[1] + 5) ^ 0x746E6172675F6469LL
          && *(_QWORD *)v211.m128i_i64[1] ^ 0x5F64696C61766E69LL
           | *(_QWORD *)(v211.m128i_i64[1] + 5) ^ 0x6E656B6F745F6469LL )
        {
          goto LABEL_317;
        }
        goto LABEL_296;
      case 20LL:
        v122 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v211.m128i_i64[1] + 16)), (__m128i)xmmword_1419E4570);
        v123 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v211.m128i_i64[1]), (__m128i)xmmword_1419E4580);
        goto LABEL_316;
      case 21LL:
        v122 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v211.m128i_i64[1] + 5)), (__m128i)xmmword_1419E4530);
        v123 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v211.m128i_i64[1]), (__m128i)xmmword_1419E4540);
        goto LABEL_316;
      case 25LL:
        v122 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v211.m128i_i64[1] + 9)), (__m128i)xmmword_1419E4550);
        v123 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v211.m128i_i64[1]), (__m128i)xmmword_1419E4560);
LABEL_316:
        if ( _mm_movemask_epi8(_mm_and_si128(v123, v122)) != 0xFFFF )
          goto LABEL_317;
LABEL_296:
        v190.m128i_i64[0] = 0x8000000000000003uLL;
        v189 = -1;
        if ( v236 )
          sub_140001660(v211.m128i_i64[1], v236, 1);
        goto LABEL_277;
      default:
LABEL_317:
        v156[0] = v211.m128i_i64[1];
        v156[1] = v212;
        v202[0] = v156;
        v202[1] = sub_140186EE0;
        v175 = v236;
        v242 = 0;
        sub_1416ABFD0(&v217, &unk_1419E5C08, v202);
        *(__m128i *)v203.m256i_i8 = _mm_loadu_si128(&v217);
        v203.m256i_i64[2] = v218.m128i_i64[0];
        LODWORD(v237) = 0;
        v80 = v233;
        goto LABEL_271;
    }
  }
  LODWORD(v237) = 0;
  v80 = v233;
LABEL_270:
  v203.m256i_i64[0] = 0;
  *(_OWORD *)&v203.m256i_u64[1] = 1u;
  v236 = -1;
LABEL_271:
  LOWORD(v202[0]) = v80;
  v217.m128i_i64[0] = (__int64)v202;
  v217.m128i_i64[1] = (__int64)sub_1416BB1E0;
  v218.m128i_i64[0] = (__int64)&v203;
  v218.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v134, &unk_1419E74E0, &v217);
  v190 = _mm_loadu_si128(&v134);
  v191 = v135;
  v189 = -1;
  if ( v203.m256i_i64[0] )
    sub_140001660(v203.m256i_i64[1], v203.m256i_i64[0], 1);
  if ( v236 != -1 && v236 )
    sub_140001660(v211.m128i_i64[1], v236, 1);
  if ( !(_BYTE)v237 )
LABEL_277:
    sub_14029D310(&v178);
  if ( v205 )
    sub_140001660(v206, v205, 1);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v176) )
  {
LABEL_173:
    v265 = 1;
    sub_141243170(&v176);
  }
LABEL_174:
  if ( v189 == -1 )
  {
LABEL_148:
    a1[1].m128i_i64[0] = v191;
    *a1 = _mm_loadu_si128(&v190);
    v75 = v258;
LABEL_149:
    sub_140001660(v239, v241, 1);
    v48 = v75;
    goto LABEL_117;
  }
  v237 = v189;
  v216 = v190.m128i_i64[1];
  v236 = v190.m128i_i64[0];
  v209 = v191;
  v197 = v192;
  v86 = v193;
  v233 = v194;
  v198 = v195;
  v87 = v196;
  v250 = 1;
  v249 = 1;
  v248 = 1;
  sub_140ED5630(&v217, a4, a2, a3);
  if ( v217.m128i_i32[0] == 2 )
  {
    v182 = *(__m128i *)&v219[56];
    v181 = *(__m128i *)&v219[40];
    v88 = _mm_loadu_si128((const __m128i *)&v217.m128i_u64[1]);
    v89 = _mm_loadu_si128((const __m128i *)&v218.m128i_u64[1]);
    v180 = *(__m128i *)&v219[24];
    v179 = *(__m128i *)&v219[8];
    *(__m128i *)&v178.m256i_u64[2] = v89;
    *(__m128i *)v178.m256i_i8 = v88;
    sub_14036B9C0(&v203, &v178);
    a1[1].m128i_i64[0] = v203.m256i_i64[2];
    *a1 = _mm_loadu_si128((const __m128i *)&v203);
    v250 = 1;
    v249 = 1;
    v248 = 1;
    sub_14029DA50(&v217.m128i_u64[1]);
    v75 = v258;
    if ( v237 )
      sub_140001660(v236, v237, 1);
LABEL_239:
    if ( (unsigned __int64)(v209 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v197, v209, 1);
    if ( (unsigned __int64)(v233 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v198, v233, 1);
    goto LABEL_149;
  }
  *((_QWORD *)&v234 + 1) = v86;
  v232 = v87;
  v231 = *(_QWORD *)&v219[8];
  v90 = *(_QWORD *)&v219[40];
  v91 = *(_QWORD *)&v219[32];
  v92 = *(_QWORD *)&v219[56];
  v200 = *(_QWORD *)&v219[64];
  v238 = v221;
  v199 = v222;
  *(_QWORD *)&v234 = v224;
  v235 = v225;
  v157 = *(_QWORD *)&v219[24];
  v210 = *(_QWORD *)&v219[16];
  if ( v218.m128i_i64[0] )
  {
    v201 = *(_QWORD *)&v219[56];
    v93 = *(_QWORD *)&v219[40];
    sub_140001660(v218.m128i_i64[1], v218.m128i_i64[0], 1);
    v90 = v93;
    v92 = v201;
  }
  if ( v91 )
    sub_140001660(v90, v91, 1);
  if ( (unsigned __int64)(v92 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v94 = v238;
    if ( (unsigned __int64)(v238 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_184:
      v95 = v234;
      if ( (unsigned __int64)(v234 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_186;
      goto LABEL_185;
    }
  }
  else
  {
    sub_140001660(v200, v92, 1);
    v94 = v238;
    if ( (unsigned __int64)(v238 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_184;
  }
  sub_140001660(v199, v94, 1);
  v95 = v234;
  if ( (unsigned __int64)(v234 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_185:
    sub_140001660(v235, v95, 1);
LABEL_186:
  v244[3] = 1;
  v244[2] = 1;
  v244[1] = 1;
  sub_14036C1A0(&v178, a4);
  v264 = 1;
  v263 = 1;
  v262 = 1;
  v261 = 1;
  *(_QWORD *)&v234 = sub_140E91160(v236, v216);
  v216 = v97;
  v98 = v97;
  if ( !v97 )
  {
    nullsub_1(v96);
    v102 = (__m128i *)sub_140001650(45, 1);
    if ( !v102 )
    {
      v264 = 1;
      v263 = 1;
      v262 = 1;
      v261 = 1;
      sub_141938D2B(1, 45);
    }
    qmemcpy(&v102[1], "eturned an empty access_token", 29);
    *v102 = _mm_loadu_si128((const __m128i *)&xmmword_1419E7902);
    a1->m128i_i64[0] = 45;
    a1->m128i_i64[1] = (__int64)v102;
    a1[1].m128i_i64[0] = 45;
    goto LABEL_211;
  }
  sub_14072C410((unsigned int)&v217, v216, 0, 1, 1);
  v238 = v217.m128i_i64[1];
  if ( v217.m128i_i8[0] )
  {
    v264 = 1;
    v263 = 1;
    v262 = 1;
    v261 = 1;
    sub_141938D2B(v238, v218.m128i_i64[0]);
  }
  v99 = v218.m128i_i64[0];
  sub_1418F44E0((__m128i *)v218.m128i_i64[0], (const __m128i *)v234, v98);
  if ( v181.m128i_i64[1] != -1 && v181.m128i_i64[1] )
    sub_140001660(v182.m128i_i64[0], v181.m128i_i64[1], 1);
  v181.m128i_i64[1] = v238;
  v182.m128i_i64[0] = v99;
  v182.m128i_i64[1] = v216;
  v217.m128i_i64[0] = v209;
  v217.m128i_i64[1] = v197;
  v218.m128i_i64[0] = *((_QWORD *)&v234 + 1);
  v264 = 1;
  v263 = 0;
  v262 = 1;
  v261 = 1;
  sub_1402932B0((__int64)&v203, v217.m128i_i64);
  if ( v203.m256i_i64[0] != -1 )
  {
    if ( v183.m128i_i64[0] != -1 && v183.m128i_i64[0] )
      sub_140001660(v183.m128i_i64[1], v183.m128i_i64[0], 1);
    v184 = v203.m256i_i64[2];
    v183 = _mm_loadu_si128((const __m128i *)&v203);
  }
  v217.m128i_i64[0] = v233;
  v217.m128i_i64[1] = v198;
  v218.m128i_i64[0] = v232;
  v264 = 1;
  v263 = 0;
  v262 = 0;
  v261 = 1;
  sub_1402932B0((__int64)&v203, v217.m128i_i64);
  if ( v203.m256i_i64[0] != -1 )
  {
    if ( v180.m128i_i64[0] != -1 && v180.m128i_i64[0] )
      sub_140001660(v180.m128i_i64[1], v180.m128i_i64[0], 1);
    v181.m128i_i64[0] = v203.m256i_i64[2];
    v180 = _mm_loadu_si128((const __m128i *)&v203);
  }
  v264 = 1;
  v263 = 0;
  v262 = 0;
  v261 = 1;
  sub_1402C2960(&v217);
  v203.m256i_i64[2] = v218.m128i_i64[0];
  *(__m128i *)v203.m256i_i8 = v217;
  if ( v187.m128i_i64[0] != -1 && v187.m128i_i64[0] )
    sub_140001660(v187.m128i_i64[1], v187.m128i_i64[0], 1);
  v188 = v203.m256i_i64[2];
  v187 = _mm_load_si128((const __m128i *)&v203);
  v264 = 1;
  v263 = 0;
  v262 = 0;
  v261 = 1;
  sub_140ED5630(&v217, &v178, a2, a3);
  if ( v217.m128i_i32[0] == 2 )
  {
    v204[3] = *(__m128i *)&v219[56];
    v204[2] = *(__m128i *)&v219[40];
    v100 = _mm_loadu_si128((const __m128i *)&v217.m128i_u64[1]);
    v101 = _mm_loadu_si128((const __m128i *)&v218.m128i_u64[1]);
    v204[1] = *(__m128i *)&v219[24];
    v204[0] = *(__m128i *)&v219[8];
    *(__m128i *)&v203.m256i_u64[2] = v101;
    *(__m128i *)v203.m256i_i8 = v100;
    sub_14036B9C0(&v170, &v203);
    a1[1].m128i_i64[0] = v171.m128i_i64[1];
    *a1 = _mm_loadu_si128((const __m128i *)&v170);
    v264 = 1;
    v263 = 0;
    v262 = 0;
    v261 = 1;
    sub_14029DA50(&v217.m128i_u64[1]);
LABEL_211:
    v75 = v258;
    v103 = v231;
    goto LABEL_212;
  }
  v238 = *(_QWORD *)&v219[8];
  v106 = *(_QWORD *)&v219[40];
  v107 = *(_QWORD *)&v219[32];
  v108 = *(_QWORD *)&v219[56];
  v201 = *(_QWORD *)&v219[64];
  v235 = v221;
  v200 = v222;
  v232 = v224;
  v199 = v225;
  v234 = *(_OWORD *)&v219[16];
  if ( v218.m128i_i64[0] )
  {
    v158 = *(_QWORD *)&v219[56];
    v109 = *(_QWORD *)&v219[40];
    sub_140001660(v218.m128i_i64[1], v218.m128i_i64[0], 1);
    v106 = v109;
    v108 = v158;
  }
  if ( v107 )
    sub_140001660(v106, v107, 1);
  if ( (unsigned __int64)(v108 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v110 = v235;
    if ( (unsigned __int64)(v235 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_249:
      v111 = v232;
      if ( (unsigned __int64)(v232 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_250;
LABEL_254:
      if ( *((_QWORD *)&v234 + 1) == v157 )
        goto LABEL_255;
LABEL_256:
      nullsub_1(v106);
      v112 = (__m128i *)sub_140001650(59, 1);
      if ( !v112 )
      {
        v255 = 1;
        v254 = 1;
        sub_141938D2B(1, 59);
      }
      qmemcpy(&v112[1], "eturned credentials for a different account", 43);
      *v112 = _mm_loadu_si128((const __m128i *)&xmmword_1419E7AC7);
      a1->m128i_i64[0] = 59;
      a1->m128i_i64[1] = (__int64)v112;
      a1[1].m128i_i64[0] = 59;
      v75 = v258;
      v103 = v231;
      if ( v238 )
        sub_140001660(v234, v238, 1);
LABEL_212:
      if ( v178.m256i_i64[0] != -1 && v178.m256i_i64[0] )
        sub_140001660(v178.m256i_i64[1], v178.m256i_i64[0], 1);
      if ( v178.m256i_i64[3] != -1 && v178.m256i_i64[3] )
        sub_140001660(v179.m128i_i64[0], v178.m256i_i64[3], 1);
      if ( v180.m128i_i64[0] != -1 && v180.m128i_i64[0] )
        sub_140001660(v180.m128i_i64[1], v180.m128i_i64[0], 1);
      if ( v181.m128i_i64[1] != -1 && v181.m128i_i64[1] )
        sub_140001660(v182.m128i_i64[0], v181.m128i_i64[1], 1);
      if ( v183.m128i_i64[0] != -1 && v183.m128i_i64[0] )
        sub_140001660(v183.m128i_i64[1], v183.m128i_i64[0], 1);
      if ( v185 != -1 && v185 )
        sub_140001660(v186, v185, 1);
      v104 = v187.m128i_i64[0];
      if ( v187.m128i_i64[0] != -1 && v187.m128i_i64[0] )
      {
        v105 = v187.m128i_i64[1];
LABEL_233:
        sub_140001660(v105, v104, 1);
        goto LABEL_234;
      }
      goto LABEL_234;
    }
  }
  else
  {
    sub_140001660(v201, v108, 1);
    v110 = v235;
    if ( (unsigned __int64)(v235 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_249;
  }
  sub_140001660(v200, v110, 1);
  v111 = v232;
  if ( (unsigned __int64)(v232 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_254;
LABEL_250:
  sub_140001660(v199, v111, 1);
  if ( *((_QWORD *)&v234 + 1) != v157 )
    goto LABEL_256;
LABEL_255:
  if ( (unsigned int)sub_1418F4B70(v234, v210) )
    goto LABEL_256;
  sub_1400342E0(a4->m128i_i64);
  sub_1418F44E0(a4, (const __m128i *)&v178, 0xB0u);
  v255 = 1;
  v254 = 0;
  sub_14029F8E0(&v217, (__int64)a4);
  *((_QWORD *)&v234 + 1) = v217.m128i_i64[0];
  if ( v217.m128i_i64[0] == -1 )
  {
    v170 = v217.m128i_i64[1];
    v203.m256i_i64[0] = (__int64)&v170;
    v203.m256i_i64[1] = (__int64)sub_14163CE40;
    sub_1416ABFD0(&v142, &unk_1419E7AA0, &v203);
    a1[1].m128i_i64[0] = v143;
    *a1 = _mm_loadu_si128(&v142);
    v255 = 1;
    v254 = 0;
    sub_14002F910(&v170);
    goto LABEL_299;
  }
  v116 = v218.m128i_i64[0];
  v266 = 1;
  v232 = v217.m128i_i64[1];
  if ( (sub_140222E10(a2, a3, v217.m128i_i64[1], v218.m128i_i64[0]) & 1) != 0 )
  {
    v203.m256i_i64[0] = v117;
    v217.m128i_i64[0] = (__int64)&v203;
    v217.m128i_i64[1] = (__int64)sub_1416BB0B0;
    sub_1416ABFD0(&v140, &unk_1419E792F, &v217);
    a1[1].m128i_i64[0] = v141;
    *a1 = _mm_loadu_si128(&v140);
    v266 = 1;
    sub_140032B80(&v203);
    goto LABEL_285;
  }
  v266 = 1;
  sub_1401BD710(v117);
  v119 = (__int64 *)a1;
  if ( v42 )
  {
    if ( !a8 )
    {
      nullsub_1(v118);
      v124 = (__m128i *)sub_140001650(46, 1);
      if ( !v124 )
      {
        v266 = 1;
        sub_141938D2B(1, 46);
      }
      qmemcpy(&v124[1], "efresh lost the live auth path", 30);
      *v124 = _mm_loadu_si128((const __m128i *)&xmmword_1419E78D4);
      a1->m128i_i64[0] = 46;
      a1->m128i_i64[1] = (__int64)v124;
      a1[1].m128i_i64[0] = 46;
      goto LABEL_285;
    }
    v120 = v230;
    if ( v258 == -1 )
      v120 = 0;
    v230 = v120;
    v121 = 1;
    if ( v258 != -1 )
      v121 = v247;
    v266 = 1;
    if ( (unsigned __int8)sub_1402C7FB0() )
    {
      if ( *(_QWORD *)off_1421E6EC0 >= 3u )
      {
        v217.m128i_i64[0] = (__int64)aCodexmateLibCo_25;
        v217.m128i_i64[1] = 34;
        v218.m128i_i64[0] = (__int64)aCodexmateLibCo_25;
        v218.m128i_i64[1] = 34;
        *(_QWORD *)v219 = &off_1419E7A88;
        v266 = 1;
        sub_140BAD520("[AiMaMi][oauth-refresh] skipped auth.json sync because Codex became active", 149, 3, &v217);
      }
      a1->m128i_i64[0] = 0x8000000000000001uLL;
      goto LABEL_285;
    }
    v266 = 1;
    sub_14169D480(&v203, a8, a9);
    v235 = v203.m256i_i64[0];
    if ( v203.m256i_i64[0] == -1 )
    {
      v170 = v203.m256i_i64[1];
      v217.m128i_i64[0] = (__int64)&v170;
      v217.m128i_i64[1] = (__int64)sub_1416BB0B0;
      sub_1416ABFD0(&v138, &unk_1419E79FC, &v217);
      a1[1].m128i_i64[0] = v139;
      *a1 = _mm_loadu_si128(&v138);
      sub_140032B80(&v170);
      goto LABEL_285;
    }
    if ( v203.m256i_i64[2] != v230 || (v125 = v203.m256i_i64[1], (unsigned int)sub_1418F4B70(v203.m256i_i64[1], v121)) )
    {
      if ( *(_QWORD *)off_1421E6EC0 >= 3u )
      {
        v217.m128i_i64[0] = (__int64)aCodexmateLibCo_25;
        v217.m128i_i64[1] = 34;
        v218.m128i_i64[0] = (__int64)aCodexmateLibCo_25;
        v218.m128i_i64[1] = 34;
        *(_QWORD *)v219 = &off_1419E79A8;
        sub_140BAD520(&unk_1419E7960, 145, 3, &v217);
      }
      a1->m128i_i64[0] = 0x8000000000000001uLL;
      if ( v235 )
        sub_140001660(v203.m256i_i64[1], v235, 1);
      goto LABEL_285;
    }
    if ( v235 )
      sub_140001660(v125, v235, 1);
    v266 = 1;
    if ( (sub_140222E10(a8, a9, v232, v116) & 1) != 0 )
    {
      v203.m256i_i64[0] = v126;
      v217.m128i_i64[0] = (__int64)&v203;
      v217.m128i_i64[1] = (__int64)sub_1416BB0B0;
      sub_1416ABFD0(&v136, &unk_1419E79C0, &v217);
      a1[1].m128i_i64[0] = v137;
      *a1 = _mm_loadu_si128(&v136);
      v266 = 1;
      sub_140032B80(&v203);
LABEL_285:
      if ( *((_QWORD *)&v234 + 1) )
        sub_140001660(v232, *((_QWORD *)&v234 + 1), 1);
LABEL_299:
      v75 = v258;
      v103 = v231;
      if ( v238 )
      {
        v105 = v234;
        v104 = v238;
        goto LABEL_233;
      }
LABEL_234:
      if ( v103 )
        sub_140001660(v210, v103, 1);
      if ( v237 )
        sub_140001660(v236, v237, 1);
      if ( v216 )
        goto LABEL_149;
      goto LABEL_239;
    }
    v266 = 1;
    sub_1401BD710(v126);
    v119 = (__int64 *)a1;
  }
  v217 = _mm_loadu_si128((const __m128i *)v214);
  v266 = 0;
  sub_14018F650(&v217);
  *v119 = 0x8000000000000001uLL;
  if ( *((_QWORD *)&v234 + 1) )
    sub_140001660(v232, *((_QWORD *)&v234 + 1), 1);
  if ( v238 )
    sub_140001660(v234, v238, 1);
  if ( v231 )
    sub_140001660(v210, v231, 1);
  if ( v237 )
    sub_140001660(v236, v237, 1);
  sub_140001660(v239, v241, 1);
  if ( v258 > 0 )
    sub_140001660(v247, v258, 1);
  return sub_140195380(&v215);
}
