// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = set_codex_router_enabled | mapped via command-name string xref (win-native, ground-truth)
char __fastcall set_codex_router_enabled(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
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
  _QWORD *v17; // r13
  __int64 *v18; // r12
  __int64 v19; // rdi
  char v20; // of
  volatile signed __int64 **v21; // rax
  char v22; // bl
  volatile signed __int64 *v23; // rcx
  __int64 v24; // rt0
  volatile signed __int64 *v25; // rdx
  __int64 v26; // rt0
  volatile signed __int64 *v27; // r8
  __int64 v28; // rt0
  volatile signed __int64 *v29; // r9
  __int64 v30; // rt0
  volatile signed __int64 *v31; // r10
  __int64 v32; // rt0
  volatile signed __int64 *v33; // r11
  __int64 v34; // rt0
  volatile signed __int64 *v35; // rdi
  volatile signed __int64 *v36; // rax
  char v37; // of
  __int64 v38; // r15
  volatile signed __int64 *v39; // rdi
  __int64 v40; // rt0
  volatile signed __int64 *v41; // r14
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
  __int64 v57; // r12
  const char *v58; // r15
  __int64 v59; // r14
  char v60; // cl
  char result; // al
  __int64 v62; // rdi
  __int64 v63; // r12
  __int64 v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rax
  unsigned __int8 v67; // di
  __int64 v68; // r15
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
  _BYTE v81[392]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v82[136]; // [rsp+1C0h] [rbp+140h] BYREF
  volatile signed __int64 *v83; // [rsp+248h] [rbp+1C8h]
  volatile signed __int64 *v84; // [rsp+250h] [rbp+1D0h]
  __int64 v85; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v86; // [rsp+260h] [rbp+1E0h]
  __int64 v87; // [rsp+268h] [rbp+1E8h]
  _QWORD v88[2]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v89; // [rsp+3F0h] [rbp+370h]
  _BYTE v90[320]; // [rsp+400h] [rbp+380h] BYREF
  __m256i v91; // [rsp+540h] [rbp+4C0h] BYREF
  __int128 v92; // [rsp+560h] [rbp+4E0h]
  __int128 v93; // [rsp+570h] [rbp+4F0h]
  __int128 v94; // [rsp+580h] [rbp+500h]
  __int64 v95; // [rsp+590h] [rbp+510h]
  __int128 v96; // [rsp+658h] [rbp+5D8h]
  __int64 v97; // [rsp+668h] [rbp+5E8h]
  __int128 v98; // [rsp+670h] [rbp+5F0h]
  __int64 v99; // [rsp+680h] [rbp+600h]
  __int128 *v100; // [rsp+690h] [rbp+610h] BYREF
  __int64 (__fastcall **v101)(); // [rsp+698h] [rbp+618h]
  __int64 v102; // [rsp+6A0h] [rbp+620h]
  __int128 v103; // [rsp+7B8h] [rbp+738h]
  __int64 v104; // [rsp+7C8h] [rbp+748h]
  __int128 v105; // [rsp+7D0h] [rbp+750h]
  __int64 v106; // [rsp+7E0h] [rbp+760h]
  char v107; // [rsp+7E8h] [rbp+768h]
  __int128 v108; // [rsp+7F0h] [rbp+770h] BYREF
  __int64 v109; // [rsp+800h] [rbp+780h]
  unsigned __int128 v110; // [rsp+808h] [rbp+788h]
  _OWORD v111[24]; // [rsp+818h] [rbp+798h] BYREF
  const char *v112; // [rsp+9A0h] [rbp+920h] BYREF
  __int64 v113; // [rsp+9A8h] [rbp+928h]
  __int64 v114; // [rsp+9B0h] [rbp+930h]
  __int64 v115; // [rsp+9B8h] [rbp+938h]
  __int64 v116; // [rsp+9C0h] [rbp+940h]
  __int64 v117; // [rsp+9C8h] [rbp+948h]
  __int64 v118; // [rsp+9D0h] [rbp+950h]
  __int128 v119; // [rsp+B28h] [rbp+AA8h]
  __int128 v120; // [rsp+B38h] [rbp+AB8h]
  __int128 v121; // [rsp+B48h] [rbp+AC8h]
  __int128 v122; // [rsp+B58h] [rbp+AD8h]
  __int64 v123; // [rsp+B68h] [rbp+AE8h] BYREF
  __int8 v124; // [rsp+B70h] [rbp+AF0h]
  char v125; // [rsp+B71h] [rbp+AF1h]
  int v126; // [rsp+B72h] [rbp+AF2h]
  __int16 v127; // [rsp+B76h] [rbp+AF6h]
  __int64 v128; // [rsp+B78h] [rbp+AF8h]
  __int64 v129; // [rsp+B80h] [rbp+B00h]
  __int64 v130; // [rsp+B88h] [rbp+B08h]
  const char *v131; // [rsp+B90h] [rbp+B10h] BYREF
  __m256i v132; // [rsp+B98h] [rbp+B18h] BYREF
  __int128 v133; // [rsp+BB8h] [rbp+B38h] BYREF
  __int128 v134; // [rsp+BC8h] [rbp+B48h]
  __int128 v135; // [rsp+BD8h] [rbp+B58h]
  __int128 v136; // [rsp+BE8h] [rbp+B68h]
  __int128 v137; // [rsp+BF8h] [rbp+B78h]
  __int128 v138; // [rsp+C08h] [rbp+B88h]
  __int128 v139; // [rsp+C18h] [rbp+B98h]
  __int128 v140; // [rsp+C28h] [rbp+BA8h]
  __int128 v141; // [rsp+C38h] [rbp+BB8h]
  __int128 v142; // [rsp+C48h] [rbp+BC8h]
  __int128 v143; // [rsp+C58h] [rbp+BD8h]
  char v144; // [rsp+C68h] [rbp+BE8h]
  char v145; // [rsp+C69h] [rbp+BE9h]
  __int64 v146; // [rsp+D40h] [rbp+CC0h]
  __int64 v147; // [rsp+D48h] [rbp+CC8h]
  __int128 v148; // [rsp+D50h] [rbp+CD0h] BYREF
  __int64 v149; // [rsp+D60h] [rbp+CE0h]
  _QWORD *v150; // [rsp+D68h] [rbp+CE8h]
  __int64 *v151; // [rsp+D70h] [rbp+CF0h]
  __int64 v152; // [rsp+D78h] [rbp+CF8h]
  unsigned __int64 v153; // [rsp+D80h] [rbp+D00h]
  char v154; // [rsp+D8Fh] [rbp+D0Fh] BYREF
  __int64 *v155; // [rsp+D90h] [rbp+D10h]
  __int64 v156; // [rsp+D98h] [rbp+D18h]
  __int64 v157; // [rsp+DA0h] [rbp+D20h]
  char v158; // [rsp+DAEh] [rbp+D2Eh]
  char v159; // [rsp+DAFh] [rbp+D2Fh]
  __int64 v160; // [rsp+DB0h] [rbp+D30h]

  v160 = -2; /*0x140cbb26b*/
  v4 = a2; /*0x140cbb276*/
  v5 = a1; /*0x140cbb279*/
  v6 = *(unsigned __int8 *)(a1 + 3536); /*0x140cbb27c*/
  v157 = a1; /*0x140cbb291*/
  switch ( v6 ) /*0x140cbb298*/
  {
    case 0LL: /*0x140cbb298*/
      *(_WORD *)(a1 + 3537) = 257; /*0x140cbb29a*/
      *(_BYTE *)(a1 + 3539) = 1; /*0x140cbb2a4*/
      v7 = a1 + 1960; /*0x140cbb2b3*/
      sub_141684120(a1 + 1960, a1 + 392, 1568); /*0x140cbb2c3*/
      switch ( *(_BYTE *)(v5 + 3520) ) /*0x140cbb2de*/
      {
        case 0: /*0x140cbb2de*/
          goto LABEL_4;
        case 1: /*0x140cbb2de*/
          goto LABEL_95;
        case 2: /*0x140cbb2de*/
          goto LABEL_94;
        case 3: /*0x140cbb2de*/
          goto LABEL_8;
      }
    case 1LL: /*0x140cbb298*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140cbc468*/
    case 2LL: /*0x140cbb298*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140cbc45a*/
    case 3LL: /*0x140cbb298*/
      v7 = a1 + 1960; /*0x140cbb2e0*/
      switch ( *(_BYTE *)(a1 + 3520) ) /*0x140cbb2fd*/
      {
        case 0: /*0x140cbb2fd*/
LABEL_4:
          v153 = v4; /*0x140cbb2ff*/
          v118 = 0; /*0x140cbb30d*/
          v112 = aSetCodexRouter_0; /*0x140cbb31f*/
          v113 = 24; /*0x140cbb326*/
          v114 = (__int64)aApp_2; /*0x140cbb338*/
          v115 = 3; /*0x140cbb33f*/
          v156 = v7; /*0x140cbb34a*/
          v116 = v7; /*0x140cbb351*/
          v155 = (__int64 *)(v5 + 2480); /*0x140cbb358*/
          v117 = v5 + 2480; /*0x140cbb35f*/
          sub_1401C3650(&v131, &v112); /*0x140cbb374*/
          v8 = *(unsigned int *)((char *)v132.m256i_u32 + 2) | ((unsigned __int64)v132.m256i_u16[3] << 32); /*0x140cbb393*/
          v9 = v132.m256i_i8[0]; /*0x140cbb396*/
          LOBYTE(v10) = v132.m256i_i8[1]; /*0x140cbb39e*/
          v11 = v132.m256i_i64[2]; /*0x140cbb3b4*/
          v12 = v132.m256i_i64[1]; /*0x140cbb3b4*/
          if ( v131 == (const char *)-1LL ) /*0x140cbb3bf*/
          {
            v152 = v132.m256i_i64[3]; /*0x140cbb87e*/
            goto LABEL_55; /*0x140cbb885*/
          }
          v111[6] = v139; /*0x140cbb3cc*/
          v111[5] = v138; /*0x140cbb3da*/
          v111[4] = v137; /*0x140cbb3e8*/
          v111[3] = v136; /*0x140cbb40b*/
          v111[2] = v135; /*0x140cbb412*/
          v111[1] = v134; /*0x140cbb419*/
          v111[0] = v133; /*0x140cbb420*/
          *(_DWORD *)((char *)&v108 + 10) = *(__int32 *)((char *)v132.m256i_i32 + 2); /*0x140cbb427*/
          HIWORD(v108) = WORD2(v8); /*0x140cbb432*/
          v110 = *(_OWORD *)&v132.m256i_u64[2]; /*0x140cbb43a*/
          *(_QWORD *)&v108 = v131; /*0x140cbb448*/
          WORD4(v108) = v132.m256i_i16[0]; /*0x140cbb44f*/
          v109 = v132.m256i_i64[1]; /*0x140cbb45d*/
          v131 = aSetCodexRouter_0; /*0x140cbb46f*/
          v132.m256i_i64[0] = 24; /*0x140cbb476*/
          v132.m256i_i64[1] = (__int64)aManager_1; /*0x140cbb488*/
          v132.m256i_i64[2] = 7; /*0x140cbb48f*/
          v132.m256i_i64[3] = v156; /*0x140cbb4a1*/
          v133 = (unsigned __int64)v155; /*0x140cbb4af*/
          v13 = sub_140004B10((volatile void *)(*(_QWORD *)(v157 + 2472) + 16LL)); /*0x140cbb4ce*/
          if ( v13 ) /*0x140cbb4d4*/
            goto LABEL_6; /*0x140cbb4d4*/
          sub_1416850A0(&v112, &v131, &v132.m256i_u64[1]); /*0x140cbbc0d*/
          v9 = (char)v112; /*0x140cbbc13*/
          if ( (_BYTE)v112 == 0xFF ) /*0x140cbbc1f*/
          {
            v13 = v113; /*0x140cbc33f*/
LABEL_6:
            v131 = aSetCodexRouter_0; /*0x140cbb4da*/
            v132.m256i_i64[0] = 24; /*0x140cbb4f3*/
            v132.m256i_i64[1] = (__int64)aEnabled_7; /*0x140cbb505*/
            v132.m256i_i64[2] = 7; /*0x140cbb50c*/
            v132.m256i_i64[3] = v156; /*0x140cbb517*/
            v133 = (unsigned __int64)v155; /*0x140cbb525*/
            sub_1401BCE80(&v112, &v131); /*0x140cbb53a*/
            v9 = (char)v112; /*0x140cbb540*/
            v14 = BYTE1(v112); /*0x140cbb548*/
            if ( (_BYTE)v112 != 0xFF ) /*0x140cbb554*/
            {
              v15 = *(unsigned int *)((char *)&v112 + 2); /*0x140cbb55a*/
              v16 = HIWORD(v112); /*0x140cbb560*/
              v12 = v113; /*0x140cbb568*/
              v11 = v114; /*0x140cbb56f*/
              v152 = v115; /*0x140cbb57d*/
              sub_140014150(&v108); /*0x140cbb58b*/
              v8 = v15 | (v16 << 32); /*0x140cbb595*/
              LOBYTE(v10) = v14; /*0x140cbb598*/
              goto LABEL_55; /*0x140cbb59b*/
            }
            v131 = aSetCodexRouter_0; /*0x140cbbc73*/
            v132.m256i_i64[0] = 24; /*0x140cbbc7a*/
            v132.m256i_i64[1] = (__int64)aRelaunch; /*0x140cbbc8c*/
            v132.m256i_i64[2] = 8; /*0x140cbbc93*/
            v132.m256i_i64[3] = v156; /*0x140cbbca5*/
            v133 = (unsigned __int64)v155; /*0x140cbbcb3*/
            sub_140974DE0(&v112, &v131); /*0x140cbbcc8*/
            v9 = (char)v112; /*0x140cbbcce*/
            LOBYTE(v10) = BYTE1(v112); /*0x140cbbcd6*/
            if ( (_BYTE)v112 == 0xFF ) /*0x140cbbce2*/
            {
              v5 = v157; /*0x140cbc34b*/
              v79 = v157 + 2504; /*0x140cbc352*/
              sub_141684120(v157 + 2504, &v108, 152); /*0x140cbc369*/
              *(_QWORD *)(v5 + 2656) = v13; /*0x140cbc36e*/
              *(_BYTE *)(v5 + 2832) = v14; /*0x140cbc375*/
              *(_BYTE *)(v5 + 2833) = v10; /*0x140cbc37c*/
              *(_BYTE *)(v5 + 2834) = 0; /*0x140cbc383*/
              v18 = (__int64 *)(v5 + 2840); /*0x140cbc38b*/
              sub_141684120(v5 + 2840, v79, 336); /*0x140cbc39e*/
              v17 = (_QWORD *)(v5 + 3512); /*0x140cbc3a3*/
              *(_BYTE *)(v5 + 3512) = 0; /*0x140cbc3aa*/
              v7 = v156; /*0x140cbc3b2*/
              v4 = v153; /*0x140cbc3b9*/
LABEL_9:
              v19 = v5 + 3176; /*0x140cbb5c6*/
              sub_141684120(v5 + 3176, v18, 336); /*0x140cbb5d9*/
              switch ( *(_BYTE *)(v5 + 3506) ) /*0x140cbb5f4*/
              {
                case 0: /*0x140cbb5f4*/
                  goto LABEL_11;
                case 1: /*0x140cbb5f4*/
                  goto LABEL_97;
                case 2: /*0x140cbb5f4*/
                  goto LABEL_96;
                case 3: /*0x140cbb5f4*/
                  goto LABEL_30;
              }
            }
            v62 = *(unsigned int *)((char *)&v112 + 2); /*0x140cbbce8*/
            v63 = HIWORD(v112); /*0x140cbbcee*/
            v12 = v113; /*0x140cbbcf6*/
            v11 = v114; /*0x140cbbcfd*/
            v152 = v115; /*0x140cbbd0b*/
            sub_140014150(&v108); /*0x140cbbd19*/
          }
          else
          {
            LOBYTE(v10) = BYTE1(v112); /*0x140cbbc25*/
            v62 = *(unsigned int *)((char *)&v112 + 2); /*0x140cbbc2c*/
            v63 = HIWORD(v112); /*0x140cbbc32*/
            v12 = v113; /*0x140cbbc3a*/
            v11 = v114; /*0x140cbbc41*/
            v152 = v115; /*0x140cbbc4f*/
            sub_140014150(&v108); /*0x140cbbc5d*/
          }
          v8 = v62 | (v63 << 32); /*0x140cbbd23*/
LABEL_55:
          sub_140BF0DE0(v156); /*0x140cbbd26*/
          if ( *v155 == -1 ) /*0x140cbbd3e*/
          {
            v67 = 1; /*0x140cbbdcb*/
            v68 = v157; /*0x140cbbdce*/
            goto LABEL_79; /*0x140cbbdd5*/
          }
          v150 = (_QWORD *)(v157 + 2488); /*0x140cbbd52*/
          v64 = *(_QWORD *)(v157 + 2488); /*0x140cbbd59*/
          v151 = *(__int64 **)(v157 + 2496); /*0x140cbbd67*/
          v153 = 0; /*0x140cbbd6e*/
          v146 = v64; /*0x140cbbd79*/
          while ( v151 != (__int64 *)v153 ) /*0x140cbbd8e*/
          {
            ++v153; /*0x140cbbd93*/
            v65 = v64 + 96; /*0x140cbbd9a*/
            sub_1402C7520(); /*0x140cbbd9e*/
            v64 = v65; /*0x140cbbda4*/
          }
          v66 = *v155; /*0x140cbbdb0*/
          v67 = 1; /*0x140cbbdb3*/
          v68 = v157; /*0x140cbbdb9*/
          if ( !*v155 ) /*0x140cbbdb0*/
            goto LABEL_79; /*0x140cbbdc0*/
          goto LABEL_78; /*0x140cbbdc0*/
        case 1: /*0x140cbb2fd*/
LABEL_95:
          v156 = v7; /*0x140cbc488*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140cbc496*/
        case 2: /*0x140cbb2fd*/
LABEL_94:
          v156 = v7; /*0x140cbc46f*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140cbc47d*/
        case 3: /*0x140cbb2fd*/
          goto LABEL_8;
      }
  }
LABEL_8:
  v17 = (_QWORD *)(v5 + 3512); /*0x140cbb5a0*/
  v18 = (__int64 *)(v5 + 2840); /*0x140cbb5af*/
  switch ( *(_BYTE *)(v5 + 3512) ) /*0x140cbb5c4*/
  {
    case 0: /*0x140cbb5c4*/
      goto LABEL_9;
    case 1: /*0x140cbb5c4*/
      v156 = v7; /*0x140cbc514*/
      v147 = v5 + 2840; /*0x140cbc51b*/
      sub_1416C3400(&off_1417B7B80, a2, a3, a4); /*0x140cbc529*/
    case 2: /*0x140cbb5c4*/
      v156 = v7; /*0x140cbc4f7*/
      v147 = v5 + 2840; /*0x140cbc4fe*/
      sub_1416C3420(&off_1417B7B80, a2, a3, a4); /*0x140cbc50c*/
    case 3: /*0x140cbb5c4*/
      v19 = v5 + 3176; /*0x140cbb5f6*/
      switch ( *(_BYTE *)(v5 + 3506) ) /*0x140cbb613*/
      {
        case 0: /*0x140cbb613*/
LABEL_11:
          v153 = v4; /*0x140cbb615*/
          *(_WORD *)(v5 + 3508) = 0; /*0x140cbb61c*/
          sub_141684120(v5 + 3336, v19, 152); /*0x140cbb639*/
          v21 = *(volatile signed __int64 ***)(v5 + 3328); /*0x140cbb63e*/
          *(_QWORD *)(v5 + 3488) = v21; /*0x140cbb645*/
          *(_BYTE *)(v5 + 3507) = *(_BYTE *)(v5 + 3504); /*0x140cbb654*/
          v22 = *(_BYTE *)(v5 + 3505); /*0x140cbb65b*/
          v23 = *v21; /*0x140cbb663*/
          v24 = _InterlockedIncrement64(*v21); /*0x140cbb666*/
          if ( (v24 < 0) ^ v20 | (v24 == 0) ) /*0x140cbb66a*/
            goto LABEL_101; /*0x140cbb66a*/
          v25 = v21[1]; /*0x140cbb670*/
          v26 = _InterlockedIncrement64(v25); /*0x140cbb674*/
          if ( (v26 < 0) ^ v20 | (v26 == 0) ) /*0x140cbb678*/
            goto LABEL_101; /*0x140cbb678*/
          v27 = v21[2]; /*0x140cbb67e*/
          v28 = _InterlockedIncrement64(v27); /*0x140cbb682*/
          if ( (v28 < 0) ^ v20 | (v28 == 0) ) /*0x140cbb686*/
            goto LABEL_101; /*0x140cbb686*/
          v29 = v21[3]; /*0x140cbb68c*/
          v30 = _InterlockedIncrement64(v29); /*0x140cbb690*/
          if ( (v30 < 0) ^ v20 | (v30 == 0) ) /*0x140cbb694*/
            goto LABEL_101; /*0x140cbb694*/
          v31 = v21[4]; /*0x140cbb69a*/
          v32 = _InterlockedIncrement64(v31); /*0x140cbb69e*/
          if ( (v32 < 0) ^ v20 | (v32 == 0) ) /*0x140cbb6a2*/
            goto LABEL_101; /*0x140cbb6a2*/
          v152 = v19; /*0x140cbb6a8*/
          v33 = v21[5]; /*0x140cbb6af*/
          v34 = _InterlockedIncrement64(v33); /*0x140cbb6b3*/
          if ( (v34 < 0) ^ v20 | (v34 == 0) ) /*0x140cbb6b7*/
            goto LABEL_101; /*0x140cbb6b7*/
          v35 = v21[7]; /*0x140cbb6bd*/
          if ( v35 ) /*0x140cbb6c4*/
          {
            if ( _InterlockedIncrement64(v35) <= 0 ) /*0x140cbb6ca*/
              goto LABEL_101; /*0x140cbb6ca*/
          }
          v150 = v17; /*0x140cbb6d0*/
          v155 = v18; /*0x140cbb6d7*/
          v156 = v7; /*0x140cbb6de*/
          v36 = v21[6]; /*0x140cbb6e5*/
          if ( _InterlockedIncrement64(v36) <= 0 ) /*0x140cbb6ed*/
            goto LABEL_101; /*0x140cbb6ed*/
          *(_QWORD *)&v119 = v23; /*0x140cbb6f3*/
          *((_QWORD *)&v119 + 1) = v25; /*0x140cbb6fa*/
          *(_QWORD *)&v120 = v27; /*0x140cbb701*/
          *((_QWORD *)&v120 + 1) = v29; /*0x140cbb708*/
          *(_QWORD *)&v121 = v31; /*0x140cbb70f*/
          *((_QWORD *)&v121 + 1) = v33; /*0x140cbb716*/
          *((_QWORD *)&v122 + 1) = v35; /*0x140cbb71d*/
          *(_QWORD *)&v122 = v36; /*0x140cbb724*/
          *(_BYTE *)(v5 + 3509) = 1; /*0x140cbb72b*/
          sub_1401C50B0(&v131, v5 + 3336); /*0x140cbb73d*/
          v38 = v157; /*0x140cbb743*/
          v39 = *(volatile signed __int64 **)(v157 + 3472); /*0x140cbb74a*/
          v40 = _InterlockedIncrement64(v39); /*0x140cbb751*/
          if ( (v40 < 0) ^ v37 | (v40 == 0) /*0x140cbb766*/
            || (v41 = *(volatile signed __int64 **)(v38 + 3480),
                v42 = _InterlockedIncrement64(v41),
                (v42 < 0) ^ v37 | (v42 == 0)) )
          {
LABEL_101:
            BUG(); /*0x140cbc52f*/
          }
          sub_141684120(v82, &v131, 136); /*0x140cbb783*/
          v83 = v39; /*0x140cbb788*/
          v84 = v41; /*0x140cbb78f*/
          *(_WORD *)(v38 + 3508) = 0; /*0x140cbb796*/
          sub_141684120(&v131, v82, 152); /*0x140cbb7b0*/
          v140 = v119; /*0x140cbb7d4*/
          v141 = v120; /*0x140cbb7db*/
          v142 = v121; /*0x140cbb7e2*/
          v143 = v122; /*0x140cbb7e9*/
          v144 = *(_BYTE *)(v38 + 3507); /*0x140cbb7f8*/
          v43 = 1; /*0x140cbb801*/
          if ( v22 != 2 ) /*0x140cbb806*/
            v43 = v22; /*0x140cbb806*/
          v145 = v43; /*0x140cbb809*/
          v44 = off_141EC8710; /*0x140cbb80f*/
          v4 = v153; /*0x140cbb81b*/
          if ( *((_DWORD *)off_141EC8710 + 24) ) /*0x140cbb816*/
          {
            v159 = 1; /*0x140cbc3d3*/
            v80 = off_141EC8710; /*0x140cbc3e1*/
            sub_1416984A3(off_141EC8710); /*0x140cbc3e4*/
            v44 = v80; /*0x140cbc3e9*/
          }
          if ( *((_DWORD *)v44 + 4) == 2 ) /*0x140cbb82c*/
          {
            v45 = 704; /*0x140cbb836*/
            if ( *(_BYTE *)v44 ) /*0x140cbb82e*/
              v45 = 472; /*0x140cbb83b*/
            v46 = v44[1] + v45; /*0x140cbb83f*/
            v159 = 0; /*0x140cbb843*/
            v47 = sub_1408980C0(v46, v44, &v131, &off_1417642A8); /*0x140cbb858*/
          }
          else
          {
            v48 = 704; /*0x140cbb893*/
            if ( *((_BYTE *)v44 + 64) ) /*0x140cbb88a*/
              v48 = 472; /*0x140cbb898*/
            v49 = v44[9] + v48; /*0x140cbb8a0*/
            v159 = 0; /*0x140cbb8a4*/
            v47 = sub_1408980C0(v49, v44 + 8, &v131, &off_141764290); /*0x140cbb8bc*/
          }
          v5 = v157; /*0x140cbb8c2*/
          *(_QWORD *)(v157 + 3496) = v47; /*0x140cbb8c9*/
          break; /*0x140cbb8c9*/
        case 1: /*0x140cbb613*/
LABEL_97:
          v152 = v19; /*0x140cbc4cc*/
          v150 = v17; /*0x140cbc4d3*/
          v155 = v18; /*0x140cbc4da*/
          JUMPOUT(0x140CBC4E1LL); /*0x140cbc4e1*/
        case 2: /*0x140cbb613*/
LABEL_96:
          v152 = v19; /*0x140cbc4a1*/
          v150 = v17; /*0x140cbc4a8*/
          v155 = v18; /*0x140cbc4af*/
          v156 = v7; /*0x140cbc4b6*/
          sub_1416C3420(&off_1417BAF50, a2, a3, a4); /*0x140cbc4c4*/
        case 3: /*0x140cbb613*/
LABEL_30:
          v152 = v19; /*0x140cbb860*/
          v150 = v17; /*0x140cbb867*/
          v155 = v18; /*0x140cbb86e*/
          v156 = v7; /*0x140cbb875*/
          break; /*0x140cbb87c*/
      }
      v151 = (__int64 *)(v5 + 3496); /*0x140cbb8e1*/
      sub_140B02B20(&v131, v5 + 3496, v4); /*0x140cbb8eb*/
      v50 = v131; /*0x140cbb8f1*/
      if ( v131 == (const char *)-3LL ) /*0x140cbb8fc*/
      {
        v52 = (_BYTE *)v157; /*0x140cbb92c*/
        *(_BYTE *)(v157 + 3506) = 3; /*0x140cbb933*/
        goto LABEL_49; /*0x140cbb93a*/
      }
      if ( v131 == (const char *)-2LL ) /*0x140cbb902*/
      {
        v149 = v132.m256i_i64[2]; /*0x140cbb90b*/
        v148 = *(_OWORD *)v132.m256i_i8; /*0x140cbb919*/
        v51 = 0x800000000000000CuLL; /*0x140cbb920*/
      }
      else
      {
        v51 = v132.m256i_i64[0]; /*0x140cbb93f*/
        v148 = *(_OWORD *)&v132.m256i_u64[1]; /*0x140cbb94d*/
        v149 = v132.m256i_i64[3]; /*0x140cbb95b*/
        sub_141684120(&v100, &v133, 312); /*0x140cbb976*/
      }
      v53 = v151; /*0x140cbb97b*/
      *(_OWORD *)v91.m256i_i8 = v148; /*0x140cbb989*/
      v91.m256i_i64[2] = v149; /*0x140cbb997*/
      sub_141684120(&v91.m256i_u64[3], &v100, 312); /*0x140cbb9b2*/
      v54 = *v53; /*0x140cbb9b7*/
      if ( (unsigned __int8)sub_1412F2A80(v54) ) /*0x140cbb9bd*/
        sub_1412E7580(v54); /*0x140cbb9ca*/
      if ( v50 == (const char *)-2LL ) /*0x140cbb9d4*/
      {
        v131 = (const char *)v51; /*0x140cbb9da*/
        v132 = v91; /*0x140cbb9ef*/
        *(_QWORD *)&v133 = v92; /*0x140cbba04*/
        *(_QWORD *)&v148 = &v131; /*0x140cbba0b*/
        *((_QWORD *)&v148 + 1) = sub_141230630; /*0x140cbba19*/
        sub_14149C0F0(&v100, &unk_1417B8CB0, &v148); /*0x140cbba35*/
        sub_140BF0F60(&v131); /*0x140cbba42*/
        v55 = (unsigned __int64)v100; /*0x140cbba48*/
        v10 = (__int64)v101; /*0x140cbba4f*/
        v12 = v102; /*0x140cbba56*/
LABEL_64:
        v69 = v157; /*0x140cbbeab*/
        *(_BYTE *)(v157 + 3508) = 0; /*0x140cbbeb2*/
        *(_BYTE *)(v69 + 3509) = 0; /*0x140cbbeb9*/
        sub_140014150(v69 + 3336); /*0x140cbbec7*/
        sub_141684120(&v85, &v112, 392); /*0x140cbbee4*/
        *(_BYTE *)(v157 + 3506) = 1; /*0x140cbbef0*/
        v70 = v55 >> 8; /*0x140cbbefa*/
        sub_141684120(v81, &v85, 392); /*0x140cbbf0b*/
        goto LABEL_65; /*0x140cbbf0b*/
      }
      v56 = v157; /*0x140cbba6d*/
      if ( v50 == (const char *)-1LL ) /*0x140cbba74*/
      {
        v131 = (const char *)v51; /*0x140cbbdda*/
        v132 = v91; /*0x140cbbde8*/
        v133 = v92; /*0x140cbbe05*/
        v134 = v93; /*0x140cbbe0c*/
        v135 = v94; /*0x140cbbe13*/
        *(_QWORD *)&v136 = v95; /*0x140cbbe1e*/
        *(_QWORD *)&v148 = 0; /*0x140cbbe25*/
        *((_QWORD *)&v148 + 1) = 1; /*0x140cbbe30*/
        v149 = 0; /*0x140cbbe3b*/
        v102 = 1610612768; /*0x140cbbe46*/
        v100 = &v148; /*0x140cbbe58*/
        v101 = &off_1417C41C0; /*0x140cbbe66*/
        if ( (unsigned __int8)sub_140B036A0(&v131, &v100) ) /*0x140cbbe7b*/
          sub_1416C3060( /*0x140cbc417*/
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v154,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v10 = *((_QWORD *)&v148 + 1); /*0x140cbbe90*/
        v55 = v148; /*0x140cbbe90*/
        v12 = v149; /*0x140cbbe97*/
        sub_140BF2F60(&v131); /*0x140cbbea5*/
        goto LABEL_64; /*0x140cbbea5*/
      }
      sub_141684120(v90, &v91.m256i_u64[2], 320); /*0x140cbba87*/
      v88[1] = v51; /*0x140cbba8c*/
      v89 = *(_OWORD *)v91.m256i_i8; /*0x140cbba9a*/
      v88[0] = v50; /*0x140cbbaa1*/
      v57 = v56; /*0x140cbbaaf*/
      if ( *(_BYTE *)(v56 + 3507) ) /*0x140cbbaa8*/
      {
        v158 = 1; /*0x140cbbabc*/
        apply_default_autostart_on_router_enable(v56 + 3336); /*0x140cbbac3*/
      }
      v158 = 1; /*0x140cbbad1*/
      sub_1403F1620(v56 + 3336); /*0x140cbbadb*/
      sub_141684120(&v100, v88, 296); /*0x140cbbaf8*/
      v105 = v98; /*0x140cbbb04*/
      v106 = v99; /*0x140cbbb12*/
      v103 = v96; /*0x140cbbb27*/
      v104 = v97; /*0x140cbbb35*/
      v107 = v90[312]; /*0x140cbbb3c*/
      v158 = 0; /*0x140cbbb42*/
      sub_140ACED10(&v131, &v100); /*0x140cbbb53*/
      v58 = v131; /*0x140cbbb59*/
      v10 = v132.m256i_i64[1]; /*0x140cbbb67*/
      v55 = v132.m256i_i64[0]; /*0x140cbbb67*/
      v59 = v132.m256i_i64[3]; /*0x140cbbb75*/
      v12 = v132.m256i_i64[2]; /*0x140cbbb75*/
      sub_141684120(&v112, &v133, 392); /*0x140cbbb90*/
      *(_BYTE *)(v57 + 3508) = 0; /*0x140cbbb95*/
      *(_BYTE *)(v57 + 3509) = 0; /*0x140cbbb9e*/
      sub_140014150(v57 + 3336); /*0x140cbbbaa*/
      sub_141684120(&v85, &v112, 392); /*0x140cbbbc4*/
      v52 = (_BYTE *)v157; /*0x140cbbbc9*/
      *(_BYTE *)(v157 + 3506) = 1; /*0x140cbbbd0*/
      if ( v58 == (const char *)-2LL ) /*0x140cbbbdb*/
      {
LABEL_49:
        v52[3512] = 3; /*0x140cbbbe1*/
        v52[3520] = 3; /*0x140cbbbe8*/
        v60 = 3; /*0x140cbbbef*/
        result = 1; /*0x140cbbbf1*/
        goto LABEL_80; /*0x140cbbbf3*/
      }
      v70 = v55 >> 8; /*0x140cbc170*/
      sub_141684120(v81, &v85, 392); /*0x140cbc188*/
      if ( v58 != (const char *)-1LL ) /*0x140cbc191*/
      {
        sub_141684120(v111, v81, 392); /*0x140cbc1a8*/
        *(_QWORD *)&v108 = v58; /*0x140cbc1ad*/
        BYTE8(v108) = v55; /*0x140cbc1b4*/
        *(_DWORD *)((char *)&v108 + 9) = v55 >> 8; /*0x140cbc1ba*/
        HIBYTE(v108) = v55 >> 8 >> 48; /*0x140cbc1c8*/
        *(_WORD *)((char *)&v108 + 13) = HIDWORD(v55) >> 8; /*0x140cbc1d2*/
        v109 = v10; /*0x140cbc1da*/
        v110 = __PAIR128__(v59, v12); /*0x140cbc1e1*/
        sub_140B0DCB0(&v131, &v108); /*0x140cbc1fd*/
        v8 = *(unsigned int *)((char *)v132.m256i_u32 + 2) | ((unsigned __int64)v132.m256i_u16[3] << 32); /*0x140cbc21c*/
        v9 = v132.m256i_i8[0]; /*0x140cbc21f*/
        LOBYTE(v10) = v132.m256i_i8[1]; /*0x140cbc227*/
        v11 = v132.m256i_i64[2]; /*0x140cbc23d*/
        v12 = v132.m256i_i64[1]; /*0x140cbc23d*/
        if ( v131 == (const char *)-1LL ) /*0x140cbc248*/
        {
          v152 = v132.m256i_i64[3]; /*0x140cbc3c5*/
          v67 = 0; /*0x140cbc3cc*/
        }
        else
        {
          v85 = 0; /*0x140cbc29b*/
          v86 = 1; /*0x140cbc2a6*/
          v87 = 0; /*0x140cbc2b1*/
          v114 = 1610612768; /*0x140cbc2bc*/
          v112 = (const char *)&v85; /*0x140cbc2c7*/
          v113 = (__int64)&off_1417C41C0; /*0x140cbc2d5*/
          if ( (unsigned __int8)sub_141230630(&v131, &v112, v132.m256i_i64[3]) ) /*0x140cbc2ea*/
            sub_1416C3060( /*0x140cbc448*/
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v154,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v12 = v85; /*0x140cbc2f8*/
          v11 = v86; /*0x140cbc2ff*/
          v152 = v87; /*0x140cbc30d*/
          sub_140BF0F60(&v131); /*0x140cbc31b*/
          v67 = 1; /*0x140cbc321*/
          v9 = 3; /*0x140cbc324*/
        }
        goto LABEL_73; /*0x140cbc327*/
      }
LABEL_65:
      v8 = v70 << 8; /*0x140cbbf10*/
      v72 = v8 | (unsigned __int8)v55; /*0x140cbbf18*/
      if ( v12 < 0 ) /*0x140cbbf1e*/
      {
        v73 = 0; /*0x140cbbf20*/
        goto LABEL_67; /*0x140cbbf20*/
      }
      if ( v12 ) /*0x140cbbf41*/
      {
        nullsub_1(v71); /*0x140cbbf47*/
        v73 = 1; /*0x140cbbf4c*/
        v74 = sub_140001650(v12, 1); /*0x140cbbf59*/
        if ( !v74 ) /*0x140cbbf61*/
        {
LABEL_67:
          v153 = v8 | (unsigned __int8)v55; /*0x140cbbf22*/
          v151 = (__int64 *)v10; /*0x140cbbf29*/
          sub_1416C2D4B(v73, v12); /*0x140cbbf36*/
        }
        v11 = v74; /*0x140cbbf63*/
        sub_141684120(v74, v10, v12); /*0x140cbbf6f*/
        if ( !v72 ) /*0x140cbbf77*/
          goto LABEL_72; /*0x140cbbf77*/
      }
      else
      {
        v11 = 1; /*0x140cbc32c*/
        if ( !v72 ) /*0x140cbc334*/
          goto LABEL_72; /*0x140cbc334*/
      }
      sub_140001660(v10, v72, 1); /*0x140cbbf85*/
LABEL_72:
      v67 = 1; /*0x140cbbf8a*/
      v9 = 3; /*0x140cbbf8d*/
      v152 = v12; /*0x140cbbf90*/
LABEL_73:
      *(_BYTE *)v150 = 1; /*0x140cbbf97*/
      sub_140BC6AB0(v155); /*0x140cbbfa8*/
      sub_140BF0DE0(v156); /*0x140cbbfb5*/
      v68 = v157; /*0x140cbbfbb*/
      if ( *(_QWORD *)(v157 + 2480) != -1 ) /*0x140cbbfca*/
      {
        v150 = (_QWORD *)(v157 + 2488); /*0x140cbbfd7*/
        v75 = *(__int64 **)(v157 + 2488); /*0x140cbbfde*/
        v151 = *(__int64 **)(v157 + 2496); /*0x140cbbfec*/
        v153 = 0; /*0x140cbbff3*/
        v155 = v75; /*0x140cbbffe*/
        while ( v151 != (__int64 *)v153 ) /*0x140cbc01e*/
        {
          ++v153; /*0x140cbc023*/
          v76 = v75 + 12; /*0x140cbc02a*/
          sub_1402C7520(); /*0x140cbc02e*/
          v75 = v76; /*0x140cbc034*/
        }
        v68 = v157; /*0x140cbc039*/
        v66 = *(_QWORD *)(v157 + 2480); /*0x140cbc040*/
        if ( v66 ) /*0x140cbc04a*/
LABEL_78:
          sub_140001660(*v150, 96 * v66, 8); /*0x140cbc04c*/
      }
LABEL_79:
      *(_BYTE *)(v68 + 3520) = 1; /*0x140cbc069*/
      sub_140BE47C0(v156); /*0x140cbc078*/
      v126 = v8; /*0x140cbc07e*/
      v127 = WORD2(v8); /*0x140cbc089*/
      v129 = v11; /*0x140cbc091*/
      v130 = v152; /*0x140cbc09f*/
      v124 = v9; /*0x140cbc0aa*/
      v125 = v10; /*0x140cbc0b1*/
      v128 = v12; /*0x140cbc0b8*/
      v123 = v67; /*0x140cbc0bf*/
      v77 = v157; /*0x140cbc0c6*/
      *(_BYTE *)(v157 + 3539) = 0; /*0x140cbc0cd*/
      sub_141684120(&v131, v77, 360); /*0x140cbc0e7*/
      *(_BYTE *)(v77 + 3538) = 0; /*0x140cbc0ec*/
      v78 = *(_QWORD *)(v77 + 384); /*0x140cbc0f3*/
      *(_BYTE *)(v77 + 3537) = 0; /*0x140cbc0fa*/
      v109 = *(_QWORD *)(v77 + 376); /*0x140cbc108*/
      v108 = *(_OWORD *)(v77 + 360); /*0x140cbc116*/
      sub_14047E370( /*0x140cbc142*/
        (unsigned int)&v131,
        v78,
        (unsigned int)&v123,
        (unsigned int)&v108,
        *(_DWORD *)(v77 + 3528),
        *(_DWORD *)(v77 + 3532));
      v60 = 1; /*0x140cbc148*/
      result = 0; /*0x140cbc14a*/
      v52 = (_BYTE *)v157; /*0x140cbc14c*/
LABEL_80:
      v52[3536] = v60; /*0x140cbc153*/
      return result;
  }
}