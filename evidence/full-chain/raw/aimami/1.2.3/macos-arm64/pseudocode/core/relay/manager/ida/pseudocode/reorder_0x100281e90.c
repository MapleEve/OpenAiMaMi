// __ZN13codexmate_lib4core5relay7manager12RelayManager7reorder @ 0x100281e90 | 基线 same-set
char *__fastcall codexmate_lib::core::relay::manager::RelayManager::reorder::h2b05ca90028d062f(
        char *__dst,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rbx
  _QWORD *v16; // r12
  __int64 v17; // rsi
  int v19; // eax
  __int64 v20; // r14
  __int64 v21; // r12
  char v22; // bl
  char v23; // r14
  _BYTE *v24; // rax
  _BYTE *v25; // r14
  char *v26; // rsi
  char *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  char *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rdi
  __int64 v35; // rdx
  char v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // r12
  __int64 v46; // rsi
  char *v47; // rdi
  _QWORD *v48; // rsi
  __int64 v50; // rbx
  const __m128i *v51; // r12
  const __m128i *v53; // r13
  int v54; // r14d
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  char v60[8]; // [rsp+0h] [rbp-390h] BYREF
  __int64 v61; // [rsp+8h] [rbp-388h]
  unsigned __int64 v62; // [rsp+10h] [rbp-380h]
  __int64 v63; // [rsp+18h] [rbp-378h]
  __int64 v64; // [rsp+20h] [rbp-370h]
  __int64 v65; // [rsp+28h] [rbp-368h]
  _QWORD v66[12]; // [rsp+128h] [rbp-268h] BYREF
  __int64 v67; // [rsp+188h] [rbp-208h] BYREF
  char *v68; // [rsp+190h] [rbp-200h]
  _QWORD v69[37]; // [rsp+1B8h] [rbp-1D8h] BYREF
  _QWORD v70[3]; // [rsp+2E0h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+2F8h] [rbp-98h]
  __int64 v72; // [rsp+300h] [rbp-90h]
  const __m128i *v73; // [rsp+308h] [rbp-88h] BYREF
  unsigned __int64 v74; // [rsp+310h] [rbp-80h]
  __int64 v75; // [rsp+318h] [rbp-78h]
  __int64 v76; // [rsp+320h] [rbp-70h]
  __int64 v77; // [rsp+328h] [rbp-68h]
  __int64 v78; // [rsp+330h] [rbp-60h]
  __int64 v79; // [rsp+338h] [rbp-58h]
  char **v80; // [rsp+340h] [rbp-50h]
  _QWORD *v81; // [rsp+348h] [rbp-48h]
  unsigned __int64 v82; // [rsp+350h] [rbp-40h]
  _QWORD *v83; // [rsp+358h] [rbp-38h]
  int v84; // [rsp+360h] [rbp-30h]
  unsigned __int8 v85; // [rsp+367h] [rbp-29h]

  v81 = a3; /*0x100281ea4*/
  v5 = a2[2]; /*0x100281eb8*/
  v82 = 0x8000000000000000LL; /*0x100281ec0*/
  if ( *(_QWORD *)(v5 + 16) == 0x8000000000000000LL ) /*0x100281ec8*/
  {
    v6 = a2[4]; /*0x100281ece*/
    v83 = (_QWORD *)(v6 + 16); /*0x100281ed6*/
    v79 = v6; /*0x100281eda*/
    v7 = *(_QWORD *)(v6 + 16); /*0x100281ede*/
    if ( !v7 ) /*0x100281ee5*/
      v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v83); /*0x100282092*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x100281eeb*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100281efe*/
    {
      v19 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, v5, v8, v9); /*0x10028209a*/
      LOBYTE(v19) = v19 ^ 1; /*0x10028209f*/
      v84 = v19; /*0x1002820a1*/
      if ( *(_BYTE *)(v79 + 24) ) /*0x1002820a8*/
        goto LABEL_6; /*0x1002820ae*/
    }
    else
    {
      v84 = 0; /*0x100281f04*/
      if ( *(_BYTE *)(v79 + 24) ) /*0x100281f0f*/
      {
LABEL_6:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v5); /*0x100281f1b*/
        v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x100281f2a*/
        if ( !v10 ) /*0x100281f32*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x100282824*/
        v13 = (unsigned __int64)v10; /*0x100281f38*/
        qmemcpy(v10, "Codex router transition lock is poisoned", 40); /*0x100281f7d*/
        if ( !(_BYTE)v84 /*0x1002826c0*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(40, 1, v11, v12) )
        {
          *(_BYTE *)(v79 + 24) = 1; /*0x1002826d1*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v83); /*0x100281f9a*/
        *((_QWORD *)__dst + 1) = 10; /*0x100281fa6*/
        *((_QWORD *)__dst + 2) = 40; /*0x100281fae*/
        __dst[24] = v13; /*0x100281fb6*/
        __dst[31] = HIBYTE(v13); /*0x100281fc1*/
        *(_WORD *)(__dst + 29) = HIDWORD(v13) >> 8; /*0x100281fc9*/
        *(_DWORD *)(__dst + 25) = v13 >> 8; /*0x100281fce*/
        *((_QWORD *)__dst + 4) = 40; /*0x100281fd2*/
        goto LABEL_11; /*0x100281fda*/
      }
    }
    codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x1002820cb*/
      v69,
      a2 + 5,
      &unk_1015DEB97,
      26);
    v20 = v69[0]; /*0x1002820d0*/
    v21 = v69[1]; /*0x1002820d7*/
    v22 = v69[2]; /*0x1002820de*/
    if ( v69[0] != 11 ) /*0x1002820e9*/
    {
      v26 = (char *)&v69[2] + 1; /*0x100282199*/
      v30 = __dst + 25; /*0x1002821a0*/
      memcpy(__dst + 25, (char *)&v69[2] + 1, 0x4Fu); /*0x1002821a9*/
      *((_QWORD *)__dst + 1) = v20; /*0x1002821ae*/
      *((_QWORD *)__dst + 2) = v21; /*0x1002821b2*/
      __dst[24] = v22; /*0x1002821b6*/
      *(_QWORD *)__dst = v82; /*0x1002821be*/
      goto LABEL_66; /*0x1002821d2*/
    }
    v85 = v69[2]; /*0x1002820ef*/
    v80 = (char **)v69[1]; /*0x1002820f2*/
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v69, a2); /*0x100282100*/
    v23 = BYTE4(v69[36]); /*0x100282105*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v69); /*0x100282114*/
    if ( v23 ) /*0x10028211c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v69, a2); /*0x100282122*/
      v24 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(107, 1); /*0x100282131*/
      if ( !v24 ) /*0x100282139*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 107); /*0x100282835*/
      v25 = v24; /*0x10028213f*/
      v26 = (char *)&unk_1015DEC2E; /*0x100282142*/
      v27 = v24; /*0x10028214e*/
      memcpy(v24, &unk_1015DEC2E, 0x6Bu); /*0x100282151*/
      *((_QWORD *)__dst + 1) = 10; /*0x100282156*/
      *((_QWORD *)__dst + 2) = 107; /*0x10028215e*/
      *((_QWORD *)__dst + 3) = v25; /*0x100282166*/
      *((_QWORD *)__dst + 4) = 107; /*0x10028216a*/
      *(_QWORD *)__dst = v82; /*0x100282176*/
      if ( (v85 & 1) != 0 ) /*0x10028218e*/
        goto LABEL_65; /*0x10028218e*/
      goto LABEL_64; /*0x10028218e*/
    }
    v33 = a2[1]; /*0x1002821d7*/
    v34 = *(_QWORD *)(v33 + 16); /*0x1002821e0*/
    if ( !v34 ) /*0x1002821e8*/
      v34 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v33 + 16); /*0x1002826f5*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v34); /*0x1002821ee*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10028220a*/
    {
      v36 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v34, a2, v35, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x100282705*/
      if ( !*(_BYTE *)(v33 + 24) ) /*0x100282711*/
        goto LABEL_31; /*0x100282711*/
    }
    else
    {
      v36 = 0; /*0x100282210*/
      if ( !*(_BYTE *)(v33 + 24) ) /*0x100282213*/
      {
LABEL_31:
        _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x100282221*/
          v60,
          v33 + 32);
        if ( !v36 /*0x100282802*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v60,
                                 v33 + 32,
                                 v37,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v33 + 24) = 1; /*0x10028280f*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v33 + 16)); /*0x100282257*/
        v38 = v81[1] + 24LL * v81[2]; /*0x10028226c*/
        v69[0] = v81[1]; /*0x100282270*/
        v69[1] = v38; /*0x100282277*/
        v69[2] = 0; /*0x10028227e*/
        _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::h8575f8a260289ab6( /*0x10028229a*/
          &v67,
          v69);
        v66[0] = &v67; /*0x1002822ad*/
        v69[0] = v66; /*0x1002822bb*/
        if ( v62 >= 2 ) /*0x1002822c6*/
        {
          if ( v62 >= 0x15 ) /*0x100282754*/
            core::slice::sort::stable::driftsort_main::h6c06f11fcd5d7ea4(v61, v62, v69); /*0x100282843*/
          else
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::hc4cab8ec9ed9c0ed(v61, v62, 1, v69); /*0x100282766*/
        }
        v39 = v64; /*0x1002822cc*/
        v40 = v65; /*0x1002822d3*/
        std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1002822e1*/
        v42 = v41; /*0x1002822e3*/
        if ( *(_BYTE *)(v41 + 16) == 1 ) /*0x1002822ea*/
        {
          v43 = *(_QWORD *)v41; /*0x1002822f0*/
          v44 = *(_QWORD *)(v42 + 8); /*0x1002822f3*/
        }
        else
        {
          v43 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100282770*/
          *(_QWORD *)v42 = v43; /*0x100282775*/
          *(_QWORD *)(v42 + 8) = v44; /*0x100282778*/
          *(_BYTE *)(v42 + 16) = 1; /*0x10028277c*/
        }
        *(_QWORD *)v42 = v43 + 1; /*0x1002822fb*/
        memset(&v69[1], 0, 24); /*0x100282321*/
        v69[0] = anon_39a6e93098609d65551b0fc4eadbbbd9_24; /*0x10028232f*/
        v69[4] = v43; /*0x100282336*/
        v69[5] = v44; /*0x10028233d*/
        if ( v40 ) /*0x100282347*/
        {
          hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(v69, v40, &v69[4], 1); /*0x10028279b*/
          v59 = v39; /*0x1002827a7*/
          v72 = v40; /*0x1002827aa*/
          do /*0x1002827e1*/
          {
            v71 = v59; /*0x1002827b4*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v66, v59); /*0x1002827bb*/
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v69, v66); /*0x1002827ca*/
            v59 = v71 + 24; /*0x1002827d6*/
            --v72; /*0x1002827da*/
          }
          while ( v72 ); /*0x1002827e1*/
        }
        v78 = v69[5]; /*0x100282354*/
        v77 = v69[4]; /*0x10028235f*/
        v76 = v69[3]; /*0x10028236a*/
        v75 = v69[2]; /*0x100282375*/
        v74 = v69[1]; /*0x100282387*/
        v73 = (const __m128i *)v69[0]; /*0x10028238b*/
        v70[0] = v61; /*0x1002823a7*/
        v70[1] = v61 + 232 * v62; /*0x1002823ae*/
        v70[2] = &v73; /*0x1002823bc*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4cce17e9bd515a2d( /*0x1002823d1*/
          v69,
          v70);
        if ( v40 ) /*0x1002823d9*/
        {
          v45 = (_QWORD *)(v39 + 8); /*0x1002823db*/
          do /*0x1002823f7*/
          {
            v46 = *(v45 - 1); /*0x1002823f9*/
            if ( v46 ) /*0x100282401*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v45, v46, 1); /*0x10028240c*/
            v45 += 3; /*0x1002823f0*/
            --v40; /*0x1002823f4*/
          }
          while ( v40 ); /*0x1002823f7*/
        }
        if ( v63 ) /*0x100282424*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, 24 * v63, 8); /*0x10028243a*/
        v65 = v69[2]; /*0x100282446*/
        v64 = v69[1]; /*0x100282458*/
        v63 = v69[0]; /*0x10028245c*/
        codexmate_lib::core::relay::manager::RelayManager::sync_codex_config::haffd47a484d4cdfa(v69, a2); /*0x100282469*/
        if ( LODWORD(v69[0]) == 11 ) /*0x100282475*/
        {
          _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x100282489*/
            v69,
            v60);
          codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(v66, a2, v69); /*0x10028249f*/
          if ( LODWORD(v66[0]) == 11 ) /*0x1002824ab*/
          {
            codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(v69, v60); /*0x1002824bf*/
            memcpy(__dst, v69, 0x128u); /*0x1002824d3*/
            _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v73); /*0x1002824df*/
            _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2c5c9c552b4e81a0(&v67); /*0x1002824eb*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v60); /*0x1002824f7*/
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x100282504*/
              v80,
              v85);
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x100282511*/
              v83,
              (unsigned __int8)v84);
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::h1b9199b71a2a5ac6(v81); /*0x10028251a*/
            return __dst; /*0x10028251f*/
          }
          v47 = __dst + 8; /*0x100282531*/
          v48 = v66; /*0x100282535*/
        }
        else
        {
          v47 = __dst + 8; /*0x100282524*/
          v48 = v69; /*0x100282528*/
        }
        qmemcpy(v47, v48, 0x60u); /*0x100282541*/
        *(_QWORD *)__dst = v82; /*0x100282548*/
        HIDWORD(_RAX) = HIDWORD(v74); /*0x10028254b*/
        if ( v74 ) /*0x100282552*/
        {
          v82 = v74; /*0x100282558*/
          v50 = v76; /*0x10028255c*/
          if ( v76 ) /*0x100282563*/
          {
            v51 = v73; /*0x100282569*/
            _R14D = ~_mm_movemask_epi8(_mm_load_si128(v73)); /*0x10028257b*/
            v53 = v73 + 1; /*0x10028257e*/
            do /*0x1002825a0*/
            {
              if ( !(_WORD)_R14D ) /*0x1002825a6*/
              {
                do /*0x1002825cd*/
                {
                  v54 = _mm_movemask_epi8(_mm_load_si128(v53)); /*0x1002825b6*/
                  v51 -= 24; /*0x1002825bb*/
                  ++v53; /*0x1002825c2*/
                }
                while ( v54 == 0xFFFF ); /*0x1002825cd*/
                _R14D = ~v54; /*0x1002825cf*/
              }
              __asm { tzcnt eax, r14d } /*0x1002825d2*/
              v55 = -3 * _RAX; /*0x1002825da*/
              v56 = *((_QWORD *)&v51[-1] + v55 - 1); /*0x1002825de*/
              if ( v56 ) /*0x1002825e6*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[-1].i64[v55], v56, 1); /*0x1002825f5*/
              --v50; /*0x100282590*/
              _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100282597*/
              _R14D &= _R14D - 1; /*0x10028259a*/
            }
            while ( v50 ); /*0x1002825a0*/
          }
          v57 = (24 * v82 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x10028260c*/
          if ( v57 + v82 != -17 ) /*0x100282617*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v73 - v57, v57 + v82 + 17, 16); /*0x100282628*/
        }
        v26 = v68; /*0x10028262d*/
        if ( v68 ) /*0x100282637*/
        {
          v58 = (24LL * (_QWORD)v68 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100282645*/
          v26 = &v68[v58 + 17]; /*0x10028264c*/
          if ( &v68[v58] != (char *)-17LL ) /*0x100282650*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67 - v58, v26, 16); /*0x100282661*/
        }
        v27 = v60; /*0x100282666*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v60); /*0x10028266d*/
        if ( (v85 & 1) != 0 ) /*0x100282687*/
          goto LABEL_65; /*0x100282687*/
LABEL_64:
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1002827e8*/
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v27, v26, v28, v29) )
        {
          *((_BYTE *)v80 + 8) = 1; /*0x1002827f9*/
        }
