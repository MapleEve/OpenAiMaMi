// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND expand_aimami_compactions_for_upstream node 0x1005bb1d0 depth=0
_QWORD *__fastcall codexmate_lib::core::relay::proxy_server::expand_aimami_compactions_for_upstream::h1038f9b56f0b9e71(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r13
  __int8 v15; // al
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // kr00_16
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  const __m128i *v24; // rdx
  __m128i v25; // xmm1
  __int64 v26; // rax
  size_t v27; // rsi
  __int64 v28; // rdx
  _DWORD *v29; // rax
  _DWORD *v30; // rax
  _DWORD *v31; // rax
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdi
  _QWORD *v37; // rbx
  _QWORD *v38; // rdi
  __int64 i; // r13
  __int64 *v40; // rcx
  _QWORD v42[3]; // [rsp+8h] [rbp-1F8h] BYREF
  _QWORD v43[3]; // [rsp+20h] [rbp-1E0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-1C8h]
  size_t v45; // [rsp+40h] [rbp-1C0h]
  void *__src; // [rsp+48h] [rbp-1B8h]
  __int64 v47; // [rsp+50h] [rbp-1B0h]
  unsigned __int64 v48; // [rsp+58h] [rbp-1A8h]
  _BYTE v49[15]; // [rsp+60h] [rbp-1A0h]
  __int64 v50; // [rsp+70h] [rbp-190h] BYREF
  __int128 v51; // [rsp+78h] [rbp-188h]
  _QWORD v52[3]; // [rsp+88h] [rbp-178h] BYREF
  __m256i v53; // [rsp+A0h] [rbp-160h] BYREF
  __m256i v54; // [rsp+C0h] [rbp-140h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-120h] BYREF
  __int128 v56; // [rsp+E8h] [rbp-118h]
  _BYTE v57[31]; // [rsp+F8h] [rbp-108h] BYREF
  __int128 v58; // [rsp+118h] [rbp-E8h] BYREF
  __int64 v59; // [rsp+128h] [rbp-D8h]
  _QWORD *v60; // [rsp+130h] [rbp-D0h]
  __int64 *v61; // [rsp+138h] [rbp-C8h]
  size_t __n; // [rsp+140h] [rbp-C0h]
  __int128 v63; // [rsp+148h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+158h] [rbp-A8h]
  __int64 v65; // [rsp+160h] [rbp-A0h]
  __int64 v66; // [rsp+168h] [rbp-98h] BYREF
  __int64 v67; // [rsp+170h] [rbp-90h]
  __int64 v68; // [rsp+178h] [rbp-88h]
  __int64 v69; // [rsp+180h] [rbp-80h]
  __m256i v70; // [rsp+188h] [rbp-78h] BYREF
  _DWORD *v71; // [rsp+1A8h] [rbp-58h]
  __m256i v72; // [rsp+1B0h] [rbp-50h] BYREF
  __int64 v73; // [rsp+1D0h] [rbp-30h]

  v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522("input", 5, a2); /*0x1005bb1f9*/
  v4 = (_QWORD *)v3; /*0x1005bb1fe*/
  if ( v3 && *(_BYTE *)v3 == 4 ) /*0x1005bb20b*/
  {
    v5 = *(_QWORD *)(v3 + 24); /*0x1005bb20d*/
    v61 = a2; /*0x1005bb214*/
    if ( v5 ) /*0x1005bb21b*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005bb224*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32 * v5, 8u); /*0x1005bb231*/
      if ( !v6 ) /*0x1005bb239*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 32 * v5); /*0x1005bbd8b*/
      v7 = v4[3]; /*0x1005bb23f*/
    }
    else
    {
      v6 = 8; /*0x1005bb261*/
      v7 = 0; /*0x1005bb266*/
    }
    *(_QWORD *)&v63 = v5; /*0x1005bb268*/
    *((_QWORD *)&v63 + 1) = v6; /*0x1005bb26f*/
    v64 = 0; /*0x1005bb276*/
    v10 = v4[1]; /*0x1005bb281*/
    v11 = v4; /*0x1005bb285*/
    v12 = v4[2]; /*0x1005bb288*/
    v11[1] = 0; /*0x1005bb28c*/
    v11[2] = 8; /*0x1005bb294*/
    v60 = v11; /*0x1005bb29c*/
    v11[3] = 0; /*0x1005bb2a3*/
    v13 = v12 + 32 * v7; /*0x1005bb2b2*/
    v66 = v12; /*0x1005bb2b5*/
    v67 = v12; /*0x1005bb2bc*/
    v68 = v10; /*0x1005bb2c3*/
    v69 = v13; /*0x1005bb2ca*/
    if ( v7 ) /*0x1005bb2d1*/
    {
      v14 = v12 + 32; /*0x1005bb2de*/
      while ( 1 ) /*0x1005bb2f0*/
      {
        v15 = *(_BYTE *)(v14 - 32); /*0x1005bb2f0*/
        *(_QWORD *)&v49[7] = *(_QWORD *)(v14 - 8); /*0x1005bb2f9*/
        *(_QWORD *)v49 = *(_QWORD *)(v14 - 15); /*0x1005bb304*/
        v48 = *(_QWORD *)(v14 - 23); /*0x1005bb30f*/
        v47 = *(_QWORD *)(v14 - 31); /*0x1005bb31a*/
        if ( v15 == 6 ) /*0x1005bb323*/
        {
LABEL_64:
          v67 = v14; /*0x1005bbb9e*/
          break; /*0x1005bbb9e*/
        }
        v53.i8[0] = v15; /*0x1005bb329*/
        v53.i64[3] = *(_QWORD *)&v49[7]; /*0x1005bb336*/
        *(__int128 *)((char *)v53.i128 + 9) = __PAIR128__(*(unsigned __int64 *)v49, v48); /*0x1005bb353*/
        *(__int64 *)((char *)v53.i64 + 1) = v47; /*0x1005bb357*/
        v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005bb36d*/
                "typeplan_type",
                4u,
                (__int64)&v53);
        if ( v16 ) /*0x1005bb375*/
        {
          if ( *(_BYTE *)v16 == 3 /*0x1005bb3a1*/
            && *(_QWORD *)(v16 + 24) == 10
            && !(**(_QWORD **)(v16 + 16) ^ 0x69746361706D6F63LL
               | *(unsigned __int16 *)(*(_QWORD *)(v16 + 16) + 8LL) ^ 0x6E6FLL) )
          {
            v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005bb444*/
                    "encrypted_contentrouterlocal compact compatibility responseno relay provider configured for codexx-a"
                    "imami-routerelay-takeover-local-fallbackall codex relay providers failed; please check provider conf"
                    "ig / networkbuild takeover fallback sse body failed",
                    0x11u,
                    (__int64)&v53);
            if ( v22 ) /*0x1005bb44c*/
            {
              if ( *(_BYTE *)v22 == 3 ) /*0x1005bb455*/
              {
                v23 = *(_QWORD *)(v22 + 24); /*0x1005bb45b*/
                if ( v23 >= 0x12 ) /*0x1005bb463*/
                {
                  v24 = *(const __m128i **)(v22 + 16); /*0x1005bb469*/
                  v25 = _mm_or_si128( /*0x1005bb489*/
                          _mm_xor_si128(_mm_cvtsi32_si128(v24[1].u16[0]), (__m128i)xmmword_1012C9CD0),
                          _mm_xor_si128(_mm_loadu_si128(v24), (__m128i)xmmword_1012C9CC0));
                  if ( _mm_testz_si128(v25, v25) ) /*0x1005bb48d*/
                  {
                    base64::engine::Engine::decode::inner::h6a6fd532ed40bccc(&v72, "", &v24[1].i16[1], v23 - 18); /*0x1005bb4aa*/
                    v73 = v72.i64[0]; /*0x1005bb4b3*/
                    if ( !__OFSUB__(-v72.i64[0], 1) ) /*0x1005bb4ba*/
                    {
                      v65 = v72.i64[1]; /*0x1005bb4c8*/
                      v72.i128[0] = *(__int128 *)((char *)v72.i128 + 8); /*0x1005bb4cf*/
                      v72.i128[1] = 0u; /*0x1005bb4e3*/
                      serde_json::de::from_trait::h28ab99648eaf8581(&v70, &v72); /*0x1005bb4f1*/
                      if ( v70.i8[0] == 6 ) /*0x1005bb4fc*/
                      {
                        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c((__int64 **)&v70.i64[1]); /*0x1005bb502*/
                        if ( v73 ) /*0x1005bb50e*/
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005bb520*/
                      }
                      else
                      {
                        v54 = v70; /*0x1005bb539*/
                        v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005bb56c*/
                                &unk_1012CAA19,
                                7u,
                                (__int64)&v54);
                        if ( v26 && *(_BYTE *)v26 == 3 ) /*0x1005bb57d*/
                        {
                          v27 = *(_QWORD *)(v26 + 24); /*0x1005bb587*/
                          __src = *(void **)(v26 + 16); /*0x1005bb58b*/
                          __n = v27; /*0x1005bb592*/
                          core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a( /*0x1005bb599*/
                            (unsigned __int8 *)__src,
                            v27);
                          v71 = (_DWORD *)0x8000000000000000LL; /*0x1005bb5a8*/
                          if ( v28 ) /*0x1005bb5af*/
                          {
                            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h384b07dd33e8b3b5( /*0x1005bb5c8*/
                              v72.i64,
                              __n,
                              0,
                              1u,
                              1);
                            v71 = (_DWORD *)v72.i64[1]; /*0x1005bb5d1*/
                            if ( v72.i8[0] ) /*0x1005bb5d9*/
                            {
                              v67 = v14; /*0x1005bbd6d*/
                              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f((__int64)v71, v72.i64[2]); /*0x1005bbd7c*/
                            }
                            v44 = v72.i64[2]; /*0x1005bb5e3*/
                            memcpy((void *)v72.i64[2], __src, __n); /*0x1005bb5f8*/
                            v45 = __n; /*0x1005bb604*/
                          }
                        }
                        else
                        {
                          v71 = (_DWORD *)0x8000000000000000LL; /*0x1005bb617*/
                        }
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v54); /*0x1005bb622*/
                        if ( v73 ) /*0x1005bb62e*/
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005bb63c*/
                        if ( v71 != (_DWORD *)0x8000000000000000LL ) /*0x1005bb652*/
                        {
                          v52[0] = v71; /*0x1005bb658*/
                          v52[1] = v44; /*0x1005bb666*/
                          v52[2] = v45; /*0x1005bb674*/
                          v55 = 0; /*0x1005bb67b*/
                          *((_QWORD *)&v56 + 1) = 0; /*0x1005bb686*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005bb691*/
                          v73 = 4; /*0x1005bb69b*/
                          v29 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1005bb6a9*/
                          if ( !v29 ) /*0x1005bb6b1*/
                            goto LABEL_79; /*0x1005bb6b1*/
                          *v29 = 1701869940; /*0x1005bb6b7*/
                          *(_QWORD *)v57 = 4; /*0x1005bb6bd*/
                          v73 = (__int64)v29; /*0x1005bb6c8*/
                          *(_QWORD *)&v57[8] = v29; /*0x1005bb6cc*/
                          *(_QWORD *)&v57[16] = 4; /*0x1005bb6d3*/
                          serde_json::value::to_value::hface210696658453(&v72, &off_101534060); /*0x1005bb6e8*/
                          if ( v72.i8[0] == 6 ) /*0x1005bb6f1*/
                          {
                            v67 = v14; /*0x1005bbc79*/
                            v70.i64[0] = v72.i64[1]; /*0x1005bbc84*/
                            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005bbca6*/
                              (__int64)&anon_1f22c03b288e649fafb3d21192ed4cff_855,
                              43,
                              (__int64)&v70,
                              (__int64)&off_1015348B0,
                              (__int64)&off_101534070);
                          }
                          v70 = v72; /*0x1005bb703*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1005bb72c*/
                            &v72,
                            &v55,
                            v57,
                            &v70);
                          if ( v72.i8[0] != 6 ) /*0x1005bb735*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v72); /*0x1005bb73a*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005bb73f*/
                          v73 = 4; /*0x1005bb749*/
                          v30 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1005bb757*/
                          if ( !v30 ) /*0x1005bb75f*/
                            goto LABEL_79; /*0x1005bb75f*/
                          *v30 = 1701605234; /*0x1005bb765*/
                          *(_QWORD *)v57 = 4; /*0x1005bb76b*/
                          v73 = (__int64)v30; /*0x1005bb776*/
                          *(_QWORD *)&v57[8] = v30; /*0x1005bb77a*/
                          *(_QWORD *)&v57[16] = 4; /*0x1005bb781*/
                          serde_json::value::to_value::hface210696658453(&v72, &off_101534088); /*0x1005bb796*/
                          if ( v72.i8[0] == 6 ) /*0x1005bb79f*/
                          {
                            v67 = v14; /*0x1005bbcb0*/
                            v70.i64[0] = v72.i64[1]; /*0x1005bbcbb*/
                            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005bbcdd*/
                              (__int64)&anon_1f22c03b288e649fafb3d21192ed4cff_855,
                              43,
                              (__int64)&v70,
                              (__int64)&off_1015348B0,
                              (__int64)&off_101534070);
                          }
                          v70 = v72; /*0x1005bb7b1*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1005bb7da*/
                            &v72,
                            &v55,
                            v57,
                            &v70);
                          if ( v72.i8[0] != 6 ) /*0x1005bb7e3*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v72); /*0x1005bb7e8*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005bb7ed*/
                          v73 = 7; /*0x1005bb7f7*/
                          v31 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1005bb805*/
                          if ( !v31 ) /*0x1005bb80d*/
                          {
LABEL_79:
                            v67 = v14; /*0x1005bbd92*/
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v73); /*0x1005bbda2*/
                          }
                          *(_DWORD *)((char *)v31 + 3) = 1953391988; /*0x1005bb813*/
                          *v31 = 1953394531; /*0x1005bb81a*/
                          v43[0] = 7; /*0x1005bb820*/
                          v65 = (__int64)v31; /*0x1005bb82b*/
                          v43[1] = v31; /*0x1005bb832*/
                          v43[2] = 7; /*0x1005bb839*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005bb844*/
                          v73 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x20u, 8u); /*0x1005bb858*/
                          if ( !v73 ) /*0x1005bb85f*/
                          {
                            v67 = v14; /*0x1005bbce7*/
                            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1005bbcf8*/
                          }
                          v50 = 0; /*0x1005bb865*/
                          *((_QWORD *)&v51 + 1) = 0; /*0x1005bb870*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005bb87b*/
                          v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1005bb88a*/
                          if ( !v32 ) /*0x1005bb892*/
                            goto LABEL_80; /*0x1005bb892*/
                          *v32 = 1701869940; /*0x1005bb898*/
                          *(_QWORD *)&v58 = 4; /*0x1005bb89e*/
                          v71 = v32; /*0x1005bb8a9*/
                          *((_QWORD *)&v58 + 1) = v32; /*0x1005bb8ad*/
                          v59 = 4; /*0x1005bb8b4*/
                          serde_json::value::to_value::hface210696658453(&v72, &off_101534098); /*0x1005bb8c9*/
                          if ( v72.i8[0] == 6 ) /*0x1005bb8d2*/
                          {
                            v67 = v14; /*0x1005bbd02*/
                            v70.i64[0] = v72.i64[1]; /*0x1005bbd0d*/
                            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005bbd2f*/
                              (__int64)&anon_1f22c03b288e649fafb3d21192ed4cff_855,
                              43,
                              (__int64)&v70,
                              (__int64)&off_1015348B0,
                              (__int64)&off_101534070);
                          }
                          v70 = v72; /*0x1005bb8e4*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1005bb90d*/
                            &v72,
                            &v50,
                            &v58,
                            &v70);
                          if ( v72.i8[0] != 6 ) /*0x1005bb916*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v72); /*0x1005bb91b*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005bb920*/
                          v33 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1005bb92f*/
                          if ( !v33 ) /*0x1005bb937*/
                          {
LABEL_80:
                            v67 = v14; /*0x1005bbda9*/
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1005bbdba*/
                          }
                          *v33 = 1954047348; /*0x1005bb93d*/
                          v42[0] = 4; /*0x1005bb943*/
                          v71 = v33; /*0x1005bb94e*/
                          v42[1] = v33; /*0x1005bb952*/
                          v42[2] = 4; /*0x1005bb959*/
                          v70.i64[0] = (__int64)v52; /*0x1005bb96b*/
                          v70.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005bb976*/
                          alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1005bb988*/
                            (size_t *)&v72,
                            byte_10122B97A,
                            (unsigned __int64)&v70);
                          v58 = v72.i128[0]; /*0x1005bb995*/
                          v59 = v72.i64[2]; /*0x1005bb9a7*/
                          serde_json::value::to_value::ha3b8839fd7e79eae(&v72, &v58); /*0x1005bb9b8*/
                          if ( v72.i8[0] == 6 ) /*0x1005bb9c1*/
                          {
                            v67 = v14; /*0x1005bbd39*/
                            v70.i64[0] = v72.i64[1]; /*0x1005bbd44*/
                            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005bbd66*/
                              (__int64)&anon_1f22c03b288e649fafb3d21192ed4cff_855,
                              43,
                              (__int64)&v70,
                              (__int64)&off_1015348B0,
                              (__int64)&off_101534070);
                          }
                          v70 = v72; /*0x1005bb9d3*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1005bb9fc*/
                            &v72,
                            &v50,
                            v42,
                            &v70);
                          if ( v72.i8[0] != 6 ) /*0x1005bba05*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v72); /*0x1005bba0a*/
                          if ( (_QWORD)v58 ) /*0x1005bba19*/
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005bba27*/
                          v72.i64[0] = v50; /*0x1005bba3a*/
                          *(_OWORD *)&v57[15] = v51; /*0x1005bba58*/
                          *(_QWORD *)&v57[7] = v50; /*0x1005bba5c*/
                          v34 = (_QWORD *)v73; /*0x1005bba5f*/
                          *(_BYTE *)v73 = 5; /*0x1005bba63*/
                          v34[3] = *(_QWORD *)&v57[23]; /*0x1005bba6d*/
                          *(_QWORD *)((char *)v34 + 17) = *(_QWORD *)&v57[16]; /*0x1005bba78*/
                          v35 = *(_QWORD *)v57; /*0x1005bba7c*/
                          *(_QWORD *)((char *)v34 + 9) = *(_QWORD *)&v57[8]; /*0x1005bba8a*/
                          *(_QWORD *)((char *)v34 + 1) = v35; /*0x1005bba8e*/
                          v72.i64[1] = 1; /*0x1005bba92*/
                          v72.i64[2] = (__int64)v34; /*0x1005bba9a*/
                          v72.i64[3] = 1; /*0x1005bba9e*/
                          v72.i8[0] = 4; /*0x1005bbaa6*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1005bbabf*/
                            &v70,
                            &v55,
                            v43,
                            &v72);
                          if ( v70.i8[0] != 6 ) /*0x1005bbac8*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v70); /*0x1005bbace*/
                          v54.i128[1] = v56; /*0x1005bbaf3*/
                          v54.i64[1] = v55; /*0x1005bbaf7*/
                          v54.i8[0] = 5; /*0x1005bbafb*/
                          v73 = v64; /*0x1005bbb09*/
                          if ( v64 == (_QWORD)v63 ) /*0x1005bbb14*/
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v63); /*0x1005bbb1d*/
                          v36 = v73; /*0x1005bbb29*/
                          *(__m256i *)(*((_QWORD *)&v63 + 1) + 32 * v73) = v54; /*0x1005bbb47*/
                          v64 = v36 + 1; /*0x1005bbb66*/
                          if ( v52[0] ) /*0x1005bbb77*/
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005bbb85*/
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v53); /*0x1005bbb91*/
                          goto LABEL_18; /*0x1005bbb96*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v17 = v64; /*0x1005bb3b0*/
        if ( v64 == (_QWORD)v63 ) /*0x1005bb3be*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v63); /*0x1005bb3c7*/
        v18 = *((_QWORD *)&v63 + 1); /*0x1005bb3cc*/
        v19 = 32 * v17; /*0x1005bb3d6*/
        v20 = v53.i128[0]; /*0x1005bb3e1*/
        *(_OWORD *)(*((_QWORD *)&v63 + 1) + v19 + 16) = v53.i128[1]; /*0x1005bb3fb*/
        *(_OWORD *)(v18 + v19) = v20; /*0x1005bb405*/
        v64 = v17 + 1; /*0x1005bb40c*/
