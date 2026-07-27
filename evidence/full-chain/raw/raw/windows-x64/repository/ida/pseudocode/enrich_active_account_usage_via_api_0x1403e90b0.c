// module: codexmate_lib/core/repository
// addr: 0x1403e90b0
// name: enrich_active_account_usage_via_api
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::repository::enrich_active_account_usage_via_api | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall enrich_active_account_usage_via_api(__int64 a1, _BYTE *a2, unsigned __int8 a3)
{
  __int64 v3; // rsi
  __int64 *v4; // r12
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int128 v8; // kr00_16
  __int8 v9; // r14
  char *v10; // r15
  char v11; // al
  int v12; // ecx
  unsigned __int8 v13; // bl
  _BYTE *v14; // rdi
  unsigned __int8 v15; // bl
  _BYTE *v16; // rdi
  int v17; // eax
  _BYTE *v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  PVOID v23; // rcx
  char v24; // al
  __int64 v25; // rcx
  char *v26; // r15
  void *v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // al
  unsigned __int32 v34; // edi
  __int32 v35; // r15d
  int v36; // esi
  unsigned __int32 v37; // eax
  __int64 v38; // r8
  unsigned int v39; // r14d
  unsigned __int8 *v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r12
  char v43; // bl
  __int64 v44; // rax
  int v45; // r13d
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // rbx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 *v52; // rdx
  __int64 *v53; // rax
  __int64 v54; // rbx
  __int64 v55; // r12
  int v56; // r13d
  int v57; // r15d
  __int64 v58; // rsi
  __int64 v59; // rbx
  __int64 v60; // rdi
  char v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // edx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rbx
  signed __int64 v70; // rcx
  __int64 v71; // r8
  unsigned __int64 v72; // r9
  __int64 v73; // r10
  __int64 v74; // r9
  unsigned __int64 v75; // r15
  __int64 v76; // r13
  char v77; // bl
  void *v78; // rax
  void *v79; // r15
  char v80; // bl
  __int64 v81; // rdx
  __int64 v82; // r15
  __int64 v83; // rcx
  __int64 v84; // rdx
  char v85; // al
  __int64 v86; // r14
  __int64 v87; // r12
  char v88; // r15
  unsigned __int64 v89; // rbx
  char v90; // al
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rbx
  unsigned __int64 v94; // r13
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  int v99; // edx
  __int64 v100; // r14
  __int64 v101; // rbx
  __int64 v102; // r15
  __int64 v103; // rbx
  __int64 v104; // r15
  int v105; // edx
  int v106; // ecx
  unsigned int v107; // ecx
  volatile signed __int8 *v108; // r15
  __int64 v109; // rdi
  __int64 v110; // rbx
  _QWORD *v111; // r14
  __int64 v112; // rdx
  __int64 v113; // rdi
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  int v117; // r12d
  __int64 v118; // rdi
  __int64 v119; // rbx
  __int64 v120; // rax
  __int64 v121; // rcx
  bool v122; // zf
  __int64 v123; // r14
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int32 v128; // edx
  int v129; // edx
  __int64 v130; // rax
  _QWORD *v131; // r14
  __int64 v132; // rdx
  __int64 *v133; // r15
  _QWORD *v134; // rbx
  __int64 v135; // rdx
  __int128 v136; // kr60_16
  __int8 v137; // r14
  char *v138; // rcx
  char v139; // al
  int v140; // eax
  int v141; // eax
  __int64 v142; // rcx
  __int64 v143; // rsi
  void *v144; // rax
  __int64 v145; // rdi
  __int64 v146; // rax
  __int64 v147; // rcx
  __int128 v148; // xmm0
  __int128 v149; // xmm1
  __int64 v150; // rdx
  __int64 v151; // rcx
  char v152; // al
  __int64 v153; // rdi
  _QWORD *v154; // rbx
  __int64 v155; // rdx
  char v157; // al
  _BYTE v158[1072]; // [rsp+60h] [rbp-20h] BYREF
  __m256i v159; // [rsp+490h] [rbp+410h] BYREF
  __int128 v160; // [rsp+4B0h] [rbp+430h]
  __int128 v161; // [rsp+4C0h] [rbp+440h]
  __int128 v162; // [rsp+4D0h] [rbp+450h]
  __int128 v163; // [rsp+4E0h] [rbp+460h]
  __int128 v164; // [rsp+7C0h] [rbp+740h] BYREF
  __m256i v165; // [rsp+7D0h] [rbp+750h]
  __int64 v166; // [rsp+808h] [rbp+788h]
  __int64 v167; // [rsp+810h] [rbp+790h]
  __int128 v168; // [rsp+A60h] [rbp+9E0h]
  unsigned __int64 v169; // [rsp+A70h] [rbp+9F0h]
  __int128 v170; // [rsp+A78h] [rbp+9F8h]
  __int128 v171; // [rsp+A88h] [rbp+A08h]
  __int128 v172; // [rsp+A98h] [rbp+A18h]
  __int128 v173; // [rsp+AA8h] [rbp+A28h]
  __int128 v174; // [rsp+AB8h] [rbp+A38h]
  __int128 v175; // [rsp+AC8h] [rbp+A48h]
  __int128 v176; // [rsp+AD8h] [rbp+A58h]
  __int64 v177; // [rsp+AE8h] [rbp+A68h]
  __m256i v178; // [rsp+AF0h] [rbp+A70h] BYREF
  __int128 v179; // [rsp+B10h] [rbp+A90h] BYREF
  __int128 v180; // [rsp+B20h] [rbp+AA0h]
  __int128 v181; // [rsp+B30h] [rbp+AB0h]
  __int128 v182; // [rsp+B40h] [rbp+AC0h]
  __int64 v183; // [rsp+B50h] [rbp+AD0h]
  _BYTE v184[176]; // [rsp+B60h] [rbp+AE0h] BYREF
  unsigned __int64 v185; // [rsp+C10h] [rbp+B90h]
  __m256i *v186; // [rsp+F28h] [rbp+EA8h] BYREF
  __int128 v187; // [rsp+F30h] [rbp+EB0h] BYREF
  _OWORD v188[5]; // [rsp+F40h] [rbp+EC0h] BYREF
  __int64 v189[3]; // [rsp+F98h] [rbp+F18h] BYREF
  char v190; // [rsp+FB0h] [rbp+F30h]
  __int64 v191; // [rsp+FC0h] [rbp+F40h] BYREF
  char v192[344]; // [rsp+FC8h] [rbp+F48h] BYREF
  char v193[32]; // [rsp+1120h] [rbp+10A0h] BYREF
  __int64 v194; // [rsp+1140h] [rbp+10C0h]
  __int64 v195; // [rsp+1148h] [rbp+10C8h]
  __int64 v196; // [rsp+1158h] [rbp+10D8h]
  __int64 v197; // [rsp+1160h] [rbp+10E0h]
  char v198[88]; // [rsp+11D0h] [rbp+1150h] BYREF
  __int64 v199; // [rsp+1228h] [rbp+11A8h] BYREF
  __int64 v200; // [rsp+1230h] [rbp+11B0h]
  __int64 v201; // [rsp+1238h] [rbp+11B8h]
  __int128 v202; // [rsp+1250h] [rbp+11D0h]
  unsigned __int64 v203; // [rsp+1260h] [rbp+11E0h]
  __int128 v204; // [rsp+1268h] [rbp+11E8h] BYREF
  __int64 v205; // [rsp+1278h] [rbp+11F8h]
  __int128 v206; // [rsp+1280h] [rbp+1200h]
  __int64 v207; // [rsp+1290h] [rbp+1210h]
  __int128 v208; // [rsp+1298h] [rbp+1218h]
  __int64 v209; // [rsp+12A8h] [rbp+1228h]
  int v210; // [rsp+12B0h] [rbp+1230h]
  int v211; // [rsp+12B4h] [rbp+1234h]
  __int64 v212; // [rsp+12B8h] [rbp+1238h]
  __int64 v213; // [rsp+12C0h] [rbp+1240h]
  __int64 v214; // [rsp+12C8h] [rbp+1248h]
  __int128 v215; // [rsp+12D0h] [rbp+1250h]
  __int128 v216; // [rsp+12E0h] [rbp+1260h]
  __int128 v217; // [rsp+12F0h] [rbp+1270h]
  __int128 v218; // [rsp+1300h] [rbp+1280h]
  __int128 v219; // [rsp+1310h] [rbp+1290h]
  __int128 v220; // [rsp+1320h] [rbp+12A0h]
  __int128 v221; // [rsp+1330h] [rbp+12B0h]
  __int64 v222; // [rsp+1340h] [rbp+12C0h]
  __int64 v223; // [rsp+1348h] [rbp+12C8h]
  char v224; // [rsp+1350h] [rbp+12D0h]
  __int128 v225; // [rsp+1358h] [rbp+12D8h] BYREF
  __int64 v226; // [rsp+1368h] [rbp+12E8h]
  __int128 v227; // [rsp+1370h] [rbp+12F0h]
  __int64 v228; // [rsp+1380h] [rbp+1300h]
  __int64 v229; // [rsp+1388h] [rbp+1308h] BYREF
  __int128 v230; // [rsp+1390h] [rbp+1310h]
  char v231; // [rsp+13A0h] [rbp+1320h]
  __int64 v232; // [rsp+13A8h] [rbp+1328h]
  __int64 v233; // [rsp+13B0h] [rbp+1330h]
  __int64 v234; // [rsp+13B8h] [rbp+1338h]
  unsigned __int64 v235; // [rsp+13C0h] [rbp+1340h]
  __int64 v236; // [rsp+13C8h] [rbp+1348h]
  __int64 v237; // [rsp+13D0h] [rbp+1350h]
  __int64 v238; // [rsp+13D8h] [rbp+1358h]
  __int128 v239; // [rsp+13E0h] [rbp+1360h]
  __int64 v240; // [rsp+13F0h] [rbp+1370h]
  __int64 v241; // [rsp+13F8h] [rbp+1378h]
  __int64 v242; // [rsp+1408h] [rbp+1388h] BYREF
  __int64 v243; // [rsp+1410h] [rbp+1390h]
  __int64 v244; // [rsp+1418h] [rbp+1398h]
  __int128 v245; // [rsp+1420h] [rbp+13A0h] BYREF
  __int128 v246; // [rsp+1430h] [rbp+13B0h]
  __int128 v247; // [rsp+1440h] [rbp+13C0h]
  __int128 v248; // [rsp+1450h] [rbp+13D0h]
  __int128 v249; // [rsp+1460h] [rbp+13E0h]
  __int128 v250; // [rsp+1470h] [rbp+13F0h]
  __m128i v251; // [rsp+1488h] [rbp+1408h] BYREF
  __int64 v252; // [rsp+14A0h] [rbp+1420h] BYREF
  __int64 v253; // [rsp+14A8h] [rbp+1428h]
  __int64 v254; // [rsp+14B0h] [rbp+1430h]
  __int64 v255; // [rsp+14B8h] [rbp+1438h]
  __int64 v256; // [rsp+14C0h] [rbp+1440h]
  __int64 v257; // [rsp+14C8h] [rbp+1448h]
  _QWORD *v258; // [rsp+14D0h] [rbp+1450h]
  __int64 v259; // [rsp+14D8h] [rbp+1458h]
  __int128 v260; // [rsp+14E0h] [rbp+1460h] BYREF
  __int128 v261; // [rsp+14F0h] [rbp+1470h]
  __int128 v262; // [rsp+1500h] [rbp+1480h]
  __int128 v263; // [rsp+1510h] [rbp+1490h]
  __int128 v264; // [rsp+1520h] [rbp+14A0h]
  __int128 v265; // [rsp+1530h] [rbp+14B0h]
  __int64 v266; // [rsp+1540h] [rbp+14C0h]
  __int64 v267; // [rsp+1548h] [rbp+14C8h]
  char v268; // [rsp+1550h] [rbp+14D0h]
  __int128 v269; // [rsp+1558h] [rbp+14D8h]
  __int64 v270; // [rsp+1568h] [rbp+14E8h]
  __int64 v271; // [rsp+1570h] [rbp+14F0h]
  char v272; // [rsp+1578h] [rbp+14F8h]
  _BYTE v273[28]; // [rsp+1580h] [rbp+1500h] BYREF
  __int64 v274; // [rsp+159Ch] [rbp+151Ch]
  __int64 v275; // [rsp+15A8h] [rbp+1528h]
  __int64 v276; // [rsp+15B0h] [rbp+1530h]
  __int64 v277; // [rsp+15B8h] [rbp+1538h]
  __int64 v278; // [rsp+15C0h] [rbp+1540h]
  _DWORD v279[2]; // [rsp+15C8h] [rbp+1548h]
  __int64 v280; // [rsp+15D0h] [rbp+1550h]
  __int64 v281; // [rsp+15D8h] [rbp+1558h]
  __int64 v282; // [rsp+15E0h] [rbp+1560h]
  void *v283; // [rsp+15E8h] [rbp+1568h]
  int v284; // [rsp+15F0h] [rbp+1570h]
  int v285; // [rsp+15F4h] [rbp+1574h]
  __int64 v286; // [rsp+15F8h] [rbp+1578h]
  __int64 *v287; // [rsp+1600h] [rbp+1580h]
  __int64 v288; // [rsp+1608h] [rbp+1588h]
  __int128 v289; // [rsp+1610h] [rbp+1590h] BYREF
  __int64 v290; // [rsp+1620h] [rbp+15A0h]
  int v291; // [rsp+162Ch] [rbp+15ACh]
  __int128 v292; // [rsp+1630h] [rbp+15B0h] BYREF
  __int64 v293; // [rsp+1640h] [rbp+15C0h]
  unsigned __int8 v294; // [rsp+1655h] [rbp+15D5h]
  bool v295; // [rsp+1656h] [rbp+15D6h]
  char v296; // [rsp+1657h] [rbp+15D7h]
  PVOID Address; // [rsp+1658h] [rbp+15D8h]
  __int64 v298; // [rsp+1660h] [rbp+15E0h]
  char v299; // [rsp+1668h] [rbp+15E8h]
  char v300; // [rsp+1669h] [rbp+15E9h]
  char v301; // [rsp+166Ah] [rbp+15EAh]
  char v302; // [rsp+166Bh] [rbp+15EBh]
  char v303; // [rsp+166Ch] [rbp+15ECh] BYREF
  char v304; // [rsp+166Dh] [rbp+15EDh]
  char v305; // [rsp+166Eh] [rbp+15EEh]
  char v306; // [rsp+166Fh] [rbp+15EFh]
  __int64 v307; // [rsp+1670h] [rbp+15F0h]

  v307 = -2;
  v3 = a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8(a2, 1, 0) )
  {
    v13 = a3;
    v14 = a2;
    sub_1416C15B0(a2);
    a2 = v14;
    a3 = v13;
  }
  v4 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v15 = a3;
    v16 = a2;
    v17 = sub_1416C2250(a1, a2);
    a2 = v16;
    a3 = v15;
    LOBYTE(v17) = v17 ^ 1;
    LODWORD(v298) = v17;
    LOBYTE(v17) = v16[1];
    Address = v16;
    if ( (_BYTE)v17 )
      goto LABEL_5;
  }
  else
  {
    LODWORD(v298) = 0;
    v5 = a2[1];
    Address = a2;
    if ( v5 )
    {
LABEL_5:
      v178.m256i_i64[0] = 0;
      *(_OWORD *)&v178.m256i_u64[1] = 1u;
      *((_QWORD *)&v187 + 1) = 1610612768;
      v186 = &v178;
      *(_QWORD *)&v187 = &off_141754110;
      if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v186) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_1,
          55,
          (unsigned int)&v303,
          (unsigned int)&unk_14174DE40,
          (__int64)&off_1417541C8);
      v8 = *(_OWORD *)v178.m256i_i8;
      v9 = v178.m256i_i8[16];
      v279[0] = *(__int32 *)((char *)&v178.m256i_i32[4] + 1);
      *(_DWORD *)((char *)v279 + 3) = v178.m256i_i32[5];
      v10 = (char *)Address;
      if ( !(_BYTE)v298 && 2 * *v4 && !(unsigned __int8)sub_1416C2250(v7, v6) )
        v10[1] = 1;
      v11 = *v10;
      *v10 = 0;
      if ( v11 == 2 )
        WakeByAddressSingle(v10);
      *(_OWORD *)(v3 + 8) = v8;
      *(_BYTE *)(v3 + 24) = v9;
      v12 = *(_DWORD *)((char *)v279 + 3);
      *(_DWORD *)(v3 + 25) = v279[0];
      *(_DWORD *)(v3 + 28) = v12;
      *(_QWORD *)v3 = -1;
      return v3;
    }
  }
  v282 = v3;
  v294 = a3;
  v18 = a2 + 8;
  load_local_state_synced((__int64)&v186, (__int64)(a2 + 8));
  v19 = (__int64)v186;
  if ( v186 == (__m256i *)2 )
  {
    v163 = v188[4];
    v162 = v188[3];
    v161 = v188[2];
    v160 = v188[1];
    *(_OWORD *)&v159.m256i_u64[2] = v188[0];
    *(_OWORD *)v159.m256i_i8 = v187;
    *(_QWORD *)&v260 = 0;
    *((_QWORD *)&v260 + 1) = 1;
    *(_QWORD *)&v261 = 0;
    v165.m256i_i64[0] = 1610612768;
    *(_QWORD *)&v164 = &v260;
    *((_QWORD *)&v164 + 1) = &off_141754110;
    if ( (unsigned __int8)sub_140B036A0(&v159, &v164) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)&v303,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    *(_QWORD *)&v246 = v261;
    v245 = v260;
    sub_14034ED40(&v187);
    v22 = v245;
    v239 = v245;
    v240 = v246;
    v3 = v282;
    *(_QWORD *)(v282 + 24) = v246;
    *(_OWORD *)(v3 + 8) = v22;
    *(_QWORD *)v3 = -1;
    if ( !(_BYTE)v298 && 2 * *v4 && !(unsigned __int8)sub_1416C2250(v21, v20) )
      *((_BYTE *)Address + 1) = 1;
    v23 = Address;
    v24 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v24 == 2 )
      WakeByAddressSingle(v23);
    return v3;
  }
  *(_QWORD *)&v273[16] = *(_QWORD *)&v188[0];
  *(_OWORD *)v273 = v187;
  sub_141684120(&v179, (char *)v188 + 8, 1040);
  v240 = *(_QWORD *)&v273[16];
  *(_OWORD *)&v178.m256i_u64[1] = *(_OWORD *)v273;
  v178.m256i_i64[3] = *(_QWORD *)&v273[16];
  v178.m256i_i64[0] = v19;
  v26 = (char *)Address;
  v27 = *((void **)Address + 67);
  if ( (__int64)v27 < 0 )
  {
    v28 = 0;
    goto LABEL_20;
  }
  if ( v27 )
  {
    v29 = *((_QWORD *)Address + 66);
    nullsub_1(v25);
    v28 = 1;
    v30 = sub_140001650(v27, 1);
    if ( !v30 )
LABEL_20:
      sub_1416C2D4B(v28, v27);
    v286 = v30;
    sub_141684120(v30, v29, v27);
  }
  else
  {
    v286 = 1;
  }
  v258 = v18;
  sub_141684120(v158, &v178, 1072);
  if ( !(_BYTE)v298 && 2 * *v4 && !(unsigned __int8)sub_1416C2250(v32, v31) )
    v26[1] = 1;
  v283 = v27;
  v33 = *v26;
  *v26 = 0;
  if ( v33 == 2 )
    WakeByAddressSingle(Address);
  sub_141684120(&v186, v158, 1072);
  v305 = 1;
  v304 = 1;
  sub_140FFA6E0(&v178);
  v34 = v178.m256i_i32[0];
  v35 = (v178.m256i_i32[0] >> 13) - 1;
  v36 = 0;
  if ( v178.m256i_i32[0] >> 13 <= 0 )
  {
    v37 = (1 - (v178.m256i_i32[0] >> 13)) / 0x190u + 1;
    v35 += 400 * v37;
    v36 = -146097 * v37;
  }
  if ( !v203 )
  {
    v39 = 0;
    goto LABEL_40;
  }
  if ( v203 < 4 )
  {
    v38 = 0;
    v39 = 0;
LABEL_38:
    v41 = 0;
    do
    {
      v39 += *(unsigned __int8 *)(352 * v38 + *((_QWORD *)&v202 + 1) + 337 + v41);
      v41 += 352;
    }
    while ( 352 * (v203 & 3) != v41 );
    goto LABEL_40;
  }
  v40 = (unsigned __int8 *)(*((_QWORD *)&v202 + 1) + 1393LL);
  v38 = 0;
  v39 = 0;
  do
  {
    v39 += *(v40 - 1056) + *(v40 - 704) + *(v40 - 352) + *v40;
    v38 += 4;
    v40 += 1408;
  }
  while ( (v203 & 0xFFFFFFFFFFFFFFFCuLL) != v38 );
  if ( (v203 & 3) != 0 )
    goto LABEL_38;
