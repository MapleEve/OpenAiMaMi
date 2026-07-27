// module: codexmate_lib/core/voice/runtime
// addr: 0x1408887a0
// name: sub_1408887A0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_1408887A0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  char result; // al
  char v12; // bl
  volatile signed __int64 **v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  char *v20; // rbx
  __int64 v21; // rcx
  __int64 *v22; // r15
  char v23; // al
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  signed __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // rdx
  _BYTE *v44; // rdi
  unsigned int v45; // edx
  unsigned __int64 v46; // rax
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int128 v49; // xmm3
  __int128 v50; // xmm4
  __int128 v51; // xmm5
  __int128 v52; // xmm6
  volatile signed __int64 *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int128 *v56; // rdi
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int64 v59; // rax
  __int64 v60; // rdi
  char v61; // of
  volatile signed __int64 *v62; // rbx
  __int64 v63; // rt0
  volatile signed __int64 *v64; // r14
  __int64 v65; // rt0
  __int64 v66; // r15
  __int64 *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  char v70; // bl
  __int64 v71; // rax
  void *v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rdi
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rsi
  __int64 v79; // rdi
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rbx
  __int64 v85; // r14
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // rdi
  int v89; // eax
  __int64 *v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // rdi
  char *v93; // r14
  __int64 v94; // rcx
  __int64 *v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  char v98; // al
  char *v99; // rsi
  char v100; // al
  __int64 v101; // rdx
  unsigned int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rdx
  signed __int64 v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // r14
  char v109; // al
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 *v112; // rcx
  __int64 v113; // rax
  char v114; // al
  __int64 v115; // rsi
  __int64 *v116; // rcx
  volatile signed __int64 **v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int128 v123; // [rsp+30h] [rbp-50h]
  __int128 v124; // [rsp+40h] [rbp-40h]
  __int128 v125; // [rsp+50h] [rbp-30h]
  __int128 v126; // [rsp+60h] [rbp-20h]
  __int64 v127; // [rsp+70h] [rbp-10h]
  __m256i v128; // [rsp+80h] [rbp+0h] BYREF
  __int128 v129; // [rsp+A0h] [rbp+20h]
  __int128 v130; // [rsp+B0h] [rbp+30h]
  __int128 v131; // [rsp+C0h] [rbp+40h]
  __int128 v132; // [rsp+D0h] [rbp+50h]
  __int128 v133; // [rsp+E0h] [rbp+60h]
  volatile signed __int64 *v134; // [rsp+108h] [rbp+88h]
  volatile signed __int64 *v135; // [rsp+110h] [rbp+90h]
  __int64 v136; // [rsp+118h] [rbp+98h]
  __int64 v137; // [rsp+120h] [rbp+A0h]
  char v138; // [rsp+298h] [rbp+218h]
  __m256i v139; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v140; // [rsp+2C0h] [rbp+240h]
  __int128 v141; // [rsp+2D0h] [rbp+250h]
  __int128 v142; // [rsp+2E0h] [rbp+260h]
  __int128 v143; // [rsp+2F0h] [rbp+270h]
  __int128 v144; // [rsp+300h] [rbp+280h]
  __int64 v145; // [rsp+328h] [rbp+2A8h]
  __int128 v146; // [rsp+330h] [rbp+2B0h]
  __int64 v147; // [rsp+340h] [rbp+2C0h]
  __int128 v148; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v149; // [rsp+360h] [rbp+2E0h]
  __int64 v150; // [rsp+368h] [rbp+2E8h]
  char v151; // [rsp+377h] [rbp+2F7h] BYREF
  volatile signed __int64 **v152; // [rsp+378h] [rbp+2F8h]
  __int64 v153; // [rsp+380h] [rbp+300h]
  __int64 v154; // [rsp+388h] [rbp+308h]

  v154 = -2;
  v3 = *(__int64 **)(a1 + 8);
  if ( !(unsigned __int8)sub_1413057F0(**(_QWORD **)a1, a2) )
    return 0;
  v7 = *v3;
  v8 = *(unsigned __int8 *)(*v3 + 410);
  v153 = *v3;
  switch ( v8 )
  {
    case 0LL:
      *(_WORD *)(v7 + 413) = 0;
      *(_BYTE *)(v7 + 415) = 1;
      v152 = *(volatile signed __int64 ***)v7;
      v150 = *(_QWORD *)(v7 + 8);
      v9 = *(_QWORD *)(v7 + 16);
      sub_14149C500(&v139, *(_QWORD *)(v7 + 48));
      sub_14149C500(&v128, *(_QWORD *)(v7 + 56));
      *(_BYTE *)(v7 + 415) = 0;
      *(_QWORD *)(v7 + 96) = v152;
      *(_QWORD *)(v7 + 104) = v150;
      *(_QWORD *)(v7 + 112) = v9;
      *(_OWORD *)(v7 + 120) = *(_OWORD *)v139.m256i_i8;
      *(_QWORD *)(v7 + 136) = v139.m256i_i64[2];
      *(_OWORD *)(v7 + 144) = *(_OWORD *)v128.m256i_i8;
      *(_QWORD *)(v7 + 160) = v128.m256i_i64[2];
      *(_OWORD *)(v7 + 168) = *(_OWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 184) = *(_QWORD *)(v7 + 40);
      *(_DWORD *)(v7 + 192) = 16000;
      *(_QWORD *)(v7 + 872) = v7 + 96;
      *(_BYTE *)(v7 + 892) = 0;
      goto LABEL_4;
    case 1LL:
      sub_1416C3400(&off_141795270, v4, v5, v6);
    case 2LL:
      sub_1416C3420(&off_141795270, v4, v5, v6);
    case 3LL:
LABEL_4:
      v152 = (volatile signed __int64 **)(v7 + 416);
      hbb4b340bd79fba8f_1(&v128, v7 + 416, a2);
      v10 = v128.m256i_i64[0];
      if ( v128.m256i_i64[0] == -2 )
      {
        result = 2;
        v12 = 3;
LABEL_88:
        v87 = v153;
        goto LABEL_171;
      }
      v147 = v128.m256i_i64[3];
      v146 = *(_OWORD *)&v128.m256i_u64[1];
      v123 = v129;
      v124 = v130;
      v125 = v131;
      v126 = v132;
      v127 = v133;
      v13 = v152;
      sub_1407D8530(v152);
      if ( v10 == -1 )
      {
        v149 = v147;
        v148 = v146;
        v29 = *(_QWORD *)(v153 + 72);
        v30 = **(_QWORD **)(v153 + 64);
        v31 = **(_QWORD **)(v153 + 80);
        v139.m256i_i64[0] = (__int64)&v148;
        v139.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_14149C0F0(&v128, &unk_1417952A0, &v139);
        *(_OWORD *)v139.m256i_i8 = *(_OWORD *)v128.m256i_i8;
        v139.m256i_i64[2] = v128.m256i_i64[2];
        sub_140885540(v29, v30, 1, v31, &v139);
        if ( (_QWORD)v148 )
          sub_140001660(*((_QWORD *)&v148 + 1), v148, 1);
        goto LABEL_162;
      }
      v14 = v153;
      v15 = v153 + 200;
      *(_QWORD *)(v153 + 200) = v10;
      *(_OWORD *)(v14 + 208) = v146;
      *(_QWORD *)(v14 + 224) = v147;
      *(_OWORD *)(v14 + 232) = v123;
      *(_OWORD *)(v14 + 248) = v124;
      *(_OWORD *)(v14 + 264) = v125;
      *(_OWORD *)(v14 + 280) = v126;
      *(_QWORD *)(v14 + 296) = v127;
      v16 = sub_140AD0A60(v15);
      v17 = v153;
      *(_QWORD *)(v153 + 304) = v16;
      *(_BYTE *)(v17 + 413) = 1;
      v19 = sub_1400640A0(*(_QWORD *)(v17 + 72));
      *(_QWORD *)(v153 + 320) = v19;
      v20 = (char *)(v19 + 32);
      LOBYTE(v21) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v19 + 32), 1, 0) )
        sub_1416C15B0(v20);
      v22 = off_141EC90B8;
      if ( 2 * *off_141EC90B8 )
      {
        v23 = sub_1416C2250(v21, v18) ^ 1;
        v24 = *(unsigned __int8 *)(v19 + 33);
        if ( (_BYTE)v24 )
        {
LABEL_12:
          if ( !v23 && 2 * *v22 && !(unsigned __int8)sub_1416C2250(v24, v18) )
            *(_BYTE *)(v19 + 33) = 1;
          v25 = *v20;
          *v20 = 0;
          if ( v25 == 2 )
            WakeByAddressSingle(v20);
          v7 = v153;
          *(_QWORD *)(v153 + 416) = v15;
          *(_BYTE *)(v7 + 624) = 0;
LABEL_17:
          v152 = (volatile signed __int64 **)(v7 + 416);
          sub_1408339A0(&v128, v7 + 416, a2);
          v26 = v128.m256i_i64[0];
          if ( v128.m256i_i64[0] == -2 )
          {
            result = 2;
            v12 = 4;
            goto LABEL_88;
          }
          v27 = v128.m256i_i64[1];
          if ( *(_BYTE *)(v153 + 624) != 3 )
            goto LABEL_29;
          v28 = *(unsigned __int8 *)(v153 + 504);
          if ( v28 != 5 )
          {
            if ( v28 == 4 )
            {
              sub_1405E6D10(v153 + 512);
            }
            else
            {
              if ( v28 != 3 )
                goto LABEL_29;
              if ( *(_QWORD *)(v153 + 512) != -1 )
                sub_14052DEF0(v153 + 512);
            }
          }
          sub_1400104F0(v153 + 472);
LABEL_29:
          if ( v26 > 0 )
            sub_140001660(v27, v26, 1);
LABEL_158:
          if ( *(_BYTE *)(v153 + 413) )
          {
            v152 = (volatile signed __int64 **)(v153 + 304);
            sub_140893210(v153 + 304);
            v117 = v152;
            if ( !_InterlockedDecrement64(*v152) )
              sub_140574470(v117);
          }
          v118 = v153;
          *(_BYTE *)(v153 + 413) = 0;
          sub_1407DB4B0(v118 + 200);
LABEL_162:
          v87 = v153;
          v119 = *(_QWORD *)(v153 + 96);
          if ( v119 )
            sub_140001660(*(_QWORD *)(v153 + 104), v119, 1);
          v120 = *(_QWORD *)(v87 + 120);
          if ( v120 )
            sub_140001660(*(_QWORD *)(v87 + 128), v120, 1);
          v121 = *(_QWORD *)(v87 + 144);
          if ( v121 )
            sub_140001660(*(_QWORD *)(v87 + 152), v121, 1);
          v122 = *(_QWORD *)(v87 + 168);
          v12 = 1;
          if ( v122 )
            sub_140001660(*(_QWORD *)(v87 + 176), v122, 1);
          goto LABEL_170;
        }
      }
      else
      {
        v23 = 0;
        v24 = *(unsigned __int8 *)(v19 + 33);
        if ( (_BYTE)v24 )
          goto LABEL_12;
      }
      v7 = v153;
      *(_QWORD *)(v153 + 632) = v20;
      *(_BYTE *)(v7 + 640) = v23;
      v32 = **(_QWORD **)(v7 + 80);
      if ( *(_QWORD *)(v19 + 832) != v32
        || qword_141EC9338 != v32
        || (v33 = **(_QWORD **)(v7 + 64)) == 0
        || (v34 = *(_QWORD *)(v7 + 632), *(_QWORD *)(v34 + 808) != v33)
        || *(_BYTE *)(v34 + 835) != 1 )
      {
        *(_QWORD *)(v7 + 416) = v15;
        *(_BYTE *)(v7 + 624) = 0;
LABEL_77:
        v152 = (volatile signed __int64 **)(v7 + 416);
        sub_1408339A0(&v128, v7 + 416, a2);
        v78 = v128.m256i_i64[0];
        if ( v128.m256i_i64[0] == -2 )
        {
          result = 2;
          v12 = 5;
          goto LABEL_88;
        }
        v79 = v128.m256i_i64[1];
        if ( *(_BYTE *)(v153 + 624) != 3 )
          goto LABEL_109;
        v80 = *(unsigned __int8 *)(v153 + 504);
        if ( v80 != 5 )
        {
          if ( v80 == 4 )
          {
            sub_1405E6D10(v153 + 512);
          }
          else
          {
            if ( v80 != 3 )
            {
LABEL_109:
              if ( v78 > 0 )
                sub_140001660(v79, v78, 1);
              v99 = *(char **)(v153 + 632);
              if ( !*(_BYTE *)(v153 + 640) && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v77, v76) )
                v99[1] = 1;
              v100 = *v99;
              *v99 = 0;
              if ( v100 == 2 )
                WakeByAddressSingle(v99);
              goto LABEL_158;
            }
            if ( *(_QWORD *)(v153 + 512) != -1 )
              sub_14052DEF0(v153 + 512);
          }
        }
        sub_1400104F0(v153 + 472);
        goto LABEL_109;
      }
      v35 = _InterlockedIncrement64(&qword_141EC9338);
      *(_QWORD *)(*(_QWORD *)(v7 + 632) + 800LL) = v35;
      *(_BYTE *)(*(_QWORD *)(v7 + 632) + 835LL) = 2;
      v36 = *(_QWORD *)(v7 + 632);
      v37 = *(_QWORD *)(v36 + 640);
      if ( v37 != -1 && v37 )
        sub_140001660(*(_QWORD *)(v36 + 648), v37, 1);
      *(_QWORD *)(v36 + 640) = -1;
      v38 = *(_QWORD *)(v7 + 632);
      v39 = *(_QWORD *)(v38 + 616);
      if ( v39 != -1 && v39 )
        sub_140001660(*(_QWORD *)(v38 + 624), v39, 1);
      *(_QWORD *)(v38 + 616) = -1;
      *(_QWORD *)(v7 + 312) = v35;
      sub_14000E270(*(_QWORD *)(v7 + 632), *(unsigned __int8 *)(v7 + 640));
      v40 = sub_1400640A0(*(_QWORD *)(v153 + 72));
      sub_140B93B50(&v128, v40 + 32);
      sub_140682760((__int64)&v139, (__int64)&v128);
      v128.m256i_i8[2] = 2;
      v128.m256i_i16[0] = -1;
      v128.m256i_i32[4] = -1;
      sub_1406AD5A0((__int64)&v148, (__int64)&v139, (__int64)&v128);
      v41 = v153;
      *(_BYTE *)(v153 + 411) = BYTE2(v148);
      *(_WORD *)(v41 + 408) = v148;
      v42 = v149;
      *(_QWORD *)(v41 + 328) = *((_QWORD *)&v148 + 1);
      *(_DWORD *)(v41 + 336) = v42;
      show_voice_overlay(*(_QWORD *)(v41 + 72));
      LOBYTE(v43) = 1;
      sub_14025D570(*(_QWORD *)(v153 + 72), v43);
      v44 = (_BYTE *)(v153 + 411);
      sub_140662590(*(unsigned __int8 *)(v153 + 411));
      if ( *(_WORD *)(v153 + 408) < 0x65u && *(_DWORD *)(v153 + 336) != -1 )
      {
        v46 = sub_140656A30(v44, v45);
        if ( v46 )
        {
          sub_1412F1530(&v128, v46 / 0x3E8, 1000000 * (unsigned int)(v46 % 0x3E8), &off_141795288);
          v144 = v133;
          v47 = v132;
          v143 = v132;
          v48 = v131;
          v142 = v131;
          v49 = *(_OWORD *)v128.m256i_i8;
          v50 = *(_OWORD *)&v128.m256i_u64[2];
          v51 = v129;
          v52 = v130;
          v141 = v130;
          v140 = v129;
          v139 = v128;
          *((_OWORD *)v13 + 6) = v133;
          *((_OWORD *)v13 + 5) = v47;
          *((_OWORD *)v13 + 4) = v48;
          *((_OWORD *)v13 + 3) = v52;
          *((_OWORD *)v13 + 2) = v51;
          *((_OWORD *)v13 + 1) = v50;
          *(_OWORD *)v13 = v49;
          v7 = v153;
LABEL_47:
          v152 = (volatile signed __int64 **)(v7 + 416);
          if ( (unsigned __int8)sub_1412F1D10(v7 + 416, a2) )
          {
            result = 2;
            v12 = 6;
            goto LABEL_88;
          }
          sub_1405E6D10(v152);
        }
        if ( *(_WORD *)(v153 + 408) <= 0x64u )
          sub_1401B8C50();
      }
      sub_140873770(&v128, *(_QWORD *)(v153 + 72));
      if ( v128.m256i_i64[0] != -1 && v128.m256i_i64[0] )
        sub_140001660(v128.m256i_i64[1], v128.m256i_i64[0], 1);
      v53 = sub_1407DC880(64, (__int64)&off_1417952B8);
      *(_QWORD *)&v148 = v53;
      v54 = v153;
      *(_QWORD *)(v153 + 344) = v55;
      *(_BYTE *)(v54 + 414) = 0;
      v56 = (__int128 *)(v54 + 656);
      sub_1408858D0(v54 + 656, v53);
      if ( *(_DWORD *)v56 == -1 )
      {
        v81 = v153;
        v82 = v153 + 416;
        *(_QWORD *)(v153 + 432) = *(_QWORD *)(v153 + 680);
        *(_OWORD *)(v81 + 416) = *(_OWORD *)(v81 + 664);
        v83 = *(_QWORD *)(v81 + 72);
        v84 = **(_QWORD **)(v81 + 64);
        v85 = *(_QWORD *)(v81 + 312);
        v139.m256i_i64[0] = v82;
        v139.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_14149C0F0(&v128, &unk_1417952E8, &v139);
        *(_OWORD *)v139.m256i_i8 = *(_OWORD *)v128.m256i_i8;
        v139.m256i_i64[2] = v128.m256i_i64[2];
        sub_140885540(v83, v84, 1, v85, &v139);
        v7 = v153;
        *(_QWORD *)(v153 + 440) = v153 + 200;
        *(_BYTE *)(v7 + 648) = 0;
LABEL_86:
        v152 = (volatile signed __int64 **)(v7 + 440);
        sub_1408339A0(&v128, v7 + 440, a2);
        v86 = v128.m256i_i64[0];
        if ( v128.m256i_i64[0] == -2 )
        {
          result = 2;
          v12 = 7;
          goto LABEL_88;
        }
        v88 = v128.m256i_i64[1];
        if ( *(_BYTE *)(v153 + 648) != 3 )
          goto LABEL_117;
        v89 = *(unsigned __int8 *)(v153 + 528);
        if ( v89 != 5 )
        {
          if ( v89 == 4 )
          {
            sub_1405E6D10(v153 + 536);
          }
          else
          {
            if ( v89 != 3 )
            {
LABEL_117:
              if ( v86 > 0 )
                sub_140001660(v88, v86, 1);
              v101 = *(_QWORD *)(v153 + 416);
              if ( v101 )
                sub_140001660(*(_QWORD *)(v153 + 424), v101, 1);
              goto LABEL_155;
            }
            if ( *(_QWORD *)(v153 + 536) != -1 )
              sub_14052DEF0(v153 + 536);
          }
        }
        sub_1400104F0(v153 + 496);
        goto LABEL_117;
      }
      v57 = *v56;
      v58 = v56[1];
      v59 = v153;
      *(_OWORD *)(v153 + 384) = v56[2];
      *(_OWORD *)(v59 + 368) = v58;
      *(_OWORD *)(v59 + 352) = v57;
      v60 = *(_QWORD *)(v59 + 72);
      sub_1401C50B0(&v139, v60);
      v62 = *(volatile signed __int64 **)(v60 + 136);
      v63 = _InterlockedIncrement64(v62);
      if ( (v63 < 0) ^ v61 | (v63 == 0)
        || (v64 = *(volatile signed __int64 **)(v60 + 144),
            v65 = _InterlockedIncrement64(v64),
            v66 = v153,
            (v65 < 0) ^ v61 | (v65 == 0)) )
      {
        BUG();
      }
      sub_141684120(&v128, &v139, 136);
      v67 = *(__int64 **)(v66 + 64);
      *(_BYTE *)(v66 + 413) = 0;
      v134 = v62;
      v135 = v64;
      v136 = *(_QWORD *)(v66 + 304);
      v137 = *v67;
      v138 = 0;
      v68 = sub_14054DDD0(&v128, &off_1417952D0);
      v7 = v153;
      v69 = v153 + 344;
      *(_QWORD *)(v153 + 400) = v68;
      *(_BYTE *)(v7 + 412) = 0;
      *(_QWORD *)(v7 + 416) = *(_QWORD *)(v7 + 88);
      *(_BYTE *)(v7 + 424) = 0;
      *(_QWORD *)(v7 + 544) = v69;
      *(_QWORD *)(v7 + 552) = v7 + 200;
      *(_BYTE *)(v7 + 584) = 0;
      *(_QWORD *)(v7 + 752) = v7 + 412;
      *(_QWORD *)(v7 + 760) = v7 + 416;
