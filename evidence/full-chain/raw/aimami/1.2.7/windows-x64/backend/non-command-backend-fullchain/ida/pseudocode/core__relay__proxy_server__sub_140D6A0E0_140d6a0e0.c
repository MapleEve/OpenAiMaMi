// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d6a0e0 | name sub_140D6A0E0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_140D6A0E0(__m128i *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(); // rax
  _BYTE *v11; // r9
  _OWORD *v12; // r15
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
  _BYTE *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 (__fastcall **v31)(); // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  __int64 v37; // rax
  __int64 v38; // rcx
  __m128i *v39; // rax
  __int8 v40; // bl
  char v41; // al
  __int64 v42; // rdx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int128 v50; // xmm3
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  __int128 v53; // xmm3
  unsigned __int64 v54; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm2
  __m128i v58; // xmm0
  __int64 v59; // r8
  unsigned __int64 v60; // r8
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rax
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm2
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  _BYTE *v77; // rbx
  __int64 v78; // rdi
  __m128i v79; // xmm6
  __int64 v80; // rax
  __m128i v81; // xmm0
  __m128i v82; // xmm1
  __m128i v83; // xmm2
  __m128i v85[242]; // [rsp+28h] [rbp-58h] BYREF
  __m256i v86; // [rsp+F50h] [rbp+ED0h] BYREF
  __int128 v87; // [rsp+F70h] [rbp+EF0h]
  __int128 v88; // [rsp+F80h] [rbp+F00h]
  __int128 v89; // [rsp+F90h] [rbp+F10h]
  __int128 v90; // [rsp+FA0h] [rbp+F20h]
  __int128 v91; // [rsp+FB0h] [rbp+F30h]
  __int128 v92; // [rsp+FC0h] [rbp+F40h]
  __int128 v93; // [rsp+FD0h] [rbp+F50h]
  __int128 v94; // [rsp+FE0h] [rbp+F60h]
  __int128 v95; // [rsp+FF0h] [rbp+F70h]
  __int64 v96; // [rsp+1000h] [rbp+F80h]
  __m256i v97; // [rsp+1008h] [rbp+F88h]
  __m256i v98; // [rsp+1028h] [rbp+FA8h]
  __int128 v99; // [rsp+1048h] [rbp+FC8h]
  char v100; // [rsp+1148h] [rbp+10C8h]
  __int128 v101; // [rsp+1E80h] [rbp+1E00h]
  __int128 v102; // [rsp+1E90h] [rbp+1E10h]
  __int128 v103; // [rsp+1EA0h] [rbp+1E20h]
  __int128 v104; // [rsp+1EB0h] [rbp+1E30h]
  __int128 v105; // [rsp+1EC0h] [rbp+1E40h]
  __int128 v106; // [rsp+1ED0h] [rbp+1E50h]
  __m128i v107[10]; // [rsp+1EE0h] [rbp+1E60h] BYREF
  __m128i v108; // [rsp+1F80h] [rbp+1F00h]
  __m128i v109; // [rsp+1F90h] [rbp+1F10h]
  __m128i v110; // [rsp+1FA0h] [rbp+1F20h]
  __m128i v111; // [rsp+1FB0h] [rbp+1F30h]
  __m128i v112; // [rsp+1FC0h] [rbp+1F40h]
  __m128i v113; // [rsp+1FD0h] [rbp+1F50h]
  __m128i v114; // [rsp+1FE0h] [rbp+1F60h]
  __m256i v115; // [rsp+1FF0h] [rbp+1F70h]
  __int128 v116; // [rsp+2010h] [rbp+1F90h]
  __int128 v117; // [rsp+2020h] [rbp+1FA0h]
  __int128 v118; // [rsp+2030h] [rbp+1FB0h]
  __int128 v119; // [rsp+2040h] [rbp+1FC0h]
  __m256i v120; // [rsp+2050h] [rbp+1FD0h]
  __int128 v121; // [rsp+2070h] [rbp+1FF0h]
  __m128i v122; // [rsp+2080h] [rbp+2000h] BYREF
  __m128i v123; // [rsp+2090h] [rbp+2010h]
  __m128i v124; // [rsp+20A0h] [rbp+2020h]
  __m128i v125; // [rsp+20B0h] [rbp+2030h]
  __m128i v126; // [rsp+20C0h] [rbp+2040h]
  __m128i v127; // [rsp+20D0h] [rbp+2050h]
  __m128i v128; // [rsp+20E0h] [rbp+2060h]
  __m128i v129; // [rsp+20F0h] [rbp+2070h]
  __m256i v130; // [rsp+2100h] [rbp+2080h]
  __int128 v131; // [rsp+2120h] [rbp+20A0h]
  __int128 v132; // [rsp+2130h] [rbp+20B0h]
  __int128 v133; // [rsp+2140h] [rbp+20C0h]
  __int64 v134; // [rsp+2150h] [rbp+20D0h]
  __m256i v135; // [rsp+2160h] [rbp+20E0h]
  _BYTE v136[31]; // [rsp+2180h] [rbp+2100h]
  __int64 v137; // [rsp+21A0h] [rbp+2120h]
  _BYTE *v138; // [rsp+21A8h] [rbp+2128h]
  __int64 v139; // [rsp+21B0h] [rbp+2130h]
  _BYTE *v140; // [rsp+21B8h] [rbp+2138h]
  __int64 v141; // [rsp+21C0h] [rbp+2140h]
  __int64 v142; // [rsp+21C8h] [rbp+2148h]
  _OWORD *v143; // [rsp+21D0h] [rbp+2150h]
  _BYTE *v144; // [rsp+21D8h] [rbp+2158h]
  _OWORD *v145; // [rsp+21E0h] [rbp+2160h]
  _BYTE *v146; // [rsp+21E8h] [rbp+2168h]
  __int64 v147; // [rsp+21F0h] [rbp+2170h]
  __int64 v148; // [rsp+21F8h] [rbp+2178h]

  v148 = -2;
  v4 = a2;
  v6 = *(unsigned __int8 *)(a2 + 672);
  v147 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a2 + 675) = 0;
      *(_BYTE *)(a2 + 677) = 0;
      *(_WORD *)(a2 + 678) = 1;
      *(_BYTE *)(a2 + 674) = 1;
      sub_1418F44E0((__m128i *)(a2 + 288), (const __m128i *)a2, 0xE0u);
      *(_BYTE *)(v4 + 673) = 1;
      *(_OWORD *)(v4 + 512) = *(_OWORD *)(v4 + 224);
      *(_QWORD *)(v4 + 528) = v4 + 240;
      nullsub_1(v7);
      v8 = sub_140001650(16, 8);
      if ( !v8 )
        sub_141938D11(8, 16);
      v9 = v8;
      *(_QWORD *)v8 = v4 + 240;
      *(_BYTE *)(v8 + 8) = 0;
      *(_QWORD *)(v4 + 680) = v8;
      v10 = &off_141A4EF70;
      *(_QWORD *)(v4 + 688) = &off_141A4EF70;
      goto LABEL_9;
    case 1LL:
      sub_1419393E0(&off_141A496D0);
    case 2LL:
      sub_141939400(&off_141A496D0);
    case 3LL:
      v9 = *(_QWORD *)(a2 + 680);
      v10 = *(__int64 (__fastcall ***)())(v4 + 688);
