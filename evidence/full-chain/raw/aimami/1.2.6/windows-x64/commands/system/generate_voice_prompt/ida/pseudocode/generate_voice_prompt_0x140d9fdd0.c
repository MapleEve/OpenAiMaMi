// Pseudocode for generate_voice_prompt (EA: 0x140d9fdd0, size: 0x5dee)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
char __fastcall sub_140D9FDD0(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v7; // r14
  __m128i v8; // xmm6
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rax
  _BYTE *v14; // r15
  _BYTE *v15; // rdi
  _BYTE *v16; // rdi
  volatile void *v17; // r14
  __int128 v18; // xmm9
  __int128 v19; // xmm10
  __int128 v20; // xmm11
  __int128 v21; // xmm7
  __int128 v22; // xmm8
  __int128 v23; // xmm12
  __int128 v24; // xmm13
  __int128 v25; // xmm14
  __int128 v26; // xmm15
  __m128i v27; // xmm6
  __int64 v28; // rcx
  __int64 *v29; // rdi
  char *v30; // rcx
  __int64 v31; // rcx
  int v32; // r14d
  int v33; // r13d
  unsigned int v34; // r12d
  __int64 v35; // r15
  PVOID v36; // rcx
  char v37; // al
  unsigned __int64 v38; // r15
  __int64 v39; // r13
  __int64 v40; // r12
  __int128 v41; // kr00_16
  __m128i v42; // xmm6
  __int64 v43; // rcx
  PVOID v44; // rcx
  char v45; // al
  _BYTE *v46; // rax
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rbx
  _BYTE *v54; // rcx
  char result; // al
  __int64 v56; // rdi
  _BYTE *v57; // rax
  int v58; // ebx
  unsigned int v59; // edi
  __int64 v60; // r15
  _BYTE *v61; // rdi
  __int64 v62; // rbx
  _BYTE *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r15
  __int64 v69; // r14
  __int64 v70; // r13
  __int64 v71; // rbx
  __int64 v72; // rax
  _BYTE *v73; // rcx
  _QWORD *v74; // rcx
  _QWORD *v75; // rbx
  __int64 v76; // rax
  __int128 v77; // xmm7
  char v78; // r15
  __int128 v79; // xmm8
  char v80; // r15
  __int128 v81; // xmm9
  char v82; // r15
  __int64 v83; // rdx
  _QWORD *v84; // rdx
  __int128 v85; // xmm10
  char v86; // r15
  __int64 v87; // rdx
  __int64 v88; // rdx
  _QWORD *v89; // rdx
  __int128 v90; // xmm11
  char v91; // r15
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  _QWORD *v95; // rdx
  __int128 v96; // xmm12
  char v97; // r15
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  _QWORD *v102; // rdx
  int v103; // eax
  __int128 v104; // xmm13
  _QWORD *v105; // rdi
  __int128 v106; // xmm14
  __int128 v107; // xmm15
  __int64 v108; // rcx
  __int64 v109; // rbx
  __int64 v110; // r12
  _BYTE *v111; // r15
  _BYTE *v112; // r14
  _BYTE *v113; // rdi
  __int64 v114; // [rsp+20h] [rbp-60h]
  _BYTE v115[680]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v116; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v117; // [rsp+2E0h] [rbp+260h]
  _BYTE v118[152]; // [rsp+580h] [rbp+500h] BYREF
  _QWORD *v119; // [rsp+618h] [rbp+598h] BYREF
  __int64 v120; // [rsp+620h] [rbp+5A0h]
  __int64 v121; // [rsp+628h] [rbp+5A8h]
  __m128i *v122; // [rsp+8C0h] [rbp+840h] BYREF
  __int64 (__fastcall **v123)(); // [rsp+8C8h] [rbp+848h]
  __m128i v124; // [rsp+8D0h] [rbp+850h]
  __int64 v125; // [rsp+8E0h] [rbp+860h]
  __m128i v126; // [rsp+8E8h] [rbp+868h]
  __int128 v127; // [rsp+8F8h] [rbp+878h]
  __int128 v128; // [rsp+908h] [rbp+888h]
  __int128 v129; // [rsp+918h] [rbp+898h]
  __int128 v130; // [rsp+928h] [rbp+8A8h]
  __int128 v131; // [rsp+938h] [rbp+8B8h]
  __int128 v132; // [rsp+948h] [rbp+8C8h]
  __int128 v133; // [rsp+CA0h] [rbp+C20h]
  __int128 v134; // [rsp+CB0h] [rbp+C30h]
  __m128i v135; // [rsp+CC0h] [rbp+C40h] BYREF
  __int128 v136; // [rsp+CD0h] [rbp+C50h] BYREF
  __m128i v137; // [rsp+CE0h] [rbp+C60h] BYREF
  __m128i v138; // [rsp+CF0h] [rbp+C70h] BYREF
  __int64 v139; // [rsp+D00h] [rbp+C80h]
  __int128 v140; // [rsp+D08h] [rbp+C88h]
  __int128 v141; // [rsp+D18h] [rbp+C98h]
  __int128 v142; // [rsp+D28h] [rbp+CA8h]
  __int128 v143; // [rsp+D38h] [rbp+CB8h]
  __int128 v144; // [rsp+D48h] [rbp+CC8h]
  __int128 v145; // [rsp+D58h] [rbp+CD8h]
  char v146[992]; // [rsp+D78h] [rbp+CF8h] BYREF
  __int64 v147; // [rsp+1158h] [rbp+10D8h]
  __int64 v148; // [rsp+1160h] [rbp+10E0h]
  __int128 v149; // [rsp+1168h] [rbp+10E8h]
  __int64 v150; // [rsp+1178h] [rbp+10F8h]
  __int64 v151; // [rsp+1180h] [rbp+1100h]
  __int64 v152; // [rsp+1188h] [rbp+1108h]
  __int64 v153; // [rsp+1190h] [rbp+1110h]
  __int128 v154; // [rsp+1198h] [rbp+1118h]
  __int64 v155; // [rsp+11A8h] [rbp+1128h]
  __int64 v156; // [rsp+11B0h] [rbp+1130h]
  __int64 v157; // [rsp+11B8h] [rbp+1138h]
  __int64 v158; // [rsp+11C0h] [rbp+1140h]
  __int128 v159; // [rsp+11C8h] [rbp+1148h]
  __int64 v160; // [rsp+11D8h] [rbp+1158h]
  __int64 v161; // [rsp+11E0h] [rbp+1160h]
  __int64 v162; // [rsp+11E8h] [rbp+1168h]
  __int64 v163; // [rsp+11F0h] [rbp+1170h]
  __int128 v164; // [rsp+11F8h] [rbp+1178h]
  __int64 v165; // [rsp+1208h] [rbp+1188h]
  __m128i v166; // [rsp+1210h] [rbp+1190h]
  __int64 v167; // [rsp+1220h] [rbp+11A0h]
  __int128 v168; // [rsp+1228h] [rbp+11A8h]
  __int64 v169; // [rsp+1238h] [rbp+11B8h]
  __int128 v170; // [rsp+1240h] [rbp+11C0h]
  __int64 v171; // [rsp+1250h] [rbp+11D0h]
  __int128 v172; // [rsp+1258h] [rbp+11D8h]
  __int64 v173; // [rsp+1268h] [rbp+11E8h]
  __int64 v174; // [rsp+1270h] [rbp+11F0h]
  _QWORD *v175; // [rsp+1278h] [rbp+11F8h]
  __int64 v176; // [rsp+1280h] [rbp+1200h]
  __int128 v177; // [rsp+1288h] [rbp+1208h]
  __int64 v178; // [rsp+1298h] [rbp+1218h]
  __int128 v179; // [rsp+12A0h] [rbp+1220h]
  __int64 v180; // [rsp+12B0h] [rbp+1230h]
  __int128 v181; // [rsp+12B8h] [rbp+1238h]
  __int64 v182; // [rsp+12C8h] [rbp+1248h]
  __m128i v183; // [rsp+12D0h] [rbp+1250h]
  __int64 v184; // [rsp+12E0h] [rbp+1260h]
  __int64 v185; // [rsp+12E8h] [rbp+1268h]
  char v186; // [rsp+12F0h] [rbp+1270h]
  __int64 v187; // [rsp+12F8h] [rbp+1278h]
  __int64 v188; // [rsp+1300h] [rbp+1280h]
  __int64 v189; // [rsp+1308h] [rbp+1288h]
  __int64 v190; // [rsp+1310h] [rbp+1290h]
  __int64 v191; // [rsp+1318h] [rbp+1298h]
  const char *v192; // [rsp+1320h] [rbp+12A0h] BYREF
  _BYTE v193[24]; // [rsp+1328h] [rbp+12A8h] BYREF
  _BYTE *v194; // [rsp+1340h] [rbp+12C0h]
  _QWORD v195[85]; // [rsp+1348h] [rbp+12C8h] BYREF
  __m128i v196; // [rsp+15F0h] [rbp+1570h]
  __m128i v197; // [rsp+1600h] [rbp+1580h]
  _BYTE *v198; // [rsp+1618h] [rbp+1598h]
  _BYTE *v199; // [rsp+1620h] [rbp+15A0h]
  _QWORD *v200; // [rsp+1628h] [rbp+15A8h] BYREF
  __int64 v201; // [rsp+1630h] [rbp+15B0h]
  __int64 v202; // [rsp+1638h] [rbp+15B8h]
  __m128i v203; // [rsp+1640h] [rbp+15C0h]
  __m128i v204; // [rsp+1650h] [rbp+15D0h]
  __int64 v205; // [rsp+1668h] [rbp+15E8h]
  __m128i v206; // [rsp+1670h] [rbp+15F0h]
  __m128i v207; // [rsp+1680h] [rbp+1600h]
  __m128i v208; // [rsp+1690h] [rbp+1610h]
  _BYTE *v209; // [rsp+16A0h] [rbp+1620h]
  char v210; // [rsp+16AFh] [rbp+162Fh]
  __int64 v211; // [rsp+16B0h] [rbp+1630h]
  __int64 v212; // [rsp+16B8h] [rbp+1638h]
  __int64 v213; // [rsp+16C0h] [rbp+1640h]
  __int64 v214; // [rsp+16C8h] [rbp+1648h]
  __int64 v215; // [rsp+16D0h] [rbp+1650h]
  __int64 v216; // [rsp+16D8h] [rbp+1658h]
  __int64 v217; // [rsp+16E0h] [rbp+1660h]
  __int64 v218; // [rsp+16E8h] [rbp+1668h]
  __int64 v219; // [rsp+16F0h] [rbp+1670h]
  _QWORD *v220; // [rsp+16F8h] [rbp+1678h]
  __int64 v221; // [rsp+1700h] [rbp+1680h]
  __int64 v222; // [rsp+1708h] [rbp+1688h]
  __int64 v223; // [rsp+1710h] [rbp+1690h]
  __int64 v224; // [rsp+1718h] [rbp+1698h]
  __int64 v225; // [rsp+1720h] [rbp+16A0h]
  __int64 v226; // [rsp+1728h] [rbp+16A8h]
  __int64 v227; // [rsp+1730h] [rbp+16B0h]
  __int64 v228; // [rsp+1738h] [rbp+16B8h]
  __int64 v229; // [rsp+1740h] [rbp+16C0h]
  __int64 v230; // [rsp+1748h] [rbp+16C8h]
  __int64 v231; // [rsp+1750h] [rbp+16D0h]
  __int64 v232; // [rsp+1758h] [rbp+16D8h]
  __int64 v233; // [rsp+1760h] [rbp+16E0h]
  __int64 v234; // [rsp+1768h] [rbp+16E8h]
  __int64 v235; // [rsp+1770h] [rbp+16F0h]
  __int64 v236; // [rsp+1778h] [rbp+16F8h]
  __int64 v237; // [rsp+1780h] [rbp+1700h]
  __int64 v238; // [rsp+1788h] [rbp+1708h]
  __int64 v239; // [rsp+1790h] [rbp+1710h]
  __int64 v240; // [rsp+1798h] [rbp+1718h]
  __int64 v241; // [rsp+17A0h] [rbp+1720h]
  __int64 v242; // [rsp+17A8h] [rbp+1728h]
  __int64 v243; // [rsp+17B0h] [rbp+1730h]
  __int64 v244; // [rsp+17B8h] [rbp+1738h]
  PVOID Address; // [rsp+17C0h] [rbp+1740h]
  char v246; // [rsp+17CFh] [rbp+174Fh] BYREF
  __int64 v247; // [rsp+17D0h] [rbp+1750h]
  char v248; // [rsp+17DFh] [rbp+175Fh]
  __int64 v249; // [rsp+17E0h] [rbp+1760h]
  __int64 v250; // [rsp+17E8h] [rbp+1768h]
  __m128i v251; // [rsp+17F0h] [rbp+1770h] BYREF
  __int64 v252; // [rsp+1808h] [rbp+1788h]
  __int64 v253; // [rsp+1810h] [rbp+1790h]
  __int64 v254; // [rsp+1818h] [rbp+1798h]
  __int64 v255; // [rsp+1820h] [rbp+17A0h]
  __int64 v256; // [rsp+1828h] [rbp+17A8h]
  __int64 v257; // [rsp+1830h] [rbp+17B0h]
  __int64 v258; // [rsp+1838h] [rbp+17B8h]
  __int64 v259; // [rsp+1840h] [rbp+17C0h]
  __int64 v260; // [rsp+1848h] [rbp+17C8h]
  __int64 v261; // [rsp+1850h] [rbp+17D0h]
  __int64 v262; // [rsp+1858h] [rbp+17D8h]
  __int64 v263; // [rsp+1860h] [rbp+17E0h]
  _QWORD *v264; // [rsp+1868h] [rbp+17E8h]
  __int64 v265; // [rsp+1870h] [rbp+17F0h]
  __int64 v266; // [rsp+1878h] [rbp+17F8h]
  __int64 v267; // [rsp+1880h] [rbp+1800h]
  __int64 v268; // [rsp+1888h] [rbp+1808h]
  _BYTE *v269; // [rsp+1890h] [rbp+1810h]
  __int64 v270; // [rsp+1898h] [rbp+1818h]
  __int64 v271; // [rsp+18A0h] [rbp+1820h]
  __int64 v272; // [rsp+18A8h] [rbp+1828h]
  __int64 v273; // [rsp+18B0h] [rbp+1830h]
  __int64 v274; // [rsp+18B8h] [rbp+1838h]
  __int64 v275; // [rsp+18C0h] [rbp+1840h]
  __int64 v276; // [rsp+18C8h] [rbp+1848h]
  _QWORD *v277; // [rsp+18D0h] [rbp+1850h]
  __int64 v278; // [rsp+18D8h] [rbp+1858h]
  __int64 v279; // [rsp+18E0h] [rbp+1860h]
  __int64 v280; // [rsp+18E8h] [rbp+1868h]

  v280 = -2;
  v5 = (unsigned __int8)a2[2424];
  v269 = a2;
  switch ( v5 )
  {
    case 0LL:
      v195[1] = 0;
      v192 = aGenerateVoiceP;
      *(_QWORD *)v193 = 21;
      *(_QWORD *)&v193[8] = aApp_4;
      *(_QWORD *)&v193[16] = 3;
      v194 = a2;
      v264 = a2 + 520;
      v195[0] = a2 + 520;
      sub_1401A9630((__int64)&v136, (__int64)&v192);
      v6 = *(unsigned int *)((char *)&v136 + 10) | ((unsigned __int64)HIWORD(v136) << 32);
      v7 = BYTE8(v136);
      v8 = _mm_loadu_si128(&v137);
      v9 = v138.m128i_i64[0];
      if ( (_QWORD)v136 == -1 )
      {
        LOBYTE(v258) = BYTE9(v136);
        goto LABEL_494;
      }
      v132 = v145;
      v131 = v144;
      v130 = v143;
      v129 = v142;
      v128 = v141;
      v127 = v140;
      v126 = _mm_loadu_si128((const __m128i *)&v138.m128i_u64[1]);
      *(_DWORD *)((char *)&v123 + 2) = *(_DWORD *)((char *)&v136 + 10);
      HIWORD(v123) = WORD2(v6);
      v122 = (__m128i *)v136;
      LOWORD(v123) = WORD4(v136);
      v124 = v8;
      v125 = v138.m128i_i64[0];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aRepo_0;
      v137.m128i_i64[1] = 4;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      v10 = sub_140029DD0((volatile void *)(*((_QWORD *)v269 + 64) + 16LL));
      if ( v10 )
        goto LABEL_4;
      sub_14172C620((__int64)&v192, (__int64)&v136, (__int64)&v137);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v39 = *(unsigned int *)((char *)&v192 + 2);
        v40 = HIWORD(v192);
        v41 = *(_OWORD *)v193;
        v9 = *(_QWORD *)&v193[16];
        sub_140203A20(&v122);
        v6 = v39 | (v40 << 32);
        v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)*((unsigned __int64 *)&v41 + 1));
        goto LABEL_494;
      }
      v10 = *(_QWORD *)v193;
