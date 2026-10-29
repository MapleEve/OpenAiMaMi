// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140460540 | name sub_140460540
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140460540(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v41; // rdi
  __int64 v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  __int128 v46; // xmm4
  __int128 v47; // xmm5
  __int128 v48; // xmm6
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int128 *v53; // rdi
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // rax
  __int64 v57; // rdi
  char v58; // of
  volatile signed __int64 *v59; // rbx
  __int64 v60; // rt0
  volatile signed __int64 *v61; // r14
  __int64 v62; // rt0
  __int64 v63; // r15
  __int64 *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  char v67; // bl
  __int64 v68; // rax
  void *v69; // rcx
  __int64 v70; // rsi
  __int64 v71; // rdi
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rdi
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rbx
  __int64 v81; // r14
  __int64 v82; // rsi
  __int64 v83; // rsi
  __int64 v84; // rdi
  int v85; // eax
  __int64 *v86; // rsi
  __int64 v87; // rdi
  char *v88; // r14
  __int64 v89; // rcx
  __int64 *v90; // rbx
  int v91; // edx
  __int64 v92; // rcx
  char v93; // al
  char *v94; // rsi
  char v95; // al
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rdx
  signed __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // r14
  char v103; // al
  __int64 v104; // rcx
  __int64 v105; // rsi
  __int64 v106; // rax
  char v107; // al
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int128 v114; // [rsp+30h] [rbp-50h]
  __int128 v115; // [rsp+40h] [rbp-40h]
  __int128 v116; // [rsp+50h] [rbp-30h]
  __int128 v117; // [rsp+60h] [rbp-20h]
  __int64 v118; // [rsp+70h] [rbp-10h]
  __m256i v119; // [rsp+80h] [rbp+0h] BYREF
  __int128 v120; // [rsp+A0h] [rbp+20h]
  __int128 v121; // [rsp+B0h] [rbp+30h]
  __int128 v122; // [rsp+C0h] [rbp+40h]
  __int128 v123; // [rsp+D0h] [rbp+50h]
  __int128 v124; // [rsp+E0h] [rbp+60h]
  volatile signed __int64 *v125; // [rsp+108h] [rbp+88h]
  volatile signed __int64 *v126; // [rsp+110h] [rbp+90h]
  __int64 v127; // [rsp+118h] [rbp+98h]
  __int64 v128; // [rsp+120h] [rbp+A0h]
  char v129; // [rsp+298h] [rbp+218h]
  __m256i v130; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v131; // [rsp+2C0h] [rbp+240h]
  __int128 v132; // [rsp+2D0h] [rbp+250h]
  __int128 v133; // [rsp+2E0h] [rbp+260h]
  __int128 v134; // [rsp+2F0h] [rbp+270h]
  __int128 v135; // [rsp+300h] [rbp+280h]
  __int64 v136; // [rsp+328h] [rbp+2A8h]
  __int128 v137; // [rsp+330h] [rbp+2B0h]
  __int64 v138; // [rsp+340h] [rbp+2C0h]
  __int128 v139; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v140; // [rsp+360h] [rbp+2E0h]
  __int64 v141; // [rsp+368h] [rbp+2E8h]
  char v142; // [rsp+377h] [rbp+2F7h] BYREF
  volatile signed __int64 **v143; // [rsp+378h] [rbp+2F8h]
  __int64 v144; // [rsp+380h] [rbp+300h]
  __int64 v145; // [rsp+388h] [rbp+308h]

  v145 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 410);
  v144 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 413) = 0;
      *(_BYTE *)(a1 + 415) = 1;
      v143 = *(volatile signed __int64 ***)a1;
      v141 = *(_QWORD *)(a1 + 8);
      v7 = *(_QWORD *)(a1 + 16);
      sub_1416AC440(&v130, *(_QWORD *)(a1 + 48));
      sub_1416AC440(&v119, *(_QWORD *)(v5 + 56));
      *(_BYTE *)(v5 + 415) = 0;
      *(_QWORD *)(v5 + 96) = v143;
      *(_QWORD *)(v5 + 104) = v141;
      *(_QWORD *)(v5 + 112) = v7;
      *(_OWORD *)(v5 + 120) = *(_OWORD *)v130.m256i_i8;
      *(_QWORD *)(v5 + 136) = v130.m256i_i64[2];
      *(_OWORD *)(v5 + 144) = *(_OWORD *)v119.m256i_i8;
      *(_QWORD *)(v5 + 160) = v119.m256i_i64[2];
      *(_OWORD *)(v5 + 168) = *(_OWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 184) = *(_QWORD *)(v5 + 40);
      *(_DWORD *)(v5 + 192) = 16000;
      *(_QWORD *)(v5 + 872) = v5 + 96;
      *(_BYTE *)(v5 + 892) = 0;
      goto LABEL_3;
    case 1LL:
      sub_1419393E0(&off_1419F1460);
    case 2LL:
      sub_141939400(&off_1419F1460);
    case 3LL:
