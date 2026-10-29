// win 1.2.7 | module src/core/relay/proxy_access.rs | ea 0x140921d10 | name sub_140921D10
// win 1.2.7 | module src/core/relay/proxy_access.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140921D10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 (__fastcall **v10)(); // rax
  __m128i *v11; // rbx
  __int64 (__fastcall **v12)(); // rax
  char *v13; // r14
  const __m128i *v14; // r15
  char *v15; // rdi
  __int64 v16; // rbx
  unsigned int v17; // r14d
  __int64 v18; // r12
  void (__fastcall **v19)(__int64); // rsi
  __int16 v20; // dx
  __int64 v21; // rbx
  __int16 v22; // r14
  void (__fastcall *v23)(__int64); // rdx
  __int64 v24; // r15
  __int64 v25; // rcx
  __m128i *v26; // rax
  void (__fastcall *v27)(__int64); // rdx
  void (__fastcall **v28)(__int64); // rdx
  const __m128i *v29; // rbx
  const __m128i *v30; // rax
  _BYTE *v31; // r15
  char v32; // al
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r9
  const char *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  _DWORD *v39; // rax
  __int64 v40; // rcx
  __m128i *v41; // rax
  __int64 v42; // rcx
  _DWORD *v43; // rax
  __int64 v44; // rcx
  __m128i *v45; // rax
  void (__fastcall **v46)(__int64); // rsi
  _BYTE *v47; // rdi
  char v48; // al
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  void (__fastcall *v51)(__int64); // rdx
  char v52; // al
  __m128i v53; // xmm0
  __int64 v54; // rdx
  void (__fastcall **v55)(__int64); // rsi
  __int64 v56; // rcx
  __int64 v57; // rax
  __int32 v58; // ecx
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  __int64 v61; // rdi
  __int64 v62; // rax
  __m128i v63; // xmm1
  unsigned __int64 v64; // rdx
  __m128i v65; // xmm6
  __int64 v66; // rcx
  const __m128i *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rcx
  _DWORD *v70; // rax
  __int64 v71; // rcx
  __m128i *v72; // rax
  __int64 v73; // rcx
  _DWORD *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  _DWORD *v78; // rax
  __int64 v79; // rcx
  __m128i *v80; // rax
  __m128i v81; // xmm0
  __m128i v82; // xmm1
  __m128i v83; // xmm1
  __int64 v84; // rdx
  __int64 v85; // rdi
  __m128i v86; // xmm0
  __m128i v87; // xmm1
  __m128i v88; // xmm0
  __m128i v89; // xmm1
  __int64 v90; // rax
  __m128i v91; // xmm1
  __int128 v92; // xmm2
  __int128 v93; // xmm3
  __m128i v95[15]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v96[15]; // [rsp+140h] [rbp+C0h] BYREF
  _BYTE v97[24]; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v98; // [rsp+248h] [rbp+1C8h]
  __int128 v99; // [rsp+250h] [rbp+1D0h]
  __int128 v100; // [rsp+260h] [rbp+1E0h]
  __int128 v101; // [rsp+270h] [rbp+1F0h]
  __int128 v102; // [rsp+280h] [rbp+200h]
  __int128 v103; // [rsp+290h] [rbp+210h]
  __int128 v104; // [rsp+2A0h] [rbp+220h]
  __m128i v105; // [rsp+2B0h] [rbp+230h]
  __m128i v106; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v107; // [rsp+2D0h] [rbp+250h]
  __int128 v108; // [rsp+2E0h] [rbp+260h]
  __int128 v109; // [rsp+2F0h] [rbp+270h]
  __m128i v110; // [rsp+300h] [rbp+280h] BYREF
  __int64 v111; // [rsp+310h] [rbp+290h]
  __m128i v112; // [rsp+320h] [rbp+2A0h] BYREF
  __m128i v113; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v114; // [rsp+340h] [rbp+2C0h]
  __int128 v115; // [rsp+350h] [rbp+2D0h]
  __int128 v116; // [rsp+360h] [rbp+2E0h]
  __m128i v117; // [rsp+370h] [rbp+2F0h]
  __int64 v118; // [rsp+380h] [rbp+300h]
  __m128i v119; // [rsp+390h] [rbp+310h] BYREF
  __m128i v120; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v121; // [rsp+3B0h] [rbp+330h]
  __int128 v122; // [rsp+3C0h] [rbp+340h]
  __int128 v123; // [rsp+3D0h] [rbp+350h]
  __m128i v124; // [rsp+3E0h] [rbp+360h]
  __int64 v125; // [rsp+3F0h] [rbp+370h]
  __m128i v126; // [rsp+400h] [rbp+380h]
  __m128i v127; // [rsp+410h] [rbp+390h] BYREF
  __int128 v128; // [rsp+420h] [rbp+3A0h]
  __int128 v129; // [rsp+430h] [rbp+3B0h]
  __int128 v130; // [rsp+440h] [rbp+3C0h]
  __int128 v131; // [rsp+450h] [rbp+3D0h]
  __int128 v132; // [rsp+460h] [rbp+3E0h]
  __m128i v133; // [rsp+470h] [rbp+3F0h]
  __m256i v134; // [rsp+480h] [rbp+400h] BYREF
  __int128 v135; // [rsp+4A0h] [rbp+420h]
  __int128 v136; // [rsp+4B0h] [rbp+430h]
  __int128 v137; // [rsp+4C0h] [rbp+440h]
  __int128 v138; // [rsp+4D0h] [rbp+450h]
  __int128 v139; // [rsp+4E0h] [rbp+460h]
  __int128 v140; // [rsp+4F0h] [rbp+470h]
  _QWORD v141[3]; // [rsp+500h] [rbp+480h] BYREF
  __int128 v142; // [rsp+518h] [rbp+498h] BYREF
  __int64 v143; // [rsp+528h] [rbp+4A8h]
  __int128 v144; // [rsp+530h] [rbp+4B0h] BYREF
  __int128 v145; // [rsp+540h] [rbp+4C0h] BYREF
  const char *v146; // [rsp+550h] [rbp+4D0h]
  __int64 v147; // [rsp+558h] [rbp+4D8h]
  __int16 v148; // [rsp+560h] [rbp+4E0h]
  char v149; // [rsp+568h] [rbp+4E8h]
  _BYTE v150[23]; // [rsp+569h] [rbp+4E9h] BYREF
  __int64 v151; // [rsp+580h] [rbp+500h]
  _BYTE v152[96]; // [rsp+590h] [rbp+510h] BYREF
  __int128 v153; // [rsp+5F0h] [rbp+570h]
  __m128i v154; // [rsp+600h] [rbp+580h] BYREF
  __m256i v155; // [rsp+610h] [rbp+590h] BYREF
  __int128 v156; // [rsp+630h] [rbp+5B0h]
  __int128 v157; // [rsp+640h] [rbp+5C0h]
  __int128 v158; // [rsp+650h] [rbp+5D0h]
  __int128 v159; // [rsp+660h] [rbp+5E0h]
  __int128 v160; // [rsp+670h] [rbp+5F0h]
  __m128i v161[8]; // [rsp+680h] [rbp+600h] BYREF
  char v162; // [rsp+700h] [rbp+680h]
  __int128 v163; // [rsp+710h] [rbp+690h] BYREF
  __m128i si128; // [rsp+720h] [rbp+6A0h]
  const char *v165; // [rsp+730h] [rbp+6B0h]
  __int64 v166; // [rsp+738h] [rbp+6B8h]
  __int64 v167; // [rsp+740h] [rbp+6C0h]
  const __m128i *v168; // [rsp+748h] [rbp+6C8h]
  _BYTE v169[24]; // [rsp+758h] [rbp+6D8h] BYREF
  __m256i v170; // [rsp+770h] [rbp+6F0h] BYREF
  __int64 v171; // [rsp+798h] [rbp+718h] BYREF
  _DWORD *v172; // [rsp+7A0h] [rbp+720h]
  __int64 v173; // [rsp+7A8h] [rbp+728h]
  __int64 v174; // [rsp+7B0h] [rbp+730h]
  __int64 v175; // [rsp+7B8h] [rbp+738h]
  void (__fastcall **v176)(__int64); // [rsp+7C0h] [rbp+740h]
  const __m128i *v177; // [rsp+7C8h] [rbp+748h]
  __int64 v178; // [rsp+7D0h] [rbp+750h]
  __int64 v179; // [rsp+7D8h] [rbp+758h]
  char v180; // [rsp+7E6h] [rbp+766h]
  char v181; // [rsp+7E7h] [rbp+767h]
  const __m128i *v182; // [rsp+7E8h] [rbp+768h]
  void (__fastcall **v183)(__int64); // [rsp+7F0h] [rbp+770h]
  char v184; // [rsp+7FFh] [rbp+77Fh]
  __int64 v185; // [rsp+800h] [rbp+780h]
  __int64 v186; // [rsp+808h] [rbp+788h]

  v186 = -2;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a2 + 520);
  v185 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a2 + 522) = 257;
      sub_1418F44E0((__m128i *)(a2 + 280), (const __m128i *)a2, 0xE0u);
      *(_BYTE *)(v4 + 521) = 1;
      *(__m128i *)(v4 + 528) = _mm_loadu_si128((const __m128i *)(v4 + 224));
      nullsub_1(v7);
      v8 = sub_140001650(16, 8);
      if ( !v8 )
        sub_141938D11(8, 16);
      v9 = v8;
      *(_QWORD *)v8 = v4 + 240;
      *(_BYTE *)(v8 + 8) = 0;
      *(_QWORD *)(v4 + 544) = v8;
      v10 = &off_141A4EF50;
      *(_QWORD *)(v4 + 552) = &off_141A4EF50;
      goto LABEL_8;
    case 1LL:
      sub_1419393E0(&off_141A235D8);
    case 2LL:
      sub_141939400(&off_141A235D8);
    case 3LL:
      v9 = *(_QWORD *)(a2 + 544);
      v10 = *(__int64 (__fastcall ***)())(a2 + 552);
