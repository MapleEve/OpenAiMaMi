// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d6b800 | name sub_140D6B800
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D6B800(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(); // rax
  _BYTE *v11; // r13
  _OWORD *v12; // r12
  __int64 v13; // rdx
  __int64 (__fastcall **v14)(); // rax
  __int64 v15; // rdx
  __int64 (__fastcall **v16)(); // rax
  _BYTE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 (__fastcall **v24)(); // rax
  __int64 v25; // rbx
  char v26; // al
  _BYTE *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  _BYTE *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r14
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  __int64 v43; // rax
  __int64 v44; // rcx
  __m128i *v45; // rax
  __m128i *v46; // rbx
  __int64 (__fastcall **v47)(); // rax
  __int8 v48; // bl
  __int64 v49; // rdx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  __int128 v54; // xmm3
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int128 v57; // xmm3
  __int64 v58; // rbx
  __int64 v59; // r14
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __m128i v63; // xmm0
  __int64 v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r8
  unsigned __int64 v74; // r8
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  __int64 v77; // rcx
  __int128 v78; // xmm1
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rdi
  __int128 v83; // xmm6
  __int64 v84; // rax
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm2
  __m128i v89[192]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v90[112]; // [rsp+C40h] [rbp+BC0h] BYREF
  _QWORD v91[12]; // [rsp+CB0h] [rbp+C30h]
  __m256i v92; // [rsp+D10h] [rbp+C90h]
  __int128 v93; // [rsp+D30h] [rbp+CB0h]
  __int128 v94; // [rsp+D40h] [rbp+CC0h]
  __int128 v95; // [rsp+D50h] [rbp+CD0h]
  char v96; // [rsp+E38h] [rbp+DB8h]
  __m128i v97; // [rsp+1850h] [rbp+17D0h]
  __int128 v98; // [rsp+1860h] [rbp+17E0h]
  __int128 v99; // [rsp+1870h] [rbp+17F0h]
  __int128 v100; // [rsp+1880h] [rbp+1800h]
  __int128 v101; // [rsp+1890h] [rbp+1810h]
  __int128 v102; // [rsp+18A0h] [rbp+1820h]
  __int128 v103; // [rsp+18B0h] [rbp+1830h]
  __int128 v104; // [rsp+18C0h] [rbp+1840h]
  __int128 v105; // [rsp+18D0h] [rbp+1850h]
  __int128 v106; // [rsp+18E0h] [rbp+1860h]
  __int128 v107; // [rsp+18F0h] [rbp+1870h]
  __int128 v108; // [rsp+1900h] [rbp+1880h]
  __int128 v109; // [rsp+1910h] [rbp+1890h]
  __int128 v110; // [rsp+1920h] [rbp+18A0h]
  __int128 v111; // [rsp+1930h] [rbp+18B0h]
  __int128 v112; // [rsp+1940h] [rbp+18C0h]
  __int128 v113; // [rsp+1950h] [rbp+18D0h]
  __int128 v114; // [rsp+1960h] [rbp+18E0h]
  __int128 v115; // [rsp+1970h] [rbp+18F0h]
  __int64 v116; // [rsp+1980h] [rbp+1900h]
  __int128 v117; // [rsp+1990h] [rbp+1910h]
  __int128 v118; // [rsp+19A0h] [rbp+1920h]
  __int128 v119; // [rsp+19B0h] [rbp+1930h]
  __int128 v120; // [rsp+19C0h] [rbp+1940h]
  __int128 v121; // [rsp+19D0h] [rbp+1950h]
  __int128 v122; // [rsp+19E0h] [rbp+1960h]
  __int64 v123; // [rsp+19F0h] [rbp+1970h]
  __int128 v124; // [rsp+1A00h] [rbp+1980h]
  __int128 v125; // [rsp+1A10h] [rbp+1990h]
  __int128 v126; // [rsp+1A20h] [rbp+19A0h]
  __int128 v127; // [rsp+1A30h] [rbp+19B0h]
  __int128 v128; // [rsp+1A40h] [rbp+19C0h]
  __int64 v129; // [rsp+1A50h] [rbp+19D0h]
  __m128i v130; // [rsp+1A60h] [rbp+19E0h] BYREF
  __int128 v131; // [rsp+1A70h] [rbp+19F0h]
  __int128 v132; // [rsp+1A80h] [rbp+1A00h]
  __int128 v133; // [rsp+1A90h] [rbp+1A10h]
  __int128 v134; // [rsp+1AA0h] [rbp+1A20h]
  __int128 v135; // [rsp+1AB0h] [rbp+1A30h]
  __int128 v136; // [rsp+1AC0h] [rbp+1A40h]
  __int128 v137; // [rsp+1AD0h] [rbp+1A50h]
  _BYTE v138[112]; // [rsp+1AE0h] [rbp+1A60h] BYREF
  __int128 v139; // [rsp+1B50h] [rbp+1AD0h]
  __m256i v140; // [rsp+1B60h] [rbp+1AE0h]
  __m128i v141; // [rsp+1B80h] [rbp+1B00h] BYREF
  __int128 v142; // [rsp+1B90h] [rbp+1B10h]
  _BYTE v143[31]; // [rsp+1BA0h] [rbp+1B20h]
  __int128 v144; // [rsp+1BC8h] [rbp+1B48h] BYREF
  __int64 v145; // [rsp+1BD8h] [rbp+1B58h]
  __m128i v146; // [rsp+1BE0h] [rbp+1B60h] BYREF
  __int128 v147; // [rsp+1BF0h] [rbp+1B70h]
  __int128 v148; // [rsp+1C00h] [rbp+1B80h]
  __int64 v149; // [rsp+1C10h] [rbp+1B90h]
  __int64 v150; // [rsp+1C20h] [rbp+1BA0h]
  __int64 v151; // [rsp+1C28h] [rbp+1BA8h]
  _OWORD *v152; // [rsp+1C30h] [rbp+1BB0h]
  _BYTE *v153; // [rsp+1C38h] [rbp+1BB8h]
  _OWORD *v154; // [rsp+1C40h] [rbp+1BC0h]
  _BYTE *v155; // [rsp+1C48h] [rbp+1BC8h]
  _OWORD *v156; // [rsp+1C50h] [rbp+1BD0h]
  _BYTE *v157; // [rsp+1C58h] [rbp+1BD8h]
  _OWORD *v158; // [rsp+1C60h] [rbp+1BE0h]
  _BYTE *v159; // [rsp+1C68h] [rbp+1BE8h]
  _OWORD *v160; // [rsp+1C70h] [rbp+1BF0h]
  _BYTE *v161; // [rsp+1C78h] [rbp+1BF8h]
  _OWORD *v162; // [rsp+1C80h] [rbp+1C00h]
  _BYTE *v163; // [rsp+1C88h] [rbp+1C08h]
  __int64 v164; // [rsp+1C90h] [rbp+1C10h]
  __int64 v165; // [rsp+1C98h] [rbp+1C18h]

  v165 = -2;
  v4 = a2;
  v6 = *(unsigned __int8 *)(a2 + 696);
  v164 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 699) = 0;
      *(_WORD *)(a2 + 703) = 1;
      *(_BYTE *)(a2 + 698) = 1;
      sub_1418F44E0((__m128i *)(a2 + 288), (const __m128i *)a2, 0xE0u);
      *(_BYTE *)(v4 + 697) = 1;
      *(_OWORD *)(v4 + 512) = *(_OWORD *)(v4 + 224);
      *(_QWORD *)(v4 + 528) = v4 + 240;
      nullsub_1(v7);
      v8 = sub_140001650(16, 8);
      if ( !v8 )
        sub_141938D11(8, 16);
      v9 = v8;
      *(_QWORD *)v8 = v4 + 240;
      *(_BYTE *)(v8 + 8) = 0;
      *(_QWORD *)(v4 + 712) = v8;
      v10 = &off_141A4EF70;
      *(_QWORD *)(v4 + 720) = &off_141A4EF70;
      goto LABEL_9;
    case 1LL:
      sub_1419393E0(&off_141A496D0);
    case 2LL:
      sub_141939400(&off_141A496D0);
    case 3LL:
      v9 = *(_QWORD *)(a2 + 712);
      v10 = *(__int64 (__fastcall ***)())(v4 + 720);
