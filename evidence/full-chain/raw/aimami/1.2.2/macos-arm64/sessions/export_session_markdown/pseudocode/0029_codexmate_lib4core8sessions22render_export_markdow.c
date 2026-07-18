// mac 1.2.2 NEW export_session_markdown 0x100a35b10 d=1
__int64 __fastcall codexmate_lib::core::sessions::render_export_markdown::h98b5d767cdce7861(
        size_t *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(),
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r12
  _QWORD *v7; // r13
  __int64 v8; // r14
  __int64 v9; // r14
  void *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r12
  size_t v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // r15
  __int64 *v16; // r13
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  size_t v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  size_t v25; // rdx
  __int64 *v26; // r12
  _QWORD *v27; // rax
  __int64 v28; // rcx
  const void *v29; // rax
  __int64 v30; // rdx
  size_t v31; // r13
  const void *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 *v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rbx
  _QWORD *v45; // r14
  __int64 result; // rax
  size_t v47[3]; // [rsp+8h] [rbp-108h] BYREF
  size_t v48[3]; // [rsp+20h] [rbp-F0h] BYREF
  size_t *v49; // [rsp+38h] [rbp-D8h]
  size_t v50[3]; // [rsp+40h] [rbp-D0h] BYREF
  _QWORD v51[2]; // [rsp+58h] [rbp-B8h] BYREF
  __int64 *v52; // [rsp+68h] [rbp-A8h] BYREF
  __int64 (__fastcall *v53)(); // [rsp+70h] [rbp-A0h]
  __int64 v54; // [rsp+78h] [rbp-98h]
  __int64 (__fastcall *v55)(); // [rsp+80h] [rbp-90h]
  __int64 v56; // [rsp+88h] [rbp-88h]
  char *v57; // [rsp+90h] [rbp-80h]
  __int64 v58; // [rsp+98h] [rbp-78h]
  __int16 v59; // [rsp+A0h] [rbp-70h]
  __int64 v60; // [rsp+A8h] [rbp-68h]
  size_t v61; // [rsp+B0h] [rbp-60h]
  __int64 v62; // [rsp+B8h] [rbp-58h] BYREF
  void *v63; // [rsp+C0h] [rbp-50h]
  __int64 v64; // [rsp+C8h] [rbp-48h]
  __int64 v65; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD *v66; // [rsp+D8h] [rbp-38h]
  __int64 v67; // [rsp+E0h] [rbp-30h]

  v60 = a5; /*0x100a35b24*/
  v49 = a1; /*0x100a35b2b*/
  v52 = nullptr; /*0x100a35b36*/
  v53 = a3; /*0x100a35b41*/
  v54 = a2; /*0x100a35b48*/
  v55 = a3; /*0x100a35b4f*/
  v56 = a2; /*0x100a35b56*/
  v57 = (char *)a3 + a2; /*0x100a35b5d*/
  v58 = 0; /*0x100a35b61*/
  v59 = 1; /*0x100a35b69*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hb909dfdc1e6cd12c( /*0x100a35b7a*/
    &v62,
    &v52);
  alloc::str::join_generic_copy::hdde8205199051565( /*0x100a35b9b*/
    &v65,
    v63,
    v64,
    " ''DELETE FROM thread_spawn_edges WHERE child_thread_id = ?1 OR parent_thread_id = ?1DELETE FROM threads WHERE id = ?1/payload/cwdcwd",
    1);
  v6 = v65; /*0x100a35ba0*/
  v7 = v66; /*0x100a35ba4*/
  v8 = v67; /*0x100a35ba8*/
  if ( v62 ) /*0x100a35bb3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a35bc1*/
  if ( v8 ) /*0x100a35bc9*/
  {
    v62 = v6; /*0x100a35bcb*/
    v63 = v7; /*0x100a35bcf*/
    v64 = v8; /*0x100a35bd3*/
    v9 = v60; /*0x100a35bd7*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a35bdd*/
    v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 1u); /*0x100a35bec*/
    if ( !v10 ) /*0x100a35bf4*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100a36082*/
    qmemcpy(v10, "Untitled Session", 16); /*0x100a35c12*/
    v62 = 16; /*0x100a35c15*/
    v63 = v10; /*0x100a35c1d*/
    v64 = 16; /*0x100a35c21*/
    v9 = v60; /*0x100a35c2c*/
    if ( v6 ) /*0x100a35c30*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a35c3d*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a35c42*/
  v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x30u, 8u); /*0x100a35c51*/
  if ( !v11 ) /*0x100a35c59*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x100a36063*/
  v12 = (_QWORD *)v11; /*0x100a35c5f*/
  v52 = &v62; /*0x100a35c66*/
  v53 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a35c74*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v47, byte_1016FEB8D, (unsigned __int64)&v52); /*0x100a35c90*/
  v12[2] = v47[2]; /*0x100a35c9c*/
  v13 = v47[0]; /*0x100a35ca1*/
  v12[1] = v47[1]; /*0x100a35caf*/
  *v12 = v13; /*0x100a35cb4*/
  v12[3] = 0; /*0x100a35cb8*/
  v12[4] = 1; /*0x100a35cc1*/
  v12[5] = 0; /*0x100a35cca*/
  v65 = 2; /*0x100a35cd3*/
  v66 = v12; /*0x100a35cdb*/
  v67 = 2; /*0x100a35cdf*/
  if ( v9 ) /*0x100a35cea*/
  {
    v14 = v9 << 6; /*0x100a35cf0*/
    v15 = (_QWORD *)(a4 + 24); /*0x100a35cf4*/
    v16 = &v65; /*0x100a35d14*/
    while ( 1 ) /*0x100a35d1c*/
    {
      v52 = v15 + 3; /*0x100a35d1c*/
      v53 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x100a35d23*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v50, byte_1016FEB92, (unsigned __int64)&v52); /*0x100a35d2d*/
      v17 = v67; /*0x100a35d32*/
      if ( v67 == v65 ) /*0x100a35d3a*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v16); /*0x100a35d3f*/
      v18 = v66; /*0x100a35d44*/
      v19 = 3 * v17; /*0x100a35d48*/
      v66[v19 + 2] = v50[2]; /*0x100a35d53*/
      v20 = v50[0]; /*0x100a35d58*/
      v18[v19 + 1] = v50[1]; /*0x100a35d66*/
      v18[v19] = v20; /*0x100a35d6b*/
      v21 = v17 + 1; /*0x100a35d6f*/
      v67 = v21; /*0x100a35d72*/
      if ( !__OFSUB__(0, *v15) ) /*0x100a35d7b*/
      {
        v51[0] = v15; /*0x100a35d7d*/
        v52 = v51; /*0x100a35d8b*/
        v53 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4d8c448bef4b4de6; /*0x100a35d99*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v48, byte_1016FEB99, (unsigned __int64)&v52); /*0x100a35db1*/
        v22 = v67; /*0x100a35db6*/
        if ( v67 == v65 ) /*0x100a35dbe*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v16); /*0x100a35dc3*/
        v23 = v66; /*0x100a35dc8*/
        v24 = 3 * v22; /*0x100a35dcc*/
        v66[v24 + 2] = v48[2]; /*0x100a35dd7*/
        v25 = v48[0]; /*0x100a35ddc*/
        v23[v24 + 1] = v48[1]; /*0x100a35dea*/
        v23[v24] = v25; /*0x100a35def*/
        v21 = v22 + 1; /*0x100a35df3*/
        v67 = v21; /*0x100a35df6*/
      }
      if ( v21 == v65 ) /*0x100a35dfe*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v16); /*0x100a35e03*/
      v26 = v16; /*0x100a35e08*/
      v27 = v66; /*0x100a35e0b*/
      v28 = 3 * v21; /*0x100a35e0f*/
      v66[v28] = 0; /*0x100a35e13*/
      v27[v28 + 1] = 1; /*0x100a35e1b*/
      v27[v28 + 2] = 0; /*0x100a35e24*/
      v67 = v21 + 1; /*0x100a35e30*/
      v29 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h3a001a169f810898(*(v15 - 2), *(v15 - 1)); /*0x100a35e3c*/
      if ( v30 < 0 ) /*0x100a35e44*/
        break; /*0x100a35e44*/
      v31 = v30; /*0x100a35e4a*/
      if ( v30 ) /*0x100a35e4d*/
      {
        v32 = v29; /*0x100a35e4f*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a35e52*/
        v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v31, 1u); /*0x100a35e5f*/
        if ( !v33 ) /*0x100a35e67*/
        {
          v61 = v31; /*0x100a3606a*/
          v41 = 1; /*0x100a3606e*/
LABEL_31:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v41); /*0x100a35f32*/
        }
        v34 = v33; /*0x100a35e6d*/
        v29 = v32; /*0x100a35e70*/
      }
      else
      {
        v34 = 1; /*0x100a35e75*/
      }
      v60 = v14; /*0x100a35e7a*/
      v61 = v34; /*0x100a35e7e*/
      memcpy((void *)v34, v29, v31); /*0x100a35e88*/
      v35 = v67; /*0x100a35e8d*/
      if ( v67 == v65 ) /*0x100a35e95*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v26); /*0x100a35e9a*/
      v36 = v66; /*0x100a35e9f*/
      v37 = 3 * v35; /*0x100a35ea3*/
      v66[v37] = v31; /*0x100a35ea7*/
      v36[v37 + 1] = v61; /*0x100a35eaf*/
      v36[v37 + 2] = v31; /*0x100a35eb4*/
      v67 = v35 + 1; /*0x100a35ebd*/
      v16 = v26; /*0x100a35ec5*/
      if ( v35 + 1 == v65 ) /*0x100a35ec8*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v26); /*0x100a35ecd*/
      v38 = v66; /*0x100a35ed2*/
      v39 = 3 * (v35 + 1); /*0x100a35ed6*/
      v66[v39] = 0; /*0x100a35eda*/
      v38[v39 + 1] = 1; /*0x100a35ee2*/
      v38[v39 + 2] = 0; /*0x100a35eeb*/
      v40 = v35 + 2; /*0x100a35ef4*/
      v67 = v40; /*0x100a35ef8*/
      v15 += 8; /*0x100a35efc*/
      v14 = v60 - 64; /*0x100a35f04*/
      if ( v60 == 64 ) /*0x100a35f24*/
      {
        v12 = v66; /*0x100a35f2a*/
        goto LABEL_33; /*0x100a35f2e*/
      }
    }
    v41 = 0; /*0x100a35f30*/
    goto LABEL_31; /*0x100a35f30*/
  }
  v40 = 2; /*0x100a35f40*/
