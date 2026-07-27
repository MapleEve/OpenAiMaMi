// __ZN13codexmate_lib4core5relay7manager12RelayManager13import_config @ 0x100272400 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::import_config::hbe26932a7c7d94f1(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __m128i a5,
        __m128i a6)
{
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // eax
  void *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v20; // kr10_16
  char v21; // r12
  __int64 v22; // r14
  _QWORD *v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rdx
  char v26; // bl
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdi
  char v30; // bl
  void *v31; // rax
  void *v32; // rbx
  char *v33; // rsi
  char *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  char *v38; // r12
  unsigned __int64 v39; // rbx
  __m128i v40; // xmm2
  __int64 v42; // rax
  void *v44; // rsi
  unsigned __int64 v45; // rbx
  size_t v46; // r14
  _OWORD *v47; // rsi
  __int64 (__fastcall *v48)(); // rdi
  __int64 v49; // r8
  __int64 v50; // rbx
  __int64 v51; // r14
  __int64 v52; // rbx
  unsigned __int64 v53; // rbx
  __int64 v54; // r12
  __int64 v55; // rax
  unsigned __int8 v56; // bl
  char *v57; // rsi
  char *v58; // r13
  unsigned __int64 v59; // rax
  char *v60; // rdx
  __int64 v61; // rsi
  __m128i v62; // xmm1
  char *v63; // rdi
  __int64 i; // r8
  __int64 v65; // rax
  __m128i v66; // xmm2
  size_t v68; // rbx
  __int64 v69; // r12
  const void *v70; // rsi
  const void *v71; // r14
  int v72; // eax
  unsigned int v73; // eax
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rdx
  __int128 v83; // kr20_16
  __int128 v84; // xmm0
  _QWORD v85[12]; // [rsp+0h] [rbp-4D0h] BYREF
  __int64 v86; // [rsp+60h] [rbp-470h] BYREF
  __int128 v87; // [rsp+68h] [rbp-468h]
  __int128 v88; // [rsp+78h] [rbp-458h]
  __int128 v89; // [rsp+88h] [rbp-448h]
  __int64 v90; // [rsp+98h] [rbp-438h]
  char v91; // [rsp+184h] [rbp-34Ch]
  _QWORD v92[3]; // [rsp+188h] [rbp-348h] BYREF
  _QWORD v93[4]; // [rsp+1A0h] [rbp-330h] BYREF
  char v94[16]; // [rsp+1C0h] [rbp-310h] BYREF
  _OWORD v95[6]; // [rsp+1D0h] [rbp-300h] BYREF
  _BYTE v96[200]; // [rsp+230h] [rbp-2A0h] BYREF
  _QWORD v97[4]; // [rsp+2F8h] [rbp-1D8h] BYREF
  _QWORD v98[3]; // [rsp+318h] [rbp-1B8h] BYREF
  _QWORD v99[3]; // [rsp+330h] [rbp-1A0h] BYREF
  __int64 v100; // [rsp+348h] [rbp-188h]
  __m128i v101; // [rsp+350h] [rbp-180h] BYREF
  __m128i v102; // [rsp+360h] [rbp-170h] BYREF
  __int64 v103; // [rsp+378h] [rbp-158h] BYREF
  __int128 v104; // [rsp+380h] [rbp-150h]
  __int128 v105; // [rsp+390h] [rbp-140h] BYREF
  __int128 v106; // [rsp+3A0h] [rbp-130h]
  __int64 v107; // [rsp+3B0h] [rbp-120h]
  char *v108; // [rsp+3B8h] [rbp-118h] BYREF
  __int64 v109; // [rsp+3C0h] [rbp-110h]
  __int64 v110; // [rsp+3C8h] [rbp-108h]
  __int64 v111; // [rsp+3D0h] [rbp-100h]
  _QWORD v112[2]; // [rsp+3D8h] [rbp-F8h] BYREF
  __int64 v113; // [rsp+3E8h] [rbp-E8h]
  __int64 v114; // [rsp+3F0h] [rbp-E0h]
  char *v115; // [rsp+3F8h] [rbp-D8h]
  __int64 v116; // [rsp+400h] [rbp-D0h]
  __int64 v117; // [rsp+408h] [rbp-C8h]
  __int64 v118; // [rsp+410h] [rbp-C0h]
  __int64 v119; // [rsp+418h] [rbp-B8h]
  __int64 v120; // [rsp+420h] [rbp-B0h] BYREF
  __int64 v121; // [rsp+428h] [rbp-A8h]
  __int64 v122; // [rsp+430h] [rbp-A0h]
  char **v123; // [rsp+438h] [rbp-98h]
  _OWORD *v124; // [rsp+440h] [rbp-90h] BYREF
  __int64 (__fastcall *v125)(); // [rsp+448h] [rbp-88h]
  char **v126; // [rsp+450h] [rbp-80h]
  __int64 (__fastcall *v127)(); // [rsp+458h] [rbp-78h]
  char *v128; // [rsp+460h] [rbp-70h] BYREF
  __int64 (__fastcall *v129)(); // [rsp+468h] [rbp-68h]
  char **v130; // [rsp+470h] [rbp-60h]
  unsigned __int64 v131; // [rsp+478h] [rbp-58h]
  char *v132; // [rsp+480h] [rbp-50h]
  _QWORD *v133; // [rsp+488h] [rbp-48h]
  __int64 v134; // [rsp+490h] [rbp-40h]
  void *__s1; // [rsp+498h] [rbp-38h]
  int v136; // [rsp+4A0h] [rbp-30h]
  unsigned __int8 v137; // [rsp+4A7h] [rbp-29h]

  v8 = a2[2]; /*0x100272424*/
  v131 = 0x8000000000000000LL; /*0x10027242b*/
  if ( *(_QWORD *)(v8 + 16) != 0x8000000000000000LL ) /*0x100272433*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1((char *)v95 + 8, v8 + 16); /*0x100272674*/
    *(_QWORD *)&v95[0] = 9; /*0x100272679*/
    qmemcpy(a1, v95, 0x60u); /*0x100272693*/
    return a1; /*0x100272693*/
  }
  codexmate_lib::core::relay::io::parse_import_file::h437f3aa1b6ff2b67(v95, a3, a4); /*0x100272446*/
  v86 = *((_QWORD *)&v95[0] + 1); /*0x100272459*/
  v10 = *(_QWORD *)&v95[0]; /*0x100272459*/
  v87 = v95[1]; /*0x100272467*/
  v88 = v95[2]; /*0x100272483*/
  v89 = v95[3]; /*0x10027249f*/
  v90 = *(_QWORD *)&v95[4]; /*0x1002724bb*/
  if ( *(_QWORD *)&v95[0] != 11 ) /*0x1002724c6*/
  {
    a1[11] = *((_QWORD *)&v95[5] + 1); /*0x1002726a2*/
    v18 = *((_QWORD *)&v95[4] + 1); /*0x1002726a6*/
    a1[10] = *(_QWORD *)&v95[5]; /*0x1002726b4*/
    a1[9] = v18; /*0x1002726b8*/
    a1[8] = v90; /*0x1002726c3*/
    *((_OWORD *)a1 + 3) = v89; /*0x1002726d9*/
    *((_OWORD *)a1 + 2) = v88; /*0x1002726ef*/
    a1[3] = *((_QWORD *)&v87 + 1); /*0x1002726fa*/
    v19 = v86; /*0x1002726fe*/
    a1[2] = v87; /*0x10027270c*/
    a1[1] = v19; /*0x100272710*/
    *a1 = v10; /*0x100272714*/
    return a1; /*0x100272717*/
  }
  v103 = v86; /*0x1002724da*/
  v104 = v87; /*0x1002724e1*/
  v105 = v88; /*0x1002724fd*/
  v106 = v89; /*0x100272519*/
  v107 = v90; /*0x100272535*/
  v11 = a2[4]; /*0x10027253c*/
  v133 = (_QWORD *)(v11 + 16); /*0x100272544*/
  v113 = v11; /*0x100272548*/
  v12 = *(_QWORD *)(v11 + 16); /*0x10027254f*/
  if ( !v12 ) /*0x100272556*/
    v12 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v133); /*0x100273275*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v12); /*0x10027255c*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100272578*/
  {
    v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12, a3, v13, 0x7FFFFFFFFFFFFFFFLL); /*0x10027327d*/
    LOBYTE(v14) = v14 ^ 1; /*0x100273282*/
  }
  else
  {
    v14 = 0; /*0x10027257e*/
  }
  v136 = v14; /*0x100272580*/
  if ( *(_BYTE *)(v113 + 24) ) /*0x10027258a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, a3); /*0x100272596*/
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x1002725a5*/
    if ( !v15 ) /*0x1002725ad*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x10027342c*/
    v17 = (unsigned __int64)v15; /*0x1002725b3*/
    qmemcpy(v15, "Codex router transition lock is poisoned", 40); /*0x1002725f8*/
    if ( !(_BYTE)v136 /*0x100273289*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             40,
                             1,
                             v16,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v113 + 24) = 1; /*0x10027329d*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v133); /*0x100272625*/
    *a1 = 10; /*0x100272631*/
    a1[1] = 40; /*0x100272638*/
    *((_BYTE *)a1 + 16) = v17; /*0x100272640*/
    *((_BYTE *)a1 + 23) = HIBYTE(v17); /*0x10027264b*/
    *(_WORD *)((char *)a1 + 21) = HIDWORD(v17) >> 8; /*0x100272653*/
    *(_DWORD *)((char *)a1 + 17) = v17 >> 8; /*0x100272658*/
    a1[3] = 40; /*0x10027265c*/
    goto LABEL_99; /*0x100272664*/
  }
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x100272733*/
    v95,
    a2 + 5,
    "importing relay providers | router_transitionstate_db_selectedcodexmate_lib::core::relay::manager",
    25);
  v20 = v95[0]; /*0x10027273f*/
  v21 = v95[1]; /*0x100272746*/
  if ( *(_QWORD *)&v95[0] != 11 ) /*0x100272752*/
  {
    v33 = (char *)&v95[1] + 1; /*0x100272846*/
    v34 = (char *)a1 + 17; /*0x10027284d*/
    memcpy((char *)a1 + 17, (char *)&v95[1] + 1, 0x4Fu); /*0x100272856*/
    *(_OWORD *)a1 = v20; /*0x10027285b*/
    *((_BYTE *)a1 + 16) = v21; /*0x100272862*/
    v30 = v136; /*0x100272866*/
    goto LABEL_96; /*0x100272869*/
  }
  v137 = v95[1]; /*0x100272758*/
  v123 = *((char ***)&v95[0] + 1); /*0x10027275c*/
  v22 = a2[1]; /*0x100272763*/
  v23 = (_QWORD *)(v22 + 16); /*0x100272767*/
  v24 = *(_QWORD *)(v22 + 16); /*0x10027276b*/
  if ( !v24 ) /*0x100272772*/
    v24 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v22 + 16); /*0x1002732ae*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v24); /*0x100272778*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100272794*/
  {
    v26 = 0; /*0x10027279a*/
    if ( !*(_BYTE *)(v22 + 24) ) /*0x10027279c*/
      goto LABEL_19; /*0x1002727a3*/
LABEL_108:
    *(_QWORD *)&v95[0] = v22 + 16; /*0x1002732cd*/
    BYTE8(v95[0]) = v26; /*0x1002732d4*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, v95, &off_10195E740, &off_10195DAC8); /*0x1002732fb*/
  }
  v26 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v24, a2 + 5, v25, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x1002732bd*/
  if ( *(_BYTE *)(v22 + 24) ) /*0x1002732c0*/
    goto LABEL_108; /*0x1002732c7*/
