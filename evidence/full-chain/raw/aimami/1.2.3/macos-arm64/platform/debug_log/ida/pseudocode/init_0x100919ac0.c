// __ZN13codexmate_lib8platform9debug_log4init @ 0x100919ac0 | 基线 same-set
double __fastcall codexmate_lib::platform::debug_log::init::h8ca1bd936d4a4f92(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // r14
  size_t v3; // r15
  __int64 v4; // rax
  __int64 v5; // rax
  volatile signed __int64 *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rsi
  char *v11; // r14
  __m128i v12; // xmm0
  signed __int64 epi64; // rax
  char *v14; // r13
  signed __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r12
  char *v21; // r13
  __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 *v29; // rdi
  double result; // xmm0_8
  __int64 v31; // rsi
  const void *v32; // r14
  size_t v33; // rbx
  __int64 v34; // r15
  __int64 v35; // r12
  __int64 v36; // rbx
  __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 v41; // r13
  __int64 v42; // rsi
  _OWORD __dst[65]; // [rsp+0h] [rbp-10F0h] BYREF
  __int128 v44; // [rsp+410h] [rbp-CE0h] BYREF
  size_t v45; // [rsp+420h] [rbp-CD0h]
  __int64 v46; // [rsp+838h] [rbp-8B8h]
  volatile signed __int64 *v47; // [rsp+C60h] [rbp-490h] BYREF
  char v48; // [rsp+C68h] [rbp-488h]
  _OWORD v49[66]; // [rsp+C70h] [rbp-480h] BYREF
  __int64 v50; // [rsp+1098h] [rbp-58h] BYREF
  void *v51; // [rsp+10A0h] [rbp-50h]
  size_t __n; // [rsp+10A8h] [rbp-48h]
  __m128i v53; // [rsp+10B0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+10C0h] [rbp-30h]

  *((_QWORD *)&__dst[12] + 1) = 0; /*0x100919ad4*/
  v1 = a1; /*0x100919ae3*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100919b05*/
    &v50,
    *(_QWORD *)(a1 + 344),
    *(_QWORD *)(a1 + 352),
    "logsautohighUSERkeysNULLUser.gitAuth",
    4);
  LOWORD(v44) = 511; /*0x100919b0a*/
  BYTE2(v44) = 1; /*0x100919b13*/
  v2 = v51; /*0x100919b1a*/
  v3 = __n; /*0x100919b1e*/
  v4 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v44, v51, __n); /*0x100919b2f*/
  if ( (v4 & 3) == 1 ) /*0x100919b3c*/
  {
    v54 = a1; /*0x10091a15a*/
    v35 = v4 - 1; /*0x10091a161*/
    v36 = *(_QWORD *)(v4 - 1); /*0x10091a164*/
    v37 = *(_QWORD *)(v4 + 7); /*0x10091a168*/
    if ( *(_QWORD *)v37 ) /*0x10091a16c*/
      (*(void (__fastcall **)(__int64))v37)(v36); /*0x10091a178*/
    v38 = *(_QWORD *)(v37 + 8); /*0x10091a17a*/
    if ( v38 ) /*0x10091a181*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v38, *(_QWORD *)(v37 + 16)); /*0x10091a18a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 24, 8); /*0x10091a19c*/
    v1 = v54; /*0x10091a1a1*/
  }
  v5 = std::sys::fs::set_permissions::hfb7e5143e400282f(v2, v3); /*0x100919b4d*/
  if ( (v5 & 3) == 1 ) /*0x100919b5a*/
  {
    v54 = v1; /*0x10091a1aa*/
    v39 = v5 - 1; /*0x10091a1b1*/
    v40 = *(_QWORD *)(v5 - 1); /*0x10091a1b4*/
    v41 = *(_QWORD *)(v5 + 7); /*0x10091a1b8*/
    if ( *(_QWORD *)v41 ) /*0x10091a1bc*/
      (*(void (__fastcall **)(__int64))v41)(v40); /*0x10091a1c8*/
    v42 = *(_QWORD *)(v41 + 8); /*0x10091a1ca*/
    if ( v42 ) /*0x10091a1d1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v42, *(_QWORD *)(v41 + 16)); /*0x10091a1da*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, 24, 8); /*0x10091a1ec*/
    v1 = v54; /*0x10091a1f1*/
  }
  std::sys::fs::read_dir::h768dda1fe4336014(&v44, v2, v3); /*0x100919b6d*/
  v6 = (volatile signed __int64 *)v44; /*0x100919b79*/
  if ( BYTE8(v44) != 2 ) /*0x100919b83*/
  {
    v54 = v1; /*0x100919be1*/
    *(_QWORD *)&v44 = 0; /*0x100919be5*/
    v46 = 0; /*0x100919bf0*/
    v47 = v6; /*0x100919c02*/
    v48 = BYTE8(v44); /*0x100919c09*/
    v11 = (char *)&v49[1] + 8; /*0x100919c0f*/
    while ( 1 ) /*0x100919c66*/
    {
      _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha203985bdd4fbd3c(v49); /*0x100919c66*/
      if ( *(_QWORD *)&v49[0] ) /*0x100919c73*/
      {
        v53 = *(__m128i *)((char *)v49 + 8); /*0x100919c7c*/
        memcpy(__dst, v11, sizeof(__dst)); /*0x100919c8b*/
      }
      else
      {
        if ( v48 != 2 && !_InterlockedDecrement64(v47) ) /*0x100919cb0*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(&v47); /*0x100919cb9*/
        v48 = 2; /*0x100919cbe*/
        v12.i64[0] = *((_QWORD *)&v49[0] + 1); /*0x100919cc5*/
        v53 = *(__m128i *)((char *)v49 + 8); /*0x100919ccc*/
        memcpy(__dst, v11, sizeof(__dst)); /*0x100919ce2*/
        if ( (v49[0] & 1) == 0 ) /*0x100919cea*/
        {
LABEL_47:
          core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc0ae01a13512ceae( /*0x100919f09*/
            &v44,
            *(double *)v12.i64);
          v1 = v54; /*0x100919f15*/
          v2 = v51; /*0x100919f19*/
          v3 = __n; /*0x100919f1d*/
          goto LABEL_48; /*0x100919f1d*/
        }
      }
      v12 = _mm_load_si128(&v53); /*0x100919cf0*/
      if ( !v12.i64[0] ) /*0x100919cfd*/
      {
        epi64 = _mm_extract_epi64(v12, 1); /*0x100919cff*/
        if ( (epi64 & 3) == 1 ) /*0x100919d0e*/
        {
          v14 = v11; /*0x100919d14*/
          v15 = epi64 - 1; /*0x100919d17*/
          v16 = *(_QWORD *)(epi64 - 1); /*0x100919d1b*/
          v17 = *(_QWORD *)(epi64 + 7); /*0x100919d1f*/
          if ( *(_QWORD *)v17 ) /*0x100919d23*/
            (*(void (__fastcall **)(__int64))v17)(v16); /*0x100919d2e*/
          v18 = *(_QWORD *)(v17 + 8); /*0x100919d30*/
          if ( v18 ) /*0x100919d37*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v18, *(_QWORD *)(v17 + 16)); /*0x100919d44*/
          *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24, 8); /*0x100919c3d*/
          v11 = v14; /*0x100919c42*/
        }
        goto LABEL_12; /*0x100919c42*/
      }
      v53 = v12; /*0x100919d5d*/
      memcpy(&v49[1], __dst, 0x410u); /*0x100919d62*/
      v12 = _mm_load_si128(&v53); /*0x100919d67*/
      v49[0] = v12; /*0x100919d6c*/
      std::fs::DirEntry::file_type::hdd298e01714fd423(__dst, v49); /*0x100919d7a*/
      if ( LOBYTE(__dst[0]) == 1 ) /*0x100919d86*/
      {
        if ( (BYTE8(__dst[0]) & 3) == 1 ) /*0x100919d97*/
        {
          v21 = v11; /*0x100919e35*/
          v22 = *((_QWORD *)&__dst[0] + 1) - 1LL; /*0x100919e38*/
          v23 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) - 1LL); /*0x100919e3c*/
          v24 = *(_QWORD *)(*((_QWORD *)&__dst[0] + 1) + 7LL); /*0x100919e40*/
          if ( *(_QWORD *)v24 ) /*0x100919e44*/
            (*(void (__fastcall **)(__int64))v24)(v23); /*0x100919e4f*/
          v25 = *(_QWORD *)(v24 + 8); /*0x100919e51*/
          if ( v25 ) /*0x100919e58*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v25, *(_QWORD *)(v24 + 16)); /*0x100919e61*/
          *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24, 8); /*0x100919e73*/
          v11 = v21; /*0x100919e78*/
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)&v49[0]) ) /*0x100919e90*/
            goto LABEL_12; /*0x100919e94*/
          goto LABEL_34; /*0x100919e94*/
        }
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v49[0]) ) /*0x100919da4*/
          goto LABEL_34; /*0x100919da8*/
      }
      else
      {
        if ( SWORD1(__dst[0]) <= -28673 ) /*0x100919db9*/
        {
          std::fs::DirEntry::path::h1f82b6d8ef0530d7(__dst, v49); /*0x100919dc5*/
          v19 = *((_QWORD *)&__dst[0] + 1); /*0x100919dca*/
          v20 = std::sys::fs::set_permissions::hfb7e5143e400282f(*((void **)&__dst[0] + 1), *(size_t *)&__dst[1]); /*0x100919de5*/
          if ( *(_QWORD *)&__dst[0] ) /*0x100919df2*/
            *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, *(_QWORD *)&__dst[0], 1); /*0x100919dfc*/
          if ( (v20 & 3) == 1 ) /*0x100919e0a*/
          {
            v53.i64[0] = v20 - 1; /*0x100919ea2*/
            v26 = *(_QWORD *)(v20 - 1); /*0x100919ea6*/
            v27 = *(_QWORD *)(v20 + 7); /*0x100919eab*/
            if ( *(_QWORD *)v27 ) /*0x100919eb0*/
              (*(void (__fastcall **)(_QWORD, double))v27)(*(_QWORD *)(v20 - 1), *(double *)v12.i64); /*0x100919ebb*/
            v28 = *(_QWORD *)(v27 + 8); /*0x100919ebd*/
            if ( v28 ) /*0x100919ec4*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x100919ecd*/
            *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53.i64[0], 24, 8); /*0x100919ee0*/
            v11 = (char *)&v49[1] + 8; /*0x100919ee5*/
            if ( _InterlockedDecrement64(*(volatile signed __int64 **)&v49[0]) ) /*0x100919ef3*/
              goto LABEL_12; /*0x100919efe*/
LABEL_34:
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(v49); /*0x100919e28*/
            goto LABEL_12; /*0x100919e30*/
          }
        }
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v49[0]) ) /*0x100919e17*/
          goto LABEL_34; /*0x100919e22*/
      }
