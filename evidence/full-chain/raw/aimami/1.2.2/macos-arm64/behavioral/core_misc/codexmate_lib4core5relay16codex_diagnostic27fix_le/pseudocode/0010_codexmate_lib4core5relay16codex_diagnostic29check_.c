// mac 1.2.2 NEW codexmate_lib4core5relay16codex_diagnostic27fix_le 0x1009f9b10 d=1
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_legacy_migrated_threads::h90f2c01bdd99f59f(
        _QWORD *a1,
        _QWORD *a2,
        int a3)
{
  __int64 v4; // r13
  _QWORD *v5; // rax
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r13
  size_t v17; // rbx
  int v18; // eax
  size_t v19; // rcx
  unsigned __int64 v20; // rax
  size_t v21; // rdx
  unsigned __int64 v22; // rsi
  void *v23; // rax
  void *v24; // r14
  __int64 v25; // rax
  __int64 v26; // r13
  size_t v27; // r12
  __int64 v28; // r15
  __int64 v29; // rax
  void *v30; // rbx
  const void *v31; // rsi
  size_t v32; // rdx
  __int64 result; // rax
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // r12
  __int64 v38; // rax
  char v39; // cl
  __int64 v40; // r14
  const __m128i *v41; // r13
  const __m128i *v43; // rbx
  int v44; // r15d
  __int64 v45; // r14
  _QWORD v46[14]; // [rsp+0h] [rbp-250h] BYREF
  size_t v47; // [rsp+70h] [rbp-1E0h] BYREF
  size_t v48; // [rsp+78h] [rbp-1D8h]
  size_t v49; // [rsp+80h] [rbp-1D0h]
  size_t v50[14]; // [rsp+88h] [rbp-1C8h] BYREF
  _QWORD *v51; // [rsp+F8h] [rbp-158h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+100h] [rbp-150h]
  size_t v53; // [rsp+108h] [rbp-148h]
  size_t v54; // [rsp+110h] [rbp-140h]
  size_t v55; // [rsp+118h] [rbp-138h]
  size_t v56; // [rsp+120h] [rbp-130h]
  size_t v57; // [rsp+128h] [rbp-128h]
  sqlite3_stmt *v58; // [rsp+130h] [rbp-120h]
  __int64 v59; // [rsp+138h] [rbp-118h] BYREF
  _QWORD v60[2]; // [rsp+140h] [rbp-110h] BYREF
  __int64 v61; // [rsp+150h] [rbp-100h]
  size_t v62; // [rsp+158h] [rbp-F8h] BYREF
  size_t v63; // [rsp+160h] [rbp-F0h]
  size_t v64; // [rsp+168h] [rbp-E8h]
  size_t v65; // [rsp+170h] [rbp-E0h]
  _QWORD v66[3]; // [rsp+198h] [rbp-B8h] BYREF
  const __m128i *v67; // [rsp+1B0h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+1B8h] [rbp-98h]
  unsigned __int64 v69; // [rsp+1C0h] [rbp-90h]
  __int64 v70; // [rsp+1C8h] [rbp-88h]
  _QWORD v71[2]; // [rsp+1D0h] [rbp-80h] BYREF
  _QWORD *v72; // [rsp+1E0h] [rbp-70h]
  __int64 v73; // [rsp+1E8h] [rbp-68h] BYREF
  _QWORD *v74; // [rsp+1F0h] [rbp-60h]
  __int64 v75; // [rsp+1F8h] [rbp-58h]
  size_t v76; // [rsp+200h] [rbp-50h]
  __int64 v77; // [rsp+208h] [rbp-48h]
  __int64 v78; // [rsp+210h] [rbp-40h]
  int v79; // [rsp+21Ch] [rbp-34h]
  size_t v80; // [rsp+220h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h3e0dde50a913824a(v60, a2); /*0x1009f9b30*/
  v4 = v61; /*0x1009f9b35*/
  if ( !v61 ) /*0x1009f9b3f*/
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::h448037a5770994f9( /*0x1009fa149*/
      a1,
      &anon_8b24e3f70b5df2fccdf26f545f136f0f_497,
      23,
      &unk_1015A1D69,
      51);
    goto LABEL_39; /*0x1009fa149*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009f9b45*/
  v5 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 8u); /*0x1009f9b54*/
  if ( !v5 ) /*0x1009f9b5c*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16); /*0x1009fa3af*/
  *v5 = "aimami_codex_routerwarning"; /*0x1009f9b69*/
  v5[1] = 19; /*0x1009f9b6c*/
  v73 = 1; /*0x1009f9b74*/
  v74 = v5; /*0x1009f9b7c*/
  v75 = 1; /*0x1009f9b80*/
  v6 = 1; /*0x1009f9b88*/
  if ( (a3 & 1) == 0 ) /*0x1009f9b90*/
  {
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v73, 8, 1); /*0x1009f9b96*/
    v5 = v74; /*0x1009f9b9b*/
    v74[2] = &anon_8b24e3f70b5df2fccdf26f545f136f0f_234; /*0x1009f9ba6*/
    v5[3] = 6; /*0x1009f9baa*/
    v75 = 2; /*0x1009f9bb2*/
    v6 = 2; /*0x1009f9bba*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4c716e8e2fb2fa9c( /*0x1009f9bcf*/
    v46,
    v5,
    (char *)v5 + (unsigned int)(16 * v6));
  v79 = a3; /*0x1009f9bd4*/
  v7 = v46[1]; /*0x1009f9bd7*/
  v8 = v46[2]; /*0x1009f9bde*/
  alloc::str::join_generic_copy::hfccd3ffc09b1fad9(v50, v46[1], v46[2], &unk_1015A1D9C, 1u); /*0x1009f9bff*/
  v66[2] = v50[2]; /*0x1009f9c0b*/
  v66[1] = v50[1]; /*0x1009f9c20*/
  v66[0] = v50[0]; /*0x1009f9c27*/
  if ( v8 ) /*0x1009f9c31*/
  {
    v9 = v7 + 8; /*0x1009f9c33*/
    do /*0x1009f9c47*/
    {
      if ( *(_QWORD *)(v9 - 8) ) /*0x1009f9c49*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f9c5a*/
      v9 += 24; /*0x1009f9c40*/
      --v8; /*0x1009f9c44*/
    }
    while ( v8 ); /*0x1009f9c47*/
  }
  if ( v46[0] ) /*0x1009f9c6b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f9c7d*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1009f9c89*/
  v11 = v10; /*0x1009f9c8b*/
  v12 = *(_BYTE *)(v10 + 16) == 1; /*0x1009f9c8e*/
  v72 = a1; /*0x1009f9c92*/
  if ( v12 ) /*0x1009f9c96*/
  {
    v13 = *(_QWORD *)v10; /*0x1009f9c9c*/
    v14 = *(_QWORD *)(v11 + 8); /*0x1009f9c9f*/
  }
  else
  {
    v13 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1009fa3b6*/
    *(_QWORD *)v11 = v13; /*0x1009fa3bb*/
    *(_QWORD *)(v11 + 8) = v14; /*0x1009fa3be*/
    *(_BYTE *)(v11 + 16) = 1; /*0x1009fa3c2*/
  }
  *(_QWORD *)v11 = v13 + 1; /*0x1009f9cb1*/
  v70 = 0; /*0x1009f9cbb*/
  v69 = 0; /*0x1009f9cc9*/
  v68 = 0; /*0x1009f9cd7*/
  v67 = (const __m128i *)&xmmword_101513850; /*0x1009f9ce5*/
  v71[0] = v13; /*0x1009f9cec*/
  v71[1] = v14; /*0x1009f9cf0*/
  v78 = v60[1]; /*0x1009f9cfb*/
  v77 = v4; /*0x1009f9cff*/
  v15 = 24 * v4; /*0x1009f9d0b*/
  v16 = 0; /*0x1009f9d0f*/
  v76 = 0x8000000000000013LL; /*0x1009f9d24*/
  v80 = v15; /*0x1009f9d28*/
  do /*0x1009f9d3f*/
  {
    rusqlite::Connection::open_with_flags::he05a01f64a2af598( /*0x1009f9d5b*/
      v50,
      *(_QWORD *)(v78 + v16 + 8),
      *(_QWORD *)(v78 + v16 + 16),
      1);
    if ( LOBYTE(v50[13]) == 3 ) /*0x1009f9d67*/
    {
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2((__int64 *)v50); /*0x1009f9d33*/
    }
    else
    {
      qmemcpy(v46, v50, sizeof(v46)); /*0x1009f9d74*/
      v51 = v66; /*0x1009f9d7e*/
      v52 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1009f9d8c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v62, byte_1015A1D9D, (unsigned __int64)&v51); /*0x1009f9da8*/
      v17 = v62; /*0x1009f9dad*/
      rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v50, v46, v63, v64); /*0x1009f9dcb*/
      if ( LOBYTE(v50[0]) ) /*0x1009f9dd7*/
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2((__int64 *)&v50[1]); /*0x1009f9de0*/
        if ( v17 ) /*0x1009f9de8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f9df5*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251((__int64)v46); /*0x1009f9dfd*/
        v15 = v80; /*0x1009f9e02*/
      }
      else
      {
        v58 = (sqlite3_stmt *)v50[8]; /*0x1009f9e1b*/
        v57 = v50[7]; /*0x1009f9e26*/
        v56 = v50[6]; /*0x1009f9e31*/
        v55 = v50[5]; /*0x1009f9e3c*/
        v54 = v50[4]; /*0x1009f9e47*/
        v53 = v50[3]; /*0x1009f9e52*/
        v52 = (__int64 (__fastcall *)())v50[2]; /*0x1009f9e60*/
        v51 = (_QWORD *)v50[1]; /*0x1009f9e67*/
        if ( v17 ) /*0x1009f9e71*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009f9e7e*/
        v18 = sqlite3_bind_parameter_count(v58); /*0x1009f9e8a*/
        if ( v18 ) /*0x1009f9e94*/
        {
          v62 = v76; /*0x1009f9e9a*/
          v63 = 0; /*0x1009f9ea1*/
          v64 = v18; /*0x1009f9eac*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2((__int64 *)&v62); /*0x1009f9eba*/
          v15 = v80; /*0x1009f9ebf*/
          v19 = 8; /*0x1009f9ec3*/
          v20 = 0; /*0x1009f9ec8*/
          v21 = 0; /*0x1009f9eca*/
        }
        else
        {
          v50[0] = 1; /*0x1009f9ed1*/
          v50[1] = (size_t)&v51; /*0x1009f9ee3*/
          v50[2] = 0; /*0x1009f9eea*/
          v50[3] = 0x8000000000000001LL; /*0x1009f9efb*/
          v50[6] = 0x8000000000000001LL; /*0x1009f9f02*/
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::ha41bfd632e0e2a2f( /*0x1009f9f13*/
            &v47,
            v50);
          v15 = v80; /*0x1009f9f18*/
          v65 = v49; /*0x1009f9f2a*/
          v64 = v48; /*0x1009f9f3c*/
          v63 = v47; /*0x1009f9f40*/
          v21 = v47; /*0x1009f9f43*/
          v19 = v48; /*0x1009f9f4a*/
          v20 = v49; /*0x1009f9f51*/
        }
        v62 = v19; /*0x1009f9f60*/
        v63 = v19; /*0x1009f9f67*/
        v64 = v21; /*0x1009f9f6e*/
        v65 = v19 + 24 * v20; /*0x1009f9f75*/
        v22 = (v20 + 1) >> 1; /*0x1009f9f80*/
        if ( !v70 ) /*0x1009f9f8b*/
          v22 = v20; /*0x1009f9f8b*/
        if ( v22 > v69 ) /*0x1009f9f96*/
          hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(&v67, v22, v71, 1); /*0x1009fa008*/
        v50[3] = v65; /*0x1009f9f9f*/
        v50[2] = v64; /*0x1009f9fad*/
        v50[1] = v63; /*0x1009f9fc2*/
        v50[0] = v62; /*0x1009f9fc9*/
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h7c80b1f58d32055b( /*0x1009f9fda*/
          v50,
          &v67);
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(&v51); /*0x1009f9fe6*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251((__int64)v46); /*0x1009f9fee*/
      }
    }
    v16 += 24; /*0x1009f9d38*/
  }
  while ( v15 != v16 ); /*0x1009f9d3f*/
  v59 = v70; /*0x1009fa016*/
  if ( v70 ) /*0x1009fa020*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009fa026*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x17u, 1u); /*0x1009fa035*/
    if ( !v23 ) /*0x1009fa03d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009fa3d5*/
    v24 = v23; /*0x1009fa043*/
    qmemcpy(v23, "legacy_migrated_threads", 23); /*0x1009fa06c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009fa06f*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1009fa07e*/
    if ( !v25 ) /*0x1009fa086*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009fa3e6*/
    v26 = v25; /*0x1009fa08c*/
    *(_BYTE *)(v25 + 4) = 114; /*0x1009fa08f*/
    *(_DWORD *)v25 = 1869771365; /*0x1009fa093*/
    v46[0] = &v59; /*0x1009fa0a0*/
    v46[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1009fa0ae*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v50, byte_1016FC984, (unsigned __int64)v46); /*0x1009fa0ca*/
    v27 = v50[0]; /*0x1009fa0cf*/
    v80 = v50[1]; /*0x1009fa0dd*/
    v76 = v50[2]; /*0x1009fa0e8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009fa0ec*/
    if ( (v79 & 1) != 0 ) /*0x1009fa0f5*/
    {
      v28 = 110; /*0x1009fa0fb*/
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x6Eu, 1u); /*0x1009fa10b*/
      if ( v29 ) /*0x1009fa113*/
      {
        v30 = (void *)v29; /*0x1009fa119*/
        v31 = &unk_1015A1F34; /*0x1009fa11c*/
        v32 = 110; /*0x1009fa123*/
        goto LABEL_46; /*0x1009fa128*/
      }
    }
    else
    {
      v28 = 178; /*0x1009fa1c4*/
      v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xB2u, 1u); /*0x1009fa1d4*/
      if ( v38 ) /*0x1009fa1dc*/
      {
        v30 = (void *)v38; /*0x1009fa1e2*/
        v31 = &unk_1015A1E82; /*0x1009fa1e5*/
        v32 = 178; /*0x1009fa1ec*/
LABEL_46:
        memcpy(v30, v31, v32); /*0x1009fa1f1*/
        v39 = v79 ^ 1; /*0x1009fa1fc*/
        _RAX = (unsigned __int64)v72; /*0x1009fa1ff*/
        *v72 = 23; /*0x1009fa203*/
        *(_QWORD *)(_RAX + 8) = v24; /*0x1009fa20a*/
        *(_QWORD *)(_RAX + 16) = 23; /*0x1009fa20e*/
        *(_QWORD *)(_RAX + 24) = 5; /*0x1009fa216*/
        *(_QWORD *)(_RAX + 32) = v26; /*0x1009fa21e*/
        *(_QWORD *)(_RAX + 40) = 5; /*0x1009fa222*/
        *(_QWORD *)(_RAX + 48) = v27; /*0x1009fa22a*/
        *(_QWORD *)(_RAX + 56) = v80; /*0x1009fa232*/
        *(_QWORD *)(_RAX + 64) = v76; /*0x1009fa23a*/
        *(_QWORD *)(_RAX + 72) = v28; /*0x1009fa23e*/
        *(_QWORD *)(_RAX + 80) = v30; /*0x1009fa242*/
        *(_QWORD *)(_RAX + 88) = v28; /*0x1009fa246*/
        *(_BYTE *)(_RAX + 96) = v39; /*0x1009fa24a*/
        v35 = v77; /*0x1009fa24d*/
        v36 = v78; /*0x1009fa251*/
        v37 = v68; /*0x1009fa255*/
        if ( v68 ) /*0x1009fa25f*/
          goto LABEL_47; /*0x1009fa25f*/
        goto LABEL_57; /*0x1009fa25f*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009fa3f5*/
  }
  HIDWORD(_RAX) = (unsigned __int64)codexmate_lib::core::relay::codex_diagnostic::ok_item::h448037a5770994f9( /*0x1009fa1a2*/
                                      v72,
                                      &anon_8b24e3f70b5df2fccdf26f545f136f0f_497,
                                      23,
                                      &unk_1015A1E67,
                                      27) >> 32;
  v35 = v77; /*0x1009fa1a7*/
  v36 = v78; /*0x1009fa1ab*/
  v37 = v68; /*0x1009fa1af*/
  if ( v68 ) /*0x1009fa1b9*/
  {
LABEL_47:
    v40 = v70; /*0x1009fa265*/
    if ( v70 ) /*0x1009fa26f*/
    {
      v41 = v67; /*0x1009fa275*/
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v67)); /*0x1009fa287*/
      v43 = v67 + 1; /*0x1009fa28a*/
      do /*0x1009fa2a0*/
      {
        if ( !(_WORD)_R15D ) /*0x1009fa2a6*/
        {
          do /*0x1009fa2cb*/
          {
            v44 = _mm_movemask_epi8(_mm_load_si128(v43)); /*0x1009fa2b4*/
            v41 -= 24; /*0x1009fa2b9*/
            ++v43; /*0x1009fa2c0*/
          }
          while ( v44 == 0xFFFF ); /*0x1009fa2cb*/
          _R15D = ~v44; /*0x1009fa2cd*/
        }
        __asm { tzcnt eax, r15d } /*0x1009fa2d0*/
        if ( *((_QWORD *)&v41[-1] - 3 * _RAX - 1) ) /*0x1009fa2dc*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009fa2f4*/
        --v40; /*0x1009fa290*/
        _RAX = _R15D & (unsigned int)(_R15D - 1); /*0x1009fa297*/
        _R15D &= _R15D - 1; /*0x1009fa29a*/
      }
      while ( v40 ); /*0x1009fa2a0*/
    }
    v35 = v77; /*0x1009fa312*/
    v36 = v78; /*0x1009fa316*/
    if ( ((24 * v37 + 39) & 0xFFFFFFFFFFFFFFF0LL) + v37 != -17 ) /*0x1009fa31a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009fa32e*/
  }
LABEL_57:
  if ( v66[0] ) /*0x1009fa33d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009fa34b*/
  if ( v73 ) /*0x1009fa357*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009fa366*/
  v45 = v36 + 8; /*0x1009fa36b*/
  do /*0x1009fa387*/
  {
    if ( *(_QWORD *)(v45 - 8) ) /*0x1009fa38d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009fa39e*/
    v45 += 24; /*0x1009fa380*/
    --v35; /*0x1009fa384*/
  }
  while ( v35 ); /*0x1009fa387*/
LABEL_39:
  result = v60[0]; /*0x1009fa14e*/
  if ( v60[0] ) /*0x1009fa158*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009fa16e*/
  return result; /*0x1009fa173*/
}