// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x1410237a0 | name sub_1410237A0
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1410237A0(
        __int64 a1,
        __int64 a2,
        char a3,
        const __m128i *a4,
        __int64 a5,
        const __m128i *a6,
        unsigned __int64 a7,
        const __m128i *a8,
        unsigned __int64 a9)
{
  __int64 v9; // r15
  __int64 v11; // r12
  __int64 v12; // rdi
  __m128i *v14; // rax
  __int64 v15; // rcx
  const __m128i *v16; // r12
  unsigned __int32 v17; // r15d
  __int32 v18; // edi
  int v19; // esi
  unsigned __int32 v20; // eax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r9
  __int64 v23; // r13
  __int64 v24; // r14
  __m128i *v25; // rax
  __m128i *v26; // r13
  __int64 v27; // rax
  __int64 v28; // r8
  __m128i *v29; // rax
  __m128i *v30; // r12
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __m128i si128; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __m128i v37; // xmm3
  __m128i v38; // xmm4
  __m128i v39; // xmm5
  __m128i v40; // xmm6
  __int64 v41; // rcx
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __m128i v44; // xmm2
  __m128i v45; // xmm3
  __m128i v46; // xmm4
  unsigned __int64 v47; // rcx
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  __m128i v52; // xmm4
  __m128i v53; // xmm5
  __m128i v54; // xmm6
  __int64 v55; // rcx
  __m128i v56; // xmm0
  __m128i v57; // xmm1
  __m128i v58; // xmm2
  __m128i v59; // xmm3
  __m128i v60; // xmm4
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned __int64 v63; // r9
  __int64 v64; // r10
  char v65; // al
  char v66; // al
  char v67; // al
  unsigned __int64 v68; // r13
  __m128i *v69; // rax
  __int64 v70; // rcx
  const __m128i *v71; // r13
  __m128i *v72; // rax
  __int64 v73; // r13
  unsigned __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rbx
  _BYTE *v78; // rax
  __int64 v79; // r15
  __int64 result; // rax
  __int64 v81; // rbx
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // r8d
  __int64 v88; // rbx
  __int64 v89; // rdi
  unsigned __int64 v90; // rdx
  _QWORD v91[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v92[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v93[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v94; // [rsp+70h] [rbp-10h] BYREF
  char v95; // [rsp+78h] [rbp-8h] BYREF
  char v96[7]; // [rsp+79h] [rbp-7h] BYREF
  __int64 v97; // [rsp+80h] [rbp+0h] BYREF
  __int64 v98; // [rsp+88h] [rbp+8h] BYREF
  __int64 v99; // [rsp+90h] [rbp+10h]
  __m128i v100; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v101; // [rsp+B0h] [rbp+30h]
  __int64 v102; // [rsp+B8h] [rbp+38h]
  __int64 v103; // [rsp+C0h] [rbp+40h]
  __int64 v104; // [rsp+C8h] [rbp+48h]
  __int64 v105; // [rsp+D0h] [rbp+50h]
  char v106; // [rsp+D8h] [rbp+58h]
  __int16 v107; // [rsp+E0h] [rbp+60h]
  __int64 v108; // [rsp+E8h] [rbp+68h]
  __int64 v109; // [rsp+F0h] [rbp+70h]
  __int64 v110; // [rsp+F8h] [rbp+78h]
  __int64 v111; // [rsp+100h] [rbp+80h]
  __int64 v112; // [rsp+108h] [rbp+88h] BYREF
  __int64 v113; // [rsp+110h] [rbp+90h]
  __int64 v114; // [rsp+118h] [rbp+98h]
  __m128i v115; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v116; // [rsp+130h] [rbp+B0h]
  __int64 v117; // [rsp+140h] [rbp+C0h]
  __int64 v118; // [rsp+148h] [rbp+C8h]
  __int64 v119; // [rsp+150h] [rbp+D0h]
  char v120; // [rsp+15Eh] [rbp+DEh]
  char v121; // [rsp+15Fh] [rbp+DFh]
  __int64 v122; // [rsp+160h] [rbp+E0h]
  __int64 v123; // [rsp+168h] [rbp+E8h]

  v123 = -2;
  if ( a5 < 0 )
  {
    v9 = 0;
    goto LABEL_3;
  }
  if ( a5 )
  {
    v11 = a1;
    v12 = a2;
    nullsub_1(a1);
    v9 = 1;
    v14 = (__m128i *)sub_140001650(a5, 1);
    if ( !v14 )
LABEL_3:
      sub_141938D2B(v9, a5);
    v108 = (__int64)v14;
    sub_1418F44E0(v14, a4, a5);
    a2 = v12;
    a1 = v11;
  }
  else
  {
    v108 = 1;
  }
  v111 = a1;
  v109 = a2;
  sub_141406CE0(&v100);
  v16 = a6;
  v17 = v100.m128i_i32[0];
  v18 = (v100.m128i_i32[0] >> 13) - 1;
  v19 = 0;
  if ( v100.m128i_i32[0] >> 13 <= 0 )
  {
    v20 = (1 - (v100.m128i_i32[0] >> 13)) / 0x190u + 1;
    v15 = 400 * v20;
    v18 += v15;
    v19 = -146097 * v20;
  }
  v110 = v100.m128i_u32[1];
  v117 = v100.m128i_u32[2];
  v21 = -1;
  if ( a6 )
  {
    v22 = a7;
    if ( (a7 & 0x8000000000000000uLL) != 0LL )
    {
      v23 = 0;
      goto LABEL_13;
    }
    if ( !a7 )
    {
      v28 = 1;
      goto LABEL_48;
    }
    nullsub_1(v15);
    v23 = 1;
    v25 = (__m128i *)sub_140001650(a7, 1);
    v22 = a7;
    if ( !v25 )
LABEL_13:
      sub_141938D2B(v23, v22);
    v26 = v25;
    sub_1418F44E0(v25, a6, a7);
    v22 = a7;
    if ( a7 < 8 )
    {
      v27 = 0;
      v28 = (__int64)v26;
      goto LABEL_46;
    }
    if ( a7 >= 0x20 )
    {
      v27 = a7 & 0x7FFFFFFFFFFFFFE0LL;
      v33 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
      v35 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
      v36 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
      v28 = (__int64)v26;
      do
      {
        v37 = _mm_loadu_si128(&v26[v33 / 0x10]);
        v38 = _mm_loadu_si128(&v26[v33 / 0x10 + 1]);
        v39 = _mm_add_epi8(v37, si128);
        v40 = _mm_add_epi8(v38, si128);
        v26[v33 / 0x10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v39, v35), v39), v36), v37);
        v26[v33 / 0x10 + 1] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v40, v35), v40), v36), v38);
        v33 += 32LL;
      }
      while ( v27 != v33 );
      if ( a7 == v27 )
        goto LABEL_48;
      if ( (a7 & 0x18) == 0 )
      {
        do
        {
LABEL_46:
          *(_BYTE *)(v28 + v27) |= 32 * ((unsigned __int8)(*(_BYTE *)(v28 + v27) - 65) < 0x1Au);
          ++v27;
LABEL_47:
          ;
        }
        while ( a7 != v27 );
LABEL_48:
        v119 = v28;
        if ( (unsigned __int8)sub_141059410(aRollback_3, 8, v28, v22) )
        {
          v16 = (const __m128i *)&unk_141A6FF2E;
          v62 = 12;
        }
        else
        {
          v16 = (const __m128i *)&unk_141A6FF2E;
          v118 = 12;
          v65 = sub_141059410(&unk_141A6FF2E, 12, v119, a7);
          v63 = a7;
          v64 = v119;
          if ( v65 )
            goto LABEL_55;
          v16 = (const __m128i *)&unk_141A7029E;
          v118 = 10;
          v66 = sub_141059410(&unk_141A7029E, 10, v119, a7);
          v63 = a7;
          v64 = v119;
          if ( v66
            || (v16 = (const __m128i *)&unk_141A702A8,
                v118 = 9,
                v67 = sub_141059410(&unk_141A702A8, 9, v119, a7),
                v63 = a7,
                v64 = v119,
                v67) )
          {
LABEL_55:
            if ( v63 )
              sub_140001660(v64, v63, 1);
            nullsub_1(v61);
            v68 = v118;
            v69 = (__m128i *)sub_140001650(v118, 1);
            if ( !v69 )
              sub_141938D2B(1, v68);
            v119 = (__int64)v69;
            sub_1418F44E0(v69, v16, v68);
            if ( !a8 )
              goto LABEL_105;
LABEL_15:
            if ( (a9 & 0x8000000000000000uLL) != 0LL )
            {
              v24 = 0;
              goto LABEL_17;
            }
            if ( !a9 )
            {
              v31 = 1;
              goto LABEL_73;
            }
            nullsub_1(v15);
            v24 = 1;
            v29 = (__m128i *)sub_140001650(a9, 1);
            if ( !v29 )
LABEL_17:
              sub_141938D2B(v24, a9);
            v30 = v29;
            sub_1418F44E0(v29, a8, a9);
            v31 = (__int64)v30;
            if ( a9 < 8 )
            {
              v32 = 0;
              goto LABEL_71;
            }
            if ( a9 >= 0x20 )
            {
              v32 = a9 & 0x7FFFFFFFFFFFFFE0LL;
              v47 = 0;
              v48 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
              v49 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
              v50 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
              do
              {
                v51 = _mm_loadu_si128(&v30[v47 / 0x10]);
                v52 = _mm_loadu_si128(&v30[v47 / 0x10 + 1]);
                v53 = _mm_add_epi8(v51, v48);
                v54 = _mm_add_epi8(v52, v48);
                v30[v47 / 0x10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v53, v49), v53), v50), v51);
                v30[v47 / 0x10 + 1] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v54, v49), v54), v50), v52);
                v47 += 32LL;
              }
              while ( v32 != v47 );
              if ( a9 == v32 )
                goto LABEL_73;
              if ( (a9 & 0x18) == 0 )
              {
                do
                {
LABEL_71:
                  v30->m128i_i8[v32] |= 32 * ((unsigned __int8)(v30->m128i_i8[v32] - 65) < 0x1Au);
                  ++v32;
LABEL_72:
                  ;
                }
                while ( a9 != v32 );
LABEL_73:
                v122 = v31;
                v71 = (const __m128i *)&unk_141A70286;
                v21 = 16;
                if ( (unsigned __int8)sub_141059410(aNoSpace, 8, v31, a9) )
                  goto LABEL_101;
                if ( (unsigned __int8)sub_141059410(aDiskFull, 9, v122, a9) )
                  goto LABEL_101;
                if ( (unsigned __int8)sub_141059410(aEnospc, 6, v122, a9) )
                  goto LABEL_101;
                if ( (unsigned __int8)sub_141059410(aInsufficientSp, 18, v122, a9) )
                  goto LABEL_101;
                if ( (unsigned __int8)sub_141059410(aWriteCapacity, 14, v122, a9) )
                  goto LABEL_101;
                if ( (unsigned __int8)sub_141059410(aStorageCapacit, 16, v122, a9) )
                  goto LABEL_101;
                if ( (unsigned __int8)sub_141059410(asc_141A70033, 12, a8, a9) )
                  goto LABEL_101;
                if ( (unsigned __int8)sub_141059410(asc_141A7003F, 12, a8, a9) )
                  goto LABEL_101;
                v71 = (const __m128i *)&unk_141A7027F;
                v21 = 7;
                if ( (unsigned __int8)sub_141059410(aDatabaseIsLock_0, 18, v122, a9)
                  || (unsigned __int8)sub_141059410(aBusy_0, 4, v122, a9)
                  || (unsigned __int8)sub_141059410(aDbHolder, 9, v122, a9)
                  || (unsigned __int8)sub_141059410(aHeldBy, 7, v122, a9)
                  || (unsigned __int8)sub_141059410(asc_141A70071, 15, a8, a9)
                  || (unsigned __int8)sub_141059410(asc_141A70080, 12, a8, a9)
                  || (unsigned __int8)sub_141059410(asc_141A7008C, 15, a8, a9) )
                {
                  goto LABEL_101;
                }
                v71 = (const __m128i *)&unk_141A70270;
                if ( !(unsigned __int8)sub_141059410(aTaskkill_0, 8, v122, a9)
                  && !(unsigned __int8)sub_141059410(aForceClose, 11, v122, a9)
                  && !(unsigned __int8)sub_141059410(aForceClose_0, 11, v122, a9)
                  && !(unsigned __int8)sub_141059410(aQuietWindow, 12, v122, a9)
                  && !(unsigned __int8)sub_141059410(aTransitionFenc, 16, v122, a9)
                  && !(unsigned __int8)sub_141059410(aReEntry, 8, v122, a9)
                  && !(unsigned __int8)sub_141059410(aReentry, 7, v122, a9)
                  && !(unsigned __int8)sub_141059410(aFailedToStop, 14, v122, a9)
                  && !(unsigned __int8)sub_141059410(aStillRunning, 13, v122, a9)
                  && !(unsigned __int8)sub_141059410(asc_141A700FF, 18, a8, a9)
                  && !(unsigned __int8)sub_141059410(asc_141A70111, 18, a8, a9)
                  && !(unsigned __int8)sub_141059410(asc_141A70123, 12, a8, a9) )
                {
                  v71 = (const __m128i *)&unk_141A70260;
                  v21 = 16;
                  if ( (unsigned __int8)sub_141059410(aThread_2, 6, v122, a9)
                    || (unsigned __int8)sub_141059410(aRollout_2, 7, v122, a9)
                    || (unsigned __int8)sub_141059410(asc_141A7013C, 6, a8, a9) )
                  {
                    goto LABEL_101;
                  }
                  v71 = (const __m128i *)&unk_141A70251;
                  if ( !(unsigned __int8)sub_141059410(aTakeover, 8, v122, a9)
                    && !(unsigned __int8)sub_141059410(aBackup, 6, v122, a9)
                    && !(unsigned __int8)sub_141059410(asc_141A7014A, 6, a8, a9) )
                  {
                    v21 = 15;
                    if ( !(unsigned __int8)sub_141059410(asc_141A70150, 6, a8, a9) )
                    {
                      v21 = 13;
                      if ( (unsigned __int8)sub_141059410(aModelCatalog_0, 13, v122, a9) )
                      {
                        v71 = (const __m128i *)&unk_141A70163;
                      }
                      else
                      {
                        v71 = (const __m128i *)&unk_141A70163;
                        if ( !(unsigned __int8)sub_141059410(&unk_141A70163, 13, v122, a9)
                          && !(unsigned __int8)sub_141059410(aCatalog_1, 7, v122, a9)
                          && !(unsigned __int8)sub_141059410(asc_141A70177, 12, a8, a9)
                          && !(unsigned __int8)sub_141059410(asc_141A70183, 12, a8, a9) )
                        {
                          v71 = (const __m128i *)&unk_141A70244;
                          if ( !(unsigned __int8)sub_141059410(aProject, 7, v122, a9)
                            && !(unsigned __int8)sub_141059410(aWorkspaceRoot, 14, v122, a9)
                            && !(unsigned __int8)sub_141059410(asc_141A701A4, 6, a8, a9)
                            && !(unsigned __int8)sub_141059410(asc_141A701AA, 9, a8, a9) )
                          {
                            v71 = (const __m128i *)&unk_141A70239;
                            v21 = 11;
                            if ( !(unsigned __int8)sub_141059410(aConfig_7, 6, v122, a9)
                              && !(unsigned __int8)sub_141059410(aToml, 4, v122, a9)
                              && !(unsigned __int8)sub_141059410(aManagedBlock, 13, v122, a9)
                              && !(unsigned __int8)sub_141059410(asc_141A701CA, 6, a8, a9) )
                            {
                              v71 = (const __m128i *)&unk_141A701D0;
                              v21 = 4;
                              if ( !(unsigned __int8)sub_141059410(&unk_141A701D0, 4, v122, a9)
                                && !(unsigned __int8)sub_141059410(aLogin, 5, v122, a9)
                                && !(unsigned __int8)sub_141059410(aToken_5, 5, v122, a9)
                                && !(unsigned __int8)sub_141059410(asc_141A701D9, 6, a8, a9)
                                && !(unsigned __int8)sub_141059410(asc_141A701DF, 6, a8, a9)
                                && !(unsigned __int8)sub_141059410(asc_141A701E5, 6, a8, a9) )
                              {
                                v71 = (const __m128i *)&unk_141A7022C;
                                v21 = 13;
                                if ( !(unsigned __int8)sub_141059410(aPersist_0, 7, v122, a9)
                                  && !(unsigned __int8)sub_141059410(aRelayState, 11, v122, a9)
                                  && !(unsigned __int8)sub_141059410(asc_141A701FD, 9, a8, a9)
                                  && !(unsigned __int8)sub_141059410(asc_141A70206, 12, a8, a9) )
                                {
                                  v71 = (const __m128i *)aProxy_5;
                                  v21 = 5;
                                  if ( !(unsigned __int8)sub_141059410(aProxy_5, 5, v122, a9)
                                    && !(unsigned __int8)sub_141059410("portcodexBaseUrl", 4, v122, a9)
                                    && !(unsigned __int8)sub_141059410(asc_141A70212, 6, a8, a9)
                                    && !(unsigned __int8)sub_141059410(asc_141A70218, 6, a8, a9) )
                                  {
                                    v71 = (const __m128i *)&unk_141A6DA00;
                                    if ( (unsigned __int8)sub_141059410(&unk_141A6DA00, 9, v122, a9)
                                      || (unsigned __int8)sub_141059410(aAlreadyStable, 14, v122, a9) )
                                    {
                                      v21 = 9;
                                    }
                                    else
                                    {
                                      v71 = (const __m128i *)&dword_141A6A003;
                                      v21 = 7;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LABEL_101;
                  }
                }
                v21 = 15;
LABEL_101:
                if ( a9 )
                  sub_140001660(v122, a9, 1);
                nullsub_1(v70);
                v72 = (__m128i *)sub_140001650(v21, 1);
                if ( !v72 )
                  sub_141938D2B(1, v21);
                v16 = v72;
                sub_1418F44E0(v72, v71, v21);
                goto LABEL_105;
              }
            }
            else
            {
              v32 = 0;
            }
            v55 = v32;
            v32 = a9 & 0x7FFFFFFFFFFFFFF8LL;
            v56 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
            v57 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
            v58 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
            do
            {
              v59 = _mm_loadl_epi64((__m128i *)((char *)v30 + v55));
              v60 = _mm_add_epi8(v59, v56);
              *(__int64 *)((char *)v30->m128i_i64 + v55) = _mm_or_si128(
                                                             _mm_andnot_si128(
                                                               _mm_cmpeq_epi8(_mm_max_epu8(v60, v57), v60),
                                                               v58),
                                                             v59).m128i_u64[0];
              v55 += 8;
            }
            while ( v32 != v55 );
            goto LABEL_72;
          }
          v118 = 9;
          if ( (unsigned __int8)sub_141059410(aAuthMode_2, 9, v119, a7) )
          {
            v16 = (const __m128i *)&unk_141A702F1;
            goto LABEL_51;
          }
          v118 = 11;
          if ( (unsigned __int8)sub_141059410(aModelSlots, 11, v119, a7) )
          {
            v16 = (const __m128i *)&unk_141A702E6;
            goto LABEL_51;
          }
          if ( (unsigned __int8)sub_141059410(aRouterToggle_0, 13, v119, a7) )
          {
            v16 = (const __m128i *)&dword_141A6BB3B;
          }
          else
          {
            v16 = (const __m128i *)&unk_141A702D2;
            if ( !(unsigned __int8)sub_141059410(&unk_141A702D2, 6, v119, a7)
              && !(unsigned __int8)sub_141059410(aReconcile_0, 9, v119, a7) )
            {
              v16 = (const __m128i *)&unk_141A702E1;
              v62 = 5;
              goto LABEL_50;
            }
          }
          v62 = 6;
        }
LABEL_50:
        v118 = v62;
LABEL_51:
        v63 = a7;
        v64 = v119;
        goto LABEL_55;
      }
    }
    else
    {
      v27 = 0;
      v28 = (__int64)v26;
    }
    v41 = v27;
    v27 = a7 & 0x7FFFFFFFFFFFFFF8LL;
    v42 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
    v43 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
    v44 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
    do
    {
      v45 = _mm_loadl_epi64((const __m128i *)(v28 + v41));
      v46 = _mm_add_epi8(v45, v42);
      *(_QWORD *)(v28 + v41) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v46, v43), v46), v44), v45).m128i_u64[0];
      v41 += 8;
    }
    while ( v27 != v41 );
    goto LABEL_47;
  }
  v118 = -1;
  if ( a8 )
    goto LABEL_15;
