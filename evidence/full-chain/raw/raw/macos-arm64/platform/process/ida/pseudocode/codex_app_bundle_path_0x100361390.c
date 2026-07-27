// __ZN13codexmate_lib8platform7process21codex_app_bundle_path @ 0x100361390 | 基线 same-set
_QWORD *__fastcall codexmate_lib::platform::process::codex_app_bundle_path::h67ee45f90aea67f0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r14
  void *v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // r15
  unsigned __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r15
  unsigned __int64 v25; // rbx
  __int64 v26; // rsi
  _QWORD *v27; // r15
  _QWORD *v28; // r14
  unsigned __int64 v29; // rbx
  _QWORD *v30; // r15
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // r15
  unsigned __int64 v38; // r13
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  _QWORD *v41; // r14
  __int64 v42; // rsi
  __int64 v44; // rbx
  __int64 v45; // r15
  __int64 v46; // rbx
  __int64 v47; // r15
  __int64 v48; // r13
  __int64 v49; // [rsp+8h] [rbp-1B8h] BYREF
  __int64 v50; // [rsp+10h] [rbp-1B0h]
  __int64 v51; // [rsp+18h] [rbp-1A8h]
  __int64 v52; // [rsp+20h] [rbp-1A0h]
  __int64 v53; // [rsp+28h] [rbp-198h]
  __int64 v54; // [rsp+30h] [rbp-190h]
  __int64 v55; // [rsp+38h] [rbp-188h]
  char v56; // [rsp+40h] [rbp-180h]
  __int16 v57; // [rsp+48h] [rbp-178h]
  __int64 v58; // [rsp+D0h] [rbp-F0h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-E8h]
  unsigned __int64 v60; // [rsp+E0h] [rbp-E0h]
  __int64 v61; // [rsp+E8h] [rbp-D8h]
  __int64 v62; // [rsp+F0h] [rbp-D0h]
  __int64 v63; // [rsp+F8h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+100h] [rbp-C0h]
  __int64 v65; // [rsp+108h] [rbp-B8h]
  __int64 v66; // [rsp+110h] [rbp-B0h]
  __int64 v67; // [rsp+118h] [rbp-A8h]
  __int64 v68; // [rsp+120h] [rbp-A0h]
  __int64 v69; // [rsp+128h] [rbp-98h]
  __int64 v70; // [rsp+130h] [rbp-90h] BYREF
  __int64 v71; // [rsp+138h] [rbp-88h]
  __int64 v72; // [rsp+140h] [rbp-80h]
  __int64 v73; // [rsp+148h] [rbp-78h]
  __int64 v74; // [rsp+150h] [rbp-70h]
  __int64 v75; // [rsp+158h] [rbp-68h]
  __int64 v76; // [rsp+160h] [rbp-60h]
  __int64 v77; // [rsp+168h] [rbp-58h] BYREF
  _QWORD *v78; // [rsp+170h] [rbp-50h]
  __int64 v79; // [rsp+178h] [rbp-48h]
  _QWORD *v80; // [rsp+180h] [rbp-40h]
  __int64 v81; // [rsp+188h] [rbp-38h]
  _QWORD *v82; // [rsp+190h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003613a7*/
  v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1003613b6*/
  if ( !v2 ) /*0x1003613be*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100361ad9*/
  v3 = (_QWORD *)v2; /*0x1003613c4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1003613c7*/
  v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1003613d6*/
  if ( !v4 ) /*0x1003613de*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100361b1d*/
  v80 = a1; /*0x1003613e4*/
  qmemcpy(v4, "/Applications", 13); /*0x100361400*/
  *v3 = 13; /*0x100361403*/
  v3[1] = v4; /*0x10036140a*/
  v3[2] = 13; /*0x10036140e*/
  v77 = 1; /*0x100361416*/
  v78 = v3; /*0x10036141e*/
  v79 = 1; /*0x100361422*/
  dirs::home_dir::hc82e61f557956e66(&v70); /*0x100361431*/
  v5 = v70; /*0x100361436*/
  if ( __OFSUB__(-v70, 1) ) /*0x100361443*/
    goto LABEL_8; /*0x100361443*/
  v6 = v71; /*0x100361449*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10036146b*/
    &v49,
    v71,
    v72,
    "ApplicationsChatGPT.appCFBundleIdentifierCFBundleExecutableContents/MacOScodex_processlaunch_readylaunch_timeout",
    12);
  v7 = v79; /*0x100361470*/
  if ( v79 == v77 ) /*0x100361478*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v77); /*0x10036147e*/
  v8 = v78; /*0x100361483*/
  v9 = 3 * v7; /*0x100361487*/
  v78[v9 + 2] = v51; /*0x100361492*/
  v10 = v49; /*0x100361497*/
  v8[v9 + 1] = v50; /*0x1003614a5*/
  v8[v9] = v10; /*0x1003614aa*/
  v11 = v7 + 1; /*0x1003614ae*/
  v79 = v11; /*0x1003614b1*/
  if ( v5 ) /*0x1003614b8*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1003614c5*/
