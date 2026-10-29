// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f296a0 | name sub_140F296A0
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F296A0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int128 v7; // kr00_16
  __int64 v8; // r8
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __m128i *v27; // rax
  __m128i *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  const __m128i *v33; // rdi
  _BYTE *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdi
  unsigned __int128 v48; // kr30_16
  __int64 v49; // r14
  _QWORD *v50; // r12
  __int64 v51; // rcx
  __m128i **v52; // rax
  __m128i *v53; // rbx
  __int64 v54; // r13
  __m128i *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // rdi
  __int64 v59; // rbx
  _QWORD *v60; // r12
  __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  const __m128i *v63; // r13
  unsigned __int64 v64; // rbx
  __int64 v65; // r12
  __int64 v66; // rdi
  __int64 v67; // rdi
  unsigned __int128 v68; // rax
  bool v69; // zf
  __int64 v70; // r14
  _QWORD *v71; // rbx
  __int64 v72; // r15
  __int64 v73; // rdi
  _QWORD *v74; // r12
  __int64 v75; // rdx
  __m128i *v76; // r15
  __int64 v77; // rdi
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rbx
  _QWORD *v83; // r14
  __int64 v84; // rdx
  __m128i *v85; // rax
  __m128i *v86; // rbx
  unsigned __int64 v87; // rdx
  __m128i *v88; // r14
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rdi
  __int128 v96; // xmm0
  _BYTE v97[104]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v98[9]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v99; // [rsp+150h] [rbp+D0h] BYREF
  unsigned __int128 v100; // [rsp+158h] [rbp+D8h] BYREF
  _BYTE v101[80]; // [rsp+168h] [rbp+E8h]
  __m128i v102[9]; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v103; // [rsp+248h] [rbp+1C8h]
  unsigned __int128 v104; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v105; // [rsp+260h] [rbp+1E0h]
  __int128 v106; // [rsp+270h] [rbp+1F0h]
  __int128 v107; // [rsp+280h] [rbp+200h]
  __int128 v108; // [rsp+290h] [rbp+210h]
  __int128 v109; // [rsp+2A0h] [rbp+220h]
  __m128i v110; // [rsp+2B0h] [rbp+230h] BYREF
  unsigned __int64 v111; // [rsp+2C0h] [rbp+240h]
  __int64 v112; // [rsp+2C8h] [rbp+248h]
  _QWORD *v113; // [rsp+2D0h] [rbp+250h]
  _QWORD *v114; // [rsp+2D8h] [rbp+258h]
  __int64 v115; // [rsp+2E0h] [rbp+260h]
  __int64 v116; // [rsp+2E8h] [rbp+268h]
  _BYTE v117[48]; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v118; // [rsp+320h] [rbp+2A0h]
  __int128 v119; // [rsp+330h] [rbp+2B0h]
  __int128 v120; // [rsp+340h] [rbp+2C0h]
  unsigned __int128 v121; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v122; // [rsp+360h] [rbp+2E0h]
  __int128 v123; // [rsp+370h] [rbp+2F0h]
  __int128 v124; // [rsp+380h] [rbp+300h]
  __int128 v125; // [rsp+390h] [rbp+310h]
  __int128 v126; // [rsp+3A0h] [rbp+320h]
  __int64 v127; // [rsp+3B8h] [rbp+338h] BYREF
  __m128i *v128; // [rsp+3C0h] [rbp+340h]
  __int64 v129; // [rsp+3C8h] [rbp+348h]
  __int64 v130; // [rsp+3D0h] [rbp+350h]
  __m128i *v131; // [rsp+3D8h] [rbp+358h]
  __int64 v132; // [rsp+3E0h] [rbp+360h]
  char v133; // [rsp+3EFh] [rbp+36Fh]
  __int64 v134; // [rsp+3F0h] [rbp+370h]

  v134 = -2;
  v4 = a2[9];
  v5 = a2[10];
  sub_140F08630(&v99, v4, v5);
  result = v99;
  v7 = v100;
  v8 = *(_QWORD *)v101;
  if ( v99 != -1 )
  {
    v9 = *(_OWORD *)&v101[8];
    v10 = *(_OWORD *)&v101[24];
    v11 = *(_OWORD *)&v101[40];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v101[56];
    *(_OWORD *)(a1 + 64) = v11;
    *(_OWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 24) = v8;
    *(_QWORD *)a1 = result;
    return result;
  }
  v112 = v4;
  v115 = v5;
  v116 = *((_QWORD *)&v100 + 1);
  v130 = v100;
  sub_140C6F5E0(&v110, *((__int64 *)&v100 + 1), *(__int64 *)v101);
  v12 = v110.m128i_i64[1];
  v13 = v111;
  sub_1411D2A40(v97);
  v14 = *(_QWORD *)v97;
  v121 = *(_OWORD *)&v97[8];
  v122 = *(_OWORD *)&v97[24];
  v123 = *(_OWORD *)&v97[40];
  v124 = *(_OWORD *)&v97[56];
  v125 = *(_OWORD *)&v97[72];
  v126 = *(_OWORD *)&v97[88];
  if ( *(_QWORD *)v97 == 2 )
  {
    v106 = v123;
    v107 = v124;
    v108 = v125;
    *(_OWORD *)v117 = v121;
    *(_OWORD *)&v117[16] = v122;
    *(_OWORD *)&v117[32] = v123;
    v118 = v124;
    v119 = v125;
    v120 = v126;
    if ( (_QWORD)v121 == 2 )
      goto LABEL_23;
  }
  else
  {
    sub_1418F44E0(v102, v98, 0x90u);
    v104 = v121;
    v99 = v14;
    v100 = v121;
    *(_OWORD *)v101 = v122;
    *(_OWORD *)&v101[16] = v123;
    *(_OWORD *)&v101[32] = v124;
    *(_OWORD *)&v101[48] = v125;
    *(_OWORD *)&v101[64] = v126;
    sub_1401ABC50((__m128i *)v97, (__int64)&v99);
    if ( *(_DWORD *)v97 == 2 )
    {
      *(_OWORD *)&v117[24] = *(_OWORD *)&v97[24];
      *(_OWORD *)&v117[8] = *(_OWORD *)&v97[8];
      *(_QWORD *)v117 = 2;
      goto LABEL_23;
    }
    v120 = *(_OWORD *)&v97[80];
    v119 = *(_OWORD *)&v97[64];
    v118 = *(_OWORD *)&v97[48];
    *(_OWORD *)&v117[32] = *(_OWORD *)&v97[32];
    *(_OWORD *)&v117[16] = *(_OWORD *)&v97[16];
    *(_OWORD *)v117 = *(_OWORD *)v97;
    if ( *(_QWORD *)v97 == 2 )
    {
LABEL_23:
      sub_140194020(&v117[8]);
      result = sub_140222E10(v112, v115, v12, v13);
      v24 = v130;
      if ( (result & 1) != 0 )
      {
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v25;
      }
      else
      {
        sub_1401BD710(v25, v25);
        nullsub_1(v26);
        result = sub_140001650(48, 1);
        v24 = v130;
        if ( !result )
          sub_141938D2B(1, 48);
        *(_OWORD *)(result + 32) = xmmword_141A5ECE4;
        *(_OWORD *)(result + 16) = xmmword_141A5ECD4;
        *(_OWORD *)result = xmmword_141A5ECC4;
        *(_QWORD *)(a1 + 8) = 48;
        *(_QWORD *)(a1 + 16) = result;
        *(_QWORD *)(a1 + 24) = 48;
        *(_QWORD *)a1 = -1;
      }
      goto LABEL_27;
    }
  }
  if ( *(_QWORD *)&v117[24] )
    sub_140001660(*(_QWORD *)&v117[32], *(_QWORD *)&v117[24], 1);
  if ( *((_QWORD *)&v119 + 1) != -1 && *((_QWORD *)&v119 + 1) )
    sub_140001660(v120, *((_QWORD *)&v119 + 1), 1);
  v15 = *((_QWORD *)&v118 + 1);
  v16 = v119;
  if ( (_QWORD)v119 )
  {
    v17 = (_QWORD *)(*((_QWORD *)&v118 + 1) + 8LL);
    do
    {
      v18 = *(v17 - 1);
      if ( v18 )
        sub_140001660(*v17, v18, 1);
      v17 += 3;
      --v16;
    }
    while ( v16 );
  }
  if ( (_QWORD)v118 )
    sub_140001660(v15, 24 * v118, 8);
  sub_140F0BC00((__int64)&v99, a2);
  result = v99;
  v20 = *((_QWORD *)&v100 + 1);
  v19 = v100;
  if ( v99 == -1 )
  {
    if ( (unsigned __int64)(v100 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v100 + 1), v100, 1);
    nullsub_1(v20);
    v132 = 1;
    v27 = (__m128i *)sub_140001650(226, 1);
    if ( !v27 )
      sub_141938D2B(1, 226);
    v28 = v27;
    sub_1418F44E0(v27, (const __m128i *)aRebuiltByAimam, 0xE2u);
    v127 = 226;
    v128 = v28;
    v129 = 226;
    *(_QWORD *)&v104 = 0;
    *((_QWORD *)&v104 + 1) = 8;
    *(_QWORD *)&v105 = 0;
    *(_QWORD *)&v121 = 0;
    *((_QWORD *)&v121 + 1) = 1;
    *(_QWORD *)&v122 = 0;
    v117[0] = 2;
    v99 = 0;
    *(_QWORD *)&v100 = v13;
    *((_QWORD *)&v100 + 1) = v12;
    *(_OWORD *)v101 = v13;
    *(_QWORD *)&v101[16] = v13;
    *(_QWORD *)&v101[24] = 0xA0000000ALL;
    v101[32] = 1;
    *(_WORD *)&v101[40] = 0;
    v29 = 0;
    while ( 1 )
    {
      v30 = *((_QWORD *)&v100 + 1);
      v133 = 1;
      sub_140F9C6A0(v97, (char *)&v100 + 8);
      if ( *(_DWORD *)v97 == 1 )
        break;
      if ( v101[41] )
        goto LABEL_65;
      v101[41] = 1;
      v32 = v100 - v99;
      if ( (v101[40] | ((_QWORD)v100 != v99)) != 1 )
        goto LABEL_65;
      v33 = (const __m128i *)(*((_QWORD *)&v100 + 1) + v99);
      if ( v32 )
        goto LABEL_42;
LABEL_48:
      v34 = (_BYTE *)sub_140E91160(v33, v32);
      v36 = v35;
      if ( ((unsigned __int8)sub_1402B5F80(v117, v33, v32) & (v35 != 0)) == 1 && *v34 == 91 && v34[v36 - 1] == 93 )
      {
        if ( v36 == 1 || (char)v34[1] <= -65 )
        {
          v133 = 1;
          sub_141938F40((_DWORD)v34, v36, 1, v36 - 1, (__int64)&off_1419E98C8);
        }
        sub_140E91160(v132, v29);
        if ( v37 )
        {
          v131 = (__m128i *)v121;
          *(_QWORD *)&v121 = 0;
          *((_QWORD *)&v121 + 1) = 1;
          *(_QWORD *)&v122 = 0;
          v38 = v105;
          if ( (_QWORD)v105 == (_QWORD)v104 )
            sub_14190FDC0(&v104);
          v39 = *((_QWORD *)&v104 + 1);
          v40 = 3 * v38;
          *(_QWORD *)(*((_QWORD *)&v104 + 1) + 8 * v40) = v131;
          *(_QWORD *)(v39 + 8 * v40 + 8) = v132;
          *(_QWORD *)(v39 + 8 * v40 + 16) = v29;
          *(_QWORD *)&v105 = v38 + 1;
          v132 = 1;
          v29 = 0;
        }
      }
      v41 = v121;
      if ( v32 > (__int64)v121 - v29 )
      {
        v133 = 1;
        sub_14190D590((unsigned int)&v121, v29, v32, 1, 1);
        v132 = *((_QWORD *)&v121 + 1);
        v29 = v122;
LABEL_59:
        sub_1418F44E0((__m128i *)(v29 + v132), v33, v32);
        v41 = v121;
        goto LABEL_60;
      }
      if ( v32 )
        goto LABEL_59;
LABEL_60:
      v42 = v32 + v29;
      *(_QWORD *)&v122 = v42;
      if ( v41 == v42 )
      {
        v133 = 1;
        sub_14190D590((unsigned int)&v121, v41, 1, 1, 1);
      }
      v132 = *((_QWORD *)&v121 + 1);
      *(_BYTE *)(*((_QWORD *)&v121 + 1) + v42) = 10;
      v29 = v42 + 1;
      *(_QWORD *)&v122 = v29;
      if ( (v101[41] & 1) != 0 )
      {
LABEL_65:
        sub_140E91160(v132, v29);
        if ( v43 )
        {
          v131 = (__m128i *)v121;
          v44 = v105;
          if ( (_QWORD)v105 == (_QWORD)v104 )
            sub_14190FDC0(&v104);
          v45 = *((_QWORD *)&v104 + 1);
          v46 = 3 * v44;
          *(_QWORD *)(*((_QWORD *)&v104 + 1) + 8 * v46) = v131;
          *(_QWORD *)(v45 + 8 * v46 + 8) = v132;
          *(_QWORD *)(v45 + 8 * v46 + 16) = v29;
          v47 = v44 + 1;
          v48 = v104;
        }
        else
        {
          v47 = v105;
          v48 = v104;
          if ( (_QWORD)v121 )
            sub_140001660(v132, v121, 1);
        }
        v49 = *((_QWORD *)&v48 + 1) + 24 * v47;
        v113 = (_QWORD *)(v48 >> 64);
        v103 = v48;
        v50 = *((_QWORD **)&v48 + 1);
        if ( !v47 )
        {
LABEL_105:
          v68 = 0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(v49 - (_QWORD)v50);
          v69 = v49 == (_QWORD)v50;
          v70 = v115;
          v71 = v113;
          v72 = v103;
          if ( !v69 )
          {
            v73 = *((_QWORD *)&v68 + 1) >> 4;
            v74 = v50 + 1;
            do
            {
              v75 = *(v74 - 1);
              if ( v75 )
                sub_140001660(*v74, v75, 1);
              v74 += 3;
              --v73;
            }
            while ( v73 );
          }
          if ( v72 )
            sub_140001660(v71, 24 * v72, 8);
          v76 = v128;
          v77 = v129;
          sub_1411D2A40(v97);
          v79 = *(_QWORD *)v97;
          v121 = *(_OWORD *)&v97[8];
          v122 = *(_OWORD *)&v97[24];
          v123 = *(_OWORD *)&v97[40];
          v124 = *(_OWORD *)&v97[56];
          v125 = *(_OWORD *)&v97[72];
          v126 = *(_OWORD *)&v97[88];
          if ( *(_QWORD *)v97 == 2 )
          {
            v106 = v123;
            v107 = v124;
            v108 = v125;
            *(_OWORD *)v117 = v121;
            *(_OWORD *)&v117[16] = v122;
            *(_OWORD *)&v117[32] = v123;
            v118 = v124;
            v119 = v125;
            v120 = v126;
          }
          else
          {
            sub_1418F44E0(v102, v98, 0x90u);
            v104 = v121;
            v99 = v79;
            v100 = v121;
            *(_OWORD *)v101 = v122;
            *(_OWORD *)&v101[16] = v123;
            *(_OWORD *)&v101[32] = v124;
            *(_OWORD *)&v101[48] = v125;
            *(_OWORD *)&v101[64] = v126;
            sub_1401ABC50((__m128i *)v97, (__int64)&v99);
            if ( *(_DWORD *)v97 == 2 )
            {
              *(_OWORD *)&v117[24] = *(_OWORD *)&v97[24];
              *(_OWORD *)&v117[8] = *(_OWORD *)&v97[8];
              *(_QWORD *)v117 = 2;
            }
            else
            {
              v120 = *(_OWORD *)&v97[80];
              v119 = *(_OWORD *)&v97[64];
              v118 = *(_OWORD *)&v97[48];
              *(_OWORD *)&v117[32] = *(_OWORD *)&v97[32];
              *(_OWORD *)&v117[16] = *(_OWORD *)&v97[16];
              *(_OWORD *)v117 = *(_OWORD *)v97;
            }
          }
          if ( *(_QWORD *)v117 == 2 )
          {
            sub_140194020(&v117[8]);
            v80 = v127;
          }
          else
          {
            if ( *(_QWORD *)&v117[24] )
              sub_140001660(*(_QWORD *)&v117[32], *(_QWORD *)&v117[24], 1);
            if ( *((_QWORD *)&v119 + 1) != -1 && *((_QWORD *)&v119 + 1) )
              sub_140001660(v120, *((_QWORD *)&v119 + 1), 1);
            v81 = *((_QWORD *)&v118 + 1);
            v82 = v119;
            if ( (_QWORD)v119 )
            {
              v83 = (_QWORD *)(*((_QWORD *)&v118 + 1) + 8LL);
              do
              {
                v84 = *(v83 - 1);
                if ( v84 )
                  sub_140001660(*v83, v84, 1);
                v83 += 3;
                --v82;
              }
              while ( v82 );
            }
            if ( (_QWORD)v118 )
              sub_140001660(v81, 24 * v118, 8);
            nullsub_1(v78);
            v77 = 226;
            v85 = (__m128i *)sub_140001650(226, 1);
            v70 = v115;
            if ( !v85 )
              sub_141938D2B(1, 226);
            v86 = v85;
            sub_1418F44E0(v85, (const __m128i *)aRebuiltByAimam, 0xE2u);
            if ( v127 )
              sub_140001660(v76, v127, 1);
            v76 = v86;
            v80 = 226;
          }
          v132 = v80;
          v131 = v76;
          result = sub_140222E10(v112, v70, v76, v77);
          v24 = v130;
          if ( (result & 1) != 0 )
          {
            *(_QWORD *)a1 = 2;
            *(_QWORD *)(a1 + 8) = v87;
            if ( v132 )
              result = sub_140001660(v131, v132, 1);
          }
          else
          {
            sub_1401BD710(v87, v87);
            v88 = v131;
            v89 = sub_140E91160(v131, v77);
            v91 = v90;
            v92 = sub_140E91160(aRebuiltByAimam, 226);
            if ( v91 == v94 && !(unsigned int)sub_1418F4B70(v89, v92) )
            {
              nullsub_1(v93);
              v95 = 75;
              result = sub_140001650(75, 1);
              v24 = v130;
              if ( !result )
                sub_141938D2B(1, 75);
              *(_OWORD *)(result + 59) = *(__int128 *)((char *)&xmmword_141A5ED91 + 11);
              *(_OWORD *)(result + 48) = xmmword_141A5ED91;
              *(_OWORD *)(result + 32) = xmmword_141A5ED81;
              *(_OWORD *)(result + 16) = xmmword_141A5ED71;
              v96 = xmmword_141A5ED61;
            }
            else
            {
              nullsub_1(v93);
              v95 = 109;
              result = sub_140001650(109, 1);
              v24 = v130;
              if ( !result )
                sub_141938D2B(1, 109);
              *(_OWORD *)(result + 93) = *(__int128 *)((char *)&xmmword_141A5ED44 + 13);
              *(_OWORD *)(result + 80) = xmmword_141A5ED44;
              *(_OWORD *)(result + 64) = xmmword_141A5ED34;
              *(_OWORD *)(result + 48) = xmmword_141A5ED24;
              *(_OWORD *)(result + 32) = xmmword_141A5ED14;
              *(_OWORD *)(result + 16) = xmmword_141A5ED04;
              v96 = xmmword_141A5ECF4;
            }
            *(_OWORD *)result = v96;
            *(_QWORD *)(a1 + 8) = v95;
            *(_QWORD *)(a1 + 16) = result;
            *(_QWORD *)(a1 + 24) = v95;
            *(_QWORD *)a1 = -1;
            if ( v132 )
              result = sub_140001660(v88, v132, 1);
          }
          goto LABEL_27;
        }
        v50 = v113;
        while ( 2 )
        {
          v52 = (__m128i **)v50;
          v50 += 3;
          v53 = *v52;
          if ( *v52 == (__m128i *)-1LL )
            goto LABEL_105;
          v54 = (__int64)v52[1];
          v55 = v52[2];
          sub_140E91160(v54, v55);
          if ( !v56 )
          {
            v51 = v54;
            if ( !v53 )
              goto LABEL_75;
            goto LABEL_74;
          }
          v131 = v53;
          v114 = v50;
          v132 = v54;
          sub_1411D2A40(v97);
          v57 = *(_QWORD *)v97;
          v121 = *(_OWORD *)&v97[8];
          v122 = *(_OWORD *)&v97[24];
          v123 = *(_OWORD *)&v97[40];
          v124 = *(_OWORD *)&v97[56];
          v125 = *(_OWORD *)&v97[72];
          v126 = *(_OWORD *)&v97[88];
          if ( *(_QWORD *)v97 == 2 )
          {
            v106 = v123;
            v107 = v124;
            v108 = v125;
            *(_OWORD *)v117 = v121;
            *(_OWORD *)&v117[16] = v122;
            *(_OWORD *)&v117[32] = v123;
            v118 = v124;
            v119 = v125;
            v120 = v126;
            if ( (_QWORD)v121 == 2 )
              goto LABEL_96;
LABEL_83:
            if ( *(_QWORD *)&v117[24] )
              sub_140001660(*(_QWORD *)&v117[32], *(_QWORD *)&v117[24], 1);
            if ( *((_QWORD *)&v119 + 1) != -1 && *((_QWORD *)&v119 + 1) )
              sub_140001660(v120, *((_QWORD *)&v119 + 1), 1);
            v58 = *((_QWORD *)&v118 + 1);
            v59 = v119;
            if ( (_QWORD)v119 )
            {
              v60 = (_QWORD *)(*((_QWORD *)&v118 + 1) + 8LL);
              do
              {
                v61 = *(v60 - 1);
                if ( v61 )
                  sub_140001660(*v60, v61, 1);
                v60 += 3;
                --v59;
              }
              while ( v59 );
            }
            if ( (_QWORD)v118 )
              sub_140001660(v58, 24 * v118, 8);
LABEL_102:
            v50 = v114;
            v53 = v131;
            v51 = v132;
            if ( !v131 )
            {
LABEL_75:
              if ( v50 == (_QWORD *)v49 )
                goto LABEL_105;
              continue;
            }
LABEL_74:
            sub_140001660(v51, v53, 1);
            goto LABEL_75;
          }
          break;
        }
        sub_1418F44E0(v102, v98, 0x90u);
        v104 = v121;
        v109 = v126;
        v108 = v125;
        v107 = v124;
        v106 = v123;
        v105 = v122;
        v99 = v57;
        *(_OWORD *)&v101[64] = v126;
        *(_OWORD *)&v101[48] = v125;
        *(_OWORD *)&v101[32] = v124;
        *(_OWORD *)&v101[16] = v123;
        *(_OWORD *)v101 = v122;
        v100 = v121;
        sub_1401ABC50((__m128i *)v97, (__int64)&v99);
        if ( *(_DWORD *)v97 == 2 )
        {
          *(_OWORD *)&v117[24] = *(_OWORD *)&v97[24];
          *(_OWORD *)&v117[8] = *(_OWORD *)&v97[8];
          *(_QWORD *)v117 = 2;
          goto LABEL_96;
        }
        v120 = *(_OWORD *)&v97[80];
        v119 = *(_OWORD *)&v97[64];
        v118 = *(_OWORD *)&v97[48];
        *(_OWORD *)&v117[32] = *(_OWORD *)&v97[32];
        *(_OWORD *)&v117[16] = *(_OWORD *)&v97[16];
        *(_OWORD *)v117 = *(_OWORD *)v97;
        if ( *(_QWORD *)v97 != 2 )
          goto LABEL_83;
LABEL_96:
        sub_140194020(&v117[8]);
        v63 = (const __m128i *)sub_140E91540(v132, v55);
        v64 = v62;
        v65 = v127;
        v66 = v129;
        if ( v62 > v127 - v129 )
        {
          sub_14190D590((unsigned int)&v127, v129, v62, 1, 1);
          v65 = v127;
          v66 = v129;
LABEL_98:
          sub_1418F44E0((__m128i *)((char *)v128 + v66), v63, v64);
        }
        else if ( v62 )
        {
          goto LABEL_98;
        }
        v67 = v64 + v66;
        v129 = v67;
        if ( (unsigned __int64)(v65 - v67) <= 1 )
        {
          sub_14190D590((unsigned int)&v127, v67, 2, 1, 1);
          v67 = v129;
        }
        *(__int16 *)((char *)v128->m128i_i16 + v67) = 2570;
        v129 = v67 + 2;
        goto LABEL_102;
      }
    }
    v31 = v99;
    v99 = *(_QWORD *)&v97[16];
    v32 = *(_QWORD *)&v97[16] - v31;
    v33 = (const __m128i *)(v31 + v30);
    if ( *(_QWORD *)&v97[16] == v31 )
      goto LABEL_48;
LABEL_42:
    if ( v33->m128i_i8[v32 - 1] == 10 )
    {
      if ( v32 == 1 )
      {
        v32 = 0;
      }
      else if ( v33->m128i_i8[v32 - 2] == 13 )
      {
        v32 -= 2LL;
      }
      else
      {
        --v32;
      }
    }
    goto LABEL_48;
  }
  v21 = *(_OWORD *)&v101[16];
  v22 = *(_OWORD *)&v101[32];
  v23 = *(_OWORD *)&v101[48];
  *(_OWORD *)v97 = *(_OWORD *)v101;
  *(_QWORD *)(a1 + 88) = *(_QWORD *)&v101[64];
  *(_OWORD *)(a1 + 72) = v23;
  *(_OWORD *)(a1 + 56) = v22;
  *(_OWORD *)(a1 + 40) = v21;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 16) = v20;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)v97;
  *(_QWORD *)a1 = result;
  v24 = v130;
LABEL_27:
  if ( v110.m128i_i64[0] )
    result = sub_140001660(v110.m128i_i64[1], v110.m128i_i64[0], 1);
  if ( v24 )
    return sub_140001660(v116, v24, 1);
  return result;
}
