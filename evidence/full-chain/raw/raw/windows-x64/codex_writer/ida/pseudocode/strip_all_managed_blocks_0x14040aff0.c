// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_writer::strip_all_managed_blocks | 跨平台字符串签名匹配(名↔函数一致)
__m128i *__fastcall strip_all_managed_blocks(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  bool v8; // r15
  __int64 v9; // r8
  _BYTE *v10; // rcx
  __int128 *v11; // rdx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  bool v18; // cf
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  _BYTE *v22; // rsi
  __int64 v23; // r13
  __int64 v24; // r8
  _BYTE *v25; // rcx
  __int128 *v26; // rdx
  bool v27; // zf
  bool v28; // sf
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  const __m128i *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  const __m128i *v36; // rdi
  __m128i si128; // xmm6
  __m128i v38; // xmm7
  char v39; // r14
  __int64 v40; // r15
  __int64 v41; // rax
  unsigned __int64 v42; // r12
  __int64 v43; // r15
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rsi
  int v52; // eax
  __int64 v53; // rbx
  __int64 v54; // rsi
  char v55; // al
  unsigned __int64 v57; // r14
  const __m128i *v58; // rsi
  __int64 v59; // rax
  const __m128i *v61; // rcx
  __m128i v62; // xmm0
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned __int64 v66; // r13
  __int64 v67; // rdx
  __int64 v68; // r14
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r14
  __int64 v73; // r8
  _QWORD *v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rsi
  __int64 v77; // rbx
  __int64 v78; // rcx
  __int64 v79; // rcx
  _QWORD *v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rsi
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rcx
  unsigned __int64 v90; // rbx
  __m128i v91; // xmm6
  __m128i v92; // xmm7
  __m128i v93; // xmm8
  __m128i v94; // xmm9
  __m128i v95; // xmm10
  __m128i v96; // xmm11
  bool v97; // r14
  __m128i *v98; // r14
  __int64 v99; // r13
  __int64 v100; // rax
  unsigned __int64 v101; // rsi
  __int64 v102; // r13
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rcx
  _BYTE *v106; // rax
  unsigned __int64 v107; // rdx
  __int64 v108; // r8
  unsigned __int64 v109; // r12
  _BYTE *v110; // r15
  unsigned __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rbx
  _BYTE *v114; // rdx
  char *v115; // rcx
  unsigned __int64 v116; // rax
  char v117; // cl
  char v118; // r8
  int v119; // r8d
  unsigned int v120; // ecx
  const __m128i *v122; // rsi
  __m128i v124; // xmm0
  __int64 v125; // rax
  __int64 v126; // rdx
  unsigned __int64 v127; // rax
  __int64 v129; // rcx
  __int64 v130; // rsi
  __int64 v131; // [rsp+28h] [rbp-58h]
  __int64 v132; // [rsp+30h] [rbp-50h]
  __int64 v133; // [rsp+38h] [rbp-48h]
  unsigned __int64 v135; // [rsp+48h] [rbp-38h]
  __m128i v136; // [rsp+50h] [rbp-30h] BYREF
  __int128 v137; // [rsp+60h] [rbp-20h]
  __int64 v138; // [rsp+70h] [rbp-10h]
  __int64 v139; // [rsp+78h] [rbp-8h]
  __int64 v140; // [rsp+88h] [rbp+8h]
  __int64 v141; // [rsp+90h] [rbp+10h]
  const __m128i *v142; // [rsp+98h] [rbp+18h]
  const __m128i *v143; // [rsp+A0h] [rbp+20h]
  __int64 v144; // [rsp+A8h] [rbp+28h]
  __int64 v145; // [rsp+B0h] [rbp+30h]
  __int64 v146; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v147; // [rsp+C0h] [rbp+40h]
  __int64 v148; // [rsp+C8h] [rbp+48h]
  __int64 v149; // [rsp+D0h] [rbp+50h]
  __int64 v150; // [rsp+D8h] [rbp+58h]
  char v151; // [rsp+E0h] [rbp+60h]
  __int16 v152; // [rsp+E8h] [rbp+68h]
  int v153; // [rsp+F4h] [rbp+74h]
  __int64 v154; // [rsp+F8h] [rbp+78h]
  __int64 v155; // [rsp+100h] [rbp+80h]
  __int64 v156; // [rsp+108h] [rbp+88h]
  __m128i v157; // [rsp+110h] [rbp+90h] BYREF
  __int64 v158; // [rsp+120h] [rbp+A0h]
  __int64 v159; // [rsp+128h] [rbp+A8h]
  __int64 v160; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v161; // [rsp+138h] [rbp+B8h]
  __int64 v162; // [rsp+140h] [rbp+C0h]
  _BYTE *v163; // [rsp+148h] [rbp+C8h]
  int v164; // [rsp+154h] [rbp+D4h]
  __int64 v165; // [rsp+158h] [rbp+D8h]

  v165 = -2; /*0x14040b03f*/
  v5 = sub_141470CD0(a1, a2); /*0x14040b054*/
  if ( *(_BYTE *)(v5 + 16) == 1 ) /*0x14040b05d*/
  {
    v6 = *(_QWORD *)v5; /*0x14040b063*/
    v7 = *(_QWORD *)(v5 + 8); /*0x14040b066*/
  }
  else
  {
    v130 = v5; /*0x14040c22b*/
    v6 = sub_141486EF0(); /*0x14040c233*/
    v5 = v130; /*0x14040c236*/
    *(_QWORD *)v130 = v6; /*0x14040c239*/
    *(_QWORD *)(v130 + 8) = v7; /*0x14040c23c*/
    *(_BYTE *)(v130 + 16) = 1; /*0x14040c240*/
  }
  *(_QWORD *)v5 = v6 + 1; /*0x14040b06e*/
  v137 = xmmword_14174C700; /*0x14040b078*/
  v136 = _mm_loadu_si128((const __m128i *)&off_14174C6F0); /*0x14040b084*/
  v138 = v6; /*0x14040b089*/
  v139 = v7; /*0x14040b08d*/
  v144 = 0; /*0x14040b091*/
  v145 = a3; /*0x14040b099*/
  v156 = a2; /*0x14040b0a1*/
  v146 = a2; /*0x14040b0a8*/
  v147 = a3; /*0x14040b0ac*/
  v148 = 0; /*0x14040b0b0*/
  v149 = a3; /*0x14040b0b8*/
  v150 = 0xA0000000ALL; /*0x14040b0c6*/
  v151 = 1; /*0x14040b0ca*/
  v152 = 0; /*0x14040b0ce*/
  while ( 1 ) /*0x14040b0e2*/
  {
    v8 = 0; /*0x14040b0e2*/
LABEL_7:
    if ( HIBYTE(v152) ) /*0x14040b118*/
      break; /*0x14040b118*/
    v13 = v146; /*0x14040b11e*/
    sub_140421EE0(&v157, &v146); /*0x14040b128*/
    if ( v157.m128i_i32[0] != 1 ) /*0x14040b135*/
    {
      if ( HIBYTE(v152) ) /*0x14040b164*/
        break; /*0x14040b164*/
      HIBYTE(v152) = 1; /*0x14040b16a*/
      v15 = v145 - v144; /*0x14040b176*/
      if ( ((unsigned __int8)v152 | (v145 != v144)) != 1 ) /*0x14040b181*/
        break; /*0x14040b181*/
      v16 = v146 + v144; /*0x14040b187*/
      v19 = v15 - 1; /*0x14040b18e*/
      if ( !v15 ) /*0x14040b192*/
        goto LABEL_21; /*0x14040b192*/
LABEL_14:
      if ( *(_BYTE *)(v16 + v19) == 10 ) /*0x14040b198*/
      {
        v15 -= 2; /*0x14040b19a*/
        if ( !v19 || (v20 = v16, *(_BYTE *)(v16 + v15) != 13) ) /*0x14040b1aa*/
          v20 = 0; /*0x14040b1ac*/
        if ( v20 ) /*0x14040b1b1*/
          v16 = v20; /*0x14040b1b5*/
        else
          v15 = v19; /*0x14040b1b1*/
      }
      goto LABEL_21; /*0x14040b1b5*/
    }
    v14 = v144; /*0x14040b13e*/
    v144 = v158; /*0x14040b142*/
    v15 = v158 - v14; /*0x14040b146*/
    v16 = v14 + v13; /*0x14040b149*/
    v17 = v158 - v14; /*0x14040b14c*/
    v18 = v17 == 0; /*0x14040b14f*/
    v19 = v17 - 1; /*0x14040b14f*/
    if ( !v18 ) /*0x14040b153*/
      goto LABEL_14; /*0x14040b153*/
LABEL_21:
    v22 = (_BYTE *)sub_14033BC10(v16, v15); /*0x14040b1c1*/
    v23 = v21; /*0x14040b1c4*/
    switch ( v21 ) /*0x14040b1d8*/
    {
      case 30LL: /*0x14040b1d8*/
        v9 = 30; /*0x14040b1da*/
        v10 = v22; /*0x14040b1e0*/
        v11 = &xmmword_14175304F; /*0x14040b1e3*/
        goto LABEL_6; /*0x14040b1ea*/
      case 36LL: /*0x14040b1d8*/
        v9 = 36; /*0x14040b213*/
        v10 = v22; /*0x14040b219*/
        v11 = (__int128 *)"# <<< aimami-relay managed end (top)# >>> aimami-relay managed start (top, DO NOT EDIT MANUALL" /*0x14040b21c*/
                          "Y)router-takeover-backup.json";
        goto LABEL_6; /*0x14040b223*/
      case 39LL: /*0x14040b1d8*/
        v9 = 39; /*0x14040b0e7*/
        v10 = v22; /*0x14040b0ed*/
        v11 = &xmmword_141753237; /*0x14040b0f0*/
LABEL_6:
        v12 = sub_1416847B0(v10, v11, v9); /*0x14040b0f7*/
        LOBYTE(v6) = v12 == 0; /*0x14040b101*/
        v27 = v12 != 0 && !v8; /*0x14040b107*/
        v8 = v12 != 0; /*0x14040b10b*/
        if ( !v27 ) /*0x14040b10e*/
          goto LABEL_7; /*0x14040b10e*/
        goto LABEL_30; /*0x14040b10e*/
      case 55LL: /*0x14040b1d8*/
        v24 = 55; /*0x14040b228*/
        v25 = v22; /*0x14040b22e*/
        v26 = &xmmword_141752F5B; /*0x14040b231*/
        goto LABEL_29; /*0x14040b238*/
      case 60LL: /*0x14040b1d8*/
        v24 = 60; /*0x14040b23a*/
        v25 = v22; /*0x14040b240*/
        v26 = (__int128 *)"# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)router-takeover-backup.json"; /*0x14040b243*/
        goto LABEL_29; /*0x14040b243*/
      case 64LL: /*0x14040b1d8*/
        v24 = 64; /*0x14040b1ef*/
        v25 = v22; /*0x14040b1f5*/
        v26 = &xmmword_1417530C4; /*0x14040b1f8*/
LABEL_29:
        v27 = (unsigned int)sub_1416847B0(v25, v26, v24) != 0 && !v8; /*0x14040b24a*/
        v8 = 1; /*0x14040b25b*/
        if ( v27 ) /*0x14040b25e*/
          goto LABEL_30; /*0x14040b25e*/
        goto LABEL_7; /*0x14040b25e*/
      default:
        v27 = !v8; /*0x14040b201*/
        v8 = 1; /*0x14040b205*/
        if ( !v27 ) /*0x14040b208*/
          goto LABEL_7; /*0x14040b208*/
        if ( !v21 ) /*0x14040b2d4*/
          continue; /*0x14040b2d4*/
LABEL_30:
        if ( *v22 != 91 || v22[v23 - 1] != 93 ) /*0x14040b273*/
          continue; /*0x14040b273*/
        if ( v23 == 1 || (char)v22[1] <= -65 ) /*0x14040b287*/
          sub_1416C2F60((_DWORD)v22, v23, 1, v23 - 1, (__int64)&off_141782B88); /*0x14040c2ad*/
        v27 = v23 == 2; /*0x14040b28d*/
        v28 = v23 - 2 < 0; /*0x14040b28d*/
        v29 = v23 - 2; /*0x14040b28d*/
        v30 = v159; /*0x14040b291*/
        if ( v28 ) /*0x14040b298*/
        {
          v129 = 0; /*0x14040c21e*/
          goto LABEL_234; /*0x14040c21e*/
        }
        if ( v27 ) /*0x14040b29e*/
        {
          v32 = 1; /*0x14040b2db*/
        }
        else
        {
          nullsub_1(v6); /*0x14040b2a0*/
          v31 = sub_140001650(v29, 1); /*0x14040b2ad*/
          if ( !v31 ) /*0x14040b2b5*/
          {
            v30 = v29; /*0x14040c2b5*/
            v129 = 1; /*0x14040c2b8*/
LABEL_234:
            sub_1416C2D4B(v129, v30); /*0x14040c220*/
          }
          v32 = v31; /*0x14040b2bb*/
          sub_141684120(v31, v22 + 1, v29); /*0x14040b2ca*/
        }
        v157.m128i_i64[0] = v29; /*0x14040b2e1*/
        v159 = v32; /*0x14040b2e8*/
        v157.m128i_i64[1] = v32; /*0x14040b2ef*/
        v158 = v29; /*0x14040b2f6*/
        sub_140474440(&v136, &v157); /*0x14040b304*/
        break; /*0x14040b30a*/
    }
  }
  v141 = v136.m128i_i64[1]; /*0x14040b30f*/
  v33 = (const __m128i *)v136.m128i_i64[0]; /*0x14040b317*/
  v159 = *((_QWORD *)&v137 + 1); /*0x14040b31f*/
  v143 = (const __m128i *)v136.m128i_i64[0]; /*0x14040b329*/
  if ( a3 < 0 ) /*0x14040b32d*/
  {
    v34 = 0; /*0x14040b32f*/
    goto LABEL_44; /*0x14040b32f*/
  }
  if ( a3 ) /*0x14040b342*/
  {
    nullsub_1(v6); /*0x14040b344*/
    v34 = 1; /*0x14040b349*/
    v35 = sub_140001650(a3, 1); /*0x14040b356*/
    if ( !v35 ) /*0x14040b35e*/
LABEL_44:
      sub_1416C2D4B(v34, a3); /*0x14040b331*/
  }
  else
  {
    v35 = 1; /*0x14040b362*/
  }
  v160 = a3; /*0x14040b367*/
  v155 = v35; /*0x14040b36e*/
  v161 = v35; /*0x14040b375*/
  v162 = 0; /*0x14040b37c*/
  v144 = 0; /*0x14040b387*/
  v145 = a3; /*0x14040b38f*/
  v146 = v156; /*0x14040b39e*/
  v147 = a3; /*0x14040b3a2*/
  v148 = 0; /*0x14040b3a6*/
  v149 = a3; /*0x14040b3ae*/
  v150 = 0xA0000000ALL; /*0x14040b3bc*/
  v151 = 1; /*0x14040b3c0*/
  v152 = 0; /*0x14040b3c4*/
  v36 = v33 + 1; /*0x14040b3ca*/
  v164 = 1; /*0x14040b3d0*/
  v156 = 0; /*0x14040b3d6*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_141748E40); /*0x14040b3e1*/
  v38 = _mm_load_si128((const __m128i *)&xmmword_141748E50); /*0x14040b3e9*/
  while ( 2 ) /*0x14040b400*/
  {
    v39 = 0; /*0x14040b400*/
LABEL_51:
    if ( !HIBYTE(v152) ) /*0x14040b407*/
    {
      v40 = v146; /*0x14040b40d*/
      sub_140421EE0(&v136, &v146); /*0x14040b418*/
      if ( v136.m128i_i32[0] == 1 ) /*0x14040b422*/
      {
        v41 = v144; /*0x14040b428*/
        v144 = v137; /*0x14040b42c*/
        v42 = v137 - v41; /*0x14040b430*/
        v43 = v41 + v40; /*0x14040b433*/
        v44 = v137 - v41; /*0x14040b436*/
        v18 = v44 == 0; /*0x14040b439*/
        v45 = v44 - 1; /*0x14040b439*/
        if ( v18 ) /*0x14040b43d*/
          goto LABEL_65; /*0x14040b43d*/
LABEL_58:
        if ( *(_BYTE *)(v43 + v45) == 10 ) /*0x14040b489*/
        {
          v42 -= 2LL; /*0x14040b48b*/
          if ( !v45 || (v46 = v43, *(_BYTE *)(v43 + v42) != 13) ) /*0x14040b49c*/
            v46 = 0; /*0x14040b49e*/
          if ( v46 ) /*0x14040b4a3*/
            v43 = v46; /*0x14040b4a7*/
          else
            v42 = v45; /*0x14040b4a3*/
        }
      }
      else
      {
        if ( HIBYTE(v152) ) /*0x14040b454*/
          break; /*0x14040b454*/
        HIBYTE(v152) = 1; /*0x14040b45a*/
        v42 = v145 - v144; /*0x14040b466*/
        if ( ((unsigned __int8)v152 | (v145 != v144)) != 1 ) /*0x14040b471*/
          break; /*0x14040b471*/
        v43 = v146 + v144; /*0x14040b477*/
        v45 = v42 - 1; /*0x14040b47e*/
        if ( v42 ) /*0x14040b482*/
          goto LABEL_58; /*0x14040b482*/
      }
LABEL_65:
      v47 = sub_14033BC10(v43, v42); /*0x14040b4b6*/
      v51 = v50; /*0x14040b4b9*/
      v52 = v50 - 30; /*0x14040b4bc*/
      switch ( v50 ) /*0x14040b4d8*/
      {
        case 30LL: /*0x14040b4d8*/
          v52 = _mm_movemask_epi8( /*0x14040b4ef*/
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v47 + 14)), si128),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v47), v38)));
          if ( v52 != 0xFFFF ) /*0x14040b4f8*/
            goto LABEL_75; /*0x14040b4f8*/
          goto LABEL_139; /*0x14040b4f8*/
        case 36LL: /*0x14040b4d8*/
          v52 = sub_1416847B0( /*0x14040b54f*/
                  v47,
                  "# <<< aimami-relay managed end (top)# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)router"
                  "-takeover-backup.json",
                  36);
          if ( !v52 ) /*0x14040b556*/
            goto LABEL_139; /*0x14040b556*/
          goto LABEL_75; /*0x14040b556*/
        case 39LL: /*0x14040b4d8*/
          v52 = sub_1416847B0(v47, &xmmword_141753237, 39); /*0x14040b513*/
          if ( v52 ) /*0x14040b51a*/
            goto LABEL_75; /*0x14040b51a*/
