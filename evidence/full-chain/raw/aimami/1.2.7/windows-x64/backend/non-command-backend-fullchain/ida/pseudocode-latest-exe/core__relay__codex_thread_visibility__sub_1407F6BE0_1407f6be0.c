// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407f6be0 | successor of pre-update 0x14024f9e0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
_QWORD *__fastcall sub_1407F6BE0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rsi
  __int64 *v4; // rax
  __int64 *v5; // r14
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // r12
  _QWORD *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // kr70_16
  __int128 v22; // kr80_16
  __int64 v23; // rdi
  _QWORD *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 i; // rdi
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 j; // rdi
  __int64 v36; // rdi
  __int64 v37; // r13
  _QWORD *v38; // rdi
  __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  __int64 v41; // rdx
  _QWORD *v42; // rsi
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int64 v46; // rax
  unsigned __int64 v47; // rbx
  __int64 v48; // rdx
  _OWORD v50[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v51; // [rsp+90h] [rbp+10h]
  char v52; // [rsp+98h] [rbp+18h]
  _BYTE v53[7]; // [rsp+99h] [rbp+19h]
  __int128 v54; // [rsp+A0h] [rbp+20h]
  __int128 v55; // [rsp+B0h] [rbp+30h]
  __m256i v56; // [rsp+C0h] [rbp+40h]
  __int64 v57; // [rsp+E0h] [rbp+60h]
  _QWORD *v58; // [rsp+E8h] [rbp+68h]
  __int64 v59; // [rsp+F0h] [rbp+70h]
  __int64 v60; // [rsp+F8h] [rbp+78h]
  _QWORD v61[3]; // [rsp+100h] [rbp+80h] BYREF
  _QWORD v62[3]; // [rsp+118h] [rbp+98h] BYREF
  __int128 v63; // [rsp+130h] [rbp+B0h]
  __int64 v64; // [rsp+140h] [rbp+C0h]
  __int128 v65; // [rsp+150h] [rbp+D0h]
  __int64 v66; // [rsp+160h] [rbp+E0h]
  __int128 v67; // [rsp+170h] [rbp+F0h]
  __int128 v68; // [rsp+180h] [rbp+100h]
  __m256i v69; // [rsp+190h] [rbp+110h]
  _QWORD v70[3]; // [rsp+1B8h] [rbp+138h] BYREF
  __int128 v71; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v72; // [rsp+1E0h] [rbp+160h]
  __int64 v73; // [rsp+1E8h] [rbp+168h]
  __int64 v74; // [rsp+1F0h] [rbp+170h]
  __int64 v75; // [rsp+1F8h] [rbp+178h]
  _BYTE v76[48]; // [rsp+200h] [rbp+180h] BYREF
  __int128 v77; // [rsp+230h] [rbp+1B0h] BYREF
  __m256i v78; // [rsp+240h] [rbp+1C0h]
  __int64 v79; // [rsp+268h] [rbp+1E8h]
  __int64 v80; // [rsp+270h] [rbp+1F0h]
  __int128 v81; // [rsp+278h] [rbp+1F8h]
  __int64 v82; // [rsp+288h] [rbp+208h]
  __int64 v83; // [rsp+290h] [rbp+210h]
  __int64 v84; // [rsp+298h] [rbp+218h]
  __int128 v85; // [rsp+2A0h] [rbp+220h] BYREF
  __m256i v86; // [rsp+2B0h] [rbp+230h]
  __int64 v87; // [rsp+2D0h] [rbp+250h]
  __int64 v88; // [rsp+2D8h] [rbp+258h]
  __int64 v89; // [rsp+2E0h] [rbp+260h]
  __int64 v90; // [rsp+2E8h] [rbp+268h] BYREF
  __int64 v91; // [rsp+2F0h] [rbp+270h]
  __int64 v92; // [rsp+2F8h] [rbp+278h]
  __int128 v93; // [rsp+300h] [rbp+280h] BYREF
  __m256i v94; // [rsp+310h] [rbp+290h]
  __int128 v95; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v96; // [rsp+340h] [rbp+2C0h]
  __int64 v97; // [rsp+348h] [rbp+2C8h]
  __int64 v98; // [rsp+350h] [rbp+2D0h]
  __int16 v99; // [rsp+358h] [rbp+2D8h]
  __int64 v100; // [rsp+360h] [rbp+2E0h]
  __int64 v101; // [rsp+368h] [rbp+2E8h]
  __int64 v102; // [rsp+398h] [rbp+318h]
  __int64 v103; // [rsp+3A0h] [rbp+320h]
  __int64 v104; // [rsp+3A8h] [rbp+328h]
  __int64 v105; // [rsp+3B0h] [rbp+330h]
  _BYTE v106[24]; // [rsp+3B8h] [rbp+338h] BYREF
  _BYTE v107[72]; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v108; // [rsp+418h] [rbp+398h] BYREF
  __int64 v109; // [rsp+420h] [rbp+3A0h]
  __int64 v110; // [rsp+428h] [rbp+3A8h]
  _BYTE v111[104]; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v112; // [rsp+498h] [rbp+418h]
  __int64 v113; // [rsp+4A8h] [rbp+428h]
  __int64 v114; // [rsp+4B0h] [rbp+430h]
  __int64 v115; // [rsp+4E8h] [rbp+468h]
  __int128 v116; // [rsp+4F0h] [rbp+470h] BYREF
  __m256i v117; // [rsp+500h] [rbp+480h]
  __int128 v118; // [rsp+520h] [rbp+4A0h] BYREF
  __int128 v119; // [rsp+530h] [rbp+4B0h]
  __m256i v120; // [rsp+540h] [rbp+4C0h]
  __int64 v121; // [rsp+568h] [rbp+4E8h]
  __int64 v122; // [rsp+570h] [rbp+4F0h]
  __int64 v123; // [rsp+578h] [rbp+4F8h]
  __int64 v124; // [rsp+580h] [rbp+500h]
  __int64 v125; // [rsp+588h] [rbp+508h]
  __int64 v126; // [rsp+590h] [rbp+510h]

  v126 = -2;
  v88 = a1;
  v73 = a2;
  sub_140A2C460(v111, a2);
  v57 = *(_QWORD *)&v111[8];
  v81 = *(_OWORD *)v111;
  v59 = *(_QWORD *)v111;
  v87 = *(_QWORD *)&v111[8] + 32LL * *(_QWORD *)&v111[16];
  v60 = v87;
  v2 = 32LL * *(_QWORD *)&v111[16] - 32;
  v3 = (_QWORD *)(*(_QWORD *)&v111[8] + 40LL);
  v4 = *(__int64 **)&v111[8];
  v79 = 0;
  v80 = 0;
  while ( 1 )
  {
    if ( v4 == (__int64 *)v87 )
      goto LABEL_145;
    v5 = v4 + 4;
    v58 = v4 + 4;
    if ( *v4 == -1 )
      break;
    v104 = *v4;
    v6 = v4[2];
    v115 = v4[1];
    sub_1416C49D0(v111, v115, v6);
    if ( *(_DWORD *)v111 == 2 )
    {
      if ( (v111[8] & 3u) - 2 >= 2 && (v111[8] & 3) != 0 )
      {
        --*(_QWORD *)&v111[8];
        v111[0] = 3;
        sub_1416EBAD0(&v111[8]);
      }
      v7 = 0;
      v8 = 0;
      goto LABEL_29;
    }
    sub_1407D83C0((__int64)v111, v115, v6, 32770);
    if ( (_BYTE)v112 == 0xFF )
    {
      v95 = *(_OWORD *)&v111[48];
      v94 = *(__m256i *)&v111[16];
      v93 = *(_OWORD *)v111;
      *(_QWORD *)&v118 = &v93;
      *((_QWORD *)&v118 + 1) = sub_14142D4D0;
      sub_1416DAFA0(v107, &unk_141A4739E, &v118);
      v7 = *(_QWORD *)&v107[8];
      v8 = *(_QWORD *)v107;
      v125 = *(_QWORD *)&v107[16];
      sub_1407785F0(&v93);
      v15 = 10;
LABEL_151:
      v43 = v54;
      v44 = v55;
      v45 = *(_OWORD *)v56.m256i_i8;
      v46 = v88;
      *(_OWORD *)(v88 + 80) = *(_OWORD *)&v56.m256i_u64[2];
      *(_OWORD *)(v46 + 64) = v45;
      *(_OWORD *)(v46 + 48) = v44;
      *(_OWORD *)(v46 + 32) = v43;
      *(_QWORD *)v46 = v15;
      *(_QWORD *)(v46 + 8) = v8;
      *(_QWORD *)(v46 + 16) = v7;
      *(_QWORD *)(v46 + 24) = v125;
      if ( v104 )
        sub_140001660(v115, v104, 1);
      if ( (__int64 *)v87 != v5 )
      {
        v47 = v2 >> 5;
        do
        {
          v48 = *(v3 - 1);
          if ( v48 )
            sub_140001660(*v3, v48, 1);
          v3 += 4;
          --v47;
        }
        while ( v47 );
      }
      if ( (_QWORD)v81 )
        sub_140001660(*((_QWORD *)&v81 + 1), 32 * v81, 8);
      return (_QWORD *)v88;
    }
    v51 = *(_QWORD *)&v111[96];
    v50[5] = *(_OWORD *)&v111[80];
    v50[4] = *(_OWORD *)&v111[64];
    v50[3] = *(_OWORD *)&v111[48];
    v50[2] = *(_OWORD *)&v111[32];
    *(_DWORD *)&v53[3] = DWORD1(v112);
    *(_DWORD *)v53 = *(_DWORD *)((char *)&v112 + 1);
    v50[1] = *(_OWORD *)&v111[16];
    v50[0] = *(_OWORD *)v111;
    v52 = v112;
    sub_141431530(&v93, v50, aPragmaWalCheck, 28);
    if ( (_QWORD)v93 != -1 )
    {
      *(_OWORD *)&v111[48] = v95;
      *(__m256i *)&v111[16] = v94;
      *(_OWORD *)v111 = v93;
      *(_QWORD *)&v118 = v111;
      *((_QWORD *)&v118 + 1) = sub_14142D4D0;
      sub_1416DAFA0(v107, &unk_141A47BA8, &v118);
      v7 = *(_QWORD *)&v107[8];
      v8 = *(_QWORD *)v107;
      v125 = *(_QWORD *)&v107[16];
      sub_1407785F0(v111);
LABEL_27:
      v15 = 10;
LABEL_28:
      sub_140777BC0(v50);
      if ( v15 == -1 )
        goto LABEL_29;
      goto LABEL_151;
    }
    sub_1407C4200(v111, v50, aSelectDistinct, 125);
    if ( *(_DWORD *)v111 == 1 )
    {
      v95 = *(_OWORD *)&v111[56];
      v94 = *(__m256i *)&v111[24];
      v93 = *(_OWORD *)&v111[8];
      *(_QWORD *)&v118 = &v93;
      *((_QWORD *)&v118 + 1) = sub_14142D4D0;
      sub_1416DAFA0(&v116, &unk_141A4AEE8, &v118);
      v7 = *((_QWORD *)&v116 + 1);
      v8 = v116;
      v125 = v117.m256i_i64[0];
      sub_1407785F0(&v93);
      goto LABEL_27;
    }
    *(_OWORD *)&v107[48] = *(_OWORD *)&v111[56];
    *(_OWORD *)&v107[32] = *(_OWORD *)&v111[40];
    *(_OWORD *)&v107[16] = *(_OWORD *)&v111[24];
    *(_OWORD *)v107 = *(_OWORD *)&v111[8];
    v9 = sub_1417D8600(*(_QWORD *)&v111[64]);
    if ( v9 )
    {
      *(_OWORD *)v111 = 0x8000000000000013uLL;
      *(_QWORD *)&v111[16] = v9;
      *(_QWORD *)&v118 = v111;
      *((_QWORD *)&v118 + 1) = sub_14142D4D0;
      sub_1416DAFA0(&v93, &unk_141A476E2, &v118);
      v7 = *((_QWORD *)&v93 + 1);
      v8 = v93;
      v125 = v94.m256i_i64[0];
      sub_1407785F0(v111);
LABEL_26:
      sub_140778780(v107);
      goto LABEL_27;
    }
    *(_QWORD *)v111 = -1;
    *(_QWORD *)&v118 = v111;
    *((_QWORD *)&v118 + 1) = v107;
    *(_QWORD *)&v119 = 0;
    sub_140200450(&v85, &v118);
    v10 = *(_QWORD *)v111;
    if ( *(_QWORD *)v111 != -1 )
    {
      v125 = *(_QWORD *)&v111[8];
      v89 = *(_QWORD *)&v111[24];
      v105 = *(_QWORD *)&v111[16];
      v93 = *(_OWORD *)&v111[32];
      *(_OWORD *)v94.m256i_i8 = *(_OWORD *)&v111[48];
      v11 = *((_QWORD *)&v85 + 1);
      v12 = v86.m256i_i64[0];
      if ( v86.m256i_i64[0] )
      {
        v13 = (_QWORD *)(*((_QWORD *)&v85 + 1) + 8LL);
        do
        {
          v14 = *(v13 - 1);
          if ( v14 )
            sub_140001660(*v13, v14, 1);
          v13 += 3;
          --v12;
        }
        while ( v12 );
      }
      if ( (_QWORD)v85 )
        sub_140001660(v11, 24 * v85, 8);
      *(_OWORD *)&v111[48] = *(_OWORD *)v94.m256i_i8;
      *(_OWORD *)&v111[32] = v93;
      *(_QWORD *)v111 = v10;
      *(_QWORD *)&v111[8] = v125;
      *(_QWORD *)&v111[16] = v105;
      *(_QWORD *)&v111[24] = v89;
      *(_QWORD *)&v85 = v111;
      *((_QWORD *)&v85 + 1) = sub_14142D4D0;
      sub_1416DAFA0(&v118, &unk_141A476C8, &v85);
      v7 = *((_QWORD *)&v118 + 1);
      v8 = v118;
      v125 = v119;
      sub_1407785F0(v111);
      goto LABEL_26;
    }
    *(_QWORD *)v111 = *((_QWORD *)&v85 + 1);
    *(_QWORD *)&v111[8] = *((_QWORD *)&v85 + 1);
    *(_QWORD *)&v111[16] = v85;
    *(_QWORD *)&v111[24] = *((_QWORD *)&v85 + 1) + 24 * v86.m256i_i64[0];
    sub_140228280(&v93, v111);
    v7 = *((_QWORD *)&v93 + 1);
    v16 = v93;
    v17 = v94.m256i_i64[0];
    sub_140778780(v107);
    v74 = v16;
    v70[0] = v16;
    v70[1] = v7;
    v70[2] = v17;
    v108 = 0;
    v109 = 8;
    v110 = 0;
    v75 = v17;
    v8 = v7 + 32 * v17;
    v89 = v8;
    v82 = v7;
    v105 = v7;
    while ( v105 != v89 )
    {
      v18 = *(_QWORD *)(v105 + 8);
      v123 = *(_QWORD *)(v105 + 16);
      sub_140A934F0(v111, v18, v123);
      if ( *(_QWORD *)&v111[32] == -1 )
      {
        v8 = *(_QWORD *)v111;
        v29 = 2;
        goto LABEL_106;
      }
      v105 += 32;
      if ( *(_DWORD *)&v111[32] == 2 || !*(_QWORD *)v111 )
      {
        if ( *(_DWORD *)&v111[32] != 2 )
          goto LABEL_38;
      }
      else
      {
        sub_140001660(*(_QWORD *)&v111[8], *(_QWORD *)v111, 1);
LABEL_38:
        sub_1407DB070((__int64)v111, v18, v123);
        v19 = *(_QWORD *)v111;
        if ( *(_QWORD *)v111 == -1 )
          goto LABEL_94;
        if ( *(_QWORD *)v111 == -2 )
        {
          v124 = *(_QWORD *)&v111[8];
          v7 = *(_QWORD *)&v111[24];
          v8 = *(_QWORD *)&v111[16];
          v125 = *(_QWORD *)&v111[32];
          v118 = *(_OWORD *)&v111[40];
          v119 = *(_OWORD *)&v111[56];
          v120 = *(__m256i *)&v111[72];
LABEL_100:
          v29 = v124;
LABEL_106:
          v124 = v29;
          v69 = v120;
          v68 = v119;
          v67 = v118;
          v54 = v118;
          v55 = v119;
          v56 = v120;
          v32 = v110;
          if ( !v110 )
          {
LABEL_126:
            if ( v108 )
              sub_140001660(v109, 176 * v108, 8);
            v37 = v75;
            if ( v75 )
            {
              v38 = (_QWORD *)(v82 + 8);
              do
              {
                v39 = *(v38 - 1);
                if ( v39 )
                  sub_140001660(*v38, v39, 1);
                v38 += 4;
                --v37;
              }
              while ( v37 );
            }
            if ( v74 )
              sub_140001660(v82, 32 * v74, 8);
            v15 = v124;
            goto LABEL_28;
          }
LABEL_124:
          v36 = v109;
          do
          {
            sub_1401B1470(v36);
            v36 += 176;
            --v32;
          }
          while ( v32 );
          goto LABEL_126;
        }
        sub_1419234B0(&v93, v111, 144);
        sub_1407DABD0(v111, &v93, v18, v123);
        v116 = *(_OWORD *)&v111[32];
        v117 = *(__m256i *)&v111[48];
        v122 = *(_QWORD *)&v111[24];
        if ( *(_QWORD *)v111 != -1 )
        {
          v124 = *(_QWORD *)v111;
          v7 = *(_QWORD *)&v111[16];
          *(_OWORD *)&v120.m256i_u64[2] = *(_OWORD *)&v111[80];
          v118 = v116;
          v119 = *(_OWORD *)v117.m256i_i8;
          *(_OWORD *)v120.m256i_i8 = *(_OWORD *)&v117.m256i_u64[2];
          v123 = -2;
          v8 = *(_QWORD *)&v111[8];
LABEL_86:
          if ( (_QWORD)v93 )
            sub_140001660(*((_QWORD *)&v93 + 1), v93, 1);
          if ( (_QWORD)v95 )
            sub_140001660(*((_QWORD *)&v95 + 1), v95, 1);
          if ( v100 != -1 && v100 )
            sub_140001660(v101, v100, 1);
          v125 = v122;
          v19 = v123;
LABEL_94:
          if ( v19 == -2 )
            goto LABEL_100;
          goto LABEL_95;
        }
        v83 = *(_QWORD *)&v111[8];
        *(_QWORD *)v107 = *(_QWORD *)&v111[8];
        v84 = *(_QWORD *)&v111[16];
        *(_OWORD *)&v107[8] = *(_OWORD *)&v111[16];
        *(__m256i *)&v107[40] = v117;
        *(_OWORD *)&v107[24] = v116;
        nullsub_1(*(_QWORD *)&v111[24], -1);
        v20 = sub_140001650(144, 8);
        if ( !v20 )
          sub_14196B2DB(8, 144);
        v90 = 2;
        v91 = v20;
        v92 = 0;
        *(_QWORD *)v76 = -1;
        *(_QWORD *)&v77 = -1;
        if ( v83 != -1 && (unsigned __int8)sub_1407E30A0(v84, v122) )
        {
          sub_1407EC440(v111, *((__int64 *)&v93 + 1), v94.m256i_i64[0], (__int64)aOpenai_1, 6);
          v21 = *(_OWORD *)v111;
          v22 = *(_OWORD *)&v111[16];
          if ( *(_QWORD *)v111 != -1 )
            goto LABEL_52;
          *(_QWORD *)v106 = *(_QWORD *)&v111[8];
          *(_OWORD *)&v106[8] = *(_OWORD *)&v111[16];
          v121 = *(_QWORD *)&v111[8];
          v103 = *(_QWORD *)&v111[8];
          sub_1416DB410(&v116, &v93);
          *(_OWORD *)&v117.m256i_u64[1] = *(_OWORD *)&v94.m256i_u64[1];
          v117.m256i_i16[12] = v94.m256i_i16[12];
          sub_1416DB410(&v71, v106);
          *(__m256i *)&v111[16] = v117;
          *(_OWORD *)v111 = v116;
          *(_QWORD *)&v111[64] = v72;
          *(_OWORD *)&v111[48] = v71;
          v103 = v121;
          sub_1407C59A0(&v90);
          v103 = v121;
          sub_1416DB410(&v116, &v93);
          *(_QWORD *)&v111[40] = *(_QWORD *)&v106[16];
          *(_OWORD *)&v111[24] = *(_OWORD *)v106;
          *(_QWORD *)&v111[16] = v117.m256i_i64[0];
          *(_OWORD *)&v117.m256i_u64[2] = *(_OWORD *)&v111[32];
          v117.m256i_i64[1] = *(_QWORD *)v106;
          sub_1400261D0(v76);
          *(__m256i *)&v76[16] = v117;
          *(_OWORD *)v76 = v116;
        }
        v122 = v97;
        if ( v97 != v94.m256i_i64[1]
          && *(_QWORD *)&v107[24] != -1
          && (unsigned __int8)sub_1407E30A0(*(_QWORD *)&v107[32], *(_QWORD *)&v107[40]) )
        {
          sub_1407EC440(v111, *((__int64 *)&v95 + 1), v96, (__int64)aOpenai_1, 6);
          v21 = *(_OWORD *)v111;
          v22 = *(_OWORD *)&v111[16];
          if ( *(_QWORD *)v111 != -1 )
          {
LABEL_52:
            v125 = v22;
            v124 = v21;
            v122 = *((_QWORD *)&v22 + 1);
            v120 = *(__m256i *)&v111[64];
            v119 = *(_OWORD *)&v111[48];
            v118 = *(_OWORD *)&v111[32];
            v123 = -2;
            v8 = *((_QWORD *)&v21 + 1);
LABEL_58:
            if ( (_QWORD)v77 != -1 )
            {
              if ( (_QWORD)v77 )
                sub_140001660(*((_QWORD *)&v77 + 1), v77, 1);
              if ( v78.m256i_i64[1] )
                sub_140001660(v78.m256i_i64[2], v78.m256i_i64[1], 1);
            }
            if ( *(_QWORD *)v76 != -1 )
            {
              if ( *(_QWORD *)v76 )
                sub_140001660(*(_QWORD *)&v76[8], *(_QWORD *)v76, 1);
              if ( *(_QWORD *)&v76[24] )
                sub_140001660(*(_QWORD *)&v76[32], *(_QWORD *)&v76[24], 1);
            }
            v23 = v92;
            if ( v92 )
            {
              v24 = (_QWORD *)(v91 + 56);
              do
              {
                v25 = *(v24 - 7);
                if ( v25 )
                  sub_140001660(*(v24 - 6), v25, 1);
                v26 = *(v24 - 1);
                if ( v26 )
                  sub_140001660(*v24, v26, 1);
                v24 += 9;
                --v23;
              }
              while ( v23 );
            }
            if ( v90 )
              sub_140001660(v91, 72 * v90, 8);
            if ( (unsigned __int64)(v83 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v84, v83, 1);
            if ( *(_QWORD *)&v107[24] != -1 && *(_QWORD *)&v107[24] )
              sub_140001660(*(_QWORD *)&v107[32], *(_QWORD *)&v107[24], 1);
            if ( *(_QWORD *)&v107[48] != -1 && *(_QWORD *)&v107[48] )
              sub_140001660(*(_QWORD *)&v107[56], *(_QWORD *)&v107[48], 1);
            v7 = v125;
            goto LABEL_86;
          }
          *(_QWORD *)v106 = *(_QWORD *)&v111[8];
          *(_OWORD *)&v106[8] = *(_OWORD *)&v111[16];
          v121 = *(_QWORD *)&v111[8];
          v102 = *(_QWORD *)&v111[8];
          sub_1416DB410(&v116, &v95);
          v117.m256i_i64[1] = v122;
          v117.m256i_i64[2] = v98;
          v117.m256i_i16[12] = v99;
          sub_1416DB410(&v71, v106);
          *(__m256i *)&v111[16] = v117;
          *(_OWORD *)v111 = v116;
          *(_QWORD *)&v111[64] = v72;
          *(_OWORD *)&v111[48] = v71;
          v102 = v121;
          sub_1407C59A0(&v90);
          v102 = v121;
          sub_1416DB410(v111, &v95);
          v86.m256i_i64[3] = *(_QWORD *)&v106[16];
          *(_OWORD *)&v86.m256i_u64[1] = *(_OWORD *)v106;
          v85 = *(_OWORD *)v111;
          v86.m256i_i64[0] = *(_QWORD *)&v111[16];
          sub_1400261D0(&v77);
          v78 = v86;
          v77 = v85;
        }
        if ( !v92 )
        {
          v123 = -1;
          v122 = v125;
          v125 = v7;
          goto LABEL_58;
        }
        sub_1408111D0((unsigned int)v111, v18, v123, v91, v92, 0);
        if ( *(_QWORD *)v111 != -1 )
        {
          v8 = *(_QWORD *)&v111[8];
          v124 = *(_QWORD *)v111;
          v122 = *(_QWORD *)&v111[24];
          v125 = *(_QWORD *)&v111[16];
          v118 = *(_OWORD *)&v111[32];
          v119 = *(_OWORD *)&v111[48];
          v120 = *(__m256i *)&v111[64];
          v123 = -2;
          goto LABEL_58;
        }
        sub_1416B0D00(v111, v18, v123);
        v125 = *(_QWORD *)v76;
        v118 = *(_OWORD *)&v76[8];
        v119 = *(_OWORD *)&v76[24];
        v120.m256i_i64[0] = *(_QWORD *)&v76[40];
        v124 = *(_QWORD *)&v111[8];
        v28 = *(_QWORD *)v111;
        v7 = *(_QWORD *)&v111[24];
        v8 = *(_QWORD *)&v111[16];
        v120.m256i_i64[3] = v78.m256i_i64[0];
        *(_OWORD *)&v120.m256i_u64[1] = v77;
        v65 = *(_OWORD *)&v78.m256i_u64[1];
        v66 = v78.m256i_i64[3];
        sub_1407773C0(&v90);
        sub_1407792E0(v107);
        sub_140779430(&v93);
        v19 = v28;
        if ( v28 == -2 )
          goto LABEL_100;
LABEL_95:
        v69 = v120;
        v68 = v119;
        v67 = v118;
        v63 = v65;
        v64 = v66;
        if ( v19 != -1 )
        {
          *(_QWORD *)v111 = v19;
          *(_QWORD *)&v111[8] = v124;
          *(_QWORD *)&v111[16] = v8;
          *(_QWORD *)&v111[24] = v7;
          *(_QWORD *)&v111[32] = v125;
          *(__m256i *)&v111[72] = v69;
          *(_OWORD *)&v111[56] = v68;
          *(_OWORD *)&v111[40] = v67;
          v113 = v64;
          v112 = v63;
          v114 = -1;
          v27 = v110;
          if ( v110 == v108 )
            sub_14193A230(&v108);
          sub_1419234B0(v109 + 176 * v27, v111, 176);
          v110 = v27 + 1;
        }
      }
    }
    *(_QWORD *)&v116 = aAimai1_1;
    *((_QWORD *)&v116 + 1) = 6;
    *(_QWORD *)v107 = &off_141A4A618;
    *(_QWORD *)&v107[8] = &unk_141A454D8;
    *(_QWORD *)&v107[16] = &v116;
    *(_QWORD *)&v107[24] = &unk_141A454D8;
    *(_QWORD *)&v107[32] = &off_141A4AC18;
    *(_QWORD *)&v107[40] = &unk_141A454D8;
    sub_140772660((unsigned int)&v93, (unsigned int)v50, (unsigned int)aUpdateThreadsS_2, 146, (__int64)v107, 3);
    if ( (_QWORD)v93 != -1 )
    {
      *(_OWORD *)&v111[48] = v95;
      *(__m256i *)&v111[16] = v94;
      *(_OWORD *)v111 = v93;
      v30 = v109;
      for ( i = v109 + 176 * v110; v30 != i; sub_1407EEEA0(i) )
        i -= 176;
      *(_QWORD *)&v118 = v111;
      *((_QWORD *)&v118 + 1) = sub_14142D4D0;
      sub_1416DAFA0(v62, &unk_141A4C627, &v118);
      v8 = v62[0];
      v7 = v62[1];
      v125 = v62[2];
      sub_1407785F0(v111);
      goto LABEL_123;
    }
    v8 = *((_QWORD *)&v93 + 1);
    sub_141431530(v111, v50, aPragmaWalCheck_0, 32);
    if ( *(_QWORD *)v111 != -1 )
      sub_1407785F0(v111);
    *(_QWORD *)&v85 = aAimai1_1;
    *((_QWORD *)&v85 + 1) = 6;
    *(_QWORD *)&v118 = &v85;
    *((_QWORD *)&v118 + 1) = &unk_141A454D8;
    *(_QWORD *)&v119 = &off_141A4AC18;
    *((_QWORD *)&v119 + 1) = &unk_141A454D8;
    v120.m256i_i64[0] = (__int64)&off_141A4A618;
    v120.m256i_i64[1] = (__int64)&unk_141A454D8;
    sub_1407C4200(v111, v50, aSelectCountFro_2, 136);
    v93 = *(_OWORD *)&v111[8];
    v94 = *(__m256i *)&v111[24];
    v95 = *(_OWORD *)&v111[56];
    if ( *(_DWORD *)v111 == 1 )
    {
      *(_OWORD *)&v107[48] = v95;
      *(__m256i *)&v107[16] = v94;
      *(_OWORD *)v107 = v93;
    }
    else
    {
      *(_OWORD *)&v111[48] = v95;
      *(__m256i *)&v111[16] = v94;
      *(_OWORD *)v111 = v93;
      sub_1409013A0(v107, v111, &v118, 3);
      sub_140778780(v111);
    }
    v33 = *(_QWORD *)&v107[8];
    if ( *(_QWORD *)v107 != -1 )
    {
      *(_OWORD *)&v111[48] = *(_OWORD *)&v107[48];
      *(_OWORD *)&v111[32] = *(_OWORD *)&v107[32];
      *(_OWORD *)&v111[16] = *(_OWORD *)&v107[16];
      *(_OWORD *)v111 = *(_OWORD *)v107;
      *(_QWORD *)v107 = v111;
      *(_QWORD *)&v107[8] = sub_14142D4D0;
      sub_1416DAFA0(&v93, &unk_141A476FA, v107);
      v7 = *((_QWORD *)&v93 + 1);
      v8 = v93;
      v125 = v94.m256i_i64[0];
      sub_1407785F0(v111);
      goto LABEL_123;
    }
    if ( *(__int64 *)&v107[8] <= 0 )
      v33 = 0;
    *(_QWORD *)&v77 = v33;
    if ( *(__int64 *)&v107[8] > 0 )
    {
      v34 = v109;
      for ( j = v109 + 176 * v110; v34 != j; sub_1407EEEA0(j) )
        j -= 176;
      *(_QWORD *)&v93 = v115;
      *((_QWORD *)&v93 + 1) = v6;
      *(_QWORD *)v111 = &v93;
      *(_QWORD *)&v111[8] = sub_1416CE600;
      *(_QWORD *)&v111[16] = &v77;
      *(_QWORD *)&v111[24] = sub_1416EBAE0;
      sub_1416DAFA0(v61, &unk_141A4C5DA, v111);
      v8 = v61[0];
      v7 = v61[1];
      v125 = v61[2];
LABEL_123:
      v124 = 10;
      v32 = v110;
      if ( !v110 )
        goto LABEL_126;
      goto LABEL_124;
    }
    v7 = v110;
    *(_QWORD *)&v118 = v8;
    *((_QWORD *)&v118 + 1) = v110;
    if ( v8 | v110 && *(_QWORD *)off_14223FF10 >= 3u )
    {
      *(_QWORD *)v107 = v115;
      *(_QWORD *)&v107[8] = v6;
      *(_QWORD *)v111 = v107;
      *(_QWORD *)&v111[8] = sub_1416CE600;
      *(_QWORD *)&v111[16] = &v118;
      *(_QWORD *)&v111[24] = sub_1416EBAE0;
      *(_QWORD *)&v111[32] = (char *)&v118 + 8;
      *(_QWORD *)&v111[40] = sub_1416EBAE0;
      *(_QWORD *)&v93 = aCodexmateLibCo_11;
      *((_QWORD *)&v93 + 1) = 51;
      v94.m256i_i64[0] = (__int64)aCodexmateLibCo_11;
      v94.m256i_i64[1] = 51;
      v94.m256i_i64[2] = (__int64)&off_141A4C5B0;
      sub_140AF72B0(&unk_141A4C55B, v111, 3, &v93);
      v7 = *((_QWORD *)&v118 + 1);
      v8 = v118;
    }
    sub_140777180(&v108);
    sub_1400293E0(v70);
    sub_140777BC0(v50);
LABEL_29:
    if ( v104 )
      sub_140001660(v115, v104, 1);
    v79 += v7;
    v80 += v8;
    v2 -= 32LL;
    v3 += 4;
    v4 = v5;
  }
  if ( (__int64 *)v87 != v5 )
  {
    v40 = v2 >> 5;
    do
    {
      v41 = *(v3 - 1);
      if ( v41 )
        sub_140001660(*v3, v41, 1);
      v3 += 4;
      --v40;
    }
    while ( v40 );
  }
LABEL_145:
  if ( (_QWORD)v81 )
    sub_140001660(*((_QWORD *)&v81 + 1), 32 * v81, 8);
  *(_QWORD *)&v93 = sub_1407E63D0(v73);
  v42 = (_QWORD *)v88;
  if ( (_QWORD)v93 )
  {
    *(_QWORD *)v111 = &v93;
    *(_QWORD *)&v111[8] = sub_1416EBAE0;
    sub_1416DAFA0(v88 + 8, &unk_141A4BDEF, v111);
    *v42 = 10;
  }
  else
  {
    *(_QWORD *)(v88 + 8) = v80;
    v42[2] = v79;
    *v42 = -1;
  }
  return v42;
}
