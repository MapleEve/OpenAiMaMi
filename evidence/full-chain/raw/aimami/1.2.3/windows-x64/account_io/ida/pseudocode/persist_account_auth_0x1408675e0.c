// module: codexmate_lib/core/account_io
// addr: 0x1408675e0
// name: persist_account_auth
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::account_io::persist_account_auth | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall persist_account_auth(__int64 a1, _QWORD *a2, __int128 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  void *v11; // rax
  __int64 v13; // r14
  __int64 v14; // r12
  void *v15; // r15
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rcx
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // r15
  _BYTE *v40; // rdx
  char v41; // r12
  __int64 v42; // r15
  __int64 v43; // rbx
  __int64 v44; // rax
  char v45; // di
  __int128 v46; // xmm0
  __int128 v47; // xmm2
  __int128 v48; // xmm3
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  __int128 v53; // xmm0
  char v54; // al
  int v55; // ecx
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  char v58; // al
  int v59; // ecx
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm2
  _QWORD v64[33]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v65; // [rsp+148h] [rbp+C8h]
  __int64 v66; // [rsp+150h] [rbp+D0h]
  __int64 v67; // [rsp+168h] [rbp+E8h]
  __int64 v68; // [rsp+170h] [rbp+F0h]
  __int64 v69; // [rsp+188h] [rbp+108h]
  __int64 v70; // [rsp+190h] [rbp+110h]
  __int128 v71; // [rsp+420h] [rbp+3A0h] BYREF
  __int128 v72; // [rsp+430h] [rbp+3B0h]
  __int128 v73; // [rsp+440h] [rbp+3C0h]
  __int128 v74; // [rsp+450h] [rbp+3D0h]
  __int128 v75; // [rsp+460h] [rbp+3E0h]
  __int128 v76; // [rsp+470h] [rbp+3F0h]
  __int128 v77; // [rsp+480h] [rbp+400h] BYREF
  __int128 v78; // [rsp+490h] [rbp+410h]
  __int128 v79; // [rsp+4A0h] [rbp+420h]
  __int128 v80; // [rsp+4B0h] [rbp+430h]
  __int128 v81; // [rsp+4C0h] [rbp+440h]
  __int128 v82; // [rsp+4D0h] [rbp+450h]
  __int64 v83[3]; // [rsp+4E0h] [rbp+460h] BYREF
  int v84; // [rsp+4F8h] [rbp+478h]
  __int128 v85; // [rsp+510h] [rbp+490h] BYREF
  __int64 v86; // [rsp+520h] [rbp+4A0h]
  _BYTE v87[24]; // [rsp+528h] [rbp+4A8h] BYREF
  _BYTE v88[88]; // [rsp+540h] [rbp+4C0h] BYREF
  __int64 v89; // [rsp+598h] [rbp+518h] BYREF
  __int128 v90; // [rsp+5A0h] [rbp+520h]
  __int128 v91; // [rsp+5B0h] [rbp+530h]
  __int128 v92; // [rsp+5C0h] [rbp+540h]
  __int128 v93; // [rsp+5D0h] [rbp+550h]
  __m256i v94; // [rsp+5E0h] [rbp+560h]
  __int128 v95; // [rsp+600h] [rbp+580h] BYREF
  __int64 v96; // [rsp+610h] [rbp+590h]
  char v97; // [rsp+618h] [rbp+598h]
  __int64 v98; // [rsp+620h] [rbp+5A0h]
  __int128 v99; // [rsp+628h] [rbp+5A8h] BYREF
  __int128 v100; // [rsp+638h] [rbp+5B8h] BYREF
  __int128 v101; // [rsp+648h] [rbp+5C8h] BYREF
  __int128 v102; // [rsp+658h] [rbp+5D8h]
  __m256i v103; // [rsp+668h] [rbp+5E8h]
  __int128 v104; // [rsp+688h] [rbp+608h]
  __int128 v105; // [rsp+698h] [rbp+618h]
  __int128 v106; // [rsp+6A8h] [rbp+628h]
  __int64 v107; // [rsp+6B8h] [rbp+638h]
  __int128 v108; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v109; // [rsp+6D0h] [rbp+650h]
  __int128 v110; // [rsp+6D8h] [rbp+658h] BYREF
  unsigned __int64 v111; // [rsp+6E8h] [rbp+668h]
  __int128 v112; // [rsp+6F0h] [rbp+670h] BYREF
  __int128 v113; // [rsp+700h] [rbp+680h]
  __int128 v114; // [rsp+710h] [rbp+690h]
  __int128 v115; // [rsp+720h] [rbp+6A0h] BYREF
  __m256i v116; // [rsp+730h] [rbp+6B0h]
  __int128 v117; // [rsp+750h] [rbp+6D0h]
  HANDLE v118; // [rsp+768h] [rbp+6E8h] BYREF
  _BYTE v119[120]; // [rsp+770h] [rbp+6F0h] BYREF
  __int128 v120; // [rsp+7E8h] [rbp+768h]
  __int128 v121; // [rsp+7F8h] [rbp+778h]
  __int64 v122; // [rsp+808h] [rbp+788h]
  HANDLE v123; // [rsp+810h] [rbp+790h] BYREF
  HANDLE hObject; // [rsp+818h] [rbp+798h] BYREF
  __int64 v125; // [rsp+820h] [rbp+7A0h]
  char v126; // [rsp+829h] [rbp+7A9h]
  char v127; // [rsp+82Ah] [rbp+7AAh]
  char v128; // [rsp+82Bh] [rbp+7ABh]
  char v129; // [rsp+82Ch] [rbp+7ACh]
  char v130; // [rsp+82Dh] [rbp+7ADh]
  char v131; // [rsp+82Eh] [rbp+7AEh]
  char v132; // [rsp+82Fh] [rbp+7AFh]
  char v133; // [rsp+830h] [rbp+7B0h]
  char v134; // [rsp+831h] [rbp+7B1h]
  char v135; // [rsp+832h] [rbp+7B2h]
  char v136; // [rsp+833h] [rbp+7B3h]
  char v137; // [rsp+834h] [rbp+7B4h]
  char v138; // [rsp+835h] [rbp+7B5h]
  char v139; // [rsp+836h] [rbp+7B6h]
  char v140; // [rsp+837h] [rbp+7B7h]
  char v141; // [rsp+838h] [rbp+7B8h]
  char v142; // [rsp+839h] [rbp+7B9h]
  char v143; // [rsp+83Ah] [rbp+7BAh]
  char v144; // [rsp+83Bh] [rbp+7BBh]
  char v145; // [rsp+83Ch] [rbp+7BCh]
  char v146; // [rsp+83Dh] [rbp+7BDh]
  char v147; // [rsp+83Eh] [rbp+7BEh]
  char v148; // [rsp+83Fh] [rbp+7BFh]
  char v149; // [rsp+840h] [rbp+7C0h]
  char v150; // [rsp+841h] [rbp+7C1h]
  char v151; // [rsp+842h] [rbp+7C2h]
  char v152; // [rsp+843h] [rbp+7C3h]
  char v153; // [rsp+844h] [rbp+7C4h]
  char v154; // [rsp+845h] [rbp+7C5h]
  char v155; // [rsp+846h] [rbp+7C6h]
  char v156; // [rsp+847h] [rbp+7C7h]
  __int64 v157; // [rsp+848h] [rbp+7C8h]

  v157 = -2;
  sub_1407BC950(v64, a2);
  v6 = sub_140712590(v64);
  if ( v6 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v6;
    goto LABEL_8;
  }
  if ( (unsigned __int8)sub_1403CBE70(a3) )
  {
    sub_1403C9DD0(v119, a3, aOauthLoginJson, 16);
    v112 = *(_OWORD *)&v119[8];
    v113 = *(_OWORD *)&v119[24];
    v114 = *(_OWORD *)&v119[40];
    v115 = *(_OWORD *)&v119[56];
    v116 = *(__m256i *)&v119[72];
    if ( *(_QWORD *)v119 == 2 )
    {
      *(__m256i *)(a1 + 64) = v116;
      v8 = v112;
      v9 = v113;
      v10 = v114;
      *(_OWORD *)(a1 + 48) = v115;
      *(_OWORD *)(a1 + 32) = v10;
      *(_OWORD *)(a1 + 16) = v9;
      *(_OWORD *)a1 = v8;
      goto LABEL_8;
    }
    v106 = v121;
    v105 = v120;
    v104 = *(_OWORD *)&v119[104];
    v99 = v112;
    v100 = v113;
    v101 = v114;
    v102 = v115;
    v103 = v116;
    v98 = *(_QWORD *)v119;
    v130 = 1;
    sub_14149C500(&v110, (char *)&v99 + 8);
    v144 = 1;
    if ( !(unsigned __int8)sub_1408673F0(*((_QWORD *)&v110 + 1), v111) )
    {
      *(_QWORD *)v119 = &v110;
      *(_QWORD *)&v119[8] = sub_1400015F0;
      v144 = 1;
      sub_14149C0F0(&v85, &unk_14179852D, v119);
      *(_QWORD *)(a1 + 24) = v86;
      *(_OWORD *)(a1 + 8) = v85;
      *(_QWORD *)a1 = 9;
      goto LABEL_16;
    }
    v144 = 1;
    sub_1403CB3A0(&v95, v69, v70, *((char **)&v110 + 1), v111);
    v13 = v96;
    v150 = 1;
    v122 = *((_QWORD *)&v95 + 1);
    sub_1403C8920(&v89, *((_QWORD *)&v95 + 1), v96);
    v125 = v90;
    sub_14037FAC0((__int64)v119, v90, *((__int64 *)&v90 + 1), (__int64)&aTtenaccountCre[4], 18);
    v14 = *(_QWORD *)v119;
    v15 = *(void **)&v119[8];
    if ( *(_QWORD *)v119 != -1 )
    {
      *(_OWORD *)v116.m256i_i8 = *(_OWORD *)&v119[80];
      v115 = *(_OWORD *)&v119[64];
      v114 = *(_OWORD *)&v119[48];
      v113 = *(_OWORD *)&v119[32];
      v112 = *(_OWORD *)&v119[16];
      if ( v89 )
        sub_140001660(v125, v89, 1);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)v116.m256i_i8;
      v16 = v112;
      v17 = v113;
      v18 = v114;
      *(_OWORD *)(a1 + 64) = v115;
      *(_OWORD *)(a1 + 48) = v18;
      *(_OWORD *)(a1 + 32) = v17;
      *(_OWORD *)(a1 + 16) = v16;
      *(_QWORD *)a1 = v14;
      *(_QWORD *)(a1 + 8) = v15;
      if ( (_QWORD)v95 )
        sub_140001660(v122, v95, 1);
      goto LABEL_16;
    }
    if ( v89 )
      sub_140001660(v125, v89, 1);
    v118 = v15;
    v149 = 1;
    v148 = 1;
    sub_1403871C0(v119, v65, v66);
    v22 = *(_QWORD *)v119;
    v23 = *(_QWORD *)&v119[8];
    if ( *(_QWORD *)v119 != -1 )
    {
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v119[80];
      v24 = *(_OWORD *)&v119[16];
      v25 = *(_OWORD *)&v119[32];
      v26 = *(_OWORD *)&v119[48];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v119[64];
      *(_OWORD *)(a1 + 48) = v26;
      *(_OWORD *)(a1 + 32) = v25;
      *(_OWORD *)(a1 + 16) = v24;
      *(_QWORD *)a1 = v22;
      *(_QWORD *)(a1 + 8) = v23;
LABEL_39:
      LOBYTE(v23) = 1;
      LODWORD(v125) = v23;
LABEL_40:
      sub_1404220A0(&v118);
      CloseHandle(v118);
      LOBYTE(a3) = v125;
      goto LABEL_41;
    }
    hObject = *(HANDLE *)&v119[8];
    v147 = 1;
    v146 = 1;
    v145 = 1;
    sub_1403885B0(v119, v65, v66);
    v27 = *(_QWORD *)v119;
    v28 = *(_QWORD *)&v119[8];
    if ( *(_QWORD *)v119 != -1 )
    {
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v119[80];
      v29 = *(_OWORD *)&v119[16];
      v30 = *(_OWORD *)&v119[32];
      v31 = *(_OWORD *)&v119[48];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v119[64];
      *(_OWORD *)(a1 + 48) = v31;
      *(_OWORD *)(a1 + 32) = v30;
      *(_OWORD *)(a1 + 16) = v29;
      *(_QWORD *)a1 = v27;
      *(_QWORD *)(a1 + 8) = v28;
      sub_1404220A0(&hObject);
      LODWORD(v23) = CloseHandle(hObject);
      goto LABEL_39;
    }
    v123 = *(HANDLE *)&v119[8];
    v143 = 1;
    v142 = 1;
    v141 = 1;
    v140 = 1;
    v32 = sub_14086C050((unsigned int)v119, v122, v13, v69, v70, *((__int64 *)&v110 + 1), v111);
    if ( *(_DWORD *)v119 != -1 )
    {
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v119[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v119[64];
      v33 = *(_OWORD *)v119;
      v34 = *(_OWORD *)&v119[16];
      v35 = *(_OWORD *)&v119[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v119[48];
      *(_OWORD *)(a1 + 32) = v35;
      *(_OWORD *)(a1 + 16) = v34;
      *(_OWORD *)a1 = v33;
LABEL_50:
      LOBYTE(v32) = 1;
      LODWORD(v125) = v32;
      sub_1404220A0(&v123);
LABEL_51:
      CloseHandle(v123);
      sub_1404220A0(&hObject);
      CloseHandle(hObject);
      goto LABEL_40;
    }
    v143 = 1;
    v142 = 1;
    v141 = 1;
    v140 = 1;
    sub_1408698E0(v119, v67, v68);
    v32 = *(_QWORD *)v119;
    v112 = *(_OWORD *)&v119[8];
    v113 = *(_OWORD *)&v119[24];
    v114 = *(_OWORD *)&v119[40];
    v115 = *(_OWORD *)&v119[56];
    *(_OWORD *)v116.m256i_i8 = *(_OWORD *)&v119[72];
    v116.m256i_i64[2] = *(_QWORD *)&v119[88];
    if ( *(_QWORD *)v119 != -1 )
    {
      *(_QWORD *)(a1 + 88) = v116.m256i_i64[2];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)v116.m256i_i8;
      v36 = v112;
      v37 = v113;
      v38 = v114;
      *(_OWORD *)(a1 + 56) = v115;
      *(_OWORD *)(a1 + 40) = v38;
      *(_OWORD *)(a1 + 24) = v37;
      *(_OWORD *)(a1 + 8) = v36;
      *(_QWORD *)a1 = v32;
      goto LABEL_50;
    }
    *(_QWORD *)&v88[80] = v116.m256i_i64[2];
    *(_OWORD *)&v88[64] = *(_OWORD *)v116.m256i_i8;
    *(_OWORD *)&v88[48] = v115;
    *(_OWORD *)&v88[32] = v114;
    *(_OWORD *)&v88[16] = v113;
    *(_OWORD *)v88 = v112;
    v39 = v112;
    v40 = v88;
    if ( (_QWORD)v112 == -1 )
      v40 = nullptr;
    v139 = 1;
    v138 = 1;
    v137 = 1;
    v136 = 1;
    v135 = 1;
    sub_14085C1E0(v83, v40);
    if ( v39 == -1 )
    {
      *(_QWORD *)&v112 = -1;
    }
    else
    {
      *(_OWORD *)&v119[72] = *(_OWORD *)&v88[72];
      *(_OWORD *)&v119[56] = *(_OWORD *)&v88[56];
      *(_OWORD *)&v119[40] = *(_OWORD *)&v88[40];
      *(_OWORD *)&v119[24] = *(_OWORD *)&v88[24];
      *(_OWORD *)&v119[8] = *(_OWORD *)&v88[8];
      *(_QWORD *)v119 = v39;
      v129 = 1;
      v128 = 1;
      v127 = 1;
      sub_14037CCF0(&v112, v119);
    }
    v129 = 1;
    v128 = 1;
    v127 = 1;
    sub_14086C690(&v108, v64[5], v64[6], &v112);
    v156 = 1;
    v155 = 1;
    v154 = 1;
    v41 = 1;
    if ( !sub_14042AAD0(v83, (__int64)&v110) )
    {
      v156 = 1;
      v155 = 1;
      v154 = 1;
      sub_141486710(v119, v122, v13);
      if ( *(_DWORD *)v119 == 2 )
      {
        *((_QWORD *)&v112 + 1) = *(_QWORD *)&v119[8];
        *(_QWORD *)&v112 = 2;
LABEL_61:
        v156 = 1;
        v155 = 1;
        v154 = 1;
        sub_140018650((char *)&v112 + 8);
        v41 = 0;
        goto LABEL_62;
      }
      v112 = *(_OWORD *)v119;
      v116.m256i_i64[2] = *(_QWORD *)&v119[80];
      *(_OWORD *)v116.m256i_i8 = *(_OWORD *)&v119[64];
      v115 = *(_OWORD *)&v119[48];
      v114 = *(_OWORD *)&v119[32];
      v113 = *(_OWORD *)&v119[16];
      v41 = 1;
      if ( *(_QWORD *)v119 == 2 )
        goto LABEL_61;
    }
LABEL_62:
    v42 = v108;
    if ( (_QWORD)v108 != -1
      && v109 == v111
      && !(unsigned int)sub_1416847B0(*((_QWORD *)&v108 + 1), *((_QWORD *)&v110 + 1), v109) )
    {
      *(_QWORD *)&v119[16] = v111;
      v57 = v110;
      *(_OWORD *)v119 = v110;
      *(_QWORD *)&v119[40] = v102;
      *(_OWORD *)&v119[24] = v101;
      v58 = BYTE10(v106);
      v59 = v84;
      *(_QWORD *)&v119[64] = v109;
      v60 = v108;
      *(_OWORD *)&v119[48] = v108;
      *(_QWORD *)(a1 + 72) = v109;
      *(_OWORD *)(a1 + 56) = v60;
      *(_OWORD *)(a1 + 8) = v57;
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v119[32];
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v119[16];
      *(_DWORD *)(a1 + 80) = v59;
      *(_BYTE *)(a1 + 84) = 2;
      *(_BYTE *)(a1 + 85) = v58;
      *(_QWORD *)a1 = -1;
      v45 = 1;
      LODWORD(a3) = 0;
LABEL_89:
      v139 = v45;
      v138 = v45;
      v137 = v45;
      v136 = (char)a3;
      v135 = 0;
      sub_14067FFB0(v83);
      if ( !v45 )
      {
LABEL_41:
        if ( (_QWORD)v95 )
          sub_140001660(v122, v95, 1);
        if ( !(_BYTE)a3 )
        {
          v19 = *((_QWORD *)&v99 + 1);
          if ( !*((_QWORD *)&v99 + 1) )
          {
LABEL_24:
            if ( *((_QWORD *)&v102 + 1) != -1 && *((_QWORD *)&v102 + 1) )
              sub_140001660(v103.m256i_i64[0], *((_QWORD *)&v102 + 1), 1);
            if ( v103.m256i_i64[2] != -1 && v103.m256i_i64[2] )
              sub_140001660(v103.m256i_i64[3], v103.m256i_i64[2], 1);
            if ( *((_QWORD *)&v104 + 1) != -1 && *((_QWORD *)&v104 + 1) )
              sub_140001660(v105, *((_QWORD *)&v104 + 1), 1);
            goto LABEL_8;
          }
          v20 = (__int64 *)&v100;
          goto LABEL_22;
        }
LABEL_16:
        if ( (_QWORD)v110 )
          sub_140001660(*((_QWORD *)&v110 + 1), v110, 1);
        if ( *((_QWORD *)&v99 + 1) )
          sub_140001660(v100, *((_QWORD *)&v99 + 1), 1);
        v19 = v101;
        if ( !(_QWORD)v101 )
          goto LABEL_24;
        v20 = (__int64 *)&v101 + 1;
LABEL_22:
        v21 = *v20;
LABEL_23:
        sub_140001660(v21, v19, 1);
        goto LABEL_24;
      }
      LODWORD(v125) = (_DWORD)a3;
      sub_1404220A0(&v123);
      goto LABEL_51;
    }
    v156 = 1;
    v155 = 1;
    v154 = 1;
    sub_1407DBF50(&v112, a3);
    v125 = v112;
    if ( (_QWORD)v112 == -1 )
    {
      v156 = 1;
      v155 = 1;
      v154 = 1;
      sub_14083EF30(v119, *((_QWORD *)&v112 + 1));
      v46 = *(_OWORD *)&v119[16];
      v47 = *(_OWORD *)&v119[48];
      v48 = *(_OWORD *)&v119[64];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v119[32];
      *(_OWORD *)(a1 + 48) = v47;
      *(_OWORD *)(a1 + 64) = v48;
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v119[80];
      v49 = *(_OWORD *)v119;
      *(_OWORD *)(a1 + 16) = v46;
      *(_OWORD *)a1 = v49;
    }
    else
    {
      v107 = *((_QWORD *)&v112 + 1);
      v43 = v113;
      v134 = 1;
      v133 = 1;
      v132 = 1;
      v131 = 1;
      sub_14149C500(v87, &v110);
      v126 = 1;
      sub_14032C610(v119, &v95);
      v77 = *(_OWORD *)v119;
      *(_QWORD *)&v78 = *(_QWORD *)&v119[16];
      BYTE8(v78) = v97;
      *(_QWORD *)&v71 = v125;
      *((_QWORD *)&v71 + 1) = v107;
      *(_QWORD *)&v72 = v43;
      v126 = 0;
      a3 = &v71;
      sub_14083F630(v119, v87, &v77, &v71);
      v112 = *(_OWORD *)&v119[8];
      v113 = *(_OWORD *)&v119[24];
      v114 = *(_OWORD *)&v119[40];
      v115 = *(_OWORD *)&v119[56];
      v116 = *(__m256i *)&v119[72];
      if ( *(_QWORD *)v119 != -1 )
      {
        v94 = v116;
        v93 = v115;
        v92 = v114;
        v91 = v113;
        v90 = v112;
        v89 = *(_QWORD *)v119;
        v153 = 1;
        v152 = 1;
        v151 = 1;
        v44 = sub_1408726C0(v122, v13, *((__int64 *)&v115 + 1), v116.m256i_u64[0]);
        if ( v44 )
        {
          *(_QWORD *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v44;
          v45 = 1;
        }
        else
        {
          *(_QWORD *)v119 = v123;
          sub_1404220A0(v119);
          CloseHandle(*(HANDLE *)v119);
          *(_QWORD *)v119 = hObject;
          sub_1404220A0(v119);
          CloseHandle(*(HANDLE *)v119);
          *(_QWORD *)v119 = v118;
          sub_1404220A0(v119);
          CloseHandle(*(HANDLE *)v119);
          v153 = 0;
          v152 = 0;
          v151 = 0;
          rebuild_registry_with_policy(v119, a2, 1u, 0);
          if ( *(_QWORD *)v119 != -1 )
          {
            v117 = *(_OWORD *)&v119[96];
            v116 = *(__m256i *)&v119[64];
            v115 = *(_OWORD *)&v119[48];
            v114 = *(_OWORD *)&v119[32];
            v113 = *(_OWORD *)&v119[16];
            v112 = *(_OWORD *)v119;
            *(_QWORD *)&v119[16] = v111;
            v53 = v110;
            *(_OWORD *)v119 = v110;
            *(_QWORD *)&v119[40] = v102;
            *(_OWORD *)&v119[24] = v101;
            v54 = BYTE10(v106);
            v55 = *(_DWORD *)&v119[96];
            *(_QWORD *)&v119[64] = *(_QWORD *)&v119[88];
            v56 = *(_OWORD *)&v116.m256i_u64[1];
            *(_OWORD *)&v119[48] = *(_OWORD *)&v116.m256i_u64[1];
            *(_QWORD *)(a1 + 72) = *(_QWORD *)&v119[88];
            *(_OWORD *)(a1 + 56) = v56;
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v119[32];
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v119[16];
            *(_OWORD *)(a1 + 8) = v53;
            *(_DWORD *)(a1 + 80) = v55;
            *(_BYTE *)(a1 + 84) = v41;
            *(_BYTE *)(a1 + 85) = v54;
            *(_QWORD *)a1 = -1;
            if ( (_QWORD)v112 )
              sub_140001660(*((_QWORD *)&v112 + 1), v112, 1);
            if ( *((_QWORD *)&v113 + 1) )
              sub_140001660(v114, *((_QWORD *)&v113 + 1), 1);
            sub_140009EF0(&v115);
            sub_1407D9D70(&v89);
            if ( v42 != -1 && v42 )
              sub_140001660(*((_QWORD *)&v108 + 1), v42, 1);
            v139 = 0;
            v138 = 0;
            v137 = 0;
            v136 = 0;
            v135 = 0;
            sub_14067FFB0(v83);
            if ( (_QWORD)v95 )
              sub_140001660(v122, v95, 1);
            v19 = *((_QWORD *)&v99 + 1);
            if ( !*((_QWORD *)&v99 + 1) )
              goto LABEL_24;
            v21 = v100;
            goto LABEL_23;
          }
          v76 = *(_OWORD *)&v119[88];
          v75 = *(_OWORD *)&v119[72];
          v74 = *(_OWORD *)&v119[56];
          v73 = *(_OWORD *)&v119[40];
          v72 = *(_OWORD *)&v119[24];
          v71 = *(_OWORD *)&v119[8];
          v153 = 0;
          v152 = 0;
          v151 = 0;
          failure_after_snapshot_writes(&v77, v64, (__int64)&v89, 1, (__int64)aRebuildRegistr_0, 23, (__int64)&v71);
          *(_OWORD *)(a1 + 80) = v82;
          *(_OWORD *)(a1 + 64) = v81;
          v61 = v77;
          v62 = v78;
          v63 = v79;
          *(_OWORD *)(a1 + 48) = v80;
          *(_OWORD *)(a1 + 32) = v63;
          *(_OWORD *)(a1 + 16) = v62;
          *(_OWORD *)a1 = v61;
          v45 = 0;
        }
        sub_1407D9D70(&v89);
        goto LABEL_73;
      }
      *(__m256i *)(a1 + 64) = v116;
      v50 = v112;
      v51 = v113;
      v52 = v114;
      *(_OWORD *)(a1 + 48) = v115;
      *(_OWORD *)(a1 + 32) = v52;
      *(_OWORD *)(a1 + 16) = v51;
      *(_OWORD *)a1 = v50;
    }
    v45 = 1;
LABEL_73:
    LOBYTE(a3) = 1;
    if ( v42 != -1 && v42 )
      sub_140001660(*((_QWORD *)&v108 + 1), v42, 1);
    goto LABEL_89;
  }
  nullsub_1(v7);
  v11 = (void *)sub_140001650(60, 1);
  if ( !v11 )
    sub_1416C2D4B(1, 60);
  qmemcpy(v11, "Only real ChatGPT OAuth credentials can be added as accounts", 60);
  *(_QWORD *)a1 = 9;
  *(_QWORD *)(a1 + 8) = 60;
  *(_QWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 24) = 60;
LABEL_8:
  sub_140016620(v64);
  return a1;
}
