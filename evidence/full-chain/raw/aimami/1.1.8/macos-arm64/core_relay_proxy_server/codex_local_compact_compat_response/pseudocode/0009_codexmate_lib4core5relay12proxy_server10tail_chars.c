// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_compact_compat_response node 0x1005a2ad0 depth=1
void *__fastcall codexmate_lib::core::relay::proxy_server::tail_chars::he6a340b0aa3366a1(
        __int64 *a1,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // rax
  bool v7; // cc
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  void *result; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  _QWORD v14[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( (unsigned __int64)a3 >= 0x20 ) /*0x1005a2af7*/
  {
    v10 = core::str::count::do_count_chars::h4875767a8f682eeb(a2, a3); /*0x1005a2b16*/
    v7 = v10 <= a4; /*0x1005a2b1b*/
    v8 = v10 - a4; /*0x1005a2b1b*/
    if ( v7 ) /*0x1005a2b1e*/
      goto LABEL_3; /*0x1005a2b1e*/
LABEL_7:
    v14[0] = a2; /*0x1005a2b20*/
    v14[1] = &a2[a3]; /*0x1005a2b27*/
    v14[2] = v8; /*0x1005a2b2b*/
    return (void *)((__int64 (__fastcall *)(__int64 *, _QWORD *))_$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hc60a495119840b62)( /*0x1005a2b3b*/
                     a1,
                     v14);
  }
  v6 = core::str::count::char_count_general_case::h35f326d7c82e4f55(a2, a3); /*0x1005a2af9*/
  v7 = v6 <= a4; /*0x1005a2afe*/
  v8 = v6 - a4; /*0x1005a2afe*/
  if ( !v7 ) /*0x1005a2b01*/
    goto LABEL_7; /*0x1005a2b01*/
LABEL_3:
  if ( a3 < 0 ) /*0x1005a2b06*/
  {
    v9 = 0; /*0x1005a2b08*/
    goto LABEL_5; /*0x1005a2b08*/
  }
  if ( a3 ) /*0x1005a2b3d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005a2b3f*/
    v9 = 1; /*0x1005a2b44*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x1005a2b52*/
    if ( !v12 ) /*0x1005a2b5a*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, a3); /*0x1005a2b0b*/
    v13 = v12; /*0x1005a2b5c*/
  }
  else
  {
    v13 = 1; /*0x1005a2b61*/
  }
  result = memcpy((void *)v13, a2, a3); /*0x1005a2b70*/
  *a1 = a3; /*0x1005a2b75*/
  a1[1] = v13; /*0x1005a2b78*/
  a1[2] = a3; /*0x1005a2b7c*/
  return result; /*0x1005a2b80*/
}