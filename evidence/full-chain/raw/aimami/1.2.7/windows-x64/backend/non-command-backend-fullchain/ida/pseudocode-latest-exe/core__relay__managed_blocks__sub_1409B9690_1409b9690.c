// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1409b9690 | successor of pre-update 0x140f25ea0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_1409B9690(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i si128; // xmm1
  __int64 v21; // rdi
  char v22; // al
  _QWORD *v23; // rdi
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r15
  __m128i v28; // rax
  __int64 v29; // rcx
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  __int64 v33; // rdi
  __m128i *v34; // rax
  __int64 v35; // rdi
  const __m128i *v36; // rbx
  _QWORD *v37; // r14
  __int64 v38; // rdx
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // r14
  const __m128i *v43; // r15
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rdi
  const __m128i *v51; // rdx
  __int64 v52; // r15
  __m128i v53; // xmm9
  __m128i v54; // xmm6
  __m128i v55; // xmm7
  __int8 v56; // cl
  char j; // r12
  __int64 v58; // r14
  __int64 v59; // rax
  unsigned __int64 v60; // r13
  __int64 v61; // r14
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // r15
  char v67; // al
  __int64 v68; // rbx
  __int64 v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __m128i v74; // xmm0
  __m128i v75; // xmm10
  __int64 m; // r9
  unsigned __int64 v77; // rax
  __m128i v78; // xmm11
  __int64 v80; // rbx
  int v81; // eax
  char v82; // bl
  int v83; // eax
  __int64 v84; // rdi
  unsigned __int64 v85; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __m128i v89; // xmm0
  __m128i v90; // xmm10
  __int64 k; // r9
  unsigned __int64 v92; // rax
  __m128i v93; // xmm11
  __int64 v95; // rbx
  int v96; // eax
  int v97; // eax
  __int64 v99; // rdi
  __int64 v100; // rbx
  __int64 v101; // r14
  const __m128i *v102; // r12
  __m128i v104; // xmm0
  __int64 v105; // rax
  unsigned __int64 v106; // rax
  __int64 v107; // rdi
  __int64 v108; // rdi
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdi
  __m128i v112; // xmm8
  __m128i v113; // xmm9
  __m128i v114; // xmm10
  __m128i v115; // xmm11
  __m128i v116; // xmm12
  __m128i v117; // xmm13
  __m128i v118; // xmm14
  __m128i v119; // xmm15
  char v121; // di
  __int64 v122; // rbx
  __int64 v123; // r13
  __int64 v124; // rax
  unsigned __int64 v125; // r14
  __int64 v126; // r13
  __int64 v127; // r12
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rbx
  __int64 v130; // r12
  __int64 v131; // rbx
  __int64 v132; // rbx
  __int64 v133; // rbx
  __int64 v134; // rdi
  __int64 v135; // rdi
  __int64 v136; // rbx
  __int64 v137; // rdi
  __int64 v138; // rdi
  int v139; // eax
  __int64 v140; // rbx
  __int64 v141; // rbx
  __int64 v142; // rdi
  __int64 v143; // rdi
  __int64 v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // rdi
  __int64 v147; // rdi
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rdi
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rcx
  char v158; // dl
  unsigned int v159; // eax
  int v160; // ecx
  int v161; // r8d
  int v162; // eax
  __int64 v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rdi
  __int64 v169; // rdx
  __int64 v170; // rdi
  __int64 v171; // rdi
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rax
  __int64 v175; // rdx
  __int64 v176; // rdi
  unsigned int v177; // ecx
  char v178; // al
  unsigned __int64 v179; // rdi
  __int64 v180; // rax
  __int64 v181; // rcx
  __int64 v182; // rcx
  __int64 v183; // rdx
  __int64 v184; // rdi
  __int64 v185; // rax
  __int64 v186; // rcx
  __int64 v187; // r8
  unsigned __int64 v188; // rax
  __int64 v189; // rdi
  __int64 v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rax
  __int64 v193; // rdx
  unsigned __int8 v194; // al
  __int64 v195; // rbx
  __int64 v196; // rdi
  __int64 v197; // rdi
  __int64 v198; // rdi
  __int64 v199; // rcx
  __int64 v200; // rdx
  __int64 v201; // r8
  __int64 v202; // rcx
  __m128i v203; // xmm0
  __m128i v204; // xmm1
  __m128i v205; // xmm2
  __m128i v206; // xmm3
  unsigned __int64 v207; // rcx
  __m128i v208; // xmm0
  __m128i v209; // xmm1
  char v210; // di
  __int64 v211; // rbx
  __int64 v212; // r14
  __int64 v213; // rdi
  __int64 v214; // r15
  __int64 v215; // r12
  const __m128i *v216; // r13
  const __m128i *v217; // rdi
  __m128i v219; // xmm0
  __int64 v220; // rax
  __int64 v221; // rdx
  unsigned __int64 v222; // rax
  __int64 v223; // r15
  __int64 v224; // r15
  __int64 v225; // rcx
  __int64 v226; // rdx
  __int64 v227; // rdx
  const __m128i *v228; // r15
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // rdi
  _QWORD *v232; // rbx
  __int64 v233; // rdx
  __int64 v235; // rbx
  __int64 v236; // r14
  const __m128i *v237; // r15
  __m128i v239; // xmm0
  __int64 v240; // rax
  __int64 v241; // rdx
  unsigned __int64 v242; // rax
  __int64 v243; // rdi
  __int64 i; // r13
  __m128i v246; // [rsp+28h] [rbp-58h] BYREF
  __int64 v247; // [rsp+38h] [rbp-48h]
  __int64 v248; // [rsp+40h] [rbp-40h]
  __int64 v249; // [rsp+48h] [rbp-38h]
  __int64 v250; // [rsp+50h] [rbp-30h]
  __int64 v251; // [rsp+58h] [rbp-28h] BYREF
  __int64 v252; // [rsp+60h] [rbp-20h]
  const __m128i *v253; // [rsp+68h] [rbp-18h]
  __m128i v254; // [rsp+70h] [rbp-10h] BYREF
  __m128i v255; // [rsp+80h] [rbp+0h]
  __int64 v256; // [rsp+90h] [rbp+10h]
  __int64 v257; // [rsp+98h] [rbp+18h]
  _QWORD *v258; // [rsp+A0h] [rbp+20h]
  __int64 v259; // [rsp+A8h] [rbp+28h]
  unsigned __int128 v260; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v261; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v262; // [rsp+C8h] [rbp+48h]
  _QWORD v263[3]; // [rsp+D0h] [rbp+50h] BYREF
  char v264; // [rsp+E8h] [rbp+68h]
  __int16 v265; // [rsp+F0h] [rbp+70h]
  const __m128i *v266; // [rsp+100h] [rbp+80h] BYREF
  __int64 v267; // [rsp+108h] [rbp+88h]
  __int64 v268; // [rsp+110h] [rbp+90h]
  __int64 v269; // [rsp+118h] [rbp+98h]
  unsigned __int64 v270; // [rsp+130h] [rbp+B0h]
  __int64 v271; // [rsp+138h] [rbp+B8h]
  __int64 v272; // [rsp+140h] [rbp+C0h]
  __int64 v273; // [rsp+148h] [rbp+C8h]
  __int64 v274; // [rsp+150h] [rbp+D0h]
  unsigned __int64 v275; // [rsp+158h] [rbp+D8h]
  __int64 v276; // [rsp+160h] [rbp+E0h]
  __int64 v277; // [rsp+168h] [rbp+E8h]
  char v278; // [rsp+177h] [rbp+F7h] BYREF
  __int64 v279; // [rsp+178h] [rbp+F8h]
  __m128i v280; // [rsp+180h] [rbp+100h] BYREF
  _BYTE v281[24]; // [rsp+190h] [rbp+110h] BYREF
  __m128i v282; // [rsp+1A8h] [rbp+128h] BYREF
  __m128i v283; // [rsp+1B8h] [rbp+138h] BYREF
  __m128i v284; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v285; // [rsp+1D8h] [rbp+158h]
  __int64 v286; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v287; // [rsp+1E8h] [rbp+168h]
  __int64 v288; // [rsp+1F0h] [rbp+170h]
  __int64 v289; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v290; // [rsp+200h] [rbp+180h]
  __int64 v291; // [rsp+208h] [rbp+188h]
  __int64 v292; // [rsp+210h] [rbp+190h]
  __int64 v293; // [rsp+218h] [rbp+198h]

  v293 = -2;
  sub_1416CC1A0(&v280, a2[9], a2[10]);
  v6 = v280.m128i_i64[1];
  if ( v280.m128i_i64[0] == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v6;
  }
  else
  {
    v273 = v280.m128i_i64[1];
    v259 = v280.m128i_i64[0];
    v7 = *(_QWORD *)v281;
    v8 = *(_QWORD *)(a3 + 8);
    v9 = *(_QWORD *)(a3 + 16);
    v10 = sub_1416AE140(v280.m128i_i64[1]);
    v15 = v10;
    v16 = *(_BYTE *)(v10 + 16) == 1;
    v258 = a2;
    if ( v16 )
    {
      v17 = *(_QWORD *)v10;
      v18 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      v17 = sub_1416C5230(v12, v11, v13, v14);
      *(_QWORD *)v15 = v17;
      *(_QWORD *)(v15 + 8) = v18;
      *(_BYTE *)(v15 + 16) = 1;
    }
    *(_QWORD *)v15 = v17 + 1;
    *(_OWORD *)v281 = xmmword_141A57990;
    v280 = _mm_loadu_si128((const __m128i *)&off_141A57980);
    *(_QWORD *)&v281[16] = v17;
    v282.m128i_i64[0] = v18;
    if ( v9 )
    {
      LOBYTE(v14) = 1;
      sub_141962910(&v280, v9, &v281[16], v14);
      for ( i = 0; i != v9; ++i )
      {
        sub_1416DB410(&v260, v8 + (i << 8));
        sub_140871180((__int64)&v280, &v260);
      }
    }
    v19 = _mm_load_si128(&v280);
    si128 = _mm_load_si128((const __m128i *)v281);
    v256 = *(_QWORD *)&v281[16];
    v257 = v282.m128i_i64[0];
    v255 = si128;
    v254 = v19;
    v21 = v273;
    sub_14099A090(&v251, v273, v7, &v254);
    v22 = sub_1409A20D0(v21, v7);
    v23 = v258;
    v24 = v22;
    sub_1409A32C0(&v280, v273, v7);
    v27 = v280.m128i_i64[0];
    if ( v280.m128i_i64[0] != -1 )
    {
      if ( v280.m128i_i64[0] )
        sub_140001660(v280.m128i_i64[1], v280.m128i_i64[0], 1);
      goto LABEL_10;
    }
    if ( ((v253 == nullptr) & (unsigned __int8)~v24) == 0 )
    {
LABEL_10:
      sub_14099F2F0((__int64)&v280, v23);
      v28 = v280;
      v29 = *(_QWORD *)v281;
      if ( v280.m128i_i64[0] != -1 )
      {
        v30 = _mm_loadu_si128(&v282);
        v31 = _mm_loadu_si128(&v283);
        v32 = _mm_loadu_si128(&v284);
        v260 = *(_OWORD *)&v281[8];
        *(_QWORD *)(a1 + 88) = v285;
        *(__m128i *)(a1 + 72) = v32;
        *(__m128i *)(a1 + 56) = v31;
        *(__m128i *)(a1 + 40) = v30;
        *(_QWORD *)(a1 + 8) = v28.m128i_i64[1];
        *(_QWORD *)(a1 + 16) = v29;
        *(__m128i *)(a1 + 24) = _mm_load_si128((const __m128i *)&v260);
        *(_QWORD *)a1 = v28.m128i_i64[0];
        goto LABEL_19;
      }
      if ( (unsigned __int64)(v280.m128i_i64[1] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(*(_QWORD *)v281, v280.m128i_i64[1], 1);
      if ( v7 < 0 )
      {
        v33 = 0;
        goto LABEL_16;
      }
      if ( v7 )
      {
        nullsub_1(v29, v28.m128i_i64[1]);
        v33 = 1;
        v48 = sub_140001650(v7, 1);
        if ( !v48 )
LABEL_16:
          sub_14196B2DB(v33, v7);
      }
      else
      {
        v48 = 1;
      }
      v248 = v27;
      v286 = v7;
      v49 = v48;
      v287 = v48;
      v288 = 0;
      LOBYTE(v289) = 2;
      v250 = v7;
      v50 = v273;
      sub_14099F010(&v260, v273, v7, &v254);
      v280.m128i_i64[0] = 0;
      v280.m128i_i64[1] = v7;
      *(_QWORD *)v281 = v50;
      *(_QWORD *)&v281[8] = v7;
      *(_QWORD *)&v281[16] = 0;
      v282.m128i_i64[0] = v7;
      v282.m128i_i64[1] = 0xA0000000ALL;
      v283.m128i_i8[0] = 1;
      v283.m128i_i16[4] = 0;
      v52 = 0;
      v53 = _mm_load_si128((const __m128i *)&xmmword_141A04550);
      v54 = _mm_load_si128((const __m128i *)&xmmword_141A505A0);
      v55 = _mm_load_si128((const __m128i *)&xmmword_141A505B0);
      v56 = 0;
      for ( j = 0; ; j = v67 )
      {
        v279 = v49;
        if ( (v56 & 1) != 0 )
        {
LABEL_116:
          HIDWORD(_RAX) = HIDWORD(v286);
          v275 = v286;
          v99 = *((_QWORD *)&v260 + 1);
          if ( *((_QWORD *)&v260 + 1) )
          {
            v100 = v262;
            if ( v262 )
            {
              v101 = v260;
              v102 = (const __m128i *)(v260 + 16);
              _R13D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v260));
              do
              {
                if ( !(_WORD)_R13D )
                {
                  do
                  {
                    v104 = _mm_load_si128(v102);
                    v101 -= 384;
                    ++v102;
                    _R13D = _mm_movemask_epi8(v104) ^ 0xFFFF;
                  }
                  while ( !_R13D );
                }
                __asm { tzcnt   eax, r13d }
                v105 = -3 * _RAX;
                v51 = *(const __m128i **)(v101 + 8 * v105 - 24);
                if ( v51 )
                  sub_140001660(*(_QWORD *)(v101 + 8 * v105 - 16), v51, 1);
                --v100;
                _RAX = _R13D & (unsigned int)(_R13D - 1);
                _R13D &= _R13D - 1;
              }
              while ( v100 );
            }
            v106 = (24 * v99 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v107 = v106 + v99 + 17;
            if ( v107 )
              sub_140001660(v260 - v106, v107, 16);
          }
          if ( v52 < 0 )
          {
            v108 = 0;
            goto LABEL_128;
          }
          v109 = v258[97];
          v276 = v109;
          v272 = v258[98];
          if ( v52 )
          {
            nullsub_1(v109, v51);
            v108 = 1;
            v110 = sub_140001650(v52, 1);
            if ( !v110 )
            {
LABEL_128:
              v271 = v279;
              v270 = v275;
              sub_14196B2DB(v108, v52);
            }
          }
          else
          {
            v110 = 1;
          }
          v289 = v52;
          v290 = v110;
          v291 = 0;
          v278 = 2;
          v249 = v52;
          v111 = v279;
          sub_14099F010(&v266, v279, v52, &v254);
          *(_QWORD *)&v260 = 0;
          *((_QWORD *)&v260 + 1) = v52;
          v261 = v111;
          v262 = v52;
          v263[0] = 0;
          v263[1] = v52;
          v263[2] = 0xA0000000ALL;
          v264 = 1;
          v265 = 0;
          v112 = _mm_load_si128((const __m128i *)&xmmword_141A50670);
          v113 = _mm_cvtsi32_si128(0x6E6Fu);
          v114 = _mm_load_si128((const __m128i *)&xmmword_141A045D0);
          v115 = _mm_load_si128((const __m128i *)&xmmword_141A045E0);
          v116 = _mm_load_si128((const __m128i *)&xmmword_141A045F0);
          v117 = _mm_load_si128((const __m128i *)&xmmword_141A045A0);
          v118 = _mm_load_si128((const __m128i *)&xmmword_141A045B0);
          v119 = _mm_load_si128((const __m128i *)&xmmword_141A045C0);
          _RAX = 0;
          LODWORD(v292) = 0;
          v121 = 0;
          while ( 2 )
          {
            while ( 2 )
            {
              while ( 2 )
              {
                while ( 2 )
                {
                  if ( (_RAX & 1) != 0 )
                  {
LABEL_390:
                    v211 = v289;
                    v212 = v290;
                    v213 = v291;
                    v214 = v267;
                    if ( v267 )
                    {
                      v276 = v291;
                      v292 = v289;
                      v215 = v269;
                      if ( v269 )
                      {
                        v216 = v266;
                        v217 = v266 + 1;
                        _EBX = ~_mm_movemask_epi8(_mm_load_si128(v266));
                        do
                        {
                          if ( !(_WORD)_EBX )
                          {
                            do
                            {
                              v219 = _mm_load_si128(v217);
                              v216 -= 24;
                              ++v217;
                              _EBX = _mm_movemask_epi8(v219) ^ 0xFFFF;
                            }
                            while ( !_EBX );
                          }
                          __asm { tzcnt   eax, ebx }
                          v220 = -3 * _RAX;
                          v221 = *((_QWORD *)&v216[-1] + v220 - 1);
                          if ( v221 )
                            sub_140001660(v216[-1].m128i_i64[v220], v221, 1);
                          --v215;
                          _RAX = _EBX & (unsigned int)(_EBX - 1);
                          _EBX &= _EBX - 1;
                        }
                        while ( v215 );
                      }
                      v222 = (24 * v214 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                      v223 = v222 + v214;
                      v16 = v223 == -17;
                      v224 = v223 + 17;
                      v211 = v292;
                      v213 = v276;
                      if ( !v16 )
                        sub_140001660((char *)v266 - v222, v224, 16);
                    }
                    if ( v275 )
                      sub_140001660(v279, v275, 1);
                    v225 = v258[9];
                    v226 = v258[10];
                    v271 = v212;
                    v270 = v211;
                    if ( (sub_1407C8880(v225, v226, v212, v213) & 1) != 0 )
                    {
                      *(_QWORD *)a1 = 2;
                      *(_QWORD *)(a1 + 8) = v227;
                      if ( v211 )
                        sub_140001660(v212, v211, 1);
                      goto LABEL_19;
                    }
                    v271 = v212;
                    v270 = v211;
                    sub_1407B9160(v227);
                    v228 = v253;
                    v266 = v253;
                    v229 = 1;
                    if ( v248 != -1 )
                      v229 = (__int64)&unk_141A610E3;
                    v230 = 24;
                    if ( v248 == -1 )
                      v230 = 0;
                    v260 = __PAIR128__(v230, v229);
                    v280.m128i_i64[0] = (__int64)&v266;
                    v280.m128i_i64[1] = (__int64)sub_1416EBAE0;
                    *(_QWORD *)v281 = &v260;
                    *(_QWORD *)&v281[8] = sub_140191200;
                    v271 = v212;
                    v270 = v211;
                    sub_1416DAFA0(&v246, &unk_141A610FB, &v280);
                    *(_QWORD *)(a1 + 24) = v247;
                    *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v246);
                    *(_QWORD *)a1 = -1;
                    if ( v211 )
                      sub_140001660(v212, v211, 1);
                    v231 = v252;
                    if ( v228 )
                    {
                      v232 = (_QWORD *)(v252 + 8);
                      do
                      {
                        v233 = *(v232 - 1);
                        if ( v233 )
                          sub_140001660(*v232, v233, 1);
                        v232 += 3;
                        v228 = (const __m128i *)((char *)v228 - 1);
                      }
                      while ( v228 );
                    }
                    HIDWORD(_RAX) = HIDWORD(v251);
                    if ( v251 )
                      sub_140001660(v231, 24 * v251, 8);
                    v40 = v254.m128i_i64[1];
                    if ( v254.m128i_i64[1] )
                    {
                      v235 = v255.m128i_i64[1];
                      if ( v255.m128i_i64[1] )
                      {
                        v236 = v254.m128i_i64[0];
                        v237 = (const __m128i *)(v254.m128i_i64[0] + 16);
                        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v254.m128i_i64[0]));
                        do
                        {
                          if ( !(_WORD)_R12D )
                          {
                            do
                            {
                              v239 = _mm_load_si128(v237);
                              v236 -= 384;
                              ++v237;
                              _R12D = _mm_movemask_epi8(v239) ^ 0xFFFF;
                            }
                            while ( !_R12D );
                          }
                          __asm { tzcnt   eax, r12d }
                          v240 = -3 * _RAX;
                          v241 = *(_QWORD *)(v236 + 8 * v240 - 24);
                          if ( v241 )
                            sub_140001660(*(_QWORD *)(v236 + 8 * v240 - 16), v241, 1);
                          --v235;
                          _RAX = _R12D & (unsigned int)(_R12D - 1);
                          _R12D &= _R12D - 1;
                        }
                        while ( v235 );
                      }
LABEL_426:
                      v242 = (24 * v40 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
                      v243 = v242 + v40 + 17;
                      if ( v243 )
                        sub_140001660(v254.m128i_i64[0] - v242, v243, 16);
                    }
                    goto LABEL_428;
                  }
                  v123 = v261;
                  HIDWORD(_RAX) = (unsigned __int64)sub_140A09020(&v280, &v261) >> 32;
                  if ( v280.m128i_i32[0] == 1 )
                  {
                    v124 = v260;
                    *(_QWORD *)&v260 = *(_QWORD *)v281;
                    v125 = *(_QWORD *)v281 - v124;
                    v126 = v124 + v123;
                    if ( *(_QWORD *)v281 == v124 )
                      goto LABEL_152;
LABEL_146:
                    if ( *(_BYTE *)(v126 + v125 - 1) == 10 )
                    {
                      if ( v125 == 1 )
                      {
                        v125 = 0;
                      }
                      else if ( *(_BYTE *)(v126 + v125 - 2) == 13 )
                      {
                        v125 -= 2LL;
                      }
                      else
                      {
                        --v125;
                      }
                    }
                  }
                  else
                  {
                    if ( HIBYTE(v265) )
                      goto LABEL_390;
                    HIBYTE(v265) = 1;
                    v125 = *((_QWORD *)&v260 + 1) - v260;
                    if ( ((unsigned __int8)v265 | (*((_QWORD *)&v260 + 1) != (_QWORD)v260)) != 1 )
                      goto LABEL_390;
                    v126 = v261 + v260;
                    if ( v125 )
                      goto LABEL_146;
                  }
LABEL_152:
                  v127 = sub_1408FEA60(v126, v125);
                  v129 = v128;
                  if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v278, v126, v125) )
                  {
                    switch ( v129 )
                    {
                      case 0x1EuLL:
                        if ( _mm_movemask_epi8(
                               _mm_and_si128(
                                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v127), v55),
                                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v127 + 14)), v54))) != 0xFFFF )
                          goto LABEL_176;
                        goto LABEL_169;
                      case 0x24uLL:
                        if ( !(unsigned int)sub_141923B40(v127, aAimamiRelayMan_4, 36) )
                          goto LABEL_169;
                        goto LABEL_176;
                      case 0x27uLL:
                        if ( (unsigned int)sub_141923B40(v127, aAimamiRelayCod_0, 39) )
                          goto LABEL_176;
LABEL_169:
                        v133 = v289;
                        v134 = v291;
                        if ( v125 > v289 - v291 )
                        {
                          sub_141939070((unsigned int)&v289, v291, v125, 1, 1);
                          v133 = v289;
                          v134 = v291;
                        }
                        else if ( !v125 )
                        {
                          goto LABEL_172;
                        }
                        sub_1419234B0(v134 + v290, v126, v125);
LABEL_172:
                        v135 = v125 + v134;
                        v291 = v135;
                        if ( v133 == v135 )
                          sub_141939070((unsigned int)&v289, v133, 1, 1, 1);
                        *(_BYTE *)(v290 + v135) = 10;
                        v291 = v135 + 1;
                        v121 = 0;
                        _RAX = HIBYTE(v265);
                        continue;
                      case 0x37uLL:
                        if ( (unsigned int)sub_141923B40(v127, aAimamiRelayMan_2, 55) )
                          goto LABEL_176;
                        goto LABEL_199;
                      case 0x3CuLL:
                        if ( !(unsigned int)sub_141923B40(v127, aAimamiRelayMan_0, 60) )
                          goto LABEL_199;
                        goto LABEL_176;
                      case 0x40uLL:
                        if ( (unsigned int)sub_141923B40(v127, aAimamiRelayCod, 64) )
                          goto LABEL_176;
LABEL_199:
                        v141 = v289;
                        v142 = v291;
                        if ( v125 > v289 - v291 )
                        {
                          sub_141939070((unsigned int)&v289, v291, v125, 1, 1);
                          v141 = v289;
                          v142 = v291;
                        }
                        else if ( !v125 )
                        {
                          goto LABEL_202;
                        }
                        sub_1419234B0(v142 + v290, v126, v125);
LABEL_202:
                        v143 = v125 + v142;
                        v291 = v143;
                        if ( v141 == v143 )
                          sub_141939070((unsigned int)&v289, v141, 1, 1, 1);
                        *(_BYTE *)(v290 + v143) = 10;
                        v291 = v143 + 1;
                        goto LABEL_138;
                      default:
LABEL_176:
                        if ( v121 == 1 )
                        {
                          v130 = v289;
                          v131 = v291;
                          goto LABEL_178;
                        }
                        if ( v129 && *(_BYTE *)v127 == 91 )
                        {
                          v136 = v289;
                          v137 = v291;
                          if ( v125 > v289 - v291 )
                          {
                            sub_141939070((unsigned int)&v289, v291, v125, 1, 1);
                            v136 = v289;
                            v137 = v291;
LABEL_185:
                            sub_1419234B0(v137 + v290, v126, v125);
                          }
                          else if ( v125 )
                          {
                            goto LABEL_185;
                          }
                          v138 = v125 + v137;
                          v291 = v138;
                          if ( v136 == v138 )
                            sub_141939070((unsigned int)&v289, v136, 1, 1, 1);
                          v139 = v290;
                          *(_BYTE *)(v290 + v138) = 10;
                          v291 = v138 + 1;
                          goto LABEL_197;
                        }
                        if ( (_BYTE)v292 == 1 )
                        {
                          v130 = v289;
                          v131 = v291;
                          goto LABEL_191;
                        }
                        if ( !(unsigned __int8)sub_140999F80(v127, v129) )
                          goto LABEL_229;
                        *(_QWORD *)v281 = v129;
                        *(_QWORD *)&v281[8] = v127;
                        *(_QWORD *)&v281[16] = v129;
                        v282.m128i_i64[0] = 0;
                        v282.m128i_i64[1] = v129;
                        v283.m128i_i64[0] = 0x3D0000003DLL;
                        v283.m128i_i8[8] = 1;
                        v284.m128i_i16[0] = 1;
                        v280 = (__m128i)1uLL;
                        sub_140A09020(&v286, &v281[8]);
                        if ( (_DWORD)v286 == 1 )
                        {
                          v144 = v288;
                          v280.m128i_i64[1] = v288;
                        }
                        else
                        {
                          if ( v284.m128i_i8[1] )
                            goto LABEL_229;
                          v284.m128i_i8[1] = 1;
                          v144 = v280.m128i_i64[1];
                          if ( !v284.m128i_i8[0] && *(_QWORD *)v281 == v280.m128i_i64[1] )
                            goto LABEL_229;
                        }
                        if ( !v280.m128i_i64[0] )
                          goto LABEL_229;
                        if ( v280.m128i_i64[0] == 1 )
                        {
                          v280.m128i_i64[0] = 0;
                          if ( v284.m128i_i8[1] )
                            goto LABEL_229;
                          v284.m128i_i8[1] = 1;
                          if ( !v284.m128i_i8[0] && *(_QWORD *)v281 == v144 )
                            goto LABEL_229;
                          v145 = *(_QWORD *)v281 - v144;
LABEL_214:
                          v146 = *(_QWORD *)&v281[8] + v144;
                          goto LABEL_222;
                        }
                        --v280.m128i_i64[0];
                        if ( v284.m128i_i8[1] )
                          goto LABEL_229;
                        v147 = *(_QWORD *)&v281[8];
                        sub_140A09020(&v286, &v281[8]);
                        if ( (_DWORD)v286 != 1 )
                        {
                          if ( v284.m128i_i8[1] )
                            goto LABEL_229;
                          v284.m128i_i8[1] = 1;
                          v144 = v280.m128i_i64[1];
                          v145 = *(_QWORD *)v281 - v280.m128i_i64[1];
                          if ( (v284.m128i_i8[0] | (*(_QWORD *)v281 != v280.m128i_i64[1])) != 1 )
                            goto LABEL_229;
                          goto LABEL_214;
                        }
                        v145 = v287 - v280.m128i_i64[1];
                        v146 = v280.m128i_i64[1] + v147;
                        v280.m128i_i64[1] = v288;
LABEL_222:
                        v148 = sub_1408FEA60(v146, v145);
                        v150 = sub_1408FECE0(v148, v149, 34);
                        if ( v151 )
                        {
                          v152 = v151;
                          v292 = v150;
                          if ( !(unsigned __int8)sub_140996F40(v150, v151, &v254)
                            && ((unsigned __int8)sub_1408458E0(&v266, v292) || (unsigned __int8)sub_1409D4510(
                                                                                                  v292,
                                                                                                  v152)) )
                          {
                            goto LABEL_341;
                          }
                        }
LABEL_229:
                        if ( v129 < 0xE )
                          goto LABEL_230;
                        if ( *(_QWORD *)v127 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v127 + 6) ^ 0x72656469766F7270LL )
                          goto LABEL_232;
                        if ( v129 == 14 )
                          goto LABEL_264;
                        v158 = *(_BYTE *)(v127 + 14);
                        v159 = (unsigned __int8)v158;
                        if ( v158 < 0 )
                        {
                          v160 = v158 & 0x1F;
                          v161 = *(_BYTE *)(v127 + 15) & 0x3F;
                          if ( (unsigned __int8)v158 <= 0xDFu )
                          {
                            v159 = v161 | (v160 << 6);
                          }
                          else
                          {
                            v162 = (v161 << 6) | *(_BYTE *)(v127 + 16) & 0x3F;
                            if ( (unsigned __int8)v158 < 0xF0u )
                              v159 = (v160 << 12) | v162;
                            else
                              v159 = ((v158 & 7) << 18) | (v162 << 6) | *(_BYTE *)(v127 + 17) & 0x3F;
                          }
                        }
                        if ( v159 == 32 || v159 == 61 || v159 - 9 < 5 )
                          goto LABEL_264;
                        if ( v159 < 0x85 )
                          goto LABEL_232;
                        v177 = v159 >> 8;
                        if ( v159 >> 8 > 0x1F )
                        {
                          if ( v177 == 32 )
                          {
                            v178 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v159) >> 1;
                          }
                          else
                          {
                            if ( v177 != 48 )
                              goto LABEL_232;
                            v178 = v159 == 12288;
                          }
                        }
                        else if ( v177 )
                        {
                          if ( v177 != 22 )
                            goto LABEL_232;
                          v178 = v159 == 5760;
                        }
                        else
                        {
                          v178 = *((_BYTE *)off_1422402D0 + (unsigned __int8)v159);
                        }
                        if ( (v178 & 1) == 0 )
                          goto LABEL_232;
LABEL_264:
                        *(_QWORD *)v281 = v129;
                        *(_QWORD *)&v281[8] = v127;
                        *(_QWORD *)&v281[16] = v129;
                        v282.m128i_i64[0] = 0;
                        v282.m128i_i64[1] = v129;
                        v283.m128i_i64[0] = 0x3D0000003DLL;
                        v283.m128i_i8[8] = 1;
                        v284.m128i_i16[0] = 1;
                        v280 = (__m128i)1uLL;
                        sub_140A09020(&v286, &v281[8]);
                        if ( (_DWORD)v286 == 1 )
                        {
                          v168 = v288;
                          v280.m128i_i64[1] = v288;
                        }
                        else
                        {
                          if ( v284.m128i_i8[1] )
                            goto LABEL_232;
                          v284.m128i_i8[1] = 1;
                          v168 = v280.m128i_i64[1];
                          if ( !v284.m128i_i8[0] && *(_QWORD *)v281 == v280.m128i_i64[1] )
                            goto LABEL_232;
                        }
                        if ( !v280.m128i_i64[0] )
                          goto LABEL_232;
                        if ( v280.m128i_i64[0] == 1 )
                        {
                          v280.m128i_i64[0] = 0;
                          if ( v284.m128i_i8[1] )
                            goto LABEL_232;
                          v284.m128i_i8[1] = 1;
                          if ( !v284.m128i_i8[0] && *(_QWORD *)v281 == v168 )
                            goto LABEL_232;
                          v169 = *(_QWORD *)v281 - v168;
LABEL_272:
                          v170 = *(_QWORD *)&v281[8] + v168;
                          goto LABEL_280;
                        }
                        --v280.m128i_i64[0];
                        if ( v284.m128i_i8[1] )
                          goto LABEL_232;
                        v171 = *(_QWORD *)&v281[8];
                        sub_140A09020(&v286, &v281[8]);
                        if ( (_DWORD)v286 != 1 )
                        {
                          if ( v284.m128i_i8[1] )
                            goto LABEL_232;
                          v284.m128i_i8[1] = 1;
                          v168 = v280.m128i_i64[1];
                          v169 = *(_QWORD *)v281 - v280.m128i_i64[1];
                          if ( (v284.m128i_i8[0] | (*(_QWORD *)v281 != v280.m128i_i64[1])) != 1 )
                            goto LABEL_232;
                          goto LABEL_272;
                        }
                        v169 = v287 - v280.m128i_i64[1];
                        v170 = v280.m128i_i64[1] + v171;
                        v280.m128i_i64[1] = v288;
LABEL_280:
                        v172 = sub_1408FEA60(v170, v169);
                        v174 = sub_1408FECE0(v172, v173, 34);
                        if ( v175 )
                        {
                          v176 = v175;
                          v292 = v174;
                          if ( !(unsigned __int8)sub_140996F40(v174, v175, &v254)
                            && ((unsigned __int8)sub_1408458E0(&v266, v292) || (unsigned __int8)sub_1409D4510(
                                                                                                  v292,
                                                                                                  v176)) )
                          {
                            goto LABEL_341;
                          }
                        }
LABEL_232:
                        if ( v129 < 0x12 )
                        {
                          if ( v129 == 14 )
                          {
LABEL_230:
                            LODWORD(v292) = 0;
                            goto LABEL_332;
                          }
LABEL_300:
                          v180 = *(_QWORD *)v127 ^ 0x625F69616E65706FLL;
                          v181 = *(_QWORD *)(v127 + 7) ^ 0x6C72755F65736162LL;
                          LODWORD(v292) = 1702060289;
                          if ( v180 | v181 )
                            goto LABEL_332;
                          *(_QWORD *)v281 = v129;
                          *(_QWORD *)&v281[8] = v127;
                          *(_QWORD *)&v281[16] = v129;
                          v282.m128i_i64[0] = 0;
                          v282.m128i_i64[1] = v129;
                          v283.m128i_i64[0] = 0x3D0000003DLL;
                          v283.m128i_i8[8] = 1;
                          v284.m128i_i16[0] = 1;
                          v280 = (__m128i)1uLL;
                          sub_140A09020(&v286, &v281[8]);
                          if ( (_DWORD)v286 == 1 )
                          {
                            v182 = v288;
                            v280.m128i_i64[1] = v288;
                            goto LABEL_303;
                          }
                          if ( v284.m128i_i8[1]
                            || (v284.m128i_i8[1] = 1, v182 = v280.m128i_i64[1], !v284.m128i_i8[0])
                            && *(_QWORD *)v281 == v280.m128i_i64[1] )
                          {
                            v183 = 1;
                            v184 = 0;
                            goto LABEL_328;
                          }
LABEL_303:
                          v183 = 1;
                          v184 = v280.m128i_i64[0];
                          if ( v280.m128i_i64[0] )
                          {
                            if ( v280.m128i_i64[0] == 1 )
                            {
                              v280.m128i_i64[0] = 0;
                              if ( !v284.m128i_i8[1] )
                              {
                                v284.m128i_i8[1] = 1;
                                if ( v284.m128i_i8[0] || *(_QWORD *)v281 != v182 )
                                {
                                  v185 = *(_QWORD *)v281 - v182;
                                  goto LABEL_309;
                                }
                              }
                            }
                            else
                            {
                              --v280.m128i_i64[0];
                              if ( !v284.m128i_i8[1] )
                              {
                                v189 = *(_QWORD *)&v281[8];
                                sub_140A09020(&v286, &v281[8]);
                                if ( (_DWORD)v286 == 1 )
                                {
                                  v185 = v287 - v280.m128i_i64[1];
                                  v186 = v280.m128i_i64[1] + v189;
                                  v280.m128i_i64[1] = v288;
                                }
                                else
                                {
                                  if ( v284.m128i_i8[1]
                                    || (v284.m128i_i8[1] = 1,
                                        v182 = v280.m128i_i64[1],
                                        v185 = *(_QWORD *)v281 - v280.m128i_i64[1],
                                        (v284.m128i_i8[0] | (*(_QWORD *)v281 != v280.m128i_i64[1])) != 1) )
                                  {
                                    v184 = 0;
                                    v183 = 1;
                                    goto LABEL_328;
                                  }
LABEL_309:
                                  v186 = *(_QWORD *)&v281[8] + v182;
                                }
                                v190 = sub_1408FEA60(v186, v185);
                                v192 = sub_1408FECE0(v190, v191, 34);
                                v184 = v193;
                                v183 = v192;
                                goto LABEL_328;
                              }
                            }
                            v184 = 0;
                          }
LABEL_328:
                          sub_1409B7E30(&v286, v183, v184);
                          if ( !v184 )
                            goto LABEL_330;
                          v277 = v287;
                          if ( (unsigned __int8)sub_140A09D60(aCodexRouterV1_0, 16, v287, v288) )
                            goto LABEL_330;
                          if ( !(unsigned __int8)sub_1409A20D0(v279, v52) )
                          {
                            sub_14099A090(&v280, v279, v52, &v254);
                            v198 = *(_QWORD *)v281;
                            sub_1402346F0(&v280);
                            if ( v198 )
                            {
                              if ( v280.m128i_i64[0] )
                              {
                                v199 = v280.m128i_i64[1];
                                v200 = 24 * v280.m128i_i64[0];
                                v201 = 8;
                                goto LABEL_351;
                              }
                            }
                            else
                            {
                              if ( v280.m128i_i64[0] )
                                sub_140001660(v280.m128i_i64[1], 24 * v280.m128i_i64[0], 8);
                              sub_1409A32C0(&v280, v279, v52);
                              v200 = v280.m128i_i64[0];
                              if ( v280.m128i_i64[0] == -1 )
                              {
LABEL_330:
                                if ( v286 )
                                  sub_140001660(v287, v286, 1);
LABEL_332:
                                v194 = sub_1409C7D10(v127, v129);
                                if ( (v194 & (unsigned __int8)v292) != 0
                                  && (!(*(_QWORD *)v127 ^ 0x5F74697563726963LL
                                      | *(_QWORD *)(v127 + 7) ^ 0x72656B616572625FLL)
                                   || !(*(_QWORD *)v127 ^ 0x72656469766F7270LL
                                      | *(_QWORD *)(v127 + 7) ^ 0x726574756F725F72LL)) )
                                {
                                  goto LABEL_341;
                                }
                                v195 = v289;
                                v196 = v291;
                                if ( v125 > v289 - v291 )
                                {
                                  sub_141939070((unsigned int)&v289, v291, v125, 1, 1);
                                  v195 = v289;
                                  v196 = v291;
LABEL_337:
                                  sub_1419234B0(v196 + v290, v126, v125);
                                }
                                else if ( v125 )
                                {
                                  goto LABEL_337;
                                }
                                v197 = v125 + v196;
                                v291 = v197;
                                if ( v195 == v197 )
                                  sub_141939070((unsigned int)&v289, v195, 1, 1, 1);
                                *(_BYTE *)(v290 + v197) = 10;
                                v291 = v197 + 1;
                                goto LABEL_341;
                              }
                              if ( v280.m128i_i64[0] )
                              {
                                v199 = v280.m128i_i64[1];
                                v201 = 1;
LABEL_351:
                                sub_140001660(v199, v200, v201);
                              }
                            }
                          }
                          if ( v286 )
                            sub_140001660(v277, v286, 1);
                          goto LABEL_341;
                        }
                        if ( _mm_movemask_epi8(
                               _mm_and_si128(
                                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v127 + 16)), v113),
                                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v127), v112))) != 0xFFFF )
                          goto LABEL_300;
                        *(_QWORD *)v281 = v129;
                        *(_QWORD *)&v281[8] = v127;
                        *(_QWORD *)&v281[16] = v129;
                        v282.m128i_i64[0] = 0;
                        v282.m128i_i64[1] = v129;
                        v283.m128i_i64[0] = 0x3D0000003DLL;
                        v283.m128i_i8[8] = 1;
                        v284.m128i_i16[0] = 1;
                        v280 = (__m128i)1uLL;
                        sub_140A09020(&v286, &v281[8]);
                        if ( (_DWORD)v286 == 1 )
                        {
                          v153 = v288;
                          v280.m128i_i64[1] = v288;
                        }
                        else if ( v284.m128i_i8[1]
                               || (v284.m128i_i8[1] = 1, v153 = v280.m128i_i64[1], !v284.m128i_i8[0])
                               && *(_QWORD *)v281 == v280.m128i_i64[1] )
                        {
                          v154 = 1;
                          v155 = 0;
                          goto LABEL_296;
                        }
                        v154 = 1;
                        v155 = v280.m128i_i64[0];
                        if ( !v280.m128i_i64[0] )
                          goto LABEL_296;
                        if ( v280.m128i_i64[0] == 1 )
                        {
                          v280.m128i_i64[0] = 0;
                          if ( v284.m128i_i8[1] || (v284.m128i_i8[1] = 1, !v284.m128i_i8[0]) && *(_QWORD *)v281 == v153 )
                          {
LABEL_255:
                            v155 = 0;
                            goto LABEL_296;
                          }
                          v156 = *(_QWORD *)v281 - v153;
LABEL_244:
                          v157 = *(_QWORD *)&v281[8] + v153;
LABEL_259:
                          v164 = sub_1408FEA60(v157, v156);
                          v166 = sub_1408FECE0(v164, v165, 34);
                          v155 = v167;
                          v154 = v166;
                          goto LABEL_296;
                        }
                        --v280.m128i_i64[0];
                        if ( v284.m128i_i8[1] )
                          goto LABEL_255;
                        v163 = *(_QWORD *)&v281[8];
                        sub_140A09020(&v286, &v281[8]);
                        if ( (_DWORD)v286 == 1 )
                        {
                          v156 = v287 - v280.m128i_i64[1];
                          v157 = v280.m128i_i64[1] + v163;
                          v280.m128i_i64[1] = v288;
                          goto LABEL_259;
                        }
                        if ( !v284.m128i_i8[1] )
                        {
                          v284.m128i_i8[1] = 1;
                          v153 = v280.m128i_i64[1];
                          v156 = *(_QWORD *)v281 - v280.m128i_i64[1];
                          if ( (v284.m128i_i8[0] | (*(_QWORD *)v281 != v280.m128i_i64[1])) == 1 )
                            goto LABEL_244;
                        }
                        v155 = 0;
                        v154 = 1;
