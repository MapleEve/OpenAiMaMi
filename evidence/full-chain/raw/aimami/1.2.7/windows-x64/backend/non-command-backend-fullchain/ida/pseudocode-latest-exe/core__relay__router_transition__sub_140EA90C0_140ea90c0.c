// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140ea90c0 | successor of pre-update 0x140bc1a40 | session <审计会话>
// match evidence: {"body_sim": 0.257, "str_ov": 0, "anchor": 2.756, "conf": false, "verdict": "CONFIRMED_FINAL"}
char __fastcall sub_140EA90C0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v10; // r15
  __m128i v11; // xmm0
  __int64 v12; // r14
  __int64 v13; // r8
  __m128i v14; // xmm0
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int128 v17; // kr10_16
  __int128 v18; // kr20_16
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int64 v28; // rcx
  char v29; // al
  __m128i v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int64 v33; // r14
  int v34; // edx
  __int64 v35; // r14
  int v36; // r8d
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __m128i *v39; // r15
  __m128i v40; // xmm0
  __int128 v41; // kr40_16
  __int64 v42; // r14
  __m128i si128; // xmm0
  __m128i v44; // kr50_16
  int v45; // r8d
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int64 v48; // rcx
  __m128i v49; // xmm0
  __int128 v50; // xmm1
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int64 v55; // rbx
  __m128i v56; // xmm0
  __int64 (__fastcall *v57)(unsigned __int64); // rax
  __int64 v58; // rcx
  __m128i v59; // xmm0
  __int64 v60; // rcx
  __int64 v61; // rdx
  int v62; // r8d
  __int64 v63; // r14
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned int v68; // edx
  __int64 v69; // rcx
  __int128 v70; // krC0_16
  __int64 v71; // rax
  __int64 v72; // r12
  __m128i v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm2
  __int64 v76; // r15
  __int64 v77; // rdx
  __int64 v78; // rbx
  __int64 v80; // [rsp+20h] [rbp-60h]
  _BYTE v81[364]; // [rsp+50h] [rbp-30h] BYREF
  char v82; // [rsp+1BCh] [rbp+13Ch]
  unsigned __int8 v83; // [rsp+1CEh] [rbp+14Eh]
  _OWORD v84[2]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v85; // [rsp+1F0h] [rbp+170h]
  __int128 v86; // [rsp+200h] [rbp+180h]
  __int128 v87; // [rsp+210h] [rbp+190h]
  __int128 v88; // [rsp+220h] [rbp+1A0h]
  _BYTE v89[312]; // [rsp+230h] [rbp+1B0h] BYREF
  char v90; // [rsp+39Ch] [rbp+31Ch]
  unsigned __int8 v91; // [rsp+3AEh] [rbp+32Eh]
  _QWORD v92[2]; // [rsp+3B0h] [rbp+330h] BYREF
  __int64 v93; // [rsp+3C0h] [rbp+340h] BYREF
  int v94; // [rsp+3C8h] [rbp+348h]
  _QWORD v95[2]; // [rsp+3D0h] [rbp+350h] BYREF
  __m128i v96; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v97; // [rsp+3F0h] [rbp+370h]
  __m256i v98; // [rsp+400h] [rbp+380h] BYREF
  __int128 v99; // [rsp+420h] [rbp+3A0h]
  __int128 v100; // [rsp+430h] [rbp+3B0h]
  __int128 v101; // [rsp+440h] [rbp+3C0h]
  __int128 v102; // [rsp+450h] [rbp+3D0h]
  __m128i v103; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v104; // [rsp+478h] [rbp+3F8h]
  __int128 v105; // [rsp+480h] [rbp+400h] BYREF
  __int64 v106; // [rsp+490h] [rbp+410h]
  __int64 v107; // [rsp+498h] [rbp+418h]
  __m256i v108; // [rsp+4A0h] [rbp+420h] BYREF
  __m128i v109; // [rsp+4C0h] [rbp+440h]
  __int64 v110; // [rsp+4D0h] [rbp+450h]
  __m128i v111; // [rsp+4E0h] [rbp+460h] BYREF
  _BYTE v112[96]; // [rsp+4F0h] [rbp+470h] BYREF
  _BYTE v113[24]; // [rsp+550h] [rbp+4D0h] BYREF
  __m128i v114; // [rsp+570h] [rbp+4F0h] BYREF
  __int128 v115; // [rsp+580h] [rbp+500h]
  _BYTE v116[48]; // [rsp+590h] [rbp+510h] BYREF
  __int128 v117; // [rsp+5C0h] [rbp+540h]
  _BYTE *v118; // [rsp+5D8h] [rbp+558h] BYREF
  __int64 v119; // [rsp+5E0h] [rbp+560h]
  __int64 v120; // [rsp+5E8h] [rbp+568h]
  _BYTE v121[96]; // [rsp+5F0h] [rbp+570h] BYREF
  _BYTE v122[96]; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v123; // [rsp+6B0h] [rbp+630h]
  char v124; // [rsp+6BEh] [rbp+63Eh] BYREF
  unsigned __int8 v125; // [rsp+6BFh] [rbp+63Fh] BYREF
  unsigned __int64 v126; // [rsp+6C0h] [rbp+640h]
  char v127; // [rsp+6C8h] [rbp+648h]
  char v128; // [rsp+6C9h] [rbp+649h]
  char v129; // [rsp+6CAh] [rbp+64Ah]
  char v130; // [rsp+6CBh] [rbp+64Bh]
  _BYTE v131[2]; // [rsp+6CCh] [rbp+64Ch] BYREF
  char v132; // [rsp+6CEh] [rbp+64Eh]
  char v133; // [rsp+6CFh] [rbp+64Fh]
  __int64 v134; // [rsp+6D0h] [rbp+650h]

  v134 = -2;
  v95[0] = a4;
  v95[1] = a5;
  v125 = a7;
  sub_1407D5CC0(v89);
  v10 = *(_QWORD *)&v89[32];
  v11 = _mm_loadu_si128((const __m128i *)&v89[24]);
  v12 = *(_QWORD *)&v89[40];
  *(_OWORD *)v121 = *(_OWORD *)&v89[48];
  *(_OWORD *)&v121[16] = *(_OWORD *)&v89[64];
  if ( *(_QWORD *)v89 != -1 )
  {
    *(_OWORD *)&v122[80] = *(_OWORD *)&v89[80];
    *(_QWORD *)&v122[16] = *(_QWORD *)&v89[16];
    *(__m128i *)&v122[24] = v11;
    *(_QWORD *)&v122[40] = *(_QWORD *)&v89[40];
    *(__m128i *)&v122[48] = _mm_load_si128((const __m128i *)v121);
    *(_OWORD *)&v122[64] = *(_OWORD *)&v121[16];
    *(_OWORD *)v122 = *(_OWORD *)v89;
LABEL_10:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v122[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v122[64];
    v16 = *(_QWORD *)&v122[8];
    v15 = *(_QWORD *)v122;
    v17 = *(_OWORD *)&v122[16];
    v18 = *(_OWORD *)&v122[32];
    *(__m128i *)(a1 + 48) = _mm_load_si128((const __m128i *)&v122[48]);
    *(_OWORD *)(a1 + 32) = v18;
    *(_OWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = __PAIR128__(v16, v15);
    return v15;
  }
  if ( *(_QWORD *)&v89[8] != -1 )
  {
    if ( *(_QWORD *)&v89[8] )
      sub_140001660(*(_QWORD *)&v89[16], *(_QWORD *)&v89[8], 1);
    if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v12, v10, 1);
  }
  sub_1407E52E0(v89);
  if ( *(_DWORD *)v89 == -1 )
  {
    sub_1408D1F30(v122, a3);
    if ( *(_QWORD *)v122 != -1 )
      goto LABEL_10;
  }
  else
  {
    *(_OWORD *)&v122[80] = *(_OWORD *)&v89[80];
    *(_OWORD *)&v122[64] = *(_OWORD *)&v89[64];
    v14 = _mm_loadu_si128((const __m128i *)v89);
    *(_OWORD *)&v122[48] = *(_OWORD *)&v89[48];
    *(_OWORD *)&v122[32] = *(_OWORD *)&v89[32];
    *(_OWORD *)&v122[16] = *(_OWORD *)&v89[16];
    *(__m128i *)v122 = v14;
    if ( v14.m128i_i64[0] != -1 )
      goto LABEL_10;
  }
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    *(_QWORD *)v122 = v95;
    *(_QWORD *)&v122[8] = sub_140191200;
    *(_QWORD *)&v89[48] = 2;
    *(_QWORD *)&v89[56] = aCodexmateLibCo_50;
    *(_QWORD *)&v89[64] = 35;
    *(_QWORD *)&v89[80] = &unk_141AA01E0;
    *(_QWORD *)&v89[88] = v122;
    *(_QWORD *)v89 = 0;
    *(_QWORD *)&v89[8] = aCodexmateLibCo_50;
    *(_OWORD *)&v89[16] = 0x23u;
    *(_QWORD *)&v89[32] = aSrcCoreRelayMa_4;
    *(_QWORD *)&v89[40] = 25;
    *(_QWORD *)&v89[72] = 0x96500000001LL;
    sub_141503E20(v131, v89);
  }
  LOBYTE(v13) = 1;
  sub_140D52CE0(v89, a3, v13, 0);
  v20 = *(_QWORD *)&v89[8];
  v19 = *(_QWORD *)v89;
  if ( !*(_QWORD *)&v89[16] )
  {
    if ( *(_QWORD *)v89 )
      sub_140001660(*(_QWORD *)&v89[8], 32LL * *(_QWORD *)v89, 8);
    sub_140EB7850(v89, a2);
    if ( !v90 && a7 == v91 )
    {
      sub_1407D66C0(v122, a3);
      v28 = *(_QWORD *)v122;
      v29 = v122[8];
      if ( *(_QWORD *)v122 != -1 )
      {
        *(_QWORD *)(a1 + 88) = *(_QWORD *)&v122[88];
        *(_OWORD *)(a1 + 73) = *(_OWORD *)&v122[73];
        v30 = _mm_loadu_si128((const __m128i *)&v122[9]);
        v31 = *(_OWORD *)&v122[25];
        v32 = *(_OWORD *)&v122[41];
        *(_OWORD *)(a1 + 57) = *(_OWORD *)&v122[57];
        *(_OWORD *)(a1 + 41) = v32;
        *(_OWORD *)(a1 + 25) = v31;
        *(__m128i *)(a1 + 9) = v30;
        *(_QWORD *)a1 = v28;
        *(_BYTE *)(a1 + 8) = v29;
LABEL_119:
        LOBYTE(v15) = sub_140292E20(v89);
        return v15;
      }
      if ( (v122[8] & 1) == 0 )
      {
LABEL_118:
        *(_OWORD *)a1 = -1;
        goto LABEL_119;
      }
    }
    v103.m128i_i64[0] = 0;
    v103.m128i_i64[1] = 8;
    v104 = 0;
    v111.m128i_i64[0] = (__int64)aRouteronRollba_0;
    v111.m128i_i64[1] = 34;
    v133 = 1;
    v93 = sub_1416AEBD0();
    v94 = v34;
    v133 = 1;
    v35 = (__int64)v121;
    LOBYTE(v36) = 1;
    sub_1407D5A90((unsigned int)v121, a3, v36, (unsigned int)aRouteronRollba_0, 34);
    if ( *(_DWORD *)v121 != -1 )
    {
      *(_OWORD *)&v112[80] = *(_OWORD *)&v121[80];
      *(_OWORD *)&v112[64] = *(_OWORD *)&v121[64];
      v37 = _mm_loadu_si128((const __m128i *)v121);
      *(_OWORD *)&v112[48] = *(_OWORD *)&v121[48];
      *(_OWORD *)&v112[32] = *(_OWORD *)&v121[32];
      *(_OWORD *)&v112[16] = *(_OWORD *)&v121[16];
      *(__m128i *)v112 = v37;
      goto LABEL_74;
    }
    v133 = 1;
    sub_140EB7850(v81, a2);
    if ( !v82 && v83 == a7 )
    {
      v38 = *a2 + 16LL;
      v131[1] = 1;
      sub_1407D66C0(v122, v38);
      v39 = *(__m128i **)v122;
      if ( *(_QWORD *)v122 != -1 )
      {
        *(_QWORD *)&v112[88] = *(_QWORD *)&v122[88];
        *(_OWORD *)&v112[73] = *(_OWORD *)&v122[73];
        v40 = _mm_loadu_si128((const __m128i *)&v122[9]);
        *(_OWORD *)&v112[57] = *(_OWORD *)&v122[57];
        *(_OWORD *)&v112[41] = *(_OWORD *)&v122[41];
        *(_OWORD *)&v112[25] = *(_OWORD *)&v122[25];
        *(__m128i *)&v112[9] = v40;
        *(_QWORD *)v112 = *(_QWORD *)v122;
        v112[8] = v122[8];
LABEL_72:
        sub_140292E20(v81);
LABEL_73:
        if ( v39 == (__m128i *)-1LL )
        {
          v133 = 1;
          v51 = sub_1407B92D0(*(_QWORD *)&v112[8]);
          if ( !v51 )
          {
            v133 = 1;
            LOBYTE(v54) = 1;
            sub_1407D2600(v121, a3, v54);
            if ( *(_DWORD *)v121 == -1 )
            {
              v133 = 1;
              v67 = sub_1416AED20(&v93);
              *(_OWORD *)v121 = 0x3E8 * (unsigned __int128)(unsigned __int64)v67 + v68 / 0xF4240uLL;
              *(_QWORD *)v122 = &v111;
              *(_QWORD *)&v122[8] = sub_140191200;
              *(_QWORD *)&v122[16] = v121;
              *(_QWORD *)&v122[24] = sub_1416E85A0;
              v133 = 1;
              sub_1416DAFA0(v113, &unk_141A9B581, v122);
              v133 = 1;
              LOBYTE(v69) = 1;
              sub_140DB20C0(v69, aStable, 6, v113, v80);
              sub_1400290B0(&v103);
              v47 = 0;
            }
            else
            {
              *(_OWORD *)&v122[80] = *(_OWORD *)&v121[80];
              *(_OWORD *)&v122[64] = *(_OWORD *)&v121[64];
              v56 = _mm_loadu_si128((const __m128i *)v121);
              *(_OWORD *)&v122[48] = *(_OWORD *)&v121[48];
              *(_OWORD *)&v122[32] = *(_OWORD *)&v121[32];
              *(_OWORD *)&v122[16] = *(_OWORD *)&v121[16];
              *(__m128i *)v122 = v56;
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                *(_QWORD *)v112 = v122;
                *(_QWORD *)&v112[8] = sub_140D76130;
                v114.m128i_i64[0] = (__int64)aCodexmateLibCo_49;
                v114.m128i_i64[1] = 45;
                *(_QWORD *)&v115 = aCodexmateLibCo_49;
                *((_QWORD *)&v115 + 1) = 45;
                *(_QWORD *)v116 = &off_141A9B500;
                sub_140AF72B0(&unk_141A9B48D, v112, 2, &v114);
              }
              v126 = sub_14017AA90();
              v114.m128i_i64[0] = (__int64)v122;
              v114.m128i_i64[1] = (__int64)sub_140D76130;
              sub_1416DAFA0(&v96, &unk_141A9B545, &v114);
              v39 = (__m128i *)v126;
              *(_QWORD *)(v126 + 16) = v97;
              *v39 = _mm_loadu_si128(&v96);
              v133 = 1;
              sub_140D8A3A0(v122);
              a3 = 1;
              v35 = 1;
              v47 = 1;
            }
LABEL_106:
            v114.m128i_i64[0] = v47;
            v114.m128i_i64[1] = v35;
            *(_QWORD *)&v115 = v39;
            *((_QWORD *)&v115 + 1) = a3;
            sub_140EB9080(v122, &v114);
            v70 = *(_OWORD *)v122;
            v71 = *(_QWORD *)&v122[24];
            v72 = *(_QWORD *)&v122[16];
            if ( *(_QWORD *)v122 != -1 )
            {
              v73 = _mm_loadu_si128((const __m128i *)&v122[32]);
              v74 = *(_OWORD *)&v122[48];
              v75 = *(_OWORD *)&v122[64];
              *(_OWORD *)(a1 + 80) = *(_OWORD *)&v122[80];
              *(_OWORD *)(a1 + 64) = v75;
              *(_OWORD *)(a1 + 48) = v74;
              *(__m128i *)(a1 + 32) = v73;
              *(_OWORD *)a1 = v70;
              *(_QWORD *)(a1 + 16) = v72;
              *(_QWORD *)(a1 + 24) = v71;
              goto LABEL_119;
            }
            v76 = *(_QWORD *)&v122[16] + 24LL * *(_QWORD *)&v122[24];
            *(_QWORD *)v121 = *(_QWORD *)&v122[16];
            *(_QWORD *)&v121[8] = *(_QWORD *)&v122[16];
            *(_QWORD *)&v121[16] = *(_QWORD *)&v122[8];
            *(_QWORD *)&v121[24] = v76;
            if ( *(_QWORD *)&v122[24] )
            {
              v72 = *(_QWORD *)&v122[16] + 24LL;
              while ( 1 )
              {
                v77 = *(_QWORD *)(v72 - 24);
                if ( v77 == -1 )
                  break;
                v78 = v72 - 24;
                *(_QWORD *)v112 = *(_QWORD *)(v72 - 24);
                *(__m128i *)&v112[8] = _mm_loadu_si128((const __m128i *)(v72 - 24 + 8));
                if ( *(_QWORD *)off_14223FF10 >= 2u )
                {
                  v126 = v72;
                  v108.m256i_i64[0] = (__int64)v112;
                  v108.m256i_i64[1] = (__int64)sub_1400015F0;
                  *(_QWORD *)v122 = aCodexmateLibCo_50;
                  *(_QWORD *)&v122[8] = 35;
                  *(_QWORD *)&v122[16] = aCodexmateLibCo_50;
                  *(_QWORD *)&v122[24] = 35;
                  *(_QWORD *)&v122[32] = &off_141AA0250;
                  sub_140AF72B0(&unk_141AA0232, &v108, 2, v122);
                  v77 = *(_QWORD *)v112;
                  v72 = v126;
                }
                if ( v77 )
                  sub_140001660(*(_QWORD *)&v112[8], v77, 1);
                v72 += 24;
                if ( v78 + 24 == v76 )
                {
                  v72 = v76;
                  break;
                }
              }
            }
            *(_QWORD *)&v121[8] = v72;
            sub_1401A5C50(v121);
            goto LABEL_118;
          }
          v55 = v51 & 3;
          v126 = v51;
          switch ( v51 & 3 )
          {
            case 0uLL:
              LOBYTE(v51) = *(_BYTE *)(v51 + 16);
              break;
            case 1uLL:
              LOBYTE(v51) = *(_BYTE *)(v51 + 31);
              break;
            case 2uLL:
              v132 = 1;
              v57 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v53, v52) + 8);
              v132 = 1;
              LOBYTE(v51) = v57(HIDWORD(v126));
              break;
            case 3uLL:
              v51 >>= 32;
              break;
          }
          v121[0] = v51;
          *(_QWORD *)v122 = v121;
          *(_QWORD *)&v122[8] = sub_140EDB0F0;
          v132 = 1;
          sub_1416DAFA0(v84, &unk_141A9B46E, v122);
          v132 = 1;
          LOBYTE(v58) = 1;
          sub_140DB20C0(v58, aCommitSyncUnco, 23, v84, v80);
          v59 = _mm_loadu_si128(&v111);
          v60 = *(_QWORD *)(a3 + 776);
          v61 = *(_QWORD *)(a3 + 784);
          v132 = 1;
          LOBYTE(v62) = 1;
          sub_1407D3B80(
            v60,
            v61,
            v62,
            (unsigned int)&unk_141A4A03B,
            23,
            v59.m128i_i64[0],
            v59.m128i_i64[1],
            (__int64)&unk_141A4A42A,
            28);
          *(_QWORD *)&v112[16] = v104;
          *(__m128i *)v112 = _mm_loadu_si128(&v103);
          sub_1407D7410(v122);
          v114.m128i_i64[0] = 0;
          v114.m128i_i64[1] = 1;
          *(_QWORD *)&v115 = 0;
          *(_QWORD *)&v121[16] = 1610612768;
          *(_QWORD *)v121 = &v114;
          *(_QWORD *)&v121[8] = &off_141AA1A90;
          if ( (unsigned __int8)sub_140D76130(v122, v121) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)v131,
              (unsigned int)&unk_141A9F540,
              (__int64)&off_141AA1B48);
          v107 = v114.m128i_i64[1];
          v123 = v114.m128i_i64[0];
          v63 = v115;
          v64 = *(_QWORD *)&v112[16];
          if ( *(_QWORD *)&v112[16] == *(_QWORD *)v112 )
            sub_141939F90(v112);
          v65 = *(_QWORD *)&v112[8];
          v66 = 3 * v64;
          *(_QWORD *)(*(_QWORD *)&v112[8] + 8 * v66) = v123;
          *(_QWORD *)(v65 + 8 * v66 + 8) = v107;
          *(_QWORD *)(v65 + 8 * v66 + 16) = v63;
          *(_QWORD *)&v112[16] = v64 + 1;
          sub_140D8A3A0(v122);
          v39 = *(__m128i **)&v112[8];
          v35 = *(_QWORD *)v112;
          a3 = *(_QWORD *)&v112[16];
          if ( (unsigned int)(v55 - 2) >= 2 && v55 )
          {
            *(_QWORD *)&v122[8] = v126 - 1;
            v122[0] = 3;
            v133 = 0;
            sub_1416EBAD0(&v122[8]);
          }
          v47 = 2;