LABEL_8:
      v21 = ((__int64 (__fastcall *)(__int64, __int64))v10[3])(v9, v3);
      if ( v21 )
      {
        v22 = v20;
        v182 = *(const __m128i **)(v185 + 544);
        v183 = *(void (__fastcall ***)(__int64))(v185 + 552);
        if ( *v183 )
          (*v183)((__int64)v182);
        v23 = v183[1];
        if ( v23 )
          sub_140001660(v182, v23, v183[2]);
        v24 = v185;
        *(_QWORD *)(v185 + 504) = v21;
        *(_WORD *)(v24 + 512) = v22;
        *(_BYTE *)(v24 + 522) = 0;
        sub_1418F44E0((__m128i *)&v155, (const __m128i *)(v24 + 280), 0xE0u);
        *(_BYTE *)(v24 + 521) = 0;
        v161[7] = _mm_loadu_si128((const __m128i *)(v24 + 528));
        v162 = 0;
        nullsub_1(v25);
        v26 = (__m128i *)sub_140001650(248, 8);
        if ( !v26 )
          sub_141938D11(8, 248);
        v11 = v26;
        sub_1418F44E0(v26, (const __m128i *)&v155, 0xF8u);
        *(_QWORD *)(v24 + 528) = v11;
        v12 = &off_141A4E5D0;
        *(_QWORD *)(v24 + 536) = &off_141A4E5D0;
LABEL_15:
        ((void (__fastcall *)(__m256i *, __m128i *, __int64))v12[3])(&v155, v11, v3);
        if ( v155.m256i_i32[0] != -1 )
        {
          sub_1418F44E0(v96, (const __m128i *)&v155, 0xF0u);
          v182 = *(const __m128i **)(v185 + 528);
          v183 = *(void (__fastcall ***)(__int64))(v185 + 536);
          if ( *v183 )
            (*v183)((__int64)v182);
          v178 = v3;
          v174 = v5;
          v27 = v183[1];
          if ( v27 )
            sub_140001660(v182, v27, v183[2]);
          sub_1418F44E0(v95, v96, 0xF0u);
          v4 = v185;
          *(_BYTE *)(v185 + 523) = 0;
          v155.m256i_i64[2] = *(_QWORD *)(v4 + 272);
          *(__m128i *)v155.m256i_i8 = _mm_loadu_si128((const __m128i *)(v4 + 256));
          v18 = sub_1402935B0(&v155);
          v19 = v28;
          v14 = (const __m128i *)(v4 + 528);
          v16 = *(_QWORD *)(v4 + 504);
          v17 = *(unsigned __int16 *)(v4 + 512);
          sub_1418F44E0((__m128i *)(v4 + 528), v96, 0xF0u);
          *(_QWORD *)(v4 + 768) = v16;
          *(_WORD *)(v4 + 776) = v17;
          *(_QWORD *)(v4 + 784) = v18;
          *(_QWORD *)(v4 + 792) = v19;
          v15 = (char *)(v4 + 1056);
          *(_BYTE *)(v4 + 1056) = 0;
LABEL_21:
          *(_QWORD *)(v4 + 800) = v16;
          *(_WORD *)(v4 + 808) = v17;
          v29 = (const __m128i *)(v4 + 816);
          sub_1418F44E0((__m128i *)(v4 + 816), v14, 0xF0u);
          *(_DWORD *)(v4 + 1057) = 65793;
          v30 = v14;
          v31 = (_BYTE *)(v4 + 912);
          v182 = v30;
          v177 = v30;
          v176 = v19;
          v179 = v18;
          v175 = v18;
          v32 = sub_140DAB650(v4 + 816, v4 + 912, v17);
          v5 = v174;
          v13 = v15;
          v183 = v19;
          if ( !v32 )
          {
            *(_QWORD *)v169 = 0;
            *(_QWORD *)&v169[16] = 0;
            nullsub_1(v33);
            v37 = sub_140001650(5, 1);
            if ( !v37 )
              sub_141938D2B(1, 5);
            *(_BYTE *)(v37 + 4) = 114;
            *(_DWORD *)v37 = 1869771365;
            v171 = 5;
            v172 = (_DWORD *)v37;
            v173 = 5;
            v170.m256i_i64[0] = 0;
            v170.m256i_i64[2] = 0;
            nullsub_1(v38);
            v39 = (_DWORD *)sub_140001650(4, 1);
            if ( !v39 )
              sub_141938D2B(1, 4);
            *v39 = 1701869940;
            *(_QWORD *)&v163 = 4;
            *((_QWORD *)&v163 + 1) = v39;
            si128.m128i_i64[0] = 4;
            nullsub_1(v40);
            v41 = (__m128i *)sub_140001650(16, 1);
            v178 = (__int64)v41;
            if ( !v41 )
              sub_141938D2B(1, 16);
            *v41 = _mm_loadu_si128((const __m128i *)&xmmword_141A2321F);
            v155.m256i_i8[0] = 3;
            v155.m256i_i64[1] = 16;
            v155.m256i_i64[2] = (__int64)v41;
            v155.m256i_i64[3] = 16;
            sub_140E72AA0(&v134, &v170, &v163, &v155);
            if ( v134.m256i_i8[0] != -1 )
              sub_14002F9D0(&v134);
            nullsub_1(v42);
            v43 = (_DWORD *)sub_140001650(7, 1);
            if ( !v43 )
              sub_141938D2B(1, 7);
            *(_DWORD *)((char *)v43 + 3) = 1701273971;
            *v43 = 1936942445;
            *(_QWORD *)&v163 = 7;
            *((_QWORD *)&v163 + 1) = v43;
            si128.m128i_i64[0] = 7;
            nullsub_1(v44);
            v45 = (__m128i *)sub_140001650(54, 1);
            v178 = (__int64)v45;
            if ( !v45 )
              sub_141938D2B(1, 54);
            qmemcpy(&v45[1], "y accepts direct local client requests", 38);
            *v45 = _mm_loadu_si128((const __m128i *)&xmmword_141A2322F);
            v155.m256i_i8[0] = 3;
            v155.m256i_i64[1] = 54;
            v155.m256i_i64[2] = (__int64)v45;
            v155.m256i_i64[3] = 54;
            sub_140E72AA0(&v134, &v170, &v163, &v155);
            if ( v134.m256i_i8[0] != -1 )
              sub_14002F9D0(&v134);
            *(__m128i *)&v97[8] = _mm_loadu_si128((const __m128i *)&v170);
            v98 = v170.m256i_i64[2];
            v97[0] = 5;
            v181 = 0;
            sub_140E72AA0(&v144, v169, &v171, v97);
            if ( (_BYTE)v144 != 0xFF )
              sub_14002F9D0(&v144);
            *(_OWORD *)((char *)&v134.m256i_u32[1] + 3) = *(_OWORD *)v169;
            *(__int64 *)((char *)&v134.m256i_i64[2] + 7) = *(_QWORD *)&v169[16];
            *(_OWORD *)&v155.m256i_u64[2] = *(_OWORD *)&v169[8];
            *(__m128i *)&v155.m256i_i8[1] = _mm_loadu_si128((const __m128i *)&v134);
            v155.m256i_i8[0] = 5;
            v177 = v182;
            v46 = v183;
            v176 = v183;
            v175 = v179;
            sub_140DC30A0(v152, &v155);
            WORD4(v153) = 403;
            v47 = (_BYTE *)v185;
            if ( !*(_BYTE *)(v185 + 1057) )
              goto LABEL_91;
            goto LABEL_48;
          }
          v4 = v185;
          if ( *(_BYTE *)(v185 + 1000) != 1 )
            goto LABEL_66;
          v34 = *(_QWORD *)(v185 + 976);
          if ( !v34 && !*v31 )
            goto LABEL_66;
          v35 = *(unsigned __int16 *)(v185 + 992);
          v36 = *(const char **)(v185 + 968);
          if ( v35 == 0xFFFF )
          {
            if ( !v34 )
              v36 = aClientHandshak;
            v34 += v34 == 0;
          }
          else
          {
            if ( !(_WORD)v35 )
            {
              if ( v36 )
                goto LABEL_66;
              goto LABEL_60;
            }
            if ( v34 > v35 )
            {
              if ( v36[v35] > -65 )
              {
                v34 = *(unsigned __int16 *)(v185 + 992);
                goto LABEL_61;
              }
LABEL_60:
              v177 = v182;
              v176 = v183;
              v175 = v179;
              sub_141938F40((_DWORD)v36, v34, 0, v35, (__int64)&off_141A237E8);
            }
            if ( v34 != v35 || v36 == nullptr )
              goto LABEL_60;
          }
LABEL_61:
          if ( v34 == 23 )
          {
            v53 = _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v36), (__m128i)xmmword_1419D3790),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v36 + 7)), (__m128i)xmmword_141A22420));
          }
          else
          {
            if ( v34 != 16 )
              goto LABEL_66;
            v53 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v36), (__m128i)xmmword_141A22430);
          }
          if ( _mm_movemask_epi8(v53) == 0xFFFF )
          {
            *(_WORD *)(v185 + 1057) = 0;
            sub_1418F44E0((__m128i *)(v4 + 1064), v29, 0xF0u);
            *(_QWORD *)(v4 + 1304) = v179;
            *(_QWORD *)(v4 + 1312) = v183;
            *(_BYTE *)(v4 + 1352) = 0;
            v3 = v178;
LABEL_46:
            v174 = v4 + 1064;
            sub_1409203D0(&v155, v4 + 1064, v3);
            if ( v155.m256i_i32[0] == -1 )
            {
              v52 = 3;
              goto LABEL_71;
            }
            v154 = v161[0];
            v153 = v160;
            *(_OWORD *)&v152[80] = v159;
            *(_OWORD *)&v152[64] = v158;
            v49 = _mm_loadu_si128((const __m128i *)&v155);
            v50 = _mm_loadu_si128((const __m128i *)&v155.m256i_u64[2]);
            *(_OWORD *)&v152[48] = v157;
            *(_OWORD *)&v152[32] = v156;
            *(__m128i *)&v152[16] = v50;
            *(__m128i *)v152 = v49;
            v177 = v182;
            v46 = v183;
            v176 = v183;
            v175 = v179;
            sub_1408E7CD0(v174);
            v47 = (_BYTE *)v185;
            if ( !*(_BYTE *)(v185 + 1057) )
            {
LABEL_91:
              v47[1057] = 0;
              if ( v47[1058] )
              {
                sub_140407F80(v47 + 816);
                v183 = *(void (__fastcall ***)(__int64))(v185 + 1040);
                v179 = *(_QWORD *)(v185 + 1048);
                if ( *(_QWORD *)v179 )
                  (*(void (__fastcall **)(_QWORD))v179)(v183);
                v84 = *(_QWORD *)(v179 + 8);
                v47 = (_BYTE *)v185;
                if ( v84 )
                  sub_140001660(v183, v84, *(_QWORD *)(v179 + 16));
              }
              v47[1058] = 0;
              v67 = v182;
              if ( v47[1059] && !_InterlockedDecrement64(*(volatile signed __int64 **)(v185 + 800)) )
              {
                v168 = v67;
                sub_141502CE0(v185 + 800);
              }
              v66 = v185;
              *(_BYTE *)(v185 + 1059) = 0;
              v65 = _mm_load_si128(&v154);
LABEL_100:
              v85 = *(_QWORD *)v152;
              v119 = *(__m128i *)&v152[8];
              v120 = *(__m128i *)&v152[24];
              v121 = *(_OWORD *)&v152[40];
              v122 = *(_OWORD *)&v152[56];
              v123 = *(_OWORD *)&v152[72];
              v124 = _mm_loadu_si128((const __m128i *)&v152[88]);
              v125 = *((_QWORD *)&v153 + 1);
              *v13 = 1;
              if ( v85 != -1 )
              {
                v118 = v125;
                v117 = v124;
                v116 = v123;
                v86 = _mm_load_si128(&v119);
                v87 = _mm_load_si128(&v120);
                v115 = v122;
                v114 = v121;
                v113 = v87;
                v112 = v86;
                sub_1408E9690(v67);
                v111 = v118;
                v110 = v117;
                v109 = v116;
                v88 = _mm_load_si128(&v112);
                v89 = _mm_load_si128(&v113);
                v108 = v115;
                v107 = v114;
                v106 = v89;
                v105 = v88;
                v90 = v185;
                *(_WORD *)(v185 + 521) = 0;
                if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v90 + 240)) )
                  sub_141502CE0(v185 + 240);
                *(_QWORD *)v5 = v85;
                v91 = _mm_load_si128(&v106);
                v92 = v107;
                v93 = v108;
                *(__m128i *)(v5 + 8) = v105;
                *(__m128i *)(v5 + 24) = v91;
                *(_OWORD *)(v5 + 40) = v92;
                *(_OWORD *)(v5 + 56) = v93;
                *(_OWORD *)(v5 + 72) = v109;
                *(__m128i *)(v5 + 88) = _mm_load_si128(&v110);
                *(_QWORD *)(v5 + 104) = v111;
                *(__m128i *)(v5 + 112) = v65;
                v48 = 1;
                goto LABEL_104;
              }
