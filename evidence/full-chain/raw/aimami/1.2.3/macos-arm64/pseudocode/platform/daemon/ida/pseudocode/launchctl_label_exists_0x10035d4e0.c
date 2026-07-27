// __ZN13codexmate_lib8platform6daemon22launchctl_label_exists @ 0x10035d4e0 | 基线 same-set
__int64 codexmate_lib::platform::daemon::launchctl_label_exists::hb0f32bbc46c066ee()
{
  __int64 v0; // rbx
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r14
  int v6; // r15d
  _BYTE v8[200]; // [rsp+0h] [rbp-120h] BYREF
  __int64 v9; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v10; // [rsp+D0h] [rbp-50h]
  __int64 v11; // [rsp+E0h] [rbp-40h]
  __int64 v12; // [rsp+E8h] [rbp-38h]
  int v13; // [rsp+F8h] [rbp-28h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x10035d508*/
    v8,
    "launchctl-w&amp;&quot;&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-pco"
    "m.apple.quarantine",
    9);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v8, &unk_1015E3B5C, 4); /*0x10035d51c*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v8, &unk_1015F7860, 22); /*0x10035d534*/
  std::process::Command::output::h737eedd4de2ee22e(&v9, v8); /*0x10035d544*/
  if ( __OFSUB__(-v9, 1) ) /*0x10035d550*/
  {
    if ( (v10 & 3) == 1 ) /*0x10035d561*/
    {
      v0 = v10 - 1; /*0x10035d563*/
      v1 = *(_QWORD *)(v10 - 1); /*0x10035d567*/
      v2 = *(_QWORD *)(v10 + 7); /*0x10035d56b*/
      if ( *(_QWORD *)v2 ) /*0x10035d56f*/
        (*(void (__fastcall **)(__int64))v2)(v1); /*0x10035d57b*/
      v3 = *(_QWORD *)(v2 + 8); /*0x10035d57d*/
      if ( v3 ) /*0x10035d585*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v3, *(_QWORD *)(v2 + 16)); /*0x10035d58f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v0, 24, 8); /*0x10035d5a1*/
    }
    LODWORD(v4) = 0; /*0x10035d5a6*/
  }
  else
  {
    v4 = v11; /*0x10035d5aa*/
    v5 = v12; /*0x10035d5ae*/
    v6 = v13; /*0x10035d5b2*/
    if ( v9 ) /*0x10035d5b6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x10035d5c1*/
    if ( v4 ) /*0x10035d5c9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x10035d5d6*/
    LOBYTE(v4) = v6 == 0; /*0x10035d5de*/
  }
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v8); /*0x10035d5e8*/
  return (unsigned int)v4; /*0x10035d5ef*/
}