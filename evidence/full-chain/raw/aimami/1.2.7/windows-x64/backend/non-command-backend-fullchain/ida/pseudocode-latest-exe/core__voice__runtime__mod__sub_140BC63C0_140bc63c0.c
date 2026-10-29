// win 1.2.7 latest-exe | module src/core/voice/runtime/mod.rs | ea 0x140bc63c0 | successor of pre-update 0x140460540 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
char __fastcall sub_140BC63C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v17; // r8
  __int64 v18; // r14
  char *v19; // rbx
  __int64 v20; // rcx
  __int64 *v21; // r15
  char v22; // al
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  signed __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __int128 v48; // xmm4
  __int128 v49; // xmm5
  __int128 v50; // xmm6
  volatile signed __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int128 *v54; // rdi
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int64 v57; // r15
  __int64 v58; // rdi
  char v59; // of
  volatile signed __int64 *v60; // rbx
  __int64 v61; // rt0
  volatile signed __int64 *v62; // r14
  __int64 v63; // rt0
  __int64 *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  char v67; // bl
  __int64 v68; // rax
  void *v69; // rcx
  __int64 v70; // rsi
  __int64 v71; // rdi
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
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
  __int64 v91; // r8
  char *v92; // r14
  __int64 v93; // rcx
  __int64 *v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  char v97; // al
  char *v98; // rsi
  char v99; // al
  __int64 v100; // rdx
  unsigned int v101; // eax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rdx
  signed __int64 v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // r14
  char v108; // al
  __int64 v109; // rsi
  __int64 v110; // rax
  char v111; // al
  __int64 v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int128 v118; // [rsp+30h] [rbp-50h]
  __int128 v119; // [rsp+40h] [rbp-40h]
  __int128 v120; // [rsp+50h] [rbp-30h]
  __int128 v121; // [rsp+60h] [rbp-20h]
  __int64 v122; // [rsp+70h] [rbp-10h]
  __m256i v123; // [rsp+80h] [rbp+0h] BYREF
  __int128 v124; // [rsp+A0h] [rbp+20h]
  __int128 v125; // [rsp+B0h] [rbp+30h]
  __int128 v126; // [rsp+C0h] [rbp+40h]
  __int128 v127; // [rsp+D0h] [rbp+50h]
  __int128 v128; // [rsp+E0h] [rbp+60h]
  volatile signed __int64 *v129; // [rsp+108h] [rbp+88h]
  volatile signed __int64 *v130; // [rsp+110h] [rbp+90h]
  __int64 v131; // [rsp+118h] [rbp+98h]
  __int64 v132; // [rsp+120h] [rbp+A0h]
  char v133; // [rsp+298h] [rbp+218h]
  __m256i v134; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v135; // [rsp+2C0h] [rbp+240h]
  __int128 v136; // [rsp+2D0h] [rbp+250h]
  __int128 v137; // [rsp+2E0h] [rbp+260h]
  __int128 v138; // [rsp+2F0h] [rbp+270h]
  __int128 v139; // [rsp+300h] [rbp+280h]
  __int64 v140; // [rsp+328h] [rbp+2A8h]
  __int128 v141; // [rsp+330h] [rbp+2B0h]
  __int64 v142; // [rsp+340h] [rbp+2C0h]
  __int128 v143; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v144; // [rsp+360h] [rbp+2E0h]
  __int64 v145; // [rsp+368h] [rbp+2E8h]
  char v146; // [rsp+377h] [rbp+2F7h] BYREF
  volatile signed __int64 **v147; // [rsp+378h] [rbp+2F8h]
  __int64 v148; // [rsp+380h] [rbp+300h]
  __int64 v149; // [rsp+388h] [rbp+308h]

  v149 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 410);
  v148 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 413) = 0;
      *(_BYTE *)(a1 + 415) = 1;
      v147 = *(volatile signed __int64 ***)a1;
      v145 = *(_QWORD *)(a1 + 8);
      v7 = *(_QWORD *)(a1 + 16);
      sub_1416DB410(&v134, *(_QWORD *)(a1 + 48));
      sub_1416DB410(&v123, *(_QWORD *)(v5 + 56));
      *(_BYTE *)(v5 + 415) = 0;
      *(_QWORD *)(v5 + 96) = v147;
      *(_QWORD *)(v5 + 104) = v145;
      *(_QWORD *)(v5 + 112) = v7;
      *(_OWORD *)(v5 + 120) = *(_OWORD *)v134.m256i_i8;
      *(_QWORD *)(v5 + 136) = v134.m256i_i64[2];
      *(_OWORD *)(v5 + 144) = *(_OWORD *)v123.m256i_i8;
      *(_QWORD *)(v5 + 160) = v123.m256i_i64[2];
      *(_OWORD *)(v5 + 168) = *(_OWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 184) = *(_QWORD *)(v5 + 40);
      *(_DWORD *)(v5 + 192) = 16000;
      *(_QWORD *)(v5 + 872) = v5 + 96;
      *(_BYTE *)(v5 + 892) = 0;
      goto LABEL_3;
    case 1LL:
      sub_14196B990(&off_141A88F20);
    case 2LL:
      sub_14196B9B0(&off_141A88F20);
    case 3LL:
LABEL_3:
      v147 = (volatile signed __int64 **)(v5 + 416);
      sub_140BD2A20((__int64)&v123, v5 + 416, a2, a4);
      v8 = v123.m256i_i64[0];
      if ( v123.m256i_i64[0] == -2 )
      {
        result = 1;
        v10 = 3;
LABEL_88:
        v85 = v148;
        goto LABEL_173;
      }
      v142 = v123.m256i_i64[3];
      v141 = *(_OWORD *)&v123.m256i_u64[1];
      v118 = v124;
      v119 = v125;
      v120 = v126;
      v121 = v127;
      v122 = v128;
      v11 = v147;
      sub_140B6DDA0(v147);
      if ( v8 == -1 )
      {
        v144 = v142;
        v143 = v141;
        v28 = *(_QWORD *)(v148 + 72);
        v29 = **(_QWORD **)(v148 + 64);
        v30 = **(_QWORD **)(v148 + 80);
        v134.m256i_i64[0] = (__int64)&v143;
        v134.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_1416DAFA0(&v123, &unk_141A88F50, &v134);
        *(_OWORD *)v134.m256i_i8 = *(_OWORD *)v123.m256i_i8;
        v134.m256i_i64[2] = v123.m256i_i64[2];
        sub_140829D70(v28, v29, 1, v30, (__int64)&v134);
        if ( (_QWORD)v143 )
          sub_140001660(*((_QWORD *)&v143 + 1), v143, 1);
        goto LABEL_164;
      }
      v12 = v148;
      v13 = v148 + 200;
      *(_QWORD *)(v148 + 200) = v8;
      *(_OWORD *)(v12 + 208) = v141;
      *(_QWORD *)(v12 + 224) = v142;
      *(_OWORD *)(v12 + 232) = v118;
      *(_OWORD *)(v12 + 248) = v119;
      *(_OWORD *)(v12 + 264) = v120;
      *(_OWORD *)(v12 + 280) = v121;
      *(_QWORD *)(v12 + 296) = v122;
      v14 = sub_1408744E0(v13);
      v15 = v148;
      *(_QWORD *)(v148 + 304) = v14;
      *(_BYTE *)(v15 + 413) = 1;
      v18 = sub_140595030(*(_QWORD *)(v15 + 72));
      *(_QWORD *)(v148 + 320) = v18;
      v19 = (char *)(v18 + 32);
      LOBYTE(v20) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v18 + 32), 1, 0) )
        sub_141969A30(v19);
      v21 = off_142240260;
      if ( 2 * *off_142240260 )
      {
        v22 = sub_14196A710(v20, v16, v17) ^ 1;
        v23 = *(unsigned __int8 *)(v18 + 33);
        if ( (_BYTE)v23 )
        {
LABEL_10:
          if ( !v22 && 2 * *v21 && !(unsigned __int8)sub_14196A710(v23, v16, v17) )
            *(_BYTE *)(v18 + 33) = 1;
          v24 = *v19;
          *v19 = 0;
          if ( v24 == 2 )
            WakeByAddressSingle(v19);
          v5 = v148;
          *(_QWORD *)(v148 + 416) = v13;
          *(_BYTE *)(v5 + 624) = 0;
LABEL_15:
          v147 = (volatile signed __int64 **)(v5 + 416);
          sub_140BD2460(&v123, v5 + 416, a2);
          v25 = v123.m256i_i64[0];
          if ( v123.m256i_i64[0] == -2 )
          {
            result = 1;
            v10 = 4;
            goto LABEL_88;
          }
          v26 = v123.m256i_i64[1];
          if ( *(_BYTE *)(v148 + 624) != 3 )
            goto LABEL_27;
          v27 = *(unsigned __int8 *)(v148 + 504);
          if ( v27 != 5 )
          {
            if ( v27 == 4 )
            {
              sub_140291A70(v148 + 512);
            }
            else
            {
              if ( v27 != 3 )
                goto LABEL_27;
              if ( *(_QWORD *)(v148 + 512) != -1 )
                sub_140291900(v148 + 512);
            }
          }
          sub_1406C0ED0(v148 + 472);
LABEL_27:
          if ( v25 > 0 )
            sub_140001660(v26, v25, 1);
LABEL_160:
          if ( *(_BYTE *)(v148 + 413) )
          {
            v147 = (volatile signed __int64 **)(v148 + 304);
            sub_140B663A0();
            if ( !_InterlockedDecrement64(*v147) )
              sub_140CA3CC0();
          }
          v113 = v148;
          *(_BYTE *)(v148 + 413) = 0;
          sub_140B71BF0(v113 + 200);
          goto LABEL_164;
        }
      }
      else
      {
        v22 = 0;
        v23 = *(unsigned __int8 *)(v18 + 33);
        if ( (_BYTE)v23 )
          goto LABEL_10;
      }
      v5 = v148;
      *(_QWORD *)(v148 + 632) = v19;
      *(_BYTE *)(v5 + 640) = v22;
      v31 = **(_QWORD **)(v5 + 80);
      if ( *(_QWORD *)(v18 + 832) != v31
        || qword_1422404C0 != v31
        || (v32 = **(_QWORD **)(v5 + 64)) == 0
        || (v33 = *(_QWORD *)(v5 + 632), *(_QWORD *)(v33 + 808) != v32)
        || *(_BYTE *)(v33 + 835) != 1 )
      {
        *(_QWORD *)(v5 + 416) = v13;
        *(_BYTE *)(v5 + 624) = 0;
LABEL_77:
        v147 = (volatile signed __int64 **)(v5 + 416);
        sub_140BD2460(&v123, v5 + 416, a2);
        v76 = v123.m256i_i64[0];
        if ( v123.m256i_i64[0] == -2 )
        {
          result = 1;
          v10 = 5;
          goto LABEL_88;
        }
        v77 = v123.m256i_i64[1];
        if ( *(_BYTE *)(v148 + 624) != 3 )
          goto LABEL_109;
        v78 = *(unsigned __int8 *)(v148 + 504);
        if ( v78 != 5 )
        {
          if ( v78 == 4 )
          {
            sub_140291A70(v148 + 512);
          }
          else
          {
            if ( v78 != 3 )
            {
LABEL_109:
              if ( v76 > 0 )
                sub_140001660(v77, v76, 1);
              v98 = *(char **)(v148 + 632);
              if ( !*(_BYTE *)(v148 + 640) && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v74, v73, v75) )
                v98[1] = 1;
              v99 = *v98;
              *v98 = 0;
              if ( v99 == 2 )
                WakeByAddressSingle(v98);
              goto LABEL_160;
            }
            if ( *(_QWORD *)(v148 + 512) != -1 )
              sub_140291900(v148 + 512);
          }
        }
        sub_1406C0ED0(v148 + 472);
        goto LABEL_109;
      }
      v34 = _InterlockedIncrement64(&qword_1422404C0);
      *(_QWORD *)(*(_QWORD *)(v5 + 632) + 800LL) = v34;
      *(_BYTE *)(*(_QWORD *)(v5 + 632) + 835LL) = 2;
      v35 = *(_QWORD *)(v5 + 632);
      v36 = *(_QWORD *)(v35 + 640);
      if ( v36 != -1 && v36 )
        sub_140001660(*(_QWORD *)(v35 + 648), v36, 1);
      *(_QWORD *)(v35 + 640) = -1;
      v37 = *(_QWORD *)(v5 + 632);
      v38 = *(_QWORD *)(v37 + 616);
      if ( v38 != -1 && v38 )
        sub_140001660(*(_QWORD *)(v37 + 624), v38, 1);
      *(_QWORD *)(v37 + 616) = -1;
      *(_QWORD *)(v5 + 312) = v34;
      sub_14002B980(*(_QWORD *)(v5 + 632), *(unsigned __int8 *)(v5 + 640));
      v39 = sub_140595030(*(_QWORD *)(v148 + 72));
      sub_1408740F0(&v123, v39 + 32);
      sub_140B675B0(&v134, &v123);
      v123.m256i_i8[2] = 2;
      v123.m256i_i16[0] = -1;
      v123.m256i_i32[4] = -1;
      sub_140BDD540(&v143, &v134, &v123);
      v40 = v148;
      *(_BYTE *)(v148 + 411) = BYTE2(v143);
      *(_WORD *)(v40 + 408) = v143;
      v41 = v144;
      *(_QWORD *)(v40 + 328) = *((_QWORD *)&v143 + 1);
      *(_DWORD *)(v40 + 336) = v41;
      sub_140180020(*(_QWORD *)(v40 + 72));
      LOBYTE(v42) = 1;
      sub_1404BD210(*(_QWORD *)(v148 + 72), v42);
      v43 = v148 + 411;
      sub_140B48670(*(unsigned __int8 *)(v148 + 411));
      if ( *(_WORD *)(v148 + 408) < 0x65u && *(_DWORD *)(v148 + 336) != -1 )
      {
        v44 = sub_140B31B30(v43);
        if ( v44 )
        {
          sub_141549640(&v123, v44 / 0x3E8, 1000000 * (unsigned int)(v44 % 0x3E8), &off_141A88F38);
          v139 = v128;
          v45 = v127;
          v138 = v127;
          v46 = v126;
          v137 = v126;
          v47 = *(_OWORD *)v123.m256i_i8;
          v48 = *(_OWORD *)&v123.m256i_u64[2];
          v49 = v124;
          v50 = v125;
          v136 = v125;
          v135 = v124;
          v134 = v123;
          *((_OWORD *)v11 + 6) = v128;
          *((_OWORD *)v11 + 5) = v45;
          *((_OWORD *)v11 + 4) = v46;
          *((_OWORD *)v11 + 3) = v50;
          *((_OWORD *)v11 + 2) = v49;
          *((_OWORD *)v11 + 1) = v48;
          *(_OWORD *)v11 = v47;
          v5 = v148;
LABEL_45:
          v147 = (volatile signed __int64 **)(v5 + 416);
          if ( (unsigned __int8)sub_1415498B0(v5 + 416, a2) )
          {
            result = 1;
            v10 = 6;
            goto LABEL_88;
          }
          sub_140291A70(v147);
        }
        if ( *(_WORD *)(v148 + 408) <= 0x64u )
          sub_140D4B420();
      }
      sub_140818050(&v123, *(_QWORD *)(v148 + 72));
      if ( v123.m256i_i64[0] != -1 && v123.m256i_i64[0] )
        sub_140001660(v123.m256i_i64[1], v123.m256i_i64[0], 1);
      v51 = sub_140AF7EA0(64, (__int64)&off_141A88F68);
      *(_QWORD *)&v143 = v51;
      v52 = v148;
      *(_QWORD *)(v148 + 344) = v53;
      *(_BYTE *)(v52 + 414) = 0;
      v54 = (__int128 *)(v52 + 656);
      sub_14082A100(v52 + 656, v51);
      if ( *(_DWORD *)v54 == -1 )
      {
        v79 = v148;
        v80 = v148 + 416;
        *(_QWORD *)(v148 + 432) = *(_QWORD *)(v148 + 680);
        *(_OWORD *)(v79 + 416) = *(_OWORD *)(v79 + 664);
        v81 = *(_QWORD *)(v79 + 72);
        v82 = **(_QWORD **)(v79 + 64);
        v83 = *(_QWORD *)(v79 + 312);
        v134.m256i_i64[0] = v80;
        v134.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_1416DAFA0(&v123, &unk_141A88F98, &v134);
        *(_OWORD *)v134.m256i_i8 = *(_OWORD *)v123.m256i_i8;
        v134.m256i_i64[2] = v123.m256i_i64[2];
        sub_140829D70(v81, v82, 1, v83, (__int64)&v134);
        v5 = v148;
        *(_QWORD *)(v148 + 440) = v148 + 200;
        *(_BYTE *)(v5 + 648) = 0;
LABEL_86:
        v147 = (volatile signed __int64 **)(v5 + 440);
        sub_140BD2460(&v123, v5 + 440, a2);
        v84 = v123.m256i_i64[0];
        if ( v123.m256i_i64[0] == -2 )
        {
          result = 1;
          v10 = 7;
          goto LABEL_88;
        }
        v86 = v123.m256i_i64[1];
        if ( *(_BYTE *)(v148 + 648) != 3 )
          goto LABEL_117;
        v87 = *(unsigned __int8 *)(v148 + 528);
        if ( v87 != 5 )
        {
          if ( v87 == 4 )
          {
            sub_140291A70(v148 + 536);
          }
          else
          {
            if ( v87 != 3 )
            {
LABEL_117:
              if ( v84 > 0 )
                sub_140001660(v86, v84, 1);
              v100 = *(_QWORD *)(v148 + 416);
              if ( v100 )
                sub_140001660(*(_QWORD *)(v148 + 424), v100, 1);
              goto LABEL_157;
            }
            if ( *(_QWORD *)(v148 + 536) != -1 )
              sub_140291900(v148 + 536);
          }
        }
        sub_1406C0ED0(v148 + 496);
        goto LABEL_117;
      }
      v55 = *v54;
      v56 = v54[1];
      v57 = v148;
      *(_OWORD *)(v148 + 384) = v54[2];
      *(_OWORD *)(v57 + 368) = v56;
      *(_OWORD *)(v57 + 352) = v55;
      v58 = *(_QWORD *)(v57 + 72);
      sub_1406458C0(&v134, v58);
      v60 = *(volatile signed __int64 **)(v58 + 136);
      v61 = _InterlockedIncrement64(v60);
      if ( (v61 < 0) ^ v59 | (v61 == 0)
        || (v62 = *(volatile signed __int64 **)(v58 + 144),
            v63 = _InterlockedIncrement64(v62),
            (v63 < 0) ^ v59 | (v63 == 0)) )
      {
        BUG();
      }
      sub_1419234B0(&v123, &v134, 136);
      v64 = *(__int64 **)(v57 + 64);
      *(_BYTE *)(v57 + 413) = 0;
      v129 = v60;
      v130 = v62;
      v131 = *(_QWORD *)(v57 + 304);
      v132 = *v64;
      v133 = 0;
      v65 = sub_140C690C0(&v123, &off_141A88F80);
      v5 = v148;
      v66 = v148 + 344;
      *(_QWORD *)(v148 + 400) = v65;
      *(_BYTE *)(v5 + 412) = 0;
      *(_QWORD *)(v5 + 416) = *(_QWORD *)(v5 + 88);
      *(_BYTE *)(v5 + 424) = 0;
      *(_QWORD *)(v5 + 544) = v66;
      *(_QWORD *)(v5 + 552) = v5 + 200;
      *(_BYTE *)(v5 + 584) = 0;
      *(_QWORD *)(v5 + 752) = v5 + 412;
      *(_QWORD *)(v5 + 760) = v5 + 416;
