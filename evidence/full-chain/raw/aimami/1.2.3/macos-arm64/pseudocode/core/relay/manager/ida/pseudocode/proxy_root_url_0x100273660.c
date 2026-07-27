// __ZN13codexmate_lib4core5relay7manager12RelayManager14proxy_root_url @ 0x100273660 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::proxy_root_url::h0e74109fd00d63ed(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // r12
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  char v7; // r15
  __int64 result; // rax
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v11[7]; // [rsp+18h] [rbp-38h] BYREF

  v3 = a2[3]; /*0x100273674*/
  v4 = (_QWORD *)(v3 + 16); /*0x100273678*/
  v5 = *(_QWORD **)(v3 + 16); /*0x10027367d*/
  if ( !v5 ) /*0x100273685*/
    v5 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 16); /*0x1002736e1*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100273687*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x100273696*/
  {
    v7 = 0; /*0x10027369e*/
    if ( *(_BYTE *)(v3 + 24) ) /*0x1002736ab*/
      goto LABEL_5; /*0x1002736b3*/
LABEL_9:
    if ( *(_QWORD *)(v3 + 32) ) /*0x10027370c*/
    {
      v11[0] = v3 + 48; /*0x100273719*/
      v11[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x100273724*/
      a2 = &unk_1017B98DA; /*0x100273728*/
      v5 = v10; /*0x10027372f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v10, &unk_1017B98DA, v11); /*0x100273737*/
      a1[2] = v10[2]; /*0x100273740*/
      v9 = v10[0]; /*0x100273744*/
      a1[1] = v10[1]; /*0x10027374c*/
      *a1 = v9; /*0x100273750*/
      if ( v7 ) /*0x10027375d*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x10027375d*/
    }
    else
    {
      *a1 = 0x8000000000000000LL; /*0x100273765*/
      if ( v7 ) /*0x10027376b*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x10027378b*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1002737a4*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v5,
                             a2,
                             v6,
                             &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
    {
      *(_BYTE *)(v3 + 24) = 1; /*0x1002737ad*/
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1002737b3*/
  }
  v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x1002736f4*/
         v5,
         a2,
         v6,
         &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6)
     ^ 1;
  if ( !*(_BYTE *)(v3 + 24) ) /*0x100273702*/
    goto LABEL_9; /*0x10027370a*/
LABEL_5:
  if ( !v7 /*0x10027378c*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v5,
                           a2,
                           v6,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(v3 + 24) = 1; /*0x100273799*/
  }
  result = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1002736c9*/
  *a1 = 0x8000000000000000LL; /*0x1002736d1*/
  return result; /*0x10027377d*/
}