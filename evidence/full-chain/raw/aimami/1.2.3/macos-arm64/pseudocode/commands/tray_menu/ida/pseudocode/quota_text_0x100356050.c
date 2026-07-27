// __ZN13codexmate_lib8commands9tray_menu10quota_text @ 0x100356050 | 基线 same-set
_WORD *__fastcall codexmate_lib::commands::tray_menu::quota_text::h2938110b3487cda7(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _WORD *result; // rax
  void *v4; // rsi
  __int64 v5; // [rsp+8h] [rbp-28h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]
  __int64 (__fastcall *v8)(); // [rsp+20h] [rbp-10h]

  v2 = *(_QWORD *)(a2 + 120); /*0x10035605d*/
  if ( *(_DWORD *)(a2 + 80) != 2 ) /*0x100356061*/
  {
    if ( (_DWORD)v2 != 2 ) /*0x1003560ae*/
    {
      v5 = a2 + 112; /*0x1003560dc*/
      v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1003560e7*/
      v7 = a2 + 152; /*0x1003560eb*/
      v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1003560ef*/
      v4 = &unk_1017BCA33; /*0x1003560f3*/
      return (_WORD *)alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, v4, &v5); /*0x1003560f3*/
    }
    v5 = a2 + 112; /*0x1003560b0*/
LABEL_8:
    v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1003560c1*/
    v4 = &unk_1017BCA2F; /*0x1003560cc*/
    return (_WORD *)alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, v4, &v5); /*0x100356109*/
  }
  if ( (_DWORD)v2 != 2 ) /*0x100356066*/
  {
    v5 = a2 + 152; /*0x1003560bd*/
    goto LABEL_8; /*0x1003560bd*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10035606b*/
  result = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10035607a*/
  if ( !result ) /*0x100356082*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100356114*/
  *result = 11565; /*0x100356088*/
  *a1 = 2; /*0x10035608d*/
  a1[1] = result; /*0x100356094*/
  a1[2] = 2; /*0x100356098*/
  return result; /*0x1003560a0*/
}