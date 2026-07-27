// __ZN13codexmate_lib4core6skills12remove_skill @ 0x10034b920 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::skills::remove_skill::h2636f5d82a416b8f(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5,
        void *a6,
        size_t __n)
{
  __int64 v8; // rbx
  __int64 v9; // r12
  char v10; // r15
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // r12
  __int64 v16; // rbx
  void *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rbx
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  const void *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdi
  const void *v30; // rsi
  int v31; // r14d
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rbx
  int v42; // r12d
  __int64 v43; // rbx
  _QWORD *v44; // r14
  __int64 v45; // rbx
  char v46; // r12
  __int64 v47; // rsi
  _QWORD *v48; // rdi
  __int64 v49; // rdx
  _QWORD *v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rcx
  _QWORD v53[12]; // [rsp+18h] [rbp-238h] BYREF
  _QWORD v54[19]; // [rsp+78h] [rbp-1D8h] BYREF
  _QWORD v55[2]; // [rsp+110h] [rbp-140h] BYREF
  __int64 v56; // [rsp+120h] [rbp-130h] BYREF
  __int64 v57; // [rsp+128h] [rbp-128h]
  __int64 v58; // [rsp+130h] [rbp-120h]
  _QWORD v59[3]; // [rsp+138h] [rbp-118h] BYREF
  __int64 v60; // [rsp+150h] [rbp-100h] BYREF
  _QWORD v61[18]; // [rsp+158h] [rbp-F8h] BYREF
  void *__s2; // [rsp+1E8h] [rbp-68h]
  __int64 v63; // [rsp+1F0h] [rbp-60h]
  __int64 v64; // [rsp+1F8h] [rbp-58h]
  _QWORD *v65; // [rsp+200h] [rbp-50h]
  void *v66; // [rsp+208h] [rbp-48h]
  __int64 v67; // [rsp+210h] [rbp-40h]
  size_t v68; // [rsp+218h] [rbp-38h]
  char v69; // [rsp+227h] [rbp-29h]

  v68 = a5; /*0x10034b934*/
  v66 = a4; /*0x10034b938*/
  v64 = a3; /*0x10034b93c*/
  __s2 = a6; /*0x10034b94a*/
  v55[0] = a6; /*0x10034b94e*/
  v55[1] = __n; /*0x10034b955*/
  codexmate_lib::core::skills::lock_skill_mutations::h04196551a2ddac87(&v60); /*0x10034b963*/
  v8 = v60; /*0x10034b968*/
  v9 = v61[0]; /*0x10034b96f*/
  v10 = v61[1]; /*0x10034b976*/
  if ( v60 != 11 ) /*0x10034b982*/
  {
    memcpy((void *)(a1 + 25), (char *)&v61[1] + 1, 0x4Fu); /*0x10034bab6*/
    *(_QWORD *)(a1 + 8) = v8; /*0x10034babb*/
    *(_QWORD *)(a1 + 16) = v9; /*0x10034babf*/
    *(_BYTE *)(a1 + 24) = v10; /*0x10034bac3*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10034bad1*/
    return (_QWORD *)a1; /*0x10034bad8*/
  }
  v65 = (_QWORD *)a1; /*0x10034b988*/
  v11 = v61[0]; /*0x10034b98c*/
  v69 = v61[1]; /*0x10034b98f*/
  codexmate_lib::core::skills::load_installed_skills::h6f4b3adab8a1bead(&v60, a2, v64); /*0x10034b9a1*/
  v12 = 0x8000000000000000LL; /*0x10034b9a6*/
  v13 = v60; /*0x10034b9b0*/
  v54[0] = v61[0]; /*0x10034b9be*/
  v54[1] = v61[1]; /*0x10034b9cc*/
  v54[2] = v61[2]; /*0x10034b9da*/
  if ( v60 != 11 ) /*0x10034b9e5*/
  {
    v21 = v65; /*0x10034bae4*/
    v65[12] = v61[10]; /*0x10034bae8*/
    v21[11] = v61[9]; /*0x10034baf3*/
    v21[10] = v61[8]; /*0x10034bafe*/
    v21[9] = v61[7]; /*0x10034bb09*/
    v21[8] = v61[6]; /*0x10034bb14*/
    v21[7] = v61[5]; /*0x10034bb1f*/
    v22 = v61[3]; /*0x10034bb23*/
    v21[6] = v61[4]; /*0x10034bb31*/
    v21[5] = v22; /*0x10034bb35*/
    v21[4] = v54[2]; /*0x10034bb40*/
    v23 = v54[0]; /*0x10034bb44*/
    v24 = v54[1]; /*0x10034bb4b*/
    v21[3] = v54[1]; /*0x10034bb52*/
    v21[2] = v23; /*0x10034bb56*/
    v21[1] = v13; /*0x10034bb5a*/
    *v21 = 0x8000000000000000LL; /*0x10034bb5e*/
LABEL_16:
    if ( (v69 & 1) == 0 /*0x10034c0c2*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v21,
                             v12,
                             v24,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v11 + 8) = 1; /*0x10034c0cf*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v11); /*0x10034bc38*/
    return v65; /*0x10034bc52*/
  }
  v67 = v9; /*0x10034b9eb*/
  v14 = (_QWORD *)v54[1]; /*0x10034b9f6*/
  v59[0] = v54[0]; /*0x10034b9fd*/
  v59[1] = v54[1]; /*0x10034ba04*/
  v59[2] = v54[2]; /*0x10034ba12*/
  if ( !v54[2] ) /*0x10034ba1c*/
  {
LABEL_13:
    v54[0] = v55; /*0x10034bb66*/
    v54[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10034bb7b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v61, &unk_1017BC7BD, v54); /*0x10034bb97*/
    v60 = 8; /*0x10034bb9c*/
    v25 = v61[0]; /*0x10034bba7*/
    v26 = v65; /*0x10034bbb5*/
    qmemcpy(v65 + 3, &v61[1], 0x50u); /*0x10034bbc2*/
    v12 = (__int64)&v61[11]; /*0x10034bbc2*/
    v26[1] = 8; /*0x10034bbc5*/
    v26[2] = v25; /*0x10034bbcd*/
    *v26 = 0x8000000000000000LL; /*0x10034bbdb*/
    v11 = v67; /*0x10034bbde*/
LABEL_14:
    v21 = v59; /*0x10034bbe2*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e99d9d35889ec90(v59); /*0x10034bbe9*/
    if ( v59[0] ) /*0x10034bbf8*/
    {
      v12 = 184LL * v59[0]; /*0x10034bbfa*/
      v21 = v14; /*0x10034bc06*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 184LL * v59[0], 8); /*0x10034bc09*/
    }
    goto LABEL_16; /*0x10034bc09*/
  }
  v15 = a2; /*0x10034ba22*/
  v16 = 0; /*0x10034ba2c*/
  while ( *(_QWORD *)(v54[1] + v16 + 32) != __n || memcmp(*(const void **)(v54[1] + v16 + 24), __s2, __n) ) /*0x10034ba5f*/
  {
    v16 += 184; /*0x10034ba30*/
    if ( 184LL * v54[2] == v16 ) /*0x10034ba3a*/
      goto LABEL_13; /*0x10034ba3a*/
  }
  v17 = v66; /*0x10034ba75*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v56, v66, v68, "skill-backupsreplace", 13); /*0x10034ba7d*/
  v18 = *(_QWORD *)(v54[1] + v16 + 104); /*0x10034ba82*/
  v11 = v67; /*0x10034ba8a*/
  if ( v18 < 0 ) /*0x10034ba8e*/
  {
    v19 = 0; /*0x10034ba94*/
    goto LABEL_10; /*0x10034ba94*/
  }
  v27 = *(const void **)(v54[1] + v16 + 96); /*0x10034bc53*/
  v68 = *(_QWORD *)(v54[1] + v16 + 104); /*0x10034bc58*/
  if ( v18 ) /*0x10034bc5c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56, v17); /*0x10034bc5e*/
    v19 = 1; /*0x10034bc63*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v68, 1); /*0x10034bc71*/
    v18 = v68; /*0x10034bc76*/
    if ( !v28 ) /*0x10034bc7d*/
LABEL_10:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v18); /*0x10034ba96*/
    v29 = v28; /*0x10034bc83*/
  }
  else
  {
    v29 = 1; /*0x10034bc88*/
  }
  v30 = v27; /*0x10034bc8d*/
  v31 = v18; /*0x10034bc90*/
  memcpy((void *)v29, v30, v18); /*0x10034bc96*/
  v66 = (void *)v29; /*0x10034bcc9*/
  v32 = v57; /*0x10034bcd0*/
  codexmate_lib::core::skills::backup_skill_directory::hadcafe7a62e8ba58( /*0x10034bce0*/
    (unsigned int)&v60,
    v29,
    v31,
    v15,
    v64,
    v57,
    v58,
    (__int64)"removemetadata.json",
    6);
  qmemcpy(v53, v61, sizeof(v53)); /*0x10034bcff*/
  if ( v60 == 0x8000000000000000LL ) /*0x10034bd0f*/
  {
    v33 = v65; /*0x10034bd11*/
    qmemcpy(v65 + 1, v53, 0x60u); /*0x10034bd25*/
    *v33 = 0x8000000000000000LL; /*0x10034bd28*/
LABEL_49:
    if ( v68 ) /*0x10034c094*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v68, 1); /*0x10034c09b*/
    v12 = v56; /*0x10034c0a0*/
    if ( v56 ) /*0x10034c0aa*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v56, 1); /*0x10034c0b8*/
    goto LABEL_14; /*0x10034c0bd*/
  }
  v54[18] = v61[17]; /*0x10034bd34*/
  v54[17] = v61[16]; /*0x10034bd3f*/
  v54[16] = v61[15]; /*0x10034bd4a*/
  v54[15] = v61[14]; /*0x10034bd58*/
  v54[14] = v61[13]; /*0x10034bd6d*/
  v54[13] = v61[12]; /*0x10034bd74*/
  qmemcpy(&v54[1], v53, 0x60u); /*0x10034bd8e*/
  v54[0] = v60; /*0x10034bd91*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v60, v66, v68); /*0x10034bda7*/
  if ( (_BYTE)v60 ) /*0x10034bdb3*/
  {
    if ( (v61[0] & 3) == 1 ) /*0x10034bdc4*/
    {
      v63 = v61[0] - 1LL; /*0x10034bdce*/
      v34 = *(_QWORD *)(v61[0] - 1LL); /*0x10034bdd2*/
      v35 = *(_QWORD *)(v61[0] + 7LL); /*0x10034bdd6*/
      if ( *(_QWORD *)v35 ) /*0x10034bdda*/
        (*(void (__fastcall **)(__int64))v35)(v34); /*0x10034bde6*/
      v36 = *(_QWORD *)(v35 + 8); /*0x10034bde8*/
      if ( v36 ) /*0x10034bdef*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v36, *(_QWORD *)(v35 + 16)); /*0x10034bdf8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, 24, 8); /*0x10034be0b*/
      v11 = v67; /*0x10034be10*/
    }
  }
  else
  {
    v37 = std::sys::fs::remove_dir_all::h50b3bc76069a86c9(v66, v68); /*0x10034be1e*/
    if ( v37 ) /*0x10034be26*/
    {
      v38 = v65; /*0x10034be28*/
      v65[1] = 2; /*0x10034be2c*/
      v38[2] = v37; /*0x10034be34*/
      *v38 = 0x8000000000000000LL; /*0x10034be42*/
LABEL_48:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..SkillBackupSummary$GT$::hfb0fd7a1c63aceca(v54); /*0x10034c07d*/
      goto LABEL_49; /*0x10034c084*/
    }
  }
  codexmate_lib::core::skills::load_installed_skills::h6f4b3adab8a1bead(&v60, v15, v64); /*0x10034be58*/
  v39 = v60; /*0x10034be5d*/
  v53[0] = v61[0]; /*0x10034be6b*/
  v53[1] = v61[1]; /*0x10034be79*/
  v53[2] = v61[2]; /*0x10034be87*/
  if ( v60 != 11 ) /*0x10034be92*/
  {
    v50 = v65; /*0x10034bff6*/
    v65[12] = v61[10]; /*0x10034bffa*/
    v50[11] = v61[9]; /*0x10034c005*/
    v50[10] = v61[8]; /*0x10034c010*/
    v50[9] = v61[7]; /*0x10034c01b*/
    v50[8] = v61[6]; /*0x10034c026*/
    v50[7] = v61[5]; /*0x10034c031*/
    v51 = v61[3]; /*0x10034c035*/
    v50[6] = v61[4]; /*0x10034c043*/
    v50[5] = v51; /*0x10034c047*/
    v50[4] = v53[2]; /*0x10034c052*/
    v52 = v53[0]; /*0x10034c056*/
    v50[3] = v53[1]; /*0x10034c064*/
    v50[2] = v52; /*0x10034c068*/
    v50[1] = v39; /*0x10034c06c*/
    *v50 = 0x8000000000000000LL; /*0x10034c07a*/
    goto LABEL_48; /*0x10034c07a*/
  }
  v63 = v32; /*0x10034be98*/
  v40 = v53[0]; /*0x10034be9c*/
  v41 = v53[1]; /*0x10034bea3*/
  v42 = v53[2]; /*0x10034beaa*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e99d9d35889ec90(v53); /*0x10034beb8*/
  if ( v40 ) /*0x10034bec0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 184 * v40, 8); /*0x10034bed1*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v60, __n, 0, 1, 1); /*0x10034bef1*/
  v64 = v61[0]; /*0x10034befd*/
  if ( (_DWORD)v60 == 1 ) /*0x10034bf08*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v64, v61[1]); /*0x10034c0e4*/
  v43 = v61[1]; /*0x10034bf0e*/
  memcpy((void *)v61[1], __s2, __n); /*0x10034bf1f*/
  v44 = v65; /*0x10034bf24*/
  memcpy(v65 + 3, v54, 0x98u); /*0x10034bf38*/
  *v44 = v64; /*0x10034bf41*/
  v44[1] = v43; /*0x10034bf44*/
  v44[2] = __n; /*0x10034bf48*/
  *((_DWORD *)v44 + 44) = v42; /*0x10034bf4c*/
  v45 = v67; /*0x10034bf5a*/
  v46 = v69; /*0x10034bf5e*/
  if ( v68 ) /*0x10034bf63*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v68, 1); /*0x10034bf6e*/
  v47 = v56; /*0x10034bf73*/
  if ( v56 ) /*0x10034bf7d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v56, 1); /*0x10034bf88*/
  v48 = v59; /*0x10034bf8d*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h0e99d9d35889ec90(v59); /*0x10034bf94*/
  if ( v59[0] ) /*0x10034bfa3*/
  {
    v47 = 184LL * v59[0]; /*0x10034bfa5*/
    v48 = v14; /*0x10034bfb1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 184LL * v59[0], 8); /*0x10034bfb4*/
  }
  if ( (v46 & 1) == 0 /*0x10034c0eb*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v48,
                           v47,
                           v49,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v45 + 8) = 1; /*0x10034c0f8*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v45); /*0x10034bfe2*/
  return v44; /*0x10034bc41*/
}