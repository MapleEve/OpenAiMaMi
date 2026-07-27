// __ZN13codexmate_lib4core5relay7manager12RelayManager20ensure_proxy_started @ 0x100274480 | 基线 same-set
volatile signed __int64 *__fastcall codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started::hc950904f39b7e9e1(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int64 *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rsi
  __int16 v10; // bx
  volatile signed __int64 *result; // rax
  __int16 v12; // ax
  __int16 v13; // dx
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  int v21; // eax
  _QWORD *v22; // rdi
  char v23; // of
  volatile signed __int64 **v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rt0
  volatile signed __int64 *v27; // rax
  __int64 v28; // rt0
  __int16 v29; // di
  volatile signed __int64 *v30; // rcx
  __int64 v31; // rt0
  volatile signed __int64 *v32; // rsi
  char **v33; // rdi
  size_t v34; // rbx
  __int64 v35; // r14
  volatile signed __int64 *v36; // rbx
  volatile signed __int64 *v37; // r14
  __int64 v38; // rdi
  __int64 v39; // rdx
  int v40; // ecx
  _QWORD *v41; // rdi
  void *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r13
  volatile signed __int64 *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdx
  char v48; // r14
  __int16 v49; // bx
  volatile signed __int64 *v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rsi
  __int64 v53; // rsi
  __int64 v54; // rax
  _QWORD *v55; // rdi
  __int64 v56; // rdx
  _QWORD *v57; // rbx
  _QWORD *v58; // rdx
  __int64 v59; // rax
  char v60; // bl
  volatile signed __int64 *v61; // rbx
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // rsi
  __int64 v65; // rax
  volatile signed __int64 *v66; // rsi
  volatile signed __int64 *v67; // rdx
  _QWORD *v68; // rdi
  _QWORD *v69; // rdx
  __int64 v70; // rax
  char v71[8]; // [rsp+8h] [rbp-268h] BYREF
  volatile signed __int64 *v72; // [rsp+10h] [rbp-260h]
  void *v73; // [rsp+18h] [rbp-258h]
  size_t v74; // [rsp+20h] [rbp-250h]
  _QWORD v75[3]; // [rsp+28h] [rbp-248h] BYREF
  _QWORD v76[2]; // [rsp+40h] [rbp-230h] BYREF
  _QWORD v77[12]; // [rsp+50h] [rbp-220h] BYREF
  _QWORD v78[30]; // [rsp+B0h] [rbp-1C0h] BYREF
  __int16 v79; // [rsp+1A0h] [rbp-D0h]
  __int16 v80; // [rsp+1A2h] [rbp-CEh]
  char v81; // [rsp+1A4h] [rbp-CCh]
  char *v82; // [rsp+1A8h] [rbp-C8h] BYREF
  __int64 v83; // [rsp+1B0h] [rbp-C0h]
  char *v84; // [rsp+1B8h] [rbp-B8h]
  __int64 v85; // [rsp+1C0h] [rbp-B0h]
  _UNKNOWN **v86; // [rsp+1C8h] [rbp-A8h]
  volatile signed __int64 *v87; // [rsp+1D0h] [rbp-A0h]
  unsigned __int64 v88; // [rsp+1D8h] [rbp-98h]
  volatile signed __int64 *v89; // [rsp+1E0h] [rbp-90h] BYREF
  void *__src; // [rsp+1E8h] [rbp-88h]
  size_t __n; // [rsp+1F0h] [rbp-80h]
  _QWORD *v92; // [rsp+1F8h] [rbp-78h]
  int v93; // [rsp+204h] [rbp-6Ch]
  size_t v94; // [rsp+208h] [rbp-68h] BYREF
  _QWORD *v95; // [rsp+210h] [rbp-60h]
  size_t v96; // [rsp+218h] [rbp-58h] BYREF
  _QWORD *v97; // [rsp+220h] [rbp-50h]
  volatile signed __int64 *v98; // [rsp+228h] [rbp-48h] BYREF
  volatile signed __int64 *v99; // [rsp+230h] [rbp-40h]
  void *v100; // [rsp+238h] [rbp-38h]
  int v101; // [rsp+244h] [rbp-2Ch]

  v3 = (volatile signed __int64 *)a2[7]; /*0x100274497*/
  if ( v3 ) /*0x10027449e*/
  {
    if ( _InterlockedIncrement64(v3) <= 0 ) /*0x1002744a4*/
      goto LABEL_118; /*0x1002744a4*/
    v98 = v3; /*0x1002744ad*/
    v5 = *a2; /*0x1002744b1*/
    v6 = *(_QWORD *)(*a2 + 72LL); /*0x1002744b4*/
    v87 = (volatile signed __int64 *)v5; /*0x1002744b8*/
    std::fs::read_to_string::inner::hcce2334f4117b5b3(v78, v6, *(_QWORD *)(v5 + 80)); /*0x1002744ca*/
    v7 = v78[0]; /*0x1002744d9*/
    v8 = v78[1]; /*0x1002744e0*/
    v88 = 0x8000000000000000LL; /*0x1002744ea*/
    if ( v78[0] == 0x8000000000000000LL ) /*0x1002744f4*/
    {
      v9 = v78[1]; /*0x100274504*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::hc9829f74aca73a19( /*0x100274507*/
        0x8000000000000000LL,
        v78[1]);
      v10 = 0; /*0x10027450c*/
    }
    else
    {
      v9 = v78[2]; /*0x10027458d*/
      v12 = codexmate_lib::core::relay::codex_writer::router_provider_local_port::h7660823adac56076(v78[1], v78[2]); /*0x100274597*/
      LOWORD(v100) = v13; /*0x10027459c*/
      v10 = v12; /*0x1002745a0*/
      if ( v7 ) /*0x1002745a5*/
      {
        v9 = v7; /*0x1002745af*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1002745b2*/
      }
    }
    v14 = a2[3]; /*0x1002745b7*/
    v97 = (_QWORD *)(v14 + 16); /*0x1002745c0*/
    v15 = *(_QWORD *)(v14 + 16); /*0x1002745c4*/
    if ( !v15 ) /*0x1002745cc*/
      v15 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v97); /*0x1002746dd*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v15); /*0x1002745d2*/
    v17 = 0x7FFFFFFFFFFFFFFFLL; /*0x1002745e1*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1002745ee*/
    {
      v21 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v9, v16, 0x7FFFFFFFFFFFFFFFLL); /*0x1002746e5*/
      LOBYTE(v21) = v21 ^ 1; /*0x1002746ea*/
      v101 = v21; /*0x1002746ec*/
      if ( *(_BYTE *)(v14 + 24) ) /*0x1002746ef*/
        goto LABEL_13; /*0x1002746f7*/
    }
    else
    {
      v101 = 0; /*0x1002745f4*/
      if ( *(_BYTE *)(v14 + 24) ) /*0x1002745fb*/
      {
LABEL_13:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v9); /*0x100274609*/
        v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100274618*/
        if ( !v18 ) /*0x100274620*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100275236*/
        v20 = (unsigned __int64)v18; /*0x100274626*/
        qmemcpy(v18, "relay proxy state lock is poisoned", 34); /*0x10027465d*/
        if ( !(_BYTE)v101 /*0x100274b65*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 34,
                                 1,
                                 v19,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v14 + 24) = 1; /*0x100274b72*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v97); /*0x100274690*/
        *(_QWORD *)a1 = 10; /*0x10027469c*/
        *(_QWORD *)(a1 + 8) = 34; /*0x1002746a3*/
        *(_BYTE *)(a1 + 16) = v20; /*0x1002746ab*/
        *(_BYTE *)(a1 + 23) = HIBYTE(v20); /*0x1002746b6*/
        *(_WORD *)(a1 + 21) = HIDWORD(v20) >> 8; /*0x1002746be*/
        *(_DWORD *)(a1 + 17) = v20 >> 8; /*0x1002746c3*/
        *(_QWORD *)(a1 + 24) = 34; /*0x1002746c7*/
LABEL_102:
        result = v98; /*0x100275176*/
        if ( !_InterlockedDecrement64(v98) ) /*0x10027517a*/
          return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfc4bec58dab2eaea(&v98); /*0x100275184*/
        return result; /*0x100275184*/
      }
    }
    v22 = (_QWORD *)(v14 + 32); /*0x1002746fd*/
    v23 = 0; /*0x100274702*/
    if ( *(_QWORD *)(v14 + 32) ) /*0x100274702*/
    {
      v24 = (volatile signed __int64 **)(v14 + 32); /*0x10027470e*/
      if ( (unsigned __int8)codexmate_lib::core::relay::manager::proxy_handle_port_accepts::hc74fa5e0e8f8c6b2( /*0x100274711*/
                              v22,
                              v9,
                              v16,
                              v17) )
      {
        *(_QWORD *)a1 = 11; /*0x10027471a*/
        if ( !(_BYTE)v101 /*0x1002751ac*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v22,
                                 v9,
                                 v25,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v14 + 24) = 1; /*0x1002751b9*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v97); /*0x10027474b*/
        goto LABEL_102; /*0x100274750*/
      }
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100274763*/
      {
        v77[0] = v14 + 48; /*0x10027476e*/
        v77[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x10027477c*/
        v78[6] = 2; /*0x100274783*/
        v78[7] = "codexmate_lib::core::relay::manager"; /*0x100274795*/
        v78[8] = 35; /*0x10027479c*/
        v78[10] = &unk_1017BA072; /*0x1002747ae*/
        v78[11] = v77; /*0x1002747bc*/
        v78[0] = 0; /*0x1002747c3*/
        v78[1] = "codexmate_lib::core::relay::manager"; /*0x1002747ce*/
        v78[2] = 35; /*0x1002747d5*/
        v78[3] = 0; /*0x1002747e0*/
        v78[4] = "src/core/relay/manager.rs"; /*0x1002747f2*/
        v78[5] = 25; /*0x1002747f9*/
        v78[9] = 0x95900000001LL; /*0x10027480e*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v82, v78); /*0x100274823*/
      }
      v23 = 0; /*0x10027482c*/
      if ( *v24 ) /*0x100274828*/
      {
        if ( !_InterlockedDecrement64(*v24) ) /*0x100274831*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb72ce9272227da16(v24); /*0x10027483a*/
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v14 + 40)) ) /*0x100274844*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(v14 + 40); /*0x10027484f*/
      }
      v22 = (_QWORD *)(v14 + 32); /*0x100274854*/
      *v24 = nullptr; /*0x100274857*/
    }
    v92 = v22; /*0x10027485f*/
    v99 = (volatile signed __int64 *)a2[1]; /*0x100274867*/
    v26 = _InterlockedIncrement64(v99); /*0x10027486b*/
    if ( (v26 < 0) ^ v23 | (v26 == 0) /*0x100274892*/
      || (v27 = (volatile signed __int64 *)a2[6],
          v28 = _InterlockedIncrement64(v27),
          v29 = (__int16)v100,
          (v28 < 0) ^ v23 | (v28 == 0))
      || (v30 = v87, v31 = _InterlockedIncrement64(v87), (v31 < 0) ^ v23 | (v31 == 0)) )
    {
LABEL_118:
      BUG(); /*0x10027523b*/
    }
    v32 = v98 + 2; /*0x10027489c*/
    v78[0] = v99; /*0x1002748a4*/
    v78[1] = v27; /*0x1002748ab*/
    v78[2] = v30; /*0x1002748b2*/
    v79 = v10; /*0x1002748b9*/
    v80 = v29; /*0x1002748c0*/
    v81 = 0; /*0x1002748c7*/
    v33 = (char **)v71; /*0x1002748d5*/
    tokio::runtime::runtime::Runtime::block_on::h387b013991204e68(v71, v98 + 2, v78, &off_10195DB10); /*0x1002748e3*/
    if ( v71[0] ) /*0x1002748f6*/
    {
      __n = v74; /*0x100274900*/
      __src = v73; /*0x10027490b*/
      v89 = v72; /*0x100274912*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100274927*/
      {
        v77[0] = &v89; /*0x100274934*/
        v77[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100274942*/
        v78[6] = 2; /*0x100274949*/
        v78[7] = "codexmate_lib::core::relay::manager"; /*0x10027495b*/
        v78[8] = 35; /*0x100274962*/
        v78[10] = &unk_1017BA0FF; /*0x100274974*/
        v78[11] = v77; /*0x100274982*/
        v78[0] = 0; /*0x100274989*/
        v78[1] = "codexmate_lib::core::relay::manager"; /*0x100274994*/
        v78[2] = 35; /*0x10027499b*/
        v78[3] = 0; /*0x1002749a6*/
        v78[4] = "src/core/relay/manager.rs"; /*0x1002749b8*/
        v78[5] = 25; /*0x1002749bf*/
        v78[9] = 0x97700000001LL; /*0x1002749d4*/
        v33 = &v82; /*0x1002749db*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v82, v78); /*0x1002749e9*/
      }
      v34 = __n; /*0x1002749ee*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1002749f5*/
      {
        v35 = 0; /*0x1002749fb*/
        goto LABEL_39; /*0x1002749fb*/
      }
      v42 = __src; /*0x100274a98*/
      if ( __n ) /*0x100274a9f*/
      {
        v100 = __src; /*0x100274aa1*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, __src); /*0x100274aa5*/
        v35 = 1; /*0x100274aaa*/
        v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v34, 1); /*0x100274ab8*/
        if ( !v43 ) /*0x100274ac0*/
LABEL_39:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v35, v34); /*0x1002749fe*/
        v44 = v43; /*0x100274ac6*/
        v42 = v100; /*0x100274ac9*/
      }
      else
      {
        v44 = 1; /*0x100274acf*/
      }
      memcpy((void *)v44, v42, v34); /*0x100274adb*/
      v94 = v34; /*0x100274ae0*/
      v95 = (_QWORD *)v44; /*0x100274ae4*/
      v96 = v34; /*0x100274ae8*/
      v45 = v99 + 2; /*0x100274af0*/
      v46 = *((_QWORD *)v99 + 2); /*0x100274af4*/
      if ( !v46 ) /*0x100274afb*/
        v46 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v99 + 2); /*0x100274ea1*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v46); /*0x100274b01*/
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100274b1d*/
      {
        v48 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v46, v42, v47, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x100274eb1*/
        if ( *((_BYTE *)v99 + 24) ) /*0x100274eb9*/
          goto LABEL_55; /*0x100274ebf*/
      }
      else
      {
        v48 = 0; /*0x100274b23*/
        if ( *((_BYTE *)v99 + 24) ) /*0x100274b2a*/
        {
LABEL_55:
          if ( !v48 /*0x1002751f4*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   v46,
                                   v42,
                                   v47,
                                   0x7FFFFFFFFFFFFFFFLL) )
          {
            *((_BYTE *)v99 + 24) = 1; /*0x100275205*/
          }
LABEL_95:
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v45); /*0x1002750b3*/
          v78[0] = &v94; /*0x1002750bf*/
          v78[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002750cd*/
          v41 = v75; /*0x1002750db*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v75, &unk_1017BA0FF, v78); /*0x1002750e9*/
          *(_QWORD *)(a1 + 24) = v75[2]; /*0x1002750f5*/
          v70 = v75[0]; /*0x1002750f9*/
          *(_QWORD *)(a1 + 16) = v75[1]; /*0x100275107*/
          *(_QWORD *)(a1 + 8) = v70; /*0x10027510b*/
          *(_QWORD *)a1 = 10; /*0x10027510f*/
          if ( v94 ) /*0x10027511d*/
          {
            v41 = v95; /*0x10027511f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v94, 1); /*0x100275128*/
          }
          v32 = v89; /*0x10027512d*/
          v60 = v101; /*0x100275137*/
          if ( v89 ) /*0x10027513a*/
          {
            v41 = __src; /*0x10027513c*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v89, 1); /*0x100275148*/
          }
LABEL_99:
          if ( !v60 /*0x10027519b*/
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   v41,
                                   v32,
                                   v58,
                                   0x7FFFFFFFFFFFFFFFLL) )
          {
            *(_BYTE *)(v14 + 24) = 1; /*0x1002751a4*/
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v97); /*0x100275171*/
          goto LABEL_102; /*0x100275171*/
        }
      }
      v100 = (void *)v45; /*0x100274ec5*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v78, &v94); /*0x100274ed4*/
      v77[2] = v78[2]; /*0x100274ee0*/
      v77[1] = v78[1]; /*0x100274ef5*/
      v77[0] = v78[0]; /*0x100274efc*/
      v61 = v99; /*0x100274f03*/
      v62 = *((_QWORD *)v99 + 10); /*0x100274f07*/
      if ( v62 ) /*0x100274f0e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v99 + 11), v62, 1); /*0x100274f19*/
      v63 = *((_QWORD *)v61 + 13); /*0x100274f1e*/
      if ( v63 ) /*0x100274f25*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v61 + 14), v63, 1); /*0x100274f30*/
      v64 = *((_QWORD *)v61 + 16); /*0x100274f3c*/
      if ( v64 != v88 && v64 ) /*0x100274f4f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v61 + 17), v64, 1); /*0x100274f5d*/
      *((_QWORD *)v61 + 10) = 0; /*0x100274f62*/
      *((_QWORD *)v61 + 11) = 1; /*0x100274f6a*/
      *((_QWORD *)v61 + 12) = 0; /*0x100274f72*/
      *((_QWORD *)v61 + 13) = 0; /*0x100274f7a*/
      *((_QWORD *)v61 + 14) = 1; /*0x100274f82*/
      *((_QWORD *)v61 + 15) = 0; /*0x100274f8a*/
      *((_QWORD *)v61 + 18) = v77[2]; /*0x100274f99*/
      v65 = v77[0]; /*0x100274f9d*/
      *((_QWORD *)v61 + 17) = v77[1]; /*0x100274fab*/
      *((_QWORD *)v61 + 16) = v65; /*0x100274faf*/
      *((_WORD *)v61 + 76) = 0; /*0x100274fb3*/
      *((_BYTE *)v61 + 154) = 0; /*0x100274fbc*/
      v66 = v87 + 2; /*0x100274fca*/
      v67 = v61 + 4; /*0x100274fce*/
      v68 = v77; /*0x100274fd2*/
      v45 = (volatile signed __int64 *)v100; /*0x100274fd9*/
      codexmate_lib::core::relay::storage::save::h56fb60ad12ceed07(v77, v87 + 2, v67); /*0x100274fdd*/
      v69 = &log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x100274fe9*/
      if ( LODWORD(v77[0]) != 11 ) /*0x100274ff0*/
      {
        qmemcpy(v78, v77, 0x60u); /*0x10027500c*/
        v66 = v78; /*0x10027500c*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100275016*/
        {
          v76[0] = v78; /*0x100275018*/
          v76[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100275026*/
          v82 = "codexmate_lib::core::relay::manager"; /*0x100275034*/
          v83 = 35; /*0x10027503b*/
          v84 = "codexmate_lib::core::relay::manager"; /*0x100275046*/
          v85 = 35; /*0x10027504d*/
          v86 = &off_10195DB40; /*0x10027505f*/
          v66 = v76; /*0x10027506d*/
          log::__private_api::log::h719f4907c7336ae9(&unk_1017BA11C, v76, 2, &v82); /*0x100275080*/
        }
        v68 = v78; /*0x100275085*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v78); /*0x10027508c*/
      }
      if ( !v48 /*0x10027520e*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v68,
                               v66,
                               v69,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v99 + 24) = 1; /*0x10027521f*/
      }
      goto LABEL_95; /*0x100275223*/
    }
    v96 = v74; /*0x100274a12*/
    v95 = v73; /*0x100274a1d*/
    v94 = (size_t)v72; /*0x100274a21*/
    v36 = v99; /*0x100274a25*/
    v37 = v99 + 2; /*0x100274a29*/
    v38 = *((_QWORD *)v99 + 2); /*0x100274a2d*/
    if ( !v38 ) /*0x100274a34*/
      v38 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v99 + 2); /*0x100274b85*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v38); /*0x100274a3a*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100274a56*/
    {
      v40 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v38, v32, v39, 0x7FFFFFFFFFFFFFFFLL); /*0x100274b92*/
      LOBYTE(v40) = v40 ^ 1; /*0x100274b94*/
      if ( *((_BYTE *)v36 + 24) ) /*0x100274b97*/
      {
LABEL_44:
        if ( !(_BYTE)v40 /*0x1002751c4*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v38,
                                 v32,
                                 v39,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *((_BYTE *)v36 + 24) = 1; /*0x1002751d1*/
        }
        v41 = (_QWORD *)*v37; /*0x100274a8b*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v37); /*0x100274a8e*/
LABEL_75:
        v78[2] = v96; /*0x100274e15*/
        v78[1] = v95; /*0x100274e28*/
        v78[0] = v94; /*0x100274e2f*/
        if ( *v92 ) /*0x100274e3a*/
        {
          if ( !_InterlockedDecrement64((volatile signed __int64 *)*v92) ) /*0x100274e42*/
          {
            v41 = v92; /*0x100274e48*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb72ce9272227da16(v92); /*0x100274e4c*/
          }
          if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v14 + 40)) ) /*0x100274e56*/
          {
            v41 = (_QWORD *)(v14 + 40); /*0x100274e5c*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he1e1b98483d5e042(v14 + 40); /*0x100274e61*/
          }
        }
        v58 = v92; /*0x100274e6d*/
        v92[2] = v78[2]; /*0x100274e71*/
        v59 = v78[0]; /*0x100274e75*/
        v58[1] = v78[1]; /*0x100274e83*/
        *v58 = v59; /*0x100274e87*/
        *(_QWORD *)a1 = 11; /*0x100274e8a*/
        v60 = v101; /*0x100274e91*/
        goto LABEL_99; /*0x100274e94*/
      }
    }
    else
    {
      v40 = 0; /*0x100274a5c*/
      if ( *((_BYTE *)v36 + 24) ) /*0x100274a5e*/
        goto LABEL_44; /*0x100274a64*/
    }
    v93 = v40; /*0x100274ba3*/
    v100 = (void *)v37; /*0x100274ba6*/
    v49 = v96; /*0x100274bae*/
    v78[0] = &v96; /*0x100274bb2*/
    v78[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x100274bc0*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v82, &unk_1017B98DA, v78); /*0x100274bdc*/
    v78[0] = &v96; /*0x100274be1*/
    v78[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x100274be8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v77, &unk_1017B98BC, v78); /*0x100274c04*/
    v78[0] = v82; /*0x100274c17*/
    v78[1] = v83; /*0x100274c1e*/
    v78[2] = v84; /*0x100274c2c*/
    v78[3] = v77[0]; /*0x100274c41*/
    v78[4] = v77[1]; /*0x100274c48*/
    v78[5] = v77[2]; /*0x100274c56*/
    v50 = v99; /*0x100274c5d*/
    v51 = *((_QWORD *)v99 + 10); /*0x100274c61*/
    if ( v51 ) /*0x100274c68*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v99 + 11), v51, 1); /*0x100274c73*/
    v52 = *((_QWORD *)v50 + 13); /*0x100274c78*/
    if ( v52 ) /*0x100274c7f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v50 + 14), v52, 1); /*0x100274c8a*/
    v53 = *((_QWORD *)v50 + 16); /*0x100274c93*/
    if ( v53 != v88 && v53 ) /*0x100274ca6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v50 + 17), v53, 1); /*0x100274cb4*/
    *((_QWORD *)v50 + 15) = v78[5]; /*0x100274cc0*/
    *((_QWORD *)v50 + 14) = v78[4]; /*0x100274ccb*/
    *((_QWORD *)v50 + 13) = v78[3]; /*0x100274cd6*/
    *((_QWORD *)v50 + 12) = v78[2]; /*0x100274ce1*/
    v54 = v78[0]; /*0x100274ce5*/
    *((_QWORD *)v50 + 11) = v78[1]; /*0x100274cf3*/
    *((_QWORD *)v50 + 10) = v54; /*0x100274cf7*/
    *((_QWORD *)v50 + 16) = v88; /*0x100274d01*/
    *((_WORD *)v50 + 76) = v49; /*0x100274d08*/
    *((_BYTE *)v50 + 154) = 1; /*0x100274d10*/
    v32 = v87 + 2; /*0x100274d1f*/
    v55 = v77; /*0x100274d27*/
    codexmate_lib::core::relay::storage::save::h56fb60ad12ceed07(v77, v87 + 2, v50 + 4); /*0x100274d2e*/
    v57 = v100; /*0x100274d3a*/
    if ( LODWORD(v77[0]) != 11 ) /*0x100274d3e*/
    {
      qmemcpy(v78, v77, 0x60u); /*0x100274d5a*/
      v32 = v78; /*0x100274d5a*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100274d6b*/
      {
        v89 = v78; /*0x100274d6d*/
        __src = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100274d7b*/
        v82 = "codexmate_lib::core::relay::manager"; /*0x100274d89*/
        v83 = 35; /*0x100274d90*/
        v84 = "codexmate_lib::core::relay::manager"; /*0x100274d9b*/
        v85 = 35; /*0x100274da2*/
        v86 = &off_10195DB28; /*0x100274db4*/
        v32 = (volatile signed __int64 *)&v89; /*0x100274dc2*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017BA0C8, &v89, 2, &v82); /*0x100274dd5*/
      }
      v55 = v78; /*0x100274dda*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v78); /*0x100274de1*/
      v57 = v100; /*0x100274de6*/
    }
    if ( !(_BYTE)v93 /*0x1002751da*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v55,
                             v32,
                             v56,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v99 + 24) = 1; /*0x1002751eb*/
    }
    v41 = (_QWORD *)*v57; /*0x100274e0d*/
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v57); /*0x100274e10*/
    goto LABEL_75; /*0x100274e10*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100274513*/
  result = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x100274522*/
  if ( !result ) /*0x10027452a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100275247*/
  qmemcpy((void *)result, "relay proxy runtime is unavailable", 34); /*0x100274564*/
  *(_QWORD *)a1 = 10; /*0x10027456d*/
  *(_QWORD *)(a1 + 8) = 34; /*0x100274574*/
  *(_QWORD *)(a1 + 16) = result; /*0x10027457c*/
  *(_QWORD *)(a1 + 24) = 34; /*0x100274580*/
  return result; /*0x100275189*/
}