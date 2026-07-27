/* addr=0x100308070 cleanname=route_handler group=axum-handlers
 * n_lines=18 brace_balanced=True truncation_markers=[]
 */
_WORD *__fastcall _$LT$F$u20$as$u20$axum..handler..Handler$LT$$LP$$LP$$RP$$C$$RP$$C$S$GT$$GT$::call::h2c950e760213c830(
        __int64 a1,
        __int64 a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r15

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v2 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(1, 2);
  v3 = v2;
  *v2 = 0;
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..proxy_server..ProxyContext$GT$::h6b77bb86e3844f1c(a2);
  core::ptr::drop_in_place$LT$http..request..Request$LT$axum_core..body..Body$GT$$GT$::hd7a3bb85009d17ce(a1);
  return v3;
}
