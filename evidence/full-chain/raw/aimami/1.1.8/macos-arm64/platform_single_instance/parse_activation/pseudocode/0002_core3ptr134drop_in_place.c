// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x100420a10 depth=1
// core3ptr134drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..platform..single_instance..ActivationRecord$C$serde_json..error..Error$GT$$GT$::h00f0fc36fc9f16fd(
        _QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rsi

  result = -*a1; /*0x100420a1d*/
  if ( __OFSUB__(result, 1) ) /*0x100420a1d*/
  {
    v2 = (_QWORD *)a1[1]; /*0x100420a22*/
    if ( *v2 == 1 ) /*0x100420a2d*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v2 + 1); /*0x100420a99*/
    }
    else if ( !*v2 ) /*0x100420a26*/
    {
      if ( v2[2] ) /*0x100420a34*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100420a46*/
    }
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100420a8b*/
  }
  if ( *a1 ) /*0x100420a1a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100420a68*/
  v3 = a1[3]; /*0x100420a70*/
  if ( v3 != 0x8000000000000000LL && v3 ) /*0x100420a7c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100420a7c*/
  return result; /*0x100420a87*/
}