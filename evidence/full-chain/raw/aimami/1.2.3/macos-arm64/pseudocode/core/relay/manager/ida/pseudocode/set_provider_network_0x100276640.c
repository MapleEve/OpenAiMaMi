// __ZN13codexmate_lib4core5relay7manager12RelayManager20set_provider_network @ 0x100276640 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_provider_network::h6a5f4570f94c9a38(
        unsigned __int64 *__dst,
        __int64 a2,
        void *a3,
        size_t a4,
        int a5)
{
  __int64 v7; // rsi
  __int64 v9; // r12
  __int64 *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r13d
  __int64 v15; // rax
  void *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rdx
  char v22; // cl
  char v23; // r13
  void *v24; // rsi
  __int64 v25; // rdx
  const void *v26; // rdi
  __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // rsi
  void *v31; // rax
  __int64 *v32; // rbx
  char v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  int v38; // edx
  int v39; // ecx
  unsigned int v40; // ecx
  __int64 v41; // rdx
  char v42[8]; // [rsp+8h] [rbp-318h] BYREF
  __int64 v43; // [rsp+10h] [rbp-310h]
  __int64 v44; // [rsp+18h] [rbp-308h]
  _DWORD v45[24]; // [rsp+130h] [rbp-1F0h] BYREF
  _QWORD __src[37]; // [rsp+190h] [rbp-190h] BYREF
  void *__s2; // [rsp+2B8h] [rbp-68h]
  __int64 v48; // [rsp+2C0h] [rbp-60h]
  __int64 v49; // [rsp+2C8h] [rbp-58h]
  int v50; // [rsp+2D4h] [rbp-4Ch]
  unsigned __int64 v51; // [rsp+2D8h] [rbp-48h]
  _QWORD *v52; // [rsp+2E0h] [rbp-40h]
  __int64 *v53; // [rsp+2E8h] [rbp-38h]
  int v54; // [rsp+2F4h] [rbp-2Ch]

  __s2 = a3; /*0x100276654*/
  v7 = *(_QWORD *)(a2 + 16); /*0x100276668*/
  if ( *(_QWORD *)(v7 + 16) != 0x8000000000000000LL ) /*0x100276674*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__src[1], v7 + 16); /*0x1002767ae*/
    __src[0] = 9; /*0x1002767b3*/
    qmemcpy(__dst + 1, __src, 0x60u); /*0x1002767ce*/
    *__dst = 0x8000000000000000LL; /*0x1002767d1*/
    return __dst; /*0x1002767d4*/
  }
  v50 = a5; /*0x10027667d*/
  v51 = 0x8000000000000000LL; /*0x100276681*/
  v48 = a2; /*0x100276685*/
  v9 = *(_QWORD *)(a2 + 32); /*0x100276689*/
  v10 = (__int64 *)(v9 + 16); /*0x10027668d*/
  v11 = *(_QWORD *)(v9 + 16); /*0x100276692*/
  if ( !v11 ) /*0x10027669a*/
    v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v9 + 16); /*0x1002767e1*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11); /*0x1002766a0*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1002766b2*/
  {
    v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v7, v12, v13); /*0x1002767ee*/
    LOBYTE(v14) = v14 ^ 1; /*0x1002767f1*/
    v15 = v48; /*0x1002767fd*/
    if ( *(_BYTE *)(v9 + 24) ) /*0x1002767f5*/
      goto LABEL_6; /*0x100276801*/
