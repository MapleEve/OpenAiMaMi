// __ZN13codexmate_lib8platform6daemon18command_error_text @ 0x10035d2d0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::daemon::command_error_text::h9089ab49c3bd0de3(size_t *a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(); // r15
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(); // rdi
  void *v7; // rax
  __int64 v8; // rdx
  size_t v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 result; // rax
  __int64 (__fastcall *v14)(); // r15
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(); // rdi
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rax
  size_t *v21; // [rsp+0h] [rbp-50h]
  size_t *v22; // [rsp+0h] [rbp-50h]
  void *__src; // [rsp+8h] [rbp-48h]
  void *__srca; // [rsp+8h] [rbp-48h]
  _QWORD *v25; // [rsp+10h] [rbp-40h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+18h] [rbp-38h]
  __int64 v27; // [rsp+20h] [rbp-30h]

  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v25, a2[4], a2[5]); /*0x10035d2f3*/
  v4 = v26; /*0x10035d2f8*/
  v5 = v27; /*0x10035d2fc*/
  v6 = v26; /*0x10035d300*/
  v7 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v26, v27); /*0x10035d303*/
  v9 = v8; /*0x10035d308*/
  if ( v8 < 0 ) /*0x10035d30e*/
  {
    v10 = 0; /*0x10035d310*/
    goto LABEL_3; /*0x10035d310*/
  }
  if ( v8 ) /*0x10035d325*/
  {
    v21 = a1; /*0x10035d327*/
    __src = v7; /*0x10035d32b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v5); /*0x10035d32f*/
    v10 = 1; /*0x10035d334*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10035d341*/
    if ( !v11 ) /*0x10035d349*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x10035d312*/
    v12 = v11; /*0x10035d34b*/
    v7 = __src; /*0x10035d34e*/
    a1 = v21; /*0x10035d352*/
  }
  else
  {
    v12 = 1; /*0x10035d358*/
  }
  memcpy((void *)v12, v7, v9); /*0x10035d367*/
  result = 2LL * (_QWORD)v25; /*0x10035d370*/
  if ( 2LL * (_QWORD)v25 ) /*0x10035d370*/
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v25, 1); /*0x10035d390*/
    if ( !v9 ) /*0x10035d398*/
      goto LABEL_12; /*0x10035d398*/
LABEL_21:
    *a1 = v9; /*0x10035d436*/
    a1[1] = v12; /*0x10035d439*/
    a1[2] = v9; /*0x10035d43d*/
    return result; /*0x10035d44f*/
  }
  if ( v9 ) /*0x10035d380*/
    goto LABEL_21; /*0x10035d380*/
LABEL_12:
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v25, a2[1], a2[2]); /*0x10035d39e*/
  v14 = v26; /*0x10035d3af*/
  v15 = v27; /*0x10035d3b3*/
  v16 = v26; /*0x10035d3b7*/
  v17 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v26, v27); /*0x10035d3ba*/
  v9 = v18; /*0x10035d3bf*/
  if ( v18 < 0 ) /*0x10035d3c5*/
  {
    v19 = 0; /*0x10035d3c7*/
    goto LABEL_14; /*0x10035d3c7*/
  }
  if ( v18 ) /*0x10035d3d9*/
  {
    v22 = a1; /*0x10035d3db*/
    __srca = v17; /*0x10035d3df*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v15); /*0x10035d3e3*/
    v19 = 1; /*0x10035d3e8*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10035d3f5*/
    if ( !v20 ) /*0x10035d3fd*/
LABEL_14:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v9); /*0x10035d3c9*/
    v12 = v20; /*0x10035d3ff*/
    v17 = __srca; /*0x10035d402*/
    a1 = v22; /*0x10035d406*/
  }
  else
  {
    v12 = 1; /*0x10035d40c*/
  }
  memcpy((void *)v12, v17, v9); /*0x10035d41b*/
  result = 2LL * (_QWORD)v25; /*0x10035d424*/
  if ( 2LL * (_QWORD)v25 ) /*0x10035d424*/
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v25, 1); /*0x10035d458*/
    if ( v9 ) /*0x10035d460*/
      goto LABEL_21; /*0x10035d460*/
  }
  else if ( v9 ) /*0x10035d434*/
  {
    goto LABEL_21; /*0x10035d434*/
  }
  v25 = a2 + 6; /*0x10035d466*/
  v26 = _$LT$std..process..ExitStatus$u20$as$u20$core..fmt..Display$GT$::fmt::h71cb3ff623e8f0f8; /*0x10035d471*/
  return alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017BCD23, &v25); /*0x10035d441*/
}