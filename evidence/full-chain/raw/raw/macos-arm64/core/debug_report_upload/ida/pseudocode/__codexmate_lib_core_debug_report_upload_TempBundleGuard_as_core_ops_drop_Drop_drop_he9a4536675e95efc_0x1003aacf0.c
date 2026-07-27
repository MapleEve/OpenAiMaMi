// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::debug_report_upload::TempBundleGuard as core::ops::drop::Drop>::drop::he9a4536675e95efc @ 0x1003aacf0 | full-body via IDA Python(IDA decompiler.decompile direct write)
double __fastcall _$LT$codexmate_lib..core..debug_report_upload..TempBundleGuard$u20$as$u20$core..ops..drop..Drop$GT$::drop::he9a4536675e95efc(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  double result; // xmm0_8

  v1 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(*(void **)(a1 + 8), *(_QWORD *)(a1 + 16));
  if ( (v1 & 3) == 1 )
  {
    v2 = v1;
    v3 = v1 - 1;
    v4 = *(_QWORD *)(v2 - 1);
    v5 = *(_QWORD *)(v2 + 7);
    if ( *(_QWORD *)v5 )
      (*(void (__fastcall **)(__int64))v5)(v4);
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16));
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8);
  }
  return result;
}
