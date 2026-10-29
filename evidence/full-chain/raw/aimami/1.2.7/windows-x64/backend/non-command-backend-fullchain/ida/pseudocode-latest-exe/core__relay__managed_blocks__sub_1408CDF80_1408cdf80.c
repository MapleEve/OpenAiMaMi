// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408cdf80 | successor of pre-update 0x140ef9e20 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.675, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1408CDF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  __m128i si128; // xmm6
  __m128i v10; // xmm7
  __m128i v11; // xmm8
  __m128i v12; // xmm9
  __m128i v13; // xmm10
  __m128i v14; // xmm11
  __m128i v15; // xmm12
  __m128i v16; // xmm13
  __int64 v17; // r14
  char v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // r14
  int v32; // eax
  int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rsi
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rsi
  __int64 v58; // rbx
  char v59; // al
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rsi
  __int64 v67; // rax
  __int128 v68; // xmm0
  __m128i v69; // xmm1
  __int64 v70; // rsi
  __int64 v71; // rbx
  _QWORD *v72; // r12
  unsigned __int64 v73; // rbx
  __m128i v74; // xmm0
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rcx
  __m128i v78; // xmm0
  __m128i v79; // xmm1
  __int64 v80; // rdx
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rsi
  __m128i v95; // xmm1
  __int64 v96; // rax
  __int64 v97; // rcx
  __m128i v98; // xmm0
  __m128i v99; // xmm1
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  __int64 v112; // rcx
  double result; // xmm0_8
  __int64 v114; // rsi
  __int64 v115; // rdi
  _QWORD *v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rcx
  _BYTE v121[48]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v122; // [rsp+60h] [rbp-20h]
  __int64 v123; // [rsp+68h] [rbp-18h]
  __int64 v124; // [rsp+70h] [rbp-10h]
  __int64 v125; // [rsp+78h] [rbp-8h]
  char v126; // [rsp+80h] [rbp+0h]
  __int16 v127; // [rsp+88h] [rbp+8h]
  __int64 v128; // [rsp+90h] [rbp+10h]
  __int64 v129; // [rsp+98h] [rbp+18h]
  __int64 v130; // [rsp+A0h] [rbp+20h]
  __m128i v131; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v132; // [rsp+B8h] [rbp+38h]
  _BYTE v133[24]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v134[24]; // [rsp+D8h] [rbp+58h]
  __int128 v135; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v136; // [rsp+108h] [rbp+88h] BYREF
  __int128 v137; // [rsp+118h] [rbp+98h]
  __int64 v138; // [rsp+128h] [rbp+A8h]
  __int64 v139; // [rsp+130h] [rbp+B0h]
  __int64 v140; // [rsp+138h] [rbp+B8h]
  _BYTE v141[24]; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v142; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v143; // [rsp+168h] [rbp+E8h]
  __int64 v144; // [rsp+170h] [rbp+F0h]
  char v145; // [rsp+17Fh] [rbp+FFh] BYREF
  __int64 v146; // [rsp+180h] [rbp+100h] BYREF
  __int64 v147; // [rsp+188h] [rbp+108h]
  __int64 v148; // [rsp+190h] [rbp+110h]
  __int64 v149; // [rsp+198h] [rbp+118h]
  char v150; // [rsp+1A7h] [rbp+127h]
  __int64 v151; // [rsp+1A8h] [rbp+128h]

  v151 = -2;
  if ( a4 < 0 )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v128 = a1;
  v129 = a2;
  if ( a4 )
  {
    v6 = a3;
    nullsub_1(a1, a2);
    v5 = 1;
    v7 = sub_140001650(a4, 1);
    if ( !v7 )
LABEL_3:
      sub_14196B2DB(v5, a4);
    v8 = v7;
    a3 = v6;
  }
  else
  {
    v8 = 1;
  }
  v146 = a4;
  v147 = v8;
  v148 = 0;
  *(_QWORD *)&v135 = 0;
  *((_QWORD *)&v135 + 1) = 8;
  v136 = 0;
  v137 = 8u;
  v145 = 2;
  *(_QWORD *)v141 = -1;
  *(_OWORD *)&v121[16] = 0;
  *(_QWORD *)v121 = a3;
  *(_QWORD *)&v121[8] = a4;
  *(_QWORD *)&v121[32] = a4;
  *(_QWORD *)&v121[40] = a3;
  v122 = a4;
  v123 = 0;
  v124 = a4;
  v125 = 0xA0000000ALL;
  v126 = 1;
  v127 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A50670);
  v10 = _mm_cvtsi32_si128(0x6E6Fu);
  v11 = _mm_load_si128((const __m128i *)&xmmword_141A50650);
  v12 = _mm_load_si128((const __m128i *)&xmmword_141A50660);
  v13 = _mm_loadl_epi64((const __m128i *)&qword_141A50630);
  v14 = _mm_load_si128((const __m128i *)&xmmword_141A50640);
  v15 = _mm_load_si128((const __m128i *)&xmmword_141A505A0);
  v16 = _mm_load_si128((const __m128i *)&xmmword_141A505B0);
  v17 = 0;
