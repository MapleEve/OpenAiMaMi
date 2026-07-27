// __ZN13codexmate_lib4core5relay19codex_project_state14active_db_path @ 0x100ac84f0 | 基线 same-set
void __fastcall codexmate_lib::core::relay::codex_project_state::active_db_path::h3a30f1c5da4f6f85(
        size_t *a1,
        __int64 *a2,
        double a3)
{
  __int64 v3; // rbx
  size_t v4; // r15
  const void *v5; // r12
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  size_t v10; // rsi
  size_t v11; // rax
  char v12[8]; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-D0h]
  size_t v14; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v15; // [rsp+A8h] [rbp-38h]
  size_t v16; // [rsp+B0h] [rbp-30h]

  if ( __OFSUB__(0, a2[90]) ) /*0x100ac8509*/
  {
    a3 = codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(&v14, a2[1], a2[2]); /*0x100ac8521*/
    v3 = v15; /*0x100ac8526*/
    v4 = v16; /*0x100ac852a*/
  }
  else
  {
    v5 = (const void *)a2[91]; /*0x100ac8530*/
    v4 = a2[92]; /*0x100ac8537*/
    if ( v4 ) /*0x100ac8541*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100ac8543*/
      v3 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x100ac8555*/
      if ( !v3 ) /*0x100ac855b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x100ac8565*/
    }
    else
    {
      v3 = 1; /*0x100ac856a*/
    }
    v14 = v4; /*0x100ac856f*/
    v15 = v3; /*0x100ac8573*/
    memcpy((void *)v3, v5, v4); /*0x100ac8580*/
    v16 = v4; /*0x100ac8585*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535(v12, v3, v4); /*0x100ac8596*/
  if ( v12[0] ) /*0x100ac85a2*/
  {
    if ( (v13 & 3) == 1 ) /*0x100ac85b3*/
    {
      v6 = v13 - 1; /*0x100ac85b5*/
      v7 = *(_QWORD *)(v13 - 1); /*0x100ac85b9*/
      v8 = *(_QWORD *)(v13 + 7); /*0x100ac85bd*/
      if ( *(_QWORD *)v8 ) /*0x100ac85c1*/
        (*(void (__fastcall **)(__int64, double))v8)(v7, a3); /*0x100ac85cd*/
      v9 = *(_QWORD *)(v8 + 8); /*0x100ac85cf*/
      if ( v9 ) /*0x100ac85d6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x100ac85df*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x100ac85f1*/
    }
    v10 = v14; /*0x100ac8600*/
    *a1 = 0x8000000000000000LL; /*0x100ac8604*/
    if ( v10 ) /*0x100ac860a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v10, 1); /*0x100ac8614*/
  }
  else
  {
    a1[2] = v16; /*0x100ac861f*/
    v11 = v14; /*0x100ac8623*/
    a1[1] = v15; /*0x100ac862b*/
    *a1 = v11; /*0x100ac862f*/
  }
}