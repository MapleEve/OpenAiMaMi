// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bbfa40 | name sub_140BBFA40
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BBFA40(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6,
        __int64 a7,
        unsigned __int8 *a8,
        __int128 *a9)
{
  unsigned int v9; // ebx
  int v10; // r14d
  int v13; // edx
  int v14; // r9d
  unsigned __int128 v15; // xmm0
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r14
  int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // edx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int64 (__fastcall *v34)(unsigned __int64); // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __m128i *v37; // rax
  __m128i *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  _QWORD v46[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v47; // [rsp+58h] [rbp-28h] BYREF
  int v48; // [rsp+60h] [rbp-20h]
  __int64 v49; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v50; // [rsp+70h] [rbp-10h]
  __int64 v51; // [rsp+78h] [rbp-8h]
  __int64 v52; // [rsp+80h] [rbp+0h] BYREF
  __int64 *v53; // [rsp+88h] [rbp+8h]
  __int64 v54; // [rsp+90h] [rbp+10h]
  unsigned __int64 v55; // [rsp+98h] [rbp+18h] BYREF
  __int64 *v56; // [rsp+A0h] [rbp+20h]
  __int64 v57; // [rsp+A8h] [rbp+28h]
  unsigned __int128 v58; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v59; // [rsp+C0h] [rbp+40h]
  __int128 v60; // [rsp+D0h] [rbp+50h]
  __int128 v61; // [rsp+E0h] [rbp+60h]
  __int128 v62; // [rsp+F0h] [rbp+70h]
  __int128 v63; // [rsp+100h] [rbp+80h]
  __int64 v64; // [rsp+110h] [rbp+90h] BYREF
  __int64 v65; // [rsp+118h] [rbp+98h]
  unsigned __int128 v66; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v67; // [rsp+130h] [rbp+B0h]
  __int128 v68; // [rsp+140h] [rbp+C0h]
  __int128 v69; // [rsp+150h] [rbp+D0h]
  __int128 v70; // [rsp+160h] [rbp+E0h]
  __int128 v71; // [rsp+170h] [rbp+F0h]
  __int64 *v72; // [rsp+180h] [rbp+100h] BYREF
  __int128 v73; // [rsp+188h] [rbp+108h] BYREF
  __int64 v74; // [rsp+198h] [rbp+118h]
  char **v75; // [rsp+1A0h] [rbp+120h]
  __int64 v76; // [rsp+1A8h] [rbp+128h]
  __int128 v77; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v78; // [rsp+1C0h] [rbp+140h]
  char v79; // [rsp+1CEh] [rbp+14Eh] BYREF
  char v80; // [rsp+1CFh] [rbp+14Fh] BYREF
  __int64 *v81; // [rsp+1D0h] [rbp+150h]
  char v82; // [rsp+1DDh] [rbp+15Dh]
  char v83; // [rsp+1DEh] [rbp+15Eh]
  char v84; // [rsp+1DFh] [rbp+15Fh]
  __int64 v85; // [rsp+1E0h] [rbp+160h]

  v85 = -2;
  v10 = a4;
  LOBYTE(v9) = a3;
  v64 = a4;
  v65 = a5;
  v84 = 1;
  v83 = 1;
  v47 = sub_14167FC00();
  v48 = v13;
  v84 = 1;
  v83 = 1;
  sub_1410255B0((unsigned int)&v66, a2, v9, v10, a5);
  if ( (_DWORD)v66 != -1 )
  {
    v63 = v71;
    v62 = v70;
    v61 = v69;
    v60 = v68;
    v59 = v67;
    v58 = v66;
LABEL_4:
    v71 = v63;
    v70 = v62;
    v69 = v61;
    v68 = v60;
    v67 = v59;
    v66 = v58;
    *(_QWORD *)&v77 = 0;
    *((_QWORD *)&v77 + 1) = 1;
    v78 = 0;
    *((_QWORD *)&v73 + 1) = 1610612768;
    v72 = (__int64 *)&v77;
    *(_QWORD *)&v73 = &off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(&v66, &v72) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v79,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v76 = *((_QWORD *)&v77 + 1);
    v81 = (__int64 *)v77;
    sub_140C75030((__int128 *)a2, (__int128 *)v9);
    if ( v81 )
      sub_140001660(v76, v81, 1);
    v72 = &v64;
    *(_QWORD *)&v73 = sub_140186EE0;
    *((_QWORD *)&v73 + 1) = &v66;
    v74 = (__int64)sub_14104A7D0;
    sub_1416ABFD0(&v55, &unk_141A39F29, &v72);
    v80 = v9;
    v81 = v56;
    v46[0] = v56;
    v46[1] = v57;
    v72 = (__int64 *)&v80;
    *(_QWORD *)&v73 = sub_140C98D50;
    *((_QWORD *)&v73 + 1) = v46;
    v74 = (__int64)sub_140186EE0;
    sub_1416ABFD0(&v77, &unk_141A39D2E, &v72);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitFailed, 13, (__int64)&v77);
    if ( v55 )
      sub_140001660(v81, v55, 1);
    v15 = v66;
    v16 = v68;
    v17 = v69;
    *(_OWORD *)(a1 + 24) = v67;
    *(_OWORD *)(a1 + 40) = v16;
    *(_OWORD *)(a1 + 56) = v17;
    *(_OWORD *)(a1 + 72) = v70;
    *(_OWORD *)(a1 + 88) = v71;
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)a1 = 1;
    sub_140BAD350(a6);
    v18 = *((_QWORD *)a6 + 10);
    if ( v18 )
    {
      v19 = (_QWORD *)(*((_QWORD *)a6 + 9) + 8LL);
      do
      {
        v20 = *(v19 - 1);
        if ( v20 )
          sub_140001660(*v19, v20, 1);
        v19 += 3;
        --v18;
      }
      while ( v18 );
    }
    result = *((_QWORD *)a6 + 8);
    if ( result )
      return sub_140001660(*((_QWORD *)a6 + 9), 24 * result, 8);
    return result;
  }
  v72 = (__int64 *)a6;
  v73 = *a9;
  v14 = *a8;
  v84 = 1;
  v83 = 1;
  sub_140D883F0((unsigned int)&v58, a7, (_DWORD)a6, v14, (__int64)&v73);
  if ( (_QWORD)v58 != -1 )
    goto LABEL_4;
  v84 = 1;
  v83 = 1;
  v22 = sub_1401BD880(*((_QWORD *)&v58 + 1));
  v25 = v22;
  if ( v22 )
  {
    v55 = v22;
    v26 = v22 & 3;
    switch ( v22 & 3 )
    {
      case 0uLL:
        LOBYTE(v22) = *(_BYTE *)(v22 + 16);
        break;
      case 1uLL:
        LOBYTE(v22) = *(_BYTE *)(v22 + 31);
        break;
      case 2uLL:
        v82 = 1;
        v34 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v24, v23) + 8);
        v82 = 1;
        LOBYTE(v22) = v34(HIDWORD(v25));
        break;
      case 3uLL:
        v22 >>= 32;
        break;
    }
    LOBYTE(v58) = v22;
    *(_QWORD *)&v66 = &v58;
    *((_QWORD *)&v66 + 1) = sub_140C9E0F0;
    v82 = 1;
    sub_1416ABFD0(&v52, &unk_141A39D4C, &v66);
    LOBYTE(v77) = v9;
    v81 = v53;
    v72 = v53;
    *(_QWORD *)&v73 = v54;
    *(_QWORD *)&v66 = &v77;
    *((_QWORD *)&v66 + 1) = sub_140C98D50;
    *(_QWORD *)&v67 = &v72;
    *((_QWORD *)&v67 + 1) = sub_140186EE0;
    sub_1416ABFD0(&v58, &unk_141A39D2E, &v66);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitSyncUnco, 23, (__int64)&v58);
    if ( v52 )
      sub_140001660(v81, v52, 1);
    v35 = *(_QWORD *)(a2 + 776);
    v36 = *(_QWORD *)(a2 + 784);
    v82 = 1;
    sub_1410237A0(v35, v36, v9, (unsigned int)&unk_141A6FF17, 23, v64, v65, (__int64)&unk_141A702FA, 28);
    v78 = *((_QWORD *)a6 + 10);
    v77 = a6[4];
    nullsub_1(a6);
    v37 = (__m128i *)sub_140001650(170, 1);
    if ( !v37 )
      sub_141938D2B(1, 170);
    v38 = v37;
    sub_1418F44E0(v37, (const __m128i *)aRouterCommitRe, 0xAAu);
    *((_QWORD *)&v66 + 1) = 170;
    *(_QWORD *)&v67 = v38;
    *((_QWORD *)&v67 + 1) = 170;
    *(_QWORD *)&v66 = 10;
    v72 = nullptr;
    v73 = 1u;
    *(_QWORD *)&v59 = 1610612768;
    *(_QWORD *)&v58 = &v72;
    *((_QWORD *)&v58 + 1) = &off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(&v66, &v58) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v79,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v81 = v72;
    v39 = *((_QWORD *)&v73 + 1);
    v76 = v73;
    v40 = v78;
    if ( v78 == (_QWORD)v77 )
      sub_14190FDC0(&v77);
    v41 = *((_QWORD *)&v77 + 1);
    v42 = 3 * v40;
    *(_QWORD *)(*((_QWORD *)&v77 + 1) + 8 * v42) = v81;
    *(_QWORD *)(v41 + 8 * v42 + 8) = v76;
    *(_QWORD *)(v41 + 8 * v42 + 16) = v39;
    v78 = v40 + 1;
    sub_140BAC840(&v66);
    v43 = *a6;
    v44 = a6[1];
    v45 = a6[2];
    *(_OWORD *)(a1 + 88) = a6[3];
    *(_OWORD *)(a1 + 72) = v45;
    *(_OWORD *)(a1 + 56) = v44;
    *(_OWORD *)(a1 + 40) = v43;
    *(_OWORD *)(a1 + 16) = v77;
    *(_QWORD *)(a1 + 32) = v78;
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
    result = (unsigned int)(v26 - 2);
    if ( (unsigned int)result >= 2 && (v25 & 3) != 0 )
    {
      *((_QWORD *)&v66 + 1) = v25 - 1;
      LOBYTE(v66) = 3;
      v84 = 0;
      v83 = 0;
      return sub_1416BCB00((char *)&v66 + 8);
    }
  }
  else
  {
    v27 = *((_QWORD *)a6 + 9);
    v28 = *((_QWORD *)a6 + 10);
    v84 = 1;
    v83 = 1;
    sub_140D1EE10((unsigned int)&v66, v27, v28, (unsigned int)&unk_141A39BD6, 3);
    v76 = *((_QWORD *)&v66 + 1);
    v81 = (__int64 *)v66;
    sub_141026C20((unsigned int)&v58, a2, v9, v64, v65, *((__int64 *)&v66 + 1), v67);
    if ( (_DWORD)v58 != -1 )
    {
      v71 = v63;
      v70 = v62;
      v69 = v61;
      v68 = v60;
      v67 = v59;
      v66 = v58;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v77 = &v66;
        *((_QWORD *)&v77 + 1) = sub_14104A7D0;
        v72 = (__int64 *)aCodexmateLibCo_31;
        *(_QWORD *)&v73 = 45;
        *((_QWORD *)&v73 + 1) = aCodexmateLibCo_31;
        v74 = 45;
        v75 = &off_141A39EC0;
        sub_140BAD520(&unk_141A39E7E, &v77, 2, &v72);
      }
      sub_140BAC840(&v66);
    }
    if ( v81 )
      sub_140001660(v76, v81, 1);
    v84 = 1;
    v83 = 1;
    v29 = sub_14167FD50(&v47);
    v58 = 0x3E8 * (unsigned __int128)(unsigned __int64)v29 + v30 / 0xF4240uLL;
    v72 = *((__int64 **)a6 + 10);
    *(_QWORD *)&v66 = &v64;
    *((_QWORD *)&v66 + 1) = sub_140186EE0;
    *(_QWORD *)&v67 = &v58;
    *((_QWORD *)&v67 + 1) = sub_1416B95D0;
    *(_QWORD *)&v68 = &v72;
    *((_QWORD *)&v68 + 1) = sub_1416BCB10;
    v84 = 1;
    v83 = 1;
    sub_1416ABFD0(&v49, &unk_141A39ED8, &v66);
    LOBYTE(v77) = v9;
    v81 = v50;
    v72 = v50;
    *(_QWORD *)&v73 = v51;
    *(_QWORD *)&v66 = &v77;
    *((_QWORD *)&v66 + 1) = sub_140C98D50;
    *(_QWORD *)&v67 = &v72;
    *((_QWORD *)&v67 + 1) = sub_140186EE0;
    sub_1416ABFD0(&v58, &unk_141A39D2E, &v66);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aDegraded, 8, (__int64)&v58);
    if ( v49 )
      sub_140001660(v81, v49, 1);
    v31 = *a6;
    v32 = a6[1];
    v33 = a6[2];
    *(_OWORD *)(a1 + 88) = a6[3];
    *(_OWORD *)(a1 + 72) = v33;
    *(_OWORD *)(a1 + 56) = v32;
    *(_OWORD *)(a1 + 40) = v31;
    *(_OWORD *)(a1 + 16) = a6[4];
    result = *((_QWORD *)a6 + 10);
    *(_QWORD *)(a1 + 32) = result;
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
  }
  return result;
}
