// __ZN13codexmate_lib4core5relay7storage4load @ 0x1008b1f20 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::storage::load::hd75f6a87da16e8b3(_QWORD *__dst, _QWORD *a2, __m128i a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r14
  void *v13; // rbx
  size_t v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  _QWORD *v18; // r12
  __int64 v19; // rsi
  void *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _BYTE *v24; // rax
  _BYTE *v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // edx
  _DWORD *v32; // rsi
  _DWORD *v33; // rdi
  __int64 i; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  double v38; // xmm0_8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r13
  unsigned __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // r13
  __int64 v51; // r14
  __int64 v52; // rbx
  char v53; // al
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 *v61; // rcx
  __int64 v62; // rax
  size_t v63; // rcx
  __int64 v64; // rax
  size_t v65; // r13
  const void *v66; // r14
  __int64 *v67; // rax
  __int64 v68; // rsi
  __int64 *v69; // rax
  bool v70; // al
  __int64 v71; // rsi
  char v72; // r13
  const __m128i *v73; // rbx
  const __m128i *v74; // r13
  void *v75; // rax
  void *v76; // r12
  _QWORD v77[37]; // [rsp+0h] [rbp-490h] BYREF
  _QWORD v78[3]; // [rsp+128h] [rbp-368h] BYREF
  _QWORD v79[3]; // [rsp+140h] [rbp-350h] BYREF
  _QWORD v80[12]; // [rsp+158h] [rbp-338h] BYREF
  __int64 v81; // [rsp+1B8h] [rbp-2D8h] BYREF
  _QWORD v82[4]; // [rsp+1C0h] [rbp-2D0h] BYREF
  _BYTE v83[104]; // [rsp+1E0h] [rbp-2B0h] BYREF
  _BYTE __src[192]; // [rsp+248h] [rbp-248h] BYREF
  __int64 v85; // [rsp+308h] [rbp-188h]
  _QWORD v86[12]; // [rsp+310h] [rbp-180h] BYREF
  __int64 v87; // [rsp+370h] [rbp-120h] BYREF
  const __m128i *v88; // [rsp+378h] [rbp-118h]
  __int64 v89; // [rsp+380h] [rbp-110h]
  unsigned __int8 *v90; // [rsp+388h] [rbp-108h] BYREF
  size_t v91; // [rsp+390h] [rbp-100h]
  _QWORD v92[12]; // [rsp+398h] [rbp-F8h] BYREF
  _QWORD *v93; // [rsp+3F8h] [rbp-98h] BYREF
  __int64 v94; // [rsp+400h] [rbp-90h]
  void *v95; // [rsp+408h] [rbp-88h]
  __int64 v96; // [rsp+410h] [rbp-80h]
  char **v97; // [rsp+418h] [rbp-78h]
  __int64 v98; // [rsp+420h] [rbp-70h]
  __int64 v99; // [rsp+428h] [rbp-68h]
  int v100; // [rsp+434h] [rbp-5Ch] BYREF
  unsigned __int64 v101; // [rsp+438h] [rbp-58h]
  __int64 *v102; // [rsp+440h] [rbp-50h]
  __int64 v103; // [rsp+448h] [rbp-48h]
  void *v104; // [rsp+450h] [rbp-40h]
  __int64 v105; // [rsp+458h] [rbp-38h]
  __int64 v106; // [rsp+460h] [rbp-30h]

  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x1008b1f3d*/
  if ( v5 ) /*0x1008b1f45*/
  {
    __dst[1] = 2; /*0x1008b1f47*/
    __dst[2] = v5; /*0x1008b1f4f*/
    *__dst = 0x8000000000000000LL; /*0x1008b1f5d*/
    return __dst; /*0x1008b1f60*/
  }
  v6 = a2[76]; /*0x1008b1f65*/
  v7 = a2[77]; /*0x1008b1f6d*/
  std::sys::fs::metadata::h32fa16d3052ea535(v83, v6, v7); /*0x1008b1f82*/
  if ( *(_DWORD *)v83 == 1 ) /*0x1008b1f8e*/
  {
    if ( (v83[8] & 3) == 1 ) /*0x1008b1fa3*/
    {
      v8 = *(_QWORD *)&v83[8] - 1LL; /*0x1008b1fa5*/
      v9 = *(_QWORD *)(*(_QWORD *)&v83[8] - 1LL); /*0x1008b1fa9*/
      v10 = *(_QWORD *)(*(_QWORD *)&v83[8] + 7LL); /*0x1008b1fad*/
      if ( *(_QWORD *)v10 ) /*0x1008b1fb1*/
        (*(void (__fastcall **)(__int64))v10)(v9); /*0x1008b1fbd*/
      v11 = *(_QWORD *)(v10 + 8); /*0x1008b1fbf*/
      if ( v11 ) /*0x1008b1fc7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v11, *(_QWORD *)(v10 + 16)); /*0x1008b1fd1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 24, 8); /*0x1008b1fe3*/
    }
    __dst[3] = 0; /*0x1008b1fe8*/
    __dst[2] = 0; /*0x1008b1ff0*/
    __dst[5] = 0; /*0x1008b1ff8*/
    __dst[6] = 0; /*0x1008b2000*/
    __dst[8] = 0; /*0x1008b2008*/
    __dst[9] = 0; /*0x1008b2010*/
    *__dst = 0; /*0x1008b2018*/
    __dst[1] = 8; /*0x1008b201f*/
    __dst[4] = 8; /*0x1008b2027*/
    __dst[7] = 1; /*0x1008b202f*/
    __dst[10] = 1; /*0x1008b2037*/
    __dst[11] = 0; /*0x1008b203f*/
    __dst[12] = 0x8000000000000000LL; /*0x1008b2051*/
    *((_WORD *)__dst + 60) = 0; /*0x1008b2055*/
    *((_BYTE *)__dst + 122) = 0; /*0x1008b205c*/
    __dst[16] = 0x8000000000000000LL; /*0x1008b2061*/
    *((_DWORD *)__dst + 72) = 10; /*0x1008b2068*/
    *((_WORD *)__dst + 146) = 0; /*0x1008b2073*/
    return __dst; /*0x1008b207d*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v83, v6, v7); /*0x1008b2099*/
  v12 = *(_QWORD *)v83; /*0x1008b209e*/
  v13 = *(void **)&v83[8]; /*0x1008b20a5*/
  if ( __OFSUB__(-*(_QWORD *)v83, 1) ) /*0x1008b20af*/
  {
    __dst[1] = 2; /*0x1008b20b4*/
    __dst[2] = v13; /*0x1008b20bc*/
    *__dst = 0x8000000000000000LL; /*0x1008b20c0*/
    return __dst; /*0x1008b20c3*/
  }
  v14 = *(_QWORD *)&v83[16]; /*0x1008b20c8*/
  v15 = *(_QWORD *)&v83[8]; /*0x1008b20cf*/
  v16 = *(_QWORD *)&v83[16]; /*0x1008b20d2*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)&v83[8], *(_QWORD *)&v83[16]); /*0x1008b20d5*/
  if ( !v17 ) /*0x1008b20dd*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v16); /*0x1008b21ed*/
    v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x1008b21fc*/
    if ( !v20 ) /*0x1008b2204*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 54); /*0x1008b3344*/
    qmemcpy(v20, "relay state file is empty; original file was preserved", 54); /*0x1008b2268*/
    __dst[1] = 9; /*0x1008b226b*/
    __dst[2] = 54; /*0x1008b2273*/
    __dst[3] = v20; /*0x1008b227b*/
    __dst[4] = 54; /*0x1008b227f*/
    *__dst = 0x8000000000000000LL; /*0x1008b2291*/
    goto LABEL_49; /*0x1008b2294*/
  }
  *(_QWORD *)v83 = v13; /*0x1008b20e3*/
  *(_QWORD *)&v83[8] = v14; /*0x1008b20ea*/
  *(_QWORD *)&v83[16] = 0; /*0x1008b20f1*/
  *(_QWORD *)&v83[24] = 0; /*0x1008b20fc*/
  *(_QWORD *)&v83[32] = v13; /*0x1008b2107*/
  *(_QWORD *)&v83[40] = v14; /*0x1008b210e*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v77, v83); /*0x1008b2123*/
  if ( LOBYTE(v77[0]) == 6 ) /*0x1008b212f*/
  {
    v93 = (_QWORD *)v77[1]; /*0x1008b213c*/
    *(_QWORD *)v83 = &v93; /*0x1008b214a*/
    *(_QWORD *)&v83[8] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008b2158*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v80, &unk_1017C6533, v83); /*0x1008b2174*/
    *(_QWORD *)&v83[16] = v80[2]; /*0x1008b2180*/
    *(_QWORD *)&v83[8] = v80[1]; /*0x1008b2195*/
    *(_QWORD *)v83 = v80[0]; /*0x1008b219c*/
    v18 = v93; /*0x1008b21a3*/
    if ( *v93 == 1 ) /*0x1008b21bc*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v93 + 1); /*0x1008b23cb*/
    }
    else if ( !*v93 ) /*0x1008b21aa*/
    {
      v19 = v93[2]; /*0x1008b21cb*/
      if ( v19 ) /*0x1008b21d3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93[1], v19, 1); /*0x1008b21e3*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 40, 8); /*0x1008b23dd*/
    v86[0] = *(_QWORD *)v83; /*0x1008b23f0*/
    v92[0] = *(_QWORD *)v83; /*0x1008b2405*/
    v92[1] = *(_QWORD *)&v83[8]; /*0x1008b240c*/
    v92[2] = *(_QWORD *)&v83[16]; /*0x1008b2413*/
    v92[3] = *(_QWORD *)&v83[24]; /*0x1008b241a*/
    __dst[5] = *(_QWORD *)&v83[24]; /*0x1008b2428*/
    __dst[4] = v92[2]; /*0x1008b2433*/
    v28 = v92[0]; /*0x1008b2437*/
    __dst[3] = v92[1]; /*0x1008b2445*/
    __dst[2] = v28; /*0x1008b2449*/
    __dst[1] = 9; /*0x1008b244d*/
    *__dst = 0x8000000000000000LL; /*0x1008b2455*/
    goto LABEL_49; /*0x1008b2458*/
  }
  v92[0] = v77[0]; /*0x1008b22b5*/
  v92[1] = v77[1]; /*0x1008b22bc*/
  v82[3] = v77[3]; /*0x1008b22c3*/
  v82[2] = v77[2]; /*0x1008b22ca*/
  v82[1] = v77[1]; /*0x1008b22d1*/
  v82[0] = v77[0]; /*0x1008b22d8*/
  v21 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101675D21, 13, v82); /*0x1008b22f2*/
  if ( !v21 ) /*0x1008b22fa*/
  {
    v100 = 0; /*0x1008b2324*/
    v98 = 0; /*0x1008b232b*/
    goto LABEL_27; /*0x1008b232b*/
  }
  if ( *(_BYTE *)v21 != 2 ) /*0x1008b22ff*/
    goto LABEL_39; /*0x1008b22ff*/
  v22 = *(_QWORD *)(v21 + 8); /*0x1008b2305*/
  if ( v22 ) /*0x1008b230c*/
  {
    if ( (_DWORD)v22 != 1 ) /*0x1008b2315*/
      goto LABEL_39; /*0x1008b2315*/
    v23 = *(_QWORD *)(v21 + 16); /*0x1008b231b*/
  }
  else
  {
    v23 = *(_QWORD *)(v21 + 16); /*0x1008b245d*/
    if ( v23 < 0 ) /*0x1008b2464*/
      goto LABEL_39; /*0x1008b2464*/
  }
  if ( (int)v23 != v23 ) /*0x1008b2470*/
  {
LABEL_39:
    codexmate_lib::core::relay::storage::load::_$u7b$$u7b$closure$u7d$$u7d$::h49c08c47ba2c2122(v83); /*0x1008b24fd*/
    v30 = *(_QWORD *)v83; /*0x1008b2509*/
    v31 = *(_DWORD *)&v83[8]; /*0x1008b2510*/
    v32 = &v83[12]; /*0x1008b2516*/
    v33 = (_DWORD *)__dst + 5; /*0x1008b251d*/
    for ( i = 21; i; --i ) /*0x1008b2521*/
      *v33++ = *v32++; /*0x1008b2526*/
    __dst[1] = v30; /*0x1008b2528*/
    *((_DWORD *)__dst + 4) = v31; /*0x1008b252c*/
    goto LABEL_47; /*0x1008b2530*/
  }
  v100 = v23; /*0x1008b2476*/
  v98 = v23; /*0x1008b2479*/
  if ( v23 > 10 ) /*0x1008b2481*/
  {
    *(_QWORD *)v83 = &v100; /*0x1008b248b*/
    *(_QWORD *)&v83[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1008b2499*/
    *(_QWORD *)&v83[16] = "\n"; /*0x1008b24a7*/
    *(_QWORD *)&v83[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1008b24ae*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v79, &unk_1017C6494, v83); /*0x1008b24ca*/
    __dst[4] = v79[2]; /*0x1008b24d6*/
    v29 = v79[0]; /*0x1008b24da*/
    __dst[3] = v79[1]; /*0x1008b24e8*/
    __dst[2] = v29; /*0x1008b24ec*/
    __dst[1] = 9; /*0x1008b24f0*/
LABEL_47:
    *__dst = 0x8000000000000000LL; /*0x1008b2678*/
LABEL_48:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v82); /*0x1008b2685*/
    goto LABEL_49; /*0x1008b268c*/
  }
