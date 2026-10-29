// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d67020 | name sub_140D67020
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D67020(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(); // rax
  _BYTE *v11; // r13
  _OWORD *v12; // r12
  __m128i *v13; // rbx
  __int64 (__fastcall **v14)(); // rax
  __int64 v15; // rdx
  __int64 (__fastcall **v16)(); // rax
  _BYTE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int64 v22; // rax
  __int64 v23; // rbx
  char v24; // al
  _BYTE *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 (__fastcall **v30)(); // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  __int64 v36; // rax
  __int64 v37; // rcx
  __m128i *v38; // rax
  __int8 v39; // bl
  __int64 v40; // rdx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int128 v48; // xmm3
  __int128 v49; // xmm0
  __int64 v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rax
  __int128 v57; // xmm1
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int128 v62; // xmm6
  __int64 v63; // rax
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm2
  __m128i v68[140]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v69[112]; // [rsp+900h] [rbp+880h] BYREF
  _BYTE v70[40]; // [rsp+970h] [rbp+8F0h]
  __int128 v71; // [rsp+998h] [rbp+918h]
  __int128 v72; // [rsp+9A8h] [rbp+928h]
  __int128 v73; // [rsp+9B8h] [rbp+938h]
  __int128 v74; // [rsp+9E0h] [rbp+960h]
  __int64 v75; // [rsp+9F0h] [rbp+970h]
  char v76; // [rsp+AF8h] [rbp+A78h]
  _OWORD v77[8]; // [rsp+11D0h] [rbp+1150h] BYREF
  _OWORD v78[2]; // [rsp+1250h] [rbp+11D0h] BYREF
  __int128 v79; // [rsp+1270h] [rbp+11F0h]
  __int128 v80; // [rsp+1280h] [rbp+1200h]
  __int128 v81; // [rsp+1290h] [rbp+1210h]
  __int128 v82; // [rsp+12A0h] [rbp+1220h]
  __int128 v83; // [rsp+12B0h] [rbp+1230h]
  __int128 v84; // [rsp+12C0h] [rbp+1240h]
  __int128 v85; // [rsp+12D0h] [rbp+1250h]
  __int128 v86; // [rsp+12E0h] [rbp+1260h]
  __int128 v87; // [rsp+12F0h] [rbp+1270h]
  __int128 v88; // [rsp+1300h] [rbp+1280h]
  __int128 v89; // [rsp+1310h] [rbp+1290h]
  __int128 v90; // [rsp+1320h] [rbp+12A0h]
  __int128 v91; // [rsp+1330h] [rbp+12B0h]
  __int128 v92; // [rsp+1340h] [rbp+12C0h]
  __int128 v93; // [rsp+1350h] [rbp+12D0h]
  __int128 v94; // [rsp+1360h] [rbp+12E0h]
  __int128 v95; // [rsp+1370h] [rbp+12F0h]
  __int64 v96; // [rsp+1380h] [rbp+1300h]
  __int128 v97; // [rsp+1390h] [rbp+1310h]
  __int128 v98; // [rsp+13A0h] [rbp+1320h]
  __int128 v99; // [rsp+13B0h] [rbp+1330h]
  __int128 v100; // [rsp+13C0h] [rbp+1340h]
  __int128 v101; // [rsp+13D0h] [rbp+1350h]
  __int128 v102; // [rsp+13E0h] [rbp+1360h]
  __int64 v103; // [rsp+13F0h] [rbp+1370h]
  _BYTE v104[112]; // [rsp+1400h] [rbp+1380h] BYREF
  __int128 v105; // [rsp+1470h] [rbp+13F0h]
  __m256i v106; // [rsp+1480h] [rbp+1400h]
  _BYTE v107[31]; // [rsp+14A0h] [rbp+1420h]
  __int64 v108; // [rsp+14C8h] [rbp+1448h]
  __int128 v109; // [rsp+14D0h] [rbp+1450h]
  __int64 v110; // [rsp+14E0h] [rbp+1460h]
  __int64 v111; // [rsp+14E8h] [rbp+1468h]
  _OWORD *v112; // [rsp+14F0h] [rbp+1470h]
  _BYTE *v113; // [rsp+14F8h] [rbp+1478h]
  _OWORD *v114; // [rsp+1500h] [rbp+1480h]
  _BYTE *v115; // [rsp+1508h] [rbp+1488h]
  _OWORD *v116; // [rsp+1510h] [rbp+1490h]
  _BYTE *v117; // [rsp+1518h] [rbp+1498h]
  _OWORD *v118; // [rsp+1520h] [rbp+14A0h]
  _BYTE *v119; // [rsp+1528h] [rbp+14A8h]
  _OWORD *v120; // [rsp+1530h] [rbp+14B0h]
  _BYTE *v121; // [rsp+1538h] [rbp+14B8h]
  __int64 v122; // [rsp+1540h] [rbp+14C0h]
  __int64 v123; // [rsp+1548h] [rbp+14C8h]

  v123 = -2;
  v4 = a2;
  v6 = *(unsigned __int8 *)(a2 + 608);
  v122 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a2 + 611) = 0;
      *(_BYTE *)(a2 + 613) = 0;
      *(_WORD *)(a2 + 614) = 1;
      *(_BYTE *)(a2 + 610) = 1;
      sub_1418F44E0((__m128i *)(a2 + 288), (const __m128i *)a2, 0xE0u);
      *(_BYTE *)(v4 + 609) = 1;
      *(_OWORD *)(v4 + 512) = *(_OWORD *)(v4 + 224);
      *(_QWORD *)(v4 + 528) = v4 + 240;
      nullsub_1(v7);
      v8 = sub_140001650(16, 8);
      if ( !v8 )
        sub_141938D11(8, 16);
      v9 = v8;
      *(_QWORD *)v8 = v4 + 240;
      *(_BYTE *)(v8 + 8) = 0;
      *(_QWORD *)(v4 + 616) = v8;
      v10 = &off_141A4EF70;
      *(_QWORD *)(v4 + 624) = &off_141A4EF70;
      goto LABEL_9;
    case 1LL:
      sub_1419393E0(&off_141A496D0);
    case 2LL:
      sub_141939400(&off_141A496D0);
    case 3LL:
      v9 = *(_QWORD *)(a2 + 616);
      v10 = *(__int64 (__fastcall ***)())(v4 + 624);
