// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x1009ab740 d=2
size_t *__fastcall codexmate_lib::platform::process::codex_app_bundle_path::h81c1bf1fb5112bfc(size_t *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // r14
  void *v3; // rax
  size_t v4; // r14
  __int64 v5; // rbx
  size_t v6; // rax
  __int64 v7; // rcx
  size_t v8; // rdx
  __int64 v9; // rbx
  size_t v10; // rcx
  size_t v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rbx
  size_t *v16; // rdx
  size_t v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  unsigned __int64 v20; // rbx
  size_t *v21; // r15
  unsigned __int64 v22; // rbx
  __int64 v23; // r15
  __int64 v24; // r15
  size_t v25; // rbx
  char *v26; // r15
  unsigned __int64 v27; // r13
  size_t v28; // rax
  unsigned __int64 v29; // rbx
  size_t v30; // r14
  char *v32; // rbx
  size_t v33; // rbx
  __int64 v34; // r15
  __int64 v35; // r13
  size_t v36; // [rsp+8h] [rbp-1B8h] BYREF
  size_t v37; // [rsp+10h] [rbp-1B0h]
  char *v38; // [rsp+18h] [rbp-1A8h]
  size_t v39; // [rsp+20h] [rbp-1A0h]
  __int64 v40; // [rsp+28h] [rbp-198h]
  size_t v41; // [rsp+30h] [rbp-190h]
  __int64 v42; // [rsp+38h] [rbp-188h]
  char v43; // [rsp+40h] [rbp-180h]
  __int16 v44; // [rsp+48h] [rbp-178h]
  char *v45; // [rsp+D0h] [rbp-F0h] BYREF
  size_t v46; // [rsp+D8h] [rbp-E8h]
  unsigned __int64 v47; // [rsp+E0h] [rbp-E0h]
  __int64 v48; // [rsp+E8h] [rbp-D8h]
  __int64 v49; // [rsp+F0h] [rbp-D0h]
  size_t v50; // [rsp+F8h] [rbp-C8h] BYREF
  char *v51; // [rsp+100h] [rbp-C0h]
  size_t v52; // [rsp+108h] [rbp-B8h]
  __int64 v53; // [rsp+110h] [rbp-B0h]
  __int64 v54; // [rsp+118h] [rbp-A8h]
  __int64 v55; // [rsp+120h] [rbp-A0h]
  __int64 v56; // [rsp+128h] [rbp-98h]
  size_t v57; // [rsp+130h] [rbp-90h] BYREF
  char *v58; // [rsp+138h] [rbp-88h]
  size_t v59; // [rsp+140h] [rbp-80h]
  __int64 v60; // [rsp+148h] [rbp-78h]
  __int64 v61; // [rsp+150h] [rbp-70h]
  __int64 v62; // [rsp+158h] [rbp-68h]
  __int64 v63; // [rsp+160h] [rbp-60h]
  __int64 v64; // [rsp+168h] [rbp-58h] BYREF
  size_t v65; // [rsp+170h] [rbp-50h]
  __int64 v66; // [rsp+178h] [rbp-48h]
  size_t *v67; // [rsp+180h] [rbp-40h]
  __int64 v68; // [rsp+188h] [rbp-38h]
  size_t v69; // [rsp+190h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009ab757*/
  v1 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1009ab766*/
  if ( !v1 ) /*0x1009ab76e*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1009abe89*/
  v2 = (_QWORD *)v1; /*0x1009ab774*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009ab777*/
  v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1009ab786*/
  if ( !v3 ) /*0x1009ab78e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009abecd*/
  v67 = a1; /*0x1009ab794*/
  qmemcpy(v3, "/Applications", 13); /*0x1009ab7b0*/
  *v2 = 13; /*0x1009ab7b3*/
  v2[1] = v3; /*0x1009ab7ba*/
  v2[2] = 13; /*0x1009ab7be*/
  v64 = 1; /*0x1009ab7c6*/
  v65 = (size_t)v2; /*0x1009ab7ce*/
  v66 = 1; /*0x1009ab7d2*/
  dirs::home_dir::hc82e61f557956e66(&v57); /*0x1009ab7e1*/
  v4 = v57; /*0x1009ab7e6*/
  if ( __OFSUB__(-(__int64)v57, 1) ) /*0x1009ab7f3*/
    goto LABEL_8; /*0x1009ab7f3*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1009ab81b*/
    &v36,
    v58,
    v59,
    "ApplicationsChatGPT.appCFBundleIdentifier/usr/bin/openif application id \"com.openai.codex\" is running then\n"
    "    tell application id \"com.openai.codex\" to quit\n"
    "end if/codex framework.framework//contents/resources/native/bare-modifier-monitor",
    0xCu);
  v5 = v66; /*0x1009ab820*/
  if ( v66 == v64 ) /*0x1009ab828*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(&v64); /*0x1009ab82e*/
  v6 = v65; /*0x1009ab833*/
  v7 = 3 * v5; /*0x1009ab837*/
  *(_QWORD *)(v65 + 8 * v7 + 16) = v38; /*0x1009ab842*/
  v8 = v36; /*0x1009ab847*/
  *(_QWORD *)(v6 + 8 * v7 + 8) = v37; /*0x1009ab855*/
  *(_QWORD *)(v6 + 8 * v7) = v8; /*0x1009ab85a*/
  v9 = v5 + 1; /*0x1009ab85e*/
  v66 = v9; /*0x1009ab861*/
  if ( v4 ) /*0x1009ab868*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab875*/