LABEL_9:
  LODWORD(v144) = 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = sub_140867020(v121);
    v20 = v19;
    v149 = v21;
    if ( !v19 )
      break;
    v22 = v149;
    v23 = sub_1408FEA60(v19, v149);
    v25 = v24;
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v145, v20, v22) )
    {
      switch ( v25 )
      {
        case 30LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v23 + 14)), v15),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v23), v16))) == 0xFFFF )
            goto LABEL_23;
          goto LABEL_30;
        case 36LL:
          if ( !(unsigned int)sub_141923B40(v23, aAimamiRelayMan, 36) )
            goto LABEL_23;
          goto LABEL_30;
        case 39LL:
          if ( (unsigned int)sub_141923B40(v23, &xmmword_141A54794, 39) )
            goto LABEL_30;
LABEL_23:
          v29 = v146;
          v30 = v149;
          if ( v149 > (unsigned __int64)(v146 - v17) )
          {
            sub_141939070((unsigned int)&v146, v17, v149, 1, 1);
            v8 = v147;
            v17 = v148;
          }
          else if ( !v149 )
          {
            goto LABEL_26;
          }
          sub_1419234B0(v17 + v8, v20, v30);
          v29 = v146;
LABEL_26:
          v31 = v30 + v17;
          v148 = v31;
          if ( v29 == v31 )
            sub_141939070((unsigned int)&v146, v29, 1, 1, 1);
          v8 = v147;
          *(_BYTE *)(v147 + v31) = 10;
          v18 = 0;
          goto LABEL_56;
        case 55LL:
          if ( (unsigned int)sub_141923B40(v23, &xmmword_141A542EF, 55) )
            goto LABEL_30;
          goto LABEL_40;
        case 60LL:
          if ( !(unsigned int)sub_141923B40(v23, aAimamiRelayMan_1, 60) )
            goto LABEL_40;
          goto LABEL_30;
        case 64LL:
          if ( (unsigned int)sub_141923B40(v23, &xmmword_141A544DE, 64) )
            goto LABEL_30;
