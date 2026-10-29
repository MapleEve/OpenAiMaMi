// win 1.2.7 | module src/core/repository.rs | ea 0x1401d3ff0 | name sub_1401D3FF0
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401D3FF0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // xmm6_8
  __int64 v3; // xmm7_8
  __m128 v4; // xmm8
  __m128 v5; // xmm9
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r12
  unsigned __int64 v17; // rsi
  __int128 v18; // kr00_16
  __int64 v19; // rdi
  __int64 v20; // rdi
  void *v21; // rbx
  __int64 v22; // rdi
  void *v23; // rbx
  __int64 v24; // rsi
  void *v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // r14
  unsigned __int128 v35; // kr30_16
  __int64 v36; // rbx
  void *v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r13
  _QWORD *v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  void *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __m128i v49; // xmm0
  __int128 v50; // xmm1
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // r15
  __int64 v65; // r12
  __int64 v66; // r13
  __int64 v67; // rdi
  __int64 v68; // r14
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 v71; // rax
  int v72; // r9d
  __int64 v73; // r10
  unsigned __int64 v74; // r11
  char v75; // r12
  __int64 v76; // rcx
  __int64 v77; // rdx
  unsigned int v78; // eax
  unsigned int v79; // edx
  __int64 v80; // r8
  unsigned int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rsi
  __int32 v84; // edx
  __int64 v85; // rax
  _QWORD *v86; // r14
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rax
  void *v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rcx
  __m128i v94; // xmm0
  __int128 v95; // xmm1
  __int64 result; // rax
  void *v97; // r15
  __int64 v98; // rcx
  void *v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rcx
  __m128i v103; // xmm0
  __int128 v104; // xmm1
  int v105; // [rsp+30h] [rbp-50h] BYREF
  __m128i v106; // [rsp+38h] [rbp-48h]
  __int128 v107; // [rsp+48h] [rbp-38h]
  __int64 v108; // [rsp+58h] [rbp-28h]
  __int128 v109; // [rsp+90h] [rbp+10h] BYREF
  __int64 v110; // [rsp+A0h] [rbp+20h]
  __int128 v111; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v112; // [rsp+B8h] [rbp+38h]
  __int128 v113; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v114; // [rsp+D0h] [rbp+50h]
  __int64 v115; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v116; // [rsp+E0h] [rbp+60h]
  __int64 v117; // [rsp+E8h] [rbp+68h]
  __int64 v118; // [rsp+F0h] [rbp+70h]
  __int64 v119; // [rsp+F8h] [rbp+78h]
  __m128i v120; // [rsp+100h] [rbp+80h] BYREF
  __int128 v121; // [rsp+110h] [rbp+90h]
  __int128 v122; // [rsp+120h] [rbp+A0h]
  __int128 v123; // [rsp+130h] [rbp+B0h]
  __int128 v124; // [rsp+140h] [rbp+C0h]
  __int128 v125; // [rsp+150h] [rbp+D0h]
  __m128i v126; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v127; // [rsp+1C0h] [rbp+140h]
  __int128 v128; // [rsp+1D0h] [rbp+150h]
  __int128 v129; // [rsp+1E0h] [rbp+160h]
  __int128 v130; // [rsp+1F0h] [rbp+170h]
  __int64 v131; // [rsp+200h] [rbp+180h]
  __int64 v132; // [rsp+208h] [rbp+188h]
  __m128i v133; // [rsp+210h] [rbp+190h] BYREF
  _BYTE v134[80]; // [rsp+220h] [rbp+1A0h]
  __int64 v135; // [rsp+2C8h] [rbp+248h]
  __int64 v136; // [rsp+2D0h] [rbp+250h]
  __int64 v137; // [rsp+2D8h] [rbp+258h]
  __m128i v138; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v139; // [rsp+2F0h] [rbp+270h]
  __int128 v140; // [rsp+300h] [rbp+280h]
  __int128 v141; // [rsp+310h] [rbp+290h]
  __int128 v142; // [rsp+320h] [rbp+2A0h]
  __int64 v143; // [rsp+330h] [rbp+2B0h]
  HANDLE hObject[2]; // [rsp+340h] [rbp+2C0h] BYREF
  char v145; // [rsp+357h] [rbp+2D7h] BYREF
  HANDLE v146; // [rsp+358h] [rbp+2D8h] BYREF
  __int64 v147; // [rsp+360h] [rbp+2E0h]
  __int64 v148; // [rsp+368h] [rbp+2E8h]
  __int64 v149; // [rsp+370h] [rbp+2F0h] BYREF
  _BYTE v150[88]; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v151; // [rsp+3D0h] [rbp+350h]
  __m128i v152; // [rsp+400h] [rbp+380h] BYREF
  __int64 v153; // [rsp+410h] [rbp+390h]
  int v154; // [rsp+418h] [rbp+398h]
  __int64 v155; // [rsp+420h] [rbp+3A0h]
  char v156; // [rsp+428h] [rbp+3A8h]
  __int64 v157; // [rsp+438h] [rbp+3B8h]
  _QWORD *v158; // [rsp+440h] [rbp+3C0h]
  __int128 v159; // [rsp+448h] [rbp+3C8h] BYREF
  __int64 v160; // [rsp+458h] [rbp+3D8h]
  _BYTE v161[96]; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v162; // [rsp+4C8h] [rbp+448h]
  unsigned __int64 v163; // [rsp+4D0h] [rbp+450h]
  HANDLE v164; // [rsp+4D8h] [rbp+458h] BYREF
  __int64 v165; // [rsp+4E0h] [rbp+460h]
  __int64 v166; // [rsp+4E8h] [rbp+468h]
  char v167; // [rsp+4F7h] [rbp+477h]
  __int64 v168; // [rsp+4F8h] [rbp+478h]

  v168 = -2;
  v119 = a1;
  *(_QWORD *)&v159 = 0;
  *((_QWORD *)&v159 + 1) = 8;
  v160 = 0;
  v6 = a2[33];
  v158 = a2;
  v7 = a2[34];
  v136 = v6;
  v137 = v7;
  sub_1416828D0((unsigned int)&v133, v6, v7, (unsigned int)&unk_1419D9830, 26);
  v166 = v133.m128i_i64[1];
  sub_141695A00(&v149, v133.m128i_i64[1], *(_QWORD *)v134);
  if ( (_DWORD)v149 == 2 )
  {
    if ( (v150[0] & 3u) - 2 >= 2 && (v150[0] & 3) != 0 )
    {
      --*(_QWORD *)v150;
      LOBYTE(v149) = 3;
      sub_1416BCB00(v150);
    }
    if ( v133.m128i_i64[0] )
      sub_140001660(v166, v133.m128i_i64[0], 1);
    goto LABEL_11;
  }
  if ( v133.m128i_i64[0] )
    sub_140001660(v166, v133.m128i_i64[0], 1);
  v8 = v158[38];
  v157 = v158[37];
  v148 = v8;
  sub_1401C7E40(&v149, v157, v8);
  if ( (_DWORD)v149 != -1 )
  {
    sub_1401954F0(&v149);
LABEL_11:
    v9 = 8;
    v10 = 0;
    v11 = 0;
    goto LABEL_12;
  }
  *(_QWORD *)&v125 = *(_QWORD *)&v150[80];
  v124 = *(_OWORD *)&v150[64];
  v123 = *(_OWORD *)&v150[48];
  v122 = *(_OWORD *)&v150[32];
  v121 = *(_OWORD *)&v150[16];
  v120 = *(__m128i *)v150;
  sub_1403ED5C0(&v115, *(_QWORD *)&v150[8], *(_QWORD *)&v150[8] + 424LL * *(_QWORD *)&v150[16]);
  v31 = v116;
  v32 = v117;
  v162 = v116 + 32 * v117;
  v147 = v158[41];
  v135 = v158[42];
  v33 = v116;
  v166 = v116;
  if ( v116 != v162 )
  {
    while ( 1 )
    {
      sub_140ED9AE0((unsigned int)&v149, *(_QWORD *)(v33 + 8), *(_QWORD *)(v33 + 16), v147, v135);
      v34 = v149;
      if ( v149 != -1 )
        break;
      v33 = v166 + 32;
      v166 += 32;
      if ( v166 == v162 )
        goto LABEL_65;
    }
    v39 = *(_QWORD *)&v150[8];
    v163 = *(_QWORD *)v150;
    v36 = *(_QWORD *)&v150[16];
    v138 = *(__m128i *)&v150[24];
    v139 = *(_OWORD *)&v150[40];
    v140 = *(_OWORD *)&v150[56];
    v141 = *(_OWORD *)&v150[72];
    if ( v32 )
    {
      v40 = (_QWORD *)(v31 + 8);
      do
      {
        v41 = *(v40 - 1);
        if ( v41 )
          sub_140001660(*v40, v41, 1);
        v40 += 4;
        --v32;
      }
      while ( v32 );
    }
    if ( v115 )
      sub_140001660(v31, 32 * v115, 8);
    v35 = __PAIR128__(v39, v163);
    goto LABEL_196;
  }
