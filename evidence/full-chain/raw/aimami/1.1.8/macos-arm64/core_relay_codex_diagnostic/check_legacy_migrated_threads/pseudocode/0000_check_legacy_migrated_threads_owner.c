// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1003edf60 depth=0
// check_legacy_migrated_threads_owner
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_legacy_migrated_threads::h95c0fe7edb23348e(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        double a5)
{
  __int64 v6; // r13
  _QWORD *v7; // rax
  int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r13
  size_t v19; // rbx
  int v20; // eax
  size_t v21; // rcx
  unsigned __int64 v22; // rax
  size_t v23; // rdx
  unsigned __int64 v24; // rsi
  void *v25; // rax
  void *v26; // r14
  __int64 v27; // rax
  __int64 v28; // r13
  size_t v29; // r12
  __int64 v30; // r15
  __int64 v31; // rax
  void *v32; // rbx
  const void *v33; // rsi
  size_t v34; // rdx
  __int64 result; // rax
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // r12
  __int64 v40; // rax
  char v41; // cl
  __int64 v42; // r14
  const __m128i *v43; // r13
  const __m128i *v45; // rbx
  int v46; // r15d
  __int64 v47; // r14
  _QWORD v48[14]; // [rsp+0h] [rbp-250h] BYREF
  size_t v49; // [rsp+70h] [rbp-1E0h] BYREF
  size_t v50; // [rsp+78h] [rbp-1D8h]
  size_t v51; // [rsp+80h] [rbp-1D0h]
  size_t v52[14]; // [rsp+88h] [rbp-1C8h] BYREF
  _QWORD *v53; // [rsp+F8h] [rbp-158h] BYREF
  __int64 (__fastcall *v54)(); // [rsp+100h] [rbp-150h]
  size_t v55; // [rsp+108h] [rbp-148h]
  size_t v56; // [rsp+110h] [rbp-140h]
  size_t v57; // [rsp+118h] [rbp-138h]
  size_t v58; // [rsp+120h] [rbp-130h]
  size_t v59; // [rsp+128h] [rbp-128h]
  sqlite3_stmt *v60; // [rsp+130h] [rbp-120h]
  __int64 v61; // [rsp+138h] [rbp-118h] BYREF
  _QWORD v62[2]; // [rsp+140h] [rbp-110h] BYREF
  __int64 v63; // [rsp+150h] [rbp-100h]
  size_t v64; // [rsp+158h] [rbp-F8h] BYREF
  size_t v65; // [rsp+160h] [rbp-F0h]
  size_t v66; // [rsp+168h] [rbp-E8h]
  size_t v67; // [rsp+170h] [rbp-E0h]
  _QWORD v68[3]; // [rsp+198h] [rbp-B8h] BYREF
  const __m128i *v69; // [rsp+1B0h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+1B8h] [rbp-98h]
  unsigned __int64 v71; // [rsp+1C0h] [rbp-90h]
  __int64 v72; // [rsp+1C8h] [rbp-88h]
  _QWORD v73[2]; // [rsp+1D0h] [rbp-80h] BYREF
  _QWORD *v74; // [rsp+1E0h] [rbp-70h]
  __int64 v75; // [rsp+1E8h] [rbp-68h] BYREF
  _QWORD *v76; // [rsp+1F0h] [rbp-60h]
  __int64 v77; // [rsp+1F8h] [rbp-58h]
  size_t v78; // [rsp+200h] [rbp-50h]
  __int64 v79; // [rsp+208h] [rbp-48h]
  __int64 v80; // [rsp+210h] [rbp-40h]
  int v81; // [rsp+21Ch] [rbp-34h]
  size_t v82; // [rsp+220h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs_for_home::h53819d65dd7d53b6(v62, a2, a3); /*0x1003edf80*/
  v6 = v63; /*0x1003edf85*/
  if ( !v63 ) /*0x1003edf8f*/
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::h548789469a50c203(a1, &unk_1012C36F4, 23, &unk_1012C3A5E, 51); /*0x1003ee599*/
    goto LABEL_39; /*0x1003ee599*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003edf95*/
  v7 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 8u); /*0x1003edfa4*/
  if ( !v7 ) /*0x1003edfac*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16); /*0x1003ee7ff*/
  *v7 = "aimami_codex_routerwarning"; /*0x1003edfb9*/
  v7[1] = 19; /*0x1003edfbc*/
  v75 = 1; /*0x1003edfc4*/
  v76 = v7; /*0x1003edfcc*/
  v77 = 1; /*0x1003edfd0*/
  v8 = 1; /*0x1003edfd8*/
  if ( (a4 & 1) == 0 ) /*0x1003edfe0*/
  {
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v75); /*0x1003edfe6*/
    v7 = v76; /*0x1003edfeb*/
    v76[2] = &anon_0eedd02070250de7472aa97ee6b1a8ea_156; /*0x1003edff6*/
    v7[3] = 6; /*0x1003edffa*/
    v77 = 2; /*0x1003ee002*/
    v8 = 2; /*0x1003ee00a*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8fe48c348dfdd0ad( /*0x1003ee01f*/
    v48,
    v7,
    (char *)v7 + (unsigned int)(16 * v8));
  v81 = a4; /*0x1003ee024*/
  v9 = v48[1]; /*0x1003ee027*/
  v10 = v48[2]; /*0x1003ee02e*/
  alloc::str::join_generic_copy::hd50f750ef8c6057e(v52, v48[1], v48[2], &anon_0eedd02070250de7472aa97ee6b1a8ea_12, 1u); /*0x1003ee04f*/
  v68[2] = v52[2]; /*0x1003ee05b*/
  v68[1] = v52[1]; /*0x1003ee070*/
  v68[0] = v52[0]; /*0x1003ee077*/
  if ( v10 ) /*0x1003ee081*/
  {
    v11 = v9 + 8; /*0x1003ee083*/
    do /*0x1003ee097*/
    {
      if ( *(_QWORD *)(v11 - 8) ) /*0x1003ee099*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee0aa*/
      v11 += 24; /*0x1003ee090*/
      --v10; /*0x1003ee094*/
    }
    while ( v10 ); /*0x1003ee097*/
  }
  if ( v48[0] ) /*0x1003ee0bb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee0cd*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1003ee0d9*/
  v13 = v12; /*0x1003ee0db*/
  v14 = *(_BYTE *)(v12 + 16) == 1; /*0x1003ee0de*/
  v74 = a1; /*0x1003ee0e2*/
  if ( v14 ) /*0x1003ee0e6*/
  {
    v15 = *(_QWORD *)v12; /*0x1003ee0ec*/
    v16 = *(_QWORD *)(v13 + 8); /*0x1003ee0ef*/
  }
  else
  {
    v15 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1003ee806*/
    *(_QWORD *)v13 = v15; /*0x1003ee80b*/
    *(_QWORD *)(v13 + 8) = v16; /*0x1003ee80e*/
    *(_BYTE *)(v13 + 16) = 1; /*0x1003ee812*/
  }
  *(_QWORD *)v13 = v15 + 1; /*0x1003ee101*/
  v72 = 0; /*0x1003ee10b*/
  v71 = 0; /*0x1003ee119*/
  v70 = 0; /*0x1003ee127*/
  v69 = (const __m128i *)&xmmword_10125CF30; /*0x1003ee135*/
  v73[0] = v15; /*0x1003ee13c*/
  v73[1] = v16; /*0x1003ee140*/
  v80 = v62[1]; /*0x1003ee14b*/
  v79 = v6; /*0x1003ee14f*/
  v17 = 24 * v6; /*0x1003ee15b*/
  v18 = 0; /*0x1003ee15f*/
  v78 = 0x8000000000000013LL; /*0x1003ee174*/
  v82 = v17; /*0x1003ee178*/
  do /*0x1003ee18f*/
  {
    rusqlite::Connection::open_with_flags::hf63a0b71e0beca46( /*0x1003ee1ab*/
      v52,
      *(_QWORD *)(v80 + v18 + 8),
      *(_QWORD *)(v80 + v18 + 16),
      1);
    if ( LOBYTE(v52[13]) == 3 ) /*0x1003ee1b7*/
    {
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(v52); /*0x1003ee183*/
    }
    else
    {
      qmemcpy(v48, v52, sizeof(v48)); /*0x1003ee1c4*/
      v53 = v68; /*0x1003ee1ce*/
      v54 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003ee1dc*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v64, byte_1012C3A91, (unsigned __int64)&v53); /*0x1003ee1f8*/
      v19 = v64; /*0x1003ee1fd*/
      rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v52, v48, v65, v66, a5); /*0x1003ee21b*/
      if ( LOBYTE(v52[0]) ) /*0x1003ee227*/
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(&v52[1]); /*0x1003ee230*/
        if ( v19 ) /*0x1003ee238*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee245*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(v48, a5); /*0x1003ee24d*/
        v17 = v82; /*0x1003ee252*/
      }
      else
      {
        v60 = (sqlite3_stmt *)v52[8]; /*0x1003ee26b*/
        v59 = v52[7]; /*0x1003ee276*/
        v58 = v52[6]; /*0x1003ee281*/
        v57 = v52[5]; /*0x1003ee28c*/
        v56 = v52[4]; /*0x1003ee297*/
        v55 = v52[3]; /*0x1003ee2a2*/
        v54 = (__int64 (__fastcall *)())v52[2]; /*0x1003ee2b0*/
        v53 = (_QWORD *)v52[1]; /*0x1003ee2b7*/
        if ( v19 ) /*0x1003ee2c1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee2ce*/
        v20 = sqlite3_bind_parameter_count(v60); /*0x1003ee2da*/
        if ( v20 ) /*0x1003ee2e4*/
        {
          v64 = v78; /*0x1003ee2ea*/
          v65 = 0; /*0x1003ee2f1*/
          v66 = v20; /*0x1003ee2fc*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(&v64); /*0x1003ee30a*/
          v17 = v82; /*0x1003ee30f*/
          v21 = 8; /*0x1003ee313*/
          v22 = 0; /*0x1003ee318*/
          v23 = 0; /*0x1003ee31a*/
        }
        else
        {
          v52[0] = 1; /*0x1003ee321*/
          v52[1] = (size_t)&v53; /*0x1003ee333*/
          v52[2] = 0; /*0x1003ee33a*/
          v52[3] = 0x8000000000000001LL; /*0x1003ee34b*/
          v52[6] = 0x8000000000000001LL; /*0x1003ee352*/
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hea3ae4d77c087400( /*0x1003ee363*/
            &v49,
            v52);
          v17 = v82; /*0x1003ee368*/
          v67 = v51; /*0x1003ee37a*/
          v66 = v50; /*0x1003ee38c*/
          v65 = v49; /*0x1003ee390*/
          v23 = v49; /*0x1003ee393*/
          v21 = v50; /*0x1003ee39a*/
          v22 = v51; /*0x1003ee3a1*/
        }
        v64 = v21; /*0x1003ee3b0*/
        v65 = v21; /*0x1003ee3b7*/
        v66 = v23; /*0x1003ee3be*/
        v67 = v21 + 24 * v22; /*0x1003ee3c5*/
        v24 = (v22 + 1) >> 1; /*0x1003ee3d0*/
        if ( !v72 ) /*0x1003ee3db*/
          v24 = v22; /*0x1003ee3db*/
        if ( v24 > v71 ) /*0x1003ee3e6*/
          hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(&v69, v24, v73, 1); /*0x1003ee458*/
        v52[3] = v67; /*0x1003ee3ef*/
        v52[2] = v66; /*0x1003ee3fd*/
        v52[1] = v65; /*0x1003ee412*/
        v52[0] = v64; /*0x1003ee419*/
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha38e5828bcad3a18( /*0x1003ee42a*/
          v52,
          &v69);
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b(&v53); /*0x1003ee436*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(v48, a5); /*0x1003ee43e*/
      }
    }
    v18 += 24; /*0x1003ee188*/
  }
  while ( v17 != v18 ); /*0x1003ee18f*/
  v61 = v72; /*0x1003ee466*/
  if ( v72 ) /*0x1003ee470*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee476*/
    v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x17u, 1u); /*0x1003ee485*/
    if ( !v25 ) /*0x1003ee48d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x1003ee825*/
    v26 = v25; /*0x1003ee493*/
    qmemcpy(v25, "legacy_migrated_threads", 23); /*0x1003ee4bc*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee4bf*/
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1003ee4ce*/
    if ( !v27 ) /*0x1003ee4d6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1003ee836*/
    v28 = v27; /*0x1003ee4dc*/
    *(_BYTE *)(v27 + 4) = 114; /*0x1003ee4df*/
    *(_DWORD *)v27 = 1869771365; /*0x1003ee4e3*/
    v48[0] = &v61; /*0x1003ee4f0*/
    v48[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003ee4fe*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v52, byte_101227A7B, (unsigned __int64)v48); /*0x1003ee51a*/
    v29 = v52[0]; /*0x1003ee51f*/
    v82 = v52[1]; /*0x1003ee52d*/
    v78 = v52[2]; /*0x1003ee538*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ee53c*/
    if ( (v81 & 1) != 0 ) /*0x1003ee545*/
    {
      v30 = 110; /*0x1003ee54b*/
      v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x6Eu, 1u); /*0x1003ee55b*/
      if ( v31 ) /*0x1003ee563*/
      {
        v32 = (void *)v31; /*0x1003ee569*/
        v33 = &unk_1012C3C28; /*0x1003ee56c*/
        v34 = 110; /*0x1003ee573*/
        goto LABEL_46; /*0x1003ee578*/
      }
    }
    else
    {
      v30 = 178; /*0x1003ee614*/
      v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xB2u, 1u); /*0x1003ee624*/
      if ( v40 ) /*0x1003ee62c*/
      {
        v32 = (void *)v40; /*0x1003ee632*/
        v33 = &unk_1012C3B76; /*0x1003ee635*/
        v34 = 178; /*0x1003ee63c*/
LABEL_46:
        memcpy(v32, v33, v34); /*0x1003ee641*/
        v41 = v81 ^ 1; /*0x1003ee64c*/
        _RAX = (unsigned __int64)v74; /*0x1003ee64f*/
        *v74 = 23; /*0x1003ee653*/
        *(_QWORD *)(_RAX + 8) = v26; /*0x1003ee65a*/
        *(_QWORD *)(_RAX + 16) = 23; /*0x1003ee65e*/
        *(_QWORD *)(_RAX + 24) = 5; /*0x1003ee666*/
        *(_QWORD *)(_RAX + 32) = v28; /*0x1003ee66e*/
        *(_QWORD *)(_RAX + 40) = 5; /*0x1003ee672*/
        *(_QWORD *)(_RAX + 48) = v29; /*0x1003ee67a*/
        *(_QWORD *)(_RAX + 56) = v82; /*0x1003ee682*/
        *(_QWORD *)(_RAX + 64) = v78; /*0x1003ee68a*/
        *(_QWORD *)(_RAX + 72) = v30; /*0x1003ee68e*/
        *(_QWORD *)(_RAX + 80) = v32; /*0x1003ee692*/
        *(_QWORD *)(_RAX + 88) = v30; /*0x1003ee696*/
        *(_BYTE *)(_RAX + 96) = v41; /*0x1003ee69a*/
        v37 = v79; /*0x1003ee69d*/
        v38 = v80; /*0x1003ee6a1*/
        v39 = v70; /*0x1003ee6a5*/
        if ( v70 ) /*0x1003ee6af*/
          goto LABEL_47; /*0x1003ee6af*/
        goto LABEL_57; /*0x1003ee6af*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v30); /*0x1003ee845*/
  }
  HIDWORD(_RAX) = (unsigned __int64)codexmate_lib::core::relay::codex_diagnostic::ok_item::h548789469a50c203( /*0x1003ee5f2*/
                                      v74,
                                      &unk_1012C36F4,
                                      23,
                                      &unk_1012C3B5B,
                                      27) >> 32;
  v37 = v79; /*0x1003ee5f7*/
  v38 = v80; /*0x1003ee5fb*/
  v39 = v70; /*0x1003ee5ff*/
  if ( v70 ) /*0x1003ee609*/
  {
LABEL_47:
    v42 = v72; /*0x1003ee6b5*/
    if ( v72 ) /*0x1003ee6bf*/
    {
      v43 = v69; /*0x1003ee6c5*/
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v69)); /*0x1003ee6d7*/
      v45 = v69 + 1; /*0x1003ee6da*/
      do /*0x1003ee6f0*/
      {
        if ( !(_WORD)_R15D ) /*0x1003ee6f6*/
        {
          do /*0x1003ee71b*/
          {
            v46 = _mm_movemask_epi8(_mm_load_si128(v45)); /*0x1003ee704*/
            v43 -= 24; /*0x1003ee709*/
            ++v45; /*0x1003ee710*/
          }
          while ( v46 == 0xFFFF ); /*0x1003ee71b*/
          _R15D = ~v46; /*0x1003ee71d*/
        }
        __asm { tzcnt eax, r15d } /*0x1003ee720*/
        if ( *((_QWORD *)&v43[-1] - 3 * _RAX - 1) ) /*0x1003ee72c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee744*/
        --v42; /*0x1003ee6e0*/
        _RAX = _R15D & (unsigned int)(_R15D - 1); /*0x1003ee6e7*/
        _R15D &= _R15D - 1; /*0x1003ee6ea*/
      }
      while ( v42 ); /*0x1003ee6f0*/
    }
    v37 = v79; /*0x1003ee762*/
    v38 = v80; /*0x1003ee766*/
    if ( ((24 * v39 + 39) & 0xFFFFFFFFFFFFFFF0LL) + v39 != -17 ) /*0x1003ee76a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee77e*/
  }
LABEL_57:
  if ( v68[0] ) /*0x1003ee78d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee79b*/
  if ( v75 ) /*0x1003ee7a7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee7b6*/
  v47 = v38 + 8; /*0x1003ee7bb*/
  do /*0x1003ee7d7*/
  {
    if ( *(_QWORD *)(v47 - 8) ) /*0x1003ee7dd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee7ee*/
    v47 += 24; /*0x1003ee7d0*/
    --v37; /*0x1003ee7d4*/
  }
  while ( v37 ); /*0x1003ee7d7*/
LABEL_39:
  result = v62[0]; /*0x1003ee59e*/
  if ( v62[0] ) /*0x1003ee5a8*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ee5be*/
  return result; /*0x1003ee5c3*/
}