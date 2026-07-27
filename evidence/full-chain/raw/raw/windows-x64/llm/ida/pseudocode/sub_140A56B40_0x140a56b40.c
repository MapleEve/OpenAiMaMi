// module: codexmate_lib/core/voice/llm
// addr: 0x140a56b40
// name: sub_140A56B40
// win 1.2.1 | module src/core/voice/llm.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140A56B40(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
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
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  _BYTE *v45; // rsi
  _DWORD *v46; // rax
  __int64 v47; // rcx
  _DWORD *v48; // rax
  __int64 v49; // rcx
  _DWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // rcx
  __int128 v56; // xmm0
  __int128 v57; // xmm0
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rsi
  __int128 v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rdx
  _BYTE *v71; // rcx
  __int64 v72; // rax
  void *v74; // rax
  _BYTE v75[24]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v76; // [rsp+78h] [rbp-8h]
  __int128 v77; // [rsp+80h] [rbp+0h]
  __int128 v78; // [rsp+90h] [rbp+10h]
  __int128 v79; // [rsp+A0h] [rbp+20h]
  __int128 v80; // [rsp+B0h] [rbp+30h]
  __int64 v81; // [rsp+C0h] [rbp+40h]
  __int16 v82; // [rsp+C8h] [rbp+48h]
  __int128 v83; // [rsp+CAh] [rbp+4Ah]
  _BYTE v84[54]; // [rsp+DAh] [rbp+5Ah] BYREF
  __int128 v85; // [rsp+400h] [rbp+380h]
  __int64 v86; // [rsp+410h] [rbp+390h]
  __m256i v87; // [rsp+418h] [rbp+398h] BYREF
  __int128 v88; // [rsp+438h] [rbp+3B8h]
  __int128 v89; // [rsp+448h] [rbp+3C8h]
  __int128 v90; // [rsp+458h] [rbp+3D8h]
  __int128 v91; // [rsp+468h] [rbp+3E8h]
  __int64 v92; // [rsp+478h] [rbp+3F8h]
  __int16 v93; // [rsp+480h] [rbp+400h]
  __int128 v94; // [rsp+482h] [rbp+402h]
  __m256i v95; // [rsp+492h] [rbp+412h]
  _OWORD v96[25]; // [rsp+4B2h] [rbp+432h]
  char v97; // [rsp+648h] [rbp+5C8h]
  __int64 v98; // [rsp+7A8h] [rbp+728h]
  int v99; // [rsp+7B0h] [rbp+730h]
  __int128 v100; // [rsp+7B8h] [rbp+738h] BYREF
  __int64 v101; // [rsp+7C8h] [rbp+748h]
  char v102[8]; // [rsp+7D0h] [rbp+750h] BYREF
  __int128 v103; // [rsp+7D8h] [rbp+758h]
  __int64 v104; // [rsp+7E8h] [rbp+768h]
  __int64 v105; // [rsp+7F0h] [rbp+770h] BYREF
  _BYTE *v106; // [rsp+7F8h] [rbp+778h]
  __int64 v107; // [rsp+800h] [rbp+780h]
  _QWORD v108[3]; // [rsp+808h] [rbp+788h] BYREF
  __int128 v109; // [rsp+820h] [rbp+7A0h]
  __int64 v110; // [rsp+830h] [rbp+7B0h]
  __int128 v111; // [rsp+840h] [rbp+7C0h] BYREF
  __int128 v112; // [rsp+850h] [rbp+7D0h]
  __int128 v113; // [rsp+860h] [rbp+7E0h]
  __int128 v114; // [rsp+870h] [rbp+7F0h]
  __int64 v115; // [rsp+880h] [rbp+800h]
  __int128 v116; // [rsp+890h] [rbp+810h] BYREF
  __m256i v117; // [rsp+8A0h] [rbp+820h]
  _OWORD v118[2]; // [rsp+8C0h] [rbp+840h]
  _BYTE v119[24]; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v120; // [rsp+8F8h] [rbp+878h]
  __int128 v121; // [rsp+900h] [rbp+880h]
  __int128 v122; // [rsp+910h] [rbp+890h]
  __int128 v123; // [rsp+920h] [rbp+8A0h]
  __int128 v124; // [rsp+930h] [rbp+8B0h]
  __int64 v125; // [rsp+940h] [rbp+8C0h]
  _WORD v126[9]; // [rsp+948h] [rbp+8C8h]
  __m256i v127; // [rsp+95Ah] [rbp+8DAh]
  _BYTE v128[22]; // [rsp+97Ah] [rbp+8FAh]
  __int128 v129; // [rsp+990h] [rbp+910h] BYREF
  __int64 v130; // [rsp+9A0h] [rbp+920h]
  __int64 v131; // [rsp+9A8h] [rbp+928h] BYREF
  __int128 v132; // [rsp+9B0h] [rbp+930h] BYREF
  __int64 v133; // [rsp+9C0h] [rbp+940h]
  _DWORD *v134; // [rsp+9C8h] [rbp+948h]
  _BYTE *v135; // [rsp+9D0h] [rbp+950h]
  char v136; // [rsp+9DBh] [rbp+95Bh]
  char v137; // [rsp+9DCh] [rbp+95Ch]
  char v138; // [rsp+9DDh] [rbp+95Dh]
  char v139; // [rsp+9DEh] [rbp+95Eh]
  char v140; // [rsp+9DFh] [rbp+95Fh]
  __int64 v141; // [rsp+9E0h] [rbp+960h]

  v141 = -2;
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
  *(_QWORD *)v75 = v8;
  *(_QWORD *)&v75[8] = v10;
  v87.m256i_i64[0] = (__int64)v75;
  v87.m256i_i64[1] = (__int64)sub_14041F680;
  sub_14149C0F0(v108, &unk_1417A9191, &v87);
  *(_QWORD *)&v132 = 0;
  v133 = 0;
  nullsub_1(v19);
  v20 = sub_140001650(5, 1);
  if ( !v20 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v20 + 4) = 108;
  *(_DWORD *)v20 = 1701080941;
  *(_QWORD *)v119 = 5;
  *(_QWORD *)&v119[8] = v20;
  *(_QWORD *)&v119[16] = 5;
  v21 = v6[7];
  v22 = v6[8];
  v140 = 1;
  v23 = sub_14033BC10(v21, v22);
  v26 = v24;
  if ( v24 < 0 )
  {
    v27 = 0;
    goto LABEL_15;
  }
  if ( v24 )
  {
    v135 = v6;
    v28 = a4;
    v29 = a3;
    v30 = a1;
    v31 = v23;
    nullsub_1(v25);
    v27 = 1;
    v32 = sub_140001650(v26, 1);
    if ( !v32 )
    {
LABEL_15:
      v140 = 1;
      sub_1416C2D4B(v27, v26);
    }
    v33 = v32;
    sub_141684120(v32, v31, v26);
    a1 = v30;
    a3 = v29;
    a4 = v28;
    v6 = v135;
  }
  else
  {
    v33 = 1;
  }
  v87.m256i_i8[0] = 3;
  v87.m256i_i64[1] = v26;
  v87.m256i_i64[2] = v33;
  v87.m256i_i64[3] = v26;
  v140 = 0;
  sub_140307860(v75, &v132, v119, &v87);
  if ( v75[0] != 0xFF )
    sub_1400104F0(v75);
  nullsub_1(v34);
  v35 = (void *)sub_140001650(10, 1);
  if ( !v35 )
    sub_1416C2D4B(1, 10);
  qmemcpy(v35, "max_tokens", 10);
  *(_QWORD *)v119 = 10;
  *(_QWORD *)&v119[8] = v35;
  *(_QWORD *)&v119[16] = 10;
  v87.m256i_i8[0] = 2;
  v87.m256i_i64[1] = 0;
  v87.m256i_i64[2] = 4096;
  sub_140307860(v75, &v132, v119, &v87);
  if ( v75[0] != 0xFF )
    sub_1400104F0(v75);
  nullsub_1(v36);
  v37 = sub_140001650(6, 1);
  if ( !v37 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v37 + 4) = 28005;
  *(_DWORD *)v37 = 1953724787;
  *(_QWORD *)v119 = 6;
  *(_QWORD *)&v119[8] = v37;
  *(_QWORD *)&v119[16] = 6;
  nullsub_1(v38);
  v39 = sub_140001650(222, 1);
  v135 = (_BYTE *)v39;
  if ( !v39 )
    sub_1416C2D4B(1, 222);
  v40 = v39;
  sub_141684120(v39, asc_1417A3E19, 222);
  v87.m256i_i8[0] = 3;
  v87.m256i_i64[1] = 222;
  v87.m256i_i64[2] = v40;
  v87.m256i_i64[3] = 222;
  sub_140307860(v75, &v132, v119, &v87);
  if ( v75[0] != 0xFF )
    sub_1400104F0(v75);
  nullsub_1(v41);
  v42 = (_QWORD *)sub_140001650(8, 1);
  if ( !v42 )
    sub_1416C2D4B(1, 8);
  *v42 = 0x736567617373656DLL;
  *(_QWORD *)&v116 = 8;
  *((_QWORD *)&v116 + 1) = v42;
  v117.m256i_i64[0] = 8;
  nullsub_1(0x736567617373656DLL);
  v43 = sub_140001650(32, 8);
  if ( !v43 )
  {
    v139 = 1;
    sub_1416C2D31(8, 32);
  }
  v45 = (_BYTE *)v43;
  *(_QWORD *)&v111 = 0;
  *(_QWORD *)&v112 = 0;
  nullsub_1(v44);
  v46 = (_DWORD *)sub_140001650(4, 1);
  v135 = v45;
  if ( !v46 )
    sub_1416C2D4B(1, 4);
  *v46 = 1701605234;
  *(_QWORD *)v119 = 4;
  *(_QWORD *)&v119[8] = v46;
  *(_QWORD *)&v119[16] = 4;
  nullsub_1(v47);
  v48 = (_DWORD *)sub_140001650(4, 1);
  v134 = v48;
  if ( !v48 )
    sub_1416C2D4B(1, 4);
  *v48 = 1919251317;
  v87.m256i_i8[0] = 3;
  v87.m256i_i64[1] = 4;
  v87.m256i_i64[2] = (__int64)v48;
  v87.m256i_i64[3] = 4;
  sub_140307860(v75, &v111, v119, &v87);
  if ( v75[0] != 0xFF )
    sub_1400104F0(v75);
  nullsub_1(v49);
  v50 = (_DWORD *)sub_140001650(7, 1);
  if ( !v50 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v50 + 3) = 1953391988;
  *v50 = 1953394531;
  *(_QWORD *)v119 = 7;
  *(_QWORD *)&v119[8] = v50;
  *(_QWORD *)&v119[16] = 7;
  if ( a4 < 0 )
  {
    v52 = 0;
    goto LABEL_38;
  }
  if ( a4 )
  {
    nullsub_1(v51);
    v52 = 1;
    v53 = sub_140001650(a4, 1);
    if ( !v53 )
    {
LABEL_38:
      v137 = 1;
      sub_1416C2D4B(v52, a4);
    }
    v54 = v53;
    sub_141684120(v53, a3, a4);
  }
  else
  {
    v54 = 1;
  }
  v87.m256i_i8[0] = 3;
  v87.m256i_i64[1] = a4;
  v87.m256i_i64[2] = v54;
  v87.m256i_i64[3] = a4;
  v137 = 0;
  sub_140307860(v75, &v111, v119, &v87);
  if ( v75[0] != 0xFF )
    sub_1400104F0(v75);
  *(_OWORD *)((char *)&v87.m256i_u32[1] + 3) = v111;
  *(__int64 *)((char *)&v87.m256i_i64[2] + 7) = v112;
  v55 = (__int64)v135;
  *v135 = 5;
  v56 = *(_OWORD *)v87.m256i_i8;
  *(_OWORD *)(v55 + 16) = *(_OWORD *)((char *)&v87.m256i_u64[1] + 7);
  *(_OWORD *)(v55 + 1) = v56;
  v87.m256i_i64[1] = 1;
  v87.m256i_i64[2] = v55;
  v87.m256i_i64[3] = 1;
  v87.m256i_i8[0] = 4;
  v139 = 0;
  sub_140307860(v75, &v132, &v116, &v87);
  if ( v75[0] != 0xFF )
    sub_1400104F0(v75);
  v103 = v132;
  v104 = v133;
  v102[0] = 5;
  sub_141069E60(&v87);
  v98 = 60;
  v99 = 0;
  sub_141684120(v75, &v87, 928);
  sub_141068AB0(v119, v75);
  if ( *(_DWORD *)&v119[16] == -2 )
  {
    *(_QWORD *)&v132 = *(_QWORD *)v119;
    *(_QWORD *)v75 = &v132;
    *(_QWORD *)&v75[8] = sub_141031F10;
    sub_14149C0F0(&v87, &unk_1417A48B8, v75);
    sub_140528900(v132);
    v57 = *(_OWORD *)v87.m256i_i8;
    v116 = *(_OWORD *)v87.m256i_i8;
    v117.m256i_i64[0] = v87.m256i_i64[2];
    *(_QWORD *)(a1 + 24) = v87.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = v57;
    *(_QWORD *)a1 = 1;
    goto LABEL_80;
  }
  v129 = *(_OWORD *)v119;
  v130 = *(_QWORD *)&v119[16];
  sub_14097EE10((__int64)&v87, (__int64)&v129, byte_1417A3F68, (__int64)v108);
  v58 = v6[4];
  v59 = v6[5];
  v136 = 1;
  v60 = sub_14033BC10(v58, v59);
  v136 = 0;
  sub_1406C7070((unsigned int)v75, (unsigned int)&v87, (unsigned int)aXApiKey_1, 9, v60, v61, 0);
  sub_1406C7070(
    (unsigned int)&v87,
    (unsigned int)v75,
    (unsigned int)aAnthropicVersi_0,
    17,
    (__int64)&unk_1417A91B7,
    10,
    0);
  sub_1406C7070((unsigned int)v75, (unsigned int)&v87, (unsigned int)aContentType, 12, (__int64)&unk_1417A3F8C, 16, 0);
  sub_1406C8270(&v87, v75, v102);
  sub_14103CF70(v119, &v87);
  if ( *(_QWORD *)v119 == -1 )
  {
    v131 = *(_QWORD *)&v119[8];
    *(_QWORD *)v75 = &v131;
    *(_QWORD *)&v75[8] = sub_141031F10;
    sub_14149C0F0(&v87, &unk_1417A5424, v75);
    sub_140528900(v131);
    v65 = *(_OWORD *)v87.m256i_i8;
    v85 = *(_OWORD *)v87.m256i_i8;
    v86 = v87.m256i_i64[2];
    *(_QWORD *)(a1 + 24) = v87.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = v65;
    goto LABEL_77;
  }
  v133 = v120;
  v132 = *(_OWORD *)&v119[8];
  v111 = v121;
  v112 = v122;
  v113 = v123;
  v114 = v124;
  v115 = v125;
  v116 = *(_OWORD *)&v126[1];
  v117 = v127;
  v118[0] = *(_OWORD *)v128;
  *(_QWORD *)((char *)v118 + 14) = *(_QWORD *)&v128[14];
  v109 = *(_OWORD *)&v119[8];
  v110 = v120;
  if ( (unsigned __int16)(v126[0] - 200) < 0x64u )
  {
    *(_QWORD *)v75 = *(_QWORD *)v119;
    *(_OWORD *)&v75[8] = v109;
    v76 = v110;
    v77 = v111;
    v78 = v112;
    v79 = v113;
    v80 = v114;
    v81 = v115;
    v82 = v126[0];
    v83 = v116;
    *(__m256i *)v84 = v117;
    *(_OWORD *)&v84[32] = v118[0];
    *(_QWORD *)&v84[46] = *(_QWORD *)((char *)v118 + 14);
    sub_141684120(&v87, v75, 136);
    v97 = 0;
    sub_140690750(v119, &v87, *(_QWORD *)&v84[14], *(unsigned int *)&v84[22]);
    v63 = *(_QWORD *)&v119[8];
    v64 = *(_QWORD *)v119;
    if ( *(_QWORD *)v119 == -1 )
    {
      if ( !*(_QWORD *)&v119[8] )
      {
        WORD4(v91) = 5;
        *(__int64 *)((char *)v95.m256i_i64 + 6) = 1;
        *(__int64 *)((char *)&v95.m256i_i64[1] + 6) = (__int64)&unk_1417A10F8;
        v87.m256i_i64[0] = -1;
        nullsub_1(v62);
        v66 = sub_140001650(144, 8);
        if ( !v66 )
          sub_1416C2D31(8, 144);
        v63 = v66;
        sub_141684120(v66, &v87, 144);
      }
    }
    else
    {
      a3 = *(_QWORD *)&v119[16];
    }
    v135 = *(_BYTE **)&v84[30];
    if ( *(_QWORD *)&v84[30] )
    {
      v134 = *(_DWORD **)&v84[38];
      if ( **(_QWORD **)&v84[38] )
        (**(void (__fastcall ***)(_BYTE *))&v84[38])(v135);
      v67 = *((_QWORD *)v134 + 1);
      if ( v67 )
        sub_140001660(v135, v67, *((_QWORD *)v134 + 2));
    }
    if ( *(_QWORD *)&v84[46] && !_InterlockedDecrement64(*(volatile signed __int64 **)&v84[46]) )
      sub_141018DA0(&v84[46]);
    if ( v64 != -1 )
    {
      v87.m256i_i64[0] = v63;
      v87.m256i_i64[1] = v63;
      v87.m256i_i64[2] = v64;
      v87.m256i_i64[3] = v63 + 24 * a3;
      sub_140958B60(&v105, &v87);
      v138 = 1;
      v135 = v106;
      sub_14033BC10(v106, v107);
      if ( v69 )
      {
        v138 = 0;
        sub_140A594E0(&v87, &v105);
        *(_QWORD *)(a1 + 24) = v87.m256i_i64[2];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v87.m256i_i8;
        *(_QWORD *)a1 = 0;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v129) )
          sub_141018DA0(&v129);
        goto LABEL_80;
      }
      nullsub_1(v68);
      v74 = (void *)sub_140001650(30, 1);
      if ( !v74 )
      {
        v138 = 1;
        sub_1416C2D4B(1, 30);
      }
      qmemcpy(v74, "Claude returned empty response", 30);
      *(_QWORD *)(a1 + 8) = 30;
      *(_QWORD *)(a1 + 16) = v74;
      *(_QWORD *)(a1 + 24) = 30;
      *(_QWORD *)a1 = 1;
      v70 = v105;
      if ( v105 )
      {
        v71 = v135;
        goto LABEL_75;
      }
      goto LABEL_78;
    }
    *(_QWORD *)v119 = v63;
    *(_QWORD *)v75 = v119;
    *(_QWORD *)&v75[8] = sub_141031F10;
    sub_14149C0F0(&v87, &unk_1417A5404, v75);
    sub_140528900(*(_QWORD *)v119);
    v72 = v87.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v87.m256i_i8;
    *(_QWORD *)(a1 + 24) = v72;