LABEL_19:
  v27 = v22 + 32; /*0x1002727a9*/
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x1002727b4*/
    &v86,
    v22 + 32);
  if ( !v26 /*0x1002733da*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           &v86,
                           v27,
                           v28,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v22 + 24) = 1; /*0x1002733e7*/
  }
  v29 = *v23; /*0x1002727da*/
  v30 = v136; /*0x1002727de*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v23); /*0x1002727e1*/
  if ( v91 ) /*0x1002727ed*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v27); /*0x1002727ef*/
    v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(107, 1); /*0x1002727fe*/
    if ( !v31 ) /*0x100272806*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 107); /*0x10027343d*/
    v32 = v31; /*0x10027280c*/
    v33 = (char *)&unk_1015DEC2E; /*0x10027280f*/
    memcpy(v31, &unk_1015DEC2E, 0x6Bu); /*0x10027281e*/
    *a1 = 10; /*0x100272823*/
    a1[1] = 107; /*0x10027282a*/
    a1[2] = v32; /*0x100272832*/
    a1[3] = 107; /*0x100272836*/
    v30 = v136; /*0x10027283e*/
    goto LABEL_93; /*0x100272841*/
  }
  codexmate_lib::core::relay::manager::RelayManager::sync_codex_config::haffd47a484d4cdfa(v95, a2); /*0x100272878*/
  if ( LODWORD(v95[0]) != 11 ) /*0x100272884*/
  {
    qmemcpy(a1, v95, 0x60u); /*0x100272c67*/
    v33 = v96; /*0x100272c67*/
    goto LABEL_93; /*0x100272c67*/
  }
  _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h4f25ceb1c4363760( /*0x1002728a6*/
    v93,
    v87,
    v87 + 232LL * *((_QWORD *)&v87 + 1));
  v36 = std::thread::local::LocalKey$LT$T$GT$::with::h2d85312d63c74f41(&anon_39a6e93098609d65551b0fc4eadbbbd9_108); /*0x1002728b2*/
  v111 = 0; /*0x1002728be*/
  v110 = 0; /*0x1002728cc*/
  v109 = 0; /*0x1002728da*/
  v108 = (char *)anon_39a6e93098609d65551b0fc4eadbbbd9_24; /*0x1002728e8*/
  v112[0] = v36; /*0x1002728ef*/
  v112[1] = v37; /*0x1002728f6*/
  v134 = *a2; /*0x100272908*/
  if ( (_QWORD)v106 ) /*0x10027290f*/
  {
    v38 = *((char **)&v105 + 1); /*0x100272915*/
    v114 = *((_QWORD *)&v105 + 1) + 176 * v106; /*0x100272926*/
    v100 = v134 + 16; /*0x100272935*/
    v115 = (char *)v93[3]; /*0x100272943*/
    v132 = (char *)v93[1]; /*0x100272958*/
    v116 = v93[0]; /*0x10027295c*/
    v117 = v93[0] - 16LL; /*0x100272967*/
    do /*0x100272a30*/
    {
      if ( *((_QWORD *)v38 + 18) == v131 || !*((_QWORD *)v38 + 20) ) /*0x100272a42*/
        goto LABEL_48; /*0x100272a4b*/
      v44 = *((void **)v38 + 1); /*0x100272a51*/
      v46 = *((_QWORD *)v38 + 2); /*0x100272a56*/
      if ( v115 ) /*0x100272a63*/
      {
        __s1 = *((void **)v38 + 1); /*0x100272a6c*/
        v45 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v94, v44, v46); /*0x100272a78*/
        a6 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v45 >> 57), (__m128i)0LL); /*0x100272a87*/
        for ( _RCX = 0; ; _RCX += 16 ) /*0x100272a8c*/
        {
          v39 = (unsigned __int64)v132 & v45; /*0x100272973*/
          v40 = _mm_loadu_si128((const __m128i *)(v116 + v39)); /*0x10027297e*/
          a5 = _mm_cmpeq_epi8(v40, a6); /*0x100272987*/
          _RAX = (unsigned int)_mm_movemask_epi8(a5); /*0x10027298b*/
          if ( (_DWORD)_RAX ) /*0x100272991*/
            break; /*0x100272991*/
LABEL_33:
          a5.i64[0] = -1; /*0x100272a0d*/
          v44 = __s1; /*0x100272a1b*/
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v40, (__m128i)-1LL)) ) /*0x100272a15*/
            goto LABEL_39; /*0x100272a1f*/
          v45 = v39 + _RCX + 16; /*0x100272a21*/
        }
        v101 = a6; /*0x100272993*/
        v119 = _RCX; /*0x10027299b*/
        v102 = v40; /*0x1002729a2*/
        while ( 1 ) /*0x1002729aa*/
        {
          v118 = _RAX; /*0x1002729aa*/
          __asm { tzcnt ecx, eax } /*0x1002729b1*/
          v42 = v117 - 16 * ((unsigned __int64)v132 & (v39 + _RCX)); /*0x1002729c7*/
          if ( v46 == *(_QWORD *)(v42 + 8) && !memcmp(__s1, *(const void **)v42, v46) ) /*0x1002729da*/
            goto LABEL_48; /*0x1002729e1*/
          _RAX = (unsigned int)(v118 - 1); /*0x1002729ee*/
          LOWORD(_RAX) = v118 & (v118 - 1); /*0x1002729f1*/
          a6 = _mm_load_si128(&v101); /*0x1002729f4*/
          _RCX = v119; /*0x1002729fc*/
          v40 = _mm_load_si128(&v102); /*0x100272a03*/
          if ( !(_WORD)_RAX ) /*0x100272a0b*/
            goto LABEL_33; /*0x100272a0b*/
        }
      }
