// __ZN13codexmate_lib4core10repository10Repository5clean @ 0x100a74760 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::clean::h249caf1a46522ec0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // ebx
  _DWORD *v7; // rsi
  __int64 *v8; // rdi
  __int64 i; // rcx
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // r13
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r15
  _DWORD *v16; // rdi
  __int64 *v17; // rsi
  __int64 j; // rcx
  __int64 v19; // r13
  void (**v20)(void); // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r14
  int v30; // edx
  __int64 v31; // rax
  void *v33; // r15
  size_t v34; // r12
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rbx
  const __m128i *v38; // r15
  const __m128i *v40; // r12
  int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  __int64 v45; // r14
  bool v46; // zf
  __int64 v47; // r14
  __int64 v48; // rbx
  __int64 v49; // r15
  __int64 v50; // r14
  unsigned __int64 v51; // r13
  int v52; // edx
  __int64 v53; // rax
  void *v54; // rax
  void *v55; // r15
  int v56; // ebx
  __int64 v57; // r9
  int v58; // r12d
  __int64 v59; // r15
  const void *v60; // r14
  __int64 v61; // rsi
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rbx
  _QWORD *v67; // r14
  __int64 v68; // rsi
  __int64 v70; // r14
  __int64 v71; // rbx
  const __m128i *v72; // r15
  const __m128i *v74; // r12
  int v75; // r13d
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // r14
  __int64 v81; // rbx
  __int64 v82; // r15
  __int64 v83; // r14
  unsigned __int64 v85; // rbx
  __int64 *v86; // r13
  __int64 *v87; // r14
  __int64 v88; // rbx
  __int64 v89; // r14
  __int64 v90; // r12
  __int64 *v91; // rbx
  size_t v92; // r15
  __int64 v93; // r14
  _QWORD v94[3]; // [rsp+8h] [rbp-248h] BYREF
  __int64 v95[12]; // [rsp+20h] [rbp-230h] BYREF
  unsigned __int64 v96; // [rsp+80h] [rbp-1D0h] BYREF
  void *v97; // [rsp+88h] [rbp-1C8h]
  __int64 v98; // [rsp+90h] [rbp-1C0h]
  __int64 v99; // [rsp+98h] [rbp-1B8h]
  __int64 v100; // [rsp+A0h] [rbp-1B0h]
  __int64 v101; // [rsp+A8h] [rbp-1A8h]
  _DWORD v102[3]; // [rsp+B4h] [rbp-19Ch] BYREF
  _QWORD v103[11]; // [rsp+C0h] [rbp-190h] BYREF
  unsigned __int64 v104; // [rsp+118h] [rbp-138h]
  _QWORD *v105; // [rsp+120h] [rbp-130h] BYREF
  __int64 (__fastcall *v106)(_QWORD, _QWORD); // [rsp+128h] [rbp-128h]
  __int64 v107; // [rsp+130h] [rbp-120h]
  const __m128i *v108; // [rsp+138h] [rbp-118h] BYREF
  __int64 v109; // [rsp+140h] [rbp-110h]
  __int64 v110; // [rsp+148h] [rbp-108h]
  __int64 v111; // [rsp+150h] [rbp-100h]
  __int64 v112; // [rsp+158h] [rbp-F8h]
  __int64 v113; // [rsp+160h] [rbp-F0h]
  __int64 v114; // [rsp+168h] [rbp-E8h] BYREF
  __int64 v115; // [rsp+170h] [rbp-E0h]
  __int64 v116; // [rsp+178h] [rbp-D8h]
  __int64 v117; // [rsp+180h] [rbp-D0h]
  __int64 v118; // [rsp+188h] [rbp-C8h]
  __int64 *v119; // [rsp+190h] [rbp-C0h]
  _QWORD v120[12]; // [rsp+198h] [rbp-B8h] BYREF
  _QWORD *v121; // [rsp+1F8h] [rbp-58h] BYREF
  __int64 v122; // [rsp+200h] [rbp-50h] BYREF
  __int64 v123; // [rsp+208h] [rbp-48h]
  __int64 v124; // [rsp+210h] [rbp-40h]
  _QWORD *v125; // [rsp+218h] [rbp-38h]
  _DWORD v126[11]; // [rsp+224h] [rbp-2Ch] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8(v103, a2[25], a2[26], &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20); /*0x100a7479c*/
  v4 = v103[1]; /*0x100a747a1*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a747c6*/
    (__int64)v120,
    v103[1],
    v103[2],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v5 = v120[0]; /*0x100a747cb*/
  v6 = v120[1]; /*0x100a747d2*/
  if ( v120[0] != 11 ) /*0x100a747dc*/
  {
    v7 = (_DWORD *)&v120[1] + 1; /*0x100a747de*/
    v8 = v95; /*0x100a747e5*/
    for ( i = 21; i; --i ) /*0x100a747ec*/
    {
      *(_DWORD *)v8 = *v7++; /*0x100a747f1*/
      v8 = (__int64 *)((char *)v8 + 4); /*0x100a747f1*/
    }
  }
  if ( v103[0] ) /*0x100a747fd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v103[0], 1); /*0x100a74807*/
  if ( (_DWORD)v5 == 11 )
  {
    v126[0] = v6; /*0x100a74816*/
    codexmate_lib::core::repository::Repository::load_registry_for_mutation::h2b0f27ffcaeb4a0b( /*0x100a7482e*/
      (__int64)v120,
      a2[28],
      a2[29]);
    v10 = v120[0]; /*0x100a74833*/
    qmemcpy(v95, &v120[1], 0x58u); /*0x100a7484d*/
    if ( v120[0] != 11 ) /*0x100a74854*/
    {
      qmemcpy(a1 + 2, v95, 0x58u); /*0x100a7493c*/
      a1[1] = v10; /*0x100a7493f*/
      *a1 = 1; /*0x100a74943*/
      goto LABEL_51; /*0x100a7494b*/
    }
    v121 = a1; /*0x100a7485a*/
    qmemcpy(v103, v95, sizeof(v103)); /*0x100a74871*/
    v11 = &v95[11]; /*0x100a74871*/
    v125 = a2; /*0x100a7487e*/
    v120[0] = a2; /*0x100a74882*/
    v104 = v103[2]; /*0x100a7488c*/
    if ( v103[2] ) /*0x100a74893*/
    {
      v12 = (__int64 *)v103[1]; /*0x100a74899*/
      v13 = 424LL * v103[2] - 424; /*0x100a748a7*/
      v14 = -v103[2]; /*0x100a748ae*/
      v15 = 0; /*0x100a748b1*/
      v119 = (__int64 *)v103[1]; /*0x100a748bb*/
      while ( 1 ) /*0x100a748d3*/
      {
        v11 = v12; /*0x100a748d3*/
        if ( !(unsigned __int8)alloc::vec::Vec$LT$T$C$A$GT$::retain::_$u7b$$u7b$closure$u7d$$u7d$::hcf05ae6ea328ddfc( /*0x100a748d6*/
                                 v120,
                                 v12) )
          break; /*0x100a748d6*/
        ++v15; /*0x100a748e3*/
        v13 -= 424; /*0x100a748e6*/
        v12 += 53; /*0x100a748ed*/
        if ( !(v15 + v14) ) /*0x100a748f7*/
        {
          v15 = v103[2]; /*0x100a748fc*/
          goto LABEL_20; /*0x100a74903*/
        }
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v12); /*0x100a752dd*/
      v85 = v15 + 1 - v104; /*0x100a752e6*/
      if ( v15 + 1 < v104 ) /*0x100a752ed*/
      {
        v86 = v12 + 53; /*0x100a752ef*/
        v87 = v119; /*0x100a752f6*/
        do /*0x100a75358*/
        {
          while ( 1 ) /*0x100a75333*/
          {
            v11 = v86; /*0x100a75333*/
            if ( !(unsigned __int8)alloc::vec::Vec$LT$T$C$A$GT$::retain::_$u7b$$u7b$closure$u7d$$u7d$::hcf05ae6ea328ddfc( /*0x100a75336*/
                                     v120,
                                     v86) )
              break; /*0x100a75336*/
            v11 = v86; /*0x100a7530e*/
            memcpy(&v87[53 * v15++], v86, 0x1A8u); /*0x100a75311*/
            v13 -= 424; /*0x100a75319*/
            v86 += 53; /*0x100a75320*/
            if ( !++v85 ) /*0x100a7532a*/
              goto LABEL_102; /*0x100a7532a*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v86); /*0x100a75342*/
          v13 -= 424; /*0x100a75347*/
          v86 += 53; /*0x100a7534e*/
          ++v85; /*0x100a75355*/
        }
        while ( v85 ); /*0x100a75358*/
      }
LABEL_102:
      v103[2] = v15; /*0x100a7535a*/
    }
    else
    {
      v15 = 0; /*0x100a74950*/
    }
LABEL_20:
    v19 = v103[1]; /*0x100a74953*/
    v20 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384; /*0x100a7495a*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100a74961*/
    v24 = v21; /*0x100a74963*/
    if ( *(_BYTE *)(v21 + 16) == 1 ) /*0x100a7496a*/
    {
      v25 = *(_QWORD *)v21; /*0x100a74970*/
      v26 = *(_QWORD *)(v24 + 8); /*0x100a74974*/
    }
    else
    {
      v25 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100a75366*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v11,
              v22,
              v23);
      *(_QWORD *)v24 = v25; /*0x100a7536b*/
      *(_QWORD *)(v24 + 8) = v26; /*0x100a7536f*/
      *(_BYTE *)(v24 + 16) = 1; /*0x100a75374*/
    }
    *(_QWORD *)v24 = v25 + 1; /*0x100a7497d*/
    memset(&v120[1], 0, 24); /*0x100a749a4*/
    v120[0] = &xmmword_1015FBEC0; /*0x100a749b2*/
    v120[4] = v25; /*0x100a749b9*/
    v120[5] = v26; /*0x100a749c0*/
    if ( v15 ) /*0x100a749ca*/
    {
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(v120, v15, &v120[4], 1); /*0x100a75395*/
      v88 = v19 + 192; /*0x100a7539a*/
      v89 = v15; /*0x100a753a8*/
      do /*0x100a753cf*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v95, v88); /*0x100a753b1*/
        v20 = (void (**)(void))v120; /*0x100a753b6*/
        v27 = v95; /*0x100a753bd*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v120, v95); /*0x100a753c0*/
        v88 += 424; /*0x100a753c5*/
        --v89; /*0x100a753cc*/
      }
      while ( v89 ); /*0x100a753cf*/
      v113 = v120[5]; /*0x100a753d8*/
      v112 = v120[4]; /*0x100a753e6*/
      v111 = v120[3]; /*0x100a753f4*/
      v110 = v120[2]; /*0x100a75402*/
      v109 = v120[1]; /*0x100a75417*/
      v108 = (const __m128i *)v120[0]; /*0x100a7541e*/
      if ( v103[3] != 0x8000000000000000LL ) /*0x100a75439*/
      {
        v119 = (__int64 *)v103[3]; /*0x100a7543f*/
        v90 = 424 * v15; /*0x100a75446*/
        v91 = (__int64 *)v103[4]; /*0x100a7544d*/
        v92 = v103[5]; /*0x100a75454*/
        v93 = 0; /*0x100a7545b*/
        while ( 1 ) /*0x100a7546c*/
        {
          if ( *(_QWORD *)(v19 + v93 + 208) == v92 ) /*0x100a75474*/
          {
            v20 = *(void (***)(void))(v19 + v93 + 200); /*0x100a75476*/
            v27 = v91; /*0x100a7547e*/
            if ( !memcmp(v20, v91, v92) ) /*0x100a75484*/
              goto LABEL_27; /*0x100a7548b*/
          }
          v93 += 424; /*0x100a75460*/
          if ( v90 == v93 ) /*0x100a7546a*/
          {
            v27 = v119; /*0x100a754b2*/
            if ( v119 != (__int64 *)0x8000000000000000LL ) /*0x100a754c6*/
              goto LABEL_24; /*0x100a754c6*/
            break; /*0x100a754c6*/
          }
        }
      }
    }
    else
    {
      v113 = v120[5]; /*0x100a749d7*/
      v112 = v120[4]; /*0x100a749e5*/
      v111 = v120[3]; /*0x100a749f3*/
      v110 = v120[2]; /*0x100a74a01*/
      v109 = v120[1]; /*0x100a74a16*/
      v108 = (const __m128i *)v120[0]; /*0x100a74a1d*/
      v27 = (__int64 *)v103[3]; /*0x100a74a24*/
      if ( v103[3] != 0x8000000000000000LL ) /*0x100a74a38*/
      {
LABEL_24:
        if ( v27 ) /*0x100a74a3d*/
        {
          v20 = (void (**)(void))v103[4]; /*0x100a74a3f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103[4], v27, 1); /*0x100a74a4b*/
        }
      }
    }
    v103[3] = 0x8000000000000000LL; /*0x100a74a50*/