LABEL_65:
  sub_140FA5F10(&v149, &v115);
  v34 = v149;
  v35 = *(_OWORD *)v150;
  v36 = *(_QWORD *)&v150[16];
  if ( v149 != -1 )
  {
    v141 = *(_OWORD *)&v150[72];
    v140 = *(_OWORD *)&v150[56];
    v139 = *(_OWORD *)&v150[40];
    v138 = *(__m128i *)&v150[24];
LABEL_196:
    sub_140033D80(&v120);
    v149 = v34;
    *(_OWORD *)v150 = v35;
    *(_QWORD *)&v150[16] = v36;
    *(__m128i *)&v150[24] = v138;
    *(_OWORD *)&v150[40] = v139;
    *(_OWORD *)&v150[56] = v140;
    *(_OWORD *)&v150[72] = v141;
    nullsub_1(v98);
    v99 = (void *)sub_140001650(33, 1);
    if ( !v99 )
      sub_141938D2B(1, 33);
    qmemcpy(v99, "ACCOUNT_REMOVAL_RECOVERY_DEFERRED", 33);
    v166 = (__int64)v99;
    v133.m128i_i64[0] = (__int64)&v149;
    v133.m128i_i64[1] = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v113, &unk_1419DA3F1, &v133);
    v133.m128i_i64[0] = 33;
    v133.m128i_i64[1] = v166;
    *(_QWORD *)v134 = 33;
    *(_OWORD *)&v134[8] = v113;
    *(_QWORD *)&v134[24] = v114;
    v100 = v160;
    if ( v160 == (_QWORD)v159 )
      sub_14190F490(&v159);
    v101 = *((_QWORD *)&v159 + 1);
    v102 = 48 * v100;
    v103 = v133;
    v104 = *(_OWORD *)v134;
    *(_OWORD *)(*((_QWORD *)&v159 + 1) + v102 + 32) = *(_OWORD *)&v134[16];
    *(_OWORD *)(v101 + v102 + 16) = v104;
    *(__m128i *)(v101 + v102) = v103;
    v160 = v100 + 1;
    sub_1401954F0(&v149);
    v13 = v158;
    goto LABEL_18;
  }
  v126 = *(__m128i *)v150;
  *(_QWORD *)&v127 = *(_QWORD *)&v150[16];
  sub_1416828D0(
    (unsigned int)v161,
    v136,
    v137,
    (unsigned int)".account-domain.lockaccount state.account-transition.lockaccount transition",
    20);
  v163 = *(_QWORD *)&v161[8];
  sub_140FE2210(
    (__int64)&v149,
    *(int *)&v161[8],
    *(int *)&v161[16],
    (__int64)"account state.account-transition.lockaccount transition",
    13);
  v34 = v149;
  if ( v149 != -1 )
  {
    v31 = *(_QWORD *)&v150[8];
    v36 = *(_QWORD *)&v150[16];
    v133 = *(__m128i *)&v150[24];
    *(_OWORD *)v134 = *(_OWORD *)&v150[40];
    *(_OWORD *)&v134[16] = *(_OWORD *)&v150[56];
    *(_OWORD *)&v134[32] = *(_OWORD *)&v150[72];
  }
  v97 = *(void **)v150;
  if ( *(_QWORD *)v161 )
    sub_140001660(v163, *(_QWORD *)v161, 1);
  if ( (_DWORD)v34 != -1 )
  {
    v141 = *(_OWORD *)&v134[32];
    v140 = *(_OWORD *)&v134[16];
    v139 = *(_OWORD *)v134;
    v138 = v133;
LABEL_193:
    v165 = *((_QWORD *)&v35 + 1);
    v163 = v35;
    sub_1403FB7C0(&v126);
    if ( v163 )
      sub_140001660(v165, 8 * v163, 8);
    v35 = __PAIR128__(v31, (unsigned __int64)v97);
    goto LABEL_196;
  }
  hObject[0] = v97;
  sub_1401C7E40(&v149, v157, v148);
  v34 = v149;
  v31 = *(_QWORD *)&v150[8];
  v97 = *(void **)v150;
  v36 = *(_QWORD *)&v150[16];
  *(_OWORD *)v161 = *(_OWORD *)&v150[24];
  *(_OWORD *)&v161[16] = *(_OWORD *)&v150[40];
  *(_OWORD *)&v161[32] = *(_OWORD *)&v150[56];
  *(_OWORD *)&v161[48] = *(_OWORD *)&v150[72];
  if ( v149 != -1 )
  {
    v141 = *(_OWORD *)&v161[48];
    v140 = *(_OWORD *)&v161[32];
    v139 = *(_OWORD *)&v161[16];
    v138 = *(__m128i *)v161;
    sub_140195380(hObject);
    goto LABEL_193;
  }
  v133 = *(__m128i *)v150;
  *(_QWORD *)v134 = *(_QWORD *)&v150[16];
  *(_OWORD *)&v134[8] = *(_OWORD *)v161;
  *(_OWORD *)&v134[24] = *(_OWORD *)&v161[16];
  *(_OWORD *)&v134[40] = *(_OWORD *)&v161[32];
  *(_OWORD *)&v134[56] = *(_OWORD *)&v161[48];
  sub_1401EBAC0(&v149, v158, *(_QWORD *)&v150[8], *(_QWORD *)&v150[16]);
  v10 = v149;
  v11 = *(_QWORD *)&v150[8];
  v9 = *(_QWORD *)v150;
  sub_140033D80(&v133);
  sub_140195380(hObject);
  sub_140190810(&v126);
  sub_140033D80(&v120);
