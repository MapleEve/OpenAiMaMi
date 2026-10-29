// win 1.2.7 | module src/core/relay/router_reconciler.rs | ea 0x14022b680 | name sub_14022B680
// win 1.2.7 | module src/core/relay/router_reconciler.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14022B680(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int128 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v17; // rax
  __int64 v18; // rcx
  _OWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  void *v28; // rax
  __int128 v29; // kr00_16
  __int128 v30; // kr10_16
  __int128 v31; // xmm0
  __int64 v32; // rdi
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r8
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int128 v39; // xmm3
  __int64 v40; // r12
  _QWORD *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int64 v55; // rax
  int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // ecx
  __int64 v60; // rax
  _OWORD *v61; // rax
  __int64 v62; // rbx
  int v63; // edx
  int v64; // r15d
  __int64 v65; // rcx
  char v66; // r14
  _OWORD *v67; // rax
  __int64 v68; // rbx
  int v69; // edx
  int v70; // r15d
  __int128 *v71; // rax
  _QWORD *v72; // r12
  __int64 v73; // r13
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int128 v77; // xmm3
  __int64 v78; // rbx
  int v79; // edx
  int v80; // r15d
  __int64 v81; // r12
  unsigned int v82; // edx
  unsigned int v83; // r15d
  __int64 v84; // rdi
  _QWORD *v85; // rbx
  __int64 v86; // rdx
  __int64 v88; // rcx
  _BYTE v89[24]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v90[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v91[3]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v92[3]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v93[3]; // [rsp+98h] [rbp+18h] BYREF
  _QWORD v94[3]; // [rsp+B0h] [rbp+30h] BYREF
  _BYTE v95[24]; // [rsp+C8h] [rbp+48h] BYREF
  _BYTE v96[24]; // [rsp+E0h] [rbp+60h] BYREF
  _BYTE v97[24]; // [rsp+F8h] [rbp+78h] BYREF
  _BYTE v98[24]; // [rsp+110h] [rbp+90h] BYREF
  _BYTE v99[24]; // [rsp+128h] [rbp+A8h] BYREF
  _BYTE v100[24]; // [rsp+140h] [rbp+C0h] BYREF
  _BYTE v101[24]; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v102; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v103; // [rsp+180h] [rbp+100h]
  __int128 v104; // [rsp+188h] [rbp+108h] BYREF
  _BYTE v105[24]; // [rsp+198h] [rbp+118h] BYREF
  __int128 v106; // [rsp+1B0h] [rbp+130h]
  __int128 v107; // [rsp+1C0h] [rbp+140h]
  __int128 v108; // [rsp+1D0h] [rbp+150h]
  __int128 v109; // [rsp+1E0h] [rbp+160h]
  __int128 v110; // [rsp+1F0h] [rbp+170h]
  __int64 v111; // [rsp+200h] [rbp+180h]
  __int128 v112; // [rsp+208h] [rbp+188h] BYREF
  __int64 v113; // [rsp+218h] [rbp+198h]
  __int64 v114; // [rsp+220h] [rbp+1A0h]
  __int64 v115; // [rsp+228h] [rbp+1A8h]
  _QWORD v116[2]; // [rsp+230h] [rbp+1B0h] BYREF
  __m256i v117; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v118; // [rsp+260h] [rbp+1E0h]
  __int128 v119; // [rsp+270h] [rbp+1F0h]
  __int128 v120; // [rsp+280h] [rbp+200h]
  __int128 v121; // [rsp+290h] [rbp+210h]
  __m256i v122; // [rsp+2A8h] [rbp+228h] BYREF
  __int128 v123; // [rsp+2C8h] [rbp+248h]
  __int128 v124; // [rsp+2D8h] [rbp+258h]
  __int128 v125; // [rsp+2E8h] [rbp+268h]
  __int128 v126; // [rsp+2F8h] [rbp+278h]
  _QWORD *v127; // [rsp+308h] [rbp+288h] BYREF
  __int64 (__fastcall *v128)(); // [rsp+310h] [rbp+290h]
  _BYTE *v129; // [rsp+318h] [rbp+298h]
  __int64 (__fastcall *v130)(_QWORD, _QWORD); // [rsp+320h] [rbp+2A0h]
  __int64 v131; // [rsp+328h] [rbp+2A8h]
  _BYTE v132[208]; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v133; // [rsp+428h] [rbp+3A8h]
  __m256i v134; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v135; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v136; // [rsp+460h] [rbp+3E0h]
  __int128 v137; // [rsp+470h] [rbp+3F0h]
  __int128 v138; // [rsp+480h] [rbp+400h]
  _BYTE v139[208]; // [rsp+490h] [rbp+410h] BYREF
  __int128 v140; // [rsp+588h] [rbp+508h] BYREF
  __int64 v141; // [rsp+598h] [rbp+518h]
  __int128 v142; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v143; // [rsp+5B0h] [rbp+530h]
  __int64 v144; // [rsp+5B8h] [rbp+538h]
  __int64 v145; // [rsp+5C0h] [rbp+540h]

  v145 = -2;
  v104 = a7;
  nullsub_1(a1);
  v17 = sub_140001650(24, 8);
  if ( !v17 )
    sub_141938D11(8, 24);
  v144 = v17;
  *(_QWORD *)v139 = &v104;
  *(_QWORD *)&v139[8] = sub_140186EE0;
  sub_1416ABFD0(&v102, &unk_1419DD81B, v139);
  v18 = v103;
  v19 = (_OWORD *)v144;
  *(_QWORD *)(v144 + 16) = v103;
  *v19 = v102;
  *(_QWORD *)&v140 = 1;
  *((_QWORD *)&v140 + 1) = v19;
  v141 = 1;
  *(_QWORD *)&v142 = 0;
  *((_QWORD *)&v142 + 1) = 8;
  v143 = 0;
  if ( !a9 )
  {
    nullsub_1(v18);
    if ( !(_BYTE)a8 )
    {
      v28 = (void *)sub_140001650(70, 1);
      if ( !v28 )
        sub_141938D2B(1, 70);
      qmemcpy(v28, "NativeOff strict reconciliation requires a verified Codex quiet window", 70);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 70;
      *(_QWORD *)(a1 + 16) = v28;
      *(_QWORD *)(a1 + 24) = 70;
      goto LABEL_18;
    }
    v20 = sub_140001650(84, 1);
    if ( !v20 )
      sub_141938D2B(1, 84);
    *(_OWORD *)(v20 + 64) = xmmword_1419DD887;
    *(_OWORD *)(v20 + 48) = xmmword_1419DD877;
    *(_OWORD *)(v20 + 32) = xmmword_1419DD867;
    *(_OWORD *)(v20 + 16) = xmmword_1419DD857;
    *(_OWORD *)v20 = xmmword_1419DD847;
    v144 = v20;
    *(_DWORD *)(v20 + 80) = -1517951591;
    v21 = v141;
    if ( v141 == (_QWORD)v140 )
      sub_14190FDC0(&v140);
    v22 = *((_QWORD *)&v140 + 1);
    v23 = 3 * v21;
    *(_QWORD *)(*((_QWORD *)&v140 + 1) + 8 * v23) = 84;
    *(_QWORD *)(v22 + 8 * v23 + 8) = v144;
    *(_QWORD *)(v22 + 8 * v23 + 16) = 84;
    v141 = v21 + 1;
    nullsub_1(3 * v21);
    v24 = sub_140001650(98, 1);
    if ( !v24 )
      sub_141938D2B(1, 98);
    *(_OWORD *)(v24 + 80) = xmmword_1419DD8EB;
    *(_OWORD *)(v24 + 64) = xmmword_1419DD8DB;
    *(_OWORD *)(v24 + 48) = xmmword_1419DD8CB;
    *(_OWORD *)(v24 + 32) = xmmword_1419DD8BB;
    *(_OWORD *)(v24 + 16) = xmmword_1419DD8AB;
    *(_OWORD *)v24 = xmmword_1419DD89B;
    v144 = v24;
    *(_WORD *)(v24 + 96) = -32384;
    v25 = v143;
    if ( v143 == (_QWORD)v142 )
      sub_14190FDC0(&v142);
    v26 = *((_QWORD *)&v142 + 1);
    v27 = 3 * v25;
    *(_QWORD *)(*((_QWORD *)&v142 + 1) + 8 * v27) = 98;
    *(_QWORD *)(v26 + 8 * v27 + 8) = v144;
    *(_QWORD *)(v26 + 8 * v27 + 16) = 98;
    v143 = v25 + 1;
    *(_QWORD *)&v139[16] = v141;
    *(_OWORD *)v139 = v140;
    *(_QWORD *)&v139[40] = v25 + 1;
    *(_OWORD *)&v139[24] = v142;
    *(_OWORD *)(a1 + 8) = v140;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v139[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v139[16];
    *(_BYTE *)(a1 + 56) = 0;
LABEL_13:
    *(_QWORD *)a1 = -1;
    return a1;
  }
  sub_140EED040(v139);
  if ( *(_QWORD *)v139 != -1 )
  {
    *(_OWORD *)&v132[80] = *(_OWORD *)&v139[80];
    *(_OWORD *)&v132[64] = *(_OWORD *)&v139[64];
    *(_OWORD *)&v132[48] = *(_OWORD *)&v139[48];
    *(_OWORD *)&v132[32] = *(_OWORD *)&v139[32];
    *(_OWORD *)v132 = *(_OWORD *)v139;
    *(_OWORD *)&v132[16] = *(_OWORD *)&v139[16];
LABEL_17:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v132[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v132[64];
    v29 = *(_OWORD *)v132;
    v30 = *(_OWORD *)&v132[16];
    v31 = *(_OWORD *)&v132[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v132[48];
    *(_OWORD *)(a1 + 32) = v31;
    *(_OWORD *)(a1 + 16) = v30;
    *(_OWORD *)a1 = v29;
    goto LABEL_18;
  }
  v134.m256i_i64[0] = *(_QWORD *)&v139[16];
  v134.m256i_i64[1] = *(_QWORD *)&v139[16];
  v134.m256i_i64[2] = *(_QWORD *)&v139[8];
  v134.m256i_i64[3] = *(_QWORD *)&v139[16] + 32LL * *(_QWORD *)&v139[24];
  sub_140390120(&v117, &v134);
  sub_140EECB20(v132, &v117);
  if ( *(_DWORD *)v132 != -1 )
    goto LABEL_17;
  if ( a10 )
    (*(void (__fastcall **)(__int64, const char *, __int64))(a11 + 32))(a10, aRestoringConfi, 16);
  sub_140C967E0(v139, a2);
  v35 = *(_QWORD *)v139;
  if ( *(_QWORD *)v139 != -1
    || (v36 = a2[98],
        v144 = a2[97],
        v114 = v36,
        sub_140252A60(v139, v144, v36),
        v35 = *(_QWORD *)v139,
        *(_QWORD *)v139 != -1) )
  {
    v111 = *(_QWORD *)&v139[88];
    v110 = *(_OWORD *)&v139[72];
    v109 = *(_OWORD *)&v139[56];
    v108 = *(_OWORD *)&v139[40];
    v107 = *(_OWORD *)&v139[24];
    v106 = *(_OWORD *)&v139[8];
    *(_QWORD *)a1 = v35;
    v37 = v107;
    v38 = v108;
    v39 = v109;
    *(_OWORD *)(a1 + 8) = v106;
    *(_OWORD *)(a1 + 24) = v37;
    *(_OWORD *)(a1 + 40) = v38;
    *(_OWORD *)(a1 + 56) = v39;
    *(_OWORD *)(a1 + 72) = v110;
    *(_QWORD *)(a1 + 88) = v111;
    goto LABEL_18;
  }
  v131 = *(_QWORD *)&v139[8];
  v40 = *(_QWORD *)&v139[24];
  v133 = *(_QWORD *)&v139[16];
  if ( *(_QWORD *)&v139[24] )
  {
    v41 = (_QWORD *)(v133 + 56);
    do
    {
      v42 = *(v41 - 7);
      if ( v42 )
        sub_140001660(*(v41 - 6), v42, 1);
      v43 = *(v41 - 1);
      if ( v43 != -1 && v43 )
        sub_140001660(*v41, v43, 1);
      v44 = *(v41 - 4);
      if ( v44 )
        sub_140001660(*(v41 - 3), v44, 1);
      v41 += 9;
      --v40;
    }
    while ( v40 );
  }
  if ( v131 )
    sub_140001660(v133, 72 * v131, 8);
  sub_140EFE1A0(v139);
  if ( *(_DWORD *)v139 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v139[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v139[64];
    v45 = *(_OWORD *)v139;
    v46 = *(_OWORD *)&v139[16];
    v47 = *(_OWORD *)&v139[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v139[48];
    *(_OWORD *)(a1 + 32) = v47;
    *(_OWORD *)(a1 + 16) = v46;
    *(_OWORD *)a1 = v45;
LABEL_18:
    v32 = v143;
    if ( v143 )
    {
      v33 = (_QWORD *)(*((_QWORD *)&v142 + 1) + 8LL);
      do
      {
        v34 = *(v33 - 1);
        if ( v34 )
          sub_140001660(*v33, v34, 1);
        v33 += 3;
        --v32;
      }
      while ( v32 );
    }
    goto LABEL_116;
  }
  v131 = sub_14167FC00();
  LODWORD(v133) = v48;
  *(_QWORD *)&v139[16] = a3;
  *(_QWORD *)&v139[24] = a4;
  *(_OWORD *)&v139[32] = __PAIR128__(a6, a5);
  *(_QWORD *)v139 = 0;
  *(_WORD *)&v139[64] = 0;
  *(_OWORD *)&v139[48] = 8u;
  sub_14017A0F0(&v122, a2, (__m128i *)v139, nullptr);
  if ( v122.m256i_i32[0] == -1 )
    goto LABEL_70;
  v138 = v126;
  v137 = v125;
  v136 = v124;
  v135 = v123;
  v134 = v122;
  v116[0] = aNativeOffConfi;
  v116[1] = 22;
  if ( (unsigned __int8)sub_14022A4A0(&v134) )
  {
    sub_140229720(v132, &v134);
    *(_QWORD *)v139 = v116;
    *(_QWORD *)&v139[8] = sub_140186EE0;
    *(_QWORD *)&v139[16] = v132;
    *(_QWORD *)&v139[24] = sub_1400015F0;
    sub_1416ABFD0(v89, &unk_1419D5782, v139);
    if ( *(_QWORD *)v132 )
      sub_140001660(*(_QWORD *)&v132[8], *(_QWORD *)v132, 1);
    sub_14019B500((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe, 19, (__int64)v89);
    sub_140EC2070(v132);
    v115 = *(_QWORD *)v132;
    if ( *(_QWORD *)v132 == -1 )
    {
      v117.m256i_i32[0] = *(_DWORD *)&v132[8];
      *(_QWORD *)v139 = v116;
      *(_QWORD *)&v139[8] = sub_140186EE0;
      *(_QWORD *)&v139[16] = &v117;
      *(_QWORD *)&v139[24] = sub_1416BBD00;
      sub_1416ABFD0(v105, &unk_1419D57BA, v139);
      sub_14019B500((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe_0, 32, (__int64)v105);
      sub_1403FAE40(&v132[16]);
      if ( *(_QWORD *)&v132[16] )
        sub_140001660(*(_QWORD *)&v132[24], 24LL * *(_QWORD *)&v132[16], 8);
    }
    else
    {
      *(_OWORD *)&v139[80] = *(_OWORD *)&v132[80];
      *(_OWORD *)&v139[64] = *(_OWORD *)&v132[64];
      *(_OWORD *)&v139[48] = *(_OWORD *)&v132[48];
      *(_OWORD *)&v139[32] = *(_OWORD *)&v132[32];
      *(_OWORD *)&v139[16] = *(_OWORD *)&v132[16];
      *(_OWORD *)v139 = *(_OWORD *)v132;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v127 = v116;
        v128 = sub_140186EE0;
        v129 = v139;
        v130 = sub_14104A7D0;
        v117.m256i_i64[0] = (__int64)aCodexmateLibCo_18;
        v117.m256i_i64[1] = 45;
        v117.m256i_i64[2] = (__int64)aCodexmateLibCo_18;
        v117.m256i_i64[3] = 45;
        *(_QWORD *)&v118 = &off_1419D5868;
        sub_140BAD520(&unk_1419D57EC, &v127, 2, &v117);
      }
      sub_1401954F0(v139);
    }
    sub_141696800(0, 700000000);
    *(_QWORD *)&v139[16] = a3;
    *(_QWORD *)&v139[24] = a4;
    *(_OWORD *)&v139[32] = __PAIR128__(a6, a5);
    *(_QWORD *)v139 = 0;
    *(_WORD *)&v139[64] = 0;
    *(_OWORD *)&v139[48] = 8u;
    sub_14017A0F0(&v122, a2, (__m128i *)v139, nullptr);
    if ( v122.m256i_i32[0] == -1 )
    {
      v50 = -1;
    }
    else
    {
      *(_OWORD *)&v139[80] = v126;
      *(_OWORD *)&v139[64] = v125;
      *(_OWORD *)&v139[48] = v124;
      *(_OWORD *)&v139[32] = v123;
      *(__m256i *)v139 = v122;
      if ( (unsigned __int8)sub_14022A4A0(v139) )
      {
        sub_140229720(&v127, &v134);
        sub_140229720(&v117, v139);
        *(_QWORD *)v132 = v116;
        *(_QWORD *)&v132[8] = sub_140186EE0;
        *(_QWORD *)&v132[16] = &v127;
        *(_QWORD *)&v132[24] = sub_1400015F0;
        *(_QWORD *)&v132[32] = &v117;
        *(_QWORD *)&v132[40] = sub_1400015F0;
        sub_1416ABFD0(&v112, &unk_1419D676D, v132);
        if ( v117.m256i_i64[0] )
          sub_140001660(v117.m256i_i64[1], v117.m256i_i64[0], 1);
        if ( v127 )
          sub_140001660(v128, v127, 1);
        *(_OWORD *)v117.m256i_i8 = v112;
        v117.m256i_i64[2] = v113;
        v50 = 10;
        sub_1401954F0(v139);
      }
      else
      {
        v50 = *(_QWORD *)v139;
        *(_OWORD *)v117.m256i_i8 = *(_OWORD *)&v122.m256i_u64[1];
        v117.m256i_i64[2] = v122.m256i_i64[3];
        *(_OWORD *)v132 = v123;
        *(_OWORD *)&v132[16] = v124;
        *(_OWORD *)&v132[32] = v125;
        *(_OWORD *)&v132[48] = v126;
      }
      v122.m256i_i64[0] = v50;
      *(_OWORD *)&v122.m256i_u64[1] = *(_OWORD *)v117.m256i_i8;
      v122.m256i_i64[3] = v117.m256i_i64[2];
      v123 = *(_OWORD *)v132;
      v124 = *(_OWORD *)&v132[16];
      v125 = *(_OWORD *)&v132[32];
      v126 = *(_OWORD *)&v132[48];
    }
    sub_1401954F0(&v134);
  }
  else
  {
    v50 = v122.m256i_i64[0];
  }
  if ( v50 == -1 )
  {
LABEL_70:
    nullsub_1(v49);
    v55 = sub_140001650(22, 1);
    if ( !v55 )
      sub_141938D2B(1, 22);
    *(_OWORD *)v55 = xmmword_1419DDA57;
    *(_QWORD *)(v55 + 14) = 0x6769666E6F6320B1LL;
    *(_QWORD *)v139 = 22;
    *(_QWORD *)&v139[8] = v55;
    *(_QWORD *)&v139[16] = 22;
    sub_1401F4600(&v140, v139);
    sub_1416828D0((unsigned int)v132, v144, v114, (unsigned int)&unk_141A6F681, 25);
    v144 = *(_QWORD *)&v132[8];
    sub_141695A00(v139, *(_QWORD *)&v132[8], *(_QWORD *)&v132[16]);
    v56 = *(_DWORD *)v139;
    sub_14018FCC0(*(_QWORD *)v139, *(_QWORD *)&v139[8]);
    if ( v56 == 2 )
    {
      if ( *(_QWORD *)v132 )
        sub_140001660(v144, *(_QWORD *)v132, 1);
      nullsub_1(v57);
      v58 = sub_140001650(23, 1);
      if ( !v58 )
        sub_141938D2B(1, 23);
      *(_OWORD *)v58 = xmmword_1419DDA6D;
      *(_QWORD *)(v58 + 15) = 0x676F6C6174616320LL;
      *(_QWORD *)v139 = 23;
      *(_QWORD *)&v139[8] = v58;
      *(_QWORD *)&v139[16] = 23;
      sub_1401F4600(&v140, v139);
    }
    else
    {
      if ( *(_QWORD *)v132 )
        sub_140001660(v144, *(_QWORD *)v132, 1);
      nullsub_1(v57);
      v60 = sub_140001650(102, 1);
      if ( !v60 )
        sub_141938D2B(1, 102);
      *(_OWORD *)(v60 + 80) = xmmword_1419DDAD4;
      *(_OWORD *)(v60 + 64) = xmmword_1419DDAC4;
      *(_OWORD *)(v60 + 48) = xmmword_1419DDAB4;
      *(_OWORD *)(v60 + 32) = xmmword_1419DDAA4;
      *(_OWORD *)(v60 + 16) = xmmword_1419DDA94;
      *(_OWORD *)v60 = xmmword_1419DDA84;
      *(_QWORD *)(v60 + 94) = 0xB096E6B49BE6969BuLL;
      *(_QWORD *)v139 = 102;
      *(_QWORD *)&v139[8] = v60;
      *(_QWORD *)&v139[16] = 102;
      sub_1401F4600(&v142, v139);
    }
LABEL_82:
    LOBYTE(v59) = 1;
    sub_14019F070(v59, v131, v133, (unsigned int)&unk_1419DDAEA, 20);
    v62 = sub_14167FC00();
    v64 = v63;
    sub_140F62240(v132, a2);
    if ( *(_DWORD *)v132 == -1 )
    {
      v66 = v132[8];
      if ( v132[8] )
      {
        nullsub_1(v65);
        v67 = (_OWORD *)sub_140001650(59, 1);
        if ( !v67 )
          sub_141938D2B(1, 59);
        *(_OWORD *)((char *)v67 + 43) = *(__int128 *)((char *)&xmmword_1419DDB1E + 11);
        v67[2] = xmmword_1419DDB1E;
        v67[1] = xmmword_1419DDB0E;
        *v67 = xmmword_1419DDAFE;
        *(_QWORD *)v139 = 59;
        *(_QWORD *)&v139[8] = v67;
        *(_QWORD *)&v139[16] = 59;
        sub_1401F4600(&v140, v139);
      }
      v105[0] = v66;
    }
    else
    {
      if ( !(_BYTE)a8 )
        goto LABEL_103;
      *(_OWORD *)&v139[80] = *(_OWORD *)&v132[80];
      *(_OWORD *)&v139[64] = *(_OWORD *)&v132[64];
      *(_OWORD *)&v139[48] = *(_OWORD *)&v132[48];
      *(_OWORD *)&v139[32] = *(_OWORD *)&v132[32];
      *(_OWORD *)&v139[16] = *(_OWORD *)&v132[16];
      *(_OWORD *)v139 = *(_OWORD *)v132;
      v134.m256i_i64[0] = (__int64)v139;
      v134.m256i_i64[1] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(v101, &unk_1419DDB39, &v134);
      sub_1401F4600(&v142, v101);
      v105[0] = 0;
      sub_1401954F0(v139);
    }
    *(_QWORD *)v139 = v105;
    *(_QWORD *)&v139[8] = sub_1416BCC50;
    sub_1416ABFD0(v94, &unk_1419DDB81, v139);
    sub_14019EF00(1, (__int64)aAuthCleanup, 12, v62, v64, v94);
    v68 = sub_14167FC00();
    v70 = v69;
    LOBYTE(v112) = sub_140EF7BE0(a2);
    v127 = nullptr;
    v122.m256i_i64[0] = 0;
    if ( (_BYTE)v112 )
    {
      sub_140F014F0((__int64)v139, a2);
      if ( *(_DWORD *)v139 == 1 )
      {
        v71 = (__int128 *)&v139[8];
        if ( !(_BYTE)a8 )
          goto LABEL_113;
        *(_OWORD *)&v132[80] = *(_OWORD *)&v139[88];
        *(_OWORD *)&v132[64] = *(_OWORD *)&v139[72];
        *(_OWORD *)&v132[48] = *(_OWORD *)&v139[56];
        *(_OWORD *)&v132[32] = *(_OWORD *)&v139[40];
        *(_OWORD *)&v132[16] = *(_OWORD *)&v139[24];
        *(_OWORD *)v132 = *(_OWORD *)&v139[8];
        v134.m256i_i64[0] = (__int64)v132;
        v134.m256i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(v98, &unk_1419DDC40, &v134);
        sub_1401F4600(&v142, v98);
        sub_1401954F0(v132);
      }
      else
      {
        v72 = *(_QWORD **)&v139[24];
        v73 = *(_QWORD *)&v139[48];
        if ( *(_QWORD *)&v139[96] )
        {
          sub_140D1EE10((unsigned int)v132, *(_DWORD *)&v139[88], *(_DWORD *)&v139[96], (unsigned int)&unk_1419D54B8, 3);
          v134.m256i_i64[2] = *(_QWORD *)&v132[16];
          *(_OWORD *)v134.m256i_i8 = *(_OWORD *)v132;
          *(_QWORD *)v132 = &v134;
          *(_QWORD *)&v132[8] = sub_1400015F0;
          sub_1416ABFD0(v100, &unk_1419DDB98, v132);
          if ( v134.m256i_i64[0] )
            sub_140001660(v134.m256i_i64[1], v134.m256i_i64[0], 1);
          sub_1401F4600(&v142, v100);
        }
        v127 = v72;
        v122.m256i_i64[0] = v73;
        *(_QWORD *)v132 = &v127;
        *(_QWORD *)&v132[8] = sub_1416BCB10;
        *(_QWORD *)&v132[16] = &v122;
        *(_QWORD *)&v132[24] = sub_1416BCB10;
        sub_1416ABFD0(v99, &unk_1419DDC11, v132);
        sub_1401F4600(&v140, v99);
        sub_140195A80(&v139[8]);
      }
    }
    *(_QWORD *)v139 = &v112;
    *(_QWORD *)&v139[8] = sub_1416BCC50;
    *(_QWORD *)&v139[16] = &v127;
    *(_QWORD *)&v139[24] = sub_1416BCB10;
    *(_QWORD *)&v139[32] = &v122;
    *(_QWORD *)&v139[40] = sub_1416BCB10;
    sub_1416ABFD0(v93, &unk_1419DDC8C, v139);
    sub_14019EF00(1, (__int64)aTakeoverRestor, 16, v68, v70, v93);
    sub_140EEE3A0(v139);
    if ( *(_DWORD *)v139 != -1 )
    {
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v139[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v139[64];
      v74 = *(_OWORD *)v139;
      v75 = *(_OWORD *)&v139[16];
      v76 = *(_OWORD *)&v139[32];
      v77 = *(_OWORD *)&v139[48];
LABEL_114:
      *(_OWORD *)(a1 + 48) = v77;
      *(_OWORD *)(a1 + 32) = v76;
      *(_OWORD *)(a1 + 16) = v75;
      *(_OWORD *)a1 = v74;
      goto LABEL_115;
    }
    v78 = sub_14167FC00();
    v80 = v79;
    sub_1402452F0((__m128i *)v132, (__int64)a2);
    if ( *(_DWORD *)v132 == -1 )
    {
      *(_QWORD *)&v135 = *(_QWORD *)&v132[40];
      v134 = *(__m256i *)&v132[8];
      *(_QWORD *)v139 = &v134;
      *(_QWORD *)&v139[8] = sub_1416BCB10;
      *(_QWORD *)&v139[16] = &v134.m256i_i64[1];
      *(_QWORD *)&v139[24] = sub_1416BCB10;
      *(_QWORD *)&v139[32] = &v134.m256i_i64[2];
      *(_QWORD *)&v139[40] = sub_1416BCB10;
      *(_QWORD *)&v139[48] = &v134.m256i_i64[3];
      *(_QWORD *)&v139[56] = sub_1416BCB10;
      *(_QWORD *)&v139[64] = &v135;
      *(_QWORD *)&v139[72] = sub_1416BCB10;
      sub_1416ABFD0(v92, &unk_1419DDCD2, v139);
      sub_14019EF00(1, (__int64)aNoAccountModel, 24, v78, v80, v92);
      if ( v134.m256i_i64[0] )
      {
        *(_QWORD *)v139 = &v134;
        *(_QWORD *)&v139[8] = sub_1416BCB10;
        sub_1416ABFD0(v97, &unk_1419DDD45, v139);
        sub_1401F4600(&v140, v97);
      }
      goto LABEL_106;
    }
    if ( (_BYTE)a8 )
    {
      *(_OWORD *)&v139[80] = *(_OWORD *)&v132[80];
      *(_OWORD *)&v139[64] = *(_OWORD *)&v132[64];
      *(_OWORD *)&v139[48] = *(_OWORD *)&v132[48];
      *(_OWORD *)&v139[32] = *(_OWORD *)&v132[32];
      *(_OWORD *)&v139[16] = *(_OWORD *)&v132[16];
      *(_OWORD *)v139 = *(_OWORD *)v132;
      v134.m256i_i64[0] = (__int64)v139;
      v134.m256i_i64[1] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(v91, &unk_1419DDD81, &v134);
      sub_14019EF00(1, (__int64)aNoAccountModel, 24, v78, v80, v91);
      v134.m256i_i64[0] = (__int64)v139;
      v134.m256i_i64[1] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(v96, &unk_1419DDD97, &v134);
      sub_1401F4600(&v142, v96);
      sub_1401954F0(v139);
LABEL_106:
      if ( a10 )
        (*(void (__fastcall **)(__int64, const char *, __int64))(a11 + 32))(a10, aReconcilingThr, 19);
      v81 = sub_14167FC00();
      v83 = v82;
      *(_QWORD *)v139 = aOpenai_0;
      *(_QWORD *)&v139[8] = 6;
      *(_WORD *)&v139[16] = 257;
      sub_140237C40((__int64)v132, (int)a2, (__int64)v139, a12, a13, 0);
      if ( *(_DWORD *)v132 != 2 )
      {
        sub_1418F44E0((__m128i *)v139, (const __m128i *)v132, 0xF0u);
        LOBYTE(v88) = 1;
        sub_1402293E0(v88, v81, v83, v139);
        sub_140229910(&v117, aNativeoff, 9, v139);
        v134.m256i_i64[0] = v117.m256i_i64[1];
        v134.m256i_i64[1] = v117.m256i_i64[1];
        v134.m256i_i64[2] = v117.m256i_i64[0];
        v134.m256i_i64[3] = v117.m256i_i64[1] + 24 * v117.m256i_i64[2];
        sub_1403E4A40(&v140, &v134);
        sub_140229D00(&v142, aNativeoff, 9, v139);
        sub_1401968E0(&v139[72]);
LABEL_127:
        *(_QWORD *)&v139[16] = v141;
        *(_OWORD *)v139 = v140;
        *(_QWORD *)&v139[40] = v143;
        *(_OWORD *)&v139[24] = v142;
        *(_OWORD *)(a1 + 8) = v140;
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v139[32];
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v139[16];
        *(_BYTE *)(a1 + 56) = 1;
        goto LABEL_13;
      }
      v71 = (__int128 *)&v132[8];
      if ( (_BYTE)a8 )
      {
        *(_OWORD *)&v139[80] = *(_OWORD *)&v132[88];
        *(_OWORD *)&v139[64] = *(_OWORD *)&v132[72];
        *(_OWORD *)&v139[48] = *(_OWORD *)&v132[56];
        *(_OWORD *)&v139[32] = *(_OWORD *)&v132[40];
        *(_OWORD *)&v139[16] = *(_OWORD *)&v132[24];
        *(_OWORD *)v139 = *(_OWORD *)&v132[8];
        v134.m256i_i64[0] = (__int64)v139;
        v134.m256i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(v90, &unk_1419DDD81, &v134);
        sub_14019EF00(1, (__int64)aThreadReconcil, 16, v81, v83, v90);
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v117.m256i_i64[0] = (__int64)v139;
          v117.m256i_i64[1] = (__int64)sub_14104A7D0;
          v134.m256i_i64[0] = (__int64)aCodexmateLibCo_18;
          v134.m256i_i64[1] = 45;
          v134.m256i_i64[2] = (__int64)aCodexmateLibCo_18;
          v134.m256i_i64[3] = 45;
          *(_QWORD *)&v135 = &off_1419DDE60;
          sub_140BAD520(&unk_1419DDE04, &v117, 2, &v134);
        }
        v134.m256i_i64[0] = (__int64)v139;
        v134.m256i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(v95, &unk_1419DDE78, &v134);
        sub_1401F4600(&v142, v95);
        sub_1401954F0(v139);
        goto LABEL_127;
      }
LABEL_113:
      *(_OWORD *)(a1 + 80) = v71[5];
      *(_OWORD *)(a1 + 64) = v71[4];
      v74 = *v71;
      v75 = v71[1];
      v76 = v71[2];
      v77 = v71[3];
      goto LABEL_114;
    }
LABEL_103:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v132[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v132[64];
    v74 = *(_OWORD *)v132;
    v75 = *(_OWORD *)&v132[16];
    v76 = *(_OWORD *)&v132[32];
    v77 = *(_OWORD *)&v132[48];
    goto LABEL_114;
  }
  v121 = v126;
  v120 = v125;
  v119 = v124;
  v118 = v123;
  v117 = v122;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)v132 = &v117;
    *(_QWORD *)&v132[8] = sub_14104A7D0;
    *(_QWORD *)v139 = aCodexmateLibCo_18;
    *(_QWORD *)&v139[8] = 45;
    *(_QWORD *)&v139[16] = aCodexmateLibCo_18;
    *(_QWORD *)&v139[24] = 45;
    *(_QWORD *)&v139[32] = &off_1419DD9E0;
    sub_140BAD520(&unk_1419DD969, v132, 2, v139);
  }
  sub_1401A1EC0((__int64)&v134, a2);
  if ( v134.m256i_i32[0] == -1 )
  {
    nullsub_1(v51);
    v61 = (_OWORD *)sub_140001650(58, 1);
    if ( !v61 )
      sub_141938D2B(1, 58);
    *(_OWORD *)((char *)v61 + 42) = *(__int128 *)((char *)&xmmword_1419DDA3D + 10);
    v61[2] = xmmword_1419DDA3D;
    v61[1] = xmmword_1419DDA2D;
    *v61 = xmmword_1419DDA1D;
    *(_QWORD *)v139 = 58;
    *(_QWORD *)&v139[8] = v61;
    *(_QWORD *)&v139[16] = 58;
    sub_1401F4600(&v140, v139);
    sub_1401954F0(&v117);
    goto LABEL_82;
  }
  *(_OWORD *)&v139[80] = v138;
  *(_OWORD *)&v139[64] = v137;
  *(_OWORD *)&v139[48] = v136;
  *(_OWORD *)&v139[32] = v135;
  *(__m256i *)v139 = v134;
  sub_1401B2030(v132, &v117, v139);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v132[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v132[64];
  v52 = *(_OWORD *)v132;
  v53 = *(_OWORD *)&v132[16];
  v54 = *(_OWORD *)&v132[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v132[48];
  *(_OWORD *)(a1 + 32) = v54;
  *(_OWORD *)(a1 + 16) = v53;
  *(_OWORD *)a1 = v52;
  sub_1401954F0(&v117);
LABEL_115:
  sub_1403FAE40(&v142);
LABEL_116:
  if ( (_QWORD)v142 )
    sub_140001660(*((_QWORD *)&v142 + 1), 24 * v142, 8);
  v84 = v141;
  if ( v141 )
  {
    v85 = (_QWORD *)(*((_QWORD *)&v140 + 1) + 8LL);
    do
    {
      v86 = *(v85 - 1);
      if ( v86 )
        sub_140001660(*v85, v86, 1);
      v85 += 3;
      --v84;
    }
    while ( v84 );
  }
  if ( (_QWORD)v140 )
    sub_140001660(*((_QWORD *)&v140 + 1), 24 * v140, 8);
  return a1;
}
