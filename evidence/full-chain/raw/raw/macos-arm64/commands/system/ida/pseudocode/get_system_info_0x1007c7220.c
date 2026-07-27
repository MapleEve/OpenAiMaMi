// __ZN13codexmate_lib8commands6system15get_system_info @ 0x1007c7220 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::system::get_system_info::hc6020a5a6c5ce978(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  _DWORD *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rax
  void *v20; // r14
  unsigned __int64 *v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  unsigned __int64 *v24; // rbx
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // r12
  __int64 v29; // r14
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbx
  size_t v32; // r15
  _DWORD *v33; // rax
  __int64 v34; // r14
  void *v35; // r12
  size_t v36; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  const void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbx
  const void *v43; // r12
  __int64 v44; // rax
  _QWORD v45[2]; // [rsp+8h] [rbp-158h] BYREF
  signed __int64 v46; // [rsp+18h] [rbp-148h]
  unsigned __int64 v47; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-88h]
  __int64 v49; // [rsp+E0h] [rbp-80h]
  __int64 v50; // [rsp+E8h] [rbp-78h]
  unsigned __int64 *v51; // [rsp+F0h] [rbp-70h]
  __int64 v52; // [rsp+108h] [rbp-58h]
  unsigned __int64 *v53; // [rsp+110h] [rbp-50h]
  size_t __n; // [rsp+118h] [rbp-48h]
  __int64 v55; // [rsp+120h] [rbp-40h]
  void *__src; // [rsp+128h] [rbp-38h]
  __int64 v57; // [rsp+130h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1007c7237*/
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1007c7246*/
  if ( !v6 ) /*0x1007c724e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1007c767b*/
  v7 = v6; /*0x1007c7254*/
  *(_BYTE *)(v6 + 4) = 115; /*0x1007c7257*/
  *(_DWORD *)v6 = 1868783981; /*0x1007c725b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1007c7261*/
  v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1007c7270*/
  if ( !v8 ) /*0x1007c7278*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1007c768a*/
  *(_WORD *)(v8 + 4) = 13366; /*0x1007c727e*/
  v52 = v8; /*0x1007c7284*/
  *(_DWORD *)v8 = 1597388920; /*0x1007c7288*/
  hostname::get::hc653fae84de866de(&v47, a3, a4, a5); /*0x1007c7295*/
  v9 = v47; /*0x1007c729a*/
  v10 = v48; /*0x1007c72a1*/
  v57 = v7; /*0x1007c72ae*/
  if ( !__OFSUB__(-(__int64)v47, 1) ) /*0x1007c72b2*/
  {
    v17 = v48; /*0x1007c7350*/
    alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v45, v48, v49); /*0x1007c7353*/
    __src = (void *)v45[1]; /*0x1007c7366*/
    __n = v46; /*0x1007c7374*/
    if ( v46 < 0 ) /*0x1007c7378*/
    {
      v18 = 0; /*0x1007c737a*/
      goto LABEL_14; /*0x1007c737a*/
    }
    v55 = v45[0]; /*0x1007c738e*/
    if ( v46 ) /*0x1007c7392*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v17); /*0x1007c7394*/
      v18 = 1; /*0x1007c7399*/
      v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1007c73a8*/
      if ( !v19 ) /*0x1007c73b0*/
LABEL_14:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, __n); /*0x1007c737d*/
      v12 = v19; /*0x1007c73b2*/
    }
    else
    {
      v12 = 1; /*0x1007c73b7*/
    }
    v20 = __src; /*0x1007c73c0*/
    memcpy((void *)v12, __src, __n); /*0x1007c73cb*/
    if ( 2 * v55 ) /*0x1007c73d4*/
    {
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v55, 1); /*0x1007c7626*/
      if ( !v9 ) /*0x1007c762e*/
        goto LABEL_22; /*0x1007c762e*/
    }
    else if ( !v9 ) /*0x1007c73e8*/
    {
      goto LABEL_22; /*0x1007c73e8*/
    }
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x1007c73f5*/
    goto LABEL_22; /*0x1007c73f5*/
  }
  v45[0] = v48; /*0x1007c72b8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v47, 1); /*0x1007c72bf*/
  v11 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1007c72ce*/
  if ( !v11 ) /*0x1007c72d6*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1007c76b0*/
  v12 = (__int64)v11; /*0x1007c72dc*/
  *(_DWORD *)((char *)v11 + 3) = 1853321070; /*0x1007c72df*/
  *v11 = 1852534389; /*0x1007c72e6*/
  if ( (v10 & 3) == 1 ) /*0x1007c72f5*/
  {
    v13 = v10 - 1; /*0x1007c72f7*/
    v14 = *(_QWORD *)(v10 - 1); /*0x1007c72fb*/
    v15 = *(_QWORD *)(v10 + 7); /*0x1007c72ff*/
    if ( *(_QWORD *)v15 ) /*0x1007c7303*/
      (*(void (__fastcall **)(__int64))v15)(v14); /*0x1007c730e*/
    v16 = *(_QWORD *)(v15 + 8); /*0x1007c7310*/
    if ( v16 ) /*0x1007c7317*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x1007c7320*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x1007c7332*/
  }
  __n = 7; /*0x1007c733c*/