LABEL_57:
      v67 = sub_140CA86C0(v5 + 752, a2);
      if ( v67 == -1 )
      {
        result = 1;
        v10 = 8;
        goto LABEL_88;
      }
      if ( *(_BYTE *)(v148 + 424) == 4 )
        sub_140291A70(v148 + 432);
      sub_140B6D140(v148 + 544);
      if ( v67 )
      {
        v5 = v148;
        if ( v67 != 1 )
          sub_14196B850("all branches are disabled and there is no else branch", 107, &off_141A89040);
        v68 = 12;
        v69 = &unk_141A88FB9;
      }
      else
      {
        v68 = 7;
        v69 = &unk_141A88FB2;
        v5 = v148;
      }
      *(_QWORD *)(v5 + 632) = v69;
      *(_QWORD *)(v5 + 640) = v68;
      if ( *(_QWORD *)off_14223FF10 >= 3u )
      {
        v134.m256i_i64[0] = v5 + 632;
        v134.m256i_i64[1] = (__int64)sub_140191200;
        *(_QWORD *)&v125 = 3;
        *((_QWORD *)&v125 + 1) = "codexmate_lib::core::voice::runtimeall branches are disabled and there is no else branch";
        *(_QWORD *)&v126 = 35;
        *(_QWORD *)&v127 = &unk_141A88FC5;
        *((_QWORD *)&v127 + 1) = &v134;
        v123.m256i_i64[0] = 0;
        v123.m256i_i64[1] = (__int64)"codexmate_lib::core::voice::runtimeall branches are disabled and there is no else branch";
        *(_OWORD *)&v123.m256i_u64[2] = 0x23u;
        *(_QWORD *)&v124 = aSrcCoreVoiceRu_1;
        *((_QWORD *)&v124 + 1) = 29;
        *((_QWORD *)&v126 + 1) = 0x106300000001LL;
        sub_141503E20(&v146, &v123);
        v5 = v148;
      }
      *(_QWORD *)(v5 + 416) = v5 + 200;
      *(_BYTE *)(v5 + 624) = 0;