LABEL_39:
      codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997(v95, v44, v46); /*0x100272a93*/
      v47 = *(_OWORD **)&v95[0]; /*0x100272aa2*/
      if ( *(_QWORD *)&v95[0] == v131 ) /*0x100272aad*/
      {
        if ( !*((_QWORD *)v38 + 5) || !*((_QWORD *)v38 + 8) ) /*0x100272ab7*/
          goto LABEL_48; /*0x100272abf*/
        codexmate_lib::core::relay::upstream_url::normalize_upstream_base_url::ha7493063c3bbb978( /*0x100272acd*/
          v95,
          *((_QWORD *)v38 + 7),
          *(double *)a5.i64,
          *(double *)a6.i64);
        v47 = *((_OWORD **)&v95[0] + 1); /*0x100272ad2*/
        if ( !LOBYTE(v95[0]) ) /*0x100272ae0*/
        {
          if ( *((_QWORD *)&v95[0] + 1) ) /*0x100272b2c*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v95[1], *((_QWORD *)&v95[0] + 1), 1); /*0x100272b3a*/
          v49 = *((_QWORD *)v38 + 11); /*0x100272b3f*/
          if ( !v49 ) /*0x100272b47*/
            goto LABEL_48; /*0x100272b47*/
          codexmate_lib::core::relay::models::normalize_relay_models::hdc474f64afe66555( /*0x100272b68*/
            v95,
            *((_QWORD *)v38 + 13),
            *((_QWORD *)v38 + 14),
            *((_QWORD *)v38 + 10),
            v49,
            (unsigned __int8)v38[169]);
          v50 = *(_QWORD *)&v95[0]; /*0x100272b6d*/
          core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$alloc..vec..Vec$LT$codexmate_lib..core..relay..models..RelayModelEntry$GT$$C$alloc..string..String$C$codexmate_lib..core..relay..models..RelayWireApi$RP$$C$alloc..string..String$GT$$GT$::h482b632b587b0128(v95); /*0x100272b7b*/
          if ( v50 == v131 /*0x100272b90*/
            || (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h60ce1b4d32ed90f0(
                                  &v108,
                                  v38) )
          {
            goto LABEL_48; /*0x100272b90*/
          }
          codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53( /*0x100272bb5*/
            v85,
            v100,
            *((_QWORD *)v38 + 1),
            *((_QWORD *)v38 + 2));
          if ( LODWORD(v85[0]) == 1 ) /*0x100272bc1*/
          {
            v126 = (char **)v85[3]; /*0x10027332d*/
            v125 = (__int64 (__fastcall *)())v85[2]; /*0x100273338*/
            v124 = (_OWORD *)v85[1]; /*0x10027333f*/
            v33 = v38; /*0x100273354*/
            codexmate_lib::core::relay::manager::RelayManager::import_config::_$u7b$$u7b$closure$u7d$$u7d$::h14ef60f92bbe80a3( /*0x100273357*/
              v95,
              v38,
              &v124);
            v83 = v95[1]; /*0x100273363*/
            *((_OWORD *)a1 + 5) = v95[5]; /*0x10027337c*/
            *((_OWORD *)a1 + 4) = v95[4]; /*0x100273392*/
            *((_OWORD *)a1 + 3) = v95[3]; /*0x1002733a8*/
            *((_OWORD *)a1 + 2) = v95[2]; /*0x1002733be*/
            v84 = v95[0]; /*0x1002733c2*/
            *((_OWORD *)a1 + 1) = v83; /*0x1002733c9*/
            *(_OWORD *)a1 = v84; /*0x1002733d1*/
            goto LABEL_92; /*0x1002733d5*/
          }
          __s1 = (void *)v85[1]; /*0x100272bce*/
          v51 = v85[2]; /*0x100272bd2*/
          v52 = v85[3]; /*0x100272bd9*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v85, v38); /*0x100272bea*/
          *(_QWORD *)&v95[0] = __s1; /*0x100272bf3*/
          *((_QWORD *)&v95[0] + 1) = v51; /*0x100272bfa*/
          *(_QWORD *)&v95[1] = v52; /*0x100272c01*/
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he093f501016d6329(&v124, &v108, v85, v95); /*0x100272c24*/
          v47 = v124; /*0x100272c29*/
          if ( (__int64)v124 < (__int64)0x8000000000000002LL || !v124 ) /*0x100272c46*/
            goto LABEL_48; /*0x100272c46*/
          v48 = v125; /*0x100272c4c*/
          goto LABEL_47; /*0x100272c53*/
        }
        if ( *((_QWORD *)&v95[0] + 1) ) /*0x100272ae5*/
        {
          v48 = *(__int64 (__fastcall **)())&v95[1]; /*0x100272ae7*/
LABEL_47:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v47, 1); /*0x100272afc*/
        }
      }
      else if ( *(_QWORD *)&v95[0] ) /*0x100272af3*/
      {
        v48 = *((__int64 (__fastcall **)())&v95[0] + 1); /*0x100272af5*/
        goto LABEL_47; /*0x100272af5*/
      }
