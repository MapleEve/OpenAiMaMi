/*
 * owner-map: module=core::relay::codex_project_state tier=B evidence=panic-location-2hop
 * addr=0x14049bbd0 size=0x15fe name=collect_project_state_from_active_db
 * source: AiMaMi 1.2.3 windows-x64 stripped binary, IDA Hex-Rays decompile via idacall.py MCP
 * truncated_chunked=False
 */

/* refs (callees/data used):
 *  0x140499030  sub_140499030
 *  0x140429c50  sub_140429C50
 *  0x140001690  nullsub_1
 *  0x140001650  sub_140001650
 *  0x1416c2d31  sub_1416C2D31
 *  0x14148f3a0  sub_14148F3A0
 *  0x140fb8910  sub_140FB8910
 *  0x14149c0f0  sub_14149C0F0
 *  0x14175adec  unk_14175ADEC
 *  0x14043d020  sub_14043D020
 *  0x140fb95d0  sub_140FB95D0
 *  0x140499d50  sub_140499D50
 *  0x140308850  sub_140308850
 *  0x140001660  sub_140001660
 *  0x1416847b0  sub_1416847B0
 *  0x14175a966  aId_2  string="id"
 *  0x14175a968  aCwd_0  string="cwd"
 *  0x14175aa3a  unk_14175AA3A
 *  0x14175aa42  unk_14175AA42
 *  0x14175aa5b  unk_14175AA5B
 *  0x14175ab00  unk_14175AB00
 *  0x14175ab0d  unk_14175AB0D
 *  0x141756858  a0_9  string="0"
 *  0x14175ab27  unk_14175AB27
 *  0x14175ab31  unk_14175AB31
 *  0x14041f680  sub_14041F680
 *  0x14175ab48  unk_14175AB48
 *  0x14046f850  sub_14046F850
 *  0x1414b6b70  sub_1414B6B70
 *  0x1404de8f0  sub_1404DE8F0
 *  0x14042b4e0  sub_14042B4E0
 *  0x14043ce10  sub_14043CE10
 *  0x14043d1b0  sub_14043D1B0
 *  0x14175ab6e  unk_14175AB6E
 *  0x140320da0  sub_140320DA0
 *  0x1403210c0  sub_1403210C0
 *  0x140009b20  sub_140009B20
 *  0x14042b0e0  sub_14042B0E0
 *  0x1414b7120  sub_1414B7120
 *  0x140fba2b0  sub_140FBA2B0
 *  0x140388b60  sub_140388B60
 *  0x1416c2d4b  sub_1416C2D4B
 *  0x141684120  sub_141684120
 *  0x140499bf0  sub_140499BF0
 *  0x14149c500  sub_14149C500
 *  0x140306f50  sub_140306F50
 *  0x141689ab0  sub_141689AB0
 *  0x14049b870  sub_14049B870
 *  0x140307390  sub_140307390
 *  0x1414a3c90  sub_1414A3C90
 *  0x1414ac520  sub_1414AC520
 *  0x14175ac38  aCodexmateLibCo_21  string="codexmate_lib::core::relay::codex_project_state"
 *  0x14175ac20  off_14175AC20
 *  0x140985ba0  sub_140985BA0
 *  0x14175abc1  unk_14175ABC1
 *  0x141ec8d80  off_141EC8D80
 *  0x14049a2f0  sub_14049A2F0
 *  0x140009ef0  sub_140009EF0
 *  0x141757b59  unk_141757B59
 *  0x14043c900  sub_14043C900
 */

// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_project_state::collect_project_state_from_active_db | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall collect_project_state_from_active_db(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _BYTE *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // rax
  _OWORD *v18; // rcx
  __int64 v19; // rax
  _OWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r12
  __int64 v26; // r13
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r15
  __int64 v29; // r15
  int v30; // eax
  unsigned __int8 v31; // cl
  bool v32; // cf
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r12
  __int64 v38; // r13
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r15
  __int64 v41; // r15
  int v42; // eax
  char v43; // cl
  __int64 v44; // r15
  __int64 j; // rcx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // r13
  __int64 v49; // rdi
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r12
  __int64 v52; // r12
  int v53; // eax
  char v54; // cl
  __int64 v55; // rax
  void *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r14
  __int64 k; // rcx
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // r12
  __int64 v63; // r13
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // r15
  __int64 v66; // r15
  int v67; // eax
  char v68; // cl
  __int64 v69; // rax
  const char *v70; // rdi
  __int64 v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  __int128 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // r12
  __int64 v79; // rsi
  __int64 v80; // r14
  int v81; // eax
  __int64 v82; // r13
  __int64 v83; // r12
  __int64 v84; // rsi
  __int64 v85; // r12
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // r14
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rsi
  __int64 m; // rcx
  __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // r12
  unsigned __int64 v97; // r8
  unsigned __int64 v98; // r15
  __int64 v99; // r15
  int v100; // eax
  char v101; // cl
  __int64 v102; // rsi
  __int64 v103; // r12
  __int64 i; // rax
  __int64 v105; // rdx
  __int64 v106; // r13
  __int64 v107; // rax
  __int64 v108; // rdx
  _QWORD *v109; // rax
  __int128 v110; // [rsp+38h] [rbp-48h] BYREF
  __int64 v111; // [rsp+48h] [rbp-38h]
  _OWORD v112[7]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v113[2]; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD v114[2]; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v115; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v116; // [rsp+F0h] [rbp+70h]
  _QWORD v117[3]; // [rsp+100h] [rbp+80h] BYREF
  __int64 v118; // [rsp+118h] [rbp+98h]
  _QWORD v119[2]; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v120; // [rsp+130h] [rbp+B0h]
  __int64 v121; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v122; // [rsp+140h] [rbp+C0h]
  __int64 v123; // [rsp+148h] [rbp+C8h]
  __m512i v124; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v125; // [rsp+190h] [rbp+110h] BYREF
  __int64 v126; // [rsp+198h] [rbp+118h]
  __int64 v127; // [rsp+1A0h] [rbp+120h]
  __m512i *v128; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v129; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v130; // [rsp+1B8h] [rbp+138h]
  __int64 v131; // [rsp+1C0h] [rbp+140h]
  __int64 v132; // [rsp+1C8h] [rbp+148h]
  __int64 v133; // [rsp+1D0h] [rbp+150h]
  __int64 v134; // [rsp+1D8h] [rbp+158h]
  __int64 v135; // [rsp+1E0h] [rbp+160h]
  __int64 v136; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v137; // [rsp+1F0h] [rbp+170h]
  __int64 v138; // [rsp+1F8h] [rbp+178h]
  __int64 v139; // [rsp+200h] [rbp+180h]
  __m512i *v140; // [rsp+208h] [rbp+188h] BYREF
  _QWORD v141[2]; // [rsp+210h] [rbp+190h] BYREF
  __m512i *v142; // [rsp+220h] [rbp+1A0h]
  __int64 v143; // [rsp+228h] [rbp+1A8h]
  __int64 v144; // [rsp+230h] [rbp+1B0h]
  __int64 v145; // [rsp+238h] [rbp+1B8h]
  __m256i v146; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v147; // [rsp+260h] [rbp+1E0h]
  __int128 v148; // [rsp+270h] [rbp+1F0h]
  __int64 v149; // [rsp+288h] [rbp+208h]
  _BYTE v150[80]; // [rsp+290h] [rbp+210h] BYREF
  __int128 v151; // [rsp+2E0h] [rbp+260h]
  __int128 v152; // [rsp+2F0h] [rbp+270h]
  __int64 v153; // [rsp+300h] [rbp+280h]
  __int64 v154; // [rsp+308h] [rbp+288h]
  __int64 v155; // [rsp+310h] [rbp+290h]
  char v156; // [rsp+31Fh] [rbp+29Fh]
  __int64 v157; // [rsp+320h] [rbp+2A0h]
  char v158; // [rsp+32Dh] [rbp+2ADh]
  char v159; // [rsp+32Eh] [rbp+2AEh]
  char v160; // [rsp+32Fh] [rbp+2AFh]
  __int64 v161; // [rsp+330h] [rbp+2B0h]

  v161 = -2; /*0x14049bbeb*/
  sub_140499030(v150); /*0x14049bc06*/
  result = *(_QWORD *)v150; /*0x14049bc0b*/
  if ( *(_QWORD *)v150 == -1 ) /*0x14049bc16*/
  {
    *(_QWORD *)a1 = 0; /*0x14049be8a*/
    *(_QWORD *)(a1 + 8) = 8; /*0x14049be91*/
    *(_QWORD *)(a1 + 56) = 0; /*0x14049be99*/
    *(_OWORD *)(a1 + 16) = 0; /*0x14049bea4*/
    *(_OWORD *)(a1 + 72) = 0; /*0x14049bea8*/
    *(_QWORD *)(a1 + 32) = 8; /*0x14049beac*/
    *(_OWORD *)(a1 + 40) = 0; /*0x14049beb4*/
    return result; /*0x14049beb8*/
  }
  v131 = a1; /*0x14049bc1c*/
  v142 = *(__m512i **)&v150[8]; /*0x14049bc3f*/
  v130 = *(_QWORD *)v150; /*0x14049bc3f*/
  v122 = *(_QWORD *)&v150[16]; /*0x14049bc46*/
  sub_140429C50(v150, *(_QWORD *)&v150[8], *(_QWORD *)&v150[16], 32769); /*0x14049bc53*/
  if ( BYTE8(v152) == 0xFF ) /*0x14049bc60*/
  {
    v148 = *(_OWORD *)&v150[48]; /*0x14049bed9*/
    v147 = *(_OWORD *)&v150[32]; /*0x14049bee0*/
    v146 = *(__m256i *)v150; /*0x14049bee7*/
    nullsub_1(v8); /*0x14049bef5*/
    v154 = sub_140001650(24, 8); /*0x14049bf09*/
    if ( !v154 ) /*0x14049bf13*/
      sub_1416C2D31(8, 24); /*0x14049d1b0*/
    v140 = v142; /*0x14049bf20*/
    v141[0] = v122; /*0x14049bf2e*/
    v124.m512i_i64[0] = (__int64)&v140; /*0x14049bf3c*/
    v124.m512i_i64[1] = (__int64)sub_14148F3A0; /*0x14049bf4a*/
    v124.m512i_i64[2] = (__int64)&v146; /*0x14049bf58*/
    v124.m512i_i64[3] = (__int64)sub_140FB8910; /*0x14049bf66*/
    sub_14149C0F0(&v110, &unk_14175ADEC, &v124); /*0x14049bf7f*/
    v20 = (_OWORD *)v154; /*0x14049bf89*/
    *(_QWORD *)(v154 + 16) = v111; /*0x14049bf90*/
    *v20 = v110; /*0x14049bf98*/
    *(_OWORD *)&v124.m512i_u64[1] = 0; /*0x14049bf9e*/
    v21 = v131; /*0x14049bfa5*/
    *(_OWORD *)(v131 + 48) = 0; /*0x14049bfac*/
    *(_QWORD *)v21 = 0; /*0x14049bfb0*/
    *(_QWORD *)(v21 + 8) = 8; /*0x14049bfb7*/
    *(_QWORD *)(v21 + 16) = 0; /*0x14049bfbf*/
    *(_OWORD *)(v21 + 64) = *(_OWORD *)v124.m512i_i8; /*0x14049bfce*/
    *(_QWORD *)(v21 + 80) = 0; /*0x14049bfd2*/
    *(_QWORD *)(v21 + 24) = 1; /*0x14049bfda*/
    *(_QWORD *)(v21 + 32) = v20; /*0x14049bfe2*/
    *(_QWORD *)(v21 + 40) = 1; /*0x14049bfe6*/
    result = sub_14043D020(&v146); /*0x14049bff5*/
    goto LABEL_159; /*0x14049bffb*/
  }
  v149 = a4; /*0x14049bc66*/
  v112[6] = v152; /*0x14049bc74*/
  v112[5] = v151; /*0x14049bc7f*/
  v112[4] = *(_OWORD *)&v150[64]; /*0x14049bc8a*/
  v112[3] = *(_OWORD *)&v150[48]; /*0x14049bcaa*/
  v112[2] = *(_OWORD *)&v150[32]; /*0x14049bcae*/
  v112[1] = *(_OWORD *)&v150[16]; /*0x14049bcb2*/
  v112[0] = *(_OWORD *)v150; /*0x14049bcb6*/
  sub_140FB95D0(v150, v112, 0, 500000000); /*0x14049bcce*/
  if ( *(_QWORD *)v150 != -1 ) /*0x14049bcdc*/
    sub_14043D020(v150); /*0x14049bce5*/
  sub_140499D50(v150, v112); /*0x14049bcf6*/
  v9 = *(_QWORD *)&v150[8]; /*0x14049bd03*/
  v10 = *(_QWORD *)v150; /*0x14049bd03*/
  v11 = *(_QWORD *)&v150[24]; /*0x14049bd11*/
  v12 = *(_QWORD *)&v150[16]; /*0x14049bd11*/
  if ( *(_QWORD *)v150 != -1 ) /*0x14049bd1c*/
  {
    v13 = *(_QWORD *)&v150[40]; /*0x14049bd29*/
    v14 = *(_BYTE **)&v150[32]; /*0x14049bd29*/
    v15 = *(_QWORD *)&v150[56]; /*0x14049bd37*/
    v16 = *(_QWORD *)&v150[48]; /*0x14049bd37*/
    goto LABEL_7; /*0x14049bd37*/
  }
  v115 = *(_QWORD *)&v150[8]; /*0x14049c000*/
  v116 = *(_OWORD *)&v150[16]; /*0x14049c004*/
  if ( !*(_QWORD *)&v150[8] ) /*0x14049c00f*/
  {
    v10 = 8; /*0x14049c46a*/
    v149 = 0; /*0x14049c470*/
    v144 = 8; /*0x14049c480*/
    v16 = 0; /*0x14049c487*/
    v153 = 0; /*0x14049c48a*/
    v14 = nullptr; /*0x14049c495*/
    v71 = 0; /*0x14049c497*/
    v9 = 0; /*0x14049c499*/
    v72 = 0; /*0x14049c49b*/
    v73 = 0; /*0x14049c49d*/
LABEL_152:
    *(_QWORD *)v150 = v72; /*0x14049cf91*/
    *(_QWORD *)&v150[32] = v72; /*0x14049cf98*/
    *(_QWORD *)&v150[64] = v73; /*0x14049cf9f*/
    sub_140308850(&v146, v150); /*0x14049cfb4*/
    for ( i = v146.m256i_i64[0]; v146.m256i_i64[0]; i = v146.m256i_i64[0] ) /*0x14049cfc4*/
    {
      v105 = *(_QWORD *)(i + 24 * v146.m256i_i64[2] + 8); /*0x14049cfeb*/
      if ( v105 ) /*0x14049cff3*/
        sub_140001660(*(_QWORD *)(i + 24 * v146.m256i_i64[2] + 16), v105, 1); /*0x14049d007*/
      sub_140308850(&v146, v150); /*0x14049d013*/
    }
    v106 = 0; /*0x14049d025*/
    v103 = 0; /*0x14049d028*/
    v12 = v71; /*0x14049d02b*/
    v107 = v149; /*0x14049d02e*/
    if ( v149 == -1 ) /*0x14049d039*/
      goto LABEL_165; /*0x14049d039*/
    goto LABEL_157; /*0x14049d039*/
  }
  v118 = a3; /*0x14049c015*/
  v144 = *(_QWORD *)&v150[24]; /*0x14049c01c*/
  v157 = 0; /*0x14049c023*/
  v154 = *(_QWORD *)&v150[16]; /*0x14049c03a*/
  v22 = *(_QWORD *)&v150[16]; /*0x14049c041*/
  v145 = *(_QWORD *)&v150[8]; /*0x14049c044*/
  while ( 2 ) /*0x14049c04b*/
  {
    v23 = v9 + 8; /*0x14049c04b*/
    v153 = v9; /*0x14049c04f*/
    v155 = *(unsigned __int16 *)(v9 + 274); /*0x14049c05d*/
    v24 = 3LL * (unsigned int)(8 * v155); /*0x14049c06b*/
    v25 = -1; /*0x14049c06f*/
    do /*0x14049c0c7*/
    {
      if ( !v24 ) /*0x14049c083*/
      {
        v25 = v155; /*0x14049c0d5*/
        goto LABEL_24; /*0x14049c0d5*/
      }
      v26 = v23 + 24; /*0x14049c085*/
      v27 = *(_QWORD *)(v23 + 16); /*0x14049c08d*/
      v28 = v27 - 2; /*0x14049c094*/
      if ( v27 >= 2 ) /*0x14049c098*/
        v27 = 2; /*0x14049c098*/
      v29 = -(__int64)v28; /*0x14049c09c*/
      v30 = sub_1416847B0(aId_2, *(_QWORD *)(v23 + 8), v27); /*0x14049c0a2*/
      if ( v30 ) /*0x14049c0ab*/
        v29 = v30; /*0x14049c0ab*/
      v31 = (v29 > 0) - (v29 < 0); /*0x14049c0b8*/
      ++v25; /*0x14049c0ba*/
      v24 -= 24; /*0x14049c0bd*/
      v23 = v26; /*0x14049c0c1*/
    }
    while ( v31 == 1 ); /*0x14049c0c7*/
    if ( v31 == 255 ) /*0x14049c0d1*/
    {
LABEL_24:
      v32 = v22-- == 0; /*0x14049c0dc*/
      if ( !v32 ) /*0x14049c0e0*/
      {
        v9 = *(_QWORD *)(v153 + 8 * v25 + 280); /*0x14049c0ed*/
        continue; /*0x14049c0f5*/
      }
LABEL_71:
      v76 = 8; /*0x14049c5bf*/
      v77 = 0; /*0x14049c5c4*/
      v14 = nullptr; /*0x14049c5c6*/
      v78 = 0; /*0x14049c5c8*/
      v16 = 0; /*0x14049c5cb*/
      v10 = 8; /*0x14049c5ce*/
      v149 = 0; /*0x14049c5d4*/
      goto LABEL_151; /*0x14049c5df*/
    }
    break;
  }
  v157 = 0; /*0x14049c0fa*/
  v33 = v154; /*0x14049c111*/
  v34 = v145; /*0x14049c118*/