LABEL_9:
      ((void (__fastcall *)(_BYTE *, __int64, _QWORD *))v10[3])(v90, v9, a3);
      if ( !*(_QWORD *)v90 )
      {
        *(_QWORD *)a1 = -1;
        v26 = 3;
        goto LABEL_89;
      }
      v109 = *(_OWORD *)&v90[32];
      v108 = *(_OWORD *)&v90[16];
      v107 = *(_OWORD *)v90;
      v163 = *(_BYTE **)(v164 + 712);
      v162 = *(_OWORD **)(v164 + 720);
      if ( *(_QWORD *)v162 )
        (*(void (__fastcall **)(_BYTE *))v162)(v163);
      v17 = v163;
      v18 = *((_QWORD *)v162 + 1);
      if ( v18 )
        sub_140001660(v163, v18, *((_QWORD *)v162 + 2));
      v19 = v164;
      *(_BYTE *)(v164 + 702) = 1;
      v20 = v108;
      v21 = v109;
      *(_OWORD *)(v19 + 536) = v107;
      *(_OWORD *)(v19 + 552) = v20;
      *(_OWORD *)(v19 + 568) = v21;
      nullsub_1(v17);
      v22 = sub_140001650(16, 8);
      if ( !v22 )
        sub_141938D11(8, 16);
      v23 = v22;
      *(_QWORD *)v22 = v19 + 288;
      *(_BYTE *)(v22 + 8) = 0;
      *(_QWORD *)(v19 + 712) = v22;
      v24 = &off_141A06078;
      *(_QWORD *)(v19 + 720) = &off_141A06078;
