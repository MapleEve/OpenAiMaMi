// addr: 0x1408441f0
// name (owner-map): sub_1408441F0
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1408441F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v12; // r15
  char *v13; // r13
  __int64 *v14; // r12
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // cl
  unsigned int v19; // eax
  __int64 v20; // rax
  PVOID v21; // rcx
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  PVOID v29; // rcx
  char v30; // al
  _OWORD *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  _OWORD *v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int64 v39; // rcx
  char v40; // al
  PVOID v41; // rcx
  char v42; // al
  void *v44; // rdi
  void *v45; // rdi
  char v46; // cl
  int v47; // eax
  _BYTE v48[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v49[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v50; // [rsp+50h] [rbp-30h]
  char v51; // [rsp+14Ch] [rbp+CCh]
  _OWORD v52[6]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v53; // [rsp+1B0h] [rbp+130h] BYREF
  _BYTE v54[80]; // [rsp+1C0h] [rbp+140h]
  PVOID v55; // [rsp+2D8h] [rbp+258h]
  PVOID v56; // [rsp+2E0h] [rbp+260h]
  PVOID Address; // [rsp+2E8h] [rbp+268h]
  unsigned int v58; // [rsp+2F4h] [rbp+274h]
  int v59; // [rsp+2F8h] [rbp+278h]
  unsigned __int8 v60; // [rsp+2FFh] [rbp+27Fh]
  __int64 v61; // [rsp+300h] [rbp+280h]

  v61 = -2; /*0x14084420b*/
  v5 = a1; /*0x140844219*/
  v6 = a2[2]; /*0x14084421c*/
  if ( *(_QWORD *)(v6 + 16) != -1 ) /*0x140844225*/
  {
    sub_14149C500((char *)&v53 + 8, v6 + 16); /*0x140844232*/
    *(_QWORD *)&v53 = 9; /*0x140844237*/
    *(_OWORD *)(v5 + 88) = *(_OWORD *)&v54[64]; /*0x140844249*/
    v7 = *(_OWORD *)v54; /*0x14084424d*/
    v8 = *(_OWORD *)&v54[16]; /*0x140844254*/
    v9 = *(_OWORD *)&v54[32]; /*0x14084425b*/
    *(_OWORD *)(v5 + 72) = *(_OWORD *)&v54[48]; /*0x140844269*/
    *(_OWORD *)(v5 + 56) = v9; /*0x14084426d*/
    *(_OWORD *)(v5 + 40) = v8; /*0x140844271*/
    *(_OWORD *)(v5 + 24) = v7; /*0x140844275*/
    *(_OWORD *)(v5 + 8) = v53; /*0x140844280*/
    *(_QWORD *)v5 = -1; /*0x14084428f*/
    return v5; /*0x140844296*/
  }
  v12 = a2[4]; /*0x1408442a1*/
  v13 = (char *)(v12 + 16); /*0x1408442a5*/
  LOBYTE(a1) = 1; /*0x1408442a9*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v12 + 16), 1, 0) ) /*0x1408442ad*/
    sub_1416C15B0((volatile void *)(v12 + 16)); /*0x14084437a*/
  v14 = off_141EC90B8; /*0x1408442b9*/
  if ( 2 * *off_141EC90B8 ) /*0x1408442c4*/
  {
    v19 = sub_1416C2250(a1, v6); /*0x140844384*/
    LOBYTE(v19) = v19 ^ 1; /*0x140844389*/
    v58 = v19; /*0x14084438b*/
    if ( *(_BYTE *)(v12 + 17) ) /*0x140844391*/
      goto LABEL_7; /*0x140844398*/
  }
  else
  {
    v58 = 0; /*0x1408442d0*/
    if ( *(_BYTE *)(v12 + 17) ) /*0x1408442da*/
    {
LABEL_7:
      nullsub_1(a1); /*0x1408442e7*/
      v15 = (void *)sub_140001650(40, 1); /*0x1408442f6*/
      if ( !v15 ) /*0x1408442fe*/
      {
        Address = (PVOID)(v12 + 16); /*0x1408448e5*/
        sub_1416C2D4B(1, 40); /*0x1408448f6*/
      }
      qmemcpy(v15, "Codex router transition lock is poisoned", 40); /*0x140844316*/
      if ( !(_BYTE)v58 ) /*0x14084432e*/
      {
        v17 = 2 * *v14; /*0x140844334*/
        if ( v17 ) /*0x14084433a*/
        {
          v45 = v15; /*0x1408447e3*/
          v46 = sub_1416C2250(v17, v16); /*0x1408447eb*/
          v15 = v45; /*0x1408447ed*/
          if ( !v46 ) /*0x1408447f2*/
            *(_BYTE *)(v12 + 17) = 1; /*0x1408447f8*/
        }
      }
      v18 = *v13; /*0x140844342*/
      *v13 = 0; /*0x140844342*/
      if ( v18 == 2 ) /*0x140844349*/
      {
        v44 = v15; /*0x1408447c9*/
        WakeByAddressSingle((PVOID)(v12 + 16)); /*0x1408447cc*/
        v15 = v44; /*0x1408447d1*/
      }
      *(_QWORD *)(v5 + 8) = 10; /*0x14084434f*/
      *(_QWORD *)(v5 + 16) = 40; /*0x140844357*/
      *(_QWORD *)(v5 + 24) = v15; /*0x14084435f*/
      *(_QWORD *)(v5 + 32) = 40; /*0x140844363*/
      *(_QWORD *)v5 = -1; /*0x14084436b*/
      return v5; /*0x140844372*/
    }
  }
  Address = (PVOID)(v12 + 16); /*0x14084439e*/
  lock(&v53, a2 + 5, aDeactivatingAR, 29); /*0x1408443bd*/
  v21 = *((PVOID *)&v53 + 1); /*0x1408443ca*/
  v20 = v53; /*0x1408443ca*/
  v22 = v54[0]; /*0x1408443d1*/
  if ( (_QWORD)v53 == -1 ) /*0x1408443dc*/
  {
    v60 = v54[0]; /*0x14084442c*/
    v56 = *((PVOID *)&v53 + 1); /*0x140844432*/
    v26 = a2[1]; /*0x140844439*/
    v55 = (PVOID)(v26 + 16); /*0x140844441*/
    LOBYTE(v21) = 1; /*0x140844448*/
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v26 + 16), 1, 0) ) /*0x14084444c*/
      sub_1416C15B0((volatile void *)(v26 + 16)); /*0x14084481d*/
    if ( 2 * *v14 ) /*0x14084445c*/
    {
      v47 = sub_1416C2250(v21, v22); /*0x140844828*/
      LOBYTE(v47) = v47 ^ 1; /*0x140844839*/
      v59 = v47; /*0x14084483b*/
      if ( !*(_BYTE *)(v26 + 17) ) /*0x140844848*/
      {
LABEL_20:
        sub_140892360(v48, v26 + 24); /*0x14084447f*/
        if ( !(_BYTE)v59 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v28, v27) ) /*0x1408448af*/
          *(_BYTE *)(v26 + 17) = 1; /*0x1408448bd*/
        v29 = v55; /*0x1408444a8*/
        v30 = *(_BYTE *)v55; /*0x1408444af*/
        *(_BYTE *)v55 = 0; /*0x1408444af*/
        if ( v30 == 2 ) /*0x1408444b3*/
          WakeByAddressSingle(v29); /*0x140844899*/
        if ( v51 ) /*0x1408444c0*/
        {
          nullsub_1(v29); /*0x1408444c6*/
          v31 = (_OWORD *)sub_140001650(107, 1); /*0x1408444d5*/
          if ( !v31 ) /*0x1408444dd*/
            sub_1416C2D4B(1, 107); /*0x140844908*/
          *(_OWORD *)((char *)v31 + 91) = *(__int128 *)((char *)&xmmword_141798C00 + 11); /*0x1408444ea*/
          v31[5] = xmmword_141798C00; /*0x1408444f5*/
          v31[4] = xmmword_141798BF0; /*0x140844500*/
          v31[3] = xmmword_141798BE0; /*0x14084450b*/
          v31[2] = xmmword_141798BD0; /*0x140844516*/
          v31[1] = xmmword_141798BC0; /*0x140844521*/
          *v31 = xmmword_141798BB0; /*0x14084452c*/
          *(_QWORD *)(v5 + 8) = 10; /*0x14084452f*/
          *(_QWORD *)(v5 + 16) = 107; /*0x140844537*/
          *(_QWORD *)(v5 + 24) = v31; /*0x14084453f*/
          *(_QWORD *)(v5 + 32) = 107; /*0x140844543*/
        }
        else
        {
          *(_QWORD *)&v53 = a3; /*0x140844554*/
          *((_QWORD *)&v53 + 1) = a4; /*0x14084455b*/
          v32 = v50; /*0x140844562*/
          sub_1402ACEC0(v49, &v53); /*0x14084456d*/
          if ( !v50 && v32 && v51 ) /*0x14084458e*/
          {
            nullsub_1(v33); /*0x140844594*/
            v34 = (_OWORD *)sub_140001650(123, 1); /*0x1408445a3*/
            if ( !v34 ) /*0x1408445ab*/
              sub_1416C2D4B(1, 123); /*0x14084491a*/
            *(_OWORD *)((char *)v34 + 107) = *(__int128 *)((char *)&xmmword_141796748 + 11); /*0x1408445b8*/
            v34[6] = xmmword_141796748; /*0x1408445c3*/
            v34[5] = xmmword_141796738; /*0x1408445ce*/
            v34[4] = xmmword_141796728; /*0x1408445d9*/
            v34[3] = xmmword_141796718; /*0x1408445e4*/
            v34[2] = xmmword_141796708; /*0x1408445ef*/
            v34[1] = xmmword_1417966F8; /*0x1408445fa*/
            *v34 = xmmword_1417966E8; /*0x140844605*/
            *(_QWORD *)(v5 + 8) = 10; /*0x140844608*/
            *(_QWORD *)(v5 + 16) = 123; /*0x140844610*/
            *(_QWORD *)(v5 + 24) = v34; /*0x140844618*/
            *(_QWORD *)(v5 + 32) = 123; /*0x14084461c*/
          }
          else
          {
            sub_140846F90(&v53, a2); /*0x140844633*/
            if ( (_DWORD)v53 == -1 ) /*0x140844640*/
            {
              sub_140892360(&v53, v48); /*0x140844681*/
              sub_1408582D0(v52, a2, &v53); /*0x140844698*/
              if ( LODWORD(v52[0]) == -1 ) /*0x1408446a5*/
              {
                sub_1404D4A90(&v53, v48); /*0x140844778*/
                sub_141684120(v5, &v53, 296); /*0x14084478e*/
                sub_140018740(v48); /*0x140844798*/
                sub_14000E270(v56, v60); /*0x1408447ac*/
                sub_14000E270(Address, v58); /*0x1408447bf*/
                return v5; /*0x1408447c4*/
              }
              *(_OWORD *)(v5 + 88) = v52[5]; /*0x1408446b2*/
              *(_OWORD *)(v5 + 72) = v52[4]; /*0x1408446bd*/
              v35 = v52[0]; /*0x1408446c1*/
              v36 = v52[1]; /*0x1408446c8*/
              v37 = v52[2]; /*0x1408446cf*/
              v38 = v52[3]; /*0x1408446d6*/
            }
            else
            {
              *(_OWORD *)(v5 + 88) = *(_OWORD *)&v54[64]; /*0x140844649*/
              *(_OWORD *)(v5 + 72) = *(_OWORD *)&v54[48]; /*0x140844654*/
              v35 = v53; /*0x140844658*/
              v36 = *(_OWORD *)v54; /*0x14084465f*/
              v37 = *(_OWORD *)&v54[16]; /*0x140844666*/
              v38 = *(_OWORD *)&v54[32]; /*0x14084466d*/
            }
            *(_OWORD *)(v5 + 56) = v38; /*0x1408446dd*/
            *(_OWORD *)(v5 + 40) = v37; /*0x1408446e1*/
            *(_OWORD *)(v5 + 24) = v36; /*0x1408446e5*/
            *(_OWORD *)(v5 + 8) = v35; /*0x1408446e9*/
          }
        }
        *(_QWORD *)v5 = -1; /*0x1408446ed*/
        sub_140018740(v48); /*0x1408446f8*/
        if ( (v60 & 1) == 0 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v39, v22) ) /*0x1408448c7*/
          *((_BYTE *)v56 + 1) = 1; /*0x1408448dc*/
        v21 = v56; /*0x140844719*/
        v40 = *(_BYTE *)v56; /*0x140844720*/
        *(_BYTE *)v56 = 0; /*0x140844720*/
        if ( v40 == 2 ) /*0x140844724*/
          WakeByAddressSingle(v21); /*0x1408448a4*/
        goto LABEL_41; /*0x1408448a4*/
      }
    }
    else
    {
      v59 = 0; /*0x140844468*/
      if ( !*(_BYTE *)(v26 + 17) ) /*0x140844472*/
        goto LABEL_20; /*0x140844479*/
    }
    *(_QWORD *)&v53 = v55; /*0x140844855*/
    BYTE8(v53) = v59; /*0x140844862*/
    sub_1416C3060( /*0x14084488e*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v53,
      (unsigned int)&off_141796230,
      (__int64)&off_1417966D0);
  }
  *(_OWORD *)(v5 + 88) = *(_OWORD *)&v54[64]; /*0x1408443e5*/
  v23 = *(_OWORD *)&v54[1]; /*0x1408443e9*/
  v24 = *(_OWORD *)&v54[17]; /*0x1408443f0*/
  v25 = *(_OWORD *)&v54[33]; /*0x1408443f7*/
  *(_OWORD *)(v5 + 73) = *(_OWORD *)&v54[49]; /*0x140844405*/
  *(_OWORD *)(v5 + 57) = v25; /*0x140844409*/
  *(_OWORD *)(v5 + 41) = v24; /*0x14084440d*/
  *(_OWORD *)(v5 + 25) = v23; /*0x140844411*/
  *(_QWORD *)(v5 + 8) = v20; /*0x140844415*/
  *(_QWORD *)(v5 + 16) = v21; /*0x140844419*/
  *(_BYTE *)(v5 + 24) = v22; /*0x14084441d*/
  *(_QWORD *)v5 = -1; /*0x140844420*/
LABEL_41:
  if ( !(_BYTE)v58 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v21, v22) ) /*0x140844802*/
    *(_BYTE *)(v12 + 17) = 1; /*0x14084480f*/
  v41 = Address; /*0x140844745*/
  v42 = *(_BYTE *)Address; /*0x14084474c*/
  *(_BYTE *)Address = 0; /*0x14084474c*/
  if ( v42 == 2 ) /*0x140844750*/
    WakeByAddressSingle(v41); /*0x1408447d9*/
  return v5; /*0x140844759*/
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
// 0x1403b7e80  lock
// 0x141796698  aDeactivatingAR  // string: "deactivating a relay provider"
// 0x140892360  sub_140892360
// 0x141798c00  xmmword_141798C00
// 0x141798bf0  xmmword_141798BF0
// 0x141798be0  xmmword_141798BE0
// 0x141798bd0  xmmword_141798BD0
// 0x141798bc0  xmmword_141798BC0
// 0x141798bb0  xmmword_141798BB0
// 0x1402acec0  sub_1402ACEC0
// 0x141796748  xmmword_141796748
// 0x141796738  xmmword_141796738
// 0x141796728  xmmword_141796728
// 0x141796718  xmmword_141796718
// 0x141796708  xmmword_141796708
// 0x1417966f8  xmmword_1417966F8
// 0x1417966e8  xmmword_1417966E8
// 0x140846f90  sub_140846F90
// 0x1408582d0  sub_1408582D0
// 0x1404d4a90  sub_1404D4A90
// 0x141684120  sub_141684120
// 0x140018740  sub_140018740
// 0x14000e270  sub_14000E270
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x1417966d0  off_1417966D0