LABEL_27:
  v24 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x1008b2333*/
                   &unk_101675D2E,
                   11,
                   v82);
  v104 = v13; /*0x1008b234e*/
  if ( v24 ) /*0x1008b2352*/
  {
    if ( *v24 == 5 ) /*0x1008b235b*/
    {
      v25 = v24 + 8; /*0x1008b2371*/
      v26 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get_mut::h729a1977df2f647e( /*0x1008b2374*/
              v24 + 8,
              &unk_101675D39,
              5);
      if ( v26 ) /*0x1008b237c*/
      {
        if ( *(_BYTE *)v26 == 3 ) /*0x1008b2388*/
        {
          v106 = *(_QWORD *)(v26 + 8); /*0x1008b2539*/
          v103 = *(_QWORD *)(v26 + 16); /*0x1008b2541*/
          v102 = *(__int64 **)(v26 + 24); /*0x1008b2549*/
          *(_QWORD *)(v26 + 8) = 0; /*0x1008b254d*/
          *(_QWORD *)(v26 + 16) = 1; /*0x1008b2555*/
          *(_QWORD *)(v26 + 24) = 0; /*0x1008b255d*/
          v35 = v26; /*0x1008b2565*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, &unk_101675D39); /*0x1008b2568*/
          v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x1008b2577*/
          if ( !v36 ) /*0x1008b257f*/
            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1008b3333*/
          *(_BYTE *)v36 = 3; /*0x1008b2585*/
          *(_QWORD *)(v36 + 8) = v106; /*0x1008b258c*/
          *(_QWORD *)(v36 + 16) = v103; /*0x1008b2594*/
          v106 = v36; /*0x1008b2598*/
          *(_QWORD *)(v36 + 24) = v102; /*0x1008b25a0*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v35); /*0x1008b25a7*/
          *(_BYTE *)v35 = 4; /*0x1008b25ac*/
          *(_QWORD *)(v35 + 8) = 1; /*0x1008b25af*/
          *(_QWORD *)(v35 + 16) = v106; /*0x1008b25bb*/
          *(_QWORD *)(v35 + 24) = 1; /*0x1008b25bf*/
        }
        else if ( !*(_BYTE *)v26 ) /*0x1008b2382*/
        {
          v106 = v26; /*0x1008b2399*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v26); /*0x1008b239d*/
          v27 = (_QWORD *)v106; /*0x1008b23a2*/
          *(_BYTE *)v106 = 4; /*0x1008b23a6*/
          v27[1] = 0; /*0x1008b23a9*/
          v27[2] = 8; /*0x1008b23b1*/
          v27[3] = 0; /*0x1008b23b9*/
        }
      }
    }
  }
  _$LT$serde_json..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::h8271c7755bc56075(v86, v82); /*0x1008b25d9*/
  serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::h0745b0643bab1e09(v83); /*0x1008b2605*/
  if ( *(_QWORD *)v83 == 0x8000000000000000LL ) /*0x1008b261e*/
  {
    v13 = v104; /*0x1008b2632*/
    codexmate_lib::core::relay::storage::load::_$u7b$$u7b$closure$u7d$$u7d$::h29e164ffc44fb0cc(v86, *(_QWORD *)&v83[8]); /*0x1008b2636*/
    qmemcpy(v92, v86, sizeof(v92)); /*0x1008b2651*/
    qmemcpy(v80, v92, sizeof(v80)); /*0x1008b2666*/
    qmemcpy(__dst + 1, v80, 0x60u); /*0x1008b2675*/
    goto LABEL_47; /*0x1008b2675*/
  }
  qmemcpy(v92, &v83[8], sizeof(v92)); /*0x1008b26ce*/
  memcpy(&v77[13], __src, 0xC0u); /*0x1008b26e4*/
  qmemcpy(v80, v92, sizeof(v80)); /*0x1008b26ff*/
  qmemcpy(&v77[1], v80, 0x60u); /*0x1008b2711*/
  v77[0] = *(_QWORD *)v83; /*0x1008b2714*/
  v38 = codexmate_lib::core::relay::storage::plan_provider_id_migrations::h413a5551ff2e30cc(v83, v77[1], v77[2], a3); /*0x1008b2730*/
  v39 = *(_QWORD *)v83; /*0x1008b2735*/
  v86[0] = *(_QWORD *)&v83[8]; /*0x1008b2743*/
  v86[1] = *(_QWORD *)&v83[16]; /*0x1008b2751*/
  v86[2] = *(_QWORD *)&v83[24]; /*0x1008b275f*/
  v13 = v104; /*0x1008b276a*/
  if ( *(_QWORD *)v83 != 11 ) /*0x1008b276e*/
  {
    __dst[12] = *(_QWORD *)&v83[88]; /*0x1008b2b09*/
    __dst[11] = *(_QWORD *)&v83[80]; /*0x1008b2b14*/
    __dst[10] = *(_QWORD *)&v83[72]; /*0x1008b2b1f*/
    __dst[9] = *(_QWORD *)&v83[64]; /*0x1008b2b2a*/
    __dst[8] = *(_QWORD *)&v83[56]; /*0x1008b2b35*/
    __dst[7] = *(_QWORD *)&v83[48]; /*0x1008b2b40*/
    v55 = *(_QWORD *)&v83[32]; /*0x1008b2b44*/
    __dst[6] = *(_QWORD *)&v83[40]; /*0x1008b2b52*/
    __dst[5] = v55; /*0x1008b2b56*/
    __dst[4] = v86[2]; /*0x1008b2b61*/
    v56 = v86[0]; /*0x1008b2b65*/
    __dst[3] = v86[1]; /*0x1008b2b73*/
    __dst[2] = v56; /*0x1008b2b77*/
    __dst[1] = v39; /*0x1008b2b7b*/
    *__dst = 0x8000000000000000LL; /*0x1008b2b89*/
    goto LABEL_105; /*0x1008b2b8c*/
  }
  v87 = v86[0]; /*0x1008b2782*/
  v88 = (const __m128i *)v86[1]; /*0x1008b2789*/
  v89 = v86[2]; /*0x1008b2797*/
  v103 = v86[2]; /*0x1008b279e*/
  if ( v86[2] ) /*0x1008b27a5*/
  {
    codexmate_lib::core::relay::storage::preserve_state_before_provider_id_migration::h4f6a820344463645( /*0x1008b27c8*/
      v83,
      a2[73],
      a2[74],
      v104,
      v14);
    v40 = *(_QWORD *)v83; /*0x1008b27cd*/
    v41 = *(_QWORD *)&v83[8]; /*0x1008b27d4*/
    v42 = *(_QWORD *)&v83[16]; /*0x1008b27db*/
    v43 = *(_QWORD *)&v83[24]; /*0x1008b27e2*/
    if ( *(_QWORD *)v83 == 11 ) /*0x1008b27ed*/
    {
      v106 = *(_QWORD *)&v83[16]; /*0x1008b27f3*/
      codexmate_lib::core::relay::storage::apply_provider_id_migrations::h3d4155c9aa9a75e9((__int64)a2, v77, v88, v103); /*0x1008b280c*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008b281f*/
      {
        v80[0] = v103; /*0x1008b2829*/
        v92[0] = v106; /*0x1008b2834*/
        v92[1] = v43; /*0x1008b283b*/
        v86[0] = v80; /*0x1008b2849*/
        v86[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008b2857*/
        v86[2] = v92; /*0x1008b2865*/
        v86[3] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008b2873*/
        *(_QWORD *)v83 = &unk_101675C8E; /*0x1008b2881*/
        *(_QWORD *)&v83[8] = 35; /*0x1008b2888*/
        *(_QWORD *)&v83[16] = &unk_101675C8E; /*0x1008b2893*/
        *(_QWORD *)&v83[24] = 35; /*0x1008b289a*/
        *(_QWORD *)&v83[32] = &off_10196D1F0; /*0x1008b28ac*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017C6308, v86, 2, v83); /*0x1008b28cd*/
      }
      if ( v41 ) /*0x1008b28d9*/
        v38 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v41, 1); /*0x1008b28e3*/
      goto LABEL_59; /*0x1008b28e3*/
    }
    __dst[12] = *(_QWORD *)&v83[88]; /*0x1008b2b98*/
    __dst[11] = *(_QWORD *)&v83[80]; /*0x1008b2ba3*/
    __dst[10] = *(_QWORD *)&v83[72]; /*0x1008b2bae*/
    __dst[9] = *(_QWORD *)&v83[64]; /*0x1008b2bb9*/
    __dst[8] = *(_QWORD *)&v83[56]; /*0x1008b2bc4*/
    __dst[7] = *(_QWORD *)&v83[48]; /*0x1008b2bcf*/
    v57 = *(_QWORD *)&v83[32]; /*0x1008b2bd3*/
    __dst[6] = *(_QWORD *)&v83[40]; /*0x1008b2be1*/
    __dst[5] = v57; /*0x1008b2be5*/
    __dst[2] = v41; /*0x1008b2be9*/
    __dst[3] = v42; /*0x1008b2bed*/
    __dst[4] = v43; /*0x1008b2bf1*/
    __dst[1] = v40; /*0x1008b2bf5*/
    *__dst = 0x8000000000000000LL; /*0x1008b2c03*/
    v13 = v104; /*0x1008b2c06*/
LABEL_104:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..storage..ProviderIdMigration$GT$$GT$::h09913225f86aed06( /*0x1008b2fd0*/
      &v87,
      v38);
LABEL_105:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v77, v38); /*0x1008b2fdc*/
    goto LABEL_48; /*0x1008b2fe8*/
  }
