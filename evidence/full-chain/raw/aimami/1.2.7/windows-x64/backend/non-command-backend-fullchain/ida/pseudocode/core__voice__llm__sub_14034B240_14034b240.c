// win 1.2.7 | module src/core/voice/llm.rs | ea 0x14034b240 | name sub_14034B240
// win 1.2.7 | module src/core/voice/llm.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14034B240(__int64 a1, _QWORD *a2, const __m128i *a3, signed __int64 a4)
{
  _QWORD *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r8d
  char v13; // r9
  char v14; // r10
  char v15; // r11
  __int64 v16; // rdx
  int v17; // r10d
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // r15
  __int64 v27; // rsi
  signed __int64 v28; // rdi
  const __m128i *v29; // rbx
  __int64 v30; // r14
  const __m128i *v31; // r13
  __m128i *v32; // rax
  __int64 v33; // r12
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __m128i *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  _DWORD *v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rcx
  _DWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rsi
  __m128i *v52; // rax
  __int64 v53; // r15
  __int64 v54; // rcx
  __int128 v55; // xmm0
  __int128 v56; // xmm0
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rsi
  __int128 v64; // xmm0
  __m128i *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rdx
  _BYTE *v70; // rcx
  __int64 v71; // rax
  void *v73; // rax
  _BYTE v74[24]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v75; // [rsp+78h] [rbp-8h]
  __int128 v76; // [rsp+80h] [rbp+0h]
  __int128 v77; // [rsp+90h] [rbp+10h]
  __int128 v78; // [rsp+A0h] [rbp+20h]
  __int128 v79; // [rsp+B0h] [rbp+30h]
  __int64 v80; // [rsp+C0h] [rbp+40h]
  __int16 v81; // [rsp+C8h] [rbp+48h]
  __int128 v82; // [rsp+CAh] [rbp+4Ah]
  _BYTE v83[54]; // [rsp+DAh] [rbp+5Ah] BYREF
  __int128 v84; // [rsp+400h] [rbp+380h]
  __int64 v85; // [rsp+410h] [rbp+390h]
  __m256i v86; // [rsp+418h] [rbp+398h] BYREF
  __int128 v87; // [rsp+438h] [rbp+3B8h]
  __int128 v88; // [rsp+448h] [rbp+3C8h]
  __int128 v89; // [rsp+458h] [rbp+3D8h]
  __int128 v90; // [rsp+468h] [rbp+3E8h]
  __int64 v91; // [rsp+478h] [rbp+3F8h]
  __int16 v92; // [rsp+480h] [rbp+400h]
  __int128 v93; // [rsp+482h] [rbp+402h]
  __m256i v94; // [rsp+492h] [rbp+412h]
  _OWORD v95[25]; // [rsp+4B2h] [rbp+432h]
  char v96; // [rsp+648h] [rbp+5C8h]
  __int64 v97; // [rsp+7A8h] [rbp+728h]
  int v98; // [rsp+7B0h] [rbp+730h]
  __int128 v99; // [rsp+7B8h] [rbp+738h] BYREF
  __int64 v100; // [rsp+7C8h] [rbp+748h]
  char v101[8]; // [rsp+7D0h] [rbp+750h] BYREF
  __int128 v102; // [rsp+7D8h] [rbp+758h]
  __int64 v103; // [rsp+7E8h] [rbp+768h]
  __int64 v104; // [rsp+7F0h] [rbp+770h] BYREF
  _BYTE *v105; // [rsp+7F8h] [rbp+778h]
  __int64 v106; // [rsp+800h] [rbp+780h]
  _QWORD v107[3]; // [rsp+808h] [rbp+788h] BYREF
  __int128 v108; // [rsp+820h] [rbp+7A0h]
  __int64 v109; // [rsp+830h] [rbp+7B0h]
  __int128 v110; // [rsp+840h] [rbp+7C0h] BYREF
  __int128 v111; // [rsp+850h] [rbp+7D0h]
  __int128 v112; // [rsp+860h] [rbp+7E0h]
  __int128 v113; // [rsp+870h] [rbp+7F0h]
  __int64 v114; // [rsp+880h] [rbp+800h]
  __int128 v115; // [rsp+890h] [rbp+810h] BYREF
  __m256i v116; // [rsp+8A0h] [rbp+820h]
  _OWORD v117[2]; // [rsp+8C0h] [rbp+840h]
  _BYTE v118[24]; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v119; // [rsp+8F8h] [rbp+878h]
  __int128 v120; // [rsp+900h] [rbp+880h]
  __int128 v121; // [rsp+910h] [rbp+890h]
  __int128 v122; // [rsp+920h] [rbp+8A0h]
  __int128 v123; // [rsp+930h] [rbp+8B0h]
  __int64 v124; // [rsp+940h] [rbp+8C0h]
  _WORD v125[9]; // [rsp+948h] [rbp+8C8h]
  __m256i v126; // [rsp+95Ah] [rbp+8DAh]
  _BYTE v127[22]; // [rsp+97Ah] [rbp+8FAh]
  __int128 v128; // [rsp+990h] [rbp+910h] BYREF
  __int64 v129; // [rsp+9A0h] [rbp+920h]
  __int64 v130; // [rsp+9A8h] [rbp+928h] BYREF
  __int128 v131; // [rsp+9B0h] [rbp+930h] BYREF
  __int64 v132; // [rsp+9C0h] [rbp+940h]
  _DWORD *v133; // [rsp+9C8h] [rbp+948h]
  _BYTE *v134; // [rsp+9D0h] [rbp+950h]
  char v135; // [rsp+9DBh] [rbp+95Bh]
  char v136; // [rsp+9DCh] [rbp+95Ch]
  char v137; // [rsp+9DDh] [rbp+95Dh]
  char v138; // [rsp+9DEh] [rbp+95Eh]
  char v139; // [rsp+9DFh] [rbp+95Fh]
  __int64 v140; // [rsp+9E0h] [rbp+960h]

  v140 = -2;
  v6 = a2;
  v8 = a2[10];
  v9 = a2[11];
  while ( 1 )
  {
    v10 = v9;
    if ( !v9 )
      break;
    v11 = v8 + v9;
    v12 = *(char *)(v8 + v10 - 1);
    if ( v12 >= 0 )
    {
      v9 = v10 - 1;
      if ( v12 != 47 )
        break;
    }
    else
    {
      v13 = *(_BYTE *)(v11 - 2);
      if ( v13 >= -64 )
      {
        v16 = v11 - 2;
        v18 = v13 & 0x1F;
      }
      else
      {
        v14 = *(_BYTE *)(v11 - 3);
        if ( v14 >= -64 )
        {
          v16 = v11 - 3;
          v17 = v14 & 0xF;
        }
        else
        {
          v15 = *(_BYTE *)(v11 - 4);
          v16 = v11 - 4;
          v17 = ((v15 & 7) << 6) | v14 & 0x3F;
        }
        v18 = (v17 << 6) | v13 & 0x3F;
      }
      v9 = v16 - v8;
      if ( ((v18 << 6) | v12 & 0x3F) != 0x2F )
        break;
    }
  }
  *(_QWORD *)v74 = v8;
  *(_QWORD *)&v74[8] = v10;
  v86.m256i_i64[0] = (__int64)v74;
  v86.m256i_i64[1] = (__int64)sub_140186EE0;
  sub_1416ABFD0(v107, &unk_1419E9C65, &v86);
  *(_QWORD *)&v131 = 0;
  v132 = 0;
  nullsub_1(v19);
  v20 = sub_140001650(5, 1);
  if ( !v20 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v20 + 4) = 108;
  *(_DWORD *)v20 = 1701080941;
  *(_QWORD *)v118 = 5;
  *(_QWORD *)&v118[8] = v20;
  *(_QWORD *)&v118[16] = 5;
  v21 = v6[7];
  v22 = v6[8];
  v139 = 1;
  v23 = sub_140E91160(v21, v22);
  v26 = v24;
  if ( v24 < 0 )
  {
    v27 = 0;
    goto LABEL_15;
  }
  if ( v24 )
  {
    v134 = v6;
    v28 = a4;
    v29 = a3;
    v30 = a1;
    v31 = (const __m128i *)v23;
    nullsub_1(v25);
    v27 = 1;
    v32 = (__m128i *)sub_140001650(v26, 1);
    if ( !v32 )
    {
LABEL_15:
      v139 = 1;
      sub_141938D2B(v27, v26);
    }
    v33 = (__int64)v32;
    sub_1418F44E0(v32, v31, v26);
    a1 = v30;
    a3 = v29;
    a4 = v28;
    v6 = v134;
  }
  else
  {
    v33 = 1;
  }
  v86.m256i_i8[0] = 3;
  v86.m256i_i64[1] = v26;
  v86.m256i_i64[2] = v33;
  v86.m256i_i64[3] = v26;
  v139 = 0;
  sub_140E72AA0(v74, &v131, v118, &v86);
  if ( v74[0] != 0xFF )
    sub_14002F9D0(v74);
  nullsub_1(v34);
  v35 = (void *)sub_140001650(10, 1);
  if ( !v35 )
    sub_141938D2B(1, 10);
  qmemcpy(v35, "max_tokens", 10);
  *(_QWORD *)v118 = 10;
  *(_QWORD *)&v118[8] = v35;
  *(_QWORD *)&v118[16] = 10;
  v86.m256i_i8[0] = 2;
  v86.m256i_i64[1] = 0;
  v86.m256i_i64[2] = 4096;
  sub_140E72AA0(v74, &v131, v118, &v86);
  if ( v74[0] != 0xFF )
    sub_14002F9D0(v74);
  nullsub_1(v36);
  v37 = sub_140001650(6, 1);
  if ( !v37 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v37 + 4) = 28005;
  *(_DWORD *)v37 = 1953724787;
  *(_QWORD *)v118 = 6;
  *(_QWORD *)&v118[8] = v37;
  *(_QWORD *)&v118[16] = 6;
  nullsub_1(v38);
  v39 = (__m128i *)sub_140001650(222, 1);
  v134 = v39;
  if ( !v39 )
    sub_141938D2B(1, 222);
  v40 = (__int64)v39;
  sub_1418F44E0(
    v39,
    (const __m128i *)"你是一个语音转写后处理助手。用户会给你一段经过语音识别后的文本和处理指令，请按照指令要求进行文本润色、整理或翻译。只输出处理后的结果，不要添加解释。usertemperaturemax_tokens"
                     "streamdoubaoreasoning_effortnone",
    0xDEu);
  v86.m256i_i8[0] = 3;
  v86.m256i_i64[1] = 222;
  v86.m256i_i64[2] = v40;
  v86.m256i_i64[3] = 222;
  sub_140E72AA0(v74, &v131, v118, &v86);
  if ( v74[0] != 0xFF )
    sub_14002F9D0(v74);
  nullsub_1(v41);
  v42 = (_QWORD *)sub_140001650(8, 1);
  if ( !v42 )
    sub_141938D2B(1, 8);
  *v42 = 0x736567617373656DLL;
  *(_QWORD *)&v115 = 8;
  *((_QWORD *)&v115 + 1) = v42;
  v116.m256i_i64[0] = 8;
  nullsub_1(0x736567617373656DLL);
  v43 = sub_140001650(32, 8);
  if ( !v43 )
  {
    v138 = 1;
    sub_141938D11(8, 32);
  }
  v134 = (_BYTE *)v43;
  *(_QWORD *)&v110 = 0;
  *(_QWORD *)&v111 = 0;
  nullsub_1(v44);
  v45 = (_DWORD *)sub_140001650(4, 1);
  if ( !v45 )
    sub_141938D2B(1, 4);
  *v45 = 1701605234;
  *(_QWORD *)v118 = 4;
  *(_QWORD *)&v118[8] = v45;
  *(_QWORD *)&v118[16] = 4;
  nullsub_1(v46);
  v47 = (_DWORD *)sub_140001650(4, 1);
  v133 = v47;
  if ( !v47 )
    sub_141938D2B(1, 4);
  *v47 = 1919251317;
  v86.m256i_i8[0] = 3;
  v86.m256i_i64[1] = 4;
  v86.m256i_i64[2] = (__int64)v47;
  v86.m256i_i64[3] = 4;
  sub_140E72AA0(v74, &v110, v118, &v86);
  if ( v74[0] != 0xFF )
    sub_14002F9D0(v74);
  nullsub_1(v48);
  v49 = (_DWORD *)sub_140001650(7, 1);
  if ( !v49 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v49 + 3) = 1953391988;
  *v49 = 1953394531;
  *(_QWORD *)v118 = 7;
  *(_QWORD *)&v118[8] = v49;
  *(_QWORD *)&v118[16] = 7;
  if ( a4 < 0 )
  {
    v51 = 0;
    goto LABEL_38;
  }
  if ( a4 )
  {
    nullsub_1(v50);
    v51 = 1;
    v52 = (__m128i *)sub_140001650(a4, 1);
    if ( !v52 )
    {
LABEL_38:
      v136 = 1;
      sub_141938D2B(v51, a4);
    }
    v53 = (__int64)v52;
    sub_1418F44E0(v52, a3, a4);
  }
  else
  {
    v53 = 1;
  }
  v86.m256i_i8[0] = 3;
  v86.m256i_i64[1] = a4;
  v86.m256i_i64[2] = v53;
  v86.m256i_i64[3] = a4;
  v136 = 0;
  sub_140E72AA0(v74, &v110, v118, &v86);
  if ( v74[0] != 0xFF )
    sub_14002F9D0(v74);
  *(_OWORD *)((char *)&v86.m256i_u32[1] + 3) = v110;
  *(__int64 *)((char *)&v86.m256i_i64[2] + 7) = v111;
  v54 = (__int64)v134;
  *v134 = 5;
  v55 = *(_OWORD *)v86.m256i_i8;
  *(_OWORD *)(v54 + 16) = *(_OWORD *)((char *)&v86.m256i_u64[1] + 7);
  *(_OWORD *)(v54 + 1) = v55;
  v86.m256i_i64[1] = 1;
  v86.m256i_i64[2] = v54;
  v86.m256i_i64[3] = 1;
  v86.m256i_i8[0] = 4;
  v138 = 0;
  sub_140E72AA0(v74, &v131, &v115, &v86);
  if ( v74[0] != 0xFF )
    sub_14002F9D0(v74);
  v102 = v131;
  v103 = v132;
  v101[0] = 5;
  sub_14124EF10(&v86);
  v97 = 60;
  v98 = 0;
  sub_1418F44E0((__m128i *)v74, (const __m128i *)&v86, 0x3A0u);
  sub_14124DFD0(v118, v74);
  if ( *(_DWORD *)&v118[16] == -2 )
  {
    *(_QWORD *)&v131 = *(_QWORD *)v118;
    *(_QWORD *)v74 = &v131;
    *(_QWORD *)&v74[8] = sub_14122E940;
    sub_1416ABFD0(&v86, &unk_1419E529D, v74);
    sub_140192750(v131);
    v56 = *(_OWORD *)v86.m256i_i8;
    v115 = *(_OWORD *)v86.m256i_i8;
    v116.m256i_i64[0] = v86.m256i_i64[2];
    *(_QWORD *)(a1 + 24) = v86.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = v56;
    *(_QWORD *)a1 = 1;
    goto LABEL_80;
  }
  v128 = *(_OWORD *)v118;
  v129 = *(_QWORD *)&v118[16];
  memset(v74, 2, sizeof(v74));
  sub_1403FFCC0(&v86, &v128, v74, v107);
  v57 = v6[4];
  v58 = v6[5];
  v135 = 1;
  v59 = sub_140E91160(v57, v58);
  v135 = 0;
  sub_140CB5CD0((unsigned int)v74, (unsigned int)&v86, (unsigned int)aXApiKey_0, 9, v59, v60, 0);
  sub_140CB5CD0(
    (unsigned int)&v86,
    (unsigned int)v74,
    (unsigned int)aAnthropicVersi,
    17,
    (__int64)&unk_1419E9C8B,
    10,
    0);
  sub_140CB5CD0((unsigned int)v74, (unsigned int)&v86, (unsigned int)aContentType_0, 12, (__int64)&unk_1419E4BBC, 16, 0);
  sub_140CB6ED0(&v86, v74, v101);
  sub_14125AE40(v118, &v86);
  if ( *(_QWORD *)v118 == -1 )
  {
    v130 = *(_QWORD *)&v118[8];
    *(_QWORD *)v74 = &v130;
    *(_QWORD *)&v74[8] = sub_14122E940;
    sub_1416ABFD0(&v86, &unk_1419E6658, v74);
    sub_140192750(v130);
    v64 = *(_OWORD *)v86.m256i_i8;
    v84 = *(_OWORD *)v86.m256i_i8;
    v85 = v86.m256i_i64[2];
    *(_QWORD *)(a1 + 24) = v86.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = v64;
    goto LABEL_77;
  }
  v132 = v119;
  v131 = *(_OWORD *)&v118[8];
  v110 = v120;
  v111 = v121;
  v112 = v122;
  v113 = v123;
  v114 = v124;
  v115 = *(_OWORD *)&v125[1];
  v116 = v126;
  v117[0] = *(_OWORD *)v127;
  *(_QWORD *)((char *)v117 + 14) = *(_QWORD *)&v127[14];
  v108 = *(_OWORD *)&v118[8];
  v109 = v119;
  if ( (unsigned __int16)(v125[0] - 200) < 0x64u )
  {
    *(_QWORD *)v74 = *(_QWORD *)v118;
    *(_OWORD *)&v74[8] = v108;
    v75 = v109;
    v76 = v110;
    v77 = v111;
    v78 = v112;
    v79 = v113;
    v80 = v114;
    v81 = v125[0];
    v82 = v115;
    *(__m256i *)v83 = v116;
    *(_OWORD *)&v83[32] = v117[0];
    *(_QWORD *)&v83[46] = *(_QWORD *)((char *)v117 + 14);
    sub_1418F44E0((__m128i *)&v86, (const __m128i *)v74, 0x88u);
    v96 = 0;
    sub_140410EA0(v118, &v86, *(_QWORD *)&v83[14], *(unsigned int *)&v83[22]);
    v62 = *(_QWORD *)&v118[8];
    v63 = *(_QWORD *)v118;
    if ( *(_QWORD *)v118 == -1 )
    {
      if ( !*(_QWORD *)&v118[8] )
      {
        WORD4(v90) = 5;
        *(__int64 *)((char *)v94.m256i_i64 + 6) = 1;
        *(__int64 *)((char *)&v94.m256i_i64[1] + 6) = (__int64)&unk_1419D1E30;
        v86.m256i_i64[0] = -1;
        nullsub_1(v61);
        v65 = (__m128i *)sub_140001650(144, 8);
        if ( !v65 )
          sub_141938D11(8, 144);
        v62 = (__int64)v65;
        sub_1418F44E0(v65, (const __m128i *)&v86, 0x90u);
      }
    }
    else
    {
      a3 = *(const __m128i **)&v118[16];
    }
    v134 = *(_BYTE **)&v83[30];
    if ( *(_QWORD *)&v83[30] )
    {
      v133 = *(_DWORD **)&v83[38];
      if ( **(_QWORD **)&v83[38] )
        (**(void (__fastcall ***)(_BYTE *))&v83[38])(v134);
      v66 = *((_QWORD *)v133 + 1);
      if ( v66 )
        sub_140001660(v134, v66, *((_QWORD *)v133 + 2));
    }
    if ( *(_QWORD *)&v83[46] && !_InterlockedDecrement64(*(volatile signed __int64 **)&v83[46]) )
      sub_141243170(&v83[46]);
    if ( v63 != -1 )
    {
      v86.m256i_i64[0] = v62;
      v86.m256i_i64[1] = v62;
      v86.m256i_i64[2] = v63;
      v86.m256i_i64[3] = v62 + 24LL * (_QWORD)a3;
      sub_140718E60(&v104, &v86);
      v137 = 1;
      v134 = v105;
      sub_140E91160(v105, v106);
      if ( v68 )
      {
        v137 = 0;
        sub_14034DD60(&v86, &v104);
        *(_QWORD *)(a1 + 24) = v86.m256i_i64[2];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v86.m256i_i8;
        *(_QWORD *)a1 = 0;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v128) )
          sub_141243170(&v128);
        goto LABEL_80;
      }
      nullsub_1(v67);
      v73 = (void *)sub_140001650(30, 1);
      if ( !v73 )
      {
        v137 = 1;
        sub_141938D2B(1, 30);
      }
      qmemcpy(v73, "Claude returned empty response", 30);
      *(_QWORD *)(a1 + 8) = 30;
      *(_QWORD *)(a1 + 16) = v73;
      *(_QWORD *)(a1 + 24) = 30;
      *(_QWORD *)a1 = 1;
      v69 = v104;
      if ( v104 )
      {
        v70 = v134;
        goto LABEL_75;
      }
      goto LABEL_78;
    }
    *(_QWORD *)v118 = v62;
    *(_QWORD *)v74 = v118;
    *(_QWORD *)&v74[8] = sub_14122E940;
    sub_1416ABFD0(&v86, &unk_1419E6638, v74);
    sub_140192750(*(_QWORD *)v118);
    v71 = v86.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v86.m256i_i8;
    *(_QWORD *)(a1 + 24) = v71;