LABEL_296:
                        sub_1409B7E30(&v286, v154, v155);
                        if ( !v155 )
                          goto LABEL_298;
                        v179 = v288;
                        v292 = v287;
                        if ( (unsigned __int8)sub_140994480(v287, v288, v276, v272) )
                          goto LABEL_298;
                        sub_1401E7560((unsigned int)&v280, v179, 0, 1, 1);
                        v274 = v280.m128i_i64[1];
                        if ( v280.m128i_i32[0] == 1 )
                          sub_14196B2DB(v274, *(_QWORD *)v281);
                        v187 = *(_QWORD *)v281;
                        v277 = *(_QWORD *)v281;
                        if ( v179 )
                        {
                          sub_1419234B0(*(_QWORD *)v281, v292, v179);
                          if ( v179 < 8 )
                          {
                            v188 = 0;
                            v187 = v277;
                            goto LABEL_375;
                          }
                          if ( v179 < 0x20 )
                          {
                            v188 = 0;
                            v187 = v277;
LABEL_358:
                            v207 = v188;
                            v188 = v179 & 0xFFFFFFFFFFFFFFF8uLL;
                            do
                            {
                              v208 = _mm_loadl_epi64((const __m128i *)(v187 + v207));
                              v209 = _mm_add_epi8(v208, v114);
                              *(_QWORD *)(v187 + v207) = _mm_or_si128(
                                                           _mm_andnot_si128(
                                                             _mm_cmpeq_epi8(_mm_max_epu8(v209, v115), v209),
                                                             v116),
                                                           v208).m128i_u64[0];
                              v207 += 8LL;
                            }
                            while ( v188 != v207 );
                            goto LABEL_376;
                          }
                          v188 = v179 & 0xFFFFFFFFFFFFFFE0uLL;
                          v202 = 0;
                          v187 = v277;
                          do
                          {
                            v203 = _mm_loadu_si128((const __m128i *)(v187 + v202));
                            v204 = _mm_loadu_si128((const __m128i *)(v187 + v202 + 16));
                            v205 = _mm_add_epi8(v203, v117);
                            v206 = _mm_add_epi8(v204, v117);
                            *(__m128i *)(v187 + v202) = _mm_or_si128(
                                                          _mm_and_si128(
                                                            _mm_cmpeq_epi8(_mm_min_epu8(v205, v118), v205),
                                                            v119),
                                                          v203);
                            *(__m128i *)(v187 + v202 + 16) = _mm_or_si128(
                                                               _mm_and_si128(
                                                                 _mm_cmpeq_epi8(_mm_min_epu8(v206, v118), v206),
                                                                 v119),
                                                               v204);
                            v202 += 32;
                          }
                          while ( v188 != v202 );
                          if ( v179 != v188 )
                          {
                            if ( (v179 & 0x18) != 0 )
                              goto LABEL_358;
                            do
                            {
LABEL_375:
                              *(_BYTE *)(v187 + v188) |= 32 * ((unsigned __int8)(*(_BYTE *)(v187 + v188) - 65) < 0x1Au);
                              ++v188;
LABEL_376:
                              ;
                            }
                            while ( v179 != v188 );
                          }
                        }
                        if ( (unsigned __int8)sub_140A09D60(aCcSwitch, 9, v187, v179)
                          || (unsigned __int8)sub_140A09D60(aCcSwitch_0, 9, v277, v179)
                          || (unsigned __int8)sub_140A09D60(aCcswitch, 8, v277, v179)
                          || (unsigned __int8)sub_140A09D60(aCodexSwitch, 12, v277, v179)
                          || (unsigned __int8)sub_140A09D60(aCodexSwitch_0, 12, v277, v179) )
                        {
                          if ( v274 )
                            sub_140001660(v277, v274, 1);
                        }
                        else
                        {
                          v210 = sub_140A09D60(aDeecodex, 8, v277, v179);
                          if ( v274 )
                            sub_140001660(v277, v274, 1);
                          if ( !v210 )
                          {
LABEL_298:
                            if ( v286 )
                              sub_140001660(v287, v286, 1);
                            goto LABEL_300;
                          }
                        }
                        if ( v286 )
                          sub_140001660(v292, v286, 1);
                        break;
                    }
                    goto LABEL_341;
                  }
                  break;
                }
                v130 = v289;
                v131 = v291;
                if ( v121 == 1 )
                {
LABEL_178:
                  if ( v125 > v130 - v131 )
                  {
                    sub_141939070((unsigned int)&v289, v131, v125, 1, 1);
                    v130 = v289;
                    v131 = v291;
                  }
                  else if ( !v125 )
                  {
LABEL_135:
                    v122 = v125 + v131;
                    v291 = v122;
                    if ( v130 == v122 )
                      sub_141939070((unsigned int)&v289, v130, 1, 1, 1);
                    *(_BYTE *)(v290 + v122) = 10;
                    v291 = v122 + 1;
LABEL_138:
                    v121 = 1;
                    _RAX = HIBYTE(v265);
                    continue;
                  }
                  sub_1419234B0(v131 + v290, v126, v125);
                  goto LABEL_135;
                }
                break;
              }
              if ( (v292 & 1) == 0 )
              {
                if ( v125 > v289 - v291 )
                {
                  sub_141939070((unsigned int)&v289, v291, v125, 1, 1);
                  v130 = v289;
                  v131 = v291;
LABEL_160:
                  sub_1419234B0(v131 + v290, v126, v125);
                }
                else if ( v125 )
                {
                  goto LABEL_160;
                }
                v132 = v125 + v131;
                v291 = v132;
                if ( v130 == v132 )
                  sub_141939070((unsigned int)&v289, v130, 1, 1, 1);
                *(_BYTE *)(v290 + v132) = 10;
                v291 = v132 + 1;
LABEL_341:
                LODWORD(v292) = 0;
                v121 = 0;
                _RAX = HIBYTE(v265);
                continue;
              }
              break;
            }