LABEL_26:
  v35 = v34 + 8; /*0x14049c11f*/
  v153 = v34; /*0x14049c123*/
  v155 = *(unsigned __int16 *)(v34 + 274); /*0x14049c131*/
  v36 = 3LL * (unsigned int)(8 * v155); /*0x14049c13f*/
  v37 = -1; /*0x14049c143*/
  do /*0x14049c197*/
  {
    if ( !v36 ) /*0x14049c153*/
    {
      v37 = v155; /*0x14049c1a2*/
LABEL_36:
      v32 = v33-- == 0; /*0x14049c1a9*/
      if ( v32 ) /*0x14049c1ad*/
        goto LABEL_71; /*0x14049c1ad*/
      v34 = *(_QWORD *)(v153 + 8 * v37 + 280); /*0x14049c1ba*/
      goto LABEL_26; /*0x14049c1c2*/
    }
    v38 = v35 + 24; /*0x14049c155*/
    v39 = *(_QWORD *)(v35 + 16); /*0x14049c15d*/
    v40 = v39 - 3; /*0x14049c164*/
    if ( v39 >= 3 ) /*0x14049c168*/
      v39 = 3; /*0x14049c168*/
    v41 = -(__int64)v40; /*0x14049c16c*/
    v42 = sub_1416847B0(aCwd_0, *(_QWORD *)(v35 + 8), v39); /*0x14049c172*/
    if ( v42 ) /*0x14049c17b*/
      v41 = v42; /*0x14049c17b*/
    v43 = (v41 > 0) - (v41 < 0); /*0x14049c188*/
    ++v37; /*0x14049c18a*/
    v36 -= 24; /*0x14049c18d*/
    v35 = v38; /*0x14049c191*/
  }
  while ( v43 == 1 ); /*0x14049c197*/
  if ( v43 ) /*0x14049c19e*/
    goto LABEL_36; /*0x14049c19e*/
  v44 = v154; /*0x14049c1d4*/
  for ( j = v145; ; j = *(_QWORD *)(v157 + 8 * v48 + 280) ) /*0x14049c1db*/
  {
    v46 = j + 8; /*0x14049c1e2*/
    v157 = j; /*0x14049c1e6*/
    v153 = *(unsigned __int16 *)(j + 274); /*0x14049c1f4*/
    v47 = 3LL * (unsigned int)(8 * v153); /*0x14049c202*/
    v48 = -1; /*0x14049c206*/
    do /*0x14049c257*/
    {
      if ( !v47 ) /*0x14049c213*/
      {
        v48 = v153; /*0x14049c262*/
        goto LABEL_48; /*0x14049c262*/
      }
      v49 = v46 + 24; /*0x14049c215*/
      v50 = *(_QWORD *)(v46 + 16); /*0x14049c21d*/
      v51 = v50 - 8; /*0x14049c224*/
      if ( v50 >= 8 ) /*0x14049c228*/
        v50 = 8; /*0x14049c228*/
      v52 = -(__int64)v51; /*0x14049c22c*/
      v53 = sub_1416847B0(&unk_14175AA3A, *(_QWORD *)(v46 + 8), v50); /*0x14049c232*/
      if ( v53 ) /*0x14049c23b*/
        v52 = v53; /*0x14049c23b*/
      v54 = (v52 > 0) - (v52 < 0); /*0x14049c248*/
      ++v48; /*0x14049c24a*/
      v47 -= 24; /*0x14049c24d*/
      v46 = v49; /*0x14049c251*/
    }
    while ( v54 == 1 ); /*0x14049c257*/
    if ( !v54 ) /*0x14049c25e*/
    {
      v55 = 25; /*0x14049c28e*/
      v56 = &unk_14175AA42; /*0x14049c293*/
      v57 = v154; /*0x14049c29a*/
      goto LABEL_50; /*0x14049c260*/
    }
LABEL_48:
    v57 = v154; /*0x14049c269*/
    v32 = v44-- == 0; /*0x14049c270*/
    if ( v32 ) /*0x14049c274*/
      break; /*0x14049c274*/
  }
  v55 = 5; /*0x14049cbd2*/
  v56 = &unk_14175AA5B; /*0x14049cbd7*/
