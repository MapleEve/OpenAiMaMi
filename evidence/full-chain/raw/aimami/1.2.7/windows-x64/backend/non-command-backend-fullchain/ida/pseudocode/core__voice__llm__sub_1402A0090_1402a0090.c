// win 1.2.7 | module src/core/voice/llm.rs | ea 0x1402a0090 | name sub_1402A0090
// win 1.2.7 | module src/core/voice/llm.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_1402A0090(_QWORD *a1, _QWORD *a2, const __m128i *a3, signed __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r8d
  char v15; // r9
  char v16; // r10
  char v17; // r11
  __int64 v18; // rdx
  int v19; // r10d
  int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  __int64 v29; // rsi
  void *v30; // rax
  _QWORD *v31; // rcx
  const __m128i *v33; // r13
  __m128i *v34; // rax
  __int64 v35; // r12
  __int128 v36; // kr10_16
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rsi
  _DWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rcx
  __m128i *v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rcx
  _DWORD *v52; // rax
  __int64 v53; // rcx
  _DWORD *v54; // rax
  __int64 v55; // rcx
  _DWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rsi
  __m128i *v59; // rax
  __int64 v60; // rdi
  _QWORD *v61; // rax
  __int128 v62; // xmm0
  __int64 v63; // rcx
  __int128 v64; // xmm0
  __int64 v65; // rcx
  void *v66; // rax
  __int64 v67; // rcx
  void *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r13
  __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // eax
  _OWORD *v76; // rax
  void *v77; // rax
  int v78; // eax
  int v79; // eax
  __int64 v80; // rax
  int v81; // eax
  void *v82; // rax
  _QWORD *v83; // rax
  _DWORD *v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rax
  __int128 v87; // xmm0
  _QWORD *v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int128 v94; // rax
  __int64 v95; // rsi
  __int16 v96; // di
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdi
  __int128 v100; // rax
  unsigned __int32 v101; // ecx
  unsigned int v102; // r8d
  int v103; // r9d
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // r15
  const __m128i *v108; // r14
  unsigned __int8 v109; // al
  __int64 v110; // rax
  __int128 v111; // xmm0
  _QWORD *v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rdx
  _QWORD *v115; // rcx
  __int64 v116; // rax
  _QWORD *v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  _QWORD *v120; // rcx
  void *v121; // rax
  _QWORD *v122; // rcx
  _BYTE v123[24]; // [rsp+58h] [rbp-28h] BYREF
  __m256i v124; // [rsp+70h] [rbp-10h] BYREF
  __int128 v125; // [rsp+90h] [rbp+10h]
  __int128 v126; // [rsp+A0h] [rbp+20h]
  __int128 v127; // [rsp+B0h] [rbp+30h]
  __int128 v128; // [rsp+C0h] [rbp+40h]
  __int64 v129; // [rsp+D0h] [rbp+50h]
  _WORD v130[9]; // [rsp+D8h] [rbp+58h]
  __int128 v131; // [rsp+EAh] [rbp+6Ah]
  __int128 v132; // [rsp+FAh] [rbp+7Ah]
  _OWORD v133[48]; // [rsp+10Ah] [rbp+8Ah]
  __int128 v134; // [rsp+418h] [rbp+398h] BYREF
  __int64 v135; // [rsp+428h] [rbp+3A8h]
  __m256i v136; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v137; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v138; // [rsp+460h] [rbp+3E0h]
  _BYTE v139[40]; // [rsp+470h] [rbp+3F0h]
  _BYTE v140[74]; // [rsp+498h] [rbp+418h]
  __int128 v141; // [rsp+4E2h] [rbp+462h]
  _OWORD v142[44]; // [rsp+4F2h] [rbp+472h]
  __int64 v143; // [rsp+7C0h] [rbp+740h]
  int v144; // [rsp+7C8h] [rbp+748h]
  _BYTE v145[320]; // [rsp+7D0h] [rbp+750h] BYREF
  __int16 v146; // [rsp+918h] [rbp+898h] BYREF
  __int64 v147; // [rsp+91Ah] [rbp+89Ah]
  __int32 v148; // [rsp+922h] [rbp+8A2h]
  __int16 v149; // [rsp+926h] [rbp+8A6h]
  __int128 v150; // [rsp+928h] [rbp+8A8h]
  char v151[8]; // [rsp+938h] [rbp+8B8h] BYREF
  __int128 v152; // [rsp+940h] [rbp+8C0h] BYREF
  __int64 v153; // [rsp+950h] [rbp+8D0h]
  void (__fastcall *v154)(_QWORD, _QWORD, _QWORD); // [rsp+958h] [rbp+8D8h]
  __int128 v155; // [rsp+960h] [rbp+8E0h]
  __int128 v156; // [rsp+970h] [rbp+8F0h]
  __int128 v157; // [rsp+980h] [rbp+900h]
  __int128 v158; // [rsp+990h] [rbp+910h]
  __int64 v159; // [rsp+9A0h] [rbp+920h]
  __int128 v160; // [rsp+9B0h] [rbp+930h]
  __int128 v161; // [rsp+9C0h] [rbp+940h]
  __int128 v162; // [rsp+9D0h] [rbp+950h]
  _OWORD v163[2]; // [rsp+9E0h] [rbp+960h]
  __int128 v164; // [rsp+A00h] [rbp+980h]
  __int64 v165; // [rsp+A10h] [rbp+990h]
  __int128 v166; // [rsp+A20h] [rbp+9A0h] BYREF
  __int64 v167; // [rsp+A30h] [rbp+9B0h]
  __int64 v168; // [rsp+A38h] [rbp+9B8h] BYREF
  __int64 v169; // [rsp+A40h] [rbp+9C0h]
  __int64 v170; // [rsp+A48h] [rbp+9C8h]
  __int64 v171; // [rsp+A50h] [rbp+9D0h] BYREF
  __int64 v172; // [rsp+A58h] [rbp+9D8h] BYREF
  __int64 v173; // [rsp+A60h] [rbp+9E0h]
  __int64 v174; // [rsp+A68h] [rbp+9E8h]
  __int64 v175; // [rsp+A70h] [rbp+9F0h]
  __int64 v176; // [rsp+A78h] [rbp+9F8h] BYREF
  char (__fastcall *v177)(__int64 *, _QWORD *); // [rsp+A80h] [rbp+A00h]
  __int64 v178; // [rsp+A88h] [rbp+A08h]
  __int128 v179; // [rsp+A90h] [rbp+A10h] BYREF
  __int128 v180; // [rsp+AA0h] [rbp+A20h]
  __int128 v181; // [rsp+AB0h] [rbp+A30h] BYREF
  __int64 v182; // [rsp+AC0h] [rbp+A40h]
  __int64 v183; // [rsp+AC8h] [rbp+A48h]
  _QWORD *v184; // [rsp+AD0h] [rbp+A50h]
  __int64 v185; // [rsp+AD8h] [rbp+A58h]
  __int128 v186; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 v187; // [rsp+AF0h] [rbp+A70h]
  __int64 v188; // [rsp+B00h] [rbp+A80h]
  char v189; // [rsp+B0Fh] [rbp+A8Fh]
  char v190; // [rsp+B10h] [rbp+A90h]
  char v191; // [rsp+B11h] [rbp+A91h]
  char v192; // [rsp+B12h] [rbp+A92h]
  char v193; // [rsp+B13h] [rbp+A93h]
  char v194; // [rsp+B14h] [rbp+A94h]
  char v195; // [rsp+B15h] [rbp+A95h]
  char v196; // [rsp+B16h] [rbp+A96h]
  char v197; // [rsp+B17h] [rbp+A97h]
  __int64 v198; // [rsp+B18h] [rbp+A98h]

  v198 = -2;
  v184 = a1;
  if ( !(unsigned __int8)sub_1402B6160(a2) )
  {
    nullsub_1(v9);
    v30 = (void *)sub_140001650(24, 1);
    if ( !v30 )
      sub_141938D2B(1, 24);
    qmemcpy(v30, "LLM config is incomplete", 24);
    v31 = v184;
    v184[1] = 24;
    v31[2] = v30;
    v31[3] = 24;
    *v31 = 1;
    return v31;
  }
  sub_1403507D0(&v168, a2[1], a2[2]);
  v188 = v170;
  if ( v170 == 6 && !(*(_DWORD *)v169 ^ 0x75616C63 | *(unsigned __int16 *)(v169 + 4) ^ 0x6564) )
  {
    sub_14034B240(&v136, a2, a3, a4);
    v36 = *(_OWORD *)&v136.m256i_u64[2];
    if ( v136.m256i_i32[0] == 1 )
    {
      v37 = v184;
      v184[1] = v136.m256i_i64[1];
      *((_OWORD *)v37 + 1) = v36;
      *v37 = 1;
    }
    else
    {
      v185 = v136.m256i_i64[2];
      v188 = v136.m256i_i64[1];
      (*(void (__fastcall **)(__int64, __int64, __int64))(a6 + 40))(a5, v136.m256i_i64[2], v136.m256i_i64[3]);
      v61 = v184;
      v184[1] = v188;
      v61[2] = v185;
      v61[3] = *((_QWORD *)&v36 + 1);
      *v61 = 0;
    }
    goto LABEL_161;
  }
  v10 = a2[10];
  v11 = a2[11];
  while ( 1 )
  {
    v12 = v11;
    if ( !v11 )
      break;
    v13 = v10 + v11;
    v14 = *(char *)(v10 + v12 - 1);
    if ( v14 >= 0 )
    {
      v11 = v12 - 1;
      if ( v14 != 47 )
        break;
    }
    else
    {
      v15 = *(_BYTE *)(v13 - 2);
      if ( v15 >= -64 )
      {
        v18 = v13 - 2;
        v20 = v15 & 0x1F;
      }
      else
      {
        v16 = *(_BYTE *)(v13 - 3);
        if ( v16 >= -64 )
        {
          v18 = v13 - 3;
          v19 = v16 & 0xF;
        }
        else
        {
          v17 = *(_BYTE *)(v13 - 4);
          v18 = v13 - 4;
          v19 = ((v17 & 7) << 6) | v16 & 0x3F;
        }
        v20 = (v19 << 6) | v15 & 0x3F;
      }
      v11 = v18 - v10;
      if ( ((v20 << 6) | v14 & 0x3F) != 0x2F )
        break;
    }
  }
  *(_QWORD *)v145 = a2[10];
  *(_QWORD *)&v145[8] = v12;
  v124.m256i_i64[0] = (__int64)v145;
  v124.m256i_i64[1] = (__int64)sub_140186EE0;
  sub_1416ABFD0(&v136, &unk_1419E49E7, &v124);
  v166 = *(_OWORD *)v136.m256i_i8;
  v167 = v136.m256i_i64[2];
  *(_QWORD *)&v181 = 0;
  v182 = 0;
  nullsub_1(v21);
  v22 = sub_140001650(5, 1);
  if ( !v22 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v22 + 4) = 108;
  *(_DWORD *)v22 = 1701080941;
  *(_QWORD *)v145 = 5;
  *(_QWORD *)&v145[8] = v22;
  *(_QWORD *)&v145[16] = 5;
  v23 = a2[7];
  v24 = a2[8];
  v193 = 1;
  v25 = sub_140E91160(v23, v24);
  v28 = v26;
  if ( v26 < 0 )
  {
    v29 = 0;
    goto LABEL_18;
  }
  if ( v26 )
  {
    v33 = (const __m128i *)v25;
    nullsub_1(v27);
    v29 = 1;
    v34 = (__m128i *)sub_140001650(v28, 1);
    if ( !v34 )
    {
LABEL_18:
      v193 = 1;
      sub_141938D2B(v29, v28);
    }
    v35 = (__int64)v34;
    sub_1418F44E0(v34, v33, v28);
  }
  else
  {
    v35 = 1;
  }
  v136.m256i_i8[0] = 3;
  v136.m256i_i64[1] = v28;
  v136.m256i_i64[2] = v35;
  v136.m256i_i64[3] = v28;
  v193 = 0;
  sub_140E72AA0(&v124, &v181, v145, &v136);
  if ( v124.m256i_i8[0] != -1 )
    sub_14002F9D0(&v124);
  nullsub_1(v38);
  v39 = (_QWORD *)sub_140001650(8, 1);
  if ( !v39 )
    sub_141938D2B(1, 8);
  *v39 = 0x736567617373656DLL;
  v176 = 8;
  v177 = (char (__fastcall *)(__int64 *, _QWORD *))v39;
  v178 = 8;
  nullsub_1(0x736567617373656DLL);
  v40 = sub_140001650(64, 8);
  if ( !v40 )
  {
    v192 = 1;
    sub_141938D11(8, 64);
  }
  v42 = v40;
  *(_QWORD *)&v186 = 0;
  *(_QWORD *)&v187 = 0;
  nullsub_1(v41);
  v43 = (_DWORD *)sub_140001650(4, 1);
  v185 = v42;
  if ( !v43 )
    sub_141938D2B(1, 4);
  *v43 = 1701605234;
  *(_QWORD *)v145 = 4;
  *(_QWORD *)&v145[8] = v43;
  *(_QWORD *)&v145[16] = 4;
  nullsub_1(v44);
  v45 = sub_140001650(6, 1);
  v183 = v45;
  if ( !v45 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v45 + 4) = 28005;
  *(_DWORD *)v45 = 1953724787;
  v136.m256i_i8[0] = 3;
  v136.m256i_i64[1] = 6;
  v136.m256i_i64[2] = v45;
  v136.m256i_i64[3] = 6;
  sub_140E72AA0(&v124, &v186, v145, &v136);
  if ( v124.m256i_i8[0] != -1 )
    sub_14002F9D0(&v124);
  nullsub_1(v46);
  v47 = (_DWORD *)sub_140001650(7, 1);
  if ( !v47 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v47 + 3) = 1953391988;
  *v47 = 1953394531;
  *(_QWORD *)v145 = 7;
  *(_QWORD *)&v145[8] = v47;
  *(_QWORD *)&v145[16] = 7;
  nullsub_1(v48);
  v49 = (__m128i *)sub_140001650(222, 1);
  v183 = (__int64)v49;
  if ( !v49 )
    sub_141938D2B(1, 222);
  v50 = (__int64)v49;
  sub_1418F44E0(
    v49,
    (const __m128i *)"你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokens"
                     "streamdoubaoreasoning_effortnone",
    0xDEu);
  v136.m256i_i8[0] = 3;
  v136.m256i_i64[1] = 222;
  v136.m256i_i64[2] = v50;
  v136.m256i_i64[3] = 222;
  sub_140E72AA0(&v124, &v186, v145, &v136);
  if ( v124.m256i_i8[0] != -1 )
    sub_14002F9D0(&v124);
  *(_OWORD *)&v145[8] = v186;
  *(_QWORD *)&v145[24] = v187;
  v145[0] = 5;
  *(_QWORD *)&v179 = 0;
  *(_QWORD *)&v180 = 0;
  nullsub_1(v51);
  v52 = (_DWORD *)sub_140001650(4, 1);
  if ( !v52 )
    sub_141938D2B(1, 4);
  *v52 = 1701605234;
  *(_QWORD *)&v186 = 4;
  *((_QWORD *)&v186 + 1) = v52;
  *(_QWORD *)&v187 = 4;
  nullsub_1(v53);
  v54 = (_DWORD *)sub_140001650(4, 1);
  v183 = (__int64)v54;
  if ( !v54 )
    sub_141938D2B(1, 4);
  *v54 = 1919251317;
  v136.m256i_i8[0] = 3;
  v136.m256i_i64[1] = 4;
  v136.m256i_i64[2] = (__int64)v54;
  v136.m256i_i64[3] = 4;
  sub_140E72AA0(&v124, &v179, &v186, &v136);
  if ( v124.m256i_i8[0] != -1 )
    sub_14002F9D0(&v124);
  nullsub_1(v55);
  v56 = (_DWORD *)sub_140001650(7, 1);
  if ( !v56 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v56 + 3) = 1953391988;
  *v56 = 1953394531;
  *(_QWORD *)&v186 = 7;
  *((_QWORD *)&v186 + 1) = v56;
  *(_QWORD *)&v187 = 7;
  if ( a4 < 0 )
  {
    v58 = 0;
    goto LABEL_46;
  }
  if ( a4 )
  {
    nullsub_1(v57);
    v58 = 1;
    v59 = (__m128i *)sub_140001650(a4, 1);
    if ( !v59 )
    {
LABEL_46:
      v190 = 1;
      sub_141938D2B(v58, a4);
    }
    v60 = (__int64)v59;
    sub_1418F44E0(v59, a3, a4);
  }
  else
  {
    v60 = 1;
  }
  v136.m256i_i8[0] = 3;
  v136.m256i_i64[1] = a4;
  v136.m256i_i64[2] = v60;
  v136.m256i_i64[3] = a4;
  v190 = 0;
  sub_140E72AA0(&v124, &v179, &v186, &v136);
  if ( v124.m256i_i8[0] != -1 )
    sub_14002F9D0(&v124);
  *(_OWORD *)((char *)&v136.m256i_u32[1] + 3) = v179;
  *(__int64 *)((char *)&v136.m256i_i64[2] + 7) = v180;
  v62 = *(_OWORD *)v145;
  v63 = v185;
  *(_OWORD *)(v185 + 16) = *(_OWORD *)&v145[16];
  *(_OWORD *)v63 = v62;
  *(_BYTE *)(v63 + 32) = 5;
  v64 = *(_OWORD *)v136.m256i_i8;
  *(_OWORD *)(v63 + 48) = *(_OWORD *)((char *)&v136.m256i_u64[1] + 7);
  *(_OWORD *)(v63 + 33) = v64;
  v136.m256i_i64[1] = 2;
  v136.m256i_i64[2] = v63;
  v136.m256i_i64[3] = 2;
  v136.m256i_i8[0] = 4;
  v192 = 0;
  sub_140E72AA0(&v124, &v181, &v176, &v136);
  if ( v124.m256i_i8[0] != -1 )
    sub_14002F9D0(&v124);
  nullsub_1(v65);
  v66 = (void *)sub_140001650(11, 1);
  if ( !v66 )
    sub_141938D2B(1, 11);
  qmemcpy(v66, "temperature", 11);
  *(_QWORD *)v145 = 11;
  *(_QWORD *)&v145[8] = v66;
  *(_QWORD *)&v145[16] = 11;
  v195 = 1;
  sub_141643750(&v136);
  if ( v136.m256i_i8[0] == -1 )
  {
    v124.m256i_i64[0] = v136.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_2,
      43,
      (unsigned int)&v124,
      (unsigned int)&off_1419E6A30,
      (__int64)&off_1419E4A18);
  }
  v124 = v136;
  v195 = 0;
  sub_140E72AA0(&v136, &v181, v145, &v124);
  if ( v136.m256i_i8[0] != -1 )
    sub_14002F9D0(&v136);
  nullsub_1(v67);
  v68 = (void *)sub_140001650(10, 1);
  if ( !v68 )
    sub_141938D2B(1, 10);
  qmemcpy(v68, "max_tokens", 10);
  *(_QWORD *)v145 = 10;
  *(_QWORD *)&v145[8] = v68;
  *(_QWORD *)&v145[16] = 10;
  v136.m256i_i8[0] = 2;
  v136.m256i_i64[1] = 0;
  v136.m256i_i64[2] = 2048;
  sub_140E72AA0(&v124, &v181, v145, &v136);
  if ( v124.m256i_i8[0] != -1 )
    sub_14002F9D0(&v124);
  nullsub_1(v69);
  v70 = sub_140001650(6, 1);
  if ( !v70 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v70 + 4) = 28001;
  *(_DWORD *)v70 = 1701999731;
  *(_QWORD *)v145 = 6;
  *(_QWORD *)&v145[8] = v70;
  *(_QWORD *)&v145[16] = 6;
  v146 = 257;
  *(_OWORD *)&v136.m256i_u64[2] = v150;
  v136.m256i_i16[0] = 257;
  *(__int64 *)((char *)v136.m256i_i64 + 2) = v147;
  *(__int32 *)((char *)&v136.m256i_i32[2] + 2) = v148;
  v136.m256i_i16[7] = v149;
  sub_140E72AA0(&v124, &v181, v145, &v136);
  if ( v124.m256i_i8[0] != -1 )
    sub_14002F9D0(&v124);
  v152 = v181;
  v153 = v182;
  v151[0] = 5;
  v72 = v169;
  switch ( v188 )
  {
    case 4LL:
      if ( *(_DWORD *)v169 == 1768778091 )
        goto LABEL_90;
      break;
    case 5LL:
      v75 = *(_DWORD *)v169 ^ 0x7069687A;
      if ( !(v75 | *(unsigned __int8 *)(v169 + 4) ^ 0x75) )
      {
        nullsub_1(v75 | *(unsigned __int8 *)(v169 + 4) ^ 0x75u);
        v76 = (_OWORD *)sub_140001650(16, 1);
        if ( !v76 )
          sub_141938D2B(1, 16);
        *v76 = *(_OWORD *)"reasoning_effortnone";
        *(_QWORD *)v145 = 16;
        *(_QWORD *)&v145[8] = v76;
        *(_QWORD *)&v145[16] = 16;
        v194 = 1;
        sub_14040FB10(&v136, &off_1419E4B60);
        if ( v136.m256i_i8[0] == -1 )
        {
          v124.m256i_i64[0] = v136.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_2,
            43,
            (unsigned int)&v124,
            (unsigned int)&off_1419E6A30,
            (__int64)&off_1419E4B70);
        }
        v124 = v136;
        v194 = 0;
        sub_140E72AA0(&v136, &v152, v145, &v124);
        if ( v136.m256i_i8[0] != -1 )
          goto LABEL_74;
      }
      break;
    case 6LL:
      v78 = *(_DWORD *)v169 ^ 0x62756F64;
      v71 = v78 | *(unsigned __int16 *)(v169 + 4) ^ 0x6F61u;
      if ( !(v78 | *(unsigned __int16 *)(v169 + 4) ^ 0x6F61) )
        goto LABEL_90;
      v79 = *(_DWORD *)v169 ^ 0x616C6C6F;
      if ( !(v79 | *(unsigned __int16 *)(v169 + 4) ^ 0x616D) )
      {
        nullsub_1(v79 | *(unsigned __int16 *)(v169 + 4) ^ 0x616Du);
        v80 = sub_140001650(5, 1);
        if ( !v80 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v80 + 4) = 107;
        *(_DWORD *)v80 = 1852401780;
        *(_QWORD *)v145 = 5;
        *(_QWORD *)&v145[8] = v80;
        *(_QWORD *)&v145[16] = 5;
        v136.m256i_i16[0] = 1;
        sub_140E72AA0(&v124, &v152, v145, &v136);
        if ( v124.m256i_i8[0] != -1 )
          goto LABEL_96;
      }
      break;
    case 7LL:
      v81 = *(_DWORD *)v169 ^ 0x6C696162;
      if ( !(v81 | *(_DWORD *)(v169 + 3) ^ 0x6E61696C) )
      {
        nullsub_1(v81 | *(_DWORD *)(v169 + 3) ^ 0x6E61696Cu);
        v82 = (void *)sub_140001650(15, 1);
        if ( !v82 )
          sub_141938D2B(1, 15);
        qmemcpy(v82, "enable_thinking", 15);
        *(_QWORD *)v145 = 15;
        *(_QWORD *)&v145[8] = v82;
        *(_QWORD *)&v145[16] = 15;
        v136.m256i_i16[0] = 1;
        sub_140E72AA0(&v124, &v152, v145, &v136);
        if ( v124.m256i_i8[0] != -1 )
          goto LABEL_96;
      }
      break;
    case 8LL:
      if ( *(_QWORD *)v169 == 0x6B65657370656564LL )
      {
LABEL_90:
        nullsub_1(v71);
        v83 = (_QWORD *)sub_140001650(8, 1);
        if ( !v83 )
          sub_141938D2B(1, 8);
        *v83 = 0x676E696B6E696874LL;
        *(_QWORD *)&v179 = 8;
        *((_QWORD *)&v179 + 1) = v83;
        *(_QWORD *)&v180 = 8;
        *(_QWORD *)&v186 = 0;
        *(_QWORD *)&v187 = 0;
        nullsub_1(0x676E696B6E696874LL);
        v84 = (_DWORD *)sub_140001650(4, 1);
        if ( !v84 )
          sub_141938D2B(1, 4);
        *v84 = 1701869940;
        *(_QWORD *)v145 = 4;
        *(_QWORD *)&v145[8] = v84;
        *(_QWORD *)&v145[16] = 4;
        nullsub_1(v85);
        v86 = (_QWORD *)sub_140001650(8, 1);
        v185 = (__int64)v86;
        if ( !v86 )
          sub_141938D2B(1, 8);
        *v86 = 0x64656C6261736964LL;
        v136.m256i_i8[0] = 3;
        v136.m256i_i64[1] = 8;
        v136.m256i_i64[2] = (__int64)v86;
        v136.m256i_i64[3] = 8;
        sub_140E72AA0(&v124, &v186, v145, &v136);
        if ( v124.m256i_i8[0] != -1 )
          sub_14002F9D0(&v124);
        *(_OWORD *)&v136.m256i_u64[1] = v186;
        v136.m256i_i64[3] = v187;
        v136.m256i_i8[0] = 5;
        v189 = 0;
        sub_140E72AA0(&v124, &v152, &v179, &v136);
        if ( v124.m256i_i8[0] != -1 )
LABEL_96:
          sub_14002F9D0(&v124);
      }
      break;
    case 9LL:
      v73 = *(_QWORD *)v169 ^ 0x6378616D696E696DLL;
      v74 = *(unsigned __int8 *)(v169 + 8) ^ 0x6ELL;
      goto LABEL_76;
    case 11LL:
      v73 = *(_QWORD *)v169 ^ 0x6978616D696E696DLL;
      v74 = *(_QWORD *)(v169 + 3) ^ 0x6C746E6978616D69LL;
