// __ZN13codexmate_lib4core5relay5quota14format_percent @ 0x1008ac910 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::quota::format_percent::h6d9cf26c4a1ca922(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4)
{
  _WORD *v4; // rax
  _QWORD v6[2]; // [rsp+0h] [rbp-20h] BYREF
  double v7; // [rsp+10h] [rbp-10h] BYREF

  if ( a4 <= 0.0 ) /*0x1008ac924*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1008ac96b*/
    v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1008ac97a*/
    if ( !v4 ) /*0x1008ac982*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1008ac9b0*/
    *v4 = 9520; /*0x1008ac984*/
    *a1 = 2; /*0x1008ac989*/
    a1[1] = v4; /*0x1008ac990*/
    a1[2] = 2; /*0x1008ac994*/
  }
  else
  {
    v7 = fmin(100.0, fmax(0.0, a3 / a4 * 100.0)); /*0x1008ac93e*/
    v6[0] = &v7; /*0x1008ac947*/
    v6[1] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h1254124821271e23; /*0x1008ac952*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_10420c9971c21f44d230d15b39fb3fec_841, v6); /*0x1008ac964*/
  }
  return a1; /*0x1008ac99f*/
}