LABEL_59:
  if ( (int)v98 < 10 ) /*0x1008b28ec*/
  {
    v81 = codexmate_lib::core::relay::storage::migrate_legacy_minimax_m3_official_protocol::hc42c1b9f3e5c76d3( /*0x1008b2905*/
            v77[1],
            v77[2]);
    if ( v81 ) /*0x1008b290f*/
    {
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x1008b2923*/
      {
        v86[0] = &v81; /*0x1008b292c*/
        v86[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008b293a*/
        *(_QWORD *)v83 = &unk_101675C8E; /*0x1008b2948*/
        *(_QWORD *)&v83[8] = 35; /*0x1008b294f*/
        *(_QWORD *)&v83[16] = &unk_101675C8E; /*0x1008b295a*/
        *(_QWORD *)&v83[24] = 35; /*0x1008b2961*/
        *(_QWORD *)&v83[32] = &off_10196D208; /*0x1008b2973*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017C634D, v86, 2, v83); /*0x1008b2994*/
      }
    }
  }
  v44 = v77[2]; /*0x1008b2999*/
  v45 = std::thread::local::LocalKey$LT$T$GT$::with::h2d85312d63c74f41(&off_10196C6D8); /*0x1008b29a7*/
  v106 = v46; /*0x1008b29ac*/
  v47 = v45; /*0x1008b29b0*/
  v48 = (unsigned __int64)v83; /*0x1008b29b3*/
  v49 = 16; /*0x1008b29ba*/
  hashbrown::raw::RawTableInner::fallible_with_capacity::hdcfda39df8718338(v83, 16, v44, 1); /*0x1008b29c7*/
  v105 = v12; /*0x1008b29cc*/
  v80[3] = *(_QWORD *)&v83[24]; /*0x1008b29d7*/
  v80[2] = *(_QWORD *)&v83[16]; /*0x1008b29e5*/
  v80[1] = *(_QWORD *)&v83[8]; /*0x1008b29fa*/
  v80[0] = *(_QWORD *)v83; /*0x1008b2a01*/
  v80[4] = v47; /*0x1008b2a08*/
  v80[5] = v106; /*0x1008b2a13*/
  v50 = v77[1]; /*0x1008b2a1a*/
  v106 = -232 * v44; /*0x1008b2a28*/
  v51 = 8; /*0x1008b2a2c*/
  v52 = 0; /*0x1008b2a32*/
  while ( v106 != v52 ) /*0x1008b2a38*/
  {
    codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997( /*0x1008b2a4f*/
      (unsigned __int8 *)v92,
      *(unsigned __int8 **)(v50 + v51),
      *(_QWORD *)(v50 + v51 + 8));
    if ( v92[0] != 0x8000000000000000LL ) /*0x1008b2a65*/
    {
      v86[2] = v92[2]; /*0x1008b2f60*/
      v86[1] = v92[1]; /*0x1008b2f75*/
      v86[0] = v92[0]; /*0x1008b2f7c*/
      v71 = v50 - v52; /*0x1008b2f94*/
      v12 = v105; /*0x1008b2f97*/
      v13 = v104; /*0x1008b2f9b*/
      codexmate_lib::core::relay::storage::load::_$u7b$$u7b$closure$u7d$$u7d$::hd722fffd39306981(v83, v71, v86, v38); /*0x1008b2f9f*/
LABEL_102:
      qmemcpy(__dst + 1, v83, 0x60u); /*0x1008b2fa4*/
      goto LABEL_103; /*0x1008b2fb4*/
    }
    v49 = *(_QWORD *)(v50 + v51); /*0x1008b2a6b*/
    v48 = (unsigned __int64)v80; /*0x1008b2a75*/
    v53 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1b9e374c111f139c(v80, v49, *(_QWORD *)(v50 + v51 + 8)); /*0x1008b2a7c*/
    v52 -= 232; /*0x1008b2a81*/
    v51 += 232; /*0x1008b2a88*/
    if ( v53 ) /*0x1008b2a91*/
    {
      *(_QWORD *)v83 = v50 - v52 - 232; /*0x1008b2a9d*/
      *(_QWORD *)&v83[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008b2aab*/
      v12 = v105; /*0x1008b2ac7*/
      v13 = v104; /*0x1008b2acb*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, &unk_1017C6199, v83); /*0x1008b2acf*/
      __dst[4] = v78[2]; /*0x1008b2adb*/
      v54 = v78[0]; /*0x1008b2adf*/
      __dst[3] = v78[1]; /*0x1008b2aed*/
      __dst[2] = v54; /*0x1008b2af1*/
      __dst[1] = 9; /*0x1008b2af5*/
LABEL_103:
      *__dst = 0x8000000000000000LL; /*0x1008b2fb7*/
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h996417a273f50da2(v80); /*0x1008b2fcb*/
      goto LABEL_104; /*0x1008b2fcb*/
    }
  }
  if ( (int)v98 < 2 ) /*0x1008b2c13*/
  {
    v12 = v105; /*0x1008b2c2c*/
    v13 = v104; /*0x1008b2c30*/
    v58 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101675D3E, 9, v82); /*0x1008b2c34*/
    if ( !v58 ) /*0x1008b2c3c*/
      goto LABEL_99; /*0x1008b2c3c*/
    if ( *(_BYTE *)v58 != 4 ) /*0x1008b2c45*/
      goto LABEL_99; /*0x1008b2c45*/
    v59 = *(_QWORD *)(v58 + 24); /*0x1008b2c4b*/
    if ( !v59 ) /*0x1008b2c52*/
      goto LABEL_99; /*0x1008b2c52*/
    v60 = *(_QWORD *)(v58 + 16); /*0x1008b2c58*/
    v85 = v60 + 32 * v59; /*0x1008b2c63*/
    LOBYTE(v58) = 1; /*0x1008b2c6a*/
    LODWORD(v99) = v58; /*0x1008b2c6c*/
    v48 = 0; /*0x1008b2c6f*/
    do /*0x1008b2f0f*/
    {
      v101 = v77[2]; /*0x1008b2c7f*/
      v61 = (__int64 *)(v77[1] + 232 * v48 + 8); /*0x1008b2c8a*/
      while ( 1 ) /*0x1008b2cb4*/
      {
        v102 = v61; /*0x1008b2cb4*/
        if ( v48 >= v101 ) /*0x1008b2cbb*/
        {
          v62 = 1; /*0x1008b2cc6*/
          v63 = 0; /*0x1008b2ccb*/
        }
        else
        {
          v62 = *v61; /*0x1008b2cbd*/
          v63 = v61[1]; /*0x1008b2cc0*/
        }
        v90 = (unsigned __int8 *)v62; /*0x1008b2ccd*/
        v91 = v63; /*0x1008b2cd4*/
        v106 = v60; /*0x1008b2ce7*/
        v64 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008b2ceb*/
                &unk_101675D47,
                6,
                v60);
        v49 = v85; /*0x1008b2cf3*/
        if ( v64 ) /*0x1008b2cfd*/
        {
          if ( *(_BYTE *)v64 == 3 ) /*0x1008b2d02*/
          {
            if ( v91 ) /*0x1008b2d0e*/
            {
              v65 = *(_QWORD *)(v64 + 24); /*0x1008b2d10*/
              if ( v65 ) /*0x1008b2d17*/
                break; /*0x1008b2d17*/
            }
          }
        }
        v60 = v106 + 32; /*0x1008b2c95*/
        v61 = v102 + 29; /*0x1008b2c9d*/
        ++v48; /*0x1008b2ca4*/
        if ( v106 + 32 == v85 ) /*0x1008b2caa*/
          goto LABEL_98; /*0x1008b2caa*/
      }
      v66 = *(const void **)(v64 + 16); /*0x1008b2d20*/
      v49 = (__int64)a2; /*0x1008b2d32*/
      codexmate_lib::core::relay::keychain::set_api_key::h0814f45be6d5b783( /*0x1008b2d3b*/
        &v93,
        (__int64)a2,
        v90,
        v91,
        (__int64)v66,
        *(_QWORD *)(v64 + 24));
      if ( v93 == (_QWORD *)0x8000000000000000LL ) /*0x1008b2d51*/
      {
        if ( v48 < v101 ) /*0x1008b2d57*/
        {
          v67 = v102; /*0x1008b2d5d*/
          *((_BYTE *)v102 + 220) = 1; /*0x1008b2d61*/
          v67[10] = 0; /*0x1008b2d68*/
        }
      }
      else
      {
        v92[2] = v95; /*0x1008b2d7c*/
        v92[1] = v94; /*0x1008b2d91*/
        v92[0] = v93; /*0x1008b2d98*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008b2dad*/
        {
          v86[0] = &v90; /*0x1008b2dba*/
          v86[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008b2dc8*/
          v86[2] = v92; /*0x1008b2dd6*/
          v86[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008b2de4*/
          *(_QWORD *)v83 = &unk_101675C8E; /*0x1008b2df2*/
          *(_QWORD *)&v83[8] = 35; /*0x1008b2df9*/
          *(_QWORD *)&v83[16] = &unk_101675C8E; /*0x1008b2e04*/
          *(_QWORD *)&v83[24] = 35; /*0x1008b2e0b*/
          *(_QWORD *)&v83[32] = &off_10196D220; /*0x1008b2e1d*/
          log::__private_api::log::h719f4907c7336ae9(&unk_1017C63B1, v86, 2, v83); /*0x1008b2e3e*/
        }
        if ( v48 < v101 ) /*0x1008b2e47*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v83, v65, 0, 1, 1); /*0x1008b2e64*/
          v101 = *(_QWORD *)&v83[8]; /*0x1008b2e70*/
          if ( v83[0] ) /*0x1008b2e7b*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v101, *(_QWORD *)&v83[16]); /*0x1008b3356*/
          v99 = *(_QWORD *)&v83[16]; /*0x1008b2e88*/
          memcpy(*(void **)&v83[16], v66, v65); /*0x1008b2e92*/
          v68 = v102[8]; /*0x1008b2e9b*/
          if ( v68 ) /*0x1008b2ea2*/
            v38 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102[9], v68, 1); /*0x1008b2eb1*/
          v69 = v102; /*0x1008b2eb6*/
          v102[8] = v101; /*0x1008b2ebe*/
          v69[9] = v99; /*0x1008b2ec6*/
          v69[10] = v65; /*0x1008b2eca*/
        }
        v49 = v92[0]; /*0x1008b2ece*/
        if ( v92[0] ) /*0x1008b2ed8*/
          v38 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92[1], v92[0], 1); /*0x1008b2ee6*/
        LODWORD(v99) = 0; /*0x1008b2eeb*/
      }
      ++v48; /*0x1008b2ef5*/
      v60 = v106 + 32; /*0x1008b2efc*/
      v12 = v105; /*0x1008b2f07*/
      v13 = v104; /*0x1008b2f0b*/
    }
    while ( v106 + 32 != v85 ); /*0x1008b2f0f*/