LABEL_103:
          if ( v47 == 2 )
          {
            *(_QWORD *)(a1 + 8) = v35;
            *(_QWORD *)(a1 + 16) = v39;
            *(_QWORD *)(a1 + 24) = a3;
            *(_QWORD *)a1 = -1;
            goto LABEL_119;
          }
          goto LABEL_106;
        }
LABEL_74:
        v117 = *(_OWORD *)&v112[80];
        *(_OWORD *)&v116[32] = *(_OWORD *)&v112[64];
        si128 = _mm_load_si128((const __m128i *)v112);
        *(_OWORD *)&v116[16] = *(_OWORD *)&v112[48];
        *(_OWORD *)v116 = *(_OWORD *)&v112[32];
        v115 = *(_OWORD *)&v112[16];
        v114 = si128;
        v44 = v111;
        *(_QWORD *)v121 = 0;
        *(_QWORD *)&v121[8] = 1;
        *(_QWORD *)&v121[16] = 0;
        *(_QWORD *)&v122[16] = 1610612768;
        *(_QWORD *)v122 = v121;
        *(_QWORD *)&v122[8] = &off_141AA1A90;
        if ( (unsigned __int8)sub_140D76130(&v114, v122) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)v131,
            (unsigned int)&unk_141A9F540,
            (__int64)&off_141AA1B48);
        v123 = *(_QWORD *)&v121[8];
        v126 = *(_QWORD *)v121;
        LOBYTE(v45) = 1;
        sub_1407D2B10(
          (unsigned int)v122,
          a3,
          v45,
          (unsigned int)aCommitFailed,
          13,
          v44.m128i_i64[0],
          v44.m128i_i64[1],
          *(__int64 *)&v121[8],
          *(__int64 *)&v121[16],
          0);
        if ( *(_QWORD *)v122 == -1 )
        {
          sub_1407B9160(*(_QWORD *)&v122[8]);
        }
        else
        {
          *(_QWORD *)&v121[88] = *(_QWORD *)&v122[88];
          *(_OWORD *)&v121[72] = *(_OWORD *)&v122[72];
          v46 = _mm_loadu_si128((const __m128i *)&v122[8]);
          *(_OWORD *)&v121[56] = *(_OWORD *)&v122[56];
          *(_OWORD *)&v121[40] = *(_OWORD *)&v122[40];
          *(_OWORD *)&v121[24] = *(_OWORD *)&v122[24];
          *(__m128i *)&v121[8] = v46;
          *(_QWORD *)v121 = *(_QWORD *)v122;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v118 = v121;
            v119 = (__int64)sub_140D76130;
            *(_QWORD *)v122 = aCodexmateLibCo_49;
            *(_QWORD *)&v122[8] = 45;
            *(_QWORD *)&v122[16] = aCodexmateLibCo_49;
            *(_QWORD *)&v122[24] = 45;
            *(_QWORD *)&v122[32] = &off_141AA1958;
            sub_140AF72B0(&unk_141AA1920, &v118, 2, v122);
          }
          sub_140D8A3A0(v121);
        }
        if ( v126 )
          sub_140001660(v123, v126, 1);
        *(_QWORD *)v122 = &v111;
        *(_QWORD *)&v122[8] = sub_140191200;
        *(_QWORD *)&v122[16] = &v114;
        *(_QWORD *)&v122[24] = sub_140D76130;
        sub_1416DAFA0(&v118, &unk_141A9B651, v122);
        v124 = 1;
        v126 = v119;
        v92[0] = v119;
        v92[1] = v120;
        *(_QWORD *)v122 = &v124;
        *(_QWORD *)&v122[8] = sub_140ED78B0;
        *(_QWORD *)&v122[16] = v92;
        *(_QWORD *)&v122[24] = sub_140191200;
        sub_1416DAFA0(v121, &unk_141A9B450, v122);
        sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitFailed, 13, (__int64)v121);
        if ( v118 )
          sub_140001660(v126, v118, 1);
        v47 = v114.m128i_i64[1];
        v48 = v114.m128i_i64[0];
        v39 = *((__m128i **)&v115 + 1);
        v35 = v115;
        a3 = *(_QWORD *)v116;
        v108 = *(__m256i *)&v116[8];
        v109 = _mm_loadu_si128((const __m128i *)&v116[40]);
        v110 = *((_QWORD *)&v117 + 1);
        if ( v114.m128i_i64[0] != -1 )
        {
          *(_QWORD *)(a1 + 88) = v110;
          v49 = _mm_load_si128((const __m128i *)&v108);
          v50 = *(_OWORD *)&v108.m256i_u64[2];
          *(__m128i *)(a1 + 72) = v109;
          *(_OWORD *)(a1 + 56) = v50;
          *(__m128i *)(a1 + 40) = v49;
          *(_QWORD *)a1 = v48;
          *(_QWORD *)(a1 + 8) = v47;
          *(_QWORD *)(a1 + 16) = v35;
          *(_QWORD *)(a1 + 24) = v39;
          *(_QWORD *)(a1 + 32) = a3;
          goto LABEL_119;
        }
        goto LABEL_103;
      }
      if ( (v122[8] & 1) == 0 )
      {
        *(_OWORD *)v112 = 0xFFFFFFFFFFFFFFFFuLL;
        goto LABEL_72;
      }
    }
    v82 = 0;
    v83 = a7;
    v130 = 1;
    sub_141597890(&v114);
    *(__m128i *)&v122[1] = _mm_loadu_si128(&v114);
    v122[0] = 1;
    v130 = 0;
    sub_140E9F030(v112, a2, v81, v122);
    v39 = *(__m128i **)v112;
    goto LABEL_73;
  }
  v21 = 32LL * *(_QWORD *)&v89[16];
  v22 = 0;
  do
  {
    v23 = *(_QWORD *)(v20 + v22);
    if ( v23 )
      sub_140001660(*(_QWORD *)(v20 + v22 + 8), v23, 1);
    v22 += 32;
  }
  while ( v21 != v22 );
  if ( v19 )
    sub_140001660(v20, 32 * v19, 8);
  sub_140DC84B0((__int64)v89, (__int128 *)a3, a3, 1u, 0, a3, a6, a3, (__int64)a2, (char *)&v125);
  v15 = *(_QWORD *)v89;
  v98 = *(__m256i *)&v89[8];
  v99 = *(_OWORD *)&v89[40];
  v100 = *(_OWORD *)&v89[56];
  v101 = *(_OWORD *)&v89[72];
  v102 = *(_OWORD *)&v89[88];
  if ( *(_QWORD *)v89 != -1 )
  {
    *(_QWORD *)(a1 + 88) = v102;
    *(_OWORD *)(a1 + 72) = v101;
    v24 = _mm_load_si128((const __m128i *)&v98);
    v25 = *(_OWORD *)&v98.m256i_u64[2];
    v26 = v99;
    v27 = v100;
LABEL_24:
    *(_OWORD *)(a1 + 56) = v27;
    *(_OWORD *)(a1 + 40) = v26;
    *(_OWORD *)(a1 + 24) = v25;
    *(__m128i *)(a1 + 8) = v24;
    *(_QWORD *)a1 = v15;
    return v15;
  }
  *(__m256i *)v122 = v98;
  *(_OWORD *)&v122[80] = v102;
  *(_OWORD *)&v122[64] = v101;
  *(_OWORD *)&v122[48] = v100;
  *(_OWORD *)&v122[32] = v99;
  v33 = v98.m256i_i64[0];
  v126 = v98.m256i_i64[0];
  if ( v98.m256i_i64[0] == 2 )
  {
    v88 = v102;
    v87 = v101;
    v86 = v100;
    v85 = v99;
    v105 = *(_OWORD *)&v98.m256i_u64[1];
    v106 = v98.m256i_i64[3];
    *(_OWORD *)&v89[48] = v102;
    *(_OWORD *)&v89[32] = v101;
    *(_OWORD *)&v89[16] = v100;
    *(_OWORD *)v89 = v99;
    *(_QWORD *)&v113[16] = v98.m256i_i64[3];
    *(_OWORD *)v113 = *(_OWORD *)&v98.m256i_u64[1];
    v118 = nullptr;
    v119 = 8;
    v120 = 0;
    LOBYTE(v20) = 1;
  }
  else
  {
    v129 = 0;
    sub_140EB8E30(v89, &v98);
    v15 = *(_QWORD *)v89;
    *(_OWORD *)v121 = *(_OWORD *)&v89[8];
    *(_OWORD *)&v121[16] = *(_OWORD *)&v89[24];
    *(_OWORD *)&v121[32] = *(_OWORD *)&v89[40];
    *(_OWORD *)&v121[48] = *(_OWORD *)&v89[56];
    *(_OWORD *)&v121[64] = *(_OWORD *)&v89[72];
    *(_QWORD *)&v121[80] = *(_QWORD *)&v89[88];
    if ( *(_QWORD *)v89 != -1 )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v121[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v121[64];
      v24 = _mm_load_si128((const __m128i *)v121);
      v25 = *(_OWORD *)&v121[16];
      v26 = *(_OWORD *)&v121[32];
      v27 = *(_OWORD *)&v121[48];
      goto LABEL_24;
    }
    v88 = *(_OWORD *)&v121[48];
    v87 = *(_OWORD *)&v121[32];
    v86 = *(_OWORD *)&v121[16];
    v85 = *(_OWORD *)v121;
    v105 = *(_OWORD *)&v121[64];
    v106 = *(_QWORD *)&v121[80];
    *(_OWORD *)&v89[48] = *(_OWORD *)&v121[48];
    *(_OWORD *)&v89[32] = *(_OWORD *)&v121[32];
    *(_OWORD *)&v89[16] = *(_OWORD *)&v121[16];
    *(_OWORD *)v89 = *(_OWORD *)v121;
    *(_QWORD *)&v113[16] = *(_QWORD *)&v121[80];
    *(_OWORD *)v113 = *(_OWORD *)&v121[64];
    v128 = 0;
    v127 = 1;
    sub_14022C070(&v118, &v105);
    LODWORD(v20) = 0;
    v33 = v126;
  }
  v41 = *(_OWORD *)v113;
  if ( *(_QWORD *)v89 != 1 || !v89[56] )
  {
    LODWORD(v123) = v20;
    sub_1406C5480((unsigned int)v121, *(_DWORD *)&v113[8], *(_DWORD *)&v113[16], (unsigned int)&unk_141A9B28E, 3);
    *(_QWORD *)&v115 = *(_QWORD *)&v121[16];
    v114 = *(__m128i *)v121;
    *(_QWORD *)v121 = &v114;
    *(_QWORD *)&v121[8] = sub_1400015F0;
    sub_1416DAFA0(v112, &unk_141AA1121, v121);
    if ( v114.m128i_i64[0] )
      sub_140001660(v114.m128i_i64[1], v114.m128i_i64[0], 1);
    v42 = *(_QWORD *)v112;
    v96 = *(__m128i *)&v112[8];
    sub_1402346F0(v113);
    LOBYTE(v20) = v123;
    if ( (_QWORD)v41 )
      sub_140001660(*((_QWORD *)&v41 + 1), 24 * v41, 8);
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v96);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = v42;
    v33 = v126;
    goto LABEL_57;
  }
  if ( !(_BYTE)v20 )
  {
    sub_1402346F0(v113);
    if ( (_QWORD)v41 )
      sub_140001660(*((_QWORD *)&v41 + 1), 24 * v41, 8);
    v108.m256i_i64[0] = -1;
    goto LABEL_62;
  }
  *(_OWORD *)&v108.m256i_u64[1] = *(_OWORD *)&v113[8];
  v108.m256i_i64[0] = *(_QWORD *)v113;
  if ( *(_QWORD *)v113 == -1 )
  {
LABEL_62:
    if ( v120 )
    {
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        LODWORD(v123) = v20;
        sub_1406C5480((unsigned int)v121, v119, v120, (unsigned int)&unk_141A9B28E, 3);
        *(_QWORD *)&v115 = *(_QWORD *)&v121[16];
        v114 = *(__m128i *)v121;
        *(_QWORD *)v112 = &v114;
        *(_QWORD *)&v112[8] = sub_1400015F0;
        *(_QWORD *)v121 = aCodexmateLibCo_50;
        *(_QWORD *)&v121[8] = 35;
        *(_QWORD *)&v121[16] = aCodexmateLibCo_50;
        *(_QWORD *)&v121[24] = 35;
        *(_QWORD *)&v121[32] = &off_141AA0340;
        sub_140AF72B0(&unk_141AA02E8, v112, 2, v121);
        v33 = v126;
        LOBYTE(v20) = v123;
        if ( v114.m128i_i64[0] )
          sub_140001660(v114.m128i_i64[1], v114.m128i_i64[0], 1);
      }
    }
    *(_QWORD *)(a1 + 24) = v108.m256i_i64[2];
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&v108);
    *(_QWORD *)a1 = -1;
    sub_1400290B0(&v118);
    goto LABEL_67;
  }
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    LODWORD(v123) = v20;
    sub_1406C5480((unsigned int)v121, v108.m256i_i32[2], v108.m256i_i32[4], (unsigned int)&unk_141A9B28E, 3);
    *(_QWORD *)&v115 = *(_QWORD *)&v121[16];
    v114 = *(__m128i *)v121;
    *(_QWORD *)v112 = &v114;
    *(_QWORD *)&v112[8] = sub_1400015F0;
    *(_QWORD *)v121 = aCodexmateLibCo_50;
    *(_QWORD *)&v121[8] = 35;
    *(_QWORD *)&v121[16] = aCodexmateLibCo_50;
    *(_QWORD *)&v121[24] = 35;
    *(_QWORD *)&v121[32] = &off_141AA02D0;
    sub_140AF72B0(&unk_141AA0268, v112, 2, v121);
    if ( v114.m128i_i64[0] )
      sub_140001660(v114.m128i_i64[1], v114.m128i_i64[0], 1);
    v33 = v126;
    LOBYTE(v20) = v123;
  }
  *(_QWORD *)(a1 + 24) = v108.m256i_i64[2];
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)&v108);
  *(_QWORD *)a1 = -1;
LABEL_57:
  sub_1402346F0(&v118);
  if ( v118 )
    sub_140001660(v119, 24LL * (_QWORD)v118, 8);
LABEL_67:
  sub_140D8A7D0(v89);
  LOBYTE(v15) = v33 != 2;
  if ( ((unsigned __int8)v20 & (v33 != 2)) != 0 )
    LOBYTE(v15) = sub_140D891C0(v122);
  return v15;
}
