char __fastcall sub_1409D9370(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int8 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __m128i *v15; // rdi
  const __m128i *v16; // rbx
  _QWORD *v17; // rsi
  const __m128i *v18; // r14
  __int64 v19; // rbx
  const __m128i *v20; // r12
  __m128i v21; // xmm6
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned int v28; // esi
  int v29; // r15d
  unsigned int v30; // eax
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  char v36; // r10
  __int64 v37; // r8
  __int64 v38; // r11
  __int64 v39; // rsi
  char v40; // bl
  __int64 v41; // rsi
  _BYTE *v42; // rdx
  __int64 v43; // rdi
  __int128 v44; // kr10_16
  const __m128i *v45; // r15
  __m128i v46; // xmm6
  char v47; // cl
  char result; // al
  __m128i v49; // xmm0
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int8 v53; // si
  const __m128i *v54; // rcx
  const __m128i *v55; // rsi
  __int64 v56; // rax
  __m128i v57; // xmm0
  __m128i *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rcx
  _QWORD *v61; // r14
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // [rsp+30h] [rbp-50h] BYREF
  __int128 v65; // [rsp+38h] [rbp-48h]
  __int64 v66; // [rsp+48h] [rbp-38h]
  __m128i v67; // [rsp+50h] [rbp-30h]
  __m128i v68; // [rsp+60h] [rbp-20h]
  __m128i v69; // [rsp+70h] [rbp-10h] BYREF
  __m128i v70; // [rsp+80h] [rbp+0h]
  __m128i v71; // [rsp+90h] [rbp+10h] BYREF
  __m128i v72; // [rsp+A0h] [rbp+20h]
  __m128i v73; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v74; // [rsp+C0h] [rbp+40h]
  __m128i v75; // [rsp+D0h] [rbp+50h]
  __m128i v76; // [rsp+E0h] [rbp+60h]
  __m128i v77; // [rsp+F0h] [rbp+70h]
  __m128i v78; // [rsp+100h] [rbp+80h]
  __int64 v79; // [rsp+110h] [rbp+90h]
  __m128i v80; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v81; // [rsp+130h] [rbp+B0h]
  __m128i v82; // [rsp+140h] [rbp+C0h]
  __m128i v83; // [rsp+150h] [rbp+D0h]
  __m128i v84; // [rsp+160h] [rbp+E0h]
  __m128i v85; // [rsp+170h] [rbp+F0h]
  __int64 v86; // [rsp+180h] [rbp+100h]
  __m128i v87; // [rsp+188h] [rbp+108h] BYREF
  const char *v88; // [rsp+198h] [rbp+118h] BYREF
  __int128 v89; // [rsp+1A0h] [rbp+120h]
  __m128i v90[20]; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v91; // [rsp+2F0h] [rbp+270h]
  __int64 v92; // [rsp+300h] [rbp+280h]
  __int128 v93; // [rsp+310h] [rbp+290h]
  __int64 v94; // [rsp+320h] [rbp+2A0h]
  __int128 v95; // [rsp+328h] [rbp+2A8h] BYREF
  const char *v96; // [rsp+338h] [rbp+2B8h]
  __m128i v97; // [rsp+340h] [rbp+2C0h]
  __m128i v98; // [rsp+350h] [rbp+2D0h]
  __m128i v99; // [rsp+360h] [rbp+2E0h]
  __m128i v100; // [rsp+370h] [rbp+2F0h]
  __m128i v101; // [rsp+380h] [rbp+300h]
  __m128i v102; // [rsp+390h] [rbp+310h]
  __m128i v103; // [rsp+3A0h] [rbp+320h]
  __int64 v104; // [rsp+3B0h] [rbp+330h]
  __int128 v105; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v106; // [rsp+3C8h] [rbp+348h]
  __m128i v107; // [rsp+3D0h] [rbp+350h] BYREF
  __m128i v108; // [rsp+3E0h] [rbp+360h]
  __m128i v109; // [rsp+3F0h] [rbp+370h]
  __m128i v110; // [rsp+400h] [rbp+380h]
  __m128i v111; // [rsp+410h] [rbp+390h]
  __m128i v112; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v113; // [rsp+430h] [rbp+3B0h]
  __int64 v114; // [rsp+438h] [rbp+3B8h] BYREF
  __int8 v115; // [rsp+440h] [rbp+3C0h]
  int v116; // [rsp+441h] [rbp+3C1h]
  __int16 v117; // [rsp+445h] [rbp+3C5h]
  char v118; // [rsp+447h] [rbp+3C7h]
  __int64 v119; // [rsp+448h] [rbp+3C8h]
  __int64 v120; // [rsp+450h] [rbp+3D0h]
  __int64 v121; // [rsp+458h] [rbp+3D8h]
  _BYTE v122[24]; // [rsp+460h] [rbp+3E0h] BYREF
  __m256i v123; // [rsp+478h] [rbp+3F8h] BYREF
  __m128i v124; // [rsp+498h] [rbp+418h]
  __m128i v125; // [rsp+4A8h] [rbp+428h]
  __m128i v126; // [rsp+4B8h] [rbp+438h]
  __m128i v127; // [rsp+4C8h] [rbp+448h]
  __m128i v128; // [rsp+4D8h] [rbp+458h] BYREF
  __m128i v129; // [rsp+4E8h] [rbp+468h]
  __int64 v130; // [rsp+500h] [rbp+480h]
  __int64 v131; // [rsp+508h] [rbp+488h]
  __int64 v132; // [rsp+510h] [rbp+490h]
  const __m128i *v133; // [rsp+518h] [rbp+498h]
  const __m128i *v134; // [rsp+520h] [rbp+4A0h]
  char v135; // [rsp+52Fh] [rbp+4AFh] BYREF
  const __m128i *v136; // [rsp+530h] [rbp+4B0h]
  _QWORD *v137; // [rsp+538h] [rbp+4B8h]
  _QWORD *v138; // [rsp+540h] [rbp+4C0h]
  const __m128i *v139; // [rsp+548h] [rbp+4C8h]
  __int64 v140; // [rsp+550h] [rbp+4D0h]
  __int64 v141; // [rsp+558h] [rbp+4D8h]
  __int64 v142; // [rsp+560h] [rbp+4E0h]
  __int64 v143; // [rsp+568h] [rbp+4E8h]

  v143 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 12848);
  v142 = a1;
  v140 = a2;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 12849) = 257;
      *(_BYTE *)(a1 + 12851) = 1;
      v5 = a1 + 6616;
      sub_1412762D0((__m128i *)(a1 + 6616), (const __m128i *)(a1 + 392), 0x1850u);
      switch ( *(_BYTE *)(v3 + 12832) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_75;
        case 2:
          goto LABEL_74;
        case 3:
          goto LABEL_10;
      }
    case 1LL:
      sub_1412ADB20(&off_141363680);
    case 2LL:
      sub_1412ADB40(&off_141363680);
    case 3LL:
      v5 = a1 + 6616;
      switch ( *(_BYTE *)(a1 + 12832) )
      {
        case 0:
LABEL_4:
          v87.m128i_i64[0] = (__int64)aTestRelayDraft;
          v87.m128i_i64[1] = 23;
          v88 = aManager_1;
          *(_QWORD *)&v89 = 7;
          v141 = v5;
          *((_QWORD *)&v89 + 1) = v5;
          v138 = (_QWORD *)(v3 + 7136);
          v90[0] = (__m128i)(unsigned __int64)(v3 + 7136);
          v6 = sub_140419560((char *)(*(_QWORD *)(v3 + 7128) + 16LL), a2);
          if ( v6 )
            goto LABEL_7;
          sub_14127A550((__int64)v122, (__int64)&v87, (__int64)&v88);
          v9 = v122[0];
          if ( v122[0] == 6 )
          {
            v6 = *(_QWORD *)&v122[8];
LABEL_7:
            *(_QWORD *)&v95 = aTestRelayDraft;
            *((_QWORD *)&v95 + 1) = 23;
            v96 = aInput_3;
            v97.m128i_i64[0] = 5;
            v97.m128i_i64[1] = v141;
            v98 = (__m128i)(unsigned __int64)v138;
            sub_14005E9B0(&v87, &v95);
            v7 = (unsigned __int64)((v87.m128i_u8[15] << 16)
                                  | (unsigned int)*(unsigned __int16 *)((char *)&v87.m128i_u16[6] + 1)) << 32;
            v2 = v7 | *(unsigned int *)((char *)&v87.m128i_u32[2] + 1);
            v9 = v87.m128i_i8[8];
            v10 = (__int64)v88;
            v12 = *((_QWORD *)&v89 + 1);
            v11 = v89;
            if ( !__OFSUB__(-v87.m128i_i64[0], 1) )
            {
              v129 = v90[6];
              v128 = v90[5];
              v127 = v90[4];
              v13 = _mm_loadu_si128(v90);
              v126 = v90[3];
              v125 = v90[2];
              v124 = v90[1];
              *(__m128i *)&v123.m256i_u64[2] = v13;
              *(_DWORD *)&v122[9] = *(__int32 *)((char *)&v87.m128i_i32[2] + 1);
              v122[15] = (v7 | *(unsigned int *)((char *)&v87.m128i_u32[2] + 1)) >> 48;
              v2 >>= 32;
              *(_WORD *)&v122[13] = v2;
              *(_OWORD *)v123.m256i_i8 = v89;
              *(_QWORD *)v122 = v87.m128i_i64[0];
              v122[8] = v87.m128i_i8[8];
              *(_QWORD *)&v122[16] = v88;
              v87.m128i_i64[0] = (__int64)aTestRelayDraft;
              v87.m128i_i64[1] = 23;
              v88 = aOnevent_0;
              *(_QWORD *)&v89 = 7;
              *((_QWORD *)&v89 + 1) = v141;
              v90[0] = (__m128i)(unsigned __int64)v138;
              sub_1405B44C0(&v95, &v87);
              v9 = v95;
              if ( (_BYTE)v95 == 6 )
              {
                v14 = *((_QWORD *)&v95 + 1);
                v3 = v142;
                v15 = (__m128i *)(v142 + 7160);
                *(_QWORD *)(v142 + 7312) = v6;
                sub_1412762D0(v15, (const __m128i *)v122, 0x98u);
                *(_QWORD *)(v3 + 7320) = v14;
                *(_BYTE *)(v3 + 9040) = 0;
                v16 = (const __m128i *)(v3 + 9048);
                sub_1412762D0((__m128i *)(v3 + 9048), v15, 0x760u);
                v17 = (_QWORD *)(v3 + 12824);
                *(_BYTE *)(v3 + 12824) = 0;
                v5 = v141;
LABEL_11:
                v18 = (const __m128i *)(v3 + 10936);
                sub_1412762D0((__m128i *)(v3 + 10936), v16, 0x760u);
                switch ( *(_BYTE *)(v3 + 12816) )
                {
                  case 0:
                    goto LABEL_13;
                  case 1:
                    goto LABEL_78;
                  case 2:
                    goto LABEL_77;
                  case 3:
                    goto LABEL_14;
                }
              }
              v2 = ((unsigned __int64)((BYTE7(v95) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v95 + 5)) << 32)
                 | *(unsigned int *)((char *)&v95 + 1);
              v10 = *((_QWORD *)&v95 + 1);
              v11 = (__int64)v96;
              v12 = v97.m128i_i64[0];
              sub_1401473A0(v122);
            }
          }
          else
          {
            v2 = ((unsigned __int64)((v122[7] << 16) | (unsigned int)*(unsigned __int16 *)&v122[5]) << 32)
               | *(unsigned int *)&v122[1];
            v10 = *(_QWORD *)&v122[8];
            v11 = *(_QWORD *)&v122[16];
            v12 = v123.m256i_i64[0];
          }
          sub_1409B5490(v141, v7, v8);
          v53 = 1;
          if ( __OFSUB__(0, *v138) )
            goto LABEL_69;
          v137 = (_QWORD *)(v142 + 7144);
          v54 = *(const __m128i **)(v142 + 7144);
          v139 = *(const __m128i **)(v142 + 7152);
          v140 = 0;
          v136 = v54;
          while ( v139 != (const __m128i *)v140 )
          {
            ++v140;
            v55 = v54 + 6;
            sub_1401EEBE0();
            v54 = v55;
          }
          v56 = *v138;
          v53 = 1;
          if ( !*v138 )
            goto LABEL_69;
          goto LABEL_68;
        case 1:
LABEL_75:
          v141 = v5;
          sub_1412ADB20(&off_1413613C8);
        case 2:
LABEL_74:
          v141 = v5;
          sub_1412ADB40(&off_1413613C8);
        case 3:
          goto LABEL_10;
      }
  }