LABEL_3:
      v143 = (volatile signed __int64 **)(v5 + 416);
      sub_14046CF10((const __m128i *)&v119, v5 + 416, a2, a4);
      v8 = v119.m256i_i64[0];
      if ( v119.m256i_i64[0] == -2 )
      {
        result = 1;
        v10 = 3;
LABEL_87:
        v83 = v144;
        goto LABEL_172;
      }
      v138 = v119.m256i_i64[3];
      v137 = *(_OWORD *)&v119.m256i_u64[1];
      v114 = v120;
      v115 = v121;
      v116 = v122;
      v117 = v123;
      v118 = v124;
      v11 = v143;
      sub_140406840(v143);
      if ( v8 == -1 )
      {
        v140 = v138;
        v139 = v137;
        v26 = *(_QWORD *)(v144 + 72);
        v27 = **(_QWORD **)(v144 + 64);
        v28 = **(_QWORD **)(v144 + 80);
        v130.m256i_i64[0] = (__int64)&v139;
        v130.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_1416ABFD0(&v119, &unk_1419F1490, &v130);
        *(_OWORD *)v130.m256i_i8 = *(_OWORD *)v119.m256i_i8;
        v130.m256i_i64[2] = v119.m256i_i64[2];
        sub_140C87C70(v26, v27, 1, v28, (__int64)&v130);
        if ( (_QWORD)v139 )
          sub_140001660(*((_QWORD *)&v139 + 1), v139, 1);
        goto LABEL_163;
      }
      v12 = v144;
      v13 = v144 + 200;
      *(_QWORD *)(v144 + 200) = v8;
      *(_OWORD *)(v12 + 208) = v137;
      *(_QWORD *)(v12 + 224) = v138;
      *(_OWORD *)(v12 + 232) = v114;
      *(_OWORD *)(v12 + 248) = v115;
      *(_OWORD *)(v12 + 264) = v116;
      *(_OWORD *)(v12 + 280) = v117;
      *(_QWORD *)(v12 + 296) = v118;
      v14 = sub_140DA57F0(v13);
      v15 = v144;
      *(_QWORD *)(v144 + 304) = v14;
      *(_BYTE *)(v15 + 413) = 1;
      v16 = sub_14054A5A0(*(_QWORD *)(v15 + 72));
      *(_QWORD *)(v144 + 320) = v16;
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
          v5 = v144;
          *(_QWORD *)(v144 + 416) = v13;
          *(_BYTE *)(v5 + 624) = 0;
LABEL_15:
          v143 = (volatile signed __int64 **)(v5 + 416);
          sub_14046C950(&v119, (__int64 *)(v5 + 416), a2);
          v23 = v119.m256i_i64[0];
          if ( v119.m256i_i64[0] == -2 )
          {
            result = 1;
            v10 = 4;
            goto LABEL_87;
          }
          v24 = v119.m256i_i64[1];
          if ( *(_BYTE *)(v144 + 624) != 3 )
            goto LABEL_27;
          v25 = *(unsigned __int8 *)(v144 + 504);
          if ( v25 != 5 )
          {
            if ( v25 == 4 )
            {
              sub_14040CAE0(v144 + 512);
            }
            else
            {
              if ( v25 != 3 )
                goto LABEL_27;
              if ( *(_QWORD *)(v144 + 512) != -1 )
                sub_14040C610(v144 + 512);
            }
          }
          sub_140409B40(v144 + 472);
