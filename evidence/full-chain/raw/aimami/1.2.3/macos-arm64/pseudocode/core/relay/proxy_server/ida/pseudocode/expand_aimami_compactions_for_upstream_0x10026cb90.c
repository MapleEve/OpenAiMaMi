// __ZN13codexmate_lib4core5relay12proxy_server38expand_aimami_compactions_for_upstream @ 0x10026cb90 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::proxy_server::expand_aimami_compactions_for_upstream::hb726aa1e46cd8e17(
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
  __m256i *v29; // rdi
  __int64 v30; // rsi
  _DWORD *v31; // rax
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  _DWORD *v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  _QWORD *v39; // rbx
  __int64 v40; // rdi
  __int64 i; // r13
  __int64 *v42; // rcx
  _QWORD v44[3]; // [rsp+8h] [rbp-1F8h] BYREF
  _QWORD v45[3]; // [rsp+20h] [rbp-1E0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-1C8h]
  size_t v47; // [rsp+40h] [rbp-1C0h]
  void *__src; // [rsp+48h] [rbp-1B8h]
  __int64 v49; // [rsp+50h] [rbp-1B0h]
  unsigned __int64 v50; // [rsp+58h] [rbp-1A8h]
  _BYTE v51[15]; // [rsp+60h] [rbp-1A0h]
  __int64 v52; // [rsp+70h] [rbp-190h] BYREF
  __int128 v53; // [rsp+78h] [rbp-188h]
  __int64 v54; // [rsp+88h] [rbp-178h] BYREF
  __int64 v55; // [rsp+90h] [rbp-170h]
  size_t v56; // [rsp+98h] [rbp-168h]
  __m256i v57; // [rsp+A0h] [rbp-160h] BYREF
  __m256i v58; // [rsp+C0h] [rbp-140h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-120h] BYREF
  __int128 v60; // [rsp+E8h] [rbp-118h]
  _BYTE v61[31]; // [rsp+F8h] [rbp-108h] BYREF
  __int128 v62; // [rsp+118h] [rbp-E8h] BYREF
  __int64 v63; // [rsp+128h] [rbp-D8h]
  _QWORD *v64; // [rsp+130h] [rbp-D0h]
  __int64 *v65; // [rsp+138h] [rbp-C8h]
  size_t __n; // [rsp+140h] [rbp-C0h]
  __int128 v67; // [rsp+148h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+158h] [rbp-A8h]
  __int64 v69; // [rsp+160h] [rbp-A0h]
  __int64 v70; // [rsp+168h] [rbp-98h] BYREF
  __int64 v71; // [rsp+170h] [rbp-90h]
  __int64 v72; // [rsp+178h] [rbp-88h]
  __int64 v73; // [rsp+180h] [rbp-80h]
  __m256i v74; // [rsp+188h] [rbp-78h] BYREF
  __int64 v75; // [rsp+1A8h] [rbp-58h]
  __m256i v76; // [rsp+1B0h] [rbp-50h] BYREF
  __int64 v77; // [rsp+1D0h] [rbp-30h]

  v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522("input", 5, a2); /*0x10026cbb9*/
  v4 = (_QWORD *)v3; /*0x10026cbbe*/
  if ( v3 && *(_BYTE *)v3 == 4 ) /*0x10026cbcb*/
  {
    v5 = *(_QWORD *)(v3 + 24); /*0x10026cbcd*/
    v65 = a2; /*0x10026cbd4*/
    if ( v5 ) /*0x10026cbdb*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("input", 5); /*0x10026cbe4*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32 * v5, 8); /*0x10026cbf1*/
      if ( !v6 ) /*0x10026cbf9*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 32 * v5); /*0x10026d74b*/
      v7 = v4[3]; /*0x10026cbff*/
    }
    else
    {
      v6 = 8; /*0x10026cc21*/
      v7 = 0; /*0x10026cc26*/
    }
    *(_QWORD *)&v67 = v5; /*0x10026cc28*/
    *((_QWORD *)&v67 + 1) = v6; /*0x10026cc2f*/
    v68 = 0; /*0x10026cc36*/
    v10 = v4[1]; /*0x10026cc41*/
    v11 = v4; /*0x10026cc45*/
    v12 = v4[2]; /*0x10026cc48*/
    v11[1] = 0; /*0x10026cc4c*/
    v11[2] = 8; /*0x10026cc54*/
    v64 = v11; /*0x10026cc5c*/
    v11[3] = 0; /*0x10026cc63*/
    v13 = v12 + 32 * v7; /*0x10026cc72*/
    v70 = v12; /*0x10026cc75*/
    v71 = v12; /*0x10026cc7c*/
    v72 = v10; /*0x10026cc83*/
    v73 = v13; /*0x10026cc8a*/
    if ( v7 ) /*0x10026cc91*/
    {
      v14 = v12 + 32; /*0x10026cc9e*/
      while ( 1 ) /*0x10026ccb0*/
      {
        v15 = *(_BYTE *)(v14 - 32); /*0x10026ccb0*/
        *(_QWORD *)&v51[7] = *(_QWORD *)(v14 - 8); /*0x10026ccb9*/
        *(_QWORD *)v51 = *(_QWORD *)(v14 - 15); /*0x10026ccc4*/
        v50 = *(_QWORD *)(v14 - 23); /*0x10026cccf*/
        v49 = *(_QWORD *)(v14 - 31); /*0x10026ccda*/
        if ( v15 == 6 ) /*0x10026cce3*/
        {
LABEL_64:
          v71 = v14; /*0x10026d55e*/
          break; /*0x10026d55e*/
        }
        v57.i8[0] = v15; /*0x10026cce9*/
        v57.i64[3] = *(_QWORD *)&v51[7]; /*0x10026ccf6*/
        *(__int128 *)((char *)v57.i128 + 9) = __PAIR128__(*(unsigned __int64 *)v51, v50); /*0x10026cd13*/
        *(__int64 *)((char *)v57.i64 + 1) = v49; /*0x10026cd17*/
        v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10026cd2d*/
                "typefullargsopenwithkindsavetrueuuidemitshowhide",
                4,
                &v57);
        if ( v16 ) /*0x10026cd35*/
        {
          if ( *(_BYTE *)v16 == 3 /*0x10026cd61*/
            && *(_QWORD *)(v16 + 24) == 10
            && !(**(_QWORD **)(v16 + 16) ^ 0x69746361706D6F63LL
               | *(unsigned __int16 *)(*(_QWORD *)(v16 + 16) + 8LL) ^ 0x6E6FLL) )
          {
            v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10026ce04*/
                    "encrypted_contentrouterlocal compact compatibility responseno relay provider configured for codexall"
                    " codex relay providers failed; please check provider config / networkgpt-image-2",
                    17,
                    &v57);
            if ( v22 ) /*0x10026ce0c*/
            {
              if ( *(_BYTE *)v22 == 3 ) /*0x10026ce15*/
              {
                v23 = *(_QWORD *)(v22 + 24); /*0x10026ce1b*/
                if ( v23 >= 0x12 ) /*0x10026ce23*/
                {
                  v24 = *(const __m128i **)(v22 + 16); /*0x10026ce29*/
                  v25 = _mm_or_si128( /*0x10026ce49*/
                          _mm_xor_si128(_mm_cvtsi32_si128(v24[1].u16[0]), (__m128i)xmmword_1015DCAA0),
                          _mm_xor_si128(_mm_loadu_si128(v24), (__m128i)xmmword_1015DCA90));
                  if ( _mm_testz_si128(v25, v25) ) /*0x10026ce4d*/
                  {
                    base64::engine::Engine::decode::inner::h0ef0f283e408ae41(&v76, "", &v24[1].i16[1], v23 - 18); /*0x10026ce6a*/
                    v77 = v76.i64[0]; /*0x10026ce73*/
                    if ( !__OFSUB__(-v76.i64[0], 1) ) /*0x10026ce7a*/
                    {
                      v69 = v76.i64[1]; /*0x10026ce88*/
                      v76.i128[0] = *(__int128 *)((char *)v76.i128 + 8); /*0x10026ce8f*/
                      v76.i128[1] = 0u; /*0x10026cea3*/
                      serde_json::de::from_trait::ha73f8db442141d1f(&v74, &v76); /*0x10026ceb1*/
                      if ( v74.i8[0] == 6 ) /*0x10026cebc*/
                      {
                        core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v74.u32[2]); /*0x10026cec2*/
                        if ( v77 ) /*0x10026cece*/
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v77, 1); /*0x10026cee0*/
                      }
                      else
                      {
                        v58 = v74; /*0x10026cef9*/
                        v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10026cf2c*/
                                &unk_1015DD8E6,
                                7,
                                &v58);
                        if ( v26 && *(_BYTE *)v26 == 3 ) /*0x10026cf3d*/
                        {
                          v27 = *(_QWORD *)(v26 + 24); /*0x10026cf47*/
                          __src = *(void **)(v26 + 16); /*0x10026cf4b*/
                          __n = v27; /*0x10026cf52*/
                          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(__src, v27); /*0x10026cf59*/
                          v75 = 0x8000000000000000LL; /*0x10026cf68*/
                          if ( v28 ) /*0x10026cf6f*/
                          {
                            alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v76, __n, 0, 1, 1); /*0x10026cf88*/
                            v75 = v76.i64[1]; /*0x10026cf91*/
                            if ( v76.i8[0] ) /*0x10026cf99*/
                            {
                              v71 = v14; /*0x10026d72d*/
                              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v75, v76.i64[2]); /*0x10026d73c*/
                            }
                            v46 = v76.i64[2]; /*0x10026cfa3*/
                            memcpy((void *)v76.i64[2], __src, __n); /*0x10026cfb8*/
                            v47 = __n; /*0x10026cfc4*/
                          }
                        }
                        else
                        {
                          v75 = 0x8000000000000000LL; /*0x10026cfd7*/
                        }
                        v29 = &v58; /*0x10026cfdb*/
                        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v58); /*0x10026cfe2*/
                        v30 = v77; /*0x10026cfe7*/
                        if ( v77 ) /*0x10026cfee*/
                        {
                          v29 = (__m256i *)v69; /*0x10026cff5*/
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v77, 1); /*0x10026cffc*/
                        }
                        if ( v75 != 0x8000000000000000LL ) /*0x10026d012*/
                        {
                          v54 = v75; /*0x10026d018*/
                          v55 = v46; /*0x10026d026*/
                          v56 = v47; /*0x10026d034*/
                          v59 = 0; /*0x10026d03b*/
                          *((_QWORD *)&v60 + 1) = 0; /*0x10026d046*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v30); /*0x10026d051*/
                          v77 = 4; /*0x10026d05b*/
                          v31 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10026d069*/
                          if ( !v31 ) /*0x10026d071*/
                            goto LABEL_79; /*0x10026d071*/
                          *v31 = 1701869940; /*0x10026d077*/
                          *(_QWORD *)v61 = 4; /*0x10026d07d*/
                          v77 = (__int64)v31; /*0x10026d088*/
                          *(_QWORD *)&v61[8] = v31; /*0x10026d08c*/
                          *(_QWORD *)&v61[16] = 4; /*0x10026d093*/
                          serde_json::value::to_value::h29e3c39dc75a9151(&v76, &off_10195D810); /*0x10026d0a8*/
                          if ( v76.i8[0] == 6 ) /*0x10026d0b1*/
                          {
                            v71 = v14; /*0x10026d639*/
                            v74.i64[0] = v76.i64[1]; /*0x10026d644*/
                            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10026d666*/
                              "called `Result::unwrap()` on an `Err` value",
                              43,
                              &v74,
                              &off_10195E860,
                              &off_10195D820);
                          }
                          v74 = v76; /*0x10026d0c3*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x10026d0ec*/
                            &v76,
                            &v59,
                            v61,
                            &v74);
                          if ( v76.i8[0] != 6 ) /*0x10026d0f5*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v76); /*0x10026d0fa*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v76, &v59); /*0x10026d0ff*/
                          v77 = 4; /*0x10026d109*/
                          v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10026d117*/
                          if ( !v32 ) /*0x10026d11f*/
                            goto LABEL_79; /*0x10026d11f*/
                          *v32 = 1701605234; /*0x10026d125*/
                          *(_QWORD *)v61 = 4; /*0x10026d12b*/
                          v77 = (__int64)v32; /*0x10026d136*/
                          *(_QWORD *)&v61[8] = v32; /*0x10026d13a*/
                          *(_QWORD *)&v61[16] = 4; /*0x10026d141*/
                          serde_json::value::to_value::h29e3c39dc75a9151(&v76, &off_10195D838); /*0x10026d156*/
                          if ( v76.i8[0] == 6 ) /*0x10026d15f*/
                          {
                            v71 = v14; /*0x10026d670*/
                            v74.i64[0] = v76.i64[1]; /*0x10026d67b*/
                            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10026d69d*/
                              "called `Result::unwrap()` on an `Err` value",
                              43,
                              &v74,
                              &off_10195E860,
                              &off_10195D820);
                          }
                          v74 = v76; /*0x10026d171*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x10026d19a*/
                            &v76,
                            &v59,
                            v61,
                            &v74);
                          if ( v76.i8[0] != 6 ) /*0x10026d1a3*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v76); /*0x10026d1a8*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v76, &v59); /*0x10026d1ad*/
                          v77 = 7; /*0x10026d1b7*/
                          v33 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10026d1c5*/
                          if ( !v33 ) /*0x10026d1cd*/
                          {
LABEL_79:
                            v71 = v14; /*0x10026d752*/
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v77); /*0x10026d762*/
                          }
                          *(_DWORD *)((char *)v33 + 3) = 1953391988; /*0x10026d1d3*/
                          *v33 = 1953394531; /*0x10026d1da*/
                          v45[0] = 7; /*0x10026d1e0*/
                          v69 = (__int64)v33; /*0x10026d1eb*/
                          v45[1] = v33; /*0x10026d1f2*/
                          v45[2] = 7; /*0x10026d1f9*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x10026d204*/
                          v77 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x10026d218*/
                          if ( !v77 ) /*0x10026d21f*/
                          {
                            v71 = v14; /*0x10026d6a7*/
                            alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x10026d6b8*/
                          }
                          v52 = 0; /*0x10026d225*/
                          *((_QWORD *)&v53 + 1) = 0; /*0x10026d230*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8); /*0x10026d23b*/
                          v34 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10026d24a*/
                          if ( !v34 ) /*0x10026d252*/
                            goto LABEL_80; /*0x10026d252*/
                          *v34 = 1701869940; /*0x10026d258*/
                          *(_QWORD *)&v62 = 4; /*0x10026d25e*/
                          v75 = (__int64)v34; /*0x10026d269*/
                          *((_QWORD *)&v62 + 1) = v34; /*0x10026d26d*/
                          v63 = 4; /*0x10026d274*/
                          serde_json::value::to_value::h29e3c39dc75a9151(&v76, &off_10195D848); /*0x10026d289*/
                          if ( v76.i8[0] == 6 ) /*0x10026d292*/
                          {
                            v71 = v14; /*0x10026d6c2*/
                            v74.i64[0] = v76.i64[1]; /*0x10026d6cd*/
                            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10026d6ef*/
                              "called `Result::unwrap()` on an `Err` value",
                              43,
                              &v74,
                              &off_10195E860,
                              &off_10195D820);
                          }
                          v74 = v76; /*0x10026d2a4*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x10026d2cd*/
                            &v76,
                            &v52,
                            &v62,
                            &v74);
                          if ( v76.i8[0] != 6 ) /*0x10026d2d6*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v76); /*0x10026d2db*/
                          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v76, &v52); /*0x10026d2e0*/
                          v35 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10026d2ef*/
                          if ( !v35 ) /*0x10026d2f7*/
                          {
LABEL_80:
                            v71 = v14; /*0x10026d769*/
                            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10026d77a*/
                          }
                          *v35 = 1954047348; /*0x10026d2fd*/
                          v44[0] = 4; /*0x10026d303*/
                          v75 = (__int64)v35; /*0x10026d30e*/
                          v44[1] = v35; /*0x10026d312*/
                          v44[2] = 4; /*0x10026d319*/
                          v74.i64[0] = (__int64)&v54; /*0x10026d32b*/
                          v74.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10026d336*/
                          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v76, &unk_1017B9CED, &v74); /*0x10026d348*/
                          v62 = v76.i128[0]; /*0x10026d355*/
                          v63 = v76.i64[2]; /*0x10026d367*/
                          serde_json::value::to_value::hf4a5c51664f5d8d6(&v76, &v62); /*0x10026d378*/
                          if ( v76.i8[0] == 6 ) /*0x10026d381*/
                          {
                            v71 = v14; /*0x10026d6f9*/
                            v74.i64[0] = v76.i64[1]; /*0x10026d704*/
                            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10026d726*/
                              "called `Result::unwrap()` on an `Err` value",
                              43,
                              &v74,
                              &off_10195E860,
                              &off_10195D820);
                          }
                          v74 = v76; /*0x10026d393*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x10026d3bc*/
                            &v76,
                            &v52,
                            v44,
                            &v74);
                          if ( v76.i8[0] != 6 ) /*0x10026d3c5*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v76); /*0x10026d3ca*/
                          if ( (_QWORD)v62 ) /*0x10026d3d9*/
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v62 + 1), v62, 1); /*0x10026d3e7*/
                          v76.i64[0] = v52; /*0x10026d3fa*/
                          *(_OWORD *)&v61[15] = v53; /*0x10026d418*/
                          *(_QWORD *)&v61[7] = v52; /*0x10026d41c*/
                          v36 = (_QWORD *)v77; /*0x10026d41f*/
                          *(_BYTE *)v77 = 5; /*0x10026d423*/
                          v36[3] = *(_QWORD *)&v61[23]; /*0x10026d42d*/
                          *(_QWORD *)((char *)v36 + 17) = *(_QWORD *)&v61[16]; /*0x10026d438*/
                          v37 = *(_QWORD *)v61; /*0x10026d43c*/
                          *(_QWORD *)((char *)v36 + 9) = *(_QWORD *)&v61[8]; /*0x10026d44a*/
                          *(_QWORD *)((char *)v36 + 1) = v37; /*0x10026d44e*/
                          v76.i64[1] = 1; /*0x10026d452*/
                          v76.i64[2] = (__int64)v36; /*0x10026d45a*/
                          v76.i64[3] = 1; /*0x10026d45e*/
                          v76.i8[0] = 4; /*0x10026d466*/
                          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x10026d47f*/
                            &v74,
                            &v59,
                            v45,
                            &v76);
                          if ( v74.i8[0] != 6 ) /*0x10026d488*/
                            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x10026d48e*/
                          v58.i128[1] = v60; /*0x10026d4b3*/
                          v58.i64[1] = v59; /*0x10026d4b7*/
                          v58.i8[0] = 5; /*0x10026d4bb*/
                          v77 = v68; /*0x10026d4c9*/
                          if ( v68 == (_QWORD)v67 ) /*0x10026d4d4*/
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v67); /*0x10026d4dd*/
                          v38 = v77; /*0x10026d4e9*/
                          *(__m256i *)(*((_QWORD *)&v67 + 1) + 32 * v77) = v58; /*0x10026d507*/
                          v68 = v38 + 1; /*0x10026d526*/
                          if ( v54 ) /*0x10026d537*/
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v54, 1); /*0x10026d545*/
                          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v57); /*0x10026d551*/
                          goto LABEL_18; /*0x10026d556*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v17 = v68; /*0x10026cd70*/
        if ( v68 == (_QWORD)v67 ) /*0x10026cd7e*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v67); /*0x10026cd87*/
        v18 = *((_QWORD *)&v67 + 1); /*0x10026cd8c*/
        v19 = 32 * v17; /*0x10026cd96*/
        v20 = v57.i128[0]; /*0x10026cda1*/
        *(_OWORD *)(*((_QWORD *)&v67 + 1) + v19 + 16) = v57.i128[1]; /*0x10026cdbb*/
        *(_OWORD *)(v18 + v19) = v20; /*0x10026cdc5*/
        v68 = v17 + 1; /*0x10026cdcc*/