LABEL_10:
  v17 = (_QWORD *)(v3 + 12824);
  v16 = (const __m128i *)(v3 + 9048);
  switch ( *(_BYTE *)(v3 + 12824) )
  {
    case 0:
      goto LABEL_11;
    case 1:
      v141 = v5;
      v131 = v3 + 12824;
      v130 = v3 + 9048;
      sub_1412ADB20(&off_141363708);
    case 2:
      v141 = v5;
      v131 = v3 + 12824;
      v130 = v3 + 9048;
      sub_1412ADB40(&off_141363708);
    case 3:
      v18 = (const __m128i *)(v3 + 10936);
      switch ( *(_BYTE *)(v3 + 12816) )
      {
        case 0:
LABEL_13:
          v134 = v16;
          v137 = v17;
          v141 = v5;
          sub_1412762D0(&v87, v18, 0x98u);
          v19 = *(_QWORD *)(v3 + 11088);
          *(_OWORD *)(v3 + 11104) = *(_OWORD *)(v3 + 11088);
          *(_BYTE *)(v3 + 12817) = 0;
          v20 = (const __m128i *)(v3 + 11120);
          sub_1412762D0((__m128i *)(v3 + 11120), v18, 0x98u);
          *(_QWORD *)(v3 + 11272) = v19;
          *(_QWORD *)(v3 + 11280) = v3 + 11112;
          *(_QWORD *)(v3 + 11288) = &off_141362828;
          *(_BYTE *)(v3 + 12808) = 0;
          v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v3 + 11112), (__m128i)(unsigned __int64)&off_141362828);
