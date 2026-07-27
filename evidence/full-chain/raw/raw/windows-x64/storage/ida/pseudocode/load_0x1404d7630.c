// win 1.2.1 | module src/core/relay/storage.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::storage::load | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall load(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r12
  void *v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rdx
  _BYTE *v21; // rax
  unsigned __int8 *v22; // rax
  _QWORD *v23; // r15
  int v24; // eax
  _QWORD *v25; // rax
  __int128 v26; // xmm0
  void *v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // r14
  __int64 v40; // r15
  __int128 v41; // kr10_16
  __int128 v42; // kr20_16
  __int64 v43; // rcx
  unsigned __int64 v44; // r15
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // rbx
  char *v52; // r13
  unsigned __int64 v53; // r15
  char v54; // al
  int v55; // edx
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // r14
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rbx
  _QWORD *v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rax
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  char v71; // bl
  bool v72; // al
  __int64 v73; // r14
  __int64 v74; // r15
  __int64 v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdi
  __int128 v80; // [rsp+30h] [rbp-50h] BYREF
  __int64 v81; // [rsp+40h] [rbp-40h]
  __int128 v82; // [rsp+48h] [rbp-38h] BYREF
  __int64 v83; // [rsp+58h] [rbp-28h]
  _BYTE v84[88]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v85; // [rsp+B8h] [rbp+38h]
  _BYTE v86[184]; // [rsp+C8h] [rbp+48h] BYREF
  int v87; // [rsp+180h] [rbp+100h]
  __int64 v88; // [rsp+190h] [rbp+110h]
  __int64 v89; // [rsp+198h] [rbp+118h]
  _OWORD v90[2]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v91; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v92; // [rsp+1D0h] [rbp+150h]
  __int128 v93; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v94; // [rsp+1F0h] [rbp+170h]
  __int128 v95; // [rsp+200h] [rbp+180h]
  __int128 v96; // [rsp+210h] [rbp+190h]
  __int128 v97; // [rsp+220h] [rbp+1A0h]
  __int128 v98; // [rsp+230h] [rbp+1B0h]
  _BYTE v99[104]; // [rsp+240h] [rbp+1C0h] BYREF
  _BYTE v100[192]; // [rsp+2A8h] [rbp+228h] BYREF
  __int128 v101; // [rsp+368h] [rbp+2E8h] BYREF
  const char *v102; // [rsp+378h] [rbp+2F8h]
  __int64 v103; // [rsp+380h] [rbp+300h]
  char **v104; // [rsp+388h] [rbp+308h]
  __int64 v105; // [rsp+390h] [rbp+310h] BYREF
  __int64 v106; // [rsp+398h] [rbp+318h]
  __int128 v107; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v108; // [rsp+3B0h] [rbp+330h]
  __int128 v109; // [rsp+3C0h] [rbp+340h]
  __int128 v110; // [rsp+3D0h] [rbp+350h]
  __int128 v111; // [rsp+3E0h] [rbp+360h]
  __int128 v112; // [rsp+3F0h] [rbp+370h]
  __int128 v113; // [rsp+400h] [rbp+380h] BYREF
  __int128 v114; // [rsp+410h] [rbp+390h]
  __int128 v115; // [rsp+420h] [rbp+3A0h]
  __int128 v116; // [rsp+430h] [rbp+3B0h]
  __int128 v117; // [rsp+440h] [rbp+3C0h]
  __int128 v118; // [rsp+450h] [rbp+3D0h]
  __int64 v119; // [rsp+460h] [rbp+3E0h]
  int v120; // [rsp+468h] [rbp+3E8h] BYREF
  int v121; // [rsp+46Ch] [rbp+3ECh]
  __int64 v122; // [rsp+470h] [rbp+3F0h]
  __int64 v123; // [rsp+478h] [rbp+3F8h]
  __int64 v124; // [rsp+480h] [rbp+400h]
  unsigned __int64 v125; // [rsp+488h] [rbp+408h]
  __int64 v126; // [rsp+490h] [rbp+410h]
  char v127; // [rsp+49Fh] [rbp+41Fh]
  __int64 v128; // [rsp+4A0h] [rbp+420h]

  v128 = -2; /*0x1404d764b*/
  v4 = sub_140712590(a2); /*0x1404d765f*/
  if ( v4 ) /*0x1404d7667*/
  {
    *(_QWORD *)(a1 + 8) = 2; /*0x1404d7669*/
    *(_QWORD *)(a1 + 16) = v4; /*0x1404d7671*/
LABEL_3:
    *(_QWORD *)a1 = -1; /*0x1404d7675*/
    return a1; /*0x1404d767c*/
  }
  v5 = a2[101]; /*0x1404d7681*/
  v6 = a2[102]; /*0x1404d7688*/
  sub_141486710(v99, v5, v6); /*0x1404d769c*/
  if ( *(_DWORD *)v99 == 2 ) /*0x1404d76a8*/
  {
    *(_QWORD *)&v84[8] = *(_QWORD *)&v99[8]; /*0x1404d76b1*/
    *(_QWORD *)v84 = 2; /*0x1404d76b5*/
LABEL_7:
    sub_140018650(&v84[8]); /*0x1404d770c*/
    *(_OWORD *)(a1 + 16) = 0; /*0x1404d7718*/
    *(_OWORD *)(a1 + 40) = 0; /*0x1404d771c*/
    *(_OWORD *)(a1 + 64) = 0; /*0x1404d7720*/
    *(_QWORD *)a1 = 0; /*0x1404d7724*/
    *(_QWORD *)(a1 + 8) = 8; /*0x1404d772b*/
    *(_QWORD *)(a1 + 32) = 8; /*0x1404d7733*/
    *(_QWORD *)(a1 + 56) = 1; /*0x1404d773b*/
    *(_QWORD *)(a1 + 80) = 1; /*0x1404d7743*/
    *(_QWORD *)(a1 + 88) = 0; /*0x1404d774b*/
    *(_QWORD *)(a1 + 96) = -1; /*0x1404d7753*/
    *(_WORD *)(a1 + 120) = 0; /*0x1404d775b*/
    *(_BYTE *)(a1 + 122) = 0; /*0x1404d7761*/
    *(_QWORD *)(a1 + 128) = -1; /*0x1404d7765*/
    *(_DWORD *)(a1 + 288) = 10; /*0x1404d7770*/
    *(_WORD *)(a1 + 292) = 0; /*0x1404d777a*/
    return a1; /*0x1404d777a*/
  }
  *(_OWORD *)v84 = *(_OWORD *)v99; /*0x1404d76db*/
  *(_QWORD *)&v84[80] = *(_QWORD *)&v99[80]; /*0x1404d76e6*/
  *(_OWORD *)&v84[64] = *(_OWORD *)&v99[64]; /*0x1404d76f1*/
  *(_OWORD *)&v84[48] = *(_OWORD *)&v99[48]; /*0x1404d76f5*/
  *(_OWORD *)&v84[32] = *(_OWORD *)&v99[32]; /*0x1404d76f9*/
  *(_OWORD *)&v84[16] = *(_OWORD *)&v99[16]; /*0x1404d76fd*/
  if ( *(_QWORD *)v99 == 2 ) /*0x1404d7706*/
    goto LABEL_7; /*0x1404d7706*/
  sub_14148D130(v99, v5, v6); /*0x1404d77a7*/
  v8 = *(_QWORD *)&v99[8]; /*0x1404d77b3*/
  v9 = *(_QWORD *)v99; /*0x1404d77b3*/
  if ( *(_QWORD *)v99 == -1 ) /*0x1404d77be*/
  {
    *(_QWORD *)(a1 + 8) = 2; /*0x1404d788e*/
    *(_QWORD *)(a1 + 16) = v8; /*0x1404d7896*/
    goto LABEL_3; /*0x1404d789a*/
  }
  v10 = *(_QWORD *)&v99[16]; /*0x1404d77c4*/
  v11 = *(_QWORD *)&v99[8]; /*0x1404d77cb*/
  sub_14033BC10(*(_QWORD *)&v99[8], *(_QWORD *)&v99[16]); /*0x1404d77d1*/
  v119 = v11; /*0x1404d77d9*/
  if ( !v13 ) /*0x1404d77e0*/
  {
    nullsub_1(v12); /*0x1404d789f*/
    v17 = (void *)sub_140001650(54, 1); /*0x1404d78ae*/
    if ( !v17 ) /*0x1404d78b6*/
    {
      v122 = v9; /*0x1404d8a78*/
      sub_1416C2D4B(1, 54); /*0x1404d8a89*/
    }
    qmemcpy(v17, "relay state file is empty; original file was preserved", 54); /*0x1404d78d9*/
    *(_QWORD *)(a1 + 8) = 9; /*0x1404d78ea*/
    *(_QWORD *)(a1 + 16) = 54; /*0x1404d78f2*/
    *(_QWORD *)(a1 + 24) = v17; /*0x1404d78fa*/
    *(_QWORD *)(a1 + 32) = 54; /*0x1404d78fe*/
    *(_QWORD *)a1 = -1; /*0x1404d7906*/
    goto LABEL_94; /*0x1404d790d*/
  }
  v122 = v9; /*0x1404d77e6*/
  *(_QWORD *)v99 = v11; /*0x1404d77ed*/
  *(_QWORD *)&v99[8] = v10; /*0x1404d77f4*/
  *(_OWORD *)&v99[16] = 0; /*0x1404d77fe*/
  *(_QWORD *)&v99[32] = v11; /*0x1404d7805*/
  *(_QWORD *)&v99[40] = v10; /*0x1404d780c*/
  sub_1408A6200(v84, v99); /*0x1404d781e*/
  if ( v84[0] == 0xFF ) /*0x1404d7828*/
  {
    *(_QWORD *)&v101 = *(_QWORD *)&v84[8]; /*0x1404d7916*/
    *(_QWORD *)v99 = &v101; /*0x1404d7924*/
    *(_QWORD *)&v99[8] = sub_14142D3F0; /*0x1404d7932*/
    sub_14149C0F0(&v93, &unk_141758273, v99); /*0x1404d794e*/
    *(_QWORD *)&v99[16] = v94; /*0x1404d795b*/
    *(_OWORD *)v99 = v93; /*0x1404d7969*/
    v18 = *(_QWORD *)v101; /*0x1404d7977*/
    v19 = *(_QWORD *)v101 == 1; /*0x1404d797a*/
    v126 = v101; /*0x1404d797e*/
    if ( v19 ) /*0x1404d7985*/
    {
      sub_140018650(v101 + 8); /*0x1404d7a6f*/
    }
    else if ( !v18 ) /*0x1404d798e*/
    {
      v20 = *(_QWORD *)(v126 + 16); /*0x1404d799b*/
      if ( v20 ) /*0x1404d79a2*/
        sub_140001660(*(_QWORD *)(v126 + 8), v20, 1); /*0x1404d79b9*/
    }
    sub_140001660(v126, 40, 8); /*0x1404d7a87*/
    v26 = *(_OWORD *)v99; /*0x1404d7a8c*/
    v113 = *(_OWORD *)v99; /*0x1404d7a9a*/
    v108 = *(_OWORD *)&v99[16]; /*0x1404d7aa1*/
    v107 = *(_OWORD *)v99; /*0x1404d7aa8*/
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v99[16]; /*0x1404d7aaf*/
    *(_OWORD *)(a1 + 16) = v26; /*0x1404d7ab3*/
    *(_QWORD *)(a1 + 8) = 9; /*0x1404d7ab7*/
    *(_QWORD *)a1 = -1; /*0x1404d7abf*/
    goto LABEL_93; /*0x1404d7ac6*/
  }
  v90[0] = *(_OWORD *)v84; /*0x1404d7836*/
  v90[1] = *(_OWORD *)&v84[16]; /*0x1404d783d*/
  v14 = sub_141433D50(aSchemaversion_1, 13, v90); /*0x1404d7857*/
  if ( !v14 ) /*0x1404d7860*/
  {
    v120 = 0; /*0x1404d79c3*/
    v16 = 0; /*0x1404d79cd*/
    goto LABEL_25; /*0x1404d79cd*/
  }
  if ( *(_BYTE *)v14 != 2 ) /*0x1404d7869*/
    goto LABEL_37; /*0x1404d7869*/
  v15 = *(_QWORD *)(v14 + 8); /*0x1404d786f*/
  if ( v15 ) /*0x1404d7876*/
  {
    if ( (_DWORD)v15 == 1 ) /*0x1404d787f*/
    {
      v16 = *(_QWORD *)(v14 + 16); /*0x1404d7885*/
      goto LABEL_34; /*0x1404d7889*/
    }
LABEL_37:
    nullsub_1(v15); /*0x1404d7b53*/
    v27 = (void *)sub_140001650(79, 1); /*0x1404d7b62*/
    if ( !v27 ) /*0x1404d7b6a*/
      sub_1416C2D4B(1, 79); /*0x1404d8a9b*/
    qmemcpy(v27, "relay state schemaVersion must be a 32-bit integer; original file was preserved", 79); /*0x1404d7ba3*/
    *(_QWORD *)(a1 + 8) = 9; /*0x1404d7ba6*/
    *(_QWORD *)(a1 + 16) = 79; /*0x1404d7bae*/
    *(_QWORD *)(a1 + 24) = v27; /*0x1404d7bb6*/
    *(_QWORD *)(a1 + 32) = 79; /*0x1404d7bba*/
    goto LABEL_44; /*0x1404d7bc2*/
  }
  v16 = *(_QWORD *)(v14 + 16); /*0x1404d7acb*/
  if ( v16 < 0 ) /*0x1404d7ad2*/
    goto LABEL_37; /*0x1404d7ad2*/
