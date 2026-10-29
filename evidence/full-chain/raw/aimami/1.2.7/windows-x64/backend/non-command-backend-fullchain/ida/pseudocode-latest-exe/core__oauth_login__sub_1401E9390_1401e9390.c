// win 1.2.7 latest-exe | module src/core/oauth_login.rs | ea 0x1401e9390 | successor of pre-update 0x1402be8e0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_1401E9390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int16 v14; // r13
  char v15; // bl
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // r14
  __int64 v21; // rbx
  void *v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int128 v24; // kr00_16
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // r12
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // xmm1_8
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int128 v49; // xmm0
  __int128 v50; // xmm2
  __int128 v51; // xmm3
  __int64 v52; // rdx
  int v53; // eax
  __int128 v54; // xmm0
  __int128 v55; // xmm2
  __int128 v56; // xmm3
  __int64 v57; // rdi
  __int64 v58; // r12
  __int64 v59; // r12
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r12
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // r9d
  unsigned __int64 v66; // r9
  __int64 v67; // r15
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  _OWORD v71[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v72; // [rsp+60h] [rbp-20h]
  __int128 v73; // [rsp+68h] [rbp-18h]
  __int128 v74; // [rsp+78h] [rbp-8h]
  __int128 v75; // [rsp+88h] [rbp+8h]
  __int128 v76; // [rsp+98h] [rbp+18h]
  __int128 v77; // [rsp+A8h] [rbp+28h]
  __int128 v78; // [rsp+B8h] [rbp+38h]
  __int128 v79; // [rsp+C8h] [rbp+48h]
  __int128 v80; // [rsp+D8h] [rbp+58h]
  __int64 v81; // [rsp+E8h] [rbp+68h]
  __int128 v82; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v83; // [rsp+100h] [rbp+80h]
  _QWORD v84[20]; // [rsp+108h] [rbp+88h] BYREF
  _QWORD v85[3]; // [rsp+1A8h] [rbp+128h] BYREF
  unsigned __int128 v86; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v87; // [rsp+1D0h] [rbp+150h]
  __int64 v88; // [rsp+1E0h] [rbp+160h]
  __int128 v89; // [rsp+1E8h] [rbp+168h]
  __int128 v90; // [rsp+1F8h] [rbp+178h]
  __int128 v91; // [rsp+208h] [rbp+188h]
  __int128 v92; // [rsp+218h] [rbp+198h]
  __int128 v93; // [rsp+228h] [rbp+1A8h]
  __int128 v94; // [rsp+238h] [rbp+1B8h]
  __int128 v95; // [rsp+248h] [rbp+1C8h]
  __int128 v96; // [rsp+258h] [rbp+1D8h]
  __int64 v97; // [rsp+268h] [rbp+1E8h]
  _BYTE v98[24]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v99; // [rsp+288h] [rbp+208h]
  __int128 v100; // [rsp+298h] [rbp+218h]
  __int128 v101; // [rsp+2A8h] [rbp+228h]
  __int128 v102; // [rsp+3C0h] [rbp+340h]
  __int64 v103; // [rsp+3D0h] [rbp+350h]
  _BYTE v104[80]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v105; // [rsp+430h] [rbp+3B0h]
  __int64 v106; // [rsp+490h] [rbp+410h]
  __int64 v107; // [rsp+498h] [rbp+418h]
  __int128 v108; // [rsp+530h] [rbp+4B0h] BYREF
  __int128 v109; // [rsp+540h] [rbp+4C0h]
  __int128 v110; // [rsp+550h] [rbp+4D0h]
  __int128 v111; // [rsp+560h] [rbp+4E0h]
  __int128 v112; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v113; // [rsp+580h] [rbp+500h]
  __int128 v114; // [rsp+590h] [rbp+510h] BYREF
  __int64 v115; // [rsp+5A0h] [rbp+520h]
  __int128 v116; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v117; // [rsp+5C0h] [rbp+540h]
  __int128 v118; // [rsp+5D0h] [rbp+550h]
  __int128 v119; // [rsp+5E0h] [rbp+560h]
  __int64 v120; // [rsp+5F0h] [rbp+570h]
  __int64 v121; // [rsp+5F8h] [rbp+578h] BYREF
  __int64 v122; // [rsp+600h] [rbp+580h]
  __int64 v123; // [rsp+608h] [rbp+588h]
  __int64 v124; // [rsp+610h] [rbp+590h]
  __int64 v125; // [rsp+618h] [rbp+598h]
  char v126; // [rsp+627h] [rbp+5A7h] BYREF
  __int64 v127; // [rsp+628h] [rbp+5A8h]
  __int64 v128; // [rsp+630h] [rbp+5B0h]
  __int64 v129; // [rsp+638h] [rbp+5B8h]
  __int64 v130; // [rsp+640h] [rbp+5C0h]
  __int64 v131; // [rsp+648h] [rbp+5C8h]
  __int64 v132; // [rsp+650h] [rbp+5D0h]
  char v133; // [rsp+65Dh] [rbp+5DDh]
  char v134; // [rsp+65Eh] [rbp+5DEh]
  char v135; // [rsp+65Fh] [rbp+5DFh]
  __int64 v136; // [rsp+660h] [rbp+5E0h]

  v136 = -2;
  sub_140710E50(v104, a6);
  v10 = *(_QWORD *)v104;
  *(_OWORD *)v98 = *(_OWORD *)&v104[8];
  *(_QWORD *)&v98[16] = *(_QWORD *)&v104[24];
  if ( *(_QWORD *)v104 != -1 )
  {
    v11 = *(_OWORD *)&v104[32];
    v12 = *(_OWORD *)&v104[48];
    v13 = *(_OWORD *)&v104[64];
    *(_OWORD *)(a1 + 88) = v105;
    *(_OWORD *)(a1 + 72) = v13;
    *(_OWORD *)(a1 + 56) = v12;
    *(_OWORD *)(a1 + 40) = v11;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v98[16];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v98;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = -2;
    return a1;
  }
  v114 = *(_OWORD *)v98;
  v115 = *(_QWORD *)&v98[16];
  v84[0] = aGrantType;
  v84[1] = 10;
  v84[2] = aAuthorizationC;
  v84[3] = 18;
  v84[4] = aCode_4;
  v84[5] = 4;
  v84[6] = a2;
  v84[7] = a3;
  v84[8] = aRedirectUri;
  v84[9] = 12;
  v84[10] = aHttpLocalhost1;
  v84[11] = 35;
  v84[12] = aClientId;
  v84[13] = 9;
  v84[14] = aAppEmoameez73f;
  v84[15] = 28;
  v84[16] = aCodeVerifier;
  v84[17] = 13;
  v84[18] = a4;
  v84[19] = a5;
  memset(v98, 2, sizeof(v98));
  sub_140B6A570((unsigned int)v104, (unsigned int)&v114, (unsigned int)v98, (unsigned int)&unk_141A08C16, 35);
  sub_1406600F0((unsigned int)v98, (unsigned int)v104, (unsigned int)aUserAgent_0, 10, (__int64)&unk_141A08C43, 12, 0);
  sub_1406600F0((unsigned int)v104, (unsigned int)v98, (unsigned int)aAccept, 6, (__int64)&unk_141A08C55, 16, 0);
  sub_141271440(v98, v104, 20, 0);
  sub_140660F30(v104, v98, v84);
  sub_141271350(&v86, v104);
  if ( (_QWORD)v86 == -1 )
  {
    v121 = *((_QWORD *)&v86 + 1);
    if ( *(_QWORD *)off_14223FF10 > 1u )
    {
      *(_QWORD *)v98 = &v121;
      *(_QWORD *)&v98[8] = sub_141246C00;
      *(_QWORD *)&v104[48] = 2;
      *(_QWORD *)&v104[56] = aCodexmateLibCo_22;
      *(_QWORD *)&v104[64] = 32;
      *(_QWORD *)&v105 = &unk_141A075C0;
      *((_QWORD *)&v105 + 1) = v98;
      *(_QWORD *)v104 = 0;
      *(_QWORD *)&v104[8] = aCodexmateLibCo_22;
      *(_OWORD *)&v104[16] = 0x20u;
      *(_QWORD *)&v104[32] = aSrcCoreOauthLo;
      *(_QWORD *)&v104[40] = 23;
      *(_QWORD *)&v104[72] = 0x19100000001LL;
      sub_141503E20(&v126, v104);
    }
    *(_QWORD *)v98 = &v121;
    *(_QWORD *)&v98[8] = sub_141246C00;
    sub_1416DAFA0(v104, &unk_141A07610, v98);
    *(_OWORD *)v98 = *(_OWORD *)v104;
    *(_QWORD *)&v98[16] = *(_QWORD *)&v104[16];
    sub_1401AA930(v121);
    v102 = *(_OWORD *)v98;
    v103 = *(_QWORD *)&v98[16];
    v108 = v116;
    v109 = v117;
    v110 = v118;
    v111 = v119;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v98[16];
    *(_OWORD *)(a1 + 16) = v102;
    v25 = v109;
    v26 = v110;
    v27 = v111;
    *(_OWORD *)(a1 + 40) = v108;
    *(_OWORD *)(a1 + 56) = v25;
    *(_OWORD *)(a1 + 72) = v26;
    *(_OWORD *)(a1 + 88) = v27;
    *(_QWORD *)(a1 + 8) = 10;
    goto LABEL_17;
  }
  v112 = v87;
  v113 = v88;
  v116 = v89;
  v117 = v90;
  v118 = v91;
  v119 = v92;
  v77 = v93;
  v78 = v94;
  v79 = v95;
  v80 = v96;
  v81 = v97;
  v102 = v87;
  v103 = v88;
  v110 = v91;
  v108 = v89;
  v109 = v90;
  v111 = v92;
  v71[1] = v87;
  v72 = v88;
  v76 = v92;
  v75 = v91;
  v74 = v90;
  v73 = v89;
  v71[0] = v86;
  v14 = v93;
  v135 = 1;
  v15 = sub_141255DB0(v71);
  v17 = v16;
  sub_1419234B0(v98, v71, 176);
  v20 = v15 & (v17 >= 0x40001);
  if ( v20 == 1 )
  {
    nullsub_1(v19, v18);
    v21 = 47;
    v22 = (void *)sub_140001650(47, 1);
    if ( !v22 )
    {
      LOBYTE(v128) = 1;
      sub_14196B2DB(1, 47);
    }
    v23 = (unsigned __int64)v22;
    qmemcpy(v22, "token endpoint response exceeded the size limit", 47);
    v135 = 0;
    sub_1401ADBB0(v98);
    v24 = __PAIR128__(v23, 47);
    goto LABEL_16;
  }
  LOBYTE(v128) = v20;
  *(_QWORD *)&v116 = 0;
  *((_QWORD *)&v116 + 1) = 1;
  *(_QWORD *)&v117 = 0;
  sub_1419234B0(v104, v71, 176);
  v106 = 262145;
  v107 = 262145;
  if ( sub_140C46A70(v104, &v116, 0) == 1 )
  {
    *(_QWORD *)&v112 = v28;
    *(_QWORD *)&v108 = &v112;
    *((_QWORD *)&v108 + 1) = sub_1416EA080;
    sub_1416DAFA0(&v86, &unk_141A06BB9, &v108);
    v24 = v86;
    v21 = v87;
    if ( (unsigned int)(v112 & 3) - 2 >= 2 && (v112 & 3) != 0 )
    {
      *((_QWORD *)&v108 + 1) = v112 - 1;
      LOBYTE(v108) = 3;
      sub_1416EBAD0((char *)&v108 + 8);
    }
    sub_1401ADBB0(v104);
    v29 = v116;
    if ( !(_QWORD)v116 )
      goto LABEL_16;
    goto LABEL_15;
  }
  sub_1401ADBB0(v104);
  if ( (unsigned __int64)v117 < 0x40001 )
  {
    v122 = *((_QWORD *)&v116 + 1);
    v128 = v116;
    if ( (unsigned __int16)(v14 - 200) < 0x64u )
    {
      *(_OWORD *)v104 = __PAIR128__(v117, *((unsigned __int64 *)&v116 + 1));
      *(_OWORD *)&v104[16] = 0;
      sub_140D8E610(v98, v104);
      v34 = *(_QWORD *)&v98[8];
      if ( *(_QWORD *)v98 != -1 )
      {
        v129 = *(_QWORD *)&v98[8];
        v132 = *(_QWORD *)v98;
        v35 = v99;
        v36 = *((_QWORD *)&v100 + 1);
        v131 = v101;
        v130 = *((_QWORD *)&v100 + 1);
        if ( (_QWORD)v99 != -1 )
        {
          v37 = *(_QWORD *)&v98[16];
          v38 = *((_QWORD *)&v99 + 1);
          v39 = v100;
          v40 = *((_QWORD *)&v101 + 1);
          sub_1408FEA60(*((_QWORD *)&v99 + 1), v100);
          if ( v34 )
          {
            v85[0] = v35;
            v85[1] = v38;
            v85[2] = v39;
            *(_QWORD *)v98 = v36;
            *(_QWORD *)&v98[8] = v131;
            *(_QWORD *)&v98[16] = v40;
            *(_QWORD *)v104 = v132;
            *(_QWORD *)&v104[8] = v129;
            *(_QWORD *)&v104[16] = v37;
            v133 = 0;
            sub_14071D800(a1, v98, v104, v85);
LABEL_41:
            v52 = v128;
LABEL_42:
            if ( v52 )
              sub_140001660(v122, v52, 1);
            goto LABEL_18;
          }
          if ( v35 )
            sub_140001660(v38, v35, 1);
        }
        v133 = 1;
        sub_1401DC5D0(v104, v34);
        v54 = *(_OWORD *)&v104[16];
        v55 = *(_OWORD *)&v104[48];
        v56 = *(_OWORD *)&v104[64];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v104[32];
        *(_OWORD *)(a1 + 56) = v55;
        *(_OWORD *)(a1 + 72) = v56;
        *(_OWORD *)(a1 + 88) = v105;
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v104;
        *(_OWORD *)(a1 + 24) = v54;
        *(_QWORD *)a1 = -2;
        if ( v132 )
          sub_140001660(v129, v132, 1);
        v52 = v128;
        if ( (unsigned __int64)(v130 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v57 = v128;
          sub_140001660(v131, v130, 1);
          v52 = v57;
        }
        goto LABEL_42;
      }
      sub_1401DC540(v104, *(_QWORD *)&v98[8]);
      v47 = *(_QWORD *)&v104[16];
      v48 = *(_QWORD *)&v104[40];
      v49 = *(_OWORD *)&v104[64];
      *(_OWORD *)(a1 + 88) = v105;
      v50 = *(_OWORD *)&v104[24];
      v51 = *(_OWORD *)&v104[48];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v104;
      *(_QWORD *)(a1 + 24) = v47;
      *(_OWORD *)(a1 + 32) = v50;
      *(_QWORD *)(a1 + 48) = v48;
      *(_OWORD *)(a1 + 56) = v51;
      *(_OWORD *)(a1 + 72) = v49;
      *(_QWORD *)a1 = -2;
      goto LABEL_41;
    }
    v86 = __PAIR128__(v117, *((unsigned __int64 *)&v116 + 1));
    v87 = 0;
    sub_140D8E820(v104, &v86);
    v43 = *(_QWORD *)v104;
    if ( *(_QWORD *)v104 == -2 )
    {
      sub_140032F30(&v104[8]);
      goto LABEL_32;
    }
    v44 = *(_QWORD *)&v104[24];
    v101 = *(_OWORD *)&v104[56];
    v100 = *(_OWORD *)&v104[40];
    v99 = *(_OWORD *)&v104[24];
    *(_OWORD *)&v98[8] = *(_OWORD *)&v104[8];
    *(_QWORD *)v98 = *(_QWORD *)v104;
    if ( *(_QWORD *)&v104[24] == -3 )
    {
      v45 = *(_QWORD *)&v98[8];
      v46 = *(_QWORD *)&v98[16];
      if ( *(_QWORD *)v104 != -1 )
      {
LABEL_39:
        LOBYTE(v42) = *(_QWORD *)&v104[24] == -3;
        LODWORD(v132) = v42;
        LOBYTE(v41) = 1;
        LODWORD(v127) = v41;
        LODWORD(v131) = 0;
        v129 = *(_QWORD *)v104;
        v130 = *(_QWORD *)v104;
LABEL_61:
        v123 = v45;
        v62 = sub_1408FEA60(v45, v46);
        if ( (unsigned __int64)(v61 - 65) >= 0xFFFFFFFFFFFFFFC0uLL )
        {
          v63 = 0;
          v64 = 0x4000000000003LL;
          while ( 1 )
          {
            v65 = *(unsigned __int8 *)(v62 + v63);
            if ( (unsigned __int8)(v65 - 48) >= 0xAu && (unsigned __int8)((v65 & 0xDF) - 65) >= 0x1Au )
            {
              v66 = (unsigned int)(v65 - 45);
              if ( (unsigned int)v66 > 0x32 || !_bittest64(&v64, v66) )
                break;
            }
            if ( v61 == ++v63 )
            {
              v124 = v44;
              v67 = v61;
              nullsub_1(0x4000000000003LL, v61);
              v68 = sub_140001650(v67, 1);
              if ( !v68 )
                sub_14196B2DB(1, v67);
              v127 = v68;
              v132 = v67;
              sub_1419234B0(v68, v62, v67);
              if ( v130 )
                sub_140001660(v123, v130, 1);
              if ( !((v129 <= 0) | (unsigned __int8)v131 ^ 1) )
                sub_140001660(*(_QWORD *)&v98[8], v129, 1);
              v69 = v127;
              *(_QWORD *)&v86 = v127;
              v70 = v132;
              *((_QWORD *)&v86 + 1) = v132;
              if ( *(_QWORD *)off_14223FF10 > 1u )
              {
                LOWORD(v116) = v14;
                *(_QWORD *)v98 = &v116;
                *(_QWORD *)&v98[8] = sub_1416EA1B0;
                *(_QWORD *)&v98[16] = &v86;
                *(_QWORD *)&v99 = sub_140191200;
                *(_QWORD *)v104 = aCodexmateLibCo_22;
                *(_QWORD *)&v104[8] = 32;
                *(_QWORD *)&v104[16] = aCodexmateLibCo_22;
                *(_QWORD *)&v104[24] = 32;
                *(_QWORD *)&v104[32] = &off_141A08CF0;
                v125 = v132;
                v120 = v127;
                v134 = 1;
                sub_140AF72B0(&unk_141A08CC0, v98, 2, v104);
                v70 = v132;
                v69 = v127;
              }
              *(_QWORD *)v104 = v70;
              *(_QWORD *)&v104[8] = v69;
              *(_QWORD *)&v104[16] = v70;
              *(_QWORD *)&v116 = v104;
              *((_QWORD *)&v116 + 1) = sub_1400015F0;
              sub_1416DAFA0(v98, &unk_141A07698, &v116);
              if ( *(_QWORD *)v104 )
                sub_140001660(*(_QWORD *)&v104[8], *(_QWORD *)v104, 1);
              v86 = *(_OWORD *)v98;
              *(_QWORD *)&v87 = *(_QWORD *)&v98[16];
              goto LABEL_35;
            }
          }
        }
        if ( v130 )
          sub_140001660(v123, v130, 1);
        if ( ((v129 > 0) & (unsigned __int8)v131) != 0 )
          sub_140001660(*(_QWORD *)&v98[8], v129, 1);
      }
LABEL_32:
      if ( *(_QWORD *)off_14223FF10 > 1u )
      {
        LOWORD(v86) = v14;
        *(_QWORD *)v98 = &v86;
        *(_QWORD *)&v98[8] = sub_1416EA1B0;
        *(_QWORD *)v104 = aCodexmateLibCo_22;
        *(_QWORD *)&v104[8] = 32;
        *(_QWORD *)&v104[16] = aCodexmateLibCo_22;
        *(_QWORD *)&v104[24] = 32;
        *(_QWORD *)&v104[32] = &off_141A08CA8;
        v125 = -1;
        v134 = 1;
        sub_140AF72B0(&unk_141A08C65, v98, 2, v104);
      }
      *(_QWORD *)&v86 = 0;
      *((_QWORD *)&v86 + 1) = 1;
      *(_QWORD *)&v87 = 0;
      v132 = -1;
LABEL_35:
      *(_WORD *)v98 = v14;
      *(_QWORD *)v104 = v98;
      *(_QWORD *)&v104[8] = sub_1416EA1B0;
      *(_QWORD *)&v104[16] = &v86;
      *(_QWORD *)&v104[24] = sub_1400015F0;
      sub_1416DAFA0(&v82, &unk_141A08D08, v104);
      *(_QWORD *)(a1 + 32) = v83;
      *(_OWORD *)(a1 + 16) = v82;
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)a1 = -2;
      if ( (_QWORD)v86 )
        sub_140001660(*((_QWORD *)&v86 + 1), v86, 1);
      goto LABEL_41;
    }
    v46 = *((_QWORD *)&v100 + 1);
    v129 = *(_QWORD *)v104;
    if ( *(_QWORD *)&v104[24] == -2 )
    {
      v53 = DWORD2(v99);
      v130 = *((_QWORD *)&v99 + 1);
      v45 = v100;
      LOBYTE(v53) = 1;
      LODWORD(v132) = v53;
      LODWORD(v127) = 0;
      LOBYTE(v53) = 1;
      LODWORD(v131) = v53;
      goto LABEL_61;
    }
    if ( *(_QWORD *)&v104[24] == -1 )
    {
      v41 = *(_DWORD *)&v98[8];
      if ( *((_QWORD *)&v100 + 1) == -1 )
      {
        v46 = *(_QWORD *)&v98[16];
        v45 = *(_QWORD *)&v98[8];
        if ( *(_QWORD *)v104 != -1 )
          goto LABEL_39;
        goto LABEL_32;
      }
      v58 = *((_QWORD *)&v101 + 1);
      v130 = *((_QWORD *)&v100 + 1);
      v131 = v101;
      v60 = *(_QWORD *)&v98[8];
    }
    else
    {
      v131 = *((_QWORD *)&v99 + 1);
      v58 = v100;
      if ( *((__int64 *)&v100 + 1) > 0 )
      {
        v132 = v100;
        v59 = *(_QWORD *)v104;
        sub_140001660(v101, *((_QWORD *)&v100 + 1), 1);
        v43 = v59;
        v58 = v132;
      }
      v60 = *(_QWORD *)&v98[8];
      v130 = v44;
    }
    LOBYTE(v46) = 1;
    LODWORD(v127) = v46;
    if ( v43 > 0 )
      sub_140001660(v60, v43, 1);
    LODWORD(v132) = 0;
    v45 = v131;
    v46 = v58;
    LODWORD(v131) = 0;
    goto LABEL_61;
  }
  nullsub_1(v32, v31);
  v21 = 47;
  v33 = (void *)sub_140001650(47, 1);
  if ( !v33 )
    sub_14196B2DB(1, 47);
  qmemcpy(v33, "token endpoint response exceeded the size limit", 47);
  v29 = v116;
  v24 = __PAIR128__((unsigned __int64)v33, 47);
  if ( !(_QWORD)v116 )
    goto LABEL_16;
LABEL_15:
  sub_140001660(*((_QWORD *)&v116 + 1), v29, 1);
LABEL_16:
  *(_QWORD *)(a1 + 8) = 10;
  *(_OWORD *)(a1 + 16) = v24;
  *(_QWORD *)(a1 + 32) = v21;
LABEL_17:
  *(_QWORD *)a1 = -2;
LABEL_18:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v114) )
    sub_141258290(&v114);
  return a1;
}
