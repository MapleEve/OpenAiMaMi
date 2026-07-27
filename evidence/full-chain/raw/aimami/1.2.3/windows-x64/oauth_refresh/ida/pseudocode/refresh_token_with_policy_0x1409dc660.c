// module: codexmate_lib/core/oauth_refresh
// addr: 0x1409dc660
// name: refresh_token_with_policy
// win 1.2.1 | module src/core/oauth_refresh.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::oauth_refresh::refresh_token_with_policy | 跨平台字符串签名匹配(名↔函数一致)
int __fastcall refresh_token_with_policy(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __m128i v14; // kr00_16
  __m128i v15; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rdx
  char v28; // di
  char v29; // di
  char v30; // r13
  __int64 v31; // rcx
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  char v38; // al
  __int64 v39; // r15
  __int64 v40; // r12
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rdi
  __m128i *v48; // rax
  __int64 v49; // r14
  __int64 v50; // rax
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __int64 v53; // rdi
  __int64 v54; // rdx
  int v55; // eax
  _QWORD *v56; // rax
  _QWORD *v57; // rdi
  __int64 v58; // rdi
  unsigned __int8 v59; // al
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  __m128i *v62; // rax
  __m128i v63; // xmm1
  __int64 v64; // rsi
  __int64 v65; // rdi
  __m128i *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int16 v69; // di
  __m128i v70; // xmm6
  __int64 v71; // rdi
  __int64 v72; // rcx
  __m128i *v73; // rax
  __m128i v74; // xmm0
  __int64 v75; // r14
  __int64 v76; // rdi
  __m128i v77; // xmm0
  __m128i v78; // xmm1
  __int64 v79; // rcx
  __int64 v80; // r14
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r14
  __int64 v88; // rdi
  __m128i v89; // xmm0
  __m128i v90; // xmm1
  __m128i *v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // r14
  __int64 v98; // r14
  __int64 v99; // rdx
  __int64 v100; // r8
  __m128i *v101; // rax
  __int64 v102; // rax
  __m128i v103; // xmm1
  char v104; // di
  __int64 v105; // r14
  unsigned __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // r14
  __m128i *v111; // rax
  __int64 v112; // r15
  __int64 v113; // rax
  _BYTE v114[176]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v115; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v116; // [rsp+F8h] [rbp+78h]
  __int64 v117; // [rsp+108h] [rbp+88h]
  __m128i v118; // [rsp+110h] [rbp+90h]
  __int128 v119; // [rsp+120h] [rbp+A0h]
  __int64 v120; // [rsp+130h] [rbp+B0h]
  __m128i v121; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v122; // [rsp+148h] [rbp+C8h]
  __m128i v123; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v124; // [rsp+160h] [rbp+E0h]
  __m128i v125; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v126; // [rsp+178h] [rbp+F8h]
  __m128i v127; // [rsp+180h] [rbp+100h] BYREF
  __int64 v128; // [rsp+190h] [rbp+110h]
  __m128i v129; // [rsp+198h] [rbp+118h] BYREF
  __int64 v130; // [rsp+1A8h] [rbp+128h]
  __m128i v131; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v132; // [rsp+1C0h] [rbp+140h]
  __m128i v133; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v134; // [rsp+1D8h] [rbp+158h]
  __m128i v135; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v136; // [rsp+1F0h] [rbp+170h]
  __m128i v137; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v138; // [rsp+208h] [rbp+188h]
  __m128i v139; // [rsp+210h] [rbp+190h] BYREF
  __int64 v140; // [rsp+220h] [rbp+1A0h]
  __m128i v141; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v142; // [rsp+238h] [rbp+1B8h]
  _QWORD v143[2]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v144; // [rsp+250h] [rbp+1D0h]
  __int64 v145; // [rsp+258h] [rbp+1D8h]
  HANDLE hObject[2]; // [rsp+260h] [rbp+1E0h] BYREF
  const char *v147; // [rsp+270h] [rbp+1F0h]
  __int64 v148; // [rsp+278h] [rbp+1F8h]
  const char *v149; // [rsp+280h] [rbp+200h]
  __int64 v150; // [rsp+288h] [rbp+208h]
  __int64 v151; // [rsp+290h] [rbp+210h]
  void *v152; // [rsp+298h] [rbp+218h]
  const char *v153; // [rsp+2A0h] [rbp+220h]
  __int64 v154; // [rsp+2A8h] [rbp+228h]
  const char *v155; // [rsp+2B0h] [rbp+230h]
  __int64 v156; // [rsp+2B8h] [rbp+238h]
  _QWORD *v157; // [rsp+2C0h] [rbp+240h] BYREF
  __m128i v158; // [rsp+2C8h] [rbp+248h]
  __int64 v159; // [rsp+2D8h] [rbp+258h]
  char v160[72]; // [rsp+2E0h] [rbp+260h] BYREF
  unsigned __int16 v161; // [rsp+328h] [rbp+2A8h]
  __int64 v162; // [rsp+370h] [rbp+2F0h]
  __m128i v163; // [rsp+380h] [rbp+300h] BYREF
  __int64 v164; // [rsp+390h] [rbp+310h]
  __int64 v165; // [rsp+3B0h] [rbp+330h] BYREF
  __m128i si128; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v167; // [rsp+3C8h] [rbp+348h]
  __int64 v168; // [rsp+3D0h] [rbp+350h]
  __int64 v169; // [rsp+3D8h] [rbp+358h]
  __int64 v170; // [rsp+3E0h] [rbp+360h]
  __int64 v171; // [rsp+3E8h] [rbp+368h]
  __int64 v172; // [rsp+3F0h] [rbp+370h]
  __int64 v173; // [rsp+3F8h] [rbp+378h]
  __int64 v174; // [rsp+400h] [rbp+380h]
  __int64 v175; // [rsp+408h] [rbp+388h]
  __m256i v176; // [rsp+410h] [rbp+390h] BYREF
  _OWORD v177[9]; // [rsp+430h] [rbp+3B0h] BYREF
  __m128i v178; // [rsp+4C0h] [rbp+440h] BYREF
  __m128i v179; // [rsp+4D0h] [rbp+450h] BYREF
  _BYTE v180[72]; // [rsp+4E0h] [rbp+460h] BYREF
  __int64 v181; // [rsp+530h] [rbp+4B0h]
  __int64 v182; // [rsp+538h] [rbp+4B8h]
  _QWORD v183[2]; // [rsp+610h] [rbp+590h] BYREF
  __int64 v184; // [rsp+620h] [rbp+5A0h] BYREF
  __m128i v185; // [rsp+628h] [rbp+5A8h]
  __int64 v186; // [rsp+640h] [rbp+5C0h]
  __int64 v187; // [rsp+648h] [rbp+5C8h]
  __int64 v188; // [rsp+650h] [rbp+5D0h]
  __int64 v189; // [rsp+658h] [rbp+5D8h]
  __m128i v190; // [rsp+660h] [rbp+5E0h] BYREF
  __m128i v191; // [rsp+670h] [rbp+5F0h] BYREF
  _BYTE v192[80]; // [rsp+680h] [rbp+600h] BYREF
  __int64 v193; // [rsp+6D0h] [rbp+650h]
  __int64 v194; // [rsp+6D8h] [rbp+658h]
  __int64 v195; // [rsp+6E0h] [rbp+660h]
  __m128i v196; // [rsp+6F0h] [rbp+670h]
  __int64 v197; // [rsp+700h] [rbp+680h]
  __int64 v198; // [rsp+710h] [rbp+690h]
  __int64 v199; // [rsp+718h] [rbp+698h]
  __m128i v200; // [rsp+7B0h] [rbp+730h] BYREF
  __int64 v201; // [rsp+7C0h] [rbp+740h]
  __int64 v202; // [rsp+7C8h] [rbp+748h]
  HANDLE v203[2]; // [rsp+7D0h] [rbp+750h] BYREF
  HANDLE v204; // [rsp+7E0h] [rbp+760h] BYREF
  __int64 v205; // [rsp+7E8h] [rbp+768h]
  __int64 v206; // [rsp+7F0h] [rbp+770h]
  __int64 v207; // [rsp+7F8h] [rbp+778h]
  __int64 v208; // [rsp+800h] [rbp+780h]
  __int64 v209; // [rsp+808h] [rbp+788h]
  __int64 v210; // [rsp+810h] [rbp+790h]
  __int64 v211; // [rsp+818h] [rbp+798h]
  __int64 v212; // [rsp+820h] [rbp+7A0h]
  __int64 v213; // [rsp+828h] [rbp+7A8h]
  __int64 v214; // [rsp+830h] [rbp+7B0h]
  __int64 v215; // [rsp+838h] [rbp+7B8h]
  __int64 v216; // [rsp+840h] [rbp+7C0h]
  __int64 v217; // [rsp+848h] [rbp+7C8h]
  __int64 v218; // [rsp+850h] [rbp+7D0h]
  void *v219; // [rsp+858h] [rbp+7D8h]
  _BYTE v220[4]; // [rsp+863h] [rbp+7E3h] BYREF
  char v221; // [rsp+867h] [rbp+7E7h]
  __int64 v222; // [rsp+868h] [rbp+7E8h]
  __int64 v223; // [rsp+870h] [rbp+7F0h]
  char v224; // [rsp+87Dh] [rbp+7FDh]
  char v225; // [rsp+87Eh] [rbp+7FEh]
  char v226; // [rsp+87Fh] [rbp+7FFh]
  char v227; // [rsp+880h] [rbp+800h]
  char v228; // [rsp+881h] [rbp+801h]
  char v229; // [rsp+882h] [rbp+802h]
  char v230; // [rsp+883h] [rbp+803h]
  char v231; // [rsp+884h] [rbp+804h]
  char v232; // [rsp+885h] [rbp+805h]
  char v233; // [rsp+886h] [rbp+806h]
  char v234; // [rsp+887h] [rbp+807h]
  __int64 v235; // [rsp+888h] [rbp+808h]
  char v236; // [rsp+891h] [rbp+811h]
  char v237; // [rsp+892h] [rbp+812h]
  char v238; // [rsp+893h] [rbp+813h]
  char v239; // [rsp+894h] [rbp+814h]
  char v240; // [rsp+895h] [rbp+815h]
  char v241; // [rsp+896h] [rbp+816h]
  char v242; // [rsp+897h] [rbp+817h]
  __int64 v243; // [rsp+898h] [rbp+818h]

  v243 = -2;
  sub_1403C8920(&v176, a2, a3);
  v235 = v176.m256i_i64[1];
  sub_14037FAC0((__int64)&v190, v176.m256i_i64[1], v176.m256i_i64[2], (__int64)&aTtenaccountCre[4], 18);
  v14 = v190;
  if ( v190.m128i_i64[0] != -1 )
  {
    *(_OWORD *)&v180[32] = *(_OWORD *)&v192[48];
    *(_OWORD *)&v180[16] = *(_OWORD *)&v192[32];
    *(_OWORD *)v180 = *(_OWORD *)&v192[16];
    v179 = *(__m128i *)v192;
    v178 = v191;
    if ( v176.m256i_i64[0] )
      sub_140001660(v235, v176.m256i_i64[0], 1);
    v190 = v14;
    v15 = _mm_load_si128(&v179);
    v191 = v178;
    *(__m128i *)v192 = v15;
    *(_OWORD *)&v192[16] = *(_OWORD *)v180;
    *(_OWORD *)&v192[32] = *(_OWORD *)&v180[16];
    *(__m128i *)&v192[48] = _mm_load_si128((const __m128i *)&v180[32]);
    v157 = nullptr;
    v158 = (__m128i)1uLL;
    v176.m256i_i64[2] = 1610612768;
    v176.m256i_i64[0] = (__int64)&v157;
    v176.m256i_i64[1] = (__int64)&off_1417A9B00;
    if ( (unsigned __int8)sub_140B036A0(&v190, &v176) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_3,
        55,
        (unsigned int)v220,
        (unsigned int)&unk_1417A5580,
        (__int64)&off_1417A9BB8);
    a1[1].m128i_i64[0] = v158.m128i_i64[1];
    *a1 = _mm_loadu_si128((const __m128i *)&v157);
    return sub_140984DB0(&v190);
  }
  if ( v176.m256i_i64[0] )
    sub_140001660(v235, v176.m256i_i64[0], 1);
  v204 = (HANDLE)v14.m128i_i64[1];
  sub_1403C9010(&v190, a2, a3);
  if ( v190.m128i_i64[0] == -2 )
  {
    *(_OWORD *)&v180[48] = *(_OWORD *)&v192[56];
    *(_OWORD *)&v180[32] = *(_OWORD *)&v192[40];
    v17 = _mm_loadu_si128((const __m128i *)&v190.m128i_u64[1]);
    v18 = _mm_loadu_si128((const __m128i *)&v191.m128i_u64[1]);
    *(_OWORD *)&v180[16] = *(_OWORD *)&v192[24];
    *(_OWORD *)v180 = *(_OWORD *)&v192[8];
    v179 = v18;
    v178 = v17;
    v176.m256i_i64[0] = (__int64)&v178;
    v176.m256i_i64[1] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v141, &unk_1417A742A, &v176);
    a1[1].m128i_i64[0] = v142;
    *a1 = _mm_loadu_si128(&v141);
    sub_140984DB0(&v178);
LABEL_115:
    v190.m128i_i64[0] = sub_1412018B0(&v204);
    if ( v190.m128i_i64[0] )
      sub_140018650(&v190);
    return CloseHandle(v204);
  }
  sub_141684120(v114, &v190, 176);
  v19 = *a4;
  if ( *a4 != -1 && v19 )
    sub_140001660(a4[1], v19, 1);
  v20 = a4[3];
  if ( v20 != -1 && v20 )
    sub_140001660(a4[4], v20, 1);
  sub_140015710(a4 + 6);
  v21 = a4[18];
  if ( v21 != -1 && v21 )
    sub_140001660(a4[19], v21, 1);
  sub_141684120(a4, v114, 176);
  v203[0] = nullptr;
  v235 = -1;
  if ( !a8 )
    goto LABEL_54;
  v222 = -1;
  v242 = 1;
  sub_14148D3C0(&v176, a8, a9);
  v23 = v176.m256i_i64[1];
  if ( v176.m256i_i64[0] != -1 )
  {
    v219 = (void *)v176.m256i_i64[1];
    v223 = v176.m256i_i64[0];
    v190 = *(__m128i *)&v176.m256i_u64[1];
    v191 = 0;
    sub_1408A9B00(&v178, &v190);
    v24 = v178.m128i_i64[0];
    if ( v178.m128i_i64[0] == -2 )
    {
      v25 = *(_QWORD *)v178.m128i_i64[1];
      v26 = *(_QWORD *)v178.m128i_i64[1] == 1;
      v235 = v178.m128i_i64[1];
      if ( v26 )
      {
        sub_140018650(v178.m128i_i64[1] + 8);
      }
      else if ( !v25 )
      {
        v27 = *(_QWORD *)(v235 + 16);
        if ( v27 )
          sub_140001660(*(_QWORD *)(v235 + 8), v27, 1);
      }
      sub_140001660(v235, 40, 8);
      if ( v223 )
        sub_140001660(v219, v223, 1);
      goto LABEL_97;
    }
    sub_141684120(&v190.m128i_u64[1], &v178.m128i_u64[1], 168);
    v190.m128i_i64[0] = v24;
    v28 = sub_1403CC3A0((__int64)&v190, (__int64)a4, a8, a9);
    if ( v24 != -1 && v24 )
      sub_140001660(v190.m128i_i64[1], v24, 1);
    if ( v191.m128i_i64[1] != -1 && v191.m128i_i64[1] )
      sub_140001660(*(_QWORD *)v192, v191.m128i_i64[1], 1);
    if ( *(_QWORD *)&v192[16] != -1 && *(_QWORD *)&v192[16] )
      sub_140001660(*(_QWORD *)&v192[24], *(_QWORD *)&v192[16], 1);
    if ( *(_QWORD *)&v192[40] != -1 && *(_QWORD *)&v192[40] )
      sub_140001660(*(_QWORD *)&v192[48], *(_QWORD *)&v192[40], 1);
    if ( *(_QWORD *)&v192[64] != -1 && *(_QWORD *)&v192[64] )
      sub_140001660(*(_QWORD *)&v192[72], *(_QWORD *)&v192[64], 1);
    if ( v194 != -1 && v194 )
      sub_140001660(v195, v194, 1);
    if ( v196.m128i_i64[0] != -1 && v196.m128i_i64[0] )
      sub_140001660(v196.m128i_i64[1], v196.m128i_i64[0], 1);
    if ( v223 )
      sub_140001660(v219, v223, 1);
    if ( v28 )
      goto LABEL_97;
LABEL_54:
    v29 = 0;
    v30 = 0;
    goto LABEL_55;
  }
  if ( !(unsigned __int8)sub_1409CEE90(v176.m256i_i64[1]) )
  {
    v190.m128i_i64[0] = v23;
    v222 = -1;
    v242 = 1;
    sub_140018650(&v190);
    goto LABEL_54;
  }
  v222 = -1;
  v242 = 1;
  sub_140018650(&v176.m256i_u64[1]);
