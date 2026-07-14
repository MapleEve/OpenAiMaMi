// mac 1.1.8 refresh_single_account_usage node va=0x100e76230 depth=3
// alloc4sync16Arc::drop_slow
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf51c6cfcb53b8e21(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1; /*0x100e76234*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100e7623d*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e7624f*/
  return result; /*0x100e7624e*/
}