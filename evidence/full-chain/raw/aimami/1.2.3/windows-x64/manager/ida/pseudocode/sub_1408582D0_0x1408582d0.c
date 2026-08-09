// addr: 0x1408582d0
// name (owner-map): sub_1408582D0
// module: core::relay::manager
// source: IDA remote hexrays decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1408582D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rdi
  __int64 *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID v21; // rcx
  char v22; // al
  __int64 v24; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+38h] [rbp-48h]
  __int128 v27; // [rsp+48h] [rbp-38h]
  __int128 v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+68h] [rbp-18h]
  __int128 v30; // [rsp+78h] [rbp-8h]
  __int128 v31; // [rsp+88h] [rbp+8h]
  __int128 v32; // [rsp+98h] [rbp+18h]
  __int128 v33; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v34; // [rsp+160h] [rbp+E0h]
  __int128 v35; // [rsp+170h] [rbp+F0h]
  __int128 v36; // [rsp+180h] [rbp+100h]
  __int128 v37; // [rsp+190h] [rbp+110h]
  __int128 v38; // [rsp+1A0h] [rbp+120h]
  __int64 v39; // [rsp+1B0h] [rbp+130h]
  __int64 v40; // [rsp+1B8h] [rbp+138h]
  __int64 v41; // [rsp+1C0h] [rbp+140h]
  PVOID Address; // [rsp+1C8h] [rbp+148h]
  int v43; // [rsp+1D0h] [rbp+150h]
  char v44; // [rsp+1D7h] [rbp+157h]
  __int64 v45; // [rsp+1D8h] [rbp+158h]

  v45 = -2; /*0x1408582e5*/
  v5 = a2[2]; /*0x1408582f6*/
  v39 = *(_QWORD *)(v5 + 16); /*0x1408582fe*/
  v41 = a3; /*0x140858309*/
  if ( v39 != -1 ) /*0x140858310*/
  {
    sub_14149C500(&v25, v5 + 16); /*0x14085831a*/
    v24 = 9; /*0x140858320*/
    *(_OWORD *)(a1 + 80) = v30; /*0x14085832c*/
    v6 = v26; /*0x140858330*/
    v7 = v27; /*0x140858334*/
    v8 = v28; /*0x140858338*/
    *(_OWORD *)(a1 + 64) = v29; /*0x140858340*/
    *(_OWORD *)(a1 + 48) = v8; /*0x140858344*/
    *(_OWORD *)(a1 + 32) = v7; /*0x140858348*/
    *(_OWORD *)(a1 + 16) = v6; /*0x14085834c*/
    *(_QWORD *)a1 = v24; /*0x140858354*/
    *(_QWORD *)(a1 + 8) = v25; /*0x14085835b*/
    sub_140018740(v41); /*0x140858366*/
    return a1; /*0x14085836b*/
  }
  sub_141684120(&v24, a3, 296); /*0x140858380*/
  v9 = a2[3]; /*0x140858385*/
  v44 = 1; /*0x140858389*/
  sub_140847430(&v33, v9); /*0x140858397*/
  if ( (_QWORD)v28 ) /*0x1408583a4*/
    sub_140001660(*((_QWORD *)&v28 + 1), v28, 1); /*0x1408583b0*/
  if ( *((_QWORD *)&v29 + 1) ) /*0x1408583bc*/
    sub_140001660(v30, *((_QWORD *)&v29 + 1), 1); /*0x1408583c8*/
  if ( (_QWORD)v31 != -1 && (_QWORD)v31 ) /*0x1408583de*/
    sub_140001660(*((_QWORD *)&v31 + 1), v31, 1); /*0x1408583ea*/
  v32 = v37; /*0x1408583f6*/
  v31 = v36; /*0x140858416*/
  v30 = v35; /*0x14085841a*/
  v29 = v34; /*0x14085841e*/
  v28 = v33; /*0x140858422*/
  v10 = *a2 + 16LL; /*0x140858428*/
  v44 = 1; /*0x14085842c*/
  sub_1404D8F10(&v33, v10, &v24); /*0x14085843e*/
  if ( (_DWORD)v33 != -1 ) /*0x14085844b*/
  {
    *(_OWORD *)(a1 + 80) = v38; /*0x140858454*/
    *(_OWORD *)(a1 + 64) = v37; /*0x14085845f*/
    v13 = v33; /*0x140858463*/
    v14 = v34; /*0x14085846a*/
    v15 = v35; /*0x140858471*/
    *(_OWORD *)(a1 + 48) = v36; /*0x14085847f*/
    *(_OWORD *)(a1 + 32) = v15; /*0x140858483*/
    *(_OWORD *)(a1 + 16) = v14; /*0x140858487*/
    *(_OWORD *)a1 = v13; /*0x14085848b*/
    sub_140018740(&v24); /*0x140858492*/
    return a1; /*0x140858498*/
  }
  v16 = a2[1]; /*0x14085849d*/
  LOBYTE(v12) = 1; /*0x1408584a5*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v16 + 16), 1, 0) ) /*0x1408584a9*/
  {
    v44 = 1; /*0x140858548*/
    sub_1416C15B0((volatile void *)(v16 + 16)); /*0x140858552*/
  }
  v17 = off_141EC90B8; /*0x1408584b4*/
  if ( !(2 * *off_141EC90B8) ) /*0x1408584be*/
  {
    v18 = 0; /*0x1408584ca*/
    if ( !*(_BYTE *)(v16 + 17) ) /*0x1408584cc*/
      goto LABEL_16; /*0x1408584d2*/
LABEL_22:
    *(_QWORD *)&v33 = v16 + 16; /*0x140858578*/
    BYTE8(v33) = v18; /*0x14085857f*/
    sub_1416C3060( /*0x1408585ab*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v33,
      (unsigned int)&off_141796230,
      (__int64)&off_141797DD8);
  }
  v44 = 1; /*0x14085855d*/
  v18 = sub_1416C2250(v12, v11); /*0x140858564*/
  LOBYTE(v18) = v18 ^ 1; /*0x14085856a*/
  if ( *(_BYTE *)(v16 + 17) ) /*0x14085856c*/
    goto LABEL_22; /*0x140858572*/
LABEL_16:
  v43 = v18; /*0x1408584d8*/
  Address = (PVOID)(v16 + 16); /*0x1408584de*/
  v40 = v16 + 24; /*0x1408584e9*/
  sub_140018740(v16 + 24); /*0x1408584f0*/
  sub_141684120(v16 + 24, &v24, 296); /*0x140858504*/
  *(_QWORD *)a1 = -1; /*0x140858509*/
  if ( !(_BYTE)v43 ) /*0x140858517*/
  {
    if ( 2 * *v17 ) /*0x14085851c*/
    {
      v44 = 0; /*0x1408585c5*/
      if ( !(unsigned __int8)sub_1416C2250(v20, v19) ) /*0x1408585cc*/
        *(_BYTE *)(v16 + 17) = 1; /*0x1408585da*/
    }
  }
  v21 = Address; /*0x14085852a*/
  v22 = *(_BYTE *)Address; /*0x140858531*/
  *(_BYTE *)Address = 0; /*0x140858531*/
  if ( v22 == 2 ) /*0x140858535*/
  {
    v44 = 0; /*0x1408585b3*/
    WakeByAddressSingle(v21); /*0x1408585ba*/
  }
  return a1; /*0x14085853a*/
}

// --- refs ---
// 0x14149c500  sub_14149C500
// 0x140018740  sub_140018740
// 0x141684120  sub_141684120
// 0x140847430  sub_140847430
// 0x140001660  sub_140001660
// 0x1404d8f10  sub_1404D8F10
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141797dd8  off_141797DD8
// 0x1416c2250  sub_1416C2250
// 0x1416c1670  WakeByAddressSingle
