// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x1409b94b0 | name sub_1409B94B0
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_1409B94B0(__int64 a1, unsigned __int64 a2, __int64 a3, signed __int64 a4)
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
  __int64 v16; // r14
  char *v17; // rbx
  __int64 v18; // rcx
  __int64 *v19; // r15
  char v20; // al
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  signed __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // ecx
  __int64 v40; // rdx
  _BYTE *v41; // rdi
  unsigned int v42; // edx
  unsigned __int64 v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int128 v47; // xmm4
  __int128 v48; // xmm5
  __int128 v49; // xmm6
  __int64 v50; // r8
  volatile signed __int64 *v51; // rax
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
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rdi
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // r14
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // rdi
  int v86; // eax
  __int64 *v87; // rsi
  __int64 v88; // rdi
  char *v89; // r14
  __int64 v90; // rcx
  __int64 *v91; // rbx
  int v92; // edx
  __int64 v93; // rcx
  char v94; // al
  char *v95; // rsi
  char v96; // al
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  signed __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // r14
  char v104; // al
  __int64 v105; // rcx
  __int64 v106; // rsi
  __int64 v107; // rax
  char v108; // al
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int128 v115; // [rsp+30h] [rbp-50h]
  __int128 v116; // [rsp+40h] [rbp-40h]
  __int128 v117; // [rsp+50h] [rbp-30h]
  __int128 v118; // [rsp+60h] [rbp-20h]
  __int64 v119; // [rsp+70h] [rbp-10h]
  __m256i v120; // [rsp+80h] [rbp+0h] BYREF
  __int128 v121; // [rsp+A0h] [rbp+20h]
  __int128 v122; // [rsp+B0h] [rbp+30h]
  __int128 v123; // [rsp+C0h] [rbp+40h]
  __int128 v124; // [rsp+D0h] [rbp+50h]
  __int128 v125; // [rsp+E0h] [rbp+60h]
  volatile signed __int64 *v126; // [rsp+108h] [rbp+88h]
  volatile signed __int64 *v127; // [rsp+110h] [rbp+90h]
  __int64 v128; // [rsp+118h] [rbp+98h]
  __int64 v129; // [rsp+120h] [rbp+A0h]
  char v130; // [rsp+298h] [rbp+218h]
  __m256i v131; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v132; // [rsp+2C0h] [rbp+240h]
  __int128 v133; // [rsp+2D0h] [rbp+250h]
  __int128 v134; // [rsp+2E0h] [rbp+260h]
  __int128 v135; // [rsp+2F0h] [rbp+270h]
  __int128 v136; // [rsp+300h] [rbp+280h]
  __int64 v137; // [rsp+328h] [rbp+2A8h]
  __int128 v138; // [rsp+330h] [rbp+2B0h]
  __int64 v139; // [rsp+340h] [rbp+2C0h]
  __int128 v140; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v141; // [rsp+360h] [rbp+2E0h]
  __int64 v142; // [rsp+368h] [rbp+2E8h]
  char v143; // [rsp+377h] [rbp+2F7h] BYREF
  volatile signed __int64 **v144; // [rsp+378h] [rbp+2F8h]
  __int64 v145; // [rsp+380h] [rbp+300h]
  __int64 v146; // [rsp+388h] [rbp+308h]

  v146 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 410);
  v145 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 413) = 0;
      *(_BYTE *)(a1 + 415) = 1;
      v144 = *(volatile signed __int64 ***)a1;
      v142 = *(_QWORD *)(a1 + 8);
      v7 = *(_QWORD *)(a1 + 16);
      sub_1416AC440(&v131, *(_QWORD *)(a1 + 48));
      sub_1416AC440(&v120, *(_QWORD *)(v5 + 56));
      *(_BYTE *)(v5 + 415) = 0;
      *(_QWORD *)(v5 + 96) = v144;
      *(_QWORD *)(v5 + 104) = v142;
      *(_QWORD *)(v5 + 112) = v7;
      *(_OWORD *)(v5 + 120) = *(_OWORD *)v131.m256i_i8;
      *(_QWORD *)(v5 + 136) = v131.m256i_i64[2];
      *(_OWORD *)(v5 + 144) = *(_OWORD *)v120.m256i_i8;
      *(_QWORD *)(v5 + 160) = v120.m256i_i64[2];
      *(_OWORD *)(v5 + 168) = *(_OWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 184) = *(_QWORD *)(v5 + 40);
      *(_DWORD *)(v5 + 192) = 16000;
      *(_QWORD *)(v5 + 872) = v5 + 96;
      *(_BYTE *)(v5 + 892) = 0;
      goto LABEL_3;
    case 1LL:
      sub_1419393E0(&off_141A26160);
    case 2LL:
      sub_141939400(&off_141A26160);
    case 3LL:
