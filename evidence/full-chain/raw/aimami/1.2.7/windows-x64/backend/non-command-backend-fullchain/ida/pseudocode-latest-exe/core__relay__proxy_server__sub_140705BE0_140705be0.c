// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x140705be0 | successor of pre-update 0x140d6a0e0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.977, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__m128i *__fastcall sub_140705BE0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // rax
  _BYTE *v12; // r9
  _OWORD *v13; // r15
  __int64 v14; // rbx
  __int64 (__fastcall **v15)(); // rax
  __int64 v16; // rdx
  __int64 (__fastcall **v17)(); // rax
  _BYTE *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rax
  _BYTE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 (__fastcall **v32)(); // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int8 v42; // bl
  char v43; // al
  __int64 v44; // rdx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  __int128 v52; // xmm3
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int128 v55; // xmm3
  unsigned __int64 v56; // rax
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __m128i v60; // xmm0
  __int64 v61; // r8
  unsigned __int64 v62; // r8
  __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rax
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm2
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  _BYTE *v79; // rbx
  _OWORD *v80; // rdi
  __m128i v81; // xmm6
  __int64 v82; // rax
  __m128i v83; // xmm0
  __m128i v84; // xmm1
  __m128i v85; // xmm2
  _BYTE v87[4808]; // [rsp+28h] [rbp-58h] BYREF
  __m256i v88; // [rsp+12F0h] [rbp+1270h] BYREF
  __int128 v89; // [rsp+1310h] [rbp+1290h]
  __int128 v90; // [rsp+1320h] [rbp+12A0h]
  __int128 v91; // [rsp+1330h] [rbp+12B0h]
  __int128 v92; // [rsp+1340h] [rbp+12C0h]
  __int128 v93; // [rsp+1350h] [rbp+12D0h]
  __int128 v94; // [rsp+1360h] [rbp+12E0h]
  __int128 v95; // [rsp+1370h] [rbp+12F0h]
  __int128 v96; // [rsp+1380h] [rbp+1300h]
  __int128 v97; // [rsp+1390h] [rbp+1310h]
  __int64 v98; // [rsp+13A0h] [rbp+1320h]
  __m256i v99; // [rsp+13A8h] [rbp+1328h]
  __m256i v100; // [rsp+13C8h] [rbp+1348h]
  __int128 v101; // [rsp+13E8h] [rbp+1368h]
  char v102; // [rsp+14E8h] [rbp+1468h]
  __int128 v103; // [rsp+25C0h] [rbp+2540h]
  __int128 v104; // [rsp+25D0h] [rbp+2550h]
  __int128 v105; // [rsp+25E0h] [rbp+2560h]
  __int128 v106; // [rsp+25F0h] [rbp+2570h]
  __int128 v107; // [rsp+2600h] [rbp+2580h]
  __int128 v108; // [rsp+2610h] [rbp+2590h]
  __m128i v109[10]; // [rsp+2620h] [rbp+25A0h] BYREF
  __m128i v110; // [rsp+26C0h] [rbp+2640h]
  __m128i v111; // [rsp+26D0h] [rbp+2650h]
  __m128i v112; // [rsp+26E0h] [rbp+2660h]
  __m128i v113; // [rsp+26F0h] [rbp+2670h]
  __m128i v114; // [rsp+2700h] [rbp+2680h]
  __m128i v115; // [rsp+2710h] [rbp+2690h]
  __m128i v116; // [rsp+2720h] [rbp+26A0h]
  __m256i v117; // [rsp+2730h] [rbp+26B0h]
  __int128 v118; // [rsp+2750h] [rbp+26D0h]
  __int128 v119; // [rsp+2760h] [rbp+26E0h]
  __int128 v120; // [rsp+2770h] [rbp+26F0h]
  __int128 v121; // [rsp+2780h] [rbp+2700h]
  __m256i v122; // [rsp+2790h] [rbp+2710h]
  __int128 v123; // [rsp+27B0h] [rbp+2730h]
  __m128i v124; // [rsp+27C0h] [rbp+2740h] BYREF
  __m128i v125; // [rsp+27D0h] [rbp+2750h]
  __m128i v126; // [rsp+27E0h] [rbp+2760h]
  __m128i v127; // [rsp+27F0h] [rbp+2770h]
  __m128i v128; // [rsp+2800h] [rbp+2780h]
  __m128i v129; // [rsp+2810h] [rbp+2790h]
  __m128i v130; // [rsp+2820h] [rbp+27A0h]
  __m128i v131; // [rsp+2830h] [rbp+27B0h]
  __m256i v132; // [rsp+2840h] [rbp+27C0h]
  __int128 v133; // [rsp+2860h] [rbp+27E0h]
  __int128 v134; // [rsp+2870h] [rbp+27F0h]
  __int128 v135; // [rsp+2880h] [rbp+2800h]
  __int64 v136; // [rsp+2890h] [rbp+2810h]
  __m256i v137; // [rsp+28A0h] [rbp+2820h]
  _BYTE v138[31]; // [rsp+28C0h] [rbp+2840h]
  _OWORD *v139; // [rsp+28E0h] [rbp+2860h]
  _BYTE *v140; // [rsp+28E8h] [rbp+2868h]
  _OWORD *v141; // [rsp+28F0h] [rbp+2870h]
  _BYTE *v142; // [rsp+28F8h] [rbp+2878h]
  __int64 v143; // [rsp+2900h] [rbp+2880h]
  __int64 v144; // [rsp+2908h] [rbp+2888h]
  _OWORD *v145; // [rsp+2910h] [rbp+2890h]
  _BYTE *v146; // [rsp+2918h] [rbp+2898h]
  _OWORD *v147; // [rsp+2920h] [rbp+28A0h]
  _BYTE *v148; // [rsp+2928h] [rbp+28A8h]
  __int64 v149; // [rsp+2930h] [rbp+28B0h]
  __int64 v150; // [rsp+2938h] [rbp+28B8h]

  v150 = -2;
  v4 = a2;
  v6 = *(unsigned __int8 *)(a2 + 672);
  v149 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a2 + 675) = 0;
      *(_BYTE *)(a2 + 677) = 0;
      *(_WORD *)(a2 + 678) = 1;
      *(_BYTE *)(a2 + 674) = 1;
      sub_1419234B0(a2 + 288, a2, 224);
      *(_BYTE *)(v4 + 673) = 1;
      *(_OWORD *)(v4 + 512) = *(_OWORD *)(v4 + 224);
      *(_QWORD *)(v4 + 528) = v4 + 240;
      nullsub_1(v8, v7);
      v9 = sub_140001650(16, 8);
      if ( !v9 )
        sub_14196B2C1(8, 16);
      v10 = v9;
      *(_QWORD *)v9 = v4 + 240;
      *(_BYTE *)(v9 + 8) = 0;
      *(_QWORD *)(v4 + 680) = v9;
      v11 = &off_141A417C0;
      *(_QWORD *)(v4 + 688) = &off_141A417C0;
      goto LABEL_9;
    case 1LL:
      sub_14196B990(&off_141A3B708);
    case 2LL:
      sub_14196B9B0(&off_141A3B708);
    case 3LL:
      v10 = *(_QWORD *)(a2 + 680);
      v11 = *(__int64 (__fastcall ***)())(v4 + 688);
