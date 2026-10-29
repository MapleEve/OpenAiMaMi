// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | ea 0x140dc67b0 | name sub_140DC67B0
// win 1.2.7 | module src/core/relay/anthropic_continuation.rs | attributed via panic-Location xref (win-native)
unsigned __int64 __fastcall sub_140DC67B0(_QWORD *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // r13
  __m128i *v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  bool v8; // zf
  unsigned __int64 v9; // rax
  __int8 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __m128i *v14; // r8
  __int64 *v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  __m128i *v22; // rsi
  __int64 v23; // rax
  void (__fastcall *v24)(unsigned __int128 *, __int64, __int64); // r9
  __int64 v25; // rcx
  __int64 v26; // rsi
  __m128i *v27; // rdi
  __int64 v28; // r14
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r10
  const __m128i *v36; // rdx
  __int64 v37; // rcx
  const __m128i *v38; // rax
  _QWORD *v39; // rsi
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int128 v49; // xmm0
  __int128 v50; // xmm0
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __m128i v57; // xmm2
  __int128 v58; // xmm3
  __int128 v59; // xmm4
  __int64 v60; // rdi
  __int64 v61; // r14
  __int64 v62; // rsi
  const char *v63; // r12
  __m128i v64; // rax
  volatile signed __int64 *v65; // rcx
  __m128i *v66; // rax
  __m128i *v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  void (__fastcall *v73)(__int64, __int64, __int64); // rax
  __int64 v74; // r8
  void (__fastcall *v75)(__int64, __int64); // rax
  __int64 v76; // rdx
  void *v77; // rax
  char v78; // al
  void *v79; // rax
  unsigned __int8 v80; // di
  const char *v81; // rcx
  void *v82; // rax
  void (__fastcall *v83)(unsigned __int64 *, __m128i *, __int64); // rax
  void *v84; // rax
  __int64 v85; // rdx
  void (__fastcall *v86)(__int64, __int64, __int64); // rax
  __int64 v87; // r8
  __int64 v88; // r14
  const __m128i *v89; // rsi
  __m128i *v90; // rcx
  __m128i v91; // xmm1
  const __m128i *v93; // rdi
  __m128i v94[64]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v95[64]; // [rsp+448h] [rbp+3C8h] BYREF
  __m128i v96[65]; // [rsp+850h] [rbp+7D0h] BYREF
  __int128 v97; // [rsp+C60h] [rbp+BE0h]
  __m128i v98; // [rsp+C70h] [rbp+BF0h]
  __m128i v99; // [rsp+C80h] [rbp+C00h]
  __m256i v100; // [rsp+C90h] [rbp+C10h] BYREF
  __int128 v101; // [rsp+CB0h] [rbp+C30h]
  __int128 v102; // [rsp+CC0h] [rbp+C40h]
  __int128 v103; // [rsp+CD0h] [rbp+C50h]
  __m128i v104; // [rsp+CE0h] [rbp+C60h]
  __m128i v105; // [rsp+CF0h] [rbp+C70h]
  __m128i v106; // [rsp+D00h] [rbp+C80h] BYREF
  __int128 v107; // [rsp+D10h] [rbp+C90h]
  __int128 v108; // [rsp+D20h] [rbp+CA0h]
  __int128 v109; // [rsp+D30h] [rbp+CB0h]
  __int128 v110; // [rsp+D40h] [rbp+CC0h]
  __int64 v111; // [rsp+D50h] [rbp+CD0h]
  __int64 v112; // [rsp+D58h] [rbp+CD8h] BYREF
  __m128i v113; // [rsp+D60h] [rbp+CE0h] BYREF
  __m256i v114; // [rsp+D70h] [rbp+CF0h]
  __int128 v115; // [rsp+D90h] [rbp+D10h] BYREF
  __int128 v116; // [rsp+DA0h] [rbp+D20h]
  __m128i v117; // [rsp+DB0h] [rbp+D30h]
  __m128i v118; // [rsp+DC0h] [rbp+D40h]
  __m128i v119; // [rsp+DD0h] [rbp+D50h] BYREF
  __m128i v120; // [rsp+DE0h] [rbp+D60h]
  const char *v121; // [rsp+DF0h] [rbp+D70h]
  __int64 v122; // [rsp+DF8h] [rbp+D78h]
  __int64 v123; // [rsp+E00h] [rbp+D80h]
  __m256i v124; // [rsp+E08h] [rbp+D88h]
  __int128 v125; // [rsp+E28h] [rbp+DA8h]
  __int128 v126; // [rsp+E38h] [rbp+DB8h]
  __int128 v127; // [rsp+E48h] [rbp+DC8h]
  const char *v128; // [rsp+E58h] [rbp+DD8h] BYREF
  __int64 v129; // [rsp+E60h] [rbp+DE0h]
  __m128i *v130; // [rsp+E68h] [rbp+DE8h]
  _BYTE *v131; // [rsp+E70h] [rbp+DF0h]
  __int64 v132; // [rsp+E78h] [rbp+DF8h]
  __m128i *v133; // [rsp+E80h] [rbp+E00h]
  __int8 *v134; // [rsp+E88h] [rbp+E08h]
  unsigned __int128 v135; // [rsp+E90h] [rbp+E10h] BYREF
  __m256i v136; // [rsp+EA0h] [rbp+E20h] BYREF
  __int16 v137; // [rsp+EC0h] [rbp+E40h]
  __int32 v138; // [rsp+EC2h] [rbp+E42h]
  __int16 v139; // [rsp+EC6h] [rbp+E46h]
  __m256i v140; // [rsp+EC8h] [rbp+E48h]
  __int128 v141; // [rsp+EE8h] [rbp+E68h]
  __int128 v142; // [rsp+EF8h] [rbp+E78h]
  __int128 v143; // [rsp+F08h] [rbp+E88h]
  __int64 v144; // [rsp+F18h] [rbp+E98h]
  _QWORD *v145; // [rsp+F20h] [rbp+EA0h]
  __m128i *v146; // [rsp+F28h] [rbp+EA8h]
  _BYTE *v147; // [rsp+F30h] [rbp+EB0h]
  char v148; // [rsp+F3Fh] [rbp+EBFh] BYREF
  __int32 v149; // [rsp+F40h] [rbp+EC0h]
  __int16 v150; // [rsp+F44h] [rbp+EC4h]
  __int32 v151; // [rsp+F48h] [rbp+EC8h]
  __int16 v152; // [rsp+F4Ch] [rbp+ECCh]
  __int32 v153; // [rsp+F50h] [rbp+ED0h]
  __int16 v154; // [rsp+F54h] [rbp+ED4h]
  __int64 v155; // [rsp+F58h] [rbp+ED8h]
  __m128i *v156; // [rsp+F60h] [rbp+EE0h]
  _BYTE *v157; // [rsp+F68h] [rbp+EE8h]
  __int64 v158; // [rsp+F70h] [rbp+EF0h]
  __m128i *v159; // [rsp+F78h] [rbp+EF8h]
  _BYTE *v160; // [rsp+F80h] [rbp+F00h]
  _BYTE *v161; // [rsp+F88h] [rbp+F08h]
  __m128i *v162; // [rsp+F90h] [rbp+F10h]
  __m128i *v163; // [rsp+F98h] [rbp+F18h]
  __int64 v164; // [rsp+FA0h] [rbp+F20h]

  v164 = -2;
  v132 = a3;
  v5 = (__int64)a2;
  v6 = (unsigned __int64)a1;
  v7 = a2->m128i_i64[0];
  v8 = a2->m128i_i64[0] == 0;
  v162 = a2;
  v145 = a1;
  if ( v8 )
  {
    v9 = a2->m128i_u64[1];
    a2->m128i_i64[0] = 2;
    if ( v9 >= 3 )
      sub_141939280("internal error: entered unreachable code", 40, &off_141A49BE0);
    v161 = (_BYTE *)v9;
    v163 = a2 + 1;
    sub_1418F44E0(v96, a2 + 1, 0x408u);
    sub_140CE5030(v5);
    v5 = (__int64)v162;
    v162->m128i_i64[0] = 1;
    *(_QWORD *)(v5 + 8) = v161;
    sub_1418F44E0(v163, v96, 0x408u);
    v10 = (__int8 *)(v5 + 2312);
    *(_BYTE *)(v5 + 2312) = 0;
  }
  else
  {
    if ( (_DWORD)v7 != 1 )
      sub_141939280(aUnfoldMustNotB, 63, &off_141A4E710);
    v10 = &a2[144].m128i_i8[8];
    switch ( *(_BYTE *)(v5 + 2312) )
    {
      case 0:
        break;
      case 1:
        sub_1419393E0(&off_141A473A8);
      case 2:
        sub_141939400(&off_141A473A8);
      case 3:
        v161 = (_BYTE *)(v5 + 2114);
        v13 = *(unsigned __int8 *)(v5 + 2114);
        v14 = (__m128i *)(v5 + 2088);
        v134 = (__int8 *)(v5 + 2312);
        switch ( v13 )
        {
          case 0LL:
            v163 = (__m128i *)(v5 + 2088);
            v12 = *(_QWORD *)(v5 + 2104);
            goto LABEL_10;
          case 1LL:
            v144 = v5 + 2088;
            sub_1419393E0(&off_141A47990);
          case 2LL:
            v144 = v5 + 2088;
            sub_141939400(&off_141A47990);
          case 3LL:
            v15 = *(__int64 **)(v5 + 2120);
            goto LABEL_26;
          case 4LL:
            v163 = (__m128i *)(v5 + 2088);
            goto LABEL_62;
        }
    }
  }
  *(_BYTE *)(v5 + 2313) = 0;
  v11 = *(_QWORD *)(v5 + 8);
  if ( v11 == 2 )
  {
    *v10 = 1;
    goto LABEL_8;
  }
  v134 = v10;
  *(_BYTE *)(v5 + 2313) = 1;
  v12 = v5 + 1048;
  *(_QWORD *)(v5 + 1048) = v11;
  sub_1418F44E0((__m128i *)(v5 + 1056), (const __m128i *)(v5 + 16), 0x408u);
  *(_QWORD *)(v5 + 2104) = v5 + 1048;
  v161 = (_BYTE *)(v5 + 2114);
  *(_BYTE *)(v5 + 2114) = 0;
  v163 = (__m128i *)(v5 + 2088);
LABEL_10:
  *(_WORD *)(v5 + 2112) = 0;
  *(_QWORD *)(v5 + 2088) = v12;
  *(_QWORD *)(v5 + 2096) = 0x4000000000LL;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v5 + 2096);
    if ( v16 >= *(_DWORD *)(v5 + 2100) )
    {
      v154 = v150;
      v153 = v149;
      *v161 = 1;
      v61 = -1;
      v62 = 1;
      v63 = nullptr;
      v6 = 0;
      goto LABEL_107;
    }
    *(_DWORD *)(v5 + 2096) = v16 + 1;
    v17 = *(_QWORD **)(v5 + 2088);
    v18 = v17[126];
    if ( v18 )
    {
      v19 = v17[125];
      v20 = (__int64)(v17 + 124);
      v21 = v19 + v18;
      v22 = v163;
LABEL_33:
      v34 = 0;
      while ( *(_BYTE *)(v19 + v34) != 10 )
      {
        v35 = v19 + v34++ + 1;
        if ( v35 == v21 )
        {
          v33 = v18;
          goto LABEL_38;
        }
      }
      v33 = v34 + 1;
      goto LABEL_38;
    }
    v14 = v163;
    if ( !v17[128] )
    {
      v160 = v161;
      v159 = v163;
      sub_141939020(&off_141A479A8);
    }
    v15 = v17 + 128;
    *(_QWORD *)(v5 + 2120) = v15;
