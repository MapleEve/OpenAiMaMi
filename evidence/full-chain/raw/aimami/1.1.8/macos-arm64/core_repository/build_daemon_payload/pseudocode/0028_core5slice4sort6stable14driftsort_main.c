// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x1004f7df0 depth=2
// core5slice4sort6stable14driftsort_main
__int64 __fastcall core::slice::sort::stable::driftsort_main::he0ae917674dd3c08(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v9; // r15

  v3 = a2 - (a2 >> 1); /*0x1004f7e0a*/
  v4 = 23809; /*0x1004f7e14*/
  if ( a2 < 0x5D01 ) /*0x1004f7e19*/
    v4 = a2; /*0x1004f7e19*/
  if ( v4 <= v3 ) /*0x1004f7e20*/
    v4 = a2 - (a2 >> 1); /*0x1004f7e20*/
  v5 = 48; /*0x1004f7e28*/
  if ( v4 >= 0x31 ) /*0x1004f7e2e*/
    v5 = v4; /*0x1004f7e2e*/
  if ( v3 > 0x61861861861861LL ) /*0x1004f7e46*/
  {
    v6 = 0; /*0x1004f7e48*/
    goto LABEL_9; /*0x1004f7e48*/
  }
  if ( 336 * v5 ) /*0x1004f7e32*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004f7e66*/
    v6 = 8; /*0x1004f7e6b*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(336 * v5, 8u); /*0x1004f7e79*/
    if ( !v8 ) /*0x1004f7e81*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, 336 * v5); /*0x1004f7e4b*/
    v9 = v8; /*0x1004f7e83*/
  }
  else
  {
    v9 = 8; /*0x1004f7e90*/
    v5 = 0; /*0x1004f7e96*/
  }
  core::slice::sort::stable::drift::sort::h17b07f62cfb74c26(a1, a2, v9, v5, a2 < 0x41, a3, v5, v9, 0); /*0x1004f7ebd*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f7ed1*/
}