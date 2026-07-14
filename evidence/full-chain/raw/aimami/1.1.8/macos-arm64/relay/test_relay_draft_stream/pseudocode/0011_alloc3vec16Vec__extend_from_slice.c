// mac 1.1.8 test_relay_draft_stream node va=0x1006f2430 depth=2
// alloc3vec16Vec::extend_from_slice
void *__fastcall alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2fa7c5e9e7ae59a0(
        unsigned __int64 *a1,
        const void *a2,
        size_t a3)
{
  unsigned __int64 v4; // r15
  void *result; // rax

  v4 = a1[2]; /*0x1006f2444*/
  if ( a3 > *a1 - v4 ) /*0x1006f244e*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(a1, a1[2], a3, 1, 1u); /*0x1006f2486*/
    v4 = a1[2]; /*0x1006f248e*/
  }
  result = memcpy((void *)(v4 + a1[1]), a2, a3); /*0x1006f245a*/
  a1[2] = a3 + v4; /*0x1006f2462*/
  return result; /*0x1006f2466*/
}