LABEL_27:
    v28 = std::time::SystemTime::now::h1fe79e41f9d5677f(v20, v27); /*0x100a74a61*/
    a1 = v121; /*0x100a74a66*/
    v29 = (__int64)v125; /*0x100a74a6a*/
    v95[0] = v28; /*0x100a74a6e*/
    LODWORD(v95[1]) = v30; /*0x100a74a75*/
    std::time::SystemTime::duration_since::had059553cab94f96(v120, v95, 0, 0); /*0x100a74a8d*/
    v31 = 0; /*0x100a74a92*/
    if ( !LOBYTE(v120[0]) ) /*0x100a74a9b*/
      v31 = v120[1]; /*0x100a74a9d*/
    v103[9] = v31; /*0x100a74aa4*/
    codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f(v120, v29, (__int64)v103, 0); /*0x100a74abe*/
    if ( LODWORD(v120[0]) == 11 )
    {
      v33 = *(void **)(v29 + 416); /*0x100a74acc*/
      v34 = *(_QWORD *)(v29 + 424); /*0x100a74ad3*/
      codexmate_lib::core::quota_store::load::h655f425e55903b24(v95, (__int64)v33, v34); /*0x100a74ae7*/
      if ( LODWORD(v95[0]) == 11 ) /*0x100a74af3*/
      {
        v118 = v95[5]; /*0x100a74b00*/
        v117 = v95[4]; /*0x100a74b0e*/
        v35 = v95[3]; /*0x100a74b15*/
        v116 = v95[3]; /*0x100a74b1c*/
        v115 = v95[2]; /*0x100a74b31*/
        v114 = v95[1]; /*0x100a74b38*/
      }
      else
      {
        qmemcpy(v120, v95, sizeof(v120)); /*0x100a74ce8*/
        LODWORD(v118) = 3; /*0x100a74ceb*/
        v117 = 0; /*0x100a74cf5*/
        v114 = 0; /*0x100a74d00*/
        v115 = 8; /*0x100a74d0b*/
        v116 = 0; /*0x100a74d16*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v120); /*0x100a74d24*/
        v35 = 0; /*0x100a74d29*/
      }
      alloc::vec::Vec$LT$T$C$A$GT$::retain::hed3430a67c186fee(&v114, &v108); /*0x100a74d39*/
      v51 = 0x8000000000000000LL; /*0x100a74d3e*/
      v96 = 0x8000000000000000LL; /*0x100a74d48*/
      if ( v116 != v35 )
      {
        v95[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(&v114, &v108); /*0x100a74d61*/
        LODWORD(v95[1]) = v52; /*0x100a74d68*/
        std::time::SystemTime::duration_since::had059553cab94f96(v120, v95, 0, 0); /*0x100a74d80*/
        v53 = LOBYTE(v120[0]) ? 0LL : v120[1];
        v117 = v53; /*0x100a74d99*/
        codexmate_lib::core::repository::Repository::save_quota_store::hd848fe86f04414c9(v95, v33, v34, (__int64)&v114); /*0x100a74db4*/
        if ( LODWORD(v95[0]) != 11 ) /*0x100a74dc0*/
        {
          qmemcpy(v120, v95, sizeof(v120)); /*0x100a74ddc*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v121, &v96); /*0x100a74ddf*/
          v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100a74dee*/
          if ( !v54 ) /*0x100a74df6*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x100a754db*/
          v55 = v54; /*0x100a74dfc*/
          qmemcpy(v54, "QUOTA_CACHE_CLEANUP_INCOMPLETE", 30); /*0x100a74e33*/
          v105 = v120; /*0x100a74e36*/
          v106 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a74e44*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v94, &unk_1017C9A03, &v105); /*0x100a74e60*/
          v99 = v94[0]; /*0x100a74e73*/
          v100 = v94[1]; /*0x100a74e7a*/
          v101 = v94[2]; /*0x100a74e88*/
          v96 = 30; /*0x100a74e8f*/
          v97 = v55; /*0x100a74e9a*/
          v98 = 30; /*0x100a74ea1*/
          v51 = 30; /*0x100a74eac*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v120); /*0x100a74eb9*/
        }
      }
      codexmate_lib::core::repository::remove_account_backup_files::hc91690ea17e0d058( /*0x100a74eef*/
        (__int64)v120,
        *(volatile signed __int64 ***)(v29 + 272),
        *(_QWORD *)(v29 + 280),
        &unk_10167C49A,
        0x1Eu,
        (__int64)&unk_10167C4B8,
        14);
      v56 = v120[0]; /*0x100a74ef4*/
      v124 = v120[3]; /*0x100a74f01*/
      v123 = v120[2]; /*0x100a74f0c*/
      v122 = v120[1]; /*0x100a74f17*/
      codexmate_lib::core::repository::remove_account_backup_files::hc91690ea17e0d058( /*0x100a74f4c*/
        (__int64)v120,
        *(volatile signed __int64 ***)(v29 + 296),
        *(_QWORD *)(v29 + 304),
        &unk_10167C4C6,
        0x22u,
        (__int64)&unk_10167BBC0,
        8);
      v58 = v120[0]; /*0x100a74f51*/
      v59 = v120[3]; /*0x100a74f58*/
      v107 = v120[3]; /*0x100a74f5f*/
      v60 = (const void *)v120[2]; /*0x100a74f66*/
      v106 = (__int64 (__fastcall *)(_QWORD, _QWORD))v120[2]; /*0x100a74f6d*/
      v105 = (_QWORD *)v120[1]; /*0x100a74f7b*/
      v61 = v124; /*0x100a74f86*/
      if ( v120[3] > (unsigned __int64)(v122 - v124) ) /*0x100a74f90*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a754a4*/
          &v122,
          v124,
          v120[3],
          8,
          48,
          v57);
        v61 = v124; /*0x100a754a9*/
      }
      memcpy((void *)(v123 + 48 * v61), v60, 48 * v59); /*0x100a74fb0*/
      v62 = v124 + v59; /*0x100a74fb5*/
      v124 = v62; /*0x100a74fb9*/
      v107 = 0; /*0x100a74fbd*/
      LODWORD(v125) = v51 == 0x8000000000000000LL; /*0x100a74fd8*/
      if ( v51 != 0x8000000000000000LL ) /*0x100a74fdb*/
      {
        if ( v62 == v122 ) /*0x100a74fe1*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v122); /*0x100a74fe7*/
        v63 = v123; /*0x100a74fec*/
        v64 = 48 * v62; /*0x100a74ff4*/
        *(_QWORD *)(v123 + v64 + 40) = v101; /*0x100a74fff*/
        *(_QWORD *)(v63 + v64 + 32) = v100; /*0x100a7500b*/
        *(_QWORD *)(v63 + v64 + 24) = v99; /*0x100a75017*/
        *(_QWORD *)(v63 + v64 + 16) = v98; /*0x100a75023*/
        v65 = v96; /*0x100a75028*/
        *(_QWORD *)(v63 + v64 + 8) = v97; /*0x100a75036*/
        *(_QWORD *)(v63 + v64) = v65; /*0x100a7503b*/
        v124 = v62 + 1; /*0x100a75042*/
      }
      v102[0] = v56; /*0x100a75053*/
      v102[1] = v58; /*0x100a75059*/
      v102[2] = v104 - LODWORD(v103[2]); /*0x100a75060*/
      v95[2] = v124; /*0x100a7506a*/
      v95[1] = v123; /*0x100a75079*/
      v95[0] = v122; /*0x100a75080*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h3c83c130f697f4cd( /*0x100a7509c*/
        (__int64)v120,
        (__int64)v102,
        v95);
      a1 = v121; /*0x100a750a1*/
      qmemcpy(v121 + 1, v120, 0x60u); /*0x100a750b5*/
      *a1 = 0; /*0x100a750b8*/
      if ( v105 ) /*0x100a750ca*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, 48LL * (_QWORD)v105, 8); /*0x100a750dc*/
      v66 = v116; /*0x100a750e1*/
      if ( v116 ) /*0x100a750eb*/
      {
        v67 = (_QWORD *)(v115 + 128); /*0x100a750f4*/
        do /*0x100a7510a*/
        {
          v68 = *(v67 - 1); /*0x100a7510c*/
          if ( v68 ) /*0x100a75113*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v67, v68, 1); /*0x100a7511d*/
          v67 += 20; /*0x100a75100*/
          --v66; /*0x100a75107*/
        }
        while ( v66 ); /*0x100a7510a*/
      }
      HIDWORD(_RAX) = HIDWORD(v114); /*0x100a75124*/
      if ( v114 ) /*0x100a7512e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, 160 * v114, 8); /*0x100a75144*/
      v70 = v109; /*0x100a75149*/
      if ( v109 ) /*0x100a75153*/
      {
        v71 = v111; /*0x100a75159*/
        if ( v111 ) /*0x100a75163*/
        {
          v72 = v108; /*0x100a75169*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v108)); /*0x100a7517a*/
          v74 = v108 + 1; /*0x100a7517d*/
          do /*0x100a751a0*/
          {
            if ( !(_WORD)_R13D ) /*0x100a751a6*/
            {
              do /*0x100a751cd*/
              {
                v75 = _mm_movemask_epi8(_mm_load_si128(v74)); /*0x100a751b6*/
                v72 -= 24; /*0x100a751bb*/
                ++v74; /*0x100a751c2*/
              }
              while ( v75 == 0xFFFF ); /*0x100a751cd*/
              _R13D = ~v75; /*0x100a751cf*/
            }
            __asm { tzcnt eax, r13d } /*0x100a751d2*/
            v76 = -3 * _RAX; /*0x100a751da*/
            v77 = *((_QWORD *)&v72[-1] + v76 - 1); /*0x100a751de*/
            if ( v77 ) /*0x100a751e6*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72[-1].i64[v76], v77, 1); /*0x100a751f5*/
            --v71; /*0x100a75190*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100a75197*/
            _R13D &= _R13D - 1; /*0x100a7519a*/
          }
          while ( v71 ); /*0x100a751a0*/
        }
        v78 = (24 * v70 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100a75208*/
        v79 = v78 + v70; /*0x100a7520c*/
        v46 = v79 == -17; /*0x100a7520f*/
        v80 = v79 + 17; /*0x100a7520f*/
        a1 = v121; /*0x100a75213*/
        if ( !v46 ) /*0x100a75217*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v108 - v78, v80, 16); /*0x100a7522b*/
      }
      if ( v103[3] != 0x8000000000000000LL && v103[3] ) /*0x100a75249*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103[4], v103[3], 1); /*0x100a75257*/
      v81 = v103[1]; /*0x100a7525c*/
      v82 = v103[2]; /*0x100a75263*/
      if ( v103[2] ) /*0x100a7526d*/
      {
        v83 = v103[1]; /*0x100a7526f*/
        do /*0x100a75292*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v83); /*0x100a75283*/
          v83 += 424; /*0x100a75288*/
          --v82; /*0x100a7528f*/
        }
        while ( v82 ); /*0x100a75292*/
      }
      if ( v103[0] ) /*0x100a7529e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, 424LL * v103[0], 8); /*0x100a752af*/
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v126); /*0x100a752b8*/
      goto LABEL_95; /*0x100a752b8*/
    }
    qmemcpy(a1 + 1, v120, 0x60u); /*0x100a74b54*/
    *a1 = 1; /*0x100a74b57*/
    v36 = v109; /*0x100a74b5f*/
    if ( v109 ) /*0x100a74b69*/
    {
      v37 = v111; /*0x100a74b6f*/
      if ( v111 ) /*0x100a74b79*/
      {
        v38 = v108; /*0x100a74b7f*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v108)); /*0x100a74b90*/
        v40 = v108 + 1; /*0x100a74b93*/
        do /*0x100a74bb0*/
        {
          if ( !(_WORD)_R13D ) /*0x100a74bb6*/
          {
            do /*0x100a74bdd*/
            {
              v41 = _mm_movemask_epi8(_mm_load_si128(v40)); /*0x100a74bc6*/
              v38 -= 24; /*0x100a74bcb*/
              ++v40; /*0x100a74bd2*/
            }
            while ( v41 == 0xFFFF ); /*0x100a74bdd*/
            _R13D = ~v41; /*0x100a74bdf*/
          }
          __asm { tzcnt eax, r13d } /*0x100a74be2*/
          v42 = -3 * _RAX; /*0x100a74bea*/
          v43 = *((_QWORD *)&v38[-1] + v42 - 1); /*0x100a74bee*/
          if ( v43 ) /*0x100a74bf6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38[-1].i64[v42], v43, 1); /*0x100a74c05*/
          --v37; /*0x100a74ba0*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100a74ba7*/
          _R13D &= _R13D - 1; /*0x100a74baa*/
        }
        while ( v37 ); /*0x100a74bb0*/
      }
      v44 = (24 * v36 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100a74c18*/
      v45 = v44 + v36; /*0x100a74c1c*/
      v46 = v45 == -17; /*0x100a74c1f*/
      v47 = v45 + 17; /*0x100a74c1f*/
      a1 = v121; /*0x100a74c23*/
      if ( !v46 ) /*0x100a74c27*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v108 - v44, v47, 16); /*0x100a74c3b*/
    }
    if ( v103[3] != 0x8000000000000000LL && v103[3] ) /*0x100a74c59*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103[4], v103[3], 1); /*0x100a74c67*/
    v48 = v103[1]; /*0x100a74c6c*/
    v49 = v103[2]; /*0x100a74c73*/
    if ( v103[2] ) /*0x100a74c7d*/
    {
      v50 = v103[1]; /*0x100a74c7f*/
      do /*0x100a74ca2*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v50); /*0x100a74c93*/
        v50 += 424; /*0x100a74c98*/
        --v49; /*0x100a74c9f*/
      }
      while ( v49 ); /*0x100a74ca2*/
    }
    if ( v103[0] ) /*0x100a74cae*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, 424LL * v103[0], 8); /*0x100a74cbf*/
LABEL_51:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v126); /*0x100a74cc4*/
LABEL_95:
    close_NOCANCEL(v126[0]); /*0x100a752bd*/
    return a1; /*0x100a752c0*/
  }
  v16 = (_DWORD *)a1 + 5; /*0x100a74905*/
  v17 = v95; /*0x100a74909*/
  for ( j = 21; j; --j ) /*0x100a74910*/
  {
    *v16 = *(_DWORD *)v17; /*0x100a74915*/
    v17 = (__int64 *)((char *)v17 + 4); /*0x100a74915*/
    ++v16; /*0x100a74915*/
  }
  a1[1] = v5; /*0x100a74917*/
  *((_DWORD *)a1 + 4) = v6; /*0x100a7491b*/
  *a1 = 1; /*0x100a7491f*/
  return a1; /*0x100a752c8*/
}