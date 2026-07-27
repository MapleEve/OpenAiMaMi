// __ZN13codexmate_lib4core4auth19parse_iso_timestamp @ 0x1008edf10 | 基线 same-set
_BOOL8 __fastcall codexmate_lib::core::auth::parse_iso_timestamp::hc89d5b79338e23d0(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  _DWORD v3[10]; // [rsp-28h] [rbp-28h] BYREF

  if ( !a1 ) /*0x1008edf13*/
    return 0; /*0x1008edfed*/
  chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5( /*0x1008edf34*/
    v3,
    a1,
    a2);
  result = true; /*0x1008edfdf*/
  if ( !v3[0] ) /*0x1008edf3e*/
  {
    chrono::naive::datetime::NaiveDateTime::parse_from_str::hd422a9b509517f93( /*0x1008edf57*/
      v3,
      a1,
      a2,
      &anon_155c4da9b5393270cfa7378e2b52c417_228,
      20);
    if ( !v3[0] ) /*0x1008edf61*/
      return false; /*0x1008edf3e*/
  }
  return result; /*0x1008edfec*/
}