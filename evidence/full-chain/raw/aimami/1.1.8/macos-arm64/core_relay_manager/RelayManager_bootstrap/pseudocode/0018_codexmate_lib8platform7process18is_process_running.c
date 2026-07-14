// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x1001c0510 depth=1
__int64 __fastcall codexmate_lib::platform::process::is_process_running::h2043172b9767bad6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // r15d
  _BYTE v12[200]; // [rsp+0h] [rbp-120h] BYREF
  __int64 v13; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v14; // [rsp+D0h] [rbp-50h]
  __int64 v15; // [rsp+E0h] [rbp-40h]
  __int64 v16; // [rsp+E8h] [rbp-38h]
  int v17; // [rsp+F8h] [rbp-28h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001c0538*/
    v12,
    "pgrep-xps-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
    5,
    a4);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001c054c*/
    v12,
    "-xps-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
    2);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v12, "Codex", 5); /*0x1001c0564*/
  std::process::Command::output::h737eedd4de2ee22e(&v13, v12); /*0x1001c0574*/
  if ( __OFSUB__(-v13, 1) ) /*0x1001c0580*/
  {
    if ( (v14 & 3) == 1 ) /*0x1001c0591*/
    {
      v4 = v14 - 1; /*0x1001c0593*/
      v5 = *(_QWORD *)(v14 - 1); /*0x1001c0597*/
      v6 = *(_QWORD *)(v14 + 7); /*0x1001c059b*/
      if ( *(_QWORD *)v6 ) /*0x1001c059f*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x1001c05ab*/
      v7 = *(_QWORD *)(v6 + 8); /*0x1001c05ad*/
      if ( v7 ) /*0x1001c05b5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x1001c05bf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x1001c05d1*/
    }
    LODWORD(v8) = 0; /*0x1001c05d6*/
  }
  else
  {
    v8 = v15; /*0x1001c05da*/
    v9 = v16; /*0x1001c05de*/
    v10 = v17; /*0x1001c05e2*/
    if ( v13 ) /*0x1001c05e6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x1001c05f1*/
    if ( v8 ) /*0x1001c05f9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x1001c0606*/
    LOBYTE(v8) = v10 == 0; /*0x1001c060e*/
  }
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(v12); /*0x1001c0618*/
  return (unsigned int)v8; /*0x1001c061f*/
}