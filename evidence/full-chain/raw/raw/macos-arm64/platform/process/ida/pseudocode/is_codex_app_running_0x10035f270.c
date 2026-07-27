// __ZN13codexmate_lib8platform7process20is_codex_app_running @ 0x10035f270 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151()
{
  __int64 v0; // r15
  __int64 v1; // rcx
  __int64 v2; // r14
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  size_t v16; // rbx
  const void *v17; // r14
  __int64 v18; // rax
  _BYTE *v19; // rdi
  __int64 v20; // [rsp+0h] [rbp-170h] BYREF
  __int64 v21; // [rsp+8h] [rbp-168h]
  __int64 v22; // [rsp+10h] [rbp-160h]
  __int64 v23; // [rsp+C8h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-A0h]
  __int64 v25; // [rsp+D8h] [rbp-98h]
  __int64 v26; // [rsp+E0h] [rbp-90h]
  __int64 v27; // [rsp+E8h] [rbp-88h]
  __int64 v28; // [rsp+F0h] [rbp-80h]
  __int64 v29; // [rsp+F8h] [rbp-78h]
  __int64 v30; // [rsp+100h] [rbp-70h]
  __int64 v31; // [rsp+108h] [rbp-68h]
  __int64 v32; // [rsp+110h] [rbp-60h]
  __int64 v33; // [rsp+118h] [rbp-58h]
  __int64 v34; // [rsp+120h] [rbp-50h]
  __int64 v35; // [rsp+128h] [rbp-48h]
  __int64 v36; // [rsp+130h] [rbp-40h]
  __int64 v37; // [rsp+138h] [rbp-38h]
  _BYTE *v38; // [rsp+140h] [rbp-30h]

  codexmate_lib::platform::process::codex_app_bundle_path::h67ee45f90aea67f0(&v20); /*0x10035f295*/
  v2 = v20; /*0x10035f29a*/
  if ( __OFSUB__(-v20, 1) ) /*0x10035f2a7*/
    goto LABEL_8; /*0x10035f2a7*/
  v0 = v21; /*0x10035f2a9*/
  codexmate_lib::platform::process::codex_macos_bundle_main_executable::h65e006069063e1dd(&v23, v21, v22, v1); /*0x10035f2c1*/
  if ( v2 ) /*0x10035f2c9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v0, v2, 1); /*0x10035f2d6*/
  v3 = v23; /*0x10035f2db*/
  if ( v23 == 0x8000000000000000LL ) /*0x10035f2e5*/
    goto LABEL_8; /*0x10035f2e5*/
  v0 = v24; /*0x10035f2e7*/
  v4 = codexmate_lib::platform::process::codex_macos_main_process_pid::h13b6413f2058df0a(v24, v25); /*0x10035f2fd*/
  if ( v3 ) /*0x10035f302*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v0, v3, 1); /*0x10035f30f*/
  LOBYTE(v0) = 1; /*0x10035f314*/
  if ( v4 != 1 ) /*0x10035f31a*/
  {
LABEL_8:
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v20, &unk_1015F7BF8, 18); /*0x10035f336*/
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v20, &unk_1015F7C0A, 2); /*0x10035f34a*/
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x10035f362*/
      &v20,
      "application id \"com.openai.codex\" is runningcodex_process_lifecycleforce_close_complete",
      44);
    std::process::Command::output::h737eedd4de2ee22e(&v23, &v20); /*0x10035f375*/
    v5 = v23; /*0x10035f37a*/
    if ( v23 == 0x8000000000000000LL ) /*0x10035f384*/
    {
      if ( (v24 & 3) == 1 ) /*0x10035f395*/
      {
        v6 = v24 - 1; /*0x10035f397*/
        v7 = *(_QWORD *)(v24 - 1); /*0x10035f39b*/
        v8 = *(_QWORD *)(v24 + 7); /*0x10035f39f*/
        if ( *(_QWORD *)v8 ) /*0x10035f3a3*/
          (*(void (__fastcall **)(__int64))v8)(v7); /*0x10035f3af*/
        v9 = *(_QWORD *)(v8 + 8); /*0x10035f3b1*/
        if ( v9 ) /*0x10035f3b9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x10035f3c3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x10035f3d5*/
      }
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v20); /*0x10035f3e1*/
LABEL_21:
      LODWORD(v0) = 0; /*0x10035f461*/
      return (unsigned int)v0; /*0x10035f461*/
    }
    v36 = v29; /*0x10035f3f3*/
    v35 = v28; /*0x10035f3fb*/
    v34 = v27; /*0x10035f403*/
    v33 = v26; /*0x10035f40b*/
    v32 = v25; /*0x10035f416*/
    v31 = v24; /*0x10035f41a*/
    v30 = v23; /*0x10035f41e*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v20); /*0x10035f429*/
    if ( (_DWORD)v36 ) /*0x10035f432*/
    {
      if ( v5 ) /*0x10035f437*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v5, 1); /*0x10035f445*/
      if ( v33 ) /*0x10035f451*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x10035f45c*/
      goto LABEL_21; /*0x10035f45c*/
    }
    v11 = v31; /*0x10035f479*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v20, v31, v32); /*0x10035f48b*/
    v12 = v21; /*0x10035f490*/
    v13 = v22; /*0x10035f497*/
    v37 = v21; /*0x10035f49e*/
    v14 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v21, v22); /*0x10035f4a2*/
    v16 = v15; /*0x10035f4a7*/
    if ( v15 < 0 ) /*0x10035f4ad*/
    {
      v0 = 0; /*0x10035f4af*/
      goto LABEL_25; /*0x10035f4af*/
    }
    v17 = (const void *)v14; /*0x10035f4bf*/
    if ( v15 ) /*0x10035f4c5*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v13); /*0x10035f4c7*/
      v0 = 1; /*0x10035f4cc*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x10035f4da*/
      if ( !v18 ) /*0x10035f4e2*/
