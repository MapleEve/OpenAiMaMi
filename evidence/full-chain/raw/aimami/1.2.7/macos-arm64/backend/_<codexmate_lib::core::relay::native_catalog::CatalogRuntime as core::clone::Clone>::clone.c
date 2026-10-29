// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: _$LT$codexmate_lib..core..relay..native_catalog..CatalogRuntime$u20$as$u20$core..clone..Clone$GT$::clone::h1815177c1e4d75eb; addr: 0x1002b81a0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:15Z
__int16 __fastcall _$LT$codexmate_lib..core..relay..native_catalog..CatalogRuntime$u20$as$u20$core..clone..Clone$GT$::clone::h1815177c1e4d75eb(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        char a4,
        double a5,
        __m128 a6)
{
  __int128 v6; // xmm0
  __int16 result; // ax

  v6 = *a2; /*0x1002b81a4*/
  result = *((_WORD *)a2 + 20); /*0x1002b81a7*/
  if ( result == 7 ) /*0x1002b81af*/
  {
    result = 7; /*0x1002b81b1*/
  }
  else
  {
    a4 = *((_BYTE *)a2 + 44); /*0x1002b81b7*/
    a6 = (__m128)a2[1]; /*0x1002b81bb*/
    a3 = *((_QWORD *)a2 + 4); /*0x1002b81bf*/
    if ( result == 1 ) /*0x1002b81c7*/
    {
      LOWORD(a2) = *((_WORD *)a2 + 21); /*0x1002b81c9*/
      result = 1; /*0x1002b81cd*/
    }
  }
  *(_OWORD *)a1 = v6; /*0x1002b81d3*/
  *(__m128 *)(a1 + 16) = a6; /*0x1002b81d6*/
  *(_QWORD *)(a1 + 32) = a3; /*0x1002b81da*/
  *(_WORD *)(a1 + 40) = result; /*0x1002b81de*/
  *(_WORD *)(a1 + 42) = (_WORD)a2; /*0x1002b81e2*/
  *(_BYTE *)(a1 + 44) = a4; /*0x1002b81e6*/
  return result; /*0x1002b81e9*/
}