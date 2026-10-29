// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407db070 | successor of pre-update 0x1402331d0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
void __fastcall sub_1407DB070(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // r12
  __int64 v4; // r15
  __int128 v5; // xmm6
  __int128 v6; // xmm7
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int128 v13; // xmm0
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int128 *v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __m128i v20; // xmm0
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  char *v26; // r13
  __int64 v27; // rcx
  unsigned __int8 *v28; // r12
  __int64 v29; // r14
  unsigned __int8 (__fastcall *v30)(unsigned __int64); // rax
  __int64 v31; // rax
  void *v32; // rdx
  char v33; // cl
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // r14
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int8 *v48; // r15
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int8 *v51; // rdx
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rcx
  __int64 v55; // r13
  char v56; // al
  unsigned __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // rdi
  unsigned int v60; // eax
  unsigned int v61; // r14d
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r15
  unsigned __int64 v65; // rbx
  __m128i v66; // xmm0
  __int128 *v67; // r14
  unsigned __int64 v68; // rdi
  char v69; // al
  __int128 v70; // xmm8
  char v71; // al
  __int64 v72; // r13
  unsigned __int8 *v73; // rdi
  unsigned __int64 v74; // rdi
  unsigned __int8 *v75; // rbx
  unsigned __int8 v76; // r14
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // r12
  void (__fastcall *v82)(__int64); // rax
  bool v83; // zf
  __int64 v84; // rdx
  __int16 v85; // ax
  int v86; // ecx
  __int64 v87; // rdi
  char *v88; // r14
  __m128i v89; // xmm0
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __m128i v92; // xmm1
  __m128i v93; // xmm2
  __int64 v94; // rdx
  __m128i v95; // xmm0
  unsigned __int64 v96; // rbx
  __int64 v97; // rbx
  __int128 v98; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v99[8160]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v100[3]; // [rsp+2040h] [rbp+1FC0h] BYREF
  __m128i v101; // [rsp+2070h] [rbp+1FF0h] BYREF
  __m128i v102; // [rsp+2080h] [rbp+2000h]
  __int64 v103; // [rsp+2090h] [rbp+2010h]
  __int64 v104; // [rsp+2098h] [rbp+2018h] BYREF
  unsigned __int64 v105; // [rsp+20A0h] [rbp+2020h] BYREF
  char v106; // [rsp+20A8h] [rbp+2028h] BYREF
  _BYTE v107[7]; // [rsp+20A9h] [rbp+2029h]
  __int64 v108; // [rsp+20B0h] [rbp+2030h]
  __m128i v109; // [rsp+20B8h] [rbp+2038h]
  __int64 (__fastcall *v110)(_QWORD, _QWORD, _QWORD); // [rsp+20C8h] [rbp+2048h]
  _BYTE v111[48]; // [rsp+20D0h] [rbp+2050h] BYREF
  __m128i v112; // [rsp+2100h] [rbp+2080h] BYREF
  __m128i v113; // [rsp+2110h] [rbp+2090h]
  __m128i v114; // [rsp+2120h] [rbp+20A0h]
  __int64 v115; // [rsp+2130h] [rbp+20B0h]
  __int64 v116; // [rsp+2138h] [rbp+20B8h]
  __int64 v117; // [rsp+2140h] [rbp+20C0h]
  __int128 *v118; // [rsp+2148h] [rbp+20C8h]
  __m128i v119; // [rsp+2150h] [rbp+20D0h] BYREF
  __m128i v120; // [rsp+2160h] [rbp+20E0h]
  __int64 v121; // [rsp+2170h] [rbp+20F0h]
  __int64 v122; // [rsp+2180h] [rbp+2100h]
  int v123; // [rsp+2188h] [rbp+2108h]
  __int16 v124; // [rsp+218Ch] [rbp+210Ch]
  int v125; // [rsp+2190h] [rbp+2110h]
  __int16 v126; // [rsp+2194h] [rbp+2114h]
  unsigned __int64 v127; // [rsp+2198h] [rbp+2118h]
  HANDLE hObject; // [rsp+21A0h] [rbp+2120h] BYREF
  __int64 v129; // [rsp+21A8h] [rbp+2128h]
  __int64 v130; // [rsp+21B0h] [rbp+2130h]
  char v131; // [rsp+21B8h] [rbp+2138h]
  __int128 v132; // [rsp+21C0h] [rbp+2140h] BYREF
  __m256i v133; // [rsp+21D0h] [rbp+2150h] BYREF
  _BYTE v134[48]; // [rsp+21F0h] [rbp+2170h] BYREF
  int v135; // [rsp+2228h] [rbp+21A8h]
  __int16 v136; // [rsp+222Ch] [rbp+21ACh]
  int v137; // [rsp+2230h] [rbp+21B0h]
  __int16 v138; // [rsp+2234h] [rbp+21B4h]
  char *v139; // [rsp+2238h] [rbp+21B8h] BYREF
  __int64 v140; // [rsp+2240h] [rbp+21C0h] BYREF
  unsigned __int64 v141; // [rsp+2248h] [rbp+21C8h]
  char v142; // [rsp+2250h] [rbp+21D0h]
  __int64 (__fastcall *v143)(_QWORD, _QWORD, _QWORD); // [rsp+2258h] [rbp+21D8h]
  unsigned __int8 *v144; // [rsp+2260h] [rbp+21E0h]
  unsigned __int64 v145; // [rsp+2268h] [rbp+21E8h]
  unsigned __int64 v146; // [rsp+2270h] [rbp+21F0h]
  int v147; // [rsp+2278h] [rbp+21F8h]
  __int16 v148; // [rsp+227Ch] [rbp+21FCh]
  __int64 v149; // [rsp+2280h] [rbp+2200h]
  unsigned __int8 *v150; // [rsp+2288h] [rbp+2208h]
  char v151; // [rsp+2296h] [rbp+2216h]
  char v152; // [rsp+2297h] [rbp+2217h]
  char *v153; // [rsp+2298h] [rbp+2218h]
  char v154; // [rsp+22A7h] [rbp+2227h]
  __int64 v155; // [rsp+22A8h] [rbp+2228h]
  char v156; // [rsp+22B6h] [rbp+2236h]
  char v157; // [rsp+22B7h] [rbp+2237h]
  __int64 v158; // [rsp+22B8h] [rbp+2238h]

  v158 = -2;
  v7 = a3;
  v8 = a2;
  sub_140A934F0(&v98, a2, a3);
  v10 = v98;
  if ( *(_QWORD *)&v99[16] == -1 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)a1 = -2;
    return;
  }
  if ( *(_DWORD *)&v99[16] == 2 )
    v10 = -1;
  v122 = v10;
  if ( v10 != -1 )
    v7 = *(_QWORD *)v99;
  v115 = *((_QWORD *)&v98 + 1);
  if ( v10 != -1 )
    v8 = *((_QWORD *)&v98 + 1);
  sub_1407DF3C0(&v98);
  v12 = *((_QWORD *)&v98 + 1);
  v11 = v98;
  v101 = *(__m128i *)v99;
  v102 = _mm_loadu_si128((const __m128i *)&v99[16]);
  v103 = *(_QWORD *)&v99[32];
  if ( (_QWORD)v98 != -1 )
  {
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v99[72];
    v13 = *(_OWORD *)&v99[40];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v99[56];
    *(_OWORD *)(a1 + 64) = v13;
    *(_QWORD *)(a1 + 56) = v103;
    v14 = _mm_load_si128(&v101);
    *(__m128i *)(a1 + 40) = v102;
    *(__m128i *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v12;
    *(_QWORD *)a1 = -2;
    goto LABEL_10;
  }
  if ( *((_QWORD *)&v98 + 1) == -1 )
  {
    *(_QWORD *)a1 = -1;
    goto LABEL_10;
  }
  *(_QWORD *)v111 = *((_QWORD *)&v98 + 1);
  *(__m128i *)&v111[8] = _mm_load_si128(&v101);
  *(__m128i *)&v111[24] = v102;
  *(_QWORD *)&v111[40] = v103;
  v98 = *(_OWORD *)&v111[8];
  *(_OWORD *)v99 = 0;
  *(_OWORD *)&v99[16] = *(_OWORD *)&v111[8];
  v156 = 1;
  sub_140D8B500(&v132, &v98);
  if ( (_BYTE)v132 == 0xFF )
  {
    v23 = *((_QWORD *)&v132 + 1);
    *(_QWORD *)(a1 + 8) = 3;
    *(_QWORD *)(a1 + 16) = v23;
    *(_QWORD *)a1 = -2;
    if ( !v12 )
      goto LABEL_10;
LABEL_28:
    sub_140001660(*(_QWORD *)&v111[8], v12, 1);
    goto LABEL_10;
  }
  *(_DWORD *)&v107[3] = DWORD1(v132);
  *(_DWORD *)v107 = *(_DWORD *)((char *)&v132 + 1);
  v15 = _mm_loadu_si128((const __m128i *)&v133);
  v109 = v15;
  v106 = v132;
  v108 = *((_QWORD *)&v132 + 1);
  v16 = sub_14166BC00(&v106, aPayloadId_0, 11);
  if ( !v16 || *(_BYTE *)v16 != 3 || (v116 = *(_QWORD *)(v16 + 24)) == 0 )
  {
    v112.m128i_i64[0] = v8;
    v112.m128i_i64[1] = v7;
    *(_QWORD *)&v132 = &v112;
    *((_QWORD *)&v132 + 1) = sub_1416CE600;
    sub_1416DAFA0((char *)&v98 + 8, &unk_141A47557, &v132);
    v20 = _mm_loadu_si128((const __m128i *)((char *)&v98 + 8));
    v21 = *(_OWORD *)&v99[24];
    v22 = *(_OWORD *)&v99[40];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v99[8];
    *(_OWORD *)(a1 + 48) = v21;
    *(_OWORD *)(a1 + 64) = v22;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v99[56];
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v99[72];
    *(_QWORD *)(a1 + 8) = 9;
    *(__m128i *)(a1 + 16) = v20;
    *(_QWORD *)a1 = -2;
    goto LABEL_25;
  }
  v117 = *(_QWORD *)(v16 + 16);
  v146 = *(_QWORD *)&v111[24] + *(_QWORD *)&v111[32];
  v112.m128i_i64[0] = -1;
  if ( !(unsigned __int8)sub_140A92610(v8, v7) )
  {
    LODWORD(v98) = 0;
    *((_QWORD *)&v98 + 1) = 0;
    *(_DWORD *)v99 = 7;
    *(_QWORD *)&v99[4] = 0x100000000LL;
    *(_QWORD *)&v99[9] = 0;
    v31 = sub_1416BFE10(&v98, v8, v7);
    v35 = (__int64)v32;
    if ( v31 == 1 )
    {
LABEL_54:
      v38 = 2;
LABEL_55:
      WORD2(v127) = *(_WORD *)&v134[6];
      LODWORD(v127) = *(_DWORD *)&v134[2];
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v134[40];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v134[24];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v134[8];
      *(_QWORD *)(a1 + 24) = v34;
      *(_DWORD *)(a1 + 58) = v127;
      *(_WORD *)(a1 + 62) = WORD2(v127);
      *(_QWORD *)(a1 + 8) = v38;
      *(_QWORD *)(a1 + 16) = v35;
      *(__m128i *)(a1 + 32) = v15;
      *(_QWORD *)(a1 + 48) = v32;
      *(_BYTE *)(a1 + 56) = v33;
      *(_BYTE *)(a1 + 57) = v31;
LABEL_165:
      *(_QWORD *)a1 = -2;
      if ( v112.m128i_i64[0] != -1 && v112.m128i_i64[0] )
        sub_140001660(v112.m128i_i64[1], v112.m128i_i64[0], 1);
LABEL_25:
      v156 = 1;
      sub_140032FF0(&v106);
      v12 = *(_QWORD *)v111;
      if ( !*(_QWORD *)v111 )
        goto LABEL_10;
      goto LABEL_28;
    }
    hObject = v32;
    sub_1416B2180(&v98, &hObject);
    if ( (_DWORD)v98 == 2 )
    {
      v35 = *((_QWORD *)&v98 + 1);
      LOBYTE(v31) = CloseHandle(hObject);
      goto LABEL_54;
    }
    v40 = *(_QWORD *)&v99[40];
    if ( *(_QWORD *)&v99[40] <= v146 )
    {
      CloseHandle(hObject);
      v35 = -1;
    }
    else
    {
      nullsub_1(v37, v36);
      v143 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_140001650(22, 1);
      if ( !v143 )
        sub_14196B2DB(1, 22);
      nullsub_1(v42, v41);
      v150 = (unsigned __int8 *)sub_140001680(0x100000, 1);
      if ( !v150 )
      {
        v110 = v143;
        sub_14196B2DB(1, 0x100000);
      }
      v43 = 0;
      v155 = 0;
      v149 = 0;
      v44 = v40;
LABEL_61:
      v45 = v44 - v146;
      if ( v44 <= v146 )
      {
        v96 = 0;
        if ( v40 >= v146 )
          v96 = v40 - v146;
        if ( (v155 & 1) == 0 )
        {
          v132 = -1;
          goto LABEL_147;
        }
        sub_1407D7F90(&v98, &hObject, v146, v40);
        v153 = *((char **)&v98 + 1);
        v58 = v98;
        v59 = *(_QWORD *)&v99[8];
        v155 = *(_QWORD *)v99;
        if ( (_QWORD)v98 != -1 )
        {
          *(_OWORD *)&v134[32] = *(_OWORD *)&v99[64];
          *(_OWORD *)&v134[16] = *(_OWORD *)&v99[48];
          *(_OWORD *)v134 = *(_OWORD *)&v99[32];
          *(_OWORD *)&v133.m256i_u64[2] = *(_OWORD *)&v99[16];
          *((_QWORD *)&v132 + 1) = v153;
          v133.m256i_i64[0] = v155;
          goto LABEL_142;
        }
        v97 = (unsigned __int8)v149 + v96;
        v152 = 1;
        sub_1407D9A70((__int64)&v98, v155, *(__int64 *)&v99[8], v146, v97, v149, (__int64)&v112);
        if ( (_DWORD)v98 == -1 )
        {
          *(_QWORD *)&v98 = v153;
          *((_QWORD *)&v98 + 1) = v155;
          *(_QWORD *)v99 = v59;
          v152 = 0;
          sub_1407E9E50((unsigned int)&v132, (unsigned int)&v98, v146, v97, v149, v117, v116);
        }
        else
        {
          *(_OWORD *)&v134[32] = *(_OWORD *)&v99[64];
          *(_OWORD *)&v134[16] = *(_OWORD *)&v99[48];
          *(_OWORD *)v134 = *(_OWORD *)&v99[32];
          v133 = *(__m256i *)v99;
          v132 = v98;
          if ( v153 )
            sub_140001660(v155, v153, 1);
        }
      }
      else
      {
        if ( v45 >= 0x100000 )
          v45 = 0x100000;
        v145 = v44 - v45;
        if ( sub_1416D07B0(&hObject, 0, (LARGE_INTEGER)(v44 - v45)) == 1 )
        {
          *(_QWORD *)&v132 = 2;
          *((_QWORD *)&v132 + 1) = v46;
          goto LABEL_147;
        }
        v47 = sub_140C45960(&hObject, v150, v45);
        if ( !v47 )
        {
          v48 = &v150[v45];
          v49 = (unsigned int)v149;
          v153 = (char *)v40;
          v50 = v43;
          while ( 1 )
          {
            while ( 1 )
            {
              v43 = v50;
              v40 = (unsigned __int64)v153;
              v149 = (unsigned int)v49;
              LOBYTE(v49) = 10;
              if ( (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, unsigned __int8 *))off_1422401B0)(
                     v49,
                     v150,
                     v48) != 1 )
              {
                v44 = v145;
                if ( v45 )
                {
                  LOBYTE(v60) = sub_1407DA5E0(v150, v45, (__int64)v143, v43);
                  v61 = v60;
                  nullsub_1(v63, v62);
                  v153 = (char *)sub_140001650(22, 1);
                  if ( !v153 )
                    sub_14196B2DB(1, 22);
                  v64 = 22;
                  if ( v45 < 0x16 )
                    v64 = v45;
                  sub_1419234B0(v153, v150, v64);
                  if ( v45 < 0x16 )
                  {
                    v65 = 22 - v64;
                    if ( 22 - v64 >= v43 )
                      v65 = v43;
                    if ( v43 )
                      sub_1419234B0(&v153[v64], v143, v65);
                    v64 += v65;
                  }
                  LOBYTE(v61) = (v155 | v61) & 1;
                  sub_140001660(v143, 22, 1);
                  v143 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v153;
                  v43 = v64;
                  v155 = v61;
                  v44 = v145;
                }
                goto LABEL_61;
              }
              v48 = v51;
              v52 = v51 - v150;
              if ( v45 <= v51 - v150 )
                sub_14196B880(v51 - v150 + 1, v45, 0x100000, &off_141A4BEB8);
              v153 = (char *)(v52 + v145);
              v53 = v52 + v145 + 1;
              if ( (v155 & 1) == 0 )
                break;
              v54 = 0;
              if ( v40 >= v53 )
                v54 = v40 - v53;
              v55 = v54 + (unsigned __int8)v149;
LABEL_77:
              sub_1407D7F90(&v98, &hObject, v53, v40);
              v58 = v98;
              v59 = *(_QWORD *)&v99[8];
              if ( (_QWORD)v98 != -1 )
              {
                v89 = _mm_loadu_si128((const __m128i *)&v99[16]);
                *(_OWORD *)&v134[32] = *(_OWORD *)&v99[64];
                *(_OWORD *)&v134[16] = *(_OWORD *)&v99[48];
                *(_OWORD *)v134 = *(_OWORD *)&v99[32];
                *(__m128i *)&v133.m256i_u64[2] = v89;
                *((_QWORD *)&v132 + 1) = *((_QWORD *)&v98 + 1);
                v133.m256i_i64[0] = *(_QWORD *)v99;
LABEL_142:
                v133.m256i_i64[1] = v59;
                *(_QWORD *)&v132 = v58;
                goto LABEL_147;
              }
              v155 = *((_QWORD *)&v98 + 1);
              v151 = 1;
              v144 = *(unsigned __int8 **)v99;
              sub_1407D9A70((__int64)&v98, *(__int64 *)v99, *(__int64 *)&v99[8], v53, v55, v149, (__int64)&v112);
              if ( (_DWORD)v98 != -1 )
              {
                *(_OWORD *)&v134[32] = *(_OWORD *)&v99[64];
                *(_OWORD *)&v134[16] = *(_OWORD *)&v99[48];
                *(_OWORD *)v134 = *(_OWORD *)&v99[32];
                v133 = *(__m256i *)v99;
                v132 = v98;
                if ( v155 )
                  sub_140001660(v144, v155, 1);
                goto LABEL_147;
              }
              v139 = (char *)v155;
              v140 = (__int64)v144;
              v141 = v59;
              v151 = 0;
              sub_1407E9E50((unsigned int)&v98, (unsigned int)&v139, v53, v55, v149, v117, v116);
              v47 = *((_QWORD *)&v98 + 1);
              v49 = v98;
              v119 = _mm_loadu_si128((const __m128i *)v99);
              v120 = *(__m128i *)&v99[16];
              v121 = *(_QWORD *)&v99[32];
              if ( (_QWORD)v98 != -1 )
              {
                *(_QWORD *)&v134[40] = *(_QWORD *)&v99[72];
                *(_OWORD *)&v134[24] = *(_OWORD *)&v99[56];
                *(_OWORD *)&v134[8] = *(_OWORD *)&v99[40];
                *(__m128i *)v133.m256i_i8 = _mm_load_si128(&v119);
                *(__m128i *)&v133.m256i_u64[2] = v120;
                *(_QWORD *)v134 = v121;
                *(_QWORD *)&v132 = v98;
                goto LABEL_146;
              }
              LOBYTE(v49) = 1;
              v50 = 0;
              v155 = 0;
              v45 = v52;
              if ( *((_QWORD *)&v98 + 1) != -1 )
              {
                *((_QWORD *)&v132 + 1) = *((_QWORD *)&v98 + 1);
                *(__m128i *)v133.m256i_i8 = _mm_load_si128(&v119);
                *(__m128i *)&v133.m256i_u64[2] = v120;
                *(_QWORD *)v134 = v121;
                *(_QWORD *)&v132 = -1;
                goto LABEL_147;
              }
            }
            v56 = sub_1407DA5E0(v51 + 1, v45 - (v51 - v150 + 1), (__int64)v143, v43);
            v50 = 0;
            v57 = v40 - v53;
            if ( v40 < v53 )
              v57 = 0;
            LOBYTE(v49) = 1;
            v155 = 0;
            v45 = v52;
            if ( v56 )
            {
              v55 = (unsigned __int8)v149 + v57;
              goto LABEL_77;
            }
          }
        }
        *(_QWORD *)&v132 = 2;
LABEL_146:
        *((_QWORD *)&v132 + 1) = v47;
      }
LABEL_147:
      sub_140001660(v150, 0x100000, 1);
      sub_140001660(v143, 22, 1);
      v38 = v132;
      CloseHandle(hObject);
      v35 = *((_QWORD *)&v132 + 1);
      if ( v38 != -1 )
      {
        v32 = (void *)v133.m256i_i64[3];
        v33 = v134[0];
        LOBYTE(v31) = v134[1];
        v34 = v133.m256i_i64[0];
        v15 = _mm_loadu_si128((const __m128i *)&v133.m256i_u64[1]);
        goto LABEL_55;
      }
      v4 = v133.m256i_i64[1];
      v40 = v133.m256i_i64[0];
      v5 = *(_OWORD *)&v133.m256i_u64[2];
      LOBYTE(v8) = v134[0];
      LOBYTE(v3) = v134[1];
    }
    v85 = *(_WORD *)&v134[6];
    v86 = *(_DWORD *)&v134[2];
    goto LABEL_151;
  }
  v17 = &v98;
  sub_140A92FF0(&v98, v8, v7);
  v19 = *((_QWORD *)&v98 + 1);
  v149 = v98;
  if ( !(_QWORD)v98 )
  {
    v39 = 2;
LABEL_164:
    v123 = v147;
    v124 = v148;
    *(_QWORD *)(a1 + 96) = v121;
    v95 = _mm_load_si128(&v119);
    *(__m128i *)(a1 + 80) = v120;
    *(__m128i *)(a1 + 64) = v95;
    *(_QWORD *)(a1 + 24) = v17;
    *(_DWORD *)(a1 + 58) = v123;
    *(_WORD *)(a1 + 62) = v124;
    *(_QWORD *)(a1 + 8) = v39;
    *(_QWORD *)(a1 + 16) = v19;
    *(_OWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 48) = v3;
    *(_BYTE *)(a1 + 56) = v157;
    *(_BYTE *)(a1 + 57) = v4;
    goto LABEL_165;
  }
  v3 = (unsigned __int8 *)v146;
  v105 = v146;
  v150 = *((unsigned __int8 **)&v98 + 1);
  if ( !v146 )
    goto LABEL_97;
  hObject = &v98;
  v129 = 0x2000;
  v130 = 0;
  v131 = 0;
  v4 = (__int64)jpt_1407DB5D8;
  v155 = 0;
  while ( 1 )
  {
    v25 = v130;
    v17 = (__int128 *)(v129 - v130 - (_QWORD)v3);
    if ( v129 - v130 <= (unsigned __int64)v3 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, HANDLE *))(v19 + 72))(v149, &hObject);
      v28 = &v3[v25];
      v29 = v130;
      v3 = &v28[-v130];
    }
    else
    {
      v26 = (char *)hObject + v130;
      v139 = (char *)hObject + v130;
      v140 = (__int64)v3;
      v141 = 0;
      v142 = 0;
      if ( v131 )
      {
        v142 = 1;
        v19 = (*(__int64 (__fastcall **)(__int64, char **))(v19 + 72))(v149, &v139);
        v4 = v141;
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(__int64, char **))(v19 + 72))(v149, &v139);
        v4 = v141;
        if ( v142 )
        {
          sub_141923C40(&v26[(_QWORD)v3], 0, v17);
          v131 = 1;
        }
      }
      v29 = v4 + v25;
      v130 = v29;
      v3 -= v4;
    }
    v127 = v19;
    if ( v19 )
    {
      switch ( v19 & 3 )
      {
        case 0uLL:
          if ( *(_BYTE *)(v19 + 16) == 35 )
            goto LABEL_32;
          goto LABEL_93;
        case 1uLL:
          if ( *(_BYTE *)(v19 + 31) != 35 )
            goto LABEL_93;
          v140 = v19 - 1;
          LOBYTE(v139) = 3;
          v154 = 0;
          sub_1416EBAD0(&v140);
LABEL_32:
          v19 = (unsigned __int64)v150;
          if ( v3 )
            continue;
          if ( v130 )
            v155 += v130;
          break;
        case 2uLL:
          v154 = 1;
          v30 = *(unsigned __int8 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v27, v18) + 16);
          v154 = 1;
          if ( !v30(HIDWORD(v19)) )
            goto LABEL_93;
          goto LABEL_32;
        case 3uLL:
          v24 = HIDWORD(v19);
          if ( HIDWORD(v19) >= 0x2B )
            LOBYTE(v24) = -1;
          if ( (_BYTE)v24 == 35 )
            goto LABEL_32;
LABEL_93:
          v39 = 2;
          goto LABEL_159;
      }
