// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d5bec0 | name sub_140D5BEC0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D5BEC0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r15
  const __m128i *v6; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 (__fastcall **v12)(); // rax
  __m128i *v13; // rbx
  __int64 (__fastcall **v14)(); // rax
  __m128i *v15; // r13
  const __m128i *v16; // rbx
  __int64 v17; // rdx
  const __m128i *v18; // r14
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __int64 v21; // rax
  __int64 v22; // rcx
  __m128i *v23; // rax
  __int64 v24; // rbx
  char v25; // al
  __int64 v26; // rdi
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __int64 v29; // rdi
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int128 v35; // xmm6
  const __m128i *v36; // rax
  const __m128i *v37; // rax
  const __m128i *v38; // rdi
  __int64 v39; // rdx
  const __m128i *v40; // rax
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  unsigned __int128 v44; // kr10_16
  __int64 v45; // r14
  __m128i *v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rcx
  _WORD *v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // r13
  __int64 v52; // r12
  const __m128i *v53; // r14
  __int64 v54; // r15
  __m128i *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rax
  unsigned __int64 v63; // r13
  __m128i *v64; // rsi
  __int64 v65; // rbx
  __int64 v66; // r12
  const __m128i *v67; // r14
  __int64 v68; // r15
  __m128i *v69; // rax
  __int64 v70; // rdi
  unsigned __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rcx
  __int128 v74; // xmm0
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rcx
  _DWORD *v79; // rax
  __int64 v80; // rcx
  _DWORD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdi
  const __m128i *v84; // rbx
  __m128i *v85; // r14
  __int64 v86; // rdx
  __int64 *v87; // rcx
  __int64 v89; // [rsp+50h] [rbp-30h] BYREF
  __int128 v90; // [rsp+58h] [rbp-28h]
  __int128 v91; // [rsp+68h] [rbp-18h]
  __int128 v92; // [rsp+78h] [rbp-8h]
  __int128 v93; // [rsp+88h] [rbp+8h]
  __int128 v94; // [rsp+98h] [rbp+18h]
  __int128 v95; // [rsp+A8h] [rbp+28h]
  __int128 v96; // [rsp+B8h] [rbp+38h]
  __int64 v97; // [rsp+C8h] [rbp+48h]
  __m256i v98; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v99; // [rsp+F0h] [rbp+70h]
  __int128 v100; // [rsp+100h] [rbp+80h]
  const __m128i *v101; // [rsp+138h] [rbp+B8h]
  __int64 v102; // [rsp+140h] [rbp+C0h]
  __m128i v103; // [rsp+1B0h] [rbp+130h]
  __int64 v104; // [rsp+1C0h] [rbp+140h]
  char v105; // [rsp+2B8h] [rbp+238h]
  __m128i v106; // [rsp+2C0h] [rbp+240h]
  __int128 v107; // [rsp+2D0h] [rbp+250h]
  __m256i v108; // [rsp+2E0h] [rbp+260h]
  __m128i v109; // [rsp+300h] [rbp+280h]
  __int128 v110; // [rsp+310h] [rbp+290h]
  __int128 v111; // [rsp+320h] [rbp+2A0h]
  __int128 v112; // [rsp+330h] [rbp+2B0h]
  __int128 v113; // [rsp+340h] [rbp+2C0h]
  __int128 v114; // [rsp+350h] [rbp+2D0h]
  __int128 v115; // [rsp+360h] [rbp+2E0h]
  __int128 v116; // [rsp+370h] [rbp+2F0h]
  __int64 v117; // [rsp+380h] [rbp+300h]
  __int128 v118; // [rsp+390h] [rbp+310h]
  __int128 v119; // [rsp+3A0h] [rbp+320h]
  __int128 v120; // [rsp+3B0h] [rbp+330h]
  __int128 v121; // [rsp+3C0h] [rbp+340h]
  __int128 v122; // [rsp+3D0h] [rbp+350h]
  __int128 v123; // [rsp+3E0h] [rbp+360h]
  __int64 v124; // [rsp+3F0h] [rbp+370h]
  _BYTE v125[112]; // [rsp+400h] [rbp+380h] BYREF
  __int128 v126; // [rsp+470h] [rbp+3F0h]
  __int64 v127; // [rsp+480h] [rbp+400h] BYREF
  __int128 v128; // [rsp+488h] [rbp+408h]
  __int128 v129; // [rsp+498h] [rbp+418h]
  __int128 v130; // [rsp+4A8h] [rbp+428h]
  __int128 v131; // [rsp+4B8h] [rbp+438h]
  __int128 v132; // [rsp+4C8h] [rbp+448h]
  __int128 v133; // [rsp+4D8h] [rbp+458h]
  _BYTE v134[24]; // [rsp+4E8h] [rbp+468h]
  __int128 v135; // [rsp+500h] [rbp+480h]
  __int128 v136; // [rsp+510h] [rbp+490h]
  __int128 v137; // [rsp+520h] [rbp+4A0h]
  __int128 v138; // [rsp+530h] [rbp+4B0h]
  __int128 v139; // [rsp+540h] [rbp+4C0h]
  __int128 v140; // [rsp+550h] [rbp+4D0h]
  __int64 v141; // [rsp+560h] [rbp+4E0h]
  __int64 v142; // [rsp+578h] [rbp+4F8h]
  __int64 v143; // [rsp+580h] [rbp+500h] BYREF
  __int64 v144; // [rsp+588h] [rbp+508h]
  __int64 v145; // [rsp+590h] [rbp+510h]
  __int64 v146; // [rsp+598h] [rbp+518h]
  __int128 v147; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v148; // [rsp+5B0h] [rbp+530h]
  __int64 v149; // [rsp+5B8h] [rbp+538h]
  __int64 v150; // [rsp+5C0h] [rbp+540h]
  __int64 v151; // [rsp+5C8h] [rbp+548h]
  __int64 v152; // [rsp+5D0h] [rbp+550h]
  __int64 v153; // [rsp+5D8h] [rbp+558h]
  __int64 v154; // [rsp+5E0h] [rbp+560h]
  __int64 v155; // [rsp+5E8h] [rbp+568h]
  __int64 v156; // [rsp+5F0h] [rbp+570h]
  __m256i v157; // [rsp+5F8h] [rbp+578h] BYREF
  const __m128i *v158; // [rsp+618h] [rbp+598h]
  const __m128i *v159; // [rsp+620h] [rbp+5A0h]
  __m128i *v160; // [rsp+628h] [rbp+5A8h]
  __int64 v161; // [rsp+630h] [rbp+5B0h]
  __int64 v162; // [rsp+638h] [rbp+5B8h]
  __m128i *v163; // [rsp+640h] [rbp+5C0h]
  const __m128i *v164; // [rsp+648h] [rbp+5C8h]
  __int64 v165; // [rsp+650h] [rbp+5D0h] BYREF
  _DWORD *v166; // [rsp+658h] [rbp+5D8h]
  __int64 v167; // [rsp+660h] [rbp+5E0h]
  const __m128i *v168; // [rsp+670h] [rbp+5F0h]
  const __m128i *v169; // [rsp+678h] [rbp+5F8h]
  __int64 v170; // [rsp+680h] [rbp+600h] BYREF
  _WORD *v171; // [rsp+688h] [rbp+608h]
  __int64 v172; // [rsp+690h] [rbp+610h]
  __int64 v173; // [rsp+698h] [rbp+618h] BYREF
  __int64 v174; // [rsp+6A0h] [rbp+620h]
  unsigned __int64 v175; // [rsp+6A8h] [rbp+628h]
  __m256i v176; // [rsp+6B0h] [rbp+630h] BYREF
  unsigned __int64 v177; // [rsp+6D8h] [rbp+658h]
  unsigned __int64 v178; // [rsp+6E0h] [rbp+660h]
  char v179; // [rsp+6EEh] [rbp+66Eh]
  char v180; // [rsp+6EFh] [rbp+66Fh]
  _DWORD *v181; // [rsp+6F0h] [rbp+670h]
  const __m128i *v182; // [rsp+6F8h] [rbp+678h]
  char v183; // [rsp+707h] [rbp+687h]
  __int64 v184; // [rsp+708h] [rbp+688h]

  v184 = -2;
  v6 = a2;
  v8 = a2[35].m128i_u8[8];
  v182 = a2;
  switch ( v8 )
  {
    case 0LL:
      a2[35].m128i_i8[13] = 0;
      sub_1418F44E0((__m128i *)&a2[18], a2, 0xE0u);
      *(__int32 *)((char *)&v6[35].m128i_i32[2] + 1) = 16777473;
      v6[36] = v6[14];
      v6[32].m128i_i64[0] = (__int64)v6[15].m128i_i64;
      nullsub_1(v9);
      v10 = sub_140001650(16, 8);
      if ( !v10 )
        sub_141938D11(8, 16);
      v11 = v10;
      *(_QWORD *)v10 = v6 + 15;
      *(_BYTE *)(v10 + 8) = 0;
      v6[37].m128i_i64[0] = v10;
      v12 = &off_141A4EF70;
      v6[37].m128i_i64[1] = (__int64)&off_141A4EF70;
      goto LABEL_7;
    case 1LL:
      sub_1419393E0(&off_141A496D0);
    case 2LL:
      sub_141939400(&off_141A496D0);
    case 3LL:
      v11 = a2[37].m128i_i64[0];
      v12 = (__int64 (__fastcall **)())v6[37].m128i_i64[1];
LABEL_7:
      ((void (__fastcall *)(__m256i *, __int64, __int64))v12[3])(&v98, v11, a3);
      if ( !v98.m256i_i64[0] )
      {
        *(_QWORD *)a1 = -1;
        v25 = 3;
        goto LABEL_96;
      }
      v109 = v99;
      v108 = v98;
      v181 = (_DWORD *)v182[37].m128i_i64[0];
      v178 = v182[37].m128i_u64[1];
      if ( *(_QWORD *)v178 )
        (*(void (__fastcall **)(_DWORD *))v178)(v181);
      v17 = *(_QWORD *)(v178 + 8);
      if ( v17 )
        sub_140001660(v181, v17, *(_QWORD *)(v178 + 16));
      v18 = v182;
      v182[35].m128i_i8[11] = 1;
      v19 = *(__m128i *)&v108.m256i_u64[2];
      v20 = v109;
      *(const __m128i *)((char *)v18 + 520) = *(const __m128i *)v108.m256i_i8;
      *(__m128i *)((char *)v18 + 536) = v19;
      *(__m128i *)((char *)v18 + 552) = v20;
      v18[35].m128i_i8[10] = 0;
      sub_1418F44E0((__m128i *)&v98, v18 + 18, 0xE0u);
      v18[35].m128i_i8[9] = 0;
      v21 = v18[32].m128i_i64[0];
      v103 = v18[36];
      v104 = v21;
      v105 = 0;
      nullsub_1(v22);
      v23 = (__m128i *)sub_140001650(496, 8);
      if ( !v23 )
        sub_141938D11(8, 496);
      v13 = v23;
      sub_1418F44E0(v23, (const __m128i *)&v98, 0x1F0u);
      v18[36].m128i_i64[0] = (__int64)v13;
      v14 = &off_141A04880;
      v18[36].m128i_i64[1] = (__int64)&off_141A04880;
LABEL_14:
      ((void (__fastcall *)(__m256i *, __m128i *, __int64))v14[3])(&v98, v13, a3);
      v24 = v98.m256i_i64[0];
      if ( v98.m256i_i64[0] == -3 )
      {
        *(_QWORD *)a1 = -1;
        v25 = 4;
        goto LABEL_96;
      }
      v3 = v98.m256i_i64[1];
      v26 = v98.m256i_i64[3];
      v4 = v98.m256i_i64[2];
      v106 = v99;
      v107 = v100;
      v181 = (_DWORD *)v182[36].m128i_i64[0];
      v178 = v182[36].m128i_u64[1];
      if ( *(_QWORD *)v178 )
        (*(void (__fastcall **)(_DWORD *))v178)(v181);
      a2 = *(const __m128i **)(v178 + 8);
      if ( a2 )
        sub_140001660(v181, a2, *(_QWORD *)(v178 + 16));
      if ( v24 != -2 )
      {
        v98.m256i_i64[0] = v24;
        v98.m256i_i64[1] = v3;
        v98.m256i_i64[2] = v4;
        v98.m256i_i64[3] = v26;
        v99 = v106;
        v100 = v107;
        sub_1411B9CF0(v125, &v98);
        v37 = v182;
        v182[35].m128i_i8[13] = 0;
        sub_14040DE90(&v37[32].m128i_u64[1]);
        v38 = v182;
        v182[35].m128i_i8[11] = 0;
        if ( v38[35].m128i_i8[9] )
        {
          v181 = (_DWORD *)v38[36].m128i_i64[0];
          v178 = v38[36].m128i_u64[1];
          if ( *(_QWORD *)v178 )
            (*(void (__fastcall **)(_DWORD *))v178)(v181);
          v39 = *(_QWORD *)(v178 + 8);
          v38 = v182;
          if ( v39 )
            sub_140001660(v181, v39, *(_QWORD *)(v178 + 16));
        }
        v38[35].m128i_i8[9] = 0;
        if ( v38[35].m128i_i8[10] )
          sub_140407F80(&v182[18]);
        v40 = v182;
        v182[35].m128i_i8[10] = 0;
        sub_14040DE90(&v40[15]);
        goto LABEL_37;
      }
      v6 = v182;
      v16 = v182 + 36;
      *(__int16 *)((char *)&v182[35].m128i_i16[5] + 1) = 0;
      v6[35].m128i_i8[13] = 0;
      v6[36].m128i_i64[0] = v3;
      v6[36].m128i_i64[1] = v4;
      v6[37].m128i_i64[0] = v26;
      v27 = *(const __m128i *)((char *)v6 + 536);
      v28 = *(const __m128i *)((char *)v6 + 552);
      *(const __m128i *)((char *)v6 + 600) = *(const __m128i *)((char *)v6 + 520);
      *(__m128i *)((char *)v6 + 616) = v27;
      *(__m128i *)((char *)v6 + 632) = v28;
      v15 = (__m128i *)&v6[46];
      v6[46].m128i_i8[0] = 0;
LABEL_22:
      v29 = (__int64)&v6[40].m128i_i64[1];
      v30 = *(const __m128i *)((char *)v6 + 600);
      v31 = *(const __m128i *)((char *)v6 + 616);
      *(const __m128i *)((char *)v6 + 680) = *(const __m128i *)((char *)v6 + 632);
      *(__m128i *)((char *)v6 + 664) = v31;
      *(__m128i *)((char *)v6 + 648) = v30;
      *(const __m128i *)((char *)v6 + 696) = *v16;
      v32 = v16[1].m128i_i64[0];
      v6[44].m128i_i64[1] = v32;
      if ( v32 == 5
        && !(*(_DWORD *)v6[44].m128i_i64[0] ^ 0x65646F63 | *(unsigned __int8 *)(v6[44].m128i_i64[0] + 4) ^ 0x78) )
      {
        v163 = v15;
        v164 = v16;
        v154 = v3;
        v153 = v4;
        v6[45].m128i_i64[0] = v29;
        v6[45].m128i_i8[8] = 0;
LABEL_41:
        v173 = 0;
        v174 = 8;
        v175 = 0;
        sub_140DAC840(&v98, v29);
        v44 = *(_OWORD *)v98.m256i_i8;
        v45 = v98.m256i_i64[1] + (v98.m256i_i64[2] << 8);
        v143 = v98.m256i_i64[1];
        v144 = v98.m256i_i64[1];
        v145 = v98.m256i_i64[0];
        v146 = v45;
        v46 = (__m128i *)&v98.m256i_u64[1];
        v156 = v98.m256i_i64[1];
        if ( v98.m256i_i64[1] == v45 )
        {
LABEL_66:
          v177 = v44;
          v47 = v45;
        }
        else
        {
          while ( 1 )
          {
            v47 = *((_QWORD *)&v44 + 1) + 256LL;
            v144 = *((_QWORD *)&v44 + 1) + 256LL;
            if ( **((_QWORD **)&v44 + 1) == -1 )
              break;
            v98.m256i_i64[0] = **((_QWORD **)&v44 + 1);
            sub_1418F44E0(v46, (const __m128i *)(*((_QWORD *)&v44 + 1) + 8LL), 0xF8u);
            *(_QWORD *)&v147 = 0;
            v148 = 0;
            nullsub_1(v48);
            v49 = (_WORD *)sub_140001650(2, 1);
            if ( !v49 )
              sub_141938D2B(1, 2);
            *v49 = 25705;
            v170 = 2;
            v171 = v49;
            v172 = 2;
            v51 = v102;
            if ( v102 < 0 )
            {
              v54 = 0;
LABEL_68:
              v180 = 1;
              sub_141938D2B(v54, v51);
            }
            v177 = v44;
            v155 = a1;
            if ( v102 )
            {
              v52 = v45;
              v53 = v101;
              nullsub_1(v50);
              v54 = 1;
              v55 = (__m128i *)sub_140001650(v51, 1);
              if ( !v55 )
                goto LABEL_68;
              v56 = (__int64)v55;
              sub_1418F44E0(v55, v53, v51);
              v45 = v52;
              v47 = *((_QWORD *)&v44 + 1) + 256LL;
              a1 = v155;
            }
            else
            {
              v56 = 1;
            }
            v176.m256i_i8[0] = 3;
            v176.m256i_i64[1] = v51;
            v176.m256i_i64[2] = v56;
            v176.m256i_i64[3] = v51;
            v180 = 0;
            sub_140E72AA0(&v165, &v147, &v170, &v176);
            if ( (_BYTE)v165 != 0xFF )
              sub_140409B40(&v165);
            nullsub_1(v57);
            v58 = sub_140001650(6, 1);
            if ( !v58 )
              sub_141938D2B(1, 6);
            *(_WORD *)(v58 + 4) = 29795;
            *(_DWORD *)v58 = 1701470831;
            v170 = 6;
            v171 = (_WORD *)v58;
            v172 = 6;
            nullsub_1(v59);
            v60 = sub_140001650(5, 1);
            v181 = (_DWORD *)v60;
            if ( !v60 )
              sub_141938D2B(1, 5);
            *(_BYTE *)(v60 + 4) = 108;
            *(_DWORD *)v60 = 1701080941;
            v176.m256i_i8[0] = 3;
            v176.m256i_i64[1] = 5;
            v176.m256i_i64[2] = v60;
            v176.m256i_i64[3] = 5;
            sub_140E72AA0(&v165, &v147, &v170, &v176);
            if ( (_BYTE)v165 != 0xFF )
              sub_140409B40(&v165);
            nullsub_1(v61);
            v62 = (_QWORD *)sub_140001650(8, 1);
            if ( !v62 )
              sub_141938D2B(1, 8);
            *v62 = 0x79625F64656E776FLL;
            v170 = 8;
            v171 = v62;
            v172 = 8;
            v63 = v99.m128i_u64[1];
            if ( v99.m128i_i64[1] < 0 )
            {
              v68 = 0;
LABEL_70:
              v179 = 1;
              sub_141938D2B(v68, v63);
            }
            if ( v99.m128i_i64[1] )
            {
              v64 = v46;
              v65 = v47;
              v66 = v45;
              v67 = (const __m128i *)v99.m128i_i64[0];
              nullsub_1(0x79625F64656E776FLL);
              v68 = 1;
              v69 = (__m128i *)sub_140001650(v63, 1);
              if ( !v69 )
                goto LABEL_70;
              v70 = (__int64)v69;
              sub_1418F44E0(v69, v67, v63);
              v45 = v66;
              v47 = v65;
              v46 = v64;
              a1 = v155;
            }
            else
            {
              v70 = 1;
            }
            v176.m256i_i8[0] = 3;
            v176.m256i_i64[1] = v63;
            v176.m256i_i64[2] = v70;
            v176.m256i_i64[3] = v63;
            v179 = 0;
            sub_140E72AA0(&v165, &v147, &v170, &v176);
            if ( (_BYTE)v165 != 0xFF )
              sub_140409B40(&v165);
            v157.m256i_i64[3] = v148;
            *(_OWORD *)&v157.m256i_u64[1] = v147;
            v157.m256i_i8[0] = 5;
            v71 = v175;
            if ( v175 == v173 )
              sub_14190F570(&v173);
            v72 = v174;
            v73 = 32 * v71;
            v74 = *(_OWORD *)v157.m256i_i8;
            *(_OWORD *)(v174 + v73 + 16) = *(_OWORD *)&v157.m256i_u64[2];
            *(_OWORD *)(v72 + v73) = v74;
            v175 = v71 + 1;
            sub_14038CFC0(&v98);
            v44 = __PAIR128__(v47, v177);
            if ( v47 == v45 )
              goto LABEL_66;
          }
          v177 = v44;
        }
        v178 = (unsigned __int64)(v45 - v47) >> 8;
        v181 = nullptr;
        v142 = v47;
        v75 = v47;
        while ( (_DWORD *)v178 != v181 )
        {
          v181 = (_DWORD *)((char *)v181 + 1);
          v76 = v75 + 256;
          sub_14038CFC0(v75);
          v75 = v76;
        }
        if ( v177 )
          sub_140001660(v156, v177 << 8, 8);
        v157.m256i_i64[0] = 0;
        v157.m256i_i64[2] = 0;
        nullsub_1(v75);
        v77 = sub_140001650(6, 1);
        if ( !v77 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v77 + 4) = 29795;
        *(_DWORD *)v77 = 1701470831;
        v165 = 6;
        v166 = (_DWORD *)v77;
        v167 = 6;
        nullsub_1(v78);
        v79 = (_DWORD *)sub_140001650(4, 1);
        v181 = v79;
        if ( !v79 )
          sub_141938D2B(1, 4);
        *v79 = 1953720684;
        v98.m256i_i8[0] = 3;
        v98.m256i_i64[1] = 4;
        v98.m256i_i64[2] = (__int64)v79;
        v98.m256i_i64[3] = 4;
        sub_140E72AA0(&v176, &v157, &v165, &v98);
        if ( v176.m256i_i8[0] != -1 )
          sub_140409B40(&v176);
        nullsub_1(v80);
        v81 = (_DWORD *)sub_140001650(4, 1);
        if ( !v81 )
          sub_141938D2B(1, 4);
        *v81 = 1635017060;
        v165 = 4;
        v166 = v81;
        v167 = 4;
        v183 = 1;
        sub_140C0FE40(&v98, &v173);
        if ( v98.m256i_i8[0] == -1 )
        {
          v143 = v98.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_6,
            43,
            (unsigned int)&v143,
            (unsigned int)&off_141A498A8,
            (__int64)&off_141A48238);
        }
        v176 = v98;
        v183 = 0;
        sub_140E72AA0(&v98, &v157, &v165, &v176);
        if ( v98.m256i_i8[0] != -1 )
          sub_140409B40(&v98);
        *(_OWORD *)((char *)&v176.m256i_u32[1] + 3) = *(_OWORD *)v157.m256i_i8;
        *(__int64 *)((char *)&v176.m256i_i64[2] + 7) = v157.m256i_i64[2];
        v98.m256i_i8[0] = 5;
        *(_OWORD *)&v98.m256i_i8[1] = *(_OWORD *)v176.m256i_i8;
        *(_OWORD *)&v98.m256i_u64[2] = *(_OWORD *)&v157.m256i_u64[1];
        sub_140DC30A0(&v89, &v98);
        v82 = v174;
        v178 = v175;
        v181 = nullptr;
        v177 = v174;
        while ( (_DWORD *)v178 != v181 )
        {
          v181 = (_DWORD *)((char *)v181 + 1);
          v83 = v82 + 32;
          sub_1403880E0(v82);
          v82 = v83;
        }
        if ( v173 )
          sub_140001660(v174, 32 * v173, 8);
        v34 = v89;
        v110 = v90;
        v111 = v91;
        v112 = v92;
        v113 = v93;
        v114 = v94;
        v115 = v95;
        v116 = v96;
        v117 = v97;
        v84 = v182;
        v182[45].m128i_i8[8] = 1;
        v4 = v153;
        v3 = v154;
        v85 = v163;
        if ( v34 != -1 )
        {
          v127 = v34;
          v128 = v110;
          v129 = v111;
          v130 = v112;
          v131 = v113;
          v132 = v114;
          v133 = v115;
          *(_OWORD *)v134 = v116;
          *(_QWORD *)&v134[16] = v117;
          v86 = v84[43].m128i_i64[1];
          if ( v86 )
            sub_140001660(v84[44].m128i_i64[0], v86, 1);
          v87 = &v84[40].m128i_i64[1];
          v162 = v4;
          v161 = v3;
          v160 = v85;
          v16 = v164;
          v159 = v164;
          sub_14040DE90(v87);
          v141 = *(_QWORD *)v134;
          v140 = v133;
          v139 = v132;
          v138 = v131;
          v137 = v130;
          v136 = v129;
          v135 = v128;
          v35 = *(_OWORD *)&v134[8];
          v85->m128i_i8[0] = 1;
          goto LABEL_27;
        }
        v163->m128i_i8[0] = 3;
      }
      else
      {
        v152 = v4;
        v151 = v3;
        v169 = v15;
        v168 = v16;
        LOWORD(a2) = 404;
        sub_140DAFCE0((unsigned int)&v127, (_DWORD)a2, (unsigned int)aUnknownIdePath, 16, (__int64)aProxyUpstream, 14);
        v33 = v182[43].m128i_i64[1];
        if ( v33 )
          sub_140001660(v182[44].m128i_i64[0], v33, 1);
        v162 = v4;
        v161 = v3;
        v160 = v15;
        v159 = v16;
        sub_14040DE90(&v6[40].m128i_u64[1]);
        v34 = v127;
        v135 = v128;
        v136 = v129;
        v137 = v130;
        v138 = v131;
        v139 = v132;
        v140 = v133;
        v141 = *(_QWORD *)v134;
        v35 = *(_OWORD *)&v134[8];
        v15->m128i_i8[0] = 1;
        if ( v34 != -1 )
        {
LABEL_27:
          v124 = v141;
          v123 = v140;
          v122 = v139;
          v121 = v138;
          v120 = v137;
          v119 = v136;
          v118 = v135;
          v150 = v4;
          v149 = v3;
          sub_140D12650(v16);
          *(_QWORD *)v125 = v34;
          *(_OWORD *)&v125[8] = v118;
          *(_OWORD *)&v125[24] = v119;
          *(_OWORD *)&v125[40] = v120;
          *(_OWORD *)&v125[56] = v121;
          *(_OWORD *)&v125[72] = v122;
          *(_OWORD *)&v125[88] = v123;
          *(_QWORD *)&v125[104] = v124;
          v126 = v35;
          v36 = v182;
          v182[35].m128i_i8[13] = 0;
          v36[35].m128i_i8[11] = 0;
          *(__int16 *)((char *)&v36[35].m128i_i16[4] + 1) = 0;
          sub_14040DE90(&v36[15]);
LABEL_37:
          *(_OWORD *)(a1 + 112) = v126;
          *(_OWORD *)(a1 + 96) = *(_OWORD *)&v125[96];
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v125[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v125[64];
          v41 = *(_OWORD *)v125;
          v42 = *(_OWORD *)&v125[16];
          v43 = *(_OWORD *)&v125[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v125[48];
          *(_OWORD *)(a1 + 32) = v43;
          *(_OWORD *)(a1 + 16) = v42;
          *(_OWORD *)a1 = v41;
          v25 = 1;
          goto LABEL_96;
        }
      }
      *(_QWORD *)a1 = -1;
      v25 = 5;
LABEL_96:
      v182[35].m128i_i8[8] = v25;
      return a1;
    case 4LL:
      v13 = (__m128i *)a2[36].m128i_i64[0];
      v14 = (__int64 (__fastcall **)())a2[36].m128i_i64[1];
      goto LABEL_14;
    case 5LL:
      v15 = (__m128i *)&a2[46];
      v16 = a2 + 36;
      switch ( a2[46].m128i_i8[0] )
      {
        case 0:
          goto LABEL_22;
        case 1:
          v158 = a2 + 36;
          sub_1419393E0(&off_141A47FC8);
        case 2:
          JUMPOUT(0x140D5D0A0LL);
        case 3:
          if ( a2[45].m128i_i8[8] )
          {
            if ( a2[45].m128i_i8[8] == 1 )
            {
              v169 = a2 + 46;
              v168 = a2 + 36;
              sub_1419393E0(&off_141A48250);
            }
            v169 = a2 + 46;
            v168 = a2 + 36;
            sub_141939400(&off_141A48250);
          }
          v163 = (__m128i *)&a2[46];
          v164 = a2 + 36;
          v29 = a2[45].m128i_i64[0];
          goto LABEL_41;
      }
  }
}
