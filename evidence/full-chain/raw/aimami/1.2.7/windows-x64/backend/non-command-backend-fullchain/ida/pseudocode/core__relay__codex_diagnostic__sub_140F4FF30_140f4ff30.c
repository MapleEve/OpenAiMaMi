// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f4ff30 | name sub_140F4FF30
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F4FF30(__int64 a1, _DWORD *a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int8 v5; // r15
  const char *v8; // rcx
  unsigned __int64 v9; // r13
  __int128 v10; // kr00_16
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r13
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rax
  __int64 v24; // rdx
  const char **v25; // rax
  unsigned __int64 v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rbx
  _QWORD *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  void *v34; // r9
  unsigned __int64 v35; // rcx
  void *v36; // rax
  __int128 *v37; // rbx
  __int64 v38; // rax
  bool v39; // zf
  char *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rax
  const char *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  _OWORD *v46; // rdx
  _OWORD *v47; // rax
  __int64 v48; // rbx
  _OWORD *v49; // rax
  __int64 v50; // rbx
  _OWORD *v51; // rax
  __int64 v52; // rbx
  _OWORD *v53; // rax
  _OWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rsi
  _QWORD *v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rdx
  void *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdi
  _DWORD *v65; // rax
  __int64 v66; // rdi
  __int128 v67; // [rsp+30h] [rbp-50h] BYREF
  __int64 v68; // [rsp+40h] [rbp-40h]
  __int128 v69; // [rsp+48h] [rbp-38h] BYREF
  __int64 v70; // [rsp+58h] [rbp-28h]
  __int128 v71; // [rsp+60h] [rbp-20h] BYREF
  __int64 v72; // [rsp+70h] [rbp-10h]
  __int128 v73; // [rsp+78h] [rbp-8h] BYREF
  __int64 v74; // [rsp+88h] [rbp+8h]
  __int128 v75; // [rsp+90h] [rbp+10h] BYREF
  __int64 v76; // [rsp+A0h] [rbp+20h]
  const char *v77; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v78; // [rsp+B0h] [rbp+30h]
  char *v79; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v80; // [rsp+C0h] [rbp+40h]
  __int64 v81; // [rsp+C8h] [rbp+48h]
  __int128 v82; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v83; // [rsp+E0h] [rbp+60h]
  __int64 v84; // [rsp+E8h] [rbp+68h] BYREF
  const char *v85; // [rsp+F0h] [rbp+70h]
  __int64 v86; // [rsp+F8h] [rbp+78h]
  __int64 v87; // [rsp+100h] [rbp+80h]
  const char *v88; // [rsp+108h] [rbp+88h] BYREF
  __int64 v89; // [rsp+110h] [rbp+90h]
  __int64 v90; // [rsp+118h] [rbp+98h]
  void *v91; // [rsp+120h] [rbp+A0h]
  __int128 *v92; // [rsp+128h] [rbp+A8h]
  __int64 v93; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v94; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v95; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v96; // [rsp+150h] [rbp+D0h]
  __int128 v97; // [rsp+160h] [rbp+E0h]
  __int128 v98; // [rsp+170h] [rbp+F0h]
  __int64 v99; // [rsp+180h] [rbp+100h]
  const char *v100; // [rsp+188h] [rbp+108h] BYREF
  __int64 v101; // [rsp+190h] [rbp+110h]
  unsigned __int64 v102; // [rsp+198h] [rbp+118h]
  _BYTE v103[24]; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v104; // [rsp+1B8h] [rbp+138h]
  __int64 v105; // [rsp+1C8h] [rbp+148h]
  __int128 v106; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v107; // [rsp+1E0h] [rbp+160h]
  volatile signed __int64 *v108; // [rsp+1F0h] [rbp+170h] BYREF
  char v109; // [rsp+1FFh] [rbp+17Fh] BYREF
  __int64 v110; // [rsp+200h] [rbp+180h] BYREF
  _OWORD *v111; // [rsp+208h] [rbp+188h]
  __int64 v112; // [rsp+210h] [rbp+190h]
  __int64 v113; // [rsp+218h] [rbp+198h]
  _DWORD *v114; // [rsp+220h] [rbp+1A0h]
  __int64 v115; // [rsp+228h] [rbp+1A8h]
  _OWORD *v116; // [rsp+230h] [rbp+1B0h]
  bool v117; // [rsp+23Dh] [rbp+1BDh]
  char v118; // [rsp+23Eh] [rbp+1BEh]
  char v119; // [rsp+23Fh] [rbp+1BFh]
  __int64 v120; // [rsp+240h] [rbp+1C0h]

  v120 = -2;
  v5 = a3;
  v8 = aOpenai_2;
  if ( (a3 & 1) != 0 )
    v8 = aAimai1;
  v77 = v8;
  v78 = 6;
  sub_14026BFA0(&v79);
  *(_QWORD *)&v82 = v80;
  *((_QWORD *)&v82 + 1) = v80 + 32 * v81;
  v83 = a4;
  sub_1403D8880(&v100, &v82);
  v114 = a2;
  v9 = v102;
  if ( v102 < 8 )
  {
    if ( !v102 )
      goto LABEL_49;
    goto LABEL_13;
  }
  *(_QWORD *)&v82 = 0;
  v83 = 4;
  v84 = 0;
  v86 = 1;
  v87 = (__int64)&unk_14193C8E0;
  v88 = nullptr;
  v90 = 0;
  LOWORD(v92) = 0;
  sub_14000B630(&v95, &v82);
  v10 = v95;
  if ( (_QWORD)v95 != -1 )
  {
    *(_OWORD *)v103 = v95;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v95 = v103;
      *((_QWORD *)&v95 + 1) = sub_1411C6B40;
      v87 = 2;
      v88 = aCodexmateLibCo_42;
      v89 = 44;
      v91 = &unk_141A592BD;
      v92 = &v95;
      *(_QWORD *)&v82 = 0;
      *((_QWORD *)&v82 + 1) = aCodexmateLibCo_42;
      v83 = 44;
      v84 = 0;
      v85 = aSrcCoreRelayCo_3;
      v86 = 34;
      v90 = 0xC000000001LL;
      sub_1414D53A0(&v109, &v82);
      v10 = *(_OWORD *)v103;
    }
    if ( (unsigned int)v10 >= 2 && (BYTE8(v10) & 3u) - 2 >= 2 && (BYTE8(v10) & 3) != 0 )
    {
      *((_QWORD *)&v82 + 1) = *((_QWORD *)&v10 + 1) - 1LL;
      LOBYTE(v82) = 3;
      sub_1416BCB00((char *)&v82 + 8);
    }
LABEL_13:
    v11 = (_QWORD *)(v101 + 8);
    do
    {
      v12 = *(v11 - 1);
      if ( v12 )
        sub_140001660(*v11, v12, 1);
      v11 += 4;
      --v9;
    }
    while ( v9 );
    goto LABEL_49;
  }
  v108 = *((volatile signed __int64 **)&v95 + 1);
  v13 = (__int64 *)sub_1401871F0(0);
  v14 = *((_QWORD *)&v10 + 1) + 128LL;
  v15 = *v13;
  if ( *v13 )
  {
    if ( *(_QWORD *)(v15 + 272) == *((_QWORD *)&v10 + 1) )
    {
      *(_QWORD *)&v82 = 0;
      *((_QWORD *)&v82 + 1) = 8;
      v83 = 0;
      sub_14039A420(&v82, v101, v9, v14);
      v107 = v83;
      v106 = v82;
    }
    else
    {
      sub_1418F5460(&v106, *((_QWORD *)&v10 + 1) + 128LL, v15, &v100);
    }
  }
  else
  {
    sub_140893AD0(&v106, &off_14193CBB0, &v100, v14);
  }
  v16 = *((_QWORD *)&v106 + 1) + 104 * v107;
  v110 = *((_QWORD *)&v106 + 1);
  v111 = *((_OWORD **)&v106 + 1);
  v112 = v106;
  v113 = v16;
  if ( v107 )
  {
    LOBYTE(v116) = v5;
    v17 = *((_QWORD *)&v106 + 1) + 104LL;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v17 - 104);
      if ( v18 == -1 )
      {
LABEL_41:
        v111 = (_OWORD *)v17;
        v5 = (unsigned __int8)v116;
        break;
      }
      v115 = v17;
      v19 = v17 - 104;
      *(_QWORD *)v103 = v18;
      v104 = *(_QWORD *)(v17 - 104 + 24);
      *(_OWORD *)&v103[8] = *(_OWORD *)(v17 - 104 + 8);
      v99 = *(_QWORD *)(v17 - 104 + 96);
      v20 = *(_OWORD *)(v17 - 104 + 32);
      v21 = *(_OWORD *)(v17 - 104 + 48);
      v22 = *(_OWORD *)(v17 - 104 + 64);
      v98 = *(_OWORD *)(v17 - 104 + 80);
      v97 = v22;
      v96 = v21;
      v95 = v20;
      sub_1403A64E0(&v82, a4, v103, &v95);
      if ( (_QWORD)v82 != -2 )
      {
        v23 = v82 - 0x7FFFFFFFFFFFFFFFLL;
        if ( (__int64)v82 >= (__int64)0x8000000000000002uLL )
          v23 = 0;
        if ( v23 )
        {
          if ( v23 == 1 )
            goto LABEL_23;
          v24 = v83;
          v25 = (const char **)&v84;
          if ( !v83 )
            goto LABEL_23;
        }
        else
        {
          if ( (_QWORD)v82 != -1 && (_QWORD)v82 )
            sub_140001660(*((_QWORD *)&v82 + 1), v82, 1);
          if ( v84 != -1 && v84 )
            sub_140001660(v85, v84, 1);
          v24 = v87;
          v25 = &v88;
          if ( v87 <= 0 )
            goto LABEL_23;
        }
        sub_140001660(*v25, v24, 1);
      }
