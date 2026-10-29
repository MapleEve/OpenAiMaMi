// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::load_detail::h610f5ff32b52c602; addr: 0x1008a8cb0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:17Z
_QWORD *__fastcall codexmate_lib::core::analytics::threads::load_detail::h610f5ff32b52c602(
        unsigned __int64 __dst,
        __int64 a2,
        unsigned __int64 a3,
        size_t a4,
        __m128i a5,
        __m128i a6)
{
  _QWORD *v6; // r14
  void *v7; // rax
  void *v10; // r13
  __int64 v11; // rbx
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rcx
  int v14; // esi
  int v15; // r8d
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rt0
  char v19; // of
  __int64 v20; // r15
  __int64 v21; // rdi
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rdi
  char v28; // r8
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // ebx
  bool v33; // zf
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rbx
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rbx
  char v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int autocommit; // eax
  int v50; // eax
  _QWORD v51[14]; // [rsp+8h] [rbp-328h] BYREF
  __int64 __src[41]; // [rsp+78h] [rbp-2B8h] BYREF
  __int64 v53; // [rsp+1C0h] [rbp-170h]
  __int64 v54; // [rsp+1C8h] [rbp-168h]
  __int64 v55; // [rsp+1D0h] [rbp-160h]
  __int64 v56; // [rsp+1D8h] [rbp-158h]
  int v57; // [rsp+1E0h] [rbp-150h] BYREF
  __int64 v58; // [rsp+1E4h] [rbp-14Ch]
  unsigned int v59; // [rsp+1ECh] [rbp-144h]
  unsigned __int64 v60; // [rsp+1F0h] [rbp-140h]
  __int64 v61; // [rsp+1F8h] [rbp-138h]
  _DWORD *v62; // [rsp+200h] [rbp-130h]
  __int64 v63; // [rsp+208h] [rbp-128h]
  __int64 v64; // [rsp+210h] [rbp-120h] BYREF
  __int128 v65; // [rsp+218h] [rbp-118h]
  __int64 v66; // [rsp+228h] [rbp-108h]
  __int64 v67; // [rsp+230h] [rbp-100h]
  __int64 v68; // [rsp+238h] [rbp-F8h]
  __int64 v69; // [rsp+240h] [rbp-F0h]
  __int64 v70; // [rsp+248h] [rbp-E8h]
  _QWORD v71[13]; // [rsp+250h] [rbp-E0h] BYREF
  _DWORD v72[2]; // [rsp+2B8h] [rbp-78h]
  _QWORD *v73; // [rsp+2C0h] [rbp-70h]
  __int64 v74; // [rsp+2C8h] [rbp-68h]
  __int64 v75; // [rsp+2D0h] [rbp-60h]
  int v76; // [rsp+2DCh] [rbp-54h]
  volatile signed __int64 *v77; // [rsp+2E0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+2E8h] [rbp-48h]
  unsigned int v79; // [rsp+2F0h] [rbp-40h]
  int v80; // [rsp+2F4h] [rbp-3Ch]
  __int64 v81; // [rsp+2F8h] [rbp-38h]
  int v82; // [rsp+300h] [rbp-30h]
  char v83; // [rsp+307h] [rbp-29h]

  v6 = (_QWORD *)__dst; /*0x1008a8cc4*/
  if ( a4 - 129 <= 0xFFFFFFFFFFFFFF7FLL ) /*0x1008a8cd4*/
  {
LABEL_2:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2, a3); /*0x1008a8cd6*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x1008a8ce5*/
    if ( !v7 ) /*0x1008a8ced*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x1008a9875*/
    qmemcpy(v7, "invalid thread identity", 23); /*0x1008a8d19*/
    v6[1] = 9; /*0x1008a8d1c*/
    v6[2] = 23; /*0x1008a8d24*/
    v6[3] = v7; /*0x1008a8d2c*/
    v6[4] = 23; /*0x1008a8d30*/
    *v6 = 2; /*0x1008a8d38*/
    return v6; /*0x1008a8d38*/
  }
  v10 = (void *)a3; /*0x1008a8d57*/
  v11 = a2; /*0x1008a8d5a*/
  v12 = (unsigned __int8 *)(a3 + a4); /*0x1008a8d5d*/
  v13 = (unsigned __int8 *)a3; /*0x1008a8d61*/
  while ( v13 != v12 ) /*0x1008a8d73*/
  {
    a3 = *v13; /*0x1008a8d79*/
    if ( (a3 & 0x80u) != 0LL ) /*0x1008a8d7e*/
    {
      v14 = a3 & 0x1F; /*0x1008a8da2*/
      v15 = v13[1] & 0x3F; /*0x1008a8daa*/
      if ( (unsigned __int8)a3 <= 0xDFu ) /*0x1008a8db1*/
      {
        v13 += 2; /*0x1008a8df0*/
        a2 = v15 | (unsigned int)(v14 << 6); /*0x1008a8df7*/
        a3 = (unsigned int)a2; /*0x1008a8dfa*/
        if ( (unsigned int)a2 < 0x20 ) /*0x1008a8dff*/
          goto LABEL_2; /*0x1008a8dff*/
      }
      else
      {
        v16 = (v15 << 6) | v13[2] & 0x3F; /*0x1008a8dbe*/
        if ( (unsigned __int8)a3 < 0xF0u ) /*0x1008a8dc4*/
        {
          v13 += 3; /*0x1008a8e06*/
          a2 = (unsigned int)(v14 << 12); /*0x1008a8e0a*/
          __dst = (unsigned int)a2 | v16; /*0x1008a8e0d*/
          a3 = (unsigned int)__dst; /*0x1008a8e0f*/
          if ( (unsigned int)__dst < 0x20 ) /*0x1008a8e14*/
            goto LABEL_2; /*0x1008a8e14*/
        }
        else
        {
          a2 = (unsigned __int8)(a3 & 7) << 18; /*0x1008a8dcd*/
          __dst = (unsigned int)(v16 << 6); /*0x1008a8dd0*/
          a3 = (unsigned int)a2 | (unsigned int)__dst | v13[3] & 0x3F; /*0x1008a8dd8*/
          if ( (_DWORD)a3 == 1114112 ) /*0x1008a8de0*/
            break; /*0x1008a8de0*/
          v13 += 4; /*0x1008a8de2*/
          if ( (unsigned int)a3 < 0x20 ) /*0x1008a8de9*/
            goto LABEL_2; /*0x1008a8de9*/
        }
      }
    }
    else
    {
      ++v13; /*0x1008a8d80*/
      if ( (unsigned int)a3 < 0x20 ) /*0x1008a8d86*/
        goto LABEL_2; /*0x1008a8d86*/
    }
    a3 = (unsigned int)(a3 - 127); /*0x1008a8e20*/
    if ( (unsigned int)a3 < 0x21 ) /*0x1008a8e26*/
      goto LABEL_2; /*0x1008a8e26*/
  }
  v17 = codexmate_lib::core::analytics::index::worker::hd4cc4bbca6f7f453(v11, a2, *(double *)a5.i64); /*0x1008a8e31*/
  __src[0] = v17; /*0x1008a8e39*/
  v18 = _InterlockedIncrement64(*(volatile signed __int64 **)(v17 + 24)); /*0x1008a8e44*/
  if ( (v18 < 0) ^ v19 | (v18 == 0) ) /*0x1008a8e48*/
    BUG(); /*0x1008a9869*/
  v20 = *(_QWORD *)(v17 + 24); /*0x1008a8e4e*/
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v17) ) /*0x1008a8e52*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hf3ecc9bd6a189e11(__src); /*0x1008a8e5f*/
  v77 = (volatile signed __int64 *)v20; /*0x1008a8e64*/
  v73 = (_QWORD *)(v20 + 16); /*0x1008a8e6c*/
  v21 = *(_QWORD *)(v20 + 16); /*0x1008a8e70*/
  if ( !v21 ) /*0x1008a8e77*/
    v21 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v73); /*0x1008a97fb*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(*(double *)a5.i64); /*0x1008a8e7d*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1008a8e8c*/
  {
    v50 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21); /*0x1008a9803*/
    LOBYTE(v50) = v50 ^ 1; /*0x1008a9808*/
    v80 = v50; /*0x1008a980a*/
  }
  else
  {
    v80 = 0; /*0x1008a8e98*/
  }
  codexmate_lib::core::analytics::index::open::h0b002a90e8a0a409( /*0x1008a8eb9*/
    (__int64)__src,
    *(_QWORD *)(v11 + 344),
    *(_QWORD *)(v11 + 352));
  if ( LOBYTE(__src[13]) == 3 ) /*0x1008a8eca*/
  {
    qmemcpy(v71, __src, 0x60u); /*0x1008a8ee2*/
    qmemcpy(v6 + 1, v71, 0x60u); /*0x1008a8ef1*/
    v22 = v6 + 13; /*0x1008a8ef1*/
    *v6 = 2; /*0x1008a8ef4*/
    goto LABEL_62; /*0x1008a8efb*/
  }
  v81 = v20; /*0x1008a8f00*/
  qmemcpy(v71, __src, sizeof(v71)); /*0x1008a8f1a*/
  v51[13] = __src[13]; /*0x1008a8f29*/
  qmemcpy(v51, v71, 0x68u); /*0x1008a8f47*/
  rusqlite::Connection::execute_batch::h4a2529fc120bbad7( /*0x1008a8f71*/
    __src,
    v51,
    *(&off_101AB7950 + LOBYTE(__src[13])),
    qword_10178D568[LOBYTE(__src[13])]);
  v60 = 0x8000000000000016LL; /*0x1008a8f8b*/
  if ( __src[0] == 0x8000000000000016LL ) /*0x1008a8f95*/
  {
    codexmate_lib::core::analytics::index::status::h78b71e6d4a3ce1f7((__int64)__src, v11, (__int64)v51, a5); /*0x1008a8fac*/
    v23 = __src[0]; /*0x1008a8fb1*/
    v24 = __src[1]; /*0x1008a8fb8*/
    v25 = __src[2]; /*0x1008a8fbf*/
    v26 = __src[3]; /*0x1008a8fc6*/
    v27 = __src[4]; /*0x1008a8fcd*/
    v71[0] = __src[5]; /*0x1008a8fdb*/
    v71[1] = __src[6]; /*0x1008a8fe9*/
    v71[2] = __src[7]; /*0x1008a8ff7*/
    v28 = __src[8]; /*0x1008a8ffe*/
    LODWORD(v64) = *(_DWORD *)((char *)&__src[8] + 1); /*0x1008a900c*/
    *(_DWORD *)((char *)&v64 + 3) = HIDWORD(__src[8]); /*0x1008a9018*/
    if ( __src[0] == 11 ) /*0x1008a9022*/
    {
      v61 = __src[2]; /*0x1008a9028*/
      v83 = __src[8]; /*0x1008a902f*/
      v74 = __src[4]; /*0x1008a9033*/
      v78 = __src[3]; /*0x1008a9037*/
      v53 = v71[0]; /*0x1008a9049*/
      v54 = v71[1]; /*0x1008a9050*/
      v55 = v71[2]; /*0x1008a905e*/
      v29 = v64; /*0x1008a9065*/
      v72[0] = v64; /*0x1008a9071*/
      *(_DWORD *)((char *)v72 + 3) = *(_DWORD *)((char *)&v64 + 3); /*0x1008a9074*/
      LOBYTE(v29) = 1; /*0x1008a9077*/
      v82 = v29; /*0x1008a9079*/
      codexmate_lib::core::analytics::index::generation::h586562d605f60c67(__src, (__int64)v51); /*0x1008a908a*/
      v30 = __src[0]; /*0x1008a908f*/
      v31 = __src[1]; /*0x1008a9096*/
      if ( __src[0] == 11 ) /*0x1008a90a1*/
      {
        v63 = __src[1]; /*0x1008a90a7*/
        chrono::offset::local::Local::now::hebd14454bded543d(&v57); /*0x1008a90b5*/
        v32 = v57; /*0x1008a90ba*/
        v75 = (unsigned int)v58; /*0x1008a90c6*/
        LODWORD(__src[0]) = v57; /*0x1008a90d0*/
        *(__int64 *)((char *)__src + 4) = v58; /*0x1008a90dd*/
        v79 = v59; /*0x1008a90f2*/
        chrono::naive::datetime::NaiveDateTime::checked_add_offset::h9b6d7eabe1f89a82(v71, __src, v59); /*0x1008a90f5*/
        if ( !LODWORD(v71[0]) ) /*0x1008a9102*/
          core::option::expect_failed::ha75f8bdcbd673567( /*0x1008a9843*/
            "Local time out of range for `NaiveDateTime`",
            43,
            &off_101AB6AE8);
        v62 = (_DWORD *)(v81 + 32); /*0x1008a9110*/
        v33 = *(_DWORD *)(v81 + 32) == 2; /*0x1008a9117*/
        v76 = v71[0]; /*0x1008a911b*/
        if ( !v33 /*0x1008a9174*/
          && *(_DWORD *)(v81 + 64) == LODWORD(v71[0])
          && *(_DWORD *)(v81 + 68) == v79
          && (*(_QWORD *)(v81 + 72) == v63
           && (unsigned __int64)std::time::Instant::elapsed::h457f209775ed485c(v81 + 48) < 0x1E
           || (v83 & 1) != 0 && (unsigned __int64)std::time::Instant::elapsed::h457f209775ed485c(v81 + 48) <= 9) )
        {
          goto LABEL_46; /*0x1008a9174*/
        }
        v34 = (v32 >> 13) - 1; /*0x1008a917f*/
        v35 = 0; /*0x1008a9182*/
        if ( v32 >> 13 <= 0 ) /*0x1008a9186*/
        {
          v36 = (1 - (v32 >> 13)) / 0x190u + 1; /*0x1008a919a*/
          v34 += 400 * v36; /*0x1008a91a2*/
          v35 = -146097 * v36; /*0x1008a91a4*/
        }
        codexmate_lib::core::analytics::threads::aggregate::hfaf5c1e6e10c0890( /*0x1008a91fe*/
          (__int64)__src,
          (__int64)v51,
          v75
        + 86400LL
        * (int)(((v34 / 100) >> 2) + ((1461 * v34) >> 2) + v35 + (((unsigned int)v32 >> 4) & 0x1FF) - v34 / 100 - 719163),
          a5,
          a6);
        v37 = __src[0]; /*0x1008a9203*/
        v71[0] = __src[1]; /*0x1008a9211*/
        v71[1] = __src[2]; /*0x1008a921f*/
        v71[2] = __src[3]; /*0x1008a922d*/
        if ( __src[0] == 11 ) /*0x1008a9238*/
        {
          v64 = v71[0]; /*0x1008a924c*/
          v65 = *(_OWORD *)&v71[1]; /*0x1008a9253*/
          v75 = std::time::Instant::now::hda76af2c3a449055(*(double *)a5.i64); /*0x1008a926d*/
          v82 = v38; /*0x1008a9271*/
          v39 = v63; /*0x1008a927e*/
          if ( *v62 != 2 ) /*0x1008a9285*/
          {
            v56 = v81 + 80; /*0x1008a928f*/
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb734cba54fd18e36(); /*0x1008a9296*/
          }
          v40 = v81; /*0x1008a929b*/
          *(_QWORD *)(v81 + 32) = v24; /*0x1008a929f*/
          *(_QWORD *)(v40 + 40) = v61; /*0x1008a92aa*/
          *(_QWORD *)(v40 + 48) = v75; /*0x1008a92b2*/
          *(_DWORD *)(v40 + 56) = v82; /*0x1008a92b9*/
          *(_DWORD *)(v40 + 64) = v76; /*0x1008a92bf*/
          *(_DWORD *)(v40 + 68) = v79; /*0x1008a92c5*/
          *(_QWORD *)(v40 + 72) = v39; /*0x1008a92c8*/
          v41 = v65; /*0x1008a92d3*/
          *(_QWORD *)(v40 + 80) = v64; /*0x1008a92da*/
          *(_OWORD *)(v40 + 88) = __PAIR128__(*((unsigned __int64 *)&v65 + 1), v41); /*0x1008a92de*/
LABEL_46:
          rusqlite::Connection::execute_batch::h4a2529fc120bbad7( /*0x1008a92ed*/
            &v64,
            v51,
            "COMMITInUseReferencedNotFoundNotPersistedInvalidIdUnsupportedIncompleteNotAttempted",
            6);
          v82 = 0; /*0x1008a930c*/
          core::ptr::drop_in_place$LT$rusqlite..transaction..Transaction$GT$::hebec5be18e81a2f0(v51); /*0x1008a931a*/
          if ( v64 == v60 ) /*0x1008a932d*/
          {
            if ( *(_QWORD *)v62 == 2 ) /*0x1008a9341*/
            {
              v82 = 0; /*0x1008a984a*/
              core::option::expect_failed::ha75f8bdcbd673567( /*0x1008a9864*/
                "thread projection initializedSELECT thread_id,complete,incomplete,failed,state,rollout_id FROM files WHERE thread_id<>''SELECT f.thread_id,f.turn_id,f.ts,f.kind,\n     CASE WHEN f.kind='token' AND COALESCE(json_extract(f.data,'$.model'),'')=''\n       THEN COALESCE((\n         SELECT json_set(f.data,'$.model',json_extract(attributed.data,'$.model'))\n         FROM facts attributed WHERE attributed.key=f.key AND attributed.priority=f.priority\n           AND attributed.kind='token' AND json_type(attributed.data,'$.model')='text'\n           AND length(json_extract(attributed.data,'$.model'))>0\n         ORDER BY attributed.source LIMIT 1\n       ),f.data) ELSE f.data END AS data FROM facts f\n     WHERE (f.kind IN ('token','coverage') OR\n       (f.kind='activity' AND f.ts>=?1) OR\n       (f.kind IN ('turn','tool','change') AND f.ts>=?2))\n     AND NOT EXISTS (\n       SELECT 1 FROM facts winner WHERE winner.key=f.key\n       AND (winner.priority>f.priority OR\n         (winner.priority=f.priority AND winner.source<f.source))\n     )",
                29,
                &off_101AB6D50);
            }
            v42 = *(_QWORD *)(v81 + 40); /*0x1008a934b*/
            v71[1] = *(_QWORD *)v62; /*0x1008a9356*/
            v71[2] = v42; /*0x1008a935d*/
            v71[3] = v78; /*0x1008a9368*/
            v71[4] = v74; /*0x1008a9373*/
            v71[5] = v53; /*0x1008a9388*/
            v71[6] = v54; /*0x1008a938f*/
            v71[7] = v55; /*0x1008a939d*/
            LOBYTE(v71[8]) = v83; /*0x1008a93a8*/
            *(_DWORD *)((char *)&v71[8] + 1) = v72[0]; /*0x1008a93b4*/
            HIDWORD(v71[8]) = *(_DWORD *)((char *)v72 + 3); /*0x1008a93ba*/
            v71[0] = v62; /*0x1008a93c0*/
            codexmate_lib::core::analytics::threads::load_detail::_$u7b$$u7b$closure$u7d$$u7d$::ha3004fde5a38977f( /*0x1008a93d7*/
              __src,
              v10,
              a4,
              (__int64)v62,
              &v71[1]);
            memcpy(v6, __src, 0x148u); /*0x1008a93eb*/
            core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v51); /*0x1008a93f7*/
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..analytics..threads..Cache$GT$$GT$::h1f900752908f3de0( /*0x1008a9404*/
              v73,
              (unsigned __int8)v80);
            goto LABEL_65; /*0x1008a9409*/
          }
          v71[7] = v70; /*0x1008a96df*/
          v71[6] = v69; /*0x1008a96ed*/
          v71[5] = v68; /*0x1008a96fb*/
          v71[4] = v67; /*0x1008a9709*/
          v71[3] = v66; /*0x1008a9717*/
          *(_OWORD *)&v71[1] = v65; /*0x1008a973a*/
          v71[0] = v64; /*0x1008a9741*/
          v82 = 0; /*0x1008a9748*/
          codexmate_lib::core::analytics::index::db_error::hf0ea913c862a7833(__src, (__int64)v71); /*0x1008a975d*/
          qmemcpy(v6 + 1, __src, 0x60u); /*0x1008a9772*/
          *v6 = 2; /*0x1008a9775*/
          if ( 2 * v78 ) /*0x1008a9780*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v78, 1); /*0x1008a9796*/
          goto LABEL_61; /*0x1008a9796*/
        }
        v6[12] = __src[11]; /*0x1008a95b9*/
        v6[11] = __src[10]; /*0x1008a95c4*/
        v6[10] = __src[9]; /*0x1008a95cf*/
        v6[9] = __src[8]; /*0x1008a95da*/
        v6[8] = __src[7]; /*0x1008a95e5*/
        v6[7] = __src[6]; /*0x1008a95f0*/
        v47 = __src[4]; /*0x1008a95f4*/
        v6[6] = __src[5]; /*0x1008a9602*/
        v6[5] = v47; /*0x1008a9606*/
        v6[4] = v71[2]; /*0x1008a9611*/
        v48 = v71[0]; /*0x1008a9615*/
        v6[3] = v71[1]; /*0x1008a9623*/
        v6[2] = v48; /*0x1008a9627*/
        v6[1] = v37; /*0x1008a962b*/
      }
      else
      {
        qmemcpy(v6 + 3, &__src[2], 0x50u); /*0x1008a95a5*/
        v6[1] = v30; /*0x1008a95a8*/
        v6[2] = v31; /*0x1008a95ac*/
      }
      *v6 = 2; /*0x1008a962f*/
      if ( 2 * v78 ) /*0x1008a963a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v78, 1); /*0x1008a9650*/
    }
    else
    {
      v6[12] = __src[11]; /*0x1008a9522*/
      v45 = __src[9]; /*0x1008a9526*/
      v6[11] = __src[10]; /*0x1008a9534*/
      v6[10] = v45; /*0x1008a9538*/
      v6[2] = v24; /*0x1008a953c*/
      v6[3] = v25; /*0x1008a9540*/
      v6[4] = v26; /*0x1008a9544*/
      v6[5] = v27; /*0x1008a9548*/
      v46 = v71[1]; /*0x1008a9553*/
      v6[6] = v71[0]; /*0x1008a955a*/
      v6[7] = v46; /*0x1008a955e*/
      v6[8] = v71[2]; /*0x1008a9569*/
      *((_BYTE *)v6 + 72) = v28; /*0x1008a956d*/
      LODWORD(v46) = *(_DWORD *)((char *)&v64 + 3); /*0x1008a9577*/
      *(_DWORD *)((char *)v6 + 73) = v64; /*0x1008a957d*/
      *((_DWORD *)v6 + 19) = v46; /*0x1008a9581*/
      v6[1] = v23; /*0x1008a9585*/
      *v6 = 2; /*0x1008a9589*/
    }
    if ( v51[0] >= 0x7FFFFFFFFFFFFFFFuLL ) /*0x1008a9669*/
      core::cell::panic_already_mutably_borrowed::h333111125182db63(&off_101AB7860); /*0x1008a9829*/
    ++v51[0]; /*0x1008a9672*/
    autocommit = sqlite3_get_autocommit((sqlite3 *)v51[2]); /*0x1008a9680*/
    --v51[0]; /*0x1008a9685*/
    if ( !autocommit ) /*0x1008a968e*/
    {
      rusqlite::Connection::execute_batch::h4a2529fc120bbad7(__src, v51, &unk_1016F25F8, 8); /*0x1008a96ae*/
      if ( __src[0] != v60 ) /*0x1008a96c1*/
        core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(__src); /*0x1008a96ce*/
    }
  }
  else
  {
    *(_OWORD *)((char *)&v71[2] + 1) = *(_OWORD *)((char *)&__src[2] + 1); /*0x1008a9423*/
    *(_OWORD *)((char *)&v71[4] + 1) = *(_OWORD *)((char *)&__src[4] + 1); /*0x1008a943f*/
    *(_QWORD *)((char *)&v71[6] + 1) = *(__int64 *)((char *)&__src[6] + 1); /*0x1008a945b*/
    v71[7] = __src[7]; /*0x1008a9469*/
    v71[0] = __src[0]; /*0x1008a9470*/
    v71[1] = __src[1]; /*0x1008a9477*/
    LOBYTE(v71[2]) = __src[2]; /*0x1008a947e*/
    __src[0] = (__int64)v71; /*0x1008a9484*/
    __src[1] = (__int64)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1008a9492*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v64, &unk_101902300, __src); /*0x1008a94ae*/
    v43 = v64; /*0x1008a94b3*/
    v44 = v65; /*0x1008a94ba*/
    __src[0] = *(_QWORD *)((char *)&v65 + 1); /*0x1008a94c9*/
    *(__int64 *)((char *)__src + 7) = *((_QWORD *)&v65 + 1); /*0x1008a94d7*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v71); /*0x1008a94e5*/
    memcpy((char *)v6 + 25, __src, 0x4Fu); /*0x1008a94fa*/
    v6[1] = 10; /*0x1008a94ff*/
    v6[2] = v43; /*0x1008a9507*/
    *((_BYTE *)v6 + 24) = v44; /*0x1008a950b*/
    *v6 = 2; /*0x1008a950f*/
  }
LABEL_61:
  v20 = v81; /*0x1008a979b*/
  v22 = v51; /*0x1008a979f*/
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v51); /*0x1008a97a6*/
LABEL_62:
  if ( !(_BYTE)v80 /*0x1008a9812*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22) )
  {
    *(_BYTE *)(v20 + 24) = 1; /*0x1008a981b*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v73); /*0x1008a97d1*/
LABEL_65:
  if ( !_InterlockedDecrement64(v77) ) /*0x1008a97da*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::ha72016a764ea7d45(&v77); /*0x1008a97e8*/
  return v6; /*0x1008a8d42*/
}