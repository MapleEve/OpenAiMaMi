// win 1.2.7 | module src/core/relay/codex_catalog.rs | ea 0x141018040 | name sub_141018040
// win 1.2.7 | module src/core/relay/codex_catalog.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_141018040(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        _QWORD *a8,
        __int64 a9)
{
  __int64 v9; // r12
  _QWORD *v12; // r14
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  _BYTE *v25; // rax
  unsigned __int64 v26; // r9
  __int64 v27; // rbx
  char v28; // cl
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r15
  bool v31; // cl
  unsigned __int64 v32; // r14
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r10
  _QWORD *v40; // r15
  __int64 v41; // r15
  __int64 v42; // r13
  __int64 v43; // rdi
  __int128 *v44; // rbx
  _QWORD *v45; // rsi
  __int64 v46; // r13
  __int64 v47; // rdi
  __int64 v48; // r15
  _QWORD *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rsi
  signed __int64 v55; // r13
  char v56; // di
  const __m128i *v57; // rbx
  __int64 v58; // r15
  __m128i *v59; // rax
  __int128 v60; // xmm0
  _OWORD *v61; // rax
  __int64 v62; // rcx
  _DWORD *v63; // rax
  __int128 v64; // xmm0
  _OWORD *v65; // rax
  __int128 v66; // xmm0
  _OWORD *v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  __int128 v71; // xmm0
  __int64 v72; // rdi
  _QWORD *v73; // rbx
  __int64 v74; // r13
  const __m128i *v75; // r14
  unsigned __int64 v76; // r15
  __int64 v77; // r12
  __int64 i; // rdi
  char v79; // bl
  __int64 v80; // rcx
  __int64 v81; // r14
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm2
  __int128 v85; // [rsp+40h] [rbp-40h]
  __int128 v86; // [rsp+50h] [rbp-30h]
  __int128 v87; // [rsp+60h] [rbp-20h]
  __int128 v88; // [rsp+70h] [rbp-10h]
  __int128 v89; // [rsp+80h] [rbp+0h] BYREF
  __m256i v90; // [rsp+90h] [rbp+10h]
  __int128 v91; // [rsp+B0h] [rbp+30h]
  __int128 v92; // [rsp+C0h] [rbp+40h]
  __int128 v93; // [rsp+D0h] [rbp+50h]
  __int128 v94; // [rsp+E0h] [rbp+60h]
  __int64 v95; // [rsp+F0h] [rbp+70h]
  __int64 v96; // [rsp+F8h] [rbp+78h]
  __int64 v97; // [rsp+100h] [rbp+80h]
  __int128 v98; // [rsp+108h] [rbp+88h]
  __int64 v99; // [rsp+118h] [rbp+98h]
  __int64 v100; // [rsp+120h] [rbp+A0h]
  __int64 v101; // [rsp+128h] [rbp+A8h]
  unsigned __int64 v102; // [rsp+140h] [rbp+C0h]
  __int64 v103; // [rsp+158h] [rbp+D8h]
  __int128 v104; // [rsp+160h] [rbp+E0h]
  __int64 v105; // [rsp+170h] [rbp+F0h]
  int v106; // [rsp+178h] [rbp+F8h]
  int v107; // [rsp+17Ch] [rbp+FCh]
  signed __int64 v108; // [rsp+188h] [rbp+108h]
  __int128 *v109; // [rsp+190h] [rbp+110h]
  __int64 v110; // [rsp+198h] [rbp+118h]
  __int64 v111; // [rsp+1A0h] [rbp+120h]
  _BYTE v112[24]; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v113; // [rsp+1C0h] [rbp+140h]
  __int128 v114; // [rsp+1D0h] [rbp+150h]
  __int128 v115; // [rsp+1E0h] [rbp+160h]
  __int128 v116; // [rsp+1F0h] [rbp+170h]
  __int64 v117; // [rsp+200h] [rbp+180h]
  __int128 v118; // [rsp+208h] [rbp+188h] BYREF
  __int64 v119; // [rsp+218h] [rbp+198h]
  __int128 v120; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v121; // [rsp+230h] [rbp+1B0h]
  _BYTE v122[88]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v123; // [rsp+298h] [rbp+218h]
  __int64 v124; // [rsp+2A8h] [rbp+228h]
  __int128 v125; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v126; // [rsp+2C0h] [rbp+240h]
  __int64 v127; // [rsp+2D0h] [rbp+250h]
  __int64 v128; // [rsp+2D8h] [rbp+258h]
  char v129; // [rsp+2E3h] [rbp+263h]
  char v130; // [rsp+2E4h] [rbp+264h]
  char v131; // [rsp+2E5h] [rbp+265h]
  char v132; // [rsp+2E6h] [rbp+266h]
  char v133; // [rsp+2E7h] [rbp+267h]
  __int64 v134; // [rsp+2E8h] [rbp+268h]

  v134 = -2;
  v111 = a1;
  v12 = a8;
  sub_1410217C0(&v89, a8, a9);
  v13 = v89;
  if ( (_QWORD)v89 != -1 )
  {
    v14 = *((_QWORD *)&v89 + 1);
    v15 = v90.m256i_i64[1];
    v16 = v90.m256i_i64[0];
    v85 = *(_OWORD *)&v90.m256i_u64[2];
    v86 = v91;
    v87 = v92;
    v88 = v93;
    goto LABEL_3;
  }
  if ( a7 )
  {
    sub_1410125F0((unsigned int)&v120, (_DWORD)a3, a4, a5, a6, 8, 0);
  }
  else
  {
    v109 = a3;
    sub_1410125F0((unsigned int)&v118, (_DWORD)a3, a4, a5, a6, 8, 0);
    v40 = &a8[9 * a9];
    v110 = a4 << 8;
    v124 = a4;
    v127 = (__int64)v40;
    if ( a8 != v40 )
    {
      do
      {
        sub_1416AC440(&v125, v12);
        sub_1416AC440(v112, v12);
        sub_1416AC440(v122, v12 + 3);
        v128 = v9;
        v90.m256i_i64[0] = v126;
        v89 = v125;
        v90.m256i_i64[3] = *(_QWORD *)&v112[16];
        *(_OWORD *)&v90.m256i_u64[1] = *(_OWORD *)v112;
        *(_QWORD *)&v91 = 0;
        *((_QWORD *)&v91 + 1) = 1;
        v92 = 0;
        v93 = 1u;
        v102 = 0x8000000000000000uLL;
        v95 = *(_QWORD *)&v122[16];
        v94 = *(_OWORD *)v122;
        v96 = 0;
        v97 = 8;
        v98 = 0;
        v99 = 1;
        v100 = 0;
        v106 = 0;
        v103 = -1;
        v104 = 0;
        v105 = 0;
        v101 = -1;
        v107 = 0;
        if ( a4 )
        {
          v41 = v12[1];
          v42 = v12[2];
          v43 = v110;
          v44 = v109;
          while ( *((_QWORD *)v44 + 2) != v42 || (unsigned int)sub_1418F4B70(*((_QWORD *)v44 + 1), v41) )
          {
            v44 += 16;
            v43 -= 256;
            if ( !v43 )
            {
              v44 = nullptr;
              break;
            }
          }
          a4 = v124;
          v45 = (_QWORD *)v127;
        }
        else
        {
          v45 = v40;
          v44 = nullptr;
        }
        if ( !v44 )
          v44 = &v89;
        sub_140FED300(v122, v44);
        *(_QWORD *)&v125 = *(_QWORD *)&v122[8];
        *((_QWORD *)&v125 + 1) = *(_QWORD *)&v122[8];
        *(_QWORD *)&v126 = *(_QWORD *)v122;
        *((_QWORD *)&v126 + 1) = *(_QWORD *)&v122[8] + 96LL * *(_QWORD *)&v122[16];
        sub_140398AC0(v122, &v125, v12);
        v9 = v128;
        if ( *(_QWORD *)v122 == 2 )
        {
          sub_140FED300(&v120, &v89);
          if ( !v121 )
          {
            v48 = 0;
LABEL_129:
            sub_141938DFB(0, v48, &off_141A6D060);
          }
          v46 = *((_QWORD *)&v120 + 1);
          v47 = **((_QWORD **)&v120 + 1);
          *(_OWORD *)v122 = *(_OWORD *)(*((_QWORD *)&v120 + 1) + 8LL);
          *(_OWORD *)&v122[16] = *(_OWORD *)(*((_QWORD *)&v120 + 1) + 24LL);
          *(_OWORD *)&v122[32] = *(_OWORD *)(*((_QWORD *)&v120 + 1) + 40LL);
          *(_OWORD *)&v122[48] = *(_OWORD *)(*((_QWORD *)&v120 + 1) + 56LL);
          *(_OWORD *)&v122[64] = *(_OWORD *)(*((_QWORD *)&v120 + 1) + 72LL);
          *(_QWORD *)&v122[80] = *(_QWORD *)(*((_QWORD *)&v120 + 1) + 88LL);
          v48 = v121 - 1;
          sub_1418F44E0(*((__m128i **)&v120 + 1), (const __m128i *)(*((_QWORD *)&v120 + 1) + 96LL), 96 * (v121 - 1));
          v121 = v48;
          if ( v47 == 2 )
            goto LABEL_129;
          *(_QWORD *)v112 = v47;
          v117 = *(_QWORD *)&v122[80];
          v116 = *(_OWORD *)&v122[64];
          v115 = *(_OWORD *)&v122[48];
          v114 = *(_OWORD *)&v122[32];
          v113 = *(_OWORD *)&v122[16];
          *(_OWORD *)&v112[8] = *(_OWORD *)v122;
          if ( v48 )
          {
            v49 = (_QWORD *)(v46 + 72);
            do
            {
              v50 = *(v49 - 7);
              if ( v50 )
                sub_140001660(*(v49 - 6), v50, 1);
              v51 = *(v49 - 1);
              if ( v51 != -1 && v51 )
                sub_140001660(*v49, v51, 1);
              v52 = *(v49 - 4);
              if ( v52 )
                sub_140001660(*(v49 - 3), v52, 1);
              v49 += 12;
              --v48;
            }
            while ( v48 );
          }
          if ( (_QWORD)v120 )
            sub_140001660(v46, 96 * v120, 8);
          a4 = v124;
          v40 = (_QWORD *)v127;
          v9 = v128;
        }
        else
        {
          v40 = v45;
          v117 = v123;
          v116 = *(_OWORD *)&v122[72];
          v115 = *(_OWORD *)&v122[56];
          v114 = *(_OWORD *)&v122[40];
          v113 = *(_OWORD *)&v122[24];
          *(_OWORD *)&v112[8] = *(_OWORD *)&v122[8];
          *(_QWORD *)v112 = *(_QWORD *)v122;
        }
        sub_140383BB0(&v125);
        sub_141013330((unsigned int)&v125, (_DWORD)v44, (unsigned int)v112, 0, 0);
        v54 = a4;
        if ( v12[6] == -1 )
        {
          v56 = 0;
          v55 = v108;
        }
        else
        {
          v55 = v12[8];
          if ( v55 < 0 )
          {
            v58 = 0;
LABEL_98:
            v133 = 1;
            sub_141938D2B(v58, v55);
          }
          v56 = 3;
          if ( v55 )
          {
            v57 = (const __m128i *)v12[7];
            nullsub_1(v53);
            v58 = 1;
            v59 = (__m128i *)sub_140001650(v55, 1);
            if ( !v59 )
              goto LABEL_98;
            v9 = (__int64)v59;
            sub_1418F44E0(v59, v57, v55);
            v40 = (_QWORD *)v127;
          }
          else
          {
            v9 = 1;
            v55 = 0;
          }
        }
        v122[0] = v56;
        *(_QWORD *)&v122[8] = v55;
        *(_QWORD *)&v122[16] = v9;
        v108 = v55;
        *(_QWORD *)&v122[24] = v55;
        v131 = 1;
        v128 = sub_141641AF0(aSlug_3, 4, &v125);
        sub_14002F9D0(v128);
        a4 = v54;
        v60 = *(_OWORD *)v122;
        v61 = (_OWORD *)v128;
        *(_OWORD *)(v128 + 16) = *(_OWORD *)&v122[16];
        *v61 = v60;
        nullsub_1(v62);
        v63 = (_DWORD *)sub_140001650(4, 1);
        if ( !v63 )
        {
          v133 = 1;
          sub_141938D2B(1, 4);
        }
        *v63 = 1701079400;
        v122[0] = 3;
        *(_QWORD *)&v122[8] = 4;
        *(_QWORD *)&v122[16] = v63;
        *(_QWORD *)&v122[24] = 4;
        v130 = 1;
        v128 = sub_141641AF0(aVisibility, 10, &v125);
        sub_14002F9D0(v128);
        v64 = *(_OWORD *)v122;
        v65 = (_OWORD *)v128;
        *(_OWORD *)(v128 + 16) = *(_OWORD *)&v122[16];
        *v65 = v64;
        v122[0] = 2;
        *(_QWORD *)&v122[8] = 0;
        *(_QWORD *)&v122[16] = 1000;
        v129 = 1;
        v128 = sub_141641AF0(aPriority_2, 8, &v125);
        sub_14002F9D0(v128);
        v66 = *(_OWORD *)v122;
        v67 = (_OWORD *)v128;
        *(_OWORD *)(v128 + 16) = *(_OWORD *)&v122[16];
        *v67 = v66;
        *(_OWORD *)&v122[16] = v126;
        *(_OWORD *)v122 = v125;
        v68 = v119;
        if ( v119 == (_QWORD)v118 )
          sub_14190F570(&v118);
        v69 = *((_QWORD *)&v118 + 1);
        v70 = 32 * v68;
        v71 = *(_OWORD *)v122;
        *(_OWORD *)(*((_QWORD *)&v118 + 1) + v70 + 16) = *(_OWORD *)&v122[16];
        *(_OWORD *)(v69 + v70) = v71;
        v119 = v68 + 1;
        if ( *(_QWORD *)&v112[16] )
          sub_140001660(v113, *(_QWORD *)&v112[16], 1);
        if ( *((_QWORD *)&v115 + 1) != -1 && *((_QWORD *)&v115 + 1) )
          sub_140001660(v116, *((_QWORD *)&v115 + 1), 1);
        if ( (_QWORD)v114 )
          sub_140001660(*((_QWORD *)&v114 + 1), v114, 1);
        v12 += 9;
        sub_14038CFC0(&v89);
      }
      while ( v12 != v40 );
    }
    v121 = v119;
    v120 = v118;
  }
  *(_QWORD *)&v125 = 0;
  *(_QWORD *)&v126 = 0;
  nullsub_1(v20);
  v21 = sub_140001650(6, 1);
  if ( !v21 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v21 + 4) = 29548;
  *(_DWORD *)v21 = 1701080941;
  *(_QWORD *)v112 = 6;
  *(_QWORD *)&v112[8] = v21;
  *(_QWORD *)&v112[16] = 6;
  v132 = 1;
  sub_140C0FE40(&v89, &v120);
  if ( (_BYTE)v89 == 0xFF )
  {
    *(_QWORD *)v122 = *((_QWORD *)&v89 + 1);
    sub_141939040(
      (unsigned int)aCalledResultUn_19,
      43,
      (unsigned int)v122,
      (unsigned int)&off_141A6D5F8,
      (__int64)&off_141A6F658);
  }
  *(_OWORD *)&v122[16] = *(_OWORD *)v90.m256i_i8;
  *(_OWORD *)v122 = v89;
  v132 = 0;
  sub_140E72AA0(&v89, &v125, v112, v122);
  if ( (_BYTE)v89 != 0xFF )
    sub_14002F9D0(&v89);
  nullsub_1(v22);
  v23 = sub_140001650(17, 1);
  if ( !v23 )
    sub_141938D2B(1, 17);
  *(_OWORD *)v23 = *(_OWORD *)aAimamiNoAccoun;
  *(_BYTE *)(v23 + 16) = 116;
  *(_QWORD *)v112 = 17;
  *(_QWORD *)&v112[8] = v23;
  *(_QWORD *)&v112[16] = 17;
  LOBYTE(v89) = 1;
  BYTE1(v89) = a7 ^ 1;
  sub_140E72AA0(v122, &v125, v112, &v89);
  if ( v122[0] != 0xFF )
    sub_14002F9D0(v122);
  *(_OWORD *)&v122[8] = v125;
  *(_QWORD *)&v122[24] = v126;
  v122[0] = 5;
  nullsub_1(v24);
  v25 = (_BYTE *)sub_140001650(128, 1);
  if ( !v25 )
    sub_141938D2B(1, 128);
  *(_QWORD *)v112 = 128;
  *(_QWORD *)&v112[8] = v25;
  *(_QWORD *)&v89 = v112;
  *((_QWORD *)&v89 + 1) = asc_141A68A20;
  v90.m256i_i64[0] = 2;
  v27 = *(_QWORD *)&v122[24];
  v90.m256i_i64[1] = 1;
  v90.m256i_i8[16] = 0;
  *v25 = 123;
  *(_QWORD *)&v112[16] = 1;
  v28 = 1;
  if ( !v27 )
  {
    v90.m256i_i64[1] = 0;
    v25[1] = 125;
    *(_QWORD *)&v112[16] = 2;
    v28 = 0;
  }
  LOBYTE(v125) = 0;
  BYTE1(v125) = v28;
  *((_QWORD *)&v125 + 1) = &v89;
  v29 = *(_QWORD *)&v122[8];
  v30 = *(_QWORD *)&v122[16];
  v31 = *(_QWORD *)&v122[8] != 0;
  if ( !*(_QWORD *)&v122[8] )
    v27 = 0;
  v32 = 0;
  while ( v27-- != 0 )
  {
    if ( !v31 )
      sub_141939020(&off_141A54AF8);
    if ( v32 )
    {
      if ( v30 < *(unsigned __int16 *)(v32 + 626) )
        goto LABEL_24;
      goto LABEL_35;
    }
    if ( !v30 )
    {
      v32 = v29;
      goto LABEL_34;
    }
    v32 = v29;
    if ( (v30 & 7) == 0 )
    {
      v37 = v30;
      if ( v30 < 8 )
        goto LABEL_34;
      do
      {
LABEL_33:
        v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 632)
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v37 -= 8LL;
      }
      while ( v37 );
      goto LABEL_34;
    }
    v36 = 0;
    do
    {
      v32 = *(_QWORD *)(v32 + 632);
      ++v36;
    }
    while ( (v30 & 7) != v36 );
    v37 = v30 - v36;
    if ( v30 >= 8 )
      goto LABEL_33;
LABEL_34:
    v30 = 0;
    v29 = 0;
    if ( *(_WORD *)(v32 + 626) )
    {
LABEL_24:
      v34 = v32;
      v35 = v30;
      goto LABEL_37;
    }
    do
    {
LABEL_35:
      v34 = *(_QWORD *)(v32 + 352);
      if ( !v34 )
        sub_141939020(&off_141A52F98);
      ++v29;
      v35 = *(unsigned __int16 *)(v32 + 624);
      v32 = *(_QWORD *)(v32 + 352);
    }
    while ( (unsigned __int16)v35 >= *(_WORD *)(v34 + 626) );
LABEL_37:
    if ( !v29 )
    {
      v30 = v35 + 1;
      v32 = v34;
      goto LABEL_45;
    }
    v38 = v34 + 8 * v35 + 640;
    if ( (v29 & 7) != 0 )
    {
      v39 = 0;
      do
      {
        v32 = *(_QWORD *)v38;
        v38 = *(_QWORD *)v38 + 632LL;
        ++v39;
      }
      while ( (v29 & 7) != v39 );
      v26 = v29 - v39;
      if ( v29 < 8 )
        goto LABEL_43;
      do
      {
LABEL_42:
        v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38 + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v38 = v32 + 632;
        v26 -= 8LL;
      }
      while ( v26 );
      goto LABEL_43;
    }
    v26 = v29;
    if ( v29 >= 8 )
      goto LABEL_42;
LABEL_43:
    v30 = 0;
LABEL_45:
    v16 = sub_140BEEE40(&v125, v34 + 24 * v35 + 360, v34 + 32 * v35, v26);
    v31 = 1;
    v29 = 0;
    if ( v16 )
    {
      if ( *(_QWORD *)v112 )
        sub_140001660(*(_QWORD *)&v112[8], *(_QWORD *)v112, 1);
LABEL_115:
      *(_QWORD *)&v125 = v16;
      *(_QWORD *)v112 = &v125;
      *(_QWORD *)&v112[8] = sub_14163CE40;
      sub_1416ABFD0(&v89, &unk_141A6CEEC, v112);
      v16 = *((_QWORD *)&v89 + 1);
      v14 = v89;
      v15 = v90.m256i_i64[0];
      sub_14002F910(&v125);
      v13 = 10;
      v79 = 0;
      goto LABEL_116;
    }
  }
  if ( (_BYTE)v125 == 1 )
    sub_141939280(aInternalErrorE_16, 40, &off_141A725F0);
  if ( BYTE1(v125) )
  {
    v72 = *((_QWORD *)&v125 + 1);
    v73 = **((_QWORD ***)&v125 + 1);
    v74 = *(_QWORD *)(*((_QWORD *)&v125 + 1) + 24LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v125 + 1) + 24LL) = v74;
    if ( *(_BYTE *)(v72 + 32) == 1 )
    {
      sub_1403B45A0(v73, &unk_141A6C878, 1);
      if ( v74 )
      {
        v75 = *(const __m128i **)(v72 + 8);
        v76 = *(_QWORD *)(v72 + 16);
        v77 = v73[2];
        for ( i = 0; i != v74; ++i )
        {
          if ( v76 > *v73 - v77 )
          {
            sub_14190D590((_DWORD)v73, v77, v76, 1, 1);
            v77 = v73[2];
          }
          else if ( !v76 )
          {
            goto LABEL_105;
          }
          sub_1418F44E0((__m128i *)(v77 + v73[1]), v75, v76);
LABEL_105:
          v77 += v76;
          v73[2] = v77;
        }
      }
    }
    sub_1403B45A0(v73, &unk_141A6C879, 1);
  }
  v16 = *(_QWORD *)&v112[8];
  v14 = *(_QWORD *)v112;
  if ( *(_QWORD *)v112 == -1 )
    goto LABEL_115;
  v15 = *(_QWORD *)&v112[16];
  v13 = -1;
  v79 = 1;
