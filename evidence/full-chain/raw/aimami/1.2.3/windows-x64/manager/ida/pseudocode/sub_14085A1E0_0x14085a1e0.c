// addr: 0x14085a1e0
// name (owner-map): sub_14085A1E0
// module: core::relay::manager
// source: IDA remote hexrays decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14085A1E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID v8; // rcx
  char v9; // al
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  char v12; // [rsp+30h] [rbp-20h]
  PVOID Address; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-Ch]
  __int64 v15; // [rsp+48h] [rbp-8h]

  v15 = -2; /*0x14085a1ef*/
  v2 = a1; /*0x14085a1f7*/
  v3 = *(_QWORD *)(a2 + 8); /*0x14085a1fa*/
  LOBYTE(a1) = 1; /*0x14085a202*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v3 + 16), 1, 0) ) /*0x14085a206*/
    sub_1416C15B0((volatile void *)(v3 + 16)); /*0x14085a26b*/
  v4 = off_141EC90B8; /*0x14085a20d*/
  if ( 2 * *off_141EC90B8 ) /*0x14085a217*/
  {
    v5 = sub_1416C2250(a1, a2); /*0x14085a272*/
    LOBYTE(v5) = v5 ^ 1; /*0x14085a277*/
    if ( !*(_BYTE *)(v3 + 17) ) /*0x14085a27f*/
      goto LABEL_5; /*0x14085a27f*/
LABEL_11:
    v11 = v3 + 16; /*0x14085a281*/
    v12 = v5; /*0x14085a285*/
    sub_1416C3060( /*0x14085a2ab*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v11,
      (unsigned int)&off_141796230,
      (__int64)&off_141797E78);
  }
  v5 = 0; /*0x14085a21f*/
  if ( *(_BYTE *)(v3 + 17) ) /*0x14085a221*/
    goto LABEL_11; /*0x14085a227*/
LABEL_5:
  v14 = v5; /*0x14085a229*/
  Address = (PVOID)(v3 + 16); /*0x14085a22c*/
  sub_140892360(v2, v3 + 24); /*0x14085a237*/
  if ( !(_BYTE)v14 && 2 * *v4 && !(unsigned __int8)sub_1416C2250(v7, v6) ) /*0x14085a2ba*/
    *(_BYTE *)(v3 + 17) = 1; /*0x14085a2c3*/
  v8 = Address; /*0x14085a250*/
  v9 = *(_BYTE *)Address; /*0x14085a254*/
  *(_BYTE *)Address = 0; /*0x14085a254*/
  if ( v9 == 2 ) /*0x14085a258*/
    WakeByAddressSingle(v8); /*0x14085a2b3*/
  return v2; /*0x14085a25d*/
}

// --- refs ---
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141797e78  off_141797E78
// 0x140892360  sub_140892360
// 0x1416c1670  WakeByAddressSingle
