// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x14095b4e0 | successor of pre-update 0x140c32f60 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.956, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_14095B4E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rdi
  __int64 v48; // r14
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  void *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r15
  __int64 v65; // rdi
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  _DWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  void *v79; // rax
  __int64 v80; // rdi
  _QWORD *v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 i; // rax
  __int64 v88; // rdx
  __int64 v89; // rdi
  _QWORD *v90; // rbx
  __int64 v91; // rdx
  _OWORD v93[7]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v94; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v95; // [rsp+A8h] [rbp+28h]
  __int64 v96; // [rsp+B0h] [rbp+30h]
  __int128 v97; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v98; // [rsp+C8h] [rbp+48h]
  __int128 v99; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v100; // [rsp+E0h] [rbp+60h]
  __int128 v101; // [rsp+F0h] [rbp+70h]
  __int128 v102; // [rsp+100h] [rbp+80h]
  _BYTE v103[80]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v104; // [rsp+160h] [rbp+E0h]
  __int128 v105; // [rsp+170h] [rbp+F0h]
  __int128 v106; // [rsp+180h] [rbp+100h] BYREF
  __int128 v107; // [rsp+190h] [rbp+110h]
  __int128 v108; // [rsp+1A0h] [rbp+120h]
  __int128 v109; // [rsp+1B0h] [rbp+130h]
  __int64 v110; // [rsp+1C0h] [rbp+140h]
  __int128 v111; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v112; // [rsp+1D8h] [rbp+158h]
  __int64 v113; // [rsp+1E0h] [rbp+160h]
  __int128 v114; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v115; // [rsp+1F8h] [rbp+178h]
  __int64 v116; // [rsp+208h] [rbp+188h] BYREF
  __int64 v117; // [rsp+210h] [rbp+190h]
  __int64 v118; // [rsp+218h] [rbp+198h]
  __int64 v119; // [rsp+220h] [rbp+1A0h]
  char v120; // [rsp+22Ah] [rbp+1AAh]
  char v121; // [rsp+22Bh] [rbp+1ABh]
  char v122; // [rsp+22Ch] [rbp+1ACh]
  char v123; // [rsp+22Dh] [rbp+1ADh] BYREF
  char v124; // [rsp+22Eh] [rbp+1AEh]
  char v125; // [rsp+22Fh] [rbp+1AFh]
  __int64 v126; // [rsp+230h] [rbp+1B0h]

  v126 = -2;
  sub_1416C49D0(v103, a2, a3);
  if ( *(_DWORD *)v103 == 2 )
  {
    v6 = v103[8] & 3;
    v7 = (unsigned int)(v6 - 2);
    if ( (unsigned int)v7 >= 2 && (v103[8] & 3) != 0 )
    {
      --*(_QWORD *)&v103[8];
      v103[0] = 3;
      sub_1416EBAD0(&v103[8]);
    }
    *(_QWORD *)&v99 = 0;
    *(_QWORD *)&v100 = 0;
    nullsub_1(v6, v7);
    v8 = sub_140001650(6, 1);
    if ( !v8 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v8 + 4) = 29556;
    *(_DWORD *)v8 = 1936291941;
    *(_QWORD *)&v106 = 6;
    *((_QWORD *)&v106 + 1) = v8;
    *(_QWORD *)&v107 = 6;
    *(_WORD *)v103 = 1;
    sub_140A68320(v93, &v99, &v106, v103);
    if ( LOBYTE(v93[0]) != 0xFF )
      sub_140032FF0(v93);
    nullsub_1(v10, v9);
    v11 = (_DWORD *)sub_140001650(7, 1);
    if ( !v11 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v11 + 3) = 1936616821;
    *v11 = 1970040675;
    *(_QWORD *)&v106 = 7;
    *((_QWORD *)&v106 + 1) = v11;
    *(_QWORD *)&v107 = 7;
    *(_QWORD *)&v103[8] = 0;
    *(_OWORD *)&v103[16] = 8u;
    v103[0] = 4;
    sub_140A68320(v93, &v99, &v106, v103);
    if ( LOBYTE(v93[0]) != 0xFF )
      sub_140032FF0(v93);
    nullsub_1(v13, v12);
    v14 = (void *)sub_140001650(18, 1);
    if ( !v14 )
      sub_14196B2DB(1, 18);
    qmemcpy(v14, "missingCoreColumns", 18);
    *(_QWORD *)&v106 = 18;
    *((_QWORD *)&v106 + 1) = v14;
    *(_QWORD *)&v107 = 18;
    *(_QWORD *)&v103[8] = 0;
    *(_OWORD *)&v103[16] = 8u;
    v103[0] = 4;
    sub_140A68320(v93, &v99, &v106, v103);
    if ( LOBYTE(v93[0]) != 0xFF )
      sub_140032FF0(v93);
    *(_QWORD *)(a1 + 24) = v100;
    *(_OWORD *)(a1 + 8) = v99;
    *(_BYTE *)a1 = 5;
    return a1;
  }
  sub_1409016A0(v103, a2, a3, 32769);
  if ( BYTE8(v105) != 0xFF )
  {
    v93[6] = v105;
    v93[5] = v104;
    v93[4] = *(_OWORD *)&v103[64];
    v93[3] = *(_OWORD *)&v103[48];
    v93[2] = *(_OWORD *)&v103[32];
    v93[1] = *(_OWORD *)&v103[16];
    v93[0] = *(_OWORD *)v103;
    sub_141431450(v103, v93, 0, 500000000);
    if ( *(_QWORD *)v103 != -1 )
      sub_140904700(v103);
    sub_140930990(v103, v93, aPragmaTableInf_0, 26);
    if ( *(_DWORD *)v103 == 1 )
    {
      v109 = *(_OWORD *)&v103[56];
      v108 = *(_OWORD *)&v103[40];
      v107 = *(_OWORD *)&v103[24];
      v106 = *(_OWORD *)&v103[8];
      *(_QWORD *)&v97 = 0;
      v98 = 0;
      nullsub_1(v18, v17);
      v19 = sub_140001650(6, 1);
      if ( !v19 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v19 + 4) = 29556;
      *(_DWORD *)v19 = 1936291941;
      *(_QWORD *)&v111 = 6;
      *((_QWORD *)&v111 + 1) = v19;
      v112 = 6;
      LOWORD(v116) = 1;
      sub_140A68320(&v114, &v97, &v111, &v116);
      if ( (_BYTE)v114 != 0xFF )
        sub_140032FF0(&v114);
      nullsub_1(v21, v20);
      v22 = (_DWORD *)sub_140001650(7, 1);
      if ( !v22 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v22 + 3) = 1936616821;
      *v22 = 1970040675;
      *(_QWORD *)&v111 = 7;
      *((_QWORD *)&v111 + 1) = v22;
      v112 = 7;
      v117 = 0;
      v118 = 8;
      v119 = 0;
      LOBYTE(v116) = 4;
      sub_140A68320(&v114, &v97, &v111, &v116);
      if ( (_BYTE)v114 != 0xFF )
        sub_140032FF0(&v114);
      nullsub_1(v24, v23);
      v25 = (void *)sub_140001650(18, 1);
      if ( !v25 )
        sub_14196B2DB(1, 18);
      qmemcpy(v25, "missingCoreColumns", 18);
      *(_QWORD *)&v111 = 18;
      *((_QWORD *)&v111 + 1) = v25;
      v112 = 18;
      v117 = 0;
      v118 = 8;
      v119 = 0;
      LOBYTE(v116) = 4;
      sub_140A68320(&v114, &v97, &v111, &v116);
      if ( (_BYTE)v114 != 0xFF )
        sub_140032FF0(&v114);
      nullsub_1(v27, v26);
      v28 = sub_140001650(9, 1);
      if ( !v28 )
        sub_14196B2DB(1, 9);
      *(_QWORD *)v28 = 0x6F72724564616572LL;
      *(_BYTE *)(v28 + 8) = 114;
      *(_QWORD *)&v111 = 9;
      v113 = v28;
      *((_QWORD *)&v111 + 1) = v28;
      v112 = 9;
      *(_QWORD *)&v114 = 0;
      *((_QWORD *)&v114 + 1) = 1;
      v115 = 0;
      v118 = 1610612768;
      v116 = (__int64)&v114;
      v117 = (__int64)&off_141A66E10;
      if ( (unsigned __int8)sub_14142D4D0(&v106, &v116) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_5,
          55,
          (unsigned int)&v123,
          (unsigned int)&unk_141A5A890,
          (__int64)&off_141A66EC8);
      v31 = *((_QWORD *)&v114 + 1);
      v32 = v115;
      v110 = *((_QWORD *)&v114 + 1);
      v113 = v114;
      if ( v115 < 0 )
      {
        v33 = 0;
        goto LABEL_32;
      }
      if ( v115 )
      {
        nullsub_1(v30, v29);
        v33 = 1;
        v69 = sub_140001650(v32, 1);
        if ( !v69 )
        {
LABEL_32:
          v121 = 1;
          sub_14196B2DB(v33, v32);
        }
        v70 = v69;
        sub_1419234B0(v69, v31, v32);
      }
      else
      {
        v70 = 1;
      }
      LOBYTE(v116) = 3;
      v117 = v32;
      v118 = v70;
      v119 = v32;
      v121 = 0;
      sub_140A68320(&v114, &v97, &v111, &v116);
      if ( (_BYTE)v114 != 0xFF )
        sub_140032FF0(&v114);
      if ( v113 )
        sub_140001660(v110, v113, 1);
      *(_QWORD *)(a1 + 24) = v98;
      *(_OWORD *)(a1 + 8) = v97;
      *(_BYTE *)a1 = 5;
      sub_140904700(&v106);
LABEL_122:
      sub_140903740(v93);
      return a1;
    }
    v102 = *(_OWORD *)&v103[56];
    v101 = *(_OWORD *)&v103[40];
    v100 = *(_OWORD *)&v103[24];
    v99 = *(_OWORD *)&v103[8];
    v49 = sub_1417D8600(*(_QWORD *)&v103[64]);
    if ( !v49 )
    {
      sub_1402074A0(&v94, &v99, 0);
      sub_140865720(&v97, v95, v95 + 24 * v96);
      *(_OWORD *)v103 = (unsigned __int64)&v97;
      *(_QWORD *)&v103[16] = 3;
      *(_QWORD *)&v103[24] = "idcwdpathnamepreviewsourceagentNicknameagentRoleprojectIdhistoryModegitInfoupdatedAtrecencyAtturns";
      *(_QWORD *)&v103[32] = 2;
      *(_QWORD *)&v103[40] = aModelProvider_0;
      *(_QWORD *)&v103[48] = 14;
      *(_QWORD *)&v103[56] = aRolloutPath_0;
      *(_QWORD *)&v103[64] = 12;
      sub_140209610(&v111, v103);
      *(_QWORD *)&v114 = 0;
      v115 = 0;
      nullsub_1(v72, v71);
      v73 = sub_140001650(6, 1);
      if ( !v73 )
        sub_14196B2DB(1, 6);
      *(_WORD *)(v73 + 4) = 29556;
      *(_DWORD *)v73 = 1936291941;
      v116 = 6;
      v117 = v73;
      v118 = 6;
      v103[0] = 1;
      v103[1] = v96 != 0;
      sub_140A68320(&v106, &v114, &v116, v103);
      if ( (_BYTE)v106 != 0xFF )
        sub_140032FF0(&v106);
      nullsub_1(v75, v74);
      v76 = (_DWORD *)sub_140001650(7, 1);
      if ( !v76 )
        sub_14196B2DB(1, 7);
      *(_DWORD *)((char *)v76 + 3) = 1936616821;
      *v76 = 1970040675;
      v116 = 7;
      v117 = (__int64)v76;
      v118 = 7;
      v125 = 1;
      sub_1407B3FB0(v103, &v94);
      if ( v103[0] == 0xFF )
      {
        *(_QWORD *)&v106 = *(_QWORD *)&v103[8];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v106,
          (unsigned int)&off_141A5A840,
          (__int64)&off_141A5C3B8);
      }
      v107 = *(_OWORD *)&v103[16];
      v106 = *(_OWORD *)v103;
      v125 = 0;
      sub_140A68320(v103, &v114, &v116, &v106);
      if ( v103[0] != 0xFF )
        sub_140032FF0(v103);
      nullsub_1(v78, v77);
      v79 = (void *)sub_140001650(18, 1);
      if ( !v79 )
        sub_14196B2DB(1, 18);
      qmemcpy(v79, "missingCoreColumns", 18);
      v116 = 18;
      v117 = (__int64)v79;
      v118 = 18;
      v124 = 1;
      sub_1407B3FB0(v103, &v111);
      if ( v103[0] == 0xFF )
      {
        *(_QWORD *)&v106 = *(_QWORD *)&v103[8];
        sub_14196B5F0(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v106,
          (unsigned int)&off_141A5A840,
          (__int64)&off_141A5C3B8);
      }
      v107 = *(_OWORD *)&v103[16];
      v106 = *(_OWORD *)v103;
      v124 = 0;
      sub_140A68320(v103, &v114, &v116, &v106);
      if ( v103[0] != 0xFF )
        sub_140032FF0(v103);
      *(_QWORD *)(a1 + 24) = v115;
      *(_OWORD *)(a1 + 8) = v114;
      *(_BYTE *)a1 = 5;
      v80 = v112;
      if ( v112 )
      {
        v81 = (_QWORD *)(*((_QWORD *)&v111 + 1) + 8LL);
        do
        {
          v82 = *(v81 - 1);
          if ( v82 )
            sub_140001660(*v81, v82, 1);
          v81 += 3;
          --v80;
        }
        while ( v80 );
      }
      if ( (_QWORD)v111 )
        sub_140001660(*((_QWORD *)&v111 + 1), 24 * v111, 8);
      if ( (_QWORD)v97 )
      {
        v83 = v98;
        *(_QWORD *)&v103[8] = 0;
        *(_OWORD *)&v103[16] = v97;
        *(_QWORD *)&v103[40] = 0;
        *(_OWORD *)&v103[48] = v97;
        v84 = 1;
      }
      else
      {
        v84 = 0;
        v83 = 0;
      }
      *(_QWORD *)v103 = v84;
      *(_QWORD *)&v103[32] = v84;
      *(_QWORD *)&v103[64] = v83;
      sub_140A6FD50(&v106, v103);
      for ( i = v106; (_QWORD)v106; i = v106 )
      {
        v88 = *(_QWORD *)(i + 24 * v107 + 8);
        if ( v88 )
          sub_140001660(*(_QWORD *)(i + 24 * v107 + 16), v88, 1);
        sub_140A6FD50(&v106, v103);
      }
      v89 = v96;
      if ( v96 )
      {
        v90 = (_QWORD *)(v95 + 8);
        do
        {
          v91 = *(v90 - 1);
          if ( v91 )
            sub_140001660(*v90, v91, 1);
          v90 += 3;
          --v89;
        }
        while ( v89 );
      }
      if ( v94 )
        sub_140001660(v95, 24 * v94, 8);
      sub_140904890(&v99);
      goto LABEL_122;
    }
    *(_OWORD *)v103 = 0x8000000000000013uLL;
    *(_QWORD *)&v103[16] = v49;
    *(_QWORD *)&v111 = 0;
    v112 = 0;
    nullsub_1(v51, v50);
    v52 = sub_140001650(6, 1);
    if ( !v52 )
      sub_14196B2DB(1, 6);
    *(_WORD *)(v52 + 4) = 29556;
    *(_DWORD *)v52 = 1936291941;
    *(_QWORD *)&v114 = 6;
    *((_QWORD *)&v114 + 1) = v52;
    v115 = 6;
    LOWORD(v106) = 1;
    sub_140A68320(&v116, &v111, &v114, &v106);
    if ( (_BYTE)v116 != 0xFF )
      sub_140032FF0(&v116);
    nullsub_1(v54, v53);
    v55 = (_DWORD *)sub_140001650(7, 1);
    if ( !v55 )
      sub_14196B2DB(1, 7);
    *(_DWORD *)((char *)v55 + 3) = 1936616821;
    *v55 = 1970040675;
    *(_QWORD *)&v114 = 7;
    *((_QWORD *)&v114 + 1) = v55;
    v115 = 7;
    *((_QWORD *)&v106 + 1) = 0;
    v107 = 8u;
    LOBYTE(v106) = 4;
    sub_140A68320(&v116, &v111, &v114, &v106);
    if ( (_BYTE)v116 != 0xFF )
      sub_140032FF0(&v116);
    nullsub_1(v57, v56);
    v58 = (void *)sub_140001650(18, 1);
    if ( !v58 )
      sub_14196B2DB(1, 18);
    qmemcpy(v58, "missingCoreColumns", 18);
    *(_QWORD *)&v114 = 18;
    *((_QWORD *)&v114 + 1) = v58;
    v115 = 18;
    *((_QWORD *)&v106 + 1) = 0;
    v107 = 8u;
    LOBYTE(v106) = 4;
    sub_140A68320(&v116, &v111, &v114, &v106);
    if ( (_BYTE)v116 != 0xFF )
      sub_140032FF0(&v116);
    nullsub_1(v60, v59);
    v61 = sub_140001650(9, 1);
    if ( !v61 )
      sub_14196B2DB(1, 9);
    *(_QWORD *)v61 = 0x6F72724564616572LL;
    *(_BYTE *)(v61 + 8) = 114;
    *(_QWORD *)&v114 = 9;
    v113 = v61;
    *((_QWORD *)&v114 + 1) = v61;
    v115 = 9;
    v116 = 0;
    v117 = 1;
    v118 = 0;
    *(_QWORD *)&v107 = 1610612768;
    *(_QWORD *)&v106 = &v116;
    *((_QWORD *)&v106 + 1) = &off_141A66E10;
    if ( (unsigned __int8)sub_14142D4D0(v103, &v106) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_5,
        55,
        (unsigned int)&v123,
        (unsigned int)&unk_141A5A890,
        (__int64)&off_141A66EC8);
    v64 = v117;
    v65 = v118;
    v113 = v116;
    v110 = v117;
    if ( v118 < 0 )
    {
      v66 = 0;
      goto LABEL_61;
    }
    if ( v118 )
    {
      nullsub_1(v63, v62);
      v66 = 1;
      v85 = sub_140001650(v65, 1);
      if ( !v85 )
      {
LABEL_61:
        v122 = 1;
        sub_14196B2DB(v66, v65);
      }
      v86 = v85;
      sub_1419234B0(v85, v64, v65);
    }
    else
    {
      v86 = 1;
    }
    LOBYTE(v106) = 3;
    *((_QWORD *)&v106 + 1) = v65;
    *(_QWORD *)&v107 = v86;
    *((_QWORD *)&v107 + 1) = v65;
    v122 = 0;
    sub_140A68320(&v116, &v111, &v114, &v106);
    if ( (_BYTE)v116 != 0xFF )
      sub_140032FF0(&v116);
    if ( v113 )
      sub_140001660(v110, v113, 1);
    *(_QWORD *)(a1 + 24) = v112;
    *(_OWORD *)(a1 + 8) = v111;
    *(_BYTE *)a1 = 5;
    sub_140904700(v103);
    sub_140904890(&v99);
    goto LABEL_122;
  }
  v109 = *(_OWORD *)&v103[48];
  v108 = *(_OWORD *)&v103[32];
  v107 = *(_OWORD *)&v103[16];
  v106 = *(_OWORD *)v103;
  *(_QWORD *)&v111 = 0;
  v112 = 0;
  nullsub_1(v16, v15);
  v34 = sub_140001650(6, 1);
  if ( !v34 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v34 + 4) = 29556;
  *(_DWORD *)v34 = 1936291941;
  *(_QWORD *)&v114 = 6;
  *((_QWORD *)&v114 + 1) = v34;
  v115 = 6;
  LOWORD(v99) = 1;
  sub_140A68320(&v116, &v111, &v114, &v99);
  if ( (_BYTE)v116 != 0xFF )
    sub_140032FF0(&v116);
  nullsub_1(v36, v35);
  v37 = (_DWORD *)sub_140001650(7, 1);
  if ( !v37 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v37 + 3) = 1936616821;
  *v37 = 1970040675;
  *(_QWORD *)&v114 = 7;
  *((_QWORD *)&v114 + 1) = v37;
  v115 = 7;
  *((_QWORD *)&v99 + 1) = 0;
  v100 = 8u;
  LOBYTE(v99) = 4;
  sub_140A68320(&v116, &v111, &v114, &v99);
  if ( (_BYTE)v116 != 0xFF )
    sub_140032FF0(&v116);
  nullsub_1(v39, v38);
  v40 = (void *)sub_140001650(18, 1);
  if ( !v40 )
    sub_14196B2DB(1, 18);
  qmemcpy(v40, "missingCoreColumns", 18);
  *(_QWORD *)&v114 = 18;
  *((_QWORD *)&v114 + 1) = v40;
  v115 = 18;
  *((_QWORD *)&v99 + 1) = 0;
  v100 = 8u;
  LOBYTE(v99) = 4;
  sub_140A68320(&v116, &v111, &v114, &v99);
  if ( (_BYTE)v116 != 0xFF )
    sub_140032FF0(&v116);
  nullsub_1(v42, v41);
  v43 = sub_140001650(9, 1);
  if ( !v43 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v43 = 0x6F72724564616572LL;
  *(_BYTE *)(v43 + 8) = 114;
  *(_QWORD *)&v114 = 9;
  v113 = v43;
  *((_QWORD *)&v114 + 1) = v43;
  v115 = 9;
  v116 = 0;
  v117 = 1;
  v118 = 0;
  *(_QWORD *)&v100 = 1610612768;
  *(_QWORD *)&v99 = &v116;
  *((_QWORD *)&v99 + 1) = &off_141A66E10;
  if ( (unsigned __int8)sub_14142D4D0(&v106, &v99) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_5,
      55,
      (unsigned int)&v123,
      (unsigned int)&unk_141A5A890,
      (__int64)&off_141A66EC8);
  v46 = v117;
  v47 = v118;
  v113 = v116;
  v110 = v117;
  if ( v118 < 0 )
  {
    v48 = 0;
    goto LABEL_46;
  }
  if ( v118 )
  {
    nullsub_1(v45, v44);
    v48 = 1;
    v67 = sub_140001650(v47, 1);
    if ( !v67 )
    {
LABEL_46:
      v120 = 1;
      sub_14196B2DB(v48, v47);
    }
    v68 = v67;
    sub_1419234B0(v67, v46, v47);
  }
  else
  {
    v68 = 1;
  }
  LOBYTE(v99) = 3;
  *((_QWORD *)&v99 + 1) = v47;
  *(_QWORD *)&v100 = v68;
  *((_QWORD *)&v100 + 1) = v47;
  v120 = 0;
  sub_140A68320(&v116, &v111, &v114, &v99);
  if ( (_BYTE)v116 != 0xFF )
    sub_140032FF0(&v116);
  if ( v113 )
    sub_140001660(v110, v113, 1);
  *(_QWORD *)(a1 + 24) = v112;
  *(_OWORD *)(a1 + 8) = v111;
  *(_BYTE *)a1 = 5;
  sub_140904700(&v106);
  return a1;
}
