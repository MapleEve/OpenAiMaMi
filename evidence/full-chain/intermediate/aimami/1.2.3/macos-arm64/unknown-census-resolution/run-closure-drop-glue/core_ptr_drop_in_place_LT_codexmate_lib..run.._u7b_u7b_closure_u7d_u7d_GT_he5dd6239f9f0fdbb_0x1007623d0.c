// IDA Hex-Rays decompile evidence
// addr: 0x1007623d0
// cluster: run_closure
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
_QWORD *__fastcall core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$$GT$::he5dd6239f9f0fdbb(
        __int64 a1)
{
  bool v1; // zf
  _QWORD *result; // rax

  v1 = (**(_QWORD **)a1)-- == 1; /*0x1007623dd*/
  if ( v1 ) /*0x1007623e0*/
    alloc::rc::Rc$LT$T$C$A$GT$::drop_slow::h7a772f7213d8954e(a1); /*0x1007623e5*/
  result = *(_QWORD **)(a1 + 8); /*0x1007623ea*/
  v1 = (*result)-- == 1; /*0x1007623ee*/
  if ( v1 ) /*0x1007623f1*/
    return (_QWORD *)alloc::rc::Rc$LT$T$C$A$GT$::drop_slow::h3653d8a40b8e45c8(a1 + 8); /*0x100762403*/
  return result; /*0x1007623f3*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x1002ceee0  __ZN5alloc2rc15Rc$LT$T$C$A$GT$9drop_slow17h7a772f7213d8954eE
// 0x1002cec80  __ZN5alloc2rc15Rc$LT$T$C$A$GT$9drop_slow17h3653d8a40b8e45c8E
