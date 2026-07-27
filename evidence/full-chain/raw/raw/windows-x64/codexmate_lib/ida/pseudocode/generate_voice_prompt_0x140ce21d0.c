// module: codexmate_lib
// addr: 0x140ce21d0
// name: generate_voice_prompt
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = generate_voice_prompt | mapped via command-name string xref (win-native, ground-truth)
char __fastcall generate_voice_prompt(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  char v8; // r14
  __m128i v9; // xmm6
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r12
  _BYTE *v14; // r8
  __int64 v15; // rax
  _BYTE *v16; // r15
  _BYTE *v17; // rdi
  _BYTE *v18; // rdi
  __int64 v19; // rdx
  volatile void *v20; // r14
  __int128 v21; // xmm9
  __int128 v22; // xmm10
  __int128 v23; // xmm11
  __int128 v24; // xmm7
  __int128 v25; // xmm8
  __int128 v26; // xmm12
  __int128 v27; // xmm13
  __int128 v28; // xmm14
  __int128 v29; // xmm15
  __m128i v30; // xmm6
  __int64 v31; // rcx
  __int64 *v32; // rdi
  char *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // r14d
  int v37; // r13d
  unsigned int v38; // r12d
  __int64 v39; // r15
  PVOID v40; // rcx
  char v41; // al
  unsigned __int64 v42; // r15
  __int64 v43; // r13
  __int64 v44; // r12
  __int128 v45; // kr00_16
  __m128i v46; // xmm6
  __int64 v47; // rdx
  __int64 v48; // rcx
  PVOID v49; // rcx
  char v50; // al
  _BYTE *v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rbx
  _BYTE *v59; // rcx
  char result; // al
  __int64 v61; // rdi
  __int64 v62; // r8
  _BYTE *v63; // rax
  int v64; // ebx
  unsigned int v65; // edi
  __int64 v66; // r15
  _BYTE *v67; // rdi
  __int64 v68; // rbx
  _BYTE *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r15
  __int64 v72; // r14
  __int64 v73; // r8
  __int64 v74; // r13
  __int64 v75; // rbx
  __int64 v76; // rax
  _BYTE *v77; // rcx
  _QWORD *v78; // rcx
  _QWORD *v79; // rbx
  __int64 v80; // rax
  __int128 v81; // xmm7
  char v82; // r15
  __int128 v83; // xmm8
  char v84; // r15
  __int128 v85; // xmm9
  char v86; // r15
  __int64 v87; // rdx
  _QWORD *v88; // rdx
  __int128 v89; // xmm10
  char v90; // r15
  __int64 v91; // rdx
  __int64 v92; // rdx
  _QWORD *v93; // rdx
  __int128 v94; // xmm11
  char v95; // r15
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rdx
  _QWORD *v99; // rdx
  __int128 v100; // xmm12
  char v101; // r15
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  _QWORD *v106; // rdx
  int v107; // eax
  __int128 v108; // xmm13
  _QWORD *v109; // rdi
  __int128 v110; // xmm14
  __int128 v111; // xmm15
  __int64 v112; // rcx
  __int64 v113; // rbx
  __int64 v114; // r12
  _BYTE *v115; // r15
  _BYTE *v116; // r14
  _BYTE *v117; // rdi
  _BYTE v118[680]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v119; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v120; // [rsp+2E0h] [rbp+260h]
  _BYTE v121[152]; // [rsp+580h] [rbp+500h] BYREF
  _QWORD *v122; // [rsp+618h] [rbp+598h] BYREF
  __int64 v123; // [rsp+620h] [rbp+5A0h]
  __int64 v124; // [rsp+628h] [rbp+5A8h]
  __m128i *v125; // [rsp+8C0h] [rbp+840h] BYREF
  __int64 (__fastcall **v126)(); // [rsp+8C8h] [rbp+848h]
  __m128i v127; // [rsp+8D0h] [rbp+850h]
  __int64 v128; // [rsp+8E0h] [rbp+860h]
  __m128i v129; // [rsp+8E8h] [rbp+868h]
  __int128 v130; // [rsp+8F8h] [rbp+878h]
  __int128 v131; // [rsp+908h] [rbp+888h]
  __int128 v132; // [rsp+918h] [rbp+898h]
  __int128 v133; // [rsp+928h] [rbp+8A8h]
  __int128 v134; // [rsp+938h] [rbp+8B8h]
  __int128 v135; // [rsp+948h] [rbp+8C8h]
  __int128 v136; // [rsp+CA0h] [rbp+C20h]
  __int128 v137; // [rsp+CB0h] [rbp+C30h]
  __m128i v138; // [rsp+CC0h] [rbp+C40h] BYREF
  __int128 v139; // [rsp+CD0h] [rbp+C50h] BYREF
  __m128i v140; // [rsp+CE0h] [rbp+C60h] BYREF
  __m128i v141; // [rsp+CF0h] [rbp+C70h] BYREF
  __int64 v142; // [rsp+D00h] [rbp+C80h]
  __int128 v143; // [rsp+D08h] [rbp+C88h]
  __int128 v144; // [rsp+D18h] [rbp+C98h]
  __int128 v145; // [rsp+D28h] [rbp+CA8h]
  __int128 v146; // [rsp+D38h] [rbp+CB8h]
  __int128 v147; // [rsp+D48h] [rbp+CC8h]
  __int128 v148; // [rsp+D58h] [rbp+CD8h]
  char v149[992]; // [rsp+D78h] [rbp+CF8h] BYREF
  __int64 v150; // [rsp+1158h] [rbp+10D8h]
  __int64 v151; // [rsp+1160h] [rbp+10E0h]
  __int128 v152; // [rsp+1168h] [rbp+10E8h]
  __int64 v153; // [rsp+1178h] [rbp+10F8h]
  __int64 v154; // [rsp+1180h] [rbp+1100h]
  __int64 v155; // [rsp+1188h] [rbp+1108h]
  __int64 v156; // [rsp+1190h] [rbp+1110h]
  __int128 v157; // [rsp+1198h] [rbp+1118h]
  __int64 v158; // [rsp+11A8h] [rbp+1128h]
  __int64 v159; // [rsp+11B0h] [rbp+1130h]
  __int64 v160; // [rsp+11B8h] [rbp+1138h]
  __int64 v161; // [rsp+11C0h] [rbp+1140h]
  __int128 v162; // [rsp+11C8h] [rbp+1148h]
  __int64 v163; // [rsp+11D8h] [rbp+1158h]
  __int64 v164; // [rsp+11E0h] [rbp+1160h]
  __int64 v165; // [rsp+11E8h] [rbp+1168h]
  __int64 v166; // [rsp+11F0h] [rbp+1170h]
  __int128 v167; // [rsp+11F8h] [rbp+1178h]
  __int64 v168; // [rsp+1208h] [rbp+1188h]
  __m128i v169; // [rsp+1210h] [rbp+1190h]
  __int64 v170; // [rsp+1220h] [rbp+11A0h]
  __int128 v171; // [rsp+1228h] [rbp+11A8h]
  __int64 v172; // [rsp+1238h] [rbp+11B8h]
  __int128 v173; // [rsp+1240h] [rbp+11C0h]
  __int64 v174; // [rsp+1250h] [rbp+11D0h]
  __int128 v175; // [rsp+1258h] [rbp+11D8h]
  __int64 v176; // [rsp+1268h] [rbp+11E8h]
  __int64 v177; // [rsp+1270h] [rbp+11F0h]
  _QWORD *v178; // [rsp+1278h] [rbp+11F8h]
  __int64 v179; // [rsp+1280h] [rbp+1200h]
  __int128 v180; // [rsp+1288h] [rbp+1208h]
  __int64 v181; // [rsp+1298h] [rbp+1218h]
  __int128 v182; // [rsp+12A0h] [rbp+1220h]
  __int64 v183; // [rsp+12B0h] [rbp+1230h]
  __int128 v184; // [rsp+12B8h] [rbp+1238h]
  __int64 v185; // [rsp+12C8h] [rbp+1248h]
  __m128i v186; // [rsp+12D0h] [rbp+1250h]
  __int64 v187; // [rsp+12E0h] [rbp+1260h]
  __int64 v188; // [rsp+12E8h] [rbp+1268h]
  char v189; // [rsp+12F0h] [rbp+1270h]
  __int64 v190; // [rsp+12F8h] [rbp+1278h]
  __int64 v191; // [rsp+1300h] [rbp+1280h]
  __int64 v192; // [rsp+1308h] [rbp+1288h]
  __int64 v193; // [rsp+1310h] [rbp+1290h]
  __int64 v194; // [rsp+1318h] [rbp+1298h]
  const char *v195; // [rsp+1320h] [rbp+12A0h] BYREF
  _BYTE v196[24]; // [rsp+1328h] [rbp+12A8h] BYREF
  _BYTE *v197; // [rsp+1340h] [rbp+12C0h]
  _QWORD v198[85]; // [rsp+1348h] [rbp+12C8h] BYREF
  __m128i v199; // [rsp+15F0h] [rbp+1570h]
  __m128i v200; // [rsp+1600h] [rbp+1580h]
  _BYTE *v201; // [rsp+1618h] [rbp+1598h]
  _BYTE *v202; // [rsp+1620h] [rbp+15A0h]
  _QWORD *v203; // [rsp+1628h] [rbp+15A8h] BYREF
  __int64 v204; // [rsp+1630h] [rbp+15B0h]
  __int64 v205; // [rsp+1638h] [rbp+15B8h]
  __m128i v206; // [rsp+1640h] [rbp+15C0h]
  __m128i v207; // [rsp+1650h] [rbp+15D0h]
  __int64 v208; // [rsp+1668h] [rbp+15E8h]
  __m128i v209; // [rsp+1670h] [rbp+15F0h]
  __m128i v210; // [rsp+1680h] [rbp+1600h]
  __m128i v211; // [rsp+1690h] [rbp+1610h]
  _BYTE *v212; // [rsp+16A0h] [rbp+1620h]
  char v213; // [rsp+16AFh] [rbp+162Fh]
  __int64 v214; // [rsp+16B0h] [rbp+1630h]
  __int64 v215; // [rsp+16B8h] [rbp+1638h]
  __int64 v216; // [rsp+16C0h] [rbp+1640h]
  __int64 v217; // [rsp+16C8h] [rbp+1648h]
  __int64 v218; // [rsp+16D0h] [rbp+1650h]
  __int64 v219; // [rsp+16D8h] [rbp+1658h]
  __int64 v220; // [rsp+16E0h] [rbp+1660h]
  __int64 v221; // [rsp+16E8h] [rbp+1668h]
  __int64 v222; // [rsp+16F0h] [rbp+1670h]
  _QWORD *v223; // [rsp+16F8h] [rbp+1678h]
  __int64 v224; // [rsp+1700h] [rbp+1680h]
  __int64 v225; // [rsp+1708h] [rbp+1688h]
  __int64 v226; // [rsp+1710h] [rbp+1690h]
  __int64 v227; // [rsp+1718h] [rbp+1698h]
  __int64 v228; // [rsp+1720h] [rbp+16A0h]
  __int64 v229; // [rsp+1728h] [rbp+16A8h]
  __int64 v230; // [rsp+1730h] [rbp+16B0h]
  __int64 v231; // [rsp+1738h] [rbp+16B8h]
  __int64 v232; // [rsp+1740h] [rbp+16C0h]
  __int64 v233; // [rsp+1748h] [rbp+16C8h]
  __int64 v234; // [rsp+1750h] [rbp+16D0h]
  __int64 v235; // [rsp+1758h] [rbp+16D8h]
  __int64 v236; // [rsp+1760h] [rbp+16E0h]
  __int64 v237; // [rsp+1768h] [rbp+16E8h]
  __int64 v238; // [rsp+1770h] [rbp+16F0h]
  __int64 v239; // [rsp+1778h] [rbp+16F8h]
  __int64 v240; // [rsp+1780h] [rbp+1700h]
  __int64 v241; // [rsp+1788h] [rbp+1708h]
  __int64 v242; // [rsp+1790h] [rbp+1710h]
  __int64 v243; // [rsp+1798h] [rbp+1718h]
  __int64 v244; // [rsp+17A0h] [rbp+1720h]
  __int64 v245; // [rsp+17A8h] [rbp+1728h]
  __int64 v246; // [rsp+17B0h] [rbp+1730h]
  __int64 v247; // [rsp+17B8h] [rbp+1738h]
  PVOID Address; // [rsp+17C0h] [rbp+1740h]
  char v249; // [rsp+17CFh] [rbp+174Fh] BYREF
  __int64 v250; // [rsp+17D0h] [rbp+1750h]
  char v251; // [rsp+17DFh] [rbp+175Fh]
  __int64 v252; // [rsp+17E0h] [rbp+1760h]
  __int64 v253; // [rsp+17E8h] [rbp+1768h]
  __m128i v254; // [rsp+17F0h] [rbp+1770h] BYREF
  __int64 v255; // [rsp+1808h] [rbp+1788h]
  __int64 v256; // [rsp+1810h] [rbp+1790h]
  __int64 v257; // [rsp+1818h] [rbp+1798h]
  __int64 v258; // [rsp+1820h] [rbp+17A0h]
  __int64 v259; // [rsp+1828h] [rbp+17A8h]
  __int64 v260; // [rsp+1830h] [rbp+17B0h]
  __int64 v261; // [rsp+1838h] [rbp+17B8h]
  __int64 v262; // [rsp+1840h] [rbp+17C0h]
  __int64 v263; // [rsp+1848h] [rbp+17C8h]
  __int64 v264; // [rsp+1850h] [rbp+17D0h]
  __int64 v265; // [rsp+1858h] [rbp+17D8h]
  __int64 v266; // [rsp+1860h] [rbp+17E0h]
  _QWORD *v267; // [rsp+1868h] [rbp+17E8h]
  __int64 v268; // [rsp+1870h] [rbp+17F0h]
  __int64 v269; // [rsp+1878h] [rbp+17F8h]
  __int64 v270; // [rsp+1880h] [rbp+1800h]
  __int64 v271; // [rsp+1888h] [rbp+1808h]
  _BYTE *v272; // [rsp+1890h] [rbp+1810h]
  __int64 v273; // [rsp+1898h] [rbp+1818h]
  __int64 v274; // [rsp+18A0h] [rbp+1820h]
  __int64 v275; // [rsp+18A8h] [rbp+1828h]
  __int64 v276; // [rsp+18B0h] [rbp+1830h]
  __int64 v277; // [rsp+18B8h] [rbp+1838h]
  __int64 v278; // [rsp+18C0h] [rbp+1840h]
  __int64 v279; // [rsp+18C8h] [rbp+1848h]
  _QWORD *v280; // [rsp+18D0h] [rbp+1850h]
  __int64 v281; // [rsp+18D8h] [rbp+1858h]
  __int64 v282; // [rsp+18E0h] [rbp+1860h]
  __int64 v283; // [rsp+18E8h] [rbp+1868h]

  v283 = -2;
  v6 = (unsigned __int8)a2[2424];
  v272 = a2;
  switch ( v6 )
  {
    case 0LL:
      v198[1] = 0;
      v195 = aGenerateVoiceP;
      *(_QWORD *)v196 = 21;
      *(_QWORD *)&v196[8] = aApp_2;
      *(_QWORD *)&v196[16] = 3;
      v197 = a2;
      v267 = a2 + 520;
      v198[0] = a2 + 520;
      sub_1401C3650(&v139, &v195);
      v7 = *(unsigned int *)((char *)&v139 + 10) | ((unsigned __int64)HIWORD(v139) << 32);
      v8 = BYTE8(v139);
      v9 = _mm_loadu_si128(&v140);
      v10 = v141.m128i_i64[0];
      if ( (_QWORD)v139 == -1 )
      {
        LOBYTE(v261) = BYTE9(v139);
        goto LABEL_494;
      }
      v135 = v148;
      v134 = v147;
      v133 = v146;
      v132 = v145;
      v131 = v144;
      v130 = v143;
      v129 = _mm_loadu_si128((const __m128i *)&v141.m128i_u64[1]);
      *(_DWORD *)((char *)&v126 + 2) = *(_DWORD *)((char *)&v139 + 10);
      HIWORD(v126) = WORD2(v7);
      v125 = (__m128i *)v139;
      LOWORD(v126) = WORD4(v139);
      v127 = v9;
      v128 = v141.m128i_i64[0];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aRepo_0;
      v140.m128i_i64[1] = 4;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      v11 = sub_140003640((volatile void *)(*((_QWORD *)v272 + 64) + 16LL));
      if ( v11 )
        goto LABEL_4;
      sub_1416850A0(&v195, &v139, &v140);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v43 = *(unsigned int *)((char *)&v195 + 2);
        v44 = HIWORD(v195);
        v45 = *(_OWORD *)v196;
        v10 = *(_QWORD *)&v196[16];
        sub_140014150(&v125);
        v7 = v43 | (v44 << 32);
        v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)*((unsigned __int64 *)&v45 + 1));
        goto LABEL_494;
      }
      v11 = *(_QWORD *)v196;
