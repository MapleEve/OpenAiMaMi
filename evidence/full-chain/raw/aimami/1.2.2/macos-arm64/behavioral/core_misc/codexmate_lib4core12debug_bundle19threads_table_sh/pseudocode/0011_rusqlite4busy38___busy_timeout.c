// mac 1.2.2 NEW codexmate_lib4core12debug_bundle19threads_table_sh 0x100bb14c0 d=1
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

  v4 = 1000 * a3; /*0x100bb14cf*/
  if ( !is_mul_ok(0x3E8u, a3) || (v5 = a4 / 0xF4240uLL, v6 = __CFADD__(v5, v4), v7 = v5 + v4, v6) || v7 > 0x7FFFFFFF ) /*0x100bb14ec*/
    core::option::expect_failed::ha75f8bdcbd673567((__int64)"too big", 7, (__int64)&off_1018AF800); /*0x100bb153b*/
  if ( *(_QWORD *)a2 ) /*0x100bb14f1*/
    core::cell::panic_already_borrowed::hd7c6a6bf28ec0022(&off_1018AF7E8); /*0x100bb1547*/
  *(_QWORD *)a2 = -1; /*0x100bb14fa*/
  busy = sqlite3_busy_timeout(*(sqlite3 **)(a2 + 16), v7); /*0x100bb1507*/
  if ( busy ) /*0x100bb150e*/
    rusqlite::error::error_from_handle::hd78209d4a5eceb5e(a1, *(_QWORD *)(a2 + 16), busy); /*0x100bb1555*/
  else
    *a1 = 0x8000000000000016LL; /*0x100bb151a*/
  ++*(_QWORD *)a2; /*0x100bb151d*/
  return a1; /*0x100bb1523*/
}