// __ZN13codexmate_lib4core8sessions22render_export_markdown @ 0x100537580 | 基线 same-set
double __fastcall codexmate_lib::core::sessions::render_export_markdown::h0f63cf3cb2bc647c(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(),
        __int64 a4,
        __int64 a5,
        double result)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r14
  void *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rax
  __int64 v18; // r14
  _QWORD *v19; // r15
  __int64 *v20; // r13
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 *v30; // r12
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  const void *v35; // rax
  __int64 v36; // rdx
  size_t v37; // r13
  const void *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rbx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 *v48; // r14
  __int64 (__fastcall *v49)(); // rbx
  __int64 v50; // rdx
  __int64 v51; // rbx
  _QWORD *v52; // r14
  __int64 v53; // rsi
  _QWORD v54[3]; // [rsp+8h] [rbp-108h] BYREF
  _QWORD v55[3]; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v56; // [rsp+38h] [rbp-D8h]
  _QWORD v57[3]; // [rsp+40h] [rbp-D0h] BYREF
  _QWORD v58[2]; // [rsp+58h] [rbp-B8h] BYREF
  __int64 *v59; // [rsp+68h] [rbp-A8h] BYREF
  __int64 (__fastcall *v60)(); // [rsp+70h] [rbp-A0h]
  __int64 v61; // [rsp+78h] [rbp-98h]
  __int64 (__fastcall *v62)(); // [rsp+80h] [rbp-90h]
  __int64 v63; // [rsp+88h] [rbp-88h]
  char *v64; // [rsp+90h] [rbp-80h]
  __int64 v65; // [rsp+98h] [rbp-78h]
  __int16 v66; // [rsp+A0h] [rbp-70h]
  __int64 v67; // [rsp+A8h] [rbp-68h]
  size_t v68; // [rsp+B0h] [rbp-60h]
  __int64 v69; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-50h]
  __int64 v71; // [rsp+C8h] [rbp-48h]
  __int64 v72; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD *v73; // [rsp+D8h] [rbp-38h]
  __int64 v74; // [rsp+E0h] [rbp-30h]

  v67 = a5; /*0x100537594*/
  v56 = a1; /*0x10053759b*/
  v59 = nullptr; /*0x1005375a6*/
  v60 = a3; /*0x1005375b1*/
  v61 = a2; /*0x1005375b8*/
  v62 = a3; /*0x1005375bf*/
  v63 = a2; /*0x1005375c6*/
  v64 = (char *)a3 + a2; /*0x1005375cd*/
  v65 = 0; /*0x1005375d1*/
  v66 = 1; /*0x1005375d9*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h31ab29ecbdaf6895( /*0x1005375ea*/
    &v69,
    &v59,
    result);
  v7 = v70; /*0x1005375ef*/
  v8 = (__int64)&v72; /*0x1005375fe*/
  alloc::str::join_generic_copy::ha9d2732844b8793d(&v72, v70, v71, &unk_1015FEE56, 1); /*0x10053760b*/
  v9 = v72; /*0x100537610*/
  v10 = (__int64)v73; /*0x100537614*/
  v11 = v74; /*0x100537618*/
  v12 = v69; /*0x10053761c*/
  if ( v69 ) /*0x100537623*/
  {
    v12 = 16 * v69; /*0x100537625*/
    v8 = v7; /*0x10053762e*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 16 * v69, 8); /*0x100537631*/
  }
  if ( v11 ) /*0x100537639*/
  {
    v69 = v9; /*0x10053763b*/
    v70 = v10; /*0x10053763f*/
    v71 = v11; /*0x100537643*/
    v13 = v67; /*0x100537647*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v12); /*0x10053764d*/
    v8 = 16; /*0x100537652*/
    v12 = 1; /*0x100537657*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x10053765c*/
    if ( !v14 ) /*0x100537664*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x100537af2*/
    qmemcpy(v14, "Untitled Session", 16); /*0x100537682*/
    v69 = 16; /*0x100537685*/
    v70 = (__int64)v14; /*0x10053768d*/
    v71 = 16; /*0x100537691*/
    v13 = v67; /*0x10053769c*/
    if ( v9 ) /*0x1005376a0*/
    {
      v8 = v10; /*0x1005376a7*/
      v12 = v9; /*0x1005376aa*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x1005376ad*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v12); /*0x1005376b2*/
  v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x1005376c1*/
  if ( !v15 ) /*0x1005376c9*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x100537ad3*/
  v16 = (_QWORD *)v15; /*0x1005376cf*/
  v59 = &v69; /*0x1005376d6*/
  v60 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005376e4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v54, &unk_1017C1B14, &v59); /*0x100537700*/
  v16[2] = v54[2]; /*0x10053770c*/
  v17 = v54[0]; /*0x100537711*/
  v16[1] = v54[1]; /*0x10053771f*/
  *v16 = v17; /*0x100537724*/
  v16[3] = 0; /*0x100537728*/
  v16[4] = 1; /*0x100537731*/
  v16[5] = 0; /*0x10053773a*/
  v72 = 2; /*0x100537743*/
  v73 = v16; /*0x10053774b*/
  v74 = 2; /*0x10053774f*/
  if ( v13 ) /*0x10053775a*/
  {
    v18 = v13 << 6; /*0x100537760*/
    v19 = (_QWORD *)(a4 + 24); /*0x100537764*/
    v20 = &v72; /*0x100537784*/
    while ( 1 ) /*0x10053778c*/
    {
      v59 = v19 + 3; /*0x10053778c*/
      v60 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100537793*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v57, &unk_1017C1B19, &v59); /*0x10053779d*/
      v21 = v74; /*0x1005377a2*/
      if ( v74 == v72 ) /*0x1005377aa*/
        result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v20); /*0x1005377af*/
      v22 = v73; /*0x1005377b4*/
      v23 = 3 * v21; /*0x1005377b8*/
      v73[v23 + 2] = v57[2]; /*0x1005377c3*/
      v24 = v57[0]; /*0x1005377c8*/
      v22[v23 + 1] = v57[1]; /*0x1005377d6*/
      v22[v23] = v24; /*0x1005377db*/
      v25 = v21 + 1; /*0x1005377df*/
      v74 = v25; /*0x1005377e2*/
      if ( !__OFSUB__(0, *v19) ) /*0x1005377eb*/
      {
        v58[0] = v19; /*0x1005377ed*/
        v59 = v58; /*0x1005377fb*/
        v60 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x100537809*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v55, &unk_1017C1B20, &v59); /*0x100537821*/
        v26 = v74; /*0x100537826*/
        if ( v74 == v72 ) /*0x10053782e*/
          result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v20); /*0x100537833*/
        v27 = v73; /*0x100537838*/
        v28 = 3 * v26; /*0x10053783c*/
        v73[v28 + 2] = v55[2]; /*0x100537847*/
        v29 = v55[0]; /*0x10053784c*/
        v27[v28 + 1] = v55[1]; /*0x10053785a*/
        v27[v28] = v29; /*0x10053785f*/
        v25 = v26 + 1; /*0x100537863*/
        v74 = v25; /*0x100537866*/
      }
      if ( v25 == v72 ) /*0x10053786e*/
        result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v20); /*0x100537873*/
      v30 = v20; /*0x100537878*/
      v31 = v73; /*0x10053787b*/
      v32 = 3 * v25; /*0x10053787f*/
      v73[v32] = 0; /*0x100537883*/
      v31[v32 + 1] = 1; /*0x10053788b*/
      v31[v32 + 2] = 0; /*0x100537894*/
      v74 = v25 + 1; /*0x1005378a0*/
      v33 = *(v19 - 2); /*0x1005378a4*/
      v34 = *(v19 - 1); /*0x1005378a8*/
      v35 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hdd9c7a1211e7482d(v33, v34); /*0x1005378ac*/
      if ( v36 < 0 ) /*0x1005378b4*/
        break; /*0x1005378b4*/
      v37 = v36; /*0x1005378ba*/
      if ( v36 ) /*0x1005378bd*/
      {
        v38 = v35; /*0x1005378bf*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v34); /*0x1005378c2*/
        v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v37, 1); /*0x1005378cf*/
        if ( !v39 ) /*0x1005378d7*/
        {
          v68 = v37; /*0x100537ada*/
          v47 = 1; /*0x100537ade*/
LABEL_31:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v47, v68); /*0x1005379a2*/
        }
        v40 = v39; /*0x1005378dd*/
        v35 = v38; /*0x1005378e0*/
      }
      else
      {
        v40 = 1; /*0x1005378e5*/
      }
      v67 = v18; /*0x1005378ea*/
      v68 = v40; /*0x1005378ee*/
      memcpy((void *)v40, v35, v37); /*0x1005378f8*/
      v41 = v74; /*0x1005378fd*/
      if ( v74 == v72 ) /*0x100537905*/
        result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v30); /*0x10053790a*/
      v42 = v73; /*0x10053790f*/
      v43 = 3 * v41; /*0x100537913*/
      v73[v43] = v37; /*0x100537917*/
      v42[v43 + 1] = v68; /*0x10053791f*/
      v42[v43 + 2] = v37; /*0x100537924*/
      v74 = v41 + 1; /*0x10053792d*/
      v20 = v30; /*0x100537935*/
      if ( v41 + 1 == v72 ) /*0x100537938*/
        result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v30); /*0x10053793d*/
      v44 = v73; /*0x100537942*/
      v45 = 3 * (v41 + 1); /*0x100537946*/
      v73[v45] = 0; /*0x10053794a*/
      v44[v45 + 1] = 1; /*0x100537952*/
      v44[v45 + 2] = 0; /*0x10053795b*/
      v46 = v41 + 2; /*0x100537964*/
      v74 = v46; /*0x100537968*/
      v19 += 8; /*0x10053796c*/
      v18 = v67 - 64; /*0x100537974*/
      if ( v67 == 64 ) /*0x100537994*/
      {
        v16 = v73; /*0x10053799a*/
        goto LABEL_33; /*0x10053799e*/
      }
    }
    v47 = 0; /*0x1005379a0*/
    goto LABEL_31; /*0x1005379a0*/
  }
  v46 = 2; /*0x1005379b0*/