LABEL_4:
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aTemplateid_1;
      v140.m128i_i64[1] = 10;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_1409757B0(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        sub_140014150(&v125);
        goto LABEL_493;
      }
      v254.m128i_i64[0] = *(_QWORD *)&v196[8];
      v282 = *(_QWORD *)v196;
      v46 = _mm_loadu_si128((const __m128i *)&v196[8]);
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aRawtext_1;
      v140.m128i_i64[1] = 7;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_1409757B0(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( v282 )
          sub_140001660(v254.m128i_i64[0], v282, 1);
        goto LABEL_492;
      }
      v273 = *(_QWORD *)&v196[8];
      v280 = *(_QWORD **)v196;
      v81 = *(_OWORD *)&v196[8];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aSelectedtext_1;
      v140.m128i_i64[1] = 12;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        v82 = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( v280 )
          sub_140001660(v273, v280, 1);
        LOBYTE(v261) = v82;
        if ( v282 )
          sub_140001660(v254.m128i_i64[0], v282, 1);
        goto LABEL_492;
      }
      v271 = *(_QWORD *)&v196[8];
      v277 = *(_QWORD *)v196;
      v83 = *(_OWORD *)&v196[8];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aClipboardtext_1;
      v140.m128i_i64[1] = 13;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        v84 = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v271, v277, 1);
        if ( v280 )
          sub_140001660(v273, v280, 1);
        LOBYTE(v261) = v84;
        if ( v282 )
          sub_140001660(v254.m128i_i64[0], v282, 1);
        goto LABEL_492;
      }
      v269 = *(_QWORD *)&v196[8];
      v281 = *(_QWORD *)v196;
      v85 = *(_OWORD *)&v196[8];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aTargetbundleid_0;
      v140.m128i_i64[1] = 14;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        v86 = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v87 = v277;
          if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_143:
            v88 = v280;
            if ( !v280 )
              goto LABEL_145;
            goto LABEL_144;
          }
        }
        else
        {
          sub_140001660(v269, v281, 1);
          v87 = v277;
          if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_143;
        }
        sub_140001660(v271, v87, 1);
        v88 = v280;
        if ( !v280 )
        {
LABEL_145:
          LOBYTE(v261) = v86;
          if ( v282 )
            sub_140001660(v254.m128i_i64[0], v282, 1);
          goto LABEL_492;
        }
