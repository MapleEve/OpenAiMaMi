// __ZN13codexmate_lib4core5relay7manager12RelayManager6delete @ 0x10027f040 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::delete::h416d4edd721ced6b(
        _QWORD *a1,
        _QWORD **a2,
        void *a3,
        size_t a4)
{
  _QWORD *v6; // rsi
  _QWORD *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // r14
  char v19; // r12
  _QWORD *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  size_t v27; // rbx
  __int64 v28; // r14
  __int64 v29; // r12
  unsigned __int64 v30; // r12
  __int64 v31; // r14
  void *v32; // rsi
  __int64 v33; // rbx
  void *v34; // rax
  void *v35; // r14
  char *v36; // rsi
  char *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rbx
  unsigned __int8 v43; // r14
  __int64 v44; // rcx
  char *v45; // rdi
  _QWORD *v46; // rbx
  unsigned __int8 v47; // r14
  void *v48; // rax
  void *v49; // r14
  char v51; // al
  _QWORD __dst[29]; // [rsp+0h] [rbp-3B0h] BYREF
  char v53[8]; // [rsp+E8h] [rbp-2C8h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-2C0h]
  __int64 v55; // [rsp+F8h] [rbp-2B8h]
  char v56[8]; // [rsp+100h] [rbp-2B0h] BYREF
  __int64 v57; // [rsp+108h] [rbp-2A8h]
  __int64 v58; // [rsp+110h] [rbp-2A0h]
  unsigned __int8 v59; // [rsp+20Ch] [rbp-1A4h]
  _QWORD v60[4]; // [rsp+210h] [rbp-1A0h] BYREF
  _QWORD __src[29]; // [rsp+230h] [rbp-180h] BYREF
  _QWORD v62[3]; // [rsp+318h] [rbp-98h] BYREF
  __int64 v63; // [rsp+330h] [rbp-80h] BYREF
  __int64 v64; // [rsp+338h] [rbp-78h]
  __int64 v65; // [rsp+340h] [rbp-70h]
  void *v66; // [rsp+348h] [rbp-68h] BYREF
  size_t __n; // [rsp+350h] [rbp-60h]
  _QWORD *v68; // [rsp+358h] [rbp-58h]
  _QWORD *v69; // [rsp+360h] [rbp-50h]
  __int64 v70; // [rsp+368h] [rbp-48h]
  void *__s2; // [rsp+370h] [rbp-40h]
  __int64 v72; // [rsp+378h] [rbp-38h]
  int v73; // [rsp+380h] [rbp-30h]
  unsigned __int8 v74; // [rsp+387h] [rbp-29h]

  v66 = a3; /*0x10027f05a*/
  __n = a4; /*0x10027f05e*/
  v6 = a2[2]; /*0x10027f062*/
  if ( !__OFSUB__(0, v6[2]) ) /*0x10027f06c*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__src[1], v6 + 2); /*0x10027f1c6*/
    __src[0] = 9; /*0x10027f1cb*/
    qmemcpy(a1, __src, 0x60u); /*0x10027f1e5*/
    return a1; /*0x10027f1e5*/
  }
  codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997(__src, a3, a4); /*0x10027f089*/
  if ( __src[0] != 0x8000000000000000LL ) /*0x10027f095*/
  {
    a1[3] = __src[2]; /*0x10027f1f4*/
    v15 = __src[0]; /*0x10027f1f8*/
    a1[2] = __src[1]; /*0x10027f206*/
    a1[1] = v15; /*0x10027f20a*/
    *a1 = 9; /*0x10027f20e*/
    return a1; /*0x10027f215*/
  }
  v8 = a2[4]; /*0x10027f09b*/
  v9 = v8[2]; /*0x10027f0a3*/
  if ( !v9 ) /*0x10027f0aa*/
    v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v8 + 2); /*0x10027f222*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9); /*0x10027f0b0*/
  v70 = 0x7FFFFFFFFFFFFFFFLL; /*0x10027f0cc*/
  v69 = v8 + 2; /*0x10027f0d3*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10027f0d7*/
  {
    v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, a3, v10, 0x7FFFFFFFFFFFFFFFLL); /*0x10027f22a*/
    LOBYTE(v16) = v16 ^ 1; /*0x10027f22f*/
    v73 = v16; /*0x10027f231*/
    if ( *((_BYTE *)v8 + 24) ) /*0x10027f234*/
      goto LABEL_7; /*0x10027f23b*/
  }
  else
  {
    v73 = 0; /*0x10027f0dd*/
    if ( *((_BYTE *)v8 + 24) ) /*0x10027f0e4*/
    {
LABEL_7:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, a3); /*0x10027f0f1*/
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x10027f100*/
      if ( !v11 ) /*0x10027f108*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x10027f88c*/
      v14 = (unsigned __int64)v11; /*0x10027f10e*/
      qmemcpy(v11, "Codex router transition lock is poisoned", 40); /*0x10027f153*/
      if ( !(_BYTE)v73 /*0x10027f7c8*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v70) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(40, 1, v12, v13) )
      {
        *((_BYTE *)v8 + 24) = 1; /*0x10027f7d5*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v69); /*0x10027f177*/
      *a1 = 10; /*0x10027f183*/
      a1[1] = 40; /*0x10027f18a*/
      *((_BYTE *)a1 + 16) = v14; /*0x10027f192*/
      *((_BYTE *)a1 + 23) = HIBYTE(v14); /*0x10027f19d*/
      *(_WORD *)((char *)a1 + 21) = HIDWORD(v14) >> 8; /*0x10027f1a5*/
      *(_DWORD *)((char *)a1 + 17) = v14 >> 8; /*0x10027f1aa*/
      a1[3] = 40; /*0x10027f1ae*/
      return a1; /*0x10027f1b6*/
    }
  }
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x10027f258*/
    __src,
    a2 + 5,
    &unk_1015DEADD,
    25);
  v68 = v8; /*0x10027f25d*/
  v17 = __src[0]; /*0x10027f261*/
  v18 = __src[1]; /*0x10027f268*/
  v19 = __src[2]; /*0x10027f26f*/
  if ( __src[0] != 11 ) /*0x10027f27b*/
  {
    v36 = (char *)&__src[2] + 1; /*0x10027f460*/
    v37 = (char *)a1 + 17; /*0x10027f467*/
    memcpy((char *)a1 + 17, (char *)&__src[2] + 1, 0x4Fu); /*0x10027f470*/
    *a1 = v17; /*0x10027f475*/
    a1[1] = v18; /*0x10027f478*/
    *((_BYTE *)a1 + 16) = v19; /*0x10027f47c*/
    v40 = v68; /*0x10027f480*/
LABEL_56:
    if ( !(_BYTE)v73 /*0x10027f83b*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v70) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v37, v36, v38, v39) )
    {
      *((_BYTE *)v40 + 24) = 1; /*0x10027f848*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v69); /*0x10027f79f*/
    return a1; /*0x10027f79f*/
  }
  v74 = __src[2]; /*0x10027f281*/
  v72 = __src[1]; /*0x10027f285*/
  v20 = a2[1]; /*0x10027f289*/
  v21 = v20[2]; /*0x10027f291*/
  if ( !v21 ) /*0x10027f298*/
    v21 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v20 + 2); /*0x10027f7e7*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v21); /*0x10027f29e*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v70) != 0 ) /*0x10027f2b1*/
  {
    v24 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, a2 + 5, v22, v23) ^ 1; /*0x10027f7f6*/
    if ( !*((_BYTE *)v20 + 24) ) /*0x10027f800*/
      goto LABEL_19; /*0x10027f800*/
