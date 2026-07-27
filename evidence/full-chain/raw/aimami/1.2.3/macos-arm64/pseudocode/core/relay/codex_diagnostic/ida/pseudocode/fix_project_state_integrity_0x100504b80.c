// __ZN13codexmate_lib4core5relay16codex_diagnostic27fix_project_state_integrity @ 0x100504b80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_project_state_integrity::h3f5ce51e2bdd4fc3(
        __int64 a1,
        __int64 a2)
{
  _WORD *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r13
  _WORD *v8; // rsi
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  void *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v22; // rax
  _QWORD *v23; // r12
  void *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdi
  char v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rax
  _QWORD *v35; // r12
  void *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // r8
  _BYTE v42[224]; // [rsp+0h] [rbp-220h] BYREF
  _QWORD v43[3]; // [rsp+E0h] [rbp-140h] BYREF
  _QWORD v44[2]; // [rsp+F8h] [rbp-128h] BYREF
  _WORD *v45; // [rsp+108h] [rbp-118h]
  __int64 v46; // [rsp+110h] [rbp-110h]
  _WORD *v47; // [rsp+118h] [rbp-108h]
  __int64 v48; // [rsp+120h] [rbp-100h] BYREF
  __int64 v49; // [rsp+128h] [rbp-F8h]
  __int64 v50; // [rsp+130h] [rbp-F0h]
  __int64 v51; // [rsp+138h] [rbp-E8h]
  _WORD *v52; // [rsp+140h] [rbp-E0h]
  __int128 v53; // [rsp+148h] [rbp-D8h]
  __int64 v54; // [rsp+158h] [rbp-C8h]
  __int64 v55; // [rsp+160h] [rbp-C0h]
  __int64 v56; // [rsp+168h] [rbp-B8h]
  __int64 v57; // [rsp+170h] [rbp-B0h]
  __int64 v58; // [rsp+178h] [rbp-A8h]
  __int64 v59; // [rsp+180h] [rbp-A0h]
  __int64 v60; // [rsp+188h] [rbp-98h]
  __int64 v61; // [rsp+190h] [rbp-90h]
  __int64 v62; // [rsp+198h] [rbp-88h]
  __int64 v63; // [rsp+1A0h] [rbp-80h]
  __int64 v64; // [rsp+1A8h] [rbp-78h] BYREF
  __int64 v65; // [rsp+1B0h] [rbp-70h]
  __int64 v66; // [rsp+1B8h] [rbp-68h]
  __int64 v67; // [rsp+1C0h] [rbp-60h]
  __int64 v68; // [rsp+1C8h] [rbp-58h]
  __int64 v69; // [rsp+1D0h] [rbp-50h]
  __int64 v70; // [rsp+1D8h] [rbp-48h]
  __int64 v71; // [rsp+1E0h] [rbp-40h]
  __int64 v72; // [rsp+1E8h] [rbp-38h]
  bool v73; // [rsp+1F7h] [rbp-29h]

  codexmate_lib::core::relay::codex_project_state::inspect::hec557ca3f520652c(v42, a2); /*0x100504ba1*/
  if ( v42[218] == 1 ) /*0x100504bad*/
  {
    codexmate_lib::core::relay::codex_project_state::repair_if_needed::h6ff0d1e866baa369(&v48, a2); /*0x100504bbd*/
    v4 = (_WORD *)v48; /*0x100504bc2*/
    v5 = v49; /*0x100504bc9*/
    v6 = v50; /*0x100504bd6*/
    v7 = v51; /*0x100504bdd*/
    v8 = v52; /*0x100504be4*/
    if ( __OFSUB__(-v48, 1) ) /*0x100504bd3*/
    {
      v9 = v54; /*0x100504bf1*/
      v64 = v55; /*0x100504bff*/
      v65 = v56; /*0x100504c0a*/
      v66 = v57; /*0x100504c15*/
      v67 = v58; /*0x100504c20*/
      v68 = v59; /*0x100504c2b*/
      v10 = v53; /*0x100504c2f*/
      *(_QWORD *)a1 = v49; /*0x100504c36*/
      *(_QWORD *)(a1 + 8) = v6; /*0x100504c39*/
      *(_QWORD *)(a1 + 16) = v7; /*0x100504c3d*/
      *(_QWORD *)(a1 + 24) = v8; /*0x100504c41*/
      *(_OWORD *)(a1 + 32) = v10; /*0x100504c45*/
      *(_QWORD *)(a1 + 48) = v9; /*0x100504c4a*/
      v11 = v65; /*0x100504c52*/
      *(_QWORD *)(a1 + 56) = v64; /*0x100504c56*/
      *(_QWORD *)(a1 + 64) = v11; /*0x100504c5a*/
      *(_QWORD *)(a1 + 72) = v66; /*0x100504c62*/
      *(_QWORD *)(a1 + 80) = v67; /*0x100504c6a*/
      *(_QWORD *)(a1 + 88) = v68; /*0x100504c72*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee( /*0x100504c76*/
               v42,
               v8,
               v5);
    }
    v47 = v52; /*0x100504e48*/
    v60 = v49; /*0x100504e4f*/
    v45 = *((_WORD **)&v53 + 1); /*0x100504e5d*/
    v46 = v54; /*0x100504e6b*/
    codexmate_lib::core::relay::codex_diagnostic::check_project_state_integrity::h2781a40cec1df614(&v48, a2); /*0x100504e7c*/
    if ( (_QWORD)v53 == 2 && *v52 == 27503 ) /*0x100504e97*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, a2); /*0x1005051b7*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005051c6*/
      if ( !v34 ) /*0x1005051ce*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050538d*/
      v35 = (_QWORD *)v34; /*0x1005051d4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1005051d7*/
      v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x1005051e6*/
      if ( !v36 ) /*0x1005051ee*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x1005053f6*/
      qmemcpy(v36, "project_state_integrity", 23); /*0x10050521a*/
      *v35 = 23; /*0x10050521d*/
      v35[1] = v36; /*0x100505225*/
      v35[2] = 23; /*0x10050522a*/
      v61 = 1; /*0x100505233*/
      v62 = (__int64)v35; /*0x10050523e*/
      v63 = 1; /*0x100505245*/
      v70 = 0; /*0x10050524d*/
      v71 = 8; /*0x100505255*/
      v72 = 0; /*0x10050525d*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100505265*/
      v37 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100505274*/
      if ( !v37 ) /*0x10050527c*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005053a8*/
      *v37 = v4; /*0x100505282*/
      v37[1] = v60; /*0x10050528c*/
      v37[2] = v6; /*0x100505290*/
      v38 = v63; /*0x100505294*/
      v66 = v63; /*0x100505298*/
      v5 = v61; /*0x10050529c*/
      v39 = v62; /*0x1005052a3*/
      v65 = v62; /*0x1005052aa*/
      v64 = v61; /*0x1005052ae*/
      v40 = v70; /*0x1005052b2*/
      v41 = v71; /*0x1005052b6*/
      v67 = v70; /*0x1005052ba*/
      v68 = v71; /*0x1005052be*/
      v69 = v72; /*0x1005052c6*/
      *(_QWORD *)(a1 + 48) = v72; /*0x1005052ca*/
      *(_QWORD *)(a1 + 40) = v41; /*0x1005052ce*/
      *(_QWORD *)(a1 + 32) = v40; /*0x1005052d2*/
      *(_QWORD *)(a1 + 24) = v38; /*0x1005052d6*/
      *(_QWORD *)(a1 + 16) = v39; /*0x1005052da*/
      *(_QWORD *)(a1 + 8) = v5; /*0x1005052de*/
      *(_QWORD *)(a1 + 56) = 1; /*0x1005052e2*/
      *(_QWORD *)(a1 + 64) = v37; /*0x1005052ea*/
      *(_QWORD *)(a1 + 72) = 1; /*0x1005052ee*/
      *(_QWORD *)a1 = 11; /*0x1005052f6*/
      v32 = 1; /*0x1005052fd*/
      v33 = v48; /*0x10050530a*/
      if ( v48 ) /*0x100505314*/
        goto LABEL_22; /*0x100505314*/
    }
    else
    {
      v61 = 0; /*0x100504e9d*/
      v62 = 8; /*0x100504ea8*/
      v63 = 0; /*0x100504eb3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, a2); /*0x100504ebb*/
      v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100504eca*/
      if ( !v22 ) /*0x100504ed2*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050535b*/
      v23 = (_QWORD *)v22; /*0x100504ed8*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100504edb*/
      v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100504eea*/
      if ( !v24 ) /*0x100504efc*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x1005053db*/
      qmemcpy(v24, "project_state_integrity", 23); /*0x100504f28*/
      *v23 = 23; /*0x100504f2b*/
      v23[1] = v24; /*0x100504f33*/
      v23[2] = 23; /*0x100504f38*/
      v70 = 1; /*0x100504f41*/
      v71 = (__int64)v23; /*0x100504f49*/
      v72 = 1; /*0x100504f4d*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100504f55*/
      v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100504f64*/
      v73 = v25 == 0; /*0x100504f6c*/
      if ( !v25 ) /*0x100504f70*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050536f*/
      v26 = (_QWORD *)v25; /*0x100504f76*/
      if ( v56 == 0x8000000000000000LL ) /*0x100504f83*/
      {
        v66 = v55; /*0x100504f90*/
        v65 = v54; /*0x100504f9b*/
        v64 = *((_QWORD *)&v53 + 1); /*0x100504f9f*/
      }
      else
      {
        v64 = v56; /*0x100504fb3*/
        v65 = v57; /*0x100504fc5*/
        v66 = v58; /*0x100504fc9*/
        if ( *((_QWORD *)&v53 + 1) ) /*0x100504fd0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, *((_QWORD *)&v53 + 1), 1); /*0x100504fd7*/
      }
      v44[0] = &v64; /*0x100504fe0*/
      v44[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100504fee*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v43, &unk_1017C0361, v44); /*0x10050500a*/
      if ( v64 ) /*0x100505016*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x100505021*/
      v26[2] = v43[2]; /*0x10050502d*/
      v27 = v43[0]; /*0x100505032*/
      v26[1] = v43[1]; /*0x100505040*/
      *v26 = v27; /*0x100505045*/
      v28 = v61; /*0x100505049*/
      v29 = v62; /*0x100505050*/
      v64 = v61; /*0x100505057*/
      v65 = v62; /*0x10050505b*/
      v5 = v63; /*0x10050505f*/
      v66 = v63; /*0x100505063*/
      v30 = v70; /*0x100505067*/
      v31 = v71; /*0x10050506b*/
      v67 = v70; /*0x10050506f*/
      v68 = v71; /*0x100505073*/
      v69 = v72; /*0x10050507b*/
      *(_QWORD *)(a1 + 48) = v72; /*0x10050507f*/
      *(_QWORD *)(a1 + 40) = v31; /*0x100505083*/
      *(_QWORD *)(a1 + 32) = v30; /*0x100505087*/
      *(_QWORD *)(a1 + 24) = v5; /*0x10050508b*/
      *(_QWORD *)(a1 + 16) = v29; /*0x10050508f*/
      *(_QWORD *)(a1 + 8) = v28; /*0x100505093*/
      *(_QWORD *)(a1 + 56) = 1; /*0x100505097*/
      *(_QWORD *)(a1 + 64) = v26; /*0x10050509f*/
      *(_QWORD *)(a1 + 72) = 1; /*0x1005050a3*/
      *(_QWORD *)a1 = 11; /*0x1005050ab*/
      v32 = 0; /*0x1005050b2*/
      v33 = v48; /*0x1005050b5*/
      if ( v48 ) /*0x1005050bf*/
LABEL_22:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v33, 1); /*0x1005050c1*/
    }
    if ( v51 ) /*0x1005050dc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x1005050ea*/
    if ( v32 ) /*0x1005050f2*/
    {
      if ( *((_QWORD *)&v53 + 1) ) /*0x1005050fe*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, *((_QWORD *)&v53 + 1), 1); /*0x10050510c*/
      if ( v56 != 0x8000000000000000LL && v56 ) /*0x100505120*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v56, 1); /*0x10050512e*/
    }
    if ( 2 * v7 ) /*0x100505133*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v7, 1); /*0x10050518b*/
      v8 = v45; /*0x100505190*/
      if ( !(2LL * (_QWORD)v45) ) /*0x1005051a2*/
        goto LABEL_33; /*0x1005051a2*/
    }
    else
    {
      v8 = v45; /*0x100505140*/
      if ( !(2LL * (_QWORD)v45) ) /*0x100505147*/
        goto LABEL_33; /*0x100505152*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v8, 1); /*0x1005051b0*/
LABEL_33:
    if ( !((unsigned __int8)v32 | (v4 == nullptr)) ) /*0x10050515a*/
    {
      v8 = v4; /*0x10050516f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v4, 1); /*0x100505172*/
    }
    return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee( /*0x100505177*/
             v42,
             v8,
             v5);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, a2); /*0x100504c7b*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100504c8a*/
  if ( !v12 ) /*0x100504c92*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100505329*/
  v13 = (_QWORD *)v12; /*0x100504c98*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100504c9b*/
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100504caa*/
  if ( !v14 ) /*0x100504cb2*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x1005053b9*/
  qmemcpy(v14, "project_state_integrity", 23); /*0x100504cde*/
  *v13 = 23; /*0x100504ce1*/
  v13[1] = v14; /*0x100504ce8*/
  v13[2] = 23; /*0x100504cec*/
  v70 = 1; /*0x100504cf4*/
  v71 = (__int64)v13; /*0x100504cfc*/
  v72 = 1; /*0x100504d00*/
  v64 = 0; /*0x100504d08*/
  v65 = 8; /*0x100504d10*/
  v66 = 0; /*0x100504d18*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100504d20*/
  v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100504d2f*/
  if ( !v15 ) /*0x100504d37*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10050533d*/
  v16 = (_QWORD *)v15; /*0x100504d3d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100504d40*/
  v17 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x100504d4f*/
  if ( !v17 ) /*0x100504d57*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39); /*0x1005053ca*/
  *(_QWORD *)((char *)v17 + 31) = 0x8DA4E5AEBFE4809CLL; /*0x100504d67*/
  v17[3] = 0x9CE9A097E68CBCEFLL; /*0x100504d75*/
  v17[2] = 0xB8B8E5A3ADE695BCLL; /*0x100504d83*/
  v17[1] = 0xE5A2B4E7AE9BE7B9LL; /*0x100504d91*/
  *v17 = 0xA1E9207865646F43LL; /*0x100504d9f*/
  *v16 = 39; /*0x100504da2*/
  v16[1] = v17; /*0x100504da9*/
  v16[2] = 39; /*0x100504dad*/
  v18 = v72; /*0x100504db5*/
  v50 = v72; /*0x100504db9*/
  v19 = v70; /*0x100504dc0*/
  v5 = v71; /*0x100504dc4*/
  v49 = v71; /*0x100504dc8*/
  v48 = v70; /*0x100504dcf*/
  v8 = (_WORD *)v64; /*0x100504dd6*/
  v20 = v65; /*0x100504dda*/
  v51 = v64; /*0x100504dde*/
  v52 = (_WORD *)v65; /*0x100504de5*/
  *(_QWORD *)&v53 = v66; /*0x100504df0*/
  *(_QWORD *)(a1 + 48) = v66; /*0x100504df7*/
  *(_QWORD *)(a1 + 40) = v20; /*0x100504dfb*/
  *(_QWORD *)(a1 + 32) = v8; /*0x100504dff*/
  *(_QWORD *)(a1 + 24) = v18; /*0x100504e03*/
  *(_QWORD *)(a1 + 16) = v5; /*0x100504e07*/
  *(_QWORD *)(a1 + 8) = v19; /*0x100504e0b*/
  *(_QWORD *)(a1 + 56) = 1; /*0x100504e0f*/
  *(_QWORD *)(a1 + 64) = v16; /*0x100504e17*/
  *(_QWORD *)(a1 + 72) = 1; /*0x100504e1b*/
  *(_QWORD *)a1 = 11; /*0x100504e23*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee( /*0x100504e36*/
           v42,
           v8,
           v5);
}