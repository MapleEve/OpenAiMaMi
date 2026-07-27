// module: codexmate_lib/core/repository
// addr: 0x140393880
// name: sub_140393880
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140393880(__int64 a1, _QWORD *a2)
{
  __int64 v2; // xmm6_8
  __int64 v3; // xmm7_8
  __m128 v4; // xmm8
  __m128 v5; // xmm9
  __int64 v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  void *i; // rsi
  __int64 v16; // rsi
  __int64 v17; // r14
  __int128 v18; // kr00_16
  void *v19; // r13
  __int64 v20; // r12
  char *v21; // rsi
  void *v22; // rax
  __int64 v23; // rdx
  char *v24; // r14
  __int64 v25; // r12
  char *v26; // rax
  __int64 v27; // r15
  __int64 v28; // r12
  HANDLE *v29; // r13
  __int64 v30; // r14
  void *v31; // rsi
  _QWORD *v32; // rdi
  __int64 v33; // rdx
  void *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rcx
  __int64 v41; // rdi
  void *v42; // r14
  _BYTE *v43; // rbx
  _QWORD *v44; // rsi
  HANDLE *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // r14
  HANDLE v52; // r12
  unsigned __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // r15
  __int64 v56; // r14
  __int64 v57; // r12
  __int64 v58; // r13
  __int64 v59; // rsi
  __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // r14
  __int64 v63; // rax
  int v64; // r15d
  __int64 v65; // r9
  __int64 v66; // r10
  int v67; // r11d
  char v68; // r13
  __int64 v69; // rcx
  __int64 v70; // rdx
  unsigned int v71; // eax
  unsigned int v72; // edx
  __int64 v73; // r8
  unsigned int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // r14
  __int64 v78; // rbx
  _QWORD *v79; // rdi
  __int64 v80; // rdx
  int v81; // edx
  __int64 v82; // rax
  _QWORD *v83; // r15
  __int64 v84; // rdx
  void *v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int64 result; // rax
  __int64 v92; // rbx
  HANDLE *v93; // rdi
  HANDLE *v94; // rdi
  __int64 v95; // rcx
  void *v96; // rax
  _OWORD *v97; // rax
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // krE0_16
  __int64 v101; // rdi
  __int64 v102; // r14
  __int64 v103; // [rsp+20h] [rbp-60h]
  __int64 v104; // [rsp+28h] [rbp-58h] BYREF
  __m256i v105; // [rsp+30h] [rbp-50h]
  __int64 v106; // [rsp+50h] [rbp-30h]
  __int64 v107; // [rsp+58h] [rbp-28h]
  __int64 v108; // [rsp+60h] [rbp-20h]
  __int64 v109; // [rsp+68h] [rbp-18h]
  __int64 v110; // [rsp+70h] [rbp-10h]
  __int64 v111; // [rsp+78h] [rbp-8h]
  __int64 v112; // [rsp+80h] [rbp+0h]
  __int128 v113; // [rsp+88h] [rbp+8h] BYREF
  __int64 v114; // [rsp+98h] [rbp+18h]
  __int128 v115; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v116; // [rsp+B0h] [rbp+30h]
  __int128 v117; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v118; // [rsp+C8h] [rbp+48h]
  __int64 v119; // [rsp+D0h] [rbp+50h] BYREF
  char *v120; // [rsp+D8h] [rbp+58h]
  __int64 v121; // [rsp+E0h] [rbp+60h]
  __int64 v122; // [rsp+E8h] [rbp+68h]
  __int128 v123; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v124; // [rsp+100h] [rbp+80h]
  __int128 v125; // [rsp+110h] [rbp+90h]
  __int128 v126; // [rsp+120h] [rbp+A0h]
  __int128 v127; // [rsp+130h] [rbp+B0h]
  __int128 v128; // [rsp+140h] [rbp+C0h]
  __int64 v129; // [rsp+150h] [rbp+D0h]
  __int64 v130; // [rsp+160h] [rbp+E0h]
  __int64 v131; // [rsp+168h] [rbp+E8h]
  HANDLE *v132; // [rsp+188h] [rbp+108h]
  __int128 v133; // [rsp+190h] [rbp+110h]
  __int128 v134; // [rsp+1A0h] [rbp+120h]
  __int128 v135; // [rsp+1B0h] [rbp+130h]
  __int128 v136; // [rsp+1C0h] [rbp+140h]
  __int128 v137; // [rsp+1D0h] [rbp+150h]
  __int64 v138; // [rsp+1E0h] [rbp+160h]
  _QWORD v139[2]; // [rsp+1E8h] [rbp+168h] BYREF
  HANDLE *v140; // [rsp+1F8h] [rbp+178h]
  __int64 v141; // [rsp+200h] [rbp+180h]
  HANDLE *v142; // [rsp+208h] [rbp+188h]
  __m256i v143; // [rsp+210h] [rbp+190h] BYREF
  __int64 v144; // [rsp+230h] [rbp+1B0h]
  __int64 v145; // [rsp+240h] [rbp+1C0h]
  __int64 v146; // [rsp+248h] [rbp+1C8h]
  _BYTE v147[96]; // [rsp+250h] [rbp+1D0h] BYREF
  _BYTE v148[96]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v149; // [rsp+310h] [rbp+290h]
  __int64 v150; // [rsp+320h] [rbp+2A0h]
  __int64 v151; // [rsp+328h] [rbp+2A8h]
  __int64 v152; // [rsp+350h] [rbp+2D0h]
  __int64 v153; // [rsp+358h] [rbp+2D8h]
  char v154; // [rsp+367h] [rbp+2E7h] BYREF
  HANDLE v155; // [rsp+368h] [rbp+2E8h] BYREF
  __int64 v156; // [rsp+370h] [rbp+2F0h]
  __int128 v157; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v158; // [rsp+388h] [rbp+308h]
  _BYTE v159[96]; // [rsp+390h] [rbp+310h] BYREF
  __int64 v160; // [rsp+3F0h] [rbp+370h]
  __int128 v161; // [rsp+408h] [rbp+388h] BYREF
  __int64 v162; // [rsp+418h] [rbp+398h]
  __int64 v163; // [rsp+420h] [rbp+3A0h]
  char v164; // [rsp+428h] [rbp+3A8h]
  __int64 v165; // [rsp+438h] [rbp+3B8h]
  HANDLE v166; // [rsp+440h] [rbp+3C0h] BYREF
  _QWORD *v167; // [rsp+448h] [rbp+3C8h]
  HANDLE hObject; // [rsp+450h] [rbp+3D0h]
  HANDLE v169; // [rsp+458h] [rbp+3D8h]
  char v170; // [rsp+467h] [rbp+3E7h]
  __int64 v171; // [rsp+468h] [rbp+3E8h]

  v171 = -2;
  v122 = a1;
  *(_QWORD *)&v157 = 0;
  *((_QWORD *)&v157 + 1) = 8;
  v158 = 0;
  v6 = a2[33];
  v167 = a2;
  v7 = a2[34];
  v152 = v6;
  v156 = v7;
  sub_141473FA0((unsigned int)&v123, v6, v7, (unsigned int)&unk_14174E290, 26);
  v169 = *((HANDLE *)&v123 + 1);
  sub_141486710(v159, *((_QWORD *)&v123 + 1), v124);
  v8 = v167;
  if ( *(_DWORD *)v159 == 2 )
  {
    *(_QWORD *)&v148[8] = *(_QWORD *)&v159[8];
    *(_QWORD *)v148 = 2;
    goto LABEL_4;
  }
  *(_OWORD *)v148 = *(_OWORD *)v159;
  *(_QWORD *)&v148[80] = *(_QWORD *)&v159[80];
  *(_OWORD *)&v148[64] = *(_OWORD *)&v159[64];
  *(_OWORD *)&v148[48] = *(_OWORD *)&v159[48];
  *(_OWORD *)&v148[32] = *(_OWORD *)&v159[32];
  *(_OWORD *)&v148[16] = *(_OWORD *)&v159[16];
  if ( *(_QWORD *)v159 == 2 )
  {
LABEL_4:
    sub_140018650(&v148[8]);
    if ( (_QWORD)v123 )
      sub_140001660(v169, v123, 1);
    goto LABEL_10;
  }
  if ( (_QWORD)v123 )
    sub_140001660(v169, v123, 1);
  v9 = v8[37];
  v10 = v8[38];
  sub_140388C10((__int64)v159, v9, v10);
  if ( *(_DWORD *)v159 == -1 )
  {
    *(_QWORD *)&v128 = *(_QWORD *)&v159[88];
    v127 = *(_OWORD *)&v159[72];
    v126 = *(_OWORD *)&v159[56];
    v125 = *(_OWORD *)&v159[40];
    v124 = *(_OWORD *)&v159[24];
    v123 = *(_OWORD *)&v159[8];
    sub_140329E60(&v119, *(_QWORD *)&v159[16], *(_QWORD *)&v159[16] + 424LL * *(_QWORD *)&v159[24]);
    v24 = v120;
    v25 = v121;
    hObject = &v120[32 * v121];
    v145 = v167[41];
    v146 = v167[42];
    v26 = v120;
    v169 = v120;
    if ( v120 == hObject )
    {
LABEL_60:
      sub_140352A00((__int64)v159, &v119);
      v28 = *(_QWORD *)&v159[8];
      v27 = *(_QWORD *)v159;
      v30 = *(_QWORD *)&v159[24];
      v29 = *(HANDLE **)&v159[16];
      if ( *(_QWORD *)v159 == -1 )
      {
        v153 = *(_QWORD *)&v159[8];
        v143.m256i_i64[0] = *(_QWORD *)&v159[8];
        *(_OWORD *)&v143.m256i_u64[1] = *(_OWORD *)&v159[16];
        sub_1403885B0(v159, v152, v156);
        v28 = *(_QWORD *)&v159[8];
        v27 = *(_QWORD *)v159;
        if ( *(_QWORD *)v159 == -1 )
        {
          v139[0] = *(_QWORD *)&v159[8];
          sub_140388C10((__int64)v159, v9, v10);
          v28 = *(_QWORD *)&v159[8];
          v27 = *(_QWORD *)v159;
          v92 = *(_QWORD *)&v159[24];
          *(_OWORD *)v147 = *(_OWORD *)&v159[32];
          *(_OWORD *)&v147[16] = *(_OWORD *)&v159[48];
          *(_OWORD *)&v147[32] = *(_OWORD *)&v159[64];
          *(_OWORD *)&v147[48] = *(_OWORD *)&v159[80];
          if ( *(_QWORD *)v159 == -1 )
          {
            *(_QWORD *)v148 = *(_QWORD *)&v159[8];
            *(_OWORD *)&v148[8] = *(_OWORD *)&v159[16];
            *(_OWORD *)&v148[24] = *(_OWORD *)v147;
            *(_OWORD *)&v148[40] = *(_OWORD *)&v147[16];
            *(_OWORD *)&v148[56] = *(_OWORD *)&v147[32];
            *(_OWORD *)&v148[72] = *(_OWORD *)&v147[48];
            recover_account_removal_quarantine(v159, v167, *(_QWORD *)&v159[16], *(_QWORD *)&v159[24]);
            v100 = *(_OWORD *)v159;
            v101 = *(_QWORD *)&v159[16];
            sub_14034DF40(v148);
            sub_14034E7D0(v139);
            sub_14034A130(&v143);
            sub_14034DF40(&v123);
            *(_OWORD *)v159 = v100;
            *(_QWORD *)&v159[16] = v101;
            if ( v101 )
            {
              sub_141688D30((unsigned int)&v157, 0, v101, 8, 48);
              v102 = v158;
              sub_141684120(*((_QWORD *)&v157 + 1) + 48 * v158, *((_QWORD *)&v100 + 1), 48 * v101);
              v158 = v101 + v102;
              if ( !(_QWORD)v100 )
                goto LABEL_11;
            }
            else
            {
              v158 = 0;
              if ( !(_QWORD)v100 )
                goto LABEL_11;
            }
            sub_140001660(*((_QWORD *)&v100 + 1), 48 * v100, 8);
            goto LABEL_11;
          }
          v132 = *(HANDLE **)&v159[16];
          v136 = *(_OWORD *)&v147[48];
          v135 = *(_OWORD *)&v147[32];
          v134 = *(_OWORD *)&v147[16];
          v133 = *(_OWORD *)v147;
          sub_14034E7D0(v139);
        }
        else
        {
          v92 = *(_QWORD *)&v159[24];
          v132 = *(HANDLE **)&v159[16];
          v133 = *(_OWORD *)&v159[32];
          v134 = *(_OWORD *)&v159[48];
          v135 = *(_OWORD *)&v159[64];
          v136 = *(_OWORD *)&v159[80];
        }
        v142 = v29;
        v141 = v30;
        if ( v30 )
        {
          v165 = 0;
          v93 = v142;
          do
          {
            v140 = v93;
            *(_QWORD *)v159 = sub_1412018B0(v93);
            if ( *(_QWORD *)v159 )
              sub_140018650(v159);
            v94 = v140;
            CloseHandle(*v140);
            v93 = v94 + 1;
            --v165;
          }
          while ( v165 + v141 );
        }
        if ( v153 )
          sub_140001660(v142, 8 * v153, 8);
        v30 = v92;
        v29 = v132;
      }
      else
      {
        v136 = *(_OWORD *)&v159[80];
        v135 = *(_OWORD *)&v159[64];
        v134 = *(_OWORD *)&v159[48];
        v133 = *(_OWORD *)&v159[32];
      }
    }
    else
    {
      while ( 1 )
      {
        sub_1403CE160((unsigned int)v159, *((_QWORD *)v26 + 1), *((_QWORD *)v26 + 2), v145, v146);
        v27 = *(_QWORD *)v159;
        if ( *(_QWORD *)v159 != -1 )
          break;
        v26 = (char *)v169 + 32;
        v169 = (char *)v169 + 32;
        if ( v169 == hObject )
          goto LABEL_60;
      }
      v153 = *(_QWORD *)&v159[8];
      v78 = *(_QWORD *)&v159[24];
      v29 = *(HANDLE **)&v159[16];
      v133 = *(_OWORD *)&v159[32];
      v134 = *(_OWORD *)&v159[48];
      v135 = *(_OWORD *)&v159[64];
      v136 = *(_OWORD *)&v159[80];
      if ( v25 )
      {
        v79 = v24 + 8;
        do
        {
          v80 = *(v79 - 1);
          if ( v80 )
            sub_140001660(*v79, v80, 1);
          v79 += 4;
          --v25;
        }
        while ( v25 );
      }
      if ( v119 )
        sub_140001660(v24, 32 * v119, 8);
      v28 = v153;
      v30 = v78;
    }
    sub_14034DF40(&v123);
    *(_QWORD *)v159 = v27;
    *(_QWORD *)&v159[8] = v28;
    *(_QWORD *)&v159[16] = v29;
    *(_QWORD *)&v159[24] = v30;
    *(_OWORD *)&v159[32] = v133;
    *(_OWORD *)&v159[48] = v134;
    *(_OWORD *)&v159[64] = v135;
    *(_OWORD *)&v159[80] = v136;
    nullsub_1(v95);
    v96 = (void *)sub_140001650(33, 1);
    if ( !v96 )
      sub_1416C2D4B(1, 33);
    qmemcpy(v96, "ACCOUNT_REMOVAL_RECOVERY_DEFERRED", 33);
    v169 = v96;
    *(_QWORD *)v148 = v159;
    *(_QWORD *)&v148[8] = sub_140B036A0;
    sub_14149C0F0(&v117, &unk_14174EF41, v148);
    *(_QWORD *)v148 = 33;
    *(_QWORD *)&v148[8] = v169;
    *(_QWORD *)&v148[16] = 33;
    *(_OWORD *)&v148[24] = v117;
    *(_QWORD *)&v148[40] = v118;
    sub_141688FC0(&v157);
    v97 = *((_OWORD **)&v157 + 1);
    v98 = *(_OWORD *)v148;
    v99 = *(_OWORD *)&v148[16];
    *(_OWORD *)(*((_QWORD *)&v157 + 1) + 32LL) = *(_OWORD *)&v148[32];
    v97[1] = v99;
    *v97 = v98;
    v158 = 1;
    sub_14034ED40(v159);
    v11 = v167;
    goto LABEL_12;
  }
  sub_14034ED40(v159);
LABEL_10:
  v158 = 0;
LABEL_11:
  v11 = v167;
  v145 = v167[41];
  v12 = v167[42];
  v146 = v12;
LABEL_12:
  v13 = v11[5];
  v14 = v11[6];
  for ( i = nullptr; ; i = v21 + 1 )
  {
    if ( (unsigned __int64)i >= 3 )
    {
      nullsub_1(v12);
      v22 = (void *)sub_140001650(67, 1);
      if ( !v22 )
        sub_1416C2D4B(1, 67);
      qmemcpy(v22, "auth.json ownership kept changing while synchronizing account state", 67);
      *(_QWORD *)v147 = 10;
      *(_QWORD *)&v147[8] = 67;
      *(_QWORD *)&v147[16] = v22;
      *(_QWORD *)&v147[24] = 67;
      goto LABEL_91;
    }
    load_current_auth_snapshot(v159, v13, v14);
    if ( *(_DWORD *)v159 == 2 )
      goto LABEL_95;
    v169 = i;
    sub_141684120(&v123, v159, 152);
    v16 = *((_QWORD *)&v124 + 1);
    v17 = v125;
    sub_1403CB3A0((unsigned int)&v143, v145, v146, DWORD2(v124), v125);
    v165 = v143.m256i_i64[1];
    sub_1403C8920(v147, v143.m256i_i64[1], v143.m256i_i64[2]);
    hObject = *(HANDLE *)&v147[8];
    sub_14037FAC0((__int64)v159, *(__int64 *)&v147[8], *(__int64 *)&v147[16], (__int64)&aTtenaccountCre[4], 18);
    v18 = *(_OWORD *)v159;
    if ( *(_QWORD *)v159 != -1 )
      break;
    if ( *(_QWORD *)v147 )
      sub_140001660(hObject, *(_QWORD *)v147, 1);
    v155 = *((HANDLE *)&v18 + 1);
    sub_1403871C0(v159, v152, v156);
    v19 = *(void **)&v159[8];
    v20 = v16;
    if ( *(_QWORD *)v159 != -1 )
    {
      *(_OWORD *)&v147[80] = *(_OWORD *)&v159[80];
      *(_OWORD *)&v147[64] = *(_OWORD *)&v159[64];
      *(_OWORD *)&v147[48] = *(_OWORD *)&v159[48];
      *(_OWORD *)&v147[32] = *(_OWORD *)&v159[32];
      *(_OWORD *)&v147[16] = *(_OWORD *)&v159[16];
      *(_OWORD *)v147 = *(_OWORD *)v159;
LABEL_76:
      *(_QWORD *)v159 = sub_1412018B0(&v155);
      if ( *(_QWORD *)v159 )
        sub_140018650(v159);
      CloseHandle(v155);
      v23 = v143.m256i_i64[0];
      if ( !v143.m256i_i64[0] )
        goto LABEL_80;
LABEL_79:
      sub_140001660(v165, v23, 1);
      goto LABEL_80;
    }
    v166 = *(HANDLE *)&v159[8];
    load_current_auth_snapshot(v159, v13, v14);
    if ( *(_DWORD *)v159 == 2 )
    {
      *(_QWORD *)v147 = -1;
LABEL_73:
      *(_QWORD *)v159 = sub_1412018B0(&v166);
      if ( *(_QWORD *)v159 )
        sub_140018650(v159);
      CloseHandle(v166);
      goto LABEL_76;
    }
    sub_141684120(v148, v159, 152);
    if ( *(_QWORD *)&v148[32] == v17 && !(unsigned int)sub_1416847B0(*(_QWORD *)&v148[24], v16, v17) )
    {
      sub_1403885B0(v159, v152, v156);
      v31 = *(void **)&v159[8];
      v32 = v167;
      if ( *(_QWORD *)v159 == -1 )
      {
        v139[0] = *(_QWORD *)&v159[8];
        sub_14039C370(v159, v167[37], v167[38]);
        v133 = *(_OWORD *)&v159[8];
        v134 = *(_OWORD *)&v159[24];
        v135 = *(_OWORD *)&v159[40];
        v136 = *(_OWORD *)&v159[56];
        v137 = *(_OWORD *)&v159[72];
        v138 = *(_QWORD *)&v159[88];
        if ( *(_QWORD *)v159 == -1 )
        {
          *(_QWORD *)&v159[80] = v138;
          *(_OWORD *)&v159[64] = v137;
          *(_OWORD *)&v159[48] = v136;
          *(_OWORD *)&v159[32] = v135;
          *(_OWORD *)&v159[16] = v134;
          *(_OWORD *)v159 = v133;
          sub_1403A7040(v147, v32, v159, v148);
          sub_14034DF40(v159);
        }
        else
        {
          *(_QWORD *)&v147[88] = v138;
          *(_OWORD *)&v147[72] = v137;
          *(_OWORD *)&v147[56] = v136;
          *(_OWORD *)&v147[40] = v135;
          *(_OWORD *)&v147[24] = v134;
          *(_OWORD *)&v147[8] = v133;
          *(_QWORD *)v147 = *(_QWORD *)v159;
        }
        v169 = v31;
        *(_QWORD *)v159 = sub_1412018B0(v139);
        if ( *(_QWORD *)v159 )
          sub_140018650(v159);
        CloseHandle(v169);
        v33 = *(_QWORD *)&v148[16];
        if ( *(_QWORD *)&v148[16] )
LABEL_64:
          sub_140001660(*(_QWORD *)&v148[24], v33, 1);
      }
      else
      {
        *(_OWORD *)&v147[80] = *(_OWORD *)&v159[80];
        *(_OWORD *)&v147[64] = *(_OWORD *)&v159[64];
        *(_OWORD *)&v147[48] = *(_OWORD *)&v159[48];
        *(_OWORD *)&v147[32] = *(_OWORD *)&v159[32];
        *(_OWORD *)&v147[16] = *(_OWORD *)&v159[16];
        *(_OWORD *)v147 = *(_OWORD *)v159;
        v33 = *(_QWORD *)&v148[16];
        if ( *(_QWORD *)&v148[16] )
          goto LABEL_64;
      }
      if ( *(_QWORD *)&v148[40] )
        sub_140001660(*(_QWORD *)&v148[48], *(_QWORD *)&v148[40], 1);
      if ( *(__int64 *)&v148[64] > 0 )
        sub_140001660(*(_QWORD *)&v148[72], *(_QWORD *)&v148[64], 1);
      if ( *(__int64 *)&v148[88] > 0 )
        sub_140001660(v149, *(_QWORD *)&v148[88], 1);
      if ( v150 > 0 )
        sub_140001660(v151, v150, 1);
      goto LABEL_73;
    }
    if ( *(_QWORD *)&v148[16] )
      sub_140001660(*(_QWORD *)&v148[24], *(_QWORD *)&v148[16], 1);
    if ( *(_QWORD *)&v148[40] )
      sub_140001660(*(_QWORD *)&v148[48], *(_QWORD *)&v148[40], 1);
    if ( *(__int64 *)&v148[64] > 0 )
      sub_140001660(*(_QWORD *)&v148[72], *(_QWORD *)&v148[64], 1);
    if ( *(__int64 *)&v148[88] > 0 )
      sub_140001660(v149, *(_QWORD *)&v148[88], 1);
    hObject = v19;
    if ( v150 > 0 )
      sub_140001660(v151, v150, 1);
    *(_QWORD *)v159 = sub_1412018B0(&v166);
    if ( *(_QWORD *)v159 )
      sub_140018650(v159);
    CloseHandle(hObject);
    *(_QWORD *)v159 = sub_1412018B0(&v155);
    if ( *(_QWORD *)v159 )
      sub_140018650(v159);
    CloseHandle(v155);
    if ( v143.m256i_i64[0] )
      sub_140001660(v165, v143.m256i_i64[0], 1);
    if ( (_QWORD)v124 )
      sub_140001660(v16, v124, 1);
    if ( *((_QWORD *)&v125 + 1) )
      sub_140001660(v126, *((_QWORD *)&v125 + 1), 1);
    v21 = (char *)v169;
    if ( (__int64)v127 > 0 )
      sub_140001660(*((_QWORD *)&v127 + 1), v127, 1);
    if ( *((__int64 *)&v128 + 1) > 0 )
      sub_140001660(v129, *((_QWORD *)&v128 + 1), 1);
    if ( v130 > 0 )
      sub_140001660(v131, v130, 1);
  }
  *(_OWORD *)&v148[64] = *(_OWORD *)&v159[80];
  *(_OWORD *)&v148[48] = *(_OWORD *)&v159[64];
  *(_OWORD *)&v148[32] = *(_OWORD *)&v159[48];
  *(_OWORD *)&v148[16] = *(_OWORD *)&v159[32];
  *(_OWORD *)v148 = *(_OWORD *)&v159[16];
  if ( *(_QWORD *)v147 )
    sub_140001660(hObject, *(_QWORD *)v147, 1);
  *(_OWORD *)&v147[16] = *(_OWORD *)v148;
  *(_OWORD *)&v147[32] = *(_OWORD *)&v148[16];
  *(_OWORD *)&v147[48] = *(_OWORD *)&v148[32];
  *(_OWORD *)&v147[64] = *(_OWORD *)&v148[48];
  *(_OWORD *)&v147[80] = *(_OWORD *)&v148[64];
  *(_OWORD *)v147 = v18;
  v20 = v16;
  v23 = v143.m256i_i64[0];
  if ( v143.m256i_i64[0] )
    goto LABEL_79;
LABEL_80:
  if ( (_QWORD)v124 )
    sub_140001660(v20, v124, 1);
  if ( *((_QWORD *)&v125 + 1) )
    sub_140001660(v126, *((_QWORD *)&v125 + 1), 1);
  if ( (__int64)v127 > 0 )
    sub_140001660(*((_QWORD *)&v127 + 1), v127, 1);
  if ( *((__int64 *)&v128 + 1) > 0 )
    sub_140001660(v129, *((_QWORD *)&v128 + 1), 1);
  if ( v130 > 0 )
    sub_140001660(v131, v130, 1);
  if ( *(_QWORD *)v147 != -1 )
  {
LABEL_91:
    *(_OWORD *)&v159[80] = *(_OWORD *)&v147[80];
    *(_OWORD *)&v159[64] = *(_OWORD *)&v147[64];
    *(_OWORD *)&v159[48] = *(_OWORD *)&v147[48];
    *(_OWORD *)&v159[32] = *(_OWORD *)&v147[32];
    *(_OWORD *)&v159[16] = *(_OWORD *)&v147[16];
    *(_OWORD *)v159 = *(_OWORD *)v147;
    nullsub_1(*(_QWORD *)&v147[8]);
    v34 = (void *)sub_140001650(24, 1);
    if ( !v34 )
      sub_1416C2D4B(1, 24);
    qmemcpy(v34, "CURRENT_AUTH_SYNC_FAILED", 24);
    v169 = v34;
    *(_QWORD *)v148 = v159;
    *(_QWORD *)&v148[8] = sub_140B036A0;
    sub_14149C0F0(&v115, &unk_14174EF86, v148);
    *(_QWORD *)v148 = 24;
    *(_QWORD *)&v148[8] = v169;
    *(_QWORD *)&v148[16] = 24;
    *(_OWORD *)&v148[24] = v115;
    *(_QWORD *)&v148[40] = v116;
    v35 = v158;
    if ( v158 == (_QWORD)v157 )
      sub_141688FC0(&v157);
    v36 = *((_QWORD *)&v157 + 1);
    v37 = 48 * v35;
    v38 = *(_OWORD *)v148;
    v39 = *(_OWORD *)&v148[16];
    *(_OWORD *)(*((_QWORD *)&v157 + 1) + v37 + 32) = *(_OWORD *)&v148[32];
    *(_OWORD *)(v36 + v37 + 16) = v39;
    *(_OWORD *)(v36 + v37) = v38;
    v158 = v35 + 1;
    sub_14034ED40(v159);
  }
LABEL_95:
  sub_1403885B0(v159, v152, v156);
  v42 = *(void **)&v159[8];
  v41 = *(_QWORD *)v159;
  if ( *(_QWORD *)v159 != -1 )
  {
    v127 = *(_OWORD *)&v159[80];
    v126 = *(_OWORD *)&v159[64];
    v125 = *(_OWORD *)&v159[48];
    v124 = *(_OWORD *)&v159[32];
    v123 = *(_OWORD *)&v159[16];
    v43 = *(_BYTE **)&v159[8];
LABEL_162:
    *(_QWORD *)v159 = v41;
    *(_QWORD *)&v159[8] = v43;
    *(_OWORD *)&v159[16] = v123;
    *(_OWORD *)&v159[32] = v124;
    *(_OWORD *)&v159[48] = v125;
    *(_OWORD *)&v159[64] = v126;
    *(_OWORD *)&v159[80] = v127;
    nullsub_1(v40);
    v85 = (void *)sub_140001650(29, 1);
    if ( !v85 )
      sub_1416C2D4B(1, 29);
    v169 = v85;
    qmemcpy(v85, "LEGACY_QUOTA_MIGRATION_FAILED", 29);
    *(_QWORD *)v148 = v159;
    *(_QWORD *)&v148[8] = sub_140B036A0;
    sub_14149C0F0(&v113, &unk_14174EFE1, v148);
    *(_QWORD *)v148 = 29;
    *(_QWORD *)&v148[8] = v169;
    *(_QWORD *)&v148[16] = 29;
    *(_OWORD *)&v148[24] = v113;
    *(_QWORD *)&v148[40] = v114;
    v86 = v158;
    if ( v158 == (_QWORD)v157 )
      sub_141688FC0(&v157);
    v87 = *((_QWORD *)&v157 + 1);
    v88 = 48 * v86;
    v89 = *(_OWORD *)v148;
    v90 = *(_OWORD *)&v148[16];
    *(_OWORD *)(*((_QWORD *)&v157 + 1) + v88 + 32) = *(_OWORD *)&v148[32];
    *(_OWORD *)(v87 + v88 + 16) = v90;
    *(_OWORD *)(v87 + v88) = v89;
    v158 = v86 + 1;
    sub_14034ED40(v159);
    goto LABEL_166;
  }
  v166 = *(HANDLE *)&v159[8];
  sub_14039C370(v159, v167[37], v167[38]);
  v43 = *(_BYTE **)&v159[8];
  v41 = *(_QWORD *)v159;
  *(_OWORD *)v148 = *(_OWORD *)&v159[16];
  *(_OWORD *)&v148[16] = *(_OWORD *)&v159[32];
  *(_OWORD *)&v148[32] = *(_OWORD *)&v159[48];
  *(_OWORD *)&v148[48] = *(_OWORD *)&v159[64];
  *(_OWORD *)&v148[64] = *(_OWORD *)&v159[80];
  if ( *(_QWORD *)v159 != -1 )
  {
    v169 = v42;
    v127 = *(_OWORD *)&v148[64];
    v126 = *(_OWORD *)&v148[48];
    v125 = *(_OWORD *)&v148[32];
    v124 = *(_OWORD *)&v148[16];
    v123 = *(_OWORD *)v148;
    *(_QWORD *)v159 = sub_1412018B0(&v166);
    if ( *(_QWORD *)v159 )
      sub_140018650(v159);
    CloseHandle(v169);
    goto LABEL_162;
  }
  *(_QWORD *)v147 = *(_QWORD *)&v159[8];
  *(_OWORD *)&v147[8] = *(_OWORD *)v148;
  *(_OWORD *)&v147[24] = *(_OWORD *)&v148[16];
  *(_OWORD *)&v147[40] = *(_OWORD *)&v148[32];
  *(_OWORD *)&v147[56] = *(_OWORD *)&v148[48];
  *(_OWORD *)&v147[72] = *(_OWORD *)&v148[64];
  v44 = v167;
  v45 = (HANDLE *)v167[69];
  v46 = v167[70];
  sub_1403C7270(&v104, v45, v46);
  if ( (_DWORD)v104 == -1 )
  {
    v144 = v106;
    v143 = v105;
  }
  else
  {
    LODWORD(v144) = 3;
    v143.m256i_i64[0] = 0;
    v143.m256i_i64[1] = 8;
    *(_OWORD *)&v143.m256i_u64[2] = 0;
    sub_14034ED40(&v104);
  }
  v141 = v46;
  v140 = v45;
  v50 = *(_QWORD *)&v147[8];
  v51 = *(_QWORD *)&v147[8] + 424LL * *(_QWORD *)&v147[16];
  v52 = nullptr;
  v43 = v148;
  v53 = 0;
  v156 = v51;
  while ( v50 != v51 )
  {
    v54 = v50;
    v55 = *(_QWORD *)(v50 + 112);
    if ( v55 == 2 )
    {
      v50 += 424;
      if ( *(_DWORD *)(v54 + 152) == 2 )
        continue;
    }
    hObject = (HANDLE)v53;
    v169 = v52;
    if ( v143.m256i_i64[2] )
    {
      v56 = *(_QWORD *)(v54 + 200);
      v57 = *(_QWORD *)(v54 + 208);
      v58 = v143.m256i_i64[1];
      v59 = 160 * v143.m256i_i64[2];
      v60 = 0;
      while ( *(_QWORD *)(v58 + v60 + 136) != v57 || (unsigned int)sub_1416847B0(*(_QWORD *)(v58 + v60 + 128), v56, v57) )
      {
        v60 += 160;
        if ( v59 == v60 )
          goto LABEL_114;
      }
      v44 = v167;
      v52 = v169;
      v43 = v148;
      v51 = v156;
      v53 = (unsigned __int64)hObject;
    }
    else
    {
LABEL_114:
      v61 = 16LL * *(_QWORD *)(v54 + 96) + 88;
      if ( !(*(_QWORD *)(v54 + 80) | *(_QWORD *)(v54 + 96)) )
        v61 = 408;
      v62 = *(_QWORD *)(v54 + v61);
      v43 = v148;
      sub_14149C500(v148, v54 + 192);
      v44 = v167;
      v52 = v169;
      v63 = *(_QWORD *)(v54 + 112);
      v64 = v152;
      v65 = v165;
      v66 = v145;
      v67 = v146;
      v68 = (char)hObject;
      if ( v63 != 2 )
      {
        v2 = *(_QWORD *)(v54 + 136);
        v64 = *(_DWORD *)(v54 + 144);
        v4 = (__m128)*(unsigned __int64 *)(v54 + 128);
        v65 = *(_QWORD *)(v54 + 120);
      }
      v69 = *(_QWORD *)(v54 + 152);
      if ( v69 != 2 )
      {
        v3 = *(_QWORD *)(v54 + 176);
        v67 = *(_DWORD *)(v54 + 184);
        v5 = (__m128)*(unsigned __int64 *)(v54 + 168);
        v66 = *(_QWORD *)(v54 + 160);
      }
      v70 = *(_QWORD *)&v148[16];
      v162 = *(_QWORD *)&v148[16];
      v161 = *(_OWORD *)v148;
      *(_QWORD *)v159 = 0;
      *(_QWORD *)&v159[16] = v63;
      v165 = v65;
      *(_QWORD *)&v159[24] = v65;
      _mm_storel_ps((double *)&v159[32], v4);
      *(_QWORD *)&v159[40] = v2;
      *(_DWORD *)&v159[48] = v64;
      *(_QWORD *)&v159[56] = v69;
      v145 = v66;
      *(_QWORD *)&v159[64] = v66;
      _mm_storel_ps((double *)&v159[72], v5);
      *(_QWORD *)&v159[80] = v3;
      LODWORD(v146) = v67;
      *(_DWORD *)&v159[88] = v67;
      v160 = 2;
      v163 = v62;
      v164 = 1;
      v170 = 1;
      v71 = sub_141475580(
              v69,
              v70,
              &v161,
              v65,
              v103,
              v104,
              v105.m256i_i64[0],
              v105.m256i_i64[1],
              v105.m256i_i64[2],
              v105.m256i_i64[3],
              v106,
              v107,
              v108,
              v109,
              v110,
              v111,
              v112,
              v113,
              *((_QWORD *)&v113 + 1),
              v114,
              v115,
              *((_QWORD *)&v115 + 1),
              v116);
      v51 = v156;
      *(_QWORD *)&v123 = __PAIR64__(v72, v71);
      v170 = 1;
      sub_141475530(v148, &v123, 3577643008LL, 27111902);
      if ( v148[0] )
        v73 = 0;
      else
        v73 = *(_QWORD *)&v148[8];
      v170 = 0;
      v74 = sub_1403C6C20(&v143, v159, v73);
      LODWORD(v152) = v64;
      LOBYTE(v74) = (v68 | v74) & 1;
      v55 = *(_QWORD *)(v54 + 112);
      v53 = v74;
    }
    v50 = v54 + 424;
    *(_QWORD *)(v54 + 112) = 2;
    v75 = *(_QWORD *)(v54 + 152);
    *(_QWORD *)(v54 + 152) = 2;
    v47 = v55 ^ 2 | v75 ^ 2;
    LOBYTE(v47) = v47 != 0;
    LOBYTE(v52) = v47 | (unsigned __int8)v52;
  }
  if ( (v53 & 1) != 0 )
  {
    sub_1403C75B0(&v123);
    if ( (_DWORD)v123 != -1 )
    {
      *(_OWORD *)&v148[80] = v128;
      *(_OWORD *)&v148[64] = v127;
      *(_OWORD *)&v148[48] = v126;
      *(_OWORD *)&v148[32] = v125;
      *(_OWORD *)&v148[16] = v124;
      *(_OWORD *)v148 = v123;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v139[0] = v148;
        v139[1] = sub_140B036A0;
        *(_QWORD *)v159 = 0;
        *(_QWORD *)&v159[8] = aCodexmateLibCo_16;
        *(_OWORD *)&v159[16] = 0x1Fu;
        *(_QWORD *)&v159[32] = aSrcCoreReposit;
        *(_QWORD *)&v159[40] = 22;
        *(_QWORD *)&v159[48] = 2;
        *(_QWORD *)&v159[56] = aCodexmateLibCo_16;
        *(_QWORD *)&v159[64] = 31;
        *(_QWORD *)&v159[72] = 0x94200000001LL;
        *(_QWORD *)&v159[80] = &unk_14174E9C1;
        *(_QWORD *)&v159[88] = v139;
        sub_1412C36A0(&v154, v159);
      }
      v43 = *(_BYTE **)&v148[8];
      v41 = *(_QWORD *)v148;
      v133 = *(_OWORD *)&v148[16];
      v134 = *(_OWORD *)&v148[32];
      v135 = *(_OWORD *)&v148[48];
      v136 = *(_OWORD *)&v148[64];
      v137 = *(_OWORD *)&v148[80];
      if ( *(_QWORD *)v148 != -1 )
      {
        v127 = v137;
        v126 = v136;
        v125 = v135;
        v124 = v134;
        v123 = v133;
        v77 = v143.m256i_i64[2];
        v76 = v143.m256i_i64[1];
        if ( !v143.m256i_i64[2] )
          goto LABEL_157;
        goto LABEL_153;
      }
    }
    v44 = v167;
  }
  v41 = -1;
  if ( ((unsigned __int8)v52 & 1) != 0 )
  {
    *(_DWORD *)v148 = sub_141475580(
                        v47,
                        v53,
                        v48,
                        v49,
                        v103,
                        v104,
                        v105.m256i_i64[0],
                        v105.m256i_i64[1],
                        v105.m256i_i64[2],
                        v105.m256i_i64[3],
                        v106,
                        v107,
                        v108,
                        v109,
                        v110,
                        v111,
                        v112,
                        v113,
                        *((_QWORD *)&v113 + 1),
                        v114,
                        v115,
                        *((_QWORD *)&v115 + 1),
                        v116);
    *(_DWORD *)&v148[4] = v81;
    sub_141475530(v159, v148, 3577643008LL, 27111902);
    if ( v159[0] )
      v82 = 0;
    else
      v82 = *(_QWORD *)&v159[8];
    *(_QWORD *)&v147[72] = v82;
    persist_registry(v159, v44, (__int64)v147, 0);
    v41 = *(_QWORD *)v159;
    if ( *(_QWORD *)v159 == -1 )
    {
      v41 = -1;
      v77 = v143.m256i_i64[2];
      v76 = v143.m256i_i64[1];
      if ( !v143.m256i_i64[2] )
        goto LABEL_157;
    }
    else
    {
      v43 = *(_BYTE **)&v159[8];
      v123 = *(_OWORD *)&v159[16];
      v124 = *(_OWORD *)&v159[32];
      v125 = *(_OWORD *)&v159[48];
      v126 = *(_OWORD *)&v159[64];
      v127 = *(_OWORD *)&v159[80];
      v77 = v143.m256i_i64[2];
      v76 = v143.m256i_i64[1];
      if ( !v143.m256i_i64[2] )
        goto LABEL_157;
    }
  }
  else
  {
    v77 = v143.m256i_i64[2];
    v76 = v143.m256i_i64[1];
    if ( !v143.m256i_i64[2] )
      goto LABEL_157;
  }
LABEL_153:
  v83 = (_QWORD *)(v76 + 128);
  do
  {
    v84 = *(v83 - 1);
    if ( v84 )
      sub_140001660(*v83, v84, 1);
    v83 += 20;
    --v77;
  }
  while ( v77 );
LABEL_157:
  if ( v143.m256i_i64[0] )
    sub_140001660(v76, 160 * v143.m256i_i64[0], 8);
  sub_14034DF40(v147);
  *(_QWORD *)v159 = sub_1412018B0(&v166);
  if ( *(_QWORD *)v159 )
    sub_140018650(v159);
  CloseHandle(v166);
  if ( v41 != -1 )
    goto LABEL_162;
LABEL_166:
  result = v122;
  *(_QWORD *)(v122 + 24) = v158;
  *(_OWORD *)(result + 8) = v157;
  *(_QWORD *)result = -1;
  return result;
}