LABEL_76:
      if ( !(v73 | v74) )
      {
        nullsub_1(0);
        v77 = (void *)sub_140001650(15, 1);
        if ( !v77 )
          sub_141938D2B(1, 15);
        qmemcpy(v77, "reasoning_split", 15);
        v124.m256i_i64[0] = 15;
        v124.m256i_i64[1] = (__int64)v77;
        v124.m256i_i64[2] = 15;
        sub_140E72AA0(&v136, &v152, &v124, &v146);
        if ( v136.m256i_i8[0] != -1 )
LABEL_74:
          sub_14002F9D0(&v136);
      }
      break;
    default:
      break;
  }
  sub_14124EF10(&v136);
  v143 = 60;
  v144 = 0;
  sub_1418F44E0((__m128i *)&v124, (const __m128i *)&v136, 0x3A0u);
  sub_14124DFD0(v145, &v124);
  if ( *(_DWORD *)&v145[16] == -2 )
  {
    v176 = *(_QWORD *)v145;
    v124.m256i_i64[0] = (__int64)&v176;
    v124.m256i_i64[1] = (__int64)sub_14122E940;
    sub_1416ABFD0(&v136, &unk_1419E529D, &v124);
    sub_140192750(v176);
    v87 = *(_OWORD *)v136.m256i_i8;
    v179 = *(_OWORD *)v136.m256i_i8;
    *(_QWORD *)&v180 = v136.m256i_i64[2];
    v88 = v184;
    v184[3] = v136.m256i_i64[2];
    *(_OWORD *)(v88 + 1) = v87;
    *v88 = 1;
    goto LABEL_159;
  }
  v181 = *(_OWORD *)v145;
  v182 = *(_QWORD *)&v145[16];
  memset(&v124, 2, 24);
  sub_1403FFCC0(&v136, &v181, &v124, &v166);
  sub_140CB5CD0(
    (unsigned int)&v124,
    (unsigned int)&v136,
    (unsigned int)aContentType_0,
    12,
    (__int64)&unk_1419E4BBC,
    16,
    0);
  sub_140CB6ED0(v145, &v124, v151);
  if ( v188 != 6
    || *(_DWORD *)v72 ^ 0x616C6C6F | *(unsigned __int16 *)(v72 + 4) ^ 0x616D
    || (v89 = a2[4], v90 = a2[5], v197 = 1, sub_140E91160(v89, v90), v91) )
  {
    sub_1418F44E0((__m128i *)&v136, (const __m128i *)v145, 0x148u);
    v92 = a2[4];
    v93 = a2[5];
    v191 = 1;
    *(_QWORD *)&v94 = sub_140E91160(v92, v93);
    v186 = v94;
    v124.m256i_i64[0] = (__int64)&v186;
    v124.m256i_i64[1] = (__int64)sub_140186EE0;
    v191 = 1;
    sub_1416ABFD0(v123, &unk_1419E4BCC, &v124);
    v191 = 0;
    sub_140CB5FF0((unsigned int)&v124, (unsigned int)&v136, (unsigned int)aAuthorization_0, 13, (__int64)v123, 0);
    sub_1418F44E0((__m128i *)v145, (const __m128i *)&v124, 0x148u);
  }
  sub_1418F44E0((__m128i *)&v136, (const __m128i *)v145, 0x148u);
  v197 = 0;
  sub_14125AE40(&v124, &v136);
  v95 = v124.m256i_i64[0];
  if ( v124.m256i_i64[0] == -1 )
  {
    v171 = v124.m256i_i64[1];
    v176 = (__int64)&v171;
    v177 = sub_14122E940;
    sub_1416ABFD0(&v136, &unk_1419E52CD, &v176);
    v197 = 0;
    sub_140192750(v171);
    v111 = *(_OWORD *)v136.m256i_i8;
    v179 = *(_OWORD *)v136.m256i_i8;
    *(_QWORD *)&v180 = v136.m256i_i64[2];
    v112 = v184;
    v184[3] = v136.m256i_i64[2];
    *(_OWORD *)(v112 + 1) = v111;
    *v112 = 1;
    goto LABEL_157;
  }
  *(_QWORD *)&v187 = v124.m256i_i64[3];
  v186 = *(_OWORD *)&v124.m256i_u64[1];
  v155 = v125;
  v156 = v126;
  v157 = v127;
  v158 = v128;
  v159 = v129;
  v96 = v130[0];
  v160 = *(_OWORD *)&v130[1];
  v161 = v131;
  v162 = v132;
  v163[0] = v133[0];
  *(_QWORD *)((char *)v163 + 14) = *(_QWORD *)((char *)v133 + 14);
  v97 = v124.m256i_i64[3];
  v164 = *(_OWORD *)&v124.m256i_u64[1];
  v165 = v124.m256i_i64[3];
  if ( (unsigned __int16)(v130[0] - 200) >= 0x64u )
  {
    LOWORD(v179) = v130[0];
    v136.m256i_i64[0] = v124.m256i_i64[0];
    *(_OWORD *)&v136.m256i_u64[1] = v164;
    v136.m256i_i64[3] = v165;
    v137 = v155;
    v138 = v156;
    *(_OWORD *)v139 = v157;
    *(_OWORD *)&v139[16] = v158;
    *(_QWORD *)&v139[32] = v159;
    *(_WORD *)v140 = v130[0];
    *(_OWORD *)&v140[2] = v160;
    *(_OWORD *)&v140[18] = v161;
    *(_OWORD *)&v140[34] = v162;
    *(_OWORD *)&v140[50] = v163[0];
    *(_QWORD *)&v140[64] = *(_QWORD *)((char *)v163 + 14);
    v197 = 0;
    sub_1412348B0(&v124, &v136);
    if ( v124.m256i_i64[0] == -1 )
    {
      *(_QWORD *)&v186 = 0;
      *((_QWORD *)&v186 + 1) = 1;
      *(_QWORD *)&v187 = 0;
      v197 = 0;
      sub_140192750(v124.m256i_i64[1]);
    }
    else
    {
      *(_QWORD *)&v187 = v124.m256i_i64[2];
      v186 = *(_OWORD *)v124.m256i_i8;
    }
    v136.m256i_i64[0] = (__int64)&v179;
    v136.m256i_i64[1] = (__int64)sub_14164CC40;
    v136.m256i_i64[2] = (__int64)&v186;
    v136.m256i_i64[3] = (__int64)sub_1400015F0;
    sub_1416ABFD0(&v134, &unk_1419E4BE3, &v136);
    v120 = v184;
    v184[3] = v135;
    *(_OWORD *)(v120 + 1) = v134;
    *v120 = 1;
    v118 = v186;
    if ( (_QWORD)v186 )
    {
      v119 = *((_QWORD *)&v186 + 1);
LABEL_156:
      sub_140001660(v119, v118, 1);
    }
    goto LABEL_157;
  }
  *(_OWORD *)&v124.m256i_u64[1] = v164;
  v124.m256i_i64[3] = v165;
  v125 = v155;
  v126 = v156;
  v127 = v157;
  v128 = v158;
  v129 = v159;
  *(_OWORD *)&v130[1] = v160;
  v131 = v161;
  v132 = v162;
  v133[0] = v163[0];
  *(_QWORD *)((char *)v133 + 14) = *(_QWORD *)((char *)v163 + 14);
  nullsub_1(v97);
  v183 = 1;
  v98 = sub_140001650(0x2000, 1);
  if ( !v98 )
    sub_141938D2B(1, 0x2000);
  *(_OWORD *)&v136.m256i_u64[2] = 0;
  LOBYTE(v137) = 0;
  v138 = v164;
  *(_QWORD *)v139 = v165;
  *(_OWORD *)&v139[8] = v155;
  *(_OWORD *)&v139[24] = v156;
  *(_OWORD *)v140 = v157;
  *(_OWORD *)&v140[16] = v158;
  *(_QWORD *)&v140[32] = v159;
  *(_OWORD *)&v140[42] = v160;
  *(_OWORD *)&v140[58] = v161;
  v141 = v162;
  v142[0] = v163[0];
  *(_QWORD *)((char *)v142 + 14) = *(_QWORD *)((char *)v163 + 14);
  v172 = 0;
  v173 = 1;
  v174 = 0;
  v136.m256i_i64[0] = v98;
  v136.m256i_i64[1] = 0x2000;
  *((_QWORD *)&v137 + 1) = v95;
  *(_WORD *)&v140[40] = v96;
  v154 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a6 + 40);
  v99 = 0;
  v175 = 0;
  while ( 1 )
  {
    sub_140C9DF30(&v176, &v136);
    if ( v176 == -2 )
      break;
    if ( v176 == -1 )
    {
      *(_QWORD *)&v179 = v177;
      *(_QWORD *)&v186 = &v179;
      *((_QWORD *)&v186 + 1) = sub_1416BB0B0;
      sub_1416ABFD0(&v124, &unk_1419E52B7, &v186);
      if ( (unsigned int)(v179 & 3) - 2 >= 2 && (v179 & 3) != 0 )
      {
        *((_QWORD *)&v186 + 1) = v179 - 1;
        LOBYTE(v186) = 3;
        sub_1416BCB00((char *)&v186 + 8);
      }
      v116 = v124.m256i_i64[2];
      v117 = v184;
      *(_OWORD *)(v184 + 1) = *(_OWORD *)v124.m256i_i8;
      v117[3] = v116;
      *v117 = 1;
      if ( v136.m256i_i64[1] )
        sub_140001660(v136.m256i_i64[0], v136.m256i_i64[1], 1);
      v196 = 1;
      sub_14029CD20((char *)&v137 + 8);
      v118 = v172;
      if ( v172 )
      {
        v119 = v183;
        goto LABEL_156;
      }
      goto LABEL_157;
    }
    v188 = v176;
    v185 = (__int64)v177;
    *(_QWORD *)&v100 = sub_140E91160(v177, v178);
    if ( *((_QWORD *)&v100 + 1) == 12 )
    {
      if ( !(*(_QWORD *)v100 ^ 0x445B203A61746164LL | *(unsigned int *)(v100 + 8) ^ 0x5D454E4FLL) )
        goto LABEL_132;
LABEL_114:
      v101 = _byteswap_ulong(*(_DWORD *)v100);
      v102 = 1684108385;
      if ( v101 != 1684108385
        || (v101 = (unsigned __int16)__ROL2__(*(_WORD *)(v100 + 4), 8),
            v102 = 14880,
            v103 = 0,
            (unsigned __int16)v101 != 14880) )
      {
        v103 = 2 * (v102 >= v101) - 1;
      }
      if ( !v103 )
      {
        *((_QWORD *)&v100 + 1) -= 6LL;
        *(_QWORD *)&v100 = v100 + 6;
      }
      goto LABEL_119;
    }
    if ( !*((_QWORD *)&v100 + 1) )
      goto LABEL_132;
    if ( *((_QWORD *)&v100 + 1) >= 6u )
      goto LABEL_114;
LABEL_119:
    *(_OWORD *)v124.m256i_i8 = v100;
    *(_OWORD *)&v124.m256i_u64[2] = 0;
    v125 = v100;
    sub_14062D280(&v186, &v124);
    if ( (_BYTE)v186 == 0xFF )
    {
      sub_14002F910((char *)&v186 + 8);
    }
    else
    {
      v180 = v187;
      v179 = v186;
      v104 = sub_1416419F0(aChoices, 7, &v179);
      if ( v104 )
      {
        if ( *(_BYTE *)v104 == 4 )
        {
          if ( *(_QWORD *)(v104 + 24) )
          {
            v105 = sub_1416419F0(aDelta_2, 5, *(_QWORD *)(v104 + 16));
            if ( v105 )
            {
              v106 = sub_1416419F0(
                       "content你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturem"
                       "ax_tokensstreamdoubaoreasoning_effortnone",
                       7,
                       v105);
              if ( v106 )
              {
                if ( *(_BYTE *)v106 == 3 )
                {
                  v107 = *(_QWORD *)(v106 + 24);
                  if ( v107 )
                  {
                    v108 = *(const __m128i **)(v106 + 16);
                    if ( v107 > v172 - v99 )
                    {
                      sub_14190D590((unsigned int)&v172, v99, v107, 1, 1);
                      v183 = v173;
                      v99 = v174;
                    }
                    sub_1418F44E0((__m128i *)(v183 + v99), v108, v107);
                    v99 += v107;
                    v174 = v99;
                    v109 = sub_140371F30(aThink, 7, v108, v107);
                    if ( (((unsigned __int8)v175 | v109) & 1) != 0 )
                    {
                      v110 = sub_140371F30(aThink_0, 8, v108, v107);
                      LOBYTE(v110) = v110 ^ 1;
                      v175 = v110;
                    }
                    else
                    {
                      v154(a5, v108, v107);
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_14002F9D0(&v179);
    }
LABEL_132:
    if ( v188 )
      sub_140001660(v185, v188, 1);
  }
  if ( v136.m256i_i64[1] )
    sub_140001660(v136.m256i_i64[0], v136.m256i_i64[1], 1);
  v196 = 1;
  sub_14029CD20((char *)&v137 + 8);
  v196 = 0;
  sub_14034DD60(&v136, &v172);
  v188 = v136.m256i_i64[1];
  sub_140E91160(v136.m256i_i64[1], v136.m256i_i64[2]);
  if ( v114 )
  {
    v115 = v184;
    v184[3] = v136.m256i_i64[2];
    *(_OWORD *)(v115 + 1) = *(_OWORD *)v136.m256i_i8;
    *v115 = 0;
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v181) )
      sub_141243170(&v181);
    goto LABEL_159;
  }
  nullsub_1(v113);
  v121 = (void *)sub_140001650(34, 1);
  if ( !v121 )
    sub_141938D2B(1, 34);
  qmemcpy(v121, "LLM stream returned empty response", 34);
  v122 = v184;
  v184[1] = 34;
  v122[2] = v121;
  v122[3] = 34;
  *v122 = 1;
  v118 = v136.m256i_i64[0];
  if ( v136.m256i_i64[0] )
  {
    v119 = v188;
    goto LABEL_156;
  }
LABEL_157:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v181) )
    sub_141243170(&v181);
LABEL_159:
  sub_14002F9D0(v151);
  if ( (_QWORD)v166 )
    sub_140001660(*((_QWORD *)&v166 + 1), v166, 1);
LABEL_161:
  if ( v168 )
    sub_140001660(v169, v168, 1);
  return v184;
}