LABEL_23:
      v17 = v115 + 104;
      if ( v19 + 104 == v16 )
      {
        v17 = v16;
        goto LABEL_41;
      }
    }
  }
  sub_1403FA4F0(&v110);
  sub_1411C79D0(&v108);
  if ( !_InterlockedDecrement64(v108) )
    sub_1411C66E0(&v108);
  v26 = v102;
  if ( v102 )
  {
    v27 = (_QWORD *)(v101 + 8);
    do
    {
      v28 = *(v27 - 1);
      if ( v28 )
        sub_140001660(*v27, v28, 1);
      v27 += 4;
      --v26;
    }
    while ( v26 );
  }
LABEL_49:
  if ( v100 )
    sub_140001660(v101, 32LL * (_QWORD)v100, 8);
  v29 = v80;
  v30 = v81;
  if ( v81 )
  {
    v31 = (_QWORD *)(v80 + 8);
    do
    {
      v32 = *(v31 - 1);
      if ( v32 )
        sub_140001660(*v31, v32, 1);
      v31 += 4;
      --v30;
    }
    while ( v30 );
  }
  if ( v79 )
    sub_140001660(v29, 32LL * (_QWORD)v79, 8);
  sub_1401A2790((unsigned int)&v82, (_DWORD)v114, (_DWORD)v77, v78, a4);
  if ( !v91 && !v92 && !v93 && !(v86 | v94) )
  {
    v34 = &unk_141A6224E;
    if ( (v5 & 1) != 0 )
      v34 = &unk_141A6226F;
    sub_140F58830(a1, (unsigned int)&xmmword_141A5DFA1, 27, (_DWORD)v34, 33);
    return sub_140196AD0(&v82);
  }
  if ( v89 )
  {
    sub_140D1EE10((unsigned int)&v95, (_DWORD)v88, v89, (unsigned int)&unk_141A5B7F2, 3);
    v107 = v96;
    v106 = v95;
    v36 = v91;
    v37 = v92;
    if ( v91 )
      goto LABEL_73;
  }
  else
  {
    nullsub_1(v33);
    v38 = sub_140001650(9, 1);
    if ( !v38 )
      sub_141938D2B(1, 9);
    v35 = 0xBEE4BAA4E7A097E6uLL;
    *(_QWORD *)v38 = 0xBEE4BAA4E7A097E6uLL;
    *(_BYTE *)(v38 + 8) = -117;
    *(_QWORD *)&v106 = 9;
    *((_QWORD *)&v106 + 1) = v38;
    v107 = 9;
    v36 = v91;
    v37 = v92;
    if ( v91 )
      goto LABEL_73;
  }
  if ( !v37 && !v93 && !v86 )
  {
    nullsub_1(v35);
    v62 = (void *)sub_140001650(27, 1);
    if ( !v62 )
      sub_141938D2B(1, 27);
    v64 = (__int64)v62;
    qmemcpy(v62, "thread_provider_consistency", 27);
    nullsub_1(v63);
    v65 = (_DWORD *)sub_140001650(7, 1);
    v115 = v64;
    if ( !v65 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v65 + 3) = 1735289198;
    v114 = v65;
    *v65 = 1852989815;
    *(_QWORD *)v103 = &v94;
    *(_QWORD *)&v103[8] = sub_1416BCB10;
    sub_1416ABFD0(&v95, &unk_141A6212F, v103);
    v105 = *((_QWORD *)&v95 + 1);
    v116 = (_OWORD *)v95;
    v66 = v96;
    *(_QWORD *)&v95 = &v106;
    *((_QWORD *)&v95 + 1) = sub_1400015F0;
    sub_1416ABFD0(&v71, &unk_141A6216C, &v95);
    *(_QWORD *)(a1 + 88) = v72;
    *(_OWORD *)(a1 + 72) = v71;
    *(_QWORD *)a1 = 27;
    *(_QWORD *)(a1 + 8) = v115;
    *(_QWORD *)(a1 + 16) = 27;
    *(_QWORD *)(a1 + 24) = 7;
    *(_QWORD *)(a1 + 32) = v114;
    *(_QWORD *)(a1 + 40) = 7;
    *(_QWORD *)(a1 + 48) = v116;
    *(_QWORD *)(a1 + 56) = v105;
    *(_QWORD *)(a1 + 64) = v66;
    *(_BYTE *)(a1 + 96) = 0;
    v60 = v106;
    if ( (_QWORD)v106 )
      goto LABEL_105;
    return sub_140196AD0(&v82);
  }
