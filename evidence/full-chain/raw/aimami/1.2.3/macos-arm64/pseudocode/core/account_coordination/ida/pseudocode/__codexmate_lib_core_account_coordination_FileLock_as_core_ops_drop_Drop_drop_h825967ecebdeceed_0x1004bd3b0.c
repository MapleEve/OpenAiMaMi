// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::account_coordination::FileLock as core::ops::drop::Drop>::drop::h825967ecebdeceed @ 0x1004bd3b0 | full-body via IDA decompiler
double _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  double result; // xmm0_8

  v0 = _$LT$std..fs..File$u20$as$u20$fs2..FileExt$GT$::unlock::hd8ce57d7d01d5121();
  if ( (v0 & 3) == 1 )
  {
    v1 = v0;
    v2 = v0 - 1;
    v3 = *(_QWORD *)(v1 - 1);
    v4 = *(_QWORD *)(v1 + 7);
    if ( *(_QWORD *)v4 )
      (*(void (__fastcall **)(__int64))v4)(v3);
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16));
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24, 8);
  }
  return result;
}