LABEL_191:
            if ( v125 > v130 - v131 )
            {
              sub_141939070((unsigned int)&v289, v131, v125, 1, 1);
              v130 = v289;
              v131 = v291;
LABEL_193:
              sub_1419234B0(v131 + v290, v126, v125);
            }
            else if ( v125 )
            {
              goto LABEL_193;
            }
            v140 = v125 + v131;
            v291 = v140;
            if ( v130 == v140 )
              sub_141939070((unsigned int)&v289, v130, 1, 1, 1);
            v139 = v290;
            *(_BYTE *)(v290 + v140) = 10;
            v291 = v140 + 1;
LABEL_197:
            LOBYTE(v139) = 1;
            LODWORD(v292) = v139;
            v121 = 0;
            _RAX = HIBYTE(v265);
            continue;
          }
        }
        v58 = *(_QWORD *)v281;
        sub_140A09020(&v266, v281);
        if ( (_DWORD)v266 == 1 )
          break;
        if ( v283.m128i_i8[9] )
          goto LABEL_116;
        v283.m128i_i8[9] = 1;
        v60 = v280.m128i_i64[1] - v280.m128i_i64[0];
        if ( (v283.m128i_i8[8] | (v280.m128i_i64[1] != v280.m128i_i64[0])) != 1 )
          goto LABEL_116;
        v61 = *(_QWORD *)v281 + v280.m128i_i64[0];
        if ( v60 )
          goto LABEL_48;
