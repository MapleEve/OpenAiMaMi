// mac 1.1.8 refresh_single_account_usage node va=0x1010cc760 depth=3
// _::drop
int __fastcall _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(
        pthread_mutex_t **a1)
{
  pthread_mutex_t *v1; // rbx
  int result; // eax

  v1 = *a1; /*0x1010cc766*/
  *a1 = nullptr; /*0x1010cc769*/
  if ( v1 ) /*0x1010cc773*/
  {
    result = pthread_mutex_trylock(v1); /*0x1010cc778*/
    if ( !result ) /*0x1010cc77f*/
    {
      pthread_mutex_unlock(v1); /*0x1010cc78b*/
      pthread_mutex_destroy(v1); /*0x1010cc793*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010cc7ab*/
    }
  }
  return result; /*0x1010cc785*/
}