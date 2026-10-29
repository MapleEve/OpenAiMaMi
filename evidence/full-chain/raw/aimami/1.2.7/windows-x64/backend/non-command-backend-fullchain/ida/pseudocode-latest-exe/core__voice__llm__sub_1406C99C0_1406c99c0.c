// win 1.2.7 latest-exe | module src/core/voice/llm.rs | ea 0x1406c99c0 | successor of pre-update 0x1402a0090 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
_QWORD *__fastcall sub_1406C99C0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r8d
  char v16; // r9
  char v17; // r10
  char v18; // r11
  __int64 v19; // rdx
  int v20; // r10d
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
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
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 (__fastcall *v40)(); // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rsi
  _DWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  _DWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  _DWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  _DWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  _DWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rdi
  _QWORD *v71; // rax
  __int128 v72; // xmm0
  __int64 v73; // rcx
  __int128 v74; // xmm0
  __int64 v75; // rdx
  __int64 v76; // rcx
  void *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  void *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r13
  __int64 v87; // rax
  __int64 v88; // rcx
  int v89; // eax
  _OWORD *v90; // rax
  void *v91; // rax
  int v92; // eax
  int v93; // eax
  __int64 v94; // rax
  int v95; // eax
  void *v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rdx
  _DWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  _QWORD *v102; // rax
  __int128 v103; // xmm0
  _QWORD *v104; // rcx
  __int64 v105; // rdx
  __int128 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rsi
  __int16 v109; // di
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // r14
  __int64 v113; // rbx
  __int64 (__fastcall *v114)(); // r15
  __int64 v115; // rax
  unsigned __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdx
  unsigned __int32 v119; // ecx
  unsigned int v120; // r8d
  int v121; // r9d
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // r15
  __int64 v126; // rbx
  unsigned __int8 v127; // al
  __int64 v128; // rax
  __int128 v129; // xmm0
  _QWORD *v130; // rcx
  __int64 v131; // rsi
  __int64 v132; // rcx
  __int64 v133; // rdx
  _QWORD *v134; // rcx
  __int64 v135; // rax
  _QWORD *v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rcx
  _QWORD *v139; // rcx
  void *v140; // rax
  _QWORD *v141; // rcx
  _BYTE v142[24]; // [rsp+58h] [rbp-28h] BYREF
  __m256i v143; // [rsp+70h] [rbp-10h] BYREF
  __int128 v144; // [rsp+90h] [rbp+10h]
  __int128 v145; // [rsp+A0h] [rbp+20h]
  __int128 v146; // [rsp+B0h] [rbp+30h]
  __int128 v147; // [rsp+C0h] [rbp+40h]
  __int64 v148; // [rsp+D0h] [rbp+50h]
  _WORD v149[9]; // [rsp+D8h] [rbp+58h]
  __int128 v150; // [rsp+EAh] [rbp+6Ah]
  __int128 v151; // [rsp+FAh] [rbp+7Ah]
  _OWORD v152[48]; // [rsp+10Ah] [rbp+8Ah]
  __int128 v153; // [rsp+418h] [rbp+398h] BYREF
  __int64 v154; // [rsp+428h] [rbp+3A8h]
  __m256i v155; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v156; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v157; // [rsp+460h] [rbp+3E0h]
  _BYTE v158[40]; // [rsp+470h] [rbp+3F0h]
  _BYTE v159[74]; // [rsp+498h] [rbp+418h]
  __int128 v160; // [rsp+4E2h] [rbp+462h]
  _OWORD v161[44]; // [rsp+4F2h] [rbp+472h]
  __int64 v162; // [rsp+7C0h] [rbp+740h]
  int v163; // [rsp+7C8h] [rbp+748h]
  _BYTE v164[320]; // [rsp+7D0h] [rbp+750h] BYREF
  __int16 v165; // [rsp+918h] [rbp+898h] BYREF
  __int64 v166; // [rsp+91Ah] [rbp+89Ah]
  __int32 v167; // [rsp+922h] [rbp+8A2h]
  __int16 v168; // [rsp+926h] [rbp+8A6h]
  __int128 v169; // [rsp+928h] [rbp+8A8h]
  char v170[8]; // [rsp+938h] [rbp+8B8h] BYREF
  __int128 v171; // [rsp+940h] [rbp+8C0h] BYREF
  __int64 v172; // [rsp+950h] [rbp+8D0h]
  void (__fastcall *v173)(_QWORD, _QWORD, _QWORD); // [rsp+958h] [rbp+8D8h]
  __int128 v174; // [rsp+960h] [rbp+8E0h]
  __int128 v175; // [rsp+970h] [rbp+8F0h]
  __int128 v176; // [rsp+980h] [rbp+900h]
  __int128 v177; // [rsp+990h] [rbp+910h]
  __int64 v178; // [rsp+9A0h] [rbp+920h]
  __int128 v179; // [rsp+9B0h] [rbp+930h]
  __int128 v180; // [rsp+9C0h] [rbp+940h]
  __int128 v181; // [rsp+9D0h] [rbp+950h]
  _OWORD v182[2]; // [rsp+9E0h] [rbp+960h]
  __int128 v183; // [rsp+A00h] [rbp+980h]
  __int64 v184; // [rsp+A10h] [rbp+990h]
  __int128 v185; // [rsp+A20h] [rbp+9A0h] BYREF
  __int64 v186; // [rsp+A30h] [rbp+9B0h]
  __int64 v187; // [rsp+A38h] [rbp+9B8h] BYREF
  __int64 v188; // [rsp+A40h] [rbp+9C0h]
  __int64 v189; // [rsp+A48h] [rbp+9C8h]
  __int64 v190; // [rsp+A50h] [rbp+9D0h] BYREF
  __int64 v191; // [rsp+A58h] [rbp+9D8h] BYREF
  __int64 v192; // [rsp+A60h] [rbp+9E0h]
  __int64 v193; // [rsp+A68h] [rbp+9E8h]
  __int64 v194; // [rsp+A70h] [rbp+9F0h]
  __int64 v195; // [rsp+A78h] [rbp+9F8h] BYREF
  __int64 (__fastcall *v196)(); // [rsp+A80h] [rbp+A00h]
  __int64 v197; // [rsp+A88h] [rbp+A08h]
  __int128 v198; // [rsp+A90h] [rbp+A10h] BYREF
  __int128 v199; // [rsp+AA0h] [rbp+A20h]
  __int128 v200; // [rsp+AB0h] [rbp+A30h] BYREF
  __int64 v201; // [rsp+AC0h] [rbp+A40h]
  __int64 v202; // [rsp+AC8h] [rbp+A48h]
  __int128 v203; // [rsp+AD0h] [rbp+A50h] BYREF
  __int128 v204; // [rsp+AE0h] [rbp+A60h]
  __int128 v205; // [rsp+AF8h] [rbp+A78h]
  _QWORD *v206; // [rsp+B08h] [rbp+A88h]
  char v207; // [rsp+B10h] [rbp+A90h]
  char v208; // [rsp+B11h] [rbp+A91h]
  char v209; // [rsp+B12h] [rbp+A92h]
  char v210; // [rsp+B13h] [rbp+A93h]
  char v211; // [rsp+B14h] [rbp+A94h]
  char v212; // [rsp+B15h] [rbp+A95h]
  char v213; // [rsp+B16h] [rbp+A96h]
  char v214; // [rsp+B17h] [rbp+A97h]
  __int64 v215; // [rsp+B18h] [rbp+A98h]

  v215 = -2;
  v206 = a1;
  if ( !(unsigned __int8)sub_14070BF00(a2) )
  {
    nullsub_1(v10, v9);
    v30 = (void *)sub_140001650(24, 1);
    if ( !v30 )
      sub_14196B2DB(1, 24);
    qmemcpy(v30, "LLM config is incomplete", 24);
    v31 = v206;
    v206[1] = 24;
    v31[2] = v30;
    v31[3] = 24;
    *v31 = 1;
    return v31;
  }
  sub_1407542A0(&v187, a2[1], a2[2]);
  *(_QWORD *)&v205 = v189;
  if ( v189 == 6 && !(*(_DWORD *)v188 ^ 0x75616C63 | *(unsigned __int16 *)(v188 + 4) ^ 0x6564) )
  {
    sub_14074EF30(&v155, a2, a3, a4);
    v36 = *(_OWORD *)&v155.m256i_u64[2];
    if ( v155.m256i_i32[0] == 1 )
    {
      v37 = v206;
      v206[1] = v155.m256i_i64[1];
      *((_OWORD *)v37 + 1) = v36;
      *v37 = 1;
    }
    else
    {
      v205 = *(_OWORD *)&v155.m256i_u64[1];
      (*(void (__fastcall **)(__int64, __int64, __int64))(a6 + 40))(a5, v155.m256i_i64[2], v155.m256i_i64[3]);
      v71 = v206;
      *(_OWORD *)(v206 + 1) = v205;
      v71[3] = *((_QWORD *)&v36 + 1);
      *v71 = 0;
    }
    goto LABEL_165;
  }
  v11 = a2[10];
  v12 = a2[11];
  while ( 1 )
  {
    v13 = v12;
    if ( !v12 )
      break;
    v14 = v11 + v12;
    v15 = *(char *)(v11 + v13 - 1);
    if ( v15 >= 0 )
    {
      v12 = v13 - 1;
      if ( v15 != 47 )
        break;
    }
    else
    {
      v16 = *(_BYTE *)(v14 - 2);
      if ( v16 >= -64 )
      {
        v19 = v14 - 2;
        v21 = v16 & 0x1F;
      }
      else
      {
        v17 = *(_BYTE *)(v14 - 3);
        if ( v17 >= -64 )
        {
          v19 = v14 - 3;
          v20 = v17 & 0xF;
        }
        else
        {
          v18 = *(_BYTE *)(v14 - 4);
          v19 = v14 - 4;
          v20 = ((v18 & 7) << 6) | v17 & 0x3F;
        }
        v21 = (v20 << 6) | v16 & 0x3F;
      }
      v12 = v19 - v11;
      if ( ((v21 << 6) | v15 & 0x3F) != 0x2F )
        break;
    }
  }
  *(_QWORD *)v164 = a2[10];
  *(_QWORD *)&v164[8] = v13;
  v143.m256i_i64[0] = (__int64)v164;
  v143.m256i_i64[1] = (__int64)sub_140191200;
  sub_1416DAFA0(&v155, &unk_141A38249, &v143);
  v185 = *(_OWORD *)v155.m256i_i8;
  v186 = v155.m256i_i64[2];
  *(_QWORD *)&v200 = 0;
  v201 = 0;
  nullsub_1(v23, v22);
  v24 = sub_140001650(5, 1);
  if ( !v24 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v24 + 4) = 108;
  *(_DWORD *)v24 = 1701080941;
  *(_QWORD *)v164 = 5;
  *(_QWORD *)&v164[8] = v24;
  *(_QWORD *)&v164[16] = 5;
  v25 = sub_1408FEA60(a2[7], a2[8]);
  v28 = v26;
  if ( v26 < 0 )
  {
    v29 = 0;
    goto LABEL_18;
  }
  if ( v26 )
  {
    v33 = v25;
    nullsub_1(v27, v26);
    v29 = 1;
    v34 = sub_140001650(v28, 1);
    if ( !v34 )
    {
LABEL_18:
      v210 = 1;
      sub_14196B2DB(v29, v28);
    }
    v35 = v34;
    sub_1419234B0(v34, v33, v28);
  }
  else
  {
    v35 = 1;
  }
  v155.m256i_i8[0] = 3;
  v155.m256i_i64[1] = v28;
  v155.m256i_i64[2] = v35;
  v155.m256i_i64[3] = v28;
  v210 = 0;
  sub_140A68320(&v143, &v200, v164, &v155);
  if ( v143.m256i_i8[0] != -1 )
    sub_1406C0ED0(&v143);
  nullsub_1(v39, v38);
  v40 = (__int64 (__fastcall *)())sub_140001650(8, 1);
  if ( !v40 )
    sub_14196B2DB(1, 8);
  *(_QWORD *)v40 = 0x736567617373656DLL;
  v195 = 8;
  v196 = v40;
  v197 = 8;
  nullsub_1(0x736567617373656DLL, v41);
  v42 = sub_140001650(64, 8);
  if ( !v42 )
  {
    v211 = 1;
    sub_14196B2C1(8, 64);
  }
  v45 = v42;
  *(_QWORD *)&v203 = 0;
  *(_QWORD *)&v204 = 0;
  nullsub_1(v44, v43);
  v46 = (_DWORD *)sub_140001650(4, 1);
  *((_QWORD *)&v205 + 1) = v45;
  if ( !v46 )
    sub_14196B2DB(1, 4);
  *v46 = 1701605234;
  *(_QWORD *)v164 = 4;
  *(_QWORD *)&v164[8] = v46;
  *(_QWORD *)&v164[16] = 4;
  nullsub_1(v48, v47);
  v49 = sub_140001650(6, 1);
  v202 = v49;
  if ( !v49 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v49 + 4) = 28005;
  *(_DWORD *)v49 = 1953724787;
  v155.m256i_i8[0] = 3;
  v155.m256i_i64[1] = 6;
  v155.m256i_i64[2] = v49;
  v155.m256i_i64[3] = 6;
  sub_140A68320(&v143, &v203, v164, &v155);
  if ( v143.m256i_i8[0] != -1 )
    sub_1406C0ED0(&v143);
  nullsub_1(v51, v50);
  v52 = (_DWORD *)sub_140001650(7, 1);
  if ( !v52 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v52 + 3) = 1953391988;
  *v52 = 1953394531;
  *(_QWORD *)v164 = 7;
  *(_QWORD *)&v164[8] = v52;
  *(_QWORD *)&v164[16] = 7;
  nullsub_1(v54, v53);
  v55 = sub_140001650(222, 1);
  v202 = v55;
  if ( !v55 )
    sub_14196B2DB(1, 222);
  v56 = v55;
  sub_1419234B0(v55, asc_141A38297, 222);
  v155.m256i_i8[0] = 3;
  v155.m256i_i64[1] = 222;
  v155.m256i_i64[2] = v56;
  v155.m256i_i64[3] = 222;
  sub_140A68320(&v143, &v203, v164, &v155);
  if ( v143.m256i_i8[0] != -1 )
    sub_1406C0ED0(&v143);
  *(_OWORD *)&v164[8] = v203;
  *(_QWORD *)&v164[24] = v204;
  v164[0] = 5;
  *(_QWORD *)&v198 = 0;
  *(_QWORD *)&v199 = 0;
  nullsub_1(v58, v57);
  v59 = (_DWORD *)sub_140001650(4, 1);
  if ( !v59 )
    sub_14196B2DB(1, 4);
  *v59 = 1701605234;
  *(_QWORD *)&v203 = 4;
  *((_QWORD *)&v203 + 1) = v59;
  *(_QWORD *)&v204 = 4;
  nullsub_1(v61, v60);
  v62 = (_DWORD *)sub_140001650(4, 1);
  v202 = (__int64)v62;
  if ( !v62 )
    sub_14196B2DB(1, 4);
  *v62 = 1919251317;
  v155.m256i_i8[0] = 3;
  v155.m256i_i64[1] = 4;
  v155.m256i_i64[2] = (__int64)v62;
  v155.m256i_i64[3] = 4;
  sub_140A68320(&v143, &v198, &v203, &v155);
  if ( v143.m256i_i8[0] != -1 )
    sub_1406C0ED0(&v143);
  nullsub_1(v64, v63);
  v65 = (_DWORD *)sub_140001650(7, 1);
  if ( !v65 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v65 + 3) = 1953391988;
  *v65 = 1953394531;
  *(_QWORD *)&v203 = 7;
  *((_QWORD *)&v203 + 1) = v65;
  *(_QWORD *)&v204 = 7;
  if ( a4 < 0 )
  {
    v68 = 0;
    goto LABEL_46;
  }
  if ( a4 )
  {
    nullsub_1(v67, v66);
    v68 = 1;
    v69 = sub_140001650(a4, 1);
    if ( !v69 )
    {
LABEL_46:
      v209 = 1;
      sub_14196B2DB(v68, a4);
    }
    v70 = v69;
    sub_1419234B0(v69, a3, a4);
  }
  else
  {
    v70 = 1;
  }
  v155.m256i_i8[0] = 3;
  v155.m256i_i64[1] = a4;
  v155.m256i_i64[2] = v70;
  v155.m256i_i64[3] = a4;
  v209 = 0;
  sub_140A68320(&v143, &v198, &v203, &v155);
  if ( v143.m256i_i8[0] != -1 )
    sub_1406C0ED0(&v143);
  *(_OWORD *)((char *)&v155.m256i_u32[1] + 3) = v198;
  *(__int64 *)((char *)&v155.m256i_i64[2] + 7) = v199;
  v72 = *(_OWORD *)v164;
  v73 = *((_QWORD *)&v205 + 1);
  *(_OWORD *)(*((_QWORD *)&v205 + 1) + 16LL) = *(_OWORD *)&v164[16];
  *(_OWORD *)v73 = v72;
  *(_BYTE *)(v73 + 32) = 5;
  v74 = *(_OWORD *)v155.m256i_i8;
  *(_OWORD *)(v73 + 48) = *(_OWORD *)((char *)&v155.m256i_u64[1] + 7);
  *(_OWORD *)(v73 + 33) = v74;
  v155.m256i_i64[1] = 2;
  v155.m256i_i64[2] = v73;
  v155.m256i_i64[3] = 2;
  v155.m256i_i8[0] = 4;
  v211 = 0;
  sub_140A68320(&v143, &v200, &v195, &v155);
  if ( v143.m256i_i8[0] != -1 )
    sub_1406C0ED0(&v143);
  nullsub_1(v76, v75);
  v77 = (void *)sub_140001650(11, 1);
  if ( !v77 )
    sub_14196B2DB(1, 11);
  qmemcpy(v77, "temperature", 11);
  *(_QWORD *)v164 = 11;
  *(_QWORD *)&v164[8] = v77;
  *(_QWORD *)&v164[16] = 11;
  v213 = 1;
  sub_14166CB50((__int64)&v155, 0.3);
  if ( v155.m256i_i8[0] == -1 )
  {
    v143.m256i_i64[0] = v155.m256i_i64[1];
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_6,
      43,
      (unsigned int)&v143,
      (unsigned int)&off_141A3B8C8,
      (__int64)&off_141A38278);
  }
  v143 = v155;
  v213 = 0;
  sub_140A68320(&v155, &v200, v164, &v143);
  if ( v155.m256i_i8[0] != -1 )
    sub_1406C0ED0(&v155);
  nullsub_1(v79, v78);
  v80 = (void *)sub_140001650(10, 1);
  if ( !v80 )
    sub_14196B2DB(1, 10);
  qmemcpy(v80, "max_tokens", 10);
  *(_QWORD *)v164 = 10;
  *(_QWORD *)&v164[8] = v80;
  *(_QWORD *)&v164[16] = 10;
  v155.m256i_i8[0] = 2;
  v155.m256i_i64[1] = 0;
  v155.m256i_i64[2] = 2048;
  sub_140A68320(&v143, &v200, v164, &v155);
  if ( v143.m256i_i8[0] != -1 )
    sub_1406C0ED0(&v143);
  nullsub_1(v82, v81);
  v83 = sub_140001650(6, 1);
  if ( !v83 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v83 + 4) = 28001;
  *(_DWORD *)v83 = 1701999731;
  *(_QWORD *)v164 = 6;
  *(_QWORD *)&v164[8] = v83;
  *(_QWORD *)&v164[16] = 6;
  v165 = 257;
  *(_OWORD *)&v155.m256i_u64[2] = v169;
  v155.m256i_i16[0] = 257;
  *(__int64 *)((char *)v155.m256i_i64 + 2) = v166;
  *(__int32 *)((char *)&v155.m256i_i32[2] + 2) = v167;
  v155.m256i_i16[7] = v168;
  sub_140A68320(&v143, &v200, v164, &v155);
  if ( v143.m256i_i8[0] != -1 )
    sub_1406C0ED0(&v143);
  v171 = v200;
  v172 = v201;
  v170[0] = 5;
  v86 = v188;
  switch ( (__int64)v205 )
  {
    case 4LL:
      if ( *(_DWORD *)v188 == 1768778091 )
        goto LABEL_90;
      break;
    case 5LL:
      v89 = *(_DWORD *)v188 ^ 0x7069687A;
      if ( !(v89 | *(unsigned __int8 *)(v188 + 4) ^ 0x75) )
      {
        nullsub_1(v89 | *(unsigned __int8 *)(v188 + 4) ^ 0x75u, v84);
        v90 = (_OWORD *)sub_140001650(16, 1);
        if ( !v90 )
          sub_14196B2DB(1, 16);
        *v90 = xmmword_141A3838B;
        *(_QWORD *)v164 = 16;
        *(_QWORD *)&v164[8] = v90;
        *(_QWORD *)&v164[16] = 16;
        v212 = 1;
        sub_140B72ED0((__int64)&v155, (__int64 *)&off_141A383A0);
        if ( v155.m256i_i8[0] == -1 )
        {
          v143.m256i_i64[0] = v155.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_6,
            43,
            (unsigned int)&v143,
            (unsigned int)&off_141A3B8C8,
            (__int64)&off_141A383B0);
        }
        v143 = v155;
        v212 = 0;
        sub_140A68320(&v155, &v171, v164, &v143);
        if ( v155.m256i_i8[0] != -1 )
          goto LABEL_74;
      }
      break;
    case 6LL:
      v92 = *(_DWORD *)v188 ^ 0x62756F64;
      v85 = v92 | *(unsigned __int16 *)(v188 + 4) ^ 0x6F61u;
      if ( !(v92 | *(unsigned __int16 *)(v188 + 4) ^ 0x6F61) )
        goto LABEL_90;
      v93 = *(_DWORD *)v188 ^ 0x616C6C6F;
      if ( !(v93 | *(unsigned __int16 *)(v188 + 4) ^ 0x616D) )
      {
        nullsub_1(v93 | *(unsigned __int16 *)(v188 + 4) ^ 0x616Du, v84);
        v94 = sub_140001650(5, 1);
        if ( !v94 )
          sub_14196B2DB(1, 5);
        *(_BYTE *)(v94 + 4) = 107;
        *(_DWORD *)v94 = 1852401780;
        *(_QWORD *)v164 = 5;
        *(_QWORD *)&v164[8] = v94;
        *(_QWORD *)&v164[16] = 5;
        v155.m256i_i16[0] = 1;
        sub_140A68320(&v143, &v171, v164, &v155);
        if ( v143.m256i_i8[0] != -1 )
          goto LABEL_96;
      }
      break;
    case 7LL:
      v95 = *(_DWORD *)v188 ^ 0x6C696162;
      if ( !(v95 | *(_DWORD *)(v188 + 3) ^ 0x6E61696C) )
      {
        nullsub_1(v95 | *(_DWORD *)(v188 + 3) ^ 0x6E61696Cu, v84);
        v96 = (void *)sub_140001650(15, 1);
        if ( !v96 )
          sub_14196B2DB(1, 15);
        qmemcpy(v96, "enable_thinking", 15);
        *(_QWORD *)v164 = 15;
        *(_QWORD *)&v164[8] = v96;
        *(_QWORD *)&v164[16] = 15;
        v155.m256i_i16[0] = 1;
        sub_140A68320(&v143, &v171, v164, &v155);
        if ( v143.m256i_i8[0] != -1 )
          goto LABEL_96;
      }
      break;
    case 8LL:
      if ( *(_QWORD *)v188 == 0x6B65657370656564LL )
      {
LABEL_90:
        nullsub_1(v85, v84);
        v97 = (_QWORD *)sub_140001650(8, 1);
        if ( !v97 )
          sub_14196B2DB(1, 8);
        *v97 = 0x676E696B6E696874LL;
        *(_QWORD *)&v198 = 8;
        *((_QWORD *)&v198 + 1) = v97;
        *(_QWORD *)&v199 = 8;
        *(_QWORD *)&v203 = 0;
        *(_QWORD *)&v204 = 0;
        nullsub_1(0x676E696B6E696874LL, v98);
        v99 = (_DWORD *)sub_140001650(4, 1);
        if ( !v99 )
          sub_14196B2DB(1, 4);
        *v99 = 1701869940;
        *(_QWORD *)v164 = 4;
        *(_QWORD *)&v164[8] = v99;
        *(_QWORD *)&v164[16] = 4;
        nullsub_1(v101, v100);
        v102 = (_QWORD *)sub_140001650(8, 1);
        *((_QWORD *)&v205 + 1) = v102;
        if ( !v102 )
          sub_14196B2DB(1, 8);
        *v102 = 0x64656C6261736964LL;
        v155.m256i_i8[0] = 3;
        v155.m256i_i64[1] = 8;
        v155.m256i_i64[2] = (__int64)v102;
        v155.m256i_i64[3] = 8;
        sub_140A68320(&v143, &v203, v164, &v155);
        if ( v143.m256i_i8[0] != -1 )
          sub_1406C0ED0(&v143);
        *(_OWORD *)&v155.m256i_u64[1] = v203;
        v155.m256i_i64[3] = v204;
        v155.m256i_i8[0] = 5;
        v208 = 0;
        sub_140A68320(&v143, &v171, &v198, &v155);
        if ( v143.m256i_i8[0] != -1 )
LABEL_96:
          sub_1406C0ED0(&v143);
      }
      break;
    case 9LL:
      v87 = *(_QWORD *)v188 ^ 0x6378616D696E696DLL;
      v88 = *(unsigned __int8 *)(v188 + 8) ^ 0x6ELL;
      goto LABEL_76;
    case 11LL:
      v87 = *(_QWORD *)v188 ^ 0x6978616D696E696DLL;
      v88 = *(_QWORD *)(v188 + 3) ^ 0x6C746E6978616D69LL;