LABEL_54:
        v62 = sub_1408FEA60(v61, v60);
        v64 = v63;
        if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v289, v61, v60) )
        {
          switch ( v64 )
          {
            case 0LL:
              break;
            case 30LL:
              if ( _mm_movemask_epi8(
                     _mm_and_si128(
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v62), v55),
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v62 + 14)), v54))) == 0xFFFF )
                goto LABEL_57;
              goto LABEL_63;
            case 36LL:
              if ( !(unsigned int)sub_141923B40(v62, aAimamiRelayMan_4, 36) )
                goto LABEL_57;
              goto LABEL_63;
            case 39LL:
              if ( !(unsigned int)sub_141923B40(v62, aAimamiRelayCod_0, 39) )
                goto LABEL_57;
              goto LABEL_63;
            case 55LL:
              if ( !(unsigned int)sub_141923B40(v62, aAimamiRelayMan_2, 55) )
                goto LABEL_57;
              goto LABEL_63;
            case 60LL:
              if ( (unsigned int)sub_141923B40(v62, aAimamiRelayMan_0, 60) )
                goto LABEL_63;
              goto LABEL_57;
            case 64LL:
              if ( (unsigned int)sub_141923B40(v62, aAimamiRelayCod, 64) )
                goto LABEL_63;
LABEL_57:
              v65 = v286;
              if ( v60 > v286 - v52 )
              {
                sub_141939070((unsigned int)&v286, v52, v60, 1, 1);
                v279 = v287;
                v52 = v288;
              }
              else if ( !v60 )
              {
                goto LABEL_60;
              }
              sub_1419234B0(v52 + v279, v61, v60);
              v65 = v286;
