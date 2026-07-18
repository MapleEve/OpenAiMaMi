// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18hide_voi 0x1005e9350 d=1
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h76f5a15cecc8693d(
        __int64 *a1)
{
  volatile signed __int64 *result; // rax

  _$LT$std..sys..thread..unix..Thread$u20$as$u20$core..ops..drop..Drop$GT$::drop::h533be1924c487c06(a1 + 2); /*0x1005e935e*/
  if ( !_InterlockedDecrement64((volatile signed __int64 *)*a1) ) /*0x1005e9366*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(a1); /*0x1005e936f*/
  result = (volatile signed __int64 *)a1[1]; /*0x1005e9374*/
  if ( !_InterlockedDecrement64(result) ) /*0x1005e9378*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h1f2fb17b5a781f19(a1 + 1); /*0x1005e9389*/
  return result; /*0x1005e9385*/
}