LABEL_12:
      if ( v48 == 2 ) /*0x100919c5a*/
        goto LABEL_47; /*0x100919c5a*/
    }
  }
  if ( (v44 & 3) == 1 ) /*0x100919b8d*/
  {
    v54 = v1; /*0x100919b93*/
    v7 = v44 - 1; /*0x100919b97*/
    v8 = *(_QWORD *)(v44 - 1); /*0x100919b9b*/
    v9 = *(_QWORD *)(v44 + 7); /*0x100919b9f*/
    if ( *(_QWORD *)v9 ) /*0x100919ba3*/
      (*(void (__fastcall **)(__int64))v9)(v8); /*0x100919baf*/
    v10 = *(_QWORD *)(v9 + 8); /*0x100919bb1*/
    if ( v10 ) /*0x100919bb8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x100919bc1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24, 8); /*0x100919bd3*/
    v1 = v54; /*0x100919bd8*/
  }
LABEL_48:
  std::path::Path::_join::hb1a495d4f06b13b8(__dst, v2, v3, &unk_1015FBED0, 16); /*0x100919f21*/
  std::path::Path::_join::hb1a495d4f06b13b8(v49, v2, v3, &unk_1015FBEE0, 16); /*0x100919f5a*/
  codexmate_lib::platform::debug_log::rotate_if_large::hac9f9be774bd6423( /*0x100919f6d*/
    *((void **)&__dst[0] + 1),
    *(size_t *)&__dst[1]);
  v29 = *((__int64 **)&v49[0] + 1); /*0x100919f72*/
  result = codexmate_lib::platform::debug_log::rotate_if_large::hac9f9be774bd6423( /*0x100919f80*/
             *((void **)&v49[0] + 1),
             *(size_t *)&v49[1]);
  v45 = *(_QWORD *)&__dst[1]; /*0x100919f8c*/
  v44 = __dst[0]; /*0x100919fa8*/
  if ( codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de ) /*0x100919fb9*/
  {
    v29 = &codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de; /*0x10091a1fa*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hdd9ce6ff78289e8e( /*0x10091a208*/
      &codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de,
      &v44,
      result);
  }
  if ( !__OFSUB__(-(__int64)v44, 1) && (_QWORD)v44 ) /*0x100919fce*/
  {
    v29 = *((__int64 **)&v44 + 1); /*0x100919fd0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v44 + 1), v44, 1); /*0x100919fdc*/
  }
  v45 = *(_QWORD *)&v49[1]; /*0x100919fe8*/
  v44 = v49[0]; /*0x10091a004*/
  if ( codexmate_lib::platform::debug_log::CRASH_LOG_PATH::h320329a3baf7598c ) /*0x10091a015*/
  {
    v29 = &codexmate_lib::platform::debug_log::CRASH_LOG_PATH::h320329a3baf7598c; /*0x10091a212*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hdd9ce6ff78289e8e( /*0x10091a220*/
      &codexmate_lib::platform::debug_log::CRASH_LOG_PATH::h320329a3baf7598c,
      &v44,
      result);
  }
  v31 = v44; /*0x10091a025*/
  if ( (_QWORD)v44 != 0x8000000000000000LL && (_QWORD)v44 ) /*0x10091a034*/
  {
    v29 = *((__int64 **)&v44 + 1); /*0x10091a036*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v44 + 1), v44, 1); /*0x10091a042*/
  }
  v32 = *(const void **)(v1 + 8); /*0x10091a047*/
  v33 = *(_QWORD *)(v1 + 16); /*0x10091a04b*/
  if ( v33 ) /*0x10091a052*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v31); /*0x10091a054*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v33, 1); /*0x10091a066*/
    if ( !v34 ) /*0x10091a06c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v33); /*0x10091a076*/
  }
  else
  {
    v34 = 1; /*0x10091a07d*/
  }
  memcpy((void *)v34, v32, v33); /*0x10091a08c*/
  *(_QWORD *)&v44 = v33; /*0x10091a091*/
  *((_QWORD *)&v44 + 1) = v34; /*0x10091a098*/
  v45 = v33; /*0x10091a09f*/
  if ( codexmate_lib::platform::debug_log::CODEX_HOME::hdbb870b9a1d083c7 ) /*0x10091a0b0*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hdd9ce6ff78289e8e( /*0x10091a238*/
      &codexmate_lib::platform::debug_log::CODEX_HOME::hdbb870b9a1d083c7,
      &v44,
      result);
  if ( (_QWORD)v44 != 0x8000000000000000LL && (_QWORD)v44 ) /*0x10091a0c5*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v44 + 1), v44, 1); /*0x10091a0d3*/
  if ( !(unsigned __int8)log::set_logger::h95b9d3c8d2cc65c7( /*0x10091a0e6*/
                           &codexmate_lib::platform::debug_log::FILE_LOGGER::hc1b35c16872d4303,
                           &unk_10196DC28,
                           result) )
    log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 = 2; /*0x10091a0f6*/
  if ( codexmate_lib::platform::debug_log::install_panic_hook::INSTALLED::hc8b1e4de6f3e50fb ) /*0x10091a107*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h1d887bdc1e9f8fab(&codexmate_lib::platform::debug_log::install_panic_hook::INSTALLED::hc8b1e4de6f3e50fb); /*0x10091a249*/
  if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de ) /*0x10091a117*/
    result = codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc( /*0x10091a12c*/
               (__int64)&unk_1019FF248,
               (__int64)"debug log initialized",
               21);
  if ( v50 ) /*0x10091a138*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x10091a143*/
  return result; /*0x10091a148*/
}