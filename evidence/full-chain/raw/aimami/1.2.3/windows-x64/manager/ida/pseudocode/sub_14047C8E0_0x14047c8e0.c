// module: codexmate_lib/core/relay/manager
// addr: 0x14047c8e0
// name: sub_14047C8E0
// win 1.2.3 | module core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
void __fastcall sub_14047C8E0(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r13
  __int128 v12; // kr00_16
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // r9
  __int64 v27; // rsi
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rax
  bool v41; // zf
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r12
  char v50; // si
  __int64 v51; // r9
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int64 v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // r13
  __int64 v58; // r9
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // r14
  _QWORD *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // r15
  __int64 v68; // r14
  _QWORD *v69; // rsi
  __int64 v70; // rdx
  _QWORD *v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rbx
  _QWORD *v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r8
  char v82; // r12
  __int64 v83; // r9
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm2
  _QWORD *v87; // rsi
  __int64 v88; // rdx
  _BYTE v89[24]; // [rsp+30h] [rbp-50h] BYREF
  int v90; // [rsp+48h] [rbp-38h]
  __int128 v91; // [rsp+410h] [rbp+390h] BYREF
  __int128 v92; // [rsp+420h] [rbp+3A0h]
  __int128 v93; // [rsp+430h] [rbp+3B0h]
  __int128 v94; // [rsp+440h] [rbp+3C0h]
  __int128 v95; // [rsp+450h] [rbp+3D0h]
  __int128 v96; // [rsp+460h] [rbp+3E0h]
  __int128 v97; // [rsp+7F0h] [rbp+770h]
  __int128 v98; // [rsp+800h] [rbp+780h]
  __int128 v99; // [rsp+818h] [rbp+798h] BYREF
  __int64 v100; // [rsp+828h] [rbp+7A8h]
  __int128 v101; // [rsp+830h] [rbp+7B0h] BYREF
  __int64 v102; // [rsp+840h] [rbp+7C0h]
  _OWORD v103[2]; // [rsp+848h] [rbp+7C8h] BYREF
  __int64 v104; // [rsp+868h] [rbp+7E8h] BYREF
  __int64 v105; // [rsp+870h] [rbp+7F0h]
  __int64 v106; // [rsp+878h] [rbp+7F8h]
  __int64 v107; // [rsp+880h] [rbp+800h] BYREF
  __int64 v108; // [rsp+888h] [rbp+808h]
  __int64 v109; // [rsp+890h] [rbp+810h]
  __int64 v110; // [rsp+898h] [rbp+818h] BYREF
  __int64 v111; // [rsp+8A0h] [rbp+820h]
  __int64 v112; // [rsp+8A8h] [rbp+828h]
  __int128 v113; // [rsp+8B0h] [rbp+830h] BYREF
  __int128 v114; // [rsp+8C0h] [rbp+840h]
  __int64 v115; // [rsp+8D0h] [rbp+850h]
  __int64 v116; // [rsp+8D8h] [rbp+858h]
  __int64 v117; // [rsp+8E0h] [rbp+860h]
  char v118; // [rsp+8EEh] [rbp+86Eh]
  char v119; // [rsp+8EFh] [rbp+86Fh]
  __int64 v120; // [rsp+8F0h] [rbp+870h]
  char v121; // [rsp+8FFh] [rbp+87Fh]
  __int64 v122; // [rsp+900h] [rbp+880h]

  v122 = -2;
  if ( !sub_1403FD6F0() )
  {
    nullsub_1(v6);
    v18 = sub_140001650(131, 1);
    if ( !v18 )
      sub_1416C2D4B(1, 131);
    v19 = v18;
    sub_141684120(v18, aCodexLatestDes, 131);
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)(a1 + 16) = 131;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 32) = 131;
    *(_QWORD *)a1 = -1;
    return;
  }
  v7 = a2[1];
  v8 = a2[2];
  sub_140714360(&v107, v7, v8);
  v10 = v109;
  if ( !v109 )
  {
    nullsub_1(v9);
    v20 = sub_140001650(99, 1);
    if ( !v20 )
      sub_1416C2D4B(1, 99);
    *(_OWORD *)(v20 + 80) = xmmword_141758CB6;
    *(_OWORD *)(v20 + 64) = xmmword_141758CA6;
    *(_OWORD *)(v20 + 48) = xmmword_141758C96;
    *(_OWORD *)(v20 + 32) = xmmword_141758C86;
    qmemcpy((void *)v20, "CODEX_RUNTIME_DB_NOT_INITIALIZED", 32);
    *(_DWORD *)(v20 + 95) = 1414547316;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)(a1 + 16) = 99;
    *(_QWORD *)(a1 + 24) = v20;
    *(_QWORD *)(a1 + 32) = 99;
    *(_QWORD *)a1 = -1;
    v11 = v108;
    goto LABEL_12;
  }
  v11 = v108;
  active_codex_state_db_path(&v113, v108, v109);
  if ( (_QWORD)v113 != -1 )
  {
    v117 = v113;
    v12 = v114;
    v121 = 1;
    v120 = *((_QWORD *)&v113 + 1);
    if ( !(unsigned __int8)sub_14048DCF0(*((_QWORD *)&v113 + 1), v114) )
    {
      *(_QWORD *)&v103[0] = v120;
      *((_QWORD *)&v103[0] + 1) = v12;
      *(_QWORD *)v89 = v103;
      *(_QWORD *)&v89[8] = sub_14148F3A0;
      v121 = 1;
      sub_14149C0F0((char *)&v91 + 8, &unk_141759D96, v89);
      *(_QWORD *)&v91 = 10;
      *(_OWORD *)(a1 + 88) = v96;
      v28 = v92;
      v29 = v93;
      v30 = v94;
      *(_OWORD *)(a1 + 72) = v95;
      *(_OWORD *)(a1 + 56) = v30;
      *(_OWORD *)(a1 + 40) = v29;
      *(_OWORD *)(a1 + 24) = v28;
      *(_OWORD *)(a1 + 8) = v91;
      v17 = v117;
      *(_QWORD *)a1 = -1;
      if ( !v17 )
        goto LABEL_107;
LABEL_22:
      v31 = 1;
      v32 = v120;
LABEL_106:
      sub_140001660(v32, v17, v31);
      goto LABEL_107;
    }
    v121 = 1;
    maybe_persist_cache((unsigned int)&v91, (_DWORD)a2, v120, v12, a3);
    if ( (_DWORD)v91 != -1 )
    {
      *(_OWORD *)(a1 + 88) = v96;
      *(_OWORD *)(a1 + 72) = v95;
      v14 = v91;
      v15 = v92;
      v16 = v93;
      *(_OWORD *)(a1 + 56) = v94;
      *(_OWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 24) = v15;
      *(_OWORD *)(a1 + 8) = v14;
      v17 = v117;
      *(_QWORD *)a1 = -1;
      if ( !v17 )
      {
LABEL_107:
        v71 = (_QWORD *)(v11 + 8);
        do
        {
          v72 = *(v71 - 1);
          if ( v72 )
            sub_140001660(*v71, v72, 1);
          v71 += 4;
          --v10;
        }
        while ( v10 );
LABEL_12:
        if ( !v107 )
          return;
        v21 = 32 * v107;
        v22 = v11;
        goto LABEL_14;
      }
      goto LABEL_22;
    }
    if ( (__int64)v12 < 0 )
    {
      v33 = 0;
      goto LABEL_25;
    }
    if ( (_QWORD)v12 )
    {
      nullsub_1(v13);
      v43 = sub_140001650(v12, 1);
      v33 = 1;
      if ( !v43 )
LABEL_25:
        sub_1416C2D4B(v33, v12);
      v44 = v43;
      sub_141684120(v43, v120, v12);
    }
    else
    {
      v44 = 1;
    }
    *(_QWORD *)v89 = v12;
    *(_QWORD *)&v89[8] = v44;
    *(_QWORD *)&v89[16] = v12;
    LOBYTE(v90) = BYTE8(v12);
    sub_1407140C0(&v91, a2, v89);
    sub_141684120(a1, &v91, 992);
    *(_QWORD *)(a1 + 992) = v117;
    *(_QWORD *)(a1 + 1000) = v120;
    *(_OWORD *)(a1 + 1008) = v12;
    *(_BYTE *)(a1 + 1024) = 0;
    goto LABEL_107;
  }
  v117 = v11 + 32 * v10;
  sub_140316220(&v110, v11);
  sub_1407130B0(v103, v7, v8);
  if ( *(_QWORD *)&v103[0] != -1 )
  {
    v120 = v11;
    v114 = v103[1];
    v113 = v103[0];
    v23 = v112;
    *(_QWORD *)&v91 = v111;
    *((_QWORD *)&v91 + 1) = v111 + 32 * v112;
    *(_QWORD *)&v92 = &v113;
    sub_140316550(&v104, &v91);
    if ( v106 == 1 )
    {
      v25 = v105;
      v26 = *(_QWORD *)(v105 + 16);
      if ( v26 < 0 )
      {
        v27 = 0;
        goto LABEL_20;
      }
      v117 = *(_QWORD *)(v105 + 16);
      if ( v26 )
      {
        v115 = *(_QWORD *)(v105 + 8);
        nullsub_1(v24);
        v27 = 1;
        v45 = sub_140001650(v117, 1);
        v26 = v117;
        if ( !v45 )
LABEL_20:
          sub_1416C2D4B(v27, v26);
        v46 = v45;
        sub_141684120(v45, v115, v117);
        v47 = v46;
        LODWORD(v26) = v117;
      }
      else
      {
        v47 = 1;
      }
      v50 = *(_BYTE *)(v25 + 24);
      v119 = 1;
      v115 = v47;
      maybe_persist_cache((unsigned int)&v91, (_DWORD)a2, v47, v26, a3);
      if ( (_DWORD)v91 == -1 )
      {
        *(_QWORD *)v89 = v117;
        *(_QWORD *)&v89[8] = v115;
        *(_QWORD *)&v89[16] = v117;
        LOBYTE(v90) = v50;
        v119 = 0;
        LOBYTE(v51) = 1;
        sub_14047DFC0(&v91, a2, v89, v51);
        sub_141684120(a1, &v91, 1032);
      }
      else
      {
        *(_OWORD *)(a1 + 88) = v96;
        *(_OWORD *)(a1 + 72) = v95;
        v52 = v91;
        v53 = v92;
        v54 = v93;
        *(_OWORD *)(a1 + 56) = v94;
        *(_OWORD *)(a1 + 40) = v54;
        *(_OWORD *)(a1 + 24) = v53;
        *(_OWORD *)(a1 + 8) = v52;
        *(_QWORD *)a1 = -1;
        if ( v117 )
          sub_140001660(v115, v117, 1);
      }
      if ( *(_QWORD *)v25 )
        sub_140001660(*(_QWORD *)(v25 + 8), *(_QWORD *)v25, 1);
      if ( v104 )
        sub_140001660(v25, 32 * v104, 8);
      if ( (_QWORD)v113 )
        sub_140001660(*((_QWORD *)&v113 + 1), v113, 1);
      v11 = v120;
LABEL_76:
      v55 = v111;
      if ( !v23 )
      {
LABEL_104:
        if ( !v110 )
          goto LABEL_107;
        v17 = 32 * v110;
        v31 = 8;
        v32 = v55;
        goto LABEL_106;
      }
LABEL_136:
      v87 = (_QWORD *)(v55 + 8);
      do
      {
        v88 = *(v87 - 1);
        if ( v88 )
          sub_140001660(*v87, v88, 1);
        v87 += 4;
        --v23;
      }
      while ( v23 );
      goto LABEL_104;
    }
    v8 = v105;
    if ( v106 )
    {
      v34 = 32 * v106;
      v35 = 0;
      do
      {
        v36 = *(_QWORD *)(v8 + v35);
        if ( v36 )
          sub_140001660(*(_QWORD *)(v8 + v35 + 8), v36, 1);
        v35 += 32;
      }
      while ( v34 != v35 );
    }
    if ( v104 )
      sub_140001660(v8, 32 * v104, 8);
    v11 = v120;
    if ( (_QWORD)v113 )
      sub_140001660(*((_QWORD *)&v113 + 1), v113, 1);
  }
  sub_141473FA0((unsigned int)&v91, a2[97], a2[98], (unsigned int)&unk_141759D7D, 25);
  v120 = *((_QWORD *)&v91 + 1);
  sub_14148D3C0(v89, *((_QWORD *)&v91 + 1), v92);
  if ( (_QWORD)v91 )
    sub_140001660(v120, v91, 1);
  if ( *(_QWORD *)v89 == -1 )
  {
    sub_140018650(&v89[8]);
  }
  else
  {
    v120 = *(_QWORD *)v89;
    v115 = *(_QWORD *)&v89[8];
    v91 = *(_OWORD *)&v89[8];
    v92 = 0;
    sub_1408A9FD0(v89, &v91);
    v37 = *(_QWORD *)v89;
    if ( *(_QWORD *)v89 != -1 )
    {
      v38 = *(_QWORD *)&v89[8];
      v116 = *(_QWORD *)&v89[8];
      if ( v90 == 1 )
      {
        v8 = *(_QWORD *)&v89[16];
        v39 = v120;
      }
      else
      {
        v39 = v120;
        if ( *(_QWORD *)v89 )
          sub_140001660(v116, *(_QWORD *)v89, 1);
        v37 = -1;
      }
      if ( v39 )
      {
        v48 = v39;
        v49 = v37;
        sub_140001660(v115, v48, 1);
        v37 = v49;
      }
      v23 = v112;
      if ( v37 != -1 )
      {
        v120 = v37;
        *(_QWORD *)&v91 = v37;
        *((_QWORD *)&v91 + 1) = v116;
        *(_QWORD *)&v92 = v8;
        BYTE8(v92) = 1;
        if ( (unsigned __int8)sub_140423890(&v91, v111, v112) )
        {
          *((_QWORD *)&v113 + 1) = v116;
          *(_QWORD *)&v114 = v8;
          *(_QWORD *)&v113 = v120;
          BYTE8(v114) = 1;
          sub_14032C610(v89, &v113);
          *(_QWORD *)&v92 = *(_QWORD *)&v89[16];
          v91 = *(_OWORD *)v89;
          BYTE8(v92) = 1;
          sub_1407140C0(v89, a2, &v91);
          v97 = v113;
          v98 = v114;
          sub_141684120(&v91, v89, 992);
          sub_141684120(a1, &v91, 1024);
          *(_BYTE *)(a1 + 1024) = 2;
          goto LABEL_76;
        }
        if ( v120 )
          sub_140001660(v116, v120, 1);
      }
      goto LABEL_82;
    }
    v40 = **(_QWORD **)&v89[8];
    v41 = **(_QWORD **)&v89[8] == 1;
    v116 = *(_QWORD *)&v89[8];
    if ( v41 )
    {
      sub_140018650(*(_QWORD *)&v89[8] + 8LL);
    }
    else if ( !v40 )
    {
      v42 = *(_QWORD *)(v116 + 16);
      if ( v42 )
        sub_140001660(*(_QWORD *)(v116 + 8), v42, 1);
    }
    sub_140001660(v116, 40, 8);
    if ( v120 )
      sub_140001660(v115, v120, 1);
  }
  v23 = v112;