LABEL_65:
        v30 = *v80; /*0x100282695*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v80); /*0x10028269c*/
LABEL_66:
        if ( !(_BYTE)v84 /*0x1002826da*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v30, v26, v31, v32) )
        {
          *(_BYTE *)(v79 + 24) = 1; /*0x1002826e7*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v83); /*0x1002826b6*/
        goto LABEL_12; /*0x1002826bb*/
      }
    }
    v69[0] = v33 + 16; /*0x100282717*/
    LOBYTE(v69[1]) = v36; /*0x10028271e*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, v69, &off_10195E740, &off_10195DD50); /*0x100282746*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v69[1], v5 + 16); /*0x100281fe7*/
  v69[0] = 9; /*0x100281fec*/
  qmemcpy(__dst + 8, v69, 0x60u); /*0x100282007*/
LABEL_11:
  *(_QWORD *)__dst = v82; /*0x10028200a*/
LABEL_12:
  v14 = v81[1]; /*0x100282011*/
  v15 = v81[2]; /*0x100282019*/
  if ( v15 ) /*0x100282020*/
  {
    v16 = (_QWORD *)(v14 + 8); /*0x100282022*/
    do /*0x100282037*/
    {
      v17 = *(v16 - 1); /*0x100282039*/
      if ( v17 ) /*0x100282041*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v17, 1); /*0x10028204c*/
      v16 += 3; /*0x100282030*/
      --v15; /*0x100282034*/
    }
    while ( v15 ); /*0x100282037*/
  }
  if ( *v81 ) /*0x100282057*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 24LL * *v81, 8); /*0x10028206f*/
  return __dst; /*0x100282077*/
}