LABEL_40:
  v42 = v178.m256i_u32[2];
  v43 = v190;
  v298 = v178.m256i_u32[1];
  if ( v189[0] == -1 )
  {
    v44 = -1;
  }
  else
  {
    v305 = 1;
    v304 = 1;
    sub_14149C500(&v178, v189);
    v44 = v178.m256i_i64[0];
    *(_OWORD *)v159.m256i_i8 = *(_OWORD *)&v178.m256i_u64[1];
  }
  v45 = v36;
  v231 = v43;
  v275 = v44;
  v229 = v44;
  v230 = *(_OWORD *)v159.m256i_i8;
  sub_14149BB70(&v178, v196, v197);
  v288 = v178.m256i_i64[1];
  v276 = v178.m256i_i64[0];
  v46 = v178.m256i_i64[2];
  sub_14149BB70(&v178, v194, v195);
  v232 = v46;
  v280 = v178.m256i_i64[1];
  v277 = v178.m256i_i64[0];
  v47 = v178.m256i_i64[2];
  LOBYTE(v48) = 1;
  sub_1403C0330(&v242, &v186, v48);
  v49 = v244;
  v300 = 1;
  v287 = (__int64 *)v243;
  v281 = v243 + 296 * v244;
  sub_140328880(&v252);
  v50 = (unsigned __int64)(1374389535LL * v35) >> 63;
  v51 = 1000
      * (v298
       + 86400LL * (int)(((v35 / 100) >> 2) + ((1461 * v35) >> 2) + v45 + ((v34 >> 4) & 0x1FF) - v35 / 100 - 719163));
  *(_QWORD *)v273 = v39;
  v255 = v39 - (unsigned int)v49;
  *(_DWORD *)&v273[8] = v39 - v49;
  *(_OWORD *)&v273[12] = 0;
  v274 = 0;
  v295 = v49 == 0;
  if ( !v49 )
  {
    v178.m256i_i64[0] = -1;
    LOBYTE(v50) = 1;
    sub_1403BA4B0((unsigned int)&v186, v50, (unsigned int)&v178, v51 + (unsigned int)v42 / 0xF4240, (__int64)v273);
    v108 = (volatile signed __int8 *)Address;
    v109 = v253;
    v110 = v254;
    if ( v254 )
    {
      v111 = (_QWORD *)(v253 + 8);
      do
      {
        v112 = *(v111 - 1);
        if ( v112 )
          sub_140001660(*v111, v112, 1);
        v111 += 3;
        --v110;
      }
      while ( v110 );
    }
    if ( v252 )
      sub_140001660(v109, 24 * v252, 8);
    sub_1402C8DF0((__int64)v287, 0);
    if ( v242 )
      sub_140001660(v287, 296 * v242, 8);
    v113 = v288;
    v114 = v280;
    if ( v277 )
      sub_140001660(v280, v277, 1);
    if ( v276 )
      sub_140001660(v113, v276, 1);
    v115 = v275;
    if ( (unsigned __int64)(v275 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_189;
    goto LABEL_190;
  }
  v235 = v51 + ((unsigned __int64)(1125899907 * v42) >> 50);
  v52 = v287;
  *(_QWORD *)&v239 = v287;
  *((_QWORD *)&v239 + 1) = v287;
  v278 = v242;
  v240 = v242;
  v53 = (__int64 *)v281;
  v241 = v281;
  v259 = 0;
  v291 = 0;
  v284 = 0;
  v285 = 0;
  while ( 1 )
  {
    if ( v52 == v53 )
    {
      v116 = (__int64)v53;
      goto LABEL_165;
    }
    v298 = (__int64)(v52 + 37);
    *((_QWORD *)&v239 + 1) = v52 + 37;
    v54 = *v52;
    sub_141684120(&v159, v52 + 1, 288);
    if ( v54 == 2 )
      break;
    v55 = v47;
    v178.m256i_i64[0] = v54;
    sub_141684120(&v178.m256i_u64[1], &v159, 288);
    sub_1404220D0(&v164, v184);
    v56 = DWORD2(v182);
    v57 = v183;
    v58 = v232;
    v59 = v288;
    v60 = v280;
    refresh_token_with_policy(
      &v251,
      *((__int64 *)&v182 + 1),
      v183,
      (__int64 *)&v164,
      (__int64)&v229,
      v280,
      v55,
      v288,
      v232,
      0);
    sub_1403C0F50(
      (unsigned int)&v260,
      v56,
      v57,
      (unsigned int)&v164,
      (__int64)&v251,
      (__int64)&v229,
      v60,
      v55,
      v59,
      v58,
      1);
    v47 = v55;
    v250 = v265;
    v249 = v264;
    v248 = v263;
    v247 = v262;
    v246 = v261;
    v245 = v260;
    v61 = v266;
    v306 = 1;
    log_token_refresh_outcome((__int64)aActiveUsage, 12, v251.m128i_i64);
    v306 = 1;
    LODWORD(v292) = sub_141475580(v63, v62, v64, v65);
    DWORD1(v292) = v66;
    v306 = 1;
    sub_141475530(&v260, &v292, 3577643008LL, 27111902);
    v68 = 0;
    v69 = 0;
    if ( !(_BYTE)v260 )
      v69 = *((_QWORD *)&v260 + 1);
    if ( v166 != -1 )
    {
      v306 = 1;
      if ( sub_1409DC570(v167) == 1 )
      {
        v67 += v69;
        v68 = 1;
      }
      else
      {
        v68 = 0;
      }
    }
    v70 = v251.m128i_i64[0];
    v71 = 4;
    if ( v251.m128i_i64[0] < 0 )
      v71 = v251.m128i_u32[0];
    if ( v251.m128i_i64[0] >= (__int64)0x8000000000000002uLL )
    {
      v255 = (unsigned int)(v255 + 1);
      *(_DWORD *)&v273[8] = v255;
      v72 = v185;
      if ( v185 >= v203 )
        goto LABEL_61;
LABEL_60:
      v73 = *((_QWORD *)&v202 + 1);
      v74 = 352 * v72;
      *(_QWORD *)(*((_QWORD *)&v202 + 1) + v74 + 160) = v68;
      *(_QWORD *)(v73 + v74 + 168) = v67;
      *(_BYTE *)(v73 + v74 + 176) = v71;
      goto LABEL_61;
    }
    *(_DWORD *)&v273[4] = ++v285;
    v72 = v185;
    if ( v185 < v203 )
      goto LABEL_60;
LABEL_61:
    if ( !v61 )
    {
      if ( v70 >= (__int64)0x8000000000000002uLL )
      {
        v306 = 1;
        sub_1409D7870(&v260, &v229, 0);
        v80 = BYTE8(v263);
        v81 = -1;
        if ( !BYTE8(v263) )
        {
          v81 = *((_QWORD *)&v261 + 1);
          v234 = *((_QWORD *)&v262 + 1);
          v257 = v262;
        }
        if ( v185 < v203 && *(_BYTE *)(*((_QWORD *)&v202 + 1) + 352 * v185 + 337) )
        {
          v224 = 2 - BYTE8(v263);
          if ( v212 > 0 )
          {
            v82 = v81;
            sub_140001660(v213, v212, 1);
            v81 = v82;
          }
          v212 = v81;
          v213 = v257;
          v214 = v234;
        }
        else if ( v81 > 0 )
        {
          sub_140001660(v257, v81, 1);
        }
        if ( (_QWORD)v260 )
          sub_140001660(*((_QWORD *)&v260 + 1), v260, 1);
        if ( v80 )
        {
          v84 = *((_QWORD *)&v261 + 1);
          if ( *((_QWORD *)&v261 + 1) )
          {
            v83 = v262;
            goto LABEL_103;
          }
        }
      }
      else
      {
        nullsub_1(v70);
        v78 = (void *)sub_140001650(53, 1);
        if ( !v78 )
        {
          v306 = 1;
          sub_1416C2D4B(1, 53);
        }
        v79 = v78;
        qmemcpy(v78, "refreshed account snapshot has no API request context", 53);
        if ( (__int64)v206 > 0 )
          sub_140001660(*((_QWORD *)&v206 + 1), v206, 1);
        *(_QWORD *)&v206 = 53;
        *((_QWORD *)&v206 + 1) = v79;
        v207 = 53;
      }
LABEL_104:
      if ( (_QWORD)v245 != -1 )
        sub_14034ED40(&v245);
LABEL_106:
      if ( v251.m128i_i64[0] > 0 )
        sub_140001660(v251.m128i_i64[1], v251.m128i_i64[0], 1);
      goto LABEL_108;
    }
    ++v210;
    *(_DWORD *)&v273[24] = ++v284;
    if ( v70 >= (__int64)0x8000000000000002uLL )
    {
      HIDWORD(v274) = ++v291;
      if ( (_QWORD)v245 != -1 )
      {
        *(_QWORD *)&v292 = 0;
        *((_QWORD *)&v292 + 1) = 1;
        v293 = 0;
        *(_QWORD *)&v261 = 1610612768;
        *(_QWORD *)&v260 = &v292;
        *((_QWORD *)&v260 + 1) = &off_141754110;
        if ( (unsigned __int8)sub_140B036A0(&v245, &v260) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_1,
            55,
            (unsigned int)&v303,
            (unsigned int)&unk_14174DE40,
            (__int64)&off_1417541C8);
        v290 = v293;
        v289 = v292;
        if ( (__int64)v206 > 0 )
          sub_140001660(*((_QWORD *)&v206 + 1), v206, 1);
        v207 = v290;
        v206 = v289;
        v306 = 1;
        sub_14149C500(&v260, &v179);
        v293 = v261;
        v292 = v260;
        if ( (__int64)v208 > 0 )
          sub_140001660(*((_QWORD *)&v208 + 1), v208, 1);
        v209 = v293;
        v208 = v292;
        v75 = v185;
        v76 = -1;
        v77 = 1;
        if ( (_QWORD)v245 == 6 )
        {
          v306 = 1;
          if ( sub_141031770((__int64)&v245 + 8) || (v306 = 1, (unsigned __int8)sub_141031800((__int64)&v245 + 8)) )
            v77 = 2;
          v306 = 1;
          if ( sub_141031770((__int64)&v245 + 8) || (v306 = 1, (unsigned __int8)sub_141031800((__int64)&v245 + 8)) )
          {
            *(_QWORD *)&v292 = 0;
            *((_QWORD *)&v292 + 1) = 1;
            v293 = 0;
            *(_QWORD *)&v261 = 1610612768;
            *(_QWORD *)&v260 = &v292;
            *((_QWORD *)&v260 + 1) = &off_141754110;
            if ( (unsigned __int8)sub_140B036A0(&v245, &v260) )
              sub_1416C3060(
                (unsigned int)aADisplayImplem_1,
                55,
                (unsigned int)&v303,
                (unsigned int)&unk_14174DE40,
                (__int64)&off_1417541C8);
            v256 = *((_QWORD *)&v292 + 1);
            v76 = v292;
            v233 = v293;
          }
        }
        if ( v75 < v203 && *(_BYTE *)(*((_QWORD *)&v202 + 1) + 352 * v75 + 337) )
        {
          v224 = v77;
          if ( v212 > 0 )
            sub_140001660(v213, v212, 1);
          v212 = v76;
          v213 = v256;
          v214 = v233;
          goto LABEL_104;
        }
        if ( v76 <= 0 )
          goto LABEL_104;
        v83 = v256;
        v84 = v76;
LABEL_103:
        sub_140001660(v83, v84, 1);
        goto LABEL_104;
      }
      goto LABEL_106;
    }
    if ( (_QWORD)v245 != -1 )
    {
      v265 = v250;
      v264 = v249;
      v263 = v248;
      v262 = v247;
      v261 = v246;
      v260 = v245;
      HIDWORD(v274) = ++v291;
      *(_QWORD *)&v289 = 0;
      *((_QWORD *)&v289 + 1) = 1;
      v290 = 0;
      v293 = 1610612768;
      *(_QWORD *)&v292 = &v289;
      *((_QWORD *)&v292 + 1) = &off_141754110;
      v85 = sub_140B036A0(&v260, &v292);
      v86 = v236;
      v87 = v237;
      if ( v85 )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_1,
          55,
          (unsigned int)&v303,
          (unsigned int)&unk_14174DE40,
          (__int64)&off_1417541C8);
      v228 = v290;
      v227 = v289;
      if ( (__int64)v206 > 0 )
        sub_140001660(*((_QWORD *)&v206 + 1), v206, 1);
      v207 = v228;
      v206 = v227;
      sub_14149C500(&v292, &v179);
      v290 = v293;
      v289 = v292;
      if ( (__int64)v208 > 0 )
        sub_140001660(*((_QWORD *)&v208 + 1), v208, 1);
      v209 = v290;
      v208 = v289;
      if ( (_QWORD)v260 == 6 )
      {
        if ( sub_141031770((__int64)&v260 + 8) || (v88 = 1, (unsigned __int8)sub_141031800((__int64)&v260 + 8)) )
          v88 = 2;
        v89 = v185;
        if ( sub_141031770((__int64)&v260 + 8) || (v90 = sub_141031800((__int64)&v260 + 8), v91 = -1, v90) )
        {
          *(_QWORD *)&v289 = 0;
          *((_QWORD *)&v289 + 1) = 1;
          v290 = 0;
          v293 = 1610612768;
          *(_QWORD *)&v292 = &v289;
          *((_QWORD *)&v292 + 1) = &off_141754110;
          if ( (unsigned __int8)sub_140B036A0(&v260, &v292) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_1,
              55,
              (unsigned int)&v303,
              (unsigned int)&unk_14174DE40,
              (__int64)&off_1417541C8);
          v86 = *((_QWORD *)&v289 + 1);
          v91 = v289;
          v87 = v290;
        }
      }
      else
      {
        v91 = -1;
        v88 = 1;
        v89 = v185;
      }
      v237 = v87;
      if ( v89 < v203 && *(_BYTE *)(*((_QWORD *)&v202 + 1) + 352 * v89 + 337) )
      {
        v224 = v88;
        if ( v212 > 0 )
        {
          v93 = v91;
          sub_140001660(v213, v212, 1);
          v91 = v93;
        }
        v212 = v91;
        v213 = v86;
        v214 = v87;
      }
      else if ( v91 > 0 )
      {
        sub_140001660(v86, v91, 1);
      }
      v236 = v86;
      v306 = 0;
      sub_14034ED40(&v260);
      goto LABEL_106;
    }
    ++v211;
    v259 = (unsigned int)(v259 + 1);
    LODWORD(v274) = v259;
    if ( DWORD2(v245) == -1 )
    {
      v94 = v185;
      *(_QWORD *)&v260 = -1;
      LOBYTE(v71) = 1;
      sub_1403C02A0(&v186, v185, v71, &v260);
      v306 = 1;
      LODWORD(v292) = sub_141475580(v96, v95, v97, v98);
      DWORD1(v292) = v99;
      v306 = 1;
      sub_141475530(&v260, &v292, 3577643008LL, 27111902);
      if ( (_BYTE)v260 )
        v100 = 0;
      else
        v100 = *((_QWORD *)&v260 + 1);
      if ( v94 < v203 )
      {
        v101 = *((_QWORD *)&v202 + 1);
        v102 = 352 * v94;
        *(_QWORD *)(*((_QWORD *)&v202 + 1) + v102 + 80) = 2;
        *(_QWORD *)(v101 + v102 + 120) = 2;
        *(_BYTE *)(v101 + v102 + 338) = 1;
        *(_QWORD *)(v101 + v102 + 64) = 1;
        *(_QWORD *)(v101 + v102 + 72) = v100;
        v306 = 1;
        sub_14149C500(&v292, &v179);
        v103 = 352 * v94 + v101;
        v104 = *(_QWORD *)(v103 + 160);
        if ( v104 != 2 )
        {
          v296 = *(_BYTE *)(v103 + 176);
          v238 = *(_QWORD *)(v103 + 168);
        }
        sub_140FFA6E0(&v289);
        v105 = ((int)v289 >> 13) - 1;
        v106 = 0;
        if ( (int)v289 >> 13 <= 0 )
        {
          v107 = (1 - ((int)v289 >> 13)) / 0x190u + 1;
          v105 += 400 * v107;
          v106 = -146097 * v107;
        }
        v270 = v293;
        v269 = v292;
        v271 = v100;
        v272 = 1;
        *(_QWORD *)&v261 = 2;
        *((_QWORD *)&v263 + 1) = 2;
        v266 = v104;
        v267 = v238;
        v268 = v296;
        *(_QWORD *)&v260 = 1;
        *((_QWORD *)&v260 + 1) = 1000
                               * (DWORD1(v289)
                                + 86400LL
                                * (int)(((v105 / 100) >> 2)
                                      + ((1461 * v105) >> 2)
                                      + v106
                                      + (((unsigned int)v289 >> 4) & 0x1FF)
                                      - v105 / 100
                                      - 719163))
                               + DWORD2(v289) / 0xF4240uLL;
        v306 = 1;
        sub_1403C6C20(&v199, &v260, v100);
      }
    }
    else
    {
      v306 = 1;
      sub_1403B99E0(&v186, v286, v283, &v178, (__int64)&v245 + 8);
      *(_QWORD *)&v260 = -1;
      LOBYTE(v92) = 1;
      sub_1403C02A0(&v186, v185, v92, &v260);
    }
LABEL_108:
    sub_14034E960(&v164);
    if ( (_QWORD)v179 )
      sub_140001660(*((_QWORD *)&v179 + 1), v179, 1);
    if ( *((_QWORD *)&v180 + 1) )
      sub_140001660(v181, *((_QWORD *)&v180 + 1), 1);
    if ( (_QWORD)v182 )
      sub_140001660(*((_QWORD *)&v182 + 1), v182, 1);
    sub_14034E960(v184);
    v52 = (__int64 *)v298;
    v53 = (__int64 *)v281;
  }
  v53 = (__int64 *)v281;
  v116 = v298;
LABEL_165:
  sub_1402C8DF0(v116, 0x14C1BACF914C1BADLL * (((unsigned __int64)v53 - v116) >> 3));
  v108 = (volatile signed __int8 *)Address;
  v117 = v235;
  if ( v278 )
    sub_140001660(v287, 296 * v278, 8);
  v118 = v253;
  v119 = v254;
  sub_1403C1960(&v186, v253, v254);
  v120 = *((_QWORD *)&v202 + 1) - 352LL;
  v121 = 352 * v203;
  while ( v121 )
  {
    v121 -= 352;
    v122 = *(_BYTE *)(v120 + 689) == 1;
    v120 += 352;
    if ( v122 )
    {
      sub_14041FEF0(&v178);
      v123 = v178.m256i_i64[0];
      sub_141684120(&v159, &v178.m256i_u64[1], 344);
      goto LABEL_172;
    }
  }
  v123 = 2;
LABEL_172:
  if ( (_DWORD)v191 != 2 )
    sub_14034EA30(&v191);
  v191 = v123;
  sub_141684120(v192, &v159, 344);
  v159.m256i_i32[0] = sub_141475580(v125, v124, v126, v127);
  v159.m256i_i32[1] = v128;
  sub_141475530(&v178, &v159, 3577643008LL, 27111902);
  if ( v178.m256i_i8[0] )
    v130 = 0;
  else
    v130 = v178.m256i_i64[1];
  v223 = v130;
  v178.m256i_i64[0] = -1;
  LOBYTE(v129) = 1;
  sub_1403BA4B0((unsigned int)&v186, v129, (unsigned int)&v178, v117, (__int64)v273);
  if ( v119 )
  {
    v131 = (_QWORD *)(v118 + 8);
    do
    {
      v132 = *(v131 - 1);
      if ( v132 )
        sub_140001660(*v131, v132, 1);
      v131 += 3;
      --v119;
    }
    while ( v119 );
  }
  if ( v252 )
    sub_140001660(v118, 24 * v252, 8);
  if ( v277 )
    sub_140001660(v280, v277, 1);
  v114 = v288;
  if ( v276 )
    sub_140001660(v288, v276, 1);
  v115 = v275;
  if ( (unsigned __int64)(v275 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
LABEL_189:
    sub_140001660(v230, v115, 1);
LABEL_190:
  LOBYTE(v114) = 1;
  if ( _InterlockedCompareExchange8(v108, 1, 0) )
  {
    v305 = 1;
    v304 = 1;
    sub_1416C15B0(Address);
  }
  v133 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v305 = 1;
    v304 = 1;
    v141 = sub_1416C2250(v114, v115);
    LOBYTE(v141) = v141 ^ 1;
    LODWORD(v298) = v141;
    v133 = off_141EC90B8;
    v134 = v258;
    if ( !*((_BYTE *)Address + 1) )
      goto LABEL_211;
LABEL_194:
    v159.m256i_i64[0] = 0;
    *(_OWORD *)&v159.m256i_u64[1] = 1u;
    v178.m256i_i64[2] = 1610612768;
    v178.m256i_i64[0] = (__int64)&v159;
    v178.m256i_i64[1] = (__int64)&off_141754110;
    if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v178) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_1,
        55,
        (unsigned int)&v303,
        (unsigned int)&unk_14174DE40,
        (__int64)&off_1417541C8);
    v136 = *(_OWORD *)v159.m256i_i8;
    v137 = v159.m256i_i8[16];
    LODWORD(v164) = *(__int32 *)((char *)&v159.m256i_i32[4] + 1);
    *(_DWORD *)((char *)&v164 + 3) = v159.m256i_i32[5];
    v138 = (char *)Address;
    if ( !(_BYTE)v298 )
    {
      if ( 2 * *v133 )
      {
        v305 = 1;
        v304 = 1;
        v157 = sub_1416C2250(Address, v135);
        v138 = (char *)Address;
        if ( !v157 )
          *((_BYTE *)Address + 1) = 1;
      }
    }
    v139 = *v138;
    *v138 = 0;
    if ( v139 == 2 )
    {
      v305 = 1;
      v304 = 1;
      WakeByAddressSingle(Address);
    }
    v140 = v164;
    v3 = v282;
    *(_DWORD *)(v282 + 28) = *(_DWORD *)((char *)&v164 + 3);
    *(_DWORD *)(v3 + 25) = v140;
    *(_OWORD *)(v3 + 8) = v136;
    *(_BYTE *)(v3 + 24) = v137;
    *(_QWORD *)v3 = -1;
    if ( v283 )
      sub_140001660(v286, v283, 1);
    sub_14034DB60(&v186);
  }
  else
  {
    LODWORD(v298) = 0;
    v134 = v258;
    if ( *((_BYTE *)Address + 1) )
      goto LABEL_194;
LABEL_211:
    v302 = 1;
    v301 = 1;
    sub_140396BF0((__m128i *)&v159, v134, (__int64)&v186);
    v143 = v282;
    if ( v159.m256i_i32[0] != -1 )
    {
      v182 = v163;
      v181 = v162;
      v180 = v161;
      v179 = v160;
      v178 = v159;
      nullsub_1(v142);
      v144 = (void *)sub_140001650(29, 1);
      if ( !v144 )
        sub_1416C2D4B(1, 29);
      v288 = (__int64)v144;
      qmemcpy(v144, "PROGRESSIVE_STATE_SAVE_FAILED", 29);
      *(_QWORD *)&v164 = &v178;
      *((_QWORD *)&v164 + 1) = sub_140B036A0;
      sub_14149C0F0(&v225, &unk_141751468, &v164);
      *(_QWORD *)&v164 = 29;
      *((_QWORD *)&v164 + 1) = v288;
      v165.m256i_i64[0] = 29;
      *(_OWORD *)&v165.m256i_u64[1] = v225;
      v165.m256i_i64[3] = v226;
      v145 = v205;
      if ( v205 == (_QWORD)v204 )
        sub_141688FC0(&v204);
      v146 = *((_QWORD *)&v204 + 1);
      v147 = 48 * v145;
      v148 = v164;
      v149 = *(_OWORD *)v165.m256i_i8;
      *(_OWORD *)(*((_QWORD *)&v204 + 1) + v147 + 32) = *(_OWORD *)&v165.m256i_u64[2];
      *(_OWORD *)(v146 + v147 + 16) = v149;
      *(_OWORD *)(v146 + v147) = v148;
      v205 = v145 + 1;
      v302 = 1;
      v301 = 1;
      sub_14034ED40(&v178);
    }
    v302 = 1;
    v301 = 1;
    sub_1403AD100(&v178, v134, &v186, v294);
    v169 = v203;
    v168 = v202;
    v170 = v215;
    v171 = v216;
    v172 = v217;
    v173 = v218;
    v174 = v219;
    v175 = v220;
    v176 = v221;
    v177 = v222;
    sub_141684120(&v164, &v178, 672);
    v299 = 1;
    store_bootstrap_snapshot_best_effort((__int64)v134, (__int64 *)&v164, (__int64)aUsageRefresh, 13);
    sub_141684120(&v159, &v164, 816);
    *(_QWORD *)&v261 = v205;
    v260 = v204;
    v299 = 0;
    sub_140ACAB80(&v178, &v159, &v260);
    sub_141684120(v143, &v178, 896);
    if ( !(_BYTE)v298 )
    {
      if ( 2 * *v133 )
      {
        v305 = 0;
        v304 = 0;
        if ( !(unsigned __int8)sub_1416C2250(v151, v150) )
          *((_BYTE *)Address + 1) = 1;
      }
    }
    v152 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v152 == 2 )
    {
      v305 = 0;
      v304 = 0;
      WakeByAddressSingle(Address);
    }
    if ( v283 )
      sub_140001660(v286, v283, 1);
    sub_1400158C0(v193);
    sub_14034E2C0(&v186);
    sub_14034DF40(v198);
    v153 = v201;
    v3 = v282;
    if ( v201 )
    {
      v154 = (_QWORD *)(v200 + 128);
      do
      {
        v155 = *(v154 - 1);
        if ( v155 )
          sub_140001660(*v154, v155, 1);
        v154 += 20;
        --v153;
      }
      while ( v153 );
    }
    if ( v199 )
      sub_140001660(v200, 160 * v199, 8);
    if ( (_DWORD)v191 != 2 )
      sub_14034EA30(&v191);
    if ( (__int64)v206 > 0 )
      sub_140001660(*((_QWORD *)&v206 + 1), v206, 1);
    if ( (__int64)v208 > 0 )
      sub_140001660(*((_QWORD *)&v208 + 1), v208, 1);
    if ( v212 > 0 )
      sub_140001660(v213, v212, 1);
  }
  return v3;
}