LABEL_139:
          v164 = 0; /*0x14040bac4*/
          continue; /*0x14040bace*/
        case 55LL: /*0x14040b4d8*/
          v52 = sub_1416847B0(v47, &xmmword_141752F5B, 55); /*0x14040b56d*/
          if ( v52 ) /*0x14040b574*/
            goto LABEL_75; /*0x14040b574*/
          goto LABEL_84; /*0x14040b574*/
        case 60LL: /*0x14040b4d8*/
          v52 = sub_1416847B0( /*0x14040b63f*/
                  v47,
                  "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)router-takeover-backup.json",
                  60);
          if ( !v52 ) /*0x14040b646*/
            goto LABEL_84; /*0x14040b646*/
          goto LABEL_75; /*0x14040b646*/
        case 64LL: /*0x14040b4d8*/
          v52 = sub_1416847B0(v47, &xmmword_1417530C4, 64); /*0x14040b531*/
          if ( v52 ) /*0x14040b538*/
            goto LABEL_75; /*0x14040b538*/
LABEL_84:
          LOBYTE(v52) = 1; /*0x14040b64c*/
          v164 = v52; /*0x14040b64e*/
          v39 = 1; /*0x14040b654*/
          goto LABEL_51; /*0x14040b657*/
        default:
LABEL_75:
          if ( (v39 & 1) == 0 ) /*0x14040b584*/
          {
            v84 = v160; /*0x14040ba50*/
            v85 = v156; /*0x14040ba5a*/
            v6 = v155; /*0x14040ba67*/
            if ( v42 > v160 - v156 ) /*0x14040ba6e*/
            {
              sub_141688D30((unsigned int)&v160, v156, v42, 1, 1); /*0x14040baef*/
              v6 = v161; /*0x14040baf5*/
              v85 = v162; /*0x14040bafc*/
LABEL_135:
              sub_141684120(v85 + v6, v43, v42); /*0x14040ba75*/
              v84 = v160; /*0x14040ba83*/
            }
            else if ( v42 ) /*0x14040ba73*/
            {
              goto LABEL_135; /*0x14040ba73*/
            }
            v86 = v42 + v85; /*0x14040ba8a*/
            v162 = v86; /*0x14040ba8d*/
            if ( v84 == v86 ) /*0x14040ba9a*/
              sub_141688D30((unsigned int)&v160, v84, 1, 1, 1); /*0x14040bb24*/
            v155 = v161; /*0x14040baa3*/
            *(_BYTE *)(v161 + v86) = 10; /*0x14040baaa*/
            v156 = v86 + 1; /*0x14040bab1*/
            v162 = v86 + 1; /*0x14040bab8*/
            continue; /*0x14040babf*/
          }
          if ( !v51 || *(_BYTE *)v47 != 91 || *(_BYTE *)(v47 + v51 - 1) != 93 ) /*0x14040b5a1*/
          {
            v39 = 1; /*0x14040b825*/
            v27 = (v164 & 1) == 0; /*0x14040b828*/
            LOBYTE(v52) = 1; /*0x14040b82f*/
            v164 = v52; /*0x14040b831*/
            if ( !v27 ) /*0x14040b837*/
              goto LABEL_51; /*0x14040b837*/
            v76 = v160; /*0x14040b83d*/
            v77 = v156; /*0x14040b847*/
            if ( v42 > v160 - v156 ) /*0x14040b854*/
            {
              sub_141688D30((unsigned int)&v160, v156, v42, 1, 1); /*0x14040b9d0*/
              v78 = v161; /*0x14040b9d6*/
              v77 = v162; /*0x14040b9dd*/
LABEL_114:
              sub_141684120(v77 + v78, v43, v42); /*0x14040b866*/
              v76 = v160; /*0x14040b874*/
            }
            else
            {
              v78 = v155; /*0x14040b85d*/
              if ( v42 ) /*0x14040b864*/
                goto LABEL_114; /*0x14040b864*/
            }
            v162 = v42 + v77; /*0x14040b87e*/
            v79 = v42 + v77; /*0x14040b885*/
            if ( v76 == v42 + v77 ) /*0x14040b88b*/
              goto LABEL_116; /*0x14040b88b*/
            goto LABEL_117; /*0x14040b88b*/
          }
          if ( v51 == 1 || *(char *)(v47 + 1) <= -65 ) /*0x14040b5b5*/
            sub_1416C2F60(v47, v51, 1, v51 - 1, (__int64)&off_141782B88); /*0x14040c287*/
          v53 = v47 + 1; /*0x14040b5bb*/
          v54 = v51 - 2; /*0x14040b5be*/
          v55 = sub_14040D290(v53, v54, v48, v49); /*0x14040b5c8*/
          LOBYTE(v6) = 1; /*0x14040b5cd*/
          v164 = v6; /*0x14040b5cf*/
          v39 = 1; /*0x14040b5d5*/
          if ( !v55 ) /*0x14040b5da*/
          {
            sub_14040D940(&v157, v53, v54); /*0x14040b5ed*/
            _EBX = ~_mm_movemask_epi8(_mm_load_si128(v143)); /*0x14040b5ff*/
            v154 = v157.m128i_i64[1]; /*0x14040b608*/
            v57 = v158; /*0x14040b60c*/
            v6 = v158 + 1; /*0x14040b613*/
            v133 = v158 + 1; /*0x14040b617*/
            v142 = v143; /*0x14040b61b*/
            v58 = v36; /*0x14040b61f*/
            v59 = v159; /*0x14040b622*/
            v135 = v158; /*0x14040b629*/
            do /*0x14040b677*/
            {
              v132 = v59; /*0x14040b67d*/
              v18 = v59 == 0; /*0x14040b681*/
              _RAX = v59 - 1; /*0x14040b681*/
              if ( v18 ) /*0x14040b685*/
                break; /*0x14040b685*/
              v131 = _RAX; /*0x14040b68e*/
              if ( (_WORD)_EBX ) /*0x14040b692*/
              {
                v61 = v142; /*0x14040b694*/
              }
              else
              {
                v61 = v142; /*0x14040b69a*/
                do /*0x14040b6b9*/
                {
                  v62 = _mm_load_si128(v58); /*0x14040b6a0*/
                  v61 -= 24; /*0x14040b6a4*/
                  ++v58; /*0x14040b6ab*/
                  _EBX = _mm_movemask_epi8(v62) ^ 0xFFFF; /*0x14040b6b3*/
                }
                while ( !_EBX ); /*0x14040b6b9*/
              }
              __asm { tzcnt eax, ebx } /*0x14040b6bb*/
              v63 = -3 * _RAX; /*0x14040b6c2*/
              v64 = v61[-1].m128i_i64[v63]; /*0x14040b6c6*/
              v142 = v61; /*0x14040b6cb*/
              v65 = sub_14040D940(&v136, v64, v61->m128i_i64[v63 - 1]); /*0x14040b6d8*/
              v6 = v136.m128i_i64[1]; /*0x14040b6de*/
              v66 = v137; /*0x14040b6e2*/
              v67 = v154; /*0x14040b6e9*/
              v163 = (_BYTE *)v136.m128i_i64[1]; /*0x14040b6ed*/
              if ( v57 < (unsigned __int64)v137 ) /*0x14040b6f4*/
              {
LABEL_96:
                if ( v66 >= v135 ) /*0x14040b754*/
                {
                  v71 = 16; /*0x14040b75f*/
                  v72 = v133; /*0x14040b765*/
                  do /*0x14040b7b1*/
                  {
                    LOBYTE(v65) = --v72 == 0; /*0x14040b773*/
                    v153 = v65; /*0x14040b776*/
                    if ( !v72 ) /*0x14040b779*/
                      break; /*0x14040b779*/
                    v73 = *(_QWORD *)(v6 + v71); /*0x14040b77b*/
                    if ( v73 != *(_QWORD *)(v67 + v71) ) /*0x14040b783*/
                      break; /*0x14040b783*/
                    v140 = v71 + 24; /*0x14040b789*/
                    LODWORD(v65) = sub_1416847B0(*(_QWORD *)(v6 + v71 - 8), *(_QWORD *)(v154 + v71 - 8), v73); /*0x14040b79b*/
                    v6 = (__int64)v163; /*0x14040b7a0*/
                    v67 = v154; /*0x14040b7a7*/
                    v71 = v140; /*0x14040b7ab*/
                  }
                  while ( !(_DWORD)v65 ); /*0x14040b7b1*/
                }
                else
                {
                  v153 = 0; /*0x14040b756*/
                }
              }
              else
              {
                v68 = v137 + 1; /*0x14040b6f6*/
                v69 = 16; /*0x14040b6fa*/
                while ( --v68 ) /*0x14040b700*/
                {
                  v70 = *(_QWORD *)(v67 + v69); /*0x14040b709*/
                  if ( v70 == *(_QWORD *)(v6 + v69) ) /*0x14040b711*/
                  {
                    v140 = v69 + 24; /*0x14040b717*/
                    LODWORD(v65) = sub_1416847B0(*(_QWORD *)(v154 + v69 - 8), *(_QWORD *)(v6 + v69 - 8), v70); /*0x14040b729*/
                    v6 = (__int64)v163; /*0x14040b72e*/
                    v67 = v154; /*0x14040b735*/
                    v69 = v140; /*0x14040b739*/
                    if ( !(_DWORD)v65 ) /*0x14040b73f*/
                      continue; /*0x14040b73f*/
                  }
                  goto LABEL_96; /*0x14040b73f*/
                }
                LOBYTE(v65) = 1; /*0x14040b7b5*/
                v153 = v65; /*0x14040b7b7*/
              }
              if ( v66 ) /*0x14040b7c3*/
              {
                v74 = (_QWORD *)(v6 + 8); /*0x14040b7c5*/
                do /*0x14040b7d7*/
                {
                  v75 = *(v74 - 1); /*0x14040b7d9*/
                  if ( v75 ) /*0x14040b7e0*/
                  {
                    sub_140001660(*v74, v75, 1); /*0x14040b7eb*/
                    v6 = (__int64)v163; /*0x14040b7f0*/
                  }
                  v74 += 3; /*0x14040b7d0*/
                  --v66; /*0x14040b7d4*/
                }
                while ( v66 ); /*0x14040b7d7*/
              }
              if ( v136.m128i_i64[0] ) /*0x14040b807*/
                sub_140001660(v6, 24 * v136.m128i_i64[0], 8); /*0x14040b81b*/
              _EBX &= _EBX - 1; /*0x14040b665*/
              v57 = v135; /*0x14040b66f*/
              v59 = v131; /*0x14040b673*/
            }
            while ( !(_BYTE)v153 ); /*0x14040b677*/
            if ( v57 ) /*0x14040b8c9*/
            {
              v80 = (_QWORD *)(v154 + 8); /*0x14040b8cf*/
              do /*0x14040b8e7*/
              {
                v81 = *(v80 - 1); /*0x14040b8e9*/
                if ( v81 ) /*0x14040b8f0*/
                  sub_140001660(*v80, v81, 1); /*0x14040b8fb*/
                v80 += 3; /*0x14040b8e0*/
                --v57; /*0x14040b8e4*/
              }
              while ( v57 ); /*0x14040b8e7*/
            }
            if ( v157.m128i_i64[0] ) /*0x14040b90c*/
              sub_140001660(v154, 24 * v157.m128i_i64[0], 8); /*0x14040b920*/
            v39 = 1; /*0x14040b925*/
            if ( !v132 ) /*0x14040b92d*/
            {
              v76 = v160; /*0x14040b933*/
              v82 = v156; /*0x14040b93d*/
              if ( v42 > v160 - v156 ) /*0x14040b94a*/
              {
                sub_141688D30((unsigned int)&v160, v156, v42, 1, 1); /*0x14040ba32*/
                v83 = v161; /*0x14040ba38*/
                v82 = v162; /*0x14040ba3f*/
LABEL_128:
                sub_141684120(v82 + v83, v43, v42); /*0x14040b95c*/
                v76 = v160; /*0x14040b96a*/
              }
              else
              {
                v83 = v155; /*0x14040b953*/
                if ( v42 ) /*0x14040b95a*/
                  goto LABEL_128; /*0x14040b95a*/
              }
              v162 = v42 + v82; /*0x14040b974*/
              v79 = v42 + v82; /*0x14040b97b*/
              if ( v76 == v42 + v82 ) /*0x14040b981*/
              {
LABEL_116:
                sub_141688D30((unsigned int)&v160, v76, 1, 1, 1); /*0x14040b9e9*/
                v79 = v76; /*0x14040ba0e*/
              }
LABEL_117:
              v155 = v161; /*0x14040b891*/
              *(_BYTE *)(v161 + v79) = 10; /*0x14040b89f*/
              v6 = v79 + 1; /*0x14040b8a3*/
              v156 = v6; /*0x14040b8a6*/
              v162 = v6; /*0x14040b8ad*/
              v39 = 1; /*0x14040b8b4*/
              v164 = 0; /*0x14040b8b7*/
              goto LABEL_51; /*0x14040b8c1*/
            }
          }
          break; /*0x14040b8c1*/
      }
      goto LABEL_51; /*0x14040b92d*/
    }
    break;
  }
  v87 = v156; /*0x14040bb2f*/
  if ( v156 ) /*0x14040bb39*/
  {
    nullsub_1(v6); /*0x14040bb3b*/
    v88 = sub_140001650(v87, 1); /*0x14040bb48*/
    v89 = v155; /*0x14040bb50*/
    if ( !v88 ) /*0x14040bb57*/
      sub_1416C2D4B(1, v87); /*0x14040bb61*/
  }
  else
  {
    v88 = 1; /*0x14040bb6c*/
    v89 = v155; /*0x14040bb71*/
  }
  v157.m128i_i64[0] = v87; /*0x14040bb78*/
  v163 = (_BYTE *)v88; /*0x14040bb7f*/
  v157.m128i_i64[1] = v88; /*0x14040bb86*/
  v158 = 0; /*0x14040bb8d*/
  v144 = 0; /*0x14040bb98*/
  v145 = v87; /*0x14040bba0*/
  v146 = v89; /*0x14040bba4*/
  v147 = v87; /*0x14040bba8*/
  v148 = 0; /*0x14040bbac*/
  v149 = v87; /*0x14040bbb4*/
  v150 = 0xA0000000ALL; /*0x14040bbc2*/
  v151 = 1; /*0x14040bbc6*/
  v152 = 0; /*0x14040bbca*/
  v90 = 0; /*0x14040bbd0*/
  v91 = _mm_cvtsi32_si128(0xB194E7AF); /*0x14040bbd2*/
  v92 = _mm_load_si128((const __m128i *)&xmmword_141748E90); /*0x14040bbda*/
  v93 = _mm_cvtsi32_si128(0xBD83E89F); /*0x14040bbe2*/
  v94 = _mm_load_si128((const __m128i *)&xmmword_141748EB0); /*0x14040bbeb*/
  v95 = _mm_load_si128((const __m128i *)&xmmword_141748E60); /*0x14040bbf4*/
  v96 = _mm_load_si128((const __m128i *)&xmmword_141748E70); /*0x14040bbfd*/
  v97 = 0; /*0x14040bc08*/
  while ( 2 ) /*0x14040bc4f*/
  {
    v99 = v146; /*0x14040bc4f*/
    sub_140421EE0(&v136, &v146); /*0x14040bc5b*/
    if ( v136.m128i_i32[0] == 1 ) /*0x14040bc65*/
    {
      v100 = v144; /*0x14040bc6b*/
      v144 = v137; /*0x14040bc6f*/
      v101 = v137 - v100; /*0x14040bc73*/
      v102 = v100 + v99; /*0x14040bc76*/
      v103 = v137 - v100; /*0x14040bc79*/
      v18 = v103 == 0; /*0x14040bc7c*/
      v104 = v103 - 1; /*0x14040bc7c*/
      if ( v18 ) /*0x14040bc80*/
        goto LABEL_164; /*0x14040bc80*/
      goto LABEL_157; /*0x14040bc80*/
    }
    if ( !HIBYTE(v152) ) /*0x14040bc94*/
    {
      HIBYTE(v152) = 1; /*0x14040bc9a*/
      v101 = v145 - v144; /*0x14040bca6*/
      if ( ((unsigned __int8)v152 | (v145 != v144)) == 1 ) /*0x14040bcb1*/
      {
        v102 = v146 + v144; /*0x14040bcb7*/
        v104 = v101 - 1; /*0x14040bcbe*/
        if ( !v101 ) /*0x14040bcc2*/
          goto LABEL_164; /*0x14040bcc2*/
LABEL_157:
        if ( *(_BYTE *)(v102 + v104) == 10 ) /*0x14040bcca*/
        {
          v101 -= 2LL; /*0x14040bccc*/
          if ( !v104 || (v105 = v102, *(_BYTE *)(v102 + v101) != 13) ) /*0x14040bcde*/
            v105 = 0; /*0x14040bce0*/
          if ( v105 ) /*0x14040bce5*/
            v102 = v105; /*0x14040bce9*/
          else
            v101 = v104; /*0x14040bce5*/
        }
LABEL_164:
        v106 = (_BYTE *)sub_14033BC10(v102, v101); /*0x14040bced*/
        v109 = v107; /*0x14040bcf8*/
        if ( !v107 ) /*0x14040bcfe*/
        {
          if ( v97 ) /*0x14040be00*/
          {
LABEL_150:
            v97 = v107 != 0; /*0x14040bc40*/
            if ( (v152 & 0x100) != 0 ) /*0x14040bc4d*/
              break; /*0x14040bc4d*/
            continue; /*0x14040bc4d*/
          }
          goto LABEL_182; /*0x14040be04*/
        }
        v110 = v106; /*0x14040bd04*/
        if ( *v106 == 91 && v106[v107 - 1] == 93 ) /*0x14040bd12*/
        {
          v111 = v107 - 1; /*0x14040bd17*/
          if ( v107 == 1 || (char)v106[1] < -64 ) /*0x14040bd25*/
            sub_1416C2F60((_DWORD)v106, v107, 1, v111, (__int64)&off_141753298); /*0x14040c261*/
          v97 = 1; /*0x14040bd3b*/
          if ( (unsigned __int8)sub_14040D290(v106 + 1, v107 - 2, v108, v111) ) /*0x14040bd36*/
          {
            if ( (v152 & 0x100) != 0 ) /*0x14040bd56*/
              break; /*0x14040bd56*/
            continue; /*0x14040bd56*/
          }
        }
        else if ( v97 ) /*0x14040bd70*/
        {
          goto LABEL_150; /*0x14040bd74*/
        }
        if ( v109 >= 6 ) /*0x14040bd7e*/
        {
          if ( !(*(_DWORD *)v110 ^ 0x4C432023 | *((unsigned __int16 *)v110 + 2) ^ 0x3A49) /*0x14040bdaf*/
            && (unsigned __int8)sub_1404242F0(&qword_1417532B0, 12, v110, v109) )
          {
            goto LABEL_188; /*0x14040bdaf*/
          }
          if ( v109 >= 0x28 ) /*0x14040bdc1*/
          {
            if ( !(unsigned int)sub_1416847B0(&unk_1417532BC, v110, 40) ) /*0x14040be9b*/
              goto LABEL_188; /*0x14040be9b*/
          }
          else if ( v109 < 0x15 ) /*0x14040bdcb*/
          {
            if ( v109 == 20 ) /*0x14040bdd5*/
            {
              if ( _mm_movemask_epi8( /*0x14040bdf7*/
                     _mm_and_si128(
                       _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v110), v92),
                       _mm_cmpeq_epi8(_mm_cvtsi32_si128(*((_DWORD *)v110 + 4)), v91))) == 0xFFFF )
                goto LABEL_188; /*0x14040bdf7*/
              goto LABEL_200; /*0x14040bdf7*/
            }
            goto LABEL_182; /*0x14040bdd5*/
          }
          if ( _mm_movemask_epi8( /*0x14040bf00*/
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v110 + 5)), v95),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v110), v96))) == 0xFFFF
            || v109 >= 0x25 && !(unsigned int)sub_1416847B0(&unk_1417532E4, v110, 37)
            || _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v110), v92),
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*((_DWORD *)v110 + 4)), v91))) == 0xFFFF )
          {
            goto LABEL_188; /*0x14040bf00*/
          }
          if ( v109 >= 0x23 ) /*0x14040bf0a*/
          {
            if ( !(unsigned int)sub_1416847B0(&unk_141753309, v110, 35) ) /*0x14040bf2b*/
              goto LABEL_188; /*0x14040bf2b*/
          }
          else if ( v109 != 34 ) /*0x14040bf10*/
          {
            goto LABEL_200; /*0x14040bf10*/
          }
          if ( !(unsigned int)sub_1416847B0(&unk_14175332C, v110, 34) ) /*0x14040bf48*/
            goto LABEL_188; /*0x14040bf48*/
