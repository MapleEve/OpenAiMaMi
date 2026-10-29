// win 1.2.7 latest-exe | module src/core/sessions/detail.rs | ea 0x140b4d5e0 | successor of pre-update 0x140f75cb0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.924, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int128 *__fastcall sub_140B4D5E0(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v5; // r15d
  __int64 v8; // r15
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // kr00_16
  __int64 v16; // r15
  __int128 v17; // kr10_16
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  void *v31; // r15
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rax
  __int128 v35; // kr20_16
  __int64 v36; // rax
  char v37; // bl
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int64 v41; // rax
  __int64 v42; // rdx
  __int128 v44; // kr30_16
  __int64 v45; // r8
  __int64 v46; // r14
  unsigned __int64 v47; // r15
  __int128 v48; // rax
  __int64 v49; // rcx
  char v50; // r12
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r14
  char v57; // al
  int v58; // ecx
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r14
  __int64 v63; // rdi
  int v64; // r14d
  __int64 v65; // rcx
  char v66; // al
  __int128 v67; // xmm1
  unsigned __int8 v68; // r14
  unsigned __int64 v69; // r15
  char v70; // al
  int v71; // ecx
  __int64 v72; // r8
  _BYTE v73[16]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v74; // [rsp+38h] [rbp-48h]
  __int128 v75; // [rsp+40h] [rbp-40h] BYREF
  __int64 v76; // [rsp+50h] [rbp-30h]
  _BYTE v77[104]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v78; // [rsp+C8h] [rbp+48h]
  __int128 v79; // [rsp+D8h] [rbp+58h]
  __int128 v80; // [rsp+E8h] [rbp+68h]
  __int128 v81; // [rsp+F8h] [rbp+78h]
  __int64 v82; // [rsp+108h] [rbp+88h]
  __int64 v83; // [rsp+110h] [rbp+90h] BYREF
  __int64 v84; // [rsp+118h] [rbp+98h]
  _BYTE v85[104]; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v86; // [rsp+188h] [rbp+108h] BYREF
  __int128 v87; // [rsp+198h] [rbp+118h]
  __int128 v88; // [rsp+1A8h] [rbp+128h]
  __int128 v89; // [rsp+1B8h] [rbp+138h]
  __int64 v90; // [rsp+1C8h] [rbp+148h]
  __int64 v91; // [rsp+1D8h] [rbp+158h]
  __int64 v92; // [rsp+1E0h] [rbp+160h]
  __int64 v93; // [rsp+1F0h] [rbp+170h]
  __int64 v94; // [rsp+1F8h] [rbp+178h]
  __int64 v95; // [rsp+208h] [rbp+188h]
  __int64 v96; // [rsp+210h] [rbp+190h]
  __int64 v97; // [rsp+220h] [rbp+1A0h]
  __int64 v98; // [rsp+228h] [rbp+1A8h]
  __int64 v99; // [rsp+230h] [rbp+1B0h]
  unsigned __int64 v100; // [rsp+238h] [rbp+1B8h]
  __int64 v101; // [rsp+240h] [rbp+1C0h]
  _BYTE v102[128]; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v103; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v104; // [rsp+2E0h] [rbp+260h]
  __int128 v105; // [rsp+2F0h] [rbp+270h]
  __int128 v106; // [rsp+300h] [rbp+280h]
  __int128 v107; // [rsp+310h] [rbp+290h]
  __int128 v108; // [rsp+320h] [rbp+2A0h]
  _BYTE v109[24]; // [rsp+338h] [rbp+2B8h] BYREF
  _BYTE v110[80]; // [rsp+350h] [rbp+2D0h]
  __int64 v111; // [rsp+3A0h] [rbp+320h] BYREF
  __int64 v112; // [rsp+3A8h] [rbp+328h]
  __int64 v113; // [rsp+3B8h] [rbp+338h]
  __int64 v114; // [rsp+3C0h] [rbp+340h]
  __int64 v115; // [rsp+3D0h] [rbp+350h]
  __int64 v116; // [rsp+3D8h] [rbp+358h]
  __int64 v117; // [rsp+3E8h] [rbp+368h]
  __int64 v118; // [rsp+3F0h] [rbp+370h]
  __int64 v119; // [rsp+400h] [rbp+380h]
  __int64 v120; // [rsp+408h] [rbp+388h]
  __int64 v121; // [rsp+418h] [rbp+398h]
  __int64 v122; // [rsp+420h] [rbp+3A0h]
  _QWORD v123[3]; // [rsp+430h] [rbp+3B0h] BYREF
  __int64 v124; // [rsp+448h] [rbp+3C8h]
  __int64 v125; // [rsp+450h] [rbp+3D0h]
  __int64 v126; // [rsp+460h] [rbp+3E0h]
  __int64 v127; // [rsp+468h] [rbp+3E8h]
  __int64 v128; // [rsp+480h] [rbp+400h]
  __int64 v129; // [rsp+488h] [rbp+408h]
  __int64 v130; // [rsp+498h] [rbp+418h]
  __int64 v131; // [rsp+4A0h] [rbp+420h]
  __int64 v132; // [rsp+4B0h] [rbp+430h]
  __int64 v133; // [rsp+4B8h] [rbp+438h]
  __int64 v134; // [rsp+4C8h] [rbp+448h]
  __int64 v135; // [rsp+4D0h] [rbp+450h]
  __int64 v136; // [rsp+4E0h] [rbp+460h]
  __int64 v137; // [rsp+4E8h] [rbp+468h]
  __int64 v138; // [rsp+4F8h] [rbp+478h]
  __int64 v139; // [rsp+500h] [rbp+480h]
  __int64 v140; // [rsp+510h] [rbp+490h]
  __int64 v141; // [rsp+518h] [rbp+498h]
  __int64 v142; // [rsp+528h] [rbp+4A8h]
  __int64 v143; // [rsp+530h] [rbp+4B0h]
  char v144; // [rsp+54Fh] [rbp+4CFh]
  __int128 v145; // [rsp+550h] [rbp+4D0h] BYREF
  __int128 v146; // [rsp+560h] [rbp+4E0h]
  __int128 v147; // [rsp+570h] [rbp+4F0h]
  __int128 v148; // [rsp+580h] [rbp+500h]
  __int128 v149; // [rsp+590h] [rbp+510h]
  __int128 v150; // [rsp+5A0h] [rbp+520h]
  __int64 v151; // [rsp+5B0h] [rbp+530h]
  __int64 v152; // [rsp+5B8h] [rbp+538h]
  __int64 v153; // [rsp+5C0h] [rbp+540h]
  char v154; // [rsp+5CFh] [rbp+54Fh] BYREF
  __int64 v155; // [rsp+5D0h] [rbp+550h]

  v155 = -2;
  v4 = a4;
  v5 = a3;
  v83 = a3;
  v84 = a4;
  sub_140932A70(v85);
  v145 = *(_OWORD *)&v85[8];
  v146 = *(_OWORD *)&v85[24];
  v147 = *(_OWORD *)&v85[40];
  v148 = *(_OWORD *)&v85[56];
  v149 = *(_OWORD *)&v85[72];
  v150 = *(_OWORD *)&v85[88];
  if ( *(_QWORD *)v85 == 2 )
  {
    *(_OWORD *)&v109[8] = v145;
    *(_OWORD *)v110 = v146;
    *(_OWORD *)&v110[16] = v147;
    *(_OWORD *)&v110[32] = v148;
    *(_OWORD *)&v110[48] = v149;
    *(_OWORD *)&v110[64] = v150;
    v103 = v145;
    v104 = v146;
    v105 = v147;
    v106 = v148;
    v107 = v149;
    v108 = v150;
LABEL_4:
    a1[5] = v108;
    a1[4] = v107;
    v9 = v103;
    v10 = v104;
    v11 = v105;
    a1[3] = v106;
    a1[2] = v11;
    a1[1] = v10;
    *a1 = v9;
    goto LABEL_5;
  }
  v82 = v90;
  v81 = v89;
  v80 = v88;
  v79 = v87;
  v78 = v86;
  *(_OWORD *)&v77[8] = v145;
  *(_OWORD *)&v77[24] = v146;
  *(_OWORD *)&v77[40] = v147;
  *(_OWORD *)&v77[56] = v148;
  *(_OWORD *)&v77[72] = v149;
  *(_OWORD *)&v77[88] = v150;
  *(_QWORD *)v77 = *(_QWORD *)v85;
  sub_14096FE10((unsigned int)v109, (unsigned int)v77, v5, v4, 0);
  sub_140905CE0(v77);
  v8 = *(_QWORD *)v109;
  v103 = *(_OWORD *)&v109[8];
  v104 = *(_OWORD *)v110;
  v105 = *(_OWORD *)&v110[16];
  v106 = *(_OWORD *)&v110[32];
  v107 = *(_OWORD *)&v110[48];
  v108 = *(_OWORD *)&v110[64];
  if ( *(_QWORD *)v109 == 2 )
    goto LABEL_4;
  sub_1419234B0(&v86, &v111, 248);
  *(_OWORD *)&v85[8] = v103;
  *(_OWORD *)&v85[24] = v104;
  *(_OWORD *)&v85[40] = v105;
  *(_OWORD *)&v85[56] = v106;
  *(_OWORD *)&v85[72] = v107;
  *(_OWORD *)&v85[88] = v108;
  *(_QWORD *)v85 = v8;
  if ( (_QWORD)v88 == -1 || (v21 = sub_1408FEA60(*((_QWORD *)&v88 + 1), v89)) == 0 || !v22 )
  {
    v21 = sub_1408FEA60(*(_QWORD *)&v85[72], *(_QWORD *)&v85[80]);
    if ( !v22 )
      v21 = 0;
  }
  v30 = 16;
  if ( v21 )
    v30 = v22;
  v31 = &unk_141A81AB0;
  if ( v21 )
    v31 = (void *)v21;
  if ( v30 < 0 )
  {
    v32 = 0;
    goto LABEL_28;
  }
  v153 = v30;
  if ( !v30 )
  {
    v152 = 1;
    if ( v97 == -1 )
      goto LABEL_100;
LABEL_98:
    if ( v99 == 9 && !(*(_QWORD *)v98 ^ 0x6574616E69676170LL | *(unsigned __int8 *)(v98 + 8) ^ 0x64LL) )
      goto LABEL_106;
    goto LABEL_100;
  }
  nullsub_1(v23, v22);
  v32 = 1;
  v33 = v153;
  v34 = sub_140001650(v153, 1);
  v30 = v33;
  if ( !v34 )
