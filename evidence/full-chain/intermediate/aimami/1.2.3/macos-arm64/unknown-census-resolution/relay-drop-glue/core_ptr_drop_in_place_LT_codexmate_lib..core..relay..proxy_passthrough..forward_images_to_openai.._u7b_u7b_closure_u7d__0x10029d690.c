// IDA Hex-Rays decompile evidence
// addr: 0x10029d690
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_passthrough..forward_images_to_openai..$u7b$$u7b$closure$u7d$$u7d$$GT$::h46b83c3d7311bd55(
        __int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 136); /*0x10029d696*/
  if ( !*(_BYTE *)(a1 + 136) ) /*0x10029d696*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 32LL))( /*0x10029d6e8*/
             a1 + 24,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16));
  if ( (_DWORD)result == 3 ) /*0x10029d6a4*/
  {
    result = *(unsigned __int8 *)(a1 + 114); /*0x10029d6a6*/
    if ( (_DWORD)result == 3 ) /*0x10029d6ad*/
    {
      result = core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(a1 + 64); /*0x10029d6f1*/
      *(_WORD *)(a1 + 112) = 0; /*0x10029d6f6*/
    }
    else if ( !*(_BYTE *)(a1 + 114) ) /*0x10029d6a6*/
    {
      return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 32) + 32LL))( /*0x10029d6cd*/
               a1 + 56,
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 48));
    }
  }
  return result; /*0x10029d6cc*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1002be4c0  __ZN4core3ptr57drop_in_place$LT$reqwest..async_impl..client..Pending$GT$17h14bbaa446e9798e2E_1
