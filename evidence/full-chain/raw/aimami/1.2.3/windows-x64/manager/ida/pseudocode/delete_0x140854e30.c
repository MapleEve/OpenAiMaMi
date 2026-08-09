// addr: 0x140854e30
// name (owner-map): delete
// module: core::relay::manager
// source: IDA remote hexrays decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::delete | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall delete(__int64 a1, __int64 *a2, char *a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  char *v13; // rbx
  __int64 *v14; // r15
  unsigned int v15; // r14d
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // cl
  __int64 v20; // rax
  PVOID v21; // rcx
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  PVOID v29; // rcx
  char v30; // al
  __int64 v31; // r15
  __int64 v32; // r13
  __int128 v33; // kr10_16
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int128 v39; // kr20_16
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  __int64 v45; // rdx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  char v49; // al
  PVOID v50; // rcx
  char v51; // al
  void *v53; // rdi
  void *v54; // rdi
  char v55; // cl
  int v56; // eax
  _QWORD v57[29]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v58[8]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v59; // [rsp+118h] [rbp+98h]
  __int64 v60; // [rsp+120h] [rbp+A0h]
  _BYTE v61[8]; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v62; // [rsp+130h] [rbp+B0h]
  __int64 v63; // [rsp+138h] [rbp+B8h]
  unsigned __int8 v64; // [rsp+234h] [rbp+1B4h]
  _QWORD v65[4]; // [rsp+238h] [rbp+1B8h] BYREF
  __int128 v66; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v67; // [rsp+268h] [rbp+1E8h]
  __int128 v68; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v69; // [rsp+280h] [rbp+200h]
  __int128 v70; // [rsp+288h] [rbp+208h] BYREF
  _BYTE v71[80]; // [rsp+298h] [rbp+218h]
  __int128 v72; // [rsp+370h] [rbp+2F0h] BYREF
  PVOID v73; // [rsp+380h] [rbp+300h]
  PVOID v74; // [rsp+388h] [rbp+308h]
  PVOID Address; // [rsp+390h] [rbp+310h]
  __int64 v76; // [rsp+398h] [rbp+318h]
  __int64 v77; // [rsp+3A0h] [rbp+320h]
  unsigned int v78; // [rsp+3A8h] [rbp+328h]
  unsigned __int8 v79; // [rsp+3ADh] [rbp+32Dh]
  char v80; // [rsp+3AEh] [rbp+32Eh]
  char v81; // [rsp+3AFh] [rbp+32Fh]
  __int64 v82; // [rsp+3B0h] [rbp+330h]

  v82 = -2; /*0x140854e4b*/
  *(_QWORD *)&v72 = a3; /*0x140854e5c*/
  *((_QWORD *)&v72 + 1) = a4; /*0x140854e63*/
  v6 = a2[2]; /*0x140854e6a*/
  if ( *(_QWORD *)(v6 + 16) != -1 ) /*0x140854e73*/
  {
    sub_14149C500((char *)&v70 + 8, v6 + 16); /*0x140854e80*/
    *(_QWORD *)&v70 = 9; /*0x140854e85*/
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v71[64]; /*0x140854e97*/
    v7 = *(_OWORD *)v71; /*0x140854e9b*/
    v8 = *(_OWORD *)&v71[16]; /*0x140854ea2*/
    v9 = *(_OWORD *)&v71[32]; /*0x140854ea9*/
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v71[48]; /*0x140854eb7*/
    *(_OWORD *)(a1 + 48) = v9; /*0x140854ebb*/
    *(_OWORD *)(a1 + 32) = v8; /*0x140854ebf*/
    *(_OWORD *)(a1 + 16) = v7; /*0x140854ec3*/
    *(_OWORD *)a1 = v70; /*0x140854ece*/
    return a1; /*0x140854edc*/
  }
  sub_140AE73A0((__int64)&v70, a3, a4); /*0x140854eee*/
  if ( (_QWORD)v70 != -1 ) /*0x140854efb*/
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v71; /*0x140854f04*/
    *(_OWORD *)(a1 + 8) = v70; /*0x140854f0f*/
    *(_QWORD *)a1 = 9; /*0x140854f13*/
    return a1; /*0x140854f1a*/
  }
  v12 = a2[4]; /*0x140854f1f*/
  v13 = (char *)(v12 + 16); /*0x140854f23*/
  LOBYTE(v11) = 1; /*0x140854f28*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v12 + 16), 1, 0) ) /*0x140854f2c*/
    sub_1416C15B0((volatile void *)(v12 + 16)); /*0x140854fe4*/
  v14 = off_141EC90B8; /*0x140854f39*/
  if ( 2 * *off_141EC90B8 ) /*0x140854f43*/
  {
    v15 = sub_1416C2250(v11, v10); /*0x140854ff3*/
    LOBYTE(v15) = v15 ^ 1; /*0x140854ff6*/
    if ( *(_BYTE *)(v12 + 17) ) /*0x140854ffa*/
      goto LABEL_9; /*0x140855002*/
  }
  else
  {
    v15 = 0; /*0x140854f4f*/
    if ( *(_BYTE *)(v12 + 17) ) /*0x140854f52*/
    {
LABEL_9:
      nullsub_1(v11); /*0x140854f60*/
      v16 = (void *)sub_140001650(40, 1); /*0x140854f6f*/
      if ( !v16 ) /*0x140854f77*/
      {
        v78 = v15; /*0x140855734*/
        Address = (PVOID)(v12 + 16); /*0x14085573b*/
        sub_1416C2D4B(1, 40); /*0x14085574c*/
      }
      qmemcpy(v16, "Codex router transition lock is poisoned", 40); /*0x140854f8f*/
      if ( !(_BYTE)v15 ) /*0x140854fa3*/
      {
        v18 = 2 * *v14; /*0x140854fa8*/
        if ( v18 ) /*0x140854fae*/
        {
          v54 = v16; /*0x140855625*/
          v55 = sub_1416C2250(v18, v17); /*0x14085562d*/
          v16 = v54; /*0x14085562f*/
          if ( !v55 ) /*0x140855634*/
            *(_BYTE *)(v12 + 17) = 1; /*0x14085563a*/
        }
      }
      v19 = *v13; /*0x140854fb6*/
      *v13 = 0; /*0x140854fb6*/
      if ( v19 == 2 ) /*0x140854fbb*/
      {
        v53 = v16; /*0x14085560e*/
        WakeByAddressSingle((PVOID)(v12 + 16)); /*0x140855611*/
        v16 = v53; /*0x140855616*/
      }
      *(_QWORD *)a1 = 10; /*0x140854fc1*/
      *(_QWORD *)(a1 + 8) = 40; /*0x140854fc8*/
      *(_QWORD *)(a1 + 16) = v16; /*0x140854fd0*/
      *(_QWORD *)(a1 + 24) = 40; /*0x140854fd4*/
      return a1; /*0x140854fdc*/
    }
  }
  v78 = v15; /*0x140855008*/
  Address = (PVOID)(v12 + 16); /*0x14085500f*/
  lock(&v70, a2 + 5, "deleting a relay provider", 25); /*0x14085502e*/
  v21 = *((PVOID *)&v70 + 1); /*0x14085503b*/
  v20 = v70; /*0x14085503b*/
  v22 = v71[0]; /*0x140855042*/
  if ( (_QWORD)v70 != -1 ) /*0x14085504d*/
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v71[64]; /*0x140855056*/
    v23 = *(_OWORD *)&v71[1]; /*0x14085505a*/
    v24 = *(_OWORD *)&v71[17]; /*0x140855061*/
    v25 = *(_OWORD *)&v71[33]; /*0x140855068*/
    *(_OWORD *)(a1 + 65) = *(_OWORD *)&v71[49]; /*0x140855076*/
    *(_OWORD *)(a1 + 49) = v25; /*0x14085507a*/
    *(_OWORD *)(a1 + 33) = v24; /*0x14085507e*/
    *(_OWORD *)(a1 + 17) = v23; /*0x140855082*/
    *(_QWORD *)a1 = v20; /*0x140855086*/
    *(_QWORD *)(a1 + 8) = v21; /*0x140855089*/
    *(_BYTE *)(a1 + 16) = v22; /*0x14085508d*/
