// mac 1.1.8 behavioral restore_rollout_mtime_best_effort 0x10109cbc0 d=3
__int64 __fastcall std::io::error::Error::new::h2838dbd593bc6ec9(char a1, const void *a2, size_t a3)
{
  __int64 v4; // r15
  _QWORD *v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rax

  if ( a3 ) /*0x10109cbd4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10109cbd9*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x10109cbee*/
    if ( !v4 ) /*0x10109cbf4*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x10109cbfe*/
  }
  else
  {
    v4 = 1; /*0x10109cc03*/
  }
  memcpy((void *)v4, a2, a3); /*0x10109cc0f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10109cc14*/
  v5 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x10109cc23*/
  if ( !v5 ) /*0x10109cc2b*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10109cc7c*/
  v6 = v5; /*0x10109cc2d*/
  *v5 = a3; /*0x10109cc30*/
  v5[1] = v4; /*0x10109cc33*/
  v5[2] = a3; /*0x10109cc37*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10109cc3b*/
  v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x10109cc4a*/
  if ( !v7 ) /*0x10109cc52*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10109cc8d*/
  *(_QWORD *)v7 = v6; /*0x10109cc54*/
  *(_QWORD *)(v7 + 8) = &off_1015AEE58; /*0x10109cc5e*/
  *(_BYTE *)(v7 + 16) = a1; /*0x10109cc62*/
  return v7 + 1; /*0x10109cc69*/
}