LABEL_3:
      v144 = (volatile signed __int64 **)(v5 + 416);
      sub_1409C0DE0((__int64)&v120, v5 + 416, a2, a4);
      v8 = v120.m256i_i64[0];
      if ( v120.m256i_i64[0] == -2 )
      {
        result = 1;
        v10 = 3;
LABEL_84:
        v84 = v145;
        goto LABEL_169;
      }
      v139 = v120.m256i_i64[3];
      v138 = *(_OWORD *)&v120.m256i_u64[1];
      v115 = v121;
      v116 = v122;
      v117 = v123;
      v118 = v124;
      v119 = v125;
      v11 = v144;
      sub_140992690(v144);
      if ( v8 == -1 )
      {
        v141 = v139;
        v140 = v138;
        v26 = *(_QWORD *)(v145 + 72);
        v27 = **(_QWORD **)(v145 + 64);
        v28 = **(_QWORD **)(v145 + 80);
        v131.m256i_i64[0] = (__int64)&v140;
        v131.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_1416ABFD0(&v120, &unk_141A26190, &v131);
        *(_OWORD *)v131.m256i_i8 = *(_OWORD *)v120.m256i_i8;
        v131.m256i_i64[2] = v120.m256i_i64[2];
        sub_140C87C70(v26, v27, 1, v28, (__int64)&v131);
        if ( (_QWORD)v140 )
          sub_140001660(*((_QWORD *)&v140 + 1), v140, 1);
        goto LABEL_160;
      }
      v12 = v145;
      v13 = v145 + 200;
      *(_QWORD *)(v145 + 200) = v8;
      *(_OWORD *)(v12 + 208) = v138;
      *(_QWORD *)(v12 + 224) = v139;
      *(_OWORD *)(v12 + 232) = v115;
      *(_OWORD *)(v12 + 248) = v116;
      *(_OWORD *)(v12 + 264) = v117;
      *(_OWORD *)(v12 + 280) = v118;
      *(_QWORD *)(v12 + 296) = v119;
      v14 = sub_140DA57F0(v13);
      v15 = v145;
      *(_QWORD *)(v145 + 304) = v14;
      *(_BYTE *)(v15 + 413) = 1;
      v16 = sub_14054A5A0(*(_QWORD *)(v15 + 72));
      *(_QWORD *)(v145 + 320) = v16;
      v17 = (char *)(v16 + 32);
      LOBYTE(v18) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v16 + 32), 1, 0) )
        sub_141937480(v17);
      v19 = off_1421E7210;
      if ( 2 * *off_1421E7210 )
      {
        v20 = sub_141938160(v18) ^ 1;
        v21 = *(unsigned __int8 *)(v16 + 33);
        if ( (_BYTE)v21 )
        {
LABEL_10:
          if ( !v20 && 2 * *v19 && !(unsigned __int8)sub_141938160(v21) )
            *(_BYTE *)(v16 + 33) = 1;
          v22 = *v17;
          *v17 = 0;
          if ( v22 == 2 )
            WakeByAddressSingle(v17);
          v5 = v145;
          *(_QWORD *)(v145 + 416) = v13;
          *(_BYTE *)(v5 + 624) = 0;
LABEL_15:
          v144 = (volatile signed __int64 **)(v5 + 416);
          sub_1409C0820(&v120, (__int64 *)(v5 + 416), a2);
          v23 = v120.m256i_i64[0];
          if ( v120.m256i_i64[0] == -2 )
          {
            result = 1;
            v10 = 4;
            goto LABEL_84;
          }
          v24 = v120.m256i_i64[1];
          if ( *(_BYTE *)(v145 + 624) != 3 )
            goto LABEL_27;
          v25 = *(unsigned __int8 *)(v145 + 504);
          if ( v25 != 5 )
          {
            if ( v25 == 4 )
            {
              sub_1408ED810(v145 + 512);
            }
            else
            {
              if ( v25 != 3 )
                goto LABEL_27;
              if ( *(_QWORD *)(v145 + 512) != -1 )
                sub_14040C610(v145 + 512);
            }
          }
          sub_14002F9D0(v145 + 472);
LABEL_27:
          if ( v23 > 0 )
            sub_140001660(v24, v23, 1);
LABEL_156:
          if ( *(_BYTE *)(v145 + 413) )
          {
            v144 = (volatile signed __int64 **)(v145 + 304);
            sub_140947B30();
            if ( !_InterlockedDecrement64(*v144) )
              sub_1409E44B0();
          }
          v110 = v145;
          *(_BYTE *)(v145 + 413) = 0;
          sub_1409964C0(v110 + 200);
          goto LABEL_160;
        }
      }
      else
      {
        v20 = 0;
        v21 = *(unsigned __int8 *)(v16 + 33);
        if ( (_BYTE)v21 )
          goto LABEL_10;
      }
      v5 = v145;
      *(_QWORD *)(v145 + 632) = v17;
      *(_BYTE *)(v5 + 640) = v20;
      v29 = **(_QWORD **)(v5 + 80);
      if ( *(_QWORD *)(v16 + 832) != v29
        || qword_1421E74D0 != v29
        || (v30 = **(_QWORD **)(v5 + 64)) == 0
        || (v31 = *(_QWORD *)(v5 + 632), *(_QWORD *)(v31 + 808) != v30)
        || *(_BYTE *)(v31 + 835) != 1 )
      {
        *(_QWORD *)(v5 + 416) = v13;
        *(_BYTE *)(v5 + 624) = 0;
LABEL_73:
        v144 = (volatile signed __int64 **)(v5 + 416);
        sub_1409C0820(&v120, (__int64 *)(v5 + 416), a2);
        v75 = v120.m256i_i64[0];
        if ( v120.m256i_i64[0] == -2 )
        {
          result = 1;
          v10 = 5;
          goto LABEL_84;
        }
        v76 = v120.m256i_i64[1];
        if ( *(_BYTE *)(v145 + 624) != 3 )
          goto LABEL_105;
        v77 = *(unsigned __int8 *)(v145 + 504);
        if ( v77 != 5 )
        {
          if ( v77 == 4 )
          {
            sub_1408ED810(v145 + 512);
          }
          else
          {
            if ( v77 != 3 )
            {
LABEL_105:
              if ( v75 > 0 )
                sub_140001660(v76, v75, 1);
              v95 = *(char **)(v145 + 632);
              if ( !*(_BYTE *)(v145 + 640) && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v74) )
                v95[1] = 1;
              v96 = *v95;
              *v95 = 0;
              if ( v96 == 2 )
                WakeByAddressSingle(v95);
              goto LABEL_156;
            }
            if ( *(_QWORD *)(v145 + 512) != -1 )
              sub_14040C610(v145 + 512);
          }
        }
        sub_14002F9D0(v145 + 472);
        goto LABEL_105;
      }
      v32 = _InterlockedIncrement64(&qword_1421E74D0);
      *(_QWORD *)(*(_QWORD *)(v5 + 632) + 800LL) = v32;
      *(_BYTE *)(*(_QWORD *)(v5 + 632) + 835LL) = 2;
      v33 = *(_QWORD *)(v5 + 632);
      v34 = *(_QWORD *)(v33 + 640);
      if ( v34 > 0 )
        sub_140001660(*(_QWORD *)(v33 + 648), v34, 1);
      *(_QWORD *)(v33 + 640) = -1;
      v35 = *(_QWORD *)(v5 + 632);
      v36 = *(_QWORD *)(v35 + 616);
      if ( v36 > 0 )
        sub_140001660(*(_QWORD *)(v35 + 624), v36, 1);
      *(_QWORD *)(v35 + 616) = -1;
      *(_QWORD *)(v5 + 312) = v32;
      sub_140028CC0(*(_QWORD *)(v5 + 632), *(unsigned __int8 *)(v5 + 640));
      v37 = sub_14054A5A0(*(_QWORD *)(v145 + 72));
      sub_140D9F290(&v120, v37 + 32);
      sub_1403FDAC0((__int64)&v131, (__int64)&v120);
      v120.m256i_i8[2] = 2;
      v120.m256i_i16[0] = -1;
      v120.m256i_i32[4] = -1;
      sub_140477DA0((__int64)&v140, (__int64)&v131, (__int64)&v120);
      v38 = v145;
      *(_BYTE *)(v145 + 411) = BYTE2(v140);
      *(_WORD *)(v38 + 408) = v140;
      v39 = v141;
      *(_QWORD *)(v38 + 328) = *((_QWORD *)&v140 + 1);
      *(_DWORD *)(v38 + 336) = v39;
      sub_14017B190(*(_QWORD *)(v38 + 72));
      LOBYTE(v40) = 1;
      sub_14047CCD0(*(_QWORD *)(v145 + 72), v40);
      v41 = (_BYTE *)(v145 + 411);
      sub_14047CB90(*(unsigned __int8 *)(v145 + 411));
      if ( *(_WORD *)(v145 + 408) < 0x65u && *(_DWORD *)(v145 + 336) != -1 )
      {
        v43 = sub_140477E20(v41, v42);
        if ( v43 )
        {
          sub_1415141D0(&v120, v43 / 0x3E8, 1000000 * (unsigned int)(v43 % 0x3E8), &off_141A26178);
          v136 = v125;
          v44 = v124;
          v135 = v124;
          v45 = v123;
          v134 = v123;
          v46 = *(_OWORD *)v120.m256i_i8;
          v47 = *(_OWORD *)&v120.m256i_u64[2];
          v48 = v121;
          v49 = v122;
          v133 = v122;
          v132 = v121;
          v131 = v120;
          *((_OWORD *)v11 + 6) = v125;
          *((_OWORD *)v11 + 5) = v44;
          *((_OWORD *)v11 + 4) = v45;
          *((_OWORD *)v11 + 3) = v49;
          *((_OWORD *)v11 + 2) = v48;
          *((_OWORD *)v11 + 1) = v47;
          *(_OWORD *)v11 = v46;
          v5 = v145;
LABEL_43:
          v144 = (volatile signed __int64 **)(v5 + 416);
          if ( (unsigned __int8)sub_141514440(v5 + 416, a2) )
          {
            result = 1;
            v10 = 6;
            goto LABEL_84;
          }
          sub_1408ED810(v144);
        }
        if ( *(_WORD *)(v145 + 408) <= 0x64u )
          sub_14021B9D0();
      }
      sub_140C75E50(&v120, *(_QWORD *)(v145 + 72));
      if ( v120.m256i_i64[0] != -1 && v120.m256i_i64[0] )
        sub_140001660(v120.m256i_i64[1], v120.m256i_i64[0], 1);
      sub_1414FE5D0(&v120, 64, v50);
      *((_QWORD *)&v121 + 1) = 64;
      v51 = sub_1408F0220((__int128 *)v120.m256i_i8);
      *(_QWORD *)&v140 = v51;
      v52 = v145;
      *(_QWORD *)(v145 + 344) = v53;
      *(_BYTE *)(v52 + 414) = 0;
      v54 = (__int128 *)(v52 + 656);
      sub_140C88000(v52 + 656, v51);
      if ( *(_DWORD *)v54 == -1 )
      {
        v78 = v145;
        v79 = v145 + 416;
        *(_QWORD *)(v145 + 432) = *(_QWORD *)(v145 + 680);
        *(_OWORD *)(v78 + 416) = *(_OWORD *)(v78 + 664);
        v80 = *(_QWORD *)(v78 + 72);
        v81 = **(_QWORD **)(v78 + 64);
        v82 = *(_QWORD *)(v78 + 312);
        v131.m256i_i64[0] = v79;
        v131.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_1416ABFD0(&v120, &unk_141A261C0, &v131);
        *(_OWORD *)v131.m256i_i8 = *(_OWORD *)v120.m256i_i8;
        v131.m256i_i64[2] = v120.m256i_i64[2];
        sub_140C87C70(v80, v81, 1, v82, (__int64)&v131);
        v5 = v145;
        *(_QWORD *)(v145 + 440) = v145 + 200;
        *(_BYTE *)(v5 + 648) = 0;
LABEL_82:
        v144 = (volatile signed __int64 **)(v5 + 440);
        sub_1409C0820(&v120, (__int64 *)(v5 + 440), a2);
        v83 = v120.m256i_i64[0];
        if ( v120.m256i_i64[0] == -2 )
        {
          result = 1;
          v10 = 7;
          goto LABEL_84;
        }
        v85 = v120.m256i_i64[1];
        if ( *(_BYTE *)(v145 + 648) != 3 )
          goto LABEL_113;
        v86 = *(unsigned __int8 *)(v145 + 528);
        if ( v86 != 5 )
        {
          if ( v86 == 4 )
          {
            sub_1408ED810(v145 + 536);
          }
          else
          {
            if ( v86 != 3 )
            {
LABEL_113:
              if ( v83 > 0 )
                sub_140001660(v85, v83, 1);
              v97 = *(_QWORD *)(v145 + 416);
              if ( v97 )
                sub_140001660(*(_QWORD *)(v145 + 424), v97, 1);
              goto LABEL_153;
            }
            if ( *(_QWORD *)(v145 + 536) != -1 )
              sub_14040C610(v145 + 536);
          }
        }
        sub_14002F9D0(v145 + 496);
        goto LABEL_113;
      }
      v55 = *v54;
      v56 = v54[1];
      v57 = v145;
      *(_OWORD *)(v145 + 384) = v54[2];
      *(_OWORD *)(v57 + 368) = v56;
      *(_OWORD *)(v57 + 352) = v55;
      v58 = *(_QWORD *)(v57 + 72);
      sub_1406129A0(&v131, v58);
      v60 = *(volatile signed __int64 **)(v58 + 136);
      v61 = _InterlockedIncrement64(v60);
      if ( (v61 < 0) ^ v59 | (v61 == 0)
        || (v62 = *(volatile signed __int64 **)(v58 + 144),
            v63 = _InterlockedIncrement64(v62),
            v64 = v145,
            (v63 < 0) ^ v59 | (v63 == 0)) )
      {
        BUG();
      }
      sub_1418F44E0((__m128i *)&v120, (const __m128i *)&v131, 0x88u);
      v65 = *(__int64 **)(v64 + 64);
      *(_BYTE *)(v64 + 413) = 0;
      v126 = v60;
      v127 = v62;
      v128 = *(_QWORD *)(v64 + 304);
      v129 = *v65;
      v130 = 0;
      v66 = sub_1409B6B50(&v120, &off_141A261A8);
      v5 = v145;
      v67 = v145 + 344;
      *(_QWORD *)(v145 + 400) = v66;
      *(_BYTE *)(v5 + 412) = 0;
      *(_QWORD *)(v5 + 416) = *(_QWORD *)(v5 + 88);
      *(_BYTE *)(v5 + 424) = 0;
      *(_QWORD *)(v5 + 544) = v67;
      *(_QWORD *)(v5 + 552) = v5 + 200;
      *(_BYTE *)(v5 + 584) = 0;
      *(_QWORD *)(v5 + 752) = v5 + 412;
      *(_QWORD *)(v5 + 760) = v5 + 416;
