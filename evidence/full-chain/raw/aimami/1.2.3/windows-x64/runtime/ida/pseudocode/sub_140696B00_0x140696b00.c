// module: codexmate_lib/core/voice/runtime
// addr: 0x140696b00
// name: sub_140696B00
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140696B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  char result; // al
  char v10; // bl
  volatile signed __int64 **v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  char *v18; // rbx
  __int64 v19; // rcx
  __int64 *v20; // r15
  char v21; // al
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  signed __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // ecx
  __int64 v41; // rdx
  _BYTE *v42; // rdi
  unsigned int v43; // edx
  unsigned __int64 v44; // rax
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __int128 v48; // xmm4
  __int128 v49; // xmm5
  __int128 v50; // xmm6
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int128 *v54; // rdi
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int64 v57; // rax
  __int64 v58; // rdi
  char v59; // of
  volatile signed __int64 *v60; // rbx
  __int64 v61; // rt0
  volatile signed __int64 *v62; // r14
  __int64 v63; // rt0
  __int64 v64; // r15
  __int64 *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  char v68; // bl
  __int64 v69; // rax
  void *v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // rdi
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rdi
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rbx
  __int64 v83; // r14
  __int64 v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rdi
  int v87; // eax
  __int64 *v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rdi
  char *v91; // r14
  __int64 v92; // rcx
  __int64 *v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  char v96; // al
  char *v97; // rsi
  char v98; // al
  __int64 v99; // rdx
  unsigned int v100; // eax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rdx
  signed __int64 v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // r14
  char v107; // al
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rsi
  __int64 *v111; // rcx
  __int64 v112; // rax
  char v113; // al
  __int64 v114; // rsi
  __int64 *v115; // rcx
  volatile signed __int64 **v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int128 v122; // [rsp+30h] [rbp-50h]
  __int128 v123; // [rsp+40h] [rbp-40h]
  __int128 v124; // [rsp+50h] [rbp-30h]
  __int128 v125; // [rsp+60h] [rbp-20h]
  __int64 v126; // [rsp+70h] [rbp-10h]
  __m256i v127; // [rsp+80h] [rbp+0h] BYREF
  __int128 v128; // [rsp+A0h] [rbp+20h]
  __int128 v129; // [rsp+B0h] [rbp+30h]
  __int128 v130; // [rsp+C0h] [rbp+40h]
  __int128 v131; // [rsp+D0h] [rbp+50h]
  __int128 v132; // [rsp+E0h] [rbp+60h]
  volatile signed __int64 *v133; // [rsp+108h] [rbp+88h]
  volatile signed __int64 *v134; // [rsp+110h] [rbp+90h]
  __int64 v135; // [rsp+118h] [rbp+98h]
  __int64 v136; // [rsp+120h] [rbp+A0h]
  char v137; // [rsp+298h] [rbp+218h]
  __m256i v138; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v139; // [rsp+2C0h] [rbp+240h]
  __int128 v140; // [rsp+2D0h] [rbp+250h]
  __int128 v141; // [rsp+2E0h] [rbp+260h]
  __int128 v142; // [rsp+2F0h] [rbp+270h]
  __int128 v143; // [rsp+300h] [rbp+280h]
  __int64 v144; // [rsp+328h] [rbp+2A8h]
  __int128 v145; // [rsp+330h] [rbp+2B0h]
  __int64 v146; // [rsp+340h] [rbp+2C0h]
  __int128 v147; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v148; // [rsp+360h] [rbp+2E0h]
  __int64 v149; // [rsp+368h] [rbp+2E8h]
  char v150; // [rsp+377h] [rbp+2F7h] BYREF
  volatile signed __int64 **v151; // [rsp+378h] [rbp+2F8h]
  __int64 v152; // [rsp+380h] [rbp+300h]
  __int64 v153; // [rsp+388h] [rbp+308h]

  v153 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 410);
  v152 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 413) = 0;
      *(_BYTE *)(a1 + 415) = 1;
      v151 = *(volatile signed __int64 ***)a1;
      v149 = *(_QWORD *)(a1 + 8);
      v7 = *(_QWORD *)(a1 + 16);
      sub_14149C500(&v138, *(_QWORD *)(a1 + 48));
      sub_14149C500(&v127, *(_QWORD *)(v5 + 56));
      *(_BYTE *)(v5 + 415) = 0;
      *(_QWORD *)(v5 + 96) = v151;
      *(_QWORD *)(v5 + 104) = v149;
      *(_QWORD *)(v5 + 112) = v7;
      *(_OWORD *)(v5 + 120) = *(_OWORD *)v138.m256i_i8;
      *(_QWORD *)(v5 + 136) = v138.m256i_i64[2];
      *(_OWORD *)(v5 + 144) = *(_OWORD *)v127.m256i_i8;
      *(_QWORD *)(v5 + 160) = v127.m256i_i64[2];
      *(_OWORD *)(v5 + 168) = *(_OWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 184) = *(_QWORD *)(v5 + 40);
      *(_DWORD *)(v5 + 192) = 16000;
      *(_QWORD *)(v5 + 872) = v5 + 96;
      *(_BYTE *)(v5 + 892) = 0;
      goto LABEL_3;
    case 1LL:
      sub_1416C3400(&off_141781A10, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_141781A10, a2, a3, a4);
    case 3LL:
