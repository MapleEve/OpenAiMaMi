// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x14075ce80 | successor of pre-update 0x140dd0550 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_14075CE80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 (__fastcall **v5)(); // r14
  _BYTE *v6; // r15
  __int64 v7; // rbx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r13
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // bl
  void (__fastcall *v26)(char *, __int64 (__fastcall *)(), _QWORD); // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  unsigned __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // r15
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // r13
  __int64 v47; // rbx
  __int64 v48; // r15
  __int64 v49; // rdi
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rbx
  __int64 v54; // r13
  _OWORD *v55; // r15
  __int64 v56; // r14
  _OWORD *v57; // rbx
  __int64 v58; // r15
  _OWORD *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // r15
  __int64 v62; // rdi
  __int64 v63; // rax
  _QWORD *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int128 v67; // xmm0
  _BYTE *v69; // r9
  __int64 v70; // rcx
  __int128 *v71; // r8
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm2
  __int64 v75; // rax
  _OWORD *v76; // rcx
  _BYTE *v77; // rdx
  __int128 v78; // [rsp+D0h] [rbp+50h]
  __int128 v79; // [rsp+E0h] [rbp+60h]
  __int128 v80; // [rsp+F0h] [rbp+70h]
  __int128 v81; // [rsp+100h] [rbp+80h]
  __int128 v82; // [rsp+110h] [rbp+90h]
  __int128 v83; // [rsp+120h] [rbp+A0h]
  __int64 v84; // [rsp+130h] [rbp+B0h]
  __int64 v85; // [rsp+1A8h] [rbp+128h]
  __int128 v86; // [rsp+1B0h] [rbp+130h]
  __int64 v87; // [rsp+1C8h] [rbp+148h]
  __int64 v88; // [rsp+1D0h] [rbp+150h]
  __int64 v89; // [rsp+1D8h] [rbp+158h] BYREF
  _BYTE v90[120]; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v91; // [rsp+258h] [rbp+1D8h]
  _BYTE *v92; // [rsp+268h] [rbp+1E8h]
  char v93; // [rsp+270h] [rbp+1F0h]
  __int64 *v94; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 (__fastcall *v95)(); // [rsp+280h] [rbp+200h]
  __int128 v96; // [rsp+288h] [rbp+208h] BYREF
  __m128i v97; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v98; // [rsp+2B0h] [rbp+230h]
  __int64 v99; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v100; // [rsp+2C8h] [rbp+248h]
  _OWORD *v101; // [rsp+2D0h] [rbp+250h]
  _QWORD *v102; // [rsp+2D8h] [rbp+258h]
  _BYTE *v103; // [rsp+2E0h] [rbp+260h]
  __int64 v104; // [rsp+2E8h] [rbp+268h]
  _OWORD *v105; // [rsp+2F0h] [rbp+270h]
  _QWORD *v106; // [rsp+2F8h] [rbp+278h]
  char v107; // [rsp+307h] [rbp+287h]
  __int64 v108; // [rsp+308h] [rbp+288h]
  __int64 v109; // [rsp+310h] [rbp+290h]
  char v110; // [rsp+31Dh] [rbp+29Dh]
  char v111; // [rsp+31Eh] [rbp+29Eh]
  char v112; // [rsp+31Fh] [rbp+29Fh]
  __int64 v113; // [rsp+320h] [rbp+2A0h]

  v113 = -2;
  v7 = a2;
  v9 = *(_QWORD *)a2;
  v10 = *(_QWORD *)a2 == 0;
  v108 = a2;
  if ( !v10 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v103 = (_BYTE *)(a2 + 169);
      v18 = *(unsigned __int8 *)(a2 + 169);
      v102 = (_QWORD *)(a2 + 8);
      switch ( v18 )
      {
        case 0uLL:
          goto LABEL_6;
        case 1uLL:
          sub_14196B990(&off_141A39030);
        case 2uLL:
          sub_14196B9B0(&off_141A39030);
        case 3uLL:
          v20 = **(_QWORD **)(a2 + 160);
          goto LABEL_11;
      }
    }
    sub_14196B830(aUnfoldMustNotB, 63, &off_141A40980);
  }
  v11 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 2;
  if ( v11 < 0 )
    sub_14196B830("internal error: entered unreachable code", 40, &off_141A3BB00);
  v104 = v11;
  v3 = a3;
  v105 = (_OWORD *)(a2 + 16);
  v109 = *(_QWORD *)(a2 + 144);
  LOBYTE(v103) = *(_BYTE *)(a2 + 152);
  v106 = (_QWORD *)(a2 + 32);
  *(_OWORD *)&v90[96] = *(_OWORD *)(a2 + 128);
  *(_OWORD *)&v90[80] = *(_OWORD *)(a2 + 112);
  *(_OWORD *)&v90[64] = *(_OWORD *)(a2 + 96);
  v12 = *(_OWORD *)(a2 + 32);
  v13 = *(_OWORD *)(a2 + 48);
  v14 = *(_OWORD *)(a2 + 64);
  *(_OWORD *)&v90[48] = *(_OWORD *)(a2 + 80);
  *(_OWORD *)&v90[32] = v14;
  *(_OWORD *)&v90[16] = v13;
  *(_OWORD *)v90 = v12;
  v78 = *(_OWORD *)(a2 + 16);
  sub_14068C100(a2);
  v7 = v108;
  *(_QWORD *)v108 = 1;
  v102 = (_QWORD *)(v7 + 8);
  *(_QWORD *)(v7 + 8) = v104;
  *v105 = v78;
  v18 = (unsigned __int64)v106;
  *((_OWORD *)v106 + 6) = *(_OWORD *)&v90[96];
  *(_OWORD *)(v18 + 80) = *(_OWORD *)&v90[80];
  *(_OWORD *)(v18 + 64) = *(_OWORD *)&v90[64];
  v15 = *(_OWORD *)v90;
  v16 = *(_OWORD *)&v90[16];
  v17 = *(_OWORD *)&v90[32];
  *(_OWORD *)(v18 + 48) = *(_OWORD *)&v90[48];
  *(_OWORD *)(v18 + 32) = v17;
  *(_OWORD *)(v18 + 16) = v16;
  *(_OWORD *)v18 = v15;
  *(_QWORD *)(v7 + 144) = v109;
  *(_BYTE *)(v7 + 168) = (_BYTE)v103;
  LODWORD(v18) = v7 + 169;
  v103 = (_BYTE *)(v7 + 169);
  *(_BYTE *)(v7 + 169) = 0;
  a3 = v3;