LABEL_4:
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aTemplateid_1;
      v137.m128i_i64[1] = 10;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140955980(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        sub_140203A20(&v122);
        goto LABEL_493;
      }
      v251.m128i_i64[0] = *(_QWORD *)&v193[8];
      v279 = *(_QWORD *)v193;
      v42 = _mm_loadu_si128((const __m128i *)&v193[8]);
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aRawtext_1;
      v137.m128i_i64[1] = 7;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140955980(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( v279 )
          sub_140001660(v251.m128i_i64[0], v279, 1);
        goto LABEL_492;
      }
      v270 = *(_QWORD *)&v193[8];
      v277 = *(_QWORD **)v193;
      v77 = *(_OWORD *)&v193[8];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aSelectedtext_1;
      v137.m128i_i64[1] = 12;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        v78 = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( v277 )
          sub_140001660(v270, v277, 1);
        LOBYTE(v258) = v78;
        if ( v279 )
          sub_140001660(v251.m128i_i64[0], v279, 1);
        goto LABEL_492;
      }
      v268 = *(_QWORD *)&v193[8];
      v274 = *(_QWORD *)v193;
      v79 = *(_OWORD *)&v193[8];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aClipboardtext_1;
      v137.m128i_i64[1] = 13;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        v80 = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v268, v274, 1);
        if ( v277 )
          sub_140001660(v270, v277, 1);
        LOBYTE(v258) = v80;
        if ( v279 )
          sub_140001660(v251.m128i_i64[0], v279, 1);
        goto LABEL_492;
      }
      v266 = *(_QWORD *)&v193[8];
      v278 = *(_QWORD *)v193;
      v81 = *(_OWORD *)&v193[8];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aTargetbundleid_0;
      v137.m128i_i64[1] = 14;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        v82 = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v83 = v274;
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_143:
            v84 = v277;
            if ( !v277 )
              goto LABEL_145;
            goto LABEL_144;
          }
        }
        else
        {
          sub_140001660(v266, v278, 1);
          v83 = v274;
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_143;
        }
        sub_140001660(v268, v83, 1);
        v84 = v277;
        if ( !v277 )
        {
LABEL_145:
          LOBYTE(v258) = v82;
          if ( v279 )
            sub_140001660(v251.m128i_i64[0], v279, 1);
          goto LABEL_492;
        }
