// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = set_codex_router_no_account_mode | mapped via command-name string xref (win-native, ground-truth)
char __fastcall set_codex_router_no_account_mode(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int8 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rsi
  char v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 *v17; // r14
  _QWORD *v18; // r13
  __int64 v19; // rdi
  char v20; // of
  __int64 v21; // rcx
  char v22; // bl
  char v23; // di
  __int128 v24; // rax
  __int64 v25; // rt0
  __int64 v26; // rt0
  volatile signed __int64 *v27; // r8
  __int64 v28; // rt0
  volatile signed __int64 *v29; // r9
  __int64 v30; // rt0
  volatile signed __int64 *v31; // r10
  __int64 v32; // rt0
  volatile signed __int64 *v33; // r11
  __int64 v34; // rt0
  volatile signed __int64 *v35; // r14
  volatile signed __int64 *v36; // rcx
  char v37; // of
  __int64 v38; // r12
  volatile signed __int64 *v39; // r14
  __int64 v40; // rt0
  volatile signed __int64 *v41; // r15
  __int64 v42; // rt0
  char v43; // cl
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  const char *v50; // rbx
  __int64 v51; // r14
  _BYTE *v52; // rdx
  __int64 *v53; // rdi
  __int64 v54; // rdi
  unsigned __int64 v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // rdi
  const char *v58; // r15
  __int64 v59; // r14
  __int64 v60; // rax
  char v61; // cl
  char result; // al
  __int64 v63; // rdi
  __int64 v64; // r12
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // rax
  unsigned __int8 v68; // di
  __int64 v69; // rax
  unsigned __int64 v70; // r12
  __int64 v71; // rcx
  unsigned __int64 v72; // r14
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 *v75; // rcx
  __int64 *v76; // r15
  __int64 v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rbx
  _QWORD *v80; // rsi
  _BYTE v81[368]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v82[136]; // [rsp+1A0h] [rbp+120h] BYREF
  volatile signed __int64 *v83; // [rsp+228h] [rbp+1A8h]
  volatile signed __int64 *v84; // [rsp+230h] [rbp+1B0h]
  _QWORD v85[2]; // [rsp+238h] [rbp+1B8h] BYREF
  __int128 v86; // [rsp+248h] [rbp+1C8h]
  _BYTE v87[296]; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v88; // [rsp+380h] [rbp+300h] BYREF
  __int64 v89; // [rsp+388h] [rbp+308h]
  __int64 v90; // [rsp+390h] [rbp+310h]
  __m256i v91; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v92; // [rsp+510h] [rbp+490h]
  __int128 v93; // [rsp+520h] [rbp+4A0h]
  __int128 v94; // [rsp+530h] [rbp+4B0h]
  __int64 v95; // [rsp+540h] [rbp+4C0h]
  __int128 v96; // [rsp+608h] [rbp+588h]
  __int64 v97; // [rsp+618h] [rbp+598h]
  __int128 *v98; // [rsp+628h] [rbp+5A8h] BYREF
  __int64 (__fastcall **v99)(); // [rsp+630h] [rbp+5B0h]
  __int64 v100; // [rsp+638h] [rbp+5B8h]
  __int128 v101; // [rsp+750h] [rbp+6D0h]
  __int64 v102; // [rsp+760h] [rbp+6E0h]
  char v103; // [rsp+768h] [rbp+6E8h]
  __int128 v104; // [rsp+770h] [rbp+6F0h] BYREF
  __int64 v105; // [rsp+780h] [rbp+700h]
  unsigned __int128 v106; // [rsp+788h] [rbp+708h]
  _OWORD v107[23]; // [rsp+798h] [rbp+718h] BYREF
  const char *v108; // [rsp+910h] [rbp+890h] BYREF
  __int64 v109; // [rsp+918h] [rbp+898h]
  __int64 v110; // [rsp+920h] [rbp+8A0h]
  __int64 v111; // [rsp+928h] [rbp+8A8h]
  __int64 v112; // [rsp+930h] [rbp+8B0h]
  __int64 v113; // [rsp+938h] [rbp+8B8h]
  __int64 v114; // [rsp+940h] [rbp+8C0h]
  __int128 v115; // [rsp+A80h] [rbp+A00h]
  __int128 v116; // [rsp+A90h] [rbp+A10h]
  __int128 v117; // [rsp+AA0h] [rbp+A20h]
  __int128 v118; // [rsp+AB0h] [rbp+A30h]
  __int64 v119; // [rsp+AC0h] [rbp+A40h] BYREF
  __int8 v120; // [rsp+AC8h] [rbp+A48h]
  char v121; // [rsp+AC9h] [rbp+A49h]
  int v122; // [rsp+ACAh] [rbp+A4Ah]
  __int16 v123; // [rsp+ACEh] [rbp+A4Eh]
  __int64 v124; // [rsp+AD0h] [rbp+A50h]
  __int64 v125; // [rsp+AD8h] [rbp+A58h]
  __int64 v126; // [rsp+AE0h] [rbp+A60h]
  __int64 v127; // [rsp+AE8h] [rbp+A68h]
  const char *v128; // [rsp+AF0h] [rbp+A70h] BYREF
  __m256i v129; // [rsp+AF8h] [rbp+A78h] BYREF
  __int128 v130; // [rsp+B18h] [rbp+A98h] BYREF
  __int128 v131; // [rsp+B28h] [rbp+AA8h]
  __int128 v132; // [rsp+B38h] [rbp+AB8h]
  __int128 v133; // [rsp+B48h] [rbp+AC8h]
  __int128 v134; // [rsp+B58h] [rbp+AD8h]
  __int128 v135; // [rsp+B68h] [rbp+AE8h]
  __int128 v136; // [rsp+B78h] [rbp+AF8h]
  __int128 v137; // [rsp+B88h] [rbp+B08h]
  __int128 v138; // [rsp+B98h] [rbp+B18h]
  __int128 v139; // [rsp+BA8h] [rbp+B28h]
  __int128 v140; // [rsp+BB8h] [rbp+B38h]
  char v141; // [rsp+BC8h] [rbp+B48h]
  char v142; // [rsp+BC9h] [rbp+B49h]
  __int64 v143; // [rsp+C88h] [rbp+C08h]
  __int128 v144; // [rsp+C90h] [rbp+C10h] BYREF
  __int64 v145; // [rsp+CA0h] [rbp+C20h]
  _QWORD *v146; // [rsp+CB0h] [rbp+C30h]
  __int64 *v147; // [rsp+CB8h] [rbp+C38h]
  __int64 v148; // [rsp+CC0h] [rbp+C40h]
  unsigned __int64 v149; // [rsp+CC8h] [rbp+C48h]
  char v150; // [rsp+CD7h] [rbp+C57h] BYREF
  __int64 *v151; // [rsp+CD8h] [rbp+C58h]
  __int64 v152; // [rsp+CE0h] [rbp+C60h]
  char v153; // [rsp+CEFh] [rbp+C6Fh]
  __int64 v154; // [rsp+CF0h] [rbp+C70h]
  char v155; // [rsp+CFFh] [rbp+C7Fh]
  __int64 v156; // [rsp+D00h] [rbp+C80h]

  v156 = -2; /*0x140cb806b*/
  v4 = a2; /*0x140cb8076*/
  v5 = a1; /*0x140cb8079*/
  v6 = *(unsigned __int8 *)(a1 + 3536); /*0x140cb807c*/
  v154 = a1; /*0x140cb8091*/
  switch ( v6 ) /*0x140cb8098*/
  {
    case 0LL: /*0x140cb8098*/
      *(_WORD *)(a1 + 3537) = 257; /*0x140cb809a*/
      *(_BYTE *)(a1 + 3539) = 1; /*0x140cb80a5*/
      v7 = a1 + 1960; /*0x140cb80b6*/
      sub_141684120(a1 + 1960, a1 + 392, 1568); /*0x140cb80c7*/
      switch ( *(_BYTE *)(v5 + 3520) ) /*0x140cb80e3*/
      {
        case 0: /*0x140cb80e3*/
          goto LABEL_4;
        case 1: /*0x140cb80e3*/
          goto LABEL_93;
        case 2: /*0x140cb80e3*/
          goto LABEL_92;
        case 3: /*0x140cb80e3*/
          goto LABEL_8;
      }
    case 1LL: /*0x140cb8098*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140cb9246*/
    case 2LL: /*0x140cb8098*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140cb9238*/
    case 3LL: /*0x140cb8098*/
      v7 = a1 + 1960; /*0x140cb80e5*/
      switch ( *(_BYTE *)(a1 + 3520) ) /*0x140cb8104*/
      {
        case 0: /*0x140cb8104*/
LABEL_4:
          v149 = v4; /*0x140cb8106*/
          v114 = 0; /*0x140cb8115*/
          v108 = aSetCodexRouter; /*0x140cb8127*/
          v109 = 32; /*0x140cb812e*/
          v110 = (__int64)aApp_2; /*0x140cb8140*/
          v111 = 3; /*0x140cb8147*/
          v152 = v7; /*0x140cb8152*/
          v112 = v7; /*0x140cb8159*/
          v151 = (__int64 *)(v5 + 2480); /*0x140cb8160*/
          v113 = v5 + 2480; /*0x140cb8167*/
          sub_1401C3650(&v128, &v108); /*0x140cb817c*/
          v8 = *(unsigned int *)((char *)v129.m256i_u32 + 2) | ((unsigned __int64)v129.m256i_u16[3] << 32); /*0x140cb819b*/
          v9 = v129.m256i_i8[0]; /*0x140cb819e*/
          LOBYTE(v10) = v129.m256i_i8[1]; /*0x140cb81a6*/
          v11 = v129.m256i_i64[2]; /*0x140cb81bc*/
          v12 = v129.m256i_i64[1]; /*0x140cb81bc*/
          if ( v128 == (const char *)-1LL ) /*0x140cb81c7*/
          {
            v148 = v129.m256i_i64[3]; /*0x140cb868a*/
            goto LABEL_53; /*0x140cb8691*/
          }
          v107[6] = v136; /*0x140cb81d4*/
          v107[5] = v135; /*0x140cb81e2*/
          v107[4] = v134; /*0x140cb81f0*/
          v107[3] = v133; /*0x140cb8213*/
          v107[2] = v132; /*0x140cb821a*/
          v107[1] = v131; /*0x140cb8221*/
          v107[0] = v130; /*0x140cb8228*/
          *(_DWORD *)((char *)&v104 + 10) = *(__int32 *)((char *)v129.m256i_i32 + 2); /*0x140cb822f*/
          HIWORD(v104) = WORD2(v8); /*0x140cb823a*/
          v106 = *(_OWORD *)&v129.m256i_u64[2]; /*0x140cb8242*/
          *(_QWORD *)&v104 = v128; /*0x140cb8250*/
          WORD4(v104) = v129.m256i_i16[0]; /*0x140cb8257*/
          v105 = v129.m256i_i64[1]; /*0x140cb8265*/
          v128 = aSetCodexRouter; /*0x140cb8277*/
          v129.m256i_i64[0] = 32; /*0x140cb827e*/
          v129.m256i_i64[1] = (__int64)aManager_1; /*0x140cb8290*/
          v129.m256i_i64[2] = 7; /*0x140cb8297*/
          v129.m256i_i64[3] = v152; /*0x140cb82a9*/
          v130 = (unsigned __int64)v151; /*0x140cb82b7*/
          v13 = sub_140004B10((volatile void *)(*(_QWORD *)(v154 + 2472) + 16LL)); /*0x140cb82d6*/
          if ( v13 ) /*0x140cb82dc*/
            goto LABEL_6; /*0x140cb82dc*/
          sub_1416850A0(&v108, &v128, &v129.m256i_u64[1]); /*0x140cb89e0*/
          v9 = (char)v108; /*0x140cb89e6*/
          if ( (_BYTE)v108 == 0xFF ) /*0x140cb89f2*/
          {
            v13 = v109; /*0x140cb9115*/
LABEL_6:
            v128 = aSetCodexRouter; /*0x140cb82e2*/
            v129.m256i_i64[0] = 32; /*0x140cb82fb*/
            v129.m256i_i64[1] = (__int64)aEnabled_7; /*0x140cb830d*/
            v129.m256i_i64[2] = 7; /*0x140cb8314*/
            v129.m256i_i64[3] = v152; /*0x140cb831f*/
            v130 = (unsigned __int64)v151; /*0x140cb832d*/
            sub_1401BCE80(&v108, &v128); /*0x140cb8342*/
            v9 = (char)v108; /*0x140cb8348*/
            v14 = BYTE1(v108); /*0x140cb8350*/
            if ( (_BYTE)v108 != 0xFF ) /*0x140cb835c*/
            {
              v15 = *(unsigned int *)((char *)&v108 + 2); /*0x140cb8362*/
              v16 = HIWORD(v108); /*0x140cb8368*/
              v12 = v109; /*0x140cb8370*/
              v11 = v110; /*0x140cb8377*/
              v148 = v111; /*0x140cb8385*/
              sub_140014150(&v104); /*0x140cb8393*/
              v8 = v15 | (v16 << 32); /*0x140cb839d*/
              LOBYTE(v10) = v14; /*0x140cb83a0*/
              goto LABEL_53; /*0x140cb83a3*/
            }
            v128 = aSetCodexRouter; /*0x140cb8a46*/
            v129.m256i_i64[0] = 32; /*0x140cb8a4d*/
            v129.m256i_i64[1] = (__int64)aRelaunch; /*0x140cb8a5f*/
            v129.m256i_i64[2] = 8; /*0x140cb8a66*/
            v129.m256i_i64[3] = v152; /*0x140cb8a78*/
            v130 = (unsigned __int64)v151; /*0x140cb8a86*/
            sub_140974DE0(&v108, &v128); /*0x140cb8a9b*/
            v9 = (char)v108; /*0x140cb8aa1*/
            LOBYTE(v10) = BYTE1(v108); /*0x140cb8aa9*/
            if ( (_BYTE)v108 == 0xFF ) /*0x140cb8ab5*/
            {
              v5 = v154; /*0x140cb9121*/
              v79 = v154 + 2504; /*0x140cb9128*/
              sub_141684120(v154 + 2504, &v104, 152); /*0x140cb9140*/
              *(_QWORD *)(v5 + 2656) = v13; /*0x140cb9145*/
              *(_BYTE *)(v5 + 2832) = v14; /*0x140cb914d*/
              *(_BYTE *)(v5 + 2833) = v10; /*0x140cb9155*/
              *(_BYTE *)(v5 + 2834) = 0; /*0x140cb915d*/
              v18 = (_QWORD *)(v5 + 2840); /*0x140cb9166*/
              sub_141684120(v5 + 2840, v79, 336); /*0x140cb917a*/
              v17 = (__int64 *)(v5 + 3512); /*0x140cb917f*/
              *(_BYTE *)(v5 + 3512) = 0; /*0x140cb9187*/
              v7 = v152; /*0x140cb9190*/
              v4 = v149; /*0x140cb9197*/
LABEL_9:
              v19 = v5 + 3176; /*0x140cb83d1*/
              sub_141684120(v5 + 3176, v18, 336); /*0x140cb83e5*/
              switch ( *(_BYTE *)(v5 + 3506) ) /*0x140cb8401*/
              {
                case 0: /*0x140cb8401*/
                  goto LABEL_11;
                case 1: /*0x140cb8401*/
                  goto LABEL_95;
                case 2: /*0x140cb8401*/
                  goto LABEL_94;
                case 3: /*0x140cb8401*/
                  goto LABEL_30;
              }
            }
            v63 = *(unsigned int *)((char *)&v108 + 2); /*0x140cb8abb*/
            v64 = HIWORD(v108); /*0x140cb8ac1*/
            v12 = v109; /*0x140cb8ac9*/
            v11 = v110; /*0x140cb8ad0*/
            v148 = v111; /*0x140cb8ade*/
            sub_140014150(&v104); /*0x140cb8aec*/
          }
          else
          {
            LOBYTE(v10) = BYTE1(v108); /*0x140cb89f8*/
            v63 = *(unsigned int *)((char *)&v108 + 2); /*0x140cb89ff*/
            v64 = HIWORD(v108); /*0x140cb8a05*/
            v12 = v109; /*0x140cb8a0d*/
            v11 = v110; /*0x140cb8a14*/
            v148 = v111; /*0x140cb8a22*/
            sub_140014150(&v104); /*0x140cb8a30*/
          }
          v8 = v63 | (v64 << 32); /*0x140cb8af6*/
LABEL_53:
          sub_140BF0DE0(v152); /*0x140cb8af9*/
          if ( *v151 == -1 ) /*0x140cb8b11*/
          {
            v68 = 1; /*0x140cb8ba4*/
            goto LABEL_77; /*0x140cb8ba7*/
          }
          v146 = (_QWORD *)(v154 + 2488); /*0x140cb8b25*/
          v65 = *(_QWORD *)(v154 + 2488); /*0x140cb8b2c*/
          v147 = *(__int64 **)(v154 + 2496); /*0x140cb8b3a*/
          v149 = 0; /*0x140cb8b41*/
          v127 = v65; /*0x140cb8b4c*/
          while ( v147 != (__int64 *)v149 ) /*0x140cb8b6e*/
          {
            ++v149; /*0x140cb8b73*/
            v66 = v65 + 96; /*0x140cb8b7a*/
            sub_1402C7520(); /*0x140cb8b7e*/
            v65 = v66; /*0x140cb8b84*/
          }
          v67 = *v151; /*0x140cb8b90*/
          v68 = 1; /*0x140cb8b93*/
          if ( !*v151 ) /*0x140cb8b90*/
            goto LABEL_77; /*0x140cb8b99*/
          goto LABEL_76; /*0x140cb8b99*/
        case 1: /*0x140cb8104*/
LABEL_93:
          v152 = v7; /*0x140cb9266*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140cb9274*/
        case 2: /*0x140cb8104*/
LABEL_92:
          v152 = v7; /*0x140cb924d*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140cb925b*/
        case 3: /*0x140cb8104*/
          goto LABEL_8;
      }
  }
LABEL_8:
  v17 = (__int64 *)(v5 + 3512); /*0x140cb83a8*/
  v18 = (_QWORD *)(v5 + 2840); /*0x140cb83b9*/
  switch ( *(_BYTE *)(v5 + 3512) ) /*0x140cb83cf*/
  {
    case 0: /*0x140cb83cf*/
      goto LABEL_9;
    case 1: /*0x140cb83cf*/
      v152 = v7; /*0x140cb92f2*/
      v143 = v5 + 2840; /*0x140cb92f9*/
      sub_1416C3400(&off_1417B7B80, a2, a3, a4); /*0x140cb9307*/
    case 2: /*0x140cb83cf*/
      v152 = v7; /*0x140cb92d5*/
      v143 = v5 + 2840; /*0x140cb92dc*/
      sub_1416C3420(&off_1417B7B80, a2, a3, a4); /*0x140cb92ea*/
    case 3: /*0x140cb83cf*/
      v19 = v5 + 3176; /*0x140cb8403*/
      switch ( *(_BYTE *)(v5 + 3506) ) /*0x140cb8422*/
      {
        case 0: /*0x140cb8422*/
LABEL_11:
          v149 = v4; /*0x140cb8424*/
          *(_WORD *)(v5 + 3507) = 0; /*0x140cb842b*/
          v148 = v19; /*0x140cb8447*/
          sub_141684120(v5 + 3336, v19, 152); /*0x140cb8451*/
          v21 = *(_QWORD *)(v5 + 3328); /*0x140cb8456*/
          *(_QWORD *)(v5 + 3488) = v21; /*0x140cb845e*/
          v22 = *(_BYTE *)(v5 + 3504); /*0x140cb8466*/
          v23 = *(_BYTE *)(v5 + 3505); /*0x140cb846f*/
          *(_QWORD *)&v24 = *(_QWORD *)v21; /*0x140cb8478*/
          v25 = _InterlockedIncrement64(*(volatile signed __int64 **)v21); /*0x140cb847b*/
          if ( (v25 < 0) ^ v20 | (v25 == 0) ) /*0x140cb847f*/
            goto LABEL_99; /*0x140cb847f*/
          *((_QWORD *)&v24 + 1) = *(_QWORD *)(v21 + 8); /*0x140cb8485*/
          v26 = _InterlockedIncrement64(*((volatile signed __int64 **)&v24 + 1)); /*0x140cb8489*/
          if ( (v26 < 0) ^ v20 | (v26 == 0) ) /*0x140cb848d*/
            goto LABEL_99; /*0x140cb848d*/
          v27 = *(volatile signed __int64 **)(v21 + 16); /*0x140cb8493*/
          v28 = _InterlockedIncrement64(v27); /*0x140cb8497*/
          if ( (v28 < 0) ^ v20 | (v28 == 0) ) /*0x140cb849b*/
            goto LABEL_99; /*0x140cb849b*/
          v29 = *(volatile signed __int64 **)(v21 + 24); /*0x140cb84a1*/
          v30 = _InterlockedIncrement64(v29); /*0x140cb84a5*/
          if ( (v30 < 0) ^ v20 | (v30 == 0) ) /*0x140cb84a9*/
            goto LABEL_99; /*0x140cb84a9*/
          v31 = *(volatile signed __int64 **)(v21 + 32); /*0x140cb84af*/
          v32 = _InterlockedIncrement64(v31); /*0x140cb84b3*/
          if ( (v32 < 0) ^ v20 | (v32 == 0) ) /*0x140cb84b7*/
            goto LABEL_99; /*0x140cb84b7*/
          v151 = v17; /*0x140cb84bd*/
          v33 = *(volatile signed __int64 **)(v21 + 40); /*0x140cb84c4*/
          v34 = _InterlockedIncrement64(v33); /*0x140cb84c8*/
          if ( (v34 < 0) ^ v20 | (v34 == 0) ) /*0x140cb84cc*/
            goto LABEL_99; /*0x140cb84cc*/
          v35 = *(volatile signed __int64 **)(v21 + 56); /*0x140cb84d2*/
          if ( v35 ) /*0x140cb84d9*/
          {
            if ( _InterlockedIncrement64(v35) <= 0 ) /*0x140cb84df*/
              goto LABEL_99; /*0x140cb84df*/
          }
          v146 = v18; /*0x140cb84e5*/
          v152 = v7; /*0x140cb84ec*/
          v36 = *(volatile signed __int64 **)(v21 + 48); /*0x140cb84f3*/
          if ( _InterlockedIncrement64(v36) <= 0 ) /*0x140cb84fb*/
            goto LABEL_99; /*0x140cb84fb*/
          v115 = v24; /*0x140cb8501*/
          *(_QWORD *)&v116 = v27; /*0x140cb850f*/
          *((_QWORD *)&v116 + 1) = v29; /*0x140cb8516*/
          *(_QWORD *)&v117 = v31; /*0x140cb851d*/
          *((_QWORD *)&v117 + 1) = v33; /*0x140cb8524*/
          *((_QWORD *)&v118 + 1) = v35; /*0x140cb852b*/
          *(_QWORD *)&v118 = v36; /*0x140cb8532*/
          *(_BYTE *)(v5 + 3508) = 1; /*0x140cb8539*/
          sub_1401C50B0(&v128, v5 + 3336); /*0x140cb854c*/
          v38 = v154; /*0x140cb8552*/
          v39 = *(volatile signed __int64 **)(v154 + 3472); /*0x140cb8559*/
          v40 = _InterlockedIncrement64(v39); /*0x140cb8561*/
          if ( (v40 < 0) ^ v37 | (v40 == 0) /*0x140cb8577*/
            || (v41 = *(volatile signed __int64 **)(v38 + 3480),
                v42 = _InterlockedIncrement64(v41),
                (v42 < 0) ^ v37 | (v42 == 0)) )
          {
LABEL_99:
            BUG(); /*0x140cb930d*/
          }
          sub_141684120(v82, &v128, 136); /*0x140cb8594*/
          v83 = v39; /*0x140cb8599*/
          v84 = v41; /*0x140cb85a0*/
          *(_WORD *)(v38 + 3507) = 0; /*0x140cb85a7*/
          sub_141684120(&v128, v82, 152); /*0x140cb85c2*/
          v137 = v115; /*0x140cb85e7*/
          v138 = v116; /*0x140cb85ee*/
          v139 = v117; /*0x140cb85f5*/
          v140 = v118; /*0x140cb85fc*/
          v141 = v22; /*0x140cb8603*/
          v43 = 1; /*0x140cb860d*/
          if ( v23 != 2 ) /*0x140cb8612*/
            v43 = v23; /*0x140cb8612*/
          v142 = v43; /*0x140cb8615*/
          v44 = off_141EC8710; /*0x140cb861b*/
          v4 = v149; /*0x140cb8627*/
          if ( *((_DWORD *)off_141EC8710 + 24) ) /*0x140cb8622*/
          {
            v155 = 1; /*0x140cb91b1*/
            v80 = off_141EC8710; /*0x140cb91bf*/
            sub_1416984A3(off_141EC8710); /*0x140cb91c2*/
            v44 = v80; /*0x140cb91c7*/
          }
          if ( *((_DWORD *)v44 + 4) == 2 ) /*0x140cb8638*/
          {
            v45 = 704; /*0x140cb8642*/
            if ( *(_BYTE *)v44 ) /*0x140cb863a*/
              v45 = 472; /*0x140cb8647*/
            v46 = v44[1] + v45; /*0x140cb864b*/
            v155 = 0; /*0x140cb864f*/
            v47 = sub_140898980(v46, v44, &v128, &off_1417642A8); /*0x140cb8664*/
          }
          else
          {
            v48 = 704; /*0x140cb869f*/
            if ( *((_BYTE *)v44 + 64) ) /*0x140cb8696*/
              v48 = 472; /*0x140cb86a4*/
            v49 = v44[9] + v48; /*0x140cb86ac*/
            v155 = 0; /*0x140cb86b0*/
            v47 = sub_140898980(v49, v44 + 8, &v128, &off_141764290); /*0x140cb86c8*/
          }
          v5 = v154; /*0x140cb86ce*/
          *(_QWORD *)(v154 + 3496) = v47; /*0x140cb86d5*/
          break; /*0x140cb86d5*/
        case 1: /*0x140cb8422*/
LABEL_95:
          v148 = v19; /*0x140cb92aa*/
          v151 = v17; /*0x140cb92b1*/
          v146 = v18; /*0x140cb92b8*/
          JUMPOUT(0x140CB92BFLL); /*0x140cb92bf*/
        case 2: /*0x140cb8422*/
LABEL_94:
          v148 = v19; /*0x140cb927f*/
          v151 = v17; /*0x140cb9286*/
          v146 = v18; /*0x140cb928d*/
          v152 = v7; /*0x140cb9294*/
          sub_1416C3420(&off_1417BB060, a2, a3, a4); /*0x140cb92a2*/
        case 3: /*0x140cb8422*/
LABEL_30:
          v148 = v19; /*0x140cb866c*/
          v151 = v17; /*0x140cb8673*/
          v146 = v18; /*0x140cb867a*/
          v152 = v7; /*0x140cb8681*/
          break; /*0x140cb8688*/
      }
      v147 = (__int64 *)(v5 + 3496); /*0x140cb86ef*/
      sub_140B02D10(&v128, v5 + 3496, v4); /*0x140cb86f9*/
      v50 = v128; /*0x140cb86ff*/
      if ( v128 == (const char *)-3LL ) /*0x140cb870a*/
      {
        v52 = (_BYTE *)v154; /*0x140cb873a*/
        *(_BYTE *)(v154 + 3506) = 3; /*0x140cb8741*/
        goto LABEL_47; /*0x140cb8748*/
      }
      if ( v128 == (const char *)-2LL ) /*0x140cb8710*/
      {
        v145 = v129.m256i_i64[2]; /*0x140cb8719*/
        v144 = *(_OWORD *)v129.m256i_i8; /*0x140cb8727*/
        v51 = 0x800000000000000CuLL; /*0x140cb872e*/
      }
      else
      {
        v51 = v129.m256i_i64[0]; /*0x140cb874d*/
        v144 = *(_OWORD *)&v129.m256i_u64[1]; /*0x140cb875b*/
        v145 = v129.m256i_i64[3]; /*0x140cb8769*/
        sub_141684120(&v98, &v130, 288); /*0x140cb8784*/
      }
      v53 = v147; /*0x140cb8789*/
      *(_OWORD *)v91.m256i_i8 = v144; /*0x140cb8797*/
      v91.m256i_i64[2] = v145; /*0x140cb87a5*/
      sub_141684120(&v91.m256i_u64[3], &v98, 288); /*0x140cb87c0*/
      v54 = *v53; /*0x140cb87c5*/
      if ( (unsigned __int8)sub_1412F2A80(v54) ) /*0x140cb87cb*/
        sub_1412E7580(v54); /*0x140cb87d8*/
      if ( v50 == (const char *)-2LL ) /*0x140cb87e2*/
      {
        v128 = (const char *)v51; /*0x140cb87e8*/
        v129 = v91; /*0x140cb87fd*/
        *(_QWORD *)&v130 = v92; /*0x140cb8812*/
        *(_QWORD *)&v144 = &v128; /*0x140cb8819*/
        *((_QWORD *)&v144 + 1) = sub_141230630; /*0x140cb8827*/
        sub_14149C0F0(&v98, &unk_1417B8CB0, &v144); /*0x140cb8843*/
        sub_140BF0F60(&v128); /*0x140cb8850*/
        v55 = (unsigned __int64)v98; /*0x140cb8856*/
        v10 = (__int64)v99; /*0x140cb885d*/
        v12 = v100; /*0x140cb8864*/
LABEL_62:
        v69 = v154; /*0x140cb8c7d*/
        *(_BYTE *)(v154 + 3507) = 0; /*0x140cb8c84*/
        *(_BYTE *)(v69 + 3508) = 0; /*0x140cb8c8b*/
        sub_140014150(v69 + 3336); /*0x140cb8c99*/
        sub_141684120(&v88, &v108, 368); /*0x140cb8cb6*/
        *(_BYTE *)(v154 + 3506) = 1; /*0x140cb8cc2*/
        v70 = v55 >> 8; /*0x140cb8ccc*/
        sub_141684120(v81, &v88, 368); /*0x140cb8cdd*/
        goto LABEL_63; /*0x140cb8cdd*/
      }
      v56 = v154; /*0x140cb887b*/
      if ( v50 == (const char *)-1LL ) /*0x140cb8882*/
      {
        v128 = (const char *)v51; /*0x140cb8bac*/
        v129 = v91; /*0x140cb8bba*/
        v130 = v92; /*0x140cb8bd7*/
        v131 = v93; /*0x140cb8bde*/
        v132 = v94; /*0x140cb8be5*/
        *(_QWORD *)&v133 = v95; /*0x140cb8bf0*/
        *(_QWORD *)&v144 = 0; /*0x140cb8bf7*/
        *((_QWORD *)&v144 + 1) = 1; /*0x140cb8c02*/
        v145 = 0; /*0x140cb8c0d*/
        v100 = 1610612768; /*0x140cb8c18*/
        v98 = &v144; /*0x140cb8c2a*/
        v99 = &off_1417C41C0; /*0x140cb8c38*/
        if ( (unsigned __int8)sub_140B036A0(&v128, &v98) ) /*0x140cb8c4d*/
          sub_1416C3060( /*0x140cb91f5*/
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v150,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v10 = *((_QWORD *)&v144 + 1); /*0x140cb8c62*/
        v55 = v144; /*0x140cb8c62*/
        v12 = v145; /*0x140cb8c69*/
        sub_140BF2F60(&v128); /*0x140cb8c77*/
        goto LABEL_62; /*0x140cb8c77*/
      }
      sub_141684120(v87, &v91.m256i_u64[2], 296); /*0x140cb8895*/
      v85[1] = v51; /*0x140cb889a*/
      v86 = *(_OWORD *)v91.m256i_i8; /*0x140cb88a8*/
      v85[0] = v50; /*0x140cb88af*/
      v57 = v56 + 3336; /*0x140cb88b6*/
      v153 = 1; /*0x140cb88bd*/
      sub_1403F1620(v56 + 3336); /*0x140cb88c7*/
      sub_141684120(&v98, v85, 296); /*0x140cb88e4*/
      v101 = v96; /*0x140cb88f0*/
      v102 = v97; /*0x140cb88fe*/
      v103 = v87[288]; /*0x140cb890c*/
      v153 = 0; /*0x140cb8912*/
      sub_140ACEE90(&v128, &v98); /*0x140cb8923*/
      v58 = v128; /*0x140cb8929*/
      v10 = v129.m256i_i64[1]; /*0x140cb8937*/
      v55 = v129.m256i_i64[0]; /*0x140cb8937*/
      v59 = v129.m256i_i64[3]; /*0x140cb8945*/
      v12 = v129.m256i_i64[2]; /*0x140cb8945*/
      sub_141684120(&v108, &v130, 368); /*0x140cb8960*/
      v60 = v154; /*0x140cb8965*/
      *(_BYTE *)(v154 + 3507) = 0; /*0x140cb896c*/
      *(_BYTE *)(v60 + 3508) = 0; /*0x140cb8973*/
      sub_140014150(v57); /*0x140cb897d*/
      sub_141684120(&v88, &v108, 368); /*0x140cb8997*/
      v52 = (_BYTE *)v154; /*0x140cb899c*/
      *(_BYTE *)(v154 + 3506) = 1; /*0x140cb89a3*/
      if ( v58 == (const char *)-2LL ) /*0x140cb89ae*/
      {
LABEL_47:
        v52[3512] = 3; /*0x140cb89b4*/
        v52[3520] = 3; /*0x140cb89bb*/
        v61 = 3; /*0x140cb89c2*/
        result = 1; /*0x140cb89c4*/
        goto LABEL_78; /*0x140cb89c6*/
      }
      v70 = v55 >> 8; /*0x140cb8f46*/
      sub_141684120(v81, &v88, 368); /*0x140cb8f5e*/
      if ( v58 != (const char *)-1LL ) /*0x140cb8f67*/
      {
        sub_141684120(v107, v81, 368); /*0x140cb8f7e*/
        *(_QWORD *)&v104 = v58; /*0x140cb8f83*/
        BYTE8(v104) = v55; /*0x140cb8f8a*/
        *(_DWORD *)((char *)&v104 + 9) = v55 >> 8; /*0x140cb8f90*/
        HIBYTE(v104) = v55 >> 8 >> 48; /*0x140cb8f9e*/
        *(_WORD *)((char *)&v104 + 13) = HIDWORD(v55) >> 8; /*0x140cb8fa8*/
        v105 = v10; /*0x140cb8fb0*/
        v106 = __PAIR128__(v59, v12); /*0x140cb8fb7*/
        sub_140B0DF40(&v128, &v104); /*0x140cb8fd3*/
        v8 = *(unsigned int *)((char *)v129.m256i_u32 + 2) | ((unsigned __int64)v129.m256i_u16[3] << 32); /*0x140cb8ff2*/
        v9 = v129.m256i_i8[0]; /*0x140cb8ff5*/
        LOBYTE(v10) = v129.m256i_i8[1]; /*0x140cb8ffd*/
        v11 = v129.m256i_i64[2]; /*0x140cb9013*/
        v12 = v129.m256i_i64[1]; /*0x140cb9013*/
        if ( v128 == (const char *)-1LL ) /*0x140cb901e*/
        {
          v148 = v129.m256i_i64[3]; /*0x140cb91a3*/
          v68 = 0; /*0x140cb91aa*/
        }
        else
        {
          v88 = 0; /*0x140cb9071*/
          v89 = 1; /*0x140cb907c*/
          v90 = 0; /*0x140cb9087*/
          v110 = 1610612768; /*0x140cb9092*/
          v108 = (const char *)&v88; /*0x140cb909d*/
          v109 = (__int64)&off_1417C41C0; /*0x140cb90ab*/
          if ( (unsigned __int8)sub_141230630(&v128, &v108, v129.m256i_i64[3]) ) /*0x140cb90c0*/
            sub_1416C3060( /*0x140cb9226*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v150,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v12 = v88; /*0x140cb90ce*/
          v11 = v89; /*0x140cb90d5*/
          v148 = v90; /*0x140cb90e3*/
          sub_140BF0F60(&v128); /*0x140cb90f1*/
          v68 = 1; /*0x140cb90f7*/
          v9 = 3; /*0x140cb90fa*/
        }
        goto LABEL_71; /*0x140cb90fd*/
      }
LABEL_63:
      v8 = v70 << 8; /*0x140cb8ce2*/
      v72 = v8 | (unsigned __int8)v55; /*0x140cb8cea*/
      if ( v12 < 0 ) /*0x140cb8cf0*/
      {
        v73 = 0; /*0x140cb8cf2*/
        goto LABEL_65; /*0x140cb8cf2*/
      }
      if ( v12 ) /*0x140cb8d13*/
      {
        nullsub_1(v71); /*0x140cb8d19*/
        v73 = 1; /*0x140cb8d1e*/
        v74 = sub_140001650(v12, 1); /*0x140cb8d2b*/
        if ( !v74 ) /*0x140cb8d33*/
        {
LABEL_65:
          v149 = v8 | (unsigned __int8)v55; /*0x140cb8cf4*/
          v147 = (__int64 *)v10; /*0x140cb8cfb*/
          sub_1416C2D4B(v73, v12); /*0x140cb8d08*/
        }
        v11 = v74; /*0x140cb8d35*/
        sub_141684120(v74, v10, v12); /*0x140cb8d41*/
        if ( !v72 ) /*0x140cb8d49*/
          goto LABEL_70; /*0x140cb8d49*/
      }
      else
      {
        v11 = 1; /*0x140cb9102*/
        if ( !v72 ) /*0x140cb910a*/
          goto LABEL_70; /*0x140cb910a*/
      }
      sub_140001660(v10, v72, 1); /*0x140cb8d57*/
LABEL_70:
      v68 = 1; /*0x140cb8d5c*/
      v9 = 3; /*0x140cb8d5f*/
      v148 = v12; /*0x140cb8d62*/
LABEL_71:
      *(_BYTE *)v151 = 1; /*0x140cb8d69*/
      sub_140BC6C20(v146); /*0x140cb8d7a*/
      sub_140BF0DE0(v152); /*0x140cb8d87*/
      if ( *(_QWORD *)(v154 + 2480) != -1 ) /*0x140cb8d9c*/
      {
        v146 = (_QWORD *)(v154 + 2488); /*0x140cb8da9*/
        v75 = *(__int64 **)(v154 + 2488); /*0x140cb8db0*/
        v147 = *(__int64 **)(v154 + 2496); /*0x140cb8dbe*/
        v149 = 0; /*0x140cb8dc5*/
        v151 = v75; /*0x140cb8dd0*/
        while ( v147 != (__int64 *)v149 ) /*0x140cb8dee*/
        {
          ++v149; /*0x140cb8df3*/
          v76 = v75 + 12; /*0x140cb8dfa*/
          sub_1402C7520(); /*0x140cb8dfe*/
          v75 = v76; /*0x140cb8e04*/
        }
        v67 = *(_QWORD *)(v154 + 2480); /*0x140cb8e10*/
        if ( v67 ) /*0x140cb8e1a*/
LABEL_76:
          sub_140001660(*v146, 96 * v67, 8); /*0x140cb8e1c*/
      }
LABEL_77:
      *(_BYTE *)(v154 + 3520) = 1; /*0x140cb8e39*/
      sub_140BE4100(v152); /*0x140cb8e4e*/
      v122 = v8; /*0x140cb8e54*/
      v123 = WORD2(v8); /*0x140cb8e5f*/
      v125 = v11; /*0x140cb8e67*/
      v126 = v148; /*0x140cb8e75*/
      v120 = v9; /*0x140cb8e80*/
      v121 = v10; /*0x140cb8e87*/
      v124 = v12; /*0x140cb8e8e*/
      v119 = v68; /*0x140cb8e95*/
      v77 = v154; /*0x140cb8e9c*/
      *(_BYTE *)(v154 + 3539) = 0; /*0x140cb8ea3*/
      sub_141684120(&v128, v77, 360); /*0x140cb8ebd*/
      *(_BYTE *)(v77 + 3538) = 0; /*0x140cb8ec2*/
      v78 = *(_QWORD *)(v77 + 384); /*0x140cb8ec9*/
      *(_BYTE *)(v77 + 3537) = 0; /*0x140cb8ed0*/
      v105 = *(_QWORD *)(v77 + 376); /*0x140cb8ede*/
      v104 = *(_OWORD *)(v77 + 360); /*0x140cb8eec*/
      sub_14047E370( /*0x140cb8f18*/
        (unsigned int)&v128,
        v78,
        (unsigned int)&v119,
        (unsigned int)&v104,
        *(_DWORD *)(v77 + 3528),
        *(_DWORD *)(v77 + 3532));
      v61 = 1; /*0x140cb8f1e*/
      result = 0; /*0x140cb8f20*/
      v52 = (_BYTE *)v154; /*0x140cb8f22*/
LABEL_78:
      v52[3536] = v61; /*0x140cb8f29*/
      return result;
  }
}