LABEL_97:
  v222 = -1;
  v242 = 1;
  sub_1403871C0(&v178, a6, a7);
  if ( v178.m128i_i32[0] != -1 )
  {
    *(_OWORD *)&v192[48] = *(_OWORD *)&v180[48];
    *(_OWORD *)&v192[32] = *(_OWORD *)&v180[32];
    v51 = _mm_loadu_si128(&v178);
    v52 = _mm_loadu_si128(&v179);
    *(_OWORD *)&v192[16] = *(_OWORD *)&v180[16];
    *(_OWORD *)v192 = *(_OWORD *)v180;
    v191 = v52;
    v190 = v51;
    v157 = nullptr;
    v158 = (__m128i)1uLL;
    v176.m256i_i64[2] = 1610612768;
    v176.m256i_i64[0] = (__int64)&v157;
    v176.m256i_i64[1] = (__int64)&off_1417A9B00;
    if ( (unsigned __int8)sub_140B036A0(&v190, &v176) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_3,
        55,
        (unsigned int)v220,
        (unsigned int)&unk_1417A5580,
        (__int64)&off_1417A9BB8);
    a1[1].m128i_i64[0] = v158.m128i_i64[1];
    *a1 = _mm_loadu_si128((const __m128i *)&v157);
    v222 = -1;
    v242 = 1;
    sub_140984DB0(&v178);
LABEL_108:
    v35 = -1;
    goto LABEL_109;
  }
  v219 = (void *)v178.m128i_i64[1];
  hObject[0] = (HANDLE)v178.m128i_i64[1];
  sub_14148D3C0(&v176, a8, a9);
  if ( v176.m256i_i64[0] == -1 )
  {
    v178.m128i_i64[0] = v176.m256i_i64[1];
    v190.m128i_i64[0] = (__int64)&v178;
    v190.m128i_i64[1] = (__int64)sub_141490720;
    sub_14149C0F0(&v135, &unk_1417A711F, &v190);
    a1[1].m128i_i64[0] = v136;
    *a1 = _mm_loadu_si128(&v135);
    v186 = -1;
    v227 = 1;
    sub_140018650(&v178);
    goto LABEL_105;
  }
  v235 = v176.m256i_i64[0];
  v53 = v176.m256i_i64[2];
  v223 = v176.m256i_i64[1];
  v178 = *(__m128i *)&v176.m256i_u64[1];
  v179 = 0;
  v187 = -1;
  v228 = 1;
  sub_1408A9B00(&v190, &v178);
  if ( v190.m128i_i64[0] == -2 )
  {
    v157 = (_QWORD *)v190.m128i_i64[1];
    v178.m128i_i64[0] = (__int64)&v157;
    v178.m128i_i64[1] = (__int64)sub_14142D3F0;
    sub_14149C0F0(&v137, &unk_1417A70EC, &v178);
    a1[1].m128i_i64[0] = v138;
    *a1 = _mm_loadu_si128(&v137);
    v206 = -1;
    v234 = 1;
    v233 = 1;
    sub_140010450(&v157);
    v54 = v235;
    if ( !v235 )
    {
LABEL_105:
      v190.m128i_i64[0] = sub_1412018B0(hObject);
      if ( v190.m128i_i64[0] )
        sub_140018650(&v190);
      CloseHandle(hObject[0]);
      goto LABEL_108;
    }
LABEL_103:
    sub_140001660(v223, v54, 1);
    goto LABEL_105;
  }
  v206 = -1;
  v234 = 1;
  v233 = 1;
  v30 = sub_1403CC3A0((__int64)&v190, (__int64)a4, a8, a9);
  if ( v30 )
  {
    v208 = v53;
    v202 = -1;
    v232 = 1;
    v231 = 1;
    v55 = sub_1409DBBA0(a4, &v190);
    v29 = v55;
    LOBYTE(v55) = 1;
    LODWORD(v216) = v55;
    if ( !v29 )
    {
      v202 = -1;
      v232 = 1;
      v231 = 1;
      v56 = (_QWORD *)sub_1409DC4B0(a2, a3, v223, v208);
      if ( v56 )
      {
        v157 = v56;
        v178.m128i_i64[0] = (__int64)&v157;
        v178.m128i_i64[1] = (__int64)sub_141490720;
        sub_14149C0F0(&v139, &unk_1417A70B2, &v178);
        a1[1].m128i_i64[0] = v140;
        *a1 = _mm_loadu_si128(&v139);
        v202 = -1;
        v232 = 1;
        v231 = 1;
        sub_140018650(&v157);
        sub_140015840(v190.m128i_i64);
        v54 = v235;
        if ( !v235 )
          goto LABEL_105;
        goto LABEL_103;
      }
      sub_140015840(a4);
      sub_141684120(a4, &v190, 176);
      LODWORD(v216) = 0;
    }
    sub_140980960(v203);
    v203[0] = HANDLE_FLAG_INHERIT;
    v203[1] = v219;
    if ( (_BYTE)v216 )
      sub_140015840(v190.m128i_i64);
  }
  else
  {
    if ( *(_QWORD *)off_141EC8D80 < 3u )
      goto LABEL_125;
    v178.m128i_i64[0] = (__int64)aCodexmateLibCo_34;
    v178.m128i_i64[1] = 34;
    v179.m128i_i64[0] = (__int64)aCodexmateLibCo_34;
    v179.m128i_i64[1] = 34;
    *(_QWORD *)v180 = &off_1417A7078;
    v206 = -1;
    v234 = 1;
    v233 = 1;
    sub_140985BA0(&unk_1417A7017, 137, 3, &v178);
    if ( v190.m128i_i64[0] != -2 )
LABEL_125:
      sub_140015840(v190.m128i_i64);
    if ( v235 )
      sub_140001660(v223, v235, 1);
    v222 = -1;
    v242 = 1;
    sub_1402C5E50(hObject);
    v235 = -1;
    v29 = 0;
  }
