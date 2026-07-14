// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x100f3bfb0 depth=2
// alloc4sync16Arc::drop_slow
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h0c4e0b817f20a841(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 result; // rax

  v1 = *a1; /*0x100f3bfb7*/
  v2 = *(_QWORD *)(*a1 + 48); /*0x100f3bfba*/
  if ( (v2 & 1) != 0 ) /*0x100f3bfc2*/
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 32) + 24LL))(*(_QWORD *)(v1 + 40)); /*0x100f3bfcc*/
  if ( (v2 & 8) != 0 ) /*0x100f3bfd3*/
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 16) + 24LL))(*(_QWORD *)(v1 + 24)); /*0x100f3bfdd*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100f3bfe6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100f3bffe*/
  return result; /*0x100f3bffa*/
}