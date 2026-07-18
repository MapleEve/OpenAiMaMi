// mac 1.2.2 NEW codexmate_lib4core12debug_bundle18global_state_sha 0x100a494f0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h4d19a7f6745183f3(
        _QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rsi

  if ( *a1 ) /*0x100a49501*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a49512*/
  if ( !__OFSUB__(-a1[6], 1) && a1[6] ) /*0x100a49525*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a49538*/
  v1 = a1[9]; /*0x100a4953d*/
  if ( v1 != 0x8000000000000000LL && v1 ) /*0x100a49549*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a49554*/
  v2 = a1[12]; /*0x100a49559*/
  if ( v2 != 0x8000000000000000LL && v2 ) /*0x100a49565*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a49570*/
  v3 = a1[5]; /*0x100a49579*/
  if ( v3 ) /*0x100a49580*/
  {
    v4 = a1[4] + 8LL; /*0x100a49582*/
    do /*0x100a49597*/
    {
      if ( *(_QWORD *)(v4 - 8) ) /*0x100a49599*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a495ab*/
      v4 += 24; /*0x100a49590*/
      --v3; /*0x100a49594*/
    }
    while ( v3 ); /*0x100a49597*/
  }
  result = a1[3]; /*0x100a495b2*/
  if ( result ) /*0x100a495b9*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a495cb*/
  v6 = a1[15]; /*0x100a495d0*/
  if ( v6 != 0x8000000000000000LL ) /*0x100a495d7*/
  {
    if ( v6 ) /*0x100a495dc*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a495f8*/
  }
  return result; /*0x100a495ee*/
}