LABEL_82:
  if ( !v23 )
  {
    nullsub_1(v38);
    v60 = sub_140001650(24 * v10, 8);
    if ( !v60 )
      sub_1416C2D4B(8, 24 * v10);
    *(_QWORD *)v89 = v10;
    *(_QWORD *)&v89[8] = v60;
    *(_QWORD *)&v89[16] = 0;
    *(_QWORD *)&v92 = v60;
    v91 = (unsigned __int64)&v89[16];
    sub_140994370(v11, v117, &v91);
    v113 = *(_OWORD *)v89;
    v61 = *(_QWORD *)&v89[16];
    *(_QWORD *)&v114 = *(_QWORD *)&v89[16];
    v62 = *(_QWORD *)&v89[8];
    sub_140440300((unsigned int)&v91, *(_DWORD *)&v89[8], *(_DWORD *)&v89[16], (unsigned int)&unk_141758CC9, 3);
    *(_QWORD *)&v89[16] = v92;
    *(_OWORD *)v89 = v91;
    if ( v61 )
    {
      v63 = (_QWORD *)(v62 + 8);
      do
      {
        v64 = *(v63 - 1);
        if ( v64 )
          sub_140001660(*v63, v64, 1);
        v63 += 3;
        --v61;
      }
      while ( v61 );
    }
    if ( (_QWORD)v113 )
      sub_140001660(v62, 24 * v113, 8);
    *(_QWORD *)&v91 = v89;
    *((_QWORD *)&v91 + 1) = sub_1400015F0;
    sub_14149C0F0(&v101, &unk_141758CCC, &v91);
    *(_QWORD *)(a1 + 32) = v102;
    *(_OWORD *)(a1 + 16) = v101;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)a1 = -1;
    if ( *(_QWORD *)v89 )
      sub_140001660(*(_QWORD *)&v89[8], *(_QWORD *)v89, 1);
    v55 = v111;
    goto LABEL_104;
  }
  if ( v23 == 1 )
  {
    v56 = v11;
    v57 = v111;
    v58 = *(_QWORD *)(v111 + 16);
    if ( v58 < 0 )
    {
      v59 = 0;
      goto LABEL_86;
    }
    v120 = *(_QWORD *)(v111 + 16);
    if ( v58 )
    {
      v117 = *(_QWORD *)(v111 + 8);
      nullsub_1(v38);
      v59 = 1;
      v79 = sub_140001650(v120, 1);
      v58 = v120;
      if ( !v79 )
LABEL_86:
        sub_1416C2D4B(v59, v58);
      v80 = v79;
      sub_141684120(v79, v117, v120);
      v81 = v80;
      LODWORD(v58) = v120;
    }
    else
    {
      v81 = 1;
    }
    v82 = *(_BYTE *)(v57 + 24);
    v118 = 1;
    v117 = v81;
    maybe_persist_cache((unsigned int)&v91, (_DWORD)a2, v81, v58, a3);
    v11 = v56;
    if ( (_DWORD)v91 == -1 )
    {
      *(_QWORD *)v89 = v120;
      *(_QWORD *)&v89[8] = v117;
      *(_QWORD *)&v89[16] = v120;
      LOBYTE(v90) = v82;
      v118 = 0;
      LOBYTE(v83) = 3;
      sub_14047DFC0(&v91, a2, v89, v83);
      sub_141684120(a1, &v91, 1032);
    }
    else
    {
      *(_OWORD *)(a1 + 88) = v96;
      *(_OWORD *)(a1 + 72) = v95;
      v84 = v91;
      v85 = v92;
      v86 = v93;
      *(_OWORD *)(a1 + 56) = v94;
      *(_OWORD *)(a1 + 40) = v86;
      *(_OWORD *)(a1 + 24) = v85;
      *(_OWORD *)(a1 + 8) = v84;
      *(_QWORD *)a1 = -1;
      if ( v120 )
        sub_140001660(v117, v120, 1);
    }
    v23 = 1;
    v55 = v111;
    goto LABEL_136;
  }
  v120 = v11;
  v65 = v111;
  nullsub_1(v38);
  v66 = sub_140001650(24 * v23, 8);
  if ( !v66 )
    sub_1416C2D4B(8, 24 * v23);
  *(_QWORD *)v89 = v23;
  *(_QWORD *)&v89[8] = v66;
  *(_QWORD *)&v89[16] = 0;
  *(_QWORD *)&v92 = v66;
  v91 = (unsigned __int64)&v89[16];
  sub_140994370(v65, v65 + 32 * v23, &v91);
  v113 = *(_OWORD *)v89;
  v67 = *(_QWORD *)&v89[16];
  *(_QWORD *)&v114 = *(_QWORD *)&v89[16];
  v68 = *(_QWORD *)&v89[8];
  sub_140440300((unsigned int)&v91, *(_DWORD *)&v89[8], *(_DWORD *)&v89[16], (unsigned int)&unk_141758CC9, 3);
  *(_QWORD *)&v89[16] = v92;
  *(_OWORD *)v89 = v91;
  if ( v67 )
  {
    v69 = (_QWORD *)(v68 + 8);
    do
    {
      v70 = *(v69 - 1);
      if ( v70 )
        sub_140001660(*v69, v70, 1);
      v69 += 3;
      --v67;
    }
    while ( v67 );
  }
  if ( (_QWORD)v113 )
    sub_140001660(v68, 24 * v113, 8);
  *(_QWORD *)&v113 = v112;
  *(_QWORD *)&v91 = &v113;
  *((_QWORD *)&v91 + 1) = sub_1414AC520;
  *(_QWORD *)&v92 = v89;
  *((_QWORD *)&v92 + 1) = sub_1400015F0;
  sub_14149C0F0(&v99, &unk_141758D93, &v91);
  *(_QWORD *)(a1 + 32) = v100;
  *(_OWORD *)(a1 + 16) = v99;
  *(_QWORD *)(a1 + 8) = 10;
  *(_QWORD *)a1 = -1;
  if ( *(_QWORD *)v89 )
    sub_140001660(*(_QWORD *)&v89[8], *(_QWORD *)v89, 1);
  v73 = v111;
  v74 = 0;
  do
  {
    v75 = *(_QWORD *)(v73 + v74);
    if ( v75 )
      sub_140001660(*(_QWORD *)(v73 + v74 + 8), v75, 1);
    v74 += 32;
  }
  while ( 32 * v23 != v74 );
  if ( v110 )
    sub_140001660(v73, 32 * v110, 8);
  v76 = v120;
  v77 = (_QWORD *)(v120 + 8);
  do
  {
    v78 = *(v77 - 1);
    if ( v78 )
      sub_140001660(*v77, v78, 1);
    v77 += 4;
    --v10;
  }
  while ( v10 );
  if ( v107 )
  {
    v21 = 32 * v107;
    v22 = v76;
LABEL_14:
    sub_140001660(v22, v21, 8);
  }
}