LABEL_17:
      ((void (__fastcall *)(_BYTE *, __int64, _QWORD *))v24[3])(v90, v23, a3);
      v25 = *(_QWORD *)v90;
      if ( *(_QWORD *)v90 != -3 )
      {
        v149 = *(_QWORD *)&v90[24];
        v148 = *(_OWORD *)&v90[8];
        v105 = *(_OWORD *)&v90[32];
        v106 = *(_OWORD *)&v90[48];
        v163 = *(_BYTE **)(v164 + 712);
        v162 = *(_OWORD **)(v164 + 720);
        if ( *(_QWORD *)v162 )
          (*(void (__fastcall **)(_BYTE *))v162)(v163);
        v27 = v163;
        v28 = *((_QWORD *)v162 + 1);
        if ( v28 )
          sub_140001660(v163, v28, *((_QWORD *)v162 + 2));
        if ( v25 == -2 )
        {
          v29 = v164;
          *(_BYTE *)(v164 + 701) = 1;
          *(_OWORD *)(v29 + 584) = v148;
          *(_QWORD *)(v29 + 600) = v149;
          nullsub_1(v27);
          v30 = sub_140001650(16, 8);
          if ( !v30 )
            sub_141938D11(8, 16);
          v15 = v30;
          *(_QWORD *)v30 = v29 + 288;
          *(_BYTE *)(v30 + 8) = 0;
          *(_QWORD *)(v29 + 712) = v30;
          v16 = &off_141A4E748;
          *(_QWORD *)(v29 + 720) = &off_141A4E748;
LABEL_26:
          ((void (__fastcall *)(_BYTE *, __int64, _QWORD *))v16[3])(v90, v15, a3);
          if ( v90[0] == 0xFF )
          {
            *(_QWORD *)a1 = -1;
            v26 = 5;
            goto LABEL_89;
          }
          v129 = *(_QWORD *)&v90[80];
          v128 = *(_OWORD *)&v90[64];
          v127 = *(_OWORD *)&v90[48];
          v126 = *(_OWORD *)&v90[32];
          v125 = *(_OWORD *)&v90[16];
          v124 = *(_OWORD *)v90;
          v163 = *(_BYTE **)(v164 + 712);
          v162 = *(_OWORD **)(v164 + 720);
          if ( *(_QWORD *)v162 )
            (*(void (__fastcall **)(_BYTE *))v162)(v163);
          v31 = v163;
          v32 = *((_QWORD *)v162 + 1);
          if ( v32 )
            sub_140001660(v163, v32, *((_QWORD *)v162 + 2));
          v33 = v164;
          *(_BYTE *)(v164 + 700) = 1;
          v34 = v125;
          v35 = v126;
          v36 = v127;
          *(_OWORD *)(v33 + 608) = v124;
          *(_OWORD *)(v33 + 624) = v34;
          *(_OWORD *)(v33 + 640) = v35;
          *(_OWORD *)(v33 + 656) = v36;
          *(_OWORD *)(v33 + 672) = v128;
          *(_QWORD *)(v33 + 688) = v129;
          nullsub_1(v31);
          v37 = sub_140001650(16, 8);
          if ( !v37 )
            sub_141938D11(8, 16);
          v13 = v37;
          *(_QWORD *)v37 = v33 + 288;
          *(_BYTE *)(v37 + 8) = 0;
          *(_QWORD *)(v33 + 712) = v37;
          v14 = &off_141A4E968;
          *(_QWORD *)(v33 + 720) = &off_141A4E968;
LABEL_33:
          ((void (__fastcall *)(_BYTE *, __int64, _QWORD *))v14[3])(v90, v13, a3);
          if ( *(_DWORD *)v90 == -1 )
          {
            *(_QWORD *)a1 = -1;
            v26 = 6;
            goto LABEL_89;
          }
          v104 = *(_OWORD *)&v90[80];
          v103 = *(_OWORD *)&v90[64];
          v102 = *(_OWORD *)&v90[48];
          v101 = *(_OWORD *)&v90[32];
          v100 = *(_OWORD *)&v90[16];
          v99 = *(_OWORD *)v90;
          v163 = *(_BYTE **)(v164 + 712);
          v162 = *(_OWORD **)(v164 + 720);
          if ( *(_QWORD *)v162 )
            (*(void (__fastcall **)(_BYTE *))v162)(v163);
          v38 = *((_QWORD *)v162 + 1);
          if ( v38 )
            sub_140001660(v163, v38, *((_QWORD *)v162 + 2));
          v39 = v164;
          *(_BYTE *)(v164 + 699) = 1;
          v40 = v100;
          v41 = v101;
          v42 = v102;
          *(_OWORD *)(v39 + 728) = v99;
          *(_OWORD *)(v39 + 744) = v40;
          *(_OWORD *)(v39 + 760) = v41;
          *(_OWORD *)(v39 + 776) = v42;
          *(_OWORD *)(v39 + 792) = v103;
          *(_OWORD *)(v39 + 808) = v104;
          *(_BYTE *)(v39 + 698) = 0;
          sub_1418F44E0((__m128i *)v90, (const __m128i *)(v39 + 288), 0xE0u);
          *(_BYTE *)(v39 + 697) = 0;
          v43 = *(_QWORD *)(v39 + 528);
          *(_OWORD *)&v92.m256i_u64[2] = *(_OWORD *)(v39 + 512);
          *(_QWORD *)&v93 = v43;
          v96 = 0;
          nullsub_1(v44);
          v45 = (__m128i *)sub_140001650(512, 8);
          if ( !v45 )
            sub_141938D11(8, 512);
          v46 = v45;
          sub_1418F44E0(v45, (const __m128i *)v90, 0x200u);
          *(_QWORD *)(v39 + 712) = v46;
          v47 = &off_141A4F608;
          *(_QWORD *)(v39 + 720) = &off_141A4F608;
LABEL_41:
          ((void (__fastcall *)(_BYTE *, __m128i *, _QWORD *))v47[3])(v90, v46, a3);
          v48 = v90[0];
          if ( v90[0] == 0xFE )
          {
            *(_QWORD *)a1 = -1;
            v26 = 7;
            goto LABEL_89;
          }
          *(_OWORD *)&v143[15] = *(_OWORD *)&v90[16];
          *(_OWORD *)v143 = *(_OWORD *)&v90[1];
          v163 = *(_BYTE **)(v164 + 712);
          v162 = *(_OWORD **)(v164 + 720);
          if ( *(_QWORD *)v162 )
            (*(void (__fastcall **)(_BYTE *))v162)(v163);
          v49 = *((_QWORD *)v162 + 1);
          if ( v49 )
            sub_140001660(v163, v49, *((_QWORD *)v162 + 2));
          v4 = v164;
          if ( v48 != -1 )
          {
            v12 = (_OWORD *)(v164 + 712);
            *(_OWORD *)&v140.m256i_u64[2] = *(_OWORD *)&v143[15];
            *(_OWORD *)&v140.m256i_i8[1] = *(_OWORD *)v143;
            v140.m256i_i8[0] = v48;
            *(_WORD *)(v164 + 703) = 0;
            *(_DWORD *)(v4 + 699) = 0;
            v50 = *(_OWORD *)(v4 + 536);
            v51 = *(_OWORD *)(v4 + 552);
            v95 = *(_OWORD *)(v4 + 568);
            v94 = v51;
            v93 = v50;
            v91[0] = *(_QWORD *)(v4 + 600);
            *(_OWORD *)&v90[96] = *(_OWORD *)(v4 + 584);
            v52 = *(_OWORD *)(v4 + 624);
            v53 = *(_OWORD *)(v4 + 640);
            v54 = *(_OWORD *)(v4 + 656);
            *(_OWORD *)&v91[1] = *(_OWORD *)(v4 + 608);
            *(_OWORD *)&v91[3] = v52;
            *(_OWORD *)&v91[5] = v53;
            *(_OWORD *)&v91[7] = v54;
            *(_OWORD *)&v91[9] = *(_OWORD *)(v4 + 672);
            v91[11] = *(_QWORD *)(v4 + 688);
            v55 = *(_OWORD *)(v4 + 744);
            v56 = *(_OWORD *)(v4 + 760);
            v57 = *(_OWORD *)(v4 + 776);
            *(_OWORD *)v90 = *(_OWORD *)(v4 + 728);
            *(_OWORD *)&v90[16] = v55;
            *(_OWORD *)&v90[32] = v56;
            *(_OWORD *)&v90[48] = v57;
            *(_OWORD *)&v90[64] = *(_OWORD *)(v4 + 792);
            *(_OWORD *)&v90[80] = *(_OWORD *)(v4 + 808);
            v92 = v140;
            sub_1418F44E0(v89, (const __m128i *)v90, 0xC08u);
            sub_1418F44E0((__m128i *)(v4 + 712), v89, 0xC08u);
            v11 = (_BYTE *)(v4 + 3792);
            *(_BYTE *)(v4 + 3792) = 0;
LABEL_49:
            v58 = v4 + 1000;
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
            v59 = v4 + 1160;
            *(_OWORD *)(v4 + 1240) = v12[5];
            *(_OWORD *)(v4 + 1224) = v12[4];
            v60 = *v12;
            v61 = v12[1];
            v62 = v12[2];
            *(_OWORD *)(v4 + 1208) = v12[3];
            *(_OWORD *)(v4 + 1192) = v62;
            *(_OWORD *)(v4 + 1176) = v61;
            *(_OWORD *)(v4 + 1160) = v60;
            v63 = *(__m128i *)(v4 + 920);
            v142 = *(_OWORD *)(v4 + 936);
            v141 = v63;
            *(_BYTE *)(v4 + 3793) = 1;
            if ( *(_QWORD *)(v4 + 1064) != 5
              || **(_DWORD **)(v4 + 1056) ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)(v4 + 1056) + 4LL) ^ 0x78 )
            {
              v161 = v11;
              v160 = v12;
              LOWORD(a2) = 404;
              sub_140DAFCE0((unsigned int)v90, a2, (unsigned int)aUnknownIdePath, 16, (__int64)aProxyUpstream, 14);
              v159 = v11;
              v158 = v12;
              sub_140409B40(&v141);
              *(_BYTE *)(v164 + 3793) = 0;
              v157 = v11;
              v156 = v12;
              sub_14029C800(v4 + 1160);
              v155 = v11;
              v154 = v12;
              sub_14029B810(v164 + 1072);
              v64 = *(_QWORD *)(v164 + 1048);
              if ( v64 )
                sub_140001660(*(_QWORD *)(v164 + 1056), v64, 1);
              v153 = v11;
              v152 = v12;
              sub_14040DE90(v4 + 1000);
              goto LABEL_84;
            }
            v161 = v11;
            v160 = v12;
            v72 = sub_140DAC840(&v144, v4 + 1000);
            v4 = v164;
            *(_BYTE *)(v164 + 3793) = 0;
            v146 = v141;
            v147 = v142;
            v162 = v12;
            v163 = v11;
            if ( v141.m128i_i8[0] == 5 )
            {
              v72 = sub_140DED130(&v130, &v146.m128i_u64[1], aPreviousRespon_0, 20);
              if ( v130.m128i_i8[0] != -1 )
                v72 = sub_140409B40(&v130);
              v4 = v164;
            }
            v131 = v147;
            v130 = v146;
            v73 = *(unsigned __int16 *)(v4 + 1152);
            if ( v73 == 0xFFFF )
            {
              v77 = 0;
            }
            else
            {
              v74 = v73 + 1;
              v75 = *(_QWORD *)(v4 + 1128);
              v76 = *(_QWORD *)(v4 + 1136);
              v72 = v76 - v74;
              if ( v76 <= v74 )
              {
                if ( v76 != v74 )
LABEL_75:
                  sub_141938F40(v75, v76, v74, v76, (__int64)&off_141A49C80);
              }
              else if ( *(char *)(v75 + v74) < -64 )
              {
                goto LABEL_75;
              }
              v77 = v74 + v75;
            }
            v98 = v131;
            v97 = v130;
            *(_QWORD *)(v4 + 1272) = v145;
            *(_OWORD *)(v4 + 1256) = v144;
            *(_QWORD *)(v4 + 1280) = -1;
            v78 = v98;
            *(__m128i *)(v4 + 1304) = v97;
            *(_OWORD *)(v4 + 1320) = v78;
            *(_QWORD *)(v4 + 1336) = v58;
            *(_QWORD *)(v4 + 1344) = v59;
            *(_QWORD *)(v4 + 1352) = aActive;
            *(_QWORD *)(v4 + 1360) = 6;
            *(_QWORD *)(v4 + 1368) = v77;
            *(_QWORD *)(v4 + 1376) = v72;
            *(_BYTE *)(v4 + 2096) = 0;
LABEL_80:
            v150 = v4 + 1256;
            sub_140D46580(&v130, v4 + 1256, a3);
            if ( v130.m128i_i32[0] == -1 )
            {
              *v163 = 3;
              goto LABEL_88;
            }
            *(_OWORD *)v91 = v137;
            *(_OWORD *)&v90[96] = v136;
            *(_OWORD *)&v90[80] = v135;
            *(_OWORD *)&v90[64] = v134;
            *(_OWORD *)&v90[48] = v133;
            *(_OWORD *)&v90[32] = v132;
            *(_OWORD *)&v90[16] = v131;
            *(__m128i *)v90 = v130;
            v11 = v163;
            v161 = v163;
            v12 = v162;
            v160 = v162;
            sub_140D14680(v150);
            v79 = v164;
            *(_BYTE *)(v164 + 3793) = 0;
            v157 = v11;
            v156 = v12;
            sub_14029C800(v79 + 1160);
            v155 = v11;
            v154 = v12;
            sub_14029B810(v164 + 1072);
            v80 = v164;
            v81 = *(_QWORD *)(v164 + 1048);
            if ( v81 )
              sub_140001660(*(_QWORD *)(v164 + 1056), v81, 1);
            v153 = v11;
            v152 = v12;
            sub_14040DE90(v80 + 1000);
LABEL_84:
            v82 = *(_QWORD *)v90;
            v117 = *(_OWORD *)&v90[8];
            v118 = *(_OWORD *)&v90[24];
            v119 = *(_OWORD *)&v90[40];
            v120 = *(_OWORD *)&v90[56];
            v121 = *(_OWORD *)&v90[72];
            v122 = *(_OWORD *)&v90[88];
            v123 = *(_QWORD *)&v90[104];
            v83 = *(_OWORD *)v91;
            *v11 = 1;
            if ( v82 != -1 )
            {
              v116 = v123;
              v115 = v122;
              v114 = v121;
              v113 = v120;
              v112 = v119;
              v111 = v118;
              v110 = v117;
              sub_140D12E50(v12);
              *(_QWORD *)v138 = v82;
              *(_OWORD *)&v138[8] = v110;
              *(_OWORD *)&v138[24] = v111;
              *(_OWORD *)&v138[40] = v112;
              *(_OWORD *)&v138[56] = v113;
              *(_OWORD *)&v138[72] = v114;
              *(_OWORD *)&v138[88] = v115;
              *(_QWORD *)&v138[104] = v116;
              v139 = v83;
              v84 = v164;
              *(_BYTE *)(v164 + 704) = 0;
              *(_WORD *)(v84 + 701) = 0;
              *(_DWORD *)(v84 + 697) = 0;
              sub_14040DE90(v84 + 240);
LABEL_86:
              *(_OWORD *)(a1 + 112) = v139;
              *(_OWORD *)(a1 + 96) = *(_OWORD *)&v138[96];
              *(_OWORD *)(a1 + 80) = *(_OWORD *)&v138[80];
              *(_OWORD *)(a1 + 64) = *(_OWORD *)&v138[64];
              v85 = *(_OWORD *)v138;
              v86 = *(_OWORD *)&v138[16];
              v87 = *(_OWORD *)&v138[32];
              *(_OWORD *)(a1 + 48) = *(_OWORD *)&v138[48];
              *(_OWORD *)(a1 + 32) = v87;
              *(_OWORD *)(a1 + 16) = v86;
              *(_OWORD *)a1 = v85;
              v26 = 1;
              goto LABEL_89;
            }
LABEL_88:
            *(_QWORD *)a1 = -1;
            v26 = 8;
            goto LABEL_89;
          }
          *(_QWORD *)&v90[16] = *(_QWORD *)&v143[23];
          *(_OWORD *)v90 = *(_OWORD *)&v143[7];
          sub_1411B9C50(v138, v90);
          v66 = v164;
          *(_BYTE *)(v164 + 704) = 0;
          sub_14029C800(v66 + 728);
          v67 = v164;
          *(_BYTE *)(v164 + 699) = 0;
          sub_14029B810(v67 + 608);
          v65 = v164;
          *(_BYTE *)(v164 + 700) = 0;
          v68 = *(_QWORD *)(v65 + 584);
          if ( v68 )
            sub_140001660(*(_QWORD *)(v65 + 592), v68, 1);
        }
        else
        {
          *(_QWORD *)v90 = v25;
          *(_OWORD *)&v90[8] = v148;
          *(_QWORD *)&v90[24] = v149;
          *(_OWORD *)&v90[32] = v105;
          *(_OWORD *)&v90[48] = v106;
          sub_1411B9CF0(v138, v90);
          v65 = v164;
        }
        *(_BYTE *)(v65 + 701) = 0;
        sub_14040DE90(v65 + 536);
        v69 = v164;
        *(_BYTE *)(v164 + 702) = 0;
        if ( *(_BYTE *)(v69 + 697) )
        {
          v163 = *(_BYTE **)(v69 + 512);
          v162 = *(_OWORD **)(v69 + 520);
          if ( *(_QWORD *)v162 )
            (*(void (__fastcall **)(_BYTE *))v162)(v163);
          v70 = *((_QWORD *)v162 + 1);
          v69 = v164;
          if ( v70 )
            sub_140001660(v163, v70, *((_QWORD *)v162 + 2));
        }
        *(_BYTE *)(v69 + 697) = 0;
        if ( *(_BYTE *)(v69 + 698) )
          sub_140407F80(v164 + 288);
        v71 = v164;
        *(_BYTE *)(v164 + 698) = 0;
        sub_14040DE90(v71 + 240);
        goto LABEL_86;
      }
      *(_QWORD *)a1 = -1;
      v26 = 4;
