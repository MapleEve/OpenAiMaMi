// module: codexmate_lib/core/voice/runtime
// addr: 0x140874ec0
// name: sub_140874EC0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140874EC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 *v8; // r15
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // kr00_16
  char v13; // r14
  __int64 v14; // rcx
  char v15; // al
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  _OWORD *v22; // rax
  char v23; // al
  signed __int64 v25; // rbx
  signed __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r12
  char v33; // al
  _QWORD *v34; // r15
  char v35; // r12
  char v36; // r15
  _QWORD *v37; // r15
  _QWORD *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // rbx
  unsigned int v45; // r8d
  __int128 v46; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-40h]
  __int128 v48; // [rsp+48h] [rbp-38h]
  unsigned __int64 v49; // [rsp+58h] [rbp-28h]
  __int128 v50; // [rsp+60h] [rbp-20h]
  __int64 v51; // [rsp+70h] [rbp-10h]
  __int128 v52; // [rsp+78h] [rbp-8h]
  __int64 v53; // [rsp+88h] [rbp+8h]
  __int128 v54; // [rsp+2F8h] [rbp+278h] BYREF
  __int64 v55; // [rsp+308h] [rbp+288h]
  signed __int64 v56; // [rsp+310h] [rbp+290h] BYREF
  signed __int64 v57; // [rsp+318h] [rbp+298h] BYREF
  __int128 v58; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v59; // [rsp+330h] [rbp+2B0h]
  __int64 v60; // [rsp+340h] [rbp+2C0h] BYREF
  _QWORD *v61; // [rsp+348h] [rbp+2C8h]
  unsigned __int8 v62; // [rsp+350h] [rbp+2D0h]
  _DWORD v63[2]; // [rsp+358h] [rbp+2D8h]
  __int64 v64; // [rsp+360h] [rbp+2E0h]
  __int64 v65; // [rsp+368h] [rbp+2E8h]
  __int64 v66; // [rsp+370h] [rbp+2F0h]
  __int128 v67; // [rsp+378h] [rbp+2F8h] BYREF
  const char *v68; // [rsp+388h] [rbp+308h]
  __int64 v69; // [rsp+390h] [rbp+310h]
  char **v70; // [rsp+398h] [rbp+318h]
  char v71; // [rsp+3A6h] [rbp+326h] BYREF
  unsigned __int8 v72; // [rsp+3A7h] [rbp+327h]
  __int64 v73; // [rsp+3A8h] [rbp+328h]
  __int64 v74; // [rsp+3B0h] [rbp+330h]
  char v75; // [rsp+3BEh] [rbp+33Eh]
  char v76; // [rsp+3BFh] [rbp+33Fh]
  __int64 v77; // [rsp+3C0h] [rbp+340h]

  v77 = -2;
  sub_1408846D0(&v46);
  if ( (_QWORD)v46 != -1 )
  {
    *(_QWORD *)(a1 + 24) = v47;
    *(_OWORD *)(a1 + 8) = v46;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  v6 = sub_1400640A0(a2);
  LOBYTE(v7) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v6 + 32), 1, 0) )
    sub_1416C15B0((volatile void *)(v6 + 32));
  v8 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v9 = sub_1416C2250(v7, v4);
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
      LODWORD(v73) = v9;
      v74 = v6;
      *(_QWORD *)&v67 = 0;
      *((_QWORD *)&v67 + 1) = 1;
      v68 = nullptr;
      v47 = 1610612768;
      *(_QWORD *)&v46 = &v67;
      *((_QWORD *)&v46 + 1) = &off_141799500;
      if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v46) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v71,
          (unsigned int)&unk_141796270,
          (__int64)&off_1417995B8);
      v12 = v67;
      v13 = (char)v68;
      v63[0] = *(_DWORD *)((char *)&v68 + 1);
      *(_DWORD *)((char *)v63 + 3) = HIDWORD(v68);
      if ( !(_BYTE)v73 && 2 * *v8 && !(unsigned __int8)sub_1416C2250(v11, v10) )
        *(_BYTE *)(v74 + 33) = 1;
      v14 = v74;
      v15 = *(_BYTE *)(v74 + 32);
      *(_BYTE *)(v74 + 32) = 0;
      if ( v15 == 2 )
        WakeByAddressSingle((PVOID)(v14 + 32));
      *(_OWORD *)(a1 + 8) = v12;
      *(_BYTE *)(a1 + 24) = v13;
      v16 = *(_DWORD *)((char *)v63 + 3);
      *(_DWORD *)(a1 + 25) = v63[0];
      *(_DWORD *)(a1 + 28) = v16;
      *(_QWORD *)a1 = 2;
      return a1;
    }
  }
  if ( (unsigned __int8)(*(_BYTE *)(v6 + 867) - 1) < 4u )
  {
    LODWORD(v73) = v9;
    v74 = v6;
    sub_14083F820(&v46, v6 + 40);
    sub_141684120(a1, &v46, 712);
    v6 = v74;
    if ( !(_BYTE)v73 )
      goto LABEL_30;
    goto LABEL_31;
  }
  if ( !*(_BYTE *)(v6 + 858) )
  {
    v21 = *(_QWORD *)(v6 + 600);
    if ( v21 != -1 && v21 )
      sub_140001660(*(_QWORD *)(v6 + 608), v21, 1);
    *(_QWORD *)(v6 + 600) = -1;
    nullsub_1(v7);
    v22 = (_OWORD *)sub_140001650(30, 1);
    if ( !v22 )
    {
      LODWORD(v73) = v9;
      v74 = v6;
      sub_1416C2D4B(1, 30);
    }
    *(_OWORD *)((char *)v22 + 14) = *(__int128 *)((char *)&xmmword_141798CB8 + 14);
    *v22 = xmmword_141798CB8;
    *(_QWORD *)(a1 + 8) = 30;
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 24) = 30;
LABEL_29:
    *(_QWORD *)a1 = 2;
    if ( !(_BYTE)v9 )
    {
LABEL_30:
      if ( 2 * *v8 && !(unsigned __int8)sub_1416C2250(v18, v17) )
        *(_BYTE *)(v6 + 33) = 1;
    }
