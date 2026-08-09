// module: core::relay::proxy_server, core::relay::manager (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14069e380  size: 0x1473  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Route-table builder, one of four near-identical instantiations (see sub_140588900/sub_14088a5c0):
//   registers the same /__aimami/health, /:ide/..., /codex/v1/responses/compact,
//   /codex/router/v1/responses, /codex/router/v1/responses/compact route set (this instantiation
//   additionally references the '/compact' router variant explicitly), evidence modules include
//   core::relay::manager consistent with the manager module wiring up this listener's Router.
//
// Referenced strings/symbols:
//   0x14104b490  sub_14104B490
//   0x141042bd0  sub_141042BD0
//   0x141031f10  sub_141031F10
//   0x14149c0f0  sub_14149C0F0
//   0x141768210  unk_141768210
//   0x1405e12d0  sub_1405E12D0
//   0x14066b940  build_upstream_direct_client
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d31  sub_1416C2D31
//   0x140ffa6e0  sub_140FFA6E0
//   0x14056e1c0  sub_14056E1C0
//   0x140b57960  sub_140B57960
//   0x14056f600  sub_14056F600
//   0x141782323  aAimamiHealth   "/__aimami/health"
//   0x141782338  off_141782338
//   0x140b57db0  sub_140B57DB0
//   0x141782350  aIdeV1ChatCompl_0   "/:ide/v1/chat/completions"
//   0x141782370  off_141782370
//   0x140b57c40  sub_140B57C40
//   0x141782388  aIdeV1Responses_0   "/:ide/v1/responses"
//   0x1417823a0  off_1417823A0
//   0x140b57ad0  sub_140B57AD0
//   0x1417823b8  aIdeV1Messages_0   "/:ide/v1/messages"
//   0x1417823d0  off_1417823D0
//   0x140b57680  sub_140B57680
//   0x1417823e8  aIdeV1Models_0   "/:ide/v1/models"
//   0x1417823f8  off_1417823F8
//   0x140b57f20  sub_140B57F20
//   0x141782410  aCodexV1Respons_0   "/codex/v1/responses/compact"
//   0x141782430  off_141782430
//   0x140b58090  sub_140B58090
//   0x141782448  aCodexRouterV1R_1   "/codex/router/v1/responses"
//   0x141782468  off_141782468
//   0x140b584e0  sub_140B584E0
//   0x141782480  aCodexRouterV1R_2   "/codex/router/v1/responses/compact"
//   0x1417824a8  off_1417824A8
//   0x140b58370  sub_140B58370
//   0x1417824c0  aCodexRouterV1I_1   "/codex/router/v1/images/generations"
//   0x1417824e8  off_1417824E8
//   0x140b58200  sub_140B58200
//   0x141782500  aCodexRouterV1I_2   "/codex/router/v1/images/edits"
//   0x141782520  off_141782520
//   0x140b577f0  sub_140B577F0
//   0x141782538  aCodexRouterV1H_0   "/codex/router/v1/health"
//   0x141782550  off_141782550
//   0x1404f2b60  sub_1404F2B60
//   0x1404f2240  sub_1404F2240
//   0x140669240  sub_140669240
//   0x1416c3400  sub_1416C3400
//   0x141781ec8  off_141781EC8
//   0x1416c3420  sub_1416C3420
//   0x141782568  off_141782568
//   0x1417822f8  off_1417822F8
//   0x141781100  off_141781100
//   0x1416c3000  sub_1416C3000
//   0x141783f80  aReadyPolledAft_0   "`Ready` polled after completion"
//   0x141783ff0  off_141783FF0
//   0x1414aaf50  sub_1414AAF50
//   0x141490720  sub_141490720
//   0x141782310  unk_141782310
//   0x140001660  sub_140001660
//   0x140018650  sub_140018650
//   0x1416c2d4b  sub_1416C2D4B
//   0x14146b840  sub_14146B840
//   0x1417816d6  aCouldNotResolv_0   "could not resolve to any address"
//   0x1413064d0  sub_1413064D0
//   0x1405dc7d0  sub_1405DC7D0
//   0x14054e3c0  sub_14054E3C0
//   0x141782580  off_141782580
//   0x1412e7580  sub_1412E7580
//   0x1412f2a80  sub_1412F2A80
//   0x1412f2740  sub_1412F2740
//   0x140fa2c80  sub_140FA2C80
//   0x140575f20  sub_140575F20
//   0x140574820  sub_140574820
//   0x140574db0  sub_140574DB0
//   0x1405de950  sub_1405DE950
//   0x141018b80  sub_141018B80
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14069E380(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // rax
  volatile signed __int64 *v7; // rdx
  volatile signed __int64 *v8; // rcx
  volatile signed __int64 *v9; // rax
  unsigned __int16 v10; // di
  unsigned int v11; // ebx
  __int64 v12; // r13
  char v13; // al
  volatile signed __int64 *v14; // rdx
  volatile signed __int64 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r14
  unsigned int v21; // edi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int64 v28; // rcx
  unsigned int v29; // r14d
  int v30; // r15d
  unsigned int v31; // eax
  __int64 v32; // r13
  unsigned int v33; // r12d
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int16 *v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  _BYTE *v43; // rdx
  volatile signed __int64 *v44; // rax
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // bl
  __int64 result; // rax
  __int64 v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r14
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int16 v58; // ax
  __int128 v59; // xmm0
  __int64 v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  signed __int64 v64; // rt0
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  __int64 v71; // rt0
  unsigned __int16 v72; // bx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rcx
  __int64 v78; // rax
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm2
  __int64 v82; // rax
  __int128 v83; // [rsp+30h] [rbp-50h] BYREF
  __int128 v84; // [rsp+40h] [rbp-40h]
  __int128 v85; // [rsp+50h] [rbp-30h]
  __int128 v86; // [rsp+60h] [rbp-20h]
  __int64 v87; // [rsp+70h] [rbp-10h]
  unsigned __int16 v88; // [rsp+80h] [rbp+0h]
  char v89; // [rsp+82h] [rbp+2h]
  __int64 v90; // [rsp+2D8h] [rbp+258h]
  int v91; // [rsp+2E0h] [rbp+260h]
  __int64 v92; // [rsp+2F8h] [rbp+278h]
  int v93; // [rsp+300h] [rbp+280h]
  __int64 v94; // [rsp+318h] [rbp+298h]
  int v95; // [rsp+320h] [rbp+2A0h]
  __int64 v96; // [rsp+368h] [rbp+2E8h]
  __int64 v97; // [rsp+3C8h] [rbp+348h]
  __int64 v98; // [rsp+3D0h] [rbp+350h]
  __int64 v99; // [rsp+3D8h] [rbp+358h]
  __int64 v100; // [rsp+3E0h] [rbp+360h]
  __int64 v101; // [rsp+3E8h] [rbp+368h]
  __int128 v102; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v103; // [rsp+400h] [rbp+380h]
  __int128 v104; // [rsp+410h] [rbp+390h]
  volatile signed __int64 *v105; // [rsp+420h] [rbp+3A0h]
  __int64 v106; // [rsp+428h] [rbp+3A8h]
  __int64 v107; // [rsp+430h] [rbp+3B0h]
  __int64 v108; // [rsp+438h] [rbp+3B8h]
  __int64 v109; // [rsp+440h] [rbp+3C0h]
  __int64 v110; // [rsp+448h] [rbp+3C8h]
  __int64 v111; // [rsp+450h] [rbp+3D0h]
  __int64 v112; // [rsp+458h] [rbp+3D8h]
  __int64 v113; // [rsp+460h] [rbp+3E0h]
  __int64 v114; // [rsp+468h] [rbp+3E8h]
  __int64 v115; // [rsp+470h] [rbp+3F0h]
  __int64 v116; // [rsp+478h] [rbp+3F8h]
  __int64 v117; // [rsp+480h] [rbp+400h]
  _QWORD *v118; // [rsp+488h] [rbp+408h]
  __int64 v119; // [rsp+490h] [rbp+410h]
  _QWORD *v120; // [rsp+498h] [rbp+418h]
  __int64 v121; // [rsp+4A0h] [rbp+420h]
  __int64 v122; // [rsp+4A8h] [rbp+428h]
  __int64 v123; // [rsp+4B0h] [rbp+430h]
  __int128 v124; // [rsp+4B8h] [rbp+438h] BYREF
  __int128 v125; // [rsp+4C8h] [rbp+448h]
  __int64 v126; // [rsp+4D8h] [rbp+458h]
  __int64 v127; // [rsp+4E0h] [rbp+460h]
  _BYTE *v128; // [rsp+4E8h] [rbp+468h]
  _BYTE *v129; // [rsp+4F0h] [rbp+470h]
  _BYTE *v130; // [rsp+4F8h] [rbp+478h]
  __int64 v131; // [rsp+508h] [rbp+488h]
  __int128 v132; // [rsp+510h] [rbp+490h] BYREF
  __int128 v133; // [rsp+520h] [rbp+4A0h]
  __int64 v134; // [rsp+530h] [rbp+4B0h]
  volatile signed __int64 *v135; // [rsp+538h] [rbp+4B8h] BYREF
  volatile signed __int64 *v136; // [rsp+540h] [rbp+4C0h] BYREF
  volatile signed __int64 *v137; // [rsp+548h] [rbp+4C8h] BYREF
  volatile signed __int64 *v138; // [rsp+550h] [rbp+4D0h] BYREF
  unsigned __int16 v139; // [rsp+558h] [rbp+4D8h]
  _QWORD *v140; // [rsp+560h] [rbp+4E0h]
  __int64 v141; // [rsp+568h] [rbp+4E8h]
  _QWORD v142[2]; // [rsp+570h] [rbp+4F0h] BYREF
  __int128 v143; // [rsp+580h] [rbp+500h]
  __int64 v144; // [rsp+590h] [rbp+510h]
  char v145; // [rsp+59Bh] [rbp+51Bh]
  char v146; // [rsp+59Ch] [rbp+51Ch]
  char v147; // [rsp+59Dh] [rbp+51Dh]
  char v148; // [rsp+59Eh] [rbp+51Eh]
  char v149; // [rsp+59Fh] [rbp+51Fh]
  char v150; // [rsp+5A0h] [rbp+520h]
  char v151; // [rsp+5A1h] [rbp+521h]
  char v152; // [rsp+5A2h] [rbp+522h]
  char v153; // [rsp+5A3h] [rbp+523h]
  char v154; // [rsp+5A4h] [rbp+524h]
  char v155; // [rsp+5A5h] [rbp+525h]
  char v156; // [rsp+5A6h] [rbp+526h]
  char v157; // [rsp+5A7h] [rbp+527h]
  __int64 v158; // [rsp+5A8h] [rbp+528h]
  __int64 v159; // [rsp+5B8h] [rbp+538h]
  __int64 v160; // [rsp+5C0h] [rbp+540h]
  char v161; // [rsp+5CFh] [rbp+54Fh]
  __int64 v162; // [rsp+5D0h] [rbp+550h]

  v162 = -2; /*0x14069e39b*/
  v4 = a2; /*0x14069e3a6*/
  v6 = *(unsigned __int8 *)(a2 + 244); /*0x14069e3ac*/
  v159 = a2; /*0x14069e3c1*/
  switch ( v6 ) /*0x14069e3c8*/
  {
    case 0LL: /*0x14069e3c8*/
      v7 = *(volatile signed __int64 **)a2; /*0x14069e3ca*/
      v8 = *(volatile signed __int64 **)(v4 + 8); /*0x14069e3ce*/
      v9 = *(volatile signed __int64 **)(v4 + 16); /*0x14069e3d3*/
      v10 = *(_WORD *)(v4 + 240); /*0x14069e3d8*/
      v11 = *(unsigned __int16 *)(v4 + 242); /*0x14069e3e1*/
      v12 = v4 + 24; /*0x14069e3ea*/
      *(_QWORD *)(v4 + 24) = *(_QWORD *)v4; /*0x14069e3ef*/
      *(_QWORD *)(v4 + 32) = v8; /*0x14069e3f4*/
      *(_QWORD *)(v4 + 40) = v9; /*0x14069e3f9*/
      *(_WORD *)(v4 + 224) = v10; /*0x14069e3fe*/
      *(_WORD *)(v4 + 226) = v11; /*0x14069e407*/
      v128 = (_BYTE *)(v4 + 228); /*0x14069e418*/
      *(_BYTE *)(v4 + 228) = 0; /*0x14069e41f*/
LABEL_5:
      *(_DWORD *)(v4 + 232) = 0; /*0x14069e478*/
      *(_DWORD *)(v4 + 229) = 0; /*0x14069e484*/
      *(_BYTE *)(v4 + 232) = 1; /*0x14069e490*/
      v138 = v7; /*0x14069e499*/
      *(_BYTE *)(v4 + 231) = 1; /*0x14069e4a0*/
      v137 = v8; /*0x14069e4a9*/
      *(_BYTE *)(v4 + 230) = 1; /*0x14069e4b0*/
      v136 = v9; /*0x14069e4b9*/
      v141 = v12; /*0x14069e4c0*/
      sub_14104B490(&v83); /*0x14069e4cb*/
      v94 = 300; /*0x14069e4d1*/
      v95 = 0; /*0x14069e4dc*/
      v90 = 30; /*0x14069e4e6*/
      v91 = 0; /*0x14069e4f1*/
      v96 = 10; /*0x14069e4fb*/
      v92 = 60; /*0x14069e506*/
      v93 = 0; /*0x14069e511*/
      v141 = v12; /*0x14069e51b*/
      v13 = sub_141042BD0(&v83); /*0x14069e526*/
      v15 = v14; /*0x14069e52c*/
      if ( (v13 & 1) != 0 ) /*0x14069e531*/
      {
        v158 = v12; /*0x14069e537*/
        *(_QWORD *)&v132 = v14; /*0x14069e53e*/
        *(_QWORD *)&v124 = &v132; /*0x14069e54c*/
        *((_QWORD *)&v124 + 1) = sub_141031F10; /*0x14069e55a*/
        sub_14149C0F0(&v102, &unk_141768210, &v124); /*0x14069e576*/
        v12 = v158; /*0x14069e57c*/
        v141 = v158; /*0x14069e583*/
        sub_1405E12D0(&v132); /*0x14069e591*/
        v15 = *((volatile signed __int64 **)&v102 + 1); /*0x14069e59e*/
        v16 = v102; /*0x14069e59e*/
        if ( (_QWORD)v102 != -1 ) /*0x14069e5a9*/
        {
          v17 = v103; /*0x14069e5ab*/
          goto LABEL_43; /*0x14069e5b2*/
        }
      }
      *(_BYTE *)(v159 + 229) = 1; /*0x14069e5c4*/
      v135 = v15; /*0x14069e5c7*/
      v123 = v12; /*0x14069e5ce*/
      build_upstream_direct_client(&v83); /*0x14069e5d9*/
      v15 = *((volatile signed __int64 **)&v83 + 1); /*0x14069e5e3*/
      v16 = v83; /*0x14069e5e3*/
      if ( (_QWORD)v83 != -1 ) /*0x14069e5eb*/
      {
        v17 = v84; /*0x14069e5ed*/
        v19 = v159; /*0x14069e5f1*/
        *(_BYTE *)(v159 + 235) = 0; /*0x14069e5f8*/
        if ( !*(_BYTE *)(v19 + 229) ) /*0x14069e5ff*/
          goto LABEL_43; /*0x14069e606*/
        goto LABEL_41; /*0x14069e606*/
      }
      v139 = v10; /*0x14069e655*/
      v22 = v159; /*0x14069e65c*/
      *(_BYTE *)(v159 + 235) = 1; /*0x14069e663*/
      v105 = v15; /*0x14069e66a*/
      *(_QWORD *)&v143 = v138; /*0x14069e678*/
      *((_QWORD *)&v143 + 1) = v137; /*0x14069e686*/
      v142[0] = v136; /*0x14069e694*/
      *(_DWORD *)(v22 + 229) = 0; /*0x14069e69b*/
      *(_QWORD *)&v83 = 1; /*0x14069e6ac*/
      *((_QWORD *)&v83 + 1) = 1; /*0x14069e6b4*/
      *(_QWORD *)&v84 = 0; /*0x14069e6bc*/
      BYTE8(v84) = 0; /*0x14069e6c4*/
      *(_QWORD *)&v85 = v135; /*0x14069e6c8*/
      nullsub_1(v18); /*0x14069e6cc*/
      v23 = sub_140001650(40, 8); /*0x14069e6db*/
      v158 = v12; /*0x14069e6e3*/
      if ( !v23 ) /*0x14069e6ea*/
        sub_1416C2D31(8, 40); /*0x14069ee45*/
      v24 = v85; /*0x14069e6f0*/
      *(_QWORD *)(v23 + 32) = v85; /*0x14069e6f4*/
      v25 = v83; /*0x14069e6f8*/
      *(_OWORD *)(v23 + 16) = v84; /*0x14069e700*/
      *(_OWORD *)v23 = v25; /*0x14069e704*/
      *(_QWORD *)&v132 = v23; /*0x14069e707*/
      *(_BYTE *)(v22 + 235) = 0; /*0x14069e70e*/
      *(_QWORD *)&v83 = 1; /*0x14069e715*/
      *((_QWORD *)&v83 + 1) = 1; /*0x14069e71d*/
      *(_QWORD *)&v84 = 0; /*0x14069e725*/
      BYTE8(v84) = 0; /*0x14069e72d*/
      *(_QWORD *)&v85 = v15; /*0x14069e731*/
      nullsub_1(v24); /*0x14069e735*/
      v26 = sub_140001650(40, 8); /*0x14069e744*/
      if ( !v26 ) /*0x14069e74c*/
        sub_1416C2D31(8, 40); /*0x14069ee5a*/
      *(_QWORD *)(v26 + 32) = v85; /*0x14069e756*/
      v27 = v83; /*0x14069e75a*/
      *(_OWORD *)(v26 + 16) = v84; /*0x14069e762*/
      *(_OWORD *)v26 = v27; /*0x14069e766*/
      *(_QWORD *)&v124 = v26; /*0x14069e769*/
      sub_140FFA6E0(&v83); /*0x14069e774*/
      v29 = v83; /*0x14069e77a*/
      v30 = ((int)v83 >> 13) - 1; /*0x14069e784*/
      v21 = 0; /*0x14069e788*/
      if ( (int)v83 >> 13 <= 0 ) /*0x14069e78c*/
      {
        v31 = (1 - ((int)v83 >> 13)) / 0x190u + 1; /*0x14069e7a0*/
        v28 = 400 * v31; /*0x14069e7a2*/
        v30 += v28; /*0x14069e7a8*/
        v21 = -146097 * v31; /*0x14069e7ab*/
      }
      v32 = DWORD1(v83); /*0x14069e7b1*/
      v33 = DWORD2(v83); /*0x14069e7b5*/
      nullsub_1(v28); /*0x14069e7b9*/
      v34 = (_QWORD *)sub_140001650(24, 8); /*0x14069e7c8*/
      if ( !v34 ) /*0x14069e7d0*/
        sub_1416C2D31(8, 24); /*0x14069ee6f*/
      *v34 = 1; /*0x14069e83b*/
      v34[1] = 1; /*0x14069e842*/
      v34[2] = 1000 /*0x14069e84a*/
             * (v32
              + 86400LL
              * (int)(((v30 / 100) >> 2) + v21 + ((v29 >> 4) & 0x1FF) - v30 / 100 + ((1461 * v30) >> 2) - 719163))
             + v33 / 0xF4240uLL;
      *(_BYTE *)(v159 + 234) = 1; /*0x14069e855*/
      v102 = v143; /*0x14069e863*/
      *(_QWORD *)&v103 = v142[0]; /*0x14069e87f*/
      *((_QWORD *)&v103 + 1) = v132; /*0x14069e88d*/
      *(_QWORD *)&v104 = v124; /*0x14069e89b*/
      *((_QWORD *)&v104 + 1) = v34; /*0x14069e8a2*/
      v144 = v158; /*0x14069e8b0*/
      v35 = sub_14056E1C0(); /*0x14069e8b7*/
      LOWORD(v21) = v139; /*0x14069e8bd*/
      *(_QWORD *)&v124 = v35; /*0x14069e8c4*/
      v157 = 1; /*0x14069e8cb*/
      v160 = v35; /*0x14069e8d6*/
      sub_140B57960(&v83); /*0x14069e8dd*/
      v157 = 0; /*0x14069e8e3*/
      *(_QWORD *)&v132 = sub_14056F600( /*0x14069e914*/
                           v160,
                           (unsigned int)aAimamiHealth,
                           16,
                           (unsigned int)&v83,
                           (__int64)&off_141782338);
      v156 = 1; /*0x14069e91b*/
      v160 = v132; /*0x14069e926*/
      sub_140B57DB0(&v83); /*0x14069e92d*/
      v156 = 0; /*0x14069e933*/
      v142[0] = sub_14056F600(v160, (unsigned int)aIdeV1ChatCompl_0, 25, (unsigned int)&v83, (__int64)&off_141782370); /*0x14069e964*/
      v155 = 1; /*0x14069e96b*/
      v160 = v142[0]; /*0x14069e976*/
      sub_140B57C40(&v83); /*0x14069e97d*/
      v155 = 0; /*0x14069e983*/
      *((_QWORD *)&v143 + 1) = sub_14056F600( /*0x14069e9b4*/
                                 v160,
                                 (unsigned int)aIdeV1Responses_0,
                                 18,
                                 (unsigned int)&v83,
                                 (__int64)&off_1417823A0);
      v154 = 1; /*0x14069e9bb*/
      v160 = *((_QWORD *)&v143 + 1); /*0x14069e9c6*/
      sub_140B57AD0(&v83); /*0x14069e9cd*/
      v154 = 0; /*0x14069e9d3*/
      *(_QWORD *)&v143 = sub_14056F600( /*0x14069ea04*/
                           v160,
                           (unsigned int)aIdeV1Messages_0,
                           17,
                           (unsigned int)&v83,
                           (__int64)&off_1417823D0);
      v153 = 1; /*0x14069ea0b*/
      v160 = v143; /*0x14069ea16*/
      sub_140B57680(&v83); /*0x14069ea1d*/
      v153 = 0; /*0x14069ea23*/
      v131 = sub_14056F600(v160, (unsigned int)aIdeV1Models_0, 15, (unsigned int)&v83, (__int64)&off_1417823F8); /*0x14069ea54*/
      v152 = 1; /*0x14069ea5b*/
      v160 = v131; /*0x14069ea66*/
      sub_140B57F20(&v83); /*0x14069ea6d*/
      v152 = 0; /*0x14069ea73*/
      v97 = sub_14056F600(v160, (unsigned int)aCodexV1Respons_0, 27, (unsigned int)&v83, (__int64)&off_141782430); /*0x14069eaa4*/
      v151 = 1; /*0x14069eaab*/
      v160 = v97; /*0x14069eab6*/
      sub_140B58090(&v83); /*0x14069eabd*/
      v151 = 0; /*0x14069eac3*/
      v98 = sub_14056F600(v160, (unsigned int)aCodexRouterV1R_1, 26, (unsigned int)&v83, (__int64)&off_141782468); /*0x14069eaf4*/
      v150 = 1; /*0x14069eafb*/
      v160 = v98; /*0x14069eb06*/
      sub_140B584E0(&v83); /*0x14069eb0d*/
      v150 = 0; /*0x14069eb13*/
      v99 = sub_14056F600(v160, (unsigned int)aCodexRouterV1R_2, 34, (unsigned int)&v83, (__int64)&off_1417824A8); /*0x14069eb44*/
      v149 = 1; /*0x14069eb4b*/
      v160 = v99; /*0x14069eb56*/
      sub_140B58370(&v83); /*0x14069eb5d*/
      v149 = 0; /*0x14069eb63*/
      v100 = sub_14056F600(v160, (unsigned int)aCodexRouterV1I_1, 35, (unsigned int)&v83, (__int64)&off_1417824E8); /*0x14069eb94*/
      v148 = 1; /*0x14069eb9b*/
      v160 = v100; /*0x14069eba6*/
      sub_140B58200(&v83); /*0x14069ebad*/
      v148 = 0; /*0x14069ebb3*/
      v101 = sub_14056F600(v160, (unsigned int)aCodexRouterV1I_2, 29, (unsigned int)&v83, (__int64)&off_141782520); /*0x14069ebe4*/
      v147 = 1; /*0x14069ebeb*/
      v160 = v101; /*0x14069ebf6*/
      sub_140B577F0(&v83); /*0x14069ebfd*/
      v147 = 0; /*0x14069ec03*/
      v36 = sub_14056F600(v160, (unsigned int)aCodexRouterV1H_0, 23, (unsigned int)&v83, (__int64)&off_141782550); /*0x14069ec2e*/
      v12 = v158; /*0x14069ec34*/
      v144 = v158; /*0x14069ec3b*/
      v37 = sub_1404F2B60(v36, 1, 0x20000000); /*0x14069ec50*/
      *(_BYTE *)(v159 + 234) = 0; /*0x14069ec5d*/
      v85 = v104; /*0x14069ec79*/
      v84 = v103; /*0x14069ec7d*/
      v83 = v102; /*0x14069ec81*/
      v144 = v12; /*0x14069ec85*/
      v38 = sub_1404F2240(v37, &v83); /*0x14069ec93*/
      v4 = v159; /*0x14069ec99*/
      *(_QWORD *)(v159 + 48) = v38; /*0x14069eca0*/
      *(_BYTE *)(v4 + 233) = 1; /*0x14069eca5*/
      *(_WORD *)(v4 + 218) = v21; /*0x14069ecae*/
      *(_WORD *)(v4 + 220) = v11; /*0x14069ecb7*/
      v130 = (_BYTE *)(v4 + 223); /*0x14069ecc8*/
      *(_BYTE *)(v4 + 223) = 0; /*0x14069eccf*/
      v20 = (_QWORD *)(v4 + 56); /*0x14069ecd8*/
LABEL_19:
      *(_BYTE *)(v4 + 222) = 1; /*0x14069ecdd*/
      *(_QWORD *)(v4 + 120) = -1; /*0x14069ece6*/
      v119 = v12; /*0x14069ecef*/
      v118 = v20; /*0x14069ecf6*/
      sub_140669240(&v83, v21, v11); /*0x14069ed06*/
      v39 = *((__int16 **)&v83 + 1); /*0x14069ed10*/
      v40 = v83; /*0x14069ed10*/
      v41 = *((_QWORD *)&v83 + 1) + 2 * v84; /*0x14069ed18*/
      v4 = v159; /*0x14069ed1c*/
      *(_QWORD *)(v159 + 56) = *((_QWORD *)&v83 + 1); /*0x14069ed23*/
      *(_QWORD *)(v4 + 64) = v39; /*0x14069ed28*/
      *(_OWORD *)(v4 + 72) = __PAIR128__(v41, v40); /*0x14069ed2d*/
      if ( v39 == (__int16 *)v41 ) /*0x14069ed3a*/
        goto LABEL_20; /*0x14069ed3a*/
      break; /*0x14069ed3a*/
    case 1LL: /*0x14069e3c8*/
      sub_1416C3400(&off_141781EC8, a2, a3, a4); /*0x14069ee8f*/
    case 2LL: /*0x14069e3c8*/
      sub_1416C3420(&off_141781EC8, a2, a3, a4); /*0x14069ee81*/
    case 3LL: /*0x14069e3c8*/
      v128 = (_BYTE *)(a2 + 228); /*0x14069e432*/
      v12 = a2 + 24; /*0x14069e442*/
      switch ( *(_BYTE *)(a2 + 228) ) /*0x14069e455*/
      {
        case 0: /*0x14069e455*/
          v7 = *(volatile signed __int64 **)(a2 + 24); /*0x14069e457*/
          v8 = *(volatile signed __int64 **)(v4 + 32); /*0x14069e45c*/
          v9 = *(volatile signed __int64 **)(v4 + 40); /*0x14069e461*/
          v10 = *(_WORD *)(v4 + 224); /*0x14069e466*/
          v11 = *(unsigned __int16 *)(v4 + 226); /*0x14069e46f*/
          goto LABEL_5; /*0x14069e46f*/
        case 1: /*0x14069e455*/
          v108 = a2 + 24; /*0x14069eeaf*/
          sub_1416C3400(&off_141782568, a2, a3, a4); /*0x14069eebd*/
        case 2: /*0x14069e455*/
          v108 = a2 + 24; /*0x14069ee96*/
          sub_1416C3420(&off_141782568, a2, a3, a4); /*0x14069eea4*/
        case 3: /*0x14069e455*/
          v130 = (_BYTE *)(a2 + 223); /*0x14069e619*/
          v20 = (_QWORD *)(a2 + 56); /*0x14069e629*/
          switch ( *(_BYTE *)(a2 + 223) ) /*0x14069e63c*/
          {
            case 0: /*0x14069e63c*/
              v21 = *(unsigned __int16 *)(a2 + 218); /*0x14069e63e*/
              v11 = *(unsigned __int16 *)(a2 + 220); /*0x14069e647*/
              break; /*0x14069e650*/
            case 1: /*0x14069e63c*/
              v110 = a2 + 24; /*0x14069eee5*/
              v109 = a2 + 56; /*0x14069eeec*/
              sub_1416C3400(&off_1417822F8, a2, a3, a4); /*0x14069eefa*/
            case 2: /*0x14069e63c*/
              v110 = a2 + 24; /*0x14069eec8*/
              v109 = a2 + 56; /*0x14069eecf*/
              sub_1416C3420(&off_1417822F8, a2, a3, a4); /*0x14069eedd*/
            case 3: /*0x14069e63c*/
              v43 = (_BYTE *)(a2 + 208); /*0x14069ed91*/
              switch ( *(_BYTE *)(v4 + 208) ) /*0x14069edb0*/
              {
                case 0: /*0x14069edb0*/
                  goto LABEL_76;
                case 1: /*0x14069edb0*/
                  v117 = v4 + 24; /*0x14069edb2*/
                  v116 = v4 + 56; /*0x14069edb9*/
                  v115 = v4 + 208; /*0x14069edc0*/
                  sub_1416C3400(&off_141781100, v43, a3, a4); /*0x14069edce*/
                case 2: /*0x14069edb0*/
                  v117 = v4 + 24; /*0x14069ef02*/
                  v116 = v4 + 56; /*0x14069ef09*/
                  v115 = v4 + 208; /*0x14069ef10*/
                  sub_1416C3420(&off_141781100, v43, a3, a4); /*0x14069ef1e*/
                case 3: /*0x14069edb0*/
                  goto LABEL_77;
              }
          }
          goto LABEL_19; /*0x14069e650*/
      }
  }
  while ( 1 ) /*0x14069f31c*/
  {
    *(_QWORD *)(v4 + 64) = v39 + 1; /*0x14069f31c*/
    v58 = *v39; /*0x14069f321*/
    *(_WORD *)(v4 + 216) = v58; /*0x14069f324*/
    *(_DWORD *)(v4 + 90) = 16777343; /*0x14069f32d*/
    *(_WORD *)(v4 + 94) = v58; /*0x14069f336*/
    *(_WORD *)(v4 + 88) = 0; /*0x14069f33c*/
    *(_OWORD *)(v4 + 160) = *(_OWORD *)(v4 + 104); /*0x14069f34a*/
    *(_WORD *)(v4 + 144) = *(_WORD *)(v4 + 88); /*0x14069f359*/
    *(_DWORD *)(v4 + 146) = *(_DWORD *)(v4 + 90); /*0x14069f367*/
    *(_WORD *)(v4 + 150) = *(_WORD *)(v4 + 94); /*0x14069f375*/
    *(_QWORD *)(v4 + 152) = *(_QWORD *)(v4 + 96); /*0x14069f383*/
    v43 = (_BYTE *)(v4 + 208); /*0x14069f38b*/
    *(_BYTE *)(v4 + 208) = 0; /*0x14069f393*/
LABEL_76:
    v59 = *(_OWORD *)(v4 + 144); /*0x14069f39c*/
    *(_OWORD *)(v4 + 192) = *(_OWORD *)(v4 + 160); /*0x14069f3ae*/
    *(_OWORD *)(v4 + 176) = v59; /*0x14069f3b7*/
LABEL_77:
    v140 = v20; /*0x14069f3c0*/
    v54 = *(unsigned __int16 *)(v4 + 176); /*0x14069f3c7*/
    *(_WORD *)(v4 + 176) = -2; /*0x14069f3d0*/
    if ( (_WORD)v54 == 0xFFFE ) /*0x14069f3df*/
    {
      v129 = v43; /*0x14069f3e5*/
      v158 = v12; /*0x14069f3ec*/
      sub_1416C3000(aReadyPolledAft_0, 31, &off_141783FF0); /*0x14069f406*/
    }
    v158 = v12; /*0x14069f070*/
    v52 = *(_QWORD *)(v4 + 184); /*0x14069f077*/
    if ( (_WORD)v54 != 0xFFFF ) /*0x14069f083*/
      break; /*0x14069f083*/
LABEL_71:
    *(_BYTE *)(v4 + 208) = 1; /*0x14069f228*/
    v142[0] = v52; /*0x14069f231*/
    *(_QWORD *)&v83 = v4 + 88; /*0x14069f23d*/
    *((_QWORD *)&v83 + 1) = sub_1414AAF50; /*0x14069f248*/
    *(_QWORD *)&v84 = v142; /*0x14069f253*/
    *((_QWORD *)&v84 + 1) = sub_141490720; /*0x14069f25e*/
    sub_14149C0F0(&v124, &unk_141782310, &v83); /*0x14069f274*/
    v132 = v124; /*0x14069f281*/
    *(_QWORD *)&v133 = v125; /*0x14069f28f*/
    v57 = *(_QWORD *)(v4 + 120); /*0x14069f29b*/
    if ( v57 != -1 && v57 ) /*0x14069f2a9*/
      sub_140001660(*(_QWORD *)(v4 + 128), v57, 1); /*0x14069f2b9*/
    *(_BYTE *)(v4 + 222) = 1; /*0x14069f2be*/
    *(_QWORD *)(v4 + 136) = v133; /*0x14069f2ce*/
    *(_OWORD *)(v4 + 120) = v132; /*0x14069f2d9*/
    v12 = v158; /*0x14069f2dc*/
    v121 = v158; /*0x14069f2e3*/
    v20 = v140; /*0x14069f2ea*/
    v120 = v140; /*0x14069f2f1*/
    sub_140018650(v142); /*0x14069f2ff*/
    v39 = *(__int16 **)(v4 + 64); /*0x14069f305*/
    v41 = *(_QWORD *)(v4 + 80); /*0x14069f30a*/
    if ( v39 == (__int16 *)v41 ) /*0x14069f312*/
    {
LABEL_20:
      v42 = v20[2]; /*0x14069ed40*/
      if ( v42 ) /*0x14069ed47*/
        sub_140001660(*v20, 2 * v42, 2); /*0x14069ed55*/
      v140 = v20; /*0x14069ed5a*/
      *(_BYTE *)(v4 + 222) = 0; /*0x14069ed61*/
      v16 = *(_QWORD *)(v4 + 120); /*0x14069ed6a*/
      v158 = v12; /*0x14069ed73*/
      if ( v16 == -1 ) /*0x14069ed7a*/
      {
        nullsub_1(v41); /*0x14069edd9*/
        v16 = 38; /*0x14069edde*/
        v44 = (volatile signed __int64 *)sub_140001650(38, 1); /*0x14069edee*/
        if ( !v44 ) /*0x14069edf6*/
        {
          v119 = v12; /*0x14069ef26*/
          v118 = v140; /*0x14069ef34*/
          sub_1416C2D4B(1, 38); /*0x14069ef45*/
        }
        v15 = v44; /*0x14069edfc*/
        qmemcpy((void *)v44, "no free port available for relay proxy", 38); /*0x14069ee11*/
        v17 = 38; /*0x14069ee22*/
      }
      else
      {
        v15 = *(volatile signed __int64 **)(v4 + 128); /*0x14069ed7c*/
        v17 = *(_QWORD *)(v4 + 136); /*0x14069ed84*/
      }
      *(_BYTE *)(v4 + 222) = 0; /*0x14069ee27*/
      v45 = 2; /*0x14069ee30*/
      goto LABEL_88; /*0x14069ee36*/
    }
  }
  v129 = v43; /*0x14069f089*/
  WORD6(v143) = *(_WORD *)(v4 + 182); /*0x14069f099*/
  DWORD2(v143) = *(_DWORD *)(v4 + 178); /*0x14069f0a8*/
  v132 = *(_OWORD *)(v4 + 192); /*0x14069f0b7*/
  v142[0] = 0; /*0x14069f0be*/
  v53 = 0; /*0x14069f0d0*/
  while ( 1 ) /*0x14069f10b*/
  {
    v55 = v53; /*0x14069f10b*/
    v139 = v54; /*0x14069f112*/
    if ( (_WORD)v54 == 2 ) /*0x14069f119*/
    {
      if ( !v53 ) /*0x14069f1fa*/
      {
        v122 = 0; /*0x14069f1fc*/
        LOBYTE(v54) = 20; /*0x14069f214*/
        v55 = sub_14146B840(v54, aCouldNotResolv_0, 32); /*0x14069f21b*/
      }
      v52 = v55; /*0x14069f21e*/
      v4 = v159; /*0x14069f221*/
      goto LABEL_71; /*0x14069f221*/
    }
    LOWORD(v124) = v54; /*0x14069f11f*/
    WORD3(v124) = WORD6(v143); /*0x14069f12d*/
    *(_DWORD *)((char *)&v124 + 2) = DWORD2(v143); /*0x14069f138*/
    *((_QWORD *)&v124 + 1) = v52; /*0x14069f13c*/
    v125 = v132; /*0x14069f14a*/
    v122 = v53; /*0x14069f14f*/
    sub_1413064D0(&v83, &v124); /*0x14069f15c*/
    v45 = v83; /*0x14069f162*/
    if ( (_QWORD)v83 != 2 ) /*0x14069f16a*/
      break; /*0x14069f16a*/
    v53 = *((_QWORD *)&v83 + 1); /*0x14069f170*/
    if ( v55 ) /*0x14069f177*/
    {
      v54 = (unsigned int)(v55 & 3) - 2; /*0x14069f17f*/
      if ( (unsigned int)v54 >= 2 && (v55 & 3) != 0 ) /*0x14069f18e*/
      {
        v106 = *((_QWORD *)&v83 + 1); /*0x14069f194*/
        v107 = v55 - 1; /*0x14069f19f*/
        v160 = *(_QWORD *)(v55 - 1); /*0x14069f1aa*/
        v127 = *(_QWORD *)(v55 + 7); /*0x14069f1b5*/
        if ( *(_QWORD *)v127 ) /*0x14069f1bc*/
          (*(void (__fastcall **)(__int64, _QWORD))v127)(v160, *((_QWORD *)&v83 + 1)); /*0x14069f1cb*/
        v56 = *(_QWORD *)(v127 + 8); /*0x14069f1dc*/
        if ( v56 ) /*0x14069f1e3*/
          sub_140001660(v160, v56, *(_QWORD *)(v127 + 16)); /*0x14069f1ed*/
        sub_140001660(v107, 24, 8); /*0x14069f0f1*/
        v53 = v106; /*0x14069f0f6*/
      }
    }
    v142[0] = v53; /*0x14069f100*/
    LOWORD(v54) = 2; /*0x14069f107*/
  }
  if ( v55 ) /*0x14069f414*/
    sub_140018650(v142); /*0x14069f41d*/
  v16 = *((_QWORD *)&v83 + 1); /*0x14069f423*/
  v17 = *((_QWORD *)&v84 + 1); /*0x14069f42b*/
  v15 = (volatile signed __int64 *)v84; /*0x14069f42b*/
  v12 = v85; /*0x14069f42f*/
  *v129 = 1; /*0x14069f43a*/
  if ( v45 != -1 ) /*0x14069f441*/
  {
    v139 = *(_WORD *)(v159 + 216); /*0x14069f455*/
    v60 = v140[2]; /*0x14069f463*/
    if ( v60 ) /*0x14069f46a*/
      sub_140001660(*v140, 2 * v60, 2); /*0x14069f478*/
    v61 = v159; /*0x14069f47d*/
    v62 = *(_QWORD *)(v159 + 120); /*0x14069f484*/
    if ( v62 != -1 && v62 ) /*0x14069f491*/
      sub_140001660(*(_QWORD *)(v159 + 128), v62, 1); /*0x14069f4a0*/
    *(_BYTE *)(v61 + 222) = 0; /*0x14069f4a5*/
LABEL_88:
    *v130 = 1; /*0x14069f4ac*/
    v114 = v158; /*0x14069f4bd*/
    sub_1405DC7D0(v140); /*0x14069f4cb*/
    if ( v45 != 2 ) /*0x14069f4d5*/
    {
      *(_QWORD *)&v132 = v45; /*0x14069f552*/
      *((_QWORD *)&v132 + 1) = v16; /*0x14069f559*/
      *(_QWORD *)&v133 = v15; /*0x14069f560*/
      *((_QWORD *)&v133 + 1) = v17; /*0x14069f567*/
      v134 = v12; /*0x14069f56e*/
      *(_QWORD *)&v83 = 1; /*0x14069f575*/
      *((_QWORD *)&v83 + 1) = 1; /*0x14069f57d*/
      *(_QWORD *)&v86 = 0; /*0x14069f585*/
      BYTE8(v86) = 0; /*0x14069f58d*/
      nullsub_1(v63); /*0x14069f591*/
      v66 = sub_140001650(64, 8); /*0x14069f5a0*/
      if ( !v66 ) /*0x14069f5a8*/
        sub_1416C2D31(8, 64); /*0x14069f7b0*/
      v68 = v83; /*0x14069f5ae*/
      v69 = v84; /*0x14069f5b2*/
      v70 = v85; /*0x14069f5b6*/
      *(_OWORD *)(v66 + 48) = v86; /*0x14069f5be*/
      *(_OWORD *)(v66 + 32) = v70; /*0x14069f5c2*/
      *(_OWORD *)(v66 + 16) = v69; /*0x14069f5c6*/
      *(_OWORD *)v66 = v68; /*0x14069f5ca*/
      v71 = _InterlockedIncrement64((volatile signed __int64 *)v66); /*0x14069f5cd*/
      v72 = v139; /*0x14069f5d1*/
      if ( v71 <= 0 ) /*0x14069f5d8*/
        goto LABEL_40; /*0x14069f5d8*/
      v131 = v66; /*0x14069f5de*/
      *(_QWORD *)&v143 = v66; /*0x14069f5e5*/
      nullsub_1(v67); /*0x14069f5ec*/
      v73 = sub_140001650(24, 8); /*0x14069f5fb*/
      v74 = v159; /*0x14069f603*/
      if ( !v73 ) /*0x14069f60a*/
      {
        v146 = 1; /*0x14069f7bb*/
        v145 = 1; /*0x14069f7c2*/
        sub_1416C2D31(8, 24); /*0x14069f7d3*/
      }
      *(_QWORD *)v73 = 1; /*0x14069f610*/
      *(_QWORD *)(v73 + 8) = 1; /*0x14069f617*/
      *(_BYTE *)(v73 + 16) = 1; /*0x14069f61f*/
      *((_QWORD *)&v143 + 1) = v73; /*0x14069f623*/
      if ( _InterlockedIncrement64((volatile signed __int64 *)v73) <= 0 ) /*0x14069f62e*/
LABEL_40:
        BUG(); /*0x14069ef4d*/
      *(_BYTE *)(v74 + 233) = 0; /*0x14069f634*/
      *(_QWORD *)&v85 = v134; /*0x14069f642*/
      v84 = v133; /*0x14069f654*/
      v83 = v132; /*0x14069f658*/
      *((_QWORD *)&v85 + 1) = *(_QWORD *)(v74 + 48); /*0x14069f660*/
      *((_QWORD *)&v86 + 1) = v143; /*0x14069f66b*/
      *(_QWORD *)&v86 = v73; /*0x14069f66f*/
      v88 = v72; /*0x14069f673*/
      v89 = 0; /*0x14069f677*/
      v161 = 1; /*0x14069f67b*/
      v75 = sub_14054E3C0(&v83, &off_141782580); /*0x14069f693*/
      v161 = 1; /*0x14069f696*/
      if ( (unsigned __int8)sub_1412F2A80(v75) ) /*0x14069f6a0*/
      {
        v161 = 1; /*0x14069f6aa*/
        sub_1412E7580(v75); /*0x14069f6b4*/
      }
      v76 = v131; /*0x14069f6ba*/
      v142[0] = 1; /*0x14069f6c1*/
      v142[1] = v131; /*0x14069f6cc*/
      sub_1412F2740(&v124, 1); /*0x14069f6df*/
      *(_QWORD *)&v86 = v126; /*0x14069f6ec*/
      v85 = v125; /*0x14069f6fe*/
      v84 = v124; /*0x14069f702*/
      *(_QWORD *)&v83 = 1; /*0x14069f706*/
      *((_QWORD *)&v83 + 1) = 1; /*0x14069f70e*/
      *((_QWORD *)&v86 + 1) = 1; /*0x14069f716*/
      v87 = v76; /*0x14069f71e*/
      nullsub_1(v77); /*0x14069f722*/
      v78 = sub_140001650(72, 8); /*0x14069f731*/
      if ( !v78 ) /*0x14069f739*/
        sub_1416C2D31(8, 72); /*0x14069f7e8*/
      v16 = v78; /*0x14069f73f*/
      *(_QWORD *)(v78 + 64) = v87; /*0x14069f746*/
      v79 = v83; /*0x14069f74a*/
      v80 = v84; /*0x14069f74e*/
      v81 = v85; /*0x14069f752*/
      *(_OWORD *)(v78 + 48) = v86; /*0x14069f75a*/
      *(_OWORD *)(v78 + 32) = v81; /*0x14069f75f*/
      *(_OWORD *)(v78 + 16) = v80; /*0x14069f764*/
      *(_OWORD *)v78 = v79; /*0x14069f769*/
      v15 = *((volatile signed __int64 **)&v143 + 1); /*0x14069f76d*/
      v17 = v72; /*0x14069f774*/
      v82 = v159; /*0x14069f777*/
      *(_WORD *)(v159 + 233) = 0; /*0x14069f77e*/
      *(_BYTE *)(v82 + 235) = 0; /*0x14069f787*/
      *(_DWORD *)(v82 + 229) = 0; /*0x14069f78e*/
      v49 = 0; /*0x14069f798*/
      v12 = v158; /*0x14069f79a*/
      goto LABEL_53; /*0x14069f7a1*/
    }
    v64 = _InterlockedDecrement64(*(volatile signed __int64 **)(v159 + 48)); /*0x14069f4e2*/
    v12 = v158; /*0x14069f4e6*/
    if ( !v64 ) /*0x14069f4ed*/
    {
      v144 = v158; /*0x14069f4fa*/
      sub_140FA2C80(v159 + 48); /*0x14069f501*/
    }
    v65 = v159; /*0x14069f507*/
    *(_WORD *)(v159 + 233) = 0; /*0x14069f50e*/
    *(_BYTE *)(v65 + 235) = 0; /*0x14069f517*/
    if ( !*(_BYTE *)(v65 + 229) ) /*0x14069f51e*/
    {
LABEL_43:
      v46 = v159; /*0x14069ef70*/
      *(_BYTE *)(v159 + 229) = 0; /*0x14069ef77*/
      if ( *(_BYTE *)(v46 + 230) && !_InterlockedDecrement64(v136) ) /*0x14069ef8e*/
      {
        v113 = v12; /*0x14069ef94*/
        sub_140575F20(&v136); /*0x14069efa2*/
      }
      v47 = v159; /*0x14069efa8*/
      *(_BYTE *)(v159 + 230) = 0; /*0x14069efaf*/
      if ( *(_BYTE *)(v47 + 231) && !_InterlockedDecrement64(v137) ) /*0x14069efc6*/
      {
        v112 = v12; /*0x14069efcc*/
        sub_140574820(&v137); /*0x14069efda*/
      }
      v48 = v159; /*0x14069efe0*/
      *(_BYTE *)(v159 + 231) = 0; /*0x14069efe7*/
      if ( *(_BYTE *)(v48 + 232) && !_InterlockedDecrement64(v138) ) /*0x14069effe*/
      {
        v111 = v12; /*0x14069f004*/
        sub_140574DB0(&v138); /*0x14069f012*/
      }
      *(_BYTE *)(v159 + 232) = 0; /*0x14069f01f*/
      v49 = 1; /*0x14069f026*/
LABEL_53:
      *a1 = v49; /*0x14069f02b*/
      a1[1] = v16; /*0x14069f02e*/
      a1[2] = (__int64)v15; /*0x14069f032*/
      a1[3] = v17; /*0x14069f036*/
      *v128 = 1; /*0x14069f041*/
      v50 = 1; /*0x14069f044*/
      sub_1405DE950(v12); /*0x14069f049*/
      goto LABEL_54; /*0x14069f049*/
    }
LABEL_41:
    if ( !_InterlockedDecrement64(v135) ) /*0x14069ef56*/
    {
      v141 = v12; /*0x14069ef5c*/
      sub_141018B80(&v135); /*0x14069ef6a*/
    }
    goto LABEL_43; /*0x14069ef6a*/
  }
  *v130 = 3; /*0x14069f537*/
  *v128 = 3; /*0x14069f541*/
  *a1 = 2; /*0x14069f544*/
  v50 = 3; /*0x14069f54b*/
LABEL_54:
  result = v159; /*0x14069f04f*/
  *(_BYTE *)(v159 + 244) = v50; /*0x14069f056*/
  return result; /*0x14069f05c*/
}
