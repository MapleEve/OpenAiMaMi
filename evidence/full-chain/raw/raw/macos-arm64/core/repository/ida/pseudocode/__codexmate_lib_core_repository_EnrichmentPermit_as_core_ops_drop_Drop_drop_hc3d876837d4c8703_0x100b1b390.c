// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::repository::EnrichmentPermit as core::ops::drop::Drop>::drop::hc3d876837d4c8703 @ 0x100b1b390 | full-body via IDA Python(IDA decompiler.decompile direct write)
__int64 __fastcall _$LT$codexmate_lib..core..repository..EnrichmentPermit$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc3d876837d4c8703(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // rdx

  v2 = *a1;
  v3 = (__int64 *)(*a1 + 16LL);
  v4 = *v3;
  if ( !*v3 )
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3);
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4);
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) ^ 1;
  else
    v7 = 0;
  v8 = *(_QWORD *)(v2 + 32);
  v9 = 0;
  v10 = v8 == 0;
  v11 = v8 - 1;
  if ( !v10 )
    v9 = v11;
  *(_QWORD *)(v2 + 32) = v9;
  std::sync::nonpoison::condvar::Condvar::notify_one::hb8c8adc7428df25b(v2 + 40);
  if ( !v7
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v2 + 40,
                           a2,
                           v12,
                           std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(v2 + 24) = 1;
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v3);
}
