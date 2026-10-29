// win 1.2.7 latest-exe | module src/core/analytics/threads.rs | ea 0x140a83300 | successor of pre-update 0x14035e550 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_140A83300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  __m128i si128; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  int v17; // eax
  __int128 v18; // xmm6
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int8 v23; // si
  __int8 v24; // di
  __int8 v25; // di
  unsigned __int64 v26; // r13
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r12
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // r8
  __int64 v33; // r15
  int v34; // eax
  char v35; // cl
  __int64 v37; // rdx
  __int64 v38; // r15
  char v39; // si
  char v40; // al
  __int128 v41; // kr10_16
  char v42; // r14
  __int64 v43; // r13
  __int8 v44; // r15
  __int128 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  unsigned __int64 v49; // rdi
  __m128i v51; // kr20_16
  __m128i v52; // xmm0
  __m128i v53; // xmm8
  __int64 v54; // r14
  __int64 v55; // rsi
  __int64 j; // rcx
  unsigned __int64 v57; // rdi
  __m128i v58; // xmm9
  __int64 v60; // rax
  __int64 v61; // rdx
  __int128 v62; // xmm0
  __int128 v63; // xmm2
  __int128 v64; // xmm3
  __m128i v65; // xmm0
  __int64 v66; // rax
  __m128i v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int128 v70; // xmm0
  __int128 v71; // xmm2
  __int128 v72; // xmm3
  __int128 v73; // xmm1
  __m128i v74; // xmm0
  __int64 v75; // rax
  char v76; // cl
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  __m128i v80; // xmm0
  __int64 v81; // rax
  __int64 v82; // rdx
  __m128i v83; // xmm0
  __int128 v84; // rax
  __int64 v85; // rsi
  __m128i **v86; // r15
  __int64 v87; // rbx
  __int64 v88; // r14
  __m128i **v89; // r13
  __int64 v90; // r15
  __int64 v91; // r12
  char v92; // bl
  char v93; // si
  char v94; // si
  __int64 v95; // rbx
  __int64 v96; // rdx
  char v97; // al
  char v98; // al
  _BYTE *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  _BYTE *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r15
  __int128 v106; // kr30_16
  __int64 v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // r10
  __int64 v110; // rax
  unsigned __int64 v111; // rcx
  bool v112; // of
  __int64 v113; // rax
  __int64 v114; // rdx
  unsigned __int64 v115; // rcx
  __int64 v116; // rsi
  __int64 v117; // rdx
  signed __int64 v118; // rdi
  __int64 v119; // rcx
  unsigned __int64 v120; // rdx
  __int64 v121; // rbx
  __int64 v122; // rcx
  unsigned __int64 v123; // rdx
  __int64 v124; // r15
  __int64 v125; // r14
  char v126; // cl
  _QWORD *v127; // rax
  __int64 v128; // rdi
  __int64 v129; // rsi
  __int64 v130; // rdx
  __int64 v131; // rbx
  __int64 v132; // r15
  unsigned __int64 *v133; // rax
  unsigned __int64 v134; // rcx
  unsigned __int64 *v135; // rax
  unsigned __int64 v136; // r9
  void *v137; // rax
  char *v138; // rdi
  __int64 v139; // rcx
  bool v140; // zf
  _QWORD *v141; // rax
  __int64 v142; // r15
  __int64 v143; // r14
  _QWORD *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rcx
  __int64 v148; // rcx
  unsigned __int64 v149; // rdx
  __int64 v150; // r8
  __int64 result; // rax
  __m128i v152; // xmm0
  __int128 v153; // xmm0
  __int128 v154; // xmm2
  __int128 v155; // xmm3
  _OWORD *v156; // rax
  __int128 v157; // xmm1
  __int64 v158; // rax
  __m128i v159; // xmm0
  __int128 v160; // xmm2
  __int128 v161; // xmm3
  __m128i v162; // xmm0
  __int64 v163; // rax
  __m128i v164; // xmm0
  __m128i v165; // xmm0
  __int64 v166; // rax
  __m128i v167; // xmm0
  __m128i v168; // xmm0
  __int128 v169; // xmm0
  __int128 v170; // xmm1
  __int128 v171; // xmm2
  __m128i v172; // xmm0
  __m128i v173; // xmm0
  __int128 v174; // xmm2
  __int128 v175; // xmm3
  __int128 v176; // xmm1
  __m128i v177; // xmm0
  __m128i v178; // xmm0
  __int128 v179; // xmm2
  __int128 v180; // xmm3
  _OWORD *v181; // rax
  __int128 v182; // xmm1
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // rsi
  __int64 v186; // rdi
  __int64 v187; // rbx
  const __m128i *v188; // r14
  __m128i v190; // xmm0
  __int64 v191; // rax
  __int64 v192; // rdx
  unsigned __int64 v193; // rax
  __int64 v194; // rsi
  __int64 i; // rbx
  __int64 v196; // r14
  __int64 v197; // rdx
  __int64 v198; // rax
  __m128i v199; // xmm0
  _OWORD v200[4]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v201; // [rsp+70h] [rbp-10h]
  __int64 v202; // [rsp+80h] [rbp+0h]
  __m128i v203; // [rsp+90h] [rbp+10h] BYREF
  __int128 v204; // [rsp+A0h] [rbp+20h]
  __int128 v205; // [rsp+B0h] [rbp+30h] BYREF
  _BYTE v206[504]; // [rsp+C0h] [rbp+40h] BYREF
  __m128i v207; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v208; // [rsp+2D0h] [rbp+250h]
  __int128 v209; // [rsp+2E0h] [rbp+260h]
  __int128 v210; // [rsp+2F0h] [rbp+270h]
  __int64 v211; // [rsp+308h] [rbp+288h]
  __m128i v212; // [rsp+310h] [rbp+290h] BYREF
  __int128 v213; // [rsp+320h] [rbp+2A0h]
  __int128 v214; // [rsp+330h] [rbp+2B0h]
  __int128 v215; // [rsp+340h] [rbp+2C0h]
  _BYTE v216[480]; // [rsp+350h] [rbp+2D0h] BYREF
  unsigned int v217; // [rsp+554h] [rbp+4D4h]
  __int64 v218; // [rsp+558h] [rbp+4D8h]
  __int64 v219; // [rsp+560h] [rbp+4E0h]
  __m128i *v220; // [rsp+568h] [rbp+4E8h] BYREF
  __int64 v221; // [rsp+570h] [rbp+4F0h] BYREF
  __int128 v222; // [rsp+578h] [rbp+4F8h] BYREF
  __int64 v223; // [rsp+588h] [rbp+508h]
  __int64 v224; // [rsp+590h] [rbp+510h]
  __int64 v225; // [rsp+598h] [rbp+518h]
  __m128i v226; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v227; // [rsp+5B0h] [rbp+530h]
  __m128i v228; // [rsp+5C0h] [rbp+540h] BYREF
  __m128i v229; // [rsp+5D0h] [rbp+550h]
  __int128 v230; // [rsp+5E0h] [rbp+560h]
  __int128 v231; // [rsp+5F0h] [rbp+570h]
  __m128i v232; // [rsp+600h] [rbp+580h] BYREF
  __int64 v233; // [rsp+610h] [rbp+590h]
  _OWORD *v234; // [rsp+620h] [rbp+5A0h] BYREF
  __int64 v235; // [rsp+628h] [rbp+5A8h] BYREF
  __int64 v236; // [rsp+630h] [rbp+5B0h]
  __int64 v237; // [rsp+638h] [rbp+5B8h]
  __int64 v238; // [rsp+640h] [rbp+5C0h]
  __int64 v239; // [rsp+648h] [rbp+5C8h]
  __int64 v240; // [rsp+650h] [rbp+5D0h]
  __int64 v241; // [rsp+658h] [rbp+5D8h]
  __m128i v242; // [rsp+660h] [rbp+5E0h] BYREF
  __m256i v243; // [rsp+670h] [rbp+5F0h]
  __int128 v244; // [rsp+690h] [rbp+610h]
  bool v245; // [rsp+6AFh] [rbp+62Fh]
  __int64 v246; // [rsp+6B0h] [rbp+630h]
  __int64 v247; // [rsp+6B8h] [rbp+638h]
  char v248; // [rsp+6C7h] [rbp+647h]
  char v249; // [rsp+6C8h] [rbp+648h]
  char v250; // [rsp+6C9h] [rbp+649h]
  char v251; // [rsp+6CAh] [rbp+64Ah]
  char v252; // [rsp+6CBh] [rbp+64Bh]
  char v253; // [rsp+6CCh] [rbp+64Ch]
  char v254; // [rsp+6CDh] [rbp+64Dh]
  char v255; // [rsp+6CEh] [rbp+64Eh]
  char v256; // [rsp+6CFh] [rbp+64Fh]
  char v257; // [rsp+6D0h] [rbp+650h]
  char v258; // [rsp+6D1h] [rbp+651h]
  char v259; // [rsp+6D2h] [rbp+652h]
  char v260; // [rsp+6D3h] [rbp+653h]
  char v261; // [rsp+6D4h] [rbp+654h]
  char v262; // [rsp+6D5h] [rbp+655h]
  char v263; // [rsp+6D6h] [rbp+656h]
  char v264; // [rsp+6D7h] [rbp+657h]
  __int64 v265; // [rsp+6D8h] [rbp+658h]

  v265 = -2;
  *(_QWORD *)&v222 = 0;
  v223 = 0;
  v250 = 1;
  sub_1409FB3C0(v216);
  v6 = *(_QWORD *)v216;
  *(_OWORD *)v206 = *(_OWORD *)&v216[8];
  *(_OWORD *)&v206[16] = *(_OWORD *)&v216[24];
  *(_OWORD *)&v206[32] = *(_OWORD *)&v216[40];
  if ( *(_QWORD *)v216 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v216[88];
    v7 = *(_OWORD *)&v216[56];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v216[72];
    *(_OWORD *)(a1 + 56) = v7;
    si128 = _mm_load_si128((const __m128i *)v206);
    v9 = *(_OWORD *)&v206[16];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v206[32];
    *(_OWORD *)(a1 + 24) = v9;
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = v6;
    goto LABEL_3;
  }
  v203 = _mm_load_si128((const __m128i *)v206);
  v204 = *(_OWORD *)&v206[16];
  v205 = *(_OWORD *)&v206[32];
  v260 = 1;
  sub_140A4E000(
    v216,
    a2,
    "SELECT thread_id,complete,incomplete,failed,state,rollout_id FROM files WHERE thread_id<>''SELECT f.thread_id,f.turn"
    "_id,f.ts,f.kind,\n"
    "     CASE WHEN f.kind='token' AND COALESCE(json_extract(f.data,'$.model'),'')=''\n"
    "       THEN COALESCE((\n"
    "         SELECT json_set(f.data,'$.model',json_extract(attributed.data,'$.model'))\n"
    "         FROM facts attributed WHERE attributed.key=f.key AND attributed.priority=f.priority\n"
    "           AND attributed.kind='token' AND json_type(attributed.data,'$.model')='text'\n"
    "           AND length(json_extract(attributed.data,'$.model'))>0\n"
    "         ORDER BY attributed.source LIMIT 1\n"
    "       ),f.data) ELSE f.data END AS data FROM facts f\n"
    "     WHERE (f.kind IN ('token','coverage') OR\n"
    "       (f.kind='activity' AND f.ts>=?1) OR\n"
    "       (f.kind IN ('turn','tool','change') AND f.ts>=?2))\n"
    "     AND NOT EXISTS (\n"
    "       SELECT 1 FROM facts winner WHERE winner.key=f.key\n"
    "       AND (winner.priority>f.priority OR\n"
    "         (winner.priority=f.priority AND winner.source<f.source))\n"
    "     )",
    91);
  if ( *(_DWORD *)v216 == 1 )
  {
    v12 = _mm_loadu_si128((const __m128i *)&v216[8]);
    v244 = *(_OWORD *)&v216[56];
    v243 = *(__m256i *)&v216[24];
    v242 = v12;
    *(_QWORD *)v206 = &v242;
    *(_QWORD *)&v206[8] = sub_14142D4D0;
    sub_1416DAFA0(&v207, &unk_141A6690F, v206);
    *(__m128i *)v206 = _mm_loadu_si128(&v207);
    *(_QWORD *)&v206[16] = v208;
    v260 = 1;
    HIDWORD(_RAX) = (unsigned __int64)sub_140904700(&v242) >> 32;
    v14 = _mm_load_si128((const __m128i *)v206);
    v15 = *(_OWORD *)&v206[16];
    v16 = *(_OWORD *)&v206[32];
    v214 = *(_OWORD *)&v206[32];
    v228 = v14;
    v229 = *(__m128i *)&v206[16];
    v230 = *(_OWORD *)&v206[32];
    v231 = *(_OWORD *)&v206[48];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v206[48];
    *(_OWORD *)(a1 + 40) = v16;
    *(_OWORD *)(a1 + 24) = v15;
    *(__m128i *)(a1 + 8) = v14;
    *(_QWORD *)a1 = 10;
    goto LABEL_235;
  }
  v228 = _mm_loadu_si128((const __m128i *)&v216[8]);
  v200[0] = v228;
  v200[1] = *(_OWORD *)&v216[24];
  v200[2] = *(_OWORD *)&v216[40];
  v200[3] = *(_OWORD *)&v216[56];
  v17 = sub_1417D8600(*(_QWORD *)&v216[64]);
  if ( v17 )
  {
    *(_OWORD *)v216 = 0x8000000000000013uLL;
    *(_QWORD *)&v216[16] = v17;
    v242.m128i_i64[0] = (__int64)v216;
    v242.m128i_i64[1] = (__int64)sub_14142D4D0;
    sub_1416DAFA0(v206, &unk_141A6690F, &v242);
    v18 = *(_OWORD *)v206;
    v19 = *(_QWORD *)&v206[16];
    v259 = 1;
    sub_140904700(v216);
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)a1 = 10;
    *(_OWORD *)(a1 + 8) = v18;