LABEL_98:
    if ( (v99 & 1) == 0 ) /*0x1008b2f19*/
    {
      LODWORD(v77[36]) = 10; /*0x1008b32fd*/
      v70 = 0; /*0x1008b3307*/
      v72 = 0; /*0x1008b3309*/
      if ( !v103 ) /*0x1008b3316*/
        goto LABEL_114; /*0x1008b3316*/
    }
    else
    {
LABEL_99:
      LODWORD(v77[36]) = 10; /*0x1008b2f1f*/
      v48 = (unsigned __int64)v86; /*0x1008b2f29*/
      v49 = (__int64)a2; /*0x1008b2f37*/
      codexmate_lib::core::relay::storage::save::h56fb60ad12ceed07(v86, a2, v77); /*0x1008b2f3a*/
      if ( LODWORD(v86[0]) == 11 ) /*0x1008b2f46*/
      {
        v70 = v103 != 0; /*0x1008b2f51*/
      }
      else
      {
        qmemcpy(v83, v86, 0x60u); /*0x1008b3060*/
        v49 = (__int64)&v87; /*0x1008b3060*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008b3071*/
        {
          v93 = v83; /*0x1008b3073*/
          v94 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1008b3081*/
          v92[0] = &unk_101675C8E; /*0x1008b308f*/
          v92[1] = 35; /*0x1008b3096*/
          v92[2] = &unk_101675C8E; /*0x1008b30a1*/
          v92[3] = 35; /*0x1008b30a8*/
          v92[4] = &off_10196D238; /*0x1008b30ba*/
          v49 = (__int64)&v93; /*0x1008b30c8*/
          log::__private_api::log::h719f4907c7336ae9(&unk_1017C6427, &v93, 2, v92); /*0x1008b30db*/
        }
        v48 = (unsigned __int64)v83; /*0x1008b30e0*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v83, v38); /*0x1008b30e7*/
        v70 = 0; /*0x1008b30ec*/
      }
      v72 = 1; /*0x1008b30ee*/
      if ( v70 || v103 == 0 ) /*0x1008b30f6*/
        goto LABEL_114; /*0x1008b30fb*/
    }