LABEL_55:
  if ( a10 )
  {
    if ( v30 )
    {
      v218 = v223;
      v222 = v235;
      v242 = 1;
      if ( (unsigned int)sub_140AECEB0(aChatgpt, 7) == 1 )
        goto LABEL_88;
      v218 = v223;
      v222 = v235;
      v242 = 1;
      if ( (unsigned int)sub_140AECEB0(aCodex_0, 5) == 1 )
        goto LABEL_88;
      v218 = v223;
      v222 = v235;
      v242 = 1;
      sub_1403FEAF0(&v190);
      if ( v190.m128i_i32[0] != -1 )
      {
        v218 = v223;
        v222 = v235;
        v242 = 1;
        sub_140984DB0(&v190);
LABEL_88:
        nullsub_1(v31);
        v48 = (__m128i *)sub_140001650(64, 1);
        if ( !v48 )
        {
          v218 = v223;
          v222 = v235;
          v242 = 1;
          sub_1416C2D4B(1, 64);
        }
        qmemcpy(&v48[1], "oken refresh deferred while Codex owns auth.json", 48);
        *v48 = _mm_loadu_si128((const __m128i *)&xmmword_1417A73EA);
        a1->m128i_i64[0] = 64;
        a1->m128i_i64[1] = (__int64)v48;
        a1[1].m128i_i64[0] = 64;
        v35 = v235;
        goto LABEL_109;
      }
    }
    goto LABEL_81;
  }
  if ( a4[9] != -1 )
  {
    if ( a4[11] )
    {
      v32 = a4[10];
      v218 = v223;
      v222 = v235;
      v242 = 1;
      v33 = sub_1409DC570(v32);
      LOBYTE(v22) = v33 & (v34 >= 301);
      if ( (_BYTE)v22 == 1 )
      {
        v35 = v235;
        if ( !v29 )
          goto LABEL_151;
        if ( !a8 )
        {
          v65 = v235;
          nullsub_1(v22);
          v66 = (__m128i *)sub_140001650(46, 1);
          if ( !v66 )
          {
            v218 = v223;
            v222 = v65;
            v242 = 1;
            sub_1416C2D4B(1, 46);
          }
          qmemcpy(&v66[1], "efresh lost the live auth path", 30);
          *v66 = _mm_loadu_si128((const __m128i *)&xmmword_1417A71BC);
          a1->m128i_i64[0] = 46;
          a1->m128i_i64[1] = (__int64)v66;
          a1[1].m128i_i64[0] = 46;
          v35 = v65;
          goto LABEL_109;
        }
        v36 = v208;
        if ( v235 == -1 )
          v36 = 0;
        v208 = v36;
        v37 = 1;
        if ( v235 != -1 )
          v37 = v223;
        v218 = v223;
        v222 = v235;
        v242 = 1;
        v38 = sub_1409E1220();
        v35 = v235;
        if ( v38 )
          goto LABEL_151;
        v218 = v223;
        v222 = v235;
        v242 = 1;
        sub_14148D3C0(&v190, a8, a9);
        v39 = v190.m128i_i64[0];
        if ( v190.m128i_i64[0] == -1 )
        {
          v218 = v223;
          v222 = v235;
          v242 = 1;
          sub_14043CB80(&v190);
          v35 = v235;
          goto LABEL_151;
        }
        v40 = v190.m128i_i64[1];
        v35 = v235;
        if ( v191.m128i_i64[0] != v208 || (v41 = sub_1416847B0(v190.m128i_i64[1], v37, v208), v35 = v235, v41) )
        {
          if ( !v39 )
          {
LABEL_151:
            a1->m128i_i64[0] = 0x8000000000000000uLL;
            goto LABEL_109;
          }
          v42 = v40;
          v43 = v35;
          v44 = v39;
LABEL_76:
          sub_140001660(v42, v44, 1);
          v35 = v43;
          goto LABEL_151;
        }
        if ( v39 )
        {
          sub_140001660(v40, v39, 1);
          v35 = v235;
        }
        v218 = v223;
        v222 = v35;
        v242 = 1;
        sub_1409855E0(&v190, (__int64)a4);
        v219 = (void *)v190.m128i_i64[0];
        if ( v190.m128i_i64[0] == -1 )
        {
          v176.m256i_i64[0] = v190.m128i_i64[1];
          v178.m128i_i64[0] = (__int64)&v176;
          v178.m128i_i64[1] = (__int64)sub_14142D3F0;
          sub_14149C0F0(&v133, &unk_1417A718D, &v178);
          a1[1].m128i_i64[0] = v134;
          *a1 = _mm_loadu_si128(&v133);
          v218 = v223;
          v222 = v235;
          v242 = 1;
          sub_140010450(&v176);
        }
        else
        {
          v216 = v190.m128i_i64[1];
          v102 = sub_1408726C0(a8, a9, v190.m128i_i64[1], v191.m128i_u64[0]);
          if ( !v102 )
          {
            v35 = v235;
            if ( !v219 )
              goto LABEL_151;
            v42 = v216;
            v43 = v235;
            v44 = (__int64)v219;
            goto LABEL_76;
          }
          v178.m128i_i64[0] = v102;
          v190.m128i_i64[0] = (__int64)&v178;
          v190.m128i_i64[1] = (__int64)sub_141490720;
          sub_14149C0F0(&v131, &unk_1417A7151, &v190);
          a1[1].m128i_i64[0] = v132;
          *a1 = _mm_loadu_si128(&v131);
          sub_140018650(&v178);
          if ( v219 )
          {
            sub_140001660(v216, v219, 1);
            v35 = v235;
            goto LABEL_109;
          }
        }
        v35 = v235;
        goto LABEL_109;
      }
    }
  }
  if ( v30 )
  {
    v218 = v223;
    v222 = v235;
    v242 = 1;
    if ( (unsigned __int8)sub_1409E1220() )
    {
      v218 = v223;
      v222 = v235;
      v242 = 1;
      if ( !(unsigned __int8)sub_1409E1350(a4) )
        goto LABEL_88;
      v45 = 0x8000000000000000uLL;
LABEL_87:
      a1->m128i_i64[0] = v45;
      v35 = v235;
LABEL_109:
      if ( v203[0] )
      {
        v235 = v35;
        v190.m128i_i64[0] = sub_1412018B0(&v203[1]);
        if ( v190.m128i_i64[0] )
          sub_140018650(&v190);
        CloseHandle(v203[1]);
        v35 = v235;
      }
      if ( v35 > 0 )
        sub_140001660(v223, v35, 1);
      goto LABEL_115;
    }
  }
