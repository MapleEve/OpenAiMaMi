// addr: 0x14084c160
// name (owner-map): set_codex_router_enabled_0
// module: core::relay::manager
// source: IDA remote hexrays decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled | 跨平台字符串签名匹配(名↔函数一致)
__int128 *__fastcall set_codex_router_enabled_0(__int128 *a1, _QWORD *a2, char a3, unsigned __int8 a4, __int128 a5)
{
  __int128 *v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // r14
  char *v12; // rbx
  __int64 *v13; // r12
  unsigned int v14; // r15d
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // cl
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // r15
  unsigned __int8 v30; // bl
  void *v31; // rcx
  __int64 v32; // rbx
  __int128 *v33; // rbx
  __int64 v34; // r15
  unsigned int v35; // r13d
  char v36; // di
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  char v40; // r15
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int64 v44; // rax
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // r10
  __int64 v51; // r13
  __int64 v52; // r9
  __int64 v53; // r14
  __int128 v54; // kr50_16
  __int128 v55; // kr60_16
  __int64 v56; // r11
  __int64 v57; // rbx
  _BYTE *v58; // r15
  __int64 v59; // r13
  bool v60; // al
  __int64 v61; // rax
  char v62; // al
  char v63; // r14
  char v64; // cl
  char v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // edx
  __int64 v70; // rbx
  __int64 v71; // rdi
  __int64 v72; // r15
  __int64 v73; // rbx
  __int64 v74; // rdx
  char *v75; // rdi
  char v76; // al
  PVOID v77; // rcx
  char v78; // al
  void *v79; // rdi
  void *v80; // rdi
  char v81; // cl
  __int64 v82; // [rsp+50h] [rbp-30h] BYREF
  __int128 v83; // [rsp+58h] [rbp-28h]
  __int128 v84; // [rsp+68h] [rbp-18h]
  __int128 v85; // [rsp+78h] [rbp-8h]
  __int128 v86; // [rsp+88h] [rbp+8h]
  __int128 v87; // [rsp+98h] [rbp+18h]
  __int128 v88; // [rsp+A8h] [rbp+28h]
  char v89[888]; // [rsp+B8h] [rbp+38h] BYREF
  _BYTE v90[24]; // [rsp+430h] [rbp+3B0h] BYREF
  _BYTE v91[24]; // [rsp+448h] [rbp+3C8h] BYREF
  _BYTE v92[24]; // [rsp+460h] [rbp+3E0h] BYREF
  void *v93; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v94; // [rsp+480h] [rbp+400h]
  __int64 v95; // [rsp+488h] [rbp+408h]
  char v96; // [rsp+59Ch] [rbp+51Ch]
  char v97; // [rsp+59Dh] [rbp+51Dh]
  _BYTE v98[24]; // [rsp+5A0h] [rbp+520h] BYREF
  _BYTE v99[24]; // [rsp+5B8h] [rbp+538h] BYREF
  _OWORD v100[6]; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v101; // [rsp+630h] [rbp+5B0h] BYREF
  __int64 v102; // [rsp+640h] [rbp+5C0h]
  __int128 v103; // [rsp+648h] [rbp+5C8h] BYREF
  __int64 v104; // [rsp+658h] [rbp+5D8h]
  __int128 v105; // [rsp+660h] [rbp+5E0h] BYREF
  _BYTE v106[104]; // [rsp+670h] [rbp+5F0h] BYREF
  _BYTE v107[192]; // [rsp+6D8h] [rbp+658h] BYREF
  __int128 v108; // [rsp+798h] [rbp+718h]
  _BYTE *v109; // [rsp+7A8h] [rbp+728h]
  __int64 v110; // [rsp+A58h] [rbp+9D8h] BYREF
  __int128 v111; // [rsp+A60h] [rbp+9E0h]
  _BYTE v112[80]; // [rsp+A70h] [rbp+9F0h] BYREF
  __int128 v113; // [rsp+AC0h] [rbp+A40h]
  __int128 v114; // [rsp+AD0h] [rbp+A50h] BYREF
  __int64 v115; // [rsp+AE0h] [rbp+A60h]
  __int128 v116; // [rsp+AE8h] [rbp+A68h]
  __int64 v117; // [rsp+AF8h] [rbp+A78h]
  char v118; // [rsp+B00h] [rbp+A80h]
  _QWORD v119[3]; // [rsp+B08h] [rbp+A88h] BYREF
  __int128 v120; // [rsp+B20h] [rbp+AA0h] BYREF
  __int128 v121; // [rsp+B30h] [rbp+AB0h]
  __int128 v122; // [rsp+B40h] [rbp+AC0h]
  __int128 v123; // [rsp+B50h] [rbp+AD0h]
  __int128 v124; // [rsp+B60h] [rbp+AE0h]
  __int128 v125; // [rsp+B70h] [rbp+AF0h]
  __int128 v126; // [rsp+C50h] [rbp+BD0h] BYREF
  _BYTE v127[48]; // [rsp+C60h] [rbp+BE0h]
  __int128 v128; // [rsp+C90h] [rbp+C10h]
  __int128 v129; // [rsp+CA0h] [rbp+C20h]
  __int128 v130; // [rsp+CB0h] [rbp+C30h] BYREF
  __int128 v131; // [rsp+CC0h] [rbp+C40h]
  __int128 v132; // [rsp+CD0h] [rbp+C50h]
  __int128 v133; // [rsp+CE0h] [rbp+C60h]
  __int128 v134; // [rsp+CF0h] [rbp+C70h]
  __int128 v135; // [rsp+D00h] [rbp+C80h]
  PVOID v136; // [rsp+D10h] [rbp+C90h]
  __int64 v137; // [rsp+D18h] [rbp+C98h]
  __int128 v138; // [rsp+D20h] [rbp+CA0h] BYREF
  _BYTE *v139; // [rsp+D30h] [rbp+CB0h]
  __int64 (__fastcall *v140)(_QWORD, _QWORD); // [rsp+D38h] [rbp+CB8h]
  PVOID Address; // [rsp+D40h] [rbp+CC0h]
  __int64 v142; // [rsp+D48h] [rbp+CC8h]
  __int128 v143; // [rsp+D50h] [rbp+CD0h] BYREF
  __int64 v144; // [rsp+D60h] [rbp+CE0h]
  __int64 v145; // [rsp+D68h] [rbp+CE8h]
  unsigned int v146; // [rsp+D70h] [rbp+CF0h]
  unsigned __int8 v147; // [rsp+D74h] [rbp+CF4h] BYREF
  char v148; // [rsp+D75h] [rbp+CF5h] BYREF
  _BYTE v149[2]; // [rsp+D76h] [rbp+CF6h] BYREF
  __int64 v150; // [rsp+D78h] [rbp+CF8h]
  int v151; // [rsp+D84h] [rbp+D04h]
  unsigned __int8 v152; // [rsp+D8Bh] [rbp+D0Bh]
  char v153; // [rsp+D8Ch] [rbp+D0Ch]
  unsigned __int8 v154; // [rsp+D8Dh] [rbp+D0Dh] BYREF
  char v155; // [rsp+D8Eh] [rbp+D0Eh] BYREF
  unsigned __int8 v156; // [rsp+D8Fh] [rbp+D0Fh] BYREF
  __int64 v157; // [rsp+D90h] [rbp+D10h]

  v157 = -2; /*0x14084c17b*/
  v6 = a1; /*0x14084c189*/
  v155 = a3; /*0x14084c193*/
  v154 = a4; /*0x14084c19a*/
  v105 = a5; /*0x14084c1a1*/
  v7 = a2[2]; /*0x14084c1a8*/
  if ( *(_QWORD *)(v7 + 16) != -1 ) /*0x14084c1b1*/
  {
    sub_14149C500(&v106[8], v7 + 16); /*0x14084c1be*/
    *(_QWORD *)v106 = 9; /*0x14084c1c3*/
    *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v106[80]; /*0x14084c1d5*/
    v8 = *(_OWORD *)&v106[16]; /*0x14084c1d9*/
    v9 = *(_OWORD *)&v106[32]; /*0x14084c1e0*/
    v10 = *(_OWORD *)&v106[48]; /*0x14084c1e7*/
    *(__int128 *)((char *)v6 + 72) = *(_OWORD *)&v106[64]; /*0x14084c1f5*/
    *(__int128 *)((char *)v6 + 56) = v10; /*0x14084c1f9*/
    *(__int128 *)((char *)v6 + 40) = v9; /*0x14084c1fd*/
    *(__int128 *)((char *)v6 + 24) = v8; /*0x14084c201*/
    *(__int128 *)((char *)v6 + 8) = *(_OWORD *)v106; /*0x14084c20c*/
LABEL_13:
    *(_QWORD *)v6 = -1; /*0x14084c2dd*/
    return v6; /*0x14084c2dd*/
  }
  v11 = a2[4]; /*0x14084c220*/
  v12 = (char *)(v11 + 16); /*0x14084c224*/
  LOBYTE(a1) = 1; /*0x14084c228*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v11 + 16), 1, 0) ) /*0x14084c22c*/
    sub_1416C15B0((volatile void *)(v11 + 16)); /*0x14084c2fe*/
  v13 = off_141EC90B8; /*0x14084c238*/
  if ( 2 * *off_141EC90B8 ) /*0x14084c243*/
  {
    v14 = sub_1416C2250(a1, v7); /*0x14084c30d*/
    LOBYTE(v14) = v14 ^ 1; /*0x14084c310*/
    if ( *(_BYTE *)(v11 + 17) ) /*0x14084c314*/
      goto LABEL_7; /*0x14084c31b*/
  }
  else
  {
    v14 = 0; /*0x14084c24f*/
    if ( *(_BYTE *)(v11 + 17) ) /*0x14084c252*/
    {
LABEL_7:
      nullsub_1(a1); /*0x14084c25f*/
      v15 = (void *)sub_140001650(40, 1); /*0x14084c26e*/
      if ( !v15 ) /*0x14084c276*/
      {
        v146 = v14; /*0x14084d8eb*/
        Address = (PVOID)(v11 + 16); /*0x14084d8f2*/
        sub_1416C2D4B(1, 40); /*0x14084d903*/
      }
      qmemcpy(v15, "Codex router transition lock is poisoned", 40); /*0x14084c28e*/
      if ( !(_BYTE)v14 ) /*0x14084c2a2*/
      {
        v17 = 2 * *v13; /*0x14084c2a8*/
        if ( v17 ) /*0x14084c2ae*/
        {
          v80 = v15; /*0x14084d89a*/
          v81 = sub_1416C2250(v17, v16); /*0x14084d8a2*/
          v15 = v80; /*0x14084d8a4*/
          if ( !v81 ) /*0x14084d8a9*/
            *(_BYTE *)(v11 + 17) = 1; /*0x14084d8af*/
        }
      }
      v18 = *v12; /*0x14084c2b6*/
      *v12 = 0; /*0x14084c2b6*/
      if ( v18 == 2 ) /*0x14084c2bb*/
      {
        v79 = v15; /*0x14084d88a*/
        WakeByAddressSingle((PVOID)(v11 + 16)); /*0x14084d88d*/
        v15 = v79; /*0x14084d892*/
      }
      *((_QWORD *)v6 + 1) = 10; /*0x14084c2c1*/
      *((_QWORD *)v6 + 2) = 40; /*0x14084c2c9*/
      *((_QWORD *)v6 + 3) = v15; /*0x14084c2d1*/
      *((_QWORD *)v6 + 4) = 40; /*0x14084c2d5*/
      goto LABEL_13; /*0x14084c2d5*/
    }
  }
  v146 = v14; /*0x14084c321*/
  Address = (PVOID)(v11 + 16); /*0x14084c328*/
  lock(v106, a2 + 5, aSwitchingTheCo, 26); /*0x14084c347*/
  v22 = *(_QWORD *)&v106[8]; /*0x14084c354*/
  v21 = *(_QWORD *)v106; /*0x14084c354*/
  v23 = v106[16]; /*0x14084c35b*/
  if ( *(_QWORD *)v106 == -1 ) /*0x14084c366*/
  {
    v152 = v106[16]; /*0x14084c3b6*/
    v136 = *(PVOID *)&v106[8]; /*0x14084c3bc*/
    v156 = v155 ^ 1; /*0x14084c3cc*/
    v27 = sub_141471910(*(_QWORD *)&v106[8], v106[16], v20); /*0x14084c3d2*/
    v151 = v28; /*0x14084c3d7*/
    v29 = v27; /*0x14084c3dd*/
    v30 = v156; /*0x14084c3e0*/
    *(_QWORD *)v106 = &v155; /*0x14084c3ed*/
    *(_QWORD *)&v106[8] = sub_1414AC660; /*0x14084c3fb*/
    *(_QWORD *)&v106[16] = &v154; /*0x14084c409*/
    *(_QWORD *)&v106[24] = sub_1414AC660; /*0x14084c410*/
    sub_14149C0F0(&v110, &unk_141796C52, v106); /*0x14084c42c*/
    v31 = &unk_141792760; /*0x14084c439*/
    if ( v30 ) /*0x14084c442*/
      v31 = &unk_141792768; /*0x14084c442*/
    v93 = v31; /*0x14084c44d*/
    v94 = v30 | 8LL; /*0x14084c454*/
    v150 = v111; /*0x14084c469*/
    v120 = v111; /*0x14084c470*/
    *(_QWORD *)v106 = &v93; /*0x14084c485*/
    *(_QWORD *)&v106[8] = sub_14041F680; /*0x14084c493*/
    *(_QWORD *)&v106[16] = &v120; /*0x14084c4a1*/
    *(_QWORD *)&v106[24] = sub_14041F680; /*0x14084c4a8*/
    sub_14149C0F0(&v82, &unk_141792771, v106); /*0x14084c4c4*/
    sub_1403565C0((unsigned int)aRouterToggle, 13, (unsigned int)aStart_2, 5, (__int64)&v82); /*0x14084c4e8*/
    if ( v110 ) /*0x14084c4f8*/
      sub_140001660(v150, v110, 1); /*0x14084c507*/
    transition_paths(v106, *a2); /*0x14084c516*/
    v32 = *(_QWORD *)v106; /*0x14084c51c*/
    v120 = *(_OWORD *)&v106[8]; /*0x14084c52a*/
    v121 = *(_OWORD *)&v106[24]; /*0x14084c538*/
    v122 = *(_OWORD *)&v106[40]; /*0x14084c546*/
    v123 = *(_OWORD *)&v106[56]; /*0x14084c554*/
    v124 = *(_OWORD *)&v106[72]; /*0x14084c562*/
    v125 = *(_OWORD *)&v106[88]; /*0x14084c570*/
    if ( *(_QWORD *)v106 == -1 ) /*0x14084c57b*/
    {
      *(__int128 *)((char *)v6 + 88) = v125; /*0x14084c6f9*/
      *(__int128 *)((char *)v6 + 72) = v124; /*0x14084c704*/
      v37 = v120; /*0x14084c708*/
      v38 = v121; /*0x14084c70f*/
      v39 = v122; /*0x14084c716*/
      *(__int128 *)((char *)v6 + 56) = v123; /*0x14084c724*/
      *(__int128 *)((char *)v6 + 40) = v39; /*0x14084c728*/
      *(__int128 *)((char *)v6 + 24) = v38; /*0x14084c72c*/
      *(__int128 *)((char *)v6 + 8) = v37; /*0x14084c730*/
      *(_QWORD *)v6 = -1; /*0x14084c734*/
      goto LABEL_91; /*0x14084c73b*/
    }
    sub_141684120(v89, v107, 888); /*0x14084c592*/
    v83 = v120; /*0x14084c5b3*/
    v84 = v121; /*0x14084c5b7*/
    v85 = v122; /*0x14084c5bb*/
    v86 = v123; /*0x14084c5bf*/
    v87 = v124; /*0x14084c5ca*/
    v88 = v125; /*0x14084c5d5*/
    v82 = v32; /*0x14084c5d9*/
    sub_14085A1E0((__int64)&v93, (__int64)a2); /*0x14084c5e7*/
    v142 = v29; /*0x14084c5fa*/
    if ( v96 == v155 ) /*0x14084c601*/
    {
      sub_140852800((unsigned int)&v126, a2[3], (unsigned int)&v82, v156, 0); /*0x14084c623*/
      v33 = &v130; /*0x14084c629*/
      codex_config_stale_reason(&v130, a2); /*0x14084c636*/
      v34 = *(_QWORD *)v127; /*0x14084c63c*/
      v35 = v156; /*0x14084c643*/
      if ( *(_QWORD *)v127 || (_QWORD)v130 != -1 ) /*0x14084c65c*/
      {
        sub_1408731C0(&v120, *((_QWORD *)&v126 + 1), *(_QWORD *)v127); /*0x14084c87c*/
        *(_QWORD *)v106 = &v120; /*0x14084c889*/
        *(_QWORD *)&v106[8] = sub_1400015F0; /*0x14084c897*/
        *(_QWORD *)&v106[16] = &v130; /*0x14084c89e*/
        *(_QWORD *)&v106[24] = sub_140892300; /*0x14084c8ac*/
        sub_14149C0F0(v99, &unk_141796F7A, v106); /*0x14084c8c8*/
        if ( (_QWORD)v120 ) /*0x14084c8d8*/
          sub_140001660(*((_QWORD *)&v120 + 1), v120, 1); /*0x14084c8e7*/
        sub_1407DC3A0(v35, aSameTargetReco, 21, v99); /*0x14084c904*/
        sub_1408547A0((unsigned int)v112, (_DWORD)a2, (unsigned int)aSameTargetRout, 25, 0); /*0x14084c926*/
        if ( *(_DWORD *)v112 != -1 ) /*0x14084c933*/
        {
          *(_OWORD *)&v106[80] = v113; /*0x14084c940*/
          *(_OWORD *)&v106[64] = *(_OWORD *)&v112[64]; /*0x14084c94e*/
          *(_OWORD *)&v106[48] = *(_OWORD *)&v112[48]; /*0x14084c971*/
          *(_OWORD *)&v106[32] = *(_OWORD *)&v112[32]; /*0x14084c978*/
          *(_OWORD *)&v106[16] = *(_OWORD *)&v112[16]; /*0x14084c97f*/
          *(_OWORD *)v106 = *(_OWORD *)v112; /*0x14084c986*/
          _u7b__u7b_closure_u7d__u7d__14(&v120, v106); /*0x14084c99b*/
          *(_OWORD *)v112 = v120; /*0x14084c9bd*/
          *(_OWORD *)&v112[16] = v121; /*0x14084c9c4*/
          *(_OWORD *)&v112[32] = v122; /*0x14084c9cb*/
          *(_OWORD *)&v112[48] = v123; /*0x14084c9d2*/
          *(_OWORD *)&v112[64] = v124; /*0x14084c9e0*/
          v113 = v125; /*0x14084c9ee*/
          v44 = v120; /*0x14084c9f5*/
          *(__int128 *)((char *)v6 + 88) = v125; /*0x14084c9fc*/
          v45 = *(_OWORD *)&v112[24]; /*0x14084ca07*/
          v46 = *(_OWORD *)&v112[40]; /*0x14084ca0e*/
          v47 = *(_OWORD *)&v112[56]; /*0x14084ca15*/
          v6[1] = *(_OWORD *)&v112[8]; /*0x14084ca1c*/
          v6[2] = v45; /*0x14084ca20*/
          v6[3] = v46; /*0x14084ca24*/
          v6[4] = v47; /*0x14084ca28*/
          *((_QWORD *)v6 + 10) = *(_QWORD *)&v112[72]; /*0x14084ca33*/
          *((_QWORD *)v6 + 1) = v44; /*0x14084ca37*/
          *(_QWORD *)v6 = -1; /*0x14084ca3b*/
          goto LABEL_77; /*0x14084ca42*/
        }
        sub_14052E730(&v112[8]); /*0x14084d12d*/
        if ( v154 == 1 ) /*0x14084d139*/
        {
          sub_140872F90(v106); /*0x14084d146*/
          v145 = *(_QWORD *)&v106[8]; /*0x14084d15a*/
          v137 = *(_QWORD *)&v106[16]; /*0x14084d168*/
          v150 = *(_QWORD *)v106; /*0x14084d16f*/
          v60 = *(_QWORD *)v106 != -1; /*0x14084d17a*/
        }
        else
        {
          v150 = -1; /*0x14084d5eb*/
          v60 = 0; /*0x14084d5f6*/
        }
        LOBYTE(v33) = v156; /*0x14084d5f8*/
        LOBYTE(v120) = v60; /*0x14084d5fe*/
        *(_QWORD *)v106 = &v120; /*0x14084d60b*/
        *(_QWORD *)&v106[8] = sub_1414AC660; /*0x14084d619*/
        v153 = 1; /*0x14084d620*/
        sub_14149C0F0(v92, &unk_141796FC6, v106); /*0x14084d63f*/
        v153 = 1; /*0x14084d645*/
        sub_1407DC650((_DWORD)v33, (unsigned int)aTotal_0, 5, v142, v151, (__int64)v92); /*0x14084d671*/
        v153 = 1; /*0x14084d677*/
        sub_1408473B0(&v120, a2); /*0x14084d688*/
        if ( v155 == 1 ) /*0x14084d695*/
        {
          sub_14085A1E0((__int64)v106, (__int64)a2); /*0x14084d6a1*/
          v70 = v137; /*0x14084d6a7*/
          v36 = v107[189]; /*0x14084d6ae*/
          sub_140018740(v106); /*0x14084d6bc*/
        }
        else
        {
          v36 = 0; /*0x14084d6c4*/
          v70 = v137; /*0x14084d6c6*/
        }
        sub_141684120(v6, &v120, 296); /*0x14084d6dd*/
        *((_QWORD *)v6 + 40) = v150; /*0x14084d6e9*/
        *((_QWORD *)v6 + 41) = v145; /*0x14084d6f7*/
        *((_QWORD *)v6 + 42) = v70; /*0x14084d6fe*/
        *((_QWORD *)v6 + 37) = 0; /*0x14084d705*/
        *((_QWORD *)v6 + 38) = 8; /*0x14084d710*/
        *((_QWORD *)v6 + 39) = 0; /*0x14084d71b*/
      }
      else
      {
        sub_1407DC4C0(v156, v142, v151, (unsigned int)&unk_141796F59, 33); /*0x14084c683*/
        sub_1408473B0(v106, a2); /*0x14084c693*/
        v36 = 0; /*0x14084c6a0*/
        if ( v155 ) /*0x14084c6a9*/
          v36 = v97; /*0x14084c6a9*/
        sub_141684120(v6, v106, 296); /*0x14084c6bc*/
        *((_QWORD *)v6 + 37) = 0; /*0x14084c6c1*/
        *((_QWORD *)v6 + 38) = 8; /*0x14084c6cc*/
        *((_QWORD *)v6 + 39) = 0; /*0x14084c6d7*/
        *((_QWORD *)v6 + 40) = -1; /*0x14084c6e2*/
      }
      *((_BYTE *)v6 + 344) = v36; /*0x14084d726*/
LABEL_77:
      if ( (_QWORD)v130 != -1 && (_QWORD)v130 ) /*0x14084d73d*/
        sub_140001660(*((_QWORD *)&v130 + 1), v130, 1); /*0x14084d74c*/
      v71 = *((_QWORD *)&v126 + 1); /*0x14084d751*/
      if ( v34 ) /*0x14084d75b*/
      {
        v72 = 32 * v34; /*0x14084d75d*/
        v73 = 0; /*0x14084d761*/
        do /*0x14084d777*/
        {
          v74 = *(_QWORD *)(v71 + v73); /*0x14084d779*/
          if ( v74 ) /*0x14084d780*/
            sub_140001660(*(_QWORD *)(v71 + v73 + 8), v74, 1); /*0x14084d78d*/
          v73 += 32; /*0x14084d770*/
        }
        while ( v72 != v73 ); /*0x14084d777*/
      }
      if ( (_QWORD)v126 ) /*0x14084d79e*/
        sub_140001660(v71, 32 * v126, 8); /*0x14084d7ad*/
      goto LABEL_90; /*0x14084d7b2*/
    }
    sub_140319B20(&v120, v94, v94 + 232 * v95); /*0x14084c75c*/
    sub_140578870(v106, &v93); /*0x14084c770*/
    v115 = v121; /*0x14084c77d*/
    v114 = v120; /*0x14084c78b*/
    v40 = v97; /*0x14084c792*/
    v116 = *(_OWORD *)v106; /*0x14084c7a1*/
    v117 = *(_QWORD *)&v106[16]; /*0x14084c7af*/
    v118 = v97; /*0x14084c7b6*/
    v149[1] = v97; /*0x14084c7bd*/
    if ( v155 ) /*0x14084c7cb*/
    {
      sub_14056DA30(v100, &v114); /*0x14084c7df*/
      if ( LODWORD(v100[0]) != -1 ) /*0x14084c7ec*/
      {
        sub_1407DC4C0(v156, v142, v151, (unsigned int)&unk_141796C6E, 28); /*0x14084c817*/
        *(__int128 *)((char *)v6 + 88) = v100[5]; /*0x14084c824*/
        *(__int128 *)((char *)v6 + 72) = v100[4]; /*0x14084c82f*/
        v41 = v100[0]; /*0x14084c833*/
        v42 = v100[1]; /*0x14084c83a*/
        v43 = v100[2]; /*0x14084c841*/
        *(__int128 *)((char *)v6 + 56) = v100[3]; /*0x14084c84f*/
        *(__int128 *)((char *)v6 + 40) = v43; /*0x14084c853*/
        *(__int128 *)((char *)v6 + 24) = v42; /*0x14084c857*/
        *(__int128 *)((char *)v6 + 8) = v41; /*0x14084c85b*/
        *(_QWORD *)v6 = -1; /*0x14084c85f*/
LABEL_89:
        sub_1407DB1C0(&v114); /*0x14084d80a*/
LABEL_90:
        sub_140018740(&v93); /*0x14084d817*/
        sub_140016620(&v82); /*0x14084d828*/
LABEL_91:
        v75 = (char *)v136; /*0x14084d82d*/
        if ( (v152 & 1) == 0 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v22, v23) ) /*0x14084d8d4*/
          v75[1] = 1; /*0x14084d8e2*/
        v76 = *v75; /*0x14084d84f*/
        *v75 = 0; /*0x14084d84f*/
        if ( v76 == 2 ) /*0x14084d853*/
          WakeByAddressSingle(v75); /*0x14084d8cc*/
        goto LABEL_95; /*0x14084d8cc*/
      }
      if ( *(_QWORD *)off_141EC8D80 >= 3u ) /*0x14084ca55*/
      {
        *(_QWORD *)&v126 = v115; /*0x14084ca69*/
        *(_QWORD *)&v130 = v117; /*0x14084ca70*/
        LOBYTE(v138) = v118; /*0x14084ca7e*/
        *(_QWORD *)v106 = &v126; /*0x14084ca8b*/
        *(_QWORD *)&v106[8] = sub_1414AC520; /*0x14084ca99*/
        *(_QWORD *)&v106[16] = &v130; /*0x14084caa7*/
        *(_QWORD *)&v106[24] = sub_1414AC520; /*0x14084caae*/
        *(_QWORD *)&v106[32] = &v138; /*0x14084cabc*/
        *(_QWORD *)&v106[40] = sub_1414AC660; /*0x14084caca*/
        *(_QWORD *)&v120 = aCodexmateLibCo_5; /*0x14084cad8*/
        *((_QWORD *)&v120 + 1) = 35; /*0x14084cadf*/
        *(_QWORD *)&v121 = aCodexmateLibCo_5; /*0x14084caea*/
        *((_QWORD *)&v121 + 1) = 35; /*0x14084caf1*/
        *(_QWORD *)&v122 = &off_141796CD0; /*0x14084cb03*/
        sub_140985BA0(&unk_141796C8A, v106, 3, &v120); /*0x14084cb25*/
      }
    }
    v149[0] = 2 * v155 + 3; /*0x14084cb36*/
    v148 = 0; /*0x14084cb3c*/
    v119[0] = &v148; /*0x14084cb4a*/
    v119[1] = &v105; /*0x14084cb58*/
    v119[2] = v149; /*0x14084cb66*/
    sub_140832070(v119, aStoppingCodex, 14); /*0x14084cb84*/
    v147 = v156; /*0x14084cb92*/
    *(_QWORD *)v106 = v119; /*0x14084cb99*/
    *(_QWORD *)&v106[8] = &v155; /*0x14084cba7*/
    *(_QWORD *)&v106[16] = a2; /*0x14084cbae*/
    *(_QWORD *)&v106[24] = &v82; /*0x14084cbb5*/
    *(_QWORD *)&v106[32] = &v114; /*0x14084cbc3*/
    *(_QWORD *)&v106[40] = &v93; /*0x14084cbd1*/
    *(_QWORD *)&v106[48] = &v156; /*0x14084cbdf*/
    *(_QWORD *)&v120 = a2; /*0x14084cbe6*/
    *((_QWORD *)&v120 + 1) = &v82; /*0x14084cbed*/
    *(_QWORD *)&v121 = &v147; /*0x14084cbfb*/
    sub_1406E1EE0(&v126, (__int64)&v82, v156, 0, (__int64)aRouterToggle_0); /*0x14084cc4d*/
    if ( (_DWORD)v126 != -1 ) /*0x14084cc5a*/
    {
      if ( v155 ) /*0x14084cc67*/
      {
        v135 = v129; /*0x14084cc74*/
        v134 = v128; /*0x14084cc82*/
        v133 = *(_OWORD *)&v127[32]; /*0x14084cca5*/
        v132 = *(_OWORD *)&v127[16]; /*0x14084ccac*/
        v131 = *(_OWORD *)v127; /*0x14084ccb3*/
        v130 = v126; /*0x14084ccba*/
        *(_QWORD *)&v120 = &v130; /*0x14084ccc8*/
        *((_QWORD *)&v120 + 1) = sub_140B036A0; /*0x14084ccd6*/
        sub_14149C0F0(v106, &unk_141796EC0, &v120); /*0x14084ccf5*/
        v143 = *(_OWORD *)v106; /*0x14084cd02*/
        v144 = *(_QWORD *)&v106[16]; /*0x14084cd10*/
        rollback_router_enabled_stably( /*0x14084cd42*/
          (unsigned int)&v120,
          (_DWORD)a2,
          (unsigned int)&v82,
          *(_DWORD *)&v106[8],
          *(__int64 *)&v106[16],
          (__int64)&v93,
          v40);
        if ( (_DWORD)v120 == -1 ) /*0x14084cd56*/
        {
          sub_1407DC4C0(v156, v142, v151, (unsigned int)&unk_141796F31, 40); /*0x14084d7d2*/
          *((_QWORD *)v6 + 4) = v144; /*0x14084d7df*/
          v6[1] = v143; /*0x14084d7ea*/
          *((_QWORD *)v6 + 1) = 10; /*0x14084d7ee*/
          *(_QWORD *)v6 = -1; /*0x14084d7f6*/
          goto LABEL_88; /*0x14084d7f6*/
        }
        *(_OWORD *)&v106[80] = v125; /*0x14084cd63*/
        *(_OWORD *)&v106[64] = v124; /*0x14084cd71*/
        *(_OWORD *)&v106[48] = v123; /*0x14084cd94*/
        *(_OWORD *)&v106[32] = v122; /*0x14084cd9b*/
        *(_OWORD *)&v106[16] = v121; /*0x14084cda2*/
        *(_OWORD *)v106 = v120; /*0x14084cda9*/
        sub_1407DC4C0(v156, v142, v151, (unsigned int)&unk_141796EE3, 27); /*0x14084cdce*/
        *(_QWORD *)&v138 = &v143; /*0x14084cddb*/
        *((_QWORD *)&v138 + 1) = sub_1400015F0; /*0x14084cde9*/
        v139 = v106; /*0x14084cdf0*/
        v140 = sub_140B036A0; /*0x14084cdf7*/
        sub_14149C0F0(&v103, &unk_141796EFE, &v138); /*0x14084ce13*/
        *((_QWORD *)v6 + 4) = v104; /*0x14084ce20*/
        v6[1] = v103; /*0x14084ce2b*/
        *((_QWORD *)v6 + 1) = 10; /*0x14084ce2f*/
        *(_QWORD *)v6 = -1; /*0x14084ce37*/
        sub_1407DA310(v106); /*0x14084ce45*/
        v48 = v143; /*0x14084ce4b*/
        if ( (_QWORD)v143 ) /*0x14084ce55*/
          goto LABEL_43; /*0x14084ce55*/
      }
      else
      {
        v135 = v129; /*0x14084cee4*/
        v134 = v128; /*0x14084cef2*/
        v133 = *(_OWORD *)&v127[32]; /*0x14084cf15*/
        v132 = *(_OWORD *)&v127[16]; /*0x14084cf1c*/
        v131 = *(_OWORD *)v127; /*0x14084cf23*/
        v130 = v126; /*0x14084cf2a*/
        *(_QWORD *)&v120 = &v130; /*0x14084cf38*/
        *((_QWORD *)&v120 + 1) = sub_140B036A0; /*0x14084cf46*/
        sub_14149C0F0(v106, &unk_141796E12, &v120); /*0x14084cf65*/
        v143 = *(_OWORD *)v106; /*0x14084cf72*/
        v144 = *(_QWORD *)&v106[16]; /*0x14084cf80*/
        if ( v96 == 1 /*0x14084d003*/
          && (sub_140852800((unsigned int)v106, a2[3], (unsigned int)&v82, 0, 0),
              v59 = *(_QWORD *)&v106[16],
              sub_140009E00(v106),
              !v59)
          || (restore_router_enabled_stably(
                (unsigned int)&v120,
                (_DWORD)a2,
                (unsigned int)&v82,
                DWORD2(v143),
                v144,
                (__int64)&v93),
              (_DWORD)v120 == -1) )
        {
          sub_1407DC4C0(v156, v142, v151, (unsigned int)&unk_141796E93, 45); /*0x14084d364*/
          *((_QWORD *)v6 + 4) = v144; /*0x14084d371*/
          v6[1] = v143; /*0x14084d37c*/
          *((_QWORD *)v6 + 1) = 10; /*0x14084d380*/
          *(_QWORD *)v6 = -1; /*0x14084d388*/
          goto LABEL_88; /*0x14084d388*/
        }
        *(_OWORD *)&v106[80] = v125; /*0x14084d010*/
        *(_OWORD *)&v106[64] = v124; /*0x14084d01e*/
        *(_OWORD *)&v106[48] = v123; /*0x14084d041*/
        *(_OWORD *)&v106[32] = v122; /*0x14084d048*/
        *(_OWORD *)&v106[16] = v121; /*0x14084d04f*/
        *(_OWORD *)v106 = v120; /*0x14084d056*/
        sub_1407DC4C0(v156, v142, v151, (unsigned int)&unk_141796E36, 33); /*0x14084d082*/
        *(_QWORD *)&v138 = &v143; /*0x14084d08f*/
        *((_QWORD *)&v138 + 1) = sub_1400015F0; /*0x14084d09d*/
        v139 = v106; /*0x14084d0a4*/
        v140 = sub_140B036A0; /*0x14084d0ab*/
        sub_14149C0F0(&v101, &unk_141796E57, &v138); /*0x14084d0c7*/
        *((_QWORD *)v6 + 4) = v102; /*0x14084d0d4*/
        v6[1] = v101; /*0x14084d0df*/
        *((_QWORD *)v6 + 1) = 10; /*0x14084d0e3*/
        *(_QWORD *)v6 = -1; /*0x14084d0eb*/
        sub_1407DA310(v106); /*0x14084d0f9*/
        v48 = v143; /*0x14084d0ff*/
        if ( (_QWORD)v143 ) /*0x14084d109*/
LABEL_43:
          sub_140001660(*((_QWORD *)&v143 + 1), v48, 1); /*0x14084ce5b*/
      }
LABEL_88:
      sub_1407DA310(&v130); /*0x14084d7fd*/
      goto LABEL_89; /*0x14084d804*/
    }
    v49 = *((_QWORD *)&v126 + 1); /*0x14084ce72*/
    v50 = *(_QWORD *)v127; /*0x14084ce80*/
    v51 = *(_QWORD *)&v127[40]; /*0x14084ce9c*/
    v53 = *((_QWORD *)&v128 + 1); /*0x14084ceaa*/
    v52 = v128; /*0x14084ceaa*/
    v54 = *(_OWORD *)&v127[8]; /*0x14084ceb5*/
    v55 = *(_OWORD *)&v127[24]; /*0x14084ceb5*/
    if ( *((_QWORD *)&v126 + 1) == 2 ) /*0x14084ceb5*/
    {
      v56 = 8; /*0x14084cebb*/
      v57 = 0; /*0x14084cec1*/
      v49 = *(_QWORD *)v127; /*0x14084cec3*/
      v58 = nullptr; /*0x14084cec6*/
      v50 = *(_QWORD *)&v127[8]; /*0x14084cec9*/
      v54 = *(_OWORD *)&v127[16]; /*0x14084cecf*/
      v55 = *(_OWORD *)&v127[32]; /*0x14084ced5*/
    }
    else
    {
      v58 = *((_BYTE **)&v129 + 1); /*0x14084d189*/
      v56 = v129; /*0x14084d189*/
      v57 = *((_QWORD *)&v128 + 1); /*0x14084d190*/
      v53 = v128; /*0x14084d193*/
      v52 = *(_QWORD *)&v127[40]; /*0x14084d196*/
    }
    *(_QWORD *)&v130 = v49; /*0x14084d199*/
    *((_QWORD *)&v130 + 1) = v50; /*0x14084d1a0*/
    v131 = v54; /*0x14084d1a7*/
    v132 = v55; /*0x14084d1b5*/
    *(_QWORD *)&v133 = v52; /*0x14084d1c3*/
    *((_QWORD *)&v133 + 1) = v53; /*0x14084d1ca*/
    *(_QWORD *)&v138 = v57; /*0x14084d1d1*/
    *((_QWORD *)&v138 + 1) = v56; /*0x14084d1d8*/
    v139 = v58; /*0x14084d1df*/
    if ( v155 == 1 ) /*0x14084d1f4*/
    {
      LODWORD(v57) = 0; /*0x14084d1f6*/
    }
    else
    {
      LOBYTE(v57) = v58 != nullptr; /*0x14084d200*/
      if ( (v154 & (v58 != nullptr)) != 0 ) /*0x14084d205*/
      {
        nullsub_1(*((_QWORD *)&v55 + 1)); /*0x14084d207*/
        v61 = sub_140001650(156, 1); /*0x14084d216*/
        if ( !v61 ) /*0x14084d21e*/
          sub_1416C2D4B(1, 156); /*0x14084d915*/
        v57 = v61; /*0x14084d224*/
        sub_141684120(v61, aChatgptChatgpt_0, 156); /*0x14084d237*/
        *(_QWORD *)v106 = 156; /*0x14084d23c*/
        *(_QWORD *)&v106[8] = v57; /*0x14084d247*/
        *(_QWORD *)&v106[16] = 156; /*0x14084d24e*/
        sub_1403B1EC0(&v138, v106); /*0x14084d267*/
        v62 = v53; /*0x14084d26d*/
        v63 = 0; /*0x14084d271*/
        if ( (v49 & 1) == 0 ) /*0x14084d278*/
          v63 = v62; /*0x14084d278*/
        LOBYTE(v57) = 1; /*0x14084d27c*/
        goto LABEL_64; /*0x14084d27e*/
      }
    }
    v64 = v53; /*0x14084d280*/
    v63 = 0; /*0x14084d284*/
    if ( (v49 & 1) == 0 ) /*0x14084d28b*/
      v63 = v64; /*0x14084d28b*/
    if ( !((unsigned __int8)v57 | v154 ^ 1) ) /*0x14084d293*/
    {
      sub_140832070(v119, aLaunchingCodex, 15); /*0x14084d3b5*/
      v145 = sub_141471910(v67, v66, v68); /*0x14084d3c0*/
      LODWORD(v137) = v69; /*0x14084d3c7*/
      sub_140872F90(v106); /*0x14084d3d4*/
      LOBYTE(v57) = v156; /*0x14084d3da*/
      v150 = *(_QWORD *)v106; /*0x14084d3e7*/
      LOBYTE(v143) = *(_QWORD *)v106 != -1; /*0x14084d3f2*/
      v65 = v143; /*0x14084d3f9*/
      *(_QWORD *)&v120 = &v143; /*0x14084d404*/
      *((_QWORD *)&v120 + 1) = sub_1414AC660; /*0x14084d412*/
      sub_14149C0F0(v91, &unk_141796DAE, &v120); /*0x14084d431*/
      sub_1407DC650(v57, (unsigned int)aLaunchCodex, 12, v145, v137, (__int64)v91); /*0x14084d45c*/
      v145 = *(_QWORD *)&v106[8]; /*0x14084d469*/
      v51 = *(_QWORD *)&v106[16]; /*0x14084d470*/
LABEL_70:
      LOBYTE(v57) = v156; /*0x14084d477*/
      LOBYTE(v143) = v65; /*0x14084d47d*/
      *(_QWORD *)&v120 = v58; /*0x14084d484*/
      *(_QWORD *)v106 = &v143; /*0x14084d492*/
      *(_QWORD *)&v106[8] = sub_1414AC660; /*0x14084d4a0*/
      *(_QWORD *)&v106[16] = &v120; /*0x14084d4ae*/
      *(_QWORD *)&v106[24] = sub_1414AC520; /*0x14084d4bc*/
      sub_14149C0F0(v90, &unk_141796DE7, v106); /*0x14084d4db*/
      sub_1407DC650(v57, (unsigned int)aTotal_0, 5, v142, v151, (__int64)v90); /*0x14084d506*/
      sub_1408473B0(&v120, a2); /*0x14084d516*/
      v109 = v139; /*0x14084d523*/
      v108 = v138; /*0x14084d531*/
      sub_141684120(v106, &v120, 296); /*0x14084d54f*/
      sub_141684120(v6, v106, 320); /*0x14084d560*/
      *((_QWORD *)v6 + 40) = v150; /*0x14084d56c*/
      *((_QWORD *)v6 + 41) = v145; /*0x14084d57a*/
      *((_QWORD *)v6 + 42) = v51; /*0x14084d581*/
      *((_BYTE *)v6 + 344) = v63; /*0x14084d588*/
      sub_1406CE2E0(&v130); /*0x14084d596*/
      sub_1407DB1C0(&v114); /*0x14084d5a3*/
      sub_140018740(&v93); /*0x14084d5b0*/
      sub_140016620(&v82); /*0x14084d5ba*/
      sub_14000E270(v136, v152); /*0x14084d5ce*/
      sub_14000E270(Address, v146); /*0x14084d5e1*/
      return v6; /*0x14084d5e6*/
    }
LABEL_64:
    sub_140832070(v119, aDone_3, 4); /*0x14084d299*/
    v150 = -1; /*0x14084d2b9*/
    v58 = v139; /*0x14084d2c4*/
    if ( (v154 & (unsigned __int8)v57) == 1 ) /*0x14084d2ce*/
    {
      LOBYTE(v57) = v156; /*0x14084d2d0*/
      *(_QWORD *)&v120 = v139; /*0x14084d2d6*/
      *(_QWORD *)v106 = &v120; /*0x14084d2e4*/
      *(_QWORD *)&v106[8] = sub_1414AC520; /*0x14084d2f2*/
      sub_14149C0F0(v98, &unk_141796DC7, v106); /*0x14084d30e*/
      sub_1407DC3A0((unsigned int)v57, aLaunchDeferred, 15, v98); /*0x14084d32a*/
      v58 = v139; /*0x14084d330*/
    }
    v65 = 0; /*0x14084d337*/
    goto LABEL_70; /*0x14084d33a*/
  }
  *(__int128 *)((char *)v6 + 88) = *(_OWORD *)&v106[80]; /*0x14084c36f*/
  v24 = *(_OWORD *)&v106[17]; /*0x14084c373*/
  v25 = *(_OWORD *)&v106[33]; /*0x14084c37a*/
  v26 = *(_OWORD *)&v106[49]; /*0x14084c381*/
  *(__int128 *)((char *)v6 + 73) = *(_OWORD *)&v106[65]; /*0x14084c38f*/
  *(__int128 *)((char *)v6 + 57) = v26; /*0x14084c393*/
  *(__int128 *)((char *)v6 + 41) = v25; /*0x14084c397*/
  *(__int128 *)((char *)v6 + 25) = v24; /*0x14084c39b*/
  *((_QWORD *)v6 + 1) = v21; /*0x14084c39f*/
  *((_QWORD *)v6 + 2) = v22; /*0x14084c3a3*/
  *((_BYTE *)v6 + 24) = v23; /*0x14084c3a7*/
  *(_QWORD *)v6 = -1; /*0x14084c3aa*/
