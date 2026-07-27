// module: codexmate_lib/core/repository
// addr: 0x14039f840
// name: rebuild_registry_with_policy
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::rebuild_registry_with_policy | 跨平台字符串签名匹配(名↔函数一致)
char *__fastcall rebuild_registry_with_policy(char *a1, _QWORD *a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  char *result; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int128 v14; // kr30_16
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int128 v21; // kr10_16
  __int64 v22; // rax
  __int64 v23; // rsi
  char *v24; // rcx
  HANDLE *v25; // rdi
  HANDLE *v26; // rdi
  unsigned __int64 v27; // rsi
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  __int128 v30; // rdi
  _DWORD *v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  char *v36; // rsi
  char *v37; // rax
  __int64 v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned __int64 v41; // rbx
  _QWORD *v42; // r14
  __int64 v43; // rdx
  __int128 v44; // kr40_16
  char *v45; // rdx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  _QWORD *v49; // rcx
  char *v50; // rdx
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  char *v56; // rcx
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  char *v60; // rdx
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  char *v64; // r15
  _QWORD *v65; // r13
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  void *v71; // rbx
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // edx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r12
  char v82; // dl
  __m128 v83; // xmm0
  char v84; // r8
  __int64 v85; // rax
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  __int64 v89; // r14
  __int64 v90; // rbx
  __int64 v91; // r15
  char *v92; // rsi
  HANDLE *v93; // rbx
  __int64 v94; // r12
  __int64 v95; // rsi
  __int64 v96; // r15
  unsigned __int64 v97; // rbx
  __int64 v98; // r14
  __int64 v99; // rdi
  HANDLE *v100; // rcx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // rsi
  __int64 v105; // r8
  __int64 v106; // r14
  __int64 v107; // r15
  __int128 v108; // xmm6
  __int128 v109; // xmm7
  __int64 v110; // r12
  unsigned int v111; // r15d
  int v112; // edi
  int v113; // esi
  unsigned int v114; // eax
  __int64 v115; // r13
  __int64 v116; // r14
  __int64 v117; // rsi
  __int64 v118; // rbx
  __int64 v119; // rdi
  __int64 v120; // r14
  __int64 v121; // rdi
  __int64 v122; // rdi
  __int64 v123; // r15
  __int64 v124; // rdi
  __int64 v125; // r13
  __int64 v126; // rdi
  char v127; // r14
  char v128; // al
  char v129; // al
  __int128 v130; // xmm0
  int v131; // esi
  __int64 v132; // rdi
  __int64 v133; // r13
  __int128 *v134; // rcx
  __int128 v135; // xmm0
  __int128 v136; // xmm1
  __int128 v137; // xmm2
  __int128 v138; // xmm3
  __int128 v139; // xmm4
  char *v140; // rdx
  HANDLE *v141; // rdi
  HANDLE *v142; // rdi
  unsigned __int64 v143; // rsi
  _QWORD *v144; // rdi
  __int64 v145; // rdx
  __int128 v146; // xmm0
  __int128 v147; // xmm1
  __int128 v148; // xmm2
  __int64 v149; // rbx
  __int128 v150; // xmm6
  __int128 v151; // xmm7
  __int64 v152; // rdi
  __int64 v153; // rsi
  __int64 v154; // r14
  __int64 v155; // rax
  __int128 *v156; // rcx
  __int64 v157; // rax
  _QWORD v158[24]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v159; // [rsp+E8h] [rbp+68h]
  __int64 v160; // [rsp+F8h] [rbp+78h]
  HANDLE *v161; // [rsp+100h] [rbp+80h]
  __int64 v162; // [rsp+108h] [rbp+88h]
  __int64 v163; // [rsp+110h] [rbp+90h]
  __int64 v164; // [rsp+118h] [rbp+98h]
  __int64 v165; // [rsp+120h] [rbp+A0h]
  __int64 v166; // [rsp+128h] [rbp+A8h]
  __int64 v167; // [rsp+130h] [rbp+B0h]
  __int64 v168; // [rsp+138h] [rbp+B8h]
  __int64 v169; // [rsp+140h] [rbp+C0h]
  __int128 v170; // [rsp+148h] [rbp+C8h]
  __int64 v171; // [rsp+158h] [rbp+D8h]
  __int128 v172; // [rsp+160h] [rbp+E0h]
  __int64 v173; // [rsp+170h] [rbp+F0h]
  __int64 v174; // [rsp+178h] [rbp+F8h]
  __int64 v175; // [rsp+180h] [rbp+100h]
  __int128 v176; // [rsp+188h] [rbp+108h]
  __int64 v177; // [rsp+198h] [rbp+118h]
  __int128 v178; // [rsp+1A0h] [rbp+120h]
  __int64 v179; // [rsp+1B0h] [rbp+130h]
  __int64 v180; // [rsp+1B8h] [rbp+138h]
  __int64 v181; // [rsp+1C0h] [rbp+140h]
  int v182; // [rsp+1C8h] [rbp+148h]
  __int128 v183; // [rsp+1D0h] [rbp+150h] BYREF
  const char *v184; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v185; // [rsp+1E8h] [rbp+168h]
  char **v186; // [rsp+1F0h] [rbp+170h]
  int v187; // [rsp+1FCh] [rbp+17Ch]
  _QWORD v188[24]; // [rsp+428h] [rbp+3A8h] BYREF
  __int128 v189; // [rsp+4E8h] [rbp+468h]
  __int64 v190; // [rsp+4F8h] [rbp+478h]
  __int128 v191; // [rsp+500h] [rbp+480h]
  __int64 v192; // [rsp+510h] [rbp+490h]
  __int64 v193; // [rsp+518h] [rbp+498h]
  __int64 v194; // [rsp+520h] [rbp+4A0h]
  __int64 v195; // [rsp+528h] [rbp+4A8h]
  __int64 v196; // [rsp+530h] [rbp+4B0h]
  __int64 v197; // [rsp+538h] [rbp+4B8h]
  __int64 v198; // [rsp+540h] [rbp+4C0h]
  __int128 v199; // [rsp+548h] [rbp+4C8h]
  __int64 v200; // [rsp+558h] [rbp+4D8h]
  __int128 v201; // [rsp+560h] [rbp+4E0h]
  __int64 v202; // [rsp+570h] [rbp+4F0h]
  __int64 v203; // [rsp+578h] [rbp+4F8h]
  __int64 v204; // [rsp+580h] [rbp+500h]
  __int128 v205; // [rsp+588h] [rbp+508h]
  __int64 v206; // [rsp+598h] [rbp+518h]
  __int128 v207; // [rsp+5A0h] [rbp+520h]
  __int64 v208; // [rsp+5B0h] [rbp+530h]
  __int64 v209; // [rsp+5B8h] [rbp+538h]
  __int64 v210; // [rsp+5C0h] [rbp+540h]
  int v211; // [rsp+5C8h] [rbp+548h]
  __int128 v212; // [rsp+5D0h] [rbp+550h]
  __int128 v213; // [rsp+5E0h] [rbp+560h]
  __int128 v214; // [rsp+5F0h] [rbp+570h]
  __int128 v215; // [rsp+600h] [rbp+580h]
  __int128 v216; // [rsp+610h] [rbp+590h]
  __int64 v217; // [rsp+620h] [rbp+5A0h] BYREF
  __int128 v218; // [rsp+628h] [rbp+5A8h]
  __int64 v219; // [rsp+638h] [rbp+5B8h] BYREF
  __int128 v220; // [rsp+640h] [rbp+5C0h]
  __int128 v221; // [rsp+650h] [rbp+5D0h] BYREF
  __int128 v222; // [rsp+660h] [rbp+5E0h]
  __int128 v223; // [rsp+670h] [rbp+5F0h]
  __int128 v224; // [rsp+680h] [rbp+600h]
  __int128 v225; // [rsp+690h] [rbp+610h]
  __int64 v226; // [rsp+6A0h] [rbp+620h]
  _QWORD v227[2]; // [rsp+6B0h] [rbp+630h] BYREF
  _QWORD v228[2]; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v229; // [rsp+6D0h] [rbp+650h] BYREF
  HANDLE *v230; // [rsp+6D8h] [rbp+658h]
  __int64 v231; // [rsp+6E0h] [rbp+660h]
  __int128 v232; // [rsp+6F0h] [rbp+670h]
  unsigned __int128 v233; // [rsp+708h] [rbp+688h] BYREF
  unsigned __int64 v234; // [rsp+718h] [rbp+698h]
  __int128 v235; // [rsp+720h] [rbp+6A0h]
  __int128 v236; // [rsp+730h] [rbp+6B0h]
  __int128 v237; // [rsp+740h] [rbp+6C0h]
  __int128 v238; // [rsp+750h] [rbp+6D0h]
  __int128 v239; // [rsp+760h] [rbp+6E0h]
  __int128 v240; // [rsp+770h] [rbp+6F0h]
  __int128 v241; // [rsp+780h] [rbp+700h]
  __int128 v242; // [rsp+790h] [rbp+710h]
  _OWORD v243[2]; // [rsp+7A0h] [rbp+720h] BYREF
  __int128 v244; // [rsp+7C0h] [rbp+740h] BYREF
  __int128 v245; // [rsp+7D0h] [rbp+750h]
  __int128 v246; // [rsp+7E0h] [rbp+760h]
  __int128 v247; // [rsp+7F0h] [rbp+770h]
  __int128 v248; // [rsp+800h] [rbp+780h]
  __int64 v249; // [rsp+810h] [rbp+790h]
  __int64 v250; // [rsp+820h] [rbp+7A0h]
  __int64 v251; // [rsp+828h] [rbp+7A8h]
  __int64 v252; // [rsp+830h] [rbp+7B0h]
  __int64 v253; // [rsp+838h] [rbp+7B8h]
  __int64 v254; // [rsp+840h] [rbp+7C0h]
  __int64 v255; // [rsp+848h] [rbp+7C8h]
  _BYTE v256[104]; // [rsp+850h] [rbp+7D0h] BYREF
  __int128 v257; // [rsp+8B8h] [rbp+838h]
  __int128 v258; // [rsp+8C8h] [rbp+848h]
  _OWORD v259[30]; // [rsp+8D8h] [rbp+858h] BYREF
  __int128 v260; // [rsp+AC0h] [rbp+A40h]
  const char *v261; // [rsp+AD0h] [rbp+A50h]
  __int128 v262; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 v263; // [rsp+AF0h] [rbp+A70h] BYREF
  __int128 v264; // [rsp+B00h] [rbp+A80h]
  __int128 v265; // [rsp+B10h] [rbp+A90h]
  __int128 v266; // [rsp+B20h] [rbp+AA0h]
  __int128 v267; // [rsp+B30h] [rbp+AB0h]
  __int64 v268; // [rsp+B40h] [rbp+AC0h]
  __int128 v269; // [rsp+B48h] [rbp+AC8h]
  __int64 v270; // [rsp+B58h] [rbp+AD8h]
  __int64 v271; // [rsp+B60h] [rbp+AE0h]
  __int64 v272; // [rsp+B68h] [rbp+AE8h]
  char v273; // [rsp+B70h] [rbp+AF0h] BYREF
  char v274; // [rsp+B72h] [rbp+AF2h] BYREF
  HANDLE v275; // [rsp+B90h] [rbp+B10h] BYREF
  __int128 v276; // [rsp+B98h] [rbp+B18h]
  __int128 v277; // [rsp+BA8h] [rbp+B28h]
  __int128 v278; // [rsp+BB8h] [rbp+B38h]
  __int128 v279; // [rsp+BC8h] [rbp+B48h] BYREF
  __int128 v280; // [rsp+BD8h] [rbp+B58h]
  __int128 v281; // [rsp+BE8h] [rbp+B68h] BYREF
  _BYTE v282[24]; // [rsp+BF8h] [rbp+B78h]
  __int128 v283; // [rsp+C10h] [rbp+B90h]
  __int128 v284; // [rsp+C20h] [rbp+BA0h]
  __int128 v285; // [rsp+C30h] [rbp+BB0h]
  __int128 v286; // [rsp+C40h] [rbp+BC0h]
  __int128 v287; // [rsp+C50h] [rbp+BD0h]
  __int128 v288; // [rsp+C60h] [rbp+BE0h]
  __int128 v289; // [rsp+C70h] [rbp+BF0h]
  _BYTE v290[120]; // [rsp+C80h] [rbp+C00h] BYREF
  __int128 v291; // [rsp+CF8h] [rbp+C78h]
  __int128 v292; // [rsp+D08h] [rbp+C88h]
  __int128 v293; // [rsp+EF0h] [rbp+E70h] BYREF
  __int128 v294; // [rsp+F00h] [rbp+E80h]
  __int128 v295; // [rsp+F10h] [rbp+E90h]
  __int128 v296; // [rsp+F20h] [rbp+EA0h]
  __int128 v297; // [rsp+F30h] [rbp+EB0h]
  _BYTE v298[104]; // [rsp+F40h] [rbp+EC0h] BYREF
  _DWORD v299[2]; // [rsp+FF0h] [rbp+F70h]
  HANDLE v300; // [rsp+FF8h] [rbp+F78h] BYREF
  HANDLE v301; // [rsp+1000h] [rbp+F80h] BYREF
  __int64 v302; // [rsp+1008h] [rbp+F88h]
  __int128 v303; // [rsp+1010h] [rbp+F90h] BYREF
  _BYTE v304[72]; // [rsp+1020h] [rbp+FA0h]
  __int128 v305; // [rsp+1068h] [rbp+FE8h]
  __int128 v306; // [rsp+1078h] [rbp+FF8h]
  __int128 v307; // [rsp+1088h] [rbp+1008h]
  __int128 v308; // [rsp+1098h] [rbp+1018h]
  __int64 v309; // [rsp+10A8h] [rbp+1028h]
  __int64 v310; // [rsp+10B0h] [rbp+1030h]
  unsigned __int128 v311; // [rsp+10B8h] [rbp+1038h] BYREF
  unsigned __int64 v312; // [rsp+10C8h] [rbp+1048h]
  __int128 v313; // [rsp+10D0h] [rbp+1050h]
  __int128 v314; // [rsp+10E0h] [rbp+1060h]
  __int128 v315; // [rsp+10F0h] [rbp+1070h]
  __int128 v316; // [rsp+1100h] [rbp+1080h]
  __int128 v317; // [rsp+1110h] [rbp+1090h]
  __int64 v318; // [rsp+1120h] [rbp+10A0h]
  __int64 v319; // [rsp+1128h] [rbp+10A8h]
  __int64 v320; // [rsp+1130h] [rbp+10B0h]
  __int64 v321; // [rsp+1138h] [rbp+10B8h]
  __int64 v322; // [rsp+1140h] [rbp+10C0h]
  __int64 v323; // [rsp+1148h] [rbp+10C8h]
  __int64 v324; // [rsp+1150h] [rbp+10D0h]
  __int64 v325; // [rsp+1158h] [rbp+10D8h]
  __int64 v326; // [rsp+1160h] [rbp+10E0h]
  unsigned __int64 v327; // [rsp+1168h] [rbp+10E8h]
  __int64 v328; // [rsp+1170h] [rbp+10F0h]
  _QWORD *v329; // [rsp+1178h] [rbp+10F8h]
  __int64 v330; // [rsp+1180h] [rbp+1100h]
  char v331; // [rsp+118Ch] [rbp+110Ch]
  char v332; // [rsp+118Dh] [rbp+110Dh]
  char v333; // [rsp+118Eh] [rbp+110Eh]
  char v334; // [rsp+118Fh] [rbp+110Fh]
  __int64 v335; // [rsp+1190h] [rbp+1110h]
  HANDLE *v336; // [rsp+1198h] [rbp+1118h]
  __int64 v337; // [rsp+11A0h] [rbp+1120h]
  HANDLE *v338; // [rsp+11A8h] [rbp+1128h]
  char *v339; // [rsp+11B0h] [rbp+1130h]
  char v340; // [rsp+11BFh] [rbp+113Fh]
  HANDLE hObject; // [rsp+11C0h] [rbp+1140h]
  char v342; // [rsp+11CCh] [rbp+114Ch]
  char v343; // [rsp+11CDh] [rbp+114Dh]
  _BYTE v344[2]; // [rsp+11CEh] [rbp+114Eh] BYREF
  char v345; // [rsp+11D0h] [rbp+1150h]
  char v346; // [rsp+11D1h] [rbp+1151h]
  char v347; // [rsp+11D2h] [rbp+1152h]
  char v348; // [rsp+11D3h] [rbp+1153h]
  char v349; // [rsp+11D4h] [rbp+1154h]
  char v350; // [rsp+11D5h] [rbp+1155h]
  char v351; // [rsp+11D6h] [rbp+1156h]
  unsigned __int8 v352; // [rsp+11D7h] [rbp+1157h]
  __int64 v353; // [rsp+11D8h] [rbp+1158h]

  v353 = -2;
  result = (char *)sub_140712590(a2);
  if ( result )
  {
    *((_QWORD *)a1 + 1) = 2;
    *((_QWORD *)a1 + 2) = result;
    *(_QWORD *)a1 = -1;
    return result;
  }
  v352 = a3;
  v252 = a4;
  v339 = a1;
  v11 = a2[41];
  v319 = a2[42];
  v335 = a2[33];
  v329 = a2;
  v330 = a2[34];
  v12 = 0;
  v326 = v11;
  while ( 2 )
  {
    sub_141486710(v290, v11, v319);
    if ( *(_DWORD *)v290 == 2 )
    {
      *(_QWORD *)&v256[8] = *(_QWORD *)&v290[8];
      *(_QWORD *)v256 = 2;
LABEL_7:
      sub_140018650(&v256[8]);
      v13 = 0;
      v14 = __PAIR128__(8, 0);
      goto LABEL_8;
    }
    *(_OWORD *)v256 = *(_OWORD *)v290;
    *(_QWORD *)&v256[80] = *(_QWORD *)&v290[80];
    *(_OWORD *)&v256[64] = *(_OWORD *)&v290[64];
    *(_OWORD *)&v256[48] = *(_OWORD *)&v290[48];
    *(_OWORD *)&v256[32] = *(_OWORD *)&v290[32];
    *(_OWORD *)&v256[16] = *(_OWORD *)&v290[16];
    if ( *(_QWORD *)v290 == 2 )
      goto LABEL_7;
    *(_QWORD *)&v233 = 0;
    *((_QWORD *)&v233 + 1) = 8;
    v234 = 0;
    sub_141486800(v290, v326, v319);
    v30 = *(_OWORD *)v290;
    if ( *(_QWORD *)v290 == 2 )
    {
      *(_QWORD *)&v30 = 2;
      v41 = v234;
      if ( v234 )
        goto LABEL_86;
      goto LABEL_104;
    }
    sub_141684120(&v256[16], &v290[16], 608);
    *(_OWORD *)v256 = v30;
    while ( 1 )
    {
      sub_141493590(v290, v256);
      if ( *(_DWORD *)v290 != 1 )
        break;
      v30 = *(_OWORD *)&v290[8];
      if ( !*(_QWORD *)&v290[8] )
      {
        *(_QWORD *)&v30 = 2;
        goto LABEL_81;
      }
      sub_141684120(&v184, &v290[24], 584);
      v183 = v30;
      sub_14147B870(&v281, &v183);
      *((_QWORD *)&v30 + 1) = *(_QWORD *)v282;
      v348 = 1;
      hObject = *((HANDLE *)&v281 + 1);
      v31 = (_DWORD *)sub_141474250(*((_QWORD *)&v281 + 1), *(_QWORD *)v282);
      if ( v31 == nullptr || v32 != 4 || *v31 != 1852797802 )
        goto LABEL_45;
      if ( (WORD4(v183) & 0x400) != 0 )
      {
        if ( !(BYTE8(v183) & 0x10 | v187 & 0x20000000) )
          goto LABEL_51;
LABEL_55:
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v275 = hObject;
          *(_QWORD *)&v276 = *((_QWORD *)&v30 + 1);
          *(_QWORD *)v298 = &v275;
          *(_QWORD *)&v298[8] = sub_14148F3A0;
          *(_QWORD *)&v262 = 0;
          *((_QWORD *)&v262 + 1) = aCodexmateLibCo_16;
          v263 = 0x1Fu;
          *(_QWORD *)&v264 = aSrcCoreReposit;
          *((_QWORD *)&v264 + 1) = 22;
          *(_QWORD *)&v265 = 2;
          *((_QWORD *)&v265 + 1) = aCodexmateLibCo_16;
          *(_QWORD *)&v266 = 31;
          *((_QWORD *)&v266 + 1) = 0x42000000001LL;
          *(_QWORD *)&v267 = &unk_14174F694;
          *((_QWORD *)&v267 + 1) = v298;
          v348 = 1;
          sub_1412C36A0(v344, &v262);
        }
LABEL_45:
        if ( (_QWORD)v281 )
          sub_140001660(hObject, v281, 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v183) )
          goto LABEL_48;
      }
      else
      {
        if ( (BYTE8(v183) & 0x10) != 0 )
          goto LABEL_55;
LABEL_51:
        v348 = 1;
        sub_1403CE160((unsigned int)&v262, (_DWORD)hObject, DWORD2(v30), v326, v319);
        if ( (_DWORD)v262 == -1 )
        {
          v348 = 1;
          sub_141486270(&v262, hObject, *((_QWORD *)&v30 + 1));
          if ( (_DWORD)v262 == 2 )
          {
            *(_QWORD *)v298 = 2;
            *(_QWORD *)&v298[8] = *((_QWORD *)&v262 + 1);
            *(_QWORD *)&v30 = 2;
            goto LABEL_115;
          }
          if ( (BYTE12(v266) & 0x10) != 0 || (v267 & 0x20000000) != 0 && (WORD6(v266) & 0x400) != 0 )
          {
            v275 = hObject;
            *(_QWORD *)&v276 = *((_QWORD *)&v30 + 1);
            *(_QWORD *)&v262 = &v275;
            *((_QWORD *)&v262 + 1) = sub_14148F3A0;
            v348 = 1;
            sub_14149C0F0(&v298[8], &unk_14174E2E9, &v262);
            *(_QWORD *)&v30 = 9;
LABEL_115:
            *((_QWORD *)&v30 + 1) = *(_QWORD *)&v298[8];
            v4 = *(_QWORD *)&v298[24];
            v5 = *(_QWORD *)&v298[16];
            v303 = *(_OWORD *)&v298[32];
            *(_OWORD *)v304 = *(_OWORD *)&v298[48];
            *(_OWORD *)&v304[16] = *(_OWORD *)&v298[64];
            *(_OWORD *)&v304[32] = *(_OWORD *)&v298[80];
            if ( (_QWORD)v281 )
              sub_140001660(hObject, v281, 1);
            if ( !_InterlockedDecrement64((volatile signed __int64 *)v183) )
              sub_140F8A980(&v183);
LABEL_81:
            if ( *(_QWORD *)v256 )
              sub_1414908A0(&v256[8]);
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v256[16]) )
              sub_140F8A980(&v256[16]);
            v41 = v234;
            if ( v234 )
            {
LABEL_86:
              v42 = (_QWORD *)(*((_QWORD *)&v233 + 1) + 8LL);
              do
              {
                v43 = *(v42 - 1);
                if ( v43 )
                  sub_140001660(*v42, v43, 1);
                v42 += 4;
                --v41;
              }
              while ( v41 );
            }
LABEL_104:
            if ( (_QWORD)v233 )
              sub_140001660(*((_QWORD *)&v233 + 1), 32 * v233, 8);
            v68 = v303;
            v69 = *(_OWORD *)v304;
            v70 = *(_OWORD *)&v304[16];
            result = v339;
            *(_OWORD *)(v339 + 88) = *(_OWORD *)&v304[32];
            *(_OWORD *)(result + 72) = v70;
            *(_OWORD *)(result + 56) = v69;
            *(_OWORD *)(result + 40) = v68;
            *(_OWORD *)(result + 8) = v30;
            *((_QWORD *)result + 3) = v5;
            *((_QWORD *)result + 4) = v4;
            *(_QWORD *)result = -1;
            return result;
          }
        }
        else
        {
          *(_OWORD *)&v298[80] = v267;
          *(_OWORD *)&v298[64] = v266;
          *(_OWORD *)&v298[48] = v265;
          *(_OWORD *)&v298[32] = v264;
          *(_OWORD *)&v298[16] = v263;
          *(_OWORD *)v298 = v262;
          *(_QWORD *)&v30 = v262;
          if ( (_QWORD)v262 != -1 )
            goto LABEL_115;
        }
        v338 = (HANDLE *)v281;
        v33 = v234;
        if ( v234 == (_QWORD)v233 )
          sub_1416890A0(&v233);
        v34 = *((_QWORD *)&v233 + 1);
        v35 = 32 * v33;
        *(_QWORD *)(*((_QWORD *)&v233 + 1) + v35) = v338;
        *(_QWORD *)(v34 + v35 + 8) = hObject;
        *(_OWORD *)(v34 + v35 + 16) = *(_OWORD *)v282;
        v234 = v33 + 1;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v183) )
