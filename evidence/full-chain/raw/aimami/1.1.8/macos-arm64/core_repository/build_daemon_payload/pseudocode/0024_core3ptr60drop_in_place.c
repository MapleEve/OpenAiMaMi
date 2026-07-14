// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x10054a470 depth=2
// core3ptr60drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h3db126d9da633c1d(
        _QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( a1[2] ) /*0x10054a47a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a48c*/
  if ( a1[5] ) /*0x10054a491*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a4a3*/
  result = -a1[8]; /*0x10054a4b9*/
  if ( !__OFSUB__(result, 1) && a1[8] ) /*0x10054a4b6*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a4c9*/
  v2 = a1[11]; /*0x10054a4ce*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x10054a4da*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a4e5*/
  v3 = a1[14]; /*0x10054a4ea*/
  if ( v3 != 0x8000000000000000LL ) /*0x10054a4f1*/
  {
    if ( v3 ) /*0x10054a4f6*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054a505*/
  }
  return result; /*0x10054a501*/
}