LABEL_144:
        sub_140001660(v273, v88, 1);
        goto LABEL_145;
      }
      v268 = *(_QWORD *)&v196[8];
      v279 = *(_QWORD *)v196;
      v89 = *(_OWORD *)&v196[8];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aTargetappname_0;
      v140.m128i_i64[1] = 13;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        v90 = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v91 = v281;
          if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_154:
            v92 = v277;
            if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_155;
            goto LABEL_159;
          }
        }
        else
        {
          sub_140001660(v268, v279, 1);
          v91 = v281;
          if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_154;
        }
        sub_140001660(v269, v91, 1);
        v92 = v277;
        if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_155:
          sub_140001660(v271, v92, 1);
          v93 = v280;
          if ( !v280 )
          {
LABEL_161:
            LOBYTE(v261) = v90;
            if ( v282 )
              sub_140001660(v254.m128i_i64[0], v282, 1);
            goto LABEL_492;
          }
LABEL_160:
          sub_140001660(v273, v93, 1);
          goto LABEL_161;
        }
LABEL_159:
        v93 = v280;
        if ( !v280 )
          goto LABEL_161;
        goto LABEL_160;
      }
      v265 = *(_QWORD *)&v196[8];
      v278 = *(_QWORD *)v196;
      v94 = *(_OWORD *)&v196[8];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aPromptoverride;
      v140.m128i_i64[1] = 14;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        v95 = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v96 = v279;
          if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_167:
            v97 = v281;
            if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_168;
            goto LABEL_176;
          }
        }
        else
        {
          sub_140001660(v265, v278, 1);
          v96 = v279;
          if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_167;
        }
        sub_140001660(v268, v96, 1);
        v97 = v281;
        if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_168:
          sub_140001660(v269, v97, 1);
          v98 = v277;
          if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_169;
          goto LABEL_177;
        }
LABEL_176:
        v98 = v277;
        if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_169:
          v99 = v280;
          if ( !v280 )
            goto LABEL_171;
          goto LABEL_170;
        }
LABEL_177:
        sub_140001660(v271, v98, 1);
        v99 = v280;
        if ( !v280 )
        {
LABEL_171:
          LOBYTE(v261) = v95;
          if ( v282 )
            sub_140001660(v254.m128i_i64[0], v282, 1);
          goto LABEL_492;
        }
LABEL_170:
        sub_140001660(v273, v99, 1);
        goto LABEL_171;
      }
      v263 = *(_QWORD *)&v196[8];
      v276 = *(_QWORD *)v196;
      v100 = *(_OWORD *)&v196[8];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aTemplatetitle_1;
      v140.m128i_i64[1] = 13;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        v101 = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v102 = v278;
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_182:
            v103 = v279;
            if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_183;
            goto LABEL_189;
          }
        }
        else
        {
          sub_140001660(v263, v276, 1);
          v102 = v278;
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_182;
        }
        sub_140001660(v265, v102, 1);
        v103 = v279;
        if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_183:
          sub_140001660(v268, v103, 1);
          v104 = v281;
          if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_184;
          goto LABEL_190;
        }
LABEL_189:
        v104 = v281;
        if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_184:
          v105 = v277;
          if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_185;
          goto LABEL_191;
        }
LABEL_190:
        sub_140001660(v269, v104, 1);
        v105 = v277;
        if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_185:
          sub_140001660(v271, v105, 1);
          v106 = v280;
          if ( !v280 )
          {
LABEL_193:
            LOBYTE(v261) = v101;
            if ( v282 )
              sub_140001660(v254.m128i_i64[0], v282, 1);
            goto LABEL_492;
          }
LABEL_192:
          sub_140001660(v273, v106, 1);
          goto LABEL_193;
        }
LABEL_191:
        v106 = v280;
        if ( !v280 )
          goto LABEL_193;
        goto LABEL_192;
      }
      v262 = *(_QWORD *)&v196[8];
      v275 = *(_QWORD *)v196;
      v108 = *(_OWORD *)&v196[8];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aTemplatekind_1;
      v140.m128i_i64[1] = 12;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_1409746E0(&v195, &v139);
      v8 = (char)v195;
      LOBYTE(v261) = BYTE1(v195);
      if ( (_BYTE)v195 != 0xFF )
      {
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_201:
            if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_202;
            goto LABEL_213;
          }
        }
        else
        {
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_201;
        }
        sub_140001660(v263, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_202:
          sub_140001660(v265, v278, 1);
          if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_203;
          goto LABEL_214;
        }
LABEL_213:
        if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_203:
          if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_204;
          goto LABEL_215;
        }
LABEL_214:
        sub_140001660(v268, v279, 1);
        if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_204:
          sub_140001660(v269, v281, 1);
          if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_205;
          goto LABEL_216;
        }
LABEL_215:
        if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_205:
          if ( !v280 )
            goto LABEL_207;
          goto LABEL_206;
        }
LABEL_216:
        sub_140001660(v271, v277, 1);
        if ( !v280 )
        {
LABEL_207:
          if ( v282 )
            sub_140001660(v254.m128i_i64[0], v282, 1);
          goto LABEL_492;
        }
LABEL_206:
        sub_140001660(v273, v280, 1);
        goto LABEL_207;
      }
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aLlmprovider_0;
      v140.m128i_i64[1] = 11;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_227:
            if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_228;
            goto LABEL_238;
          }
        }
        else
        {
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_227;
        }
        sub_140001660(v263, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_228:
          sub_140001660(v265, v278, 1);
          if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_229;
          goto LABEL_239;
        }
LABEL_238:
        if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_229:
          if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_230;
          goto LABEL_240;
        }
LABEL_239:
        sub_140001660(v268, v279, 1);
        if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_230:
          sub_140001660(v269, v281, 1);
          if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_231;
          goto LABEL_241;
        }
LABEL_240:
        if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_231:
          if ( !v280 )
            goto LABEL_233;
          goto LABEL_232;
        }
LABEL_241:
        sub_140001660(v271, v277, 1);
        if ( !v280 )
        {
LABEL_233:
          if ( v282 )
            sub_140001660(v254.m128i_i64[0], v282, 1);
          goto LABEL_492;
        }
LABEL_232:
        sub_140001660(v273, v280, 1);
        goto LABEL_233;
      }
      v259 = *(_QWORD *)&v196[8];
      v274 = *(_QWORD *)v196;
      v110 = *(_OWORD *)&v196[8];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aLlmapikey_0;
      v140.m128i_i64[1] = 9;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_246:
            if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_247;
            goto LABEL_255;
          }
        }
        else
        {
          sub_140001660(v259, v274, 1);
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_246;
        }
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_247:
          sub_140001660(v263, v276, 1);
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_248;
          goto LABEL_256;
        }
LABEL_255:
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_248:
          if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_249;
          goto LABEL_257;
        }
LABEL_256:
        sub_140001660(v265, v278, 1);
        if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_249:
          sub_140001660(v268, v279, 1);
          if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_250;
          goto LABEL_258;
        }
LABEL_257:
        if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_250:
          if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_251;
          goto LABEL_259;
        }
LABEL_258:
        sub_140001660(v269, v281, 1);
        if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_251:
          sub_140001660(v271, v277, 1);
          if ( !v280 )
          {
LABEL_261:
            if ( v282 )
              sub_140001660(v254.m128i_i64[0], v282, 1);
            goto LABEL_492;
          }
LABEL_260:
          sub_140001660(v273, v280, 1);
          goto LABEL_261;
        }
LABEL_259:
        if ( !v280 )
          goto LABEL_261;
        goto LABEL_260;
      }
      v257 = *(_QWORD *)&v196[8];
      v270 = *(_QWORD *)v196;
      v111 = *(_OWORD *)&v196[8];
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aLlmmodel_0;
      v140.m128i_i64[1] = 8;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v270 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_267:
            if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_268;
            goto LABEL_280;
          }
        }
        else
        {
          sub_140001660(v257, v270, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_267;
        }
        sub_140001660(v259, v274, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_268:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_269;
          goto LABEL_281;
        }
LABEL_280:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_269:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_270;
          goto LABEL_282;
        }
LABEL_281:
        sub_140001660(v263, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_270:
          sub_140001660(v265, v278, 1);
          if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_271;
          goto LABEL_283;
        }
LABEL_282:
        if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_271:
          if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_272;
          goto LABEL_284;
        }
LABEL_283:
        sub_140001660(v268, v279, 1);
        if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_272:
          sub_140001660(v269, v281, 1);
          if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_273;
          goto LABEL_285;
        }
LABEL_284:
        if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_273:
          if ( !v280 )
            goto LABEL_275;
          goto LABEL_274;
        }
LABEL_285:
        sub_140001660(v271, v277, 1);
        if ( !v280 )
        {
LABEL_275:
          if ( v282 )
            sub_140001660(v254.m128i_i64[0], v282, 1);
          goto LABEL_492;
        }
