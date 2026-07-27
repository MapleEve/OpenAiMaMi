// __ZN13codexmate_lib8commands5voice16read_plist_value @ 0x10068ebf0 | 基线 same-set
double __fastcall codexmate_lib::commands::voice::read_plist_value::h6f3f7fb94fd4667d(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rsi
  double result; // xmm0_8
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(); // rdi
  __int64 v22; // rsi
  void *v23; // rax
  __int64 v24; // rdx
  size_t v25; // r13
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r15
  _QWORD *v29; // rdx
  _QWORD *v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // [rsp+18h] [rbp-1E8h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+20h] [rbp-1E0h]
  __int64 v34; // [rsp+28h] [rbp-1D8h]
  __int64 v35; // [rsp+E0h] [rbp-120h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-118h]
  __int64 v37; // [rsp+F0h] [rbp-110h]
  __int64 v38; // [rsp+F8h] [rbp-108h]
  __int64 v39; // [rsp+100h] [rbp-100h]
  __int64 v40; // [rsp+108h] [rbp-F8h]
  __int64 v41; // [rsp+110h] [rbp-F0h]
  _QWORD v42[3]; // [rsp+118h] [rbp-E8h] BYREF
  _QWORD v43[3]; // [rsp+130h] [rbp-D0h] BYREF
  _QWORD v44[2]; // [rsp+148h] [rbp-B8h] BYREF
  _QWORD v45[2]; // [rsp+158h] [rbp-A8h] BYREF
  void *__src; // [rsp+168h] [rbp-98h]
  __int64 v47; // [rsp+170h] [rbp-90h] BYREF
  __int64 v48; // [rsp+178h] [rbp-88h]
  __int64 v49; // [rsp+180h] [rbp-80h]
  __int64 v50; // [rsp+188h] [rbp-78h]
  __int64 v51; // [rsp+190h] [rbp-70h]
  __int64 v52; // [rsp+198h] [rbp-68h]
  __int64 v53; // [rsp+1A0h] [rbp-60h]
  __int64 v54; // [rsp+1A8h] [rbp-58h]
  __int64 v55; // [rsp+1B0h] [rbp-50h]
  __int64 v56; // [rsp+1B8h] [rbp-48h]
  __int64 (__fastcall *v57)(); // [rsp+1C0h] [rbp-40h]
  __int64 v58; // [rsp+1C8h] [rbp-38h] BYREF
  _QWORD *v59; // [rsp+1D0h] [rbp-30h]

  v59 = a1; /*0x10068ec10*/
  v45[0] = a4; /*0x10068ec14*/
  v45[1] = a5; /*0x10068ec1b*/
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v32, "plutilraw-o", 6); /*0x10068ec38*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v32, &unk_1015E3AF0, 8); /*0x10068ec4c*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v32, a4, a5); /*0x10068ec5e*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v32, "raw-o", 3); /*0x10068ec76*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v32, "-o", 2); /*0x10068ec8e*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v32, "-voice-audio-levelstarted", 1); /*0x10068eca6*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v32, a2, a3); /*0x10068ecb8*/
  std::process::Command::output::h737eedd4de2ee22e(&v35, &v32); /*0x10068eccb*/
  v8 = v35; /*0x10068ecd0*/
  if ( __OFSUB__(-v35, 1) ) /*0x10068ecda*/
  {
    v58 = v36; /*0x10068ecea*/
    v44[0] = &v58; /*0x10068ecf2*/
    v44[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10068ed00*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v47, (char *)&loc_1017C3208 + 2, v44); /*0x10068ed1c*/
    if ( (v58 & 3) == 1 ) /*0x10068ed2d*/
    {
      v9 = v58 - 1; /*0x10068ed2f*/
      v10 = *(_QWORD *)(v58 - 1); /*0x10068ed33*/
      v11 = *(_QWORD *)(v58 + 7); /*0x10068ed37*/
      if ( *(_QWORD *)v11 ) /*0x10068ed3b*/
        (*(void (__fastcall **)(__int64))v11)(v10); /*0x10068ed47*/
      v12 = *(_QWORD *)(v11 + 8); /*0x10068ed49*/
      if ( v12 ) /*0x10068ed51*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16)); /*0x10068ed5b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8); /*0x10068ed6d*/
    }
    v14 = v47; /*0x10068ed76*/
    v15 = v48; /*0x10068ed7d*/
    v54 = v47; /*0x10068ed84*/
    v55 = v48; /*0x10068ed88*/
    v56 = v49; /*0x10068ed8c*/
    v16 = v59; /*0x10068ed90*/
    v59[3] = v49; /*0x10068ed94*/
    v16[2] = v15; /*0x10068ed98*/
    v16[1] = v14; /*0x10068ed9c*/
    *v16 = 1; /*0x10068eda0*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v32); /*0x10068edae*/
    return result; /*0x10068edb3*/
  }
  v51 = v39; /*0x10068ede6*/
  v52 = v40; /*0x10068edea*/
  v53 = v41; /*0x10068edf5*/
  v54 = v36; /*0x10068edf9*/
  v55 = v37; /*0x10068edfd*/
  v56 = v38; /*0x10068ee01*/
  v50 = v38; /*0x10068ee09*/
  v49 = v37; /*0x10068ee15*/
  v48 = v36; /*0x10068ee19*/
  v47 = v35; /*0x10068ee20*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v32); /*0x10068ee2e*/
  if ( (_DWORD)v53 ) /*0x10068ee37*/
  {
    v32 = v45; /*0x10068ee40*/
    v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10068ee4e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v43, (char *)&loc_1017C31EB + 2, &v32); /*0x10068ee6a*/
    v17 = v59; /*0x10068ee76*/
    v59[3] = v43[2]; /*0x10068ee7a*/
    v18 = v43[0]; /*0x10068ee7e*/
    v17[2] = v43[1]; /*0x10068ee8c*/
    v17[1] = v18; /*0x10068ee90*/
    *v17 = 1; /*0x10068ee94*/
    if ( !v8 ) /*0x10068ee9e*/
      goto LABEL_27; /*0x10068ee9e*/
    v19 = v48; /*0x10068eea4*/
    goto LABEL_26; /*0x10068eeb0*/
  }
  v20 = v48; /*0x10068eeb5*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v32, v48, v49); /*0x10068eeca*/
  v21 = v33; /*0x10068eecf*/
  v22 = v34; /*0x10068eed6*/
  v57 = v33; /*0x10068eedd*/
  v23 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v33, v34); /*0x10068eee1*/
  v25 = v24; /*0x10068eee6*/
  if ( v24 < 0 ) /*0x10068eeec*/
  {
    v26 = 0; /*0x10068eeee*/
    goto LABEL_14; /*0x10068eeee*/
  }
  if ( v24 ) /*0x10068ef01*/
  {
    __src = v23; /*0x10068ef03*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v22); /*0x10068ef0a*/
    v26 = 1; /*0x10068ef0f*/
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v25, 1); /*0x10068ef1d*/
    if ( !v27 ) /*0x10068ef25*/