LABEL_16:
          v136 = v18;
          v23 = v3 + 11296;
          *(_DWORD *)(v3 + 12809) = 16843009;
          sub_1412762D0((__m128i *)(v3 + 11296), v20, 0x98u);
          *(_QWORD *)&v122[16] = *(_QWORD *)(v3 + 11184);
          *(__m128i *)v122 = _mm_loadu_si128((const __m128i *)(v3 + 11168));
          LODWORD(v24) = 0;
          v25 = *(_QWORD *)(v3 + 11408);
          if ( !__OFSUB__(0, *(_QWORD *)(v3 + 11392)) )
            v24 = *(_QWORD *)(v3 + 11400);
          v139 = v20;
          v133 = v20;
          sub_14026C850((unsigned int)&v105, v19, (unsigned int)v122, v24, v25);
          sub_140BF2330(v122);
          v27 = (_QWORD *)(v142 + 11392);
          v28 = *(_DWORD *)v122;
          v2 = (unsigned int)((*(int *)v122 >> 13) - 1);
          v29 = 0;
          if ( *(int *)v122 >> 13 <= 0 )
          {
            v30 = (1 - (*(int *)v122 >> 13)) / 0x190u + 1;
            v26 = 400 * v30;
            v2 = (unsigned int)(v26 + v2);
            v29 = -146097 * v30;
          }
          v31 = *(unsigned int *)&v122[4];
          v32 = *(unsigned int *)&v122[8];
          if ( __OFSUB__(0, *v27)
            || (sub_14108F780((unsigned __int64 *)v122, (__int64)v27),
                v26 = *(_QWORD *)v122,
                __OFSUB__(-*(_QWORD *)v122, 1)) )
          {
            nullsub_1(v26, v27);
            v33 = 9;
            v34 = sub_140001360(9, 1);
            if ( !v34 )
              sub_1412AD46B(1, 9);
            *(_QWORD *)v34 = 0x5F74666172645F5FLL;
            *(_BYTE *)(v34 + 8) = 95;
            v26 = 9;
          }
          else
          {
            v34 = *(_QWORD *)&v122[8];
            v33 = *(_QWORD *)&v122[16];
          }
          v35 = 1000
              * (v31
               + 86400LL
               * (int)((((int)v2 / 100) >> 2)
                     + ((1461 * (int)v2) >> 2)
                     + v29
                     + ((v28 >> 4) & 0x1FF)
                     - (int)v2 / 100
                     - 719163))
              + ((unsigned __int64)(1125899907 * v32) >> 50);
          v3 = v142;
          v36 = *(_BYTE *)(v142 + 11441);
          *(_DWORD *)(v142 + 12809) = 0;
          v37 = *(_QWORD *)(v3 + 11416);
          v38 = *(_QWORD *)(v3 + 11432);
          if ( __OFSUB__(-v37, 1) )
            v38 = 0;
          v39 = 1;
          if ( __OFSUB__(-*(_QWORD *)(v3 + 11416), 1) )
            v37 = 0;
          else
            v39 = *(_QWORD *)(v3 + 11424);
          v40 = *(_BYTE *)(v3 + 11440);
          *(_QWORD *)(v3 + 11448) = v26;
          *(_QWORD *)(v3 + 11456) = v34;
          *(_QWORD *)(v3 + 11464) = v33;
          *(_OWORD *)(v3 + 11472) = *(_OWORD *)v23;
          *(_QWORD *)(v3 + 11488) = *(_QWORD *)(v23 + 16);
          *(_OWORD *)(v3 + 11496) = *(_OWORD *)(v3 + 11320);
          *(_QWORD *)(v3 + 11512) = *(_QWORD *)(v3 + 11336);
          *(_OWORD *)(v3 + 11520) = v105;
          *(_QWORD *)(v3 + 11536) = v106;
          *(_BYTE *)(v3 + 11676) = 0;
          *(__m128i *)(v3 + 11544) = _mm_loadu_si128((const __m128i *)(v3 + 11368));
          *(_QWORD *)(v3 + 11560) = *(_QWORD *)(v3 + 11384);
          *(_BYTE *)(v3 + 11678) = v36;
          *(_BYTE *)(v3 + 11679) = 0;
          *(_QWORD *)(v3 + 11568) = 0;
          *(_QWORD *)(v3 + 11576) = 8;
          *(_QWORD *)(v3 + 11584) = 0;
          *(_QWORD *)(v3 + 11592) = v37;
          *(_QWORD *)(v3 + 11600) = v39;
          *(_QWORD *)(v3 + 11608) = v38;
          *(_DWORD *)(v3 + 11672) = 0;
          *(_QWORD *)(v3 + 11640) = -1;
          *(_QWORD *)(v3 + 11648) = 0;
          *(_QWORD *)(v3 + 11656) = v35;
          *(_QWORD *)(v3 + 11664) = v35;
          *(_QWORD *)(v3 + 11616) = 0x8000000000000000uLL;
          *(_BYTE *)(v3 + 11677) = v40;
          *(__m128i *)(v3 + 12672) = v21;
          *(_QWORD *)(v3 + 12792) = v3 + 11448;
          *(_BYTE *)(v3 + 12802) = 0;