LABEL_40:
          v34 = *(_QWORD *)v141;
          *(_QWORD *)v141 = -1;
          v35 = v149;
          if ( v34 != -1 )
          {
            *(_QWORD *)v133 = v34;
            *(_QWORD *)&v134[16] = v143;
            *(__m128i *)v134 = v142;
            *(_OWORD *)&v133[8] = *(_OWORD *)&v141[8];
            v36 = *((_QWORD *)&v137 + 1);
            if ( *((_QWORD *)&v137 + 1) == *((_QWORD *)&v136 + 1) )
              sub_1419396D0((char *)&v136 + 8);
            v37 = v137;
            v38 = 48 * v36;
            v39 = _mm_loadu_si128((const __m128i *)v133);
            v40 = _mm_loadu_si128((const __m128i *)&v133[16]);
            *(_OWORD *)(v137 + v38 + 32) = *(_OWORD *)&v134[8];
            *(__m128i *)(v37 + v38 + 16) = v40;
            *(__m128i *)(v37 + v38) = v39;
            *((_QWORD *)&v137 + 1) = v36 + 1;
          }
          v41 = v146;
          if ( v35 > v146 - v17 )
          {
            sub_141939070((unsigned int)&v146, v17, v35, 1, 1);
            v8 = v147;
            v17 = v148;
          }
          else if ( !v35 )
          {
            goto LABEL_47;
          }
          sub_1419234B0(v17 + v8, v20, v35);
          v41 = v146;
LABEL_47:
          v42 = v35 + v17;
          v148 = v42;
          if ( v41 == v42 )
            sub_141939070((unsigned int)&v146, v41, 1, 1, 1);
          v8 = v147;
          *(_BYTE *)(v147 + v42) = 10;
          v17 = v42 + 1;
          v148 = v17;
          v18 = 1;
          LODWORD(v144) = 0;
          continue;
        default:
LABEL_30:
          if ( (v18 & 1) != 0 )
            goto LABEL_50;
          v28 = v149;
          if ( v25 && *(_BYTE *)v23 == 91 && *(_BYTE *)(v23 + v25 - 1) == 93 )
          {
            if ( v25 == 1 || *(char *)(v23 + 1) <= -65 )
              sub_14196B4F0(v23, v25, 1, v25 - 1, (__int64)&off_141A496C8);
            v57 = v23 + 1;
            v58 = v25 - 2;
            sub_1408CDE80(&v131, v57, v58);
            v150 = 1;
            v59 = sub_1408D03C0(v57, v58);
            v61 = *(_QWORD *)v141;
            if ( v59 )
            {
              if ( *(_QWORD *)v141 == -1 )
                goto LABEL_110;
              v150 = 1;
              LODWORD(v62) = sub_1408CC890(*(_QWORD *)&v141[8], *(_QWORD *)&v141[16], v131.m128i_i64[1], v132);
              v63 = v149;
              LOBYTE(v57) = 1;
              if ( (_BYTE)v62 )
                goto LABEL_112;
              v64 = *(_QWORD *)v141;
              *(_QWORD *)v141 = -1;
              if ( v64 == -1 )
              {
LABEL_110:
                *(_QWORD *)&v133[16] = v132;
                *(__m128i *)v133 = _mm_loadu_si128(&v131);
                v63 = v149;
                goto LABEL_111;
              }
              *(_QWORD *)v133 = v64;
              *(_QWORD *)&v134[16] = v143;
              v65 = _mm_loadu_si128((const __m128i *)&v141[8]);
              *(__m128i *)v134 = _mm_loadu_si128(&v142);
              *(__m128i *)&v133[8] = v65;
              v66 = *((_QWORD *)&v137 + 1);
              if ( *((_QWORD *)&v137 + 1) == *((_QWORD *)&v136 + 1) )
                sub_1419396D0((char *)&v136 + 8);
              v67 = v137;
              v61 = 48 * v66;
              v68 = *(_OWORD *)v133;
              v69 = _mm_loadu_si128((const __m128i *)&v133[16]);
              *(_OWORD *)(v137 + v61 + 32) = *(_OWORD *)&v134[8];
              *(__m128i *)(v67 + v61 + 16) = v69;
              *(_OWORD *)(v67 + v61) = v68;
              *((_QWORD *)&v137 + 1) = v66 + 1;
              v60 = *(_QWORD *)v141;
              *(_QWORD *)&v133[16] = v132;
              *(__m128i *)v133 = _mm_loadu_si128(&v131);
              v63 = v149;
              if ( *(_QWORD *)v141 != -1 )
              {
                if ( *(_QWORD *)v141 )
                  sub_140001660(*(_QWORD *)&v141[8], *(_QWORD *)v141, 1);
                v70 = v142.m128i_i64[1];
                v71 = v143;
                if ( v143 )
                {
                  v72 = (_QWORD *)(v142.m128i_i64[1] + 8);
                  do
                  {
                    v60 = *(v72 - 1);
                    if ( v60 )
                      sub_140001660(*v72, v60, 1);
                    v72 += 3;
                    --v71;
                  }
                  while ( v71 );
                }
                if ( v142.m128i_i64[0] )
                  sub_140001660(v70, 24 * v142.m128i_i64[0], 8);
              }
LABEL_111:
              LODWORD(v62) = *(_DWORD *)&v133[16];
              *(_QWORD *)&v141[16] = *(_QWORD *)&v133[16];
              *(__m128i *)v141 = _mm_load_si128((const __m128i *)v133);
              v142.m128i_i64[0] = 0;
              v142.m128i_i64[1] = 8;
              v143 = 0;
              LODWORD(v57) = 0;
LABEL_112:
              if ( *(_QWORD *)v141 != -1 )
              {
                if ( v63 < 0 )
                {
                  v120 = 0;
                  goto LABEL_175;
                }
                LODWORD(v144) = v57;
                if ( v63 )
                {
                  nullsub_1(v61, v60);
                  v82 = sub_140001650(v63, 1);
                  if ( !v82 )
                  {
                    v140 = v63;
                    v120 = 1;
LABEL_175:
                    v150 = v57;
                    sub_14196B2DB(v120, v140);
                  }
                  v140 = v82;
                  sub_1419234B0(v82, v20, v63);
                }
                else
                {
                  v140 = 1;
                }
                v57 = v143;
                if ( v143 == v142.m128i_i64[0] )
                  sub_141939F90(&v142);
                v62 = v142.m128i_i64[1];
                v83 = 3 * v57;
                v84 = v149;
                *(_QWORD *)(v142.m128i_i64[1] + 8 * v83) = v149;
                *(_QWORD *)(v62 + 8 * v83 + 8) = v140;
                *(_QWORD *)(v62 + 8 * v83 + 16) = v84;
                v143 = v57 + 1;
                LOBYTE(v57) = v144;
              }
              if ( (_BYTE)v57 )
              {
LABEL_125:
                if ( v131.m128i_i64[0] )
                  sub_140001660(v131.m128i_i64[1], v131.m128i_i64[0], 1);
              }
              LOBYTE(v62) = 1;
              LODWORD(v144) = v62;
              v18 = 0;
              continue;
            }
            *(_QWORD *)v141 = -1;
            v73 = v149;
            if ( v61 != -1 )
            {
              *(_QWORD *)v133 = v61;
              *(_QWORD *)&v134[16] = v143;
              v74 = _mm_loadu_si128((const __m128i *)&v141[8]);
              *(__m128i *)v134 = _mm_loadu_si128(&v142);
              *(__m128i *)&v133[8] = v74;
              v75 = *((_QWORD *)&v137 + 1);
              if ( *((_QWORD *)&v137 + 1) == *((_QWORD *)&v136 + 1) )
                sub_1419396D0((char *)&v136 + 8);
              v76 = v137;
              v77 = 48 * v75;
              v78 = _mm_loadu_si128((const __m128i *)v133);
              v79 = _mm_loadu_si128((const __m128i *)&v133[16]);
              *(_OWORD *)(v137 + v77 + 32) = *(_OWORD *)&v134[8];
              *(__m128i *)(v76 + v77 + 16) = v79;
              *(__m128i *)(v76 + v77) = v78;
              *((_QWORD *)&v137 + 1) = v75 + 1;
            }
            v80 = v146;
            LODWORD(v62) = v146 - v17;
            if ( v73 > v146 - v17 )
            {
              v150 = 1;
              sub_141939070((unsigned int)&v146, v17, v73, 1, 1);
              v8 = v147;
              v17 = v148;
LABEL_106:
              v62 = sub_1419234B0(v17 + v8, v20, v73);
              v80 = v146;
            }
            else if ( v73 )
            {
              goto LABEL_106;
            }
            v81 = v73 + v17;
            v148 = v81;
            if ( v80 == v81 )
            {
              v150 = 1;
              v62 = sub_141939070((unsigned int)&v146, v80, 1, 1, 1);
            }
            v8 = v147;
            *(_BYTE *)(v147 + v81) = 10;
            v17 = v81 + 1;
            v148 = v17;
            goto LABEL_125;
          }
          if ( *(_QWORD *)v141 != -1 )
            goto LABEL_57;
          if ( (v144 & 1) != 0 )
            goto LABEL_75;
          sub_1408D1C90(v133, v23, v25);
          if ( *(_QWORD *)v133 == -1 )
            goto LABEL_75;
          switch ( *(_QWORD *)&v133[16] )
          {
            case 5LL:
              v32 = **(_DWORD **)&v133[8] ^ 0x65646F6D;
              v33 = *(unsigned __int8 *)(*(_QWORD *)&v133[8] + 4LL) ^ 0x6C;
              goto LABEL_64;
            case 7LL:
              v32 = **(_DWORD **)&v133[8] ^ 0x666F7270;
              v33 = *(_DWORD *)(*(_QWORD *)&v133[8] + 3LL) ^ 0x656C6966;
LABEL_64:
              if ( !(v32 | v33) )
                goto LABEL_132;
              goto LABEL_73;
            case 0xELL:
              v49 = **(_QWORD **)&v133[8] ^ 0x72705F6C65646F6DLL;
              v50 = *(_QWORD *)(*(_QWORD *)&v133[8] + 6LL);
              v51 = 0x72656469766F7270LL;
              goto LABEL_69;
            case 0xFLL:
              v49 = **(_QWORD **)&v133[8] ^ 0x625F69616E65706FLL;
              v50 = *(_QWORD *)(*(_QWORD *)&v133[8] + 7LL);
              v51 = 0x6C72755F65736162LL;
LABEL_69:
              if ( !(v49 | v51 ^ v50) )
                goto LABEL_132;
              goto LABEL_73;
            case 0x12LL:
              v47 = _mm_cmpeq_epi8(_mm_loadu_si128(*(const __m128i **)&v133[8]), si128);
              v48 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(*(_QWORD *)&v133[8] + 16LL)), v10);
              goto LABEL_72;
            case 0x16LL:
              v47 = _mm_cmpeq_epi8(_mm_loadu_si128(*(const __m128i **)&v133[8]), v12);
              v48 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)&v133[8] + 6LL)), v11);
              goto LABEL_72;
            case 0x18LL:
              v47 = _mm_cmpeq_epi8(_mm_loadu_si128(*(const __m128i **)&v133[8]), v14);
              v48 = _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(*(_QWORD *)&v133[8] + 16LL)), v13);
