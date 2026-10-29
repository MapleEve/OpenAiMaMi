// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bc1a40 | name sub_140BC1A40
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BC1A40(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int8 a7,
        __int64 a8,
        unsigned __int8 *a9)
{
  unsigned int v9; // ebx
  int v10; // r14d
  int v13; // edx
  __int64 v14; // r9
  unsigned __int128 v15; // xmm0
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  _QWORD *v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rdi
  _QWORD *v21; // r14
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // r14
  int v27; // r13d
  __int64 *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 (__fastcall *v32)(unsigned __int64); // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __m128i *v35; // rax
  __m128i *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rcx
  _OWORD *v41; // rcx
  __int64 v43; // rax
  unsigned int v44; // edx
  _QWORD v45[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v46; // [rsp+60h] [rbp-20h] BYREF
  __int64 v47; // [rsp+70h] [rbp-10h]
  _QWORD v48[2]; // [rsp+78h] [rbp-8h] BYREF
  __int64 v49; // [rsp+88h] [rbp+8h] BYREF
  __int64 *v50; // [rsp+90h] [rbp+10h]
  __int64 v51; // [rsp+98h] [rbp+18h]
  __int64 v52; // [rsp+A0h] [rbp+20h] BYREF
  __int64 *v53; // [rsp+A8h] [rbp+28h]
  __int64 v54; // [rsp+B0h] [rbp+30h]
  __int64 v55; // [rsp+B8h] [rbp+38h] BYREF
  int v56; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v57; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v58; // [rsp+D0h] [rbp+50h]
  __int64 v59; // [rsp+D8h] [rbp+58h]
  unsigned __int128 v60; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v61; // [rsp+F0h] [rbp+70h]
  __int128 v62; // [rsp+100h] [rbp+80h]
  __int128 v63; // [rsp+110h] [rbp+90h]
  __int128 v64; // [rsp+120h] [rbp+A0h]
  __int128 v65; // [rsp+130h] [rbp+B0h]
  __int64 v66; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v67; // [rsp+148h] [rbp+C8h]
  unsigned __int128 v68; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v69; // [rsp+160h] [rbp+E0h]
  __int128 v70; // [rsp+170h] [rbp+F0h]
  __int128 v71; // [rsp+180h] [rbp+100h]
  __int128 v72; // [rsp+190h] [rbp+110h]
  __int128 v73; // [rsp+1A0h] [rbp+120h]
  __int64 *v74; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v75; // [rsp+1B8h] [rbp+138h]
  __int64 v76; // [rsp+1C0h] [rbp+140h]
  __int64 v77; // [rsp+1C8h] [rbp+148h]
  char **v78; // [rsp+1D0h] [rbp+150h]
  __int64 v79; // [rsp+1D8h] [rbp+158h]
  __int128 v80; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v81; // [rsp+1F0h] [rbp+170h]
  char v82; // [rsp+1FEh] [rbp+17Eh] BYREF
  char v83; // [rsp+1FFh] [rbp+17Fh] BYREF
  __int64 v84; // [rsp+200h] [rbp+180h]
  char v85; // [rsp+20Eh] [rbp+18Eh]
  char v86; // [rsp+20Fh] [rbp+18Fh]
  __int64 v87; // [rsp+210h] [rbp+190h]

  v87 = -2;
  v10 = a4;
  LOBYTE(v9) = a3;
  v66 = a4;
  v67 = a5;
  v86 = 1;
  v55 = sub_14167FC00();
  v56 = v13;
  v86 = 1;
  sub_1410255B0((unsigned int)&v68, a2, v9, v10, a5);
  if ( (_DWORD)v68 != -1 )
  {
    v65 = v73;
    v64 = v72;
    v63 = v71;
    v62 = v70;
    v61 = v69;
    v60 = v68;
LABEL_4:
    v73 = v65;
    v72 = v64;
    v71 = v63;
    v70 = v62;
    v69 = v61;
    v68 = v60;
    *(_QWORD *)&v80 = 0;
    *((_QWORD *)&v80 + 1) = 1;
    v81 = 0;
    v76 = 1610612768;
    v74 = (__int64 *)&v80;
    v75 = (__int64)&off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(&v68, &v74) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v82,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v79 = *((_QWORD *)&v80 + 1);
    v84 = v80;
    sub_140C75030((__int128 *)a2, (__int128 *)v9);
    if ( v84 )
      sub_140001660(v79, v84, 1);
    v74 = &v66;
    v75 = (__int64)sub_140186EE0;
    v76 = (__int64)&v68;
    v77 = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v57, &unk_141A39F29, &v74);
    v83 = v9;
    v84 = v58;
    v48[0] = v58;
    v48[1] = v59;
    v74 = (__int64 *)&v83;
    v75 = (__int64)sub_140C98D50;
    v76 = (__int64)v48;
    v77 = (__int64)sub_140186EE0;
    sub_1416ABFD0(&v80, &unk_141A39D2E, &v74);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitFailed, 13, (__int64)&v80);
    if ( v57 )
      sub_140001660(v84, v57, 1);
    v15 = v68;
    v16 = v70;
    v17 = v71;
    *(_OWORD *)(a1 + 16) = v69;
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 64) = v72;
    *(_OWORD *)(a1 + 80) = v73;
    *(_OWORD *)a1 = v15;
    v18 = a6;
    v19 = a6[2];
    v20 = a6[1];
    if ( v19 )
    {
      v21 = (_QWORD *)(v20 + 8);
      do
      {
        v22 = *(v21 - 1);
        if ( v22 )
          sub_140001660(*v21, v22, 1);
        v21 += 3;
        --v19;
      }
      while ( v19 );
    }