LABEL_9:
      ((void (__fastcall *)(_BYTE *, __int64, _QWORD *))v10[3])(v69, v9, a3);
      if ( !*(_QWORD *)v69 )
      {
        *(_QWORD *)a1 = -1;
        v24 = 3;
        goto LABEL_73;
      }
      v89 = *(_OWORD *)&v69[32];
      v88 = *(_OWORD *)&v69[16];
      v87 = *(_OWORD *)v69;
      v121 = *(_BYTE **)(v122 + 616);
      v120 = *(_OWORD **)(v122 + 624);
      if ( *(_QWORD *)v120 )
        (*(void (__fastcall **)(_BYTE *))v120)(v121);
      v17 = v121;
      v18 = *((_QWORD *)v120 + 1);
      if ( v18 )
        sub_140001660(v121, v18, *((_QWORD *)v120 + 2));
      v19 = v122;
      *(_BYTE *)(v122 + 613) = 1;
      v20 = v88;
      v21 = v89;
      *(_OWORD *)(v19 + 536) = v87;
      *(_OWORD *)(v19 + 552) = v20;
      *(_OWORD *)(v19 + 568) = v21;
      nullsub_1(v17);
      v22 = sub_140001650(16, 8);
      if ( !v22 )
        sub_141938D11(8, 16);
      v15 = v22;
      *(_QWORD *)v22 = v19 + 288;
      *(_BYTE *)(v22 + 8) = 0;
      *(_QWORD *)(v19 + 616) = v22;
      v16 = &off_141A06078;
      *(_QWORD *)(v19 + 624) = &off_141A06078;
