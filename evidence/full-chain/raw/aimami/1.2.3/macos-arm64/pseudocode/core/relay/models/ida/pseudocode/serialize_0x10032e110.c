// __ZN13codexmate_lib4core5relay6models1_105_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$9serialize @ 0x10032e110 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..models..RelayWireApi$GT$::serialize::hf1816dd31972db50(
        __int64 a1,
        unsigned __int8 *a2)
{
  int v2; // r14d
  __int64 v3; // r14
  _BYTE *v4; // rax

  v2 = *a2; /*0x10032e11a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10032e11e*/
  if ( v2 ) /*0x10032e126*/
  {
    if ( v2 == 1 ) /*0x10032e12c*/
    {
      v3 = 16; /*0x10032e12e*/
      v4 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x10032e13e*/
      if ( !v4 ) /*0x10032e146*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x10032e1e5*/
      qmemcpy(v4, "openai-responses", 16); /*0x10032e164*/
    }
    else
    {
      v3 = 9; /*0x10032e199*/
      v4 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x10032e1a9*/
      if ( !v4 ) /*0x10032e1b1*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x10032e203*/
      *(_QWORD *)v4 = 0x69706F7268746E61LL; /*0x10032e1bd*/
      v4[8] = 99; /*0x10032e1c0*/
    }
  }
  else
  {
    v3 = 11; /*0x10032e169*/
    v4 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x10032e179*/
    if ( !v4 ) /*0x10032e181*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x10032e1f4*/
    qmemcpy(v4, "openai-chat", 11); /*0x10032e18d*/
  }
  *(_BYTE *)a1 = 3; /*0x10032e1c4*/
  *(_QWORD *)(a1 + 8) = v3; /*0x10032e1c7*/
  *(_QWORD *)(a1 + 16) = v4; /*0x10032e1cb*/
  *(_QWORD *)(a1 + 24) = v3; /*0x10032e1cf*/
  return a1; /*0x10032e1d6*/
}