LABEL_64:
    __src[0] = v20 + 2; /*0x10027f806*/
    LOBYTE(__src[1]) = v24; /*0x10027f80d*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, __src, &off_10195E740, &off_10195DCC0); /*0x10027f834*/
  }
  v24 = 0; /*0x10027f2b7*/
  if ( *((_BYTE *)v20 + 24) ) /*0x10027f2b9*/
    goto LABEL_64; /*0x10027f2c0*/
LABEL_19:
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x10027f2c6*/
    v53,
    v20 + 4);
  if ( !v24 /*0x10027f851*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v70) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v53, v20 + 4, v25, v26) )
  {
    *((_BYTE *)v20 + 24) = 1; /*0x10027f85e*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v20[2]); /*0x10027f2f2*/
  __s2 = v66; /*0x10027f302*/
  v27 = __n; /*0x10027f306*/
  if ( v55 ) /*0x10027f30d*/
  {
    v28 = v54; /*0x10027f313*/
    v29 = 232 * v55; /*0x10027f31a*/
    while ( *(_QWORD *)(v28 + 16) != v27 || memcmp(*(const void **)(v28 + 8), __s2, v27) ) /*0x10027f35c*/
    {
      v28 += 232; /*0x10027f330*/
      v29 -= 232; /*0x10027f337*/
      if ( !v29 ) /*0x10027f33e*/
        goto LABEL_33; /*0x10027f33e*/
    }
    _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec( /*0x10027f368*/
      __src,
      v28);
    memcpy(__dst, __src, sizeof(__dst)); /*0x10027f380*/
    v30 = __dst[0]; /*0x10027f385*/
    if ( (v59 ^ 1 | (__dst[0] == 0x8000000000000000LL)) != 1 ) /*0x10027f3aa*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x10027f6e3*/
      v33 = 107; /*0x10027f6e8*/
      v48 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(107, 1); /*0x10027f6f7*/
      if ( v48 ) /*0x10027f6ff*/
      {
        v49 = v48; /*0x10027f705*/
        v36 = (char *)&unk_1015DEC2E; /*0x10027f708*/
        memcpy(v48, &unk_1015DEC2E, 0x6Bu); /*0x10027f717*/
        *a1 = 10; /*0x10027f71c*/
        a1[1] = 107; /*0x10027f723*/
        a1[2] = v49; /*0x10027f72b*/
        a1[3] = 107; /*0x10027f72f*/
        goto LABEL_52; /*0x10027f72f*/
      }
      goto LABEL_72; /*0x10027f6ff*/
    }
    if ( !(v59 ^ 1 | (__dst[0] == 0x8000000000000000LL)) ) /*0x10027f3b6*/
    {
      v31 = v58; /*0x10027f3c5*/
      __src[0] = v57; /*0x10027f3d4*/
      __src[1] = v57 + 24 * v58; /*0x10027f3db*/
      v32 = __s2; /*0x10027f3e9*/
      if ( (unsigned __int8)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h98eac1e9f6a5bbba( /*0x10027f3f0*/
                              __src,
                              __s2,
                              v27) )
      {
        if ( v31 == 1 ) /*0x10027f401*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v32); /*0x10027f407*/
          v33 = 135; /*0x10027f40c*/
          v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(135, 1); /*0x10027f41b*/
          if ( v34 ) /*0x10027f423*/
          {
            v35 = v34; /*0x10027f429*/
            v36 = (char *)&unk_1015DEAF6; /*0x10027f42c*/
            memcpy(v34, &unk_1015DEAF6, 0x87u); /*0x10027f43b*/
            *a1 = 10; /*0x10027f440*/
            a1[1] = 135; /*0x10027f447*/
            a1[2] = v35; /*0x10027f44f*/
            a1[3] = 135; /*0x10027f453*/
LABEL_52:
            v46 = (_QWORD *)v72; /*0x10027f737*/
            v47 = v74; /*0x10027f73b*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(__dst); /*0x10027f747*/
            v45 = v53; /*0x10027f74c*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v53); /*0x10027f753*/
LABEL_53:
            if ( (v47 & 1) == 0 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v70) != 0 ) /*0x10027f76c*/
            {
              v51 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v45, v36, v41, v44); /*0x10027f868*/
              v46 = (_QWORD *)v72; /*0x10027f86f*/
              if ( !v51 ) /*0x10027f873*/
                *(_BYTE *)(v72 + 8) = 1; /*0x10027f879*/
            }
            v37 = (char *)*v46; /*0x10027f772*/
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v46); /*0x10027f775*/
            v40 = v68; /*0x10027f77a*/
            goto LABEL_56; /*0x10027f77a*/
          }
