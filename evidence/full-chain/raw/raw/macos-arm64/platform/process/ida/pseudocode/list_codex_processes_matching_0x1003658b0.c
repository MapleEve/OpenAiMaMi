// __ZN13codexmate_lib8platform7process29list_codex_processes_matching @ 0x1003658b0
__int64 __fastcall codexmate_lib::platform::process::list_codex_processes_matching::h0a0e1238c317b39e(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // r12
  __int64 (__fastcall *v12)(); // rdx
  __int64 *v13; // rax
  __int64 *v14; // rsi
  __int64 (__fastcall *v15)(); // r12
  __int64 *v16; // rax
  __int64 result; // rax
  __int64 v18; // [rsp+0h] [rbp-220h] BYREF
  __int64 *v19; // [rsp+8h] [rbp-218h]
  __int64 v20; // [rsp+10h] [rbp-210h]
  __int64 v21; // [rsp+18h] [rbp-208h]
  __int64 (__fastcall *v22)(); // [rsp+20h] [rbp-200h]
  __int64 v23; // [rsp+28h] [rbp-1F8h]
  __int64 v24; // [rsp+30h] [rbp-1F0h]
  __int64 v25; // [rsp+38h] [rbp-1E8h]
  __int64 v26; // [rsp+40h] [rbp-1E0h]
  char v27; // [rsp+48h] [rbp-1D8h]
  __int16 v28; // [rsp+50h] [rbp-1D0h]
  _QWORD v29[3]; // [rsp+C8h] [rbp-158h] BYREF
  _QWORD v30[2]; // [rsp+E0h] [rbp-140h] BYREF
  unsigned __int64 v31; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-128h]
  __int64 v33; // [rsp+100h] [rbp-120h]
  __int64 *v34; // [rsp+108h] [rbp-118h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+110h] [rbp-110h]
  __int64 v36; // [rsp+118h] [rbp-108h]
  __int64 v37; // [rsp+120h] [rbp-100h]
  __int64 v38; // [rsp+128h] [rbp-F8h]
  __int64 v39; // [rsp+130h] [rbp-F0h]
  __int64 v40; // [rsp+138h] [rbp-E8h]
  __int64 *v41; // [rsp+140h] [rbp-E0h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+148h] [rbp-D8h]
  __int64 v43; // [rsp+150h] [rbp-D0h]
  __int64 v44; // [rsp+158h] [rbp-C8h]
  __int64 v45; // [rsp+160h] [rbp-C0h]
  __int64 v46; // [rsp+168h] [rbp-B8h]
  __int64 v47; // [rsp+170h] [rbp-B0h]
  __int64 v48; // [rsp+178h] [rbp-A8h]
  __int64 (__fastcall *v49)(); // [rsp+180h] [rbp-A0h] BYREF
  __int64 *v50; // [rsp+188h] [rbp-98h] BYREF
  __int64 (__fastcall *v51)(); // [rsp+190h] [rbp-90h]
  __int64 v52; // [rsp+198h] [rbp-88h]
  __int64 v53; // [rsp+1A0h] [rbp-80h]
  __int64 v54; // [rsp+1A8h] [rbp-78h]
  __int64 v55; // [rsp+1B0h] [rbp-70h]
  __int64 v56; // [rsp+1B8h] [rbp-68h]
  __int64 v57; // [rsp+1C0h] [rbp-60h] BYREF
  __int64 (__fastcall *v58)(); // [rsp+1C8h] [rbp-58h]
  __int64 v59; // [rsp+1D0h] [rbp-50h]
  __int64 v60; // [rsp+1D8h] [rbp-48h]
  __int64 v61; // [rsp+1E0h] [rbp-40h]
  __int64 v62; // [rsp+1E8h] [rbp-38h]
  __int64 v63; // [rsp+1F0h] [rbp-30h]

  codexmate_lib::platform::process::codex_app_bundle_path::h67ee45f90aea67f0(&v18); /*0x1003658d8*/
  v2 = v18; /*0x1003658dd*/
  if ( __OFSUB__(-v18, 1) ) /*0x1003658e7*/
  {
    v31 = 0x8000000000000000LL; /*0x1003658ec*/
    v3 = 0x8000000000000000LL; /*0x1003658f3*/
  }
  else
  {
    v4 = v19; /*0x1003658f8*/
    codexmate_lib::platform::process::codex_macos_bundle_main_executable::h65e006069063e1dd(&v31, v19, v20, v1); /*0x100365910*/
    if ( v2 ) /*0x100365918*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v2, 1); /*0x100365925*/
    v3 = v31; /*0x10036592a*/
  }
  v5 = 0; /*0x100365931*/
  v6 = v32; /*0x100365936*/
  if ( v3 != 0x8000000000000000LL ) /*0x100365944*/
    v5 = v32; /*0x100365944*/
  v30[0] = v5; /*0x100365948*/
  v30[1] = v33; /*0x10036594f*/
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v18, "ps-ocodexmate_lib::platform::process", 2); /*0x100365969*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v18, &unk_1015F7F1C, 3); /*0x100365981*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v18, "-ocodexmate_lib::platform::process", 2); /*0x100365999*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v18, &unk_1015F7F1F, 13); /*0x1003659b1*/
  std::process::Command::output::h737eedd4de2ee22e(&v34, &v18); /*0x1003659c4*/
  if ( v34 == (__int64 *)0x8000000000000000LL ) /*0x1003659d0*/
  {
    v49 = v35; /*0x1003659dd*/
    v50 = (__int64 *)&v49; /*0x1003659eb*/
    v51 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1003659f9*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v29, &unk_1017BD39B, &v50); /*0x100365a15*/
    v50 = (__int64 *)v29[0]; /*0x100365a28*/
    v51 = (__int64 (__fastcall *)())v29[1]; /*0x100365a2f*/
    v52 = v29[2]; /*0x100365a3d*/
    if ( ((unsigned __int8)v49 & 3) == 1 ) /*0x100365a53*/
    {
      v48 = (__int64)v49 - 1; /*0x100365a59*/
      v7 = *(_QWORD *)((char *)v49 - 1); /*0x100365a60*/
      v8 = *(_QWORD *)((char *)v49 + 7); /*0x100365a64*/
      if ( *(_QWORD *)v8 ) /*0x100365a68*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x100365a74*/
      v9 = *(_QWORD *)(v8 + 8); /*0x100365a76*/
      if ( v9 ) /*0x100365a7e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x100365a88*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 24, 8); /*0x100365a9e*/
    }
    v41 = v50; /*0x100365ab1*/
    v42 = v51; /*0x100365ab8*/
    v43 = v52; /*0x100365ac6*/
    v44 = v53; /*0x100365ad1*/
    v45 = v54; /*0x100365adc*/
    v46 = v55; /*0x100365ae7*/
    v47 = v56; /*0x100365af2*/
    v63 = v56; /*0x100365af9*/
    v62 = v55; /*0x100365afd*/
    v61 = v54; /*0x100365b01*/
    v60 = v53; /*0x100365b05*/
    v59 = v52; /*0x100365b09*/
    v58 = v51; /*0x100365b0d*/
    v57 = (__int64)v50; /*0x100365b11*/
    a1[7] = v56; /*0x100365b19*/
    a1[6] = v62; /*0x100365b21*/
    a1[5] = v61; /*0x100365b29*/
    a1[4] = v60; /*0x100365b31*/
    a1[3] = v59; /*0x100365b39*/
    v10 = v57; /*0x100365b3d*/
    a1[2] = v58; /*0x100365b45*/
    a1[1] = v10; /*0x100365b49*/
    *a1 = 10; /*0x100365b4d*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v18); /*0x100365b5b*/
    goto LABEL_26; /*0x100365b60*/
  }
  v47 = v40; /*0x100365b6c*/
  v46 = v39; /*0x100365b7a*/
  v45 = v38; /*0x100365b88*/
  v44 = v37; /*0x100365b96*/
  v57 = (__int64)v34; /*0x100365bb2*/
  v58 = v35; /*0x100365bb6*/
  v59 = v36; /*0x100365bba*/
  v60 = v37; /*0x100365bbe*/
  v61 = v38; /*0x100365bc2*/
  v62 = v39; /*0x100365bc6*/
  v63 = v40; /*0x100365bca*/
  v56 = v40; /*0x100365bd2*/
  v55 = v39; /*0x100365bda*/
  v54 = v38; /*0x100365be2*/
  v53 = v37; /*0x100365bea*/
  v52 = v36; /*0x100365bf2*/
  v51 = v35; /*0x100365c01*/
  v50 = v34; /*0x100365c08*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v18); /*0x100365c16*/
  if ( (_DWORD)v56 ) /*0x100365c1f*/
  {
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v18, v54, v55); /*0x100365c34*/
    v11 = v19; /*0x100365c39*/
    v57 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v19, v20); /*0x100365c4f*/
    v58 = v12; /*0x100365c53*/
    v41 = &v57; /*0x100365c5b*/
    v42 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100365c69*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v34, &unk_1017BD39B, &v41); /*0x100365c85*/
    if ( 2 * v18 ) /*0x100365c91*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v18, 1); /*0x100365ca6*/
    a1[3] = v36; /*0x100365cb2*/
    v13 = v34; /*0x100365cb6*/
    a1[2] = v35; /*0x100365cc4*/
    a1[1] = v13; /*0x100365cc8*/
    *a1 = 10; /*0x100365ccc*/
    v14 = v50; /*0x100365cd3*/
    if ( !v50 ) /*0x100365cdd*/
      goto LABEL_24; /*0x100365cdd*/
    goto LABEL_23; /*0x100365cdd*/
  }
  LODWORD(v57) = std::process::id::ha72f58ec62264e78(); /*0x100365ced*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v41, v51, v52); /*0x100365d05*/
  v15 = v42; /*0x100365d0a*/
  v20 = 0; /*0x100365d18*/
  v21 = v43; /*0x100365d23*/
  v22 = v42; /*0x100365d2a*/
  v23 = v43; /*0x100365d31*/
  v24 = 0; /*0x100365d38*/
  v25 = v43; /*0x100365d43*/
  v26 = 0xA0000000ALL; /*0x100365d54*/
  v27 = 1; /*0x100365d5b*/
  v28 = 0; /*0x100365d62*/
  v18 = (__int64)v30; /*0x100365d72*/
  v19 = &v57; /*0x100365d7d*/
  ((void (__fastcall *)(__int64 **, __int64 *))_$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h0fae5f6852e0213a)( /*0x100365d92*/
    &v34,
    &v18);
  a1[3] = v36; /*0x100365d9e*/
  v16 = v34; /*0x100365da2*/
  a1[2] = v35; /*0x100365db0*/
  a1[1] = v16; /*0x100365db4*/
  *a1 = 11; /*0x100365db8*/
  if ( !(2LL * (_QWORD)v41) ) /*0x100365dc6*/
  {
    v14 = v50; /*0x100365dd3*/
    if ( !v50 ) /*0x100365ddd*/
      goto LABEL_24; /*0x100365ddd*/
    goto LABEL_23; /*0x100365ddd*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v41, 1); /*0x100365e3e*/
  v14 = v50; /*0x100365e43*/
  if ( v50 ) /*0x100365e4d*/
LABEL_23:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v14, 1); /*0x100365ddf*/
LABEL_24:
  if ( v53 ) /*0x100365df7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v53, 1); /*0x100365e02*/
LABEL_26:
  result = 2 * v3; /*0x100365e07*/
  if ( 2 * v3 ) /*0x100365e07*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v3, 1); /*0x100365e1f*/
  return result; /*0x100365e24*/
}