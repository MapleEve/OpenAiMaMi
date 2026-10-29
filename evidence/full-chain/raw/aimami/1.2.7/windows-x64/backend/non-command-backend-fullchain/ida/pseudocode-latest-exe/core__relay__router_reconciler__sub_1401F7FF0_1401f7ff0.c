// win 1.2.7 latest-exe | module src/core/relay/router_reconciler.rs | ea 0x1401f7ff0 | successor of pre-update 0x14022b680 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.731, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1401F7FF0(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int128 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13)
{
  __int64 v17; // rax
  char v18; // r14
  __int64 v19; // rcx
  _OWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int128 v33; // kr00_16
  __int128 v34; // kr10_16
  __int128 v35; // xmm0
  _QWORD *v36; // r14
  __int64 v37; // rdx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int64 v41; // rdi
  __int64 v42; // rbx
  _QWORD *v43; // r14
  __int64 v44; // rdx
  int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r12
  _QWORD *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rbx
  bool v53; // bl
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  __int64 v65; // rax
  _OWORD *v66; // rax
  int v67; // r15d
  int v68; // edx
  int v69; // r12d
  __int64 v70; // rdx
  __int64 v71; // rcx
  char v72; // bl
  _OWORD *v73; // rax
  int v74; // ecx
  int v75; // edx
  int v76; // r12d
  _QWORD *v77; // rbx
  __int64 v78; // r15
  int v79; // ecx
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm2
  __int128 v83; // xmm3
  int v84; // edx
  int v85; // r12d
  int v86; // ecx
  __int64 v87; // rbx
  _QWORD *v88; // r14
  __int64 v89; // rdx
  int v90; // ecx
  __int64 v91; // r12
  unsigned int v92; // edx
  unsigned int v93; // r15d
  int v94; // ecx
  __int64 v95; // rcx
  _BYTE v96[24]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v97[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v98[24]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v99[24]; // [rsp+78h] [rbp-8h] BYREF
  _BYTE v100[24]; // [rsp+90h] [rbp+10h] BYREF
  _BYTE v101[24]; // [rsp+A8h] [rbp+28h] BYREF
  _BYTE v102[24]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v103[24]; // [rsp+D8h] [rbp+58h] BYREF
  _BYTE v104[24]; // [rsp+F0h] [rbp+70h] BYREF
  _BYTE v105[24]; // [rsp+108h] [rbp+88h] BYREF
  _BYTE v106[24]; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE v107[24]; // [rsp+138h] [rbp+B8h] BYREF
  _BYTE v108[24]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v109; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v110; // [rsp+178h] [rbp+F8h]
  __int128 v111; // [rsp+180h] [rbp+100h] BYREF
  _BYTE v112[24]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v113; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v114; // [rsp+1B8h] [rbp+138h]
  _QWORD v115[2]; // [rsp+1C0h] [rbp+140h] BYREF
  __m256i v116; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v117; // [rsp+1F0h] [rbp+170h]
  __int128 v118; // [rsp+200h] [rbp+180h]
  __int128 v119; // [rsp+210h] [rbp+190h]
  __int128 v120; // [rsp+220h] [rbp+1A0h]
  __m256i v121; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v122; // [rsp+250h] [rbp+1D0h]
  __int128 v123; // [rsp+260h] [rbp+1E0h]
  __int128 v124; // [rsp+270h] [rbp+1F0h]
  __int128 v125; // [rsp+280h] [rbp+200h]
  _QWORD *v126; // [rsp+298h] [rbp+218h] BYREF
  __int64 (__fastcall *v127)(); // [rsp+2A0h] [rbp+220h]
  _BYTE *v128; // [rsp+2A8h] [rbp+228h]
  __int64 (__fastcall *v129)(_QWORD, _QWORD); // [rsp+2B0h] [rbp+230h]
  int v130; // [rsp+2BCh] [rbp+23Ch]
  _BYTE v131[208]; // [rsp+2C0h] [rbp+240h] BYREF
  __m256i v132; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v133; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v134; // [rsp+3E0h] [rbp+360h]
  __int128 v135; // [rsp+3F0h] [rbp+370h]
  __int128 v136; // [rsp+400h] [rbp+380h]
  _BYTE v137[208]; // [rsp+410h] [rbp+390h] BYREF
  __int128 v138; // [rsp+500h] [rbp+480h] BYREF
  __int64 v139; // [rsp+510h] [rbp+490h]
  __int128 v140; // [rsp+518h] [rbp+498h] BYREF
  __int64 v141; // [rsp+528h] [rbp+4A8h]
  __int64 v142; // [rsp+530h] [rbp+4B0h]
  __int64 v143; // [rsp+538h] [rbp+4B8h]
  __int64 v144; // [rsp+540h] [rbp+4C0h]

  v144 = -2;
  v111 = a7;
  nullsub_1(a1, a2);
  v17 = sub_140001650(24, 8);
  if ( !v17 )
    sub_14196B2C1(8, 24);
  v143 = v17;
  *(_QWORD *)v137 = &v111;
  *(_QWORD *)&v137[8] = sub_140191200;
  sub_1416DAFA0(&v109, &unk_141A09755, v137);
  v18 = a8;
  v19 = v110;
  v20 = (_OWORD *)v143;
  *(_QWORD *)(v143 + 16) = v110;
  *v20 = v109;
  *(_QWORD *)&v138 = 1;
  *((_QWORD *)&v138 + 1) = v20;
  v139 = 1;
  *(_QWORD *)&v140 = 0;
  *((_QWORD *)&v140 + 1) = 8;
  v141 = 0;
  if ( !a9 )
  {
    nullsub_1(v19, v20);
    if ( !(_BYTE)a8 )
    {
      v30 = (void *)sub_140001650(70, 1);
      if ( !v30 )
        sub_14196B2DB(1, 70);
      qmemcpy(v30, "NativeOff strict reconciliation requires a verified Codex quiet window", 70);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 70;
      *(_QWORD *)(a1 + 16) = v30;
      *(_QWORD *)(a1 + 24) = 70;
      v31 = *((_QWORD *)&v140 + 1);
      v32 = v141;
      if ( !v141 )
        goto LABEL_28;
      goto LABEL_19;
    }
    v21 = sub_140001650(84, 1);
    if ( !v21 )
      sub_14196B2DB(1, 84);
    *(_OWORD *)(v21 + 64) = xmmword_141A097C1;
    *(_OWORD *)(v21 + 48) = xmmword_141A097B1;
    *(_OWORD *)(v21 + 32) = xmmword_141A097A1;
    *(_OWORD *)(v21 + 16) = xmmword_141A09791;
    *(_OWORD *)v21 = xmmword_141A09781;
    v143 = v21;
    *(_DWORD *)(v21 + 80) = -1517951591;
    v22 = v139;
    if ( v139 == (_QWORD)v138 )
      sub_141939F90(&v138);
    v23 = *((_QWORD *)&v138 + 1);
    v24 = 3 * v22;
    *(_QWORD *)(*((_QWORD *)&v138 + 1) + 8 * v24) = 84;
    v25 = v143;
    *(_QWORD *)(v23 + 8 * v24 + 8) = v143;
    *(_QWORD *)(v23 + 8 * v24 + 16) = 84;
    v139 = v22 + 1;
    nullsub_1(3 * v22, v25);
    v26 = sub_140001650(98, 1);
    if ( !v26 )
      sub_14196B2DB(1, 98);
    *(_OWORD *)(v26 + 80) = xmmword_141A09825;
    *(_OWORD *)(v26 + 64) = xmmword_141A09815;
    *(_OWORD *)(v26 + 48) = xmmword_141A09805;
    *(_OWORD *)(v26 + 32) = xmmword_141A097F5;
    *(_OWORD *)(v26 + 16) = xmmword_141A097E5;
    *(_OWORD *)v26 = xmmword_141A097D5;
    v143 = v26;
    *(_WORD *)(v26 + 96) = -32384;
    v27 = v141;
    if ( v141 == (_QWORD)v140 )
      sub_141939F90(&v140);
    v28 = *((_QWORD *)&v140 + 1);
    v29 = 3 * v27;
    *(_QWORD *)(*((_QWORD *)&v140 + 1) + 8 * v29) = 98;
    *(_QWORD *)(v28 + 8 * v29 + 8) = v143;
    *(_QWORD *)(v28 + 8 * v29 + 16) = 98;
    v141 = v27 + 1;
    *(_QWORD *)&v137[16] = v139;
    *(_OWORD *)v137 = v138;
    *(_QWORD *)&v137[40] = v27 + 1;
    *(_OWORD *)&v137[24] = v140;
    *(_OWORD *)(a1 + 8) = v138;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v137[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v137[16];
    *(_BYTE *)(a1 + 56) = 0;
    goto LABEL_13;
  }
  sub_14098CCF0(v137);
  if ( *(_QWORD *)v137 != -1 )
  {
    *(_OWORD *)&v131[80] = *(_OWORD *)&v137[80];
    *(_OWORD *)&v131[64] = *(_OWORD *)&v137[64];
    *(_OWORD *)&v131[48] = *(_OWORD *)&v137[48];
    *(_OWORD *)&v131[32] = *(_OWORD *)&v137[32];
    *(_OWORD *)v131 = *(_OWORD *)v137;
    *(_OWORD *)&v131[16] = *(_OWORD *)&v137[16];
    goto LABEL_18;
  }
  v132.m256i_i64[0] = *(_QWORD *)&v137[16];
  v132.m256i_i64[1] = *(_QWORD *)&v137[16];
  v132.m256i_i64[2] = *(_QWORD *)&v137[8];
  v132.m256i_i64[3] = *(_QWORD *)&v137[16] + 32LL * *(_QWORD *)&v137[24];
  sub_1401B5150(&v121, &v132);
  sub_14098C7D0(v131, &v121);
  if ( *(_DWORD *)v131 != -1 )
  {
LABEL_18:
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v131[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v131[64];
    v33 = *(_OWORD *)v131;
    v34 = *(_OWORD *)&v131[16];
    v35 = *(_OWORD *)&v131[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v131[48];
    *(_OWORD *)(a1 + 32) = v35;
    *(_OWORD *)(a1 + 16) = v34;
    *(_OWORD *)a1 = v33;
    v31 = *((_QWORD *)&v140 + 1);
    v32 = v141;
    if ( v141 )
      goto LABEL_19;
    goto LABEL_28;
  }
  if ( a10 )
    (*(void (__fastcall **)(__int64, const char *, __int64))(a11 + 32))(a10, aRestoringConfi, 16);
  sub_1407E52E0(v137);
  if ( *(_DWORD *)v137 == -1 )
  {
    sub_1408D1F30(v137, a2);
    if ( *(_DWORD *)v137 == -1 )
    {
      v143 = sub_1416AEBD0();
      v130 = v46;
      *(_QWORD *)&v137[16] = a3;
      *(_QWORD *)&v137[24] = a4;
      *(_OWORD *)&v137[32] = __PAIR128__(a6, a5);
      *(_QWORD *)v137 = 0;
      *(_WORD *)&v137[64] = 0;
      *(_OWORD *)&v137[48] = 8u;
      sub_14063BFC0(&v116, a2, v137, 0);
      if ( v116.m256i_i32[0] == -1 )
        goto LABEL_64;
      v136 = v120;
      v135 = v119;
      v134 = v118;
      v133 = v117;
      v132 = v116;
      v115[0] = aNativeOffConfi;
      v115[1] = 22;
      if ( !(unsigned __int8)sub_1401F6E40(&v132) )
        goto LABEL_70;
      sub_1401F60B0(v131, &v132);
      *(_QWORD *)v137 = v115;
      *(_QWORD *)&v137[8] = sub_140191200;
      *(_QWORD *)&v137[16] = v131;
      *(_QWORD *)&v137[24] = sub_1400015F0;
      sub_1416DAFA0(v96, &unk_141A06234, v137);
      if ( *(_QWORD *)v131 )
        sub_140001660(*(_QWORD *)&v131[8], *(_QWORD *)v131, 1);
      sub_1406C9730((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe, 19, (__int64)v96);
      sub_1409357D0(v131);
      v142 = *(_QWORD *)v131;
      if ( *(_QWORD *)v131 == -1 )
      {
        v121.m256i_i32[0] = *(_DWORD *)&v131[8];
        *(_QWORD *)v137 = v115;
        *(_QWORD *)&v137[8] = sub_140191200;
        *(_QWORD *)&v137[16] = &v121;
        *(_QWORD *)&v137[24] = sub_1416EACD0;
        sub_1416DAFA0(v112, &unk_141A0626C, v137);
        sub_1406C9730((unsigned int)aRouterConfigWr, 19, (unsigned int)aAccessDeniedRe_0, 32, (__int64)v112);
        v142 = *(_QWORD *)&v131[24];
        v49 = *(_QWORD *)&v131[32];
        if ( *(_QWORD *)&v131[32] )
        {
          v50 = (_QWORD *)(v142 + 8);
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
        v18 = a8;
        if ( *(_QWORD *)&v131[16] )
          sub_140001660(v142, 24LL * *(_QWORD *)&v131[16], 8);
      }
      else
      {
        *(_OWORD *)&v137[80] = *(_OWORD *)&v131[80];
        *(_OWORD *)&v137[64] = *(_OWORD *)&v131[64];
        *(_OWORD *)&v137[48] = *(_OWORD *)&v131[48];
        *(_OWORD *)&v137[32] = *(_OWORD *)&v131[32];
        *(_OWORD *)&v137[16] = *(_OWORD *)&v131[16];
        *(_OWORD *)v137 = *(_OWORD *)v131;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v126 = v115;
          v127 = sub_140191200;
          v128 = v137;
          v129 = sub_140D76130;
          v121.m256i_i64[0] = (__int64)aCodexmateLibCo_0;
          v121.m256i_i64[1] = 45;
          v121.m256i_i64[2] = (__int64)aCodexmateLibCo_0;
          v121.m256i_i64[3] = 45;
          *(_QWORD *)&v122 = &off_141A06318;
          sub_140AF72B0(&unk_141A0629E, &v126, 2, &v121);
        }
        sub_1401AF970(v137);
      }
      sub_1416C57D0(0, 700000000);
      *(_QWORD *)&v137[16] = a3;
      *(_QWORD *)&v137[24] = a4;
      *(_OWORD *)&v137[32] = __PAIR128__(a6, a5);
      *(_QWORD *)v137 = 0;
      *(_WORD *)&v137[64] = 0;
      *(_OWORD *)&v137[48] = 8u;
      sub_14063BFC0(&v116, a2, v137, 0);
      if ( v116.m256i_i32[0] == -1 )
      {
        v53 = 1;
      }
      else
      {
        *(_OWORD *)&v137[80] = v120;
        *(_OWORD *)&v137[64] = v119;
        *(_OWORD *)&v137[48] = v118;
        *(_OWORD *)&v137[32] = v117;
        *(__m256i *)v137 = v116;
        if ( (unsigned __int8)sub_1401F6E40(v137) )
        {
          sub_1401F60B0(&v126, &v132);
          sub_1401F60B0(&v121, v137);
          *(_QWORD *)v131 = v115;
          *(_QWORD *)&v131[8] = sub_140191200;
          *(_QWORD *)&v131[16] = &v126;
          *(_QWORD *)&v131[24] = sub_1400015F0;
          *(_QWORD *)&v131[32] = &v121;
          *(_QWORD *)&v131[40] = sub_1400015F0;
          sub_1416DAFA0(&v113, &unk_141A06BFE, v131);
          if ( v121.m256i_i64[0] )
            sub_140001660(v121.m256i_i64[1], v121.m256i_i64[0], 1);
          if ( v126 )
            sub_140001660(v127, v126, 1);
          *(_OWORD *)v121.m256i_i8 = v113;
          v121.m256i_i64[2] = v114;
          v52 = 10;
          sub_1401AF970(v137);
        }
        else
        {
          v52 = *(_QWORD *)v137;
          *(_OWORD *)v121.m256i_i8 = *(_OWORD *)&v116.m256i_u64[1];
          v121.m256i_i64[2] = v116.m256i_i64[3];
          *(_OWORD *)v131 = v117;
          *(_OWORD *)&v131[16] = v118;
          *(_OWORD *)&v131[32] = v119;
          *(_OWORD *)&v131[48] = v120;
        }
        v116.m256i_i64[0] = v52;
        *(_OWORD *)&v116.m256i_u64[1] = *(_OWORD *)v121.m256i_i8;
        v116.m256i_i64[3] = v121.m256i_i64[2];
        v117 = *(_OWORD *)v131;
        v118 = *(_OWORD *)&v131[16];
        v119 = *(_OWORD *)&v131[32];
        v120 = *(_OWORD *)&v131[48];
        v53 = v52 == -1;
      }
      sub_1401AF970(&v132);
      if ( v53 )
      {
LABEL_64:
        nullsub_1(v48, v47);
        v54 = sub_140001650(22, 1);
        if ( !v54 )
          sub_14196B2DB(1, 22);
        *(_OWORD *)v54 = xmmword_141A0998F;
        *(_QWORD *)(v54 + 14) = 0x6769666E6F6320B1LL;
        *(_QWORD *)v137 = 22;
        *(_QWORD *)&v137[8] = v54;
        *(_QWORD *)&v137[16] = 22;
        sub_1401E7610(&v138, v137);
        sub_1416B18A0(
          (unsigned int)v131,
          *(_QWORD *)(a2 + 776),
          *(_QWORD *)(a2 + 784),
          (unsigned int)&unk_141A97808,
          25);
        v142 = *(_QWORD *)&v131[8];
        sub_1416C49D0(v137, *(_QWORD *)&v131[8], *(_QWORD *)&v131[16]);
        v55 = *(_DWORD *)v137;
        sub_14019F370(*(_QWORD *)v137, *(_QWORD *)&v137[8]);
        v57 = *(_QWORD *)v131;
        if ( v55 == 2 )
        {
          if ( *(_QWORD *)v131 )
            sub_140001660(v142, *(_QWORD *)v131, 1);
          nullsub_1(v56, v57);
          v58 = sub_140001650(23, 1);
          if ( !v58 )
            sub_14196B2DB(1, 23);
          *(_OWORD *)v58 = xmmword_141A099A5;
          *(_QWORD *)(v58 + 15) = 0x676F6C6174616320LL;
          *(_QWORD *)v137 = 23;
          *(_QWORD *)&v137[8] = v58;
          *(_QWORD *)&v137[16] = 23;
          sub_1401E7610(&v138, v137);
        }
        else
        {
          if ( *(_QWORD *)v131 )
            sub_140001660(v142, *(_QWORD *)v131, 1);
          nullsub_1(v56, v57);
          v65 = sub_140001650(102, 1);
          if ( !v65 )
            sub_14196B2DB(1, 102);
          *(_OWORD *)(v65 + 80) = xmmword_141A09A0C;
          *(_OWORD *)(v65 + 64) = xmmword_141A099FC;
          *(_OWORD *)(v65 + 48) = xmmword_141A099EC;
          *(_OWORD *)(v65 + 32) = xmmword_141A099DC;
          *(_OWORD *)(v65 + 16) = xmmword_141A099CC;
          *(_OWORD *)v65 = xmmword_141A099BC;
          *(_QWORD *)(v65 + 94) = 0xB096E6B49BE6969BuLL;
          *(_QWORD *)v137 = 102;
          *(_QWORD *)&v137[8] = v65;
          *(_QWORD *)&v137[16] = 102;
          sub_1401E7610(&v140, v137);
        }
      }
      else
      {
LABEL_70:
        v125 = v120;
        v124 = v119;
        v123 = v118;
        v122 = v117;
        v121 = v116;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v131 = &v121;
          *(_QWORD *)&v131[8] = sub_140D76130;
          *(_QWORD *)v137 = aCodexmateLibCo_0;
          *(_QWORD *)&v137[8] = 45;
          *(_QWORD *)&v137[16] = aCodexmateLibCo_0;
          *(_QWORD *)&v137[24] = 45;
          *(_QWORD *)&v137[32] = &off_141A09918;
          sub_140AF72B0(&unk_141A098A3, v131, 2, v137);
        }
        sub_1401BC990(&v132, a2);
        if ( v132.m256i_i32[0] != -1 )
        {
          *(_OWORD *)&v137[80] = v136;
          *(_OWORD *)&v137[64] = v135;
          *(_OWORD *)&v137[48] = v134;
          *(_OWORD *)&v137[32] = v133;
          *(__m256i *)v137 = v132;
          sub_1401DC800(v131, &v121, v137);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v131[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v131[64];
          v62 = *(_OWORD *)v131;
          v63 = *(_OWORD *)&v131[16];
          v64 = *(_OWORD *)&v131[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v131[48];
          *(_OWORD *)(a1 + 32) = v64;
          *(_OWORD *)(a1 + 16) = v63;
          *(_OWORD *)a1 = v62;
          sub_1401AF970(&v121);
          goto LABEL_103;
        }
        nullsub_1(v61, v60);
        v66 = (_OWORD *)sub_140001650(58, 1);
        if ( !v66 )
          sub_14196B2DB(1, 58);
        *(_OWORD *)((char *)v66 + 42) = *(__int128 *)((char *)&xmmword_141A09975 + 10);
        v66[2] = xmmword_141A09975;
        v66[1] = xmmword_141A09965;
        *v66 = xmmword_141A09955;
        *(_QWORD *)v137 = 58;
        *(_QWORD *)&v137[8] = v66;
        *(_QWORD *)&v137[16] = 58;
        sub_1401E7610(&v138, v137);
        sub_1401AF970(&v121);
      }
      LOBYTE(v59) = 1;
      sub_1401B9CF0(v59, v143, v130, (unsigned int)&unk_141A09A22, 20);
      v67 = sub_1416AEBD0();
      v69 = v68;
      sub_1407D1D70(v131, a2);
      if ( *(_DWORD *)v131 == -1 )
      {
        v72 = v131[8];
        if ( v131[8] )
        {
          nullsub_1(v71, v70);
          v73 = (_OWORD *)sub_140001650(59, 1);
          if ( !v73 )
            sub_14196B2DB(1, 59);
          *(_OWORD *)((char *)v73 + 43) = *(__int128 *)((char *)&xmmword_141A09A56 + 11);
          v73[2] = xmmword_141A09A56;
          v73[1] = xmmword_141A09A46;
          *v73 = xmmword_141A09A36;
          *(_QWORD *)v137 = 59;
          *(_QWORD *)&v137[8] = v73;
          *(_QWORD *)&v137[16] = 59;
          sub_1401E7610(&v138, v137);
        }
        v112[0] = v72;
      }
      else
      {
        if ( !v18 )
          goto LABEL_101;
        *(_OWORD *)&v137[80] = *(_OWORD *)&v131[80];
        *(_OWORD *)&v137[64] = *(_OWORD *)&v131[64];
        *(_OWORD *)&v137[48] = *(_OWORD *)&v131[48];
        *(_OWORD *)&v137[32] = *(_OWORD *)&v131[32];
        *(_OWORD *)&v137[16] = *(_OWORD *)&v131[16];
        *(_OWORD *)v137 = *(_OWORD *)v131;
        v132.m256i_i64[0] = (__int64)v137;
        v132.m256i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(v108, &unk_141A09A71, &v132);
        sub_1401E7610(&v140, v108);
        v112[0] = 0;
        sub_1401AF970(v137);
      }
      *(_QWORD *)v137 = v112;
      *(_QWORD *)&v137[8] = sub_1416EBC20;
      sub_1416DAFA0(v101, &unk_141A09AB9, v137);
      LOBYTE(v74) = 1;
      sub_1401B9B80(v74, (unsigned int)aAuthCleanup, 12, v67, v69, (__int64)v101);
      v143 = sub_1416AEBD0();
      v76 = v75;
      LOBYTE(v113) = sub_1408CBCE0(a2);
      v126 = nullptr;
      v116.m256i_i64[0] = 0;
      if ( (_BYTE)v113 )
      {
        sub_1408D56D0(v137, a2);
        if ( *(_DWORD *)v137 == 1 )
        {
          if ( !v18 )
          {
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v137[88];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v137[72];
            v80 = *(_OWORD *)&v137[8];
            v81 = *(_OWORD *)&v137[24];
            v82 = *(_OWORD *)&v137[40];
            v83 = *(_OWORD *)&v137[56];
            goto LABEL_102;
          }
          *(_OWORD *)&v131[80] = *(_OWORD *)&v137[88];
          *(_OWORD *)&v131[64] = *(_OWORD *)&v137[72];
          *(_OWORD *)&v131[48] = *(_OWORD *)&v137[56];
          *(_OWORD *)&v131[32] = *(_OWORD *)&v137[40];
          *(_OWORD *)&v131[16] = *(_OWORD *)&v137[24];
          *(_OWORD *)v131 = *(_OWORD *)&v137[8];
          v132.m256i_i64[0] = (__int64)v131;
          v132.m256i_i64[1] = (__int64)sub_140D76130;
          sub_1416DAFA0(v105, &unk_141A09B78, &v132);
          sub_1401E7610(&v140, v105);
          sub_1401AF970(v131);
        }
        else
        {
          v77 = *(_QWORD **)&v137[24];
          v78 = *(_QWORD *)&v137[48];
          if ( *(_QWORD *)&v137[96] )
          {
            sub_1406C5480(
              (unsigned int)v131,
              *(_DWORD *)&v137[88],
              *(_DWORD *)&v137[96],
              (unsigned int)&unk_141A05F6A,
              3);
            v132.m256i_i64[2] = *(_QWORD *)&v131[16];
            *(_OWORD *)v132.m256i_i8 = *(_OWORD *)v131;
            *(_QWORD *)v131 = &v132;
            *(_QWORD *)&v131[8] = sub_1400015F0;
            sub_1416DAFA0(v107, &unk_141A09AD0, v131);
            if ( v132.m256i_i64[0] )
              sub_140001660(v132.m256i_i64[1], v132.m256i_i64[0], 1);
            sub_1401E7610(&v140, v107);
          }
          v126 = v77;
          v116.m256i_i64[0] = v78;
          *(_QWORD *)v131 = &v126;
          *(_QWORD *)&v131[8] = sub_1416EBAE0;
          *(_QWORD *)&v131[16] = &v116;
          *(_QWORD *)&v131[24] = sub_1416EBAE0;
          sub_1416DAFA0(v106, &unk_141A09B49, v131);
          sub_1401E7610(&v138, v106);
          sub_1401B0BC0(&v137[8]);
        }
      }
      *(_QWORD *)v137 = &v113;
      *(_QWORD *)&v137[8] = sub_1416EBC20;
      *(_QWORD *)&v137[16] = &v126;
      *(_QWORD *)&v137[24] = sub_1416EBAE0;
      *(_QWORD *)&v137[32] = &v116;
      *(_QWORD *)&v137[40] = sub_1416EBAE0;
      sub_1416DAFA0(v100, &unk_141A09BC4, v137);
      LOBYTE(v79) = 1;
      sub_1401B9B80(v79, (unsigned int)aTakeoverRestor, 16, v143, v76, (__int64)v100);
      sub_14098E080(v137);
      if ( *(_DWORD *)v137 != -1 )
      {
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v137[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v137[64];
        v80 = *(_OWORD *)v137;
        v81 = *(_OWORD *)&v137[16];
        v82 = *(_OWORD *)&v137[32];
        v83 = *(_OWORD *)&v137[48];
LABEL_102:
        *(_OWORD *)(a1 + 48) = v83;
        *(_OWORD *)(a1 + 32) = v82;
        *(_OWORD *)(a1 + 16) = v81;
        *(_OWORD *)a1 = v80;
LABEL_103:
        v31 = *((_QWORD *)&v140 + 1);
        v87 = v141;
        if ( v141 )
        {
          v88 = (_QWORD *)(*((_QWORD *)&v140 + 1) + 8LL);
          do
          {
            v89 = *(v88 - 1);
            if ( v89 )
              sub_140001660(*v88, v89, 1);
            v88 += 3;
            --v87;
          }
          while ( v87 );
        }
        goto LABEL_28;
      }
      v143 = sub_1416AEBD0();
      v85 = v84;
      sub_1407EC850(v131, a2);
      if ( *(_DWORD *)v131 == -1 )
      {
        *(_QWORD *)&v133 = *(_QWORD *)&v131[40];
        v132 = *(__m256i *)&v131[8];
        *(_QWORD *)v137 = &v132;
        *(_QWORD *)&v137[8] = sub_1416EBAE0;
        *(_QWORD *)&v137[16] = &v132.m256i_i64[1];
        *(_QWORD *)&v137[24] = sub_1416EBAE0;
        *(_QWORD *)&v137[32] = &v132.m256i_i64[2];
        *(_QWORD *)&v137[40] = sub_1416EBAE0;
        *(_QWORD *)&v137[48] = &v132.m256i_i64[3];
        *(_QWORD *)&v137[56] = sub_1416EBAE0;
        *(_QWORD *)&v137[64] = &v133;
        *(_QWORD *)&v137[72] = sub_1416EBAE0;
        sub_1416DAFA0(v99, &unk_141A09C0A, v137);
        LOBYTE(v90) = 1;
        sub_1401B9B80(v90, (unsigned int)aNoAccountModel, 24, v143, v85, (__int64)v99);
        if ( v132.m256i_i64[0] )
        {
          *(_QWORD *)v137 = &v132;
          *(_QWORD *)&v137[8] = sub_1416EBAE0;
          sub_1416DAFA0(v104, &unk_141A09C7D, v137);
          sub_1401E7610(&v138, v104);
        }
        goto LABEL_112;
      }
      if ( v18 )
      {
        *(_OWORD *)&v137[80] = *(_OWORD *)&v131[80];
        *(_OWORD *)&v137[64] = *(_OWORD *)&v131[64];
        *(_OWORD *)&v137[48] = *(_OWORD *)&v131[48];
        *(_OWORD *)&v137[32] = *(_OWORD *)&v131[32];
        *(_OWORD *)&v137[16] = *(_OWORD *)&v131[16];
        *(_OWORD *)v137 = *(_OWORD *)v131;
        v132.m256i_i64[0] = (__int64)v137;
        v132.m256i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(v98, &unk_141A09CB9, &v132);
        LOBYTE(v86) = 1;
        sub_1401B9B80(v86, (unsigned int)aNoAccountModel, 24, v143, v85, (__int64)v98);
        v132.m256i_i64[0] = (__int64)v137;
        v132.m256i_i64[1] = (__int64)sub_140D76130;
        sub_1416DAFA0(v103, &unk_141A09CCF, &v132);
        sub_1401E7610(&v140, v103);
        sub_1401AF970(v137);
LABEL_112:
        if ( a10 )
          (*(void (__fastcall **)(__int64, const char *, __int64))(a11 + 32))(a10, aReconcilingThr, 19);
        v91 = sub_1416AEBD0();
        v93 = v92;
        *(_QWORD *)v137 = aOpenai;
        *(_QWORD *)&v137[8] = 6;
        *(_WORD *)&v137[16] = 257;
        sub_1407DFB00((unsigned int)v131, a2, (unsigned int)v137, a12, a13, 0);
        if ( *(_DWORD *)v131 == 2 )
        {
          if ( !v18 )
          {
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v131[88];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v131[72];
            v80 = *(_OWORD *)&v131[8];
            v81 = *(_OWORD *)&v131[24];
            v82 = *(_OWORD *)&v131[40];
            v83 = *(_OWORD *)&v131[56];
            goto LABEL_102;
          }
          *(_OWORD *)&v137[80] = *(_OWORD *)&v131[88];
          *(_OWORD *)&v137[64] = *(_OWORD *)&v131[72];
          *(_OWORD *)&v137[48] = *(_OWORD *)&v131[56];
          *(_OWORD *)&v137[32] = *(_OWORD *)&v131[40];
          *(_OWORD *)&v137[16] = *(_OWORD *)&v131[24];
          *(_OWORD *)v137 = *(_OWORD *)&v131[8];
          v132.m256i_i64[0] = (__int64)v137;
          v132.m256i_i64[1] = (__int64)sub_140D76130;
          sub_1416DAFA0(v97, &unk_141A09CB9, &v132);
          LOBYTE(v94) = 1;
          sub_1401B9B80(v94, (unsigned int)aThreadReconcil, 16, v91, v93, (__int64)v97);
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v121.m256i_i64[0] = (__int64)v137;
            v121.m256i_i64[1] = (__int64)sub_140D76130;
            v132.m256i_i64[0] = (__int64)aCodexmateLibCo_0;
            v132.m256i_i64[1] = 45;
            v132.m256i_i64[2] = (__int64)aCodexmateLibCo_0;
            v132.m256i_i64[3] = 45;
            *(_QWORD *)&v133 = &off_141A09D98;
            sub_140AF72B0(&unk_141A09D3C, &v121, 2, &v132);
          }
          v132.m256i_i64[0] = (__int64)v137;
          v132.m256i_i64[1] = (__int64)sub_140D76130;
          sub_1416DAFA0(v102, &unk_141A09DB0, &v132);
          sub_1401E7610(&v140, v102);
          sub_1401AF970(v137);
        }
        else
        {
          sub_1419234B0(v137, v131, 240);
          LOBYTE(v95) = 1;
          sub_1401F5870(v95, v91, v93, v137);
          sub_1401F62A0(&v121, aNativeoff, 9, v137);
          v132.m256i_i64[0] = v121.m256i_i64[1];
          v132.m256i_i64[1] = v121.m256i_i64[1];
          v132.m256i_i64[2] = v121.m256i_i64[0];
          v132.m256i_i64[3] = v121.m256i_i64[1] + 24 * v121.m256i_i64[2];
          sub_14021AD20(&v138, &v132);
          sub_1401F6690(&v140, aNativeoff, 9, v137);
          sub_1401B1080(v131);
        }
        *(_QWORD *)&v137[16] = v139;
        *(_OWORD *)v137 = v138;
        *(_QWORD *)&v137[40] = v141;
        *(_OWORD *)&v137[24] = v140;
        *(_OWORD *)(a1 + 8) = v138;
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v137[32];
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v137[16];
        *(_BYTE *)(a1 + 56) = 1;
LABEL_13:
        *(_QWORD *)a1 = -1;
        return a1;
      }
LABEL_101:
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v131[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v131[64];
      v80 = *(_OWORD *)v131;
      v81 = *(_OWORD *)&v131[16];
      v82 = *(_OWORD *)&v131[32];
      v83 = *(_OWORD *)&v131[48];
      goto LABEL_102;
    }
  }
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v137[80];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v137[64];
  v38 = *(_OWORD *)v137;
  v39 = *(_OWORD *)&v137[16];
  v40 = *(_OWORD *)&v137[32];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v137[48];
  *(_OWORD *)(a1 + 32) = v40;
  *(_OWORD *)(a1 + 16) = v39;
  *(_OWORD *)a1 = v38;
  v31 = *((_QWORD *)&v140 + 1);
  v32 = v141;
  if ( v141 )
  {
LABEL_19:
    v36 = (_QWORD *)(v31 + 8);
    do
    {
      v37 = *(v36 - 1);
      if ( v37 )
        sub_140001660(*v36, v37, 1);
      v36 += 3;
      --v32;
    }
    while ( v32 );
  }
LABEL_28:
  if ( (_QWORD)v140 )
    sub_140001660(v31, 24 * v140, 8);
  v41 = *((_QWORD *)&v138 + 1);
  v42 = v139;
  if ( v139 )
  {
    v43 = (_QWORD *)(*((_QWORD *)&v138 + 1) + 8LL);
    do
    {
      v44 = *(v43 - 1);
      if ( v44 )
        sub_140001660(*v43, v44, 1);
      v43 += 3;
      --v42;
    }
    while ( v42 );
  }
  if ( (_QWORD)v138 )
    sub_140001660(v41, 24 * v138, 8);
  return a1;
}