LABEL_50:
  v114[0] = v56; /*0x14049c2a1*/
  v114[1] = v55; /*0x14049c2a5*/
  v58 = v57; /*0x14049c2b5*/
  for ( k = v145; ; k = *(_QWORD *)(v157 + 8 * v62 + 280) ) /*0x14049c2b8*/
  {
    v60 = k + 8; /*0x14049c2bf*/
    v157 = k; /*0x14049c2c3*/
    v153 = *(unsigned __int16 *)(k + 274); /*0x14049c2d1*/
    v61 = 3LL * (unsigned int)(8 * v153); /*0x14049c2df*/
    v62 = -1; /*0x14049c2e3*/
    do /*0x14049c337*/
    {
      if ( !v61 ) /*0x14049c2f3*/
      {
        v62 = v153; /*0x14049c342*/
        goto LABEL_61; /*0x14049c342*/
      }
      v63 = v60 + 24; /*0x14049c2f5*/
      v64 = *(_QWORD *)(v60 + 16); /*0x14049c2fd*/
      v65 = v64 - 13; /*0x14049c304*/
      if ( v64 >= 0xD ) /*0x14049c308*/
        v64 = 13; /*0x14049c308*/
      v66 = -(__int64)v65; /*0x14049c30c*/
      v67 = sub_1416847B0(&unk_14175AB00, *(_QWORD *)(v60 + 8), v64); /*0x14049c312*/
      if ( v67 ) /*0x14049c31b*/
        v66 = v67; /*0x14049c31b*/
      v68 = (v66 > 0) - (v66 < 0); /*0x14049c328*/
      ++v62; /*0x14049c32a*/
      v61 -= 24; /*0x14049c32d*/
      v60 = v63; /*0x14049c331*/
    }
    while ( v68 == 1 ); /*0x14049c337*/
    if ( !v68 ) /*0x14049c33e*/
    {
      v69 = 26; /*0x14049c36e*/
      v70 = (const char *)&unk_14175AB0D; /*0x14049c373*/
      goto LABEL_63; /*0x14049c340*/
    }
LABEL_61:
    v32 = v58-- == 0; /*0x14049c350*/
    if ( v32 ) /*0x14049c354*/
      break; /*0x14049c354*/
  }
  v70 = a0_9; /*0x14049cbe3*/
  v157 = v154; /*0x14049cbf7*/
  for ( m = v145; ; m = *(_QWORD *)(v153 + 8 * v63 + 280) ) /*0x14049cbfe*/
  {
    v94 = m + 8; /*0x14049cc05*/
    v153 = m; /*0x14049cc09*/
    v155 = *(unsigned __int16 *)(m + 274); /*0x14049cc17*/
    v95 = 3LL * (unsigned int)(8 * v155); /*0x14049cc25*/
    v63 = -1; /*0x14049cc29*/
    do /*0x14049cc77*/
    {
      if ( !v95 ) /*0x14049cc33*/
      {
        v63 = v155; /*0x14049cc82*/
        goto LABEL_132; /*0x14049cc82*/
      }
      v96 = v94 + 24; /*0x14049cc35*/
      v97 = *(_QWORD *)(v94 + 16); /*0x14049cc3d*/
      v98 = v97 - 10; /*0x14049cc44*/
      if ( v97 >= 0xA ) /*0x14049cc48*/
        v97 = 10; /*0x14049cc48*/
      v99 = -(__int64)v98; /*0x14049cc4c*/
      v100 = sub_1416847B0(&unk_14175AB27, *(_QWORD *)(v94 + 8), v97); /*0x14049cc52*/
      if ( v100 ) /*0x14049cc5b*/
        v99 = v100; /*0x14049cc5b*/
      v101 = (v99 > 0) - (v99 < 0); /*0x14049cc68*/
      ++v63; /*0x14049cc6a*/
      v95 -= 24; /*0x14049cc6d*/
      v94 = v96; /*0x14049cc71*/
    }
    while ( v101 == 1 ); /*0x14049cc77*/
    if ( !v101 ) /*0x14049cc7e*/
    {
      v69 = 23; /*0x14049ccb5*/
      v70 = (const char *)&unk_14175AB31; /*0x14049ccba*/
      goto LABEL_63; /*0x14049ccc1*/
    }
LABEL_132:
    if ( !v157 ) /*0x14049cc94*/
      break; /*0x14049cc94*/
    --v157; /*0x14049cc9a*/
  }
  v69 = 1; /*0x14049d18a*/
