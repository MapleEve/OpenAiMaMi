// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = get_relay_provider_quota | mapped via command-name string xref (win-native, ground-truth)
char __fastcall get_relay_provider_quota(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 v9; // rdi
  char v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 *v14; // r15
  _BYTE *v15; // rbx
  __int64 v16; // r12
  _QWORD *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r10
  _BYTE *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // r12
  __int64 v26; // r15
  __int128 v27; // rdi
  _BYTE *v28; // rcx
  _BYTE *v29; // rbx
  __int64 v30; // rax
  unsigned __int8 v31; // bl
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int64 v41; // rsi
  _BYTE *v42; // r15
  __m128i v43; // xmm6
  _BYTE *v44; // rdi
  __int64 v45; // rdx
  _BYTE *v46; // r14
  unsigned __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rbx
  char v53; // cl
  char result; // al
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 *v58; // rcx
  __int64 *v59; // r13
  __int64 v60; // rdi
  __int64 v61; // rdx
  _BYTE v62[176]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v63[22]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v64; // [rsp+198h] [rbp+118h] BYREF
  __int128 v65; // [rsp+1A0h] [rbp+120h]
  _QWORD v66[2]; // [rsp+248h] [rbp+1C8h] BYREF
  __int128 v67; // [rsp+258h] [rbp+1D8h]
  __int128 v68; // [rsp+268h] [rbp+1E8h]
  __int128 v69; // [rsp+278h] [rbp+1F8h]
  __int128 v70; // [rsp+288h] [rbp+208h]
  __int128 v71; // [rsp+298h] [rbp+218h]
  __int64 v72; // [rsp+2A8h] [rbp+228h]
  __m256i v73; // [rsp+2B0h] [rbp+230h]
  __m256i v74; // [rsp+2D0h] [rbp+250h]
  __m256i v75; // [rsp+2F0h] [rbp+270h]
  __m256i v76; // [rsp+310h] [rbp+290h]
  _BYTE v77[40]; // [rsp+330h] [rbp+2B0h] BYREF
  char v78[184]; // [rsp+358h] [rbp+2D8h] BYREF
  __int128 v79; // [rsp+410h] [rbp+390h]
  __int128 v80; // [rsp+420h] [rbp+3A0h]
  __int128 v81; // [rsp+430h] [rbp+3B0h]
  __int128 v82; // [rsp+440h] [rbp+3C0h]
  __int128 v83; // [rsp+450h] [rbp+3D0h]
  __int64 v84; // [rsp+460h] [rbp+3E0h]
  __int128 v85; // [rsp+470h] [rbp+3F0h]
  __int128 v86; // [rsp+480h] [rbp+400h]
  __int128 v87; // [rsp+490h] [rbp+410h]
  __int128 v88; // [rsp+4A0h] [rbp+420h]
  __int128 v89; // [rsp+4B0h] [rbp+430h]
  __int64 v90; // [rsp+4C0h] [rbp+440h]
  _BYTE v91[96]; // [rsp+4D0h] [rbp+450h] BYREF
  __int128 v92; // [rsp+530h] [rbp+4B0h]
  __int128 v93; // [rsp+540h] [rbp+4C0h]
  __int128 v94; // [rsp+550h] [rbp+4D0h]
  __int128 v95; // [rsp+560h] [rbp+4E0h]
  __int128 v96; // [rsp+570h] [rbp+4F0h]
  __int128 v97; // [rsp+580h] [rbp+500h]
  __int128 v98; // [rsp+590h] [rbp+510h]
  __int64 v99; // [rsp+5A0h] [rbp+520h]
  _QWORD v100[2]; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v101; // [rsp+5C0h] [rbp+540h]
  __int128 v102; // [rsp+5D0h] [rbp+550h]
  __int128 v103; // [rsp+5E0h] [rbp+560h]
  __int128 v104; // [rsp+5F0h] [rbp+570h]
  __int128 v105; // [rsp+600h] [rbp+580h]
  __int64 v106; // [rsp+610h] [rbp+590h]
  __m256i v107; // [rsp+618h] [rbp+598h]
  __int64 v108; // [rsp+640h] [rbp+5C0h] BYREF
  char v109; // [rsp+648h] [rbp+5C8h]
  int v110; // [rsp+649h] [rbp+5C9h]
  __int16 v111; // [rsp+64Dh] [rbp+5CDh]
  char v112; // [rsp+64Fh] [rbp+5CFh]
  __int64 v113; // [rsp+650h] [rbp+5D0h]
  __int128 v114; // [rsp+658h] [rbp+5D8h]
  const char *v115; // [rsp+668h] [rbp+5E8h] BYREF
  _BYTE v116[88]; // [rsp+670h] [rbp+5F0h] BYREF
  __int64 v117; // [rsp+6C8h] [rbp+648h]
  __m256i v118; // [rsp+6D0h] [rbp+650h]
  __int128 v119; // [rsp+6F0h] [rbp+670h]
  __int128 v120; // [rsp+700h] [rbp+680h]
  __int128 v121; // [rsp+710h] [rbp+690h]
  __int128 v122; // [rsp+720h] [rbp+6A0h]
  __int128 v123; // [rsp+730h] [rbp+6B0h]
  __int128 v124; // [rsp+740h] [rbp+6C0h]
  __int128 v125; // [rsp+7D0h] [rbp+750h]
  __int128 v126; // [rsp+7E0h] [rbp+760h]
  __int128 v127; // [rsp+7F0h] [rbp+770h]
  __int128 v128; // [rsp+800h] [rbp+780h]
  __int128 v129; // [rsp+810h] [rbp+790h]
  __int64 v130; // [rsp+820h] [rbp+7A0h]
  __int128 v131; // [rsp+830h] [rbp+7B0h] BYREF
  __int128 v132; // [rsp+840h] [rbp+7C0h]
  __int128 v133; // [rsp+850h] [rbp+7D0h]
  __int128 v134; // [rsp+860h] [rbp+7E0h]
  __int128 v135; // [rsp+870h] [rbp+7F0h]
  __int64 v136; // [rsp+880h] [rbp+800h]
  __int64 v137; // [rsp+888h] [rbp+808h]
  __int64 v138; // [rsp+890h] [rbp+810h]
  __int64 v139; // [rsp+898h] [rbp+818h]
  __int64 v140; // [rsp+8A0h] [rbp+820h]
  __int64 v141; // [rsp+8A8h] [rbp+828h]
  _BYTE *v142; // [rsp+8B0h] [rbp+830h]
  _BYTE *v143; // [rsp+8B8h] [rbp+838h]
  _QWORD *v144; // [rsp+8C0h] [rbp+840h]
  _BYTE *v145; // [rsp+8C8h] [rbp+848h]
  __int64 *v146; // [rsp+8D0h] [rbp+850h]
  char v147; // [rsp+8DFh] [rbp+85Fh] BYREF
  _BYTE *v148; // [rsp+8E0h] [rbp+860h]
  __int64 v149; // [rsp+8E8h] [rbp+868h]
  __int64 v150; // [rsp+8F0h] [rbp+870h]
  __int64 v151; // [rsp+8F8h] [rbp+878h]

  v151 = -2; /*0x140cc79f3*/
  v5 = a1; /*0x140cc7a01*/
  v6 = *(unsigned __int8 *)(a1 + 11024); /*0x140cc7a04*/
  v150 = a1; /*0x140cc7a19*/
  switch ( v6 ) /*0x140cc7a20*/
  {
    case 0LL: /*0x140cc7a20*/
      *(_WORD *)(a1 + 11025) = 257; /*0x140cc7a22*/
      *(_BYTE *)(a1 + 11027) = 1; /*0x140cc7a2c*/
      v7 = a1 + 5704; /*0x140cc7a3b*/
      sub_141684120(a1 + 5704, a1 + 392, 5312); /*0x140cc7a4b*/
      switch ( *(_BYTE *)(v5 + 11008) ) /*0x140cc7a66*/
      {
        case 0: /*0x140cc7a66*/
          goto LABEL_4;
        case 1: /*0x140cc7a66*/
          goto LABEL_71;
        case 2: /*0x140cc7a66*/
          goto LABEL_70;
        case 3: /*0x140cc7a66*/
          goto LABEL_7;
      }
    case 1LL: /*0x140cc7a20*/
      sub_1416C3400(&off_1417B7C00, a2, a3, a4); /*0x140cc8b7c*/
    case 2LL: /*0x140cc7a20*/
      sub_1416C3420(&off_1417B7C00, a2, a3, a4); /*0x140cc8b6e*/
    case 3LL: /*0x140cc7a20*/
      v7 = a1 + 5704; /*0x140cc7a68*/
      switch ( *(_BYTE *)(a1 + 11008) ) /*0x140cc7a85*/
      {
        case 0: /*0x140cc7a85*/
LABEL_4:
          v8 = v5 + 6224; /*0x140cc7a87*/
          v115 = aGetRelayProvid; /*0x140cc7aa0*/
          *(_QWORD *)v116 = 24; /*0x140cc7aa7*/
          *(_QWORD *)&v116[8] = aManager_1; /*0x140cc7ab9*/
          *(_QWORD *)&v116[16] = 7; /*0x140cc7ac0*/
          v149 = v7; /*0x140cc7acb*/
          *(_QWORD *)&v116[24] = v7; /*0x140cc7ad2*/
          *(_OWORD *)&v116[32] = (unsigned __int64)(v5 + 6224); /*0x140cc7ad9*/
          v9 = sub_140004B10((volatile void *)(*(_QWORD *)(v5 + 6216) + 16LL)); /*0x140cc7af1*/
          v146 = (__int64 *)(v5 + 6224); /*0x140cc7af7*/
          if ( v9 ) /*0x140cc7afe*/
            goto LABEL_5; /*0x140cc7afe*/
          sub_1416850A0(v77, &v115, &v116[8]); /*0x140cc7dac*/
          v10 = v77[0]; /*0x140cc7db2*/
          if ( v77[0] == 0xFF ) /*0x140cc7dbe*/
          {
            v9 = *(_QWORD *)&v77[8]; /*0x140cc87b8*/
LABEL_5:
            v115 = aGetRelayProvid; /*0x140cc7b04*/
            *(_QWORD *)v116 = 24; /*0x140cc7b1d*/
            *(_QWORD *)&v116[8] = aProviderid_1; /*0x140cc7b2f*/
            *(_QWORD *)&v116[16] = 10; /*0x140cc7b36*/
            *(_QWORD *)&v116[24] = v149; /*0x140cc7b41*/
            *(_OWORD *)&v116[32] = v8; /*0x140cc7b48*/
            sub_1409757B0(v77, &v115); /*0x140cc7b5d*/
            v10 = v77[0]; /*0x140cc7b63*/
            if ( v77[0] == 0xFF ) /*0x140cc7b6f*/
            {
              v11 = *(_QWORD *)&v77[24]; /*0x140cc7b75*/
              v5 = v150; /*0x140cc7b7c*/
              v12 = v150 + 6248; /*0x140cc7b83*/
              v13 = *(_OWORD *)&v77[8]; /*0x140cc7b8a*/
              *(_QWORD *)(v150 + 6272) = v9; /*0x140cc7b91*/
              *(_OWORD *)(v5 + 6248) = v13; /*0x140cc7b98*/
              *(_QWORD *)(v5 + 6264) = v11; /*0x140cc7ba0*/
              *(_BYTE *)(v5 + 7824) = 0; /*0x140cc7ba7*/
              v14 = (__int64 *)(v5 + 7832); /*0x140cc7baf*/
              sub_141684120(v5 + 7832, v12, 1584); /*0x140cc7bbf*/
              v15 = (_BYTE *)(v5 + 11000); /*0x140cc7bc4*/
              *(_BYTE *)(v5 + 11000) = 0; /*0x140cc7bcb*/
              v7 = v149; /*0x140cc7bd3*/
LABEL_8:
              v16 = v5 + 9416; /*0x140cc7c02*/
              sub_141684120(v5 + 9416, v14, 1584); /*0x140cc7c15*/
              switch ( *(_BYTE *)(v5 + 10992) ) /*0x140cc7c30*/
              {
                case 0: /*0x140cc7c30*/
                  goto LABEL_10;
                case 1: /*0x140cc7c30*/
                  goto LABEL_73;
                case 2: /*0x140cc7c30*/
                  goto LABEL_72;
                case 3: /*0x140cc7c30*/
                  goto LABEL_11;
              }
            }
          }
          v25 = ((unsigned __int64)((v77[7] << 16) | (unsigned int)*(unsigned __int16 *)&v77[5]) << 32) /*0x140cc7de2*/
              | *(unsigned int *)&v77[1];
          v26 = *(_QWORD *)&v77[8]; /*0x140cc7de5*/
          v27 = *(_OWORD *)&v77[16]; /*0x140cc7dec*/
          sub_140BF0DE0(v149); /*0x140cc7e01*/
          if ( *v146 == -1 ) /*0x140cc7e12*/
          {
            v31 = 1; /*0x140cc8773*/
            v32 = v150; /*0x140cc8775*/
            goto LABEL_61; /*0x140cc877c*/
          }
          v144 = (_QWORD *)(v150 + 6232); /*0x140cc7e26*/
          v28 = *(_BYTE **)(v150 + 6232); /*0x140cc7e2d*/
          v145 = *(_BYTE **)(v150 + 6240); /*0x140cc7e3b*/
          v148 = nullptr; /*0x140cc7e42*/
          v143 = v28; /*0x140cc7e4d*/
          while ( v145 != v148 ) /*0x140cc7e6e*/
          {
            ++v148; /*0x140cc7e73*/
            v29 = v28 + 96; /*0x140cc7e7a*/
            sub_1402C7520(); /*0x140cc7e7e*/
            v28 = v29; /*0x140cc7e84*/
          }
          v30 = *v146; /*0x140cc7e90*/
          v31 = 1; /*0x140cc7e93*/
          v32 = v150; /*0x140cc7e98*/
          if ( !*v146 ) /*0x140cc7e90*/
            goto LABEL_61; /*0x140cc7e9f*/
          goto LABEL_60; /*0x140cc7e9f*/
        case 1: /*0x140cc7a85*/
LABEL_71:
          v149 = v7; /*0x140cc8b9c*/
          sub_1416C3400(&off_1417B9768, a2, a3, a4); /*0x140cc8baa*/
        case 2: /*0x140cc7a85*/
LABEL_70:
          v149 = v7; /*0x140cc8b83*/
          sub_1416C3420(&off_1417B9768, a2, a3, a4); /*0x140cc8b91*/
        case 3: /*0x140cc7a85*/
          goto LABEL_7;
      }
  }
LABEL_7:
  v15 = (_BYTE *)(v5 + 11000); /*0x140cc7bdc*/
  v14 = (__int64 *)(v5 + 7832); /*0x140cc7beb*/
  switch ( *(_BYTE *)(v5 + 11000) ) /*0x140cc7c00*/
  {
    case 0: /*0x140cc7c00*/
      goto LABEL_8;
    case 1: /*0x140cc7c00*/
      v149 = v7; /*0x140cc8c38*/
      v138 = v5 + 11000; /*0x140cc8c3f*/
      v137 = v5 + 7832; /*0x140cc8c46*/
      sub_1416C3400(&off_1417B7B80, a2, a3, a4); /*0x140cc8c54*/
    case 2: /*0x140cc7c00*/
      v149 = v7; /*0x140cc8c11*/
      v138 = v5 + 11000; /*0x140cc8c18*/
      v137 = v5 + 7832; /*0x140cc8c1f*/
      sub_1416C3420(&off_1417B7B80, a2, a3, a4); /*0x140cc8c2d*/
    case 3: /*0x140cc7c00*/
      v16 = v5 + 9416; /*0x140cc7c32*/
      switch ( *(_BYTE *)(v5 + 10992) ) /*0x140cc7c4f*/
      {
        case 0: /*0x140cc7c4f*/
LABEL_10:
          v17 = *(_QWORD **)(v5 + 9440); /*0x140cc7c51*/
          *(_QWORD *)(v5 + 9448) = v17; /*0x140cc7c58*/
          *(_OWORD *)(v5 + 9456) = *(_OWORD *)v16; /*0x140cc7c64*/
          v18 = *(_QWORD *)(v16 + 16); /*0x140cc7c6c*/
          *(_QWORD *)(v5 + 9472) = v18; /*0x140cc7c71*/
          v19 = *(_QWORD *)(v5 + 9464); /*0x140cc7c78*/
          v20 = v5 + 9480; /*0x140cc7c7f*/
          *(_QWORD *)(v5 + 9480) = v17; /*0x140cc7c86*/
          *(_QWORD *)(v5 + 9488) = v19; /*0x140cc7c8d*/
          *(_QWORD *)(v5 + 9496) = v18; /*0x140cc7c94*/
          v21 = (_BYTE *)(v5 + 10984); /*0x140cc7c9b*/
          *(_BYTE *)(v5 + 10984) = 0; /*0x140cc7ca2*/
LABEL_13:
          v148 = (_BYTE *)v16; /*0x140cc7ce7*/
          v146 = v14; /*0x140cc7cee*/
          v145 = v15; /*0x140cc7cf5*/
          v149 = v7; /*0x140cc7cfc*/
          *(_QWORD *)(v5 + 9504) = v19; /*0x140cc7d03*/
          *(_QWORD *)(v5 + 9512) = v18; /*0x140cc7d0a*/
          v22 = v17[2]; /*0x140cc7d11*/
          if ( *(_QWORD *)(v22 + 16) != -1 ) /*0x140cc7d1a*/
          {
            v142 = v21; /*0x140cc7d2b*/
            v141 = v20; /*0x140cc7d32*/
            sub_14149C500(v116, v22 + 16); /*0x140cc7d3f*/
            v136 = *(_QWORD *)&v116[80]; /*0x140cc7d49*/
            v135 = *(_OWORD *)&v116[64]; /*0x140cc7d54*/
            v134 = *(_OWORD *)&v116[48]; /*0x140cc7d6a*/
            v133 = *(_OWORD *)&v116[32]; /*0x140cc7d71*/
            v132 = *(_OWORD *)&v116[16]; /*0x140cc7d78*/
            v131 = *(_OWORD *)v116; /*0x140cc7d7f*/
            v23 = 9; /*0x140cc7d86*/
LABEL_15:
            v24 = -1; /*0x140cc7d8b*/
            goto LABEL_28; /*0x140cc7d92*/
          }
          v142 = v21; /*0x140cc7eaa*/
          v140 = v20; /*0x140cc7eb1*/
          v141 = v20; /*0x140cc7eb8*/
          sub_14084BAA0(&v115, v17, v19, v18); /*0x140cc7ec6*/
          if ( v115 == (const char *)-1LL ) /*0x140cc7ed7*/
          {
            v100[0] = v150 + 9504; /*0x140cc89ef*/
            v100[1] = sub_14041F680; /*0x140cc89fd*/
            v142 = v21; /*0x140cc8a0b*/
            v141 = v140; /*0x140cc8a19*/
            sub_14149C0F0(&v91[8], &unk_1417B9DE8, v100); /*0x140cc8a31*/
            v96 = *(_OWORD *)&v91[40]; /*0x140cc8a46*/
            v97 = *(_OWORD *)&v91[56]; /*0x140cc8a4d*/
            v98 = *(_OWORD *)&v91[72]; /*0x140cc8a58*/
            v125 = *(_OWORD *)&v91[8]; /*0x140cc8a63*/
            v126 = *(_OWORD *)&v91[24]; /*0x140cc8a6a*/
            v127 = *(_OWORD *)&v91[40]; /*0x140cc8a71*/
            v128 = *(_OWORD *)&v91[56]; /*0x140cc8a78*/
            v129 = *(_OWORD *)&v91[72]; /*0x140cc8a7f*/
            v130 = *(_QWORD *)&v91[88]; /*0x140cc8a86*/
            v136 = *(_QWORD *)&v91[88]; /*0x140cc8a94*/
            v135 = *(_OWORD *)&v91[72]; /*0x140cc8aa2*/
            v134 = *(_OWORD *)&v91[56]; /*0x140cc8ac5*/
            v133 = *(_OWORD *)&v91[40]; /*0x140cc8acc*/
            v132 = *(_OWORD *)&v91[24]; /*0x140cc8ad3*/
            v131 = *(_OWORD *)&v91[8]; /*0x140cc8ada*/
            v23 = 8; /*0x140cc8ae1*/
            goto LABEL_15; /*0x140cc8ae6*/
          }
          v143 = v21; /*0x140cc7edd*/
          v33 = *(_QWORD *)v116; /*0x140cc7ee4*/
          v94 = *(_OWORD *)&v116[8]; /*0x140cc7ef2*/
          v95 = *(_OWORD *)&v116[24]; /*0x140cc7f00*/
          v96 = *(_OWORD *)&v116[40]; /*0x140cc7f0e*/
          v97 = *(_OWORD *)&v116[56]; /*0x140cc7f1c*/
          v98 = *(_OWORD *)&v116[72]; /*0x140cc7f2a*/
          v99 = v117; /*0x140cc7f38*/
          v93 = v124; /*0x140cc7f46*/
          v92 = v123; /*0x140cc7f54*/
          *(_OWORD *)&v91[80] = v122; /*0x140cc7f62*/
          *(_OWORD *)&v91[64] = v121; /*0x140cc7f70*/
          *(_OWORD *)&v91[48] = v120; /*0x140cc7f7e*/
          *(_OWORD *)&v91[32] = v119; /*0x140cc7f8c*/
          *(__m256i *)v91 = v118; /*0x140cc7f9a*/
          v130 = v117; /*0x140cc7fb6*/
          v129 = *(_OWORD *)&v116[72]; /*0x140cc7fc4*/
          v128 = *(_OWORD *)&v116[56]; /*0x140cc7fe7*/
          v127 = *(_OWORD *)&v116[40]; /*0x140cc7fee*/
          v126 = *(_OWORD *)&v116[24]; /*0x140cc7ff5*/
          v125 = *(_OWORD *)&v116[8]; /*0x140cc7ffc*/
          v5 = v150; /*0x140cc8003*/
          v34 = v150 + 9520; /*0x140cc800a*/
          *(_QWORD *)(v150 + 9520) = v115; /*0x140cc8011*/
          *(_QWORD *)(v5 + 9528) = v33; /*0x140cc8018*/
          v35 = v126; /*0x140cc8026*/
          v36 = v127; /*0x140cc802d*/
          v37 = v128; /*0x140cc8034*/
          *(_OWORD *)(v5 + 9536) = v125; /*0x140cc803b*/
          *(_OWORD *)(v5 + 9552) = v35; /*0x140cc8043*/
          *(_OWORD *)(v5 + 9568) = v36; /*0x140cc804b*/
          *(_OWORD *)(v5 + 9584) = v37; /*0x140cc8053*/
          *(_OWORD *)(v5 + 9600) = v129; /*0x140cc8062*/
          *(_QWORD *)(v5 + 9616) = v130; /*0x140cc8071*/
          v38 = *(_OWORD *)&v91[16]; /*0x140cc807f*/
          v39 = *(_OWORD *)&v91[32]; /*0x140cc8086*/
          v40 = *(_OWORD *)&v91[48]; /*0x140cc808d*/
          *(_OWORD *)(v5 + 9624) = *(_OWORD *)v91; /*0x140cc8094*/
          *(_OWORD *)(v5 + 9640) = v38; /*0x140cc809c*/
          *(_OWORD *)(v5 + 9656) = v39; /*0x140cc80a4*/
          *(_OWORD *)(v5 + 9672) = v40; /*0x140cc80ac*/
          *(_OWORD *)(v5 + 9688) = *(_OWORD *)&v91[64]; /*0x140cc80bb*/
          *(_OWORD *)(v5 + 9704) = *(_OWORD *)&v91[80]; /*0x140cc80ca*/
          *(_OWORD *)(v5 + 9720) = v92; /*0x140cc80d9*/
          *(_OWORD *)(v5 + 9736) = v93; /*0x140cc80e8*/
          *(_QWORD *)(v5 + 9984) = v34; /*0x140cc80f0*/
          *(_BYTE *)(v5 + 9993) = 0; /*0x140cc80f7*/
LABEL_26:
          v144 = (_QWORD *)(v5 + 9752); /*0x140cc812b*/
          detect_official_provider_0(&v115, v5 + 9752, a2); /*0x140cc8143*/
          v24 = (__int64)v115; /*0x140cc8149*/
          if ( v115 == (const char *)-1LL ) /*0x140cc8154*/
          {
            v44 = (_BYTE *)v150; /*0x140cc8781*/
            *(_BYTE *)(v150 + 10984) = 3; /*0x140cc8788*/
            v44[10992] = 3; /*0x140cc878f*/
LABEL_46:
            v44[11000] = 3; /*0x140cc8796*/
            v44[11008] = 3; /*0x140cc879d*/
            v53 = 3; /*0x140cc87a4*/
            result = 1; /*0x140cc87a6*/
            goto LABEL_62; /*0x140cc87a8*/
          }
          v23 = *(_QWORD *)v116; /*0x140cc815a*/
          v79 = *(_OWORD *)&v116[8]; /*0x140cc8168*/
          v80 = *(_OWORD *)&v116[24]; /*0x140cc8176*/
          v81 = *(_OWORD *)&v116[40]; /*0x140cc8184*/
          v82 = *(_OWORD *)&v116[56]; /*0x140cc8192*/
          v83 = *(_OWORD *)&v116[72]; /*0x140cc81a0*/
          v84 = v117; /*0x140cc81ae*/
          v75 = v118; /*0x140cc81bc*/
          sub_140BEE390(v144); /*0x140cc81d8*/
          v136 = v84; /*0x140cc81e5*/
          v135 = v83; /*0x140cc81f3*/
          v134 = v82; /*0x140cc8216*/
          v133 = v81; /*0x140cc821d*/
          v132 = v80; /*0x140cc8224*/
          v131 = v79; /*0x140cc822b*/
          v74 = v75; /*0x140cc8240*/
          sub_140018960(v150 + 9520); /*0x140cc825c*/
          v21 = v143; /*0x140cc8261*/
LABEL_28:
          v90 = v136; /*0x140cc8268*/
          v89 = v135; /*0x140cc827d*/
          v88 = v134; /*0x140cc82a0*/
          v87 = v133; /*0x140cc82a7*/
          v86 = v132; /*0x140cc82ae*/
          v85 = v131; /*0x140cc82b5*/
          v76 = v74; /*0x140cc82ca*/
          *v21 = 1; /*0x140cc82d8*/
          v101 = v85; /*0x140cc82f9*/
          v102 = v86; /*0x140cc8300*/
          v103 = v87; /*0x140cc8307*/
          v104 = v88; /*0x140cc830e*/
          v105 = v89; /*0x140cc831c*/
          v106 = v90; /*0x140cc832a*/
          v107 = v76; /*0x140cc833f*/
          if ( v24 == -1 ) /*0x140cc8351*/
          {
            v115 = (const char *)v23; /*0x140cc8482*/
            *(_OWORD *)v116 = v101; /*0x140cc84a5*/
            *(_OWORD *)&v116[16] = v102; /*0x140cc84ac*/
            *(_OWORD *)&v116[32] = v103; /*0x140cc84b3*/
            *(_OWORD *)&v116[48] = v104; /*0x140cc84ba*/
            *(_OWORD *)&v116[64] = v105; /*0x140cc84c8*/
            *(_QWORD *)&v116[80] = v106; /*0x140cc84d6*/
            *(_QWORD *)&v131 = 0; /*0x140cc84dd*/
            *((_QWORD *)&v131 + 1) = 1; /*0x140cc84e8*/
            *(_QWORD *)&v132 = 0; /*0x140cc84f3*/
            *(_QWORD *)&v91[16] = 1610612768; /*0x140cc84fe*/
            *(_QWORD *)v91 = &v131; /*0x140cc8510*/
            *(_QWORD *)&v91[8] = &off_1417C41C0; /*0x140cc851e*/
            if ( (unsigned __int8)sub_140B036A0(&v115, v91) ) /*0x140cc8533*/
              sub_1416C3060( /*0x140cc8b2b*/
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v147,
                (unsigned int)&unk_1417BC180,
                (__int64)&off_1417C4278);
            v25 = *((_QWORD *)&v131 + 1); /*0x140cc8548*/
            v42 = (_BYTE *)v131; /*0x140cc8548*/
            v47 = v132; /*0x140cc854f*/
            sub_140BF2F60(&v115); /*0x140cc855d*/
            v48 = v150; /*0x140cc8563*/
            v49 = *(_QWORD *)(v150 + 9456); /*0x140cc856a*/
            if ( v49 ) /*0x140cc8574*/
              sub_140001660(*(_QWORD *)(v150 + 9464), v49, 1); /*0x140cc8583*/
            sub_141684120(&v64, v63, 176); /*0x140cc8599*/
            *(_BYTE *)(v48 + 10992) = 1; /*0x140cc859e*/
            v43 = (__m128i)v47; /*0x140cc85a5*/
            v41 = -1; /*0x140cc85aa*/
            v46 = v148; /*0x140cc85b1*/
          }
          else
          {
            v73 = v107; /*0x140cc835e*/
            v72 = v106; /*0x140cc837a*/
            v71 = v105; /*0x140cc8396*/
            v70 = v104; /*0x140cc83b9*/
            v69 = v103; /*0x140cc83c0*/
            v68 = v102; /*0x140cc83c7*/
            v66[0] = v24; /*0x140cc83ce*/
            v66[1] = v23; /*0x140cc83d5*/
            v67 = v101; /*0x140cc83dc*/
            sub_140ACE890(&v115, v66); /*0x140cc83f1*/
            v41 = (__int64)v115; /*0x140cc83f7*/
            v25 = *(_QWORD *)&v116[8]; /*0x140cc8405*/
            v42 = *(_BYTE **)v116; /*0x140cc8405*/
            v43 = _mm_loadu_si128((const __m128i *)&v116[16]); /*0x140cc840c*/
            sub_141684120(v63, &v116[32], 176); /*0x140cc8425*/
            v44 = (_BYTE *)v150; /*0x140cc842a*/
            v45 = *(_QWORD *)(v150 + 9456); /*0x140cc8431*/
            if ( v45 ) /*0x140cc843b*/
              sub_140001660(*(_QWORD *)(v150 + 9464), v45, 1); /*0x140cc844a*/
            sub_141684120(&v64, v63, 176); /*0x140cc8460*/
            v44[10992] = 1; /*0x140cc8465*/
            v46 = v148; /*0x140cc8470*/
            if ( v41 == -2 ) /*0x140cc8477*/
              goto LABEL_46; /*0x140cc8477*/
          }
          sub_141684120(v62, &v64, 176); /*0x140cc85cc*/
          sub_140BEA280(v46); /*0x140cc85d5*/
          if ( v41 != -1 ) /*0x140cc85df*/
          {
            sub_141684120(v78, v62, 176); /*0x140cc85f6*/
            *(_QWORD *)v77 = v41; /*0x140cc85fb*/
            *(_QWORD *)&v77[8] = v42; /*0x140cc8602*/
            *(_QWORD *)&v77[16] = v25; /*0x140cc8609*/
            *(__m128i *)&v77[24] = v43; /*0x140cc8610*/
            sub_140B0D500(&v115, v77); /*0x140cc8626*/
            v25 = ((unsigned __int64)((v116[7] << 16) | (unsigned int)*(unsigned __int16 *)&v116[5]) << 32) /*0x140cc8651*/
                | *(unsigned int *)&v116[1];
            v10 = v116[0]; /*0x140cc8654*/
            v26 = *(_QWORD *)&v116[8]; /*0x140cc865c*/
            v27 = *(_OWORD *)&v116[16]; /*0x140cc8663*/
            if ( v115 == (const char *)-1LL ) /*0x140cc8675*/
            {
              v31 = 0; /*0x140cc87ad*/
            }
            else
            {
              v116[7] = (((unsigned __int64)((v116[7] << 16) | (unsigned int)*(unsigned __int16 *)&v116[5]) << 32) /*0x140cc8689*/
                       | *(unsigned int *)&v116[1]) >> 48;
              *(_WORD *)&v116[5] = WORD2(v25); /*0x140cc8696*/
              *(_DWORD *)&v116[1] = v25; /*0x140cc869d*/
              v64 = 0; /*0x140cc86ce*/
              v65 = 1u; /*0x140cc86d9*/
              v63[2] = 1610612768; /*0x140cc86ef*/
              v63[0] = &v64; /*0x140cc86f7*/
              v63[1] = &off_1417C41C0; /*0x140cc8702*/
              if ( (unsigned __int8)sub_141230630(&v115, v63, v51) ) /*0x140cc8711*/
                sub_1416C3060( /*0x140cc8b5c*/
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v147,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v26 = v64; /*0x140cc871f*/
              v27 = v65; /*0x140cc8726*/
              sub_140BF0F60(&v115); /*0x140cc873b*/
              v31 = 1; /*0x140cc8741*/
              v10 = 3; /*0x140cc8743*/
            }
            v55 = v149; /*0x140cc87af*/
            goto LABEL_55; /*0x140cc87b6*/
          }
          *((_QWORD *)&v27 + 1) = v43.m128i_i64[0]; /*0x140cc8748*/
          if ( v43.m128i_i64[0] < 0 ) /*0x140cc8750*/
          {
            v52 = 0; /*0x140cc8752*/
            goto LABEL_43; /*0x140cc8752*/
          }
          if ( v43.m128i_i64[0] ) /*0x140cc87c4*/
          {
            nullsub_1(v50); /*0x140cc87ca*/
            v52 = 1; /*0x140cc87cf*/
            v56 = sub_140001650(v43.m128i_i64[0], 1); /*0x140cc87dc*/
            if ( !v56 ) /*0x140cc87e4*/
            {
LABEL_43:
              v144 = (_QWORD *)v25; /*0x140cc8754*/
              v148 = v42; /*0x140cc875b*/
              sub_1416C2D4B(v52, v43.m128i_i64[0]); /*0x140cc8768*/
            }
            *(_QWORD *)&v27 = v56; /*0x140cc87ea*/
            sub_141684120(v56, v25, v43.m128i_i64[0]); /*0x140cc87f6*/
            v55 = v149; /*0x140cc87fe*/
            if ( v42 ) /*0x140cc8805*/
              goto LABEL_53; /*0x140cc8805*/
          }
          else
          {
            *(_QWORD *)&v27 = 1; /*0x140cc8aeb*/
            v55 = v149; /*0x140cc8af3*/
            if ( v42 ) /*0x140cc8afa*/
            {
LABEL_53:
              v57 = v55; /*0x140cc8807*/
              sub_140001660(v25, v42, 1); /*0x140cc8816*/
              v55 = v57; /*0x140cc881b*/
            }
          }
          v31 = 1; /*0x140cc881e*/
          v10 = 3; /*0x140cc8820*/
          v26 = v43.m128i_i64[0]; /*0x140cc8823*/
LABEL_55:
          *v145 = 1; /*0x140cc8826*/
          sub_140BF0DE0(v55); /*0x140cc8830*/
          v32 = v150; /*0x140cc8836*/
          if ( *(_QWORD *)(v150 + 6224) != -1 ) /*0x140cc8845*/
          {
            v144 = (_QWORD *)(v150 + 6232); /*0x140cc8852*/
            v58 = *(__int64 **)(v150 + 6232); /*0x140cc8859*/
            v145 = *(_BYTE **)(v150 + 6240); /*0x140cc8867*/
            v148 = nullptr; /*0x140cc886e*/
            v146 = v58; /*0x140cc8879*/
            while ( v145 != v148 ) /*0x140cc888e*/
            {
              ++v148; /*0x140cc8893*/
              v59 = v58 + 12; /*0x140cc889a*/
              sub_1402C7520(); /*0x140cc889e*/
              v58 = v59; /*0x140cc88a4*/
            }
            v32 = v150; /*0x140cc88a9*/
            v30 = *(_QWORD *)(v150 + 6224); /*0x140cc88b0*/
            if ( v30 ) /*0x140cc88ba*/
LABEL_60:
              sub_140001660(*v144, 96 * v30, 8); /*0x140cc88bc*/
          }
LABEL_61:
          *(_BYTE *)(v32 + 11008) = 1; /*0x140cc88d9*/
          sub_140BE5950(v149); /*0x140cc88e8*/
          v110 = v25; /*0x140cc88ee*/
          v112 = BYTE6(v25); /*0x140cc88fc*/
          v111 = WORD2(v25); /*0x140cc8906*/
          v114 = v27; /*0x140cc890e*/
          v109 = v10; /*0x140cc891f*/
          v113 = v26; /*0x140cc8926*/
          v108 = v31; /*0x140cc892d*/
          v60 = v150; /*0x140cc8934*/
          *(_BYTE *)(v150 + 11027) = 0; /*0x140cc893b*/
          sub_141684120(&v115, v60, 360); /*0x140cc8955*/
          *(_BYTE *)(v60 + 11026) = 0; /*0x140cc895a*/
          v61 = *(_QWORD *)(v60 + 384); /*0x140cc8961*/
          *(_BYTE *)(v60 + 11025) = 0; /*0x140cc8968*/
          *(_QWORD *)&v77[16] = *(_QWORD *)(v60 + 376); /*0x140cc8976*/
          *(_OWORD *)v77 = *(_OWORD *)(v60 + 360); /*0x140cc8984*/
          sub_14047E370( /*0x140cc89b0*/
            (unsigned int)&v115,
            v61,
            (unsigned int)&v108,
            (unsigned int)v77,
            *(_DWORD *)(v60 + 11016),
            *(_DWORD *)(v60 + 11020));
          v53 = 1; /*0x140cc89b6*/
          result = 0; /*0x140cc89b8*/
          v44 = (_BYTE *)v150; /*0x140cc89ba*/
LABEL_62:
          v44[11024] = v53; /*0x140cc89c1*/
          return result;
        case 1: /*0x140cc7c4f*/
LABEL_73:
          v148 = (_BYTE *)v16; /*0x140cc8be3*/
          v146 = v14; /*0x140cc8bea*/
          v145 = v15; /*0x140cc8bf1*/
          v149 = v7; /*0x140cc8bf8*/
          sub_1416C3400(&off_1417BAF38, a2, a3, a4); /*0x140cc8c06*/
        case 2: /*0x140cc7c4f*/
LABEL_72:
          v148 = (_BYTE *)v16; /*0x140cc8bb5*/
          v146 = v14; /*0x140cc8bbc*/
          v145 = v15; /*0x140cc8bc3*/
          v149 = v7; /*0x140cc8bca*/
          sub_1416C3420(&off_1417BAF38, a2, a3, a4); /*0x140cc8bd8*/
        case 3: /*0x140cc7c4f*/
LABEL_11:
          v21 = (_BYTE *)(v5 + 10984); /*0x140cc7cac*/
          v20 = v5 + 9480; /*0x140cc7cbb*/
          switch ( *(_BYTE *)(v5 + 10984) ) /*0x140cc7cd0*/
          {
            case 0: /*0x140cc7cd0*/
              v17 = *(_QWORD **)(v5 + 9480); /*0x140cc7cd2*/
              v19 = *(_QWORD *)(v5 + 9488); /*0x140cc7cd9*/
              v18 = *(_QWORD *)(v5 + 9496); /*0x140cc7ce0*/
              goto LABEL_13; /*0x140cc7ce0*/
            case 1: /*0x140cc7cd0*/
              v148 = (_BYTE *)v16; /*0x140cc8c8e*/
              v146 = v14; /*0x140cc8c95*/
              v145 = v15; /*0x140cc8c9c*/
              v149 = v7; /*0x140cc8ca3*/
              v139 = v5 + 9480; /*0x140cc8caa*/
              sub_1416C3400(&off_1417BA868, a2, a3, a4); /*0x140cc8cb8*/
            case 2: /*0x140cc7cd0*/
              v148 = (_BYTE *)v16; /*0x140cc8c5c*/
              v146 = v14; /*0x140cc8c63*/
              v145 = v15; /*0x140cc8c6a*/
              v149 = v7; /*0x140cc8c71*/
              v139 = v5 + 9480; /*0x140cc8c78*/
              sub_1416C3420(&off_1417BA868, a2, a3, a4); /*0x140cc8c86*/
            case 3: /*0x140cc7cd0*/
              v140 = v5 + 9480; /*0x140cc8101*/
              v143 = (_BYTE *)(v5 + 10984); /*0x140cc8108*/
              v148 = (_BYTE *)v16; /*0x140cc810f*/
              v146 = v14; /*0x140cc8116*/
              v145 = v15; /*0x140cc811d*/
              v149 = v7; /*0x140cc8124*/
              goto LABEL_26; /*0x140cc8124*/
          }
      }
  }
}