LABEL_144:
        sub_140001660(v270, v84, 1);
        goto LABEL_145;
      }
      v265 = *(_QWORD *)&v193[8];
      v276 = *(_QWORD *)v193;
      v85 = *(_OWORD *)&v193[8];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aTargetappname_0;
      v137.m128i_i64[1] = 13;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        v86 = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v87 = v278;
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_154:
            v88 = v274;
            if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_155;
            goto LABEL_159;
          }
        }
        else
        {
          sub_140001660(v265, v276, 1);
          v87 = v278;
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_154;
        }
        sub_140001660(v266, v87, 1);
        v88 = v274;
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_155:
          sub_140001660(v268, v88, 1);
          v89 = v277;
          if ( !v277 )
          {
LABEL_161:
            LOBYTE(v258) = v86;
            if ( v279 )
              sub_140001660(v251.m128i_i64[0], v279, 1);
            goto LABEL_492;
          }
LABEL_160:
          sub_140001660(v270, v89, 1);
          goto LABEL_161;
        }
LABEL_159:
        v89 = v277;
        if ( !v277 )
          goto LABEL_161;
        goto LABEL_160;
      }
      v262 = *(_QWORD *)&v193[8];
      v275 = *(_QWORD *)v193;
      v90 = *(_OWORD *)&v193[8];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aPromptoverride;
      v137.m128i_i64[1] = 14;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        v91 = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v92 = v276;
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_167:
            v93 = v278;
            if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_168;
            goto LABEL_176;
          }
        }
        else
        {
          sub_140001660(v262, v275, 1);
          v92 = v276;
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_167;
        }
        sub_140001660(v265, v92, 1);
        v93 = v278;
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_168:
          sub_140001660(v266, v93, 1);
          v94 = v274;
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_169;
          goto LABEL_177;
        }
LABEL_176:
        v94 = v274;
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_169:
          v95 = v277;
          if ( !v277 )
            goto LABEL_171;
          goto LABEL_170;
        }
LABEL_177:
        sub_140001660(v268, v94, 1);
        v95 = v277;
        if ( !v277 )
        {
LABEL_171:
          LOBYTE(v258) = v91;
          if ( v279 )
            sub_140001660(v251.m128i_i64[0], v279, 1);
          goto LABEL_492;
        }
LABEL_170:
        sub_140001660(v270, v95, 1);
        goto LABEL_171;
      }
      v260 = *(_QWORD *)&v193[8];
      v273 = *(_QWORD *)v193;
      v96 = *(_OWORD *)&v193[8];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aTemplatetitle_1;
      v137.m128i_i64[1] = 13;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        v97 = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v98 = v275;
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_182:
            v99 = v276;
            if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_183;
            goto LABEL_189;
          }
        }
        else
        {
          sub_140001660(v260, v273, 1);
          v98 = v275;
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_182;
        }
        sub_140001660(v262, v98, 1);
        v99 = v276;
        if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_183:
          sub_140001660(v265, v99, 1);
          v100 = v278;
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_184;
          goto LABEL_190;
        }
LABEL_189:
        v100 = v278;
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_184:
          v101 = v274;
          if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_185;
          goto LABEL_191;
        }
LABEL_190:
        sub_140001660(v266, v100, 1);
        v101 = v274;
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_185:
          sub_140001660(v268, v101, 1);
          v102 = v277;
          if ( !v277 )
          {
LABEL_193:
            LOBYTE(v258) = v97;
            if ( v279 )
              sub_140001660(v251.m128i_i64[0], v279, 1);
            goto LABEL_492;
          }
LABEL_192:
          sub_140001660(v270, v102, 1);
          goto LABEL_193;
        }
LABEL_191:
        v102 = v277;
        if ( !v277 )
          goto LABEL_193;
        goto LABEL_192;
      }
      v259 = *(_QWORD *)&v193[8];
      v272 = *(_QWORD *)v193;
      v104 = *(_OWORD *)&v193[8];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aTemplatekind_1;
      v137.m128i_i64[1] = 12;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140953BD0(&v192, &v136);
      v7 = (char)v192;
      LOBYTE(v258) = BYTE1(v192);
      if ( (_BYTE)v192 != 0xFF )
      {
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_201:
            if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_202;
            goto LABEL_213;
          }
        }
        else
        {
          sub_140001660(v259, v272, 1);
          if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_201;
        }
        sub_140001660(v260, v273, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_202:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_203;
          goto LABEL_214;
        }
LABEL_213:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_203:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_204;
          goto LABEL_215;
        }
LABEL_214:
        sub_140001660(v265, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_204:
          sub_140001660(v266, v278, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_205;
          goto LABEL_216;
        }
LABEL_215:
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_205:
          if ( !v277 )
            goto LABEL_207;
          goto LABEL_206;
        }
LABEL_216:
        sub_140001660(v268, v274, 1);
        if ( !v277 )
        {
LABEL_207:
          if ( v279 )
            sub_140001660(v251.m128i_i64[0], v279, 1);
          goto LABEL_492;
        }
LABEL_206:
        sub_140001660(v270, v277, 1);
        goto LABEL_207;
      }
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aLlmprovider_0;
      v137.m128i_i64[1] = 11;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_227:
            if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_228;
            goto LABEL_238;
          }
        }
        else
        {
          sub_140001660(v259, v272, 1);
          if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_227;
        }
        sub_140001660(v260, v273, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_228:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_229;
          goto LABEL_239;
        }
LABEL_238:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_229:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_230;
          goto LABEL_240;
        }
LABEL_239:
        sub_140001660(v265, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_230:
          sub_140001660(v266, v278, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_231;
          goto LABEL_241;
        }
LABEL_240:
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_231:
          if ( !v277 )
            goto LABEL_233;
          goto LABEL_232;
        }
LABEL_241:
        sub_140001660(v268, v274, 1);
        if ( !v277 )
        {
LABEL_233:
          if ( v279 )
            sub_140001660(v251.m128i_i64[0], v279, 1);
          goto LABEL_492;
        }
LABEL_232:
        sub_140001660(v270, v277, 1);
        goto LABEL_233;
      }
      v256 = *(_QWORD *)&v193[8];
      v271 = *(_QWORD *)v193;
      v106 = *(_OWORD *)&v193[8];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aLlmapikey_0;
      v137.m128i_i64[1] = 9;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_246:
            if ( (unsigned __int64)(v273 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_247;
            goto LABEL_255;
          }
        }
        else
        {
          sub_140001660(v256, v271, 1);
          if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_246;
        }
        sub_140001660(v259, v272, 1);
        if ( (unsigned __int64)(v273 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_247:
          sub_140001660(v260, v273, 1);
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_248;
          goto LABEL_256;
        }
LABEL_255:
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_248:
          if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_249;
          goto LABEL_257;
        }
LABEL_256:
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_249:
          sub_140001660(v265, v276, 1);
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_250;
          goto LABEL_258;
        }
LABEL_257:
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_250:
          if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_251;
          goto LABEL_259;
        }
LABEL_258:
        sub_140001660(v266, v278, 1);
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_251:
          sub_140001660(v268, v274, 1);
          if ( !v277 )
          {
LABEL_261:
            if ( v279 )
              sub_140001660(v251.m128i_i64[0], v279, 1);
            goto LABEL_492;
          }
LABEL_260:
          sub_140001660(v270, v277, 1);
          goto LABEL_261;
        }
LABEL_259:
        if ( !v277 )
          goto LABEL_261;
        goto LABEL_260;
      }
      v254 = *(_QWORD *)&v193[8];
      v267 = *(_QWORD *)v193;
      v107 = *(_OWORD *)&v193[8];
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aLlmmodel_0;
      v137.m128i_i64[1] = 8;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v267 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_267:
            if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_268;
            goto LABEL_280;
          }
        }
        else
        {
          sub_140001660(v254, v267, 1);
          if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_267;
        }
        sub_140001660(v256, v271, 1);
        if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_268:
          sub_140001660(v259, v272, 1);
          if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_269;
          goto LABEL_281;
        }
LABEL_280:
        if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_269:
          if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_270;
          goto LABEL_282;
        }
LABEL_281:
        sub_140001660(v260, v273, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_270:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_271;
          goto LABEL_283;
        }
LABEL_282:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_271:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_272;
          goto LABEL_284;
        }
LABEL_283:
        sub_140001660(v265, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_272:
          sub_140001660(v266, v278, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_273;
          goto LABEL_285;
        }
LABEL_284:
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_273:
          if ( !v277 )
            goto LABEL_275;
          goto LABEL_274;
        }
LABEL_285:
        sub_140001660(v268, v274, 1);
        if ( !v277 )
        {
LABEL_275:
          if ( v279 )
            sub_140001660(v251.m128i_i64[0], v279, 1);
          goto LABEL_492;
        }