LABEL_12:
  v149 = v10;
  *(_QWORD *)v150 = v9;
  *(_QWORD *)&v150[8] = v11;
  v12 = v160;
  if ( v11 > (__int64)v159 - v160 )
  {
    sub_14190D590((unsigned int)&v159, v160, v11, 8, 48);
    v12 = v160;
    goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_14:
    sub_1418F44E0((__m128i *)(*((_QWORD *)&v159 + 1) + 48 * v12), (const __m128i *)v9, 48 * v11);
    v12 = v160;
  }
  v160 = v11 + v12;
  if ( v10 )
    sub_140001660(v9, 48 * v10, 8);
  v13 = v158;
  v147 = v158[41];
  v135 = v158[42];
  v157 = v158[37];
  v14 = v158[38];
  v148 = v14;
LABEL_18:
  v15 = v13[5];
  v16 = v13[6];
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= 3 )
    {
      nullsub_1(v14);
      v37 = (void *)sub_140001650(67, 1);
      if ( !v37 )
        sub_141938D2B(1, 67);
      qmemcpy(v37, "auth.json ownership kept changing while synchronizing account state", 67);
      *(_QWORD *)v161 = 10;
      *(_QWORD *)&v161[8] = 67;
      *(_QWORD *)&v161[16] = v37;
      *(_QWORD *)&v161[24] = 67;
      goto LABEL_110;
    }
    sub_1401DE790(&v149, v15, v16);
    if ( (_DWORD)v149 == 2 )
      goto LABEL_114;
    sub_1418F44E0(&v120, (const __m128i *)&v149, 0xB0u);
    sub_1401DECD0(&v149, v157, v148);
    v138 = *(__m128i *)v150;
    v139 = *(_OWORD *)&v150[16];
    v140 = *(_OWORD *)&v150[32];
    v141 = *(_OWORD *)&v150[48];
    v142 = *(_OWORD *)&v150[64];
    v143 = *(_QWORD *)&v150[80];
    if ( v149 != -1 )
    {
      *(_QWORD *)&v161[88] = v143;
      *(_OWORD *)&v161[72] = v142;
      *(_OWORD *)&v161[56] = v141;
      *(_OWORD *)&v161[40] = v140;
      *(_OWORD *)&v161[24] = v139;
      *(__m128i *)&v161[8] = v138;
      *(_QWORD *)v161 = v149;
      goto LABEL_109;
    }
    v163 = v17;
    v131 = v143;
    v130 = v142;
    v129 = v141;
    v128 = v140;
    v127 = v139;
    v126 = v138;
    v18 = v123;
    sub_1402069A0((unsigned int)&v133, v147, v135, (unsigned int)&v126, v123, *((__int64 *)&v123 + 1));
    v19 = *(_QWORD *)&v134[8];
    v166 = *(_QWORD *)v134;
    if ( v133.m128i_i64[0] != -1 )
    {
      *(_OWORD *)&v161[40] = *(_OWORD *)&v134[24];
      *(_OWORD *)&v161[56] = *(_OWORD *)&v134[40];
      *(_OWORD *)&v161[72] = *(_OWORD *)&v134[56];
      *(_QWORD *)&v161[88] = *(_QWORD *)&v134[72];
      *(_OWORD *)&v161[16] = __PAIR128__(*(unsigned __int64 *)&v134[8], v166);
      *(_QWORD *)&v161[32] = *(_QWORD *)&v134[16];
      *(__m128i *)v161 = v133;
      sub_140033D80(&v138);
      goto LABEL_109;
    }
    v162 = v133.m128i_i64[1];
    sub_140033D80(&v138);
    sub_140FF5600(v161);
    v118 = v19;
    v165 = *(_QWORD *)&v161[8];
    sub_140FE2210(
      (__int64)&v149,
      *(int *)&v161[8],
      *(int *)&v161[16],
      (__int64)"account credential.live-auth.locklive auth.account-domain.lockaccount state.account-transition.lockaccount transition",
      18);
    v20 = v149;
    if ( v149 != -1 )
    {
      *(_OWORD *)&v134[48] = *(_OWORD *)&v150[72];
      *(_OWORD *)&v134[32] = *(_OWORD *)&v150[56];
      *(_OWORD *)&v134[16] = *(_OWORD *)&v150[40];
      *(_OWORD *)v134 = *(_OWORD *)&v150[24];
      v133 = *(__m128i *)&v150[8];
    }
    v21 = *(void **)v150;
    if ( *(_QWORD *)v161 )
      sub_140001660(v165, *(_QWORD *)v161, 1);
    if ( (_DWORD)v20 != -1 )
    {
      *(_OWORD *)&v161[80] = *(_OWORD *)&v134[48];
      *(_OWORD *)&v161[64] = *(_OWORD *)&v134[32];
      *(_OWORD *)&v161[48] = *(_OWORD *)&v134[16];
      *(_OWORD *)&v161[32] = *(_OWORD *)v134;
      *(__m128i *)&v161[16] = v133;
      *(_QWORD *)v161 = v20;
      *(_QWORD *)&v161[8] = v21;
      v38 = v162;
      if ( !v162 )
        goto LABEL_109;
      goto LABEL_108;
    }
    v146 = v21;
    sub_1416828D0(
      (unsigned int)v161,
      v136,
      v137,
      (unsigned int)".live-auth.locklive auth.account-domain.lockaccount state.account-transition.lockaccount transition",
      15);
    v165 = *(_QWORD *)&v161[8];
    sub_140FE2210(
      (__int64)&v149,
      *(int *)&v161[8],
      *(int *)&v161[16],
      (__int64)"live auth.account-domain.lockaccount state.account-transition.lockaccount transition",
      9);
    v22 = v149;
    if ( v149 != -1 )
    {
      *(_OWORD *)&v134[48] = *(_OWORD *)&v150[72];
      *(_OWORD *)&v134[32] = *(_OWORD *)&v150[56];
      *(_OWORD *)&v134[16] = *(_OWORD *)&v150[40];
      *(_OWORD *)v134 = *(_OWORD *)&v150[24];
      v133 = *(__m128i *)&v150[8];
    }
    v23 = *(void **)v150;
    if ( *(_QWORD *)v161 )
      sub_140001660(v165, *(_QWORD *)v161, 1);
    if ( (_DWORD)v22 != -1 )
    {
      *(_OWORD *)&v161[80] = *(_OWORD *)&v134[48];
      *(_OWORD *)&v161[64] = *(_OWORD *)&v134[32];
      *(_OWORD *)&v161[48] = *(_OWORD *)&v134[16];
      *(_OWORD *)&v161[32] = *(_OWORD *)v134;
      *(__m128i *)&v161[16] = v133;
      *(_QWORD *)v161 = v22;
      *(_QWORD *)&v161[8] = v23;
      goto LABEL_103;
    }
    v164 = v23;
    sub_1401DE790(&v149, v15, v16);
    if ( (_DWORD)v149 == 2 )
    {
      *(_QWORD *)v161 = -1;
      goto LABEL_98;
    }
    sub_1418F44E0(&v133, (const __m128i *)&v149, 0xB0u);
    if ( *(_QWORD *)&v134[40] == *((_QWORD *)&v18 + 1) && !(unsigned int)sub_1418F4B70(*(_QWORD *)&v134[32], v18) )
      break;
