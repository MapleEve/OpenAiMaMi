// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a8850 | 基线 same-set
double __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h7f05e14c98688193(
        __m128i a1,
        __m128i a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v6; // rbx

  v6 = a5[1]; /*0x1009a8860*/
  codexmate_lib::commands::tray_menu::handle_tray_menu_event::hb9ec2303b911a6fa(a4, v6, a5[2], a1, a2); /*0x1009a886b*/
  if ( *a5 ) /*0x1009a8870*/
    *(double *)a1.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, *a5, 1); /*0x1009a888a*/
  return *(double *)a1.i64; /*0x1009a8884*/
}