LABEL_48:
          sub_140F8A980(&v183);
      }
    }
    if ( *(_QWORD *)v256 )
      sub_1414908A0(&v256[8]);
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v256[16]) )
      sub_140F8A980(&v256[16]);
    if ( v234 >= 2 )
    {
      v38 = *((_QWORD *)&v233 + 1);
      if ( v234 >= 0x15 )
      {
        sub_140B58B30(*((_QWORD *)&v233 + 1), v234, v344);
      }
      else
      {
        v39 = *((_QWORD *)&v233 + 1) + 32 * v234;
        v40 = *((_QWORD *)&v233 + 1) + 32LL;
        do
        {
          sub_1405515D0(v38, v40);
          v40 += 32;
        }
        while ( v40 != v39 );
      }
    }
    sub_1402AE9C0(&v233);
    v14 = v233;
    v13 = v234;
LABEL_8:
    v5 = *((_QWORD *)&v14 + 1);
    v311 = v14;
    v4 = v13;
    v312 = v13;
    sub_1403A5C50(v290, v329, 0);
    v15 = *(_QWORD *)&v290[8];
    result = *(char **)v290;
    v16 = *(_QWORD *)&v290[16];
    v232 = *(_OWORD *)&v290[24];
    if ( *(_QWORD *)v290 != -1 )
    {
      v50 = v339;
      *((_QWORD *)v339 + 12) = *(_QWORD *)&v290[88];
      v51 = *(_OWORD *)&v290[40];
      v52 = *(_OWORD *)&v290[56];
      *((_OWORD *)v50 + 5) = *(_OWORD *)&v290[72];
      *((_OWORD *)v50 + 4) = v52;
      *((_OWORD *)v50 + 3) = v51;
      *((_QWORD *)v50 + 3) = v16;
      *((_OWORD *)v50 + 2) = v232;
      *((_QWORD *)v50 + 1) = result;
      *((_QWORD *)v50 + 2) = v15;
LABEL_97:
      *(_QWORD *)v50 = -1;
      goto LABEL_359;
    }
    if ( *(_QWORD *)&v290[8] != -1 )
    {
      v338 = *(HANDLE **)&v290[16];
      hObject = *(HANDLE *)&v290[8];
      v17 = v312;
      if ( v312 == (_QWORD)v311 )
        sub_1416890A0(&v311);
      v18 = *((_QWORD *)&v311 + 1);
      v19 = 32 * v17;
      *(_QWORD *)(*((_QWORD *)&v311 + 1) + v19) = hObject;
      *(_QWORD *)(v18 + v19 + 8) = v338;
      *(_OWORD *)(v18 + v19 + 16) = v232;
      v20 = v17 + 1;
      v312 = v20;
      if ( v20 >= 2 )
      {
        if ( v20 >= 0x15 )
        {
          sub_140B58B30(v18, v20, v344);
        }
        else
        {
          v36 = (char *)(v18 + 32 * v20);
          v37 = (char *)(v18 + 32);
          do
          {
            hObject = v37;
            sub_1405515D0(v18, v37);
            v37 = (char *)hObject + 32;
          }
          while ( (char *)hObject + 32 != v36 );
        }
      }
      sub_1402AE9C0(&v311);
    }
    sub_14032CE50(v256, &v311, v15, v16);
    sub_140352A00((__int64)v290, (__int64 *)v256);
    result = *(char **)v290;
    v183 = *(_OWORD *)&v290[8];
    v184 = *(const char **)&v290[24];
    if ( *(_QWORD *)v290 != -1 )
    {
      v53 = *(_OWORD *)&v290[32];
      v54 = *(_OWORD *)&v290[48];
      v55 = *(_OWORD *)&v290[64];
      v50 = v339;
      *(_OWORD *)(v339 + 88) = *(_OWORD *)&v290[80];
      *(_OWORD *)(v50 + 72) = v55;
      *(_OWORD *)(v50 + 56) = v54;
      *(_OWORD *)(v50 + 40) = v53;
      *((_QWORD *)v50 + 4) = v184;
      *((_OWORD *)v50 + 1) = v183;
      *((_QWORD *)v50 + 1) = result;
      goto LABEL_97;
    }
    v260 = v183;
    v261 = v184;
    v343 = 1;
    sub_1403871C0(v290, v335, v330);
    v21 = *(_OWORD *)v290;
    if ( *(_QWORD *)v290 != -1 )
    {
      v56 = v339;
      *(_OWORD *)(v339 + 88) = *(_OWORD *)&v290[80];
      v57 = *(_OWORD *)&v290[16];
      v58 = *(_OWORD *)&v290[32];
      v59 = *(_OWORD *)&v290[48];
      *(_OWORD *)(v56 + 72) = *(_OWORD *)&v290[64];
      *(_OWORD *)(v56 + 56) = v59;
      *(_OWORD *)(v56 + 40) = v58;
      *(_OWORD *)(v56 + 24) = v57;
      *(_OWORD *)(v56 + 8) = v21;
      *(_QWORD *)v56 = -1;
      goto LABEL_352;
    }
    v301 = *(HANDLE *)&v290[8];
    v334 = 1;
    v333 = 1;
    sub_1403A5C50(v290, v329, v352);
    v22 = *(_QWORD *)v290;
    *(_OWORD *)v256 = *(_OWORD *)&v290[8];
    *(_OWORD *)&v256[16] = *(_OWORD *)&v290[24];
    if ( *(_QWORD *)v290 != -1 )
    {
      v60 = v339;
      *((_QWORD *)v339 + 12) = *(_QWORD *)&v290[88];
      v61 = *(_OWORD *)&v290[40];
      v62 = *(_OWORD *)&v290[56];
      *((_OWORD *)v60 + 5) = *(_OWORD *)&v290[72];
      *((_OWORD *)v60 + 4) = v62;
      *((_OWORD *)v60 + 3) = v61;
      v63 = *(_OWORD *)v256;
      *((_OWORD *)v60 + 2) = *(_OWORD *)&v256[16];
      *((_OWORD *)v60 + 1) = v63;
      *((_QWORD *)v60 + 1) = v22;
      *(_QWORD *)v60 = -1;
      goto LABEL_349;
    }
    v243[0] = *(_OWORD *)v256;
    v243[1] = *(_OWORD *)&v256[16];
    v23 = *(_QWORD *)v256;
    if ( *(_QWORD *)v256 != -1 )
    {
      v347 = 1;
      v346 = 1;
      if ( !(unsigned __int8)sub_140423890(v243, *((_QWORD *)&v311 + 1), v312) )
      {
        hObject = *((HANDLE *)&v21 + 1);
        *(_QWORD *)v256 = *((_QWORD *)&v21 + 1);
        *(_QWORD *)v290 = sub_1412018B0(v256);
        if ( *(_QWORD *)v290 )
          sub_140018650(v290);
        CloseHandle(hObject);
        v336 = *((HANDLE **)&v260 + 1);
        v337 = v260;
        v327 = (unsigned __int64)v261;
        if ( v261 )
        {
          v25 = v336;
          v24 = nullptr;
          do
          {
            hObject = v24;
            v338 = v25;
            *(_QWORD *)v290 = sub_1412018B0(v25);
            if ( *(_QWORD *)v290 )
              sub_140018650(v290);
            v26 = v338;
            CloseHandle(*v338);
            v24 = (char *)hObject - 1;
            v25 = v26 + 1;
          }
          while ( (char *)hObject + v327 - 1 );
        }
        if ( v337 )
          sub_140001660(v336, 8 * v337, 8);
        if ( v23 )
          sub_140001660(*((_QWORD *)&v243[0] + 1), v23, 1);
        v27 = v312;
        if ( v312 )
        {
          v28 = (_QWORD *)(*((_QWORD *)&v311 + 1) + 8LL);
          do
          {
            v29 = *(v28 - 1);
            if ( v29 )
              sub_140001660(*v28, v29, 1);
            v28 += 4;
            --v27;
          }
          while ( v27 );
        }
        if ( (_QWORD)v311 )
          sub_140001660(*((_QWORD *)&v311 + 1), 32 * v311, 8);
        ++v12;
        v11 = v326;
        if ( v12 >= 3 )
        {
          nullsub_1(v24);
          result = (char *)sub_140001650(71, 1);
          if ( !result )
            sub_1416C2D4B(1, 71);
          qmemcpy(result, "auth.json ownership kept changing while rebuilding the account registry", 71);
          v49 = v339;
          *((_QWORD *)v339 + 1) = 10;
          v49[2] = 71;
          v49[3] = result;
          v49[4] = 71;
          *v49 = -1;
          return result;
        }
        continue;
      }
    }
    break;
  }
  v347 = 1;
  v346 = 1;
  sub_1403885B0(v290, v335, v330);
  v44 = *(_OWORD *)v290;
  if ( *(_QWORD *)v290 != -1 )
  {
    v45 = v339;
    *(_OWORD *)(v339 + 88) = *(_OWORD *)&v290[80];
    v46 = *(_OWORD *)&v290[16];
    v47 = *(_OWORD *)&v290[32];
    v48 = *(_OWORD *)&v290[48];
    *(_OWORD *)(v45 + 72) = *(_OWORD *)&v290[64];
    *(_OWORD *)(v45 + 56) = v48;
    *(_OWORD *)(v45 + 40) = v47;
    *(_OWORD *)(v45 + 24) = v46;
    *(_OWORD *)(v45 + 8) = v44;
    *(_QWORD *)v45 = -1;
    if ( v23 > 0 )
      goto LABEL_348;
    goto LABEL_349;
  }
  v300 = *(HANDLE *)&v290[8];
  v64 = v339;
  v65 = v329;
  if ( v352 )
  {
    v66 = v329[37];
    v67 = v329[38];
    sub_141486710(v290, v66, v67);
    if ( *(_DWORD *)v290 == 2 )
    {
      *(_QWORD *)&v256[8] = *(_QWORD *)&v290[8];
      *(_QWORD *)v256 = 2;
      goto LABEL_108;
    }
    *(_OWORD *)v256 = *(_OWORD *)v290;
    *(_QWORD *)&v256[80] = *(_QWORD *)&v290[80];
    *(_OWORD *)&v256[64] = *(_OWORD *)&v290[64];
    *(_OWORD *)&v256[48] = *(_OWORD *)&v290[48];
    *(_OWORD *)&v256[32] = *(_OWORD *)&v290[32];
    *(_OWORD *)&v256[16] = *(_OWORD *)&v290[16];
    if ( *(_QWORD *)v290 == 2 )
    {
LABEL_108:
      sub_140018650(&v256[8]);
    }
    else
    {
      sub_140388C10((__int64)v290, v66, v67);
      v85 = *(_QWORD *)v290;
      v221 = *(_OWORD *)&v290[8];
      v222 = *(_OWORD *)&v290[24];
      v223 = *(_OWORD *)&v290[40];
      v224 = *(_OWORD *)&v290[56];
      v225 = *(_OWORD *)&v290[72];
      v226 = *(_QWORD *)&v290[88];
      if ( *(_QWORD *)v290 != -1 )
      {
        *((_QWORD *)v64 + 12) = v226;
        *((_OWORD *)v64 + 5) = v225;
        v86 = v221;
        v87 = v222;
        v88 = v223;
        *((_OWORD *)v64 + 4) = v224;
        *((_OWORD *)v64 + 3) = v88;
        *((_OWORD *)v64 + 2) = v87;
        *((_OWORD *)v64 + 1) = v86;
        *((_QWORD *)v64 + 1) = v85;
        goto LABEL_344;
      }
      sub_14034DF40(&v221);
    }
  }
  v71 = *((void **)&v311 + 1);
  v327 = v312;
  v72 = sub_140712590(v65);
  if ( v72 )
  {
    v73 = 2;
    goto LABEL_343;
  }
  sub_140388C10((__int64)v290, v65[37], v65[38]);
  if ( *(_DWORD *)v290 == -1 )
  {
    v249 = *(_QWORD *)&v290[88];
    v248 = *(_OWORD *)&v290[72];
    v247 = *(_OWORD *)&v290[56];
    v246 = *(_OWORD *)&v290[40];
    v245 = *(_OWORD *)&v290[24];
    v244 = *(_OWORD *)&v290[8];
  }
  else
  {
    *(_QWORD *)&v244 = -1;
    sub_14034ED40(v290);
  }
  *(_DWORD *)v256 = sub_141475580(v75, v74, v76, v77);
  *(_DWORD *)&v256[4] = v78;
  sub_141475530(v290, v256, 3577643008LL, 27111902);
  v79 = 0;
  v80 = 0;
  if ( !v290[0] )
    v80 = *(_QWORD *)&v290[8];
  v81 = v244;
  hObject = v71;
  if ( (_QWORD)v244 == -1 )
  {
    v83 = (__m128)0xA0000000FuLL;
    v84 = 1;
    v82 = 0;
  }
  else
  {
    v82 = v248;
    if ( (_BYTE)v248 == 2 )
    {
      v83 = (__m128)0xA0000000FuLL;
      v79 = 0;
      v82 = 0;
    }
    else
    {
      v83 = (__m128)*((unsigned __int64 *)&v247 + 1);
      v79 = v247;
      v299[0] = *(_DWORD *)((char *)&v248 + 1);
      *(_DWORD *)((char *)v299 + 3) = DWORD1(v248);
    }
    v84 = 1;
    if ( BYTE4(v249) != 2 )
      v84 = BYTE4(v249);
  }
  DWORD2(v280) = 4;
  *(_QWORD *)&v280 = v80;
  *(_QWORD *)&v277 = -1;
  v275 = nullptr;
  v276 = 8u;
  *((_QWORD *)&v278 + 1) = v79;
  _mm_storel_ps((double *)&v279, v83);
  BYTE8(v279) = v82;
  *(_DWORD *)((char *)&v279 + 9) = v299[0];
  HIDWORD(v279) = *(_DWORD *)((char *)v299 + 3);
  BYTE12(v280) = v84;
  v89 = v65[5];
  v90 = v65[6];
  sub_1403C9010(v298, v89, v90);
  v91 = *(_QWORD *)v298;
  if ( *(_QWORD *)v298 != -2 )
  {
    v318 = *(_QWORD *)v298;
    v351 = 1;
    v350 = 1;
    if ( !(unsigned __int8)sub_1403CBE70(v298) )
    {
      sub_14034E960(v298);
      goto LABEL_140;
    }
    sub_141684120(&v262, v298, 176);
    v251 = v91;
    sub_1403C9DD0(v290, &v262, v89, v90);
    v73 = *(_QWORD *)&v290[8];
    v72 = *(_QWORD *)&v290[16];
    *(_OWORD *)v256 = *(_OWORD *)&v290[24];
    *(_OWORD *)&v256[16] = *(_OWORD *)&v290[40];
    *(_OWORD *)&v256[32] = *(_OWORD *)&v290[56];
    *(_OWORD *)&v256[48] = *(_OWORD *)&v290[72];
    *(_OWORD *)&v256[64] = *(_OWORD *)&v290[88];
    if ( *(_QWORD *)v290 == 2 )
    {
      v313 = *(_OWORD *)v256;
      v314 = *(_OWORD *)&v256[16];
      v315 = *(_OWORD *)&v256[32];
      v316 = *(_OWORD *)&v256[48];
      v317 = *(_OWORD *)&v256[64];
      v64 = v339;
LABEL_338:
      v134 = &v262;
      goto LABEL_339;
    }
    v242 = v292;
    v241 = v291;
    v240 = *(_OWORD *)&v290[104];
    v234 = *(_QWORD *)&v290[16];
    v235 = *(_OWORD *)v256;
    v236 = *(_OWORD *)&v256[16];
    v237 = *(_OWORD *)&v256[32];
    v238 = *(_OWORD *)&v256[48];
    v239 = *(_OWORD *)&v256[64];
    v233 = *(_OWORD *)v290;
    v250 = v91;
    v336 = *(HANDLE **)&v256[8];
    v131 = v326;
    v132 = v319;
    v337 = *(_QWORD *)v256;
    sub_1403CB3A0((unsigned int)&v229, v326, v319, *(_DWORD *)v256, *(__int64 *)&v256[8]);
    v133 = v231;
    v338 = v230;
    sub_1403CE160((unsigned int)v290, (_DWORD)v230, v231, v131, v132);
    v64 = v339;
    v73 = *(_QWORD *)v290;
    if ( *(_QWORD *)v290 != -1 )
    {
      v72 = *(_QWORD *)&v290[8];
      v313 = *(_OWORD *)&v290[16];
      v314 = *(_OWORD *)&v290[32];
      v315 = *(_OWORD *)&v290[48];
      v316 = *(_OWORD *)&v290[64];
      v317 = *(_OWORD *)&v290[80];
LABEL_335:
      if ( v229 )
        sub_140001660(v338, v229, 1);
      sub_14034E8D0(&v233);
      goto LABEL_338;
    }
    sub_1404220D0(&v183, &v262);
    sub_141486710(v290, v338, v133);
    if ( *(_DWORD *)v290 == 2 )
    {
      *(_QWORD *)&v256[8] = *(_QWORD *)&v290[8];
      *(_QWORD *)v256 = 2;
LABEL_295:
      sub_140018650(&v256[8]);
      goto LABEL_296;
    }
    *(_OWORD *)v256 = *(_OWORD *)v290;
    *(_QWORD *)&v256[80] = *(_QWORD *)&v290[80];
    *(_OWORD *)&v256[64] = *(_OWORD *)&v290[64];
    *(_OWORD *)&v256[48] = *(_OWORD *)&v290[48];
    *(_OWORD *)&v256[32] = *(_OWORD *)&v290[32];
    *(_OWORD *)&v256[16] = *(_OWORD *)&v290[16];
    if ( *(_QWORD *)v290 == 2 )
      goto LABEL_295;
    sub_1403CD320((unsigned int)v290, (_DWORD)v338, v133, v326, v319);
    v73 = *(_QWORD *)v290;
    if ( *(_QWORD *)v290 != -1 )
    {
      v72 = *(_QWORD *)&v290[8];
      v313 = *(_OWORD *)&v290[16];
      v314 = *(_OWORD *)&v290[32];
      v315 = *(_OWORD *)&v290[48];
      v316 = *(_OWORD *)&v290[64];
      v135 = *(_OWORD *)&v290[80];
LABEL_333:
      v317 = v135;
      goto LABEL_334;
    }
    sub_1403C9010(v256, v338, v133);
    if ( *(_QWORD *)v256 == -2 )
    {
      if ( v352 )
      {
        v73 = *(_QWORD *)&v256[8];
        v72 = *(_QWORD *)&v256[16];
        v313 = *(_OWORD *)&v256[24];
        v314 = *(_OWORD *)&v256[40];
        v315 = *(_OWORD *)&v256[56];
        v316 = *(_OWORD *)&v256[72];
        v317 = *(_OWORD *)&v256[88];
        v64 = v339;
        goto LABEL_334;
      }
      *(_OWORD *)&v290[80] = *(_OWORD *)&v256[88];
      *(_OWORD *)&v290[64] = *(_OWORD *)&v256[72];
      *(_OWORD *)&v290[48] = *(_OWORD *)&v256[56];
      *(_OWORD *)&v290[32] = *(_OWORD *)&v256[40];
      *(_OWORD *)&v290[16] = *(_OWORD *)&v256[24];
      *(_OWORD *)v290 = *(_OWORD *)&v256[8];
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)&v281 = v290;
        *((_QWORD *)&v281 + 1) = sub_140B036A0;
        *(_QWORD *)&v303 = aCodexmateLibCo_16;
        *((_QWORD *)&v303 + 1) = 31;
        *(_QWORD *)v304 = aCodexmateLibCo_16;
        *(_QWORD *)&v304[8] = 31;
        *(_QWORD *)&v304[16] = &off_14174EBE8;
        sub_140985BA0(&unk_14174EB8F, &v281, 2, &v303);
      }
      v345 = 1;
      sub_14034ED40(v290);
      goto LABEL_381;
    }
    v345 = 1;
    if ( (unsigned __int8)sub_1403CBE70(v256) )
    {
      sub_141684120(v290, v256, 176);
      sub_1403C9DD0(&v303, v290, v338, v133);
      v73 = *((_QWORD *)&v303 + 1);
      v72 = *(_QWORD *)v304;
      v293 = *(_OWORD *)&v304[8];
      v294 = *(_OWORD *)&v304[24];
      v295 = *(_OWORD *)&v304[40];
      v296 = *(_OWORD *)&v304[56];
      v297 = v305;
      if ( (_QWORD)v303 == 2 )
      {
        v313 = v293;
        v314 = v294;
        v315 = v295;
        v316 = v296;
        v317 = v297;
LABEL_324:
        sub_14034E960(v256);
        v64 = v339;
        goto LABEL_334;
      }
      v289 = v308;
      v288 = v307;
      v287 = v306;
      *(_QWORD *)v282 = *(_QWORD *)v304;
      *(_OWORD *)&v282[8] = v293;
      v283 = v294;
      v284 = v295;
      v285 = v296;
      v286 = v297;
      v281 = v303;
      if ( *((HANDLE **)&v293 + 1) != v336 || (unsigned int)sub_1416847B0(*(_QWORD *)&v282[8], v337, v336) )
      {
        *(_QWORD *)&v293 = v338;
        *((_QWORD *)&v293 + 1) = v133;
        *(_QWORD *)&v303 = &v293;
        *((_QWORD *)&v303 + 1) = sub_14148F3A0;
        sub_14149C0F0(&v219, &unk_14174EB61, &v303);
        v72 = v219;
        v313 = v220;
        sub_14034E8D0(&v281);
        v73 = 9;
        goto LABEL_324;
      }
      if ( (unsigned __int8)sub_1409DBBA0(v290, &v262) )
      {
        sub_14034E960(&v183);
        sub_141684120(&v183, v256, 176);
        sub_14034E8D0(&v281);
        v64 = v339;
LABEL_331:
        sub_1403C9DD0(v290, &v183, v338, v133);
        v73 = *(_QWORD *)&v290[8];
        v72 = *(_QWORD *)&v290[16];
        v303 = *(_OWORD *)&v290[24];
        *(_OWORD *)v304 = *(_OWORD *)&v290[40];
        *(_OWORD *)&v304[16] = *(_OWORD *)&v290[56];
        *(_OWORD *)&v304[32] = *(_OWORD *)&v290[72];
        *(_OWORD *)&v304[48] = *(_OWORD *)&v290[88];
        if ( *(_QWORD *)v290 != 2 )
        {
          v259[0] = v292;
          v258 = v291;
          v257 = *(_OWORD *)&v290[104];
          *(_QWORD *)&v256[16] = *(_QWORD *)&v290[16];
          *(_OWORD *)&v256[24] = v303;
          *(_OWORD *)&v256[40] = *(_OWORD *)v304;
          *(_OWORD *)&v256[56] = *(_OWORD *)&v304[16];
          *(_OWORD *)&v256[72] = *(_OWORD *)&v304[32];
          *(_OWORD *)&v256[88] = *(_OWORD *)&v304[48];
          *(_OWORD *)v256 = *(_OWORD *)v290;
          v344[1] = 1;
          sub_14149C500(&v293, &v256[16]);
          v228[0] = v338;
          v228[1] = v133;
          v332 = 1;
          sub_140421840(&v281, v228);
          v335 = *(_QWORD *)&v256[40];
          v149 = *(_QWORD *)&v256[56];
          v328 = *(_QWORD *)&v256[48];
          v323 = *(_QWORD *)&v256[72];
          v330 = *(_QWORD *)&v256[64];
          v321 = *(_QWORD *)&v256[88];
          v150 = *(_OWORD *)&v256[80];
          v324 = *(_QWORD *)&v256[96];
          v322 = *((_QWORD *)&v257 + 1);
          v151 = v257;
          v152 = *((_QWORD *)&v258 + 1);
          v325 = v258;
          *(_QWORD *)&v303 = (char *)v259 + 10;
          *((_QWORD *)&v303 + 1) = sub_140420DF0;
          sub_14149C0F0(v290, &unk_14174CCE6, &v303);
          v320 = *(_QWORD *)&v290[8];
          v336 = *(HANDLE **)v290;
          sub_14149A6B0(&v303, *(_QWORD *)&v290[8], *(_QWORD *)&v290[16]);
          v153 = sub_1403BCEB0();
          v227[0] = (char *)v259 + 8;
          v227[1] = sub_140422E30;
          sub_14149C0F0(v290, &unk_14174CCE6, v227);
          v302 = *(_QWORD *)&v290[8];
          v337 = *(_QWORD *)v290;
          sub_14149A6B0(v290, *(_QWORD *)&v290[8], *(_QWORD *)&v290[16]);
          v154 = *(_QWORD *)&v259[0];
          v155 = sub_1403C9370();
          v190 = v294;
          v189 = v293;
          v191 = v281;
          v192 = *(_QWORD *)v282;
          v193 = v335;
          v194 = v328;
          v195 = v149;
          v196 = 0;
          v197 = 1;
          v198 = 0;
          v203 = v330;
          v204 = v323;
          v205 = v150;
          v206 = v324;
          v207 = v151;
          v208 = v325;
          v209 = v152;
          v200 = *(_QWORD *)v304;
          v199 = v303;
          v188[0] = 1;
          v188[1] = v153;
          v201 = *(_OWORD *)v290;
          v202 = *(_QWORD *)&v290[16];
          v188[2] = 0;
          v211 = -16776702;
          v188[4] = 0;
          v188[6] = 0;
          v188[8] = 0;
          v210 = v154;
          v188[10] = 1;
          v188[11] = v155;
          v188[12] = 0;
          v188[14] = 2;
          v188[19] = 2;
          if ( v337 )
            sub_140001660(v302, v337, 1);
          if ( v336 )
            sub_140001660(v320, v336, 1);
          v156 = &v244;
          if ( v81 == -1 )
            v156 = nullptr;
          v157 = sub_1403C4590(v156, *(_QWORD *)&v256[24], *(_QWORD *)&v256[32]);
          v340 = 1;
          sub_1403BBC40(v188, v157);
          v340 = 1;
          sub_1403BA310(v188, v252);
          v340 = 0;
          sub_1403B1F60(&v275, v188);
          *(_QWORD *)&v290[16] = *(_QWORD *)&v256[32];
          *(_OWORD *)v290 = *(_OWORD *)&v256[16];
          if ( (__int64)v277 > 0 )
            sub_140001660(*((_QWORD *)&v277 + 1), v277, 1);
          *(_QWORD *)&v278 = *(_QWORD *)&v290[16];
          v277 = *(_OWORD *)v290;
          sub_14034E960(&v183);
          if ( v229 )
            sub_140001660(v338, v229, 1);
          sub_14034E8D0(&v233);
          sub_14034E960(&v262);
          v65 = v329;
          goto LABEL_140;
        }
        v313 = v303;
        v314 = *(_OWORD *)v304;
        v315 = *(_OWORD *)&v304[16];
        v316 = *(_OWORD *)&v304[32];
        v135 = *(_OWORD *)&v304[48];
        goto LABEL_333;
      }
      sub_14034E8D0(&v281);
    }
    else
    {
      if ( v352 )
      {
        *(_QWORD *)&v303 = v338;
        *((_QWORD *)&v303 + 1) = v133;
        *(_QWORD *)v290 = &v303;
        *(_QWORD *)&v290[8] = sub_14148F3A0;
        v345 = 1;
        sub_14149C0F0(&v217, &unk_14174EB20, v290);
        v72 = v217;
        v313 = v218;
        sub_14034E960(v256);
        v73 = 9;
        v64 = v339;
        goto LABEL_334;
      }
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)v290 = aCodexmateLibCo_16;
        *(_QWORD *)&v290[8] = 31;
        *(_QWORD *)&v290[16] = aCodexmateLibCo_16;
        *(_QWORD *)&v290[24] = 31;
        *(_QWORD *)&v290[32] = &off_14174EB08;
        v345 = 1;
        sub_140985BA0(&unk_14174EAB4, 169, 2, v290);
        if ( *(_QWORD *)v256 == -2 )
          goto LABEL_381;
      }
    }
    sub_14034E960(v256);
