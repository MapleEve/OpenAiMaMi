// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x140707300 | successor of pre-update 0x140d6b800 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.976, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140707300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(); // rax
  _BYTE *v12; // r13
  _OWORD *v13; // r12
  __int64 v14; // rdx
  __int64 (__fastcall **v15)(); // rax
  __int64 v16; // rdx
  __int64 (__fastcall **v17)(); // rax
  _BYTE *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 (__fastcall **v25)(); // rax
  __int64 v26; // rbx
  char v27; // al
  _BYTE *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  _BYTE *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r14
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int128 v43; // xmm3
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 (__fastcall **v49)(); // rax
  __int8 v50; // bl
  __int64 v51; // rdx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  __int128 v56; // xmm3
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int128 v59; // xmm3
  __int64 v60; // rbx
  __int64 v61; // r14
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  __int128 v65; // xmm0
  __int64 v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r8
  unsigned __int64 v76; // r8
  __int64 v77; // rcx
  unsigned __int64 v78; // rdx
  __int64 v79; // rcx
  __int128 v80; // xmm1
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rdi
  __int128 v85; // xmm6
  __int64 v86; // rax
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm2
  _BYTE v91[4008]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v92[112]; // [rsp+FE0h] [rbp+F60h] BYREF
  _QWORD v93[12]; // [rsp+1050h] [rbp+FD0h]
  __m256i v94; // [rsp+10B0h] [rbp+1030h]
  __int128 v95; // [rsp+10D0h] [rbp+1050h]
  __int128 v96; // [rsp+10E0h] [rbp+1060h]
  __int128 v97; // [rsp+10F0h] [rbp+1070h]
  char v98; // [rsp+11D8h] [rbp+1158h]
  __int128 v99; // [rsp+1F90h] [rbp+1F10h]
  __int128 v100; // [rsp+1FA0h] [rbp+1F20h]
  __int128 v101; // [rsp+1FB0h] [rbp+1F30h]
  __int128 v102; // [rsp+1FC0h] [rbp+1F40h]
  __int128 v103; // [rsp+1FD0h] [rbp+1F50h]
  __int128 v104; // [rsp+1FE0h] [rbp+1F60h]
  __int128 v105; // [rsp+1FF0h] [rbp+1F70h]
  __int128 v106; // [rsp+2000h] [rbp+1F80h]
  __int128 v107; // [rsp+2010h] [rbp+1F90h]
  __int128 v108; // [rsp+2020h] [rbp+1FA0h]
  __int128 v109; // [rsp+2030h] [rbp+1FB0h]
  __int128 v110; // [rsp+2040h] [rbp+1FC0h]
  __int128 v111; // [rsp+2050h] [rbp+1FD0h]
  __int128 v112; // [rsp+2060h] [rbp+1FE0h]
  __int128 v113; // [rsp+2070h] [rbp+1FF0h]
  __int128 v114; // [rsp+2080h] [rbp+2000h]
  __int128 v115; // [rsp+2090h] [rbp+2010h]
  __int128 v116; // [rsp+20A0h] [rbp+2020h]
  __int128 v117; // [rsp+20B0h] [rbp+2030h]
  __int64 v118; // [rsp+20C0h] [rbp+2040h]
  __int128 v119; // [rsp+20D0h] [rbp+2050h]
  __int128 v120; // [rsp+20E0h] [rbp+2060h]
  __int128 v121; // [rsp+20F0h] [rbp+2070h]
  __int128 v122; // [rsp+2100h] [rbp+2080h]
  __int128 v123; // [rsp+2110h] [rbp+2090h]
  __int128 v124; // [rsp+2120h] [rbp+20A0h]
  __int64 v125; // [rsp+2130h] [rbp+20B0h]
  __int128 v126; // [rsp+2140h] [rbp+20C0h]
  __int128 v127; // [rsp+2150h] [rbp+20D0h]
  __int128 v128; // [rsp+2160h] [rbp+20E0h]
  __int128 v129; // [rsp+2170h] [rbp+20F0h]
  __int128 v130; // [rsp+2180h] [rbp+2100h]
  __int64 v131; // [rsp+2190h] [rbp+2110h]
  __int128 v132; // [rsp+21A0h] [rbp+2120h] BYREF
  __int128 v133; // [rsp+21B0h] [rbp+2130h]
  __int128 v134; // [rsp+21C0h] [rbp+2140h]
  __int128 v135; // [rsp+21D0h] [rbp+2150h]
  __int128 v136; // [rsp+21E0h] [rbp+2160h]
  __int128 v137; // [rsp+21F0h] [rbp+2170h]
  __int128 v138; // [rsp+2200h] [rbp+2180h]
  __int128 v139; // [rsp+2210h] [rbp+2190h]
  _BYTE v140[112]; // [rsp+2220h] [rbp+21A0h] BYREF
  __int128 v141; // [rsp+2290h] [rbp+2210h]
  __m256i v142; // [rsp+22A0h] [rbp+2220h]
  __int128 v143; // [rsp+22C0h] [rbp+2240h] BYREF
  __int128 v144; // [rsp+22D0h] [rbp+2250h]
  _BYTE v145[31]; // [rsp+22E0h] [rbp+2260h]
  __int128 v146; // [rsp+2308h] [rbp+2288h] BYREF
  __int64 v147; // [rsp+2318h] [rbp+2298h]
  __int128 v148; // [rsp+2320h] [rbp+22A0h] BYREF
  __int128 v149; // [rsp+2330h] [rbp+22B0h]
  __int128 v150; // [rsp+2340h] [rbp+22C0h]
  __int64 v151; // [rsp+2350h] [rbp+22D0h]
  __int64 v152; // [rsp+2360h] [rbp+22E0h]
  __int64 v153; // [rsp+2368h] [rbp+22E8h]
  _OWORD *v154; // [rsp+2370h] [rbp+22F0h]
  _BYTE *v155; // [rsp+2378h] [rbp+22F8h]
  _OWORD *v156; // [rsp+2380h] [rbp+2300h]
  _BYTE *v157; // [rsp+2388h] [rbp+2308h]
  _OWORD *v158; // [rsp+2390h] [rbp+2310h]
  _BYTE *v159; // [rsp+2398h] [rbp+2318h]
  _OWORD *v160; // [rsp+23A0h] [rbp+2320h]
  _BYTE *v161; // [rsp+23A8h] [rbp+2328h]
  _OWORD *v162; // [rsp+23B0h] [rbp+2330h]
  _BYTE *v163; // [rsp+23B8h] [rbp+2338h]
  _OWORD *v164; // [rsp+23C0h] [rbp+2340h]
  _BYTE *v165; // [rsp+23C8h] [rbp+2348h]
  __int64 v166; // [rsp+23D0h] [rbp+2350h]
  __int64 v167; // [rsp+23D8h] [rbp+2358h]

  v167 = -2;
  v4 = a2;
  v6 = *(unsigned __int8 *)(a2 + 696);
  v166 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 699) = 0;
      *(_WORD *)(a2 + 703) = 1;
      *(_BYTE *)(a2 + 698) = 1;
      sub_1419234B0(a2 + 288, a2, 224);
      *(_BYTE *)(v4 + 697) = 1;
      *(_OWORD *)(v4 + 512) = *(_OWORD *)(v4 + 224);
      *(_QWORD *)(v4 + 528) = v4 + 240;
      nullsub_1(v8, v7);
      v9 = sub_140001650(16, 8);
      if ( !v9 )
        sub_14196B2C1(8, 16);
      v10 = v9;
      *(_QWORD *)v9 = v4 + 240;
      *(_BYTE *)(v9 + 8) = 0;
      *(_QWORD *)(v4 + 712) = v9;
      v11 = &off_141A417C0;
      *(_QWORD *)(v4 + 720) = &off_141A417C0;
      goto LABEL_9;
    case 1LL:
      sub_14196B990(&off_141A3B708);
    case 2LL:
      sub_14196B9B0(&off_141A3B708);
    case 3LL:
      v10 = *(_QWORD *)(a2 + 712);
      v11 = *(__int64 (__fastcall ***)())(v4 + 720);