LABEL_3:
      v151 = (volatile signed __int64 **)(v5 + 416);
      hbb4b340bd79fba8f_0(&v127, v5 + 416, a2);
      v8 = v127.m256i_i64[0];
      if ( v127.m256i_i64[0] == -2 )
      {
        result = 1;
        v10 = 3;
LABEL_88:
        v85 = v152;
        goto LABEL_173;
      }
      v146 = v127.m256i_i64[3];
      v145 = *(_OWORD *)&v127.m256i_u64[1];
      v122 = v128;
      v123 = v129;
      v124 = v130;
      v125 = v131;
      v126 = v132;
      v11 = v151;
      sub_14068A3A0(v151);
      if ( v8 == -1 )
      {
        v148 = v146;
        v147 = v145;
        v27 = *(_QWORD *)(v152 + 72);
        v28 = **(_QWORD **)(v152 + 64);
        v29 = **(_QWORD **)(v152 + 80);
        v138.m256i_i64[0] = (__int64)&v147;
        v138.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_14149C0F0(&v127, &unk_141781A40, &v138);
        *(_OWORD *)v138.m256i_i8 = *(_OWORD *)v127.m256i_i8;
        v138.m256i_i64[2] = v127.m256i_i64[2];
        sub_140885540(v27, v28, 1, v29, (__int64)&v138);
        if ( (_QWORD)v147 )
          sub_140001660(*((_QWORD *)&v147 + 1), v147, 1);
        goto LABEL_164;
      }
      v12 = v152;
      v13 = v152 + 200;
      *(_QWORD *)(v152 + 200) = v8;
      *(_OWORD *)(v12 + 208) = v145;
      *(_QWORD *)(v12 + 224) = v146;
      *(_OWORD *)(v12 + 232) = v122;
      *(_OWORD *)(v12 + 248) = v123;
      *(_OWORD *)(v12 + 264) = v124;
      *(_OWORD *)(v12 + 280) = v125;
      *(_QWORD *)(v12 + 296) = v126;
      v14 = sub_140AD0A60(v13);
      v15 = v152;
      *(_QWORD *)(v152 + 304) = v14;
      *(_BYTE *)(v15 + 413) = 1;
      v17 = sub_1400640A0(*(_QWORD *)(v15 + 72));
      *(_QWORD *)(v152 + 320) = v17;
      v18 = (char *)(v17 + 32);
      LOBYTE(v19) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v17 + 32), 1, 0) )
        sub_1416C15B0(v18);
      v20 = off_141EC90B8;
      if ( 2 * *off_141EC90B8 )
      {
        v21 = sub_1416C2250(v19, v16) ^ 1;
        v22 = *(unsigned __int8 *)(v17 + 33);
        if ( (_BYTE)v22 )
        {
LABEL_10:
          if ( !v21 && 2 * *v20 && !(unsigned __int8)sub_1416C2250(v22, v16) )
            *(_BYTE *)(v17 + 33) = 1;
          v23 = *v18;
          *v18 = 0;
          if ( v23 == 2 )
            WakeByAddressSingle(v18);
          v5 = v152;
          *(_QWORD *)(v152 + 416) = v13;
          *(_BYTE *)(v5 + 624) = 0;
LABEL_15:
          v151 = (volatile signed __int64 **)(v5 + 416);
          sub_1406A2CB0(&v127, v5 + 416, a2);
          v24 = v127.m256i_i64[0];
          if ( v127.m256i_i64[0] == -2 )
          {
            result = 1;
            v10 = 4;
            goto LABEL_88;
          }
          v25 = v127.m256i_i64[1];
          if ( *(_BYTE *)(v152 + 624) != 3 )
            goto LABEL_27;
          v26 = *(unsigned __int8 *)(v152 + 504);
          if ( v26 != 5 )
          {
            if ( v26 == 4 )
            {
              sub_14052DE20(v152 + 512);
            }
            else
            {
              if ( v26 != 3 )
                goto LABEL_27;
              if ( *(_QWORD *)(v152 + 512) != -1 )
                sub_14052DEF0(v152 + 512);
            }
          }
          sub_1400104F0(v152 + 472);
LABEL_27:
          if ( v24 > 0 )
            sub_140001660(v25, v24, 1);
LABEL_160:
          if ( *(_BYTE *)(v152 + 413) )
          {
            v151 = (volatile signed __int64 **)(v152 + 304);
            sub_140893210(v152 + 304);
            v116 = v151;
            if ( !_InterlockedDecrement64(*v151) )
              sub_140574470(v116);
          }
          v117 = v152;
          *(_BYTE *)(v152 + 413) = 0;
          sub_14068F4B0(v117 + 200);
          goto LABEL_164;
        }
      }
      else
      {
        v21 = 0;
        v22 = *(unsigned __int8 *)(v17 + 33);
        if ( (_BYTE)v22 )
          goto LABEL_10;
      }
      v5 = v152;
      *(_QWORD *)(v152 + 632) = v18;
      *(_BYTE *)(v5 + 640) = v21;
      v30 = **(_QWORD **)(v5 + 80);
      if ( *(_QWORD *)(v17 + 832) != v30
        || qword_141EC9338 != v30
        || (v31 = **(_QWORD **)(v5 + 64)) == 0
        || (v32 = *(_QWORD *)(v5 + 632), *(_QWORD *)(v32 + 808) != v31)
        || *(_BYTE *)(v32 + 835) != 1 )
      {
        *(_QWORD *)(v5 + 416) = v13;
        *(_BYTE *)(v5 + 624) = 0;
LABEL_77:
        v151 = (volatile signed __int64 **)(v5 + 416);
        sub_1406A2CB0(&v127, v5 + 416, a2);
        v76 = v127.m256i_i64[0];
        if ( v127.m256i_i64[0] == -2 )
        {
          result = 1;
          v10 = 5;
          goto LABEL_88;
        }
        v77 = v127.m256i_i64[1];
        if ( *(_BYTE *)(v152 + 624) != 3 )
          goto LABEL_109;
        v78 = *(unsigned __int8 *)(v152 + 504);
        if ( v78 != 5 )
        {
          if ( v78 == 4 )
          {
            sub_14052DE20(v152 + 512);
          }
          else
          {
            if ( v78 != 3 )
            {
LABEL_109:
              if ( v76 > 0 )
                sub_140001660(v77, v76, 1);
              v97 = *(char **)(v152 + 632);
              if ( !*(_BYTE *)(v152 + 640) && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v75, v74) )
                v97[1] = 1;
              v98 = *v97;
              *v97 = 0;
              if ( v98 == 2 )
                WakeByAddressSingle(v97);
              goto LABEL_160;
            }
            if ( *(_QWORD *)(v152 + 512) != -1 )
              sub_14052DEF0(v152 + 512);
          }
        }
        sub_1400104F0(v152 + 472);
        goto LABEL_109;
      }
      v33 = _InterlockedIncrement64(&qword_141EC9338);
      *(_QWORD *)(*(_QWORD *)(v5 + 632) + 800LL) = v33;
      *(_BYTE *)(*(_QWORD *)(v5 + 632) + 835LL) = 2;
      v34 = *(_QWORD *)(v5 + 632);
      v35 = *(_QWORD *)(v34 + 640);
      if ( v35 != -1 && v35 )
        sub_140001660(*(_QWORD *)(v34 + 648), v35, 1);
      *(_QWORD *)(v34 + 640) = -1;
      v36 = *(_QWORD *)(v5 + 632);
      v37 = *(_QWORD *)(v36 + 616);
      if ( v37 != -1 && v37 )
        sub_140001660(*(_QWORD *)(v36 + 624), v37, 1);
      *(_QWORD *)(v36 + 616) = -1;
      *(_QWORD *)(v5 + 312) = v33;
      sub_14000E270(*(_QWORD *)(v5 + 632), *(unsigned __int8 *)(v5 + 640));
      v38 = sub_1400640A0(*(_QWORD *)(v152 + 72));
      sub_140B93B50(&v127, v38 + 32);
      sub_140682760((__int64)&v138, (__int64)&v127);
      v127.m256i_i8[2] = 2;
      v127.m256i_i16[0] = -1;
      v127.m256i_i32[4] = -1;
      sub_1406AD5A0(&v147, &v138, &v127);
      v39 = v152;
      *(_BYTE *)(v152 + 411) = BYTE2(v147);
      *(_WORD *)(v39 + 408) = v147;
      v40 = v148;
      *(_QWORD *)(v39 + 328) = *((_QWORD *)&v147 + 1);
      *(_DWORD *)(v39 + 336) = v40;
      show_voice_overlay(*(_QWORD *)(v39 + 72));
      LOBYTE(v41) = 1;
      sub_14025D570(*(_QWORD *)(v152 + 72), v41);
      v42 = (_BYTE *)(v152 + 411);
      sub_140662590(*(unsigned __int8 *)(v152 + 411));
      if ( *(_WORD *)(v152 + 408) < 0x65u && *(_DWORD *)(v152 + 336) != -1 )
      {
        v44 = sub_140656A30(v42, v43);
        if ( v44 )
        {
          sub_1412F1530(&v127, v44 / 0x3E8, 1000000 * (unsigned int)(v44 % 0x3E8), &off_141781A28);
          v143 = v132;
          v45 = v131;
          v142 = v131;
          v46 = v130;
          v141 = v130;
          v47 = *(_OWORD *)v127.m256i_i8;
          v48 = *(_OWORD *)&v127.m256i_u64[2];
          v49 = v128;
          v50 = v129;
          v140 = v129;
          v139 = v128;
          v138 = v127;
          *((_OWORD *)v11 + 6) = v132;
          *((_OWORD *)v11 + 5) = v45;
          *((_OWORD *)v11 + 4) = v46;
          *((_OWORD *)v11 + 3) = v50;
          *((_OWORD *)v11 + 2) = v49;
          *((_OWORD *)v11 + 1) = v48;
          *(_OWORD *)v11 = v47;
          v5 = v152;
LABEL_45:
          v151 = (volatile signed __int64 **)(v5 + 416);
          if ( (unsigned __int8)sub_1412F1D10(v5 + 416, a2) )
          {
            result = 1;
            v10 = 6;
            goto LABEL_88;
          }
          sub_14052DE20(v151);
        }
        if ( *(_WORD *)(v152 + 408) <= 0x64u )
          sub_1401B8C50();
      }
      sub_140873770(&v127, *(_QWORD *)(v152 + 72));
      if ( v127.m256i_i64[0] != -1 && v127.m256i_i64[0] )
        sub_140001660(v127.m256i_i64[1], v127.m256i_i64[0], 1);
      v51 = sub_1407DC880(64, &off_141781A58);
      *(_QWORD *)&v147 = v51;
      v52 = v152;
      *(_QWORD *)(v152 + 344) = v53;
      *(_BYTE *)(v52 + 414) = 0;
      v54 = (__int128 *)(v52 + 656);
      sub_1408858D0(v52 + 656, v51);
      if ( *(_DWORD *)v54 == -1 )
      {
        v79 = v152;
        v80 = v152 + 416;
        *(_QWORD *)(v152 + 432) = *(_QWORD *)(v152 + 680);
        *(_OWORD *)(v79 + 416) = *(_OWORD *)(v79 + 664);
        v81 = *(_QWORD *)(v79 + 72);
        v82 = **(_QWORD **)(v79 + 64);
        v83 = *(_QWORD *)(v79 + 312);
        v138.m256i_i64[0] = v80;
        v138.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_14149C0F0(&v127, &unk_141781A88, &v138);
        *(_OWORD *)v138.m256i_i8 = *(_OWORD *)v127.m256i_i8;
        v138.m256i_i64[2] = v127.m256i_i64[2];
        sub_140885540(v81, v82, 1, v83, (__int64)&v138);
        v5 = v152;
        *(_QWORD *)(v152 + 440) = v152 + 200;
        *(_BYTE *)(v5 + 648) = 0;
LABEL_86:
        v151 = (volatile signed __int64 **)(v5 + 440);
        sub_1406A2CB0(&v127, v5 + 440, a2);
        v84 = v127.m256i_i64[0];
        if ( v127.m256i_i64[0] == -2 )
        {
          result = 1;
          v10 = 7;
          goto LABEL_88;
        }
        v86 = v127.m256i_i64[1];
        if ( *(_BYTE *)(v152 + 648) != 3 )
          goto LABEL_117;
        v87 = *(unsigned __int8 *)(v152 + 528);
        if ( v87 != 5 )
        {
          if ( v87 == 4 )
          {
            sub_14052DE20(v152 + 536);
          }
          else
          {
            if ( v87 != 3 )
            {
LABEL_117:
              if ( v84 > 0 )
                sub_140001660(v86, v84, 1);
              v99 = *(_QWORD *)(v152 + 416);
              if ( v99 )
                sub_140001660(*(_QWORD *)(v152 + 424), v99, 1);
              goto LABEL_157;
            }
            if ( *(_QWORD *)(v152 + 536) != -1 )
              sub_14052DEF0(v152 + 536);
          }
        }
        sub_1400104F0(v152 + 496);
        goto LABEL_117;
      }
      v55 = *v54;
      v56 = v54[1];
      v57 = v152;
      *(_OWORD *)(v152 + 384) = v54[2];
      *(_OWORD *)(v57 + 368) = v56;
      *(_OWORD *)(v57 + 352) = v55;
      v58 = *(_QWORD *)(v57 + 72);
      sub_1401C50B0(&v138, v58);
      v60 = *(volatile signed __int64 **)(v58 + 136);
      v61 = _InterlockedIncrement64(v60);
      if ( (v61 < 0) ^ v59 | (v61 == 0)
        || (v62 = *(volatile signed __int64 **)(v58 + 144),
            v63 = _InterlockedIncrement64(v62),
            v64 = v152,
            (v63 < 0) ^ v59 | (v63 == 0)) )
      {
        BUG();
      }
      sub_141684120(&v127, &v138, 136);
      v65 = *(__int64 **)(v64 + 64);
      *(_BYTE *)(v64 + 413) = 0;
      v133 = v60;
      v134 = v62;
      v135 = *(_QWORD *)(v64 + 304);
      v136 = *v65;
      v137 = 0;
      v66 = sub_14054DDD0(&v127, &off_141781A70);
      v5 = v152;
      v67 = v152 + 344;
      *(_QWORD *)(v152 + 400) = v66;
      *(_BYTE *)(v5 + 412) = 0;
      *(_QWORD *)(v5 + 416) = *(_QWORD *)(v5 + 88);
      *(_BYTE *)(v5 + 424) = 0;
      *(_QWORD *)(v5 + 544) = v67;
      *(_QWORD *)(v5 + 552) = v5 + 200;
      *(_BYTE *)(v5 + 584) = 0;
      *(_QWORD *)(v5 + 752) = v5 + 412;
      *(_QWORD *)(v5 + 760) = v5 + 416;
