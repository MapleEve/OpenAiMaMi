// mac 1.2.2 NEW codexmate_lib8platform7process21open_macos_app_bun 0x1013900e0 d=2
// Alternative name is '__ZN100_$LT$alloc..ffi..c_str..CString$u20$as$u20$core..convert..From$LT$$RF$core..ffi..c_str..CStr$GT$$GT$4from17h1adac10027509af3E'
// Alternative name is '__ZN5alloc3ffi5c_str75_$LT$impl$u20$alloc..borrow..ToOwned$u20$for$u20$core..ffi..c_str..CStr$GT$8to_owned17h59cb4c24996f1afaE'
__int64 __fastcall alloc::wtf8::_$LT$impl$u20$core..wtf8..Wtf8$GT$::into_box::h60be101a61a42e4f(
        void *__src,
        size_t __n)
{
  __int64 v3; // rdi

  if ( __n ) /*0x1013900f0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1013900f2*/
    v3 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1u); /*0x101390104*/
    if ( !v3 ) /*0x10139010a*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(1, __n); /*0x101390114*/
  }
  else
  {
    v3 = 1; /*0x101390119*/
  }
  memcpy((void *)v3, __src, __n); /*0x101390127*/
  return v3; /*0x101390132*/
}