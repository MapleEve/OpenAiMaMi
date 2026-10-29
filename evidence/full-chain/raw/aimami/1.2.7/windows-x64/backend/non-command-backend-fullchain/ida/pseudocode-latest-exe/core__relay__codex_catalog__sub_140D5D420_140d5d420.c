// win 1.2.7 latest-exe | module src/core/relay/codex_catalog.rs | ea 0x140d5d420 | successor of pre-update 0x141018040 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
__int64 __fastcall sub_140D5D420(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        _QWORD *a8,
        __int64 a9)
{
  __int64 v9; // r12
  _QWORD *v13; // r14
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _BYTE *v28; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // rbx
  char v31; // cl
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r15
  bool v34; // cl
  unsigned __int64 v35; // r14
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r10
  __int64 v43; // r15
  __int64 v44; // r13
  __int64 v45; // rdi
  __int128 *v46; // rbx
  __int64 v47; // r13
  __int64 v48; // rdi
  __int64 v49; // r15
  _QWORD *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rbx
  __int64 v57; // rax
  char v58; // di
  __int64 v59; // rbx
  __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int128 v64; // xmm0
  _OWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  _DWORD *v68; // rax
  __int128 v69; // xmm0
  _OWORD *v70; // rax
  __int128 v71; // xmm0
  _OWORD *v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rcx
  __int128 v76; // xmm0
  __int64 v77; // rdi
  _QWORD *v78; // rbx
  __int64 v79; // r13
  __int64 v80; // r14
  unsigned __int64 v81; // r15
  __int64 v82; // r12
  __int64 i; // rdi
  char v84; // bl
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r14
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm2
  __int128 v91; // [rsp+40h] [rbp-40h]
  __int128 v92; // [rsp+50h] [rbp-30h]
  __int128 v93; // [rsp+60h] [rbp-20h]
  __int128 v94; // [rsp+70h] [rbp-10h]
  __int128 v95; // [rsp+80h] [rbp+0h] BYREF
  __m256i v96; // [rsp+90h] [rbp+10h]
  __int128 v97; // [rsp+B0h] [rbp+30h]
  __int128 v98; // [rsp+C0h] [rbp+40h]
  __int128 v99; // [rsp+D0h] [rbp+50h]
  __int128 v100; // [rsp+E0h] [rbp+60h]
  __int64 v101; // [rsp+F0h] [rbp+70h]
  __int64 v102; // [rsp+F8h] [rbp+78h]
  __int64 v103; // [rsp+100h] [rbp+80h]
  __int128 v104; // [rsp+108h] [rbp+88h]
  __int64 v105; // [rsp+118h] [rbp+98h]
  __int64 v106; // [rsp+120h] [rbp+A0h]
  __int64 v107; // [rsp+128h] [rbp+A8h]
  unsigned __int64 v108; // [rsp+140h] [rbp+C0h]
  __int64 v109; // [rsp+158h] [rbp+D8h]
  __int128 v110; // [rsp+160h] [rbp+E0h]
  __int64 v111; // [rsp+170h] [rbp+F0h]
  int v112; // [rsp+178h] [rbp+F8h]
  int v113; // [rsp+17Ch] [rbp+FCh]
  __int128 *v114; // [rsp+188h] [rbp+108h]
  __int64 v115; // [rsp+190h] [rbp+110h]
  _BYTE v116[24]; // [rsp+198h] [rbp+118h] BYREF
  __int128 v117; // [rsp+1B0h] [rbp+130h]
  __int128 v118; // [rsp+1C0h] [rbp+140h]
  __int128 v119; // [rsp+1D0h] [rbp+150h]
  __int128 v120; // [rsp+1E0h] [rbp+160h]
  __int64 v121; // [rsp+1F0h] [rbp+170h]
  __int128 v122; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v123; // [rsp+208h] [rbp+188h]
  __int128 v124; // [rsp+210h] [rbp+190h] BYREF
  __int64 v125; // [rsp+220h] [rbp+1A0h]
  _BYTE v126[88]; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v127; // [rsp+288h] [rbp+208h]
  __int64 v128; // [rsp+290h] [rbp+210h]
  __int128 v129; // [rsp+298h] [rbp+218h] BYREF
  __int128 v130; // [rsp+2A8h] [rbp+228h]
  __int64 v131; // [rsp+2B8h] [rbp+238h]
  __int64 v132; // [rsp+2C0h] [rbp+240h]
  __int64 v133; // [rsp+2C8h] [rbp+248h]
  char v134; // [rsp+2D3h] [rbp+253h]
  char v135; // [rsp+2D4h] [rbp+254h]
  char v136; // [rsp+2D5h] [rbp+255h]
  char v137; // [rsp+2D6h] [rbp+256h]
  char v138; // [rsp+2D7h] [rbp+257h]
  __int64 v139; // [rsp+2D8h] [rbp+258h]

  v139 = -2;
  v13 = a8;
  sub_140D67510(&v95, a8, a9);
  v14 = v95;
  if ( (_QWORD)v95 != -1 )
  {
    v15 = *((_QWORD *)&v95 + 1);
    v16 = v96.m256i_i64[1];
    v17 = v96.m256i_i64[0];
    v91 = *(_OWORD *)&v96.m256i_u64[2];
    v92 = v97;
    v93 = v98;
    v94 = v99;
    goto LABEL_3;
  }
  if ( a7 )
  {
    sub_140D577F0((unsigned int)&v124, (_DWORD)a3, a4, a5, a6, 8, 0);
  }
  else
  {
    v114 = a3;
    sub_140D577F0((unsigned int)&v122, (_DWORD)a3, a4, a5, a6, 8, 0);
    v115 = a4 << 8;
    v128 = a4;
    v131 = (__int64)&a8[9 * a9];
    if ( a8 != (_QWORD *)v131 )
    {
      do
      {
        sub_1416DB410(&v129, v13);
        sub_1416DB410(v116, v13);
        sub_1416DB410(v126, v13 + 3);
        v96.m256i_i64[0] = v130;
        v95 = v129;
        v96.m256i_i64[3] = *(_QWORD *)&v116[16];
        *(_OWORD *)&v96.m256i_u64[1] = *(_OWORD *)v116;
        *(_QWORD *)&v97 = 0;
        *((_QWORD *)&v97 + 1) = 1;
        v98 = 0;
        v99 = 1u;
        v108 = 0x8000000000000000uLL;
        v101 = *(_QWORD *)&v126[16];
        v100 = *(_OWORD *)v126;
        v102 = 0;
        v103 = 8;
        v104 = 0;
        v105 = 1;
        v106 = 0;
        v112 = 0;
        v109 = -1;
        v110 = 0;
        v111 = 0;
        v107 = -1;
        v113 = 0;
        if ( a4 )
        {
          v43 = v13[1];
          v44 = v13[2];
          v45 = v115;
          v46 = v114;
          while ( *((_QWORD *)v46 + 2) != v44 || (unsigned int)sub_141923B40(*((_QWORD *)v46 + 1), v43, v44) )
          {
            v46 += 16;
            v45 -= 256;
            if ( !v45 )
            {
              v46 = nullptr;
              break;
            }
          }
          a4 = v128;
        }
        else
        {
          v46 = nullptr;
        }
        if ( !v46 )
          v46 = &v95;
        sub_140935420(v126, v46);
        *(_QWORD *)&v129 = *(_QWORD *)&v126[8];
        *((_QWORD *)&v129 + 1) = *(_QWORD *)&v126[8];
        *(_QWORD *)&v130 = *(_QWORD *)v126;
        *((_QWORD *)&v130 + 1) = *(_QWORD *)&v126[8] + 96LL * *(_QWORD *)&v126[16];
        sub_1401CFCB0(v126, &v129, v13);
        if ( *(_QWORD *)v126 == 2 )
        {
          sub_140935420(&v124, &v95);
          if ( !v125 )
          {
            v49 = 0;
LABEL_128:
            sub_14196B3AB(0, v49, &off_141A93B88);
          }
          v47 = *((_QWORD *)&v124 + 1);
          v48 = **((_QWORD **)&v124 + 1);
          *(_OWORD *)v126 = *(_OWORD *)(*((_QWORD *)&v124 + 1) + 8LL);
          *(_OWORD *)&v126[16] = *(_OWORD *)(*((_QWORD *)&v124 + 1) + 24LL);
          *(_OWORD *)&v126[32] = *(_OWORD *)(*((_QWORD *)&v124 + 1) + 40LL);
          *(_OWORD *)&v126[48] = *(_OWORD *)(*((_QWORD *)&v124 + 1) + 56LL);
          *(_OWORD *)&v126[64] = *(_OWORD *)(*((_QWORD *)&v124 + 1) + 72LL);
          *(_QWORD *)&v126[80] = *(_QWORD *)(*((_QWORD *)&v124 + 1) + 88LL);
          v49 = v125 - 1;
          sub_1419234B0(*((_QWORD *)&v124 + 1), *((_QWORD *)&v124 + 1) + 96LL, 96 * (v125 - 1));
          v125 = v49;
          if ( v48 == 2 )
            goto LABEL_128;
          *(_QWORD *)v116 = v48;
          v121 = *(_QWORD *)&v126[80];
          v120 = *(_OWORD *)&v126[64];
          v119 = *(_OWORD *)&v126[48];
          v118 = *(_OWORD *)&v126[32];
          v117 = *(_OWORD *)&v126[16];
          *(_OWORD *)&v116[8] = *(_OWORD *)v126;
          if ( v49 )
          {
            v50 = (_QWORD *)(v47 + 72);
            do
            {
              v51 = *(v50 - 7);
              if ( v51 )
                sub_140001660(*(v50 - 6), v51, 1);
              v52 = *(v50 - 1);
              if ( v52 > 0 )
                sub_140001660(*v50, v52, 1);
              v53 = *(v50 - 4);
              if ( v53 )
                sub_140001660(*(v50 - 3), v53, 1);
              v50 += 12;
              --v49;
            }
            while ( v49 );
          }
          if ( (_QWORD)v124 )
            sub_140001660(v47, 96 * v124, 8);
          a4 = v128;
        }
        else
        {
          v121 = v127;
          v120 = *(_OWORD *)&v126[72];
          v119 = *(_OWORD *)&v126[56];
          v118 = *(_OWORD *)&v126[40];
          v117 = *(_OWORD *)&v126[24];
          *(_OWORD *)&v116[8] = *(_OWORD *)&v126[8];
          *(_QWORD *)v116 = *(_QWORD *)v126;
        }
        sub_140233510(&v129);
        sub_140D58710((unsigned int)&v129, (_DWORD)v46, (unsigned int)v116, 0, 0);
        v56 = (_QWORD *)v131;
        v57 = v133;
        if ( v13[6] == -1 )
        {
          v58 = 0;
        }
        else
        {
          v9 = v13[8];
          if ( v9 < 0 )
          {
            v60 = 0;
LABEL_97:
            v138 = 1;
            sub_14196B2DB(v60, v9);
          }
          v58 = 3;
          if ( v9 )
          {
            v59 = v13[7];
            nullsub_1(v55, v54);
            v60 = 1;
            v61 = sub_140001650(v9, 1);
            if ( !v61 )
              goto LABEL_97;
            v62 = v59;
            v63 = v61;
            sub_1419234B0(v61, v62, v9);
            v57 = v63;
            v56 = (_QWORD *)v131;
          }
          else
          {
            v57 = 1;
            v9 = 0;
          }
        }
        v126[0] = v58;
        *(_QWORD *)&v126[8] = v9;
        v133 = v57;
        *(_QWORD *)&v126[16] = v57;
        *(_QWORD *)&v126[24] = v9;
        v136 = 1;
        v132 = sub_1416725D0(aSlug_2, 4, &v129);
        sub_140032FF0(v132);
        v64 = *(_OWORD *)v126;
        v65 = (_OWORD *)v132;
        *(_OWORD *)(v132 + 16) = *(_OWORD *)&v126[16];
        *v65 = v64;
        nullsub_1(v67, v66);
        v68 = (_DWORD *)sub_140001650(4, 1);
        if ( !v68 )
        {
          v138 = 1;
          sub_14196B2DB(1, 4);
        }
        *v68 = 1701079400;
        v126[0] = 3;
        *(_QWORD *)&v126[8] = 4;
        *(_QWORD *)&v126[16] = v68;
        *(_QWORD *)&v126[24] = 4;
        v135 = 1;
        v132 = sub_1416725D0(aVisibility, 10, &v129);
        sub_140032FF0(v132);
        v69 = *(_OWORD *)v126;
        v70 = (_OWORD *)v132;
        *(_OWORD *)(v132 + 16) = *(_OWORD *)&v126[16];
        *v70 = v69;
        v126[0] = 2;
        *(_QWORD *)&v126[8] = 0;
        *(_QWORD *)&v126[16] = 1000;
        v134 = 1;
        v132 = sub_1416725D0(aPriority_1, 8, &v129);
        sub_140032FF0(v132);
        v71 = *(_OWORD *)v126;
        v72 = (_OWORD *)v132;
        *(_OWORD *)(v132 + 16) = *(_OWORD *)&v126[16];
        *v72 = v71;
        *(_OWORD *)&v126[16] = v130;
        *(_OWORD *)v126 = v129;
        v73 = v123;
        if ( v123 == (_QWORD)v122 )
          sub_1419397B0(&v122);
        v74 = *((_QWORD *)&v122 + 1);
        v75 = 32 * v73;
        v76 = *(_OWORD *)v126;
        *(_OWORD *)(*((_QWORD *)&v122 + 1) + v75 + 16) = *(_OWORD *)&v126[16];
        *(_OWORD *)(v74 + v75) = v76;
        v123 = v73 + 1;
        if ( *(_QWORD *)&v116[16] )
          sub_140001660(v117, *(_QWORD *)&v116[16], 1);
        if ( *((_QWORD *)&v119 + 1) != -1 && *((_QWORD *)&v119 + 1) )
          sub_140001660(v120, *((_QWORD *)&v119 + 1), 1);
        if ( (_QWORD)v118 )
          sub_140001660(*((_QWORD *)&v118 + 1), v118, 1);
        v13 += 9;
        sub_140292FD0(&v95);
      }
      while ( v13 != v56 );
    }
    v125 = v123;
    v124 = v122;
  }
  *(_QWORD *)&v129 = 0;
  *(_QWORD *)&v130 = 0;
  nullsub_1(v21, v20);
  v22 = sub_140001650(6, 1);
  if ( !v22 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v22 + 4) = 29548;
  *(_DWORD *)v22 = 1701080941;
  *(_QWORD *)v116 = 6;
  *(_QWORD *)&v116[8] = v22;
  *(_QWORD *)&v116[16] = 6;
  v137 = 1;
  sub_1407B3D00(&v95, &v124);
  if ( (_BYTE)v95 == 0xFF )
  {
    *(_QWORD *)v126 = *((_QWORD *)&v95 + 1);
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_18,
      43,
      (unsigned int)v126,
      (unsigned int)&off_141A93F60,
      (__int64)&off_141A98160);
  }
  *(_OWORD *)&v126[16] = *(_OWORD *)v96.m256i_i8;
  *(_OWORD *)v126 = v95;
  v137 = 0;
  sub_140A68320(&v95, &v129, v116, v126);
  if ( (_BYTE)v95 != 0xFF )
    sub_140032FF0(&v95);
  nullsub_1(v24, v23);
  v25 = sub_140001650(17, 1);
  if ( !v25 )
    sub_14196B2DB(1, 17);
  *(_OWORD *)v25 = *(_OWORD *)aAimamiNoAccoun;
  *(_BYTE *)(v25 + 16) = 116;
  *(_QWORD *)v116 = 17;
  *(_QWORD *)&v116[8] = v25;
  *(_QWORD *)&v116[16] = 17;
  LOBYTE(v95) = 1;
  BYTE1(v95) = a7 ^ 1;
  sub_140A68320(v126, &v129, v116, &v95);
  if ( v126[0] != 0xFF )
    sub_140032FF0(v126);
  *(_OWORD *)&v126[8] = v129;
  *(_QWORD *)&v126[24] = v130;
  v126[0] = 5;
  nullsub_1(v27, v26);
  v28 = (_BYTE *)sub_140001650(128, 1);
  if ( !v28 )
    sub_14196B2DB(1, 128);
  *(_QWORD *)v116 = 128;
  *(_QWORD *)&v116[8] = v28;
  *(_QWORD *)&v95 = v116;
  *((_QWORD *)&v95 + 1) = asc_141A907A8;
  v96.m256i_i64[0] = 2;
  v30 = *(_QWORD *)&v126[24];
  v96.m256i_i64[1] = 1;
  v96.m256i_i8[16] = 0;
  *v28 = 123;
  *(_QWORD *)&v116[16] = 1;
  v31 = 1;
  if ( !v30 )
  {
    v96.m256i_i64[1] = 0;
    v28[1] = 125;
    *(_QWORD *)&v116[16] = 2;
    v31 = 0;
  }
  LOBYTE(v129) = 0;
  BYTE1(v129) = v31;
  *((_QWORD *)&v129 + 1) = &v95;
  v32 = *(_QWORD *)&v126[8];
  v33 = *(_QWORD *)&v126[16];
  v34 = *(_QWORD *)&v126[8] != 0;
  if ( !*(_QWORD *)&v126[8] )
    v30 = 0;
  v35 = 0;
  while ( v30-- != 0 )
  {
    if ( !v34 )
      sub_14196B5D0(&off_141A6D6E0);
    if ( v35 )
    {
      if ( v33 < *(unsigned __int16 *)(v35 + 626) )
        goto LABEL_24;
      goto LABEL_35;
    }
    if ( !v33 )
    {
      v35 = v32;
      goto LABEL_34;
    }
    v35 = v32;
    if ( (v33 & 7) == 0 )
    {
      v40 = v33;
      if ( v33 < 8 )
        goto LABEL_34;
      do
      {
LABEL_33:
        v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 632)
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v40 -= 8LL;
      }
      while ( v40 );
      goto LABEL_34;
    }
    v39 = 0;
    do
    {
      v35 = *(_QWORD *)(v35 + 632);
      ++v39;
    }
    while ( (v33 & 7) != v39 );
    v40 = v33 - v39;
    if ( v33 >= 8 )
      goto LABEL_33;
