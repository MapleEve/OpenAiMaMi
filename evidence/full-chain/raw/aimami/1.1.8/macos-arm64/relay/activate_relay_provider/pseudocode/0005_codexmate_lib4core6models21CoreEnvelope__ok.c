// mac 1.1.8 activate_relay_provider node va=0x1004ba8f0 depth=1
// codexmate_lib4core6models21CoreEnvelope::ok
void *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8cb36c706799a66b(__int64 a1, const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1004ba901*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1004ba910*/
  if ( !v2 ) /*0x1004ba918*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004ba9c9*/
  v3 = v2; /*0x1004ba91e*/
  *v2 = 27503; /*0x1004ba921*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x1004ba926*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004ba935*/
  if ( !v4 ) /*0x1004ba93d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004ba9da*/
  v5 = v4; /*0x1004ba943*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1004ba946*/
  *v4 = 1667462483; /*0x1004ba94d*/
  result = memcpy((void *)(a1 + 72), a2, 0x158u); /*0x1004ba95f*/
  *(_DWORD *)(a1 + 416) = 1; /*0x1004ba964*/
  *(_BYTE *)(a1 + 420) = 1; /*0x1004ba96f*/
  *(_QWORD *)a1 = 2; /*0x1004ba977*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1004ba97e*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1004ba982*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1004ba98a*/
  *(_QWORD *)(a1 + 32) = v5; /*0x1004ba992*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1004ba996*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1004ba99e*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1004ba9a6*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1004ba9ae*/
  return result; /*0x1004ba9b6*/
}