// __ZN13codexmate_lib4core5relay16codex_diagnostic23check_catalog_integrity @ 0x1004eab10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_diagnostic::check_catalog_integrity::h34bf487dee059d0c(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v9; // rbx
  __int64 v10; // r13
  void *v11; // rsi
  __int64 v12; // rdi
  void *v13; // rax
  void *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r15
  void *v19; // rax
  void *v20; // r13
  _QWORD *result; // rax
  __int64 v22; // rsi
  void *v23; // rax
  void *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  char *v30; // rbx
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rdx
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // r12
  void *v39; // rsi
  __int64 v40; // rdx
  void *v41; // rax
  void *v42; // r13
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // r12
  _QWORD *v48; // r14
  void *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // r12
  __int64 v55; // rax
  void *v56; // r13
  size_t v57; // r14
  __int64 v58; // r15
  void *v59; // rax
  void *v60; // r15
  _DWORD *v61; // rax
  _DWORD *v62; // rbx
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // r14
  void *v66; // rax
  void *v67; // r13
  __int64 v68; // rbx
  __int64 v69; // [rsp+0h] [rbp-150h] BYREF
  void *v70; // [rsp+8h] [rbp-148h]
  void *v71; // [rsp+10h] [rbp-140h]
  __int64 v72; // [rsp+18h] [rbp-138h]
  void *v73; // [rsp+20h] [rbp-130h]
  void *v74; // [rsp+28h] [rbp-128h]
  _QWORD v75[3]; // [rsp+98h] [rbp-B8h] BYREF
  void **v76; // [rsp+B0h] [rbp-A0h] BYREF
  _QWORD v77[3]; // [rsp+B8h] [rbp-98h] BYREF
  __int64 v78; // [rsp+D0h] [rbp-80h] BYREF
  __int64 v79; // [rsp+D8h] [rbp-78h]
  __int64 v80; // [rsp+E0h] [rbp-70h]
  __int64 *v81; // [rsp+E8h] [rbp-68h]
  void *v82; // [rsp+F0h] [rbp-60h]
  _QWORD *v83; // [rsp+F8h] [rbp-58h] BYREF
  __int64 *v84; // [rsp+100h] [rbp-50h]
  __int64 v85; // [rsp+108h] [rbp-48h]
  __int64 v86; // [rsp+110h] [rbp-40h]
  void *__s1; // [rsp+118h] [rbp-38h]
  __int64 v88; // [rsp+120h] [rbp-30h]

  if ( !*(_BYTE *)(a4 + 292) ) /*0x1004eab2b*/
    return (_QWORD *)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004eacff*/
                       a1,
                       &anon_92869709a5e99ce1936aa4e326b6c562_441,
                       17,
                       &unk_1015FD158,
                       47);
  v84 = a6; /*0x1004eab37*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v78, a2, a3, "codex_router_catalog.jsonmodels_cache.json", 25); /*0x1004eab4f*/
  v9 = v80; /*0x1004eab58*/
  v85 = v79; /*0x1004eab63*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v69, v79, v80); /*0x1004eab6a*/
  v10 = v69; /*0x1004eab6f*/
  v11 = v70; /*0x1004eab76*/
  v12 = v69; /*0x1004eab7d*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1004eab80*/
    v69,
    v70);
  if ( v10 ) /*0x1004eab88*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v11); /*0x1004eab8e*/
    v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x1004eab9d*/
    if ( !v13 ) /*0x1004eaba5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x1004eb481*/
    v14 = v13; /*0x1004eabab*/
    qmemcpy(v13, "catalog_integrity", 17); /*0x1004eabc6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1); /*0x1004eabce*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004eabdd*/
    if ( !v15 ) /*0x1004eabe5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004eb495*/
    v16 = v15; /*0x1004eabeb*/
    *(_BYTE *)(v15 + 4) = 114; /*0x1004eabee*/
    *(_DWORD *)v15 = 1869771365; /*0x1004eabf2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004eabf8*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1004eac07*/
    if ( !v17 ) /*0x1004eac0f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1004eb4a9*/
    v18 = v17; /*0x1004eac15*/
    *(_QWORD *)(v17 + 8) = 0xBCE7B6BBE48796E6LL; /*0x1004eac22*/
    *(_QWORD *)v17 = 0x20676F6C61746143LL; /*0x1004eac30*/
    *(_DWORD *)(v17 + 16) = -1314593350; /*0x1004eac33*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1); /*0x1004eac3b*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(75, 1); /*0x1004eac4a*/
    if ( !v19 ) /*0x1004eac52*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 75); /*0x1004eb4bd*/
    v20 = v19; /*0x1004eac58*/
    result = memcpy(v19, &unk_1015FD18B, 0x4Bu); /*0x1004eac6a*/
    *(_QWORD *)a1 = 17; /*0x1004eac6f*/
    *(_QWORD *)(a1 + 8) = v14; /*0x1004eac77*/
    *(_QWORD *)(a1 + 16) = 17; /*0x1004eac7c*/
    *(_QWORD *)(a1 + 24) = 5; /*0x1004eac85*/
    *(_QWORD *)(a1 + 32) = v16; /*0x1004eac8e*/
    *(_QWORD *)(a1 + 40) = 5; /*0x1004eac93*/
    *(_QWORD *)(a1 + 48) = 20; /*0x1004eac9c*/
    *(_QWORD *)(a1 + 56) = v18; /*0x1004eaca5*/
    *(_QWORD *)(a1 + 64) = 20; /*0x1004eacaa*/
    *(_QWORD *)(a1 + 72) = 75; /*0x1004eacb3*/
    *(_QWORD *)(a1 + 80) = v20; /*0x1004eacbc*/
    *(_QWORD *)(a1 + 88) = 75; /*0x1004eacc1*/
    *(_BYTE *)(a1 + 96) = 1; /*0x1004eacca*/
    goto LABEL_50; /*0x1004eacd0*/
  }
  v22 = v85; /*0x1004ead0b*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v69, v85, v9); /*0x1004ead12*/
  if ( __OFSUB__(-v69, 1) ) /*0x1004ead21*/
  {
    v83 = v70; /*0x1004ead31*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v69, v22); /*0x1004ead35*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x1004ead44*/
    if ( !v23 ) /*0x1004ead4c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x1004eb4d1*/
    v24 = v23; /*0x1004ead52*/
    qmemcpy(v23, "catalog_integrity", 17); /*0x1004ead6d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1); /*0x1004ead75*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004ead84*/
    if ( !v25 ) /*0x1004ead8c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004eb4e5*/
    v26 = v25; /*0x1004ead92*/
    *(_BYTE *)(v25 + 4) = 114; /*0x1004ead95*/
    *(_DWORD *)v25 = 1869771365; /*0x1004ead99*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004ead9f*/
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x1004eadae*/
    if ( !v27 ) /*0x1004eadb6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x1004eb4f9*/
    v28 = v27; /*0x1004eadbc*/
    *(_QWORD *)(v27 + 16) = 0xE5BBAFE895B3E6A0LL; /*0x1004eadc9*/
    *(_QWORD *)(v27 + 8) = 0x97E6B6BBE48796E6LL; /*0x1004eadd7*/
    *(_QWORD *)v27 = 0x20676F6C61746143LL; /*0x1004eade5*/
    *(_WORD *)(v27 + 24) = -26993; /*0x1004eade8*/
    v76 = (void **)&v83; /*0x1004eadf3*/
    v77[0] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004eae01*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v75, &unk_1017B9036, &v76); /*0x1004eae1d*/
    *(_QWORD *)(a1 + 88) = v75[2]; /*0x1004eae29*/
    v29 = v75[0]; /*0x1004eae2e*/
    *(_QWORD *)(a1 + 80) = v75[1]; /*0x1004eae3c*/
    *(_QWORD *)(a1 + 72) = v29; /*0x1004eae41*/
    *(_QWORD *)a1 = 17; /*0x1004eae46*/
    *(_QWORD *)(a1 + 8) = v24; /*0x1004eae4e*/
    *(_QWORD *)(a1 + 16) = 17; /*0x1004eae53*/
    *(_QWORD *)(a1 + 24) = 5; /*0x1004eae5c*/
    *(_QWORD *)(a1 + 32) = v26; /*0x1004eae65*/
    *(_QWORD *)(a1 + 40) = 5; /*0x1004eae6a*/
    *(_QWORD *)(a1 + 48) = 26; /*0x1004eae73*/
    *(_QWORD *)(a1 + 56) = v28; /*0x1004eae7c*/
    *(_QWORD *)(a1 + 64) = 26; /*0x1004eae81*/
    *(_BYTE *)(a1 + 96) = 1; /*0x1004eae8a*/
    result = v83; /*0x1004eae90*/
    if ( ((unsigned __int8)v83 & 3) != 1 ) /*0x1004eae9c*/
      goto LABEL_50; /*0x1004eae9c*/
    v30 = (char *)v83 - 1; /*0x1004eaea2*/
    v31 = *(_QWORD *)((char *)v83 - 1); /*0x1004eaea6*/
    v32 = *(_QWORD *)((char *)v83 + 7); /*0x1004eaeaa*/
    if ( *(_QWORD *)v32 ) /*0x1004eaeae*/
      (*(void (__fastcall **)(__int64))v32)(v31); /*0x1004eaeb9*/
    v33 = *(_QWORD *)(v32 + 8); /*0x1004eaebb*/
    if ( v33 ) /*0x1004eaec2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v33, *(_QWORD *)(v32 + 16)); /*0x1004eaecb*/
    v34 = 24; /*0x1004eaed0*/
    v35 = 8; /*0x1004eaed5*/
    v36 = v30; /*0x1004eaeda*/
    goto LABEL_49; /*0x1004eaedd*/
  }
  v86 = a1; /*0x1004eaee2*/
  v37 = v70; /*0x1004eaee6*/
  v38 = v71; /*0x1004eaeed*/
  __s1 = v70; /*0x1004eaef4*/
  v39 = v71; /*0x1004eaef8*/
  v88 = v69; /*0x1004eaefb*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v70, v71); /*0x1004eaeff*/
  if ( !v40 ) /*0x1004eaf07*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, v39); /*0x1004eb06b*/
    v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x1004eb07a*/
    if ( v49 ) /*0x1004eb082*/
    {
      v42 = v49; /*0x1004eb088*/
      qmemcpy(v49, "catalog_integrity", 17); /*0x1004eb0a3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1); /*0x1004eb0ac*/
      v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004eb0bb*/
      if ( !v50 ) /*0x1004eb0c3*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004eb521*/
      v44 = v50; /*0x1004eb0c9*/
      *(_BYTE *)(v50 + 4) = 114; /*0x1004eb0cc*/
      *(_DWORD *)v50 = 1869771365; /*0x1004eb0d0*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004eb0d6*/
      v45 = 20; /*0x1004eb0db*/
      v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1004eb0ea*/
      v47 = v86; /*0x1004eb0f2*/
      if ( !v51 ) /*0x1004eb0f6*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1004eb532*/
      v48 = (_QWORD *)v51; /*0x1004eb0fc*/
      *(_QWORD *)(v51 + 8) = 0xB8E4B6BBE48796E6LL; /*0x1004eb109*/
      *(_QWORD *)v51 = 0x20676F6C61746143LL; /*0x1004eb117*/
      *(_DWORD *)(v51 + 16) = -1163270214; /*0x1004eb11a*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1); /*0x1004eb122*/
      result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x1004eb131*/
      if ( !result ) /*0x1004eb139*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x1004eb543*/
      goto LABEL_30; /*0x1004eb139*/
    }
