// mac 1.1.8 behavioral save_config_text 0x1001871b0 d=0
__int64 __fastcall codexmate_lib::core::mcp::save_config_text::h077de8f0082ec722(
        _QWORD *a1,
        _QWORD **a2,
        size_t a3,
        char *a4,
        __int64 a5,
        double a6)
{
  size_t v6; // r13
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v15[2]; // [rsp+18h] [rbp-58h] BYREF
  size_t v16[3]; // [rsp+28h] [rbp-48h] BYREF
  size_t v17; // [rsp+40h] [rbp-30h]

  v6 = a5; /*0x1001871c1*/
  v15[0] = a4; /*0x1001871cd*/
  v15[1] = a5; /*0x1001871d1*/
  if ( !a5 ) /*0x1001871d8*/
  {
    v17 = a3; /*0x1001871f5*/
    v10 = 1; /*0x1001871f9*/
LABEL_7:
    memcpy((void *)v10, a4, v6); /*0x1001871ff*/
    v16[0] = v6; /*0x10018720d*/
    goto LABEL_9; /*0x100187211*/
  }
  if ( a4[a5 - 1] == 10 ) /*0x1001871e0*/
  {
    if ( a5 < 0 ) /*0x1001871e5*/
    {
      v9 = 0; /*0x1001871eb*/
      goto LABEL_5; /*0x1001871eb*/
    }
    v17 = a3; /*0x1001872a1*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001872a5*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1u); /*0x1001872b2*/
    v9 = 1; /*0x1001872b7*/
    if ( !v13 ) /*0x1001872bf*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v6); /*0x1001871ed*/
    v10 = v13; /*0x1001872c5*/
    goto LABEL_7; /*0x1001872c8*/
  }
  v17 = a3; /*0x100187213*/
  v14[0] = v15; /*0x10018721b*/
  v14[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100187226*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v16, "\xC0\x01\n", (unsigned __int64)v14); /*0x100187239*/
  v10 = v16[1]; /*0x10018723e*/
  v6 = v16[2]; /*0x100187242*/
LABEL_9:
  v11 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af(a2, v17, v10, v6, a6); /*0x100187246*/
  if ( v11 ) /*0x10018725b*/
  {
    a1[1] = v11; /*0x10018725d*/
    result = 2; /*0x100187261*/
    *a1 = 2; /*0x100187266*/
    if ( !v16[0] ) /*0x100187270*/
      return result; /*0x100187270*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100187270*/
  }
  result = 10; /*0x10018728e*/
  *a1 = 10; /*0x100187293*/
  if ( v16[0] ) /*0x10018729d*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100187272*/
  return result; /*0x10018727f*/
}