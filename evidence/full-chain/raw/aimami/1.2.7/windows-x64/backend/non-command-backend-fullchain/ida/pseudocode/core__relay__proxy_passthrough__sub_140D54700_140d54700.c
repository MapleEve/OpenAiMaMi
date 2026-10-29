// win 1.2.7 | module src/core/relay/proxy_passthrough.rs | ea 0x140d54700 | name sub_140D54700
// win 1.2.7 | module src/core/relay/proxy_passthrough.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D54700(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int8 **v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  unsigned __int8 *v9; // r13
  char *v10; // r14
  __int64 v11; // rcx
  __int64 *v12; // rdi
  char v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // al
  _BYTE *v18; // rdi
  __int128 *v19; // rax
  __int64 *v20; // r15
  __int64 v21; // r13
  void *v22; // r14
  const __m128i *v23; // r9
  __int128 v24; // xmm0
  _BYTE *v25; // r12
  void (__fastcall *v26)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  _BYTE *v29; // rbx
  const __m128i *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rdi
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  unsigned __int8 v36; // r12
  char v37; // al
  bool v38; // zf
  __int64 v39; // r8
  const char *v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // rdi
  unsigned __int32 v43; // eax
  bool v44; // of
  signed __int32 v45; // eax
  int v46; // ett
  __int64 v47; // rt0
  __int64 v48; // r12
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __int64 v51; // rdx
  __m128i si128; // xmm1
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __m128i v60; // xmm1
  __int64 v61; // rax
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 i; // rdx
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __int64 v69; // rax
  __m128i v70; // xmm0
  __m128i v71; // xmm1
  __m128i v72; // xmm2
  char result; // al
  __int128 v74; // [rsp+60h] [rbp-20h]
  __int128 v75; // [rsp+70h] [rbp-10h]
  __int128 v76; // [rsp+80h] [rbp+0h]
  __int128 v77; // [rsp+90h] [rbp+10h]
  __int128 v78; // [rsp+A0h] [rbp+20h]
  __int64 v79; // [rsp+B0h] [rbp+30h]
  __int64 v80; // [rsp+B8h] [rbp+38h] BYREF
  __m128i v81; // [rsp+C0h] [rbp+40h]
  __m128i v82; // [rsp+D0h] [rbp+50h] BYREF
  _QWORD v83[2]; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v84; // [rsp+1D8h] [rbp+158h]
  __m128i v85; // [rsp+1E8h] [rbp+168h]
  __int128 v86; // [rsp+1F8h] [rbp+178h]
  __int128 v87; // [rsp+208h] [rbp+188h]
  __int128 v88; // [rsp+218h] [rbp+198h]
  __int128 v89; // [rsp+228h] [rbp+1A8h]
  __m128i v90; // [rsp+238h] [rbp+1B8h]
  __int64 v91; // [rsp+248h] [rbp+1C8h]
  __m128i v92; // [rsp+250h] [rbp+1D0h] BYREF
  __m128i v93[5]; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v94; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v95; // [rsp+2B8h] [rbp+238h]
  __m128i v96; // [rsp+2C8h] [rbp+248h]
  __int128 v97; // [rsp+2D8h] [rbp+258h]
  __int128 v98; // [rsp+2E8h] [rbp+268h]
  __int128 v99; // [rsp+2F8h] [rbp+278h]
  __int128 v100; // [rsp+308h] [rbp+288h]
  __m128i v101; // [rsp+318h] [rbp+298h] BYREF
  __int64 v102; // [rsp+328h] [rbp+2A8h]
  __m128i v103; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v104; // [rsp+340h] [rbp+2C0h]
  __m128i v105; // [rsp+350h] [rbp+2D0h]
  __int128 v106; // [rsp+360h] [rbp+2E0h]
  __int128 v107; // [rsp+370h] [rbp+2F0h]
  __int128 v108; // [rsp+380h] [rbp+300h]
  __int128 v109; // [rsp+390h] [rbp+310h]
  __m128i v110; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v111; // [rsp+3B0h] [rbp+330h]
  __int128 v112; // [rsp+440h] [rbp+3C0h]
  __m128i v113; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v114; // [rsp+460h] [rbp+3E0h]
  __int128 v115; // [rsp+470h] [rbp+3F0h]
  __int128 v116; // [rsp+480h] [rbp+400h]
  __int128 v117; // [rsp+490h] [rbp+410h]
  __m128i v118; // [rsp+4A0h] [rbp+420h] BYREF
  __int64 v119; // [rsp+4B0h] [rbp+430h]
  __m128i v120; // [rsp+4C0h] [rbp+440h] BYREF
  __m128i v121; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v122; // [rsp+4E0h] [rbp+460h]
  __int128 v123; // [rsp+4F0h] [rbp+470h]
  __int128 v124; // [rsp+500h] [rbp+480h]
  __int128 v125; // [rsp+510h] [rbp+490h]
  __m128i v126; // [rsp+520h] [rbp+4A0h]
  __int64 v127; // [rsp+530h] [rbp+4B0h]
  __m128i v128; // [rsp+540h] [rbp+4C0h] BYREF
  __m128i v129; // [rsp+550h] [rbp+4D0h] BYREF
  __m128i v130; // [rsp+560h] [rbp+4E0h]
  __m128i v131; // [rsp+570h] [rbp+4F0h]
  __m128i v132; // [rsp+580h] [rbp+500h]
  __m128i v133; // [rsp+590h] [rbp+510h]
  __m128i v134; // [rsp+5A0h] [rbp+520h]
  __m128i v135; // [rsp+5B0h] [rbp+530h]
  _BYTE v136[24]; // [rsp+5C0h] [rbp+540h] BYREF
  _BYTE v137[104]; // [rsp+5D8h] [rbp+558h]
  __m128i v138; // [rsp+640h] [rbp+5C0h] BYREF
  __m128i v139[5]; // [rsp+650h] [rbp+5D0h] BYREF
  __m128i v140; // [rsp+6A0h] [rbp+620h] BYREF
  __m128i v141; // [rsp+6B0h] [rbp+630h] BYREF
  __m128i v142; // [rsp+6C0h] [rbp+640h]
  __m128i v143; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v144; // [rsp+6E8h] [rbp+668h]
  __int64 v145; // [rsp+6F0h] [rbp+670h]
  const __m128i *v146; // [rsp+6F8h] [rbp+678h]
  _BYTE *v147; // [rsp+700h] [rbp+680h]
  const __m128i *v148; // [rsp+708h] [rbp+688h]
  _BYTE *v149; // [rsp+710h] [rbp+690h]
  const __m128i *v150; // [rsp+718h] [rbp+698h]
  _BYTE *v151; // [rsp+720h] [rbp+6A0h]
  __int64 v152; // [rsp+728h] [rbp+6A8h]
  __int64 v153; // [rsp+730h] [rbp+6B0h]
  __int64 v154; // [rsp+738h] [rbp+6B8h]
  __int64 v155; // [rsp+740h] [rbp+6C0h]
  const __m128i *v156; // [rsp+748h] [rbp+6C8h]
  _BYTE *v157; // [rsp+750h] [rbp+6D0h]
  _BYTE *v158; // [rsp+758h] [rbp+6D8h]
  const __m128i *v159; // [rsp+760h] [rbp+6E0h]
  __int64 v160; // [rsp+768h] [rbp+6E8h]
  __int64 v161; // [rsp+770h] [rbp+6F0h]

  v161 = -2;
  v4 = *(unsigned __int8 *)(a2 + 425);
  v160 = a2;
  switch ( v4 )
  {
    case 0LL:
      v155 = a3;
      v5 = *(unsigned __int8 ***)(a2 + 96);
      *(_QWORD *)(a2 + 136) = v5;
      v6 = *(_OWORD *)(a2 + 16);
      v7 = *(_OWORD *)(a2 + 32);
      v8 = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(a2 + 144) = *(_OWORD *)a2;
      *(_OWORD *)(a2 + 160) = v6;
      *(_OWORD *)(a2 + 176) = v7;
      *(_OWORD *)(a2 + 192) = v8;
      *(_OWORD *)(a2 + 208) = *(_OWORD *)(a2 + 64);
      *(_OWORD *)(a2 + 224) = *(_OWORD *)(a2 + 80);
      *(_BYTE *)(a2 + 426) = 1;
      v143 = _mm_loadu_si128((const __m128i *)(a2 + 120));
      v142 = _mm_loadu_si128((const __m128i *)(a2 + 104));
      v11 = *(unsigned __int8 *)(a2 + 424);
      LOBYTE(v159) = *(_BYTE *)(a2 + 424);
      v9 = *v5;
      v10 = (char *)(*v5 + 16);
      LOBYTE(v11) = 1;
      if ( _InterlockedCompareExchange8(v10, 1, 0) )
        sub_141937480(v10);
      v12 = off_1421E7210;
      if ( 2 * *off_1421E7210 )
        v13 = sub_141938160(v11) ^ 1;
      else
        v13 = 0;
      v14 = v160 + 144;
      v15 = v9[17];
      LOBYTE(v158) = v15;
      v103.m128i_i64[1] = (__int64)v10;
      LOBYTE(v104) = v13;
      v103.m128i_i64[0] = (_BYTE)v15 != 0;
      if ( (_BYTE)v15 )
      {
        LOWORD(a2) = 500;
        sub_140DAFCE0((unsigned int)&v128, a2, (unsigned int)aStatePoisoned, 14, (__int64)aRouterStatePoi, 21);
        if ( !v13 && 2 * *v12 && !(unsigned __int8)sub_141938160(v16) )
          v9[17] = 1;
        v17 = *v10;
        *v10 = 0;
        if ( v17 == 2 )
          WakeByAddressSingle(v10);
        goto LABEL_37;
      }
      v36 = v9[388];
      LOBYTE(v154) = v9[406];
      if ( !v13 && 2 * *v12 && !(unsigned __int8)sub_141938160(v15) )
        v9[17] = 1;
      v37 = *v10;
      *v10 = 0;
      if ( v37 == 2 )
        WakeByAddressSingle(v10);
      if ( !v36 )
      {
        LOWORD(a2) = 503;
        sub_140DAFCE0((unsigned int)&v128, a2, (unsigned int)aCodexCodex, 115, (__int64)aRouterDisabled, 15);
        goto LABEL_37;
      }
      if ( (_BYTE)v154 )
      {
        LOWORD(a2) = 401;
        sub_140DAFCE0((unsigned int)&v128, a2, (unsigned int)aChatgpt_2, 120, (__int64)aPassthroughNoC, 27);
LABEL_37:
        (*(void (__fastcall **)(__int8 *, __int64, __int64))(v142.m128i_i64[0] + 32))(
          &v143.m128i_i8[8],
          v142.m128i_i64[1],
          v143.m128i_i64[0]);
        *(_BYTE *)(v160 + 426) = 0;
        sub_14029C800(v14);
        goto LABEL_75;
      }
      v38 = (_BYTE)v159 == 0;
      v39 = 25;
      if ( (_BYTE)v159 )
        v39 = 19;
      v40 = aRouterImagesGe;
      if ( (_BYTE)v159 )
        v40 = (const char *)&unk_141A49E1D;
      v41 = (_QWORD *)v160;
      *(_QWORD *)(v160 + 240) = v40;
      v21 = 56;
      if ( !v38 )
        v21 = 50;
      v22 = &unk_141A49D9A;
      if ( !v38 )
        v22 = &unk_141A49DD2;
      v41[31] = v39;
      v41[32] = v22;
      v41[33] = v21;
      sub_140DB0900(v41[17], (_DWORD)v40, v39, (_DWORD)v22, v21, 0);
      v42 = *(_QWORD *)(*(_QWORD *)(v160 + 136) + 24LL);
      v43 = *(_DWORD *)(v42 + 16);
      if ( v43 > 0x3FFFFFFD
        || (v46 = *(_DWORD *)(v42 + 16),
            v45 = _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 16), v43 + 1, v43),
            v44 = __OFSUB__(v46, v45),
            v46 != v45) )
      {
        sub_141937550((volatile void *)(v42 + 16));
      }
      v47 = _InterlockedIncrement64(*(volatile signed __int64 **)(v42 + 32));
      if ( (v47 < 0) ^ v44 | (v47 == 0) )
        BUG();
      v48 = *(_QWORD *)(v42 + 32);
      if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v42 + 16)) & 0xBFFFFFFF), 1) )
        sub_141937840(v42 + 16);
      a2 = v160;
      v20 = (__int64 *)(v160 + 272);
      *(_QWORD *)(v160 + 272) = v48;
      *(_BYTE *)(a2 + 426) = 0;
      v49 = v142;
      v50 = v143;
      v19 = (__int128 *)(a2 + 280);
      *(_QWORD *)(a2 + 392) = v79;
      *(_OWORD *)(a2 + 376) = v78;
      *(_OWORD *)(a2 + 360) = v77;
      *(_OWORD *)(a2 + 344) = v76;
      *(_OWORD *)(a2 + 328) = v75;
      *(_OWORD *)(a2 + 312) = v74;
      *(__m128i *)(a2 + 296) = v50;
      *(__m128i *)(a2 + 280) = v49;
      *(_QWORD *)(a2 + 400) = v20;
      *(_QWORD *)(a2 + 408) = v14;
      v18 = (_BYTE *)(a2 + 416);
      *(_BYTE *)(a2 + 416) = 0;
      *(_BYTE *)(a2 + 417) = (_BYTE)v159;
