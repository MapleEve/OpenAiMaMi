// __ZN13codexmate_lib8commands8accounts38load_full_runtime_snapshot_with_policy @ 0x1006a4c10
_QWORD *__fastcall codexmate_lib::commands::accounts::load_full_runtime_snapshot_with_policy::h6efd79d1360ff2cc(
        void *a1,
        __int64 *a2,
        unsigned __int8 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r12
  char v9; // al
  __int64 v10; // rdx
  const __m128i *v11; // rbx
  const __m128i *v12; // r14
  char v13; // r15
  bool v14; // zf
  __int64 *v15; // r12
  char *v16; // rax
  _QWORD *v17; // rbx
  int v18; // ecx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rdx
  const void *v22; // r13
  size_t v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  _QWORD *v28; // rsi
  const __m128i *v30; // r15
  const __m128i *v31; // r12
  const __m128i *v32; // r13
  const __m128i *v34; // r14
  int v35; // ebx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // r12
  void *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // r14
  char v47; // r15
  int v48; // eax
  char *v49; // rdx
  void *v50; // rax
  void *v51; // r15
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // r14
  __int64 v60; // rbx
  __int64 v61; // r15
  __int64 v62; // rbx
  _QWORD *v63; // r14
  __int64 v64; // rsi
  int v66; // eax
  char v67; // al
  char v68; // al
  _QWORD v69[134]; // [rsp+0h] [rbp-13D0h] BYREF
  _QWORD v70[102]; // [rsp+430h] [rbp-FA0h] BYREF
  const __m128i *v71[134]; // [rsp+760h] [rbp-C70h] BYREF
  _QWORD v72[102]; // [rsp+B90h] [rbp-840h] BYREF
  _QWORD v73[134]; // [rsp+EC0h] [rbp-510h] BYREF
  _QWORD v74[5]; // [rsp+12F0h] [rbp-E0h] BYREF
  __int64 v75; // [rsp+1318h] [rbp-B8h]
  __int64 v76; // [rsp+1320h] [rbp-B0h]
  __int64 v77; // [rsp+1328h] [rbp-A8h]
  __int64 v78; // [rsp+1330h] [rbp-A0h]
  __int64 v79; // [rsp+1338h] [rbp-98h] BYREF
  __int64 v80; // [rsp+1340h] [rbp-90h]
  __int64 v81; // [rsp+1348h] [rbp-88h]
  _QWORD *v82; // [rsp+1350h] [rbp-80h]
  __int64 v83; // [rsp+1358h] [rbp-78h] BYREF
  __int64 v84; // [rsp+1360h] [rbp-70h]
  __int64 v85; // [rsp+1368h] [rbp-68h]
  _DWORD v86[2]; // [rsp+1370h] [rbp-60h]
  __int64 v87; // [rsp+1378h] [rbp-58h]
  size_t v88; // [rsp+1380h] [rbp-50h]
  void *v89; // [rsp+1388h] [rbp-48h]
  int v90; // [rsp+1394h] [rbp-3Ch]
  __int64 *v91; // [rsp+1398h] [rbp-38h]
  int v92; // [rsp+13A4h] [rbp-2Ch]

  v69[117] = 0; /*0x1006a4c24*/
  v5 = *a2; /*0x1006a4c39*/
  if ( !*a2 ) /*0x1006a4c39*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1006a565b*/
  v91 = a2; /*0x1006a4c45*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1006a4c49*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006a4c58*/
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x1006a566b*/
  else
    v8 = 0; /*0x1006a4c64*/
  v9 = *((_BYTE *)v91 + 8); /*0x1006a4c75*/
  v89 = a1; /*0x1006a4c7b*/
  if ( v9 )
  {
    v71[0] = nullptr; /*0x1006a4c85*/
    v71[1] = (const __m128i *)1; /*0x1006a4c90*/
    v71[2] = nullptr; /*0x1006a4c9b*/
    v73[2] = 1610612768; /*0x1006a4ca6*/
    v73[0] = v71; /*0x1006a4cb8*/
    v73[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006a4cc6*/
    if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                            "poisoned lock: another task failed inside",
                            41,
                            v73) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006a5695*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v79,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v11 = v71[0]; /*0x1006a4cf0*/
    v12 = v71[1]; /*0x1006a4cf7*/
    v13 = (char)v71[2]; /*0x1006a4cfe*/
    v86[0] = *(_DWORD *)((char *)&v71[2] + 1); /*0x1006a4d0c*/
    *(_DWORD *)((char *)v86 + 3) = HIDWORD(v71[2]); /*0x1006a4d15*/
    v14 = v8 == 0; /*0x1006a4d18*/
    v15 = v91; /*0x1006a4d1b*/
    if ( v14
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             "poisoned lock: another task failed inside",
                             41,
                             v10,
                             &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
    {
      *((_BYTE *)v15 + 8) = 1; /*0x1006a56ac*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v15); /*0x1006a4d31*/
    v16 = (char *)v89; /*0x1006a4d36*/
    *((_QWORD *)v89 + 1) = v11; /*0x1006a4d3a*/
    v17 = v16; /*0x1006a4d3e*/
    *((_QWORD *)v16 + 2) = v12; /*0x1006a4d41*/
    v16[24] = v13; /*0x1006a4d45*/
    v18 = *(_DWORD *)((char *)v86 + 3); /*0x1006a4d4c*/
    *(_DWORD *)(v16 + 25) = v86[0]; /*0x1006a4d4f*/
    *((_DWORD *)v16 + 7) = v18; /*0x1006a4d52*/
    *(_QWORD *)v16 = 3; /*0x1006a4d55*/
  }
  else
  {
    v82 = v91 + 2; /*0x1006a4d6c*/
    codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(v73); /*0x1006a4d70*/
    if ( v73[0] == 2 )
    {
      qmemcpy(v70, &v73[1], 0x60u); /*0x1006a4d9f*/
      v83 = 0; /*0x1006a4da2*/
      v84 = 1; /*0x1006a4daa*/
      v85 = 0; /*0x1006a4db2*/
      v72[2] = 1610612768; /*0x1006a4dba*/
      v72[0] = &v83; /*0x1006a4dc9*/
      v72[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006a4dd7*/
      v19 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006a4de8*/
              v70,
              v72);
      v17 = v89; /*0x1006a4def*/
      if ( v19 ) /*0x1006a4df3*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006a56d8*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v79,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v79 = v83; /*0x1006a4e01*/
      v80 = v84; /*0x1006a4e08*/
      v81 = v85; /*0x1006a4e13*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v73[1]); /*0x1006a4e1d*/
      v20 = v79; /*0x1006a4e29*/
      v21 = v80; /*0x1006a4e30*/
      v74[3] = v79; /*0x1006a4e37*/
      v74[4] = v80; /*0x1006a4e3e*/
      v75 = v81; /*0x1006a4e45*/
      v17[3] = v81; /*0x1006a4e4c*/
      v17[2] = v21; /*0x1006a4e50*/
      v17[1] = v20; /*0x1006a4e54*/
      *v17 = 3; /*0x1006a4e58*/
      if ( !v8 /*0x1006a5747*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               &v73[1],
                               v72,
                               v21,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v91 + 8) = 1; /*0x1006a5758*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v91); /*0x1006a4e81*/
    }
    else
    {
      v78 = v73[3]; /*0x1006a4e8f*/
      v77 = v73[2]; /*0x1006a4e9e*/
      v76 = v73[1]; /*0x1006a4ea5*/
      memcpy(&v71[4], &v73[4], 0x410u); /*0x1006a4ebf*/
      v75 = v73[3]; /*0x1006a4ecb*/
      v71[1] = (const __m128i *)v73[1]; /*0x1006a4ee0*/
      v71[2] = (const __m128i *)v73[2]; /*0x1006a4ee7*/
      v71[3] = (const __m128i *)v73[3]; /*0x1006a4eee*/
      v71[0] = (const __m128i *)v73[0]; /*0x1006a4ef5*/
      v22 = (const void *)v91[51]; /*0x1006a4f00*/
      v23 = v91[52]; /*0x1006a4f07*/
      if ( v23 ) /*0x1006a4f11*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v71[4], &v73[4]); /*0x1006a4f13*/
        v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1); /*0x1006a4f20*/
        if ( !v24 ) /*0x1006a4f28*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23); /*0x1006a4f32*/
      }
      else
      {
        v24 = 1; /*0x1006a4f3c*/
      }
      v87 = v24; /*0x1006a4f41*/
      memcpy((void *)v24, v22, v23); /*0x1006a4f4e*/
      memcpy(v69, v71, sizeof(v69)); /*0x1006a4f66*/
      if ( !v8 /*0x1006a572d*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v69, v71, v25, v26) )
      {
        *((_BYTE *)v91 + 8) = 1; /*0x1006a573e*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v91); /*0x1006a4f8d*/
      v27 = memcpy(v73, v69, sizeof(v73)); /*0x1006a4fa8*/
      LOBYTE(v27) = 1; /*0x1006a4fad*/
      v92 = (int)v27; /*0x1006a4faf*/
      v28 = v73; /*0x1006a4fbd*/
      v88 = v23; /*0x1006a4fc4*/
      HIDWORD(_RAX) = (unsigned __int64)codexmate_lib::core::repository::enrich_accounts_via_api_with_subscription_policy::h5e1e2136bd5f5cf1( /*0x1006a4fcb*/
                                          v71,
                                          v73,
                                          v87,
                                          v23,
                                          a3) >> 32;
      v30 = v71[1]; /*0x1006a4fd0*/
      if ( v71[1] ) /*0x1006a4fda*/
      {
        v31 = v71[3]; /*0x1006a4fe0*/
        if ( v71[3] ) /*0x1006a4fea*/
        {
          v32 = v71[0]; /*0x1006a4ff0*/
          _EBX = ~_mm_movemask_epi8(_mm_load_si128(v71[0])); /*0x1006a5001*/
          v34 = v71[0] + 1; /*0x1006a5003*/
          do /*0x1006a501d*/
          {
            if ( !(_WORD)_EBX ) /*0x1006a5022*/
            {
              do /*0x1006a504a*/
              {
                v35 = _mm_movemask_epi8(_mm_load_si128(v34)); /*0x1006a5035*/
                v32 -= 24; /*0x1006a5039*/
                ++v34; /*0x1006a5040*/
              }
              while ( v35 == 0xFFFF ); /*0x1006a504a*/
              _EBX = ~v35; /*0x1006a504c*/
            }
            __asm { tzcnt eax, ebx } /*0x1006a504e*/
            v36 = -3 * _RAX; /*0x1006a5055*/
            v28 = *((_QWORD **)&v32[-1] + v36 - 1); /*0x1006a5059*/
            if ( v28 ) /*0x1006a5061*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32[-1].i64[v36], v28, 1); /*0x1006a5071*/
            v31 = (const __m128i *)((char *)v31 - 1); /*0x1006a5010*/
            _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x1006a5016*/
            _EBX &= _EBX - 1; /*0x1006a5018*/
          }
          while ( v31 ); /*0x1006a501d*/
        }
        v37 = (24LL * (_QWORD)v30 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1006a5084*/
        v38 = (__int64)v30[1].i64 + v37 + 1; /*0x1006a508b*/
        if ( v38 ) /*0x1006a50a0*/
        {
          v28 = (_QWORD *)v38; /*0x1006a50b1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v71[0] - v37, v38, 16); /*0x1006a50b4*/
        }
      }
      v39 = *v91; /*0x1006a50bd*/
      if ( !*v91 ) /*0x1006a50bd*/
        v39 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v91); /*0x1006a56eb*/
      std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v39); /*0x1006a50c9*/
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006a50d4*/
      {
        v66 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v39, v28, v40, v41); /*0x1006a56f3*/
        LOBYTE(v66) = v66 ^ 1; /*0x1006a56f8*/
        v90 = v66; /*0x1006a56fa*/
      }
      else
      {
        v90 = 0; /*0x1006a50da*/
      }
      v42 = v91; /*0x1006a50e1*/
      v43 = v89; /*0x1006a50ed*/
      if ( *((_BYTE *)v91 + 8) )
      {
        v70[0] = 0; /*0x1006a50f7*/
        v70[1] = 1; /*0x1006a5102*/
        v70[2] = 0; /*0x1006a510d*/
        v71[2] = (const __m128i *)1610612768; /*0x1006a5118*/
        v71[0] = (const __m128i *)v70; /*0x1006a512a*/
        v71[1] = (const __m128i *)&anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006a5138*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                v71) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006a5723*/
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
            55,
            &v79,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
        v45 = v70[0]; /*0x1006a5162*/
        v46 = v70[1]; /*0x1006a5169*/
        v47 = v70[2]; /*0x1006a5170*/
        LODWORD(v72[0]) = *(_DWORD *)((char *)&v70[2] + 1); /*0x1006a517e*/
        *(_DWORD *)((char *)v72 + 3) = HIDWORD(v70[2]); /*0x1006a518a*/
        if ( !(_BYTE)v90
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          v67 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                  "poisoned lock: another task failed inside",
                  41,
                  v44,
                  &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6);
          v42 = v91; /*0x1006a5768*/
          if ( !v67 ) /*0x1006a576c*/
            *((_BYTE *)v91 + 8) = 1; /*0x1006a5772*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v42); /*0x1006a51a6*/
        v48 = v72[0]; /*0x1006a51ab*/
        v49 = (char *)v89; /*0x1006a51b7*/
        *((_DWORD *)v89 + 7) = *(_DWORD *)((char *)v72 + 3); /*0x1006a51bb*/
        *(_DWORD *)(v49 + 25) = v48; /*0x1006a51be*/
        *((_QWORD *)v49 + 1) = v45; /*0x1006a51c1*/
        v17 = v49; /*0x1006a51c5*/
        *((_QWORD *)v49 + 2) = v46; /*0x1006a51c8*/
        v49[24] = v47; /*0x1006a51cc*/
        *(_QWORD *)v49 = 3; /*0x1006a51d0*/
        if ( v88 ) /*0x1006a51de*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v88, 1); /*0x1006a51e9*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7(v73); /*0x1006a51f5*/
      }
      else
      {
        codexmate_lib::core::repository::Repository::persist_progressive_state::hba8e5e8e2d346f6d(v70, v82, v73); /*0x1006a5211*/
        if ( LODWORD(v70[0]) != 11 ) /*0x1006a521d*/
        {
          qmemcpy(v71, v70, 0x60u); /*0x1006a5239*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v71[12], &v70[12]); /*0x1006a523c*/
          v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x1006a524b*/
          if ( !v50 ) /*0x1006a5253*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x1006a57aa*/
          v51 = v50; /*0x1006a5259*/
          qmemcpy(v50, "PROGRESSIVE_STATE_SAVE_FAILED", 29); /*0x1006a5290*/
          v72[0] = v71; /*0x1006a5293*/
          v72[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1006a52a1*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v74, &unk_1017C347E, v72); /*0x1006a52bd*/
          v72[0] = 29; /*0x1006a52c2*/
          v72[1] = v51; /*0x1006a52cd*/
          v72[2] = 29; /*0x1006a52d4*/
          v72[3] = v74[0]; /*0x1006a52ed*/
          v72[4] = v74[1]; /*0x1006a52f4*/
          v72[5] = v74[2]; /*0x1006a5302*/
          v52 = v73[106]; /*0x1006a5309*/
          v42 = v91; /*0x1006a5317*/
          if ( v73[106] == v73[104] ) /*0x1006a531b*/
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v73[104]); /*0x1006a5324*/
          v53 = v73[105]; /*0x1006a5329*/
          v54 = 48 * v52; /*0x1006a5334*/
          *(_QWORD *)(v73[105] + v54 + 40) = v72[5]; /*0x1006a533f*/
          *(_QWORD *)(v53 + v54 + 32) = v72[4]; /*0x1006a534b*/
          *(_QWORD *)(v53 + v54 + 24) = v72[3]; /*0x1006a5357*/
          *(_QWORD *)(v53 + v54 + 16) = v72[2]; /*0x1006a5363*/
          v55 = v72[0]; /*0x1006a5368*/
          *(_QWORD *)(v53 + v54 + 8) = v72[1]; /*0x1006a5376*/
          *(_QWORD *)(v53 + v54) = v55; /*0x1006a537b*/
          v73[106] = v52 + 1; /*0x1006a5382*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v71); /*0x1006a5390*/
          v43 = v89; /*0x1006a5395*/
        }
        codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::h05def326631eb6ea(v71); /*0x1006a53b0*/
        v72[86] = v73[103]; /*0x1006a53bc*/
        v72[85] = v73[102]; /*0x1006a53d1*/
        v72[84] = v73[101]; /*0x1006a53d8*/
        qmemcpy(&v72[87], &v73[117], 0x78u); /*0x1006a53f2*/
        memcpy(v72, v71, 0x2A0u); /*0x1006a540b*/
        codexmate_lib::commands::accounts::store_bootstrap_snapshot_best_effort::h70c2e4619a79948f( /*0x1006a5423*/
          (__int64)v82,
          (__int64)v72,
          (__int64)"full_refresh",
          12);
        memcpy(v70, v72, sizeof(v70)); /*0x1006a543e*/
        v85 = v73[106]; /*0x1006a544a*/
        v84 = v73[105]; /*0x1006a545c*/
        v83 = v73[104]; /*0x1006a5460*/
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::hd50f06649d211a03(v71, v70); /*0x1006a5472*/
        memcpy(v43, v71, 0x380u); /*0x1006a5486*/
        if ( !(_BYTE)v90 /*0x1006a5497*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          v92 = 0; /*0x1006a577d*/
          v68 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v43, v71, v56, v57); /*0x1006a5784*/
          v42 = v91; /*0x1006a578b*/
          if ( !v68 ) /*0x1006a578f*/
            *((_BYTE *)v91 + 8) = 1; /*0x1006a5795*/
        }
        v58 = *v42; /*0x1006a549d*/
        v92 = 0; /*0x1006a54a1*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v58); /*0x1006a54a8*/
        if ( v88 ) /*0x1006a54b4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v88, 1); /*0x1006a54bf*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hfc789ea0cf95a5fc(&v73[63]); /*0x1006a54cb*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(v73); /*0x1006a54d7*/
        if ( v73[88] != 0x8000000000000000LL && v73[88] ) /*0x1006a54ee*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[89], v73[88], 1); /*0x1006a54fc*/
        v59 = v73[86]; /*0x1006a5501*/
        v60 = v73[87]; /*0x1006a5508*/
        if ( v73[87] ) /*0x1006a5512*/
        {
          v61 = v73[86]; /*0x1006a5514*/
          do /*0x1006a5532*/
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v61); /*0x1006a5523*/
            v61 += 424; /*0x1006a5528*/
            --v60; /*0x1006a552f*/
          }
          while ( v60 ); /*0x1006a5532*/
        }
        if ( v73[85] ) /*0x1006a553e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, 424LL * v73[85], 8); /*0x1006a554f*/
        v62 = v73[98]; /*0x1006a5554*/
        if ( v73[98] ) /*0x1006a555e*/
        {
          v63 = (_QWORD *)(v73[97] + 128LL); /*0x1006a5567*/
          do /*0x1006a557a*/
          {
            v64 = *(v63 - 1); /*0x1006a557c*/
            if ( v64 ) /*0x1006a5583*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v63, v64, 1); /*0x1006a558d*/
            v63 += 20; /*0x1006a5570*/
            --v62; /*0x1006a5577*/
          }
          while ( v62 ); /*0x1006a557a*/
        }
        if ( v73[96] ) /*0x1006a559e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[97], 160LL * v73[96], 8); /*0x1006a55b4*/
        v17 = v89; /*0x1006a55c0*/
        if ( LODWORD(v73[19]) != 2 ) /*0x1006a55c4*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(&v73[19]); /*0x1006a55cd*/
        if ( v73[107] != 0x8000000000000000LL && v73[107] ) /*0x1006a55e1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[108], v73[107], 1); /*0x1006a55ef*/
        if ( v73[110] != 0x8000000000000000LL && v73[110] ) /*0x1006a5603*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[111], v73[110], 1); /*0x1006a5611*/
        if ( v73[114] != 0x8000000000000000LL && v73[114] ) /*0x1006a5625*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[115], v73[114], 1); /*0x1006a5633*/
      }
    }
  }
  return v17; /*0x1006a563b*/
}