LABEL_34:
    v33 = 0;
    v32 = 0;
    if ( *(_WORD *)(v35 + 626) )
    {
LABEL_24:
      v37 = v35;
      v38 = v33;
      goto LABEL_37;
    }
    do
    {
LABEL_35:
      v37 = *(_QWORD *)(v35 + 352);
      if ( !v37 )
        sub_14196B5D0(&off_141A695C8);
      ++v32;
      v38 = *(unsigned __int16 *)(v35 + 624);
      v35 = *(_QWORD *)(v35 + 352);
    }
    while ( (unsigned __int16)v38 >= *(_WORD *)(v37 + 626) );
LABEL_37:
    if ( !v32 )
    {
      v33 = v38 + 1;
      v35 = v37;
      goto LABEL_45;
    }
    v41 = v37 + 8 * v38 + 640;
    if ( (v32 & 7) != 0 )
    {
      v42 = 0;
      do
      {
        v35 = *(_QWORD *)v41;
        v41 = *(_QWORD *)v41 + 632LL;
        ++v42;
      }
      while ( (v32 & 7) != v42 );
      v29 = v32 - v42;
      if ( v32 < 8 )
        goto LABEL_43;
      do
      {
LABEL_42:
        v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41 + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v41 = v35 + 632;
        v29 -= 8LL;
      }
      while ( v29 );
      goto LABEL_43;
    }
    v29 = v32;
    if ( v32 >= 8 )
      goto LABEL_42;