LABEL_60:
    if ( !(_BYTE)v78 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v21, v22) ) /*0x140855645*/
      *(_BYTE *)(v12 + 17) = 1; /*0x14085564e*/
    v50 = Address; /*0x1408555e7*/
    v51 = *(_BYTE *)Address; /*0x1408555ee*/
    *(_BYTE *)Address = 0; /*0x1408555ee*/
    if ( v51 == 2 ) /*0x1408555f2*/
      WakeByAddressSingle(v50); /*0x14085561e*/
    return a1; /*0x14085561e*/
  }
  v79 = v71[0]; /*0x140855095*/
  v74 = *((PVOID *)&v70 + 1); /*0x14085509b*/
  v26 = a2[1]; /*0x1408550a2*/
  LOBYTE(v21) = 1; /*0x1408550aa*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v26 + 16), 1, 0) ) /*0x1408550ae*/
    sub_1416C15B0((volatile void *)(v26 + 16)); /*0x140855659*/
  if ( 2 * *v14 ) /*0x1408550bc*/
  {
    v56 = sub_1416C2250(v21, v22); /*0x140855664*/
    LOBYTE(v56) = v56 ^ 1; /*0x140855675*/
    LODWORD(v77) = v56; /*0x140855677*/
    v73 = (PVOID)(v26 + 16); /*0x14085567d*/
    if ( !*(_BYTE *)(v26 + 17) ) /*0x14085568a*/
      goto LABEL_22; /*0x14085568a*/
LABEL_70:
    *(_QWORD *)&v70 = v73; /*0x140855690*/
    BYTE8(v70) = v77; /*0x1408556a4*/
    sub_1416C3060( /*0x1408556d0*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v70,
      (unsigned int)&off_141796230,
      (__int64)&off_141797B70);
  }
  LODWORD(v77) = 0; /*0x1408550c8*/
  v73 = (PVOID)(v26 + 16); /*0x1408550d2*/
  if ( *(_BYTE *)(v26 + 17) ) /*0x1408550d9*/
    goto LABEL_70; /*0x1408550df*/
LABEL_22:
  sub_140892360(v58, v26 + 24); /*0x1408550e5*/
  if ( !(_BYTE)v77 ) /*0x1408550fd*/
  {
    if ( 2 * *v14 ) /*0x140855102*/
    {
      v80 = 1; /*0x1408556f8*/
      if ( !(unsigned __int8)sub_1416C2250(v28, v27) ) /*0x1408556ff*/
        *(_BYTE *)(v26 + 17) = 1; /*0x14085570d*/
    }
  }
  v29 = v73; /*0x140855110*/
  v30 = *(_BYTE *)v73; /*0x140855117*/
  *(_BYTE *)v73 = 0; /*0x140855117*/
  if ( v30 == 2 ) /*0x14085511b*/
  {
    v80 = 1; /*0x1408556db*/
    WakeByAddressSingle(v29); /*0x1408556e2*/
  }
  if ( v60 ) /*0x14085512b*/
  {
    v31 = v59; /*0x140855131*/
    v32 = 232 * v60; /*0x140855138*/
    v33 = v72; /*0x140855146*/
    while ( *(_QWORD *)(v31 + 16) != *((_QWORD *)&v33 + 1) /*0x14085517b*/
         || (unsigned int)sub_1416847B0(*(_QWORD *)(v31 + 8), v33, *((_QWORD *)&v33 + 1)) )
    {
      v31 += 232; /*0x140855150*/
      v32 -= 232; /*0x140855157*/
      if ( !v32 ) /*0x14085515e*/
        goto LABEL_37; /*0x14085515e*/
    }
    v80 = 1; /*0x14085517d*/
    sub_1404DFAF0(&v70, v31); /*0x14085518e*/
    sub_141684120(v57, &v70, 232); /*0x1408551a5*/
    v34 = v57[0]; /*0x1408551aa*/
    if ( (v64 ^ 1 | (v57[0] == -1)) != 1 ) /*0x1408551c3*/
    {
      v76 = v57[0]; /*0x14085552c*/
      v81 = 1; /*0x140855533*/
      sub_1408732C0(&v70); /*0x140855541*/
LABEL_54:
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v71[64]; /*0x140855547*/
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v71[48]; /*0x140855559*/
      v46 = v70; /*0x14085555d*/
      v47 = *(_OWORD *)v71; /*0x140855564*/
      v48 = *(_OWORD *)&v71[16]; /*0x14085556b*/
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v71[32]; /*0x140855579*/
      *(_OWORD *)(a1 + 32) = v48; /*0x14085557d*/
      *(_OWORD *)(a1 + 16) = v47; /*0x140855581*/
      *(_OWORD *)a1 = v46; /*0x140855585*/
LABEL_55:
      v14 = off_141EC90B8; /*0x140855588*/
      sub_140018960(v57); /*0x140855593*/
      sub_140018740(v58); /*0x1408555a0*/
LABEL_56:
      if ( (v79 & 1) == 0 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v41, v22) ) /*0x140855716*/
        *((_BYTE *)v74 + 1) = 1; /*0x14085572b*/
      v21 = v74; /*0x1408555c0*/
      v49 = *(_BYTE *)v74; /*0x1408555c7*/
      *(_BYTE *)v74 = 0; /*0x1408555c7*/
      if ( v49 == 2 ) /*0x1408555cb*/
        WakeByAddressSingle(v21); /*0x1408556ed*/
      goto LABEL_60; /*0x1408556ed*/
    }
    if ( (v64 & (v57[0] != -1)) != 0 ) /*0x1408551d4*/
    {
      v35 = v63; /*0x1408551e1*/
      *(_QWORD *)&v70 = v62; /*0x1408551f0*/
      *((_QWORD *)&v70 + 1) = v62 + 24 * v63; /*0x1408551f7*/
      if ( (unsigned __int8)sub_1407E20B0(&v70, v33, *((_QWORD *)&v33 + 1)) ) /*0x14085520b*/
      {
        if ( v35 == 1 ) /*0x140855218*/
        {
          nullsub_1(v36); /*0x14085521a*/
          v37 = sub_140001650(135, 1); /*0x140855229*/
          if ( !v37 ) /*0x140855231*/
          {
            v76 = v34; /*0x140855754*/
            v81 = 1; /*0x14085575b*/
            sub_1416C2D4B(1, 135); /*0x14085576c*/
          }
          v38 = v37; /*0x140855237*/
          sub_141684120(v37, aCodexCodexCode_0, 135); /*0x14085524a*/
          *(_QWORD *)a1 = 10; /*0x14085524f*/
          *(_QWORD *)(a1 + 8) = 135; /*0x140855256*/
          *(_QWORD *)(a1 + 16) = v38; /*0x14085525e*/
          *(_QWORD *)(a1 + 24) = 135; /*0x140855262*/
          goto LABEL_55; /*0x14085526a*/
        }
      }
    }
  }
  else
  {
LABEL_37:
    v57[0] = -1; /*0x14085526f*/
    v34 = -1; /*0x140855277*/
  }
  v76 = v34; /*0x14085527e*/
  v81 = 1; /*0x140855285*/
  sub_1402B1030(v58, &v72); /*0x14085529d*/
  v39 = v72; /*0x1408552b1*/
  v70 = v72; /*0x1408552b8*/
  v76 = v34; /*0x1408552c6*/
  v81 = 1; /*0x1408552cd*/
  sub_1402ACEC0(v61, &v70); /*0x1408552db*/
  if ( v34 != -1 ) /*0x1408552e5*/
  {
    v76 = v34; /*0x1408552e7*/
    v81 = 1; /*0x1408552ee*/
    sub_140846F90(&v70, a2); /*0x1408552ff*/
    if ( (_DWORD)v70 != -1 ) /*0x14085530c*/
      goto LABEL_54; /*0x14085530c*/
    v40 = *a2; /*0x140855312*/
    v76 = v34; /*0x140855315*/
    v81 = 1; /*0x14085531c*/
    sub_140854380(&v70, v40, v39, *((_QWORD *)&v39 + 1)); /*0x140855330*/
    if ( (_DWORD)v70 != -1 ) /*0x14085533d*/
      goto LABEL_54; /*0x14085533d*/
  }
  v76 = v34; /*0x140855343*/
  v81 = 0; /*0x14085534a*/
  sub_1408582D0(&v70, a2, v58); /*0x140855362*/
  if ( (_DWORD)v70 != -1 ) /*0x14085536f*/
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v71[64]; /*0x140855378*/
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v71[48]; /*0x140855383*/
    v42 = v70; /*0x140855387*/
    v43 = *(_OWORD *)v71; /*0x14085538e*/
    v44 = *(_OWORD *)&v71[16]; /*0x140855395*/
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v71[32]; /*0x1408553a3*/
    *(_OWORD *)(a1 + 32) = v44; /*0x1408553a7*/
    *(_OWORD *)(a1 + 16) = v43; /*0x1408553ab*/
    *(_OWORD *)a1 = v42; /*0x1408553af*/
    if ( v34 != -1 ) /*0x1408553b6*/
      sub_140018960(v57); /*0x1408553bc*/
    v14 = off_141EC90B8; /*0x1408553c1*/
    goto LABEL_56; /*0x1408553c8*/
  }
  v45 = *a2 + 16; /*0x1408553d0*/
  v76 = v34; /*0x1408553d4*/
  v81 = 0; /*0x1408553db*/
  sub_1404D9B20(&v66, v45, v39, *((_QWORD *)&v39 + 1)); /*0x1408553ef*/
  if ( (_QWORD)v66 != -1 ) /*0x1408553fd*/
  {
    v69 = v67; /*0x14085540a*/
    v68 = v66; /*0x140855418*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085542d*/
    {
      v77 = v34; /*0x140855433*/
      v65[0] = &v72; /*0x14085543a*/
      v65[1] = sub_14041F680; /*0x140855448*/
      v65[2] = &v68; /*0x140855456*/
      v65[3] = sub_1400015F0; /*0x140855464*/
      *(_QWORD *)&v70 = aCodexmateLibCo_5; /*0x140855472*/
      *((_QWORD *)&v70 + 1) = 35; /*0x140855479*/
      *(_QWORD *)v71 = aCodexmateLibCo_5; /*0x140855484*/
      *(_QWORD *)&v71[8] = 35; /*0x14085548b*/
      *(_QWORD *)&v71[16] = &off_141797C40; /*0x14085549d*/
      sub_140985BA0(&unk_141797C0F, v65, 2, &v70); /*0x1408554bf*/
      v34 = v77; /*0x1408554c5*/
    }
    if ( (_QWORD)v68 ) /*0x1408554d6*/
      sub_140001660(*((_QWORD *)&v68 + 1), v68, 1); /*0x1408554e5*/
  }
  *(_QWORD *)a1 = -1; /*0x1408554ea*/
  if ( v34 != -1 ) /*0x1408554f5*/
    sub_140018960(v57); /*0x1408554fb*/
  sub_14000E270(v74, v79); /*0x14085550f*/
  sub_14000E270(Address, v78); /*0x140855522*/
  return a1; /*0x1408555f7*/
}

