// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::load_summaries::hb6771ff76acbafcc; addr: 0x1008aa530; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:17Z
__int64 __fastcall codexmate_lib::core::analytics::threads::load_summaries::hb6771ff76acbafcc(
        __int64 a1,
        __int64 a2,
        char a3,
        __m128i a4,
        __m128i a5)
{
  __int64 v7; // rax
  __int64 v8; // rt0
  char v9; // of
  __int64 v10; // r14
  __int64 v11; // rdi
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdi
  char v18; // r8
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // r12d
  int v23; // ecx
  int v24; // r13d
  unsigned __int64 v25; // rax
  int v26; // r13d
  unsigned __int64 v27; // rax
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // r13
  __int64 v35; // r12
  unsigned __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rbx
  char v40; // r12
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int autocommit; // eax
  int v47; // eax
  _QWORD v48[13]; // [rsp+0h] [rbp-240h] BYREF
  unsigned __int8 v49; // [rsp+68h] [rbp-1D8h]
  _BYTE v50[7]; // [rsp+69h] [rbp-1D7h]
  __int64 v51; // [rsp+70h] [rbp-1D0h]
  __int64 v52; // [rsp+78h] [rbp-1C8h]
  __int64 v53; // [rsp+80h] [rbp-1C0h]
  int v54; // [rsp+88h] [rbp-1B8h] BYREF
  __int64 v55; // [rsp+8Ch] [rbp-1B4h]
  unsigned int v56; // [rsp+94h] [rbp-1ACh]
  __int64 v57; // [rsp+98h] [rbp-1A8h]
  _QWORD *v58; // [rsp+A0h] [rbp-1A0h]
  __int64 v59; // [rsp+A8h] [rbp-198h]
  __int64 v60; // [rsp+B0h] [rbp-190h] BYREF
  __int128 v61; // [rsp+B8h] [rbp-188h]
  __int64 v62; // [rsp+C8h] [rbp-178h]
  __int64 v63; // [rsp+D0h] [rbp-170h]
  __int64 v64; // [rsp+D8h] [rbp-168h]
  __int64 v65; // [rsp+E0h] [rbp-160h]
  __int64 v66; // [rsp+E8h] [rbp-158h]
  unsigned __int64 v67; // [rsp+F0h] [rbp-150h]
  __int64 v68; // [rsp+F8h] [rbp-148h]
  _QWORD v69[13]; // [rsp+100h] [rbp-140h] BYREF
  _DWORD v70[2]; // [rsp+168h] [rbp-D8h]
  __int64 __src[13]; // [rsp+170h] [rbp-D0h] BYREF
  unsigned __int8 v72; // [rsp+1D8h] [rbp-68h]
  _BYTE v73[7]; // [rsp+1D9h] [rbp-67h]
  _QWORD *v74; // [rsp+1E0h] [rbp-60h]
  __int64 v75; // [rsp+1E8h] [rbp-58h]
  int v76; // [rsp+1F4h] [rbp-4Ch]
  volatile signed __int64 *v77; // [rsp+1F8h] [rbp-48h] BYREF
  __int64 v78; // [rsp+200h] [rbp-40h]
  unsigned int v79; // [rsp+208h] [rbp-38h]
  int v80; // [rsp+20Ch] [rbp-34h]
  char v81; // [rsp+213h] [rbp-2Dh]
  int v82; // [rsp+214h] [rbp-2Ch]

  v7 = codexmate_lib::core::analytics::index::worker::hd4cc4bbca6f7f453(a2, a2, *(double *)a4.i64); /*0x1008aa550*/
  __src[0] = v7; /*0x1008aa555*/
  v8 = _InterlockedIncrement64(*(volatile signed __int64 **)(v7 + 24)); /*0x1008aa560*/
  if ( (v8 < 0) ^ v9 | (v8 == 0) ) /*0x1008aa564*/
    BUG(); /*0x1008ab017*/
  v10 = *(_QWORD *)(v7 + 24); /*0x1008aa56a*/
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v7) ) /*0x1008aa56e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf3ecc9bd6a189e11(__src); /*0x1008aa57b*/
  v77 = (volatile signed __int64 *)v10; /*0x1008aa580*/
  v74 = (_QWORD *)(v10 + 16); /*0x1008aa588*/
  v11 = *(_QWORD *)(v10 + 16); /*0x1008aa58c*/
  if ( !v11 ) /*0x1008aa593*/
    v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v74); /*0x1008aaf94*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(*(double *)a4.i64); /*0x1008aa599*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1008aa5a8*/
  {
    v47 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11); /*0x1008aaf9c*/
    LOBYTE(v47) = v47 ^ 1; /*0x1008aafa1*/
    v80 = v47; /*0x1008aafa3*/
  }
  else
  {
    v80 = 0; /*0x1008aa5b4*/
  }
  codexmate_lib::core::analytics::index::open::h0b002a90e8a0a409( /*0x1008aa5d7*/
    (__int64)__src,
    *(_QWORD *)(a2 + 344),
    *(_QWORD *)(a2 + 352));
  if ( v72 == 3 ) /*0x1008aa5e2*/
  {
    qmemcpy(v69, __src, 0x60u); /*0x1008aa5fa*/
    qmemcpy((void *)(a1 + 8), v69, 0x60u); /*0x1008aa609*/
    v12 = (_QWORD *)(a1 + 104); /*0x1008aa609*/
    *(_QWORD *)a1 = 1; /*0x1008aa60c*/
    goto LABEL_48; /*0x1008aa613*/
  }
  qmemcpy(v69, __src, sizeof(v69)); /*0x1008aa62e*/
  *(_DWORD *)&v50[3] = *(_DWORD *)&v73[3]; /*0x1008aa637*/
  *(_DWORD *)v50 = *(_DWORD *)v73; /*0x1008aa63d*/
  qmemcpy(v48, v69, sizeof(v48)); /*0x1008aa652*/
  v49 = v72; /*0x1008aa655*/
  codexmate_lib::core::analytics::index::request_scan::hf3b98134486ca583(a2, a3, *(double *)a4.i64); /*0x1008aa662*/
  rusqlite::Connection::execute_batch::h4a2529fc120bbad7( /*0x1008aa695*/
    __src,
    v48,
    *(&off_101AB7950 + (unsigned int)v49),
    qword_10178D568[v49]);
  v67 = 0x8000000000000016LL; /*0x1008aa6af*/
  if ( __src[0] != 0x8000000000000016LL ) /*0x1008aa6b9*/
  {
    *(_OWORD *)((char *)&v69[2] + 1) = *(_OWORD *)((char *)&__src[2] + 1); /*0x1008aabc0*/
    *(_OWORD *)((char *)&v69[4] + 1) = *(_OWORD *)((char *)&__src[4] + 1); /*0x1008aabdc*/
    *(_QWORD *)((char *)&v69[6] + 1) = *(__int64 *)((char *)&__src[6] + 1); /*0x1008aabf8*/
    v69[7] = __src[7]; /*0x1008aac06*/
    v69[0] = __src[0]; /*0x1008aac0d*/
    v69[1] = __src[1]; /*0x1008aac14*/
    LOBYTE(v69[2]) = __src[2]; /*0x1008aac1b*/
    __src[0] = (__int64)v69; /*0x1008aac21*/
    __src[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1008aac2f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v60, &unk_101902300, __src); /*0x1008aac4b*/
    v39 = v60; /*0x1008aac50*/
    v40 = v61; /*0x1008aac57*/
    __src[0] = *(_QWORD *)((char *)&v61 + 1); /*0x1008aac66*/
    *(__int64 *)((char *)__src + 7) = *((_QWORD *)&v61 + 1); /*0x1008aac74*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v69); /*0x1008aac82*/
    memcpy((void *)(a1 + 25), __src, 0x4Fu); /*0x1008aac97*/
    *(_QWORD *)(a1 + 8) = 10; /*0x1008aac9c*/
    *(_QWORD *)(a1 + 16) = v39; /*0x1008aaca4*/
    *(_BYTE *)(a1 + 24) = v40; /*0x1008aaca8*/
    *(_QWORD *)a1 = 1; /*0x1008aacac*/
LABEL_47:
    v12 = v48; /*0x1008aaf2c*/
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v48); /*0x1008aaf33*/
LABEL_48:
    if ( !(_BYTE)v80 /*0x1008aafab*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12) )
    {
      *(_BYTE *)(v10 + 24) = 1; /*0x1008aafb4*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v74); /*0x1008aaf5e*/
    goto LABEL_51; /*0x1008aaf5e*/
  }
  codexmate_lib::core::analytics::index::status::h78b71e6d4a3ce1f7((__int64)__src, a2, (__int64)v48, a4); /*0x1008aa6d0*/
  v13 = __src[0]; /*0x1008aa6d5*/
  v14 = __src[1]; /*0x1008aa6dc*/
  v15 = __src[2]; /*0x1008aa6e3*/
  v16 = __src[3]; /*0x1008aa6ea*/
  v17 = __src[4]; /*0x1008aa6f1*/
  v69[0] = __src[5]; /*0x1008aa6ff*/
  v69[1] = __src[6]; /*0x1008aa70d*/
  v69[2] = __src[7]; /*0x1008aa71b*/
  v18 = __src[8]; /*0x1008aa722*/
  LODWORD(v60) = *(_DWORD *)((char *)&__src[8] + 1); /*0x1008aa730*/
  *(_DWORD *)((char *)&v60 + 3) = HIDWORD(__src[8]); /*0x1008aa73c*/
  if ( __src[0] != 11 ) /*0x1008aa746*/
  {
    *(_QWORD *)(a1 + 96) = __src[11]; /*0x1008aacbc*/
    v41 = __src[9]; /*0x1008aacc0*/
    *(_QWORD *)(a1 + 88) = __src[10]; /*0x1008aaccb*/
    *(_QWORD *)(a1 + 80) = v41; /*0x1008aaccf*/
    *(_QWORD *)(a1 + 16) = v14; /*0x1008aacd3*/
    *(_QWORD *)(a1 + 24) = v15; /*0x1008aacd7*/
    *(_QWORD *)(a1 + 32) = v16; /*0x1008aacdb*/
    *(_QWORD *)(a1 + 40) = v17; /*0x1008aacdf*/
    v42 = v69[1]; /*0x1008aacea*/
    *(_QWORD *)(a1 + 48) = v69[0]; /*0x1008aacf1*/
    *(_QWORD *)(a1 + 56) = v42; /*0x1008aacf5*/
    *(_QWORD *)(a1 + 64) = v69[2]; /*0x1008aad00*/
    *(_BYTE *)(a1 + 72) = v18; /*0x1008aad04*/
    LODWORD(v42) = *(_DWORD *)((char *)&v60 + 3); /*0x1008aad0e*/
    *(_DWORD *)(a1 + 73) = v60; /*0x1008aad14*/
    *(_DWORD *)(a1 + 76) = v42; /*0x1008aad18*/
    *(_QWORD *)(a1 + 8) = v13; /*0x1008aad1c*/
    *(_QWORD *)a1 = 1; /*0x1008aad20*/
LABEL_41:
    if ( v48[0] >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x1008aadfa*/
      core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_101AB7860); /*0x1008aafc2*/
    ++v48[0]; /*0x1008aae03*/
    autocommit = sqlite3_get_autocommit((sqlite3 *)v48[2]); /*0x1008aae11*/
    --v48[0]; /*0x1008aae16*/
    if ( !autocommit ) /*0x1008aae1f*/
    {
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__src, v48, &unk_1016F25F8, 8); /*0x1008aae3f*/
      if ( __src[0] != v67 ) /*0x1008aae52*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__src); /*0x1008aae5f*/
    }
    goto LABEL_47; /*0x1008aae64*/
  }
  v57 = __src[2]; /*0x1008aa74c*/
  v81 = __src[8]; /*0x1008aa753*/
  v75 = __src[4]; /*0x1008aa757*/
  v78 = __src[3]; /*0x1008aa75b*/
  v51 = v69[0]; /*0x1008aa76d*/
  v52 = v69[1]; /*0x1008aa774*/
  v53 = v69[2]; /*0x1008aa782*/
  v19 = v60; /*0x1008aa789*/
  v70[0] = v60; /*0x1008aa795*/
  *(_DWORD *)((char *)v70 + 3) = *(_DWORD *)((char *)&v60 + 3); /*0x1008aa79b*/
  LOBYTE(v19) = 1; /*0x1008aa7a1*/
  v82 = v19; /*0x1008aa7a3*/
  codexmate_lib::core::analytics::index::generation::h586562d605f60c67(__src, (__int64)v48); /*0x1008aa7b4*/
  v20 = __src[0]; /*0x1008aa7b9*/
  v21 = __src[1]; /*0x1008aa7c0*/
  if ( __src[0] != 11 ) /*0x1008aa7cb*/
  {
    qmemcpy((void *)(a1 + 24), &__src[2], 0x50u); /*0x1008aad3c*/
    *(_QWORD *)(a1 + 8) = v20; /*0x1008aad3f*/
    *(_QWORD *)(a1 + 16) = v21; /*0x1008aad43*/
LABEL_39:
    *(_QWORD *)a1 = 1; /*0x1008aadc0*/
    if ( 2 * v78 ) /*0x1008aadcb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v78, 1); /*0x1008aade1*/
    goto LABEL_41; /*0x1008aade1*/
  }
  v59 = __src[1]; /*0x1008aa7d1*/
  chrono::offset::local::Local::now::hebd14454bded543d(&v54); /*0x1008aa7df*/
  v22 = v54; /*0x1008aa7e4*/
  v68 = (unsigned int)v55; /*0x1008aa7f1*/
  LODWORD(__src[0]) = v54; /*0x1008aa7fe*/
  *(__int64 *)((char *)__src + 4) = v55; /*0x1008aa80c*/
  v79 = v56; /*0x1008aa821*/
  chrono::naive::datetime::NaiveDateTime::checked_add_offset::h9b6d7eabe1f89a82(v69, __src, v56); /*0x1008aa824*/
  v23 = v69[0]; /*0x1008aa829*/
  if ( !LODWORD(v69[0]) ) /*0x1008aa831*/
    core::option::expect_failed::ha75f8bdcbd673567("Local time out of range for `NaiveDateTime`", 43, &off_101AB6AE8); /*0x1008aafdc*/
  v58 = (_QWORD *)(v10 + 32); /*0x1008aa83b*/
  if ( a3 /*0x1008aa89e*/
    || (unsigned int)*(_QWORD *)(v10 + 32) == 2
    || *(_DWORD *)(v10 + 64) != LODWORD(v69[0])
    || *(_DWORD *)(v10 + 68) != v79
    || (*(_QWORD *)(v10 + 72) != v59
     || (v24 = v69[0], v25 = std::time::Instant::elapsed::h457f209775ed485c(v10 + 48), v23 = v24, v25 >= 0x1E))
    && ((v81 & 1) == 0 || (v26 = v23, v27 = std::time::Instant::elapsed::h457f209775ed485c(v10 + 48), v23 = v26, v27 > 9)) )
  {
    v76 = v23; /*0x1008aa8a4*/
    v28 = (v22 >> 13) - 1; /*0x1008aa8ad*/
    v29 = 0; /*0x1008aa8b0*/
    if ( v22 >> 13 <= 0 ) /*0x1008aa8b4*/
    {
      v30 = (1 - (v22 >> 13)) / 0x190u + 1; /*0x1008aa8c8*/
      v28 += 400 * v30; /*0x1008aa8d0*/
      v29 = -146097 * v30; /*0x1008aa8d2*/
    }
    codexmate_lib::core::analytics::threads::aggregate::hfaf5c1e6e10c0890( /*0x1008aa935*/
      (__int64)__src,
      (__int64)v48,
      v68
    + 86400LL
    * (int)(((v28 / 100) >> 2) + ((1461 * v28) >> 2) + v29 + (((unsigned int)v22 >> 4) & 0x1FF) - v28 / 100 - 719163),
      a4,
      a5);
    v31 = __src[0]; /*0x1008aa93a*/
    v69[0] = __src[1]; /*0x1008aa948*/
    v69[1] = __src[2]; /*0x1008aa956*/
    v69[2] = __src[3]; /*0x1008aa964*/
    if ( __src[0] == 11 ) /*0x1008aa96f*/
    {
      v60 = v69[0]; /*0x1008aa983*/
      v61 = *(_OWORD *)&v69[1]; /*0x1008aa98a*/
      v32 = std::time::Instant::now::hda76af2c3a449055(*(double *)a4.i64); /*0x1008aa99f*/
      v82 = v33; /*0x1008aa9a4*/
      v34 = v32; /*0x1008aa9a7*/
      v35 = v59; /*0x1008aa9b4*/
      if ( *(_DWORD *)v58 != 2 ) /*0x1008aa9bb*/
      {
        v68 = v10 + 80; /*0x1008aa9c1*/
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb734cba54fd18e36(); /*0x1008aa9c8*/
      }
      *(_QWORD *)(v10 + 32) = v14; /*0x1008aa9cd*/
      *(_QWORD *)(v10 + 40) = v57; /*0x1008aa9d8*/
      *(_QWORD *)(v10 + 48) = v34; /*0x1008aa9dc*/
      *(_DWORD *)(v10 + 56) = v82; /*0x1008aa9e3*/
      *(_DWORD *)(v10 + 64) = v76; /*0x1008aa9ea*/
      *(_DWORD *)(v10 + 68) = v79; /*0x1008aa9f1*/
      *(_QWORD *)(v10 + 72) = v35; /*0x1008aa9f5*/
      v36 = v61; /*0x1008aaa00*/
      *(_QWORD *)(v10 + 80) = v60; /*0x1008aaa07*/
      *(_OWORD *)(v10 + 88) = __PAIR128__(*((unsigned __int64 *)&v61 + 1), v36); /*0x1008aaa0b*/
      goto LABEL_28; /*0x1008aaa0b*/
    }
    *(_QWORD *)(a1 + 96) = __src[11]; /*0x1008aad4d*/
    *(_QWORD *)(a1 + 88) = __src[10]; /*0x1008aad55*/
    *(_QWORD *)(a1 + 80) = __src[9]; /*0x1008aad60*/
    *(_QWORD *)(a1 + 72) = __src[8]; /*0x1008aad6b*/
    *(_QWORD *)(a1 + 64) = __src[7]; /*0x1008aad76*/
    *(_QWORD *)(a1 + 56) = __src[6]; /*0x1008aad81*/
    v43 = __src[4]; /*0x1008aad85*/
    *(_QWORD *)(a1 + 48) = __src[5]; /*0x1008aad93*/
    *(_QWORD *)(a1 + 40) = v43; /*0x1008aad97*/
    *(_QWORD *)(a1 + 32) = v69[2]; /*0x1008aada2*/
    v44 = v69[0]; /*0x1008aada6*/
    *(_QWORD *)(a1 + 24) = v69[1]; /*0x1008aadb4*/
    *(_QWORD *)(a1 + 16) = v44; /*0x1008aadb8*/
    *(_QWORD *)(a1 + 8) = v31; /*0x1008aadbc*/
    goto LABEL_39; /*0x1008aadbc*/
  }
