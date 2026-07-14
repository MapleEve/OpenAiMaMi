// mac 1.1.8 test_relay_draft_stream node va=0x101127680 depth=3
// serde_json5error5Error6syntax
_QWORD *__fastcall serde_json::error::Error::syntax::hf7c449ec16fad968(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 v4; // [rsp+0h] [rbp-30h]
  __int64 v5; // [rsp+8h] [rbp-28h]
  __int64 v6; // [rsp+10h] [rbp-20h]

  v6 = a1[2]; /*0x10112768d*/
  v5 = a1[1]; /*0x101127698*/
  v4 = *a1; /*0x10112769c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1011276a8*/
  result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x28u, 8u); /*0x1011276b7*/
  if ( !result ) /*0x1011276bf*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 40); /*0x1011276f9*/
  result[4] = a3; /*0x1011276c5*/
  result[3] = a2; /*0x1011276cd*/
  result[2] = v6; /*0x1011276d5*/
  result[1] = v5; /*0x1011276e1*/
  *result = v4; /*0x1011276e5*/
  return result; /*0x1011276e8*/
}