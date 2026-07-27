// __ZN13codexmate_lib4core5relay7manager12RelayManager10deactivate @ 0x100271b90 | 基线 same-set
char *__fastcall codexmate_lib::core::relay::manager::RelayManager::deactivate::h4be0dd80510d3445(
        char *__dst,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  __int64 v8; // rax
  _QWORD *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rdx
  void *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rbx
  char v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rdi
  _QWORD *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rbx
  void *v29; // rax
  void *v30; // r12
  char *v31; // rsi
  char *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rbx
  void *v35; // rax
  void *v36; // r12
  __int64 v37; // rdx
  char *v39; // rdi
  char *v40; // rsi
  int v41; // eax
  _DWORD v42[24]; // [rsp+0h] [rbp-320h] BYREF
  _BYTE v43[24]; // [rsp+60h] [rbp-2C0h] BYREF
  _BYTE v44[16]; // [rsp+78h] [rbp-2A8h] BYREF
  __int64 v45; // [rsp+88h] [rbp-298h]
  char v46; // [rsp+184h] [rbp-19Ch]
  _QWORD v47[37]; // [rsp+188h] [rbp-198h] BYREF
  __int64 v48; // [rsp+2B0h] [rbp-70h]
  __int64 v49; // [rsp+2B8h] [rbp-68h]
  unsigned __int64 v50; // [rsp+2C0h] [rbp-60h]
  __int64 v51; // [rsp+2C8h] [rbp-58h]
  _QWORD *v52; // [rsp+2D0h] [rbp-50h]
  char **v53; // [rsp+2D8h] [rbp-48h]
  _QWORD *v54; // [rsp+2E0h] [rbp-40h]
  int v55; // [rsp+2ECh] [rbp-34h]
  int v56; // [rsp+2F0h] [rbp-30h]
  unsigned __int8 v57; // [rsp+2F7h] [rbp-29h]

  v6 = a2[2]; /*0x100271bb4*/
  if ( *(_QWORD *)(v6 + 16) != 0x8000000000000000LL ) /*0x100271bc0*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v47[1], v6 + 16); /*0x100271cfe*/
    v47[0] = 9; /*0x100271d03*/
    qmemcpy(__dst + 8, v47, 0x60u); /*0x100271d1e*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100271d21*/
    return __dst; /*0x100271d24*/
  }
  v48 = a3; /*0x100271bc9*/
  v8 = a2[4]; /*0x100271bcd*/
  v9 = (_QWORD *)(v8 + 16); /*0x100271bd1*/
  v51 = v8; /*0x100271bd5*/
  v10 = *(_QWORD *)(v8 + 16); /*0x100271bd9*/
  if ( !v10 ) /*0x100271be0*/
    v10 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v8 + 16); /*0x100271d31*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v10); /*0x100271be6*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100271c02*/
  {
    v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, v6, v11, 0x7FFFFFFFFFFFFFFFLL); /*0x100271d39*/
    LOBYTE(v15) = v15 ^ 1; /*0x100271d3e*/
    v55 = v15; /*0x100271d40*/
    if ( *(_BYTE *)(v51 + 24) ) /*0x100271d47*/
      goto LABEL_6; /*0x100271d4d*/
  }
  else
  {
    v55 = 0; /*0x100271c08*/
    if ( *(_BYTE *)(v51 + 24) ) /*0x100271c13*/
    {
LABEL_6:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v6); /*0x100271c1f*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x100271c2e*/
      if ( !v12 ) /*0x100271c36*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x10027219d*/
      v14 = (unsigned __int64)v12; /*0x100271c3c*/
      qmemcpy(v12, "Codex router transition lock is poisoned", 40); /*0x100271c81*/
      if ( !(_BYTE)v55 /*0x1002720c4*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               40,
                               1,
                               v13,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *(_BYTE *)(v51 + 24) = 1; /*0x1002720d5*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v9); /*0x100271cab*/
      *((_QWORD *)__dst + 1) = 10; /*0x100271cb7*/
      *((_QWORD *)__dst + 2) = 40; /*0x100271cbf*/
      __dst[24] = v14; /*0x100271cc7*/
      __dst[31] = HIBYTE(v14); /*0x100271cd2*/
      *(_WORD *)(__dst + 29) = HIDWORD(v14) >> 8; /*0x100271cda*/
      *(_DWORD *)(__dst + 25) = v14 >> 8; /*0x100271cdf*/
      *((_QWORD *)__dst + 4) = 40; /*0x100271ce3*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100271ceb*/
      return __dst; /*0x100271cee*/
    }
  }
  v49 = a4; /*0x100271d53*/
  v50 = 0x8000000000000000LL; /*0x100271d57*/
  v54 = v9; /*0x100271d72*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x100271d76*/
    v47,
    a2 + 5,
    &unk_1015DE2B9,
    29);
  v16 = v47[0]; /*0x100271d7b*/
  v17 = v47[1]; /*0x100271d82*/
  v18 = v47[2]; /*0x100271d89*/
  if ( v47[0] == 11 ) /*0x100271d95*/
  {
    v57 = v47[2]; /*0x100271d9b*/
    v53 = (char **)v47[1]; /*0x100271d9f*/
    v19 = a2[1]; /*0x100271da3*/
    v52 = (_QWORD *)(v19 + 16); /*0x100271dab*/
    v20 = v19; /*0x100271daf*/
    v21 = *(_QWORD *)(v19 + 16); /*0x100271db2*/
    if ( !v21 ) /*0x100271db9*/
      v21 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v52); /*0x1002720e7*/
    v22 = v54; /*0x100271dbf*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v21); /*0x100271dc3*/
    v24 = v49; /*0x100271dc8*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100271de3*/
    {
      v41 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, a2 + 5, v23, 0x7FFFFFFFFFFFFFFFLL); /*0x1002720ef*/
      LOBYTE(v41) = v41 ^ 1; /*0x1002720fa*/
      v56 = v41; /*0x1002720fc*/
      if ( !*(_BYTE *)(v20 + 24) ) /*0x100272106*/
        goto LABEL_17; /*0x100272106*/
    }
    else
    {
      v56 = 0; /*0x100271de9*/
      if ( !*(_BYTE *)(v20 + 24) ) /*0x100271df0*/
      {
LABEL_17:
        v25 = v20 + 32; /*0x100271dfd*/
        _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x100271e08*/
          v43,
          v20 + 32);
        if ( !(_BYTE)v56 /*0x100272162*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v43,
                                 v25,
                                 v26,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v20 + 24) = 1; /*0x10027216f*/
        }
        v27 = *v52; /*0x100271e34*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v52); /*0x100271e37*/
        if ( v46 == 1 ) /*0x100271e43*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v25); /*0x100271e49*/
          v28 = 107; /*0x100271e4e*/
          v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(107, 1); /*0x100271e5d*/
          if ( v29 ) /*0x100271e65*/
          {
            v30 = v29; /*0x100271e6b*/
            v31 = (char *)&unk_1015DEC2E; /*0x100271e6e*/
            memcpy(v29, &unk_1015DEC2E, 0x6Bu); /*0x100271e7d*/
            *((_QWORD *)__dst + 1) = 10; /*0x100271e82*/
            *((_QWORD *)__dst + 2) = 107; /*0x100271e8a*/
            *((_QWORD *)__dst + 3) = v30; /*0x100271e92*/
            *((_QWORD *)__dst + 4) = 107; /*0x100271e96*/
LABEL_28:
            v22 = v54; /*0x100271f79*/
LABEL_29:
            *(_QWORD *)__dst = v50; /*0x100271f7d*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v43); /*0x100271f8b*/
            if ( (v57 & 1) == 0 /*0x100272179*/
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
              && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                     v43,
                                     v31,
                                     v37,
                                     0x7FFFFFFFFFFFFFFFLL) )
            {
              *((_BYTE *)v53 + 8) = 1; /*0x10027218a*/
            }
            v32 = *v53; /*0x100271fb7*/
            std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v53); /*0x100271fba*/
            goto LABEL_32; /*0x100271fba*/
          }
        }
        else
        {
          v47[0] = v48; /*0x100271edf*/
          v47[1] = v24; /*0x100271ee6*/
          v34 = v45; /*0x100271eed*/
          alloc::vec::Vec$LT$T$C$A$GT$::retain::h3e1ac593d8a74a89(v44, v47); /*0x100271efb*/
          if ( v45 || !v34 || !v46 ) /*0x100271f1e*/
          {
            codexmate_lib::core::relay::manager::RelayManager::sync_codex_config::haffd47a484d4cdfa(v47, a2); /*0x10027200a*/
            if ( LODWORD(v47[0]) == 11 ) /*0x100272016*/
            {
              _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x10027202a*/
                v47,
                v43);
              codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(v42, a2, v47); /*0x100272040*/
              if ( v42[0] == 11 ) /*0x10027204c*/
              {
                codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(v47, v43); /*0x10027205c*/
                memcpy(__dst, v47, 0x128u); /*0x100272070*/
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v43); /*0x10027207c*/
                core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x100272089*/
                  v53,
                  v57);
                core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x100272095*/
                  v22,
                  (unsigned __int8)v55);
                return __dst; /*0x10027209a*/
              }
              v39 = __dst + 8; /*0x1002720ac*/
              v40 = (char *)v42; /*0x1002720b0*/
            }
            else
            {
              v39 = __dst + 8; /*0x10027209f*/
              v40 = (char *)v47; /*0x1002720a3*/
            }
            qmemcpy(v39, v40, 0x60u); /*0x1002720bc*/
            v31 = v40 + 96; /*0x1002720bc*/
            goto LABEL_29; /*0x1002720bc*/
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v44, v47); /*0x100271f24*/
          v28 = 123; /*0x100271f29*/
          v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(123, 1); /*0x100271f38*/
          if ( v35 ) /*0x100271f40*/
          {
            v36 = v35; /*0x100271f46*/
            v31 = (char *)&unk_1015DE2EA; /*0x100271f49*/
            memcpy(v35, &unk_1015DE2EA, 0x7Bu); /*0x100271f58*/
            *((_QWORD *)__dst + 1) = 10; /*0x100271f5d*/
            *((_QWORD *)__dst + 2) = 123; /*0x100271f65*/
            *((_QWORD *)__dst + 3) = v36; /*0x100271f6d*/
            *((_QWORD *)__dst + 4) = 123; /*0x100271f71*/
            goto LABEL_28; /*0x100271f71*/
          }
        }
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x1002721ac*/
      }
    }
    v47[0] = v52; /*0x100272110*/
    LOBYTE(v47[1]) = v56; /*0x10027211a*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, v47, &off_10195E740, &off_10195DAB0); /*0x100272141*/
  }
  v31 = (char *)&v47[2] + 1; /*0x100271ea3*/
  v32 = __dst + 25; /*0x100271eaa*/
  memcpy(__dst + 25, (char *)&v47[2] + 1, 0x4Fu); /*0x100271eb3*/
  *((_QWORD *)__dst + 1) = v16; /*0x100271eb8*/
  *((_QWORD *)__dst + 2) = v17; /*0x100271ebc*/
  __dst[24] = v18; /*0x100271ec0*/
  *(_QWORD *)__dst = v50; /*0x100271ec8*/
  v22 = v54; /*0x100271ecb*/
LABEL_32:
  if ( !(_BYTE)v55 /*0x100272148*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v32,
                           v31,
                           v33,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v51 + 24) = 1; /*0x100272159*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v22); /*0x100271fe6*/
  return __dst; /*0x100271fee*/
}