LABEL_18:
        v21 = v14 - 32; /*0x1005bb417*/
        v14 += 32; /*0x1005bb41b*/
        if ( v21 + 32 == v13 ) /*0x1005bb426*/
        {
          v14 = v13; /*0x1005bbb9b*/
          goto LABEL_64; /*0x1005bb42c*/
        }
      }
    }
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2493b1aa827ad809(&v66); /*0x1005bbba5*/
    v37 = v60 + 1; /*0x1005bbbbb*/
    v72.i64[2] = v64; /*0x1005bbbc6*/
    v72.i128[0] = v63; /*0x1005bbbdc*/
    v38 = (_QWORD *)v60[2]; /*0x1005bbbe0*/
    for ( i = v60[3] + 1LL; i != 1; --i ) /*0x1005bbbe8*/
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v38); /*0x1005bbbfd*/
      v38 += 4; /*0x1005bbc02*/
    }
    if ( *v37 ) /*0x1005bbc07*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005bbc23*/
    v37[2] = v72.i64[2]; /*0x1005bbc2c*/
    *(_OWORD *)v37 = v72.i128[0]; /*0x1005bbc3c*/
    v40 = v61; /*0x1005bbc3f*/
    a1[3] = v61[3]; /*0x1005bbc4a*/
    a1[2] = v40[2]; /*0x1005bbc52*/
    v8 = *v40; /*0x1005bbc56*/
    v9 = v40[1]; /*0x1005bbc59*/
  }
  else
  {
    a1[3] = a2[3]; /*0x1005bb249*/
    a1[2] = a2[2]; /*0x1005bb251*/
    v8 = *a2; /*0x1005bb255*/
    v9 = a2[1]; /*0x1005bb258*/
  }
  a1[1] = v9; /*0x1005bbc5d*/
  *a1 = v8; /*0x1005bbc61*/
  return a1; /*0x1005bbc67*/
}