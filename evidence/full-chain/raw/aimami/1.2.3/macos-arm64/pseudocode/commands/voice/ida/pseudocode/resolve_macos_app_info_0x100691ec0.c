// __ZN13codexmate_lib8commands5voice22resolve_macos_app_info28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100691ec0 | 基线 same-set
double __fastcall codexmate_lib::commands::voice::resolve_macos_app_info::_$u7b$$u7b$closure$u7d$$u7d$::h96ac157cb0efc2bd(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  double result; // xmm0_8

  result = codexmate_lib::commands::voice::read_plist_value::h6f3f7fb94fd4667d(a1, a2, a3, (__int64)&unk_1016046EA, 12); /*0x100691edd*/
  if ( a4 ) /*0x100691ee5*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a5, a4, 1); /*0x100691efc*/
  return result; /*0x100691ef6*/
}