LABEL_28:
  rusqlite::Connection::execute_batch::h4a2529fc120bbad7( /*0x1008aaa1a*/
    &v60,
    v48,
    "COMMITInUseReferencedNotFoundNotPersistedInvalidIdUnsupportedIncompleteNotAttempted",
    6);
  if ( v48[0] >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x1008aaa4d*/
  {
    v82 = 0; /*0x1008aafe3*/
    core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_101AB7860); /*0x1008aaff1*/
  }
  ++v48[0]; /*0x1008aaa56*/
  v37 = sqlite3_get_autocommit((sqlite3 *)v48[2]); /*0x1008aaa64*/
  --v48[0]; /*0x1008aaa69*/
  if ( !v37 ) /*0x1008aaa72*/
  {
    v82 = 0; /*0x1008aaa74*/
    rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__src, v48, &unk_1016F25F8, 8); /*0x1008aaa95*/
    if ( __src[0] != v67 ) /*0x1008aaaa8*/
    {
      v82 = 0; /*0x1008aaaaa*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__src); /*0x1008aaab8*/
    }
  }
  if ( v60 != v67 ) /*0x1008aaacb*/
  {
    v69[7] = v66; /*0x1008aae70*/
    v69[6] = v65; /*0x1008aae7e*/
    v69[5] = v64; /*0x1008aae8c*/
    v69[4] = v63; /*0x1008aae9a*/
    v69[3] = v62; /*0x1008aaea8*/
    *(_OWORD *)&v69[1] = v61; /*0x1008aaecb*/
    v69[0] = v60; /*0x1008aaed2*/
    v82 = 0; /*0x1008aaed9*/
    codexmate_lib::core::analytics::index::db_error::hf0ea913c862a7833(__src, (__int64)v69); /*0x1008aaeee*/
    qmemcpy((void *)(a1 + 8), __src, 0x60u); /*0x1008aaf03*/
    *(_QWORD *)a1 = 1; /*0x1008aaf06*/
    if ( 2 * v78 ) /*0x1008aaf11*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v78, 1); /*0x1008aaf27*/
    goto LABEL_47; /*0x1008aaf27*/
  }
  if ( *v58 == 2 ) /*0x1008aaadf*/
  {
    v82 = 0; /*0x1008aaff8*/
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1008ab012*/
      "thread projection initializedSELECT thread_id,complete,incomplete,failed,state,rollout_id FROM files WHERE thread_id<>''SELECT f.thread_id,f.turn_id,f.ts,f.kind,\n     CASE WHEN f.kind='token' AND COALESCE(json_extract(f.data,'$.model'),'')=''\n       THEN COALESCE((\n         SELECT json_set(f.data,'$.model',json_extract(attributed.data,'$.model'))\n         FROM facts attributed WHERE attributed.key=f.key AND attributed.priority=f.priority\n           AND attributed.kind='token' AND json_type(attributed.data,'$.model')='text'\n           AND length(json_extract(attributed.data,'$.model'))>0\n         ORDER BY attributed.source LIMIT 1\n       ),f.data) ELSE f.data END AS data FROM facts f\n     WHERE (f.kind IN ('token','coverage') OR\n       (f.kind='activity' AND f.ts>=?1) OR\n       (f.kind IN ('turn','tool','change') AND f.ts>=?2))\n     AND NOT EXISTS (\n       SELECT 1 FROM facts winner WHERE winner.key=f.key\n       AND (winner.priority>f.priority OR\n         (winner.priority=f.priority AND winner.source<f.source))\n     )",
      29,
      &off_101AB6D50);
  }
  v38 = *(_QWORD *)(v10 + 40); /*0x1008aaae5*/
  v69[1] = *v58; /*0x1008aaaf0*/
  v69[2] = v38; /*0x1008aaaf7*/
  v69[3] = v78; /*0x1008aab02*/
  v69[4] = v75; /*0x1008aab0d*/
  v69[5] = v51; /*0x1008aab22*/
  v69[6] = v52; /*0x1008aab29*/
  v69[7] = v53; /*0x1008aab37*/
  LOBYTE(v69[8]) = v81; /*0x1008aab42*/
  *(_DWORD *)((char *)&v69[8] + 1) = v70[0]; /*0x1008aab54*/
  HIDWORD(v69[8]) = *(_DWORD *)((char *)v70 + 3); /*0x1008aab5a*/
  v69[0] = v58; /*0x1008aab60*/
  codexmate_lib::core::analytics::threads::load_summaries::_$u7b$$u7b$closure$u7d$$u7d$::h11b074cba3ccb173( /*0x1008aab6e*/
    __src,
    v58,
    &v69[1]);
  qmemcpy((void *)(a1 + 8), __src, 0x60u); /*0x1008aab83*/
  *(_QWORD *)a1 = 0; /*0x1008aab86*/
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v48); /*0x1008aab94*/
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..analytics..threads..Cache$GT$$GT$::h1f900752908f3de0( /*0x1008aaba1*/
    v74,
    (unsigned __int8)v80);
LABEL_51:
  if ( !_InterlockedDecrement64(v77) ) /*0x1008aaf67*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::ha72016a764ea7d45(&v77); /*0x1008aaf71*/
  return a1; /*0x1008aaf79*/
}