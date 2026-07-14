// mac 1.1.8 force_kill_codex node va=0x1010cd290 depth=3
// _::add
__int64 __fastcall _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4)
{
  bool v4; // of
  __int64 v5; // rdi

  v4 = __OFADD__(a3, a1); /*0x1010cd290*/
  v5 = a3 + a1; /*0x1010cd290*/
  if ( v4 != a3 < 0 || (unsigned int)(a2 + a4) >= 0x3B9ACA00 && (v4 = __OFADD__(1, v5), ++v5, v4) ) /*0x1010cd2ad*/
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1010cd2d2*/
      "overflow when adding duration to instantoverflow when subtracting duration from instantdata provided contains a nul byte",
      40,
      &off_1015AF210);
  return v5; /*0x1010cd2ba*/
}