LABEL_60:
              v66 = v60 + v52;
              v288 = v66;
              if ( v65 == v66 )
                goto LABEL_75;
              goto LABEL_76;
            default:
LABEL_63:
              if ( *(_BYTE *)v62 != 91 || *(_BYTE *)(v62 + v64 - 1) != 93 )
                break;
              if ( v64 == 1 || *(char *)(v62 + 1) <= -65 )
                sub_14196B4F0(v62, v64, 1, v64 - 1, (__int64)&off_141A496C8);
              if ( (unsigned __int64)(v64 - 2) >= 0x10 )
              {
                if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v62 + 1)), v53)) == 0xFFFF )
                {
                  sub_1409951E0(&v266, v62 + 17, v64 - 18);
                  v68 = v267;
                  v84 = v268;
                  if ( (unsigned __int8)sub_140996F40(v267, v268, &v254) )
                    goto LABEL_98;
                  v292 = v68;
                  if ( v262 )
                  {
                    v85 = sub_1406CECD0(v263, &v266);
                    _RCX = v85 >> 57;
                    v88 = *((_QWORD *)&v260 + 1);
                    v87 = v260;
                    v89 = _mm_cvtsi32_si128(v85 >> 57);
                    v90 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v89, v89), 0), 68);
                    for ( k = 0; ; k += 16 )
                    {
                      v92 = v88 & v85;
                      v93 = _mm_loadu_si128((const __m128i *)(v87 + v92));
                      _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v93, v90));
                      if ( _R12D )
                        break;