LABEL_381:
    v64 = v339;
LABEL_296:
    v72 = sub_140872600(v89, v90, v338, v133);
    if ( v72 )
    {
      v73 = 2;
LABEL_334:
      sub_14034E960(&v183);
      goto LABEL_335;
    }
    goto LABEL_331;
  }
  v318 = -2;
  v351 = 1;
  v350 = 1;
  sub_141486710(v290, v89, v90);
  if ( *(_DWORD *)v290 == 2 )
  {
    *(_QWORD *)&v256[8] = *(_QWORD *)&v290[8];
    *(_QWORD *)v256 = 2;
    goto LABEL_138;
  }
  *(_OWORD *)v256 = *(_OWORD *)v290;
  *(_QWORD *)&v256[80] = *(_QWORD *)&v290[80];
  *(_OWORD *)&v256[64] = *(_OWORD *)&v290[64];
  *(_OWORD *)&v256[48] = *(_OWORD *)&v290[48];
  *(_OWORD *)&v256[32] = *(_OWORD *)&v290[32];
  *(_OWORD *)&v256[16] = *(_OWORD *)&v290[16];
  if ( *(_QWORD *)v290 == 2 )
  {
LABEL_138:
    v318 = -2;
    v351 = 1;
    v350 = 1;
    sub_140018650(&v256[8]);
    v318 = -2;
    v351 = 1;
    v350 = 0;
    sub_14034ED40(&v298[8]);
  }
  else
  {
    if ( v352 )
    {
      v73 = *(_QWORD *)&v298[8];
      v72 = *(_QWORD *)&v298[16];
      v313 = *(_OWORD *)&v298[24];
      v314 = *(_OWORD *)&v298[40];
      v315 = *(_OWORD *)&v298[56];
      v316 = *(_OWORD *)&v298[72];
      v317 = *(_OWORD *)&v298[88];
      v64 = v339;
      goto LABEL_340;
    }
    *(_OWORD *)&v290[80] = *(_OWORD *)&v298[88];
    *(_OWORD *)&v290[64] = *(_OWORD *)&v298[72];
    *(_OWORD *)&v290[48] = *(_OWORD *)&v298[56];
    *(_OWORD *)&v290[32] = *(_OWORD *)&v298[40];
    *(_OWORD *)&v290[16] = *(_OWORD *)&v298[24];
    *(_OWORD *)v290 = *(_OWORD *)&v298[8];
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v183 = v290;
      *((_QWORD *)&v183 + 1) = sub_140B036A0;
      *(_QWORD *)v256 = aCodexmateLibCo_16;
      *(_QWORD *)&v256[8] = 31;
      *(_QWORD *)&v256[16] = aCodexmateLibCo_16;
      *(_QWORD *)&v256[24] = 31;
      *(_QWORD *)&v256[32] = &off_14174EC50;
      sub_140985BA0(&unk_14174EC00, &v183, 2, v256);
    }
    v318 = -2;
    v351 = 1;
    v350 = 0;
    sub_14034ED40(v290);
  }