LABEL_274:
        sub_140001660(v270, v277, 1);
        goto LABEL_275;
      }
      v252 = *(_QWORD *)&v193[8];
      v263 = *(_QWORD *)v193;
      v206 = _mm_loadu_si128((const __m128i *)&v193[8]);
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aLlmbaseurl_0;
      v137.m128i_i64[1] = 10;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v263 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v267 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_290:
            if ( (unsigned __int64)(v271 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_291;
            goto LABEL_301;
          }
        }
        else
        {
          sub_140001660(v252, v263, 1);
          if ( (unsigned __int64)(v267 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_290;
        }
        sub_140001660(v254, v267, 1);
        if ( (unsigned __int64)(v271 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_291:
          sub_140001660(v256, v271, 1);
          if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_292;
          goto LABEL_302;
        }
LABEL_301:
        if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_292:
          if ( (unsigned __int64)(v273 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_293;
          goto LABEL_303;
        }
LABEL_302:
        sub_140001660(v259, v272, 1);
        if ( (unsigned __int64)(v273 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_293:
          sub_140001660(v260, v273, 1);
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_294;
          goto LABEL_304;
        }
LABEL_303:
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_294:
          if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_295;
          goto LABEL_305;
        }
LABEL_304:
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_295:
          sub_140001660(v265, v276, 1);
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_296;
          goto LABEL_306;
        }
LABEL_305:
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_296:
          if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_297;
          goto LABEL_307;
        }
LABEL_306:
        sub_140001660(v266, v278, 1);
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_297:
          sub_140001660(v268, v274, 1);
          if ( !v277 )
          {
LABEL_309:
            if ( v279 )
              sub_140001660(v251.m128i_i64[0], v279, 1);
            goto LABEL_492;
          }
LABEL_308:
          sub_140001660(v270, v277, 1);
          goto LABEL_309;
        }
LABEL_307:
        if ( !v277 )
          goto LABEL_309;
        goto LABEL_308;
      }
      v253 = *(_QWORD *)&v193[8];
      v261 = *(_QWORD *)v193;
      v207 = _mm_loadu_si128((const __m128i *)&v193[8]);
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aAsrprovider_1;
      v137.m128i_i64[1] = 11;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v261 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v263 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_315:
            if ( (unsigned __int64)(v267 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_316;
            goto LABEL_332;
          }
        }
        else
        {
          sub_140001660(v253, v261, 1);
          if ( (unsigned __int64)(v263 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_315;
        }
        sub_140001660(v252, v263, 1);
        if ( (unsigned __int64)(v267 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_316:
          sub_140001660(v254, v267, 1);
          if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_317;
          goto LABEL_333;
        }
LABEL_332:
        if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_317:
          if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_318;
          goto LABEL_334;
        }
LABEL_333:
        sub_140001660(v256, v271, 1);
        if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_318:
          sub_140001660(v259, v272, 1);
          if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_319;
          goto LABEL_335;
        }
LABEL_334:
        if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_319:
          if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_320;
          goto LABEL_336;
        }
LABEL_335:
        sub_140001660(v260, v273, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_320:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_321;
          goto LABEL_337;
        }
LABEL_336:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_321:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_322;
          goto LABEL_338;
        }
LABEL_337:
        sub_140001660(v265, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_322:
          sub_140001660(v266, v278, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_323;
          goto LABEL_339;
        }
LABEL_338:
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_323:
          if ( !v277 )
            goto LABEL_325;
          goto LABEL_324;
        }
LABEL_339:
        sub_140001660(v268, v274, 1);
        if ( !v277 )
        {
LABEL_325:
          if ( v279 )
            sub_140001660(v251.m128i_i64[0], v279, 1);
          goto LABEL_492;
        }