LABEL_107:
                      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v93, (__m128i)-1LL));
                      if ( (_DWORD)_RCX )
                        goto LABEL_109;
                      v85 = k + v92 + 16;
                    }
                    v275 = v92;
                    v276 = v88;
                    v272 = k;
                    while ( 1 )
                    {
                      __asm { tzcnt   ecx, r12d }
                      _RCX = -(__int64)(v88 & (v92 + _RCX));
                      if ( v84 == *(_QWORD *)(v87 + 24 * _RCX - 8) )
                      {
                        v95 = v87;
                        v96 = sub_141923B40(v292, *(_QWORD *)(v87 + 24 * _RCX - 16), v84);
                        v87 = v95;
                        v82 = 1;
                        if ( !v96 )
                          goto LABEL_110;
                      }
                      v97 = _R12D - 1;
                      LOWORD(v97) = _R12D & (_R12D - 1);
                      v16 = (_WORD)v97 == 0;
                      _R12D = v97;
                      v92 = v275;
                      v88 = v276;
                      k = v272;
                      if ( v16 )
                        goto LABEL_107;
                    }
                  }
                  goto LABEL_109;
                }
              }
              else if ( (unsigned __int64)(v64 - 2) < 9 )
              {
                goto LABEL_71;
              }
              if ( *(_QWORD *)(v62 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v62 + 9) ^ 0x2ELL )
                goto LABEL_71;
              sub_1409951E0(&v266, v62 + 10, v64 - 11);
              v68 = v267;
              v69 = v268;
              if ( (unsigned __int8)sub_140996F40(v267, v268, &v254) )
              {
LABEL_98:
                v51 = v266;
                if ( v266 )
                  sub_140001660(v68, v266, 1);
                goto LABEL_71;
              }
              v292 = v68;
              if ( v262 )
              {
                v70 = sub_1406CECD0(v263, &v266);
                _RCX = v70 >> 57;
                v73 = *((_QWORD *)&v260 + 1);
                v72 = v260;
                v74 = _mm_cvtsi32_si128(v70 >> 57);
                v75 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v74, v74), 0), 68);
                for ( m = 0; ; m += 16 )
                {
                  v77 = v73 & v70;
                  v78 = _mm_loadu_si128((const __m128i *)(v72 + v77));
                  _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v78, v75));
                  if ( _R12D )
                    break;
