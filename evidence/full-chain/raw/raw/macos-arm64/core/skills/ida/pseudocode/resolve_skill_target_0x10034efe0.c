// __ZN13codexmate_lib4core6skills20resolve_skill_target @ 0x10034efe0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::skills::resolve_skill_target::hd6c721e38e5333a8(
        _QWORD *a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v5; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rsi
  _QWORD *v14; // rdx
  _QWORD *result; // rax
  _QWORD *v16; // rcx
  int v17; // [rsp+0h] [rbp-1A0h] BYREF
  __int64 v18; // [rsp+8h] [rbp-198h]
  _BYTE v19[8]; // [rsp+98h] [rbp-108h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-100h]
  __int64 v21; // [rsp+A8h] [rbp-F8h]
  _QWORD v22[8]; // [rsp+D0h] [rbp-D0h] BYREF
  _QWORD v23[8]; // [rsp+110h] [rbp-90h] BYREF
  _QWORD *v24; // [rsp+150h] [rbp-50h] BYREF
  __int64 v25; // [rsp+158h] [rbp-48h]
  __int64 v26; // [rsp+160h] [rbp-40h]
  _QWORD *v27; // [rsp+168h] [rbp-38h]
  __int64 v28; // [rsp+170h] [rbp-30h]

  v5 = a1; /*0x10034eff4*/
  if ( !a5 ) /*0x10034effa*/
    goto LABEL_20; /*0x10034effa*/
  v8 = a2; /*0x10034f006*/
  v28 = a3; /*0x10034f009*/
  v27 = a1; /*0x10034f00d*/
  std::path::Path::components::he8b0f71a48373be5(&v17, a4, a5); /*0x10034f021*/
  do /*0x10034f045*/
  {
    a1 = v23; /*0x10034f030*/
    a2 = &v17; /*0x10034f033*/
    _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd56fdb6f9bc0ab11(v23, &v17); /*0x10034f036*/
  }
  while ( LOBYTE(v23[0]) == 9 ); /*0x10034f045*/
  if ( LOBYTE(v23[0]) != 10 ) /*0x10034f04a*/
  {
    v5 = v27; /*0x10034f1d5*/
LABEL_20:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10034f1d9*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1); /*0x10034f1e8*/
    if ( !result ) /*0x10034f1f0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 46); /*0x10034f38d*/
    qmemcpy(result, "Skill backup contains an invalid relative path", 46); /*0x10034f246*/
    *v5 = 9; /*0x10034f249*/
    v5[1] = 46; /*0x10034f250*/
    v5[2] = result; /*0x10034f258*/
    v5[3] = 46; /*0x10034f25c*/
    return result; /*0x10034f264*/
  }
  std::path::Path::to_path_buf::h73855ce4b54f7174(&v24, v8, v28); /*0x10034f05b*/
  std::path::Path::components::he8b0f71a48373be5(v22, a4, a5); /*0x10034f06d*/
  v23[7] = v22[7]; /*0x10034f079*/
  v23[6] = v22[6]; /*0x10034f084*/
  v23[5] = v22[5]; /*0x10034f08f*/
  v23[4] = v22[4]; /*0x10034f09a*/
  v23[3] = v22[3]; /*0x10034f0a5*/
  v23[2] = v22[2]; /*0x10034f0b0*/
  v23[1] = v22[1]; /*0x10034f0c2*/
  v23[0] = v22[0]; /*0x10034f0c9*/
  do
  {
    while ( 1 )
    {
      _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd56fdb6f9bc0ab11( /*0x10034f0ef*/
        v19,
        v23);
      if ( v19[0] == 10 ) /*0x10034f0fe*/
      {
        v14 = v27; /*0x10034f26a*/
        v27[3] = v26; /*0x10034f26e*/
        result = v24; /*0x10034f272*/
        v14[2] = v25; /*0x10034f27a*/
        v14[1] = result; /*0x10034f27e*/
        *v14 = 11; /*0x10034f282*/
        return result; /*0x10034f282*/
      }
      if ( v19[0] != 9 )
        core::panicking::panic_fmt::h3a793735daf6e4ec(
          "internal error: entered unreachable code: validated above",
          115,
          &off_101961738);
      std::path::PathBuf::_push::h326381e7fc7167f8(&v24, v20, v21); /*0x10034f11e*/
      v9 = v25; /*0x10034f123*/
      std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v17, v25, v26); /*0x10034f12e*/
      v10 = v18; /*0x10034f133*/
      if ( v17 != 1 ) /*0x10034f141*/
        break; /*0x10034f141*/
      if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v18) ) /*0x10034f146*/
      {
        result = v27; /*0x10034f33a*/
        *v27 = 2; /*0x10034f33e*/
        result[1] = v10; /*0x10034f345*/
        goto LABEL_27; /*0x10034f345*/
      }
      if ( (v10 & 3) == 1 ) /*0x10034f15c*/
      {
        v28 = v10 - 1; /*0x10034f18a*/
        v11 = *(_QWORD *)(v10 - 1); /*0x10034f18e*/
        v12 = *(_QWORD *)(v10 + 7); /*0x10034f193*/
        if ( *(_QWORD *)v12 ) /*0x10034f198*/
          (*(void (__fastcall **)(__int64))v12)(v11); /*0x10034f1a4*/
        v13 = *(_QWORD *)(v12 + 8); /*0x10034f1a6*/
        if ( v13 ) /*0x10034f1ae*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x10034f1b8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 24, 8); /*0x10034f1cb*/
      }
    }
  }
  while ( (v18 & 0xF00000000000LL) != 0xA00000000000LL );
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v17, v9); /*0x10034f29b*/
  result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1); /*0x10034f2aa*/
  if ( !result ) /*0x10034f2b2*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 53); /*0x10034f39c*/
  qmemcpy(result, "Skill backup target must not traverse a symbolic link", 53); /*0x10034f316*/
  v16 = v27; /*0x10034f319*/
  *v27 = 9; /*0x10034f31d*/
  v16[1] = 53; /*0x10034f324*/
  v16[2] = result; /*0x10034f32c*/
  v16[3] = 53; /*0x10034f330*/
LABEL_27:
  if ( v24 ) /*0x10034f350*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x10034f35f*/
  return result; /*0x10034f289*/
}