LABEL_26:
    v23 = *v15;
    v24 = *(void (__fastcall **)(unsigned __int128 *, __int64, __int64))(v15[1] + 24);
    v160 = v161;
    v163 = v14;
    v159 = v14;
    v24(&v135, v23, v132);
    if ( (_QWORD)v135 == 2 )
    {
      v78 = 3;
      goto LABEL_91;
    }
    v26 = *((_QWORD *)&v135 + 1);
    v4 = (__m128i *)v136.m256i_i64[0];
    v97 = *(_OWORD *)&v136.m256i_u64[1];
    if ( (_DWORD)v135 != 1 )
      break;
    v27 = v163;
    if ( !*((_QWORD *)&v135 + 1) )
    {
      v158 = v136.m256i_i64[0];
      v112 = v136.m256i_i64[0];
      v80 = sub_14122E5A0(&v112);
      v81 = (const char *)&unk_141A4D452;
      if ( v80 )
        v81 = (const char *)&unk_141A4D46B;
      v128 = v81;
      v129 = 9LL * (v80 ^ 1u) + 16;
      *(_QWORD *)&v115 = &v128;
      *((_QWORD *)&v115 + 1) = sub_140186EE0;
      sub_1416ABFD0(&v135, &unk_141A4D47B, &v115);
      v63 = v128;
      v3 = v129;
      v6 = *((_QWORD *)&v135 + 1);
      v61 = v135;
      v62 = v136.m256i_i64[0];
      v160 = v161;
      v159 = v163;
      sub_140D19140(v158);
      LOWORD(v4) = 2 * v80 + 502;
      goto LABEL_105;
    }
    v135 = __PAIR128__(v136.m256i_u64[0], *((unsigned __int64 *)&v135 + 1));
    *(_OWORD *)v136.m256i_i8 = v97;
    v28 = v97;
    v29 = *(_QWORD *)(v163->m128i_i64[0] + 952);
    v30 = 0;
    if ( v29 <= 0x20000000 )
      v30 = 0x20000000 - v29;
    if ( (unsigned __int64)v97 > v30 )
    {
      nullsub_1(v29);
      v82 = (void *)sub_140001650(46, 1);
      if ( !v82 )
        sub_141938D2B(1, 46);
      v6 = (unsigned __int64)v82;
      qmemcpy(v82, "Anthropic continuation exceeds response budget", 46);
      v83 = *(void (__fastcall **)(unsigned __int64 *, __m128i *, __int64))(v26 + 32);
      v160 = v161;
      v159 = v27;
      v83(&v136.m256i_u64[1], v4, v28);
      LOWORD(v4) = 502;
      v3 = 16;
      v63 = aStreamTruncate;
      v61 = 46;
      v62 = 46;
      goto LABEL_105;
    }
    *(_QWORD *)(v163->m128i_i64[0] + 952) = v97 + v29;
    v107 = *(_OWORD *)v136.m256i_i8;
    v106 = (__m128i)v135;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v27->m128i_i64[0] + 992) + 32LL))(
      v27->m128i_i64[0] + 1016,
      *(_QWORD *)(v27->m128i_i64[0] + 1000),
      *(_QWORD *)(v27->m128i_i64[0] + 1008));
    v22 = v163;
    v31 = v163->m128i_i64[0];
    v32 = v106;
    *(_OWORD *)(v31 + 1008) = v107;
    *(__m128i *)(v31 + 992) = v32;
    v19 = *(_QWORD *)(v22->m128i_i64[0] + 1000);
    v18 = *(_QWORD *)(v22->m128i_i64[0] + 1008);
    v20 = v22->m128i_i64[0] + 992;
    v21 = v19 + v18;
    v33 = 0;
    v5 = (__int64)v162;
    if ( v18 )
      goto LABEL_33;
