// __ZN13codexmate_lib4core5relay16codex_diagnostic26is_known_placeholder_token @ 0x1004ffcb0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::is_known_placeholder_token::h0dfcb00f92fc875c(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned int v2; // r14d
  bool v3; // al
  __int64 v4; // rsi
  __int64 v6; // [rsp+8h] [rbp-28h] BYREF
  __int64 v7; // [rsp+10h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-18h]

  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v6, a1, a2); /*0x1004ffcc8*/
  switch ( v8 ) /*0x1004ffcf1*/
  {
    case 4uLL: /*0x1004ffcf1*/
      LOBYTE(v2) = 1; /*0x1004ffcf3*/
      if ( *(_DWORD *)v7 != 1701536102 /*0x1004ffd2c*/
        && *(_DWORD *)v7 != 1953719668
        && *(_DWORD *)v7 != 1801678701
        && *(_DWORD *)v7 != 1819047278
        && *(_DWORD *)v7 != 1701736302 )
      {
        goto LABEL_22; /*0x1004ffd2c*/
      }
      goto LABEL_26; /*0x1004ffd2c*/
    case 7uLL: /*0x1004ffcf1*/
      if ( !(*(_DWORD *)v7 ^ 0x61766E69 | *(_DWORD *)(v7 + 3) ^ 0x64696C61) ) /*0x1004ffd65*/
        goto LABEL_29; /*0x1004ffd67*/
      goto LABEL_23; /*0x1004ffd67*/
    case 9uLL: /*0x1004ffcf1*/
      if ( !(*(_QWORD *)v7 ^ 0x656E696665646E75LL | *(unsigned __int8 *)(v7 + 8) ^ 0x64LL) ) /*0x1004ffd4c*/
        goto LABEL_29; /*0x1004ffd4f*/
      goto LABEL_18; /*0x1004ffd4f*/
    case 0xBuLL: /*0x1004ffcf1*/
      if ( !(*(_QWORD *)v7 ^ 0x6C6F686563616C70LL | *(_QWORD *)(v7 + 3) ^ 0x7265646C6F686563LL) ) /*0x1004ffd8d*/
        goto LABEL_29; /*0x1004ffd90*/
      goto LABEL_18; /*0x1004ffd90*/
    default:
      if ( v8 >= 9 ) /*0x1004ffd9b*/
      {
LABEL_18:
        LOBYTE(v2) = 1; /*0x1004ffdab*/
        if ( !(*(_QWORD *)v7 ^ 0x63746977732D6363LL | *(unsigned __int8 *)(v7 + 8) ^ 0x68LL) /*0x1004ffddc*/
          || !(*(_QWORD *)v7 ^ 0x63746977735F6363LL | *(unsigned __int8 *)(v7 + 8) ^ 0x68LL) )
        {
          goto LABEL_26; /*0x1004ffddf*/
        }
        goto LABEL_20; /*0x1004ffddf*/
      }
      if ( v8 != 7 ) /*0x1004ffda1*/
      {
        if ( v8 != 8 ) /*0x1004ffda7*/
        {
LABEL_22:
          v3 = 0; /*0x1004ffe02*/
LABEL_25:
          LOBYTE(v2) = v3 || a2 < 0xA; /*0x1004ffe2d*/
          goto LABEL_26; /*0x1004ffe35*/
        }
LABEL_20:
        LOBYTE(v2) = 1; /*0x1004ffde1*/
        if ( *(_QWORD *)v7 != 0x6863746977736363LL && *(_QWORD *)v7 != 0x7865646F63656564LL ) /*0x1004ffe00*/
          goto LABEL_22; /*0x1004ffe00*/
LABEL_26:
        v4 = v6; /*0x1004ffe38*/
        if ( !v6 ) /*0x1004ffe3f*/
          return v2; /*0x1004ffe3f*/
        goto LABEL_27; /*0x1004ffe3f*/
      }
LABEL_23:
      if ( *(_DWORD *)v7 ^ 0x662D6B73 | *(_DWORD *)(v7 + 3) ^ 0x656B6166 ) /*0x1004ffe15*/
      {
        v3 = (*(_DWORD *)v7 ^ 0x742D6B73 | *(_DWORD *)(v7 + 3) ^ 0x74736574) == 0; /*0x1004ffe2a*/
        goto LABEL_25; /*0x1004ffe2a*/
      }
LABEL_29:
      LOBYTE(v2) = 1; /*0x1004ffe57*/
      v4 = v6; /*0x1004ffe5a*/
      if ( v6 ) /*0x1004ffe61*/
LABEL_27:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v4, 1); /*0x1004ffe41*/
      return v2;
  }
}