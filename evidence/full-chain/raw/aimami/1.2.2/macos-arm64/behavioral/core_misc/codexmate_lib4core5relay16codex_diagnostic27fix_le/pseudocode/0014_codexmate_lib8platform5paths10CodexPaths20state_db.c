// mac 1.2.2 NEW codexmate_lib4core5relay16codex_diagnostic27fix_le 0x100a3dce0 d=2
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::state_db_search_dirs::ha11ba42e47ba4078(
        _QWORD *a1,
        const void *a2,
        size_t a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-50h]
  __int64 v11; // [rsp+8h] [rbp-48h]
  __int64 v12; // [rsp+10h] [rbp-40h] BYREF
  __int64 v13; // [rsp+18h] [rbp-38h]
  __int64 v14; // [rsp+20h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::configured_sqlite_home::hb4c07f0e2e9ab3ef(&v12, a2, a3); /*0x100a3dcfe*/
  if ( __OFSUB__(-v12, 1) ) /*0x100a3dd0a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3dd13*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x40u, 8u); /*0x100a3dd22*/
    if ( !v4 ) /*0x100a3dd2a*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 64); /*0x100a3de20*/
    v5 = v4; /*0x100a3dd30*/
    std::path::Path::_join::hb1a495d4f06b13b8((size_t *)&v12, a2, a3, byte_1015A11F1, 6u); /*0x100a3dd4a*/
    v11 = v12; /*0x100a3dd53*/
    v10 = v13; /*0x100a3dd5b*/
    v6 = v14; /*0x100a3dd5f*/
    std::path::Path::to_path_buf::h73855ce4b54f7174((size_t *)&v12, a2, a3); /*0x100a3dd6d*/
    *(_QWORD *)(v5 + 48) = v14; /*0x100a3dd76*/
    v7 = v12; /*0x100a3dd7a*/
    *(_QWORD *)(v5 + 40) = v13; /*0x100a3dd82*/
    *(_QWORD *)(v5 + 32) = v7; /*0x100a3dd86*/
    *(_QWORD *)v5 = v11; /*0x100a3dd8e*/
    *(_QWORD *)(v5 + 8) = v10; /*0x100a3dd95*/
    *(_QWORD *)(v5 + 16) = v6; /*0x100a3dd99*/
    *(_BYTE *)(v5 + 24) = 1; /*0x100a3dd9d*/
    *(_BYTE *)(v5 + 56) = 0; /*0x100a3dda2*/
    *a1 = 2; /*0x100a3dda7*/
    a1[1] = v5; /*0x100a3ddae*/
    a1[2] = 2; /*0x100a3ddb2*/
    return v10; /*0x100a3dd91*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3ddc0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x20u, 8u); /*0x100a3ddcf*/
    if ( !result ) /*0x100a3ddd7*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100a3de2f*/
    *(_QWORD *)(result + 16) = v14; /*0x100a3dddd*/
    v9 = v12; /*0x100a3dde1*/
    *(_QWORD *)(result + 8) = v13; /*0x100a3dde9*/
    *(_QWORD *)result = v9; /*0x100a3dded*/
    *(_BYTE *)(result + 24) = 1; /*0x100a3ddf0*/
    *a1 = 1; /*0x100a3ddf4*/
    a1[1] = result; /*0x100a3ddfb*/
    a1[2] = 1; /*0x100a3ddff*/
  }
  return result; /*0x100a3de07*/
}