LABEL_8:
    v9 = v66; /*0x1009ab87a*/
  }
  v10 = v65; /*0x1009ab87e*/
  v68 = 24 * v9; /*0x1009ab89c*/
  v11 = v65 + 24 * v9; /*0x1009ab8a0*/
  v36 = v65; /*0x1009ab8a4*/
  v37 = v65; /*0x1009ab8ab*/
  v48 = v64; /*0x1009ab8b2*/
  v38 = (char *)v64; /*0x1009ab8b9*/
  v39 = v11; /*0x1009ab8c0*/
  v12 = v65; /*0x1009ab8c7*/
  if ( !v9 ) /*0x1009ab8cd*/
  {
LABEL_33:
    if ( v11 != v12 ) /*0x1009abaa6*/
    {
      v22 = (v11 - v12) / 0x18; /*0x1009abaab*/
      v23 = v12 + 8; /*0x1009abaaf*/
      do /*0x1009abac7*/
      {
        if ( *(_QWORD *)(v23 - 8) ) /*0x1009abac9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abada*/
        v23 += 24; /*0x1009abac0*/
        --v22; /*0x1009abac4*/
      }
      while ( v22 ); /*0x1009abac7*/
    }
    if ( v48 ) /*0x1009abaeb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abafd*/
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379(&v36, &unk_10159E887, 15); /*0x1009abb18*/
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v36, &unk_10159E896, 47); /*0x1009abb2c*/
    std::process::Command::output::h737eedd4de2ee22e(&v57, &v36); /*0x1009abb3f*/
    if ( v57 == 0x8000000000000000LL ) /*0x1009abb4b*/
    {
      if ( ((unsigned __int8)v58 & 3) == 1 ) /*0x1009abb5c*/
      {
        v24 = *(_QWORD *)(v58 + 7); /*0x1009abb66*/
        if ( *(_QWORD *)v24 ) /*0x1009abb6a*/
          (*(void (__fastcall **)(_QWORD))v24)(*(_QWORD *)(v58 - 1)); /*0x1009abb75*/
        if ( *(_QWORD *)(v24 + 8) ) /*0x1009abb77*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abb87*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abb99*/
      }
      core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758(&v36); /*0x1009abba8*/
    }
    else
    {
      v56 = v63; /*0x1009abbb6*/
      v55 = v62; /*0x1009abbc1*/
      v54 = v61; /*0x1009abbcc*/
      v53 = v60; /*0x1009abbd7*/
      v52 = v59; /*0x1009abbe2*/
      v51 = v58; /*0x1009abbf7*/
      v50 = v57; /*0x1009abbfe*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::h860e5034304dc758(&v36); /*0x1009abc0c*/
      if ( !(_DWORD)v56 ) /*0x1009abc18*/
      {
        v32 = v51; /*0x1009abd5b*/
        alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v57, v51, v52); /*0x1009abd73*/
        v68 = (__int64)v32; /*0x1009abd78*/
        v36 = 0; /*0x1009abd87*/
        v37 = v59; /*0x1009abd92*/
        v38 = v58; /*0x1009abd99*/
        v39 = v59; /*0x1009abda0*/
        v40 = 0; /*0x1009abda7*/
        v41 = v59; /*0x1009abdb2*/
        v42 = 0xA0000000ALL; /*0x1009abdc3*/
        v43 = 1; /*0x1009abdca*/
        v44 = 0; /*0x1009abdd1*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h78c4ad5f12ad6707( /*0x1009abde8*/
          &v45,
          &v36);
        if ( 2 * v57 ) /*0x1009abdf7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abe0c*/
        if ( v47 >= 2 ) /*0x1009abe1c*/
        {
          v33 = v46; /*0x1009abe8e*/
          if ( v47 >= 0x15 ) /*0x1009abe99*/
          {
            core::slice::sort::stable::driftsort_main::h92256def80d25338(v46, v47, &v57); /*0x1009abede*/
          }
          else
          {
            v34 = 24 * v47; /*0x1009abe9f*/
            v35 = 24; /*0x1009abea3*/
            do /*0x1009abebc*/
            {
              core::slice::sort::shared::smallsort::insert_tail::hc989c611340cefbd(v33, v33 + v35); /*0x1009abeb0*/
              v35 += 24; /*0x1009abeb5*/
            }
            while ( v34 != v35 ); /*0x1009abebc*/
          }
        }
        alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::heffb33c5c9290895(&v45); /*0x1009abe25*/
        v26 = v45; /*0x1009abe2a*/
        v25 = v46; /*0x1009abe31*/
        v27 = v47; /*0x1009abe38*/
        if ( v50 ) /*0x1009abe49*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abe54*/
        if ( v53 ) /*0x1009abe63*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abe75*/
        goto LABEL_54; /*0x1009abe7a*/
      }
      if ( v50 ) /*0x1009abc28*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abc36*/
      if ( v53 ) /*0x1009abc48*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abc56*/
    }
    v25 = 8; /*0x1009abc5b*/
    v26 = nullptr; /*0x1009abc60*/
    v27 = 0; /*0x1009abc63*/