LABEL_16:
      v23 = (const __m128i *)(a2 + 312);
      v24 = *v19;
      *(_OWORD *)(a2 + 328) = v19[1];
      *(_OWORD *)(a2 + 312) = v24;
      *(_QWORD *)(a2 + 360) = v22;
      *(_QWORD *)(a2 + 368) = v21;
      *(_QWORD *)(a2 + 376) = v20;
      *(_QWORD *)(a2 + 384) = v14;
      v25 = (_BYTE *)(a2 + 394);
      *(_BYTE *)(a2 + 394) = 0;
LABEL_19:
      *(_BYTE *)(a2 + 393) = 0;
      *(_BYTE *)(a2 + 392) = 1;
      v141 = _mm_loadu_si128(v23 + 1);
      v140 = _mm_loadu_si128(v23);
      v149 = v18;
      v159 = v23;
      v148 = v23;
      if ( (unsigned __int8)sub_140DB8BD0(v14) )
      {
        v149 = v18;
        v148 = v159;
        sub_140DB8220((__int128 *)&v94);
        if ( !*(_BYTE *)(v160 + 392) )
        {
LABEL_22:
          v27 = v160;
          *(_BYTE *)(v160 + 392) = 0;
          goto LABEL_62;
        }
LABEL_21:
        v26 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v140.m128i_i64[0] + 32);
        v147 = v18;
        v146 = v159;
        v26(&v141.m128i_u64[1], v140.m128i_i64[1], v141.m128i_i64[0]);
        goto LABEL_22;
      }
      v28 = v14;
      v29 = v25;
      v151 = v18;
      v30 = v159;
      v150 = v159;
      sub_140DBA0B0(&v92, v28);
      *(_BYTE *)(v160 + 393) = 1;
      v31 = *v20;
      v158 = v18;
      v157 = v18;
      v156 = v30;
      sub_140CAF8C0((unsigned int)&v103, v31, (unsigned int)&unk_141A433A0, (_DWORD)v22, v21);
      v32 = v155;
      v25 = v29;
      *(_BYTE *)(v160 + 393) = 0;
      v139[4] = v93[4];
      v139[3] = v93[3];
      v33 = _mm_loadu_si128(&v92);
      v34 = _mm_loadu_si128(v93);
      v139[2] = v93[2];
      v139[1] = v93[1];
      v139[0] = v34;
      v138 = v33;
      v157 = v158;
      v156 = v159;
      sub_141259870(&v80, &v103, &v138);
      *(_BYTE *)(v160 + 392) = 0;
      v35 = _mm_load_si128(&v140);
      v139[0] = _mm_load_si128(&v141);
      v138 = v35;
      v154 = v80;
      if ( v80 == 2 )
      {
        sub_1418F44E0(&v103, (const __m128i *)&v80, 0x110u);
        (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v138.m128i_i64[0] + 32))(
          &v139[0].m128i_u64[1],
          v138.m128i_i64[1],
          v139[0].m128i_i64[0]);
      }
      else
      {
        if ( v80 )
        {
          if ( v81.m128i_i64[0] )
          {
            (*(void (__fastcall **)(__int8 *, __int64, __int64))(v81.m128i_i64[0] + 32))(
              &v82.m128i_i8[8],
              v81.m128i_i64[1],
              v82.m128i_i64[0]);
          }
          else
          {
            v152 = v81.m128i_i64[1];
            v153 = v82.m128i_i64[0];
            if ( *(_QWORD *)v82.m128i_i64[0] )
              (*(void (__fastcall **)(__int64))v82.m128i_i64[0])(v152);
            v51 = *(_QWORD *)(v153 + 8);
            if ( v51 )
              sub_140001660(v152, v51, *(_QWORD *)(v153 + 16));
          }
        }
        v80 = 1;
        si128 = _mm_load_si128(v139);
        v81 = _mm_load_si128(&v138);
        v82 = si128;
        sub_1418F44E0(&v103, (const __m128i *)&v80, 0x110u);
      }
      v157 = v158;
      v156 = v159;
      v53 = sub_1412597A0(&v103);
      v54 = v160;
      *(_QWORD *)(v160 + 344) = v53;
      *(_QWORD *)(v54 + 352) = v55;
      a2 = v54;
      a3 = v32;
