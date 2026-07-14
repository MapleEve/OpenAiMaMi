// mac 1.1.8 BEHAVIORAL-BACKEND uninstall_daemon node 0x1001e9e20 depth=0
// uninstall_daemon_owner
_QWORD *__fastcall codexmate_lib::platform::daemon::uninstall_daemon::h54663b9212e9540a(
        _QWORD *a1,
        void *a2,
        size_t a3)
{
  __int64 v4; // r12
  __int64 v5; // r12
  _UNKNOWN **v6; // rax
  __int64 *v8; // [rsp+0h] [rbp-130h] BYREF
  __int64 v9; // [rsp+8h] [rbp-128h]
  __int64 v10; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v11; // [rsp+D0h] [rbp-60h]
  __int64 v12; // [rsp+E0h] [rbp-50h]
  __int64 v13; // [rsp+100h] [rbp-30h]

  if ( codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::h6d8f7a7b7010e1d0 ) /*0x1001e9e47*/
  {
    LOBYTE(v10) = 1; /*0x1001e9ff9*/
    v8 = &v10; /*0x1001ea001*/
    std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c( /*0x1001ea026*/
      &codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::h6d8f7a7b7010e1d0,
      0,
      (__int64)&v8,
      (__int64)&unk_101527FA8,
      (__int64)&off_101526D68);
  }
  std::sys::fs::metadata::h32fa16d3052ea535((__int64 *)&v8, a2, a3); /*0x1001e9e5a*/
  if ( (_DWORD)v8 == 1 ) /*0x1001e9e66*/
  {
    if ( (v9 & 3) == 1 ) /*0x1001e9e77*/
    {
      v4 = *(_QWORD *)(v9 + 7); /*0x1001e9e85*/
      if ( *(_QWORD *)v4 ) /*0x1001e9e89*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v9 - 1)); /*0x1001e9e95*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x1001e9e97*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9ea9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9ebb*/
    }
    goto LABEL_23; /*0x1001e9ec0*/
  }
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001e9edb*/
    (__int64)&v8,
    "launchctl-wunloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistremovedev.aionsale.auto-switch",
    9u);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001e9eef*/
    (__int64)&v8,
    (__int64)"unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistremovedev.aionsale.auto-switch",
    6);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001e9f07*/
    (__int64)&v8,
    (__int64)"-wunloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistremovedev.aionsale.auto-switch",
    2);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0((__int64)&v8, (__int64)a2, a3); /*0x1001e9f19*/
  std::process::Command::output::h737eedd4de2ee22e((__int64)&v10, (__int64)&v8); /*0x1001e9f29*/
  if ( __OFSUB__(-v10, 1) ) /*0x1001e9f35*/
  {
    if ( (v11 & 3) != 1 ) /*0x1001e9f46*/
      goto LABEL_21; /*0x1001e9f46*/
    v13 = v11 - 1; /*0x1001e9f4c*/
    v5 = *(_QWORD *)(v11 + 7); /*0x1001e9f54*/
    if ( *(_QWORD *)v5 ) /*0x1001e9f58*/
      (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v11 - 1)); /*0x1001e9f64*/
    if ( *(_QWORD *)(v5 + 8) ) /*0x1001e9f66*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9f78*/
    goto LABEL_20; /*0x1001e9f78*/
  }
  if ( v10 ) /*0x1001e9f8d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9f98*/
  if ( v12 ) /*0x1001e9fa4*/
LABEL_20:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e9faf*/
LABEL_21:
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd((__int64)&v8); /*0x1001e9fb4*/
  v6 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(a2, a3); /*0x1001e9fc6*/
  if ( !v6 ) /*0x1001e9fce*/
  {
LABEL_23:
    *a1 = 10; /*0x1001e9fdd*/
    return a1; /*0x1001e9fdd*/
  }
  *a1 = 2; /*0x1001e9fd0*/
  a1[1] = v6; /*0x1001e9fd7*/
  return a1; /*0x1001e9fe7*/
}