LABEL_8:
    v11 = v79; /*0x1003614ca*/
  }
  v12 = v78; /*0x1003614ce*/
  v81 = 24 * v11; /*0x1003614ec*/
  v13 = &v78[3 * v11]; /*0x1003614f0*/
  v49 = (__int64)v78; /*0x1003614f4*/
  v50 = (__int64)v78; /*0x1003614fb*/
  v61 = v77; /*0x100361502*/
  v51 = v77; /*0x100361509*/
  v52 = (__int64)v13; /*0x100361510*/
  v14 = (__int64)v78; /*0x100361517*/
  if ( !v11 ) /*0x10036151d*/
  {
LABEL_33:
    v28 = v12; /*0x1003616dd*/
    if ( v13 != (_QWORD *)v14 ) /*0x1003616f6*/
    {
      v29 = ((unsigned __int64)v13 - v14) / 0x18; /*0x1003616fb*/
      v30 = (_QWORD *)(v14 + 8); /*0x1003616ff*/
      do /*0x100361717*/
      {
        v31 = *(v30 - 1); /*0x100361719*/
        if ( v31 ) /*0x100361720*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v30, v31, 1); /*0x10036172a*/
        v30 += 3; /*0x100361710*/
        --v29; /*0x100361714*/
      }
      while ( v29 ); /*0x100361717*/
    }
    if ( v61 ) /*0x10036173b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 24 * v61, 8); /*0x10036174d*/
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x100361768*/
      &v49,
      "/usr/bin/mdfindkMDItemCFBundleIdentifier == 'com.openai.codex'Codex.app/Codex Helper-t",
      15);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x10036177c*/
      &v49,
      "kMDItemCFBundleIdentifier == 'com.openai.codex'Codex.app/Codex Helper-t",
      47);
    std::process::Command::output::h737eedd4de2ee22e(&v70, &v49); /*0x10036178f*/
    if ( v70 == 0x8000000000000000LL ) /*0x10036179b*/
    {
      if ( (v71 & 3) == 1 ) /*0x1003617ac*/
      {
        v32 = v71 - 1; /*0x1003617ae*/
        v33 = *(_QWORD *)(v71 - 1); /*0x1003617b2*/
        v34 = *(_QWORD *)(v71 + 7); /*0x1003617b6*/
        if ( *(_QWORD *)v34 ) /*0x1003617ba*/
          (*(void (__fastcall **)(__int64))v34)(v33); /*0x1003617c5*/
        v35 = *(_QWORD *)(v34 + 8); /*0x1003617c7*/
        if ( v35 ) /*0x1003617ce*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16)); /*0x1003617d7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 24, 8); /*0x1003617e9*/
      }
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v49); /*0x1003617f8*/
    }
    else
    {
      v69 = v76; /*0x100361806*/
      v68 = v75; /*0x100361811*/
      v67 = v74; /*0x10036181c*/
      v66 = v73; /*0x100361827*/
      v65 = v72; /*0x100361832*/
      v64 = v71; /*0x100361847*/
      v63 = v70; /*0x10036184e*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v49); /*0x10036185c*/
      if ( !(_DWORD)v69 ) /*0x100361868*/
      {
        v44 = v64; /*0x1003619ab*/
        alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v70, v64, v65); /*0x1003619c3*/
        v81 = v44; /*0x1003619c8*/
        v45 = v71; /*0x1003619cc*/
        v49 = 0; /*0x1003619d7*/
        v50 = v72; /*0x1003619e2*/
        v51 = v71; /*0x1003619e9*/
        v52 = v72; /*0x1003619f0*/
        v53 = 0; /*0x1003619f7*/
        v54 = v72; /*0x100361a02*/
        v55 = 0xA0000000ALL; /*0x100361a13*/
        v56 = 1; /*0x100361a1a*/
        v57 = 0; /*0x100361a21*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h71c67c82e7378236( /*0x100361a38*/
          &v58,
          &v49);
        if ( 2 * v70 ) /*0x100361a47*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v70, 1); /*0x100361a5c*/
        if ( v60 >= 2 ) /*0x100361a6c*/
        {
          v46 = v59; /*0x100361ade*/
          if ( v60 >= 0x15 ) /*0x100361ae9*/
          {
            core::slice::sort::stable::driftsort_main::h98ec17c2c396a2d3(v59, v60, &v70); /*0x100361b2e*/
          }
          else
          {
            v47 = 24 * v60; /*0x100361aef*/
            v48 = 24; /*0x100361af3*/
            do /*0x100361b0c*/
            {
              core::slice::sort::shared::smallsort::insert_tail::h02e919025eafbda0(v46, v46 + v48); /*0x100361b00*/
              v48 += 24; /*0x100361b05*/
            }
            while ( v47 != v48 ); /*0x100361b0c*/
          }
        }
        alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h4f38dd315a2592af(&v58); /*0x100361a75*/
        v37 = v58; /*0x100361a7a*/
        v36 = v59; /*0x100361a81*/
        v38 = v60; /*0x100361a88*/
        if ( v63 ) /*0x100361a99*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v63, 1); /*0x100361aa4*/
        if ( v66 ) /*0x100361ab3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x100361ac5*/
        goto LABEL_54; /*0x100361aca*/
      }
      if ( v63 ) /*0x100361878*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v63, 1); /*0x100361886*/
      if ( v66 ) /*0x100361898*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x1003618a6*/
    }
    v36 = 8; /*0x1003618ab*/
    v37 = 0; /*0x1003618b0*/
    v38 = 0; /*0x1003618b3*/