LABEL_52:
    sub_140034220(&v133);
    v28 = sub_141412E80(&v164);
    v29 = v163;
    if ( v28 && (unsigned int)(v28 & 3) - 2 >= 2 && (v28 & 3) != 0 )
    {
      *(_QWORD *)v150 = v28 - 1;
      LOBYTE(v149) = 3;
      sub_1416BCB00(v150);
    }
    CloseHandle(v164);
    v30 = sub_141412E80(&v146);
    if ( v30 && (unsigned int)(v30 & 3) - 2 >= 2 && (v30 & 3) != 0 )
    {
      *(_QWORD *)v150 = v30 - 1;
      LOBYTE(v149) = 3;
      sub_1416BCB00(v150);
    }
    CloseHandle(v146);
    if ( v162 )
      sub_140001660(v166, v162, 1);
    v17 = v29 + 1;
    sub_140034220(&v120);
  }
  sub_1416828D0(
    (unsigned int)v161,
    v136,
    v137,
    (unsigned int)".account-domain.lockaccount state.account-transition.lockaccount transition",
    20);
  v165 = *(_QWORD *)&v161[8];
  sub_140FE2210(
    (__int64)&v149,
    *(int *)&v161[8],
    *(int *)&v161[16],
    (__int64)"account state.account-transition.lockaccount transition",
    13);
  v24 = v149;
  if ( v149 != -1 )
  {
    v142 = *(_OWORD *)&v150[72];
    v141 = *(_OWORD *)&v150[56];
    v140 = *(_OWORD *)&v150[40];
    v139 = *(_OWORD *)&v150[24];
    v138 = *(__m128i *)&v150[8];
  }
  v25 = *(void **)v150;
  if ( *(_QWORD *)v161 )
    sub_140001660(v165, *(_QWORD *)v161, 1);
  if ( (_DWORD)v24 == -1 )
  {
    hObject[0] = v25;
    sub_1401DECD0(&v149, v157, v148);
    v138 = *(__m128i *)v150;
    v139 = *(_OWORD *)&v150[16];
    v140 = *(_OWORD *)&v150[32];
    v141 = *(_OWORD *)&v150[48];
    v142 = *(_OWORD *)&v150[64];
    v143 = *(_QWORD *)&v150[80];
    v26 = v118;
    if ( v149 == -1 )
    {
      v131 = v143;
      v130 = v142;
      v129 = v141;
      v128 = v140;
      v127 = v139;
      v126 = v138;
      sub_1402069A0((unsigned int)&v149, v147, v135, (unsigned int)&v126, *(__int64 *)&v134[32], *(__int64 *)&v134[40]);
      if ( v149 == -1 )
      {
        v132 = *(_QWORD *)&v150[8];
        v165 = *(_QWORD *)v150;
        if ( !(unsigned __int8)sub_1402899E0(*(_QWORD *)&v150[8], *(_QWORD *)&v150[16], v166, v26) )
        {
          if ( v165 )
            sub_140001660(v132, v165, 1);
          sub_140033D80(&v126);
          v27 = sub_141412E80(hObject);
          if ( v27 && (unsigned int)(v27 & 3) - 2 >= 2 && (v27 & 3) != 0 )
          {
            *(_QWORD *)v150 = v27 - 1;
            LOBYTE(v149) = 3;
            sub_1416BCB00(v150);
          }
          CloseHandle(hObject[0]);
          goto LABEL_52;
        }
        if ( v165 )
          sub_140001660(v132, v165, 1);
        sub_1401EB040(v161, v158, &v126, &v133);
      }
      else
      {
        *(_OWORD *)&v161[40] = *(_OWORD *)&v150[32];
        *(_OWORD *)&v161[56] = *(_OWORD *)&v150[48];
        *(_OWORD *)&v161[72] = *(_OWORD *)&v150[64];
        *(_QWORD *)&v161[88] = *(_QWORD *)&v150[80];
        *(_OWORD *)&v161[8] = *(_OWORD *)v150;
        *(_OWORD *)&v161[24] = *(_OWORD *)&v150[16];
        *(_QWORD *)v161 = v149;
      }
      sub_140033D80(&v126);
    }
    else
    {
      *(_QWORD *)&v161[88] = v143;
      *(_OWORD *)&v161[72] = v142;
      *(_OWORD *)&v161[56] = v141;
      *(_OWORD *)&v161[40] = v140;
      *(_OWORD *)&v161[24] = v139;
      *(__m128i *)&v161[8] = v138;
      *(_QWORD *)v161 = v149;
    }
    v42 = sub_141412E80(hObject);
    if ( v42 && (unsigned int)(v42 & 3) - 2 >= 2 && (v42 & 3) != 0 )
    {
      *(_QWORD *)v150 = v42 - 1;
      LOBYTE(v149) = 3;
      sub_1416BCB00(v150);
    }
    CloseHandle(hObject[0]);
    goto LABEL_97;
  }
  *(_OWORD *)&v161[80] = v142;
  *(_OWORD *)&v161[64] = v141;
  *(_OWORD *)&v161[48] = v140;
  *(_OWORD *)&v161[32] = v139;
  *(__m128i *)&v161[16] = v138;
  *(_QWORD *)v161 = v24;
  *(_QWORD *)&v161[8] = v25;