LABEL_12:
    v49 = v9; /*0x100276807*/
    v19 = *(_QWORD *)(v15 + 8); /*0x10027680b*/
    v52 = (_QWORD *)(v19 + 16); /*0x100276814*/
    v20 = *(_QWORD *)(v19 + 16); /*0x100276818*/
    v53 = v10; /*0x100276820*/
    v54 = v14; /*0x100276824*/
    if ( !v20 ) /*0x100276828*/
      v20 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v52); /*0x100276b53*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v20); /*0x10027682e*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10027684a*/
    {
      v22 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, v7, v21, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x100276b62*/
      if ( !*(_BYTE *)(v19 + 24) ) /*0x100276b6d*/
        goto LABEL_16; /*0x100276b6d*/
    }
    else
    {
      v22 = 0; /*0x100276850*/
      if ( !*(_BYTE *)(v19 + 24) ) /*0x100276852*/
      {
LABEL_16:
        v23 = v22; /*0x100276860*/
        v24 = (void *)(v19 + 32); /*0x100276863*/
        _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x10027686f*/
          v42,
          v19 + 32);
        if ( !v23 /*0x100276bc7*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v42,
                                 v24,
                                 v25,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v19 + 24) = 1; /*0x100276bd4*/
        }
        v26 = (const void *)*v52; /*0x10027689a*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v52); /*0x10027689d*/
        if ( v44 ) /*0x1002768ac*/
        {
          v27 = v43; /*0x1002768b2*/
          v28 = 232 * v44; /*0x1002768b9*/
          v29 = 0; /*0x1002768c0*/
          while ( 1 ) /*0x1002768dc*/
          {
            if ( *(_QWORD *)(v27 + v29 + 16) == a4 ) /*0x1002768e1*/
            {
              v26 = *(const void **)(v27 + v29 + 8); /*0x1002768e3*/
              v24 = __s2; /*0x1002768e8*/
              if ( !memcmp(v26, __s2, a4) ) /*0x1002768ef*/
                break; /*0x1002768ef*/
            }
            v29 += 232; /*0x1002768d0*/
            if ( v28 == v29 ) /*0x1002768da*/
              goto LABEL_25; /*0x1002768da*/
          }
          if ( *(_BYTE *)(v27 + v29 + 229) == (_BYTE)v50 ) /*0x100276903*/
          {
            codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(__src, v42); /*0x100276917*/
            v30 = (__int64)__src; /*0x10027691c*/
            memcpy(__dst, __src, 0x128u); /*0x10027692b*/
            goto LABEL_28; /*0x100276930*/
          }
          *(_BYTE *)(v27 + v29 + 229) = v50; /*0x1002769e6*/
          chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__src); /*0x1002769f5*/
          v38 = (SLODWORD(__src[0]) >> 13) - 1; /*0x100276a05*/
          v39 = 0; /*0x100276a08*/
          if ( SLODWORD(__src[0]) >> 13 <= 0 ) /*0x100276a0c*/
          {
            v40 = (1 - (SLODWORD(__src[0]) >> 13)) / 0x190u + 1; /*0x100276a20*/
            v38 += 400 * v40; /*0x100276a28*/
            v39 = -146097 * v40; /*0x100276a2a*/
          }
          *(_QWORD *)(v27 + v29 + 216) = 1000 /*0x100276a95*/
                                       * (HIDWORD(__src[0])
                                        + 86400LL
                                        * (((v38 / 100) >> 2)
                                         + ((1461 * v38) >> 2)
                                         + v39
                                         + ((LODWORD(__src[0]) >> 4) & 0x1FF)
                                         - v38 / 100
                                         - 719163))
                                       + LODWORD(__src[1]) / 0xF4240uLL;
          _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x100276aab*/
            __src,
            v42);
          codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(v45, v48, __src); /*0x100276ac2*/
          if ( v45[0] == 11 ) /*0x100276ace*/
          {
            codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(__src, v42); /*0x100276ade*/
            memcpy(__dst, __src, 0x128u); /*0x100276af2*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v42); /*0x100276afe*/
            if ( !(_BYTE)v54 /*0x100276bf9*/
              && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
              && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                     v42,
                                     __src,
                                     v41,
                                     0x7FFFFFFFFFFFFFFFLL) )
            {
              *(_BYTE *)(v49 + 24) = 1; /*0x100276c0a*/
            }
            v36 = *v53; /*0x100276b2a*/
            goto LABEL_31; /*0x100276b2d*/
          }
          qmemcpy(__dst + 1, v45, 0x60u); /*0x100276b42*/
          v30 = (__int64)__src; /*0x100276b42*/
        }
        else
        {
LABEL_25:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v24); /*0x100276932*/
          v30 = 1; /*0x10027693c*/
          v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x100276941*/
          if ( !v31 ) /*0x100276949*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100276c2e*/
          qmemcpy(v31, "provider not found", 18); /*0x100276967*/
          __dst[1] = 10; /*0x100276970*/
          __dst[2] = 18; /*0x100276978*/
          __dst[3] = (unsigned __int64)v31; /*0x100276980*/
          __dst[4] = 18; /*0x100276984*/
        }
        *__dst = v51; /*0x100276990*/
LABEL_28:
        v32 = v53; /*0x100276993*/
        v33 = v54; /*0x100276997*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v42); /*0x1002769ac*/
        if ( !v33 /*0x100276bdf*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v42, v30, v34, v35) )
        {
          *(_BYTE *)(v49 + 24) = 1; /*0x100276bf0*/
        }
        v36 = *v32; /*0x1002769c9*/
LABEL_31:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v36); /*0x1002769cc*/
        return __dst; /*0x1002769cc*/
      }
    }
    __src[0] = v52; /*0x100276b77*/
    LOBYTE(__src[1]) = v22; /*0x100276b7e*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, __src, &off_10195E740, &off_10195DBA0); /*0x100276ba5*/
  }
  v14 = 0; /*0x1002766b8*/
  v15 = v48; /*0x1002766c3*/
  if ( !*(_BYTE *)(v9 + 24) ) /*0x1002766c7*/
    goto LABEL_12; /*0x1002766c7*/
LABEL_6:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v7); /*0x1002766cd*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x1002766dc*/
  if ( !v16 ) /*0x1002766e4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x100276c1d*/
  v18 = (unsigned __int64)v16; /*0x1002766ea*/
  qmemcpy(v16, "Codex router transition lock is poisoned", 40); /*0x10027672f*/
  if ( !(_BYTE)v14 /*0x100276baf*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           40,
                           1,
                           v17,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v9 + 24) = 1; /*0x100276bbc*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10); /*0x100276757*/
  __dst[1] = 10; /*0x100276763*/
  __dst[2] = 40; /*0x10027676b*/
  *((_BYTE *)__dst + 24) = v18; /*0x100276773*/
  *((_BYTE *)__dst + 31) = HIBYTE(v18); /*0x10027677e*/
  *(_WORD *)((char *)__dst + 29) = HIDWORD(v18) >> 8; /*0x100276786*/
  *(_DWORD *)((char *)__dst + 25) = v18 >> 8; /*0x10027678b*/
  __dst[4] = 40; /*0x10027678f*/
  *__dst = v51; /*0x10027679b*/
  return __dst; /*0x1002769d4*/
}