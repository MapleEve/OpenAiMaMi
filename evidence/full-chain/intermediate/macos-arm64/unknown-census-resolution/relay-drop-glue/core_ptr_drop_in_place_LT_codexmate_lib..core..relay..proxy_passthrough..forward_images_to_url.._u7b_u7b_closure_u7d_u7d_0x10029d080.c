// IDA Hex-Rays decompile evidence
// addr: 0x10029d080
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_passthrough..forward_images_to_url..$u7b$$u7b$closure$u7d$$u7d$$GT$::hdc06f952243e97d9(
        __int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 82); /*0x10029d086*/
  if ( !*(_BYTE *)(a1 + 82) ) /*0x10029d086*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 32LL))( /*0x10029d0c5*/
             a1 + 24,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16));
  if ( (_DWORD)result == 3 ) /*0x10029d091*/
  {
    result = core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a1 + 32); /*0x10029d09a*/
    *(_WORD *)(a1 + 80) = 0; /*0x10029d09f*/
  }
  return result; /*0x10029d0a9*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1002be4c0  __ZN4core3ptr57drop_in_place$LT$reqwest..async_impl..client..Pending$GT$17h14bbaa446e9798e2E_1