LABEL_27:
          if ( v23 > 0 )
            sub_140001660(v24, v23, 1);
LABEL_159:
          if ( *(_BYTE *)(v144 + 413) )
          {
            v143 = (volatile signed __int64 **)(v144 + 304);
            sub_140947B30();
            if ( !_InterlockedDecrement64(*v143) )
              sub_1409E44B0();
          }
          v109 = v144;
          *(_BYTE *)(v144 + 413) = 0;
          sub_14040E580(v109 + 200);
          goto LABEL_163;
        }
      }
      else
      {
        v20 = 0;
        v21 = *(unsigned __int8 *)(v16 + 33);
        if ( (_BYTE)v21 )
          goto LABEL_10;
      }
      v5 = v144;
      *(_QWORD *)(v144 + 632) = v17;
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
LABEL_76:
        v143 = (volatile signed __int64 **)(v5 + 416);
        sub_14046C950(&v119, (__int64 *)(v5 + 416), a2);
        v74 = v119.m256i_i64[0];
        if ( v119.m256i_i64[0] == -2 )
        {
          result = 1;
          v10 = 5;
          goto LABEL_87;
        }
        v75 = v119.m256i_i64[1];
        if ( *(_BYTE *)(v144 + 624) != 3 )
          goto LABEL_108;
        v76 = *(unsigned __int8 *)(v144 + 504);
        if ( v76 != 5 )
        {
          if ( v76 == 4 )
          {
            sub_14040CAE0(v144 + 512);
          }
          else
          {
            if ( v76 != 3 )
            {
LABEL_108:
              if ( v74 > 0 )
                sub_140001660(v75, v74, 1);
              v94 = *(char **)(v144 + 632);
              if ( !*(_BYTE *)(v144 + 640) && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v73) )
                v94[1] = 1;
              v95 = *v94;
              *v94 = 0;
              if ( v95 == 2 )
                WakeByAddressSingle(v94);
              goto LABEL_159;
            }
            if ( *(_QWORD *)(v144 + 512) != -1 )
              sub_14040C610(v144 + 512);
          }
        }
        sub_140409B40(v144 + 472);
        goto LABEL_108;
      }
      v32 = _InterlockedIncrement64(&qword_1421E74D0);
      *(_QWORD *)(*(_QWORD *)(v5 + 632) + 800LL) = v32;
      *(_BYTE *)(*(_QWORD *)(v5 + 632) + 835LL) = 2;
      v33 = *(_QWORD *)(v5 + 632);
      v34 = *(_QWORD *)(v33 + 640);
      if ( v34 != -1 && v34 )
        sub_140001660(*(_QWORD *)(v33 + 648), v34, 1);
      *(_QWORD *)(v33 + 640) = -1;
      v35 = *(_QWORD *)(v5 + 632);
      v36 = *(_QWORD *)(v35 + 616);
      if ( v36 != -1 && v36 )
        sub_140001660(*(_QWORD *)(v35 + 624), v36, 1);
      *(_QWORD *)(v35 + 616) = -1;
      *(_QWORD *)(v5 + 312) = v32;
      sub_140028CC0(*(_QWORD *)(v5 + 632), *(unsigned __int8 *)(v5 + 640));
      v37 = sub_14054A5A0(*(_QWORD *)(v144 + 72));
      sub_140D9F290(&v119, v37 + 32);
      sub_1403FDAC0((__int64)&v130, (__int64)&v119);
      v119.m256i_i8[2] = 2;
      v119.m256i_i16[0] = -1;
      v119.m256i_i32[4] = -1;
      sub_140477DA0(&v139, &v130, &v119);
      v38 = v144;
      *(_BYTE *)(v144 + 411) = BYTE2(v139);
      *(_WORD *)(v38 + 408) = v139;
      v39 = v140;
      *(_QWORD *)(v38 + 328) = *((_QWORD *)&v139 + 1);
      *(_DWORD *)(v38 + 336) = v39;
      sub_14017B190(*(_QWORD *)(v38 + 72));
      LOBYTE(v40) = 1;
      sub_14047CCD0(*(_QWORD *)(v144 + 72), v40);
      v41 = v144 + 411;
      sub_14047CB90(*(unsigned __int8 *)(v144 + 411));
      if ( *(_WORD *)(v144 + 408) < 0x65u && *(_DWORD *)(v144 + 336) != -1 )
      {
        v42 = sub_140477E20(v41);
        if ( !v42 )
          goto LABEL_48;
        sub_1415141D0(
          &v119,
          (0x4189374BC6A7F0LL * (unsigned __int128)(unsigned __int64)v42) >> 64,
          1000000
        * ((unsigned int)v42
         - 1000 * (unsigned int)((0x4189374BC6A7F0LL * (unsigned __int128)(unsigned __int64)v42) >> 64)),
          &off_1419F1478);
        v135 = v124;
        v43 = v123;
        v134 = v123;
        v44 = v122;
        v133 = v122;
        v45 = *(_OWORD *)v119.m256i_i8;
        v46 = *(_OWORD *)&v119.m256i_u64[2];
        v47 = v120;
        v48 = v121;
        v132 = v121;
        v131 = v120;
        v130 = v119;
        *((_OWORD *)v11 + 6) = v124;
        *((_OWORD *)v11 + 5) = v43;
        *((_OWORD *)v11 + 4) = v44;
        *((_OWORD *)v11 + 3) = v48;
        *((_OWORD *)v11 + 2) = v47;
        *((_OWORD *)v11 + 1) = v46;
        *(_OWORD *)v11 = v45;
        v5 = v144;
LABEL_45:
        v143 = (volatile signed __int64 **)(v5 + 416);
        if ( (unsigned __int8)sub_141514440(v5 + 416, a2) )
        {
          result = 1;
          v10 = 6;
          goto LABEL_87;
        }
        sub_14040CAE0(v143);
        if ( *(_WORD *)(v144 + 408) <= 0x64u )
LABEL_48:
          sub_14021B9D0();
      }
      sub_140C75E50(&v119, *(_QWORD *)(v144 + 72));
      if ( v119.m256i_i64[0] != -1 && v119.m256i_i64[0] )
        sub_140001660(v119.m256i_i64[1], v119.m256i_i64[0], 1);
      sub_1414FE5D0(&v119, 64, v49);
      *((_QWORD *)&v120 + 1) = 64;
      v50 = sub_1408F0220(&v119);
      *(_QWORD *)&v139 = v50;
      v51 = v144;
      *(_QWORD *)(v144 + 344) = v52;
      *(_BYTE *)(v51 + 414) = 0;
      v53 = (__int128 *)(v51 + 656);
      sub_140C88000(v51 + 656, v50);
      if ( *(_DWORD *)v53 == -1 )
      {
        v77 = v144;
        v78 = v144 + 416;
        *(_QWORD *)(v144 + 432) = *(_QWORD *)(v144 + 680);
        *(_OWORD *)(v77 + 416) = *(_OWORD *)(v77 + 664);
        v79 = *(_QWORD *)(v77 + 72);
        v80 = **(_QWORD **)(v77 + 64);
        v81 = *(_QWORD *)(v77 + 312);
        v130.m256i_i64[0] = v78;
        v130.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_1416ABFD0(&v119, &unk_1419F14C0, &v130);
        *(_OWORD *)v130.m256i_i8 = *(_OWORD *)v119.m256i_i8;
        v130.m256i_i64[2] = v119.m256i_i64[2];
        sub_140C87C70(v79, v80, 1, v81, (__int64)&v130);
        v5 = v144;
        *(_QWORD *)(v144 + 440) = v144 + 200;
        *(_BYTE *)(v5 + 648) = 0;
LABEL_85:
        v143 = (volatile signed __int64 **)(v5 + 440);
        sub_14046C950(&v119, (__int64 *)(v5 + 440), a2);
        v82 = v119.m256i_i64[0];
        if ( v119.m256i_i64[0] == -2 )
        {
          result = 1;
          v10 = 7;
          goto LABEL_87;
        }
        v84 = v119.m256i_i64[1];
        if ( *(_BYTE *)(v144 + 648) != 3 )
          goto LABEL_116;
        v85 = *(unsigned __int8 *)(v144 + 528);
        if ( v85 != 5 )
        {
          if ( v85 == 4 )
          {
            sub_14040CAE0(v144 + 536);
          }
          else
          {
            if ( v85 != 3 )
            {
LABEL_116:
              if ( v82 > 0 )
                sub_140001660(v84, v82, 1);
              v96 = *(_QWORD *)(v144 + 416);
              if ( v96 )
                sub_140001660(*(_QWORD *)(v144 + 424), v96, 1);
              goto LABEL_156;
            }
            if ( *(_QWORD *)(v144 + 536) != -1 )
              sub_14040C610(v144 + 536);
          }
        }
        sub_140409B40(v144 + 496);
        goto LABEL_116;
      }
      v54 = *v53;
      v55 = v53[1];
      v56 = v144;
      *(_OWORD *)(v144 + 384) = v53[2];
      *(_OWORD *)(v56 + 368) = v55;
      *(_OWORD *)(v56 + 352) = v54;
      v57 = *(_QWORD *)(v56 + 72);
      sub_1406129A0(&v130, v57);
      v59 = *(volatile signed __int64 **)(v57 + 136);
      v60 = _InterlockedIncrement64(v59);
      if ( (v60 < 0) ^ v58 | (v60 == 0)
        || (v61 = *(volatile signed __int64 **)(v57 + 144),
            v62 = _InterlockedIncrement64(v61),
            v63 = v144,
            (v62 < 0) ^ v58 | (v62 == 0)) )
      {
        BUG();
      }
      sub_1418F44E0((__m128i *)&v119, (const __m128i *)&v130, 0x88u);
      v64 = *(__int64 **)(v63 + 64);
      *(_BYTE *)(v63 + 413) = 0;
      v125 = v59;
      v126 = v61;
      v127 = *(_QWORD *)(v63 + 304);
      v128 = *v64;
      v129 = 0;
      v65 = sub_1409B6B50(&v119, &off_1419F14A8);
      v5 = v144;
      v66 = v144 + 344;
      *(_QWORD *)(v144 + 400) = v65;
      *(_BYTE *)(v5 + 412) = 0;
      *(_QWORD *)(v5 + 416) = *(_QWORD *)(v5 + 88);
      *(_BYTE *)(v5 + 424) = 0;
      *(_QWORD *)(v5 + 544) = v66;
      *(_QWORD *)(v5 + 552) = v5 + 200;
      *(_BYTE *)(v5 + 584) = 0;
      *(_QWORD *)(v5 + 752) = v5 + 412;
      *(_QWORD *)(v5 + 760) = v5 + 416;
