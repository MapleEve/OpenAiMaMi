// addr: 0x14084a590
// name (owner-map): sub_14084A590
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14084A590(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v13; // r15
  __int64 *v14; // r13
  int v15; // r12d
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // cl
  __int64 v20; // r12
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID v24; // rcx
  char v25; // al
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 v28; // r13
  void *v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  char v34; // al
  int v36; // edx
  int v37; // ecx
  unsigned int v38; // ecx
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  void *v42; // rdi
  void *v43; // rdi
  char v44; // cl
  _BYTE v45[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v46; // [rsp+38h] [rbp-48h]
  __int64 v47; // [rsp+40h] [rbp-40h]
  __int64 v48; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v49; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v50; // [rsp+168h] [rbp+E8h]
  __int128 v51; // [rsp+178h] [rbp+F8h]
  __int128 v52; // [rsp+188h] [rbp+108h]
  __int128 v53; // [rsp+198h] [rbp+118h]
  __int128 v54; // [rsp+1A8h] [rbp+128h]
  _OWORD v55[6]; // [rsp+280h] [rbp+200h] BYREF
  PVOID Address; // [rsp+2E0h] [rbp+260h]
  int v57; // [rsp+2ECh] [rbp+26Ch]
  __int64 v58; // [rsp+2F0h] [rbp+270h]
  int v59; // [rsp+2FCh] [rbp+27Ch]
  __int64 v60; // [rsp+300h] [rbp+280h]

  v60 = -2; /*0x14084a5ab*/
  v6 = a1; /*0x14084a5b9*/
  v7 = a2[2]; /*0x14084a5bc*/
  if ( *(_QWORD *)(v7 + 16) != -1 ) /*0x14084a5c5*/
  {
    sub_14149C500(&v49, v7 + 16); /*0x14084a5d2*/
    v48 = 9; /*0x14084a5d7*/
    *(_OWORD *)(v6 + 88) = v54; /*0x14084a5e9*/
    v8 = v50; /*0x14084a5ed*/
    v9 = v51; /*0x14084a5f4*/
    v10 = v52; /*0x14084a5fb*/
    *(_OWORD *)(v6 + 72) = v53; /*0x14084a609*/
    *(_OWORD *)(v6 + 56) = v10; /*0x14084a60d*/
    *(_OWORD *)(v6 + 40) = v9; /*0x14084a611*/
    *(_OWORD *)(v6 + 24) = v8; /*0x14084a615*/
    *(_QWORD *)(v6 + 8) = v48; /*0x14084a620*/
    *(_QWORD *)(v6 + 16) = v49; /*0x14084a62b*/
    *(_QWORD *)v6 = -1; /*0x14084a62f*/
    return v6; /*0x14084a636*/
  }
  v13 = a2[4]; /*0x14084a641*/
  LOBYTE(a1) = 1; /*0x14084a645*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v13 + 16), 1, 0) ) /*0x14084a649*/
    sub_1416C15B0((volatile void *)(v13 + 16)); /*0x14084a70c*/
  v14 = off_141EC90B8; /*0x14084a655*/
  if ( 2 * *off_141EC90B8 ) /*0x14084a660*/
  {
    v15 = sub_1416C2250(a1, v7); /*0x14084a71b*/
    LOBYTE(v15) = v15 ^ 1; /*0x14084a71e*/
    if ( *(_BYTE *)(v13 + 17) ) /*0x14084a722*/
      goto LABEL_7; /*0x14084a729*/
  }
  else
  {
    v15 = 0; /*0x14084a66c*/
    if ( *(_BYTE *)(v13 + 17) ) /*0x14084a66f*/
    {
LABEL_7:
      nullsub_1(a1); /*0x14084a67c*/
      v16 = (void *)sub_140001650(40, 1); /*0x14084a68b*/
      if ( !v16 ) /*0x14084a693*/
      {
        v59 = v15; /*0x14084ab5f*/
        v58 = v13; /*0x14084ab66*/
        sub_1416C2D4B(1, 40); /*0x14084ab77*/
      }
      qmemcpy(v16, "Codex router transition lock is poisoned", 40); /*0x14084a6ab*/
      if ( !(_BYTE)v15 ) /*0x14084a6bf*/
      {
        v18 = 2 * *v14; /*0x14084a6c5*/
        if ( v18 ) /*0x14084a6cb*/
        {
          v43 = v16; /*0x14084ab27*/
          v44 = sub_1416C2250(v18, v17); /*0x14084ab2f*/
          v16 = v43; /*0x14084ab31*/
          if ( !v44 ) /*0x14084ab36*/
            *(_BYTE *)(v13 + 17) = 1; /*0x14084ab3c*/
        }
      }
      v19 = *(_BYTE *)(v13 + 16); /*0x14084a6d3*/
      *(_BYTE *)(v13 + 16) = 0; /*0x14084a6d3*/
      if ( v19 == 2 ) /*0x14084a6da*/
      {
        v42 = v16; /*0x14084aa9c*/
        WakeByAddressSingle((PVOID)(v13 + 16)); /*0x14084aa9f*/
        v16 = v42; /*0x14084aaa4*/
      }
      *(_QWORD *)(v6 + 8) = 10; /*0x14084a6e0*/
      *(_QWORD *)(v6 + 16) = 40; /*0x14084a6e8*/
      *(_QWORD *)(v6 + 24) = v16; /*0x14084a6f0*/
      *(_QWORD *)(v6 + 32) = 40; /*0x14084a6f4*/
      *(_QWORD *)v6 = -1; /*0x14084a6fc*/
      return v6; /*0x14084a703*/
    }
  }
  v59 = v15; /*0x14084a72f*/
  v58 = v13; /*0x14084a736*/
  v20 = a2[1]; /*0x14084a73d*/
  LOBYTE(a1) = 1; /*0x14084a746*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v20 + 16), 1, 0) ) /*0x14084a74a*/
    sub_1416C15B0((volatile void *)(v20 + 16)); /*0x14084aaaf*/
  if ( 2 * *v14 ) /*0x14084a75b*/
  {
    v21 = sub_1416C2250(a1, v7); /*0x14084aaba*/
    LOBYTE(v21) = v21 ^ 1; /*0x14084aac0*/
    if ( !*(_BYTE *)(v20 + 17) ) /*0x14084aaca*/
      goto LABEL_18; /*0x14084aaca*/
LABEL_46:
    v48 = v20 + 16; /*0x14084aad0*/
    LOBYTE(v49) = v21; /*0x14084aad7*/
    sub_1416C3060( /*0x14084ab03*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v48,
      (unsigned int)&off_141796230,
      (__int64)&off_141796AB0);
  }
  v21 = 0; /*0x14084a767*/
  if ( *(_BYTE *)(v20 + 17) ) /*0x14084a769*/
    goto LABEL_46; /*0x14084a771*/
LABEL_18:
  v57 = v21; /*0x14084a777*/
  Address = (PVOID)(v20 + 16); /*0x14084a77d*/
  sub_140892360(v45, v20 + 24); /*0x14084a78d*/
  if ( !(_BYTE)v57 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v23, v22) ) /*0x14084ab46*/
    *(_BYTE *)(v20 + 17) = 1; /*0x14084ab54*/
  v24 = Address; /*0x14084a7ae*/
  v25 = *(_BYTE *)Address; /*0x14084a7b5*/
  *(_BYTE *)Address = 0; /*0x14084a7b5*/
  if ( v25 == 2 ) /*0x14084a7b9*/
    WakeByAddressSingle(v24); /*0x14084ab0e*/
  if ( !v47 ) /*0x14084a7c6*/
  {
LABEL_29:
    nullsub_1(v24); /*0x14084a844*/
    v29 = (void *)sub_140001650(18, 1); /*0x14084a853*/
    if ( !v29 ) /*0x14084a85b*/
      sub_1416C2D4B(1, 18); /*0x14084ab89*/
    qmemcpy(v29, "provider not found", 18); /*0x14084a868*/
    *(_QWORD *)(v6 + 8) = 10; /*0x14084a871*/
    *(_QWORD *)(v6 + 16) = 18; /*0x14084a879*/
    *(_QWORD *)(v6 + 24) = v29; /*0x14084a881*/
    *(_QWORD *)(v6 + 32) = 18; /*0x14084a885*/
    goto LABEL_31; /*0x14084a885*/
  }
  v26 = v46; /*0x14084a7c8*/
  v27 = 232 * v47; /*0x14084a7cc*/
  v28 = 0; /*0x14084a7d3*/
  while ( *(_QWORD *)(v26 + v28 + 16) != a4 || (unsigned int)sub_1416847B0(*(_QWORD *)(v26 + v28 + 8), a3, a4) ) /*0x14084a805*/
  {
    v28 += 232; /*0x14084a7e0*/
    if ( v27 == v28 ) /*0x14084a7ea*/
      goto LABEL_29; /*0x14084a7ea*/
  }
  if ( *(_BYTE *)(v26 + v28 + 229) == a5 ) /*0x14084a816*/
  {
    sub_1404D4A90(&v48, v45); /*0x14084a827*/
    sub_141684120(v6, &v48, 296); /*0x14084a83d*/
LABEL_32:
    v30 = off_141EC90B8; /*0x14084a894*/
    sub_140018740(v45); /*0x14084a89f*/
    if ( (_BYTE)v59 || !(2 * *v30) ) /*0x14084a8b1*/
      goto LABEL_34; /*0x14084a8b7*/
LABEL_43:
    if ( !(unsigned __int8)sub_1416C2250(v32, v31) ) /*0x14084aa78*/
      *(_BYTE *)(v58 + 17) = 1; /*0x14084aa8c*/
    goto LABEL_34; /*0x14084aa90*/
  }
  *(_BYTE *)(v26 + v28 + 229) = a5; /*0x14084a8e8*/
  sub_140FFA6E0(&v48); /*0x14084a8f7*/
  v36 = ((int)v48 >> 13) - 1; /*0x14084a90a*/
  v37 = 0; /*0x14084a90e*/
  if ( (int)v48 >> 13 <= 0 ) /*0x14084a913*/
  {
    v38 = (1 - ((int)v48 >> 13)) / 0x190u + 1; /*0x14084a928*/
    v36 += 400 * v38; /*0x14084a931*/
    v37 = -146097 * v38; /*0x14084a934*/
  }
  *(_QWORD *)(v26 + v28 + 216) = 1000 /*0x14084a9a4*/
                               * (HIDWORD(v48)
                                + 86400LL
                                * (int)(((v36 / 100) >> 2)
                                      + ((1461 * v36) >> 2)
                                      + v37
                                      + (((unsigned int)v48 >> 4) & 0x1FF)
                                      - v36 / 100
                                      - 719163))
                               + (unsigned int)v49 / 0xF4240uLL;
  sub_140892360(&v48, v45); /*0x14084a9b7*/
  sub_1408582D0(v55, a2, &v48); /*0x14084a9ce*/
  if ( LODWORD(v55[0]) != -1 ) /*0x14084a9db*/
  {
    *(_OWORD *)(v6 + 88) = v55[5]; /*0x14084a9e4*/
    *(_OWORD *)(v6 + 72) = v55[4]; /*0x14084a9ef*/
    v39 = v55[0]; /*0x14084a9f3*/
    v40 = v55[1]; /*0x14084a9fa*/
    v41 = v55[2]; /*0x14084aa01*/
    *(_OWORD *)(v6 + 56) = v55[3]; /*0x14084aa0f*/
    *(_OWORD *)(v6 + 40) = v41; /*0x14084aa13*/
    *(_OWORD *)(v6 + 24) = v40; /*0x14084aa17*/
    *(_OWORD *)(v6 + 8) = v39; /*0x14084aa1b*/
LABEL_31:
    *(_QWORD *)v6 = -1; /*0x14084a88d*/
    goto LABEL_32; /*0x14084a88d*/
  }
  sub_1404D4A90(&v48, v45); /*0x14084aa2f*/
  sub_141684120(v6, &v48, 296); /*0x14084aa45*/
  sub_140018740(v45); /*0x14084aa4f*/
  if ( !(_BYTE)v59 && 2 * *off_141EC90B8 ) /*0x14084aa6c*/
    goto LABEL_43; /*0x14084aa72*/
LABEL_34:
  v33 = v58; /*0x14084a8bd*/
  v34 = *(_BYTE *)(v58 + 16); /*0x14084a8c6*/
  *(_BYTE *)(v58 + 16) = 0; /*0x14084a8c6*/
  if ( v34 == 2 ) /*0x14084a8cb*/
    WakeByAddressSingle((PVOID)(v33 + 16)); /*0x14084ab1d*/
  return v6; /*0x14084a8d4*/
}

// --- refs ---
// 0x14149c500  sub_14149C500
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x1416c1670  WakeByAddressSingle
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141796ab0  off_141796AB0
// 0x140892360  sub_140892360
// 0x1416847b0  sub_1416847B0
// 0x1404d4a90  sub_1404D4A90
// 0x141684120  sub_141684120
// 0x140018740  sub_140018740
// 0x140ffa6e0  sub_140FFA6E0
// 0x1408582d0  sub_1408582D0