LABEL_89:
      *(_BYTE *)(v164 + 696) = v26;
      return a1;
    case 4LL:
      v23 = *(_QWORD *)(a2 + 712);
      v24 = *(__int64 (__fastcall ***)())(v4 + 720);
      goto LABEL_17;
    case 5LL:
      v15 = *(_QWORD *)(a2 + 712);
      v16 = *(__int64 (__fastcall ***)())(v4 + 720);
      goto LABEL_26;
    case 6LL:
      v13 = *(_QWORD *)(a2 + 712);
      v14 = *(__int64 (__fastcall ***)())(v4 + 720);
      goto LABEL_33;
    case 7LL:
      v46 = *(__m128i **)(a2 + 712);
      v47 = *(__int64 (__fastcall ***)())(a2 + 720);
      goto LABEL_41;
    case 8LL:
      v11 = (_BYTE *)(a2 + 3792);
      v12 = (_OWORD *)(a2 + 712);
      switch ( *(_BYTE *)(a2 + 3792) )
      {
        case 0:
          goto LABEL_49;
        case 1:
          v151 = a2 + 712;
          sub_1419393E0(&off_141A48150);
        case 2:
          v151 = a2 + 712;
          sub_141939400(&off_141A48150);
        case 3:
          v163 = (_BYTE *)(a2 + 3792);
          v162 = (_OWORD *)(a2 + 712);
          goto LABEL_80;
      }
  }
}