LABEL_105:
              *(_QWORD *)v5 = -1;
              v48 = 5;
              goto LABEL_106;
            }
LABEL_48:
            v183 = v46;
            if ( *v46 )
              (*v46)(v179);
            v51 = v183[1];
            v47 = (_BYTE *)v185;
            if ( v51 )
              sub_140001660(v179, v51, v183[2]);
            goto LABEL_91;
          }
LABEL_66:
          *(_BYTE *)(v185 + 1059) = 0;
          v54 = *(_QWORD *)(v4 + 800);
          v177 = v182;
          v55 = v183;
          v176 = v183;
          v175 = v179;
          sub_141517150(&v155, v54);
          v57 = v155.m256i_i64[0];
          if ( v155.m256i_i64[0] )
          {
            v4 = v185;
            *(_BYTE *)(v185 + 1060) = 1;
            v58 = v155.m256i_i32[2];
            *(_QWORD *)(v4 + 1360) = v57;
            *(_DWORD *)(v4 + 1368) = v58;
            *(_WORD *)(v4 + 1057) = 0;
            sub_1418F44E0((__m128i *)(v4 + 1064), v29, 0xF0u);
            *(_QWORD *)(v4 + 1304) = v179;
            *(_QWORD *)(v4 + 1312) = v55;
            *(_BYTE *)(v4 + 1352) = 0;
            v3 = v178;
LABEL_68:
            v174 = v4 + 1064;
            sub_1409203D0(&v155, v4 + 1064, v3);
            if ( v155.m256i_i32[0] != -1 )
            {
              v133 = v161[0];
              v132 = v160;
              v131 = v159;
              v130 = v158;
              v59 = _mm_loadu_si128((const __m128i *)&v155);
              v60 = _mm_loadu_si128((const __m128i *)&v155.m256i_u64[2]);
              v129 = v157;
              v128 = v156;
              v127 = v60;
              v126 = v59;
              sub_1408E7CD0(v174);
              v61 = v185;
              *(_BYTE *)(v185 + 1060) = 0;
              v62 = sub_140DAB4A0(
                      v133.m128i_i64[0],
                      v133.m128i_i64[1],
                      *(_QWORD *)(v61 + 1360),
                      *(unsigned int *)(v61 + 1368));
              v153 = v132;
              *(_OWORD *)&v152[80] = v131;
              *(_OWORD *)&v152[64] = v130;
              v63 = _mm_load_si128(&v127);
              *(_OWORD *)&v152[48] = v129;
              *(_OWORD *)&v152[32] = v128;
              *(__m128i *)&v152[16] = v63;
              *(__m128i *)v152 = v126;
              *(_DWORD *)(v61 + 1057) = 0;
              v65 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v62, (__m128i)v64);
              v66 = v61;
              v67 = v182;
              goto LABEL_100;
            }
            v52 = 4;