LABEL_28:
    sub_14196B2DB(v32, v30);
  v152 = v34;
  sub_1419234B0(v34, v31, v33);
  if ( v97 != -1 )
    goto LABEL_98;
LABEL_100:
  if ( *((_QWORD *)&v86 + 1) != -1 )
  {
    v44 = v87;
    if ( (unsigned __int8)sub_1416B1B00(v87, *((_QWORD *)&v87 + 1)) )
    {
      sub_1408F3090(&v145, v44, *((_QWORD *)&v44 + 1), 300);
      if ( (_DWORD)v145 == -1 )
      {
        v68 = v147;
        *(_QWORD *)v109 = v146;
        *(_QWORD *)&v109[8] = v146;
        *(_QWORD *)&v109[16] = *((_QWORD *)&v145 + 1);
        *(_QWORD *)v110 = v146 + (*((_QWORD *)&v146 + 1) << 6);
        sub_140228FF0(v77, v109);
        v69 = *(_QWORD *)&v77[16];
        sub_140B4C9C0(v109, v77);
        *((_QWORD *)a1 + 9) = *(_QWORD *)&v109[16];
        *(__int128 *)((char *)a1 + 56) = *(_OWORD *)v109;
        v70 = 1;
        if ( !v68 )
          v70 = v110[0];
        *((_QWORD *)a1 + 3) = *(_QWORD *)&v85[32];
        *(__int128 *)((char *)a1 + 8) = *(_OWORD *)&v85[16];
        v71 = 0x7FFFFFFF;
        if ( v69 < 0x7FFFFFFF )
          v71 = v69;
        v72 = v153;
        *((_QWORD *)a1 + 4) = v153;
        *((_QWORD *)a1 + 5) = v152;
        *((_QWORD *)a1 + 6) = v72;
        *((_DWORD *)a1 + 20) = v68 ^ 1;
        *((_DWORD *)a1 + 21) = v71;
        *((_BYTE *)a1 + 88) = v70;
        *(_QWORD *)a1 = -1;
        v53 = *(_QWORD *)&v85[40];
        if ( !*(_QWORD *)&v85[40] )
          goto LABEL_117;
        goto LABEL_116;
      }
      *(_OWORD *)&v77[80] = v150;
      *(_OWORD *)&v77[64] = v149;
      *(_OWORD *)&v77[48] = v148;
      *(_OWORD *)&v77[32] = v147;
      *(_OWORD *)&v77[16] = v146;
      *(_OWORD *)v77 = v145;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v103 = v77;
        *((_QWORD *)&v103 + 1) = sub_140D76130;
        *(_QWORD *)&v110[24] = 2;
        *(_QWORD *)&v110[32] = aCodexmateLibCo_43;
        *(_QWORD *)&v110[40] = 37;
        *(_QWORD *)&v110[56] = &unk_141A81AC0;
        *(_QWORD *)&v110[64] = &v103;
        *(_QWORD *)v109 = 0;
        *(_QWORD *)&v109[8] = aCodexmateLibCo_43;
        *(_QWORD *)&v109[16] = 37;
        *(_QWORD *)v110 = 0;
        *(_QWORD *)&v110[8] = aSrcCoreSession_1;
        *(_QWORD *)&v110[16] = 27;
        *(_QWORD *)&v110[48] = 0x4800000001LL;
        sub_141503E20(&v154, v109);
      }
      sub_140AF57C0(v77);
    }
  }
