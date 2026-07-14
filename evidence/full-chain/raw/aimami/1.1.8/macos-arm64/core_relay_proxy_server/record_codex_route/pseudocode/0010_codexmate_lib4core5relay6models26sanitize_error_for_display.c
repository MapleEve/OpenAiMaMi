// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND record_codex_route node 0x1004b0d00 depth=1
size_t *__fastcall codexmate_lib::core::relay::models::sanitize_error_for_display::hf67e65fdf83b28be(
        size_t *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int8 *v5; // r15
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int8 *v13; // rax
  _QWORD v15[2]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v16[3]; // [rsp+10h] [rbp-70h] BYREF
  unsigned __int8 **v17; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+30h] [rbp-50h]
  __int64 v19; // [rsp+38h] [rbp-48h]
  __int64 (__fastcall *v20)(); // [rsp+40h] [rbp-40h]
  unsigned __int8 *v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+50h] [rbp-30h]
  size_t v23; // [rsp+58h] [rbp-28h]

  v5 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(a2, a3); /*0x1004b0d1d*/
  v6 = v4; /*0x1004b0d20*/
  if ( v4 >= 0x20 ) /*0x1004b0d2d*/
  {
    if ( (unsigned __int64)core::str::count::do_count_chars::h4875767a8f682eeb(v5, v4) >= 0x101 ) /*0x1004b0dd5*/
      goto LABEL_3; /*0x1004b0dd5*/
LABEL_7:
    if ( v6 < 0 ) /*0x1004b0dde*/
    {
      v8 = 0; /*0x1004b0de0*/
      goto LABEL_9; /*0x1004b0de0*/
    }
    if ( v6 ) /*0x1004b0dee*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004b0df0*/
      v8 = 1; /*0x1004b0df5*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1u); /*0x1004b0e03*/
      if ( !v9 ) /*0x1004b0e0b*/
LABEL_9:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v6); /*0x1004b0de3*/
    }
    else
    {
      v9 = 1; /*0x1004b0e0f*/
    }
    v10 = v9; /*0x1004b0e14*/
    memcpy((void *)v9, v5, v6); /*0x1004b0e20*/
    v7 = v10; /*0x1004b0e25*/
    v21 = (unsigned __int8 *)v6; /*0x1004b0e28*/
    v22 = (__int64 (__fastcall *)())v10; /*0x1004b0e2c*/
    v23 = v6; /*0x1004b0e30*/
    goto LABEL_15; /*0x1004b0e30*/
  }
  if ( (unsigned __int64)core::str::count::char_count_general_case::h35f326d7c82e4f55(v5, v4) < 0x101 ) /*0x1004b0d3e*/
    goto LABEL_7; /*0x1004b0d3e*/
LABEL_3:
  v17 = (unsigned __int8 **)v5; /*0x1004b0d44*/
  v18 = (__int64 (__fastcall *)())&v5[v6]; /*0x1004b0d52*/
  v19 = 256; /*0x1004b0d56*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0fe35e1dc24b9a0e( /*0x1004b0d69*/
    v16,
    (unsigned __int8 **)&v17);
  v15[0] = v16; /*0x1004b0d6e*/
  v15[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004b0d79*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v17, byte_10122A061, (unsigned __int64)v15); /*0x1004b0d8c*/
  v21 = (unsigned __int8 *)v17; /*0x1004b0d99*/
  v22 = v18; /*0x1004b0d9d*/
  v23 = v19; /*0x1004b0da5*/
  if ( v16[0] ) /*0x1004b0db0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004b0dbb*/
  v7 = (__int64)v22; /*0x1004b0dc0*/
  v6 = v23; /*0x1004b0dc4*/
LABEL_15:
  v11 = codexmate_lib::core::relay::models::error_hint::h6908232b694cc236(v7, v6); /*0x1004b0e34*/
  if ( v11 ) /*0x1004b0e43*/
  {
    v16[0] = v11; /*0x1004b0e45*/
    v16[1] = v12; /*0x1004b0e49*/
    v17 = &v21; /*0x1004b0e51*/
    v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004b0e5c*/
    v19 = (__int64)v16; /*0x1004b0e64*/
    v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004b0e6f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, byte_10122A067, (unsigned __int64)&v17); /*0x1004b0e81*/
    if ( v21 ) /*0x1004b0e8d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004b0e98*/
  }
  else
  {
    a1[2] = v23; /*0x1004b0ea3*/
    v13 = v21; /*0x1004b0ea7*/
    a1[1] = (size_t)v22; /*0x1004b0eaf*/
    *a1 = (size_t)v13; /*0x1004b0eb3*/
  }
  return a1; /*0x1004b0eb9*/
}