LABEL_200:
          if ( _mm_movemask_epi8( /*0x14040bf70*/
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*((_DWORD *)v110 + 4)), v93),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v110), v94))) == 0xFFFF )
          {
LABEL_188:
            v97 = 0; /*0x14040be70*/
            if ( (v152 & 0x100) != 0 ) /*0x14040be79*/
              break; /*0x14040be79*/
            continue; /*0x14040be79*/
          }
        }
LABEL_182:
        v112 = v157.m128i_i64[0]; /*0x14040be0a*/
        if ( v101 > v157.m128i_i64[0] - v90 ) /*0x14040be1a*/
        {
          sub_141688D30((unsigned int)&v157, v90, v101, 1, 1); /*0x14040bf97*/
          v163 = (_BYTE *)v157.m128i_i64[1]; /*0x14040bfa4*/
          v90 = v158; /*0x14040bfab*/
LABEL_184:
          sub_141684120(&v163[v90], v102, v101); /*0x14040be25*/
          v112 = v157.m128i_i64[0]; /*0x14040be3a*/
        }
        else if ( v101 ) /*0x14040be23*/
        {
          goto LABEL_184; /*0x14040be23*/
        }
        v113 = v101 + v90; /*0x14040be41*/
        v158 = v113; /*0x14040be44*/
        if ( v112 == v113 ) /*0x14040be4e*/
          sub_141688D30((unsigned int)&v157, v112, 1, 1, 1); /*0x14040bfd3*/
        v163 = (_BYTE *)v157.m128i_i64[1]; /*0x14040be5b*/
        *(_BYTE *)(v157.m128i_i64[1] + v113) = 10; /*0x14040be62*/
        v90 = v113 + 1; /*0x14040be66*/
        v158 = v90; /*0x14040be69*/
        goto LABEL_188; /*0x14040be69*/
      }
    }
    break;
  }
  if ( v90 < 2 ) /*0x14040bc13*/
  {
    v98 = a1; /*0x14040bc19*/
    if ( !v90 ) /*0x14040bc20*/
      goto LABEL_218; /*0x14040bc20*/
LABEL_148:
    if ( *v163 != 10 ) /*0x14040bc30*/
      goto LABEL_218; /*0x14040bc30*/
    v90 = 0; /*0x14040bc36*/
LABEL_217:
    v158 = v90; /*0x14040c0ad*/
    goto LABEL_218; /*0x14040c0ad*/
  }
  v98 = a1; /*0x14040bfec*/
  if ( *(_WORD *)&v163[v90 - 2] != 2570 ) /*0x14040bff0*/
    goto LABEL_217; /*0x14040bff0*/
  v114 = &v163[v90]; /*0x14040bff6*/
  v115 = &v163[v90 - 2]; /*0x14040bffe*/
  while ( 2 ) /*0x14040c010*/
  {
    v116 = -1; /*0x14040c010*/
    if ( (char)*(v114 - 1) < 0 ) /*0x14040c01b*/
    {
      v117 = *v115; /*0x14040c01d*/
      if ( v117 > -65 ) /*0x14040c023*/
      {
        v120 = v117 & 0x1F; /*0x14040c043*/
        if ( v120 >= 2 ) /*0x14040c049*/
        {
LABEL_213:
          v116 = -2; /*0x14040c060*/
          if ( v120 >= 0x20 ) /*0x14040c06a*/
            v116 = (v120 < 0x400) | 0xFFFFFFFFFFFFFFFCuLL; /*0x14040c077*/
        }
      }
      else
      {
        v118 = *(v114 - 3); /*0x14040c025*/
        if ( v118 > -65 ) /*0x14040c02e*/
          v119 = v118 & 0xF; /*0x14040c04d*/
        else
          v119 = ((*(v114 - 4) & 7) << 6) | v118 & 0x3F; /*0x14040c03e*/
        v120 = (v119 << 6) | v117 & 0x3F; /*0x14040c058*/
        if ( v120 >= 2 ) /*0x14040c05e*/
          goto LABEL_213; /*0x14040c05e*/
      }
    }
    v90 += v116; /*0x14040c080*/
    if ( v90 >= 2 ) /*0x14040c087*/
    {
      v114 = &v163[v90]; /*0x14040c094*/
      v115 = &v163[v90 - 2]; /*0x14040c09c*/
      if ( *(_WORD *)v115 != 2570 ) /*0x14040c0a7*/
        goto LABEL_217; /*0x14040c0a7*/
      continue; /*0x14040c0a7*/
    }
    break;
  }
  v158 = v90; /*0x14040c209*/
  if ( v90 ) /*0x14040c213*/
    goto LABEL_148; /*0x14040c213*/