LABEL_48:
      v38 += 176; /*0x100272b10*/
    }
    while ( v38 != (char *)v114 ); /*0x100272a30*/
  }
  v53 = *((_QWORD *)&v87 + 1); /*0x100272c6f*/
  v54 = v134 + 16; /*0x100272c7a*/
  codexmate_lib::core::relay::io::apply_import_to_state::h68dc3af05ea9926e(v97, v134 + 16, &v86, &v103); /*0x100272c96*/
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x100272ca9*/
    v95,
    &v86);
  codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(v85, a2, v95); /*0x100272cbf*/
  if ( LODWORD(v85[0]) == 11 ) /*0x100272ccb*/
  {
    a1[4] = v97[3]; /*0x100272cd8*/
    a1[3] = v97[2]; /*0x100272ce3*/
    v55 = v97[0]; /*0x100272ce7*/
    a1[2] = v97[1]; /*0x100272cf5*/
    a1[1] = v55; /*0x100272cf9*/
    *a1 = 11; /*0x100272cfd*/
    v56 = v136; /*0x100272d0b*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hce19a824efd45726(&v108); /*0x100272d0e*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h996417a273f50da2(v93); /*0x100272d1a*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v86); /*0x100272d26*/
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x100272d36*/
      v123,
      v137);
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::h86556799139f6f5f( /*0x100272d42*/
      v133,
      v56);
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..io..RelayExportFile$GT$::h5a7f1d24e4fe5736(&v103); /*0x100272d4e*/
    return a1; /*0x100272d53*/
  }
  qmemcpy(v95, v85, sizeof(v95)); /*0x100272d6b*/
  v120 = 0; /*0x100272d6e*/
  v121 = 8; /*0x100272d79*/
  v122 = 0; /*0x100272d84*/
  if ( v53 > *((_QWORD *)&v87 + 1) ) /*0x100272d99*/
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d( /*0x10027341b*/
      v53,
      *((_QWORD *)&v87 + 1),
      *((_QWORD *)&v87 + 1),
      &off_10195DAE0);
  v57 = (char *)(v87 + 232 * v53); /*0x100272dad*/
  v114 = v87 + 232LL * *((_QWORD *)&v87 + 1); /*0x100272dba*/
  v134 = v54; /*0x100272dc1*/
  while ( v57 != (char *)v114 ) /*0x100272dd2*/
  {
    v58 = v57; /*0x100272dd8*/
    v57 += 232; /*0x100272ddb*/
    if ( v58[228] ) /*0x100272de2*/
    {
      __s1 = v57; /*0x100272dec*/
      if ( !v111 ) /*0x100272df8*/
      {
LABEL_76:
        v71 = *((const void **)v58 + 1); /*0x100272f2b*/
        v68 = *((_QWORD *)v58 + 2); /*0x100272f2f*/
LABEL_79:
        codexmate_lib::core::relay::keychain::delete_api_key::h9464defffa032412(v99, v54, v71, v68); /*0x100272f4c*/
        goto LABEL_80; /*0x100272f5c*/
      }
      v59 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v112, v58); /*0x100272e08*/
      v60 = v108; /*0x100272e14*/
      v61 = v109; /*0x100272e1b*/
      v62 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v59 >> 57), (__m128i)0LL); /*0x100272e2a*/
      v63 = v108 - 48; /*0x100272e2f*/
      for ( i = 0; ; i += 16 ) /*0x100272e33*/
      {
        v65 = v61 & v59; /*0x100272e36*/
        v66 = _mm_loadu_si128((const __m128i *)&v60[v65]); /*0x100272e39*/
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v66, v62)); /*0x100272e46*/
        if ( (_DWORD)_RCX ) /*0x100272e4c*/
          break; /*0x100272e4c*/