LABEL_95:
                  _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v78, (__m128i)-1LL));
                  if ( (_DWORD)_RCX )
                    goto LABEL_109;
                  v70 = m + v77 + 16;
                }
                v275 = v77;
                v276 = v73;
                v272 = m;
                while ( 1 )
                {
                  __asm { tzcnt   ecx, r12d }
                  _RCX = -(__int64)(v73 & (v77 + _RCX));
                  if ( v69 == *(_QWORD *)(v72 + 24 * _RCX - 8) )
                  {
                    v80 = v72;
                    v81 = sub_141923B40(v292, *(_QWORD *)(v72 + 24 * _RCX - 16), v69);
                    v72 = v80;
                    v82 = 1;
                    if ( !v81 )
                      goto LABEL_110;
                  }
                  v83 = _R12D - 1;
                  LOWORD(v83) = _R12D & (_R12D - 1);
                  v16 = (_WORD)v83 == 0;
                  _R12D = v83;
                  v77 = v275;
                  v73 = v276;
                  m = v272;
                  if ( v16 )
                    goto LABEL_95;
                }
              }
LABEL_109:
              v82 = 0;
LABEL_110:
              v51 = v266;
              if ( v266 )
                sub_140001660(v292, v266, 1);
              v67 = 1;
              if ( v82 )
                goto LABEL_39;
              goto LABEL_71;
          }
        }
        v67 = 1;
        if ( (j & 1) != 0 )
        {
LABEL_39:
          v49 = v279;
          goto LABEL_40;
        }
