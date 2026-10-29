// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406f7e50 | successor of pre-update 0x140d5bec0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.799, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1406F7E50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 (__fastcall **v13)(); // rax
  __int64 v14; // rbx
  __int64 (__fastcall **v15)(); // rax
  _BYTE *v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  char v27; // al
  __int64 v28; // rdi
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 v31; // rdi
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int128 v37; // xmm6
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int64 *v46; // rdx
  __int64 v47; // r12
  __int64 *v48; // rcx
  unsigned __int64 v49; // rbx
  __int64 v50; // r14
  __int64 *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _WORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r15
  __int64 v59; // rsi
  __int64 v60; // r14
  __int64 v61; // r12
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  _DWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r15
  __int64 v76; // rsi
  __int64 v77; // r14
  __int64 v78; // r12
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // r13
  __int64 *v82; // r15
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rcx
  __int128 v86; // xmm0
  unsigned __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  _DWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rbx
  _BYTE *v100; // r14
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v104; // [rsp+50h] [rbp-30h] BYREF
  __int128 v105; // [rsp+58h] [rbp-28h]
  __int128 v106; // [rsp+68h] [rbp-18h]
  __int128 v107; // [rsp+78h] [rbp-8h]
  __int128 v108; // [rsp+88h] [rbp+8h]
  __int128 v109; // [rsp+98h] [rbp+18h]
  __int128 v110; // [rsp+A8h] [rbp+28h]
  __int128 v111; // [rsp+B8h] [rbp+38h]
  __int64 v112; // [rsp+C8h] [rbp+48h]
  __m256i v113; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v114; // [rsp+F0h] [rbp+70h]
  __int128 v115; // [rsp+100h] [rbp+80h]
  __int64 v116; // [rsp+138h] [rbp+B8h]
  __int64 v117; // [rsp+140h] [rbp+C0h]
  __int128 v118; // [rsp+1B0h] [rbp+130h]
  __int64 v119; // [rsp+1C0h] [rbp+140h]
  char v120; // [rsp+2B8h] [rbp+238h]
  __int128 v121; // [rsp+2C0h] [rbp+240h]
  __int128 v122; // [rsp+2D0h] [rbp+250h]
  __m256i v123; // [rsp+2E0h] [rbp+260h]
  __int128 v124; // [rsp+300h] [rbp+280h]
  __int128 v125; // [rsp+310h] [rbp+290h]
  __int128 v126; // [rsp+320h] [rbp+2A0h]
  __int128 v127; // [rsp+330h] [rbp+2B0h]
  __int128 v128; // [rsp+340h] [rbp+2C0h]
  __int128 v129; // [rsp+350h] [rbp+2D0h]
  __int128 v130; // [rsp+360h] [rbp+2E0h]
  __int128 v131; // [rsp+370h] [rbp+2F0h]
  __int64 v132; // [rsp+380h] [rbp+300h]
  __int128 v133; // [rsp+390h] [rbp+310h]
  __int128 v134; // [rsp+3A0h] [rbp+320h]
  __int128 v135; // [rsp+3B0h] [rbp+330h]
  __int128 v136; // [rsp+3C0h] [rbp+340h]
  __int128 v137; // [rsp+3D0h] [rbp+350h]
  __int128 v138; // [rsp+3E0h] [rbp+360h]
  __int64 v139; // [rsp+3F0h] [rbp+370h]
  _BYTE v140[112]; // [rsp+400h] [rbp+380h] BYREF
  __int128 v141; // [rsp+470h] [rbp+3F0h]
  __int64 v142; // [rsp+480h] [rbp+400h] BYREF
  __int128 v143; // [rsp+488h] [rbp+408h]
  __int128 v144; // [rsp+498h] [rbp+418h]
  __int128 v145; // [rsp+4A8h] [rbp+428h]
  __int128 v146; // [rsp+4B8h] [rbp+438h]
  __int128 v147; // [rsp+4C8h] [rbp+448h]
  __int128 v148; // [rsp+4D8h] [rbp+458h]
  _BYTE v149[24]; // [rsp+4E8h] [rbp+468h]
  __int128 v150; // [rsp+500h] [rbp+480h]
  __int128 v151; // [rsp+510h] [rbp+490h]
  __int128 v152; // [rsp+520h] [rbp+4A0h]
  __int128 v153; // [rsp+530h] [rbp+4B0h]
  __int128 v154; // [rsp+540h] [rbp+4C0h]
  __int128 v155; // [rsp+550h] [rbp+4D0h]
  __int64 v156; // [rsp+560h] [rbp+4E0h]
  _QWORD v157[4]; // [rsp+578h] [rbp+4F8h] BYREF
  __int64 v158; // [rsp+598h] [rbp+518h]
  __int128 v159; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v160; // [rsp+5B0h] [rbp+530h]
  __int64 v161; // [rsp+5B8h] [rbp+538h]
  __int64 v162; // [rsp+5C0h] [rbp+540h]
  __int64 v163; // [rsp+5C8h] [rbp+548h]
  __int64 v164; // [rsp+5D0h] [rbp+550h]
  __m256i v165; // [rsp+5D8h] [rbp+558h] BYREF
  __int64 v166; // [rsp+5F8h] [rbp+578h]
  __int64 v167; // [rsp+600h] [rbp+580h]
  __int64 v168; // [rsp+608h] [rbp+588h]
  __int64 v169; // [rsp+610h] [rbp+590h]
  __int64 v170; // [rsp+618h] [rbp+598h]
  _BYTE *v171; // [rsp+620h] [rbp+5A0h]
  __int64 v172; // [rsp+628h] [rbp+5A8h]
  __int64 v173; // [rsp+630h] [rbp+5B0h]
  _BYTE *v174; // [rsp+638h] [rbp+5B8h]
  __int64 v175; // [rsp+640h] [rbp+5C0h]
  __int64 v176; // [rsp+648h] [rbp+5C8h]
  __int64 v177; // [rsp+650h] [rbp+5D0h] BYREF
  _DWORD *v178; // [rsp+658h] [rbp+5D8h]
  __int64 v179; // [rsp+660h] [rbp+5E0h]
  __int64 v180; // [rsp+670h] [rbp+5F0h]
  _BYTE *v181; // [rsp+678h] [rbp+5F8h]
  __int64 v182; // [rsp+680h] [rbp+600h] BYREF
  _WORD *v183; // [rsp+688h] [rbp+608h]
  __int64 v184; // [rsp+690h] [rbp+610h]
  __int64 v185; // [rsp+698h] [rbp+618h] BYREF
  __int64 v186; // [rsp+6A0h] [rbp+620h]
  __int64 v187; // [rsp+6A8h] [rbp+628h]
  __m256i v188; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v189; // [rsp+6D0h] [rbp+650h]
  __int64 *v190; // [rsp+6D8h] [rbp+658h]
  char v191; // [rsp+6E6h] [rbp+666h]
  char v192; // [rsp+6E7h] [rbp+667h]
  __int64 v193; // [rsp+6E8h] [rbp+668h]
  char v194; // [rsp+6F7h] [rbp+677h]
  __int64 v195; // [rsp+6F8h] [rbp+678h]

  v195 = -2;
  v6 = a2;
  v8 = *(unsigned __int8 *)(a2 + 568);
  v193 = a2;
  switch ( v8 )
  {
    case 0LL:
      *(_BYTE *)(a2 + 573) = 0;
      sub_1419234B0(a2 + 288, a2, 224);
      *(_DWORD *)(v6 + 569) = 16777473;
      *(_OWORD *)(v6 + 576) = *(_OWORD *)(v6 + 224);
      *(_QWORD *)(v6 + 512) = v6 + 240;
      nullsub_1(v10, v9);
      v11 = sub_140001650(16, 8);
      if ( !v11 )
        sub_14196B2C1(8, 16);
      v12 = v11;
      *(_QWORD *)v11 = v6 + 240;
      *(_BYTE *)(v11 + 8) = 0;
      *(_QWORD *)(v6 + 592) = v11;
      v13 = &off_141A417C0;
      *(_QWORD *)(v6 + 600) = &off_141A417C0;
      goto LABEL_7;
    case 1LL:
      sub_14196B990(&off_141A3B708);
    case 2LL:
      sub_14196B9B0(&off_141A3B708);
    case 3LL:
      v12 = *(_QWORD *)(a2 + 592);
      v13 = *(__int64 (__fastcall ***)())(v6 + 600);
LABEL_7:
      ((void (__fastcall *)(__m256i *, __int64, __int64))v13[3])(&v113, v12, a3);
      if ( !v113.m256i_i64[0] )
      {
        *(_QWORD *)a1 = -1;
        v27 = 3;
        goto LABEL_95;
      }
      v124 = v114;
      v123 = v113;
      v190 = *(__int64 **)(v193 + 592);
      v189 = *(_QWORD *)(v193 + 600);
      if ( *(_QWORD *)v189 )
        (*(void (__fastcall **)(__int64 *))v189)(v190);
      v18 = *(_QWORD *)(v189 + 8);
      if ( v18 )
        sub_140001660(v190, v18, *(_QWORD *)(v189 + 16));
      v19 = v193;
      *(_BYTE *)(v193 + 571) = 1;
      v20 = *(_OWORD *)&v123.m256i_u64[2];
      v21 = v124;
      *(_OWORD *)(v19 + 520) = *(_OWORD *)v123.m256i_i8;
      *(_OWORD *)(v19 + 536) = v20;
      *(_OWORD *)(v19 + 552) = v21;
      *(_BYTE *)(v19 + 570) = 0;
      sub_1419234B0(&v113, v19 + 288, 224);
      *(_BYTE *)(v19 + 569) = 0;
      v22 = *(_QWORD *)(v19 + 512);
      v118 = *(_OWORD *)(v19 + 576);
      v119 = v22;
      v120 = 0;
      nullsub_1(v24, v23);
      v25 = sub_140001650(496, 8);
      if ( !v25 )
        sub_14196B2C1(8, 496);
      v14 = v25;
      sub_1419234B0(v25, &v113, 496);
      *(_QWORD *)(v19 + 576) = v14;
      v15 = &off_141A40740;
      *(_QWORD *)(v19 + 584) = &off_141A40740;
LABEL_14:
      ((void (__fastcall *)(__m256i *, __int64, __int64))v15[3])(&v113, v14, a3);
      v26 = v113.m256i_i64[0];
      if ( v113.m256i_i64[0] == -3 )
      {
        *(_QWORD *)a1 = -1;
        v27 = 4;
        goto LABEL_95;
      }
      v3 = v113.m256i_i64[1];
      v28 = v113.m256i_i64[3];
      v4 = v113.m256i_i64[2];
      v121 = v114;
      v122 = v115;
      v190 = *(__int64 **)(v193 + 576);
      v189 = *(_QWORD *)(v193 + 584);
      if ( *(_QWORD *)v189 )
        (*(void (__fastcall **)(__int64 *))v189)(v190);
      a2 = *(_QWORD *)(v189 + 8);
      if ( a2 )
        sub_140001660(v190, a2, *(_QWORD *)(v189 + 16));
      if ( v26 != -2 )
      {
        v113.m256i_i64[0] = v26;
        v113.m256i_i64[1] = v3;
        v113.m256i_i64[2] = v4;
        v113.m256i_i64[3] = v28;
        v114 = v121;
        v115 = v122;
        sub_1411DF770(v140, &v113);
        v39 = v193;
        *(_BYTE *)(v193 + 573) = 0;
        sub_1406C3A40(v39 + 520);
        v40 = v193;
        *(_BYTE *)(v193 + 571) = 0;
        if ( *(_BYTE *)(v40 + 569) )
        {
          v190 = *(__int64 **)(v40 + 576);
          v189 = *(_QWORD *)(v40 + 584);
          if ( *(_QWORD *)v189 )
            (*(void (__fastcall **)(__int64 *))v189)(v190);
          v41 = *(_QWORD *)(v189 + 8);
          v40 = v193;
          if ( v41 )
            sub_140001660(v190, v41, *(_QWORD *)(v189 + 16));
        }
        *(_BYTE *)(v40 + 569) = 0;
        if ( *(_BYTE *)(v40 + 570) )
          sub_1406C0020(v193 + 288);
        v42 = v193;
        *(_BYTE *)(v193 + 570) = 0;
        sub_1406C3A40(v42 + 240);
        goto LABEL_37;
      }
      v6 = v193;
      v17 = v193 + 576;
      *(_WORD *)(v193 + 571) = 0;
      *(_BYTE *)(v6 + 573) = 0;
      *(_QWORD *)(v6 + 576) = v3;
      *(_QWORD *)(v6 + 584) = v4;
      *(_QWORD *)(v6 + 592) = v28;
      v29 = *(_OWORD *)(v6 + 536);
      v30 = *(_OWORD *)(v6 + 552);
      *(_OWORD *)(v6 + 600) = *(_OWORD *)(v6 + 520);
      *(_OWORD *)(v6 + 616) = v29;
      *(_OWORD *)(v6 + 632) = v30;
      v16 = (_BYTE *)(v6 + 736);
      *(_BYTE *)(v6 + 736) = 0;
LABEL_22:
      v31 = v6 + 648;
      v32 = *(_OWORD *)(v6 + 600);
      v33 = *(_OWORD *)(v6 + 616);
      *(_OWORD *)(v6 + 680) = *(_OWORD *)(v6 + 632);
      *(_OWORD *)(v6 + 664) = v33;
      *(_OWORD *)(v6 + 648) = v32;
      *(_OWORD *)(v6 + 696) = *(_OWORD *)v17;
      v34 = *(_QWORD *)(v17 + 16);
      *(_QWORD *)(v6 + 712) = v34;
      if ( v34 == 5
        && !(**(_DWORD **)(v6 + 704) ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)(v6 + 704) + 4LL) ^ 0x78) )
      {
        v174 = v16;
        v175 = v17;
        v167 = v3;
        v166 = v4;
        *(_QWORD *)(v6 + 720) = v31;
        *(_BYTE *)(v6 + 728) = 0;
LABEL_41:
        v185 = 0;
        v186 = 8;
        v187 = 0;
        sub_140733D70(&v113, v31);
        v46 = (__int64 *)v113.m256i_i64[1];
        v47 = v113.m256i_i64[1] + (v113.m256i_i64[2] << 8);
        v157[0] = v113.m256i_i64[1];
        v176 = v113.m256i_i64[0];
        v157[2] = v113.m256i_i64[0];
        v157[3] = v47;
        v48 = &v113.m256i_i64[1];
        v49 = (v113.m256i_i64[2] << 8) - 256;
        v50 = v113.m256i_i64[1] + 256;
        v51 = &v177;
        v158 = v113.m256i_i64[1];
        if ( v113.m256i_i64[1] != v47 )
        {
          while ( 1 )
          {
            v157[1] = v46 + 32;
            v52 = *v46;
            if ( *v46 == -1 )
              break;
            v190 = v46 + 32;
            v113.m256i_i64[0] = v52;
            sub_1419234B0(&v113.m256i_u64[1], v46 + 1, 248);
            *(_QWORD *)&v159 = 0;
            v160 = 0;
            nullsub_1(v54, v53);
            v55 = (_WORD *)sub_140001650(2, 1);
            if ( !v55 )
              sub_14196B2DB(1, 2);
            *v55 = 25705;
            v182 = 2;
            v183 = v55;
            v184 = 2;
            v58 = v117;
            if ( v117 < 0 )
            {
              v62 = 0;
LABEL_68:
              v192 = 1;
              sub_14196B2DB(v62, v58);
            }
            v168 = a1;
            if ( v117 )
            {
              v59 = v50;
              v60 = v47;
              v61 = v116;
              nullsub_1(v57, v56);
              v62 = 1;
              v63 = sub_140001650(v58, 1);
              if ( !v63 )
                goto LABEL_68;
              v64 = v63;
              sub_1419234B0(v63, v61, v58);
              v47 = v60;
              v50 = v59;
              a1 = v168;
              v51 = &v177;
            }
            else
            {
              v64 = 1;
            }
            v188.m256i_i8[0] = 3;
            v188.m256i_i64[1] = v58;
            v188.m256i_i64[2] = v64;
            v188.m256i_i64[3] = v58;
            v192 = 0;
            sub_140A68320(v51, &v159, &v182, &v188);
            if ( (_BYTE)v177 != 0xFF )
              sub_1406C0ED0(v51);
            nullsub_1(v66, v65);
            v67 = sub_140001650(6, 1);
            if ( !v67 )
              sub_14196B2DB(1, 6);
            *(_WORD *)(v67 + 4) = 29795;
            *(_DWORD *)v67 = 1701470831;
            v182 = 6;
            v183 = (_WORD *)v67;
            v184 = 6;
            nullsub_1(v69, v68);
            v189 = sub_140001650(5, 1);
            if ( !v189 )
              sub_14196B2DB(1, 5);
            v70 = (_DWORD *)v189;
            *(_BYTE *)(v189 + 4) = 108;
            *v70 = 1701080941;
            v188.m256i_i8[0] = 3;
            v188.m256i_i64[1] = 5;
            v188.m256i_i64[2] = (__int64)v70;
            v188.m256i_i64[3] = 5;
            sub_140A68320(v51, &v159, &v182, &v188);
            if ( (_BYTE)v177 != 0xFF )
              sub_1406C0ED0(v51);
            nullsub_1(v72, v71);
            v73 = (_QWORD *)sub_140001650(8, 1);
            if ( !v73 )
              sub_14196B2DB(1, 8);
            *v73 = 0x79625F64656E776FLL;
            v182 = 8;
            v183 = v73;
            v184 = 8;
            v75 = *((_QWORD *)&v114 + 1);
            if ( v114 < 0 )
            {
              v79 = 0;
LABEL_70:
              v191 = 1;
              sub_14196B2DB(v79, v75);
            }
            if ( *((_QWORD *)&v114 + 1) )
            {
              v76 = v50;
              v77 = v47;
              v78 = v114;
              nullsub_1(0x79625F64656E776FLL, v74);
              v79 = 1;
              v80 = sub_140001650(v75, 1);
              if ( !v80 )
                goto LABEL_70;
              v81 = v80;
              sub_1419234B0(v80, v78, v75);
              v47 = v77;
              v50 = v76;
              a1 = v168;
              v51 = &v177;
            }
            else
            {
              v81 = 1;
            }
            v188.m256i_i8[0] = 3;
            v188.m256i_i64[1] = v75;
            v188.m256i_i64[2] = v81;
            v188.m256i_i64[3] = v75;
            v191 = 0;
            sub_140A68320(v51, &v159, &v182, &v188);
            if ( (_BYTE)v177 != 0xFF )
              sub_1406C0ED0(v51);
            v82 = v51;
            v165.m256i_i64[3] = v160;
            *(_OWORD *)&v165.m256i_u64[1] = v159;
            v165.m256i_i8[0] = 5;
            v83 = v187;
            if ( v187 == v185 )
              sub_1419397B0(&v185);
            v84 = v186;
            v85 = 32 * v83;
            v86 = *(_OWORD *)v165.m256i_i8;
            *(_OWORD *)(v186 + v85 + 16) = *(_OWORD *)&v165.m256i_u64[2];
            *(_OWORD *)(v84 + v85) = v86;
            v187 = v83 + 1;
            sub_140292FD0(&v113);
            v49 -= 256LL;
            v50 += 256;
            v46 = v190;
            v48 = &v113.m256i_i64[1];
            v51 = v82;
            if ( v190 == (__int64 *)v47 )
              goto LABEL_74;
          }
          if ( (__int64 *)v47 != v46 + 32 )
          {
            v87 = v49 >> 8;
            do
            {
              sub_1401B16C0(v50);
              v50 += 256;
              --v87;
            }
            while ( v87 );
          }
        }
LABEL_74:
        v88 = v176;
        if ( v176 )
          sub_140001660(v158, v176 << 8, 8);
        v165.m256i_i64[0] = 0;
        v165.m256i_i64[2] = 0;
        nullsub_1(v48, v88);
        v89 = sub_140001650(6, 1);
        if ( !v89 )
          sub_14196B2DB(1, 6);
        *(_WORD *)(v89 + 4) = 29795;
        *(_DWORD *)v89 = 1701470831;
        v177 = 6;
        v178 = (_DWORD *)v89;
        v179 = 6;
        nullsub_1(v91, v90);
        v92 = (__int64 *)sub_140001650(4, 1);
        v190 = v92;
        if ( !v92 )
          sub_14196B2DB(1, 4);
        *(_DWORD *)v92 = 1953720684;
        v113.m256i_i8[0] = 3;
        v113.m256i_i64[1] = 4;
        v113.m256i_i64[2] = (__int64)v92;
        v113.m256i_i64[3] = 4;
        sub_140A68320(&v188, &v165, &v177, &v113);
        if ( v188.m256i_i8[0] != -1 )
          sub_1406C0ED0(&v188);
        nullsub_1(v94, v93);
        v95 = (_DWORD *)sub_140001650(4, 1);
        if ( !v95 )
          sub_14196B2DB(1, 4);
        *v95 = 1635017060;
        v177 = 4;
        v178 = v95;
        v179 = 4;
        v194 = 1;
        sub_1407B3D00(&v113, &v185);
        if ( v113.m256i_i8[0] == -1 )
        {
          v157[0] = v113.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_6,
            43,
            (unsigned int)v157,
            (unsigned int)&off_141A3B8C8,
            (__int64)&off_141A39C48);
        }
        v188 = v113;
        v194 = 0;
        sub_140A68320(&v113, &v165, &v177, &v188);
        if ( v113.m256i_i8[0] != -1 )
          sub_1406C0ED0(&v113);
        *(_OWORD *)((char *)&v188.m256i_u32[1] + 3) = *(_OWORD *)v165.m256i_i8;
        *(__int64 *)((char *)&v188.m256i_i64[2] + 7) = v165.m256i_i64[2];
        v113.m256i_i8[0] = 5;
        *(_OWORD *)&v113.m256i_i8[1] = *(_OWORD *)v188.m256i_i8;
        *(_OWORD *)&v113.m256i_u64[2] = *(_OWORD *)&v165.m256i_u64[1];
        sub_140CA7480(&v104, &v113);
        v97 = v186;
        v189 = v187;
        v190 = nullptr;
        v176 = v186;
        while ( (__int64 *)v189 != v190 )
        {
          v190 = (__int64 *)((char *)v190 + 1);
          v98 = v97 + 32;
          sub_1401AB4D0(v97, v96);
          v97 = v98;
        }
        if ( v185 )
          sub_140001660(v186, 32 * v185, 8);
        v36 = v104;
        v125 = v105;
        v126 = v106;
        v127 = v107;
        v128 = v108;
        v129 = v109;
        v130 = v110;
        v131 = v111;
        v132 = v112;
        v99 = v193;
        *(_BYTE *)(v193 + 728) = 1;
        v4 = v166;
        v3 = v167;
        v100 = v174;
        if ( v36 != -1 )
        {
          v142 = v36;
          v143 = v125;
          v144 = v126;
          v145 = v127;
          v146 = v128;
          v147 = v129;
          v148 = v130;
          *(_OWORD *)v149 = v131;
          *(_QWORD *)&v149[16] = v132;
          v101 = *(_QWORD *)(v99 + 696);
          if ( v101 )
            sub_140001660(*(_QWORD *)(v99 + 704), v101, 1);
          v102 = v99 + 648;
          v173 = v4;
          v172 = v3;
          v171 = v100;
          v17 = v175;
          v170 = v175;
          sub_1406C3A40(v102);
          v156 = *(_QWORD *)v149;
          v155 = v148;
          v154 = v147;
          v153 = v146;
          v152 = v145;
          v151 = v144;
          v150 = v143;
          v37 = *(_OWORD *)&v149[8];
          *v100 = 1;
          goto LABEL_27;
        }
        *v174 = 3;
      }
      else
      {
        v164 = v4;
        v163 = v3;
        v181 = v16;
        v180 = v17;
        LOWORD(a2) = 404;
        sub_1407360F0((unsigned int)&v142, a2, (unsigned int)"unknown ide path", 16, (__int64)aProxyUpstream, 14);
        v35 = *(_QWORD *)(v193 + 696);
        if ( v35 )
          sub_140001660(*(_QWORD *)(v193 + 704), v35, 1);
        v173 = v4;
        v172 = v3;
        v171 = v16;
        v170 = v17;
        sub_1406C3A40(v6 + 648);
        v36 = v142;
        v150 = v143;
        v151 = v144;
        v152 = v145;
        v153 = v146;
        v154 = v147;
        v155 = v148;
        v156 = *(_QWORD *)v149;
        v37 = *(_OWORD *)&v149[8];
        *v16 = 1;
        if ( v36 != -1 )
        {
LABEL_27:
          v139 = v156;
          v138 = v155;
          v137 = v154;
          v136 = v153;
          v135 = v152;
          v134 = v151;
          v133 = v150;
          v162 = v4;
          v161 = v3;
          sub_1406B92E0(v17);
          *(_QWORD *)v140 = v36;
          *(_OWORD *)&v140[8] = v133;
          *(_OWORD *)&v140[24] = v134;
          *(_OWORD *)&v140[40] = v135;
          *(_OWORD *)&v140[56] = v136;
          *(_OWORD *)&v140[72] = v137;
          *(_OWORD *)&v140[88] = v138;
          *(_QWORD *)&v140[104] = v139;
          v141 = v37;
          v38 = v193;
          *(_BYTE *)(v193 + 573) = 0;
          *(_BYTE *)(v38 + 571) = 0;
          *(_WORD *)(v38 + 569) = 0;
          sub_1406C3A40(v38 + 240);
LABEL_37:
          *(_OWORD *)(a1 + 112) = v141;
          *(_OWORD *)(a1 + 96) = *(_OWORD *)&v140[96];
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v140[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v140[64];
          v43 = *(_OWORD *)v140;
          v44 = *(_OWORD *)&v140[16];
          v45 = *(_OWORD *)&v140[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v140[48];
          *(_OWORD *)(a1 + 32) = v45;
          *(_OWORD *)(a1 + 16) = v44;
          *(_OWORD *)a1 = v43;
          v27 = 1;
          goto LABEL_95;
        }
      }
      *(_QWORD *)a1 = -1;
      v27 = 5;
LABEL_95:
      *(_BYTE *)(v193 + 568) = v27;
      return a1;
    case 4LL:
      v14 = *(_QWORD *)(a2 + 576);
      v15 = *(__int64 (__fastcall ***)())(a2 + 584);
      goto LABEL_14;
    case 5LL:
      v16 = (_BYTE *)(a2 + 736);
      v17 = a2 + 576;
      switch ( *(_BYTE *)(a2 + 736) )
      {
        case 0:
          goto LABEL_22;
        case 1:
          v169 = a2 + 576;
          sub_14196B990(&off_141A39A18);
        case 2:
          JUMPOUT(0x1406F8FF0LL);
        case 3:
          if ( *(_BYTE *)(a2 + 728) )
          {
            if ( *(_BYTE *)(a2 + 728) == 1 )
            {
              v181 = (_BYTE *)(a2 + 736);
              v180 = a2 + 576;
              sub_14196B990(&off_141A39C60);
            }
            v181 = (_BYTE *)(a2 + 736);
            v180 = a2 + 576;
            sub_14196B9B0(&off_141A39C60);
          }
          v174 = (_BYTE *)(a2 + 736);
          v175 = a2 + 576;
          v31 = *(_QWORD *)(a2 + 720);
          goto LABEL_41;
      }
  }
}