LABEL_9:
      ((void (__fastcall *)(__m256i *, __int64, _QWORD *))v10[3])(&v86, v9, a3);
      if ( !v86.m256i_i64[0] )
      {
        a1->m128i_i64[0] = -1;
        v41 = 3;
        goto LABEL_62;
      }
      v121 = v87;
      v120 = v86;
      v146 = *(_BYTE **)(v147 + 680);
      v145 = *(_OWORD **)(v147 + 688);
      if ( *(_QWORD *)v145 )
        (*(void (__fastcall **)(_BYTE *))v145)(v146);
      v17 = v146;
      v18 = *((_QWORD *)v145 + 1);
      if ( v18 )
        sub_140001660(v146, v18, *((_QWORD *)v145 + 2));
      v19 = v147;
      *(_BYTE *)(v147 + 677) = 1;
      v20 = *(_OWORD *)&v120.m256i_u64[2];
      v21 = v121;
      *(_OWORD *)(v19 + 536) = *(_OWORD *)v120.m256i_i8;
      *(_OWORD *)(v19 + 552) = v20;
      *(_OWORD *)(v19 + 568) = v21;
      nullsub_1(v17);
      v22 = sub_140001650(16, 8);
      if ( !v22 )
        sub_141938D11(8, 16);
      v15 = v22;
      *(_QWORD *)v22 = v19 + 288;
      *(_BYTE *)(v22 + 8) = 0;
      *(_QWORD *)(v19 + 680) = v22;
      v16 = &off_141A4E748;
      *(_QWORD *)(v19 + 688) = &off_141A4E748;
