// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x1010b0030 depth=3
// core3ptr64drop_in_place
int __fastcall core::ptr::drop_in_place$LT$std..sys..pal..unix..sync..mutex..AttrGuard$GT$::h3d39968615010c55(
        pthread_mutexattr_t *a1)
{
  int result; // eax
  __int64 v2; // r8
  int v3; // [rsp+Ch] [rbp-4h] BYREF

  result = pthread_mutexattr_destroy(a1); /*0x1010b0038*/
  v3 = result; /*0x1010b003d*/
  if ( result ) /*0x1010b0042*/
    core::panicking::assert_failed::hb70d0550edc83796(0, (__int64)&v3, (__int64)"", 0, v2, (__int64)&off_1015AF1C0); /*0x1010b0060*/
  return result; /*0x1010b0044*/
}