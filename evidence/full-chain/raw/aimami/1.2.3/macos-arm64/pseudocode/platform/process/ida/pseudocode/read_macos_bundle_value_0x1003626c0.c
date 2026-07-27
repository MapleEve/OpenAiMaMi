// __ZN13codexmate_lib8platform7process23read_macos_bundle_value @ 0x1003626c0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::read_macos_bundle_value::h039fd87931802e34(
        size_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rdi
  __int64 v20; // rsi
  void *v21; // rax
  __int64 v22; // rdx
  size_t v23; // r13
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // [rsp+0h] [rbp-190h] BYREF
  __int64 v28; // [rsp+8h] [rbp-188h]
  __int64 v29; // [rsp+10h] [rbp-180h]
  __int64 v30; // [rsp+18h] [rbp-178h]
  __int64 v31; // [rsp+20h] [rbp-170h]
  __int64 v32; // [rsp+28h] [rbp-168h]
  __int64 v33; // [rsp+30h] [rbp-160h]
  __int64 v34; // [rsp+38h] [rbp-158h] BYREF
  __int64 v35; // [rsp+40h] [rbp-150h]
  __int64 v36; // [rsp+48h] [rbp-148h]
  __int64 v37; // [rsp+100h] [rbp-90h] BYREF
  __int64 v38; // [rsp+108h] [rbp-88h]
  __int64 v39; // [rsp+110h] [rbp-80h]
  __int64 v40; // [rsp+118h] [rbp-78h]
  void *__src; // [rsp+120h] [rbp-70h]
  __int64 v42; // [rsp+128h] [rbp-68h]
  __int64 v43; // [rsp+130h] [rbp-60h]
  __int64 v44; // [rsp+138h] [rbp-58h]
  __int64 v45; // [rsp+140h] [rbp-50h]
  __int64 v46; // [rsp+148h] [rbp-48h]
  __int64 v47; // [rsp+150h] [rbp-40h]
  __int64 v48; // [rsp+158h] [rbp-38h]
  __int64 v49; // [rsp+160h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v37, a2, a3, &unk_1015F7DFB, 19); /*0x1003626f1*/
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v34, &unk_1015F7E0E, 15); /*0x100362709*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v34, &unk_1015E3AF0, 8); /*0x100362724*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v34, a4, a5); /*0x100362736*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x10036274e*/
    &v34,
    "raw-/.vscode/extensions//.vscode-insiders/extensions//.vscode-oss/extensions//.cursor/extensions//.windsurf/extensio"
    "ns//extensions/openai.chatgpt",
    3);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v34, "-ocodexmate_lib::platform::process", 2); /*0x100362766*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x10036277e*/
    &v34,
    "-/.vscode/extensions//.vscode-insiders/extensions//.vscode-oss/extensions//.cursor/extensions//.windsurf/extensions//extensions/openai.chatgpt",
    1);
  v8 = v37; /*0x100362783*/
  v9 = v38; /*0x10036278a*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v34, v38, v39); /*0x10036279f*/
  if ( v8 ) /*0x1003627a7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x1003627b4*/
  std::process::Command::output::h737eedd4de2ee22e(&v27, &v34); /*0x1003627ca*/
  v10 = v27; /*0x1003627d9*/
  if ( __OFSUB__(-v27, 1) ) /*0x1003627e3*/
  {
    if ( (v28 & 3) == 1 ) /*0x1003627f7*/
    {
      v11 = v28 - 1; /*0x1003627f9*/
      v12 = *(_QWORD *)(v28 - 1); /*0x1003627fd*/
      v13 = *(_QWORD *)(v28 + 7); /*0x100362801*/
      if ( *(_QWORD *)v13 ) /*0x100362805*/
        (*(void (__fastcall **)(__int64))v13)(v12); /*0x100362811*/
      v14 = *(_QWORD *)(v13 + 8); /*0x100362813*/
      if ( v14 ) /*0x10036281a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16)); /*0x100362823*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24, 8); /*0x100362835*/
    }
    *a1 = 0x8000000000000000LL; /*0x10036283a*/
    return core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v34); /*0x100362849*/
  }
  v48 = v33; /*0x100362859*/
  v47 = v32; /*0x100362861*/
  v46 = v31; /*0x100362869*/
  v45 = v30; /*0x100362871*/
  v44 = v29; /*0x10036287c*/
  v43 = v28; /*0x100362880*/
  v42 = v27; /*0x100362884*/
  result = core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v34); /*0x10036288f*/
  if ( (_DWORD)v48 ) /*0x100362898*/
  {
    *a1 = 0x8000000000000000LL; /*0x10036289a*/
    if ( v10 ) /*0x1003628a0*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v10, 1); /*0x1003628ae*/
    v16 = v45; /*0x1003628b3*/
    if ( v45 ) /*0x1003628ba*/
    {
      v17 = v46; /*0x1003628c0*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x1003628ce*/
    }
    return result; /*0x1003628ba*/
  }
  v18 = v43; /*0x1003628d3*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v34, v43, v44); /*0x1003628e5*/
  v19 = v35; /*0x1003628ea*/
  v20 = v36; /*0x1003628f1*/
  v49 = v35; /*0x1003628f8*/
  v21 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v35, v36); /*0x1003628fc*/
  v23 = v22; /*0x100362901*/
  if ( v22 < 0 ) /*0x100362907*/
  {
    v24 = 0; /*0x100362909*/
    goto LABEL_19; /*0x100362909*/
  }
  if ( v22 ) /*0x10036291c*/
  {
    __src = v21; /*0x10036291e*/
    v40 = v18; /*0x100362922*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v20); /*0x100362926*/
    v24 = 1; /*0x10036292b*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1); /*0x100362939*/
    if ( !v25 ) /*0x100362941*/
LABEL_19:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, v23); /*0x10036290c*/
    v26 = v25; /*0x100362943*/
    v18 = v40; /*0x100362946*/
    v21 = __src; /*0x10036294a*/
  }
  else
  {
    v26 = 1; /*0x100362950*/
  }
  memcpy((void *)v26, v21, v23); /*0x10036295f*/
  *a1 = v23; /*0x100362964*/
  a1[1] = v26; /*0x100362967*/
  a1[2] = v23; /*0x10036296b*/
  if ( v10 ) /*0x100362972*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v10, 1); /*0x10036297f*/
  if ( v45 ) /*0x10036298b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x100362996*/
  v16 = v34; /*0x10036299b*/
  result = 2 * v34; /*0x1003629a2*/
  if ( 2 * v34 ) /*0x1003629a2*/
  {
    v17 = v49; /*0x1003629c6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x1003629ca*/
  }
  return result; /*0x1003629af*/
}