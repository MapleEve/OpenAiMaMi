// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND load_snapshot_local node 0x1001ea0b0 depth=2
__int64 __fastcall codexmate_lib::platform::daemon::check_daemon_state::h0fbeb3d43845c30f(const void *a1, size_t a2)
{
  size_t v2; // rdx
  __int64 **v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r12
  int v6; // r15d
  __int64 *v8; // [rsp+0h] [rbp-120h] BYREF
  __int64 v9; // [rsp+8h] [rbp-118h]
  __int64 v10; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v11; // [rsp+D0h] [rbp-50h]
  __int64 **v12; // [rsp+E0h] [rbp-40h]
  int v13; // [rsp+F8h] [rbp-28h]

  v2 = a2; /*0x1001ea0c2*/
  LODWORD(v3) = (_DWORD)a1; /*0x1001ea0c5*/
  if ( codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::h6d8f7a7b7010e1d0 ) /*0x1001ea0d2*/
  {
    LOBYTE(v10) = 1; /*0x1001ea268*/
    v8 = &v10; /*0x1001ea270*/
    std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c( /*0x1001ea29b*/
      &codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::h6d8f7a7b7010e1d0,
      0,
      (__int64)&v8,
      (__int64)&unk_101527FA8,
      (__int64)&off_101526D68);
    v2 = a2; /*0x1001ea2a0*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535((__int64 *)&v8, a1, v2); /*0x1001ea0e2*/
  if ( (_DWORD)v8 == 1 ) /*0x1001ea0ee*/
  {
    LOBYTE(v3) = 2; /*0x1001ea0fc*/
    if ( (v9 & 3) == 1 ) /*0x1001ea101*/
    {
      v4 = *(_QWORD *)(v9 + 7); /*0x1001ea10f*/
      if ( *(_QWORD *)v4 ) /*0x1001ea113*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v9 - 1)); /*0x1001ea11f*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x1001ea121*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ea133*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ea145*/
    }
  }
  else
  {
    v3 = &v8; /*0x1001ea156*/
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001ea165*/
      (__int64)&v8,
      "launchctl-wunloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistremovedev.aionsale.auto-switch",
      9u);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001ea179*/
      (__int64)&v8,
      (__int64)"listlogsHomeInfoPathUser",
      4);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0((__int64)&v8, (__int64)&unk_10125D1C7, 22); /*0x1001ea191*/
    std::process::Command::output::h737eedd4de2ee22e((__int64)&v10, (__int64)&v8); /*0x1001ea1a1*/
    if ( __OFSUB__(-v10, 1) ) /*0x1001ea1ad*/
    {
      if ( (v11 & 3) == 1 ) /*0x1001ea1be*/
      {
        v5 = *(_QWORD *)(v11 + 7); /*0x1001ea1c8*/
        if ( *(_QWORD *)v5 ) /*0x1001ea1cc*/
          (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v11 - 1)); /*0x1001ea1d8*/
        if ( *(_QWORD *)(v5 + 8) ) /*0x1001ea1da*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ea1ec*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ea1fe*/
      }
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd((__int64)&v8); /*0x1001ea20a*/
      LOBYTE(v3) = 1; /*0x1001ea20f*/
    }
    else
    {
      v3 = v12; /*0x1001ea213*/
      v6 = v13; /*0x1001ea21b*/
      if ( v10 ) /*0x1001ea21f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ea22a*/
      if ( v3 ) /*0x1001ea232*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001ea23f*/
      LOBYTE(v3) = v6 != 0; /*0x1001ea247*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd((__int64)&v8); /*0x1001ea251*/
    }
  }
  return (unsigned int)v3; /*0x1001ea258*/
}