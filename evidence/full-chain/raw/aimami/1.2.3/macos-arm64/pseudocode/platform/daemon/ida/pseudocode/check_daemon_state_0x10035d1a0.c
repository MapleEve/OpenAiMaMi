// __ZN13codexmate_lib8platform6daemon18check_daemon_state @ 0x10035d1a0
__int64 __fastcall codexmate_lib::platform::daemon::check_daemon_state::hcbc03433a17a641c(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  char *v9; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+8h] [rbp-B8h]
  char v11; // [rsp+9Fh] [rbp-21h] BYREF

  v3 = a2; /*0x10035d1b2*/
  if ( codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::hb5dd0337acd6abee ) /*0x10035d1c2*/
  {
    v11 = 1; /*0x10035d258*/
    v9 = &v11; /*0x10035d260*/
    v2 = a2; /*0x10035d285*/
    std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c( /*0x10035d28b*/
      &codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::hb5dd0337acd6abee,
      0,
      &v9,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1595,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1175);
    v3 = a2; /*0x10035d290*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535(&v9, a1, v3); /*0x10035d1d2*/
  if ( (_DWORD)v9 == 1 ) /*0x10035d1de*/
  {
    LOBYTE(v2) = 2; /*0x10035d1ec*/
    if ( (v10 & 3) == 1 ) /*0x10035d1f2*/
    {
      v4 = v10 - 1; /*0x10035d1f4*/
      v5 = *(_QWORD *)(v10 - 1); /*0x10035d1f8*/
      v6 = *(_QWORD *)(v10 + 7); /*0x10035d1fc*/
      if ( *(_QWORD *)v6 ) /*0x10035d200*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x10035d20c*/
      v7 = *(_QWORD *)(v6 + 8); /*0x10035d20e*/
      if ( v7 ) /*0x10035d216*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x10035d220*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x10035d232*/
    }
  }
  else
  {
    v2 = codexmate_lib::platform::daemon::launchctl_label_exists::hb0f32bbc46c066ee(); /*0x10035d23e*/
    LOBYTE(v2) = v2 ^ 1; /*0x10035d241*/
  }
  return v2; /*0x10035d248*/
}