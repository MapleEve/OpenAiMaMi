// __ZN13codexmate_lib4core5relay12proxy_server26upstream_error_with_reason @ 0x10025f100 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::proxy_server::upstream_error_with_reason::h83d8057a196da64a(
        void *a1,
        __int64 a2,
        void *a3,
        signed __int64 a4,
        void *a5,
        size_t a6)
{
  void *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  _DWORD *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r12
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  _DWORD *v21; // rax
  void *v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  _QWORD *v28; // rsi
  _DWORD *v29; // rax
  size_t v30; // rdx
  __int64 v31; // r14
  void *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rbx
  size_t v35; // r15
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  __int64 v43; // rdx
  __int64 i; // rax
  unsigned __int8 v45; // cl
  _QWORD v47[3]; // [rsp+8h] [rbp-218h] BYREF
  char v48; // [rsp+20h] [rbp-200h] BYREF
  __int64 v49; // [rsp+21h] [rbp-1FFh]
  __int64 v50; // [rsp+29h] [rbp-1F7h]
  _BYTE v51[15]; // [rsp+31h] [rbp-1EFh]
  __int64 v52; // [rsp+40h] [rbp-1E0h]
  void *__src; // [rsp+48h] [rbp-1D8h]
  _QWORD *v54; // [rsp+50h] [rbp-1D0h] BYREF
  unsigned __int128 v55; // [rsp+58h] [rbp-1C8h]
  _QWORD v56[16]; // [rsp+68h] [rbp-1B8h] BYREF
  _QWORD v57[2]; // [rsp+E8h] [rbp-138h] BYREF
  __int64 v58; // [rsp+F8h] [rbp-128h]
  __int64 v59; // [rsp+100h] [rbp-120h]
  __int64 v60; // [rsp+108h] [rbp-118h]
  __int64 v61; // [rsp+110h] [rbp-110h]
  __int64 v62; // [rsp+118h] [rbp-108h]
  int v63; // [rsp+124h] [rbp-FCh]
  __int64 v64; // [rsp+128h] [rbp-F8h] BYREF
  _DWORD *v65; // [rsp+130h] [rbp-F0h]
  __int64 v66; // [rsp+138h] [rbp-E8h]
  void *v67; // [rsp+140h] [rbp-E0h]
  size_t __n; // [rsp+148h] [rbp-D8h]
  __int64 v69; // [rsp+150h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+158h] [rbp-C8h]
  __int64 v71; // [rsp+160h] [rbp-C0h]
  __int64 v72; // [rsp+168h] [rbp-B8h]
  __int64 v73; // [rsp+170h] [rbp-B0h]
  _QWORD *v74; // [rsp+178h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+180h] [rbp-A0h]
  __int64 v76; // [rsp+188h] [rbp-98h]
  __int64 v77; // [rsp+190h] [rbp-90h]
  __int64 v78; // [rsp+198h] [rbp-88h]
  _QWORD *v79; // [rsp+1A0h] [rbp-80h] BYREF
  __int64 v80; // [rsp+1A8h] [rbp-78h]
  __int64 v81; // [rsp+1B0h] [rbp-70h]
  __int64 v82; // [rsp+1B8h] [rbp-68h] BYREF
  __int64 v83; // [rsp+1C0h] [rbp-60h]
  __int64 v84; // [rsp+1C8h] [rbp-58h]
  __int64 v85; // [rsp+1D0h] [rbp-50h]
  __int64 v86; // [rsp+1D8h] [rbp-48h]
  __int64 v87; // [rsp+1E0h] [rbp-40h]
  __int64 v88; // [rsp+1E8h] [rbp-38h]
  __int64 v89; // [rsp+1F0h] [rbp-30h]

  __n = a6; /*0x10025f114*/
  v67 = a5; /*0x10025f11b*/
  v63 = a2; /*0x10025f128*/
  v8 = a1; /*0x10025f12e*/
  v54 = nullptr; /*0x10025f131*/
  *((_QWORD *)&v55 + 1) = 0; /*0x10025f13c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10025f147*/
  v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10025f156*/
  if ( !v9 ) /*0x10025f15e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10025faca*/
  *(_BYTE *)(v9 + 4) = 114; /*0x10025f164*/
  *(_DWORD *)v9 = 1869771365; /*0x10025f168*/
  v47[0] = 5; /*0x10025f16e*/
  v52 = v9; /*0x10025f179*/
  v47[1] = v9; /*0x10025f180*/
  v47[2] = 5; /*0x10025f187*/
  v57[0] = 0; /*0x10025f192*/
  v58 = 0; /*0x10025f19d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x10025f1a8*/
  v10 = 7; /*0x10025f1ad*/
  v11 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10025f1bd*/
  if ( !v11 ) /*0x10025f1c5*/
    goto LABEL_48; /*0x10025f1c5*/
  *(_DWORD *)((char *)v11 + 3) = 1701273971; /*0x10025f1ce*/
  *v11 = 1936942445; /*0x10025f1d5*/
  v64 = 7; /*0x10025f1db*/
  v65 = v11; /*0x10025f1e6*/
  v66 = 7; /*0x10025f1ed*/
  if ( a4 < 0 ) /*0x10025f1fb*/
  {
    v12 = 0; /*0x10025f1fd*/
    goto LABEL_5; /*0x10025f1fd*/
  }
  if ( a4 ) /*0x10025f210*/
  {
    __src = a3; /*0x10025f212*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x10025f21c*/
    v12 = 1; /*0x10025f221*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x10025f22f*/
    if ( !v13 ) /*0x10025f237*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, a4); /*0x10025f200*/
    v14 = v13; /*0x10025f239*/
    v8 = a1; /*0x10025f23c*/
    a3 = __src; /*0x10025f23f*/
  }
  else
  {
    v14 = 1; /*0x10025f248*/
  }
  memcpy((void *)v14, a3, a4); /*0x10025f257*/
  LOBYTE(v86) = 3; /*0x10025f25c*/
  v87 = a4; /*0x10025f260*/
  v88 = v14; /*0x10025f264*/
  v89 = a4; /*0x10025f268*/
  v15 = &v79; /*0x10025f26c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v79, v57, &v64); /*0x10025f27e*/
  if ( __OFSUB__(0, v79) ) /*0x10025f285*/
  {
    v16 = v80; /*0x10025f28b*/
    v17 = 32 * v82; /*0x10025f293*/
    v77 = *(_QWORD *)(v80 + 32 * v82 + 24); /*0x10025f29c*/
    v76 = *(_QWORD *)(v80 + 32 * v82 + 16); /*0x10025f2a8*/
    v18 = *(_QWORD **)(v80 + 32 * v82); /*0x10025f2af*/
    v75 = *(_QWORD *)(v80 + 32 * v82 + 8); /*0x10025f2b8*/
    v74 = v18; /*0x10025f2bf*/
    *(_QWORD *)(v80 + v17 + 24) = v89; /*0x10025f2ca*/
    *(_QWORD *)(v16 + v17 + 16) = v88; /*0x10025f2d3*/
    v19 = v86; /*0x10025f2d8*/
    v20 = (_QWORD *)v87; /*0x10025f2dc*/
    *(_QWORD *)(v16 + v17 + 8) = v87; /*0x10025f2e0*/
    *(_QWORD *)(v16 + v17) = v19; /*0x10025f2e5*/
    if ( (_BYTE)v74 != 6 ) /*0x10025f2f0*/
    {
      v15 = &v74; /*0x10025f2f6*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x10025f2fd*/
    }
  }
  else
  {
    v56[6] = v85; /*0x10025f30b*/
    v56[5] = v84; /*0x10025f316*/
    v56[4] = v83; /*0x10025f321*/
    v56[3] = v82; /*0x10025f32c*/
    v56[2] = v81; /*0x10025f337*/
    v56[1] = v80; /*0x10025f346*/
    v56[0] = v79; /*0x10025f34d*/
    v72 = v89; /*0x10025f358*/
    v71 = v88; /*0x10025f363*/
    v70 = v87; /*0x10025f372*/
    v69 = v86; /*0x10025f379*/
    v15 = &v74; /*0x10025f380*/
    v20 = v56; /*0x10025f387*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10025f395*/
      &v74,
      v56,
      &v69);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v20); /*0x10025f39a*/
  v10 = 4; /*0x10025f39f*/
  v21 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10025f3af*/
  if ( !v21 ) /*0x10025f3b7*/
    goto LABEL_48; /*0x10025f3b7*/
  *v21 = 1701869940; /*0x10025f3c0*/
  v64 = 4; /*0x10025f3c6*/
  v65 = v21; /*0x10025f3d1*/
  v66 = 4; /*0x10025f3d8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10025f3e3*/
  v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x10025f3f2*/
  if ( !v22 ) /*0x10025f3fa*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x10025fadb*/
  qmemcpy(v22, "aimami_proxy_error", 18); /*0x10025f418*/
  LOBYTE(v86) = 3; /*0x10025f421*/
  v87 = 18; /*0x10025f425*/
  v88 = (__int64)v22; /*0x10025f42d*/
  v89 = 18; /*0x10025f431*/
  v23 = &v79; /*0x10025f439*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v79, v57, &v64); /*0x10025f44b*/
  if ( v79 == (_QWORD *)0x8000000000000000LL ) /*0x10025f45e*/
  {
    v24 = v80; /*0x10025f460*/
    v25 = 32 * v82; /*0x10025f468*/
    v77 = *(_QWORD *)(v80 + 32 * v82 + 24); /*0x10025f471*/
    v76 = *(_QWORD *)(v80 + 32 * v82 + 16); /*0x10025f47d*/
    v26 = *(_QWORD **)(v80 + 32 * v82); /*0x10025f484*/
    v75 = *(_QWORD *)(v80 + 32 * v82 + 8); /*0x10025f48d*/
    v74 = v26; /*0x10025f494*/
    *(_QWORD *)(v80 + v25 + 24) = v89; /*0x10025f49f*/
    *(_QWORD *)(v24 + v25 + 16) = v88; /*0x10025f4a8*/
    v27 = v86; /*0x10025f4ad*/
    v28 = (_QWORD *)v87; /*0x10025f4b1*/
    *(_QWORD *)(v24 + v25 + 8) = v87; /*0x10025f4b5*/
    *(_QWORD *)(v24 + v25) = v27; /*0x10025f4ba*/
    if ( (_BYTE)v74 != 6 ) /*0x10025f4c5*/
    {
      v23 = &v74; /*0x10025f4cb*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x10025f4d2*/
    }
  }
  else
  {
    v56[6] = v85; /*0x10025f4e0*/
    v56[5] = v84; /*0x10025f4eb*/
    v56[4] = v83; /*0x10025f4f6*/
    v56[3] = v82; /*0x10025f501*/
    v56[2] = v81; /*0x10025f50c*/
    v56[1] = v80; /*0x10025f51b*/
    v56[0] = v79; /*0x10025f522*/
    v72 = v89; /*0x10025f52d*/
    v71 = v88; /*0x10025f538*/
    v70 = v87; /*0x10025f547*/
    v69 = v86; /*0x10025f54e*/
    v23 = &v74; /*0x10025f555*/
    v28 = v56; /*0x10025f55c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10025f56a*/
      &v74,
      v56,
      &v69);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, v28); /*0x10025f56f*/
  v29 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10025f57e*/
  if ( !v29 ) /*0x10025f586*/