LABEL_60:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x1004eb503*/
  }
  v69 = (__int64)__s1; /*0x1004eaf11*/
  v70 = v38; /*0x1004eaf18*/
  v71 = nullptr; /*0x1004eaf1f*/
  v72 = 0; /*0x1004eaf2a*/
  v73 = __s1; /*0x1004eaf35*/
  v74 = v38; /*0x1004eaf3c*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v76, &v69); /*0x1004eaf51*/
  if ( (_BYTE)v76 == 6 ) /*0x1004eaf5d*/
  {
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v77); /*0x1004eaf6a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v77, &v69); /*0x1004eaf6f*/
    v41 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x1004eaf7e*/
    if ( v41 ) /*0x1004eaf86*/
    {
      v42 = v41; /*0x1004eaf8c*/
      qmemcpy(v41, "catalog_integrity", 17); /*0x1004eafa7*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1); /*0x1004eafb0*/
      v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004eafbf*/
      if ( !v43 ) /*0x1004eafc7*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004eb554*/
      v44 = v43; /*0x1004eafcd*/
      *(_BYTE *)(v43 + 4) = 114; /*0x1004eafd0*/
      *(_DWORD *)v43 = 1869771365; /*0x1004eafd4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004eafda*/
      v45 = 32; /*0x1004eafdf*/
      v46 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x1004eafee*/
      v47 = v86; /*0x1004eaff6*/
      if ( !v46 ) /*0x1004eaffa*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x1004eb565*/
      v48 = v46; /*0x1004eb000*/
      v46[3] = 0x8F9DE59F8DE68FBCLL; /*0x1004eb00d*/
      v46[2] = 0xE5BCA0E6204E4F53LL; /*0x1004eb01b*/
      v46[1] = 0x4A20B6BBE48796E6LL; /*0x1004eb029*/
      *v46 = 0x20676F6C61746143LL; /*0x1004eb037*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 1); /*0x1004eb03a*/
      result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x1004eb049*/
      if ( !result ) /*0x1004eb051*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x1004eb061*/
LABEL_30:
      result[1] = 0xE69F94E7B096E68DLL; /*0x1004eb13f*/
      *result = 0x87E981A6E8809CE9LL; /*0x1004eb157*/
      *((_WORD *)result + 8) = -28536; /*0x1004eb15a*/
      *(_QWORD *)v47 = 17; /*0x1004eb160*/
      *(_QWORD *)(v47 + 8) = v42; /*0x1004eb168*/
      *(_QWORD *)(v47 + 16) = 17; /*0x1004eb16d*/
      *(_QWORD *)(v47 + 24) = 5; /*0x1004eb176*/
      *(_QWORD *)(v47 + 32) = v44; /*0x1004eb17f*/
      *(_QWORD *)(v47 + 40) = 5; /*0x1004eb184*/
      *(_QWORD *)(v47 + 48) = v45; /*0x1004eb18d*/
      *(_QWORD *)(v47 + 56) = v48; /*0x1004eb192*/
      *(_QWORD *)(v47 + 64) = v45; /*0x1004eb197*/
      *(_QWORD *)(v47 + 72) = 18; /*0x1004eb19c*/
      *(_QWORD *)(v47 + 80) = result; /*0x1004eb1a5*/
      *(_QWORD *)(v47 + 88) = 18; /*0x1004eb1aa*/
      *(_BYTE *)(v47 + 96) = 1; /*0x1004eb1b3*/
      v34 = v88; /*0x1004eb1b9*/
      if ( !v88 ) /*0x1004eb1c0*/
        goto LABEL_50; /*0x1004eb1c0*/
      v35 = 1; /*0x1004eb1c6*/
      v36 = __s1; /*0x1004eb1cb*/
      goto LABEL_49; /*0x1004eb1cf*/
    }
    goto LABEL_60; /*0x1004eaf86*/
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v76); /*0x1004eb1db*/
  v82 = v38; /*0x1004eb1e0*/
  if ( v84 && (v52 = *(_QWORD *)(a4 + 40)) != 0 ) /*0x1004eb1f8*/
  {
    v81 = &a5[(_QWORD)v84]; /*0x1004eb202*/
    v53 = *(_QWORD *)(a4 + 32); /*0x1004eb206*/
    v54 = 24 * v52; /*0x1004eb20e*/
    while ( 1 ) /*0x1004eb22e*/
    {
      v55 = *a5; /*0x1004eb22e*/
      v84 = a5 + 1; /*0x1004eb235*/
      v56 = *(void **)(v55 + 8); /*0x1004eb239*/
      v57 = *(_QWORD *)(v55 + 16); /*0x1004eb23d*/
      v58 = 0; /*0x1004eb241*/
      while ( *(_QWORD *)(v53 + v58 + 16) != v57 || memcmp(*(const void **)(v53 + v58 + 8), v56, v57) ) /*0x1004eb272*/
      {
        v58 += 24; /*0x1004eb250*/
        if ( v54 == v58 ) /*0x1004eb257*/
          goto LABEL_35; /*0x1004eb257*/
      }
      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004eb282*/
                               v56,
                               v57,
                               __s1) )
        break; /*0x1004eb282*/
