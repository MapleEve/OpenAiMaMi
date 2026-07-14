char __fastcall alloc::vec::Vec$LT$T$C$A$GT$::retain::_$u7b$$u7b$closure$u7d$$u7d$::h87f75c5d58b66ef7(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  int v6; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+10h] [rbp-B0h]

  std::sys::fs::metadata::h32fa16d3052ea535(&v6, *(_QWORD *)(a1 + 160), *(_QWORD *)(a1 + 168)); /*0x1006f3fba*/
  if ( v6 != 1 ) /*0x1006f3fc6*/
    return codexmate_lib::core::repository::registry_item_has_managed_virtual_snapshot::h28c6df3f86f0f1a6(a1) ^ 1; /*0x1006f3fe5*/
  if ( (v7 & 3) != 1 ) /*0x1006f3fd7*/
    return 0; /*0x1006f3fd9*/
  v2 = v7 - 1; /*0x1006f3ff7*/
  v3 = *(_QWORD *)(v7 - 1); /*0x1006f3ffb*/
  v4 = *(_QWORD *)(v7 + 7); /*0x1006f3fff*/
  if ( *(_QWORD *)v4 ) /*0x1006f4003*/
    (*(void (__fastcall **)(__int64))v4)(v3); /*0x1006f400f*/
  v5 = *(_QWORD *)(v4 + 8); /*0x1006f4011*/
  if ( v5 ) /*0x1006f4019*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x1006f4023*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24, 8); /*0x1006f4035*/
  return 0; /*0x1006f3fe7*/
}