// module: codexmate_lib/core/sessions
// addr: 0x1407514d0
// name: migrate_session_worktree_0
// win 1.2.1 | module src/core/sessions.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::sessions::migrate_session_worktree | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall migrate_session_worktree_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int128 v9; // kr00_16
  __int64 v10; // rax
  __int64 v11; // r13
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r14
  _QWORD *v19; // r12
  __int64 v20; // rdi
  __int128 v21; // xmm6
  __int128 v22; // xmm7
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r13
  __int64 v39; // rax
  unsigned __int8 v40; // bl
  unsigned __int64 v41; // rsi
  __int64 v42; // r14
  _OWORD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int128 v47; // kr30_16
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int64 v51; // r12
  __int64 v52; // rdx
  __int128 v53; // kr50_16
  __int64 v54; // rdx
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm2
  __int64 v58; // rdi
  __int128 v59; // xmm0
  char v60; // al
  __int64 v61; // rcx
  __int128 v62; // xmm1
  __int128 v63; // xmm2
  __int128 v64; // xmm3
  __int128 v65; // xmm4
  __int128 v66; // xmm5
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // rax
  char v70; // bl
  __int64 v71; // rdx
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm2
  char v75; // si
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  __int64 v79; // rcx
  __int64 v80; // rcx
  _OWORD v81[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v82; // [rsp+80h] [rbp+0h] BYREF
  __int64 v83; // [rsp+90h] [rbp+10h]
  __int128 v84; // [rsp+98h] [rbp+18h] BYREF
  __int64 v85; // [rsp+A8h] [rbp+28h]
  _OWORD v86[4]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v87; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v88; // [rsp+100h] [rbp+80h]
  __int64 v89; // [rsp+108h] [rbp+88h]
  __int64 v90; // [rsp+118h] [rbp+98h] BYREF
  __int64 v91; // [rsp+120h] [rbp+A0h]
  __int64 v92; // [rsp+128h] [rbp+A8h]
  __int64 v93; // [rsp+138h] [rbp+B8h]
  __m256i v94; // [rsp+140h] [rbp+C0h]
  __int128 v95; // [rsp+160h] [rbp+E0h]
  __int128 v96; // [rsp+170h] [rbp+F0h]
  __int128 v97; // [rsp+180h] [rbp+100h]
  __int128 v98; // [rsp+190h] [rbp+110h]
  char v99[8]; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v100; // [rsp+1A8h] [rbp+128h]
  __int64 v101; // [rsp+1B0h] [rbp+130h]
  __int64 v102; // [rsp+1C0h] [rbp+140h]
  __int64 v103; // [rsp+1C8h] [rbp+148h]
  __int64 v104; // [rsp+1D8h] [rbp+158h]
  __int64 v105; // [rsp+1E0h] [rbp+160h]
  __int64 v106; // [rsp+1F0h] [rbp+170h]
  __int64 v107; // [rsp+1F8h] [rbp+178h]
  __int64 v108; // [rsp+208h] [rbp+188h]
  __int64 v109; // [rsp+210h] [rbp+190h]
  __int64 v110; // [rsp+220h] [rbp+1A0h]
  unsigned __int64 v111; // [rsp+228h] [rbp+1A8h]
  __int64 v112; // [rsp+230h] [rbp+1B0h]
  unsigned __int64 v113; // [rsp+238h] [rbp+1B8h]
  __int64 v114; // [rsp+240h] [rbp+1C0h]
  __int64 v115; // [rsp+248h] [rbp+1C8h]
  __int64 v116; // [rsp+250h] [rbp+1D0h]
  __int128 v117; // [rsp+258h] [rbp+1D8h]
  char v118; // [rsp+269h] [rbp+1E9h]
  __int64 v119; // [rsp+280h] [rbp+200h]
  __int64 v120; // [rsp+288h] [rbp+208h]
  __int128 v121; // [rsp+290h] [rbp+210h]
  __int64 v122; // [rsp+2A0h] [rbp+220h]
  __int128 v123; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v124; // [rsp+2C0h] [rbp+240h]
  __int128 v125; // [rsp+2D0h] [rbp+250h]
  __int128 v126; // [rsp+2E0h] [rbp+260h]
  __int128 v127; // [rsp+2F0h] [rbp+270h]
  __int128 v128; // [rsp+300h] [rbp+280h]
  __int64 v129; // [rsp+310h] [rbp+290h]
  unsigned __int8 v130; // [rsp+318h] [rbp+298h]
  _DWORD v131[3]; // [rsp+319h] [rbp+299h]
  _BYTE v132[96]; // [rsp+328h] [rbp+2A8h] BYREF
  __int64 v133; // [rsp+388h] [rbp+308h]
  unsigned __int8 v134; // [rsp+390h] [rbp+310h]
  _DWORD v135[55]; // [rsp+391h] [rbp+311h]
  __int64 v136; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v137; // [rsp+478h] [rbp+3F8h]
  __int64 v138; // [rsp+480h] [rbp+400h]
  unsigned __int64 v139; // [rsp+490h] [rbp+410h]
  __int64 v140; // [rsp+498h] [rbp+418h]
  _BYTE v141[96]; // [rsp+4A0h] [rbp+420h] BYREF
  __int64 v142; // [rsp+500h] [rbp+480h]
  __int64 v143; // [rsp+510h] [rbp+490h]
  __int64 v144; // [rsp+518h] [rbp+498h]
  __int64 v145; // [rsp+520h] [rbp+4A0h]
  __int64 v146; // [rsp+528h] [rbp+4A8h]
  __int64 v147; // [rsp+530h] [rbp+4B0h]
  __int64 v148; // [rsp+538h] [rbp+4B8h]
  __int64 v149; // [rsp+540h] [rbp+4C0h]
  __int64 v150; // [rsp+548h] [rbp+4C8h]
  unsigned __int64 v151; // [rsp+550h] [rbp+4D0h]
  __int64 v152; // [rsp+558h] [rbp+4D8h]
  __int64 v153; // [rsp+560h] [rbp+4E0h]
  __int64 v154; // [rsp+568h] [rbp+4E8h]
  __int64 v155; // [rsp+570h] [rbp+4F0h]
  __int64 v156; // [rsp+578h] [rbp+4F8h]
  unsigned __int64 v157; // [rsp+580h] [rbp+500h]
  __int64 v158; // [rsp+588h] [rbp+508h]
  char v159; // [rsp+590h] [rbp+510h]
  char v160; // [rsp+591h] [rbp+511h]
  char v161; // [rsp+592h] [rbp+512h]
  char v162; // [rsp+593h] [rbp+513h]
  char v163; // [rsp+594h] [rbp+514h]
  char v164; // [rsp+595h] [rbp+515h]
  char v165; // [rsp+596h] [rbp+516h]
  char v166; // [rsp+597h] [rbp+517h]
  __int64 v167; // [rsp+598h] [rbp+518h]

  v167 = -2;
  v149 = sub_14033BC10(a3, a4);
  if ( !v6 )
  {
    nullsub_1(v7);
    v15 = sub_140001650(22, 1);
    if ( !v15 )
      sub_1416C2D4B(1, 22);
    *(_OWORD *)v15 = xmmword_14178AE0F;
    *(_QWORD *)(v15 + 14) = 0xBAA9E7BAB8E4BD83uLL;
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 22;
    *(_QWORD *)(a1 + 24) = v15;
    *(_QWORD *)(a1 + 32) = 22;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v8 = v6;
  load_sessions_0(v132, a2);
  v9 = *(_OWORD *)v132;
  v10 = *(_QWORD *)&v132[24];
  v11 = *(_QWORD *)&v132[16];
  if ( *(_QWORD *)v132 != -1 )
  {
    v12 = *(_OWORD *)&v132[32];
    v13 = *(_OWORD *)&v132[48];
    v14 = *(_OWORD *)&v132[64];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v132[80];
    *(_OWORD *)(a1 + 72) = v14;
    *(_OWORD *)(a1 + 56) = v13;
    *(_OWORD *)(a1 + 40) = v12;
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)(a1 + 32) = v10;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v16 = 328LL * *(_QWORD *)&v132[24];
  v17 = 328LL * *(_QWORD *)&v132[24] + *(_QWORD *)&v132[16];
  *(_QWORD *)&v123 = *(_QWORD *)&v132[16];
  v155 = *(_QWORD *)&v132[8];
  *(_QWORD *)&v124 = *(_QWORD *)&v132[8];
  *((_QWORD *)&v123 + 1) = *(_QWORD *)&v132[16];
  *((_QWORD *)&v124 + 1) = v17;
  v18 = *(_QWORD *)&v132[16];
  v153 = *(_QWORD *)&v132[16];
  if ( *(_QWORD *)&v132[24] )
  {
    v158 = a1;
    v19 = (_QWORD *)(*(_QWORD *)&v132[16] + 328LL);
    v157 = v16 - 328;
    while ( 1 )
    {
      sub_141684120(v132, v11, 328);
      *((_QWORD *)&v123 + 1) = v11 + 328;
      v156 = v11 + 328;
      if ( *(_QWORD *)&v132[32] != v8 || (unsigned int)sub_1416847B0(*(_QWORD *)&v132[24], v149, v8) )
      {
        sub_1402C5ED0(v132);
      }
      else
      {
        v20 = *(_QWORD *)v132;
        if ( *(_QWORD *)v132 != 2 )
        {
          v21 = *(_OWORD *)(v11 + 8);
          v22 = *(_OWORD *)(v11 + 24);
          v23 = *(_OWORD *)(v11 + 40);
          v24 = *(_OWORD *)(v11 + 56);
          v25 = *(_OWORD *)(v11 + 72);
          v98 = *(_OWORD *)(v11 + 88);
          v97 = v25;
          v96 = v24;
          v95 = v23;
          sub_141684120(v99, v11 + 104, 224);
          v93 = v20;
          *(_OWORD *)v94.m256i_i8 = v21;
          *(_OWORD *)&v94.m256i_u64[2] = v22;
          v26 = 0x8F9C18F9C18F9C19uLL * ((unsigned __int64)(v17 - v156) >> 3);
          v151 = v26;
          v139 = v157 / 0x148;
          v154 = 0;
          while ( 1 )
          {
            v119 = v154;
            if ( v139 == v154 )
              break;
            ++v154;
            sub_1402C5ED0(v19);
            v19 += 41;
          }
          if ( v155 )
            sub_140001660(v153, 328 * v155, 8);
          if ( v110 == -1 )
          {
            nullsub_1(v26);
            v43 = (_OWORD *)sub_140001650(59, 1);
            if ( !v43 )
            {
              v164 = 1;
              sub_1416C2D4B(1, 59);
            }
            *(_OWORD *)((char *)v43 + 43) = *(__int128 *)((char *)&xmmword_14178890B + 11);
            v43[2] = xmmword_14178890B;
            v43[1] = xmmword_1417888FB;
            *v43 = xmmword_1417888EB;
            a1 = v158;
            *(_QWORD *)(v158 + 8) = 10;
            *(_QWORD *)(a1 + 16) = 59;
            *(_QWORD *)(a1 + 24) = v43;
            *(_QWORD *)(a1 + 32) = 59;
            *(_QWORD *)a1 = -1;
            goto LABEL_75;
          }
          v151 = v111;
          v153 = v114;
          v156 = v116;
          v143 = v117;
          LOBYTE(v155) = v118;
          v157 = v113;
          v154 = v110;
          if ( (v118 & 1) == 0 )
          {
            if ( v116 == -1 )
            {
              v161 = 1;
              sub_14070FF10(v132);
            }
            else
            {
              *(_QWORD *)v132 = v116;
              *(_OWORD *)&v132[8] = v117;
            }
            a1 = v158;
            *(_QWORD *)(v158 + 32) = *(_QWORD *)&v132[16];
            *(_OWORD *)(a1 + 16) = *(_OWORD *)v132;
            *(_QWORD *)(a1 + 8) = 10;
            *(_QWORD *)a1 = -1;
            v40 = v155;
            v41 = v157;
            v42 = v154;
            goto LABEL_69;
          }
          v34 = v112;
          v35 = v115;
          v36 = *(_QWORD *)(a2 + 456);
          v37 = *(_QWORD *)(a2 + 464);
          v161 = 1;
          sub_141473FA0((unsigned int)&v90, v36, v37, (unsigned int)aSessionMigrati, 25);
          v132[0] = 1;
          v38 = v92;
          v160 = 1;
          v147 = v91;
          v39 = sub_14147B9A0(v132, v91, v92);
          if ( v39 )
          {
            a1 = v158;
            *(_QWORD *)(v158 + 8) = 2;
            *(_QWORD *)(a1 + 16) = v39;
            *(_QWORD *)a1 = -1;
            v40 = v155;
            v41 = v157;
            v42 = v154;
            goto LABEL_67;
          }
          v160 = 1;
          sub_1407142A0(&v87, a2);
          v140 = v35;
          v44 = v89;
          v166 = 1;
          v148 = v88;
          sub_141486710(v132, v88, v89);
          if ( *(_DWORD *)v132 != 2 )
          {
            v166 = 1;
            sub_1416992F0((unsigned int)v132, v148, v44, v147, v38, v149, v8);
            v45 = *(_QWORD *)&v132[8];
            v46 = *(_QWORD *)v132;
            v47 = *(_OWORD *)&v132[16];
            if ( *(_QWORD *)v132 == -1 )
            {
              v120 = *(_QWORD *)&v132[24];
              v144 = *(_QWORD *)&v132[16];
              goto LABEL_42;
            }
            v48 = *(_OWORD *)&v132[32];
            v49 = *(_OWORD *)&v132[48];
            v50 = *(_OWORD *)&v132[64];
            a1 = v158;
            *(_OWORD *)(v158 + 88) = *(_OWORD *)&v132[80];
            *(_OWORD *)(a1 + 72) = v50;
            *(_OWORD *)(a1 + 56) = v49;
            *(_OWORD *)(a1 + 40) = v48;
            *(_QWORD *)(a1 + 16) = v45;
            *(_OWORD *)(a1 + 24) = v47;
            *(_QWORD *)(a1 + 8) = v46;
            *(_QWORD *)a1 = -1;
            v40 = v155;
            v41 = v157;
            v42 = v154;
            goto LABEL_65;
          }
          v166 = 1;
          sub_1401DD260(*(_QWORD *)&v132[8]);
          v45 = -1;
LABEL_42:
          v145 = v45;
          if ( *((_QWORD *)&v96 + 1) == -1
            || (v51 = *((_QWORD *)&v97 + 1), a2 = v97, v163 = 1, sub_14033BC10(v97, *((_QWORD *)&v97 + 1)), !v52) )
          {
            *(_QWORD *)&v123 = -1;
          }
          else
          {
            v163 = 1;
            sub_14149BB70(v132, a2, v51);
            v124 = *(_OWORD *)&v132[16];
            v123 = *(_OWORD *)v132;
          }
          v163 = 1;
          sub_1406BF2F0(&v136, &v123);
          v152 = v136;
          if ( v136 == -1 )
          {
            v150 = -1;
          }
          else
          {
            v159 = 1;
            sub_141699CF0((unsigned int)v132, v137, v138, v147, v38, v149, v8);
            v53 = *(_OWORD *)v132;
            a2 = *(_QWORD *)&v132[24];
            v54 = *(_QWORD *)&v132[16];
            if ( *(_QWORD *)v132 != -1 )
            {
              v55 = *(_OWORD *)&v132[32];
              v56 = *(_OWORD *)&v132[48];
              v57 = *(_OWORD *)&v132[64];
              a1 = v158;
              *(_OWORD *)(v158 + 88) = *(_OWORD *)&v132[80];
              *(_OWORD *)(a1 + 72) = v57;
              *(_OWORD *)(a1 + 56) = v56;
              *(_OWORD *)(a1 + 40) = v55;
              *(_QWORD *)(a1 + 16) = *((_QWORD *)&v53 + 1);
              *(_QWORD *)(a1 + 24) = v54;
              *(_QWORD *)(a1 + 32) = a2;
              *(_QWORD *)(a1 + 8) = v53;
              *(_QWORD *)a1 = -1;
              goto LABEL_61;
            }
            v146 = *(_QWORD *)&v132[16];
            v150 = *(_QWORD *)&v132[8];
          }
          v162 = 1;
          sub_140748E40((__int64)v132, v148, v44, 0);
          v58 = v140;
          if ( v134 == 255 )
          {
            *(_OWORD *)&v141[80] = *(_OWORD *)&v132[80];
            v62 = *(_OWORD *)&v132[64];
            *(_OWORD *)&v141[64] = *(_OWORD *)&v132[64];
            v63 = *(_OWORD *)v132;
            v64 = *(_OWORD *)&v132[16];
            v65 = *(_OWORD *)&v132[32];
            v66 = *(_OWORD *)&v132[48];
            *(_OWORD *)&v141[48] = *(_OWORD *)&v132[48];
            *(_OWORD *)&v141[32] = *(_OWORD *)&v132[32];
            *(_OWORD *)&v141[16] = *(_OWORD *)&v132[16];
            *(_OWORD *)v141 = *(_OWORD *)v132;
            v67 = v158;
            *(_OWORD *)(v158 + 88) = *(_OWORD *)&v132[80];
            *(_OWORD *)(v67 + 72) = v62;
            *(_OWORD *)(v67 + 56) = v66;
            *(_OWORD *)(v67 + 40) = v65;
            *(_OWORD *)(v67 + 24) = v64;
            *(_OWORD *)(v67 + 8) = v63;
            *(_QWORD *)v67 = -1;
            goto LABEL_59;
          }
          v142 = v133;
          *(_OWORD *)&v141[80] = *(_OWORD *)&v132[80];
          *(_OWORD *)&v141[64] = *(_OWORD *)&v132[64];
          *(_OWORD *)&v141[48] = *(_OWORD *)&v132[48];
          *(_OWORD *)&v141[32] = *(_OWORD *)&v132[32];
          *(_OWORD *)&v141[16] = *(_OWORD *)&v132[16];
          *(_OWORD *)v141 = *(_OWORD *)v132;
          v131[0] = v135[0];
          *(_DWORD *)((char *)v131 + 3) = *(_DWORD *)((char *)v135 + 3);
          v129 = v133;
          v128 = *(_OWORD *)&v132[80];
          v127 = *(_OWORD *)&v132[64];
          v126 = *(_OWORD *)&v132[48];
          v125 = *(_OWORD *)&v132[32];
          v124 = *(_OWORD *)&v132[16];
          v123 = *(_OWORD *)v132;
          v130 = v134;
          sub_140FB96B0(v132, &v123, *(&off_141791010 + v134), qword_141791028[v134]);
          if ( *(_QWORD *)v132 != -1 )
          {
            *(_OWORD *)&v141[48] = *(_OWORD *)&v132[48];
            *(_OWORD *)&v141[33] = *(_OWORD *)&v132[33];
            *(_OWORD *)&v141[17] = *(_OWORD *)&v132[17];
            *(_OWORD *)v141 = *(_OWORD *)v132;
            v141[16] = v132[16];
            sub_14070FF80(v132, v141);
            v59 = *(_OWORD *)v132;
            v60 = v132[16];
            v61 = v158;
            *(_OWORD *)(v158 + 25) = *(_OWORD *)&v132[17];
            *(_OWORD *)(v61 + 41) = *(_OWORD *)&v132[33];
            *(_OWORD *)(v61 + 57) = *(_OWORD *)&v132[49];
            *(_OWORD *)(v61 + 73) = *(_OWORD *)&v132[65];
            *(_OWORD *)(v61 + 88) = *(_OWORD *)&v132[80];
            *(_OWORD *)(v61 + 8) = v59;
            *(_BYTE *)(v61 + 24) = v60;
            *(_QWORD *)v61 = -1;
            goto LABEL_58;
          }
          v165 = 1;
          v68 = v34;
          sub_140753940((__int128 *)v132, &v123);
          v69 = *(_QWORD *)v132;
          v70 = v132[8];
          if ( *(_QWORD *)v132 != -1 )
          {
            v71 = v158;
            *(_QWORD *)(v158 + 96) = *(_QWORD *)&v132[88];
            *(_OWORD *)(v71 + 81) = *(_OWORD *)&v132[73];
            v72 = *(_OWORD *)&v132[9];
            v73 = *(_OWORD *)&v132[25];
            v74 = *(_OWORD *)&v132[41];
            *(_OWORD *)(v71 + 65) = *(_OWORD *)&v132[57];
            *(_OWORD *)(v71 + 49) = v74;
            *(_OWORD *)(v71 + 33) = v73;
            *(_OWORD *)(v71 + 17) = v72;
            goto LABEL_57;
          }
          if ( v152 == -1 )
          {
            v75 = 0;
          }
          else
          {
            v165 = 1;
            patch_rollout_cwd((unsigned int)v132, v137, v138, v151, v34, v153, v58);
            v69 = *(_QWORD *)v132;
            v75 = v132[8];
            if ( *(_QWORD *)v132 != -1 )
            {
              v71 = v158;
              *(_QWORD *)(v158 + 96) = *(_QWORD *)&v132[88];
              *(_OWORD *)(v71 + 81) = *(_OWORD *)&v132[73];
              v76 = *(_OWORD *)&v132[9];
              v77 = *(_OWORD *)&v132[25];
              v78 = *(_OWORD *)&v132[41];
              *(_OWORD *)(v71 + 65) = *(_OWORD *)&v132[57];
              *(_OWORD *)(v71 + 49) = v78;
              *(_OWORD *)(v71 + 33) = v77;
              *(_OWORD *)(v71 + 17) = v76;
              v70 = v75;
LABEL_57:
              *(_QWORD *)(v71 + 8) = v69;
              *(_BYTE *)(v71 + 16) = v70;
              *(_QWORD *)v71 = -1;
              sub_1406CB940(&v123);
LABEL_58:
              v162 = 1;
              sub_1406CB500(&v123);
LABEL_59:
              a1 = v158;
              if ( (unsigned __int64)(v150 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v146, v150, 1);
LABEL_61:
              v40 = v155;
              v41 = v157;
              v42 = v154;
              if ( v152 > 0 )
                sub_140001660(v137, v152, 1);
              if ( (unsigned __int64)(v145 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                sub_140001660(v144, v145, 1);
LABEL_65:
              if ( v87 )
                sub_140001660(v148, v87, 1);
LABEL_67:
              if ( v90 )
                sub_140001660(v147, v90, 1);
LABEL_69:
              if ( v42 )
                sub_140001660(v151, v42, 1);
              if ( v41 )
                sub_140001660(v153, v41, 1);
              if ( (((unsigned __int64)(v156 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & v40) != 0 )
                sub_140001660(v143, v156, 1);
LABEL_75:
              if ( v94.m256i_i64[1] )
                sub_140001660(v94.m256i_i64[2], v94.m256i_i64[1], 1);
              if ( (_QWORD)v95 )
                sub_140001660(*((_QWORD *)&v95 + 1), v95, 1);
              if ( *((_QWORD *)&v96 + 1) != -1 && *((_QWORD *)&v96 + 1) )
                sub_140001660(v97, *((_QWORD *)&v96 + 1), 1);
              if ( (_QWORD)v98 != -1 && (_QWORD)v98 )
                sub_140001660(*((_QWORD *)&v98 + 1), v98, 1);
              if ( v100 != -1 && v100 )
                sub_140001660(v101, v100, 1);
              if ( v102 != -1 && v102 )
                sub_140001660(v103, v102, 1);
              if ( v104 != -1 && v104 )
                sub_140001660(v105, v104, 1);
              if ( v106 != -1 && v106 )
                sub_140001660(v107, v106, 1);
              v30 = v108;
              if ( v108 != -1 && v108 )
              {
                v32 = v109;
                v31 = 1;
LABEL_23:
                sub_140001660(v32, v30, v31);
              }
              return a1;
            }
          }
          v165 = 0;
          sub_140710880(v81, &v123);
          if ( *(_QWORD *)&v81[0] != -1 )
          {
            v86[3] = v81[3];
            v86[2] = v81[2];
            v86[1] = v81[1];
            v86[0] = v81[0];
            if ( v150 == -1 || (v75 & 1) == 0 )
              goto LABEL_110;
            if ( v152 == -1 )
              sub_1416C3040(&off_14178AF18);
            sub_140753850((unsigned int)v141, v146, a2, v137, v138);
            if ( *(_QWORD *)v141 == -1 )
            {
LABEL_110:
              *(_QWORD *)v132 = v86;
              *(_QWORD *)&v132[8] = sub_140FB8910;
              sub_14149C0F0(&v82, &unk_14178AF30, v132);
              v121 = v82;
              v122 = v83;
            }
            else
            {
              *(_QWORD *)&v132[88] = *(_QWORD *)&v141[88];
              *(_OWORD *)&v132[72] = *(_OWORD *)&v141[72];
              *(_OWORD *)&v132[56] = *(_OWORD *)&v141[56];
              *(_OWORD *)&v132[40] = *(_OWORD *)&v141[40];
              *(_OWORD *)&v132[24] = *(_OWORD *)&v141[24];
              *(_OWORD *)&v132[8] = *(_OWORD *)&v141[8];
              *(_QWORD *)v132 = *(_QWORD *)v141;
              *(_QWORD *)v141 = v86;
              *(_QWORD *)&v141[8] = sub_140FB8910;
              *(_QWORD *)&v141[16] = v132;
              *(_QWORD *)&v141[24] = sub_140B036A0;
              sub_14149C0F0(&v84, &unk_14178AF55, v141);
              v121 = v84;
              v122 = v85;
              sub_1406CDA20(v132);
            }
            v79 = v158;
            *(_QWORD *)(v158 + 8) = 10;
            *(_OWORD *)(v79 + 16) = v121;
            *(_QWORD *)(v79 + 32) = v122;
            *(_QWORD *)v79 = -1;
            v165 = 0;
            sub_1406CBAD0(v86);
            goto LABEL_58;
          }
          v80 = v158;
          *(_QWORD *)(v158 + 16) = v94.m256i_i64[3];
          *(_OWORD *)v80 = *(_OWORD *)&v94.m256i_u64[1];
          *(_QWORD *)(v80 + 24) = v154;
          *(_QWORD *)(v80 + 32) = v151;
          *(_QWORD *)(v80 + 40) = v68;
          *(_QWORD *)(v80 + 48) = v157;
          *(_QWORD *)(v80 + 56) = v153;
          *(_QWORD *)(v80 + 64) = v140;
          *(_QWORD *)(v80 + 72) = v145;
          *(_QWORD *)(v80 + 80) = v144;
          *(_QWORD *)(v80 + 88) = v120;
          *(_QWORD *)(v80 + 96) = v150;
          *(_QWORD *)(v80 + 104) = v146;
          *(_QWORD *)(v80 + 112) = a2;
          *(_BYTE *)(v80 + 120) = v70;
          *(_BYTE *)(v80 + 121) = v75 & 1;
          v162 = 0;
          sub_1406CB500(&v123);
          if ( v152 > 0 )
            sub_140001660(v137, v152, 1);
          if ( v87 )
            sub_140001660(v148, v87, 1);
          if ( v90 )
            sub_140001660(v147, v90, 1);
          if ( (unsigned __int64)(v156 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v143, v156, 1);
          if ( (_QWORD)v95 )
            sub_140001660(*((_QWORD *)&v95 + 1), v95, 1);
          if ( *((_QWORD *)&v96 + 1) != -1 && *((_QWORD *)&v96 + 1) )
            sub_140001660(v97, *((_QWORD *)&v96 + 1), 1);
          if ( (_QWORD)v98 != -1 && (_QWORD)v98 )
            sub_140001660(*((_QWORD *)&v98 + 1), v98, 1);
          if ( v100 != -1 && v100 )
            sub_140001660(v101, v100, 1);
          if ( v102 != -1 && v102 )
            sub_140001660(v103, v102, 1);
          if ( v104 != -1 && v104 )
            sub_140001660(v105, v104, 1);
          if ( v106 != -1 && v106 )
            sub_140001660(v107, v106, 1);
          if ( v108 != -1 && v108 )
            sub_140001660(v109, v108, 1);
          return v158;
        }
      }
      v19 += 41;
      v157 -= 328LL;
      v11 = v156;
      if ( v156 == v17 )
      {
        v18 = v17;
        a1 = v158;
        break;
      }
    }
  }
  nullsub_1(v16);
  v27 = sub_140001650(21, 1);
  if ( !v27 )
    sub_1416C2D4B(1, 21);
  *(_OWORD *)v27 = xmmword_14178887E;
  *(_QWORD *)(v27 + 13) = 0x8BA8E7BFBAE794BAuLL;
  *(_QWORD *)(a1 + 8) = 10;
  *(_QWORD *)(a1 + 16) = 21;
  *(_QWORD *)(a1 + 24) = v27;
  *(_QWORD *)(a1 + 32) = 21;
  *(_QWORD *)a1 = -1;
  v157 = 0x8F9C18F9C18F9C19uLL * ((unsigned __int64)(v17 - v18) >> 3);
  v156 = 0;
  v149 = v18;
  v28 = (_QWORD *)v18;
  while ( v157 != v156 )
  {
    ++v156;
    v29 = v28 + 41;
    sub_1402C5ED0(v28);
    v28 = v29;
  }
  if ( v155 )
  {
    v30 = 328 * v155;
    v31 = 8;
    v32 = v153;
    goto LABEL_23;
  }
  return a1;
}