LABEL_22:
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379(v45, "sw_vers-productVersion", 7); /*0x1007c73fa*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(v45, "-productVersion", 15); /*0x1007c7425*/
  v21 = &v47; /*0x1007c742a*/
  v22 = (__int64)v45; /*0x1007c7431*/
  std::process::Command::output::h737eedd4de2ee22e(&v47, v45); /*0x1007c7438*/
  v23 = v47; /*0x1007c7447*/
  __src = (void *)v12; /*0x1007c7451*/
  if ( v47 == 0x8000000000000000LL ) /*0x1007c7455*/
  {
    if ( (v48 & 3) == 1 ) /*0x1007c7466*/
    {
      v24 = (unsigned __int64 *)(v48 - 1); /*0x1007c746c*/
      v25 = *(_QWORD *)(v48 - 1); /*0x1007c7470*/
      v26 = *(_QWORD *)(v48 + 7); /*0x1007c7474*/
      if ( *(_QWORD *)v26 ) /*0x1007c7478*/
        (*(void (__fastcall **)(__int64, double))v26)(v25, a3); /*0x1007c7483*/
      v27 = *(_QWORD *)(v26 + 8); /*0x1007c7485*/
      if ( v27 ) /*0x1007c748c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v27, *(_QWORD *)(v26 + 16)); /*0x1007c7495*/
      v22 = 24; /*0x1007c749a*/
      v21 = v24; /*0x1007c74a4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 24, 8); /*0x1007c74a7*/
    }
LABEL_36:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v22); /*0x1007c7527*/
    v32 = 7; /*0x1007c752c*/
    v33 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1007c753c*/
    if ( !v33 ) /*0x1007c7544*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1007c769f*/
    v34 = (__int64)v33; /*0x1007c754a*/
    *(_DWORD *)((char *)v33 + 3) = 1853321070; /*0x1007c754d*/
    *v33 = 1852534389; /*0x1007c7554*/
    v35 = __src; /*0x1007c755a*/
    goto LABEL_38; /*0x1007c755a*/
  }
  v22 = v48; /*0x1007c74ae*/
  v28 = v49; /*0x1007c74b5*/
  v29 = v50; /*0x1007c74b9*/
  v53 = v51; /*0x1007c74c1*/
  v21 = &v47; /*0x1007c74c5*/
  v55 = v48; /*0x1007c74cc*/
  core::str::converts::from_utf8::hb32deb9559450f6e(&v47, v48, v49); /*0x1007c74d3*/
  if ( (_BYTE)v47 ) /*0x1007c74df*/
  {
    v30 = 0x8000000000000000LL; /*0x1007c74e1*/
    if ( v23 ) /*0x1007c74e7*/
    {
      v21 = (unsigned __int64 *)v55; /*0x1007c74ee*/
      v22 = v23; /*0x1007c74f2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v23, 1); /*0x1007c74f5*/
      v30 = 0x8000000000000000LL; /*0x1007c74fa*/
    }
  }
  else
  {
    v30 = v23; /*0x1007c74ff*/
  }
  if ( v29 ) /*0x1007c7505*/
  {
    v21 = v53; /*0x1007c750c*/
    v22 = v29; /*0x1007c7510*/
    v31 = v30; /*0x1007c7513*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v29, 1); /*0x1007c7516*/
    v30 = v31; /*0x1007c751b*/
  }
  if ( v30 == 0x8000000000000000LL ) /*0x1007c7521*/
    goto LABEL_36; /*0x1007c7521*/
  v53 = (unsigned __int64 *)v30; /*0x1007c75cb*/
  v38 = v55; /*0x1007c75cf*/
  v39 = v28; /*0x1007c75d3*/
  v40 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v55, v28); /*0x1007c75d6*/
  v32 = v41; /*0x1007c75db*/
  if ( v41 < 0 ) /*0x1007c75e1*/
  {
    v42 = 0; /*0x1007c75e3*/
    goto LABEL_41; /*0x1007c75e3*/
  }
  if ( v41 ) /*0x1007c75f5*/
  {
    v43 = v40; /*0x1007c75f7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v39); /*0x1007c75fa*/
    v42 = 1; /*0x1007c75ff*/
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v32, 1); /*0x1007c760c*/
    if ( !v44 ) /*0x1007c7614*/
LABEL_41:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42, v32); /*0x1007c75e5*/
    v34 = v44; /*0x1007c7616*/
    v40 = v43; /*0x1007c7619*/
  }
  else
  {
    v34 = 1; /*0x1007c7639*/
  }
  memcpy((void *)v34, v40, v32); /*0x1007c7648*/
  v35 = __src; /*0x1007c7654*/
  if ( v53 ) /*0x1007c7658*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v53, 1); /*0x1007c7667*/
LABEL_38:
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(v45); /*0x1007c755e*/
  *a1 = 5; /*0x1007c756a*/
  a1[1] = v57; /*0x1007c7576*/
  a1[2] = 5; /*0x1007c757a*/
  a1[3] = v32; /*0x1007c7582*/
  a1[4] = v34; /*0x1007c7586*/
  a1[5] = v32; /*0x1007c758a*/
  a1[6] = 6; /*0x1007c758e*/
  a1[7] = v52; /*0x1007c759a*/
  a1[8] = 6; /*0x1007c759e*/
  v36 = __n; /*0x1007c75a6*/
  a1[9] = __n; /*0x1007c75aa*/
  a1[10] = v35; /*0x1007c75ae*/
  a1[11] = v36; /*0x1007c75b2*/
  return a1; /*0x1007c75b9*/
}