LABEL_72:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v33); /*0x10027f893*/
        }
      }
    }
  }
  else
  {
LABEL_33:
    __dst[0] = 0x8000000000000000LL; /*0x10027f489*/
    v30 = 0x8000000000000000LL; /*0x10027f49a*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::retain::hf8db798f999f4a90(v53, &v66); /*0x10027f4a8*/
  __src[0] = __s2; /*0x10027f4b8*/
  __src[1] = v27; /*0x10027f4bf*/
  alloc::vec::Vec$LT$T$C$A$GT$::retain::h3e1ac593d8a74a89(v56, __src); /*0x10027f4cd*/
  if ( v30 != 0x8000000000000000LL ) /*0x10027f4d5*/
  {
    codexmate_lib::core::relay::manager::RelayManager::sync_codex_config::haffd47a484d4cdfa(__src, a2); /*0x10027f662*/
    if ( LODWORD(__src[0]) != 11 /*0x10027f68e*/
      || (codexmate_lib::core::relay::manager::RelayManager::assert_provider_removed_from_codex_files::hd6387d5a33da3ad5(
            __src,
            *a2,
            __s2,
            v27),
          LODWORD(__src[0]) != 11) )
    {
      qmemcpy(a1, __src, 0x60u); /*0x10027f6a3*/
      v36 = (char *)&__src[12]; /*0x10027f6a3*/
      goto LABEL_52; /*0x10027f6a3*/
    }
  }
  codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(__src, a2, v53); /*0x10027f4ef*/
  if ( LODWORD(__src[0]) != 11 ) /*0x10027f4fb*/
  {
    qmemcpy(a1, __src, 0x60u); /*0x10027f6ba*/
    v36 = (char *)&__src[12]; /*0x10027f6ba*/
    v45 = (char *)(a1 + 12); /*0x10027f6ba*/
    v44 = 0; /*0x10027f6ba*/
    v46 = (_QWORD *)v72; /*0x10027f6ca*/
    if ( v30 != 0x8000000000000000LL ) /*0x10027f6ce*/
    {
      v45 = (char *)__dst; /*0x10027f6d0*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(__dst); /*0x10027f6d7*/
    }
    v47 = v74; /*0x10027f6dc*/
    goto LABEL_53; /*0x10027f6e1*/
  }
  codexmate_lib::core::relay::keychain::delete_api_key::h9464defffa032412(v62, *a2 + 2, __s2, v27); /*0x10027f51a*/
  v42 = v72; /*0x10027f530*/
  v43 = v74; /*0x10027f534*/
  if ( v62[0] != 0x8000000000000000LL ) /*0x10027f539*/
  {
    v65 = v62[2]; /*0x10027f546*/
    v64 = v62[1]; /*0x10027f558*/
    v63 = v62[0]; /*0x10027f55c*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10027f56e*/
    {
      v60[0] = &v66; /*0x10027f578*/
      v60[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10027f586*/
      v60[2] = &v63; /*0x10027f591*/
      v60[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027f59f*/
      __src[0] = "codexmate_lib::core::relay::manager"; /*0x10027f5ad*/
      __src[1] = 35; /*0x10027f5b4*/
      __src[2] = "codexmate_lib::core::relay::manager"; /*0x10027f5bf*/
      __src[3] = 35; /*0x10027f5c6*/
      __src[4] = &off_10195DCD8; /*0x10027f5d8*/
      log::__private_api::log::h719f4907c7336ae9(&unk_1017BAAE2, v60, 2, __src); /*0x10027f5f9*/
    }
    if ( v63 ) /*0x10027f605*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v63, 1); /*0x10027f610*/
  }
  *a1 = 11; /*0x10027f615*/
  if ( v30 != 0x8000000000000000LL ) /*0x10027f629*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(__dst); /*0x10027f632*/
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x10027f63e*/
    v42,
    v43);
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x10027f64b*/
    v69,
    (unsigned __int8)v73);
  return a1; /*0x10027f7a7*/
}