LABEL_97:
  sub_140034220(&v133);
LABEL_98:
  v43 = sub_141412E80(&v164);
  if ( v43 && (unsigned int)(v43 & 3) - 2 >= 2 && (v43 & 3) != 0 )
  {
    *(_QWORD *)v150 = v43 - 1;
    LOBYTE(v149) = 3;
    sub_1416BCB00(v150);
  }
  CloseHandle(v164);
LABEL_103:
  v44 = sub_141412E80(&v146);
  if ( v44 && (unsigned int)(v44 & 3) - 2 >= 2 && (v44 & 3) != 0 )
  {
    *(_QWORD *)v150 = v44 - 1;
    LOBYTE(v149) = 3;
    sub_1416BCB00(v150);
  }
  CloseHandle(v146);
  v38 = v162;
  if ( v162 )
LABEL_108:
    sub_140001660(v166, v38, 1);
LABEL_109:
  sub_140034220(&v120);
  if ( *(_QWORD *)v161 == -1 )
    goto LABEL_114;
LABEL_110:
  *(_OWORD *)&v150[72] = *(_OWORD *)&v161[80];
  *(_OWORD *)&v150[56] = *(_OWORD *)&v161[64];
  *(_OWORD *)&v150[40] = *(_OWORD *)&v161[48];
  *(_OWORD *)&v150[24] = *(_OWORD *)&v161[32];
  *(_QWORD *)&v150[16] = *(_QWORD *)&v161[24];
  v149 = *(_QWORD *)v161;
  *(_OWORD *)v150 = *(_OWORD *)&v161[8];
  nullsub_1(*(_QWORD *)&v161[8]);
  v45 = (void *)sub_140001650(24, 1);
  if ( !v45 )
    sub_141938D2B(1, 24);
  qmemcpy(v45, "CURRENT_AUTH_SYNC_FAILED", 24);
  v166 = (__int64)v45;
  v133.m128i_i64[0] = (__int64)&v149;
  v133.m128i_i64[1] = (__int64)sub_14104A7D0;
  sub_1416ABFD0(&v111, &unk_1419DA436, &v133);
  v133.m128i_i64[0] = 24;
  v133.m128i_i64[1] = v166;
  *(_QWORD *)v134 = 24;
  *(_OWORD *)&v134[8] = v111;
  *(_QWORD *)&v134[24] = v112;
  v46 = v160;
  if ( v160 == (_QWORD)v159 )
    sub_14190F490(&v159);
  v47 = *((_QWORD *)&v159 + 1);
  v48 = 48 * v46;
  v49 = v133;
  v50 = *(_OWORD *)v134;
  *(_OWORD *)(*((_QWORD *)&v159 + 1) + v48 + 32) = *(_OWORD *)&v134[16];
  *(_OWORD *)(v47 + v48 + 16) = v50;
  *(__m128i *)(v47 + v48) = v49;
  v160 = v46 + 1;
  sub_1401954F0(&v149);
