// __ZN13codexmate_lib4core6skills20publish_staged_skill @ 0x10034e7a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::skills::publish_staged_skill::hf7483d16f4f52114(
        void *a1,
        __int64 a2,
        void *a3,
        size_t a4,
        __int64 a5,
        signed __int64 a6)
{
  __int64 v9; // rbx
  char v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 result; // rax
  _QWORD *v14; // rcx
  bool v15; // zf
  _QWORD *v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rbx
  void *v30; // rdi
  size_t v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  void *v35; // r14
  __int64 v36; // r13
  __int64 v37; // rbx
  __int64 v38; // r15
  __int64 v39; // rsi
  void *v40; // r12
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r15
  __int64 v45; // rsi
  __int64 v46; // r13
  __int64 v47; // rbx
  __int64 v48; // rsi
  void *v49; // rax
  _QWORD __src[23]; // [rsp+0h] [rbp-260h] BYREF
  _QWORD __dst[23]; // [rsp+B8h] [rbp-1A8h] BYREF
  _QWORD v52[3]; // [rsp+170h] [rbp-F0h] BYREF
  _QWORD v53[3]; // [rsp+188h] [rbp-D8h] BYREF
  _QWORD v54[2]; // [rsp+1A0h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+1B0h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+1B8h] [rbp-A8h]
  __int64 v57; // [rsp+1C0h] [rbp-A0h]
  __int64 v58; // [rsp+1C8h] [rbp-98h]
  _QWORD v59[5]; // [rsp+1D0h] [rbp-90h] BYREF
  __int64 v60; // [rsp+1F8h] [rbp-68h]
  __int64 v61; // [rsp+200h] [rbp-60h] BYREF
  __int64 v62; // [rsp+208h] [rbp-58h]
  __int64 v63; // [rsp+210h] [rbp-50h] BYREF
  void *v64; // [rsp+218h] [rbp-48h]
  size_t __n; // [rsp+220h] [rbp-40h]
  void *v66; // [rsp+228h] [rbp-38h]
  void *v67; // [rsp+230h] [rbp-30h]

  v67 = (void *)a6; /*0x10034e7b4*/
  v58 = a5; /*0x10034e7b8*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(__src); /*0x10034e7d5*/
  __dst[0] = __src; /*0x10034e7da*/
  __dst[1] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x10034e7e8*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v55, &unk_1017BC7E6, __dst); /*0x10034e804*/
  v9 = v56; /*0x10034e809*/
  std::path::Path::_with_file_name::h86e79e0aa4e97973(&v63, a3, a4, v56, v57); /*0x10034e824*/
  v66 = a1; /*0x10034e829*/
  if ( v55 ) /*0x10034e837*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v55, 1); /*0x10034e841*/
  std::sys::fs::metadata::h32fa16d3052ea535(__dst, a3, a4); /*0x10034e853*/
  v10 = __dst[0]; /*0x10034e858*/
  if ( LOBYTE(__dst[0]) ) /*0x10034e863*/
  {
    if ( (__dst[1] & 3) == 1 ) /*0x10034e874*/
    {
      v60 = __dst[1] - 1LL; /*0x10034e87a*/
      v62 = *(_QWORD *)(__dst[1] - 1LL); /*0x10034e882*/
      v11 = *(_QWORD *)(__dst[1] + 7LL); /*0x10034e886*/
      if ( *(_QWORD *)v11 ) /*0x10034e88a*/
        (*(void (__fastcall **)(__int64))v11)(v62); /*0x10034e896*/
      v12 = *(_QWORD *)(v11 + 8); /*0x10034e89c*/
      if ( v12 ) /*0x10034e8a3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v12, *(_QWORD *)(v11 + 16)); /*0x10034e8a9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, 24, 8); /*0x10034e8bc*/
    }
  }
  else
  {
    result = std::sys::fs::rename::h7934e6142c921014(a3, a4, v64, __n); /*0x10034e8d1*/
    if ( result ) /*0x10034e8d9*/
    {
      v14 = v66; /*0x10034e8db*/
      *((_QWORD *)v66 + 1) = 2; /*0x10034e8df*/
      v14[2] = result; /*0x10034e8e7*/
LABEL_60:
      *v14 = 2; /*0x10034ede4*/
      goto LABEL_61; /*0x10034ede4*/
    }
  }
  result = std::sys::fs::rename::h7934e6142c921014(*(void **)(a2 + 8), *(_QWORD *)(a2 + 16), a3, a4); /*0x10034e8fe*/
  if ( result ) /*0x10034e906*/
  {
    v59[0] = result; /*0x10034e90c*/
    v15 = v10 == 0; /*0x10034e913*/
    v16 = v66; /*0x10034e916*/
    if ( v15 && (v17 = result, v18 = std::sys::fs::rename::h7934e6142c921014(v64, __n, a3, a4), result = v17, v18) ) /*0x10034e93f*/
    {
      __src[0] = v18; /*0x10034e945*/
      __dst[0] = v59; /*0x10034e953*/
      __dst[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10034e961*/
      __dst[2] = __src; /*0x10034e96f*/
      __dst[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10034e976*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v52, &unk_1017BC800, __dst); /*0x10034e992*/
      v19 = v52[0]; /*0x10034e997*/
      if ( (__src[0] & 3) == 1 ) /*0x10034e9ad*/
      {
        v20 = __src[0] - 1LL; /*0x10034e9af*/
        v21 = *(_QWORD *)(__src[0] - 1LL); /*0x10034e9b3*/
        v22 = *(_QWORD *)(__src[0] + 7LL); /*0x10034e9b7*/
        if ( *(_QWORD *)v22 ) /*0x10034e9bb*/
          (*(void (__fastcall **)(__int64))v22)(v21); /*0x10034e9c7*/
        v23 = *(_QWORD *)(v22 + 8); /*0x10034e9c9*/
        if ( v23 ) /*0x10034e9d0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v23, *(_QWORD *)(v22 + 16)); /*0x10034e9d9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 24, 8); /*0x10034e9eb*/
      }
      v16[1] = 10; /*0x10034e9f7*/
      v16[2] = v19; /*0x10034ea00*/
      v24 = v52[2]; /*0x10034ea08*/
      v16[3] = v52[1]; /*0x10034ea0c*/
      v16[4] = v24; /*0x10034ea11*/
      *v16 = 2; /*0x10034ea16*/
      result = v59[0]; /*0x10034ea1e*/
      if ( (v59[0] & 3) == 1 ) /*0x10034ea2d*/
      {
        v25 = v59[0] - 1LL; /*0x10034ea33*/
        v26 = *(_QWORD *)(v59[0] - 1LL); /*0x10034ea37*/
        v27 = *(_QWORD *)(v59[0] + 7LL); /*0x10034ea3b*/
        if ( *(_QWORD *)v27 ) /*0x10034ea3f*/
          (*(void (__fastcall **)(__int64))v27)(v26); /*0x10034ea4a*/
        v28 = *(_QWORD *)(v27 + 8); /*0x10034ea4c*/
        if ( v28 ) /*0x10034ea53*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x10034ea5c*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x10034ea6e*/
      }
    }
    else
    {
      v16[1] = 2; /*0x10034ea78*/
      v16[2] = result; /*0x10034ea81*/
      *v16 = 2; /*0x10034ea86*/
    }
    goto LABEL_61; /*0x10034ea73*/
  }
  *(_BYTE *)(a2 + 24) = 1; /*0x10034ea93*/
  std::path::Path::_join::hb1a495d4f06b13b8(__dst, a3, a4, &unk_1015E3AD8, 8); /*0x10034eab2*/
  v29 = __dst[1]; /*0x10034eab7*/
  codexmate_lib::core::skills::load_skill_summary::h78677cb906cb96ee( /*0x10034eada*/
    __src,
    __dst[1],
    __dst[2],
    v58,
    (signed __int64)v67);
  if ( __dst[0] ) /*0x10034eae9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, __dst[0], 1); /*0x10034eaf3*/
  if ( LODWORD(__src[0]) == 2 ) /*0x10034eaff*/
  {
    v30 = a3; /*0x10034eb05*/
    v31 = a4; /*0x10034eb08*/
    v32 = std::sys::fs::remove_dir_all::h50b3bc76069a86c9(a3, a4); /*0x10034eb0b*/
    if ( (v32 & 3) == 1 ) /*0x10034eb18*/
    {
      v67 = (void *)(v32 - 1); /*0x10034ed19*/
      v46 = *(_QWORD *)(v32 - 1); /*0x10034ed1d*/
      v47 = *(_QWORD *)(v32 + 7); /*0x10034ed21*/
      if ( *(_QWORD *)v47 ) /*0x10034ed25*/
        (*(void (__fastcall **)(__int64))v47)(v46); /*0x10034ed30*/
      v48 = *(_QWORD *)(v47 + 8); /*0x10034ed32*/
      if ( v48 ) /*0x10034ed39*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v48, *(_QWORD *)(v47 + 16)); /*0x10034ed42*/
      v31 = 24; /*0x10034ed47*/
      v30 = v67; /*0x10034ed51*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 24, 8); /*0x10034ed55*/
      if ( v10 ) /*0x10034ed5d*/
        goto LABEL_57; /*0x10034ed5d*/
    }
    else if ( v10 ) /*0x10034eb21*/
    {
      goto LABEL_57; /*0x10034eb21*/
    }
    v30 = v64; /*0x10034eb27*/
    v31 = __n; /*0x10034eb2b*/
    v33 = std::sys::fs::rename::h7934e6142c921014(v64, __n, a3, a4); /*0x10034eb35*/
    if ( v33 ) /*0x10034eb3d*/
    {
      v59[0] = v33; /*0x10034eb43*/
      __dst[0] = v59; /*0x10034eb51*/
      __dst[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10034eb5f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v53, &unk_1017BC8A2, __dst); /*0x10034eb7b*/
      v34 = v53[0]; /*0x10034eb80*/
      v35 = (void *)v53[1]; /*0x10034eb87*/
      v36 = v53[2]; /*0x10034eb8e*/
      if ( (v59[0] & 3) == 1 ) /*0x10034eba4*/
      {
        v67 = (void *)(v59[0] - 1LL); /*0x10034ebaa*/
        v37 = *(_QWORD *)(v59[0] - 1LL); /*0x10034ebae*/
        v38 = *(_QWORD *)(v59[0] + 7LL); /*0x10034ebb2*/
        if ( *(_QWORD *)v38 ) /*0x10034ebb6*/
          (*(void (__fastcall **)(__int64))v38)(v37); /*0x10034ebc1*/
        v39 = *(_QWORD *)(v38 + 8); /*0x10034ebc3*/
        if ( v39 ) /*0x10034ebca*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v39, *(_QWORD *)(v38 + 16)); /*0x10034ebd3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, 24, 8); /*0x10034ebe6*/
      }
      result = 10; /*0x10034ebeb*/
LABEL_59:
      v14 = v66; /*0x10034edd0*/
      *((_QWORD *)v66 + 1) = result; /*0x10034edd4*/
      v14[2] = v34; /*0x10034edd8*/
      v14[3] = v35; /*0x10034eddc*/
      v14[4] = v36; /*0x10034ede0*/
      goto LABEL_60; /*0x10034ede0*/
    }
LABEL_57:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v31); /*0x10034ed63*/
    v34 = 33; /*0x10034ed68*/
    v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x10034ed78*/
    if ( !v49 ) /*0x10034ed80*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x10034ee1e*/
    v35 = v49; /*0x10034ed86*/
    qmemcpy(v49, "Published skill failed validation", 33); /*0x10034edbd*/
    result = 9; /*0x10034edc5*/
    v36 = 33; /*0x10034edca*/
    goto LABEL_59; /*0x10034edca*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x10034ec08*/
  v15 = v10 == 0; /*0x10034ec0d*/
  v40 = v66; /*0x10034ec10*/
  if ( v15 ) /*0x10034ec14*/
  {
    v41 = std::sys::fs::remove_dir_all::h50b3bc76069a86c9(v64, __n); /*0x10034ec22*/
    if ( v41 ) /*0x10034ec2a*/
    {
      v61 = v41; /*0x10034ec30*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10034ec42*/
      {
        v54[0] = &v61; /*0x10034ec48*/
        v54[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10034ec56*/
        v59[0] = "codexmate_lib::core::skills"; /*0x10034ec64*/
        v59[1] = 27; /*0x10034ec6b*/
        v59[2] = "codexmate_lib::core::skills"; /*0x10034ec76*/
        v59[3] = 27; /*0x10034ec7a*/
        v59[4] = &off_101961720; /*0x10034ec89*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017BC84A, v54, 2, v59); /*0x10034eca7*/
        v41 = v61; /*0x10034ecac*/
      }
      if ( (v41 & 3) == 1 ) /*0x10034ecb8*/
      {
        v42 = v41 - 1; /*0x10034ecba*/
        v43 = *(_QWORD *)(v41 - 1); /*0x10034ecbe*/
        v44 = *(_QWORD *)(v41 + 7); /*0x10034ecc2*/
        if ( *(_QWORD *)v44 ) /*0x10034ecc6*/
          (*(void (__fastcall **)(__int64))v44)(v43); /*0x10034ecd1*/
        v45 = *(_QWORD *)(v44 + 8); /*0x10034ecd3*/
        if ( v45 ) /*0x10034ecda*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v45, *(_QWORD *)(v44 + 16)); /*0x10034ece3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, 24, 8); /*0x10034ecf5*/
      }
    }
  }
  result = (__int64)memcpy(v40, __dst, 0xB8u); /*0x10034ed09*/
LABEL_61:
  if ( v63 ) /*0x10034edf2*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v63, 1); /*0x10034edfd*/
  return result; /*0x10034ee02*/
}