// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x1004d0770 depth=1
// codexmate_lib8commands9tray_menu10quota_text
size_t *__fastcall codexmate_lib::commands::tray_menu::quota_text::h9f3644ceca6dbeac(size_t *a1, __int64 a2)
{
  __int64 v2; // rax
  size_t *result; // rax
  unsigned __int8 *v4; // rsi
  __int64 v5; // [rsp+8h] [rbp-28h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+10h] [rbp-20h]
  __int64 v7; // [rsp+18h] [rbp-18h]
  __int64 (__fastcall *v8)(); // [rsp+20h] [rbp-10h]

  v2 = *(_QWORD *)(a2 + 88); /*0x1004d077d*/
  if ( *(_DWORD *)(a2 + 48) != 2 ) /*0x1004d0781*/
  {
    if ( (_DWORD)v2 != 2 ) /*0x1004d07ca*/
    {
      v5 = a2 + 80; /*0x1004d07f2*/
      v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1004d07fd*/
      v7 = a2 + 120; /*0x1004d0801*/
      v8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1004d0805*/
      v4 = (unsigned __int8 *)&unk_10122A5DF; /*0x1004d0809*/
      return alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, v4, (unsigned __int64)&v5); /*0x1004d0809*/
    }
    v5 = a2 + 80; /*0x1004d07cc*/
LABEL_8:
    v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1004d07da*/
    v4 = (unsigned __int8 *)&unk_10122A5DB; /*0x1004d07e5*/
    return alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, v4, (unsigned __int64)&v5); /*0x1004d081f*/
  }
  if ( (_DWORD)v2 != 2 ) /*0x1004d0786*/
  {
    v5 = a2 + 120; /*0x1004d07d6*/
    goto LABEL_8; /*0x1004d07d6*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d078b*/
  result = (size_t *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1004d079a*/
  if ( !result ) /*0x1004d07a2*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004d082a*/
  *(_WORD *)result = 11565; /*0x1004d07a4*/
  *a1 = 2; /*0x1004d07a9*/
  a1[1] = (size_t)result; /*0x1004d07b0*/
  a1[2] = 2; /*0x1004d07b4*/
  return result; /*0x1004d07bc*/
}