LABEL_114:
  sub_1416828D0(
    (unsigned int)&v120,
    v136,
    v137,
    (unsigned int)".account-domain.lockaccount state.account-transition.lockaccount transition",
    20);
  v166 = v120.m128i_i64[1];
  sub_140FE2210(
    (__int64)&v149,
    v120.m128i_i32[2],
    v121,
    (__int64)"account state.account-transition.lockaccount transition",
    13);
  v52 = v149;
  if ( v149 != -1 )
  {
    *(_OWORD *)&v134[48] = *(_OWORD *)&v150[72];
    *(_OWORD *)&v134[32] = *(_OWORD *)&v150[56];
    *(_OWORD *)&v134[16] = *(_OWORD *)&v150[40];
    *(_OWORD *)v134 = *(_OWORD *)&v150[24];
    v133 = *(__m128i *)&v150[8];
  }
  v53 = *(_QWORD *)v150;
  if ( v120.m128i_i64[0] )
    sub_140001660(v166, v120.m128i_i64[0], 1);
  if ( (_DWORD)v52 != -1 )
  {
    v124 = *(_OWORD *)&v134[48];
    v123 = *(_OWORD *)&v134[32];
    v122 = *(_OWORD *)&v134[16];
    v121 = *(_OWORD *)v134;
    v120 = v133;
    goto LABEL_182;
  }
  v164 = (HANDLE)v53;
  sub_1401DECD0(&v149, v157, v148);
  v52 = v149;
  v53 = *(_QWORD *)v150;
  v133 = *(__m128i *)&v150[8];
  *(_OWORD *)v134 = *(_OWORD *)&v150[24];
  *(_OWORD *)&v134[16] = *(_OWORD *)&v150[40];
  *(_OWORD *)&v134[32] = *(_OWORD *)&v150[56];
  *(_OWORD *)&v134[48] = *(_OWORD *)&v150[72];
  if ( v149 != -1 )
  {
    v124 = *(_OWORD *)&v134[48];
    v123 = *(_OWORD *)&v134[32];
    v122 = *(_OWORD *)&v134[16];
    v121 = *(_OWORD *)v134;
    v120 = v133;
    v54 = sub_141412E80(&v164);
    if ( v54 && (unsigned int)(v54 & 3) - 2 >= 2 && (v54 & 3) != 0 )
    {
      *(_QWORD *)v150 = v54 - 1;
      LOBYTE(v149) = 3;
      sub_1416BCB00(v150);
    }
    CloseHandle(v164);
    goto LABEL_182;
  }
  *(_QWORD *)v161 = *(_QWORD *)v150;
  *(__m128i *)&v161[8] = v133;
  *(_OWORD *)&v161[24] = *(_OWORD *)v134;
  *(_OWORD *)&v161[40] = *(_OWORD *)&v134[16];
  *(_OWORD *)&v161[56] = *(_OWORD *)&v134[32];
  *(_OWORD *)&v161[72] = *(_OWORD *)&v134[48];
  v55 = v158[69];
  v56 = v158[70];
  sub_14021B0F0(&v105, v55, v56);
  if ( v105 == -1 )
  {
    *(_QWORD *)&v128 = v108;
    v127 = v107;
    v126 = v106;
  }
  else
  {
    LODWORD(v128) = 3;
    v126.m128i_i64[0] = 0;
    v126.m128i_i64[1] = 8;
    v127 = 0;
    sub_1401954F0(&v105);
  }
  v137 = v56;
  v136 = v55;
  v59 = *(_QWORD *)&v161[8];
  v60 = *(_QWORD *)&v161[8] + 424LL * *(_QWORD *)&v161[16];
  v61 = 0;
  v62 = 0;
  v157 = v60;
  while ( v59 != v60 )
  {
    v53 = v59;
    v63 = *(_QWORD *)(v59 + 112);
    if ( v63 == 2 )
    {
      v59 += 424;
      if ( *(_DWORD *)(v53 + 152) == 2 )
        continue;
    }
    v147 = v62;
    v166 = v61;
    if ( (_QWORD)v127 )
    {
      v64 = *(_QWORD *)(v53 + 200);
      v65 = *(_QWORD *)(v53 + 208);
      v66 = v126.m128i_i64[1];
      v67 = 192 * v127;
      v68 = 0;
      while ( *(_QWORD *)(v66 + v68 + 160) != v65 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v66 + v68 + 152), v64) )
      {
        v68 += 192;
        if ( v67 == v68 )
          goto LABEL_139;
      }
      v61 = v166;
      v60 = v157;
      v62 = v147;
    }
    else
    {
LABEL_139:
      v69 = 16LL * *(_QWORD *)(v53 + 96) + 88;
      if ( !(*(_QWORD *)(v53 + 80) | *(_QWORD *)(v53 + 96)) )
        v69 = 408;
      v70 = *(_QWORD *)(v53 + v69);
      sub_1416AC440(&v133, v53 + 192);
      v61 = v166;
      v71 = *(_QWORD *)(v53 + 112);
      v72 = v135;
      v73 = v162;
      v74 = v163;
      v75 = v147;
      if ( v71 != 2 )
      {
        v2 = *(_QWORD *)(v53 + 136);
        v72 = *(_DWORD *)(v53 + 144);
        v4 = (__m128)*(unsigned __int64 *)(v53 + 128);
        v73 = *(_QWORD *)(v53 + 120);
      }
      v76 = *(_QWORD *)(v53 + 152);
      if ( v76 != 2 )
      {
        v3 = *(_QWORD *)(v53 + 176);
        LODWORD(v148) = *(_DWORD *)(v53 + 184);
        v5 = (__m128)*(unsigned __int64 *)(v53 + 168);
        v74 = *(_QWORD *)(v53 + 160);
      }
      v77 = *(_QWORD *)v134;
      v153 = *(_QWORD *)v134;
      v152 = v133;
      v149 = 0;
      *(_QWORD *)&v150[8] = v71;
      v162 = v73;
      *(_QWORD *)&v150[16] = v73;
      _mm_storel_ps((double *)&v150[24], v4);
      *(_QWORD *)&v150[32] = v2;
      LODWORD(v135) = v72;
      *(_DWORD *)&v150[40] = v72;
      *(_QWORD *)&v150[48] = v76;
      v163 = v74;
      *(_QWORD *)&v150[56] = v74;
      _mm_storel_ps((double *)&v150[64], v5);
      *(_QWORD *)&v150[72] = v3;
      *(_DWORD *)&v150[80] = v148;
      v151 = 2;
      v154 = 0;
      v155 = v70;
      v156 = 1;
      v167 = 1;
      v78 = sub_141683E80(v76, v77, &v152);
      v60 = v157;
      v120.m128i_i64[0] = __PAIR64__(v79, v78);
      v167 = 1;
      sub_141683E30(&v133, &v120, 3577643008LL, 27111902);
      if ( v133.m128i_i8[0] )
        v80 = 0;
      else
        v80 = v133.m128i_i64[1];
      v167 = 0;
      v81 = sub_14021AA50(&v126, &v149, v80);
      LOBYTE(v81) = (v75 | v81) & 1;
      v63 = *(_QWORD *)(v53 + 112);
      v62 = v81;
    }
    v59 = v53 + 424;
    *(_QWORD *)(v53 + 112) = 2;
    v82 = *(_QWORD *)(v53 + 152);
    *(_QWORD *)(v53 + 152) = 2;
    v57 = v63 ^ 2 | v82 ^ 2;
    LOBYTE(v57) = v57 != 0;
    LOBYTE(v61) = v57 | v61;
  }
  if ( (v62 & 1) == 0 )
    goto LABEL_157;
  sub_14021B430(&v120);
  if ( v120.m128i_i32[0] == -1 )
    goto LABEL_157;
  *(_OWORD *)&v134[64] = v125;
  *(_OWORD *)&v134[48] = v124;
  *(_OWORD *)&v134[32] = v123;
  *(_OWORD *)&v134[16] = v122;
  *(_OWORD *)v134 = v121;
  v133 = v120;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    hObject[0] = &v133;
    hObject[1] = sub_14104A7D0;
    *(_QWORD *)&v150[40] = 2;
    *(_QWORD *)&v150[48] = aCodexmateLibCo_21;
    *(_QWORD *)&v150[56] = 31;
    *(_QWORD *)&v150[72] = &unk_1419D9E71;
    *(_QWORD *)&v150[80] = hObject;
    v149 = 0;
    *(_QWORD *)v150 = aCodexmateLibCo_21;
    *(_QWORD *)&v150[8] = 31;
    *(_QWORD *)&v150[16] = 0;
    *(_QWORD *)&v150[24] = aSrcCoreReposit;
    *(_QWORD *)&v150[32] = 22;
    *(_QWORD *)&v150[64] = 0x9F300000001LL;
    sub_1414D53A0(&v145, &v149);
  }
  v53 = v133.m128i_i64[1];
  v52 = v133.m128i_i64[0];
  v138 = *(__m128i *)v134;
  v139 = *(_OWORD *)&v134[16];
  v140 = *(_OWORD *)&v134[32];
  v141 = *(_OWORD *)&v134[48];
  v142 = *(_OWORD *)&v134[64];
  if ( v133.m128i_i64[0] == -1 )
  {
LABEL_157:
    v52 = -1;
    if ( (v61 & 1) != 0 )
    {
      v133.m128i_i32[0] = sub_141683E80(v57, v62, v58);
      v133.m128i_i32[1] = v84;
      sub_141683E30(&v149, &v133, 3577643008LL, 27111902);
      if ( (_BYTE)v149 )
        v85 = 0;
      else
        v85 = *(_QWORD *)v150;
      *(_QWORD *)&v161[72] = v85;
      sub_1401CF760(&v149, v158, (__int64)v161, 0);
      v52 = v149;
      if ( v149 == -1 )
      {
        v52 = -1;
        v83 = v127;
        if ( !(_QWORD)v127 )
          goto LABEL_175;
        goto LABEL_167;
      }
      v53 = *(_QWORD *)v150;
      v120 = *(__m128i *)&v150[8];
      v121 = *(_OWORD *)&v150[24];
      v122 = *(_OWORD *)&v150[40];
      v123 = *(_OWORD *)&v150[56];
      v124 = *(_OWORD *)&v150[72];
      v83 = v127;
      if ( (_QWORD)v127 )
        goto LABEL_167;
    }
    else
    {
      v83 = v127;
      if ( (_QWORD)v127 )
        goto LABEL_167;
    }
  }
  else
  {
    v124 = v142;
    v123 = v141;
    v122 = v140;
    v121 = v139;
    v120 = v138;
    v83 = v127;
    if ( !(_QWORD)v127 )
      goto LABEL_175;
LABEL_167:
    v86 = (_QWORD *)(v126.m128i_i64[1] + 152);
    do
    {
      v87 = *(v86 - 1);
      if ( v87 )
        sub_140001660(*v86, v87, 1);
      if ( *((_DWORD *)v86 - 14) != 2 )
      {
        v88 = *(v86 - 5);
        if ( v88 != -1 )
        {
          if ( v88 )
            sub_140001660(*(v86 - 4), v88, 1);
        }
      }
      v86 += 24;
      --v83;
    }
    while ( v83 );
  }