LABEL_18:
        v21 = v14 - 32; /*0x10026cdd7*/
        v14 += 32; /*0x10026cddb*/
        if ( v21 + 32 == v13 ) /*0x10026cde6*/
        {
          v14 = v13; /*0x10026d55b*/
          goto LABEL_64; /*0x10026cdec*/
        }
      }
    }
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h48a11a5296989bff(&v70); /*0x10026d565*/
    v39 = v64 + 1; /*0x10026d57b*/
    v76.i64[2] = v68; /*0x10026d586*/
    v76.i128[0] = v67; /*0x10026d59c*/
    v40 = v64[2]; /*0x10026d5a0*/
    for ( i = v64[3] + 1LL; i != 1; --i ) /*0x10026d5a8*/
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v40); /*0x10026d5bd*/
      v40 += 32; /*0x10026d5c2*/
    }
    if ( *v39 ) /*0x10026d5c7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64[2], 32LL * *v39, 8); /*0x10026d5e3*/
    v39[2] = v76.i64[2]; /*0x10026d5ec*/
    *(_OWORD *)v39 = v76.i128[0]; /*0x10026d5fc*/
    v42 = v65; /*0x10026d5ff*/
    a1[3] = v65[3]; /*0x10026d60a*/
    a1[2] = v42[2]; /*0x10026d612*/
    v8 = *v42; /*0x10026d616*/
    v9 = v42[1]; /*0x10026d619*/
  }
  else
  {
    a1[3] = a2[3]; /*0x10026cc09*/
    a1[2] = a2[2]; /*0x10026cc11*/
    v8 = *a2; /*0x10026cc15*/
    v9 = a2[1]; /*0x10026cc18*/
  }
  a1[1] = v9; /*0x10026d61d*/
  *a1 = v8; /*0x10026d621*/
  return a1; /*0x10026d627*/
}