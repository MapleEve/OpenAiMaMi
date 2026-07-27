// addr: 0x1408465f0
// name (owner-map): sub_1408465F0
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1408465F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v7; // rsi
  __int64 v8; // r12
  char *v9; // r13
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // r13
  __int64 v15; // r14
  char v16; // al
  _QWORD *v17; // r14
  _QWORD *v18; // r14
  __int64 v19; // r12
  _QWORD *v20; // r14
  __int64 v22; // r14
  char v23; // al
  __int128 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+60h] [rbp-20h]
  _QWORD *v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h]
  __int64 v30; // [rsp+80h] [rbp+0h]

  v30 = -2; /*0x14084660b*/
  v7 = a1; /*0x140846619*/
  v8 = a2[1]; /*0x14084661c*/
  v9 = (char *)(v8 + 16); /*0x140846620*/
  LOBYTE(a1) = 1; /*0x140846625*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v8 + 16), 1, 0) ) /*0x140846629*/
  {
    v17 = a2; /*0x140846768*/
    sub_1416C15B0((volatile void *)(v8 + 16)); /*0x14084676b*/
    a2 = v17; /*0x140846770*/
  }
  if ( !(2 * *off_141EC90B8) ) /*0x140846640*/
  {
    v10 = 0; /*0x14084664c*/
    v11 = *(unsigned __int8 *)(v8 + 17); /*0x14084664e*/
    if ( !(_BYTE)v11 ) /*0x140846656*/
      goto LABEL_5; /*0x140846656*/
LABEL_27:
    v25 = v8 + 16; /*0x140846793*/
    LOBYTE(v26) = v10; /*0x140846797*/
    sub_1416C3060( /*0x1408467bd*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v25,
      (unsigned int)&off_141796230,
      (__int64)&off_141796808);
  }
  v18 = a2; /*0x140846778*/
  v10 = sub_1416C2250(a1, a2); /*0x14084677b*/
  a2 = v18; /*0x140846780*/
  LOBYTE(v10) = v10 ^ 1; /*0x140846783*/
  v11 = *(unsigned __int8 *)(v8 + 17); /*0x140846785*/
  if ( (_BYTE)v11 ) /*0x14084678d*/
    goto LABEL_27; /*0x14084678d*/
LABEL_5:
  LODWORD(v29) = v10; /*0x14084665c*/
  v12 = *(_QWORD *)(v8 + 40); /*0x14084665f*/
  v13 = -1; /*0x140846664*/
  if ( v12 ) /*0x14084666e*/
  {
    v28 = (_QWORD *)(v8 + 16); /*0x140846674*/
    v14 = a2; /*0x140846678*/
    v15 = 232 * v12; /*0x140846680*/
    v4 = *(_QWORD *)(v8 + 32) + 72LL; /*0x140846687*/
    while ( *(_QWORD *)(v4 - 56) != a4 || (unsigned int)sub_1416847B0(*(_QWORD *)(v4 - 64), a3, a4) ) /*0x1408466b7*/
    {
      v4 += 232; /*0x140846690*/
      v15 -= 232; /*0x140846697*/
      if ( !v15 ) /*0x14084669e*/
      {
        a2 = v14; /*0x1408466e9*/
        v9 = (char *)(v8 + 16); /*0x1408466ec*/
        v13 = -1; /*0x1408466f1*/
        if ( !(_BYTE)v29 ) /*0x1408466fc*/
          goto LABEL_22; /*0x1408466fc*/
        goto LABEL_23; /*0x1408466fc*/
      }
    }
    sub_14149C500(&v25, v4); /*0x1408466c0*/
    v13 = -1; /*0x1408466ce*/
    if ( v25 != -1 ) /*0x1408466d5*/
    {
      v11 = v26; /*0x1408466d7*/
      v4 = v27; /*0x1408466db*/
      if ( (_QWORD)v27 ) /*0x1408466e2*/
      {
        v13 = v25; /*0x1408466e4*/
      }
      else
      {
        if ( v25 ) /*0x14084670d*/
          sub_140001660(v26, v25, 1); /*0x140846715*/
        v4 = 0; /*0x14084671a*/
      }
    }
    a2 = v14; /*0x14084671d*/
    v9 = (char *)(v8 + 16); /*0x140846720*/
    if ( (_BYTE)v29 ) /*0x140846729*/
      goto LABEL_23; /*0x140846729*/
  }
  else if ( (_BYTE)v29 ) /*0x140846704*/
  {
    goto LABEL_23; /*0x140846704*/
  }
LABEL_22:
  if ( 2 * *off_141EC90B8 ) /*0x140846735*/
  {
    v29 = v13; /*0x14084687c*/
    v28 = a2; /*0x140846880*/
    v22 = v11; /*0x140846884*/
    v23 = sub_1416C2250(v11, a2); /*0x140846887*/
    v11 = v22; /*0x14084688c*/
    a2 = v28; /*0x14084688f*/
    v13 = v29; /*0x140846893*/
    if ( !v23 ) /*0x140846899*/
      *(_BYTE *)(v8 + 17) = 1; /*0x14084689f*/
  }
LABEL_23:
  v16 = *v9; /*0x140846741*/
  *v9 = 0; /*0x140846743*/
  if ( v16 == 2 ) /*0x140846749*/
  {
    v29 = v11; /*0x1408467c5*/
    v19 = v13; /*0x1408467cc*/
    v20 = a2; /*0x1408467cf*/
    WakeByAddressSingle(v9); /*0x1408467d2*/
    v11 = v29; /*0x1408467d7*/
    a2 = v20; /*0x1408467db*/
    v13 = v19; /*0x1408467de*/
    if ( v19 != -1 ) /*0x1408467e5*/
      goto LABEL_25; /*0x1408467e5*/
LABEL_29:
    get_api_key(&v25, *a2 + 16LL, a3, a4); /*0x1408467eb*/
    if ( (_BYTE)v25 ) /*0x140846805*/
    {
      if ( v26 ) /*0x14084680e*/
        sub_140001660(v27, v26, 1); /*0x14084681a*/
    }
    else
    {
      v24 = v27; /*0x140846829*/
      if ( v26 != -2 && v26 != -1 ) /*0x14084683f*/
      {
        *(_QWORD *)v7 = v26; /*0x140846841*/
        *(_OWORD *)(v7 + 8) = v24; /*0x140846848*/
        return v7; /*0x14084684c*/
      }
    }
    *(_QWORD *)v7 = 0; /*0x14084684e*/
    *(_QWORD *)(v7 + 8) = 1; /*0x140846855*/
    *(_QWORD *)(v7 + 16) = 0; /*0x14084685d*/
    return v7; /*0x14084685d*/
  }
  if ( v13 == -1 ) /*0x14084674f*/
    goto LABEL_29; /*0x14084674f*/
LABEL_25:
  *(_QWORD *)v7 = v13; /*0x140846755*/
  *(_QWORD *)(v7 + 8) = v11; /*0x140846758*/
  *(_QWORD *)(v7 + 16) = v4; /*0x14084675c*/
  return v7; /*0x140846868*/
}

// --- refs ---
// 0x1416c15b0  sub_1416C15B0
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141796808  off_141796808
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x1416847b0  sub_1416847B0
// 0x14149c500  sub_14149C500
// 0x140001660  sub_140001660
// 0x1416c1670  WakeByAddressSingle
// 0x1404d9190  get_api_key
