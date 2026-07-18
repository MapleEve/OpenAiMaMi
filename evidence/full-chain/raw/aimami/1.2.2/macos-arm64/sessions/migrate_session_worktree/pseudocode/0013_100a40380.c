// mac 1.2.2 NEW migrate_session_worktree 0x100a40380 d=1
signed __int64 *__fastcall codexmate_lib::platform::paths::CodexPaths::current_codex_state_db_path::h5644bd6d3a2baa1b(
        signed __int64 *a1,
        _QWORD *a2)
{
  signed __int64 v3; // r14
  __int64 v4; // r12
  const void *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi

  if ( !__OFSUB__(0, a2[90]) ) /*0x100a40397*/
  {
    v3 = a2[92]; /*0x100a403ae*/
    if ( v3 < 0 ) /*0x100a403b8*/
    {
      v4 = 0; /*0x100a403ba*/
      goto LABEL_5; /*0x100a403ba*/
    }
    v5 = (const void *)a2[91]; /*0x100a403c8*/
    if ( v3 ) /*0x100a403cf*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a403d1*/
      v4 = 1; /*0x100a403d6*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x100a403e4*/
      if ( !v6 ) /*0x100a403ec*/
LABEL_5:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v3); /*0x100a403bd*/
      v7 = v6; /*0x100a403ee*/
    }
    else
    {
      v7 = 1; /*0x100a403f3*/
    }
    *a1 = v3; /*0x100a403f8*/
    a1[1] = v7; /*0x100a403fb*/
    memcpy((void *)v7, v5, v3); /*0x100a40405*/
    a1[2] = v3; /*0x100a4040a*/
    return a1; /*0x100a4040a*/
  }
  codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::hf2d8723635f4afeb(a1, a2[1], a2[2]); /*0x100a403a7*/
  return a1; /*0x100a40411*/
}