LABEL_56:
      v67 = sub_1409E6290(v5 + 752, a2);
      if ( v67 == -1 )
      {
        result = 1;
        v10 = 8;
        goto LABEL_87;
      }
      if ( *(_BYTE *)(v144 + 424) == 4 )
        sub_14040CAE0(v144 + 432);
      sub_140405BC0(v144 + 544);
      if ( v67 )
      {
        v5 = v144;
        if ( v67 != 1 )
          sub_1419392A0("all branches are disabled and there is no else branch", 107, &off_1419F1568);
        v68 = 12;
        v69 = &unk_1419F14E1;
      }
      else
      {
        v68 = 7;
        v69 = &unk_1419F14DA;
        v5 = v144;
      }
      *(_QWORD *)(v5 + 632) = v69;
      *(_QWORD *)(v5 + 640) = v68;
      if ( *(_QWORD *)off_1421E6EC0 >= 3u )
      {
        v130.m256i_i64[0] = v5 + 632;
        v130.m256i_i64[1] = (__int64)sub_140186EE0;
        *(_QWORD *)&v121 = 3;
        *((_QWORD *)&v121 + 1) = "codexmate_lib::core::voice::runtimeall branches are disabled and there is no else branch";
        *(_QWORD *)&v122 = 35;
        *(_QWORD *)&v123 = &unk_1419F14ED;
        *((_QWORD *)&v123 + 1) = &v130;
        v119.m256i_i64[0] = 0;
        v119.m256i_i64[1] = (__int64)"codexmate_lib::core::voice::runtimeall branches are disabled and there is no else branch";
        *(_OWORD *)&v119.m256i_u64[2] = 0x23u;
        *(_QWORD *)&v120 = aSrcCoreVoiceRu_0;
        *((_QWORD *)&v120 + 1) = 29;
        *((_QWORD *)&v122 + 1) = 0x106300000001LL;
        sub_1414D53A0(&v142, &v119);
        v5 = v144;
      }
      *(_QWORD *)(v5 + 416) = v5 + 200;
      *(_BYTE *)(v5 + 624) = 0;
