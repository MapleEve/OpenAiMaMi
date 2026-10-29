// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x14026fa40 | name sub_14026FA40
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14026FA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // kr00_16
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rax
  char v17; // si
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // rcx
  char v22; // al
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  int v29; // r15d
  int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rdx
  const char *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int128 v36; // xmm0
  __m128i v37; // xmm0
  __m128i si128; // xmm1
  __m128i v39; // xmm0
  __int128 v40; // xmm2
  __int128 v41; // xmm3
  char v42; // r15
  __int64 v43; // rsi
  void *v44; // rdx
  __m128i v45; // xmm0
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __int64 v48; // rdx
  __int64 v49; // r15
  __int64 v50; // r12
  __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // r13
  int v55; // esi
  __int8 v56; // r15
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // r12
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  __m128i *v64; // r12
  __int64 v65; // r15
  __m128i v66; // xmm1
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __m128i v72; // xmm1
  unsigned __int64 v73; // rsi
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // r12
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // xmm1_8
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r15
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __m128i v88; // xmm1
  __int128 v89; // xmm2
  __m128i *v90; // rax
  char v91; // di
  char v92; // si
  __int64 v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // rdx
  __m128i *v96; // rax
  __m128i v97; // xmm0
  __m128i v98; // xmm0
  __m128i v99; // xmm1
  __int64 v100; // rsi
  __m128i *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rsi
  __m128i v105; // xmm0
  __m128i v106; // xmm1
  __m128i v107; // xmm1
  __int64 v108; // rax
  __int128 v109; // kr70_16
  int v110; // eax
  __int64 v111; // rcx
  int v112; // r9d
  __m128i v113; // xmm0
  __m128i v114; // xmm0
  __m128i v115; // xmm0
  __m128i v116; // xmm1
  __m128i v117; // xmm2
  __int128 v119; // kr90_16
  __m128i v120; // xmm0
  __m128i v121; // xmm1
  __int128 v122; // xmm2
  __m128i *v123; // rax
  __m128i v124; // xmm0
  const __m128i *v125; // r12
  unsigned __int64 v126; // r15
  __int64 v127; // rsi
  __int64 v128; // r14
  __int64 v129; // rdx
  __m128i *v130; // rax
  __m128i v131; // xmm0
  __m128i v132; // xmm1
  __m128i v133; // xmm2
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rcx
  __m128i v140; // xmm0
  __int128 v141; // krA0_16
  _OWORD *v142; // rdx
  __m128i v143; // xmm0
  __m128i v144; // xmm1
  __int128 v145; // xmm2
  _QWORD *v146; // rcx
  __m128i v147; // [rsp+38h] [rbp-48h] BYREF
  __int64 v148; // [rsp+48h] [rbp-38h]
  __m128i v149; // [rsp+50h] [rbp-30h] BYREF
  __int64 v150; // [rsp+60h] [rbp-20h]
  __m128i v151; // [rsp+68h] [rbp-18h] BYREF
  __int64 v152; // [rsp+78h] [rbp-8h]
  __m128i v153; // [rsp+80h] [rbp+0h] BYREF
  __int64 v154; // [rsp+90h] [rbp+10h]
  __m128i v155; // [rsp+98h] [rbp+18h] BYREF
  __int64 v156; // [rsp+A8h] [rbp+28h]
  __int64 v157; // [rsp+B0h] [rbp+30h] BYREF
  void *v158; // [rsp+B8h] [rbp+38h]
  __int64 v159; // [rsp+C0h] [rbp+40h]
  __int64 v160; // [rsp+C8h] [rbp+48h]
  __int64 v161; // [rsp+D0h] [rbp+50h]
  __int64 v162; // [rsp+D8h] [rbp+58h]
  __m128i v163; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v164; // [rsp+F0h] [rbp+70h]
  __m128i v165; // [rsp+100h] [rbp+80h] BYREF
  __m128i v166; // [rsp+110h] [rbp+90h] BYREF
  __int128 v167; // [rsp+120h] [rbp+A0h]
  __int64 v168; // [rsp+130h] [rbp+B0h]
  __m128i v169; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v170; // [rsp+150h] [rbp+D0h]
  __int64 v171; // [rsp+158h] [rbp+D8h]
  __int128 v172; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v173; // [rsp+170h] [rbp+F0h]
  __int128 v174; // [rsp+180h] [rbp+100h] BYREF
  int v175; // [rsp+190h] [rbp+110h]
  __int64 v176; // [rsp+194h] [rbp+114h]
  __int128 v177; // [rsp+1A0h] [rbp+120h] BYREF
  __m128i v178; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v179; // [rsp+1C0h] [rbp+140h]
  __m128i v180; // [rsp+1D0h] [rbp+150h] BYREF
  __m128i v181; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i v182; // [rsp+1F0h] [rbp+170h]
  __m128i v183; // [rsp+200h] [rbp+180h]
  __int64 v184; // [rsp+210h] [rbp+190h] BYREF
  __m128i *v185; // [rsp+218h] [rbp+198h]
  _BYTE v186[17]; // [rsp+220h] [rbp+1A0h]
  __int64 v187; // [rsp+238h] [rbp+1B8h]
  unsigned __int64 v188; // [rsp+240h] [rbp+1C0h]
  HANDLE hObject; // [rsp+248h] [rbp+1C8h]
  __m128i v190; // [rsp+250h] [rbp+1D0h] BYREF
  __m128i v191; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v192; // [rsp+270h] [rbp+1F0h] BYREF
  __m128i v193[6]; // [rsp+280h] [rbp+200h] BYREF
  _BYTE v194[48]; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v195; // [rsp+310h] [rbp+290h]
  __m128i v196; // [rsp+320h] [rbp+2A0h]
  __int64 v197; // [rsp+330h] [rbp+2B0h]
  __m128i v198; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v199; // [rsp+350h] [rbp+2D0h]
  _QWORD v200[2]; // [rsp+360h] [rbp+2E0h] BYREF
  __m256i v201; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v202; // [rsp+390h] [rbp+310h] BYREF
  __m128i v203; // [rsp+3A0h] [rbp+320h]
  __int64 v204; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v205; // [rsp+3B8h] [rbp+338h]
  __int128 v206; // [rsp+3C0h] [rbp+340h] BYREF
  unsigned __int64 v207; // [rsp+3D0h] [rbp+350h]
  __m128i *v208; // [rsp+3D8h] [rbp+358h]
  HANDLE v209; // [rsp+3E0h] [rbp+360h]
  __m128i *v210; // [rsp+3E8h] [rbp+368h]
  _BYTE v211[96]; // [rsp+3F0h] [rbp+370h] BYREF
  __m128i v212; // [rsp+450h] [rbp+3D0h] BYREF
  __int64 v213; // [rsp+460h] [rbp+3E0h]
  __int64 v214; // [rsp+468h] [rbp+3E8h]
  char v215; // [rsp+477h] [rbp+3F7h] BYREF
  __int64 v216; // [rsp+478h] [rbp+3F8h]
  __int64 v217; // [rsp+480h] [rbp+400h]
  __int64 v218; // [rsp+488h] [rbp+408h]
  char v219; // [rsp+496h] [rbp+416h]
  char v220; // [rsp+497h] [rbp+417h]
  char v221; // [rsp+498h] [rbp+418h]
  char v222; // [rsp+499h] [rbp+419h]
  char v223; // [rsp+49Ah] [rbp+41Ah]
  char v224; // [rsp+49Bh] [rbp+41Bh]
  char v225; // [rsp+49Ch] [rbp+41Ch]
  char v226; // [rsp+49Dh] [rbp+41Dh]
  char v227; // [rsp+49Eh] [rbp+41Eh]
  char v228; // [rsp+49Fh] [rbp+41Fh]
  __int64 v229; // [rsp+4A0h] [rbp+420h]

  v229 = -2;
  sub_140282430(v211);
  v10 = *(_QWORD *)v211;
  if ( *(_QWORD *)&v211[32] == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v10;
    return a1;
  }
  if ( *(_DWORD *)&v211[32] == 2 )
    v10 = -1;
  v216 = v10;
  if ( v10 != -1 )
    a3 = *(_QWORD *)&v211[16];
  v187 = *(_QWORD *)&v211[8];
  if ( v10 != -1 )
    a2 = *(_QWORD *)&v211[8];
  sub_1416AB5A0(v211, a2, a3);
  if ( *(_QWORD *)&v211[16] < 0xAu )
  {
    v5 = 0;
    v11 = *(_QWORD *)v211;
    if ( *(__int64 *)v211 <= 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  LOBYTE(v5) = (*(_QWORD *)(*(_QWORD *)&v211[8] + *(_QWORD *)&v211[16] - 10LL) ^ 0x7A2E6C6E6F736A2ELL
              | *(unsigned __int16 *)(*(_QWORD *)&v211[8] + *(_QWORD *)&v211[16] - 2LL) ^ 0x7473LL) == 0;
  v11 = *(_QWORD *)v211;
  if ( *(__int64 *)v211 > 0 )
LABEL_13:
    sub_140001660(*(_QWORD *)&v211[8], v11, 1);
LABEL_14:
  if ( (_BYTE)v5 )
  {
    sub_14026E5E0(v211, a2, a3);
    v12 = *(_OWORD *)v211;
    if ( *(_QWORD *)v211 != -1 )
    {
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v211[80];
      v13 = _mm_loadu_si128((const __m128i *)&v211[16]);
      v14 = _mm_loadu_si128((const __m128i *)&v211[32]);
      v15 = *(_OWORD *)&v211[48];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v211[64];
      *(_OWORD *)(a1 + 48) = v15;
      *(__m128i *)(a1 + 32) = v14;
      *(__m128i *)(a1 + 16) = v13;
      *(_OWORD *)a1 = v12;
LABEL_138:
      v95 = v216;
      goto LABEL_139;
    }
    if ( !*(_QWORD *)&v211[8] )
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = -1;
      goto LABEL_138;
    }
    sub_140281CC0(v211, a2, a3);
    v21 = *(_QWORD *)v211;
    v22 = v211[8];
    if ( *(_QWORD *)v211 != -1 )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v211[88];
      *(_OWORD *)(a1 + 73) = *(_OWORD *)&v211[73];
      v23 = _mm_loadu_si128((const __m128i *)&v211[9]);
      v24 = _mm_loadu_si128((const __m128i *)&v211[25]);
      v25 = *(_OWORD *)&v211[41];
      *(_OWORD *)(a1 + 57) = *(_OWORD *)&v211[57];
      *(_OWORD *)(a1 + 41) = v25;
      *(__m128i *)(a1 + 25) = v24;
      *(__m128i *)(a1 + 9) = v23;
      *(_QWORD *)a1 = v21;
      *(_BYTE *)(a1 + 8) = v22;
      goto LABEL_138;
    }
    v215 = v211[8];
    sub_14026DC80(v211, a2, a3);
    v35 = *(_QWORD *)v211;
    v192 = *(__m128i *)&v211[8];
    v193[0] = *(__m128i *)&v211[24];
    v193[1] = *(__m128i *)&v211[40];
    v193[2].m128i_i64[0] = *(_QWORD *)&v211[56];
    if ( *(_QWORD *)v211 != -1 )
    {
      v36 = *(_OWORD *)&v211[64];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v211[80];
      *(_OWORD *)(a1 + 64) = v36;
      *(_QWORD *)(a1 + 56) = v193[2].m128i_i64[0];
      v37 = _mm_load_si128(&v192);
      si128 = _mm_load_si128(v193);
      *(__m128i *)(a1 + 40) = v193[1];
      *(__m128i *)(a1 + 24) = si128;
      *(__m128i *)(a1 + 8) = v37;
      *(_QWORD *)a1 = v35;
      goto LABEL_138;
    }
    v164 = v193[0].m128i_i64[0];
    v163 = v192;
    v170 = v193[1].m128i_i64[1];
    v171 = v193[2].m128i_i64[0];
    v169 = _mm_loadu_si128((const __m128i *)&v193[0].m128i_u64[1]);
    sub_140282430(v211);
    v49 = *(_QWORD *)v211;
    if ( *(_QWORD *)&v211[32] == -1 )
    {
      v51 = a1;
      goto LABEL_72;
    }
    v50 = a4;
    v51 = a1;
    v207 = *(_QWORD *)&v211[24];
    v206 = *(_OWORD *)&v211[8];
    v177 = *(_OWORD *)&v211[40];
    v178 = *(__m128i *)&v211[56];
    v179 = *(_QWORD *)&v211[72];
    a1 = *(_QWORD *)&v211[88];
    v5 = *(_QWORD *)&v211[80];
    v198 = _mm_loadu_si128(&v212);
    v199 = v213;
    if ( *(_DWORD *)&v211[32] == 2 )
    {
      v49 = sub_1416793A0(0, aRolloutIsMissi, 18);
LABEL_72:
      v77 = 2;
LABEL_137:
      v115 = _mm_load_si128(&v180);
      v116 = _mm_load_si128(&v181);
      v117 = v182;
      *(__m128i *)(v51 + 80) = v183;
      *(__m128i *)(v51 + 64) = v117;
      *(__m128i *)(v51 + 48) = v116;
      *(__m128i *)(v51 + 32) = v115;
      *(_QWORD *)v51 = v77;
      *(_QWORD *)(v51 + 8) = v49;
      *(_QWORD *)(v51 + 16) = a1;
      a1 = v51;
      *(_QWORD *)(v51 + 24) = v5;
      goto LABEL_138;
    }
    v201.m256i_i64[3] = v207;
    *(_OWORD *)&v201.m256i_u64[1] = v206;
    *(_QWORD *)&v194[40] = v179;
    *(__m128i *)&v194[24] = _mm_load_si128(&v178);
    *(_OWORD *)&v194[8] = v177;
    v196 = _mm_load_si128(&v198);
    v197 = v199;
    v201.m256i_i64[0] = *(_QWORD *)v211;
    *(_QWORD *)v194 = *(_QWORD *)&v211[32];
    v195 = *(_OWORD *)&v211[80];
    sub_140282430(v211);
    if ( *(_QWORD *)&v211[32] == -1 )
    {
      v78 = v211[0] & 3;
      if ( (unsigned int)(v78 - 2) >= 2 && (v211[0] & 3) != 0 )
      {
        v192.m128i_i64[1] = *(_QWORD *)v211 - 1LL;
        v192.m128i_i8[0] = 3;
        sub_1416BCB00(&v192.m128i_u64[1]);
      }
    }
    else if ( *(_DWORD *)&v211[32] != 2 && *(_QWORD *)v211 != -1 )
    {
      v79 = *(_QWORD *)&v211[8];
      v80 = *(_QWORD *)&v211[16];
      v81 = *(_QWORD *)&v211[64];
      v172 = *(_OWORD *)v211;
      v173 = _mm_loadu_si128((const __m128i *)&v211[16]);
      *(_QWORD *)&v174 = *(_QWORD *)&v211[88];
      _mm_storel_ps((double *)&v174 + 1, (__m128)*(unsigned __int64 *)&v211[80]);
      v175 = 1;
      v176 = v81;
      if ( (((_QWORD)v174 == a1) & (unsigned __int8)sub_1402899E0(v79, v80, v201.m256i_i64[1], v201.m256i_i64[2])) == 1
        && *((_QWORD *)&v174 + 1) == v5 )
      {
        a1 = sub_141682A00(v201.m256i_i64[1], v201.m256i_i64[2]);
        if ( a1 )
        {
          v84 = v83;
          sub_141568C20(&v192);
          *(_QWORD *)v211 = &v192;
          *(_QWORD *)&v211[8] = sub_141569D80;
          sub_1416ABFD0(&v202, &unk_1419D590A, v211);
          sub_140BA4A70(&v190, a1, v84, &v202);
          v5 = v84;
          LODWORD(v184) = 0;
          v185 = nullptr;
          *(_DWORD *)v186 = 7;
          *(_QWORD *)&v186[4] = 0;
          *(_QWORD *)&v186[9] = 0x100000001LL;
          v85 = sub_141690E40(&v184);
          v49 = v86;
          if ( v85 == 1 )
          {
            if ( v190.m128i_i64[0] )
              sub_140001660(v190.m128i_i64[1], v190.m128i_i64[0], 1);
            v77 = 2;
          }
          else
          {
            *(_QWORD *)v211 = a2;
            *(_QWORD *)&v211[8] = a3;
            *(_QWORD *)&v211[16] = &v201;
            v214 = v86;
            *(_QWORD *)&v211[24] = a2;
            *(_QWORD *)&v211[32] = a3;
            *(_QWORD *)&v211[40] = &v215;
            *(_QWORD *)&v211[48] = &v163;
            *(_QWORD *)&v211[56] = &v169;
            *(_QWORD *)&v211[64] = v50;
            *(_QWORD *)&v211[72] = a5;
            *(_QWORD *)&v211[80] = &v190;
            *(_QWORD *)&v211[88] = v194;
            v212.m128i_i64[0] = (__int64)&v172;
            v212.m128i_i64[1] = a1;
            v213 = v5;
            sub_1401AFA50(&v192, v211);
            v77 = v192.m128i_i64[0];
            if ( v192.m128i_i64[0] != -1 )
            {
              v103 = sub_141695140(v190.m128i_i64[1], v191.m128i_i64[0]);
              v104 = v103;
              v160 = v103;
              if ( v103 )
              {
                v222 = 1;
                if ( (unsigned __int8)sub_1401C6A70(v103) )
                {
                  v204 = v104;
                  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                  {
                    v200[0] = &v204;
                    v200[1] = sub_1416BB0B0;
                    *(_QWORD *)v211 = aCodexmateLibCo_19;
                    *(_QWORD *)&v211[8] = 68;
                    *(_QWORD *)&v211[16] = aCodexmateLibCo_19;
                    *(_QWORD *)&v211[24] = 68;
                    *(_QWORD *)&v211[32] = &off_1419D5990;
                    sub_140BAD520(&unk_1419D5922, v200, 2, v211);
                  }
                  v222 = 0;
                  sub_140032B80(&v204);
                }
                else
                {
                  *(_QWORD *)v211 = v104;
                  v222 = 0;
                  sub_140032B80(v211);
                }
              }
            }
            v49 = v192.m128i_i64[1];
            v5 = v193[0].m128i_i64[1];
            a1 = v193[0].m128i_i64[0];
            v180 = v193[1];
            v181 = v193[2];
            v182 = v193[3];
            v183 = _mm_loadu_si128(&v193[4]);
            if ( v190.m128i_i64[0] )
              sub_140001660(v190.m128i_i64[1], v190.m128i_i64[0], 1);
          }
        }
        else
        {
          sub_1401AEE90(v211);
          v49 = *(_QWORD *)&v211[8];
          v77 = *(_QWORD *)v211;
          v5 = *(_QWORD *)&v211[24];
          a1 = *(_QWORD *)&v211[16];
          v180 = *(__m128i *)&v211[32];
          v181 = *(__m128i *)&v211[48];
          v182 = *(__m128i *)&v211[64];
          v183 = _mm_loadu_si128((const __m128i *)&v211[80]);
        }
      }
      else
      {
        LOBYTE(v82) = (_QWORD)v174 == a1;
        nullsub_1(v82);
        v5 = 61;
        v101 = (__m128i *)sub_140001650(61, 1);
        if ( !v101 )
          sub_141938D2B(1, 61);
        a1 = (__int64)v101;
        qmemcpy(&v101[1], "tation changed before writing; retry required", 45);
        *v101 = _mm_loadu_si128((const __m128i *)&xmmword_1419D59EC);
        v77 = 10;
        v49 = 61;
      }
      if ( (_QWORD)v172 )
        sub_140001660(*((_QWORD *)&v172 + 1), v172, 1);
      goto LABEL_134;
    }
    nullsub_1(v78);
    v5 = 38;
    v96 = (__m128i *)sub_140001650(38, 1);
    if ( !v96 )
      sub_141938D2B(1, 38);
    a1 = (__int64)v96;
    qmemcpy(&v96[1], "rollout before writing", 22);
    *v96 = _mm_loadu_si128((const __m128i *)&xmmword_1419D68A1);
    v77 = 10;
    v49 = 38;
LABEL_134:
    if ( v201.m256i_i64[0] )
      sub_140001660(v201.m256i_i64[1], v201.m256i_i64[0], 1);
    if ( v77 == -1 )
    {
      sub_14026E5E0(v211, a2, a3);
      a1 = v51;
      v119 = *(_OWORD *)v211;
      if ( *(_QWORD *)v211 == -1 )
      {
        if ( *(_QWORD *)&v211[8] )
        {
          nullsub_1(*(_QWORD *)v211);
          v123 = (__m128i *)sub_140001650(45, 1);
          if ( !v123 )
            sub_141938D2B(1, 45);
          qmemcpy(&v123[1], "item ID repair did not verify", 29);
          *v123 = _mm_loadu_si128((const __m128i *)&xmmword_1419E0E1B);
          *(_QWORD *)v51 = 10;
          *(_QWORD *)(v51 + 8) = 45;
          *(_QWORD *)(v51 + 16) = v123;
          *(_QWORD *)(v51 + 24) = 45;
        }
        else
        {
          *(_QWORD *)(v51 + 8) = v49;
          *(_QWORD *)v51 = -1;
        }
      }
      else
      {
        *(_OWORD *)(v51 + 80) = *(_OWORD *)&v211[80];
        v120 = _mm_loadu_si128((const __m128i *)&v211[16]);
        v121 = _mm_loadu_si128((const __m128i *)&v211[32]);
        v122 = *(_OWORD *)&v211[48];
        *(_OWORD *)(v51 + 64) = *(_OWORD *)&v211[64];
        *(_OWORD *)(v51 + 48) = v122;
        *(__m128i *)(v51 + 32) = v121;
        *(__m128i *)(v51 + 16) = v120;
        *(_OWORD *)v51 = v119;
      }
      goto LABEL_138;
    }
    goto LABEL_137;
  }
  sub_140281CC0(v211, a2, a3);
  v16 = *(_QWORD *)v211;
  v17 = v211[8];
  if ( *(_QWORD *)v211 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v211[88];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v211[73];
    v18 = _mm_loadu_si128((const __m128i *)&v211[9]);
    v19 = _mm_loadu_si128((const __m128i *)&v211[25]);
    v20 = *(_OWORD *)&v211[41];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v211[57];
    *(_OWORD *)(a1 + 41) = v20;
    *(__m128i *)(a1 + 25) = v19;
    *(__m128i *)(a1 + 9) = v18;
    *(_QWORD *)a1 = v16;
    *(_BYTE *)(a1 + 8) = v17;
    goto LABEL_138;
  }
  sub_141695A00(v211, a2, a3);
  if ( *(_DWORD *)v211 == 2 )
  {
    v26 = *(_QWORD *)&v211[8];
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v26;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 20) = 0;
    goto LABEL_138;
  }
  v203.m128i_i64[1] = *(_QWORD *)&v211[56];
  v188 = *(_QWORD *)&v211[48];
  v27 = sub_141682A00(a2, a3);
  v29 = v27;
  if ( !v27 )
  {
    *(_QWORD *)v194 = a2;
    *(_QWORD *)&v194[8] = a3;
    v192.m128i_i64[0] = (__int64)v194;
    v192.m128i_i64[1] = (__int64)sub_14169F630;
    sub_1416ABFD0(&v211[8], &unk_1419D7B20, &v192);
    v39 = _mm_loadu_si128((const __m128i *)&v211[8]);
    v40 = *(_OWORD *)&v211[40];
    v41 = *(_OWORD *)&v211[56];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v211[24];
    *(_OWORD *)(a1 + 40) = v40;
    *(_OWORD *)(a1 + 56) = v41;
    *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)&v211[72]);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v211[88];
    *(_QWORD *)a1 = 10;
    *(__m128i *)(a1 + 8) = v39;
    goto LABEL_138;
  }
  v30 = v28;
  v31 = sub_141682C30(a2, a3);
  if ( v31 )
  {
    sub_1416B3AE0(v211, v31, v32);
    v33 = aRollout_1;
    if ( !v211[0] )
      v33 = *(const char **)&v211[8];
    v34 = 7;
    if ( !v211[0] )
      v34 = *(_QWORD *)&v211[16];
  }
  else
  {
    v34 = 7;
    v33 = aRollout_1;
  }
  v163.m128i_i64[0] = (__int64)v33;
  v163.m128i_i64[1] = v34;
  *(_DWORD *)v194 = GetCurrentProcessId();
  sub_141568C20(v211);
  v192 = _mm_loadu_si128((const __m128i *)v211);
  *(_QWORD *)v211 = &v163;
  *(_QWORD *)&v211[8] = sub_140186EE0;
  *(_QWORD *)&v211[16] = v194;
  *(_QWORD *)&v211[24] = sub_1416BBD00;
  *(_QWORD *)&v211[32] = &v192;
  *(_QWORD *)&v211[40] = sub_14028A180;
  sub_1416ABFD0(&v157, &unk_1419E0E48, v211);
  v209 = v158;
  sub_1416828D0((unsigned int)&v169, v29, v30, (_DWORD)v158, v159);
  v42 = v17;
  if ( v157 )
    sub_140001660(v209, v157, 1);
  v43 = v170;
  v205 = v169.m128i_i64[1];
  sub_141681D30(&v177, v169.m128i_i64[1], v170);
  LOBYTE(v179) = 0;
  *(_DWORD *)v211 = 0;
  *(_QWORD *)&v211[8] = 0;
  *(_DWORD *)&v211[16] = 7;
  *(_QWORD *)&v211[20] = 0;
  *(_QWORD *)&v211[25] = 0x100000001LL;
  if ( sub_141690E40(v211) == 1 )
  {
    sub_1401B40C0(v211, v205, v43, v44);
    v45 = _mm_loadu_si128((const __m128i *)v211);
    v46 = *(_OWORD *)&v211[32];
    v47 = *(_OWORD *)&v211[48];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v211[16];
    *(_OWORD *)(a1 + 32) = v46;
    *(_OWORD *)(a1 + 48) = v47;
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v211[64];
    *(__m128i *)(a1 + 80) = _mm_loadu_si128((const __m128i *)&v211[80]);
    *(__m128i *)a1 = v45;
LABEL_97:
    sub_140284140(&v177);
    if ( (_QWORD)v177 )
      sub_140001660(*((_QWORD *)&v177 + 1), v177, 1);
    v94 = v216;
    if ( v169.m128i_i64[0] )
      sub_140001660(v205, v169.m128i_i64[0], 1);
    v95 = v94;
LABEL_139:
    if ( (unsigned __int64)(v95 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return a1;
LABEL_140:
    sub_140001660(v187, v95, 1);
    return a1;
  }
  hObject = v44;
  LOBYTE(v179) = 1;
  *(_DWORD *)v211 = 0;
  *(_QWORD *)&v211[8] = 0;
  *(_DWORD *)&v211[16] = 7;
  *(_QWORD *)&v211[20] = 0x100000000LL;
  *(_QWORD *)&v211[25] = 0;
  v221 = 1;
  if ( (sub_141690E40(v211) & 1) != 0 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v48;
    CloseHandle(hObject);
    goto LABEL_97;
  }
  v221 = 1;
  sub_140D73E60(&v172, 0x2000, v48);
  v220 = 1;
  sub_140C17D30(&v180, 0x2000, hObject);
  v162 = v43;
  v161 = a4;
  v218 = a1;
  v192 = (__m128i)xmmword_1419E2188;
  v193[0] = _mm_loadu_si128(xmmword_1419E2198);
  memset(&v193[1], 0, 73);
  *(_QWORD *)&v206 = 0;
  *((_QWORD *)&v206 + 1) = 1;
  *(_QWORD *)&v202 = 0;
  *((_QWORD *)&v202 + 1) = 8;
  v203.m128i_i64[0] = 0;
  v209 = nullptr;
  LOBYTE(v210) = ~v42;
  while ( 1 )
  {
    v207 = 0;
    v228 = 1;
    v227 = 1;
    v226 = 1;
    LOBYTE(v52) = 10;
    if ( (sub_140BAEAF0(&v172, v52, &v206) & 1) != 0 )
    {
      a1 = v218;
      *(_QWORD *)v218 = 2;
      *(_QWORD *)(a1 + 8) = v53;
      goto LABEL_90;
    }
    if ( !v53 )
      break;
    v54 = *((_QWORD *)&v206 + 1);
    v55 = v207;
    v56 = v193[5].m128i_i8[8];
    v57 = 64LL - v193[5].m128i_u8[8];
    v58 = v207 - v57;
    if ( v207 >= v57 )
    {
      if ( v193[5].m128i_i8[8] )
      {
        sub_1418F44E0(
          (__m128i *)((char *)&v193[1].m128i_u64[1] + v193[5].m128i_u8[8]),
          *((const __m128i **)&v206 + 1),
          64LL - v193[5].m128i_u8[8]);
        ++v193[1].m128i_i64[0];
        v228 = 1;
        v227 = 1;
        v226 = 1;
        sub_14140F460(&v192, &v193[1].m128i_u64[1], 1);
        v54 += v57;
        v60 = v58 >> 6;
        if ( !(v58 >> 6) )
          goto LABEL_55;
LABEL_54:
        v193[1].m128i_i64[0] += v60;
        v228 = 1;
        v227 = 1;
        v226 = 1;
        sub_14140F460(&v192, v54, v60);
      }
      else
      {
        v58 = v207;
        v60 = v207 >> 6;
        if ( v207 >> 6 )
          goto LABEL_54;
      }
LABEL_55:
      v61 = v58 & 0x7FFFFFFFFFFFFFC0LL;
      v59 = v58 & 0x3F;
      sub_1418F44E0((__m128i *)&v193[1].m128i_u64[1], (const __m128i *)(v61 + v54), v59);
      LODWORD(v54) = DWORD2(v206);
      v55 = v207;
      goto LABEL_56;
    }
    sub_1418F44E0(
      (__m128i *)((char *)&v193[1].m128i_u64[1] + v193[5].m128i_u8[8]),
      *((const __m128i **)&v206 + 1),
      v207);
    LOBYTE(v59) = v55 + v56;
LABEL_56:
    v193[5].m128i_i8[8] = v59;
    v228 = 1;
    v227 = 1;
    v226 = 1;
    v209 = (char *)v209 + 1;
    sub_14026EB80((unsigned int)v211, v54, v55, a2, a3, (__int64)v209);
    v63 = *(_QWORD *)&v211[8];
    v62 = *(_QWORD *)v211;
    v65 = *(_QWORD *)&v211[24];
    v64 = *(__m128i **)&v211[16];
    v66 = _mm_loadu_si128((const __m128i *)&v211[48]);
    v165 = _mm_loadu_si128((const __m128i *)&v211[32]);
    v166 = v66;
    v167 = *(_OWORD *)&v211[64];
    v168 = *(_QWORD *)&v211[80];
    if ( *(_QWORD *)v211 != -1 )
    {
      v87 = *(_QWORD *)&v211[88];
      a1 = v218;
      *(_OWORD *)(v218 + 16) = *(_OWORD *)&v211[16];
      v88 = v166;
      v89 = v167;
      *(__m128i *)(a1 + 32) = v165;
      *(__m128i *)(a1 + 48) = v88;
      *(_OWORD *)(a1 + 64) = v89;
      *(_QWORD *)(a1 + 80) = v168;
      *(_QWORD *)a1 = v62;
      *(_QWORD *)(a1 + 8) = v63;
      *(_QWORD *)(a1 + 88) = v87;
      goto LABEL_90;
    }
    a1 = v218;
    if ( *(_QWORD *)&v211[8] == -1 )
    {
      v73 = v207;
      v74 = v181.m128i_i64[0];
      if ( v207 >= v180.m128i_i64[0] - v181.m128i_i64[0] )
      {
        v228 = 1;
        v227 = 1;
        v226 = 1;
        v76 = sub_141910FF0(&v180, *((_QWORD *)&v206 + 1), v207);
        if ( v76 )
          goto LABEL_85;
      }
      else
      {
        sub_1418F44E0((__m128i *)(v181.m128i_i64[0] + v180.m128i_i64[1]), *((const __m128i **)&v206 + 1), v207);
        v181.m128i_i64[0] = v73 + v74;
      }
    }
    else
    {
      v217 = *(_QWORD *)&v211[8];
      v208 = *(__m128i **)&v211[16];
      if ( !((unsigned __int8)v210 & 1 | (v207 == *(_QWORD *)&v211[24])) )
      {
        nullsub_1(*(_QWORD *)&v211[80]);
        v90 = (__m128i *)sub_140001650(107, 1);
        if ( !v90 )
        {
          v219 = 1;
          sub_141938D2B(1, 107);
        }
        qmemcpy(
          &v90[1],
          "AYOUT_PROTECTED: call-item ID repair would change native history offsets; history preserved",
          91);
        *v90 = _mm_loadu_si128((const __m128i *)&xmmword_1419E0DB0);
        *(_QWORD *)a1 = 10;
        *(_QWORD *)(a1 + 8) = 107;
        *(_QWORD *)(a1 + 16) = v90;
        *(_QWORD *)(a1 + 24) = 107;
        sub_14002EA10(&v165);
        if ( v63 )
          goto LABEL_89;
LABEL_90:
        v91 = 1;
        v92 = 1;
LABEL_91:
        sub_140191240(&v202);
        v93 = v206;
        if ( (_QWORD)v206 )
LABEL_92:
          sub_140001660(*((_QWORD *)&v206 + 1), v93, 1);
LABEL_93:
        if ( v91 )
        {
          v220 = v92;
          sub_140191FB0(&v180);
        }
        if ( v92 )
          sub_140191F80(&v172);
        goto LABEL_97;
      }
      v67 = v181.m128i_i64[0];
      if ( *(_QWORD *)&v211[24] >= v180.m128i_i64[0] - v181.m128i_i64[0] )
      {
        v219 = 1;
        v75 = sub_141910FF0(&v180, *(_QWORD *)&v211[16], *(_QWORD *)&v211[24]);
        a1 = v218;
        if ( v75 )
        {
          *(_QWORD *)v218 = 2;
          *(_QWORD *)(a1 + 8) = v75;
          v63 = v217;
          v64 = v208;
          sub_14002EA10(&v165);
          if ( !v63 )
            goto LABEL_90;
LABEL_89:
          sub_140001660(v64, v63, 1);
          goto LABEL_90;
        }
      }
      else
      {
        sub_1418F44E0(
          (__m128i *)(v181.m128i_i64[0] + v180.m128i_i64[1]),
          *(const __m128i **)&v211[16],
          *(unsigned __int64 *)&v211[24]);
        v181.m128i_i64[0] = v65 + v67;
      }
      v68 = v203.m128i_i64[0];
      if ( v203.m128i_i64[0] == (_QWORD)v202 )
        sub_141910060(&v202);
      v69 = *((_QWORD *)&v202 + 1);
      v70 = 56 * v68;
      *(_QWORD *)(*((_QWORD *)&v202 + 1) + v70 + 48) = v168;
      v71 = _mm_load_si128(&v165);
      v72 = _mm_load_si128(&v166);
      *(_OWORD *)(v69 + v70 + 32) = v167;
      *(__m128i *)(v69 + v70 + 16) = v72;
      *(__m128i *)(v69 + v70) = v71;
      v203.m128i_i64[0] = v68 + 1;
      v52 = v217;
      if ( v217 )
        sub_140001660(v208, v217, 1);
    }
  }
  v228 = 1;
  v227 = 1;
  v226 = 1;
  v76 = sub_140C20D70(&v180);
  if ( v76 )
  {
LABEL_85:
    a1 = v218;
    *(_QWORD *)v218 = 2;
    *(_QWORD *)(a1 + 8) = v76;
    goto LABEL_90;
  }
  *(_QWORD *)&v211[32] = v182.m128i_i64[0];
  v97 = _mm_loadu_si128(&v180);
  *(__m128i *)&v211[16] = _mm_loadu_si128(&v181);
  *(__m128i *)v211 = v97;
  v228 = 1;
  v227 = 0;
  v226 = 1;
  sub_140C17C90(v194, v211);
  if ( *(_QWORD *)v194 != -1 )
  {
    v98 = _mm_loadu_si128((const __m128i *)v194);
    v99 = _mm_loadu_si128((const __m128i *)&v194[16]);
    *(_OWORD *)&v211[32] = *(_OWORD *)&v194[32];
    *(__m128i *)&v211[16] = v99;
    *(__m128i *)v211 = v98;
    v100 = *(_QWORD *)&v194[40];
    v228 = 1;
    v227 = 0;
    v226 = 1;
    sub_140191FB0(v211);
    a1 = v218;
    *(_QWORD *)v218 = 2;
    *(_QWORD *)(a1 + 8) = v100;
LABEL_113:
    v92 = 1;
    v91 = 0;
    goto LABEL_91;
  }
  v209 = *(HANDLE *)&v194[8];
  v204 = *(_QWORD *)&v194[8];
  v225 = 1;
  v224 = 1;
  v223 = 1;
  v102 = sub_141683220(&v204);
  a1 = v218;
  if ( v102 )
  {
    *(_QWORD *)v218 = 2;
    *(_QWORD *)(a1 + 8) = v102;
    CloseHandle(v209);
    goto LABEL_113;
  }
  CloseHandle(v209);
  *(_OWORD *)&v211[32] = v174;
  *(__m128i *)&v211[16] = v173;
  *(_OWORD *)v211 = v172;
  sub_140191F80(v211);
  v212 = v193[5];
  *(__m128i *)&v211[80] = v193[4];
  *(__m128i *)&v211[64] = v193[3];
  v105 = _mm_load_si128(&v192);
  v106 = _mm_load_si128(v193);
  *(__m128i *)&v211[48] = v193[2];
  *(__m128i *)&v211[32] = v193[1];
  *(__m128i *)&v211[16] = v106;
  *(__m128i *)v211 = v105;
  v225 = 0;
  v224 = 1;
  v223 = 0;
  sub_140292730(v194, v211);
  v107 = _mm_loadu_si128((const __m128i *)&v194[16]);
  *(__m128i *)v201.m256i_i8 = _mm_loadu_si128((const __m128i *)v194);
  *(__m128i *)&v201.m256i_u64[2] = v107;
  v225 = 0;
  v224 = 1;
  v223 = 0;
  sub_141695A00(v211, a2, a3);
  if ( *(_DWORD *)v211 == 2 )
  {
    v108 = *(_QWORD *)&v211[8];
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v108;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 20) = 0;
LABEL_149:
    v92 = 0;
    v91 = 0;
    goto LABEL_91;
  }
  if ( __PAIR128__(v203.m128i_u64[1], v188) != *(_OWORD *)&v211[48] )
  {
    *(_QWORD *)v194 = a2;
    *(_QWORD *)&v194[8] = a3;
    *(_QWORD *)v211 = v194;
    *(_QWORD *)&v211[8] = sub_14169F630;
    v225 = 0;
    v224 = 1;
    v223 = 0;
    sub_1416ABFD0(&v155, &unk_1419E0F69, v211);
    a1 = v218;
    *(_QWORD *)(v218 + 24) = v156;
    v114 = _mm_loadu_si128(&v155);
LABEL_128:
    *(__m128i *)(a1 + 8) = v114;
    *(_QWORD *)a1 = 10;
    goto LABEL_149;
  }
  if ( !v203.m128i_i64[0] )
  {
    a1 = v218;
    *(_QWORD *)(v218 + 8) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_149;
  }
  v225 = 0;
  v224 = 1;
  v223 = 0;
  sub_14026DC80(v211, a2, a3);
  v109 = *(_OWORD *)v211;
  v110 = *(_DWORD *)&v211[16];
  v111 = *(_QWORD *)&v211[20];
  if ( *(_QWORD *)v211 != -1 )
  {
    v112 = *(_DWORD *)&v211[28];
    *(_OWORD *)v194 = *(_OWORD *)&v211[32];
    *(_OWORD *)&v194[16] = *(_OWORD *)&v211[48];
    a1 = v218;
    *(_OWORD *)(v218 + 80) = *(_OWORD *)&v211[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v211[64];
    v113 = _mm_load_si128((const __m128i *)v194);
    *(__m128i *)(a1 + 48) = _mm_load_si128((const __m128i *)&v194[16]);
    *(__m128i *)(a1 + 32) = v113;
    *(_OWORD *)a1 = v109;
    *(_DWORD *)(a1 + 16) = v110;
    *(_QWORD *)(a1 + 20) = v111;
    *(_DWORD *)(a1 + 28) = v112;
    goto LABEL_149;
  }
  v124 = _mm_loadu_si128((const __m128i *)&v211[32]);
  *(__m128i *)&v194[16] = _mm_loadu_si128((const __m128i *)&v211[48]);
  *(__m128i *)v194 = v124;
  v191 = *(__m128i *)&v194[16];
  v190 = v124;
  if ( ((*(_QWORD *)&v211[8] == v203.m128i_i64[1]) & v211[16] & (*(_QWORD *)&v211[20] == v188)) != 1
    || _mm_movemask_epi8(
         _mm_and_si128(
           _mm_cmpeq_epi8(_mm_load_si128(&v190), *(__m128i *)v201.m256i_i8),
           _mm_cmpeq_epi8(_mm_load_si128(&v191), *(__m128i *)&v201.m256i_u64[2]))) != 0xFFFF )
  {
    *(_QWORD *)v194 = a2;
    *(_QWORD *)&v194[8] = a3;
    *(_QWORD *)v211 = v194;
    *(_QWORD *)&v211[8] = sub_14169F630;
    v225 = 0;
    v224 = 1;
    v223 = 0;
    sub_1416ABFD0(&v153, &unk_1419E0F31, v211);
    a1 = v218;
    *(_QWORD *)(v218 + 24) = v154;
    v114 = _mm_loadu_si128(&v153);
    goto LABEL_128;
  }
  v225 = 0;
  v224 = 1;
  v223 = 0;
  sub_1416AB5A0(&v184, a2, a3);
  v125 = v185;
  v126 = *(_QWORD *)v186;
  v217 = v184;
  if ( v184 == -1 )
  {
    sub_14072C410((unsigned int)v211, *(_DWORD *)v186, 0, 1, 1);
    v217 = *(_QWORD *)&v211[8];
    if ( *(_DWORD *)v211 == 1 )
    {
      v225 = 0;
      v224 = 1;
      v223 = 0;
      sub_141938D2B(v217, *(_QWORD *)&v211[16]);
    }
    v210 = *(__m128i **)&v211[16];
    if ( v126 )
      sub_1418F44E0(v210, v125, v126);
    else
      v126 = 0;
  }
  else
  {
    v210 = v185;
  }
  sub_14026CF00(v211, &v201);
  v196 = v203;
  v195 = v202;
  LODWORD(v197) = 1;
  *(_QWORD *)v194 = v217;
  *(_QWORD *)&v194[8] = v210;
  *(_QWORD *)&v194[16] = v126;
  *(__m128i *)&v194[24] = _mm_loadu_si128((const __m128i *)v211);
  *(_QWORD *)&v194[40] = *(_QWORD *)&v211[16];
  sub_1401975F0(v211, v194);
  v217 = *(_QWORD *)&v211[8];
  v210 = *(__m128i **)v211;
  if ( *(_QWORD *)v211 == -1 )
  {
    v134 = v218;
    *(_QWORD *)v218 = 3;
    *(_QWORD *)(v134 + 8) = v217;
    goto LABEL_178;
  }
  v127 = *(_QWORD *)&v211[16];
  sub_14026D600((unsigned int)&v184, a2, a3, v161, a5);
  v128 = *(_QWORD *)v186;
  v208 = v185;
  if ( (sub_140222E10(v185, *(_QWORD *)v186, v217, v127) & 1) != 0 )
  {
    sub_1401B4190(v211, v208, v128, v129);
    v130 = (__m128i *)v218;
    *(_OWORD *)(v218 + 80) = *(_OWORD *)&v211[80];
    v130[4] = *(__m128i *)&v211[64];
    v131 = _mm_loadu_si128((const __m128i *)v211);
    v132 = _mm_loadu_si128((const __m128i *)&v211[16]);
    v133 = *(__m128i *)&v211[32];
    v130[3] = *(__m128i *)&v211[48];
    v130[2] = v133;
    v130[1] = v132;
    *v130 = v131;
    goto LABEL_174;
  }
  sub_1401BD710(v129);
  sub_141695A00(v211, a2, a3);
  if ( *(_DWORD *)v211 == 2 )
  {
    v135 = *(_QWORD *)&v211[8];
    v136 = v218;
    *(_QWORD *)v218 = 2;
    *(_QWORD *)(v136 + 8) = v135;
    *(_DWORD *)(v136 + 16) = 1;
    *(_QWORD *)(v136 + 20) = 0;
    goto LABEL_174;
  }
  if ( *(_OWORD *)&v211[48] != __PAIR128__(v203.m128i_u64[1], v188) )
  {
    sub_14026D740(v208, v128);
    v198.m128i_i64[0] = a2;
    v198.m128i_i64[1] = a3;
    *(_QWORD *)v211 = &v198;
    *(_QWORD *)&v211[8] = sub_14169F630;
    sub_1416ABFD0(&v151, &unk_1419E0EE5, v211);
    v139 = v218;
    *(_QWORD *)(v218 + 24) = v152;
    v140 = _mm_loadu_si128(&v151);
LABEL_171:
    *(__m128i *)(v139 + 8) = v140;
    *(_QWORD *)v139 = 10;
    goto LABEL_174;
  }
  if ( (sub_1402239D0(v205, v162, a2, a3) & 1) != 0 )
  {
    v200[0] = v137;
    sub_14026D740(v208, v128);
    v198.m128i_i64[0] = a2;
    v198.m128i_i64[1] = a3;
    *(_QWORD *)v211 = &v198;
    *(_QWORD *)&v211[8] = sub_14169F630;
    *(_QWORD *)&v211[16] = v200;
    *(_QWORD *)&v211[24] = sub_1416BB0B0;
    sub_1416ABFD0(&v149, &unk_1419E0E6F, v211);
    v138 = v218;
    *(_QWORD *)(v218 + 24) = v150;
    *(__m128i *)(v138 + 8) = _mm_loadu_si128(&v149);
    *(_QWORD *)v138 = 10;
    sub_140032B80(v200);
    goto LABEL_174;
  }
  sub_1401BD710(v137);
  LOBYTE(v179) = 0;
  sub_14026E5E0(v211, a2, a3);
  v141 = *(_OWORD *)v211;
  if ( *(_QWORD *)v211 != -1 )
  {
    v142 = (_OWORD *)v218;
    *(_OWORD *)(v218 + 80) = *(_OWORD *)&v211[80];
    v143 = _mm_loadu_si128((const __m128i *)&v211[16]);
    v144 = _mm_loadu_si128((const __m128i *)&v211[32]);
    v145 = *(_OWORD *)&v211[48];
    v142[4] = *(_OWORD *)&v211[64];
    v142[3] = v145;
    v142[2] = v144;
    v142[1] = v143;
    *v142 = v141;
LABEL_174:
    if ( v184 )
      sub_140001660(v208, v184, 1);
    if ( v210 )
      sub_140001660(v217, v210, 1);
LABEL_178:
    sub_140196C60(v194);
    v91 = 0;
    v92 = 0;
    a1 = v218;
    v93 = v206;
    if ( (_QWORD)v206 )
      goto LABEL_92;
    goto LABEL_93;
  }
  v200[0] = *(_QWORD *)&v211[8];
  if ( *(_QWORD *)&v211[8] )
  {
    v198.m128i_i64[0] = a2;
    v198.m128i_i64[1] = a3;
    *(_QWORD *)v211 = &v198;
    *(_QWORD *)&v211[8] = sub_14169F630;
    *(_QWORD *)&v211[16] = v200;
    *(_QWORD *)&v211[24] = sub_1416BCB10;
    sub_1416ABFD0(&v147, &unk_1419E0E9A, v211);
    v139 = v218;
    *(_QWORD *)(v218 + 24) = v148;
    v140 = _mm_loadu_si128(&v147);
    goto LABEL_171;
  }
  v146 = (_QWORD *)v218;
  *(_QWORD *)(v218 + 8) = v196.m128i_i64[0];
  *v146 = -1;
  if ( v184 )
    sub_140001660(v208, v184, 1);
  if ( v210 )
    sub_140001660(v217, v210, 1);
  sub_140196C60(v194);
  if ( (_QWORD)v206 )
    sub_140001660(*((_QWORD *)&v206 + 1), v206, 1);
  sub_140196BD0(&v177);
  if ( v169.m128i_i64[0] )
    sub_140001660(v205, v169.m128i_i64[0], 1);
  v95 = v216;
  a1 = v218;
  if ( (unsigned __int64)(v216 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_140;
  return a1;
}