LABEL_31:
    v23 = *(_BYTE *)(v6 + 32);
    *(_BYTE *)(v6 + 32) = 0;
    if ( v23 == 2 )
      WakeByAddressSingle((PVOID)(v6 + 32));
    return a1;
  }
  if ( *(_BYTE *)(v6 + 864) )
  {
    v19 = *(_QWORD *)(v6 + 600);
    if ( v19 != -1 && v19 )
      sub_140001660(*(_QWORD *)(v6 + 608), v19, 1);
    *(_QWORD *)(v6 + 600) = -1;
    nullsub_1(v7);
    v20 = (_OWORD *)sub_140001650(27, 1);
    if ( !v20 )
    {
      LODWORD(v73) = v9;
      v74 = v6;
      sub_1416C2D4B(1, 27);
    }
    *(_OWORD *)((char *)v20 + 11) = *(__int128 *)((char *)&xmmword_141798D38 + 11);
    *v20 = xmmword_141798D38;
    *(_QWORD *)(a1 + 8) = 27;
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = 27;
    goto LABEL_29;
  }
  LODWORD(v73) = v9;
  v25 = _InterlockedIncrement64(&qword_141EC9330);
  v56 = v25;
  v26 = _InterlockedIncrement64(&qword_141EC9338);
  v57 = v26;
  v47 = *(_QWORD *)(v6 + 616);
  v46 = *(_OWORD *)(v6 + 600);
  *(_QWORD *)(v6 + 600) = -1;
  v27 = *(_QWORD *)(v6 + 624);
  if ( v27 != -1 && v27 )
    sub_140001660(*(_QWORD *)(v6 + 632), v27, 1);
  *(_QWORD *)(v6 + 640) = v47;
  *(_OWORD *)(v6 + 624) = v46;
  *(_QWORD *)(v6 + 832) = v26;
  *(_QWORD *)(v6 + 840) = v25;
  *(_BYTE *)(v6 + 867) = 1;
  *(_QWORD *)(v6 + 328) = 0;
  *(_QWORD *)(v6 + 352) = 0;
  v28 = *(_QWORD *)(v6 + 672);
  if ( v28 != -1 && v28 )
    sub_140001660(*(_QWORD *)(v6 + 680), v28, 1);
  v74 = v6;
  *(_QWORD *)(v6 + 672) = -1;
  v29 = sub_141471910(v7, v28, v5);
  v32 = v74;
  *(_QWORD *)(v74 + 720) = v29;
  *(_DWORD *)(v32 + 728) = v30;
  if ( !(_BYTE)v73 && 2 * *v8 && !(unsigned __int8)sub_1416C2250(v31, v30) )
    *(_BYTE *)(v32 + 33) = 1;
  v33 = *(_BYTE *)(v32 + 32);
  *(_BYTE *)(v32 + 32) = 0;
  if ( v33 == 2 )
    WakeByAddressSingle((PVOID)(v32 + 32));
  sub_1401C3030(&v46, a2);
  sub_140971960(&v46, v26);
  v34 = (_QWORD *)sub_1400640A0(a2);
  (*(void (__fastcall **)(__int128 *, _QWORD))(v34[1] + 24LL))(&v46, *v34);
  v73 = *((_QWORD *)&v46 + 1);
  v76 = 1;
  if ( v47 >= 0x20 )
    sub_1414A35B0(*((_QWORD *)&v46 + 1), v47);
  else
    sub_1414A3BD0(*((_QWORD *)&v46 + 1), v47);
  v64 = *((_QWORD *)&v48 + 1);
  v76 = 1;
  if ( v49 >= 0x20 )
    sub_1414A35B0(*((_QWORD *)&v48 + 1), v49);
  else
    sub_1414A3BD0(*((_QWORD *)&v48 + 1), v49);
  v66 = *((_QWORD *)&v50 + 1);
  sub_14033BC10(*((_QWORD *)&v50 + 1), v51);
  v65 = *((_QWORD *)&v52 + 1);
  sub_14033BC10(*((_QWORD *)&v52 + 1), v53);
  v76 = 1;
  sub_140B93B50(&v60, v34 + 4);
  v35 = v60;
  v74 = v60;
  if ( v60 )
  {
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v67 = aCodexmateLibCo_6;
      *((_QWORD *)&v67 + 1) = 35;
      v68 = aCodexmateLibCo_6;
      v69 = 35;
      v70 = &off_141798D20;
      v75 = 1;
      sub_140985BA0("[TypeMami] failed to capture foreground context: runtime lock poisoned", 141, 2, &v67);
      v35 = v74;
    }
    v76 = 1;
    v36 = 1;
    sub_140009340(&v60);
  }
  else
  {
    v37 = v61;
    v72 = v62;
    v38 = v61 + 41;
    v39 = v61[41];
    if ( v39 )
      sub_140001660(v61[42], v39, 1);
    v38[2] = v47;
    *(_OWORD *)v38 = v46;
    v40 = v37[44];
    if ( v40 )
      sub_140001660(v37[45], v40, 1);
    v37[46] = v49;
    *((_OWORD *)v37 + 22) = v48;
    v41 = v37[47];
    if ( v41 )
      sub_140001660(v37[48], v41, 1);
    v37[49] = v51;
    *(_OWORD *)(v37 + 47) = v50;
    v42 = v37[50];
    if ( v42 )
      sub_140001660(v37[51], v42, 1);
    v37[52] = v53;
    *((_OWORD *)v37 + 25) = v52;
    v75 = 0;
    sub_14000E270(v37, v72);
    v36 = 0;
    v35 = v74;
  }
  v76 = v36;
  sub_140873770(&v67, a2);
  if ( (_QWORD)v67 != -1 )
  {
    *(_QWORD *)(a1 + 24) = v68;
    *(_OWORD *)(a1 + 8) = v67;
    *(_QWORD *)a1 = 2;
    if ( !v35 )
      return a1;
    goto LABEL_72;
  }
  v76 = v36;
  sub_14087F730(&v54, a2, v26, v25);
  if ( (_QWORD)v54 == -1 )
  {
    if ( v35 )
    {
      if ( (_QWORD)v46 )
        sub_140001660(v73, v46, 1);
      if ( (_QWORD)v48 )
        sub_140001660(v64, v48, 1);
      if ( (_QWORD)v50 )
        sub_140001660(v66, v50, 1);
      if ( (_QWORD)v52 )
        sub_140001660(v65, v52, 1);
    }
    sub_140873C30(a1, a2);
  }
  else
  {
    v59 = v55;
    v58 = v54;
    v43 = sub_1400640A0(a2);
    sub_140B93B50(&v60, v43 + 32);
    *(_QWORD *)&v67 = &v57;
    *((_QWORD *)&v67 + 1) = &v56;
    v68 = (const char *)&v58;
    v44 = v61;
    v45 = v62;
    if ( !(_BYTE)v60 )
    {
      sub_14083F0B0(&v67, v61, v62);
      LOBYTE(v45) = 2;
    }
    sub_1401CC1F0(v44, v45);
    sub_140873770(&v67, a2);
    if ( (__int64)v67 > 0 )
      sub_140001660(*((_QWORD *)&v67 + 1), v67, 1);
    *(_QWORD *)(a1 + 24) = v59;
    *(_OWORD *)(a1 + 8) = v58;
    *(_QWORD *)a1 = 2;
    if ( (_BYTE)v74 )
    {
LABEL_72:
      if ( (_QWORD)v46 )
        sub_140001660(v73, v46, 1);
      if ( (_QWORD)v48 )
        sub_140001660(v64, v48, 1);
      if ( (_QWORD)v50 )
        sub_140001660(v66, v50, 1);
      if ( (_QWORD)v52 )
        sub_140001660(v65, v52, 1);
    }
  }
  return a1;
}