LABEL_59:
      v70 = sub_14088E070(v7 + 752, a2);
      if ( v70 == -1 )
      {
        result = 2;
        v12 = 8;
        goto LABEL_88;
      }
      sub_1407DBE00(v153 + 416);
      if ( v70 )
      {
        v7 = v153;
        if ( v70 != 1 )
          sub_1416C32C0(aAllBranchesAre, 107, &off_141794F50);
        v71 = 12;
        v72 = &unk_141795309;
      }
      else
      {
        v71 = 7;
        v72 = &unk_141795302;
        v7 = v153;
      }
      *(_QWORD *)(v7 + 632) = v72;
      *(_QWORD *)(v7 + 640) = v71;
      if ( *(_QWORD *)off_141EC8D80 >= 3u )
      {
        v139.m256i_i64[0] = v7 + 632;
        v139.m256i_i64[1] = (__int64)sub_14041F680;
        v128.m256i_i64[0] = 0;
        v128.m256i_i64[1] = (__int64)aCodexmateLibCo_6;
        *(_OWORD *)&v128.m256i_u64[2] = 0x23u;
        *(_QWORD *)&v129 = aSrcCoreVoiceRu_3;
        *((_QWORD *)&v129 + 1) = 29;
        *(_QWORD *)&v130 = 3;
        *((_QWORD *)&v130 + 1) = aCodexmateLibCo_6;
        *(_QWORD *)&v131 = 35;
        *((_QWORD *)&v131 + 1) = 0x106300000001LL;
        *(_QWORD *)&v132 = &unk_141795315;
        *((_QWORD *)&v132 + 1) = &v139;
        sub_1412C36A0(&v151, &v128);
        v7 = v153;
      }
      *(_QWORD *)(v7 + 416) = v7 + 200;
      *(_BYTE *)(v7 + 624) = 0;