LABEL_9:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v11[3])(v92, v10, a3);
      if ( !*(_QWORD *)v92 )
      {
        *(_QWORD *)a1 = -1;
        v27 = 3;
        goto LABEL_89;
      }
      v111 = *(_OWORD *)&v92[32];
      v110 = *(_OWORD *)&v92[16];
      v109 = *(_OWORD *)v92;
      v165 = *(_BYTE **)(v166 + 712);
      v164 = *(_OWORD **)(v166 + 720);
      if ( *(_QWORD *)v164 )
        (*(void (__fastcall **)(_BYTE *))v164)(v165);
      v18 = v165;
      v19 = *((_QWORD *)v164 + 1);
      if ( v19 )
        sub_140001660(v165, v19, *((_QWORD *)v164 + 2));
      v20 = v166;
      *(_BYTE *)(v166 + 702) = 1;
      v21 = v110;
      v22 = v111;
      *(_OWORD *)(v20 + 536) = v109;
      *(_OWORD *)(v20 + 552) = v21;
      *(_OWORD *)(v20 + 568) = v22;
      nullsub_1(v18, v19);
      v23 = sub_140001650(16, 8);
      if ( !v23 )
        sub_14196B2C1(8, 16);
      v24 = v23;
      *(_QWORD *)v23 = v20 + 288;
      *(_BYTE *)(v23 + 8) = 0;
      *(_QWORD *)(v20 + 712) = v23;
      v25 = &off_141A42CC0;
      *(_QWORD *)(v20 + 720) = &off_141A42CC0;
