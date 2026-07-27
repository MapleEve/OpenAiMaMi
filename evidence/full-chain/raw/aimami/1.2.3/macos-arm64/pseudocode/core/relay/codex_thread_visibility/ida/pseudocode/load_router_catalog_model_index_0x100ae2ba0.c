// __ZN13codexmate_lib4core5relay23codex_thread_visibility31load_router_catalog_model_index @ 0x100ae2ba0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::load_router_catalog_model_index::hb44b863e0ca931dd(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r15
  _QWORD *v6; // r13
  _QWORD *v7; // r12
  __int128 *v8; // rbx
  _QWORD *v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rsi
  double result; // xmm0_8
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // r14
  __int64 v18; // rsi
  _QWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _BYTE *v26; // rax
  _BYTE *v27; // rbx
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  size_t v33; // r12
  size_t v34; // r14
  void *v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rdx
  size_t v38; // r14
  __int64 v39; // rax
  size_t v40; // r14
  size_t v41; // r14
  __int64 v42; // rax
  size_t v43; // r14
  __int64 v44; // rax
  __int64 v45; // r14
  const __m128i *v46; // r8
  const __m128i *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  char v52; // dl
  unsigned __int64 v53; // r9
  __int64 v54; // rcx
  size_t v55; // rsi
  __int64 v56; // rdi
  __int64 v58; // rcx
  _QWORD *v59; // rdx
  __int64 v60; // rsi
  _QWORD *v61; // rdi
  unsigned __int64 *v62; // rdx
  __int64 v63; // rax
  _QWORD *v64; // rcx
  __int64 v65; // rdi
  _QWORD *v66; // [rsp+8h] [rbp-1F8h] BYREF
  __m128i v67; // [rsp+10h] [rbp-1F0h]
  _QWORD v68[2]; // [rsp+20h] [rbp-1E0h] BYREF
  __int64 v69; // [rsp+30h] [rbp-1D0h] BYREF
  _QWORD *v70; // [rsp+38h] [rbp-1C8h]
  __int64 v71; // [rsp+40h] [rbp-1C0h]
  size_t v72; // [rsp+48h] [rbp-1B8h]
  unsigned __int64 v73; // [rsp+50h] [rbp-1B0h]
  __int64 v74; // [rsp+58h] [rbp-1A8h]
  __m128i v75; // [rsp+60h] [rbp-1A0h]
  _QWORD v76[4]; // [rsp+70h] [rbp-190h] BYREF
  _QWORD *v77; // [rsp+90h] [rbp-170h] BYREF
  __m128i v78; // [rsp+98h] [rbp-168h]
  void *v79; // [rsp+A8h] [rbp-158h]
  _QWORD *v80; // [rsp+B0h] [rbp-150h]
  unsigned __int64 v81; // [rsp+B8h] [rbp-148h]
  __int64 v82; // [rsp+F8h] [rbp-108h]
  __int64 v83; // [rsp+100h] [rbp-100h] BYREF
  _QWORD *v84; // [rsp+108h] [rbp-F8h]
  unsigned __int64 v85; // [rsp+110h] [rbp-F0h]
  unsigned __int64 v86; // [rsp+118h] [rbp-E8h]
  __int64 v87; // [rsp+120h] [rbp-E0h]
  unsigned __int64 v88; // [rsp+128h] [rbp-D8h]
  _QWORD *v89; // [rsp+130h] [rbp-D0h] BYREF
  _QWORD *v90; // [rsp+138h] [rbp-C8h] BYREF
  __m128i v91; // [rsp+140h] [rbp-C0h]
  void *v92; // [rsp+150h] [rbp-B0h]
  _QWORD *v93; // [rsp+158h] [rbp-A8h]
  void *v94; // [rsp+160h] [rbp-A0h]
  __int128 *v95; // [rsp+168h] [rbp-98h] BYREF
  _QWORD *v96; // [rsp+170h] [rbp-90h]
  unsigned __int64 v97; // [rsp+178h] [rbp-88h]
  unsigned __int64 v98; // [rsp+180h] [rbp-80h]
  __int64 v99; // [rsp+188h] [rbp-78h]
  unsigned __int64 v100; // [rsp+190h] [rbp-70h]
  size_t v101; // [rsp+198h] [rbp-68h]
  _QWORD *v102; // [rsp+1A0h] [rbp-60h]
  __int64 v103; // [rsp+1A8h] [rbp-58h]
  _QWORD *v104; // [rsp+1B0h] [rbp-50h]
  void *__src; // [rsp+1B8h] [rbp-48h]
  size_t v106; // [rsp+1C0h] [rbp-40h]
  unsigned __int64 v107; // [rsp+1C8h] [rbp-38h]
  size_t __n; // [rsp+1D0h] [rbp-30h]

  v93 = a1; /*0x100ae2bb4*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100ae2bcf*/
    &v69,
    a2,
    a3,
    "codex_router_catalog.jsonmodels::[AiMaMi][patch-instructions] no donor thread found, using fallback instructionsFoll"
    "ow the user's instructions carefully. Respond helpfully and use tools when appropriate.",
    25);
  v3 = v70; /*0x100ae2bd4*/
  v4 = v71; /*0x100ae2bdb*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v83, v70, v71); /*0x100ae2bef*/
  v5 = v83; /*0x100ae2bfe*/
  v6 = v84; /*0x100ae2c05*/
  if ( __OFSUB__(-v83, 1) ) /*0x100ae2c0f*/
  {
    v76[0] = v84; /*0x100ae2c18*/
    v7 = v3; /*0x100ae2c1f*/
    v90 = v3; /*0x100ae2c22*/
    v91.i64[0] = v4; /*0x100ae2c29*/
    v77 = &v90; /*0x100ae2c37*/
    v78.i64[0] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae2c45*/
    v78.i64[1] = (__int64)v76; /*0x100ae2c53*/
    v79 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100ae2c61*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v95, &unk_1017CB136, &v77); /*0x100ae2c7d*/
    v8 = v95; /*0x100ae2c82*/
    v9 = v96; /*0x100ae2c89*/
    v10 = v97; /*0x100ae2c90*/
    if ( (v76[0] & 3) == 1 ) /*0x100ae2ca6*/
    {
      __n = v76[0] - 1LL; /*0x100ae2cac*/
      v107 = *(_QWORD *)(v76[0] - 1LL); /*0x100ae2cb4*/
      v11 = *(_QWORD *)(v76[0] + 7LL); /*0x100ae2cb8*/
      if ( *(_QWORD *)v11 ) /*0x100ae2cbc*/
        (*(void (__fastcall **)(unsigned __int64))v11)(v107); /*0x100ae2cc9*/
      v12 = *(_QWORD *)(v11 + 8); /*0x100ae2ccf*/
      if ( v12 ) /*0x100ae2cd6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v12, *(_QWORD *)(v11 + 16)); /*0x100ae2cdc*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__n, 24, 8); /*0x100ae2cef*/
    }
    v14 = v93; /*0x100ae2cf4*/
    v93[2] = v8; /*0x100ae2cfb*/
    v14[3] = v9; /*0x100ae2cff*/
    v14[4] = v10; /*0x100ae2d03*/
    v14[1] = 10; /*0x100ae2d07*/
    *v14 = 0x8000000000000001LL; /*0x100ae2d1c*/
    v3 = v7; /*0x100ae2d1f*/
  }
  else
  {
    v77 = v84; /*0x100ae2d2e*/
    v78 = (__m128i)v85; /*0x100ae2d35*/
    v79 = nullptr; /*0x100ae2d47*/
    v80 = v84; /*0x100ae2d52*/
    v81 = v85; /*0x100ae2d59*/
    serde_json::de::from_trait::h51e180b4bb6af5e0(&v95, &v77); /*0x100ae2d6e*/
    if ( (_BYTE)v95 != 6 ) /*0x100ae2d7a*/
    {
      v19 = v96; /*0x100ae2e6b*/
      v90 = v95; /*0x100ae2e72*/
      v76[0] = v95; /*0x100ae2e79*/
      v76[1] = v96; /*0x100ae2e80*/
      v76[2] = v97; /*0x100ae2e87*/
      v76[3] = v98; /*0x100ae2e8e*/
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100ae2e9c*/
      v23 = v20; /*0x100ae2e9e*/
      if ( *(_BYTE *)(v20 + 16) == 1 ) /*0x100ae2ea5*/
      {
        v24 = *(_QWORD *)v20; /*0x100ae2eab*/
        v25 = *(_QWORD *)(v23 + 8); /*0x100ae2eae*/
      }
      else
      {
        v24 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100ae34fc*/
                &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                v19,
                v21,
                v22);
        *(_QWORD *)v23 = v24; /*0x100ae3501*/
        *(_QWORD *)(v23 + 8) = v25; /*0x100ae3504*/
        *(_BYTE *)(v23 + 16) = 1; /*0x100ae3508*/
      }
      v86 = 0; /*0x100ae2ebd*/
      v85 = 0; /*0x100ae2ecb*/
      v84 = nullptr; /*0x100ae2ed9*/
      v83 = (__int64)&xmmword_1015FBEC0; /*0x100ae2ee7*/
      v87 = v24; /*0x100ae2eee*/
      v88 = v25; /*0x100ae2ef5*/
      *(_QWORD *)v23 = v24 + 2; /*0x100ae2f00*/
      v98 = 0; /*0x100ae2f03*/
      v97 = 0; /*0x100ae2f07*/
      v96 = nullptr; /*0x100ae2f0e*/
      v95 = &xmmword_1015FBEC0; /*0x100ae2f15*/
      v99 = v24 + 1; /*0x100ae2f1c*/
      v100 = v25; /*0x100ae2f20*/
      v107 = 0x8000000000000000LL; /*0x100ae2f37*/
      v26 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ae2f3b*/
                       "models::[AiMaMi][patch-instructions] no donor thread found, using fallback instructionsFollow the user's instructions carefully. Respond helpfully and use tools when appropriate.",
                       6,
                       v76);
      v103 = v5; /*0x100ae2f43*/
      v104 = v6; /*0x100ae2f47*/
      if ( v26 ) /*0x100ae2f4b*/
      {
        v27 = nullptr; /*0x100ae2f54*/
        if ( *v26 == 4 ) /*0x100ae2f59*/
          v27 = v26 + 8; /*0x100ae2f59*/
      }
      else
      {
        v27 = nullptr; /*0x100ae2f5f*/
      }
      v107 = 0x8000000000000000LL; /*0x100ae2f61*/
      v28 = 0; /*0x100ae2f65*/
      while ( 1 ) /*0x100ae30f5*/
      {
        while ( 1 ) /*0x100ae30f5*/
        {
          do /*0x100ae2fbd*/
          {
            if ( !v28 || v28 == v5 ) /*0x100ae2f78*/
            {
              if ( !v27 || (v29 = *((_QWORD *)v27 + 2)) == 0 ) /*0x100ae2f8a*/
              {
                v62 = v93; /*0x100ae3442*/
                v93[8] = v88; /*0x100ae3449*/
                v62[7] = v87; /*0x100ae3454*/
                v62[6] = v86; /*0x100ae345f*/
                v62[5] = v85; /*0x100ae346a*/
                v63 = v83; /*0x100ae346e*/
                v62[4] = (unsigned __int64)v84; /*0x100ae347c*/
                v62[3] = v63; /*0x100ae3480*/
                v64 = v96; /*0x100ae348b*/
                v62[9] = (unsigned __int64)v95; /*0x100ae3492*/
                v62[10] = (unsigned __int64)v64; /*0x100ae3496*/
                v62[11] = v97; /*0x100ae34a1*/
                v62[12] = v98; /*0x100ae34a9*/
                v62[13] = v99; /*0x100ae34b1*/
                v62[14] = v100; /*0x100ae34b9*/
                *v62 = v107; /*0x100ae34c1*/
                v62[1] = v82; /*0x100ae34cb*/
                v62[2] = v72; /*0x100ae34d6*/
                v5 = v103; /*0x100ae34e1*/
                v6 = v104; /*0x100ae34e5*/
                result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v76); /*0x100ae34e9*/
                if ( !v5 ) /*0x100ae34f1*/
                  goto LABEL_65; /*0x100ae34f1*/
LABEL_64:
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100ae3400*/
                goto LABEL_65; /*0x100ae340b*/
              }
              v28 = *((_QWORD *)v27 + 1); /*0x100ae2f90*/
              v5 = v28 + 32 * v29; /*0x100ae2f98*/
              v27 = nullptr; /*0x100ae2f9b*/
            }
            v30 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ae2fac*/
                    &unk_1015E3B3C,
                    4,
                    v28);
            v28 += 32; /*0x100ae2fb1*/
          }
          while ( !v30 || *(_BYTE *)v30 != 3 ); /*0x100ae2fbd*/
          v31 = *(_QWORD *)(v30 + 24); /*0x100ae2fbf*/
          if ( v31 < 0 ) /*0x100ae2fc6*/
          {
            v65 = 0; /*0x100ae3359*/
            goto LABEL_61; /*0x100ae3359*/
          }
          __n = *(_QWORD *)(v30 + 24); /*0x100ae2fcc*/
          __src = *(void **)(v30 + 16); /*0x100ae2fd4*/
          v102 = v3; /*0x100ae2fd8*/
          if ( v31 ) /*0x100ae2fdc*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1015E3B3C, 4); /*0x100ae2fe1*/
            v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100ae2fef*/
            if ( !v32 ) /*0x100ae2ff7*/
            {
              v101 = __n; /*0x100ae3515*/
              v65 = 1; /*0x100ae351c*/
              goto LABEL_61; /*0x100ae3521*/
            }
          }
          else
          {
            v32 = 1; /*0x100ae2ffe*/
          }
          v33 = v32; /*0x100ae3003*/
          v34 = __n; /*0x100ae300d*/
          memcpy((void *)v32, __src, __n); /*0x100ae3014*/
          v77 = (_QWORD *)v34; /*0x100ae3019*/
          v101 = v33; /*0x100ae3020*/
          v78.i64[0] = v33; /*0x100ae3024*/
          v78.i64[1] = v34; /*0x100ae302b*/
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v83, &v77); /*0x100ae304a*/
          v3 = v102; /*0x100ae304f*/
          core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2( /*0x100ae306f*/
            &v77,
            __src,
            __n,
            "::[AiMaMi][patch-instructions] no donor thread found, using fallback instructionsFollow the user's instructions carefully. Respond helpfully and use tools when appropriate.",
            2);
          _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x100ae3082*/
            &v90,
            &v77);
          if ( (_DWORD)v90 == 1 /*0x100ae30c7*/
            && v91.i64[0] >= 0xDuLL
            && !(*(_QWORD *)__src ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)__src + 5) ^ 0x5F79616C65725F69LL) )
          {
            v35 = (void *)(__n - v91.i64[1]); /*0x100ae30db*/
            v36 = (__int64)__src + v91.i64[1]; /*0x100ae30de*/
            v94 = (char *)__src + v91.i64[1]; /*0x100ae30e2*/
            v106 = __n - v91.i64[1]; /*0x100ae30e9*/
            core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85( /*0x100ae30ed*/
              (char *)__src + v91.i64[1],
              __n - v91.i64[1]);
            if ( v37 ) /*0x100ae30f5*/
              break; /*0x100ae30f5*/
          }
        }
        if ( v107 == 0x8000000000000000LL ) /*0x100ae30ff*/
        {
          v38 = __n; /*0x100ae3101*/
          if ( __n ) /*0x100ae3108*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v35); /*0x100ae310a*/
            v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v38, 1); /*0x100ae3117*/
            if ( !v39 ) /*0x100ae311f*/
            {
              v107 = 0x8000000000000000LL; /*0x100ae353b*/
              v101 = __n; /*0x100ae3543*/
              v65 = 1; /*0x100ae3547*/
LABEL_61:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v65, v101); /*0x100ae335b*/
            }
            v36 = v39; /*0x100ae3125*/
          }
          else
          {
            v36 = 1; /*0x100ae312a*/
          }
          v82 = v36; /*0x100ae312f*/
          v35 = __src; /*0x100ae3136*/
          v40 = __n; /*0x100ae313a*/
          memcpy((void *)v36, __src, __n); /*0x100ae3141*/
          v72 = v40; /*0x100ae3146*/
          v107 = v40; /*0x100ae314d*/
        }
        v41 = v106; /*0x100ae3151*/
        if ( v106 ) /*0x100ae3158*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v35); /*0x100ae3160*/
          v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v106, 1); /*0x100ae316e*/
          if ( !v42 ) /*0x100ae3176*/
          {
            v101 = v106; /*0x100ae352a*/
            v65 = 1; /*0x100ae3531*/
            goto LABEL_61; /*0x100ae3536*/
          }
          v41 = v106; /*0x100ae3182*/
        }
        else
        {
          v42 = 1; /*0x100ae3188*/
        }
        v75.i64[0] = v42; /*0x100ae318d*/
        memcpy((void *)v42, v94, v41); /*0x100ae31a1*/
        v90 = (_QWORD *)v41; /*0x100ae31a6*/
        v91.i64[0] = v75.i64[0]; /*0x100ae31b4*/
        v91.i64[1] = v41; /*0x100ae31bb*/
        hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::hb9ee5c122a241cdc( /*0x100ae31d7*/
          &v77,
          &v95,
          &v90);
        v3 = v102; /*0x100ae31dc*/
        if ( v77 != (_QWORD *)0x8000000000000000LL ) /*0x100ae31ea*/
        {
          v106 = (size_t)v77; /*0x100ae31f0*/
          v75 = v78; /*0x100ae31fb*/
          v94 = v79; /*0x100ae3209*/
          v73 = (unsigned __int64)v80; /*0x100ae3217*/
          v43 = __n; /*0x100ae321e*/
          if ( __n ) /*0x100ae3225*/
          {
            v74 = v78.i64[0]; /*0x100ae322e*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v77, &v95); /*0x100ae3235*/
            v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v43, 1); /*0x100ae3242*/
            if ( !v44 ) /*0x100ae324a*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x100ae3561*/
            v45 = v44; /*0x100ae3250*/
          }
          else
          {
            v45 = 1; /*0x100ae3255*/
          }
          memcpy((void *)v45, __src, __n); /*0x100ae3266*/
          v46 = (const __m128i *)v94; /*0x100ae326b*/
          v47 = *(const __m128i **)v94; /*0x100ae3272*/
          v48 = *((_QWORD *)v94 + 1); /*0x100ae3275*/
          v49 = v73 & v48; /*0x100ae3283*/
          _RSI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v94 + (v73 & v48)))); /*0x100ae328b*/
          if ( !(_DWORD)_RSI ) /*0x100ae3291*/
          {
            v56 = 16; /*0x100ae3322*/
            do /*0x100ae333c*/
            {
              v49 = v48 & (v56 + v49); /*0x100ae332a*/
              _RSI = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v47 + v49))); /*0x100ae3332*/
              v56 += 16; /*0x100ae3336*/
            }
            while ( !(_DWORD)_RSI ); /*0x100ae333c*/
          }
          __asm { tzcnt esi, esi } /*0x100ae3297*/
          _RSI = v48 & (v49 + _RSI); /*0x100ae329e*/
          v52 = v47->i8[_RSI]; /*0x100ae32a1*/
          if ( v52 >= 0 ) /*0x100ae32a7*/
          {
            _EDX = _mm_movemask_epi8(_mm_load_si128(v47)); /*0x100ae3348*/
            __asm { tzcnt esi, edx } /*0x100ae334c*/
            v52 = v47->i8[_RSI]; /*0x100ae3350*/
          }
          v53 = v73 >> 57; /*0x100ae32ad*/
          v47->i8[_RSI] = v73 >> 57; /*0x100ae32b8*/
          v47[1].i8[v48 & (_RSI - 16)] = v53; /*0x100ae32bc*/
          v54 = -3 * _RSI; /*0x100ae32c8*/
          v47[v54 - 3].i64[0] = v106; /*0x100ae32d6*/
          *(__m128i *)((char *)&v47[v54 - 2] - 8) = v75; /*0x100ae32e2*/
          v55 = __n; /*0x100ae32e7*/
          *((_QWORD *)&v47[v54 - 1] - 1) = __n; /*0x100ae32eb*/
          v47[v54 - 1].i64[0] = v45; /*0x100ae32f0*/
          v47[v54 - 1].i64[1] = v55; /*0x100ae32f5*/
          v46[1] = _mm_sub_epi64( /*0x100ae3313*/
                     _mm_loadu_si128(v46 + 1),
                     _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015FB9F0), v52 & 1, 0));
          v3 = v102; /*0x100ae3319*/
        }
      }
    }
    v89 = v96; /*0x100ae2d87*/
    v102 = v3; /*0x100ae2d8e*/
    v68[0] = v3; /*0x100ae2d92*/
    v68[1] = v4; /*0x100ae2d99*/
    v77 = v68; /*0x100ae2da7*/
    v78.i64[0] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ae2db5*/
    v78.i64[1] = (__int64)&v89; /*0x100ae2dc3*/
    v79 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100ae2dd1*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v66, &unk_1017CB11A, &v77); /*0x100ae2ded*/
    v78 = v67; /*0x100ae2e0e*/
    v77 = v66; /*0x100ae2e15*/
    v17 = v89; /*0x100ae2e1c*/
    if ( *v89 == 1 ) /*0x100ae2e2a*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3( /*0x100ae3375*/
        v89 + 1,
        &unk_1017CB11A,
        v15,
        v67.i64[0],
        v16);
    }
    else if ( !*v89 ) /*0x100ae2e23*/
    {
      v18 = v89[2]; /*0x100ae2e39*/
      if ( v18 ) /*0x100ae2e40*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89[1], v18, 1); /*0x100ae2e4f*/
    }
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 40, 8); /*0x100ae3387*/
    v86 = (unsigned __int64)v79; /*0x100ae3393*/
    v58 = v78.i64[1]; /*0x100ae339a*/
    v85 = v78.u64[1]; /*0x100ae33a1*/
    v59 = v77; /*0x100ae33a8*/
    v60 = v78.i64[0]; /*0x100ae33af*/
    v90 = v77; /*0x100ae33b6*/
    v91 = v78; /*0x100ae33bd*/
    v92 = v79; /*0x100ae33cb*/
    v61 = v93; /*0x100ae33d2*/
    v93[5] = v79; /*0x100ae33d9*/
    v61[4] = v58; /*0x100ae33dd*/
    v61[3] = v60; /*0x100ae33e1*/
    v61[2] = v59; /*0x100ae33e5*/
    v61[1] = 10; /*0x100ae33e9*/
    *v61 = 0x8000000000000001LL; /*0x100ae33f4*/
    v3 = v102; /*0x100ae33fa*/
    if ( v5 ) /*0x100ae33fe*/
      goto LABEL_64; /*0x100ae33fe*/
  }
LABEL_65:
  if ( v69 ) /*0x100ae341a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v69, 1); /*0x100ae3424*/
  return result; /*0x100ae3429*/
}