LABEL_77:
    *(_QWORD *)a1 = 1;
    goto LABEL_78;
  }
  LOWORD(v132) = v126[0];
  v87.m256i_i64[0] = *(_QWORD *)v119;
  *(_OWORD *)&v87.m256i_u64[1] = v109;
  v87.m256i_i64[3] = v110;
  v88 = v111;
  v89 = v112;
  v90 = v113;
  v91 = v114;
  v92 = v115;
  v93 = v126[0];
  v94 = v116;
  v95 = v117;
  v96[0] = v118[0];
  *(_QWORD *)((char *)v96 + 14) = *(_QWORD *)((char *)v118 + 14);
  sub_14101E160(v75, &v87);
  if ( *(_QWORD *)v75 == -1 )
  {
    *(_QWORD *)v119 = 0;
    *(_QWORD *)&v119[8] = 1;
    *(_QWORD *)&v119[16] = 0;
    sub_140528900(*(_QWORD *)&v75[8]);
  }
  else
  {
    *(_QWORD *)&v119[16] = *(_QWORD *)&v75[16];
    *(_OWORD *)v119 = *(_OWORD *)v75;
  }
  v87.m256i_i64[0] = (__int64)&v132;
  v87.m256i_i64[1] = (__int64)sub_14143ED80;
  v87.m256i_i64[2] = (__int64)v119;
  v87.m256i_i64[3] = (__int64)sub_1400015F0;
  sub_14149C0F0(&v100, &unk_1417A91C1, &v87);
  *(_QWORD *)(a1 + 24) = v101;
  *(_OWORD *)(a1 + 8) = v100;
  *(_QWORD *)a1 = 1;
  v70 = *(_QWORD *)v119;
  if ( *(_QWORD *)v119 )
  {
    v71 = *(_BYTE **)&v119[8];
LABEL_75:
    sub_140001660(v71, v70, 1);
  }
LABEL_78:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v129) )
    sub_141018DA0(&v129);
LABEL_80:
  sub_1400104F0(v102);
  if ( v108[0] )
    sub_140001660(v108[1], v108[0], 1);
  return a1;
}