// module: codexmate_lib/core/relay/router_transition
// addr: 0x14054f750
// name: reconcile_router_on
// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::router_reconciler::reconcile_router_on | 跨平台字符串签名匹配(名↔函数一致)
__int128 *__fastcall reconcile_router_on(
        __int128 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _OWORD *v13; // rcx
  __int64 v14; // r12
  int v15; // edx
  int v16; // r13d
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdi
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edx
  void *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int128 v37; // kr20_16
  __int128 v38; // kr30_16
  __int128 v39; // xmm0
  int v40; // r12d
  int v41; // edx
  int v42; // r13d
  __int64 v43; // rcx
  char v44; // al
  char v45; // di
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  int v54; // r12d
  int v55; // edx
  int v56; // r13d
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm2
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm2
  __int128 v72; // xmm3
  __int64 v73; // r15
  unsigned int v74; // edx
  unsigned int v75; // r12d
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r15
  unsigned int v80; // edx
  unsigned int v81; // r12d
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rdx
  int v85; // r14d
  int v86; // edx
  int v87; // r15d
  __int128 v88; // xmm1
  __int64 v89; // rax
  char v90; // di
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm2
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  int v97; // r15d
  int v98; // edx
  int v99; // r12d
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rbx
  unsigned int v104; // edx
  unsigned int v105; // r14d
  __int64 v106; // rax
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  __int128 v109; // xmm2
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  __int128 v112; // xmm2
  void *v113; // rax
  char v114; // al
  __int64 v115; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int128 v116; // [rsp+40h] [rbp-40h]
  __int128 v117; // [rsp+50h] [rbp-30h]
  __int128 v118; // [rsp+60h] [rbp-20h]
  __int128 v119; // [rsp+70h] [rbp-10h]
  __int128 v120; // [rsp+80h] [rbp+0h]
  __int128 v121; // [rsp+90h] [rbp+10h]
  __int128 v122; // [rsp+A0h] [rbp+20h]
  _BYTE v123[24]; // [rsp+B0h] [rbp+30h] BYREF
  _BYTE v124[24]; // [rsp+C8h] [rbp+48h] BYREF
  _BYTE v125[24]; // [rsp+E0h] [rbp+60h] BYREF
  _BYTE v126[24]; // [rsp+F8h] [rbp+78h] BYREF
  _BYTE v127[24]; // [rsp+110h] [rbp+90h] BYREF
  _BYTE v128[24]; // [rsp+128h] [rbp+A8h] BYREF
  _BYTE v129[24]; // [rsp+140h] [rbp+C0h] BYREF
  _BYTE v130[24]; // [rsp+158h] [rbp+D8h] BYREF
  _BYTE v131[24]; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v132; // [rsp+188h] [rbp+108h] BYREF
  __int64 v133; // [rsp+198h] [rbp+118h]
  __int128 v134; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v135; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v136; // [rsp+1C0h] [rbp+140h]
  __int128 v137; // [rsp+1D0h] [rbp+150h]
  __int128 v138; // [rsp+1E0h] [rbp+160h]
  __int128 v139; // [rsp+1F0h] [rbp+170h]
  unsigned __int128 v140; // [rsp+200h] [rbp+180h] BYREF
  __int128 v141; // [rsp+210h] [rbp+190h]
  __int128 v142; // [rsp+220h] [rbp+1A0h]
  __int128 v143; // [rsp+230h] [rbp+1B0h]
  __int128 v144; // [rsp+240h] [rbp+1C0h]
  __int128 v145; // [rsp+250h] [rbp+1D0h]
  __int64 v146; // [rsp+268h] [rbp+1E8h]
  _BYTE v147[104]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v148; // [rsp+2D8h] [rbp+258h]
  __int128 v149; // [rsp+2E8h] [rbp+268h]
  __int128 v150; // [rsp+2F8h] [rbp+278h]
  __int128 v151; // [rsp+308h] [rbp+288h]
  __int128 v152; // [rsp+318h] [rbp+298h]
  __int128 v153; // [rsp+328h] [rbp+2A8h]
  __m128i v154; // [rsp+338h] [rbp+2B8h] BYREF
  __int64 v155; // [rsp+348h] [rbp+2C8h] BYREF
  __int64 v156; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v157; // [rsp+358h] [rbp+2D8h] BYREF
  __int64 v158; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v159; // [rsp+368h] [rbp+2E8h] BYREF
  __int64 v160; // [rsp+378h] [rbp+2F8h]
  _BYTE v161[104]; // [rsp+380h] [rbp+300h] BYREF
  __int128 v162; // [rsp+3E8h] [rbp+368h]
  __int128 v163; // [rsp+3F8h] [rbp+378h]
  __int128 v164; // [rsp+408h] [rbp+388h]
  _OWORD v165[2]; // [rsp+418h] [rbp+398h] BYREF
  __int128 v166; // [rsp+438h] [rbp+3B8h] BYREF
  char v167; // [rsp+448h] [rbp+3C8h] BYREF
  __int64 v168; // [rsp+470h] [rbp+3F0h]
  __int64 v169; // [rsp+478h] [rbp+3F8h]
  unsigned __int128 v170; // [rsp+480h] [rbp+400h] BYREF
  __int128 v171; // [rsp+490h] [rbp+410h]
  __int128 v172; // [rsp+4A0h] [rbp+420h]
  __int128 v173; // [rsp+4B0h] [rbp+430h]
  __int128 v174; // [rsp+4C0h] [rbp+440h]
  __int128 v175; // [rsp+4D0h] [rbp+450h]
  __int64 v176; // [rsp+4E0h] [rbp+460h]
  __int128 v177; // [rsp+4E8h] [rbp+468h] BYREF
  __int64 v178; // [rsp+4F8h] [rbp+478h]
  _BYTE v179[104]; // [rsp+500h] [rbp+480h] BYREF
  __int128 v180; // [rsp+568h] [rbp+4E8h] BYREF
  __int64 v181; // [rsp+578h] [rbp+4F8h]
  __int64 v182; // [rsp+580h] [rbp+500h]
  char v183; // [rsp+58Ch] [rbp+50Ch] BYREF
  char v184; // [rsp+58Dh] [rbp+50Dh] BYREF
  char v185; // [rsp+58Eh] [rbp+50Eh]
  char v186; // [rsp+58Fh] [rbp+50Fh] BYREF
  __int64 v187; // [rsp+590h] [rbp+510h]

  v187 = -2;
  v181 = a2;
  v134 = a5;
  nullsub_1(a1);
  v10 = sub_140001650(24, 8);
  if ( !v10 )
    sub_1416C2D31(8, 24);
  v182 = v10;
  *(_QWORD *)v161 = &v134;
  *(_QWORD *)&v161[8] = sub_14041F680;
  sub_14149C0F0(&v132, &unk_141760699, v161);
  v13 = (_OWORD *)v182;
  *(_QWORD *)(v182 + 16) = v133;
  *v13 = v132;
  *(_QWORD *)&v177 = 1;
  *((_QWORD *)&v177 + 1) = v13;
  v178 = 1;
  *(_QWORD *)&v159 = 0;
  *((_QWORD *)&v159 + 1) = 8;
  v160 = 0;
  if ( a6 )
    (*(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32))(a6, aStartingProxy, 14);
  v14 = sub_141471910(v13, v11, v12);
  v16 = v15;
  ensure_proxy_started(v161, (volatile signed __int64 **)a3);
  if ( *(_DWORD *)v161 != -1 )
  {
    a1[5] = *(_OWORD *)&v161[80];
    a1[4] = *(_OWORD *)&v161[64];
    v17 = *(_OWORD *)v161;
    v18 = *(_OWORD *)&v161[16];
    v19 = *(_OWORD *)&v161[32];
    a1[3] = *(_OWORD *)&v161[48];
    a1[2] = v19;
    a1[1] = v18;
    *a1 = v17;
    goto LABEL_6;
  }
  sub_140846450(v161, *(_QWORD *)(a3 + 24));
  if ( *(_QWORD *)v161 != -1 )
  {
    v176 = *(_QWORD *)&v161[8];
    v182 = *(_QWORD *)v161;
    v146 = *(_QWORD *)&v161[16];
    v154.m128i_i8[0] = 0;
    *(_QWORD *)&v135 = aProxyStarted;
    *((_QWORD *)&v135 + 1) = 13;
    *(_QWORD *)&v140 = v14;
    DWORD2(v140) = v16;
    v31 = sub_141471AC0(&v140);
    v170 = 0x3E8 * (unsigned __int128)(unsigned __int64)v31 + v32 / 0xF4240uLL;
    *(_QWORD *)v179 = aProxyRootPrese;
    *(_QWORD *)&v179[8] = 23;
    *(_QWORD *)v161 = &v154;
    *(_QWORD *)&v161[8] = sub_14057ADC0;
    *(_QWORD *)&v161[16] = &v135;
    *(_QWORD *)&v161[24] = sub_14041F680;
    *(_QWORD *)&v161[32] = &v170;
    *(_QWORD *)&v161[40] = sub_1414A9600;
    *(_QWORD *)&v161[48] = v179;
    *(_QWORD *)&v161[56] = sub_14041F680;
    sub_14149C0F0(v147, &unk_141760658, v161);
    sub_1403565C0((unsigned int)aRouterTransiti_0, 17, (unsigned int)aPhaseTiming, 12, (__int64)v147);
    sub_1403FD520(v161);
    if ( *(_QWORD *)v161 != -1 )
    {
      *(_OWORD *)&v147[80] = *(_OWORD *)&v161[80];
      *(_OWORD *)&v147[64] = *(_OWORD *)&v161[64];
      *(_OWORD *)&v147[48] = *(_OWORD *)&v161[48];
      *(_OWORD *)&v147[32] = *(_OWORD *)&v161[32];
      *(_OWORD *)v147 = *(_OWORD *)v161;
      *(_OWORD *)&v147[16] = *(_OWORD *)&v161[16];
LABEL_28:
      a1[5] = *(_OWORD *)&v147[80];
      a1[4] = *(_OWORD *)&v147[64];
      v37 = *(_OWORD *)v147;
      v38 = *(_OWORD *)&v147[16];
      v39 = *(_OWORD *)&v147[32];
      a1[3] = *(_OWORD *)&v147[48];
      a1[2] = v39;
      a1[1] = v38;
      *a1 = v37;
      goto LABEL_29;
    }
    *(_QWORD *)v179 = *(_QWORD *)&v161[16];
    *(_QWORD *)&v179[8] = *(_QWORD *)&v161[16];
    *(_QWORD *)&v179[16] = *(_QWORD *)&v161[8];
    *(_QWORD *)&v179[24] = *(_QWORD *)&v161[16] + 32LL * *(_QWORD *)&v161[24];
    sub_1402CAFB0(&v170, v179);
    sub_1403FCD20(v147, &v170);
    if ( *(_DWORD *)v147 != -1 )
      goto LABEL_28;
    if ( a6 )
      (*(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32))(a6, aPreparingAuth, 14);
    v40 = sub_141471910(v35, v34, v36);
    v42 = v41;
    sub_1404944B0(v161, v181, *(unsigned __int8 *)(a4 + 48));
    v43 = *(_QWORD *)v161;
    v44 = v161[8];
    if ( *(_QWORD *)v161 != -1 )
      goto LABEL_42;
    v186 = v161[8];
    *(_QWORD *)v161 = &v186;
    *(_QWORD *)&v161[8] = sub_1414AC660;
    sub_14149C0F0(v128, &unk_141760704, v161);
    sub_14054F5E0(0, (unsigned int)aAuthReady, 10, v40, v42, (__int64)v128);
    v45 = v186;
    nullsub_1(v46);
    if ( v45 )
    {
      v47 = sub_140001650(36, 1);
      if ( !v47 )
        sub_1416C2D4B(1, 36);
      v168 = 36;
      *(_OWORD *)(v47 + 16) = xmmword_141760753;
      *(_OWORD *)v47 = xmmword_141760743;
      v169 = v47;
      *(_DWORD *)(v47 + 32) = -1466636369;
    }
    else
    {
      v48 = sub_140001650(37, 1);
      if ( !v48 )
        sub_1416C2D4B(1, 37);
      v168 = 37;
      *(_OWORD *)(v48 + 16) = xmmword_14176072E;
      *(_OWORD *)v48 = xmmword_14176071E;
      v169 = v48;
      *(_QWORD *)(v48 + 29) = 0xA894E7AF8FE58180uLL;
    }
    v49 = v178;
    if ( v178 == (_QWORD)v177 )
      sub_141689AB0(&v177);
    v50 = *((_QWORD *)&v177 + 1);
    v51 = 3 * v49;
    v52 = v168;
    *(_QWORD *)(*((_QWORD *)&v177 + 1) + 8 * v51) = v168;
    v53 = v169;
    *(_QWORD *)(v50 + 8 * v51 + 8) = v169;
    *(_QWORD *)(v50 + 8 * v51 + 16) = v52;
    v178 = v49 + 1;
    v54 = sub_141471910(3 * v49, v52, v53);
    v56 = v55;
    sub_140763A50((__int64)v161, v181);
    v43 = *(_QWORD *)v161;
    v44 = v161[8];
    if ( *(_QWORD *)v161 != -1 )
    {
LABEL_42:
      *((_QWORD *)a1 + 11) = *(_QWORD *)&v161[88];
      *(__int128 *)((char *)a1 + 73) = *(_OWORD *)&v161[73];
      v57 = *(_OWORD *)&v161[9];
      v58 = *(_OWORD *)&v161[25];
      v59 = *(_OWORD *)&v161[41];
      *(__int128 *)((char *)a1 + 57) = *(_OWORD *)&v161[57];
      *(__int128 *)((char *)a1 + 41) = v59;
      *(__int128 *)((char *)a1 + 25) = v58;
      *(__int128 *)((char *)a1 + 9) = v57;
      *(_QWORD *)a1 = v43;
      *((_BYTE *)a1 + 8) = v44;
      goto LABEL_29;
    }
    v184 = v161[8];
    if ( (v161[8] & 1) != 0 )
    {
      nullsub_1(-1);
      v60 = sub_140001650(37, 1);
      if ( !v60 )
        sub_1416C2D4B(1, 37);
      *(_OWORD *)(v60 + 16) = xmmword_141760777;
      *(_OWORD *)v60 = xmmword_141760767;
      *(_QWORD *)(v60 + 29) = 0x98A2E9AE97E982B1uLL;
      *(_QWORD *)v161 = 37;
      *(_QWORD *)&v161[8] = v60;
      *(_QWORD *)&v161[16] = 37;
      sub_1403B1EC0(&v177, v161);
    }
    sub_140419AA0(v161, v181);
    v61 = *(_QWORD *)v161;
    *(_OWORD *)v147 = *(_OWORD *)&v161[8];
    *(_OWORD *)&v147[16] = *(_OWORD *)&v161[24];
    *(_OWORD *)&v147[32] = *(_OWORD *)&v161[40];
    *(_OWORD *)&v147[48] = *(_OWORD *)&v161[56];
    *(_OWORD *)&v147[64] = *(_OWORD *)&v161[72];
    if ( *(_QWORD *)v161 != -1 )
    {
      v62 = *(_QWORD *)&v161[88];
      *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v147[64];
      v63 = *(_OWORD *)v147;
      v64 = *(_OWORD *)&v147[16];
      v65 = *(_OWORD *)&v147[32];
      *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v147[48];
      *(__int128 *)((char *)a1 + 40) = v65;
      *(__int128 *)((char *)a1 + 24) = v64;
      *(__int128 *)((char *)a1 + 8) = v63;
      *(_QWORD *)a1 = v61;
      *((_QWORD *)a1 + 11) = v62;
      goto LABEL_29;
    }
    v139 = *(_OWORD *)&v147[64];
    v135 = *(_OWORD *)v147;
    v136 = *(_OWORD *)&v147[16];
    v137 = *(_OWORD *)&v147[32];
    v138 = *(_OWORD *)&v147[48];
    if ( *(_QWORD *)&v147[64] )
    {
      sub_140440300((unsigned int)v161, DWORD2(v138), *(_DWORD *)&v147[64], (unsigned int)&unk_14176078C, 3);
      *(_QWORD *)&v147[16] = *(_QWORD *)&v161[16];
      *(_OWORD *)v147 = *(_OWORD *)v161;
      *(_QWORD *)v161 = v147;
      *(_QWORD *)&v161[8] = sub_1400015F0;
      sub_14149C0F0(v131, &unk_14176078F, v161);
      if ( *(_QWORD *)v147 )
        sub_140001660(*(_QWORD *)&v147[8], *(_QWORD *)v147, 1);
      sub_1403B1EC0(&v159, v131);
    }
    v158 = v136;
    v157 = *((_QWORD *)&v137 + 1);
    if ( (unsigned __int64)v136 | *((_QWORD *)&v137 + 1) )
    {
      *(_QWORD *)v161 = &v158;
      *(_QWORD *)&v161[8] = sub_1414AC520;
      *(_QWORD *)&v161[16] = &v157;
      *(_QWORD *)&v161[24] = sub_1414AC520;
      sub_14149C0F0(v130, &unk_141760808, v161);
      sub_1403B1EC0(&v177, v130);
    }
    *(_QWORD *)v161 = &v184;
    *(_QWORD *)&v161[8] = sub_1414AC660;
    *(_QWORD *)&v161[16] = &v158;
    *(_QWORD *)&v161[24] = sub_1414AC520;
    *(_QWORD *)&v161[32] = &v157;
    *(_QWORD *)&v161[40] = sub_1414AC520;
    sub_14149C0F0(v127, &unk_141760839, v161);
    sub_14054F5E0(0, (unsigned int)aConfigTakeover, 15, v54, v56, (__int64)v127);
    sub_1403FEAF0(v161);
    if ( *(_DWORD *)v161 != -1 )
    {
      a1[5] = *(_OWORD *)&v161[80];
      a1[4] = *(_OWORD *)&v161[64];
      v69 = *(_OWORD *)v161;
      v70 = *(_OWORD *)&v161[16];
      v71 = *(_OWORD *)&v161[32];
      v72 = *(_OWORD *)&v161[48];
LABEL_59:
      a1[3] = v72;
      a1[2] = v71;
      a1[1] = v70;
      *a1 = v69;
LABEL_60:
      sub_14052E730(&v135);
LABEL_29:
      if ( v182 )
        sub_140001660(v176, v182, 1);
      goto LABEL_6;
    }
    v73 = sub_141471910(v67, v66, v68);
    v75 = v74;
    *((_QWORD *)&v171 + 1) = aAimai1_0;
    *(_QWORD *)&v172 = 6;
    BYTE8(v172) = 0;
    *(_QWORD *)&v170 = -1;
    reconcile_threads(v161, v181, &v170);
    *(_OWORD *)v179 = *(_OWORD *)&v161[8];
    *(_OWORD *)&v179[16] = *(_OWORD *)&v161[24];
    *(_OWORD *)&v179[32] = *(_OWORD *)&v161[40];
    *(_OWORD *)&v179[48] = *(_OWORD *)&v161[56];
    *(_OWORD *)&v179[64] = *(_OWORD *)&v161[72];
    *(_OWORD *)&v179[80] = *(_OWORD *)&v161[88];
    if ( *(_QWORD *)v161 == 2 )
    {
      a1[5] = *(_OWORD *)&v179[80];
      a1[4] = *(_OWORD *)&v179[64];
      v69 = *(_OWORD *)v179;
      v70 = *(_OWORD *)&v179[16];
      v71 = *(_OWORD *)&v179[32];
      v72 = *(_OWORD *)&v179[48];
      goto LABEL_59;
    }
    v153 = v166;
    v152 = v165[1];
    v151 = v165[0];
    v150 = v164;
    v149 = v163;
    v148 = v162;
    *(_OWORD *)&v147[8] = *(_OWORD *)v179;
    *(_OWORD *)&v147[24] = *(_OWORD *)&v179[16];
    *(_OWORD *)&v147[40] = *(_OWORD *)&v179[32];
    *(_OWORD *)&v147[56] = *(_OWORD *)&v179[48];
    *(_OWORD *)&v147[72] = *(_OWORD *)&v179[64];
    *(_OWORD *)&v147[88] = *(_OWORD *)&v179[80];
    *(_QWORD *)v147 = *(_QWORD *)v161;
    record_model_catalog_summary(0, v73, v75, v147);
    sub_140578A20(v179, aRouteron, 8, v147);
    *(_QWORD *)v161 = *(_QWORD *)&v179[8];
    *(_QWORD *)&v161[8] = *(_QWORD *)&v179[8];
    *(_QWORD *)&v161[16] = *(_QWORD *)v179;
    *(_QWORD *)&v161[24] = *(_QWORD *)&v179[8] + 24LL * *(_QWORD *)&v179[16];
    sub_140322D70(&v177, v161);
    v79 = sub_141471910(v77, v76, v78);
    v81 = v80;
    sub_1404A1A50(v161, v181);
    stability_issue(v179, v161);
    if ( *(_QWORD *)v179 == -1 )
    {
      *(_QWORD *)v179 = (char *)v165 + 8;
      *(_QWORD *)&v179[8] = sub_1414AC520;
      *(_QWORD *)&v179[16] = (char *)&v166 + 8;
      *(_QWORD *)&v179[24] = sub_1414AC520;
      *(_QWORD *)&v179[32] = &v167;
      *(_QWORD *)&v179[40] = sub_1414AC520;
      sub_14149C0F0(v125, &unk_1417608D8, v179);
      sub_14054F5E0(0, (unsigned int)aProjectState, 13, v79, v81, (__int64)v125);
    }
    else
    {
      if ( *(_QWORD *)v179 )
        sub_140001660(*(_QWORD *)&v179[8], *(_QWORD *)v179, 1);
      repair_if_needed(&v115, v181);
      if ( v115 == -1 )
      {
        v175 = v121;
        v174 = v120;
        v173 = v119;
        v172 = v118;
        v171 = v117;
        v170 = v116;
        _u7b__u7b_closure_u7d__u7d__5(&v140, v79, v81, &v170);
        v121 = v145;
        v120 = v144;
        v119 = v143;
        v118 = v142;
        v117 = v141;
        v116 = v140;
        a1[5] = v145;
        a1[4] = v120;
        v110 = v116;
        v111 = v117;
        v112 = v118;
        a1[3] = v119;
        a1[2] = v112;
        a1[1] = v111;
        *a1 = v110;
LABEL_82:
        sub_14043F000(v161);
        sub_14052E870(v147);
        goto LABEL_60;
      }
      v180 = v122;
      *(_OWORD *)&v179[8] = v116;
      *(_OWORD *)&v179[24] = v117;
      *(_OWORD *)&v179[40] = v118;
      *(_OWORD *)&v179[56] = v119;
      *(_OWORD *)&v179[72] = v120;
      *(_OWORD *)&v179[88] = v121;
      *(_QWORD *)v179 = v115;
      *(_QWORD *)&v170 = (char *)&v180 + 8;
      *((_QWORD *)&v170 + 1) = sub_1414AC660;
      *(_QWORD *)&v171 = &v179[88];
      *((_QWORD *)&v171 + 1) = sub_1414AC520;
      *(_QWORD *)&v172 = &v179[96];
      *((_QWORD *)&v172 + 1) = sub_1414AC520;
      *(_QWORD *)&v173 = &v180;
      *((_QWORD *)&v173 + 1) = sub_1414AC520;
      v185 = 1;
      sub_14149C0F0(v126, &unk_141760889, &v170);
      v185 = 1;
      sub_14054F5E0(0, (unsigned int)aProjectState, 13, v79, v81, (__int64)v126);
      *(_QWORD *)&v171 = *(_QWORD *)&v179[16];
      v170 = *(_OWORD *)v179;
      v185 = 0;
      sub_1403B1EC0(&v177, &v170);
      if ( *(__int64 *)&v179[24] > 0 )
        sub_140001660(*(_QWORD *)&v179[32], *(_QWORD *)&v179[24], 1);
      v84 = *(_QWORD *)&v179[56];
      if ( *(__int64 *)&v179[56] > 0 )
        sub_140001660(*(_QWORD *)&v179[64], *(_QWORD *)&v179[56], 1);
    }
    if ( a6 )
      (*(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32))(a6, aWritingConfig, 14);
    v85 = sub_141471910(v82, v84, v83);
    v87 = v86;
    v88 = *(_OWORD *)(a4 + 32);
    v170 = *(_OWORD *)(a4 + 8);
    v171 = v88;
    *(_QWORD *)&v172 = v176;
    *((_QWORD *)&v172 + 1) = v146;
    LOBYTE(v173) = 1;
    reconcile((__int64)v179, v181, (__int64 *)&v170);
    v89 = *(_QWORD *)v179;
    v90 = v179[8];
    if ( *(_QWORD *)v179 == -1 )
    {
      v183 = v179[8];
      *(_QWORD *)v179 = &v183;
      *(_QWORD *)&v179[8] = sub_1414AC660;
      sub_14149C0F0(v124, &unk_14176091D, v179);
      sub_14054F5E0(0, (unsigned int)aConfigSync, 11, v85, v87, (__int64)v124);
      if ( (v90 & 1) != 0 )
      {
        v97 = sub_141471910(v95, v94, v96);
        v99 = v98;
        restore_relay_model_threads(&v154, v181);
        *(_QWORD *)v179 = &v154;
        *(_QWORD *)&v179[8] = sub_1414AC520;
        *(_QWORD *)&v179[16] = &v154.m128i_i64[1];
        *(_QWORD *)&v179[24] = sub_1414AC520;
        *(_QWORD *)&v179[32] = &v155;
        *(_QWORD *)&v179[40] = sub_1414AC520;
        *(_QWORD *)&v179[48] = &v156;
        *(_QWORD *)&v179[56] = sub_1414AC520;
        sub_14149C0F0(v123, &unk_14176098A, v179);
        sub_14054F5E0(0, (unsigned int)aModelRestore_0, 13, v97, v99, (__int64)v123);
        if ( v154.m128i_i64[0] | v156 )
        {
          *(_QWORD *)&v170 = v154.m128i_i64[1] + v155;
          *(_QWORD *)v179 = &v154;
          *(_QWORD *)&v179[8] = sub_1414AC520;
          *(_QWORD *)&v179[16] = &v170;
          *(_QWORD *)&v179[24] = sub_1414AC520;
          *(_QWORD *)&v179[32] = &v156;
          *(_QWORD *)&v179[40] = sub_1414AC520;
          sub_14149C0F0(v129, &unk_1417609D3, v179);
          sub_1403B1EC0(&v177, v129);
        }
        v103 = sub_141471910(v101, v100, v102);
        v105 = v104;
        converge_router_thread_models_to_catalog(v179, v181);
        v106 = *(_QWORD *)v179;
        v170 = *(_OWORD *)&v179[8];
        v171 = *(_OWORD *)&v179[24];
        v172 = *(_OWORD *)&v179[40];
        v173 = *(_OWORD *)&v179[56];
        *(_QWORD *)&v174 = *(_QWORD *)&v179[72];
        if ( *(_QWORD *)v179 == -1 )
        {
          v140 = v170;
          v141 = v171;
          v142 = v172;
          v143 = v173;
          *(_QWORD *)&v144 = v174;
          record_model_catalog_summary_0(v103, v105, &v140);
          sub_140578E90(&v170, &v140);
          *(_QWORD *)v179 = *((_QWORD *)&v170 + 1);
          *(_QWORD *)&v179[8] = *((_QWORD *)&v170 + 1);
          *(_QWORD *)&v179[16] = v170;
          *(_QWORD *)&v179[24] = *((_QWORD *)&v170 + 1) + 24 * v171;
          sub_140322D70(&v177, v179);
          *(_QWORD *)&v179[16] = v178;
          *(_OWORD *)v179 = v177;
          *(_QWORD *)&v179[40] = v160;
          *(_OWORD *)&v179[24] = v159;
          v114 = v186;
          *(__int128 *)((char *)a1 + 8) = v177;
          *(__int128 *)((char *)a1 + 24) = *(_OWORD *)&v179[16];
          *(__int128 *)((char *)a1 + 40) = *(_OWORD *)&v179[32];
          *((_BYTE *)a1 + 56) = v114;
          *(_QWORD *)a1 = -1;
          sub_140009B20(&v140);
          sub_14043F000(v161);
          sub_14052E870(v147);
          sub_14052E730(&v135);
          if ( !v182 )
            return a1;
          v28 = 1;
          v26 = v176;
          v27 = v182;
          goto LABEL_20;
        }
        a1[5] = *(_OWORD *)&v179[80];
        *((_QWORD *)a1 + 9) = v174;
        v107 = v170;
        v108 = v171;
        v109 = v172;
        *(__int128 *)((char *)a1 + 56) = v173;
        *(__int128 *)((char *)a1 + 40) = v109;
        *(__int128 *)((char *)a1 + 24) = v108;
        *(__int128 *)((char *)a1 + 8) = v107;
        *(_QWORD *)a1 = v106;
      }
      else
      {
        nullsub_1(v95);
        v113 = (void *)sub_140001650(85, 1);
        if ( !v113 )
          sub_1416C2D4B(1, 85);
        qmemcpy(v113, "router reconcile did not become effective: missing active provider, proxy, or catalog", 85);
        *(_QWORD *)a1 = 10;
        *((_QWORD *)a1 + 1) = 85;
        *((_QWORD *)a1 + 2) = v113;
        *((_QWORD *)a1 + 3) = 85;
      }
    }
    else
    {
      *((_QWORD *)a1 + 11) = *(_QWORD *)&v179[88];
      *(__int128 *)((char *)a1 + 73) = *(_OWORD *)&v179[73];
      v91 = *(_OWORD *)&v179[9];
      v92 = *(_OWORD *)&v179[25];
      v93 = *(_OWORD *)&v179[41];
      *(__int128 *)((char *)a1 + 57) = *(_OWORD *)&v179[57];
      *(__int128 *)((char *)a1 + 41) = v93;
      *(__int128 *)((char *)a1 + 25) = v92;
      *(__int128 *)((char *)a1 + 9) = v91;
      *(_QWORD *)a1 = v89;
      *((_BYTE *)a1 + 8) = v90;
    }
    goto LABEL_82;
  }
  nullsub_1(v30);
  v33 = (void *)sub_140001650(49, 1);
  if ( !v33 )
    sub_1416C2D4B(1, 49);
  qmemcpy(v33, "relay proxy started without an available root URL", 49);
  *(_QWORD *)a1 = 10;
  *((_QWORD *)a1 + 1) = 49;
  *((_QWORD *)a1 + 2) = v33;
  *((_QWORD *)a1 + 3) = 49;
LABEL_6:
  v20 = v160;
  if ( v160 )
  {
    v21 = (_QWORD *)(*((_QWORD *)&v159 + 1) + 8LL);
    do
    {
      v22 = *(v21 - 1);
      if ( v22 )
        sub_140001660(*v21, v22, 1);
      v21 += 3;
      --v20;
    }
    while ( v20 );
  }
  if ( (_QWORD)v159 )
    sub_140001660(*((_QWORD *)&v159 + 1), 24 * v159, 8);
  v23 = v178;
  if ( v178 )
  {
    v24 = (_QWORD *)(*((_QWORD *)&v177 + 1) + 8LL);
    do
    {
      v25 = *(v24 - 1);
      if ( v25 )
        sub_140001660(*v24, v25, 1);
      v24 += 3;
      --v23;
    }
    while ( v23 );
  }
  if ( (_QWORD)v177 )
  {
    v26 = *((_QWORD *)&v177 + 1);
    v27 = 24 * v177;
    v28 = 8;
LABEL_20:
    sub_140001660(v26, v27, v28);
  }
  return a1;
}