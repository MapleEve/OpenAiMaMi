// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140c1c870 | name sub_140C1C870
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C1C870(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __m128i v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  _OWORD *v8; // rax
  __int64 v9; // rdi
  bool v10; // zf
  __m128i *v11; // rax
  __m128i *v12; // r14
  __int64 v13; // rcx
  void *v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  void *v23; // rax
  void *v24; // rax
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r14
  signed __int64 v39; // rdi
  __int64 v40; // rcx
  const __m128i *v41; // r15
  __m128i *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  void *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int64 v52; // [rsp+58h] [rbp-28h] BYREF
  _DWORD *v53; // [rsp+60h] [rbp-20h]
  __int64 v54; // [rsp+68h] [rbp-18h]
  __int128 v55; // [rsp+70h] [rbp-10h] BYREF
  __int64 v56; // [rsp+80h] [rbp+0h] BYREF
  __int64 v57; // [rsp+88h] [rbp+8h]
  _OWORD v58[4]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v59; // [rsp+D8h] [rbp+58h]
  __int64 v60; // [rsp+E0h] [rbp+60h]
  __int64 v61; // [rsp+E8h] [rbp+68h] BYREF
  void *v62; // [rsp+F0h] [rbp+70h]
  __int64 v63; // [rsp+F8h] [rbp+78h]
  __m128i v64; // [rsp+100h] [rbp+80h] BYREF
  __int128 v65; // [rsp+110h] [rbp+90h]
  __m128i v66; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v67; // [rsp+130h] [rbp+B0h]
  __int128 v68; // [rsp+140h] [rbp+C0h]
  __int128 v69; // [rsp+150h] [rbp+D0h]
  __m128i v70; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v71; // [rsp+170h] [rbp+F0h]
  __int128 v72; // [rsp+180h] [rbp+100h]
  __int128 v73; // [rsp+190h] [rbp+110h]
  __m128i *v74; // [rsp+1A8h] [rbp+128h]
  __int64 v75; // [rsp+1B0h] [rbp+130h]
  _BYTE v76[96]; // [rsp+1B8h] [rbp+138h] BYREF
  __int128 v77; // [rsp+218h] [rbp+198h] BYREF
  __int64 v78; // [rsp+228h] [rbp+1A8h]
  _OWORD v79[2]; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v80; // [rsp+258h] [rbp+1D8h]
  _DWORD v81[4]; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v82; // [rsp+270h] [rbp+1F0h]
  __m128i *v83; // [rsp+278h] [rbp+1F8h]
  __m128i v84; // [rsp+280h] [rbp+200h] BYREF
  __int128 v85; // [rsp+290h] [rbp+210h]
  __int128 v86; // [rsp+2A0h] [rbp+220h]
  __int128 v87; // [rsp+2B0h] [rbp+230h]
  __int64 v88; // [rsp+2C0h] [rbp+240h]
  __int64 v89; // [rsp+2C8h] [rbp+248h]
  __int64 v90; // [rsp+2D0h] [rbp+250h]
  __m128i *v91; // [rsp+2D8h] [rbp+258h]
  __int64 v92; // [rsp+2E0h] [rbp+260h]
  __int64 v93; // [rsp+2E8h] [rbp+268h]
  __int128 v94; // [rsp+2F0h] [rbp+270h]
  __int128 v95; // [rsp+300h] [rbp+280h]
  __m128i v96; // [rsp+310h] [rbp+290h]
  __int64 v97; // [rsp+320h] [rbp+2A0h]
  __int64 v98; // [rsp+328h] [rbp+2A8h]
  __int16 v99; // [rsp+380h] [rbp+300h]
  __int64 v100; // [rsp+388h] [rbp+308h]
  __int64 v101; // [rsp+390h] [rbp+310h]
  __int128 v102; // [rsp+398h] [rbp+318h]
  __int64 v103; // [rsp+3A8h] [rbp+328h]
  __int64 v104; // [rsp+3B0h] [rbp+330h]
  char v105; // [rsp+3B8h] [rbp+338h]
  __int64 v106; // [rsp+400h] [rbp+380h]
  __int64 v107; // [rsp+408h] [rbp+388h]
  char v108; // [rsp+410h] [rbp+390h]
  _BYTE v109[136]; // [rsp+480h] [rbp+400h] BYREF
  _DWORD v110[12]; // [rsp+508h] [rbp+488h] BYREF
  __int64 *v111; // [rsp+538h] [rbp+4B8h]
  __int64 v112; // [rsp+540h] [rbp+4C0h]

  v111 = &v56;
  v112 = -2;
  sub_140EE5860(&v84);
  if ( v84.m128i_i64[0] != -1 )
  {
    v59 = v84.m128i_i64[1];
    v60 = v84.m128i_i64[0];
    sub_14168A510(v109, v84.m128i_i64[1], v85);
    v110[9] = 0x8000000;
    sub_14168A3F0(v109, aAppServer, 10);
    sub_14168A3F0(v109, aStdio, 7);
    sub_14168BF80((unsigned int)v110, (unsigned int)aCodexHome_0, 10, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v81[0] = 3;
    sub_14168A5A0(v109, v81);
    sub_14168A620(v109, v81);
    v84.m128i_i32[0] = 2;
    sub_14168A5E0(v109, &v84);
    sub_14168DB10(v76, v109);
    if ( *(_DWORD *)v76 == 2 )
    {
      v52 = *(_QWORD *)&v76[8];
      v84.m128i_i64[0] = (__int64)&v52;
      v84.m128i_i64[1] = (__int64)sub_1416BB0B0;
      sub_1416ABFD0(&v64, &unk_141A3B072, &v84);
      v84 = v64;
      *(_QWORD *)&v85 = v65;
      if ( (unsigned int)(v52 & 3) - 2 >= 2 && (v52 & 3) != 0 )
      {
        *((_QWORD *)&v79[0] + 1) = v52 - 1;
        LOBYTE(v79[0]) = 3;
        sub_1416BCB00((char *)v79 + 8);
      }
      v5 = v84;
      v6 = v85;
      v7 = v86;
      v58[2] = v86;
      v66 = v84;
      v67 = v85;
      v68 = v86;
      v69 = v87;
      *(_OWORD *)(a1 + 64) = v87;
      *(_OWORD *)(a1 + 48) = v7;
      *(_OWORD *)(a1 + 32) = v6;
      *(__m128i *)(a1 + 16) = v5;
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)a1 = 2;
      goto LABEL_92;
    }
    v66 = *(__m128i *)v76;
    v70.m128i_i64[1] = *(_QWORD *)&v76[8];
    v71 = *(_OWORD *)&v76[16];
    v72 = *(_OWORD *)&v76[32];
    v73 = *(_OWORD *)&v76[48];
    v70.m128i_i64[0] = 0;
    if ( *(_QWORD *)v76 == 1 )
    {
      v9 = *((_QWORD *)&v71 + 1);
      v10 = (v71 & 1) == 0;
      *(_QWORD *)&v71 = 0;
      v75 = *(_QWORD *)&v76[8];
      if ( !v10 )
      {
        v106 = 1;
        v107 = 1;
        v108 = 0;
        v99 = 0;
        v100 = 0;
        v84 = 0;
        v95 = 0;
        v101 = 8;
        v102 = 0;
        v103 = 8;
        v104 = 0;
        v105 = 1;
        nullsub_1(*(_QWORD *)&v76[8]);
        v11 = (__m128i *)sub_140001650(512, 128);
        v80 = v9;
        v74 = v11;
        if ( !v11 )
          sub_141938D11(128, 512);
        v12 = v11;
        sub_1418F44E0(v11, &v84, 0x200u);
        v82 = 1;
        v83 = v12;
        *(_QWORD *)&v58[1] = v9;
        *(_QWORD *)&v58[0] = 1;
        *((_QWORD *)&v58[0] + 1) = v12;
        *(_QWORD *)v76 = -1;
        sub_14004FED0(&v84, v76, 0);
        v13 = v84.m128i_i64[0];
        if ( !v84.m128i_i64[0] )
        {
          v84.m128i_i64[0] = v84.m128i_i64[1];
          sub_141939040(
            (unsigned int)aFailedToSpawnT_8,
            22,
            (unsigned int)&v84,
            (unsigned int)&off_141A3BAC8,
            (__int64)&off_141A3A2E0);
        }
        v96 = v84;
        v97 = v85;
        v84 = v70;
        v85 = v71;
        v86 = v72;
        v87 = v73;
        v88 = 1;
        v89 = v75;
        v90 = 1;
        v91 = v74;
        v98 = 1;
        v92 = 0;
        v93 = 8;
        v94 = 0;
        v95 = 1u;
        *(_QWORD *)&v77 = 0;
        v78 = 0;
        nullsub_1(v13);
        v14 = (void *)sub_140001650(10, 1);
        if ( !v14 )
          sub_141938D2B(1, 10);
        qmemcpy(v14, "clientInfo", 10);
        v61 = 10;
        v62 = v14;
        v63 = 10;
        *(_QWORD *)&v55 = 0;
        v56 = 0;
        nullsub_1(0x6E49746E65696C63LL);
        v15 = (_DWORD *)sub_140001650(4, 1);
        if ( !v15 )
          sub_141938D2B(1, 4);
        *v15 = 1701667182;
        v52 = 4;
        v53 = v15;
        v54 = 4;
        nullsub_1(v16);
        v17 = sub_140001650(6, 1);
        v57 = v17;
        if ( !v17 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v17 + 4) = 26989;
        *(_DWORD *)v17 = 1634560353;
        LOBYTE(v58[0]) = 3;
        *((_QWORD *)&v58[0] + 1) = 6;
        *(_QWORD *)&v58[1] = v17;
        *((_QWORD *)&v58[1] + 1) = 6;
        sub_140E72AA0(&v66, &v55, &v52, v58);
        if ( v66.m128i_i8[0] != -1 )
          sub_14002F9D0(&v66);
        nullsub_1(v18);
        v19 = (_DWORD *)sub_140001650(7, 1);
        if ( !v19 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v19 + 3) = 1852795251;
        *v19 = 1936876918;
        v52 = 7;
        v53 = v19;
        v54 = 7;
        nullsub_1(v20);
        v21 = sub_140001650(5, 1);
        v57 = v21;
        if ( !v21 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v21 + 4) = 54;
        *(_DWORD *)v21 = 775040561;
        LOBYTE(v58[0]) = 3;
        *((_QWORD *)&v58[0] + 1) = 5;
        *(_QWORD *)&v58[1] = v21;
        *((_QWORD *)&v58[1] + 1) = 5;
        sub_140E72AA0(&v66, &v55, &v52, v58);
        if ( v66.m128i_i8[0] != -1 )
          sub_14002F9D0(&v66);
        *(_OWORD *)((char *)v58 + 8) = v55;
        *((_QWORD *)&v58[1] + 1) = v56;
        LOBYTE(v58[0]) = 5;
        sub_140E72AA0(&v66, &v77, &v61, v58);
        if ( v66.m128i_i8[0] != -1 )
          sub_14002F9D0(&v66);
        nullsub_1(v22);
        v23 = (void *)sub_140001650(12, 1);
        if ( !v23 )
          sub_141938D2B(1, 12);
        qmemcpy(v23, "capabilities", 12);
        v61 = 12;
        v62 = v23;
        v63 = 12;
        *(_QWORD *)&v55 = 0;
        v56 = 0;
        nullsub_1(0x696C696261706163LL);
        v24 = (void *)sub_140001650(15, 1);
        if ( !v24 )
          sub_141938D2B(1, 15);
        qmemcpy(v24, "experimentalApi", 15);
        v52 = 15;
        v53 = v24;
        v54 = 15;
        LOWORD(v58[0]) = 257;
        sub_140E72AA0(&v66, &v55, &v52, v58);
        if ( v66.m128i_i8[0] != -1 )
          sub_14002F9D0(&v66);
        *(_OWORD *)((char *)v58 + 8) = v55;
        *((_QWORD *)&v58[1] + 1) = v56;
        LOBYTE(v58[0]) = 5;
        sub_140E72AA0(&v66, &v77, &v61, v58);
        if ( v66.m128i_i8[0] != -1 )
          sub_14002F9D0(&v66);
        *(_OWORD *)((char *)v58 + 8) = v77;
        *((_QWORD *)&v58[1] + 1) = v78;
        LOBYTE(v58[0]) = 5;
        sub_140C1BC30((__int128 *)v76, (unsigned int)&v84);
        v25 = *(_QWORD *)v76;
        v64 = *(__m128i *)&v76[8];
        v65 = *(_OWORD *)&v76[24];
        if ( *(_QWORD *)v76 != -1 )
        {
          *(_QWORD *)(a1 + 96) = *(_QWORD *)&v76[88];
          v26 = *(_OWORD *)&v76[40];
          v27 = *(_OWORD *)&v76[56];
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v76[72];
          *(_OWORD *)(a1 + 64) = v27;
          *(_OWORD *)(a1 + 48) = v26;
          v28 = v64;
          *(_OWORD *)(a1 + 32) = v65;
          *(__m128i *)(a1 + 16) = v28;
          *(_QWORD *)(a1 + 8) = v25;
          *(_QWORD *)a1 = 2;
LABEL_91:
          sub_140BAC0A0(&v84);
LABEL_92:
          sub_14029BE30(v109);
          goto LABEL_93;
        }
        v79[0] = v64;
        v79[1] = v65;
        v36 = sub_1416419F0(aUseragent_0, 9, v79);
        v38 = 1;
        if ( !v36 || *(_BYTE *)v36 != 3 )
          goto LABEL_78;
        v39 = *(_QWORD *)(v36 + 24);
        if ( v39 < 0 )
        {
          v40 = 0;
          goto LABEL_62;
        }
        if ( v39 )
        {
          v41 = *(const __m128i **)(v36 + 16);
          nullsub_1(v37);
          v42 = (__m128i *)sub_140001650(v39, 1);
          v40 = 1;
          if ( !v42 )
LABEL_62:
            sub_141938D2B(v40, v39);
          v38 = (__int64)v42;
          sub_1418F44E0(v42, v41, v39);
        }
        else
        {
LABEL_78:
          v39 = 0;
        }
        if ( *((_QWORD *)&v94 + 1) )
          sub_140001660(v95, *((_QWORD *)&v94 + 1), 1);
        *((_QWORD *)&v94 + 1) = v39;
        *(_QWORD *)&v95 = v38;
        *((_QWORD *)&v95 + 1) = v39;
        v64.m128i_i64[1] = 0;
        *((_QWORD *)&v65 + 1) = 0;
        v64.m128i_i8[0] = 5;
        *(_QWORD *)&v55 = 0;
        v56 = 0;
        nullsub_1(v37);
        v43 = sub_140001650(6, 1);
        if ( !v43 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v43 + 4) = 25711;
        *(_DWORD *)v43 = 1752458605;
        v52 = 6;
        v53 = (_DWORD *)v43;
        v54 = 6;
        nullsub_1(v44);
        v45 = (void *)sub_140001650(11, 1);
        v57 = (__int64)v45;
        if ( !v45 )
          sub_141938D2B(1, 11);
        qmemcpy(v45, "initialized", 11);
        LOBYTE(v58[0]) = 3;
        *((_QWORD *)&v58[0] + 1) = 11;
        *(_QWORD *)&v58[1] = v45;
        *((_QWORD *)&v58[1] + 1) = 11;
        sub_140E72AA0(&v66, &v55, &v52, v58);
        if ( v66.m128i_i8[0] != -1 )
          sub_14002F9D0(&v66);
        nullsub_1(v46);
        v47 = sub_140001650(6, 1);
        if ( !v47 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v47 + 4) = 29549;
        *(_DWORD *)v47 = 1634886000;
        v52 = 6;
        v53 = (_DWORD *)v47;
        v54 = 6;
        sub_140412420(v58, &v64);
        if ( LOBYTE(v58[0]) == 0xFF )
        {
          v66.m128i_i64[0] = *((_QWORD *)&v58[0] + 1);
          sub_141939040(
            (unsigned int)aCalledResultUn_13,
            43,
            (unsigned int)&v66,
            (unsigned int)&off_141A3BB28,
            (__int64)&off_141A3C480);
        }
        v67 = v58[1];
        v66 = (__m128i)v58[0];
        sub_140E72AA0(v58, &v55, &v52, &v66);
        if ( LOBYTE(v58[0]) != 0xFF )
          sub_14002F9D0(v58);
        *(_OWORD *)((char *)v58 + 8) = v55;
        *((_QWORD *)&v58[1] + 1) = v56;
        LOBYTE(v58[0]) = 5;
        sub_140C1C730(v76, &v84, v58);
        sub_14002F9D0(&v64);
        if ( *(_DWORD *)v76 == -1 )
        {
          sub_1418F44E0((__m128i *)a1, &v84, 0xB0u);
          sub_14002F9D0(v79);
          sub_14029BE30(v109);
LABEL_93:
          if ( v60 )
            sub_140001660(v59, v60, 1);
          return a1;
        }
        *(_OWORD *)(a1 + 88) = *(_OWORD *)&v76[80];
        *(_OWORD *)(a1 + 72) = *(_OWORD *)&v76[64];
        v48 = *(_OWORD *)v76;
        v49 = *(_OWORD *)&v76[16];
        v50 = *(_OWORD *)&v76[32];
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v76[48];
        *(_OWORD *)(a1 + 40) = v50;
        *(_OWORD *)(a1 + 24) = v49;
        *(_OWORD *)(a1 + 8) = v48;
        *(_QWORD *)a1 = 2;
        sub_14002F9D0(v79);
        goto LABEL_91;
      }
      CloseHandle(*(HANDLE *)&v76[8]);
      v33 = sub_14168B300(&v70);
      if ( v33 && (unsigned int)(v33 & 3) - 2 >= 2 && (v33 & 3) != 0 )
      {
        v84.m128i_i64[1] = v33 - 1;
        v84.m128i_i8[0] = 3;
        sub_1416BCB00(&v84.m128i_u64[1]);
      }
      sub_14168B3B0(v76, &v70);
      if ( *(_DWORD *)v76 )
      {
        v34 = v76[8] & 3;
        if ( (v76[8] & 3u) - 2 >= 2 && (v76[8] & 3) != 0 )
        {
          v84.m128i_i64[1] = *(_QWORD *)&v76[8] - 1LL;
          v84.m128i_i8[0] = 3;
          sub_1416BCB00(&v84.m128i_u64[1]);
        }
      }
      nullsub_1(v34);
      v31 = sub_140001650(40, 1);
      if ( !v31 )
        sub_141938D2B(1, 40);
      *(_OWORD *)(v31 + 16) = xmmword_141A3C4D6;
      *(_OWORD *)v31 = xmmword_141A3C4C6;
      v32 = 0xBA87E593BEE88687uLL;
    }
    else
    {
      v29 = sub_14168B300(&v70);
      if ( v29 && (unsigned int)(v29 & 3) - 2 >= 2 && (v29 & 3) != 0 )
      {
        v84.m128i_i64[1] = v29 - 1;
        v84.m128i_i8[0] = 3;
        sub_1416BCB00(&v84.m128i_u64[1]);
      }
      sub_14168B3B0(v76, &v70);
      if ( *(_DWORD *)v76 )
      {
        v30 = v76[8] & 3;
        if ( (v76[8] & 3u) - 2 >= 2 && (v76[8] & 3) != 0 )
        {
          v84.m128i_i64[1] = *(_QWORD *)&v76[8] - 1LL;
          v84.m128i_i8[0] = 3;
          sub_1416BCB00(&v84.m128i_u64[1]);
        }
      }
      nullsub_1(v30);
      v31 = sub_140001650(40, 1);
      if ( !v31 )
        sub_141938D2B(1, 40);
      *(_OWORD *)(v31 + 16) = xmmword_141A3C4FE;
      *(_OWORD *)v31 = xmmword_141A3C4EE;
      v32 = 0xA585E593BEE88687uLL;
    }
    *(_QWORD *)(v31 + 32) = v32;
    *(_QWORD *)(a1 + 8) = 10;
    *(_QWORD *)(a1 + 16) = 40;
    *(_QWORD *)(a1 + 24) = v31;
    *(_QWORD *)(a1 + 32) = 40;
    *(_QWORD *)a1 = 2;
    v35 = *((void **)&v73 + 1);
    CloseHandle((HANDLE)v73);
    CloseHandle(v35);
    if ( v70.m128i_i64[0] )
      CloseHandle((HANDLE)v70.m128i_i64[1]);
    if ( (_QWORD)v71 )
      CloseHandle(*((HANDLE *)&v71 + 1));
    if ( (_QWORD)v72 )
      CloseHandle(*((HANDLE *)&v72 + 1));
    goto LABEL_92;
  }
  nullsub_1(v4);
  v8 = (_OWORD *)sub_140001650(41, 1);
  if ( !v8 )
    sub_141938D2B(1, 41);
  *(_OWORD *)((char *)v8 + 25) = *(__int128 *)((char *)&xmmword_141A3B059 + 9);
  v8[1] = xmmword_141A3B059;
  *v8 = xmmword_141A3B049;
  *(_QWORD *)(a1 + 8) = 10;
  *(_QWORD *)(a1 + 16) = 41;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 32) = 41;
  *(_QWORD *)a1 = 2;
  return a1;
}