LABEL_106:
  if ( v97 == -1 || v99 != 9 || *(_QWORD *)v98 ^ 0x6574616E69676170LL | *(unsigned __int8 *)(v98 + 8) ^ 0x64LL )
    sub_14096D110((unsigned int)v109, a2, *(_DWORD *)&v85[24], *(_DWORD *)&v85[32], 300);
  else
    sub_14096E680((unsigned int)v109, a2, *(_DWORD *)&v85[24], *(_DWORD *)&v85[32], 300);
  v46 = *(_QWORD *)&v109[8];
  v45 = *(_QWORD *)v109;
  v47 = *(_QWORD *)&v109[16];
  v48 = *(_OWORD *)v110;
  v49 = *(_QWORD *)&v110[16];
  v50 = v110[24];
  if ( *(_QWORD *)v109 == -1 )
  {
    *(_QWORD *)v109 = *(_QWORD *)&v110[8];
    *(_QWORD *)&v109[8] = *(_QWORD *)&v110[8];
    *(_QWORD *)&v109[16] = *(_QWORD *)v110;
    *(_QWORD *)v110 = *(_QWORD *)&v110[8] + (*(_QWORD *)&v110[16] << 6);
    sub_140228DF0(v77, v109);
    sub_140B4C9C0(v109, v77);
    *((_QWORD *)a1 + 9) = *(_QWORD *)&v109[16];
    *(__int128 *)((char *)a1 + 56) = *(_OWORD *)v109;
    v57 = 1;
    if ( (v50 & 1) == 0 )
      v57 = v110[0];
    *((_QWORD *)a1 + 3) = *(_QWORD *)&v85[32];
    *(__int128 *)((char *)a1 + 8) = *(_OWORD *)&v85[16];
    v58 = 0x7FFFFFFF;
    if ( v47 < 0x7FFFFFFF )
      v58 = v47;
    v59 = v153;
    *((_QWORD *)a1 + 4) = v153;
    *((_QWORD *)a1 + 5) = v152;
    *((_QWORD *)a1 + 6) = v59;
    *((_DWORD *)a1 + 20) = v46 & 1;
    *((_DWORD *)a1 + 21) = v58;
    *((_BYTE *)a1 + 88) = v57;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)&v85[40] )
      sub_140001660(*(_QWORD *)&v85[48], *(_QWORD *)&v85[40], 1);
    if ( *((_QWORD *)&v86 + 1) != -1 && *((_QWORD *)&v86 + 1) )
      sub_140001660(v87, *((_QWORD *)&v86 + 1), 1);
    if ( (_QWORD)v88 != -1 && (_QWORD)v88 )
      sub_140001660(*((_QWORD *)&v88 + 1), v88, 1);
    if ( *(_QWORD *)&v85[64] )
      sub_140001660(*(_QWORD *)&v85[72], *(_QWORD *)&v85[64], 1);
    sub_140032FF0(v102);
    if ( *((_QWORD *)&v89 + 1) != -1 && *((_QWORD *)&v89 + 1) )
      sub_140001660(v90, *((_QWORD *)&v89 + 1), 1);
    if ( v91 != -1 && v91 )
      sub_140001660(v92, v91, 1);
    if ( v93 != -1 && v93 )
      sub_140001660(v94, v93, 1);
    if ( v95 != -1 && v95 )
      sub_140001660(v96, v95, 1);
    if ( v97 != -1 && v97 )
      sub_140001660(v98, v97, 1);
    v60 = v100;
    if ( v100 <= 0xFFFFFFFFFFFFFFFDuLL && v100 )
      sub_140001660(v101, v100, 1);
    v61 = *(_QWORD *)&v85[96];
    v152 = v86;
    v153 = 0;
    v151 = *(_QWORD *)&v85[96];
    while ( v152 != v153 )
    {
      ++v153;
      v62 = v61 + 32;
      sub_1401AB4D0(v61, v60);
      v61 = v62;
    }
    goto LABEL_181;
  }
  v51 = *(_OWORD *)&v110[25];
  v52 = *(_OWORD *)&v110[41];
  a1[5] = *(_OWORD *)&v110[56];
  *(__int128 *)((char *)a1 + 65) = v52;
  *(__int128 *)((char *)a1 + 49) = v51;
  *(_QWORD *)a1 = v45;
  *((_QWORD *)a1 + 1) = v46;
  *((_QWORD *)a1 + 2) = v47;
  *(__int128 *)((char *)a1 + 24) = v48;
  *((_QWORD *)a1 + 5) = v49;
  *((_BYTE *)a1 + 48) = v50;
  if ( v153 )
    sub_140001660(v152, v153, 1);
  if ( *(_QWORD *)&v85[16] )
    sub_140001660(*(_QWORD *)&v85[24], *(_QWORD *)&v85[16], 1);
  v53 = *(_QWORD *)&v85[40];
  if ( *(_QWORD *)&v85[40] )
