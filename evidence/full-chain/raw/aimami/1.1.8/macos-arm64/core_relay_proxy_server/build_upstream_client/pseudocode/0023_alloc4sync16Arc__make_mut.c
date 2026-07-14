// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100b1a680 depth=2
volatile signed __int64 *__fastcall alloc::sync::Arc$LT$T$C$A$GT$::make_mut::h92cba3179d38c261(
        volatile signed __int64 **a1)
{
  signed __int64 v1; // rax
  volatile signed __int64 *v2; // rbx
  volatile signed __int64 *v3; // r15
  __int64 v5; // rax
  size_t v6; // r13
  size_t v7; // rdx
  size_t v8; // r12

  v1 = _InterlockedCompareExchange64(*a1, 0, 1); /*0x100b1a69b*/
  v2 = *a1; /*0x100b1a6a0*/
  if ( v1 == 1 ) /*0x100b1a6a3*/
  {
    if ( *((_QWORD *)v2 + 1) == 1 ) /*0x100b1a6ad*/
    {
      *v2 = 1; /*0x100b1a6af*/
      v3 = v2; /*0x100b1a6b6*/
      return v3 + 2; /*0x100b1a6b9*/
    }
    v5 = alloc::sync::arcinner_layout_for_value_layout::h74907c05f0a7a03c(8u, 152); /*0x100b1a700*/
    v6 = v5; /*0x100b1a705*/
    v8 = v7; /*0x100b1a708*/
    if ( v7 ) /*0x100b1a70e*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b1a710*/
      v3 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, v6); /*0x100b1a720*/
      if ( v3 ) /*0x100b1a726*/
      {
LABEL_10:
        *v3 = 1; /*0x100b1a728*/
        *((_QWORD *)v3 + 1) = 1; /*0x100b1a733*/
        memcpy((void *)(v3 + 2), (const void *)(v2 + 2), 0x98u); /*0x100b1a744*/
        *a1 = v3; /*0x100b1a749*/
        if ( v2 != (volatile signed __int64 *)-1LL && !_InterlockedDecrement64(v2 + 1) ) /*0x100b1a756*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b1a76d*/
        return v3 + 2; /*0x100b1a772*/
      }
    }
    else
    {
      v3 = (volatile signed __int64 *)v5; /*0x100b1a777*/
      if ( v5 ) /*0x100b1a77d*/
        goto LABEL_10; /*0x100b1a77d*/
    }
    alloc::alloc::handle_alloc_error::h450e44845847d219(v6, v8); /*0x100b1a785*/
  }
  v3 = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::clone_from_ref_in::hc2ffccd5d2e7a64e((__int64 *)v2 + 2); /*0x100b1a6c4*/
  if ( !_InterlockedDecrement64(v2) ) /*0x100b1a6c7*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h58b8cb458dd42b2a((__int64 *)a1); /*0x100b1a6d0*/
  *a1 = v3; /*0x100b1a6d5*/
  return v3 + 2; /*0x100b1a6e3*/
}