LABEL_71:
        v65 = v286;
        if ( v60 > v286 - v52 )
        {
          sub_141939070((unsigned int)&v286, v52, v60, 1, 1);
          v279 = v287;
          v52 = v288;
LABEL_73:
          sub_1419234B0(v52 + v279, v61, v60);
          v65 = v286;
          goto LABEL_74;
        }
        if ( v60 )
          goto LABEL_73;
LABEL_74:
        v66 = v60 + v52;
        v288 = v66;
        if ( v65 == v66 )
        {
LABEL_75:
          sub_141939070((unsigned int)&v286, v65, 1, 1, 1);
          v66 = v65;
        }
LABEL_76:
        v49 = v287;
        *(_BYTE *)(v287 + v66) = 10;
        v52 = v66 + 1;
        v288 = v52;
        v67 = 0;
LABEL_40:
        v56 = v283.m128i_i8[9];
      }
      v59 = v280.m128i_i64[0];
      v280.m128i_i64[0] = v268;
      v60 = v268 - v59;
      v61 = v59 + v58;
      if ( v268 == v59 )
        goto LABEL_54;
LABEL_48:
      if ( *(_BYTE *)(v61 + v60 - 1) == 10 )
      {
        if ( v60 == 1 )
        {
          v60 = 0;
        }
        else if ( *(_BYTE *)(v61 + v60 - 2) == 13 )
        {
          v60 -= 2LL;
        }
        else
        {
          --v60;
        }
      }
      goto LABEL_54;
    }
    nullsub_1(v26, v25);
    v34 = (__m128i *)sub_140001650(18, 1);
    if ( !v34 )
      sub_14196B2DB(1, 18);
    *v34 = _mm_loadu_si128(&xmmword_141A610D1);
    v34[1].m128i_i16[0] = -26219;
    *(_QWORD *)(a1 + 8) = 18;
    *(_QWORD *)(a1 + 16) = v34;
    *(_QWORD *)(a1 + 24) = 18;
    *(_QWORD *)a1 = -1;
LABEL_19:
    v35 = v252;
    v36 = v253;
    if ( v253 )
    {
      v37 = (_QWORD *)(v252 + 8);
      do
      {
        v38 = *(v37 - 1);
        if ( v38 )
          sub_140001660(*v37, v38, 1);
        v37 += 3;
        v36 = (const __m128i *)((char *)v36 - 1);
      }
      while ( v36 );
    }
    HIDWORD(_RAX) = HIDWORD(v251);
    if ( v251 )
      sub_140001660(v35, 24 * v251, 8);
    v40 = v254.m128i_i64[1];
    if ( v254.m128i_i64[1] )
    {
      v41 = v255.m128i_i64[1];
      if ( v255.m128i_i64[1] )
      {
        v42 = v254.m128i_i64[0];
        v43 = (const __m128i *)(v254.m128i_i64[0] + 16);
        _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v254.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              v45 = _mm_load_si128(v43);
              v42 -= 384;
              ++v43;
              _R12D = _mm_movemask_epi8(v45) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v46 = -3 * _RAX;
          v47 = *(_QWORD *)(v42 + 8 * v46 - 24);
          if ( v47 )
            sub_140001660(*(_QWORD *)(v42 + 8 * v46 - 16), v47, 1);
          --v41;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v41 );
      }
      goto LABEL_426;
    }
LABEL_428:
    if ( v259 )
      sub_140001660(v273, v259, 1);
  }
  return a1;
}