LABEL_33:
  alloc::str::join_generic_copy::heca7a5e86402c6b6(&v59, v16, v46, &anon_92869709a5e99ce1936aa4e326b6c562_1024, 1); /*0x1005379b5*/
  v48 = v59; /*0x1005379d4*/
  v49 = v60; /*0x1005379db*/
  v58[0] = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hdd9c7a1211e7482d(v60, v61); /*0x1005379f1*/
  v58[1] = v50; /*0x1005379f8*/
  v59 = v58; /*0x100537a06*/
  v60 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100537a14*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v56, "\xC0\x01\n", &v59); /*0x100537a30*/
  if ( v48 ) /*0x100537a38*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x100537a45*/
  v51 = v74; /*0x100537a4a*/
  if ( v74 ) /*0x100537a51*/
  {
    v52 = v73 + 1; /*0x100537a57*/
    do /*0x100537a67*/
    {
      v53 = *(v52 - 1); /*0x100537a69*/
      if ( v53 ) /*0x100537a70*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v52, v53, 1); /*0x100537a7a*/
      v52 += 3; /*0x100537a60*/
      --v51; /*0x100537a64*/
    }
    while ( v51 ); /*0x100537a67*/
  }
  if ( v72 ) /*0x100537a88*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, 24 * v72, 8); /*0x100537a9b*/
  if ( v69 ) /*0x100537aa7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x100537ab2*/
  return result; /*0x100537ab7*/
}