LABEL_72:
              if ( _mm_movemask_epi8(_mm_and_si128(v48, v47)) != 0xFFFF )
                goto LABEL_73;
LABEL_132:
              v130 = *(_QWORD *)&v133[8];
              v144 = *(_QWORD *)v133;
              if ( (unsigned __int8)sub_1408D45C0(v129, v20, v28) )
                goto LABEL_141;
              v87 = v149;
              if ( v149 < 0 )
              {
                v119 = 0;
                goto LABEL_173;
              }
              if ( v149 )
              {
                nullsub_1(v86, v85);
                v88 = sub_140001650(v87, 1);
                if ( !v88 )
                {
                  v139 = v87;
                  v119 = 1;
LABEL_173:
                  sub_14196B2DB(v119, v139);
                }
                v139 = v88;
                sub_1419234B0(v88, v20, v87);
              }
              else
              {
                v139 = 1;
              }
              v89 = v136;
              if ( (_QWORD)v136 == (_QWORD)v135 )
                sub_141939F90(&v135);
              v90 = *((_QWORD *)&v135 + 1);
              v91 = 3 * v89;
              v92 = v149;
              *(_QWORD *)(*((_QWORD *)&v135 + 1) + 8 * v91) = v149;
              *(_QWORD *)(v90 + 8 * v91 + 8) = v139;
              *(_QWORD *)(v90 + 8 * v91 + 16) = v92;
              *(_QWORD *)&v136 = v89 + 1;
