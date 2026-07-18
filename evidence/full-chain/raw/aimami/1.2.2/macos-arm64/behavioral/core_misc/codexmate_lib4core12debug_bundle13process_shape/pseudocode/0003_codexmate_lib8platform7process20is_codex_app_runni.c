// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x1009ab310 d=1
__int64 __fastcall codexmate_lib::platform::process::is_codex_app_running::ha30846081cef0959()
{
  __int64 v0; // r15
  __int64 v1; // r14
  __int64 v2; // r14
  int v3; // ebx
  __int64 v4; // r12
  __int64 v5; // r12
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  size_t v9; // rbx
  unsigned __int8 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-170h] BYREF
  unsigned __int8 *v13; // [rsp+8h] [rbp-168h]
  __int64 v14; // [rsp+10h] [rbp-160h]
  __int64 v15; // [rsp+C8h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-A0h]
  __int64 v17; // [rsp+D8h] [rbp-98h]
  __int64 v18; // [rsp+E0h] [rbp-90h]
  __int64 v19; // [rsp+E8h] [rbp-88h]
  __int64 v20; // [rsp+F0h] [rbp-80h]
  __int64 v21; // [rsp+F8h] [rbp-78h]
  __int64 v22; // [rsp+100h] [rbp-70h]
  __int64 v23; // [rsp+108h] [rbp-68h]
  __int64 v24; // [rsp+110h] [rbp-60h]
  __int64 v25; // [rsp+118h] [rbp-58h]
  __int64 v26; // [rsp+120h] [rbp-50h]
  __int64 v27; // [rsp+128h] [rbp-48h]
  __int64 v28; // [rsp+130h] [rbp-40h]
  unsigned __int8 *v29; // [rsp+138h] [rbp-38h]
  _BYTE *v30; // [rsp+140h] [rbp-30h]

  codexmate_lib::platform::process::codex_app_bundle_path::h81c1bf1fb5112bfc(&v12); /*0x1009ab335*/
  v1 = v12; /*0x1009ab33a*/
  if ( __OFSUB__(-v12, 1) ) /*0x1009ab347*/
    goto LABEL_8; /*0x1009ab347*/
  LODWORD(v0) = (_DWORD)v13; /*0x1009ab349*/
  codexmate_lib::platform::process::codex_macos_bundle_main_executable::h98fd7660930b3f21(&v15, v13, v14); /*0x1009ab361*/
  if ( v1 ) /*0x1009ab369*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab376*/
  v2 = v15; /*0x1009ab37b*/
  if ( v15 == 0x8000000000000000LL ) /*0x1009ab385*/
    goto LABEL_8; /*0x1009ab385*/
  LODWORD(v0) = v16; /*0x1009ab387*/
  v3 = codexmate_lib::platform::process::codex_macos_main_process_pid::h9d83424917c4220f(v16, v17); /*0x1009ab39d*/
  if ( v2 ) /*0x1009ab3a2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab3af*/
  LOBYTE(v0) = 1; /*0x1009ab3b4*/
  if ( v3 != 1 ) /*0x1009ab3ba*/
  {
LABEL_8:
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1009ab3d6*/
      &v12,
      "/usr/bin/osascript-eCFBundleExecutableContents/MacOScodex_processlaunch_ready",
      18);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1009ab3ea*/
      &v12,
      "-eCFBundleExecutableContents/MacOScodex_processlaunch_ready",
      2);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1009ab402*/
      &v12,
      "application id \"com.openai.codex\" is running",
      44);
    std::process::Command::output::h737eedd4de2ee22e(&v15, &v12); /*0x1009ab415*/
    v4 = v15; /*0x1009ab41a*/
    if ( v15 == 0x8000000000000000LL ) /*0x1009ab424*/
    {
      if ( (v16 & 3) == 1 ) /*0x1009ab435*/
      {
        v5 = *(_QWORD *)(v16 + 7); /*0x1009ab43f*/
        if ( *(_QWORD *)v5 ) /*0x1009ab443*/
          (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v16 - 1)); /*0x1009ab44f*/
        if ( *(_QWORD *)(v5 + 8) ) /*0x1009ab451*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab463*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab475*/
      }
      core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758(&v12); /*0x1009ab481*/
LABEL_21:
      LODWORD(v0) = 0; /*0x1009ab501*/
      return (unsigned int)v0; /*0x1009ab501*/
    }
    v28 = v21; /*0x1009ab493*/
    v27 = v20; /*0x1009ab49b*/
    v26 = v19; /*0x1009ab4a3*/
    v25 = v18; /*0x1009ab4ab*/
    v24 = v17; /*0x1009ab4b6*/
    v23 = v16; /*0x1009ab4ba*/
    v22 = v15; /*0x1009ab4be*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758(&v12); /*0x1009ab4c9*/
    if ( (_DWORD)v28 ) /*0x1009ab4d2*/
    {
      if ( v4 ) /*0x1009ab4d7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab4e5*/
      if ( v25 ) /*0x1009ab4f1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab4fc*/
      goto LABEL_21; /*0x1009ab4fc*/
    }
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v12, v23, v24); /*0x1009ab52b*/
    v29 = v13; /*0x1009ab53e*/
    v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(v13, v14); /*0x1009ab542*/
    v9 = v8; /*0x1009ab547*/
    if ( v8 < 0 ) /*0x1009ab54d*/
    {
      v0 = 0; /*0x1009ab54f*/
      goto LABEL_25; /*0x1009ab54f*/
    }
    v10 = v7; /*0x1009ab55f*/
    if ( v8 ) /*0x1009ab565*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009ab567*/
      v0 = 1; /*0x1009ab56c*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1u); /*0x1009ab57a*/
      if ( !v11 ) /*0x1009ab582*/
LABEL_25:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v0); /*0x1009ab552*/
    }
    else
    {
      v11 = 1; /*0x1009ab586*/
    }
    v30 = (_BYTE *)v11; /*0x1009ab58b*/
    memcpy((void *)v11, v10, v9); /*0x1009ab598*/
    if ( v4 ) /*0x1009ab5a0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab5ad*/
    if ( v25 ) /*0x1009ab5b9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab5c4*/
    if ( 2 * v12 ) /*0x1009ab5d0*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab654*/
      if ( v9 == 4 ) /*0x1009ab65d*/
        goto LABEL_36; /*0x1009ab65d*/
    }
    else if ( v9 == 4 ) /*0x1009ab5e1*/
    {
LABEL_36:
      if ( (*v30 | (unsigned __int8)(32 * ((unsigned __int8)(*v30 - 65) < 0x1Au))) == 116 /*0x1009ab629*/
        && (v30[1] | (unsigned __int8)(32 * ((unsigned __int8)(v30[1] - 65) < 0x1Au))) == 114
        && (v30[2] | (unsigned __int8)(32 * ((unsigned __int8)(v30[2] - 65) < 0x1Au))) == 117 )
      {
        LOBYTE(v0) = (v30[3] | (unsigned __int8)(32 * ((unsigned __int8)(v30[3] - 65) < 0x1Au))) == 101; /*0x1009ab640*/
      }
      else
      {
        LODWORD(v0) = 0; /*0x1009ab646*/
      }
LABEL_43:
      if ( v9 ) /*0x1009ab669*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab677*/
      return (unsigned int)v0; /*0x1009ab67c*/
    }
    LODWORD(v0) = 0; /*0x1009ab65f*/
    goto LABEL_43; /*0x1009ab65f*/
  }
  return (unsigned int)v0; /*0x1009ab507*/
}