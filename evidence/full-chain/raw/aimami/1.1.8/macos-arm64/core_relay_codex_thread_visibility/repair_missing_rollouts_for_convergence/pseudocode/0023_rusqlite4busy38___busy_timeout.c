// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x1009533a0 d=3
_QWORD *__fastcall rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  bool v6; // cf
  unsigned __int64 v7; // rax
  unsigned int busy; // eax

  v4 = 1000 * a3; /*0x1009533af*/
  if ( !is_mul_ok(0x3E8u, a3) || (v5 = a4 / 0xF4240uLL, v6 = __CFADD__(v5, v4), v7 = v5 + v4, v6) || v7 > 0x7FFFFFFF ) /*0x1009533cc*/
    core::option::expect_failed::ha75f8bdcbd673567("too big", 7, &off_101549A90); /*0x10095341b*/
  if ( *(_QWORD *)a2 ) /*0x1009533d1*/
    core::cell::panic_already_borrowed::hd7c6a6bf28ec0022(&off_101549A78); /*0x100953427*/
  *(_QWORD *)a2 = -1; /*0x1009533da*/
  busy = sqlite3_busy_timeout(*(sqlite3 **)(a2 + 16), v7); /*0x1009533e7*/
  if ( busy ) /*0x1009533ee*/
    rusqlite::error::error_from_handle::hd78209d4a5eceb5e(a1, *(_QWORD *)(a2 + 16), busy); /*0x100953435*/
  else
    *a1 = 0x8000000000000016LL; /*0x1009533fa*/
  ++*(_QWORD *)a2; /*0x1009533fd*/
  return a1; /*0x100953403*/
}