LABEL_32:
          v138 = (_QWORD *)(v3 + 11680);
          sub_1409717F0(v122, v3 + 11680, v140);
          v41 = *(_QWORD *)v122;
          if ( __OFSUB__(-*(_QWORD *)v122, 1) )
          {
            v42 = (_BYTE *)v142;
            *(_BYTE *)(v142 + 12808) = 3;
            v42[12816] = 3;
LABEL_40:
            v42[12824] = 3;
            v42[12832] = 3;
            v47 = 3;
            result = 1;
            goto LABEL_70;
          }
          v92 = v123.m256i_i64[0];
          v91 = *(_OWORD *)&v122[8];
          v69 = *(__m128i *)&v123.m256i_u64[1];
          v70 = _mm_loadu_si128((const __m128i *)&v123.m256i_u64[3]);
          sub_140984DC0(v138);
          v43 = v142;
          sub_14004AED0(v142 + 11448);
          if ( !__OFSUB__(-*(_QWORD *)(v43 + 11392), 1) && *(_QWORD *)(v43 + 11392) )
            sub_140001370(*(_QWORD *)(v43 + 11400), *(_QWORD *)(v43 + 11392), 1);
          *(_DWORD *)(v43 + 12809) = 0;
          v94 = v92;
          v93 = v91;
          v71 = _mm_load_si128(&v69);
          v72 = v70;
          *(_BYTE *)(v43 + 12808) = 1;
          sub_140985490(v139);
          v66 = v94;
          v65 = v93;
          v67 = _mm_load_si128(&v71);
          v68 = v72;
          v64 = v41;
          sub_14001BEF0(v122, &v64);
          v44 = *(_OWORD *)v122;
          v45 = *(const __m128i **)&v122[16];
          v46 = _mm_loadu_si128((const __m128i *)&v123);
          v12 = v123.m256i_i64[0];
          v107 = *(__m128i *)&v123.m256i_u64[2];
          v108 = v124;
          v109 = v125;
          v110 = v126;
          v111 = v127;
          v112 = _mm_loadu_si128(&v128);
          v113 = v129.m128i_i64[0];
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v142 + 11112)) )
            sub_1404E9CE0(v142 + 11112);
          v42 = (_BYTE *)v142;
          *(_BYTE *)(v142 + 12817) = 0;
          v80 = v107;
          v81 = v108;
          v82 = v109;
          v83 = v110;
          v84 = v111;
          v85 = _mm_load_si128(&v112);
          v86 = v113;
          v42[12816] = 1;
          if ( (_QWORD)v44 == 0x8000000000000001uLL )
            goto LABEL_40;
          v79 = v86;
          v78 = v85;
          v77 = v84;
          v49 = _mm_load_si128(&v80);
          v76 = v83;
          v75 = v82;
          v74 = v81;
          v73 = v49;
          sub_140983BD0(v136);
          if ( __OFSUB__(-(__int64)v44, 1) )
          {
            if ( v12 < 0 )
              goto LABEL_43;
            if ( v12 )
            {
              nullsub_1(v51, v50);
              v58 = (__m128i *)sub_140001360(v12, 1);
              if ( !v58 )
              {
LABEL_43:
                v139 = v45;
                v140 = *((_QWORD *)&v44 + 1);
                sub_1412AD46B(v44, v12);
              }
              v11 = (__int64)v58;
              sub_1412762D0(v58, v45, v12);
            }
            else
            {
              v11 = 1;
            }
            if ( *((_QWORD *)&v44 + 1) )
              sub_140001370(v45, *((_QWORD *)&v44 + 1), 1);
            v53 = 1;
            v9 = 3;
            v10 = v12;
          }
          else
          {
            v104 = v79;
            v103 = v78;
            v102 = v77;
            v57 = _mm_load_si128(&v73);
            v101 = v76;
            v100 = v75;
            v99 = v74;
            v98 = v57;
            v95 = v44;
            v96 = (const char *)v45;
            v97 = v46;
            sub_140035530(&v87, &v95);
            v50 = (unsigned __int64)((v87.m128i_u8[15] << 16)
                                   | (unsigned int)*(unsigned __int16 *)((char *)&v87.m128i_u16[6] + 1)) << 32;
            v2 = v50 | *(unsigned int *)((char *)&v87.m128i_u32[2] + 1);
            v9 = v87.m128i_i8[8];
            v10 = (__int64)v88;
            v12 = *((_QWORD *)&v89 + 1);
            v11 = v89;
            if ( v87.m128i_i64[0] == 0x8000000000000025uLL )
            {
              v53 = 0;
            }
            else
            {
              v87.m128i_i8[15] = (v50 | *(unsigned int *)((char *)&v87.m128i_u32[2] + 1)) >> 48;
              *(__int16 *)((char *)&v87.m128i_i16[6] + 1) = WORD2(v2);
              *(__int32 *)((char *)&v87.m128i_i32[2] + 1) |= v50;
              v107.m128i_i64[0] = 0;
              v107.m128i_i64[1] = 1;
              v108.m128i_i64[0] = 0;
              *(_QWORD *)&v122[16] = 1610612768;
              *(_QWORD *)v122 = &v107;
              *(_QWORD *)&v122[8] = &off_141363340;
              if ( (unsigned __int8)sub_140E156C0(&v87, v122, v52) )
                sub_1412AD780(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v135,
                  (unsigned int)&unk_141363430,
                  (__int64)&off_1413633F8);
              v11 = v107.m128i_i64[1];
              v10 = v107.m128i_i64[0];
              v12 = v108.m128i_i64[0];
              sub_1409AF240(&v87);
              v53 = 1;
              v9 = 3;
            }
          }
          *(_BYTE *)v137 = 1;
          sub_1409B5490(v141, v50, v52);
          if ( !__OFSUB__(0, *(_QWORD *)(v142 + 7136)) )
          {
            v137 = (_QWORD *)(v142 + 7144);
            v59 = *(_QWORD **)(v142 + 7144);
            v139 = *(const __m128i **)(v142 + 7152);
            v140 = 0;
            v138 = v59;
            v60 = v59;
            while ( v139 != (const __m128i *)v140 )
            {
              ++v140;
              v61 = v60 + 12;
              sub_1401EEBE0();
              v60 = v61;
            }
            v56 = *(_QWORD *)(v142 + 7136);
            if ( v56 )
LABEL_68:
              sub_140001370(*v137, 96 * v56, 8);
          }