LABEL_81:
  if ( a4[12] == -1 || (v46 = a4[14]) == 0 )
  {
    v45 = 0x8000000000000002uLL;
    goto LABEL_87;
  }
  if ( v46 < 0 )
  {
    v47 = 0;
    goto LABEL_85;
  }
  v49 = a4[13];
  v219 = (void *)a4[14];
  nullsub_1(v22);
  v47 = 1;
  v50 = sub_140001650(v219, 1);
  v46 = (__int64)v219;
  if ( !v50 )
  {
LABEL_85:
    v218 = v223;
    v222 = v235;
    v242 = 1;
    sub_1416C2D4B(v47, v46);
  }
  v216 = v50;
  sub_141684120(v50, v49, v219);
  v241 = 1;
  sub_1409D5FE0(&v178, a5);
  if ( v178.m128i_i64[0] != -1 )
  {
    if ( v178.m128i_i32[0] == 6 )
    {
      v157 = (_QWORD *)v178.m128i_i64[1];
      v176.m256i_i64[0] = (__int64)&v157;
      v176.m256i_i64[1] = (__int64)sub_141031F10;
      sub_14149C0F0(&v190, &unk_1417A4CB0, &v176);
      *(__m128i *)hObject = _mm_loadu_si128(&v190);
      v147 = (const char *)v191.m128i_i64[0];
      v241 = 1;
      sub_140528900(v157);
    }
    else
    {
      v190 = v178;
      v63 = _mm_loadu_si128((const __m128i *)v180);
      v191 = v179;
      *(__m128i *)v192 = v63;
      *(_OWORD *)&v192[16] = *(_OWORD *)&v180[16];
      *(_OWORD *)&v192[32] = *(_OWORD *)&v180[32];
      *(__m128i *)&v192[48] = _mm_loadu_si128((const __m128i *)&v180[48]);
      v157 = nullptr;
      v158 = (__m128i)1uLL;
      v176.m256i_i64[2] = 1610612768;
      v176.m256i_i64[0] = (__int64)&v157;
      v176.m256i_i64[1] = (__int64)&off_1417A9B00;
      if ( (unsigned __int8)sub_140B036A0(&v190, &v176) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_3,
          55,
          (unsigned int)v220,
          (unsigned int)&unk_1417A5580,
          (__int64)&off_1417A9BB8);
      v147 = (const char *)v158.m128i_i64[1];
      *(__m128i *)hObject = _mm_loadu_si128((const __m128i *)&v157);
      v241 = 1;
      sub_140984DB0(&v190);
    }
    si128 = _mm_load_si128((const __m128i *)hObject);
    v167 = (__int64)v147;
    goto LABEL_136;
  }
  v163 = _mm_loadu_si128((const __m128i *)&v178.m128i_u64[1]);
  v164 = v179.m128i_i64[1];
  hObject[0] = aGrantType_0;
  hObject[1] = (HANDLE)10;
  v147 = aRefreshToken_3;
  v148 = 13;
  v149 = aRefreshToken_3;
  v150 = 13;
  v151 = v216;
  v152 = v219;
  v153 = aClientId_0;
  v154 = 9;
  v155 = aAppEmoameez73f_0;
  v156 = 28;
  sub_14097F010(
    (unsigned int)&v190,
    (unsigned int)&v163,
    (unsigned int)byte_1417A3F68,
    (unsigned int)&unk_1417A6F97,
    35);
  sub_1406C7070(
    (unsigned int)&v178,
    (unsigned int)&v190,
    (unsigned int)aUserAgent_2,
    10,
    (__int64)&unk_1417A67DE,
    12,
    0);
  sub_1406C7070((unsigned int)&v190, (unsigned int)&v178, (unsigned int)aAccept_1, 6, (__int64)&unk_1417A3F8C, 16, 0);
  sub_14103D060(&v178, &v190, 15, 0);
  sub_1406C7AD0(&v190, &v178, hObject);
  sub_14103CF70(&v176, &v190);
  v57 = (_QWORD *)v176.m256i_i64[0];
  if ( v176.m256i_i64[0] == -1 )
  {
    v183[0] = v176.m256i_i64[1];
    v178.m128i_i64[0] = (__int64)v183;
    v178.m128i_i64[1] = (__int64)sub_141031F10;
    sub_14149C0F0(&v190, &unk_1417A4CF8, &v178);
    v178 = _mm_loadu_si128(&v190);
    v179.m128i_i64[0] = v191.m128i_i64[0];
    sub_140528900(v183[0]);
    si128 = _mm_load_si128(&v178);
    v167 = v179.m128i_i64[0];
    v165 = -1;
    goto LABEL_157;
  }
  v201 = v176.m256i_i64[3];
  v200 = *(__m128i *)&v176.m256i_u64[1];
  sub_141684120(v160, v177, 144);
  v185.m128i_i64[1] = v201;
  v158 = _mm_load_si128(&v200);
  v159 = v201;
  v157 = v57;
  v58 = v161;
  v221 = 1;
  v59 = sub_14101E130(&v157);
  if ( ((v60 >= 0x40001) & v59) != 0 )
  {
    LOBYTE(v61) = v60 >= 0x40001;
    nullsub_1(v61);
    v62 = (__m128i *)sub_140001650(47, 1);
    if ( !v62 )
    {
      v221 = 1;
      sub_1416C2D4B(1, 47);
    }
    qmemcpy(&v62[1], "esponse exceeded the size limit", 31);
    *v62 = _mm_loadu_si128((const __m128i *)&xmmword_1417A6FD2);
    si128.m128i_i64[0] = 47;
    si128.m128i_i64[1] = (__int64)v62;
    v167 = 47;
    v165 = -1;
    sub_140984A70(&v157);
    goto LABEL_157;
  }
  v209 = v58;
  v184 = 0;
  v185 = (__m128i)1uLL;
  sub_141684120(&v190, &v157, 176);
  v198 = 262145;
  v199 = 262145;
  v67 = sub_140352020(&v190, &v184, 0);
  v69 = v209;
  if ( v67 == 1 )
  {
    v200.m128i_i64[0] = v68;
    v176.m256i_i64[0] = (__int64)&v200;
    v176.m256i_i64[1] = (__int64)sub_141490720;
    sub_14149C0F0(&v178, &unk_1417A4CC0, &v176);
    v70 = v178;
    v71 = v179.m128i_i64[0];
    sub_140018650(&v200);
    si128 = v70;
    v167 = v71;
    v165 = -1;
    sub_140984A70(&v190);
    goto LABEL_155;
  }
  sub_140984A70(&v190);
  if ( v185.m128i_i64[1] >= 0x40001uLL )
  {
    nullsub_1(v72);
    v73 = (__m128i *)sub_140001650(47, 1);
    if ( !v73 )
      sub_1416C2D4B(1, 47);
    qmemcpy(&v73[1], "esponse exceeded the size limit", 31);
    *v73 = _mm_loadu_si128((const __m128i *)&xmmword_1417A6FD2);
    si128.m128i_i64[0] = 47;
    si128.m128i_i64[1] = (__int64)v73;
    v167 = 47;
    goto LABEL_149;
  }
  if ( (unsigned __int16)(v69 - 200) < 0x64u )
  {
    v178 = v185;
    v179 = 0;
    sub_1408A98F0(&v190, &v178);
    if ( v190.m128i_i64[0] != -1 )
    {
      v74 = _mm_loadu_si128((const __m128i *)&v190.m128i_u64[1]);
      v118 = _mm_loadu_si128((const __m128i *)v192);
      v119 = *(_OWORD *)&v192[16];
      v120 = *(_QWORD *)&v192[32];
      v115 = v190.m128i_i64[0];
      v116 = v74;
      v117 = v191.m128i_i64[1];
      sub_1409E10B0(&v165, &v115);
LABEL_155:
      if ( v184 )
        sub_140001660(v185.m128i_i64[0], v184, 1);
LABEL_157:
      if ( _InterlockedDecrement64((volatile signed __int64 *)v163.m128i_i64[0]) )
        goto LABEL_159;
      goto LABEL_158;
    }
    sub_14099BCE0(&v178, v190.m128i_i64[1]);
    si128 = _mm_loadu_si128(&v178);
    v167 = v179.m128i_i64[0];
LABEL_149:
    v165 = -1;
    goto LABEL_155;
  }
  v178 = v185;
  v179 = 0;
  sub_1408A96E0(&v190, &v178);
  if ( v190.m128i_i64[0] == -2 )
  {
    v178.m128i_i64[0] = -2;
    sub_1408A18D0(&v190);
LABEL_249:
    v200.m128i_i64[0] = -1;
    v211 = -2;
    v104 = 1;
LABEL_250:
    v176.m256i_i64[0] = 0;
    *(_OWORD *)&v176.m256i_u64[1] = 1u;
    v217 = -1;
    goto LABEL_251;
  }
  v103 = _mm_loadu_si128(&v191);
  v178 = _mm_loadu_si128(&v190);
  *(_QWORD *)&v180[32] = *(_QWORD *)&v192[32];
  *(_OWORD *)&v180[16] = *(_OWORD *)&v192[16];
  *(_OWORD *)v180 = *(_OWORD *)v192;
  v179 = v103;
  v211 = v178.m128i_i64[0];
  if ( v178.m128i_i64[0] == -2 )
    goto LABEL_249;
  sub_1409E0F50(&v200, &v178);
  v217 = v200.m128i_i64[0];
  if ( v200.m128i_i64[0] == -1 )
  {
    v104 = 0;
    goto LABEL_250;
  }
  if ( v201 == 13 )
  {
    if ( !(*(_QWORD *)v200.m128i_i64[1] ^ 0x5F64696C61766E69LL
         | *(_QWORD *)(v200.m128i_i64[1] + 5) ^ 0x746E6172675F6469LL)
      || !(*(_QWORD *)v200.m128i_i64[1] ^ 0x5F64696C61766E69LL
         | *(_QWORD *)(v200.m128i_i64[1] + 5) ^ 0x6E656B6F745F6469LL) )
    {
LABEL_299:
      si128.m128i_i64[0] = 0x8000000000000003uLL;
      v165 = -1;
      if ( v217 )
        sub_140001660(v200.m128i_i64[1], v217, 1);
      v105 = v211;
      if ( v179.m128i_i64[1] == -3 )
        goto LABEL_259;
      goto LABEL_258;
    }
  }
  else if ( v201 == 20
         && _mm_movemask_epi8(
              _mm_and_si128(
                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v200.m128i_i64[1]), (__m128i)xmmword_1417A2D30),
                _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v200.m128i_i64[1] + 16)), (__m128i)xmmword_1417A2D20))) == 0xFFFF )
  {
    goto LABEL_299;
  }
  v143[0] = v200.m128i_i64[1];
  v143[1] = v201;
  v183[0] = v143;
  v183[1] = sub_14041F680;
  v162 = v217;
  sub_14149C0F0(&v190, &unk_1417A4CF1, v183);
  *(__m128i *)v176.m256i_i8 = _mm_loadu_si128(&v190);
  v176.m256i_i64[2] = v191.m128i_i64[0];
  v104 = 0;
