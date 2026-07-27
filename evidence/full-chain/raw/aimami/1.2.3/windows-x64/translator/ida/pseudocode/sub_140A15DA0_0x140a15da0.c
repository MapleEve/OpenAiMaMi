// module: codexmate_lib/core/relay/translator
// addr: 0x140a15da0
// name: sub_140A15DA0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140A15DA0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __m128i *v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rcx
  __m128i *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rcx
  void *v13; // rax
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rcx
  void *v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rcx
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __m128i *v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rcx
  __m128i *v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rcx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  __m128i *v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rcx
  __m128i *v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rcx
  void *v39; // rax
  __m128i *v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // rcx
  __m128i *v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rcx
  __m128i *v46; // rax
  __m128i v47; // xmm0
  _OWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rdi
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rdi
  __int64 v58; // r15
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // r14
  __int64 v63; // r15
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __m128i *v68; // rax
  unsigned __int128 v69; // kr10_16
  __int64 v70; // rbx
  __m128i *v71; // rax
  __m128i v72; // xmm0
  __int64 v73; // rcx
  __m128i *v74; // rax
  __m128i v75; // xmm0
  __int64 v76; // rcx
  void *v77; // rax
  __m128i *v78; // rax
  __m128i v79; // xmm0
  __int64 v80; // rcx
  void *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __m128i *v84; // rax
  __m128i v85; // xmm0
  __int64 v86; // rcx
  __m128i *v87; // rax
  __m128i v88; // xmm0
  __int64 v89; // rcx
  __m128i *v90; // rax
  __int64 v91; // rcx
  __m128i *v92; // rax
  __m128i v93; // xmm0
  _OWORD *v94; // rax
  __m128i v95; // xmm0
  __int64 v96; // [rsp+68h] [rbp-18h]
  __int64 v97; // [rsp+70h] [rbp-10h] BYREF
  _DWORD *v98; // [rsp+78h] [rbp-8h]
  __int64 v99; // [rsp+80h] [rbp+0h]
  __int64 v100; // [rsp+88h] [rbp+8h] BYREF
  void *v101; // [rsp+90h] [rbp+10h]
  __int64 v102; // [rsp+98h] [rbp+18h]
  __int128 v103; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v104; // [rsp+B0h] [rbp+30h]
  __m128i v105; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v106; // [rsp+C8h] [rbp+48h]
  __m128i v107; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v108; // [rsp+E0h] [rbp+60h]
  __m128i v109; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v110; // [rsp+F8h] [rbp+78h]
  __int64 v111; // [rsp+100h] [rbp+80h] BYREF
  __int64 v112; // [rsp+108h] [rbp+88h]
  __int64 v113; // [rsp+110h] [rbp+90h]
  __int64 v114; // [rsp+118h] [rbp+98h]
  __int64 v115; // [rsp+120h] [rbp+A0h]
  __int64 v116; // [rsp+128h] [rbp+A8h] BYREF
  _DWORD *v117; // [rsp+130h] [rbp+B0h]
  __int64 v118; // [rsp+138h] [rbp+B8h]
  __m128i v119; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v120; // [rsp+150h] [rbp+D0h]
  __int64 v121; // [rsp+158h] [rbp+D8h]
  char v122; // [rsp+165h] [rbp+E5h]
  char v123; // [rsp+166h] [rbp+E6h]
  char v124; // [rsp+167h] [rbp+E7h]
  char v125; // [rsp+168h] [rbp+E8h]
  char v126; // [rsp+169h] [rbp+E9h]
  char v127; // [rsp+16Ah] [rbp+EAh]
  char v128; // [rsp+16Bh] [rbp+EBh]
  char v129; // [rsp+16Ch] [rbp+ECh]
  char v130; // [rsp+16Dh] [rbp+EDh]
  char v131; // [rsp+16Eh] [rbp+EEh]
  char v132; // [rsp+16Fh] [rbp+EFh]
  __m128i v133; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v134; // [rsp+180h] [rbp+100h]
  __int64 v135; // [rsp+198h] [rbp+118h] BYREF
  __m128i *v136; // [rsp+1A0h] [rbp+120h]
  __int64 v137; // [rsp+1A8h] [rbp+128h]
  char v138; // [rsp+1B1h] [rbp+131h]
  char v139; // [rsp+1B2h] [rbp+132h]
  char v140; // [rsp+1B3h] [rbp+133h]
  char v141; // [rsp+1B4h] [rbp+134h]
  char v142; // [rsp+1B5h] [rbp+135h]
  char v143; // [rsp+1B6h] [rbp+136h]
  char v144; // [rsp+1B7h] [rbp+137h]
  char v145; // [rsp+1B8h] [rbp+138h]
  char v146; // [rsp+1B9h] [rbp+139h]
  char v147; // [rsp+1BAh] [rbp+13Ah]
  char v148; // [rsp+1BBh] [rbp+13Bh]
  char v149; // [rsp+1BCh] [rbp+13Ch]
  char v150; // [rsp+1BDh] [rbp+13Dh]
  char v151; // [rsp+1BEh] [rbp+13Eh]
  char v152; // [rsp+1BFh] [rbp+13Fh]
  __m256i v153; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v154; // [rsp+1E0h] [rbp+160h]

  v154 = -2;
  v4 = sub_141433D50(aType_8, 4, a2);
  if ( !v4 || *(_BYTE *)v4 != 3 )
    goto LABEL_88;
  v5 = *(_QWORD *)(v4 + 16);
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 == 18 )
  {
    if ( _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v5 + 16)), (__m128i)xmmword_1417488D0),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_1417A2D70))) == 0xFFFF )
      goto LABEL_78;