// --- refs ---
// 0x14149c500  sub_14149C500
// 0x140ae73a0  sub_140AE73A0
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x1416c1670  WakeByAddressSingle
// 0x1403b7e80  lock
// 0x141797b57  aDeletingARelay  // string: "deleting a relay provider"
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141797b70  off_141797B70
// 0x140892360  sub_140892360
// 0x1416847b0  sub_1416847B0
// 0x1404dfaf0  sub_1404DFAF0
// 0x141684120  sub_141684120
// 0x1408732c0  sub_1408732C0
// 0x140018960  sub_140018960
// 0x140018740  sub_140018740
// 0x141797b88  aCodexCodexCode_0  // string: "无法删除最后一个已启用的 Codex 中转模型：请先关闭 Codex 智能路由，或先启用另一个 Codex 中转模型。"
// 0x1407e20b0  sub_1407E20B0
// 0x1402b1030  sub_1402B1030
// 0x1402acec0  sub_1402ACEC0
// 0x140846f90  sub_140846F90
// 0x140854380  sub_140854380
// 0x1408582d0  sub_1408582D0
// 0x1404d9b20  sub_1404D9B20
// 0x14041f680  sub_14041F680
// 0x1400015f0  sub_1400015F0
// 0x1417968aa  aCodexmateLibCo_5  // string: "codexmate_lib::core::relay::manager"
// 0x141797c40  off_141797C40
// 0x140985ba0  sub_140985BA0
// 0x141797c0f  unk_141797C0F
// 0x141ec8d80  off_141EC8D80
// 0x140001660  sub_140001660
// 0x14000e270  sub_14000E270