LABEL_14:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v25); /*0x10068eef1*/
    v28 = v27; /*0x10068ef27*/
    v23 = __src; /*0x10068ef2a*/
  }
  else
  {
    v28 = 1; /*0x10068ef33*/
  }
  memcpy((void *)v28, v23, v25); /*0x10068ef42*/
  if ( !(2LL * (_QWORD)v32) ) /*0x10068ef4e*/
  {
    if ( v25 ) /*0x10068ef5e*/
      goto LABEL_21; /*0x10068ef5e*/
LABEL_24:
    v32 = v45; /*0x10068ef96*/
    v33 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10068efab*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, &unk_1017C31D6, &v32); /*0x10068efc7*/
    v30 = v59; /*0x10068efd3*/
    v59[3] = v42[2]; /*0x10068efd7*/
    v31 = v42[0]; /*0x10068efdb*/
    v30[2] = v42[1]; /*0x10068efe9*/
    v30[1] = v31; /*0x10068efed*/
    *v30 = 1; /*0x10068eff6*/
    if ( !v8 ) /*0x10068effc*/
      goto LABEL_27; /*0x10068effc*/
    goto LABEL_25; /*0x10068effc*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v32, 1); /*0x10068ef8c*/
  if ( !v25 ) /*0x10068ef94*/
    goto LABEL_24; /*0x10068ef94*/
LABEL_21:
  v29 = v59; /*0x10068ef60*/
  v59[1] = v25; /*0x10068ef64*/
  v29[2] = v28; /*0x10068ef68*/
  v29[3] = v25; /*0x10068ef6c*/
  *v29 = 0; /*0x10068ef72*/
  if ( v8 ) /*0x10068ef78*/
  {
LABEL_25:
    v19 = v20; /*0x10068effe*/
LABEL_26:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v8, 1); /*0x10068f006*/
  }
LABEL_27:
  if ( v50 ) /*0x10068f015*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x10068f020*/
  return result; /*0x10068f025*/
}