// __ZN13codexmate_lib8platform7process21CodexProcessLifecycle6launch @ 0x100360bf0
_QWORD *__fastcall codexmate_lib::platform::process::CodexProcessLifecycle::launch::ha2d4ffcf3d332a03(
        _QWORD *a1,
        __int64 a2)
{
  void *v3; // rax
  unsigned __int128 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // r12
  int *v9; // r13
  __int64 v10; // rbx
  void *v11; // rdi
  size_t v12; // r14
  unsigned __int128 *v13; // r13
  size_t v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  unsigned int v31; // r12d
  __int64 v32; // rax
  unsigned int v33; // edx
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v38; // rax
  unsigned int v39; // edx
  unsigned __int128 *v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // edx
  int v43; // eax
  _DWORD *v44; // rsi
  _DWORD *v45; // rdi
  __int64 i; // rcx
  _QWORD v47[2]; // [rsp+0h] [rbp-170h] BYREF
  _QWORD v48[3]; // [rsp+10h] [rbp-160h] BYREF
  __int64 v49; // [rsp+28h] [rbp-148h] BYREF
  int v50; // [rsp+30h] [rbp-140h]
  __int64 v51; // [rsp+38h] [rbp-138h] BYREF
  void *__src; // [rsp+40h] [rbp-130h]
  size_t __n; // [rsp+48h] [rbp-128h]
  unsigned __int128 *v54; // [rsp+50h] [rbp-120h] BYREF
  __int64 (__fastcall *v55)(_QWORD, _QWORD); // [rsp+58h] [rbp-118h]
  int *v56; // [rsp+60h] [rbp-110h]
  __int64 (__fastcall *v57)(); // [rsp+68h] [rbp-108h]
  unsigned __int128 *v58; // [rsp+70h] [rbp-100h]
  __int64 (__fastcall *v59)(); // [rsp+78h] [rbp-F8h]
  unsigned __int128 **v60; // [rsp+80h] [rbp-F0h]
  __int64 (__fastcall *v61)(); // [rsp+88h] [rbp-E8h]
  unsigned __int128 v62; // [rsp+90h] [rbp-E0h] BYREF
  int v63; // [rsp+A4h] [rbp-CCh] BYREF
  unsigned __int128 *v64; // [rsp+A8h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-C0h]
  _QWORD v66[12]; // [rsp+B8h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+118h] [rbp-58h]
  unsigned __int128 v68; // [rsp+120h] [rbp-50h] BYREF
  __int64 v69; // [rsp+138h] [rbp-38h]
  __int64 v70; // [rsp+140h] [rbp-30h]

  codexmate_lib::platform::process::codex_app_bundle_path::h67ee45f90aea67f0(v66); /*0x100360c0e*/
  if ( __OFSUB__(-v66[0], 1) ) /*0x100360c1d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, a2); /*0x100360c22*/
    v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100360c31*/
    if ( !v3 ) /*0x100360c39*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x1003612e2*/
    qmemcpy(v3, "Codex/ChatGPT app bundle not found", 34); /*0x100360c73*/
    *a1 = 8; /*0x100360c7c*/
    a1[1] = 34; /*0x100360c83*/
    a1[2] = v3; /*0x100360c8b*/
    a1[3] = 34; /*0x100360c8f*/
    return a1; /*0x100360c97*/
  }
  v67 = v66[0]; /*0x100360c9c*/
  v70 = v66[1]; /*0x100360cc2*/
  v69 = v66[2]; /*0x100360cc6*/
  codexmate_lib::platform::process::read_macos_bundle_value::h039fd87931802e34( /*0x100360cca*/
    &v54,
    v66[1],
    v66[2],
    "CFBundleExecutableContents/MacOScodex_processlaunch_readylaunch_timeout",
    18);
  v4 = v54; /*0x100360cd9*/
  if ( v54 == (unsigned __int128 *)0x8000000000000000LL ) /*0x100360ce3*/
  {
    v48[0] = v70; /*0x100360ced*/
    v48[1] = v69; /*0x100360cf8*/
    *(_QWORD *)&v68 = v48; /*0x100360d06*/
    *((_QWORD *)&v68 + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100360d11*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v66[1], &unk_1017BD0AC, &v68); /*0x100360d27*/
    v5 = v66[1]; /*0x100360d2c*/
    v6 = v66[2]; /*0x100360d33*/
    v7 = v66[3]; /*0x100360d3a*/
    a1[11] = v66[11]; /*0x100360d45*/
    a1[10] = v66[10]; /*0x100360d4d*/
    a1[9] = v66[9]; /*0x100360d55*/
    a1[8] = v66[8]; /*0x100360d5d*/
    a1[7] = v66[7]; /*0x100360d65*/
    a1[6] = v66[6]; /*0x100360d70*/
    a1[5] = v66[5]; /*0x100360d7b*/
    a1[4] = v66[4]; /*0x100360d86*/
    a1[1] = v5; /*0x100360d8a*/
    a1[2] = v6; /*0x100360d8e*/
    a1[3] = v7; /*0x100360d92*/
    *a1 = 9; /*0x100360d96*/
    goto LABEL_21; /*0x100360d9d*/
  }
  v8 = v55; /*0x100360da2*/
  v9 = v56; /*0x100360da9*/
  std::path::Path::_join::hb1a495d4f06b13b8(v66, v70, v69, "Contents/MacOScodex_processlaunch_readylaunch_timeout", 14); /*0x100360dcc*/
  v10 = v66[1]; /*0x100360dd1*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v51, v66[1], v66[2], v8, v9); /*0x100360def*/
  if ( v4 ) /*0x100360df7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v4, 1); /*0x100360e04*/
  if ( v66[0] ) /*0x100360e13*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v66[0], 1); /*0x100360e1d*/
  v11 = __src; /*0x100360e22*/
  v12 = __n; /*0x100360e29*/
  v13 = (unsigned __int128 *)__src; /*0x100360e30*/
  v14 = __n; /*0x100360e33*/
  if ( !(unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b(__src, __n) ) /*0x100360e3d*/
  {
    *(_QWORD *)&v68 = v13; /*0x100360f6a*/
    *((_QWORD *)&v68 + 1) = v12; /*0x100360f6e*/
    v54 = &v68; /*0x100360f76*/
    v55 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100360f84*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v66, &unk_1017BCFDD, &v54); /*0x100360fa0*/
    a1[3] = v66[2]; /*0x100360fac*/
    v35 = v66[0]; /*0x100360fb0*/
    a1[2] = v66[1]; /*0x100360fbe*/
    a1[1] = v35; /*0x100360fc2*/
    *a1 = 8; /*0x100360fc6*/
    v36 = v51; /*0x100360fcd*/
    if ( !v51 ) /*0x100360fd7*/
      goto LABEL_21; /*0x100360fd7*/
LABEL_20:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v36, 1); /*0x100360fd9*/
    goto LABEL_21; /*0x100360fe1*/
  }
  v49 = std::time::Instant::now::hda76af2c3a449055(v11, v14, v15, v16, v17); /*0x100360e48*/
  v50 = v18; /*0x100360e4f*/
  *(_QWORD *)&v68 = v70; /*0x100360e59*/
  *((_QWORD *)&v68 + 1) = v69; /*0x100360e61*/
  v54 = v13; /*0x100360e65*/
  v55 = (__int64 (__fastcall *)(_QWORD, _QWORD))v12; /*0x100360e6c*/
  v66[0] = &v68; /*0x100360e77*/
  v66[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100360e85*/
  v66[2] = &v54; /*0x100360e93*/
  v66[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100360e9a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v48, &unk_1017BD009, v66); /*0x100360eb6*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100360eda*/
    "codex_processlaunch_readylaunch_timeout",
    13,
    "launch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
    16,
    v48);
  v19 = v70; /*0x100360ee6*/
  codexmate_lib::platform::process::open_macos_app_bundle::h55caa9f65d2a5407(v66, v70, v69); /*0x100360eee*/
  if ( LODWORD(v66[0]) != 11 ) /*0x100360efa*/
  {
LABEL_28:
    qmemcpy(a1, v66, 0x60u); /*0x100361176*/
    v36 = v51; /*0x100361179*/
    if ( !v51 ) /*0x100361183*/
      goto LABEL_21; /*0x100361183*/
    goto LABEL_20; /*0x100361183*/
  }
  v23 = std::time::Instant::now::hda76af2c3a449055(v66, v19, v20, v21, v22); /*0x100360f00*/
  v25 = v24; /*0x100360f05*/
  v26 = v23; /*0x100360f0c*/
  v29 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x100360f16*/
          v23,
          v24,
          10,
          0);
  v31 = v27; /*0x100360f19*/
  while ( 1 ) /*0x100360f20*/
  {
    v32 = std::time::Instant::now::hda76af2c3a449055(v26, v25, v27, v28, v30); /*0x100360f20*/
    if ( v32 != v29 ) /*0x100360f28*/
      break; /*0x100360f28*/
    if ( v33 >= v31 ) /*0x100360f2d*/
      goto LABEL_24; /*0x100360f2d*/
LABEL_17:
    if ( (codexmate_lib::platform::process::codex_macos_main_process_pid::h13b6413f2058df0a(v13, v12) & 1) != 0 ) /*0x100360f56*/
      goto LABEL_25; /*0x100360f56*/
    v26 = 0; /*0x100360f5c*/
    v25 = 100000000; /*0x100360f5e*/
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 100000000); /*0x100360f63*/
  }
  if ( v32 < v29 ) /*0x100360f43*/
    goto LABEL_17; /*0x100360f43*/
