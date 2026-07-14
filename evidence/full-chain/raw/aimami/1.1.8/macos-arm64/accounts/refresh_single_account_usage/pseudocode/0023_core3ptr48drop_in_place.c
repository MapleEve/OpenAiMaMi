// mac 1.1.8 refresh_single_account_usage node va=0x100e71290 depth=3
// core3ptr48drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$tauri_utils..config..Config$GT$::h3d6d315db2b64edb(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rax

  if ( !__OFSUB__(-a1[489], 1) && a1[489] ) /*0x100e712b2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e712c8*/
  v2 = a1[492]; /*0x100e712cd*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x100e712dc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e712ea*/
  v3 = a1[495]; /*0x100e712ef*/
  if ( v3 != 0x8000000000000000LL && v3 ) /*0x100e712fe*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e7130c*/
  v4 = a1[498]; /*0x100e71311*/
  if ( v4 != 0x8000000000000000LL && v4 ) /*0x100e71320*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e7132e*/
  v5 = a1[429]; /*0x100e71333*/
  if ( v5 ) /*0x100e7133d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e7134b*/
  v6 = a1[125] + 1LL; /*0x100e7135e*/
  v7 = a1[124]; /*0x100e71361*/
  while ( v6 != 1 ) /*0x100e71374*/
  {
    --v6; /*0x100e7137d*/
    core::ptr::drop_in_place$LT$tauri_utils..config..WindowConfig$GT$::hc05144fa4e4b010f(v7); /*0x100e71380*/
    v7 += 632; /*0x100e71385*/
  }
  v8 = a1[123]; /*0x100e7138a*/
  if ( v8 ) /*0x100e71394*/
  {
    v5 = 632 * v8; /*0x100e71396*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e713a5*/
  }
  core::ptr::drop_in_place$LT$tauri_utils..config..SecurityConfig$GT$::h7b425632c9cfc7fe(a1, v5); /*0x100e713ad*/
  core::ptr::drop_in_place$LT$core..option..Option$LT$tauri_utils..config..TrayIconConfig$GT$$GT$::h377b84abcfc4a83c(a1 + 126); /*0x100e713b9*/
  core::ptr::drop_in_place$LT$tauri_utils..config..BuildConfig$GT$::h08f4dd9ed39c4e7e(a1 + 432); /*0x100e713c5*/
  core::ptr::drop_in_place$LT$tauri_utils..config..BundleConfig$GT$::h11e53de853aee3c4(a1 + 140); /*0x100e713d1*/
  return _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hda11c67d8ee6e290(a1 + 501); /*0x100e713e4*/
}