LABEL_38:
    v160 = v161;
    v163 = v22;
    v159 = v22;
    sub_1416534E0(v5 + 2248, v20, v33);
    v36 = *(const __m128i **)(v5 + 2256);
    v37 = *(_QWORD *)(v5 + 2264);
    v38 = nullptr;
    if ( v37 )
    {
      v6 = v37 - 1;
      v38 = nullptr;
      if ( v36->m128i_i8[v37 - 1] == 10 )
        v38 = *(const __m128i **)(v5 + 2256);
    }
    if ( !v38 )
      v6 = *(_QWORD *)(v5 + 2264);
    v4 = v163;
    v39 = (_QWORD *)v163->m128i_i64[0];
    v40 = *(_QWORD *)(v163->m128i_i64[0] + 984);
    v41 = 0;
    if ( v40 <= 0x4000000 )
      v41 = 0x4000000 - v40;
    if ( v6 > v41 )
    {
      nullsub_1(v41);
      v61 = 39;
      v77 = (void *)sub_140001650(39, 1);
      if ( !v77 )
      {
        v147 = v161;
        v146 = v163;
        sub_141938D2B(1, 39);
      }
      v6 = (unsigned __int64)v77;
      qmemcpy(v77, "Anthropic SSE line exceeds buffer limit", 39);
      LOWORD(v4) = 502;
      v3 = 16;
      v63 = aStreamTruncate;
      v62 = 39;
      goto LABEL_104;
    }
    if ( v38 )
      v36 = v38;
    if ( v6 > v39[121] - v40 )
    {
      v93 = v36;
      v147 = v161;
      v146 = v163;
      sub_14190D590((_DWORD)v39 + 968, v40, v6, 1, 1);
      v40 = v39[123];
      v36 = v93;
      v5 = (__int64)v162;
    }
    else if ( !v6 )
    {
      goto LABEL_51;
    }
    sub_1418F44E0((__m128i *)(v40 + v39[122]), v36, v6);
