// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f014f0 | name sub_140F014F0
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F014F0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // r8
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int128 v21; // kr00_16
  __int128 v22; // kr10_16
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // r15
  __int64 v27; // r15
  __int64 v28; // r12
  char v29; // al
  _QWORD *v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  _QWORD *v36; // r12
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r15
  __int64 v41; // r14
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r13
  __int64 v46; // r14
  __int64 v47; // rbx
  char v48; // al
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  char v59; // bl
  __int64 v60; // rdi
  __int64 v61; // r12
  __int64 v62; // rdi
  __int64 v63; // r13
  char v64; // al
  __int64 v65; // r14
  __int64 v66; // rdx
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm2
  __int64 v70; // rdi
  _QWORD *v71; // r14
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm2
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm2
  __int64 v81; // rbx
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm2
  __int128 v85; // [rsp+40h] [rbp-40h] BYREF
  __int128 v86; // [rsp+50h] [rbp-30h]
  __int128 v87; // [rsp+60h] [rbp-20h]
  __int128 v88; // [rsp+70h] [rbp-10h]
  __int128 v89; // [rsp+80h] [rbp+0h]
  __int64 v90; // [rsp+90h] [rbp+10h]
  char v91[8]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v92; // [rsp+A8h] [rbp+28h]
  __int64 v93; // [rsp+B0h] [rbp+30h]
  _QWORD *v94; // [rsp+B8h] [rbp+38h]
  __int64 v95; // [rsp+C0h] [rbp+40h]
  char v96[8]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v97; // [rsp+D0h] [rbp+50h]
  __int64 v98; // [rsp+D8h] [rbp+58h]
  __int128 v99; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v100; // [rsp+F0h] [rbp+70h] BYREF
  __m256i v101; // [rsp+100h] [rbp+80h] BYREF
  __m256i v102; // [rsp+120h] [rbp+A0h]
  signed __int64 v103; // [rsp+140h] [rbp+C0h]
  __int64 v104; // [rsp+148h] [rbp+C8h]
  __int64 v105; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v106; // [rsp+158h] [rbp+D8h]
  __int64 v107; // [rsp+160h] [rbp+E0h]
  __int128 v108; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v109; // [rsp+178h] [rbp+F8h]
  __int128 v110; // [rsp+180h] [rbp+100h] BYREF
  __int64 v111; // [rsp+190h] [rbp+110h]
  __int64 v112; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v113; // [rsp+1A8h] [rbp+128h]
  _QWORD *v114; // [rsp+1B8h] [rbp+138h]
  __int64 v115; // [rsp+1C0h] [rbp+140h]
  __int64 v116; // [rsp+1C8h] [rbp+148h]
  __int128 v117; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v118; // [rsp+1E0h] [rbp+160h]
  __int128 v119; // [rsp+1F0h] [rbp+170h]
  __int128 v120; // [rsp+200h] [rbp+180h]
  __int128 v121; // [rsp+210h] [rbp+190h]
  __int64 v122; // [rsp+220h] [rbp+1A0h]
  __int64 v123; // [rsp+230h] [rbp+1B0h]
  const __m128i *v124; // [rsp+238h] [rbp+1B8h]
  _BYTE v125[96]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v126; // [rsp+2A0h] [rbp+220h]
  __int64 v127; // [rsp+2A8h] [rbp+228h]
  __int64 v128; // [rsp+2B0h] [rbp+230h]
  __int64 v129; // [rsp+2B8h] [rbp+238h]
  __int64 v130; // [rsp+2C0h] [rbp+240h]

  v130 = -2;
  sub_140EFE660((__int64)v125, (__int64)a2);
  v4 = *(_QWORD *)v125;
  v117 = *(_OWORD *)&v125[8];
  *(_QWORD *)&v118 = *(_QWORD *)&v125[24];
  if ( *(_QWORD *)v125 != -1 )
  {
    v5 = *(_OWORD *)&v125[32];
    v6 = *(_OWORD *)&v125[48];
    v7 = *(_OWORD *)&v125[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v125[80];
    *(_OWORD *)(a1 + 72) = v7;
    *(_OWORD *)(a1 + 56) = v6;
    *(_OWORD *)(a1 + 40) = v5;
    *(_QWORD *)(a1 + 32) = v118;
    *(_OWORD *)(a1 + 16) = v117;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 1;
    return a1;
  }
  *(_OWORD *)&v102.m256i_u64[1] = v117;
  v102.m256i_i64[3] = v118;
  *(_QWORD *)&v99 = 0;
  *((_QWORD *)&v99 + 1) = 8;
  v100 = 0;
  v101.m256i_i64[0] = 8;
  *(_OWORD *)&v101.m256i_u64[1] = 0;
  v101.m256i_i64[3] = 8;
  v102.m256i_i64[0] = 0;
  v8 = a2[98];
  v128 = a2[97];
  v123 = v8;
  sub_140EF78A0(v125, v128, v8);
  v9 = *(_QWORD *)v125;
  v117 = *(_OWORD *)&v125[8];
  v118 = *(_OWORD *)&v125[24];
  v119 = *(_OWORD *)&v125[40];
  v120 = *(_OWORD *)&v125[56];
  v121 = *(_OWORD *)&v125[72];
  v122 = *(_QWORD *)&v125[88];
  if ( *(_QWORD *)v125 != -1 )
  {
    *(_QWORD *)(a1 + 96) = v122;
    *(_OWORD *)(a1 + 80) = v121;
    v10 = v117;
    v11 = v118;
    v12 = v119;
    *(_OWORD *)(a1 + 64) = v120;
    *(_OWORD *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 1;
LABEL_5:
    sub_140195A80(&v99);
    return a1;
  }
  v90 = v122;
  v89 = v121;
  v88 = v120;
  v87 = v119;
  v86 = v118;
  v85 = v117;
  sub_140EFDBB0(v125, v128, v123);
  v14 = *(_QWORD *)v125;
  v117 = *(_OWORD *)&v125[8];
  *(_QWORD *)&v118 = *(_QWORD *)&v125[24];
  if ( *(_QWORD *)v125 != -1 )
  {
    v15 = *(_OWORD *)&v125[32];
    v16 = *(_OWORD *)&v125[48];
    v17 = *(_OWORD *)&v125[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v125[80];
    *(_OWORD *)(a1 + 72) = v17;
    *(_OWORD *)(a1 + 56) = v16;
    *(_OWORD *)(a1 + 40) = v15;
    *(_QWORD *)(a1 + 32) = v118;
    *(_OWORD *)(a1 + 16) = v117;
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = 1;
    if ( (_QWORD)v85 != -1 )
      sub_14062A720(&v85);
    goto LABEL_5;
  }
  v110 = v117;
  v111 = v118;
  v18 = v85;
  if ( (_QWORD)v85 == -1 && !v111 )
  {
    *(__m256i *)(a1 + 72) = v102;
    v56 = v99;
    v57 = v100;
    v58 = *(_OWORD *)v101.m256i_i8;
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v101.m256i_u64[2];
    *(_OWORD *)(a1 + 40) = v58;
    *(_OWORD *)(a1 + 24) = v57;
    *(_OWORD *)(a1 + 8) = v56;
    *(_QWORD *)a1 = 0;
    v59 = 0;
    v60 = *((_QWORD *)&v110 + 1);
    goto LABEL_68;
  }
  v19 = a2[9];
  v20 = a2[10];
  sub_140EF92D0(v125, v19, v20);
  v21 = *(_OWORD *)v125;
  v22 = *(_OWORD *)&v125[16];
  if ( *(_QWORD *)v125 == -1 )
  {
    v127 = *(_QWORD *)&v125[8];
    v124 = *(const __m128i **)&v125[16];
    sub_140EFBC90((__int64)v96, *(__int64 *)&v125[16], *(__int64 *)&v125[24]);
    sub_140EF9920((__int64)v91, (__int64)v124, *((__int64 *)&v22 + 1));
    v105 = 0;
    v106 = 8;
    v107 = 0;
    v112 = 0;
    v113 = 8u;
    v104 = v85;
    v115 = v20;
    v116 = v19;
    v103 = *((_QWORD *)&v22 + 1);
    if ( (_QWORD)v85 == -1 )
    {
      v129 = v97;
      v126 = v98;
    }
    else
    {
      v27 = *((_QWORD *)&v85 + 1);
      v129 = v97;
      v126 = v98;
      while ( v27 != *((_QWORD *)&v85 + 1) + 24LL * (_QWORD)v86 )
      {
        v28 = v27;
        v29 = sub_140F008D0(v128, v123, *(_QWORD *)(v27 + 8), *(_QWORD *)(v27 + 16));
        v27 += 24;
        if ( !v29 )
          sub_140EBBF00(v129, v126, *(const __m128i **)(v28 + 8), *(_QWORD *)(v28 + 16), &v105, &v99);
      }
      v30 = (_QWORD *)v87;
      v94 = (_QWORD *)(v87 + 48LL * *((_QWORD *)&v87 + 1));
      v95 = v92;
      v31 = v92 + 24 * v93;
LABEL_21:
      while ( v30 != v94 )
      {
        v36 = v30;
        v37 = sub_140F00780((const __m128i *)v30[1], v30[2]);
        v30 = v36 + 6;
        if ( !v37 )
        {
          v114 = v36 + 6;
          v125[0] = 2;
          v38 = v36[5];
          if ( v38 )
          {
            v39 = v36[4];
            v40 = v39 + 24 * v38;
            while ( 1 )
            {
              v41 = *(_QWORD *)(v39 + 8);
              v42 = *(_QWORD *)(v39 + 16);
              if ( (unsigned __int8)sub_1402B5F80(v125, v41, v42) )
              {
                v43 = sub_140E91160(v41, v42);
                if ( v44 )
                {
                  if ( *(_BYTE *)v43 == 91 && *(_BYTE *)(v43 + v44 - 1) == 93 )
                  {
                    if ( v44 == 1 || *(char *)(v43 + 1) <= -65 )
                      sub_141938F40(v43, v44, 1, v44 - 1, (__int64)&off_1419E98C8);
                    if ( sub_140F00780((const __m128i *)(v43 + 1), v44 - 2) )
                      break;
                  }
                }
              }
              v39 += 24;
              if ( v39 == v40 )
                goto LABEL_34;
            }
            v30 = v114;
          }
          else
          {
LABEL_34:
            v45 = v36[1];
            v46 = v36[2];
            v47 = v95;
            while ( v47 != v31 )
            {
              v48 = sub_140EF8790(*(_QWORD *)(v47 + 8), *(_QWORD *)(v47 + 16), v45, v46);
              v47 += 24;
              if ( v48 )
              {
                sub_1416AC440(v125, v36);
                v49 = v102.m256i_i64[0];
                if ( v102.m256i_i64[0] == v101.m256i_i64[2] )
                  sub_14190FDC0(&v101.m256i_u64[2]);
                v50 = v101.m256i_i64[3];
                v51 = 3 * v49;
                *(_QWORD *)(v101.m256i_i64[3] + 8 * v51 + 16) = *(_QWORD *)&v125[16];
                *(_OWORD *)(v50 + 8 * v51) = *(_OWORD *)v125;
                v102.m256i_i64[0] = v49 + 1;
                v30 = v114;
                goto LABEL_21;
              }
            }
            sub_1416AC440(v125, v36);
            v52 = v101.m256i_i64[1];
            if ( v101.m256i_i64[1] == *((_QWORD *)&v100 + 1) )
              sub_14190FDC0((char *)&v100 + 8);
            v53 = v101.m256i_i64[0];
            v54 = 3 * v52;
            *(_QWORD *)(v101.m256i_i64[0] + 8 * v54 + 16) = *(_QWORD *)&v125[16];
            *(_OWORD *)(v53 + 8 * v54) = *(_OWORD *)v125;
            v101.m256i_i64[1] = v52 + 1;
            sub_1416AC440(&v108, v36);
            sub_1403F1200(&v117, v36 + 3);
            *(_QWORD *)&v125[16] = v109;
            *(_OWORD *)v125 = v108;
            *(_QWORD *)&v125[40] = v118;
            *(_OWORD *)&v125[24] = v117;
            v55 = *((_QWORD *)&v113 + 1);
            if ( *((_QWORD *)&v113 + 1) == v112 )
              sub_14190F490(&v112);
            v32 = v113;
            v33 = 48 * v55;
            v34 = *(_OWORD *)v125;
            v35 = *(_OWORD *)&v125[16];
            *(_OWORD *)(v113 + v33 + 32) = *(_OWORD *)&v125[32];
            *(_OWORD *)(v32 + v33 + 16) = v35;
            *(_OWORD *)(v32 + v33) = v34;
            *((_QWORD *)&v113 + 1) = v55 + 1;
            v30 = v114;
          }
        }
      }
    }
    v61 = *((_QWORD *)&v110 + 1);
    v26 = v111;
    v62 = *((_QWORD *)&v110 + 1) + 24 * v111;
    while ( v61 != v62 )
    {
      v63 = v61;
      v64 = sub_140F008D0(v128, v123, *(_QWORD *)(v61 + 8), *(_QWORD *)(v61 + 16));
      v61 += 24;
      if ( !v64 )
        sub_140EBBF00(v129, v126, *(const __m128i **)(v63 + 8), *(_QWORD *)(v63 + 16), &v105, &v99);
    }
    sub_140EF7DC0((signed __int64 *)&v108, v124, v103, v106, v107, v113, *((__int64 *)&v113 + 1));
    v65 = v109;
    v129 = *((_QWORD *)&v108 + 1);
    sub_140EC6F50(v125, *((_QWORD *)&v108 + 1), v109);
    if ( *(_DWORD *)v125 != -1 )
      goto LABEL_56;
    if ( v65 == v103 && !(unsigned int)sub_1418F4B70(v129, v124) )
    {
      sub_141695740(v125, v116, v115);
      if ( v125[0] )
      {
        v73 = *(_QWORD *)&v125[8];
        *(_QWORD *)(a1 + 8) = 2;
        *(_QWORD *)(a1 + 16) = v73;
        goto LABEL_57;
      }
      if ( v125[1] == 1 )
      {
        v74 = sub_1402237A0(v116, v115);
        if ( v74 )
        {
          sub_140EBC3A0(v125, v74);
          goto LABEL_56;
        }
      }
    }
    else if ( (sub_140222E10(v116, v115, v129, v65) & 1) != 0 || (v66 = sub_1401BD880(v66)) != 0 )
    {
      sub_140EBC2F0(v125, v66);
LABEL_56:
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v125[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v125[64];
      v67 = *(_OWORD *)v125;
      v68 = *(_OWORD *)&v125[16];
      v69 = *(_OWORD *)&v125[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v125[48];
      *(_OWORD *)(a1 + 40) = v69;
      *(_OWORD *)(a1 + 24) = v68;
      *(_OWORD *)(a1 + 8) = v67;
LABEL_57:
      *(_QWORD *)a1 = 1;
      goto LABEL_58;
    }
    sub_1416828D0((unsigned int)&v117, v128, v123, (unsigned int)aRouterTakeover, 27);
    v126 = *((_QWORD *)&v117 + 1);
    sub_140EF94F0((__int64)v125, *((__int64 *)&v117 + 1), v118, (__int64)aRouterTakeover, 27);
    if ( *(_DWORD *)v125 == -1 )
    {
      if ( (_QWORD)v117 )
        sub_140001660(v126, v117, 1);
      sub_1416828D0((unsigned int)&v117, v128, v123, (unsigned int)aCodexRouterTop, 34);
      v128 = *((_QWORD *)&v117 + 1);
      sub_140EF94F0((__int64)v125, *((__int64 *)&v117 + 1), v118, (__int64)aCodexRouterTop, 34);
      v70 = v127;
      if ( *(_DWORD *)v125 == -1 )
      {
        v81 = v104;
        if ( (_QWORD)v117 )
          sub_140001660(v128, v117, 1);
        *(__m256i *)(a1 + 72) = v102;
        v82 = v99;
        v83 = v100;
        v84 = *(_OWORD *)v101.m256i_i8;
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v101.m256i_u64[2];
        *(_OWORD *)(a1 + 40) = v84;
        *(_OWORD *)(a1 + 24) = v83;
        *(_OWORD *)(a1 + 8) = v82;
        *(_QWORD *)a1 = 0;
        if ( (_QWORD)v108 )
          sub_140001660(v129, v108, 1);
        sub_140025410(&v112);
        sub_140025530(&v105);
        sub_140025530(v91);
        sub_140025530(v96);
        if ( v70 )
          sub_140001660(v124, v70, 1);
        sub_140025530(&v110);
        if ( v81 != -1 )
          sub_14062A720(&v85);
        return a1;
      }
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v125[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v125[64];
      v78 = *(_OWORD *)v125;
      v79 = *(_OWORD *)&v125[16];
      v80 = *(_OWORD *)&v125[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v125[48];
      *(_OWORD *)(a1 + 40) = v80;
      *(_OWORD *)(a1 + 24) = v79;
      *(_OWORD *)(a1 + 8) = v78;
      *(_QWORD *)a1 = 1;
      if ( (_QWORD)v117 )
        sub_140001660(v128, v117, 1);
      goto LABEL_59;
    }
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v125[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v125[64];
    v75 = *(_OWORD *)v125;
    v76 = *(_OWORD *)&v125[16];
    v77 = *(_OWORD *)&v125[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v125[48];
    *(_OWORD *)(a1 + 40) = v77;
    *(_OWORD *)(a1 + 24) = v76;
    *(_OWORD *)(a1 + 8) = v75;
    *(_QWORD *)a1 = 1;
    if ( (_QWORD)v117 )
      sub_140001660(v126, v117, 1);
LABEL_58:
    v70 = v127;
LABEL_59:
    if ( (_QWORD)v108 )
      sub_140001660(v129, v108, 1);
    sub_140025410(&v112);
    sub_140025530(&v105);
    sub_140025530(v91);
    sub_140025530(v96);
    v18 = v104;
    if ( v70 )
      sub_140001660(v124, v70, 1);
    goto LABEL_63;
  }
  v23 = *(_OWORD *)&v125[32];
  v24 = *(_OWORD *)&v125[48];
  v25 = *(_OWORD *)&v125[64];
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v125[80];
  *(_OWORD *)(a1 + 72) = v25;
  *(_OWORD *)(a1 + 56) = v24;
  *(_OWORD *)(a1 + 40) = v23;
  *(_QWORD *)(a1 + 16) = *((_QWORD *)&v21 + 1);
  *(_OWORD *)(a1 + 24) = v22;
  *(_QWORD *)(a1 + 8) = v21;
  *(_QWORD *)a1 = 1;
  v26 = v111;
LABEL_63:
  v60 = *((_QWORD *)&v110 + 1);
  v59 = 1;
  if ( v26 )
  {
    v71 = (_QWORD *)(*((_QWORD *)&v110 + 1) + 8LL);
    do
    {
      v72 = *(v71 - 1);
      if ( v72 )
        sub_140001660(*v71, v72, 1);
      v71 += 3;
      --v26;
    }
    while ( v26 );
  }
LABEL_68:
  if ( (_QWORD)v110 )
    sub_140001660(v60, 24 * v110, 8);
  if ( v18 != -1 )
    sub_14062A720(&v85);
  if ( v59 )
    goto LABEL_5;
  return a1;
}
