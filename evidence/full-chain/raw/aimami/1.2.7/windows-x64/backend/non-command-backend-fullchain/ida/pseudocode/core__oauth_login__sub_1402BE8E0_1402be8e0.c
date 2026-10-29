// win 1.2.7 | module src/core/oauth_login.rs | ea 0x1402be8e0 | name sub_1402BE8E0
// win 1.2.7 | module src/core/oauth_login.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402BE8E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int16 v14; // r12
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
  __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rdx
  int v37; // r8d
  _BYTE *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int64 v47; // rdx
  int v48; // eax
  __int128 v49; // xmm0
  __int128 v50; // xmm2
  __int128 v51; // xmm3
  __int128 v52; // xmm1
  __int64 v53; // rdi
  int v54; // eax
  __int64 v55; // r13
  __int64 v56; // r15
  __int64 v57; // r15
  const __m128i *v58; // r13
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // rcx
  int v63; // edx
  unsigned __int64 v64; // rdx
  __int64 v65; // r13
  __m128i v66[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v67; // [rsp+60h] [rbp-20h]
  __int128 v68; // [rsp+68h] [rbp-18h]
  __int128 v69; // [rsp+78h] [rbp-8h]
  __int128 v70; // [rsp+88h] [rbp+8h]
  __int128 v71; // [rsp+98h] [rbp+18h]
  __int128 v72; // [rsp+A8h] [rbp+28h]
  __int128 v73; // [rsp+B8h] [rbp+38h]
  __int128 v74; // [rsp+C8h] [rbp+48h]
  __int128 v75; // [rsp+D8h] [rbp+58h]
  __int64 v76; // [rsp+E8h] [rbp+68h]
  __int128 v77; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v78; // [rsp+100h] [rbp+80h]
  _QWORD v79[20]; // [rsp+108h] [rbp+88h] BYREF
  _QWORD v80[3]; // [rsp+1A8h] [rbp+128h] BYREF
  unsigned __int128 v81; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v82; // [rsp+1D0h] [rbp+150h]
  __int64 v83; // [rsp+1E0h] [rbp+160h]
  __int128 v84; // [rsp+1E8h] [rbp+168h]
  __int128 v85; // [rsp+1F8h] [rbp+178h]
  __int128 v86; // [rsp+208h] [rbp+188h]
  __int128 v87; // [rsp+218h] [rbp+198h]
  __int128 v88; // [rsp+228h] [rbp+1A8h]
  __int128 v89; // [rsp+238h] [rbp+1B8h]
  __int128 v90; // [rsp+248h] [rbp+1C8h]
  __int128 v91; // [rsp+258h] [rbp+1D8h]
  __int64 v92; // [rsp+268h] [rbp+1E8h]
  _BYTE v93[24]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v94; // [rsp+288h] [rbp+208h]
  __int128 v95; // [rsp+298h] [rbp+218h]
  __int128 v96; // [rsp+2A8h] [rbp+228h]
  __m128i v97; // [rsp+3C0h] [rbp+340h]
  __int64 v98; // [rsp+3D0h] [rbp+350h]
  _BYTE v99[80]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v100; // [rsp+430h] [rbp+3B0h]
  __int64 v101; // [rsp+490h] [rbp+410h]
  __int64 v102; // [rsp+498h] [rbp+418h]
  __int128 v103; // [rsp+530h] [rbp+4B0h] BYREF
  __int128 v104; // [rsp+540h] [rbp+4C0h]
  __int128 v105; // [rsp+550h] [rbp+4D0h]
  __int128 v106; // [rsp+560h] [rbp+4E0h]
  __m128i v107; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v108; // [rsp+580h] [rbp+500h]
  __int128 v109; // [rsp+590h] [rbp+510h] BYREF
  __int64 v110; // [rsp+5A0h] [rbp+520h]
  __int128 v111; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v112; // [rsp+5C0h] [rbp+540h]
  __int128 v113; // [rsp+5D0h] [rbp+550h]
  __int128 v114; // [rsp+5E0h] [rbp+560h]
  __int64 v115; // [rsp+5F0h] [rbp+570h]
  __int64 v116; // [rsp+5F8h] [rbp+578h] BYREF
  __int64 v117; // [rsp+600h] [rbp+580h]
  __int64 v118; // [rsp+608h] [rbp+588h]
  __int64 v119; // [rsp+610h] [rbp+590h]
  char v120; // [rsp+61Bh] [rbp+59Bh] BYREF
  int v121; // [rsp+61Ch] [rbp+59Ch]
  __int64 v122; // [rsp+620h] [rbp+5A0h]
  __int64 v123; // [rsp+628h] [rbp+5A8h]
  __int64 v124; // [rsp+630h] [rbp+5B0h]
  __int64 v125; // [rsp+638h] [rbp+5B8h]
  __int128 v126; // [rsp+640h] [rbp+5C0h]
  __int64 v127; // [rsp+650h] [rbp+5D0h]
  char v128; // [rsp+65Dh] [rbp+5DDh]
  char v129; // [rsp+65Eh] [rbp+5DEh]
  char v130; // [rsp+65Fh] [rbp+5DFh]
  __int64 v131; // [rsp+660h] [rbp+5E0h]

  v131 = -2;
  sub_140FEF000(v99, a6);
  v10 = *(_QWORD *)v99;
  *(_OWORD *)v93 = *(_OWORD *)&v99[8];
  *(_QWORD *)&v93[16] = *(_QWORD *)&v99[24];
  if ( *(_QWORD *)v99 != -1 )
  {
    v11 = *(_OWORD *)&v99[32];
    v12 = *(_OWORD *)&v99[48];
    v13 = *(_OWORD *)&v99[64];
    *(_OWORD *)(a1 + 88) = v100;
    *(_OWORD *)(a1 + 72) = v13;
    *(_OWORD *)(a1 + 56) = v12;
    *(_OWORD *)(a1 + 40) = v11;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v93[16];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v93;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = -2;
    return a1;
  }
  v109 = *(_OWORD *)v93;
  v110 = *(_QWORD *)&v93[16];
  v79[0] = aGrantType;
  v79[1] = 10;
  v79[2] = aAuthorizationC;
  v79[3] = 18;
  v79[4] = aCode_2;
  v79[5] = 4;
  v79[6] = a2;
  v79[7] = a3;
  v79[8] = aRedirectUri;
  v79[9] = 12;
  v79[10] = aHttpLocalhost1;
  v79[11] = 35;
  v79[12] = aClientId;
  v79[13] = 9;
  v79[14] = aAppEmoameez73f;
  v79[15] = 28;
  v79[16] = aCodeVerifier;
  v79[17] = 13;
  v79[18] = a4;
  v79[19] = a5;
  memset(v93, 2, sizeof(v93));
  sub_1403FFEC0((unsigned int)v99, (unsigned int)&v109, (unsigned int)v93, (unsigned int)&unk_1419E73FA, 35);
  sub_140CB5CD0((unsigned int)v93, (unsigned int)v99, (unsigned int)aUserAgent, 10, (__int64)&unk_1419E7427, 12, 0);
  sub_140CB5CD0((unsigned int)v99, (unsigned int)v93, (unsigned int)aAccept, 6, (__int64)&unk_1419E4BBC, 16, 0);
  sub_14125AF30(v93, v99, 20, 0);
  sub_140CB6B00(v99, v93, v79);
  sub_14125AE40(&v81, v99);
  if ( (_QWORD)v81 == -1 )
  {
    v116 = *((_QWORD *)&v81 + 1);
    if ( *(_QWORD *)off_1421E6EC0 > 1u )
    {
      *(_QWORD *)v93 = &v116;
      *(_QWORD *)&v93[8] = sub_14122E940;
      *(_QWORD *)&v99[48] = 2;
      *(_QWORD *)&v99[56] = aCodexmateLibCo_24;
      *(_QWORD *)&v99[64] = 32;
      *(_QWORD *)&v100 = &unk_1419E5B30;
      *((_QWORD *)&v100 + 1) = v93;
      *(_QWORD *)v99 = 0;
      *(_QWORD *)&v99[8] = aCodexmateLibCo_24;
      *(_OWORD *)&v99[16] = 0x20u;
      *(_QWORD *)&v99[32] = aSrcCoreOauthLo;
      *(_QWORD *)&v99[40] = 23;
      *(_QWORD *)&v99[72] = 0x19100000001LL;
      sub_1414D53A0(&v120, v99);
    }
    *(_QWORD *)v93 = &v116;
    *(_QWORD *)&v93[8] = sub_14122E940;
    sub_1416ABFD0(v99, &unk_1419E5B80, v93);
    *(_OWORD *)v93 = *(_OWORD *)v99;
    *(_QWORD *)&v93[16] = *(_QWORD *)&v99[16];
    sub_140192750(v116);
    v97 = *(__m128i *)v93;
    v98 = *(_QWORD *)&v93[16];
    v103 = v111;
    v104 = v112;
    v105 = v113;
    v106 = v114;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v93[16];
    *(__m128i *)(a1 + 16) = v97;
    v24 = v104;
    v25 = v105;
    v26 = v106;
    *(_OWORD *)(a1 + 40) = v103;
    *(_OWORD *)(a1 + 56) = v24;
    *(_OWORD *)(a1 + 72) = v25;
    *(_OWORD *)(a1 + 88) = v26;
    *(_QWORD *)(a1 + 8) = 10;
    goto LABEL_17;
  }
  v107 = v82;
  v108 = v83;
  v111 = v84;
  v112 = v85;
  v113 = v86;
  v114 = v87;
  v72 = v88;
  v73 = v89;
  v74 = v90;
  v75 = v91;
  v76 = v92;
  v97 = v82;
  v98 = v83;
  v105 = v86;
  v103 = v84;
  v104 = v85;
  v106 = v87;
  v66[1] = v82;
  v67 = v83;
  v71 = v87;
  v70 = v86;
  v69 = v85;
  v68 = v84;
  v66[0] = (__m128i)v81;
  v14 = v88;
  v130 = 1;
  v15 = sub_141234880(v66);
  v17 = v16;
  sub_1418F44E0((__m128i *)v93, v66, 0xB0u);
  v19 = v15 & (v17 >= 0x40001);
  if ( v19 == 1 )
  {
    nullsub_1(v18);
    v20 = 47;
    v21 = (void *)sub_140001650(47, 1);
    if ( !v21 )
    {
      LOBYTE(v123) = 1;
      sub_141938D2B(1, 47);
    }
    v22 = (unsigned __int64)v21;
    qmemcpy(v21, "token endpoint response exceeded the size limit", 47);
    v130 = 0;
    sub_14029CD20(v93);
    v23 = __PAIR128__(v22, 47);
    goto LABEL_16;
  }
  LOBYTE(v123) = v19;
  *(_QWORD *)&v111 = 0;
  *((_QWORD *)&v111 + 1) = 1;
  *(_QWORD *)&v112 = 0;
  sub_1418F44E0((__m128i *)v99, v66, 0xB0u);
  v101 = 262145;
  v102 = 262145;
  if ( sub_140BB21E0(v99, &v111, 0) == 1 )
  {
    v107.m128i_i64[0] = v27;
    *(_QWORD *)&v103 = &v107;
    *((_QWORD *)&v103 + 1) = sub_1416BB0B0;
    sub_1416ABFD0(&v81, &unk_1419E5268, &v103);
    v23 = v81;
    v20 = v82.m128i_i64[0];
    if ( (v107.m128i_i8[0] & 3u) - 2 >= 2 && (v107.m128i_i8[0] & 3) != 0 )
    {
      *((_QWORD *)&v103 + 1) = v107.m128i_i64[0] - 1;
      LOBYTE(v103) = 3;
      sub_1416BCB00((char *)&v103 + 8);
    }
    sub_14029CD20(v99);
    v28 = v111;
    if ( !(_QWORD)v111 )
      goto LABEL_16;
    goto LABEL_15;
  }
  sub_14029CD20(v99);
  if ( (unsigned __int64)v112 < 0x40001 )
  {
    v117 = *((_QWORD *)&v111 + 1);
    v123 = v111;
    if ( (unsigned __int16)(v14 - 200) < 0x64u )
    {
      *(_OWORD *)v99 = __PAIR128__(v112, *((unsigned __int64 *)&v111 + 1));
      *(_OWORD *)&v99[16] = 0;
      sub_14062FF70(v93, v99);
      v32 = *(_QWORD *)&v93[8];
      if ( *(_QWORD *)v93 != -1 )
      {
        v126 = *(_OWORD *)v93;
        v125 = *((_QWORD *)&v95 + 1);
        v124 = v96;
        if ( (_QWORD)v94 != -1 )
        {
          v122 = v94;
          v33 = *(_QWORD *)&v93[16];
          v34 = v95;
          v35 = *((_QWORD *)&v96 + 1);
          v127 = *((_QWORD *)&v94 + 1);
          sub_140E91160(*((_QWORD *)&v94 + 1), v95);
          if ( v36 )
          {
            v80[0] = v122;
            v80[1] = v127;
            v80[2] = v34;
            *(_QWORD *)v93 = v125;
            *(_QWORD *)&v93[8] = v124;
            *(_QWORD *)&v93[16] = v35;
            *(_OWORD *)v99 = v126;
            *(_QWORD *)&v99[16] = v33;
            v128 = 0;
            sub_140ED9120(a1, v93, v99, v80);
LABEL_42:
            v47 = v123;
LABEL_43:
            if ( v47 )
              sub_140001660(v117, v47, 1);
            goto LABEL_18;
          }
          v32 = v122;
          if ( v122 )
            sub_140001660(v127, v122, 1);
        }
        v128 = 1;
        sub_1402B4210(v99, v32);
        v49 = *(_OWORD *)&v99[16];
        v50 = *(_OWORD *)&v99[48];
        v51 = *(_OWORD *)&v99[64];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v99[32];
        *(_OWORD *)(a1 + 56) = v50;
        *(_OWORD *)(a1 + 72) = v51;
        *(_OWORD *)(a1 + 88) = v100;
        v52 = *(_OWORD *)v99;
        *(_OWORD *)(a1 + 24) = v49;
        *(_OWORD *)(a1 + 8) = v52;
        *(_QWORD *)a1 = -2;
        if ( (_QWORD)v126 )
          sub_140001660(*((_QWORD *)&v126 + 1), v126, 1);
        v47 = v123;
        if ( (unsigned __int64)(v125 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v53 = v123;
          sub_140001660(v124, v125, 1);
          v47 = v53;
        }
        goto LABEL_43;
      }
      sub_1402B4180(v99, *(_QWORD *)&v93[8]);
      v41 = *(_QWORD *)&v99[16];
      v42 = *(_QWORD *)&v99[40];
      v43 = *(_OWORD *)&v99[64];
      *(_OWORD *)(a1 + 88) = v100;
      v44 = *(_OWORD *)v99;
      v45 = *(_OWORD *)&v99[24];
      v46 = *(_OWORD *)&v99[48];
      *(_QWORD *)(a1 + 24) = v41;
      *(_OWORD *)(a1 + 32) = v45;
      *(_QWORD *)(a1 + 48) = v42;
      *(_OWORD *)(a1 + 56) = v46;
      *(_OWORD *)(a1 + 72) = v43;
      *(_OWORD *)(a1 + 8) = v44;
      *(_QWORD *)a1 = -2;
      goto LABEL_42;
    }
    v81 = __PAIR128__(v112, *((unsigned __int64 *)&v111 + 1));
    v82 = 0;
    sub_140630170(v99, &v81);
    v38 = &v99[8];
    if ( *(_QWORD *)v99 == -2 )
    {
      sub_14002F910(&v99[8]);
      goto LABEL_32;
    }
    v96 = *(_OWORD *)&v99[56];
    v95 = *(_OWORD *)&v99[40];
    v94 = *(_OWORD *)&v99[24];
    *(_OWORD *)&v93[8] = *(_OWORD *)&v99[8];
    v125 = *(_QWORD *)v99;
    *(_QWORD *)v93 = *(_QWORD *)v99;
    LOBYTE(v38) = *(_QWORD *)&v99[24] == -3;
    if ( *(_QWORD *)&v99[24] == -3 )
    {
      LODWORD(v127) = (_DWORD)v38;
      v39 = *(_QWORD *)&v93[8];
LABEL_39:
      if ( v125 == -1 )
      {
LABEL_32:
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          LOWORD(v81) = v14;
          *(_QWORD *)v93 = &v81;
          *(_QWORD *)&v93[8] = sub_1416BB1E0;
          *(_QWORD *)v99 = aCodexmateLibCo_24;
          *(_QWORD *)&v99[8] = 32;
          *(_QWORD *)&v99[16] = aCodexmateLibCo_24;
          *(_QWORD *)&v99[24] = 32;
          *(_QWORD *)&v99[32] = &off_1419E7480;
          v118 = -1;
          v129 = 1;
          sub_140BAD520(&unk_1419E7439, v93, 2, v99);
        }
        *(_QWORD *)&v81 = 0;
        *((_QWORD *)&v81 + 1) = 1;
        v82.m128i_i64[0] = 0;
        *(_QWORD *)&v126 = -1;
LABEL_35:
        *(_WORD *)v93 = v14;
        *(_QWORD *)v99 = v93;
        *(_QWORD *)&v99[8] = sub_1416BB1E0;
        *(_QWORD *)&v99[16] = &v81;
        *(_QWORD *)&v99[24] = sub_1400015F0;
        sub_1416ABFD0(&v77, &unk_1419E74E0, v99);
        *(_QWORD *)(a1 + 32) = v78;
        *(_OWORD *)(a1 + 16) = v77;
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)a1 = -2;
        if ( (_QWORD)v81 )
          sub_140001660(*((_QWORD *)&v81 + 1), v81, 1);
        goto LABEL_42;
      }
      v119 = *(_QWORD *)&v99[24];
      v40 = *(_QWORD *)&v93[16];
      LOBYTE(v37) = 1;
      v121 = v37;
      LODWORD(v124) = 0;
      *((_QWORD *)&v126 + 1) = v125;
LABEL_62:
      v122 = v39;
      v58 = (const __m128i *)sub_140E91160(v39, v40);
      v60 = v59;
      if ( v59 - 65 > 0xFFFFFFFFFFFFFFBFuLL )
      {
        v61 = 0;
        v62 = 0x4000000000003LL;
        while ( 1 )
        {
          v63 = v58->m128i_u8[v61];
          if ( (unsigned __int8)(v63 - 48) >= 0xAu && (unsigned __int8)((v63 & 0xDF) - 65) >= 0x1Au )
          {
            v64 = (unsigned int)(v63 - 45);
            if ( (unsigned int)v64 > 0x32 || !_bittest64(&v62, v64) )
              break;
          }
          if ( v60 == ++v61 )
          {
            sub_14072C410((unsigned int)v99, v60, 0, 1, 1);
            *(_QWORD *)&v126 = *(_QWORD *)&v99[8];
            if ( *(_DWORD *)v99 == 1 )
              sub_141938D2B(v126, *(_QWORD *)&v99[16]);
            v127 = *(_QWORD *)&v99[16];
            sub_1418F44E0(*(__m128i **)&v99[16], v58, v60);
            if ( *((_QWORD *)&v126 + 1) )
              sub_140001660(v122, *((_QWORD *)&v126 + 1), 1);
            if ( !((v125 == -1) | (unsigned __int8)v124 ^ 1) && v125 )
              sub_140001660(*(_QWORD *)&v93[8], v125, 1);
            v65 = v127;
            *(_QWORD *)&v81 = v127;
            *((_QWORD *)&v81 + 1) = v60;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              LOWORD(v111) = v14;
              *(_QWORD *)v93 = &v111;
              *(_QWORD *)&v93[8] = sub_1416BB1E0;
              *(_QWORD *)&v93[16] = &v81;
              *(_QWORD *)&v94 = sub_140186EE0;
              *(_QWORD *)v99 = aCodexmateLibCo_24;
              *(_QWORD *)&v99[8] = 32;
              *(_QWORD *)&v99[16] = aCodexmateLibCo_24;
              *(_QWORD *)&v99[24] = 32;
              *(_QWORD *)&v99[32] = &off_1419E74C8;
              v115 = v127;
              v118 = v126;
              v129 = 1;
              sub_140BAD520(&unk_1419E7498, v93, 2, v99);
            }
            *(_QWORD *)&v99[8] = v65;
            *(_QWORD *)&v99[16] = v60;
            *(_QWORD *)v99 = v126;
            *(_QWORD *)&v111 = v99;
            *((_QWORD *)&v111 + 1) = sub_1400015F0;
            sub_1416ABFD0(v93, &unk_1419E5C08, &v111);
            if ( *(_QWORD *)v99 )
              sub_140001660(*(_QWORD *)&v99[8], *(_QWORD *)v99, 1);
            v81 = *(_OWORD *)v93;
            v82.m128i_i64[0] = *(_QWORD *)&v93[16];
            goto LABEL_35;
          }
        }
      }
      if ( *((_QWORD *)&v126 + 1) )
        sub_140001660(v122, *((_QWORD *)&v126 + 1), 1);
      if ( ((v125 != -1) & (unsigned __int8)v124) != 0 && v125 )
        sub_140001660(*(_QWORD *)&v93[8], v125, 1);
      goto LABEL_32;
    }
    v119 = *(_QWORD *)&v99[24];
    if ( *(_QWORD *)&v99[24] == -2 )
    {
      v48 = DWORD2(v94);
      *((_QWORD *)&v126 + 1) = *((_QWORD *)&v94 + 1);
      v39 = v95;
      LOBYTE(v48) = 1;
      LODWORD(v127) = v48;
      v40 = *((_QWORD *)&v95 + 1);
      v121 = 0;
      LOBYTE(v48) = 1;
      LODWORD(v124) = v48;
      goto LABEL_62;
    }
    v54 = v96;
    if ( *(_QWORD *)&v99[24] == -1 )
    {
      LODWORD(v127) = (_DWORD)v38;
      v39 = *(_QWORD *)&v93[8];
      *((_QWORD *)&v126 + 1) = *((_QWORD *)&v95 + 1);
      if ( *((_QWORD *)&v95 + 1) == -1 )
        goto LABEL_39;
      v40 = *((_QWORD *)&v96 + 1);
      v55 = v96;
    }
    else
    {
      v55 = *((_QWORD *)&v94 + 1);
      v40 = v95;
      if ( (unsigned __int64)(*((_QWORD *)&v95 + 1) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v56 = v95;
        sub_140001660(v96, *((_QWORD *)&v95 + 1), 1);
        v40 = v56;
      }
      v39 = *(_QWORD *)&v93[8];
      v54 = v119;
      *((_QWORD *)&v126 + 1) = v119;
    }
    LOBYTE(v54) = 1;
    v121 = v54;
    if ( v125 > 0 )
    {
      v57 = v40;
      sub_140001660(v39, v125, 1);
      v40 = v57;
    }
    LODWORD(v127) = 0;
    LODWORD(v124) = 0;
    v39 = v55;
    goto LABEL_62;
  }
  nullsub_1(v30);
  v20 = 47;
  v31 = (void *)sub_140001650(47, 1);
  if ( !v31 )
    sub_141938D2B(1, 47);
  qmemcpy(v31, "token endpoint response exceeded the size limit", 47);
  v28 = v111;
  v23 = __PAIR128__((unsigned __int64)v31, 47);
  if ( !(_QWORD)v111 )
    goto LABEL_16;
LABEL_15:
  sub_140001660(*((_QWORD *)&v111 + 1), v28, 1);
LABEL_16:
  *(_QWORD *)(a1 + 8) = 10;
  *(_OWORD *)(a1 + 16) = v23;
  *(_QWORD *)(a1 + 32) = v20;
LABEL_17:
  *(_QWORD *)a1 = -2;
LABEL_18:
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v109) )
    sub_141243170(&v109);
  return a1;
}