LABEL_17:
      ((void (__fastcall *)(_BYTE *, __int64, __int64))v25[3])(v92, v24, a3);
      v26 = *(_QWORD *)v92;
      if ( *(_QWORD *)v92 != -3 )
      {
        v151 = *(_QWORD *)&v92[24];
        v150 = *(_OWORD *)&v92[8];
        v107 = *(_OWORD *)&v92[32];
        v108 = *(_OWORD *)&v92[48];
        v165 = *(_BYTE **)(v166 + 712);
        v164 = *(_OWORD **)(v166 + 720);
        if ( *(_QWORD *)v164 )
          (*(void (__fastcall **)(_BYTE *))v164)(v165);
        v28 = v165;
        v29 = *((_QWORD *)v164 + 1);
        if ( v29 )
          sub_140001660(v165, v29, *((_QWORD *)v164 + 2));
        if ( v26 == -2 )
        {
          v30 = v166;
          *(_BYTE *)(v166 + 701) = 1;
          *(_OWORD *)(v30 + 584) = v150;
          *(_QWORD *)(v30 + 600) = v151;
          nullsub_1(v28, v29);
          v31 = sub_140001650(16, 8);
          if ( !v31 )
            sub_14196B2C1(8, 16);
          v16 = v31;
          *(_QWORD *)v31 = v30 + 288;
          *(_BYTE *)(v31 + 8) = 0;
          *(_QWORD *)(v30 + 712) = v31;
          v17 = &off_141A0A2E0;
          *(_QWORD *)(v30 + 720) = &off_141A0A2E0;
LABEL_26:
          ((void (__fastcall *)(_BYTE *, __int64, __int64))v17[3])(v92, v16, a3);
          if ( v92[0] == 0xFF )
          {
            *(_QWORD *)a1 = -1;
            v27 = 5;
            goto LABEL_89;
          }
          v131 = *(_QWORD *)&v92[80];
          v130 = *(_OWORD *)&v92[64];
          v129 = *(_OWORD *)&v92[48];
          v128 = *(_OWORD *)&v92[32];
          v127 = *(_OWORD *)&v92[16];
          v126 = *(_OWORD *)v92;
          v165 = *(_BYTE **)(v166 + 712);
          v164 = *(_OWORD **)(v166 + 720);
          if ( *(_QWORD *)v164 )
            (*(void (__fastcall **)(_BYTE *))v164)(v165);
          v32 = v165;
          v33 = *((_QWORD *)v164 + 1);
          if ( v33 )
            sub_140001660(v165, v33, *((_QWORD *)v164 + 2));
          v34 = v166;
          *(_BYTE *)(v166 + 700) = 1;
          v35 = v127;
          v36 = v128;
          v37 = v129;
          *(_OWORD *)(v34 + 608) = v126;
          *(_OWORD *)(v34 + 624) = v35;
          *(_OWORD *)(v34 + 640) = v36;
          *(_OWORD *)(v34 + 656) = v37;
          *(_OWORD *)(v34 + 672) = v130;
          *(_QWORD *)(v34 + 688) = v131;
          nullsub_1(v32, v33);
          v38 = sub_140001650(16, 8);
          if ( !v38 )
            sub_14196B2C1(8, 16);
          v14 = v38;
          *(_QWORD *)v38 = v34 + 288;
          *(_BYTE *)(v38 + 8) = 0;
          *(_QWORD *)(v34 + 712) = v38;
          v15 = &off_141A410A0;
          *(_QWORD *)(v34 + 720) = &off_141A410A0;
LABEL_33:
          ((void (__fastcall *)(_BYTE *, __int64, __int64))v15[3])(v92, v14, a3);
          if ( *(_DWORD *)v92 == -1 )
          {
            *(_QWORD *)a1 = -1;
            v27 = 6;
            goto LABEL_89;
          }
          v106 = *(_OWORD *)&v92[80];
          v105 = *(_OWORD *)&v92[64];
          v104 = *(_OWORD *)&v92[48];
          v103 = *(_OWORD *)&v92[32];
          v102 = *(_OWORD *)&v92[16];
          v101 = *(_OWORD *)v92;
          v165 = *(_BYTE **)(v166 + 712);
          v164 = *(_OWORD **)(v166 + 720);
          if ( *(_QWORD *)v164 )
            (*(void (__fastcall **)(_BYTE *))v164)(v165);
          v39 = *((_QWORD *)v164 + 1);
          if ( v39 )
            sub_140001660(v165, v39, *((_QWORD *)v164 + 2));
          v40 = v166;
          *(_BYTE *)(v166 + 699) = 1;
          v41 = v102;
          v42 = v103;
          v43 = v104;
          *(_OWORD *)(v40 + 728) = v101;
          *(_OWORD *)(v40 + 744) = v41;
          *(_OWORD *)(v40 + 760) = v42;
          *(_OWORD *)(v40 + 776) = v43;
          *(_OWORD *)(v40 + 792) = v105;
          *(_OWORD *)(v40 + 808) = v106;
          *(_BYTE *)(v40 + 698) = 0;
          sub_1419234B0(v92, v40 + 288, 224);
          *(_BYTE *)(v40 + 697) = 0;
          v44 = *(_QWORD *)(v40 + 528);
          *(_OWORD *)&v94.m256i_u64[2] = *(_OWORD *)(v40 + 512);
          *(_QWORD *)&v95 = v44;
          v98 = 0;
          nullsub_1(v46, v45);
          v47 = sub_140001650(512, 8);
          if ( !v47 )
            sub_14196B2C1(8, 512);
          v48 = v47;
          sub_1419234B0(v47, v92, 512);
          *(_QWORD *)(v40 + 712) = v48;
          v49 = &off_141A8EF00;
          *(_QWORD *)(v40 + 720) = &off_141A8EF00;
LABEL_41:
          ((void (__fastcall *)(_BYTE *, __int64, __int64))v49[3])(v92, v48, a3);
          v50 = v92[0];
          if ( v92[0] == 0xFE )
          {
            *(_QWORD *)a1 = -1;
            v27 = 7;
            goto LABEL_89;
          }
          *(_OWORD *)&v145[15] = *(_OWORD *)&v92[16];
          *(_OWORD *)v145 = *(_OWORD *)&v92[1];
          v165 = *(_BYTE **)(v166 + 712);
          v164 = *(_OWORD **)(v166 + 720);
          if ( *(_QWORD *)v164 )
            (*(void (__fastcall **)(_BYTE *))v164)(v165);
          v51 = *((_QWORD *)v164 + 1);
          if ( v51 )
            sub_140001660(v165, v51, *((_QWORD *)v164 + 2));
          v4 = v166;
          if ( v50 != -1 )
          {
            v13 = (_OWORD *)(v166 + 712);
            *(_OWORD *)&v142.m256i_u64[2] = *(_OWORD *)&v145[15];
            *(_OWORD *)&v142.m256i_i8[1] = *(_OWORD *)v145;
            v142.m256i_i8[0] = v50;
            *(_WORD *)(v166 + 703) = 0;
            *(_DWORD *)(v4 + 699) = 0;
            v52 = *(_OWORD *)(v4 + 536);
            v53 = *(_OWORD *)(v4 + 552);
            v97 = *(_OWORD *)(v4 + 568);
            v96 = v53;
            v95 = v52;
            v93[0] = *(_QWORD *)(v4 + 600);
            *(_OWORD *)&v92[96] = *(_OWORD *)(v4 + 584);
            v54 = *(_OWORD *)(v4 + 624);
            v55 = *(_OWORD *)(v4 + 640);
            v56 = *(_OWORD *)(v4 + 656);
            *(_OWORD *)&v93[1] = *(_OWORD *)(v4 + 608);
            *(_OWORD *)&v93[3] = v54;
            *(_OWORD *)&v93[5] = v55;
            *(_OWORD *)&v93[7] = v56;
            *(_OWORD *)&v93[9] = *(_OWORD *)(v4 + 672);
            v93[11] = *(_QWORD *)(v4 + 688);
            v57 = *(_OWORD *)(v4 + 744);
            v58 = *(_OWORD *)(v4 + 760);
            v59 = *(_OWORD *)(v4 + 776);
            *(_OWORD *)v92 = *(_OWORD *)(v4 + 728);
            *(_OWORD *)&v92[16] = v57;
            *(_OWORD *)&v92[32] = v58;
            *(_OWORD *)&v92[48] = v59;
            *(_OWORD *)&v92[64] = *(_OWORD *)(v4 + 792);
            *(_OWORD *)&v92[80] = *(_OWORD *)(v4 + 808);
            v94 = v142;
            sub_1419234B0(v91, v92, 4008);
            sub_1419234B0(v4 + 712, v91, 4008);
            v12 = (_BYTE *)(v4 + 4720);
            *(_BYTE *)(v4 + 4720) = 0;
LABEL_49:
            v60 = v4 + 1000;
            *(_OWORD *)(v4 + 1032) = *(_OWORD *)(v4 + 984);
            *(_OWORD *)(v4 + 1016) = *(_OWORD *)(v4 + 968);
            *(_OWORD *)(v4 + 1000) = *(_OWORD *)(v4 + 952);
            *(_OWORD *)(v4 + 1048) = *(_OWORD *)(v4 + 808);
            *(_QWORD *)(v4 + 1064) = *(_QWORD *)(v4 + 824);
            *(_QWORD *)(v4 + 1152) = *(_QWORD *)(v4 + 912);
            *(_OWORD *)(v4 + 1136) = *(_OWORD *)(v4 + 896);
            *(_OWORD *)(v4 + 1120) = *(_OWORD *)(v4 + 880);
            *(_OWORD *)(v4 + 1104) = *(_OWORD *)(v4 + 864);
            *(_OWORD *)(v4 + 1088) = *(_OWORD *)(v4 + 848);
            *(_OWORD *)(v4 + 1072) = *(_OWORD *)(v4 + 832);
            v61 = v4 + 1160;
            *(_OWORD *)(v4 + 1240) = v13[5];
            *(_OWORD *)(v4 + 1224) = v13[4];
            v62 = *v13;
            v63 = v13[1];
            v64 = v13[2];
            *(_OWORD *)(v4 + 1208) = v13[3];
            *(_OWORD *)(v4 + 1192) = v64;
            *(_OWORD *)(v4 + 1176) = v63;
            *(_OWORD *)(v4 + 1160) = v62;
            v65 = *(_OWORD *)(v4 + 920);
            v144 = *(_OWORD *)(v4 + 936);
            v143 = v65;
            *(_BYTE *)(v4 + 4721) = 1;
            if ( *(_QWORD *)(v4 + 1064) != 5
              || **(_DWORD **)(v4 + 1056) ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)(v4 + 1056) + 4LL) ^ 0x78 )
            {
              v163 = v12;
              v162 = v13;
              LOWORD(a2) = 404;
              sub_1407360F0((unsigned int)v92, a2, (unsigned int)"unknown ide path", 16, (__int64)aProxyUpstream, 14);
              v161 = v12;
              v160 = v13;
              sub_1406C0ED0(&v143);
              *(_BYTE *)(v166 + 4721) = 0;
              v159 = v12;
              v158 = v13;
              sub_1400366B0(v4 + 1160);
              v157 = v12;
              v156 = v13;
              sub_140032260(v166 + 1072);
              v66 = *(_QWORD *)(v166 + 1048);
              if ( v66 )
                sub_140001660(*(_QWORD *)(v166 + 1056), v66, 1);
              v155 = v12;
              v154 = v13;
              sub_1406C3A40(v4 + 1000);
              goto LABEL_84;
            }
            v163 = v12;
            v162 = v13;
            v74 = sub_140733D70(&v146, v4 + 1000);
            v4 = v166;
            *(_BYTE *)(v166 + 4721) = 0;
            v148 = v143;
            v149 = v144;
            v164 = v13;
            v165 = v12;
            if ( (_BYTE)v143 == 5 )
            {
              v74 = sub_140A13D20(&v132, (char *)&v148 + 8, "previous_response_idprev_resp_id", 20);
              if ( (_BYTE)v132 != 0xFF )
                v74 = sub_1406C0ED0(&v132);
              v4 = v166;
            }
            v133 = v149;
            v132 = v148;
            v75 = *(unsigned __int16 *)(v4 + 1152);
            if ( v75 == 0xFFFF )
            {
              v79 = 0;
            }
            else
            {
              v76 = v75 + 1;
              v77 = *(_QWORD *)(v4 + 1128);
              v78 = *(_QWORD *)(v4 + 1136);
              v74 = v78 - v76;
              if ( v78 <= v76 )
              {
                if ( v78 != v76 )
LABEL_75:
                  sub_14196B4F0(v77, v78, v76, v78, (__int64)&off_141A3BC98);
              }
              else if ( *(char *)(v77 + v76) < -64 )
              {
                goto LABEL_75;
              }
              v79 = v76 + v77;
            }
            v100 = v133;
            v99 = v132;
            *(_QWORD *)(v4 + 1272) = v147;
            *(_OWORD *)(v4 + 1256) = v146;
            *(_QWORD *)(v4 + 1280) = -1;
            v80 = v100;
            *(_OWORD *)(v4 + 1304) = v99;
            *(_OWORD *)(v4 + 1320) = v80;
            *(_QWORD *)(v4 + 1336) = v60;
            *(_QWORD *)(v4 + 1344) = v61;
            *(_QWORD *)(v4 + 1352) = aActive;
            *(_QWORD *)(v4 + 1360) = 6;
            *(_QWORD *)(v4 + 1368) = v79;
            *(_QWORD *)(v4 + 1376) = v74;
            *(_BYTE *)(v4 + 2096) = 0;
LABEL_80:
            v152 = v4 + 1256;
            sub_1406EC330(&v132, v4 + 1256, a3);
            if ( (_DWORD)v132 == -1 )
            {
              *v165 = 3;
              goto LABEL_88;
            }
            *(_OWORD *)v93 = v139;
            *(_OWORD *)&v92[96] = v138;
            *(_OWORD *)&v92[80] = v137;
            *(_OWORD *)&v92[64] = v136;
            *(_OWORD *)&v92[48] = v135;
            *(_OWORD *)&v92[32] = v134;
            *(_OWORD *)&v92[16] = v133;
            *(_OWORD *)v92 = v132;
            v12 = v165;
            v163 = v165;
            v13 = v164;
            v162 = v164;
            sub_1406BAE00(v152);
            v81 = v166;
            *(_BYTE *)(v166 + 4721) = 0;
            v159 = v12;
            v158 = v13;
            sub_1400366B0(v81 + 1160);
            v157 = v12;
            v156 = v13;
            sub_140032260(v166 + 1072);
            v82 = v166;
            v83 = *(_QWORD *)(v166 + 1048);
            if ( v83 )
              sub_140001660(*(_QWORD *)(v166 + 1056), v83, 1);
            v155 = v12;
            v154 = v13;
            sub_1406C3A40(v82 + 1000);
LABEL_84:
            v84 = *(_QWORD *)v92;
            v119 = *(_OWORD *)&v92[8];
            v120 = *(_OWORD *)&v92[24];
            v121 = *(_OWORD *)&v92[40];
            v122 = *(_OWORD *)&v92[56];
            v123 = *(_OWORD *)&v92[72];
            v124 = *(_OWORD *)&v92[88];
            v125 = *(_QWORD *)&v92[104];
            v85 = *(_OWORD *)v93;
            *v12 = 1;
            if ( v84 != -1 )
            {
              v118 = v125;
              v117 = v124;
              v116 = v123;
              v115 = v122;
              v114 = v121;
              v113 = v120;
              v112 = v119;
              sub_1406B9AE0(v13);
              *(_QWORD *)v140 = v84;
              *(_OWORD *)&v140[8] = v112;
              *(_OWORD *)&v140[24] = v113;
              *(_OWORD *)&v140[40] = v114;
              *(_OWORD *)&v140[56] = v115;
              *(_OWORD *)&v140[72] = v116;
              *(_OWORD *)&v140[88] = v117;
              *(_QWORD *)&v140[104] = v118;
              v141 = v85;
              v86 = v166;
              *(_BYTE *)(v166 + 704) = 0;
              *(_WORD *)(v86 + 701) = 0;
              *(_DWORD *)(v86 + 697) = 0;
              sub_1406C3A40(v86 + 240);
LABEL_86:
              *(_OWORD *)(a1 + 112) = v141;
              *(_OWORD *)(a1 + 96) = *(_OWORD *)&v140[96];
              *(_OWORD *)(a1 + 80) = *(_OWORD *)&v140[80];
              *(_OWORD *)(a1 + 64) = *(_OWORD *)&v140[64];
              v87 = *(_OWORD *)v140;
              v88 = *(_OWORD *)&v140[16];
              v89 = *(_OWORD *)&v140[32];
              *(_OWORD *)(a1 + 48) = *(_OWORD *)&v140[48];
              *(_OWORD *)(a1 + 32) = v89;
              *(_OWORD *)(a1 + 16) = v88;
              *(_OWORD *)a1 = v87;
              v27 = 1;
              goto LABEL_89;
            }
LABEL_88:
            *(_QWORD *)a1 = -1;
            v27 = 8;
            goto LABEL_89;
          }
          *(_QWORD *)&v92[16] = *(_QWORD *)&v145[23];
          *(_OWORD *)v92 = *(_OWORD *)&v145[7];
          sub_1411DF6D0(v140, v92);
          v68 = v166;
          *(_BYTE *)(v166 + 704) = 0;
          sub_1400366B0(v68 + 728);
          v69 = v166;
          *(_BYTE *)(v166 + 699) = 0;
          sub_140032260(v69 + 608);
          v67 = v166;
          *(_BYTE *)(v166 + 700) = 0;
          v70 = *(_QWORD *)(v67 + 584);
          if ( v70 )
            sub_140001660(*(_QWORD *)(v67 + 592), v70, 1);
        }
        else
        {
          *(_QWORD *)v92 = v26;
          *(_OWORD *)&v92[8] = v150;
          *(_QWORD *)&v92[24] = v151;
          *(_OWORD *)&v92[32] = v107;
          *(_OWORD *)&v92[48] = v108;
          sub_1411DF770(v140, v92);
          v67 = v166;
        }
        *(_BYTE *)(v67 + 701) = 0;
        sub_1406C3A40(v67 + 536);
        v71 = v166;
        *(_BYTE *)(v166 + 702) = 0;
        if ( *(_BYTE *)(v71 + 697) )
        {
          v165 = *(_BYTE **)(v71 + 512);
          v164 = *(_OWORD **)(v71 + 520);
          if ( *(_QWORD *)v164 )
            (*(void (__fastcall **)(_BYTE *))v164)(v165);
          v72 = *((_QWORD *)v164 + 1);
          v71 = v166;
          if ( v72 )
            sub_140001660(v165, v72, *((_QWORD *)v164 + 2));
        }
        *(_BYTE *)(v71 + 697) = 0;
        if ( *(_BYTE *)(v71 + 698) )
          sub_1406C0020(v166 + 288);
        v73 = v166;
        *(_BYTE *)(v166 + 698) = 0;
        sub_1406C3A40(v73 + 240);
        goto LABEL_86;
      }
      *(_QWORD *)a1 = -1;
      v27 = 4;