LABEL_9:
      ((void (__fastcall *)(__m256i *, __int64, __int64))v11[3])(&v88, v10, a3);
      if ( !v88.m256i_i64[0] )
      {
        a1->m128i_i64[0] = -1;
        v43 = 3;
        goto LABEL_62;
      }
      v123 = v89;
      v122 = v88;
      v148 = *(_BYTE **)(v149 + 680);
      v147 = *(_OWORD **)(v149 + 688);
      if ( *(_QWORD *)v147 )
        (*(void (__fastcall **)(_BYTE *))v147)(v148);
      v18 = v148;
      v19 = *((_QWORD *)v147 + 1);
      if ( v19 )
        sub_140001660(v148, v19, *((_QWORD *)v147 + 2));
      v20 = v149;
      *(_BYTE *)(v149 + 677) = 1;
      v21 = *(_OWORD *)&v122.m256i_u64[2];
      v22 = v123;
      *(_OWORD *)(v20 + 536) = *(_OWORD *)v122.m256i_i8;
      *(_OWORD *)(v20 + 552) = v21;
      *(_OWORD *)(v20 + 568) = v22;
      nullsub_1(v18, v19);
      v23 = sub_140001650(16, 8);
      if ( !v23 )
        sub_14196B2C1(8, 16);
      v16 = v23;
      *(_QWORD *)v23 = v20 + 288;
      *(_BYTE *)(v23 + 8) = 0;
      *(_QWORD *)(v20 + 680) = v23;
      v17 = &off_141A0A2E0;
      *(_QWORD *)(v20 + 688) = &off_141A0A2E0;
