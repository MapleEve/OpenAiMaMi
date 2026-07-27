// __ZN13codexmate_lib8platform7process30collect_external_codex_writers @ 0x100366380
_QWORD *__fastcall codexmate_lib::platform::process::collect_external_codex_writers::h013c99e264542e67(_QWORD *a1)
{
  __int64 *v1; // r14
  __int64 (__fastcall *v2)(); // r15
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  _QWORD *result; // rax
  __int64 (__fastcall *v14)(); // r12
  __int64 v15; // rbx
  __int64 v16; // r13
  _QWORD *v17; // rbx
  __int64 v18; // [rsp+8h] [rbp-228h] BYREF
  __int64 v19; // [rsp+10h] [rbp-220h]
  __int64 v20; // [rsp+18h] [rbp-218h]
  _QWORD v21[8]; // [rsp+D0h] [rbp-160h] BYREF
  char v22; // [rsp+110h] [rbp-120h]
  __int16 v23; // [rsp+118h] [rbp-118h]
  _QWORD v24[4]; // [rsp+120h] [rbp-110h] BYREF
  _QWORD v25[3]; // [rsp+140h] [rbp-F0h] BYREF
  _QWORD v26[5]; // [rsp+158h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+180h] [rbp-B0h]
  __int64 v28; // [rsp+188h] [rbp-A8h]
  __int64 v29; // [rsp+190h] [rbp-A0h]
  __int64 v30; // [rsp+198h] [rbp-98h]
  __int64 *v31; // [rsp+1A0h] [rbp-90h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+1A8h] [rbp-88h]
  __int64 v33; // [rsp+1B0h] [rbp-80h]
  __int64 v34; // [rsp+1B8h] [rbp-78h]
  __int64 v35; // [rsp+1C0h] [rbp-70h]
  __int64 v36; // [rsp+1C8h] [rbp-68h]
  __int64 v37; // [rsp+1D0h] [rbp-60h]
  __int64 v38; // [rsp+1D8h] [rbp-58h] BYREF
  __int64 v39; // [rsp+1E0h] [rbp-50h]
  __int64 v40; // [rsp+1E8h] [rbp-48h]
  _QWORD *v41; // [rsp+1F0h] [rbp-40h]
  __int64 (__fastcall *v42)(); // [rsp+1F8h] [rbp-38h] BYREF
  __int64 v43; // [rsp+200h] [rbp-30h]

  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v18, "ps-ocodexmate_lib::platform::process", 2); /*0x1003663ad*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v18, &unk_1015F7F1C, 3); /*0x1003663c1*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v18, "-ocodexmate_lib::platform::process", 2); /*0x1003663d9*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v18, &unk_1015F7F1F, 13); /*0x1003663f1*/
  std::process::Command::output::h737eedd4de2ee22e(&v31, &v18); /*0x100366404*/
  v1 = v31; /*0x100366409*/
  v2 = v32; /*0x100366410*/
  v41 = a1; /*0x10036641d*/
  if ( __OFSUB__(-(__int64)v31, 1) ) /*0x10036641a*/
  {
    v42 = v32; /*0x100366427*/
    v26[0] = &v42; /*0x10036642f*/
    v26[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10036643d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v38, &unk_1017BD39B, v26); /*0x100366456*/
    v3 = v38; /*0x10036645b*/
    v4 = v39; /*0x10036645f*/
    v5 = v40; /*0x100366463*/
    if ( ((unsigned __int8)v42 & 3) == 1 ) /*0x100366473*/
    {
      v43 = (__int64)v42 - 1; /*0x100366479*/
      v6 = *(_QWORD *)((char *)v42 - 1); /*0x10036647d*/
      v7 = *(_QWORD *)((char *)v42 + 7); /*0x100366481*/
      if ( *(_QWORD *)v7 ) /*0x100366485*/
        (*(void (__fastcall **)(__int64))v7)(v6); /*0x100366490*/
      v8 = *(_QWORD *)(v7 + 8); /*0x100366492*/
      if ( v8 ) /*0x100366499*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x1003664a2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, 24, 8); /*0x1003664b5*/
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v18); /*0x1003664c1*/
LABEL_16:
    result = v41; /*0x100366600*/
    *v41 = 10; /*0x100366604*/
    result[1] = v3; /*0x10036660b*/
    result[2] = v4; /*0x10036660f*/
    result[3] = v5; /*0x100366613*/
    return result; /*0x100366628*/
  }
  v9 = v33; /*0x1003664cb*/
  v27 = v34; /*0x1003664d3*/
  v28 = v35; /*0x1003664de*/
  v29 = v36; /*0x1003664e9*/
  v30 = v37; /*0x1003664f4*/
  v26[2] = v31; /*0x1003664fb*/
  v26[3] = v32; /*0x100366502*/
  v26[4] = v33; /*0x100366509*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v18); /*0x100366517*/
  if ( (_DWORD)v30 ) /*0x100366523*/
  {
    v10 = v28; /*0x100366529*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v18, v28, v29); /*0x100366541*/
    v11 = v19; /*0x100366546*/
    v38 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v19, v20); /*0x10036655c*/
    v39 = v12; /*0x100366560*/
    v31 = &v38; /*0x100366568*/
    v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100366576*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_1017BD39B, &v31); /*0x100366592*/
    v43 = v10; /*0x100366597*/
    if ( 2 * v18 ) /*0x1003665a2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v18, 1); /*0x1003665b7*/
    v3 = v25[0]; /*0x1003665bc*/
    v4 = v25[1]; /*0x1003665c3*/
    v5 = v25[2]; /*0x1003665ca*/
    if ( v1 ) /*0x1003665d4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v1, 1); /*0x1003665e1*/
    if ( v27 ) /*0x1003665f0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v27, 1); /*0x1003665fb*/
    goto LABEL_16; /*0x1003665fb*/
  }
  LODWORD(v38) = std::process::id::ha72f58ec62264e78(); /*0x10036662e*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v31, v2, v9); /*0x10036663e*/
  v14 = v32; /*0x100366643*/
  v21[1] = 0; /*0x10036664e*/
  v21[2] = v33; /*0x100366659*/
  v21[3] = v32; /*0x100366660*/
  v21[4] = v33; /*0x100366667*/
  v21[5] = 0; /*0x10036666e*/
  v21[6] = v33; /*0x100366679*/
  v21[7] = 0xA0000000ALL; /*0x10036668a*/
  v22 = 1; /*0x100366691*/
  v23 = 0; /*0x100366698*/
  v21[0] = &v38; /*0x1003666a5*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hde60afaea242c729( /*0x1003666ba*/
    &v18,
    (__int64)v21);
  v43 = v18; /*0x1003666c6*/
  v15 = v19; /*0x1003666ca*/
  v16 = v20; /*0x1003666d1*/
  if ( 2LL * (_QWORD)v31 ) /*0x1003666df*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v31, 1); /*0x10036676d*/
    if ( !v1 ) /*0x100366775*/
      goto LABEL_20; /*0x100366775*/
    goto LABEL_19; /*0x100366775*/
  }
  if ( v1 ) /*0x1003666ef*/
LABEL_19:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v1, 1); /*0x1003666f1*/
LABEL_20:
  if ( v27 ) /*0x10036670b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x100366719*/
  v24[0] = v15; /*0x100366725*/
  v24[1] = v15; /*0x10036672c*/
  v24[2] = v43; /*0x100366737*/
  v24[3] = v15 + 32 * v16; /*0x10036673e*/
  v17 = v41; /*0x100366745*/
  result = (_QWORD *)alloc::vec::in_place_collect::from_iter_in_place::h6ffc5ba2790b9c5d(v41 + 1, v24); /*0x100366754*/
  *v17 = 11; /*0x100366759*/
  return result; /*0x100366617*/
}