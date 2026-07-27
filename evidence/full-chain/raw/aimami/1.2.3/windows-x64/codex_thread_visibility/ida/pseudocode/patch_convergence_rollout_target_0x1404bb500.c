// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// 1.2.3 win delta | session_meta_rewrite_2 | changelog ③模型协议 (win-native 锚点逆)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::patch_convergence_rollout_target | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall sub_1404BB500(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // xmm0
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int128 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // r15
  __int64 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rdi
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int128 v34; // [rsp+40h] [rbp-40h]
  _QWORD v35[2]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v36[104]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v37; // [rsp+E8h] [rbp+68h]
  __int128 v38; // [rsp+F8h] [rbp+78h]
  __int128 v39; // [rsp+108h] [rbp+88h]
  __int128 v40; // [rsp+118h] [rbp+98h]
  __int128 v41; // [rsp+128h] [rbp+A8h]
  __int128 v42; // [rsp+138h] [rbp+B8h]
  __int128 v43; // [rsp+150h] [rbp+D0h] BYREF
  __m256i v44; // [rsp+160h] [rbp+E0h]
  __int128 v45; // [rsp+188h] [rbp+108h] BYREF
  __int64 v46; // [rsp+198h] [rbp+118h]
  __int128 v47; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v48; // [rsp+1B0h] [rbp+130h] BYREF
  __m256i v49; // [rsp+1C0h] [rbp+140h]
  __int128 v50; // [rsp+1E0h] [rbp+160h]
  _BYTE v51[104]; // [rsp+1F0h] [rbp+170h]
  __int64 v52; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v53; // [rsp+260h] [rbp+1E0h]
  __int64 v54; // [rsp+268h] [rbp+1E8h]
  _BYTE v55[56]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v56; // [rsp+2A8h] [rbp+228h]
  __int128 v57; // [rsp+2B8h] [rbp+238h]
  __int64 v58; // [rsp+2C8h] [rbp+248h]
  __int64 v59; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v60; // [rsp+2D8h] [rbp+258h]
  __int64 v61; // [rsp+2E0h] [rbp+260h]
  __int64 v62; // [rsp+2E8h] [rbp+268h] BYREF
  __int128 v63; // [rsp+2F0h] [rbp+270h]
  __int64 v64; // [rsp+300h] [rbp+280h]
  __int64 v65; // [rsp+308h] [rbp+288h]
  __int64 v66; // [rsp+310h] [rbp+290h]
  __int64 v67; // [rsp+318h] [rbp+298h]
  _BYTE v68[24]; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v69; // [rsp+338h] [rbp+2B8h]
  __int128 v70; // [rsp+340h] [rbp+2C0h] BYREF
  __m256i v71; // [rsp+350h] [rbp+2D0h]
  _BYTE v72[128]; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v73; // [rsp+3F0h] [rbp+370h]
  __int64 v74; // [rsp+3F8h] [rbp+378h]
  __int64 v75; // [rsp+400h] [rbp+380h]
  __int64 v76; // [rsp+408h] [rbp+388h]
  __int64 v77; // [rsp+410h] [rbp+390h]
  __int64 v78; // [rsp+418h] [rbp+398h]
  __int64 v79; // [rsp+420h] [rbp+3A0h]
  char v80; // [rsp+42Eh] [rbp+3AEh]
  char v81; // [rsp+42Fh] [rbp+3AFh]
  __int64 v82; // [rsp+430h] [rbp+3B0h]
  __m256i v83; // 0:^50.32

  v82 = -2; /*0x1404bb51b*/
  v35[0] = a3; /*0x1404bb529*/
  v35[1] = a4; /*0x1404bb52d*/
  if ( *(_QWORD *)(a2 + 48) != -1 ) /*0x1404bb536*/
  {
    v7 = *(_OWORD *)(a2 + 8); /*0x1404bb542*/
    v8 = *(_QWORD *)(a2 + 56); /*0x1404bb546*/
    v64 = a2; /*0x1404bb54a*/
    v9 = *(_QWORD *)(a2 + 64); /*0x1404bb551*/
    v47 = v7; /*0x1404bb555*/
    find_session_meta_anchors((__int64)v36, v8, v9); /*0x1404bb565*/
    if ( *(_DWORD *)v36 == 1 ) /*0x1404bb56e*/
    {
      *(_OWORD *)&v72[80] = *(_OWORD *)&v36[88]; /*0x1404bb57c*/
      *(_OWORD *)&v72[64] = *(_OWORD *)&v36[72]; /*0x1404bb587*/
      *(_OWORD *)&v72[48] = *(_OWORD *)&v36[56]; /*0x1404bb59d*/
      *(_OWORD *)&v72[32] = *(_OWORD *)&v36[40]; /*0x1404bb5a4*/
      *(_OWORD *)&v72[16] = *(_OWORD *)&v36[24]; /*0x1404bb5ab*/
      *(_OWORD *)v72 = *(_OWORD *)&v36[8]; /*0x1404bb5b2*/
      *(_QWORD *)&v70 = &v47; /*0x1404bb5c0*/
      *((_QWORD *)&v70 + 1) = sub_14041F680; /*0x1404bb5ce*/
      v71.m256i_i64[0] = (__int64)v72; /*0x1404bb5dc*/
      v71.m256i_i64[1] = (__int64)sub_140B036A0; /*0x1404bb5ea*/
      sub_14149C0F0(&v48, &unk_141757C2A, &v70); /*0x1404bb606*/
      *(_OWORD *)&v36[16] = v48; /*0x1404bb613*/
      *(_QWORD *)&v36[32] = v49.m256i_i64[0]; /*0x1404bb61e*/
      sub_14043E650(v72); /*0x1404bb629*/
      v11 = *(_QWORD *)&v36[24]; /*0x1404bb632*/
      result = *(_QWORD *)&v36[16]; /*0x1404bb632*/
      v13 = *(_QWORD *)&v36[40]; /*0x1404bb63a*/
      v12 = *(_QWORD *)&v36[32]; /*0x1404bb63a*/
      v14 = *(_QWORD *)&v36[48]; /*0x1404bb63e*/
      v50 = *(_OWORD *)&v36[56]; /*0x1404bb646*/
      *(_OWORD *)v51 = *(_OWORD *)&v36[72]; /*0x1404bb651*/
      *(_OWORD *)&v51[16] = *(_OWORD *)&v36[88]; /*0x1404bb65c*/
      v15 = 10; /*0x1404bb663*/
LABEL_49:
      *(_QWORD *)(a1 + 16) = result; /*0x1404bc3c7*/
      *(_QWORD *)(a1 + 24) = v11; /*0x1404bc3cb*/
      *(_QWORD *)(a1 + 32) = v12; /*0x1404bc3cf*/
      v32 = *(_OWORD *)v51; /*0x1404bc3da*/
      v33 = *(_OWORD *)&v51[16]; /*0x1404bc3e1*/
      *(_OWORD *)(a1 + 56) = v50; /*0x1404bc3e8*/
      *(_OWORD *)(a1 + 72) = v32; /*0x1404bc3ec*/
      *(_OWORD *)(a1 + 88) = v33; /*0x1404bc3f0*/
      *(_QWORD *)(a1 + 8) = v15; /*0x1404bc3f4*/
      *(_QWORD *)(a1 + 40) = v13; /*0x1404bc3f8*/
      *(_QWORD *)(a1 + 48) = v14; /*0x1404bc3fc*/
      goto LABEL_50; /*0x1404bc3fc*/
    }
    if ( *(_QWORD *)&v36[8] == -1 ) /*0x1404bb6f7*/
    {
      *(_QWORD *)&v70 = &v47; /*0x1404bb9c7*/
      *((_QWORD *)&v70 + 1) = sub_14041F680; /*0x1404bb9d5*/
      sub_14149C0F0(&v72[8], &unk_141757C4E, &v70); /*0x1404bb9f1*/
      result = *(_QWORD *)&v72[8]; /*0x1404bb9f6*/
      v12 = *(_QWORD *)&v72[24]; /*0x1404bba04*/
      v11 = *(_QWORD *)&v72[16]; /*0x1404bba04*/
      v14 = *(_QWORD *)&v72[40]; /*0x1404bba12*/
      v13 = *(_QWORD *)&v72[32]; /*0x1404bba12*/
      v50 = *(_OWORD *)&v72[48]; /*0x1404bba20*/
      *(_OWORD *)v51 = *(_OWORD *)&v72[64]; /*0x1404bba2e*/
      *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80]; /*0x1404bba3c*/
      v15 = 9; /*0x1404bba43*/
      goto LABEL_49; /*0x1404bba48*/
    }
    v58 = *(_QWORD *)&v36[96]; /*0x1404bb701*/
    v57 = *(_OWORD *)&v36[80]; /*0x1404bb70c*/
    v56 = *(_OWORD *)&v36[64]; /*0x1404bb723*/
    *(_OWORD *)&v55[40] = *(_OWORD *)&v36[48]; /*0x1404bb72a*/
    *(_OWORD *)&v55[24] = *(_OWORD *)&v36[32]; /*0x1404bb731*/
    *(_OWORD *)&v55[8] = *(_OWORD *)&v36[16]; /*0x1404bb738*/
    v73 = *(_QWORD *)&v36[8]; /*0x1404bb73f*/
    *(_QWORD *)v55 = *(_QWORD *)&v36[8]; /*0x1404bb746*/
    sub_1404A4580((__int64)v72, *(__int128 **)&v36[16]); /*0x1404bb77f*/
    v15 = *(_QWORD *)v72; /*0x1404bb78c*/
    v74 = *(_QWORD *)&v72[24]; /*0x1404bb7a8*/
    v77 = *(_QWORD *)&v72[16]; /*0x1404bb7a8*/
    v16 = v73; /*0x1404bb7b3*/
    if ( *(_QWORD *)v72 != -1 ) /*0x1404bb7ba*/
    {
      v14 = *(_QWORD *)&v72[40]; /*0x1404bb7c7*/
      v13 = *(_QWORD *)&v72[32]; /*0x1404bb7c7*/
      v50 = *(_OWORD *)&v72[48]; /*0x1404bb7d5*/
      *(_OWORD *)v51 = *(_OWORD *)&v72[64]; /*0x1404bb7e3*/
      *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80]; /*0x1404bb7f1*/
      v17 = -1; /*0x1404bb7f8*/
      v79 = *(_QWORD *)&v72[8]; /*0x1404bb7ff*/
      v11 = v77; /*0x1404bb806*/
      v12 = v74; /*0x1404bb80d*/
      if ( !v73 ) /*0x1404bb817*/
        goto LABEL_9; /*0x1404bb817*/
      goto LABEL_8; /*0x1404bb817*/
    }
    v78 = *(_QWORD *)&v72[8]; /*0x1404bba4d*/
    sub_1404A4580((__int64)v72, (__int128 *)v56); /*0x1404bba86*/
    *((_QWORD *)&v20 + 1) = *(_QWORD *)&v72[8]; /*0x1404bba93*/
    v15 = *(_QWORD *)v72; /*0x1404bba93*/
    if ( *(_QWORD *)v72 != -1 ) /*0x1404bbaac*/
    {
      v79 = *(_QWORD *)&v72[8]; /*0x1404bbaae*/
      v14 = *(_QWORD *)&v72[40]; /*0x1404bbabc*/
      v13 = *(_QWORD *)&v72[32]; /*0x1404bbabc*/
      v50 = *(_OWORD *)&v72[48]; /*0x1404bbaca*/
      *(_OWORD *)v51 = *(_OWORD *)&v72[64]; /*0x1404bbad8*/
      *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80]; /*0x1404bbae6*/
      v17 = -1; /*0x1404bbaed*/
      v12 = *(_QWORD *)&v72[24]; /*0x1404bbb14*/
      v11 = *(_QWORD *)&v72[16]; /*0x1404bbb14*/
      if ( v78 ) /*0x1404bbafe*/
        sub_140001660(v77, v78, 1); /*0x1404bbb17*/