LABEL_43:
    v33 = 0;
LABEL_45:
    v17 = sub_140796610(&v129, v37 + 24 * v38 + 360, v37 + 32 * v38, v29);
    v34 = 1;
    v32 = 0;
    if ( v17 )
    {
      if ( *(_QWORD *)v116 )
        sub_140001660(*(_QWORD *)&v116[8], *(_QWORD *)v116, 1);
LABEL_114:
      *(_QWORD *)&v129 = v17;
      *(_QWORD *)v116 = &v129;
      *(_QWORD *)&v116[8] = sub_14166FAD0;
      sub_1416DAFA0(&v95, &unk_141A93A14, v116);
      v17 = *((_QWORD *)&v95 + 1);
      v15 = v95;
      v16 = v96.m256i_i64[0];
      sub_140032F30(&v129);
      v14 = 10;
      v84 = 0;
      goto LABEL_115;
    }
  }
  if ( (_BYTE)v129 == 1 )
    sub_14196B830(aInternalErrorE_10, 40, &off_141A99700);
  if ( BYTE1(v129) )
  {
    v77 = *((_QWORD *)&v129 + 1);
    v78 = **((_QWORD ***)&v129 + 1);
    v79 = *(_QWORD *)(*((_QWORD *)&v129 + 1) + 24LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v129 + 1) + 24LL) = v79;
    if ( *(_BYTE *)(v77 + 32) == 1 )
    {
      sub_1401E6F40(v78, "\n}falsetrue", 1);
      if ( v79 )
      {
        v80 = *(_QWORD *)(v77 + 8);
        v81 = *(_QWORD *)(v77 + 16);
        v82 = v78[2];
        for ( i = 0; i != v79; ++i )
        {
          if ( v81 > *v78 - v82 )
          {
            sub_141939070((_DWORD)v78, v82, v81, 1, 1);
            v82 = v78[2];
          }
          else if ( !v81 )
          {
            goto LABEL_104;
          }
          sub_1419234B0(v82 + v78[1], v80, v81);
LABEL_104:
          v82 += v81;
          v78[2] = v82;
        }
      }
    }
    sub_1401E6F40(v78, "}falsetrue", 1);
  }
  v17 = *(_QWORD *)&v116[8];
  v15 = *(_QWORD *)v116;
  if ( *(_QWORD *)v116 == -1 )
    goto LABEL_114;
  v16 = *(_QWORD *)&v116[16];
  v14 = -1;
  v84 = 1;