LABEL_77:
    *(_QWORD *)a1 = 1;
    goto LABEL_78;
  }
  LOWORD(v131) = v125[0];
  v86.m256i_i64[0] = *(_QWORD *)v118;
  *(_OWORD *)&v86.m256i_u64[1] = v108;
  v86.m256i_i64[3] = v109;
  v87 = v110;
  v88 = v111;
  v89 = v112;
  v90 = v113;
  v91 = v114;
  v92 = v125[0];
  v93 = v115;
  v94 = v116;
  v95[0] = v117[0];
  *(_QWORD *)((char *)v95 + 14) = *(_QWORD *)((char *)v117 + 14);
  sub_1412348B0(v74, &v86);
  if ( *(_QWORD *)v74 == -1 )
  {
    *(_QWORD *)v118 = 0;
    *(_QWORD *)&v118[8] = 1;
    *(_QWORD *)&v118[16] = 0;
    sub_140192750(*(_QWORD *)&v74[8]);
  }
  else
  {
    *(_QWORD *)&v118[16] = *(_QWORD *)&v74[16];
    *(_OWORD *)v118 = *(_OWORD *)v74;
  }
  v86.m256i_i64[0] = (__int64)&v131;
  v86.m256i_i64[1] = (__int64)sub_14164CC40;
  v86.m256i_i64[2] = (__int64)v118;
  v86.m256i_i64[3] = (__int64)sub_1400015F0;
  sub_1416ABFD0(&v99, &unk_1419E9C95, &v86);
  *(_QWORD *)(a1 + 24) = v100;
  *(_OWORD *)(a1 + 8) = v99;
  *(_QWORD *)a1 = 1;
  v69 = *(_QWORD *)v118;
  if ( *(_QWORD *)v118 )
  {
    v70 = *(_BYTE **)&v118[8];
LABEL_75:
    sub_140001660(v70, v69, 1);
  }
LABEL_78:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v128) )
    sub_141243170(&v128);
LABEL_80:
  sub_14002F9D0(v101);
  if ( v107[0] )
    sub_140001660(v107[1], v107[0], 1);
  return a1;
}
