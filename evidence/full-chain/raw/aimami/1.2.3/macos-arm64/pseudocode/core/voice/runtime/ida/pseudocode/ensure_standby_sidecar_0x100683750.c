// __ZN13codexmate_lib4core5voice7runtime22ensure_standby_sidecar @ 0x100683750 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::ensure_standby_sidecar::h2b73fed91d90f079(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // r13
  char v9; // al
  __int64 v10; // r12
  char v11; // r15
  char v12; // al
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _BYTE *v18; // r13
  char v19; // al
  char v20; // bl
  char v21; // al
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // r12
  __int64 v31; // rsi
  double result; // xmm0_8
  __int64 v33; // r13
  unsigned int v34; // ebx
  unsigned int v35; // r14d
  volatile signed __int64 *v36; // rax
  volatile signed __int64 *v37; // r14
  volatile signed __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 (__fastcall *v42)(); // r15
  _QWORD *v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 __dst[25]; // [rsp+8h] [rbp-308h] BYREF
  _QWORD v48[20]; // [rsp+D0h] [rbp-240h] BYREF
  __int64 v49; // [rsp+170h] [rbp-1A0h]
  volatile signed __int64 *v50; // [rsp+178h] [rbp-198h] BYREF
  __int64 v51; // [rsp+180h] [rbp-190h]
  __int64 v52; // [rsp+188h] [rbp-188h]
  __int64 v53; // [rsp+190h] [rbp-180h]
  int v54; // [rsp+198h] [rbp-178h]
  _QWORD __src[26]; // [rsp+1A0h] [rbp-170h] BYREF
  _QWORD *v56; // [rsp+270h] [rbp-A0h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+278h] [rbp-98h]
  unsigned __int64 v58; // [rsp+280h] [rbp-90h]
  char v59; // [rsp+298h] [rbp-78h]
  _QWORD *v60; // [rsp+2A0h] [rbp-70h] BYREF
  _QWORD *v61; // [rsp+2A8h] [rbp-68h]
  unsigned __int64 v62; // [rsp+2B0h] [rbp-60h]
  volatile signed __int64 *v63; // [rsp+2B8h] [rbp-58h] BYREF
  int v64; // [rsp+2C4h] [rbp-4Ch]
  _QWORD *v65; // [rsp+2C8h] [rbp-48h]
  int v66; // [rsp+2D4h] [rbp-3Ch]
  __int64 v67; // [rsp+2D8h] [rbp-38h]
  __int64 v68; // [rsp+2E0h] [rbp-30h]

  v2 = a1; /*0x100683764*/
  v3 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x100683767*/
  v4 = v3; /*0x10068376c*/
  v5 = *(_QWORD *)(v3 + 32); /*0x10068376f*/
  if ( !v5 ) /*0x100683776*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 32); /*0x1006837de*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100683782*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100683791*/
  {
    v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x1006837e3*/
    v8 = (_BYTE *)(v4 + 40); /*0x1006837eb*/
    v7 = *(unsigned __int8 *)(v4 + 40); /*0x1006837ef*/
    if ( (_BYTE)v7 ) /*0x1006837f5*/
    {
      if ( !v12 ) /*0x1006837f9*/
      {
LABEL_6:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 32)); /*0x1006837b0*/
        goto LABEL_22; /*0x1006837b9*/
      }
LABEL_5:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006837fd*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) )
      {
        *v8 = 1; /*0x100683806*/
      }
      goto LABEL_6; /*0x10068380b*/
    }
    v9 = v12 ^ 1; /*0x10068380d*/
    if ( *(_BYTE *)(v4 + 768) == 2 ) /*0x100683816*/
    {
LABEL_8:
      v10 = v2; /*0x1006837c9*/
      v11 = 0; /*0x1006837cc*/
      if ( v9 ) /*0x1006837d1*/
        goto LABEL_21; /*0x1006837d1*/
      goto LABEL_20; /*0x1006837d1*/
    }
  }
  else
  {
    v8 = (_BYTE *)(v4 + 40); /*0x10068379c*/
    if ( *(_BYTE *)(v4 + 40) ) /*0x1006837a0*/
      goto LABEL_5; /*0x1006837a6*/
    v9 = 0; /*0x1006837be*/
    if ( *(_BYTE *)(v4 + 768) == 2 ) /*0x1006837c7*/
      goto LABEL_8; /*0x1006837c7*/
  }
  v10 = v2; /*0x100683818*/
  if ( *(_BYTE *)(v4 + 898) == 1 ) /*0x100683822*/
  {
    v11 = *(_BYTE *)(v4 + 900) ^ 1; /*0x10068382c*/
    if ( v9 ) /*0x100683832*/
      goto LABEL_21; /*0x100683832*/
  }
  else
  {
    v11 = 0; /*0x100683836*/
    if ( v9 ) /*0x10068383b*/
      goto LABEL_21; /*0x10068383b*/
  }