LABEL_251:
  LOWORD(v183[0]) = v209;
  v190.m128i_i64[0] = (__int64)v183;
  v190.m128i_i64[1] = (__int64)sub_1414AAE30;
  v191.m128i_i64[0] = (__int64)&v176;
  v191.m128i_i64[1] = (__int64)sub_1400015F0;
  sub_14149C0F0(&v121, &unk_1417A6FBA, &v190);
  si128 = _mm_loadu_si128(&v121);
  v167 = v122;
  v165 = -1;
  v105 = v211;
  if ( v176.m256i_i64[0] )
    sub_140001660(v176.m256i_i64[1], v176.m256i_i64[0], 1);
  if ( v217 != -1 && v217 )
    sub_140001660(v200.m128i_i64[1], v217, 1);
  if ( !v104 )
  {
    if ( v179.m128i_i64[1] == -3 )
    {
LABEL_259:
      if ( v105 != -1 && v105 )
        sub_140001660(v178.m128i_i64[1], v105, 1);
      goto LABEL_262;
    }
LABEL_258:
    sub_140984D40(&v179.m128i_u64[1]);
    goto LABEL_259;
  }
LABEL_262:
  if ( v184 )
    sub_140001660(v185.m128i_i64[0], v184, 1);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v163.m128i_i64[0]) )
  {
LABEL_158:
    v241 = 1;
    sub_141018DA0(&v163);
  }
