// mac 1.1.8 refresh_single_account_usage node va=0x100e6fc70 depth=3
// core3ptr119drop_in_place
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri..manager..window..WindowManager$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::h5e667a2af897f004(
        __int64 a1)
{
  pthread_mutex_t *v1; // r15
  volatile signed __int64 *result; // rax

  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)(a1 + 40)); /*0x100e6fc85*/
  v1 = *(pthread_mutex_t **)(a1 + 40); /*0x100e6fc8a*/
  *(_QWORD *)(a1 + 40) = 0; /*0x100e6fc8e*/
  if ( v1 ) /*0x100e6fc99*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v1); /*0x100e6fc9e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fcb0*/
  }
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h420ce784c938aab9(a1 + 56); /*0x100e6fcb9*/
  if ( *(_QWORD *)a1 >= (signed __int64)0x8000000000000002LL && *(_QWORD *)a1 ) /*0x100e6fcbe*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e6fcde*/
  result = *(volatile signed __int64 **)(a1 + 32); /*0x100e6fce3*/
  if ( !_InterlockedDecrement64(result) ) /*0x100e6fce7*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h4c5205e095bdc9fd(a1 + 32); /*0x100e6fcfc*/
  return result; /*0x100e6fcf4*/
}