// __ZN13codexmate_lib4core5relay16codex_diagnostic21fix_residual_manifest @ 0x1004e9c90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_residual_manifest::h145dbcbebf3e60e6(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  size_t v6; // r13
  unsigned __int64 *v7; // r14
  __int64 (__fastcall *v8)(); // rsi
  unsigned __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(); // r15
  void *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(); // rdx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r15
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // r14
  void *v28; // rdi
  size_t v29; // rsi
  void *v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 (__fastcall *v33)(); // r15
  void *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // r15
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 (__fastcall *v39)(); // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  unsigned __int64 *v42; // [rsp+0h] [rbp-180h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+8h] [rbp-178h]
  __int64 v44; // [rsp+10h] [rbp-170h]
  __int64 v45; // [rsp+18h] [rbp-168h]
  __int64 v46; // [rsp+20h] [rbp-160h]
  __int64 v47; // [rsp+28h] [rbp-158h]
  __int64 v48; // [rsp+98h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-E0h]
  __int64 v50; // [rsp+A8h] [rbp-D8h]
  __int64 v51; // [rsp+B0h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-C8h]
  __int64 v53; // [rsp+C0h] [rbp-C0h]
  __int64 v54; // [rsp+C8h] [rbp-B8h] BYREF
  void *v55; // [rsp+D0h] [rbp-B0h]
  size_t v56; // [rsp+D8h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+E0h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-98h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-90h]
  __int64 v60; // [rsp+F8h] [rbp-88h]
  __int64 v61; // [rsp+100h] [rbp-80h] BYREF
  void *v62; // [rsp+108h] [rbp-78h]
  size_t __n; // [rsp+110h] [rbp-70h]
  void *__src; // [rsp+118h] [rbp-68h]
  __int64 v65; // [rsp+120h] [rbp-60h]
  __int64 v66; // [rsp+128h] [rbp-58h]
  __int64 v67; // [rsp+130h] [rbp-50h]
  __int64 v68; // [rsp+138h] [rbp-48h]
  __int64 v69; // [rsp+140h] [rbp-40h]
  __int64 (__fastcall *v70)(); // [rsp+148h] [rbp-38h]
  __int64 v71; // [rsp+150h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v51, a2, a3, &unk_1015FCB64, 24); /*0x1004e9cbb*/
  v4 = v52; /*0x1004e9cc0*/
  v5 = v53; /*0x1004e9cc7*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v61, v52, v53, &unk_1015FCEA6, 12); /*0x1004e9ce5*/
  v6 = __n; /*0x1004e9cee*/
  __src = v62; /*0x1004e9cf9*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v42, v62, __n); /*0x1004e9d00*/
  v7 = v42; /*0x1004e9d05*/
  v8 = v43; /*0x1004e9d0c*/
  v9 = v42; /*0x1004e9d13*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1004e9d16*/
    v42,
    v43);
  if ( v7 ) /*0x1004e9d1e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v8); /*0x1004e9d24*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e9d33*/
    if ( !v10 ) /*0x1004e9d3b*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ea2d4*/
    v11 = (__int64 (__fastcall *)())v10; /*0x1004e9d41*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e9d44*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x1004e9d53*/
    if ( !v12 ) /*0x1004e9d5b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x1004ea318*/
    qmemcpy(v12, "residual_manifest", 17); /*0x1004e9d79*/
    *(_QWORD *)v11 = 17; /*0x1004e9d80*/
    *((_QWORD *)v11 + 1) = v12; /*0x1004e9d87*/
    *((_QWORD *)v11 + 2) = 17; /*0x1004e9d8b*/
    v69 = 1; /*0x1004e9d93*/
    v70 = v11; /*0x1004e9d9b*/
    v71 = 1; /*0x1004e9d9f*/
    v66 = 0; /*0x1004e9da7*/
    v67 = 8; /*0x1004e9daf*/
    v68 = 0; /*0x1004e9db7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1); /*0x1004e9dbf*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e9dce*/
    if ( !v13 ) /*0x1004e9dd6*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ea2e5*/
    v14 = (_QWORD *)v13; /*0x1004e9ddc*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e9ddf*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x1004e9dee*/
    if ( !v15 ) /*0x1004e9df6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x1004ea329*/
    *(_QWORD *)(v15 + 24) = 0x90E785B8E6809CE9LL; /*0x1004e9e06*/
    *(_QWORD *)(v15 + 16) = 0xA097E68CBCEFA89CLL; /*0x1004e9e14*/
    *(_QWORD *)(v15 + 8) = 0xE598ADE58DB8E420LL; /*0x1004e9e22*/
    *(_QWORD *)v15 = 0x74736566696E616DLL; /*0x1004e9e30*/
    *(_BYTE *)(v15 + 32) = -122; /*0x1004e9e33*/
    *v14 = 33; /*0x1004e9e37*/
    v14[1] = v15; /*0x1004e9e3e*/
    v14[2] = 33; /*0x1004e9e42*/
    result = v71; /*0x1004e9e4a*/
    v44 = v71; /*0x1004e9e4e*/
    v17 = v69; /*0x1004e9e55*/
    v18 = v70; /*0x1004e9e59*/
    v43 = v70; /*0x1004e9e5d*/
    v42 = (unsigned __int64 *)v69; /*0x1004e9e64*/
    v19 = v66; /*0x1004e9e6b*/
    v20 = v67; /*0x1004e9e6f*/
    v45 = v66; /*0x1004e9e73*/
    v46 = v67; /*0x1004e9e7a*/
    v47 = v68; /*0x1004e9e85*/
    a1[6] = v68; /*0x1004e9e8c*/
    a1[5] = v20; /*0x1004e9e91*/
    a1[4] = v19; /*0x1004e9e96*/
    a1[3] = result; /*0x1004e9e9b*/
    a1[2] = v18; /*0x1004e9ea0*/
    a1[1] = v17; /*0x1004e9ea5*/
    a1[7] = 1; /*0x1004e9eaa*/
    a1[8] = v14; /*0x1004e9eb3*/
    a1[9] = 1; /*0x1004e9eb8*/
    *a1 = 11; /*0x1004e9ec1*/
    goto LABEL_18; /*0x1004e9ec9*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v58, v4, v5, "history", 7); /*0x1004e9ee8*/
  LOWORD(v42) = 511; /*0x1004e9eed*/
  BYTE2(v42) = 1; /*0x1004e9ef6*/
  v21 = v59; /*0x1004e9efd*/
  v22 = v60; /*0x1004e9f04*/
  result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v42, v59, v60); /*0x1004e9f18*/
  if ( result ) /*0x1004e9f20*/
  {
    *a1 = 2; /*0x1004e9f22*/
    a1[1] = result; /*0x1004e9f2a*/
    goto LABEL_16; /*0x1004e9f2f*/
  }
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v42); /*0x1004e9f3b*/
  v23 = ((int)v42 >> 13) - 1; /*0x1004e9f4b*/
  v24 = 0; /*0x1004e9f4e*/
  if ( (int)v42 >> 13 <= 0 ) /*0x1004e9f52*/
  {
    v25 = (1 - ((int)v42 >> 13)) / 0x190u + 1; /*0x1004e9f66*/
    v23 += 400 * v25; /*0x1004e9f6e*/
    v24 = -146097 * v25; /*0x1004e9f70*/
  }
  v57 = 1000 /*0x1004e9fdb*/
      * (HIDWORD(v42)
       + 86400LL
       * (int)(((v23 / 100) >> 2) + ((1461 * v23) >> 2) + v24 + (((unsigned int)v42 >> 4) & 0x1FF) - v23 / 100 - 719163))
      + (unsigned int)v43 / 0xF4240uLL;
  v42 = &v57; /*0x1004e9fe9*/
  v43 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x1004e9ff7*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v48, &unk_1017BF96A, &v42); /*0x1004ea013*/
  v26 = v21; /*0x1004ea018*/
  v27 = v49; /*0x1004ea01b*/
  v65 = v26; /*0x1004ea030*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v54, v26, v22, v49, v50); /*0x1004ea03a*/
  if ( v48 ) /*0x1004ea049*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v48, 1); /*0x1004ea053*/
  v28 = __src; /*0x1004ea066*/
  v29 = v6; /*0x1004ea06a*/
  v30 = v55; /*0x1004ea06d*/
  result = std::sys::fs::rename::h7934e6142c921014(__src, v29, v55, v56); /*0x1004ea073*/
  v21 = v65; /*0x1004ea07b*/
  if ( result ) /*0x1004ea07f*/
  {
    *a1 = 2; /*0x1004ea085*/
    a1[1] = result; /*0x1004ea08d*/
    v31 = v54; /*0x1004ea092*/
    if ( !v54 ) /*0x1004ea09c*/
      goto LABEL_16; /*0x1004ea09c*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v29); /*0x1004ea106*/
    v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ea115*/
    if ( !v32 ) /*0x1004ea11d*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ea2f6*/
    v33 = (__int64 (__fastcall *)())v32; /*0x1004ea123*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ea126*/
    v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x1004ea135*/
    if ( !v34 ) /*0x1004ea13d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x1004ea33a*/
    qmemcpy(v34, "residual_manifest", 17); /*0x1004ea15b*/
    *(_QWORD *)v33 = 17; /*0x1004ea162*/
    *((_QWORD *)v33 + 1) = v34; /*0x1004ea169*/
    *((_QWORD *)v33 + 2) = 17; /*0x1004ea16d*/
    v69 = 1; /*0x1004ea175*/
    v70 = v33; /*0x1004ea17d*/
    v71 = 1; /*0x1004ea181*/
    v66 = 0; /*0x1004ea189*/
    v67 = 8; /*0x1004ea191*/
    v68 = 0; /*0x1004ea199*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1); /*0x1004ea1a1*/
    v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004ea1b0*/
    if ( !v35 ) /*0x1004ea1b8*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004ea307*/
    v36 = (_QWORD *)v35; /*0x1004ea1be*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004ea1c1*/
    v37 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x1004ea1d0*/
    if ( !v37 ) /*0x1004ea1d8*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39); /*0x1004ea34b*/
    *(_QWORD *)((char *)v37 + 31) = 0x79726F7473696820LL; /*0x1004ea1e8*/
    v37[3] = 0x20B088E5A3A1E692LL; /*0x1004ea1f6*/
    v37[2] = 0xBDE5207473656669LL; /*0x1004ea204*/
    v37[1] = 0x6E616D209995E78BLL; /*0x1004ea212*/
    *v37 = 0xAEE686B0E5B2B7E5LL; /*0x1004ea220*/
    *v36 = 39; /*0x1004ea223*/
    v36[1] = v37; /*0x1004ea22a*/
    v36[2] = 39; /*0x1004ea22e*/
    result = v71; /*0x1004ea236*/
    v44 = v71; /*0x1004ea23a*/
    v38 = v69; /*0x1004ea241*/
    v39 = v70; /*0x1004ea245*/
    v43 = v70; /*0x1004ea249*/
    v42 = (unsigned __int64 *)v69; /*0x1004ea250*/
    v40 = v66; /*0x1004ea257*/
    v41 = v67; /*0x1004ea25b*/
    v45 = v66; /*0x1004ea25f*/
    v46 = v67; /*0x1004ea266*/
    v47 = v68; /*0x1004ea271*/
    a1[6] = v68; /*0x1004ea278*/
    a1[5] = v41; /*0x1004ea27d*/
    a1[4] = v40; /*0x1004ea282*/
    a1[3] = result; /*0x1004ea287*/
    a1[2] = v39; /*0x1004ea28c*/
    a1[1] = v38; /*0x1004ea291*/
    a1[7] = 1; /*0x1004ea296*/
    a1[8] = v36; /*0x1004ea29f*/
    a1[9] = 1; /*0x1004ea2a4*/
    *a1 = 11; /*0x1004ea2ad*/
    v31 = v54; /*0x1004ea2b5*/
    if ( !v54 ) /*0x1004ea2bf*/
      goto LABEL_16; /*0x1004ea2bf*/
  }
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v31, 1); /*0x1004ea0a6*/
LABEL_16:
  if ( v58 ) /*0x1004ea0b5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v58, 1); /*0x1004ea0bf*/
LABEL_18:
  if ( v61 ) /*0x1004ea0cb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v61, 1); /*0x1004ea0d6*/
  if ( v51 ) /*0x1004ea0e5*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v51, 1); /*0x1004ea0ef*/
  return result; /*0x1004ea0f4*/
}