LABEL_105:
  v73 = v119;
  v74 = 1000
      * (v110
       + 86400LL * (int)(((1461 * v18) >> 2) + v19 + ((v17 >> 4) & 0x1FF) - v18 / 100 + ((v18 / 100) >> 2) - 719163))
      + ((unsigned __int64)(1125899907 * v117) >> 50);
  v96[0] = 1;
  v95 = a3;
  v75 = a5;
  v91[0] = a5;
  v76 = v108;
  v91[1] = v108;
  v91[2] = a5;
  v94 = v74;
  v77 = v118;
  v92[0] = v118;
  v92[1] = v119;
  v92[2] = v118;
  v93[0] = v21;
  v93[1] = v16;
  v93[2] = v21;
  nullsub_1(v74);
  v78 = (_BYTE *)sub_140001650(128, 1);
  if ( !v78 )
    sub_141938D2B(1, 128);
  v100.m128i_i64[0] = 128;
  v100.m128i_i64[1] = (__int64)v78;
  v112 = (__int64)&v100;
  *v78 = 123;
  v101 = 1;
  v115.m128i_i16[0] = 256;
  v115.m128i_i64[1] = (__int64)&v112;
  v79 = sub_140C0EFD0(&v115, aSchemaversion_3, 13, v96);
  if ( v79 )
    goto LABEL_110;
  if ( v115.m128i_i8[0] )
    goto LABEL_108;
  v79 = sub_140C0CF80(&v115, aTarget_2, 6, &v95);
  if ( v79 )
  {
LABEL_110:
    if ( v100.m128i_i64[0] )
      sub_140001660(v100.m128i_i64[1], v100.m128i_i64[0], 1);
LABEL_112:
    v98 = v79;
    v97 = -1;
    result = sub_14002F910(&v98);
    if ( !a5 )
      goto LABEL_114;
    goto LABEL_113;
  }
  if ( v115.m128i_i8[0] )
    goto LABEL_108;
  v79 = sub_140C05820(&v115, aPhase_2, 5, v91);
  if ( v79 )
    goto LABEL_110;
  if ( v115.m128i_i8[0] )
    goto LABEL_108;
  v79 = sub_140C0FA80(&v115, aOccurredatms_0, 12, &v94);
  if ( v79 )
    goto LABEL_110;
  if ( (_DWORD)v77 == -1 )
    goto LABEL_126;
  if ( v115.m128i_i8[0] )
  {
LABEL_108:
    v79 = sub_141934E70();
    goto LABEL_110;
  }
  v79 = sub_140BFF8D0(&v115, aSource_7, 6, v92);
  if ( v79 )
    goto LABEL_110;