LABEL_116:
    sub_140001660(*(_QWORD *)&v85[48], v53, 1);
LABEL_117:
  if ( *((_QWORD *)&v86 + 1) != -1 && *((_QWORD *)&v86 + 1) )
    sub_140001660(v87, *((_QWORD *)&v86 + 1), 1);
  if ( (_QWORD)v88 != -1 && (_QWORD)v88 )
    sub_140001660(*((_QWORD *)&v88 + 1), v88, 1);
  if ( *(_QWORD *)&v85[64] )
    sub_140001660(*(_QWORD *)&v85[72], *(_QWORD *)&v85[64], 1);
  sub_140032FF0(v102);
  if ( *((_QWORD *)&v89 + 1) != -1 && *((_QWORD *)&v89 + 1) )
    sub_140001660(v90, *((_QWORD *)&v89 + 1), 1);
  if ( v91 != -1 && v91 )
    sub_140001660(v92, v91, 1);
  if ( v93 != -1 && v93 )
    sub_140001660(v94, v93, 1);
  if ( v95 != -1 && v95 )
    sub_140001660(v96, v95, 1);
  if ( v97 != -1 && v97 )
    sub_140001660(v98, v97, 1);
  v54 = v100;
  if ( v100 <= 0xFFFFFFFFFFFFFFFDuLL && v100 )
    sub_140001660(v101, v100, 1);
  v55 = *(_QWORD *)&v85[96];
  v152 = v86;
  v153 = 0;
  v151 = *(_QWORD *)&v85[96];
  while ( v152 != v153 )
  {
    ++v153;
    v56 = v55 + 32;
    sub_1401AB4D0(v55, v54);
    v55 = v56;
  }