LABEL_51:
    v39[123] = v6 + v40;
    v42 = *(_QWORD *)(v5 + 2256);
    v43 = *(_QWORD *)(v5 + 2264);
    if ( v43 && *(_BYTE *)(v42 + v43 - 1) == 10 )
    {
      v44 = *(_QWORD *)(v4->m128i_i64[0] + 976);
      v45 = *(_QWORD *)(v4->m128i_i64[0] + 984);
      v147 = v161;
      v146 = v4;
      sub_1416B3AE0(&v135, v44, v45);
      if ( (_DWORD)v135 == 1 )
      {
        nullsub_1(v46);
        v61 = 27;
        v84 = (void *)sub_140001650(27, 1);
        v5 = (__int64)v162;
        if ( !v84 )
        {
          v147 = v161;
          v146 = v163;
          sub_141938D2B(1, 27);
        }
        v6 = (unsigned __int64)v84;
        qmemcpy(v84, "Invalid Anthropic SSE UTF-8", 27);
        LOWORD(v4) = 502;
        v3 = 16;
        v63 = aStreamTruncate;
        v62 = 27;
        goto LABEL_104;
      }
      v47 = v162[130].m128i_i64[1];
      v131 = v161;
      v130 = v4;
      sub_140E5A130((__m128i *)((char *)v162 + 2120), v47, *((__int64 *)&v135 + 1), v136.m256i_u64[0]);
      v5 = (__int64)v162;
      v162[132].m128i_i8[0] = 1;
      *(_QWORD *)(*(_QWORD *)(v5 + 2088) + 984LL) = 0;
      v48 = *(_QWORD *)(v5 + 2088);
      if ( *(_BYTE *)(v48 + 782) == 1 )
      {
        *(_BYTE *)(v5 + 2112) = 0;
        v63 = *(const char **)(v5 + 2136);
LABEL_102:
        v6 = *(_QWORD *)(v5 + 2120);
        v62 = *(_QWORD *)(v5 + 2128);
        v61 = -1;
LABEL_103:
        *(_BYTE *)(v5 + 2112) = 0;
LABEL_104:
        v85 = *(_QWORD *)(v5 + 2256);
        v86 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v5 + 2248) + 32LL);
        v87 = *(_QWORD *)(v5 + 2264);
        v160 = v161;
        v159 = v163;
        v86(v5 + 2272, v85, v87);
        goto LABEL_105;
      }
      v49 = *(_OWORD *)(v48 + 552);
      *(_OWORD *)(v5 + 2296) = *(_OWORD *)(v48 + 568);
      *(_OWORD *)(v5 + 2280) = v49;
      *(_BYTE *)(v48 + 552) = -1;
      if ( *(_BYTE *)(v5 + 2280) != 0xFF )
      {
        *(_BYTE *)(v5 + 2113) = 1;
        v50 = *(_OWORD *)(v5 + 2280);
        v116 = *(_OWORD *)(v5 + 2296);
        v115 = v50;
        v51 = *(_QWORD *)(v5 + 2088);
        v158 = *(_QWORD *)(v51 + 1024);
        if ( v158 )
        {
          v155 = *(_QWORD *)(v51 + 1032);
          if ( *(_QWORD *)v155 )
            (*(void (__fastcall **)(__int64))v155)(v158);
          v52 = *(_QWORD *)(v155 + 8);
          v4 = v163;
          if ( v52 )
            sub_140001660(v158, v52, *(_QWORD *)(v155 + 16));
        }
        *(_QWORD *)(v4->m128i_i64[0] + 1024) = 0;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v4->m128i_i64[0] + 992) + 32LL))(
          v4->m128i_i64[0] + 1016,
          *(_QWORD *)(v4->m128i_i64[0] + 1000),
          *(_QWORD *)(v4->m128i_i64[0] + 1008));
        v5 = (__int64)v162;
        v53 = v162[130].m128i_i64[1];
        *(_QWORD *)(v53 + 992) = off_141A422B8;
        *(_QWORD *)(v53 + 1000) = 1;
        *(_OWORD *)(v53 + 1008) = 0;
        v54 = *(_QWORD *)(v5 + 2088) + 784LL;
        *(_BYTE *)(v5 + 2113) = 0;
        v55 = v115;
        v56 = v116;
        v57 = (__m128i)v135;
        v58 = *(_OWORD *)v136.m256i_i8;
        v59 = *(_OWORD *)&v140.m256i_u64[1];
        v106 = (__m128i)v135;
        v107 = *(_OWORD *)v136.m256i_i8;
        v108 = v115;
        v109 = v116;
        v110 = *(_OWORD *)&v140.m256i_u64[1];
        v111 = v140.m256i_i64[3];
        *(_QWORD *)(v5 + 2224) = v140.m256i_i64[3];
        *(_OWORD *)(v5 + 2208) = v59;
        *(_OWORD *)(v5 + 2192) = v56;
        *(_OWORD *)(v5 + 2176) = v55;
        *(_OWORD *)(v5 + 2160) = v58;
        *(__m128i *)(v5 + 2144) = v57;
        *(_QWORD *)(v5 + 2232) = v54;
        *(_BYTE *)(v5 + 2241) = 0;