LABEL_58:
      sub_14126C5E0(&v103, a2 + 344, a3);
      v56 = v103.m128i_i64[0];
      if ( v103.m128i_i64[0] == -2 )
      {
        *v25 = 3;
        v27 = v160;
        v18 = v158;
        goto LABEL_76;
      }
      v57 = v103.m128i_i64[1];
      v112 = v104;
      v113 = v105;
      v114 = v106;
      v115 = v107;
      v116 = v108;
      v117 = v109;
      v118 = _mm_loadu_si128(&v110);
      v119 = v111;
      v58 = *(_QWORD *)(v160 + 344);
      v59 = *(_QWORD *)(v160 + 352);
      v157 = v158;
      v156 = v159;
      sub_140D1A820(v58, v59);
      if ( (_DWORD)v56 == -1 )
      {
        v138.m128i_i64[0] = v57;
        v80 = (__int64)&v138;
        v81.m128i_i64[0] = (__int64)sub_14122E940;
        sub_1416ABFD0(&v103, &unk_141A49350, &v80);
        v154 = v103.m128i_i64[1];
        v155 = v103.m128i_i64[0];
        sub_140DB8220((__int128 *)&v94);
        if ( v155 )
          sub_140001660(v154, v155, 1);
        v157 = v158;
        v156 = v159;
        sub_140D19140(v138.m128i_i64[0]);
        *(_BYTE *)(v160 + 393) = 0;
        v18 = v158;
        if ( !*(_BYTE *)(v160 + 392) )
          goto LABEL_22;
        goto LABEL_21;
      }
      v83[0] = v56;
      v83[1] = v57;
      v60 = _mm_load_si128(&v113);
      v84 = v112;
      v85 = v60;
      v86 = v114;
      v87 = v115;
      v88 = v116;
      v89 = v117;
      v90 = _mm_load_si128(&v118);
      v91 = v119;
      v157 = v158;
      v156 = v159;
      sub_140DB9210(&v94, v83);
      v27 = v160;
      *(_BYTE *)(v160 + 393) = 0;
      *(_BYTE *)(v27 + 392) = 0;
      v18 = v158;
