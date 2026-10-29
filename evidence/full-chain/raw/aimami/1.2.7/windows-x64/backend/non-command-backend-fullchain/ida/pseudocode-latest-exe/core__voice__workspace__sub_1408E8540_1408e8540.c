// win 1.2.7 latest-exe | module src/core/voice/workspace.rs | ea 0x1408e8540 | successor of pre-update 0x14103b320 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
double __fastcall sub_1408E8540(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __m128i *v5; // rbx
  __m128i *v6; // r14
  __m128i v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rcx
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
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int32 v23; // edx
  __int64 v24; // rax
  __int64 m128i_i64; // rcx
  __int64 v26; // r8
  __m128i v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // r15
  __int64 v31; // r12
  __int8 *v32; // rbx
  __m128i v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rdx
  __m128i *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __m128i *v43; // rax
  __m128i *v44; // rax
  __int8 *v45; // r14
  __m128i v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rsi
  __m128i *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbx
  __int128 v59; // rax
  __m128i v60; // xmm0
  _QWORD *v61; // rbx
  _QWORD *v63; // rdi
  _QWORD *v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r13
  __int64 v68; // r15
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r13
  __int64 v78; // rdx
  __int64 v79; // r12
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rsi
  __int64 v83; // rcx
  __m128i v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rbx
  const __m128i *v90; // r14
  __m128i si128; // xmm0
  __int64 v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  __int64 v96; // rdi
  __m128i *v97; // r15
  __int64 v98; // rax
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  __int64 v101; // r15
  __int64 v103; // [rsp+30h] [rbp-50h] BYREF
  __int64 v104; // [rsp+38h] [rbp-48h]
  __int64 v105; // [rsp+40h] [rbp-40h]
  _QWORD *v106; // [rsp+50h] [rbp-30h]
  __int64 v107; // [rsp+58h] [rbp-28h]
  __int64 v108; // [rsp+60h] [rbp-20h] BYREF
  __int64 v109; // [rsp+68h] [rbp-18h]
  __int64 v110; // [rsp+70h] [rbp-10h]
  __m128i v111; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v112; // [rsp+D0h] [rbp+50h]
  __int64 v113; // [rsp+D8h] [rbp+58h] BYREF
  __m128i *v114; // [rsp+E0h] [rbp+60h]
  __int64 v115; // [rsp+E8h] [rbp+68h]
  __int64 v116; // [rsp+F0h] [rbp+70h]
  __int8 *v117; // [rsp+F8h] [rbp+78h]
  __int64 v118; // [rsp+100h] [rbp+80h]
  __int64 v119; // [rsp+108h] [rbp+88h]
  __m128i v120; // [rsp+110h] [rbp+90h] BYREF
  __m256i v121; // [rsp+120h] [rbp+A0h]
  __int128 v122; // [rsp+140h] [rbp+C0h]
  __int128 v123; // [rsp+150h] [rbp+D0h]
  __int128 v124; // [rsp+160h] [rbp+E0h]
  __m128i v125; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v126; // [rsp+1B0h] [rbp+130h]
  __int128 v127; // [rsp+1C0h] [rbp+140h]
  __int128 v128; // [rsp+1D0h] [rbp+150h]
  __int128 v129; // [rsp+1E0h] [rbp+160h]
  __int128 v130; // [rsp+1F0h] [rbp+170h]
  __int64 v131; // [rsp+200h] [rbp+180h] BYREF
  __int64 v132; // [rsp+208h] [rbp+188h]
  __m128i *v133; // [rsp+210h] [rbp+190h]
  __m128i *v134; // [rsp+220h] [rbp+1A0h] BYREF
  __m128i *v135; // [rsp+228h] [rbp+1A8h]
  __int64 *v136; // [rsp+230h] [rbp+1B0h] BYREF
  __m128i *v137; // [rsp+238h] [rbp+1B8h]
  __int64 v138; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v139; // [rsp+248h] [rbp+1C8h] BYREF
  __m128i v140; // [rsp+250h] [rbp+1D0h]
  __m128i v141; // [rsp+260h] [rbp+1E0h] BYREF
  _BYTE v142[80]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v143; // [rsp+2C0h] [rbp+240h]
  __int64 v144; // [rsp+2F0h] [rbp+270h]
  __int64 v145; // [rsp+2F8h] [rbp+278h]
  __int64 v146; // [rsp+300h] [rbp+280h]
  __m128i *v147; // [rsp+308h] [rbp+288h]
  __int64 v148; // [rsp+310h] [rbp+290h]

  v148 = -2;
  v4 = sub_140A2C1C0(a2);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v4;
LABEL_3:
    *(_QWORD *)a1 = -1;
    return *(double *)v7.m128i_i64;
  }
  v5 = *(__m128i **)(a2 + 712);
  v6 = *(__m128i **)(a2 + 720);
  sub_1416C49D0(&v141, v5, v6);
  if ( v141.m128i_i32[0] == 2 )
  {
    if ( (v141.m128i_i8[8] & 3u) - 2 >= 2 && (v141.m128i_i8[8] & 3) != 0 )
    {
      --v141.m128i_i64[1];
      v141.m128i_i8[0] = 3;
      sub_1416EBAD0(&v141.m128i_u64[1]);
    }
    sub_1408EA710(&v141);
    sub_1408E9DB0(&v120, a2, &v141);
    if ( v120.m128i_i32[0] == -1 )
    {
      *(double *)v7.m128i_i64 = sub_1419234B0(a1, &v141, 144);
    }
    else
    {
      *(_OWORD *)(a1 + 88) = v124;
      *(_OWORD *)(a1 + 72) = v123;
      v7 = _mm_loadu_si128(&v120);
      v8 = *(_OWORD *)v121.m256i_i8;
      v9 = *(_OWORD *)&v121.m256i_u64[2];
      *(_OWORD *)(a1 + 56) = v122;
      *(_OWORD *)(a1 + 40) = v9;
      *(_OWORD *)(a1 + 24) = v8;
      *(__m128i *)(a1 + 8) = v7;
      *(_QWORD *)a1 = -1;
      sub_14084D1D0(&v141);
    }
    return *(double *)v7.m128i_i64;
  }
  sub_1416CC1A0(&v141, v5, v6);
  v10 = v141.m128i_i64[1];
  if ( v141.m128i_i64[0] == -1 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v10;
    goto LABEL_3;
  }
  v140 = v141;
  v11 = *(_QWORD *)v142;
  sub_1408FEA60(v141.m128i_i64[1], *(_QWORD *)v142);
  if ( v12 )
  {
    v141.m128i_i64[0] = v140.m128i_i64[1];
    v141.m128i_i64[1] = v11;
    *(_OWORD *)v142 = 0;
    *(_QWORD *)&v142[16] = v140.m128i_i64[1];
    *(_QWORD *)&v142[24] = v11;
    sub_140D8D6B0(&v120, &v141);
    if ( v120.m128i_i64[0] == -1 )
    {
      v139 = v120.m128i_i64[1];
      v136 = &v139;
      v125.m128i_i32[0] = sub_1416B2E50(v14, v13, v15);
      v125.m128i_i32[1] = v23;
      sub_1416B2E00(&v141, &v125, 3577643008LL, 27111902);
      if ( v141.m128i_i8[0] )
        v24 = 0;
      else
        v24 = v141.m128i_i64[1];
      v125.m128i_i64[0] = v24;
      v141.m128i_i64[0] = (__int64)&v125;
      v141.m128i_i64[1] = (__int64)sub_1416EBBB0;
      sub_1416DAFA0(&v113, &unk_141A5579D, &v141);
      v147 = v114;
      sub_1416B1720((unsigned int)&v131, (_DWORD)v5, (_DWORD)v6, (_DWORD)v114, v115);
      if ( v113 )
        sub_140001660(v147, v113, 1);
      v97 = v133;
      v147 = (__m128i *)v132;
      v98 = sub_1416C4800(v5, v6, v132, v133);
      if ( v98 )
      {
        v138 = v98;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v134 = v5;
          v135 = v6;
          v141.m128i_i64[0] = (__int64)&v134;
          v141.m128i_i64[1] = (__int64)sub_1416CE600;
          *(_QWORD *)v142 = &v138;
          *(_QWORD *)&v142[8] = sub_1416EA080;
          *(_QWORD *)&v142[16] = &v136;
          *(_QWORD *)&v142[24] = sub_140B520C0;
          v125.m128i_i64[0] = (__int64)aCodexmateLibCo_34;
          v125.m128i_i64[1] = 37;
          *(_QWORD *)&v126 = aCodexmateLibCo_34;
          *((_QWORD *)&v126 + 1) = 37;
          *(_QWORD *)&v127 = &off_141A55890;
          sub_140AF72B0(&unk_141A5583D, &v141, 2, &v125);
          v98 = v138;
        }
        if ( (unsigned int)(v98 & 3) - 2 >= 2 && (v98 & 3) != 0 )
        {
          v141.m128i_i64[1] = v98 - 1;
          v141.m128i_i8[0] = 3;
          sub_1416EBAD0(&v141.m128i_u64[1]);
        }
      }
      else if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v134 = v147;
        v135 = v97;
        v125.m128i_i64[0] = (__int64)&v134;
        v125.m128i_i64[1] = (__int64)sub_1416CE600;
        *(_QWORD *)&v126 = &v136;
        *((_QWORD *)&v126 + 1) = sub_140B520C0;
        v141.m128i_i64[0] = (__int64)aCodexmateLibCo_34;
        v141.m128i_i64[1] = 37;
        *(_QWORD *)v142 = aCodexmateLibCo_34;
        *(_QWORD *)&v142[8] = 37;
        *(_QWORD *)&v142[16] = &off_141A55800;
        sub_140AF72B0(&unk_141A557BE, &v125, 2, &v141);
      }
      if ( v131 )
        sub_140001660(v147, v131, 1);
      sub_1408EA710(&v141);
      sub_1408E9DB0(&v125, a2, &v141);
      if ( v125.m128i_i32[0] == -1 )
      {
        *(double *)v7.m128i_i64 = sub_1419234B0(a1, &v141, 144);
      }
      else
      {
        *(_OWORD *)(a1 + 88) = v130;
        *(_OWORD *)(a1 + 72) = v129;
        v7 = _mm_loadu_si128(&v125);
        v99 = v126;
        v100 = v127;
        *(_OWORD *)(a1 + 56) = v128;
        *(_OWORD *)(a1 + 40) = v100;
        *(_OWORD *)(a1 + 24) = v99;
        *(__m128i *)(a1 + 8) = v7;
        *(_QWORD *)a1 = -1;
        sub_14084D1D0(&v141);
      }
      sub_140032F30(&v139);
      goto LABEL_102;
    }
    sub_1419234B0(&v103, &v120, 144);
    v120.m128i_i32[0] = sub_1416B2E50(v17, v16, v18);
    v120.m128i_i32[1] = v19;
    sub_1416B2E00(&v141, &v120, 3577643008LL, 27111902);
    if ( v141.m128i_i8[0] )
      v20 = 0;
    else
      v20 = v141.m128i_i64[1];
    sub_1408E56A0(&v131, v20);
    m128i_i64 = v132;
    v26 = v132 + 112LL * (_QWORD)v133;
    v125.m128i_i64[0] = v132;
    v119 = v131;
    *(_QWORD *)&v126 = v131;
    *((_QWORD *)&v126 + 1) = v26;
    v137 = (__m128i *)v132;
    if ( v133 )
    {
      v6 = v137;
      v145 = a1;
      v118 = v132 + 112LL * (_QWORD)v133;
      while ( 1 )
      {
        m128i_i64 = (__int64)v6[7].m128i_i64;
        if ( v6->m128i_i64[0] == -1 )
          break;
        v144 = v6->m128i_i64[0];
        v147 = v6 + 7;
        v30 = v6->m128i_i64[1];
        v31 = v6[1].m128i_i64[0];
        v32 = &v6[1].m128i_i8[8];
        LOBYTE(v146) = v6[6].m128i_i8[9];
        v33 = *(__m128i *)((char *)v6 + 24);
        v34 = *(__int128 *)((char *)&v6[2] + 8);
        *(__m128i *)&v121.m256i_u64[2] = *(__m128i *)((char *)v6 + 56);
        *(_OWORD *)v121.m256i_i8 = v34;
        v120 = v33;
        v111 = _mm_loadu_si128((__m128i *)((char *)v6 + 72));
        v117 = &v6[4].m128i_i8[8];
        v112 = v6[5].m128i_i64[1];
        v35 = v104;
        v36 = 112 * v105;
        v116 = v105;
        if ( v105 )
        {
          v37 = 0;
          while ( *(_QWORD *)(v35 + v37 + 16) != v31
               || (unsigned int)sub_141923B40(*(_QWORD *)(v35 + v37 + 8), v30, v31) )
          {
            v37 += 112;
            if ( v36 == v37 )
              goto LABEL_41;
          }
          *(_QWORD *)v142 = v6[2].m128i_i64[1];
          v141 = *(__m128i *)v32;
          v38 = *(_QWORD *)(v35 + v37 + 24);
          if ( v38 )
            sub_140001660(*(_QWORD *)(v35 + v37 + 32), v38, 1);
          v39 = (__m128i *)(v35 + v37 + 24);
          v39[1].m128i_i64[0] = *(_QWORD *)v142;
          *v39 = v141;
          v40 = *(_QWORD *)(v35 + v37 + 48);
          a1 = v145;
          if ( v40 )
            sub_140001660(*(_QWORD *)(v35 + v37 + 56), v40, 1);
          v41 = v35 + v37 + 48;
          *(_QWORD *)(v41 + 16) = v121.m256i_i64[3];
          *(_OWORD *)v41 = *(_OWORD *)&v121.m256i_u64[1];
          *(_BYTE *)(v35 + v37 + 105) = v146;
          v42 = *(_QWORD *)(v35 + v37 + 72);
          if ( v42 )
            sub_140001660(*(_QWORD *)(v35 + v37 + 80), v42, 1);
          v43 = (__m128i *)(v35 + v37 + 72);
          v43[1].m128i_i64[0] = v112;
          *v43 = _mm_load_si128(&v111);
          *(_BYTE *)(v35 + v37 + 104) = 1;
          if ( v144 )
            sub_140001660(v30, v144, 1);
        }
        else
        {
LABEL_41:
          v44 = v6 + 6;
          v45 = &v6[6].m128i_i8[10];
          v141.m128i_i64[0] = v144;
          v141.m128i_i64[1] = v30;
          *(_QWORD *)v142 = v31;
          v46 = *(__m128i *)v32;
          v47 = *((_OWORD *)v32 + 1);
          *(_OWORD *)&v142[40] = *((_OWORD *)v32 + 2);
          *(_OWORD *)&v142[24] = v47;
          *(__m128i *)&v142[8] = v46;
          *(_QWORD *)&v142[72] = *((_QWORD *)v117 + 2);
          *(_OWORD *)&v142[56] = *(_OWORD *)v117;
          BYTE8(v143) = v44->m128i_i8[8];
          *(_QWORD *)&v143 = v44->m128i_i64[0];
          BYTE9(v143) = v146;
          HIWORD(v143) = *((_WORD *)v45 + 2);
          *(_DWORD *)((char *)&v143 + 10) = *(_DWORD *)v45;
          v48 = v116;
          a1 = v145;
          if ( v116 == v103 )
          {
            sub_141939740(&v103);
            v35 = v104;
          }
          *(_OWORD *)(v35 + v36 + 96) = v143;
          *(_OWORD *)(v35 + v36 + 80) = *(_OWORD *)&v142[64];
          *(_OWORD *)(v35 + v36 + 64) = *(_OWORD *)&v142[48];
          v27 = _mm_loadu_si128(&v141);
          v28 = *(_OWORD *)v142;
          v29 = *(_OWORD *)&v142[16];
          *(_OWORD *)(v35 + v36 + 48) = *(_OWORD *)&v142[32];
          *(_OWORD *)(v35 + v36 + 32) = v29;
          *(_OWORD *)(v35 + v36 + 16) = v28;
          *(__m128i *)(v35 + v36) = v27;
          v105 = v48 + 1;
        }
        v26 = v118;
        v6 = v147;
        if ( v147 == (__m128i *)v118 )
        {
          m128i_i64 = v118;
          break;
        }
      }
    }
    v125.m128i_i64[1] = m128i_i64;
    sub_1401B2FF0(m128i_i64, 0x6DB6DB6DB6DB6DB7LL * ((unsigned __int64)(v26 - m128i_i64) >> 4));
    if ( v119 )
      sub_140001660(v137, 112 * v119, 8);
    v51 = v109;
    v52 = v110;
    v53 = sub_1416AE140(v50);
    v58 = v53;
    if ( *(_BYTE *)(v53 + 16) == 1 )
    {
      v59 = *(_OWORD *)v53;
    }
    else
    {
      *(_QWORD *)&v59 = sub_1416C5230(v55, v54, v56, v57);
      *(_OWORD *)v58 = v59;
      *(_BYTE *)(v58 + 16) = 1;
    }
    *(_QWORD *)v58 = v59 + 1;
    *(_OWORD *)v142 = xmmword_141A51860;
    v141 = _mm_loadu_si128((const __m128i *)&off_141A51850);
    *(_OWORD *)&v142[16] = v59;
    if ( v52 )
    {
      LOBYTE(v57) = 1;
      sub_141962910(&v141, v52, &v142[16], v57);
      v101 = 0;
      v6 = &v141;
      do
      {
        sub_1416DB410(&v120, v51 + 72 * v101);
        sub_140871180((__int64)&v141, &v120);
        ++v101;
      }
      while ( v101 != v52 );
    }
    v60 = _mm_load_si128(&v141);
    v121 = *(__m256i *)v142;
    v120 = v60;
    v61 = v106;
    HIDWORD(_RAX) = HIDWORD(v107);
    v63 = &v106[20 * v107];
    while ( v61 != v63 )
    {
      v64 = v61;
      v61 += 20;
      if ( v64[9] != -1 )
      {
        _RAX = sub_1408FEA60(v64[10], v64[11]);
        if ( v65 )
        {
          if ( v65 < 0 )
          {
            v69 = 0;
            goto LABEL_93;
          }
          v145 = a1;
          v67 = _RAX;
          v68 = v65;
          nullsub_1(v66, v65);
          v69 = 1;
          v70 = sub_140001650(v68, 1);
          if ( !v70 )
          {
            v6 = (__m128i *)v68;
LABEL_93:
            sub_14196B2DB(v69, v6);
          }
          v6 = (__m128i *)v70;
          sub_1419234B0(v70, v67, v68);
          v141.m128i_i64[0] = v68;
          v141.m128i_i64[1] = (__int64)v6;
          *(_QWORD *)v142 = v68;
          _RAX = sub_140871180((__int64)&v120, &v141);
          a1 = v145;
          if ( !(_BYTE)_RAX )
          {
            nullsub_1(v72, v71);
            v147 = (__m128i *)v68;
            v73 = sub_140001650(v68, 1);
            if ( !v73 )
              sub_14196B2DB(1, v147);
            v144 = v73;
            sub_1419234B0(v73, v67, v147);
            if ( v64[12] == -1 )
              v75 = 0;
            else
              v75 = sub_1408FEA60(v64[13], v64[14]);
            v76 = v67;
            v77 = v68;
            if ( v75 != 0 && v74 != 0 )
            {
              v77 = v74;
              v76 = v75;
            }
            v78 = v146;
            if ( v77 < 0 )
            {
              v79 = 0;
              goto LABEL_105;
            }
            v146 = v76;
            if ( v77 )
            {
              nullsub_1(v76, v78);
              v79 = 1;
              v80 = sub_140001650(v77, 1);
              if ( !v80 )
              {
                v78 = v77;
LABEL_105:
                sub_14196B2DB(v79, v78);
              }
              v81 = v80;
              sub_1419234B0(v80, v146, v77);
              a1 = v145;
            }
            else
            {
              v81 = 1;
            }
            v141.m128i_i64[0] = v68;
            v141.m128i_i64[1] = v144;
            *(_QWORD *)v142 = v68;
            *(_QWORD *)&v142[8] = v77;
            v146 = v81;
            *(_QWORD *)&v142[16] = v81;
            *(_QWORD *)&v142[24] = v77;
            *(_QWORD *)&v142[32] = 0;
            *(_QWORD *)&v142[40] = 1;
            *(_QWORD *)&v142[48] = 0;
            v82 = v110;
            if ( v110 == v108 )
              sub_141939DD0(&v108);
            _RAX = v109;
            v83 = 9 * v82;
            *(_QWORD *)(v109 + 8 * v83 + 64) = *(_QWORD *)&v142[48];
            v84 = _mm_loadu_si128(&v141);
            v85 = *(_OWORD *)v142;
            v86 = *(_OWORD *)&v142[16];
            *(_OWORD *)(_RAX + 8 * v83 + 48) = *(_OWORD *)&v142[32];
            *(_OWORD *)(_RAX + 8 * v83 + 32) = v86;
            *(_OWORD *)(_RAX + 8 * v83 + 16) = v85;
            *(__m128i *)(_RAX + 8 * v83) = v84;
            v110 = v82 + 1;
          }
        }
      }
    }
    v87 = v120.m128i_i64[1];
    if ( v120.m128i_i64[1] )
    {
      v88 = v121.m256i_i64[1];
      if ( v121.m256i_i64[1] )
      {
        v89 = v120.m128i_i64[0];
        v90 = (const __m128i *)(v120.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v120.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              si128 = _mm_load_si128(v90);
              v89 -= 384;
              ++v90;
              _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v93 = -3 * _RAX;
          v94 = *(_QWORD *)(v89 + 8 * v93 - 24);
          if ( v94 )
            sub_140001660(*(_QWORD *)(v89 + 8 * v93 - 16), v94, 1);
          --v88;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v88 );
      }
      v95 = (24 * v87 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v96 = v95 + v87 + 17;
      if ( v96 )
        sub_140001660(v120.m128i_i64[0] - v95, v96, 16);
    }
    sub_1408DCE20(&v103);
    v49 = (__m128i *)&v103;
  }
  else
  {
    sub_1408EA710(&v141);
    sub_1408E9DB0(&v120, a2, &v141);
    if ( v120.m128i_i32[0] != -1 )
    {
      *(_OWORD *)(a1 + 88) = v124;
      *(_OWORD *)(a1 + 72) = v123;
      v7 = _mm_loadu_si128(&v120);
      v21 = *(_OWORD *)v121.m256i_i8;
      v22 = *(_OWORD *)&v121.m256i_u64[2];
      *(_OWORD *)(a1 + 56) = v122;
      *(_OWORD *)(a1 + 40) = v22;
      *(_OWORD *)(a1 + 24) = v21;
      *(__m128i *)(a1 + 8) = v7;
      *(_QWORD *)a1 = -1;
      sub_14084D1D0(&v141);
      goto LABEL_102;
    }
    v49 = &v141;
  }
  *(double *)v7.m128i_i64 = sub_1419234B0(a1, v49, 144);
LABEL_102:
  if ( v140.m128i_i64[0] )
    *(double *)v7.m128i_i64 = sub_140001660(v140.m128i_i64[1], v140.m128i_i64[0], 1);
  return *(double *)v7.m128i_i64;
}
