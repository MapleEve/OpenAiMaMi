// mac 1.1.8 delete_sessions node va=0x1001c4cc0 depth=1
// core3ptr100drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::ha21db7e75e29d7ea(
        __int64 a1)
{
  _QWORD *v1; // rbx

  if ( *(_BYTE *)a1 != 6 ) /*0x1001c4cca*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(a1); /*0x1001c4cfb*/
  v1 = *(_QWORD **)(a1 + 8); /*0x1001c4ccc*/
  if ( *v1 == 1 ) /*0x1001c4cd7*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v1 + 1); /*0x1001c4d04*/
  }
  else if ( !*v1 ) /*0x1001c4cd0*/
  {
    if ( v1[2] ) /*0x1001c4cde*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c4cf0*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c4cf7*/
}