LABEL_54:
    v49 = v36; /*0x1003618b6*/
    v51 = v37; /*0x1003618c6*/
    v50 = v36; /*0x1003618cd*/
    v52 = v36 + 24 * v38; /*0x1003618d4*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hcdff48a36435e13f( /*0x1003618e9*/
      &v70,
      &v49);
    v27 = v80; /*0x1003618f5*/
    if ( v70 == 0x8000000000000000LL ) /*0x1003618f9*/
    {
      *v80 = 0x8000000000000000LL; /*0x1003618fb*/
    }
    else
    {
      v80[2] = v72; /*0x100361904*/
      v39 = v70; /*0x100361908*/
      v27[1] = v71; /*0x100361916*/
      *v27 = v39; /*0x10036191a*/
    }
    if ( v52 != v50 ) /*0x100361937*/
    {
      v40 = (v52 - v50) / 0x18uLL; /*0x10036193c*/
      v41 = (_QWORD *)(v50 + 8); /*0x100361940*/
      do /*0x100361957*/
      {
        v42 = *(v41 - 1); /*0x100361959*/
        if ( v42 ) /*0x100361960*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v41, v42, 1); /*0x10036196a*/
        v41 += 3; /*0x100361950*/
        --v40; /*0x100361954*/
      }
      while ( v40 ); /*0x100361957*/
    }
    if ( v51 ) /*0x10036197b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, 24 * v51, 8); /*0x100361991*/
    return v27; /*0x100361991*/
  }
  v62 = (__int64)&v78[3 * v11]; /*0x100361523*/
  v15 = 0; /*0x10036152a*/
  v82 = v78; /*0x10036152d*/
  while ( 1 ) /*0x100361552*/
  {
    v16 = v12[v15 / 8]; /*0x100361552*/
    if ( v16 == 0x8000000000000000LL ) /*0x100361559*/
    {
      v14 = (__int64)&v12[v15 / 8 + 3]; /*0x1003615e5*/
      v13 = (_QWORD *)v62; /*0x1003615ea*/
LABEL_32:
      v50 = v14; /*0x1003616d6*/
      goto LABEL_33; /*0x1003616d6*/
    }
    v17 = v12[v15 / 8 + 1]; /*0x10036155f*/
    std::path::Path::_join::hb1a495d4f06b13b8( /*0x100361580*/
      &v63,
      v17,
      v12[v15 / 8 + 2],
      "ChatGPT.appCFBundleIdentifierCFBundleExecutableContents/MacOScodex_processlaunch_readylaunch_timeout",
      11);
    v18 = v64; /*0x100361585*/
    codexmate_lib::platform::process::codex_macos_bundle_main_executable::h65e006069063e1dd(&v70, v64, v65, v19); /*0x10036159d*/
    if ( v70 != 0x8000000000000000LL ) /*0x1003615ac*/
      break; /*0x1003615ac*/
    if ( v63 ) /*0x1003615b8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v63, 1); /*0x1003615c2*/
    if ( v16 ) /*0x1003615ca*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x1003615db*/
    v15 += 24LL; /*0x100361540*/
    v12 = v82; /*0x100361548*/
    if ( v81 == v15 ) /*0x10036154c*/
    {
      v13 = (_QWORD *)v62; /*0x1003616cc*/
      v14 = v62; /*0x1003616d3*/
      goto LABEL_32; /*0x1003616d3*/
    }
  }
  if ( v70 ) /*0x1003615f9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, v70, 1); /*0x100361607*/
  v20 = v81 - 24; /*0x100361610*/
  v21 = v80; /*0x10036161b*/
  v80[2] = v65; /*0x10036161f*/
  v22 = v63; /*0x100361623*/
  v21[1] = v64; /*0x100361631*/
  *v21 = v22; /*0x100361635*/
  if ( v16 ) /*0x10036163b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x100361648*/
  if ( v20 != v15 ) /*0x100361650*/
  {
    v23 = v81 - v15 - 24; /*0x100361659*/
    v24 = &v82[v15 / 8 + 4]; /*0x100361661*/
    v25 = v23 / 0x18; /*0x100361679*/
    do /*0x100361687*/
    {
      v26 = *(v24 - 1); /*0x100361689*/
      if ( v26 ) /*0x100361690*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v26, 1); /*0x10036169a*/
      v24 += 3; /*0x100361680*/
      --v25; /*0x100361684*/
    }
    while ( v25 ); /*0x100361687*/
  }
  if ( v61 ) /*0x1003616ab*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, 24 * v61, 8); /*0x1003616be*/
  return v80; /*0x100361999*/
}