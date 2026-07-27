// __ZN13codexmate_lib4core5relay14codex_mutation17CodexMutationGate4lock @ 0x1006f7100 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r12
  __int64 *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r15
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(); // rcx
  _QWORD v14[3]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-30h]

  v15[0] = a3; /*0x1006f7114*/
  v15[1] = a4; /*0x1006f7118*/
  v5 = *a2; /*0x1006f711c*/
  v6 = (__int64 *)(*a2 + 16LL); /*0x1006f711f*/
  v7 = *v6; /*0x1006f7124*/
  if ( !*v6 ) /*0x1006f7124*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(*a2 + 16LL); /*0x1006f71e7*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x1006f7132*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1006f7142*/
  {
    v10 = 0; /*0x1006f714e*/
    if ( *(_BYTE *)(v5 + 24) ) /*0x1006f7151*/
      goto LABEL_5; /*0x1006f7159*/
LABEL_9:
    *(_QWORD *)(a1 + 8) = v6; /*0x1006f7209*/
    *(_BYTE *)(a1 + 16) = v10; /*0x1006f720d*/
    *(_QWORD *)a1 = 11; /*0x1006f7211*/
    return a1; /*0x1006f7211*/
  }
  v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9) ^ 1; /*0x1006f71f7*/
  if ( !*(_BYTE *)(v5 + 24) ) /*0x1006f71fb*/
    goto LABEL_9; /*0x1006f7203*/
LABEL_5:
  v16 = v15; /*0x1006f715f*/
  v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006f716e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v14, &anon_b756970ae374bf3e9e8d782d8f9d3f8c_177, &v16); /*0x1006f7181*/
  v16 = (_QWORD *)v14[0]; /*0x1006f718e*/
  v17 = (__int64 (__fastcall *)())v14[1]; /*0x1006f7192*/
  v18 = v14[2]; /*0x1006f719a*/
  if ( !v10 /*0x1006f722a*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v14,
                           &anon_b756970ae374bf3e9e8d782d8f9d3f8c_177,
                           v11,
                           std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(v5 + 24) = 1; /*0x1006f7233*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x1006f71b9*/
  *(_QWORD *)a1 = 10; /*0x1006f71be*/
  v12 = v17; /*0x1006f71c9*/
  *(_QWORD *)(a1 + 8) = v16; /*0x1006f71cd*/
  *(_QWORD *)(a1 + 16) = v12; /*0x1006f71d1*/
  *(_QWORD *)(a1 + 24) = v18; /*0x1006f71d9*/
  return a1; /*0x1006f721b*/
}