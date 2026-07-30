// __ZN13codexmate_lib4core5relay10translator29leading_think_prefix_decision @ 0x10080a950 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::translator::leading_think_prefix_decision::h7b21eb5fe97df69c(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v2; // rax
  size_t v3; // rdx
  unsigned int v4; // ecx

  v2 = (_DWORD *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hfadac13bdab5baff(a1, a2); /*0x10080a954*/
  if ( !v3 ) /*0x10080a95c*/
    return 0; /*0x10080a99b*/
  if ( v3 < 7 ) /*0x10080a962*/
    goto LABEL_5; /*0x10080a962*/
  v4 = *v2 ^ 0x6968743C; /*0x10080a969*/
  if ( v4 | *(_DWORD *)((char *)v2 + 3) ^ 0x3E6B6E69 ) /*0x10080a973*/
  {
    LOBYTE(v4) = 2; /*0x10080a977*/
    if ( v3 != 7 ) /*0x10080a97d*/
      return v4; /*0x10080a998*/
LABEL_5:
    LOBYTE(v4) = 2 * (memcmp(v2, "<think>", v3) != 0); /*0x10080a97f*/
    return v4; /*0x10080a993*/
  }
  LOBYTE(v4) = 1; /*0x10080a99f*/
  return v4; /*0x10080a997*/
}