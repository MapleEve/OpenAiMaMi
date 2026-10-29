// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d55d70 | name sub_140D55D70
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D55D70(__m128i *a1, __int64 a2, _QWORD *a3)
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
  signed __int64 v18; // r15
  const __m128i *v19; // r8
  __m128i *v20; // rax
  __m128i *v21; // rbx
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rbx
  char *v26; // r12
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // r12
  char *v32; // r13
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // r12
  __int64 v37; // r15
  __int64 v38; // rcx
  char v39; // al
  __m128i *v40; // r14
  __int64 v41; // rbx
  __int64 v42; // r12
  const __m128i *v43; // r15
  int v44; // edx
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // r13
  bool v48; // al
  __int64 v49; // rax
  void *v50; // rcx
  int v51; // edx
  __int64 v52; // r14
  __int64 v53; // r12
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r14
  __m128i v58; // xmm1
  __int64 v59; // rax
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  char result; // al
  __m128i v68; // xmm0
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rbx
  __m128i *v73; // r15
  __int64 v74; // r13
  __m128i v75; // xmm0
  __int128 v76; // xmm2
  __m128i v77; // xmm0
  __m128i v78; // xmm1
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // rax
  __int64 v87; // rcx
  __m128i v88; // xmm0
  __int64 v89; // rbx
  __int64 v90; // rax
  __m128i v91; // xmm0
  __m128i v92; // xmm1
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  __m128i v96; // xmm0
  __m128i v97; // xmm1
  __int64 v98; // rdi
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  __m128i v102; // xmm0
  __m128i v103; // xmm1
  __m128i v104; // xmm2
  __m128i v105[16]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v106; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v107; // [rsp+170h] [rbp+F0h]
  __int64 v108; // [rsp+180h] [rbp+100h]
  __int64 v109; // [rsp+188h] [rbp+108h]
  __m256i v110; // [rsp+190h] [rbp+110h] BYREF
  __m128i v111; // [rsp+1B0h] [rbp+130h]
  __m128i v112; // [rsp+1C0h] [rbp+140h]
  __m128i v113; // [rsp+1D0h] [rbp+150h]
  __m128i v114; // [rsp+1E0h] [rbp+160h]
  __m128i v115; // [rsp+1F0h] [rbp+170h]
  __m128i v116; // [rsp+200h] [rbp+180h]
  __m128i v117; // [rsp+290h] [rbp+210h] BYREF
  __m128i v118; // [rsp+2A0h] [rbp+220h] BYREF
  __m128i v119; // [rsp+2B0h] [rbp+230h]
  __m128i v120; // [rsp+2C0h] [rbp+240h]
  __m128i v121; // [rsp+2D0h] [rbp+250h]
  __m128i v122; // [rsp+2E0h] [rbp+260h]
  __m128i v123; // [rsp+2F0h] [rbp+270h]
  __m128i v124; // [rsp+300h] [rbp+280h]
  _QWORD v125[2]; // [rsp+310h] [rbp+290h] BYREF
  char v126; // [rsp+320h] [rbp+2A0h]
  __int64 v127; // [rsp+328h] [rbp+2A8h]
  __m128i v128; // [rsp+330h] [rbp+2B0h] BYREF
  __m128i v129; // [rsp+340h] [rbp+2C0h] BYREF
  __m128i v130; // [rsp+350h] [rbp+2D0h]
  __m128i v131; // [rsp+360h] [rbp+2E0h]
  __m128i v132; // [rsp+370h] [rbp+2F0h]
  __m128i v133; // [rsp+380h] [rbp+300h]
  __m128i v134; // [rsp+390h] [rbp+310h]
  __m128i v135; // [rsp+3A0h] [rbp+320h]
  _QWORD *v136; // [rsp+3B8h] [rbp+338h]
  const __m128i *v137; // [rsp+3C0h] [rbp+340h]
  const __m128i *v138; // [rsp+3C8h] [rbp+348h]
  char v139; // [rsp+3D3h] [rbp+353h]
  char v140; // [rsp+3D4h] [rbp+354h]
  char v141; // [rsp+3D5h] [rbp+355h]
  char v142; // [rsp+3D6h] [rbp+356h]
  char v143; // [rsp+3D7h] [rbp+357h]
  __int64 v144; // [rsp+3D8h] [rbp+358h]
  __int64 v145; // [rsp+3E0h] [rbp+360h]

  v145 = -2;
  v6 = *(unsigned __int8 *)(a2 + 649);
  v144 = a2;
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
      v137 = (const __m128i *)(a2 + 272);
      v12 = sub_1416419F0(aModel_6, 5, a2 + 272);
      if ( v12 )
      {
        v136 = a3;
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
          sub_141938D2B(v15, v18);
        if ( v18 )
        {
          v138 = *(const __m128i **)(v12 + 24);
          nullsub_1(0);
          v20 = (__m128i *)sub_140001650(v18, 1);
          v15 = 1;
          if ( !v20 )
            goto LABEL_8;
          v127 = v10;
          v21 = v20;
          sub_1418F44E0(v20, (const __m128i *)v17, v18);
          v16 = (__int64)v21;
          v19 = v138;
        }
        else
        {
          v19 = nullptr;
        }
        v11 = v14;
        v3 = v13;
        a3 = v136;
      }
      else
      {
        v16 = 1;
        v19 = nullptr;
      }
      v22 = v144;
      *(_QWORD *)(v144 + 320) = v19;
      *(_QWORD *)(v22 + 328) = v16;
      *(_QWORD *)(v22 + 336) = v19;
      *(_BYTE *)(v22 + 651) = 1;
      sub_140DAFB90(v22 + 344, v16, v19, v3);
      if ( !*(_QWORD *)(v144 + 336) )
      {
        LOWORD(v23) = 400;
        sub_140DAFCE0((unsigned int)&v117, v23, (unsigned int)aMissingModelFi, 37, (__int64)aRouterMissingM, 20);
LABEL_96:
        v81 = v144;
        v82 = *(_QWORD *)(v144 + 344);
        if ( v82 )
          sub_140001660(*(_QWORD *)(v144 + 352), v82, 1);
        if ( *(_BYTE *)(v81 + 651) )
        {
          v83 = *(_QWORD *)(v81 + 320);
          if ( v83 )
            sub_140001660(*(_QWORD *)(v81 + 328), v83, 1);
        }
        *(_BYTE *)(v81 + 651) = 0;
        if ( *(_BYTE *)(v81 + 652) )
          sub_140409B40(v144 + 272);
        v84 = v144;
        *(_BYTE *)(v144 + 652) = 0;
        sub_14029C800(v84 + 176);
LABEL_135:
        a1[7] = v124;
        a1[6] = v123;
        a1[5] = v122;
        a1[4] = v121;
        v102 = _mm_load_si128(&v117);
        v103 = _mm_load_si128(&v118);
        v104 = v119;
        a1[3] = v120;
        a1[2] = v104;
        a1[1] = v103;
        *a1 = v102;
        result = 1;
        goto LABEL_136;
      }
      v25 = **(_QWORD **)(v144 + 168);
      v26 = (char *)(v25 + 16);
      LOBYTE(v24) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v25 + 16), 1, 0) )
        sub_141937480((volatile void *)(v25 + 16));
      if ( 2 * *off_1421E7210 )
      {
        v27 = sub_141938160(v24);
        LOBYTE(v27) = v27 ^ 1;
      }
      else
      {
        v27 = 0;
      }
      v28 = *(unsigned __int8 *)(v25 + 17);
      v139 = v28;
      v125[1] = v25 + 16;
      LODWORD(v136) = v27;
      v126 = v27;
      v125[0] = (_BYTE)v28 != 0;
      if ( (_BYTE)v28 )
      {
        LOWORD(v28) = 500;
        sub_140DAFCE0((unsigned int)&v117, v28, (unsigned int)aStatePoisoned, 14, (__int64)aRouterStatePoi, 21);
        if ( !(_BYTE)v136 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v29) )
          *(_BYTE *)(v25 + 17) = 1;
        v30 = *v26;
        *v26 = 0;
        if ( v30 == 2 )
          WakeByAddressSingle((PVOID)(v25 + 16));
        goto LABEL_96;
      }
      v109 = v25 + 16;
      sub_140DACAE0(v105, v25 + 24, *(_QWORD *)(v144 + 352), *(_QWORD *)(v144 + 360));
      if ( *(_BYTE *)(v25 + 388) && !*(_BYTE *)(v25 + 406) && v105[0].m128i_i64[0] == -1 )
      {
        sub_140DB7C10(
          (__int64)&v128,
          *(_QWORD *)(v25 + 32),
          *(_QWORD *)(v25 + 40),
          *(_QWORD *)(v25 + 56),
          *(_QWORD *)(v25 + 64));
        v31 = v10;
        v142 = *(_BYTE *)(v25 + 388);
      }
      else
      {
        v142 = *(_BYTE *)(v25 + 388);
        v31 = v10;
        v128.m128i_i64[0] = 0;
        v128.m128i_i64[1] = 1;
        v129.m128i_i64[0] = 0;
      }
      v143 = *(_BYTE *)(v25 + 406);
      v32 = (char *)(v25 + 16);
      v127 = v31;
      v108 = v11;
      v140 = v3;
      if ( v143 && (v33 = *(_QWORD *)(v25 + 168)) != 0 )
      {
        v34 = *(_QWORD *)(v25 + 160);
        v35 = 72 * v33;
        v138 = *(const __m128i **)(v144 + 352);
        v36 = *(_QWORD *)(v144 + 360);
        v37 = 0;
        do
        {
          if ( *(_QWORD *)(v34 + v37 + 48) != -1
            && *(_QWORD *)(v34 + v37 + 64) == v36
            && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v34 + v37 + 56), v138) )
          {
            LODWORD(v138) = 1;
            goto LABEL_41;
          }
          v37 += 72;
        }
        while ( v35 != v37 );
        LODWORD(v138) = 0;