LABEL_20:
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100684040*/
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v5,
                           a2,
                           v6,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *v8 = 1; /*0x10068404d*/
  }
LABEL_21:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v4 + 32)); /*0x100683853*/
  v13 = v11 == 0; /*0x10068385c*/
  v2 = v10; /*0x10068385f*/
  if ( !v13 ) /*0x10068386c*/
    return result; /*0x10068386c*/
LABEL_22:
  v14 = tauri::Manager::state::hb5ba04dc9da9798f(v2); /*0x100683872*/
  v65 = (_QWORD *)(v14 + 32); /*0x100683881*/
  v15 = *(_QWORD *)(v14 + 32); /*0x100683885*/
  if ( v15 ) /*0x10068388c*/
  {
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v15); /*0x10068388e*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100683899*/
      goto LABEL_24; /*0x100683899*/
  }
  else
  {
    v15 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v65); /*0x1006838f3*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v15); /*0x1006838f6*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100683901*/
    {
LABEL_24:
      v18 = (_BYTE *)(v14 + 40); /*0x10068389b*/
      if ( *(_BYTE *)(v14 + 40) ) /*0x1006838a2*/
        goto LABEL_25; /*0x1006838a8*/
      v19 = 0; /*0x1006838cf*/
      if ( *(_BYTE *)(v14 + 898) == 1 ) /*0x1006838d8*/
        goto LABEL_28; /*0x1006838d8*/
      goto LABEL_37; /*0x1006838d8*/
    }
  }
  v21 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, a2, v16, v17); /*0x100683903*/
  v18 = (_BYTE *)(v14 + 40); /*0x10068390b*/
  v17 = *(unsigned __int8 *)(v14 + 40); /*0x10068390f*/
  if ( (_BYTE)v17 ) /*0x100683915*/
  {
    if ( !v21 ) /*0x100683919*/
    {
LABEL_26:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v65); /*0x1006838b2*/
      return result; /*0x1006838ca*/
    }
LABEL_25:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10068391d*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, a2, v16, v17) )
    {
      *v18 = 1; /*0x100683926*/
    }
    goto LABEL_26; /*0x10068392b*/
  }
  v19 = v21 ^ 1; /*0x10068392d*/
  if ( *(_BYTE *)(v14 + 898) == 1 ) /*0x100683936*/
  {
LABEL_28:
    v20 = *(_BYTE *)(v14 + 900) ^ 1; /*0x1006838da*/
    if ( v19 ) /*0x1006838e6*/
      goto LABEL_39; /*0x1006838e6*/
    goto LABEL_38; /*0x1006838e6*/
  }
LABEL_37:
  v20 = 0; /*0x100683938*/
  if ( v19 ) /*0x10068393c*/
    goto LABEL_39; /*0x10068393c*/
LABEL_38:
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100684057*/
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, a2, v16, v17) )
  {
    *v18 = 1; /*0x100684064*/
  }
