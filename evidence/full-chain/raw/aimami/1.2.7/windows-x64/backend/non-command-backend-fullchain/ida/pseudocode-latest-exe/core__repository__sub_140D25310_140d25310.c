// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d25310 | successor of pre-update 0x1401f0d80 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.674, "str_ov": 0.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140D25310(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  void *v5; // r14
  __m128i v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int128 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // r12
  __int128 v26; // kr00_16
  __int64 v27; // rbx
  unsigned int v28; // eax
  int v29; // r12d
  unsigned int v30; // edx
  __int64 v31; // rax
  __m128i v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // rbx
  __int64 v37; // r14
  const __m128i *v38; // r15
  __m128i si128; // xmm0
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r14
  __int64 v46; // rbx
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int32 v54; // edx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  char *v58; // rax
  __int128 *v59; // rdx
  int v60; // r15d
  __int128 *v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // r13d
  __int64 v65; // r14
  __int64 v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rbx
  bool v69; // r14
  __int64 v70; // rax
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  int v73; // r12d
  _WORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  _WORD *v77; // rbx
  _DWORD *v78; // rax
  __int64 v79; // rdi
  _QWORD *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v84; // rdi
  __int64 v85; // rbx
  __int64 v86; // r14
  const __m128i *v87; // r15
  __m128i v89; // xmm0
  __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rdi
  __int64 v95; // r14
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 i; // r15
  int v100; // [rsp+40h] [rbp-40h] BYREF
  __int128 v101; // [rsp+48h] [rbp-38h]
  __int128 v102; // [rsp+58h] [rbp-28h]
  __int64 v103; // [rsp+68h] [rbp-18h]
  __int128 v104; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v105; // [rsp+B0h] [rbp+30h]
  _QWORD v106[2]; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v107; // [rsp+C8h] [rbp+48h] BYREF
  __m256i v108; // [rsp+D8h] [rbp+58h]
  _WORD *v109; // [rsp+F8h] [rbp+78h]
  __int128 v110; // [rsp+100h] [rbp+80h] BYREF
  __int128 v111; // [rsp+110h] [rbp+90h]
  __int128 v112; // [rsp+120h] [rbp+A0h]
  __m128i v113; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v114; // [rsp+140h] [rbp+C0h]
  __int128 v115; // [rsp+150h] [rbp+D0h]
  __int128 v116; // [rsp+160h] [rbp+E0h]
  __int128 v117; // [rsp+170h] [rbp+F0h]
  __int64 v118; // [rsp+180h] [rbp+100h]
  __int128 v119; // [rsp+190h] [rbp+110h] BYREF
  __int128 v120; // [rsp+1A0h] [rbp+120h]
  __int64 v121; // [rsp+1B0h] [rbp+130h]
  __int128 v122; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v123; // [rsp+1D0h] [rbp+150h]
  __int128 v124; // [rsp+1E0h] [rbp+160h]
  __int128 v125; // [rsp+1F0h] [rbp+170h]
  __int128 v126; // [rsp+200h] [rbp+180h]
  __int64 v127; // [rsp+210h] [rbp+190h]
  __m128i v128; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v129; // [rsp+230h] [rbp+1B0h]
  __int128 v130; // [rsp+240h] [rbp+1C0h]
  __int128 v131; // [rsp+250h] [rbp+1D0h]
  __int128 v132; // [rsp+260h] [rbp+1E0h]
  __int128 v133; // [rsp+270h] [rbp+1F0h]
  __int64 v134; // [rsp+288h] [rbp+208h]
  _BYTE v135[96]; // [rsp+290h] [rbp+210h] BYREF
  HANDLE hObject; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v137; // [rsp+2F8h] [rbp+278h]
  char *v138; // [rsp+300h] [rbp+280h]
  char v139; // [rsp+30Bh] [rbp+28Bh]
  char v140; // [rsp+30Ch] [rbp+28Ch]
  char v141; // [rsp+30Dh] [rbp+28Dh]
  char v142; // [rsp+30Eh] [rbp+28Eh]
  char v143; // [rsp+30Fh] [rbp+28Fh]
  __int64 v144; // [rsp+310h] [rbp+290h]

  v144 = -2;
  sub_1416B18A0((unsigned int)&v122, a2[33], a2[34], (unsigned int)aAccountDomainL, 20);
  v138 = *((char **)&v122 + 1);
  sub_140C97180((unsigned int)v135, DWORD2(v122), v123, (unsigned int)&aAccountDomainL[20], 13);
  v4 = *(_QWORD *)v135;
  if ( *(_QWORD *)v135 != -1 )
  {
    v132 = *(_OWORD *)&v135[80];
    v131 = *(_OWORD *)&v135[64];
    v130 = *(_OWORD *)&v135[48];
    v129 = *(_OWORD *)&v135[32];
    v128 = *(__m128i *)&v135[16];
  }
  v5 = *(void **)&v135[8];
  if ( (_QWORD)v122 )
    sub_140001660(v138, v122, 1);
  if ( (_DWORD)v4 == -1 )
  {
    hObject = v5;
    sub_140D12540(v135, a2[37], a2[38]);
    v9 = *(_QWORD *)v135;
    v128 = *(__m128i *)&v135[8];
    v129 = *(_OWORD *)&v135[24];
    v130 = *(_OWORD *)&v135[40];
    v131 = *(_OWORD *)&v135[56];
    v132 = *(_OWORD *)&v135[72];
    *(_QWORD *)&v133 = *(_QWORD *)&v135[88];
    if ( *(_QWORD *)v135 != -1 )
    {
      *(_QWORD *)(a1 + 96) = v133;
      *(_OWORD *)(a1 + 80) = v132;
      v10 = _mm_load_si128(&v128);
      v11 = v129;
      v12 = v130;
      *(_OWORD *)(a1 + 64) = v131;
      *(_OWORD *)(a1 + 48) = v12;
      *(_OWORD *)(a1 + 32) = v11;
      *(__m128i *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = 1;
LABEL_9:
      v13 = sub_14143F370(&hObject);
      if ( v13 && (unsigned int)(v13 & 3) - 2 >= 2 && (v13 & 3) != 0 )
      {
        *(_QWORD *)&v135[8] = v13 - 1;
        v135[0] = 3;
        sub_1416EBAD0(&v135[8]);
      }
LABEL_106:
      CloseHandle(hObject);
      return a1;
    }
    v118 = v133;
    v117 = v132;
    v116 = v131;
    v115 = v130;
    v114 = v129;
    v113 = v128;
    v14 = v129;
    sub_14019C9E0(&v113, a2);
    v15 = v113.m128i_i64[1];
    v16 = v114;
    v18 = sub_1416AE140(v17);
    v21 = v18;
    if ( *(_BYTE *)(v18 + 16) == 1 )
    {
      v22 = *(_OWORD *)v18;
    }
    else
    {
      *(_QWORD *)&v22 = sub_1416C5230();
      *(_OWORD *)v21 = v22;
      *(_BYTE *)(v21 + 16) = 1;
    }
    *(_QWORD *)v21 = v22 + 1;
    *(_OWORD *)&v135[16] = xmmword_141A90850;
    *(_OWORD *)v135 = *(_OWORD *)&off_141A90840;
    *(_OWORD *)&v135[32] = v22;
    if ( v16 )
    {
      LOBYTE(v20) = 1;
      sub_141962910(v135, v16, &v135[32], v20);
      for ( i = 0; i != v16; ++i )
      {
        sub_1416DB410(&v128, 424 * i + v15 + 192);
        sub_140871180(v135, &v128);
      }
    }
    v134 = v14;
    v112 = *(_OWORD *)&v135[32];
    v111 = *(_OWORD *)&v135[16];
    v110 = *(_OWORD *)v135;
    v23 = *((_QWORD *)&v114 + 1);
    v138 = *((char **)&v114 + 1);
    if ( (_QWORD)v114 )
    {
      if ( v138 != (char *)-1LL )
      {
        v24 = v113.m128i_i64[1];
        v25 = 424 * v114;
        v26 = v115;
        v27 = 0;
        while ( *(_QWORD *)(v24 + v27 + 208) != *((_QWORD *)&v26 + 1)
             || (unsigned int)sub_141923B40(*(_QWORD *)(v24 + v27 + 200), v26, *((_QWORD *)&v26 + 1)) )
        {
          v27 += 424;
          if ( v25 == v27 )
            goto LABEL_23;
        }
LABEL_27:
        v28 = sub_1416B2E50(v23, *((_QWORD *)&v22 + 1), v19);
        v29 = v134;
        v128.m128i_i64[0] = __PAIR64__(v30, v28);
        sub_1416B2E00(v135, &v128, 3577643008LL, 27111902);
        if ( v135[0] )
          v31 = 0;
        else
          v31 = *(_QWORD *)&v135[8];
        *((_QWORD *)&v117 + 1) = v31;
        HIDWORD(_RAX) = (unsigned __int64)sub_140D02DF0(v135, a2, &v113, 0) >> 32;
        if ( *(_DWORD *)v135 != -1 )
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v135[80];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v135[64];
          v33 = _mm_loadu_si128((const __m128i *)v135);
          v34 = *(_OWORD *)&v135[16];
          v35 = *(_OWORD *)&v135[32];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v135[48];
          *(_OWORD *)(a1 + 40) = v35;
          *(_OWORD *)(a1 + 24) = v34;
          *(__m128i *)(a1 + 8) = v33;
          *(_QWORD *)a1 = 1;
          if ( *((_QWORD *)&v110 + 1) )
          {
            v36 = *((_QWORD *)&v111 + 1);
            if ( *((_QWORD *)&v111 + 1) )
            {
              v37 = v110;
              v38 = (const __m128i *)(v110 + 16);
              _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v110));
              do
              {
                if ( !(_WORD)_R12D )
                {
                  do
                  {
                    si128 = _mm_load_si128(v38);
                    v37 -= 384;
                    ++v38;
                    _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
                  }
                  while ( !_R12D );
                }
                __asm { tzcnt   eax, r12d }
                v41 = -3 * _RAX;
                v42 = *(_QWORD *)(v37 + 8 * v41 - 24);
                if ( v42 )
                  sub_140001660(*(_QWORD *)(v37 + 8 * v41 - 16), v42, 1);
                --v36;
                _RAX = _R12D & (unsigned int)(_R12D - 1);
                _R12D &= _R12D - 1;
              }
              while ( v36 );
            }
            v43 = (24LL * *((_QWORD *)&v110 + 1) + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v43 + *((_QWORD *)&v110 + 1) != -17 )
              sub_140001660(v110 - v43, v43 + *((_QWORD *)&v110 + 1) + 17, 16);
          }
          if ( *((_QWORD *)&v114 + 1) != -1 && *((_QWORD *)&v114 + 1) )
            sub_140001660(v115, *((_QWORD *)&v114 + 1), 1);
          v44 = v113.m128i_i64[1];
          v45 = v114;
          if ( (_QWORD)v114 )
          {
            v46 = v113.m128i_i64[1];
            do
            {
              sub_1401AE3E0(v46);
              v46 += 424;
              --v45;
            }
            while ( v45 );
          }
          if ( v113.m128i_i64[0] )
            sub_140001660(v44, 424 * v113.m128i_i64[0], 8);
          goto LABEL_9;
        }
        v47 = a2[69];
        v48 = a2[70];
        sub_140D36BB0(&v100, v47);
        if ( v100 == -1 )
        {
          v120 = v102;
          v121 = v103;
          v119 = v101;
          v49 = v102;
        }
        else
        {
          LODWORD(v121) = 3;
          *(_QWORD *)&v119 = 0;
          *((_QWORD *)&v119 + 1) = 8;
          v120 = 0;
          sub_140CB96B0(&v100);
          v49 = 0;
        }
        sub_14019D000(&v119, &v110);
        *(_QWORD *)&v107 = -1;
        v53 = -1;
        if ( (_QWORD)v120 != v49 )
        {
          v137 = -1;
          v143 = 1;
          v128.m128i_i32[0] = sub_1416B2E50(v51, v50, v52);
          v128.m128i_i32[1] = v54;
          v137 = -1;
          v143 = 1;
          sub_1416B2E00(v135, &v128, 3577643008LL, 27111902);
          if ( v135[0] )
            v55 = 0;
          else
            v55 = *(_QWORD *)&v135[8];
          *((_QWORD *)&v120 + 1) = v55;
          v137 = -1;
          v143 = 1;
          sub_140D36EF0(&v128, v47, v48, &v119);
          if ( v128.m128i_i32[0] == -1 )
            goto LABEL_62;
          *(_OWORD *)&v135[80] = v133;
          *(_OWORD *)&v135[64] = v132;
          *(_OWORD *)&v135[48] = v131;
          *(_OWORD *)&v135[32] = v130;
          *(_OWORD *)&v135[16] = v129;
          *(__m128i *)v135 = v128;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v106[0] = v135;
            v106[1] = sub_140D76130;
            *(_QWORD *)&v122 = aCodexmateLibCo_44;
            *((_QWORD *)&v122 + 1) = 31;
            *(_QWORD *)&v123 = aCodexmateLibCo_44;
            *((_QWORD *)&v123 + 1) = 31;
            *(_QWORD *)&v124 = &off_141A94BE8;
            sub_140AF72B0(&unk_141A94BB1, v106, 2, &v122);
          }
          v122 = *(_OWORD *)&v135[8];
          v123 = *(_OWORD *)&v135[24];
          v124 = *(_OWORD *)&v135[40];
          v125 = *(_OWORD *)&v135[56];
          v126 = *(_OWORD *)&v135[72];
          v57 = *(_QWORD *)&v135[88];
          v127 = *(_QWORD *)&v135[88];
          if ( *(_QWORD *)v135 == -1 )
          {
LABEL_62:
            v53 = -1;
          }
          else
          {
            *(_OWORD *)&v135[8] = v122;
            *(_OWORD *)&v135[24] = v123;
            *(_OWORD *)&v135[40] = v124;
            *(_OWORD *)&v135[56] = v125;
            *(_OWORD *)&v135[72] = v126;
            *(_QWORD *)&v135[88] = v127;
            nullsub_1(v57, v56);
            v58 = (char *)sub_140001650(30, 1);
            if ( !v58 )
              sub_14196B2DB(1, 30);
            v138 = v58;
            qmemcpy(v58, "QUOTA_CACHE_CLEANUP_INCOMPLETE", 30);
            v128.m128i_i64[0] = (__int64)v135;
            v128.m128i_i64[1] = (__int64)sub_140D76130;
            sub_1416DAFA0(&v104, &unk_141A95DC7, &v128);
            sub_1400261D0(&v107);
            *(_QWORD *)&v107 = 30;
            *((_QWORD *)&v107 + 1) = v138;
            v108.m256i_i64[0] = 30;
            *(_OWORD *)&v108.m256i_u64[1] = v104;
            v108.m256i_i64[3] = v105;
            v137 = 30;
            v143 = 1;
            sub_140CB96B0(v135);
            v53 = 30;
          }
        }
        v59 = (__int128 *)a2[45];
        v138 = (char *)v53;
        v137 = v53;
        v143 = 1;
        sub_140D300F0((__int64)v135, v59);
        v60 = *(_DWORD *)v135;
        *(_QWORD *)&v123 = *(_QWORD *)&v135[24];
        v122 = *(_OWORD *)&v135[8];
        v61 = (__int128 *)a2[49];
        v140 = 1;
        v139 = 1;
        sub_140D300F0((__int64)v135, v61);
        v64 = *(_DWORD *)v135;
        v65 = *(_QWORD *)&v135[24];
        *(_QWORD *)&v129 = *(_QWORD *)&v135[24];
        v128 = *(__m128i *)&v135[8];
        v66 = *(_QWORD *)&v135[16];
        v67 = v123;
        if ( *(_QWORD *)&v135[24] > (_QWORD)v122 - (_QWORD)v123 )
        {
          v142 = 1;
          v141 = 1;
          sub_141939070((unsigned int)&v122, v123, *(_DWORD *)&v135[24], 8, 48);
          v67 = v123;
          v29 = v134;
        }
        else if ( !*(_QWORD *)&v135[24] )
        {
LABEL_66:
          v68 = v65 + v67;
          *(_QWORD *)&v123 = v68;
          *(_QWORD *)&v129 = 0;
          v69 = v138 + 1 == nullptr;
          if ( (_DWORD)v138 != -1 )
          {
            if ( v68 == (_QWORD)v122 )
              sub_1419396D0(&v122);
            v70 = *((_QWORD *)&v122 + 1);
            v63 = 48 * v68;
            v71 = v107;
            v72 = *(_OWORD *)v108.m256i_i8;
            *(_OWORD *)(*((_QWORD *)&v122 + 1) + v63 + 32) = *(_OWORD *)&v108.m256i_u64[2];
            *(_OWORD *)(v70 + v63 + 16) = v72;
            *(_OWORD *)(v70 + v63) = v71;
            *(_QWORD *)&v123 = v68 + 1;
          }
          v73 = v29 - v114;
          *(_QWORD *)&v135[16] = v123;
          *(_OWORD *)v135 = v122;
          nullsub_1(v63, v62);
          v74 = (_WORD *)sub_140001650(2, 1);
          if ( !v74 )
          {
            LOBYTE(v134) = v69;
            sub_14196B2DB(1, 2);
          }
          v77 = v74;
          *v74 = 27503;
          nullsub_1(v76, v75);
          v78 = (_DWORD *)sub_140001650(7, 1);
          if ( !v78 )
          {
            v109 = v77;
            LOBYTE(v134) = v69;
            sub_14196B2DB(1, 7);
          }
          *(_DWORD *)((char *)v78 + 3) = 1936942435;
          *v78 = 1667462483;
          *(_QWORD *)(a1 + 72) = *(_QWORD *)&v135[16];
          *(__m128i *)(a1 + 56) = _mm_load_si128((const __m128i *)v135);
          *(_QWORD *)(a1 + 8) = 2;
          *(_QWORD *)(a1 + 16) = v77;
          *(_QWORD *)(a1 + 24) = 2;
          *(_QWORD *)(a1 + 32) = 7;
          *(_QWORD *)(a1 + 40) = v78;
          *(_QWORD *)(a1 + 48) = 7;
          *(_DWORD *)(a1 + 80) = 1;
          *(_DWORD *)(a1 + 84) = v60;
          *(_DWORD *)(a1 + 88) = v64;
          *(_DWORD *)(a1 + 92) = v73;
          *(_BYTE *)(a1 + 96) = 1;
          *(_QWORD *)a1 = 0;
          if ( v128.m128i_i64[0] )
            sub_140001660(v66, 48 * v128.m128i_i64[0], 8);
          v79 = v120;
          if ( (_QWORD)v120 )
          {
            v80 = (_QWORD *)(*((_QWORD *)&v119 + 1) + 152LL);
            do
            {
              v81 = *(v80 - 1);
              if ( v81 )
                sub_140001660(*v80, v81, 1);
              if ( *((_DWORD *)v80 - 14) != 2 )
              {
                v82 = *(v80 - 5);
                if ( v82 > 0 )
                  sub_140001660(*(v80 - 4), v82, 1);
              }
              v80 += 24;
              --v79;
            }
            while ( v79 );
          }
          HIDWORD(_RAX) = DWORD1(v119);
          if ( (_QWORD)v119 )
            sub_140001660(*((_QWORD *)&v119 + 1), 192 * v119, 8);
          v84 = *((_QWORD *)&v110 + 1);
          if ( *((_QWORD *)&v110 + 1) )
          {
            v85 = *((_QWORD *)&v111 + 1);
            if ( *((_QWORD *)&v111 + 1) )
            {
              v86 = v110;
              v87 = (const __m128i *)(v110 + 16);
              _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v110));
              do
              {
                if ( !(_WORD)_R12D )
                {
                  do
                  {
                    v89 = _mm_load_si128(v87);
                    v86 -= 384;
                    ++v87;
                    _R12D = _mm_movemask_epi8(v89) ^ 0xFFFF;
                  }
                  while ( !_R12D );
                }
                __asm { tzcnt   eax, r12d }
                v90 = -3 * _RAX;
                v91 = *(_QWORD *)(v86 + 8 * v90 - 24);
                if ( v91 )
                  sub_140001660(*(_QWORD *)(v86 + 8 * v90 - 16), v91, 1);
                --v85;
                _RAX = _R12D & (unsigned int)(_R12D - 1);
                _R12D &= _R12D - 1;
              }
              while ( v85 );
            }
            v92 = (24 * v84 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
            v93 = v92 + v84 + 17;
            if ( v93 )
              sub_140001660(v110 - v92, v93, 16);
          }
          if ( *((_QWORD *)&v114 + 1) != -1 && *((_QWORD *)&v114 + 1) )
            sub_140001660(v115, *((_QWORD *)&v114 + 1), 1);
          v94 = v113.m128i_i64[1];
          v95 = v114;
          if ( (_QWORD)v114 )
          {
            v96 = v113.m128i_i64[1];
            do
            {
              sub_1401AE3E0(v96);
              v96 += 424;
              --v95;
            }
            while ( v95 );
          }
          if ( v113.m128i_i64[0] )
            sub_140001660(v94, 424 * v113.m128i_i64[0], 8);
          v97 = sub_14143F370(&hObject);
          if ( v97 && (unsigned int)(v97 & 3) - 2 >= 2 && (v97 & 3) != 0 )
          {
            *(_QWORD *)&v135[8] = v97 - 1;
            v135[0] = 3;
            sub_1416EBAD0(&v135[8]);
          }
          goto LABEL_106;
        }
        sub_1419234B0(*((_QWORD *)&v122 + 1) + 48 * v67, v66, 48 * v65);
        v67 = v123;
        goto LABEL_66;
      }
    }
    else
    {
LABEL_23:
      *((_QWORD *)&v22 + 1) = v138;
      if ( v138 != (char *)-1LL && v138 )
        sub_140001660(v115, v138, 1);
    }
    *((_QWORD *)&v114 + 1) = -1;
    goto LABEL_27;
  }
  *(_OWORD *)(a1 + 88) = v132;
  v6 = _mm_load_si128(&v128);
  v7 = v129;
  v8 = v130;
  *(_OWORD *)(a1 + 72) = v131;
  *(_OWORD *)(a1 + 56) = v8;
  *(_OWORD *)(a1 + 40) = v7;
  *(__m128i *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)a1 = 1;
  return a1;
}
