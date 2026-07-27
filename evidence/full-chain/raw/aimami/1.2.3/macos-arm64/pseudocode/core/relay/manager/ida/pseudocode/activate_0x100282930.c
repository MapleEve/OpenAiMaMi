// __ZN13codexmate_lib4core5relay7manager12RelayManager8activate @ 0x100282930 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::activate::h3dd856d021050f86(
        _QWORD *__dst,
        _QWORD *a2,
        void *a3,
        size_t a4)
{
  _QWORD *v4; // r13
  _QWORD *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r14
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r14
  char v18; // r12
  char v19; // bl
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  unsigned __int64 v22; // rsi
  __int64 *v23; // rdi
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  char *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  size_t v35; // r12
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rbx
  _QWORD *v39; // r15
  __int64 v40; // r13
  bool v41; // zf
  __int64 v42; // r14
  __int64 v43; // r12
  char v44; // dl
  size_t v45; // r12
  __int64 v46; // r14
  _BYTE *v47; // rdi
  int v49; // eax
  _BYTE v50[296]; // [rsp+8h] [rbp-568h] BYREF
  _QWORD v51[37]; // [rsp+130h] [rbp-440h] BYREF
  __int64 v52; // [rsp+258h] [rbp-318h] BYREF
  _QWORD v53[12]; // [rsp+260h] [rbp-310h] BYREF
  _BYTE v54[128]; // [rsp+2C0h] [rbp-2B0h] BYREF
  _QWORD v55[12]; // [rsp+340h] [rbp-230h] BYREF
  _QWORD v56[37]; // [rsp+3A0h] [rbp-1D0h] BYREF
  _QWORD v57[2]; // [rsp+4C8h] [rbp-A8h] BYREF
  _QWORD v58[2]; // [rsp+4D8h] [rbp-98h] BYREF
  void *__dsta; // [rsp+4E8h] [rbp-88h]
  size_t v60; // [rsp+4F0h] [rbp-80h]
  void *v61; // [rsp+4F8h] [rbp-78h]
  __int64 v62; // [rsp+500h] [rbp-70h]
  __int64 v63; // [rsp+508h] [rbp-68h]
  char **v64; // [rsp+510h] [rbp-60h]
  void *__s2; // [rsp+518h] [rbp-58h]
  __int64 v66; // [rsp+520h] [rbp-50h]
  _QWORD *v67; // [rsp+528h] [rbp-48h]
  __int64 v68; // [rsp+530h] [rbp-40h]
  int v69; // [rsp+53Ch] [rbp-34h]
  int v70; // [rsp+540h] [rbp-30h]
  unsigned __int8 v71; // [rsp+547h] [rbp-29h]

  v4 = a2; /*0x100282944*/
  v5 = __dst; /*0x100282947*/
  v58[0] = a3; /*0x100282954*/
  v58[1] = a4; /*0x10028295b*/
  v6 = a2[2]; /*0x100282962*/
  if ( !__OFSUB__(0, *(_QWORD *)(v6 + 16)) ) /*0x10028296c*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v56[1], v6 + 16); /*0x100282ab5*/
    v56[0] = 9; /*0x100282aba*/
    qmemcpy(__dst + 1, v56, 0x60u); /*0x100282ad5*/
    *__dst = 0x8000000000000000LL; /*0x100282ad8*/
    return v5; /*0x100282adb*/
  }
  v61 = a3; /*0x100282972*/
  v60 = a4; /*0x100282976*/
  v7 = v4[4]; /*0x10028297a*/
  v67 = (_QWORD *)(v7 + 16); /*0x100282982*/
  v8 = *(_QWORD *)(v7 + 16); /*0x100282986*/
  if ( !v8 ) /*0x10028298d*/
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v67); /*0x100282ae9*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v8); /*0x100282993*/
  v63 = 0x7FFFFFFFFFFFFFFFLL; /*0x1002829af*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1002829b6*/
  {
    v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, v6, v9, 0x7FFFFFFFFFFFFFFFLL); /*0x100282af1*/
    LOBYTE(v15) = v15 ^ 1; /*0x100282af6*/
    v69 = v15; /*0x100282af8*/
    if ( *(_BYTE *)(v7 + 24) ) /*0x100282afb*/
      goto LABEL_6; /*0x100282b01*/
  }
  else
  {
    v69 = 0; /*0x1002829bc*/
    if ( *(_BYTE *)(v7 + 24) ) /*0x1002829c3*/
    {
LABEL_6:
      v10 = v7; /*0x1002829cf*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v6); /*0x1002829d2*/
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x1002829e1*/
      if ( !v11 ) /*0x1002829e9*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x100283138*/
      v14 = (unsigned __int64)v11; /*0x1002829ef*/
      qmemcpy(v11, "Codex router transition lock is poisoned", 40); /*0x100282a34*/
      if ( !(_BYTE)v69 /*0x100283072*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v63) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(40, 1, v12, v13) )
      {
        *(_BYTE *)(v10 + 24) = 1; /*0x10028307f*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v67); /*0x100282a58*/
      v5[1] = 10; /*0x100282a64*/
      v5[2] = 40; /*0x100282a6c*/
      *((_BYTE *)v5 + 24) = v14; /*0x100282a74*/
      *((_BYTE *)v5 + 31) = HIBYTE(v14); /*0x100282a7f*/
      *(_WORD *)((char *)v5 + 29) = HIDWORD(v14) >> 8; /*0x100282a87*/
      *(_DWORD *)((char *)v5 + 25) = v14 >> 8; /*0x100282a8c*/
      v5[4] = 40; /*0x100282a90*/
      *v5 = 0x8000000000000000LL; /*0x100282aa2*/
      return v5; /*0x100282aa5*/
    }
  }
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x100282b1e*/
    v56,
    v4 + 5,
    &unk_1015DEBB1,
    27);
  v68 = v7; /*0x100282b23*/
  v16 = v56[0]; /*0x100282b27*/
  v17 = v56[1]; /*0x100282b2e*/
  v18 = v56[2]; /*0x100282b35*/
  if ( v56[0] != 11 ) /*0x100282b41*/
  {
    v22 = (unsigned __int64)&v56[2] + 1; /*0x100282bce*/
    v26 = (char *)v5 + 25; /*0x100282bd5*/
    memcpy((char *)v5 + 25, (char *)&v56[2] + 1, 0x4Fu); /*0x100282bde*/
    v5[1] = v16; /*0x100282be3*/
    v5[2] = v17; /*0x100282be7*/
    *((_BYTE *)v5 + 24) = v18; /*0x100282beb*/
    *v5 = 0x8000000000000000LL; /*0x100282bf9*/
    v29 = v68; /*0x100282bfc*/
    goto LABEL_41; /*0x100282c00*/
  }
  v71 = v56[2]; /*0x100282b47*/
  v64 = (char **)v56[1]; /*0x100282b4b*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v56, v4); /*0x100282b59*/
  v19 = BYTE4(v56[36]); /*0x100282b5e*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v56); /*0x100282b6c*/
  if ( !v19 ) /*0x100282b73*/
  {
    codexmate_lib::core::relay::manager::RelayManager::ensure_provider_loaded::h48d57c55269bbf40(v56, v4, v61, v60); /*0x100282c17*/
    if ( v56[0] == 0x8000000000000000LL ) /*0x100282c30*/
    {
      v57[0] = v58; /*0x100282c3d*/
      v57[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100282c4b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v51[1], "\x0Frelay provider \xC0\x0A not found", v57); /*0x100282c67*/
      v51[0] = 8; /*0x100282c6c*/
      qmemcpy(v50, v51, 0x60u); /*0x100282c8d*/
      v24 = v55; /*0x100282c90*/
      qmemcpy(v55, v50, sizeof(v55)); /*0x100282ca2*/
      qmemcpy(v5 + 1, v55, 0x60u); /*0x100282cb1*/
      v22 = (unsigned __int64)v56; /*0x100282cb1*/
      v23 = v5 + 13; /*0x100282cb1*/
      v25 = 0; /*0x100282cb1*/
      goto LABEL_19; /*0x100282cb1*/
    }
    qmemcpy(v50, &v56[1], 0x60u); /*0x100282cea*/
    qmemcpy(v54, &v56[13], sizeof(v54)); /*0x100282d00*/
    qmemcpy(v55, v50, sizeof(v55)); /*0x100282d15*/
    qmemcpy(v53, v55, sizeof(v53)); /*0x100282d27*/
    v52 = v56[0]; /*0x100282d2a*/
    v30 = v4[1]; /*0x100282d31*/
    v31 = *(_QWORD *)(v30 + 16); /*0x100282d39*/
    if ( !v31 ) /*0x100282d40*/
      v31 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v30 + 16); /*0x1002830b3*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v31); /*0x100282d46*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v63) != 0 ) /*0x100282d59*/
    {
      v49 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v31, v56, v32, v33); /*0x1002830bb*/
      LOBYTE(v49) = v49 ^ 1; /*0x1002830c6*/
      v70 = v49; /*0x1002830c8*/
      v66 = v30 + 16; /*0x1002830cb*/
      if ( !*(_BYTE *)(v30 + 24) ) /*0x1002830d6*/
      {
LABEL_25:
        v62 = v30; /*0x100282d77*/
        v34 = *(_QWORD *)(v30 + 72); /*0x100282d7b*/
        if ( v34 ) /*0x100282d82*/
        {
          __s2 = (void *)v53[0]; /*0x100282d8f*/
          v35 = v53[1]; /*0x100282d93*/
          v36 = *(_QWORD *)(v62 + 64); /*0x100282d9e*/
          v37 = 24 * v34; /*0x100282da6*/
          v38 = 0; /*0x100282daa*/
          __dsta = v5; /*0x100282dac*/
          while ( 1 ) /*0x100282dc9*/
          {
            if ( *(_QWORD *)(v36 + v38 + 16) == v35 ) /*0x100282dce*/
            {
              v39 = v4; /*0x100282ddc*/
              v40 = v37; /*0x100282ddf*/
              v41 = memcmp(*(const void **)(v36 + v38 + 8), __s2, v35) == 0; /*0x100282de7*/
              v37 = v40; /*0x100282de9*/
              v4 = v39; /*0x100282dec*/
              v5 = __dsta; /*0x100282def*/
              if ( v41 ) /*0x100282df6*/
                break; /*0x100282df6*/
            }
            v38 += 24; /*0x100282dc0*/
            if ( v37 == v38 ) /*0x100282dc7*/
              goto LABEL_31; /*0x100282dc7*/
          }
          codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(v56, v62 + 32); /*0x100282e07*/
          v29 = v68; /*0x100282e0c*/
          memcpy(v5, v56, 0x128u); /*0x100282e1f*/
          v22 = (unsigned __int8)v70; /*0x100282e24*/
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..ipc..authority..RuntimeAuthority$GT$$GT$::hb9398d9c5518911a( /*0x100282e2c*/
            v66,
            (unsigned __int8)v70);
        }
        else
        {
LABEL_31:
          v42 = v66; /*0x100282e36*/
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..ipc..authority..RuntimeAuthority$GT$$GT$::hb9398d9c5518911a( /*0x100282e41*/
            v66,
            (unsigned __int8)v70);
          v29 = v68; /*0x100282e46*/
          std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hfe15f2f4dcfde3b6(v56, v42); /*0x100282e54*/
          v43 = core::result::Result$LT$T$C$E$GT$::expect::h6bc9e3439e9b3fd6(v56); /*0x100282e65*/
          LOBYTE(v42) = v44 & 1; /*0x100282e6b*/
          _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x100282e7d*/
            v50,
            v43 + 16);
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..ipc..authority..RuntimeAuthority$GT$$GT$::hb9398d9c5518911a( /*0x100282e89*/
            v43,
            (unsigned __int8)v42);
          v45 = v60; /*0x100282ea0*/
          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v56, v60, 0, 1, 1); /*0x100282ea9*/
          __s2 = (void *)v56[1]; /*0x100282eb5*/
          if ( LODWORD(v56[0]) == 1 ) /*0x100282ec0*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__s2, v56[2]); /*0x100283123*/
          v46 = v56[2]; /*0x100282ec6*/
          memcpy((void *)v56[2], v61, v45); /*0x100282ed7*/
          v56[0] = __s2; /*0x100282ee0*/
          v56[1] = v46; /*0x100282ee7*/
          v56[2] = v45; /*0x100282eee*/
          codexmate_lib::core::relay::models::RelayActiveByIde::add::h544ec7a2d9875c7e(&v50[24], v56); /*0x100282f03*/
          codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(v51, v50); /*0x100282f16*/
          codexmate_lib::core::relay::manager::RelayManager::sync_codex_config::haffd47a484d4cdfa(v56, v4); /*0x100282f25*/
          if ( LODWORD(v56[0]) == 11 ) /*0x100282f31*/
          {
            memcpy(v56, v50, sizeof(v56)); /*0x100282f49*/
            codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(v55, v4, v56); /*0x100282f5b*/
            v29 = v68; /*0x100282f67*/
            if ( LODWORD(v55[0]) == 11 ) /*0x100282f6b*/
            {
              memcpy(v5, v51, 0x128u); /*0x100282f7c*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(&v52); /*0x100282f88*/
              core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x100282f95*/
                v64,
                v71);
              core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x100282fa2*/
                v67,
                (unsigned __int8)v69);
              return v5; /*0x100282fa7*/
            }
            qmemcpy(v5 + 1, v55, 0x60u); /*0x100282ff1*/
            v22 = (unsigned __int64)v56; /*0x100282ff1*/
            *v5 = 0x8000000000000000LL; /*0x100282ffe*/
            v47 = v51; /*0x100283001*/
          }
          else
          {
            qmemcpy(v5 + 1, v56, 0x60u); /*0x100282fbc*/
            v22 = (unsigned __int64)&v56[12]; /*0x100282fbc*/
            *v5 = 0x8000000000000000LL; /*0x100282fc9*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v51); /*0x100282fd3*/
            v47 = v50; /*0x100282fd8*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v47); /*0x100283008*/
        }
        v23 = &v52; /*0x10028300d*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(&v52); /*0x100283014*/
        if ( (v71 & 1) != 0 ) /*0x10028301d*/
          goto LABEL_40; /*0x10028301d*/
        goto LABEL_39; /*0x10028301d*/
      }
    }
    else
    {
      v70 = 0; /*0x100282d5f*/
      v66 = v30 + 16; /*0x100282d66*/
      if ( !*(_BYTE *)(v30 + 24) ) /*0x100282d6a*/
        goto LABEL_25; /*0x100282d71*/
    }
    v56[0] = v66; /*0x1002830e0*/
    LOBYTE(v56[1]) = v70; /*0x1002830ea*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, v56, &off_10195E740, &off_10195DD68); /*0x100283111*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, v4); /*0x100282b79*/
  v20 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(107, 1); /*0x100282b88*/
  if ( !v20 ) /*0x100282b90*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 107); /*0x100283149*/
  v21 = v20; /*0x100282b96*/
  v22 = (unsigned __int64)&unk_1015DEC2E; /*0x100282b99*/
  v23 = v20; /*0x100282ba5*/
  memcpy(v20, &unk_1015DEC2E, 0x6Bu); /*0x100282ba8*/
  v5[1] = 10; /*0x100282bad*/
  v5[2] = 107; /*0x100282bb5*/
  v5[3] = v21; /*0x100282bbd*/
  v5[4] = 107; /*0x100282bc1*/
LABEL_19:
  *v5 = 0x8000000000000000LL; /*0x100282cb4*/
  v29 = v68; /*0x100282cc1*/
  if ( (v71 & 1) == 0 ) /*0x100282cc9*/
  {
LABEL_39:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v63) != 0 /*0x100283098*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v23, v22, v24, v25) )
    {
      *((_BYTE *)v64 + 8) = 1; /*0x1002830a5*/
    }
  }
LABEL_40:
  v26 = *v64; /*0x10028302f*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v64); /*0x100283036*/
LABEL_41:
  if ( !(_BYTE)v69 /*0x100283089*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v63) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v26, v22, v27, v28) )
  {
    *(_BYTE *)(v29 + 24) = 1; /*0x100283092*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v67); /*0x100283058*/
  return v5; /*0x100283060*/
}