LABEL_116:
  sub_14002F9D0(v122);
  v80 = *((_QWORD *)&v120 + 1);
  v127 = v121;
  v128 = 0;
  v124 = *((_QWORD *)&v120 + 1);
  while ( v127 != v128 )
  {
    ++v128;
    v81 = v80 + 32;
    sub_1403880E0(v80);
    v80 = v81;
  }
  if ( (_QWORD)v120 )
    sub_140001660(*((_QWORD *)&v120 + 1), 32 * v120, 8);
  if ( v79 )
  {
    v128 = v14;
    v127 = v16;
    sub_14101F5F0(&v89);
    v82 = v89;
    v83 = *(_OWORD *)v90.m256i_i8;
    v84 = *(_OWORD *)&v90.m256i_u64[2];
    v17 = v111;
    *(_OWORD *)(v111 + 56) = v91;
    *(_OWORD *)(v17 + 40) = v84;
    *(_OWORD *)(v17 + 24) = v83;
    *(_OWORD *)(v17 + 8) = v82;
    *(_QWORD *)(v17 + 72) = v128;
    *(_QWORD *)(v17 + 80) = v127;
    *(_QWORD *)(v17 + 88) = v15;
    *(_BYTE *)(v17 + 96) = a7;
    v18 = 0;
    goto LABEL_4;
  }
LABEL_3:
  v17 = v111;
  *(_QWORD *)(v111 + 8) = v13;
  *(_QWORD *)(v17 + 16) = v14;
  *(_QWORD *)(v17 + 24) = v16;
  *(_QWORD *)(v17 + 32) = v15;
  *(_OWORD *)(v17 + 40) = v85;
  *(_OWORD *)(v17 + 56) = v86;
  *(_OWORD *)(v17 + 72) = v87;
  *(_OWORD *)(v17 + 88) = v88;
  v18 = 1;
LABEL_4:
  *(_QWORD *)v17 = v18;
  return v17;
}
