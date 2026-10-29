// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x14103b320 | name sub_14103B320
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14103B320(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __m128i *v6; // r14
  __m128i v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int32 v19; // edx
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int32 v24; // edx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rbx
  __m128i v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // r15
  __int64 v33; // r12
  __m128i v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __m128i *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __m128i v47; // xmm0
  __int128 v48; // xmm1
  __int64 v49; // rsi
  const __m128i *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __int128 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rdi
  __int64 v63; // rbx
  __m128i *v64; // r15
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __m128i *v69; // rsi
  const __m128i *v70; // r13
  unsigned __int64 v71; // r15
  __int64 v72; // r12
  __m128i *v73; // rax
  char v74; // al
  __int64 v75; // rcx
  unsigned __int64 v76; // r15
  __m128i *v77; // rax
  __m128i *v78; // r12
  const __m128i *v79; // rdx
  __int64 v80; // rcx
  bool v81; // zf
  __int64 v82; // rax
  const __m128i *v83; // r12
  __m128i *v84; // rax
  __int64 v85; // r13
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rcx
  __m128i v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rbx
  const __m128i *v95; // r14
  __m128i si128; // xmm0
  __int64 v98; // rax
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  __int64 v101; // rdi
  __m128i *v102; // r15
  __int64 v103; // rax
  __m128i v104; // xmm0
  __int128 v105; // xmm1
  __int128 v106; // xmm2
  __int64 v107; // rcx
  __int64 v108; // r15
  __m128i v109; // [rsp+30h] [rbp-50h] BYREF
  __int64 v110; // [rsp+40h] [rbp-40h]
  __int64 v111; // [rsp+50h] [rbp-30h]
  __int64 v112; // [rsp+58h] [rbp-28h]
  __int64 v113; // [rsp+60h] [rbp-20h] BYREF
  __int64 v114; // [rsp+68h] [rbp-18h]
  __int64 v115; // [rsp+70h] [rbp-10h]
  __m128i v116; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v117; // [rsp+D0h] [rbp+50h]
  __int64 v118; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v119; // [rsp+E0h] [rbp+60h]
  __int64 v120; // [rsp+E8h] [rbp+68h]
  __int64 v121; // [rsp+F0h] [rbp+70h]
  __int64 v122; // [rsp+F8h] [rbp+78h]
  __m128i v123; // [rsp+100h] [rbp+80h] BYREF
  __m256i v124; // [rsp+110h] [rbp+90h]
  __int128 v125; // [rsp+130h] [rbp+B0h]
  __int128 v126; // [rsp+140h] [rbp+C0h]
  __int128 v127; // [rsp+150h] [rbp+D0h]
  __m128i v128; // [rsp+190h] [rbp+110h] BYREF
  __int128 v129; // [rsp+1A0h] [rbp+120h]
  __int128 v130; // [rsp+1B0h] [rbp+130h]
  __int128 v131; // [rsp+1C0h] [rbp+140h]
  __int128 v132; // [rsp+1D0h] [rbp+150h]
  __int128 v133; // [rsp+1E0h] [rbp+160h]
  __int64 v134; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v135; // [rsp+1F8h] [rbp+178h]
  __m128i *v136; // [rsp+200h] [rbp+180h]
  __int64 v137; // [rsp+210h] [rbp+190h] BYREF
  __m128i *v138; // [rsp+218h] [rbp+198h]
  __int64 *v139; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v140; // [rsp+228h] [rbp+1A8h]
  __int64 v141; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v142; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v143; // [rsp+240h] [rbp+1C0h]
  __int64 v144; // [rsp+248h] [rbp+1C8h]
  __int64 v145; // [rsp+250h] [rbp+1D0h]
  __int64 v146; // [rsp+258h] [rbp+1D8h]
  __m128i v147; // [rsp+260h] [rbp+1E0h] BYREF
  _BYTE v148[80]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v149; // [rsp+2C0h] [rbp+240h]
  __int64 v150; // [rsp+2F0h] [rbp+270h]
  __int64 v151; // [rsp+2F8h] [rbp+278h]
  const __m128i *v152; // [rsp+300h] [rbp+280h]
  __int64 v153; // [rsp+308h] [rbp+288h]
  __int64 v154; // [rsp+310h] [rbp+290h]

  v154 = -2;
  result = sub_1401B6D70(a2);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = result;
LABEL_3:
    *(_QWORD *)a1 = -1;
    return result;
  }
  v5 = a2[89];
  v6 = (__m128i *)a2[90];
  sub_141695A00(&v147, v5, v6);
  if ( v147.m128i_i32[0] == 2 )
  {
    if ( (v147.m128i_i8[8] & 3u) - 2 >= 2 && (v147.m128i_i8[8] & 3) != 0 )
    {
      --v147.m128i_i64[1];
      v147.m128i_i8[0] = 3;
      sub_1416BCB00(&v147.m128i_u64[1]);
    }
    sub_14103D820(&v147);
    sub_14103CBF0(&v123, a2, &v147);
    if ( v123.m128i_i32[0] == -1 )
      return sub_1418F44E0((__m128i *)a1, &v147, 0x90u);
    *(_OWORD *)(a1 + 88) = v127;
    *(_OWORD *)(a1 + 72) = v126;
    v7 = _mm_loadu_si128(&v123);
    v8 = *(_OWORD *)v124.m256i_i8;
    v9 = *(_OWORD *)&v124.m256i_u64[2];
    *(_OWORD *)(a1 + 56) = v125;
    *(_OWORD *)(a1 + 40) = v9;
    *(_OWORD *)(a1 + 24) = v8;
    *(__m128i *)(a1 + 8) = v7;
    *(_QWORD *)a1 = -1;
    return sub_140FA5420((__int64)&v147);
  }
  sub_14169D1D0(&v147, v5, v6);
  v10 = v147.m128i_i64[1];
  result = v147.m128i_i64[0];
  if ( v147.m128i_i64[0] == -1 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v10;
    goto LABEL_3;
  }
  v143 = v147.m128i_i64[0];
  v11 = *(_QWORD *)v148;
  sub_140E91160(v147.m128i_i64[1], *(_QWORD *)v148);
  v144 = v10;
  if ( v12 )
  {
    v147.m128i_i64[0] = v10;
    v147.m128i_i64[1] = v11;
    *(_OWORD *)v148 = 0;
    *(_QWORD *)&v148[16] = v10;
    *(_QWORD *)&v148[24] = v11;
    sub_14062F090(&v123, &v147);
    if ( v123.m128i_i64[0] == -1 )
    {
      v142 = v123.m128i_i64[1];
      v139 = &v142;
      v128.m128i_i32[0] = sub_141683E80(v14, v13, v15);
      v128.m128i_i32[1] = v24;
      sub_141683E30(&v147, &v128, 3577643008LL, 27111902);
      if ( v147.m128i_i8[0] )
        v25 = 0;
      else
        v25 = v147.m128i_i64[1];
      v128.m128i_i64[0] = v25;
      v147.m128i_i64[0] = (__int64)&v128;
      v147.m128i_i64[1] = (__int64)sub_1416BCBE0;
      sub_1416ABFD0(&v118, &unk_141A71A3D, &v147);
      v153 = v119;
      sub_141682750((unsigned int)&v134, v5, (_DWORD)v6, v119, v120);
      if ( v118 )
        sub_140001660(v153, v118, 1);
      v102 = v136;
      v153 = v135;
      v103 = sub_141695830(v5, v6, v135, v136);
      if ( v103 )
      {
        v141 = v103;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v137 = v5;
          v138 = v6;
          v147.m128i_i64[0] = (__int64)&v137;
          v147.m128i_i64[1] = (__int64)sub_14169F630;
          *(_QWORD *)v148 = &v141;
          *(_QWORD *)&v148[8] = sub_1416BB0B0;
          *(_QWORD *)&v148[16] = &v139;
          *(_QWORD *)&v148[24] = sub_140DCB2D0;
          v128.m128i_i64[0] = (__int64)aCodexmateLibCo_53;
          v128.m128i_i64[1] = 37;
          *(_QWORD *)&v129 = aCodexmateLibCo_53;
          *((_QWORD *)&v129 + 1) = 37;
          *(_QWORD *)&v130 = &off_141A71B30;
          sub_140BAD520(&unk_141A71ADD, &v147, 2, &v128);
          v103 = v141;
        }
        if ( (unsigned int)(v103 & 3) - 2 >= 2 && (v103 & 3) != 0 )
        {
          v147.m128i_i64[1] = v103 - 1;
          v147.m128i_i8[0] = 3;
          sub_1416BCB00(&v147.m128i_u64[1]);
        }
      }
      else if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v137 = v153;
        v138 = v102;
        v128.m128i_i64[0] = (__int64)&v137;
        v128.m128i_i64[1] = (__int64)sub_14169F630;
        *(_QWORD *)&v129 = &v139;
        *((_QWORD *)&v129 + 1) = sub_140DCB2D0;
        v147.m128i_i64[0] = (__int64)aCodexmateLibCo_53;
        v147.m128i_i64[1] = 37;
        *(_QWORD *)v148 = aCodexmateLibCo_53;
        *(_QWORD *)&v148[8] = 37;
        *(_QWORD *)&v148[16] = &off_141A71AA0;
        sub_140BAD520(&unk_141A71A5E, &v128, 2, &v147);
      }
      if ( v134 )
        sub_140001660(v153, v134, 1);
      sub_14103D820(&v147);
      sub_14103CBF0(&v128, a2, &v147);
      if ( v128.m128i_i32[0] == -1 )
      {
        sub_1418F44E0((__m128i *)a1, &v147, 0x90u);
      }
      else
      {
        *(_OWORD *)(a1 + 88) = v133;
        *(_OWORD *)(a1 + 72) = v132;
        v104 = _mm_loadu_si128(&v128);
        v105 = v129;
        v106 = v130;
        *(_OWORD *)(a1 + 56) = v131;
        *(_OWORD *)(a1 + 40) = v106;
        *(_OWORD *)(a1 + 24) = v105;
        *(__m128i *)(a1 + 8) = v104;
        *(_QWORD *)a1 = -1;
        sub_140FA5420((__int64)&v147);
      }
      result = sub_14002F910(&v142);
      goto LABEL_102;
    }
    sub_1418F44E0(&v109, &v123, 0x90u);
    v123.m128i_i32[0] = sub_141683E80(v17, v16, v18);
    v123.m128i_i32[1] = v19;
    sub_141683E30(&v147, &v123, 3577643008LL, 27111902);
    if ( v147.m128i_i8[0] )
      v20 = 0;
    else
      v20 = v147.m128i_i64[1];
    sub_1410384A0(&v134, v20);
    v26 = v135;
    v27 = v135 + 112LL * (_QWORD)v136;
    v128.m128i_i64[0] = v135;
    v146 = v134;
    *(_QWORD *)&v129 = v134;
    *((_QWORD *)&v129 + 1) = v27;
    v145 = v135;
    if ( v136 )
    {
      v28 = v145;
      v151 = a1;
      v140 = v135 + 112LL * (_QWORD)v136;
      while ( 1 )
      {
        v26 = v28 + 112;
        if ( *(_QWORD *)v28 == -1 )
          break;
        v150 = *(_QWORD *)v28;
        v153 = v28 + 112;
        v6 = *(__m128i **)(v28 + 8);
        v32 = *(_QWORD *)(v28 + 16);
        v33 = v28 + 24;
        LOBYTE(v152) = *(_BYTE *)(v28 + 105);
        v34 = *(__m128i *)(v28 + 24);
        v35 = *(_OWORD *)(v28 + 40);
        *(_OWORD *)&v124.m256i_u64[2] = *(_OWORD *)(v28 + 56);
        *(_OWORD *)v124.m256i_i8 = v35;
        v123 = v34;
        v116 = _mm_loadu_si128((const __m128i *)(v28 + 72));
        v122 = v28 + 72;
        v117 = *(_QWORD *)(v28 + 88);
        v36 = v109.m128i_i64[1];
        v37 = 112 * v110;
        v121 = v110;
        if ( v110 )
        {
          v38 = 0;
          while ( *(_QWORD *)(v36 + v38 + 16) != v32 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v36 + v38 + 8), v6) )
          {
            v38 += 112;
            if ( v37 == v38 )
              goto LABEL_41;
          }
          *(_QWORD *)v148 = *(_QWORD *)(v28 + 40);
          v147 = *(__m128i *)v33;
          v39 = *(_QWORD *)(v36 + v38 + 24);
          if ( v39 )
            sub_140001660(*(_QWORD *)(v36 + v38 + 32), v39, 1);
          v40 = (__m128i *)(v38 + v36 + 24);
          v40[1].m128i_i64[0] = *(_QWORD *)v148;
          *v40 = v147;
          v41 = *(_QWORD *)(v36 + v38 + 48);
          a1 = v151;
          v27 = v140;
          if ( v41 )
            sub_140001660(*(_QWORD *)(v36 + v38 + 56), v41, 1);
          v42 = v38 + v36 + 48;
          *(_QWORD *)(v42 + 16) = v124.m256i_i64[3];
          *(_OWORD *)v42 = *(_OWORD *)&v124.m256i_u64[1];
          *(_BYTE *)(v36 + v38 + 105) = (_BYTE)v152;
          v43 = *(_QWORD *)(v36 + v38 + 72);
          if ( v43 )
            sub_140001660(*(_QWORD *)(v36 + v38 + 80), v43, 1);
          v44 = (__m128i *)(v38 + v36 + 72);
          v44[1].m128i_i64[0] = v117;
          *v44 = _mm_load_si128(&v116);
          *(_BYTE *)(v36 + v38 + 104) = 1;
          if ( v150 )
            sub_140001660(v6, v150, 1);
        }
        else
        {
LABEL_41:
          v45 = v28 + 96;
          v46 = v28 + 106;
          v147.m128i_i64[0] = v150;
          v147.m128i_i64[1] = (__int64)v6;
          *(_QWORD *)v148 = v32;
          v47 = *(__m128i *)v33;
          v48 = *(_OWORD *)(v33 + 16);
          *(_OWORD *)&v148[40] = *(_OWORD *)(v33 + 32);
          *(_OWORD *)&v148[24] = v48;
          *(__m128i *)&v148[8] = v47;
          *(_QWORD *)&v148[72] = *(_QWORD *)(v122 + 16);
          *(_OWORD *)&v148[56] = *(_OWORD *)v122;
          BYTE8(v149) = *(_BYTE *)(v45 + 8);
          *(_QWORD *)&v149 = *(_QWORD *)v45;
          BYTE9(v149) = (_BYTE)v152;
          HIWORD(v149) = *(_WORD *)(v46 + 4);
          *(_DWORD *)((char *)&v149 + 10) = *(_DWORD *)v46;
          v49 = v121;
          a1 = v151;
          if ( v121 == v109.m128i_i64[0] )
          {
            sub_14190F500(&v109);
            v36 = v109.m128i_i64[1];
          }
          *(_OWORD *)(v36 + v37 + 96) = v149;
          *(_OWORD *)(v36 + v37 + 80) = *(_OWORD *)&v148[64];
          *(_OWORD *)(v36 + v37 + 64) = *(_OWORD *)&v148[48];
          v29 = _mm_loadu_si128(&v147);
          v30 = *(_OWORD *)v148;
          v31 = *(_OWORD *)&v148[16];
          *(_OWORD *)(v36 + v37 + 48) = *(_OWORD *)&v148[32];
          *(_OWORD *)(v36 + v37 + 32) = v31;
          *(_OWORD *)(v36 + v37 + 16) = v30;
          *(__m128i *)(v36 + v37) = v29;
          v110 = v49 + 1;
          v27 = v140;
        }
        v28 = v153;
        if ( v153 == v27 )
        {
          v26 = v27;
          break;
        }
      }
    }
    v128.m128i_i64[1] = v26;
    sub_14038EA80(v26, 0x6DB6DB6DB6DB6DB7LL * ((unsigned __int64)(v27 - v26) >> 4));
    if ( v146 )
      sub_140001660(v145, 112 * v146, 8);
    v52 = v114;
    v53 = v115;
    v54 = sub_14167F170(v51);
    v59 = v54;
    if ( *(_BYTE *)(v54 + 16) == 1 )
    {
      v60 = *(_OWORD *)v54;
    }
    else
    {
      *(_QWORD *)&v60 = sub_141696260(v56, v55, v57, v58);
      *(_OWORD *)v59 = v60;
      *(_BYTE *)(v59 + 16) = 1;
    }
    *(_QWORD *)v59 = v60 + 1;
    *(_OWORD *)v148 = *(&off_141A68A70 + 1);
    v147 = _mm_loadu_si128((const __m128i *)&off_141A68A70);
    *(_OWORD *)&v148[16] = v60;
    if ( v53 )
    {
      LOBYTE(v58) = 1;
      sub_141930360(&v147, v53, &v148[16], v58);
      v108 = 0;
      v6 = &v147;
      do
      {
        sub_1416AC440(&v123, v52 + 72 * v108);
        sub_1403AAB80(&v147, &v123);
        ++v108;
      }
      while ( v108 != v53 );
    }
    v61 = _mm_load_si128(&v147);
    v124 = *(__m256i *)v148;
    v123 = v61;
    v62 = v111;
    v63 = v111 + 160 * v112;
    v64 = &v147;
    while ( 1 )
    {
      v62 += 160;
      _RAX = v62 - 160;
      if ( v62 - 160 == v63 )
        break;
      if ( *(_QWORD *)(_RAX + 72) != -1 )
      {
        v66 = sub_140E91160(*(_QWORD *)(v62 - 80), *(_QWORD *)(v62 - 72));
        if ( v67 )
        {
          if ( v67 < 0 )
          {
            v72 = 0;
            goto LABEL_93;
          }
          v69 = v64;
          v151 = a1;
          v70 = (const __m128i *)v66;
          v71 = v67;
          nullsub_1(v68);
          v72 = 1;
          v73 = (__m128i *)sub_140001650(v71, 1);
          if ( !v73 )
          {
            v6 = (__m128i *)v71;
LABEL_93:
            sub_141938D2B(v72, v6);
          }
          v6 = v73;
          sub_1418F44E0(v73, v70, v71);
          v147.m128i_i64[0] = v71;
          v147.m128i_i64[1] = (__int64)v6;
          v153 = v71;
          *(_QWORD *)v148 = v71;
          v64 = v69;
          v74 = sub_1403AAB80(&v123, v69);
          a1 = v151;
          if ( !v74 )
          {
            nullsub_1(v75);
            v76 = v153;
            v77 = (__m128i *)sub_140001650(v153, 1);
            if ( !v77 )
              sub_141938D2B(1, v76);
            v78 = v77;
            sub_1418F44E0(v77, v70, v76);
            v81 = *(_QWORD *)(v62 - 64) == -1;
            v150 = (__int64)v78;
            if ( v81 )
              v82 = 0;
            else
              v82 = sub_140E91160(*(_QWORD *)(v62 - 56), *(_QWORD *)(v62 - 48));
            v83 = (const __m128i *)v153;
            if ( v82 != 0 && v79 != nullptr )
            {
              v83 = v79;
              v70 = (const __m128i *)v82;
            }
            if ( (__int64)v83 < 0 )
            {
              v107 = 0;
              goto LABEL_105;
            }
            v152 = v70;
            if ( v83 )
            {
              LOBYTE(v80) = v82 == 0;
              nullsub_1(v80);
              v84 = (__m128i *)sub_140001650(v83, 1);
              if ( !v84 )
              {
                v152 = v83;
                v107 = 1;
LABEL_105:
                sub_141938D2B(v107, v152);
              }
              v85 = (__int64)v84;
              sub_1418F44E0(v84, v152, (unsigned __int64)v83);
            }
            else
            {
              v85 = 1;
            }
            v64 = v69;
            v147.m128i_i64[0] = v153;
            v147.m128i_i64[1] = v150;
            *(_QWORD *)v148 = v153;
            *(_QWORD *)&v148[8] = v83;
            v152 = (const __m128i *)v85;
            *(_QWORD *)&v148[16] = v85;
            *(_QWORD *)&v148[24] = v83;
            *(_QWORD *)&v148[32] = 0;
            *(_QWORD *)&v148[40] = 1;
            *(_QWORD *)&v148[48] = 0;
            v86 = v115;
            if ( v115 == v113 )
              sub_14190FB90(&v113);
            v87 = v114;
            v88 = 9 * v86;
            *(_QWORD *)(v114 + 8 * v88 + 64) = *(_QWORD *)&v148[48];
            v89 = _mm_loadu_si128(&v147);
            v90 = *(_OWORD *)v148;
            v91 = *(_OWORD *)&v148[16];
            *(_OWORD *)(v87 + 8 * v88 + 48) = *(_OWORD *)&v148[32];
            *(_OWORD *)(v87 + 8 * v88 + 32) = v91;
            *(_OWORD *)(v87 + 8 * v88 + 16) = v90;
            *(__m128i *)(v87 + 8 * v88) = v89;
            v115 = v86 + 1;
            a1 = v151;
          }
        }
      }
    }
    v92 = v123.m128i_i64[1];
    if ( v123.m128i_i64[1] )
    {
      v93 = v124.m256i_i64[1];
      if ( v124.m256i_i64[1] )
      {
        v94 = v123.m128i_i64[0];
        v95 = (const __m128i *)(v123.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v123.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              si128 = _mm_load_si128(v95);
              v94 -= 384;
              ++v95;
              _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v98 = -3 * _RAX;
          v99 = *(_QWORD *)(v94 + 8 * v98 - 24);
          if ( v99 )
            sub_140001660(*(_QWORD *)(v94 + 8 * v98 - 16), v99, 1);
          --v93;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v93 );
      }
      v100 = (24 * v92 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v101 = v100 + v92 + 17;
      if ( v101 )
        sub_140001660(v123.m128i_i64[0] - v100, v101, 16);
    }
    sub_14102FC50(&v109);
    v50 = &v109;
  }
  else
  {
    sub_14103D820(&v147);
    sub_14103CBF0(&v123, a2, &v147);
    if ( v123.m128i_i32[0] != -1 )
    {
      *(_OWORD *)(a1 + 88) = v127;
      *(_OWORD *)(a1 + 72) = v126;
      v21 = _mm_loadu_si128(&v123);
      v22 = *(_OWORD *)v124.m256i_i8;
      v23 = *(_OWORD *)&v124.m256i_u64[2];
      *(_OWORD *)(a1 + 56) = v125;
      *(_OWORD *)(a1 + 40) = v23;
      *(_OWORD *)(a1 + 24) = v22;
      *(__m128i *)(a1 + 8) = v21;
      *(_QWORD *)a1 = -1;
      result = sub_140FA5420((__int64)&v147);
      goto LABEL_102;
    }
    v50 = &v147;
  }
  result = sub_1418F44E0((__m128i *)a1, v50, 0x90u);
LABEL_102:
  if ( v143 )
    return sub_140001660(v144, v143, 1);
  return result;
}
