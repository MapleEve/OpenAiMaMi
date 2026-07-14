// mac 1.1.8 switch_account_and_restart_codex node va=0x100e744a0 depth=3
// core3ptr86drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$std..sync..poison..mutex..Mutex$LT$tauri..plugin..PluginStore$GT$$GT$::h68c50c0e00b37848(
        __int64 a1)
{
  pthread_mutex_t *v1; // r15
  __int64 result; // rax

  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829((pthread_mutex_t **)a1); /*0x100e744ad*/
  v1 = *(pthread_mutex_t **)a1; /*0x100e744b2*/
  *(_QWORD *)a1 = 0; /*0x100e744b5*/
  if ( v1 ) /*0x100e744bf*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v1); /*0x100e744c4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e744d6*/
  }
  result = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8df4a778672d5a0(a1 + 16); /*0x100e744e2*/
  if ( *(_QWORD *)(a1 + 16) ) /*0x100e744e7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e74506*/
  return result; /*0x100e74500*/
}