LABEL_73:
  v39 = (__int128 *)((char *)v37 + (_QWORD)v36) == nullptr;
  v40 = (char *)v37 + (_QWORD)v36;
  v79 = v40;
  if ( v39 )
  {
    nullsub_1(v35);
    v41 = 55;
    v42 = sub_140001650(55, 1);
    if ( !v42 )
      sub_141938D2B(1, 55);
    *(_OWORD *)(v42 + 32) = xmmword_141A62035;
    *(_OWORD *)(v42 + 16) = xmmword_141A62025;
    *(_OWORD *)v42 = xmmword_141A62015;
    v114 = (_DWORD *)v42;
    *(_QWORD *)(v42 + 47) = 0x89BCEF98A2E9AE97uLL;
    v115 = 55;
  }
  else
  {
    *(_QWORD *)v103 = &v79;
    *(_QWORD *)&v103[8] = sub_1416BCB10;
    sub_1416ABFD0(&v95, &unk_141A6204C, v103);
    v114 = *((_DWORD **)&v95 + 1);
    v115 = v95;
    v41 = v96;
  }
  v43 = asc_141A6206C;
  if ( (v5 & 1) != 0 )
    v43 = (const char *)&unk_141A6209C;
  v100 = v43;
  v101 = 48;
  nullsub_1(v43);
  v44 = sub_140001650(24, 8);
  if ( !v44 )
  {
    v118 = 1;
    sub_141938D11(8, 24);
  }
  v116 = (_OWORD *)v44;
  *(_QWORD *)&v95 = &v100;
  *((_QWORD *)&v95 + 1) = sub_140186EE0;
  *(_QWORD *)&v96 = &v77;
  *((_QWORD *)&v96 + 1) = sub_140186EE0;
  sub_1416ABFD0(&v69, &unk_141A592B8, &v95);
  v45 = v70;
  v46 = v116;
  *((_QWORD *)v116 + 2) = v70;
  *v46 = v69;
  v110 = 1;
  v111 = v46;
  v112 = 1;
  if ( (v5 & (v40 != nullptr)) != 0 )
  {
    nullsub_1(v45);
    v47 = (_OWORD *)sub_140001650(28, 1);
    if ( !v47 )
    {
      v119 = 1;
      sub_141938D2B(1, 28);
    }
    *(_OWORD *)((char *)v47 + 12) = *(__int128 *)((char *)&xmmword_141A620CC + 12);
    v116 = v47;
    *v47 = xmmword_141A620CC;
    v48 = v112;
    if ( v112 == v110 )
      sub_14190FDC0(&v110);
    v49 = v111;
    v45 = 3 * v48;
    *((_QWORD *)v111 + v45) = 28;
    *((_QWORD *)v49 + v45 + 1) = v116;
    *((_QWORD *)v49 + v45 + 2) = 28;
    v112 = v48 + 1;
  }
  if ( v93 )
  {
    *(_QWORD *)&v95 = &v93;
    *((_QWORD *)&v95 + 1) = sub_1416BCB10;
    v119 = 1;
    sub_1416ABFD0(&v75, &unk_141A5FDD0, &v95);
    v50 = v112;
    if ( v112 == v110 )
      sub_14190FDC0(&v110);
    v51 = v111;
    v45 = 3 * v50;
    *((_QWORD *)v111 + v45 + 2) = v76;
    *(_OWORD *)((char *)v51 + 8 * v45) = v75;
    v112 = v50 + 1;
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = &v94;
    *((_QWORD *)&v95 + 1) = sub_1416BCB10;
    v119 = 1;
    sub_1416ABFD0(&v73, &unk_141A620E8, &v95);
    v52 = v112;
    if ( v112 == v110 )
      sub_14190FDC0(&v110);
    v53 = v111;
    v45 = 3 * v52;
    *((_QWORD *)v111 + v45 + 2) = v74;
    *(_OWORD *)((char *)v53 + 8 * v45) = v73;
    v112 = v52 + 1;
  }
  nullsub_1(v45);
  v54 = (_OWORD *)sub_140001650(27, 1);
  if ( !v54 )
  {
    v119 = 1;
    sub_141938D2B(1, 27);
  }
  v116 = v54;
  qmemcpy(v54, "thread_provider_consistency", 27);
  nullsub_1(v55);
  v56 = sub_140001650(5, 1);
  v117 = v56 == 0;
  if ( !v56 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v56 + 4) = 114;
  v105 = v56;
  *(_DWORD *)v56 = 1869771365;
  sub_140D1EE10((unsigned int)&v95, (_DWORD)v111, v112, (unsigned int)&unk_141A5B7F2, 3);
  *(_QWORD *)&v103[16] = v96;
  *(_OWORD *)v103 = v95;
  *(_QWORD *)&v95 = v103;
  *((_QWORD *)&v95 + 1) = sub_1400015F0;
  *(_QWORD *)&v96 = &v106;
  *((_QWORD *)&v96 + 1) = sub_1400015F0;
  sub_1416ABFD0(&v67, &unk_141A6211F, &v95);
  if ( *(_QWORD *)v103 )
    sub_140001660(*(_QWORD *)&v103[8], *(_QWORD *)v103, 1);
  *(_QWORD *)(a1 + 88) = v68;
  *(_OWORD *)(a1 + 72) = v67;
  *(_QWORD *)a1 = 27;
  *(_QWORD *)(a1 + 8) = v116;
  *(_QWORD *)(a1 + 16) = 27;
  *(_QWORD *)(a1 + 24) = 5;
  *(_QWORD *)(a1 + 32) = v105;
  *(_QWORD *)(a1 + 40) = 5;
  *(_QWORD *)(a1 + 48) = v115;
  *(_QWORD *)(a1 + 56) = v114;
  *(_QWORD *)(a1 + 64) = v41;
  *(_BYTE *)(a1 + 96) = 1;
  v57 = v112;
  if ( v112 )
  {
    v58 = (_QWORD *)v111 + 1;
    do
    {
      v59 = *(v58 - 1);
      if ( v59 )
        sub_140001660(*v58, v59, 1);
      v58 += 3;
      --v57;
    }
    while ( v57 );
  }
  if ( v110 )
    sub_140001660(v111, 24 * v110, 8);
  v60 = v106;
  if ( (_QWORD)v106 )
LABEL_105:
    sub_140001660(*((_QWORD *)&v106 + 1), v60, 1);
  return sub_140196AD0(&v82);
}