LABEL_62:
      v61 = v94;
      v120 = v95;
      v121 = v96;
      v122 = v97;
      v123 = v98;
      v124 = v99;
      v125 = v100;
      v126 = _mm_loadu_si128(&v101);
      v127 = v102;
      *v25 = 1;
      if ( v61 != -1 )
      {
        *(_BYTE *)(v27 + 416) = 1;
        *(_QWORD *)&v137[96] = v127;
        *(__m128i *)&v137[80] = v126;
        *(_OWORD *)&v137[64] = v125;
        *(_OWORD *)&v137[48] = v124;
        v62 = _mm_load_si128(&v120);
        v63 = _mm_load_si128(&v121);
        *(_OWORD *)&v137[32] = v123;
        *(_OWORD *)&v137[16] = v122;
        *(__m128i *)v137 = v63;
        *(__m128i *)&v136[8] = v62;
        *(_QWORD *)v136 = v61;
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v27 + 272)) )
          sub_141242F50(v160 + 272);
        sub_140D29110(&v103, aXAimamiReason, 15, v136);
        if ( v103.m128i_i8[0] )
        {
          if ( (unsigned __int64)v104 >= *(_QWORD *)&v137[16] )
            sub_1419390C3(v104, *(_QWORD *)&v137[16], &off_141A426F8);
          v64 = *(_QWORD *)(*(_QWORD *)&v137[8] + 104 * v104 + 40);
          if ( v64 )
          {
            v65 = *(_QWORD *)(*(_QWORD *)&v137[8] + 104 * v104 + 32);
            for ( i = 0; i != v64; ++i )
            {
              if ( (unsigned __int8)(*(_BYTE *)(v65 + i) - 32) >= 0x5Fu && *(_BYTE *)(v65 + i) != 9 )
                goto LABEL_74;
            }
            if ( v64 == 19
              && _mm_movemask_epi8(
                   _mm_and_si128(
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v65), (__m128i)xmmword_141A41E90),
                     _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v65 + 3)), (__m128i)xmmword_141A41E80))) == 0xFFFF )
            {
              sub_140DA5020(*(_QWORD *)(v160 + 136), 0);
            }
          }
        }