LABEL_62:
        v158 = v5 + 2144;
        sub_140D36390((__m128i *)&v135, v5 + 2144, v132);
        v60 = v135;
        if ( (_QWORD)v135 == -2 )
        {
          v78 = 4;
LABEL_91:
          *v161 = v78;
          goto LABEL_106;
        }
        v61 = *((_QWORD *)&v135 + 1);
        v62 = v136.m256i_i64[1];
        v6 = v136.m256i_i64[0];
        v3 = v136.m256i_i64[3];
        v63 = (const char *)v136.m256i_i64[2];
        LOWORD(v4) = v137;
        v151 = v138;
        v152 = v139;
        v100 = v140;
        v101 = v141;
        v102 = v142;
        v103 = v143;
        if ( v162[140].m128i_i8[1] == 3 )
        {
          sub_140D1A820(v162[138].m128i_i64[0], v162[138].m128i_i64[1]);
          v162[140].m128i_i8[0] = 0;
          if ( (_DWORD)v60 == -1 )
            goto LABEL_82;
        }
        else
        {
          if ( !v162[140].m128i_i8[1] )
          {
            v157 = v161;
            v156 = v163;
            sub_140409B40(&v162[136]);
          }
          if ( (_DWORD)v60 == -1 )
          {
LABEL_82:
            v150 = v152;
            v149 = v151;
            v5 = (__int64)v162;
            v162[132].m128i_i8[1] = 0;
            if ( *(_BYTE *)(v5 + 2112) )
            {
              v76 = *(_QWORD *)(v5 + 2120);
              if ( v76 )
                sub_140001660(*(_QWORD *)(v5 + 2128), v76, 1);
            }
            goto LABEL_103;
          }
        }
        v127 = v103;
        v126 = v102;
        v125 = v101;
        v124 = v100;
        v119.m128i_i64[0] = v60;
        v119.m128i_i64[1] = v61;
        v120.m128i_i64[0] = v6;
        v120.m128i_i64[1] = v62;
        v121 = v63;
        v122 = v3;
        LOWORD(v123) = (_WORD)v4;
        *(_DWORD *)((char *)&v123 + 2) = v151;
        HIWORD(v123) = v152;
        v157 = v161;
        v156 = v163;
        v64.m128i_i64[0] = sub_1410D5D80(&v119);
        v4 = v163;
        v65 = *(volatile signed __int64 **)(v163->m128i_i64[0] + 960);
        if ( v65 && _InterlockedIncrement64(v65) <= 0 )
          BUG();
        v135 = (unsigned __int128)v64;
        v136.m256i_i64[0] = (__int64)v65;
        nullsub_1(v65);
        v66 = (__m128i *)sub_140001650(24, 8);
        v5 = (__int64)v162;
        if ( !v66 )
          sub_141938D11(8, 24);
        v67 = v66;
        v66[1].m128i_i64[0] = v136.m256i_i64[0];
        *v66 = (__m128i)v135;
        v68 = v4->m128i_i64[0];
        v158 = *(_QWORD *)(v4->m128i_i64[0] + 1024);
        if ( v158 )
        {
          v133 = v67;
          v155 = *(_QWORD *)(v68 + 1032);
          if ( *(_QWORD *)v155 )
            (*(void (__fastcall **)(__int64))v155)(v158);
          v69 = *(_QWORD *)(v155 + 8);
          v5 = (__int64)v162;
          v4 = v163;
          v67 = v133;
          if ( v69 )
            sub_140001660(v158, v69, *(_QWORD *)(v155 + 16));
        }
        v70 = *(_QWORD *)(v5 + 2088);
        *(_QWORD *)(v70 + 1024) = v67;
        *(_QWORD *)(v70 + 1032) = &off_141A4A200;
        *(_BYTE *)(v5 + 2113) = 0;
      }
      v63 = *(const char **)(v5 + 2136);
      v163 = v4;
      if ( v63 )
      {
        *(_BYTE *)(v5 + 2112) = 0;
        goto LABEL_102;
      }
      v71 = *(_QWORD *)(v5 + 2120);
      if ( v71 )
        sub_140001660(*(_QWORD *)(v5 + 2128), v71, 1);
      *(_BYTE *)(v5 + 2112) = 0;
      v72 = *(_QWORD *)(v5 + 2256);
      v73 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v5 + 2248) + 32LL);
      v74 = *(_QWORD *)(v5 + 2264);
      v160 = v161;
      v159 = v4;
      v73(v5 + 2272, v72, v74);
    }
    else
    {
      v75 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v5 + 2248) + 32LL);
      v160 = v161;
      v159 = v4;
      v75(v5 + 2272, v42);
    }
  }
  nullsub_1(v25);
  v79 = (void *)sub_140001650(42, 1);
  if ( !v79 )
  {
    v160 = v161;
    v159 = v163;
    sub_141938D2B(1, 42);
  }
  v6 = (unsigned __int64)v79;
  qmemcpy(v79, "Anthropic stream ended before message_stop", 42);
  LOWORD(v4) = 502;
  v3 = 16;
  v63 = aStreamTruncate;
  v61 = 42;
  v62 = 42;