LABEL_76:
      if ( !(v87 | v88) )
      {
        nullsub_1(0, v84);
        v91 = (void *)sub_140001650(15, 1);
        if ( !v91 )
          sub_14196B2DB(1, 15);
        qmemcpy(v91, "reasoning_split", 15);
        v143.m256i_i64[0] = 15;
        v143.m256i_i64[1] = (__int64)v91;
        v143.m256i_i64[2] = 15;
        sub_140A68320(&v155, &v171, &v143, &v165);
        if ( v155.m256i_i8[0] != -1 )
LABEL_74:
          sub_1406C0ED0(&v155);
      }
      break;
    default:
      break;
  }
  sub_141283D00(&v155);
  v162 = 60;
  v163 = 0;
  sub_1419234B0(&v143, &v155, 928);
  sub_141282DC0(v164, &v143);
  if ( *(_DWORD *)&v164[16] == -2 )
  {
    v195 = *(_QWORD *)v164;
    v143.m256i_i64[0] = (__int64)&v195;
    v143.m256i_i64[1] = (__int64)sub_141246C00;
    sub_1416DAFA0(&v155, &unk_141A38E7D, &v143);
    sub_14028DCE0(v195);
    v103 = *(_OWORD *)v155.m256i_i8;
    v198 = *(_OWORD *)v155.m256i_i8;
    *(_QWORD *)&v199 = v155.m256i_i64[2];
    v104 = v206;
    v206[3] = v155.m256i_i64[2];
    *(_OWORD *)(v104 + 1) = v103;
    *v104 = 1;
    goto LABEL_163;
  }
  v200 = *(_OWORD *)v164;
  v201 = *(_QWORD *)&v164[16];
  memset(&v143, 2, 24);
  sub_140B6A370(&v155, &v200, &v143, &v185);
  sub_1406600F0(
    (unsigned int)&v143,
    (unsigned int)&v155,
    (unsigned int)aContentType,
    12,
    (__int64)"application/json",
    16,
    0);
  sub_140661300(v164, &v143, v170);
  if ( (_QWORD)v205 != 6
    || *(_DWORD *)v86 ^ 0x616C6C6F | *(unsigned __int16 *)(v86 + 4) ^ 0x616D
    || (sub_1408FEA60(a2[4], a2[5]), v105) )
  {
    sub_1419234B0(&v155, v164, 328);
    *(_QWORD *)&v106 = sub_1408FEA60(a2[4], a2[5]);
    v203 = v106;
    v143.m256i_i64[0] = (__int64)&v203;
    v143.m256i_i64[1] = (__int64)sub_140191200;
    v207 = 1;
    sub_1416DAFA0(v142, &unk_141A376E0, &v143);
    v207 = 0;
    sub_140660410((unsigned int)&v143, (unsigned int)&v155, (unsigned int)aAuthorization, 13, (__int64)v142, 0);
    sub_1419234B0(v164, &v143, 328);
  }
  sub_1419234B0(&v155, v164, 328);
  sub_141271350(&v143, &v155);
  v108 = v143.m256i_i64[0];
  if ( v143.m256i_i64[0] == -1 )
  {
    v190 = v143.m256i_i64[1];
    v195 = (__int64)&v190;
    v196 = sub_141246C00;
    sub_1416DAFA0(&v155, &unk_141A38EAD, &v195);
    sub_14028DCE0(v190);
    v129 = *(_OWORD *)v155.m256i_i8;
    v198 = *(_OWORD *)v155.m256i_i8;
    *(_QWORD *)&v199 = v155.m256i_i64[2];
    v130 = v206;
    v206[3] = v155.m256i_i64[2];
    *(_OWORD *)(v130 + 1) = v129;
    *v130 = 1;
    goto LABEL_161;
  }
  *(_QWORD *)&v204 = v143.m256i_i64[3];
  v203 = *(_OWORD *)&v143.m256i_u64[1];
  v174 = v144;
  v175 = v145;
  v176 = v146;
  v177 = v147;
  v178 = v148;
  v109 = v149[0];
  v179 = *(_OWORD *)&v149[1];
  v180 = v150;
  v181 = v151;
  v182[0] = v152[0];
  *(_QWORD *)((char *)v182 + 14) = *(_QWORD *)((char *)v152 + 14);
  v110 = v143.m256i_i64[3];
  v183 = *(_OWORD *)&v143.m256i_u64[1];
  v184 = v143.m256i_i64[3];
  if ( (unsigned __int16)(v149[0] - 200) >= 0x64u )
  {
    LOWORD(v198) = v149[0];
    v155.m256i_i64[0] = v143.m256i_i64[0];
    *(_OWORD *)&v155.m256i_u64[1] = v183;
    v155.m256i_i64[3] = v184;
    v156 = v174;
    v157 = v175;
    *(_OWORD *)v158 = v176;
    *(_OWORD *)&v158[16] = v177;
    *(_QWORD *)&v158[32] = v178;
    *(_WORD *)v159 = v149[0];
    *(_OWORD *)&v159[2] = v179;
    *(_OWORD *)&v159[18] = v180;
    *(_OWORD *)&v159[34] = v181;
    *(_OWORD *)&v159[50] = v182[0];
    *(_QWORD *)&v159[64] = *(_QWORD *)((char *)v182 + 14);
    sub_141276970(&v143, &v155);
    if ( v143.m256i_i64[0] == -1 )
    {
      *(_QWORD *)&v203 = 0;
      *((_QWORD *)&v203 + 1) = 1;
      *(_QWORD *)&v204 = 0;
      sub_14028DCE0(v143.m256i_i64[1]);
    }
    else
    {
      *(_QWORD *)&v204 = v143.m256i_i64[2];
      v203 = *(_OWORD *)v143.m256i_i8;
    }
    v155.m256i_i64[0] = (__int64)&v198;
    v155.m256i_i64[1] = (__int64)sub_141680990;
    v155.m256i_i64[2] = (__int64)&v203;
    v155.m256i_i64[3] = (__int64)sub_1400015F0;
    sub_1416DAFA0(&v153, &unk_141A383ED, &v155);
    v139 = v206;
    v206[3] = v154;
    *(_OWORD *)(v139 + 1) = v153;
    *v139 = 1;
    v137 = v203;
    if ( (_QWORD)v203 )
    {
      v138 = *((_QWORD *)&v203 + 1);
LABEL_160:
      sub_140001660(v138, v137, 1);
    }
    goto LABEL_161;
  }
  *(_OWORD *)&v143.m256i_u64[1] = v183;
  v143.m256i_i64[3] = v184;
  v144 = v174;
  v145 = v175;
  v146 = v176;
  v147 = v177;
  v148 = v178;
  *(_OWORD *)&v149[1] = v179;
  v150 = v180;
  v151 = v181;
  v152[0] = v182[0];
  *(_QWORD *)((char *)v152 + 14) = *(_QWORD *)((char *)v182 + 14);
  nullsub_1(v110, v107);
  v202 = 1;
  v111 = sub_140001650(0x2000, 1);
  if ( !v111 )
    sub_14196B2DB(1, 0x2000);
  *(_OWORD *)&v155.m256i_u64[2] = 0;
  LOBYTE(v156) = 0;
  v157 = v183;
  *(_QWORD *)v158 = v184;
  *(_OWORD *)&v158[8] = v174;
  *(_OWORD *)&v158[24] = v175;
  *(_OWORD *)v159 = v176;
  *(_OWORD *)&v159[16] = v177;
  *(_QWORD *)&v159[32] = v178;
  *(_OWORD *)&v159[42] = v179;
  *(_OWORD *)&v159[58] = v180;
  v160 = v181;
  v161[0] = v182[0];
  *(_QWORD *)((char *)v161 + 14) = *(_QWORD *)((char *)v182 + 14);
  v191 = 0;
  v192 = 1;
  v193 = 0;
  v155.m256i_i64[0] = v111;
  v155.m256i_i64[1] = 0x2000;
  *((_QWORD *)&v156 + 1) = v108;
  *(_WORD *)&v159[40] = v109;
  v173 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a6 + 40);
  v112 = 0;
  v194 = 0;
  while ( 1 )
  {
    sub_140CAF860(&v195, &v155);
    v113 = v195;
    if ( v195 == -2 )
      break;
    v114 = v196;
    if ( v195 == -1 )
    {
      *(_QWORD *)&v198 = v196;
      *(_QWORD *)&v203 = &v198;
      *((_QWORD *)&v203 + 1) = sub_1416EA080;
      sub_1416DAFA0(&v143, &unk_141A38E97, &v203);
      if ( (unsigned int)(v198 & 3) - 2 >= 2 && (v198 & 3) != 0 )
      {
        *((_QWORD *)&v203 + 1) = v198 - 1;
        LOBYTE(v203) = 3;
        sub_1416EBAD0((char *)&v203 + 8);
      }
      v135 = v143.m256i_i64[2];
      v136 = v206;
      *(_OWORD *)(v206 + 1) = *(_OWORD *)v143.m256i_i8;
      v136[3] = v135;
      *v136 = 1;
      if ( v155.m256i_i64[1] )
        sub_140001660(v155.m256i_i64[0], v155.m256i_i64[1], 1);
      v214 = 1;
      sub_1406C2490((char *)&v156 + 8);
      v137 = v191;
      if ( v191 )
      {
        v138 = v202;
        goto LABEL_160;
      }
      goto LABEL_161;
    }
    v115 = sub_1408FEA60(v196, v197);
    *(_QWORD *)&v205 = v113;
    *((_QWORD *)&v205 + 1) = v114;
    if ( v116 == 12 )
    {
      if ( *(_QWORD *)v115 ^ 0x445B203A61746164LL | *(unsigned int *)(v115 + 8) ^ 0x5D454E4FLL )
        goto LABEL_114;
LABEL_136:
      if ( v113 )
        goto LABEL_137;
    }
    else
    {
      if ( !v116 )
        goto LABEL_136;
      if ( v116 < 6 )
      {
        v117 = v116;
        v118 = 0;
        goto LABEL_121;
      }
LABEL_114:
      v119 = _byteswap_ulong(*(_DWORD *)v115);
      v120 = 1684108385;
      if ( v119 != 1684108385
        || (v119 = (unsigned __int16)__ROL2__(*(_WORD *)(v115 + 4), 8),
            v120 = 14880,
            v121 = 0,
            (unsigned __int16)v119 != 14880) )
      {
        v121 = 2 * (v120 >= v119) - 1;
      }
      v117 = v116 - 6;
      if ( v121 )
        v117 = v116;
      v118 = 0;
      if ( !v121 )
        v118 = 6;
LABEL_121:
      v143.m256i_i64[0] = v118 + v115;
      v143.m256i_i64[1] = v117;
      *(_OWORD *)&v143.m256i_u64[2] = 0;
      *(_QWORD *)&v144 = v118 + v115;
      *((_QWORD *)&v144 + 1) = v117;
      sub_140D8B500(&v203, (__int128 *)v143.m256i_i8);
      if ( (_BYTE)v203 == 0xFF )
      {
        sub_140032F30((char *)&v203 + 8);
        v114 = *((__int64 (__fastcall **)())&v205 + 1);
        v113 = v205;
        goto LABEL_136;
      }
      v199 = v204;
      v198 = v203;
      v122 = sub_1416724D0(aChoices, 7, &v198);
      if ( !v122 )
        goto LABEL_133;
      if ( *(_BYTE *)v122 != 4 )
        goto LABEL_133;
      if ( !*(_QWORD *)(v122 + 24) )
        goto LABEL_133;
      v123 = sub_1416724D0(aDelta_0, 5, *(_QWORD *)(v122 + 16));
      if ( !v123 )
        goto LABEL_133;
      v124 = sub_1416724D0(aContent_3, 7, v123);
      if ( !v124 || *(_BYTE *)v124 != 3 )
        goto LABEL_133;
      v125 = *(_QWORD *)(v124 + 24);
      if ( !v125 )
        goto LABEL_139;
      v126 = *(_QWORD *)(v124 + 16);
      if ( v125 > v191 - v112 )
      {
        sub_141939070((unsigned int)&v191, v112, v125, 1, 1);
        v202 = v192;
        v112 = v193;
      }
      sub_1419234B0(v202 + v112, v126, v125);
      v112 += v125;
      v193 = v112;
      v127 = sub_14076EEF0(aThink_0, 7, v126, v125);
      if ( (((unsigned __int8)v194 | v127) & 1) != 0 )
      {
        v128 = sub_14076EEF0(aThink_1, 8, v126, v125);
        LOBYTE(v128) = v128 ^ 1;
        v194 = v128;
LABEL_139:
        sub_1406C0ED0(&v198);
        v114 = *((__int64 (__fastcall **)())&v205 + 1);
        v113 = v205;
        if ( (_QWORD)v205 )
LABEL_137:
          sub_140001660(v114, v113, 1);
      }
      else
      {
        v173(a5, v126, v125);
LABEL_133:
        sub_1406C0ED0(&v198);
        if ( (_QWORD)v205 )
          sub_140001660(*((_QWORD *)&v205 + 1), v205, 1);
      }
    }
  }
  if ( v155.m256i_i64[1] )
    sub_140001660(v155.m256i_i64[0], v155.m256i_i64[1], 1);
  v214 = 1;
  sub_1406C2490((char *)&v156 + 8);
  v214 = 0;
  sub_140751840(v155.m256i_i64, &v191);
  v131 = v155.m256i_i64[1];
  sub_1408FEA60(v155.m256i_i64[1], v155.m256i_i64[2]);
  if ( v133 )
  {
    v134 = v206;
    v206[3] = v155.m256i_i64[2];
    *(_OWORD *)(v134 + 1) = *(_OWORD *)v155.m256i_i8;
    *v134 = 0;
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v200) )
      sub_141258290(&v200);
    goto LABEL_163;
  }
  nullsub_1(v132, 0);
  v140 = (void *)sub_140001650(34, 1);
  if ( !v140 )
  {
    v206 = (_QWORD *)v131;
    sub_14196B2DB(1, 34);
  }
  qmemcpy(v140, "LLM stream returned empty response", 34);
  v141 = v206;
  v206[1] = 34;
  v141[2] = v140;
  v141[3] = 34;
  *v141 = 1;
  v137 = v155.m256i_i64[0];
  if ( v155.m256i_i64[0] )
  {
    v138 = v131;
    goto LABEL_160;
  }
LABEL_161:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v200) )
    sub_141258290(&v200);
LABEL_163:
  sub_1406C0ED0(v170);
  if ( (_QWORD)v185 )
    sub_140001660(*((_QWORD *)&v185 + 1), v185, 1);
LABEL_165:
  if ( v187 )
    sub_140001660(v188, v187, 1);
  return v206;
}