LABEL_34:
  if ( (int)v16 != v16 ) /*0x1404d7ada*/
    goto LABEL_37; /*0x1404d7ada*/
  v120 = v16; /*0x1404d7adc*/
  if ( v16 > 10 ) /*0x1404d7ae7*/
  {
    *(_QWORD *)v99 = &v120; /*0x1404d7af4*/
    *(_QWORD *)&v99[8] = sub_1414AB890; /*0x1404d7b02*/
    *(_QWORD *)&v99[16] = &unk_14175AFE0; /*0x1404d7b10*/
    *(_QWORD *)&v99[24] = sub_1414AB890; /*0x1404d7b17*/
    sub_14149C0F0(&v82, &unk_14175DC9F, v99); /*0x1404d7b30*/
    *(_QWORD *)(a1 + 32) = v83; /*0x1404d7b3a*/
    *(_OWORD *)(a1 + 16) = v82; /*0x1404d7b42*/
    *(_QWORD *)(a1 + 8) = 9; /*0x1404d7b46*/
LABEL_44:
    *(_QWORD *)a1 = -1; /*0x1404d7ede*/
LABEL_92:
    sub_1400104F0(v90); /*0x1404d8638*/
LABEL_93:
    v9 = v122; /*0x1404d8645*/
LABEL_94:
    if ( v9 ) /*0x1404d864f*/
      sub_140001660(v119, v9, 1); /*0x1404d8665*/
    return a1; /*0x1404d866a*/
  }
