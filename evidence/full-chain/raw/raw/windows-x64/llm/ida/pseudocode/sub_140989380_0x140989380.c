// module: codexmate_lib/core/voice/llm
// addr: 0x140989380
// name: sub_140989380
// win 1.2.1 | module src/core/voice/llm.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_140989380(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v28; // rdi
  __int64 v29; // rsi
  void *v30; // rax
  _QWORD *v31; // rcx
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // r12
  __int128 v36; // kr10_16
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 (__fastcall *v39)(); // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rsi
  _DWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rcx
  _DWORD *v52; // rax
  __int64 v53; // rcx
  _DWORD *v54; // rax
  __int64 v55; // rcx
  _DWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
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
  __int64 v99; // r14
  __int64 v100; // rax
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rcx
  __int64 v103; // rdx
  unsigned __int32 v104; // ecx
  unsigned int v105; // r8d
  int v106; // r9d
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int64 v110; // rbx
  __int64 v111; // r13
  char v112; // al
  __int64 v113; // rax
  __int128 v114; // xmm0
  _QWORD *v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rdx
  _QWORD *v118; // rcx
  __int64 v119; // rax
  _QWORD *v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  _QWORD *v123; // rcx
  void *v124; // rax
  _QWORD *v125; // rcx
  _BYTE v126[24]; // [rsp+58h] [rbp-28h] BYREF
  __m256i v127; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int128 v128; // [rsp+90h] [rbp+10h]
  __int128 v129; // [rsp+A0h] [rbp+20h]
  __int128 v130; // [rsp+B0h] [rbp+30h]
  __int128 v131; // [rsp+C0h] [rbp+40h]
  __int64 v132; // [rsp+D0h] [rbp+50h]
  _WORD v133[9]; // [rsp+D8h] [rbp+58h]
  __int128 v134; // [rsp+EAh] [rbp+6Ah]
  __int128 v135; // [rsp+FAh] [rbp+7Ah]
  _OWORD v136[48]; // [rsp+10Ah] [rbp+8Ah]
  __int128 v137; // [rsp+418h] [rbp+398h] BYREF
  __int64 v138; // [rsp+428h] [rbp+3A8h]
  __m256i v139; // [rsp+430h] [rbp+3B0h] BYREF
  unsigned __int128 v140; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v141; // [rsp+460h] [rbp+3E0h]
  _BYTE v142[40]; // [rsp+470h] [rbp+3F0h]
  _BYTE v143[74]; // [rsp+498h] [rbp+418h]
  __int128 v144; // [rsp+4E2h] [rbp+462h]
  _OWORD v145[44]; // [rsp+4F2h] [rbp+472h]
  __int64 v146; // [rsp+7C0h] [rbp+740h]
  int v147; // [rsp+7C8h] [rbp+748h]
  _BYTE v148[320]; // [rsp+7D0h] [rbp+750h] BYREF
  __int16 v149; // [rsp+918h] [rbp+898h] BYREF
  __int64 v150; // [rsp+91Ah] [rbp+89Ah]
  __int32 v151; // [rsp+922h] [rbp+8A2h]
  __int16 v152; // [rsp+926h] [rbp+8A6h]
  __int128 v153; // [rsp+928h] [rbp+8A8h]
  char v154[8]; // [rsp+938h] [rbp+8B8h] BYREF
  __int128 v155; // [rsp+940h] [rbp+8C0h] BYREF
  __int64 v156; // [rsp+950h] [rbp+8D0h]
  void (__fastcall *v157)(_QWORD, _QWORD, _QWORD); // [rsp+958h] [rbp+8D8h]
  unsigned __int128 v158; // [rsp+960h] [rbp+8E0h]
  __int128 v159; // [rsp+970h] [rbp+8F0h]
  __int128 v160; // [rsp+980h] [rbp+900h]
  __int128 v161; // [rsp+990h] [rbp+910h]
  __int64 v162; // [rsp+9A0h] [rbp+920h]
  __int128 v163; // [rsp+9B0h] [rbp+930h]
  __int128 v164; // [rsp+9C0h] [rbp+940h]
  __int128 v165; // [rsp+9D0h] [rbp+950h]
  _OWORD v166[2]; // [rsp+9E0h] [rbp+960h]
  __int128 v167; // [rsp+A00h] [rbp+980h]
  __int64 v168; // [rsp+A10h] [rbp+990h]
  __int128 v169; // [rsp+A20h] [rbp+9A0h] BYREF
  __int64 v170; // [rsp+A30h] [rbp+9B0h]
  __int64 v171; // [rsp+A38h] [rbp+9B8h] BYREF
  __int64 v172; // [rsp+A40h] [rbp+9C0h]
  __int64 v173; // [rsp+A48h] [rbp+9C8h]
  __int64 v174; // [rsp+A50h] [rbp+9D0h] BYREF
  __int64 v175; // [rsp+A58h] [rbp+9D8h] BYREF
  __int64 v176; // [rsp+A60h] [rbp+9E0h]
  __int64 v177; // [rsp+A68h] [rbp+9E8h]
  __int64 v178; // [rsp+A70h] [rbp+9F0h]
  __int64 v179; // [rsp+A78h] [rbp+9F8h] BYREF
  __int64 (__fastcall *v180)(); // [rsp+A80h] [rbp+A00h]
  __int64 v181; // [rsp+A88h] [rbp+A08h]
  __int128 v182; // [rsp+A90h] [rbp+A10h] BYREF
  __int128 v183; // [rsp+AA0h] [rbp+A20h]
  __int128 v184; // [rsp+AB0h] [rbp+A30h] BYREF
  __int64 v185; // [rsp+AC0h] [rbp+A40h]
  __int64 v186; // [rsp+AC8h] [rbp+A48h]
  _QWORD *v187; // [rsp+AD0h] [rbp+A50h]
  __int64 v188; // [rsp+AD8h] [rbp+A58h]
  __int128 v189; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 v190; // [rsp+AF0h] [rbp+A70h]
  __int64 v191; // [rsp+B00h] [rbp+A80h]
  char v192; // [rsp+B0Fh] [rbp+A8Fh]
  char v193; // [rsp+B10h] [rbp+A90h]
  char v194; // [rsp+B11h] [rbp+A91h]
  char v195; // [rsp+B12h] [rbp+A92h]
  char v196; // [rsp+B13h] [rbp+A93h]
  char v197; // [rsp+B14h] [rbp+A94h]
  char v198; // [rsp+B15h] [rbp+A95h]
  char v199; // [rsp+B16h] [rbp+A96h]
  char v200; // [rsp+B17h] [rbp+A97h]
  __int64 v201; // [rsp+B18h] [rbp+A98h]

  v201 = -2;
  v187 = a1;
  if ( !(unsigned __int8)sub_14099C6D0(a2) )
  {
    nullsub_1(v9);
    v30 = (void *)sub_140001650(24, 1);
    if ( !v30 )
      sub_1416C2D4B(1, 24);
    qmemcpy(v30, "LLM config is incomplete", 24);
    v31 = v187;
    v187[1] = 24;
    v31[2] = v30;
    v31[3] = 24;
    *v31 = 1;
    return v31;
  }
  sub_140A5BF50(&v171, a2[1], a2[2]);
  v191 = v173;
  if ( v173 == 6 && !(*(_DWORD *)v172 ^ 0x75616C63 | *(unsigned __int16 *)(v172 + 4) ^ 0x6564) )
  {
    sub_140A56B40(&v139, a2, a3, a4);
    v36 = *(_OWORD *)&v139.m256i_u64[2];
    if ( v139.m256i_i32[0] == 1 )
    {
      v37 = v187;
      v187[1] = v139.m256i_i64[1];
      *((_OWORD *)v37 + 1) = v36;
      *v37 = 1;
    }
    else
    {
      v188 = v139.m256i_i64[2];
      v191 = v139.m256i_i64[1];
      (*(void (__fastcall **)(__int64, __int64, __int64))(a6 + 40))(a5, v139.m256i_i64[2], v139.m256i_i64[3]);
      v61 = v187;
      v187[1] = v191;
      v61[2] = v188;
      v61[3] = *((_QWORD *)&v36 + 1);
      *v61 = 0;
    }
    goto LABEL_160;
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
  *(_QWORD *)v148 = a2[10];
  *(_QWORD *)&v148[8] = v12;
  v127.m256i_i64[0] = (__int64)v148;
  v127.m256i_i64[1] = (__int64)sub_14041F680;
  sub_14149C0F0(&v139, &unk_1417A3DB8, &v127);
  v169 = *(_OWORD *)v139.m256i_i8;
  v170 = v139.m256i_i64[2];
  *(_QWORD *)&v184 = 0;
  v185 = 0;
  nullsub_1(v21);
  v22 = sub_140001650(5, 1);
  if ( !v22 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v22 + 4) = 108;
  *(_DWORD *)v22 = 1701080941;
  *(_QWORD *)v148 = 5;
  *(_QWORD *)&v148[8] = v22;
  *(_QWORD *)&v148[16] = 5;
  v23 = a2[7];
  v24 = a2[8];
  v196 = 1;
  v25 = sub_14033BC10(v23, v24);
  v28 = v26;
  if ( v26 < 0 )
  {
    v29 = 0;
    goto LABEL_18;
  }
  if ( v26 )
  {
    v33 = v25;
    nullsub_1(v27);
    v29 = 1;
    v34 = sub_140001650(v28, 1);
    if ( !v34 )
    {
LABEL_18:
      v196 = 1;
      sub_1416C2D4B(v29, v28);
    }
    v35 = v34;
    sub_141684120(v34, v33, v28);
  }
  else
  {
    v35 = 1;
  }
  v139.m256i_i8[0] = 3;
  v139.m256i_i64[1] = v28;
  v139.m256i_i64[2] = v35;
  v139.m256i_i64[3] = v28;
  v196 = 0;
  sub_140307860(&v127, &v184, v148, &v139);
  if ( v127.m256i_i8[0] != -1 )
    sub_1400104F0(&v127);
  nullsub_1(v38);
  v39 = (__int64 (__fastcall *)())sub_140001650(8, 1);
  if ( !v39 )
    sub_1416C2D4B(1, 8);
  *(_QWORD *)v39 = 0x736567617373656DLL;
  v179 = 8;
  v180 = v39;
  v181 = 8;
  nullsub_1(0x736567617373656DLL);
  v40 = sub_140001650(64, 8);
  if ( !v40 )
  {
    v195 = 1;
    sub_1416C2D31(8, 64);
  }
  v42 = v40;
  *(_QWORD *)&v189 = 0;
  *(_QWORD *)&v190 = 0;
  nullsub_1(v41);
  v43 = (_DWORD *)sub_140001650(4, 1);
  v188 = v42;
  if ( !v43 )
    sub_1416C2D4B(1, 4);
  *v43 = 1701605234;
  *(_QWORD *)v148 = 4;
  *(_QWORD *)&v148[8] = v43;
  *(_QWORD *)&v148[16] = 4;
  nullsub_1(v44);
  v45 = sub_140001650(6, 1);
  v186 = v45;
  if ( !v45 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v45 + 4) = 28005;
  *(_DWORD *)v45 = 1953724787;
  v139.m256i_i8[0] = 3;
  v139.m256i_i64[1] = 6;
  v139.m256i_i64[2] = v45;
  v139.m256i_i64[3] = 6;
  sub_140307860(&v127, &v189, v148, &v139);
  if ( v127.m256i_i8[0] != -1 )
    sub_1400104F0(&v127);
  nullsub_1(v46);
  v47 = (_DWORD *)sub_140001650(7, 1);
  if ( !v47 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v47 + 3) = 1953391988;
  *v47 = 1953394531;
  *(_QWORD *)v148 = 7;
  *(_QWORD *)&v148[8] = v47;
  *(_QWORD *)&v148[16] = 7;
  nullsub_1(v48);
  v49 = sub_140001650(222, 1);
  v186 = v49;
  if ( !v49 )
    sub_1416C2D4B(1, 222);
  v50 = v49;
  sub_141684120(v49, asc_1417A3E19, 222);
  v139.m256i_i8[0] = 3;
  v139.m256i_i64[1] = 222;
  v139.m256i_i64[2] = v50;
  v139.m256i_i64[3] = 222;
  sub_140307860(&v127, &v189, v148, &v139);
  if ( v127.m256i_i8[0] != -1 )
    sub_1400104F0(&v127);
  *(_OWORD *)&v148[8] = v189;
  *(_QWORD *)&v148[24] = v190;
  v148[0] = 5;
  *(_QWORD *)&v182 = 0;
  *(_QWORD *)&v183 = 0;
  nullsub_1(v51);
  v52 = (_DWORD *)sub_140001650(4, 1);
  if ( !v52 )
    sub_1416C2D4B(1, 4);
  *v52 = 1701605234;
  *(_QWORD *)&v189 = 4;
  *((_QWORD *)&v189 + 1) = v52;
  *(_QWORD *)&v190 = 4;
  nullsub_1(v53);
  v54 = (_DWORD *)sub_140001650(4, 1);
  v186 = (__int64)v54;
  if ( !v54 )
    sub_1416C2D4B(1, 4);
  *v54 = 1919251317;
  v139.m256i_i8[0] = 3;
  v139.m256i_i64[1] = 4;
  v139.m256i_i64[2] = (__int64)v54;
  v139.m256i_i64[3] = 4;
  sub_140307860(&v127, &v182, &v189, &v139);
  if ( v127.m256i_i8[0] != -1 )
    sub_1400104F0(&v127);
  nullsub_1(v55);
  v56 = (_DWORD *)sub_140001650(7, 1);
  if ( !v56 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v56 + 3) = 1953391988;
  *v56 = 1953394531;
  *(_QWORD *)&v189 = 7;
  *((_QWORD *)&v189 + 1) = v56;
  *(_QWORD *)&v190 = 7;
  if ( a4 < 0 )
  {
    v58 = 0;
    goto LABEL_46;
  }
  if ( a4 )
  {
    nullsub_1(v57);
    v58 = 1;
    v59 = sub_140001650(a4, 1);
    if ( !v59 )
    {
LABEL_46:
      v193 = 1;
      sub_1416C2D4B(v58, a4);
    }
    v60 = v59;
    sub_141684120(v59, a3, a4);
  }
  else
  {
    v60 = 1;
  }
  v139.m256i_i8[0] = 3;
  v139.m256i_i64[1] = a4;
  v139.m256i_i64[2] = v60;
  v139.m256i_i64[3] = a4;
  v193 = 0;
  sub_140307860(&v127, &v182, &v189, &v139);
  if ( v127.m256i_i8[0] != -1 )
    sub_1400104F0(&v127);
  *(_OWORD *)((char *)&v139.m256i_u32[1] + 3) = v182;
  *(__int64 *)((char *)&v139.m256i_i64[2] + 7) = v183;
  v62 = *(_OWORD *)v148;
  v63 = v188;
  *(_OWORD *)(v188 + 16) = *(_OWORD *)&v148[16];
  *(_OWORD *)v63 = v62;
  *(_BYTE *)(v63 + 32) = 5;
  v64 = *(_OWORD *)v139.m256i_i8;
  *(_OWORD *)(v63 + 48) = *(_OWORD *)((char *)&v139.m256i_u64[1] + 7);
  *(_OWORD *)(v63 + 33) = v64;
  v139.m256i_i64[1] = 2;
  v139.m256i_i64[2] = v63;
  v139.m256i_i64[3] = 2;
  v139.m256i_i8[0] = 4;
  v195 = 0;
  sub_140307860(&v127, &v184, &v179, &v139);
  if ( v127.m256i_i8[0] != -1 )
    sub_1400104F0(&v127);
  nullsub_1(v65);
  v66 = (void *)sub_140001650(11, 1);
  if ( !v66 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v66, "temperature", 11);
  *(_QWORD *)v148 = 11;
  *(_QWORD *)&v148[8] = v66;
  *(_QWORD *)&v148[16] = 11;
  v198 = 1;
  sub_14142F790(&v139);
  if ( v139.m256i_i8[0] == -1 )
  {
    v127.m256i_i64[0] = v139.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v127,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A3DE8);
  }
  v127 = v139;
  v198 = 0;
  sub_140307860(&v139, &v184, v148, &v127);
  if ( v139.m256i_i8[0] != -1 )
    sub_1400104F0(&v139);
  nullsub_1(v67);
  v68 = (void *)sub_140001650(10, 1);
  if ( !v68 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v68, "max_tokens", 10);
  *(_QWORD *)v148 = 10;
  *(_QWORD *)&v148[8] = v68;
  *(_QWORD *)&v148[16] = 10;
  v139.m256i_i8[0] = 2;
  v139.m256i_i64[1] = 0;
  v139.m256i_i64[2] = 2048;
  sub_140307860(&v127, &v184, v148, &v139);
  if ( v127.m256i_i8[0] != -1 )
    sub_1400104F0(&v127);
  nullsub_1(v69);
  v70 = sub_140001650(6, 1);
  if ( !v70 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v70 + 4) = 28001;
  *(_DWORD *)v70 = 1701999731;
  *(_QWORD *)v148 = 6;
  *(_QWORD *)&v148[8] = v70;
  *(_QWORD *)&v148[16] = 6;
  v149 = 257;
  *(_OWORD *)&v139.m256i_u64[2] = v153;
  v139.m256i_i16[0] = 257;
  *(__int64 *)((char *)v139.m256i_i64 + 2) = v150;
  *(__int32 *)((char *)&v139.m256i_i32[2] + 2) = v151;
  v139.m256i_i16[7] = v152;
  sub_140307860(&v127, &v184, v148, &v139);
  if ( v127.m256i_i8[0] != -1 )
    sub_1400104F0(&v127);
  v155 = v184;
  v156 = v185;
  v154[0] = 5;
  v72 = v172;
  switch ( v191 )
  {
    case 4LL:
      if ( *(_DWORD *)v172 == 1768778091 )
        goto LABEL_90;
      break;
    case 5LL:
      v75 = *(_DWORD *)v172 ^ 0x7069687A;
      if ( !(v75 | *(unsigned __int8 *)(v172 + 4) ^ 0x75) )
      {
        nullsub_1(v75 | *(unsigned __int8 *)(v172 + 4) ^ 0x75u);
        v76 = (_OWORD *)sub_140001650(16, 1);
        if ( !v76 )
          sub_1416C2D4B(1, 16);
        *v76 = *(_OWORD *)"reasoning_effortnone";
        *(_QWORD *)v148 = 16;
        *(_QWORD *)&v148[8] = v76;
        *(_QWORD *)&v148[16] = 16;
        v197 = 1;
        sub_140B56640(&v139, &off_1417A3F30);
        if ( v139.m256i_i8[0] == -1 )
        {
          v127.m256i_i64[0] = v139.m256i_i64[1];
          sub_1416C3060(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v127,
            (unsigned int)&off_1417A5560,
            (__int64)&off_1417A3F40);
        }
        v127 = v139;
        v197 = 0;
        sub_140307860(&v139, &v155, v148, &v127);
        if ( v139.m256i_i8[0] != -1 )
          goto LABEL_74;
      }
      break;
    case 6LL:
      v78 = *(_DWORD *)v172 ^ 0x62756F64;
      v71 = v78 | *(unsigned __int16 *)(v172 + 4) ^ 0x6F61u;
      if ( !(v78 | *(unsigned __int16 *)(v172 + 4) ^ 0x6F61) )
        goto LABEL_90;
      v79 = *(_DWORD *)v172 ^ 0x616C6C6F;
      if ( !(v79 | *(unsigned __int16 *)(v172 + 4) ^ 0x616D) )
      {
        nullsub_1(v79 | *(unsigned __int16 *)(v172 + 4) ^ 0x616Du);
        v80 = sub_140001650(5, 1);
        if ( !v80 )
          sub_1416C2D4B(1, 5);
        *(_BYTE *)(v80 + 4) = 107;
        *(_DWORD *)v80 = 1852401780;
        *(_QWORD *)v148 = 5;
        *(_QWORD *)&v148[8] = v80;
        *(_QWORD *)&v148[16] = 5;
        v139.m256i_i16[0] = 1;
        sub_140307860(&v127, &v155, v148, &v139);
        if ( v127.m256i_i8[0] != -1 )
          goto LABEL_96;
      }
      break;
    case 7LL:
      v81 = *(_DWORD *)v172 ^ 0x6C696162;
      if ( !(v81 | *(_DWORD *)(v172 + 3) ^ 0x6E61696C) )
      {
        nullsub_1(v81 | *(_DWORD *)(v172 + 3) ^ 0x6E61696Cu);
        v82 = (void *)sub_140001650(15, 1);
        if ( !v82 )
          sub_1416C2D4B(1, 15);
        qmemcpy(v82, "enable_thinking", 15);
        *(_QWORD *)v148 = 15;
        *(_QWORD *)&v148[8] = v82;
        *(_QWORD *)&v148[16] = 15;
        v139.m256i_i16[0] = 1;
        sub_140307860(&v127, &v155, v148, &v139);
        if ( v127.m256i_i8[0] != -1 )
          goto LABEL_96;
      }
      break;
    case 8LL:
      if ( *(_QWORD *)v172 == 0x6B65657370656564LL )
      {
LABEL_90:
        nullsub_1(v71);
        v83 = (_QWORD *)sub_140001650(8, 1);
        if ( !v83 )
          sub_1416C2D4B(1, 8);
        *v83 = 0x676E696B6E696874LL;
        *(_QWORD *)&v182 = 8;
        *((_QWORD *)&v182 + 1) = v83;
        *(_QWORD *)&v183 = 8;
        *(_QWORD *)&v189 = 0;
        *(_QWORD *)&v190 = 0;
        nullsub_1(0x676E696B6E696874LL);
        v84 = (_DWORD *)sub_140001650(4, 1);
        if ( !v84 )
          sub_1416C2D4B(1, 4);
        *v84 = 1701869940;
        *(_QWORD *)v148 = 4;
        *(_QWORD *)&v148[8] = v84;
        *(_QWORD *)&v148[16] = 4;
        nullsub_1(v85);
        v86 = (_QWORD *)sub_140001650(8, 1);
        v188 = (__int64)v86;
        if ( !v86 )
          sub_1416C2D4B(1, 8);
        *v86 = 0x64656C6261736964LL;
        v139.m256i_i8[0] = 3;
        v139.m256i_i64[1] = 8;
        v139.m256i_i64[2] = (__int64)v86;
        v139.m256i_i64[3] = 8;
        sub_140307860(&v127, &v189, v148, &v139);
        if ( v127.m256i_i8[0] != -1 )
          sub_1400104F0(&v127);
        *(_OWORD *)&v139.m256i_u64[1] = v189;
        v139.m256i_i64[3] = v190;
        v139.m256i_i8[0] = 5;
        v192 = 0;
        sub_140307860(&v127, &v155, &v182, &v139);
        if ( v127.m256i_i8[0] != -1 )
LABEL_96:
          sub_1400104F0(&v127);
      }
      break;
    case 9LL:
      v73 = *(_QWORD *)v172 ^ 0x6378616D696E696DLL;
      v74 = *(unsigned __int8 *)(v172 + 8) ^ 0x6ELL;
      goto LABEL_76;
    case 11LL:
      v73 = *(_QWORD *)v172 ^ 0x6978616D696E696DLL;
      v74 = *(_QWORD *)(v172 + 3) ^ 0x6C746E6978616D69LL;
LABEL_76:
      if ( !(v73 | v74) )
      {
        nullsub_1(0);
        v77 = (void *)sub_140001650(15, 1);
        if ( !v77 )
          sub_1416C2D4B(1, 15);
        qmemcpy(v77, "reasoning_split", 15);
        v127.m256i_i64[0] = 15;
        v127.m256i_i64[1] = (__int64)v77;
        v127.m256i_i64[2] = 15;
        sub_140307860(&v139, &v155, &v127, &v149);
        if ( v139.m256i_i8[0] != -1 )
LABEL_74:
          sub_1400104F0(&v139);
      }
      break;
    default:
      break;
  }
  sub_141069E60(&v139);
  v146 = 60;
  v147 = 0;
  sub_141684120(&v127, &v139, 928);
  sub_141068AB0(v148, &v127);
  if ( *(_DWORD *)&v148[16] == -2 )
  {
    v179 = *(_QWORD *)v148;
    v127.m256i_i64[0] = (__int64)&v179;
    v127.m256i_i64[1] = (__int64)sub_141031F10;
    sub_14149C0F0(&v139, &unk_1417A48B8, &v127);
    sub_140528900(v179);
    v87 = *(_OWORD *)v139.m256i_i8;
    v182 = *(_OWORD *)v139.m256i_i8;
    *(_QWORD *)&v183 = v139.m256i_i64[2];
    v88 = v187;
    v187[3] = v139.m256i_i64[2];
    *(_OWORD *)(v88 + 1) = v87;
    *v88 = 1;
    goto LABEL_158;
  }
  v184 = *(_OWORD *)v148;
  v185 = *(_QWORD *)&v148[16];
  sub_14097EE10((__int64)&v139, (__int64)&v184, byte_1417A3F68, (__int64)&v169);
  sub_1406C7070(
    (unsigned int)&v127,
    (unsigned int)&v139,
    (unsigned int)aContentType,
    12,
    (__int64)&unk_1417A3F8C,
    16,
    0);
  sub_1406C8270(v148, &v127, v154);
  if ( v191 != 6
    || *(_DWORD *)v72 ^ 0x616C6C6F | *(unsigned __int16 *)(v72 + 4) ^ 0x616D
    || (v89 = a2[4], v90 = a2[5], v200 = 1, sub_14033BC10(v89, v90), v91) )
  {
    sub_141684120(&v139, v148, 328);
    v92 = a2[4];
    v93 = a2[5];
    v194 = 1;
    *(_QWORD *)&v94 = sub_14033BC10(v92, v93);
    v189 = v94;
    v127.m256i_i64[0] = (__int64)&v189;
    v127.m256i_i64[1] = (__int64)sub_14041F680;
    v194 = 1;
    sub_14149C0F0(v126, &unk_1417A3F9C, &v127);
    v194 = 0;
    sub_1406C7390((unsigned int)&v127, (unsigned int)&v139, (unsigned int)aAuthorization_2, 13, (__int64)v126, 0);
    sub_141684120(v148, &v127, 328);
  }
  sub_141684120(&v139, v148, 328);
  v200 = 0;
  sub_14103CF70(&v127, &v139);
  v95 = v127.m256i_i64[0];
  if ( v127.m256i_i64[0] == -1 )
  {
    v174 = v127.m256i_i64[1];
    v179 = (__int64)&v174;
    v180 = sub_141031F10;
    sub_14149C0F0(&v139, &unk_1417A48E8, &v179);
    v200 = 0;
    sub_140528900(v174);
    v114 = *(_OWORD *)v139.m256i_i8;
    v182 = *(_OWORD *)v139.m256i_i8;
    *(_QWORD *)&v183 = v139.m256i_i64[2];
    v115 = v187;
    v187[3] = v139.m256i_i64[2];
    *(_OWORD *)(v115 + 1) = v114;
    *v115 = 1;
    goto LABEL_156;
  }
  *(_QWORD *)&v190 = v127.m256i_i64[3];
  v189 = *(_OWORD *)&v127.m256i_u64[1];
  v158 = v128;
  v159 = v129;
  v160 = v130;
  v161 = v131;
  v162 = v132;
  v96 = v133[0];
  v163 = *(_OWORD *)&v133[1];
  v164 = v134;
  v165 = v135;
  v166[0] = v136[0];
  *(_QWORD *)((char *)v166 + 14) = *(_QWORD *)((char *)v136 + 14);
  v97 = v127.m256i_i64[3];
  v167 = *(_OWORD *)&v127.m256i_u64[1];
  v168 = v127.m256i_i64[3];
  if ( (unsigned __int16)(v133[0] - 200) >= 0x64u )
  {
    LOWORD(v182) = v133[0];
    v139.m256i_i64[0] = v127.m256i_i64[0];
    *(_OWORD *)&v139.m256i_u64[1] = v167;
    v139.m256i_i64[3] = v168;
    v140 = v158;
    v141 = v159;
    *(_OWORD *)v142 = v160;
    *(_OWORD *)&v142[16] = v161;
    *(_QWORD *)&v142[32] = v162;
    *(_WORD *)v143 = v133[0];
    *(_OWORD *)&v143[2] = v163;
    *(_OWORD *)&v143[18] = v164;
    *(_OWORD *)&v143[34] = v165;
    *(_OWORD *)&v143[50] = v166[0];
    *(_QWORD *)&v143[64] = *(_QWORD *)((char *)v166 + 14);
    v200 = 0;
    sub_14101E160(&v127, &v139);
    if ( v127.m256i_i64[0] == -1 )
    {
      *(_QWORD *)&v189 = 0;
      *((_QWORD *)&v189 + 1) = 1;
      *(_QWORD *)&v190 = 0;
      v200 = 0;
      sub_140528900(v127.m256i_i64[1]);
    }
    else
    {
      *(_QWORD *)&v190 = v127.m256i_i64[2];
      v189 = *(_OWORD *)v127.m256i_i8;
    }
    v139.m256i_i64[0] = (__int64)&v182;
    v139.m256i_i64[1] = (__int64)sub_14143ED80;
    v139.m256i_i64[2] = (__int64)&v189;
    v139.m256i_i64[3] = (__int64)sub_1400015F0;
    sub_14149C0F0(&v137, &unk_1417A3FB3, &v139);
    v123 = v187;
    v187[3] = v138;
    *(_OWORD *)(v123 + 1) = v137;
    *v123 = 1;
    v121 = v189;
    if ( (_QWORD)v189 )
    {
      v122 = *((_QWORD *)&v189 + 1);
LABEL_155:
      sub_140001660(v122, v121, 1);
    }
    goto LABEL_156;
  }
  *(_OWORD *)&v127.m256i_u64[1] = v167;
  v127.m256i_i64[3] = v168;
  v128 = v158;
  v129 = v159;
  v130 = v160;
  v131 = v161;
  v132 = v162;
  *(_OWORD *)&v133[1] = v163;
  v134 = v164;
  v135 = v165;
  v136[0] = v166[0];
  *(_QWORD *)((char *)v136 + 14) = *(_QWORD *)((char *)v166 + 14);
  nullsub_1(v97);
  v186 = 1;
  v98 = sub_140001650(0x2000, 1);
  if ( !v98 )
    sub_1416C2D4B(1, 0x2000);
  *(_OWORD *)&v139.m256i_u64[2] = 0;
  LOBYTE(v140) = 0;
  v141 = v167;
  *(_QWORD *)v142 = v168;
  *(_OWORD *)&v142[8] = v158;
  *(_OWORD *)&v142[24] = v159;
  *(_OWORD *)v143 = v160;
  *(_OWORD *)&v143[16] = v161;
  *(_QWORD *)&v143[32] = v162;
  *(_OWORD *)&v143[42] = v163;
  *(_OWORD *)&v143[58] = v164;
  v144 = v165;
  v145[0] = v166[0];
  *(_QWORD *)((char *)v145 + 14) = *(_QWORD *)((char *)v166 + 14);
  v175 = 0;
  v176 = 1;
  v177 = 0;
  v139.m256i_i64[0] = v98;
  v139.m256i_i64[1] = 0x2000;
  *((_QWORD *)&v140 + 1) = v95;
  *(_WORD *)&v143[40] = v96;
  v157 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a6 + 40);
  v99 = 0;
  v178 = 0;
  while ( 1 )
  {
    sub_140423C40(&v179, &v139);
    if ( v179 == -2 )
      break;
    if ( v179 == -1 )
    {
      *(_QWORD *)&v182 = v180;
      *(_QWORD *)&v189 = &v182;
      *((_QWORD *)&v189 + 1) = sub_141490720;
      sub_14149C0F0(&v127, &unk_1417A48D2, &v189);
      sub_140018650(&v182);
      v119 = v127.m256i_i64[2];
      v120 = v187;
      *(_OWORD *)(v187 + 1) = *(_OWORD *)v127.m256i_i8;
      v120[3] = v119;
      *v120 = 1;
      if ( v139.m256i_i64[1] )
        sub_140001660(v139.m256i_i64[0], v139.m256i_i64[1], 1);
      v199 = 1;
      sub_140984A70((char *)&v140 + 8);
      v121 = v175;
      if ( v175 )
      {
        v122 = v186;
        goto LABEL_155;
      }
      goto LABEL_156;
    }
    v191 = v179;
    v188 = (__int64)v180;
    v100 = sub_14033BC10(v180, v181);
    if ( v101 == 12 )
    {
      if ( !(*(_QWORD *)v100 ^ 0x445B203A61746164LL | *(unsigned int *)(v100 + 8) ^ 0x5D454E4FLL) )
        goto LABEL_134;
LABEL_114:
      v104 = _byteswap_ulong(*(_DWORD *)v100);
      v105 = 1684108385;
      if ( v104 != 1684108385
        || (v104 = (unsigned __int16)__ROL2__(*(_WORD *)(v100 + 4), 8),
            v105 = 14880,
            v106 = 0,
            (unsigned __int16)v104 != 14880) )
      {
        v106 = 2 * (v105 >= v104) - 1;
      }
      v102 = v101 - 6;
      if ( v106 )
        v102 = v101;
      v103 = 0;
      if ( !v106 )
        v103 = 6;
      goto LABEL_121;
    }
    if ( !v101 )
      goto LABEL_134;
    if ( v101 >= 6 )
      goto LABEL_114;
    v102 = v101;
    v103 = 0;
LABEL_121:
    *(_OWORD *)v127.m256i_i8 = __PAIR128__(v102, v100 + v103);
    *(_OWORD *)&v127.m256i_u64[2] = 0;
    v128 = __PAIR128__(v102, v100 + v103);
    sub_1408A6200(&v189, &v127);
    if ( (_BYTE)v189 == 0xFF )
    {
      sub_140348CF0(&v189);
    }
    else
    {
      v183 = v190;
      v182 = v189;
      v107 = sub_141433D50(aChoices_1, 7, &v182);
      if ( v107 )
      {
        if ( *(_BYTE *)v107 == 4 )
        {
          if ( *(_QWORD *)(v107 + 24) )
          {
            v108 = sub_141433D50(aDelta_2, 5, *(_QWORD *)(v107 + 16));
            if ( v108 )
            {
              v109 = sub_141433D50(aContent_6, 7, v108);
              if ( v109 )
              {
                if ( *(_BYTE *)v109 == 3 )
                {
                  v110 = *(_QWORD *)(v109 + 24);
                  if ( v110 )
                  {
                    v111 = *(_QWORD *)(v109 + 16);
                    if ( v110 > v175 - v99 )
                    {
                      sub_141688D30((unsigned int)&v175, v99, v110, 1, 1);
                      v186 = v176;
                      v99 = v177;
                    }
                    sub_141684120(v186 + v99, v111, v110);
                    v99 += v110;
                    v177 = v99;
                    v112 = sub_140A6C2D0(aThink, 7u, v111, v110);
                    if ( (((unsigned __int8)v178 | (unsigned __int8)v112) & 1) != 0 )
                    {
                      LOBYTE(v113) = sub_140A6C2D0(aThink_0, 8u, v111, v110) ^ 1;
                      v178 = v113;
                    }
                    else
                    {
                      v157(a5, v111, v110);
                    }
                  }
                }
              }
            }
          }
        }
      }
      sub_1400104F0(&v182);
    }
LABEL_134:
    if ( v191 )
      sub_140001660(v188, v191, 1);
  }
  if ( v139.m256i_i64[1] )
    sub_140001660(v139.m256i_i64[0], v139.m256i_i64[1], 1);
  v199 = 1;
  sub_140984A70((char *)&v140 + 8);
  v199 = 0;
  sub_140A594E0(&v139, &v175);
  v191 = v139.m256i_i64[1];
  sub_14033BC10(v139.m256i_i64[1], v139.m256i_i64[2]);
  if ( v117 )
  {
    v118 = v187;
    v187[3] = v139.m256i_i64[2];
    *(_OWORD *)(v118 + 1) = *(_OWORD *)v139.m256i_i8;
    *v118 = 0;
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v184) )
      sub_141018DA0(&v184);
    goto LABEL_158;
  }
  nullsub_1(v116);
  v124 = (void *)sub_140001650(34, 1);
  if ( !v124 )
    sub_1416C2D4B(1, 34);
  qmemcpy(v124, "LLM stream returned empty response", 34);
  v125 = v187;
  v187[1] = 34;
  v125[2] = v124;
  v125[3] = 34;
  *v125 = 1;
  v121 = v139.m256i_i64[0];
  if ( v139.m256i_i64[0] )
  {
    v122 = v191;
    goto LABEL_155;
  }
LABEL_156:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v184) )
    sub_141018DA0(&v184);
LABEL_158:
  sub_1400104F0(v154);
  if ( (_QWORD)v169 )
    sub_140001660(*((_QWORD *)&v169 + 1), v169, 1);
LABEL_160:
  if ( v171 )
    sub_140001660(v172, v171, 1);
  return v187;
}