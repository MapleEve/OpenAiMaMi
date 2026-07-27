// addr: 0x14084baa0
// name (owner-map): sub_14084BAA0
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_14084BAA0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  volatile signed __int8 *v16; // r15
  char v17; // al
  PVOID v18; // rcx
  char v19; // al
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  volatile signed __int8 v24; // al
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // r13
  __int64 v29; // r14
  PVOID v30; // rcx
  char v31; // al
  _BYTE v32[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+38h] [rbp-48h]
  __int64 v34; // [rsp+40h] [rbp-40h]
  __int128 v35; // [rsp+78h] [rbp-8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+8h]
  char v37; // [rsp+114h] [rbp+94h]
  _BYTE v38[24]; // [rsp+118h] [rbp+98h] BYREF
  __int64 v39; // [rsp+130h] [rbp+B0h]
  PVOID Address; // [rsp+200h] [rbp+180h]
  int v41; // [rsp+20Ch] [rbp+18Ch]
  __int64 v42; // [rsp+210h] [rbp+190h]

  v42 = -2; /*0x14084babb*/
  v7 = a1; /*0x14084bacf*/
  v8 = a2[1]; /*0x14084bad2*/
  LOBYTE(a1) = 1; /*0x14084badb*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v8 + 16), 1, 0) ) /*0x14084badf*/
    sub_1416C15B0((volatile void *)(v8 + 16)); /*0x14084bc32*/
  if ( !(2 * *off_141EC90B8) ) /*0x14084baf6*/
  {
    v9 = 0; /*0x14084bb02*/
    v10 = *(unsigned __int8 *)(v8 + 17); /*0x14084bb04*/
    if ( !(_BYTE)v10 ) /*0x14084bb0c*/
      goto LABEL_5; /*0x14084bb0c*/
LABEL_21:
    *(_QWORD *)v38 = v8 + 16; /*0x14084bc51*/
    v38[8] = v9; /*0x14084bc58*/
    sub_1416C3060( /*0x14084bc84*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)v38,
      (unsigned int)&off_141796230,
      (__int64)&off_141796BD0);
  }
  v9 = sub_1416C2250(a1, a2); /*0x14084bc3c*/
  LOBYTE(v9) = v9 ^ 1; /*0x14084bc41*/
  v10 = *(unsigned __int8 *)(v8 + 17); /*0x14084bc43*/
  if ( (_BYTE)v10 ) /*0x14084bc4b*/
    goto LABEL_21; /*0x14084bc4b*/
LABEL_5:
  v41 = v9; /*0x14084bb12*/
  Address = (PVOID)(v8 + 16); /*0x14084bb18*/
  v11 = *(_QWORD *)(v8 + 40); /*0x14084bb1f*/
  if ( v11 ) /*0x14084bb27*/
  {
    v12 = *(_QWORD *)(v8 + 32); /*0x14084bb2d*/
    v13 = 232 * v11; /*0x14084bb32*/
    while ( *(_QWORD *)(v12 + 16) != a4 || (unsigned int)sub_1416847B0(*(_QWORD *)(v12 + 8), a3, a4) ) /*0x14084bb6b*/
    {
      v12 += 232; /*0x14084bb40*/
      v13 -= 232; /*0x14084bb47*/
      if ( !v13 ) /*0x14084bb4e*/
        goto LABEL_15; /*0x14084bb4e*/
    }
    sub_1404DFAF0(v38, v12); /*0x14084bb77*/
    sub_141684120(v32, v38, 232); /*0x14084bb8e*/
    if ( !(_BYTE)v41 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v15, v14) ) /*0x14084bdc0*/
      *(_BYTE *)(v8 + 17) = 1; /*0x14084bdcd*/
    v16 = (volatile signed __int8 *)(v8 + 16); /*0x14084bbb4*/
    v17 = *(_BYTE *)(v8 + 16); /*0x14084bbb9*/
    *(_BYTE *)(v8 + 16) = 0; /*0x14084bbb9*/
    if ( v17 == 2 ) /*0x14084bbbe*/
    {
      WakeByAddressSingle((PVOID)(v8 + 16)); /*0x14084bcae*/
      if ( v36 ) /*0x14084bcb8*/
        goto LABEL_14; /*0x14084bcb8*/
    }
    else if ( v36 ) /*0x14084bbc9*/
    {
LABEL_14:
      sub_141684120(v7, v32, 232); /*0x14084bbcf*/
      return v7; /*0x14084bbe1*/
    }
    get_api_key(v38, *a2 + 16LL, v33, v34); /*0x14084bcd4*/
    if ( v38[0] ) /*0x14084bce8*/
      goto LABEL_26; /*0x14084bce8*/
    if ( *(_QWORD *)&v38[8] == -1 ) /*0x14084bd0e*/
      goto LABEL_14; /*0x14084bd0e*/
    if ( !v39 ) /*0x14084bd1c*/
    {
LABEL_26:
      if ( *(_QWORD *)&v38[8] ) /*0x14084bced*/
        sub_140001660(*(_QWORD *)&v38[16], *(_QWORD *)&v38[8], 1); /*0x14084bd00*/
      goto LABEL_14; /*0x14084bd05*/
    }
    v22 = v35; /*0x14084bd29*/
    if ( (_QWORD)v35 ) /*0x14084bd30*/
      sub_140001660(*((_QWORD *)&v35 + 1), v35, 1); /*0x14084bd3c*/
    v36 = v39; /*0x14084bd45*/
    v35 = *(_OWORD *)&v38[8]; /*0x14084bd4d*/
    if ( !v37 ) /*0x14084bd59*/
      v37 = 1; /*0x14084bd5b*/
    LOBYTE(v21) = 1; /*0x14084bd62*/
    if ( _InterlockedCompareExchange8(v16, 1, 0) ) /*0x14084bd66*/
      sub_1416C15B0((volatile void *)(v8 + 16)); /*0x14084bddb*/
    if ( 2 * *off_141EC90B8 ) /*0x14084bd77*/
    {
      v25 = sub_1416C2250(v21, v22); /*0x14084bde3*/
      v23 = v25; /*0x14084bde9*/
      LOBYTE(v23) = v25 ^ 1; /*0x14084bdeb*/
      if ( *(_BYTE *)(v8 + 17) ) /*0x14084bdee*/
      {
LABEL_38:
        if ( !(_BYTE)v23 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v23, v22) ) /*0x14084bec5*/
          *(_BYTE *)(v8 + 17) = 1; /*0x14084bed3*/
        v24 = *v16; /*0x14084bda7*/
        *v16 = 0; /*0x14084bda7*/
        if ( v24 == 2 ) /*0x14084bdac*/
          WakeByAddressSingle((PVOID)(v8 + 16)); /*0x14084bdb5*/
        goto LABEL_14; /*0x14084bdbb*/
      }
    }
    else
    {
      v23 = 0; /*0x14084bd7f*/
      if ( *(_BYTE *)(v8 + 17) ) /*0x14084bd81*/
        goto LABEL_38; /*0x14084bd89*/
    }
    v41 = v23; /*0x14084bdf8*/
    v26 = *(_QWORD *)(v8 + 40); /*0x14084bdfe*/
    if ( v26 ) /*0x14084be06*/
    {
      v27 = *(_QWORD *)(v8 + 32); /*0x14084be0c*/
      v28 = 232 * v26; /*0x14084be11*/
      v29 = 0; /*0x14084be18*/
      while ( *(_QWORD *)(v27 + v29 + 16) != a4 || (unsigned int)sub_1416847B0(*(_QWORD *)(v27 + v29 + 8), a3, a4) ) /*0x14084be42*/
      {
        v29 += 232; /*0x14084be1d*/
        if ( v28 == v29 ) /*0x14084be27*/
          goto LABEL_53; /*0x14084be27*/
      }
      sub_14149C500(v38, &v35); /*0x14084be4f*/
      v22 = *(_QWORD *)(v27 + v29 + 72); /*0x14084be5d*/
      if ( v22 ) /*0x14084be65*/
        sub_140001660(*(_QWORD *)(v27 + v29 + 80), v22, 1); /*0x14084be72*/
      *(_QWORD *)(v27 + v29 + 88) = *(_QWORD *)&v38[16]; /*0x14084be7e*/
      *(_OWORD *)(v27 + v29 + 72) = *(_OWORD *)v38; /*0x14084be89*/
    }
LABEL_53:
    if ( !(_BYTE)v41 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v23, v22) ) /*0x14084bede*/
      *(_BYTE *)(v8 + 17) = 1; /*0x14084bee8*/
    v30 = Address; /*0x14084bea9*/
    v31 = *(_BYTE *)Address; /*0x14084beb0*/
    *(_BYTE *)Address = 0; /*0x14084beb0*/
    if ( v31 == 2 ) /*0x14084beb4*/
      WakeByAddressSingle(v30); /*0x14084beba*/
    goto LABEL_14; /*0x14084bec0*/
  }
LABEL_15:
  *v7 = -1; /*0x14084bbe3*/
  if ( !(_BYTE)v41 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v10, a2) ) /*0x14084bc93*/
    *(_BYTE *)(v8 + 17) = 1; /*0x14084bca0*/
  v18 = Address; /*0x14084bc0b*/
  v19 = *(_BYTE *)Address; /*0x14084bc12*/
  *(_BYTE *)Address = 0; /*0x14084bc12*/
  if ( v19 == 2 ) /*0x14084bc16*/
    WakeByAddressSingle(v18); /*0x14084bc8c*/
  return v7; /*0x14084bc1b*/
}

// --- refs ---
// 0x1416c15b0  sub_1416C15B0
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141796bd0  off_141796BD0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x1416847b0  sub_1416847B0
// 0x1404dfaf0  sub_1404DFAF0
// 0x141684120  sub_141684120
// 0x1416c1670  WakeByAddressSingle
// 0x1404d9190  get_api_key
// 0x140001660  sub_140001660
// 0x14149c500  sub_14149C500
