// win 1.2.7 latest-exe | module src/core/relay/storage.rs | ea 0x14074a8d0 | successor of pre-update 0x140f73220 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.974, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_14074A8D0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int128 v7; // kr00_16
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  void *v15; // rax
  __int128 v16; // xmm0
  _BYTE *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // rax
  _BYTE *v21; // rax
  unsigned __int8 *v22; // rax
  _QWORD *v23; // r12
  int v24; // eax
  _QWORD *v25; // rax
  void *v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rbx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int64 v40; // r8
  __int64 v41; // rax
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  unsigned __int64 v45; // r9
  __int128 v46; // kr10_16
  __int128 v47; // kr20_16
  __int64 v48; // rcx
  __int64 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // r14
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r14
  __int64 v56; // r12
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // r15
  unsigned __int64 v60; // r13
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // rbx
  __int64 v63; // r14
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // r12
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm2
  bool v72; // al
  __int64 v73; // rbx
  __int64 v74; // r14
  __int64 v75; // rax
  __int128 v76; // [rsp+48h] [rbp-38h] BYREF
  __int64 v77; // [rsp+58h] [rbp-28h]
  __int128 v78; // [rsp+60h] [rbp-20h] BYREF
  __int64 v79; // [rsp+70h] [rbp-10h]
  __int128 v80; // [rsp+78h] [rbp-8h] BYREF
  __int64 v81; // [rsp+88h] [rbp+8h]
  _BYTE v82[40]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v83; // [rsp+B8h] [rbp+38h]
  __int128 v84; // [rsp+C8h] [rbp+48h]
  __int128 v85; // [rsp+D8h] [rbp+58h]
  __int128 v86; // [rsp+E8h] [rbp+68h]
  char v87[24]; // [rsp+F8h] [rbp+78h] BYREF
  __int128 v88; // [rsp+110h] [rbp+90h] BYREF
  __int64 v89; // [rsp+120h] [rbp+A0h]
  int v90; // [rsp+1F8h] [rbp+178h]
  char v91; // [rsp+20Eh] [rbp+18Eh]
  __int128 v92; // [rsp+210h] [rbp+190h] BYREF
  __int64 v93; // [rsp+220h] [rbp+1A0h]
  _OWORD v94[2]; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v95; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v96; // [rsp+260h] [rbp+1E0h]
  __int128 v97; // [rsp+270h] [rbp+1F0h]
  __int128 v98; // [rsp+280h] [rbp+200h]
  __int128 v99; // [rsp+290h] [rbp+210h]
  __int128 v100; // [rsp+2A0h] [rbp+220h]
  const char *v101; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v102; // [rsp+2C0h] [rbp+240h]
  const char *v103; // [rsp+2C8h] [rbp+248h]
  __int64 v104; // [rsp+2D0h] [rbp+250h]
  char **v105; // [rsp+2D8h] [rbp+258h]
  _BYTE v106[104]; // [rsp+2E0h] [rbp+260h] BYREF
  char v107[48]; // [rsp+348h] [rbp+2C8h] BYREF
  __int128 v108; // [rsp+378h] [rbp+2F8h]
  __int64 v109; // [rsp+468h] [rbp+3E8h]
  __int128 v110; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v111; // [rsp+480h] [rbp+400h]
  __int128 v112; // [rsp+490h] [rbp+410h]
  __int128 v113; // [rsp+4A0h] [rbp+420h]
  __int128 v114; // [rsp+4B0h] [rbp+430h]
  __int128 v115; // [rsp+4C0h] [rbp+440h]
  int v116; // [rsp+4DCh] [rbp+45Ch] BYREF
  __int128 v117; // [rsp+4E0h] [rbp+460h] BYREF
  __int128 v118; // [rsp+4F0h] [rbp+470h]
  __int128 v119; // [rsp+500h] [rbp+480h]
  __int128 v120; // [rsp+510h] [rbp+490h]
  __int128 v121; // [rsp+520h] [rbp+4A0h]
  __int128 v122; // [rsp+530h] [rbp+4B0h]
  int v123; // [rsp+54Ch] [rbp+4CCh] BYREF
  unsigned __int64 v124; // [rsp+550h] [rbp+4D0h]
  unsigned __int64 v125; // [rsp+558h] [rbp+4D8h]
  __int64 v126; // [rsp+560h] [rbp+4E0h]
  __int64 v127; // [rsp+568h] [rbp+4E8h]
  _BYTE *v128; // [rsp+570h] [rbp+4F0h]
  char v129; // [rsp+57Fh] [rbp+4FFh]
  __int64 v130; // [rsp+580h] [rbp+500h]

  v130 = -2;
  v4 = sub_140A2C1C0(a2);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v4;
