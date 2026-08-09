// module: core::relay::proxy_server, core::relay::manager (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14088a5c0  size: 0x14ae  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Route-table builder, one of four near-identical instantiations (see sub_140588900/sub_14069e380):
//   registers the same proxy route set for this listener variant; evidence modules include
//   core::relay::manager.
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
//   0x141795e3b  aAimamiHealth_0   "/__aimami/health"
//   0x141795e50  off_141795E50
//   0x140b57db0  sub_140B57DB0
//   0x141795e68  aIdeV1ChatCompl_1   "/:ide/v1/chat/completions"
//   0x141795e88  off_141795E88
//   0x140b57c40  sub_140B57C40
//   0x141795ea0  aIdeV1Responses_1   "/:ide/v1/responses"
//   0x141795eb8  off_141795EB8
//   0x140b57ad0  sub_140B57AD0
//   0x141795ed0  aIdeV1Messages_1   "/:ide/v1/messages"
//   0x141795ee8  off_141795EE8
//   0x140b57680  sub_140B57680
//   0x141795f00  aIdeV1Models_1   "/:ide/v1/models"
//   0x141795f10  off_141795F10
//   0x140b57f20  sub_140B57F20
//   0x141795f28  aCodexV1Respons_1   "/codex/v1/responses/compact"
//   0x141795f48  off_141795F48
//   0x140b58090  sub_140B58090
//   0x141795f60  aCodexRouterV1R_3   "/codex/router/v1/responses"
//   0x141795f80  off_141795F80
//   0x140b584e0  sub_140B584E0
//   0x141795f98  aCodexRouterV1R_4   "/codex/router/v1/responses/compact"
//   0x141795fc0  off_141795FC0
//   0x140b58370  sub_140B58370
//   0x141795fd8  aCodexRouterV1I_3   "/codex/router/v1/images/generations"
//   0x141796000  off_141796000
//   0x140b58200  sub_140B58200
//   0x141796018  aCodexRouterV1I_4   "/codex/router/v1/images/edits"
//   0x141796038  off_141796038
//   0x140b577f0  sub_140B577F0
//   0x141796050  aCodexRouterV1H_1   "/codex/router/v1/health"
//   0x141796068  off_141796068
//   0x1404f2b60  sub_1404F2B60
//   0x1404f2240  sub_1404F2240
//   0x140669240  sub_140669240
//   0x1416c3400  sub_1416C3400
//   0x1417956d0  off_1417956D0
//   0x1416c3420  sub_1416C3420
//   0x141796080  off_141796080
//   0x141795e10  off_141795E10
//   0x141794a80  off_141794A80
//   0x1416c3000  sub_1416C3000
//   0x1417995fc  aReadyPolledAft_2   "`Ready` polled after completion"
//   0x141799670  off_141799670
//   0x1414aaf50  sub_1414AAF50
//   0x141490720  sub_141490720
//   0x141795e28  unk_141795E28
//   0x140001660  sub_140001660
//   0x140018650  sub_140018650
//   0x1416c2d4b  sub_1416C2D4B
//   0x14146b840  sub_14146B840
//   0x141794e70  aCouldNotResolv_1   "could not resolve to any address"
//   0x1413064d0  sub_1413064D0
//   0x1405dc7d0  sub_1405DC7D0
//   0x14054e3c0  sub_14054E3C0
//   0x141796098  off_141796098
//   0x1412e7580  sub_1412E7580
//   0x1412f2a80  sub_1412F2A80
//   0x1412f2740  sub_1412F2740
//   0x140fa2c80  sub_140FA2C80
//   0x140575f20  sub_140575F20
//   0x140574820  sub_140574820
//   0x140574db0  sub_140574DB0
//   0x1405de950  sub_1405DE950
//   0x141018b80  sub_141018B80
//   0x1413057f0  sub_1413057F0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_14088A5C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  volatile signed __int64 *v10; // rax
  unsigned __int16 v11; // di
  unsigned int v12; // ebx
  __int64 v13; // r13
  volatile signed __int64 *v14; // rcx
  char v15; // al
  volatile signed __int64 *v16; // rdx
  volatile signed __int64 *v17; // r14
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r14
  unsigned int v23; // edi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm0
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int64 v30; // rcx
  unsigned int v31; // r14d
  int v32; // r15d
  unsigned int v33; // eax
  __int64 v34; // r13
  unsigned int v35; // r12d
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int16 *v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  _BYTE *v45; // rdx
  volatile signed __int64 *v46; // rax
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int16 v59; // ax
  __int128 v60; // xmm0
  __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  signed __int64 v65; // rt0
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm2
  __int64 v73; // rt0
  unsigned __int16 v74; // bx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rcx
  __int64 v80; // rax
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm2
  __int64 v84; // rax
  __int128 v85; // [rsp+30h] [rbp-50h] BYREF
  __int128 v86; // [rsp+40h] [rbp-40h]
  __int128 v87; // [rsp+50h] [rbp-30h]
  __int128 v88; // [rsp+60h] [rbp-20h]
  __int64 v89; // [rsp+70h] [rbp-10h]
  unsigned __int16 v90; // [rsp+80h] [rbp+0h]
  char v91; // [rsp+82h] [rbp+2h]
  __int64 v92; // [rsp+2D8h] [rbp+258h]
  int v93; // [rsp+2E0h] [rbp+260h]
  __int64 v94; // [rsp+2F8h] [rbp+278h]
  int v95; // [rsp+300h] [rbp+280h]
  __int64 v96; // [rsp+318h] [rbp+298h]
  int v97; // [rsp+320h] [rbp+2A0h]
  __int64 v98; // [rsp+368h] [rbp+2E8h]
  __int64 v99; // [rsp+3C8h] [rbp+348h]
  __int64 v100; // [rsp+3D0h] [rbp+350h]
  __int64 v101; // [rsp+3D8h] [rbp+358h]
  __int64 v102; // [rsp+3E0h] [rbp+360h]
  __int64 v103; // [rsp+3E8h] [rbp+368h]
  __int128 v104; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v105; // [rsp+400h] [rbp+380h]
  __int128 v106; // [rsp+410h] [rbp+390h]
  volatile signed __int64 *v107; // [rsp+420h] [rbp+3A0h]
  __int64 v108; // [rsp+428h] [rbp+3A8h]
  __int64 v109; // [rsp+430h] [rbp+3B0h]
  _BYTE *v110; // [rsp+438h] [rbp+3B8h]
  __int64 v111; // [rsp+440h] [rbp+3C0h]
  __int64 v112; // [rsp+448h] [rbp+3C8h]
  __int64 v113; // [rsp+450h] [rbp+3D0h]
  __int64 v114; // [rsp+458h] [rbp+3D8h]
  __int64 v115; // [rsp+460h] [rbp+3E0h]
  __int64 v116; // [rsp+468h] [rbp+3E8h]
  __int64 v117; // [rsp+470h] [rbp+3F0h]
  __int64 v118; // [rsp+478h] [rbp+3F8h]
  __int64 v119; // [rsp+480h] [rbp+400h]
  __int64 v120; // [rsp+488h] [rbp+408h]
  _QWORD *v121; // [rsp+490h] [rbp+410h]
  __int64 v122; // [rsp+498h] [rbp+418h]
  _QWORD *v123; // [rsp+4A0h] [rbp+420h]
  __int64 v124; // [rsp+4A8h] [rbp+428h]
  __int64 v125; // [rsp+4B0h] [rbp+430h]
  __int64 v126; // [rsp+4B8h] [rbp+438h]
  __int128 v127; // [rsp+4C0h] [rbp+440h] BYREF
  __int128 v128; // [rsp+4D0h] [rbp+450h]
  __int64 v129; // [rsp+4E0h] [rbp+460h]
  __int64 v130; // [rsp+4E8h] [rbp+468h]
  _BYTE *v131; // [rsp+4F0h] [rbp+470h]
  _BYTE *v132; // [rsp+4F8h] [rbp+478h]
  __int64 v133; // [rsp+508h] [rbp+488h]
  __int128 v134; // [rsp+510h] [rbp+490h] BYREF
  __int128 v135; // [rsp+520h] [rbp+4A0h]
  __int64 v136; // [rsp+530h] [rbp+4B0h]
  volatile signed __int64 *v137; // [rsp+538h] [rbp+4B8h] BYREF
  volatile signed __int64 *v138; // [rsp+540h] [rbp+4C0h] BYREF
  volatile signed __int64 *v139; // [rsp+548h] [rbp+4C8h] BYREF
  volatile signed __int64 *v140; // [rsp+550h] [rbp+4D0h] BYREF
  unsigned __int16 v141; // [rsp+558h] [rbp+4D8h]
  _QWORD *v142; // [rsp+560h] [rbp+4E0h]
  __int64 v143; // [rsp+568h] [rbp+4E8h]
  _QWORD v144[2]; // [rsp+570h] [rbp+4F0h] BYREF
  __int128 v145; // [rsp+580h] [rbp+500h]
  __int64 v146; // [rsp+590h] [rbp+510h]
  char v147; // [rsp+59Bh] [rbp+51Bh]
  char v148; // [rsp+59Ch] [rbp+51Ch]
  char v149; // [rsp+59Dh] [rbp+51Dh]
  char v150; // [rsp+59Eh] [rbp+51Eh]
  char v151; // [rsp+59Fh] [rbp+51Fh]
  char v152; // [rsp+5A0h] [rbp+520h]
  char v153; // [rsp+5A1h] [rbp+521h]
  char v154; // [rsp+5A2h] [rbp+522h]
  char v155; // [rsp+5A3h] [rbp+523h]
  char v156; // [rsp+5A4h] [rbp+524h]
  char v157; // [rsp+5A5h] [rbp+525h]
  char v158; // [rsp+5A6h] [rbp+526h]
  char v159; // [rsp+5A7h] [rbp+527h]
  __int64 v160; // [rsp+5A8h] [rbp+528h]
  __int64 v161; // [rsp+5B8h] [rbp+538h]
  __int64 v162; // [rsp+5C0h] [rbp+540h]
  char v163; // [rsp+5CFh] [rbp+54Fh]
  __int64 v164; // [rsp+5D0h] [rbp+550h]

  v164 = -2; /*0x14088a5db*/
  v4 = *(__int64 **)(a2 + 8); /*0x14088a5ec*/
  if ( (unsigned __int8)sub_1413057F0(**(_QWORD **)a2, a3) ) /*0x14088a5f6*/
  {
    v8 = *v4; /*0x14088a603*/
    v9 = *(unsigned __int8 *)(*v4 + 244); /*0x14088a606*/
    v161 = *v4; /*0x14088a61d*/
    switch ( v9 ) /*0x14088a624*/
    {
      case 0LL: /*0x14088a624*/
        v10 = *(volatile signed __int64 **)(v8 + 16); /*0x14088a626*/
        v11 = *(_WORD *)(v8 + 240); /*0x14088a62b*/
        v12 = *(unsigned __int16 *)(v8 + 242); /*0x14088a634*/
        v13 = v8 + 24; /*0x14088a63d*/
        v14 = *(volatile signed __int64 **)(v8 + 8); /*0x14088a642*/
        *(_OWORD *)(v8 + 24) = *(_OWORD *)v8; /*0x14088a64c*/
        *(_QWORD *)(v8 + 40) = v10; /*0x14088a652*/
        *(_WORD *)(v8 + 224) = v11; /*0x14088a657*/
        *(_WORD *)(v8 + 226) = v12; /*0x14088a660*/
        v110 = (_BYTE *)(v8 + 228); /*0x14088a671*/
        *(_BYTE *)(v8 + 228) = 0; /*0x14088a678*/
LABEL_7:
        *(_DWORD *)(v8 + 232) = 0; /*0x14088a6d8*/
        *(_DWORD *)(v8 + 229) = 0; /*0x14088a6e4*/
        *(_BYTE *)(v8 + 232) = 1; /*0x14088a6f0*/
        v140 = *(volatile signed __int64 **)(v8 + 24); /*0x14088a6fe*/
        *(_BYTE *)(v8 + 231) = 1; /*0x14088a705*/
        v139 = v14; /*0x14088a70e*/
        *(_BYTE *)(v8 + 230) = 1; /*0x14088a715*/
        v138 = v10; /*0x14088a71e*/
        v143 = v13; /*0x14088a725*/
        sub_14104B490(&v85); /*0x14088a730*/
        v96 = 300; /*0x14088a736*/
        v97 = 0; /*0x14088a741*/
        v92 = 30; /*0x14088a74b*/
        v93 = 0; /*0x14088a756*/
        v98 = 10; /*0x14088a760*/
        v94 = 60; /*0x14088a76b*/
        v95 = 0; /*0x14088a776*/
        v143 = v13; /*0x14088a780*/
        v15 = sub_141042BD0(&v85); /*0x14088a78b*/
        v17 = v16; /*0x14088a791*/
        if ( (v15 & 1) != 0 ) /*0x14088a796*/
        {
          v160 = v13; /*0x14088a79c*/
          *(_QWORD *)&v134 = v16; /*0x14088a7a3*/
          *(_QWORD *)&v127 = &v134; /*0x14088a7b1*/
          *((_QWORD *)&v127 + 1) = sub_141031F10; /*0x14088a7bf*/
          sub_14149C0F0(&v104, &unk_141768210, &v127); /*0x14088a7db*/
          v13 = v160; /*0x14088a7e1*/
          v143 = v160; /*0x14088a7e8*/
          sub_1405E12D0(&v134); /*0x14088a7f6*/
          v17 = *((volatile signed __int64 **)&v104 + 1); /*0x14088a803*/
          v18 = v104; /*0x14088a803*/
          if ( (_QWORD)v104 != -1 ) /*0x14088a80e*/
          {
            v19 = v105; /*0x14088a810*/
            goto LABEL_45; /*0x14088a817*/
          }
        }
        *(_BYTE *)(v161 + 229) = 1; /*0x14088a829*/
        v137 = v17; /*0x14088a82c*/
        v126 = v13; /*0x14088a833*/
        build_upstream_direct_client(&v85); /*0x14088a83e*/
        v17 = *((volatile signed __int64 **)&v85 + 1); /*0x14088a848*/
        v18 = v85; /*0x14088a848*/
        if ( (_QWORD)v85 != -1 ) /*0x14088a850*/
        {
          v19 = v86; /*0x14088a852*/
          v21 = v161; /*0x14088a856*/
          *(_BYTE *)(v161 + 235) = 0; /*0x14088a85d*/
          if ( !*(_BYTE *)(v21 + 229) ) /*0x14088a864*/
            goto LABEL_45; /*0x14088a86b*/
          goto LABEL_43; /*0x14088a86b*/
        }
        v141 = v11; /*0x14088a8ba*/
        v24 = v161; /*0x14088a8c1*/
        *(_BYTE *)(v161 + 235) = 1; /*0x14088a8c8*/
        v107 = v17; /*0x14088a8cf*/
        *(_QWORD *)&v145 = v140; /*0x14088a8dd*/
        *((_QWORD *)&v145 + 1) = v139; /*0x14088a8eb*/
        v144[0] = v138; /*0x14088a8f9*/
        *(_DWORD *)(v24 + 229) = 0; /*0x14088a900*/
        *(_QWORD *)&v85 = 1; /*0x14088a911*/
        *((_QWORD *)&v85 + 1) = 1; /*0x14088a919*/
        *(_QWORD *)&v86 = 0; /*0x14088a921*/
        BYTE8(v86) = 0; /*0x14088a929*/
        *(_QWORD *)&v87 = v137; /*0x14088a92d*/
        nullsub_1(v20); /*0x14088a931*/
        v25 = sub_140001650(40, 8); /*0x14088a940*/
        v160 = v13; /*0x14088a948*/
        if ( !v25 ) /*0x14088a94f*/
          sub_1416C2D31(8, 40); /*0x14088b0aa*/
        v26 = v87; /*0x14088a955*/
        *(_QWORD *)(v25 + 32) = v87; /*0x14088a959*/
        v27 = v85; /*0x14088a95d*/
        *(_OWORD *)(v25 + 16) = v86; /*0x14088a965*/
        *(_OWORD *)v25 = v27; /*0x14088a969*/
        *(_QWORD *)&v134 = v25; /*0x14088a96c*/
        *(_BYTE *)(v24 + 235) = 0; /*0x14088a973*/
        *(_QWORD *)&v85 = 1; /*0x14088a97a*/
        *((_QWORD *)&v85 + 1) = 1; /*0x14088a982*/
        *(_QWORD *)&v86 = 0; /*0x14088a98a*/
        BYTE8(v86) = 0; /*0x14088a992*/
        *(_QWORD *)&v87 = v17; /*0x14088a996*/
        nullsub_1(v26); /*0x14088a99a*/
        v28 = sub_140001650(40, 8); /*0x14088a9a9*/
        if ( !v28 ) /*0x14088a9b1*/
          sub_1416C2D31(8, 40); /*0x14088b0bf*/
        *(_QWORD *)(v28 + 32) = v87; /*0x14088a9bb*/
        v29 = v85; /*0x14088a9bf*/
        *(_OWORD *)(v28 + 16) = v86; /*0x14088a9c7*/
        *(_OWORD *)v28 = v29; /*0x14088a9cb*/
        *(_QWORD *)&v127 = v28; /*0x14088a9ce*/
        sub_140FFA6E0(&v85); /*0x14088a9d9*/
        v31 = v85; /*0x14088a9df*/
        v32 = ((int)v85 >> 13) - 1; /*0x14088a9e9*/
        v23 = 0; /*0x14088a9ed*/
        if ( (int)v85 >> 13 <= 0 ) /*0x14088a9f1*/
        {
          v33 = (1 - ((int)v85 >> 13)) / 0x190u + 1; /*0x14088aa05*/
          v30 = 400 * v33; /*0x14088aa07*/
          v32 += v30; /*0x14088aa0d*/
          v23 = -146097 * v33; /*0x14088aa10*/
        }
        v34 = DWORD1(v85); /*0x14088aa16*/
        v35 = DWORD2(v85); /*0x14088aa1a*/
        nullsub_1(v30); /*0x14088aa1e*/
        v36 = (_QWORD *)sub_140001650(24, 8); /*0x14088aa2d*/
        if ( !v36 ) /*0x14088aa35*/
          sub_1416C2D31(8, 24); /*0x14088b0d4*/
        *v36 = 1; /*0x14088aaa0*/
        v36[1] = 1; /*0x14088aaa7*/
        v36[2] = 1000 /*0x14088aaaf*/
               * (v34
                + 86400LL
                * (int)(((v32 / 100) >> 2) + v23 + ((v31 >> 4) & 0x1FF) - v32 / 100 + ((1461 * v32) >> 2) - 719163))
               + v35 / 0xF4240uLL;
        *(_BYTE *)(v161 + 234) = 1; /*0x14088aaba*/
        v104 = v145; /*0x14088aac8*/
        *(_QWORD *)&v105 = v144[0]; /*0x14088aae4*/
        *((_QWORD *)&v105 + 1) = v134; /*0x14088aaf2*/
        *(_QWORD *)&v106 = v127; /*0x14088ab00*/
        *((_QWORD *)&v106 + 1) = v36; /*0x14088ab07*/
        v146 = v160; /*0x14088ab15*/
        v37 = sub_14056E1C0(); /*0x14088ab1c*/
        LOWORD(v23) = v141; /*0x14088ab22*/
        *(_QWORD *)&v127 = v37; /*0x14088ab29*/
        v159 = 1; /*0x14088ab30*/
        v162 = v37; /*0x14088ab3b*/
        sub_140B57960(&v85); /*0x14088ab42*/
        v159 = 0; /*0x14088ab48*/
        *(_QWORD *)&v134 = sub_14056F600( /*0x14088ab79*/
                             v162,
                             (unsigned int)aAimamiHealth_0,
                             16,
                             (unsigned int)&v85,
                             (__int64)&off_141795E50);
        v158 = 1; /*0x14088ab80*/
        v162 = v134; /*0x14088ab8b*/
        sub_140B57DB0(&v85); /*0x14088ab92*/
        v158 = 0; /*0x14088ab98*/
        v144[0] = sub_14056F600(v162, (unsigned int)aIdeV1ChatCompl_1, 25, (unsigned int)&v85, (__int64)&off_141795E88); /*0x14088abc9*/
        v157 = 1; /*0x14088abd0*/
        v162 = v144[0]; /*0x14088abdb*/
        sub_140B57C40(&v85); /*0x14088abe2*/
        v157 = 0; /*0x14088abe8*/
        *((_QWORD *)&v145 + 1) = sub_14056F600( /*0x14088ac19*/
                                   v162,
                                   (unsigned int)aIdeV1Responses_1,
                                   18,
                                   (unsigned int)&v85,
                                   (__int64)&off_141795EB8);
        v156 = 1; /*0x14088ac20*/
        v162 = *((_QWORD *)&v145 + 1); /*0x14088ac2b*/
        sub_140B57AD0(&v85); /*0x14088ac32*/
        v156 = 0; /*0x14088ac38*/
        *(_QWORD *)&v145 = sub_14056F600( /*0x14088ac69*/
                             v162,
                             (unsigned int)aIdeV1Messages_1,
                             17,
                             (unsigned int)&v85,
                             (__int64)&off_141795EE8);
        v155 = 1; /*0x14088ac70*/
        v162 = v145; /*0x14088ac7b*/
        sub_140B57680(&v85); /*0x14088ac82*/
        v155 = 0; /*0x14088ac88*/
        v133 = sub_14056F600(v162, (unsigned int)aIdeV1Models_1, 15, (unsigned int)&v85, (__int64)&off_141795F10); /*0x14088acb9*/
        v154 = 1; /*0x14088acc0*/
        v162 = v133; /*0x14088accb*/
        sub_140B57F20(&v85); /*0x14088acd2*/
        v154 = 0; /*0x14088acd8*/
        v99 = sub_14056F600(v162, (unsigned int)aCodexV1Respons_1, 27, (unsigned int)&v85, (__int64)&off_141795F48); /*0x14088ad09*/
        v153 = 1; /*0x14088ad10*/
        v162 = v99; /*0x14088ad1b*/
        sub_140B58090(&v85); /*0x14088ad22*/
        v153 = 0; /*0x14088ad28*/
        v100 = sub_14056F600(v162, (unsigned int)aCodexRouterV1R_3, 26, (unsigned int)&v85, (__int64)&off_141795F80); /*0x14088ad59*/
        v152 = 1; /*0x14088ad60*/
        v162 = v100; /*0x14088ad6b*/
        sub_140B584E0(&v85); /*0x14088ad72*/
        v152 = 0; /*0x14088ad78*/
        v101 = sub_14056F600(v162, (unsigned int)aCodexRouterV1R_4, 34, (unsigned int)&v85, (__int64)&off_141795FC0); /*0x14088ada9*/
        v151 = 1; /*0x14088adb0*/
        v162 = v101; /*0x14088adbb*/
        sub_140B58370(&v85); /*0x14088adc2*/
        v151 = 0; /*0x14088adc8*/
        v102 = sub_14056F600(v162, (unsigned int)aCodexRouterV1I_3, 35, (unsigned int)&v85, (__int64)&off_141796000); /*0x14088adf9*/
        v150 = 1; /*0x14088ae00*/
        v162 = v102; /*0x14088ae0b*/
        sub_140B58200(&v85); /*0x14088ae12*/
        v150 = 0; /*0x14088ae18*/
        v103 = sub_14056F600(v162, (unsigned int)aCodexRouterV1I_4, 29, (unsigned int)&v85, (__int64)&off_141796038); /*0x14088ae49*/
        v149 = 1; /*0x14088ae50*/
        v162 = v103; /*0x14088ae5b*/
        sub_140B577F0(&v85); /*0x14088ae62*/
        v149 = 0; /*0x14088ae68*/
        v38 = sub_14056F600(v162, (unsigned int)aCodexRouterV1H_1, 23, (unsigned int)&v85, (__int64)&off_141796068); /*0x14088ae93*/
        v13 = v160; /*0x14088ae99*/
        v146 = v160; /*0x14088aea0*/
        v39 = sub_1404F2B60(v38, 1, 0x20000000); /*0x14088aeb5*/
        *(_BYTE *)(v161 + 234) = 0; /*0x14088aec2*/
        v87 = v106; /*0x14088aede*/
        v86 = v105; /*0x14088aee2*/
        v85 = v104; /*0x14088aee6*/
        v146 = v13; /*0x14088aeea*/
        v40 = sub_1404F2240(v39, &v85); /*0x14088aef8*/
        v8 = v161; /*0x14088aefe*/
        *(_QWORD *)(v161 + 48) = v40; /*0x14088af05*/
        *(_BYTE *)(v8 + 233) = 1; /*0x14088af0a*/
        *(_WORD *)(v8 + 218) = v23; /*0x14088af13*/
        *(_WORD *)(v8 + 220) = v12; /*0x14088af1c*/
        v132 = (_BYTE *)(v8 + 223); /*0x14088af2d*/
        *(_BYTE *)(v8 + 223) = 0; /*0x14088af34*/
        v22 = (_QWORD *)(v8 + 56); /*0x14088af3d*/
LABEL_21:
        *(_BYTE *)(v8 + 222) = 1; /*0x14088af42*/
        *(_QWORD *)(v8 + 120) = -1; /*0x14088af4b*/
        v122 = v13; /*0x14088af54*/
        v121 = v22; /*0x14088af5b*/
        sub_140669240(&v85, v23, v12); /*0x14088af6b*/
        v41 = *((__int16 **)&v85 + 1); /*0x14088af75*/
        v42 = v85; /*0x14088af75*/
        v43 = *((_QWORD *)&v85 + 1) + 2 * v86; /*0x14088af7d*/
        v8 = v161; /*0x14088af81*/
        *(_QWORD *)(v161 + 56) = *((_QWORD *)&v85 + 1); /*0x14088af88*/
        *(_QWORD *)(v8 + 64) = v41; /*0x14088af8d*/
        *(_OWORD *)(v8 + 72) = __PAIR128__(v43, v42); /*0x14088af92*/
        if ( v41 == (__int16 *)v43 ) /*0x14088af9f*/
          goto LABEL_22; /*0x14088af9f*/
        break; /*0x14088af9f*/
      case 1LL: /*0x14088a624*/
        sub_1416C3400(&off_1417956D0, v5, v6, v7); /*0x14088b0f4*/
      case 2LL: /*0x14088a624*/
        sub_1416C3420(&off_1417956D0, v5, v6, v7); /*0x14088b0e6*/
      case 3LL: /*0x14088a624*/
        v110 = (_BYTE *)(v8 + 228); /*0x14088a697*/
        v13 = v8 + 24; /*0x14088a6a7*/
        switch ( *(_BYTE *)(v8 + 228) ) /*0x14088a6ba*/
        {
          case 0: /*0x14088a6ba*/
            v14 = *(volatile signed __int64 **)(v8 + 32); /*0x14088a6bc*/
            v10 = *(volatile signed __int64 **)(v8 + 40); /*0x14088a6c1*/
            v11 = *(_WORD *)(v8 + 224); /*0x14088a6c6*/
            v12 = *(unsigned __int16 *)(v8 + 226); /*0x14088a6cf*/
            goto LABEL_7; /*0x14088a6cf*/
          case 1: /*0x14088a6ba*/
            v111 = v8 + 24; /*0x14088b114*/
            sub_1416C3400(&off_141796080, v5, v6, v7); /*0x14088b122*/
          case 2: /*0x14088a6ba*/
            v111 = v8 + 24; /*0x14088b0fb*/
            sub_1416C3420(&off_141796080, v5, v6, v7); /*0x14088b109*/
          case 3: /*0x14088a6ba*/
            v132 = (_BYTE *)(v8 + 223); /*0x14088a87e*/
            v22 = (_QWORD *)(v8 + 56); /*0x14088a88e*/
            switch ( *(_BYTE *)(v8 + 223) ) /*0x14088a8a1*/
            {
              case 0: /*0x14088a8a1*/
                v23 = *(unsigned __int16 *)(v8 + 218); /*0x14088a8a3*/
                v12 = *(unsigned __int16 *)(v8 + 220); /*0x14088a8ac*/
                break; /*0x14088a8b5*/
              case 1: /*0x14088a8a1*/
                v113 = v8 + 24; /*0x14088b14a*/
                v112 = v8 + 56; /*0x14088b151*/
                sub_1416C3400(&off_141795E10, v5, v6, v7); /*0x14088b15f*/
              case 2: /*0x14088a8a1*/
                v113 = v8 + 24; /*0x14088b12d*/
                v112 = v8 + 56; /*0x14088b134*/
                sub_1416C3420(&off_141795E10, v5, v6, v7); /*0x14088b142*/
              case 3: /*0x14088a8a1*/
                v45 = (_BYTE *)(v8 + 208); /*0x14088aff6*/
                switch ( *(_BYTE *)(v8 + 208) ) /*0x14088b015*/
                {
                  case 0: /*0x14088b015*/
                    goto LABEL_78;
                  case 1: /*0x14088b015*/
                    v120 = v8 + 24; /*0x14088b017*/
                    v119 = v8 + 56; /*0x14088b01e*/
                    v118 = v8 + 208; /*0x14088b025*/
                    sub_1416C3400(&off_141794A80, v45, v6, v7); /*0x14088b033*/
                  case 2: /*0x14088b015*/
                    v120 = v8 + 24; /*0x14088b167*/
                    v119 = v8 + 56; /*0x14088b16e*/
                    v118 = v8 + 208; /*0x14088b175*/
                    sub_1416C3420(&off_141794A80, v45, v6, v7); /*0x14088b183*/
                  case 3: /*0x14088b015*/
                    goto LABEL_79;
                }
            }
            goto LABEL_21; /*0x14088a8b5*/
        }
    }
    while ( 1 ) /*0x14088b58d*/
    {
      *(_QWORD *)(v8 + 64) = v41 + 1; /*0x14088b58d*/
      v59 = *v41; /*0x14088b592*/
      *(_WORD *)(v8 + 216) = v59; /*0x14088b595*/
      *(_DWORD *)(v8 + 90) = 16777343; /*0x14088b59e*/
      *(_WORD *)(v8 + 94) = v59; /*0x14088b5a7*/
      *(_WORD *)(v8 + 88) = 0; /*0x14088b5ad*/
      *(_OWORD *)(v8 + 160) = *(_OWORD *)(v8 + 104); /*0x14088b5bb*/
      *(_WORD *)(v8 + 144) = *(_WORD *)(v8 + 88); /*0x14088b5ca*/
      *(_DWORD *)(v8 + 146) = *(_DWORD *)(v8 + 90); /*0x14088b5d8*/
      *(_WORD *)(v8 + 150) = *(_WORD *)(v8 + 94); /*0x14088b5e6*/
      *(_QWORD *)(v8 + 152) = *(_QWORD *)(v8 + 96); /*0x14088b5f4*/
      v45 = (_BYTE *)(v8 + 208); /*0x14088b5fc*/
      *(_BYTE *)(v8 + 208) = 0; /*0x14088b604*/
LABEL_78:
      v60 = *(_OWORD *)(v8 + 144); /*0x14088b60d*/
      *(_OWORD *)(v8 + 192) = *(_OWORD *)(v8 + 160); /*0x14088b61f*/
      *(_OWORD *)(v8 + 176) = v60; /*0x14088b628*/
LABEL_79:
      v142 = v22; /*0x14088b631*/
      v55 = *(unsigned __int16 *)(v8 + 176); /*0x14088b638*/
      *(_WORD *)(v8 + 176) = -2; /*0x14088b641*/
      if ( (_WORD)v55 == 0xFFFE ) /*0x14088b650*/
      {
        v131 = v45; /*0x14088b656*/
        v160 = v13; /*0x14088b65d*/
        sub_1416C3000(aReadyPolledAft_2, 31, &off_141799670); /*0x14088b677*/
      }
      v160 = v13; /*0x14088b2d7*/
      v53 = *(_QWORD *)(v8 + 184); /*0x14088b2de*/
      if ( (_WORD)v55 != 0xFFFF ) /*0x14088b2ea*/
        break; /*0x14088b2ea*/
LABEL_73:
      *(_BYTE *)(v8 + 208) = 1; /*0x14088b498*/
      v144[0] = v53; /*0x14088b4a1*/
      *(_QWORD *)&v85 = v8 + 88; /*0x14088b4ad*/
      *((_QWORD *)&v85 + 1) = sub_1414AAF50; /*0x14088b4b8*/
      *(_QWORD *)&v86 = v144; /*0x14088b4c3*/
      *((_QWORD *)&v86 + 1) = sub_141490720; /*0x14088b4ce*/
      sub_14149C0F0(&v127, &unk_141795E28, &v85); /*0x14088b4e4*/
      v134 = v127; /*0x14088b4f1*/
      *(_QWORD *)&v135 = v128; /*0x14088b4ff*/
      v58 = *(_QWORD *)(v8 + 120); /*0x14088b50b*/
      if ( v58 != -1 && v58 ) /*0x14088b51c*/
        sub_140001660(*(_QWORD *)(v8 + 128), v58, 1); /*0x14088b52b*/
      *(_BYTE *)(v8 + 222) = 1; /*0x14088b530*/
      *(_QWORD *)(v8 + 136) = v135; /*0x14088b53e*/
      *(_OWORD *)(v8 + 120) = v134; /*0x14088b549*/
      v13 = v160; /*0x14088b54c*/
      v124 = v160; /*0x14088b553*/
      v22 = v142; /*0x14088b55a*/
      v123 = v142; /*0x14088b561*/
      sub_140018650(v144); /*0x14088b56f*/
      v41 = *(__int16 **)(v8 + 64); /*0x14088b575*/
      v43 = *(_QWORD *)(v8 + 80); /*0x14088b579*/
      if ( v41 == (__int16 *)v43 ) /*0x14088b583*/
      {
LABEL_22:
        v44 = v22[2]; /*0x14088afa5*/
        if ( v44 ) /*0x14088afac*/
          sub_140001660(*v22, 2 * v44, 2); /*0x14088afba*/
        v142 = v22; /*0x14088afbf*/
        *(_BYTE *)(v8 + 222) = 0; /*0x14088afc6*/
        v18 = *(_QWORD *)(v8 + 120); /*0x14088afcf*/
        v160 = v13; /*0x14088afd8*/
        if ( v18 == -1 ) /*0x14088afdf*/
        {
          nullsub_1(v43); /*0x14088b03e*/
          v18 = 38; /*0x14088b043*/
          v46 = (volatile signed __int64 *)sub_140001650(38, 1); /*0x14088b053*/
          if ( !v46 ) /*0x14088b05b*/
          {
            v122 = v13; /*0x14088b18b*/
            v121 = v142; /*0x14088b199*/
            sub_1416C2D4B(1, 38); /*0x14088b1aa*/
          }
          v17 = v46; /*0x14088b061*/
          qmemcpy((void *)v46, "no free port available for relay proxy", 38); /*0x14088b076*/
          v19 = 38; /*0x14088b087*/
        }
        else
        {
          v17 = *(volatile signed __int64 **)(v8 + 128); /*0x14088afe1*/
          v19 = *(_QWORD *)(v8 + 136); /*0x14088afe9*/
        }
        *(_BYTE *)(v8 + 222) = 0; /*0x14088b08c*/
        v47 = 2; /*0x14088b095*/
        goto LABEL_90; /*0x14088b09b*/
      }
    }
    v131 = v45; /*0x14088b2f0*/
    WORD6(v145) = *(_WORD *)(v8 + 182); /*0x14088b300*/
    DWORD2(v145) = *(_DWORD *)(v8 + 178); /*0x14088b30f*/
    v134 = *(_OWORD *)(v8 + 192); /*0x14088b31e*/
    v144[0] = 0; /*0x14088b325*/
    v54 = 0; /*0x14088b337*/
    while ( 1 ) /*0x14088b37b*/
    {
      v56 = v54; /*0x14088b37b*/
      v141 = v55; /*0x14088b382*/
      if ( (_WORD)v55 == 2 ) /*0x14088b389*/
      {
        if ( !v54 ) /*0x14088b46a*/
        {
          v125 = 0; /*0x14088b46c*/
          LOBYTE(v55) = 20; /*0x14088b484*/
          v56 = sub_14146B840(v55, aCouldNotResolv_1, 32); /*0x14088b48b*/
        }
        v53 = v56; /*0x14088b48e*/
        v8 = v161; /*0x14088b491*/
        goto LABEL_73; /*0x14088b491*/
      }
      LOWORD(v127) = v55; /*0x14088b38f*/
      WORD3(v127) = WORD6(v145); /*0x14088b39d*/
      *(_DWORD *)((char *)&v127 + 2) = DWORD2(v145); /*0x14088b3a8*/
      *((_QWORD *)&v127 + 1) = v53; /*0x14088b3ac*/
      v128 = v134; /*0x14088b3ba*/
      v125 = v54; /*0x14088b3bf*/
      sub_1413064D0(&v85, &v127); /*0x14088b3cc*/
      v47 = v85; /*0x14088b3d2*/
      if ( (_QWORD)v85 != 2 ) /*0x14088b3da*/
        break; /*0x14088b3da*/
      v54 = *((_QWORD *)&v85 + 1); /*0x14088b3e0*/
      if ( v56 ) /*0x14088b3e7*/
      {
        v55 = (unsigned int)(v56 & 3) - 2; /*0x14088b3ef*/
        if ( (unsigned int)v55 >= 2 && (v56 & 3) != 0 ) /*0x14088b3fe*/
        {
          v108 = *((_QWORD *)&v85 + 1); /*0x14088b404*/
          v109 = v56 - 1; /*0x14088b40f*/
          v162 = *(_QWORD *)(v56 - 1); /*0x14088b41a*/
          v130 = *(_QWORD *)(v56 + 7); /*0x14088b425*/
          if ( *(_QWORD *)v130 ) /*0x14088b42c*/
            (*(void (__fastcall **)(__int64, _QWORD))v130)(v162, *((_QWORD *)&v85 + 1)); /*0x14088b43b*/
          v57 = *(_QWORD *)(v130 + 8); /*0x14088b44c*/
          if ( v57 ) /*0x14088b453*/
            sub_140001660(v162, v57, *(_QWORD *)(v130 + 16)); /*0x14088b45d*/
          sub_140001660(v109, 24, 8); /*0x14088b358*/
          v54 = v108; /*0x14088b35d*/
        }
      }
      v144[0] = v54; /*0x14088b370*/
      LOWORD(v55) = 2; /*0x14088b377*/
    }
    if ( v56 ) /*0x14088b685*/
      sub_140018650(v144); /*0x14088b68e*/
    v18 = *((_QWORD *)&v85 + 1); /*0x14088b694*/
    v19 = *((_QWORD *)&v86 + 1); /*0x14088b69c*/
    v17 = (volatile signed __int64 *)v86; /*0x14088b69c*/
    v13 = v87; /*0x14088b6a0*/
    *v131 = 1; /*0x14088b6ab*/
    if ( v47 != -1 ) /*0x14088b6b2*/
    {
      v141 = *(_WORD *)(v161 + 216); /*0x14088b6c6*/
      v61 = v142[2]; /*0x14088b6d4*/
      if ( v61 ) /*0x14088b6db*/
        sub_140001660(*v142, 2 * v61, 2); /*0x14088b6e9*/
      v62 = v161; /*0x14088b6ee*/
      v63 = *(_QWORD *)(v161 + 120); /*0x14088b6f5*/
      if ( v63 != -1 && v63 ) /*0x14088b702*/
        sub_140001660(*(_QWORD *)(v161 + 128), v63, 1); /*0x14088b711*/
      *(_BYTE *)(v62 + 222) = 0; /*0x14088b716*/
LABEL_90:
      *v132 = 1; /*0x14088b71d*/
      v117 = v160; /*0x14088b72e*/
      sub_1405DC7D0(v142); /*0x14088b73c*/
      if ( v47 != 2 ) /*0x14088b746*/
      {
        *(_QWORD *)&v134 = v47; /*0x14088b7cd*/
        *((_QWORD *)&v134 + 1) = v18; /*0x14088b7d4*/
        *(_QWORD *)&v135 = v17; /*0x14088b7db*/
        *((_QWORD *)&v135 + 1) = v19; /*0x14088b7e2*/
        v136 = v13; /*0x14088b7e9*/
        *(_QWORD *)&v85 = 1; /*0x14088b7f0*/
        *((_QWORD *)&v85 + 1) = 1; /*0x14088b7f8*/
        *(_QWORD *)&v88 = 0; /*0x14088b800*/
        BYTE8(v88) = 0; /*0x14088b808*/
        nullsub_1(v64); /*0x14088b80c*/
        v68 = sub_140001650(64, 8); /*0x14088b81b*/
        if ( !v68 ) /*0x14088b823*/
          sub_1416C2D31(8, 64); /*0x14088ba2b*/
        v70 = v85; /*0x14088b829*/
        v71 = v86; /*0x14088b82d*/
        v72 = v87; /*0x14088b831*/
        *(_OWORD *)(v68 + 48) = v88; /*0x14088b839*/
        *(_OWORD *)(v68 + 32) = v72; /*0x14088b83d*/
        *(_OWORD *)(v68 + 16) = v71; /*0x14088b841*/
        *(_OWORD *)v68 = v70; /*0x14088b845*/
        v73 = _InterlockedIncrement64((volatile signed __int64 *)v68); /*0x14088b848*/
        v74 = v141; /*0x14088b84c*/
        if ( v73 <= 0 ) /*0x14088b853*/
          goto LABEL_42; /*0x14088b853*/
        v133 = v68; /*0x14088b859*/
        *(_QWORD *)&v145 = v68; /*0x14088b860*/
        nullsub_1(v69); /*0x14088b867*/
        v75 = sub_140001650(24, 8); /*0x14088b876*/
        v76 = v161; /*0x14088b87e*/
        if ( !v75 ) /*0x14088b885*/
        {
          v148 = 1; /*0x14088ba36*/
          v147 = 1; /*0x14088ba3d*/
          sub_1416C2D31(8, 24); /*0x14088ba4e*/
        }
        *(_QWORD *)v75 = 1; /*0x14088b88b*/
        *(_QWORD *)(v75 + 8) = 1; /*0x14088b892*/
        *(_BYTE *)(v75 + 16) = 1; /*0x14088b89a*/
        *((_QWORD *)&v145 + 1) = v75; /*0x14088b89e*/
        if ( _InterlockedIncrement64((volatile signed __int64 *)v75) <= 0 ) /*0x14088b8a9*/
LABEL_42:
          BUG(); /*0x14088b1b2*/
        *(_BYTE *)(v76 + 233) = 0; /*0x14088b8af*/
        *(_QWORD *)&v87 = v136; /*0x14088b8bd*/
        v86 = v135; /*0x14088b8cf*/
        v85 = v134; /*0x14088b8d3*/
        *((_QWORD *)&v87 + 1) = *(_QWORD *)(v76 + 48); /*0x14088b8db*/
        *((_QWORD *)&v88 + 1) = v145; /*0x14088b8e6*/
        *(_QWORD *)&v88 = v75; /*0x14088b8ea*/
        v90 = v74; /*0x14088b8ee*/
        v91 = 0; /*0x14088b8f2*/
        v163 = 1; /*0x14088b8f6*/
        v77 = sub_14054E3C0(&v85, &off_141796098); /*0x14088b90e*/
        v163 = 1; /*0x14088b911*/
        if ( (unsigned __int8)sub_1412F2A80(v77) ) /*0x14088b91b*/
        {
          v163 = 1; /*0x14088b925*/
          sub_1412E7580(v77); /*0x14088b92f*/
        }
        v78 = v133; /*0x14088b935*/
        v144[0] = 1; /*0x14088b93c*/
        v144[1] = v133; /*0x14088b947*/
        sub_1412F2740(&v127, 1); /*0x14088b95a*/
        *(_QWORD *)&v88 = v129; /*0x14088b967*/
        v87 = v128; /*0x14088b979*/
        v86 = v127; /*0x14088b97d*/
        *(_QWORD *)&v85 = 1; /*0x14088b981*/
        *((_QWORD *)&v85 + 1) = 1; /*0x14088b989*/
        *((_QWORD *)&v88 + 1) = 1; /*0x14088b991*/
        v89 = v78; /*0x14088b999*/
        nullsub_1(v79); /*0x14088b99d*/
        v80 = sub_140001650(72, 8); /*0x14088b9ac*/
        if ( !v80 ) /*0x14088b9b4*/
          sub_1416C2D31(8, 72); /*0x14088ba63*/
        v18 = v80; /*0x14088b9ba*/
        *(_QWORD *)(v80 + 64) = v89; /*0x14088b9c1*/
        v81 = v85; /*0x14088b9c5*/
        v82 = v86; /*0x14088b9c9*/
        v83 = v87; /*0x14088b9cd*/
        *(_OWORD *)(v80 + 48) = v88; /*0x14088b9d5*/
        *(_OWORD *)(v80 + 32) = v83; /*0x14088b9da*/
        *(_OWORD *)(v80 + 16) = v82; /*0x14088b9df*/
        *(_OWORD *)v80 = v81; /*0x14088b9e4*/
        v17 = *((volatile signed __int64 **)&v145 + 1); /*0x14088b9e8*/
        v19 = v74; /*0x14088b9ef*/
        v84 = v161; /*0x14088b9f2*/
        *(_WORD *)(v161 + 233) = 0; /*0x14088b9f9*/
        *(_BYTE *)(v84 + 235) = 0; /*0x14088ba02*/
        *(_DWORD *)(v84 + 229) = 0; /*0x14088ba09*/
        v51 = 0; /*0x14088ba13*/
        v13 = v160; /*0x14088ba15*/
        goto LABEL_55; /*0x14088ba1c*/
      }
      v65 = _InterlockedDecrement64(*(volatile signed __int64 **)(v161 + 48)); /*0x14088b757*/
      v13 = v160; /*0x14088b75b*/
      if ( !v65 ) /*0x14088b762*/
      {
        v146 = v160; /*0x14088b76f*/
        sub_140FA2C80(v161 + 48); /*0x14088b776*/
      }
      v66 = v161; /*0x14088b77c*/
      *(_WORD *)(v161 + 233) = 0; /*0x14088b783*/
      *(_BYTE *)(v66 + 235) = 0; /*0x14088b78c*/
      if ( !*(_BYTE *)(v66 + 229) ) /*0x14088b793*/
      {
LABEL_45:
        v48 = v161; /*0x14088b1d5*/
        *(_BYTE *)(v161 + 229) = 0; /*0x14088b1dc*/
        if ( *(_BYTE *)(v48 + 230) && !_InterlockedDecrement64(v138) ) /*0x14088b1f3*/
        {
          v116 = v13; /*0x14088b1f9*/
          sub_140575F20(&v138); /*0x14088b207*/
        }
        v49 = v161; /*0x14088b20d*/
        *(_BYTE *)(v161 + 230) = 0; /*0x14088b214*/
        if ( *(_BYTE *)(v49 + 231) && !_InterlockedDecrement64(v139) ) /*0x14088b22b*/
        {
          v115 = v13; /*0x14088b231*/
          sub_140574820(&v139); /*0x14088b23f*/
        }
        v50 = v161; /*0x14088b245*/
        *(_BYTE *)(v161 + 231) = 0; /*0x14088b24c*/
        if ( *(_BYTE *)(v50 + 232) && !_InterlockedDecrement64(v140) ) /*0x14088b263*/
        {
          v114 = v13; /*0x14088b269*/
          sub_140574DB0(&v140); /*0x14088b277*/
        }
        *(_BYTE *)(v161 + 232) = 0; /*0x14088b284*/
        v51 = 1; /*0x14088b28b*/
LABEL_55:
        *v110 = 1; /*0x14088b290*/
        sub_1405DE950(v13); /*0x14088b29d*/
        *(_BYTE *)(v161 + 244) = 1; /*0x14088b2aa*/
        *a1 = v51; /*0x14088b2b1*/
        a1[1] = v18; /*0x14088b2b4*/
        a1[2] = (__int64)v17; /*0x14088b2b8*/
        a1[3] = v19; /*0x14088b2bc*/
        return a1; /*0x14088b2bc*/
      }
LABEL_43:
      if ( !_InterlockedDecrement64(v137) ) /*0x14088b1bb*/
      {
        v143 = v13; /*0x14088b1c1*/
        sub_141018B80(&v137); /*0x14088b1cf*/
      }
      goto LABEL_45; /*0x14088b1cf*/
    }
    v67 = v161; /*0x14088b7a5*/
    *(_BYTE *)(v161 + 223) = 3; /*0x14088b7ac*/
    *(_BYTE *)(v67 + 228) = 3; /*0x14088b7b3*/
    *(_BYTE *)(v67 + 244) = 3; /*0x14088b7ba*/
    *a1 = -1; /*0x14088b7c1*/
  }
  else
  {
    *a1 = 2; /*0x14088a683*/
  }
  return a1; /*0x14088b2c3*/
}