LABEL_39:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v65); /*0x10068394a*/
  if ( !v20 ) /*0x100683958*/
    return result; /*0x100683958*/
  v48[19] = v2; /*0x100683965*/
  codexmate_lib::platform::voice_macos::resolve_voice_sidecar_path::h69bec614c361cc72(__dst, v2); /*0x10068396f*/
  v22 = __dst[0]; /*0x100683974*/
  if ( __dst[0] != 0x8000000000000000LL ) /*0x100683981*/
  {
    v25 = __dst[1]; /*0x100683aa4*/
    v26 = __dst[2]; /*0x100683aab*/
    if ( LOBYTE(__dst[3]) ) /*0x100683ab9*/
    {
      std::sys::process::unix::common::Command::new::h3bc62b213fd56379(__dst, __dst[1], __dst[2]); /*0x100683ac8*/
    }
    else
    {
      std::sys::process::unix::common::Command::new::h3bc62b213fd56379(__src, "swifttranscribe", 5); /*0x100683ae2*/
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__src, v25, v26); /*0x100683af4*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x100683b0c*/
    }
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__dst, "standby", 7); /*0x100683b24*/
    std::sys::process::unix::common::Command::stdin::h62c5b3b4d0b5814e(__dst, 2); /*0x100683b35*/
    std::sys::process::unix::common::Command::stdout::h556648047a6f261e(__dst, 2); /*0x100683b46*/
    std::sys::process::unix::common::Command::stderr::h9704f649d4d0b361(__dst, 1); /*0x100683b57*/
    std::process::Command::spawn::hcb9dc323794e167a(__src, __dst); /*0x100683b6a*/
    if ( LODWORD(__src[0]) == 2 ) /*0x100683b76*/
    {
      if ( (__src[1] & 3) == 1 ) /*0x100683b87*/
      {
        v27 = v25; /*0x100683b8d*/
        v28 = __src[1] - 1LL; /*0x100683b90*/
        v29 = *(_QWORD *)(__src[1] - 1LL); /*0x100683b94*/
        v30 = *(_QWORD *)(__src[1] + 7LL); /*0x100683b98*/
        if ( *(_QWORD *)v30 ) /*0x100683b9c*/
          (*(void (__fastcall **)(__int64))v30)(v29); /*0x100683ba8*/
        v31 = *(_QWORD *)(v30 + 8); /*0x100683baa*/
        if ( v31 ) /*0x100683bb2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v31, *(_QWORD *)(v30 + 16)); /*0x100683bbc*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 24, 8); /*0x100683bce*/
        v25 = v27; /*0x100683bd3*/
      }
LABEL_69:
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(__dst); /*0x100683e0b*/
      if ( !v22 ) /*0x100683e1a*/
        return result; /*0x100683e1a*/
      v24 = v25; /*0x100683e21*/
      v23 = v22; /*0x100683e24*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x100683e24*/
    }
    v49 = v26; /*0x100683bdb*/
    v33 = v25; /*0x100683be2*/
    v54 = __src[1]; /*0x100683beb*/
    v53 = __src[0]; /*0x100683bf8*/
    v34 = HIDWORD(__src[1]); /*0x100683bff*/
    v35 = HIDWORD(__src[2]); /*0x100683c0b*/
    if ( LODWORD(__src[2]) == -1 ) /*0x100683c15*/
    {
      if ( HIDWORD(__src[1]) == -1 ) /*0x100683ded*/
      {
LABEL_67:
        v25 = v33; /*0x100683dfa*/
        if ( v35 != -1 ) /*0x100683e01*/
          close_NOCANCEL(v35); /*0x100683e06*/
        goto LABEL_69; /*0x100683e06*/
      }
    }
    else
    {
      if ( HIDWORD(__src[1]) != -1 ) /*0x100683c1e*/
      {
        v64 = __src[2]; /*0x100683c24*/
        *(_DWORD *)((char *)&v48[1] + 3) = v54; /*0x100683c2d*/
        *(_QWORD *)((char *)v48 + 3) = v53; /*0x100683c3a*/
        __src[0] = 1; /*0x100683c41*/
        __src[1] = 1; /*0x100683c4c*/
        __src[2] = 0; /*0x100683c57*/
        LOBYTE(__src[3]) = 0; /*0x100683c62*/
        *(_QWORD *)((char *)&__src[3] + 1) = v48[0]; /*0x100683c70*/
        __src[4] = *(_QWORD *)((char *)v48 + 7); /*0x100683c7e*/
        __src[5] = -1; /*0x100683c85*/
        LODWORD(__src[6]) = v35; /*0x100683c90*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, __dst); /*0x100683c97*/
        v36 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(56, 8); /*0x100683ca6*/
        if ( !v36 ) /*0x100683cae*/
        {
          v67 = v33; /*0x10068406e*/
          v68 = v22; /*0x100684072*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 56); /*0x100684080*/
        }
        v37 = v36; /*0x100683cb4*/
        *((_QWORD *)v36 + 6) = __src[6]; /*0x100683cbe*/
        *((_QWORD *)v36 + 5) = __src[5]; /*0x100683cc9*/
        *((_QWORD *)v36 + 4) = __src[4]; /*0x100683cd4*/
        *((_QWORD *)v36 + 3) = __src[3]; /*0x100683cdf*/
        *((_QWORD *)v36 + 2) = __src[2]; /*0x100683cea*/
        v38 = __src[0]; /*0x100683cee*/
        *((_QWORD *)v37 + 1) = __src[1]; /*0x100683cfc*/
        *v37 = v38; /*0x100683d00*/
        __src[25] = v37; /*0x100683d03*/
        __src[0] = 1; /*0x100683d0a*/
        __src[1] = 1; /*0x100683d15*/
        __src[2] = 0; /*0x100683d20*/
        LOBYTE(__src[3]) = 0; /*0x100683d2b*/
        HIDWORD(__src[3]) = v34; /*0x100683d32*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(56, 8); /*0x100683d38*/
        v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x100683d47*/
        if ( !v39 ) /*0x100683d4f*/
        {
          v67 = v33; /*0x100684087*/
          v68 = v22; /*0x10068408b*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100684099*/
        }
        *(_QWORD *)(v39 + 24) = __src[3]; /*0x100683d5c*/
        *(_QWORD *)(v39 + 16) = __src[2]; /*0x100683d67*/
        v40 = __src[0]; /*0x100683d6b*/
        *(_QWORD *)(v39 + 8) = __src[1]; /*0x100683d79*/
        *(_QWORD *)v39 = v40; /*0x100683d7d*/
        v63 = (volatile signed __int64 *)v39; /*0x100683d80*/
        if ( _InterlockedIncrement64(v37) <= 0 || _InterlockedIncrement64((volatile signed __int64 *)v39) <= 0 ) /*0x100683d92*/
          BUG(); /*0x1006840d9*/
        v25 = v33; /*0x100683d98*/
        v50 = v37; /*0x100683d9b*/
        v51 = v39; /*0x100683da2*/
        LOBYTE(v52) = 1; /*0x100683da9*/
        LOBYTE(v39) = 1; /*0x100683dba*/
        v66 = v39; /*0x100683dbc*/
        v41 = std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(&v56, v65); /*0x100683dc3*/
        if ( (_BYTE)v56 ) /*0x100683dcf*/
        {
          LOBYTE(v41) = 1; /*0x100683ddb*/
          v66 = v41; /*0x100683ddd*/
          core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$std..process..ChildStdin$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$std..process..ChildStdin$GT$$GT$$GT$$GT$::h84ea48b3f2e297a0(&v56); /*0x100683de0*/
        }
        else
        {
          v67 = v33; /*0x100683e3e*/
          v68 = v22; /*0x100683e42*/
          v42 = v57; /*0x100683e46*/
          LOBYTE(v65) = v58; /*0x100683e54*/
          __src[2] = v52; /*0x100683e5e*/
          __src[1] = v51; /*0x100683e73*/
          __src[0] = v50; /*0x100683e7a*/
          v43 = (_QWORD *)((char *)v57 + 720); /*0x100683e81*/
          core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..voice..runtime..RunningVoiceSidecar$GT$$GT$::h0802d3d1ce4a29e0((char *)v57 + 720); /*0x100683e8b*/
          v43[2] = __src[2]; /*0x100683e97*/
          v44 = __src[0]; /*0x100683e9b*/
          v43[1] = __src[1]; /*0x100683ea9*/
          *v43 = v44; /*0x100683ead*/
          v60 = (_QWORD *)v67; /*0x100683eb4*/
          v61 = (_QWORD *)v49; /*0x100683ebf*/
          _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0f1adfeb5dc2dd29(__src, &v60); /*0x100683ece*/
          v48[2] = __src[2]; /*0x100683eda*/
          v48[1] = __src[1]; /*0x100683eef*/
          v48[0] = __src[0]; /*0x100683ef6*/
          v45 = *((_QWORD *)v42 + 82); /*0x100683f04*/
          if ( v45 != 0x8000000000000000LL && v45 ) /*0x100683f13*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v42 + 83), v45, 1); /*0x100683f21*/
          *((_QWORD *)v42 + 84) = v48[2]; /*0x100683f2d*/
          v46 = v48[0]; /*0x100683f31*/
          *((_QWORD *)v42 + 83) = v48[1]; /*0x100683f3f*/
          *((_QWORD *)v42 + 82) = v46; /*0x100683f43*/
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..resources..ResourceTable$GT$$GT$::h15095e88e3d36389( /*0x100683f4d*/
            v42,
            (unsigned __int8)v65);
          v66 = 0; /*0x100683f52*/
          v22 = v68; /*0x100683f59*/
          v25 = v67; /*0x100683f5d*/
        }
        _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h97f86209a0ab5d4a(v48); /*0x100683f72*/
        LODWORD(__src[20]) = v64; /*0x100683f7a*/
        memcpy(__src, v48, 0x98u); /*0x100683f93*/
        __src[19] = v37; /*0x100683f98*/
        v58 = 0x8000000000000000LL; /*0x100683f9f*/
        v56 = nullptr; /*0x100683fa6*/
        v59 = 0; /*0x100683fb1*/
        std::thread::builder::Builder::spawn_unchecked::hc5d4fe9c7be1b7f9(&v60, &v56, __src); /*0x100683fca*/
        if ( !v60 ) /*0x100683fd4*/
        {
          v67 = v25; /*0x1006840a0*/
          v68 = v22; /*0x1006840a4*/
          v56 = v61; /*0x1006840ac*/
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006840d4*/
            "failed to spawn thread",
            22,
            &v56,
            &off_101968498,
            &off_101967AA0);
        }
        v58 = v62; /*0x100683fde*/
        v57 = (__int64 (__fastcall *)())v61; /*0x100683fed*/
        v56 = v60; /*0x100683ff4*/
        core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(&v56); /*0x100684005*/
        if ( (_BYTE)v66 ) /*0x10068400e*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..RunningVoiceSidecar$GT$::h835fe5e97f16a9d4(&v50); /*0x100684017*/
        if ( !_InterlockedDecrement64(v63) ) /*0x100684020*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(&v63); /*0x10068402a*/
        goto LABEL_69; /*0x10068402a*/
      }
      v34 = __src[2]; /*0x100683df1*/
    }
    close_NOCANCEL(v34); /*0x100683df5*/
    goto LABEL_67; /*0x100683df5*/
  }
  v48[2] = __dst[3]; /*0x10068398e*/
  v48[1] = __dst[2]; /*0x1006839a3*/
  v48[0] = __dst[1]; /*0x1006839aa*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006839bf*/
  {
    v56 = v48; /*0x1006839cc*/
    v57 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1006839da*/
    __src[6] = 2; /*0x1006839e1*/
    __src[7] = "codexmate_lib::core::voice::runtimestandby"; /*0x1006839f3*/
    __src[8] = 35; /*0x1006839fa*/
    __src[10] = (char *)&loc_1017C2FB8 + 4; /*0x100683a0c*/
    __src[11] = &v56; /*0x100683a1a*/
    __src[0] = 0; /*0x100683a21*/
    __src[1] = "codexmate_lib::core::voice::runtimestandby"; /*0x100683a2c*/
    __src[2] = 35; /*0x100683a33*/
    __src[3] = 0; /*0x100683a3e*/
    __src[4] = "src/core/voice/runtime/mod.rs"; /*0x100683a50*/
    __src[5] = 29; /*0x100683a57*/
    __src[9] = 0x99600000001LL; /*0x100683a6c*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v60, __src); /*0x100683a7e*/
  }
  v23 = v48[0]; /*0x100683a83*/
  if ( v48[0] ) /*0x100683a8d*/
  {
    v24 = v48[1]; /*0x100683a93*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x100683e27*/
  }
  return result; /*0x1006838b9*/
}