LABEL_324:
        sub_140001660(v270, v277, 1);
        goto LABEL_325;
      }
      v249 = *(_QWORD *)&v193[8];
      v257 = *(_QWORD *)v193;
      v208 = _mm_loadu_si128((const __m128i *)&v193[8]);
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aAsrmodel_1;
      v137.m128i_i64[1] = 8;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v257 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v261 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_344:
            if ( (unsigned __int64)(v263 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_345;
            goto LABEL_361;
          }
        }
        else
        {
          sub_140001660(v249, v257, 1);
          if ( (unsigned __int64)(v261 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_344;
        }
        sub_140001660(v253, v261, 1);
        if ( (unsigned __int64)(v263 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_345:
          sub_140001660(v252, v263, 1);
          if ( (unsigned __int64)(v267 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_346;
          goto LABEL_362;
        }
LABEL_361:
        if ( (unsigned __int64)(v267 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_346:
          if ( (unsigned __int64)(v271 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_347;
          goto LABEL_363;
        }
LABEL_362:
        sub_140001660(v254, v267, 1);
        if ( (unsigned __int64)(v271 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_347:
          sub_140001660(v256, v271, 1);
          if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_348;
          goto LABEL_364;
        }
LABEL_363:
        if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_348:
          if ( (unsigned __int64)(v273 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_349;
          goto LABEL_365;
        }
LABEL_364:
        sub_140001660(v259, v272, 1);
        if ( (unsigned __int64)(v273 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_349:
          sub_140001660(v260, v273, 1);
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_350;
          goto LABEL_366;
        }
LABEL_365:
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_350:
          if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_351;
          goto LABEL_367;
        }
LABEL_366:
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_351:
          sub_140001660(v265, v276, 1);
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_352;
          goto LABEL_368;
        }
LABEL_367:
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_352:
          if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_353;
          goto LABEL_369;
        }
LABEL_368:
        sub_140001660(v266, v278, 1);
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_353:
          sub_140001660(v268, v274, 1);
          if ( !v277 )
          {
LABEL_371:
            if ( v279 )
              sub_140001660(v251.m128i_i64[0], v279, 1);
            goto LABEL_492;
          }
LABEL_370:
          sub_140001660(v270, v277, 1);
          goto LABEL_371;
        }
LABEL_369:
        if ( !v277 )
          goto LABEL_371;
        goto LABEL_370;
      }
      v247 = *(_QWORD *)&v193[8];
      v255 = *(_QWORD *)v193;
      v204 = _mm_loadu_si128((const __m128i *)&v193[8]);
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aAsrlanguage_0;
      v137.m128i_i64[1] = 11;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v255 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v257 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_377:
            if ( (unsigned __int64)(v261 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_378;
            goto LABEL_394;
          }
        }
        else
        {
          sub_140001660(v247, v255, 1);
          if ( (unsigned __int64)(v257 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_377;
        }
        sub_140001660(v249, v257, 1);
        if ( (unsigned __int64)(v261 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_378:
          sub_140001660(v253, v261, 1);
          if ( (unsigned __int64)(v263 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_379;
          goto LABEL_395;
        }
LABEL_394:
        if ( (unsigned __int64)(v263 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_379:
          if ( (unsigned __int64)(v267 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_380;
          goto LABEL_396;
        }
LABEL_395:
        sub_140001660(v252, v263, 1);
        if ( (unsigned __int64)(v267 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_380:
          sub_140001660(v254, v267, 1);
          if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_381;
          goto LABEL_397;
        }
LABEL_396:
        if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_381:
          if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_382;
          goto LABEL_398;
        }
LABEL_397:
        sub_140001660(v256, v271, 1);
        if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_382:
          sub_140001660(v259, v272, 1);
          if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_383;
          goto LABEL_399;
        }
LABEL_398:
        if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_383:
          if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_384;
          goto LABEL_400;
        }
LABEL_399:
        sub_140001660(v260, v273, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_384:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_385;
          goto LABEL_401;
        }
LABEL_400:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_385:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_386;
          goto LABEL_402;
        }
LABEL_401:
        sub_140001660(v265, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_386:
          sub_140001660(v266, v278, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_387;
          goto LABEL_403;
        }
LABEL_402:
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_387:
          if ( !v277 )
            goto LABEL_389;
          goto LABEL_388;
        }
LABEL_403:
        sub_140001660(v268, v274, 1);
        if ( !v277 )
        {
LABEL_389:
          if ( v279 )
            sub_140001660(v251.m128i_i64[0], v279, 1);
          goto LABEL_492;
        }
LABEL_388:
        sub_140001660(v270, v277, 1);
        goto LABEL_389;
      }
      Address = *(PVOID *)&v193[8];
      v250 = *(_QWORD *)v193;
      v203 = _mm_loadu_si128((const __m128i *)&v193[8]);
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aAsremotion_0;
      v137.m128i_i64[1] = 10;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v250 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v255 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_408:
            if ( (unsigned __int64)(v257 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_409;
            goto LABEL_423;
          }
        }
        else
        {
          sub_140001660(Address, v250, 1);
          if ( (unsigned __int64)(v255 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_408;
        }
        sub_140001660(v247, v255, 1);
        if ( (unsigned __int64)(v257 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_409:
          sub_140001660(v249, v257, 1);
          if ( (unsigned __int64)(v261 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_410;
          goto LABEL_424;
        }
LABEL_423:
        if ( (unsigned __int64)(v261 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_410:
          if ( (unsigned __int64)(v263 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_411;
          goto LABEL_425;
        }
LABEL_424:
        sub_140001660(v253, v261, 1);
        if ( (unsigned __int64)(v263 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_411:
          sub_140001660(v252, v263, 1);
          if ( (unsigned __int64)(v267 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_412;
          goto LABEL_426;
        }
LABEL_425:
        if ( (unsigned __int64)(v267 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_412:
          if ( (unsigned __int64)(v271 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_413;
          goto LABEL_427;
        }
LABEL_426:
        sub_140001660(v254, v267, 1);
        if ( (unsigned __int64)(v271 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_413:
          sub_140001660(v256, v271, 1);
          if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_414;
          goto LABEL_428;
        }
LABEL_427:
        if ( (unsigned __int64)(v272 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_414:
          if ( (unsigned __int64)(v273 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_415;
          goto LABEL_429;
        }
LABEL_428:
        sub_140001660(v259, v272, 1);
        if ( (unsigned __int64)(v273 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_415:
          sub_140001660(v260, v273, 1);
          if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_416;
          goto LABEL_430;
        }
LABEL_429:
        if ( (unsigned __int64)(v275 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_416:
          if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_417;
          goto LABEL_431;
        }
LABEL_430:
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_417:
          sub_140001660(v265, v276, 1);
          if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_418;
          goto LABEL_432;
        }
LABEL_431:
        if ( (unsigned __int64)(v278 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_418:
          if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_419;
          goto LABEL_433;
        }
LABEL_432:
        sub_140001660(v266, v278, 1);
        if ( (unsigned __int64)(v274 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_419:
          sub_140001660(v268, v274, 1);
          if ( !v277 )
          {
LABEL_435:
            if ( v279 )
              sub_140001660(v251.m128i_i64[0], v279, 1);
            goto LABEL_492;
          }
LABEL_434:
          sub_140001660(v270, v277, 1);
          goto LABEL_435;
        }
LABEL_433:
        if ( !v277 )
          goto LABEL_435;
        goto LABEL_434;
      }
      v205 = *(_QWORD *)&v193[8];
      v209 = *(_BYTE **)v193;
      v196 = _mm_loadu_si128((const __m128i *)&v193[8]);
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aAsrdurationms_0;
      v137.m128i_i64[1] = 13;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140954A30(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 != 0xFF )
      {
        LOBYTE(v258) = BYTE1(v192);
        v11 = *(unsigned int *)((char *)&v192 + 2);
        v12 = HIWORD(v192);
        v8 = _mm_loadu_si128((const __m128i *)v193);
        v9 = *(_QWORD *)&v193[16];
        if ( (unsigned __int64)(v209 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (unsigned __int64)(v250 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_441:
            if ( (unsigned __int64)(v255 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_442;
            goto LABEL_460;
          }
        }
        else
        {
          sub_140001660(v205, v209, 1);
          if ( (unsigned __int64)(v250 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_441;
        }
        sub_140001660(Address, v250, 1);
        if ( (unsigned __int64)(v255 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_442:
          sub_140001660(v247, v255, 1);
          if ( (unsigned __int64)(v257 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_443;
          goto LABEL_461;
        }
LABEL_460:
        if ( (unsigned __int64)(v257 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_443:
          if ( (unsigned __int64)(v261 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_444;
          goto LABEL_462;
        }
LABEL_461:
        sub_140001660(v249, v257, 1);
        if ( (unsigned __int64)(v261 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_444:
          sub_140001660(v253, v261, 1);
          if ( (unsigned __int64)(v263 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_445;
          goto LABEL_463;
        }
LABEL_462:
        if ( (unsigned __int64)(v263 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_445:
          if ( (unsigned __int64)(v267 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_446;
          goto LABEL_464;
        }
LABEL_463:
        sub_140001660(v252, v263, 1);
        if ( (unsigned __int64)(v267 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_446:
          sub_140001660(v254, v267, 1);
          if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_447;
          goto LABEL_465;
        }
LABEL_464:
        if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_447:
          if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_448;
          goto LABEL_466;
        }
LABEL_465:
        sub_140001660(v256, v271, 1);
        if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_448:
          sub_140001660(v259, v272, 1);
          if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_449;
          goto LABEL_467;
        }
LABEL_466:
        if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_449:
          if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_450;
          goto LABEL_468;
        }
LABEL_467:
        sub_140001660(v260, v273, 1);
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_450:
          sub_140001660(v262, v275, 1);
          if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_451;
          goto LABEL_469;
        }
LABEL_468:
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_451:
          if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_452;
          goto LABEL_470;
        }
LABEL_469:
        sub_140001660(v265, v276, 1);
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_452:
          sub_140001660(v266, v278, 1);
          if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_453;
          goto LABEL_471;
        }
LABEL_470:
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_453:
          if ( !v277 )
            goto LABEL_455;
          goto LABEL_454;
        }
LABEL_471:
        sub_140001660(v268, v274, 1);
        if ( !v277 )
        {
LABEL_455:
          if ( v279 )
            sub_140001660(v251.m128i_i64[0], v279, 1);
          goto LABEL_492;
        }
LABEL_454:
        sub_140001660(v270, v277, 1);
        goto LABEL_455;
      }
      v197 = _mm_loadu_si128((const __m128i *)v193);
      v139 = 0;
      *(_QWORD *)&v136 = aGenerateVoiceP;
      *((_QWORD *)&v136 + 1) = 21;
      v137.m128i_i64[0] = (__int64)aAsrerrorcode_0;
      v137.m128i_i64[1] = 12;
      v138.m128i_i64[0] = (__int64)v269;
      v138.m128i_i64[1] = (__int64)v264;
      sub_140952570(&v192, &v136);
      v7 = (char)v192;
      if ( (_BYTE)v192 == 0xFF )
      {
        v110 = *(_QWORD *)&v193[16];
        v111 = v269;
        v112 = v269 + 544;
        v251 = *(__m128i *)v193;
        sub_14172B820(v269 + 560, &v122, 152);
        *((_QWORD *)v111 + 140) = v10;
        v113 = v111;
        *((_QWORD *)v111 + 89) = v279;
        *((__m128i *)v111 + 45) = v42;
        *((_QWORD *)v111 + 92) = v277;
        *(_OWORD *)(v111 + 744) = v77;
        *((_QWORD *)v111 + 95) = v274;
        *((_OWORD *)v111 + 48) = v79;
        *((_QWORD *)v111 + 98) = v278;
        *(_OWORD *)(v111 + 792) = v81;
        *((_QWORD *)v111 + 101) = v276;
        *((_OWORD *)v111 + 51) = v85;
        *((_QWORD *)v111 + 104) = v275;
        *(_OWORD *)(v111 + 840) = v90;
        *((_QWORD *)v111 + 107) = v273;
        *((_OWORD *)v111 + 54) = v96;
        *((_QWORD *)v111 + 110) = v272;
        *(_OWORD *)(v111 + 888) = v104;
        v111[1145] = v258;
        *((_QWORD *)v111 + 113) = v271;
        *((_OWORD *)v111 + 57) = v106;
        *((_QWORD *)v111 + 116) = v267;
        *(_OWORD *)(v111 + 936) = v107;
        *((_QWORD *)v111 + 119) = v263;
        *((__m128i *)v111 + 60) = v206;
        *((_QWORD *)v111 + 122) = v261;
        *(__m128i *)(v111 + 984) = v207;
        *((_QWORD *)v111 + 125) = v257;
        *((__m128i *)v111 + 63) = v208;
        *((_QWORD *)v111 + 128) = v255;
        *(__m128i *)(v111 + 1032) = v204;
        *((_QWORD *)v111 + 131) = v250;
        *((__m128i *)v111 + 66) = v203;
        *((_QWORD *)v111 + 134) = v209;
        *(__m128i *)(v111 + 1080) = v196;
        *((__m128i *)v111 + 34) = v197;
        *(__m128i *)(v111 + 1096) = _mm_load_si128(&v251);
        *((_QWORD *)v111 + 139) = v110;
        v111[1144] = 0;
        v14 = v111 + 1168;
        sub_14172B820(v14, v112, 624);
        a2 = v113;
        v196.m128i_i64[0] = (__int64)(v113 + 2416);
        v113[2416] = 0;
LABEL_7:
        v209 = a2 + 1792;
        v15 = a2;
        v197.m128i_i64[0] = (__int64)v14;
        sub_14172B820(a2 + 1792, v14, 624);
        a2 = v15;
        switch ( v15[2392] )
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
      LOBYTE(v258) = BYTE1(v192);
      v11 = *(unsigned int *)((char *)&v192 + 2);
      v12 = HIWORD(v192);
      v8 = _mm_loadu_si128((const __m128i *)v193);
      v9 = *(_QWORD *)&v193[16];
      if ( (unsigned __int64)(v209 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( (unsigned __int64)(v250 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_476:
          if ( (unsigned __int64)(v255 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_477;
          goto LABEL_505;
        }
      }
      else
      {
        sub_140001660(v205, v209, 1);
        if ( (unsigned __int64)(v250 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_476;
      }
      sub_140001660(Address, v250, 1);
      if ( (unsigned __int64)(v255 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_477:
        sub_140001660(v247, v255, 1);
        if ( (unsigned __int64)(v257 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_478;
        goto LABEL_506;
      }
LABEL_505:
      if ( (unsigned __int64)(v257 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_478:
        if ( (unsigned __int64)(v261 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_479;
        goto LABEL_507;
      }
LABEL_506:
      sub_140001660(v249, v257, 1);
      if ( (unsigned __int64)(v261 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_479:
        sub_140001660(v253, v261, 1);
        if ( (unsigned __int64)(v263 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_480;
        goto LABEL_508;
      }
LABEL_507:
      if ( (unsigned __int64)(v263 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_480:
        if ( (unsigned __int64)(v267 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_481;
        goto LABEL_509;
      }
LABEL_508:
      sub_140001660(v252, v263, 1);
      if ( (unsigned __int64)(v267 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_481:
        sub_140001660(v254, v267, 1);
        if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_482;
        goto LABEL_510;
      }
LABEL_509:
      if ( (unsigned __int64)(v271 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_482:
        if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_483;
        goto LABEL_511;
      }
LABEL_510:
      sub_140001660(v256, v271, 1);
      if ( (unsigned __int64)(v272 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_483:
        sub_140001660(v259, v272, 1);
        if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_484;
        goto LABEL_512;
      }
LABEL_511:
      if ( (unsigned __int64)(v273 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_484:
        if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_485;
        goto LABEL_513;
      }
LABEL_512:
      sub_140001660(v260, v273, 1);
      if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_485:
        sub_140001660(v262, v275, 1);
        if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_486;
        goto LABEL_514;
      }
LABEL_513:
      if ( (unsigned __int64)(v276 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_486:
        if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_487;
        goto LABEL_515;
      }
LABEL_514:
      sub_140001660(v265, v276, 1);
      if ( (unsigned __int64)(v278 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_487:
        sub_140001660(v266, v278, 1);
        if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_488;
        goto LABEL_516;
      }
LABEL_515:
      if ( (unsigned __int64)(v274 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_488:
        if ( !v277 )
          goto LABEL_490;
        goto LABEL_489;
      }
LABEL_516:
      sub_140001660(v268, v274, 1);
      if ( v277 )
LABEL_489:
        sub_140001660(v270, v277, 1);
LABEL_490:
      if ( v279 )
        sub_140001660(v251.m128i_i64[0], v279, 1);
LABEL_492:
      sub_140203A20(&v122);
LABEL_493:
      v6 = v11 | (v12 << 32);
LABEL_494:
      sub_140CAB140(v269);
      LOBYTE(v68) = v258;
      if ( *v264 == -1 )
      {
        v70 = 1;
        goto LABEL_501;
      }
      v277 = v269 + 528;
      v108 = *((_QWORD *)v269 + 66);
      v251.m128i_i64[0] = *((_QWORD *)v269 + 67);
      v279 = 0;
      v270 = v108;
      while ( v251.m128i_i64[0] != v279 )
      {
        ++v279;
        v109 = v108 + 96;
        sub_140401FB0();
        v108 = v109;
      }
      v76 = *v264;
      v70 = 1;
      if ( *v264 )
        goto LABEL_499;
      goto LABEL_501;
    case 1LL:
      sub_14176EC00(&off_141886DB8);
    case 2LL:
      sub_14176EC20(&off_141886DB8);
    case 3LL:
      v13 = (unsigned __int8)a2[2416];
      v14 = a2 + 1168;
      v196.m128i_i64[0] = (__int64)(a2 + 2416);
      switch ( v13 )
      {
        case 0LL:
          goto LABEL_7;
        case 1LL:
          v199 = a2 + 2416;
          v198 = a2 + 1168;
          sub_14176EC00(&off_1418851A0);
        case 2LL:
          v199 = a2 + 2416;
          v198 = a2 + 1168;
          sub_14176EC20(&off_1418851A0);
        case 3LL:
          v197.m128i_i64[0] = (__int64)(a2 + 1168);
          v209 = a2 + 1792;
          switch ( a2[2392] )
          {
            case 0:
LABEL_9:
              a2[2411] = 1;
              v16 = a2;
              sub_14172B820(v118, a2 + 1808, 152);
              v17 = *((volatile void **)v16 + 296);
              *((_QWORD *)v16 + 297) = v17;
              v16[2410] = 1;
              v270 = *((_QWORD *)v16 + 245);
              v267 = *((_QWORD *)v16 + 246);
              v203.m128i_i64[0] = *((_QWORD *)v16 + 248);
              v133 = *(_OWORD *)(v16 + 1976);
              v254 = *((_QWORD *)v16 + 249);
              v187 = *((_QWORD *)v16 + 250);
              v258 = *((_QWORD *)v16 + 251);
              v263 = *((_QWORD *)v16 + 252);
              v206.m128i_i64[0] = *((_QWORD *)v16 + 254);
              v134 = *(_OWORD *)(v16 + 2024);
              v252 = *((_QWORD *)v16 + 255);
              v261 = *((_QWORD *)v16 + 257);
              v135 = *((__m128i *)v16 + 128);
              v268 = *((_QWORD *)v16 + 258);
              v253 = *((_QWORD *)v16 + 260);
              v18 = *(_OWORD *)(v16 + 2072);
              v19 = *((_OWORD *)v16 + 131);
              v20 = *(_OWORD *)(v16 + 2120);
              v21 = *(_OWORD *)(v16 + 2168);
              v22 = *(_OWORD *)(v16 + 2216);
              v23 = *(_OWORD *)(v16 + 2264);
              v24 = *((_OWORD *)v16 + 143);
              v25 = *(_OWORD *)(v16 + 2312);
              v26 = *((_OWORD *)v16 + 112);
              v210 = v16[2393];
              v278 = *((_QWORD *)v16 + 261);
              v207.m128i_i64[0] = *((_QWORD *)v16 + 263);
              v266 = *((_QWORD *)v16 + 264);
              v257 = *((_QWORD *)v16 + 266);
              v276 = *((_QWORD *)v16 + 267);
              v188 = *((_QWORD *)v16 + 268);
              v279 = *((_QWORD *)v16 + 269);
              v265 = *((_QWORD *)v16 + 270);
              v249 = *((_QWORD *)v16 + 272);
              v275 = *((_QWORD *)v16 + 273);
              v190 = *((_QWORD *)v16 + 274);
              v251.m128i_i64[0] = *((_QWORD *)v16 + 275);
              v262 = *((_QWORD *)v16 + 276);
              v208.m128i_i64[0] = *((_QWORD *)v16 + 278);
              v273 = *((_QWORD *)v16 + 279);
              v191 = *((_QWORD *)v16 + 280);
              v264 = *((_QWORD **)v16 + 281);
              v260 = *((_QWORD *)v16 + 282);
              v255 = *((_QWORD *)v16 + 284);
              v272 = *((_QWORD *)v16 + 285);
              v247 = *((_QWORD *)v16 + 287);
              v259 = *((_QWORD *)v16 + 288);
              v204.m128i_i64[0] = *((_QWORD *)v16 + 290);
              v271 = *((_QWORD *)v16 + 291);
              *(__m128i *)(v16 + 2394) = _mm_load_si128((const __m128i *)&xmmword_1417EBD80);
              v27 = _mm_loadu_si128((const __m128i *)v16 + 146);
              LOBYTE(v28) = 1;
              v250 = *((_QWORD *)v16 + 293);
              v256 = *((_QWORD *)v16 + 294);
              v189 = *((_QWORD *)v16 + 295);
              if ( _InterlockedCompareExchange8((volatile signed __int8 *)v17, 1, 0) )
              {
                v244 = v270;
                v243 = v267;
                v242 = v203.m128i_i64[0];
                v241 = v254;
                v240 = v258;
                v239 = v263;
                v238 = v206.m128i_i64[0];
                v237 = v252;
                v236 = v261;
                v235 = v268;
                v234 = v253;
                v233 = v278;
                v232 = v207.m128i_i64[0];
                v231 = v266;
                v230 = v257;
                v229 = v276;
                v228 = v279;
                v227 = v265;
                v226 = v249;
                v225 = v275;
                v224 = v251.m128i_i64[0];
                v223 = v262;
                v222 = v208.m128i_i64[0];
                v221 = v273;
                v220 = v264;
                v219 = v260;
                v218 = v255;
                v217 = v272;
                v216 = v247;
                v215 = v259;
                v214 = v204.m128i_i64[0];
                v213 = v271;
                v212 = v250;
                v211 = v256;
                sub_14176CDB0(v17);
              }
              Address = (PVOID)v17;
              v29 = off_141FBA168;
              if ( 2 * *off_141FBA168 )
              {
                v244 = v270;
                v243 = v267;
                v242 = v203.m128i_i64[0];
                v241 = v254;
                v240 = v258;
                v239 = v263;
                v238 = v206.m128i_i64[0];
                v237 = v252;
                v236 = v261;
                v235 = v268;
                v234 = v253;
                v233 = v278;
                v232 = v207.m128i_i64[0];
                v231 = v266;
                v230 = v257;
                v229 = v276;
                v228 = v279;
                v227 = v265;
                v226 = v249;
                v225 = v275;
                v224 = v251.m128i_i64[0];
                v223 = v262;
                v222 = v208.m128i_i64[0];
                v221 = v273;
                v220 = v264;
                v219 = v260;
                v218 = v255;
                v217 = v272;
                v216 = v247;
                v215 = v259;
                v214 = v204.m128i_i64[0];
                v213 = v271;
                v212 = v250;
                v211 = v256;
                v103 = sub_14176DA50(v28);
                LOBYTE(v103) = v103 ^ 1;
                LODWORD(v205) = v103;
                v30 = (char *)Address;
                if ( !*((_BYTE *)Address + 1) )
                  goto LABEL_28;
              }
              else
              {
                LODWORD(v205) = 0;
                v30 = (char *)Address;
                if ( !*((_BYTE *)Address + 1) )
                  goto LABEL_28;
              }
              v119 = nullptr;
              v120 = 1;
              v121 = 0;
              v137.m128i_i64[0] = 1610612768;
              *(_QWORD *)&v136 = &v119;
              *((_QWORD *)&v136 + 1) = &off_141891B48;
              if ( (unsigned __int8)sub_1415544B0(
                                      "poisoned lock: another task failed insidefatal runtime error: thread result panick"
                                      "ed on drop, aborting\n",
                                      41,
                                      &v136) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v246,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v277 = v119;
              v274 = v120;
              v32 = (unsigned __int8)v121;
              v33 = HIBYTE(v121);
              v34 = *(unsigned __int16 *)((char *)&v121 + 5);
              v35 = *(unsigned int *)((char *)&v121 + 1);
              if ( !(_BYTE)v205 )
              {
                if ( 2 * *v29 )
                {
                  v244 = v270;
                  v243 = v267;
                  v242 = v203.m128i_i64[0];
                  v241 = v254;
                  v240 = v258;
                  v239 = v263;
                  v238 = v206.m128i_i64[0];
                  v237 = v252;
                  v236 = v261;
                  v235 = v268;
                  v234 = v253;
                  v233 = v278;
                  v232 = v207.m128i_i64[0];
                  v231 = v266;
                  v230 = v257;
                  v229 = v276;
                  v228 = v279;
                  v227 = v265;
                  v226 = v249;
                  v225 = v275;
                  v224 = v251.m128i_i64[0];
                  v223 = v262;
                  v222 = v208.m128i_i64[0];
                  v221 = v273;
                  v220 = v264;
                  v219 = v260;
                  v218 = v255;
                  v217 = v272;
                  v216 = v247;
                  v215 = v259;
                  v214 = v204.m128i_i64[0];
                  v213 = v271;
                  v212 = v250;
                  v211 = v256;
                  if ( !(unsigned __int8)sub_14176DA50(v31) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v36 = Address;
              v37 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v37 == 2 )
              {
                v244 = v270;
                v243 = v267;
                v242 = v203.m128i_i64[0];
                v241 = v254;
                v240 = v258;
                v239 = v263;
                v238 = v206.m128i_i64[0];
                v237 = v252;
                v236 = v261;
                v235 = v268;
                v234 = v253;
                v233 = v278;
                v232 = v207.m128i_i64[0];
                v231 = v266;
                v230 = v257;
                v229 = v276;
                v228 = v279;
                v227 = v265;
                v226 = v249;
                v225 = v275;
                v224 = v251.m128i_i64[0];
                v223 = v262;
                v222 = v208.m128i_i64[0];
                v221 = v273;
                v220 = v264;
                v219 = v260;
                v218 = v255;
                v217 = v272;
                v216 = v247;
                v215 = v259;
                v214 = v204.m128i_i64[0];
                v213 = v271;
                v212 = v250;
                v211 = v256;
                WakeByAddressSingle(v36);
              }
              if ( v277 != (_QWORD *)-1LL )
              {
                v38 = ((unsigned __int64)((v33 << 16) | v34) << 32) | v35;
                goto LABEL_53;
              }
              v30 = (char *)v274;
              LODWORD(v205) = v32;
LABEL_28:
              Address = v30;
              sub_140A80280(&v122, v30 + 8);
              if ( (v205 & 1) == 0 )
              {
                if ( 2 * *v29 )
                {
                  v244 = v270;
                  v243 = v267;
                  v242 = v203.m128i_i64[0];
                  v241 = v254;
                  v240 = v258;
                  v239 = v263;
                  v238 = v206.m128i_i64[0];
                  v237 = v252;
                  v236 = v261;
                  v235 = v268;
                  v234 = v253;
                  v233 = v278;
                  v232 = v207.m128i_i64[0];
                  v231 = v266;
                  v230 = v257;
                  v229 = v276;
                  v228 = v279;
                  v227 = v265;
                  v226 = v249;
                  v225 = v275;
                  v224 = v251.m128i_i64[0];
                  v223 = v262;
                  v222 = v208.m128i_i64[0];
                  v221 = v273;
                  v220 = v264;
                  v219 = v260;
                  v218 = v255;
                  v217 = v272;
                  v216 = v247;
                  v215 = v259;
                  v214 = v204.m128i_i64[0];
                  v213 = v271;
                  v212 = v250;
                  v211 = v256;
                  if ( !(unsigned __int8)sub_14176DA50(v43) )
                    *((_BYTE *)Address + 1) = 1;
                }
              }
              v44 = Address;
              v45 = *(_BYTE *)Address;
              *(_BYTE *)Address = 0;
              if ( v45 == 2 )
              {
                v244 = v270;
                v243 = v267;
                v242 = v203.m128i_i64[0];
                v241 = v254;
                v240 = v258;
                v239 = v263;
                v238 = v206.m128i_i64[0];
                v237 = v252;
                v236 = v261;
                v235 = v268;
                v234 = v253;
                v233 = v278;
                v232 = v207.m128i_i64[0];
                v231 = v266;
                v230 = v257;
                v229 = v276;
                v228 = v279;
                v227 = v265;
                v226 = v249;
                v225 = v275;
                v224 = v251.m128i_i64[0];
                v223 = v262;
                v222 = v208.m128i_i64[0];
                v221 = v273;
                v220 = v264;
                v219 = v260;
                v218 = v255;
                v217 = v272;
                v216 = v247;
                v215 = v259;
                v214 = v204.m128i_i64[0];
                v213 = v271;
                v212 = v250;
                v211 = v256;
                WakeByAddressSingle(v44);
              }
              v46 = v269 + 2394;
              *(_OWORD *)(v269 + 2394) = 0;
              *((_WORD *)v46 + 8) = 0;
              v152 = v251.m128i_i64[0];
              v153 = v262;
              v154 = v22;
              v155 = v273;
              v156 = v191;
              v157 = v279;
              v158 = v265;
              v159 = v21;
              v160 = v275;
              v161 = v190;
              sub_14172B820(&v137, v118, 152);
              sub_14172B820(v146, &v122, 992);
              v147 = v270;
              v148 = v267;
              v149 = v133;
              v150 = v254;
              v151 = v187;
              v162 = v258;
              v163 = v263;
              v164 = v134;
              v165 = v252;
              v166 = _mm_load_si128(&v135);
              v167 = v268;
              v168 = v18;
              v169 = v278;
              v170 = v19;
              v171 = v266;
              v172 = v20;
              v173 = v276;
              v174 = v188;
              v186 = v210;
              v175 = v264;
              v176 = v260;
              v177 = v23;
              v178 = v272;
              v179 = v24;
              v180 = v259;
              v181 = v25;
              v182 = v271;
              v136 = v26;
              v183 = v27;
              v184 = v256;
              v185 = v189;
              v47 = off_141FB97C0;
              if ( *((_DWORD *)off_141FB97C0 + 24) )
              {
                v248 = 1;
                v105 = off_141FB97C0;
                sub_14172E34C(off_141FB97C0);
                v47 = v105;
              }
              if ( *((_DWORD *)v47 + 4) == 2 )
              {
                v48 = 704;
                if ( *(_BYTE *)v47 )
                  v48 = 472;
                v49 = v47[1] + v48;
                v248 = 0;
                v50 = sub_140858EF0(v49, v47, &v136, &off_1417EBF48);
              }
              else
              {
                v51 = 704;
                if ( *((_BYTE *)v47 + 64) )
                  v51 = 472;
                v52 = v47[9] + v51;
                v248 = 0;
                v50 = sub_140858EF0(v52, v47 + 8, &v136, &off_1417EBF30);
              }
              a2 = v269;
              *((_QWORD *)v269 + 298) = v50;
LABEL_42:
              Address = a2 + 2384;
              sub_140502270(&v136, a2 + 2384, a3);
              v53 = v136;
              if ( (_QWORD)v136 == -2 )
              {
                v54 = v269;
                v269[2392] = 3;
                v54[2416] = 3;
                *(_QWORD *)a1 = 2;
                result = 3;
                goto LABEL_502;
              }
              if ( (_DWORD)v136 == -1 )
              {
                v274 = *((_QWORD *)&v136 + 1);
                LOBYTE(v32) = v137.m128i_i8[0];
                v38 = ((unsigned __int64)((v137.m128i_u8[7] << 16)
                                        | (unsigned int)*(unsigned __int16 *)((char *)&v137.m128i_u16[2] + 1)) << 32)
                    | *(unsigned int *)((char *)v137.m128i_u32 + 1);
                v277 = (_QWORD *)0x800000000000000CLL;
                v6 = v137.m128i_u64[1];
              }
              else
              {
                v277 = *((_QWORD **)&v136 + 1);
                v274 = v137.m128i_i64[0];
                LOBYTE(v32) = v137.m128i_i8[8];
                v38 = ((unsigned __int64)((v137.m128i_u8[15] << 16)
                                        | (unsigned int)*(unsigned __int16 *)((char *)&v137.m128i_u16[6] + 1)) << 32)
                    | *(unsigned int *)((char *)&v137.m128i_u32[2] + 1);
                v6 = v138.m128i_i64[0];
                sub_14172B820(&v119, &v138.m128i_u64[1], 680);
              }
              sub_14172B820(&v116, &v119, 680);
              v56 = *(_QWORD *)Address;
              v244 = v270;
              v243 = v267;
              v242 = v203.m128i_i64[0];
              v241 = v254;
              v240 = v258;
              v239 = v263;
              v238 = v206.m128i_i64[0];
              v237 = v252;
              v236 = v261;
              v235 = v268;
              v234 = v253;
              v233 = v278;
              v232 = v207.m128i_i64[0];
              v231 = v266;
              v230 = v257;
              v229 = v276;
              v228 = v279;
              v227 = v265;
              v226 = v249;
              v225 = v275;
              v224 = v251.m128i_i64[0];
              v223 = v262;
              v222 = v208.m128i_i64[0];
              v221 = v273;
              v220 = v264;
              v219 = v260;
              v218 = v255;
              v217 = v272;
              v216 = v247;
              v215 = v259;
              v214 = v204.m128i_i64[0];
              v213 = v271;
              v212 = v250;
              v211 = v256;
              if ( (unsigned __int8)sub_141398090(v56) )
              {
                v244 = v270;
                v243 = v267;
                v242 = v203.m128i_i64[0];
                v241 = v254;
                v240 = v258;
                v239 = v263;
                v238 = v206.m128i_i64[0];
                v237 = v252;
                v236 = v261;
                v235 = v268;
                v234 = v253;
                v233 = v278;
                v232 = v207.m128i_i64[0];
                v231 = v266;
                v230 = v257;
                v229 = v276;
                v228 = v279;
                v227 = v265;
                v226 = v249;
                v225 = v275;
                v224 = v251.m128i_i64[0];
                v223 = v262;
                v222 = v208.m128i_i64[0];
                v221 = v273;
                v220 = v264;
                v219 = v260;
                v218 = v255;
                v217 = v272;
                v216 = v247;
                v215 = v259;
                v214 = v204.m128i_i64[0];
                v213 = v271;
                v212 = v250;
                v211 = v256;
                sub_14139A2E0(v56);
              }
              if ( (_DWORD)v53 != -1 )
              {
                sub_14172B820(v115, &v116, 680);
                v57 = v269;
                *(_OWORD *)(v269 + 2394) = 0;
                *((_WORD *)v57 + 1205) = 0;
                goto LABEL_105;
              }
              *(_QWORD *)&v136 = v277;
              *((_QWORD *)&v136 + 1) = v274;
              v137.m128i_i8[0] = v32;
              *(__int32 *)((char *)v137.m128i_i32 + 1) = v38;
              v137.m128i_i8[7] = BYTE6(v38);
              *(__int16 *)((char *)&v137.m128i_i16[2] + 1) = WORD2(v38);
              v137.m128i_i64[1] = v6;
              v138 = _mm_loadu_si128(&v116);
              v200 = nullptr;
              v201 = 1;
              v202 = 0;
              v121 = 1610612768;
              v119 = &v200;
              v120 = (__int64)&off_141891B48;
              if ( (unsigned __int8)sub_1412DDF00(&v136, &v119) )
                sub_14176E860(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v246,
                  (unsigned int)&unk_141889838,
                  (__int64)&off_141891C00);
              v277 = v200;
              v274 = v201;
              LOBYTE(v32) = v202;
              v58 = HIBYTE(v202);
              v59 = *(unsigned __int16 *)((char *)&v202 + 5);
              v60 = *(unsigned int *)((char *)&v202 + 1);
              v244 = v270;
              v243 = v267;
              v242 = v203.m128i_i64[0];
              v241 = v254;
              v240 = v258;
              v239 = v263;
              v238 = v206.m128i_i64[0];
              v237 = v252;
              v236 = v261;
              v235 = v268;
              v234 = v253;
              v233 = v278;
              v232 = v207.m128i_i64[0];
              v231 = v266;
              v230 = v257;
              v229 = v276;
              v228 = v279;
              v227 = v265;
              v226 = v249;
              v225 = v275;
              v224 = v251.m128i_i64[0];
              v223 = v262;
              v222 = v208.m128i_i64[0];
              v221 = v273;
              v220 = v264;
              v219 = v260;
              v218 = v255;
              v217 = v272;
              v216 = v247;
              v215 = v259;
              v214 = v204.m128i_i64[0];
              v213 = v271;
              v212 = v250;
              v211 = v256;
              sub_140CAB2C0(&v136);
              v38 = ((unsigned __int64)((v58 << 16) | v59) << 32) | v60;
LABEL_53:
              v61 = v269;
              v62 = v270;
              v6 = v203.m128i_i64[0];
              if ( v269[2394] == 1 && (unsigned __int64)(v250 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v256, v250, 1);
              v61[2394] = 0;
              if ( v61[2395] == 1 && (unsigned __int64)(v204.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v271, v204.m128i_i64[0], 1);
              v61[2395] = 0;
              if ( v61[2396] == 1 && (unsigned __int64)(v247 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v259, v247, 1);
              v61[2396] = 0;
              if ( v61[2397] == 1 && (unsigned __int64)(v255 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v272, v255, 1);
              v61[2397] = 0;
              if ( v61[2398] == 1 && (unsigned __int64)v264 - 1 < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v260, v264, 1);
              v61[2398] = 0;
              if ( v61[2399] == 1 && (unsigned __int64)(v208.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v273, v208.m128i_i64[0], 1);
              v61[2399] = 0;
              if ( v61[2400] == 1 && (unsigned __int64)(v251.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v262, v251.m128i_i64[0], 1);
              v61[2400] = 0;
              if ( v61[2401] == 1 && (unsigned __int64)(v249 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v275, v249, 1);
              v61[2401] = 0;
              if ( v61[2402] == 1 && (unsigned __int64)(v279 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v265, v279, 1);
              v61[2402] = 0;
              if ( v61[2403] == 1 && (unsigned __int64)(v257 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v276, v257, 1);
              v61[2403] = 0;
              if ( v61[2404] == 1 && (unsigned __int64)(v207.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v266, v207.m128i_i64[0], 1);
              v61[2404] = 0;
              if ( v61[2405] == 1 && (unsigned __int64)(v253 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v278, v253, 1);
              v61[2405] = 0;
              if ( v61[2406] == 1 && (unsigned __int64)(v261 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v268, v261, 1);
              v61[2406] = 0;
              if ( v61[2407] == 1 && (unsigned __int64)(v206.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v252, v206.m128i_i64[0], 1);
              v61[2407] = 0;
              if ( v61[2408] == 1 && (unsigned __int64)(v258 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
                sub_140001660(v263, v258, 1);
              v61[2408] = 0;
              if ( ((v6 != 0) & v61[2409]) != 0 )
                sub_140001660(v254, v6, 1);
              v61[2409] = 0;
              if ( ((v62 != 0) & v61[2410]) != 0 )
                sub_140001660(v267, v62, 1);
              v61[2410] = 0;
              if ( v61[2411] )
                sub_140203A20(v118);
              v57 = v269;
              v269[2411] = 0;
              v53 = 2;
LABEL_105:
              v63 = v209;
              v57[2392] = 1;
              sub_140CA4A50(v63);
              v68 = v38 << 8;
              v9 = v68 | (unsigned __int8)v32;
              if ( (_DWORD)v53 == 2 )
              {
                if ( v68 < 0 )
                {
                  v69 = 0;
                  goto LABEL_108;
                }
                v70 = 1;
                v71 = 1;
                if ( v9 )
                {
                  nullsub_1(v65, v64, v66, v67, v114);
                  v69 = 1;
                  v72 = sub_140001650(v9, 1);
                  if ( !v72 )
LABEL_108:
                    sub_14176E54B(v69, v9);
                  v71 = v72;
                  sub_14172B820(v72, v274, v9);
                }
                v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v71);
                v7 = 3;
                if ( v277 )
                  sub_140001660(v274, v277, 1);
              }
              else
              {
                sub_14172B820(v195, v115, 680);
                v192 = (const char *)v53;
                *(_QWORD *)v193 = v277;
                *(_QWORD *)&v193[8] = v274;
                *(_QWORD *)&v193[16] = v68 | (unsigned __int8)v32;
                v194 = (_BYTE *)v6;
                sub_14050A7C0(&v136, &v192);
                v6 = *(unsigned int *)((char *)&v136 + 10) | ((unsigned __int64)HIWORD(v136) << 32);
                v7 = BYTE8(v136);
                LOBYTE(v68) = BYTE9(v136);
                v8 = _mm_loadu_si128(&v137);
                v9 = v138.m128i_i64[0];
                if ( (_QWORD)v136 == -1 )
                {
                  v70 = 0;
                }
                else
                {
                  v137 = v8;
                  v116.m128i_i64[0] = 0;
                  v116.m128i_i64[1] = 1;
                  v117 = 0;
                  v124.m128i_i64[0] = 1610612768;
                  v122 = &v116;
                  v123 = &off_141891B48;
                  if ( (unsigned __int8)sub_1412DDF00(&v136, &v122) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v246,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v8 = _mm_load_si128(&v116);
                  v9 = v117;
                  sub_140CAB2C0(&v136);
                  v70 = 1;
                  v7 = 3;
                }
              }
              v73 = v269;
              v269[2416] = 1;
              sub_140CAB140(v73);
              if ( *((_QWORD *)v269 + 65) != -1 )
              {
                v277 = v269 + 528;
                v74 = *((_QWORD **)v269 + 66);
                v251.m128i_i64[0] = *((_QWORD *)v269 + 67);
                v279 = 0;
                v264 = v74;
                while ( v251.m128i_i64[0] != v279 )
                {
                  ++v279;
                  v75 = v74 + 12;
                  sub_140401FB0();
                  v74 = v75;
                }
                v76 = *((_QWORD *)v269 + 65);
                if ( v76 )
LABEL_499:
                  sub_140001660(*v277, 96 * v76, 8);
              }
LABEL_501:
              *(_QWORD *)a1 = v70;
              *(_BYTE *)(a1 + 8) = v7;
              *(_BYTE *)(a1 + 9) = v68;
              *(_DWORD *)(a1 + 10) = v6;
              *(_WORD *)(a1 + 14) = WORD2(v6);
              *(__m128i *)(a1 + 16) = v8;
              *(_QWORD *)(a1 + 32) = v9;
              result = 1;
              v54 = v269;
LABEL_502:
              v54[2424] = result;
              return result;
            case 1:
LABEL_358:
              sub_14176EC00(&off_141888718);
            case 2:
LABEL_356:
              sub_14176EC20(&off_141888718);
            case 3:
              goto LABEL_42;
          }
      }
  }
}