LABEL_74:
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v66, (__m128i)-1LL)) ) /*0x100272f15*/
          goto LABEL_76; /*0x100272f1b*/
        v59 = v65 + i + 16; /*0x100272f1d*/
      }
      v68 = *((_QWORD *)v58 + 2); /*0x100272e52*/
      v117 = v65; /*0x100272e56*/
      v132 = v60; /*0x100272e5d*/
      v118 = v61; /*0x100272e61*/
      v101 = v62; /*0x100272e68*/
      v119 = i; /*0x100272e70*/
      v102 = v66; /*0x100272e77*/
      while ( 1 ) /*0x100272e7f*/
      {
        v116 = _RCX; /*0x100272e7f*/
        __asm { tzcnt ecx, ecx } /*0x100272e86*/
        v69 = -48 * (v61 & (v65 + _RCX)); /*0x100272e97*/
        if ( v68 == *(_QWORD *)&v63[-48 * (v61 & (v65 + _RCX)) + 16] ) /*0x100272ea0*/
        {
          v70 = *(const void **)&v63[-48 * (v61 & (v65 + _RCX)) + 8]; /*0x100272ea6*/
          v71 = *((const void **)v58 + 1); /*0x100272eaa*/
          v115 = v63; /*0x100272eae*/
          v72 = memcmp(v71, v70, v68); /*0x100272ebb*/
          v63 = v115; /*0x100272ec0*/
          if ( !v72 ) /*0x100272ec9*/
            break; /*0x100272ec9*/
        }
        v73 = v116 - 1; /*0x100272ed2*/
        LOWORD(v73) = v116 & (v116 - 1); /*0x100272ed5*/
        _RCX = v73; /*0x100272ed8*/
        v65 = v117; /*0x100272eda*/
        v54 = v134; /*0x100272ee1*/
        v60 = v132; /*0x100272ee5*/
        v61 = v118; /*0x100272ee9*/
        v62 = _mm_load_si128(&v101); /*0x100272ef0*/
        i = v119; /*0x100272ef8*/
        v66 = _mm_load_si128(&v102); /*0x100272eff*/
        if ( ((unsigned __int16)v116 & (unsigned __int16)(v116 - 1)) == 0 ) /*0x100272f07*/
          goto LABEL_74; /*0x100272f07*/
      }
      if ( *(_QWORD *)&v132[v69 - 24] == v131 ) /*0x100272f42*/
      {
        v54 = v134; /*0x100272f48*/
        goto LABEL_79; /*0x100272f48*/
      }
      v78 = *(_QWORD *)&v132[v69 - 16]; /*0x100273042*/
      v79 = *(_QWORD *)&v132[v69 - 8]; /*0x100273047*/
      v54 = v134; /*0x100273053*/
      codexmate_lib::core::relay::keychain::set_api_key::h0814f45be6d5b783(v99, v134, v71, v68, v78, v79); /*0x100273060*/