LABEL_218:
  HIDWORD(_RAX) = HIDWORD(v158); /*0x14040c0b4*/
  v98[1].m128i_i64[0] = v158; /*0x14040c0bb*/
  *v98 = _mm_loadu_si128(&v157); /*0x14040c0c7*/
  if ( v160 ) /*0x14040c0d6*/
    HIDWORD(_RAX) = (unsigned __int64)sub_140001660(v155, v160, 1) >> 32; /*0x14040c0e5*/
  if ( v141 ) /*0x14040c0ef*/
  {
    if ( v159 ) /*0x14040c0fd*/
    {
      v122 = v143; /*0x14040c103*/
      _EBX = ~_mm_movemask_epi8(_mm_load_si128(v143)); /*0x14040c10f*/
      do /*0x14040c13b*/
      {
        if ( !(_WORD)_EBX ) /*0x14040c140*/
        {
          do /*0x14040c169*/
          {
            v124 = _mm_load_si128(v36); /*0x14040c150*/
            v122 -= 24; /*0x14040c154*/
            ++v36; /*0x14040c15b*/
            _EBX = _mm_movemask_epi8(v124) ^ 0xFFFF; /*0x14040c163*/
          }
          while ( !_EBX ); /*0x14040c169*/
        }
        __asm { tzcnt eax, ebx } /*0x14040c16b*/
        v125 = -3 * _RAX; /*0x14040c172*/
        v126 = *((_QWORD *)&v122[-1] + v125 - 1); /*0x14040c176*/
        if ( v126 ) /*0x14040c17e*/
          sub_140001660(v122[-1].m128i_i64[v125], v126, 1); /*0x14040c18e*/
        _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x14040c12d*/
        _EBX &= _EBX - 1; /*0x14040c12f*/
        --v159; /*0x14040c131*/
      }
      while ( v159 ); /*0x14040c13b*/
    }
    v127 = (24 * v141 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x14040c1a5*/
    if ( v127 + v141 != -17 ) /*0x14040c1b0*/
      sub_140001660((char *)v143 - v127, v127 + v141 + 17, 16); /*0x14040c1bf*/
  }
  return v98; /*0x14040c1c7*/
}
