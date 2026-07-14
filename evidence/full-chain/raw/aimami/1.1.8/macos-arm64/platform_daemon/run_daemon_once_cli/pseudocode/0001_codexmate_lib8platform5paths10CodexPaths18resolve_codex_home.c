// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x1004d59e0 depth=1
// codexmate_lib8platform5paths10CodexPaths18resolve_codex_home
size_t *__fastcall codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::hac90456ee84df9c2(
        size_t *a1,
        double a2,
        double a3,
        double a4)
{
  __int64 v4; // r14
  _BYTE *v5; // rax
  const void *v6; // r15
  size_t v7; // rdx
  size_t *result; // rax
  __int64 v9; // [rsp+8h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-30h]
  size_t v11; // [rsp+18h] [rbp-28h]
  size_t v12; // [rsp+20h] [rbp-20h]

  std::env::_var::h5297a832922dea45( /*0x1004d5a00*/
    &v9,
    "CODEX_HOME.codexsqlitestate_5.sqliteLibrary/LaunchAgents/dev.aimami.auto-switch.plistcodexmatecustom-instructionsrelayauth.jsonconfig.tomlsession_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    10,
    a2,
    a3,
    a4);
  if ( (_BYTE)v9 ) /*0x1004d5a09*/
  {
    if ( !__OFSUB__(-v10, 1) && v10 ) /*0x1004d5a21*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d5a2c*/
    dirs::home_dir::hc82e61f557956e66(&v9); /*0x1004d5a35*/
    v4 = v9; /*0x1004d5a3a*/
    if ( v9 == 0x8000000000000000LL ) /*0x1004d5a41*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d5a43*/
      v4 = 1; /*0x1004d5a48*/
      v5 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1u, 1u); /*0x1004d5a58*/
      if ( !v5 ) /*0x1004d5a60*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 1); /*0x1004d5ad2*/
      v6 = v5; /*0x1004d5a62*/
      *v5 = 46; /*0x1004d5a65*/
      v7 = 1; /*0x1004d5a68*/
    }
    else
    {
      v6 = (const void *)v10; /*0x1004d5a88*/
      v7 = v11; /*0x1004d5a8c*/
    }
    result = std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d5aa3*/
               a1,
               v6,
               v7,
               ".codexsqlitestate_5.sqliteLibrary/LaunchAgents/dev.aimami.auto-switch.plistcodexmatecustom-instructionsrelayauth.jsonconfig.tomlsession_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
               6u);
    if ( v4 ) /*0x1004d5aab*/
      return (size_t *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d5ab8*/
  }
  else
  {
    a1[2] = v12; /*0x1004d5a73*/
    result = (size_t *)v10; /*0x1004d5a77*/
    a1[1] = v11; /*0x1004d5a7f*/
    *a1 = (size_t)result; /*0x1004d5a83*/
  }
  return result; /*0x1004d5abd*/
}