LABEL_96:
      v104 = v155;
      if ( v146 == v155 )
        goto LABEL_97;
LABEL_158:
      *(_QWORD *)&v98 = &v105;
      *((_QWORD *)&v98 + 1) = sub_1416EBAE0;
      *(_QWORD *)v99 = &v104;
      *(_QWORD *)&v99[8] = sub_1416EBAE0;
      sub_1416DAFA0((char *)&v132 + 8, &unk_141A46118, &v98);
      v19 = *((_QWORD *)&v132 + 1);
      v17 = (__int128 *)v133.m256i_i64[0];
      v6 = *(_OWORD *)&v133.m256i_u64[1];
      v3 = (unsigned __int8 *)v133.m256i_i64[3];
      v157 = v134[0];
      v39 = 10;
      LOBYTE(v4) = v134[1];
LABEL_159:
      v147 = *(_DWORD *)&v134[2];
      v148 = *(_WORD *)&v134[6];
      v119 = *(__m128i *)&v134[8];
      v120 = _mm_loadu_si128((const __m128i *)&v134[24]);
      v121 = *(_QWORD *)&v134[40];
LABEL_160:
      if ( *(_QWORD *)v150 )
        (*(void (__fastcall **)(__int64))v150)(v149);
      v94 = *((_QWORD *)v150 + 1);
      if ( v94 )
        sub_140001660(v149, v94, *((_QWORD *)v150 + 2));
      goto LABEL_164;
    }
    if ( !v29 )
      break;
    v155 += v29;
    v130 = 0;
    v19 = (unsigned __int64)v150;
    if ( !v3 )
      goto LABEL_96;
  }
  v19 = (unsigned __int64)v150;
  v104 = v155;
  if ( v146 != v155 )
    goto LABEL_158;