LABEL_105:
  v154 = v150;
  v153 = v149;
  *v161 = 1;
  if ( v61 == -2 )
  {
LABEL_106:
    *v134 = 3;
    v6 = (unsigned __int64)v145;
    *v145 = 2;
    return v6;
  }
LABEL_107:
  v114.m256i_i16[15] = v154;
  *(__int32 *)((char *)&v114.m256i_i32[6] + 2) = v153;
  v113.m128i_i64[0] = v61;
  v113.m128i_i64[1] = v6;
  v114.m256i_i64[0] = v62;
  v114.m256i_i64[1] = (__int64)v63;
  v114.m256i_i64[2] = v3;
  v114.m256i_i16[12] = (__int16)v4;
  sub_140D11A10((__int64)v163);
  if ( v61 == -1 )
  {
    if ( v162[114].m128i_i8[6] )
    {
      sub_141654790(&v119, &v113.m128i_u64[1]);
      v118 = v120;
      v117 = v119;
      v88 = 2;
      v6 = (unsigned __int64)v145;
      if ( !v162[144].m128i_i8[9] )
        goto LABEL_119;
    }
    else
    {
      sub_141654790(&v119, &v113.m128i_u64[1]);
      v118 = v120;
      v117 = v119;
      v89 = v162;
      v162[144].m128i_i8[9] = 0;
      v88 = v89[65].m128i_i64[1];
      sub_1418F44E0(v96, v89 + 66, 0x408u);
      v6 = (unsigned __int64)v145;
      if ( !v89[144].m128i_i8[9] )
        goto LABEL_119;
    }
LABEL_118:
    sub_140D1CF80(&v162[65].m128i_i64[1]);
    goto LABEL_119;
  }
  v136 = v114;
  v135 = (unsigned __int128)v113;
  v6 = (unsigned __int64)v145;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    v100.m256i_i16[0] = v136.m256i_i16[12];
    v106.m128i_i64[0] = (__int64)&v136.m256i_i64[1];
    v106.m128i_i64[1] = (__int64)sub_140186EE0;
    *(_QWORD *)&v107 = &v100;
    *((_QWORD *)&v107 + 1) = sub_1416BB1E0;
    v123 = 2;
    v124.m256i_i64[0] = (__int64)"codexmate_lib::core::relay::anthropic_continuationInvalid Anthropic SSE UTF-8";
    v124.m256i_i64[1] = 50;
    v124.m256i_i64[3] = (__int64)&unk_141A473C0;
    *(_QWORD *)&v125 = &v106;
    v119.m128i_i64[0] = 0;
    v119.m128i_i64[1] = (__int64)"codexmate_lib::core::relay::anthropic_continuationInvalid Anthropic SSE UTF-8";
    v120 = (__m128i)0x32uLL;
    v121 = aSrcCoreRelayAn_2;
    v122 = 40;
    v124.m256i_i64[2] = 0xD400000001LL;
    sub_1414D53A0(&v148, &v119);
  }
  sub_140E4D8E0(
    (unsigned int)&v106,
    (_DWORD)v162 + 1048,
    v136.m256i_i32[2],
    v136.m256i_i32[4],
    *((__int64 *)&v135 + 1),
    v136.m256i_i64[0],
    1);
  sub_141654790(&v119, &v106);
  v117 = v119;
  v118 = v120;
  if ( (_QWORD)v135 )
    sub_140001660(*((_QWORD *)&v135 + 1), v135, 1);
  v88 = 2;
  if ( v162[144].m128i_i8[9] )
    goto LABEL_118;
LABEL_119:
  v5 = (__int64)v162;
  v162[144].m128i_i8[9] = 0;
  v99 = v118;
  v98 = v117;
  sub_1418F44E0(v94, v96, 0x408u);
  *(_BYTE *)(v5 + 2312) = 1;
  if ( v88 == -2 )
  {
    *(_QWORD *)v6 = 2;
    return v6;
  }
  v105 = v99;
  v104 = v98;
  sub_1418F44E0(v95, v94, 0x408u);
  if ( v88 != -1 )
  {
    v163 = (__m128i *)v88;
    v96[1] = v105;
    v96[0] = v104;
    sub_140CE5030(v5);
    v90 = v162;
    v162->m128i_i64[0] = 0;
    v90->m128i_i64[1] = (__int64)v163;
    sub_1418F44E0(v90 + 1, v95, 0x408u);
    v91 = v105;
    *(__m128i *)(v6 + 8) = v104;
    *(__m128i *)(v6 + 24) = v91;
    *(_QWORD *)v6 = 1;
    return v6;
  }
LABEL_8:
  sub_140CE5030(v5);
  v162->m128i_i64[0] = 2;
  *(_QWORD *)v6 = 0;
  return v6;
}