LABEL_74:
        sub_140DB0900(
          *(_QWORD *)(v160 + 136),
          *(_QWORD *)(v160 + 240),
          *(_QWORD *)(v160 + 248),
          *(_QWORD *)(v160 + 256),
          *(_QWORD *)(v160 + 264),
          1);
        v135 = *(__m128i *)&v137[88];
        v134 = *(__m128i *)&v137[72];
        v133 = *(__m128i *)&v137[56];
        v132 = *(__m128i *)&v137[40];
        v67 = _mm_loadu_si128((const __m128i *)v136);
        v68 = _mm_loadu_si128((const __m128i *)&v136[16]);
        v131 = *(__m128i *)&v137[24];
        v130 = *(__m128i *)&v137[8];
        v129 = v68;
        v128 = v67;
        v69 = v160;
        *(_BYTE *)(v160 + 426) = 0;
        sub_14029C800(v69 + 144);
LABEL_75:
        a1[7] = v135;
        a1[6] = v134;
        a1[5] = v133;
        a1[4] = v132;
        v70 = _mm_load_si128(&v128);
        v71 = _mm_load_si128(&v129);
        v72 = v130;
        a1[3] = v131;
        a1[2] = v72;
        a1[1] = v71;
        *a1 = v70;
        result = 1;
        v27 = v160;
        goto LABEL_77;
      }