LABEL_6:
  *(_WORD *)(v7 + 170) = 257;
  *(_BYTE *)(v7 + 172) = 1;
  if ( *(_BYTE *)(v7 + 168) == 1 && *(_QWORD *)(v7 + 32) == -2 )
  {
    v19 = -1;
    LODWORD(v109) = v18;
LABEL_88:
    if ( *(_BYTE *)(v7 + 172) )
    {
      v64 = *(_QWORD **)(v7 + 144);
      v65 = *v64;
      v10 = *v64 == 1;
      v106 = v64;
      if ( v10 )
      {
        sub_14069BB20((__int64)(v64 + 1));
      }
      else if ( !v65 )
      {
        sub_1406C4A40(v106 + 1);
      }
      sub_140001660(v106, 64, 8);
      v7 = v108;
    }
    if ( *(_BYTE *)(v7 + 171) && *v102 )
      sub_140001660(*(_QWORD *)(v7 + 16), *v102, 1);
    *v103 = 1;
    if ( v19 == -2 )
      goto LABEL_98;
    if ( v19 != -1 )
    {
      v106 = (_QWORD *)v19;
      v102 = (_QWORD *)v4;
      v103 = v6;
      *(_QWORD *)v90 = v5;
      *(_QWORD *)&v90[8] = v3;
      *(_OWORD *)&v90[16] = v86;
      sub_14068C100(v7);
      v66 = v108;
      *(_QWORD *)v108 = 0;
      *(_QWORD *)(v66 + 8) = v106;
      *(_QWORD *)(v66 + 16) = v104;
      *(_QWORD *)(v66 + 24) = v105;
      *(_QWORD *)(v66 + 32) = v102;
      *(_OWORD *)(v66 + 40) = v78;
      *(_OWORD *)(v66 + 56) = v79;
      *(_OWORD *)(v66 + 72) = v80;
      *(_OWORD *)(v66 + 88) = v81;
      *(_OWORD *)(v66 + 104) = v82;
      *(_OWORD *)(v66 + 120) = v83;
      *(_QWORD *)(v66 + 136) = v84;
      *(_QWORD *)(v66 + 144) = v103;
      *(_BYTE *)(v66 + 152) = v109;
      v67 = *(_OWORD *)v90;
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v90[16];
      *(_OWORD *)(a1 + 8) = v67;
      *(_QWORD *)a1 = 1;
      return a1;
    }
LABEL_101:
    sub_14068C100(v7);
    *(_QWORD *)v108 = 2;
    *(_QWORD *)a1 = 0;
    return a1;
  }
  v20 = *(_QWORD *)(v7 + 144);
  *(_QWORD *)(v7 + 152) = v20;
  *(_QWORD *)(v7 + 160) = v7 + 152;