LABEL_25:
  v21 = (_BYTE *)sub_141433D50(aActivebyide_0, 11, v90); /*0x1404d79d0*/
  if ( v21 ) /*0x1404d79ec*/
  {
    if ( *v21 == 5 ) /*0x1404d79f5*/
    {
      v22 = (unsigned __int8 *)sub_1402B3A40(v21 + 8, aCodex_2, 5); /*0x1404d7a0f*/
      if ( v22 ) /*0x1404d7a17*/
      {
        v23 = v22; /*0x1404d7a1d*/
        v24 = *v22; /*0x1404d7a20*/
        if ( v24 == 3 ) /*0x1404d7a26*/
        {
          v125 = v23[1]; /*0x1404d7bcb*/
          v124 = v23[2]; /*0x1404d7bd6*/
          v28 = v23[3]; /*0x1404d7bdd*/
          v23[1] = 0; /*0x1404d7be1*/
          v23[2] = 1; /*0x1404d7be9*/
          v23[3] = 0; /*0x1404d7bf1*/
          v127 = 1; /*0x1404d7bf9*/
          v29 = sub_14030B9B0(); /*0x1404d7c00*/
          *(_BYTE *)v29 = 3; /*0x1404d7c09*/
          *(_QWORD *)(v29 + 8) = v125; /*0x1404d7c13*/
          *(_QWORD *)(v29 + 16) = v124; /*0x1404d7c1e*/
          v123 = v29; /*0x1404d7c22*/
          *(_QWORD *)(v29 + 24) = v28; /*0x1404d7c29*/
          v126 = (__int64)v23; /*0x1404d7c30*/
          sub_1400104F0(v23); /*0x1404d7c37*/
          v30 = (_QWORD *)v126; /*0x1404d7c3d*/
          *(_BYTE *)v126 = 4; /*0x1404d7c44*/
          v30[1] = 1; /*0x1404d7c47*/
          v30[2] = v123; /*0x1404d7c56*/
          v30[3] = 1; /*0x1404d7c5a*/
        }
        else if ( !v24 ) /*0x1404d7a2e*/
        {
          v126 = (__int64)v23; /*0x1404d7a37*/
          sub_1400104F0(v23); /*0x1404d7a3e*/
          v25 = (_QWORD *)v126; /*0x1404d7a44*/
          *(_BYTE *)v126 = 4; /*0x1404d7a4b*/
          v25[1] = 0; /*0x1404d7a4e*/
          v25[2] = 8; /*0x1404d7a56*/
          v25[3] = 0; /*0x1404d7a5e*/
        }
      }
    }
  }
  sub_1404DE250(&v113, v90); /*0x1404d7c70*/
  sub_140B85CC0(v99, &v113, aRelaystate, 10, &off_1417ADD18, 6); /*0x1404d7ca6*/
  v31 = *(_QWORD *)v99; /*0x1404d7cac*/
  if ( *(_QWORD *)v99 == -1 ) /*0x1404d7cb7*/
  {
    sub_14046BAA0(&v113, *(_QWORD *)&v99[8]); /*0x1404d7e2d*/
    v112 = v118; /*0x1404d7e3a*/
    v111 = v117; /*0x1404d7e48*/
    v110 = v116; /*0x1404d7e6b*/
    v93 = v113; /*0x1404d7e72*/
    v94 = v114; /*0x1404d7e79*/
    v95 = v115; /*0x1404d7e80*/
    v96 = v116; /*0x1404d7e87*/
    v97 = v117; /*0x1404d7e8e*/
    v98 = v118; /*0x1404d7e95*/
    *(_OWORD *)(a1 + 88) = v118; /*0x1404d7ea3*/
    *(_OWORD *)(a1 + 72) = v97; /*0x1404d7eae*/
    v36 = v93; /*0x1404d7eb2*/
    v37 = v94; /*0x1404d7eb9*/
    v38 = v95; /*0x1404d7ec0*/
    *(_OWORD *)(a1 + 56) = v96; /*0x1404d7ece*/
    *(_OWORD *)(a1 + 40) = v38; /*0x1404d7ed2*/
    *(_OWORD *)(a1 + 24) = v37; /*0x1404d7ed6*/
    *(_OWORD *)(a1 + 8) = v36; /*0x1404d7eda*/
    goto LABEL_44; /*0x1404d7eda*/
  }
  v112 = *(_OWORD *)&v99[88]; /*0x1404d7cc8*/
  v111 = *(_OWORD *)&v99[72]; /*0x1404d7cd3*/
  v110 = *(_OWORD *)&v99[56]; /*0x1404d7ce9*/
  v109 = *(_OWORD *)&v99[40]; /*0x1404d7cf0*/
  v108 = *(_OWORD *)&v99[24]; /*0x1404d7cf7*/
  v107 = *(_OWORD *)&v99[8]; /*0x1404d7cfe*/
  sub_141684120(v86, v100, 192); /*0x1404d7d16*/
  v98 = v112; /*0x1404d7d22*/
  v97 = v111; /*0x1404d7d30*/
  v96 = v110; /*0x1404d7d53*/
  v95 = v109; /*0x1404d7d5a*/
  v94 = v108; /*0x1404d7d61*/
  v93 = v107; /*0x1404d7d68*/
  *(_OWORD *)&v84[8] = v107; /*0x1404d7d6f*/
  *(_OWORD *)&v84[24] = v108; /*0x1404d7d73*/
  *(_OWORD *)&v84[40] = v109; /*0x1404d7d77*/
  *(_OWORD *)&v84[56] = v110; /*0x1404d7d7b*/
  *(_OWORD *)&v84[72] = v111; /*0x1404d7d7f*/
  v85 = v112; /*0x1404d7d83*/
  *(_QWORD *)v84 = v31; /*0x1404d7d87*/
  sub_1404D4ED0(v99, v107, *((_QWORD *)&v107 + 1)); /*0x1404d7d9a*/
  v32 = *(_QWORD *)v99; /*0x1404d7da0*/
  v113 = *(_OWORD *)&v99[8]; /*0x1404d7dae*/
  *(_QWORD *)&v114 = *(_QWORD *)&v99[24]; /*0x1404d7dbc*/
  if ( *(_QWORD *)v99 != -1 ) /*0x1404d7dc7*/
  {
    v33 = *(_OWORD *)&v99[32]; /*0x1404d7dcd*/
    v34 = *(_OWORD *)&v99[48]; /*0x1404d7dd4*/
    v35 = *(_OWORD *)&v99[64]; /*0x1404d7ddb*/
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v99[80]; /*0x1404d7de9*/
    *(_OWORD *)(a1 + 72) = v35; /*0x1404d7ded*/
    *(_OWORD *)(a1 + 56) = v34; /*0x1404d7df1*/
    *(_OWORD *)(a1 + 40) = v33; /*0x1404d7df5*/
    *(_QWORD *)(a1 + 32) = v114; /*0x1404d7e00*/
    *(_OWORD *)(a1 + 16) = v113; /*0x1404d7e0b*/
    *(_QWORD *)(a1 + 8) = v32; /*0x1404d7e0f*/
    *(_QWORD *)a1 = -1; /*0x1404d7e13*/
LABEL_91:
    sub_14043F690(v84); /*0x1404d862e*/
    goto LABEL_92; /*0x1404d8632*/
  }
  v91 = v113; /*0x1404d7ef1*/
  v92 = v114; /*0x1404d7eff*/
  v126 = v114; /*0x1404d7f06*/
  if ( (_QWORD)v114 ) /*0x1404d7f10*/
  {
    v39 = a2[97]; /*0x1404d7f16*/
    v40 = a2[98]; /*0x1404d7f1d*/
    preserve_state_before_provider_id_migrat((unsigned int)v99, v39, v40, v119, v10); /*0x1404d7f3d*/
    v41 = *(_OWORD *)v99; /*0x1404d7f4a*/
    v42 = *(_OWORD *)&v99[16]; /*0x1404d7f58*/
    if ( *(_QWORD *)v99 != -1 ) /*0x1404d7f63*/
    {
      v43 = *(_QWORD *)&v99[32]; /*0x1404d7f65*/
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v99[88]; /*0x1404d7f73*/
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v99[72]; /*0x1404d7f7e*/
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v99[56]; /*0x1404d7f89*/
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v99[40]; /*0x1404d7f94*/
      *(_QWORD *)(a1 + 16) = *((_QWORD *)&v41 + 1); /*0x1404d7f98*/
      *(_OWORD *)(a1 + 24) = v42; /*0x1404d7f9c*/
      *(_QWORD *)(a1 + 40) = v43; /*0x1404d7fa4*/
      *(_QWORD *)(a1 + 8) = v41; /*0x1404d7fa8*/
      *(_QWORD *)a1 = -1; /*0x1404d7fac*/
LABEL_90:
      sub_1402B8C90(&v91); /*0x1404d8621*/
      goto LABEL_91; /*0x1404d8628*/
    }
    v125 = *(_QWORD *)&v99[16]; /*0x1404d7fb8*/
    v124 = *(_QWORD *)&v99[8]; /*0x1404d7fbf*/
    apply_provider_id_migrations(v39, v40, v84, *((__int64 *)&v91 + 1), v126); /*0x1404d7fe3*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404d7ff7*/
    {
      *(_QWORD *)&v93 = v126; /*0x1404d8004*/
      *(_QWORD *)&v107 = v125; /*0x1404d8012*/
      *((_QWORD *)&v107 + 1) = *((_QWORD *)&v42 + 1); /*0x1404d8019*/
      *(_QWORD *)&v113 = &v93; /*0x1404d8027*/
      *((_QWORD *)&v113 + 1) = sub_1414AC520; /*0x1404d8035*/
      *(_QWORD *)&v114 = &v107; /*0x1404d8043*/
      *((_QWORD *)&v114 + 1) = sub_14148F3A0; /*0x1404d8051*/
      *(_QWORD *)v99 = aCodexmateLibCo_22; /*0x1404d805f*/
      *(_QWORD *)&v99[8] = 35; /*0x1404d8066*/
      *(_QWORD *)&v99[16] = aCodexmateLibCo_22; /*0x1404d8071*/
      *(_QWORD *)&v99[24] = 35; /*0x1404d8078*/
      *(_QWORD *)&v99[32] = &off_14175DA40; /*0x1404d808a*/
      sub_140985BA0(&unk_14175D9F9, &v113, 2, v99); /*0x1404d80ac*/
    }
    if ( v124 ) /*0x1404d80c3*/
      sub_140001660(v125, v124, 1); /*0x1404d80cb*/
  }
  if ( (int)v16 < 10 ) /*0x1404d80d4*/
  {
    *(_QWORD *)&v107 = sub_1404D6990(*(_QWORD *)&v84[8], *(_QWORD *)&v84[16]); /*0x1404d80e8*/
    if ( (_QWORD)v107 ) /*0x1404d80f2*/
    {
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404d8106*/
      {
        *(_QWORD *)&v113 = &v107; /*0x1404d810f*/
        *((_QWORD *)&v113 + 1) = sub_1414AC520; /*0x1404d811d*/
        *(_QWORD *)v99 = aCodexmateLibCo_22; /*0x1404d812b*/
        *(_QWORD *)&v99[8] = 35; /*0x1404d8132*/
        *(_QWORD *)&v99[16] = aCodexmateLibCo_22; /*0x1404d813d*/
        *(_QWORD *)&v99[24] = 35; /*0x1404d8144*/
        *(_QWORD *)&v99[32] = &off_14175DAC0; /*0x1404d8156*/
        sub_140985BA0(&unk_14175DA58, &v113, 2, v99); /*0x1404d8178*/
      }
    }
  }
  v44 = *(_QWORD *)&v84[16]; /*0x1404d817e*/
  v45 = sub_1407BF4A0(&off_141759048); /*0x1404d818f*/
  v47 = v46; /*0x1404d8192*/
  LOBYTE(v48) = 1; /*0x1404d81a4*/
  sub_1405AC280(v99, 16, v44, v48); /*0x1404d81a7*/
  v123 = v16; /*0x1404d81ad*/
  v94 = *(_OWORD *)&v99[16]; /*0x1404d81c2*/
  v93 = *(_OWORD *)v99; /*0x1404d81c9*/
  *(_QWORD *)&v95 = v45; /*0x1404d81d0*/
  *((_QWORD *)&v95 + 1) = v47; /*0x1404d81d7*/
  v49 = *(_QWORD *)&v84[8]; /*0x1404d81de*/
  v125 = v44; /*0x1404d81e2*/
  v50 = *(_QWORD *)&v84[8] + 232 * v44; /*0x1404d81f0*/
  v124 = *(_QWORD *)&v84[8]; /*0x1404d81fa*/
  while ( v49 != v50 ) /*0x1404d8204*/
  {
    v51 = v49; /*0x1404d820a*/
    v52 = *(char **)(v49 + 8); /*0x1404d820d*/
    v53 = *(_QWORD *)(v49 + 16); /*0x1404d8211*/
    sub_140AE73A0((__int64)&v107, v52, v53); /*0x1404d8222*/
    if ( (_QWORD)v107 != -1 ) /*0x1404d8230*/
    {
      *(_QWORD *)&v114 = v108; /*0x1404d85a0*/
      v113 = v107; /*0x1404d85ae*/
      _u7b__u7b_closure_u7d__u7d__4(v99, v51, &v113); /*0x1404d85c6*/
LABEL_88:
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v99[80]; /*0x1404d85cc*/
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v99[64]; /*0x1404d85de*/
      v68 = *(_OWORD *)v99; /*0x1404d85e2*/
      v69 = *(_OWORD *)&v99[16]; /*0x1404d85e9*/
      v70 = *(_OWORD *)&v99[32]; /*0x1404d85f0*/
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v99[48]; /*0x1404d85fe*/
      *(_OWORD *)(a1 + 40) = v70; /*0x1404d8602*/
      *(_OWORD *)(a1 + 24) = v69; /*0x1404d8606*/
      *(_OWORD *)(a1 + 8) = v68; /*0x1404d860a*/
      goto LABEL_89; /*0x1404d860a*/
    }
    v54 = sub_140475960(&v93, v52, v53); /*0x1404d823f*/
    v49 = v51 + 232; /*0x1404d8245*/
    if ( v54 ) /*0x1404d824e*/
    {
      *(_QWORD *)v99 = v51; /*0x1404d8250*/
      *(_QWORD *)&v99[8] = sub_1400015F0; /*0x1404d825e*/
      sub_14149C0F0(&v80, &unk_14175D831, v99); /*0x1404d8277*/
      *(_QWORD *)(a1 + 32) = v81; /*0x1404d8281*/
      *(_OWORD *)(a1 + 16) = v80; /*0x1404d8289*/
      *(_QWORD *)(a1 + 8) = 9; /*0x1404d828d*/
LABEL_89:
      *(_QWORD *)a1 = -1; /*0x1404d860e*/
      sub_140680B40(&v93); /*0x1404d861c*/
      goto LABEL_90; /*0x1404d861c*/
    }
  }
  v55 = v123; /*0x1404d829a*/
  if ( (int)v123 >= 2 ) /*0x1404d82a4*/
  {
    v71 = 1; /*0x1404d8675*/
    if ( v87 == 10 ) /*0x1404d867a*/
    {
      v72 = 0; /*0x1404d867c*/
      goto LABEL_113; /*0x1404d867e*/
    }
    LODWORD(v105) = v87; /*0x1404d8683*/
    v87 = 10; /*0x1404d8689*/
    sub_1404D8F10(&v113, a2, v84); /*0x1404d86a1*/
    if ( (_DWORD)v113 == -1 ) /*0x1404d86ae*/
    {
      if ( v126 ) /*0x1404d8913*/
        goto LABEL_119; /*0x1404d8913*/
    }
    else
    {
      *(_OWORD *)&v99[80] = v118; /*0x1404d86bb*/
      *(_OWORD *)&v99[64] = v117; /*0x1404d86c9*/
      *(_OWORD *)&v99[48] = v116; /*0x1404d86ec*/
      *(_OWORD *)&v99[32] = v115; /*0x1404d86f3*/
      *(_OWORD *)&v99[16] = v114; /*0x1404d86fa*/
      *(_OWORD *)v99 = v113; /*0x1404d8701*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404d8716*/
      {
        *(_QWORD *)&v107 = &v105; /*0x1404d8723*/
        *((_QWORD *)&v107 + 1) = sub_1414AB890; /*0x1404d8731*/
        *(_QWORD *)&v108 = &unk_14175AFE0; /*0x1404d873f*/
        *((_QWORD *)&v108 + 1) = sub_1414AB890; /*0x1404d8746*/
        *(_QWORD *)&v109 = v99; /*0x1404d8754*/
        *((_QWORD *)&v109 + 1) = sub_140B036A0; /*0x1404d8762*/
        *(_QWORD *)&v101 = aCodexmateLibCo_22; /*0x1404d8770*/
        *((_QWORD *)&v101 + 1) = 35; /*0x1404d8777*/
        v102 = aCodexmateLibCo_22; /*0x1404d8782*/
        v103 = 35; /*0x1404d8789*/
        v104 = &off_14175DC00; /*0x1404d879b*/
        sub_140985BA0(&unk_14175DBC8, &v107, 2, &v101); /*0x1404d87bd*/
      }
      sub_14043E650(v99); /*0x1404d87ca*/
    }
    v72 = 0; /*0x1404d87d0*/
  }
  else
  {
    v56 = sub_141433D50(aProviders_0, 9, v90); /*0x1404d82bd*/
    if ( !v56 || *(_BYTE *)v56 != 4 ) /*0x1404d82cf*/
      goto LABEL_104; /*0x1404d82cf*/
    v57 = *(_QWORD *)(v56 + 16); /*0x1404d82d5*/
    v58 = v57 + 32LL * *(_QWORD *)(v56 + 24); /*0x1404d82e1*/
    LOBYTE(v56) = 1; /*0x1404d82e4*/
    v121 = v56; /*0x1404d82e6*/
    v59 = 0; /*0x1404d82ec*/
    while ( v57 != v58 ) /*0x1404d82f9*/
    {
      v60 = v59; /*0x1404d82ff*/
      if ( v59 >= v125 ) /*0x1404d8305*/
      {
        v61 = 1; /*0x1404d8321*/
        v62 = 0; /*0x1404d8326*/
      }
      else
      {
        v61 = *(_QWORD *)(v124 + 232 * v59 + 8); /*0x1404d8315*/
        v62 = *(_QWORD *)(v124 + 232 * v59 + 16); /*0x1404d831a*/
      }
      v105 = v61; /*0x1404d8328*/
      v106 = v62; /*0x1404d832f*/
      v63 = sub_141433D50(aApikey_2, 6, v57); /*0x1404d8345*/
      v57 += 32; /*0x1404d834b*/
      ++v59; /*0x1404d834f*/
      if ( v63 ) /*0x1404d8356*/
      {
        if ( *(_BYTE *)v63 == 3 ) /*0x1404d835b*/
        {
          if ( v106 ) /*0x1404d8367*/
          {
            v64 = *(_QWORD *)(v63 + 24); /*0x1404d8369*/
            if ( v64 ) /*0x1404d8370*/
            {
              v89 = *(_QWORD *)(v63 + 16); /*0x1404d8386*/
              sub_1404D9720((unsigned int)&v101, (_DWORD)a2, v105, v106, v89, v64); /*0x1404d839c*/
              v88 = v58; /*0x1404d83a2*/
              if ( (_QWORD)v101 == -1 ) /*0x1404d83b1*/
              {
                if ( v60 < v125 ) /*0x1404d8556*/
                {
                  v67 = 232 * v60; /*0x1404d8558*/
                  v49 = v124; /*0x1404d855f*/
                  *(_BYTE *)(v124 + v67 + 228) = 1; /*0x1404d8566*/
                  *(_QWORD *)(v49 + v67 + 88) = 0; /*0x1404d856e*/
                }
              }
              else
              {
                *(_QWORD *)&v108 = v102; /*0x1404d83be*/
                v107 = v101; /*0x1404d83cc*/
                if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404d83e1*/
                {
                  *(_QWORD *)&v113 = &v105; /*0x1404d83ee*/
                  *((_QWORD *)&v113 + 1) = sub_14041F680; /*0x1404d83fc*/
                  *(_QWORD *)&v114 = &v107; /*0x1404d840a*/
                  *((_QWORD *)&v114 + 1) = sub_1400015F0; /*0x1404d8418*/
                  *(_QWORD *)v99 = aCodexmateLibCo_22; /*0x1404d8426*/
                  *(_QWORD *)&v99[8] = 35; /*0x1404d842d*/
                  *(_QWORD *)&v99[16] = aCodexmateLibCo_22; /*0x1404d8438*/
                  *(_QWORD *)&v99[24] = 35; /*0x1404d843f*/
                  *(_QWORD *)&v99[32] = &off_14175DB60; /*0x1404d8451*/
                  sub_140985BA0(&unk_14175DAE7, &v113, 2, v99); /*0x1404d8473*/
                }
                if ( v60 < v125 ) /*0x1404d8480*/
                {
                  sub_140388B60((unsigned int)v99, v64, 0, 1, 1); /*0x1404d84a2*/
                  v125 = *(_QWORD *)&v99[8]; /*0x1404d84ae*/
                  if ( v99[0] ) /*0x1404d84bc*/
                    sub_1416C2D4B(v125, *(_QWORD *)&v99[16]); /*0x1404d8ab1*/
                  v65 = (_QWORD *)(232 * v60 + v124); /*0x1404d84d0*/
                  v124 = *(_QWORD *)&v99[16]; /*0x1404d84da*/
                  sub_141684120(*(_QWORD *)&v99[16], v89, v64); /*0x1404d84eb*/
                  v66 = v65[9]; /*0x1404d84f3*/
                  if ( v66 ) /*0x1404d84fa*/
                    sub_140001660(v65[10], v66, 1); /*0x1404d8506*/
                  v65[9] = v125; /*0x1404d8512*/
                  v65[10] = v124; /*0x1404d851d*/
                  v65[11] = v64; /*0x1404d8521*/
                }
                if ( (_QWORD)v107 ) /*0x1404d852f*/
                  sub_140001660(*((_QWORD *)&v107 + 1), v107, 1); /*0x1404d853e*/
                v121 = 0; /*0x1404d8543*/
              }
              v124 = *(_QWORD *)&v84[8]; /*0x1404d857b*/
              v125 = *(_QWORD *)&v84[16]; /*0x1404d8586*/
              v58 = v88; /*0x1404d858d*/
            }
          }
        }
      }
    }
    if ( (v121 & 1) == 0 ) /*0x1404d87de*/
    {
      v87 = 10; /*0x1404d891e*/
      v72 = 0; /*0x1404d8928*/
      v71 = 0; /*0x1404d892a*/
    }
    else
    {
LABEL_104:
      v87 = 10; /*0x1404d87e4*/
      sub_1404D8F10(&v113, a2, v84); /*0x1404d87fc*/
      if ( (_DWORD)v113 == -1 ) /*0x1404d8809*/
      {
        v72 = v126 != 0; /*0x1404d8904*/
        v71 = 1; /*0x1404d8907*/
      }
      else
      {
        *(_OWORD *)&v99[80] = v118; /*0x1404d8816*/
        *(_OWORD *)&v99[64] = v117; /*0x1404d8824*/
        *(_OWORD *)&v99[48] = v116; /*0x1404d8847*/
        *(_OWORD *)&v99[32] = v115; /*0x1404d884e*/
        *(_OWORD *)&v99[16] = v114; /*0x1404d8855*/
        *(_OWORD *)v99 = v113; /*0x1404d885c*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404d8871*/
        {
          *(_QWORD *)&v101 = v99; /*0x1404d887a*/
          *((_QWORD *)&v101 + 1) = sub_140B036A0; /*0x1404d8888*/
          *(_QWORD *)&v107 = aCodexmateLibCo_22; /*0x1404d8896*/
          *((_QWORD *)&v107 + 1) = 35; /*0x1404d889d*/
          *(_QWORD *)&v108 = aCodexmateLibCo_22; /*0x1404d88a8*/
          *((_QWORD *)&v108 + 1) = 35; /*0x1404d88af*/
          *(_QWORD *)&v109 = &off_14175DBB0; /*0x1404d88c1*/
          sub_140985BA0(&unk_14175DB78, &v101, 2, &v107); /*0x1404d88e3*/
        }
        sub_14043E650(v99); /*0x1404d88f0*/
        v72 = 0; /*0x1404d88f6*/
        v71 = 1; /*0x1404d88f8*/
      }
    }
  }
  v55 = v123; /*0x1404d892c*/