LABEL_76:
      *v18 = 3;
      a1->m128i_i64[0] = -1;
      result = 3;
LABEL_77:
      *(_BYTE *)(v27 + 425) = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A48B38);
    case 2LL:
      sub_141939400(&off_141A48B38);
    case 3LL:
      v18 = (_BYTE *)(a2 + 416);
      switch ( *(_BYTE *)(a2 + 416) )
      {
        case 0:
          v155 = a3;
          v19 = (__int128 *)(a2 + 280);
          v20 = *(__int64 **)(a2 + 400);
          v14 = *(_QWORD *)(a2 + 408);
          v21 = 56;
          if ( *(_BYTE *)(a2 + 417) )
            v21 = 50;
          v22 = &unk_141A49D9A;
          if ( *(_BYTE *)(a2 + 417) )
            v22 = &unk_141A49DD2;
          break;
        case 1:
          sub_1419393E0(&off_141A49390);
        case 2:
          sub_141939400(&off_141A49390);
        case 3:
          v25 = (_BYTE *)(a2 + 394);
          v23 = (const __m128i *)(a2 + 312);
          switch ( *(_BYTE *)(a2 + 394) )
          {
            case 0:
              v155 = a3;
              v20 = *(__int64 **)(a2 + 376);
              v14 = *(_QWORD *)(a2 + 384);
              v22 = *(void **)(a2 + 360);
              v21 = *(_QWORD *)(a2 + 368);
              goto LABEL_19;
            case 1:
              v145 = a2 + 416;
              v144 = a2 + 312;
              sub_1419393E0(&off_141A49338);
            case 2:
              v145 = a2 + 416;
              v144 = a2 + 312;
              sub_141939400(&off_141A49338);
            case 3:
              v159 = (const __m128i *)(a2 + 312);
              v158 = (_BYTE *)(a2 + 416);
              goto LABEL_58;
          }
      }
      goto LABEL_16;
  }
}
