// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_usage_analytics node 0x100534690 depth=0
_QWORD *__fastcall codexmate_lib::core::repository::Repository::store_bootstrap_usage_analytics::he8e69a836ef7262d(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  void *v6; // rsi
  size_t v7; // r14
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r13
  int v12; // r14d
  _QWORD *v13; // r12
  __int64 v14; // r13
  __int64 v15; // r15
  _QWORD *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r14
  void *v20; // r12
  size_t v21; // r15
  __int64 v22; // r15
  _QWORD __dst[115]; // [rsp+8h] [rbp-7D8h] BYREF
  int v25; // [rsp+3A0h] [rbp-440h]
  _QWORD __src[115]; // [rsp+3A8h] [rbp-438h] BYREF
  __m128 v27; // [rsp+740h] [rbp-A0h]
  __int64 v28; // [rsp+758h] [rbp-88h]
  __int64 v29; // [rsp+760h] [rbp-80h]
  void *v30; // [rsp+768h] [rbp-78h]
  __int64 v31; // [rsp+770h] [rbp-70h]
  size_t __n; // [rsp+778h] [rbp-68h]
  __int64 v33; // [rsp+780h] [rbp-60h]
  __int64 v34; // [rsp+788h] [rbp-58h]
  int v35; // [rsp+794h] [rbp-4Ch]
  __int64 v36; // [rsp+798h] [rbp-48h] BYREF
  void *__buf; // [rsp+7A0h] [rbp-40h]
  size_t __nbyte; // [rsp+7A8h] [rbp-38h]
  unsigned __int64 v39; // [rsp+7B0h] [rbp-30h]

  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557(a2); /*0x1005346b0*/
  if ( v5 ) /*0x1005346b8*/
  {
    *a1 = 2; /*0x1005346ba*/
    a1[1] = v5; /*0x1005346c1*/
  }
  else
  {
    v6 = *(void **)(a2 + 464); /*0x1005346ca*/
    v7 = *(_QWORD *)(a2 + 472); /*0x1005346d1*/
    v30 = v6; /*0x1005346df*/
    codexmate_lib::core::bootstrap_cache::load::h642b53faa3521cbf(__src, v6, v7); /*0x1005346e6*/
    v36 = std::time::SystemTime::now::h1fe79e41f9d5677f(__src, v6, v8); /*0x1005346f0*/
    LODWORD(__buf) = v9; /*0x1005346f4*/
    std::time::SystemTime::duration_since::had059553cab94f96(__dst, &v36, 0, 0); /*0x100534706*/
    v10 = 0; /*0x100534714*/
    if ( !LOBYTE(__dst[0]) ) /*0x100534719*/
      v10 = __dst[1]; /*0x10053471b*/
    __src[0] = 1; /*0x10053472c*/
    __src[1] = v10; /*0x100534737*/
    v11 = *(_QWORD *)(a3 + 48); /*0x10053473e*/
    v27 = (__m128)*(unsigned __int64 *)(a3 + 64); /*0x10053474a*/
    v28 = *(_QWORD *)(a3 + 56); /*0x100534758*/
    if ( __OFSUB__(0, *(_QWORD *)(a3 + 24)) ) /*0x100534760*/
    {
      v39 = 0x8000000000000000LL; /*0x100534767*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, a3 + 24); /*0x100534779*/
      v39 = __dst[0]; /*0x100534785*/
      v33 = __dst[1]; /*0x100534790*/
      v31 = __dst[2]; /*0x10053479b*/
    }
    v29 = v11; /*0x10053479f*/
    __n = v7; /*0x1005347a3*/
    v12 = *(_DWORD *)(a3 + 72); /*0x1005347a7*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h592bff4c6c4a164c(__dst, a3); /*0x1005347b6*/
    v13 = (_QWORD *)(a3 + 80); /*0x1005347bb*/
    __nbyte = __dst[2]; /*0x1005347c6*/
    __buf = (void *)__dst[1]; /*0x1005347d8*/
    v36 = __dst[0]; /*0x1005347dc*/
    v14 = __src[87]; /*0x1005347e7*/
    if ( __src[87] != 0x8000000000000000LL ) /*0x1005347f1*/
    {
      v35 = v12; /*0x1005347f7*/
      if ( __src[90] != 0x8000000000000000LL && __src[90] ) /*0x10053480a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[91], __src[90], 1); /*0x100534818*/
      v34 = __src[88]; /*0x100534824*/
      v15 = __src[89]; /*0x100534828*/
      if ( __src[89] ) /*0x100534832*/
      {
        v16 = (_QWORD *)(v34 + 8); /*0x100534838*/
        do /*0x100534847*/
        {
          v17 = *(v16 - 1); /*0x100534849*/
          if ( v17 ) /*0x100534850*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v17, 1); /*0x10053485a*/
          v16 += 5; /*0x100534840*/
          --v15; /*0x100534844*/
        }
        while ( v15 ); /*0x100534847*/
      }
      v12 = v35; /*0x10053486e*/
      if ( v14 ) /*0x100534879*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 40 * v14, 8); /*0x10053488d*/
    }
    __src[89] = __nbyte; /*0x10053489d*/
    __src[88] = __buf; /*0x1005348a9*/
    __src[87] = v36; /*0x1005348ad*/
    __src[90] = v39; /*0x1005348b4*/
    __src[91] = v33; /*0x1005348bf*/
    __src[92] = v31; /*0x1005348ca*/
    __src[93] = v29; /*0x1005348d5*/
    __src[94] = v28; /*0x1005348e4*/
    _mm_storel_ps((double *)&__src[95], v27); /*0x1005348f3*/
    LODWORD(__src[96]) = v12; /*0x1005348fa*/
    v18 = v13[1]; /*0x100534905*/
    __src[97] = *v13; /*0x10053490a*/
    __src[98] = v18; /*0x100534911*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x10053492e*/
    v25 = 1; /*0x100534933*/
    serde_json::ser::to_vec::he041d2f67f554c3b(&v36, __dst); /*0x100534944*/
    v19 = v36; /*0x100534949*/
    v20 = __buf; /*0x10053494d*/
    if ( v36 == 0x8000000000000000LL ) /*0x100534954*/
    {
      *a1 = 3; /*0x100534956*/
      a1[1] = v20; /*0x10053495d*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(__dst); /*0x100534968*/
    }
    else
    {
      v21 = __nbyte; /*0x10053496f*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(__dst); /*0x10053497a*/
      v22 = std::fs::write::inner::had0c1bee0a2c1e21(v30, __n, v20, v21); /*0x100534992*/
      if ( v19 ) /*0x100534998*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x1005349a5*/
      if ( v22 ) /*0x1005349ad*/
      {
        *a1 = 2; /*0x1005349af*/
        a1[1] = v22; /*0x1005349b6*/
      }
      else
      {
        *a1 = 10; /*0x1005349bc*/
      }
    }
  }
  return a1; /*0x1005349c6*/
}