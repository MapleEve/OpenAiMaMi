// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall collect_diagnostic_main_threads(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // r12
  _QWORD *v3; // rdi
  __int64 *v4; // rax
  __int64 *v5; // r14
  __int64 v6; // r8
  char v7; // si
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int128 v13; // kr50_16
  __int64 v14; // rbx
  __int64 v15; // r8
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  __m128i v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 *v35; // rsi
  __int64 v36; // rax
  __m128i v37; // xmm6
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int128 v47; // xmm6
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // r12
  __int64 v51; // rdx
  __int64 result; // rax
  unsigned __int64 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __m128i v56; // xmm0
  __m128i si128; // xmm0
  __int64 v58; // rcx
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __int64 v63; // rax
  __int128 v64; // xmm6
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // [rsp+20h] [rbp-60h] BYREF
  __int128 v68; // [rsp+28h] [rbp-58h]
  __int64 v69; // [rsp+38h] [rbp-48h]
  __int128 v70; // [rsp+40h] [rbp-40h]
  __int128 v71; // [rsp+50h] [rbp-30h]
  __int128 v72; // [rsp+60h] [rbp-20h]
  __int128 v73; // [rsp+70h] [rbp-10h]
  __int128 v74; // [rsp+80h] [rbp+0h]
  __int64 v75; // [rsp+90h] [rbp+10h]
  __int64 *v76; // [rsp+98h] [rbp+18h]
  __int64 v77; // [rsp+A0h] [rbp+20h]
  __int64 v78; // [rsp+A8h] [rbp+28h]
  __m128i v79; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v80; // [rsp+C0h] [rbp+40h]
  __int128 v81; // [rsp+D0h] [rbp+50h]
  _QWORD v82[2]; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v83; // [rsp+100h] [rbp+80h] BYREF
  __int128 v84; // [rsp+110h] [rbp+90h]
  __int128 v85; // [rsp+120h] [rbp+A0h]
  __int128 v86; // [rsp+130h] [rbp+B0h]
  __m128i v87; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v88; // [rsp+158h] [rbp+D8h]
  __m128i v89; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v90; // [rsp+170h] [rbp+F0h]
  __int128 v91; // [rsp+180h] [rbp+100h]
  __int128 v92; // [rsp+190h] [rbp+110h]
  __int64 *v93; // [rsp+1A0h] [rbp+120h]
  __int64 v94; // [rsp+1A8h] [rbp+128h]
  __int128 v95; // [rsp+1B0h] [rbp+130h]
  __m128i v96; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v97; // [rsp+1D0h] [rbp+150h]
  __int128 v98; // [rsp+1E0h] [rbp+160h]
  __int128 v99; // [rsp+1F0h] [rbp+170h]
  __m256i v100; // [rsp+200h] [rbp+180h] BYREF
  __int128 v101; // [rsp+220h] [rbp+1A0h]
  __int128 v102; // [rsp+230h] [rbp+1B0h]
  __int64 v103; // [rsp+240h] [rbp+1C0h]
  __int64 v104; // [rsp+248h] [rbp+1C8h]
  __int64 v105; // [rsp+250h] [rbp+1D0h]
  __int64 v106; // [rsp+258h] [rbp+1D8h]
  __m128i v107; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v108; // [rsp+270h] [rbp+1F0h]
  __int64 v109; // [rsp+278h] [rbp+1F8h]
  __int64 v110; // [rsp+280h] [rbp+200h]
  _BYTE v111[80]; // [rsp+288h] [rbp+208h] BYREF
  __int128 v112; // [rsp+2D8h] [rbp+258h]
  __int128 v113; // [rsp+2E8h] [rbp+268h]
  __int64 v114; // [rsp+2F8h] [rbp+278h]
  __int64 v115; // [rsp+300h] [rbp+280h]
  __int64 v116; // [rsp+308h] [rbp+288h]
  __int64 v117; // [rsp+310h] [rbp+290h]
  __int64 v118; // [rsp+318h] [rbp+298h]
  __int64 v119; // [rsp+320h] [rbp+2A0h]
  __int64 v120; // [rsp+328h] [rbp+2A8h]
  __int64 v121; // [rsp+330h] [rbp+2B0h]
  char v122; // [rsp+33Fh] [rbp+2BFh]
  __m128i v123; // [rsp+340h] [rbp+2C0h] BYREF
  char v124; // [rsp+356h] [rbp+2D6h]
  char v125; // [rsp+357h] [rbp+2D7h]
  __int64 v126; // [rsp+358h] [rbp+2D8h]

  v126 = -2; /*0x14078ac52*/
  v110 = a1; /*0x14078ac5d*/
  v107.m128i_i64[0] = 0; /*0x14078ac64*/
  v107.m128i_i64[1] = 8; /*0x14078ac6f*/
  v108 = 0; /*0x14078ac7a*/
  sub_140712830(v111); /*0x14078ac8c*/
  v1 = *(_QWORD *)&v111[8] + 32LL * *(_QWORD *)&v111[16]; /*0x14078acab*/
  v75 = *(_QWORD *)&v111[8]; /*0x14078acaf*/
  v95 = *(_OWORD *)v111; /*0x14078acb3*/
  v77 = *(_QWORD *)v111; /*0x14078acba*/
  v78 = v1; /*0x14078acbe*/
  v2 = 32LL * *(_QWORD *)&v111[16] - 32; /*0x14078acc2*/
  v3 = (_QWORD *)(*(_QWORD *)&v111[8] + 40LL); /*0x14078acc6*/
  v4 = *(__int64 **)&v111[8]; /*0x14078acd8*/
  v94 = v1; /*0x14078acdb*/
  if ( *(_QWORD *)&v111[8] == v1 ) /*0x14078ace5*/
    goto LABEL_85; /*0x14078ace5*/
  while ( 1 ) /*0x14078aceb*/
  {
    v5 = v4 + 4; /*0x14078aceb*/
    v76 = v4 + 4; /*0x14078acef*/
    if ( *v4 == -1 ) /*0x14078acfa*/
      break; /*0x14078acfa*/
    v103 = *v4; /*0x14078ad00*/
    v6 = v4[2]; /*0x14078ad0b*/
    v7 = *((_BYTE *)v4 + 24); /*0x14078ad0f*/
    v116 = v4[1]; /*0x14078ad16*/
    v118 = v6; /*0x14078ad1d*/
    sub_1406C1800(v111, v116, v6, 32769); /*0x14078ad2a*/
    if ( BYTE8(v113) == 0xFF ) /*0x14078ad39*/
    {
      v56 = _mm_loadu_si128((const __m128i *)v111); /*0x14078b80f*/
      v99 = *(_OWORD *)&v111[48]; /*0x14078b82c*/
      v98 = *(_OWORD *)&v111[32]; /*0x14078b833*/
      v97 = *(_OWORD *)&v111[16]; /*0x14078b83a*/
      v96 = v56; /*0x14078b841*/
      v87.m128i_i64[0] = v116; /*0x14078b850*/
      v87.m128i_i64[1] = v118; /*0x14078b85e*/
      v100.m256i_i64[0] = (__int64)&v87; /*0x14078b86c*/
      v100.m256i_i64[1] = (__int64)sub_14148F3A0; /*0x14078b87a*/
      v100.m256i_i64[2] = (__int64)&v96; /*0x14078b888*/
      v100.m256i_i64[3] = (__int64)sub_140FB8910; /*0x14078b896*/
      sub_14149C0F0(&v79, &unk_141788C74, &v100); /*0x14078b8af*/
      *(__m128i *)v100.m256i_i8 = _mm_loadu_si128(&v79); /*0x14078b8ba*/
      v100.m256i_i64[2] = v80; /*0x14078b8c6*/
      sub_1406CBAD0(&v96); /*0x14078b8d4*/
      si128 = _mm_load_si128((const __m128i *)&v100); /*0x14078b8e1*/
      v83 = si128; /*0x14078b8e9*/
      *(_QWORD *)&v84 = v100.m256i_i64[2]; /*0x14078b8f1*/
      v58 = v110; /*0x14078b8f8*/
      *(_QWORD *)(v110 + 24) = v100.m256i_i64[2]; /*0x14078b8ff*/
      *(__m128i *)(v58 + 8) = si128; /*0x14078b903*/
      *(_QWORD *)v58 = 10; /*0x14078b908*/
      v49 = v103; /*0x14078b90f*/
      if ( v103 ) /*0x14078b919*/
        goto LABEL_69; /*0x14078b919*/
      goto LABEL_70; /*0x14078b919*/
    }
    *(_QWORD *)&v90 = *(_QWORD *)&v111[24]; /*0x14078ad51*/
    v89 = *(__m128i *)&v111[8]; /*0x14078ad5c*/
    v70 = *(_OWORD *)&v111[32]; /*0x14078ad7b*/
    v71 = *(_OWORD *)&v111[48]; /*0x14078ad80*/
    v72 = *(_OWORD *)&v111[64]; /*0x14078ad85*/
    v73 = v112; /*0x14078ad8a*/
    v74 = v113; /*0x14078ad9e*/
    *(_QWORD *)&v84 = *(_QWORD *)&v111[24]; /*0x14078adad*/
    v83 = *(__m128i *)&v111[8]; /*0x14078adbb*/
    v69 = *(_QWORD *)&v111[24]; /*0x14078adc9*/
    v68 = *(_OWORD *)&v111[8]; /*0x14078add4*/
    v67 = *(_QWORD *)v111; /*0x14078add8*/
    ((void (__fastcall *)(_BYTE *, __int64 *, __int64, _QWORD))sub_140FB95D0)(v111, &v67, 3, 0); /*0x14078adf3*/
    if ( *(_QWORD *)v111 != -1 ) /*0x14078ae01*/
      sub_1406CBAD0(v111); /*0x14078ae06*/
    ((void (__fastcall *)(_BYTE *, __int64 *, const char *, __int64))sub_140716FD0)(v111, &v67, aSelectIdRollou_2, 132); /*0x14078ae20*/
    if ( *(_DWORD *)v111 == 1 ) /*0x14078ae2d*/
    {
      v59 = _mm_loadu_si128((const __m128i *)&v111[8]); /*0x14078b92b*/
      v99 = *(_OWORD *)&v111[56]; /*0x14078b93b*/
      v98 = *(_OWORD *)&v111[40]; /*0x14078b942*/
      v97 = *(_OWORD *)&v111[24]; /*0x14078b949*/
      v96 = v59; /*0x14078b950*/
      v82[0] = v116; /*0x14078b95f*/
      v82[1] = v118; /*0x14078b96a*/
      v100.m256i_i64[0] = (__int64)v82; /*0x14078b972*/
      v100.m256i_i64[1] = (__int64)sub_14148F3A0; /*0x14078b980*/
      v100.m256i_i64[2] = (__int64)&v96; /*0x14078b98e*/
      v100.m256i_i64[3] = (__int64)sub_140FB8910; /*0x14078b99c*/
      sub_14149C0F0(&v87, &unk_141788D52, &v100); /*0x14078b9b8*/
      *(__m128i *)v100.m256i_i8 = _mm_loadu_si128(&v87); /*0x14078b9c6*/
      v100.m256i_i64[2] = v88; /*0x14078b9d5*/
      sub_1406CBAD0(&v96); /*0x14078b9e3*/
      v60 = _mm_load_si128((const __m128i *)&v100); /*0x14078b9e9*/
      v61 = *(_OWORD *)&v100.m256i_u64[2]; /*0x14078b9f1*/
      v62 = v101; /*0x14078b9f8*/
      v81 = v101; /*0x14078ba06*/
      v89 = v60; /*0x14078ba0a*/
      v90 = *(_OWORD *)&v100.m256i_u64[2]; /*0x14078ba12*/
      v91 = v101; /*0x14078ba19*/
      v92 = v102; /*0x14078ba20*/
      v63 = v110; /*0x14078ba27*/
      *(_OWORD *)(v110 + 56) = v102; /*0x14078ba2e*/
      *(_OWORD *)(v63 + 40) = v62; /*0x14078ba32*/
      *(_OWORD *)(v63 + 24) = v61; /*0x14078ba36*/
      *(__m128i *)(v63 + 8) = v60; /*0x14078ba3a*/
      *(_QWORD *)v63 = 10; /*0x14078ba3f*/
      goto LABEL_68; /*0x14078ba46*/
    }
    v89 = _mm_loadu_si128((const __m128i *)&v111[8]); /*0x14078ae4a*/
    v83 = v89; /*0x14078ae52*/
    v84 = *(_OWORD *)&v111[24]; /*0x14078ae5a*/
    v85 = *(_OWORD *)&v111[40]; /*0x14078ae61*/
    v86 = *(_OWORD *)&v111[56]; /*0x14078ae68*/
    v8 = sub_1414B6B70(*(_QWORD *)&v111[64]); /*0x14078ae76*/
    if ( v8 ) /*0x14078ae80*/
    {
      *(_OWORD *)v111 = 0x8000000000000013uLL; /*0x14078ba55*/
      *(_QWORD *)&v111[16] = v8; /*0x14078ba67*/
      v79.m128i_i64[0] = v116; /*0x14078ba75*/
      v79.m128i_i64[1] = v118; /*0x14078ba80*/
      v96.m128i_i64[0] = (__int64)&v79; /*0x14078ba88*/
      v96.m128i_i64[1] = (__int64)sub_14148F3A0; /*0x14078ba96*/
      *(_QWORD *)&v97 = v111; /*0x14078ba9d*/
      *((_QWORD *)&v97 + 1) = sub_140FB8910; /*0x14078baab*/
      sub_14149C0F0(&v100, &unk_141788D00, &v96); /*0x14078bac7*/
      v64 = *(_OWORD *)v100.m256i_i8; /*0x14078bacd*/
      v65 = v100.m256i_i64[2]; /*0x14078bad4*/
      sub_1406CBAD0(v111); /*0x14078bae2*/
      v66 = v110; /*0x14078bae8*/
      *(_QWORD *)v110 = 10; /*0x14078baef*/
      *(_OWORD *)(v66 + 8) = v64; /*0x14078baf6*/
      *(_QWORD *)(v66 + 24) = v65; /*0x14078bafa*/
LABEL_67:
      sub_1406CBC60(&v83); /*0x14078b6bc*/
LABEL_68:
      sub_1406CB500(&v67); /*0x14078b6c9*/
      v49 = v103; /*0x14078b6d3*/
      if ( v103 ) /*0x14078b6dd*/
LABEL_69:
        sub_140001660(v116, v49, 1); /*0x14078b6df*/
LABEL_70:
      if ( (__int64 *)v1 != v5 ) /*0x14078b6f4*/
      {
        v50 = v2 >> 5; /*0x14078b6f6*/
        do /*0x14078b707*/
        {
          v51 = *(v3 - 1); /*0x14078b709*/
          if ( v51 ) /*0x14078b710*/
            sub_140001660(*v3, v51, 1); /*0x14078b71b*/
          v3 += 4; /*0x14078b700*/
          --v50; /*0x14078b704*/
        }
        while ( v50 ); /*0x14078b707*/
      }
      if ( (_QWORD)v95 ) /*0x14078b72c*/
        sub_140001660(*((_QWORD *)&v95 + 1), 32 * v95, 8); /*0x14078b73f*/
      sub_140335260(&v107); /*0x14078b74c*/
      result = v107.m128i_i64[0]; /*0x14078b752*/
      if ( v107.m128i_i64[0] ) /*0x14078b75c*/
        return sub_140001660(v107.m128i_i64[1], 112 * v107.m128i_i64[0], 8); /*0x14078b76f*/
      return result; /*0x14078b76f*/
    }
    v122 = v7; /*0x14078ae86*/
    v93 = v5; /*0x14078ae8d*/
    v89.m128i_i64[0] = (__int64)&v83; /*0x14078ae9b*/
    v89.m128i_i64[1] = v8; /*0x14078aea2*/
    while ( 1 ) /*0x14078aeb3*/
    {
      sub_1407BAD50(v111, &v89); /*0x14078aeb3*/
      v9 = *(_QWORD *)v111; /*0x14078aeb9*/
      if ( *(_QWORD *)v111 != -1 ) /*0x14078aec4*/
      {
        v36 = *(_QWORD *)&v111[8]; /*0x14078b3ac*/
        v11 = *(_QWORD *)&v111[24]; /*0x14078b3ba*/
        v10 = *(_QWORD *)&v111[16]; /*0x14078b3ba*/
        v37 = _mm_loadu_si128((const __m128i *)&v111[32]); /*0x14078b3c1*/
        v38 = *(_QWORD *)&v111[56]; /*0x14078b3d0*/
        v39 = *(_QWORD *)&v111[48]; /*0x14078b3d0*/
LABEL_66:
        *(_QWORD *)&v111[48] = v39; /*0x14078b5df*/
        *(_QWORD *)&v111[56] = v38; /*0x14078b5e6*/
        *(_QWORD *)v111 = v9; /*0x14078b5ed*/
        *(_QWORD *)&v111[8] = v36; /*0x14078b5f4*/
        *(_QWORD *)&v111[16] = v10; /*0x14078b5fb*/
        *(_QWORD *)&v111[24] = v11; /*0x14078b602*/
        *(__m128i *)&v111[32] = v37; /*0x14078b609*/
        v79.m128i_i64[0] = v116; /*0x14078b618*/
        v79.m128i_i64[1] = v118; /*0x14078b623*/
        v96.m128i_i64[0] = (__int64)&v79; /*0x14078b62b*/
        v96.m128i_i64[1] = (__int64)sub_14148F3A0; /*0x14078b639*/
        *(_QWORD *)&v97 = v111; /*0x14078b640*/
        *((_QWORD *)&v97 + 1) = sub_140FB8910; /*0x14078b64e*/
        sub_14149C0F0(&v100, &unk_141788D2A, &v96); /*0x14078b66a*/
        v46 = v100.m256i_i64[0]; /*0x14078b670*/
        v47 = *(_OWORD *)&v100.m256i_u64[1]; /*0x14078b677*/
        sub_1406CBAD0(v111); /*0x14078b685*/
        v48 = v110; /*0x14078b68b*/
        *(_QWORD *)v110 = 10; /*0x14078b692*/
        *(_QWORD *)(v48 + 8) = v46; /*0x14078b699*/
        *(_OWORD *)(v48 + 16) = v47; /*0x14078b69d*/
        sub_1406CB9C0(&v89); /*0x14078b6a8*/
        v1 = v94; /*0x14078b6ae*/
        v5 = v93; /*0x14078b6b5*/
        goto LABEL_67; /*0x14078b6b5*/
      }
      if ( !v89.m128i_i64[1] ) /*0x14078aed5*/
        break; /*0x14078aed5*/
      sub_14042B0E0(v111, &v89.m128i_u64[1], 0); /*0x14078aef2*/
      v123.m128i_i64[1] = *(_QWORD *)&v111[8]; /*0x14078af06*/
      v9 = *(_QWORD *)v111; /*0x14078af06*/
      v11 = *(_QWORD *)&v111[24]; /*0x14078af14*/
      v10 = *(_QWORD *)&v111[16]; /*0x14078af14*/
      if ( *(_QWORD *)v111 != -1 ) /*0x14078af1f*/
      {
        v37 = _mm_loadu_si128((const __m128i *)&v111[32]); /*0x14078b3dc*/
        v38 = *(_QWORD *)&v111[56]; /*0x14078b3eb*/
        v39 = *(_QWORD *)&v111[48]; /*0x14078b3eb*/
        v36 = v123.m128i_i64[1]; /*0x14078b3f2*/
        goto LABEL_66; /*0x14078b3f9*/
      }
      v115 = *(_QWORD *)&v111[24]; /*0x14078af25*/
      v120 = *(_QWORD *)&v111[16]; /*0x14078af2c*/
      sub_14042AE90( /*0x14078af4a*/
        v111,
        &v89.m128i_u64[1],
        1,
        &off_141788CB8,
        v67,
        v68,
        *((_QWORD *)&v68 + 1),
        v69,
        v70,
        *((_QWORD *)&v70 + 1),
        v71,
        *((_QWORD *)&v71 + 1),
        v72,
        *((_QWORD *)&v72 + 1),
        v73,
        *((_QWORD *)&v73 + 1),
        v74,
        *((_QWORD *)&v74 + 1),
        v75,
        v76,
        v77,
        v78);
      v123.m128i_i64[0] = *(_QWORD *)&v111[8]; /*0x14078af5e*/
      v9 = *(_QWORD *)v111; /*0x14078af5e*/
      v11 = *(_QWORD *)&v111[24]; /*0x14078af6c*/
      v12 = *(_QWORD *)&v111[16]; /*0x14078af6c*/
      if ( *(_QWORD *)v111 != -1 ) /*0x14078af77*/
      {
        v37 = _mm_loadu_si128((const __m128i *)&v111[32]); /*0x14078b3fe*/
        v121 = *(_QWORD *)&v111[56]; /*0x14078b414*/
        v39 = *(_QWORD *)&v111[48]; /*0x14078b414*/
        if ( v123.m128i_i64[1] ) /*0x14078b42c*/
        {
          v40 = *(_QWORD *)&v111[48]; /*0x14078b42e*/
          sub_140001660(v120, v123.m128i_i64[1], 1); /*0x14078b437*/
          v39 = v40; /*0x14078b43c*/
        }
        v10 = v12; /*0x14078b43f*/
        v36 = v123.m128i_i64[0]; /*0x14078b442*/
        goto LABEL_65; /*0x14078b449*/
      }
      v119 = *(_QWORD *)&v111[16]; /*0x14078af7d*/
      sub_14042B0E0(v111, &v89.m128i_u64[1], 2); /*0x14078af9b*/
      v117 = *(_QWORD *)&v111[8]; /*0x14078afaf*/
      v9 = *(_QWORD *)v111; /*0x14078afaf*/
      v13 = *(_OWORD *)&v111[16]; /*0x14078afbd*/
      if ( *(_QWORD *)v111 != -1 ) /*0x14078afc8*/
      {
        v37 = _mm_loadu_si128((const __m128i *)&v111[32]); /*0x14078b44e*/
        v121 = *(_QWORD *)&v111[56]; /*0x14078b464*/
        v39 = *(_QWORD *)&v111[48]; /*0x14078b464*/
        if ( (unsigned __int64)(v123.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL ) /*0x14078b481*/
        {
          v41 = *(_QWORD *)&v111[48]; /*0x14078b483*/
          sub_140001660(v119, v123.m128i_i64[0], 1); /*0x14078b48c*/
          v39 = v41; /*0x14078b491*/
        }
        if ( v123.m128i_i64[1] ) /*0x14078b4a5*/
        {
          v42 = v39; /*0x14078b4a7*/
          sub_140001660(v120, v123.m128i_i64[1], 1); /*0x14078b4b0*/
          v39 = v42; /*0x14078b4b5*/
        }
        v11 = *((_QWORD *)&v13 + 1); /*0x14078b4b8*/
        v10 = v13; /*0x14078b4bb*/
        v36 = v117; /*0x14078b4be*/
        goto LABEL_65; /*0x14078b4c8*/
      }
      v114 = *(_QWORD *)&v111[16]; /*0x14078afce*/
      sub_14042B0E0(v111, &v89.m128i_u64[1], 3); /*0x14078afec*/
      v109 = *(_QWORD *)&v111[8]; /*0x14078b000*/
      v9 = *(_QWORD *)v111; /*0x14078b000*/
      v14 = *(_QWORD *)&v111[24]; /*0x14078b00e*/
      v15 = *(_QWORD *)&v111[16]; /*0x14078b00e*/
      if ( *(_QWORD *)v111 != -1 ) /*0x14078b019*/
      {
        v37 = _mm_loadu_si128((const __m128i *)&v111[32]); /*0x14078b4cd*/
        v121 = *(_QWORD *)&v111[56]; /*0x14078b4ea*/
        v115 = *(_QWORD *)&v111[48]; /*0x14078b4ea*/
        if ( v117 ) /*0x14078b4fb*/
        {
          v43 = *(_QWORD *)&v111[16]; /*0x14078b4fd*/
          sub_140001660(v114, v117, 1); /*0x14078b50d*/
          v15 = v43; /*0x14078b512*/
        }
        if ( (unsigned __int64)(v123.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL ) /*0x14078b527*/
        {
          v44 = v15; /*0x14078b529*/
          sub_140001660(v119, v123.m128i_i64[0], 1); /*0x14078b539*/
          v15 = v44; /*0x14078b53e*/
        }
        if ( v123.m128i_i64[1] ) /*0x14078b54b*/
        {
          v45 = v15; /*0x14078b54d*/
          sub_140001660(v120, v123.m128i_i64[1], 1); /*0x14078b55d*/
          v10 = v45; /*0x14078b562*/
          v11 = v14; /*0x14078b565*/
        }
        else
        {
          v11 = v14; /*0x14078b5c4*/
          v10 = v15; /*0x14078b5c7*/
        }
        v36 = v109; /*0x14078b5ca*/
        v39 = v115; /*0x14078b5d1*/
LABEL_65:
        v38 = v121; /*0x14078b5d8*/
        goto LABEL_66; /*0x14078b5d8*/
      }
      if ( v123.m128i_i64[1] == -1 ) /*0x14078b02a*/
      {
        v36 = v115; /*0x14078b56a*/
        v9 = v120; /*0x14078b571*/
        v37 = _mm_unpacklo_epi64((__m128i)*((unsigned __int64 *)&v13 + 1), _mm_loadl_epi64(&v123)); /*0x14078b585*/
        v39 = v119; /*0x14078b589*/
        v38 = v11; /*0x14078b590*/
        v11 = v114; /*0x14078b593*/
        v10 = v117; /*0x14078b59a*/
        goto LABEL_66; /*0x14078b5a4*/
      }
      if ( v123.m128i_i64[1] == -2 ) /*0x14078b034*/
        break; /*0x14078b034*/
      v125 = 1; /*0x14078b03a*/
      v124 = 1; /*0x14078b041*/
      v121 = *(_QWORD *)&v111[16]; /*0x14078b05b*/
      v16 = sub_1404E1D70(aSubagent, 10, *(_QWORD *)&v111[16], *(_QWORD *)&v111[24]); /*0x14078b05e*/
      v18 = v117; /*0x14078b066*/
      if ( v16 ) /*0x14078b06d*/
      {
        v19 = v120; /*0x14078b07d*/
        if ( v109 ) /*0x14078b084*/
          sub_140001660(v121, v109, 1); /*0x14078b093*/
        v20 = v123.m128i_i64[1]; /*0x14078b09e*/
        if ( v18 ) /*0x14078b0a5*/
          sub_140001660(v114, v18, 1); /*0x14078b0b7*/
        if ( (unsigned __int64)(v123.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL ) /*0x14078b0cb*/
          sub_140001660(v119, v123.m128i_i64[0], 1); /*0x14078b0da*/
        if ( v20 ) /*0x14078b0e2*/
          sub_140001660(v19, v20, 1); /*0x14078b0f4*/
      }
      else
      {
        v21 = v118; /*0x14078b0fe*/
        if ( v118 < 0 ) /*0x14078b108*/
        {
          v22 = 0; /*0x14078b5a6*/
LABEL_62:
          v125 = 1; /*0x14078b5a8*/
          v124 = 1; /*0x14078b5af*/
          sub_1416C2D4B(v22, v21); /*0x14078b5bc*/
        }
        if ( v118 ) /*0x14078b10e*/
        {
          nullsub_1(v17); /*0x14078b110*/
          v22 = 1; /*0x14078b115*/
          v21 = v118; /*0x14078b11f*/
          v23 = sub_140001650(v118, 1); /*0x14078b129*/
          if ( !v23 ) /*0x14078b131*/
            goto LABEL_62; /*0x14078b131*/
          v104 = v23; /*0x14078b137*/
          sub_141684120(v23, v116, v21); /*0x14078b14b*/
          v24 = v123.m128i_i64[1]; /*0x14078b150*/
          v25 = v119; /*0x14078b15f*/
          if ( v123.m128i_i64[0] == -1 ) /*0x14078b166*/
            goto LABEL_35; /*0x14078b166*/
        }
        else
        {
          v104 = 1; /*0x14078b16f*/
          v24 = v123.m128i_i64[1]; /*0x14078b176*/
          v25 = v119; /*0x14078b185*/
          if ( v123.m128i_i64[0] == -1 ) /*0x14078b18c*/
            goto LABEL_35; /*0x14078b18c*/
        }
        v26 = v25; /*0x14078b191*/
        sub_14033BC10(v25, v11); /*0x14078b194*/
        v24 = v123.m128i_i64[1]; /*0x14078b1a4*/
        v27 = v123.m128i_i64[0]; /*0x14078b1a4*/
        if ( v28 ) /*0x14078b1ab*/
          goto LABEL_36; /*0x14078b1ab*/
        if ( v123.m128i_i64[0] ) /*0x14078b1b7*/
          sub_140001660(v119, v123.m128i_i64[0], 1); /*0x14078b1c6*/
LABEL_35:
        v26 = v105; /*0x14078b1cb*/
        v11 = v106; /*0x14078b1d2*/
        v27 = -1; /*0x14078b1d9*/
LABEL_36:
        *(_QWORD *)&v111[56] = v117; /*0x14078b1e0*/
        *(_QWORD *)&v111[64] = v114; /*0x14078b1f5*/
        *(_QWORD *)&v111[72] = *((_QWORD *)&v13 + 1); /*0x14078b1fc*/
        *(_QWORD *)v111 = v118; /*0x14078b20a*/
        *(_QWORD *)&v111[8] = v104; /*0x14078b218*/
        *(_QWORD *)&v111[16] = v118; /*0x14078b21f*/
        v111[24] = v122; /*0x14078b22d*/
        *(_QWORD *)&v111[32] = v24; /*0x14078b233*/
        *(_QWORD *)&v111[40] = v120; /*0x14078b241*/
        *(_QWORD *)&v111[48] = v115; /*0x14078b24f*/
        *(_QWORD *)&v112 = v27; /*0x14078b256*/
        *((_QWORD *)&v112 + 1) = v13; /*0x14078b25d*/
        *(_QWORD *)&v113 = v11; /*0x14078b264*/
        BYTE8(v113) = 1; /*0x14078b26b*/
        v29 = v108; /*0x14078b272*/
        if ( v108 == v107.m128i_i64[0] ) /*0x14078b280*/
          sub_141689030(&v107); /*0x14078b289*/
        v30 = v107.m128i_i64[1]; /*0x14078b28f*/
        v31 = 112 * v29; /*0x14078b296*/
        *(_OWORD *)(v107.m128i_i64[1] + v31 + 96) = v113; /*0x14078b2a1*/
        *(_OWORD *)(v30 + v31 + 80) = v112; /*0x14078b2ad*/
        *(_OWORD *)(v30 + v31 + 64) = *(_OWORD *)&v111[64]; /*0x14078b2b9*/
        v32 = _mm_loadu_si128((const __m128i *)v111); /*0x14078b2be*/
        v33 = *(_OWORD *)&v111[16]; /*0x14078b2c6*/
        v34 = *(_OWORD *)&v111[32]; /*0x14078b2cd*/
        *(_OWORD *)(v30 + v31 + 48) = *(_OWORD *)&v111[48]; /*0x14078b2db*/
        *(_OWORD *)(v30 + v31 + 32) = v34; /*0x14078b2e0*/
        *(_OWORD *)(v30 + v31 + 16) = v33; /*0x14078b2e5*/
        *(__m128i *)(v30 + v31) = v32; /*0x14078b2ea*/
        v108 = v29 + 1; /*0x14078b2f2*/
        v105 = v26; /*0x14078b2f9*/
        v106 = v11; /*0x14078b300*/
        if ( v109 ) /*0x14078b314*/
        {
          sub_140001660(v121, v109, 1); /*0x14078b327*/
          v105 = v26; /*0x14078b32c*/
          v106 = v11; /*0x14078b333*/
        }
      }
    }
    sub_1406CB9C0(&v89); /*0x14078b340*/
    v1 = v94; /*0x14078b34d*/
    v35 = v93; /*0x14078b354*/
    sub_1406CBC60(&v83); /*0x14078b362*/
    sub_1406CB500(&v67); /*0x14078b36f*/
    if ( v103 ) /*0x14078b37f*/
      sub_140001660(v116, v103, 1); /*0x14078b38e*/
    v2 -= 32LL; /*0x14078b393*/
    v3 += 4; /*0x14078b397*/
    v4 = v35; /*0x14078b39b*/
    if ( v35 == (__int64 *)v1 ) /*0x14078b3a1*/
      goto LABEL_85; /*0x14078b3a1*/
  }
  if ( (__int64 *)v1 != v5 ) /*0x14078b792*/
  {
    v53 = v2 >> 5; /*0x14078b794*/
    do /*0x14078b7a7*/
    {
      v54 = *(v3 - 1); /*0x14078b7a9*/
      if ( v54 ) /*0x14078b7b0*/
        sub_140001660(*v3, v54, 1); /*0x14078b7bb*/
      v3 += 4; /*0x14078b7a0*/
      --v53; /*0x14078b7a4*/
    }
    while ( v53 ); /*0x14078b7a7*/
  }
LABEL_85:
  if ( (_QWORD)v95 ) /*0x14078b7cc*/
    sub_140001660(*((_QWORD *)&v95 + 1), 32 * v95, 8); /*0x14078b7df*/
  result = v108; /*0x14078b7e4*/
  v55 = v110; /*0x14078b7eb*/
  *(_QWORD *)(v110 + 24) = v108; /*0x14078b7f2*/
  *(__m128i *)(v55 + 8) = _mm_loadu_si128(&v107); /*0x14078b7fe*/
  *(_QWORD *)v55 = -1; /*0x14078b803*/
  return result; /*0x14078b774*/
}