LABEL_140:
  v92 = (char *)hObject + 32 * v327;
  v64 = v339;
  v327 = (unsigned __int64)v92;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        if ( hObject == v92 )
        {
          *(_QWORD *)v290 = v344;
          if ( *((_QWORD *)&v276 + 1) >= 2u )
          {
            if ( *((_QWORD *)&v276 + 1) >= 0x15u )
              sub_140B58CD0(v276, *((_QWORD *)&v276 + 1), v290);
            else
              sub_1405560F0(v276, *((_QWORD *)&v276 + 1), 1, v290);
            v64 = v339;
            v65 = v329;
          }
          persist_registry(v290, v65, (__int64)&v275, 1);
          v73 = *(_QWORD *)v290;
          if ( *(_QWORD *)v290 != -1 )
          {
            v72 = *(_QWORD *)&v290[8];
            v313 = *(_OWORD *)&v290[16];
            v314 = *(_OWORD *)&v290[32];
            v315 = *(_OWORD *)&v290[48];
            v316 = *(_OWORD *)&v290[64];
            v130 = *(_OWORD *)&v290[80];
            goto LABEL_280;
          }
          v72 = (__int64)v275;
          v313 = v276;
          v314 = v277;
          v315 = v278;
          v316 = v279;
          v317 = v280;
          if ( (_QWORD)v244 != -1 )
            sub_14034DF40(&v244);
          goto LABEL_367;
        }
        v93 = *((HANDLE **)hObject + 2);
        v94 = *((_QWORD *)hObject + 1);
        sub_1403CE160((unsigned int)v290, v94, (_DWORD)v93, v326, v319);
        hObject = (char *)hObject + 32;
        if ( *(_DWORD *)v290 == -1 )
        {
          sub_141486270(v290, v94, v93);
          if ( *(_DWORD *)v290 == 2 )
          {
            *(_QWORD *)v256 = 2;
            *(_QWORD *)&v256[8] = *(_QWORD *)&v290[8];
            v73 = 2;
            goto LABEL_163;
          }
          if ( (v290[76] & 0x10) != 0 || (*(_DWORD *)&v290[80] & 0x20000000) != 0 && (*(_WORD *)&v290[76] & 0x400) != 0 )
          {
            *(_QWORD *)&v183 = v94;
            *((_QWORD *)&v183 + 1) = v93;
            *(_QWORD *)v290 = &v183;
            *(_QWORD *)&v290[8] = sub_14148F3A0;
            sub_14149C0F0(&v256[8], &unk_14174E2E9, v290);
            *(_QWORD *)v256 = 9;
            v73 = 9;
LABEL_163:
            *(_OWORD *)&v290[80] = *(_OWORD *)&v256[80];
            *(_OWORD *)&v290[64] = *(_OWORD *)&v256[64];
            *(_OWORD *)&v290[48] = *(_OWORD *)&v256[48];
            *(_OWORD *)&v290[32] = *(_OWORD *)&v256[32];
            *(_OWORD *)&v290[16] = *(_OWORD *)&v256[16];
            *(_OWORD *)v290 = *(_OWORD *)v256;
            if ( !v352 )
            {
              if ( *(_QWORD *)off_141EC8D80 >= 2u )
              {
                *(_QWORD *)&v262 = v290;
                *((_QWORD *)&v262 + 1) = sub_140B036A0;
                *(_QWORD *)&v183 = aCodexmateLibCo_16;
                *((_QWORD *)&v183 + 1) = 31;
                v184 = aCodexmateLibCo_16;
                v185 = 31;
                v186 = &off_14174ECB8;
                sub_140985BA0(&unk_14174EC68, &v262, 2, &v183);
              }
              sub_14034ED40(v290);
              continue;
            }
            v72 = *(_QWORD *)&v256[8];
            v313 = *(_OWORD *)&v256[16];
            v314 = *(_OWORD *)&v256[32];
            v315 = *(_OWORD *)&v256[48];
            v316 = *(_OWORD *)&v256[64];
            v130 = *(_OWORD *)&v256[80];
LABEL_280:
            v317 = v130;
            goto LABEL_340;
          }
        }
        else
        {
          *(_OWORD *)&v256[80] = *(_OWORD *)&v290[80];
          *(_OWORD *)&v256[64] = *(_OWORD *)&v290[64];
          *(_OWORD *)&v256[48] = *(_OWORD *)&v290[48];
          *(_OWORD *)&v256[32] = *(_OWORD *)&v290[32];
          *(_OWORD *)&v256[16] = *(_OWORD *)&v290[16];
          *(_OWORD *)v256 = *(_OWORD *)v290;
          v73 = *(_QWORD *)v290;
          if ( *(_QWORD *)v290 != -1 )
            goto LABEL_163;
        }
        break;
      }
      sub_1403C9010(v290, v94, v93);
      if ( *(_QWORD *)v290 == -2 )
      {
        if ( !v352 )
        {
          *(_OWORD *)&v256[80] = *(_OWORD *)&v290[88];
          *(_OWORD *)&v256[64] = *(_OWORD *)&v290[72];
          *(_OWORD *)&v256[48] = *(_OWORD *)&v290[56];
          *(_OWORD *)&v256[32] = *(_OWORD *)&v290[40];
          *(_OWORD *)&v256[16] = *(_OWORD *)&v290[24];
          *(_OWORD *)v256 = *(_OWORD *)&v290[8];
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v303 = v94;
            *((_QWORD *)&v303 + 1) = v93;
            *(_QWORD *)v298 = &v303;
            *(_QWORD *)&v298[8] = sub_14148F3A0;
            *(_QWORD *)&v298[16] = v256;
            *(_QWORD *)&v298[24] = sub_140B036A0;
            *(_QWORD *)&v262 = aCodexmateLibCo_16;
            *((_QWORD *)&v262 + 1) = 31;
            *(_QWORD *)&v263 = aCodexmateLibCo_16;
            *((_QWORD *)&v263 + 1) = 31;
            *(_QWORD *)&v264 = &off_14174EEB8;
            sub_140985BA0(&unk_14174EE58, v298, 2, &v262);
          }
          sub_14034ED40(v256);
          continue;
        }
        v73 = *(_QWORD *)&v290[8];
        v72 = *(_QWORD *)&v290[16];
        v313 = *(_OWORD *)&v290[24];
        v314 = *(_OWORD *)&v290[40];
        v315 = *(_OWORD *)&v290[56];
        v316 = *(_OWORD *)&v290[72];
        v130 = *(_OWORD *)&v290[88];
        goto LABEL_280;
      }
      break;
    }
    sub_141684120(&v183, v290, 176);
    v92 = (char *)v327;
    if ( !(unsigned __int8)sub_1403CBE70(&v183) )
      goto LABEL_161;
    sub_1403C9DD0(v290, &v183, v94, v93);
    if ( *(_DWORD *)v290 == 2 )
    {
      if ( v352 )
      {
        v73 = *(_QWORD *)&v290[8];
        v72 = *(_QWORD *)&v290[16];
        v313 = *(_OWORD *)&v290[24];
        v314 = *(_OWORD *)&v290[40];
        v315 = *(_OWORD *)&v290[56];
        v316 = *(_OWORD *)&v290[72];
        v317 = *(_OWORD *)&v290[88];
        goto LABEL_299;
      }
      *(_OWORD *)&v256[80] = *(_OWORD *)&v290[88];
      *(_OWORD *)&v256[64] = *(_OWORD *)&v290[72];
      *(_OWORD *)&v256[48] = *(_OWORD *)&v290[56];
      *(_OWORD *)&v256[32] = *(_OWORD *)&v290[40];
      *(_OWORD *)&v256[16] = *(_OWORD *)&v290[24];
      *(_OWORD *)v256 = *(_OWORD *)&v290[8];
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)&v281 = v94;
        *((_QWORD *)&v281 + 1) = v93;
        *(_QWORD *)&v303 = &v281;
        *((_QWORD *)&v303 + 1) = sub_14148F3A0;
        *(_QWORD *)v304 = v256;
        *(_QWORD *)&v304[8] = sub_140B036A0;
        *(_QWORD *)v298 = aCodexmateLibCo_16;
        *(_QWORD *)&v298[8] = 31;
        *(_QWORD *)&v298[16] = aCodexmateLibCo_16;
        *(_QWORD *)&v298[24] = 31;
        *(_QWORD *)&v298[32] = &off_14174EE40;
        sub_140985BA0(&unk_14174EDE0, &v303, 2, v298);
      }
      sub_14034ED40(v256);
      goto LABEL_161;
    }
    sub_141684120(&v262, v290, 152);
    v331 = 1;
    sub_14149C500(&v293, &v263);
    v336 = v93;
    if ( !*((_QWORD *)&v276 + 1) )
    {
      LODWORD(v97) = 0;
      goto LABEL_188;
    }
    v95 = v276;
    v96 = 424LL * *((_QWORD *)&v276 + 1);
    v97 = *((_QWORD *)&v293 + 1);
    v98 = v294;
    v99 = 0;
    v100 = nullptr;
    while ( 1 )
    {
      if ( *(_QWORD *)(v95 + v99 + 208) == v98 )
      {
        v338 = v100;
        v101 = sub_1416847B0(*(_QWORD *)(v95 + v99 + 200), v97, v98);
        v100 = v338;
        if ( !v101 )
          break;
      }
      v100 = (HANDLE *)((char *)v100 + 1);
      v99 += 424;
      if ( v96 == v99 )
      {
        LODWORD(v97) = 0;
        goto LABEL_188;
      }
    }
    v64 = v339;
    if ( (_QWORD)v277 != -1 && (_QWORD)v278 == v98 && !(unsigned int)sub_1416847B0(*((_QWORD *)&v277 + 1), v97, v98) )
      goto LABEL_183;
    v102 = *(_QWORD *)(v95 + v99 + 224);
    v103 = *(_QWORD *)(v95 + v99 + 232);
    v349 = 1;
    sub_14149BB70(v290, v102, v103);
    v335 = *(_QWORD *)v290;
    v104 = *(_QWORD *)&v290[16];
    v337 = *(_QWORD *)&v290[8];
    sub_141473290(v298, *(_QWORD *)&v290[8], *(_QWORD *)&v290[16]);
    sub_141473290(v256, v94, v336);
    if ( *(_QWORD *)&v298[8] == *(_QWORD *)&v256[8]
      && v298[56] == v256[56]
      && v298[57] == 2
      && v256[57] == 2
      && v298[16] < 3u == v256[16] < 3u
      && !(unsigned int)sub_1416847B0(*(_QWORD *)v298, *(_QWORD *)v256, *(_QWORD *)&v298[8]) )
    {
      goto LABEL_181;
    }
    *(_OWORD *)&v290[48] = *(_OWORD *)&v256[48];
    *(_OWORD *)&v290[32] = *(_OWORD *)&v256[32];
    *(_OWORD *)&v290[16] = *(_OWORD *)&v256[16];
    *(_OWORD *)v290 = *(_OWORD *)v256;
    if ( (unsigned __int8)sub_140467AB0(v298, v290) )
      goto LABEL_181;
    sub_1403C9010(v256, v337, v104);
    if ( *(_QWORD *)v256 != -2 )
    {
      sub_141684120(v290, v256, 176);
      if ( (_QWORD)v244 == -1 )
      {
        v126 = 0;
      }
      else
      {
        if ( (_QWORD)v245 )
        {
          v123 = *((_QWORD *)&v244 + 1);
          v124 = 424 * v245;
          v125 = 0;
          while ( *(_QWORD *)(v123 + v125 + 208) != v98
               || (unsigned int)sub_1416847B0(*(_QWORD *)(v123 + v125 + 200), v97, v98) )
          {
            v125 += 424;
            if ( v124 == v125 )
              goto LABEL_227;
          }
          v126 = *(_QWORD *)(v123 + v125 + 224);
          v328 = *(_QWORD *)(v123 + v125 + 232);
        }
        else
        {
LABEL_227:
          v126 = 0;
        }
        v64 = v339;
        v65 = v329;
      }
      sub_1403CB3A0((unsigned int)&v233, v326, v319, v97, v98);
      v330 = *((_QWORD *)&v233 + 1);
      v97 = v234;
      v127 = 1;
      if ( (unsigned __int8)sub_1409DBBA0(&v183, v290) )
        goto LABEL_263;
      if ( (unsigned __int8)sub_1409DBBA0(v290, &v183) )
        goto LABEL_232;
      if ( v126 )
      {
        sub_141473290(&v281, v126, v328);
        sub_141473290(&v303, v94, v336);
        if ( *((_QWORD *)&v281 + 1) == *((_QWORD *)&v303 + 1)
          && (_BYTE)v284 == v304[40]
          && BYTE1(v284) == 2
          && v304[41] == 2
          && v282[0] < 3u == v304[0] < 3u
          && !(unsigned int)sub_1416847B0(v281, v303, *((_QWORD *)&v281 + 1)) )
        {
          v127 = 1;
        }
        else
        {
          *(_OWORD *)&v298[48] = *(_OWORD *)&v304[32];
          *(_OWORD *)&v298[32] = *(_OWORD *)&v304[16];
          *(_OWORD *)&v298[16] = *(_OWORD *)v304;
          *(_OWORD *)v298 = v303;
          v127 = sub_140467AB0(&v281, v298);
        }
        sub_141473290(&v281, v126, v328);
        sub_141473290(&v303, v337, v104);
        if ( *((_QWORD *)&v281 + 1) == *((_QWORD *)&v303 + 1)
          && (_BYTE)v284 == v304[40]
          && BYTE1(v284) == 2
          && v304[41] == 2
          && v282[0] < 3u == v304[0] < 3u
          && !(unsigned int)sub_1416847B0(v281, v303, *((_QWORD *)&v281 + 1)) )
        {
          v64 = v339;
          v65 = v329;
          if ( !v127 )
            goto LABEL_232;
        }
        else
        {
          *(_OWORD *)&v298[48] = *(_OWORD *)&v304[32];
          *(_OWORD *)&v298[32] = *(_OWORD *)&v304[16];
          *(_OWORD *)&v298[16] = *(_OWORD *)v304;
          *(_OWORD *)v298 = v303;
          v128 = sub_140467AB0(&v281, v298);
          v64 = v339;
          v65 = v329;
          if ( v127 != v128 )
            goto LABEL_263;
        }
      }
      sub_141473290(&v281, v94, v336);
      sub_141473290(&v303, v330, v97);
      if ( *((_QWORD *)&v281 + 1) == *((_QWORD *)&v303 + 1)
        && (_BYTE)v284 == v304[40]
        && BYTE1(v284) == 2
        && v304[41] == 2
        && v282[0] < 3u == v304[0] < 3u
        && !(unsigned int)sub_1416847B0(v281, v303, *((_QWORD *)&v281 + 1)) )
      {
        v127 = 1;
      }
      else
      {
        *(_OWORD *)&v298[48] = *(_OWORD *)&v304[32];
        *(_OWORD *)&v298[32] = *(_OWORD *)&v304[16];
        *(_OWORD *)&v298[16] = *(_OWORD *)v304;
        *(_OWORD *)v298 = v303;
        v127 = sub_140467AB0(&v281, v298);
      }
      sub_141473290(&v281, v337, v104);
      sub_141473290(&v303, v330, v97);
      if ( *((_QWORD *)&v281 + 1) != *((_QWORD *)&v303 + 1)
        || (_BYTE)v284 != v304[40]
        || BYTE1(v284) != 2
        || v304[41] != 2
        || v282[0] < 3u != v304[0] < 3u
        || (unsigned int)sub_1416847B0(v281, v303, *((_QWORD *)&v281 + 1)) )
      {
        *(_OWORD *)&v298[48] = *(_OWORD *)&v304[32];
        *(_OWORD *)&v298[32] = *(_OWORD *)&v304[16];
        *(_OWORD *)&v298[16] = *(_OWORD *)v304;
        *(_OWORD *)v298 = v303;
        v129 = sub_140467AB0(&v281, v298);
        v64 = v339;
        v65 = v329;
        if ( v127 != v129 )
          goto LABEL_263;
LABEL_262:
        sub_141473290(&v303, v94, v336);
        sub_141473290(v298, v337, v104);
        v127 = (unsigned __int8)sub_141484A30(&v303, v298) >> 7;
        goto LABEL_263;
      }
      v64 = v339;
      v65 = v329;
      if ( v127 )
        goto LABEL_262;
LABEL_232:
      v127 = 0;
LABEL_263:
      if ( (_QWORD)v233 )
        sub_140001660(v330, v233, 1);
      sub_14034E960(v290);
      if ( !v127 )
      {
LABEL_181:
        if ( v335 )
          sub_140001660(v337, v335, 1);
LABEL_183:
        if ( (_QWORD)v293 )
          sub_140001660(*((_QWORD *)&v293 + 1), v293, 1);
        sub_14034E8D0(&v262);
        v92 = (char *)v327;
LABEL_161:
        sub_14034E960(&v183);
        continue;
      }
LABEL_266:
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)v290 = aCodexmateLibCo_16;
        *(_QWORD *)&v290[8] = 31;
        *(_QWORD *)&v290[16] = aCodexmateLibCo_16;
        *(_QWORD *)&v290[24] = 31;
        *(_QWORD *)&v290[32] = &off_14174EDB0;
        sub_140985BA0(
          "[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity",
          215,
          2,
          v290);
      }
      LOBYTE(v97) = 1;
      if ( v335 )
        sub_140001660(v337, v335, 1);