LABEL_95:
  if ( !(_BYTE)v146 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v22, v23) ) /*0x14084d8b9*/
    *(_BYTE *)(v11 + 17) = 1; /*0x14084d8c2*/
  v77 = Address; /*0x14084d86c*/
  v78 = *(_BYTE *)Address; /*0x14084d873*/
  *(_BYTE *)Address = 0; /*0x14084d873*/
  if ( v78 == 2 ) /*0x14084d877*/
    WakeByAddressSingle(v77); /*0x14084d87d*/
  return v6; /*0x14084c2e7*/
}

// --- refs ---
// 0x14149c500  sub_14149C500
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x1416c1670  WakeByAddressSingle
// 0x1403b7e80  lock
// 0x141796c38  aSwitchingTheCo  // string: "switching the Codex router"
// 0x141471910  sub_141471910
// 0x1414ac660  sub_1414AC660
// 0x14149c0f0  sub_14149C0F0
// 0x141796c52  unk_141796C52
// 0x141792760  unk_141792760
// 0x141792768  unk_141792768
// 0x14041f680  sub_14041F680
// 0x141792771  unk_141792771
// 0x1403565c0  sub_1403565C0
// 0x14179277e  aRouterToggle  // string: "router_toggle"
// 0x141796c69  aStart_2  // string: "start"
// 0x140001660  sub_140001660
// 0x140846d10  transition_paths
// 0x141684120  sub_141684120
// 0x14085a1e0  sub_14085A1E0
// 0x140852800  sub_140852800
// 0x14084e000  codex_config_stale_reason
// 0x1408731c0  sub_1408731C0
// 0x1400015f0  sub_1400015F0
// 0x140892300  sub_140892300
// 0x141796f7a  unk_141796F7A
// 0x1407dc3a0  sub_1407DC3A0
// 0x141796f98  aSameTargetReco  // string: "same_target_reconcile"
// 0x1408547a0  sub_1408547A0
// 0x141796fad  aSameTargetRout  // string: "same-target router repair"
// 0x140832120  __u7b__u7b_closure_u7d__u7d__14
// 0x14052e730  sub_14052E730
// 0x140872f90  sub_140872F90
// 0x141796fc6  unk_141796FC6
// 0x1407dc650  sub_1407DC650
// 0x141792ca0  aTotal_0  // string: "total"
// 0x1408473b0  sub_1408473B0
// 0x140018740  sub_140018740
// 0x1407dc4c0  sub_1407DC4C0
// 0x141796f59  unk_141796F59
// 0x140319b20  sub_140319B20
// 0x140578870  sub_140578870
// 0x14056da30  sub_14056DA30
// 0x141796c6e  unk_141796C6E
// 0x1407db1c0  sub_1407DB1C0
// 0x140016620  sub_140016620
// 0x1414ac520  sub_1414AC520
// 0x1417968aa  aCodexmateLibCo_5  // string: "codexmate_lib::core::relay::manager"
// 0x141796cd0  off_141796CD0
// 0x140985ba0  sub_140985BA0
// 0x141796c8a  unk_141796C8A
// 0x141ec8d80  off_141EC8D80
// 0x140832070  sub_140832070
// 0x141796ce8  aStoppingCodex  // string: "stopping_codex"
// 0x1406e1ee0  sub_1406E1EE0
// 0x141796cf6  aRouterToggle_0  // string: "router toggle"
// 0x140b036a0  sub_140B036A0
// 0x141796ec0  unk_141796EC0
// 0x14084fc60  rollback_router_enabled_stably
// 0x141796f31  unk_141796F31
// 0x141796ee3  unk_141796EE3
// 0x141796efe  unk_141796EFE
// 0x1407da310  sub_1407DA310
// 0x141796e12  unk_141796E12
// 0x141796e93  unk_141796E93
// 0x140009e00  sub_140009E00
// 0x14084f280  restore_router_enabled_stably
// 0x141796e36  unk_141796E36
// 0x141796e57  unk_141796E57
// 0x141796d03  aChatgptChatgpt_0  // string: "为避免 ChatGPT 加载未完成的恢复状态，本次未自动打开；请完全退出 ChatGPT 后重新关闭路由，或在系统诊断中执行修复"
// 0x1403b1ec0  sub_1403B1EC0
// 0x141796d9f  aLaunchingCodex  // string: "launching_codex"
// 0x141796dae  unk_141796DAE
// 0x141796db7  aLaunchCodex  // string: "launch_codex"
// 0x141796de7  unk_141796DE7
// 0x1406ce2e0  sub_1406CE2E0
// 0x14000e270  sub_14000E270
// 0x141796dc3  aDone_3  // string: "done"
// 0x141796dc7  unk_141796DC7
// 0x141796dd8  aLaunchDeferred  // string: "launch_deferred"
