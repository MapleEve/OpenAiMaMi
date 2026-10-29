// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x1401b9e10 | successor of pre-update 0x14019f190 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.927, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int128 *__fastcall sub_1401B9E10(
        __int128 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  _OWORD *v17; // rcx
  int v18; // r14d
  int v19; // edx
  int v20; // r12d
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v26; // xmm0
  char v27; // al
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  void (__fastcall *v33)(__int64, const char *, __int64); // rax
  __int64 v34; // r12
  int v35; // edx
  int v36; // r13d
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int128 v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm3
  int v43; // edi
  __int64 v44; // rdi
  __int64 v45; // rbx
  _QWORD *v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rbx
  _QWORD *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // edx
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  void (__fastcall *v60)(__int64, const char *, __int64); // rax
  int v61; // r12d
  int v62; // edx
  int v63; // r13d
  __int64 v64; // r8
  __int64 v65; // rcx
  char v66; // al
  int v67; // r12d
  int v68; // edx
  int v69; // r13d
  __int64 v70; // rdx
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm2
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  __int64 v83; // r15
  unsigned int v84; // edx
  unsigned int v85; // r12d
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r13
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  int v92; // r15d
  int v93; // edx
  int v94; // r12d
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm2
  int v98; // edx
  __int128 v99; // kr20_16
  __int128 v100; // kr30_16
  __int64 v101; // r13
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int64 v104; // r14
  unsigned int v105; // edx
  unsigned int v106; // r15d
  __int64 v107; // rax
  __int64 v108; // rcx
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm2
  int v112; // ebx
  int v113; // edx
  int v114; // r14d
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm2
  char v118; // bl
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdi
  __int64 v122; // rax
  char v123; // al
  __int64 v124; // [rsp+20h] [rbp-60h]
  _BYTE v125[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v126[24]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v127[24]; // [rsp+78h] [rbp-8h] BYREF
  _BYTE v128[24]; // [rsp+90h] [rbp+10h] BYREF
  _BYTE v129[24]; // [rsp+A8h] [rbp+28h] BYREF
  _BYTE v130[24]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v131[24]; // [rsp+D8h] [rbp+58h] BYREF
  _BYTE v132[24]; // [rsp+F0h] [rbp+70h] BYREF
  _BYTE v133[24]; // [rsp+108h] [rbp+88h] BYREF
  _BYTE v134[24]; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v135; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v136; // [rsp+148h] [rbp+C8h]
  __int128 v137; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v138; // [rsp+160h] [rbp+E0h]
  __int128 v139; // [rsp+170h] [rbp+F0h]
  __int128 v140; // [rsp+180h] [rbp+100h]
  __int128 v141; // [rsp+190h] [rbp+110h]
  _QWORD v142[2]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v143; // [rsp+1B0h] [rbp+130h]
  __int128 v144; // [rsp+1C0h] [rbp+140h]
  __int128 v145; // [rsp+1D0h] [rbp+150h]
  __int128 v146; // [rsp+1E0h] [rbp+160h]
  __int128 v147; // [rsp+1F0h] [rbp+170h]
  __int128 v148; // [rsp+200h] [rbp+180h] BYREF
  __int128 v149; // [rsp+210h] [rbp+190h]
  __int128 v150; // [rsp+220h] [rbp+1A0h]
  __int128 v151; // [rsp+230h] [rbp+1B0h]
  __int128 v152; // [rsp+240h] [rbp+1C0h]
  unsigned __int128 v153; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v154; // [rsp+260h] [rbp+1E0h]
  __int128 v155; // [rsp+270h] [rbp+1F0h]
  __int128 v156; // [rsp+280h] [rbp+200h]
  __int128 v157; // [rsp+290h] [rbp+210h]
  _BYTE v158[88]; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v159; // [rsp+2F8h] [rbp+278h]
  char v160[136]; // [rsp+308h] [rbp+288h] BYREF
  _OWORD v161[2]; // [rsp+390h] [rbp+310h] BYREF
  __int64 v162; // [rsp+3B0h] [rbp+330h]
  __int64 v163; // [rsp+3B8h] [rbp+338h]
  __int64 v164; // [rsp+3C0h] [rbp+340h]
  __int64 v165; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v166; // [rsp+3D8h] [rbp+358h] BYREF
  __int64 v167; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v168; // [rsp+3E8h] [rbp+368h] BYREF
  __int64 v169; // [rsp+3F8h] [rbp+378h] BYREF
  __int64 v170; // [rsp+400h] [rbp+380h] BYREF
  __int128 v171; // [rsp+408h] [rbp+388h]
  int v172; // [rsp+41Ch] [rbp+39Ch]
  __int128 v173; // [rsp+420h] [rbp+3A0h] BYREF
  __int64 v174; // [rsp+430h] [rbp+3B0h]
  __int128 v175; // [rsp+438h] [rbp+3B8h] BYREF
  __int64 v176; // [rsp+448h] [rbp+3C8h]
  unsigned __int128 v177; // [rsp+450h] [rbp+3D0h] BYREF
  __int128 v178; // [rsp+460h] [rbp+3E0h]
  __int128 v179; // [rsp+470h] [rbp+3F0h]
  __int128 v180; // [rsp+480h] [rbp+400h]
  __int128 v181; // [rsp+490h] [rbp+410h]
  __int128 v182; // [rsp+4A0h] [rbp+420h]
  __int64 v183; // [rsp+4B8h] [rbp+438h]
  _BYTE v184[104]; // [rsp+4C0h] [rbp+440h] BYREF
  char v185[146]; // [rsp+528h] [rbp+4A8h] BYREF
  char v186; // [rsp+5BAh] [rbp+53Ah] BYREF
  char v187; // [rsp+5BBh] [rbp+53Bh]
  char v188; // [rsp+5BCh] [rbp+53Ch] BYREF
  char v189; // [rsp+5BDh] [rbp+53Dh]
  char v190; // [rsp+5BEh] [rbp+53Eh]
  char v191; // [rsp+5BFh] [rbp+53Fh]
  __int64 v192; // [rsp+5C0h] [rbp+540h]

  v192 = -2;
  v137 = a5;
  sub_1407E52E0(v184);
  if ( *(_DWORD *)v184 != -1 || (sub_1408D1F30(v184, a2), *(_DWORD *)v184 != -1) )
  {
    a1[5] = *(_OWORD *)&v184[80];
    a1[4] = *(_OWORD *)&v184[64];
    v13 = *(_OWORD *)v184;
    v14 = *(_OWORD *)&v184[16];
    v15 = *(_OWORD *)&v184[32];
    a1[3] = *(_OWORD *)&v184[48];
    a1[2] = v15;
    a1[1] = v14;
    *a1 = v13;
    return a1;
  }
  nullsub_1(v12, v11);
  v183 = sub_140001650(24, 8);
  if ( !v183 )
    sub_14196B2C1(8, 24);
  *(_QWORD *)v184 = &v137;
  *(_QWORD *)&v184[8] = sub_140191200;
  sub_1416DAFA0(&v135, &unk_141A05E7C, v184);
  v17 = (_OWORD *)v183;
  *(_QWORD *)(v183 + 16) = v136;
  *v17 = v135;
  *(_QWORD *)&v175 = 1;
  *((_QWORD *)&v175 + 1) = v17;
  v176 = 1;
  *(_QWORD *)&v173 = 0;
  *((_QWORD *)&v173 + 1) = 8;
  v174 = 0;
  v187 = 1;
  v18 = sub_1416AEBD0();
  v20 = v19;
  if ( *(_DWORD *)a4 != -1 )
  {
    v187 = 1;
    v21 = sub_140CF1FB0(a4, a2);
    v22 = -1;
    v23 = a4;
    if ( v21 )
      goto LABEL_12;
    v187 = 1;
    sub_140193850(v184, a4);
    v22 = *(_QWORD *)v184;
    if ( *(_QWORD *)v184 != -1 )
    {
      v23 = *(_QWORD *)&v184[8];
      *(_OWORD *)v158 = *(_OWORD *)&v184[16];
      *(_OWORD *)&v158[16] = *(_OWORD *)&v184[32];
      *(_OWORD *)&v158[32] = *(_OWORD *)&v184[48];
      *(_OWORD *)&v158[48] = *(_OWORD *)&v184[64];
      *(_OWORD *)&v158[64] = *(_OWORD *)&v184[80];
LABEL_11:
      v181 = *(_OWORD *)&v158[64];
      v29 = *(_OWORD *)v158;
      v30 = *(_OWORD *)&v158[16];
      v31 = *(_OWORD *)&v158[32];
      v32 = *(_OWORD *)&v158[48];
      v180 = *(_OWORD *)&v158[48];
      v179 = *(_OWORD *)&v158[32];
      v178 = *(_OWORD *)&v158[16];
      v177 = *(_OWORD *)v158;
      a1[5] = *(_OWORD *)&v158[64];
      a1[4] = v32;
      a1[3] = v31;
      a1[2] = v30;
      a1[1] = v29;
      *(_QWORD *)a1 = v22;
      *((_QWORD *)a1 + 1) = v23;
LABEL_23:
      v44 = *((_QWORD *)&v173 + 1);
      v45 = v174;
      if ( v174 )
      {
        v46 = (_QWORD *)(*((_QWORD *)&v173 + 1) + 8LL);
        do
        {
          v47 = *(v46 - 1);
          if ( v47 )
            sub_140001660(*v46, v47, 1);
          v46 += 3;
          --v45;
        }
        while ( v45 );
      }
      if ( (_QWORD)v173 )
        sub_140001660(v44, 24 * v173, 8);
      v48 = *((_QWORD *)&v175 + 1);
      v49 = v176;
      if ( v176 )
      {
        v50 = (_QWORD *)(*((_QWORD *)&v175 + 1) + 8LL);
        do
        {
          v51 = *(v50 - 1);
          if ( v51 )
            sub_140001660(*v50, v51, 1);
          v50 += 3;
          --v49;
        }
        while ( v49 );
      }
      if ( (_QWORD)v175 )
        sub_140001660(v48, 24 * v175, 8);
      return a1;
    }
  }
  v24 = *(_QWORD *)(a4 + 104);
  v25 = *(_QWORD *)(a4 + 112);
  v26 = *(_OWORD *)(a4 + 128);
  v27 = *(_BYTE *)(a4 + 168) ^ 1;
  v28 = *(_OWORD *)(a4 + 152);
  v187 = 1;
  sub_140D5D420((unsigned int)v184, a2, v24, v25, v26, *((__int64 *)&v26 + 1), v27, v28, *((__int64 *)&v28 + 1));
  v22 = *(_QWORD *)&v184[8];
  v23 = *(_QWORD *)&v184[16];
  *(_OWORD *)v158 = *(_OWORD *)&v184[24];
  *(_OWORD *)&v158[16] = *(_OWORD *)&v184[40];
  *(_OWORD *)&v158[32] = *(_OWORD *)&v184[56];
  *(_OWORD *)&v158[48] = *(_OWORD *)&v184[72];
  *(_OWORD *)&v158[64] = *(_OWORD *)&v184[88];
  if ( *(_DWORD *)v184 == 1 )
    goto LABEL_11;
LABEL_12:
  v181 = *(_OWORD *)&v158[64];
  v180 = *(_OWORD *)&v158[48];
  v143 = *(_OWORD *)v158;
  v144 = *(_OWORD *)&v158[16];
  v145 = *(_OWORD *)&v158[32];
  v146 = *(_OWORD *)&v158[48];
  v147 = *(_OWORD *)&v158[64];
  v142[0] = v22;
  v142[1] = v23;
  v158[0] = v22 == -1;
  *(_QWORD *)v184 = v158;
  *(_QWORD *)&v184[8] = sub_1416EBC20;
  *(_QWORD *)&v184[16] = a4 + 168;
  *(_QWORD *)&v184[24] = sub_1416EBC20;
  v189 = 1;
  sub_1416DAFA0(v128, &unk_141A05EA7, v184);
  v189 = 1;
  sub_1401B9B80(0, (unsigned int)aCatalogPreflig, 17, v18, v20, (__int64)v128);
  if ( a6 )
  {
    v33 = *(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32);
    v189 = 1;
    v33(a6, aStartingProxy, 14);
  }
  v189 = 1;
  v34 = sub_1416AEBD0();
  v36 = v35;
  v189 = 1;
  sub_140EA0010(v184, a3);
  v37 = *(_QWORD *)v184;
  if ( *(_QWORD *)v184 != -1 )
  {
    v38 = *(_QWORD *)&v184[8];
    v39 = *(_OWORD *)&v184[16];
    v138 = *(_OWORD *)&v184[32];
    v139 = *(_OWORD *)&v184[48];
    v140 = *(_OWORD *)&v184[64];
    v141 = *(_OWORD *)&v184[80];
LABEL_16:
    *(_QWORD *)a1 = v37;
    *((_QWORD *)a1 + 1) = v38;
    a1[1] = v39;
    v40 = v139;
    v41 = v140;
    v42 = v141;
    a1[2] = v138;
    a1[3] = v40;
    a1[4] = v41;
    a1[5] = v42;
LABEL_17:
    v43 = v142[0];
    if ( v142[0] != -1 )
    {
      if ( (_QWORD)v146 )
        sub_140001660(*((_QWORD *)&v146 + 1), v146, 1);
      if ( v43 != 2 && (_QWORD)v143 )
        sub_140001660(*((_QWORD *)&v143 + 1), v143, 1);
    }
    goto LABEL_23;
  }
  v52 = *(_QWORD *)(a3 + 24);
  v189 = 1;
  sub_140E9DDF0(v184, v52);
  if ( *(_QWORD *)v184 == -1 )
  {
    nullsub_1(v54, v53);
    v38 = 49;
    *(_QWORD *)&v39 = sub_140001650(49, 1);
    if ( !(_QWORD)v39 )
    {
      v189 = 1;
      sub_14196B2DB(1, 49);
    }
    qmemcpy((void *)v39, "relay proxy started without an available root URL", 49);
    v37 = 10;
    *((_QWORD *)&v39 + 1) = 49;
    goto LABEL_16;
  }
  v170 = *(_QWORD *)v184;
  v171 = *(_OWORD *)&v184[8];
  LOBYTE(v167) = 0;
  *(_QWORD *)&v161[0] = aProxyStarted;
  *((_QWORD *)&v161[0] + 1) = 13;
  *(_QWORD *)&v148 = v34;
  DWORD2(v148) = v36;
  v191 = 1;
  v55 = sub_1416AED20(&v148);
  v153 = 0x3E8 * (unsigned __int128)(unsigned __int64)v55 + v56 / 0xF4240uLL;
  *(_QWORD *)&v177 = aProxyRootPrese;
  *((_QWORD *)&v177 + 1) = 23;
  *(_QWORD *)v184 = &v167;
  *(_QWORD *)&v184[8] = sub_14022B3D0;
  *(_QWORD *)&v184[16] = v161;
  *(_QWORD *)&v184[24] = sub_140191200;
  *(_QWORD *)&v184[32] = &v153;
  *(_QWORD *)&v184[40] = sub_1416E85A0;
  *(_QWORD *)&v184[48] = &v177;
  *(_QWORD *)&v184[56] = sub_140191200;
  v191 = 1;
  sub_1416DAFA0(v158, &unk_141A05E3B, v184);
  v191 = 1;
  sub_1406C9730((unsigned int)aRouterTransiti, 17, (unsigned int)aPhaseTiming, 12, (__int64)v158);
  v191 = 1;
  sub_14098E080(v184);
  if ( *(_DWORD *)v184 != -1 )
  {
    a1[5] = *(_OWORD *)&v184[80];
    a1[4] = *(_OWORD *)&v184[64];
    v57 = *(_OWORD *)v184;
    v58 = *(_OWORD *)&v184[16];
    v59 = *(_OWORD *)&v184[32];
    a1[3] = *(_OWORD *)&v184[48];
    a1[2] = v59;
    a1[1] = v58;
    *a1 = v57;
    goto LABEL_47;
  }
  if ( a6 )
  {
    v60 = *(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32);
    v191 = 1;
    v60(a6, aPreparingAuth, 14);
  }
  v191 = 1;
  v61 = sub_1416AEBD0();
  v63 = v62;
  v64 = *(unsigned __int8 *)(a4 + 168);
  v191 = 1;
  sub_1407D21A0(v184, a2, v64);
  v65 = *(_QWORD *)v184;
  v66 = v184[8];
  if ( *(_QWORD *)v184 != -1 )
    goto LABEL_46;
  v188 = v184[8];
  *(_QWORD *)v184 = &v188;
  *(_QWORD *)&v184[8] = sub_1416EBC20;
  v191 = 1;
  sub_1416DAFA0(v134, &unk_141A05F15, v184);
  v191 = 1;
  sub_1401B9B80(0, (unsigned int)aAuthPreflight, 14, v61, v63, (__int64)v134);
  v191 = 1;
  v67 = sub_1416AEBD0();
  v69 = v68;
  v191 = 1;
  sub_140998FD0(v184, a2);
  v65 = *(_QWORD *)v184;
  v66 = v184[8];
  if ( *(_QWORD *)v184 != -1 )
  {
LABEL_46:
    *((_QWORD *)a1 + 11) = *(_QWORD *)&v184[88];
    *(__int128 *)((char *)a1 + 73) = *(_OWORD *)&v184[73];
    v71 = *(_OWORD *)&v184[9];
    v72 = *(_OWORD *)&v184[25];
    v73 = *(_OWORD *)&v184[41];
    *(__int128 *)((char *)a1 + 57) = *(_OWORD *)&v184[57];
    *(__int128 *)((char *)a1 + 41) = v73;
    *(__int128 *)((char *)a1 + 25) = v72;
    *(__int128 *)((char *)a1 + 9) = v71;
    *(_QWORD *)a1 = v65;
    *((_BYTE *)a1 + 8) = v66;
    goto LABEL_47;
  }
  v186 = v184[8];
  if ( (v184[8] & 1) != 0 )
  {
    nullsub_1(-1, v70);
    v74 = sub_140001650(37, 1);
    if ( !v74 )
    {
      v191 = 1;
      sub_14196B2DB(1, 37);
    }
    *(_OWORD *)(v74 + 16) = xmmword_141A05F46;
    *(_OWORD *)v74 = xmmword_141A05F36;
    *(_QWORD *)(v74 + 29) = 0x98A2E9AE97E982B1uLL;
    *(_QWORD *)v184 = 37;
    *(_QWORD *)&v184[8] = v74;
    *(_QWORD *)&v184[16] = 37;
    v191 = 1;
    sub_1401E7610(&v175, v184);
  }
  v191 = 1;
  sub_1401BB9B0(v184, a2);
  v75 = *(_QWORD *)v184;
  *(_OWORD *)v158 = *(_OWORD *)&v184[8];
  *(_OWORD *)&v158[16] = *(_OWORD *)&v184[24];
  *(_OWORD *)&v158[32] = *(_OWORD *)&v184[40];
  *(_OWORD *)&v158[48] = *(_OWORD *)&v184[56];
  *(_OWORD *)&v158[64] = *(_OWORD *)&v184[72];
  if ( *(_QWORD *)v184 != -1 )
  {
    v76 = *(_QWORD *)&v184[88];
    *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v158[64];
    v77 = *(_OWORD *)v158;
    v78 = *(_OWORD *)&v158[16];
    v79 = *(_OWORD *)&v158[32];
    *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v158[48];
    *(__int128 *)((char *)a1 + 40) = v79;
    *(__int128 *)((char *)a1 + 24) = v78;
    *(__int128 *)((char *)a1 + 8) = v77;
    *(_QWORD *)a1 = v75;
    *((_QWORD *)a1 + 11) = v76;
    goto LABEL_47;
  }
  v152 = *(_OWORD *)&v158[64];
  v148 = *(_OWORD *)v158;
  v149 = *(_OWORD *)&v158[16];
  v150 = *(_OWORD *)&v158[32];
  v151 = *(_OWORD *)&v158[48];
  if ( *(_QWORD *)&v158[64] )
  {
    v190 = 1;
    sub_1406C5480((unsigned int)v184, DWORD2(v151), *(_DWORD *)&v158[64], (unsigned int)&unk_141A05F6A, 3);
    *(_QWORD *)&v158[16] = *(_QWORD *)&v184[16];
    *(_OWORD *)v158 = *(_OWORD *)v184;
    *(_QWORD *)v184 = v158;
    *(_QWORD *)&v184[8] = sub_1400015F0;
    sub_1416DAFA0(v133, &unk_141A05F6D, v184);
    if ( *(_QWORD *)v158 )
      sub_140001660(*(_QWORD *)&v158[8], *(_QWORD *)v158, 1);
    v190 = 1;
    sub_1401E7610(&v173, v133);
  }
  v166 = v149;
  v165 = *((_QWORD *)&v150 + 1);
  if ( (unsigned __int64)v149 | *((_QWORD *)&v150 + 1) )
  {
    *(_QWORD *)v184 = &v166;
    *(_QWORD *)&v184[8] = sub_1416EBAE0;
    *(_QWORD *)&v184[16] = &v165;
    *(_QWORD *)&v184[24] = sub_1416EBAE0;
    v190 = 1;
    sub_1416DAFA0(v132, &unk_141A05FE6, v184);
    v190 = 1;
    sub_1401E7610(&v175, v132);
  }
  *(_QWORD *)v184 = &v186;
  *(_QWORD *)&v184[8] = sub_1416EBC20;
  *(_QWORD *)&v184[16] = &v166;
  *(_QWORD *)&v184[24] = sub_1416EBAE0;
  *(_QWORD *)&v184[32] = &v165;
  *(_QWORD *)&v184[40] = sub_1416EBAE0;
  v190 = 1;
  sub_1416DAFA0(v127, &unk_141A06017, v184);
  v190 = 1;
  sub_1401B9B80(0, (unsigned int)aConfigTakeover, 15, v67, v69, (__int64)v127);
  v190 = 1;
  sub_14098E080(v184);
  if ( *(_DWORD *)v184 != -1 )
  {
    a1[5] = *(_OWORD *)&v184[80];
    a1[4] = *(_OWORD *)&v184[64];
    v80 = *(_OWORD *)v184;
    v81 = *(_OWORD *)&v184[16];
    v82 = *(_OWORD *)&v184[32];
    a1[3] = *(_OWORD *)&v184[48];
    a1[2] = v82;
    a1[1] = v81;
    *a1 = v80;
LABEL_83:
    sub_1401B0D60(&v148);
LABEL_47:
    if ( v170 )
      sub_140001660(v171, v170, 1);
    goto LABEL_17;
  }
  v190 = 1;
  v83 = sub_1416AEBD0();
  v85 = v84;
  v190 = 1;
  v86 = sub_140AA0D00(&off_141A05870);
  v161[1] = xmmword_141A058A0;
  v161[0] = *(_OWORD *)&off_141A05890;
  v162 = v86;
  v163 = v87;
  v164 = 0;
  *(_QWORD *)&v153 = aAimai1_0;
  *((_QWORD *)&v153 + 1) = 6;
  LOWORD(v154) = 0;
  sub_1407DFB00((unsigned int)v184, a2, (unsigned int)&v153, 0, v124, (__int64)v161);
  v88 = *(_QWORD *)v184;
  v177 = *(_OWORD *)&v184[8];
  v178 = *(_OWORD *)&v184[24];
  v179 = *(_OWORD *)&v184[40];
  v180 = *(_OWORD *)&v184[56];
  v181 = *(_OWORD *)&v184[72];
  v182 = *(_OWORD *)&v184[88];
  if ( *(_QWORD *)v184 == 2 )
  {
    a1[5] = v182;
    a1[4] = v181;
    v89 = v177;
    v90 = v178;
    v91 = v179;
    a1[3] = v180;
    a1[2] = v91;
    a1[1] = v90;
    *a1 = v89;
LABEL_82:
    v190 = 1;
    sub_14018E6E0(v161);
    goto LABEL_83;
  }
  sub_1419234B0(v160, v185, 136);
  *(_OWORD *)&v158[8] = v177;
  *(_OWORD *)&v158[24] = v178;
  *(_OWORD *)&v158[40] = v179;
  *(_OWORD *)&v158[56] = v180;
  *(_OWORD *)&v158[72] = v181;
  v159 = v182;
  *(_QWORD *)v158 = v88;
  sub_1401F5870(0, v83, v85, v158);
  sub_1401F62A0(&v177, aRouteron, 8, v158);
  *(_QWORD *)v184 = *((_QWORD *)&v177 + 1);
  *(_QWORD *)&v184[8] = *((_QWORD *)&v177 + 1);
  *(_QWORD *)&v184[16] = v177;
  *(_QWORD *)&v184[24] = *((_QWORD *)&v177 + 1) + 24 * v178;
  sub_14021AD20(&v175, v184);
  sub_1401F6690(&v173, aRouteron, 8, v158);
  if ( a6 )
    (*(void (__fastcall **)(__int64, const char *, __int64))(a7 + 32))(a6, aWritingConfig, 14);
  v92 = sub_1416AEBD0();
  v94 = v93;
  *(_QWORD *)&v177 = a2;
  *((_QWORD *)&v177 + 1) = a4;
  *(_QWORD *)&v178 = &v170;
  *((_QWORD *)&v178 + 1) = &v188;
  *(_QWORD *)&v179 = v142;
  sub_1401BC110(v184, &v177);
  if ( *(_DWORD *)v184 != -1 )
  {
    a1[5] = *(_OWORD *)&v184[80];
    a1[4] = *(_OWORD *)&v184[64];
    v95 = *(_OWORD *)v184;
    v96 = *(_OWORD *)&v184[16];
    v97 = *(_OWORD *)&v184[32];
    a1[3] = *(_OWORD *)&v184[48];
    a1[2] = v97;
    a1[1] = v96;
    *a1 = v95;
LABEL_81:
    sub_1401B1080(v158);
    goto LABEL_82;
  }
  sub_1401B9CF0(0, v92, v94, (unsigned int)&unk_141A06086, 19);
  v183 = sub_1416AEBD0();
  v172 = v98;
  sub_140A8CD80(v184, a2);
  v99 = *(_OWORD *)v184;
  v100 = *(_OWORD *)&v184[16];
  v101 = *(_QWORD *)&v184[32];
  if ( *(_QWORD *)v184 != -1 )
  {
    *((_QWORD *)a1 + 11) = *(_QWORD *)&v184[88];
    v102 = *(_OWORD *)&v184[40];
    v103 = *(_OWORD *)&v184[56];
    *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v184[72];
    *(__int128 *)((char *)a1 + 56) = v103;
    *(__int128 *)((char *)a1 + 40) = v102;
    *a1 = v99;
    a1[1] = v100;
    *((_QWORD *)a1 + 4) = v101;
    goto LABEL_81;
  }
  v167 = *(_QWORD *)&v184[8];
  v168 = *(_OWORD *)&v184[16];
  v169 = *(_QWORD *)&v184[32];
  *(_QWORD *)v184 = &v167;
  *(_QWORD *)&v184[8] = sub_1416EBAE0;
  *(_QWORD *)&v184[16] = &v168;
  *(_QWORD *)&v184[24] = sub_1416EBAE0;
  *(_QWORD *)&v184[32] = (char *)&v168 + 8;
  *(_QWORD *)&v184[40] = sub_1416EBAE0;
  *(_QWORD *)&v184[48] = &v169;
  *(_QWORD *)&v184[56] = sub_1416EBAE0;
  sub_1416DAFA0(v131, &unk_141A06099, v184);
  sub_1401B9B80(0, (unsigned int)aModelRestore, 13, v183, v172, (__int64)v131);
  if ( v101 | *((_QWORD *)&v99 + 1) )
  {
    *(_QWORD *)&v177 = v100 + *((_QWORD *)&v100 + 1);
    *(_QWORD *)v184 = &v167;
    *(_QWORD *)&v184[8] = sub_1416EBAE0;
    *(_QWORD *)&v184[16] = &v177;
    *(_QWORD *)&v184[24] = sub_1416EBAE0;
    *(_QWORD *)&v184[32] = &v169;
    *(_QWORD *)&v184[40] = sub_1416EBAE0;
    sub_1416DAFA0(v130, &unk_141A060E2, v184);
    sub_1401E7610(&v175, v130);
    if ( v101 )
    {
      *(_QWORD *)v184 = &v169;
      *(_QWORD *)&v184[8] = sub_1416EBAE0;
      sub_1416DAFA0(v129, &unk_141A06132, v184);
      sub_1401E7610(&v173, v129);
    }
  }
  v104 = sub_1416AEBD0();
  v106 = v105;
  sub_140808CB0(v184, a2, v161);
  v107 = *(_QWORD *)v184;
  v177 = *(_OWORD *)&v184[8];
  v178 = *(_OWORD *)&v184[24];
  v179 = *(_OWORD *)&v184[40];
  v180 = *(_OWORD *)&v184[56];
  v181 = *(_OWORD *)&v184[72];
  if ( *(_QWORD *)v184 != -1 )
  {
    v108 = *(_QWORD *)&v184[88];
    *(__int128 *)((char *)a1 + 72) = v181;
    v109 = v177;
    v110 = v178;
    v111 = v179;
    *(__int128 *)((char *)a1 + 56) = v180;
    *(__int128 *)((char *)a1 + 40) = v111;
    *(__int128 *)((char *)a1 + 24) = v110;
    *(__int128 *)((char *)a1 + 8) = v109;
    *(_QWORD *)a1 = v107;
    *((_QWORD *)a1 + 11) = v108;
    goto LABEL_81;
  }
  v153 = v177;
  v154 = v178;
  v155 = v179;
  v156 = v180;
  v157 = v181;
  sub_1401F65A0(v104, v106, &v153);
  sub_1401F6A40(&v177, &v153);
  *(_QWORD *)v184 = *((_QWORD *)&v177 + 1);
  *(_QWORD *)&v184[8] = *((_QWORD *)&v177 + 1);
  *(_QWORD *)&v184[16] = v177;
  *(_QWORD *)&v184[24] = *((_QWORD *)&v177 + 1) + 24 * v178;
  sub_14021AD20(&v175, v184);
  *(_QWORD *)&v177 = v164;
  *(_QWORD *)v184 = &v177;
  *(_QWORD *)&v184[8] = sub_1416EBAE0;
  sub_1416DAFA0(v126, &unk_141A06153, v184);
  sub_1406C9730((unsigned int)aRouterTransiti, 17, (unsigned int)aThreadReadReus, 17, (__int64)v126);
  if ( v188 && (sub_1401F7250((unsigned int)v184, a2, v171, DWORD2(v171), a4), *(_DWORD *)v184 != -1)
    || (sub_14098E080(v184), *(_DWORD *)v184 != -1)
    || (v112 = sub_1416AEBD0(), v114 = v113, sub_1407D2310(v184, a2), *(_DWORD *)v184 != -1) )
  {
    a1[5] = *(_OWORD *)&v184[80];
    a1[4] = *(_OWORD *)&v184[64];
    v115 = *(_OWORD *)v184;
    v116 = *(_OWORD *)&v184[16];
    v117 = *(_OWORD *)&v184[32];
    a1[3] = *(_OWORD *)&v184[48];
    a1[2] = v117;
    a1[1] = v116;
    *a1 = v115;
    sub_1400290B0(&v153);
    goto LABEL_81;
  }
  *(_QWORD *)v184 = &v188;
  *(_QWORD *)&v184[8] = sub_1416EBC20;
  sub_1416DAFA0(v125, &unk_141A05F15, v184);
  sub_1401B9B80(0, (unsigned int)aAuthDetachedVe, 20, v112, v114, (__int64)v125);
  v118 = v188;
  nullsub_1(v120, v119);
  if ( v118 )
  {
    v121 = 85;
    v122 = sub_140001650(85, 1);
    if ( !v122 )
      sub_14196B2DB(1, 85);
    *(_OWORD *)(v122 + 64) = xmmword_141A0621F;
    *(_OWORD *)(v122 + 48) = xmmword_141A0620F;
    *(_OWORD *)(v122 + 32) = xmmword_141A061FF;
    *(_OWORD *)(v122 + 16) = xmmword_141A061EF;
    *(_OWORD *)v122 = xmmword_141A061DF;
    *(_QWORD *)(v122 + 77) = 0x81AFE8A4AEE8B788uLL;
  }
  else
  {
    v121 = 69;
    v122 = sub_140001650(69, 1);
    if ( !v122 )
      sub_14196B2DB(1, 69);
    *(_OWORD *)(v122 + 48) = xmmword_141A061CA;
    *(_OWORD *)(v122 + 32) = xmmword_141A061BA;
    *(_OWORD *)(v122 + 16) = xmmword_141A061AA;
    *(_OWORD *)v122 = xmmword_141A0619A;
    *(_QWORD *)(v122 + 61) = 0x8690E7A1AEE79F94uLL;
  }
  *(_QWORD *)v184 = v121;
  *(_QWORD *)&v184[8] = v122;
  *(_QWORD *)&v184[16] = v121;
  sub_1401E7610(&v175, v184);
  *(_QWORD *)&v184[16] = v176;
  *(_OWORD *)v184 = v175;
  *(_QWORD *)&v184[40] = v174;
  *(_OWORD *)&v184[24] = v173;
  v123 = v188;
  *(__int128 *)((char *)a1 + 8) = v175;
  *(__int128 *)((char *)a1 + 24) = *(_OWORD *)&v184[16];
  *(__int128 *)((char *)a1 + 40) = *(_OWORD *)&v184[32];
  *((_BYTE *)a1 + 56) = v123;
  *(_QWORD *)a1 = -1;
  sub_1400290B0(&v153);
  sub_1401B1080(v158);
  v190 = 0;
  sub_14018E6E0(v161);
  sub_1401B0D60(&v148);
  if ( v170 )
    sub_140001660(v171, v170, 1);
  sub_1401A4680(v142);
  return a1;
}
