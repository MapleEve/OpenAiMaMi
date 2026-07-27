// module: codexmate_lib/core/oauth_login
// addr: 0x1403c5510
// name: exchange_code_for_tokens
// win 1.2.1 | module src/core/oauth_login.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::oauth_login::exchange_code_for_tokens | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall exchange_code_for_tokens(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int16 v14; // r13
  char v15; // bl
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  char v19; // r14
  __int64 v20; // rbx
  void *v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int128 v23; // kr00_16
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v30; // rcx
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // r12
  int v39; // edx
  __int64 v40; // r9
  __int64 v41; // rax
  bool v42; // zf
  __int64 v43; // rdx
  _BYTE *v44; // rax
  __int64 v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  __int128 v53; // xmm3
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  __int128 v61; // xmm3
  __int64 v62; // rdi
  __int64 v63; // r10
  __int64 v64; // r8
  __int64 v65; // r12
  __int64 v66; // rbx
  __int64 v67; // r12
  __int64 v68; // rdx
  __int64 v69; // r12
  __int64 v70; // rax
  __int64 v71; // rcx
  int v72; // r9d
  unsigned __int64 v73; // r9
  __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  _OWORD v78[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v79; // [rsp+60h] [rbp-20h]
  __int128 v80; // [rsp+68h] [rbp-18h]
  __int128 v81; // [rsp+78h] [rbp-8h]
  __int128 v82; // [rsp+88h] [rbp+8h]
  __int128 v83; // [rsp+98h] [rbp+18h]
  __int128 v84; // [rsp+A8h] [rbp+28h]
  __int128 v85; // [rsp+B8h] [rbp+38h]
  __int128 v86; // [rsp+C8h] [rbp+48h]
  __int128 v87; // [rsp+D8h] [rbp+58h]
  __int64 v88; // [rsp+E8h] [rbp+68h]
  __int128 v89; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v90; // [rsp+100h] [rbp+80h]
  _QWORD v91[20]; // [rsp+108h] [rbp+88h] BYREF
  _QWORD v92[3]; // [rsp+1A8h] [rbp+128h] BYREF
  unsigned __int128 v93; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v94; // [rsp+1D0h] [rbp+150h]
  __int64 v95; // [rsp+1E0h] [rbp+160h]
  __int128 v96; // [rsp+1E8h] [rbp+168h]
  __int128 v97; // [rsp+1F8h] [rbp+178h]
  __int128 v98; // [rsp+208h] [rbp+188h]
  __int128 v99; // [rsp+218h] [rbp+198h]
  __int128 v100; // [rsp+228h] [rbp+1A8h]
  __int128 v101; // [rsp+238h] [rbp+1B8h]
  __int128 v102; // [rsp+248h] [rbp+1C8h]
  __int128 v103; // [rsp+258h] [rbp+1D8h]
  __int64 v104; // [rsp+268h] [rbp+1E8h]
  _BYTE v105[24]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v106; // [rsp+288h] [rbp+208h]
  __int128 v107; // [rsp+298h] [rbp+218h]
  __int128 v108; // [rsp+2A8h] [rbp+228h]
  __int128 v109; // [rsp+3C0h] [rbp+340h] BYREF
  __int128 v110; // [rsp+3D0h] [rbp+350h]
  __int128 v111; // [rsp+3E0h] [rbp+360h]
  __int128 v112; // [rsp+3F0h] [rbp+370h]
  __int128 v113; // [rsp+400h] [rbp+380h]
  __int64 v114; // [rsp+410h] [rbp+390h]
  _BYTE v115[80]; // [rsp+420h] [rbp+3A0h] BYREF
  __int128 v116; // [rsp+470h] [rbp+3F0h]
  __int64 v117; // [rsp+4D0h] [rbp+450h]
  __int64 v118; // [rsp+4D8h] [rbp+458h]
  __int128 v119; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v120; // [rsp+580h] [rbp+500h]
  __int128 v121; // [rsp+590h] [rbp+510h] BYREF
  __int64 v122; // [rsp+5A0h] [rbp+520h]
  __int128 v123; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v124; // [rsp+5C0h] [rbp+540h]
  __int128 v125; // [rsp+5D0h] [rbp+550h]
  __int128 v126; // [rsp+5E0h] [rbp+560h]
  __int64 v127; // [rsp+5F0h] [rbp+570h]
  __int64 v128; // [rsp+5F8h] [rbp+578h] BYREF
  __int64 v129; // [rsp+600h] [rbp+580h]
  __int64 v130; // [rsp+608h] [rbp+588h]
  __int64 v131; // [rsp+610h] [rbp+590h]
  __int64 v132; // [rsp+618h] [rbp+598h]
  char v133; // [rsp+627h] [rbp+5A7h] BYREF
  __int64 v134; // [rsp+628h] [rbp+5A8h]
  __int64 v135; // [rsp+630h] [rbp+5B0h]
  __int64 v136; // [rsp+638h] [rbp+5B8h]
  __int64 v137; // [rsp+640h] [rbp+5C0h]
  __int64 v138; // [rsp+648h] [rbp+5C8h]
  __int64 v139; // [rsp+650h] [rbp+5D0h]
  char v140; // [rsp+65Dh] [rbp+5DDh]
  char v141; // [rsp+65Eh] [rbp+5DEh]
  char v142; // [rsp+65Fh] [rbp+5DFh]
  __int64 v143; // [rsp+660h] [rbp+5E0h]

  v143 = -2;
  sub_1409D5FE0(v115, a6);
  v10 = *(_QWORD *)v115;
  *(_OWORD *)v105 = *(_OWORD *)&v115[8];
  *(_QWORD *)&v105[16] = *(_QWORD *)&v115[24];
  if ( *(_QWORD *)v115 != -1 )
  {
    v11 = *(_OWORD *)&v115[32];
    v12 = *(_OWORD *)&v115[48];
    v13 = *(_OWORD *)&v115[64];
    *(_OWORD *)(a1 + 88) = v116;
    *(_OWORD *)(a1 + 72) = v13;
    *(_OWORD *)(a1 + 56) = v12;
    *(_OWORD *)(a1 + 40) = v11;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v105[16];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v105;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = -2;
    return a1;
  }
  v121 = *(_OWORD *)v105;
  v122 = *(_QWORD *)&v105[16];
  v91[0] = aGrantType;
  v91[1] = 10;
  v91[2] = aAuthorizationC;
  v91[3] = 18;
  v91[4] = "codesignalPreventOverflowMarginwidthheight";
  v91[5] = 4;
  v91[6] = a2;
  v91[7] = a3;
  v91[8] = aRedirectUri;
  v91[9] = 12;
  v91[10] = aHttpLocalhost1;
  v91[11] = 35;
  v91[12] = aClientId;
  v91[13] = 9;
  v91[14] = aAppEmoameez73f;
  v91[15] = 28;
  v91[16] = aCodeVerifier;
  v91[17] = 13;
  v91[18] = a4;
  v91[19] = a5;
  memset(v105, 2, sizeof(v105));
  sub_14097F010((unsigned int)v115, (unsigned int)&v121, (unsigned int)v105, (unsigned int)&unk_141750B96, 35);
  sub_1406C7070((unsigned int)v105, (unsigned int)v115, (unsigned int)aUserAgent_0, 10, (__int64)&unk_141750BC3, 12, 0);
  sub_1406C7070((unsigned int)v115, (unsigned int)v105, (unsigned int)aAccept, 6, (__int64)&unk_141750BD5, 16, 0);
  sub_14103D060(v105, v115, 20, 0);
  sub_1406C7EA0(v115, v105, v91);
  sub_14103CF70(&v93, v115);
  if ( (_QWORD)v93 == -1 )
  {
    v128 = *((_QWORD *)&v93 + 1);
    if ( *(_QWORD *)off_141EC8D80 > 1u )
    {
      *(_QWORD *)v105 = &v128;
      *(_QWORD *)&v105[8] = sub_141031F10;
      *(_QWORD *)v115 = 0;
      *(_QWORD *)&v115[8] = aCodexmateLibCo_17;
      *(_OWORD *)&v115[16] = 0x20u;
      *(_QWORD *)&v115[32] = aSrcCoreOauthLo;
      *(_QWORD *)&v115[40] = 23;
      *(_QWORD *)&v115[48] = 2;
      *(_QWORD *)&v115[56] = aCodexmateLibCo_17;
      *(_QWORD *)&v115[64] = 32;
      *(_QWORD *)&v115[72] = 0x19100000001LL;
      *(_QWORD *)&v116 = &unk_14174D2F0;
      *((_QWORD *)&v116 + 1) = v105;
      sub_1412C36A0(&v133, v115);
    }
    *(_QWORD *)v105 = &v128;
    *(_QWORD *)&v105[8] = sub_141031F10;
    sub_14149C0F0(v115, &unk_14174D340, v105);
    *(_OWORD *)v105 = *(_OWORD *)v115;
    *(_QWORD *)&v105[16] = *(_QWORD *)&v115[16];
    sub_14034C7D0(v128);
    v113 = *(_OWORD *)v105;
    v114 = *(_QWORD *)&v105[16];
    v109 = v123;
    v110 = v124;
    v111 = v125;
    v112 = v126;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v105[16];
    *(_OWORD *)(a1 + 16) = v113;
    v24 = v110;
    v25 = v111;
    v26 = v112;
    *(_OWORD *)(a1 + 40) = v109;
    *(_OWORD *)(a1 + 56) = v24;
    *(_OWORD *)(a1 + 72) = v25;
    *(_OWORD *)(a1 + 88) = v26;
    *(_QWORD *)(a1 + 8) = 10;
    goto LABEL_14;
  }
  v119 = v94;
  v120 = v95;
  v123 = v96;
  v124 = v97;
  v125 = v98;
  v126 = v99;
  v84 = v100;
  v85 = v101;
  v86 = v102;
  v87 = v103;
  v88 = v104;
  v113 = v94;
  v114 = v95;
  v111 = v98;
  v109 = v96;
  v110 = v97;
  v112 = v99;
  v78[1] = v94;
  v79 = v95;
  v83 = v99;
  v82 = v98;
  v81 = v97;
  v80 = v96;
  v78[0] = v93;
  v14 = v100;
  v142 = 1;
  v15 = sub_14101E130(v78);
  v17 = v16;
  sub_141684120(v105, v78, 176);
  v19 = v15 & (v17 >= 0x40001);
  if ( v19 == 1 )
  {
    nullsub_1(v18);
    v20 = 47;
    v21 = (void *)sub_140001650(47, 1);
    if ( !v21 )
    {
      LOBYTE(v135) = 1;
      sub_1416C2D4B(1, 47);
    }
    v22 = (unsigned __int64)v21;
    qmemcpy(v21, "token endpoint response exceeded the size limit", 47);
    v142 = 0;
    sub_14034D890(v105);
    v23 = __PAIR128__(v22, 47);
    goto LABEL_13;
  }
  LOBYTE(v135) = v19;
  *(_QWORD *)&v123 = 0;
  *((_QWORD *)&v123 + 1) = 1;
  *(_QWORD *)&v124 = 0;
  sub_141684120(v115, v78, 176);
  v117 = 262145;
  v118 = 262145;
  if ( sub_140352020(v115, &v123, 0) != 1 )
  {
    sub_14034D890(v115);
    if ( (unsigned __int64)v124 >= 0x40001 )
    {
      nullsub_1(v30);
      v20 = 47;
      v31 = (void *)sub_140001650(47, 1);
      if ( !v31 )
        sub_1416C2D4B(1, 47);
      qmemcpy(v31, "token endpoint response exceeded the size limit", 47);
      v28 = v123;
      v23 = __PAIR128__((unsigned __int64)v31, 47);
      if ( !(_QWORD)v123 )
        goto LABEL_13;
      goto LABEL_12;
    }
    v129 = *((_QWORD *)&v123 + 1);
    v135 = v123;
    if ( (unsigned __int16)(v14 - 200) < 0x64u )
    {
      *(_OWORD *)v115 = __PAIR128__(v124, *((unsigned __int64 *)&v123 + 1));
      *(_OWORD *)&v115[16] = 0;
      sub_1408A92C0(v105, v115);
      v32 = *(_QWORD *)&v105[8];
      if ( *(_QWORD *)v105 != -1 )
      {
        v137 = *(_QWORD *)&v105[8];
        v139 = *(_QWORD *)v105;
        v33 = v106;
        v34 = *((_QWORD *)&v107 + 1);
        v136 = v108;
        v138 = *((_QWORD *)&v107 + 1);
        if ( (_QWORD)v106 != -1 )
        {
          v35 = *(_QWORD *)&v105[16];
          v36 = *((_QWORD *)&v106 + 1);
          v37 = v107;
          v38 = *((_QWORD *)&v108 + 1);
          sub_14033BC10(*((_QWORD *)&v106 + 1), v107);
          if ( v32 )
          {
            v92[0] = v33;
            v92[1] = v36;
            v92[2] = v37;
            *(_QWORD *)v105 = v34;
            *(_QWORD *)&v105[8] = v136;
            *(_QWORD *)&v105[16] = v38;
            *(_QWORD *)v115 = v139;
            *(_QWORD *)&v115[8] = v137;
            *(_QWORD *)&v115[16] = v35;
            v140 = 0;
            sub_1403CD440(a1, v105, v115, v92);
LABEL_47:
            v58 = v135;
LABEL_48:
            if ( v58 )
              sub_140001660(v129, v58, 1);
            goto LABEL_15;
          }
          if ( v33 )
            sub_140001660(v36, v33, 1);
        }
        v140 = 1;
        sub_14037BB50(v115, v32);
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v115[16];
        v59 = *(_OWORD *)&v115[48];
        v60 = *(_OWORD *)&v115[64];
        v61 = v116;
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v115[32];
        *(_OWORD *)(a1 + 56) = v59;
        *(_OWORD *)(a1 + 72) = v60;
        *(_OWORD *)(a1 + 88) = v61;
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v115;
        *(_QWORD *)a1 = -2;
        if ( v139 )
          sub_140001660(v137, v139, 1);
        v58 = v135;
        if ( v138 > 0 )
        {
          v62 = v135;
          sub_140001660(v136, v138, 1);
          v58 = v62;
        }
        goto LABEL_48;
      }
      sub_14037BA40(v115, *(_QWORD *)&v105[8]);
      v48 = *(_QWORD *)&v115[16];
      v49 = *(_QWORD *)&v115[40];
      v50 = *(_OWORD *)&v115[64];
      *(_OWORD *)(a1 + 88) = v116;
      v51 = *(_OWORD *)v115;
      v52 = *(_OWORD *)&v115[24];
      v53 = *(_OWORD *)&v115[48];
      *(_QWORD *)(a1 + 24) = v48;
      *(_OWORD *)(a1 + 32) = v52;
      *(_QWORD *)(a1 + 48) = v49;
      *(_OWORD *)(a1 + 56) = v53;
      *(_OWORD *)(a1 + 72) = v50;
      *(_OWORD *)(a1 + 8) = v51;
      *(_QWORD *)a1 = -2;
      goto LABEL_47;
    }
    v93 = __PAIR128__(v124, *((unsigned __int64 *)&v123 + 1));
    v94 = 0;
    sub_1408A94D0(v115, &v93);
    v40 = *(_QWORD *)v115;
    if ( *(_QWORD *)v115 == -2 )
    {
      v41 = **(_QWORD **)&v115[8];
      v42 = **(_QWORD **)&v115[8] == 1;
      v139 = *(_QWORD *)&v115[8];
      if ( v42 )
      {
        sub_140018650(*(_QWORD *)&v115[8] + 8LL);
      }
      else if ( !v41 )
      {
        v43 = *(_QWORD *)(v139 + 16);
        if ( v43 )
          sub_140001660(*(_QWORD *)(v139 + 8), v43, 1);
      }
      v55 = 40;
      v56 = 8;
      v57 = v139;
LABEL_41:
      sub_140001660(v57, v55, v56);
LABEL_42:
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        LOWORD(v93) = v14;
        *(_QWORD *)v105 = &v93;
        *(_QWORD *)&v105[8] = sub_1414AAE30;
        *(_QWORD *)v115 = aCodexmateLibCo_17;
        *(_QWORD *)&v115[8] = 32;
        *(_QWORD *)&v115[16] = aCodexmateLibCo_17;
        *(_QWORD *)&v115[24] = 32;
        *(_QWORD *)&v115[32] = &off_141750C28;
        v131 = -1;
        v141 = 1;
        sub_140985BA0(&unk_141750BE5, v105, 2, v115);
      }
      *(_QWORD *)&v93 = 0;
      *((_QWORD *)&v93 + 1) = 1;
      *(_QWORD *)&v94 = 0;
      v139 = -1;
LABEL_45:
      *(_WORD *)v105 = v14;
      *(_QWORD *)v115 = v105;
      *(_QWORD *)&v115[8] = sub_1414AAE30;
      *(_QWORD *)&v115[16] = &v93;
      *(_QWORD *)&v115[24] = sub_1400015F0;
      sub_14149C0F0(&v89, &unk_141750C88, v115);
      *(_QWORD *)(a1 + 32) = v90;
      *(_OWORD *)(a1 + 16) = v89;
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)a1 = -2;
      if ( (_QWORD)v93 )
        sub_140001660(*((_QWORD *)&v93 + 1), v93, 1);
      goto LABEL_47;
    }
    v44 = &v115[8];
    v108 = *(_OWORD *)&v115[56];
    v107 = *(_OWORD *)&v115[40];
    v106 = *(_OWORD *)&v115[24];
    *(_OWORD *)&v105[8] = *(_OWORD *)&v115[8];
    *(_QWORD *)v105 = *(_QWORD *)v115;
    v45 = *(_QWORD *)&v115[24];
    if ( *(_QWORD *)&v115[24] == -3 )
    {
      v46 = *(_QWORD *)&v105[8];
LABEL_34:
      if ( *(_QWORD *)v115 == -1 )
        goto LABEL_42;
      LOBYTE(v39) = *(_QWORD *)&v115[24] == -3;
      LODWORD(v139) = v39;
      v47 = *(_QWORD *)&v105[16];
      LOBYTE(v44) = 1;
      LODWORD(v134) = (_DWORD)v44;
      LODWORD(v138) = 0;
      v136 = *(_QWORD *)v115;
      v137 = *(_QWORD *)v115;
      goto LABEL_65;
    }
    v136 = *(_QWORD *)v115;
    if ( *(_QWORD *)&v115[24] == -2 )
    {
      v54 = DWORD2(v106);
      v137 = *((_QWORD *)&v106 + 1);
      v46 = v107;
      LOBYTE(v54) = 1;
      LODWORD(v139) = v54;
      v47 = *((_QWORD *)&v107 + 1);
      LODWORD(v134) = 0;
      LOBYTE(v54) = 1;
      LODWORD(v138) = v54;
    }
    else
    {
      v63 = *((_QWORD *)&v107 + 1);
      LODWORD(v44) = v108;
      if ( *(_QWORD *)&v115[24] == -1 )
      {
        v46 = *(_QWORD *)&v105[8];
        if ( *((_QWORD *)&v107 + 1) == -1 )
          goto LABEL_34;
        v47 = *((_QWORD *)&v108 + 1);
        v64 = v108;
      }
      else
      {
        v64 = *((_QWORD *)&v106 + 1);
        v47 = v107;
        if ( (unsigned __int64)(*((_QWORD *)&v107 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v132 = *((_QWORD *)&v106 + 1);
          v139 = v107;
          v65 = *(_QWORD *)v115;
          v44 = (_BYTE *)sub_140001660(v108, *((_QWORD *)&v107 + 1), 1);
          v64 = v132;
          v40 = v65;
          v47 = v139;
        }
        v46 = *(_QWORD *)&v105[8];
        v63 = v45;
      }
      v137 = v63;
      LOBYTE(v44) = 1;
      LODWORD(v134) = (_DWORD)v44;
      if ( v40 <= 0 )
      {
        LODWORD(v139) = 0;
        LODWORD(v138) = 0;
        v46 = v64;
      }
      else
      {
        v66 = v64;
        v67 = v47;
        sub_140001660(v46, v40, 1);
        v46 = v66;
        v47 = v67;
        LODWORD(v139) = 0;
        LODWORD(v138) = 0;
      }
    }
LABEL_65:
    v132 = v46;
    v69 = sub_14033BC10(v46, v47);
    if ( (unsigned __int64)(v68 - 65) >= 0xFFFFFFFFFFFFFFC0uLL )
    {
      v70 = 0;
      v71 = 0x4000000000003LL;
      while ( 1 )
      {
        v72 = *(unsigned __int8 *)(v69 + v70);
        if ( (unsigned __int8)(v72 - 48) >= 0xAu && (unsigned __int8)((v72 & 0xDF) - 65) >= 0x1Au )
        {
          v73 = (unsigned int)(v72 - 45);
          if ( (unsigned int)v73 > 0x32 || !_bittest64(&v71, v73) )
            break;
        }
        if ( v68 == ++v70 )
        {
          v130 = v45;
          v74 = v68;
          nullsub_1(0x4000000000003LL);
          v75 = sub_140001650(v74, 1);
          if ( !v75 )
            sub_1416C2D4B(1, v74);
          v134 = v75;
          v139 = v74;
          sub_141684120(v75, v69, v74);
          if ( v137 )
            sub_140001660(v132, v137, 1);
          if ( !((v136 <= 0) | (unsigned __int8)v138 ^ 1) )
            sub_140001660(*(_QWORD *)&v105[8], v136, 1);
          v76 = v134;
          *(_QWORD *)&v93 = v134;
          v77 = v139;
          *((_QWORD *)&v93 + 1) = v139;
          if ( *(_QWORD *)off_141EC8D80 > 1u )
          {
            LOWORD(v123) = v14;
            *(_QWORD *)v105 = &v123;
            *(_QWORD *)&v105[8] = sub_1414AAE30;
            *(_QWORD *)&v105[16] = &v93;
            *(_QWORD *)&v106 = sub_14041F680;
            *(_QWORD *)v115 = aCodexmateLibCo_17;
            *(_QWORD *)&v115[8] = 32;
            *(_QWORD *)&v115[16] = aCodexmateLibCo_17;
            *(_QWORD *)&v115[24] = 32;
            *(_QWORD *)&v115[32] = &off_141750C70;
            v127 = v134;
            v131 = v139;
            v141 = 1;
            sub_140985BA0(&unk_141750C40, v105, 2, v115);
            v77 = v139;
            v76 = v134;
          }
          *(_QWORD *)&v115[8] = v76;
          *(_QWORD *)&v115[16] = v77;
          *(_QWORD *)v115 = v77;
          *(_QWORD *)&v123 = v115;
          *((_QWORD *)&v123 + 1) = sub_1400015F0;
          sub_14149C0F0(v105, &unk_14174D3C8, &v123);
          if ( *(_QWORD *)v115 )
            sub_140001660(*(_QWORD *)&v115[8], *(_QWORD *)v115, 1);
          v93 = *(_OWORD *)v105;
          *(_QWORD *)&v94 = *(_QWORD *)&v105[16];
          goto LABEL_45;
        }
      }
    }
    if ( v137 )
      sub_140001660(v132, v137, 1);
    v55 = v136;
    if ( ((v136 > 0) & (unsigned __int8)v138) == 0 )
      goto LABEL_42;
    v57 = *(_QWORD *)&v105[8];
    v56 = 1;
    goto LABEL_41;
  }
  *(_QWORD *)&v119 = v27;
  *(_QWORD *)&v109 = &v119;
  *((_QWORD *)&v109 + 1) = sub_141490720;
  sub_14149C0F0(&v93, &unk_14174C820, &v109);
  v23 = v93;
  v20 = v94;
  sub_140018650(&v119);
  sub_14034D890(v115);
  v28 = v123;
  if ( (_QWORD)v123 )
LABEL_12:
    sub_140001660(*((_QWORD *)&v123 + 1), v28, 1);
LABEL_13:
  *(_QWORD *)(a1 + 8) = 10;
  *(_OWORD *)(a1 + 16) = v23;
  *(_QWORD *)(a1 + 32) = v20;
LABEL_14:
  *(_QWORD *)a1 = -2;
LABEL_15:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v121) )
    sub_141018DA0(&v121);
  return a1;
}