LABEL_159:
  if ( v165 == -1 )
  {
LABEL_136:
    a1[1].m128i_i64[0] = v167;
    *a1 = _mm_loadu_si128(&si128);
    v64 = v235;
LABEL_137:
    sub_140001660(v216, v219, 1);
    v35 = v64;
    goto LABEL_109;
  }
  v217 = v165;
  v75 = si128.m128i_i64[1];
  v211 = si128.m128i_i64[0];
  v188 = v167;
  v173 = v168;
  v76 = v169;
  v209 = v170;
  v174 = v171;
  v207 = v172;
  v226 = 1;
  v225 = 1;
  v224 = 1;
  sub_1403C9DD0(&v190, a4, a2, a3);
  if ( v190.m128i_i32[0] == 2 )
  {
    *(_OWORD *)&v180[48] = *(_OWORD *)&v192[56];
    *(_OWORD *)&v180[32] = *(_OWORD *)&v192[40];
    v77 = _mm_loadu_si128((const __m128i *)&v190.m128i_u64[1]);
    v78 = _mm_loadu_si128((const __m128i *)&v191.m128i_u64[1]);
    *(_OWORD *)&v180[16] = *(_OWORD *)&v192[24];
    *(_OWORD *)v180 = *(_OWORD *)&v192[8];
    v179 = v78;
    v178 = v77;
    sub_140A68270(&v176, &v178);
    a1[1].m128i_i64[0] = v176.m256i_i64[2];
    *a1 = _mm_loadu_si128((const __m128i *)&v176);
    v226 = 1;
    v225 = 1;
    v224 = 1;
    sub_140984DB0(&v190.m128i_i64[1]);
    v64 = v235;
    if ( v217 )
      sub_140001660(v211, v217, 1);
LABEL_221:
    if ( (unsigned __int64)(v188 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v173, v188, 1);
    if ( (unsigned __int64)(v209 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v174, v209, 1);
    goto LABEL_137;
  }
  v205 = v75;
  v212 = v76;
  v79 = *(_QWORD *)&v192[40];
  v80 = *(_QWORD *)&v192[32];
  v81 = *(_QWORD *)&v192[56];
  v215 = *(_QWORD *)&v192[64];
  v214 = v193;
  v213 = v194;
  v189 = v191.m128i_i64[1];
  v210 = v191.m128i_i64[0];
  v144 = *(_QWORD *)v192;
  if ( *(_QWORD *)&v192[8] )
  {
    v175 = *(_QWORD *)&v192[56];
    v82 = *(_QWORD *)&v192[40];
    sub_140001660(*(_QWORD *)&v192[16], *(_QWORD *)&v192[8], 1);
    v79 = v82;
    v81 = v175;
  }
  if ( (unsigned __int64)(v80 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v79, v80, 1);
  if ( (unsigned __int64)(v81 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v215, v81, 1);
  v83 = v205;
  if ( (unsigned __int64)(v214 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v213, v214, 1);
  v220[3] = 1;
  v220[2] = 1;
  v220[1] = 1;
  sub_140A68820(&v190, a4);
  v239 = 1;
  v238 = 1;
  v237 = 1;
  v236 = 1;
  v84 = sub_14033BC10(v211, v83);
  v205 = v86;
  v87 = v86;
  if ( !v86 )
  {
    nullsub_1(v85);
    v91 = (__m128i *)sub_140001650(45, 1);
    if ( !v91 )
    {
      v239 = 1;
      v238 = 1;
      v237 = 1;
      v236 = 1;
      sub_1416C2D4B(1, 45);
    }
    qmemcpy(&v91[1], "eturned an empty access_token", 29);
    *v91 = _mm_loadu_si128((const __m128i *)&xmmword_1417A71EA);
    a1->m128i_i64[0] = 45;
    a1->m128i_i64[1] = (__int64)v91;
    a1[1].m128i_i64[0] = 45;
    goto LABEL_193;
  }
  v213 = v84;
  sub_140388B60((unsigned int)&v178, v205, 0, 1, 1);
  v214 = v178.m128i_i64[1];
  if ( v178.m128i_i8[0] )
  {
    v239 = 1;
    v238 = 1;
    v237 = 1;
    v236 = 1;
    sub_1416C2D4B(v214, v179.m128i_i64[0]);
  }
  v88 = v179.m128i_i64[0];
  sub_141684120(v179.m128i_i64[0], v213, v87);
  if ( *(_QWORD *)&v192[40] != -1 && *(_QWORD *)&v192[40] )
    sub_140001660(*(_QWORD *)&v192[48], *(_QWORD *)&v192[40], 1);
  *(_QWORD *)&v192[40] = v214;
  *(_QWORD *)&v192[48] = v88;
  *(_QWORD *)&v192[56] = v205;
  v178.m128i_i64[0] = v188;
  v178.m128i_i64[1] = v173;
  v179.m128i_i64[0] = v212;
  v239 = 1;
  v238 = 0;
  v237 = 1;
  v236 = 1;
  sub_14097BE40((__int64)&v176, v178.m128i_i64);
  if ( v176.m256i_i64[0] != -1 )
  {
    if ( *(_QWORD *)&v192[64] != -1 && *(_QWORD *)&v192[64] )
      sub_140001660(*(_QWORD *)&v192[72], *(_QWORD *)&v192[64], 1);
    v193 = v176.m256i_i64[2];
    *(__m128i *)&v192[64] = _mm_loadu_si128((const __m128i *)&v176);
  }
  v178.m128i_i64[0] = v209;
  v178.m128i_i64[1] = v174;
  v179.m128i_i64[0] = v207;
  v239 = 1;
  v238 = 0;
  v237 = 0;
  v236 = 1;
  sub_14097BE40((__int64)&v176, v178.m128i_i64);
  if ( v176.m256i_i64[0] != -1 )
  {
    if ( *(_QWORD *)&v192[16] != -1 && *(_QWORD *)&v192[16] )
      sub_140001660(*(_QWORD *)&v192[24], *(_QWORD *)&v192[16], 1);
    *(_QWORD *)&v192[32] = v176.m256i_i64[2];
    *(__m128i *)&v192[16] = _mm_loadu_si128((const __m128i *)&v176);
  }
  v239 = 1;
  v238 = 0;
  v237 = 0;
  v236 = 1;
  sub_1409DC240(&v178);
  v176.m256i_i64[2] = v179.m128i_i64[0];
  *(__m128i *)v176.m256i_i8 = v178;
  if ( v196.m128i_i64[0] != -1 && v196.m128i_i64[0] )
    sub_140001660(v196.m128i_i64[1], v196.m128i_i64[0], 1);
  v197 = v176.m256i_i64[2];
  v196 = _mm_load_si128((const __m128i *)&v176);
  v239 = 1;
  v238 = 0;
  v237 = 0;
  v236 = 1;
  sub_1403C9DD0(&v178, &v190, a2, a3);
  if ( v178.m128i_i32[0] == 2 )
  {
    v177[3] = *(_OWORD *)&v180[56];
    v177[2] = *(_OWORD *)&v180[40];
    v89 = _mm_loadu_si128((const __m128i *)&v178.m128i_u64[1]);
    v90 = _mm_loadu_si128((const __m128i *)&v179.m128i_u64[1]);
    v177[1] = *(_OWORD *)&v180[24];
    v177[0] = *(_OWORD *)&v180[8];
    *(__m128i *)&v176.m256i_u64[2] = v90;
    *(__m128i *)v176.m256i_i8 = v89;
    sub_140A68270(&v157, &v176);
    a1[1].m128i_i64[0] = v158.m128i_i64[1];
    *a1 = _mm_loadu_si128((const __m128i *)&v157);
    v239 = 1;
    v238 = 0;
    v237 = 0;
    v236 = 1;
    sub_140984DB0(&v178.m128i_i64[1]);
LABEL_193:
    v64 = v235;
    v92 = v210;
    goto LABEL_194;
  }
  v95 = *(_QWORD *)&v180[40];
  v96 = *(_QWORD *)&v180[32];
  v97 = *(_QWORD *)&v180[56];
  v175 = *(_QWORD *)&v180[64];
  v212 = v181;
  v215 = v182;
  v207 = v179.m128i_i64[1];
  v214 = v179.m128i_i64[0];
  v213 = *(_QWORD *)v180;
  if ( *(_QWORD *)&v180[8] )
  {
    v145 = *(_QWORD *)&v180[56];
    v98 = *(_QWORD *)&v180[40];
    sub_140001660(*(_QWORD *)&v180[16], *(_QWORD *)&v180[8], 1);
    v95 = v98;
    v97 = v145;
  }
  if ( (unsigned __int64)(v96 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (unsigned __int64)(v97 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_229:
      v99 = v212;
      if ( (unsigned __int64)(v212 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_230;
LABEL_234:
      v100 = v144;
      if ( v213 == v144 )
        goto LABEL_235;
LABEL_236:
      nullsub_1(v95);
      v101 = (__m128i *)sub_140001650(59, 1);
      if ( !v101 )
      {
        v230 = 1;
        v229 = 1;
        sub_1416C2D4B(1, 59);
      }
      qmemcpy(&v101[1], "eturned credentials for a different account", 43);
      *v101 = _mm_loadu_si128((const __m128i *)&xmmword_1417A73AF);
      a1->m128i_i64[0] = 59;
      a1->m128i_i64[1] = (__int64)v101;
      a1[1].m128i_i64[0] = 59;
      v64 = v235;
      v92 = v210;
      if ( v214 )
        sub_140001660(v207, v214, 1);
LABEL_194:
      if ( v190.m128i_i64[0] != -1 && v190.m128i_i64[0] )
        sub_140001660(v190.m128i_i64[1], v190.m128i_i64[0], 1);
      if ( v191.m128i_i64[1] != -1 && v191.m128i_i64[1] )
        sub_140001660(*(_QWORD *)v192, v191.m128i_i64[1], 1);
      if ( *(_QWORD *)&v192[16] != -1 && *(_QWORD *)&v192[16] )
        sub_140001660(*(_QWORD *)&v192[24], *(_QWORD *)&v192[16], 1);
      if ( *(_QWORD *)&v192[40] != -1 && *(_QWORD *)&v192[40] )
        sub_140001660(*(_QWORD *)&v192[48], *(_QWORD *)&v192[40], 1);
      if ( *(_QWORD *)&v192[64] != -1 && *(_QWORD *)&v192[64] )
        sub_140001660(*(_QWORD *)&v192[72], *(_QWORD *)&v192[64], 1);
      if ( v194 != -1 && v194 )
        sub_140001660(v195, v194, 1);
      v93 = v196.m128i_i64[0];
      if ( v196.m128i_i64[0] != -1 && v196.m128i_i64[0] )
      {
        v94 = v196.m128i_i64[1];
LABEL_215:
        sub_140001660(v94, v93, 1);
        goto LABEL_216;
      }
      goto LABEL_216;
    }
  }
  else
  {
    sub_140001660(v95, v96, 1);
    if ( (unsigned __int64)(v97 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_229;
  }
  sub_140001660(v175, v97, 1);
  v99 = v212;
  if ( (unsigned __int64)(v212 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_234;
LABEL_230:
  sub_140001660(v215, v99, 1);
  v100 = v144;
  if ( v213 != v144 )
    goto LABEL_236;
LABEL_235:
  if ( (unsigned int)sub_1416847B0(v207, v189, v100) )
    goto LABEL_236;
  sub_140015840(a4);
  sub_141684120(a4, &v190, 176);
  v230 = 1;
  v229 = 0;
  sub_1409855E0(&v178, (__int64)a4);
  v212 = v178.m128i_i64[0];
  if ( v178.m128i_i64[0] == -1 )
  {
    v157 = (_QWORD *)v178.m128i_i64[1];
    v176.m256i_i64[0] = (__int64)&v157;
    v176.m256i_i64[1] = (__int64)sub_14142D3F0;
    sub_14149C0F0(&v129, &unk_1417A7388, &v176);
    a1[1].m128i_i64[0] = v130;
    *a1 = _mm_loadu_si128(&v129);
    v230 = 1;
    v229 = 0;
    sub_140010450(&v157);
    goto LABEL_282;
  }
  v106 = v179.m128i_i64[0];
  v240 = 1;
  v213 = v178.m128i_i64[1];
  v107 = sub_1408726C0(a2, a3, v178.m128i_i64[1], v179.m128i_u64[0]);
  if ( v107 )
  {
    v176.m256i_i64[0] = v107;
    v178.m128i_i64[0] = (__int64)&v176;
    v178.m128i_i64[1] = (__int64)sub_141490720;
    sub_14149C0F0(&v127, &unk_1417A7217, &v178);
    a1[1].m128i_i64[0] = v128;
    *a1 = _mm_loadu_si128(&v127);
    v240 = 1;
    sub_140018650(&v176);
    goto LABEL_269;
  }
  if ( v30 )
  {
    if ( !a8 )
    {
      nullsub_1(v108);
      v111 = (__m128i *)sub_140001650(46, 1);
      if ( !v111 )
      {
        v240 = 1;
        sub_1416C2D4B(1, 46);
      }
      qmemcpy(&v111[1], "efresh lost the live auth path", 30);
      *v111 = _mm_loadu_si128((const __m128i *)&xmmword_1417A71BC);
      a1->m128i_i64[0] = 46;
      a1->m128i_i64[1] = (__int64)v111;
      a1[1].m128i_i64[0] = 46;
      goto LABEL_269;
    }
    v109 = v208;
    if ( v235 == -1 )
      v109 = 0;
    v208 = v109;
    v110 = 1;
    if ( v235 != -1 )
      v110 = v223;
    v240 = 1;
    if ( (unsigned __int8)sub_1409E1220() )
    {
      if ( *(_QWORD *)off_141EC8D80 >= 3u )
      {
        v178.m128i_i64[0] = (__int64)aCodexmateLibCo_34;
        v178.m128i_i64[1] = 34;
        v179.m128i_i64[0] = (__int64)aCodexmateLibCo_34;
        v179.m128i_i64[1] = 34;
        *(_QWORD *)v180 = &off_1417A7370;
        v240 = 1;
        sub_140985BA0("[AiMaMi][oauth-refresh] skipped auth.json sync because Codex became active", 149, 3, &v178);
      }
      a1->m128i_i64[0] = 0x8000000000000001uLL;
      goto LABEL_269;
    }
    v240 = 1;
    sub_14148D3C0(&v176, a8, a9);
    v215 = v176.m256i_i64[0];
    if ( v176.m256i_i64[0] == -1 )
    {
      v157 = (_QWORD *)v176.m256i_i64[1];
      v178.m128i_i64[0] = (__int64)&v157;
      v178.m128i_i64[1] = (__int64)sub_141490720;
      sub_14149C0F0(&v125, &unk_1417A72E4, &v178);
      a1[1].m128i_i64[0] = v126;
      *a1 = _mm_loadu_si128(&v125);
      sub_140018650(&v157);
      goto LABEL_269;
    }
    if ( v176.m256i_i64[2] != v208
      || (v112 = v176.m256i_i64[1], (unsigned int)sub_1416847B0(v176.m256i_i64[1], v110, v208)) )
    {
      if ( *(_QWORD *)off_141EC8D80 >= 3u )
      {
        v178.m128i_i64[0] = (__int64)aCodexmateLibCo_34;
        v178.m128i_i64[1] = 34;
        v179.m128i_i64[0] = (__int64)aCodexmateLibCo_34;
        v179.m128i_i64[1] = 34;
        *(_QWORD *)v180 = &off_1417A7290;
        sub_140985BA0(&unk_1417A7248, 145, 3, &v178);
      }
      a1->m128i_i64[0] = 0x8000000000000001uLL;
      if ( v215 )
        sub_140001660(v176.m256i_i64[1], v215, 1);
      goto LABEL_269;
    }
    if ( v215 )
      sub_140001660(v112, v215, 1);
    v240 = 1;
    v113 = sub_1408726C0(a8, a9, v213, v106);
    if ( v113 )
    {
      v176.m256i_i64[0] = v113;
      v178.m128i_i64[0] = (__int64)&v176;
      v178.m128i_i64[1] = (__int64)sub_141490720;
      sub_14149C0F0(&v123, &unk_1417A72A8, &v178);
      a1[1].m128i_i64[0] = v124;
      *a1 = _mm_loadu_si128(&v123);
      v240 = 1;
      sub_140018650(&v176);
LABEL_269:
      if ( v212 )
        sub_140001660(v213, v212, 1);
LABEL_282:
      v93 = v214;
      v64 = v235;
      v92 = v210;
      if ( v214 )
      {
        v94 = v207;
        goto LABEL_215;
      }
LABEL_216:
      if ( v92 )
        sub_140001660(v189, v92, 1);
      if ( v217 )
        sub_140001660(v211, v217, 1);
      if ( v205 )
        goto LABEL_137;
      goto LABEL_221;
    }
  }
  v178 = _mm_loadu_si128((const __m128i *)v203);
  v240 = 0;
  sub_140980960(&v178);
  a1->m128i_i64[0] = 0x8000000000000001uLL;
  if ( v212 )
    sub_140001660(v213, v212, 1);
  if ( v214 )
    sub_140001660(v207, v214, 1);
  if ( v210 )
    sub_140001660(v189, v210, 1);
  if ( v217 )
    sub_140001660(v211, v217, 1);
  sub_140001660(v216, v219, 1);
  if ( v235 > 0 )
    sub_140001660(v223, v235, 1);
  return sub_1402C5E50(&v204);
}