LABEL_44:
    if ( *v18 )
      sub_140001660(v20, 24LL * *v18, 8);
    return a1;
  }
  v14 = *a9;
  v86 = 1;
  sub_140D82570(&v60, a8, 0, v14);
  if ( (_QWORD)v60 != -1 )
    goto LABEL_4;
  v86 = 1;
  v23 = sub_1401BD880(*((_QWORD *)&v60 + 1));
  v26 = v23;
  if ( v23 )
  {
    v57 = v23;
    v27 = v23 & 3;
    switch ( v23 & 3 )
    {
      case 0uLL:
        LOBYTE(v23) = *(_BYTE *)(v23 + 16);
        break;
      case 1uLL:
        LOBYTE(v23) = *(_BYTE *)(v23 + 31);
        break;
      case 2uLL:
        v85 = 1;
        v32 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v25, v24) + 8);
        v85 = 1;
        LOBYTE(v23) = v32(HIDWORD(v26));
        break;
      case 3uLL:
        v23 >>= 32;
        break;
    }
    LOBYTE(v60) = v23;
    *(_QWORD *)&v68 = &v60;
    *((_QWORD *)&v68 + 1) = sub_140C9E0F0;
    v85 = 1;
    sub_1416ABFD0(&v52, &unk_141A39D4C, &v68);
    LOBYTE(v80) = v9;
    v84 = (__int64)v53;
    v74 = v53;
    v75 = v54;
    *(_QWORD *)&v68 = &v80;
    *((_QWORD *)&v68 + 1) = sub_140C98D50;
    *(_QWORD *)&v69 = &v74;
    *((_QWORD *)&v69 + 1) = sub_140186EE0;
    sub_1416ABFD0(&v60, &unk_141A39D2E, &v68);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitSyncUnco, 23, (__int64)&v60);
    if ( v52 )
      sub_140001660(v84, v52, 1);
    v33 = *(_QWORD *)(a2 + 776);
    v34 = *(_QWORD *)(a2 + 784);
    v85 = 1;
    sub_1410237A0(v33, v34, v9, (unsigned int)&unk_141A6FF17, 23, v66, v67, (__int64)&unk_141A702FA, 28);
    v81 = a6[2];
    v80 = *(_OWORD *)a6;
    nullsub_1(a6);
    v35 = (__m128i *)sub_140001650(170, 1);
    if ( !v35 )
      sub_141938D2B(1, 170);
    v36 = v35;
    sub_1418F44E0(v35, (const __m128i *)aRouterCommitRe, 0xAAu);
    *((_QWORD *)&v68 + 1) = 170;
    *(_QWORD *)&v69 = v36;
    *((_QWORD *)&v69 + 1) = 170;
    *(_QWORD *)&v68 = 10;
    v74 = nullptr;
    v75 = 1;
    v76 = 0;
    *(_QWORD *)&v61 = 1610612768;
    *(_QWORD *)&v60 = &v74;
    *((_QWORD *)&v60 + 1) = &off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(&v68, &v60) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v82,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v84 = (__int64)v74;
    v79 = v75;
    v37 = v76;
    v38 = v81;
    if ( v81 == (_QWORD)v80 )
      sub_14190FDC0(&v80);
    v39 = *((_QWORD *)&v80 + 1);
    v40 = 3 * v38;
    *(_QWORD *)(*((_QWORD *)&v80 + 1) + 8 * v40) = v84;
    *(_QWORD *)(v39 + 8 * v40 + 8) = v79;
    *(_QWORD *)(v39 + 8 * v40 + 16) = v37;
    v81 = v38 + 1;
    sub_140BAC840(&v68);
    *(_QWORD *)(a1 + 32) = v81;
    *(_OWORD *)(a1 + 16) = v80;
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)a1 = -1;
    if ( (unsigned int)(v27 - 2) >= 2 && (v26 & 3) != 0 )
    {
      *((_QWORD *)&v68 + 1) = v26 - 1;
      LOBYTE(v68) = 3;
      v86 = 0;
      sub_1416BCB00((char *)&v68 + 8);
    }
  }
  else
  {
    v28 = (__int64 *)a6[2];
    if ( !a7 && !v28 )
    {
      v86 = 1;
      sub_141022500(&v60, a2, v9);
      if ( (_DWORD)v60 == -1 )
      {
        v86 = 1;
        v43 = sub_14167FD50(&v55);
        v60 = 0x3E8 * (unsigned __int128)(unsigned __int64)v43 + v44 / 0xF4240uLL;
        *(_QWORD *)&v68 = &v66;
        *((_QWORD *)&v68 + 1) = sub_140186EE0;
        *(_QWORD *)&v69 = &v60;
        *((_QWORD *)&v69 + 1) = sub_1416B95D0;
        v86 = 1;
        sub_1416ABFD0(v45, &unk_141A39E59, &v68);
        v86 = 1;
        sub_140BBE8E0(v9, (int)aStable, 6, v45);
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = -1;
        sub_140025530(a6);
        return a1;
      }
      v73 = v65;
      v72 = v64;
      v71 = v63;
      v70 = v62;
      v69 = v61;
      v68 = v60;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v80 = &v68;
        *((_QWORD *)&v80 + 1) = sub_14104A7D0;
        v74 = (__int64 *)aCodexmateLibCo_31;
        v75 = 45;
        v76 = (__int64)aCodexmateLibCo_31;
        v77 = 45;
        v78 = &off_141A39DD8;
        sub_140BAD520(&unk_141A39D6B, &v80, 2, &v74);
      }
      v84 = sub_140C23890(24);
      v74 = (__int64 *)&v68;
      v75 = (__int64)sub_14104A7D0;
      sub_1416ABFD0(&v46, &unk_141A39E1D, &v74);
      v41 = (_OWORD *)v84;
      *(_QWORD *)(v84 + 16) = v47;
      *v41 = v46;
      *(_QWORD *)(a1 + 8) = 1;
      *(_QWORD *)(a1 + 16) = 1;
      *(_QWORD *)(a1 + 24) = v41;
      *(_QWORD *)(a1 + 32) = 1;
      *(_QWORD *)a1 = -1;
      v86 = 1;
      sub_140BAC840(&v68);
      v18 = a6;
      v20 = a6[1];
      goto LABEL_44;
    }
    v29 = a6[1];
    v86 = 1;
    sub_140D1EE10((unsigned int)&v68, v29, (_DWORD)v28, (unsigned int)&unk_141A39BD6, 3);
    v79 = *((_QWORD *)&v68 + 1);
    v84 = v68;
    sub_141026C20((unsigned int)&v60, a2, v9, v66, v67, *((__int64 *)&v68 + 1), v69);
    if ( (_DWORD)v60 != -1 )
    {
      v73 = v65;
      v72 = v64;
      v71 = v63;
      v70 = v62;
      v69 = v61;
      v68 = v60;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v80 = &v68;
        *((_QWORD *)&v80 + 1) = sub_14104A7D0;
        v74 = (__int64 *)aCodexmateLibCo_31;
        v75 = 45;
        v76 = (__int64)aCodexmateLibCo_31;
        v77 = 45;
        v78 = &off_141A39EC0;
        sub_140BAD520(&unk_141A39E7E, &v80, 2, &v74);
      }
      sub_140BAC840(&v68);
    }
    if ( v84 )
      sub_140001660(v79, v84, 1);
    v86 = 1;
    v30 = sub_14167FD50(&v55);
    v60 = 0x3E8 * (unsigned __int128)(unsigned __int64)v30 + v31 / 0xF4240uLL;
    v74 = v28;
    *(_QWORD *)&v68 = &v66;
    *((_QWORD *)&v68 + 1) = sub_140186EE0;
    *(_QWORD *)&v69 = &v60;
    *((_QWORD *)&v69 + 1) = sub_1416B95D0;
    *(_QWORD *)&v70 = &v74;
    *((_QWORD *)&v70 + 1) = sub_1416BCB10;
    v86 = 1;
    sub_1416ABFD0(&v49, &unk_141A39ED8, &v68);
    LOBYTE(v80) = v9;
    v84 = (__int64)v50;
    v74 = v50;
    v75 = v51;
    *(_QWORD *)&v68 = &v80;
    *((_QWORD *)&v68 + 1) = sub_140C98D50;
    *(_QWORD *)&v69 = &v74;
    *((_QWORD *)&v69 + 1) = sub_140186EE0;
    sub_1416ABFD0(&v60, &unk_141A39D2E, &v68);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aDegraded, 8, (__int64)&v60);
    if ( v49 )
      sub_140001660(v84, v49, 1);
    *(_QWORD *)(a1 + 8) = a7 + 1LL;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)a6;
    *(_QWORD *)(a1 + 32) = a6[2];
    *(_QWORD *)a1 = -1;
  }
  return a1;
}