LABEL_48:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v10); /*0x10025fab9*/
  *v29 = 1701080931; /*0x10025f58f*/
  v64 = 4; /*0x10025f595*/
  v65 = v29; /*0x10025f5a0*/
  v66 = 4; /*0x10025f5a7*/
  v30 = __n; /*0x10025f5b2*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10025f5bc*/
  {
    v31 = 0; /*0x10025f5be*/
    goto LABEL_23; /*0x10025f5be*/
  }
  if ( __n ) /*0x10025f5d1*/
  {
    v32 = v8; /*0x10025f5d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10025f5d6*/
    v31 = 1; /*0x10025f5db*/
    v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10025f5ed*/
    v30 = __n; /*0x10025f5f2*/
    if ( !v33 ) /*0x10025f5fc*/
LABEL_23:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v30); /*0x10025f5c1*/
    v34 = v33; /*0x10025f5fe*/
    v8 = v32; /*0x10025f601*/
  }
  else
  {
    v34 = 1; /*0x10025f606*/
  }
  v35 = v30; /*0x10025f615*/
  memcpy((void *)v34, v67, v30); /*0x10025f618*/
  LOBYTE(v86) = 3; /*0x10025f61d*/
  v87 = v35; /*0x10025f621*/
  v88 = v34; /*0x10025f625*/
  v89 = v35; /*0x10025f629*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v79, v57, &v64); /*0x10025f63f*/
  if ( v79 == (_QWORD *)0x8000000000000000LL ) /*0x10025f648*/
  {
    v36 = v80; /*0x10025f64a*/
    v37 = 32 * v82; /*0x10025f652*/
    v77 = *(_QWORD *)(v80 + 32 * v82 + 24); /*0x10025f65b*/
    v76 = *(_QWORD *)(v80 + 32 * v82 + 16); /*0x10025f667*/
    v38 = *(_QWORD **)(v80 + 32 * v82); /*0x10025f66e*/
    v75 = *(_QWORD *)(v80 + 32 * v82 + 8); /*0x10025f677*/
    v74 = v38; /*0x10025f67e*/
    *(_QWORD *)(v80 + v37 + 24) = v89; /*0x10025f689*/
    *(_QWORD *)(v36 + v37 + 16) = v88; /*0x10025f692*/
    v39 = v86; /*0x10025f697*/
    *(_QWORD *)(v36 + v37 + 8) = v87; /*0x10025f69f*/
    *(_QWORD *)(v36 + v37) = v39; /*0x10025f6a4*/
    if ( (_BYTE)v74 != 6 ) /*0x10025f6af*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x10025f6bc*/
  }
  else
  {
    v56[6] = v85; /*0x10025f6ca*/
    v56[5] = v84; /*0x10025f6d5*/
    v56[4] = v83; /*0x10025f6e0*/
    v56[3] = v82; /*0x10025f6eb*/
    v56[2] = v81; /*0x10025f6f6*/
    v56[1] = v80; /*0x10025f705*/
    v56[0] = v79; /*0x10025f70c*/
    v72 = v89; /*0x10025f717*/
    v71 = v88; /*0x10025f722*/
    v70 = v87; /*0x10025f731*/
    v69 = v86; /*0x10025f738*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10025f754*/
      &v74,
      v56,
      &v69);
  }
  v60 = v57[0]; /*0x10025f767*/
  v61 = v57[1]; /*0x10025f76e*/
  v62 = v58; /*0x10025f77c*/
  LOBYTE(v59) = 5; /*0x10025f783*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v79, &v54, v47); /*0x10025f79c*/
  if ( v79 == (_QWORD *)0x8000000000000000LL ) /*0x10025f7a5*/
  {
    v40 = v80; /*0x10025f7ab*/
    v41 = 32 * v82; /*0x10025f7b3*/
    v77 = *(_QWORD *)(v80 + 32 * v82 + 24); /*0x10025f7bc*/
    v76 = *(_QWORD *)(v80 + 32 * v82 + 16); /*0x10025f7c8*/
    v42 = *(_QWORD **)(v80 + 32 * v82); /*0x10025f7cf*/
    v75 = *(_QWORD *)(v80 + 32 * v82 + 8); /*0x10025f7d8*/
    v74 = v42; /*0x10025f7df*/
    *(_QWORD *)(v80 + v41 + 24) = v62; /*0x10025f7ed*/
    *(_QWORD *)(v40 + v41 + 16) = v61; /*0x10025f7f9*/
    v43 = v59; /*0x10025f7fe*/
    *(_QWORD *)(v40 + v41 + 8) = v60; /*0x10025f80c*/
    *(_QWORD *)(v40 + v41) = v43; /*0x10025f811*/
    if ( (_BYTE)v74 != 6 ) /*0x10025f81c*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x10025f829*/
  }
  else
  {
    v56[6] = v85; /*0x10025f837*/
    v56[5] = v84; /*0x10025f842*/
    v56[4] = v83; /*0x10025f84d*/
    v56[3] = v82; /*0x10025f858*/
    v56[2] = v81; /*0x10025f863*/
    v56[1] = v80; /*0x10025f872*/
    v56[0] = v79; /*0x10025f879*/
    v72 = v62; /*0x10025f887*/
    v71 = v61; /*0x10025f895*/
    v70 = v60; /*0x10025f8aa*/
    v69 = v59; /*0x10025f8b1*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10025f8cd*/
      &v74,
      v56,
      &v69);
  }
  v79 = v54; /*0x10025f8e0*/
  *(_OWORD *)((char *)&v56[1] + 7) = v55; /*0x10025f8f2*/
  *(_QWORD *)((char *)v56 + 7) = v54; /*0x10025f8f9*/
  v48 = 5; /*0x10025f900*/
  *(_QWORD *)&v51[7] = *((_QWORD *)&v55 + 1); /*0x10025f907*/
  v49 = v56[0]; /*0x10025f915*/
  v50 = v56[1]; /*0x10025f923*/
  *(_QWORD *)v51 = v55 >> 8; /*0x10025f931*/
  _$LT$axum..json..Json$LT$T$GT$$u20$as$u20$axum_core..response..into_response..IntoResponse$GT$::into_response::h7212e14c3f6814bb( /*0x10025f949*/
    v56,
    &v48);
  LOWORD(v56[13]) = v63; /*0x10025f954*/
  if ( __n ) /*0x10025f96c*/
  {
    for ( i = 0; __n != i; ++i ) /*0x10025f96e*/
    {
      v45 = *((_BYTE *)v67 + i); /*0x10025f991*/
      if ( v45 > 0x1Fu ) /*0x10025f998*/
      {
        if ( v45 == 127 ) /*0x10025f983*/
          goto LABEL_46; /*0x10025f983*/
      }
      else if ( v45 != 9 ) /*0x10025f99d*/
      {
        goto LABEL_46; /*0x10025f99d*/
      }
    }
  }
  bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v69, v67, __n); /*0x10025f9a4*/
  LOBYTE(v73) = 0; /*0x10025f9b0*/
  v84 = v73; /*0x10025f9be*/
  v83 = v72; /*0x10025f9c9*/
  v82 = v71; /*0x10025f9d4*/
  v81 = v70; /*0x10025f9e6*/
  v80 = v69; /*0x10025f9ea*/
  v79 = v56; /*0x10025f9ee*/
  http::header::name::HdrName::from_static::hd9712dfd2d6a67aa(&v74, "x-aimami-reasoninput", 15, &v79); /*0x10025fa09*/
  if ( (_BYTE)v78 == 3 ) /*0x10025fa15*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10025faaa*/
      "size overflows MAX_SIZE",
      23,
      &v79,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
  v83 = v78; /*0x10025fa1e*/
  v82 = v77; /*0x10025fa29*/
  v81 = v76; /*0x10025fa34*/
  v80 = v75; /*0x10025fa46*/
  v79 = v74; /*0x10025fa4a*/
  if ( (_BYTE)v78 != 2 ) /*0x10025fa50*/
    ((void (__fastcall *)(__int64 *, __int64, __int64))v79[4])(&v82, v80, v81); /*0x10025fa62*/
LABEL_46:
  qmemcpy(v8, v56, 0x80u); /*0x10025fa74*/
  return v8; /*0x10025fa7a*/
}