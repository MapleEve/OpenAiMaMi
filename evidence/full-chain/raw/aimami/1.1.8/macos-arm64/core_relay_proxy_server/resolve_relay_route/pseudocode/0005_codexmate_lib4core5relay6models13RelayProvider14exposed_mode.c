// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND resolve_relay_route node 0x1004ae220 depth=1
unsigned __int64 *__fastcall codexmate_lib::core::relay::models::RelayProvider::exposed_models::hd9dfa52e52b4bea1(
        unsigned __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  char v4; // al
  size_t v5; // rcx
  size_t v7[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a2 + 136) ) /*0x1004ae233*/
  {
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h68c58a439707a4f3(a1, a2 + 120); /*0x1004ae247*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004ae24e*/
    v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x20u, 8u); /*0x1004ae25d*/
    if ( !v2 ) /*0x1004ae265*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1004ae2c5*/
    v3 = v2; /*0x1004ae267*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v7, a2 + 96); /*0x1004ae272*/
    v4 = *(_BYTE *)(a2 + 230); /*0x1004ae277*/
    *(_QWORD *)(v3 + 16) = v7[2]; /*0x1004ae283*/
    v5 = v7[0]; /*0x1004ae287*/
    *(_QWORD *)(v3 + 8) = v7[1]; /*0x1004ae28f*/
    *(_QWORD *)v3 = v5; /*0x1004ae293*/
    *(_BYTE *)(v3 + 24) = v4; /*0x1004ae296*/
    *a1 = 1; /*0x1004ae29a*/
    a1[1] = v3; /*0x1004ae2a1*/
    a1[2] = 1; /*0x1004ae2a5*/
  }
  return a1; /*0x1004ae2b0*/
}