LABEL_234:
    v260 = 1;
    HIDWORD(_RAX) = (unsigned __int64)sub_140A19E50(v200) >> 32;
LABEL_235:
    v185 = v203.m128i_i64[1];
    if ( v203.m128i_i64[1] )
    {
      v186 = *((_QWORD *)&v204 + 1);
      if ( *((_QWORD *)&v204 + 1) )
      {
        v187 = v203.m128i_i64[0];
        v188 = (const __m128i *)(v203.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v203.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v190 = _mm_load_si128(v188);
              v187 -= 384;
              ++v188;
              _R15D = _mm_movemask_epi8(v190) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   eax, r15d }
          v191 = -3 * _RAX;
          v192 = *(_QWORD *)(v187 + 8 * v191 - 24);
          if ( v192 )
            sub_140001660(*(_QWORD *)(v187 + 8 * v191 - 16), v192, 1);
          --v186;
          _RAX = _R15D & (unsigned int)(_R15D - 1);
          _R15D &= _R15D - 1;
        }
        while ( v186 );
      }
      v193 = (24 * v185 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
      v194 = v193 + v185 + 17;
      if ( v194 )
        sub_140001660(v203.m128i_i64[0] - v193, v194, 16);
    }
    if ( (_QWORD)v222 )
    {
      v11 = v223;
      *(_QWORD *)&v216[8] = 0;
      *(_OWORD *)&v216[16] = v222;
      *(_QWORD *)&v216[40] = 0;
      *(_OWORD *)&v216[48] = v222;
      v10 = 1;
LABEL_247:
      *(_QWORD *)v216 = v10;
      *(_QWORD *)&v216[32] = v10;
      *(_QWORD *)&v216[64] = v11;
      result = sub_140A71080(v206, v216);
      for ( i = *(_QWORD *)v206; *(_QWORD *)v206; i = *(_QWORD *)v206 )
      {
        v196 = *(_QWORD *)&v206[16];
        v197 = *(_QWORD *)(i + 24LL * *(_QWORD *)&v206[16] + 2648);
        if ( v197 )
          sub_140001660(*(_QWORD *)(i + 24LL * *(_QWORD *)&v206[16] + 2656), v197, 1);
        sub_140A1B3D0(240 * v196 + i);
        result = sub_140A71080(v206, v216);
      }
      return result;
    }
