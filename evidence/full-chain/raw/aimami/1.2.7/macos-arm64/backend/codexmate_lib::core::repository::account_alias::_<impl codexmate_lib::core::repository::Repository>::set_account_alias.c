// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::account_alias::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::set_account_alias::h07716b3ca054bc5b; addr: 0x100adce90; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_QWORD *__fastcall codexmate_lib::core::repository::account_alias::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::set_account_alias::h07716b3ca054bc5b(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        size_t a4,
        __int64 a5,
        unsigned __int8 *a6,
        unsigned __int8 a7)
{
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r14
  int v17; // ebx
  _DWORD *v18; // rsi
  __int64 *v19; // rdi
  __int64 i; // rcx
  _QWORD *v21; // rax
  _DWORD *v22; // rdi
  __int64 *v23; // rsi
  __int64 j; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rdi
  _QWORD *v27; // rsi
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // r13
  __int64 v35; // r15
  int v36; // eax
  bool v37; // zf
  __int64 v38; // r13
  size_t v39; // r12
  __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // r14
  void *v51; // rax
  _QWORD v53[110]; // [rsp+0h] [rbp-CD0h] BYREF
  _BYTE v54[1136]; // [rsp+370h] [rbp-960h] BYREF
  __int64 v55; // [rsp+7E0h] [rbp-4F0h] BYREF
  _BYTE v56[96]; // [rsp+7E8h] [rbp-4E8h] BYREF
  _QWORD __dst[132]; // [rsp+848h] [rbp-488h] BYREF
  __int64 v58; // [rsp+C68h] [rbp-68h]
  __int64 v59; // [rsp+C70h] [rbp-60h]
  void *__s2; // [rsp+C78h] [rbp-58h]
  __int64 v61; // [rsp+C80h] [rbp-50h]
  __int64 v62; // [rsp+C88h] [rbp-48h]
  size_t __n; // [rsp+C90h] [rbp-40h]
  void *v64; // [rsp+C98h] [rbp-38h]
  _DWORD v65[11]; // [rsp+CA4h] [rbp-2Ch] BYREF

  v10 = a1; /*0x100adcead*/
  codexmate_lib::core::repository::account_alias::normalize_alias::hd61023bebaa1498d(v54, a5, a6); /*0x100adcebd*/
  v11 = *(_QWORD *)v54; /*0x100adcec2*/
  v12 = *(_QWORD *)&v54[8]; /*0x100adcec9*/
  v13 = *(_QWORD *)&v54[16]; /*0x100adced0*/
  if ( *(_QWORD *)v54 == 11 ) /*0x100adcedb*/
  {
    __s2 = *(void **)&v54[8]; /*0x100adcee1*/
    __n = *(_QWORD *)&v54[16]; /*0x100adcee5*/
    v64 = a1; /*0x100adcee9*/
    v14 = *(_QWORD *)(a2 + 200); /*0x100adceed*/
    v62 = a2; /*0x100adcef4*/
    std::path::Path::_join::hb1a495d4f06b13b8( /*0x100adcf13*/
      v53,
      v14,
      *(_QWORD *)(a2 + 208),
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_230,
      20);
    v15 = v53[1]; /*0x100adcf18*/
    codexmate_lib::core::account_coordination::FileLock::acquire::h303ea95e4bf2b86e( /*0x100adcf3d*/
      v54,
      v53[1],
      v53[2],
      "account state.oauth-refresh.lock",
      13);
    v16 = *(_QWORD *)v54; /*0x100adcf42*/
    v17 = *(_DWORD *)&v54[8]; /*0x100adcf49*/
    if ( *(_QWORD *)v54 != 11 ) /*0x100adcf53*/
    {
      v18 = &v54[12]; /*0x100adcf55*/
      v19 = &v55; /*0x100adcf5c*/
      for ( i = 21; i; --i ) /*0x100adcf63*/
      {
        *(_DWORD *)v19 = *v18++; /*0x100adcf68*/
        v19 = (__int64 *)((char *)v19 + 4); /*0x100adcf68*/
      }
    }
    if ( v53[0] ) /*0x100adcf74*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v53[0], 1); /*0x100adcf7e*/
    if ( (_DWORD)v16 == 11 ) /*0x100adcf87*/
    {
      v65[0] = v17; /*0x100adcf8d*/
      codexmate_lib::core::repository::Repository::load_local_state::h957530d4f68e7543(v54); /*0x100adcf9b*/
      qmemcpy(v53, &v54[8], 0x60u); /*0x100adcfba*/
      if ( *(_QWORD *)v54 == 2 ) /*0x100adcfc1*/
      {
        v10 = v64; /*0x100adcfc3*/
        qmemcpy((char *)v64 + 8, v53, 0x60u); /*0x100adcfd7*/
        *v10 = 3; /*0x100adcfda*/
LABEL_43:
        _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8c5db97a3e0d565(v65); /*0x100add3bc*/
LABEL_44:
        close_NOCANCEL(v65[0]); /*0x100add3c5*/
        return v10; /*0x100add3c8*/
      }
      memcpy(__dst, &v54[104], 0x408u); /*0x100add050*/
      qmemcpy(v56, v53, sizeof(v56)); /*0x100add068*/
      v27 = &v53[12]; /*0x100add068*/
      v26 = __dst; /*0x100add068*/
      v55 = *(_QWORD *)v54; /*0x100add06b*/
      if ( !__dst[98] ) /*0x100add07c*/
        goto LABEL_40; /*0x100add07c*/
      v28 = __dst[97]; /*0x100add082*/
      v29 = 384LL * __dst[98]; /*0x100add08d*/
      v30 = 0; /*0x100add091*/
      while ( 1 ) /*0x100add0b0*/
      {
        if ( *(_QWORD *)(v28 + v30 + 224) == a4 ) /*0x100add0b8*/
        {
          v26 = *(_QWORD **)(v28 + v30 + 216); /*0x100add0ba*/
          v27 = a3; /*0x100add0c2*/
          if ( !memcmp(v26, a3, a4) ) /*0x100add0c8*/
            break; /*0x100add0c8*/
        }
        v30 += 384; /*0x100add0a0*/
        if ( v29 == v30 ) /*0x100add0aa*/
          goto LABEL_40; /*0x100add0aa*/
      }
      if ( __dst[82] ) /*0x100add0db*/
      {
        v31 = __dst[81]; /*0x100add0e1*/
        v32 = 424LL * __dst[82]; /*0x100add0e8*/
        v33 = 0; /*0x100add0ef*/
        v61 = __dst[81]; /*0x100add0f1*/
        v58 = v28; /*0x100add0f5*/
        while ( 1 ) /*0x100add110*/
        {
          if ( *(_QWORD *)(v31 + v33 + 208) == a4 ) /*0x100add118*/
          {
            v26 = *(_QWORD **)(v31 + v33 + 200); /*0x100add11a*/
            v27 = a3; /*0x100add122*/
            v34 = a3; /*0x100add128*/
            v35 = v32; /*0x100add12b*/
            v36 = memcmp(v26, v27, a4); /*0x100add12e*/
            v31 = v61; /*0x100add133*/
            v37 = v36 == 0; /*0x100add137*/
            v32 = v35; /*0x100add139*/
            a3 = v34; /*0x100add13c*/
            v38 = v58; /*0x100add13f*/
            if ( v37 ) /*0x100add143*/
              break; /*0x100add143*/
          }
          v33 += 424; /*0x100add100*/
          if ( v32 == v33 ) /*0x100add10a*/
            goto LABEL_40; /*0x100add10a*/
        }
        v39 = __n; /*0x100add145*/
        if ( *(_QWORD *)(v61 + v33 + 280) == __n && !memcmp(*(const void **)(v61 + v33 + 272), __s2, __n) ) /*0x100add169*/
        {
LABEL_33:
          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h331ad6372c5f4439(v54, v39, 0, 1, 1); /*0x100add22d*/
          v40 = *(_QWORD *)&v54[8]; /*0x100add249*/
          if ( !v54[0] ) /*0x100add257*/
          {
            v43 = *(_QWORD *)&v54[16]; /*0x100add25d*/
            memcpy(*(void **)&v54[16], __s2, v39); /*0x100add26e*/
            v44 = *(_QWORD *)(v38 + v30 + 256); /*0x100add273*/
            if ( v44 ) /*0x100add27e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v38 + v30 + 264), v44, 1); /*0x100add28d*/
            *(_QWORD *)(v38 + v30 + 256) = v40; /*0x100add292*/
            *(_QWORD *)(v38 + v30 + 264) = v43; /*0x100add29a*/
            *(_QWORD *)(v38 + v30 + 272) = __n; /*0x100add2a6*/
            v45 = __dst[97] - 384LL; /*0x100add2bc*/
            v46 = 384LL * __dst[98]; /*0x100add2c7*/
            v47 = v62; /*0x100add2cb*/
            while ( v46 ) /*0x100add2d2*/
            {
              v48 = v45 + 384; /*0x100add2d8*/
              v46 -= 384; /*0x100add2df*/
              v37 = *(_BYTE *)(v45 + 753) == 1; /*0x100add2e6*/
              v45 += 384; /*0x100add2ed*/
              if ( v37 ) /*0x100add2f0*/
              {
                _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::haf2b070439cfb5a7( /*0x100add2fc*/
                  v54,
                  v48);
                v49 = *(_QWORD *)v54; /*0x100add301*/
                memcpy(v53, &v54[8], 0x178u); /*0x100add31b*/
                v47 = v62; /*0x100add320*/
                goto LABEL_48; /*0x100add324*/
              }
            }
            v49 = 2; /*0x100add3fb*/
LABEL_48:
            if ( LODWORD(__dst[6]) != 2 ) /*0x100add40e*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h06d77c68fd4e944d(&__dst[6]); /*0x100add413*/
            __dst[6] = v49; /*0x100add418*/
            memcpy(&__dst[7], v53, 0x178u); /*0x100add432*/
            codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::hff0599f7e6155179( /*0x100add44f*/
              v54,
              v47,
              (__int64)&v55,
              a7);
            v53[94] = __dst[98]; /*0x100add469*/
            v53[93] = __dst[97]; /*0x100add477*/
            v53[92] = __dst[96]; /*0x100add47e*/
            memcpy(v53, v54, 0x2E0u); /*0x100add49b*/
            v53[95] = 0x8000000000000000LL; /*0x100add4a0*/
            __dst[131] = __dst[101]; /*0x100add4ae*/
            __dst[130] = __dst[100]; /*0x100add4c0*/
            __dst[129] = __dst[99]; /*0x100add4c4*/
            codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h32b098fdb7bc264d(v54, v53); /*0x100add4d9*/
            v10 = v64; /*0x100add4ea*/
            memcpy(v64, v54, 0x3C0u); /*0x100add4f1*/
            if ( __dst[54] ) /*0x100add500*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[55], __dst[54], 1); /*0x100add50e*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hb6a483dd2db0ab56(&__dst[58]); /*0x100add51a*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h939f6e3f6a2b103c(&v55); /*0x100add526*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h92081ece5e23ff8e(&__dst[80]); /*0x100add532*/
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8a132c1831b051d2(&__dst[91]); /*0x100add53e*/
            if ( __dst[91] ) /*0x100add54d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[92], 192LL * __dst[91], 8); /*0x100add563*/
            if ( LODWORD(__dst[6]) != 2 ) /*0x100add56f*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h06d77c68fd4e944d(&__dst[6]); /*0x100add574*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..ApiDiagnostics$GT$::h8ed2753a903213d2(&__dst[102]); /*0x100add580*/
            if ( __dst[109] != 0x8000000000000000LL && __dst[109] ) /*0x100add594*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[110], __dst[109], 1); /*0x100add5a2*/
            core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..AccountRefreshReport$GT$$GT$::hb690944522aaf963(&__dst[112]); /*0x100add5ae*/
            _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8c5db97a3e0d565(v65); /*0x100add5b7*/
            goto LABEL_44; /*0x100add5bc*/
          }
          goto LABEL_60; /*0x100add257*/
        }
        alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h331ad6372c5f4439(v54, v39, 0, 1, 1); /*0x100add186*/
        v40 = *(_QWORD *)&v54[8]; /*0x100add18b*/
        if ( *(_DWORD *)v54 == 1 ) /*0x100add199*/
        {
LABEL_60:
          v50 = *(_QWORD *)&v54[16]; /*0x100add5c1*/
LABEL_61:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v40, v50); /*0x100add5c8*/
        }
        v59 = *(_QWORD *)&v54[16]; /*0x100add1a6*/
        memcpy(*(void **)&v54[16], __s2, v39); /*0x100add1b1*/
        v41 = v61; /*0x100add1b6*/
        v42 = *(_QWORD *)(v61 + v33 + 264); /*0x100add1ba*/
        if ( v42 ) /*0x100add1c5*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + v33 + 272), v42, 1); /*0x100add1d4*/
          v41 = v61; /*0x100add1d9*/
        }
        *(_QWORD *)(v41 + v33 + 264) = v40; /*0x100add1dd*/
        *(_QWORD *)(v41 + v33 + 272) = v59; /*0x100add1e9*/
        *(_QWORD *)(v41 + v33 + 280) = __n; /*0x100add1f5*/
        codexmate_lib::core::repository::Repository::persist_registry::hb7eea8a742111942(v54, v62, &__dst[80], 1); /*0x100add217*/
        if ( *(_DWORD *)v54 == 11 ) /*0x100add223*/
        {
          v39 = __n; /*0x100add229*/
          goto LABEL_33; /*0x100add229*/
        }
        v10 = v64; /*0x100add3e2*/
        qmemcpy((char *)v64 + 8, v54, 0x60u); /*0x100add3f6*/
      }
      else
      {
LABEL_40:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v27, v25); /*0x100add329*/
        v50 = 30; /*0x100add32e*/
        v40 = 1; /*0x100add334*/
        v51 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100add344*/
        if ( !v51 ) /*0x100add34c*/
          goto LABEL_61; /*0x100add34c*/
        qmemcpy(v51, "Account is no longer available", 30); /*0x100add386*/
        v10 = v64; /*0x100add389*/
        *((_QWORD *)v64 + 1) = 9; /*0x100add38d*/
        v10[2] = 30; /*0x100add395*/
        v10[3] = v51; /*0x100add39d*/
        v10[4] = 30; /*0x100add3a1*/
      }
      *v10 = 3; /*0x100add3a9*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h2083ab4ec30214a5(&v55); /*0x100add3b7*/
      goto LABEL_43; /*0x100add3b7*/
    }
    v21 = v64; /*0x100add011*/
    v22 = (char *)v64 + 20; /*0x100add015*/
    v23 = &v55; /*0x100add019*/
    for ( j = 21; j; --j ) /*0x100add020*/
    {
      *v22 = *(_DWORD *)v23; /*0x100add025*/
      v23 = (__int64 *)((char *)v23 + 4); /*0x100add025*/
      ++v22; /*0x100add025*/
    }
    v21[1] = v16; /*0x100add027*/
    *((_DWORD *)v21 + 4) = v17; /*0x100add02b*/
    v10 = v21; /*0x100add02e*/
    *v21 = 3; /*0x100add031*/
  }
  else
  {
    qmemcpy(a1 + 4, &v54[24], 0x48u); /*0x100adcff6*/
    a1[1] = v11; /*0x100adcff9*/
    a1[2] = v12; /*0x100adcffd*/
    a1[3] = v13; /*0x100add001*/
    *a1 = 3; /*0x100add005*/
  }
  return v10; /*0x100add3d0*/
}