LABEL_16:
      ((void (__fastcall *)(__m256i *, __int64, __int64))v17[3])(&v88, v16, a3);
      if ( v88.m256i_i8[0] == -1 )
      {
        a1->m128i_i64[0] = -1;
        v43 = 4;
        goto LABEL_62;
      }
      v136 = v92;
      v135 = v91;
      v134 = v90;
      v133 = v89;
      v132 = v88;
      v148 = *(_BYTE **)(v149 + 680);
      v147 = *(_OWORD **)(v149 + 688);
      if ( *(_QWORD *)v147 )
        (*(void (__fastcall **)(_BYTE *))v147)(v148);
      v24 = v148;
      v25 = *((_QWORD *)v147 + 1);
      if ( v25 )
        sub_140001660(v148, v25, *((_QWORD *)v147 + 2));
      v26 = v149;
      *(_BYTE *)(v149 + 676) = 1;
      v27 = *(_OWORD *)&v132.m256i_u64[2];
      v28 = v133;
      v29 = v134;
      *(_OWORD *)(v26 + 584) = *(_OWORD *)v132.m256i_i8;
      *(_OWORD *)(v26 + 600) = v27;
      *(_OWORD *)(v26 + 616) = v28;
      *(_OWORD *)(v26 + 632) = v29;
      *(_OWORD *)(v26 + 648) = v135;
      *(_QWORD *)(v26 + 664) = v136;
      nullsub_1(v24, v25);
      v30 = sub_140001650(16, 8);
      if ( !v30 )
        sub_14196B2C1(8, 16);
      v31 = v30;
      *(_QWORD *)v30 = v26 + 288;
      *(_BYTE *)(v30 + 8) = 0;
      *(_QWORD *)(v26 + 680) = v30;
      v32 = &off_141A410A0;
      *(_QWORD *)(v26 + 688) = &off_141A410A0;
LABEL_24:
      ((void (__fastcall *)(__m256i *, __int64, __int64))v32[3])(&v88, v31, a3);
      if ( v88.m256i_i32[0] == -1 )
      {
        a1->m128i_i64[0] = -1;
        v43 = 5;
        goto LABEL_62;
      }
      v121 = v92;
      v120 = v91;
      v119 = v90;
      v118 = v89;
      v117 = v88;
      v148 = *(_BYTE **)(v149 + 680);
      v147 = *(_OWORD **)(v149 + 688);
      if ( *(_QWORD *)v147 )
        (*(void (__fastcall **)(_BYTE *))v147)(v148);
      v33 = *((_QWORD *)v147 + 1);
      if ( v33 )
        sub_140001660(v148, v33, *((_QWORD *)v147 + 2));
      v34 = v149;
      *(_BYTE *)(v149 + 675) = 1;
      v35 = *(_OWORD *)&v117.m256i_u64[2];
      v36 = v118;
      v37 = v119;
      *(_OWORD *)(v34 + 696) = *(_OWORD *)v117.m256i_i8;
      *(_OWORD *)(v34 + 712) = v35;
      *(_OWORD *)(v34 + 728) = v36;
      *(_OWORD *)(v34 + 744) = v37;
      *(_OWORD *)(v34 + 760) = v120;
      *(_OWORD *)(v34 + 776) = v121;
      *(_BYTE *)(v34 + 674) = 0;
      sub_1419234B0(&v88, v34 + 288, 224);
      *(_BYTE *)(v34 + 673) = 0;
      v38 = *(_QWORD *)(v34 + 528);
      *(_OWORD *)&v100.m256i_u64[1] = *(_OWORD *)(v34 + 512);
      v100.m256i_i64[3] = v38;
      v102 = 0;
      nullsub_1(v40, v39);
      v41 = sub_140001650(512, 8);
      if ( !v41 )
        sub_14196B2C1(8, 512);
      v14 = v41;
      sub_1419234B0(v41, &v88, 512);
      *(_QWORD *)(v34 + 680) = v14;
      v15 = &off_141A8EF00;
      *(_QWORD *)(v34 + 688) = &off_141A8EF00;