LABEL_181:
  if ( *(_QWORD *)&v85[88] )
    sub_140001660(*(_QWORD *)&v85[96], 32LL * *(_QWORD *)&v85[88], 8);
LABEL_5:
  if ( *(_DWORD *)a1 == -1 )
    return a1;
  *(_OWORD *)&v85[80] = a1[5];
  *(_OWORD *)&v85[64] = a1[4];
  v12 = *a1;
  v13 = a1[1];
  v14 = a1[2];
  *(_OWORD *)&v85[48] = a1[3];
  *(_OWORD *)&v85[32] = v14;
  *(_OWORD *)&v85[16] = v13;
  *(_OWORD *)v85 = v12;
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    *(_QWORD *)v77 = &v83;
    *(_QWORD *)&v77[8] = sub_140191200;
    *(_QWORD *)&v77[16] = v85;
    *(_QWORD *)&v77[24] = sub_140D76130;
    *(_QWORD *)&v110[24] = 2;
    *(_QWORD *)&v110[32] = aCodexmateLibCo_43;
    *(_QWORD *)&v110[40] = 37;
    *(_QWORD *)&v110[56] = &unk_141A81B4A;
    *(_QWORD *)&v110[64] = v77;
    *(_QWORD *)v109 = 0;
    *(_QWORD *)&v109[8] = aCodexmateLibCo_43;
    *(_QWORD *)&v109[16] = 37;
    *(_QWORD *)v110 = 0;
    *(_QWORD *)&v110[8] = aSrcCoreSession_1;
    *(_QWORD *)&v110[16] = 27;
    *(_QWORD *)&v110[48] = 0x1200000001LL;
    sub_141503E20(&v154, v109);
  }
  sub_140AF57C0(v85);
  sub_14088C570(v109, a2, v83, v84);
  v15 = *(_OWORD *)v109;
  v16 = *(_QWORD *)&v109[16];
  v17 = *(_OWORD *)v110;
  v145 = *(_OWORD *)&v110[16];
  v146 = *(_OWORD *)&v110[32];
  v147 = *(_OWORD *)&v110[48];
  v148 = *(_OWORD *)&v110[64];
  if ( *(_QWORD *)v109 == -1 )
  {
    v24 = v145;
    v25 = v146;
    v26 = v147;
    a1[5] = v148;
    a1[4] = v26;
    a1[3] = v25;
    a1[2] = v24;
    *(_QWORD *)a1 = *((_QWORD *)&v15 + 1);
    *((_QWORD *)a1 + 1) = v16;
    a1[1] = v17;
    return a1;
  }
  sub_1419234B0(v85, &v111, 432);
  if ( (_DWORD)v15 == 2 )
  {
    nullsub_1(v19, v18);
    v20 = sub_140001650(21, 1);
    if ( !v20 )
      sub_14196B2DB(1, 21);
    *(_OWORD *)v20 = xmmword_141A6F541;
    *(_QWORD *)(v20 + 13) = 0x8BA8E7BFBAE794BAuLL;
    *(_QWORD *)a1 = 10;
    *((_QWORD *)a1 + 1) = 21;
    *((_QWORD *)a1 + 2) = v20;
    *((_QWORD *)a1 + 3) = 21;
    return a1;
  }
  sub_1419234B0(&v111, v85, 432);
  *(_OWORD *)&v110[16] = v145;
  *(_OWORD *)&v110[32] = v146;
  *(_OWORD *)&v110[48] = v147;
  *(_OWORD *)&v110[64] = v148;
  *(_OWORD *)v109 = v15;
  *(_QWORD *)&v109[16] = v16;
  *(_OWORD *)v110 = v17;
  if ( v144 )
  {
    nullsub_1(v28, v27);
    v29 = sub_140001650(51, 1);
    if ( !v29 )
      sub_14196B2DB(1, 51);
    *(_OWORD *)(v29 + 32) = xmmword_141A81BC8;
    *(_OWORD *)(v29 + 16) = xmmword_141A81BB8;
    *(_OWORD *)v29 = xmmword_141A81BA8;
    *(_DWORD *)(v29 + 47) = -1179720315;
    *(_QWORD *)a1 = 10;
    *((_QWORD *)a1 + 1) = 51;
    *((_QWORD *)a1 + 2) = v29;
    *((_QWORD *)a1 + 3) = 51;
    goto LABEL_39;
  }
  if ( *(_QWORD *)&v110[56] == -1
    || (v35 = *(_OWORD *)&v110[64], sub_1408FEA60(*(_QWORD *)&v110[64], *(_QWORD *)&v110[72]), !v27) )
  {
    nullsub_1(v28, v27);
    v41 = sub_140001650(36, 1);
    if ( !v41 )
      sub_14196B2DB(1, 36);
    *(_OWORD *)(v41 + 16) = xmmword_141A6F566;
    *(_OWORD *)v41 = xmmword_141A6F556;
    *(_DWORD *)(v41 + 32) = -2067864145;
    *(_QWORD *)a1 = 10;
    *((_QWORD *)a1 + 1) = 36;
    *((_QWORD *)a1 + 2) = v41;
    *((_QWORD *)a1 + 3) = 36;
LABEL_39:
    if ( *(_QWORD *)&v110[8] )
      sub_140001660(*(_QWORD *)&v110[16], *(_QWORD *)&v110[8], 1);
    if ( *(_QWORD *)&v110[32] )
      sub_140001660(*(_QWORD *)&v110[40], *(_QWORD *)&v110[32], 1);
    if ( *(_QWORD *)&v110[56] != -1 && *(_QWORD *)&v110[56] )
      sub_140001660(*(_QWORD *)&v110[64], *(_QWORD *)&v110[56], 1);
    if ( v111 != -1 && v111 )
      sub_140001660(v112, v111, 1);
    if ( v113 != -1 && v113 )
      sub_140001660(v114, v113, 1);
    if ( v115 != -1 && v115 )
      sub_140001660(v116, v115, 1);
    if ( v117 != -1 && v117 )
      sub_140001660(v118, v117, 1);
    if ( v119 != -1 && v119 )
      sub_140001660(v120, v119, 1);
    if ( v121 != -1 && v121 )
      sub_140001660(v122, v121, 1);
    if ( v123[0] != -1 )
    {
      if ( v123[0] )
        sub_140001660(v123[1], v123[0], 1);
      if ( v124 )
        sub_140001660(v125, v124, 1);
      if ( v126 != -1 && v126 )
        sub_140001660(v127, v126, 1);
    }
    v42 = v128;
    if ( v128 == -1 )
      goto LABEL_75;
    goto LABEL_73;
  }
  sub_1408F3090(v77, v35, *((_QWORD *)&v35 + 1), 300);
  v36 = *(_QWORD *)v77;
  v103 = *(_OWORD *)&v77[8];
  *(_QWORD *)&v104 = *(_QWORD *)&v77[24];
  v37 = v77[32];
  if ( *(_QWORD *)v77 != -1 )
  {
    v38 = *(_OWORD *)&v77[33];
    v39 = *(_OWORD *)&v77[49];
    v40 = *(_OWORD *)&v77[65];
    a1[5] = *(_OWORD *)&v77[80];
    *(__int128 *)((char *)a1 + 65) = v40;
    *(__int128 *)((char *)a1 + 49) = v39;
    *(__int128 *)((char *)a1 + 33) = v38;
    *((_QWORD *)a1 + 3) = v104;
    *(__int128 *)((char *)a1 + 8) = v103;
    *(_QWORD *)a1 = v36;
    *((_BYTE *)a1 + 32) = v37;
    goto LABEL_39;
  }
  v76 = v104;
  v75 = v103;
  v63 = *((_QWORD *)&v103 + 1);
  sub_1402291F0(v73, *((_QWORD *)&v103 + 1), *((_QWORD *)&v103 + 1) + ((_QWORD)v104 << 6));
  v64 = v74;
  sub_140B4C9C0(&v103, v73);
  v65 = v104;
  *(_QWORD *)&v77[64] = v104;
  *(_OWORD *)&v77[48] = v103;
  v66 = 1;
  if ( (v37 & 1) == 0 )
    v66 = BYTE8(v104);
  *(_OWORD *)v77 = *(_OWORD *)&v110[8];
  v67 = *(_OWORD *)&v110[8];
  *(_QWORD *)&v77[16] = *(_QWORD *)&v110[24];
  *(_QWORD *)&v77[40] = *(_QWORD *)&v110[48];
  *(_OWORD *)&v77[24] = *(_OWORD *)&v110[32];
  *(__int128 *)((char *)a1 + 56) = v103;
  *(__int128 *)((char *)a1 + 8) = v67;
  *((_QWORD *)a1 + 9) = v65;
  *((_QWORD *)a1 + 5) = *(_QWORD *)&v77[32];
  *((_QWORD *)a1 + 6) = *(_QWORD *)&v77[40];
  *((_QWORD *)a1 + 3) = *(_QWORD *)&v77[16];
  *((_QWORD *)a1 + 4) = *(_QWORD *)&v77[24];
  *((_DWORD *)a1 + 20) = (v37 & 1) == 0;
  *((_DWORD *)a1 + 21) = v64;
  *((_BYTE *)a1 + 88) = v66;
  *(_QWORD *)a1 = -1;
  sub_140235C10(&v75);
  if ( (_QWORD)v75 )
    sub_140001660(v63, (_QWORD)v75 << 6, 8);
  if ( *(_QWORD *)&v110[56] != -1 && *(_QWORD *)&v110[56] )
    sub_140001660(*(_QWORD *)&v110[64], *(_QWORD *)&v110[56], 1);
  if ( v111 != -1 && v111 )
    sub_140001660(v112, v111, 1);
  if ( v113 != -1 && v113 )
    sub_140001660(v114, v113, 1);
  if ( v115 != -1 && v115 )
    sub_140001660(v116, v115, 1);
  if ( v117 != -1 && v117 )
    sub_140001660(v118, v117, 1);
  if ( v119 != -1 && v119 )
    sub_140001660(v120, v119, 1);
  if ( v121 != -1 && v121 )
    sub_140001660(v122, v121, 1);
  sub_140849920(v123);
  v42 = v128;
  if ( v128 == -1 )
    goto LABEL_75;
LABEL_73:
  if ( v42 )
    sub_140001660(v129, v42, 1);
LABEL_75:
  if ( v130 != -1 && v130 )
    sub_140001660(v131, v130, 1);
  if ( v132 != -1 && v132 )
    sub_140001660(v133, v132, 1);
  if ( v134 != -1 && v134 )
    sub_140001660(v135, v134, 1);
  if ( v136 != -1 && v136 )
    sub_140001660(v137, v136, 1);
  if ( v138 != -1 && v138 )
    sub_140001660(v139, v138, 1);
  if ( v140 != -1 && v140 )
    sub_140001660(v141, v140, 1);
  if ( v142 != -1 && v142 )
    sub_140001660(v143, v142, 1);
  return a1;
}