LABEL_11:
  sub_14075E7E0(v90, v20, a3);
  if ( *(_QWORD *)v90 != 2 )
  {
    if ( *(_DWORD *)v90 == 1 )
    {
      if ( !*(_QWORD *)&v90[8] )
      {
        v89 = *(_QWORD *)&v90[16];
        v94 = &v89;
        v95 = sub_141246C00;
        sub_1416DAFA0(v90, &unk_141A390CA, &v94);
        v97 = *(__m128i *)v90;
        *(_QWORD *)&v98 = *(_QWORD *)&v90[16];
        LOBYTE(v36) = 41;
        v3 = sub_1411D09D0(v36, &v97);
        v37 = (_QWORD *)v108;
        v6 = *(_BYTE **)(v108 + 144);
        *(_WORD *)(v108 + 171) = 0;
        v19 = v37[1];
        v104 = v37[2];
        v105 = (_OWORD *)v37[3];
        v38 = sub_14028DCE0(v89);
        LOBYTE(v38) = 1;
        LODWORD(v109) = v38;
        v4 = -2;
        v5 = nullptr;
        v7 = v108;
LABEL_85:
        if ( *(_BYTE *)(v7 + 170) && *(_QWORD *)(v7 + 32) != -2 )
          sub_1406C48B0(v7 + 32);
        goto LABEL_88;
      }
      v96 = *(_OWORD *)&v90[24];
      v99 = 0;
      v100 = 1;
      v101 = nullptr;
      v94 = *(__int64 **)&v90[8];
      v95 = *(__int64 (__fastcall **)())&v90[16];
      v112 = 1;
      sub_1416E2AB0(v90, *(_QWORD *)&v90[16], *(_QWORD *)&v90[24]);
      if ( *(_DWORD *)v90 == 1 )
      {
        v21 = v108;
        v22 = *(_QWORD *)(v108 + 24);
        if ( v22 > 0x4000000 )
        {
LABEL_17:
          v97.m128i_i64[0] = (__int64)&unk_141A39078;
          v97.m128i_i64[1] = (__int64)sub_1416EBAE0;
          v112 = 1;
          sub_1416DAFA0(v90, &unk_141A39080, &v97);
          v97 = *(__m128i *)v90;
          *(_QWORD *)&v98 = *(_QWORD *)&v90[16];
          v112 = 1;
          LOBYTE(v23) = 41;
          v3 = sub_1411D09D0(v23, &v97);
          v24 = v108;
          *(_BYTE *)(v108 + 172) = 0;
          v6 = *(_BYTE **)(v24 + 144);
          v4 = -2;
          v25 = 1;
          v104 = 1;
          v105 = nullptr;
          v5 = nullptr;
          v19 = 0;
          LODWORD(v109) = 1;
LABEL_18:
          v26 = (void (__fastcall *)(char *, __int64 (__fastcall *)(), _QWORD))v94[4];
          v110 = v25;
          v26((char *)&v96 + 8, v95, v96);
          if ( v25 )
          {
            v7 = v108;
            if ( v99 )
              sub_140001660(v100, v99, 1);
          }
          else
          {
            v7 = v108;
          }
          goto LABEL_85;
        }
LABEL_33:
        v104 = v21 + 32;
        v42 = v21 + 40;
        v87 = 1;
        v105 = nullptr;
        while ( 1 )
        {
          *(_QWORD *)v90 = *(_QWORD *)(v21 + 16);
          *(_QWORD *)&v90[8] = v22;
          *(_QWORD *)&v90[16] = 0;
          *(_QWORD *)&v90[24] = v22;
          v90[40] = 1;
          *(_QWORD *)&v90[32] = 0xA0000000ALL;
          v112 = 1;
          sub_14076B0A0(&v97, v90);
          if ( v97.m128i_i32[0] != 1 )
            break;
          v43 = v97.m128i_u64[1];
          v44 = v108;
          v45 = *(_QWORD *)(v108 + 24);
          if ( v97.m128i_i64[1] )
          {
            v46 = *(_QWORD *)(v108 + 16);
            if ( v97.m128i_i64[1] >= v45 )
            {
              if ( v97.m128i_i64[1] != v45 )
              {
LABEL_117:
                v112 = 1;
                sub_14196B4F0(v46, v45, 0, v97.m128i_i32[2], (__int64)&off_141A39048);
              }
            }
            else if ( *(char *)(v46 + v97.m128i_i64[1]) <= -65 )
            {
              goto LABEL_117;
            }
            if ( v97.m128i_i64[1] < 0 )
            {
              v49 = 0;
              goto LABEL_63;
            }
            v47 = v42;
            v48 = v97.m128i_i64[1];
            nullsub_1(v108, v97.m128i_i64[1]);
            v49 = 1;
            v50 = sub_140001650(v48, 1);
            if ( !v50 )
            {
              v109 = v48;
LABEL_63:
              v112 = 1;
              sub_14196B2DB(v49, v109);
            }
            v109 = v50;
            sub_1419234B0(v50, v46, v48);
            v44 = v108;
            v45 = *(_QWORD *)(v108 + 24);
            v43 = v48;
            v42 = v47;
            v106 = (_QWORD *)v43;
            if ( v43 >= v45 )
LABEL_113:
              sub_14196B880(0, v43, v45, &off_141A53198);
          }
          else
          {
            v109 = 1;
            v106 = nullptr;
            if ( !v45 )
              goto LABEL_113;
          }
          v51 = v43 + 1;
          v52 = *(_QWORD *)(v44 + 16);
          if ( v43 + 1 < v45 && *(char *)(v52 + v51) <= -65 )
            sub_14196B830(aAssertionFaile_23, 44, &off_141A39060);
          *(_OWORD *)&v90[16] = (unsigned __int64)v102;
          *(_QWORD *)&v90[32] = v43 + 1;
          *(_QWORD *)v90 = v52;
          *(_QWORD *)&v90[8] = v52 + v51;
          sub_1416DB330(v90);
          if ( *(_QWORD *)v104 == -2 )
          {
            v21 = v108;
            v53 = (unsigned __int64)v106;
          }
          else
          {
            if ( *(_QWORD *)v104 == -1 )
              anthropic_to_chat_stream_feed_line(v90, v42, v109, (unsigned __int64)v106);
            else
              chat_to_anthropic_stream_feed_line((__m128i *)v90, v104, v109, (unsigned __int64)v106);
            v54 = *(_QWORD *)&v90[16];
            if ( *(_QWORD *)&v90[16] )
            {
              v88 = *(_QWORD *)&v90[8];
              v53 = (unsigned __int64)v106;
              v85 = v42;
              if ( *(_QWORD *)&v90[16] > (unsigned __int64)(v99 - (_QWORD)v105) )
              {
                sub_141939070((unsigned int)&v99, (_DWORD)v105, *(_DWORD *)&v90[16], 1, 1);
                v87 = v100;
                v105 = v101;
                v53 = (unsigned __int64)v106;
              }
              v55 = v105;
              sub_1419234B0((char *)v105 + v87, v88, v54);
              v105 = (_OWORD *)((char *)v55 + v54);
              v101 = (_OWORD *)((char *)v55 + v54);
              v42 = v85;
            }
            else
            {
              v53 = (unsigned __int64)v106;
            }
            v21 = v108;
            if ( *(_QWORD *)v90 )
              sub_140001660(*(_QWORD *)&v90[8], *(_QWORD *)v90, 1);
          }
          if ( v53 )
            sub_140001660(v109, v53, 1);
          v22 = *(_QWORD *)(v21 + 24);
        }
        v69 = (_BYTE *)v42;
        v70 = v108;
        v71 = (__int128 *)v104;
        v6 = *(_BYTE **)(v108 + 144);
        *(_WORD *)(v108 + 171) = 0;
        *(_QWORD *)&v90[16] = v102[2];
        *(_OWORD *)v90 = *(_OWORD *)v102;
        *(_BYTE *)(v70 + 170) = 0;
        v91 = v71[6];
        *(_OWORD *)&v90[104] = v71[5];
        *(_OWORD *)&v90[88] = v71[4];
        v72 = *v71;
        v73 = v71[1];
        v74 = v71[2];
        *(_OWORD *)&v90[72] = v71[3];
        *(_OWORD *)&v90[56] = v74;
        *(_OWORD *)&v90[40] = v73;
        *(_OWORD *)&v90[24] = v72;
        v92 = v6;
        v93 = 0;
        if ( v105 )
        {
          sub_141683760(&v97, &v99);
          v3 = v97.m128i_i64[1];
          v5 = (__int64 (__fastcall **)())v97.m128i_i64[0];
          v86 = v98;
          v75 = *(_QWORD *)&v90[8];
          v4 = *(_QWORD *)&v90[24];
          v76 = *(_OWORD **)&v90[16];
          v77 = &v90[32];
          v25 = 0;
        }
        else
        {
          v86 = 0;
          v75 = *(_QWORD *)&v90[8];
          v76 = *(_OWORD **)&v90[16];
          v77 = v69;
          v3 = 1;
          v5 = off_141A353D8;
          v25 = 1;
          v4 = *(_QWORD *)&v90[24];
        }
        v105 = v76;
        v104 = v75;
        v19 = *(_QWORD *)v90;
        v78 = *(_OWORD *)v77;
        v79 = *((_OWORD *)v77 + 1);
        v80 = *((_OWORD *)v77 + 2);
        v81 = *((_OWORD *)v77 + 3);
        v82 = *((_OWORD *)v77 + 4);
        v83 = *((_OWORD *)v77 + 5);
        v84 = *((_QWORD *)v77 + 12);
        LODWORD(v109) = 0;
        goto LABEL_18;
      }
      v39 = *(_QWORD *)&v90[8];
      v40 = *(_QWORD *)&v90[16];
      v21 = v108;
      v41 = *(_QWORD *)(v108 + 24);
      if ( *(_QWORD *)&v90[16] > (unsigned __int64)(*(_QWORD *)(v108 + 8) - v41) )
      {
        v112 = 1;
        sub_141939070((_DWORD)v102, v41, *(_DWORD *)&v90[16], 1, 1);
        v21 = v108;
        v41 = *(_QWORD *)(v108 + 24);
      }
      else if ( !*(_QWORD *)&v90[16] )
      {
        goto LABEL_32;
      }
      sub_1419234B0(*(_QWORD *)(v21 + 16) + v41, v39, v40);
      v41 = *(_QWORD *)(v21 + 24);
LABEL_32:
      v22 = v40 + v41;
      *(_QWORD *)(v21 + 24) = v22;
      if ( v22 > 0x4000000 )
        goto LABEL_17;
      goto LABEL_33;
    }
    v99 = 0;
    v100 = 1;
    v101 = nullptr;
    v27 = v108;
    v28 = *(_QWORD *)(v108 + 32);
    *(_QWORD *)(v108 + 32) = -2;
    if ( v28 == -2 )
    {
      v29 = *(__int64 **)(v27 + 144);
      v30 = *v29;
      v10 = *v29 == 1;
      v109 = (__int64)v29;
      if ( v10 )
      {
        sub_14069BB20((__int64)(v29 + 1));
      }
      else if ( !v30 )
      {
        sub_1406C4A40((_QWORD *)(v109 + 8));
      }
      sub_140001660(v109, 64, 8);
      v7 = v108;
      if ( *v102 )
        sub_140001660(*(_QWORD *)(v108 + 16), *v102, 1);
      *v103 = 1;
      goto LABEL_101;
    }
    *(_QWORD *)v90 = v28;
    *(_QWORD *)&v90[104] = *(_QWORD *)(v27 + 136);
    *(_OWORD *)&v90[88] = *(_OWORD *)(v27 + 120);
    *(_OWORD *)&v90[72] = *(_OWORD *)(v27 + 104);
    v31 = *(_OWORD *)(v27 + 40);
    v32 = *(_OWORD *)(v27 + 56);
    v33 = *(_OWORD *)(v27 + 72);
    *(_OWORD *)&v90[56] = *(_OWORD *)(v27 + 88);
    *(_OWORD *)&v90[40] = v33;
    *(_OWORD *)&v90[24] = v32;
    *(_OWORD *)&v90[8] = v31;
    v34 = *(_QWORD *)(v27 + 24);
    if ( !v34 )
    {
      v56 = 1;
      v57 = nullptr;
      if ( v28 != -1 )
      {
LABEL_78:
        v111 = 1;
        sub_140A37180(&v94, (__int64)v90);
LABEL_79:
        v61 = (__int64)v95;
        v62 = v96;
        v109 = (__int64)v95;
        if ( (unsigned __int64)v96 > v99 - (__int64)v57 )
        {
          v107 = 1;
          sub_141939070((unsigned int)&v99, (_DWORD)v57, v96, 1, 1);
          v56 = v100;
          v57 = v101;
          v61 = v109;
        }
        else if ( !(_QWORD)v96 )
        {
LABEL_82:
          v101 = (_OWORD *)((char *)v57 + v62);
          v107 = 0;
          sub_141683760(&v97, &v99);
          v3 = v97.m128i_i64[1];
          v5 = (__int64 (__fastcall **)())v97.m128i_i64[0];
          v86 = v98;
          v7 = v108;
          v6 = *(_BYTE **)(v108 + 144);
          *(_WORD *)(v108 + 171) = 0;
          v19 = *(_QWORD *)(v7 + 8);
          v104 = *(_QWORD *)(v7 + 16);
          v105 = *(_OWORD **)(v7 + 24);
          if ( v94 )
            sub_140001660(v109, v94, 1);
          v63 = sub_1406C48B0(v90);
          LOBYTE(v63) = 1;
          LODWORD(v109) = v63;
          v4 = -2;
          goto LABEL_85;
        }
        sub_1419234B0((char *)v57 + v56, v61, v62);
        goto LABEL_82;
      }
LABEL_65:
      v111 = 1;
      anthropic_to_chat_stream_finish_done(&v94, (__int64)&v90[8]);
      goto LABEL_79;
    }
    v109 = *(_QWORD *)(v27 + 8);
    v35 = *(_QWORD *)(v27 + 16);
    *(_QWORD *)(v27 + 8) = 0;
    *(_QWORD *)(v27 + 16) = 1;
    *(_QWORD *)(v27 + 24) = 0;
    v106 = (_QWORD *)v35;
    if ( v28 == -1 )
      anthropic_to_chat_stream_feed_line(&v97, (__int64)&v90[8], v35, v34);
    else
      chat_to_anthropic_stream_feed_line(&v97, (__int64)v90, v35, v34);
    v58 = v98;
    if ( (_QWORD)v98 )
    {
      v104 = v97.m128i_i64[1];
      sub_141939070((unsigned int)&v99, 0, v98, 1, 1);
      v56 = v100;
      v59 = v101;
      sub_1419234B0((char *)v101 + v100, v104, v58);
      v57 = (_OWORD *)((char *)v59 + v58);
      v101 = v57;
      v60 = v97.m128i_i64[0];
      if ( !v97.m128i_i64[0] )
        goto LABEL_75;
    }
    else
    {
      v56 = 1;
      v57 = nullptr;
      v60 = v97.m128i_i64[0];
      if ( !v97.m128i_i64[0] )
      {
LABEL_75:
        if ( v109 )
          sub_140001660(v106, v109, 1);
        if ( *(_QWORD *)v90 != -1 )
          goto LABEL_78;
        goto LABEL_65;
      }
    }
    sub_140001660(v97.m128i_i64[1], v60, 1);
    goto LABEL_75;
  }
  *v103 = 3;
LABEL_98:
  *(_QWORD *)a1 = 2;
  return a1;
}