LABEL_63:
  v113[0] = v70; /*0x14049c37a*/
  v113[1] = v69; /*0x14049c37e*/
  v146.m256i_i64[0] = (__int64)v114; /*0x14049c386*/
  v146.m256i_i64[1] = (__int64)sub_14041F680; /*0x14049c394*/
  sub_14149C0F0(v150, &unk_14175AB48, &v146); /*0x14049c3b0*/
  v155 = *(_QWORD *)&v150[8]; /*0x14049c3dd*/
  v157 = *(_QWORD *)v150; /*0x14049c3dd*/
  sub_14046F850(v150, v112, *(_QWORD *)&v150[8], *(_QWORD *)&v150[16]); /*0x14049c3e4*/
  v146 = *(__m256i *)&v150[8]; /*0x14049c3f7*/
  v147 = *(_OWORD *)&v150[40]; /*0x14049c413*/
  v148 = *(_OWORD *)&v150[56]; /*0x14049c421*/
  if ( *(_DWORD *)v150 == 1 ) /*0x14049c42b*/
  {
    *(_OWORD *)&v150[48] = v148; /*0x14049c449*/
    *(_OWORD *)&v150[32] = v147; /*0x14049c450*/
    *(__m256i *)v150 = v146; /*0x14049c457*/
    goto LABEL_76; /*0x14049c465*/
  }
  *(_OWORD *)&v124.m512i_u64[6] = v148; /*0x14049c4c0*/
  *(_OWORD *)&v124.m512i_u64[4] = v147; /*0x14049c4c7*/
  *(__m256i *)v124.m512i_i8 = v146; /*0x14049c4ce*/
  v74 = sub_1414B6B70(*((_QWORD *)&v148 + 1)); /*0x14049c4e3*/
  if ( !v74 ) /*0x14049c4ea*/
  {
    v140 = &v124; /*0x14049c51d*/
    v141[0] = 0; /*0x14049c524*/
    sub_1404DE8F0(v150, &v140); /*0x14049c53d*/
    *(_QWORD *)&v75 = *(_QWORD *)v150; /*0x14049c543*/
    if ( *(_QWORD *)v150 == -1 ) /*0x14049c54e*/
    {
      *((_QWORD *)&v75 + 1) = v141; /*0x14049c5e4*/
      if ( v141[0] ) /*0x14049c5f3*/
      {
        sub_14042B4E0(v150, v141, 0); /*0x14049c603*/
        goto LABEL_74; /*0x14049c603*/
      }
      *(_QWORD *)&v75 = 0x8000000000000009uLL; /*0x14049ce83*/
    }
    else
    {
      *((_QWORD *)&v75 + 1) = *(_QWORD *)&v150[8]; /*0x14049c554*/
      v146 = *(__m256i *)&v150[16]; /*0x14049c562*/
      v147 = *(_OWORD *)&v150[48]; /*0x14049c57e*/
    }
    *(_OWORD *)v150 = v75; /*0x14049c585*/
    *(__m256i *)&v150[16] = v146; /*0x14049c5a8*/
    *(_OWORD *)&v150[48] = v147; /*0x14049c5b6*/
LABEL_74:
    sub_14043CE10(&v140); /*0x14049c609*/
    goto LABEL_75; /*0x14049c610*/
  }
  *(_OWORD *)v150 = 0x8000000000000013uLL; /*0x14049c4f8*/
  *(_QWORD *)&v150[16] = v74; /*0x14049c50a*/
LABEL_75:
  sub_14043D1B0(&v124); /*0x14049c616*/