LABEL_121:
    if ( (((unsigned __int8)v72 ^ 1) & ((int)v98 < 2)) != 0 ) /*0x1008b324a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, v49); /*0x1008b32a8*/
      v75 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(135, 1); /*0x1008b32b7*/
      if ( !v75 ) /*0x1008b32bf*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 135); /*0x1008b3367*/
      v76 = v75; /*0x1008b32c5*/
      memcpy(v75, &unk_101675D4D, 0x87u); /*0x1008b32d7*/
      __dst[1] = 10; /*0x1008b32dc*/
      __dst[2] = 135; /*0x1008b32e4*/
      __dst[3] = v76; /*0x1008b32ec*/
      __dst[4] = 135; /*0x1008b32f0*/
      goto LABEL_103; /*0x1008b32f8*/
    }
    codexmate_lib::core::relay::storage::save::h56fb60ad12ceed07(v83, a2, v77); /*0x1008b325d*/
    if ( *(_DWORD *)v83 != 11 ) /*0x1008b3269*/
      goto LABEL_102; /*0x1008b3269*/
    goto LABEL_123; /*0x1008b3269*/
  }
  v72 = 1; /*0x1008b2ff3*/
  v12 = v105; /*0x1008b2ff9*/
  v13 = v104; /*0x1008b2ffd*/
  if ( LODWORD(v77[36]) != 10 ) /*0x1008b3001*/
  {
    LODWORD(v90) = v77[36]; /*0x1008b3007*/
    LODWORD(v77[36]) = 10; /*0x1008b300d*/
    v48 = (unsigned __int64)v86; /*0x1008b3017*/
    v49 = (__int64)a2; /*0x1008b3025*/
    codexmate_lib::core::relay::storage::save::h56fb60ad12ceed07(v86, a2, v77); /*0x1008b3028*/
    if ( LODWORD(v86[0]) == 11 ) /*0x1008b3034*/
    {
      if ( v103 ) /*0x1008b303f*/
        goto LABEL_123; /*0x1008b303f*/
    }
    else
    {
      qmemcpy(v83, v86, 0x60u); /*0x1008b3167*/
      v49 = (__int64)&v87; /*0x1008b3167*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008b3178*/
      {
        v92[0] = &v90; /*0x1008b3185*/
        v92[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1008b3193*/
        v92[2] = "\n"; /*0x1008b31a1*/
        v92[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1008b31a8*/
        v92[4] = v83; /*0x1008b31af*/
        v92[5] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1008b31bd*/
        v93 = &unk_101675C8E; /*0x1008b31cb*/
        v94 = 35; /*0x1008b31d2*/
        v95 = &unk_101675C8E; /*0x1008b31dd*/
        v96 = 35; /*0x1008b31e4*/
        v97 = &off_10196D250; /*0x1008b31f3*/
        v49 = (__int64)v92; /*0x1008b31fe*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017C645E, v92, 2, &v93); /*0x1008b3211*/
        v12 = v105; /*0x1008b3216*/
        v13 = v104; /*0x1008b321a*/
      }
      v48 = (unsigned __int64)v83; /*0x1008b321e*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v83, v38); /*0x1008b3225*/
    }
  }
  v70 = 0; /*0x1008b322a*/
  if ( v103 ) /*0x1008b3236*/
    goto LABEL_121; /*0x1008b3236*/
LABEL_114:
  if ( v70 && v103 ) /*0x1008b310a*/
  {
LABEL_123:
    v73 = v88; /*0x1008b326f*/
    v74 = &v88[4 * v103]; /*0x1008b327e*/
    do /*0x1008b328a*/
    {
      if ( v73[3].i8[8] ) /*0x1008b3290*/
        v38 = codexmate_lib::core::relay::keychain::cleanup_legacy_provider_key::h654722c8519453b3( /*0x1008b32a1*/
                (__int64)a2,
                v73->i64[1],
                v73[1].i64[0]);
      v73 += 4; /*0x1008b3283*/
    }
    while ( v73 != v74 ); /*0x1008b328a*/
  }
  memcpy(__dst, v77, 0x128u); /*0x1008b3110*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h996417a273f50da2(v80); /*0x1008b312b*/
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..storage..ProviderIdMigration$GT$$GT$::h09913225f86aed06( /*0x1008b3137*/
    &v87,
    v38);
  v13 = v104; /*0x1008b3143*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v82); /*0x1008b3147*/
LABEL_49:
  if ( v12 ) /*0x1008b2694*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x1008b26a1*/
  return __dst; /*0x1008b26a9*/
}