LABEL_55:
      v68 = sub_1409E6290(v5 + 752, a2);
      if ( v68 == -1 )
      {
        result = 1;
        v10 = 8;
        goto LABEL_84;
      }
      sub_140996A10(v145 + 416);
      if ( v68 )
      {
        v5 = v145;
        if ( v68 != 1 )
          sub_1419392A0("all branches are disabled and there is no else branch", 107, &off_141A25E70);
        v69 = 12;
        v70 = &unk_141A261E1;
      }
      else
      {
        v69 = 7;
        v70 = &unk_141A261DA;
        v5 = v145;
      }
      *(_QWORD *)(v5 + 632) = v70;
      *(_QWORD *)(v5 + 640) = v69;
      if ( *(_QWORD *)off_1421E6EC0 >= 3u )
      {
        v131.m256i_i64[0] = v5 + 632;
        v131.m256i_i64[1] = (__int64)sub_140186EE0;
        *(_QWORD *)&v122 = 3;
        *((_QWORD *)&v122 + 1) = aCodexmateLibCo_6;
        *(_QWORD *)&v123 = 35;
        *(_QWORD *)&v124 = &unk_141A261ED;
        *((_QWORD *)&v124 + 1) = &v131;
        v120.m256i_i64[0] = 0;
        v120.m256i_i64[1] = (__int64)aCodexmateLibCo_6;
        *(_OWORD *)&v120.m256i_u64[2] = 0x23u;
        *(_QWORD *)&v121 = aSrcCoreVoiceRu_3;
        *((_QWORD *)&v121 + 1) = 29;
        *((_QWORD *)&v123 + 1) = 0x106300000001LL;
        sub_1414D53A0(&v143, &v120);
        v5 = v145;
      }
      *(_QWORD *)(v5 + 416) = v5 + 200;
      *(_BYTE *)(v5 + 624) = 0;