LABEL_274:
        sub_140001660(v273, v280, 1);
        goto LABEL_275;
      }
      v255 = *(_QWORD *)&v196[8];
      v266 = *(_QWORD *)v196;
      v209 = _mm_loadu_si128((const __m128i *)&v196[8]);
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aLlmbaseurl_0;
      v140.m128i_i64[1] = 10;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v266 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v270 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_290:
            if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_291;
            goto LABEL_301;
          }
        }
        else
        {
          sub_140001660(v255, v266, 1);
          if ( (unsigned __int64)(v270 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_290;
        }
        sub_140001660(v257, v270, 1);
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_291:
          sub_140001660(v259, v274, 1);
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_292;
          goto LABEL_302;
        }
LABEL_301:
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_292:
          if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_293;
          goto LABEL_303;
        }
LABEL_302:
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_293:
          sub_140001660(v263, v276, 1);
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_294;
          goto LABEL_304;
        }
LABEL_303:
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_294:
          if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_295;
          goto LABEL_305;
        }
LABEL_304:
        sub_140001660(v265, v278, 1);
        if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_295:
          sub_140001660(v268, v279, 1);
          if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_296;
          goto LABEL_306;
        }
LABEL_305:
        if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_296:
          if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_297;
          goto LABEL_307;
        }
LABEL_306:
        sub_140001660(v269, v281, 1);
        if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_297:
          sub_140001660(v271, v277, 1);
          if ( !v280 )
          {
LABEL_309:
            if ( v282 )
              sub_140001660(v254.m128i_i64[0], v282, 1);
            goto LABEL_492;
          }
LABEL_308:
          sub_140001660(v273, v280, 1);
          goto LABEL_309;
        }
LABEL_307:
        if ( !v280 )
          goto LABEL_309;
        goto LABEL_308;
      }
      v256 = *(_QWORD *)&v196[8];
      v264 = *(_QWORD *)v196;
      v210 = _mm_loadu_si128((const __m128i *)&v196[8]);
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aAsrprovider_1;
      v140.m128i_i64[1] = 11;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v264 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v266 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_315:
            if ( (unsigned __int64)(v270 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_316;
            goto LABEL_332;
          }
        }
        else
        {
          sub_140001660(v256, v264, 1);
          if ( (unsigned __int64)(v266 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_315;
        }
        sub_140001660(v255, v266, 1);
        if ( (unsigned __int64)(v270 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_316:
          sub_140001660(v257, v270, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_317;
          goto LABEL_333;
        }
LABEL_332:
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_317:
          if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_318;
          goto LABEL_334;
        }
LABEL_333:
        sub_140001660(v259, v274, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_318:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_319;
          goto LABEL_335;
        }
LABEL_334:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_319:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_320;
          goto LABEL_336;
        }
LABEL_335:
        sub_140001660(v263, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_320:
          sub_140001660(v265, v278, 1);
          if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_321;
          goto LABEL_337;
        }
LABEL_336:
        if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_321:
          if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_322;
          goto LABEL_338;
        }
LABEL_337:
        sub_140001660(v268, v279, 1);
        if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_322:
          sub_140001660(v269, v281, 1);
          if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_323;
          goto LABEL_339;
        }
LABEL_338:
        if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_323:
          if ( !v280 )
            goto LABEL_325;
          goto LABEL_324;
        }
LABEL_339:
        sub_140001660(v271, v277, 1);
        if ( !v280 )
        {
LABEL_325:
          if ( v282 )
            sub_140001660(v254.m128i_i64[0], v282, 1);
          goto LABEL_492;
        }
LABEL_324:
        sub_140001660(v273, v280, 1);
        goto LABEL_325;
      }
      v252 = *(_QWORD *)&v196[8];
      v260 = *(_QWORD *)v196;
      v211 = _mm_loadu_si128((const __m128i *)&v196[8]);
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aAsrmodel_1;
      v140.m128i_i64[1] = 8;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v260 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v264 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_344:
            if ( (unsigned __int64)(v266 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_345;
            goto LABEL_361;
          }
        }
        else
        {
          sub_140001660(v252, v260, 1);
          if ( (unsigned __int64)(v264 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_344;
        }
        sub_140001660(v256, v264, 1);
        if ( (unsigned __int64)(v266 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_345:
          sub_140001660(v255, v266, 1);
          if ( (unsigned __int64)(v270 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_346;
          goto LABEL_362;
        }
LABEL_361:
        if ( (unsigned __int64)(v270 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_346:
          if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_347;
          goto LABEL_363;
        }
LABEL_362:
        sub_140001660(v257, v270, 1);
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_347:
          sub_140001660(v259, v274, 1);
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_348;
          goto LABEL_364;
        }
LABEL_363:
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_348:
          if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_349;
          goto LABEL_365;
        }
LABEL_364:
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_349:
          sub_140001660(v263, v276, 1);
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_350;
          goto LABEL_366;
        }
LABEL_365:
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_350:
          if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_351;
          goto LABEL_367;
        }
LABEL_366:
        sub_140001660(v265, v278, 1);
        if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_351:
          sub_140001660(v268, v279, 1);
          if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_352;
          goto LABEL_368;
        }
LABEL_367:
        if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_352:
          if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_353;
          goto LABEL_369;
        }
LABEL_368:
        sub_140001660(v269, v281, 1);
        if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_353:
          sub_140001660(v271, v277, 1);
          if ( !v280 )
          {
LABEL_371:
            if ( v282 )
              sub_140001660(v254.m128i_i64[0], v282, 1);
            goto LABEL_492;
          }
LABEL_370:
          sub_140001660(v273, v280, 1);
          goto LABEL_371;
        }