LABEL_31:
      ((void (__fastcall *)(__m256i *, __int64, __int64))v15[3])(&v88, v14, a3);
      v42 = v88.m256i_i8[0];
      if ( v88.m256i_i8[0] != -2 )
      {
        *(_OWORD *)&v138[15] = *(_OWORD *)&v88.m256i_u64[2];
        *(_OWORD *)v138 = *(_OWORD *)&v88.m256i_i8[1];
        v148 = *(_BYTE **)(v149 + 680);
        v147 = *(_OWORD **)(v149 + 688);
        if ( *(_QWORD *)v147 )
          (*(void (__fastcall **)(_BYTE *))v147)(v148);
        v44 = *((_QWORD *)v147 + 1);
        if ( v44 )
          sub_140001660(v148, v44, *((_QWORD *)v147 + 2));
        v4 = v149;
        if ( v42 == -1 )
        {
          v88.m256i_i64[2] = *(_QWORD *)&v138[23];
          *(_OWORD *)v88.m256i_i8 = *(_OWORD *)&v138[7];
          sub_1411DF6D0(&v124, &v88);
          v66 = v149;
          *(_BYTE *)(v149 + 679) = 0;
          sub_1400366B0(v66 + 696);
          v67 = v149;
          *(_BYTE *)(v149 + 675) = 0;
          sub_140032260(v67 + 584);
          v68 = v149;
          *(_BYTE *)(v149 + 676) = 0;
          sub_1406C3A40(v68 + 536);
          v69 = v149;
          *(_BYTE *)(v149 + 677) = 0;
          if ( *(_BYTE *)(v69 + 673) )
          {
            v148 = *(_BYTE **)(v69 + 512);
            v147 = *(_OWORD **)(v69 + 520);
            if ( *(_QWORD *)v147 )
              (*(void (__fastcall **)(_BYTE *))v147)(v148);
            v70 = *((_QWORD *)v147 + 1);
            v69 = v149;
            if ( v70 )
              sub_140001660(v148, v70, *((_QWORD *)v147 + 2));
          }
          *(_BYTE *)(v69 + 673) = 0;
          if ( *(_BYTE *)(v69 + 674) )
            sub_1406C0020(v149 + 288);
          v71 = v149;
          *(_BYTE *)(v149 + 674) = 0;
          sub_1406C3A40(v71 + 240);
        }
        else
        {
          v13 = (_OWORD *)(v149 + 680);
          *(_OWORD *)&v137.m256i_u64[2] = *(_OWORD *)&v138[15];
          *(_OWORD *)&v137.m256i_i8[1] = *(_OWORD *)v138;
          v137.m256i_i8[0] = v42;
          *(_BYTE *)(v149 + 679) = 0;
          *(_DWORD *)(v4 + 675) = 0;
          v45 = *(_OWORD *)(v4 + 536);
          v46 = *(_OWORD *)(v4 + 552);
          v101 = *(_OWORD *)(v4 + 568);
          *(_OWORD *)&v100.m256i_u64[2] = v46;
          *(_OWORD *)v100.m256i_i8 = v45;
          v98 = *(_QWORD *)(v4 + 664);
          v97 = *(_OWORD *)(v4 + 648);
          v47 = *(_OWORD *)(v4 + 584);
          v48 = *(_OWORD *)(v4 + 600);
          v49 = *(_OWORD *)(v4 + 616);
          v96 = *(_OWORD *)(v4 + 632);
          v95 = v49;
          v94 = v48;
          v93 = v47;
          v50 = *(_OWORD *)(v4 + 712);
          v51 = *(_OWORD *)(v4 + 728);
          v52 = *(_OWORD *)(v4 + 744);
          *(_OWORD *)v88.m256i_i8 = *(_OWORD *)(v4 + 696);
          *(_OWORD *)&v88.m256i_u64[2] = v50;
          v89 = v51;
          v90 = v52;
          v91 = *(_OWORD *)(v4 + 760);
          v92 = *(_OWORD *)(v4 + 776);
          v99 = v137;
          sub_1419234B0(v87, &v88, 4808);
          sub_1419234B0(v4 + 680, v87, 4808);
          v12 = (_BYTE *)(v4 + 5488);
          *(_BYTE *)(v4 + 5488) = 0;
LABEL_39:
          *(_OWORD *)(v4 + 976) = *(_OWORD *)(v4 + 928);
          *(_OWORD *)(v4 + 960) = *(_OWORD *)(v4 + 912);
          *(_OWORD *)(v4 + 944) = *(_OWORD *)(v4 + 896);
          v53 = *(_OWORD *)(v4 + 792);
          v54 = *(_OWORD *)(v4 + 808);
          v55 = *(_OWORD *)(v4 + 824);
          *(_OWORD *)(v4 + 992) = *(_OWORD *)(v4 + 776);
          *(_OWORD *)(v4 + 1008) = v53;
          *(_OWORD *)(v4 + 1024) = v54;
          *(_OWORD *)(v4 + 1040) = v55;
          *(_OWORD *)(v4 + 1056) = *(_OWORD *)(v4 + 840);
          v56 = *(_QWORD *)(v4 + 856);
          *(_QWORD *)(v4 + 1072) = v56;
          v108 = v13[5];
          v107 = v13[4];
          v57 = *v13;
          v58 = v13[1];
          v59 = v13[2];
          v106 = v13[3];
          v105 = v59;
          v104 = v58;
          v103 = v57;
          v60 = *(__m128i *)(v4 + 864);
          v109[9] = *(__m128i *)(v4 + 880);
          v109[8] = v60;
          v61 = *(unsigned __int16 *)(v4 + 1072);
          v147 = v13;
          v148 = v12;
          if ( v61 == 0xFFFF )
          {
            v65 = 0;
          }
          else
          {
            v62 = v61 + 1;
            v63 = *(_QWORD *)(v4 + 1048);
            v64 = *(_QWORD *)(v4 + 1056);
            v56 = v64 - v62;
            if ( v64 <= v62 )
            {
              if ( v64 != v62 )
LABEL_42:
                sub_14196B4F0(v63, v64, v62, v64, (__int64)&off_141A3BC98);
            }
            else if ( *(char *)(v63 + v62) < -64 )
            {
              goto LABEL_42;
            }
            v65 = v62 + v63;
          }
          v92 = v13[5];
          v91 = v13[4];
          v72 = *v13;
          v73 = v13[1];
          v74 = v13[2];
          v90 = v13[3];
          v89 = v74;
          *(_OWORD *)&v88.m256i_u64[2] = v73;
          *(_OWORD *)v88.m256i_i8 = v72;
          v75 = *(_OWORD *)(v4 + 880);
          v93 = *(_OWORD *)(v4 + 864);
          v94 = v75;
          *(_OWORD *)(v4 + 1192) = v75;
          *(_OWORD *)(v4 + 1176) = v93;
          *(_OWORD *)(v4 + 1160) = v92;
          *(_OWORD *)(v4 + 1144) = v91;
          v76 = *(_OWORD *)v88.m256i_i8;
          v77 = *(_OWORD *)&v88.m256i_u64[2];
          v78 = v89;
          *(_OWORD *)(v4 + 1128) = v90;
          *(_OWORD *)(v4 + 1112) = v78;
          *(_OWORD *)(v4 + 1096) = v77;
          *(_OWORD *)(v4 + 1080) = v76;
          *(_QWORD *)(v4 + 1208) = v4 + 944;
          *(_QWORD *)(v4 + 1216) = aRouterCompact;
          *(_QWORD *)(v4 + 1224) = 14;
          *(_QWORD *)(v4 + 1232) = v65;
          *(_QWORD *)(v4 + 1240) = v56;
          *(_WORD *)(v4 + 1728) = 1;
LABEL_58:
          v143 = v4 + 1080;
          sub_1406EEFF0(v109, v4 + 1080, a3);
          if ( v109[0].m128i_i32[0] == -1 )
          {
            *v148 = 3;
            a1->m128i_i64[0] = -1;
            v43 = 7;
            goto LABEL_62;
          }
          v79 = v148;
          v146 = v148;
          v80 = v147;
          v145 = v147;
          sub_1406BB680(v143);
          v142 = v79;
          v141 = v80;
          sub_140032260(v149 + 992);
          v140 = v79;
          v139 = v80;
          sub_1406C3A40(v149 + 944);
          *v79 = 1;
          v110 = v109[0];
          v111 = v109[1];
          v112 = v109[2];
          v113 = v109[3];
          v114 = v109[4];
          v115 = v109[5];
          v116 = v109[6];
          v81 = v109[7];
          sub_1406BAC80(v80);
          v124 = v110;
          v125 = v111;
          v126 = v112;
          v127 = v113;
          v128 = v114;
          v129 = v115;
          v130 = v116;
          v131 = v81;
          v82 = v149;
          *(_BYTE *)(v149 + 679) = 0;
          *(_BYTE *)(v82 + 677) = 0;
          *(_DWORD *)(v82 + 673) = 0;
          sub_1406C3A40(v82 + 240);
        }
        a1[7] = v131;
        a1[6] = v130;
        a1[5] = v129;
        a1[4] = v128;
        v83 = v124;
        v84 = v125;
        v85 = v126;
        a1[3] = v127;
        a1[2] = v85;
        a1[1] = v84;
        *a1 = v83;
        v43 = 1;
        goto LABEL_62;
      }
      a1->m128i_i64[0] = -1;
      v43 = 6;
LABEL_62:
      *(_BYTE *)(v149 + 672) = v43;
      return a1;
    case 4LL:
      v16 = *(_QWORD *)(a2 + 680);
      v17 = *(__int64 (__fastcall ***)())(v4 + 688);
      goto LABEL_16;
    case 5LL:
      v31 = *(_QWORD *)(a2 + 680);
      v32 = *(__int64 (__fastcall ***)())(v4 + 688);
      goto LABEL_24;
    case 6LL:
      v14 = *(_QWORD *)(a2 + 680);
      v15 = *(__int64 (__fastcall ***)())(a2 + 688);
      goto LABEL_31;
    case 7LL:
      v12 = (_BYTE *)(a2 + 5488);
      v13 = (_OWORD *)(a2 + 680);
      switch ( *(_BYTE *)(a2 + 5488) )
      {
        case 0:
          goto LABEL_39;
        case 1:
          v144 = a2 + 680;
          sub_14196B990(&off_141A3A2F0);
        case 2:
          v144 = a2 + 680;
          sub_14196B9B0(&off_141A3A2F0);
        case 3:
          v148 = (_BYTE *)(a2 + 5488);
          v147 = (_OWORD *)(a2 + 680);
          goto LABEL_58;
      }
  }
}