LABEL_3:
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v5 = a2[101];
  v6 = a2[102];
  sub_1416C49D0(v106, v5, v6);
  if ( *(_DWORD *)v106 != 2 )
  {
    sub_1416CC1A0(v106, v5, v6);
    v7 = *(_OWORD *)v106;
    if ( *(_QWORD *)v106 == -1 )
    {
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = *((_QWORD *)&v7 + 1);
      goto LABEL_3;
    }
    v8 = *(_QWORD *)&v106[16];
    sub_1408FEA60(*(_QWORD *)&v106[8], *(_QWORD *)&v106[16]);
    if ( !v10 )
    {
      nullsub_1(v9, 0);
      v15 = (void *)sub_140001650(54, 1);
      if ( !v15 )
      {
        v124 = *((_QWORD *)&v7 + 1);
        v125 = v7;
        sub_14196B2DB(1, 54);
      }
      qmemcpy(v15, "relay state file is empty; original file was preserved", 54);
      *(_QWORD *)(a1 + 8) = 9;
      *(_QWORD *)(a1 + 16) = 54;
      *(_QWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 32) = 54;
      *(_QWORD *)a1 = -1;
      goto LABEL_44;
    }
    *(_QWORD *)v106 = v7 >> 64;
    v125 = v7;
    *(_QWORD *)&v106[8] = v8;
    *(_OWORD *)&v106[16] = 0;
    v124 = *((_QWORD *)&v7 + 1);
    *(_QWORD *)&v106[32] = *((_QWORD *)&v7 + 1);
    *(_QWORD *)&v106[40] = v8;
    sub_140D8B500(v82, (__int128 *)v106);
    if ( v82[0] == 0xFF )
    {
      v101 = *(const char **)&v82[8];
      *(_QWORD *)v106 = &v101;
      *(_QWORD *)&v106[8] = sub_14166FAD0;
      sub_1416DAFA0(&v95, &unk_141A3AFA1, v106);
      *(_OWORD *)v106 = v95;
      *(_QWORD *)&v106[16] = v96;
      sub_140032F30(&v101);
      v16 = *(_OWORD *)v106;
      v110 = *(_OWORD *)v106;
      v111 = *(_OWORD *)&v106[16];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v106[16];
      *(_OWORD *)(a1 + 16) = v16;
      *(_QWORD *)(a1 + 8) = 9;
      *(_QWORD *)a1 = -1;
LABEL_43:
      v7 = __PAIR128__(v124, v125);
LABEL_44:
      if ( !(_QWORD)v7 )
        return a1;
      v27 = *((_QWORD *)&v7 + 1);
      v28 = v7;
LABEL_46:
      sub_140001660(v27, v28, 1);
      return a1;
    }
    v94[0] = *(_OWORD *)v82;
    v94[1] = *(_OWORD *)&v82[16];
    v11 = sub_1416724D0(aSchemaversion, 13, v94);
    if ( !v11 )
    {
      v123 = 0;
      LODWORD(v14) = 0;
      goto LABEL_22;
    }
    if ( *(_BYTE *)v11 == 2 )
    {
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 != 2 )
      {
        if ( (_DWORD)v13 == 1 )
        {
          v14 = *(_QWORD *)(v11 + 16);
        }
        else
        {
          v14 = *(_QWORD *)(v11 + 16);
          if ( v14 < 0 )
            goto LABEL_39;
        }
        if ( (int)v14 == v14 )
        {
          v123 = v14;
          if ( v14 > 16 )
          {
            *(_QWORD *)v106 = &v123;
            *(_QWORD *)&v106[8] = sub_1416EAE00;
            *(_QWORD *)&v106[16] = &unk_141A40028;
            *(_QWORD *)&v106[24] = sub_1416EAE00;
            sub_1416DAFA0(&v80, &unk_141A40080, v106);
            *(_QWORD *)(a1 + 32) = v81;
            *(_OWORD *)(a1 + 16) = v80;
            *(_QWORD *)(a1 + 8) = 9;
LABEL_41:
            *(_QWORD *)a1 = -1;
LABEL_42:
            sub_1406C0ED0(v94);
            goto LABEL_43;
          }
LABEL_22:
          v17 = (_BYTE *)sub_1416724D0(aRoutercommitid, 14, v94);
          if ( v17 && *v17 )
          {
            if ( (int)v14 < 15 )
            {
LABEL_27:
              nullsub_1(v19, v18);
              v20 = (void *)sub_140001650(73, 1);
              if ( !v20 )
                sub_14196B2DB(1, 73);
              qmemcpy(v20, "relay state router commit receipt is invalid; original file was preserved", 73);
              *(_QWORD *)(a1 + 8) = 9;
              *(_QWORD *)(a1 + 16) = 73;
              *(_QWORD *)(a1 + 24) = v20;
              *(_QWORD *)(a1 + 32) = 73;
              goto LABEL_41;
            }
            sub_140763ED0(v106, v17);
            sub_14092B6C0(v82, v106);
            if ( v82[0] )
            {
              sub_140032F30(&v82[8]);
              goto LABEL_27;
            }
          }
          v21 = (_BYTE *)sub_1416724D0(aActivebyide, 11, v94);
          if ( v21 )
          {
            if ( *v21 == 5 )
            {
              v22 = (unsigned __int8 *)sub_140A124E0(v21 + 8, aCodex, 5);
              if ( v22 )
              {
                v23 = v22;
                v24 = *v22;
                if ( v24 == 3 )
                {
                  v127 = v23[1];
                  v126 = v23[2];
                  v30 = v23[3];
                  v23[1] = 0;
                  v23[2] = 1;
                  v23[3] = 0;
                  v129 = 1;
                  v31 = sub_140710E10(32);
                  *(_BYTE *)v31 = 3;
                  *(_QWORD *)(v31 + 8) = v127;
                  *(_QWORD *)(v31 + 16) = v126;
                  v109 = v31;
                  *(_QWORD *)(v31 + 24) = v30;
                  v128 = v23;
                  sub_1406C0ED0(v23);
                  v32 = v128;
                  *v128 = 4;
                  v32[1] = 1;
                  v32[2] = v109;
                  v32[3] = 1;
                }
                else if ( !v24 )
                {
                  v128 = v23;
                  sub_1406C0ED0(v23);
                  v25 = v128;
                  *v128 = 4;
                  v25[1] = 0;
                  v25[2] = 8;
                  v25[3] = 0;
                }
              }
            }
          }
          sub_140763ED0(&v117, v94);
          sub_140B92760(
            v106,
            &v117,
            "RelayStateprovidersactiveByIdeproxycodexRouterEnabledrouterCommitIdcodexRouterNoAccountModecodexNoAccountSlo"
            "tsclaudeWebSearchCompatcodexApiSlots",
            10,
            &off_141A58A30,
            10);
          v33 = *(_QWORD *)v106;
          if ( *(_QWORD *)v106 == -1 )
          {
            sub_1406F23F0(&v117, *(_QWORD *)&v106[8]);
            v115 = v122;
            v114 = v121;
            v113 = v120;
            v95 = v117;
            v96 = v118;
            v97 = v119;
            v98 = v120;
            v99 = v121;
            v100 = v122;
            *(_OWORD *)(a1 + 88) = v122;
            *(_OWORD *)(a1 + 72) = v99;
            v37 = v95;
            v38 = v96;
            v39 = v97;
            *(_OWORD *)(a1 + 56) = v98;
            *(_OWORD *)(a1 + 40) = v39;
            *(_OWORD *)(a1 + 24) = v38;
            *(_OWORD *)(a1 + 8) = v37;
            goto LABEL_41;
          }
          v115 = *(_OWORD *)&v106[88];
          v114 = *(_OWORD *)&v106[72];
          v113 = *(_OWORD *)&v106[56];
          v112 = *(_OWORD *)&v106[40];
          v111 = *(_OWORD *)&v106[24];
          v110 = *(_OWORD *)&v106[8];
          sub_1419234B0(v87, v107, 280);
          v100 = v115;
          v99 = v114;
          v98 = v113;
          v97 = v112;
          v96 = v111;
          v95 = v110;
          *(_OWORD *)&v82[8] = v110;
          *(_OWORD *)&v82[24] = v111;
          v83 = v112;
          v84 = v113;
          v85 = v114;
          v86 = v115;
          *(_QWORD *)v82 = v33;
          sub_140747870(v106, v82);
          if ( *(_DWORD *)v106 != -1 )
          {
            *(_OWORD *)(a1 + 88) = *(_OWORD *)&v106[80];
            *(_OWORD *)(a1 + 72) = *(_OWORD *)&v106[64];
            v34 = *(_OWORD *)v106;
            v35 = *(_OWORD *)&v106[16];
            v36 = *(_OWORD *)&v106[32];
            *(_OWORD *)(a1 + 56) = *(_OWORD *)&v106[48];
            *(_OWORD *)(a1 + 40) = v36;
            *(_OWORD *)(a1 + 24) = v35;
            *(_OWORD *)(a1 + 8) = v34;
LABEL_55:
            *(_QWORD *)a1 = -1;
LABEL_56:
            sub_140292E20(v82);
            goto LABEL_42;
          }
          sub_1407483C0(v106, *(_QWORD *)&v82[8], *(_QWORD *)&v82[16]);
          v41 = *(_QWORD *)v106;
          v117 = *(_OWORD *)&v106[8];
          *(_QWORD *)&v118 = *(_QWORD *)&v106[24];
          if ( *(_QWORD *)v106 != -1 )
          {
            v42 = *(_OWORD *)&v106[32];
            v43 = *(_OWORD *)&v106[48];
            v44 = *(_OWORD *)&v106[64];
            *(_OWORD *)(a1 + 88) = *(_OWORD *)&v106[80];
            *(_OWORD *)(a1 + 72) = v44;
            *(_OWORD *)(a1 + 56) = v43;
            *(_OWORD *)(a1 + 40) = v42;
            *(_QWORD *)(a1 + 32) = v118;
            *(_OWORD *)(a1 + 16) = v117;
            *(_QWORD *)(a1 + 8) = v41;
            goto LABEL_55;
          }
          v92 = v117;
          v93 = v118;
          v128 = (_BYTE *)v118;
          v45 = v124;
          if ( (_QWORD)v118 )
          {
            sub_14074A160((unsigned int)v106, a2[97], a2[98], v124, v8);
            v46 = *(_OWORD *)v106;
            v47 = *(_OWORD *)&v106[16];
            if ( *(_QWORD *)v106 != -1 )
            {
              v48 = *(_QWORD *)&v106[32];
              *(_QWORD *)(a1 + 96) = *(_QWORD *)&v106[88];
              *(_OWORD *)(a1 + 80) = *(_OWORD *)&v106[72];
              *(_OWORD *)(a1 + 64) = *(_OWORD *)&v106[56];
              *(_OWORD *)(a1 + 48) = *(_OWORD *)&v106[40];
              *(_QWORD *)(a1 + 16) = *((_QWORD *)&v46 + 1);
              *(_OWORD *)(a1 + 24) = v47;
              *(_QWORD *)(a1 + 40) = v48;
              *(_QWORD *)(a1 + 8) = v46;
              *(_QWORD *)a1 = -1;
LABEL_103:
              sub_1401A32D0(&v92);
              goto LABEL_56;
            }
            v127 = *(_QWORD *)&v106[16];
            v126 = *(_QWORD *)&v106[8];
            sub_140749360(a2, v82, *((_QWORD *)&v92 + 1), v128);
            if ( *(_QWORD *)off_14223FF10 >= 2u )
            {
              *(_QWORD *)&v95 = v128;
              *(_QWORD *)&v110 = v127;
              *((_QWORD *)&v110 + 1) = *((_QWORD *)&v47 + 1);
              *(_QWORD *)&v117 = &v95;
              *((_QWORD *)&v117 + 1) = sub_1416EBAE0;
              *(_QWORD *)&v118 = &v110;
              *((_QWORD *)&v118 + 1) = sub_1416CE600;
              *(_QWORD *)v106 = aCodexmateLibCo_29;
              *(_QWORD *)&v106[8] = 35;
              *(_QWORD *)&v106[16] = aCodexmateLibCo_29;
              *(_QWORD *)&v106[24] = 35;
              *(_QWORD *)&v106[32] = &off_141A3FE18;
              sub_140AF72B0(&unk_141A3FDCE, &v117, 2, v106);
            }
            if ( v126 )
              sub_140001660(v127, v126, 1);
          }
          if ( (int)v14 >= 10 )
          {
            if ( (unsigned int)v14 >= 0xD )
            {
LABEL_72:
              v49 = *(_QWORD *)&v82[16];
              v50 = sub_140AA0D00(&off_141A3BDC0);
              v52 = v51;
              LOBYTE(v53) = 1;
              sub_1400225A0(v106, 16, v49, v53);
              v96 = *(_OWORD *)&v106[16];
              v95 = *(_OWORD *)v106;
              *(_QWORD *)&v97 = v50;
              *((_QWORD *)&v97 + 1) = v52;
              v54 = *(_QWORD *)&v82[8];
              v127 = v49;
              v55 = *(_QWORD *)&v82[8] + (v49 << 8);
              v126 = *(_QWORD *)&v82[8];
              while ( v54 != v55 )
              {
                v56 = v54;
                sub_1409FA7A0(&v110, *(_QWORD *)(v54 + 8), *(_QWORD *)(v54 + 16));
                if ( (_QWORD)v110 != -1 )
                {
                  *(_QWORD *)&v118 = v111;
                  v117 = v110;
                  sub_1406F2480(v106, v56, &v117);
LABEL_100:
                  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v106[80];
                  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v106[64];
                  v69 = *(_OWORD *)v106;
                  v70 = *(_OWORD *)&v106[16];
                  v71 = *(_OWORD *)&v106[32];
                  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v106[48];
                  *(_OWORD *)(a1 + 40) = v71;
                  *(_OWORD *)(a1 + 24) = v70;
                  *(_OWORD *)(a1 + 8) = v69;
LABEL_101:
                  *(_QWORD *)a1 = -1;
LABEL_102:
                  sub_14018DC70(&v95);
                  goto LABEL_103;
                }
                v57 = sub_140872590(&v95, *(_QWORD *)(v56 + 8), *(_QWORD *)(v56 + 16));
                v54 = v56 + 256;
                if ( v57 )
                {
                  *(_QWORD *)v106 = v56;
                  *(_QWORD *)&v106[8] = sub_1400015F0;
                  sub_1416DAFA0(&v78, &unk_141A3FBC2, v106);
                  *(_QWORD *)(a1 + 32) = v79;
                  *(_OWORD *)(a1 + 16) = v78;
                  *(_QWORD *)(a1 + 8) = 9;
                  goto LABEL_101;
                }
              }
              if ( (int)v14 < 14 )
              {
                sub_140D65620(
                  (unsigned int)v106,
                  v126,
                  v127,
                  *(_DWORD *)&v82[32],
                  v83,
                  *((__int64 *)&v88 + 1),
                  v89,
                  v91);
                sub_1401A34F0(&v88);
                v89 = *(_QWORD *)&v106[16];
                v88 = *(_OWORD *)v106;
              }
              sub_140D67510(v106, *((_QWORD *)&v88 + 1), v89);
              if ( *(_DWORD *)v106 != -1 )
                goto LABEL_100;
              if ( (int)v14 > 1 )
              {
                if ( v90 == 16 )
                {
LABEL_113:
                  v72 = 0;
                  if ( !v128 )
                    goto LABEL_114;
                  sub_14074C1F0(v106, a2, v82);
                  if ( *(_DWORD *)v106 != -1 )
                    goto LABEL_100;
LABEL_121:
                  v73 = *((_QWORD *)&v92 + 1);
                  v74 = *((_QWORD *)&v92 + 1) + ((_QWORD)v128 << 6);
                  while ( v73 != v74 )
                  {
                    v75 = v73;
                    v73 += 64;
                    if ( *(_BYTE *)(v75 + 56) == 1 )
                      sub_1408171E0(a2, *(_QWORD *)(v75 + 8), *(_QWORD *)(v75 + 16));
                  }
LABEL_115:
                  sub_1419234B0(a1, v82, 384);
                  sub_14018DC70(&v95);
                  sub_1401A32D0(&v92);
                  sub_1406C0ED0(v94);
                  v28 = v125;
                  v27 = v124;
                  if ( !v125 )
                    return a1;
                  goto LABEL_46;
                }
                v116 = v90;
                v90 = 16;
                sub_14074C1F0(&v117, a2, v82);
                if ( (_DWORD)v117 == -1 )
                {
                  if ( v128 )
                    goto LABEL_121;
                  goto LABEL_113;
                }
                *(_OWORD *)&v106[80] = v122;
                *(_OWORD *)&v106[64] = v121;
                *(_OWORD *)&v106[48] = v120;
                *(_OWORD *)&v106[32] = v119;
                *(_OWORD *)&v106[16] = v118;
                *(_OWORD *)v106 = v117;
                if ( *(_QWORD *)off_14223FF10 >= 2u )
                {
                  *(_QWORD *)&v110 = &v116;
                  *((_QWORD *)&v110 + 1) = sub_1416EAE00;
                  *(_QWORD *)&v111 = &unk_141A40028;
                  *((_QWORD *)&v111 + 1) = sub_1416EAE00;
                  *(_QWORD *)&v112 = v106;
                  *((_QWORD *)&v112 + 1) = sub_140D76130;
                  v101 = aCodexmateLibCo_29;
                  v102 = 35;
                  v103 = aCodexmateLibCo_29;
                  v104 = 35;
                  v105 = &off_141A40068;
                  sub_140AF72B0(&unk_141A4002C, &v110, 2, &v101);
                }
              }
              else
              {
                v58 = sub_1416724D0(aProviders, 9, v94);
                if ( v58 && *(_BYTE *)v58 == 4 )
                {
                  v59 = *(_QWORD *)(v58 + 16);
                  v126 = v59 + 32LL * *(_QWORD *)(v58 + 24);
                  v60 = 0;
                  while ( v59 != v126 )
                  {
                    v61 = v60;
                    v62 = *(_QWORD *)&v82[16];
                    if ( v60 >= *(_QWORD *)&v82[16] )
                    {
                      v127 = 1;
                      v63 = 0;
                    }
                    else
                    {
                      v127 = *(_QWORD *)(*(_QWORD *)&v82[8] + (v60 << 8) + 8);
                      v63 = *(_QWORD *)(*(_QWORD *)&v82[8] + (v60 << 8) + 16);
                    }
                    v64 = sub_1416724D0(aApikey, 6, v59);
                    v59 += 32;
                    ++v60;
                    if ( v64 )
                    {
                      v65 = *(_BYTE *)v64 == 3 ? *(_QWORD *)(v64 + 24) : 0LL;
                      if ( v63 && v65 )
                      {
                        v66 = 1;
                        if ( *(_BYTE *)v64 == 3 )
                          v66 = *(_QWORD *)(v64 + 16);
                        sub_1408145D0((unsigned int)&v117, (_DWORD)a2, v127, v63, v66, v65);
                        if ( (_QWORD)v117 != -1 )
                        {
                          *(_QWORD *)&v106[16] = v118;
                          *(_OWORD *)v106 = v117;
                          *(_QWORD *)&v110 = v106;
                          *((_QWORD *)&v110 + 1) = sub_1400015F0;
                          sub_1416DAFA0(&v76, &unk_141A3FF41, &v110);
                          *(_QWORD *)(a1 + 32) = v77;
                          *(_OWORD *)(a1 + 16) = v76;
                          *(_QWORD *)(a1 + 8) = 10;
                          *(_QWORD *)a1 = -1;
                          if ( *(_QWORD *)v106 )
                            sub_140001660(*(_QWORD *)&v106[8], *(_QWORD *)v106, 1);
                          goto LABEL_102;
                        }
                        if ( v61 < v62 )
                        {
                          v67 = *(_QWORD *)&v82[8];
                          v68 = v61 << 8;
                          *(_BYTE *)(*(_QWORD *)&v82[8] + v68 + 252) = 1;
                          *(_QWORD *)(v67 + v68 + 88) = 0;
                        }
                      }
                    }
                  }
                }
                v90 = 16;
                sub_14074C1F0(&v117, a2, v82);
                if ( (_DWORD)v117 == -1 )
                {
                  v72 = v128 != nullptr;
LABEL_114:
                  if ( !v72 )
                    goto LABEL_115;
                  goto LABEL_121;
                }
                *(_OWORD *)&v106[80] = v122;
                *(_OWORD *)&v106[64] = v121;
                *(_OWORD *)&v106[48] = v120;
                *(_OWORD *)&v106[32] = v119;
                *(_OWORD *)&v106[16] = v118;
                *(_OWORD *)v106 = v117;
                if ( *(_QWORD *)off_14223FF10 >= 2u )
                {
                  v101 = v106;
                  v102 = (__int64)sub_140D76130;
                  *(_QWORD *)&v110 = aCodexmateLibCo_29;
                  *((_QWORD *)&v110 + 1) = 35;
                  *(_QWORD *)&v111 = aCodexmateLibCo_29;
                  *((_QWORD *)&v111 + 1) = 35;
                  *(_QWORD *)&v112 = &off_141A40010;
                  sub_140AF72B0(&unk_141A3FFD9, &v101, 2, &v110);
                }
              }
              sub_1406C31E0(v106);
              goto LABEL_113;
            }
          }
          else
          {
            *(_QWORD *)&v110 = sub_140749C30(*(_QWORD *)&v82[8], *(_QWORD *)&v82[16], v40, v45);
            if ( (_QWORD)v110 && *(_QWORD *)off_14223FF10 >= 2u )
            {
              *(_QWORD *)&v117 = &v110;
              *((_QWORD *)&v117 + 1) = sub_1416EBAE0;
              *(_QWORD *)v106 = aCodexmateLibCo_29;
              *(_QWORD *)&v106[8] = 35;
              *(_QWORD *)&v106[16] = aCodexmateLibCo_29;
              *(_QWORD *)&v106[24] = 35;
              *(_QWORD *)&v106[32] = &off_141A3FE98;
              sub_140AF72B0(&unk_141A3FE30, &v117, 2, v106);
            }
          }
          *(_QWORD *)&v110 = sub_14074C270(*(_QWORD *)&v82[8], *(_QWORD *)&v82[16]);
          if ( (_QWORD)v110 && *(_QWORD *)off_14223FF10 >= 2u )
          {
            *(_QWORD *)&v117 = &v110;
            *((_QWORD *)&v117 + 1) = sub_1416EBAE0;
            *(_QWORD *)v106 = aCodexmateLibCo_29;
            *(_QWORD *)&v106[8] = 35;
            *(_QWORD *)&v106[16] = aCodexmateLibCo_29;
            *(_QWORD *)&v106[24] = 35;
            *(_QWORD *)&v106[32] = &off_141A3FF20;
            sub_140AF72B0(&unk_141A3FEB0, &v117, 2, v106);
          }
          goto LABEL_72;
        }
      }
    }
LABEL_39:
    nullsub_1(v13, v12);
    v26 = (void *)sub_140001650(79, 1);
    if ( !v26 )
      sub_14196B2DB(1, 79);
    qmemcpy(v26, "relay state schemaVersion must be a 32-bit integer; original file was preserved", 79);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 79;
    *(_QWORD *)(a1 + 24) = v26;
    *(_QWORD *)(a1 + 32) = 79;
    goto LABEL_41;
  }
  if ( (v106[8] & 3u) - 2 >= 2 && (v106[8] & 3) != 0 )
  {
    --*(_QWORD *)&v106[8];
    v106[0] = 3;
    sub_1416EBAD0(&v106[8]);
  }
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v108 = 0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 8;
  *(_QWORD *)(a1 + 32) = 8;
  *(_QWORD *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = -1;
  *(_WORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 122) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 8;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = -1;
  sub_1419234B0(a1 + 160, v106, 168);
  *(_WORD *)(a1 + 352) = -2;
  *(_DWORD *)(a1 + 360) = 16;
  *(_WORD *)(a1 + 364) = 0;
  *(_WORD *)(a1 + 382) = 256;
  return a1;
}