LABEL_97:
  v139 = nullptr;
  v140 = 1;
  v143 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v19 + 112);
  v155 = -1;
  while ( 2 )
  {
    v141 = 0;
    LOBYTE(v18) = 10;
    v71 = v143(v149, v18, &v139);
    v72 = v18;
    if ( (v71 & 1) != 0 )
    {
      v81 = 2;
      v19 = v18;
LABEL_136:
      v87 = v155;
      v88 = v153;
      if ( v139 )
        sub_140001660(v140, v139, 1);
      if ( (unsigned __int64)(v87 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v88, v87, 1);
      v17 = v118;
      v39 = v81;
      v3 = (unsigned __int8 *)v146;
      goto LABEL_160;
    }
    v73 = v150;
    if ( v18 )
    {
      v74 = v141;
      if ( v141 )
      {
        v75 = (unsigned __int8 *)v140;
        v76 = *(_BYTE *)(v140 + v141 - 1);
        if ( v76 != 10 || (v74 = v141 - 1, (v141 = v74) != 0) )
        {
          if ( sub_1407D7D20((unsigned __int8 *)v140, v74, aSessionMeta, 0xCu)
            || sub_1407D7D20(v75, v74, aThreadSettings, 0x17u) )
          {
            v78 = v141;
            if ( v141 )
            {
              v79 = v140;
              nullsub_1(v77, v18);
              v80 = sub_140001650(v78, 1);
              if ( !v80 )
                sub_14196B2DB(1, v78);
              *(_QWORD *)&v132 = v78;
              *((_QWORD *)&v132 + 1) = v80;
              sub_1419234B0(v80, v79, v78);
            }
            else
            {
              *(_QWORD *)&v132 = 0;
              *((_QWORD *)&v132 + 1) = 1;
            }
            v133.m256i_i64[0] = v78;
            sub_1407E9E50((unsigned int)&v98, (unsigned int)&v132, v146, v72, v76 == 10, v117, v116);
            v19 = *((_QWORD *)&v98 + 1);
            v118 = *(__int128 **)v99;
            v6 = *(_OWORD *)&v99[8];
            v68 = *(_QWORD *)&v99[8];
            v70 = *(_OWORD *)&v99[16];
            v157 = v99[32];
            LODWORD(v4) = v99[33];
            v135 = *(_DWORD *)&v99[34];
            v136 = *(_WORD *)&v99[38];
            if ( (_QWORD)v98 != -1 )
            {
              v146 = *(_QWORD *)&v99[24];
              v81 = v98;
              v121 = *(_QWORD *)&v99[72];
              v120 = *(__m128i *)&v99[56];
              v119 = *(__m128i *)&v99[40];
              v147 = v135;
              v148 = v136;
              goto LABEL_136;
            }
            if ( *((_QWORD *)&v98 + 1) != -1 )
            {
              if ( (unsigned __int64)(v155 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v153, v155, 1);
              WORD2(hObject) = v136;
              LODWORD(hObject) = v135;
              v18 = v112.m128i_i64[0];
              v67 = v118;
              if ( v112.m128i_i64[0] != -1 && v112.m128i_i64[0] )
                sub_140001660(v112.m128i_i64[1], v112.m128i_i64[0], 1);
              v112.m128i_i64[0] = -1;
              v69 = v157;
              goto LABEL_100;
            }
            if ( sub_1407D7D20((unsigned __int8 *)v140, v141, aThreadSettings, 0x17u) )
            {
              v100[0].m128i_i64[0] = -1;
              sub_1407D9A70((__int64)&v98, v140, v141, v146, v72, v76 == 10, (__int64)v100);
              if ( (_QWORD)v98 != -1 )
              {
                v19 = *((_QWORD *)&v98 + 1);
                v81 = v98;
                v118 = *(__int128 **)v99;
                v6 = *(_OWORD *)&v99[8];
                v146 = *(_QWORD *)&v99[24];
                v157 = v99[32];
                LOBYTE(v4) = v99[33];
                v147 = *(_DWORD *)&v99[34];
                v148 = *(_WORD *)&v99[38];
                v119 = *(__m128i *)&v99[40];
                v120 = *(__m128i *)&v99[56];
                v121 = *(_QWORD *)&v99[72];
                if ( (unsigned __int64)(v100[0].m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                  sub_140001660(v100[0].m128i_i64[1], v100[0].m128i_i64[0], 1);
                goto LABEL_136;
              }
              if ( v100[0].m128i_i64[0] != -1 )
              {
                v18 = v112.m128i_i64[0];
                if ( v112.m128i_i64[0] != -1 && v112.m128i_i64[0] )
                  sub_140001660(v112.m128i_i64[1], v112.m128i_i64[0], 1);
                v66 = _mm_loadu_si128(v100);
                v114 = v100[2];
                v113 = v100[1];
                v112 = v66;
              }
            }
          }
        }
      }
      v19 = v155;
      v67 = (__int128 *)v153;
      v68 = v145;
      v69 = (char)v144;
      LODWORD(v4) = (_DWORD)v3;
      v70 = v5;
LABEL_100:
      v146 += v72;
      v155 = v19;
      v153 = (char *)v67;
      v145 = v68;
      LOBYTE(v144) = v69;
      LODWORD(v3) = v4;
      v5 = v70;
      continue;
    }
    break;
  }
  v148 = WORD2(hObject);
  v147 = (int)hObject;
  if ( v139 )
    sub_140001660(v140, v139, 1);
  v82 = *(void (__fastcall **)(__int64))v73;
  v83 = *(_QWORD *)v73 == 0;
  v35 = v155;
  v40 = (unsigned __int64)v153;
  LOBYTE(v8) = (_BYTE)v144;
  v4 = v145;
  if ( !v83 )
    v82(v149);
  v84 = *((_QWORD *)v150 + 1);
  if ( v84 )
    sub_140001660(v149, v84, *((_QWORD *)v150 + 2));
  v85 = v148;
  v86 = v147;
LABEL_151:
  v137 = v86;
  v138 = v85;
  if ( v35 == -1 )
  {
    sub_1416DB410(&v98, v111);
    v5 = *(_OWORD *)&v111[24];
    LOBYTE(v8) = v111[40];
    LOBYTE(v3) = v111[41];
    v40 = *((_QWORD *)&v98 + 1);
    v35 = v98;
    v4 = *(_QWORD *)v99;
  }
  else
  {
    v126 = v138;
    v125 = v137;
  }
  v90 = *(_OWORD *)v111;
  v91 = *(_OWORD *)&v111[16];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v111[32];
  *(_OWORD *)(a1 + 16) = v91;
  *(_OWORD *)a1 = v90;
  v92 = v113;
  v93 = v114;
  *(__m128i *)(a1 + 96) = _mm_load_si128(&v112);
  *(__m128i *)(a1 + 112) = v92;
  *(__m128i *)(a1 + 128) = v93;
  *(_QWORD *)(a1 + 48) = v35;
  *(_QWORD *)(a1 + 56) = v40;
  *(_QWORD *)(a1 + 64) = v4;
  *(_OWORD *)(a1 + 72) = v5;
  *(_BYTE *)(a1 + 88) = v8;
  *(_BYTE *)(a1 + 89) = (_BYTE)v3;
  *(_WORD *)(a1 + 94) = v126;
  *(_DWORD *)(a1 + 90) = v125;
  v156 = 0;
  sub_140032FF0(&v106);
LABEL_10:
  if ( (unsigned __int64)(v122 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    sub_140001660(v115, v122, 1);
}