LABEL_3:
    v10 = 0;
    v11 = 0;
    goto LABEL_247;
  }
  v236 = a2;
  v225 = a3;
  v240 = a1;
  v234 = v200;
  v235 = 0;
  while ( 1 )
  {
    v261 = 1;
    sub_140A986A0(v216, &v234);
    v20 = v240;
    v21 = v236;
    if ( *(_QWORD *)v216 != -1 )
    {
      *(_OWORD *)&v206[48] = *(_OWORD *)&v216[48];
      *(_OWORD *)&v206[32] = *(_OWORD *)&v216[32];
      *(_OWORD *)&v206[16] = *(_OWORD *)&v216[16];
      *(_OWORD *)v206 = *(_OWORD *)v216;
      v261 = 1;
      sub_140A04BA0(v216, v206);
      v62 = *(_OWORD *)v216;
      v63 = *(_OWORD *)&v216[32];
      v64 = *(_OWORD *)&v216[48];
      *(_OWORD *)(v20 + 16) = *(_OWORD *)&v216[16];
      *(_OWORD *)(v20 + 32) = v63;
      *(_OWORD *)(v20 + 48) = v64;
      *(_OWORD *)(v20 + 64) = *(_OWORD *)&v216[64];
      *(_OWORD *)(v20 + 80) = *(_OWORD *)&v216[80];
      *(_OWORD *)v20 = v62;
      goto LABEL_233;
    }
    if ( !v235 )
      break;
    v261 = 1;
    sub_140658620(&v242, &v235, 0, &off_141A6C100);
    if ( v242.m128i_i64[0] != -1 )
    {
      *(_OWORD *)&v206[48] = v244;
      *(__m256i *)&v206[16] = v243;
      *(__m128i *)v206 = v242;
      v261 = 1;
      sub_140A04BA0(v216, v206);
      v70 = *(_OWORD *)&v216[16];
      v71 = *(_OWORD *)&v216[48];
      v72 = *(_OWORD *)&v216[64];
      *(_OWORD *)(v20 + 32) = *(_OWORD *)&v216[32];
      *(_OWORD *)(v20 + 48) = v71;
      *(_OWORD *)(v20 + 64) = v72;
      *(_OWORD *)(v20 + 80) = *(_OWORD *)&v216[80];
      v73 = *(_OWORD *)v216;
      *(_OWORD *)(v20 + 16) = v70;
      *(_OWORD *)v20 = v73;
      goto LABEL_233;
    }
    v241 = v242.m128i_i64[1];
    v22 = v243.m256i_u64[1];
    v247 = v243.m256i_i64[0];
    v262 = 1;
    sub_140658860(&v242, &v235, 1, &off_141A6C118);
    if ( v242.m128i_i64[0] != -1
      || (v23 = v242.m128i_i8[8], v262 = 1, sub_140658860(&v242, &v235, 2, &off_141A6C130), v242.m128i_i64[0] != -1)
      || (v24 = v242.m128i_i8[8], v262 = 1, sub_140658860(&v242, &v235, 3, &off_141A6C148), v242.m128i_i64[0] != -1) )
    {
      v74 = _mm_loadu_si128(&v242);
      *(_OWORD *)&v206[48] = v244;
      *(__m256i *)&v206[16] = v243;
      *(__m128i *)v206 = v74;
      v262 = 1;
      sub_140A04BA0(v216, v206);
      v75 = *(_QWORD *)v216;
      v76 = v216[8];
      v77 = v240;
      *(_QWORD *)(v240 + 88) = *(_QWORD *)&v216[88];
      *(_OWORD *)(v77 + 73) = *(_OWORD *)&v216[73];
      *(_OWORD *)(v77 + 57) = *(_OWORD *)&v216[57];
      *(_OWORD *)(v77 + 41) = *(_OWORD *)&v216[41];
      *(_OWORD *)(v77 + 25) = *(_OWORD *)&v216[25];
      *(_OWORD *)(v77 + 9) = *(_OWORD *)&v216[9];
      *(_QWORD *)v77 = v75;
      *(_BYTE *)(v77 + 8) = v76;
      v78 = v241;
      if ( v241 )
      {
        v79 = v247;
        goto LABEL_232;
      }
      goto LABEL_233;
    }
    LOBYTE(v238) = v24;
    LOBYTE(v224) = v23;
    v25 = v242.m128i_i8[8];
    v26 = v222;
    if ( (_QWORD)v222 )
    {
      LOBYTE(v237) = v242.m128i_i8[8];
      v27 = *((_QWORD *)&v222 + 1);
      while ( 2 )
      {
        v28 = v26 + 2648;
        v246 = *(unsigned __int16 *)(v26 + 2914);
        v29 = 3LL * (unsigned int)(8 * v246);
        v30 = -1;
        do
        {
          if ( !v29 )
          {
            v30 = v246;
            goto LABEL_27;
          }
          v31 = v28 + 24;
          v32 = *(_QWORD *)(v28 + 16);
          v33 = v22 - v32;
          if ( v22 < v32 )
            v32 = v22;
          v34 = sub_141923B40(v247, *(_QWORD *)(v28 + 8), v32);
          if ( v34 )
            v33 = v34;
          v35 = (v33 > 0) - (v33 < 0);
          ++v30;
          v29 -= 24;
          v28 = v31;
        }
        while ( v35 == 1 );
        if ( !v35 )
        {
          *(_QWORD *)&v216[8] = v26;
          *(_QWORD *)&v216[16] = v27;
          *(_QWORD *)&v216[24] = v30;
          *(_QWORD *)&v216[32] = &v222;
          *(_QWORD *)v216 = -1;
          v25 = v237;
          if ( v241 )
            sub_140001660(v247, v241, 1);
          goto LABEL_32;
        }
LABEL_27:
        if ( v27-- != 0 )
        {
          v26 = *(_QWORD *)(v26 + 8 * v30 + 2920);
          continue;
        }
        break;
      }
      *(_QWORD *)v216 = v241;
      *(_QWORD *)&v216[8] = v247;
      *(_QWORD *)&v216[16] = v22;
      *(_QWORD *)&v216[24] = &v222;
      *(_OWORD *)&v216[32] = v26;
      *(_QWORD *)&v216[48] = v30;
      v25 = v237;
    }
    else
    {
      *(_QWORD *)v216 = v241;
      *(_QWORD *)&v216[8] = v247;
      *(_QWORD *)&v216[16] = v22;
      *(_QWORD *)&v216[24] = &v222;
      *(_QWORD *)&v216[32] = 0;
    }
LABEL_32:
    v262 = 0;
    v38 = sub_140A4F830(v216);
    v39 = v224;
    v40 = v238;
    if ( (_BYTE)v224 )
    {
      if ( !(_BYTE)v238 )
      {
        *(_BYTE *)(v38 + 233) |= v25 ^ 1;
        *(_BYTE *)(v38 + 232) |= v25;
        goto LABEL_56;
      }
      *(_BYTE *)(v38 + 232) = 1;
    }
    else
    {
      *(_BYTE *)(v38 + 232) = 1;
      if ( !v40 )
        goto LABEL_55;
    }
    v262 = 0;
    sub_140658620(&v242, &v235, 4, &off_141A6C160);
    if ( v242.m128i_i64[0] != -1 )
    {
      v152 = _mm_loadu_si128(&v242);
      *(_OWORD *)&v206[48] = v244;
      *(__m256i *)&v206[16] = v243;
      *(__m128i *)v206 = v152;
      v262 = 0;
      sub_140A04BA0(v216, v206);
      v153 = *(_OWORD *)&v216[16];
      v154 = *(_OWORD *)&v216[48];
      v155 = *(_OWORD *)&v216[64];
      v156 = (_OWORD *)v240;
      *(_OWORD *)(v240 + 32) = *(_OWORD *)&v216[32];
      v156[3] = v154;
      v156[4] = v155;
      v156[5] = *(_OWORD *)&v216[80];
      v157 = *(_OWORD *)v216;
      v156[1] = v153;
      *v156 = v157;
      goto LABEL_233;
    }
    v246 = v242.m128i_i64[1];
    v41 = *(_OWORD *)v243.m256i_i8;
    v242 = *(__m128i *)v243.m256i_i8;
    *(_OWORD *)v243.m256i_i8 = 0;
    v238 = v41;
    *(_OWORD *)&v243.m256i_u64[2] = v41;
    sub_140D8D860(v216, &v242);
    v42 = v39;
    v43 = v38;
    v44 = v25;
    v45 = *(_OWORD *)v216;
    if ( *(_QWORD *)v216 == 2 )
    {
      v158 = v240;
      *(_QWORD *)v240 = 3;
      *(_QWORD *)(v158 + 8) = *((_QWORD *)&v45 + 1);
      v78 = v246;
      if ( v246 )
      {
        v79 = v238;
        goto LABEL_232;
      }
      goto LABEL_233;
    }
    sub_1419234B0(&v206[16], &v216[16], 496);
    *(_OWORD *)v206 = v45;
    sub_1407C5C20(&v228, v206);
    v25 = v44;
    v38 = v43;
    v47 = v229.m128i_i64[0];
    v237 = v229.m128i_i64[0];
    if ( v229.m128i_i64[0] )
    {
      if ( !v228.m128i_i64[0] )
        v47 = 0;
      *(_OWORD *)v216 = v228.m128i_i64[0] != 0;
      *(__m128i *)&v216[16] = v228;
      *(_OWORD *)&v216[32] = *(_OWORD *)v216;
      *(__m128i *)&v216[48] = v228;
      *(_QWORD *)&v216[64] = v47;
      while ( 1 )
      {
        sub_140A727A0(&v242, v216);
        if ( !v242.m128i_i64[0] )
          break;
        sub_140A6E070(v43 + 96, *(unsigned __int8 *)(v242.m128i_i64[0] + v243.m256i_i64[0] + 12));
      }
      do
        sub_140A727A0(&v242, v216);
      while ( v242.m128i_i64[0] );
    }
    else
    {
      LOBYTE(v46) = 16;
      sub_140A6E070(v43 + 96, v46);
      if ( v228.m128i_i64[0] )
      {
        *(_QWORD *)&v216[8] = 0;
        *(__m128i *)&v216[16] = v228;
        *(_QWORD *)&v216[40] = 0;
        *(__m128i *)&v216[48] = v228;
        v48 = 1;
      }
      else
      {
        v48 = 0;
      }
      *(_QWORD *)v216 = v48;
      *(_QWORD *)&v216[32] = v48;
      *(_QWORD *)&v216[64] = 0;
      do
        sub_140A727A0(&v242, v216);
      while ( v242.m128i_i64[0] );
    }
    sub_140A1ABE0(v206);
    v37 = v246;
    if ( v246 )
      sub_140001660(v238, v246, 1);
    if ( !v42 )
    {
LABEL_55:
      v262 = 0;
      LOBYTE(v37) = 12;
      sub_140A6E070(v38 + 96, v37);
    }
LABEL_56:
    if ( v25 )
    {
      v262 = 0;
      LOBYTE(v37) = 13;
      sub_140A6E070(v38 + 96, v37);
    }
    v262 = 0;
    sub_140658620(&v242, &v235, 5, &off_141A6C178);
    if ( v242.m128i_i64[0] != -1 )
    {
      v80 = _mm_loadu_si128(&v242);
      *(_OWORD *)&v206[48] = v244;
      *(__m256i *)&v206[16] = v243;
      *(__m128i *)v206 = v80;
      v262 = 0;
      sub_140A04BA0(v216, v206);
      v81 = *(_QWORD *)v216;
      v212 = *(__m128i *)&v216[8];
      *(_QWORD *)&v213 = *(_QWORD *)&v216[24];
      v82 = v240;
      *(_OWORD *)(v240 + 80) = *(_OWORD *)&v216[80];
      *(_OWORD *)(v82 + 64) = *(_OWORD *)&v216[64];
      *(_OWORD *)(v82 + 48) = *(_OWORD *)&v216[48];
      *(_OWORD *)(v82 + 32) = *(_OWORD *)&v216[32];
      v83 = v212;
      v228 = v212;
      v229.m128i_i64[0] = v213;
      *(_QWORD *)(v82 + 24) = v213;
      *(__m128i *)(v82 + 8) = v83;
      *(_QWORD *)v82 = v81;
      goto LABEL_233;
    }
    v228 = _mm_loadu_si128((const __m128i *)&v242.m128i_u64[1]);
    v229.m128i_i64[0] = v243.m256i_i64[1];
    v207 = v228;
    *(_QWORD *)&v208 = v243.m256i_i64[1];
    if ( *((_QWORD *)&v204 + 1) )
    {
      v49 = sub_1406CECD0(&v205, &v207);
      _RAX = v49 >> 57;
      v51 = v203;
      v52 = _mm_cvtsi32_si128(v49 >> 57);
      v53 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v52, v52), 0), 68);
      v54 = v207.m128i_i64[1];
      v55 = v208;
      for ( j = 0; ; j += 16 )
      {
        v57 = v51.m128i_i64[1] & v49;
        v58 = _mm_loadu_si128((const __m128i *)(v51.m128i_i64[0] + v57));
        _EBX = _mm_movemask_epi8(_mm_cmpeq_epi8(v58, v53));
        if ( _EBX )
          break;
LABEL_66:
        _RAX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v58, (__m128i)-1LL));
        if ( (_DWORD)_RAX )
          goto LABEL_68;
        v49 = j + v57 + 16;
      }
      v246 = j;
      while ( 1 )
      {
        __asm { tzcnt   eax, ebx }
        v60 = -3LL * (v51.m128i_i64[1] & (v57 + _RAX));
        if ( v55 == *(_QWORD *)(v51.m128i_i64[0] + 8 * v60 - 8)
          && !(unsigned int)sub_141923B40(v54, *(_QWORD *)(v51.m128i_i64[0] + 8 * v60 - 16), v55) )
        {
          break;
        }
        _RAX = (unsigned int)(_EBX - 1);
        LOWORD(_RAX) = _EBX & (_EBX - 1);
        _EBX = _RAX;
        j = v246;
        if ( !(_WORD)_RAX )
          goto LABEL_66;
      }
      v61 = v207.m128i_i64[0];
      if ( v207.m128i_i64[0] )
        sub_140001660(v54, v207.m128i_i64[0], 1);
      *(_BYTE *)(v38 + 232) = 1;
      v262 = 0;
      LOBYTE(v61) = 14;
      sub_140A6E070(v38 + 96, v61);
    }
    else
    {
LABEL_68:
      if ( v207.m128i_i64[0] )
        sub_140001660(v207.m128i_i64[1], v207.m128i_i64[0], 1);
    }
  }
  *(_QWORD *)v206 = &off_141A6BFB0;
  *(_QWORD *)&v206[8] = sub_140191200;
  v261 = 1;
  sub_1416DAFA0(v216, &unk_141A6BFC0, v206);
  v238 = *(_QWORD *)v216;
  v258 = 1;
  v237 = *(_QWORD *)&v216[8];
  sub_140A4E000(v206, v21, *(_QWORD *)&v216[8], *(_QWORD *)&v216[16]);
  if ( *(_DWORD *)v206 == 1 )
  {
    v65 = _mm_loadu_si128((const __m128i *)&v206[8]);
    v244 = *(_OWORD *)&v206[56];
    v243 = *(__m256i *)&v206[24];
    v242 = v65;
    v258 = 1;
    sub_140A04BA0(v216, &v242);
    v66 = *(_QWORD *)v216;
    v212 = *(__m128i *)&v216[8];
    v213 = *(_OWORD *)&v216[24];
    v214 = *(_OWORD *)&v216[40];
    v215 = *(_OWORD *)&v216[56];
    *(_QWORD *)(v20 + 88) = *(_QWORD *)&v216[88];
    *(_OWORD *)(v20 + 72) = *(_OWORD *)&v216[72];
    v67 = _mm_load_si128(&v212);
    v68 = v213;
    v69 = v214;
    v228 = v67;
    v229 = (__m128i)v213;
    v230 = v214;
    v231 = v215;
    *(_OWORD *)(v20 + 56) = v215;
    *(_OWORD *)(v20 + 40) = v69;
    *(_OWORD *)(v20 + 24) = v68;
    *(__m128i *)(v20 + 8) = v67;
    *(_QWORD *)v20 = v66;
    goto LABEL_230;
  }
  v228 = _mm_loadu_si128((const __m128i *)&v206[8]);
  v207 = v228;
  v208 = *(_OWORD *)&v206[24];
  v209 = *(_OWORD *)&v206[40];
  v210 = *(_OWORD *)&v206[56];
  v252 = 1;
  *(_QWORD *)&v84 = sub_140AA0D00(&off_141A68E08);
  v213 = xmmword_141A68E30;
  v212 = _mm_loadu_si128((const __m128i *)&off_141A68E20);
  v214 = v84;
  v85 = (__int64)v216;
  v86 = &v220;
  v87 = v225;
  v224 = 0;
  v245 = 1;
  while ( 2 )
  {
    sub_140A0A820(v85, &v207, &off_141A6C050);
    if ( *(_QWORD *)v216 != -1 )
    {
      *(_QWORD *)&v206[56] = *(_QWORD *)&v216[56];
      *(_OWORD *)&v206[40] = *(_OWORD *)&v216[40];
      *(_OWORD *)&v206[24] = *(_OWORD *)&v216[24];
      *(_QWORD *)v206 = *(_QWORD *)v216;
      *(_OWORD *)&v206[8] = *(_OWORD *)&v216[8];
      sub_140A04BA0(v216, v206);
      v198 = *(_QWORD *)v216;
      *(_QWORD *)(v20 + 88) = *(_QWORD *)&v216[88];
      *(_OWORD *)(v20 + 72) = *(_OWORD *)&v216[72];
      *(_OWORD *)(v20 + 56) = *(_OWORD *)&v216[56];
      *(_OWORD *)(v20 + 40) = *(_OWORD *)&v216[40];
      *(_OWORD *)(v20 + 24) = *(_OWORD *)&v216[24];
      v199 = _mm_loadu_si128((const __m128i *)&v216[8]);
      *(_QWORD *)v20 = v198;
      *(__m128i *)(v20 + 8) = v199;
LABEL_229:
      v252 = 1;
      sub_140190700(&v212);
      v258 = 1;
      sub_140A19E50(&v207);
LABEL_230:
      v78 = v238;
      if ( v238 )
      {
        v79 = v237;
LABEL_232:
        sub_140001660(v79, v78, 1);
      }
LABEL_233:
      v259 = 1;
      sub_140A19A20(&v234);
      goto LABEL_234;
    }
    v217 = v224 + 1;
    v220 = &v207;
    v221 = 0;
    while ( 1 )
    {
      sub_140A986A0(v85, v86);
      if ( *(_QWORD *)v216 != -1 )
      {
        *(_OWORD *)&v206[48] = *(_OWORD *)&v216[48];
        *(_OWORD *)&v206[32] = *(_OWORD *)&v216[32];
        *(__m128i *)&v206[16] = _mm_loadu_si128((const __m128i *)&v216[16]);
        *(_OWORD *)v206 = *(_OWORD *)v216;
        sub_140A04BA0(v216, v206);
        v159 = _mm_loadu_si128((const __m128i *)v216);
        v160 = *(_OWORD *)&v216[32];
        v161 = *(_OWORD *)&v216[48];
        *(_OWORD *)(v20 + 16) = *(_OWORD *)&v216[16];
        *(_OWORD *)(v20 + 32) = v160;
        *(_OWORD *)(v20 + 48) = v161;
        *(_OWORD *)(v20 + 64) = *(_OWORD *)&v216[64];
        *(_OWORD *)(v20 + 80) = *(_OWORD *)&v216[80];
        *(__m128i *)v20 = v159;
        goto LABEL_228;
      }
      if ( !v221 )
        break;
      sub_140658620(&v242, &v221, 0, &off_141A6C070);
      if ( v242.m128i_i64[0] != -1 )
      {
        v162 = _mm_loadu_si128(&v242);
        *(_OWORD *)&v206[48] = v244;
        *(__m256i *)&v206[16] = v243;
        *(__m128i *)v206 = v162;
        sub_140A04BA0(v216, v206);
        v163 = *(_QWORD *)v216;
        v228 = *(__m128i *)&v216[8];
        v229.m128i_i64[0] = *(_QWORD *)&v216[24];
        *(_OWORD *)(v20 + 80) = *(_OWORD *)&v216[80];
        *(_OWORD *)(v20 + 64) = *(_OWORD *)&v216[64];
        *(_OWORD *)(v20 + 48) = *(_OWORD *)&v216[48];
        *(_OWORD *)(v20 + 32) = *(_OWORD *)&v216[32];
        v164 = _mm_load_si128(&v228);
        v201 = v164;
        v202 = v229.m128i_i64[0];
        *(_QWORD *)(v20 + 24) = v229.m128i_i64[0];
        *(__m128i *)(v20 + 8) = v164;
        *(_QWORD *)v20 = v163;
        goto LABEL_228;
      }
      v226 = _mm_loadu_si128((const __m128i *)&v242.m128i_u64[1]);
      v227 = v243.m256i_i64[1];
      v251 = 1;
      sub_140658620(&v242, &v221, 1, &off_141A6C088);
      if ( v242.m128i_i64[0] != -1 )
      {
        v165 = _mm_loadu_si128(&v242);
        *(_OWORD *)&v206[48] = v244;
        *(__m256i *)&v206[16] = v243;
        *(__m128i *)v206 = v165;
        v251 = 1;
        sub_140A04BA0(v216, v206);
        v166 = *(_QWORD *)v216;
        v228 = *(__m128i *)&v216[8];
        v229.m128i_i64[0] = *(_QWORD *)&v216[24];
        *(_OWORD *)(v20 + 80) = *(_OWORD *)&v216[80];
        *(_OWORD *)(v20 + 64) = *(_OWORD *)&v216[64];
        *(_OWORD *)(v20 + 48) = *(_OWORD *)&v216[48];
        *(_OWORD *)(v20 + 32) = *(_OWORD *)&v216[32];
        v167 = _mm_load_si128(&v228);
        v201 = v167;
        v202 = v229.m128i_i64[0];
        *(_QWORD *)(v20 + 24) = v229.m128i_i64[0];
        *(__m128i *)(v20 + 8) = v167;
        *(_QWORD *)v20 = v166;
        goto LABEL_226;
      }
      v232 = _mm_loadu_si128((const __m128i *)&v242.m128i_u64[1]);
      v233 = v243.m256i_i64[1];
      v257 = 1;
      v256 = 1;
      sub_140658A10(&v242, &v221, 2, &off_141A6C0A0);
      if ( v242.m128i_i64[0] != -1 )
      {
        v168 = _mm_loadu_si128(&v242);
        *(_OWORD *)&v206[48] = v244;
        *(__m256i *)&v206[16] = v243;
        *(__m128i *)v206 = v168;
        v257 = 1;
        v256 = 1;
        sub_140A04BA0(v216, v206);
        *(_OWORD *)(v20 + 80) = *(_OWORD *)&v216[80];
        v169 = *(_OWORD *)&v216[16];
        v170 = *(_OWORD *)&v216[32];
        v171 = *(_OWORD *)&v216[48];
        *(_OWORD *)(v20 + 64) = *(_OWORD *)&v216[64];
        *(_OWORD *)(v20 + 48) = v171;
        *(_OWORD *)(v20 + 32) = v170;
        *(_OWORD *)(v20 + 16) = v169;
        *(__m128i *)v20 = _mm_load_si128((const __m128i *)v216);
        goto LABEL_224;
      }
      v88 = v242.m128i_i64[1];
      v257 = 1;
      v256 = 1;
      sub_140658620(&v242, &v221, 3, &off_141A6C0B8);
      if ( v242.m128i_i64[0] != -1 )
      {
        v172 = _mm_loadu_si128(&v242);
        *(_OWORD *)&v206[48] = v244;
        *(__m256i *)&v206[16] = v243;
        *(__m128i *)v206 = v172;
        v257 = 1;
        v256 = 1;
        sub_140A04BA0(v216, v206);
        v173 = _mm_load_si128((const __m128i *)&v216[16]);
        v174 = *(_OWORD *)&v216[48];
        v175 = *(_OWORD *)&v216[64];
        *(_OWORD *)(v20 + 32) = *(_OWORD *)&v216[32];
        *(_OWORD *)(v20 + 48) = v174;
        *(_OWORD *)(v20 + 64) = v175;
        *(_OWORD *)(v20 + 80) = *(_OWORD *)&v216[80];
        v176 = *(_OWORD *)v216;
        *(__m128i *)(v20 + 16) = v173;
        *(_OWORD *)v20 = v176;
        goto LABEL_224;
      }
      if ( v88 > v87 || v88 <= 0 || !v227 )
      {
        if ( v242.m128i_i64[1] )
          sub_140001660(v243.m256i_i64[0], v242.m128i_i64[1], 1);
LABEL_169:
        if ( v232.m128i_i64[0] )
          sub_140001660(v232.m128i_i64[1], v232.m128i_i64[0], 1);
LABEL_196:
        v145 = v226.m128i_i64[0];
        if ( !v226.m128i_i64[0] )
          continue;
        v146 = v226.m128i_i64[1];
LABEL_198:
        sub_140001660(v146, v145, 1);
        continue;
      }
      v247 = v243.m256i_i64[0];
      v246 = v242.m128i_i64[1];
      v89 = v86;
      v90 = v243.m256i_i64[1];
      v249 = 1;
      v248 = 1;
      sub_140658620(&v242, &v221, 4, &off_141A6C0D0);
      if ( v242.m128i_i64[0] != -1 )
      {
        v177 = _mm_loadu_si128(&v242);
        *(_OWORD *)&v206[48] = v244;
        *(__m256i *)&v206[16] = v243;
        *(__m128i *)v206 = v177;
        v249 = 1;
        v248 = 1;
        sub_140A04BA0(v216, v206);
        v178 = _mm_load_si128((const __m128i *)&v216[16]);
        v179 = *(_OWORD *)&v216[48];
        v180 = *(_OWORD *)&v216[64];
        v181 = (_OWORD *)v240;
        *(_OWORD *)(v240 + 32) = *(_OWORD *)&v216[32];
        v181[3] = v179;
        v181[4] = v180;
        v181[5] = *(_OWORD *)&v216[80];
        v182 = *(_OWORD *)v216;
        v181[1] = v178;
        *v181 = v182;
        goto LABEL_222;
      }
      v241 = v242.m128i_i64[1];
      *(_OWORD *)v216 = *(_OWORD *)v243.m256i_i8;
      *(_OWORD *)&v216[16] = 0;
      v236 = v243.m256i_i64[0];
      *(_OWORD *)&v216[32] = *(_OWORD *)v243.m256i_i8;
      v255 = 1;
      v254 = 1;
      v91 = v85;
      sub_140D8B500(v206, (__int128 *)v85);
      if ( v206[0] == 0xFF )
      {
        v183 = *(_QWORD *)&v206[8];
        v184 = v240;
        *(_QWORD *)v240 = 3;
        *(_QWORD *)(v184 + 8) = v183;
        if ( v241 )
          sub_140001660(v236, v241, 1);
LABEL_222:
        if ( v246 )
          sub_140001660(v247, v246, 1);
LABEL_224:
        if ( v232.m128i_i64[0] )
          sub_140001660(v232.m128i_i64[1], v232.m128i_i64[0], 1);
LABEL_226:
        if ( v226.m128i_i64[0] )
          sub_140001660(v226.m128i_i64[1], v226.m128i_i64[0], 1);
LABEL_228:
        sub_140A19A20(&v220);
        goto LABEL_229;
      }
      v228.m128i_i32[1] = *(_DWORD *)&v206[4];
      *(__int32 *)((char *)v228.m128i_i32 + 1) = *(_DWORD *)&v206[1];
      v229 = _mm_loadu_si128((const __m128i *)&v206[16]);
      v228.m128i_i8[0] = v206[0];
      v228.m128i_i64[1] = *(_QWORD *)&v206[8];
      if ( (_DWORD)v224 )
      {
        v264 = 1;
        v263 = 1;
        sub_1416DB410(v206, &v226);
        sub_140A6C240(v85, &v222, v206);
        v264 = 1;
        v263 = 1;
        v239 = sub_140A4F830(v85);
        v92 = 1;
        if ( v90 == 4 )
        {
          if ( *(_DWORD *)v247 != 1852994932 )
          {
            if ( *(_DWORD *)v247 == 1819242356 )
            {
              v264 = 1;
              v263 = 1;
              v137 = (void *)sub_1416724D0(aName_8, 4, &v228);
              if ( !v137 )
                v137 = off_142240158;
              if ( *(_BYTE *)v137 == 3 )
              {
                v138 = *((char **)v137 + 2);
                v85 = *((_QWORD *)v137 + 3);
              }
              else
              {
                v138 = nullptr;
              }
              if ( !v85 )
                v138 = nullptr;
              if ( !v138 )
              {
                v138 = &aContentFiltere[32];
                v85 = 7;
              }
              sub_1401E7560(v91, v85, 0, 1, 1);
              v142 = *(_QWORD *)&v216[8];
              if ( *(_DWORD *)v216 == 1 )
              {
                v264 = 1;
                v263 = 1;
                sub_14196B2DB(*(_QWORD *)&v216[8], *(_QWORD *)&v216[16]);
              }
              v143 = *(_QWORD *)&v216[16];
              if ( v85 )
                sub_1419234B0(*(_QWORD *)&v216[16], v138, v85);
              *(_QWORD *)v206 = v142;
              *(_QWORD *)&v206[8] = v143;
              *(_QWORD *)&v206[16] = v85;
              sub_140A6C910(v91, v239 + 184, v206);
              v264 = 1;
              v263 = 1;
              v144 = (_QWORD *)sub_140A52F20(v91);
              ++*v144;
            }
LABEL_187:
            v93 = 1;
            goto LABEL_188;
          }
          if ( !v233 )
            goto LABEL_187;
          v264 = 1;
          v263 = 1;
          sub_1416DB410(v85, &v232);
          v264 = 1;
          v263 = 1;
          sub_140871180(v239, (_QWORD *)v85);
          v264 = 1;
          v263 = 1;
          v141 = (_QWORD *)sub_1416724D0(aStatus_9, 6, &v228);
          if ( !v141 )
            v141 = off_142240158;
          if ( *(_BYTE *)v141 != 3
            || v141[3] != 9
            || *(_QWORD *)v141[2] ^ 0x6574656C706D6F63LL | *(unsigned __int8 *)(v141[2] + 8LL) ^ 0x64LL )
          {
            goto LABEL_187;
          }
          *(_QWORD *)&v216[16] = v233;
          *(__m128i *)v216 = _mm_load_si128(&v232);
          v264 = 0;
          v263 = 1;
          sub_140871180(v239 + 48, (_QWORD *)v85);
          v93 = 0;
          goto LABEL_188;
        }
        if ( v90 == 8 )
        {
          v93 = 1;
          if ( *(_QWORD *)v247 == 0x6567617265766F63LL )
            goto LABEL_109;
          goto LABEL_188;
        }
        if ( v90 != 5 )
          goto LABEL_187;
        v93 = 1;
        if ( *(_DWORD *)v247 ^ 0x656B6F74 | *(unsigned __int8 *)(v247 + 4) ^ 0x6E )
        {
LABEL_188:
          v255 = v93;
          v254 = v92;
          sub_140A192F0(&v228);
          if ( v241 )
            sub_140001660(v236, v241, 1);
          v20 = v240;
          v86 = v89;
          if ( v246 )
            sub_140001660(v247, v246, 1);
          if ( v93 && v232.m128i_i64[0] )
            sub_140001660(v232.m128i_i64[1], v232.m128i_i64[0], 1);
          v140 = v92 == 0;
          v87 = v225;
          v85 = v91;
          if ( !v140 )
            goto LABEL_196;
        }
        else
        {
LABEL_109:
          *(_QWORD *)&v216[16] = v227;
          *(__m128i *)v216 = v226;
          *(_QWORD *)&v216[40] = v233;
          *(__m128i *)&v216[24] = _mm_load_si128(&v232);
          v95 = sub_140A0D260(&v212, v91);
          if ( !v95 )
            sub_14196B590(aNoEntryFoundFo_0, 22, &off_141A6C0E8);
          sub_140031C30(v91);
          v97 = *(_BYTE *)(v95 + 17);
          if ( *(_BYTE *)(v95 + 16) )
            v97 = *(_QWORD *)(v95 + 8) > *(_QWORD *)v95;
          *(_BYTE *)(v239 + 232) |= v97;
          v98 = *(_BYTE *)(v95 + 17);
          if ( *(_BYTE *)(v95 + 16) )
            v98 = *(_QWORD *)(v95 + 8) > *(_QWORD *)v95;
          if ( v98 )
          {
            v264 = 0;
            v263 = 0;
            LOBYTE(v96) = 6;
            sub_140A6E070(v239 + 96, v96);
          }
          if ( v90 == 5 )
          {
            if ( !(*(_DWORD *)v247 ^ 0x656B6F74 | *(unsigned __int8 *)(v247 + 4) ^ 0x6E) )
            {
              v264 = 0;
              v263 = 0;
              v99 = (_BYTE *)sub_1416724D0(aComplete, 8, &v228);
              if ( !v99 )
                v99 = off_142240158;
              if ( *v99 != 1 || !v99[1] )
              {
                v101 = v239;
                *(_BYTE *)(v239 + 232) = 1;
                v264 = 0;
                v263 = 0;
                LOBYTE(v100) = 5;
                sub_140A6E070(v101 + 96, v100);
              }
            }
            if ( !(*(_DWORD *)v247 ^ 0x656B6F74 | *(unsigned __int8 *)(v247 + 4) ^ 0x6E) )
            {
              v264 = 0;
              v263 = 0;
              v102 = (_BYTE *)sub_1416724D0(aComplete, 8, &v228);
              if ( !v102 )
                v102 = off_142240158;
              if ( *v102 == 1 && v102[1] == 1 )
              {
                v103 = *(unsigned __int8 *)(v95 + 16);
                v264 = 0;
                v263 = 0;
                if ( (unsigned __int8)sub_140A308F0(v103, &v228) )
                {
                  v264 = 0;
                  v263 = 0;
                  sub_140A830E0(v91, &v228);
                  if ( *(_DWORD *)v216 == 1 )
                  {
                    v105 = *(_QWORD *)&v216[8];
                    v106 = *(_OWORD *)&v216[16];
                    v218 = *(_QWORD *)&v216[40];
                    v107 = *(_QWORD *)&v216[32];
                    v264 = 0;
                    v263 = 0;
                    sub_140A5CB40(&v242, v88);
                    if ( v242.m128i_i32[0] )
                    {
                      *(_DWORD *)&v206[8] = v242.m128i_i32[2];
                      *(_QWORD *)v206 = v242.m128i_i64[0];
                      v264 = 0;
                      v263 = 0;
                      sub_140A28EB0(v91, v206);
                      v219 = *(_QWORD *)v216;
                      v109 = v239;
                      v110 = *(_QWORD *)(v239 + 152);
                      v111 = ((v218 + v110) >> 63) ^ 0x8000000000000000uLL;
                      v112 = __OFADD__(v218, v110);
                      v113 = v218 + v110;
                      v114 = *(_QWORD *)(v239 + 144);
                      if ( v112 )
                        v113 = v111;
                      v115 = ((v107 + v114) >> 63) ^ 0x8000000000000000uLL;
                      v112 = __OFADD__(v114, v107);
                      v116 = v114 + v107;
                      v117 = *(_QWORD *)(v239 + 136);
                      if ( v112 )
                        v116 = v115;
                      v118 = v117 + *((_QWORD *)&v106 + 1);
                      if ( __OFADD__(v117, *((_QWORD *)&v106 + 1)) )
                        v118 = ((*((_QWORD *)&v106 + 1) + v117) >> 63) ^ 0x8000000000000000uLL;
                      v119 = *(_QWORD *)(v239 + 128);
                      v120 = (((__int64)v106 + v119) >> 63) ^ 0x8000000000000000uLL;
                      v112 = __OFADD__(v119, (_QWORD)v106);
                      v121 = v119 + v106;
                      v122 = *(_QWORD *)(v239 + 120);
                      if ( v112 )
                        v121 = v120;
                      v123 = ((v105 + v122) >> 63) ^ 0x8000000000000000uLL;
                      v112 = __OFADD__(v122, v105);
                      v124 = v122 + v105;
                      v211 = *(_QWORD *)&v216[8];
                      if ( v112 )
                        v124 = v123;
                      v125 = *(_QWORD *)&v216[16];
                      *(_BYTE *)(v239 + 234) = 1;
                      *(_QWORD *)(v109 + 120) = v124;
                      v126 = *(_BYTE *)(v109 + 235) | (v124 > 0x1FFFFFFFFFFFFFLL);
                      *(_QWORD *)(v109 + 128) = v121;
                      *(_QWORD *)(v109 + 136) = v118;
                      *(_QWORD *)(v109 + 144) = v116;
                      *(_QWORD *)(v109 + 152) = v113;
                      *(_BYTE *)(v109 + 235) = v126
                                             | (v121 > 0x1FFFFFFFFFFFFFLL
                                             || v118 > 0x1FFFFFFFFFFFFFLL
                                             || v116 > 0x1FFFFFFFFFFFFFLL
                                             || v113 > 0x1FFFFFFFFFFFFFLL);
                      v253 = 1;
                      v127 = (_QWORD *)sub_1416724D0(aModel_4, 5, &v228);
                      if ( !v127 )
                        v127 = off_142240158;
                      if ( *(_BYTE *)v127 == 3 )
                      {
                        v128 = v127[2];
                        v129 = v127[3];
                        v253 = 1;
                        sub_1408FEA60(v128, v129);
                        if ( v130 )
                        {
                          sub_1401E7560(v91, v129, 0, 1, 1);
                          v131 = *(_QWORD *)&v216[8];
                          if ( v216[0] )
                          {
                            v253 = 1;
                            sub_14196B2DB(*(_QWORD *)&v216[8], *(_QWORD *)&v216[16]);
                          }
                          v132 = *(_QWORD *)&v216[16];
                          if ( v129 )
                            sub_1419234B0(*(_QWORD *)&v216[16], v128, v129);
                          *(_QWORD *)v206 = v131;
                          *(_QWORD *)&v206[8] = v132;
                          *(_QWORD *)&v206[16] = v129;
                          sub_140A6CA90(v91, v239 + 160, v206);
                          v253 = 1;
                          v133 = (unsigned __int64 *)sub_140A53D70(v91);
                          v134 = v218 + *v133;
                          if ( __OFADD__(v218, *v133) )
                            v134 = ((__int64)(v218 + *v133) >> 63) ^ 0x8000000000000000uLL;
                          *v133 = v134;
                        }
                      }
                      *(_QWORD *)v206 = v219;
                      *(_QWORD *)&v206[8] = v211;
                      *(_QWORD *)&v206[16] = v125;
                      sub_140A6CA90(v91, v239 + 208, v206);
                      v253 = 0;
                      v135 = (unsigned __int64 *)sub_140A53D70(v91);
                      v136 = *v135 + v218;
                      if ( __OFADD__(*v135, v218) )
                        v136 = ((__int64)(v218 + *v135) >> 63) ^ 0x8000000000000000uLL;
                      *v135 = v136;
                      v93 = 0;
                      v92 = 0;
                      goto LABEL_188;
                    }
                    v148 = v239;
                    *(_BYTE *)(v239 + 232) = 1;
                    v264 = 0;
                    v263 = 0;
                    LOBYTE(v108) = 1;
                    sub_140A6E070(v148 + 96, v108);
                  }
                  else
                  {
                    v147 = v239;
                    *(_BYTE *)(v239 + 232) = 1;
                    v264 = 0;
                    v263 = 0;
                    LOBYTE(v104) = 5;
                    sub_140A6E070(v147 + 96, v104);
                  }
                }
              }
            }
          }
          v255 = 0;
          v254 = 0;
          sub_140A192F0(&v228);
          if ( v241 )
            sub_140001660(v236, v241, 1);
          v145 = v246;
          v20 = v240;
          v87 = v225;
          v85 = v91;
          v86 = v89;
          v146 = v247;
          if ( v246 )
            goto LABEL_198;
        }
      }
      else
      {
        v94 = 1;
        if ( v90 == 5 )
        {
          if ( !(*(_DWORD *)v247 ^ 0x656B6F74 | *(unsigned __int8 *)(v247 + 4) ^ 0x6E) )
            goto LABEL_161;
        }
        else if ( v90 == 8 && *(_QWORD *)v247 == 0x6567617265766F63LL )
        {
LABEL_161:
          v243.m256i_i64[0] = v227;
          v242 = v226;
          v243.m256i_i64[3] = v233;
          *(__m128i *)&v243.m256i_u64[1] = _mm_load_si128(&v232);
          v264 = 0;
          v263 = 0;
          sub_140868A10(v206, &v212, &v242);
          v139 = *(_QWORD *)&v206[8];
          if ( *(_QWORD *)v206 != -1 )
          {
            *(_QWORD *)&v216[40] = *(_QWORD *)&v206[40];
            *(__m128i *)&v216[24] = _mm_loadu_si128((const __m128i *)&v206[24]);
            memset(&v216[48], 0, 18);
            *(_OWORD *)v216 = *(_OWORD *)v206;
            *(_QWORD *)&v216[16] = *(_QWORD *)&v206[16];
            v139 = sub_1401759A0(*(_QWORD *)&v206[48], *(_QWORD *)&v206[56], v91);
          }
          v264 = 0;
          v263 = 0;
          sub_140A30950(v139 - 24, v247, v90, &v228);
          v94 = 0;
        }
        v255 = v94;
        v254 = v94;
        sub_140A192F0(&v228);
        if ( v241 )
          sub_140001660(v236, v241, 1);
        v20 = v240;
        v87 = v225;
        v86 = v89;
        if ( v246 )
          sub_140001660(v247, v246, 1);
        v140 = v94 == 0;
        v85 = v91;
        if ( !v140 )
          goto LABEL_169;
      }
    }
    sub_140A19A20(v86);
    v224 = v217;
    v245 = v217 < 2;
    if ( v217 < 2 )
      continue;
    break;
  }
  v149 = 0;
  v150 = v222;
  if ( (_QWORD)v222 )
    v150 = v223;
  LOBYTE(v149) = (_QWORD)v222 != 0;
  *(_OWORD *)v216 = v149;
  *(_OWORD *)&v216[16] = v222;
  *(_OWORD *)&v216[32] = v149;
  *(_OWORD *)&v216[48] = v222;
  *(_QWORD *)&v216[64] = v150;
  sub_140A24820(v206, v216);
  *(_QWORD *)(v20 + 24) = *(_QWORD *)&v206[16];
  *(__m128i *)(v20 + 8) = _mm_loadu_si128((const __m128i *)v206);
  *(_QWORD *)v20 = -1;
  v252 = 0;
  sub_140190700(&v212);
  v258 = 0;
  sub_140A19E50(&v207);
  if ( v238 )
    sub_140001660(v237, v238, 1);
  v259 = 0;
  sub_140A19A20(&v234);
  v260 = 0;
  sub_140A19E50(v200);
  v250 = 0;
  return sub_140190060(&v203);
}