LABEL_369:
        if ( !v280 )
          goto LABEL_371;
        goto LABEL_370;
      }
      v250 = *(_QWORD *)&v196[8];
      v258 = *(_QWORD *)v196;
      v207 = _mm_loadu_si128((const __m128i *)&v196[8]);
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aAsrlanguage_0;
      v140.m128i_i64[1] = 11;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v258 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v260 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_377:
            if ( (unsigned __int64)(v264 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_378;
            goto LABEL_394;
          }
        }
        else
        {
          sub_140001660(v250, v258, 1);
          if ( (unsigned __int64)(v260 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_377;
        }
        sub_140001660(v252, v260, 1);
        if ( (unsigned __int64)(v264 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_378:
          sub_140001660(v256, v264, 1);
          if ( (unsigned __int64)(v266 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_379;
          goto LABEL_395;
        }
LABEL_394:
        if ( (unsigned __int64)(v266 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_379:
          if ( (unsigned __int64)(v270 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_380;
          goto LABEL_396;
        }
LABEL_395:
        sub_140001660(v255, v266, 1);
        if ( (unsigned __int64)(v270 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_380:
          sub_140001660(v257, v270, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_381;
          goto LABEL_397;
        }
LABEL_396:
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_381:
          if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_382;
          goto LABEL_398;
        }
LABEL_397:
        sub_140001660(v259, v274, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_382:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_383;
          goto LABEL_399;
        }
LABEL_398:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_383:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_384;
          goto LABEL_400;
        }
LABEL_399:
        sub_140001660(v263, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_384:
          sub_140001660(v265, v278, 1);
          if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_385;
          goto LABEL_401;
        }
LABEL_400:
        if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_385:
          if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_386;
          goto LABEL_402;
        }
LABEL_401:
        sub_140001660(v268, v279, 1);
        if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_386:
          sub_140001660(v269, v281, 1);
          if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_387;
          goto LABEL_403;
        }
LABEL_402:
        if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_387:
          if ( !v280 )
            goto LABEL_389;
          goto LABEL_388;
        }
LABEL_403:
        sub_140001660(v271, v277, 1);
        if ( !v280 )
        {
LABEL_389:
          if ( v282 )
            sub_140001660(v254.m128i_i64[0], v282, 1);
          goto LABEL_492;
        }
LABEL_388:
        sub_140001660(v273, v280, 1);
        goto LABEL_389;
      }
      Address = *(PVOID *)&v196[8];
      v253 = *(_QWORD *)v196;
      v206 = _mm_loadu_si128((const __m128i *)&v196[8]);
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aAsremotion_0;
      v140.m128i_i64[1] = 10;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v253 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v258 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_408:
            if ( (unsigned __int64)(v260 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_409;
            goto LABEL_423;
          }
        }
        else
        {
          sub_140001660(Address, v253, 1);
          if ( (unsigned __int64)(v258 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_408;
        }
        sub_140001660(v250, v258, 1);
        if ( (unsigned __int64)(v260 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_409:
          sub_140001660(v252, v260, 1);
          if ( (unsigned __int64)(v264 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_410;
          goto LABEL_424;
        }
LABEL_423:
        if ( (unsigned __int64)(v264 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_410:
          if ( (unsigned __int64)(v266 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_411;
          goto LABEL_425;
        }
LABEL_424:
        sub_140001660(v256, v264, 1);
        if ( (unsigned __int64)(v266 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_411:
          sub_140001660(v255, v266, 1);
          if ( (unsigned __int64)(v270 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_412;
          goto LABEL_426;
        }
LABEL_425:
        if ( (unsigned __int64)(v270 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_412:
          if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_413;
          goto LABEL_427;
        }
LABEL_426:
        sub_140001660(v257, v270, 1);
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_413:
          sub_140001660(v259, v274, 1);
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_414;
          goto LABEL_428;
        }
LABEL_427:
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_414:
          if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_415;
          goto LABEL_429;
        }
LABEL_428:
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_415:
          sub_140001660(v263, v276, 1);
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_416;
          goto LABEL_430;
        }
LABEL_429:
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_416:
          if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_417;
          goto LABEL_431;
        }
LABEL_430:
        sub_140001660(v265, v278, 1);
        if ( (unsigned __int64)(v279 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_417:
          sub_140001660(v268, v279, 1);
          if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_418;
          goto LABEL_432;
        }
LABEL_431:
        if ( (unsigned __int64)(v281 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_418:
          if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_419;
          goto LABEL_433;
        }
LABEL_432:
        sub_140001660(v269, v281, 1);
        if ( (unsigned __int64)(v277 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_419:
          sub_140001660(v271, v277, 1);
          if ( !v280 )
          {
LABEL_435:
            if ( v282 )
              sub_140001660(v254.m128i_i64[0], v282, 1);
            goto LABEL_492;
          }
LABEL_434:
          sub_140001660(v273, v280, 1);
          goto LABEL_435;
        }
LABEL_433:
        if ( !v280 )
          goto LABEL_435;
        goto LABEL_434;
      }
      v208 = *(_QWORD *)&v196[8];
      v212 = *(_BYTE **)v196;
      v199 = _mm_loadu_si128((const __m128i *)&v196[8]);
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aAsrdurationms_0;
      v140.m128i_i64[1] = 13;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140975350(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 != 0xFF )
      {
        LOBYTE(v261) = BYTE1(v195);
        v12 = *(unsigned int *)((char *)&v195 + 2);
        v13 = HIWORD(v195);
        v9 = _mm_loadu_si128((const __m128i *)v196);
        v10 = *(_QWORD *)&v196[16];
        if ( (unsigned __int64)(v212 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v253 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_441:
            if ( (unsigned __int64)(v258 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_442;
            goto LABEL_460;
          }
        }
        else
        {
          sub_140001660(v208, v212, 1);
          if ( (unsigned __int64)(v253 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_441;
        }
        sub_140001660(Address, v253, 1);
        if ( (unsigned __int64)(v258 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_442:
          sub_140001660(v250, v258, 1);
          if ( (unsigned __int64)(v260 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_443;
          goto LABEL_461;
        }
LABEL_460:
        if ( (unsigned __int64)(v260 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_443:
          if ( (unsigned __int64)(v264 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_444;
          goto LABEL_462;
        }
LABEL_461:
        sub_140001660(v252, v260, 1);
        if ( (unsigned __int64)(v264 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_444:
          sub_140001660(v256, v264, 1);
          if ( (unsigned __int64)(v266 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_445;
          goto LABEL_463;
        }
LABEL_462:
        if ( (unsigned __int64)(v266 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_445:
          if ( (unsigned __int64)(v270 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_446;
          goto LABEL_464;
        }
LABEL_463:
        sub_140001660(v255, v266, 1);
        if ( (unsigned __int64)(v270 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_446:
          sub_140001660(v257, v270, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_447;
          goto LABEL_465;
        }
LABEL_464:
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_447:
          if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_448;
          goto LABEL_466;
        }
LABEL_465:
        sub_140001660(v259, v274, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_448:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_449;
          goto LABEL_467;
        }
LABEL_466:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_449:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_450;
          goto LABEL_468;
        }
LABEL_467:
        sub_140001660(v263, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_450:
          sub_140001660(v265, v278, 1);
          if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_451;
          goto LABEL_469;
        }
LABEL_468:
        if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_451:
          if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_452;
          goto LABEL_470;
        }
LABEL_469:
        sub_140001660(v268, v279, 1);
        if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_452:
          sub_140001660(v269, v281, 1);
          if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_453;
          goto LABEL_471;
        }
LABEL_470:
        if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_453:
          if ( !v280 )
            goto LABEL_455;
          goto LABEL_454;
        }
LABEL_471:
        sub_140001660(v271, v277, 1);
        if ( !v280 )
        {
LABEL_455:
          if ( v282 )
            sub_140001660(v254.m128i_i64[0], v282, 1);
          goto LABEL_492;
        }
LABEL_454:
        sub_140001660(v273, v280, 1);
        goto LABEL_455;
      }
      v200 = _mm_loadu_si128((const __m128i *)v196);
      v142 = 0;
      *(_QWORD *)&v139 = aGenerateVoiceP;
      *((_QWORD *)&v139 + 1) = 21;
      v140.m128i_i64[0] = (__int64)aAsrerrorcode_0;
      v140.m128i_i64[1] = 12;
      v141.m128i_i64[0] = (__int64)v272;
      v141.m128i_i64[1] = (__int64)v267;
      sub_140973410(&v195, &v139);
      v8 = (char)v195;
      if ( (_BYTE)v195 == 0xFF )
      {
        v114 = *(_QWORD *)&v196[16];
        v115 = v272;
        v116 = v272 + 544;
        v254 = *(__m128i *)v196;
        sub_141684120(v272 + 560, &v125, 152);
        *((_QWORD *)v115 + 140) = v11;
        v117 = v115;
        *((_QWORD *)v115 + 89) = v282;
        *((__m128i *)v115 + 45) = v46;
        *((_QWORD *)v115 + 92) = v280;
        *(_OWORD *)(v115 + 744) = v81;
        *((_QWORD *)v115 + 95) = v277;
        *((_OWORD *)v115 + 48) = v83;
        *((_QWORD *)v115 + 98) = v281;
        *(_OWORD *)(v115 + 792) = v85;
        *((_QWORD *)v115 + 101) = v279;
        *((_OWORD *)v115 + 51) = v89;
        *((_QWORD *)v115 + 104) = v278;
        *(_OWORD *)(v115 + 840) = v94;
        *((_QWORD *)v115 + 107) = v276;
        *((_OWORD *)v115 + 54) = v100;
        *((_QWORD *)v115 + 110) = v275;
        *(_OWORD *)(v115 + 888) = v108;
        v115[1145] = v261;
        *((_QWORD *)v115 + 113) = v274;
        *((_OWORD *)v115 + 57) = v110;
        *((_QWORD *)v115 + 116) = v270;
        *(_OWORD *)(v115 + 936) = v111;
        *((_QWORD *)v115 + 119) = v266;
        *((__m128i *)v115 + 60) = v209;
        *((_QWORD *)v115 + 122) = v264;
        *(__m128i *)(v115 + 984) = v210;
        *((_QWORD *)v115 + 125) = v260;
        *((__m128i *)v115 + 63) = v211;
        *((_QWORD *)v115 + 128) = v258;
        *(__m128i *)(v115 + 1032) = v207;
        *((_QWORD *)v115 + 131) = v253;
        *((__m128i *)v115 + 66) = v206;
        *((_QWORD *)v115 + 134) = v212;
        *(__m128i *)(v115 + 1080) = v199;
        *((__m128i *)v115 + 34) = v200;
        *(__m128i *)(v115 + 1096) = _mm_load_si128(&v254);
        *((_QWORD *)v115 + 139) = v114;
        v115[1144] = 0;
        v16 = v115 + 1168;
        sub_141684120(v16, v116, 624);
        a2 = v117;
        v199.m128i_i64[0] = (__int64)(v117 + 2416);
        v117[2416] = 0;
LABEL_7:
        v212 = a2 + 1792;
        v17 = a2;
        v200.m128i_i64[0] = (__int64)v16;
        sub_141684120(a2 + 1792, v16, 624);
        a2 = v17;
        switch ( v17[2392] )
        {
          case 0:
            goto LABEL_9;
          case 1:
            goto LABEL_358;
          case 2:
            goto LABEL_356;
          case 3:
            goto LABEL_42;
        }
      }
      LOBYTE(v261) = BYTE1(v195);
      v12 = *(unsigned int *)((char *)&v195 + 2);
      v13 = HIWORD(v195);
      v9 = _mm_loadu_si128((const __m128i *)v196);
      v10 = *(_QWORD *)&v196[16];
      if ( (unsigned __int64)(v212 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( (unsigned __int64)(v253 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_476:
          if ( (unsigned __int64)(v258 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_477;
          goto LABEL_505;
        }
      }
      else
      {
        sub_140001660(v208, v212, 1);
        if ( (unsigned __int64)(v253 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_476;
      }
      sub_140001660(Address, v253, 1);
      if ( (unsigned __int64)(v258 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_477:
        sub_140001660(v250, v258, 1);
        if ( (unsigned __int64)(v260 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_478;
        goto LABEL_506;
      }
LABEL_505:
      if ( (unsigned __int64)(v260 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_478:
        if ( (unsigned __int64)(v264 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_479;
        goto LABEL_507;
      }
LABEL_506:
      sub_140001660(v252, v260, 1);
      if ( (unsigned __int64)(v264 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_479:
        sub_140001660(v256, v264, 1);
        if ( (unsigned __int64)(v266 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_480;
        goto LABEL_508;
      }
LABEL_507:
      if ( (unsigned __int64)(v266 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_480:
        if ( (unsigned __int64)(v270 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_481;
        goto LABEL_509;
      }
LABEL_508:
      sub_140001660(v255, v266, 1);
      if ( (unsigned __int64)(v270 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_481:
        sub_140001660(v257, v270, 1);
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_482;
        goto LABEL_510;
      }
LABEL_509:
      if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_482:
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_483;
        goto LABEL_511;
      }
LABEL_510:
      sub_140001660(v259, v274, 1);
      if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_483:
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_484;
        goto LABEL_512;
      }
LABEL_511:
      if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_484:
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_485;
        goto LABEL_513;
      }
LABEL_512:
      sub_140001660(v263, v276, 1);
      if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_485:
        sub_140001660(v265, v278, 1);
        if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_486;
        goto LABEL_514;
      }
LABEL_513:
      if ( (unsigned __int64)(v279 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_486:
        if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_487;
        goto LABEL_515;
      }
LABEL_514:
      sub_140001660(v268, v279, 1);
      if ( (unsigned __int64)(v281 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_487:
        sub_140001660(v269, v281, 1);
        if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_488;
        goto LABEL_516;
      }
LABEL_515:
      if ( (unsigned __int64)(v277 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_488:
        if ( !v280 )
          goto LABEL_490;
        goto LABEL_489;
      }
LABEL_516:
      sub_140001660(v271, v277, 1);
      if ( v280 )
LABEL_489:
        sub_140001660(v273, v280, 1);
LABEL_490:
      if ( v282 )
        sub_140001660(v254.m128i_i64[0], v282, 1);
LABEL_492:
      sub_140014150(&v125);
LABEL_493:
      v7 = v12 | (v13 << 32);
LABEL_494:
      sub_140BF0DE0(v272);
      LOBYTE(v71) = v261;
      if ( *v267 == -1 )
      {
        v74 = 1;
        goto LABEL_501;
      }
      v280 = v272 + 528;
      v112 = *((_QWORD *)v272 + 66);
      v254.m128i_i64[0] = *((_QWORD *)v272 + 67);
      v282 = 0;
      v273 = v112;
      while ( v254.m128i_i64[0] != v282 )
      {
        ++v282;
        v113 = v112 + 96;
        sub_1402C7520();
        v112 = v113;
      }
      v80 = *v267;
      v74 = 1;
      if ( *v267 )
        goto LABEL_499;
      goto LABEL_501;
    case 1LL:
      sub_1416C3400(&off_1417B9768, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B9768, a2, a3, a4);
    case 3LL:
      v14 = a2 + 2416;
      v15 = (unsigned __int8)a2[2416];
      v16 = a2 + 1168;
      v199.m128i_i64[0] = (__int64)(a2 + 2416);
      switch ( v15 )
      {
        case 0LL:
          goto LABEL_7;
        case 1LL:
          v202 = a2 + 2416;
          v201 = a2 + 1168;
          sub_1416C3400(&off_1417B7B80, a2, v14, a4);
        case 2LL:
          v202 = a2 + 2416;
          v201 = a2 + 1168;
          sub_1416C3420(&off_1417B7B80, a2, v14, a4);
        case 3LL:
          v200.m128i_i64[0] = (__int64)(a2 + 1168);
          v212 = a2 + 1792;
          switch ( a2[2392] )
          {
            case 0:
LABEL_9:
              a2[2411] = 1;
              v18 = a2;
              sub_141684120(v121, a2 + 1808, 152);
              v20 = *((volatile void **)v18 + 296);
              *((_QWORD *)v18 + 297) = v20;
              v18[2410] = 1;
              v273 = *((_QWORD *)v18 + 245);
              v270 = *((_QWORD *)v18 + 246);
              v206.m128i_i64[0] = *((_QWORD *)v18 + 248);
              v136 = *(_OWORD *)(v18 + 1976);
              v257 = *((_QWORD *)v18 + 249);
              v190 = *((_QWORD *)v18 + 250);
              v261 = *((_QWORD *)v18 + 251);
              v266 = *((_QWORD *)v18 + 252);
              v209.m128i_i64[0] = *((_QWORD *)v18 + 254);
              v137 = *(_OWORD *)(v18 + 2024);
              v255 = *((_QWORD *)v18 + 255);
              v264 = *((_QWORD *)v18 + 257);
              v138 = *((__m128i *)v18 + 128);
              v271 = *((_QWORD *)v18 + 258);
              v256 = *((_QWORD *)v18 + 260);
              v21 = *(_OWORD *)(v18 + 2072);
              v22 = *((_OWORD *)v18 + 131);
              v23 = *(_OWORD *)(v18 + 2120);
              v24 = *(_OWORD *)(v18 + 2168);
              v25 = *(_OWORD *)(v18 + 2216);
              v26 = *(_OWORD *)(v18 + 2264);
              v27 = *((_OWORD *)v18 + 143);
              v28 = *(_OWORD *)(v18 + 2312);
              v29 = *((_OWORD *)v18 + 112);
              v213 = v18[2393];
              v281 = *((_QWORD *)v18 + 261);
              v210.m128i_i64[0] = *((_QWORD *)v18 + 263);
              v269 = *((_QWORD *)v18 + 264);
              v260 = *((_QWORD *)v18 + 266);
              v279 = *((_QWORD *)v18 + 267);
              v191 = *((_QWORD *)v18 + 268);
              v282 = *((_QWORD *)v18 + 269);
              v268 = *((_QWORD *)v18 + 270);
              v252 = *((_QWORD *)v18 + 272);
              v278 = *((_QWORD *)v18 + 273);
              v193 = *((_QWORD *)v18 + 274);
              v254.m128i_i64[0] = *((_QWORD *)v18 + 275);
              v265 = *((_QWORD *)v18 + 276);
              v211.m128i_i64[0] = *((_QWORD *)v18 + 278);
              v276 = *((_QWORD *)v18 + 279);
              v194 = *((_QWORD *)v18 + 280);
              v267 = *((_QWORD **)v18 + 281);
              v263 = *((_QWORD *)v18 + 282);
              v258 = *((_QWORD *)v18 + 284);
              v275 = *((_QWORD *)v18 + 285);
              v250 = *((_QWORD *)v18 + 287);
              v262 = *((_QWORD *)v18 + 288);
              v207.m128i_i64[0] = *((_QWORD *)v18 + 290);
              v274 = *((_QWORD *)v18 + 291);
              *(__m128i *)(v18 + 2394) = _mm_load_si128((const __m128i *)&xmmword_141786340);
              v30 = _mm_loadu_si128((const __m128i *)v18 + 146);
              LOBYTE(v31) = 1;
              v253 = *((_QWORD *)v18 + 293);
              v259 = *((_QWORD *)v18 + 294);
              v192 = *((_QWORD *)v18 + 295);
              if ( _InterlockedCompareExchange8((volatile signed __int8 *)v20, 1, 0) )
              {
                v247 = v273;
                v246 = v270;
                v245 = v206.m128i_i64[0];
                v244 = v257;
                v243 = v261;
                v242 = v266;
                v241 = v209.m128i_i64[0];
                v240 = v255;
                v239 = v264;
                v238 = v271;
                v237 = v256;
                v236 = v281;
                v235 = v210.m128i_i64[0];
                v234 = v269;
                v233 = v260;
                v232 = v279;
                v231 = v282;
                v230 = v268;
                v229 = v252;
                v228 = v278;
                v227 = v254.m128i_i64[0];
                v226 = v265;
                v225 = v211.m128i_i64[0];
                v224 = v276;
                v223 = v267;
                v222 = v263;
                v221 = v258;
                v220 = v275;
                v219 = v250;
                v218 = v262;
                v217 = v207.m128i_i64[0];
                v216 = v274;
                v215 = v253;
                v214 = v259;
                sub_1416C15B0(v20);
              }
              Address = (PVOID)v20;
              v32 = off_141EC90B8;
              if ( 2 * *off_141EC90B8 )
              {
                v247 = v273;
                v246 = v270;
                v245 = v206.m128i_i64[0];
                v244 = v257;
                v243 = v261;
                v242 = v266;
                v241 = v209.m128i_i64[0];
                v240 = v255;
                v239 = v264;
                v238 = v271;
                v237 = v256;
                v236 = v281;
                v235 = v210.m128i_i64[0];
                v234 = v269;
                v233 = v260;
                v232 = v279;
                v231 = v282;
                v230 = v268;
                v229 = v252;
                v228 = v278;
                v227 = v254.m128i_i64[0];
                v226 = v265;
                v225 = v211.m128i_i64[0];
                v224 = v276;
                v223 = v267;
                v222 = v263;
                v221 = v258;
                v220 = v275;
                v219 = v250;
                v218 = v262;
                v217 = v207.m128i_i64[0];
                v216 = v274;
                v215 = v253;
                v214 = v259;
                v107 = sub_1416C2250(v31, v19);
                LOBYTE(v107) = v107 ^ 1;
                LODWORD(v208) = v107;
                v33 = (char *)Address;
                if ( !*((_BYTE *)Address + 1) )
                  goto LABEL_28;
              }
              else
              {
                LODWORD(v208) = 0;
                v33 = (char *)Address;
                if ( !*((_BYTE *)Address + 1) )
                  goto LABEL_28;
              }
              v122 = nullptr;
              v123 = 1;
              v124 = 0;
              v140.m128i_i64[0] = 1610612768;
              *(_QWORD *)&v139 = &v122;
              *((_QWORD *)&v139 + 1) = &off_1417C41C0;
              if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v139) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v249,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v280 = v122;
              v277 = v123;
              v36 = (unsigned __int8)v124;
              v37 = HIBYTE(v124);
              v38 = *(unsigned __int16 *)((char *)&v124 + 5);
              v39 = *(unsigned int *)((char *)&v124 + 1);
              if ( !(_BYTE)v208 )
              {
                if ( 2 * *v32 )
                {
                  v247 = v273;
                  v246 = v270;
                  v245 = v206.m128i_i64[0];
                  v244 = v257;
                  v243 = v261;
                  v242 = v266;
                  v241 = v209.m128i_i64[0];
                  v240 = v255;
                  v239 = v264;
                  v238 = v271;
                  v237 = v256;
                  v236 = v281;
                  v235 = v210.m128i_i64[0];
                  v234 = v269;
                  v233 = v260;
                  v232 = v279;
                  v231 = v282;
                  v230 = v268;
                  v229 = v252;
                  v228 = v278;
                  v227 = v254.m128i_i64[0];
                  v226 = v265;
                  v225 = v211.m128i_i64[0];
                  v224 = v276;
                  v223 = v267;
                  v222 = v263;
                  v221 = v258;
                  v220 = v275;
                  v219 = v250;
                  v218 = v262;
                  v217 = v207.m128i_i64[0];
                  v216 = v274;
                  v215 = v253;
                  v214 = v259;
                  if ( !(unsigned __int8)sub_1416C2250(v35, v34) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v40 = Address;
              v41 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v41 == 2 )
              {
                v247 = v273;
                v246 = v270;
                v245 = v206.m128i_i64[0];
                v244 = v257;
                v243 = v261;
                v242 = v266;
                v241 = v209.m128i_i64[0];
                v240 = v255;
                v239 = v264;
                v238 = v271;
                v237 = v256;
                v236 = v281;
                v235 = v210.m128i_i64[0];
                v234 = v269;
                v233 = v260;
                v232 = v279;
                v231 = v282;
                v230 = v268;
                v229 = v252;
                v228 = v278;
                v227 = v254.m128i_i64[0];
                v226 = v265;
                v225 = v211.m128i_i64[0];
                v224 = v276;
                v223 = v267;
                v222 = v263;
                v221 = v258;
                v220 = v275;
                v219 = v250;
                v218 = v262;
                v217 = v207.m128i_i64[0];
                v216 = v274;
                v215 = v253;
                v214 = v259;
                WakeByAddressSingle(v40);
              }
              if ( v280 != (_QWORD *)-1LL )
              {
                v42 = ((unsigned __int64)((v37 << 16) | v38) << 32) | v39;
                goto LABEL_53;
              }
              v33 = (char *)v277;
              LODWORD(v208) = v36;
LABEL_28:
              Address = v33;
              sub_1407BC950(&v125, v33 + 8);
              if ( (v208 & 1) == 0 )
              {
                if ( 2 * *v32 )
                {
                  v247 = v273;
                  v246 = v270;
                  v245 = v206.m128i_i64[0];
                  v244 = v257;
                  v243 = v261;
                  v242 = v266;
                  v241 = v209.m128i_i64[0];
                  v240 = v255;
                  v239 = v264;
                  v238 = v271;
                  v237 = v256;
                  v236 = v281;
                  v235 = v210.m128i_i64[0];
                  v234 = v269;
                  v233 = v260;
                  v232 = v279;
                  v231 = v282;
                  v230 = v268;
                  v229 = v252;
                  v228 = v278;
                  v227 = v254.m128i_i64[0];
                  v226 = v265;
                  v225 = v211.m128i_i64[0];
                  v224 = v276;
                  v223 = v267;
                  v222 = v263;
                  v221 = v258;
                  v220 = v275;
                  v219 = v250;
                  v218 = v262;
                  v217 = v207.m128i_i64[0];
                  v216 = v274;
                  v215 = v253;
                  v214 = v259;
                  if ( !(unsigned __int8)sub_1416C2250(v48, v47) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v49 = Address;
              v50 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v50 == 2 )
              {
                v247 = v273;
                v246 = v270;
                v245 = v206.m128i_i64[0];
                v244 = v257;
                v243 = v261;
                v242 = v266;
                v241 = v209.m128i_i64[0];
                v240 = v255;
                v239 = v264;
                v238 = v271;
                v237 = v256;
                v236 = v281;
                v235 = v210.m128i_i64[0];
                v234 = v269;
                v233 = v260;
                v232 = v279;
                v231 = v282;
                v230 = v268;
                v229 = v252;
                v228 = v278;
                v227 = v254.m128i_i64[0];
                v226 = v265;
                v225 = v211.m128i_i64[0];
                v224 = v276;
                v223 = v267;
                v222 = v263;
                v221 = v258;
                v220 = v275;
                v219 = v250;
                v218 = v262;
                v217 = v207.m128i_i64[0];
                v216 = v274;
                v215 = v253;
                v214 = v259;
                WakeByAddressSingle(v49);
              }
              v51 = v272 + 2394;
              *(_OWORD *)(v272 + 2394) = 0;
              *((_WORD *)v51 + 8) = 0;
              v155 = v254.m128i_i64[0];
              v156 = v265;
              v157 = v25;
              v158 = v276;
              v159 = v194;
              v160 = v282;
              v161 = v268;
              v162 = v24;
              v163 = v278;
              v164 = v193;
              sub_141684120(&v140, v121, 152);
              sub_141684120(v149, &v125, 992);
              v150 = v273;
              v151 = v270;
              v152 = v136;
              v153 = v257;
              v154 = v190;
              v165 = v261;
              v166 = v266;
              v167 = v137;
              v168 = v255;
              v169 = _mm_load_si128(&v138);
              v170 = v271;
              v171 = v21;
              v172 = v281;
              v173 = v22;
              v174 = v269;
              v175 = v23;
              v176 = v279;
              v177 = v191;
              v189 = v213;
              v178 = v267;
              v179 = v263;
              v180 = v26;
              v181 = v275;
              v182 = v27;
              v183 = v262;
              v184 = v28;
              v185 = v274;
              v139 = v29;
              v186 = v30;
              v187 = v259;
              v188 = v192;
              v52 = off_141EC8710;
              if ( *((_DWORD *)off_141EC8710 + 24) )
              {
                v251 = 1;
                v109 = off_141EC8710;
                sub_1416984A3(off_141EC8710);
                v52 = v109;
              }
              if ( *((_DWORD *)v52 + 4) == 2 )
              {
                v53 = 704;
                if ( *(_BYTE *)v52 )
                  v53 = 472;
                v54 = v52[1] + v53;
                v251 = 0;
                v55 = sub_140898C70(v54, v52, &v139, &off_1417642A8);
              }
              else
              {
                v56 = 704;
                if ( *((_BYTE *)v52 + 64) )
                  v56 = 472;
                v57 = v52[9] + v56;
                v251 = 0;
                v55 = sub_140898C70(v57, v52 + 8, &v139, &off_141764290);
              }
              a2 = v272;
              *((_QWORD *)v272 + 298) = v55;
LABEL_42:
              Address = a2 + 2384;
              sub_140AFFEB0(&v139, a2 + 2384, a3);
              v58 = v139;
              if ( (_QWORD)v139 == -2 )
              {
                v59 = v272;
                v272[2392] = 3;
                v59[2416] = 3;
                *(_QWORD *)a1 = 2;
                result = 3;
                goto LABEL_502;
              }
              if ( (_DWORD)v139 == -1 )
              {
                v277 = *((_QWORD *)&v139 + 1);
                LOBYTE(v36) = v140.m128i_i8[0];
                v42 = ((unsigned __int64)((v140.m128i_u8[7] << 16)
                                        | (unsigned int)*(unsigned __int16 *)((char *)&v140.m128i_u16[2] + 1)) << 32)
                    | *(unsigned int *)((char *)v140.m128i_u32 + 1);
                v280 = (_QWORD *)0x800000000000000CLL;
                v7 = v140.m128i_u64[1];
              }
              else
              {
                v280 = *((_QWORD **)&v139 + 1);
                v277 = v140.m128i_i64[0];
                LOBYTE(v36) = v140.m128i_i8[8];
                v42 = ((unsigned __int64)((v140.m128i_u8[15] << 16)
                                        | (unsigned int)*(unsigned __int16 *)((char *)&v140.m128i_u16[6] + 1)) << 32)
                    | *(unsigned int *)((char *)&v140.m128i_u32[2] + 1);
                v7 = v141.m128i_i64[0];
                sub_141684120(&v122, &v141.m128i_u64[1], 680);
              }
              sub_141684120(&v119, &v122, 680);
              v61 = *(_QWORD *)Address;
              v247 = v273;
              v246 = v270;
              v245 = v206.m128i_i64[0];
              v244 = v257;
              v243 = v261;
              v242 = v266;
              v241 = v209.m128i_i64[0];
              v240 = v255;
              v239 = v264;
              v238 = v271;
              v237 = v256;
              v236 = v281;
              v235 = v210.m128i_i64[0];
              v234 = v269;
              v233 = v260;
              v232 = v279;
              v231 = v282;
              v230 = v268;
              v229 = v252;
              v228 = v278;
              v227 = v254.m128i_i64[0];
              v226 = v265;
              v225 = v211.m128i_i64[0];
              v224 = v276;
              v223 = v267;
              v222 = v263;
              v221 = v258;
              v220 = v275;
              v219 = v250;
              v218 = v262;
              v217 = v207.m128i_i64[0];
              v216 = v274;
              v215 = v253;
              v214 = v259;
              if ( (unsigned __int8)sub_1412F2A80(v61) )
              {
                v247 = v273;
                v246 = v270;
                v245 = v206.m128i_i64[0];
                v244 = v257;
                v243 = v261;
                v242 = v266;
                v241 = v209.m128i_i64[0];
                v240 = v255;
                v239 = v264;
                v238 = v271;
                v237 = v256;
                v236 = v281;
                v235 = v210.m128i_i64[0];
                v234 = v269;
                v233 = v260;
                v232 = v279;
                v231 = v282;
                v230 = v268;
                v229 = v252;
                v228 = v278;
                v227 = v254.m128i_i64[0];
                v226 = v265;
                v225 = v211.m128i_i64[0];
                v224 = v276;
                v223 = v267;
                v222 = v263;
                v221 = v258;
                v220 = v275;
                v219 = v250;
                v218 = v262;
                v217 = v207.m128i_i64[0];
                v216 = v274;
                v215 = v253;
                v214 = v259;
                sub_1412E7580(v61);
              }
              if ( (_DWORD)v58 != -1 )
              {
                sub_141684120(v118, &v119, 680);
                v63 = v272;
                *(_OWORD *)(v272 + 2394) = 0;
                *((_WORD *)v63 + 1205) = 0;
                goto LABEL_105;
              }
              *(_QWORD *)&v139 = v280;
              *((_QWORD *)&v139 + 1) = v277;
              v140.m128i_i8[0] = v36;
              *(__int32 *)((char *)v140.m128i_i32 + 1) = v42;
              v140.m128i_i8[7] = BYTE6(v42);
              *(__int16 *)((char *)&v140.m128i_i16[2] + 1) = WORD2(v42);
              v140.m128i_i64[1] = v7;
              v141 = _mm_loadu_si128(&v119);
              v203 = nullptr;
              v204 = 1;
              v205 = 0;
              v124 = 1610612768;
              v122 = &v203;
              v123 = (__int64)&off_1417C41C0;
              if ( (unsigned __int8)sub_141230630(&v139, &v122, v62) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v249,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v280 = v203;
              v277 = v204;
              LOBYTE(v36) = v205;
              v64 = HIBYTE(v205);
              v65 = *(unsigned __int16 *)((char *)&v205 + 5);
              v66 = *(unsigned int *)((char *)&v205 + 1);
              v247 = v273;
              v246 = v270;
              v245 = v206.m128i_i64[0];
              v244 = v257;
              v243 = v261;
              v242 = v266;
              v241 = v209.m128i_i64[0];
              v240 = v255;
              v239 = v264;
              v238 = v271;
              v237 = v256;
              v236 = v281;
              v235 = v210.m128i_i64[0];
              v234 = v269;
              v233 = v260;
              v232 = v279;
              v231 = v282;
              v230 = v268;
              v229 = v252;
              v228 = v278;
              v227 = v254.m128i_i64[0];
              v226 = v265;
              v225 = v211.m128i_i64[0];
              v224 = v276;
              v223 = v267;
              v222 = v263;
              v221 = v258;
              v220 = v275;
              v219 = v250;
              v218 = v262;
              v217 = v207.m128i_i64[0];
              v216 = v274;
              v215 = v253;
              v214 = v259;
              sub_140BF0F60(&v139);
              v42 = ((unsigned __int64)((v64 << 16) | v65) << 32) | v66;
LABEL_53:
              v67 = v272;
              v68 = v273;
              v7 = v206.m128i_i64[0];
              if ( v272[2394] == 1 && (unsigned __int64)(v253 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v259, v253, 1);
              v67[2394] = 0;
              if ( v67[2395] == 1 && (unsigned __int64)(v207.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v274, v207.m128i_i64[0], 1);
              v67[2395] = 0;
              if ( v67[2396] == 1 && (unsigned __int64)(v250 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v262, v250, 1);
              v67[2396] = 0;
              if ( v67[2397] == 1 && (unsigned __int64)(v258 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v275, v258, 1);
              v67[2397] = 0;
              if ( v67[2398] == 1 && (unsigned __int64)v267 - 1 < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v263, v267, 1);
              v67[2398] = 0;
              if ( v67[2399] == 1 && (unsigned __int64)(v211.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v276, v211.m128i_i64[0], 1);
              v67[2399] = 0;
              if ( v67[2400] == 1 && (unsigned __int64)(v254.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v265, v254.m128i_i64[0], 1);
              v67[2400] = 0;
              if ( v67[2401] == 1 && (unsigned __int64)(v252 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v278, v252, 1);
              v67[2401] = 0;
              if ( v67[2402] == 1 && (unsigned __int64)(v282 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v268, v282, 1);
              v67[2402] = 0;
              if ( v67[2403] == 1 && (unsigned __int64)(v260 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v279, v260, 1);
              v67[2403] = 0;
              if ( v67[2404] == 1 && (unsigned __int64)(v210.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v269, v210.m128i_i64[0], 1);
              v67[2404] = 0;
              if ( v67[2405] == 1 && (unsigned __int64)(v256 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v281, v256, 1);
              v67[2405] = 0;
              if ( v67[2406] == 1 && (unsigned __int64)(v264 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v271, v264, 1);
              v67[2406] = 0;
              if ( v67[2407] == 1 && (unsigned __int64)(v209.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v255, v209.m128i_i64[0], 1);
              v67[2407] = 0;
              if ( v67[2408] == 1 && (unsigned __int64)(v261 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v266, v261, 1);
              v67[2408] = 0;
              if ( ((v7 != 0) & v67[2409]) != 0 )
                sub_140001660(v257, v7, 1);
              v67[2409] = 0;
              if ( ((v68 != 0) & v67[2410]) != 0 )
                sub_140001660(v270, v68, 1);
              v67[2410] = 0;
              if ( v67[2411] )
                sub_140014150(v121);
              v63 = v272;
              v272[2411] = 0;
              v58 = 2;
LABEL_105:
              v69 = v212;
              v63[2392] = 1;
              sub_140BEA6E0(v69);
              v71 = v42 << 8;
              v10 = v71 | (unsigned __int8)v36;
              if ( (_DWORD)v58 == 2 )
              {
                if ( v71 < 0 )
                {
                  v72 = 0;
                  goto LABEL_108;
                }
                v74 = 1;
                v75 = 1;
                if ( v10 )
                {
                  nullsub_1(v70);
                  v72 = 1;
                  v76 = sub_140001650(v10, 1);
                  if ( !v76 )
LABEL_108:
                    sub_1416C2D4B(v72, v10);
                  v75 = v76;
                  sub_141684120(v76, v277, v10);
                }
                v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v75);
                v8 = 3;
                if ( v280 )
                  sub_140001660(v277, v280, 1);
              }
              else
              {
                sub_141684120(v198, v118, 680);
                v195 = (const char *)v58;
                *(_QWORD *)v196 = v280;
                *(_QWORD *)&v196[8] = v277;
                *(_QWORD *)&v196[16] = v71 | (unsigned __int8)v36;
                v197 = (_BYTE *)v7;
                sub_140B07940(&v139, &v195);
                v7 = *(unsigned int *)((char *)&v139 + 10) | ((unsigned __int64)HIWORD(v139) << 32);
                v8 = BYTE8(v139);
                LOBYTE(v71) = BYTE9(v139);
                v9 = _mm_loadu_si128(&v140);
                v10 = v141.m128i_i64[0];
                if ( (_QWORD)v139 == -1 )
                {
                  v74 = 0;
                }
                else
                {
                  v140 = v9;
                  v119.m128i_i64[0] = 0;
                  v119.m128i_i64[1] = 1;
                  v120 = 0;
                  v127.m128i_i64[0] = 1610612768;
                  v125 = &v119;
                  v126 = &off_1417C41C0;
                  if ( (unsigned __int8)sub_141230630(&v139, &v125, v73) )
                    sub_1416C3060(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v249,
                      (unsigned int)&unk_1417BC180,
                      (__int64)&off_1417C4278);
                  v9 = _mm_load_si128(&v119);
                  v10 = v120;
                  sub_140BF0F60(&v139);
                  v74 = 1;
                  v8 = 3;
                }
              }
              v77 = v272;
              v272[2416] = 1;
              sub_140BF0DE0(v77);
              if ( *((_QWORD *)v272 + 65) != -1 )
              {
                v280 = v272 + 528;
                v78 = *((_QWORD **)v272 + 66);
                v254.m128i_i64[0] = *((_QWORD *)v272 + 67);
                v282 = 0;
                v267 = v78;
                while ( v254.m128i_i64[0] != v282 )
                {
                  ++v282;
                  v79 = v78 + 12;
                  sub_1402C7520();
                  v78 = v79;
                }
                v80 = *((_QWORD *)v272 + 65);
                if ( v80 )
LABEL_499:
                  sub_140001660(*v280, 96 * v80, 8);
              }
LABEL_501:
              *(_QWORD *)a1 = v74;
              *(_BYTE *)(a1 + 8) = v8;
              *(_BYTE *)(a1 + 9) = v71;
              *(_DWORD *)(a1 + 10) = v7;
              *(_WORD *)(a1 + 14) = WORD2(v7);
              *(__m128i *)(a1 + 16) = v9;
              *(_QWORD *)(a1 + 32) = v10;
              result = 1;
              v59 = v272;
LABEL_502:
              v59[2424] = result;
              return result;
            case 1:
LABEL_358:
              sub_1416C3400(&off_1417BB090, a2, v14, a4);
            case 2:
LABEL_356:
              sub_1416C3420(&off_1417BB090, a2, v14, a4);
            case 3:
              goto LABEL_42;
          }
      }
  }
}