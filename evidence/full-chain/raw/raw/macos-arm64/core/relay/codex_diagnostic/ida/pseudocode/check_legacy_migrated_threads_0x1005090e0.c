// __ZN13codexmate_lib4core5relay16codex_diagnostic29check_legacy_migrated_threads @ 0x1005090e0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_legacy_migrated_threads::h1ff1735494c71606(
        _QWORD *a1,
        __int64 a2,
        int a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  _QWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r12
  _QWORD *v25; // rdi
  _QWORD *v26; // rsi
  _QWORD *v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // rax
  void *v38; // r14
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // r15
  __int64 v42; // r13
  __int64 v43; // rax
  void *v44; // rbx
  const void *v45; // rsi
  size_t v46; // rdx
  __int64 result; // rax
  __int64 v49; // rbx
  __int64 v50; // r14
  __int64 v51; // r15
  __int64 v52; // rax
  char v53; // cl
  __int64 v54; // r14
  const __m128i *v55; // r12
  const __m128i *v57; // rbx
  int v58; // r13d
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // r15
  _QWORD *v64; // r14
  __int64 v65; // rsi
  _QWORD v66[14]; // [rsp+0h] [rbp-250h] BYREF
  __int64 v67; // [rsp+70h] [rbp-1E0h] BYREF
  __int64 v68; // [rsp+78h] [rbp-1D8h]
  __int64 v69; // [rsp+80h] [rbp-1D0h]
  _QWORD v70[14]; // [rsp+88h] [rbp-1C8h] BYREF
  __int64 *v71; // [rsp+F8h] [rbp-158h] BYREF
  __int64 (__fastcall *v72)(); // [rsp+100h] [rbp-150h]
  __int64 v73; // [rsp+108h] [rbp-148h]
  __int64 v74; // [rsp+110h] [rbp-140h]
  __int64 v75; // [rsp+118h] [rbp-138h]
  __int64 v76; // [rsp+120h] [rbp-130h]
  __int64 v77; // [rsp+128h] [rbp-128h]
  sqlite3_stmt *v78; // [rsp+130h] [rbp-120h]
  __int64 v79; // [rsp+138h] [rbp-118h] BYREF
  __int64 v80; // [rsp+140h] [rbp-110h] BYREF
  __int64 v81; // [rsp+148h] [rbp-108h]
  __int64 v82; // [rsp+150h] [rbp-100h]
  unsigned __int64 v83; // [rsp+158h] [rbp-F8h] BYREF
  __int64 v84; // [rsp+160h] [rbp-F0h]
  __int64 v85; // [rsp+168h] [rbp-E8h]
  __int64 v86; // [rsp+170h] [rbp-E0h]
  const __m128i *v87; // [rsp+198h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+1A0h] [rbp-B0h]
  __int64 v89; // [rsp+1A8h] [rbp-A8h]
  __int64 v90; // [rsp+1B0h] [rbp-A0h]
  __int64 v91; // [rsp+1B8h] [rbp-98h]
  __int64 v92; // [rsp+1C0h] [rbp-90h]
  __int64 v93; // [rsp+1C8h] [rbp-88h] BYREF
  __int64 v94; // [rsp+1D0h] [rbp-80h]
  __int64 v95; // [rsp+1D8h] [rbp-78h]
  _QWORD *v96; // [rsp+1E0h] [rbp-70h]
  __int64 v97; // [rsp+1E8h] [rbp-68h] BYREF
  _QWORD *v98; // [rsp+1F0h] [rbp-60h]
  __int64 v99; // [rsp+1F8h] [rbp-58h]
  unsigned __int64 v100; // [rsp+200h] [rbp-50h]
  __int64 v101; // [rsp+208h] [rbp-48h]
  __int64 v102; // [rsp+210h] [rbp-40h]
  int v103; // [rsp+21Ch] [rbp-34h]
  __int64 v104; // [rsp+220h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(&v80); /*0x100509101*/
  if ( !v82 ) /*0x100509110*/
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x10050973e*/
      a1,
      &anon_92869709a5e99ce1936aa4e326b6c562_615,
      23,
      &unk_1015FE012,
      51);
    goto LABEL_36; /*0x10050973e*/
  }
  v102 = v82; /*0x100509116*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v80, a2); /*0x10050911a*/
  v5 = 16; /*0x10050911f*/
  v6 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8); /*0x100509129*/
  if ( !v6 ) /*0x100509131*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16); /*0x10050999f*/
  v7 = v6; /*0x100509137*/
  *v6 = &unk_1015FE045; /*0x100509141*/
  v6[1] = 19; /*0x100509144*/
  v97 = 1; /*0x10050914c*/
  v98 = v6; /*0x100509154*/
  v99 = 1; /*0x100509158*/
  v8 = 1; /*0x100509160*/
  if ( (a3 & 1) == 0 ) /*0x10050916a*/
  {
    v5 = (__int64)&v97; /*0x10050916c*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(&v97); /*0x100509170*/
    v7 = v98; /*0x100509175*/
    v98[2] = "aimai1openaicodex_router_catalog.jsonmodels_cache.json"; /*0x100509180*/
    v7[3] = 6; /*0x100509184*/
    v99 = 2; /*0x10050918c*/
    v8 = 2; /*0x100509194*/
  }
  v103 = a3; /*0x10050919a*/
  v9 = 3LL * (unsigned int)(8 * v8); /*0x1005091a6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, 8); /*0x1005091aa*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 8); /*0x1005091b7*/
  if ( !v10 ) /*0x1005091bf*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v9); /*0x1005099c3*/
  v66[0] = v8; /*0x1005091ce*/
  v66[1] = v10; /*0x1005091d5*/
  v66[2] = 0; /*0x1005091e3*/
  v70[2] = v10; /*0x1005091ee*/
  v70[0] = &v66[2]; /*0x1005091f5*/
  v70[1] = 0; /*0x1005091fc*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hf2c2088db9ae8b21( /*0x100509211*/
    v7,
    (char *)v7 + (unsigned int)(16 * v8),
    v70);
  v83 = v8; /*0x100509224*/
  v84 = v66[1]; /*0x10050922b*/
  v11 = v66[2]; /*0x100509232*/
  v85 = v66[2]; /*0x100509239*/
  v12 = v66[1]; /*0x100509254*/
  alloc::str::join_generic_copy::heca7a5e86402c6b6(v70, v66[1], v66[2], ",;  header(s): ", 1);
  v95 = v70[2]; /*0x100509266*/
  v94 = v70[1]; /*0x100509278*/
  v93 = v70[0]; /*0x10050927c*/
  if ( v11 ) /*0x100509286*/
  {
    v13 = (_QWORD *)(v66[1] + 8LL); /*0x100509288*/
    do /*0x100509297*/
    {
      v12 = *(v13 - 1); /*0x100509299*/
      if ( v12 ) /*0x1005092a0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v12, 1); /*0x1005092aa*/
      v13 += 3; /*0x100509290*/
      --v11; /*0x100509294*/
    }
    while ( v11 ); /*0x100509297*/
  }
  if ( v83 ) /*0x1005092bb*/
  {
    v12 = 24 * v83; /*0x1005092c1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66[1], 24 * v83, 8); /*0x1005092cd*/
  }
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1005092d9*/
  v19 = v14; /*0x1005092db*/
  v20 = *(_BYTE *)(v14 + 16) == 1; /*0x1005092de*/
  v96 = a1; /*0x1005092e2*/
  if ( v20 ) /*0x1005092e6*/
  {
    v21 = *(_QWORD *)v14; /*0x1005092ec*/
    v22 = *(_QWORD *)(v19 + 8); /*0x1005092ef*/
  }
  else
  {
    v21 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1005099a6*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v12,
            v15,
            v16);
    *(_QWORD *)v19 = v21; /*0x1005099ab*/
    *(_QWORD *)(v19 + 8) = v22; /*0x1005099ae*/
    *(_BYTE *)(v19 + 16) = 1; /*0x1005099b2*/
  }
  *(_QWORD *)v19 = v21 + 1; /*0x100509301*/
  v90 = 0; /*0x10050930b*/
  v89 = 0; /*0x100509319*/
  v88 = 0; /*0x100509327*/
  v87 = (const __m128i *)&xmmword_1015FBEC0; /*0x100509335*/
  v91 = v21; /*0x10050933c*/
  v92 = v22; /*0x100509343*/
  v101 = v81; /*0x100509351*/
  v23 = 24 * v102; /*0x100509361*/
  v24 = 0; /*0x100509365*/
  v100 = 0x8000000000000013LL; /*0x10050937a*/
  v104 = 24 * v102; /*0x10050937e*/
  do /*0x10050939f*/
  {
    v26 = *(_QWORD **)(v101 + v24 + 8); /*0x1005093a9*/
    rusqlite::Connection::open_with_flags::h44d322d71fbb5f40( /*0x1005093bb*/
      v70,
      v26,
      *(_QWORD *)(v101 + v24 + 16),
      1,
      v17,
      v18,
      v66[0],
      v66[1],
      v66[2]);
    if ( LOBYTE(v70[13]) == 3 ) /*0x1005093c7*/
    {
      v25 = v70; /*0x100509390*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v70); /*0x100509393*/
    }
    else
    {
      qmemcpy(v66, v70, sizeof(v66)); /*0x1005093d4*/
      v71 = &v93; /*0x1005093de*/
      v72 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005093ec*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v83, &unk_1015FE058, &v71); /*0x100509408*/
      v27 = (_QWORD *)v83; /*0x10050940d*/
      v28 = v84; /*0x100509417*/
      v26 = v66; /*0x100509425*/
      rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(v70, v66, v84, v85); /*0x10050942b*/
      if ( LOBYTE(v70[0]) ) /*0x100509437*/
      {
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v70[1]); /*0x100509440*/
        if ( v27 ) /*0x100509448*/
        {
          v26 = v27; /*0x100509452*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x100509455*/
        }
        v25 = v66; /*0x10050945a*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v66, v26, v29, v30); /*0x10050945d*/
        v23 = v104; /*0x100509462*/
      }
      else
      {
        v78 = (sqlite3_stmt *)v70[8]; /*0x10050947b*/
        v77 = v70[7]; /*0x100509486*/
        v76 = v70[6]; /*0x100509491*/
        v75 = v70[5]; /*0x10050949c*/
        v74 = v70[4]; /*0x1005094a7*/
        v73 = v70[3]; /*0x1005094b2*/
        v72 = (__int64 (__fastcall *)())v70[2]; /*0x1005094c0*/
        v71 = (__int64 *)v70[1]; /*0x1005094c7*/
        if ( v27 ) /*0x1005094d1*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x1005094de*/
        v31 = sqlite3_bind_parameter_count(v78); /*0x1005094ea*/
        if ( v31 ) /*0x1005094f4*/
        {
          v83 = v100; /*0x1005094fa*/
          v84 = 0; /*0x100509501*/
          v85 = v31; /*0x10050950c*/
          core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v83); /*0x10050951a*/
          v23 = v104; /*0x10050951f*/
          v32 = 8; /*0x100509523*/
          v33 = 0; /*0x100509528*/
          v34 = 0; /*0x10050952a*/
        }
        else
        {
          v70[0] = 1; /*0x100509531*/
          v70[1] = &v71; /*0x100509543*/
          v70[2] = 0; /*0x10050954a*/
          v70[3] = 0x8000000000000001LL; /*0x10050955b*/
          v70[6] = 0x8000000000000001LL; /*0x100509562*/
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h57623a7e76e43d0e( /*0x100509573*/
            &v67,
            v70);
          v23 = v104; /*0x100509578*/
          v86 = v69; /*0x10050958a*/
          v85 = v68; /*0x10050959c*/
          v84 = v67; /*0x1005095a0*/
          v34 = v67; /*0x1005095a3*/
          v32 = v68; /*0x1005095aa*/
          v33 = v69; /*0x1005095b1*/
        }
        v70[0] = v32; /*0x1005095c0*/
        v70[1] = v32; /*0x1005095c7*/
        v70[2] = v34; /*0x1005095ce*/
        v70[3] = v32 + 24 * v33; /*0x1005095d5*/
        v26 = v70; /*0x1005095e3*/
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::h5bbec6b93c2a7e43( /*0x1005095e6*/
          &v87,
          v70);
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v71); /*0x1005095f2*/
        v25 = v66; /*0x1005095f7*/
        core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v66, v70, v35, v36); /*0x1005095fa*/
      }
    }
    v24 += 24; /*0x100509398*/
  }
  while ( v23 != v24 ); /*0x10050939f*/
  v79 = v90; /*0x10050960b*/
  if ( v90 ) /*0x100509615*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v26); /*0x10050961b*/
    v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x10050962a*/
    if ( !v37 ) /*0x100509632*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x1005099d4*/
    v38 = v37; /*0x100509638*/
    qmemcpy(v37, "legacy_migrated_threads", 23); /*0x100509661*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100509664*/
    v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100509673*/
    if ( !v39 ) /*0x10050967b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1005099e5*/
    v40 = v39; /*0x100509681*/
    *(_BYTE *)(v39 + 4) = 114; /*0x100509684*/
    *(_DWORD *)v39 = 1869771365; /*0x100509688*/
    v66[0] = &v79; /*0x100509695*/
    v66[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005096a3*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v70, &unk_1017C0591, v66); /*0x1005096bf*/
    v41 = v70[0]; /*0x1005096c4*/
    v104 = v70[1]; /*0x1005096d2*/
    v100 = v70[2]; /*0x1005096dd*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, &unk_1017C0591); /*0x1005096e1*/
    if ( (v103 & 1) != 0 ) /*0x1005096ea*/
    {
      v42 = 110; /*0x1005096f0*/
      v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(110, 1); /*0x100509700*/
      if ( v43 ) /*0x100509708*/
      {
        v44 = (void *)v43; /*0x10050970e*/
        v45 = &unk_1015FE1EF; /*0x100509711*/
        v46 = 110; /*0x100509718*/
        goto LABEL_43; /*0x10050971d*/
      }
    }
    else
    {
      v42 = 178; /*0x1005097b9*/
      v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(178, 1); /*0x1005097c9*/
      if ( v52 ) /*0x1005097d1*/
      {
        v44 = (void *)v52; /*0x1005097d7*/
        v45 = &unk_1015FE13D; /*0x1005097da*/
        v46 = 178; /*0x1005097e1*/
LABEL_43:
        memcpy(v44, v45, v46); /*0x1005097e6*/
        v53 = v103 ^ 1; /*0x1005097f1*/
        _RAX = (unsigned __int64)v96; /*0x1005097f4*/
        *v96 = 23; /*0x1005097f8*/
        *(_QWORD *)(_RAX + 8) = v38; /*0x1005097ff*/
        *(_QWORD *)(_RAX + 16) = 23; /*0x100509803*/
        *(_QWORD *)(_RAX + 24) = 5; /*0x10050980b*/
        *(_QWORD *)(_RAX + 32) = v40; /*0x100509813*/
        *(_QWORD *)(_RAX + 40) = 5; /*0x100509817*/
        *(_QWORD *)(_RAX + 48) = v41; /*0x10050981f*/
        *(_QWORD *)(_RAX + 56) = v104; /*0x100509827*/
        *(_QWORD *)(_RAX + 64) = v100; /*0x10050982f*/
        *(_QWORD *)(_RAX + 72) = v42; /*0x100509833*/
        *(_QWORD *)(_RAX + 80) = v44; /*0x100509837*/
        *(_QWORD *)(_RAX + 88) = v42; /*0x10050983b*/
        *(_BYTE *)(_RAX + 96) = v53; /*0x10050983f*/
        v49 = v102; /*0x100509842*/
        v50 = v101; /*0x100509846*/
        v51 = v88; /*0x10050984a*/
        if ( v88 ) /*0x100509854*/
          goto LABEL_44; /*0x100509854*/
        goto LABEL_54; /*0x100509854*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v42); /*0x1005099f7*/
  }
  HIDWORD(_RAX) = (unsigned __int64)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100509797*/
                                      v96,
                                      &anon_92869709a5e99ce1936aa4e326b6c562_615,
                                      23,
                                      &unk_1015FE122,
                                      27) >> 32;
  v49 = v102; /*0x10050979c*/
  v50 = v101; /*0x1005097a0*/
  v51 = v88; /*0x1005097a4*/
  if ( v88 ) /*0x1005097ae*/
  {
LABEL_44:
    v54 = v90; /*0x10050985a*/
    if ( v90 ) /*0x100509864*/
    {
      v55 = v87; /*0x10050986a*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v87)); /*0x10050987c*/
      v57 = v87 + 1; /*0x10050987f*/
      do /*0x1005098a0*/
      {
        if ( !(_WORD)_R13D ) /*0x1005098a6*/
        {
          do /*0x1005098cb*/
          {
            v58 = _mm_movemask_epi8(_mm_load_si128(v57)); /*0x1005098b4*/
            v55 -= 24; /*0x1005098b9*/
            ++v57; /*0x1005098c0*/
          }
          while ( v58 == 0xFFFF ); /*0x1005098cb*/
          _R13D = ~v58; /*0x1005098cd*/
        }
        __asm { tzcnt eax, r13d } /*0x1005098d0*/
        v59 = -3LL * _RAX; /*0x1005098d8*/
        v60 = *((_QWORD *)&v55[-1] + v59 - 1); /*0x1005098dc*/
        if ( v60 ) /*0x1005098e4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55[-1].i64[v59], v60, 1); /*0x1005098f3*/
        --v54; /*0x100509890*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100509897*/
        _R13D &= _R13D - 1; /*0x10050989a*/
      }
      while ( v54 ); /*0x1005098a0*/
    }
    v61 = (24 * v51 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100509906*/
    v62 = v61 + v51; /*0x10050990a*/
    v20 = v62 == -17; /*0x10050990d*/
    v63 = v62 + 17; /*0x10050990d*/
    v49 = v102; /*0x100509911*/
    v50 = v101; /*0x100509915*/
    if ( !v20 ) /*0x100509919*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v87 - v61, v63, 16); /*0x10050992d*/
  }
LABEL_54:
  if ( v93 ) /*0x10050993c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v93, 1); /*0x100509947*/
  if ( v97 ) /*0x100509953*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, 16 * v97, 8); /*0x100509962*/
  v64 = (_QWORD *)(v50 + 8); /*0x100509967*/
  do /*0x100509977*/
  {
    v65 = *(v64 - 1); /*0x10050997d*/
    if ( v65 ) /*0x100509984*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v64, v65, 1); /*0x10050998e*/
    v64 += 3; /*0x100509970*/
    --v49; /*0x100509974*/
  }
  while ( v49 ); /*0x100509977*/
LABEL_36:
  result = v80; /*0x100509743*/
  if ( v80 ) /*0x10050974d*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, 24 * v80, 8); /*0x100509763*/
  return result; /*0x100509768*/
}