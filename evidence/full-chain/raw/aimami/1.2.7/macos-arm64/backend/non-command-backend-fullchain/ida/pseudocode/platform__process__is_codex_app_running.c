// aimami 1.2.7 mac truly_undone deep reverse — cluster platform/process/is_codex_app_running
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::platform::process::is_codex_app_running::hd8ada9a15c14db87 @ 0x1007b5fa0 size=878 lines=169 =====
__int64 __fastcall codexmate_lib::platform::process::is_codex_app_running::hd8ada9a15c14db87()
{
  __int64 v0; // r15
  __int64 v1; // r14
  __int64 v2; // r14
  int v3; // ebx
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  size_t v14; // rbx
  const void *v15; // r14
  __int64 v16; // rax
  _BYTE *v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-170h] BYREF
  __int64 v19; // [rsp+8h] [rbp-168h]
  __int64 v20; // [rsp+10h] [rbp-160h]
  __int64 v21; // [rsp+C8h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-A0h]
  __int64 v23; // [rsp+D8h] [rbp-98h]
  __int64 v24; // [rsp+E0h] [rbp-90h]
  __int64 v25; // [rsp+E8h] [rbp-88h]
  __int64 v26; // [rsp+F0h] [rbp-80h]
  __int64 v27; // [rsp+F8h] [rbp-78h]
  __int64 v28; // [rsp+100h] [rbp-70h]
  __int64 v29; // [rsp+108h] [rbp-68h]
  __int64 v30; // [rsp+110h] [rbp-60h]
  __int64 v31; // [rsp+118h] [rbp-58h]
  __int64 v32; // [rsp+120h] [rbp-50h]
  __int64 v33; // [rsp+128h] [rbp-48h]
  __int64 v34; // [rsp+130h] [rbp-40h]
  __int64 v35; // [rsp+138h] [rbp-38h]
  _BYTE *v36; // [rsp+140h] [rbp-30h]

  codexmate_lib::platform::process::codex_app_bundle_path::h9bd7e427f8091333(&v18);
  v1 = v18;
  if ( __OFSUB__(-v18, 1) )
    goto LABEL_8;
  v0 = v19;
  codexmate_lib::platform::process::codex_macos_bundle_main_executable::hd9103030b06cb65a(&v21, v19, v20);
  if ( v1 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v0, v1, 1);
  v2 = v21;
  if ( v21 == 0x8000000000000000LL )
    goto LABEL_8;
  v0 = v22;
  v3 = codexmate_lib::platform::process::codex_macos_main_process_pid::h74d930ee73166f10(v22, v23);
  if ( v2 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v0, v2, 1);
  LOBYTE(v0) = 1;
  if ( v3 != 1 )
  {
LABEL_8:
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379(
      &v18,
      "/usr/bin/osascript-eCFBundleShortVersionString-pcodexmate_lib::platform::process",
      18);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(
      &v18,
      "-eCFBundleShortVersionString-pcodexmate_lib::platform::process",
      2);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(
      &v18,
      "application id \"com.openai.codex\" is runningcodex_process_lifecycleforce_close_complete",
      44);
    std::process::Command::output::h737eedd4de2ee22e(&v21, &v18);
    v4 = v21;
    if ( v21 == 0x8000000000000000LL )
    {
      if ( (v22 & 3) == 1 )
      {
        v5 = v22 - 1;
        v6 = *(_QWORD *)(v22 - 1);
        v7 = *(_QWORD *)(v22 + 7);
        if ( *(_QWORD *)v7 )
          (*(void (__fastcall **)(__int64))v7)(v6);
        v8 = *(_QWORD *)(v7 + 8);
        if ( v8 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8);
      }
      core::ptr::drop_in_place$LT$std..process..Command$GT$::h216cc1a7e63385bb(&v18);
LABEL_21:
      LODWORD(v0) = 0;
      return (unsigned int)v0;
    }
    v34 = v27;
    v33 = v26;
    v32 = v25;
    v31 = v24;
    v30 = v23;
    v29 = v22;
    v28 = v21;
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h216cc1a7e63385bb(&v18);
    if ( (_DWORD)v34 )
    {
      if ( v4 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v4, 1);
      if ( v31 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v31, 1);
      goto LABEL_21;
    }
    v10 = v29;
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v18, v29, v30);
    v11 = v19;
    v35 = v19;
    v12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(v19, v20);
    v14 = v13;
    if ( v13 < 0 )
    {
      v0 = 0;
      goto LABEL_25;
    }
    v15 = (const void *)v12;
    if ( v13 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11);
      v0 = 1;
      v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1);
      if ( !v16 )
LABEL_25:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v0, v14);
    }
    else
    {
      v16 = 1;
    }
    v36 = (_BYTE *)v16;
    memcpy((void *)v16, v15, v14);
    if ( v4 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v4, 1);
    if ( v31 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v31, 1);
    if ( 2 * v18 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v18, 1);
      if ( v14 == 4 )
        goto LABEL_36;
    }
    else if ( v14 == 4 )
    {
LABEL_36:
      v17 = v36;
      if ( (*v36 | (unsigned __int8)(32 * ((unsigned __int8)(*v36 - 65) < 0x1Au))) == 116
        && (v36[1] | (unsigned __int8)(32 * ((unsigned __int8)(v36[1] - 65) < 0x1Au))) == 114
        && (v36[2] | (unsigned __int8)(32 * ((unsigned __int8)(v36[2] - 65) < 0x1Au))) == 117 )
      {
        LOBYTE(v0) = (v36[3] | (unsigned __int8)(32 * ((unsigned __int8)(v36[3] - 65) < 0x1Au))) == 101;
      }
      else
      {
        LODWORD(v0) = 0;
      }
LABEL_43:
      if ( v14 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v14, 1);
      return (unsigned int)v0;
    }
    LODWORD(v0) = 0;
    v17 = v36;
    goto LABEL_43;
  }
  return (unsigned int)v0;
}