LABEL_113:
  if ( !v72 && v126 != 0 ) /*0x1404d893b*/
  {
    if ( (((unsigned __int8)v71 ^ 1) & (v55 < 2)) != 0 ) /*0x1404d89b4*/
    {
      LOBYTE(v49) = v72 || v126 == 0; /*0x1404d893e*/
      nullsub_1(v49); /*0x1404d8a26*/
      v78 = sub_140001650(135, 1); /*0x1404d8a35*/
      if ( !v78 ) /*0x1404d8a3d*/
        sub_1416C2D4B(1, 135); /*0x1404d8ac3*/
      v79 = v78; /*0x1404d8a3f*/
      sub_141684120(v78, aLegacyProvider, 135); /*0x1404d8a52*/
      *(_QWORD *)(a1 + 8) = 10; /*0x1404d8a57*/
      *(_QWORD *)(a1 + 16) = 135; /*0x1404d8a5f*/
      *(_QWORD *)(a1 + 24) = v79; /*0x1404d8a67*/
      *(_QWORD *)(a1 + 32) = 135; /*0x1404d8a6b*/
      goto LABEL_89; /*0x1404d8a73*/
    }
    sub_1404D8F10(v99, a2, v84); /*0x1404d89c4*/
    if ( *(_DWORD *)v99 != -1 ) /*0x1404d89d1*/
      goto LABEL_88; /*0x1404d89d1*/
    goto LABEL_119; /*0x1404d89d1*/
  }
  if ( v72 ) /*0x1404d8944*/
  {
LABEL_119:
    v73 = *((_QWORD *)&v91 + 1); /*0x1404d89d7*/
    v74 = *((_QWORD *)&v91 + 1) + (v126 << 6); /*0x1404d89e9*/
    v75 = a2[97]; /*0x1404d89ec*/
    v76 = a2[98]; /*0x1404d89f3*/
    while ( v73 != v74 ) /*0x1404d89fd*/
    {
      v77 = v73; /*0x1404d8a03*/
      v73 += 64; /*0x1404d8a06*/
      if ( *(_BYTE *)(v77 + 56) == 1 ) /*0x1404d8a0e*/
        cleanup_legacy_provider_key(v75, v76, *(_QWORD *)(v77 + 8), *(_QWORD *)(v77 + 16)); /*0x1404d8a1e*/
    }
  }
  sub_141684120(a1, v84, 296); /*0x1404d894a*/
  sub_140680B40(&v93); /*0x1404d8963*/
  sub_1402B8C90(&v91); /*0x1404d896f*/
  sub_1400104F0(v90); /*0x1404d897c*/
  if ( v122 ) /*0x1404d898c*/
    sub_140001660(v119, v122, 1); /*0x1404d899f*/
  return a1; /*0x1404d7786*/
}