LABEL_16:
      ((void (__fastcall *)(_BYTE *, __int64, _QWORD *))v16[3])(v69, v15, a3);
      v23 = *(_QWORD *)v69;
      if ( *(_QWORD *)v69 == -3 )
      {
        *(_QWORD *)a1 = -1;
        v24 = 4;
        goto LABEL_73;
      }
      v110 = *(_QWORD *)&v69[24];
      v109 = *(_OWORD *)&v69[8];
      v85 = *(_OWORD *)&v69[32];
      v86 = *(_OWORD *)&v69[48];
      v121 = *(_BYTE **)(v122 + 616);
      v120 = *(_OWORD **)(v122 + 624);
      if ( *(_QWORD *)v120 )
        (*(void (__fastcall **)(_BYTE *))v120)(v121);
      v25 = v121;
      v26 = *((_QWORD *)v120 + 1);
      if ( v26 )
        sub_140001660(v121, v26, *((_QWORD *)v120 + 2));
      if ( v23 != -2 )
      {
        *(_QWORD *)v69 = v23;
        *(_OWORD *)&v69[8] = v109;
        *(_QWORD *)&v69[24] = v110;
        *(_OWORD *)&v69[32] = v85;
        *(_OWORD *)&v69[48] = v86;
        sub_1411B9CF0(v104, v69);
        v51 = v122;
LABEL_51:
        *(_BYTE *)(v51 + 612) = 0;
        sub_14040DE90(v51 + 536);
        v54 = v122;
        *(_BYTE *)(v122 + 613) = 0;
        if ( *(_BYTE *)(v54 + 609) )
        {
          v121 = *(_BYTE **)(v54 + 512);
          v120 = *(_OWORD **)(v54 + 520);
          if ( *(_QWORD *)v120 )
            (*(void (__fastcall **)(_BYTE *))v120)(v121);
          v55 = *((_QWORD *)v120 + 1);
          v54 = v122;
          if ( v55 )
            sub_140001660(v121, v55, *((_QWORD *)v120 + 2));
        }
        *(_BYTE *)(v54 + 609) = 0;
        if ( *(_BYTE *)(v54 + 610) )
          sub_140407F80(v122 + 288);
        v56 = v122;
        *(_BYTE *)(v122 + 610) = 0;
        sub_14040DE90(v56 + 240);
        goto LABEL_71;
      }
      v27 = v122;
      *(_BYTE *)(v122 + 612) = 1;
      *(_OWORD *)(v27 + 584) = v109;
      *(_QWORD *)(v27 + 600) = v110;
      nullsub_1(v25);
      v28 = sub_140001650(16, 8);
      if ( !v28 )
        sub_141938D11(8, 16);
      v29 = v28;
      *(_QWORD *)v28 = v27 + 288;
      *(_BYTE *)(v28 + 8) = 0;
      *(_QWORD *)(v27 + 616) = v28;
      v30 = &off_141A4E968;
      *(_QWORD *)(v27 + 624) = &off_141A4E968;