LABEL_71:
            *v13 = v52;
            v66 = v185;
            goto LABEL_105;
          }
          *(_QWORD *)&v142 = 0;
          v143 = 0;
          nullsub_1(v56);
          v68 = sub_140001650(5, 1);
          if ( !v68 )
            sub_141938D2B(1, 5);
          *(_BYTE *)(v68 + 4) = 114;
          *(_DWORD *)v68 = 1869771365;
          v141[0] = 5;
          v141[1] = v68;
          v141[2] = 5;
          *(_QWORD *)v169 = 0;
          *(_QWORD *)&v169[16] = 0;
          nullsub_1(v69);
          v70 = (_DWORD *)sub_140001650(4, 1);
          if ( !v70 )
            sub_141938D2B(1, 4);
          *v70 = 1701869940;
          v171 = 4;
          v172 = v70;
          v173 = 4;
          nullsub_1(v71);
          v72 = (__m128i *)sub_140001650(16, 1);
          v178 = (__int64)v72;
          if ( !v72 )
            sub_141938D2B(1, 16);
          *v72 = _mm_loadu_si128((const __m128i *)&xmmword_141A23289);
          v155.m256i_i8[0] = 3;
          v155.m256i_i64[1] = 16;
          v155.m256i_i64[2] = (__int64)v72;
          v155.m256i_i64[3] = 16;
          sub_140E72AA0(&v134, v169, &v171, &v155);
          if ( v134.m256i_i8[0] != -1 )
            sub_14002F9D0(&v134);
          nullsub_1(v73);
          v74 = (_DWORD *)sub_140001650(4, 1);
          if ( !v74 )
            sub_141938D2B(1, 4);
          *v74 = 1701080931;
          v171 = 4;
          v172 = v74;
          v173 = 4;
          nullsub_1(v75);
          v76 = sub_140001650(23, 1);
          v178 = v76;
          if ( !v76 )
            sub_141938D2B(1, 23);
          *(__m128i *)v76 = _mm_loadu_si128(&xmmword_141A2329D);
          *(_QWORD *)(v76 + 15) = 0x6465646565637865LL;
          v155.m256i_i8[0] = 3;
          v155.m256i_i64[1] = 23;
          v155.m256i_i64[2] = v76;
          v155.m256i_i64[3] = 23;
          sub_140E72AA0(&v134, v169, &v171, &v155);
          if ( v134.m256i_i8[0] != -1 )
            sub_14002F9D0(&v134);
          nullsub_1(v77);
          v78 = (_DWORD *)sub_140001650(7, 1);
          if ( !v78 )
            sub_141938D2B(1, 7);
          *(_DWORD *)((char *)v78 + 3) = 1701273971;
          *v78 = 1936942445;
          v171 = 7;
          v172 = v78;
          v173 = 7;
          nullsub_1(v79);
          v80 = (__m128i *)sub_140001650(87, 1);
          v178 = (__int64)v80;
          if ( !v80 )
            sub_141938D2B(1, 87);
          qmemcpy(&v80[1], "at its concurrent request limit; retry after an active request finishes", 71);
          *v80 = _mm_loadu_si128((const __m128i *)&xmmword_141A232B4);
          v155.m256i_i8[0] = 3;
          v155.m256i_i64[1] = 87;
          v155.m256i_i64[2] = (__int64)v80;
          v155.m256i_i64[3] = 87;
          sub_140E72AA0(&v134, v169, &v171, &v155);
          if ( v134.m256i_i8[0] != -1 )
            sub_14002F9D0(&v134);
          *(__m128i *)&v97[8] = _mm_loadu_si128((const __m128i *)v169);
          v98 = *(_QWORD *)&v169[16];
          v97[0] = 5;
          v180 = 0;
          sub_140E72AA0(&v163, &v142, v141, v97);
          if ( (_BYTE)v163 != 0xFF )
            sub_14002F9D0(&v163);
          *(__int64 *)((char *)&v170.m256i_i64[2] + 7) = v143;
          *(_OWORD *)((char *)&v170.m256i_u32[1] + 3) = v142;
          *(_OWORD *)v150 = *(_OWORD *)v170.m256i_i8;
          *(_QWORD *)&v150[15] = *((_QWORD *)&v142 + 1);
          v151 = v143;
          v148 = 503;
          v145 = xmmword_141A23278;
          v144 = xmmword_141A23268;
          v146 = a1_1;
          v147 = 1;
          v149 = 5;
          v165 = a1_1;
          v166 = 1;
          si128 = _mm_load_si128((const __m128i *)&v145);
          v163 = xmmword_141A23268;
          v170.m256i_i8[0] = 5;
          *(__int64 *)((char *)v170.m256i_i64 + 1) = *(_QWORD *)v150;
          *(__int32 *)((char *)&v170.m256i_i32[2] + 1) = *(_DWORD *)&v150[8];
          *(__int16 *)((char *)&v170.m256i_i16[6] + 1) = *(_WORD *)&v150[12];
          v170.m256i_i8[15] = v150[14];
          *(__m128i *)&v170.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v150[15]);
          v184 = 1;
          sub_140DC30A0(v97, &v170);
          v140 = v104;
          v139 = v103;
          v138 = v102;
          v137 = v101;
          v81 = _mm_loadu_si128((const __m128i *)v97);
          v82 = _mm_loadu_si128((const __m128i *)&v97[16]);
          v136 = v100;
          v135 = v99;
          *(__m128i *)&v134.m256i_u64[2] = v82;
          *(__m128i *)v134.m256i_i8 = v81;
          v184 = 0;
          sub_140DC9A70(&v155, &v144, &v134);
          if ( v155.m256i_i32[0] == -1 )
          {
            v184 = 0;
            sub_14074E5B0(v152);
          }
          else
          {
            v153 = v160;
            *(_OWORD *)&v152[80] = v159;
            *(_OWORD *)&v152[64] = v158;
            v83 = _mm_loadu_si128((const __m128i *)&v155.m256i_u64[2]);
            *(_OWORD *)&v152[48] = v157;
            *(_OWORD *)&v152[32] = v156;
            *(__m128i *)&v152[16] = v83;
            *(_OWORD *)v152 = *(_OWORD *)v155.m256i_i8;
            v154 = _mm_loadu_si128(v161);
            WORD4(v153) = 503;
          }
          v46 = v183;
          v47 = (_BYTE *)v185;
          if ( !*(_BYTE *)(v185 + 1057) )
            goto LABEL_91;
          goto LABEL_48;
        }
        *(_QWORD *)v5 = -1;
        v48 = 4;
      }
      else
      {
        *(_QWORD *)v5 = -1;
        v48 = 3;
      }
LABEL_104:
      v66 = v185;
LABEL_106:
      *(_BYTE *)(v66 + 520) = v48;
      return v5;
    case 4LL:
      v11 = *(__m128i **)(a2 + 528);
      v12 = *(__int64 (__fastcall ***)())(a2 + 536);
      goto LABEL_15;
    case 5LL:
      v13 = (char *)(a2 + 1056);
      v14 = (const __m128i *)(a2 + 528);
      switch ( *(_BYTE *)(a2 + 1056) )
      {
        case 0:
          v178 = a3;
          v15 = (char *)(a2 + 1056);
          v174 = a1;
          v16 = *(_QWORD *)(a2 + 768);
          v17 = *(unsigned __int16 *)(a2 + 776);
          v18 = *(_QWORD *)(a2 + 784);
          v19 = *(void (__fastcall ***)(__int64))(a2 + 792);
          goto LABEL_21;
        case 1:
          v167 = a2 + 528;
          sub_1419393E0(&off_141A23310);
        case 2:
          JUMPOUT(0x140923349LL);
        case 3:
          v182 = (const __m128i *)(a2 + 528);
          goto LABEL_46;
        case 4:
          v182 = (const __m128i *)(a2 + 528);
          goto LABEL_68;
      }
  }
}