LABEL_126:
  if ( v115.m128i_i8[0] )
    goto LABEL_108;
  v79 = sub_140BFF8D0(&v115, aReason_1, 6, v93);
  if ( v79 )
    goto LABEL_110;
  if ( (v115.m128i_i8[0] & 1) == 0 && v115.m128i_i8[1] )
    sub_1403B45A0(*(_QWORD *)v115.m128i_i64[1], &unk_141A6C879, 1);
  v110 = v100.m128i_i64[1];
  v122 = v100.m128i_i64[0];
  if ( v100.m128i_i64[0] == -1 )
  {
    v76 = v108;
    v77 = v118;
    v73 = v119;
    v79 = v110;
    goto LABEL_112;
  }
  v81 = v101;
  v120 = 1;
  sub_1416828D0((unsigned int)&v97, v111, v109, (unsigned int)&unk_141A6FF04, 19);
  v82 = v99;
  v121 = 1;
  v109 = v98;
  sub_14169D1D0(&v112, v98, v99);
  v117 = v113;
  v111 = v112;
  if ( v112 == -1 )
    goto LABEL_137;
  v100.m128i_i64[0] = 0;
  v100.m128i_i64[1] = v114;
  v101 = v117;
  v102 = v114;
  v103 = 0;
  v104 = v114;
  v105 = 0xA0000000ALL;
  v106 = 1;
  v107 = 0;
  sub_1403D3D70(&v115, &v100);
  if ( v111 )
    sub_140001660(v117, v111, 1);
  v117 = v115.m128i_i64[1];
  v83 = v115.m128i_i64[0];
  if ( v115.m128i_i64[0] == -1 )
  {
LABEL_137:
    v112 = 0;
    v113 = 8;
    v114 = 0;
    v83 = 0;
    if ( (unsigned int)(v117 & 3) - 2 >= 2 )
    {
      v84 = 0;
      if ( (v117 & 3) != 0 )
      {
        v100.m128i_i64[1] = v117 - 1;
        v100.m128i_i8[0] = 3;
        v121 = 1;
        sub_1416BCB00(&v100.m128i_u64[1]);
        v83 = v112;
        v84 = v114;
      }
    }
    else
    {
      v84 = 0;
    }
  }
  else
  {
    v84 = v116;
    v112 = v115.m128i_i64[0];
    v113 = v117;
    v114 = v116;
  }
  if ( v84 == v83 )
    sub_14190FDC0(&v112);
  v85 = v113;
  v86 = 3 * v84;
  *(_QWORD *)(v113 + 8 * v86) = v122;
  *(_QWORD *)(v85 + 8 * v86 + 8) = v110;
  *(_QWORD *)(v85 + 8 * v86 + 16) = v81;
  v87 = v84 + 1;
  v114 = v84 + 1;
  if ( v84 >= 200 )
  {
    sub_1403797C0(&v100, &v112, 0, v84 - 199);
    sub_140C9BF20(&v100);
    v87 = v114;
  }
  sub_140D1EE10((unsigned int)&v100, v113, v87, (unsigned int)&unk_141A6C878, 1);
  v88 = v101;
  v116 = v101;
  v115 = _mm_loadu_si128(&v100);
  if ( v115.m128i_i64[0] == v101 )
    sub_14190D590((unsigned int)&v115, v101, 1, 1, 1);
  v89 = v115.m128i_i64[1];
  *(_BYTE *)(v115.m128i_i64[1] + v88) = 10;
  if ( (sub_140222E10(v109, v82, v89, v88 + 1) & 1) != 0 )
  {
    if ( (v90 & 3) - 2 >= 2 && (v90 & 3) != 0 )
    {
      v100.m128i_i64[1] = v90 - 1;
      v100.m128i_i8[0] = 3;
      sub_1416BCB00(&v100.m128i_u64[1]);
    }
  }
  else
  {
    sub_1401BD710(v90, v90);
  }
  if ( v115.m128i_i64[0] )
    sub_140001660(v89, v115.m128i_i64[0], 1);
  sub_1403FAE40(&v112);
  result = v112;
  if ( v112 )
    result = sub_140001660(v113, 24 * v112, 8);
  if ( v97 )
    result = sub_140001660(v109, v97, 1);
  v75 = a5;
  v76 = v108;
  v77 = v118;
  v73 = v119;
  if ( a5 )
LABEL_113:
    result = sub_140001660(v76, v75, 1);
LABEL_114:
  if ( (_DWORD)v77 != -1 )
    result = sub_140001660(v73, v77, 1);
  if ( (_DWORD)v21 != -1 )
    return sub_140001660(v16, v21, 1);
  return result;
}