LABEL_80:
      if ( v99[0] != v131 ) /*0x100272f6c*/
      {
        v130 = (char **)v99[2]; /*0x100272f79*/
        v129 = (__int64 (__fastcall *)())v99[1]; /*0x100272f8b*/
        v128 = (char *)v99[0]; /*0x100272f8f*/
        v124 = v58; /*0x100272f93*/
        v125 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100272fa1*/
        v126 = &v128; /*0x100272fac*/
        v127 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100272fb0*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_1017B9AD3, &v124); /*0x100272fc9*/
        v74 = v122; /*0x100272fce*/
        if ( v122 == v120 ) /*0x100272fdc*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v120); /*0x100272fe5*/
        v75 = v121; /*0x100272fea*/
        v76 = 3 * v74; /*0x100272ff1*/
        *(_QWORD *)(v121 + 8 * v76 + 16) = v98[2]; /*0x100272ffc*/
        v77 = v98[0]; /*0x100273001*/
        *(_QWORD *)(v75 + 8 * v76 + 8) = v98[1]; /*0x10027300f*/
        *(_QWORD *)(v75 + 8 * v76) = v77; /*0x100273014*/
        v122 = v74 + 1; /*0x10027301b*/
        if ( v128 ) /*0x100273029*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v128, 1); /*0x100273038*/
      }
      v57 = (char *)__s1; /*0x100272dc7*/
    }
  }
  if ( v122 ) /*0x100273074*/
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x100273095*/
      &v124,
      v121,
      v122,
      " | router_transitionstate_db_selectedcodexmate_lib::core::relay::manager",
      3);
    v130 = v126; /*0x10027309e*/
    v129 = v125; /*0x1002730b0*/
    v128 = (char *)v124; /*0x1002730b4*/
    v124 = v95; /*0x1002730bf*/
    v125 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1002730cd*/
    v126 = &v128; /*0x1002730d8*/
    v127 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002730e3*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v92, &unk_1017B9FD5, &v124); /*0x1002730fc*/
    v33 = v128; /*0x100273101*/
    if ( v128 ) /*0x100273108*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v128, 1); /*0x100273113*/
    a1[3] = v92[2]; /*0x10027311f*/
    v80 = v92[0]; /*0x100273123*/
    a1[2] = v92[1]; /*0x100273131*/
    a1[1] = v80; /*0x100273135*/
    *a1 = 10; /*0x100273139*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::h1b9199b71a2a5ac6(&v120); /*0x100273147*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v95); /*0x100273153*/
  }
  else
  {
    qmemcpy(a1, v95, 0x60u); /*0x100273169*/
    v33 = v96; /*0x100273169*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::h1b9199b71a2a5ac6(&v120); /*0x100273173*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..io..RelayImportSummary$GT$::hb3659c1ec9e5c5aa(v97); /*0x10027317f*/
LABEL_92:
  v30 = v136; /*0x100273184*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hce19a824efd45726(&v108); /*0x10027318e*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h996417a273f50da2(v93); /*0x10027319a*/
LABEL_93:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v86); /*0x10027319f*/
  if ( (v137 & 1) == 0 /*0x1002733f1*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           &v86,
                           v33,
                           v81,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v123 + 8) = 1; /*0x100273405*/
  }
  v34 = *v123; /*0x1002731d5*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v123); /*0x1002731d8*/
LABEL_96:
  if ( !v30 /*0x100273305*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v34,
                           v33,
                           v35,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v113 + 24) = 1; /*0x100273319*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v133); /*0x100273205*/
LABEL_99:
  if ( v103 ) /*0x100273214*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v103, 1); /*0x100273222*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7c83e3d83281f011(&v105); /*0x10027322e*/
  if ( (_QWORD)v105 ) /*0x10027323d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v105 + 1), 176 * v105, 8); /*0x100273252*/
  return a1; /*0x10027325a*/
}