LABEL_141:
              if ( v144 )
                sub_140001660(v130, v144, 1);
              break;
            default:
LABEL_73:
              if ( *(_QWORD *)v133 )
                sub_140001660(*(_QWORD *)&v133[8], *(_QWORD *)v133, 1);
              goto LABEL_75;
          }
          break;
      }
      goto LABEL_9;
    }
    if ( (v18 & 1) != 0 )
    {
LABEL_50:
      v43 = v146;
      v44 = v149;
      if ( v149 > (unsigned __int64)(v146 - v17) )
      {
        sub_141939070((unsigned int)&v146, v17, v149, 1, 1);
        v8 = v147;
        v17 = v148;
LABEL_52:
        sub_1419234B0(v17 + v8, v20, v44);
        v43 = v146;
        goto LABEL_53;
      }
      if ( v149 )
        goto LABEL_52;
LABEL_53:
      v31 = v44 + v17;
      v148 = v31;
      if ( v43 == v31 )
        sub_141939070((unsigned int)&v146, v43, 1, 1, 1);
      v8 = v147;
      *(_BYTE *)(v147 + v31) = 10;
      v18 = 1;
LABEL_56:
      v17 = v31 + 1;
      v148 = v17;
    }
    else
    {
      v28 = v149;
      if ( *(_QWORD *)v141 == -1 )
      {
LABEL_75:
        v52 = v146;
        if ( v28 > (unsigned __int64)(v146 - v17) )
        {
          sub_141939070((unsigned int)&v146, v17, v28, 1, 1);
          v8 = v147;
          v17 = v148;
        }
        else if ( !v28 )
        {
          goto LABEL_78;
        }
        sub_1419234B0(v17 + v8, v20, v28);
        v52 = v146;
LABEL_78:
        v53 = v28 + v17;
        v148 = v53;
        if ( v52 == v53 )
          sub_141939070((unsigned int)&v146, v52, 1, 1, 1);
        v8 = v147;
        *(_BYTE *)(v147 + v53) = 10;
        v17 = v53 + 1;
        v148 = v17;
        v18 = 0;
      }
      else
      {
LABEL_57:
        if ( v28 < 0 )
        {
          v118 = 0;
          goto LABEL_171;
        }
        if ( !v28 )
        {
          v138 = 1;
          v46 = v143;
          if ( v143 != v142.m128i_i64[0] )
            goto LABEL_83;
LABEL_82:
          sub_141939F90(&v142);
          goto LABEL_83;
        }
        nullsub_1(v27, v26);
        v45 = sub_140001650(v28, 1);
        if ( !v45 )
        {
          v138 = v28;
          v118 = 1;
LABEL_171:
          sub_14196B2DB(v118, v138);
        }
        v138 = v45;
        sub_1419234B0(v45, v20, v28);
        v46 = v143;
        if ( v143 == v142.m128i_i64[0] )
          goto LABEL_82;
LABEL_83:
        v54 = v142.m128i_i64[1];
        v55 = 3 * v46;
        v56 = v149;
        *(_QWORD *)(v142.m128i_i64[1] + 8 * v55) = v149;
        *(_QWORD *)(v54 + 8 * v55 + 8) = v138;
        *(_QWORD *)(v54 + 8 * v55 + 16) = v56;
        v143 = v46 + 1;
        v18 = 0;
      }
    }
  }
  v93 = *(_QWORD *)v141;
  *(_QWORD *)v141 = -1;
  v94 = *((_QWORD *)&v137 + 1);
  if ( v93 != -1 )
  {
    *(_QWORD *)v121 = v93;
    v95 = _mm_loadu_si128(&v142);
    *(__m128i *)&v121[8] = _mm_loadu_si128((const __m128i *)&v141[8]);
    *(__m128i *)&v121[24] = v95;
    *(_QWORD *)&v121[40] = v143;
    if ( *((_QWORD *)&v137 + 1) == *((_QWORD *)&v136 + 1) )
      sub_1419396D0((char *)&v136 + 8);
    v96 = v137;
    v97 = 48 * v94;
    v98 = _mm_loadu_si128((const __m128i *)v121);
    v99 = _mm_loadu_si128((const __m128i *)&v121[16]);
    *(_OWORD *)(v137 + v97 + 32) = *(_OWORD *)&v121[32];
    *(__m128i *)(v96 + v97 + 16) = v99;
    *(__m128i *)(v96 + v97) = v98;
    *((_QWORD *)&v137 + 1) = ++v94;
  }
  v100 = v137;
  v101 = v137 + 48 * v94;
  if ( (_QWORD)v137 != v101 )
  {
    do
    {
LABEL_150:
      v102 = v100 + 48;
      while ( 1 )
      {
        v103 = *(_QWORD *)(v100 + 40);
        if ( !v103 )
        {
          v100 += 48;
          if ( v102 == v101 )
            goto LABEL_157;
          goto LABEL_150;
        }
        sub_1408FEA60(
          *(_QWORD *)(*(_QWORD *)(v100 + 32) + 24 * v103 - 16),
          *(_QWORD *)(*(_QWORD *)(v100 + 32) + 24 * v103 - 8));
        if ( v104 )
          break;
        v105 = *(_QWORD *)(v100 + 40);
        if ( v105 )
        {
          v106 = v105 - 1;
          *(_QWORD *)(v100 + 40) = v106;
          v107 = *(_QWORD *)(v100 + 32);
          v108 = 3 * v106;
          v109 = *(_QWORD *)(v107 + 8 * v108);
          if ( (unsigned __int64)(v109 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(*(_QWORD *)(v107 + 8 * v108 + 8), v109, 1);
        }
      }
      v100 += 48;
    }
    while ( v102 != v101 );
  }
LABEL_157:
  sub_1408CCA30(v121, v8, v17);
  v110 = v135;
  v111 = v136;
  v112 = v128;
  *(_OWORD *)(v128 + 56) = v137;
  *(_OWORD *)(v112 + 40) = v111;
  *(_OWORD *)(v112 + 24) = v110;
  *(_QWORD *)(v112 + 16) = *(_QWORD *)&v121[16];
  result = *(double *)v121;
  *(_OWORD *)v112 = *(_OWORD *)v121;
  if ( *(_QWORD *)v141 != -1 )
  {
    if ( *(_QWORD *)v141 )
      result = sub_140001660(*(_QWORD *)&v141[8], *(_QWORD *)v141, 1);
    v114 = v142.m128i_i64[1];
    v115 = v143;
    if ( v143 )
    {
      v116 = (_QWORD *)(v142.m128i_i64[1] + 8);
      do
      {
        v117 = *(v116 - 1);
        if ( v117 )
          result = sub_140001660(*v116, v117, 1);
        v116 += 3;
        --v115;
      }
      while ( v115 );
    }
    if ( v142.m128i_i64[0] )
      result = sub_140001660(v114, 24 * v142.m128i_i64[0], 8);
  }
  if ( v146 )
    return sub_140001660(v8, v146, 1);
  return result;
}
