// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140c77690 | name sub_140C77690
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C77690(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 *v8; // r15
  int v9; // ebx
  __int64 v10; // rcx
  __int128 v11; // kr00_16
  char v12; // r14
  __int64 v13; // rcx
  char v14; // al
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _OWORD *v18; // rax
  __int64 v19; // rdx
  _OWORD *v20; // rax
  char v21; // al
  signed __int64 v23; // rbx
  signed __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r12
  int v30; // edx
  char v31; // al
  _QWORD *v32; // r15
  char v33; // r12
  char v34; // r15
  _QWORD *v35; // r15
  __m128i *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbx
  unsigned int v43; // r8d
  __m128i v44; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-40h]
  __int128 v46; // [rsp+48h] [rbp-38h]
  unsigned __int64 v47; // [rsp+58h] [rbp-28h]
  __int128 v48; // [rsp+60h] [rbp-20h]
  __int64 v49; // [rsp+70h] [rbp-10h]
  __int128 v50; // [rsp+78h] [rbp-8h]
  __int64 v51; // [rsp+88h] [rbp+8h]
  __int128 v52; // [rsp+2F8h] [rbp+278h] BYREF
  __int64 v53; // [rsp+308h] [rbp+288h]
  signed __int64 v54; // [rsp+310h] [rbp+290h] BYREF
  signed __int64 v55; // [rsp+318h] [rbp+298h] BYREF
  __int128 v56; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v57; // [rsp+330h] [rbp+2B0h]
  __int64 v58; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v59; // [rsp+348h] [rbp+2C8h]
  unsigned __int8 v60; // [rsp+350h] [rbp+2D0h]
  _DWORD v61[2]; // [rsp+358h] [rbp+2D8h]
  __int64 v62; // [rsp+360h] [rbp+2E0h]
  __int64 v63; // [rsp+368h] [rbp+2E8h]
  __int64 v64; // [rsp+370h] [rbp+2F0h]
  __int128 v65; // [rsp+378h] [rbp+2F8h] BYREF
  const char *v66; // [rsp+388h] [rbp+308h]
  __int64 v67; // [rsp+390h] [rbp+310h]
  char **v68; // [rsp+398h] [rbp+318h]
  char v69; // [rsp+3A6h] [rbp+326h] BYREF
  unsigned __int8 v70; // [rsp+3A7h] [rbp+327h]
  __int64 v71; // [rsp+3A8h] [rbp+328h]
  __int64 v72; // [rsp+3B0h] [rbp+330h]
  char v73; // [rsp+3BEh] [rbp+33Eh]
  char v74; // [rsp+3BFh] [rbp+33Fh]
  __int64 v75; // [rsp+3C0h] [rbp+340h]

  v75 = -2;
  sub_140C86DF0(&v44);
  if ( v44.m128i_i64[0] != -1 )
  {
    *(_QWORD *)(a1 + 24) = v45;
    *(__m128i *)(a1 + 8) = v44;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  v6 = sub_14054A5A0(a2);
  LOBYTE(v7) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v6 + 32), 1, 0) )
    sub_141937480((volatile void *)(v6 + 32));
  v8 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v9 = sub_141938160(v7);
    LOBYTE(v9) = v9 ^ 1;
    if ( *(_BYTE *)(v6 + 33) )
      goto LABEL_7;
  }
  else
  {
    v9 = 0;
    if ( *(_BYTE *)(v6 + 33) )
    {
LABEL_7:
      LODWORD(v71) = v9;
      v72 = v6;
      *(_QWORD *)&v65 = 0;
      *((_QWORD *)&v65 + 1) = 1;
      v66 = nullptr;
      v45 = 1610612768;
      v44.m128i_i64[0] = (__int64)&v65;
      v44.m128i_i64[1] = (__int64)&off_141A3FE88;
      if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, &v44) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v69,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v11 = v65;
      v12 = (char)v66;
      v61[0] = *(_DWORD *)((char *)&v66 + 1);
      *(_DWORD *)((char *)v61 + 3) = HIDWORD(v66);
      if ( !(_BYTE)v71 && 2 * *v8 && !(unsigned __int8)sub_141938160(v10) )
        *(_BYTE *)(v72 + 33) = 1;
      v13 = v72;
      v14 = *(_BYTE *)(v72 + 32);
      *(_BYTE *)(v72 + 32) = 0;
      if ( v14 == 2 )
        WakeByAddressSingle((PVOID)(v13 + 32));
      *(_OWORD *)(a1 + 8) = v11;
      *(_BYTE *)(a1 + 24) = v12;
      v15 = *(_DWORD *)((char *)v61 + 3);
      *(_DWORD *)(a1 + 25) = v61[0];
      *(_DWORD *)(a1 + 28) = v15;
      *(_QWORD *)a1 = 2;
      return a1;
    }
  }
  if ( (unsigned __int8)(*(_BYTE *)(v6 + 867) - 1) < 4u )
  {
    LODWORD(v71) = v9;
    v72 = v6;
    sub_140C19620(&v44, v6 + 40);
    sub_1418F44E0((__m128i *)a1, &v44, 0x2C8u);
    v6 = v72;
    if ( !(_BYTE)v71 )
      goto LABEL_30;
    goto LABEL_31;
  }
  if ( !*(_BYTE *)(v6 + 858) )
  {
    v19 = *(_QWORD *)(v6 + 600);
    if ( v19 != -1 && v19 )
      sub_140001660(*(_QWORD *)(v6 + 608), v19, 1);
    *(_QWORD *)(v6 + 600) = -1;
    nullsub_1(v7);
    v20 = (_OWORD *)sub_140001650(30, 1);
    if ( !v20 )
    {
      LODWORD(v71) = v9;
      v72 = v6;
      sub_141938D2B(1, 30);
    }
    *(_OWORD *)((char *)v20 + 14) = *(__int128 *)((char *)&xmmword_141A3EB5E + 14);
    *v20 = xmmword_141A3EB5E;
    *(_QWORD *)(a1 + 8) = 30;
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = 30;
LABEL_29:
    *(_QWORD *)a1 = 2;
    if ( !(_BYTE)v9 )
    {
LABEL_30:
      if ( 2 * *v8 && !(unsigned __int8)sub_141938160(v16) )
        *(_BYTE *)(v6 + 33) = 1;
    }
LABEL_31:
    v21 = *(_BYTE *)(v6 + 32);
    *(_BYTE *)(v6 + 32) = 0;
    if ( v21 == 2 )
      WakeByAddressSingle((PVOID)(v6 + 32));
    return a1;
  }
  if ( *(_BYTE *)(v6 + 864) )
  {
    v17 = *(_QWORD *)(v6 + 600);
    if ( v17 != -1 && v17 )
      sub_140001660(*(_QWORD *)(v6 + 608), v17, 1);
    *(_QWORD *)(v6 + 600) = -1;
    nullsub_1(v7);
    v18 = (_OWORD *)sub_140001650(27, 1);
    if ( !v18 )
    {
      LODWORD(v71) = v9;
      v72 = v6;
      sub_141938D2B(1, 27);
    }
    *(_OWORD *)((char *)v18 + 11) = *(__int128 *)((char *)&xmmword_141A3EBE0 + 11);
    *v18 = xmmword_141A3EBE0;
    *(_QWORD *)(a1 + 8) = 27;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = 27;
    goto LABEL_29;
  }
  LODWORD(v71) = v9;
  v23 = _InterlockedIncrement64(&qword_1421E74B8);
  v54 = v23;
  v24 = _InterlockedIncrement64(&qword_1421E74D0);
  v55 = v24;
  v45 = *(_QWORD *)(v6 + 616);
  v44 = *(__m128i *)(v6 + 600);
  *(_QWORD *)(v6 + 600) = -1;
  v25 = *(_QWORD *)(v6 + 624);
  if ( v25 != -1 && v25 )
    sub_140001660(*(_QWORD *)(v6 + 632), v25, 1);
  *(_QWORD *)(v6 + 640) = v45;
  *(__m128i *)(v6 + 624) = v44;
  *(_QWORD *)(v6 + 832) = v24;
  *(_QWORD *)(v6 + 840) = v23;
  *(_BYTE *)(v6 + 867) = 1;
  *(_QWORD *)(v6 + 328) = 0;
  *(_QWORD *)(v6 + 352) = 0;
  v26 = *(_QWORD *)(v6 + 672);
  if ( v26 != -1 && v26 )
    sub_140001660(*(_QWORD *)(v6 + 680), v26, 1);
  v72 = v6;
  *(_QWORD *)(v6 + 672) = -1;
  v27 = sub_14167FC00(v7, v26, v4, v5);
  v29 = v72;
  *(_QWORD *)(v72 + 720) = v27;
  *(_DWORD *)(v29 + 728) = v30;
  if ( !(_BYTE)v71 && 2 * *v8 && !(unsigned __int8)sub_141938160(v28) )
    *(_BYTE *)(v29 + 33) = 1;
  v31 = *(_BYTE *)(v29 + 32);
  *(_BYTE *)(v29 + 32) = 0;
  if ( v31 == 2 )
    WakeByAddressSingle((PVOID)(v29 + 32));
  sub_1406119B0(&v44, a2);
  sub_14047D690(&v44, v24);
  v32 = (_QWORD *)sub_14054A5A0(a2);
  (*(void (__fastcall **)(__m128i *, _QWORD))(v32[1] + 24LL))(&v44, *v32);
  v71 = v44.m128i_i64[1];
  v74 = 1;
  if ( v45 >= 0x20 )
    sub_1416B3400(v44.m128i_i64[1], v45);
  else
    sub_1416B3A20(v44.m128i_i64[1], v45);
  v62 = *((_QWORD *)&v46 + 1);
  v74 = 1;
  if ( v47 >= 0x20 )
    sub_1416B3400(*((_QWORD *)&v46 + 1), v47);
  else
    sub_1416B3A20(*((_QWORD *)&v46 + 1), v47);
  v74 = 1;
  v63 = *((_QWORD *)&v48 + 1);
  sub_140E91160(*((_QWORD *)&v48 + 1), v49);
  v74 = 1;
  v64 = *((_QWORD *)&v50 + 1);
  sub_140E91160(*((_QWORD *)&v50 + 1), v51);
  v74 = 1;
  sub_140D9F290(&v58, v32 + 4);
  v33 = v58;
  v72 = v58;
  if ( v58 )
  {
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v65 = aCodexmateLibCo_32;
      *((_QWORD *)&v65 + 1) = 35;
      v66 = aCodexmateLibCo_32;
      v67 = 35;
      v68 = &off_141A3EBC8;
      v73 = 1;
      sub_140BAD520("[TypeMami] failed to capture foreground context: runtime lock poisoned", 141, 2, &v65);
      v33 = v72;
    }
    v74 = 1;
    v34 = 1;
    sub_140021100(&v58);
  }
  else
  {
    v35 = (_QWORD *)v59;
    v70 = v60;
    v36 = (__m128i *)(v59 + 328);
    v37 = *(_QWORD *)(v59 + 328);
    if ( v37 )
      sub_140001660(*(_QWORD *)(v59 + 336), v37, 1);
    v36[1].m128i_i64[0] = v45;
    *v36 = v44;
    v38 = v35[44];
    if ( v38 )
      sub_140001660(v35[45], v38, 1);
    v35[46] = v47;
    *((_OWORD *)v35 + 22) = v46;
    v39 = v35[47];
    if ( v39 )
      sub_140001660(v35[48], v39, 1);
    v35[49] = v49;
    *(_OWORD *)(v35 + 47) = v48;
    v40 = v35[50];
    if ( v40 )
      sub_140001660(v35[51], v40, 1);
    v35[52] = v51;
    *((_OWORD *)v35 + 25) = v50;
    v73 = 0;
    sub_140028CC0(v35, v70);
    v34 = 0;
    v33 = v72;
  }
  v74 = v34;
  sub_140C75E50(&v65, a2);
  if ( (_QWORD)v65 != -1 )
  {
    *(_QWORD *)(a1 + 24) = v66;
    *(_OWORD *)(a1 + 8) = v65;
    *(_QWORD *)a1 = 2;
    if ( !v33 )
      return a1;
    goto LABEL_72;
  }
  v74 = v34;
  sub_140C81E50(&v52, a2, v24, v23);
  if ( (_QWORD)v52 == -1 )
  {
    if ( v33 )
    {
      if ( v44.m128i_i64[0] )
        sub_140001660(v71, v44.m128i_i64[0], 1);
      if ( (_QWORD)v46 )
        sub_140001660(v62, v46, 1);
      if ( (_QWORD)v48 )
        sub_140001660(v63, v48, 1);
      if ( (_QWORD)v50 )
        sub_140001660(v64, v50, 1);
    }
    sub_140C76310(a1, a2);
  }
  else
  {
    v57 = v53;
    v56 = v52;
    v41 = sub_14054A5A0(a2);
    sub_140D9F290(&v58, v41 + 32);
    *(_QWORD *)&v65 = &v55;
    *((_QWORD *)&v65 + 1) = &v54;
    v66 = (const char *)&v56;
    v42 = v59;
    v43 = v60;
    if ( !(_BYTE)v58 )
    {
      sub_140C16310(&v65, v59, v60);
      LOBYTE(v43) = 2;
    }
    sub_14001FD10(v42, v43);
    sub_140C75E50(&v65, a2);
    if ( (__int64)v65 > 0 )
      sub_140001660(*((_QWORD *)&v65 + 1), v65, 1);
    *(_QWORD *)(a1 + 24) = v57;
    *(_OWORD *)(a1 + 8) = v56;
    *(_QWORD *)a1 = 2;
    if ( (_BYTE)v72 )
    {
LABEL_72:
      if ( v44.m128i_i64[0] )
        sub_140001660(v71, v44.m128i_i64[0], 1);
      if ( (_QWORD)v46 )
        sub_140001660(v62, v46, 1);
      if ( (_QWORD)v48 )
        sub_140001660(v63, v48, 1);
      if ( (_QWORD)v50 )
        sub_140001660(v64, v50, 1);
    }
  }
  return a1;
}