LABEL_54:
    v36 = v25; /*0x1009abc66*/
    v38 = v26; /*0x1009abc76*/
    v37 = v25; /*0x1009abc7d*/
    v39 = v25 + 24 * v27; /*0x1009abc84*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hfc1d0332b231bbc9( /*0x1009abc99*/
      &v57,
      &v36);
    v21 = v67; /*0x1009abca5*/
    if ( v57 == 0x8000000000000000LL ) /*0x1009abca9*/
    {
      *v67 = 0x8000000000000000LL; /*0x1009abcab*/
    }
    else
    {
      v67[2] = v59; /*0x1009abcb4*/
      v28 = v57; /*0x1009abcb8*/
      v21[1] = (size_t)v58; /*0x1009abcc6*/
      *v21 = v28; /*0x1009abcca*/
    }
    if ( v39 != v37 ) /*0x1009abce7*/
    {
      v29 = (v39 - v37) / 0x18; /*0x1009abcec*/
      v30 = v37 + 8; /*0x1009abcf0*/
      do /*0x1009abd07*/
      {
        if ( *(_QWORD *)(v30 - 8) ) /*0x1009abd09*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abd1a*/
        v30 += 24LL; /*0x1009abd00*/
        --v29; /*0x1009abd04*/
      }
      while ( v29 ); /*0x1009abd07*/
    }
    if ( v38 ) /*0x1009abd2b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009abd41*/
    return v21; /*0x1009abd41*/
  }
  v49 = v65 + 24 * v9; /*0x1009ab8d3*/
  v13 = 0; /*0x1009ab8da*/
  v69 = v65; /*0x1009ab8dd*/
  while ( 1 ) /*0x1009ab902*/
  {
    v14 = *(_QWORD *)(v10 + v13); /*0x1009ab902*/
    if ( v14 == 0x8000000000000000LL ) /*0x1009ab909*/
    {
      v12 = v10 + v13 + 24; /*0x1009ab995*/
      v11 = v49; /*0x1009ab99a*/
LABEL_32:
      v37 = v12; /*0x1009aba86*/
      goto LABEL_33; /*0x1009aba86*/
    }
    std::path::Path::_join::hb1a495d4f06b13b8( /*0x1009ab930*/
      &v50,
      *(const void **)(v10 + v13 + 8),
      *(_QWORD *)(v10 + v13 + 16),
      "ChatGPT.appCFBundleIdentifier/usr/bin/openif application id \"com.openai.codex\" is running then\n    tell application id \"com.openai.codex\" to quit\nend if/codex framework.framework//contents/resources/native/bare-modifier-monitor",
      0xBu);
    codexmate_lib::platform::process::codex_macos_bundle_main_executable::h98fd7660930b3f21(&v57, v51, v52); /*0x1009ab94d*/
    if ( v57 != 0x8000000000000000LL ) /*0x1009ab95c*/
      break; /*0x1009ab95c*/
    if ( v50 ) /*0x1009ab968*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab972*/
    if ( v14 ) /*0x1009ab97a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab98b*/
    v13 += 24; /*0x1009ab8f0*/
    v10 = v69; /*0x1009ab8f8*/
    if ( v68 == v13 ) /*0x1009ab8fc*/
    {
      v11 = v49; /*0x1009aba7c*/
      v12 = v49; /*0x1009aba83*/
      goto LABEL_32; /*0x1009aba83*/
    }
  }
  if ( v57 ) /*0x1009ab9a9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab9b7*/
  v15 = v68 - 24; /*0x1009ab9c0*/
  v16 = v67; /*0x1009ab9cb*/
  v67[2] = v52; /*0x1009ab9cf*/
  v17 = v50; /*0x1009ab9d3*/
  v16[1] = (size_t)v51; /*0x1009ab9e1*/
  *v16 = v17; /*0x1009ab9e5*/
  if ( v14 ) /*0x1009ab9eb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009ab9f8*/
  if ( v15 != v13 ) /*0x1009aba00*/
  {
    v18 = v68 - v13 - 24; /*0x1009aba09*/
    v19 = v69 + v13 + 32; /*0x1009aba11*/
    v20 = v18 / 0x18; /*0x1009aba29*/
    do /*0x1009aba37*/
    {
      if ( *(_QWORD *)(v19 - 8) ) /*0x1009aba39*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009aba4a*/
      v19 += 24; /*0x1009aba30*/
      --v20; /*0x1009aba34*/
    }
    while ( v20 ); /*0x1009aba37*/
  }
  if ( v48 ) /*0x1009aba5b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009aba6e*/
  return v67; /*0x1009abd49*/
}