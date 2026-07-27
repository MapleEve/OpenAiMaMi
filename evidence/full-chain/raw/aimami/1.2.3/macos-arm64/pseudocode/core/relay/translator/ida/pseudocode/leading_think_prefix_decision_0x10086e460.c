// __ZN13codexmate_lib4core5relay10translator29leading_think_prefix_decision @ 0x10086e460
// 1.2.3 NEW-delta | codexmate_lib::core::relay::translator::leading_think_prefix_decision | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::translator::leading_think_prefix_decision::h773dd17d3dd57b5c(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v2; // rax
  size_t v3; // rdx
  unsigned int v4; // ecx

  v2 = (_DWORD *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(a1, a2); /*0x10086e464*/
  if ( !v3 ) /*0x10086e46c*/
    return 0; /*0x10086e4ab*/
  if ( v3 < 7 ) /*0x10086e472*/
    goto LABEL_5; /*0x10086e472*/
  v4 = *v2 ^ 0x6968743C; /*0x10086e479*/
  if ( v4 | *(_DWORD *)((char *)v2 + 3) ^ 0x3E6B6E69 ) /*0x10086e483*/
  {
    LOBYTE(v4) = 2; /*0x10086e487*/
    if ( v3 != 7 ) /*0x10086e48d*/
      return v4; /*0x10086e4a8*/
LABEL_5:
    LOBYTE(v4) = 2 * (memcmp(v2, "<think>", v3) != 0); /*0x10086e48f*/
    return v4; /*0x10086e4a3*/
  }
  LOBYTE(v4) = 1; /*0x10086e4af*/
  return v4; /*0x10086e4a7*/
}