LABEL_68:
      v152 = (volatile signed __int64 **)(v7 + 416);
      sub_1408339A0(&v128, v7 + 416, a2);
      v73 = v128.m256i_i64[0];
      if ( v128.m256i_i64[0] == -2 )
      {
        result = 2;
        v12 = 9;
        goto LABEL_88;
      }
      v74 = v128.m256i_i64[1];
      if ( *(_BYTE *)(v153 + 624) != 3 )
        goto LABEL_97;
      v75 = *(unsigned __int8 *)(v153 + 504);
      switch ( v75 )
      {
        case 5:
          goto LABEL_96;
        case 4:
          sub_1405E6D10(v153 + 512);
LABEL_96:
          sub_1400104F0(v153 + 472);
          break;
        case 3:
          if ( *(_QWORD *)(v153 + 512) != -1 )
            sub_14052DEF0(v153 + 512);
          goto LABEL_96;
      }
LABEL_97:
      if ( v73 > 0 )
        sub_140001660(v74, v73, 1);
      v90 = (__int64 *)(v153 + 400);
      sub_1412E75E0(v153 + 400);
      v92 = sub_1400640A0(*(_QWORD *)(v153 + 72));
      v93 = (char *)(v92 + 32);
      LOBYTE(v94) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v92 + 32), 1, 0) )
        sub_1416C15B0(v93);
      v95 = off_141EC90B8;
      if ( 2 * *off_141EC90B8 )
      {
        v102 = sub_1416C2250(v94, v91);
        v96 = v102;
        LOBYTE(v96) = v102 ^ 1;
        v97 = v153;
        if ( *(_BYTE *)(v92 + 33) )
          goto LABEL_103;
      }
      else
      {
        v96 = 0;
        v97 = v153;
        if ( *(_BYTE *)(v92 + 33) )
        {
LABEL_103:
          if ( !(_BYTE)v96 && 2 * *v95 && !(unsigned __int8)sub_1416C2250(v97, v96) )
            *(_BYTE *)(v92 + 33) = 1;
          v98 = *v93;
          *v93 = 0;
          if ( v98 != 2 )
            goto LABEL_149;
          goto LABEL_148;
        }
      }
      v103 = **(_QWORD **)(v97 + 64);
      if ( !v103 || *(_QWORD *)(v92 + 840) != v103 || (unsigned __int8)(*(_BYTE *)(v92 + 867) - 1) >= 3u )
      {
        if ( !(_BYTE)v96 && 2 * *v95 && !(unsigned __int8)sub_1416C2250(v97, v96) )
          *(_BYTE *)(v92 + 33) = 1;
        v114 = *v93;
        *v93 = 0;
        if ( v114 != 2 )
          goto LABEL_149;
LABEL_148:
        WakeByAddressSingle(v93);
LABEL_149:
        v115 = *v90;
        if ( (unsigned __int8)sub_1412F2A80(v115) )
          sub_1412E7580(v115);
        v152 = (volatile signed __int64 **)(v153 + 352);
        sub_140F7E890(&v128, v153 + 352);
        if ( v128.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v128.m256i_i64[0] )
          sub_140001660(v128.m256i_i64[1], v128.m256i_i64[0], 1);
        sub_1407D9860(v152);
LABEL_155:
        v152 = (volatile signed __int64 **)(v153 + 344);
        sub_140892E70(v153 + 344);
        v116 = (__int64 *)v152;
        if ( !_InterlockedDecrement64(*v152) )
          sub_1405742E0(v116);
        *(_BYTE *)(v153 + 414) = 0;
        goto LABEL_158;
      }
      LODWORD(v150) = v96;
      v152 = (volatile signed __int64 **)(v92 + 32);
      if ( !*(_QWORD *)(v92 + 352) && *(_QWORD *)(v92 + 328) )
      {
        sub_14149C500(&v128, v92 + 312);
        v104 = *(_QWORD *)(v92 + 336);
        if ( v104 )
          sub_140001660(*(_QWORD *)(v92 + 344), v104, 1);
        *(_QWORD *)(v92 + 352) = v128.m256i_i64[2];
        *(_OWORD *)(v92 + 336) = *(_OWORD *)v128.m256i_i8;
      }
      *(_QWORD *)(v92 + 40) = sub_140682710(*(_QWORD *)(v92 + 720), *(_DWORD *)(v92 + 728));
      *(_QWORD *)(v92 + 48) = v105;
      *(_DWORD *)(v92 + 728) = -1;
      if ( *(_DWORD *)(v92 + 80) <= 0xFFFFFFFD )
      {
        v145 = v92 + 80;
        sub_140264080((__int64 *)(v92 + 80));
      }
      *(_QWORD *)(v92 + 80) = -2;
      v106 = _InterlockedIncrement64(&qword_141EC9338);
      *(_QWORD *)(v92 + 832) = v106;
      sub_14033BC10(*(_QWORD *)(v92 + 344), *(_QWORD *)(v92 + 352));
      v108 = v107;
      v109 = 4;
      if ( !v107 )
      {
        *(_QWORD *)(v92 + 840) = 0;
        v109 = 0;
      }
      *(_BYTE *)(v92 + 867) = v109;
      sub_14000E270(v152, (unsigned int)v150);
      sub_140AED970(*(_QWORD *)(v153 + 72));
      sub_14025D570(*(_QWORD *)(v153 + 72), 0);
      sub_140662590(*(unsigned __int8 *)(v153 + 411));
      sub_1401B91A0(v111, v110);
      if ( v108 )
      {
        sub_1401C3030(&v128, *(_QWORD *)(v153 + 72));
        sub_140971D80(&v128, v106);
      }
      sub_140873770(&v128, *(_QWORD *)(v153 + 72));
      if ( v128.m256i_i64[0] != -1 && v128.m256i_i64[0] )
        sub_140001660(v128.m256i_i64[1], v128.m256i_i64[0], 1);
      sub_140B03640(v90);
      v152 = (volatile signed __int64 **)(v153 + 352);
      sub_140F7E890(&v128, v153 + 352);
      if ( v128.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v128.m256i_i64[0] )
        sub_140001660(v128.m256i_i64[1], v128.m256i_i64[0], 1);
      sub_1407D9860(v152);
      v152 = (volatile signed __int64 **)(v153 + 344);
      sub_140892E70(v153 + 344);
      v112 = (__int64 *)v152;
      if ( !_InterlockedDecrement64(*v152) )
        sub_1405742E0(v112);
      v113 = v153;
      *(_BYTE *)(v153 + 414) = 0;
      *(_BYTE *)(v113 + 413) = 0;
      sub_1407DB4B0(v113 + 200);
      v87 = v153;
      sub_1402C6460(v153 + 96);
      v12 = 1;
LABEL_170:
      result = 1;
LABEL_171:
      *(_BYTE *)(v87 + 410) = v12;
      return result;
    case 4LL:
      goto LABEL_17;
    case 5LL:
      goto LABEL_77;
    case 6LL:
      goto LABEL_47;
    case 7LL:
      goto LABEL_86;
    case 8LL:
      goto LABEL_59;
    case 9LL:
      goto LABEL_68;
  }
}