LABEL_175:
  if ( v126.m128i_i64[0] )
    sub_140001660(v126.m128i_i64[1], 192 * v126.m128i_i64[0], 8);
  sub_140033D80(v161);
  v89 = sub_141412E80(&v164);
  if ( v89 && (unsigned int)(v89 & 3) - 2 >= 2 && (v89 & 3) != 0 )
  {
    *(_QWORD *)v150 = v89 - 1;
    LOBYTE(v149) = 3;
    sub_1416BCB00(v150);
  }
  CloseHandle(v164);
  if ( v52 != -1 )
  {
LABEL_182:
    v149 = v52;
    *(_QWORD *)v150 = v53;
    *(__m128i *)&v150[8] = v120;
    *(_OWORD *)&v150[24] = v121;
    *(_OWORD *)&v150[40] = v122;
    *(_OWORD *)&v150[56] = v123;
    *(_OWORD *)&v150[72] = v124;
    nullsub_1(v51);
    v90 = (void *)sub_140001650(29, 1);
    if ( !v90 )
      sub_141938D2B(1, 29);
    v166 = (__int64)v90;
    qmemcpy(v90, "LEGACY_QUOTA_MIGRATION_FAILED", 29);
    v133.m128i_i64[0] = (__int64)&v149;
    v133.m128i_i64[1] = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v109, &unk_1419DA491, &v133);
    v133.m128i_i64[0] = 29;
    v133.m128i_i64[1] = v166;
    *(_QWORD *)v134 = 29;
    *(_OWORD *)&v134[8] = v109;
    *(_QWORD *)&v134[24] = v110;
    v91 = v160;
    if ( v160 == (_QWORD)v159 )
      sub_14190F490(&v159);
    v92 = *((_QWORD *)&v159 + 1);
    v93 = 48 * v91;
    v94 = v133;
    v95 = *(_OWORD *)v134;
    *(_OWORD *)(*((_QWORD *)&v159 + 1) + v93 + 32) = *(_OWORD *)&v134[16];
    *(_OWORD *)(v92 + v93 + 16) = v95;
    *(__m128i *)(v92 + v93) = v94;
    v160 = v91 + 1;
    sub_1401954F0(&v149);
  }
  result = v119;
  *(_QWORD *)(v119 + 24) = v160;
  *(_OWORD *)(result + 8) = v159;
  *(_QWORD *)result = -1;
  return result;
}
