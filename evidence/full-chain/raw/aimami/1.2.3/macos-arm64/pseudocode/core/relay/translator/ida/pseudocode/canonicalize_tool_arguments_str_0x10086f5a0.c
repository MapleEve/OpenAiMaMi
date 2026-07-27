// __ZN13codexmate_lib4core5relay10translator31canonicalize_tool_arguments_str @ 0x10086f5a0 | 基线 same-set
_WORD *__fastcall codexmate_lib::core::relay::translator::canonicalize_tool_arguments_str::h6c8f7253e4a406b3(
        __int64 *a1,
        const void *a2,
        signed __int64 a3)
{
  __int64 v8; // rax
  signed __int64 v9; // rdx
  const void *v10; // r15
  signed __int64 v11; // r14
  __int64 v12; // r15
  _WORD *result; // rax
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 **v16; // rsi
  _QWORD *v17; // r12
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdi
  void *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25[4]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD v26[6]; // [rsp+28h] [rbp-98h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-68h] BYREF
  _QWORD v28[4]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v29; // [rsp+80h] [rbp-40h] BYREF
  _QWORD *v30; // [rsp+88h] [rbp-38h]
  __int64 v31; // [rsp+90h] [rbp-30h]

  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10086f5c3*/
  if ( !v9 ) /*0x10086f5cb*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x10086f62e*/
    result = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10086f63d*/
    if ( !result ) /*0x10086f645*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10086f855*/
    *result = 32123; /*0x10086f64b*/
    *a1 = 2; /*0x10086f650*/
    a1[1] = (__int64)result; /*0x10086f657*/
    a1[2] = 2; /*0x10086f65b*/
    return result; /*0x10086f663*/
  }
  v10 = (const void *)v8; /*0x10086f5cd*/
  v11 = v9; /*0x10086f5d0*/
  v26[0] = v8; /*0x10086f5d3*/
  v26[1] = v9; /*0x10086f5da*/
  v26[2] = 0; /*0x10086f5e1*/
  v26[3] = 0; /*0x10086f5ec*/
  v26[4] = v8; /*0x10086f5f4*/
  v26[5] = v9; /*0x10086f5f8*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v28, v26); /*0x10086f607*/
  if ( LOBYTE(v28[0]) != 6 ) /*0x10086f610*/
  {
    v25[3] = v28[3]; /*0x10086f66c*/
    v25[2] = v28[2]; /*0x10086f677*/
    v25[1] = v28[1]; /*0x10086f686*/
    v25[0] = v28[0]; /*0x10086f68d*/
    codexmate_lib::core::relay::translator::canonicalize_json_value::h3e049d9080b6c150((__int64)v26, v25); /*0x10086f6a2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v25); /*0x10086f6a7*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x10086f6b6*/
    if ( !v14 ) /*0x10086f6be*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10086f864*/
    v29 = 128; /*0x10086f6c4*/
    v30 = (_QWORD *)v14; /*0x10086f6cc*/
    v31 = 0; /*0x10086f6d0*/
    v27 = &v29; /*0x10086f6dc*/
    v15 = v26; /*0x10086f6e0*/
    v16 = &v27; /*0x10086f6e7*/
    v17 = (_QWORD *)serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::he6e8e9fc27a55fb4( /*0x10086f6f0*/
                      v26,
                      &v27);
    if ( v17 ) /*0x10086f6f6*/
    {
      v16 = (__int64 **)v29; /*0x10086f6f8*/
      if ( v29 ) /*0x10086f6ff*/
      {
        v15 = v30; /*0x10086f701*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v29, 1); /*0x10086f70a*/
      }
    }
    else
    {
      v17 = v30; /*0x10086f744*/
      if ( !__OFSUB__(-v29, 1) ) /*0x10086f74e*/
      {
        v24 = v31; /*0x10086f7ca*/
        *a1 = v29; /*0x10086f7ce*/
        a1[1] = (__int64)v17; /*0x10086f7d1*/
        a1[2] = v24; /*0x10086f7d5*/
        goto LABEL_29; /*0x10086f7d9*/
      }
    }
    v29 = (__int64)v17; /*0x10086f750*/
    if ( v11 < 0 ) /*0x10086f757*/
    {
      v20 = 0; /*0x10086f759*/
      goto LABEL_18; /*0x10086f759*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v16); /*0x10086f768*/
    v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x10086f775*/
    v20 = 1; /*0x10086f77a*/
    if ( !v21 ) /*0x10086f782*/
LABEL_18:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v11); /*0x10086f75b*/
    v22 = (__int64)v21; /*0x10086f784*/
    memcpy(v21, v10, v11); /*0x10086f790*/
    *a1 = v11; /*0x10086f795*/
    a1[1] = v22; /*0x10086f798*/
    a1[2] = v11; /*0x10086f79c*/
    if ( *v17 == 1 ) /*0x10086f7a8*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v17 + 1); /*0x10086f80a*/
    }
    else if ( !*v17 ) /*0x10086f7a0*/
    {
      v23 = v17[2]; /*0x10086f7af*/
      if ( v23 ) /*0x10086f7b7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17[1], v23, 1); /*0x10086f7c3*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 40, 8); /*0x10086f81c*/
LABEL_29:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v26); /*0x10086f821*/
    return (_WORD *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v25); /*0x10086f84a*/
  }
  if ( a3 < 0 ) /*0x10086f615*/
  {
    v12 = 0; /*0x10086f61b*/
    goto LABEL_5; /*0x10086f61b*/
  }
  if ( a3 ) /*0x10086f711*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v26); /*0x10086f717*/
    v12 = 1; /*0x10086f71c*/
    v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x10086f72a*/
    if ( !v18 ) /*0x10086f732*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, a3); /*0x10086f61e*/
    v19 = v18; /*0x10086f738*/
  }
  else
  {
    v19 = 1; /*0x10086f7db*/
  }
  memcpy((void *)v19, a2, a3); /*0x10086f7ea*/
  *a1 = a3; /*0x10086f7ef*/
  a1[1] = v19; /*0x10086f7f2*/
  a1[2] = a3; /*0x10086f7f6*/
  return (_WORD *)core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v28); /*0x10086f839*/
}