// win 1.2.7 latest-exe | module src/core/codex_config.rs | ea 0x140976820 | successor of pre-update 0x140ecd100 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.545, "str_ov": 0.0, "verdict": "CONFIRMED_DIFF"}
__int64 *__fastcall sub_140976820(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int128 v17; // xmm6
  __int128 v18; // xmm7
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rax
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // esi
  __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v40; // rsi
  __int64 v41; // rbx
  const __m128i *v42; // r14
  const __m128i *v43; // r15
  __m128i si128; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rsi
  bool v50; // zf
  __int64 v51; // rsi
  _QWORD *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int128 v57; // xmm6
  __int128 v58; // xmm7
  __int64 v59; // rbx
  __int64 v60; // rsi
  __int64 v61; // rbx
  __int64 v62; // rsi
  __int64 v63; // rcx
  __int128 v64; // kr20_16
  __int64 v65; // r13
  __int64 v66; // rdi
  __int128 v67; // kr40_16
  __int64 v68; // rax
  __int64 v69; // r12
  _QWORD *v70; // rbx
  __int64 v71; // rdx
  __m128i v72; // xmm0
  __int128 v73; // kr50_16
  __int64 v74; // r13
  __int64 v75; // rsi
  __int128 v76; // kr70_16
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // r12
  _QWORD *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rsi
  __int64 v85; // rax
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm2
  __int128 v90; // kr80_16
  __int64 v91; // rax
  __int64 v92; // r12
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm2
  __int64 v96; // rbx
  __int64 v97; // r15
  __int64 v98; // rsi
  __int64 v99; // r15
  __int64 v100; // rax
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  __int128 v103; // xmm2
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  unsigned __int64 v107; // r10
  __int128 v108; // xmm1
  __int128 v109; // xmm2
  char v110; // di
  char v111; // r14
  __int64 v112; // rsi
  __int64 v113; // rsi
  __int64 v114; // rsi
  __int128 v115; // xmm6
  __int128 v116; // xmm6
  __m128i v117; // xmm0
  __int64 *v118; // rcx
  __int128 v119; // xmm1
  __int128 v120; // xmm2
  __int128 v121; // xmm3
  __int128 v122; // xmm1
  __int128 v123; // xmm2
  __int128 v124; // xmm1
  __int128 v125; // xmm2
  __int64 v126; // rcx
  __int64 v127; // rsi
  __int64 v128; // [rsp+28h] [rbp-58h] BYREF
  __int64 v129; // [rsp+30h] [rbp-50h]
  __int64 v130; // [rsp+38h] [rbp-48h]
  __int64 v131; // [rsp+40h] [rbp-40h]
  __int128 v132; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v133; // [rsp+E0h] [rbp+60h]
  char v134; // [rsp+170h] [rbp+F0h]
  __m128i v135; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v136; // [rsp+188h] [rbp+108h]
  const __m128i *v137; // [rsp+190h] [rbp+110h]
  __int64 v138; // [rsp+198h] [rbp+118h]
  __int64 v139; // [rsp+1A8h] [rbp+128h]
  __m128i v140; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v141; // [rsp+1D0h] [rbp+150h]
  _BYTE v142[56]; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v143; // [rsp+218h] [rbp+198h]
  __int128 v144; // [rsp+228h] [rbp+1A8h]
  __int128 v145; // [rsp+238h] [rbp+1B8h]
  _BYTE v146[144]; // [rsp+248h] [rbp+1C8h] BYREF
  _BYTE v147[24]; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v148; // [rsp+2F0h] [rbp+270h]
  __m128i v149[4]; // [rsp+2F8h] [rbp+278h] BYREF
  unsigned __int64 v150; // [rsp+338h] [rbp+2B8h] BYREF
  __m256i v151; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v152; // [rsp+360h] [rbp+2E0h]
  __m128i v153; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v154; // [rsp+400h] [rbp+380h]
  __int128 v155; // [rsp+410h] [rbp+390h]
  __int128 v156; // [rsp+420h] [rbp+3A0h]
  _WORD v157[76]; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 v158; // [rsp+4C8h] [rbp+448h] BYREF
  __int128 v159; // [rsp+4D0h] [rbp+450h]
  _BYTE v160[72]; // [rsp+4E0h] [rbp+460h] BYREF
  _QWORD v161[2]; // [rsp+528h] [rbp+4A8h] BYREF
  __m256i v162; // [rsp+538h] [rbp+4B8h] BYREF
  __int128 v163; // [rsp+558h] [rbp+4D8h]
  __int128 v164; // [rsp+568h] [rbp+4E8h]
  __int128 v165; // [rsp+578h] [rbp+4F8h]
  __m128i v166; // [rsp+588h] [rbp+508h]
  __int64 v167; // [rsp+598h] [rbp+518h]
  __int64 v168; // [rsp+5A0h] [rbp+520h]
  __int64 v169; // [rsp+5A8h] [rbp+528h]
  _BYTE v170[192]; // [rsp+5B0h] [rbp+530h] BYREF
  __int64 v171; // [rsp+6A8h] [rbp+628h]
  unsigned __int64 v172; // [rsp+6B0h] [rbp+630h]
  __int64 v173; // [rsp+6B8h] [rbp+638h]
  __int64 *v174; // [rsp+6C0h] [rbp+640h]
  __int64 v175; // [rsp+6C8h] [rbp+648h]
  __int64 v176; // [rsp+6D0h] [rbp+650h]
  __int64 v177; // [rsp+6D8h] [rbp+658h]
  __int64 v178; // [rsp+6E0h] [rbp+660h]
  __int64 v179; // [rsp+6E8h] [rbp+668h]
  __int64 v180; // [rsp+6F0h] [rbp+670h]
  __int64 v181; // [rsp+6F8h] [rbp+678h]
  char v182; // [rsp+707h] [rbp+687h] BYREF
  __int64 v183; // [rsp+708h] [rbp+688h]
  char v184; // [rsp+714h] [rbp+694h]
  char v185; // [rsp+715h] [rbp+695h]
  char v186; // [rsp+716h] [rbp+696h]
  char v187; // [rsp+717h] [rbp+697h]
  __int64 v188; // [rsp+718h] [rbp+698h]

  v188 = -2;
  v161[0] = aUpdateMcpServe;
  v161[1] = 17;
  v178 = a2;
  v177 = a3;
  v6 = sub_1416B19D0(a2, a3);
  if ( v6 )
  {
    v170[0] = 1;
    v8 = sub_1416B9760(v170, v6, v7);
    if ( v8 )
    {
      v162.m256i_i64[0] = 2;
      v162.m256i_i64[1] = v8;
      goto LABEL_126;
    }
  }
  v9 = *(_QWORD *)(a4 + 8);
  v10 = *(_QWORD *)(a4 + 16);
  v11 = 1;
  v12 = 0;
  v174 = a1;
  v175 = a4;
  v168 = v9;
  v167 = v10;
  while ( 1 )
  {
    if ( v11 > 3 )
    {
LABEL_77:
      *(_QWORD *)v170 = v161;
      *(_QWORD *)&v170[8] = sub_140191200;
      sub_1416DAFA0(&v162.m256i_u64[1], &unk_141A57610, v170);
      v162.m256i_i64[0] = 10;
      goto LABEL_126;
    }
    v13 = v11 + 1;
    LOBYTE(v12) = v11 == 3;
    v171 = v12;
    if ( v11 == 3 )
      v13 = 3;
    v172 = v13;
    v150 = v11;
    sub_14094BE70(v170, v178, v177);
    v176 = *(_QWORD *)&v170[8];
    if ( *(_QWORD *)v170 != -1 )
    {
      v166 = *(__m128i *)&v170[80];
      v165 = *(_OWORD *)&v170[64];
      v164 = *(_OWORD *)&v170[48];
      v163 = *(_OWORD *)&v170[32];
      v162.m256i_i64[1] = v176;
      *(_OWORD *)&v162.m256i_u64[2] = *(_OWORD *)&v170[16];
      v162.m256i_i64[0] = *(_QWORD *)v170;
      goto LABEL_126;
    }
    v183 = *(_QWORD *)&v170[24];
    v181 = *(_QWORD *)&v170[16];
    sub_1411FC140(v170);
    v16 = *(_QWORD *)v170;
    if ( *(_QWORD *)v170 == 2 )
    {
      v64 = *(_OWORD *)&v170[32];
      v65 = *(_QWORD *)&v170[56];
      v66 = *(_QWORD *)&v170[72];
      v183 = *(_QWORD *)&v170[64];
      v67 = *(_OWORD *)&v170[80];
      nullsub_1(v15, v14);
      v68 = sub_140001650(25, 1);
      if ( !v68 )
        sub_14196B2DB(1, 25);
      v84 = v68;
      *(_OWORD *)(v68 + 9) = *(_OWORD *)&aInvalidCodexCo[9];
      *(__m128i *)v68 = _mm_loadu_si128((const __m128i *)aInvalidCodexCo);
      if ( (_QWORD)v64 )
        sub_140001660(*((_QWORD *)&v64 + 1), v64, 1);
      if ( (unsigned __int64)(v67 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(*((_QWORD *)&v67 + 1), v67, 1);
      a1 = v174;
      a4 = v175;
      v69 = v183;
      if ( v66 )
      {
        v70 = (_QWORD *)(v183 + 8);
        do
        {
          v71 = *(v70 - 1);
          if ( v71 )
            sub_140001660(*v70, v71, 1);
          v70 += 3;
          --v66;
        }
        while ( v66 );
      }
      if ( v65 )
        sub_140001660(v69, 24 * v65, 8);
      v24 = 9;
      v85 = 25;
      v83 = 25;
      v9 = v168;
      goto LABEL_92;
    }
    v17 = *(_OWORD *)&v170[24];
    sub_1419234B0(&v153, &v170[40], 208);
    v18 = *(_OWORD *)&v170[8];
    v19 = _mm_loadu_si128(&v153);
    v145 = v156;
    v144 = v155;
    v143 = v154;
    *(__m128i *)&v142[40] = v19;
    sub_1419234B0(v146, v157, 144);
    *(_QWORD *)v142 = v16;
    *(_OWORD *)&v142[8] = v18;
    *(_OWORD *)&v142[24] = v17;
    v20 = sub_1411FC370(v142);
    v21 = sub_1411F29A0(v20, aMcpServers, 11);
    if ( v21 )
    {
      v23 = sub_1411F0AE0(v21);
      if ( v23 )
      {
        if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v22 + 80))(v23, v9, v10) )
        {
          sub_14097C2B0((unsigned int)v147, v181, v183, v9, v10);
          v24 = *(_QWORD *)v147;
          sub_140904390(v142);
          if ( (_DWORD)v24 != -1 )
          {
            v83 = *(_QWORD *)&v147[8];
            v84 = *(_QWORD *)&v147[16];
            v85 = v148;
LABEL_92:
            v72 = _mm_loadu_si128(v149);
            *(__m128i *)&v160[56] = v149[3];
            *(__m128i *)&v160[40] = v149[2];
            *(__m128i *)&v160[24] = v149[1];
            *(__m128i *)&v160[8] = v72;
            *(_QWORD *)&v159 = v83;
            *((_QWORD *)&v159 + 1) = v84;
            *(_QWORD *)v160 = v85;
LABEL_109:
            v163 = *(_OWORD *)&v160[8];
            v164 = *(_OWORD *)&v160[24];
            v165 = *(_OWORD *)&v160[40];
            v166 = _mm_loadu_si128((const __m128i *)&v160[56]);
            *(_OWORD *)&v162.m256i_u64[1] = v159;
            v162.m256i_i64[3] = *(_QWORD *)v160;
            v162.m256i_i64[0] = v24;
            goto LABEL_123;
          }
          goto LABEL_51;
        }
      }
    }
    v25 = sub_1411FC370(v142);
    v26 = (_DWORD *)sub_1411F29A0(v25, aMcpServers, 11);
    if ( !v26 || *v26 >= 2u )
    {
      sub_140978C90(&v135, v181, v183);
      v141 = v136;
      v140 = _mm_loadu_si128(&v135);
      v185 = 1;
      sub_1411F88F0(v170);
      sub_1411F25A0(&v132);
      v134 = 1;
      v184 = 1;
      sub_1411F25A0(&v128);
      v187 = 1;
      v186 = 1;
      sub_14097BAB0(&v128, &off_141A59678, a4);
      sub_1419234B0(&v153.m128i_u64[1], &v128, 168);
      v153.m128i_i64[0] = 10;
      v187 = 1;
      v186 = 0;
      sub_1411F2B60((unsigned int)&v151, (unsigned int)&v132, v9, v10, (__int64)&v153);
      if ( v151.m256i_i32[0] != -1 )
      {
        v187 = 1;
        v186 = 0;
        sub_140903FF0(&v151);
      }
      v187 = 1;
      v186 = 0;
      v34 = sub_1411FC820(v170);
      sub_1419234B0(&v153.m128i_u64[1], &v132, 168);
      v153.m128i_i64[0] = 10;
      v187 = 0;
      v186 = 0;
      sub_1411F2B60((unsigned int)&v151, v34, (unsigned int)aMcpServers, 11, (__int64)&v153);
      if ( v151.m256i_i32[0] != -1 )
      {
        v187 = 0;
        v186 = 0;
        sub_140903FF0(&v151);
      }
      v151.m256i_i64[0] = 0;
      *(_OWORD *)&v151.m256i_u64[1] = 1u;
      *(_QWORD *)&v154 = 1610612768;
      v153.m128i_i64[0] = (__int64)&v151;
      v153.m128i_i64[1] = (__int64)&off_141A66E10;
      if ( (unsigned __int8)sub_1411FC940(v170, &v153) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_5,
          55,
          (unsigned int)&v182,
          (unsigned int)&unk_141A5A890,
          (__int64)&off_141A66EC8);
      v180 = v151.m256i_i64[0];
      v153.m128i_i64[0] = 0;
      v153.m128i_i64[1] = v151.m256i_i64[2];
      v179 = v151.m256i_i64[1];
      v154 = *(_OWORD *)&v151.m256i_u64[1];
      *(_QWORD *)&v155 = 0;
      *((_QWORD *)&v155 + 1) = v151.m256i_i64[2];
      *(_QWORD *)&v156 = 0xA0000000ALL;
      BYTE8(v156) = 1;
      v157[0] = 0;
      sub_14020A740(&v151, &v153);
      sub_140904390(v170);
      if ( v180 )
        sub_140001660(v179, v180, 1);
      v185 = 0;
      sub_140972BA0(&v153, &v140, &v151);
      v35 = v153.m128i_i64[1];
      v36 = v154;
      sub_1406C5480((unsigned int)v170, v153.m128i_i32[2], v154, (unsigned int)asc_141A58D88, 1);
      v37 = *(_QWORD *)&v170[16];
      v151.m256i_i64[2] = *(_QWORD *)&v170[16];
      *(__m128i *)v151.m256i_i8 = _mm_loadu_si128((const __m128i *)v170);
      if ( *(_QWORD *)&v170[16] )
      {
        v38 = v151.m256i_i64[1];
        if ( *(_BYTE *)(v151.m256i_i64[1] + *(_QWORD *)&v170[16] - 1) != 10 )
        {
          if ( v151.m256i_i64[0] == *(_QWORD *)&v170[16] )
          {
            sub_141939070((unsigned int)&v151, *(_DWORD *)&v170[16], 1, 1, 1);
            v38 = v151.m256i_i64[1];
          }
          *(_BYTE *)(v38 + v37) = 10;
          v151.m256i_i64[2] = v37 + 1;
        }
      }
      HIDWORD(_RAX) = v151.m256i_i32[5];
      v148 = v151.m256i_i64[2];
      *(__m128i *)&v147[8] = _mm_load_si128((const __m128i *)&v151);
      v40 = v138;
      if ( v138 )
      {
        v41 = v139;
        if ( v139 )
        {
          v42 = v137;
          v43 = v137 + 1;
          _EDI = ~_mm_movemask_epi8(_mm_load_si128(v137));
          do
          {
            if ( !(_WORD)_EDI )
            {
              do
              {
                si128 = _mm_load_si128(v43);
                v42 -= 40;
                ++v43;
                _EDI = _mm_movemask_epi8(si128) ^ 0xFFFF;
              }
              while ( !_EDI );
            }
            __asm { tzcnt   eax, edi }
            v46 = -5 * _RAX;
            v47 = *((_QWORD *)&v42[-2] + v46 - 1);
            if ( v47 )
              sub_140001660(v42[-2].m128i_i64[v46], v47, 1);
            --v41;
            _RAX = _EDI & (unsigned int)(_EDI - 1);
            _EDI &= _EDI - 1;
          }
          while ( v41 );
        }
        v48 = (40 * v40 + 55) & 0xFFFFFFFFFFFFFFF0uLL;
        v49 = v48 + v40;
        v50 = v49 == -17;
        v51 = v49 + 17;
        a1 = v174;
        a4 = v175;
        v10 = v167;
        if ( !v50 )
          sub_140001660((char *)v137 - v48, v51, 16);
      }
      sub_140904390(v142);
      if ( v36 )
      {
        v52 = (_QWORD *)(v35 + 8);
        do
        {
          v53 = *(v52 - 1);
          if ( v53 )
            sub_140001660(*v52, v53, 1);
          v52 += 3;
          --v36;
        }
        while ( v36 );
      }
      if ( v153.m128i_i64[0] )
        sub_140001660(v35, 24 * v153.m128i_i64[0], 8);
      v9 = v168;
LABEL_51:
      v180 = *(_QWORD *)&v147[8];
      v33 = *(_QWORD *)&v147[16];
      goto LABEL_52;
    }
    if ( v183 < 0 )
    {
      v63 = 0;
      goto LABEL_76;
    }
    v29 = a4;
    v30 = v181;
    if ( !v183 )
    {
      v33 = 1;
      v169 = 1;
      goto LABEL_74;
    }
    nullsub_1(v28, v27);
    v31 = v183;
    v32 = sub_140001650(v183, 1);
    if ( !v32 )
    {
      v169 = v31;
      v63 = 1;
LABEL_76:
      sub_14196B2DB(v63, v169);
    }
    v33 = v32;
    sub_1419234B0(v32, v30, v31);
    v169 = v33;
LABEL_74:
    sub_140904390(v142);
    a4 = v29;
    v180 = v183;
LABEL_52:
    v179 = v33;
    sub_1411FC140(v170);
    v56 = *(_QWORD *)v170;
    if ( *(_QWORD *)v170 == 2 )
    {
      v73 = *(_OWORD *)&v170[32];
      v74 = *(_QWORD *)&v170[56];
      v75 = *(_QWORD *)&v170[72];
      v183 = *(_QWORD *)&v170[64];
      v76 = *(_OWORD *)&v170[80];
      nullsub_1(v55, v54);
      v77 = sub_140001650(25, 1);
      if ( !v77 )
        sub_14196B2DB(1, 25);
      v78 = v77;
      *(_OWORD *)(v77 + 9) = *(_OWORD *)&aInvalidCodexCo[9];
      *(__m128i *)v77 = _mm_loadu_si128((const __m128i *)aInvalidCodexCo);
      if ( (_QWORD)v73 )
        sub_140001660(*((_QWORD *)&v73 + 1), v73, 1);
      if ( (unsigned __int64)(v76 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(*((_QWORD *)&v76 + 1), v76, 1);
      a1 = v174;
      a4 = v175;
      v79 = v183;
      if ( v75 )
      {
        v80 = (_QWORD *)(v183 + 8);
        do
        {
          v81 = *(v80 - 1);
          if ( v81 )
            sub_140001660(*v80, v81, 1);
          v80 += 3;
          --v75;
        }
        while ( v75 );
      }
      if ( v74 )
        sub_140001660(v79, 24 * v74, 8);
      *(_QWORD *)&v159 = 25;
      *((_QWORD *)&v159 + 1) = v78;
      *(_QWORD *)v160 = 25;
      v24 = 9;
      v9 = v168;
      goto LABEL_107;
    }
    v57 = *(_OWORD *)&v170[24];
    sub_1419234B0(&v153, &v170[40], 208);
    v58 = *(_OWORD *)&v170[8];
    v145 = v156;
    v144 = v155;
    v143 = v154;
    *(__m128i *)&v142[40] = v153;
    sub_1419234B0(v146, v157, 144);
    *(_QWORD *)v142 = v56;
    *(_OWORD *)&v142[8] = v58;
    *(_OWORD *)&v142[24] = v57;
    sub_14097BFE0((__int64)v170, (__int64)v142, v9, v10);
    v24 = *(_QWORD *)v170;
    if ( *(_QWORD *)v170 != -1 )
    {
      *(_QWORD *)&v160[64] = *(_QWORD *)&v170[88];
      *(_OWORD *)&v160[48] = *(_OWORD *)&v170[72];
      *(_OWORD *)&v160[32] = *(_OWORD *)&v170[56];
      *(_OWORD *)&v160[16] = *(_OWORD *)&v170[40];
      *(_OWORD *)v160 = *(_OWORD *)&v170[24];
      v159 = *(_OWORD *)&v170[8];
      sub_140904390(v142);
LABEL_107:
      if ( v180 )
        sub_140001660(v179, v180, 1);
      goto LABEL_109;
    }
    sub_14097BAB0(*(_QWORD *)&v170[8], *(_QWORD *)&v170[16], a4);
    v153.m128i_i64[0] = 0;
    v153.m128i_i64[1] = 1;
    *(_QWORD *)&v154 = 0;
    *(_QWORD *)&v170[16] = 1610612768;
    *(_QWORD *)v170 = &v153;
    *(_QWORD *)&v170[8] = &off_141A66E10;
    if ( (unsigned __int8)sub_1411FC940(v142, v170) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_5,
        55,
        (unsigned int)&v182,
        (unsigned int)&unk_141A5A890,
        (__int64)&off_141A66EC8);
    v151.m256i_i64[2] = v154;
    *(__m128i *)v151.m256i_i8 = _mm_loadu_si128(&v153);
    sub_14097A580(&v158, v181, v183, &v151);
    sub_140904390(v142);
    if ( v180 )
      sub_140001660(v179, v180, 1);
    v24 = v158;
    if ( v158 != -1 )
      goto LABEL_109;
    v59 = v159;
    v60 = *(_QWORD *)v160;
    v173 = *((_QWORD *)&v159 + 1);
    if ( *(_QWORD *)v160 == v183 && !(unsigned int)sub_141923B40(*((_QWORD *)&v159 + 1), v181, v183) )
      break;
    v179 = v59;
    sub_14094BE70(v170, v178, v177);
    v61 = *(_QWORD *)&v170[8];
    v24 = *(_QWORD *)v170;
    v180 = *(_QWORD *)&v170[16];
    if ( *(_QWORD *)v170 != -1 )
    {
      v166 = *(__m128i *)&v170[80];
      v165 = *(_OWORD *)&v170[64];
      v164 = *(_OWORD *)&v170[48];
      v163 = *(_OWORD *)&v170[32];
      *(_OWORD *)&v162.m256i_u64[2] = __PAIR128__(*(unsigned __int64 *)&v170[24], v180);
      *(_OWORD *)v162.m256i_i8 = *(_OWORD *)v170;
LABEL_120:
      v59 = v179;
      goto LABEL_121;
    }
    if ( *(_QWORD *)&v170[24] == v183 && !(unsigned int)sub_141923B40(v180, v181, v183) )
    {
      v183 = v61;
      if ( (sub_1407C8880(v178, v177, v173, v60) & 1) != 0 )
      {
        v151.m256i_i64[0] = v82;
        *(_QWORD *)v170 = v161;
        *(_QWORD *)&v170[8] = sub_140191200;
        *(_QWORD *)&v170[16] = &v151;
        *(_QWORD *)&v170[24] = sub_1416EA080;
        sub_1416DAFA0(v142, &unk_141A58DF8, v170);
        *(__m128i *)v170 = _mm_loadu_si128((const __m128i *)v142);
        *(_QWORD *)&v170[16] = *(_QWORD *)&v142[16];
        if ( (v151.m256i_i8[0] & 3u) - 2 >= 2 && (v151.m256i_i8[0] & 3) != 0 )
        {
          v153.m128i_i64[1] = v151.m256i_i64[0] - 1;
          v153.m128i_i8[0] = 3;
          sub_1416EBAD0(&v153.m128i_u64[1]);
        }
        *(__m128i *)&v162.m256i_u64[1] = _mm_load_si128((const __m128i *)v170);
        v162.m256i_i64[3] = *(_QWORD *)&v170[16];
        v24 = 10;
      }
      else
      {
        v24 = -1;
        sub_1407B9160(v82);
      }
      v162.m256i_i64[0] = v24;
      if ( v183 )
        sub_140001660(v180, v183, 1);
      goto LABEL_120;
    }
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v183 = v61;
      *(_QWORD *)v142 = v161;
      *(_QWORD *)&v142[8] = sub_140191200;
      *(_QWORD *)&v142[16] = &v150;
      *(_QWORD *)&v142[24] = sub_1416EBAE0;
      *(_QWORD *)&v142[32] = &unk_141A57658;
      *(_QWORD *)&v142[40] = sub_1416EBAE0;
      *(_QWORD *)&v170[48] = 2;
      *(_QWORD *)&v170[56] = aCodexmateLibCo_35;
      *(_QWORD *)&v170[64] = 33;
      *(_QWORD *)&v170[80] = &unk_141A57660;
      *(_QWORD *)&v170[88] = v142;
      *(_QWORD *)v170 = 0;
      *(_QWORD *)&v170[8] = aCodexmateLibCo_35;
      *(_OWORD *)&v170[16] = 0x21u;
      *(_QWORD *)&v170[32] = aSrcCoreCodexCo;
      *(_QWORD *)&v170[40] = 24;
      *(_QWORD *)&v170[72] = 0x2600000001LL;
      sub_141503E20(&v182, v170);
      v61 = v183;
    }
    if ( v61 )
      sub_140001660(v180, v61, 1);
    v62 = v181;
    if ( v179 )
      sub_140001660(v173, v179, 1);
    if ( v176 )
      sub_140001660(v62, v176, 1);
    v11 = v172;
    v12 = v171;
    if ( (v171 & 1) != 0 )
      goto LABEL_77;
  }
  v162.m256i_i64[0] = -1;
  v24 = -1;
LABEL_121:
  if ( v59 )
    sub_140001660(v173, v59, 1);
LABEL_123:
  if ( v176 )
    sub_140001660(v181, v176, 1);
  if ( v24 != -1 )
  {
LABEL_126:
    *(__m128i *)(a1 + 11) = v166;
    *(_OWORD *)(a1 + 9) = v165;
    v86 = *(_OWORD *)v162.m256i_i8;
    v87 = *(_OWORD *)&v162.m256i_u64[2];
    v88 = v163;
    *(_OWORD *)(a1 + 7) = v164;
    *(_OWORD *)(a1 + 5) = v88;
    *(_OWORD *)(a1 + 3) = v87;
    *(_OWORD *)(a1 + 1) = v86;
    goto LABEL_127;
  }
  sub_140973080(v170, v178, v177);
  v90 = *(_OWORD *)v170;
  v91 = *(_QWORD *)&v170[24];
  v92 = *(_QWORD *)&v170[16];
  if ( *(_QWORD *)v170 == -1 )
  {
    v96 = *(_QWORD *)&v170[16] + 224LL * *(_QWORD *)&v170[24];
    v128 = *(_QWORD *)&v170[16];
    v177 = *(_QWORD *)&v170[8];
    v130 = *(_QWORD *)&v170[8];
    v129 = *(_QWORD *)&v170[16];
    v131 = v96;
    v97 = *(_QWORD *)&v170[16];
    v176 = *(_QWORD *)&v170[16];
    if ( *(_QWORD *)&v170[24] )
    {
      v98 = *(_QWORD *)&v170[16];
      do
      {
        sub_1419234B0(v170, v98, 224);
        v99 = v98 + 224;
        v129 = v98 + 224;
        if ( *(_QWORD *)&v170[16] != v167 || (unsigned int)sub_141923B40(*(_QWORD *)&v170[8], v9, v167) )
        {
          sub_1401AF4B0(v170);
        }
        else
        {
          v100 = *(_QWORD *)v170;
          if ( *(_QWORD *)v170 != -1 )
          {
            v178 = v98 + 224;
            v101 = *(_OWORD *)(v98 + 8);
            v102 = *(_OWORD *)(v98 + 24);
            v103 = *(_OWORD *)(v98 + 40);
            *(_OWORD *)&v170[48] = *(_OWORD *)(v98 + 56);
            *(_OWORD *)&v170[32] = v103;
            *(_OWORD *)&v170[16] = v102;
            *(_OWORD *)v170 = v101;
            v104 = *(_QWORD *)(v98 + 72);
            v105 = *(_QWORD *)(v98 + 80);
            v97 = *(_QWORD *)(v98 + 88);
            v106 = *(_QWORD *)(v98 + 96);
            v107 = *(_QWORD *)(v98 + 104);
            v92 = *(_QWORD *)(v98 + 112);
            v155 = *(_OWORD *)(v98 + 152);
            v154 = *(_OWORD *)(v98 + 136);
            v153 = *(__m128i *)(v98 + 120);
            v108 = *(_OWORD *)(v98 + 184);
            v109 = *(_OWORD *)(v98 + 200);
            *(_OWORD *)v151.m256i_i8 = *(_OWORD *)(v98 + 168);
            *(_OWORD *)&v151.m256i_u64[2] = v108;
            v152 = v109;
            v110 = *(_BYTE *)(v98 + 216);
            v111 = *(_BYTE *)(v98 + 217);
            *(_WORD *)&v142[4] = *(_WORD *)(v98 + 222);
            *(_DWORD *)v142 = *(_DWORD *)(v98 + 218);
            goto LABEL_147;
          }
        }
        v98 += 224;
      }
      while ( v99 != v96 );
      v97 = v96;
    }
    sub_1416DB410(&v158, a4);
    v110 = *(_BYTE *)(a4 + 216);
    v112 = a4;
    v111 = *(_BYTE *)(a4 + 217);
    sub_1416DB410(v147, v112 + 24);
    v50 = *(_QWORD *)(v112 + 72) == -1;
    v178 = v97;
    if ( v50 )
    {
      v183 = -1;
    }
    else
    {
      sub_1416DB410(v170, v112 + 72);
      v171 = *(_QWORD *)&v170[8];
      v183 = *(_QWORD *)v170;
      v97 = *(_QWORD *)&v170[16];
    }
    v113 = v175;
    sub_14022C070(&v132, v175 + 48);
    if ( *(_QWORD *)(v113 + 96) == -1 )
    {
      v181 = -1;
    }
    else
    {
      sub_1416DB410(v170, v113 + 96);
      v172 = *(_QWORD *)&v170[8];
      v181 = *(_QWORD *)v170;
      v92 = *(_QWORD *)&v170[16];
    }
    v114 = v175;
    v115 = *(_OWORD *)(v175 + 152);
    sub_14018AE90(v170, v175 + 120);
    *(_OWORD *)&v170[32] = v115;
    *(_OWORD *)v142 = *(_OWORD *)v170;
    *(_OWORD *)&v142[16] = *(_OWORD *)&v170[16];
    *(__m128i *)&v142[32] = _mm_loadu_si128((const __m128i *)&v170[32]);
    v116 = *(_OWORD *)(v114 + 200);
    sub_14018AE90(v170, v114 + 168);
    v151 = *(__m256i *)v170;
    v152 = v116;
    v100 = v158;
    *(_OWORD *)v170 = v159;
    *(_OWORD *)&v170[16] = *(_OWORD *)v147;
    *(_QWORD *)&v170[32] = *(_QWORD *)&v147[16];
    *(_OWORD *)&v170[40] = v132;
    *(_QWORD *)&v170[56] = v133;
    v117 = _mm_load_si128((const __m128i *)v142);
    v155 = *(_OWORD *)&v142[32];
    v154 = *(_OWORD *)&v142[16];
    v153 = v117;
    v104 = v183;
    v105 = v171;
    v106 = v181;
    v107 = v172;
LABEL_147:
    v118 = v174;
    *v174 = v100;
    v119 = *(_OWORD *)&v170[16];
    v120 = *(_OWORD *)&v170[32];
    v121 = *(_OWORD *)&v170[48];
    *(_OWORD *)(v118 + 1) = *(_OWORD *)v170;
    *(_OWORD *)(v118 + 3) = v119;
    *(_OWORD *)(v118 + 5) = v120;
    *(_OWORD *)(v118 + 7) = v121;
    v118[9] = v104;
    v118[10] = v105;
    v118[11] = v97;
    a1 = v118;
    v118[12] = v106;
    v118[13] = v107;
    v118[14] = v92;
    v122 = v154;
    v123 = v155;
    *(__m128i *)(v118 + 15) = v153;
    *(_OWORD *)(v118 + 17) = v122;
    *(_OWORD *)(v118 + 19) = v123;
    v124 = *(_OWORD *)&v151.m256i_u64[2];
    v125 = v152;
    *(_OWORD *)(v118 + 21) = *(_OWORD *)v151.m256i_i8;
    *(_OWORD *)(v118 + 23) = v124;
    *(_OWORD *)(v118 + 25) = v125;
    *((_BYTE *)v118 + 216) = v110;
    *((_BYTE *)v118 + 217) = v111;
    *((_WORD *)v118 + 111) = *(_WORD *)&v142[4];
    *(_DWORD *)((char *)v118 + 218) = *(_DWORD *)v142;
    v126 = v178;
    v181 = 0x6DB6DB6DB6DB6DB7LL * ((unsigned __int64)(v96 - v178) >> 5);
    v183 = 0;
    while ( v181 != v183 )
    {
      ++v183;
      v127 = v126 + 224;
      sub_1401AF4B0(v126);
      v126 = v127;
    }
    if ( v177 )
      sub_140001660(v176, 224 * v177, 8);
  }
  else
  {
    v93 = *(_OWORD *)&v170[32];
    v94 = *(_OWORD *)&v170[48];
    v95 = *(_OWORD *)&v170[64];
    *(_OWORD *)(a1 + 11) = *(_OWORD *)&v170[80];
    *(_OWORD *)(a1 + 9) = v95;
    *(_OWORD *)(a1 + 7) = v94;
    *(_OWORD *)(a1 + 5) = v93;
    *(_OWORD *)(a1 + 1) = v90;
    a1[3] = v92;
    a1[4] = v91;
LABEL_127:
    *a1 = -1;
  }
  return a1;
}
