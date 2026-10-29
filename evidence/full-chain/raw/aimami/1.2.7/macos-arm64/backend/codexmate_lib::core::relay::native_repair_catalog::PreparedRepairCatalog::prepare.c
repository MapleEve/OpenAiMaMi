// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_repair_catalog::PreparedRepairCatalog::prepare::h15d79678a23574ac; addr: 0x10031fbf0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// B-level evidence identity verified; module codexmate_lib/core/relay/native_repair_catalog; range 0x10031fbf0-0x10032011d; sha f019dbc8e267; session <审计会话>; method same-callee-string-number-sets; decompiler-type-variant; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
// [release-semantic-writeback <审计会话> 0x10031fbf0]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [router-engine-platform-module-content-results-final / release full-body source-validation chain confirmed] 模块分组事实：read_model_list connects AppServerClient, sends config/read with 
// includeLayers, extracts config and calls native_repair_catalog::validate_source before model listing; includes includeHidden request construction and later source revalidation. val
// idate_source checks configured base_url/source against prepared expected source. platform::codex_catalog::validate retains database validation/error handling. Exact current full bo
// dies are available; pre accepted CodexPaths/native-catalog contracts remain inputs.
// 副作用边界：["App-server communication and filesystem/database reads; any downstream writes remain explicitly identified in their owning contract"]
// 限制：；pre未逐体对照则delta unverified。
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e027
// 4206dd853ade3eef7cc9003b68d1e289ab88947f776436e
_QWORD *__fastcall codexmate_lib::core::relay::native_repair_catalog::PreparedRepairCatalog::prepare::h15d79678a23574ac(
        _QWORD *__dst,
        _QWORD *a2,
        __int64 a3)
{
  void *v4; // rax
  void *v5; // r14
  __int128 v6; // kr00_16
  __int128 v7; // kr10_16
  double v8; // xmm0_8
  __int128 v9; // kr20_16
  __int128 v10; // kr30_16
  __int128 v11; // kr40_16
  __int128 v12; // kr50_16
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // r15
  __int64 v17; // r14
  void *v18; // rax
  void *v19; // r12
  __int64 v20; // rdx
  _QWORD __src[22]; // [rsp+0h] [rbp-230h] BYREF
  _QWORD v22[5]; // [rsp+B0h] [rbp-180h] BYREF
  _QWORD v23[3]; // [rsp+D8h] [rbp-158h] BYREF
  __m256i __dsta[7]; // [rsp+F0h] [rbp-140h] BYREF
  __int64 v25; // [rsp+1D0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+1D8h] [rbp-58h]
  __int64 v27; // [rsp+1E0h] [rbp-50h]
  __int64 v28; // [rsp+1E8h] [rbp-48h]
  __int64 v29; // [rsp+1F0h] [rbp-40h]
  __int64 v30; // [rsp+1F8h] [rbp-38h]
  __int64 v31; // [rsp+200h] [rbp-30h]

  if ( *(_BYTE *)(a3 + 364) == 1 && *(_BYTE *)(a3 + 382) ) /*0x10031fc16*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2, a3); /*0x10031fc21*/
    v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(138, 1); /*0x10031fc30*/
    if ( !v4 ) /*0x10031fc38*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 138); /*0x100320107*/
    v5 = v4; /*0x10031fc3e*/
    memcpy(v4, &unk_1016EFC1B, 0x8Au); /*0x10031fc50*/
    __dst[1] = 10; /*0x10031fc55*/
    __dst[2] = 138; /*0x10031fc5d*/
    __dst[3] = v5; /*0x10031fc65*/
    __dst[4] = 138; /*0x10031fc69*/
    goto LABEL_12; /*0x10031fc71*/
  }
  codexmate_lib::core::relay::native_repair_catalog::read_optional::h76fbee7e324b28ba(__dsta, a2[7], a2[8]); /*0x10031fc85*/
  v6 = __dsta[0].i128[0]; /*0x10031fc91*/
  v7 = __dsta[0].i128[1]; /*0x10031fc9f*/
  if ( __dsta[0].i64[0] != 11 ) /*0x10031fcaa*/
  {
    *(__m256i *)(__dst + 9) = __dsta[2]; /*0x10031fe47*/
    *(__m256i *)(__dst + 5) = __dsta[1]; /*0x10031fe73*/
    __dst[2] = *((_QWORD *)&v6 + 1); /*0x10031fe8d*/
    *(_OWORD *)(__dst + 3) = v7; /*0x10031fe91*/
    __dst[1] = v6; /*0x10031fe99*/
LABEL_12:
    *__dst = 0x8000000000000001LL; /*0x10031fe9d*/
    return __dst; /*0x10031fea7*/
  }
  v29 = __dsta[0].i64[2]; /*0x10031fcb0*/
  v31 = __dsta[0].i64[1]; /*0x10031fcb4*/
  v8 = codexmate_lib::core::relay::native_repair_catalog::read_optional::h76fbee7e324b28ba(__dsta, a2[4], a2[5]); /*0x10031fcc7*/
  v9 = __dsta[0].i128[0]; /*0x10031fcd3*/
  v10 = __dsta[0].i128[1]; /*0x10031fce1*/
  if ( __dsta[0].i64[0] == 11 ) /*0x10031fcec*/
  {
    v28 = __dsta[0].i64[2]; /*0x10031fcf2*/
    v30 = __dsta[0].i64[1]; /*0x10031fcf6*/
    codexmate_lib::core::codex_app_server::models::read_model_list::h7b114c61d871c454(__dsta, v8, (__int64)a2, a3); /*0x10031fd07*/
    v11 = __dsta[0].i128[0]; /*0x10031fd13*/
    v12 = __dsta[0].i128[1]; /*0x10031fd21*/
    if ( __dsta[0].i64[0] == 11 ) /*0x10031fd2c*/
    {
      v22[0] = __dsta[0].i64[2]; /*0x10031fd3d*/
      v22[1] = __dsta[0].i64[2]; /*0x10031fd44*/
      v22[2] = __dsta[0].i64[1]; /*0x10031fd4b*/
      v22[3] = __dsta[0].i64[2] + 80 * __dsta[0].i64[3]; /*0x10031fd52*/
      v22[4] = 0; /*0x10031fd59*/
      alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::ha1ae6381de1dc98e( /*0x10031fd6f*/
        &v25,
        v22);
      if ( v27 ) /*0x10031fd79*/
      {
        v23[2] = v27; /*0x10031fd83*/
        v23[1] = v26; /*0x10031fd92*/
        v23[0] = v25; /*0x10031fd99*/
        codexmate_lib::core::relay::codex_catalog::native_thread_model_catalog_from_native_list::he8d436fa0fb432a1( /*0x10031fdae*/
          __src,
          v23);
        __dsta[5].i64[2] = v31; /*0x10031fdb7*/
        __dsta[5].i64[3] = v29; /*0x10031fdc2*/
        __dsta[6].i64[0] = *((_QWORD *)&v7 + 1); /*0x10031fdc9*/
        __dsta[6].i64[1] = v30; /*0x10031fdd1*/
        __dsta[6].i64[2] = v28; /*0x10031fdd9*/
        __dsta[6].i64[3] = *((_QWORD *)&v10 + 1); /*0x10031fddd*/
        memcpy(__dsta, __src, 0xB0u); /*0x10031fdf7*/
        codexmate_lib::core::relay::native_repair_catalog::PreparedRepairCatalog::catalog::h1a5764c824ac355b( /*0x10031fe09*/
          __src,
          __dsta,
          a2);
        v14 = __src[0]; /*0x10031fe0e*/
        if ( __src[0] == 11 ) /*0x10031fe19*/
        {
          memcpy(__dst, __dsta, 0xE0u); /*0x10031fe2e*/
        }
        else
        {
          v20 = __src[1]; /*0x1003200bd*/
          qmemcpy(__dst + 3, &__src[2], 0x50u); /*0x1003200d4*/
          __dst[1] = v14; /*0x1003200d7*/
          __dst[2] = v20; /*0x1003200db*/
          *__dst = 0x8000000000000001LL; /*0x1003200e9*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..native_repair_catalog..PreparedRepairCatalog$GT$::h964b9a78864f9bd5(__dsta); /*0x1003200f3*/
        }
        return __dst; /*0x10031fe33*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v25, v22, v13); /*0x10032001e*/
      v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x10032002d*/
      if ( !v18 ) /*0x100320035*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100320116*/
      v19 = v18; /*0x10032003b*/
      memcpy(v18, &unk_1016EFB41, 0x80u); /*0x10032004d*/
      __dst[1] = 10; /*0x100320052*/
      __dst[2] = 128; /*0x10032005a*/
      __dst[3] = v19; /*0x100320062*/
      __dst[4] = 128; /*0x100320066*/
      *__dst = 0x8000000000000001LL; /*0x100320078*/
      v17 = v31; /*0x10032007f*/
      v16 = v30; /*0x100320083*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd649dddbb4e075e3(&v25); /*0x100320087*/
      if ( v25 ) /*0x100320093*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 32 * v25, 8); /*0x1003200a2*/
      if ( !(2 * v16) ) /*0x1003200b2*/
        goto LABEL_18; /*0x1003200b2*/
    }
    else
    {
      *(__m256i *)(__dst + 9) = __dsta[2]; /*0x10031ff6e*/
      *(__m256i *)(__dst + 5) = __dsta[1]; /*0x10031ff9a*/
      *(_OWORD *)(__dst + 1) = v11; /*0x10031ffb4*/
      *(_OWORD *)(__dst + 3) = v12; /*0x10031ffbc*/
      *__dst = 0x8000000000000001LL; /*0x10031ffce*/
      v16 = v30; /*0x10031ffd1*/
      v17 = v31; /*0x10031ffe0*/
      if ( !(2 * v30) ) /*0x10031ffe4*/
        goto LABEL_18; /*0x10031ffe4*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v16, 1); /*0x10031fff2*/
LABEL_18:
    if ( 2 * v17 ) /*0x10031fff7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v17, 1); /*0x100320014*/
    return __dst; /*0x100320019*/
  }
  *(__m256i *)(__dst + 9) = __dsta[2]; /*0x10031fed1*/
  *(__m256i *)(__dst + 5) = __dsta[1]; /*0x10031fefd*/
  __dst[2] = *((_QWORD *)&v9 + 1); /*0x10031ff17*/
  *(_OWORD *)(__dst + 3) = v10; /*0x10031ff1b*/
  __dst[1] = v9; /*0x10031ff23*/
  *__dst = 0x8000000000000001LL; /*0x10031ff31*/
  if ( 2 * v31 ) /*0x10031ff38*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v31, 1); /*0x10031ff52*/
  return __dst; /*0x10031fead*/
}
