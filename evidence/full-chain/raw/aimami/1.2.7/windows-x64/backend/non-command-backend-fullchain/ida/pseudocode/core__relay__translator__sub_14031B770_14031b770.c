// win 1.2.7 | module src/core/relay/translator.rs | ea 0x14031b770 | name sub_14031B770
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14031B770(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  char *v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  __int64 v35; // rcx
  void *v36; // rax
  _DWORD *v37; // rax
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int128 v42; // xmm0
  _OWORD *v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r13
  unsigned __int64 v51; // r14
  _DWORD *v52; // rax
  __int64 v53; // rcx
  void *v54; // rax
  __int64 v55; // rcx
  void *v56; // rax
  _DWORD *v57; // rax
  __int64 v58; // rcx
  void *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  _DWORD *v62; // rax
  __int64 v63; // rcx
  void *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  _DWORD *v68; // rax
  __int64 v69; // rcx
  void *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  __int128 v73; // xmm0
  _OWORD *v74; // rax
  __int64 v75; // r12
  char *v76; // r15
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  _DWORD *v80; // rax
  unsigned __int64 v81; // r13
  const __m128i *v82; // r12
  _DWORD *v83; // rax
  __int64 v84; // rcx
  void *v85; // rax
  __int64 v86; // rcx
  void *v87; // rax
  _DWORD *v88; // rax
  __int64 v89; // rcx
  void *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  _DWORD *v93; // rax
  __int64 v94; // rcx
  void *v95; // rax
  __int64 v96; // rcx
  void *v97; // rax
  __int64 v98; // rcx
  _QWORD *v99; // rax
  __int128 v100; // xmm0
  _OWORD *v101; // rax
  _BYTE v102[31]; // [rsp+90h] [rbp+10h]
  __m128i v103; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v104; // [rsp+C0h] [rbp+40h]
  const __m128i *v105; // [rsp+C8h] [rbp+48h]
  __int64 v106; // [rsp+D0h] [rbp+50h] BYREF
  _DWORD *v107; // [rsp+D8h] [rbp+58h]
  __int64 v108; // [rsp+E0h] [rbp+60h]
  __int64 v109; // [rsp+E8h] [rbp+68h] BYREF
  void *v110; // [rsp+F0h] [rbp+70h]
  __int64 v111; // [rsp+F8h] [rbp+78h]
  __int128 v112; // [rsp+100h] [rbp+80h] BYREF
  __int64 v113; // [rsp+110h] [rbp+90h]
  __int64 v114; // [rsp+118h] [rbp+98h] BYREF
  char *v115; // [rsp+120h] [rbp+A0h]
  __int64 v116; // [rsp+128h] [rbp+A8h]
  __m128i v117; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v118; // [rsp+140h] [rbp+C0h]
  __int128 v119; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v120; // [rsp+158h] [rbp+D8h]
  __int64 v121; // [rsp+160h] [rbp+E0h] BYREF
  _DWORD *v122; // [rsp+168h] [rbp+E8h]
  __int64 v123; // [rsp+170h] [rbp+F0h]
  __int64 v124; // [rsp+178h] [rbp+F8h]
  __int128 v125; // [rsp+180h] [rbp+100h] BYREF
  __int64 v126; // [rsp+190h] [rbp+110h]
  char v127; // [rsp+19Ah] [rbp+11Ah]
  char v128; // [rsp+19Bh] [rbp+11Bh]
  char v129; // [rsp+19Ch] [rbp+11Ch]
  char v130; // [rsp+19Dh] [rbp+11Dh]
  char v131; // [rsp+19Eh] [rbp+11Eh]
  char v132; // [rsp+19Fh] [rbp+11Fh]
  char v133; // [rsp+1A0h] [rbp+120h]
  char v134; // [rsp+1A1h] [rbp+121h]
  char v135; // [rsp+1A2h] [rbp+122h]
  char v136; // [rsp+1A3h] [rbp+123h]
  char v137; // [rsp+1A4h] [rbp+124h]
  char v138; // [rsp+1A5h] [rbp+125h]
  char v139; // [rsp+1A6h] [rbp+126h]
  char v140; // [rsp+1A7h] [rbp+127h]
  char v141; // [rsp+1A8h] [rbp+128h]
  char v142; // [rsp+1A9h] [rbp+129h]
  char v143; // [rsp+1AAh] [rbp+12Ah]
  char v144; // [rsp+1ABh] [rbp+12Bh]
  char v145; // [rsp+1ACh] [rbp+12Ch]
  char v146; // [rsp+1ADh] [rbp+12Dh]
  char v147; // [rsp+1AEh] [rbp+12Eh]
  char v148; // [rsp+1AFh] [rbp+12Fh]
  char v149; // [rsp+1B0h] [rbp+130h]
  char v150; // [rsp+1B1h] [rbp+131h]
  char v151; // [rsp+1B2h] [rbp+132h]
  char v152; // [rsp+1B3h] [rbp+133h]
  char v153; // [rsp+1B4h] [rbp+134h]
  char v154; // [rsp+1B5h] [rbp+135h]
  char v155; // [rsp+1B6h] [rbp+136h]
  char v156; // [rsp+1B7h] [rbp+137h]
  char v157; // [rsp+1B8h] [rbp+138h]
  char v158; // [rsp+1B9h] [rbp+139h]
  char v159; // [rsp+1BAh] [rbp+13Ah]
  char v160; // [rsp+1BBh] [rbp+13Bh]
  char v161; // [rsp+1BCh] [rbp+13Ch]
  char v162; // [rsp+1BDh] [rbp+13Dh]
  char v163; // [rsp+1BEh] [rbp+13Eh]
  char v164; // [rsp+1BFh] [rbp+13Fh]
  __int128 v165; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v166; // [rsp+1D0h] [rbp+150h]
  __int64 v167; // [rsp+1E8h] [rbp+168h] BYREF
  _DWORD *v168; // [rsp+1F0h] [rbp+170h]
  __int64 v169; // [rsp+1F8h] [rbp+178h]
  _BYTE v170[24]; // [rsp+200h] [rbp+180h] BYREF
  __int64 v171; // [rsp+218h] [rbp+198h]
  __int64 v172; // [rsp+220h] [rbp+1A0h]

  v172 = -2;
  result = sub_1416419F0(aType_4, 4, a2);
  if ( !result || *(_BYTE *)result != 3 )
    goto LABEL_92;
  v7 = *(_QWORD *)(result + 16);
  v8 = *(_QWORD *)(result + 24);
  if ( v8 == 18 )
  {
    if ( _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v7 + 16)), (__m128i)xmmword_1419E4690),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v7), (__m128i)xmmword_1419E4680))) != 0xFFFF )
    {
      v9 = -1;
      if ( *(_QWORD *)v7 ^ 0x726165735F626577LL | *(_QWORD *)(v7 + 3) ^ 0x5F6863726165735FLL )
        goto LABEL_81;
    }
    goto LABEL_80;
  }
  if ( v8 == 10 )
  {
    v9 = -1;
    if ( !(*(_QWORD *)v7 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v7 + 8) ^ 0x6863LL) )
    {
LABEL_80:
      sub_140327C90((__int64)v170, (_QWORD *)v7, v8);
      v9 = v170[0];
      *(_OWORD *)v102 = *(_OWORD *)&v170[1];
      *(__m128i *)&v102[15] = _mm_loadu_si128((const __m128i *)&v170[16]);
      goto LABEL_81;
    }
    goto LABEL_81;
  }
  if ( v8 > 0xA && !(*(_QWORD *)v7 ^ 0x726165735F626577LL | *(_QWORD *)(v7 + 3) ^ 0x5F6863726165735FLL) )
    goto LABEL_80;
  v9 = -1;
  if ( v8 == 6 )
  {
    if ( *(_DWORD *)v7 ^ 0x74737563 | *(unsigned __int16 *)(v7 + 4) ^ 0x6D6F )
      goto LABEL_81;
    result = sub_1416419F0(aName_2, 4, a2);
    if ( result && *(_BYTE *)result == 3 )
    {
      v103 = *(__m128i *)(result + 16);
      v49 = sub_1416419F0(aDescription_0, 11, a2);
      v50 = 1;
      if ( v49 && *(_BYTE *)v49 == 3 )
      {
        v50 = *(_QWORD *)(v49 + 16);
        v51 = *(_QWORD *)(v49 + 24);
      }
      else
      {
        v51 = 0;
      }
      sub_14072C410((unsigned int)v170, v51, 0, 1, 1);
      v75 = *(_QWORD *)&v170[8];
      if ( *(_DWORD *)v170 == 1 )
        sub_141938D2B(*(_QWORD *)&v170[8], *(_QWORD *)&v170[16]);
      v76 = *(char **)&v170[16];
      if ( v51 )
        sub_1418F44E0(*(__m128i **)&v170[16], (const __m128i *)v50, v51);
      v114 = v75;
      v115 = v76;
      v116 = v51;
      v77 = sub_1416419F0(aFormat_2, 6, a2);
      if ( !v77 )
        goto LABEL_155;
      v79 = sub_1416419F0(aType_4, 4, v77);
      if ( !v79 )
        goto LABEL_155;
      if ( *(_BYTE *)v79 != 3 )
        goto LABEL_155;
      v78 = *(_QWORD *)(v79 + 16);
      v80 = *(_DWORD **)(v79 + 24);
      v167 = v78;
      v168 = v80;
      if ( !v80 )
        goto LABEL_155;
      *(_QWORD *)&v165 = &v167;
      *((_QWORD *)&v165 + 1) = sub_140186EE0;
      sub_1416ABFD0(v170, &unk_1419E8870, &v165);
      v105 = *(const __m128i **)&v170[8];
      v124 = *(_QWORD *)v170;
      v81 = *(_QWORD *)&v170[16];
      if ( *(_QWORD *)&v170[16] > v75 - v51 )
      {
        sub_14190D590((unsigned int)&v114, v51, *(_DWORD *)&v170[16], 1, 1);
        v76 = v115;
        v51 = v116;
        v82 = v105;
      }
      else
      {
        v82 = v105;
        if ( !*(_QWORD *)&v170[16] )
          goto LABEL_153;
      }
      sub_1418F44E0((__m128i *)&v76[v51], v82, v81);
LABEL_153:
      v116 = v81 + v51;
      if ( v124 )
        sub_140001660(v82, v124, 1);
LABEL_155:
      if ( !a3 || (result = sub_1403634F0(&v114, a2)) == 0 )
      {
        v117.m128i_i64[0] = 0;
        v118 = 0;
        nullsub_1(v78);
        v83 = (_DWORD *)sub_140001650(4, 1);
        if ( !v83 )
          sub_141938D2B(1, 4);
        *v83 = 1701667182;
        v167 = 4;
        v168 = v83;
        v169 = 4;
        v164 = 1;
        sub_14040FB10(v170, &v103);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EC8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v164 = 0;
        sub_140E72AA0(v170, &v117, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v84);
        v85 = (void *)sub_140001650(11, 1);
        if ( !v85 )
          sub_141938D2B(1, 11);
        qmemcpy(v85, "description", 11);
        v167 = 11;
        v168 = v85;
        v169 = 11;
        v163 = 1;
        sub_14040F9F0(v170, &v114);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EC8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v163 = 0;
        sub_140E72AA0(v170, &v117, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v86);
        v87 = (void *)sub_140001650(12, 1);
        if ( !v87 )
          sub_141938D2B(1, 12);
        qmemcpy(v87, "input_schema", 12);
        v109 = 12;
        v110 = v87;
        v111 = 12;
        *(_QWORD *)&v119 = 0;
        v120 = 0;
        nullsub_1(0x63735F7475706E69LL);
        v88 = (_DWORD *)sub_140001650(4, 1);
        if ( !v88 )
          sub_141938D2B(1, 4);
        *v88 = 1701869940;
        v167 = 4;
        v168 = v88;
        v169 = 4;
        v162 = 1;
        sub_14040FB10(v170, &off_1419E5490);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EC8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v162 = 0;
        sub_140E72AA0(v170, &v119, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v89);
        v90 = (void *)sub_140001650(10, 1);
        if ( !v90 )
          sub_141938D2B(1, 10);
        qmemcpy(v90, "properties", 10);
        v106 = 10;
        v107 = v90;
        v108 = 10;
        *(_QWORD *)&v112 = 0;
        v113 = 0;
        nullsub_1(0x69747265706F7270LL);
        v91 = sub_140001650(5, 1);
        if ( !v91 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v91 + 4) = 116;
        *(_DWORD *)v91 = 1970302569;
        v121 = 5;
        v122 = (_DWORD *)v91;
        v123 = 5;
        *(_QWORD *)&v125 = 0;
        v126 = 0;
        nullsub_1(v92);
        v93 = (_DWORD *)sub_140001650(4, 1);
        if ( !v93 )
          sub_141938D2B(1, 4);
        *v93 = 1701869940;
        v167 = 4;
        v168 = v93;
        v169 = 4;
        v161 = 1;
        sub_14040FB10(v170, &off_1419E88E0);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EC8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v161 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v94);
        v95 = (void *)sub_140001650(11, 1);
        if ( !v95 )
          sub_141938D2B(1, 11);
        qmemcpy(v95, "description", 11);
        v167 = 11;
        v168 = v95;
        v169 = 11;
        v160 = 1;
        sub_14040FB10(v170, &off_1419E8908);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EC8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v160 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        *(_OWORD *)&v170[8] = v125;
        v171 = v126;
        v170[0] = 5;
        v139 = 0;
        sub_140E72AA0(&v165, &v112, &v121, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        *(_OWORD *)&v170[8] = v112;
        v171 = v113;
        v170[0] = 5;
        v138 = 0;
        sub_140E72AA0(&v165, &v119, &v106, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        nullsub_1(v96);
        v97 = (void *)sub_140001650(20, 1);
        if ( !v97 )
          sub_141938D2B(1, 20);
        qmemcpy(v97, "additionalProperties", 20);
        v167 = 20;
        v168 = v97;
        v169 = 20;
        *(_WORD *)v170 = 257;
        sub_140E72AA0(&v165, &v119, &v167, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        nullsub_1(v98);
        v99 = (_QWORD *)sub_140001650(8, 1);
        if ( !v99 )
          sub_141938D2B(1, 8);
        *v99 = 0x6465726975716572LL;
        v167 = 8;
        v168 = v99;
        v169 = 8;
        v142 = 1;
        v124 = sub_1402BD6F0(0x6465726975716572LL);
        sub_14040FB10(v170, &off_1419E8930);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EC8);
        }
        v100 = *(_OWORD *)v170;
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v101 = (_OWORD *)v124;
        *(__m128i *)(v124 + 16) = v166;
        *v101 = v100;
        *(_QWORD *)&v170[8] = 1;
        *(_QWORD *)&v170[16] = v101;
        v171 = 1;
        v170[0] = 4;
        v142 = 0;
        sub_140E72AA0(&v165, &v119, &v167, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        *(_OWORD *)&v170[8] = v119;
        v171 = v120;
        v170[0] = 5;
        v137 = 0;
        sub_140E72AA0(&v165, &v117, &v109, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        *(__m128i *)&v102[7] = _mm_loadu_si128(&v117);
        *(_QWORD *)&v102[23] = v118;
        if ( v114 )
          sub_140001660(v115, v114, 1);
        v9 = 5;
        goto LABEL_81;
      }
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = 50;
      *(_BYTE *)a1 = -2;
      if ( v114 )
        return sub_140001660(v115, v114, 1);
      return result;
    }
LABEL_92:
    *(_BYTE *)a1 = -1;
    return result;
  }
  if ( v8 != 8 )
  {
    if ( v8 == 11 )
    {
      v10 = *(_QWORD *)v7 ^ 0x6165735F6C6F6F74LL;
      if ( v10 | *(_QWORD *)(v7 + 3) ^ 0x6863726165735F6CLL )
      {
        v11 = *(_QWORD *)v7 ^ 0x68735F6C61636F6CLL;
        if ( v11 | *(_QWORD *)(v7 + 3) ^ 0x6C6C6568735F6C61LL )
          goto LABEL_81;
        v103.m128i_i64[0] = 0;
        v104 = 0;
        nullsub_1(v11);
        v12 = (_DWORD *)sub_140001650(4, 1);
        if ( !v12 )
          sub_141938D2B(1, 4);
        *v12 = 1701667182;
        v167 = 4;
        v168 = v12;
        v169 = 4;
        v159 = 1;
        sub_14040FB10(v170, &off_1419E8948);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v159 = 0;
        sub_140E72AA0(v170, &v103, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v13);
        v14 = (void *)sub_140001650(11, 1);
        if ( !v14 )
          sub_141938D2B(1, 11);
        qmemcpy(v14, "description", 11);
        v167 = 11;
        v168 = v14;
        v169 = 11;
        v158 = 1;
        sub_14040FB10(v170, &off_1419E89B0);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v158 = 0;
        sub_140E72AA0(v170, &v103, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v15);
        v16 = (char *)sub_140001650(12, 1);
        if ( !v16 )
          sub_141938D2B(1, 12);
        qmemcpy(v16, "input_schema", 12);
        v114 = 12;
        v115 = v16;
        v116 = 12;
        v117.m128i_i64[0] = 0;
        v118 = 0;
        nullsub_1(0x63735F7475706E69LL);
        v17 = (_DWORD *)sub_140001650(4, 1);
        if ( !v17 )
          sub_141938D2B(1, 4);
        *v17 = 1701869940;
        v167 = 4;
        v168 = v17;
        v169 = 4;
        v157 = 1;
        sub_14040FB10(v170, &off_1419E5490);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v157 = 0;
        sub_140E72AA0(v170, &v117, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v18);
        v19 = (void *)sub_140001650(10, 1);
        if ( !v19 )
          sub_141938D2B(1, 10);
        qmemcpy(v19, "properties", 10);
        v109 = 10;
        v110 = v19;
        v111 = 10;
        *(_QWORD *)&v119 = 0;
        v120 = 0;
        nullsub_1(0x69747265706F7270LL);
        v20 = (_DWORD *)sub_140001650(7, 1);
        if ( !v20 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v20 + 3) = 1684955501;
        *v20 = 1835888483;
        v106 = 7;
        v107 = v20;
        v108 = 7;
        *(_QWORD *)&v112 = 0;
        v113 = 0;
        nullsub_1(v21);
        v22 = (_DWORD *)sub_140001650(4, 1);
        if ( !v22 )
          sub_141938D2B(1, 4);
        *v22 = 1701869940;
        v167 = 4;
        v168 = v22;
        v169 = 4;
        v156 = 1;
        sub_14040FB10(v170, &off_1419E89D0);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v156 = 0;
        sub_140E72AA0(v170, &v112, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v23);
        v24 = sub_140001650(5, 1);
        if ( !v24 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v24 + 4) = 115;
        *(_DWORD *)v24 = 1835365481;
        v121 = 5;
        v122 = (_DWORD *)v24;
        v123 = 5;
        *(_QWORD *)&v125 = 0;
        v126 = 0;
        nullsub_1(v25);
        v26 = (_DWORD *)sub_140001650(4, 1);
        if ( !v26 )
          sub_141938D2B(1, 4);
        *v26 = 1701869940;
        v167 = 4;
        v168 = v26;
        v169 = 4;
        v155 = 1;
        sub_14040FB10(v170, &off_1419E88E0);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v155 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        *(_OWORD *)&v170[8] = v125;
        v171 = v126;
        v170[0] = 5;
        v136 = 0;
        sub_140E72AA0(&v165, &v112, &v121, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        nullsub_1(v27);
        v28 = (void *)sub_140001650(11, 1);
        if ( !v28 )
          sub_141938D2B(1, 11);
        qmemcpy(v28, "description", 11);
        v167 = 11;
        v168 = v28;
        v169 = 11;
        v154 = 1;
        sub_14040FB10(v170, &off_1419E8A48);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v154 = 0;
        sub_140E72AA0(v170, &v112, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        *(_OWORD *)&v170[8] = v112;
        v171 = v113;
        v170[0] = 5;
        v135 = 0;
        sub_140E72AA0(&v165, &v119, &v106, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        nullsub_1(v29);
        v30 = (_DWORD *)sub_140001650(7, 1);
        if ( !v30 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v30 + 3) = 1919509611;
        *v30 = 1802661751;
        v121 = 7;
        v122 = v30;
        v123 = 7;
        *(_QWORD *)&v125 = 0;
        v126 = 0;
        nullsub_1(v31);
        v32 = (_DWORD *)sub_140001650(4, 1);
        if ( !v32 )
          sub_141938D2B(1, 4);
        *v32 = 1701869940;
        v167 = 4;
        v168 = v32;
        v169 = 4;
        v153 = 1;
        sub_14040FB10(v170, &off_1419E88E0);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v153 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v33);
        v34 = (void *)sub_140001650(11, 1);
        if ( !v34 )
          sub_141938D2B(1, 11);
        qmemcpy(v34, "description", 11);
        v167 = 11;
        v168 = v34;
        v169 = 11;
        v152 = 1;
        sub_14040FB10(v170, &off_1419E8A90);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v152 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        *(_OWORD *)&v170[8] = v125;
        v171 = v126;
        v170[0] = 5;
        v134 = 0;
        sub_140E72AA0(&v165, &v119, &v121, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        nullsub_1(v35);
        v36 = (void *)sub_140001650(10, 1);
        if ( !v36 )
          sub_141938D2B(1, 10);
        qmemcpy(v36, "timeout_ms", 10);
        v121 = 10;
        v122 = v36;
        v123 = 10;
        *(_QWORD *)&v125 = 0;
        v126 = 0;
        nullsub_1(0x5F74756F656D6974LL);
        v37 = (_DWORD *)sub_140001650(4, 1);
        if ( !v37 )
          sub_141938D2B(1, 4);
        *v37 = 1701869940;
        v167 = 4;
        v168 = v37;
        v169 = 4;
        v151 = 1;
        sub_14040FB10(v170, &off_1419E8AA8);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v151 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v38);
        v39 = (void *)sub_140001650(11, 1);
        if ( !v39 )
          sub_141938D2B(1, 11);
        qmemcpy(v39, "description", 11);
        v167 = 11;
        v168 = v39;
        v169 = 11;
        v150 = 1;
        sub_14040FB10(v170, &off_1419E8AF0);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v150 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        *(_OWORD *)&v170[8] = v125;
        v171 = v126;
        v170[0] = 5;
        v133 = 0;
        sub_140E72AA0(&v165, &v119, &v121, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        *(_OWORD *)&v170[8] = v119;
        v171 = v120;
        v170[0] = 5;
        v132 = 0;
        sub_140E72AA0(&v165, &v117, &v109, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        nullsub_1(v40);
        v41 = (_QWORD *)sub_140001650(8, 1);
        if ( !v41 )
          sub_141938D2B(1, 8);
        *v41 = 0x6465726975716572LL;
        v167 = 8;
        v168 = v41;
        v169 = 8;
        v141 = 1;
        v124 = sub_1402BD6F0(0x6465726975716572LL);
        sub_14040FB10(v170, &off_1419E8B00);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EE0);
        }
        v42 = *(_OWORD *)v170;
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v43 = (_OWORD *)v124;
        *(__m128i *)(v124 + 16) = v166;
        *v43 = v42;
        *(_QWORD *)&v170[8] = 1;
        *(_QWORD *)&v170[16] = v43;
        v171 = 1;
        v170[0] = 4;
        v141 = 0;
        sub_140E72AA0(&v165, &v117, &v167, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        *(__m128i *)&v170[8] = v117;
        v171 = v118;
        v170[0] = 5;
        v131 = 0;
        sub_140E72AA0(&v165, &v103, &v114, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        v44 = v104;
        v45 = _mm_loadu_si128(&v103);
      }
      else
      {
        v117.m128i_i64[0] = 0;
        v118 = 0;
        nullsub_1(v10);
        v52 = (_DWORD *)sub_140001650(4, 1);
        if ( !v52 )
          sub_141938D2B(1, 4);
        *v52 = 1701667182;
        v167 = 4;
        v168 = v52;
        v169 = 4;
        v149 = 1;
        sub_14040FB10(v170, &off_1419E5508);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EF8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v149 = 0;
        sub_140E72AA0(v170, &v117, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v53);
        v54 = (void *)sub_140001650(11, 1);
        if ( !v54 )
          sub_141938D2B(1, 11);
        qmemcpy(v54, "description", 11);
        v167 = 11;
        v168 = v54;
        v169 = 11;
        v148 = 1;
        sub_14040FB10(v170, &off_1419E8F70);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EF8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v148 = 0;
        sub_140E72AA0(v170, &v117, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v55);
        v56 = (void *)sub_140001650(12, 1);
        if ( !v56 )
          sub_141938D2B(1, 12);
        qmemcpy(v56, "input_schema", 12);
        v109 = 12;
        v110 = v56;
        v111 = 12;
        *(_QWORD *)&v119 = 0;
        v120 = 0;
        nullsub_1(0x63735F7475706E69LL);
        v57 = (_DWORD *)sub_140001650(4, 1);
        if ( !v57 )
          sub_141938D2B(1, 4);
        *v57 = 1701869940;
        v167 = 4;
        v168 = v57;
        v169 = 4;
        v147 = 1;
        sub_14040FB10(v170, &off_1419E5490);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EF8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v147 = 0;
        sub_140E72AA0(v170, &v119, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v58);
        v59 = (void *)sub_140001650(10, 1);
        if ( !v59 )
          sub_141938D2B(1, 10);
        qmemcpy(v59, "properties", 10);
        v106 = 10;
        v107 = v59;
        v108 = 10;
        *(_QWORD *)&v112 = 0;
        v113 = 0;
        nullsub_1(0x69747265706F7270LL);
        v60 = sub_140001650(5, 1);
        if ( !v60 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v60 + 4) = 121;
        *(_DWORD *)v60 = 1919251825;
        v121 = 5;
        v122 = (_DWORD *)v60;
        v123 = 5;
        *(_QWORD *)&v125 = 0;
        v126 = 0;
        nullsub_1(v61);
        v62 = (_DWORD *)sub_140001650(4, 1);
        if ( !v62 )
          sub_141938D2B(1, 4);
        *v62 = 1701869940;
        v167 = 4;
        v168 = v62;
        v169 = 4;
        v146 = 1;
        sub_14040FB10(v170, &off_1419E88E0);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EF8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v146 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v63);
        v64 = (void *)sub_140001650(11, 1);
        if ( !v64 )
          sub_141938D2B(1, 11);
        qmemcpy(v64, "description", 11);
        v167 = 11;
        v168 = v64;
        v169 = 11;
        v145 = 1;
        sub_14040FB10(v170, &off_1419E8FB8);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EF8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v145 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        *(_OWORD *)&v170[8] = v125;
        v171 = v126;
        v170[0] = 5;
        v130 = 0;
        sub_140E72AA0(&v165, &v112, &v121, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        nullsub_1(v65);
        v66 = sub_140001650(5, 1);
        if ( !v66 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v66 + 4) = 116;
        *(_DWORD *)v66 = 1768778092;
        v121 = 5;
        v122 = (_DWORD *)v66;
        v123 = 5;
        *(_QWORD *)&v125 = 0;
        v126 = 0;
        nullsub_1(v67);
        v68 = (_DWORD *)sub_140001650(4, 1);
        if ( !v68 )
          sub_141938D2B(1, 4);
        *v68 = 1701869940;
        v167 = 4;
        v168 = v68;
        v169 = 4;
        v144 = 1;
        sub_14040FB10(v170, &off_1419E8FD0);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EF8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v144 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        nullsub_1(v69);
        v70 = (void *)sub_140001650(11, 1);
        if ( !v70 )
          sub_141938D2B(1, 11);
        qmemcpy(v70, "description", 11);
        v167 = 11;
        v168 = v70;
        v169 = 11;
        v143 = 1;
        sub_14040FB10(v170, &off_1419E9008);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EF8);
        }
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v143 = 0;
        sub_140E72AA0(v170, &v125, &v167, &v165);
        if ( v170[0] != 0xFF )
          sub_14002F9D0(v170);
        *(_OWORD *)&v170[8] = v125;
        v171 = v126;
        v170[0] = 5;
        v129 = 0;
        sub_140E72AA0(&v165, &v112, &v121, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        *(_OWORD *)&v170[8] = v112;
        v171 = v113;
        v170[0] = 5;
        v128 = 0;
        sub_140E72AA0(&v165, &v119, &v106, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        nullsub_1(v71);
        v72 = (_QWORD *)sub_140001650(8, 1);
        if ( !v72 )
          sub_141938D2B(1, 8);
        *v72 = 0x6465726975716572LL;
        v167 = 8;
        v168 = v72;
        v169 = 8;
        v140 = 1;
        v124 = sub_1402BD6F0(0x6465726975716572LL);
        sub_14040FB10(v170, &off_1419E9018);
        if ( v170[0] == 0xFF )
        {
          *(_QWORD *)&v165 = *(_QWORD *)&v170[8];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v165,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E8EF8);
        }
        v73 = *(_OWORD *)v170;
        v166 = _mm_loadu_si128((const __m128i *)&v170[16]);
        v165 = *(_OWORD *)v170;
        v74 = (_OWORD *)v124;
        *(__m128i *)(v124 + 16) = v166;
        *v74 = v73;
        *(_QWORD *)&v170[8] = 1;
        *(_QWORD *)&v170[16] = v74;
        v171 = 1;
        v170[0] = 4;
        v140 = 0;
        sub_140E72AA0(&v165, &v119, &v167, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        *(_OWORD *)&v170[8] = v119;
        v171 = v120;
        v170[0] = 5;
        v127 = 0;
        sub_140E72AA0(&v165, &v117, &v109, v170);
        if ( (_BYTE)v165 != 0xFF )
          sub_14002F9D0(&v165);
        v44 = v118;
        v45 = _mm_loadu_si128(&v117);
      }
      *(__m128i *)&v102[7] = v45;
      *(_QWORD *)&v102[23] = v44;
      v9 = 5;
    }
LABEL_81:
    *(_BYTE *)a1 = v9;
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v102;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v102[15];
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v102[23];
    return *(_QWORD *)&v102[23];
  }
  if ( *(_QWORD *)v7 != 0x6E6F6974636E7566LL )
    goto LABEL_81;
  v46 = sub_1416419F0(aName_2, 4, a2);
  v47 = 1;
  if ( v46 && *(_BYTE *)v46 == 3 )
  {
    v47 = *(_QWORD *)(v46 + 16);
    v48 = *(_QWORD *)(v46 + 24);
  }
  else
  {
    v48 = 0;
  }
  return sub_140301400(a1, a2, v47, v48);
}