LABEL_67:
      v143 = (volatile signed __int64 **)(v5 + 416);
      sub_14046C950(&v119, (__int64 *)(v5 + 416), a2);
      v70 = v119.m256i_i64[0];
      if ( v119.m256i_i64[0] == -2 )
      {
        result = 1;
        v10 = 9;
        goto LABEL_87;
      }
      v71 = v119.m256i_i64[1];
      if ( *(_BYTE *)(v144 + 624) != 3 )
        goto LABEL_96;
      v72 = *(unsigned __int8 *)(v144 + 504);
      switch ( v72 )
      {
        case 5:
          goto LABEL_95;
        case 4:
          sub_14040CAE0(v144 + 512);
LABEL_95:
          sub_140409B40(v144 + 472);
          break;
        case 3:
          if ( *(_QWORD *)(v144 + 512) != -1 )
            sub_14040C610(v144 + 512);
          goto LABEL_95;
      }
LABEL_96:
      if ( v70 > 0 )
        sub_140001660(v71, v70, 1);
      v86 = (__int64 *)(v144 + 400);
      sub_1414FDA60(v144 + 400);
      v87 = sub_14054A5A0(*(_QWORD *)(v144 + 72));
      v88 = (char *)(v87 + 32);
      LOBYTE(v89) = 1;
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v87 + 32), 1, 0) )
        sub_141937480(v88);
      v90 = off_1421E7210;
      if ( 2 * *off_1421E7210 )
      {
        v91 = sub_141938160(v89);
        LOBYTE(v91) = v91 ^ 1;
        v92 = v144;
        if ( *(_BYTE *)(v87 + 33) )
          goto LABEL_102;
      }
      else
      {
        v91 = 0;
        v92 = v144;
        if ( *(_BYTE *)(v87 + 33) )
        {
LABEL_102:
          if ( !(_BYTE)v91 && 2 * *v90 && !(unsigned __int8)sub_141938160(v92) )
            *(_BYTE *)(v87 + 33) = 1;
          v93 = *v88;
          *v88 = 0;
          if ( v93 != 2 )
            goto LABEL_150;
          goto LABEL_149;
        }
      }
      v97 = **(_QWORD **)(v92 + 64);
      if ( !v97 || *(_QWORD *)(v87 + 840) != v97 || (unsigned __int8)(*(_BYTE *)(v87 + 867) - 1) >= 3u )
      {
        if ( !(_BYTE)v91 && 2 * *v90 && !(unsigned __int8)sub_141938160(v92) )
          *(_BYTE *)(v87 + 33) = 1;
        v107 = *v88;
        *v88 = 0;
        if ( v107 != 2 )
          goto LABEL_150;
LABEL_149:
        WakeByAddressSingle(v88);
LABEL_150:
        v108 = *v86;
        if ( (unsigned __int8)sub_1414FCFD0(v108) )
          sub_1414FD8E0(v108);
        v143 = (volatile signed __int64 **)(v144 + 352);
        sub_14118BF90(&v119);
        if ( v119.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v119.m256i_i64[0] )
          sub_140001660(v119.m256i_i64[1], v119.m256i_i64[0], 1);
        sub_14040D330(v143);
LABEL_156:
        v143 = (volatile signed __int64 **)(v144 + 344);
        sub_140947790();
        if ( !_InterlockedDecrement64(*v143) )
          sub_1409E4320();
        *(_BYTE *)(v144 + 414) = 0;
        goto LABEL_159;
      }
      LODWORD(v141) = v91;
      v143 = (volatile signed __int64 **)(v87 + 32);
      if ( !*(_QWORD *)(v87 + 352) && *(_QWORD *)(v87 + 328) )
      {
        sub_1416AC440(&v119, v87 + 312);
        v98 = *(_QWORD *)(v87 + 336);
        if ( v98 )
          sub_140001660(*(_QWORD *)(v87 + 344), v98, 1);
        *(_QWORD *)(v87 + 352) = v119.m256i_i64[2];
        *(_OWORD *)(v87 + 336) = *(_OWORD *)v119.m256i_i8;
      }
      *(_QWORD *)(v87 + 40) = sub_1403FDA70(*(_QWORD *)(v87 + 720), *(_DWORD *)(v87 + 728));
      *(_QWORD *)(v87 + 48) = v99;
      *(_DWORD *)(v87 + 728) = -1;
      if ( *(_DWORD *)(v87 + 80) <= 0xFFFFFFFD )
      {
        v136 = v87 + 80;
        sub_14093B470(v87 + 80);
      }
      *(_QWORD *)(v87 + 80) = -2;
      v100 = _InterlockedIncrement64(&qword_1421E74D0);
      *(_QWORD *)(v87 + 832) = v100;
      sub_140E91160(*(_QWORD *)(v87 + 344), *(_QWORD *)(v87 + 352));
      v102 = v101;
      v103 = 4;
      if ( !v101 )
      {
        *(_QWORD *)(v87 + 840) = 0;
        v103 = 0;
      }
      *(_BYTE *)(v87 + 867) = v103;
      sub_140028CC0(v143, (unsigned int)v141);
      sub_14017AFD0(*(_QWORD *)(v144 + 72));
      sub_14047CCD0(*(_QWORD *)(v144 + 72), 0);
      sub_14047CB90(*(unsigned __int8 *)(v144 + 411));
      sub_14021BF70(v104);
      if ( v102 )
      {
        sub_1406119B0(&v119, *(_QWORD *)(v144 + 72));
        sub_14047DB10(&v119, v100);
      }
      sub_140C75E50(&v119, *(_QWORD *)(v144 + 72));
      if ( v119.m256i_i64[0] != -1 && v119.m256i_i64[0] )
        sub_140001660(v119.m256i_i64[1], v119.m256i_i64[0], 1);
      v105 = *v86;
      if ( (unsigned __int8)sub_1414FCFD0(v105) )
        sub_1414FD8E0(v105);
      v143 = (volatile signed __int64 **)(v144 + 352);
      sub_14118BF90(&v119);
      if ( v119.m256i_i64[0] <= 0xFFFFFFFFFFFFFFFDuLL && v119.m256i_i64[0] )
        sub_140001660(v119.m256i_i64[1], v119.m256i_i64[0], 1);
      sub_14040D330(v143);
      v143 = (volatile signed __int64 **)(v144 + 344);
      sub_140947790();
      if ( !_InterlockedDecrement64(*v143) )
        sub_1409E4320();
      v106 = v144;
      *(_BYTE *)(v144 + 414) = 0;
      *(_BYTE *)(v106 + 413) = 0;
      sub_14040E580(v106 + 200);
LABEL_163:
      v83 = v144;
      v110 = *(_QWORD *)(v144 + 96);
      if ( v110 )
        sub_140001660(*(_QWORD *)(v144 + 104), v110, 1);
      v111 = *(_QWORD *)(v83 + 120);
      if ( v111 )
        sub_140001660(*(_QWORD *)(v83 + 128), v111, 1);
      v112 = *(_QWORD *)(v83 + 144);
      if ( v112 )
        sub_140001660(*(_QWORD *)(v83 + 152), v112, 1);
      v113 = *(_QWORD *)(v83 + 168);
      v10 = 1;
      if ( v113 )
        sub_140001660(*(_QWORD *)(v83 + 176), v113, 1);
      result = 0;
LABEL_172:
      *(_BYTE *)(v83 + 410) = v10;
      return result;
    case 4LL:
      goto LABEL_15;
    case 5LL:
      goto LABEL_76;
    case 6LL:
      goto LABEL_45;
    case 7LL:
      goto LABEL_85;
    case 8LL:
      goto LABEL_56;
    case 9LL:
      goto LABEL_67;
  }
}