LABEL_16:
      ((void (__fastcall *)(__m256i *, __int64, _QWORD *))v16[3])(&v86, v15, a3);
      if ( v86.m256i_i8[0] == -1 )
      {
        a1->m128i_i64[0] = -1;
        v41 = 4;
        goto LABEL_62;
      }
      v134 = v90;
      v133 = v89;
      v132 = v88;
      v131 = v87;
      v130 = v86;
      v146 = *(_BYTE **)(v147 + 680);
      v145 = *(_OWORD **)(v147 + 688);
      if ( *(_QWORD *)v145 )
        (*(void (__fastcall **)(_BYTE *))v145)(v146);
      v23 = v146;
      v24 = *((_QWORD *)v145 + 1);
      if ( v24 )
        sub_140001660(v146, v24, *((_QWORD *)v145 + 2));
      v25 = v147;
      *(_BYTE *)(v147 + 676) = 1;
      v26 = *(_OWORD *)&v130.m256i_u64[2];
      v27 = v131;
      v28 = v132;
      *(_OWORD *)(v25 + 584) = *(_OWORD *)v130.m256i_i8;
      *(_OWORD *)(v25 + 600) = v26;
      *(_OWORD *)(v25 + 616) = v27;
      *(_OWORD *)(v25 + 632) = v28;
      *(_OWORD *)(v25 + 648) = v133;
      *(_QWORD *)(v25 + 664) = v134;
      nullsub_1(v23);
      v29 = sub_140001650(16, 8);
      if ( !v29 )
        sub_141938D11(8, 16);
      v30 = v29;
      *(_QWORD *)v29 = v25 + 288;
      *(_BYTE *)(v29 + 8) = 0;
      *(_QWORD *)(v25 + 680) = v29;
      v31 = &off_141A4E968;
      *(_QWORD *)(v25 + 688) = &off_141A4E968;
LABEL_24:
      ((void (__fastcall *)(__m256i *, __int64, _QWORD *))v31[3])(&v86, v30, a3);
      if ( v86.m256i_i32[0] == -1 )
      {
        a1->m128i_i64[0] = -1;
        v41 = 5;
        goto LABEL_62;
      }
      v119 = v90;
      v118 = v89;
      v117 = v88;
      v116 = v87;
      v115 = v86;
      v146 = *(_BYTE **)(v147 + 680);
      v145 = *(_OWORD **)(v147 + 688);
      if ( *(_QWORD *)v145 )
        (*(void (__fastcall **)(_BYTE *))v145)(v146);
      v32 = *((_QWORD *)v145 + 1);
      if ( v32 )
        sub_140001660(v146, v32, *((_QWORD *)v145 + 2));
      v33 = v147;
      *(_BYTE *)(v147 + 675) = 1;
      v34 = *(_OWORD *)&v115.m256i_u64[2];
      v35 = v116;
      v36 = v117;
      *(_OWORD *)(v33 + 696) = *(_OWORD *)v115.m256i_i8;
      *(_OWORD *)(v33 + 712) = v34;
      *(_OWORD *)(v33 + 728) = v35;
      *(_OWORD *)(v33 + 744) = v36;
      *(_OWORD *)(v33 + 760) = v118;
      *(_OWORD *)(v33 + 776) = v119;
      *(_BYTE *)(v33 + 674) = 0;
      sub_1418F44E0((__m128i *)&v86, (const __m128i *)(v33 + 288), 0xE0u);
      *(_BYTE *)(v33 + 673) = 0;
      v37 = *(_QWORD *)(v33 + 528);
      *(_OWORD *)&v98.m256i_u64[1] = *(_OWORD *)(v33 + 512);
      v98.m256i_i64[3] = v37;
      v100 = 0;
      nullsub_1(v38);
      v39 = (__m128i *)sub_140001650(512, 8);
      if ( !v39 )
        sub_141938D11(8, 512);
      v13 = v39;
      sub_1418F44E0(v39, (const __m128i *)&v86, 0x200u);
      *(_QWORD *)(v33 + 680) = v13;
      v14 = &off_141A4F608;
      *(_QWORD *)(v33 + 688) = &off_141A4F608;