LABEL_45:
      v16 = v73; /*0x1404bc2ab*/
      if ( !v73 ) /*0x1404bc2b5*/
      {
LABEL_9:
        if ( *(_QWORD *)&v55[48] ) /*0x1404bb835*/
          sub_140001660(v56, *(_QWORD *)&v55[48], 1); /*0x1404bb844*/
        v18 = v64; /*0x1404bb849*/
        if ( v17 != -1 ) /*0x1404bb854*/
          goto LABEL_12; /*0x1404bb854*/
        goto LABEL_48; /*0x1404bb854*/
      }
LABEL_8:
      sub_140001660(*(_QWORD *)&v55[8], v16, 1); /*0x1404bb819*/
      goto LABEL_9; /*0x1404bb826*/
    }
    v62 = *(_QWORD *)&v72[8]; /*0x1404bbb21*/
    v69 = *(_QWORD *)&v72[16]; /*0x1404bbb28*/
    v63 = *(_OWORD *)&v72[16]; /*0x1404bbb2f*/
    v76 = *(_QWORD *)&v72[24]; /*0x1404bbb36*/
    v59 = v78; /*0x1404bbb4b*/
    v60 = v77; /*0x1404bbb59*/
    v61 = v74; /*0x1404bbb67*/
    if ( !(unsigned __int8)sub_1404B58C0(v77, v74, v19) || !(unsigned __int8)sub_1404B58C0(v69, v76, v21) ) /*0x1404bbb89*/
    {
      v14 = -1; /*0x1404bbcc2*/
      if ( *(_QWORD *)off_141EC8D80 >= 3u ) /*0x1404bbccd*/
      {
        *(_QWORD *)v72 = &v47; /*0x1404bbce1*/
        *(_QWORD *)&v72[8] = sub_14041F680; /*0x1404bbcef*/
        *(_QWORD *)&v72[16] = &v59; /*0x1404bbcfd*/
        *(_QWORD *)&v72[24] = sub_1400015F0; /*0x1404bbd0b*/
        *(_QWORD *)&v72[32] = &v62; /*0x1404bbd12*/
        *(_QWORD *)&v72[40] = sub_1400015F0; /*0x1404bbd19*/
        *(_QWORD *)&v70 = aCodexmateLibCo_0; /*0x1404bbd27*/
        *((_QWORD *)&v70 + 1) = 51; /*0x1404bbd2e*/
        v71.m256i_i64[0] = (__int64)aCodexmateLibCo_0; /*0x1404bbd39*/
        v71.m256i_i64[1] = 51; /*0x1404bbd40*/
        v71.m256i_i64[2] = (__int64)&off_14175B6B8; /*0x1404bbd52*/
        v80 = 1; /*0x1404bbd59*/
        sub_140985BA0(&unk_14175B650, v72, 3, &v70); /*0x1404bbd7b*/
        v17 = v59; /*0x1404bbd81*/
        v15 = v60; /*0x1404bbd88*/
        v79 = v61; /*0x1404bbd96*/
        v11 = v62; /*0x1404bbd9d*/
        v13 = *((_QWORD *)&v63 + 1); /*0x1404bbdab*/
        v12 = v63; /*0x1404bbdab*/
        goto LABEL_45; /*0x1404bbdb2*/
      }
      v15 = v77; /*0x1404bbdc2*/
      v11 = *((_QWORD *)&v20 + 1); /*0x1404bbdc9*/
      v79 = v74; /*0x1404bbdd3*/
      v12 = v69; /*0x1404bbdda*/
      goto LABEL_44; /*0x1404bbde1*/
    }
    nullsub_1(v22); /*0x1404bbb96*/
    v23 = sub_140001650(144, 8); /*0x1404bbba5*/
    if ( !v23 ) /*0x1404bbbad*/
    {
      v80 = 1; /*0x1404bc41b*/
      sub_1416C2D4B(8, 144); /*0x1404bc42c*/
    }
    v52 = 2; /*0x1404bbbb3*/
    v53 = v23; /*0x1404bbbbe*/
    v54 = 0; /*0x1404bbbc5*/
    *(_QWORD *)&v43 = -1; /*0x1404bbbd0*/
    *(_QWORD *)&v48 = -1; /*0x1404bbbdb*/
    v79 = *((_QWORD *)&v20 + 1); /*0x1404bbbed*/
    if ( v74 == a4 && !(unsigned int)sub_1416847B0(v77, a3, a4) ) /*0x1404bbc0a*/
    {
      v28 = *(_QWORD *)&v55[24]; /*0x1404bbf97*/
    }
    else
    {
      v81 = 1; /*0x1404bbc1e*/
      sub_1404BC810((unsigned int)v72, *(_DWORD *)&v55[8], *(_DWORD *)&v55[16], a3, a4); /*0x1404bbc34*/
      v20 = *(_OWORD *)&v72[8]; /*0x1404bbc41*/
      v15 = *(_QWORD *)v72; /*0x1404bbc41*/
      if ( *(_QWORD *)v72 != -1 ) /*0x1404bbc5a*/
      {
        v12 = *(_QWORD *)&v72[24]; /*0x1404bbc60*/
        v14 = *(_QWORD *)&v72[40]; /*0x1404bbc71*/
        v76 = *(_QWORD *)&v72[32]; /*0x1404bbc71*/
        v50 = *(_OWORD *)&v72[48]; /*0x1404bbc7f*/
        *(_OWORD *)v51 = *(_OWORD *)&v72[64]; /*0x1404bbc8d*/
        *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80]; /*0x1404bbc9b*/
        v24 = 1; /*0x1404bbca2*/
        v78 = -1; /*0x1404bbca5*/
        v25 = *(_QWORD *)&v72[8]; /*0x1404bbcb0*/
LABEL_41:
        sub_140009030(&v48); /*0x1404bc25e*/
        sub_140009030(&v43); /*0x1404bc271*/
        sub_14043B770(&v52); /*0x1404bc27d*/
        if ( v24 ) /*0x1404bc285*/
          sub_1402C34C0(&v59); /*0x1404bc28e*/
        v11 = *((_QWORD *)&v20 + 1); /*0x1404bc293*/
        v79 = v25; /*0x1404bc296*/
LABEL_44:
        v13 = v76; /*0x1404bc29d*/
        v17 = v78; /*0x1404bc2a4*/
        goto LABEL_45; /*0x1404bc2a4*/
      }
      *(_OWORD *)v68 = *(_OWORD *)&v72[8]; /*0x1404bbde6*/
      *(_QWORD *)&v68[16] = *(_QWORD *)&v72[24]; /*0x1404bbdf4*/
      v26 = *(_QWORD *)&v72[8]; /*0x1404bbdfb*/
      v67 = *(_QWORD *)&v72[8]; /*0x1404bbdfe*/
      sub_14149C500(&v70, v55); /*0x1404bbe13*/
      *((_QWORD *)&v20 + 1) = v79; /*0x1404bbe19*/
      v75 = v26; /*0x1404bbe20*/
      v65 = *(_QWORD *)&v55[24]; /*0x1404bbe3c*/
      *(_OWORD *)&v71.m256i_u64[1] = *(_OWORD *)&v55[24]; /*0x1404bbe43*/
      v71.m256i_i16[12] = *(_WORD *)&v55[40]; /*0x1404bbe4a*/
      sub_14149C500(&v45, v68); /*0x1404bbe5f*/
      *(__m256i *)&v72[16] = v71; /*0x1404bbe7a*/
      *(_OWORD *)v72 = v70; /*0x1404bbe88*/
      *(_OWORD *)&v72[48] = v45; /*0x1404bbe96*/
      *(_QWORD *)&v72[64] = v46; /*0x1404bbea4*/
      v27 = v75; /*0x1404bbeab*/
      v67 = v75; /*0x1404bbeb2*/
      sub_14047B3F0(&v52, v72); /*0x1404bbec7*/
      v67 = v27; /*0x1404bbecd*/
      sub_14149C500(&v70, v55); /*0x1404bbee2*/
      *(_QWORD *)&v72[40] = *(_QWORD *)&v68[16]; /*0x1404bbeef*/
      *(_OWORD *)&v72[24] = *(_OWORD *)v68; /*0x1404bbefd*/
      *(_QWORD *)&v72[16] = v71.m256i_i64[0]; /*0x1404bbf0b*/
      *(_OWORD *)&v71.m256i_u64[1] = *(_OWORD *)v68; /*0x1404bbf35*/
      v71.m256i_i64[3] = *(_QWORD *)&v68[16]; /*0x1404bbf51*/
      sub_140009030(&v43); /*0x1404bbf5f*/
      v44 = v71; /*0x1404bbf79*/
      v43 = v70; /*0x1404bbf87*/
      v28 = v65; /*0x1404bbf8e*/
    }
    v29 = v57; /*0x1404bbf9e*/
    *(_QWORD *)&v20 = v69; /*0x1404bbfa8*/
    if ( (_QWORD)v57 != v28 ) /*0x1404bbfaf*/
    {
      if ( v76 != a4 || (v30 = sub_1416847B0(v69, a3, a4), *(_QWORD *)&v20 = v69, v30) ) /*0x1404bbfd9*/
      {
        v65 = v29; /*0x1404bbfdf*/
        v81 = 1; /*0x1404bbff4*/
        sub_1404BC810((unsigned int)v72, v56, DWORD2(v56), a3, a4); /*0x1404bc00a*/
        v25 = *(_QWORD *)&v72[8]; /*0x1404bc017*/
        v15 = *(_QWORD *)v72; /*0x1404bc017*/
        *((_QWORD *)&v20 + 1) = *(_QWORD *)&v72[16]; /*0x1404bc025*/
        if ( *(_QWORD *)v72 != -1 ) /*0x1404bc030*/
        {
          v12 = *(_QWORD *)&v72[24]; /*0x1404bc032*/
LABEL_39:
          v14 = *(_QWORD *)&v72[40]; /*0x1404bc1f4*/
          v76 = *(_QWORD *)&v72[32]; /*0x1404bc202*/
          v50 = *(_OWORD *)&v72[48]; /*0x1404bc210*/
          *(_OWORD *)v51 = *(_OWORD *)&v72[64]; /*0x1404bc21e*/
          *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80]; /*0x1404bc22c*/
          v24 = 1; /*0x1404bc233*/
          v78 = -1; /*0x1404bc236*/
          goto LABEL_41; /*0x1404bc241*/
        }
        *(_QWORD *)v68 = *(_QWORD *)&v72[8]; /*0x1404bc041*/
        *(_OWORD *)&v68[8] = *(_OWORD *)&v72[16]; /*0x1404bc048*/
        v66 = *(_QWORD *)&v72[8]; /*0x1404bc056*/
        sub_14149C500(&v70, &v55[48]); /*0x1404bc067*/
        *((_QWORD *)&v20 + 1) = v79; /*0x1404bc06d*/
        v75 = v25; /*0x1404bc074*/
        v71.m256i_i64[1] = v65; /*0x1404bc090*/
        v71.m256i_i64[2] = *((_QWORD *)&v57 + 1); /*0x1404bc097*/
        v71.m256i_i16[12] = v58; /*0x1404bc09e*/
        sub_14149C500(&v45, v68); /*0x1404bc0b3*/
        *(__m256i *)&v72[16] = v71; /*0x1404bc0ce*/
        *(_OWORD *)v72 = v70; /*0x1404bc0dc*/
        *(_OWORD *)&v72[48] = v45; /*0x1404bc0ea*/
        *(_QWORD *)&v72[64] = v46; /*0x1404bc0f8*/
        v31 = v75; /*0x1404bc0ff*/
        v66 = v75; /*0x1404bc106*/
        sub_14047B3F0(&v52, v72); /*0x1404bc11b*/
        v66 = v31; /*0x1404bc121*/
        sub_14149C500(v72, &v55[48]); /*0x1404bc132*/
        v83.m256i_i64[3] = *(_QWORD *)&v68[16]; /*0x1404bc13f*/
        *(_OWORD *)&v83.m256i_u64[1] = *(_OWORD *)v68; /*0x1404bc14a*/
        v34 = *(_OWORD *)v72; /*0x1404bc155*/
        v83.m256i_i64[0] = *(_QWORD *)&v72[16]; /*0x1404bc160*/
        sub_140009030(&v48); /*0x1404bc16b*/
        v49 = v83; /*0x1404bc17c*/
        v48 = v34; /*0x1404bc18a*/
        *(_QWORD *)&v20 = v69; /*0x1404bc191*/
      }
    }
    if ( !v54 ) /*0x1404bc1a2*/
    {
      v14 = -1; /*0x1404bc243*/
      v24 = 0; /*0x1404bc24a*/
      v25 = v74; /*0x1404bc24d*/
      v12 = v20; /*0x1404bc254*/
      v15 = v77; /*0x1404bc257*/
      goto LABEL_41; /*0x1404bc257*/
    }
    v81 = 1; /*0x1404bc1af*/
    sub_1404A5FF0((unsigned int)v72, v8, v9, v53, v54); /*0x1404bc1c8*/
    v15 = *(_QWORD *)v72; /*0x1404bc1ce*/
    if ( *(_QWORD *)v72 == -1 ) /*0x1404bc1d9*/
    {
      v17 = v59; /*0x1404bc2c0*/
      v15 = v60; /*0x1404bc2c7*/
      v79 = v61; /*0x1404bc2d5*/
      v77 = v62; /*0x1404bc2e3*/
      v13 = *((_QWORD *)&v63 + 1); /*0x1404bc2f8*/
      v74 = v63; /*0x1404bc2f8*/
      sub_1414734D0(v72, v8, v9); /*0x1404bc30c*/
      *(__m256i *)&v51[24] = v44; /*0x1404bc327*/
      *(_OWORD *)&v51[8] = v43; /*0x1404bc335*/
      *(_OWORD *)&v51[56] = v48; /*0x1404bc351*/
      *(__m256i *)&v51[72] = v49; /*0x1404bc358*/
      v14 = *(_QWORD *)v72; /*0x1404bc366*/
      v50 = *(_OWORD *)&v72[8]; /*0x1404bc374*/
      *(_QWORD *)v51 = *(_QWORD *)&v72[24]; /*0x1404bc382*/
      sub_14043B770(&v52); /*0x1404bc390*/
      sub_14043F1F0(v55); /*0x1404bc39c*/
      v18 = v64; /*0x1404bc3a1*/
      v11 = v77; /*0x1404bc3a8*/
      v12 = v74; /*0x1404bc3af*/
      if ( v17 != -1 ) /*0x1404bc3ba*/
      {
LABEL_12:
        *(_QWORD *)&v55[16] = v79; /*0x1404bb85a*/
        *(_QWORD *)&v55[24] = v11; /*0x1404bb868*/
        *(_QWORD *)&v55[32] = v12; /*0x1404bb86f*/
        *(_QWORD *)&v72[120] = *(_QWORD *)&v51[96]; /*0x1404bb87d*/
        *(_OWORD *)&v72[104] = *(_OWORD *)&v51[80]; /*0x1404bb88b*/
        *(_OWORD *)&v72[88] = *(_OWORD *)&v51[64]; /*0x1404bb899*/
        *(_OWORD *)&v72[72] = *(_OWORD *)&v51[48]; /*0x1404bb8a7*/
        *(_OWORD *)&v72[56] = *(_OWORD *)&v51[32]; /*0x1404bb8ca*/
        *(_OWORD *)&v72[40] = *(_OWORD *)&v51[16]; /*0x1404bb8d1*/
        *(_OWORD *)&v72[24] = *(_OWORD *)v51; /*0x1404bb8d8*/
        *(_OWORD *)&v72[8] = v50; /*0x1404bb8df*/
        *(_QWORD *)v55 = v17; /*0x1404bb8e6*/
        *(_QWORD *)&v55[8] = v15; /*0x1404bb8ed*/
        *(_QWORD *)&v55[40] = v13; /*0x1404bb8f4*/
        *(_QWORD *)v72 = v14; /*0x1404bb8fb*/
        sub_14149C500(&v70, v18); /*0x1404bb909*/
        *(_OWORD *)&v36[56] = *(_OWORD *)&v55[32]; /*0x1404bb924*/
        *(_OWORD *)&v36[40] = *(_OWORD *)&v55[16]; /*0x1404bb928*/
        *(_OWORD *)&v36[24] = *(_OWORD *)v55; /*0x1404bb92c*/
        *(_OWORD *)&v36[72] = *(_OWORD *)v72; /*0x1404bb94c*/
        *(_OWORD *)&v36[88] = *(_OWORD *)&v72[16]; /*0x1404bb950*/
        v37 = *(_OWORD *)&v72[32]; /*0x1404bb954*/
        v38 = *(_OWORD *)&v72[48]; /*0x1404bb958*/
        v39 = *(_OWORD *)&v72[64]; /*0x1404bb963*/
        v40 = *(_OWORD *)&v72[80]; /*0x1404bb971*/
        v41 = *(_OWORD *)&v72[96]; /*0x1404bb97f*/
        v42 = *(_OWORD *)&v72[112]; /*0x1404bb98d*/
        *(_QWORD *)&v36[16] = v71.m256i_i64[0]; /*0x1404bb99b*/
        *(_OWORD *)v36 = v70; /*0x1404bb9a6*/
        return sub_141684120(a1, v36, 200); /*0x1404bb9bb*/
      }
LABEL_48:
      result = v79; /*0x1404bc3c0*/
      goto LABEL_49; /*0x1404bc3c0*/
    }
    v25 = *(_QWORD *)&v72[8]; /*0x1404bc1df*/
    v12 = *(_QWORD *)&v72[24]; /*0x1404bc1ed*/
    *((_QWORD *)&v20 + 1) = *(_QWORD *)&v72[16]; /*0x1404bc1ed*/
    goto LABEL_39; /*0x1404bc1ed*/
  }
  *(_QWORD *)v72 = a2; /*0x1404bb66d*/
  *(_QWORD *)&v72[8] = sub_1400015F0; /*0x1404bb67b*/
  *(_QWORD *)&v72[16] = v35; /*0x1404bb686*/
  *(_QWORD *)&v72[24] = sub_14041F680; /*0x1404bb694*/
  sub_14149C0F0(&v36[8], &unk_141757E4B, v72); /*0x1404bb6ad*/
  result = *(_QWORD *)&v36[8]; /*0x1404bb6b2*/
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v36[80]; /*0x1404bb6ba*/
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v36[64]; /*0x1404bb6c2*/
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v36[48]; /*0x1404bb6ca*/
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v36[32]; /*0x1404bb6d2*/
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v36[16]; /*0x1404bb6da*/
  *(_QWORD *)(a1 + 8) = 10; /*0x1404bb6de*/
  *(_QWORD *)(a1 + 16) = result; /*0x1404bb6e6*/
LABEL_50:
  *(_QWORD *)a1 = -1; /*0x1404bc400*/
  return result; /*0x1404bc407*/
}