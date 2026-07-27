// __ZN13codexmate_lib4core10repository10Repository16persist_registry @ 0x100a5b440 | 基线 same-set
double __fastcall codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // rax
  char *v9; // rdx
  void *v10; // r13
  size_t v11; // r12
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rdx
  size_t v17; // rdi
  int v18; // edx
  __int64 v19; // r12
  __int64 v20; // r12
  double result; // xmm0_8
  size_t v22; // r12
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  int v27; // r13d
  __int64 v28; // r12
  char v29; // al
  char *v30; // rcx
  int v31; // edx
  int v32; // edx
  char v33; // cl
  char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  char *v39; // r15
  unsigned __int64 v40; // r12
  void *v41; // rbx
  size_t v42; // r15
  char *v43; // r14
  __int64 v44; // rax
  size_t v45; // r15
  char *v46; // r14
  __int64 v47; // [rsp+0h] [rbp-170h] BYREF
  __int64 v48; // [rsp+8h] [rbp-168h]
  __int64 v49; // [rsp+10h] [rbp-160h]
  unsigned __int64 *v50; // [rsp+18h] [rbp-158h] BYREF
  __int64 v51; // [rsp+20h] [rbp-150h]
  size_t v52; // [rsp+28h] [rbp-148h]
  __int64 v53; // [rsp+30h] [rbp-140h]
  const char *v54; // [rsp+38h] [rbp-138h]
  __int64 v55; // [rsp+40h] [rbp-130h]
  __int64 v56; // [rsp+48h] [rbp-128h]
  char *v57; // [rsp+50h] [rbp-120h]
  __int64 v58; // [rsp+58h] [rbp-118h]
  __int64 v59; // [rsp+60h] [rbp-110h]
  void *v60; // [rsp+68h] [rbp-108h]
  unsigned __int64 *v61; // [rsp+70h] [rbp-100h]
  char *v62; // [rsp+B0h] [rbp-C0h]
  __int64 v63; // [rsp+B8h] [rbp-B8h] BYREF
  void *v64; // [rsp+C0h] [rbp-B0h]
  size_t v65; // [rsp+C8h] [rbp-A8h]
  unsigned __int64 v66; // [rsp+D0h] [rbp-A0h]
  __int64 (__fastcall *v67)(_QWORD, _QWORD); // [rsp+D8h] [rbp-98h]
  __int64 v68; // [rsp+E0h] [rbp-90h]
  char *v69; // [rsp+E8h] [rbp-88h]
  __int64 v70; // [rsp+F0h] [rbp-80h]
  char v71; // [rsp+F8h] [rbp-78h]
  _BYTE v72[7]; // [rsp+F9h] [rbp-77h]
  __int64 v73; // [rsp+100h] [rbp-70h]
  int v74; // [rsp+108h] [rbp-68h]
  char v75; // [rsp+10Ch] [rbp-64h]
  _DWORD v76[2]; // [rsp+110h] [rbp-60h] BYREF
  char *v77; // [rsp+118h] [rbp-58h] BYREF
  __int64 v78; // [rsp+120h] [rbp-50h]
  unsigned __int64 v79; // [rsp+128h] [rbp-48h] BYREF
  char *v80; // [rsp+130h] [rbp-40h]
  __int64 v81; // [rsp+138h] [rbp-38h]
  size_t __n; // [rsp+140h] [rbp-30h]

  v8 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820((_QWORD *)a2); /*0x100a5b463*/
  if ( v8 ) /*0x100a5b46b*/
  {
    *a1 = 2; /*0x100a5b46d*/
    a1[1] = v8; /*0x100a5b474*/
    return result; /*0x100a5b478*/
  }
  if ( a4 ) /*0x100a5b480*/
  {
    v10 = *(void **)(a2 + 224); /*0x100a5b486*/
    v11 = *(_QWORD *)(a2 + 232); /*0x100a5b48d*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v50, v10, v11); /*0x100a5b4a1*/
    if ( (_DWORD)v50 == 1 ) /*0x100a5b4ad*/
    {
      if ( (v51 & 3) != 1 ) /*0x100a5b4be*/
        goto LABEL_27; /*0x100a5b4be*/
      __n = v51 - 1; /*0x100a5b4c8*/
      v12 = *(_QWORD *)(v51 - 1); /*0x100a5b4cc*/
      v13 = *(_QWORD *)(v51 + 7); /*0x100a5b4d0*/
      if ( *(_QWORD *)v13 ) /*0x100a5b4d4*/
        (*(void (__fastcall **)(__int64))v13)(v12); /*0x100a5b4e0*/
      v14 = *(_QWORD *)(v13 + 8); /*0x100a5b4e2*/
      if ( v14 ) /*0x100a5b4ea*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16)); /*0x100a5b4f4*/
      v15 = 24; /*0x100a5b4f9*/
      v16 = 8; /*0x100a5b4fe*/
      v17 = __n; /*0x100a5b503*/
      goto LABEL_26; /*0x100a5b507*/
    }
    __n = v11; /*0x100a5b50c*/
    v63 = std::time::SystemTime::now::h1fe79e41f9d5677f(&v50, v10); /*0x100a5b515*/
    LODWORD(v64) = v18; /*0x100a5b51c*/
    v19 = 0; /*0x100a5b522*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v50, &v63, 0, 0); /*0x100a5b537*/
    if ( !(_BYTE)v50 ) /*0x100a5b543*/
      v19 = v51; /*0x100a5b545*/
    v63 = v19; /*0x100a5b54c*/
    v50 = (unsigned __int64 *)&v63; /*0x100a5b55a*/
    v51 = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100a5b568*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v47, &unk_1017C8F86, &v50); /*0x100a5b584*/
    v20 = v48; /*0x100a5b597*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v63, *(_QWORD *)(a2 + 296), *(_QWORD *)(a2 + 304), v48, v49); /*0x100a5b5af*/
    if ( v47 ) /*0x100a5b5be*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v47, 1); /*0x100a5b5c8*/
    v22 = (size_t)v64; /*0x100a5b5cd*/
    if ( (std::sys::fs::copy::hcda968f022f0a0e3(v10, __n, v64, v65) & 1) != 0 ) /*0x100a5b5ec*/
    {
      v77 = v9; /*0x100a5b5f2*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a5b604*/
      {
        v79 = (unsigned __int64)&v77; /*0x100a5b60a*/
        v80 = (char *)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100a5b615*/
        v50 = (unsigned __int64 *)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5b620*/
        v51 = 31; /*0x100a5b627*/
        v52 = (size_t)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5b632*/
        v53 = 31; /*0x100a5b639*/
        v54 = (const char *)&off_101973DE8; /*0x100a5b64b*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017C8F98, &v79, 2, &v50); /*0x100a5b669*/
        v9 = v77; /*0x100a5b66e*/
      }
      if ( ((unsigned __int8)v9 & 3) == 1 ) /*0x100a5b67a*/
      {
        __n = v22; /*0x100a5b67c*/
        v62 = v9 - 1; /*0x100a5b684*/
        v23 = *(_QWORD *)(v9 - 1); /*0x100a5b68b*/
        v24 = *(_QWORD *)(v9 + 7); /*0x100a5b68f*/
        if ( *(_QWORD *)v24 ) /*0x100a5b693*/
          (*(void (__fastcall **)(_QWORD))v24)(*(_QWORD *)(v9 - 1)); /*0x100a5b69f*/
        v25 = *(_QWORD *)(v24 + 8); /*0x100a5b6a1*/
        if ( v25 ) /*0x100a5b6a9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v25, *(_QWORD *)(v24 + 16)); /*0x100a5b6b3*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, 24, 8); /*0x100a5b6c9*/
        v22 = __n; /*0x100a5b6ce*/
      }
    }
    v15 = v63; /*0x100a5b6d2*/
    if ( v63 ) /*0x100a5b6dc*/
    {
      v16 = 1; /*0x100a5b6de*/
      v17 = v22; /*0x100a5b6e3*/
LABEL_26:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v15, v16); /*0x100a5b6e6*/
    }
  }
