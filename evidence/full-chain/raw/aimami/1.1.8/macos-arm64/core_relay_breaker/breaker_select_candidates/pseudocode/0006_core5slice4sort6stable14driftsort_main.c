// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x1004f72b0 depth=1
__int64 __fastcall core::slice::sort::stable::driftsort_main::h935150ab5093fa6f(
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

  v3 = a2 - (a2 >> 1); /*0x1004f72ca*/
  v4 = 33333; /*0x1004f72d4*/
  if ( a2 < 0x8235 ) /*0x1004f72d9*/
    v4 = a2; /*0x1004f72d9*/
  if ( v4 <= v3 ) /*0x1004f72e0*/
    v4 = a2 - (a2 >> 1); /*0x1004f72e0*/
  v5 = 48; /*0x1004f72e8*/
  if ( v4 >= 0x31 ) /*0x1004f72ee*/
    v5 = v4; /*0x1004f72ee*/
  if ( v3 > 0x88888888888888LL ) /*0x1004f7306*/
  {
    v6 = 0; /*0x1004f7308*/
    goto LABEL_9; /*0x1004f7308*/
  }
  if ( 240 * v5 ) /*0x1004f72f2*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004f7326*/
    v6 = 8; /*0x1004f732b*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(240 * v5, 8u); /*0x1004f7339*/
    if ( !v8 ) /*0x1004f7341*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, 240 * v5); /*0x1004f730b*/
    v9 = v8; /*0x1004f7343*/
  }
  else
  {
    v9 = 8; /*0x1004f7350*/
    v5 = 0; /*0x1004f7356*/
  }
  core::slice::sort::stable::drift::sort::h1d0ca050d4c5d8d1(a1, a2, v9, v5, a2 < 0x41, a3, v5, v9, 0); /*0x1004f737d*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004f7391*/
}