LABEL_188:
      v349 = 1;
      sub_14149C500(v298, &v293);
      *(_QWORD *)&v281 = v94;
      *((_QWORD *)&v281 + 1) = v336;
      *(_QWORD *)v256 = 0;
      *(_QWORD *)&v256[8] = 1;
      *(_QWORD *)&v256[16] = 0;
      *(_QWORD *)&v290[16] = 1610612768;
      *(_QWORD *)v290 = v256;
      *(_QWORD *)&v290[8] = &off_141754110;
      if ( (unsigned __int8)sub_14148F3A0(&v281, v290, v105) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_1,
          55,
          (unsigned int)v344,
          (unsigned int)&unk_14174DE40,
          (__int64)&off_1417541C8);
      v328 = *(_QWORD *)&v256[8];
      v336 = *(HANDLE **)v256;
      v106 = *(_QWORD *)&v256[16];
      v337 = *((_QWORD *)&v264 + 1);
      v107 = *((_QWORD *)&v265 + 1);
      v323 = v265;
      v324 = *((_QWORD *)&v266 + 1);
      v335 = v266;
      v309 = *((_QWORD *)&v267 + 1);
      v108 = v267;
      v325 = v268;
      v310 = *((_QWORD *)&v269 + 1);
      v109 = v269;
      v320 = v270;
      v110 = v271;
      *(_QWORD *)v256 = &v274;
      *(_QWORD *)&v256[8] = sub_140420DF0;
      sub_14149C0F0(v290, &unk_14174CCE6, v256);
      v321 = v107;
      v302 = v106;
      LODWORD(v322) = v97;
      v254 = *(_QWORD *)&v290[8];
      v330 = *(_QWORD *)v290;
      sub_14149A6B0(v256, *(_QWORD *)&v290[8], *(_QWORD *)&v290[16]);
      sub_140FFA6E0(v290);
      v111 = *(_DWORD *)v290;
      v112 = (*(int *)v290 >> 13) - 1;
      v113 = 0;
      if ( *(int *)v290 >> 13 <= 0 )
      {
        v114 = (1 - (*(int *)v290 >> 13)) / 0x190u + 1;
        v112 += 400 * v114;
        v113 = -146097 * v114;
      }
      v115 = *(unsigned int *)&v290[4];
      v116 = *(unsigned int *)&v290[8];
      *(_QWORD *)&v303 = &v273;
      *((_QWORD *)&v303 + 1) = sub_140422E30;
      sub_14149C0F0(v290, &unk_14174CCE6, &v303);
      v255 = *(_QWORD *)&v290[8];
      v253 = *(_QWORD *)v290;
      sub_14149A6B0(v290, *(_QWORD *)&v290[8], *(_QWORD *)&v290[16]);
      v160 = *(_QWORD *)&v298[16];
      v159 = *(_OWORD *)v298;
      v161 = v336;
      v162 = v328;
      v163 = v302;
      v164 = v337;
      v165 = v323;
      v166 = v321;
      v167 = 0;
      v168 = 1;
      v169 = 0;
      v174 = v335;
      v175 = v324;
      v176 = v108;
      v177 = v325;
      v178 = v109;
      v179 = v320;
      v180 = v110;
      v171 = *(_QWORD *)&v256[16];
      v170 = *(_OWORD *)v256;
      v158[0] = 1;
      v158[1] = 1000
              * (v115
               + 86400LL
               * (int)(((1461 * v112) >> 2) + v113 + ((v111 >> 4) & 0x1FF) - v112 / 100 + ((v112 / 100) >> 2) - 719163))
              + ((unsigned __int64)(1125899907 * v116) >> 50);
      v173 = *(_QWORD *)&v290[16];
      v172 = *(_OWORD *)v290;
      v158[2] = 0;
      v182 = -16776702;
      v158[4] = 0;
      v158[6] = 0;
      v158[8] = 0;
      v181 = v272;
      v158[10] = 0;
      v158[12] = 0;
      v158[14] = 2;
      v158[19] = 2;
      if ( v253 )
        sub_140001660(v255, v253, 1);
      v64 = v339;
      v65 = v329;
      if ( v330 )
        sub_140001660(v254, v330, 1);
      v117 = *((_QWORD *)&v293 + 1);
      if ( (_QWORD)v244 == -1 || !(_QWORD)v245 )
      {
        v119 = 0;
      }
      else
      {
        v118 = v294;
        v119 = *((_QWORD *)&v244 + 1);
        v120 = 424 * v245;
        while ( *(_QWORD *)(v119 + 208) != v118 || (unsigned int)sub_1416847B0(*(_QWORD *)(v119 + 200), v117, v118) )
        {
          v119 += 424;
          v120 -= 424;
          if ( !v120 )
          {
            v119 = 0;
            break;
          }
        }
      }
      v342 = 1;
      sub_1403BBC40(v158, v119);
      v342 = 1;
      sub_1403BA310(v158, v252);
      v121 = *((_QWORD *)&v276 + 1);
      if ( (_BYTE)v322 )
      {
        if ( (unsigned __int64)v338 >= *((_QWORD *)&v276 + 1) )
          sub_1416C30E3(v338, *((_QWORD *)&v276 + 1), &off_14174EDC8);
        v122 = v276 + 424LL * (_QWORD)v338;
        sub_14034E080(v122);
        sub_141684120(v122, v158, 424);
      }
      else
      {
        if ( *((HANDLE *)&v276 + 1) == v275 )
          sub_141689340(&v275);
        sub_141684120(v276 + 424 * v121, v158, 424);
        *((_QWORD *)&v276 + 1) = v121 + 1;
      }
      if ( (_QWORD)v293 )
        sub_140001660(v117, v293, 1);
      if ( (_QWORD)v263 )
        sub_140001660(*((_QWORD *)&v263 + 1), v263, 1);
      sub_14034E960(&v183);
      v92 = (char *)v327;
      continue;
    }
    break;
  }
  if ( !v352 )
  {
    *(_OWORD *)&v290[80] = *(_OWORD *)&v256[88];
    *(_OWORD *)&v290[64] = *(_OWORD *)&v256[72];
    *(_OWORD *)&v290[48] = *(_OWORD *)&v256[56];
    *(_OWORD *)&v290[32] = *(_OWORD *)&v256[40];
    *(_OWORD *)&v290[16] = *(_OWORD *)&v256[24];
    *(_OWORD *)v290 = *(_OWORD *)&v256[8];
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v303 = v290;
      *((_QWORD *)&v303 + 1) = sub_140B036A0;
      *(_QWORD *)v298 = aCodexmateLibCo_16;
      *(_QWORD *)&v298[8] = 31;
      *(_QWORD *)&v298[16] = aCodexmateLibCo_16;
      *(_QWORD *)&v298[24] = 31;
      *(_QWORD *)&v298[32] = &off_14174ED28;
      sub_140985BA0(&unk_14174ECD0, &v303, 2, v298);
    }
    sub_14034ED40(v290);
    goto LABEL_266;
  }
  v73 = *(_QWORD *)&v256[8];
  v72 = *(_QWORD *)&v256[16];
  v313 = *(_OWORD *)&v256[24];
  v314 = *(_OWORD *)&v256[40];
  v315 = *(_OWORD *)&v256[56];
  v316 = *(_OWORD *)&v256[72];
  v317 = *(_OWORD *)&v256[88];
  if ( v335 )
    sub_140001660(v337, v335, 1);
  if ( (_QWORD)v293 )
    sub_140001660(*((_QWORD *)&v293 + 1), v293, 1);
  sub_14034E8D0(&v262);
  v64 = v339;