LABEL_57:
      v68 = sub_14088E070(v5 + 752, a2);
      if ( v68 == -1 )
      {
        result = 1;
        v10 = 8;
        goto LABEL_88;
      }
      if ( *(_BYTE *)(v152 + 424) == 4 )
        sub_14052DE20(v152 + 432);
      sub_1405D9070(v152 + 544);
      if ( v68 )
      {
        v5 = v152;
        if ( v68 != 1 )
          sub_1416C32C0("all branches are disabled and there is no else branch", 107, &off_141781B30);
        v69 = 12;
        v70 = &unk_141781AA9;
      }
      else
      {
        v69 = 7;
        v70 = &unk_141781AA2;
        v5 = v152;
      }
      *(_QWORD *)(v5 + 632) = v70;
      *(_QWORD *)(v5 + 640) = v69;
      if ( *(_QWORD *)off_141EC8D80 >= 3u )
      {
        v138.m256i_i64[0] = v5 + 632;
        v138.m256i_i64[1] = (__int64)sub_14041F680;
        v127.m256i_i64[0] = 0;
        v127.m256i_i64[1] = (__int64)"codexmate_lib::core::voice::runtimeall branches are disabled and there is no else branch";
        *(_OWORD *)&v127.m256i_u64[2] = 0x23u;
        *(_QWORD *)&v128 = aSrcCoreVoiceRu_0;
        *((_QWORD *)&v128 + 1) = 29;
        *(_QWORD *)&v129 = 3;
        *((_QWORD *)&v129 + 1) = "codexmate_lib::core::voice::runtimeall branches are disabled and there is no else branch";
        *(_QWORD *)&v130 = 35;
        *((_QWORD *)&v130 + 1) = 0x106300000001LL;
        *(_QWORD *)&v131 = &unk_141781AB5;
        *((_QWORD *)&v131 + 1) = &v138;
        sub_1412C36A0(&v150, &v127);
        v5 = v152;
      }
      *(_QWORD *)(v5 + 416) = v5 + 200;
      *(_BYTE *)(v5 + 624) = 0;