LABEL_64:
      v144 = (volatile signed __int64 **)(v5 + 416);
      sub_1409C0820(&v120, (__int64 *)(v5 + 416), a2);
      v71 = v120.m256i_i64[0];
      if ( v120.m256i_i64[0] == -2 )
      {
        result = 1;
        v10 = 9;
        goto LABEL_84;
      }
      v72 = v120.m256i_i64[1];
      if ( *(_BYTE *)(v145 + 624) != 3 )
        goto LABEL_93;
      v73 = *(unsigned __int8 *)(v145 + 504);
      switch ( v73 )
      {
        case 5:
          goto LABEL_92;
        case 4:
          sub_1408ED810(v145 + 512);
LABEL_92:
          sub_14002F9D0(v145 + 472);
          break;
        case 3:
          if ( *(_QWORD *)(v145 + 512) != -1 )
            sub_14040C610(v145 + 512);
          goto LABEL_92;
      }
LABEL_93:
      if ( v71 > 0 )
        sub_140001660(v72, v71, 1);
      v87 = (__int64 *)(v145 + 400);
      sub_1414FDA60(v145 + 400);
      v88 = sub_14054A5A0(*(_QWORD *)(v145 + 72));
      v89 = (char *)(v88 + 32);
      LOBYTE(v90) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v88 + 32), 1, 0) )
        sub_141937480(v89);
      v91 = off_1421E7210;
      if ( 2 * *off_1421E7210 )
      {
        v92 = sub_141938160(v90);
        LOBYTE(v92) = v92 ^ 1;
        v93 = v145;
        if ( *(_BYTE *)(v88 + 33) )
          goto LABEL_99;
      }
      else
      {
        v92 = 0;
        v93 = v145;
        if ( *(_BYTE *)(v88 + 33) )
        {
LABEL_99:
          if ( !(_BYTE)v92 && 2 * *v91 && !(unsigned __int8)sub_141938160(v93) )
            *(_BYTE *)(v88 + 33) = 1;
          v94 = *v89;
          *v89 = 0;
          if ( v94 != 2 )
            goto LABEL_147;
          goto LABEL_146;
        }
      }
      v98 = **(_QWORD **)(v93 + 64);
      if ( !v98 || *(_QWORD *)(v88 + 840) != v98 || (unsigned __int8)(*(_BYTE *)(v88 + 867) - 1) >= 3u )
      {
        if ( !(_BYTE)v92 && 2 * *v91 && !(unsigned __int8)sub_141938160(v93) )
          *(_BYTE *)(v88 + 33) = 1;
        v108 = *v89;
        *v89 = 0;
        if ( v108 != 2 )
          goto LABEL_147;
LABEL_146:
        WakeByAddressSingle(v89);
LABEL_147:
        v109 = *v87;
        if ( (unsigned __int8)sub_1414FCFD0(v109) )
          sub_1414FD8E0(v109);
        v144 = (volatile signed __int64 **)(v145 + 352);
        sub_14118BF90(&v120);
        if ( v120.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v120.m256i_i64[0] )
          sub_140001660(v120.m256i_i64[1], v120.m256i_i64[0], 1);
        sub_140995E90(v144);
LABEL_153:
        v144 = (volatile signed __int64 **)(v145 + 344);
        sub_140947790((__int64 *)(v145 + 344));
        if ( !_InterlockedDecrement64(*v144) )
          sub_1409E4320();
        *(_BYTE *)(v145 + 414) = 0;
        goto LABEL_156;
      }
      LODWORD(v142) = v92;
      v144 = (volatile signed __int64 **)(v88 + 32);
      if ( !*(_QWORD *)(v88 + 352) && *(_QWORD *)(v88 + 328) )
      {
        sub_1416AC440(&v120, v88 + 312);
        v99 = *(_QWORD *)(v88 + 336);
        if ( v99 )
          sub_140001660(*(_QWORD *)(v88 + 344), v99, 1);
        *(_QWORD *)(v88 + 352) = v120.m256i_i64[2];
        *(_OWORD *)(v88 + 336) = *(_OWORD *)v120.m256i_i8;
      }
      *(_QWORD *)(v88 + 40) = sub_1403FDA70(*(_QWORD *)(v88 + 720), *(_DWORD *)(v88 + 728));
      *(_QWORD *)(v88 + 48) = v100;
      *(_DWORD *)(v88 + 728) = -1;
      if ( *(_DWORD *)(v88 + 80) <= 0xFFFFFFFD )
      {
        v137 = v88 + 80;
        sub_14093B470((__int64 *)(v88 + 80));
      }
      *(_QWORD *)(v88 + 80) = -2;
      v101 = _InterlockedIncrement64(&qword_1421E74D0);
      *(_QWORD *)(v88 + 832) = v101;
      sub_140E91160(*(_QWORD *)(v88 + 344), *(_QWORD *)(v88 + 352));
      v103 = v102;
      v104 = 4;
      if ( !v102 )
      {
        *(_QWORD *)(v88 + 840) = 0;
        v104 = 0;
      }
      *(_BYTE *)(v88 + 867) = v104;
      sub_140028CC0(v144, (unsigned int)v142);
      sub_14017AFD0(*(_QWORD *)(v145 + 72));
      sub_14047CCD0(*(_QWORD *)(v145 + 72), 0);
      sub_14047CB90(*(unsigned __int8 *)(v145 + 411));
      sub_14021BF70(v105);
      if ( v103 )
      {
        sub_1406119B0(&v120, *(_QWORD *)(v145 + 72));
        sub_14047DB10(&v120, v101);
      }
      sub_140C75E50(&v120, *(_QWORD *)(v145 + 72));
      if ( v120.m256i_i64[0] != -1 && v120.m256i_i64[0] )
        sub_140001660(v120.m256i_i64[1], v120.m256i_i64[0], 1);
      v106 = *v87;
      if ( (unsigned __int8)sub_1414FCFD0(v106) )
        sub_1414FD8E0(v106);
      v144 = (volatile signed __int64 **)(v145 + 352);
      sub_14118BF90(&v120);
      if ( v120.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v120.m256i_i64[0] )
        sub_140001660(v120.m256i_i64[1], v120.m256i_i64[0], 1);
      sub_140995E90(v144);
      v144 = (volatile signed __int64 **)(v145 + 344);
      sub_140947790((__int64 *)(v145 + 344));
      if ( !_InterlockedDecrement64(*v144) )
        sub_1409E4320();
      v107 = v145;
      *(_BYTE *)(v145 + 414) = 0;
      *(_BYTE *)(v107 + 413) = 0;
      sub_1409964C0(v107 + 200);
LABEL_160:
      v84 = v145;
      v111 = *(_QWORD *)(v145 + 96);
      if ( v111 )
        sub_140001660(*(_QWORD *)(v145 + 104), v111, 1);
      v112 = *(_QWORD *)(v84 + 120);
      if ( v112 )
        sub_140001660(*(_QWORD *)(v84 + 128), v112, 1);
      v113 = *(_QWORD *)(v84 + 144);
      if ( v113 )
        sub_140001660(*(_QWORD *)(v84 + 152), v113, 1);
      v114 = *(_QWORD *)(v84 + 168);
      v10 = 1;
      if ( v114 )
        sub_140001660(*(_QWORD *)(v84 + 176), v114, 1);
      result = 0;
LABEL_169:
      *(_BYTE *)(v84 + 410) = v10;
      return result;
    case 4LL:
      goto LABEL_15;
    case 5LL:
      goto LABEL_73;
    case 6LL:
      goto LABEL_43;
    case 7LL:
      goto LABEL_82;
    case 8LL:
      goto LABEL_55;
    case 9LL:
      goto LABEL_64;
  }
}