LABEL_27:
  v26 = 0x8000000000000000LL; /*0x100a5b6eb*/
  v27 = *(_DWORD *)(a3 + 80); /*0x100a5b6f5*/
  v28 = *(_QWORD *)(a3 + 72); /*0x100a5b6f9*/
  if ( __OFSUB__(0, *(_QWORD *)(a3 + 24)) ) /*0x100a5b6ff*/
    v79 = 0x8000000000000000LL; /*0x100a5b705*/
  else
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v79, a3 + 24); /*0x100a5b713*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h97332c104c7ca363(&v50, a3, v9, v26); /*0x100a5b722*/
  v29 = *(_BYTE *)(a3 + 64); /*0x100a5b727*/
  if ( v29 != 2 ) /*0x100a5b72e*/
  {
    v30 = *(char **)(a3 + 48); /*0x100a5b730*/
    v78 = *(_QWORD *)(a3 + 56); /*0x100a5b738*/
    v77 = v30; /*0x100a5b73c*/
    v31 = *(_DWORD *)(a3 + 68); /*0x100a5b744*/
    v76[0] = *(_DWORD *)(a3 + 65); /*0x100a5b748*/
    *(_DWORD *)((char *)v76 + 3) = v31; /*0x100a5b74b*/
  }
  v32 = 4; /*0x100a5b752*/
  if ( v27 >= 5 ) /*0x100a5b757*/
    v32 = v27; /*0x100a5b757*/
  v33 = *(_BYTE *)(a3 + 84); /*0x100a5b75b*/
  v73 = v28; /*0x100a5b760*/
  v66 = v79; /*0x100a5b76c*/
  v67 = (__int64 (__fastcall *)(_QWORD, _QWORD))v80; /*0x100a5b773*/
  v68 = v81; /*0x100a5b77e*/
  v63 = (__int64)v50; /*0x100a5b793*/
  v64 = (void *)v51; /*0x100a5b79a*/
  v65 = v52; /*0x100a5b7a8*/
  v69 = v77; /*0x100a5b7b7*/
  v70 = v78; /*0x100a5b7be*/
  v71 = v29; /*0x100a5b7c2*/
  *(_DWORD *)&v72[3] = *(_DWORD *)((char *)v76 + 3); /*0x100a5b7cb*/
  *(_DWORD *)v72 = v76[0]; /*0x100a5b7ce*/
  v75 = v33; /*0x100a5b7d1*/
  v74 = v32; /*0x100a5b7d4*/
  if ( v29 == 2 ) /*0x100a5b7d9*/
  {
    v69 = nullptr; /*0x100a5b7db*/
    v70 = 0xA0000000FLL; /*0x100a5b7f0*/
    v71 = 0; /*0x100a5b7f4*/
  }
  if ( v33 == 2 ) /*0x100a5b7fb*/
    v75 = 1; /*0x100a5b7fd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(*(_DWORD *)((char *)v76 + 3), v76[0]); /*0x100a5b801*/
  v34 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100a5b810*/
  if ( !v34 ) /*0x100a5b818*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100a5bbc3*/
  v79 = 128; /*0x100a5b81e*/
  v80 = v34; /*0x100a5b826*/
  v81 = 0; /*0x100a5b82a*/
  v50 = &v79; /*0x100a5b836*/
  v51 = (__int64)&unk_10167BCD0; /*0x100a5b844*/
  v52 = 2; /*0x100a5b84b*/
  v53 = 0; /*0x100a5b856*/
  LOBYTE(v54) = 0; /*0x100a5b861*/
  v39 = (char *)codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..repository..RegistryFile$GT$::serialize::hd408f1870c8a0ac9( /*0x100a5b87b*/
                  (__int64)&v63,
                  (__int64)&v50,
                  v35,
                  v36,
                  v37,
                  v38);
  if ( v39 ) /*0x100a5b881*/
  {
    if ( v79 ) /*0x100a5b88a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x100a5b895*/
    goto LABEL_43; /*0x100a5b89a*/
  }
  v40 = v79; /*0x100a5b89c*/
  v39 = v80; /*0x100a5b8a0*/
  if ( v79 == 0x8000000000000000LL ) /*0x100a5b8b1*/
  {
LABEL_43:
    v77 = v39; /*0x100a5b8b7*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100a5b8d3*/
    {
      v79 = (unsigned __int64)&v77; /*0x100a5b8dd*/
      v80 = (char *)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100a5b8e8*/
      v56 = 2; /*0x100a5b8ec*/
      v57 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5b8fe*/
      v58 = 31; /*0x100a5b905*/
      v60 = &unk_1017C8FF3; /*0x100a5b917*/
      v61 = &v79; /*0x100a5b91e*/
      v50 = nullptr; /*0x100a5b925*/
      v51 = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5b930*/
      v52 = 31; /*0x100a5b937*/
      v53 = 0; /*0x100a5b942*/
      v54 = "src/core/repository.rs"; /*0x100a5b954*/
      v55 = 22; /*0x100a5b95b*/
      v59 = 0x93500000001LL; /*0x100a5b970*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v76, &v50); /*0x100a5b982*/
      v39 = v77; /*0x100a5b987*/
    }
    *a1 = 3; /*0x100a5b98b*/
    a1[1] = v39; /*0x100a5b992*/
    goto LABEL_46; /*0x100a5b992*/
  }
  v44 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100a5ba31*/
          *(void **)(a2 + 224),
          *(_QWORD *)(a2 + 232),
          (__int64)v80,
          v81,
          1);
  if ( !v44 ) /*0x100a5ba43*/
  {
    *a1 = 11; /*0x100a5bb3c*/
    if ( v40 ) /*0x100a5bb46*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v40, 1); /*0x100a5bb53*/
    if ( v66 != 0x8000000000000000LL && v66 ) /*0x100a5bb67*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x100a5bb75*/
    v41 = v64; /*0x100a5bb7a*/
    v45 = v65; /*0x100a5bb81*/
    if ( v65 ) /*0x100a5bb8b*/
    {
      v46 = (char *)v64; /*0x100a5bb91*/
      do /*0x100a5bbb2*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v46); /*0x100a5bba3*/
        v46 += 424; /*0x100a5bba8*/
        --v45; /*0x100a5bbaf*/
      }
      while ( v45 ); /*0x100a5bbb2*/
    }
    goto LABEL_52; /*0x100a5bbb2*/
  }
  v77 = (char *)v44; /*0x100a5ba49*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100a5ba5b*/
  {
    v79 = (unsigned __int64)&v77; /*0x100a5ba65*/
    v80 = (char *)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100a5ba70*/
    v56 = 2; /*0x100a5ba74*/
    v57 = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5ba86*/
    v58 = 31; /*0x100a5ba8d*/
    v60 = &unk_1017C8FC6; /*0x100a5ba9f*/
    v61 = &v79; /*0x100a5baa6*/
    v50 = nullptr; /*0x100a5baad*/
    v51 = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5bab8*/
    v52 = 31; /*0x100a5babf*/
    v53 = 0; /*0x100a5baca*/
    v54 = "src/core/repository.rs"; /*0x100a5badc*/
    v55 = 22; /*0x100a5bae3*/
    v59 = 0x93A00000001LL; /*0x100a5baf8*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v76, &v50); /*0x100a5bb0a*/
    v44 = (__int64)v77; /*0x100a5bb0f*/
  }
  *a1 = 2; /*0x100a5bb13*/
  a1[1] = v44; /*0x100a5bb1a*/
  if ( v40 ) /*0x100a5bb21*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v40, 1); /*0x100a5bb32*/
LABEL_46:
  if ( v66 != 0x8000000000000000LL && v66 ) /*0x100a5b9a5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x100a5b9b3*/
  v41 = v64; /*0x100a5b9b8*/
  v42 = v65; /*0x100a5b9bf*/
  if ( v65 ) /*0x100a5b9c9*/
  {
    v43 = (char *)v64; /*0x100a5b9cb*/
    do /*0x100a5b9e2*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v43); /*0x100a5b9d3*/
      v43 += 424; /*0x100a5b9d8*/
      --v42; /*0x100a5b9df*/
    }
    while ( v42 ); /*0x100a5b9e2*/
  }
LABEL_52:
  if ( v63 ) /*0x100a5b9ee*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 424 * v63, 8); /*0x100a5b9ff*/
  return result; /*0x100a5ba04*/
}