LABEL_41:
        v32 = (char *)(v25 + 16);
      }
      else
      {
        LODWORD(v138) = 0;
      }
      v107 = v129.m128i_i64[0];
      v106 = _mm_loadu_si128(&v128);
      sub_1418F44E0((__m128i *)&v110, v105, 0x100u);
      if ( !(_BYTE)v136 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v38) )
        *(_BYTE *)(v25 + 17) = 1;
      v39 = *v32;
      *v32 = 0;
      if ( v39 == 2 )
        WakeByAddressSingle(v32);
      v40 = (__m128i *)v144;
      v41 = v144 + 304;
      v42 = v144 + 320;
      *(_BYTE *)(v144 + 650) = 1;
      v43 = v40 + 23;
      sub_1418F44E0(v40 + 23, (const __m128i *)&v110, 0x100u);
      v40[39] = _mm_load_si128(&v106);
      v40[40].m128i_i64[0] = v107;
      if ( !v142 )
      {
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v128.m128i_i64[0] = v42;
          v128.m128i_i64[1] = (__int64)sub_1400015F0;
          v129.m128i_i64[0] = v41;
          v129.m128i_i64[1] = (__int64)sub_140186EE0;
          v110.m256i_i64[0] = (__int64)aCodexmateLibCo_8;
          v110.m256i_i64[1] = 40;
          v110.m256i_i64[2] = (__int64)aCodexmateLibCo_8;
          v110.m256i_i64[3] = 40;
          v111.m128i_i64[0] = (__int64)&off_141A48C20;
          sub_140BAD520(&unk_141A48BB8, &v128, 2, &v110);
        }
        LOWORD(v44) = 503;
        sub_140DAFCE0((unsigned int)&v117, v44, (unsigned int)aCodexCodexCode, 146, (__int64)aRouterDisabled, 15);
        goto LABEL_90;
      }
      v45 = sub_140DDDAE0(asc_141A48CCA, 2, v40[22].m128i_i64[0]);
      v47 = v144;
      if ( v45
        || (*(_QWORD *)(v144 + 360) >= 0xDu
          ? (v46 = **(_QWORD **)(v144 + 352) ^ 0x725F696D616D6961LL
                 | *(_QWORD *)(*(_QWORD *)(v144 + 352) + 5LL) ^ 0x5F79616C65725F69LL,
             v48 = v46 == 0)
          : (v48 = 0),
            (unsigned __int8)v138 | v48) )
      {
        v49 = v43->m128i_i64[0];
        if ( v43->m128i_i64[0] == -1 )
        {
          sub_140DABD30(
            *(_QWORD *)(v144 + 168),
            *(_QWORD *)(v144 + 304),
            *(_QWORD *)(v144 + 312),
            *(_QWORD *)(v144 + 328),
            *(_QWORD *)(v144 + 336),
            0,
            0);
          v50 = &unk_141A48EC6;
          HIWORD(v51) = WORD1(v138);
          if ( (_BYTE)v138 )
            v50 = &unk_141A48EE3;
          LOWORD(v51) = 404;
          sub_140DAFCE0(
            (unsigned int)&v117,
            v51,
            (unsigned int)aChatgpt_4,
            138,
            (__int64)v50,
            2LL * (unsigned __int8)v138 + 29);
          goto LABEL_90;
        }
      }
      else
      {
        v49 = v43->m128i_i64[0];
      }
      v52 = v42;
      v53 = v144 + 176;
      if ( v140 )
      {
        v54 = *(_QWORD *)off_1421E6EC0;
        if ( v49 != -1 || v143 )
        {
          if ( v54 >= 3 )
          {
            v128.m128i_i64[0] = v52;
            v128.m128i_i64[1] = (__int64)sub_1400015F0;
            v129.m128i_i64[0] = v41;
            v129.m128i_i64[1] = (__int64)sub_140186EE0;
            v110.m256i_i64[0] = (__int64)aCodexmateLibCo_8;
            v110.m256i_i64[1] = 40;
            v110.m256i_i64[2] = (__int64)aCodexmateLibCo_8;
            v110.m256i_i64[3] = 40;
            v111.m128i_i64[0] = (__int64)&off_141A48E88;
            sub_140BAD520(&unk_141A48E38, &v128, 3, &v110);
            v47 = v144;
          }
          sub_140DABD30(
            *(_QWORD *)(v47 + 168),
            *(_QWORD *)(v47 + 304),
            *(_QWORD *)(v47 + 312),
            *(_QWORD *)(v47 + 328),
            *(_QWORD *)(v47 + 336),
            0,
            0);
          LOWORD(v85) = 400;
          sub_140DAFCE0(
            (unsigned int)&v117,
            v85,
            (unsigned int)"中转模型请使用 ChatGPT 原生上下文压缩；请更新 ChatGPT 并重新打开任务。AiMaMi 不再生成兼容性伪摘要。router.native_compaction_require"
                          "d/responses/responses/compact",
            136,
            (__int64)"router.native_compaction_required/responses/responses/compact",
            33);
        }
        else
        {
          if ( v54 >= 3 )
          {
            v128.m128i_i64[0] = v52;
            v128.m128i_i64[1] = (__int64)sub_1400015F0;
            v110.m256i_i64[0] = (__int64)aCodexmateLibCo_8;
            v110.m256i_i64[1] = 40;
            v110.m256i_i64[2] = (__int64)aCodexmateLibCo_8;
            v110.m256i_i64[3] = 40;
            v111.m128i_i64[0] = (__int64)&off_141A48E20;
            sub_140BAD520(&unk_141A48DD9, &v128, 3, &v110);
            v47 = v144;
          }
          sub_140DB4200(
            *(_QWORD *)(v47 + 168),
            *(_QWORD *)(v47 + 304),
            *(_QWORD *)(v47 + 312),
            *(_QWORD *)(v47 + 328),
            *(_QWORD *)(v47 + 336),
            0);
          v55 = sub_140DA5480(*(_QWORD *)(v144 + 168));
          v56 = v144;
          *(_QWORD *)(v144 + 656) = v55;
          *(_BYTE *)(v56 + 652) = 0;
          v57 = v56 + 808;
          v58 = _mm_loadu_si128(v137 + 1);
          *(__m128i *)(v56 + 808) = _mm_loadu_si128(v137);
          *(__m128i *)(v56 + 824) = v58;
          sub_140DB16F0(v56 + 808);
          a2 = v144;
          v59 = v144 + 656;
          *(__m128i *)(v144 + 760) = _mm_loadu_si128((const __m128i *)(v144 + 632));
          *(_QWORD *)(a2 + 776) = v59;
          *(_QWORD *)(a2 + 784) = v53;
          *(_QWORD *)(a2 + 792) = v57;
          *(_WORD *)(a2 + 800) = 256;
LABEL_66:
          v137 = (const __m128i *)(a2 + 664);
          sub_140D57BB0(v110.m256i_i64, a2 + 664, (__int64)a3);
          if ( v110.m256i_i32[0] == -1 )
          {
            a1->m128i_i64[0] = -1;
            result = 3;
            goto LABEL_136;
          }
          v135 = v116;
          v134 = v115;
          v133 = v114;
          v132 = v113;
          v60 = _mm_loadu_si128((const __m128i *)&v110);
          v61 = _mm_loadu_si128((const __m128i *)&v110.m256i_u64[2]);
          v131 = v112;
          v130 = v111;
          v129 = v61;
          v128 = v60;
          if ( *(_BYTE *)(v144 + 800) == 3 && *(_BYTE *)(v144 + 753) == 3 )
          {
            sub_140D1A820(*(_QWORD *)(v144 + 680), *(_QWORD *)(v144 + 688));
            *(_BYTE *)(v144 + 752) = 0;
          }
          sub_140D29110(&v110, aXAimamiReason, 15, &v128);
          if ( v110.m256i_i8[0] )
          {
            if ( v110.m256i_i64[2] >= (unsigned __int64)v130.m128i_i64[1] )
              sub_1419390C3(v110.m256i_i64[2], v130.m128i_i64[1], &off_141A426F8);
            v62 = *(_QWORD *)(v130.m128i_i64[0] + 104 * v110.m256i_i64[2] + 40);
            if ( v62 )
            {
              v63 = *(_QWORD *)(v130.m128i_i64[0] + 104 * v110.m256i_i64[2] + 32);
              v64 = 0;
              while ( (unsigned __int8)(*(_BYTE *)(v63 + v64) - 32) < 0x5Fu || *(_BYTE *)(v63 + v64) == 9 )
              {
                if ( v62 == ++v64 )
                {
                  if ( v62 == 19
                    && _mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v63), (__m128i)xmmword_141A41E90),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v63 + 3)), (__m128i)xmmword_141A41E80))) == 0xFFFF )
                  {
                    sub_140DA5020(*(_QWORD *)(v144 + 168), 0);
                  }
                  break;
                }
              }
            }
          }
          sub_140DB4200(
            *(_QWORD *)(v144 + 168),
            *(_QWORD *)(v144 + 304),
            *(_QWORD *)(v144 + 312),
            *(_QWORD *)(v144 + 328),
            *(_QWORD *)(v144 + 336),
            1);
          v124 = v135;
          v123 = v134;
          v122 = v133;
          v121 = v132;
          v65 = _mm_load_si128(&v128);
          v66 = _mm_load_si128(&v129);
          v120 = v131;
          v119 = v130;
          v118 = v66;
          v117 = v65;
          sub_140409B40(v144 + 808);
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v144 + 656)) )
            sub_141242F50(v144 + 656);
        }
        goto LABEL_90;
      }
      if ( v49 != -1 )
      {
        v136 = (_QWORD *)(v144 + 176);
        *(_BYTE *)(v144 + 650) = 0;
        *(_BYTE *)(v47 + 654) = 1;
        v138 = (const __m128i *)(v47 + 3224);
        sub_1418F44E0((__m128i *)(v47 + 3224), v43, 0x100u);
        *(_BYTE *)(v47 + 652) = 0;
        v68 = _mm_loadu_si128(v137);
        *(__m128i *)&v110.m256i_u64[2] = _mm_loadu_si128(v137 + 1);
        *(__m128i *)v110.m256i_i8 = v68;
        v69 = v47 + 3192;
        sub_140DB6930(v47 + 3192, &v110);
        v70 = v144;
        *(_BYTE *)(v144 + 653) = 1;
        if ( *(_BYTE *)(v70 + 3192) == 5 )
        {
          sub_1404806C0(v125, aModel_6, 5);
          v71 = v144;
          v141 = 1;
          sub_1416AC440(&v128, v144 + 3320);
          v110.m256i_i64[3] = v129.m128i_i64[0];
          *(__m128i *)&v110.m256i_u64[1] = _mm_loadu_si128(&v128);
          v110.m256i_i8[0] = 3;
          v141 = 0;
          sub_140E72AA0(&v128, v71 + 3200, v125, &v110);
          if ( v128.m128i_i8[0] != -1 )
            sub_140409B40(&v128);
          v70 = v144;
        }
        v72 = *(_QWORD *)(v70 + 168);
        v73 = (__m128i *)sub_140C23890(256);
        v74 = v144;
        *(_BYTE *)(v144 + 654) = 0;
        sub_1418F44E0(v73, v138, 0x100u);
        a2 = v74;
        *(_BYTE *)(v74 + 653) = 0;
        v75 = _mm_loadu_si128((const __m128i *)(v74 + 304));
        *(_BYTE *)(v74 + 651) = 0;
        *(_QWORD *)(v74 + 656) = 1;
        *(_QWORD *)(v74 + 664) = v73;
        *(_QWORD *)(v74 + 672) = 1;
        *(_OWORD *)(v74 + 680) = *(_OWORD *)v52;
        *(_QWORD *)(v74 + 696) = *(_QWORD *)(v52 + 16);
        v76 = *(_OWORD *)(v69 + 16);
        *(__m128i *)(v74 + 704) = _mm_loadu_si128((const __m128i *)v69);
        *(_OWORD *)(v74 + 720) = v76;
        *(_QWORD *)(v74 + 736) = v72;
        *(_QWORD *)(v74 + 744) = v136;
        *(__m128i *)(v74 + 752) = v75;
        *(_QWORD *)(v74 + 768) = v127;
        *(_QWORD *)(v74 + 776) = v108;
        *(_BYTE *)(v74 + 1496) = 0;
LABEL_88:
        v137 = (const __m128i *)(a2 + 656);
        sub_140D46580((__m128i *)&v110, a2 + 656, a3);
        if ( v110.m256i_i32[0] == -1 )
        {
          a1->m128i_i64[0] = -1;
          result = 4;
          goto LABEL_136;
        }
        v124 = v116;
        v123 = v115;
        v122 = v114;
        v121 = v113;
        v77 = _mm_loadu_si128((const __m128i *)&v110);
        v78 = _mm_loadu_si128((const __m128i *)&v110.m256i_u64[2]);
        v120 = v112;
        v119 = v111;
        v118 = v78;
        v117 = v77;
        sub_140D14680((__int64)v137);
        *(_WORD *)(v144 + 653) = 0;
        goto LABEL_90;
      }
      if ( v143 )
      {
        LOWORD(v46) = 401;
        sub_140DAFCE0((unsigned int)&v117, v46, (unsigned int)aChatgpt_3, 177, (__int64)aPassthroughNoC, 27);
LABEL_90:
        v79 = v144;
        v80 = *(_QWORD *)(v144 + 624);
        if ( v80 )
          sub_140001660(*(_QWORD *)(v144 + 632), v80, 1);
        if ( *(_QWORD *)(v79 + 368) != -1 && *(_BYTE *)(v79 + 650) )
          sub_14038CFC0(v79 + 368);
        *(_BYTE *)(v79 + 650) = 0;
        goto LABEL_96;
      }
      if ( *(_QWORD *)off_1421E6EC0 >= 3u )
      {
        v128.m128i_i64[0] = v52;
        v128.m128i_i64[1] = (__int64)sub_1400015F0;
        v110.m256i_i64[0] = (__int64)aCodexmateLibCo_8;
        v110.m256i_i64[1] = 40;
        v110.m256i_i64[2] = (__int64)aCodexmateLibCo_8;
        v110.m256i_i64[3] = 40;
        v111.m128i_i64[0] = (__int64)&off_141A48D10;
        sub_140BAD520(&unk_141A48CCC, &v128, 3, &v110);
        v47 = v144;
      }
      sub_140DB4200(
        *(_QWORD *)(v47 + 168),
        *(_QWORD *)(v47 + 304),
        *(_QWORD *)(v47 + 312),
        *(_QWORD *)(v47 + 328),
        *(_QWORD *)(v47 + 336),
        0);
      v86 = sub_140DA5480(*(_QWORD *)(v144 + 168));
      v87 = v144;
      *(_QWORD *)(v144 + 656) = v86;
      *(_BYTE *)(v87 + 652) = 0;
      v88 = _mm_loadu_si128(v137);
      *(__m128i *)&v110.m256i_u64[2] = _mm_loadu_si128(v137 + 1);
      *(__m128i *)v110.m256i_i8 = v88;
      v89 = v87 + 808;
      sub_140DB5070(v87 + 808, &v110);
      sub_140DB16F0(v89);
      a2 = v144;
      v90 = v144 + 656;
      *(__m128i *)(v144 + 760) = _mm_loadu_si128((const __m128i *)(v144 + 632));
      *(_QWORD *)(a2 + 776) = v90;
      *(_QWORD *)(a2 + 784) = v53;
      *(_QWORD *)(a2 + 792) = v89;
      *(_WORD *)(a2 + 800) = 0;