LABEL_76:
  v80 = *(_QWORD *)&v150[8]; /*0x14049c623*/
  v79 = *(_QWORD *)v150; /*0x14049c62a*/
  if ( *(_QWORD *)v150 != -1 ) /*0x14049c635*/
    sub_14043D020(v150); /*0x14049c63e*/
  if ( v80 <= 0 ) /*0x14049c649*/
    v80 = 0; /*0x14049c649*/
  if ( v79 != -1 ) /*0x14049c651*/
    v80 = 0; /*0x14049c651*/
  v153 = v80; /*0x14049c655*/
  if ( v157 ) /*0x14049c666*/
    sub_140001660(v155, v157, 1); /*0x14049c675*/
  *(_QWORD *)v150 = v114; /*0x14049c67a*/
  *(_QWORD *)&v150[8] = sub_14041F680; /*0x14049c681*/
  *(_QWORD *)&v150[16] = v113; /*0x14049c68c*/
  *(_QWORD *)&v150[24] = sub_14041F680; /*0x14049c693*/
  sub_14149C0F0(&v146, &unk_14175AB6E, v150); /*0x14049c6af*/
  v133 = v146.m256i_i64[1]; /*0x14049c6dc*/
  v139 = v146.m256i_i64[0]; /*0x14049c6dc*/
  sub_14046F850(v150, v112, v146.m256i_i64[1], v146.m256i_i64[2]); /*0x14049c6e3*/
  v10 = *(_QWORD *)&v150[8]; /*0x14049c6e9*/
  v77 = *(_QWORD *)&v150[24]; /*0x14049c6f7*/
  v14 = *(_BYTE **)&v150[40]; /*0x14049c705*/
  v76 = *(_QWORD *)&v150[32]; /*0x14049c705*/
  v16 = *(_QWORD *)&v150[56]; /*0x14049c713*/
  v78 = *(_QWORD *)&v150[48]; /*0x14049c713*/
  if ( v150[0] ) /*0x14049c728*/
  {
    v155 = *(_QWORD *)&v150[64]; /*0x14049c72a*/
    v157 = *(_QWORD *)&v150[16]; /*0x14049c731*/
    goto LABEL_148; /*0x14049c738*/
  }
  v124 = *(__m512i *)&v150[8]; /*0x14049c73d*/
  v81 = sub_1414B6B70(*(_QWORD *)&v150[64]); /*0x14049c775*/
  v77 = v81; /*0x14049c77a*/
  if ( v81 ) /*0x14049c77f*/
  {
    v157 = 0; /*0x14049c781*/
    v10 = 0x8000000000000013uLL; /*0x14049c78c*/
LABEL_147:
    sub_14043D1B0(&v124); /*0x14049cef7*/
LABEL_148:
    if ( v139 ) /*0x14049cf0e*/
      sub_140001660(v133, v139, 1); /*0x14049cf1d*/
    v149 = -1; /*0x14049cf22*/
LABEL_151:
    v73 = v144; /*0x14049cf2d*/
    *(_QWORD *)&v150[8] = 0; /*0x14049cf34*/
    *(_QWORD *)&v150[16] = v145; /*0x14049cf46*/
    *(_QWORD *)&v150[24] = v154; /*0x14049cf54*/
    *(_QWORD *)&v150[40] = 0; /*0x14049cf5b*/
    *(_QWORD *)&v150[48] = v145; /*0x14049cf66*/
    *(_QWORD *)&v150[56] = v154; /*0x14049cf6d*/
    v72 = 1; /*0x14049cf74*/
    v144 = v76; /*0x14049cf79*/
    v153 = v78; /*0x14049cf80*/
    v71 = v77; /*0x14049cf87*/
    v9 = v157; /*0x14049cf8a*/
    goto LABEL_152; /*0x14049cf8a*/
  }
  v136 = 0; /*0x14049c79b*/
  v137 = 8; /*0x14049c7a6*/
  v138 = 0; /*0x14049c7b1*/
  v117[0] = 0; /*0x14049c7bc*/
  v117[2] = 0; /*0x14049c7c7*/
  v119[0] = 0; /*0x14049c7d2*/
  v120 = 0; /*0x14049c7dd*/
  v121 = 0; /*0x14049c7e8*/
  v128 = &v124; /*0x14049c7fa*/
  v129 = 0; /*0x14049c801*/
  v14 = v150; /*0x14049c808*/
  v134 = 0; /*0x14049c80f*/
  while ( 1 ) /*0x14049c824*/
  {
    sub_1404DE8F0(v150, &v128); /*0x14049c824*/
    v10 = *(_QWORD *)v150; /*0x14049c82a*/
    if ( *(_QWORD *)v150 != -1 ) /*0x14049c835*/
    {
      v157 = *(_QWORD *)&v150[8]; /*0x14049cccd*/
      v76 = *(_QWORD *)&v150[24]; /*0x14049ccdb*/
      v77 = *(_QWORD *)&v150[16]; /*0x14049ccdb*/
LABEL_135:
      v78 = *(_QWORD *)&v150[40]; /*0x14049cce2*/
      v14 = *(_BYTE **)&v150[32]; /*0x14049cce9*/
      v155 = *(_QWORD *)&v150[56]; /*0x14049ccfe*/
      v16 = *(_QWORD *)&v150[48]; /*0x14049ccfe*/
LABEL_146:
      sub_14043CE10(&v128); /*0x14049cebc*/
      sub_140320DA0(v119); /*0x14049ced0*/
      v159 = 1; /*0x14049ced6*/
      sub_1403210C0(v117); /*0x14049cee4*/
      sub_140009B20(&v136); /*0x14049cef1*/
      goto LABEL_147; /*0x14049cef1*/
    }
    v78 = v129; /*0x14049c83b*/
    if ( !v129 ) /*0x14049c845*/
      break; /*0x14049c845*/
    sub_14042B0E0(v150, &v129, 0); /*0x14049c858*/
    v157 = *(_QWORD *)&v150[8]; /*0x14049c86c*/
    v10 = *(_QWORD *)v150; /*0x14049c86c*/
    v76 = *(_QWORD *)&v150[24]; /*0x14049c87a*/
    v77 = *(_QWORD *)&v150[16]; /*0x14049c87a*/
    if ( *(_QWORD *)v150 != -1 ) /*0x14049c885*/
      goto LABEL_135; /*0x14049c885*/
    if ( (unsigned int)sub_1414B7120(*(_QWORD *)(v78 + 56)) < 2 ) /*0x14049c898*/
    {
      v10 = 0x800000000000000BuLL; /*0x14049ce4b*/
      if ( v157 ) /*0x14049ce5f*/
      {
        sub_140001660(v77, v157, 1); /*0x14049ce6a*/
        v77 = v16; /*0x14049ce6f*/
        v76 = v63; /*0x14049ce72*/
        v157 = 1; /*0x14049ce7a*/
      }
      else
      {
        v157 = 1; /*0x14049ceaf*/
        v77 = v16; /*0x14049ceb6*/
        v76 = v63; /*0x14049ceb9*/
      }
      goto LABEL_146; /*0x14049ce81*/
    }
    v155 = v77; /*0x14049c89e*/
    sub_140FBA2B0(&v150[8], v78, 1); /*0x14049c8b5*/
    if ( *(_QWORD *)&v150[8] < 3u /*0x14049c8e7*/
      || (sub_1414A3C90(v150, *(_QWORD *)&v150[16], *(_QWORD *)&v150[24]), *(_DWORD *)v150 == 1) )
    {
      v16 = v155; /*0x14049cb9b*/
      if ( v157 ) /*0x14049cba2*/
        sub_140001660(v155, v157, 1); /*0x14049cbad*/
      v121 = ++v134; /*0x14049cbc3*/
      v63 = v76; /*0x14049cbca*/
    }
    else
    {
      v82 = *(_QWORD *)&v150[8]; /*0x14049c8ed*/
      v83 = *(_QWORD *)&v150[16]; /*0x14049c8f4*/
      sub_140388B60((unsigned int)v150, *(_DWORD *)&v150[16], 0, 1, 1); /*0x14049c913*/
      v143 = *(_QWORD *)&v150[8]; /*0x14049c91f*/
      if ( *(_DWORD *)v150 == 1 ) /*0x14049c92d*/
        sub_1416C2D4B(v143, *(_QWORD *)&v150[16]); /*0x14049d1c6*/
      v84 = *(_QWORD *)&v150[16]; /*0x14049c933*/
      if ( v83 ) /*0x14049c93d*/
        sub_141684120(*(_QWORD *)&v150[16], v82, v83); /*0x14049c948*/
      v158 = 1; /*0x14049c94d*/
      v132 = v84; /*0x14049c95b*/
      sub_140499BF0(&v125, v84, v83); /*0x14049c968*/
      v85 = v127; /*0x14049c96e*/
      if ( v127 ) /*0x14049c978*/
      {
        v146.m256i_i64[0] = v157; /*0x14049c985*/
        v146.m256i_i64[1] = v155; /*0x14049c993*/
        v146.m256i_i64[2] = v76; /*0x14049c99a*/
        v156 = 1; /*0x14049c9a1*/
        sub_14149C500(v150, &v125); /*0x14049c9b2*/
        v156 = 0; /*0x14049c9b8*/
        sub_140306F50(&v140, v119, &v146, v150); /*0x14049c9d7*/
        if ( v140 != (__m512i *)-1LL && v140 ) /*0x14049c9ed*/
        {
          sub_140001660(v141[0], v140, 1); /*0x14049c9fc*/
          v85 = v127; /*0x14049ca01*/
        }
        v86 = v126; /*0x14049ca08*/
        v160 = 1; /*0x14049ca0f*/
        if ( (unsigned __int8)sub_14049B870(v126, v85) /*0x14049ca4e*/
          || (v160 = 1, sub_14149C500(v150, &v125), v160 = 1, (unsigned __int8)sub_140307390(v117, v150)) )
        {
          if ( v125 ) /*0x14049ca66*/
            sub_140001660(v86, v125, 1); /*0x14049ca75*/
        }
        else
        {
          v123 = v86; /*0x14049caf4*/
          v135 = v125; /*0x14049cb02*/
          v89 = v138; /*0x14049cb09*/
          if ( v138 == v136 ) /*0x14049cb17*/
            sub_141689AB0(&v136); /*0x14049cb20*/
          v90 = v137; /*0x14049cb26*/
          v91 = 3 * v89; /*0x14049cb2d*/
          *(_QWORD *)(v137 + 8 * v91) = v135; /*0x14049cb38*/
          *(_QWORD *)(v90 + 8 * v91 + 8) = v123; /*0x14049cb43*/
          *(_QWORD *)(v90 + 8 * v91 + 16) = v85; /*0x14049cb48*/
          v138 = v89 + 1; /*0x14049cb50*/
        }
        v92 = v155; /*0x14049cb57*/
        v16 = v155; /*0x14049cb5e*/
        v63 = v76; /*0x14049cb61*/
        if ( v143 ) /*0x14049cb6e*/
        {
          sub_140001660(v132, v143, 1); /*0x14049cb81*/
          v16 = v92; /*0x14049cb86*/
          v63 = v76; /*0x14049cb89*/
        }
      }
      else
      {
        v87 = v157; /*0x14049ca89*/
        if ( v125 ) /*0x14049ca90*/
          sub_140001660(v126, v125, 1); /*0x14049ca9f*/
        if ( v143 ) /*0x14049caae*/
          sub_140001660(v132, v143, 1); /*0x14049cabd*/
        v88 = v155; /*0x14049cac2*/
        v16 = v155; /*0x14049cac9*/
        v63 = v76; /*0x14049cacc*/
        if ( v87 ) /*0x14049cad2*/
        {
          sub_140001660(v155, v87, 1); /*0x14049cae4*/
          v16 = v88; /*0x14049cae9*/
          v63 = v76; /*0x14049caec*/
        }
      }
    }
  }
  sub_14043CE10(&v128); /*0x14049cd11*/
  v102 = v149; /*0x14049cd17*/
  if ( v134 && *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14049cd3a*/
  {
    v146.m256i_i64[0] = (__int64)&v121; /*0x14049cd43*/
    v146.m256i_i64[1] = (__int64)sub_1414AC520; /*0x14049cd51*/
    *(_QWORD *)v150 = aCodexmateLibCo_21; /*0x14049cd5f*/
    *(_QWORD *)&v150[8] = 47; /*0x14049cd66*/
    *(_QWORD *)&v150[16] = aCodexmateLibCo_21; /*0x14049cd71*/
    *(_QWORD *)&v150[24] = 47; /*0x14049cd78*/
    *(_QWORD *)&v150[32] = &off_14175AC20; /*0x14049cd8a*/
    sub_140985BA0(&unk_14175ABC1, &v146, 2, v150); /*0x14049cdac*/
  }
  sub_14049A2F0((unsigned int)v150, (unsigned int)v112, v145, v154, v118, v102); /*0x14049cddc*/
  if ( *(_QWORD *)v150 == -1 ) /*0x14049cdea*/
  {
    v103 = *(_QWORD *)&v150[24]; /*0x14049ce99*/
    sub_140009EF0(&v150[8]); /*0x14049cea0*/
  }
  else
  {
    v146 = *(__m256i *)v150; /*0x14049ce0c*/
    v148 = *(_OWORD *)&v150[48]; /*0x14049ce13*/
    v147 = *(_OWORD *)&v150[32]; /*0x14049ce1a*/
    sub_14043D020(&v146); /*0x14049ce3d*/
    v103 = 0; /*0x14049ce43*/
  }
  v149 = v136; /*0x14049d0d4*/
  v10 = v137; /*0x14049d0db*/
  v9 = v138; /*0x14049d0e2*/
  v16 = v119[0]; /*0x14049d0e9*/
  v155 = v119[1]; /*0x14049d0f7*/
  v106 = v120; /*0x14049d0fe*/
  v159 = 0; /*0x14049d105*/
  sub_1403210C0(v117); /*0x14049d113*/
  sub_14043D1B0(&v124); /*0x14049d120*/
  if ( v139 ) /*0x14049d130*/
    sub_140001660(v133, v139, 1); /*0x14049d13f*/
  sub_1403210C0(&v115); /*0x14049d149*/
  v144 = 8; /*0x14049d154*/
  v12 = 0; /*0x14049d15b*/
  v14 = nullptr; /*0x14049d15d*/
  v107 = v149; /*0x14049d15f*/
  if ( v149 != -1 ) /*0x14049d16a*/
  {
LABEL_157:
    v108 = v107; /*0x14049d03f*/
    v109 = (_QWORD *)v131; /*0x14049d042*/
    *(_QWORD *)v131 = v108; /*0x14049d049*/
    v109[1] = v10; /*0x14049d04c*/
    v109[2] = v9; /*0x14049d050*/
    v109[3] = v12; /*0x14049d054*/
    v109[4] = v144; /*0x14049d05f*/
    v109[5] = v14; /*0x14049d063*/
    v109[6] = v153; /*0x14049d06e*/
    v109[7] = v16; /*0x14049d072*/
    v109[8] = v155; /*0x14049d07d*/
    v109[9] = v106; /*0x14049d081*/
    v109[10] = v103; /*0x14049d085*/
    goto LABEL_158; /*0x14049d085*/
  }
LABEL_165:
  v11 = v144; /*0x14049d170*/
  v13 = v153; /*0x14049d177*/
  v15 = v155; /*0x14049d17e*/
LABEL_7:
  *(_QWORD *)v150 = v10; /*0x14049bd3e*/
  *(_QWORD *)&v150[8] = v9; /*0x14049bd45*/
  *(_QWORD *)&v150[16] = v12; /*0x14049bd4c*/
  *(_QWORD *)&v150[24] = v11; /*0x14049bd53*/
  *(_QWORD *)&v150[32] = v14; /*0x14049bd5a*/
  *(_QWORD *)&v150[40] = v13; /*0x14049bd61*/
  *(_QWORD *)&v150[48] = v16; /*0x14049bd68*/
  *(_QWORD *)&v150[56] = v15; /*0x14049bd6f*/
  nullsub_1(v12); /*0x14049bd76*/
  v17 = sub_140001650(24, 8); /*0x14049bd85*/
  if ( !v17 ) /*0x14049bd8d*/
    sub_1416C2D31(8, 24); /*0x14049d19e*/
  v154 = v17; /*0x14049bd93*/
  v140 = v142; /*0x14049bda1*/
  v141[0] = v122; /*0x14049bdaf*/
  v146.m256i_i64[0] = (__int64)&v140; /*0x14049bdbd*/
  v146.m256i_i64[1] = (__int64)sub_14148F3A0; /*0x14049bdcb*/
  v146.m256i_i64[2] = (__int64)v150; /*0x14049bdd9*/
  v146.m256i_i64[3] = (__int64)sub_140FB8910; /*0x14049bde7*/
  sub_14149C0F0(&v124, &unk_141757B59, &v146); /*0x14049be03*/
  v18 = (_OWORD *)v154; /*0x14049be10*/
  *(_QWORD *)(v154 + 16) = v124.m512i_i64[2]; /*0x14049be17*/
  *v18 = *(_OWORD *)v124.m512i_i8; /*0x14049be22*/
  *(_OWORD *)&v146.m256i_u64[1] = 0; /*0x14049be28*/
  v19 = v131; /*0x14049be2f*/
  *(_OWORD *)(v131 + 48) = 0; /*0x14049be36*/
  *(_QWORD *)v19 = 0; /*0x14049be3a*/
  *(_QWORD *)(v19 + 8) = 8; /*0x14049be41*/
  *(_QWORD *)(v19 + 16) = 0; /*0x14049be49*/
  *(_OWORD *)(v19 + 64) = *(_OWORD *)v146.m256i_i8; /*0x14049be58*/
  *(_QWORD *)(v19 + 80) = 0; /*0x14049be5c*/
  *(_QWORD *)(v19 + 24) = 1; /*0x14049be64*/
  *(_QWORD *)(v19 + 32) = v18; /*0x14049be6c*/
  *(_QWORD *)(v19 + 40) = 1; /*0x14049be70*/
  sub_14043D020(v150); /*0x14049be7f*/
LABEL_158:
  result = sub_14043C900(v112); /*0x14049d089*/
LABEL_159:
  if ( v130 ) /*0x14049d09d*/
    return sub_140001660(v142, v130, 1); /*0x14049d0ac*/
  return result; /*0x14049d0b2*/
}
