// module: core::relay::proxy_server, core::relay::manager (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x140588900  size: 0x1707  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Route-table builder (one of four near-identical instantiations at
//   0x140588900/0x14069e380/0x14088a5c0 seen in this module, evidence modules include
//   core::relay::manager): registers the IDE-compat proxy server's axum-style routes --
//   /__aimami/health, /:ide/v1/chat/completions, /:ide/v1/responses, /:ide/v1/messages, /:ide/v1/models,
//   /codex/v1/responses/compact, /codex/router/v1/responses -- plus a 'failed to park thread' panic-
//   location string tying it to the async runtime bootstrap for this listener.
//
// Referenced strings/symbols:
//   0x141684120  sub_141684120
//   0x1412eb530  sub_1412EB530
//   0x140616830  sub_140616830
//   0x1407d7e70  sub_1407D7E70
//   0x1412f09c0  sub_1412F09C0
//   0x14148bbf0  sub_14148BBF0
//   0x140b82ff0  sub_140B82FF0
//   0x141302f30  sub_141302F30
//   0x1412feba0  sub_1412FEBA0
//   0x1412f6360  sub_1412F6360
//   0x1416c2100  sub_1416C2100
//   0x141792398  off_141792398
//   0x1416c32c0  sub_1416C32C0
//   0x141766af5  unk_141766AF5
//   0x141764458  off_141764458
//   0x1412f90e0  sub_1412F90E0
//   0x1405dab10  sub_1405DAB10
//   0x1416c3060  sub_1416C3060
//   0x141766ce8  aFailedToParkTh   "failed to park thread"
//   0x141769398  unk_141769398
//   0x141766e98  off_141766E98
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
//   0x141768ca8  aAimamiHealth_1   "/__aimami/health"
//   0x141768cb8  off_141768CB8
//   0x140b57db0  sub_140B57DB0
//   0x141768cd0  aIdeV1ChatCompl   "/:ide/v1/chat/completions"
//   0x141768cf0  off_141768CF0
//   0x140b57c40  sub_140B57C40
//   0x141768d08  aIdeV1Responses   "/:ide/v1/responses"
//   0x141768d20  off_141768D20
//   0x140b57ad0  sub_140B57AD0
//   0x141768d38  aIdeV1Messages   "/:ide/v1/messages"
//   0x141768d50  off_141768D50
//   0x140b57680  sub_140B57680
//   0x141768d68  aIdeV1Models   "/:ide/v1/models"
//   0x141768d78  off_141768D78
//   0x140b57f20  sub_140B57F20
//   0x141768d90  aCodexV1Respons   "/codex/v1/responses/compact"
//   0x141768db0  off_141768DB0
//   0x140b58090  sub_140B58090
//   0x141768dc8  aCodexRouterV1R   "/codex/router/v1/responses"
//   0x141768de8  off_141768DE8
//   0x140b584e0  sub_140B584E0
//   0x141768e00  aCodexRouterV1R_0   "/codex/router/v1/responses/compact"
//   0x141768e28  off_141768E28
//   0x140b58370  sub_140B58370
//   0x141768e40  aCodexRouterV1I   "/codex/router/v1/images/generations"
//   0x141768e68  off_141768E68
//   0x140b58200  sub_140B58200
//   0x141768e80  aCodexRouterV1I_0   "/codex/router/v1/images/edits"
//   0x141768ea0  off_141768EA0
//   0x140b577f0  sub_140B577F0
//   0x141768eb8  aCodexRouterV1H   "/codex/router/v1/health"
//   0x141768ed0  off_141768ED0
//   0x1404f2b60  sub_1404F2B60
//   0x1404f2240  sub_1404F2240
//   0x140669240  sub_140669240
//   0x1416c3400  sub_1416C3400
//   0x141767c18  off_141767C18
//   0x1416c3420  sub_1416C3420
//   0x141768ee8  off_141768EE8
//   0x1417680c0  off_1417680C0
//   0x141766e80  off_141766E80
//   0x1416c3000  sub_1416C3000
//   0x14177d6e0  aReadyPolledAft   "`Ready` polled after completion"
//   0x14177d750  off_14177D750
//   0x1414aaf50  sub_1414AAF50
//   0x141490720  sub_141490720
//   0x1417680d8  unk_1417680D8
//   0x140001660  sub_140001660
//   0x140018650  sub_140018650
//   0x1416c2d4b  sub_1416C2D4B
//   0x14146b840  sub_14146B840
//   0x1417674a8  aCouldNotResolv   "could not resolve to any address"
//   0x1413064d0  sub_1413064D0
//   0x1405dc7d0  sub_1405DC7D0
//   0x140fa2c80  sub_140FA2C80
//   0x141018b80  sub_141018B80
//   0x140575f20  sub_140575F20
//   0x140574820  sub_140574820
//   0x140574db0  sub_140574DB0
//   0x14054e3c0  sub_14054E3C0
//   0x141768f00  off_141768F00
//   0x1412e7580  sub_1412E7580
//   0x1412f2a80  sub_1412F2A80
//   0x1412f2740  sub_1412F2740
//   0x1405de950  sub_1405DE950
//   0x1412f1bf0  sub_1412F1BF0
//   0x1412f9060  sub_1412F9060
//   0x1405e80c0  sub_1405E80C0
//   0x1412ec290  sub_1412EC290
//   0x1412e9930  sub_1412E9930
//   0x1412e9570  sub_1412E9570
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_140588900(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r14d
  int v13; // edx
  int v14; // r15d
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 *v20; // r13
  _BYTE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
  _BYTE *v26; // rsi
  __int128 v27; // rax
  volatile signed __int64 *v28; // rcx
  __int16 v29; // r12
  unsigned __int16 v30; // bx
  char v31; // al
  __int64 v32; // rdx
  volatile signed __int64 *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // rcx
  unsigned int v37; // esi
  unsigned int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int64 v44; // rcx
  unsigned __int32 v45; // esi
  __int32 v46; // r13d
  unsigned __int32 v47; // eax
  __int64 v48; // r12
  unsigned __int32 v49; // r14d
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int16 *v54; // rax
  __int64 v55; // rcx
  volatile signed __int64 *v56; // rax
  __int64 v57; // r12
  __int64 v58; // rcx
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rcx
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  __int64 v65; // rax
  unsigned __int16 v66; // r12
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // rax
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm2
  char v73; // r13
  __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // rdx
  void (__fastcall *v79)(__int64); // rax
  __int64 *v80; // rax
  char v82[248]; // [rsp+28h] [rbp-58h] BYREF
  char v83[248]; // [rsp+120h] [rbp+A0h] BYREF
  _BYTE v84[248]; // [rsp+218h] [rbp+198h] BYREF
  __m256i v85; // [rsp+310h] [rbp+290h] BYREF
  __int128 v86; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v87; // [rsp+340h] [rbp+2C0h]
  __int64 v88; // [rsp+350h] [rbp+2D0h]
  unsigned __int16 v89; // [rsp+360h] [rbp+2E0h]
  char v90; // [rsp+362h] [rbp+2E2h]
  __int64 v91; // [rsp+5B8h] [rbp+538h]
  int v92; // [rsp+5C0h] [rbp+540h]
  __int64 v93; // [rsp+5D8h] [rbp+558h]
  int v94; // [rsp+5E0h] [rbp+560h]
  __int64 v95; // [rsp+5F8h] [rbp+578h]
  int v96; // [rsp+600h] [rbp+580h]
  __int64 v97; // [rsp+648h] [rbp+5C8h]
  __int64 v98; // [rsp+6A0h] [rbp+620h] BYREF
  __int128 v99; // [rsp+6A8h] [rbp+628h]
  __m256i *v100; // [rsp+6B8h] [rbp+638h]
  __int128 v101; // [rsp+6C0h] [rbp+640h]
  __m256i *v102; // [rsp+6D0h] [rbp+650h]
  __int64 v103; // [rsp+6D8h] [rbp+658h]
  __int64 v104; // [rsp+6E0h] [rbp+660h]
  __int64 v105; // [rsp+6E8h] [rbp+668h]
  __int64 v106; // [rsp+6F0h] [rbp+670h]
  __int64 v107; // [rsp+6F8h] [rbp+678h]
  __int64 v108; // [rsp+700h] [rbp+680h]
  volatile signed __int64 *v109; // [rsp+708h] [rbp+688h]
  __int64 v110; // [rsp+710h] [rbp+690h]
  __m256i v111; // [rsp+718h] [rbp+698h] BYREF
  __int128 v112; // [rsp+738h] [rbp+6B8h]
  __int64 v113; // [rsp+748h] [rbp+6C8h] BYREF
  volatile signed __int64 *v114[3]; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v115; // [rsp+768h] [rbp+6E8h]
  __int64 v116; // [rsp+770h] [rbp+6F0h]
  __int64 *v117; // [rsp+778h] [rbp+6F8h]
  __int64 v118; // [rsp+780h] [rbp+700h]
  __int64 v119; // [rsp+788h] [rbp+708h]
  __int64 v120; // [rsp+790h] [rbp+710h]
  __int128 v121; // [rsp+798h] [rbp+718h] BYREF
  __int128 v122; // [rsp+7A8h] [rbp+728h]
  __int64 v123; // [rsp+7B8h] [rbp+738h]
  __int128 v124; // [rsp+7C0h] [rbp+740h] BYREF
  __m256i *v125; // [rsp+7D0h] [rbp+750h]
  __int128 v126; // [rsp+7D8h] [rbp+758h] BYREF
  __m256i *v127; // [rsp+7E8h] [rbp+768h]
  volatile signed __int64 *v128; // [rsp+7F0h] [rbp+770h] BYREF
  __int64 v129; // [rsp+7F8h] [rbp+778h] BYREF
  __int64 v130; // [rsp+800h] [rbp+780h]
  __int64 v131; // [rsp+808h] [rbp+788h]
  __int64 v132; // [rsp+810h] [rbp+790h]
  _OWORD v133[2]; // [rsp+818h] [rbp+798h] BYREF
  __int128 v134; // [rsp+838h] [rbp+7B8h]
  __int64 v135; // [rsp+848h] [rbp+7C8h]
  __int128 v136; // [rsp+850h] [rbp+7D0h]
  __int128 v137; // [rsp+860h] [rbp+7E0h]
  __int128 v138; // [rsp+870h] [rbp+7F0h]
  __int128 v139; // [rsp+880h] [rbp+800h]
  char v140; // [rsp+890h] [rbp+810h]
  unsigned __int16 v141; // [rsp+898h] [rbp+818h]
  unsigned __int16 v142; // [rsp+89Ah] [rbp+81Ah]
  unsigned __int16 v143; // [rsp+89Ch] [rbp+81Ch]
  __int16 v144; // [rsp+89Eh] [rbp+81Eh]
  __int16 v145; // [rsp+8A0h] [rbp+820h]
  unsigned __int16 v146; // [rsp+8A2h] [rbp+822h]
  char v147; // [rsp+8A4h] [rbp+824h]
  _BYTE v148[7]; // [rsp+8A5h] [rbp+825h]
  __int16 v149; // [rsp+8B0h] [rbp+830h]
  unsigned __int16 v150; // [rsp+8B2h] [rbp+832h]
  char v151; // [rsp+8B4h] [rbp+834h]
  __int64 v152; // [rsp+8B8h] [rbp+838h]
  __m256i v153; // [rsp+8C0h] [rbp+840h] BYREF
  __int128 *v154; // [rsp+8E0h] [rbp+860h]
  volatile signed __int64 *v155; // [rsp+8F0h] [rbp+870h] BYREF
  volatile signed __int64 *v156; // [rsp+8F8h] [rbp+878h] BYREF
  volatile signed __int64 *v157; // [rsp+900h] [rbp+880h] BYREF
  volatile signed __int64 *v158; // [rsp+908h] [rbp+888h] BYREF
  __int64 v159; // [rsp+910h] [rbp+890h]
  _QWORD v160[2]; // [rsp+918h] [rbp+898h] BYREF
  __int128 v161; // [rsp+928h] [rbp+8A8h]
  char v162; // [rsp+93Ch] [rbp+8BCh]
  char v163; // [rsp+93Dh] [rbp+8BDh]
  char v164; // [rsp+93Eh] [rbp+8BEh]
  char v165; // [rsp+93Fh] [rbp+8BFh]
  char v166; // [rsp+940h] [rbp+8C0h]
  char v167; // [rsp+941h] [rbp+8C1h]
  char v168; // [rsp+942h] [rbp+8C2h]
  char v169; // [rsp+943h] [rbp+8C3h]
  char v170; // [rsp+944h] [rbp+8C4h]
  char v171; // [rsp+945h] [rbp+8C5h]
  char v172; // [rsp+946h] [rbp+8C6h]
  char v173; // [rsp+947h] [rbp+8C7h]
  char v174; // [rsp+948h] [rbp+8C8h]
  char v175; // [rsp+949h] [rbp+8C9h] BYREF
  _BYTE v176[2]; // [rsp+94Ah] [rbp+8CAh] BYREF
  unsigned __int16 v177; // [rsp+94Ch] [rbp+8CCh]
  char v178; // [rsp+94Fh] [rbp+8CFh]
  __int64 v179; // [rsp+950h] [rbp+8D0h]
  char v180; // [rsp+95Dh] [rbp+8DDh]
  char v181; // [rsp+95Eh] [rbp+8DEh]
  char v182; // [rsp+95Fh] [rbp+8DFh]
  __int64 v183; // [rsp+960h] [rbp+8E0h]

  v183 = -2; /*0x14058891b*/
  sub_141684120(v83, a3, 248); /*0x140588942*/
  v180 = 1; /*0x140588947*/
  sub_1412EB530(&v113, a2); /*0x140588958*/
  if ( *(_DWORD *)a2 != 1 ) /*0x140588961*/
  {
    sub_141684120(&v85, a3, 248); /*0x1405889d2*/
    *(_QWORD *)&v124 = a2 + 48; /*0x1405889d7*/
    *((_QWORD *)&v124 + 1) = a2 + 8; /*0x1405889de*/
    v125 = &v85; /*0x1405889e5*/
    sub_140616830((_DWORD)a1, a2 + 48, 0, (unsigned int)&v124, a4); /*0x140588a01*/
    sub_1407D7E70(&v85); /*0x140588a0e*/
    goto LABEL_110; /*0x140588a14*/
  }
  v117 = a1; /*0x140588963*/
  sub_141684120(v82, a3, 248); /*0x140588977*/
  v182 = 1; /*0x14058897c*/
  v8 = sub_1412F09C0(); /*0x140588989*/
  v9 = *(unsigned __int8 *)(v8 + 72); /*0x14058898c*/
  if ( v9 != 1 ) /*0x140588993*/
  {
    if ( v9 == 2 ) /*0x14058899c*/
      goto LABEL_4; /*0x14058899c*/
    v182 = 1; /*0x140588a19*/
    sub_14148BBF0(v8, sub_140B82FF0); /*0x140588a2a*/
    *(_BYTE *)(v8 + 72) = 1; /*0x140588a30*/
  }
  if ( *(_BYTE *)(v8 + 70) != 2 ) /*0x140588a38*/
    goto LABEL_132; /*0x140588a38*/
  *(_BYTE *)(v8 + 70) = 1; /*0x140588a3e*/
  v10 = 720; /*0x140588a4b*/
  if ( *(_BYTE *)(a2 + 48) ) /*0x140588a42*/
    v10 = 512; /*0x140588a50*/
  v11 = *(_QWORD *)(a2 + 56) + v10; /*0x140588a54*/
  v182 = 1; /*0x140588a58*/
  v12 = sub_141302F30(v11); /*0x140588a65*/
  v14 = v13; /*0x140588a68*/
  if ( (*(_BYTE *)(v8 + 56) & 1) != 0 ) /*0x140588a6f*/
  {
    v15 = *(_DWORD *)(v8 + 60); /*0x140588a71*/
    v16 = *(_DWORD *)(v8 + 64); /*0x140588a75*/
  }
  else
  {
    v182 = 1; /*0x140588a7b*/
    v15 = sub_1412FEBA0(); /*0x140588a88*/
    v16 = v17; /*0x140588a8b*/
  }
  *(_DWORD *)(v8 + 56) = 1; /*0x140588a92*/
  *(_DWORD *)(v8 + 60) = v12; /*0x140588a99*/
  *(_DWORD *)(v8 + 64) = v14; /*0x140588a9d*/
  v182 = 1; /*0x140588aa1*/
  sub_1412F6360(&v85, v8, a2 + 48); /*0x140588ab5*/
  v85.m256i_i64[3] = __PAIR64__(v16, v15); /*0x140588abb*/
  v124 = *(_OWORD *)&v85.m256i_u64[1]; /*0x140588ad7*/
  v125 = (__m256i *)__PAIR64__(v16, v15); /*0x140588ae5*/
  if ( v85.m256i_i64[0] == -2 ) /*0x140588af0*/
  {
LABEL_4:
    v182 = 1; /*0x14058899e*/
    sub_1416C2100(&off_141792398); /*0x1405889ac*/
  }
  v102 = v125; /*0x140588afd*/
  v101 = v124; /*0x140588b0b*/
  if ( v85.m256i_i64[0] == -1 ) /*0x140588b16*/
  {
LABEL_132:
    v182 = 1; /*0x140589faa*/
    sub_1416C32C0(&unk_141766AF5, 387, &off_141764458); /*0x140589fc4*/
  }
  v98 = v85.m256i_i64[0]; /*0x140588b1c*/
  v99 = v101; /*0x140588b2a*/
  v100 = v102; /*0x140588b38*/
  sub_141684120(v84, a3, 248); /*0x140588b4f*/
  v178 = 1; /*0x140588b54*/
  v18 = sub_1412F90E0(&v175); /*0x140588b62*/
  v118 = v19; /*0x140588b68*/
  v119 = v18; /*0x140588b6f*/
  if ( !v18 ) /*0x140588b79*/
  {
    sub_1405DAB10(v84); /*0x140589fd3*/
    sub_1416C3060( /*0x140589fff*/
      (unsigned int)aFailedToParkTh,
      21,
      (unsigned int)&v175,
      (unsigned int)&unk_141769398,
      (__int64)&off_141766E98);
  }
  sub_141684120(&v124, v84, 248); /*0x140588b96*/
  v20 = &v121; /*0x140588ba9*/
  while ( 2 ) /*0x140588bb0*/
  {
    v21 = (_BYTE *)sub_1412F09C0(); /*0x140588bb0*/
    v25 = (unsigned __int8)v21[72]; /*0x140588bb6*/
    if ( v25 != 1 ) /*0x140588bbd*/
    {
      if ( v25 == 2 ) /*0x140588bc2*/
        goto LABEL_21; /*0x140588bc2*/
      v26 = v21; /*0x140588bce*/
      sub_14148BBF0(v21, sub_140B82FF0); /*0x140588bd1*/
      v21 = v26; /*0x140588bd7*/
      v26[72] = 1; /*0x140588bda*/
    }
    LOBYTE(v25) = v21[68]; /*0x140588be0*/
    v22 = (unsigned __int8)v21[69]; /*0x140588be4*/
    *((_WORD *)v21 + 34) = -32767; /*0x140588be8*/
LABEL_21:
    v176[0] = v25; /*0x140588bee*/
    v176[1] = v22; /*0x140588bf4*/
    switch ( v151 ) /*0x140588c0f*/
    {
      case 0: /*0x140588c0f*/
        v27 = v124; /*0x140588c11*/
        v28 = (volatile signed __int64 *)v125; /*0x140588c1f*/
        v29 = v149; /*0x140588c26*/
        v30 = v150; /*0x140588c2e*/
        v126 = v124; /*0x140588c35*/
        v127 = v125; /*0x140588c43*/
        v145 = v149; /*0x140588c4a*/
        v146 = v150; /*0x140588c52*/
        v147 = 0; /*0x140588c59*/
LABEL_25:
        *(_DWORD *)&v148[3] = 1; /*0x140588cab*/
        v148[0] = 0; /*0x140588cb6*/
        v157 = *((volatile signed __int64 **)&v27 + 1); /*0x140588ccf*/
        v158 = (volatile signed __int64 *)v27; /*0x140588ccf*/
        *(_WORD *)&v148[1] = 257; /*0x140588cd6*/
        v156 = v28; /*0x140588cdf*/
        sub_14104B490(&v85); /*0x140588ce9*/
        v95 = 300; /*0x140588cef*/
        v96 = 0; /*0x140588cfa*/
        v91 = 30; /*0x140588d04*/
        v92 = 0; /*0x140588d0f*/
        v97 = 10; /*0x140588d19*/
        v93 = 60; /*0x140588d24*/
        v94 = 0; /*0x140588d2f*/
        v31 = sub_141042BD0(&v85); /*0x140588d3c*/
        v33 = (volatile signed __int64 *)v32; /*0x140588d42*/
        if ( (v31 & 1) != 0 ) /*0x140588d47*/
        {
          v153.m256i_i64[0] = v32; /*0x140588d49*/
          *(_QWORD *)&v121 = &v153; /*0x140588d57*/
          *((_QWORD *)&v121 + 1) = sub_141031F10; /*0x140588d65*/
          sub_14149C0F0(&v111, &unk_141768210, &v121); /*0x140588d7d*/
          sub_1405E12D0(&v153); /*0x140588d86*/
          v33 = (volatile signed __int64 *)v111.m256i_i64[1]; /*0x140588d93*/
          v34 = v111.m256i_i64[0]; /*0x140588d93*/
          if ( v111.m256i_i64[0] != -1 ) /*0x140588d9e*/
          {
            v35 = v111.m256i_i64[2]; /*0x140588da0*/
            goto LABEL_54; /*0x140588da7*/
          }
        }
        v148[0] = 1; /*0x140588db0*/
        v155 = v33; /*0x140588db7*/
        build_upstream_direct_client(&v85); /*0x140588dc1*/
        v33 = (volatile signed __int64 *)v85.m256i_i64[1]; /*0x140588dce*/
        v34 = v85.m256i_i64[0]; /*0x140588dce*/
        if ( v85.m256i_i64[0] != -1 ) /*0x140588dd9*/
        {
          v35 = v85.m256i_i64[2]; /*0x140588ddb*/
          v148[6] = 0; /*0x140588de2*/
          if ( v148[0] ) /*0x140588df0*/
            goto LABEL_52; /*0x140588df0*/
          goto LABEL_54; /*0x140588df0*/
        }
        v148[6] = 1; /*0x140588e2a*/
        v114[2] = (volatile signed __int64 *)v85.m256i_i64[1]; /*0x140588e31*/
        *(_QWORD *)&v161 = v158; /*0x140588e3f*/
        *((_QWORD *)&v161 + 1) = v157; /*0x140588e4d*/
        v160[0] = v156; /*0x140588e5b*/
        *(_DWORD *)v148 = 0; /*0x140588e62*/
        v85.m256i_i64[0] = 1; /*0x140588e73*/
        *(_OWORD *)&v85.m256i_u64[1] = 1u; /*0x140588e7e*/
        v85.m256i_i8[24] = 0; /*0x140588e94*/
        *(_QWORD *)&v86 = v155; /*0x140588e9b*/
        nullsub_1(v36); /*0x140588ea2*/
        v39 = sub_140001650(40, 8); /*0x140588eb1*/
        if ( !v39 ) /*0x140588eb9*/
          sub_1416C2D31(8, 40); /*0x140589e8c*/
        v40 = v86; /*0x140588ebf*/
        *(_QWORD *)(v39 + 32) = v86; /*0x140588ec6*/
        v41 = *(_OWORD *)v85.m256i_i8; /*0x140588eca*/
        *(_OWORD *)(v39 + 16) = *(_OWORD *)&v85.m256i_u64[2]; /*0x140588ed8*/
        *(_OWORD *)v39 = v41; /*0x140588edc*/
        v153.m256i_i64[0] = v39; /*0x140588edf*/
        v148[6] = 0; /*0x140588ee6*/
        v85.m256i_i64[0] = 1; /*0x140588eed*/
        *(_OWORD *)&v85.m256i_u64[1] = 1u; /*0x140588ef8*/
        v85.m256i_i8[24] = 0; /*0x140588f0e*/
        *(_QWORD *)&v86 = v33; /*0x140588f15*/
        nullsub_1(v40); /*0x140588f1c*/
        v42 = sub_140001650(40, 8); /*0x140588f2b*/
        if ( !v42 ) /*0x140588f33*/
          sub_1416C2D31(8, 40); /*0x140589ea1*/
        v177 = v30; /*0x140588f3c*/
        *(_QWORD *)(v42 + 32) = v86; /*0x140588f4a*/
        v43 = *(_OWORD *)v85.m256i_i8; /*0x140588f4e*/
        *(_OWORD *)(v42 + 16) = *(_OWORD *)&v85.m256i_u64[2]; /*0x140588f5c*/
        *(_OWORD *)v42 = v43; /*0x140588f60*/
        *(_QWORD *)&v121 = v42; /*0x140588f63*/
        sub_140FFA6E0(&v85); /*0x140588f6a*/
        v45 = v85.m256i_i32[0]; /*0x140588f70*/
        v46 = (v85.m256i_i32[0] >> 13) - 1; /*0x140588f7b*/
        v38 = 0; /*0x140588f7f*/
        LOWORD(v159) = v29; /*0x140588f83*/
        if ( v85.m256i_i32[0] >> 13 <= 0 ) /*0x140588f8b*/
        {
          v47 = (1 - (v85.m256i_i32[0] >> 13)) / 0x190u + 1; /*0x140588f9f*/
          v44 = 400 * v47; /*0x140588fa1*/
          v46 += v44; /*0x140588fa7*/
          v38 = -146097 * v47; /*0x140588faa*/
        }
        v48 = v85.m256i_u32[1]; /*0x140588fb0*/
        v49 = v85.m256i_u32[2]; /*0x140588fb7*/
        nullsub_1(v44); /*0x140588fbe*/
        v50 = (_QWORD *)sub_140001650(24, 8); /*0x140588fcd*/
        if ( !v50 ) /*0x140588fd5*/
          sub_1416C2D31(8, 24); /*0x140589eb6*/
        v37 = v38 + ((v45 >> 4) & 0x1FF) - v46 / 100; /*0x140588ffe*/
        *v50 = 1; /*0x14058903b*/
        v50[1] = 1; /*0x140589042*/
        v50[2] = 1000 * (v48 + 86400LL * (int)(((v46 / 100) >> 2) + v37 + ((1461 * v46) >> 2) - 719163)) /*0x14058904a*/
               + v49 / 0xF4240uLL;
        v148[5] = 1; /*0x14058904e*/
        *(_OWORD *)v111.m256i_i8 = v161; /*0x14058905c*/
        v111.m256i_i64[2] = v160[0]; /*0x140589078*/
        v111.m256i_i64[3] = v153.m256i_i64[0]; /*0x140589086*/
        *(_QWORD *)&v112 = v121; /*0x140589094*/
        *((_QWORD *)&v112 + 1) = v50; /*0x14058909b*/
        v51 = sub_14056E1C0(); /*0x1405890a2*/
        v20 = &v121; /*0x1405890a8*/
        LOWORD(v37) = v159; /*0x1405890af*/
        LOWORD(v38) = v177; /*0x1405890b6*/
        *(_QWORD *)&v121 = v51; /*0x1405890bd*/
        v174 = 1; /*0x1405890c4*/
        v179 = v51; /*0x1405890ce*/
        sub_140B57960(&v85); /*0x1405890d5*/
        v174 = 0; /*0x1405890db*/
        v153.m256i_i64[0] = sub_14056F600( /*0x14058910b*/
                              v179,
                              (unsigned int)"/__aimami/health",
                              16,
                              (unsigned int)&v85,
                              (__int64)&off_141768CB8);
        v173 = 1; /*0x140589112*/
        v179 = v153.m256i_i64[0]; /*0x14058911c*/
        sub_140B57DB0(&v85); /*0x140589123*/
        v173 = 0; /*0x140589129*/
        v160[0] = sub_14056F600(v179, (unsigned int)aIdeV1ChatCompl, 25, (unsigned int)&v85, (__int64)&off_141768CF0); /*0x140589159*/
        v172 = 1; /*0x140589160*/
        v179 = v160[0]; /*0x14058916a*/
        sub_140B57C40(&v85); /*0x140589171*/
        v172 = 0; /*0x140589177*/
        *((_QWORD *)&v161 + 1) = sub_14056F600( /*0x1405891a7*/
                                   v179,
                                   (unsigned int)aIdeV1Responses,
                                   18,
                                   (unsigned int)&v85,
                                   (__int64)&off_141768D20);
        v171 = 1; /*0x1405891ae*/
        v179 = *((_QWORD *)&v161 + 1); /*0x1405891b8*/
        sub_140B57AD0(&v85); /*0x1405891bf*/
        v171 = 0; /*0x1405891c5*/
        *(_QWORD *)&v161 = sub_14056F600( /*0x1405891f5*/
                             v179,
                             (unsigned int)aIdeV1Messages,
                             17,
                             (unsigned int)&v85,
                             (__int64)&off_141768D50);
        v170 = 1; /*0x1405891fc*/
        v179 = v161; /*0x140589206*/
        sub_140B57680(&v85); /*0x14058920d*/
        v170 = 0; /*0x140589213*/
        v152 = sub_14056F600(v179, (unsigned int)aIdeV1Models, 15, (unsigned int)&v85, (__int64)&off_141768D78); /*0x140589243*/
        v169 = 1; /*0x14058924a*/
        v179 = v152; /*0x140589254*/
        sub_140B57F20(&v85); /*0x14058925b*/
        v169 = 0; /*0x140589261*/
        v103 = sub_14056F600(v179, (unsigned int)aCodexV1Respons, 27, (unsigned int)&v85, (__int64)&off_141768DB0); /*0x140589291*/
        v168 = 1; /*0x140589298*/
        v179 = v103; /*0x1405892a2*/
        sub_140B58090(&v85); /*0x1405892a9*/
        v168 = 0; /*0x1405892af*/
        v104 = sub_14056F600(v179, (unsigned int)aCodexRouterV1R, 26, (unsigned int)&v85, (__int64)&off_141768DE8); /*0x1405892df*/
        v167 = 1; /*0x1405892e6*/
        v179 = v104; /*0x1405892f0*/
        sub_140B584E0(&v85); /*0x1405892f7*/
        v167 = 0; /*0x1405892fd*/
        v105 = sub_14056F600(v179, (unsigned int)aCodexRouterV1R_0, 34, (unsigned int)&v85, (__int64)&off_141768E28); /*0x14058932d*/
        v166 = 1; /*0x140589334*/
        v179 = v105; /*0x14058933e*/
        sub_140B58370(&v85); /*0x140589345*/
        v166 = 0; /*0x14058934b*/
        v106 = sub_14056F600(v179, (unsigned int)aCodexRouterV1I, 35, (unsigned int)&v85, (__int64)&off_141768E68); /*0x14058937b*/
        v165 = 1; /*0x140589382*/
        v179 = v106; /*0x14058938c*/
        sub_140B58200(&v85); /*0x140589393*/
        v165 = 0; /*0x140589399*/
        v107 = sub_14056F600(v179, (unsigned int)aCodexRouterV1I_0, 29, (unsigned int)&v85, (__int64)&off_141768EA0); /*0x1405893c9*/
        v164 = 1; /*0x1405893d0*/
        v179 = v107; /*0x1405893da*/
        sub_140B577F0(&v85); /*0x1405893e1*/
        v164 = 0; /*0x1405893e7*/
        v52 = sub_14056F600(v179, (unsigned int)aCodexRouterV1H, 23, (unsigned int)&v85, (__int64)&off_141768ED0); /*0x140589411*/
        v53 = sub_1404F2B60(v52, 1, 0x20000000); /*0x140589425*/
        v148[5] = 0; /*0x14058942b*/
        v85 = v111; /*0x140589447*/
        v86 = v112; /*0x140589455*/
        v128 = (volatile signed __int64 *)sub_1404F2240(v53, &v85); /*0x140589468*/
        v148[4] = 1; /*0x14058946f*/
        v142 = v37; /*0x140589476*/
        v143 = v38; /*0x14058947d*/
        HIBYTE(v144) = 0; /*0x140589484*/
LABEL_39:
        LOBYTE(v144) = 1; /*0x140589492*/
        *(_QWORD *)&v134 = -1; /*0x140589499*/
        sub_140669240(&v85, v37, v38); /*0x1405894ac*/
        v54 = (__int16 *)v85.m256i_i64[1]; /*0x1405894b9*/
        v55 = v85.m256i_i64[1] + 2 * v85.m256i_i64[2]; /*0x1405894c7*/
        v129 = v85.m256i_i64[1]; /*0x1405894cb*/
        v130 = v85.m256i_i64[1]; /*0x1405894d2*/
        v131 = v85.m256i_i64[0]; /*0x1405894d9*/
        v132 = v55; /*0x1405894e0*/
        if ( v85.m256i_i64[1] == v55 ) /*0x1405894ea*/
          goto LABEL_40; /*0x1405894ea*/
        break; /*0x1405894ea*/
      case 1: /*0x140588c0f*/
        sub_1416C3400(&off_141767C18, v22, v23, v24); /*0x140589f27*/
      case 2: /*0x140588c0f*/
        sub_1416C3420(&off_141767C18, v22, v23, v24); /*0x140589f15*/
      case 3: /*0x140588c0f*/
        switch ( v147 ) /*0x140588c85*/
        {
          case 0: /*0x140588c85*/
            v27 = v126; /*0x140588c87*/
            v28 = (volatile signed __int64 *)v127; /*0x140588c95*/
            v29 = v145; /*0x140588c9c*/
            v30 = v146; /*0x140588ca4*/
            goto LABEL_25; /*0x140588ca4*/
          case 1: /*0x140588c85*/
            sub_1416C3400(&off_141768EE8, v22, v23, v24); /*0x140589f4b*/
          case 2: /*0x140588c85*/
            sub_1416C3420(&off_141768EE8, v22, v23, v24); /*0x140589f39*/
          case 3: /*0x140588c85*/
            switch ( HIBYTE(v144) ) /*0x140588e15*/
            {
              case 0: /*0x140588e15*/
                v37 = v142; /*0x140588e17*/
                v38 = v143; /*0x140588e1e*/
                break; /*0x140588e25*/
              case 1: /*0x140588e15*/
                sub_1416C3400(&off_1417680C0, v22, v23, v24); /*0x140589f6f*/
              case 2: /*0x140588e15*/
                sub_1416C3420(&off_1417680C0, v22, v23, v24); /*0x140589f5d*/
              case 3: /*0x140588e15*/
                switch ( v140 ) /*0x14058954a*/
                {
                  case 0: /*0x14058954a*/
                    goto LABEL_97;
                  case 1: /*0x14058954a*/
                    sub_1416C3400(&off_141766E80, v22, v23, v24); /*0x140589fa2*/
                  case 2: /*0x14058954a*/
                    sub_1416C3420(&off_141766E80, v22, v23, v24); /*0x140589f93*/
                  case 3: /*0x14058954a*/
                    goto LABEL_98;
                }
            }
            goto LABEL_39; /*0x140588e25*/
        }
    }
    while ( 1 ) /*0x140589c3c*/
    {
      v130 = (__int64)(v54 + 1); /*0x140589c3c*/
      v141 = *v54; /*0x140589c46*/
      *(_DWORD *)((char *)v133 + 2) = 16777343; /*0x140589c4d*/
      WORD3(v133[0]) = v141; /*0x140589c57*/
      LOWORD(v133[0]) = 0; /*0x140589c5e*/
      v137 = v133[1]; /*0x140589c75*/
      v136 = v133[0]; /*0x140589c7d*/
      v140 = 0; /*0x140589c85*/
LABEL_97:
      v139 = v137; /*0x140589c9c*/
      v138 = v136; /*0x140589ca4*/
LABEL_98:
      v76 = (unsigned __int16)v138; /*0x140589cac*/
      LOWORD(v138) = -2; /*0x140589cb3*/
      if ( (_WORD)v76 == 0xFFFE ) /*0x140589cc0*/
        sub_1416C3000(aReadyPolledAft, 31, &off_14177D750); /*0x140589e77*/
      v74 = *((_QWORD *)&v138 + 1); /*0x1405899c0*/
      if ( (_WORD)v76 != 0xFFFF ) /*0x1405899cb*/
        break; /*0x1405899cb*/
LABEL_92:
      v140 = 1; /*0x140589b5a*/
      v160[0] = v74; /*0x140589b61*/
      v85.m256i_i64[0] = (__int64)v133; /*0x140589b6f*/
      v85.m256i_i64[1] = (__int64)sub_1414AAF50; /*0x140589b7d*/
      v85.m256i_i64[2] = (__int64)v160; /*0x140589b8b*/
      v85.m256i_i64[3] = (__int64)sub_141490720; /*0x140589b99*/
      sub_14149C0F0(&v121, &unk_1417680D8, &v85); /*0x140589bad*/
      *(_OWORD *)v153.m256i_i8 = v121; /*0x140589bba*/
      v153.m256i_i64[2] = v122; /*0x140589bc8*/
      if ( (_QWORD)v134 != -1 && (_QWORD)v134 ) /*0x140589bdf*/
        sub_140001660(*((_QWORD *)&v134 + 1), v134, 1); /*0x140589bee*/
      LOBYTE(v144) = 1; /*0x140589bf3*/
      v135 = v153.m256i_i64[2]; /*0x140589c01*/
      v134 = *(_OWORD *)v153.m256i_i8; /*0x140589c0f*/
      sub_140018650(v160); /*0x140589c1b*/
      v54 = (__int16 *)v130; /*0x140589c21*/
      v55 = v132; /*0x140589c28*/
      if ( v130 == v132 ) /*0x140589c32*/
      {
LABEL_40:
        if ( v131 ) /*0x1405894fa*/
          sub_140001660(v129, 2 * v131, 2); /*0x14058950c*/
        LOBYTE(v144) = 0; /*0x140589511*/
        v34 = v134; /*0x140589518*/
        if ( (_QWORD)v134 == -1 ) /*0x140589523*/
        {
          nullsub_1(v55); /*0x14058954c*/
          v56 = (volatile signed __int64 *)sub_140001650(38, 1); /*0x14058955b*/
          if ( !v56 ) /*0x140589563*/
            sub_1416C2D4B(1, 38); /*0x140589f84*/
          v33 = v56; /*0x140589569*/
          qmemcpy((void *)v56, "no free port available for relay proxy", 38); /*0x14058957e*/
          v34 = 38; /*0x14058958f*/
          v35 = 38; /*0x140589594*/
        }
        else
        {
          v33 = *((volatile signed __int64 **)&v134 + 1); /*0x140589525*/
          v35 = v135; /*0x14058952c*/
        }
        v57 = 2; /*0x140589599*/
        goto LABEL_48; /*0x140589599*/
      }
    }
    WORD6(v161) = WORD3(v138); /*0x1405899d9*/
    DWORD2(v161) = *(_DWORD *)((char *)&v138 + 2); /*0x1405899e7*/
    *(_OWORD *)v153.m256i_i8 = v139; /*0x1405899f5*/
    v160[0] = 0; /*0x1405899fc*/
    v75 = 0; /*0x140589a07*/
    while ( 1 ) /*0x140589a3b*/
    {
      v77 = v75; /*0x140589a3b*/
      v177 = v76; /*0x140589a42*/
      if ( (_WORD)v76 == 2 ) /*0x140589a49*/
      {
        if ( !v75 ) /*0x140589b33*/
        {
          v120 = 0; /*0x140589b35*/
          LOBYTE(v76) = 20; /*0x140589b46*/
          v77 = sub_14146B840(v76, aCouldNotResolv, 32); /*0x140589b54*/
        }
        v74 = v77; /*0x140589b57*/
        goto LABEL_92; /*0x140589b57*/
      }
      LOWORD(v121) = v76; /*0x140589a4f*/
      WORD3(v121) = WORD6(v161); /*0x140589a5d*/
      *(_DWORD *)((char *)&v121 + 2) = DWORD2(v161); /*0x140589a67*/
      *((_QWORD *)&v121 + 1) = v74; /*0x140589a69*/
      v122 = *(_OWORD *)v153.m256i_i8; /*0x140589a77*/
      v120 = v75; /*0x140589a7b*/
      sub_1413064D0(&v85, &v121); /*0x140589a88*/
      v57 = v85.m256i_i64[0]; /*0x140589a8e*/
      if ( v85.m256i_i64[0] != 2 ) /*0x140589a99*/
        break; /*0x140589a99*/
      v75 = v85.m256i_i64[1]; /*0x140589a9f*/
      if ( v77 ) /*0x140589aa9*/
      {
        v76 = (unsigned int)(v77 & 3) - 2; /*0x140589ab0*/
        if ( (unsigned int)v76 >= 2 && (v77 & 3) != 0 ) /*0x140589abf*/
        {
          v115 = v85.m256i_i64[1]; /*0x140589ac5*/
          v116 = v77 - 1; /*0x140589ad0*/
          v159 = *(_QWORD *)(v77 - 1); /*0x140589adb*/
          v179 = *(_QWORD *)(v77 + 7); /*0x140589ae6*/
          if ( *(_QWORD *)v179 ) /*0x140589aed*/
            (*(void (__fastcall **)(__int64, __int64))v179)(v159, v85.m256i_i64[1]); /*0x140589afc*/
          v78 = *(_QWORD *)(v179 + 8); /*0x140589b0d*/
          if ( v78 ) /*0x140589b14*/
            sub_140001660(v159, v78, *(_QWORD *)(v179 + 16)); /*0x140589b1e*/
          sub_140001660(v116, 24, 8); /*0x140589a1d*/
          v75 = v115; /*0x140589a22*/
        }
      }
      v160[0] = v75; /*0x140589a30*/
      LOWORD(v76) = 2; /*0x140589a37*/
    }
    if ( v77 ) /*0x140589cce*/
      sub_140018650(v160); /*0x140589cd7*/
    v34 = v85.m256i_i64[1]; /*0x140589cdd*/
    v35 = v85.m256i_i64[3]; /*0x140589ceb*/
    v33 = (volatile signed __int64 *)v85.m256i_i64[2]; /*0x140589ceb*/
    v20 = (__int128 *)v86; /*0x140589cf2*/
    v140 = 1; /*0x140589cf9*/
    if ( v57 != -1 ) /*0x140589d04*/
    {
      v177 = v141; /*0x140589d0d*/
      if ( v131 ) /*0x140589d1e*/
        sub_140001660(v129, 2 * v131, 2); /*0x140589d30*/
      if ( (_QWORD)v134 != -1 && (_QWORD)v134 ) /*0x140589d49*/
        sub_140001660(*((_QWORD *)&v134 + 1), v134, 1); /*0x140589d5c*/
LABEL_48:
      v144 = 256; /*0x14058959f*/
      sub_1405DC7D0(&v129); /*0x1405895af*/
      if ( v57 == 2 ) /*0x1405895b9*/
      {
        if ( !_InterlockedDecrement64(v128) ) /*0x1405895c6*/
          sub_140FA2C80(&v128); /*0x1405895d3*/
        *(_WORD *)&v148[4] = 0; /*0x1405895d9*/
        v148[6] = 0; /*0x1405895e2*/
        if ( v148[0] ) /*0x1405895f0*/
        {
LABEL_52:
          if ( !_InterlockedDecrement64(v155) ) /*0x1405895f9*/
            sub_141018B80(&v155); /*0x140589606*/
        }
LABEL_54:
        v148[0] = 0; /*0x140589610*/
        if ( v148[1] && !_InterlockedDecrement64(v156) ) /*0x140589627*/
          sub_140575F20(&v156); /*0x140589634*/
        v148[1] = 0; /*0x14058963a*/
        if ( v148[2] && !_InterlockedDecrement64(v157) ) /*0x140589651*/
          sub_140574820(&v157); /*0x14058965e*/
        v148[2] = 0; /*0x140589664*/
        v59 = 1; /*0x14058966b*/
        if ( v148[3] && !_InterlockedDecrement64(v158) ) /*0x140589685*/
          sub_140574DB0(&v158); /*0x140589696*/
      }
      else
      {
        v153.m256i_i64[0] = v57; /*0x1405896a1*/
        v153.m256i_i64[1] = v34; /*0x1405896a8*/
        v153.m256i_i64[2] = (__int64)v33; /*0x1405896af*/
        v153.m256i_i64[3] = v35; /*0x1405896b6*/
        v154 = v20; /*0x1405896bd*/
        v85.m256i_i64[0] = 1; /*0x1405896c4*/
        v85.m256i_i64[1] = 1; /*0x1405896cf*/
        *(_QWORD *)&v87 = 0; /*0x1405896da*/
        BYTE8(v87) = 0; /*0x1405896e5*/
        nullsub_1(v58); /*0x1405896ec*/
        v60 = sub_140001650(64, 8); /*0x1405896fb*/
        if ( !v60 ) /*0x140589703*/
          sub_1416C2D31(8, 64); /*0x140589ecb*/
        v62 = *(_OWORD *)v85.m256i_i8; /*0x140589709*/
        v63 = *(_OWORD *)&v85.m256i_u64[2]; /*0x140589710*/
        v64 = v86; /*0x140589717*/
        *(_OWORD *)(v60 + 48) = v87; /*0x140589725*/
        *(_OWORD *)(v60 + 32) = v64; /*0x140589729*/
        *(_OWORD *)(v60 + 16) = v63; /*0x14058972d*/
        *(_OWORD *)v60 = v62; /*0x140589731*/
        if ( _InterlockedIncrement64((volatile signed __int64 *)v60) <= 0 ) /*0x140589738*/
          goto LABEL_134; /*0x140589738*/
        v152 = v60; /*0x14058973e*/
        *(_QWORD *)&v161 = v60; /*0x140589745*/
        nullsub_1(v61); /*0x14058974c*/
        v65 = sub_140001650(24, 8); /*0x14058975b*/
        v66 = v177; /*0x14058976a*/
        if ( !v65 ) /*0x140589772*/
        {
          v163 = 1; /*0x140589ed6*/
          v162 = 1; /*0x140589edd*/
          sub_1416C2D31(8, 24); /*0x140589eee*/
        }
        *(_QWORD *)v65 = 1; /*0x140589778*/
        *(_QWORD *)(v65 + 8) = 1; /*0x14058977f*/
        *(_BYTE *)(v65 + 16) = 1; /*0x140589787*/
        *((_QWORD *)&v161 + 1) = v65; /*0x14058978b*/
        if ( _InterlockedIncrement64((volatile signed __int64 *)v65) <= 0 ) /*0x140589796*/
LABEL_134:
          BUG(); /*0x14058a005*/
        v148[4] = 0; /*0x14058979c*/
        v85 = v153; /*0x1405897b1*/
        *(_QWORD *)&v86 = v154; /*0x1405897c6*/
        *((_QWORD *)&v86 + 1) = v128; /*0x1405897d4*/
        *((_QWORD *)&v87 + 1) = v161; /*0x1405897e2*/
        *(_QWORD *)&v87 = v65; /*0x1405897e9*/
        v89 = v66; /*0x1405897f0*/
        v90 = 0; /*0x1405897f8*/
        v181 = 1; /*0x1405897ff*/
        v67 = sub_14054E3C0(&v85, &off_141768F00); /*0x140589816*/
        v181 = 1; /*0x140589819*/
        if ( (unsigned __int8)sub_1412F2A80(v67) ) /*0x140589823*/
        {
          v181 = 1; /*0x14058982d*/
          sub_1412E7580(v67); /*0x140589837*/
        }
        v68 = v152; /*0x14058983d*/
        v160[0] = 1; /*0x140589844*/
        v160[1] = v152; /*0x14058984f*/
        sub_1412F2740(&v121, 1); /*0x14058985e*/
        *(_QWORD *)&v87 = v123; /*0x140589872*/
        v86 = v122; /*0x140589884*/
        *(_OWORD *)&v85.m256i_u64[2] = v121; /*0x140589887*/
        v85.m256i_i64[0] = 1; /*0x14058988b*/
        v85.m256i_i64[1] = 1; /*0x140589896*/
        *((_QWORD *)&v87 + 1) = 1; /*0x1405898a1*/
        v88 = v68; /*0x1405898ac*/
        nullsub_1(&v86); /*0x1405898b3*/
        v69 = sub_140001650(72, 8); /*0x1405898c2*/
        if ( !v69 ) /*0x1405898ca*/
          sub_1416C2D31(8, 72); /*0x140589f03*/
        v34 = v69; /*0x1405898d0*/
        *(_QWORD *)(v69 + 64) = v88; /*0x1405898da*/
        v70 = *(_OWORD *)v85.m256i_i8; /*0x1405898de*/
        v71 = *(_OWORD *)&v85.m256i_u64[2]; /*0x1405898e5*/
        v72 = v86; /*0x1405898ec*/
        *(_OWORD *)(v69 + 48) = v87; /*0x1405898fa*/
        *(_OWORD *)(v69 + 32) = v72; /*0x1405898fe*/
        *(_OWORD *)(v69 + 16) = v71; /*0x140589902*/
        *(_OWORD *)v69 = v70; /*0x140589906*/
        v33 = *((volatile signed __int64 **)&v161 + 1); /*0x140589909*/
        v35 = v66; /*0x140589910*/
        *(_WORD *)&v148[4] = 0; /*0x140589914*/
        v148[6] = 0; /*0x14058991d*/
        *(_WORD *)v148 = 0; /*0x140589924*/
        v148[2] = 0; /*0x140589932*/
        v59 = 0; /*0x140589939*/
      }
      v148[3] = 0; /*0x140589940*/
      v147 = 1; /*0x140589947*/
      v73 = 1; /*0x14058994e*/
      sub_1405DE950(&v126); /*0x140589958*/
      v108 = v34; /*0x14058995e*/
      v109 = v33; /*0x140589965*/
      v110 = v35; /*0x14058996c*/
      goto LABEL_72; /*0x14058996c*/
    }
    HIBYTE(v144) = 3; /*0x140589d66*/
    v147 = 3; /*0x140589d6d*/
    v73 = 3; /*0x140589d74*/
    v59 = 2; /*0x140589d77*/
LABEL_72:
    v151 = v73; /*0x140589973*/
    v20 = &v121; /*0x140589988*/
    if ( v176[0] != 2 ) /*0x14058998f*/
      sub_1412F1BF0(v176); /*0x140589998*/
    if ( (_DWORD)v59 == 2 ) /*0x1405899a2*/
    {
      sub_1412F9060(&v175); /*0x1405899af*/
      continue; /*0x1405899b5*/
    }
    break;
  }
  sub_1405DAB10(&v124); /*0x140589d89*/
  v79 = *(void (__fastcall **)(__int64))(v119 + 24); /*0x140589d96*/
  v178 = 0; /*0x140589d9a*/
  v79(v118); /*0x140589da8*/
  v80 = v117; /*0x140589dab*/
  *v117 = v59; /*0x140589db2*/
  v80[1] = v108; /*0x140589dbc*/
  v80[2] = (__int64)v109; /*0x140589dc7*/
  v80[3] = v110; /*0x140589dd2*/
  v182 = 0; /*0x140589dd6*/
  sub_1405E80C0(&v98); /*0x140589de4*/
  a1 = v117; /*0x140589dea*/
LABEL_110:
  sub_1412EC290(&v113); /*0x140589df1*/
  if ( v113 != 2 ) /*0x140589e09*/
  {
    if ( v113 ) /*0x140589e15*/
    {
      if ( !_InterlockedDecrement64(v114[0]) ) /*0x140589e1e*/
      {
        v180 = 0; /*0x140589e24*/
        sub_1412E9930(v114); /*0x140589e2b*/
      }
    }
    else if ( !_InterlockedDecrement64(v114[0]) ) /*0x140589e3a*/
    {
      v180 = 0; /*0x140589e40*/
      sub_1412E9570(v114); /*0x140589e47*/
    }
  }
  return a1; /*0x140589e50*/
}