LABEL_113:
      v137 = (const __m128i *)(a2 + 664);
      sub_140D57BB0(v110.m256i_i64, a2 + 664, (__int64)a3);
      if ( v110.m256i_i32[0] != -1 )
      {
        v135 = v116;
        v134 = v115;
        v133 = v114;
        v132 = v113;
        v91 = _mm_loadu_si128((const __m128i *)&v110);
        v92 = _mm_loadu_si128((const __m128i *)&v110.m256i_u64[2]);
        v131 = v112;
        v130 = v111;
        v129 = v92;
        v128 = v91;
        if ( *(_BYTE *)(v144 + 800) == 3 && *(_BYTE *)(v144 + 753) == 3 )
        {
          sub_140D1A820(*(_QWORD *)(v144 + 680), *(_QWORD *)(v144 + 688));
          *(_BYTE *)(v144 + 752) = 0;
        }
        sub_140D29110(&v110, aXAimamiReason, 15, &v128);
        if ( v110.m256i_i8[0] )
        {
          if ( v110.m256i_i64[2] >= (unsigned __int64)v130.m128i_i64[1] )
            sub_1419390C3(v110.m256i_i64[2], v130.m128i_i64[1], &off_141A426F8);
          v93 = *(_QWORD *)(v130.m128i_i64[0] + 104 * v110.m256i_i64[2] + 40);
          if ( v93 )
          {
            v94 = *(_QWORD *)(v130.m128i_i64[0] + 104 * v110.m256i_i64[2] + 32);
            v95 = 0;
            while ( (unsigned __int8)(*(_BYTE *)(v94 + v95) - 32) < 0x5Fu || *(_BYTE *)(v94 + v95) == 9 )
            {
              if ( v93 == ++v95 )
              {
                if ( v93 == 19
                  && _mm_movemask_epi8(
                       _mm_and_si128(
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v94), (__m128i)xmmword_141A41E90),
                         _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v94 + 3)), (__m128i)xmmword_141A41E80))) == 0xFFFF )
                {
                  sub_140DA5020(*(_QWORD *)(v144 + 168), 0);
                }
                break;
              }
            }
          }
        }
        sub_140DB4200(
          *(_QWORD *)(v144 + 168),
          *(_QWORD *)(v144 + 304),
          *(_QWORD *)(v144 + 312),
          *(_QWORD *)(v144 + 328),
          *(_QWORD *)(v144 + 336),
          1);
        v124 = v135;
        v123 = v134;
        v122 = v133;
        v121 = v132;
        v96 = _mm_load_si128(&v128);
        v97 = _mm_load_si128(&v129);
        v120 = v131;
        v119 = v130;
        v118 = v97;
        v117 = v96;
        sub_140409B40(v144 + 808);
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v144 + 656)) )
          sub_141242F50(v144 + 656);
        v98 = v144;
        v99 = *(_QWORD *)(v144 + 624);
        if ( v99 )
          sub_140001660(*(_QWORD *)(v144 + 632), v99, 1);
        *(_BYTE *)(v98 + 650) = 0;
        v100 = *(_QWORD *)(v98 + 344);
        if ( v100 )
          sub_140001660(*(_QWORD *)(v98 + 352), v100, 1);
        v101 = *(_QWORD *)(v98 + 320);
        if ( v101 )
          sub_140001660(*(_QWORD *)(v98 + 328), v101, 1);
        *(_WORD *)(v98 + 651) = 0;
        sub_14029C800(v98 + 176);
        goto LABEL_135;
      }
      a1->m128i_i64[0] = -1;
      result = 5;
LABEL_136:
      *(_BYTE *)(v144 + 649) = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A48FC8);
    case 2LL:
      sub_141939400(&off_141A48FC8);
    case 3LL:
      goto LABEL_66;
    case 4LL:
      goto LABEL_88;
    case 5LL:
      goto LABEL_113;
  }
}
