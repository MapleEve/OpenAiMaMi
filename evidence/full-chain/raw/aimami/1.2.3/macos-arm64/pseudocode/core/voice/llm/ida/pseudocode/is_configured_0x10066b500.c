// __ZN13codexmate_lib4core5voice3llm9LlmConfig13is_configured @ 0x10066b500 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::llm::LlmConfig::is_configured::h23c56cc13cc1dc96(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v7; // [rsp+0h] [rbp-20h] BYREF
  __int64 v8; // [rsp+8h] [rbp-18h]
  __int64 v9; // [rsp+10h] [rbp-10h]

  v1 = (unsigned int)a1; /*0x10066b509*/
  codexmate_lib::core::voice::llm::normalize_provider::hc20fe0bd6fa0e76d(&v7, a1[1], a1[2]); /*0x10066b518*/
  if ( v9 == 6 && !(*(_DWORD *)v8 ^ 0x616C6C6F | *(unsigned __int16 *)(v8 + 4) ^ 0x616D) /*0x10066b54c*/
    || (core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[4], a1[5]), v2) )
  {
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[7], a1[8]); /*0x10066b556*/
    if ( v3 ) /*0x10066b55e*/
    {
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[10], a1[11]); /*0x10066b568*/
      LOBYTE(v1) = v4 != 0; /*0x10066b570*/
      v5 = v7; /*0x10066b573*/
      if ( !v7 ) /*0x10066b57a*/
        return v1; /*0x10066b57a*/
      goto LABEL_8; /*0x10066b57a*/
    }
  }
  v1 = 0; /*0x10066b57e*/
  v5 = v7; /*0x10066b580*/
  if ( v7 ) /*0x10066b587*/
LABEL_8:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v5, 1); /*0x10066b589*/
  return v1; /*0x10066b599*/
}