LABEL_10:
    if ( !(*(_QWORD *)v5 ^ 0x726165735F626577LL | *(_QWORD *)(v5 + 3) ^ 0x5F6863726165735FLL) )
    {
LABEL_78:
      anthropic_web_search_tool_with_type(a1);
      return;
    }
    goto LABEL_11;
  }
  if ( v6 == 10 )
  {
    if ( !(*(_QWORD *)v5 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v5 + 8) ^ 0x6863LL) )
      goto LABEL_78;
    goto LABEL_88;
  }
  if ( v6 > 0xA )
    goto LABEL_10;
LABEL_11:
  if ( v6 == 6 )
  {
    if ( *(_DWORD *)v5 ^ 0x74737563 | *(unsigned __int16 *)(v5 + 4) ^ 0x6D6F )
      goto LABEL_88;
    v55 = sub_141433D50(aName_7, 4, a2);
    if ( !v55 || *(_BYTE *)v55 != 3 )
      goto LABEL_88;
    v56 = *(_QWORD *)(v55 + 16);
    v57 = *(_QWORD *)(v55 + 24);
    sub_140388B60((unsigned int)&v153, v57, 0, 1, 1);
    v58 = v153.m256i_i64[1];
    if ( v153.m256i_i32[0] == 1 )
      sub_1416C2D4B(v153.m256i_i64[1], v153.m256i_i64[2]);
    v59 = v153.m256i_i64[2];
    if ( v57 )
      sub_141684120(v153.m256i_i64[2], v56, v57);
    v121 = v58;
    *(_QWORD *)&v103 = v58;
    v114 = v59;
    *((_QWORD *)&v103 + 1) = v59;
    v104 = v57;
    v60 = sub_141433D50(aDescription_2, 11, a2);
    v61 = 1;
    if ( v60 && *(_BYTE *)v60 == 3 )
    {
      v61 = *(_QWORD *)(v60 + 16);
      v62 = *(_QWORD *)(v60 + 24);
    }
    else
    {
      v62 = 0;
    }
    sub_140388B60((unsigned int)&v153, v62, 0, 1, 1);
    v63 = v153.m256i_i64[1];
    if ( v153.m256i_i32[0] == 1 )
      sub_1416C2D4B(v153.m256i_i64[1], v153.m256i_i64[2]);
    v64 = v153.m256i_i64[2];
    if ( v62 )
      sub_141684120(v153.m256i_i64[2], v61, v62);
    v111 = v63;
    v112 = v64;
    v113 = v62;
    v65 = sub_141433D50(aFormat_1, 6, a2);
    if ( !v65 )
      goto LABEL_111;
    v67 = sub_141433D50(aType_8, 4, v65);
    if ( !v67 )
      goto LABEL_111;
    if ( *(_BYTE *)v67 != 3 )
      goto LABEL_111;
    v66 = *(_QWORD *)(v67 + 16);
    v68 = *(__m128i **)(v67 + 24);
    v135 = v66;
    v136 = v68;
    if ( !v68 )
      goto LABEL_111;
    v133.m128i_i64[0] = (__int64)&v135;
    v133.m128i_i64[1] = (__int64)sub_14041F680;
    sub_14149C0F0(&v153, &unk_1417A7E8D, &v133);
    v69 = *(_OWORD *)v153.m256i_i8;
    v70 = v153.m256i_i64[2];
    if ( v153.m256i_i64[2] > (unsigned __int64)(v63 - v62) )
    {
      v96 = v153.m256i_i64[1];
      v115 = v153.m256i_i64[0];
      sub_141688D30((unsigned int)&v111, v62, v153.m256i_i32[4], 1, 1);
      v64 = v112;
      v62 = v113;
      v69 = __PAIR128__(v96, v115);
    }
    else if ( !v153.m256i_i64[2] )
    {
      goto LABEL_109;
    }
    sub_141684120(v64 + v62, *((_QWORD *)&v69 + 1), v70);
LABEL_109:
    v113 = v70 + v62;
    if ( (_QWORD)v69 )
      sub_140001660(*((_QWORD *)&v69 + 1), v69, 1);
LABEL_111:
    v107.m128i_i64[0] = 0;
    v108 = 0;
    nullsub_1(v66);
    v71 = (__m128i *)sub_140001650(4, 1);
    if ( !v71 )
      sub_1416C2D4B(1, 4);
    v71->m128i_i32[0] = 1701667182;
    v135 = 4;
    v136 = v71;
    v137 = 4;
    v152 = 1;
    sub_140B56520(&v153, &v103);
    if ( v153.m256i_i8[0] == -1 )
    {
      v133.m128i_i64[0] = v153.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_15,
        43,
        (unsigned int)&v133,
        (unsigned int)&off_1417A5560,
        (__int64)&off_1417A8350);
    }
    v72 = _mm_loadu_si128((const __m128i *)&v153);
    v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
    v133 = v72;
    v152 = 0;
    sub_140307860(&v153, &v107, &v135, &v133);
    if ( v153.m256i_i8[0] != -1 )
      sub_1400104F0(&v153);
    nullsub_1(v73);
    v74 = (__m128i *)sub_140001650(11, 1);
    if ( !v74 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v74, "description", 11);
    v135 = 11;
    v136 = v74;
    v137 = 11;
    v151 = 1;
    sub_140B56520(&v153, &v111);
    if ( v153.m256i_i8[0] == -1 )
    {
      v133.m128i_i64[0] = v153.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_15,
        43,
        (unsigned int)&v133,
        (unsigned int)&off_1417A5560,
        (__int64)&off_1417A8350);
    }
    v75 = _mm_loadu_si128((const __m128i *)&v153);
    v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
    v133 = v75;
    v151 = 0;
    sub_140307860(&v153, &v107, &v135, &v133);
    if ( v153.m256i_i8[0] != -1 )
      sub_1400104F0(&v153);
    nullsub_1(v76);
    v77 = (void *)sub_140001650(12, 1);
    if ( !v77 )
      sub_1416C2D4B(1, 12);
    qmemcpy(v77, "input_schema", 12);
    v100 = 12;
    v101 = v77;
    v102 = 12;
    v109.m128i_i64[0] = 0;
    v110 = 0;
    nullsub_1(0x63735F7475706E69LL);
    v78 = (__m128i *)sub_140001650(4, 1);
    if ( !v78 )
      sub_1416C2D4B(1, 4);
    v78->m128i_i32[0] = 1701869940;
    v135 = 4;
    v136 = v78;
    v137 = 4;
    v150 = 1;
    sub_140B56640(&v153, &off_1417A49E8);
    if ( v153.m256i_i8[0] == -1 )
    {
      v133.m128i_i64[0] = v153.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_15,
        43,
        (unsigned int)&v133,
        (unsigned int)&off_1417A5560,
        (__int64)&off_1417A8350);
    }
    v79 = _mm_loadu_si128((const __m128i *)&v153);
    v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
    v133 = v79;
    v150 = 0;
    sub_140307860(&v153, &v109, &v135, &v133);
    if ( v153.m256i_i8[0] != -1 )
      sub_1400104F0(&v153);
    nullsub_1(v80);
    v81 = (void *)sub_140001650(10, 1);
    if ( !v81 )
      sub_1416C2D4B(1, 10);
    qmemcpy(v81, "properties", 10);
    v97 = 10;
    v98 = v81;
    v99 = 10;
    v105.m128i_i64[0] = 0;
    v106 = 0;
    nullsub_1(0x69747265706F7270LL);
    v82 = sub_140001650(5, 1);
    if ( !v82 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v82 + 4) = 116;
    *(_DWORD *)v82 = 1970302569;
    v116 = 5;
    v117 = (_DWORD *)v82;
    v118 = 5;
    v119.m128i_i64[0] = 0;
    v120 = 0;
    nullsub_1(v83);
    v84 = (__m128i *)sub_140001650(4, 1);
    if ( !v84 )
      sub_1416C2D4B(1, 4);
    v84->m128i_i32[0] = 1701869940;
    v135 = 4;
    v136 = v84;
    v137 = 4;
    v149 = 1;
    sub_140B56640(&v153, &off_1417A7F00);
    if ( v153.m256i_i8[0] == -1 )
    {
      v133.m128i_i64[0] = v153.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_15,
        43,
        (unsigned int)&v133,
        (unsigned int)&off_1417A5560,
        (__int64)&off_1417A8350);
    }
    v85 = _mm_loadu_si128((const __m128i *)&v153);
    v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
    v133 = v85;
    v149 = 0;
    sub_140307860(&v153, &v119, &v135, &v133);
    if ( v153.m256i_i8[0] != -1 )
      sub_1400104F0(&v153);
    nullsub_1(v86);
    v87 = (__m128i *)sub_140001650(11, 1);
    if ( !v87 )
      sub_1416C2D4B(1, 11);
    qmemcpy(v87, "description", 11);
    v135 = 11;
    v136 = v87;
    v137 = 11;
    v148 = 1;
    sub_140B56640(&v153, &off_1417A7F28);
    if ( v153.m256i_i8[0] == -1 )
    {
      v133.m128i_i64[0] = v153.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_15,
        43,
        (unsigned int)&v133,
        (unsigned int)&off_1417A5560,
        (__int64)&off_1417A8350);
    }
    v88 = _mm_loadu_si128((const __m128i *)&v153);
    v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
    v133 = v88;
    v148 = 0;
    sub_140307860(&v153, &v119, &v135, &v133);
    if ( v153.m256i_i8[0] != -1 )
      sub_1400104F0(&v153);
    *(__m128i *)&v153.m256i_u64[1] = _mm_loadu_si128(&v119);
    v153.m256i_i64[3] = v120;
    v153.m256i_i8[0] = 5;
    v130 = 0;
    sub_140307860(&v133, &v105, &v116, &v153);
    if ( v133.m128i_i8[0] != -1 )
      sub_1400104F0(&v133);
    *(__m128i *)&v153.m256i_u64[1] = _mm_loadu_si128(&v105);
    v153.m256i_i64[3] = v106;
    v153.m256i_i8[0] = 5;
    v129 = 0;
    sub_140307860(&v133, &v109, &v97, &v153);
    if ( v133.m128i_i8[0] != -1 )
      sub_1400104F0(&v133);
    nullsub_1(v89);
    v90 = (__m128i *)sub_140001650(20, 1);
    if ( !v90 )
      sub_1416C2D4B(1, 20);
    *v90 = _mm_loadu_si128((const __m128i *)&xmmword_1417A7F38);
    v90[1].m128i_i32[0] = 1936025972;
    v135 = 20;
    v136 = v90;
    v137 = 20;
    v153.m256i_i16[0] = 257;
    sub_140307860(&v133, &v109, &v135, &v153);
    if ( v133.m128i_i8[0] != -1 )
      sub_1400104F0(&v133);
    nullsub_1(v91);
    v92 = (__m128i *)sub_140001650(8, 1);
    if ( !v92 )
      sub_1416C2D4B(1, 8);
    v92->m128i_i64[0] = 0x6465726975716572LL;
    v135 = 8;
    v136 = v92;
    v137 = 8;
    v132 = 1;
    v115 = sub_14030B9B0();
    sub_140B56640(&v153, &off_1417A7F50);
    if ( v153.m256i_i8[0] == -1 )
    {
      v133.m128i_i64[0] = v153.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_15,
        43,
        (unsigned int)&v133,
        (unsigned int)&off_1417A5560,
        (__int64)&off_1417A8350);
    }
    v93 = _mm_loadu_si128((const __m128i *)&v153);
    v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
    v133 = v93;
    v94 = (_OWORD *)v115;
    *(__m128i *)(v115 + 16) = v134;
    *v94 = v93;
    v153.m256i_i64[1] = 1;
    v153.m256i_i64[2] = (__int64)v94;
    v153.m256i_i64[3] = 1;
    v153.m256i_i8[0] = 4;
    v132 = 0;
    sub_140307860(&v133, &v109, &v135, &v153);
    if ( v133.m128i_i8[0] != -1 )
      sub_1400104F0(&v133);
    *(__m128i *)&v153.m256i_u64[1] = _mm_loadu_si128(&v109);
    v153.m256i_i64[3] = v110;
    v153.m256i_i8[0] = 5;
    v128 = 0;
    sub_140307860(&v133, &v107, &v100, &v153);
    if ( v133.m128i_i8[0] != -1 )
      sub_1400104F0(&v133);
    *(__m128i *)((char *)&v153.m256i_u32[1] + 3) = v107;
    *(__int64 *)((char *)&v153.m256i_i64[2] + 7) = v108;
    *(_BYTE *)a1 = 5;
    v95 = _mm_loadu_si128((const __m128i *)&v153);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v153.m256i_u64[1] + 7);
    *(__m128i *)(a1 + 1) = v95;
    if ( v111 )
      sub_140001660(v64, v111, 1);
    if ( v121 )
      sub_140001660(v114, v121, 1);
    return;
  }
  if ( v6 != 8 )
  {
    if ( v6 == 11 && !(*(_QWORD *)v5 ^ 0x68735F6C61636F6CLL | *(_QWORD *)(v5 + 3) ^ 0x6C6C6568735F6C61LL) )
    {
      *(_QWORD *)&v103 = 0;
      v104 = 0;
      nullsub_1(0);
      v7 = (__m128i *)sub_140001650(4, 1);
      if ( !v7 )
        sub_1416C2D4B(1, 4);
      v7->m128i_i32[0] = 1701667182;
      v135 = 4;
      v136 = v7;
      v137 = 4;
      v147 = 1;
      sub_140B56640(&v153, &off_1417A7F68);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v8 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v8;
      v147 = 0;
      sub_140307860(&v153, &v103, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      nullsub_1(v9);
      v10 = (__m128i *)sub_140001650(11, 1);
      if ( !v10 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v10, "description", 11);
      v135 = 11;
      v136 = v10;
      v137 = 11;
      v146 = 1;
      sub_140B56640(&v153, &off_1417A7FD0);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v11 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v11;
      v146 = 0;
      sub_140307860(&v153, &v103, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      nullsub_1(v12);
      v13 = (void *)sub_140001650(12, 1);
      if ( !v13 )
        sub_1416C2D4B(1, 12);
      qmemcpy(v13, "input_schema", 12);
      v111 = 12;
      v112 = (__int64)v13;
      v113 = 12;
      v107.m128i_i64[0] = 0;
      v108 = 0;
      nullsub_1(0x63735F7475706E69LL);
      v14 = (__m128i *)sub_140001650(4, 1);
      if ( !v14 )
        sub_1416C2D4B(1, 4);
      v14->m128i_i32[0] = 1701869940;
      v135 = 4;
      v136 = v14;
      v137 = 4;
      v145 = 1;
      sub_140B56640(&v153, &off_1417A49E8);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v15 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v15;
      v145 = 0;
      sub_140307860(&v153, &v107, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      nullsub_1(v16);
      v17 = (void *)sub_140001650(10, 1);
      if ( !v17 )
        sub_1416C2D4B(1, 10);
      qmemcpy(v17, "properties", 10);
      v100 = 10;
      v101 = v17;
      v102 = 10;
      v109.m128i_i64[0] = 0;
      v110 = 0;
      nullsub_1(0x69747265706F7270LL);
      v18 = (_DWORD *)sub_140001650(7, 1);
      if ( !v18 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v18 + 3) = 1684955501;
      *v18 = 1835888483;
      v97 = 7;
      v98 = v18;
      v99 = 7;
      v105.m128i_i64[0] = 0;
      v106 = 0;
      nullsub_1(v19);
      v20 = (__m128i *)sub_140001650(4, 1);
      if ( !v20 )
        sub_1416C2D4B(1, 4);
      v20->m128i_i32[0] = 1701869940;
      v135 = 4;
      v136 = v20;
      v137 = 4;
      v144 = 1;
      sub_140B56640(&v153, &off_1417A7FE8);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v21 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v21;
      v144 = 0;
      sub_140307860(&v153, &v105, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      nullsub_1(v22);
      v23 = sub_140001650(5, 1);
      if ( !v23 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v23 + 4) = 115;
      *(_DWORD *)v23 = 1835365481;
      v116 = 5;
      v117 = (_DWORD *)v23;
      v118 = 5;
      v119.m128i_i64[0] = 0;
      v120 = 0;
      nullsub_1(v24);
      v25 = (__m128i *)sub_140001650(4, 1);
      if ( !v25 )
        sub_1416C2D4B(1, 4);
      v25->m128i_i32[0] = 1701869940;
      v135 = 4;
      v136 = v25;
      v137 = 4;
      v143 = 1;
      sub_140B56640(&v153, &off_1417A7F00);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v26 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v26;
      v143 = 0;
      sub_140307860(&v153, &v119, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      *(__m128i *)&v153.m256i_u64[1] = _mm_loadu_si128(&v119);
      v153.m256i_i64[3] = v120;
      v153.m256i_i8[0] = 5;
      v127 = 0;
      sub_140307860(&v133, &v105, &v116, &v153);
      if ( v133.m128i_i8[0] != -1 )
        sub_1400104F0(&v133);
      nullsub_1(v27);
      v28 = (__m128i *)sub_140001650(11, 1);
      if ( !v28 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v28, "description", 11);
      v135 = 11;
      v136 = v28;
      v137 = 11;
      v142 = 1;
      sub_140B56640(&v153, &off_1417A8060);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v29 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v29;
      v142 = 0;
      sub_140307860(&v153, &v105, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      *(__m128i *)&v153.m256i_u64[1] = _mm_loadu_si128(&v105);
      v153.m256i_i64[3] = v106;
      v153.m256i_i8[0] = 5;
      v126 = 0;
      sub_140307860(&v133, &v109, &v97, &v153);
      if ( v133.m128i_i8[0] != -1 )
        sub_1400104F0(&v133);
      nullsub_1(v30);
      v31 = (_DWORD *)sub_140001650(7, 1);
      if ( !v31 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v31 + 3) = 1919509611;
      *v31 = 1802661751;
      v116 = 7;
      v117 = v31;
      v118 = 7;
      v119.m128i_i64[0] = 0;
      v120 = 0;
      nullsub_1(v32);
      v33 = (__m128i *)sub_140001650(4, 1);
      if ( !v33 )
        sub_1416C2D4B(1, 4);
      v33->m128i_i32[0] = 1701869940;
      v135 = 4;
      v136 = v33;
      v137 = 4;
      v141 = 1;
      sub_140B56640(&v153, &off_1417A7F00);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v34 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v34;
      v141 = 0;
      sub_140307860(&v153, &v119, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      nullsub_1(v35);
      v36 = (__m128i *)sub_140001650(11, 1);
      if ( !v36 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v36, "description", 11);
      v135 = 11;
      v136 = v36;
      v137 = 11;
      v140 = 1;
      sub_140B56640(&v153, &off_1417A80A8);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v37 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v37;
      v140 = 0;
      sub_140307860(&v153, &v119, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      *(__m128i *)&v153.m256i_u64[1] = _mm_loadu_si128(&v119);
      v153.m256i_i64[3] = v120;
      v153.m256i_i8[0] = 5;
      v125 = 0;
      sub_140307860(&v133, &v109, &v116, &v153);
      if ( v133.m128i_i8[0] != -1 )
        sub_1400104F0(&v133);
      nullsub_1(v38);
      v39 = (void *)sub_140001650(10, 1);
      if ( !v39 )
        sub_1416C2D4B(1, 10);
      qmemcpy(v39, "timeout_ms", 10);
      v116 = 10;
      v117 = v39;
      v118 = 10;
      v119.m128i_i64[0] = 0;
      v120 = 0;
      nullsub_1(0x5F74756F656D6974LL);
      v40 = (__m128i *)sub_140001650(4, 1);
      if ( !v40 )
        sub_1416C2D4B(1, 4);
      v40->m128i_i32[0] = 1701869940;
      v135 = 4;
      v136 = v40;
      v137 = 4;
      v139 = 1;
      sub_140B56640(&v153, &off_1417A80C0);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v41 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v41;
      v139 = 0;
      sub_140307860(&v153, &v119, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      nullsub_1(v42);
      v43 = (__m128i *)sub_140001650(11, 1);
      if ( !v43 )
        sub_1416C2D4B(1, 11);
      qmemcpy(v43, "description", 11);
      v135 = 11;
      v136 = v43;
      v137 = 11;
      v138 = 1;
      sub_140B56640(&v153, &off_1417A8108);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v44 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v44;
      v138 = 0;
      sub_140307860(&v153, &v119, &v135, &v133);
      if ( v153.m256i_i8[0] != -1 )
        sub_1400104F0(&v153);
      *(__m128i *)&v153.m256i_u64[1] = _mm_loadu_si128(&v119);
      v153.m256i_i64[3] = v120;
      v153.m256i_i8[0] = 5;
      v124 = 0;
      sub_140307860(&v133, &v109, &v116, &v153);
      if ( v133.m128i_i8[0] != -1 )
        sub_1400104F0(&v133);
      *(__m128i *)&v153.m256i_u64[1] = _mm_loadu_si128(&v109);
      v153.m256i_i64[3] = v110;
      v153.m256i_i8[0] = 5;
      v123 = 0;
      sub_140307860(&v133, &v107, &v100, &v153);
      if ( v133.m128i_i8[0] != -1 )
        sub_1400104F0(&v133);
      nullsub_1(v45);
      v46 = (__m128i *)sub_140001650(8, 1);
      if ( !v46 )
        sub_1416C2D4B(1, 8);
      v46->m128i_i64[0] = 0x6465726975716572LL;
      v135 = 8;
      v136 = v46;
      v137 = 8;
      v131 = 1;
      v121 = sub_14030B9B0();
      sub_140B56640(&v153, &off_1417A8118);
      if ( v153.m256i_i8[0] == -1 )
      {
        v133.m128i_i64[0] = v153.m256i_i64[1];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v133,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8368);
      }
      v47 = _mm_loadu_si128((const __m128i *)&v153);
      v134 = _mm_loadu_si128((const __m128i *)&v153.m256i_u64[2]);
      v133 = v47;
      v48 = (_OWORD *)v121;
      *(__m128i *)(v121 + 16) = v134;
      *v48 = v47;
      v153.m256i_i64[1] = 1;
      v153.m256i_i64[2] = (__int64)v48;
      v153.m256i_i64[3] = 1;
      v153.m256i_i8[0] = 4;
      v131 = 0;
      sub_140307860(&v133, &v107, &v135, &v153);
      if ( v133.m128i_i8[0] != -1 )
        sub_1400104F0(&v133);
      *(__m128i *)&v153.m256i_u64[1] = _mm_loadu_si128(&v107);
      v153.m256i_i64[3] = v108;
      v153.m256i_i8[0] = 5;
      v122 = 0;
      sub_140307860(&v133, &v103, &v111, &v153);
      if ( v133.m128i_i8[0] != -1 )
        sub_1400104F0(&v133);
      *(_OWORD *)((char *)&v153.m256i_u32[1] + 3) = v103;
      *(__int64 *)((char *)&v153.m256i_i64[2] + 7) = v104;
      *(_BYTE *)a1 = 5;
      v49 = *(__int64 *)((char *)&v153.m256i_i64[1] + 7);
      v50 = *(__int64 *)((char *)&v153.m256i_i64[2] + 7);
      *(__m128i *)(a1 + 1) = _mm_loadu_si128((const __m128i *)&v153);
      *(_QWORD *)(a1 + 16) = v49;
      *(_QWORD *)(a1 + 24) = v50;
      return;
    }
LABEL_88:
    *(_BYTE *)a1 = -1;
    return;
  }
  if ( *(_QWORD *)v5 != 0x6E6F6974636E7566LL )
    goto LABEL_88;
  v51 = sub_141433D50(aName_7, 4, a2);
  if ( !v51 || *(_BYTE *)v51 != 3 )
    goto LABEL_88;
  v52 = *(_QWORD *)(v51 + 16);
  v53 = *(_QWORD *)(v51 + 24);
  sub_140388B60((unsigned int)&v153, v53, 0, 1, 1);
  if ( v153.m256i_i32[0] == 1 )
    sub_1416C2D4B(v153.m256i_i64[1], v153.m256i_i64[2]);
  v54 = v153.m256i_i64[2];
  v121 = v153.m256i_i64[1];
  if ( v53 )
    sub_141684120(v153.m256i_i64[2], v52, v53);
  v114 = v54;
  sub_140A0EC30((_BYTE *)a1, a2, v54, v53);
  if ( v121 )
    sub_140001660(v114, v121, 1);
}