LABEL_69:
          *(_BYTE *)(v142 + 12832) = 1;
          sub_140988A30(v141);
          v116 = v2;
          v118 = BYTE6(v2);
          v117 = WORD2(v2);
          v120 = v11;
          v121 = v12;
          v115 = v9;
          v119 = v10;
          v114 = v53;
          v62 = v142;
          *(_BYTE *)(v142 + 12851) = 0;
          sub_1412762D0(&v87, (const __m128i *)v62, 0x168u);
          *(_BYTE *)(v62 + 12850) = 0;
          v63 = *(_QWORD *)(v62 + 384);
          *(_BYTE *)(v62 + 12849) = 0;
          *(_QWORD *)&v122[16] = *(_QWORD *)(v62 + 376);
          *(__m128i *)v122 = _mm_loadu_si128((const __m128i *)(v62 + 360));
          invoke_resolver_respond_sys(
            &v87,
            v63,
            (__int64)&v114,
            (__int128 *)v122,
            *(_DWORD *)(v62 + 12840),
            *(_DWORD *)(v62 + 12844));
          v47 = 1;
          result = 0;
          v42 = (_BYTE *)v142;
LABEL_70:
          v42[12848] = v47;
          return result;
        case 1:
LABEL_78:
          v136 = v18;
          v134 = v16;
          v137 = v17;
          v141 = v5;
          JUMPOUT(0x1409DA4F9LL);
        case 2:
LABEL_77:
          v136 = v18;
          v134 = v16;
          v137 = v17;
          v141 = v5;
          sub_1412ADB40(&off_141362870);
        case 3:
LABEL_14:
          v134 = v16;
          v137 = v17;
          v22 = *(unsigned __int8 *)(v3 + 12808);
          v20 = (const __m128i *)(v3 + 11120);
          v141 = v5;
          switch ( v22 )
          {
            case 0LL:
              v19 = *(_QWORD *)(v3 + 11272);
              v21 = _mm_loadu_si128((const __m128i *)(v3 + 11280));
              goto LABEL_16;
            case 1LL:
              v136 = v18;
              v132 = v3 + 11120;
              sub_1412ADB20(&off_1413624C8);
            case 2LL:
              v136 = v18;
              v132 = v3 + 11120;
              sub_1412ADB40(&off_1413624C8);
            case 3LL:
              v139 = (const __m128i *)(v3 + 11120);
              v136 = v18;
              goto LABEL_32;
          }
      }
  }
}