LABEL_299:
  v134 = &v183;
LABEL_339:
  sub_14034E960(v134);
LABEL_340:
  sub_14034DF40(&v275);
  if ( (_QWORD)v244 != -1 )
    sub_14034DF40(&v244);
  if ( v73 == -1 )
  {
LABEL_367:
    v216 = v317;
    v215 = v316;
    v214 = v315;
    *(_OWORD *)&v256[8] = v313;
    *(_OWORD *)&v256[24] = v314;
    *(_OWORD *)&v256[40] = v315;
    *(_OWORD *)&v256[56] = v316;
    *(_OWORD *)&v256[72] = v317;
    *(_QWORD *)v256 = v72;
    v183 = v314;
    v184 = (const char *)v315;
    LODWORD(v185) = DWORD2(v313);
    BYTE4(v185) = 1;
    sub_140AC9CA0(v290, &v183);
    *((_OWORD *)v64 + 6) = *(_OWORD *)&v290[96];
    *((_OWORD *)v64 + 5) = *(_OWORD *)&v290[80];
    *((_OWORD *)v64 + 4) = *(_OWORD *)&v290[64];
    v146 = *(_OWORD *)v290;
    v147 = *(_OWORD *)&v290[16];
    v148 = *(_OWORD *)&v290[32];
    *((_OWORD *)v64 + 3) = *(_OWORD *)&v290[48];
    *((_OWORD *)v64 + 2) = v148;
    *((_OWORD *)v64 + 1) = v147;
    *(_OWORD *)v64 = v146;
    sub_140349D70((__int64 *)v256);
    goto LABEL_345;
  }
