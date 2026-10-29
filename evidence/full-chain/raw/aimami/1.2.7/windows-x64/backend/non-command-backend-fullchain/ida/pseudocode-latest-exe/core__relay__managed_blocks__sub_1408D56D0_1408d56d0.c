// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408d56d0 | successor of pre-update 0x140f014f0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
__int64 __fastcall sub_1408D56D0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // r14
  __int64 v20; // r8
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
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  _QWORD *v36; // r15
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r14
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rdi
  __int64 v47; // r14
  char v48; // al
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdi
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
  _QWORD *v70; // r14
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm2
  __int64 v80; // rdi
  __int64 v81; // rbx
  __int128 v82; // [rsp+40h] [rbp-40h] BYREF
  __int128 v83; // [rsp+50h] [rbp-30h]
  __int128 v84; // [rsp+60h] [rbp-20h]
  __int128 v85; // [rsp+70h] [rbp-10h]
  __int128 v86; // [rsp+80h] [rbp+0h]
  __int64 v87; // [rsp+90h] [rbp+10h]
  char v88[8]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v89; // [rsp+A0h] [rbp+20h]
  __int64 v90; // [rsp+A8h] [rbp+28h]
  _QWORD *v91; // [rsp+B0h] [rbp+30h]
  __int64 v92; // [rsp+B8h] [rbp+38h]
  char v93[8]; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v94; // [rsp+C8h] [rbp+48h]
  __int64 v95; // [rsp+D0h] [rbp+50h]
  __int128 v96; // [rsp+D8h] [rbp+58h] BYREF
  __int128 v97; // [rsp+E8h] [rbp+68h] BYREF
  __m256i v98; // [rsp+F8h] [rbp+78h] BYREF
  __m256i v99; // [rsp+118h] [rbp+98h]
  __int64 v100; // [rsp+138h] [rbp+B8h]
  __int64 v101; // [rsp+140h] [rbp+C0h]
  __int64 v102; // [rsp+148h] [rbp+C8h]
  __int64 v103; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v104; // [rsp+158h] [rbp+D8h]
  __int64 v105; // [rsp+160h] [rbp+E0h]
  __int128 v106; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v107; // [rsp+178h] [rbp+F8h]
  __int128 v108; // [rsp+180h] [rbp+100h] BYREF
  __int64 v109; // [rsp+190h] [rbp+110h]
  __int64 v110; // [rsp+198h] [rbp+118h] BYREF
  __int128 v111; // [rsp+1A0h] [rbp+120h]
  __int64 v112; // [rsp+1B0h] [rbp+130h]
  _QWORD *v113; // [rsp+1B8h] [rbp+138h]
  __int64 v114; // [rsp+1C0h] [rbp+140h]
  __int64 v115; // [rsp+1C8h] [rbp+148h]
  __int64 v116; // [rsp+1D0h] [rbp+150h]
  __int64 v117; // [rsp+1D8h] [rbp+158h]
  __int128 v118; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v119; // [rsp+1F0h] [rbp+170h]
  __int128 v120; // [rsp+200h] [rbp+180h]
  __int128 v121; // [rsp+210h] [rbp+190h]
  __int128 v122; // [rsp+220h] [rbp+1A0h]
  __int64 v123; // [rsp+230h] [rbp+1B0h]
  __int64 v124; // [rsp+238h] [rbp+1B8h]
  _BYTE v125[96]; // [rsp+240h] [rbp+1C0h] BYREF
  _QWORD *v126; // [rsp+2A0h] [rbp+220h]
  __int64 v127; // [rsp+2A8h] [rbp+228h]
  __int64 v128; // [rsp+2B0h] [rbp+230h]

  v128 = -2;
  sub_1408D2390(v125);
  v4 = *(_QWORD *)v125;
  v118 = *(_OWORD *)&v125[8];
  *(_QWORD *)&v119 = *(_QWORD *)&v125[24];
  if ( *(_QWORD *)v125 != -1 )
  {
    v5 = *(_OWORD *)&v125[32];
    v6 = *(_OWORD *)&v125[48];
    v7 = *(_OWORD *)&v125[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v125[80];
    *(_OWORD *)(a1 + 72) = v7;
    *(_OWORD *)(a1 + 56) = v6;
    *(_OWORD *)(a1 + 40) = v5;
    *(_QWORD *)(a1 + 32) = v119;
    *(_OWORD *)(a1 + 16) = v118;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 1;
    return a1;
  }
  *(_OWORD *)&v99.m256i_u64[1] = v118;
  v99.m256i_i64[3] = v119;
  *(_QWORD *)&v96 = 0;
  *((_QWORD *)&v96 + 1) = 8;
  v97 = 0;
  v98.m256i_i64[0] = 8;
  *(_OWORD *)&v98.m256i_u64[1] = 0;
  v98.m256i_i64[3] = 8;
  v99.m256i_i64[0] = 0;
  v8 = a2[97];
  v9 = a2[98];
  sub_1408CB9A0(v125, v8, v9);
  v10 = *(_QWORD *)v125;
  v118 = *(_OWORD *)&v125[8];
  v119 = *(_OWORD *)&v125[24];
  v120 = *(_OWORD *)&v125[40];
  v121 = *(_OWORD *)&v125[56];
  v122 = *(_OWORD *)&v125[72];
  v123 = *(_QWORD *)&v125[88];
  if ( *(_QWORD *)v125 != -1 )
  {
    *(_QWORD *)(a1 + 96) = v123;
    *(_OWORD *)(a1 + 80) = v122;
    v11 = v118;
    v12 = v119;
    v13 = v120;
    *(_OWORD *)(a1 + 64) = v121;
    *(_OWORD *)(a1 + 48) = v13;
    *(_OWORD *)(a1 + 32) = v12;
    *(_OWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = 1;
LABEL_5:
    sub_1401B0BC0(&v96);
    return a1;
  }
  v87 = v123;
  v86 = v122;
  v85 = v121;
  v84 = v120;
  v83 = v119;
  v82 = v118;
  sub_1408D1940(v125, v8, v9);
  v15 = *(_QWORD *)v125;
  v118 = *(_OWORD *)&v125[8];
  *(_QWORD *)&v119 = *(_QWORD *)&v125[24];
  if ( *(_QWORD *)v125 != -1 )
  {
    v16 = *(_OWORD *)&v125[32];
    v17 = *(_OWORD *)&v125[48];
    v18 = *(_OWORD *)&v125[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v125[80];
    *(_OWORD *)(a1 + 72) = v18;
    *(_OWORD *)(a1 + 56) = v17;
    *(_OWORD *)(a1 + 40) = v16;
    *(_QWORD *)(a1 + 32) = v119;
    *(_OWORD *)(a1 + 16) = v118;
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)a1 = 1;
    if ( (_QWORD)v82 != -1 )
      sub_14084CC50(&v82);
    goto LABEL_5;
  }
  v108 = v118;
  v109 = v119;
  v19 = v82;
  if ( (_QWORD)v82 == -1 && !v109 )
  {
    *(__m256i *)(a1 + 72) = v99;
    v56 = v96;
    v57 = v97;
    v58 = *(_OWORD *)v98.m256i_i8;
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v98.m256i_u64[2];
    *(_OWORD *)(a1 + 40) = v58;
    *(_OWORD *)(a1 + 24) = v57;
    *(_OWORD *)(a1 + 8) = v56;
    *(_QWORD *)a1 = 0;
    v59 = 0;
    v60 = *((_QWORD *)&v108 + 1);
    goto LABEL_68;
  }
  v20 = a2[10];
  v116 = a2[9];
  v115 = v20;
  sub_1408CD450(v125);
  v21 = *(_OWORD *)v125;
  v22 = *(_OWORD *)&v125[16];
  v114 = v82;
  if ( *(_QWORD *)v125 == -1 )
  {
    v117 = *(_QWORD *)&v125[8];
    v124 = *(_QWORD *)&v125[16];
    sub_1408CF8D0((__int64)v93, *(__int64 *)&v125[16], *(__int64 *)&v125[24]);
    v100 = *((_QWORD *)&v22 + 1);
    sub_1408CDA70((__int64)v88, v124, *((__int64 *)&v22 + 1));
    v126 = a2;
    v103 = 0;
    v104 = 8;
    v105 = 0;
    v110 = 0;
    v111 = 8u;
    v101 = v8;
    v102 = v9;
    if ( (_QWORD)v82 == -1 )
    {
      v127 = v94;
      v112 = v95;
    }
    else
    {
      v27 = *((_QWORD *)&v82 + 1);
      v127 = v94;
      v112 = v95;
      while ( v27 != *((_QWORD *)&v82 + 1) + 24LL * (_QWORD)v83 )
      {
        v28 = v27;
        v29 = sub_1408D45C0((__int64)v126, *(_QWORD *)(v27 + 8), *(_QWORD *)(v27 + 16));
        v27 += 24;
        if ( !v29 )
          sub_140867170(v127, v112, *(_QWORD *)(v28 + 8), *(_QWORD *)(v28 + 16), &v103, &v96);
      }
      v30 = (_QWORD *)v84;
      v91 = (_QWORD *)(v84 + 48LL * *((_QWORD *)&v84 + 1));
      v92 = v89;
      v31 = v89 + 24 * v90;
LABEL_21:
      while ( v30 != v91 )
      {
        v36 = v30;
        v37 = is_aimami_owned_model_section((unsigned __int64 *)v30[1], v30[2]);
        v30 = v36 + 6;
        if ( !v37 )
        {
          v113 = v36 + 6;
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
              if ( (unsigned __int8)toml_lexical_state_line_is_structural(v125, v41, v42) )
              {
                v43 = sub_1408FEA60(v41, v42);
                if ( v44 )
                {
                  if ( *(_BYTE *)v43 == 91 && *(_BYTE *)(v43 + v44 - 1) == 93 )
                  {
                    if ( v44 == 1 || *(char *)(v43 + 1) <= -65 )
                      sub_14196B4F0(v43, v44, 1, v44 - 1, (__int64)&off_141A496C8);
                    if ( is_aimami_owned_model_section((unsigned __int64 *)(v43 + 1), v44 - 2) )
                      break;
                  }
                }
              }
              v39 += 24;
              if ( v39 == v40 )
                goto LABEL_34;
            }
            v30 = v113;
          }
          else
          {
LABEL_34:
            v45 = v36[1];
            v46 = v36[2];
            v47 = v92;
            while ( v47 != v31 )
            {
              v48 = sub_1408CC890(*(_QWORD *)(v47 + 8), *(_QWORD *)(v47 + 16), v45, v46);
              v47 += 24;
              if ( v48 )
              {
                sub_1416DB410(v125, v36);
                v49 = v99.m256i_i64[0];
                if ( v99.m256i_i64[0] == v98.m256i_i64[2] )
                  sub_141939F90(&v98.m256i_u64[2]);
                v50 = v98.m256i_i64[3];
                v51 = 3 * v49;
                *(_QWORD *)(v98.m256i_i64[3] + 8 * v51 + 16) = *(_QWORD *)&v125[16];
                *(_OWORD *)(v50 + 8 * v51) = *(_OWORD *)v125;
                v99.m256i_i64[0] = v49 + 1;
                v30 = v113;
                goto LABEL_21;
              }
            }
            sub_1416DB410(v125, v36);
            v52 = v98.m256i_i64[1];
            if ( v98.m256i_i64[1] == *((_QWORD *)&v97 + 1) )
              sub_141939F90((char *)&v97 + 8);
            v53 = v98.m256i_i64[0];
            v54 = 3 * v52;
            *(_QWORD *)(v98.m256i_i64[0] + 8 * v54 + 16) = *(_QWORD *)&v125[16];
            *(_OWORD *)(v53 + 8 * v54) = *(_OWORD *)v125;
            v98.m256i_i64[1] = v52 + 1;
            sub_1416DB410(&v106, v36);
            sub_14022C070(&v118, v36 + 3);
            *(_QWORD *)&v125[16] = v107;
            *(_OWORD *)v125 = v106;
            *(_QWORD *)&v125[40] = v119;
            *(_OWORD *)&v125[24] = v118;
            v55 = *((_QWORD *)&v111 + 1);
            if ( *((_QWORD *)&v111 + 1) == v110 )
              sub_1419396D0(&v110);
            v32 = v111;
            v33 = 48 * v55;
            v34 = *(_OWORD *)v125;
            v35 = *(_OWORD *)&v125[16];
            *(_OWORD *)(v111 + v33 + 32) = *(_OWORD *)&v125[32];
            *(_OWORD *)(v32 + v33 + 16) = v35;
            *(_OWORD *)(v32 + v33) = v34;
            *((_QWORD *)&v111 + 1) = v55 + 1;
            v30 = v113;
          }
        }
      }
    }
    v61 = *((_QWORD *)&v108 + 1);
    v26 = v109;
    v62 = *((_QWORD *)&v108 + 1) + 24 * v109;
    while ( v61 != v62 )
    {
      v63 = v61;
      v64 = sub_1408D45C0((__int64)v126, *(_QWORD *)(v61 + 8), *(_QWORD *)(v61 + 16));
      v61 += 24;
      if ( !v64 )
        sub_140867170(v127, v112, *(_QWORD *)(v63 + 8), *(_QWORD *)(v63 + 16), &v103, &v96);
    }
    sub_1408CBEC0((__int64 *)&v106, v124, v100, v104, v105, v111, *((__int64 *)&v111 + 1));
    v65 = v107;
    v126 = *((_QWORD **)&v106 + 1);
    sub_14094BA30(v125, *((_QWORD *)&v106 + 1), v107);
    if ( *(_DWORD *)v125 != -1 )
      goto LABEL_56;
    if ( v65 == v100 && !(unsigned int)sub_141923B40(v126, v124, v100) )
    {
      sub_1416C4710(v125, v116, v115);
      if ( v125[0] )
      {
        v72 = *(_QWORD *)&v125[8];
        *(_QWORD *)(a1 + 8) = 2;
        *(_QWORD *)(a1 + 16) = v72;
        goto LABEL_57;
      }
      if ( v125[1] == 1 )
      {
        v73 = sub_1407C9210(v116, v115);
        if ( v73 )
        {
          sub_140867610(v125, v73);
          goto LABEL_56;
        }
      }
    }
    else if ( (sub_1407C8880(v116, v115, v126, v65) & 1) != 0 || (v66 = sub_1407B92D0(v66)) != 0 )
    {
      sub_140867560(v125, v66);
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
LABEL_58:
      if ( (_QWORD)v106 )
        sub_140001660(v126, v106, 1);
      sub_140028F90(&v110);
      sub_1400290B0(&v103);
      sub_1400290B0(v88);
      sub_1400290B0(v93);
      if ( v117 )
        sub_140001660(v124, v117, 1);
      goto LABEL_62;
    }
    sub_1416B18A0((unsigned int)&v118, v101, v102, (unsigned int)aRouterTakeover, 27);
    v127 = *((_QWORD *)&v118 + 1);
    sub_1408CD660((__int64)v125, *((__int64 *)&v118 + 1), v119, (__int64)aRouterTakeover, 27);
    if ( *(_DWORD *)v125 == -1 )
    {
      if ( (_QWORD)v118 )
        sub_140001660(v127, v118, 1);
      sub_1416B18A0((unsigned int)&v118, v101, v102, (unsigned int)aCodexRouterTop, 34);
      v127 = *((_QWORD *)&v118 + 1);
      sub_1408CD660((__int64)v125, *((__int64 *)&v118 + 1), v119, (__int64)aCodexRouterTop, 34);
      if ( *(_DWORD *)v125 == -1 )
      {
        if ( (_QWORD)v118 )
          sub_140001660(v127, v118, 1);
        *(__m256i *)(a1 + 72) = v99;
        v77 = v96;
        v78 = v97;
        v79 = *(_OWORD *)v98.m256i_i8;
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v98.m256i_u64[2];
        *(_OWORD *)(a1 + 40) = v79;
        *(_OWORD *)(a1 + 24) = v78;
        *(_OWORD *)(a1 + 8) = v77;
        *(_QWORD *)a1 = 0;
        v80 = v117;
        v81 = v114;
        if ( (_QWORD)v106 )
          sub_140001660(v126, v106, 1);
        sub_140028F90(&v110);
        sub_1400290B0(&v103);
        sub_1400290B0(v88);
        sub_1400290B0(v93);
        if ( v80 )
          sub_140001660(v124, v80, 1);
        sub_1400290B0(&v108);
        if ( v81 != -1 )
          sub_14084CC50(&v82);
        return a1;
      }
    }
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v125[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v125[64];
    v74 = *(_OWORD *)v125;
    v75 = *(_OWORD *)&v125[16];
    v76 = *(_OWORD *)&v125[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v125[48];
    *(_OWORD *)(a1 + 40) = v76;
    *(_OWORD *)(a1 + 24) = v75;
    *(_OWORD *)(a1 + 8) = v74;
    *(_QWORD *)a1 = 1;
    if ( (_QWORD)v118 )
      sub_140001660(v127, v118, 1);
    goto LABEL_58;
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
  v26 = v109;
LABEL_62:
  v60 = *((_QWORD *)&v108 + 1);
  v59 = 1;
  if ( v26 )
  {
    v70 = (_QWORD *)(*((_QWORD *)&v108 + 1) + 8LL);
    do
    {
      v71 = *(v70 - 1);
      if ( v71 )
        sub_140001660(*v70, v71, 1);
      v70 += 3;
      --v26;
    }
    while ( v26 );
  }
  v19 = v114;
LABEL_68:
  if ( (_QWORD)v108 )
    sub_140001660(v60, 24 * v108, 8);
  if ( v19 != -1 )
    sub_14084CC50(&v82);
  if ( v59 )
    goto LABEL_5;
  return a1;
}