LABEL_24:
  if ( (codexmate_lib::platform::process::codex_macos_main_process_pid::h13b6413f2058df0a(v13, v12) & 1) != 0 ) /*0x10036101f*/
  {
LABEL_25:
    v63 = v34; /*0x100361025*/
    codexmate_lib::platform::process::open_macos_app_bundle::h55caa9f65d2a5407(v66, v70, v69); /*0x10036103a*/
    v47[0] = v70; /*0x100361043*/
    v47[1] = v69; /*0x10036104e*/
    v38 = std::time::Instant::elapsed::h457f209775ed485c(&v49); /*0x10036105c*/
    v62 = 0x3E8 * (unsigned __int128)(unsigned __int64)v38 + v39 / 0xF4240uLL; /*0x10036107f*/
    v40 = (unsigned __int128 *)&anon_b0ee9adff4519c22b647af231a5a39fa_338; /*0x1003610a1*/
    if ( v66[0] == 11 ) /*0x1003610a8*/
      v40 = (unsigned __int128 *)&anon_b0ee9adff4519c22b647af231a5a39fa_429; /*0x1003610a8*/
    v64 = v40; /*0x1003610b1*/
    v65 = 3LL * (v66[0] != 11) + 2; /*0x1003610b8*/
    v54 = (unsigned __int128 *)v47; /*0x1003610c6*/
    v55 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1003610d4*/
    v56 = &v63; /*0x1003610e2*/
    v57 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x1003610f0*/
    v58 = &v62; /*0x1003610fe*/
    v59 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x10036110c*/
    v60 = &v64; /*0x10036111a*/
    v61 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100361128*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v68, &unk_1017BD021, &v54); /*0x100361141*/
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100361162*/
      "codex_processlaunch_readylaunch_timeout",
      13,
      "launch_readylaunch_timeout",
      12,
      &v68);
    goto LABEL_28; /*0x100361162*/
  }
  *(_QWORD *)&v62 = v70; /*0x100361192*/
  *((_QWORD *)&v62 + 1) = v69; /*0x10036119d*/
  v64 = v13; /*0x1003611a4*/
  v65 = v12; /*0x1003611ab*/
  v41 = std::time::Instant::elapsed::h457f209775ed485c(&v49); /*0x1003611b9*/
  v68 = 0x3E8 * (unsigned __int128)(unsigned __int64)v41 + v42 / 0xF4240uLL; /*0x1003611dc*/
  v66[0] = &v62; /*0x1003611eb*/
  v66[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1003611f9*/
  v66[2] = &v64; /*0x100361207*/
  v66[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10036120e*/
  v66[4] = &v68; /*0x100361219*/
  v66[5] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100361227*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v54, &unk_1017BD04E, v66); /*0x100361243*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100361267*/
    "codex_processlaunch_readylaunch_timeout",
    13,
    "launch_timeout",
    14,
    &v54);
  v64 = v13; /*0x10036126c*/
  v65 = v12; /*0x100361273*/
  *(_QWORD *)&v68 = &v64; /*0x10036127a*/
  *((_QWORD *)&v68 + 1) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100361285*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v66[1], &unk_1017BD074, &v68); /*0x10036129b*/
  v43 = v66[1]; /*0x1003612a0*/
  v44 = (_DWORD *)&v66[1] + 1; /*0x1003612a6*/
  v45 = (_DWORD *)a1 + 3; /*0x1003612ad*/
  for ( i = 21; i; --i ) /*0x1003612b1*/
    *v45++ = *v44++; /*0x1003612b6*/
  *a1 = 10; /*0x1003612b8*/
  *((_DWORD *)a1 + 2) = v43; /*0x1003612bf*/
  v36 = v51; /*0x1003612c3*/
  if ( v51 ) /*0x1003612cd*/
    goto LABEL_20; /*0x1003612cd*/
LABEL_21:
  if ( v67 ) /*0x100360fed*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v67, 1); /*0x100360ff8*/
  return a1; /*0x100361000*/
}