LABEL_343:
  v216 = v317;
  v136 = v313;
  v137 = v314;
  v138 = v315;
  v139 = v316;
  v215 = v316;
  v214 = v315;
  v213 = v314;
  v212 = v313;
  *(_OWORD *)(v64 + 88) = v317;
  *(_OWORD *)(v64 + 72) = v139;
  *(_OWORD *)(v64 + 56) = v138;
  *(_OWORD *)(v64 + 40) = v137;
  *(_OWORD *)(v64 + 24) = v136;
  *((_QWORD *)v64 + 1) = v73;
  *((_QWORD *)v64 + 2) = v72;
LABEL_344:
  *(_QWORD *)v64 = -1;
LABEL_345:
  *(_QWORD *)v290 = sub_1412018B0(&v300);
  if ( *(_QWORD *)v290 )
    sub_140018650(v290);
  CloseHandle(v300);
  v23 = *(_QWORD *)&v243[0];
  if ( *(__int64 *)&v243[0] > 0 )
LABEL_348:
    sub_140001660(*((_QWORD *)&v243[0] + 1), v23, 1);
LABEL_349:
  *(_QWORD *)v290 = sub_1412018B0(&v301);
  if ( *(_QWORD *)v290 )
    sub_140018650(v290);
  CloseHandle(v301);
