// module: codexmate_lib/core/voice/workspace
// addr: 0x1407ac750
// name: read_workspace_file
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::voice::workspace::read_workspace_file | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_workspace_file(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r14
  __m128i v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int32 v13; // edx
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int32 v18; // edx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  _QWORD *v22; // rbx
  __m128i v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // r14
  __int64 v27; // r15
  _QWORD *v28; // rsi
  __m128i v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // r13
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rdx
  __m128i *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __m128i *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rbx
  __m128i v42; // xmm0
  __int128 v43; // xmm1
  __int64 v44; // rsi
  __m128i *v45; // rdx
  __int64 i; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rbx
  __int128 v54; // rax
  __m128i v55; // xmm0
  _QWORD *v56; // r14
  _QWORD *v58; // rdi
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r13
  __int64 v63; // r15
  __int64 v64; // r12
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r13
  __int64 v72; // rdx
  __int64 v73; // r12
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rbx
  __int64 v77; // rcx
  __m128i v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rbx
  const __m128i *v84; // r14
  __m128i si128; // xmm0
  __int64 v87; // rax
  __int64 v88; // rdx
  unsigned __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r15
  __int64 v94; // rax
  __m128i v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm2
  __int64 v98; // rax
  bool v99; // zf
  __int64 v100; // rdx
  __int64 v101; // [rsp+30h] [rbp-50h] BYREF
  __int64 v102; // [rsp+38h] [rbp-48h]
  __int64 v103; // [rsp+40h] [rbp-40h]
  _QWORD *v104; // [rsp+50h] [rbp-30h]
  __int64 v105; // [rsp+58h] [rbp-28h]
  __int64 v106; // [rsp+60h] [rbp-20h] BYREF
  __int64 v107; // [rsp+68h] [rbp-18h]
  __int64 v108; // [rsp+70h] [rbp-10h]
  __m128i v109; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v110; // [rsp+D0h] [rbp+50h]
  __int64 v111; // [rsp+D8h] [rbp+58h] BYREF
  _QWORD *v112; // [rsp+E0h] [rbp+60h]
  __int64 v113; // [rsp+E8h] [rbp+68h]
  __int64 v114; // [rsp+F0h] [rbp+70h]
  _QWORD *v115; // [rsp+F8h] [rbp+78h]
  __m128i v116; // [rsp+100h] [rbp+80h] BYREF
  __m256i v117; // [rsp+110h] [rbp+90h]
  __int128 v118; // [rsp+130h] [rbp+B0h]
  __int128 v119; // [rsp+140h] [rbp+C0h]
  __int128 v120; // [rsp+150h] [rbp+D0h]
  __m128i v121; // [rsp+190h] [rbp+110h] BYREF
  __int128 v122; // [rsp+1A0h] [rbp+120h]
  __int128 v123; // [rsp+1B0h] [rbp+130h]
  __int128 v124; // [rsp+1C0h] [rbp+140h]
  __int128 v125; // [rsp+1D0h] [rbp+150h]
  __int128 v126; // [rsp+1E0h] [rbp+160h]
  __int64 v127; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v128; // [rsp+1F8h] [rbp+178h]
  __int64 v129; // [rsp+200h] [rbp+180h]
  _QWORD *v130; // [rsp+210h] [rbp+190h] BYREF
  __int64 v131; // [rsp+218h] [rbp+198h]
  _QWORD **v132; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v133; // [rsp+228h] [rbp+1A8h]
  __int64 v134; // [rsp+230h] [rbp+1B0h] BYREF
  _QWORD *v135; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v136; // [rsp+240h] [rbp+1C0h]
  __int64 v137; // [rsp+248h] [rbp+1C8h]
  __int64 v138; // [rsp+250h] [rbp+1D0h]
  __int64 v139; // [rsp+258h] [rbp+1D8h]
  __m128i v140; // [rsp+260h] [rbp+1E0h] BYREF
  _BYTE v141[80]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v142; // [rsp+2C0h] [rbp+240h]
  __int64 v143; // [rsp+2F0h] [rbp+270h]
  __int64 v144; // [rsp+2F8h] [rbp+278h]
  __int64 v145; // [rsp+300h] [rbp+280h]
  _QWORD *v146; // [rsp+308h] [rbp+288h]
  __int64 v147; // [rsp+310h] [rbp+290h]

  v147 = -2;
  result = sub_140712590(a2);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = result;
LABEL_3:
    *(_QWORD *)a1 = -1;
    return result;
  }
  v5 = *(_QWORD **)(a2 + 712);
  v6 = *(_QWORD *)(a2 + 720);
  sub_141486710(&v140, v5, v6);
  if ( v140.m128i_i32[0] == 2 )
  {
    sub_1401DD260(v140.m128i_i64[1]);
    sub_1407AECB0(&v140);
    serialize_2(&v116, a2, &v140);
    if ( v116.m128i_i32[0] == -1 )
      return sub_141684120(a1, &v140, 144);
    *(_OWORD *)(a1 + 88) = v120;
    *(_OWORD *)(a1 + 72) = v119;
    v7 = _mm_loadu_si128(&v116);
    v8 = *(_OWORD *)v117.m256i_i8;
    v9 = *(_OWORD *)&v117.m256i_u64[2];
    *(_OWORD *)(a1 + 56) = v118;
    *(_OWORD *)(a1 + 40) = v9;
    *(_OWORD *)(a1 + 24) = v8;
    *(__m128i *)(a1 + 8) = v7;
    *(_QWORD *)a1 = -1;
    return sub_1406CE470((__int64)&v140);
  }
  sub_14148D130(&v140, v5, v6);
  v10 = v140.m128i_i64[1];
  result = v140.m128i_i64[0];
  if ( v140.m128i_i64[0] == -1 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v10;
    goto LABEL_3;
  }
  v136 = v140.m128i_i64[0];
  v11 = *(_QWORD *)v141;
  v139 = v140.m128i_i64[1];
  sub_14033BC10(v140.m128i_i64[1], *(_QWORD *)v141);
  if ( !v12 )
  {
    sub_1407AECB0(&v140);
    serialize_2(&v116, a2, &v140);
    if ( v116.m128i_i32[0] != -1 )
    {
      *(_OWORD *)(a1 + 88) = v120;
      *(_OWORD *)(a1 + 72) = v119;
      v15 = _mm_loadu_si128(&v116);
      v16 = *(_OWORD *)v117.m256i_i8;
      v17 = *(_OWORD *)&v117.m256i_u64[2];
      *(_OWORD *)(a1 + 56) = v118;
      *(_OWORD *)(a1 + 40) = v17;
      *(_OWORD *)(a1 + 24) = v16;
      *(__m128i *)(a1 + 8) = v15;
      *(_QWORD *)a1 = -1;
      result = sub_1406CE470((__int64)&v140);
      goto LABEL_80;
    }
    v45 = &v140;
LABEL_79:
    result = sub_141684120(a1, v45, 144);
LABEL_80:
    v91 = v136;
    v92 = v139;
    if ( !v136 )
      return result;
    return sub_140001660(v92, v91, 1);
  }
  v140.m128i_i64[0] = v139;
  v140.m128i_i64[1] = v11;
  *(_OWORD *)v141 = 0;
  *(_QWORD *)&v141[16] = v139;
  *(_QWORD *)&v141[24] = v11;
  sub_1408A88E0(&v116, &v140);
  if ( v116.m128i_i64[0] != -1 )
  {
    sub_141684120(&v101, &v116, 144);
    v116.m128i_i32[0] = sub_141475580();
    v116.m128i_i32[1] = v13;
    sub_141475530(&v140, &v116, 3577643008LL, 27111902);
    if ( v140.m128i_i8[0] )
      v14 = 0;
    else
      v14 = v140.m128i_i64[1];
    default_templates(&v127, v14);
    v20 = v128;
    v21 = v128 + 112 * v129;
    v121.m128i_i64[0] = v128;
    v138 = v127;
    *(_QWORD *)&v122 = v127;
    *((_QWORD *)&v122 + 1) = v21;
    v137 = v128;
    if ( v129 )
    {
      v22 = (_QWORD *)v137;
      v144 = a1;
      v133 = v128 + 112 * v129;
      while ( 1 )
      {
        v20 = (__int64)(v22 + 14);
        if ( *v22 == -1 )
          break;
        v143 = *v22;
        v146 = v22 + 14;
        v26 = v22[1];
        v27 = v22[2];
        v28 = v22 + 3;
        LOBYTE(v145) = *((_BYTE *)v22 + 105);
        v29 = *(__m128i *)(v22 + 3);
        v30 = *(_OWORD *)(v22 + 5);
        *(_OWORD *)&v117.m256i_u64[2] = *(_OWORD *)(v22 + 7);
        *(_OWORD *)v117.m256i_i8 = v30;
        v116 = v29;
        v109 = _mm_loadu_si128((const __m128i *)(v22 + 9));
        v115 = v22 + 9;
        v110 = v22[11];
        v31 = v102;
        v32 = 112 * v103;
        v114 = v103;
        if ( v103 )
        {
          v33 = 0;
          while ( *(_QWORD *)(v31 + v33 + 16) != v27
               || (unsigned int)sub_1416847B0(*(_QWORD *)(v31 + v33 + 8), v26, v27) )
          {
            v33 += 112;
            if ( v32 == v33 )
              goto LABEL_38;
          }
          *(_QWORD *)v141 = v22[5];
          v140 = *(__m128i *)v28;
          v34 = *(_QWORD *)(v31 + v33 + 24);
          if ( v34 )
            sub_140001660(*(_QWORD *)(v31 + v33 + 32), v34, 1);
          v35 = (__m128i *)(v33 + v31 + 24);
          v35[1].m128i_i64[0] = *(_QWORD *)v141;
          *v35 = v140;
          v36 = *(_QWORD *)(v31 + v33 + 48);
          v21 = v133;
          v22 = v146;
          if ( v36 )
            sub_140001660(*(_QWORD *)(v31 + v33 + 56), v36, 1);
          v37 = v33 + v31 + 48;
          *(_QWORD *)(v37 + 16) = v117.m256i_i64[3];
          *(_OWORD *)v37 = *(_OWORD *)&v117.m256i_u64[1];
          *(_BYTE *)(v31 + v33 + 105) = v145;
          v38 = *(_QWORD *)(v31 + v33 + 72);
          if ( v38 )
            sub_140001660(*(_QWORD *)(v31 + v33 + 80), v38, 1);
          v39 = (__m128i *)(v33 + v31 + 72);
          v39[1].m128i_i64[0] = v110;
          *v39 = _mm_load_si128(&v109);
          *(_BYTE *)(v31 + v33 + 104) = 1;
          a1 = v144;
          if ( v143 )
            sub_140001660(v26, v143, 1);
        }
        else
        {
LABEL_38:
          v40 = v22 + 12;
          v41 = (__int64)v22 + 106;
          v140.m128i_i64[0] = v143;
          v140.m128i_i64[1] = v26;
          *(_QWORD *)v141 = v27;
          v42 = *(__m128i *)v28;
          v43 = *((_OWORD *)v28 + 1);
          *(_OWORD *)&v141[40] = *((_OWORD *)v28 + 2);
          *(_OWORD *)&v141[24] = v43;
          *(__m128i *)&v141[8] = v42;
          *(_QWORD *)&v141[72] = v115[2];
          *(_OWORD *)&v141[56] = *(_OWORD *)v115;
          BYTE8(v142) = *((_BYTE *)v40 + 8);
          *(_QWORD *)&v142 = *v40;
          BYTE9(v142) = v145;
          HIWORD(v142) = *(_WORD *)(v41 + 4);
          *(_DWORD *)((char *)&v142 + 10) = *(_DWORD *)v41;
          v44 = v114;
          if ( v114 == v101 )
          {
            sub_141689030(&v101);
            v31 = v102;
          }
          *(_OWORD *)(v31 + v32 + 96) = v142;
          *(_OWORD *)(v31 + v32 + 80) = *(_OWORD *)&v141[64];
          *(_OWORD *)(v31 + v32 + 64) = *(_OWORD *)&v141[48];
          v23 = _mm_loadu_si128(&v140);
          v24 = *(_OWORD *)v141;
          v25 = *(_OWORD *)&v141[16];
          *(_OWORD *)(v31 + v32 + 48) = *(_OWORD *)&v141[32];
          *(_OWORD *)(v31 + v32 + 32) = v25;
          *(_OWORD *)(v31 + v32 + 16) = v24;
          *(__m128i *)(v31 + v32) = v23;
          v103 = v44 + 1;
          a1 = v144;
          v21 = v133;
          v22 = v146;
        }
        if ( v22 == (_QWORD *)v21 )
        {
          v20 = v21;
          break;
        }
      }
    }
    v121.m128i_i64[1] = v20;
    i = (unsigned __int64)(v21 - v20) >> 4;
    sub_1402C8EE0(v20, 0x6DB6DB6DB6DB6DB7LL * i);
    if ( v138 )
      sub_140001660(v137, 112 * v138, 8);
    v49 = v107;
    v50 = v108;
    v51 = sub_141470CD0(v48, v47);
    v53 = v51;
    if ( *(_BYTE *)(v51 + 16) == 1 )
    {
      v54 = *(_OWORD *)v51;
    }
    else
    {
      *(_QWORD *)&v54 = sub_141486EF0();
      *(_OWORD *)v53 = v54;
      *(_BYTE *)(v53 + 16) = 1;
    }
    *(_QWORD *)v53 = v54 + 1;
    *(_OWORD *)v141 = *(&off_141786750 + 1);
    v140 = _mm_loadu_si128((const __m128i *)&off_141786750);
    *(_OWORD *)&v141[16] = v54;
    if ( v50 )
    {
      LOBYTE(v52) = 1;
      sub_1416BA580(&v140, v50, &v141[16], v52);
      for ( i = 0; i != v50; ++i )
      {
        sub_14149C500(&v116, v49 + 72 * i);
        sub_140474440(&v140, &v116);
      }
    }
    v55 = _mm_load_si128(&v140);
    v117 = *(__m256i *)v141;
    v116 = v55;
    v56 = v104;
    HIDWORD(_RAX) = HIDWORD(v105);
    v58 = &v104[20 * v105];
    while ( v56 != v58 )
    {
      v59 = v56;
      v56 += 20;
      if ( v59[9] != -1 )
      {
        _RAX = sub_14033BC10(v59[10], v59[11]);
        if ( v60 )
        {
          if ( v60 < 0 )
          {
            v64 = 0;
            goto LABEL_90;
          }
          v144 = a1;
          v62 = _RAX;
          v63 = v60;
          nullsub_1(v61);
          v64 = 1;
          v65 = sub_140001650(v63, 1);
          if ( !v65 )
          {
            i = v63;
LABEL_90:
            sub_1416C2D4B(v64, i);
          }
          i = v65;
          sub_141684120(v65, v62, v63);
          v140.m128i_i64[0] = v63;
          v140.m128i_i64[1] = i;
          *(_QWORD *)v141 = v63;
          _RAX = sub_140474440(&v116, &v140);
          a1 = v144;
          if ( !(_BYTE)_RAX )
          {
            nullsub_1(v66);
            v146 = (_QWORD *)v63;
            v67 = sub_140001650(v63, 1);
            if ( !v67 )
              sub_1416C2D4B(1, v146);
            v143 = v67;
            sub_141684120(v67, v62, v146);
            if ( v59[12] == -1 )
              v69 = 0;
            else
              v69 = sub_14033BC10(v59[13], v59[14]);
            v70 = v62;
            v71 = v63;
            if ( v69 != 0 && v68 != 0 )
            {
              v71 = v68;
              v70 = v69;
            }
            v72 = v145;
            if ( v71 < 0 )
            {
              v73 = 0;
              goto LABEL_106;
            }
            v145 = v70;
            if ( v71 )
            {
              nullsub_1(v70);
              v73 = 1;
              v74 = sub_140001650(v71, 1);
              if ( !v74 )
              {
                v72 = v71;
LABEL_106:
                sub_1416C2D4B(v73, v72);
              }
              v75 = v74;
              sub_141684120(v74, v145, v71);
              a1 = v144;
            }
            else
            {
              v75 = 1;
            }
            v140.m128i_i64[0] = v63;
            v140.m128i_i64[1] = v143;
            *(_QWORD *)v141 = v63;
            *(_QWORD *)&v141[8] = v71;
            v145 = v75;
            *(_QWORD *)&v141[16] = v75;
            *(_QWORD *)&v141[24] = v71;
            *(_QWORD *)&v141[32] = 0;
            *(_QWORD *)&v141[40] = 1;
            *(_QWORD *)&v141[48] = 0;
            v76 = v108;
            if ( v108 == v106 )
              sub_141689730(&v106);
            _RAX = v107;
            v77 = 9 * v76;
            *(_QWORD *)(v107 + 8 * v77 + 64) = *(_QWORD *)&v141[48];
            v78 = _mm_loadu_si128(&v140);
            v79 = *(_OWORD *)v141;
            v80 = *(_OWORD *)&v141[16];
            *(_OWORD *)(_RAX + 8 * v77 + 48) = *(_OWORD *)&v141[32];
            *(_OWORD *)(_RAX + 8 * v77 + 32) = v80;
            *(_OWORD *)(_RAX + 8 * v77 + 16) = v79;
            *(__m128i *)(_RAX + 8 * v77) = v78;
            v108 = v76 + 1;
          }
        }
      }
    }
    v81 = v116.m128i_i64[1];
    if ( v116.m128i_i64[1] )
    {
      v82 = v117.m256i_i64[1];
      if ( v117.m256i_i64[1] )
      {
        v83 = v116.m128i_i64[0];
        v84 = (const __m128i *)(v116.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v116.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              si128 = _mm_load_si128(v84);
              v83 -= 384;
              ++v84;
              _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v87 = -3 * _RAX;
          v88 = *(_QWORD *)(v83 + 8 * v87 - 24);
          if ( v88 )
            sub_140001660(*(_QWORD *)(v83 + 8 * v87 - 16), v88, 1);
          --v82;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v82 );
      }
      v89 = (24 * v81 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v90 = v89 + v81 + 17;
      if ( v90 )
        sub_140001660(v116.m128i_i64[0] - v89, v90, 16);
    }
    sub_1407A0EE0(&v101);
    v45 = (__m128i *)&v101;
    goto LABEL_79;
  }
  v135 = (_QWORD *)v116.m128i_i64[1];
  v132 = &v135;
  v121.m128i_i32[0] = sub_141475580();
  v121.m128i_i32[1] = v18;
  sub_141475530(&v140, &v121, 3577643008LL, 27111902);
  if ( v140.m128i_i8[0] )
    v19 = 0;
  else
    v19 = v140.m128i_i64[1];
  v121.m128i_i64[0] = v19;
  v140.m128i_i64[0] = (__int64)&v121;
  v140.m128i_i64[1] = (__int64)sub_1414AC5F0;
  sub_14149C0F0(&v111, &unk_14179054D, &v140);
  v146 = v112;
  sub_141473E20((unsigned int)&v127, (_DWORD)v5, v6, (_DWORD)v112, v113);
  if ( v111 )
    sub_140001660(v146, v111, 1);
  v93 = v129;
  v146 = (_QWORD *)v128;
  v94 = sub_141486540(v5, v6, v128, v129);
  if ( v94 )
  {
    v134 = v94;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v130 = v5;
      v131 = v6;
      v140.m128i_i64[0] = (__int64)&v130;
      v140.m128i_i64[1] = (__int64)sub_14148F3A0;
      *(_QWORD *)v141 = &v134;
      *(_QWORD *)&v141[8] = sub_141490720;
      *(_QWORD *)&v141[16] = &v132;
      *(_QWORD *)&v141[24] = sub_140678850;
      v121.m128i_i64[0] = (__int64)aCodexmateLibCo_30;
      v121.m128i_i64[1] = 37;
      *(_QWORD *)&v122 = aCodexmateLibCo_30;
      *((_QWORD *)&v122 + 1) = 37;
      *(_QWORD *)&v123 = &off_141790640;
      sub_140985BA0(&unk_1417905ED, &v140, 2, &v121);
      v94 = v134;
    }
    sub_1401DD260(v94);
  }
  else if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    v130 = v146;
    v131 = v93;
    v121.m128i_i64[0] = (__int64)&v130;
    v121.m128i_i64[1] = (__int64)sub_14148F3A0;
    *(_QWORD *)&v122 = &v132;
    *((_QWORD *)&v122 + 1) = sub_140678850;
    v140.m128i_i64[0] = (__int64)aCodexmateLibCo_30;
    v140.m128i_i64[1] = 37;
    *(_QWORD *)v141 = aCodexmateLibCo_30;
    *(_QWORD *)&v141[8] = 37;
    *(_QWORD *)&v141[16] = &off_1417905B0;
    sub_140985BA0(&unk_14179056E, &v121, 2, &v140);
  }
  if ( v127 )
    sub_140001660(v146, v127, 1);
  sub_1407AECB0(&v140);
  serialize_2(&v121, a2, &v140);
  if ( v121.m128i_i32[0] == -1 )
  {
    sub_141684120(a1, &v140, 144);
  }
  else
  {
    *(_OWORD *)(a1 + 88) = v126;
    *(_OWORD *)(a1 + 72) = v125;
    v95 = _mm_loadu_si128(&v121);
    v96 = v122;
    v97 = v123;
    *(_OWORD *)(a1 + 56) = v124;
    *(_OWORD *)(a1 + 40) = v97;
    *(_OWORD *)(a1 + 24) = v96;
    *(__m128i *)(a1 + 8) = v95;
    *(_QWORD *)a1 = -1;
    sub_1406CE470((__int64)&v140);
  }
  v98 = *v135;
  v99 = *v135 == 1;
  v146 = v135;
  if ( v99 )
  {
    sub_1401DD260(v135[1]);
  }
  else if ( !v98 )
  {
    v100 = v146[2];
    if ( v100 )
      sub_140001660(v146[1], v100, 1);
  }
  result = sub_140001660(v146, 40, 8);
  v91 = v136;
  v92 = v139;
  if ( v136 )
    return sub_140001660(v92, v91, 1);
  return result;
}