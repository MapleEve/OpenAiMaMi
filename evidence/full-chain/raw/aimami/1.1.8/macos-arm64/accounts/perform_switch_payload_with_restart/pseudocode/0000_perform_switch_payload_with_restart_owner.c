// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004ccfa0 depth=0
// perform_switch_payload_with_restart_owner
_QWORD *__fastcall codexmate_lib::commands::accounts::perform_switch_payload_with_restart::h96604dd095920ea0(
        _QWORD *__dst,
        __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  volatile signed __int64 *v5; // rax
  volatile signed __int64 *v6; // r15
  pthread_mutex_t *v7; // rdi
  int v8; // r14d
  char v9; // cl
  __int64 v10; // r14
  char v11; // r12
  int v12; // eax
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // r14
  size_t v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  size_t v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  size_t v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  _QWORD v40[55]; // [rsp+8h] [rbp-868h] BYREF
  _QWORD v41[59]; // [rsp+1C0h] [rbp-6B0h] BYREF
  size_t v42[3]; // [rsp+398h] [rbp-4D8h] BYREF
  _QWORD v43[4]; // [rsp+3B0h] [rbp-4C0h] BYREF
  _BYTE __dsta[160]; // [rsp+3D0h] [rbp-4A0h] BYREF
  __int64 v45; // [rsp+470h] [rbp-400h] BYREF
  _QWORD v46[84]; // [rsp+478h] [rbp-3F8h] BYREF
  size_t v47[3]; // [rsp+718h] [rbp-158h] BYREF
  size_t v48[3]; // [rsp+730h] [rbp-140h] BYREF
  size_t v49[3]; // [rsp+748h] [rbp-128h] BYREF
  size_t v50[3]; // [rsp+760h] [rbp-110h] BYREF
  __int64 v51; // [rsp+778h] [rbp-F8h]
  __int64 v52; // [rsp+780h] [rbp-F0h]
  _QWORD v53[12]; // [rsp+788h] [rbp-E8h] BYREF
  _DWORD v54[2]; // [rsp+7E8h] [rbp-88h]
  __int64 *v55; // [rsp+7F0h] [rbp-80h] BYREF
  __int64 (__fastcall **v56)(); // [rsp+7F8h] [rbp-78h]
  __int64 v57; // [rsp+800h] [rbp-70h]
  int v58; // [rsp+80Ch] [rbp-64h]
  __int64 v59; // [rsp+810h] [rbp-60h]
  __int64 v60; // [rsp+818h] [rbp-58h] BYREF
  __int64 v61; // [rsp+820h] [rbp-50h]
  __int64 v62; // [rsp+828h] [rbp-48h]
  __int64 *v63; // [rsp+830h] [rbp-40h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+838h] [rbp-38h]
  _BYTE v65[7]; // [rsp+840h] [rbp-30h]

  v52 = a2; /*0x1004ccfb7*/
  v3 = *(_QWORD *)(a2 + 136); /*0x1004ccfbe*/
  codexmate_lib::commands::accounts::capture_switch_rollback_state::h4876b80d2797ba5c(&v45); /*0x1004ccfcf*/
  v41[0] = v46[0]; /*0x1004ccfe8*/
  v41[1] = v46[1]; /*0x1004ccff6*/
  v41[2] = v46[2]; /*0x1004cd004*/
  if ( !__OFSUB__(-v45, 1) )
  {
    memcpy(__dsta, &v46[3], sizeof(__dsta)); /*0x1004cd04d*/
    v43[1] = v41[0]; /*0x1004cd060*/
    v43[2] = v41[1]; /*0x1004cd067*/
    v43[3] = v41[2]; /*0x1004cd075*/
    v43[0] = v45; /*0x1004cd07c*/
    v5 = (volatile signed __int64 *)tauri::state::StateManager::try_get::h5668abcf78ad5dde(*(_QWORD *)(v3 + 4872) + 16LL); /*0x1004cd08e*/
    v6 = v5; /*0x1004cd093*/
    if ( !v5 ) /*0x1004cd099*/
    {
      v53[0] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_789; /*0x1004cd1b8*/
      v53[1] = 76; /*0x1004cd1bf*/
      v45 = (__int64)v53; /*0x1004cd1d1*/
      v46[0] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004cd1df*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1004cd1fb*/
        (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_896,
        (__int64)&v45,
        (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_897);
    }
    v7 = (pthread_mutex_t *)*v5; /*0x1004cd09f*/
    if ( !*v5 ) /*0x1004cd09f*/
      v7 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v5); /*0x1004cd20d*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x1004cd0ab*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      LOBYTE(v12) = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1004cd215*/
      v8 = v12; /*0x1004cd21a*/
      LOBYTE(v8) = v12 ^ 1; /*0x1004cd21d*/
      if ( *((_BYTE *)v6 + 8) ) /*0x1004cd221*/
        goto LABEL_8; /*0x1004cd228*/
    }
    else
    {
      v8 = 0; /*0x1004cd0d2*/
      if ( *((_BYTE *)v6 + 8) )
      {
LABEL_8:
        v53[0] = 0; /*0x1004cd0e2*/
        v53[1] = 1; /*0x1004cd0ed*/
        v53[2] = 0; /*0x1004cd0f8*/
        v46[1] = 1610612768; /*0x1004cd103*/
        v45 = (__int64)v53; /*0x1004cd115*/
        v46[0] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004cd123*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                (__int64)"poisoned lock: another task failed inside",
                                41,
                                (__int64)&v45) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004cdba5*/
            (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::u"
                     "nwrap()` on an `Err` value",
            55,
            (__int64)&v63,
            (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
            (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
        v59 = v53[0]; /*0x1004cd154*/
        v9 = v8; /*0x1004cd158*/
        v10 = v53[1]; /*0x1004cd15b*/
        v11 = v53[2]; /*0x1004cd162*/
        v54[0] = *(_DWORD *)((char *)&v53[2] + 1); /*0x1004cd170*/
        *(_DWORD *)((char *)v54 + 3) = HIDWORD(v53[2]); /*0x1004cd17c*/
        if ( !v9 /*0x1004cdbac*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
        {
          *((_BYTE *)v6 + 8) = 1; /*0x1004cdbb9*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v6); /*0x1004cd195*/
        *(_DWORD *)&v65[3] = *(_DWORD *)((char *)v54 + 3); /*0x1004cd1a6*/
        *(_DWORD *)v65 = v54[0]; /*0x1004cd1a9*/
        goto LABEL_21; /*0x1004cd1ac*/
      }
    }
    v58 = v8; /*0x1004cd22e*/
    codexmate_lib::core::repository::Repository::confirm_pending_auto_switch::h1073089d7a95a9cd(&v45, (_QWORD *)v6 + 2); /*0x1004cd240*/
    v51 = v45; /*0x1004cd24c*/
    if ( v45 == 2 ) /*0x1004cd257*/
    {
      qmemcpy(v53, v46, sizeof(v53)); /*0x1004cd276*/
      v60 = 0; /*0x1004cd279*/
      v61 = 1; /*0x1004cd281*/
      v62 = 0; /*0x1004cd289*/
      v57 = 1610612768; /*0x1004cd291*/
      v55 = &v60; /*0x1004cd29d*/
      v56 = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004cd2a8*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004cd2b3*/
                              v53,
                              (__int64 *)&v55) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004cdbe1*/
          (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unw"
                   "rap()` on an `Err` value",
          55,
          (__int64)&v63,
          (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
          (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
      v59 = v60; /*0x1004cd2c7*/
      v10 = v61; /*0x1004cd2cb*/
      v11 = v62; /*0x1004cd2cf*/
      LODWORD(v63) = *(_DWORD *)((char *)&v62 + 1); /*0x1004cd2d7*/
      *(_DWORD *)((char *)&v63 + 3) = HIDWORD(v62); /*0x1004cd2dd*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v46); /*0x1004cd2e0*/
      *(_DWORD *)v65 = (_DWORD)v63; /*0x1004cd2eb*/
      *(_DWORD *)&v65[3] = *(_DWORD *)((char *)&v63 + 3); /*0x1004cd2ee*/
      if ( (_BYTE)v58 ) /*0x1004cd2f5*/
      {
LABEL_20:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v6); /*0x1004cd356*/
        if ( (_DWORD)v51 != 2 ) /*0x1004cd369*/
        {
          HIDWORD(v41[3]) = *(_DWORD *)&v65[3]; /*0x1004cd62d*/
          *(_DWORD *)((char *)&v41[3] + 1) = *(_DWORD *)v65; /*0x1004cd633*/
          memcpy(&v41[4], v40, 0x1B8u); /*0x1004cd64f*/
          v41[0] = v51; /*0x1004cd654*/
          v41[1] = v59; /*0x1004cd65f*/
          v41[2] = v10; /*0x1004cd666*/
          LOBYTE(v41[3]) = v11; /*0x1004cd66d*/
          codexmate_lib::commands::accounts::relaunch_codex_after_success::hf8d48492de64242b(&v60); /*0x1004cd678*/
          if ( v60 == 0x8000000000000000LL ) /*0x1004cd68b*/
          {
            v23 = v52; /*0x1004cd6a4*/
            codexmate_lib::commands::accounts::refresh_full_runtime_snapshot_with_source::hbce7c3d3e06a3523(&v45); /*0x1004cd6ab*/
            if ( (_DWORD)v45 == 3 ) /*0x1004cd6b7*/
            {
              v40[2] = v46[2]; /*0x1004cd6c4*/
              v40[1] = v46[1]; /*0x1004cd6d9*/
              v40[0] = v46[0]; /*0x1004cd6e0*/
              v53[0] = v40; /*0x1004cd6e7*/
              v53[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004cd6f5*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, byte_10122A5AA, (unsigned __int64)v53); /*0x1004cd711*/
              codexmate_lib::commands::accounts::append_switch_warning::h18d90cca06c9c790(v41, v42); /*0x1004cd724*/
              if ( v40[0] ) /*0x1004cd733*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cd745*/
            }
            else
            {
              core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..models..CoreSnapshotPayload$C$alloc..string..String$GT$$GT$::hdb0fbe45242a8a77( /*0x1004cdb55*/
                &v45,
                v23);
            }
            memcpy(__dst, v41, 0x1D8u); /*0x1004cdb69*/
          }
          else
          {
            v57 = v62; /*0x1004cd753*/
            v56 = (__int64 (__fastcall **)())v61; /*0x1004cd75f*/
            v55 = (__int64 *)v60; /*0x1004cd763*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004cd767*/
            v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1004cd776*/
            if ( !v24 ) /*0x1004cd77e*/
              alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004cdc09*/
            v25 = (_QWORD *)v24; /*0x1004cd784*/
            v45 = (__int64)&v55; /*0x1004cd78b*/
            v46[0] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004cd799*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v47, byte_10122A563, (unsigned __int64)&v45); /*0x1004cd7b5*/
            v25[2] = v47[2]; /*0x1004cd7c1*/
            v26 = v47[0]; /*0x1004cd7c5*/
            v25[1] = v47[1]; /*0x1004cd7d3*/
            *v25 = v26; /*0x1004cd7d7*/
            v53[0] = 1; /*0x1004cd7da*/
            v53[1] = v25; /*0x1004cd7e5*/
            v53[2] = 1; /*0x1004cd7ec*/
            codexmate_lib::commands::accounts::FileRestoreState::restore::h09b233f9d641adf6(&v45, v43); /*0x1004cd808*/
            v27 = v45; /*0x1004cd80d*/
            if ( v45 != 0x8000000000000000LL /*0x1004cd89c*/
              || (codexmate_lib::commands::accounts::FileRestoreState::restore::h09b233f9d641adf6(&v45, &__dsta[16]),
                  v27 = v45,
                  v45 != 0x8000000000000000LL)
              || (codexmate_lib::commands::accounts::FileRestoreState::restore::h09b233f9d641adf6(&v45, &__dsta[64]),
                  v27 = v45,
                  v45 != 0x8000000000000000LL)
              || (codexmate_lib::commands::accounts::FileRestoreState::restore::h09b233f9d641adf6(&v45, &__dsta[112]),
                  v27 = v45,
                  v45 != 0x8000000000000000LL) )
            {
              v64 = (__int64 (__fastcall *)())v46[1]; /*0x1004cd8b0*/
              v63 = (__int64 *)v46[0]; /*0x1004cd8b4*/
              v45 = v27; /*0x1004cd8b8*/
              v40[0] = &v45; /*0x1004cd8d5*/
              v40[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004cd8dc*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v49, byte_10122A57C, (unsigned __int64)v40); /*0x1004cd8f8*/
              v28 = v53[2]; /*0x1004cd8fd*/
              if ( v53[2] == v53[0] ) /*0x1004cd90b*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v53); /*0x1004cd914*/
              v29 = v53[1]; /*0x1004cd919*/
              v30 = 3 * v28; /*0x1004cd920*/
              *(_QWORD *)(v53[1] + 8 * v30 + 16) = v49[2]; /*0x1004cd92b*/
              v31 = v49[0]; /*0x1004cd930*/
              *(_QWORD *)(v29 + 8 * v30 + 8) = v49[1]; /*0x1004cd93e*/
              *(_QWORD *)(v29 + 8 * v30) = v31; /*0x1004cd943*/
              v53[2] = v28 + 1; /*0x1004cd94a*/
              if ( v45 ) /*0x1004cd95b*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cd969*/
            }
            codexmate_lib::commands::accounts::relaunch_codex_after_success::hf8d48492de64242b(v40); /*0x1004cd975*/
            if ( v40[0] != 0x8000000000000000LL ) /*0x1004cd98b*/
            {
              v46[1] = v40[2]; /*0x1004cd998*/
              v46[0] = v40[1]; /*0x1004cd9ad*/
              v45 = v40[0]; /*0x1004cd9b4*/
              v63 = &v45; /*0x1004cd9bb*/
              v64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004cd9bf*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v48, byte_10122A590, (unsigned __int64)&v63); /*0x1004cd9d5*/
              v32 = v53[2]; /*0x1004cd9da*/
              if ( v53[2] == v53[0] ) /*0x1004cd9e8*/
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v53); /*0x1004cd9f1*/
              v33 = v53[1]; /*0x1004cd9f6*/
              v34 = 3 * v32; /*0x1004cd9fd*/
              *(_QWORD *)(v53[1] + 8 * v34 + 16) = v48[2]; /*0x1004cda08*/
              v35 = v48[0]; /*0x1004cda0d*/
              *(_QWORD *)(v33 + 8 * v34 + 8) = v48[1]; /*0x1004cda1b*/
              *(_QWORD *)(v33 + 8 * v34) = v35; /*0x1004cda20*/
              v53[2] = v32 + 1; /*0x1004cda27*/
              if ( v45 ) /*0x1004cda38*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cda46*/
            }
            v36 = v52; /*0x1004cda5e*/
            codexmate_lib::commands::accounts::refresh_full_runtime_snapshot_with_source::hbce7c3d3e06a3523(&v45); /*0x1004cda65*/
            core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..models..CoreSnapshotPayload$C$alloc..string..String$GT$$GT$::hdb0fbe45242a8a77( /*0x1004cda71*/
              &v45,
              v36);
            alloc::str::join_generic_copy::hd50f750ef8c6057e((unsigned __int64 *)&v45, v53[1], v53[2], " | ", 3u); /*0x1004cda98*/
            __dst[3] = v46[1]; /*0x1004cdaa4*/
            v37 = v45; /*0x1004cdaa8*/
            __dst[2] = v46[0]; /*0x1004cdab6*/
            __dst[1] = v37; /*0x1004cdaba*/
            *__dst = 2; /*0x1004cdabe*/
            v38 = v53[2]; /*0x1004cdac5*/
            if ( v53[2] ) /*0x1004cdacf*/
            {
              v39 = v53[1] + 8LL; /*0x1004cdad8*/
              do /*0x1004cdae7*/
              {
                if ( *(_QWORD *)(v39 - 8) ) /*0x1004cdae9*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cdafa*/
                v39 += 24; /*0x1004cdae0*/
                --v38; /*0x1004cdae4*/
              }
              while ( v38 ); /*0x1004cdae7*/
            }
            if ( v53[0] ) /*0x1004cdb0b*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cdb21*/
            if ( v55 ) /*0x1004cdb2d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cdb38*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$GT$::ha90154eee21230cb(v41); /*0x1004cdb44*/
          }
          goto LABEL_35; /*0x1004cdb6e*/
        }
LABEL_21:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004cd36f*/
        v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x1004cd37e*/
        if ( !v13 ) /*0x1004cd386*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004cdb7d*/
        *(_QWORD *)v13 = v59; /*0x1004cd390*/
        *(_QWORD *)(v13 + 8) = v10; /*0x1004cd393*/
        *(_BYTE *)(v13 + 16) = v11; /*0x1004cd397*/
        v14 = *(_DWORD *)&v65[3]; /*0x1004cd39e*/
        *(_DWORD *)(v13 + 17) = *(_DWORD *)v65; /*0x1004cd3a1*/
        *(_DWORD *)(v13 + 20) = v14; /*0x1004cd3a4*/
        v53[0] = 1; /*0x1004cd3a7*/
        v53[1] = v13; /*0x1004cd3b2*/
        v53[2] = 1; /*0x1004cd3b9*/
        codexmate_lib::commands::accounts::FileRestoreState::restore::h09b233f9d641adf6(&v45, v43); /*0x1004cd3d5*/
        v15 = v45; /*0x1004cd3da*/
        if ( v45 != 0x8000000000000000LL /*0x1004cd469*/
          || (codexmate_lib::commands::accounts::FileRestoreState::restore::h09b233f9d641adf6(&v45, &__dsta[16]),
              v15 = v45,
              v45 != 0x8000000000000000LL)
          || (codexmate_lib::commands::accounts::FileRestoreState::restore::h09b233f9d641adf6(&v45, &__dsta[64]),
              v15 = v45,
              v45 != 0x8000000000000000LL)
          || (codexmate_lib::commands::accounts::FileRestoreState::restore::h09b233f9d641adf6(&v45, &__dsta[112]),
              v15 = v45,
              v45 != 0x8000000000000000LL) )
        {
          v61 = v46[1]; /*0x1004cd47d*/
          v60 = v46[0]; /*0x1004cd481*/
          v45 = v15; /*0x1004cd485*/
          v55 = &v45; /*0x1004cd4a2*/
          v56 = (__int64 (__fastcall **)())_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004cd4ad*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v50, byte_10122A57C, (unsigned __int64)&v55); /*0x1004cd4c3*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(v53); /*0x1004cd4cf*/
          v16 = v53[1]; /*0x1004cd4d4*/
          *(_QWORD *)(v53[1] + 40LL) = v50[2]; /*0x1004cd4e2*/
          v17 = v50[0]; /*0x1004cd4e6*/
          *(_QWORD *)(v16 + 32) = v50[1]; /*0x1004cd4f4*/
          *(_QWORD *)(v16 + 24) = v17; /*0x1004cd4f8*/
          v53[2] = 2; /*0x1004cd4fc*/
          if ( v45 ) /*0x1004cd511*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cd51f*/
        }
        v18 = v52; /*0x1004cd537*/
        codexmate_lib::commands::accounts::refresh_full_runtime_snapshot_with_source::hbce7c3d3e06a3523(&v45); /*0x1004cd53e*/
        core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..models..CoreSnapshotPayload$C$alloc..string..String$GT$$GT$::hdb0fbe45242a8a77( /*0x1004cd54a*/
          &v45,
          v18);
        alloc::str::join_generic_copy::hd50f750ef8c6057e((unsigned __int64 *)&v45, v53[1], v53[2], " | ", 3u); /*0x1004cd571*/
        __dst[3] = v46[1]; /*0x1004cd57d*/
        v19 = v45; /*0x1004cd581*/
        __dst[2] = v46[0]; /*0x1004cd58f*/
        __dst[1] = v19; /*0x1004cd593*/
        *__dst = 2; /*0x1004cd597*/
        v20 = v53[2]; /*0x1004cd59e*/
        if ( v53[2] ) /*0x1004cd5a8*/
        {
          v21 = v53[1] + 8LL; /*0x1004cd5b1*/
          do /*0x1004cd5c7*/
          {
            if ( *(_QWORD *)(v21 - 8) ) /*0x1004cd5c9*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cd5da*/
            v21 += 24; /*0x1004cd5c0*/
            --v20; /*0x1004cd5c4*/
          }
          while ( v20 ); /*0x1004cd5c7*/
        }
        if ( v53[0] ) /*0x1004cd5eb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cd601*/
LABEL_35:
        core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..SwitchRollbackState$GT$::h833f8bb42ee0201e(v43); /*0x1004cd606*/
        return __dst; /*0x1004cd60d*/
      }
    }
    else
    {
      v59 = v46[0]; /*0x1004cd300*/
      v10 = v46[1]; /*0x1004cd304*/
      v11 = v46[2]; /*0x1004cd30b*/
      *(_DWORD *)v65 = *(_DWORD *)((char *)&v46[2] + 1); /*0x1004cd319*/
      *(_DWORD *)&v65[3] = HIDWORD(v46[2]); /*0x1004cd322*/
      memcpy(v40, &v46[3], sizeof(v40)); /*0x1004cd338*/
      if ( (_BYTE)v58 ) /*0x1004cd341*/
        goto LABEL_20; /*0x1004cd341*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1004cdbe8*/
      && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      *((_BYTE *)v6 + 8) = 1; /*0x1004cdbf5*/
    }
    goto LABEL_20; /*0x1004cdbfa*/
  }
  __dst[3] = v41[2]; /*0x1004cd014*/
  v4 = v41[0]; /*0x1004cd018*/
  __dst[2] = v41[1]; /*0x1004cd026*/
  __dst[1] = v4; /*0x1004cd02a*/
  *__dst = 2; /*0x1004cd02e*/
  return __dst; /*0x1004cd615*/
}