LABEL_68:
      v151 = (volatile signed __int64 **)(v5 + 416);
      sub_1406A2CB0(&v127, v5 + 416, a2);
      v71 = v127.m256i_i64[0];
      if ( v127.m256i_i64[0] == -2 )
      {
        result = 1;
        v10 = 9;
        goto LABEL_88;
      }
      v72 = v127.m256i_i64[1];
      if ( *(_BYTE *)(v152 + 624) != 3 )
        goto LABEL_97;
      v73 = *(unsigned __int8 *)(v152 + 504);
      switch ( v73 )
      {
        case 5:
          goto LABEL_96;
        case 4:
          sub_14052DE20(v152 + 512);
LABEL_96:
          sub_1400104F0(v152 + 472);
          break;
        case 3:
          if ( *(_QWORD *)(v152 + 512) != -1 )
            sub_14052DEF0(v152 + 512);
          goto LABEL_96;
      }
LABEL_97:
      if ( v71 > 0 )
        sub_140001660(v72, v71, 1);
      v88 = (__int64 *)(v152 + 400);
      sub_1412E75E0(v152 + 400);
      v90 = sub_1400640A0(*(_QWORD *)(v152 + 72));
      v91 = (char *)(v90 + 32);
      LOBYTE(v92) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v90 + 32), 1, 0) )
        sub_1416C15B0(v91);
      v93 = off_141EC90B8;
      if ( 2 * *off_141EC90B8 )
      {
        v100 = sub_1416C2250(v92, v89);
        v94 = v100;
        LOBYTE(v94) = v100 ^ 1;
        v95 = v152;
        if ( *(_BYTE *)(v90 + 33) )
          goto LABEL_103;
      }
      else
      {
        v94 = 0;
        v95 = v152;
        if ( *(_BYTE *)(v90 + 33) )
        {
LABEL_103:
          if ( !(_BYTE)v94 && 2 * *v93 && !(unsigned __int8)sub_1416C2250(v95, v94) )
            *(_BYTE *)(v90 + 33) = 1;
          v96 = *v91;
          *v91 = 0;
          if ( v96 != 2 )
            goto LABEL_151;
          goto LABEL_150;
        }
      }
      v101 = **(_QWORD **)(v95 + 64);
      if ( !v101 || *(_QWORD *)(v90 + 840) != v101 || (unsigned __int8)(*(_BYTE *)(v90 + 867) - 1) >= 3u )
      {
        if ( !(_BYTE)v94 && 2 * *v93 && !(unsigned __int8)sub_1416C2250(v95, v94) )
          *(_BYTE *)(v90 + 33) = 1;
        v113 = *v91;
        *v91 = 0;
        if ( v113 != 2 )
          goto LABEL_151;
LABEL_150:
        WakeByAddressSingle(v91);
LABEL_151:
        v114 = *v88;
        if ( (unsigned __int8)sub_1412F2A80(v114) )
          sub_1412E7580(v114);
        v151 = (volatile signed __int64 **)(v152 + 352);
        sub_140F7E890(&v127, v152 + 352);
        if ( v127.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v127.m256i_i64[0] )
          sub_140001660(v127.m256i_i64[1], v127.m256i_i64[0], 1);
        sub_14068E500(v151);
LABEL_157:
        v151 = (volatile signed __int64 **)(v152 + 344);
        sub_140892E70(v152 + 344);
        v115 = (__int64 *)v151;
        if ( !_InterlockedDecrement64(*v151) )
          sub_1405742E0(v115);
        *(_BYTE *)(v152 + 414) = 0;
        goto LABEL_160;
      }
      LODWORD(v149) = v94;
      v151 = (volatile signed __int64 **)(v90 + 32);
      if ( !*(_QWORD *)(v90 + 352) && *(_QWORD *)(v90 + 328) )
      {
        sub_14149C500(&v127, v90 + 312);
        v102 = *(_QWORD *)(v90 + 336);
        if ( v102 )
          sub_140001660(*(_QWORD *)(v90 + 344), v102, 1);
        *(_QWORD *)(v90 + 352) = v127.m256i_i64[2];
        *(_OWORD *)(v90 + 336) = *(_OWORD *)v127.m256i_i8;
      }
      *(_QWORD *)(v90 + 40) = sub_140682710(*(_QWORD *)(v90 + 720), *(_DWORD *)(v90 + 728));
      *(_QWORD *)(v90 + 48) = v103;
      *(_DWORD *)(v90 + 728) = -1;
      if ( *(_DWORD *)(v90 + 80) <= 0xFFFFFFFD )
      {
        v144 = v90 + 80;
        sub_140264080((__int64 *)(v90 + 80));
      }
      *(_QWORD *)(v90 + 80) = -2;
      v104 = _InterlockedIncrement64(&qword_141EC9338);
      *(_QWORD *)(v90 + 832) = v104;
      sub_14033BC10(*(_QWORD *)(v90 + 344), *(_QWORD *)(v90 + 352));
      v106 = v105;
      v107 = 4;
      if ( !v105 )
      {
        *(_QWORD *)(v90 + 840) = 0;
        v107 = 0;
      }
      *(_BYTE *)(v90 + 867) = v107;
      sub_14000E270(v151, (unsigned int)v149);
      sub_140AED970(*(_QWORD *)(v152 + 72));
      sub_14025D570(*(_QWORD *)(v152 + 72), 0);
      sub_140662590(*(unsigned __int8 *)(v152 + 411));
      sub_1401B91A0(v109, v108);
      if ( v106 )
      {
        sub_1401C3030(&v127, *(_QWORD *)(v152 + 72));
        sub_140971D80(&v127, v104);
      }
      sub_140873770(&v127, *(_QWORD *)(v152 + 72));
      if ( v127.m256i_i64[0] != -1 && v127.m256i_i64[0] )
        sub_140001660(v127.m256i_i64[1], v127.m256i_i64[0], 1);
      v110 = *v88;
      if ( (unsigned __int8)sub_1412F2A80(v110) )
        sub_1412E7580(v110);
      v151 = (volatile signed __int64 **)(v152 + 352);
      sub_140F7E890(&v127, v152 + 352);
      if ( v127.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v127.m256i_i64[0] )
        sub_140001660(v127.m256i_i64[1], v127.m256i_i64[0], 1);
      sub_14068E500(v151);
      v151 = (volatile signed __int64 **)(v152 + 344);
      sub_140892E70(v152 + 344);
      v111 = (__int64 *)v151;
      if ( !_InterlockedDecrement64(*v151) )
        sub_1405742E0(v111);
      v112 = v152;
      *(_BYTE *)(v152 + 414) = 0;
      *(_BYTE *)(v112 + 413) = 0;
      sub_14068F4B0(v112 + 200);
LABEL_164:
      v85 = v152;
      v118 = *(_QWORD *)(v152 + 96);
      if ( v118 )
        sub_140001660(*(_QWORD *)(v152 + 104), v118, 1);
      v119 = *(_QWORD *)(v85 + 120);
      if ( v119 )
        sub_140001660(*(_QWORD *)(v85 + 128), v119, 1);
      v120 = *(_QWORD *)(v85 + 144);
      if ( v120 )
        sub_140001660(*(_QWORD *)(v85 + 152), v120, 1);
      v121 = *(_QWORD *)(v85 + 168);
      v10 = 1;
      if ( v121 )
        sub_140001660(*(_QWORD *)(v85 + 176), v121, 1);
      result = 0;
LABEL_173:
      *(_BYTE *)(v85 + 410) = v10;
      return result;
    case 4LL:
      goto LABEL_15;
    case 5LL:
      goto LABEL_77;
    case 6LL:
      goto LABEL_45;
    case 7LL:
      goto LABEL_86;
    case 8LL:
      goto LABEL_57;
    case 9LL:
      goto LABEL_68;
  }
}