LABEL_33:
  alloc::str::join_generic_copy::hfccd3ffc09b1fad9(&v52, v12, v40, "\n", 1); /*0x100a35f45*/
  v42 = v52; /*0x100a35f64*/
  v51[0] = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h3a001a169f810898(v53, v54); /*0x100a35f81*/
  v51[1] = v43; /*0x100a35f88*/
  v52 = v51; /*0x100a35f96*/
  v53 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x100a35fa4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v49, byte_1016FBA98, (unsigned __int64)&v52); /*0x100a35fc0*/
  if ( v42 ) /*0x100a35fc8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a35fd5*/
  v44 = v67; /*0x100a35fda*/
  if ( v67 ) /*0x100a35fe1*/
  {
    v45 = v66 + 1; /*0x100a35fe7*/
    do /*0x100a35ff7*/
    {
      if ( *(v45 - 1) ) /*0x100a35ff9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3600a*/
      v45 += 3; /*0x100a35ff0*/
      --v44; /*0x100a35ff4*/
    }
    while ( v44 ); /*0x100a35ff7*/
  }
  result = v65; /*0x100a36011*/
  if ( v65 ) /*0x100a36018*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3602b*/
  if ( v62 ) /*0x100a36037*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a36042*/
  return result; /*0x100a36047*/
}