LABEL_68:
      v147 = (volatile signed __int64 **)(v5 + 416);
      sub_140BD2460(&v123, v5 + 416, a2);
      v70 = v123.m256i_i64[0];
      if ( v123.m256i_i64[0] == -2 )
      {
        result = 1;
        v10 = 9;
        goto LABEL_88;
      }
      v71 = v123.m256i_i64[1];
      if ( *(_BYTE *)(v148 + 624) != 3 )
        goto LABEL_97;
      v72 = *(unsigned __int8 *)(v148 + 504);
      switch ( v72 )
      {
        case 5:
          goto LABEL_96;
        case 4:
          sub_140291A70(v148 + 512);
LABEL_96:
          sub_1406C0ED0(v148 + 472);
          break;
        case 3:
          if ( *(_QWORD *)(v148 + 512) != -1 )
            sub_140291900(v148 + 512);
          goto LABEL_96;
      }
LABEL_97:
      if ( v70 > 0 )
        sub_140001660(v71, v70, 1);
      v88 = (__int64 *)(v148 + 400);
      sub_141533670(v148 + 400);
      v90 = sub_140595030(*(_QWORD *)(v148 + 72));
      v92 = (char *)(v90 + 32);
      LOBYTE(v93) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v90 + 32), 1, 0) )
        sub_141969A30(v92);
      v94 = off_142240260;
      if ( 2 * *off_142240260 )
      {
        v101 = sub_14196A710(v93, v89, v91);
        v95 = v101;
        LOBYTE(v95) = v101 ^ 1;
        v96 = v148;
        if ( *(_BYTE *)(v90 + 33) )
          goto LABEL_103;
      }
      else
      {
        v95 = 0;
        v96 = v148;
        if ( *(_BYTE *)(v90 + 33) )
        {
LABEL_103:
          if ( !(_BYTE)v95 && 2 * *v94 && !(unsigned __int8)sub_14196A710(v96, v95, v91) )
            *(_BYTE *)(v90 + 33) = 1;
          v97 = *v92;
          *v92 = 0;
          if ( v97 != 2 )
            goto LABEL_151;
          goto LABEL_150;
        }
      }
      v102 = **(_QWORD **)(v96 + 64);
      if ( !v102 || *(_QWORD *)(v90 + 840) != v102 || (unsigned __int8)(*(_BYTE *)(v90 + 867) - 1) >= 3u )
      {
        if ( !(_BYTE)v95 && 2 * *v94 && !(unsigned __int8)sub_14196A710(v96, v95, v91) )
          *(_BYTE *)(v90 + 33) = 1;
        v111 = *v92;
        *v92 = 0;
        if ( v111 != 2 )
          goto LABEL_151;
LABEL_150:
        WakeByAddressSingle(v92);
LABEL_151:
        v112 = *v88;
        if ( (unsigned __int8)sub_141532BE0(v112) )
          sub_1415334F0(v112);
        v147 = (volatile signed __int64 **)(v148 + 352);
        sub_141132B80(&v123);
        if ( v123.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v123.m256i_i64[0] )
          sub_140001660(v123.m256i_i64[1], v123.m256i_i64[0], 1);
        sub_140B71600(v147);
LABEL_157:
        v147 = (volatile signed __int64 **)(v148 + 344);
        sub_140B66000();
        if ( !_InterlockedDecrement64(*v147) )
          sub_140CA3B30();
        *(_BYTE *)(v148 + 414) = 0;
        goto LABEL_160;
      }
      LODWORD(v145) = v95;
      v147 = (volatile signed __int64 **)(v90 + 32);
      if ( !*(_QWORD *)(v90 + 352) && *(_QWORD *)(v90 + 328) )
      {
        sub_1416DB410(&v123, v90 + 312);
        v103 = *(_QWORD *)(v90 + 336);
        if ( v103 )
          sub_140001660(*(_QWORD *)(v90 + 344), v103, 1);
        *(_QWORD *)(v90 + 352) = v123.m256i_i64[2];
        *(_OWORD *)(v90 + 336) = *(_OWORD *)v123.m256i_i8;
      }
      *(_QWORD *)(v90 + 40) = sub_140B67560(*(_QWORD *)(v90 + 720), *(unsigned int *)(v90 + 728));
      *(_QWORD *)(v90 + 48) = v104;
      *(_DWORD *)(v90 + 728) = -1;
      if ( *(_DWORD *)(v90 + 80) <= 0xFFFFFFFD )
      {
        v140 = v90 + 80;
        sub_1404C96A0(v90 + 80);
      }
      *(_QWORD *)(v90 + 80) = -2;
      v105 = _InterlockedIncrement64(&qword_1422404C0);
      *(_QWORD *)(v90 + 832) = v105;
      sub_1408FEA60(*(_QWORD *)(v90 + 344), *(_QWORD *)(v90 + 352));
      v107 = v106;
      v108 = 4;
      if ( !v106 )
      {
        *(_QWORD *)(v90 + 840) = 0;
        v108 = 0;
      }
      *(_BYTE *)(v90 + 867) = v108;
      sub_14002B980(v147, (unsigned int)v145);
      sub_14017FE60(*(_QWORD *)(v148 + 72));
      sub_1404BD210(*(_QWORD *)(v148 + 72), 0);
      sub_140B48670(*(unsigned __int8 *)(v148 + 411));
      sub_140D4B9B0();
      if ( v107 )
      {
        sub_140643830(&v123, *(_QWORD *)(v148 + 72));
        sub_140BE2690(&v123, v105);
      }
      sub_140818050(&v123, *(_QWORD *)(v148 + 72));
      if ( v123.m256i_i64[0] != -1 && v123.m256i_i64[0] )
        sub_140001660(v123.m256i_i64[1], v123.m256i_i64[0], 1);
      v109 = *v88;
      if ( (unsigned __int8)sub_141532BE0(v109) )
        sub_1415334F0(v109);
      v147 = (volatile signed __int64 **)(v148 + 352);
      sub_141132B80(&v123);
      if ( v123.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v123.m256i_i64[0] )
        sub_140001660(v123.m256i_i64[1], v123.m256i_i64[0], 1);
      sub_140B71600(v147);
      v147 = (volatile signed __int64 **)(v148 + 344);
      sub_140B66000();
      if ( !_InterlockedDecrement64(*v147) )
        sub_140CA3B30();
      v110 = v148;
      *(_BYTE *)(v148 + 414) = 0;
      *(_BYTE *)(v110 + 413) = 0;
      sub_140B71BF0(v110 + 200);
LABEL_164:
      v85 = v148;
      v114 = *(_QWORD *)(v148 + 96);
      if ( v114 )
        sub_140001660(*(_QWORD *)(v148 + 104), v114, 1);
      v115 = *(_QWORD *)(v85 + 120);
      if ( v115 )
        sub_140001660(*(_QWORD *)(v85 + 128), v115, 1);
      v116 = *(_QWORD *)(v85 + 144);
      if ( v116 )
        sub_140001660(*(_QWORD *)(v85 + 152), v116, 1);
      v117 = *(_QWORD *)(v85 + 168);
      v10 = 1;
      if ( v117 )
        sub_140001660(*(_QWORD *)(v85 + 176), v117, 1);
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
