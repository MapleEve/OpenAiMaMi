// __ZN13codexmate_lib4core5relay6models13RelayProvider14exposed_models @ 0x10032c7d0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::models::RelayProvider::exposed_models::h9992f3acf525d658(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  char v4; // al
  __int64 v5; // rcx
  _QWORD v7[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a2 + 136) ) /*0x10032c7e3*/
  {
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h30f03e4abd722ada(a1, a2 + 120); /*0x10032c7f7*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10032c801*/
    v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(96, 8); /*0x10032c810*/
    if ( !v2 ) /*0x10032c818*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 96); /*0x10032c8aa*/
    v3 = v2; /*0x10032c81e*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v7, a2 + 96); /*0x10032c829*/
    v4 = *(_BYTE *)(a2 + 230); /*0x10032c82e*/
    *(_QWORD *)(v3 + 32) = v7[2]; /*0x10032c83a*/
    v5 = v7[0]; /*0x10032c83e*/
    *(_QWORD *)(v3 + 24) = v7[1]; /*0x10032c846*/
    *(_QWORD *)(v3 + 16) = v5; /*0x10032c84a*/
    *(_QWORD *)v3 = 0; /*0x10032c84e*/
    *(_QWORD *)(v3 + 40) = 0; /*0x10032c855*/
    *(_QWORD *)(v3 + 48) = 1; /*0x10032c85d*/
    *(_QWORD *)(v3 + 56) = 0; /*0x10032c865*/
    *(_QWORD *)(v3 + 64) = 0x8000000000000000LL; /*0x10032c877*/
    *(_BYTE *)(v3 + 88) = v4; /*0x10032c87b*/
    *a1 = 1; /*0x10032c87f*/
    a1[1] = v3; /*0x10032c886*/
    a1[2] = 1; /*0x10032c88a*/
  }
  return a1; /*0x10032c895*/
}