LABEL_115:
  sub_140032FF0(v126);
  v86 = *((_QWORD *)&v124 + 1);
  v131 = v125;
  v133 = 0;
  v128 = *((_QWORD *)&v124 + 1);
  while ( v131 != v133 )
  {
    ++v133;
    v87 = v86 + 32;
    sub_1401AB4D0(v86, v85);
    v86 = v87;
  }
  if ( (_QWORD)v124 )
    sub_140001660(*((_QWORD *)&v124 + 1), 32 * v124, 8);
  if ( v84 )
  {
    v133 = v15;
    v131 = v17;
    sub_140D65360(&v95);
    v88 = v95;
    v89 = *(_OWORD *)v96.m256i_i8;
    v90 = *(_OWORD *)&v96.m256i_u64[2];
    *(_OWORD *)(a1 + 56) = v97;
    *(_OWORD *)(a1 + 40) = v90;
    *(_OWORD *)(a1 + 24) = v89;
    *(_OWORD *)(a1 + 8) = v88;
    *(_QWORD *)(a1 + 72) = v133;
    *(_QWORD *)(a1 + 80) = v131;
    *(_QWORD *)(a1 + 88) = v16;
    *(_BYTE *)(a1 + 96) = a7;
    v18 = 0;
    goto LABEL_4;
  }
LABEL_3:
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = v15;
  *(_QWORD *)(a1 + 24) = v17;
  *(_QWORD *)(a1 + 32) = v16;
  *(_OWORD *)(a1 + 40) = v91;
  *(_OWORD *)(a1 + 56) = v92;
  *(_OWORD *)(a1 + 72) = v93;
  *(_OWORD *)(a1 + 88) = v94;
  v18 = 1;
LABEL_4:
  *(_QWORD *)a1 = v18;
  return a1;
}
