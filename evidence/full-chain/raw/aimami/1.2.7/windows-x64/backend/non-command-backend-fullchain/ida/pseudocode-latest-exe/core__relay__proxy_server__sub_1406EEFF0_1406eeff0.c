// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406eeff0 | successor of pre-update 0x140d55d70 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.969, "str_ov": 0.667, "verdict": "CONFIRMED_DIFF"}
char __fastcall sub_1406EEFF0(__m128i *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v6; // rax
  __m128i v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  char *v27; // r12
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  char v33; // al
  __int64 v34; // r12
  char *v35; // r13
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // r12
  __int64 v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  char v44; // al
  __m128i *v45; // r14
  __int64 v46; // rbx
  __int64 v47; // r12
  __m128i *v48; // r15
  int v49; // edx
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // r13
  bool v53; // al
  __int64 v54; // rax
  void *v55; // rcx
  int v56; // edx
  __int64 v57; // r14
  __int64 v58; // r12
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r14
  __m128i v63; // xmm1
  __int64 v64; // rax
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  char result; // al
  __m128i v73; // xmm0
  __int64 v74; // r12
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rbx
  __int64 v78; // r15
  __int64 v79; // r13
  __m128i v80; // xmm0
  __int128 v81; // xmm2
  __m128i v82; // xmm0
  __m128i v83; // xmm1
  __int64 v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rax
  int v90; // edx
  __int64 v91; // rax
  __int64 v92; // rcx
  __m128i v93; // xmm0
  __int64 v94; // rbx
  __int64 v95; // rax
  __m128i v96; // xmm0
  __m128i v97; // xmm1
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  __m128i v101; // xmm0
  __m128i v102; // xmm1
  __int64 v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __m128i v107; // xmm0
  __m128i v108; // xmm1
  __m128i v109; // xmm2
  _QWORD v110[32]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v111; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v112; // [rsp+170h] [rbp+F0h]
  __int64 v113; // [rsp+180h] [rbp+100h]
  __int64 v114; // [rsp+188h] [rbp+108h]
  __m256i v115; // [rsp+190h] [rbp+110h] BYREF
  __m128i v116; // [rsp+1B0h] [rbp+130h]
  __m128i v117; // [rsp+1C0h] [rbp+140h]
  __m128i v118; // [rsp+1D0h] [rbp+150h]
  __m128i v119; // [rsp+1E0h] [rbp+160h]
  __m128i v120; // [rsp+1F0h] [rbp+170h]
  __m128i v121; // [rsp+200h] [rbp+180h]
  __m128i v122; // [rsp+290h] [rbp+210h] BYREF
  __m128i v123; // [rsp+2A0h] [rbp+220h] BYREF
  __m128i v124; // [rsp+2B0h] [rbp+230h]
  __m128i v125; // [rsp+2C0h] [rbp+240h]
  __m128i v126; // [rsp+2D0h] [rbp+250h]
  __m128i v127; // [rsp+2E0h] [rbp+260h]
  __m128i v128; // [rsp+2F0h] [rbp+270h]
  __m128i v129; // [rsp+300h] [rbp+280h]
  _QWORD v130[2]; // [rsp+310h] [rbp+290h] BYREF
  char v131; // [rsp+320h] [rbp+2A0h]
  __int64 v132; // [rsp+328h] [rbp+2A8h]
  __m128i v133; // [rsp+330h] [rbp+2B0h] BYREF
  __m128i v134; // [rsp+340h] [rbp+2C0h] BYREF
  __m128i v135; // [rsp+350h] [rbp+2D0h]
  __m128i v136; // [rsp+360h] [rbp+2E0h]
  __m128i v137; // [rsp+370h] [rbp+2F0h]
  __m128i v138; // [rsp+380h] [rbp+300h]
  __m128i v139; // [rsp+390h] [rbp+310h]
  __m128i v140; // [rsp+3A0h] [rbp+320h]
  __int64 v141; // [rsp+3B8h] [rbp+338h]
  const __m128i *v142; // [rsp+3C0h] [rbp+340h]
  __int64 v143; // [rsp+3C8h] [rbp+348h]
  char v144; // [rsp+3D3h] [rbp+353h]
  char v145; // [rsp+3D4h] [rbp+354h]
  char v146; // [rsp+3D5h] [rbp+355h]
  char v147; // [rsp+3D6h] [rbp+356h]
  char v148; // [rsp+3D7h] [rbp+357h]
  __int64 v149; // [rsp+3D8h] [rbp+358h]
  __int64 v150; // [rsp+3E0h] [rbp+360h]

  v150 = -2;
  v6 = *(unsigned __int8 *)(a2 + 649);
  v149 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_DWORD *)(a2 + 650) = 0;
      *(_BYTE *)(a2 + 654) = 0;
      *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 128);
      v7 = _mm_loadu_si128((const __m128i *)(a2 + 16));
      v8 = *(_OWORD *)(a2 + 32);
      v9 = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(a2 + 176) = *(_OWORD *)a2;
      *(__m128i *)(a2 + 192) = v7;
      *(_OWORD *)(a2 + 208) = v8;
      *(_OWORD *)(a2 + 224) = v9;
      *(_OWORD *)(a2 + 240) = *(_OWORD *)(a2 + 64);
      *(_OWORD *)(a2 + 256) = *(_OWORD *)(a2 + 80);
      *(_BYTE *)(a2 + 652) = 1;
      *(_OWORD *)(a2 + 288) = *(_OWORD *)(a2 + 112);
      *(_OWORD *)(a2 + 272) = *(_OWORD *)(a2 + 96);
      *(__m128i *)(a2 + 304) = _mm_loadu_si128((const __m128i *)(a2 + 136));
      LOBYTE(v3) = *(_BYTE *)(a2 + 648);
      v10 = *(_QWORD *)(a2 + 152);
      v11 = *(_QWORD *)(a2 + 160);
      v142 = (const __m128i *)(a2 + 272);
      v12 = sub_1416724D0(aModel_0, 5, a2 + 272);
      if ( v12 )
      {
        v141 = a3;
        v13 = v3;
        v14 = v11;
        v15 = 0;
        v16 = 1;
        v17 = *(_QWORD *)(v12 + 16);
        if ( *(_BYTE *)v12 != 3 )
          v17 = 1;
        v18 = 0;
        if ( *(_BYTE *)v12 == 3 )
          v18 = *(_QWORD *)(v12 + 24);
        if ( v18 < 0 )
LABEL_8:
          sub_14196B2DB(v15, v18);
        if ( v18 )
        {
          v143 = *(_QWORD *)(v12 + 24);
          nullsub_1(0, 1);
          v20 = sub_140001650(v18, 1);
          v15 = 1;
          if ( !v20 )
            goto LABEL_8;
          v132 = v10;
          v21 = v20;
          sub_1419234B0(v20, v17, v18);
          v16 = v21;
          v19 = v143;
        }
        else
        {
          v19 = 0;
        }
        v11 = v14;
        v3 = v13;
        a3 = v141;
      }
      else
      {
        v16 = 1;
        v19 = 0;
      }
      v22 = v149;
      *(_QWORD *)(v149 + 320) = v19;
      *(_QWORD *)(v22 + 328) = v16;
      *(_QWORD *)(v22 + 336) = v19;
      *(_BYTE *)(v22 + 651) = 1;
      sub_140735FA0(v22 + 344, v16, v19, v3);
      if ( !*(_QWORD *)(v149 + 336) )
      {
        LOWORD(v23) = 400;
        sub_1407360F0((unsigned int)&v122, v23, (unsigned int)aMissingModelFi, 37, (__int64)aRouterMissingM, 20);
LABEL_96:
        v86 = v149;
        v87 = *(_QWORD *)(v149 + 344);
        if ( v87 )
          sub_140001660(*(_QWORD *)(v149 + 352), v87, 1);
        if ( *(_BYTE *)(v86 + 651) )
        {
          v88 = *(_QWORD *)(v86 + 320);
          if ( v88 )
            sub_140001660(*(_QWORD *)(v86 + 328), v88, 1);
        }
        *(_BYTE *)(v86 + 651) = 0;
        if ( *(_BYTE *)(v86 + 652) )
          sub_1406C0ED0(v149 + 272);
        v89 = v149;
        *(_BYTE *)(v149 + 652) = 0;
        sub_1400366B0(v89 + 176);
LABEL_135:
        a1[7] = v129;
        a1[6] = v128;
        a1[5] = v127;
        a1[4] = v126;
        v107 = _mm_load_si128(&v122);
        v108 = _mm_load_si128(&v123);
        v109 = v124;
        a1[3] = v125;
        a1[2] = v109;
        a1[1] = v108;
        *a1 = v107;
        result = 1;
        goto LABEL_136;
      }
      v26 = **(_QWORD **)(v149 + 168);
      v27 = (char *)(v26 + 16);
      LOBYTE(v24) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v26 + 16), 1, 0) )
        sub_141969A30((volatile void *)(v26 + 16));
      if ( 2 * *off_142240260 )
      {
        v28 = sub_14196A710(v24, v23, v25);
        LOBYTE(v28) = v28 ^ 1;
      }
      else
      {
        v28 = 0;
      }
      v29 = *(unsigned __int8 *)(v26 + 17);
      v144 = v29;
      v130[1] = v26 + 16;
      LODWORD(v141) = v28;
      v131 = v28;
      v130[0] = (_BYTE)v29 != 0;
      if ( (_BYTE)v29 )
      {
        LOWORD(v29) = 500;
        sub_1407360F0((unsigned int)&v122, v29, (unsigned int)aStatePoisoned, 14, (__int64)aRouterStatePoi, 21);
        if ( !(_BYTE)v141 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v31, v30, v32) )
          *(_BYTE *)(v26 + 17) = 1;
        v33 = *v27;
        *v27 = 0;
        if ( v33 == 2 )
          WakeByAddressSingle((PVOID)(v26 + 16));
        goto LABEL_96;
      }
      v114 = v26 + 16;
      sub_140734010(v110, v26 + 24, *(_QWORD *)(v149 + 352), *(_QWORD *)(v149 + 360));
      if ( *(_BYTE *)(v26 + 388) && !*(_BYTE *)(v26 + 406) && v110[0] == -1 )
      {
        sub_1401F5580(
          (unsigned int)&v133,
          *(_QWORD *)(v26 + 32),
          *(_QWORD *)(v26 + 40),
          *(_QWORD *)(v26 + 56),
          *(_QWORD *)(v26 + 64));
        v34 = v10;
        v147 = *(_BYTE *)(v26 + 388);
      }
      else
      {
        v147 = *(_BYTE *)(v26 + 388);
        v34 = v10;
        v133.m128i_i64[0] = 0;
        v133.m128i_i64[1] = 1;
        v134.m128i_i64[0] = 0;
      }
      v148 = *(_BYTE *)(v26 + 406);
      v35 = (char *)(v26 + 16);
      v132 = v34;
      v113 = v11;
      v145 = v3;
      if ( v148 && (v36 = *(_QWORD *)(v26 + 168)) != 0 )
      {
        v37 = *(_QWORD *)(v26 + 160);
        v38 = 72 * v36;
        v143 = *(_QWORD *)(v149 + 352);
        v39 = *(_QWORD *)(v149 + 360);
        v40 = 0;
        do
        {
          if ( *(_QWORD *)(v37 + v40 + 48) != -1
            && *(_QWORD *)(v37 + v40 + 64) == v39
            && !(unsigned int)sub_141923B40(*(_QWORD *)(v37 + v40 + 56), v143, v39) )
          {
            LODWORD(v143) = 1;
            goto LABEL_41;
          }
          v40 += 72;
        }
        while ( v38 != v40 );
        LODWORD(v143) = 0;
LABEL_41:
        v35 = (char *)(v26 + 16);
      }
      else
      {
        LODWORD(v143) = 0;
      }
      v112 = v134.m128i_i64[0];
      v111 = _mm_loadu_si128(&v133);
      sub_1419234B0(&v115, v110, 256);
      if ( !(_BYTE)v141 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v42, v41, v43) )
        *(_BYTE *)(v26 + 17) = 1;
      v44 = *v35;
      *v35 = 0;
      if ( v44 == 2 )
        WakeByAddressSingle(v35);
      v45 = (__m128i *)v149;
      v46 = v149 + 304;
      v47 = v149 + 320;
      *(_BYTE *)(v149 + 650) = 1;
      v48 = v45 + 23;
      sub_1419234B0(&v45[23], &v115, 256);
      v45[39] = _mm_load_si128(&v111);
      v45[40].m128i_i64[0] = v112;
      if ( !v147 )
      {
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v133.m128i_i64[0] = v47;
          v133.m128i_i64[1] = (__int64)sub_1400015F0;
          v134.m128i_i64[0] = v46;
          v134.m128i_i64[1] = (__int64)sub_140191200;
          v115.m256i_i64[0] = (__int64)aCodexmateLibCo_5;
          v115.m256i_i64[1] = 40;
          v115.m256i_i64[2] = (__int64)aCodexmateLibCo_5;
          v115.m256i_i64[3] = 40;
          v116.m128i_i64[0] = (__int64)&off_141A3A370;
          sub_140AF72B0(&unk_141A3A308, &v133, 2, &v115);
        }
        LOWORD(v49) = 503;
        sub_1407360F0((unsigned int)&v122, v49, (unsigned int)aCodexCodexCode, 146, (__int64)aRouterDisabled, 15);
        goto LABEL_90;
      }
      v50 = sub_14076EEF0(asc_141A39730, 2, v45[22].m128i_i64[0], v45[22].m128i_i64[1]);
      v52 = v149;
      if ( v50
        || (*(_QWORD *)(v149 + 360) >= 0xDu
          ? (v51 = **(_QWORD **)(v149 + 352) ^ 0x725F696D616D6961LL
                 | *(_QWORD *)(*(_QWORD *)(v149 + 352) + 5LL) ^ 0x5F79616C65725F69LL,
             v53 = v51 == 0)
          : (v53 = 0),
            (unsigned __int8)v143 | v53) )
      {
        v54 = v48->m128i_i64[0];
        if ( v48->m128i_i64[0] == -1 )
        {
          sub_140733260(
            *(_QWORD *)(v149 + 168),
            *(_QWORD *)(v149 + 304),
            *(_QWORD *)(v149 + 312),
            *(_QWORD *)(v149 + 328),
            *(_QWORD *)(v149 + 336),
            0,
            0);
          v55 = &unk_141A3A60E;
          HIWORD(v56) = WORD1(v143);
          if ( (_BYTE)v143 )
            v55 = &unk_141A3A62B;
          LOWORD(v56) = 404;
          sub_1407360F0(
            (unsigned int)&v122,
            v56,
            (unsigned int)aChatgpt_2,
            138,
            (__int64)v55,
            2LL * (unsigned __int8)v143 + 29);
          goto LABEL_90;
        }
      }
      else
      {
        v54 = v48->m128i_i64[0];
      }
      v57 = v47;
      v58 = v149 + 176;
      if ( v145 )
      {
        v59 = *(_QWORD *)off_14223FF10;
        if ( v54 != -1 || v148 )
        {
          if ( v59 >= 3 )
          {
            v133.m128i_i64[0] = v57;
            v133.m128i_i64[1] = (__int64)sub_1400015F0;
            v134.m128i_i64[0] = v46;
            v134.m128i_i64[1] = (__int64)sub_140191200;
            v115.m256i_i64[0] = (__int64)aCodexmateLibCo_5;
            v115.m256i_i64[1] = 40;
            v115.m256i_i64[2] = (__int64)aCodexmateLibCo_5;
            v115.m256i_i64[3] = 40;
            v116.m128i_i64[0] = (__int64)&off_141A3A5D0;
            sub_140AF72B0(&unk_141A3A580, &v133, 3, &v115);
            v52 = v149;
          }
          sub_140733260(
            *(_QWORD *)(v52 + 168),
            *(_QWORD *)(v52 + 304),
            *(_QWORD *)(v52 + 312),
            *(_QWORD *)(v52 + 328),
            *(_QWORD *)(v52 + 336),
            0,
            0);
          LOWORD(v90) = 400;
          sub_1407360F0(
            (unsigned int)&v122,
            v90,
            (unsigned int)"��תģ����ʹ�� ChatGPT ԭ��������ѹ��������� ChatGPT �����´�����AiMaMi �������ɼ�����αժҪ��router.native_compaction_require"
                          "d/responses/responses/compact",
            136,
            (__int64)"router.native_compaction_required/responses/responses/compact",
            33);
        }
        else
        {
          if ( v59 >= 3 )
          {
            v133.m128i_i64[0] = v57;
            v133.m128i_i64[1] = (__int64)sub_1400015F0;
            v115.m256i_i64[0] = (__int64)aCodexmateLibCo_5;
            v115.m256i_i64[1] = 40;
            v115.m256i_i64[2] = (__int64)aCodexmateLibCo_5;
            v115.m256i_i64[3] = 40;
            v116.m128i_i64[0] = (__int64)&off_141A3A568;
            sub_140AF72B0(&unk_141A3A521, &v133, 3, &v115);
            v52 = v149;
          }
          sub_14073B0C0(
            *(_QWORD *)(v52 + 168),
            *(_QWORD *)(v52 + 304),
            *(_QWORD *)(v52 + 312),
            *(_QWORD *)(v52 + 328),
            *(_QWORD *)(v52 + 336),
            0);
          v60 = sub_14070F590(*(_QWORD *)(v149 + 168));
          v61 = v149;
          *(_QWORD *)(v149 + 656) = v60;
          *(_BYTE *)(v61 + 652) = 0;
          v62 = v61 + 808;
          v63 = _mm_loadu_si128(v142 + 1);
          *(__m128i *)(v61 + 808) = _mm_loadu_si128(v142);
          *(__m128i *)(v61 + 824) = v63;
          sub_140738420(v61 + 808);
          a2 = v149;
          v64 = v149 + 656;
          *(__m128i *)(v149 + 760) = _mm_loadu_si128((const __m128i *)(v149 + 632));
          *(_QWORD *)(a2 + 776) = v64;
          *(_QWORD *)(a2 + 784) = v58;
          *(_QWORD *)(a2 + 792) = v62;
          *(_WORD *)(a2 + 800) = 256;
LABEL_66:
          v142 = (const __m128i *)(a2 + 664);
          sub_1406F0E20(&v115, a2 + 664, a3);
          if ( v115.m256i_i32[0] == -1 )
          {
            a1->m128i_i64[0] = -1;
            result = 3;
            goto LABEL_136;
          }
          v140 = v121;
          v139 = v120;
          v138 = v119;
          v137 = v118;
          v65 = _mm_loadu_si128((const __m128i *)&v115);
          v66 = _mm_loadu_si128((const __m128i *)&v115.m256i_u64[2]);
          v136 = v117;
          v135 = v116;
          v134 = v66;
          v133 = v65;
          if ( *(_BYTE *)(v149 + 800) == 3 && *(_BYTE *)(v149 + 753) == 3 )
          {
            sub_1406C1D00(*(_QWORD *)(v149 + 680), *(_QWORD *)(v149 + 688));
            *(_BYTE *)(v149 + 752) = 0;
          }
          sub_1406CE2F0(&v115, "x-aimami-reasoninterleaved-thinking-2025-05-14", 15, &v133);
          if ( v115.m256i_i8[0] )
          {
            if ( v115.m256i_i64[2] >= (unsigned __int64)v135.m128i_i64[1] )
              sub_14196B673(v115.m256i_i64[2], v135.m128i_i64[1], &off_141A35658);
            v67 = *(_QWORD *)(v135.m128i_i64[0] + 104 * v115.m256i_i64[2] + 40);
            if ( v67 )
            {
              v68 = *(_QWORD *)(v135.m128i_i64[0] + 104 * v115.m256i_i64[2] + 32);
              v69 = 0;
              while ( (unsigned __int8)(*(_BYTE *)(v68 + v69) - 32) < 0x5Fu || *(_BYTE *)(v68 + v69) == 9 )
              {
                if ( v67 == ++v69 )
                {
                  if ( v67 == 19
                    && _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v68), (__m128i)xmmword_141A34E50),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v68 + 3)), (__m128i)xmmword_141A34E40))) == 0xFFFF )
                  {
                    sub_14070F130(*(_QWORD *)(v149 + 168), 0);
                  }
                  break;
                }
              }
            }
          }
          sub_14073B0C0(
            *(_QWORD *)(v149 + 168),
            *(_QWORD *)(v149 + 304),
            *(_QWORD *)(v149 + 312),
            *(_QWORD *)(v149 + 328),
            *(_QWORD *)(v149 + 336),
            1);
          v129 = v140;
          v128 = v139;
          v127 = v138;
          v126 = v137;
          v70 = _mm_load_si128(&v133);
          v71 = _mm_load_si128(&v134);
          v125 = v136;
          v124 = v135;
          v123 = v71;
          v122 = v70;
          sub_1406C0ED0(v149 + 808);
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v149 + 656)) )
            sub_141258070(v149 + 656);
        }
        goto LABEL_90;
      }
      if ( v54 != -1 )
      {
        v141 = v149 + 176;
        *(_BYTE *)(v149 + 650) = 0;
        *(_BYTE *)(v52 + 654) = 1;
        v143 = v52 + 4152;
        sub_1419234B0(v52 + 4152, v48, 256);
        *(_BYTE *)(v52 + 652) = 0;
        v73 = _mm_loadu_si128(v142);
        *(__m128i *)&v115.m256i_u64[2] = _mm_loadu_si128(v142 + 1);
        *(__m128i *)v115.m256i_i8 = v73;
        v74 = v52 + 4120;
        sub_14073C710(v52 + 4120, &v115);
        v75 = v149;
        *(_BYTE *)(v149 + 653) = 1;
        if ( *(_BYTE *)(v75 + 4120) == 5 )
        {
          sub_140767E90(v130);
          v76 = v149;
          v146 = 1;
          sub_1416DB410(&v133, v149 + 4248);
          v115.m256i_i64[3] = v134.m128i_i64[0];
          *(__m128i *)&v115.m256i_u64[1] = _mm_loadu_si128(&v133);
          v115.m256i_i8[0] = 3;
          v146 = 0;
          sub_140A68320(&v133, v76 + 4128, v130, &v115);
          if ( v133.m128i_i8[0] != -1 )
            sub_1406C0ED0(&v133);
          v75 = v149;
        }
        v77 = *(_QWORD *)(v75 + 168);
        v78 = sub_140710E10(256);
        v79 = v149;
        *(_BYTE *)(v149 + 654) = 0;
        sub_1419234B0(v78, v143, 256);
        a2 = v79;
        *(_BYTE *)(v79 + 653) = 0;
        v80 = _mm_loadu_si128((const __m128i *)(v79 + 304));
        *(_BYTE *)(v79 + 651) = 0;
        *(_QWORD *)(v79 + 656) = 1;
        *(_QWORD *)(v79 + 664) = v78;
        *(_QWORD *)(v79 + 672) = 1;
        *(_OWORD *)(v79 + 680) = *(_OWORD *)v57;
        *(_QWORD *)(v79 + 696) = *(_QWORD *)(v57 + 16);
        v81 = *(_OWORD *)(v74 + 16);
        *(__m128i *)(v79 + 704) = _mm_loadu_si128((const __m128i *)v74);
        *(_OWORD *)(v79 + 720) = v81;
        *(_QWORD *)(v79 + 736) = v77;
        *(_QWORD *)(v79 + 744) = v141;
        *(__m128i *)(v79 + 752) = v80;
        *(_QWORD *)(v79 + 768) = v132;
        *(_QWORD *)(v79 + 776) = v113;
        *(_BYTE *)(v79 + 1496) = 0;
LABEL_88:
        v142 = (const __m128i *)(a2 + 656);
        sub_1406EC330(&v115, a2 + 656, a3);
        if ( v115.m256i_i32[0] == -1 )
        {
          a1->m128i_i64[0] = -1;
          result = 4;
          goto LABEL_136;
        }
        v129 = v121;
        v128 = v120;
        v127 = v119;
        v126 = v118;
        v82 = _mm_loadu_si128((const __m128i *)&v115);
        v83 = _mm_loadu_si128((const __m128i *)&v115.m256i_u64[2]);
        v125 = v117;
        v124 = v116;
        v123 = v83;
        v122 = v82;
        sub_1406BAE00(v142);
        *(_WORD *)(v149 + 653) = 0;
        goto LABEL_90;
      }
      if ( v148 )
      {
        LOWORD(v51) = 401;
        sub_1407360F0((unsigned int)&v122, v51, (unsigned int)aChatgpt_1, 177, (__int64)aPassthroughNoC, 27);
LABEL_90:
        v84 = v149;
        v85 = *(_QWORD *)(v149 + 624);
        if ( v85 )
          sub_140001660(*(_QWORD *)(v149 + 632), v85, 1);
        if ( *(_QWORD *)(v84 + 368) != -1 && *(_BYTE *)(v84 + 650) )
          sub_140292FD0(v84 + 368);
        *(_BYTE *)(v84 + 650) = 0;
        goto LABEL_96;
      }
      if ( *(_QWORD *)off_14223FF10 >= 3u )
      {
        v133.m128i_i64[0] = v57;
        v133.m128i_i64[1] = (__int64)sub_1400015F0;
        v115.m256i_i64[0] = (__int64)aCodexmateLibCo_5;
        v115.m256i_i64[1] = 40;
        v115.m256i_i64[2] = (__int64)aCodexmateLibCo_5;
        v115.m256i_i64[3] = 40;
        v116.m128i_i64[0] = (__int64)&off_141A3A458;
        sub_140AF72B0(&unk_141A3A41A, &v133, 3, &v115);
        v52 = v149;
      }
      sub_14073B0C0(
        *(_QWORD *)(v52 + 168),
        *(_QWORD *)(v52 + 304),
        *(_QWORD *)(v52 + 312),
        *(_QWORD *)(v52 + 328),
        *(_QWORD *)(v52 + 336),
        0);
      v91 = sub_14070F590(*(_QWORD *)(v149 + 168));
      v92 = v149;
      *(_QWORD *)(v149 + 656) = v91;
      *(_BYTE *)(v92 + 652) = 0;
      v93 = _mm_loadu_si128(v142);
      *(__m128i *)&v115.m256i_u64[2] = _mm_loadu_si128(v142 + 1);
      *(__m128i *)v115.m256i_i8 = v93;
      v94 = v92 + 808;
      sub_14073B6B0(v92 + 808, &v115);
      sub_140738420(v94);
      a2 = v149;
      v95 = v149 + 656;
      *(__m128i *)(v149 + 760) = _mm_loadu_si128((const __m128i *)(v149 + 632));
      *(_QWORD *)(a2 + 776) = v95;
      *(_QWORD *)(a2 + 784) = v58;
      *(_QWORD *)(a2 + 792) = v94;
      *(_WORD *)(a2 + 800) = 0;
