// __ZN13codexmate_lib4core5voice3asr9AsrConfig13is_configured @ 0x100339ac0 | 基线 same-set
bool __fastcall codexmate_lib::core::voice::asr::AsrConfig::is_configured::h081cdf8b8b918edc(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v5; // [rsp+0h] [rbp-20h] BYREF
  _QWORD *v6; // [rsp+8h] [rbp-18h]
  __int64 v7; // [rsp+10h] [rbp-10h]

  codexmate_lib::core::voice::asr::normalize_provider::h644de565ae8d1850(&v5, a1[1], a1[2]); /*0x100339ad8*/
  if ( v7 == 11 && !(*v6 ^ 0x657053656C707061LL | *(_QWORD *)((char *)v6 + 3) ^ 0x686365657053656CLL) ) /*0x100339b06*/
  {
    if ( v5 ) /*0x100339b6d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100339b74*/
    return 1; /*0x100339b79*/
  }
  else
  {
    if ( v5 ) /*0x100339b0f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100339b1a*/
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[4], a1[5]); /*0x100339b27*/
    if ( v1 && (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[7], a1[8]), v2) ) /*0x100339b41*/
    {
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[10], a1[11]); /*0x100339b4b*/
      return v3 != 0; /*0x100339b53*/
    }
    else
    {
      return 0; /*0x100339b5d*/
    }
  }
}