LABEL_89:
      *(_BYTE *)(v166 + 696) = v27;
      return a1;
    case 4LL:
      v24 = *(_QWORD *)(a2 + 712);
      v25 = *(__int64 (__fastcall ***)())(v4 + 720);
      goto LABEL_17;
    case 5LL:
      v16 = *(_QWORD *)(a2 + 712);
      v17 = *(__int64 (__fastcall ***)())(v4 + 720);
      goto LABEL_26;
    case 6LL:
      v14 = *(_QWORD *)(a2 + 712);
      v15 = *(__int64 (__fastcall ***)())(v4 + 720);
      goto LABEL_33;
    case 7LL:
      v48 = *(_QWORD *)(a2 + 712);
      v49 = *(__int64 (__fastcall ***)())(a2 + 720);
      goto LABEL_41;
    case 8LL:
      v12 = (_BYTE *)(a2 + 4720);
      v13 = (_OWORD *)(a2 + 712);
      switch ( *(_BYTE *)(a2 + 4720) )
      {
        case 0:
          goto LABEL_49;
        case 1:
          v153 = a2 + 712;
          sub_14196B990(&off_141A39B88);
        case 2:
          v153 = a2 + 712;
          sub_14196B9B0(&off_141A39B88);
        case 3:
          v165 = (_BYTE *)(a2 + 4720);
          v164 = (_OWORD *)(a2 + 712);
          goto LABEL_80;
      }
  }
}
