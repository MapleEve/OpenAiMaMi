// IDA Hex-Rays decompile evidence
// addr: 0x10012ab50
// cluster: other
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..debug_report_upload..upload..$u7b$$u7b$closure$u7d$$u7d$$GT$::h353ef8c639c82c0d(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r14

  result = *(unsigned __int8 *)(a1 + 123); /*0x10012ab5a*/
  if ( (_DWORD)result == 3 ) /*0x10012ab61*/
  {
    result = core::ptr::drop_in_place$LT$reqwest..async_impl..multipart..Part..file$LT$$RF$std..path..Path$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h84ae011859330494(a1 + 128); /*0x10012abda*/
  }
  else
  {
    if ( (_DWORD)result == 4 ) /*0x10012ab66*/
    {
      a2 = *(_QWORD *)(a1 + 136); /*0x10012abc5*/
      core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(*(_QWORD *)(a1 + 128), a2); /*0x10012abcc*/
    }
    else
    {
      if ( (_DWORD)result != 5 ) /*0x10012ab6b*/
        return result; /*0x10012ab6b*/
      if ( *(_BYTE *)(a1 + 832) == 3 ) /*0x10012ab7b*/
      {
        core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a1 + 408); /*0x10012abe8*/
      }
      else if ( !*(_BYTE *)(a1 + 832) ) /*0x10012ab71*/
      {
        core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(a1 + 272); /*0x10012ab88*/
        v3 = *(_QWORD **)(a1 + 400); /*0x10012ab8d*/
        if ( *v3 ) /*0x10012ab94*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3[1], *v3, 1); /*0x10012aba5*/
        a2 = 88; /*0x10012abaa*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 88, 8); /*0x10012abb7*/
      }
    }
    *(_BYTE *)(a1 + 121) = 0; /*0x10012abed*/
    result = *(_QWORD *)(a1 + 96); /*0x10012abf1*/
    if ( !_InterlockedDecrement64((volatile signed __int64 *)result) ) /*0x10012abf5*/
      result = alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(a1 + 96, a2); /*0x10012abff*/
    *(_BYTE *)(a1 + 120) = 0; /*0x10012ac04*/
  }
  *(_BYTE *)(a1 + 122) = 0; /*0x10012ac08*/
  return result; /*0x10012ac0c*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1000f37f0  __ZN4core3ptr119drop_in_place$LT$reqwest..async_impl..multipart..Part..file$LT$$RF$std..path..Path$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h84ae011859330494E
// 0x1001246b0  __ZN4core3ptr57drop_in_place$LT$reqwest..async_impl..client..Pending$GT$17h14bbaa446e9798e2E_0
// 0x10012a670  __ZN4core3ptr96drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$17he09c21e64e830488E_0
// 0x1001080a0  __ZN4core3ptr226drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$17h0bbfe0f28d08e7ecE_0
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x100eeae30  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17he53e89bcba3b87c6E