LABEL_35:
      a5 = v84; /*0x1004eb220*/
      if ( v84 == v81 ) /*0x1004eb228*/
        goto LABEL_46; /*0x1004eb228*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, v57); /*0x1004eb28b*/
    v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x1004eb29a*/
    if ( !v59 ) /*0x1004eb2a2*/
      goto LABEL_60; /*0x1004eb2a2*/
    v60 = v59; /*0x1004eb2a8*/
    qmemcpy(v59, "catalog_integrity", 17); /*0x1004eb2c3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1); /*0x1004eb2cb*/
    v61 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004eb2da*/
    if ( !v61 ) /*0x1004eb2e2*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004eb576*/
    v62 = v61; /*0x1004eb2e8*/
    *(_DWORD *)((char *)v61 + 3) = 1735289198; /*0x1004eb2eb*/
    *v61 = 1852989815; /*0x1004eb2f2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x1004eb2f8*/
    v63 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(51, 1); /*0x1004eb307*/
    v64 = v86; /*0x1004eb30f*/
    if ( !v63 ) /*0x1004eb313*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 51); /*0x1004eb587*/
    v65 = v63; /*0x1004eb319*/
    *(_QWORD *)(v63 + 40) = 0xB98CE5A885E58CAELL; /*0x1004eb326*/
    *(_QWORD *)(v63 + 32) = 0xE58DB8E420726564LL; /*0x1004eb334*/
    *(_QWORD *)(v63 + 24) = 0x69766F727020849ALL; /*0x1004eb342*/
    *(_QWORD *)(v63 + 16) = 0xE7A894E7AF90E58DLL; /*0x1004eb350*/
    *(_QWORD *)(v63 + 8) = 0x89E593BDE58EB8E4LL; /*0x1004eb35e*/
    *(_QWORD *)v63 = 0x20676F6C61746143LL; /*0x1004eb36c*/
    *(_DWORD *)(v63 + 47) = -1920603719; /*0x1004eb36f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(51, 1); /*0x1004eb377*/
    v66 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(79, 1); /*0x1004eb386*/
    if ( !v66 ) /*0x1004eb38e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 79); /*0x1004eb598*/
    v67 = v66; /*0x1004eb394*/
    result = memcpy(v66, &unk_1015FD1D7, 0x4Fu); /*0x1004eb3a6*/
    *(_QWORD *)v64 = 17; /*0x1004eb3ab*/
    *(_QWORD *)(v64 + 8) = v60; /*0x1004eb3b3*/
    *(_QWORD *)(v64 + 16) = 17; /*0x1004eb3b8*/
    *(_QWORD *)(v64 + 24) = 7; /*0x1004eb3c1*/
    *(_QWORD *)(v64 + 32) = v62; /*0x1004eb3ca*/
    *(_QWORD *)(v64 + 40) = 7; /*0x1004eb3cf*/
    *(_QWORD *)(v64 + 48) = 51; /*0x1004eb3d8*/
    *(_QWORD *)(v64 + 56) = v65; /*0x1004eb3e1*/
    *(_QWORD *)(v64 + 64) = 51; /*0x1004eb3e6*/
    *(_QWORD *)(v64 + 72) = 79; /*0x1004eb3ef*/
    *(_QWORD *)(v64 + 80) = v67; /*0x1004eb3f8*/
    *(_QWORD *)(v64 + 88) = 79; /*0x1004eb3fd*/
    *(_BYTE *)(v64 + 96) = 1; /*0x1004eb406*/
    v68 = v88; /*0x1004eb40c*/
  }
  else
  {
LABEL_46:
    v68 = v88; /*0x1004eb412*/
    result = (_QWORD *)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004eb433*/
                         v86,
                         &anon_92869709a5e99ce1936aa4e326b6c562_441,
                         17,
                         &unk_1015FD226,
                         14);
  }
  if ( !v68 ) /*0x1004eb43b*/
    goto LABEL_50; /*0x1004eb43b*/
  v35 = 1; /*0x1004eb43d*/
  v36 = __s1; /*0x1004eb442*/
  v34 = v68; /*0x1004eb446*/
LABEL_49:
  result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v34, v35); /*0x1004eb449*/
LABEL_50:
  if ( v78 ) /*0x1004eb455*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v78, 1); /*0x1004eb460*/
  return result; /*0x1004eacee*/
}