LABEL_113:
      v142 = (const __m128i *)(a2 + 664);
      sub_1406F0E20(&v115, a2 + 664, a3);
      if ( v115.m256i_i32[0] != -1 )
      {
        v140 = v121;
        v139 = v120;
        v138 = v119;
        v137 = v118;
        v96 = _mm_loadu_si128((const __m128i *)&v115);
        v97 = _mm_loadu_si128((const __m128i *)&v115.m256i_u64[2]);
        v136 = v117;
        v135 = v116;
        v134 = v97;
        v133 = v96;
        if ( *(_BYTE *)(v149 + 800) == 3 && *(_BYTE *)(v149 + 753) == 3 )
        {
          sub_1406C1D00(*(_QWORD *)(v149 + 680), *(_QWORD *)(v149 + 688));
          *(_BYTE *)(v149 + 752) = 0;
        }
        sub_1406CE2F0(&v115, "x-aimami-reasoninterleaved-thinking-2025-05-14", 15, &v133);
        if ( v115.m256i_i8[0] )
        {
          if ( v115.m256i_i64[2] >= (unsigned __int64)v135.m128i_i64[1] )
            sub_14196B673(v115.m256i_i64[2], v135.m128i_i64[1], &off_141A35658);
          v98 = *(_QWORD *)(v135.m128i_i64[0] + 104 * v115.m256i_i64[2] + 40);
          if ( v98 )
          {
            v99 = *(_QWORD *)(v135.m128i_i64[0] + 104 * v115.m256i_i64[2] + 32);
            v100 = 0;
            while ( (unsigned __int8)(*(_BYTE *)(v99 + v100) - 32) < 0x5Fu || *(_BYTE *)(v99 + v100) == 9 )
            {
              if ( v98 == ++v100 )
              {
                if ( v98 == 19
                  && _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v99), (__m128i)xmmword_141A34E50),
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v99 + 3)), (__m128i)xmmword_141A34E40))) == 0xFFFF )
                {
                  sub_14070F130(*(_QWORD *)(v149 + 168), 0);
                }
                break;
              }
            }
          }
        }
        sub_14073B0C0(
          *(_QWORD *)(v149 + 168),
          *(_QWORD *)(v149 + 304),
          *(_QWORD *)(v149 + 312),
          *(_QWORD *)(v149 + 328),
          *(_QWORD *)(v149 + 336),
          1);
        v129 = v140;
        v128 = v139;
        v127 = v138;
        v126 = v137;
        v101 = _mm_load_si128(&v133);
        v102 = _mm_load_si128(&v134);
        v125 = v136;
        v124 = v135;
        v123 = v102;
        v122 = v101;
        sub_1406C0ED0(v149 + 808);
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v149 + 656)) )
          sub_141258070(v149 + 656);
        v103 = v149;
        v104 = *(_QWORD *)(v149 + 624);
        if ( v104 )
          sub_140001660(*(_QWORD *)(v149 + 632), v104, 1);
        *(_BYTE *)(v103 + 650) = 0;
        v105 = *(_QWORD *)(v103 + 344);
        if ( v105 )
          sub_140001660(*(_QWORD *)(v103 + 352), v105, 1);
        v106 = *(_QWORD *)(v103 + 320);
        if ( v106 )
          sub_140001660(*(_QWORD *)(v103 + 328), v106, 1);
        *(_WORD *)(v103 + 651) = 0;
        sub_1400366B0(v103 + 176);
        goto LABEL_135;
      }
      a1->m128i_i64[0] = -1;
      result = 5;
LABEL_136:
      *(_BYTE *)(v149 + 649) = result;
      return result;
    case 1LL:
      sub_14196B990(&off_141A3A710);
    case 2LL:
      sub_14196B9B0(&off_141A3A710);
    case 3LL:
      goto LABEL_66;
    case 4LL:
      goto LABEL_88;
    case 5LL:
      goto LABEL_113;
  }
}