LABEL_26:
      ((void (__fastcall *)(_BYTE *, __int64, _QWORD *))v30[3])(v69, v29, a3);
      if ( *(_DWORD *)v69 == -1 )
      {
        *(_QWORD *)a1 = -1;
        v24 = 5;
        goto LABEL_73;
      }
      v84 = *(_OWORD *)&v69[80];
      v83 = *(_OWORD *)&v69[64];
      v82 = *(_OWORD *)&v69[48];
      v81 = *(_OWORD *)&v69[32];
      v80 = *(_OWORD *)&v69[16];
      v79 = *(_OWORD *)v69;
      v121 = *(_BYTE **)(v122 + 616);
      v120 = *(_OWORD **)(v122 + 624);
      if ( *(_QWORD *)v120 )
        (*(void (__fastcall **)(_BYTE *))v120)(v121);
      v31 = *((_QWORD *)v120 + 1);
      if ( v31 )
        sub_140001660(v121, v31, *((_QWORD *)v120 + 2));
      v32 = v122;
      *(_BYTE *)(v122 + 611) = 1;
      v33 = v80;
      v34 = v81;
      v35 = v82;
      *(_OWORD *)(v32 + 632) = v79;
      *(_OWORD *)(v32 + 648) = v33;
      *(_OWORD *)(v32 + 664) = v34;
      *(_OWORD *)(v32 + 680) = v35;
      *(_OWORD *)(v32 + 696) = v83;
      *(_OWORD *)(v32 + 712) = v84;
      *(_BYTE *)(v32 + 610) = 0;
      sub_1418F44E0((__m128i *)v69, (const __m128i *)(v32 + 288), 0xE0u);
      *(_BYTE *)(v32 + 609) = 0;
      v36 = *(_QWORD *)(v32 + 528);
      v74 = *(_OWORD *)(v32 + 512);
      v75 = v36;
      v76 = 0;
      nullsub_1(v37);
      v38 = (__m128i *)sub_140001650(512, 8);
      if ( !v38 )
        sub_141938D11(8, 512);
      v13 = v38;
      sub_1418F44E0(v38, (const __m128i *)v69, 0x200u);
      *(_QWORD *)(v32 + 616) = v13;
      v14 = &off_141A4F608;
      *(_QWORD *)(v32 + 624) = &off_141A4F608;
LABEL_33:
      ((void (__fastcall *)(_BYTE *, __m128i *, _QWORD *))v14[3])(v69, v13, a3);
      v39 = v69[0];
      if ( v69[0] == 0xFE )
      {
        *(_QWORD *)a1 = -1;
        v24 = 6;
        goto LABEL_73;
      }
      *(_OWORD *)&v107[15] = *(_OWORD *)&v69[16];
      *(_OWORD *)v107 = *(_OWORD *)&v69[1];
      v121 = *(_BYTE **)(v122 + 616);
      v120 = *(_OWORD **)(v122 + 624);
      if ( *(_QWORD *)v120 )
        (*(void (__fastcall **)(_BYTE *))v120)(v121);
      v40 = *((_QWORD *)v120 + 1);
      if ( v40 )
        sub_140001660(v121, v40, *((_QWORD *)v120 + 2));
      v4 = v122;
      if ( v39 == -1 )
      {
        *(_QWORD *)&v69[16] = *(_QWORD *)&v107[23];
        *(_OWORD *)v69 = *(_OWORD *)&v107[7];
        sub_1411B9C50(v104, v69);
        v52 = v122;
        *(_BYTE *)(v122 + 615) = 0;
        sub_14029C800(v52 + 632);
        v51 = v122;
        *(_BYTE *)(v122 + 611) = 0;
        v53 = *(_QWORD *)(v51 + 584);
        if ( v53 )
          sub_140001660(*(_QWORD *)(v51 + 592), v53, 1);
        goto LABEL_51;
      }
      v12 = (_OWORD *)(v122 + 616);
      *(_OWORD *)&v106.m256i_u64[2] = *(_OWORD *)&v107[15];
      *(_OWORD *)&v106.m256i_i8[1] = *(_OWORD *)v107;
      v106.m256i_i8[0] = v39;
      *(_BYTE *)(v122 + 615) = 0;
      *(_DWORD *)(v4 + 611) = 0;
      v41 = *(_OWORD *)(v4 + 536);
      v42 = *(_OWORD *)(v4 + 552);
      v73 = *(_OWORD *)(v4 + 568);
      v72 = v42;
      v71 = v41;
      *(_QWORD *)v70 = *(_QWORD *)(v4 + 600);
      *(_OWORD *)&v69[96] = *(_OWORD *)(v4 + 584);
      v43 = *(_OWORD *)(v4 + 648);
      v44 = *(_OWORD *)(v4 + 664);
      v45 = *(_OWORD *)(v4 + 680);
      *(_OWORD *)v69 = *(_OWORD *)(v4 + 632);
      *(_OWORD *)&v69[16] = v43;
      *(_OWORD *)&v69[32] = v44;
      *(_OWORD *)&v69[48] = v45;
      *(_OWORD *)&v69[64] = *(_OWORD *)(v4 + 696);
      *(_OWORD *)&v69[80] = *(_OWORD *)(v4 + 712);
      *(__m256i *)&v70[8] = v106;
      sub_1418F44E0(v68, (const __m128i *)v69, 0x8C8u);
      sub_1418F44E0((__m128i *)(v4 + 616), v68, 0x8C8u);
      v11 = (_BYTE *)(v4 + 2864);
      *(_BYTE *)(v4 + 2864) = 0;