LABEL_31:
      ((void (__fastcall *)(__m256i *, __m128i *, _QWORD *))v14[3])(&v86, v13, a3);
      v40 = v86.m256i_i8[0];
      if ( v86.m256i_i8[0] != -2 )
      {
        *(_OWORD *)&v136[15] = *(_OWORD *)&v86.m256i_u64[2];
        *(_OWORD *)v136 = *(_OWORD *)&v86.m256i_i8[1];
        v146 = *(_BYTE **)(v147 + 680);
        v145 = *(_OWORD **)(v147 + 688);
        if ( *(_QWORD *)v145 )
          (*(void (__fastcall **)(_BYTE *))v145)(v146);
        v42 = *((_QWORD *)v145 + 1);
        if ( v42 )
          sub_140001660(v146, v42, *((_QWORD *)v145 + 2));
        v4 = v147;
        if ( v40 == -1 )
        {
          v86.m256i_i64[2] = *(_QWORD *)&v136[23];
          *(_OWORD *)v86.m256i_i8 = *(_OWORD *)&v136[7];
          sub_1411B9C50(&v122, &v86);
          v64 = v147;
          *(_BYTE *)(v147 + 679) = 0;
          sub_14029C800(v64 + 696);
          v65 = v147;
          *(_BYTE *)(v147 + 675) = 0;
          sub_14029B810(v65 + 584);
          v66 = v147;
          *(_BYTE *)(v147 + 676) = 0;
          sub_14040DE90(v66 + 536);
          v67 = v147;
          *(_BYTE *)(v147 + 677) = 0;
          if ( *(_BYTE *)(v67 + 673) )
          {
            v146 = *(_BYTE **)(v67 + 512);
            v145 = *(_OWORD **)(v67 + 520);
            if ( *(_QWORD *)v145 )
              (*(void (__fastcall **)(_BYTE *))v145)(v146);
            v68 = *((_QWORD *)v145 + 1);
            v67 = v147;
            if ( v68 )
              sub_140001660(v146, v68, *((_QWORD *)v145 + 2));
          }
          *(_BYTE *)(v67 + 673) = 0;
          if ( *(_BYTE *)(v67 + 674) )
            sub_140407F80(v147 + 288);
          v69 = v147;
          *(_BYTE *)(v147 + 674) = 0;
          sub_14040DE90(v69 + 240);
        }
        else
        {
          v12 = (_OWORD *)(v147 + 680);
          *(_OWORD *)&v135.m256i_u64[2] = *(_OWORD *)&v136[15];
          *(_OWORD *)&v135.m256i_i8[1] = *(_OWORD *)v136;
          v135.m256i_i8[0] = v40;
          *(_BYTE *)(v147 + 679) = 0;
          *(_DWORD *)(v4 + 675) = 0;
          v43 = *(_OWORD *)(v4 + 536);
          v44 = *(_OWORD *)(v4 + 552);
          v99 = *(_OWORD *)(v4 + 568);
          *(_OWORD *)&v98.m256i_u64[2] = v44;
          *(_OWORD *)v98.m256i_i8 = v43;
          v96 = *(_QWORD *)(v4 + 664);
          v95 = *(_OWORD *)(v4 + 648);
          v45 = *(_OWORD *)(v4 + 584);
          v46 = *(_OWORD *)(v4 + 600);
          v47 = *(_OWORD *)(v4 + 616);
          v94 = *(_OWORD *)(v4 + 632);
          v93 = v47;
          v92 = v46;
          v91 = v45;
          v48 = *(_OWORD *)(v4 + 712);
          v49 = *(_OWORD *)(v4 + 728);
          v50 = *(_OWORD *)(v4 + 744);
          *(_OWORD *)v86.m256i_i8 = *(_OWORD *)(v4 + 696);
          *(_OWORD *)&v86.m256i_u64[2] = v48;
          v87 = v49;
          v88 = v50;
          v89 = *(_OWORD *)(v4 + 760);
          v90 = *(_OWORD *)(v4 + 776);
          v97 = v135;
          sub_1418F44E0(v85, (const __m128i *)&v86, 0xF28u);
          sub_1418F44E0((__m128i *)(v4 + 680), v85, 0xF28u);
          v11 = (_BYTE *)(v4 + 4560);
          *(_BYTE *)(v4 + 4560) = 0;
LABEL_39:
          *(_OWORD *)(v4 + 976) = *(_OWORD *)(v4 + 928);
          *(_OWORD *)(v4 + 960) = *(_OWORD *)(v4 + 912);
          *(_OWORD *)(v4 + 944) = *(_OWORD *)(v4 + 896);
          v51 = *(_OWORD *)(v4 + 792);
          v52 = *(_OWORD *)(v4 + 808);
          v53 = *(_OWORD *)(v4 + 824);
          *(_OWORD *)(v4 + 992) = *(_OWORD *)(v4 + 776);
          *(_OWORD *)(v4 + 1008) = v51;
          *(_OWORD *)(v4 + 1024) = v52;
          *(_OWORD *)(v4 + 1040) = v53;
          *(_OWORD *)(v4 + 1056) = *(_OWORD *)(v4 + 840);
          v54 = *(_QWORD *)(v4 + 856);
          *(_QWORD *)(v4 + 1072) = v54;
          v106 = v12[5];
          v105 = v12[4];
          v55 = *v12;
          v56 = v12[1];
          v57 = v12[2];
          v104 = v12[3];
          v103 = v57;
          v102 = v56;
          v101 = v55;
          v58 = *(__m128i *)(v4 + 864);
          v107[9] = *(__m128i *)(v4 + 880);
          v107[8] = v58;
          v59 = *(unsigned __int16 *)(v4 + 1072);
          v145 = v12;
          v146 = v11;
          if ( v59 == 0xFFFF )
          {
            v63 = 0;
          }
          else
          {
            v60 = v59 + 1;
            v61 = *(_QWORD *)(v4 + 1048);
            v62 = *(_QWORD *)(v4 + 1056);
            v54 = v62 - v60;
            if ( v62 <= v60 )
            {
              if ( v62 != v60 )
LABEL_42:
                sub_141938F40(v61, v62, v60, v62, (__int64)&off_141A49C80);
            }
            else if ( *(char *)(v61 + v60) < -64 )
            {
              goto LABEL_42;
            }
            v63 = v60 + v61;
          }
          v90 = v12[5];
          v89 = v12[4];
          v70 = *v12;
          v71 = v12[1];
          v72 = v12[2];
          v88 = v12[3];
          v87 = v72;
          *(_OWORD *)&v86.m256i_u64[2] = v71;
          *(_OWORD *)v86.m256i_i8 = v70;
          v73 = *(_OWORD *)(v4 + 880);
          v91 = *(_OWORD *)(v4 + 864);
          v92 = v73;
          *(_OWORD *)(v4 + 1192) = v73;
          *(_OWORD *)(v4 + 1176) = v91;
          *(_OWORD *)(v4 + 1160) = v90;
          *(_OWORD *)(v4 + 1144) = v89;
          v74 = *(_OWORD *)v86.m256i_i8;
          v75 = *(_OWORD *)&v86.m256i_u64[2];
          v76 = v87;
          *(_OWORD *)(v4 + 1128) = v88;
          *(_OWORD *)(v4 + 1112) = v76;
          *(_OWORD *)(v4 + 1096) = v75;
          *(_OWORD *)(v4 + 1080) = v74;
          *(_QWORD *)(v4 + 1208) = v4 + 944;
          *(_QWORD *)(v4 + 1216) = aRouterCompact;
          *(_QWORD *)(v4 + 1224) = 14;
          *(_QWORD *)(v4 + 1232) = v63;
          *(_QWORD *)(v4 + 1240) = v54;
          *(_WORD *)(v4 + 1728) = 1;
LABEL_58:
          v141 = v4 + 1080;
          sub_140D55D70(v107, v4 + 1080, a3);
          if ( v107[0].m128i_i32[0] == -1 )
          {
            *v146 = 3;
            a1->m128i_i64[0] = -1;
            v41 = 7;
            goto LABEL_62;
          }
          v77 = v146;
          v144 = v146;
          v78 = (__int64)v145;
          v143 = v145;
          sub_140D154E0(v141);
          v140 = v77;
          v139 = v78;
          sub_14029B810(v147 + 992);
          v138 = v77;
          v137 = v78;
          sub_14040DE90(v147 + 944);
          *v77 = 1;
          v108 = v107[0];
          v109 = v107[1];
          v110 = v107[2];
          v111 = v107[3];
          v112 = v107[4];
          v113 = v107[5];
          v114 = v107[6];
          v79 = v107[7];
          sub_140D14500(v78);
          v122 = v108;
          v123 = v109;
          v124 = v110;
          v125 = v111;
          v126 = v112;
          v127 = v113;
          v128 = v114;
          v129 = v79;
          v80 = v147;
          *(_BYTE *)(v147 + 679) = 0;
          *(_BYTE *)(v80 + 677) = 0;
          *(_DWORD *)(v80 + 673) = 0;
          sub_14040DE90(v80 + 240);
        }
        a1[7] = v129;
        a1[6] = v128;
        a1[5] = v127;
        a1[4] = v126;
        v81 = v122;
        v82 = v123;
        v83 = v124;
        a1[3] = v125;
        a1[2] = v83;
        a1[1] = v82;
        *a1 = v81;
        v41 = 1;
        goto LABEL_62;
      }
      a1->m128i_i64[0] = -1;
      v41 = 6;
LABEL_62:
      *(_BYTE *)(v147 + 672) = v41;
      return a1;
    case 4LL:
      v15 = *(_QWORD *)(a2 + 680);
      v16 = *(__int64 (__fastcall ***)())(v4 + 688);
      goto LABEL_16;
    case 5LL:
      v30 = *(_QWORD *)(a2 + 680);
      v31 = *(__int64 (__fastcall ***)())(v4 + 688);
      goto LABEL_24;
    case 6LL:
      v13 = *(__m128i **)(a2 + 680);
      v14 = *(__int64 (__fastcall ***)())(a2 + 688);
      goto LABEL_31;
    case 7LL:
      v11 = (_BYTE *)(a2 + 4560);
      v12 = (_OWORD *)(a2 + 680);
      switch ( *(_BYTE *)(a2 + 4560) )
      {
        case 0:
          goto LABEL_39;
        case 1:
          v142 = a2 + 680;
          sub_1419393E0(&off_141A48BA0);
        case 2:
          v142 = a2 + 680;
          sub_141939400(&off_141A48BA0);
        case 3:
          v146 = (_BYTE *)(a2 + 4560);
          v145 = (_OWORD *)(a2 + 680);
          goto LABEL_58;
      }
  }
}