LABEL_25:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v0, v16); /*0x10035f4b2*/
    }
    else
    {
      v18 = 1; /*0x10035f4e6*/
    }
    v38 = (_BYTE *)v18; /*0x10035f4eb*/
    memcpy((void *)v18, v17, v16); /*0x10035f4f8*/
    if ( v5 ) /*0x10035f500*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v5, 1); /*0x10035f50d*/
    if ( v33 ) /*0x10035f519*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x10035f524*/
    if ( 2 * v20 ) /*0x10035f530*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v20, 1); /*0x10035f5b4*/
      if ( v16 == 4 ) /*0x10035f5bd*/
        goto LABEL_36; /*0x10035f5bd*/
    }
    else if ( v16 == 4 ) /*0x10035f541*/
    {
LABEL_36:
      v19 = v38; /*0x10035f543*/
      if ( (*v38 | (unsigned __int8)(32 * ((unsigned __int8)(*v38 - 65) < 0x1Au))) == 116 /*0x10035f589*/
        && (v38[1] | (unsigned __int8)(32 * ((unsigned __int8)(v38[1] - 65) < 0x1Au))) == 114
        && (v38[2] | (unsigned __int8)(32 * ((unsigned __int8)(v38[2] - 65) < 0x1Au))) == 117 )
      {
        LOBYTE(v0) = (v38[3] | (unsigned __int8)(32 * ((unsigned __int8)(v38[3] - 65) < 0x1Au))) == 101; /*0x10035f5a0*/
      }
      else
      {
        LODWORD(v0) = 0; /*0x10035f5a6*/
      }
LABEL_43:
      if ( v16 ) /*0x10035f5c9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v16, 1); /*0x10035f5d7*/
      return (unsigned int)v0; /*0x10035f5dc*/
    }
    LODWORD(v0) = 0; /*0x10035f5bf*/
    v19 = v38; /*0x10035f5c2*/
    goto LABEL_43; /*0x10035f5c2*/
  }
  return (unsigned int)v0; /*0x10035f467*/
}