LABEL_352:
  result = *((char **)&v260 + 1);
  v329 = *((_QWORD **)&v260 + 1);
  if ( v261 )
  {
    v140 = nullptr;
    v141 = (HANDLE *)v329;
    v327 = (unsigned __int64)v261;
    do
    {
      hObject = v140;
      v338 = v141;
      *(_QWORD *)v290 = sub_1412018B0(v141);
      if ( *(_QWORD *)v290 )
        sub_140018650(v290);
      v142 = v338;
      CloseHandle(*v338);
      v140 = (char *)hObject - 1;
      v141 = v142 + 1;
      result = (char *)hObject + v327 - 1;
    }
    while ( result );
  }
  if ( (_QWORD)v260 )
    result = (char *)sub_140001660(v329, 8 * v260, 8);
LABEL_359:
  v143 = v312;
  if ( v312 )
  {
    v144 = (_QWORD *)(*((_QWORD *)&v311 + 1) + 8LL);
    do
    {
      v145 = *(v144 - 1);
      if ( v145 )
        result = (char *)sub_140001660(*v144, v145, 1);
      v144 += 4;
      --v143;
    }
    while ( v143 );
  }
  if ( (_QWORD)v311 )
    return (char *)sub_140001660(*((_QWORD *)&v311 + 1), 32 * v311, 8);
  return result;
}