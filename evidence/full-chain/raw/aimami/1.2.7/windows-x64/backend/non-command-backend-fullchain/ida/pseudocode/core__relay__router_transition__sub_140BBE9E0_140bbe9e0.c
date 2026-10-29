// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bbe9e0 | name sub_140BBE9E0
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BBE9E0(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 *a7,
        unsigned __int8 *a8,
        _OWORD *a9)
{
  unsigned int v9; // ebx
  int v10; // r14d
  int v13; // edx
  int v14; // r9d
  __m128i v15; // xmm0
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
  __int64 (__fastcall *v31)(unsigned __int64); // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __m128i *v34; // rax
  __m128i *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int128 v40; // [rsp+50h] [rbp-30h] BYREF
  __int128 v41; // [rsp+60h] [rbp-20h]
  __int128 v42; // [rsp+70h] [rbp-10h]
  __int128 v43; // [rsp+80h] [rbp+0h]
  __int128 v44; // [rsp+90h] [rbp+10h]
  __int128 v45; // [rsp+A0h] [rbp+20h]
  _QWORD v46[2]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v47; // [rsp+1E0h] [rbp+160h] BYREF
  int v48; // [rsp+1E8h] [rbp+168h]
  __int64 v49; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v50; // [rsp+1F8h] [rbp+178h]
  __int64 v51; // [rsp+208h] [rbp+188h] BYREF
  __m128i v52; // [rsp+210h] [rbp+190h]
  unsigned __int128 v53; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v54; // [rsp+230h] [rbp+1B0h]
  __int128 v55; // [rsp+240h] [rbp+1C0h]
  __int128 v56; // [rsp+250h] [rbp+1D0h]
  __int128 v57; // [rsp+260h] [rbp+1E0h]
  __int128 v58; // [rsp+270h] [rbp+1F0h]
  unsigned __int128 v59; // [rsp+280h] [rbp+200h] BYREF
  __int128 v60; // [rsp+290h] [rbp+210h]
  __int128 v61; // [rsp+2A0h] [rbp+220h]
  __int128 v62; // [rsp+2B0h] [rbp+230h]
  __int128 v63; // [rsp+2C0h] [rbp+240h]
  __int128 v64; // [rsp+2D0h] [rbp+250h]
  _BYTE v65[24]; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v66; // [rsp+2F8h] [rbp+278h] BYREF
  __int64 v67; // [rsp+300h] [rbp+280h]
  __int64 v68; // [rsp+308h] [rbp+288h]
  _BYTE v69[24]; // [rsp+310h] [rbp+290h] BYREF
  char v70; // [rsp+32Eh] [rbp+2AEh] BYREF
  char v71; // [rsp+32Fh] [rbp+2AFh] BYREF
  __int64 v72; // [rsp+330h] [rbp+2B0h]
  char v73; // [rsp+33Dh] [rbp+2BDh]
  char v74; // [rsp+33Eh] [rbp+2BEh]
  char v75; // [rsp+33Fh] [rbp+2BFh]
  __int64 v76; // [rsp+340h] [rbp+2C0h]

  v76 = -2;
  v10 = a4;
  LOBYTE(v9) = a3;
  v66 = a4;
  v67 = a5;
  v75 = 1;
  v74 = 1;
  v47 = sub_14167FC00();
  v48 = v13;
  v75 = 1;
  v74 = 1;
  sub_1410255B0((unsigned int)&v59, a2, v9, v10, a5);
  if ( (_DWORD)v59 != -1 )
  {
    v58 = v64;
    v57 = v63;
    v56 = v62;
    v55 = v61;
    v54 = v60;
    v53 = v59;
LABEL_7:
    v45 = v58;
    v44 = v57;
    v43 = v56;
    v42 = v55;
    v41 = v54;
    v40 = v53;
    *(_QWORD *)v69 = 0;
    *(_QWORD *)&v69[8] = 1;
    *(_QWORD *)&v69[16] = 0;
    *(_QWORD *)&v60 = 1610612768;
    *(_QWORD *)&v59 = v69;
    *((_QWORD *)&v59 + 1) = &off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(&v40, &v59) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v70,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v68 = *(_QWORD *)&v69[8];
    v72 = *(_QWORD *)v69;
    sub_140C75030((__int128 *)a2, (__int128 *)v9);
    if ( v72 )
      sub_140001660(v68, v72, 1);
    *(_QWORD *)&v59 = &v66;
    *((_QWORD *)&v59 + 1) = sub_140186EE0;
    *(_QWORD *)&v60 = &v40;
    *((_QWORD *)&v60 + 1) = sub_14104A7D0;
    sub_1416ABFD0(v65, &unk_141A39F29, &v59);
    v71 = v9;
    v72 = *(_QWORD *)&v65[8];
    v46[0] = *(_QWORD *)&v65[8];
    v46[1] = *(_QWORD *)&v65[16];
    *(_QWORD *)&v59 = &v71;
    *((_QWORD *)&v59 + 1) = sub_140C98D50;
    *(_QWORD *)&v60 = v46;
    *((_QWORD *)&v60 + 1) = sub_140186EE0;
    sub_1416ABFD0(v69, &unk_141A39D2E, &v59);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitFailed, 13, (__int64)v69);
    if ( *(_QWORD *)v65 )
      sub_140001660(v72, *(_QWORD *)v65, 1);
    v15 = (__m128i)v40;
    v16 = v42;
    v17 = v43;
    *(_OWORD *)(a1 + 24) = v41;
    *(_OWORD *)(a1 + 40) = v16;
    *(_OWORD *)(a1 + 56) = v17;
    *(_OWORD *)(a1 + 72) = v44;
    *(_OWORD *)(a1 + 88) = v45;
    *(__m128i *)(a1 + 8) = v15;
    *(_QWORD *)a1 = -1;
    sub_140035660(&a6[4]);
    if ( a6->m128i_i32[0] != 2 )
      sub_140BAD350(a6);
    v18 = a6[9].m128i_i64[1];
    if ( v18 )
    {
      v19 = (_QWORD *)(a6[9].m128i_i64[0] + 8);
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
    result = a6[8].m128i_i64[1];
    if ( result )
      return sub_140001660(a6[9].m128i_i64[0], 24 * result, 8);
    return result;
  }
  *(_QWORD *)v69 = a6;
  *(_OWORD *)&v69[8] = *a9;
  if ( a6->m128i_i32[0] == 2 )
  {
    v75 = 1;
    v74 = 1;
    sub_140D9A5F0((__int64)&v40, (__int64)a7);
    *(_OWORD *)&v65[1] = *a9;
    v65[0] = 1;
    v75 = 1;
    v74 = 1;
    sub_140D82750((__m128i *)&v53, a7, (const __m128i *)&v40, (const __m128i *)v65);
  }
  else
  {
    v14 = *a8;
    v75 = 1;
    v74 = 1;
    sub_140D883F0((unsigned int)&v53, (_DWORD)a7, (_DWORD)a6, v14, (__int64)&v69[8]);
  }
  if ( (_QWORD)v53 != -1 )
    goto LABEL_7;
  v75 = 1;
  v74 = 1;
  v22 = sub_1401BD880(*((_QWORD *)&v53 + 1));
  v25 = v22;
  if ( v22 )
  {
    *(_QWORD *)v65 = v22;
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
        v73 = 1;
        v31 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v24, v23) + 8);
        v73 = 1;
        LOBYTE(v22) = v31(HIDWORD(v25));
        break;
      case 3uLL:
        v22 >>= 32;
        break;
    }
    LOBYTE(v59) = v22;
    *(_QWORD *)&v40 = &v59;
    *((_QWORD *)&v40 + 1) = sub_140C9E0F0;
    v73 = 1;
    sub_1416ABFD0(&v51, &unk_141A39D4C, &v40);
    v69[0] = v9;
    v72 = v52.m128i_i64[0];
    v53 = (unsigned __int128)v52;
    *(_QWORD *)&v40 = v69;
    *((_QWORD *)&v40 + 1) = sub_140C98D50;
    *(_QWORD *)&v41 = &v53;
    *((_QWORD *)&v41 + 1) = sub_140186EE0;
    sub_1416ABFD0(&v59, &unk_141A39D2E, &v40);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitSyncUnco, 23, (__int64)&v59);
    if ( v51 )
      sub_140001660(v72, v51, 1);
    v32 = *(_QWORD *)(a2 + 776);
    v33 = *(_QWORD *)(a2 + 784);
    v73 = 1;
    sub_1410237A0(v32, v33, v9, (unsigned int)&unk_141A6FF17, 23, v66, v67, (__int64)&unk_141A702FA, 28);
    *(_QWORD *)&v69[16] = a6[9].m128i_i64[1];
    *(__m128i *)v69 = *(const __m128i *)((char *)a6 + 136);
    nullsub_1(a6);
    v34 = (__m128i *)sub_140001650(170, 1);
    if ( !v34 )
      sub_141938D2B(1, 170);
    v35 = v34;
    sub_1418F44E0(v34, (const __m128i *)aRouterCommitRe, 0xAAu);
    *((_QWORD *)&v40 + 1) = 170;
    *(_QWORD *)&v41 = v35;
    *((_QWORD *)&v41 + 1) = 170;
    *(_QWORD *)&v40 = 10;
    *(_QWORD *)&v53 = 0;
    *((_QWORD *)&v53 + 1) = 1;
    *(_QWORD *)&v54 = 0;
    *(_QWORD *)&v60 = 1610612768;
    *(_QWORD *)&v59 = &v53;
    *((_QWORD *)&v59 + 1) = &off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(&v40, &v59) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v70,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v68 = *((_QWORD *)&v53 + 1);
    v72 = v53;
    v36 = v54;
    v37 = *(_QWORD *)&v69[16];
    if ( *(_QWORD *)&v69[16] == *(_QWORD *)v69 )
      sub_14190FDC0(v69);
    v38 = *(_QWORD *)&v69[8];
    v39 = 3 * v37;
    *(_QWORD *)(*(_QWORD *)&v69[8] + 8 * v39) = v72;
    *(_QWORD *)(v38 + 8 * v39 + 8) = v68;
    *(_QWORD *)(v38 + 8 * v39 + 16) = v36;
    *(_QWORD *)&v69[16] = v37 + 1;
    sub_140BAC840(&v40);
    sub_1418F44E0((__m128i *)(a1 + 32), a6, 0x88u);
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v69;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v69[16];
    *(_QWORD *)a1 = 2;
    result = (unsigned int)(v26 - 2);
    if ( (unsigned int)result >= 2 && (v25 & 3) != 0 )
    {
      *((_QWORD *)&v40 + 1) = v25 - 1;
      LOBYTE(v40) = 3;
      v75 = 0;
      v74 = 0;
      return sub_1416BCB00((char *)&v40 + 8);
    }
  }
  else
  {
    v27 = a6[9].m128i_i64[0];
    v28 = a6[9].m128i_i64[1];
    v75 = 1;
    v74 = 1;
    sub_140D1EE10((unsigned int)&v40, v27, v28, (unsigned int)&unk_141A39BD6, 3);
    v68 = *((_QWORD *)&v40 + 1);
    v72 = v40;
    sub_141026C20((unsigned int)&v59, a2, v9, v66, v67, *((__int64 *)&v40 + 1), v41);
    if ( (_DWORD)v59 != -1 )
    {
      v45 = v64;
      v44 = v63;
      v43 = v62;
      v42 = v61;
      v41 = v60;
      v40 = v59;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v69 = &v40;
        *(_QWORD *)&v69[8] = sub_14104A7D0;
        *(_QWORD *)&v53 = aCodexmateLibCo_31;
        *((_QWORD *)&v53 + 1) = 45;
        *(_QWORD *)&v54 = aCodexmateLibCo_31;
        *((_QWORD *)&v54 + 1) = 45;
        *(_QWORD *)&v55 = &off_141A39EC0;
        sub_140BAD520(&unk_141A39E7E, v69, 2, &v53);
      }
      sub_140BAC840(&v40);
    }
    if ( v72 )
      sub_140001660(v68, v72, 1);
    v75 = 1;
    v74 = 1;
    v29 = sub_14167FD50(&v47);
    v59 = 0x3E8 * (unsigned __int128)(unsigned __int64)v29 + v30 / 0xF4240uLL;
    *(_QWORD *)&v53 = a6[9].m128i_i64[1];
    *(_QWORD *)&v40 = &v66;
    *((_QWORD *)&v40 + 1) = sub_140186EE0;
    *(_QWORD *)&v41 = &v59;
    *((_QWORD *)&v41 + 1) = sub_1416B95D0;
    *(_QWORD *)&v42 = &v53;
    *((_QWORD *)&v42 + 1) = sub_1416BCB10;
    v75 = 1;
    v74 = 1;
    sub_1416ABFD0(&v49, &unk_141A39ED8, &v40);
    v69[0] = v9;
    v72 = v50.m128i_i64[0];
    v53 = (unsigned __int128)v50;
    *(_QWORD *)&v40 = v69;
    *((_QWORD *)&v40 + 1) = sub_140C98D50;
    *(_QWORD *)&v41 = &v53;
    *((_QWORD *)&v41 + 1) = sub_140186EE0;
    sub_1416ABFD0(&v59, &unk_141A39D2E, &v40);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aDegraded, 8, (__int64)&v59);
    if ( v49 )
      sub_140001660(v72, v49, 1);
    sub_1418F44E0((__m128i *)(a1 + 32), a6, 0x88u);
    *(__m128i *)(a1 + 8) = *(const __m128i *)((char *)a6 + 136);
    result = a6[9].m128i_i64[1];
    *(_QWORD *)(a1 + 24) = result;
    *(_QWORD *)a1 = 2;
  }
  return result;
}
