// __ZN13codexmate_lib8platform5paths10CodexPaths27current_codex_state_db_path @ 0x100543100 | 基线 same-set
size_t *__fastcall codexmate_lib::platform::paths::CodexPaths::current_codex_state_db_path::h76ad95bf527978ce(
        size_t *a1,
        __int64 *a2)
{
  const void *v3; // r15
  size_t v4; // r14
  __int64 v5; // rdi

  if ( __OFSUB__(0, a2[90]) ) /*0x10054310f*/
  {
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(a1, a2[1], a2[2]); /*0x100543126*/
  }
  else
  {
    v3 = (const void *)a2[91]; /*0x10054312d*/
    v4 = a2[92]; /*0x100543134*/
    if ( v4 ) /*0x10054313e*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100543140*/
      v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x100543152*/
      if ( !v5 ) /*0x100543158*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x100543162*/
    }
    else
    {
      v5 = 1; /*0x100543167*/
    }
    *a1 = v4; /*0x10054316c*/
    a1[1] = v5; /*0x10054316f*/
    memcpy((void *)v5, v3, v4); /*0x100543179*/
    a1[2] = v4; /*0x10054317e*/
  }
  return a1; /*0x100543189*/
}