LABEL_41:
      *(_OWORD *)(v4 + 848) = *(_OWORD *)(v4 + 800);
      *(_OWORD *)(v4 + 832) = *(_OWORD *)(v4 + 784);
      *(_OWORD *)(v4 + 816) = *(_OWORD *)(v4 + 768);
      *(_OWORD *)(v4 + 864) = *(_OWORD *)(v4 + 712);
      *(_QWORD *)(v4 + 880) = *(_QWORD *)(v4 + 728);
      v46 = v12[1];
      v47 = v12[2];
      v48 = v12[3];
      *(_OWORD *)(v4 + 888) = *v12;
      *(_OWORD *)(v4 + 904) = v46;
      *(_OWORD *)(v4 + 920) = v47;
      *(_OWORD *)(v4 + 936) = v48;
      *(_OWORD *)(v4 + 952) = v12[4];
      *(_OWORD *)(v4 + 968) = v12[5];
      v49 = *(_OWORD *)(v4 + 736);
      v78[1] = *(_OWORD *)(v4 + 752);
      v78[0] = v49;
      *(_BYTE *)(v4 + 2865) = 1;
      if ( *(_QWORD *)(v4 + 880) == 5
        && !(**(_DWORD **)(v4 + 872) ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)(v4 + 872) + 4LL) ^ 0x78) )
      {
        v121 = v11;
        v120 = v12;
        *(_BYTE *)(v4 + 2865) = 0;
        *(_QWORD *)(v4 + 984) = 0;
        v57 = *(_OWORD *)(v4 + 752);
        *(_OWORD *)(v4 + 992) = *(_OWORD *)(v4 + 736);
        *(_OWORD *)(v4 + 1008) = v57;
        *(_QWORD *)(v4 + 1024) = v4 + 816;
        *(_QWORD *)(v4 + 1032) = v4 + 888;
        *(_BYTE *)(v4 + 2856) = 0;
LABEL_60:
        v108 = v4 + 984;
        sub_140D41250(v77, (__int128 *)(v4 + 984), a3);
        if ( LODWORD(v77[0]) == -1 )
        {
          *v121 = 3;
          goto LABEL_72;
        }
        *(_OWORD *)v70 = v77[7];
        *(_OWORD *)&v69[96] = v77[6];
        *(_OWORD *)&v69[80] = v77[5];
        *(_OWORD *)&v69[64] = v77[4];
        *(_OWORD *)&v69[48] = v77[3];
        *(_OWORD *)&v69[32] = v77[2];
        *(_OWORD *)&v69[16] = v77[1];
        *(_OWORD *)v69 = v77[0];
        v11 = v121;
        if ( *(_BYTE *)(v122 + 2856) == 3 )
        {
          sub_140D138A0(v122 + 1064);
          *(_BYTE *)(v122 + 2857) = 0;
          v12 = v120;
          v11 = v121;
        }
        else
        {
          v12 = v120;
          if ( !*(_BYTE *)(v122 + 2856) )
          {
            v119 = v121;
            v118 = v120;
            sub_140409B40(v122 + 992);
          }
        }
        v58 = v122;
        *(_BYTE *)(v122 + 2865) = 0;
        v115 = v11;
        v114 = v12;
        sub_14029C800(v58 + 888);
        v59 = v122;
        v60 = *(_QWORD *)(v122 + 864);
        if ( v60 )
          sub_140001660(*(_QWORD *)(v122 + 872), v60, 1);
        v113 = v11;
        v112 = v12;
        sub_14040DE90(v59 + 816);
      }
      else
      {
        v119 = v11;
        v118 = v12;
        LOWORD(a2) = 404;
        sub_140DAFCE0((unsigned int)v69, a2, (unsigned int)aUnknownIdePath, 16, (__int64)aProxyUpstream, 14);
        v117 = v11;
        v116 = v12;
        sub_140409B40(v78);
        *(_BYTE *)(v122 + 2865) = 0;
        v115 = v11;
        v114 = v12;
        sub_14029C800(v4 + 888);
        v50 = *(_QWORD *)(v122 + 864);
        if ( v50 )
          sub_140001660(*(_QWORD *)(v122 + 872), v50, 1);
        v113 = v11;
        v112 = v12;
        sub_14040DE90(v4 + 816);
      }
      v61 = *(_QWORD *)v69;
      v97 = *(_OWORD *)&v69[8];
      v98 = *(_OWORD *)&v69[24];
      v99 = *(_OWORD *)&v69[40];
      v100 = *(_OWORD *)&v69[56];
      v101 = *(_OWORD *)&v69[72];
      v102 = *(_OWORD *)&v69[88];
      v103 = *(_QWORD *)&v69[104];
      v62 = *(_OWORD *)v70;
      *v11 = 1;
      if ( v61 != -1 )
      {
        v96 = v103;
        v95 = v102;
        v94 = v101;
        v93 = v100;
        v92 = v99;
        v91 = v98;
        v90 = v97;
        sub_140D12B40((__int64)v12);
        *(_QWORD *)v104 = v61;
        *(_OWORD *)&v104[8] = v90;
        *(_OWORD *)&v104[24] = v91;
        *(_OWORD *)&v104[40] = v92;
        *(_OWORD *)&v104[56] = v93;
        *(_OWORD *)&v104[72] = v94;
        *(_OWORD *)&v104[88] = v95;
        *(_QWORD *)&v104[104] = v96;
        v105 = v62;
        v63 = v122;
        *(_BYTE *)(v122 + 615) = 0;
        *(_BYTE *)(v63 + 613) = 0;
        *(_DWORD *)(v63 + 609) = 0;
        sub_14040DE90(v63 + 240);
LABEL_71:
        *(_OWORD *)(a1 + 112) = v105;
        *(_OWORD *)(a1 + 96) = *(_OWORD *)&v104[96];
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v104[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v104[64];
        v64 = *(_OWORD *)v104;
        v65 = *(_OWORD *)&v104[16];
        v66 = *(_OWORD *)&v104[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v104[48];
        *(_OWORD *)(a1 + 32) = v66;
        *(_OWORD *)(a1 + 16) = v65;
        *(_OWORD *)a1 = v64;
        v24 = 1;
        goto LABEL_73;
      }
LABEL_72:
      *(_QWORD *)a1 = -1;
      v24 = 7;
LABEL_73:
      *(_BYTE *)(v122 + 608) = v24;
      return a1;
    case 4LL:
      v15 = *(_QWORD *)(a2 + 616);
      v16 = *(__int64 (__fastcall ***)())(v4 + 624);
      goto LABEL_16;
    case 5LL:
      v29 = *(_QWORD *)(a2 + 616);
      v30 = *(__int64 (__fastcall ***)())(v4 + 624);
      goto LABEL_26;
    case 6LL:
      v13 = *(__m128i **)(a2 + 616);
      v14 = *(__int64 (__fastcall ***)())(a2 + 624);
      goto LABEL_33;
    case 7LL:
      v11 = (_BYTE *)(a2 + 2864);
      v12 = (_OWORD *)(a2 + 616);
      switch ( *(_BYTE *)(a2 + 2864) )
      {
        case 0:
          goto LABEL_41;
        case 1:
          v111 = a2 + 616;
          sub_1419393E0(&off_141A48468);
        case 2:
          v111 = a2 + 616;
          sub_141939400(&off_141A48468);
        case 3:
          v121 = (_BYTE *)(a2 + 2864);
          v120 = (_OWORD *)(a2 + 616);
          goto LABEL_60;
      }
  }
}
