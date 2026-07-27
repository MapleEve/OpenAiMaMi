// win 1.2.3 delta | router_model_restore_3 @ 0x1404b2520 | changelog ③模型回退
// [FULL IDA decompiler 32204B]
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_1404B2520(__int64 *a1, __int64 a2, const char *a3, __int64 a4)
{
  __int64 v4; // rsi
  const char *v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r14
  const char *v9; // r15
  __int64 *i; // rax
  __int64 v11; // r8
  unsigned __int128 v12; // rdi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  bool v16; // bl
  unsigned int v17; // r14d
  char v18; // bl
  int v19; // eax
  __int64 v20; // r14
  int v21; // r12d
  char *v22; // rcx
  _QWORD *v23; // rsi
  _QWORD *v24; // r8
  unsigned __int64 v25; // rsi
  unsigned int v26; // r15d
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // r12
  char v32; // bl
  __int64 v33; // r13
  __int64 v34; // rdi
  __int64 j; // r14
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rcx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  int v46; // eax
  int v47; // esi
  __int64 v48; // rdi
  __int64 v49; // rbx
  char v50; // r15
  unsigned int v51; // r8d
  int v52; // eax
  unsigned int v53; // esi
  int v54; // eax
  __int64 v55; // rbx
  _QWORD *v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rbx
  __int64 v61; // r14
  __int64 *v62; // rax
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  __int128 v65; // xmm3
  __int64 v66; // rax
  _QWORD *v67; // rsi
  __int64 v68; // rdx
  unsigned __int64 v69; // rsi
  __int64 v70; // rdi
  _QWORD *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rdx
  _QWORD *v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // r14
  __int64 v77; // r8
  unsigned __int64 v78; // rdi
  __m512i *v79; // r15
  unsigned __int64 v80; // r13
  __int64 v81; // rcx
  __m512i *v82; // rsi
  __int64 v83; // r12
  __int64 v84; // r15
  __int64 v85; // rax
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rcx
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rdi
  __int64 *v96; // rax
  __int64 *v98; // rcx
  __int64 v99; // rax
  bool v100; // zf
  __int64 v101; // rdx
  __int64 v102; // rdi
  _QWORD *v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 *v107; // rax
  _QWORD *v108; // rdi
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // [rsp+20h] [rbp-60h]
  __int64 v112; // [rsp+28h] [rbp-58h]
  __int64 v113; // [rsp+30h] [rbp-50h]
  _QWORD v114[3]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v115; // [rsp+50h] [rbp-30h] BYREF
  __int64 v116; // [rsp+60h] [rbp-20h]
  __int128 v117; // [rsp+68h] [rbp-18h] BYREF
  __int64 v118; // [rsp+78h] [rbp-8h]
  __m512i v119; // [rsp+80h] [rbp+0h]
  __int64 v120; // [rsp+C0h] [rbp+40h]
  _QWORD *v121; // [rsp+C8h] [rbp+48h]
  __int64 v122; // [rsp+D0h] [rbp+50h]
  __int64 v123; // [rsp+D8h] [rbp+58h]
  unsigned __int128 v124; // [rsp+E0h] [rbp+60h] BYREF
  unsigned __int64 v125; // [rsp+F0h] [rbp+70h]
  _QWORD v126[2]; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v127; // [rsp+108h] [rbp+88h] BYREF
  unsigned __int64 v128; // [rsp+118h] [rbp+98h] BYREF
  unsigned __int64 v129; // [rsp+120h] [rbp+A0h]
  unsigned __int64 v130; // [rsp+128h] [rbp+A8h]
  __int64 v131; // [rsp+130h] [rbp+B0h]
  const char *v132; // [rsp+138h] [rbp+B8h]
  __int64 v133; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v134; // [rsp+148h] [rbp+C8h]
  __int64 v135; // [rsp+150h] [rbp+D0h]
  __int64 v136; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v137; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v138; // [rsp+168h] [rbp+E8h]
  __int64 v139; // [rsp+170h] [rbp+F0h]
  __int64 v140; // [rsp+178h] [rbp+F8h]
  __int64 *v141; // [rsp+180h] [rbp+100h]
  __int64 v142; // [rsp+188h] [rbp+108h]
  __int64 v143; // [rsp+190h] [rbp+110h]
  __int64 v144; // [rsp+198h] [rbp+118h]
  const char *v145; // [rsp+1A0h] [rbp+120h]
  __int64 v146; // [rsp+1A8h] [rbp+128h]
  __m512i v147; // [rsp+1B0h] [rbp+130h] BYREF
  unsigned __int128 v148; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v149; // [rsp+200h] [rbp+180h]
  __int128 v150; // [rsp+210h] [rbp+190h]
  __int128 v151; // [rsp+220h] [rbp+1A0h]
  __int64 v152; // [rsp+230h] [rbp+1B0h]
  __int64 v153; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v154; // [rsp+248h] [rbp+1C8h]
  __int64 v155; // [rsp+250h] [rbp+1D0h]
  _QWORD *v156; // [rsp+258h] [rbp+1D8h]
  __int64 *v157; // [rsp+260h] [rbp+1E0h]
  __int64 v158; // [rsp+268h] [rbp+1E8h]
  __int128 v159; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v160; // [rsp+280h] [rbp+200h]
  __m512i v161; // [rsp+290h] [rbp+210h]
  char v162; // [rsp+2D0h] [rbp+250h]
  _BYTE v163[7]; // [rsp+2D1h] [rbp+251h]
  unsigned __int8 v164; // [rsp+2D8h] [rbp+258h]
  _BYTE v165[7]; // [rsp+2D9h] [rbp+259h]
  _BYTE v166[72]; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v167; // [rsp+328h] [rbp+2A8h]
  unsigned __int128 v168; // [rsp+330h] [rbp+2B0h] BYREF
  unsigned __int64 v169; // [rsp+340h] [rbp+2C0h]
  unsigned __int128 v170; // [rsp+348h] [rbp+2C8h] BYREF
  unsigned __int128 *v171; // [rsp+358h] [rbp+2D8h]
  __int64 (__fastcall *v172)(); // [rsp+360h] [rbp+2E0h]
  void *v173; // [rsp+368h] [rbp+2E8h] BYREF
  __int64 v174; // [rsp+370h] [rbp+2F0h]
  void *v175; // [rsp+378h] [rbp+2F8h]
  __m512i v176; // [rsp+380h] [rbp+300h] BYREF
  unsigned __int128 *v177; // [rsp+3C0h] [rbp+340h]
  __int64 (__fastcall *v178)(); // [rsp+3C8h] [rbp+348h]
  _DWORD v179[2]; // [rsp+3E8h] [rbp+368h]
  __int64 v180; // [rsp+3F0h] [rbp+370h]
  unsigned __int64 v181; // [rsp+3F8h] [rbp+378h]
  _BYTE v182[96]; // [rsp+400h] [rbp+380h] BYREF
  char v183; // [rsp+460h] [rbp+3E0h]
  _BYTE v184[7]; // [rsp+461h] [rbp+3E1h]
  unsigned __int8 v185; // [rsp+468h] [rbp+3E8h]
  _BYTE v186[7]; // [rsp+469h] [rbp+3E9h]
  __int64 v187; // [rsp+470h] [rbp+3F0h]
  char v188; // [rsp+47Ch] [rbp+3FCh] BYREF
  char v189; // [rsp+47Dh] [rbp+3FDh]
  char v190; // [rsp+47Eh] [rbp+3FEh]
  char v191; // [rsp+47Fh] [rbp+3FFh]
  __int64 v192; // [rsp+480h] [rbp+400h]

  v192 = -2;
  v4 = a4;
  v5 = a3;
  v157 = a1;
  sub_14033BC10(a3, a4);
  v8 = 7;
  if ( !v7 )
    v4 = 7;
  v9 = "gpt-5.5";
  if ( !v7 )
    v5 = "gpt-5.5";
  v153 = 0;
  v154 = 8;
  v155 = 0;
  v131 = a2;
  sub_140712830(v182);
  v120 = *(_QWORD *)&v182[8];
  v140 = *(_QWORD *)v182;
  v122 = *(_QWORD *)v182;
  v143 = *(_QWORD *)&v182[8] + 32LL * *(_QWORD *)&v182[16];
  v123 = v143;
  v132 = v5;
  if ( v4 )
    v9 = v5;
  v145 = v9;
  v146 = v4;
  if ( v4 )
    v8 = v4;
  v144 = v8;
  v181 = 32LL * *(_QWORD *)&v182[16] - 32;
  v156 = (_QWORD *)(*(_QWORD *)&v182[8] + 40LL);
  v138 = *(_QWORD *)&v182[8];
  for ( i = *(__int64 **)&v182[8]; ; i = v141 )
  {
    if ( i == (__int64 *)v143 )
      goto LABEL_133;
    v141 = i + 4;
    v121 = i + 4;
    if ( *i == -1 )
    {
      if ( (__int64 *)v143 != v141 )
      {
        v181 >>= 5;
        do
        {
          v74 = v156;
          v75 = *(v156 - 1);
          if ( v75 )
            sub_140001660(*v156, v75, 1);
          v156 = v74 + 4;
          --v181;
        }
        while ( v181 );
      }
LABEL_133:
      if ( v140 )
        sub_140001660(v138, 32 * v140, 8);
      v69 = v154;
      v76 = v155;
      if ( !v155 )
      {
        v96 = v157;
        v157[1] = 0;
        *v96 = -1;
        goto LABEL_158;
      }
      v77 = *(_QWORD *)(v131 + 784);
      v187 = *(_QWORD *)(v131 + 776);
      v180 = v77;
      sub_1404A5B80((__int64)&v176, v187, v77);
      v176.m512i_i32[6] = 1;
      v78 = v69 + 48 * v76;
      v79 = &v176;
      v80 = v69;
      if ( v69 == v78 )
      {
LABEL_145:
        sub_141473FA0((unsigned int)&v159, v187, v180, (unsigned int)&unk_14175B73B, 25);
        v92 = v160;
        v181 = *((_QWORD *)&v159 + 1);
        v93 = sub_1414740B0(*((_QWORD *)&v159 + 1), v160);
        if ( v93 )
        {
          v182[0] = 1;
          *(_QWORD *)v182 = sub_14147B9A0(v182, v93, v94);
          if ( *(_QWORD *)v182 )
            sub_140018650(v182);
        }
        sub_140440F40(v166, &v176);
        if ( *(_QWORD *)v166 == -1 )
        {
          v98 = *(__int64 **)&v166[8];
          v147.m512i_i64[0] = *(_QWORD *)&v166[8];
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            *(_QWORD *)&v148 = &v147;
            *((_QWORD *)&v148 + 1) = sub_14142D3F0;
            *(_QWORD *)v182 = 0;
            *(_QWORD *)&v182[8] = aCodexmateLibCo_0;
            *(_OWORD *)&v182[16] = 0x33u;
            *(_QWORD *)&v182[32] = aSrcCoreRelayCo_0;
            *(_QWORD *)&v182[40] = 41;
            *(_QWORD *)&v182[48] = 2;
            *(_QWORD *)&v182[56] = aCodexmateLibCo_0;
            *(_QWORD *)&v182[64] = 51;
            *(_QWORD *)&v182[72] = 0x93800000001LL;
            *(_QWORD *)&v182[80] = &unk_14175BF84;
            *(_QWORD *)&v182[88] = &v148;
            sub_1412C36A0(&v188, v182);
            v98 = (__int64 *)v147.m512i_i64[0];
          }
          v99 = *v98;
          v100 = *v98 == 1;
          v187 = (__int64)v98;
          if ( v100 )
          {
            sub_140018650(v98 + 1);
          }
          else if ( !v99 )
          {
            v101 = *(_QWORD *)(v187 + 16);
            if ( v101 )
              sub_140001660(*(_QWORD *)(v187 + 8), v101, 1);
          }
          sub_140001660(v187, 40, 8);
        }
        else
        {
          v180 = *(_QWORD *)&v166[8];
          v187 = *(_QWORD *)v166;
          v95 = sub_14148D5C0(v181, v92, *(_QWORD *)&v166[8], *(_QWORD *)&v166[16]);
          if ( v187 )
            sub_140001660(v180, v187, 1);
          if ( v95 )
          {
            v147.m512i_i64[0] = v95;
            if ( *(_QWORD *)off_141EC8D80 >= 2u )
            {
              *(_QWORD *)&v148 = &v147;
              *((_QWORD *)&v148 + 1) = sub_141490720;
              *(_QWORD *)v182 = 0;
              *(_QWORD *)&v182[8] = aCodexmateLibCo_0;
              *(_OWORD *)&v182[16] = 0x33u;
              *(_QWORD *)&v182[32] = aSrcCoreRelayCo_0;
              *(_QWORD *)&v182[40] = 41;
              *(_QWORD *)&v182[48] = 2;
              *(_QWORD *)&v182[56] = aCodexmateLibCo_0;
              *(_QWORD *)&v182[64] = 51;
              *(_QWORD *)&v182[72] = 0x93500000001LL;
              *(_QWORD *)&v182[80] = &unk_14175BF53;
              *(_QWORD *)&v182[88] = &v148;
              sub_1412C36A0(&v188, v182);
            }
            sub_140018650(&v147);
          }
        }
        if ( (_QWORD)v159 )
          sub_140001660(v181, v159, 1);
        v102 = v176.m512i_i64[2];
        if ( v176.m512i_i64[2] )
        {
          v103 = (_QWORD *)(v176.m512i_i64[1] + 56);
          do
          {
            v104 = *(v103 - 7);
            if ( v104 )
              sub_140001660(*(v103 - 6), v104, 1);
            v105 = *(v103 - 4);
            if ( v105 )
              sub_140001660(*(v103 - 3), v105, 1);
            v106 = *(v103 - 1);
            if ( v106 )
              sub_140001660(*v103, v106, 1);
            v103 += 10;
            --v102;
          }
          while ( v102 );
        }
        if ( v176.m512i_i64[0] )
          sub_140001660(v176.m512i_i64[1], 80 * v176.m512i_i64[0], 8);
        v107 = v157;
        v157[1] = v76;
        *v107 = -1;
        v108 = (_QWORD *)(v69 + 32);
        do
        {
          v109 = *(v108 - 4);
          if ( v109 )
            sub_140001660(*(v108 - 3), v109, 1);
          v110 = *(v108 - 1);
          if ( v110 )
            sub_140001660(*v108, v110, 1);
          v108 += 6;
          --v76;
        }
        while ( v76 );
        goto LABEL_158;
      }
      while ( 1 )
      {
        sub_1402B0ED0(v79, v80);
        sub_14149C500(v166, v80);
        sub_14149C500(&v159, v80 + 24);
        v80 += 48LL;
        if ( v146 < 0 )
          break;
        v181 = v69;
        v82 = v79;
        if ( v146 )
        {
          nullsub_1(v81);
          v83 = 1;
          v84 = v146;
          v85 = sub_140001650(v146, 1);
          if ( !v85 )
          {
            a2 = v84;
LABEL_156:
            sub_1416C2D4B(v83, a2);
          }
          a2 = v85;
          sub_141684120(v85, v132, v84);
        }
        else
        {
          a2 = 1;
          v84 = 0;
        }
        *(_QWORD *)&v182[16] = *(_QWORD *)&v166[16];
        *(_OWORD *)v182 = *(_OWORD *)v166;
        *(_QWORD *)&v182[40] = v160;
        *(_OWORD *)&v182[24] = v159;
        *(_QWORD *)&v182[48] = v84;
        *(_QWORD *)&v182[56] = a2;
        *(_QWORD *)&v182[64] = v84;
        *(_DWORD *)&v182[72] = 0;
        v86 = v176.m512i_i64[2];
        v79 = v82;
        if ( v176.m512i_i64[2] == v176.m512i_i64[0] )
          sub_141689180(v82);
        v87 = v176.m512i_i64[1];
        v88 = 80 * v86;
        *(_OWORD *)(v176.m512i_i64[1] + v88 + 64) = *(_OWORD *)&v182[64];
        v89 = *(_OWORD *)v182;
        v90 = *(_OWORD *)&v182[16];
        v91 = *(_OWORD *)&v182[32];
        *(_OWORD *)(v87 + v88 + 48) = *(_OWORD *)&v182[48];
        *(_OWORD *)(v87 + v88 + 32) = v91;
        *(_OWORD *)(v87 + v88 + 16) = v90;
        *(_OWORD *)(v87 + v88) = v89;
        v176.m512i_i64[2] = v86 + 1;
        v69 = v181;
        if ( v80 == v78 )
          goto LABEL_145;
      }
      v83 = 0;
      goto LABEL_156;
    }
    v142 = *i;
    v11 = i[2];
    v187 = i[1];
    v180 = v11;
    sub_141486710(v182, v187, v11);
    if ( *(_DWORD *)v182 == 2 )
    {
      *((_QWORD *)&v159 + 1) = *(_QWORD *)&v182[8];
      *(_QWORD *)&v159 = 2;
LABEL_16:
      sub_140018650((char *)&v159 + 8);
      *((_QWORD *)&v12 + 1) = 8;
      a2 = 0;
      v13 = 0;
      goto LABEL_17;
    }
    v159 = *(_OWORD *)v182;
    v161.m512i_i64[6] = *(_QWORD *)&v182[80];
    *(_OWORD *)&v161.m512i_u64[4] = *(_OWORD *)&v182[64];
    *(_OWORD *)&v161.m512i_u64[2] = *(_OWORD *)&v182[48];
    *(_OWORD *)v161.m512i_i8 = *(_OWORD *)&v182[32];
    v160 = *(_OWORD *)&v182[16];
    if ( *(_QWORD *)v182 == 2 )
      goto LABEL_16;
    v137 = 4;
    v14 = 0;
LABEL_25:
    v129 = v14;
    v130 = v14 + 1;
    v128 = v14 + 1;
    sub_1404B6A90(v182, v187, v180);
    LOBYTE(v12) = v182[8];
    v15 = *(_QWORD *)v182;
    v13 = *(_QWORD *)&v182[24];
    *((_QWORD *)&v12 + 1) = *(_QWORD *)&v182[16];
    v176 = *(__m512i *)&v182[32];
    if ( v185 == 0xFF )
    {
      v21 = *(_DWORD *)&v182[8] >> 8;
      v20 = *(_QWORD *)&v182[8] >> 16;
      v147 = v176;
      if ( *(_QWORD *)v182 != -1 )
      {
LABEL_108:
        *(_QWORD *)&v12 = (v20 << 16) | ((unsigned __int8)v21 << 8) | (unsigned __int8)v12;
        v119 = v147;
        goto LABEL_112;
      }
      goto LABEL_104;
    }
    *(_DWORD *)&v163[3] = *(_DWORD *)&v184[3];
    *(_DWORD *)v163 = *(_DWORD *)v184;
    *(_DWORD *)&v165[3] = *(_DWORD *)&v186[3];
    *(_DWORD *)v165 = *(_DWORD *)v186;
    *(__m512i *)v166 = v176;
    v159 = *(_OWORD *)v182;
    v160 = *(_OWORD *)&v182[16];
    v161 = v176;
    v162 = v183;
    v164 = v185;
    sub_1404A3CD0(v182, &v159);
    v15 = *(_QWORD *)v182;
    LOBYTE(v12) = v182[8];
    if ( *(_QWORD *)v182 != -1 )
    {
      LOBYTE(v21) = v182[9];
      v60 = *(unsigned int *)&v182[10];
      v61 = *(unsigned __int16 *)&v182[14];
      v13 = *(_QWORD *)&v182[24];
      *((_QWORD *)&v12 + 1) = *(_QWORD *)&v182[16];
      v147 = *(__m512i *)&v182[32];
      sub_14043C900(&v159);
      v20 = v60 | (v61 << 32);
      goto LABEL_108;
    }
    if ( v182[8] == 1 )
      break;
    *((_QWORD *)&v12 + 1) = 8;
    v13 = 0;
    LOBYTE(v12) = 0;
    LOBYTE(v21) = 0;
    v20 = 0;
LABEL_103:
    sub_14043C900(&v159);
LABEL_104:
    a2 = (v20 << 16) | ((unsigned __int8)v21 << 8) | (unsigned __int8)v12;
LABEL_17:
    *(_QWORD *)v182 = *((_QWORD *)&v12 + 1);
    *(_QWORD *)&v182[16] = a2;
    *(_QWORD *)&v182[8] = *((_QWORD *)&v12 + 1);
    *(_QWORD *)&v182[24] = *((_QWORD *)&v12 + 1) + 48 * v13;
    *(_QWORD *)&v12 = v155;
    if ( v13 > v153 - v155 )
    {
      sub_141688D30((unsigned int)&v153, v155, v13, 8, 48);
      *(_QWORD *)&v12 = v155;
    }
    else if ( !v13 )
    {
      goto LABEL_20;
    }
    sub_141684120(v154 + 48 * v12, *((_QWORD *)&v12 + 1), 48 * v13);
LABEL_20:
    v155 = v13 + v12;
    if ( a2 )
    {
      a2 *= 16;
      sub_140001660(*((_QWORD *)&v12 + 1), 3 * a2, 8);
    }
    if ( v142 )
      sub_140001660(v187, v142, 1);
    v181 -= 32LL;
    v156 += 4;
  }
  sub_14046F850(
    v182,
    &v159,
    aSelectIdRollou_1,
    99,
    v111,
    v112,
    v113,
    v114[0],
    v114[1],
    v114[2],
    v115,
    *((_QWORD *)&v115 + 1),
    v116,
    v117,
    *((_QWORD *)&v117 + 1),
    v118,
    v119.m512i_i64[0],
    v119.m512i_i64[1],
    v119.m512i_i64[2],
    v119.m512i_i64[3],
    v119.m512i_i64[4],
    v119.m512i_i64[5]);
  if ( *(_DWORD *)v182 == 1 )
  {
    v176 = *(__m512i *)&v182[8];
    *(_QWORD *)&v168 = &unk_141757FDF;
    *((_QWORD *)&v168 + 1) = 30;
    v16 = __OFSUB__(0, *(_QWORD *)&v182[8]);
    v17 = 0x3158u >> v182[44];
    *(_QWORD *)&v148 = &v168;
    *((_QWORD *)&v148 + 1) = sub_14041F680;
    *(_QWORD *)&v149 = &v176;
    *((_QWORD *)&v149 + 1) = sub_140FB8910;
    sub_14149C0F0(&v170, &unk_141757B59, &v148);
    v12 = v170;
    v13 = (unsigned __int64)v171;
    sub_14043D020(&v176);
LABEL_30:
    v18 = v17 & v16;
    goto LABEL_33;
  }
  *(_QWORD *)&v166[56] = *(_QWORD *)&v182[64];
  *(_OWORD *)&v166[40] = *(_OWORD *)&v182[48];
  *(_OWORD *)&v166[24] = *(_OWORD *)&v182[32];
  *(_OWORD *)v166 = *(_OWORD *)&v182[8];
  *(_QWORD *)&v166[16] = *(_QWORD *)&v182[24];
  v19 = sub_1414B6B70(*(_QWORD *)&v182[64]);
  if ( v19 )
  {
    *(_OWORD *)v182 = 0x8000000000000013uLL;
    *(_QWORD *)&v182[16] = v19;
    *(_QWORD *)&v170 = aQueryModelFall;
    *((_QWORD *)&v170 + 1) = 28;
    v176.m512i_i64[0] = (__int64)&v170;
    v176.m512i_i64[1] = (__int64)sub_14041F680;
    v176.m512i_i64[2] = (__int64)v182;
    v176.m512i_i64[3] = (__int64)sub_140FB8910;
    sub_14149C0F0(&v148, &unk_141757B59, &v176);
    v12 = v148;
    v13 = v149;
    sub_14043D020(v182);
    sub_14043D1B0(v166);
    v18 = 0;
LABEL_33:
    sub_14043C900(&v159);
    v20 = (unsigned __int64)v12 >> 16;
    v21 = (unsigned int)v12 >> 8;
    v15 = 10;
    if ( !v18 )
      goto LABEL_108;
    goto LABEL_34;
  }
  sub_1409889A0(&v176, v166, 0);
  if ( v176.m512i_i64[0] != -1 )
  {
    *(__m512i *)v182 = v176;
    v173 = &unk_141758019;
    v174 = 30;
    v16 = __OFSUB__(0, v176.m512i_i64[0]);
    v17 = 0x3158u >> v176.m512i_i8[36];
    *(_QWORD *)&v148 = &v173;
    *((_QWORD *)&v148 + 1) = sub_14041F680;
    *(_QWORD *)&v149 = v182;
    *((_QWORD *)&v149 + 1) = sub_140FB8910;
    sub_14149C0F0(&v168, &unk_141757B59, &v148);
    v12 = v168;
    v13 = v169;
    sub_14043D020(v182);
    sub_14043D1B0(v166);
    goto LABEL_30;
  }
  *(_QWORD *)&v170 = v176.m512i_i64[2];
  *((_QWORD *)&v170 + 1) = v176.m512i_i64[2];
  v171 = (unsigned __int128 *)v176.m512i_i64[1];
  v172 = (__int64 (__fastcall *)())(v176.m512i_i64[2] + 120 * v176.m512i_i64[3]);
  sub_1402CA740(&v133, &v170);
  sub_14043D1B0(v166);
  v27 = v135;
  v139 = v135;
  if ( !v135 )
  {
    v15 = -1;
    v32 = 1;
    *((_QWORD *)&v12 + 1) = 8;
    v20 = 0;
    LOBYTE(v21) = 0;
    LOBYTE(v12) = 0;
    v13 = 0;
    goto LABEL_95;
  }
  v126[0] = v145;
  v126[1] = v144;
  v28 = 8 * (unsigned int)v164;
  v29 = *(__int64 *)((char *)&off_14175ED60 + v28);
  v30 = *(_QWORD *)((char *)&unk_14175ED78 + v28);
  v189 = 1;
  sub_140FB96B0(&v176, &v159, v29, v30);
  if ( v176.m512i_i64[0] != -1 )
  {
    *(__m512i *)v182 = v176;
    *(_QWORD *)&v148 = aBeginModelFall;
    *((_QWORD *)&v148 + 1) = 32;
    if ( __OFSUB__(-v176.m512i_i64[0], 1) && (unsigned __int8)(v182[36] - 3) <= 0xAu )
      v31 = byte_14175ED50[(unsigned __int8)(v182[36] - 3)];
    else
      v31 = 0;
    v176.m512i_i64[0] = (__int64)&v148;
    v176.m512i_i64[1] = (__int64)sub_14041F680;
    v176.m512i_i64[2] = (__int64)v182;
    v176.m512i_i64[3] = (__int64)sub_140FB8910;
    sub_14149C0F0(v166, &unk_141757B59, &v176);
    v12 = *(_OWORD *)v166;
    v13 = *(_QWORD *)&v166[16];
    v189 = 1;
    sub_14043D020(v182);
    v15 = 10;
    goto LABEL_94;
  }
  v136 = 0;
  v173 = nullptr;
  v174 = 8;
  v175 = nullptr;
  v33 = v134 + 104 * v27;
  v34 = 0;
  v158 = v134;
  for ( j = v134; ; j += 104 )
  {
    if ( j == v33 )
    {
      sub_140FB96B0(&v148, &v159, aCommit_0, 6);
      if ( (unsigned __int64)v159 >= 0x7FFFFFFFFFFFFFFFLL )
      {
        v191 = 0;
        v190 = 1;
        sub_1416C2FC0(&off_141758678);
      }
      *(_QWORD *)&v159 = v159 + 1;
      v46 = sub_1414BC9F0(v160);
      *(_QWORD *)&v159 = v159 - 1;
      if ( !v46 )
      {
        v191 = 0;
        v190 = 1;
        sub_140FB96B0(v182, &v159, aRollback_0, 8);
        if ( *(_QWORD *)v182 != -1 )
        {
          v191 = 0;
          v190 = 1;
          sub_14043D020(v182);
        }
      }
      if ( (_QWORD)v148 != -1 )
      {
        *(_OWORD *)&v166[48] = v151;
        *(_OWORD *)&v166[32] = v150;
        *(_OWORD *)&v166[16] = v149;
        *(_OWORD *)v166 = v148;
        v47 = v174;
        v48 = (__int64)v175;
        v49 = v148;
        v50 = BYTE4(v150);
        *(_QWORD *)&v168 = v166;
        *((_QWORD *)&v168 + 1) = sub_140FB8910;
        sub_14149C0F0(&v170, &unk_141758057, &v168);
        v51 = 0x3158u >> v50;
        LOBYTE(v51) = __OFSUB__(-v49, 1) & (0x3158u >> v50);
        v176.m512i_i64[3] = (__int64)v171;
        *(_OWORD *)&v176.m512i_u64[1] = v170;
        v176.m512i_i64[0] = 10;
        sub_1404B9C20((unsigned int)v182, (unsigned int)&v176, v51, v47, v48);
        v191 = 0;
        v190 = 1;
        sub_14043D020(v166);
        v12 = *(_OWORD *)&v182[8];
        v15 = *(_QWORD *)v182;
        v13 = *(_QWORD *)&v182[24];
        v147 = *(__m512i *)&v182[32];
        v31 = v183;
        v179[0] = *(_DWORD *)v184;
        *(_DWORD *)((char *)v179 + 3) = *(_DWORD *)&v184[3];
        goto LABEL_83;
      }
      v176.m512i_i64[0] = v187;
      v176.m512i_i64[1] = v180;
      *(_QWORD *)v166 = v139;
      *(_QWORD *)v182 = &v176;
      *(_QWORD *)&v182[8] = sub_14148F3A0;
      *(_QWORD *)&v182[16] = v126;
      *(_QWORD *)&v182[24] = sub_14041F680;
      *(_QWORD *)&v182[32] = v166;
      *(_QWORD *)&v182[40] = sub_1414AC520;
      *(_QWORD *)&v182[48] = &v136;
      *(_QWORD *)&v182[56] = sub_1414AC520;
      v191 = 0;
      v190 = 1;
      sub_14149C0F0(v114, &unk_14175CE25, v182);
      v191 = 0;
      v190 = 1;
      sub_1403565C0((unsigned int)aRelayModelFall, 20, (unsigned int)aConverged, 9, (__int64)v114);
      *(_QWORD *)v182 = v158;
      *(_QWORD *)&v182[8] = v158;
      *(_QWORD *)&v182[16] = v133;
      *(_QWORD *)&v182[24] = v33;
      v191 = 0;
      v190 = 0;
      sub_1402CB260(&v176, v182);
      v12 = *(_OWORD *)v176.m512i_i8;
      v13 = v176.m512i_u64[2];
      sub_14043B3B0(&v173);
      v20 = (unsigned __int64)v12 >> 16;
      v21 = (unsigned int)v12 >> 8;
      goto LABEL_103;
    }
    v36 = *(_QWORD *)(j + 32);
    v37 = *(_QWORD *)(j + 40);
    v38 = *(_QWORD *)(j + 64);
    v39 = *(_QWORD *)(j + 72);
    v191 = 1;
    v190 = 1;
    sub_1404B5A10((__int64)v166, v36, v37, v38, v39, (__int64)v145, v144);
    if ( *(_QWORD *)v166 == -2 )
      break;
    v152 = v167;
    v151 = *(_OWORD *)&v166[56];
    v150 = *(_OWORD *)&v166[40];
    v149 = *(_OWORD *)&v166[24];
    v148 = *(_OWORD *)&v166[8];
    if ( *(_QWORD *)v166 != -1 )
    {
      *(_QWORD *)v182 = *(_QWORD *)v166;
      *(_QWORD *)&v182[72] = v152;
      *(_OWORD *)&v182[56] = v151;
      *(_OWORD *)&v182[40] = v150;
      *(_OWORD *)&v182[24] = v149;
      *(_OWORD *)&v182[8] = v148;
      v40 = (__int64)v175;
      if ( v175 == v173 )
        sub_141689180(&v173);
      v41 = v174;
      v42 = 80 * v40;
      *(_OWORD *)(v174 + v42 + 64) = *(_OWORD *)&v182[64];
      v43 = *(_OWORD *)v182;
      v44 = *(_OWORD *)&v182[16];
      v45 = *(_OWORD *)&v182[32];
      *(_OWORD *)(v41 + v42 + 48) = *(_OWORD *)&v182[48];
      *(_OWORD *)(v41 + v42 + 32) = v45;
      *(_OWORD *)(v41 + v42 + 16) = v44;
      *(_OWORD *)(v41 + v42) = v43;
      v175 = (void *)(v40 + 1);
    }
    v127 = *(_OWORD *)(j + 8);
    *(_QWORD *)&v168 = v38;
    *((_QWORD *)&v168 + 1) = v39;
    *(_QWORD *)&v170 = v145;
    *((_QWORD *)&v170 + 1) = v144;
    v176.m512i_i64[0] = (__int64)&v127;
    v176.m512i_i64[1] = (__int64)&unk_14175B0F8;
    v176.m512i_i64[2] = (__int64)&v168;
    v176.m512i_i64[3] = (__int64)&unk_14175B0F8;
    v176.m512i_i64[4] = (__int64)&v170;
    v176.m512i_i64[5] = (__int64)&unk_14175B150;
    v191 = 1;
    v190 = 1;
    sub_140429E20((unsigned int)v182, (unsigned int)&v159, (unsigned int)aUpdateThreadsS_1, 64, (__int64)&v176, 3);
    if ( *(_QWORD *)v182 != -1 )
    {
      *(_OWORD *)&v166[48] = *(_OWORD *)&v182[48];
      *(_OWORD *)&v166[32] = *(_OWORD *)&v182[32];
      *(_OWORD *)&v166[16] = *(_OWORD *)&v182[16];
      *(_OWORD *)v166 = *(_OWORD *)v182;
      if ( ((v182[36] < 0xEu) & __OFSUB__(-*(_QWORD *)v182, 1)) != 0 )
        v53 = 0x3158u >> v182[36];
      else
        v53 = 0;
      if ( (unsigned __int64)v159 >= 0x7FFFFFFFFFFFFFFFLL )
        sub_1416C2FC0(&off_141758678);
      *(_QWORD *)&v159 = v159 + 1;
      v54 = sub_1414BC9F0(v160);
      *(_QWORD *)&v159 = v159 - 1;
      if ( !v54 )
      {
        sub_140FB96B0(v182, &v159, aRollback_0, 8);
        if ( *(_QWORD *)v182 != -1 )
          sub_14043D020(v182);
      }
      *(_QWORD *)&v170 = j;
      *((_QWORD *)&v170 + 1) = sub_1400015F0;
      v171 = (unsigned __int128 *)v166;
      v172 = sub_140FB8910;
      sub_14149C0F0(&v115, &unk_14175CDCB, &v170);
      v176.m512i_i64[3] = v116;
      *(_OWORD *)&v176.m512i_u64[1] = v115;
      v176.m512i_i64[0] = 10;
      LOBYTE(v53) = v53 & 1;
      sub_1404B9C20((unsigned int)v182, (unsigned int)&v176, v53, v174, (__int64)v175);
      v12 = *(_OWORD *)&v182[8];
      v15 = *(_QWORD *)v182;
      v13 = *(_QWORD *)&v182[24];
      v147 = *(__m512i *)&v182[32];
      v31 = v183;
      *(_DWORD *)((char *)v179 + 3) = *(_DWORD *)&v184[3];
      v179[0] = *(_DWORD *)v184;
      v191 = 0;
      v190 = 1;
      sub_14043D020(v166);
      goto LABEL_83;
    }
    if ( !*(_QWORD *)&v182[8] && *(_QWORD *)off_141EC8D80 >= 3u )
    {
      v176.m512i_i64[0] = (__int64)&v127;
      v176.m512i_i64[1] = (__int64)sub_14041F680;
      *(_QWORD *)v182 = 0;
      *(_QWORD *)&v182[8] = aCodexmateLibCo_0;
      *(_OWORD *)&v182[16] = 0x33u;
      *(_QWORD *)&v182[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v182[40] = 41;
      *(_QWORD *)&v182[48] = 3;
      *(_QWORD *)&v182[56] = aCodexmateLibCo_0;
      *(_QWORD *)&v182[64] = 51;
      *(_QWORD *)&v182[72] = 0xC2E00000001LL;
      *(_QWORD *)&v182[80] = &unk_14175B1B0;
      *(_QWORD *)&v182[88] = &v176;
      v191 = 1;
      v190 = 1;
      sub_1412C36A0(&v188, v182);
    }
    v136 = ++v34;
  }
  v169 = *(_QWORD *)&v166[24];
  v168 = *(_OWORD *)&v166[8];
  if ( (unsigned __int64)v159 >= 0x7FFFFFFFFFFFFFFFLL )
    sub_1416C2FC0(&off_141758678);
  *(_QWORD *)&v159 = v159 + 1;
  v52 = sub_1414BC9F0(v160);
  *(_QWORD *)&v159 = v159 - 1;
  if ( !v52 )
  {
    sub_140FB96B0(v182, &v159, aRollback_0, 8);
    if ( *(_QWORD *)v182 != -1 )
      sub_14043D020(v182);
  }
  *(_QWORD *)&v170 = j;
  *((_QWORD *)&v170 + 1) = sub_1400015F0;
  v171 = &v168;
  v172 = sub_1400015F0;
  sub_14149C0F0(&v117, &unk_14175CDF6, &v170);
  v176.m512i_i64[3] = v118;
  *(_OWORD *)&v176.m512i_u64[1] = v117;
  v176.m512i_i64[0] = 10;
  sub_1404B9C20((unsigned int)v182, (unsigned int)&v176, 0, v174, (__int64)v175);
  v12 = *(_OWORD *)&v182[8];
  v15 = *(_QWORD *)v182;
  v13 = *(_QWORD *)&v182[24];
  v147 = *(__m512i *)&v182[32];
  v31 = v183;
  v179[0] = *(_DWORD *)v184;
  *(_DWORD *)((char *)v179 + 3) = *(_DWORD *)&v184[3];
  if ( (_QWORD)v168 )
    sub_140001660(*((_QWORD *)&v168 + 1), v168, 1);
LABEL_83:
  v55 = (__int64)v175;
  if ( v175 )
  {
    v56 = (_QWORD *)(v174 + 64);
    do
    {
      v57 = *(v56 - 8);
      if ( v57 )
        sub_140001660(*(v56 - 7), v57, 1);
      v58 = *(v56 - 4);
      if ( v58 )
        sub_140001660(*(v56 - 3), v58, 1);
      v59 = *(v56 - 1);
      if ( v59 )
        sub_140001660(*v56, v59, 1);
      v56 += 10;
      --v55;
    }
    while ( v55 );
  }
  if ( v173 )
    sub_140001660(v174, 80LL * (_QWORD)v173, 8);
LABEL_94:
  v32 = v31;
  v21 = (unsigned int)v12 >> 8;
  v20 = (unsigned __int64)v12 >> 16;
LABEL_95:
  v158 = v134;
  sub_1402C98B0(v134, v139);
  if ( v133 )
    sub_140001660(v158, 104 * v133, 8);
  sub_14043C900(&v159);
  if ( v15 == -1 )
    goto LABEL_104;
  if ( (v32 & 1) == 0 )
    goto LABEL_108;
LABEL_34:
  *(_QWORD *)v182 = v15;
  *(_QWORD *)&v182[8] = (v20 << 16) | ((unsigned __int8)v21 << 8) | (unsigned __int8)v12;
  *(_QWORD *)&v182[16] = *((_QWORD *)&v12 + 1);
  *(_QWORD *)&v182[24] = v13;
  *(__m512i *)&v182[32] = v147;
  v183 = 1;
  *(_DWORD *)&v184[3] = *(_DWORD *)((char *)v179 + 3);
  *(_DWORD *)v184 = v179[0];
  if ( v129 != 3 )
  {
    v22 = (char *)&unk_14175C050 + 16 * v129;
    if ( *(_QWORD *)off_141EC8D80 <= 1u )
    {
      v25 = *(_QWORD *)v22;
      v26 = *((_DWORD *)v22 + 2);
    }
    else
    {
      v23 = (_QWORD *)((char *)&unk_14175C050 + 16 * v129);
      sub_1404A33D0(v166, v187, v180);
      v24 = v23;
      v25 = *v23;
      v26 = *((_DWORD *)v24 + 2);
      v148 = 0x3E8 * (unsigned __int128)v25 + v26 / 0xF4240uLL;
      v176.m512i_i64[0] = (__int64)v166;
      v176.m512i_i64[1] = (__int64)sub_1400015F0;
      v176.m512i_i64[2] = (__int64)&v128;
      v176.m512i_i64[3] = (__int64)sub_1414AC520;
      v176.m512i_i64[4] = (__int64)&v137;
      v176.m512i_i64[5] = (__int64)sub_1414AC520;
      v176.m512i_i64[6] = (__int64)v182;
      v176.m512i_i64[7] = (__int64)sub_140B036A0;
      v177 = &v148;
      v178 = sub_1414A9600;
      *(_QWORD *)&v159 = 0;
      *((_QWORD *)&v159 + 1) = aCodexmateLibCo_0;
      v160 = 0x33u;
      v161.m512i_i64[0] = (__int64)aSrcCoreRelayCo_0;
      v161.m512i_i64[1] = 41;
      v161.m512i_i64[2] = 2;
      v161.m512i_i64[3] = (__int64)aCodexmateLibCo_0;
      v161.m512i_i64[4] = 51;
      v161.m512i_i64[5] = 0xA6700000001LL;
      v161.m512i_i64[6] = (__int64)&unk_14175C6BD;
      v161.m512i_i64[7] = (__int64)&v176;
      sub_1412C36A0(&v188, &v159);
      if ( *(_QWORD *)v166 )
        sub_140001660(*(_QWORD *)&v166[8], *(_QWORD *)v166, 1);
    }
    sub_141487490(v25, v26);
    sub_14043E650(v182);
    v14 = v130;
    if ( v130 >= 4 )
      sub_1416C32C0(
        "internal error: entered unreachable code: model fallback retry loop always returns",
        165,
        &off_14175C660);
    goto LABEL_25;
  }
  sub_1404A33D0(&v176, v187, v180);
  *(_QWORD *)&v159 = &v176;
  *((_QWORD *)&v159 + 1) = sub_1400015F0;
  *(_QWORD *)&v160 = &v137;
  *((_QWORD *)&v160 + 1) = sub_1414AC520;
  v161.m512i_i64[0] = (__int64)v182;
  v161.m512i_i64[1] = (__int64)sub_140B036A0;
  sub_14149C0F0(&v124, &unk_14175C678, &v159);
  if ( v176.m512i_i64[0] )
    sub_140001660(v176.m512i_i64[1], v176.m512i_i64[0], 1);
  v12 = v124;
  v13 = v125;
  sub_14043E650(v182);
  v15 = 10;
LABEL_112:
  v62 = v157;
  *v157 = v15;
  *(_OWORD *)(v62 + 1) = v12;
  v62[3] = v13;
  v63 = *(_OWORD *)&v119.m512i_u64[2];
  v64 = *(_OWORD *)&v119.m512i_u64[4];
  v65 = *(_OWORD *)&v119.m512i_u64[6];
  *((_OWORD *)v62 + 2) = *(_OWORD *)v119.m512i_i8;
  *((_OWORD *)v62 + 3) = v63;
  *((_OWORD *)v62 + 4) = v64;
  *((_OWORD *)v62 + 5) = v65;
  if ( v142 )
    sub_140001660(v187, v142, 1);
  v66 = v140;
  v67 = v156;
  if ( (__int64 *)v143 != v141 )
  {
    v181 >>= 5;
    do
    {
      v68 = *(v67 - 1);
      if ( v68 )
      {
        sub_140001660(*v67, v68, 1);
        v66 = v140;
      }
      v67 += 4;
      --v181;
    }
    while ( v181 );
  }
  if ( v66 )
    sub_140001660(v138, 32 * v66, 8);
  v69 = v154;
  v70 = v155;
  if ( v155 )
  {
    v71 = (_QWORD *)(v154 + 32);
    do
    {
      v72 = *(v71 - 4);
      if ( v72 )
        sub_140001660(*(v71 - 3), v72, 1);
      v73 = *(v71 - 1);
      if ( v73 )
        sub_140001660(*v71, v73, 1);
      v71 += 6;
      --v70;
    }
    while ( v70 );
  }
LABEL_158:
  if ( v153 )
    sub_140001660(v69, 48 * v153, 8);
  return v157;
}
