// __ZN13codexmate_lib4core5relay12health_check19apply_extra_headers @ 0x10089d000 | 基线 same-set
void __fastcall codexmate_lib::core::relay::health_check::apply_extra_headers::hc38218fbdd812ad8(
        __int64 a1,
        _BOOL8 a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // r13
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // bl
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r12
  const void *v14; // r15
  size_t v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  void *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm5
  __m128i v23; // xmm6
  __m128i v24; // xmm7
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __int64 v29; // rcx
  __m128i si128; // xmm3
  __m128i v31; // xmm4
  __m128i v32; // xmm5
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __int64 v35; // rdi
  __int64 i; // rax
  unsigned __int8 v37; // cl
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  int v48; // ecx
  char *v49; // rsi
  int v50; // eax
  __int64 v51; // rcx
  __m128i v52; // xmm1
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rcx
  __m128i v59; // xmm1
  _QWORD v60[5]; // [rsp+8h] [rbp-1C8h] BYREF
  _QWORD v61[4]; // [rsp+30h] [rbp-1A0h] BYREF
  _QWORD v62[4]; // [rsp+50h] [rbp-180h] BYREF
  __int64 v63; // [rsp+70h] [rbp-160h]
  __int64 v64; // [rsp+78h] [rbp-158h]
  __int64 v65; // [rsp+80h] [rbp-150h]
  __int64 v66; // [rsp+88h] [rbp-148h]
  _QWORD v67[2]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v68; // [rsp+A0h] [rbp-130h]
  __int64 v69; // [rsp+A8h] [rbp-128h]
  _BOOL8 v70; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-118h]
  __int64 v72; // [rsp+C0h] [rbp-110h]
  __int64 v73; // [rsp+C8h] [rbp-108h]
  _BOOL8 v74; // [rsp+D0h] [rbp-100h]
  __int64 v75; // [rsp+D8h] [rbp-F8h]
  __int64 v76; // [rsp+E0h] [rbp-F0h]
  __int64 v77; // [rsp+E8h] [rbp-E8h]
  __int64 v78; // [rsp+F0h] [rbp-E0h]
  _QWORD v79[2]; // [rsp+F8h] [rbp-D8h] BYREF
  __int64 v80; // [rsp+108h] [rbp-C8h]
  __int64 v81; // [rsp+110h] [rbp-C0h]
  __int64 v82; // [rsp+118h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+120h] [rbp-B0h]
  __int64 v84; // [rsp+128h] [rbp-A8h]
  __int64 v85; // [rsp+130h] [rbp-A0h]
  __int64 v86; // [rsp+138h] [rbp-98h]
  __int64 v87; // [rsp+140h] [rbp-90h] BYREF
  __int64 v88; // [rsp+148h] [rbp-88h]
  __int64 v89; // [rsp+150h] [rbp-80h]
  __int64 v90; // [rsp+158h] [rbp-78h]
  _QWORD v91[3]; // [rsp+160h] [rbp-70h] BYREF
  int v92; // [rsp+17Ch] [rbp-54h]
  __int64 v93; // [rsp+180h] [rbp-50h]
  __int64 v94; // [rsp+188h] [rbp-48h]
  __int64 v95; // [rsp+190h] [rbp-40h]
  __int64 v96; // [rsp+198h] [rbp-38h] BYREF
  char v97; // [rsp+1A3h] [rbp-2Dh] BYREF
  int v98; // [rsp+1A4h] [rbp-2Ch]

  v98 = a4; /*0x10089d014*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10089d026*/
  if ( v6 ) /*0x10089d02e*/
  {
    v70 = a2; /*0x10089d034*/
    v71 = a3; /*0x10089d03b*/
    v72 = 0; /*0x10089d042*/
    v73 = 0; /*0x10089d04d*/
    v74 = a2; /*0x10089d058*/
    v75 = a3; /*0x10089d05f*/
    serde_json::de::from_trait::ha212a85cbf1d7df5(&v87, &v70); /*0x10089d074*/
    if ( (_BYTE)v87 ) /*0x10089d080*/
    {
      v7 = v88; /*0x10089d082*/
      if ( *(_QWORD *)v88 == 1 ) /*0x10089d090*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v88 + 8); /*0x10089dcbc*/
      }
      else if ( !*(_QWORD *)v88 ) /*0x10089d089*/
      {
        v8 = *(_QWORD *)(v88 + 16); /*0x10089d09f*/
        if ( v8 ) /*0x10089d0a6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v88 + 8), v8, 1); /*0x10089d0b5*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 40, 8); /*0x10089dcce*/
    }
    else
    {
      v69 = a1; /*0x10089d0bf*/
      v9 = v88; /*0x10089d0db*/
      if ( v88 ) /*0x10089d0e1*/
        v9 = v90; /*0x10089d0e3*/
      v70 = v88 != 0; /*0x10089d0ef*/
      v71 = 0; /*0x10089d0f6*/
      v72 = v88; /*0x10089d101*/
      v73 = v89; /*0x10089d108*/
      v74 = v70; /*0x10089d10f*/
      v75 = 0; /*0x10089d116*/
      v76 = v88; /*0x10089d121*/
      v77 = v89; /*0x10089d128*/
      v78 = v9; /*0x10089d12f*/
      v68 = 0x8000000000000000LL; /*0x10089d13a*/
      v10 = v98; /*0x10089d141*/
      while ( 1 ) /*0x10089d152*/
      {
        alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hdcfb92fc12379793(&v87, &v70); /*0x10089d152*/
        if ( !v87 ) /*0x10089d161*/
          break; /*0x10089d161*/
        v13 = *(_QWORD *)(v87 + 24 * v89 + 360); /*0x10089d16f*/
        if ( v13 == v68 ) /*0x10089d17e*/
          break; /*0x10089d17e*/
        v14 = *(const void **)(v87 + 24 * v89 + 368); /*0x10089d184*/
        v15 = *(_QWORD *)(v87 + 24 * v89 + 376); /*0x10089d18c*/
        v16 = 32 * v89; /*0x10089d194*/
        v81 = *(_QWORD *)(v87 + 32 * v89 + 24); /*0x10089d19d*/
        v80 = *(_QWORD *)(v87 + 32 * v89 + 16); /*0x10089d1a9*/
        v17 = *(_QWORD *)(v87 + 32 * v89); /*0x10089d1b0*/
        v79[1] = *(_QWORD *)(v87 + 32 * v89 + 8); /*0x10089d1b9*/
        v79[0] = v17; /*0x10089d1c0*/
        if ( v10 ) /*0x10089d1c9*/
        {
          if ( (v15 & 0x8000000000000000LL) != 0LL ) /*0x10089d1d2*/
          {
            v18 = 0; /*0x10089dca9*/
            goto LABEL_116; /*0x10089dca9*/
          }
          if ( v15 ) /*0x10089d1d8*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v87, &v70); /*0x10089d1da*/
            v18 = 1; /*0x10089d1df*/
            v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x10089d1ec*/
            if ( !v19 ) /*0x10089d1f4*/
            {
              v4 = v15; /*0x10089dd18*/
LABEL_116:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v4); /*0x10089dcab*/
            }
            v4 = (__int64)v19; /*0x10089d1fa*/
            memcpy(v19, v14, v15); /*0x10089d206*/
            if ( v15 < 8 ) /*0x10089d20f*/
            {
              v20 = 0; /*0x10089d211*/
              v10 = v98; /*0x10089d213*/
              goto LABEL_49; /*0x10089d216*/
            }
            v10 = v98; /*0x10089d23a*/
            if ( v15 < 0x20 ) /*0x10089d23d*/
            {
              v20 = 0; /*0x10089d23f*/
LABEL_25:
              v29 = v20; /*0x10089d2e0*/
              v20 = v15 & 0x7FFFFFFFFFFFFFF8LL; /*0x10089d2f1*/
              si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0); /*0x10089d2f4*/
              v31 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0); /*0x10089d2fc*/
              v32 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0); /*0x10089d304*/
              do /*0x10089d341*/
              {
                v33 = _mm_loadl_epi64((const __m128i *)(v4 + v29)); /*0x10089d310*/
                v34 = _mm_add_epi8(v33, si128); /*0x10089d31b*/
                *(_QWORD *)(v4 + v29) = _mm_or_si128( /*0x10089d333*/
                                          _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v34, v31), v34), v32),
                                          v33).u64[0];
                v29 += 8; /*0x10089d33a*/
              }
              while ( v20 != v29 ); /*0x10089d341*/
              goto LABEL_50; /*0x10089d341*/
            }
            v20 = v15 & 0x7FFFFFFFFFFFFFE0LL; /*0x10089d253*/
            v21 = 0; /*0x10089d256*/
            v22 = _mm_load_si128((const __m128i *)&xmmword_1015DC980); /*0x10089d258*/
            v23 = _mm_load_si128((const __m128i *)&xmmword_1015DC990); /*0x10089d260*/
            v24 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0); /*0x10089d268*/
            do /*0x10089d2cb*/
            {
              v25 = _mm_loadu_si128((const __m128i *)(v4 + v21)); /*0x10089d270*/
              v26 = _mm_loadu_si128((const __m128i *)(v4 + v21 + 16)); /*0x10089d277*/
              v27 = _mm_add_epi8(v25, v22); /*0x10089d282*/
              v28 = _mm_add_epi8(v26, v22); /*0x10089d28a*/
              *(__m128i *)(v4 + v21) = _mm_or_si128( /*0x10089d2b6*/
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v27, v23), v27), v24),
                                         v25);
              *(__m128i *)(v4 + v21 + 16) = _mm_or_si128( /*0x10089d2bd*/
                                              _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v28, v23), v28), v24),
                                              v26);
              v21 += 32; /*0x10089d2c4*/
            }
            while ( v20 != v21 ); /*0x10089d2cb*/
            if ( v15 != v20 ) /*0x10089d2d0*/
            {
              if ( (v15 & 0x18) != 0 ) /*0x10089d2da*/
                goto LABEL_25; /*0x10089d2da*/
              do /*0x10089d5ff*/
              {
LABEL_49:
                *(_BYTE *)(v4 + v20) |= 32 * ((unsigned __int8)(*(_BYTE *)(v4 + v20) - 65) < 0x1Au); /*0x10089d5e0*/
                ++v20; /*0x10089d5f9*/
LABEL_50:
                ; /*0x10089d5fc*/
              }
              while ( v15 != v20 ); /*0x10089d5ff*/
            }
            if ( v15 >= 4 && *(_DWORD *)v4 == 761488755 ) /*0x10089d60f*/
            {
LABEL_114:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v15, 1); /*0x10089dc88*/
              goto LABEL_47; /*0x10089dc9f*/
            }
            switch ( v15 ) /*0x10089d631*/
            {
              case 2uLL: /*0x10089d631*/
                if ( *(_WORD *)v4 == 25972 ) /*0x10089d34f*/
                  goto LABEL_114; /*0x10089d34f*/
                goto LABEL_29; /*0x10089d34f*/
              case 3uLL: /*0x10089d631*/
                if ( !(*(_WORD *)v4 ^ 0x6976 | *(unsigned __int8 *)(v4 + 2) ^ 0x61) ) /*0x10089d645*/
                  goto LABEL_114; /*0x10089d648*/
                goto LABEL_29; /*0x10089d648*/
              case 4uLL: /*0x10089d631*/
                if ( *(_DWORD *)v4 == 1953722216 ) /*0x10089d8b1*/
                  goto LABEL_114; /*0x10089d8b1*/
                goto LABEL_29; /*0x10089d8b1*/
              case 6uLL: /*0x10089d631*/
                if ( !(*(_DWORD *)v4 ^ 0x65707865 | *(unsigned __int16 *)(v4 + 4) ^ 0x7463) /*0x10089d87e*/
                  || !(*(_DWORD *)v4 ^ 0x6B6F6F63 | *(unsigned __int16 *)(v4 + 4) ^ 0x6569)
                  || !(*(_DWORD *)v4 ^ 0x6769726F | *(unsigned __int16 *)(v4 + 4) ^ 0x6E69) )
                {
                  goto LABEL_114; /*0x10089d880*/
                }
                v47 = *(_DWORD *)v4 ^ 0x722D6663; /*0x10089d88f*/
                v48 = *(unsigned __int16 *)(v4 + 4) ^ 0x7961; /*0x10089d896*/
                goto LABEL_80; /*0x10089d896*/
              case 7uLL: /*0x10089d631*/
                if ( !(*(_DWORD *)v4 ^ 0x72677075 | *(_DWORD *)(v4 + 3) ^ 0x65646172) ) /*0x10089d72a*/
                  goto LABEL_114; /*0x10089d72a*/
                v47 = *(_DWORD *)v4 ^ 0x65666572; /*0x10089d739*/
                v48 = *(_DWORD *)(v4 + 3) ^ 0x72657265; /*0x10089d744*/
LABEL_80:
                if ( !(v47 | v48) ) /*0x10089d89c*/
                  goto LABEL_114; /*0x10089d89e*/
                goto LABEL_29; /*0x10089d89e*/
              case 8uLL: /*0x10089d631*/
                if ( *(_QWORD *)v4 == 0x7372656C69617274LL ) /*0x10089d7c6*/
                  goto LABEL_114; /*0x10089d7c6*/
                goto LABEL_29; /*0x10089d7c6*/
              case 9uLL: /*0x10089d631*/
                if ( !(*(_QWORD *)v4 ^ 0x656B2D6970612D78LL | *(unsigned __int8 *)(v4 + 8) ^ 0x79LL) /*0x10089d91c*/
                  || !(*(_QWORD *)v4 ^ 0x6564726177726F66LL | *(unsigned __int8 *)(v4 + 8) ^ 0x64LL)
                  || !(*(_QWORD *)v4 ^ 0x692D6C6165722D78LL | *(unsigned __int8 *)(v4 + 8) ^ 0x70LL) )
                {
                  goto LABEL_114; /*0x10089d91f*/
                }
                v44 = *(_QWORD *)v4 ^ 0x692D746E65696C63LL; /*0x10089d933*/
                v51 = *(unsigned __int8 *)(v4 + 8) ^ 0x70LL; /*0x10089d93b*/
                goto LABEL_74; /*0x10089d93f*/
              case 0xAuLL: /*0x10089d631*/
                if ( !(*(_QWORD *)v4 ^ 0x697463656E6E6F63LL | *(unsigned __int16 *)(v4 + 8) ^ 0x6E6FLL) /*0x10089d9d3*/
                  || !(*(_QWORD *)v4 ^ 0x696C612D7065656BLL | *(unsigned __int16 *)(v4 + 8) ^ 0x6576LL)
                  || !(*(_QWORD *)v4 ^ 0x6B6F6F632D746573LL | *(unsigned __int16 *)(v4 + 8) ^ 0x6569LL)
                  || !(*(_QWORD *)v4 ^ 0x74697369762D6663LL | *(unsigned __int16 *)(v4 + 8) ^ 0x726FLL) )
                {
                  goto LABEL_114; /*0x10089d9d6*/
                }
                v44 = *(_QWORD *)v4 ^ 0x2D65636172742D78LL; /*0x10089d9ea*/
                v51 = *(unsigned __int16 *)(v4 + 8) ^ 0x6469LL; /*0x10089d9f2*/
                goto LABEL_74; /*0x10089d9f9*/
              case 0xBuLL: /*0x10089d631*/
                if ( !(*(_QWORD *)v4 ^ 0x746E65696C632D78LL | *(_QWORD *)(v4 + 3) ^ 0x70692D746E65696CLL) /*0x10089dbd7*/
                  || !(*(_QWORD *)v4 ^ 0x2D6572757A612D78LL | *(_QWORD *)(v4 + 3) ^ 0x6665722D6572757ALL) )
                {
                  goto LABEL_114; /*0x10089dbda*/
                }
                v57 = _byteswap_uint64(*(_QWORD *)v4); /*0x10089dbe4*/
                v58 = 0x782D62332D737061LL; /*0x10089dbf1*/
                if ( v57 != 0x782D62332D737061LL /*0x10089dc12*/
                  || (v57 = _byteswap_uint64(*(_QWORD *)(v4 + 3)),
                      v50 = 0,
                      v58 = 0x332D7370616E6964LL,
                      v57 != 0x332D7370616E6964LL) )
                {
                  v50 = 2 * (v57 >= v58) - 1; /*0x10089dc1c*/
                }
                goto LABEL_109; /*0x10089dc1c*/
              case 0xCuLL: /*0x10089d631*/
                if ( !(*(_QWORD *)v4 ^ 0x756F6370692D6663LL | *(unsigned int *)(v4 + 8) ^ 0x7972746ELL) ) /*0x10089dae1*/
                  goto LABEL_114; /*0x10089dae1*/
                if ( !(*(_QWORD *)v4 ^ 0x2D6572757A612D78LL | *(unsigned int *)(v4 + 8) ^ 0x64696466LL) ) /*0x10089db06*/
                  goto LABEL_114; /*0x10089db06*/
                if ( !(*(_QWORD *)v4 ^ 0x7365757165722D78LL | *(unsigned int *)(v4 + 8) ^ 0x64692D74LL) ) /*0x10089db2b*/
                  goto LABEL_114; /*0x10089db2b*/
                if ( !(*(_QWORD *)v4 ^ 0x6172742D33622D78LL | *(unsigned int *)(v4 + 8) ^ 0x64696563LL) ) /*0x10089db50*/
                  goto LABEL_114; /*0x10089db50*/
                v49 = "content-type://https"; /*0x10089db78*/
                if ( !(*(_QWORD *)v4 ^ 0x6D61732D33622D78LL | *(unsigned int *)(v4 + 8) ^ 0x64656C70LL) ) /*0x10089db75*/
                  goto LABEL_114; /*0x10089db7f*/
                goto LABEL_68; /*0x10089db7f*/
              case 0xDuLL: /*0x10089d631*/
                v44 = *(_QWORD *)v4 ^ 0x7A69726F68747561LL; /*0x10089d6fc*/
                v45 = *(_QWORD *)(v4 + 5); /*0x10089d6ff*/
                v46 = 0x6E6F6974617A6972LL; /*0x10089d703*/
                goto LABEL_73; /*0x10089d70d*/
              case 0xEuLL: /*0x10089d631*/
                if ( !(*(_QWORD *)v4 ^ 0x2D746E65746E6F63LL | *(_QWORD *)(v4 + 6) ^ 0x6874676E656C2D74LL) ) /*0x10089d7f6*/
                  goto LABEL_114; /*0x10089d7f6*/
                v44 = *(_QWORD *)v4 ^ 0x696C632D65757274LL; /*0x10089d80a*/
                v45 = *(_QWORD *)(v4 + 6); /*0x10089d80d*/
                v46 = 0x70692D746E65696CLL; /*0x10089d811*/
LABEL_73:
                v51 = v46 ^ v45; /*0x10089d81b*/
LABEL_74:
                if ( !(v44 | v51) ) /*0x10089d81e*/
                  goto LABEL_114; /*0x10089d821*/
                goto LABEL_29; /*0x10089d821*/
              case 0xFuLL: /*0x10089d631*/
                if ( !(*(_QWORD *)v4 ^ 0x726177726F662D78LL | *(_QWORD *)(v4 + 7) ^ 0x726F662D64656472LL) ) /*0x10089d76d*/
                  goto LABEL_114; /*0x10089d76d*/
                v49 = "accept-encodingcontent-type://https"; /*0x10089d79b*/
                if ( !(*(_QWORD *)v4 ^ 0x742D6E7A6D612D78LL | *(_QWORD *)(v4 + 7) ^ 0x64692D6563617274LL) ) /*0x10089d798*/
                  goto LABEL_114; /*0x10089d7a2*/
LABEL_68:
                v50 = memcmp((const void *)v4, v49, v15); /*0x10089d7a8*/
                goto LABEL_109; /*0x10089d7b3*/
              case 0x10uLL: /*0x10089d631*/
                v38 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674900); /*0x10089d659*/
                if ( _mm_testz_si128(v38, v38) ) /*0x10089d666*/
                  goto LABEL_114; /*0x10089d666*/
                v39 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674910); /*0x10089d672*/
                if ( _mm_testz_si128(v39, v39) ) /*0x10089d67f*/
                  goto LABEL_114; /*0x10089d67f*/
                v40 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674920); /*0x10089d68b*/
                if ( _mm_testz_si128(v40, v40) ) /*0x10089d698*/
                  goto LABEL_114; /*0x10089d698*/
                v41 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674930); /*0x10089d6a4*/
                if ( _mm_testz_si128(v41, v41) ) /*0x10089d6b1*/
                  goto LABEL_114; /*0x10089d6b1*/
                v42 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674940); /*0x10089d6bd*/
                if ( _mm_testz_si128(v42, v42) ) /*0x10089d6ca*/
                  goto LABEL_114; /*0x10089d6ca*/
                v43 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674950); /*0x10089d6d6*/
                if ( _mm_testz_si128(v43, v43) ) /*0x10089d6de*/
                  goto LABEL_114; /*0x10089d6e3*/
                goto LABEL_29; /*0x10089d6e3*/
              case 0x11uLL: /*0x10089d631*/
                v52 = _mm_or_si128( /*0x10089da1d*/
                        _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v4 + 16)), (__m128i)xmmword_1015DCA40),
                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_1015DCA30));
                if ( _mm_testz_si128(v52, v52) ) /*0x10089da26*/
                  goto LABEL_114; /*0x10089da26*/
                v53 = _mm_or_si128( /*0x10089da4b*/
                        _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v4 + 16)), (__m128i)xmmword_101674970),
                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674960));
                if ( _mm_testz_si128(v53, v53) ) /*0x10089da54*/
                  goto LABEL_114; /*0x10089da54*/
                v54 = _mm_or_si128( /*0x10089da79*/
                        _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v4 + 16)), (__m128i)xmmword_101674990),
                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_101674980));
                if ( _mm_testz_si128(v54, v54) ) /*0x10089da82*/
                  goto LABEL_114; /*0x10089da82*/
                v50 = memcmp((const void *)v4, "x-b3-parentspanid", 0x11u); /*0x10089da97*/
LABEL_109:
                v92 = v50; /*0x10089dc20*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v15, 1); /*0x10089dc2e*/
                if ( !v92 ) /*0x10089dc37*/
                  goto LABEL_47; /*0x10089dc37*/
                break; /*0x10089dc37*/
              case 0x12uLL: /*0x10089d631*/
                v55 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), *(__m128i *)"proxy-authenticate"); /*0x10089daa7*/
                v56 = _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v4 + 16)), *(__m128i *)"te"); /*0x10089dab8*/
                goto LABEL_113; /*0x10089dac0*/
              case 0x13uLL: /*0x10089d631*/
                v55 = _mm_xor_si128( /*0x10089dc63*/
                        _mm_loadu_si128((const __m128i *)v4),
                        *(__m128i *)"proxy-authorizatproxy-authenticate");
                v56 = _mm_xor_si128( /*0x10089dc71*/
                        _mm_loadu_si128((const __m128i *)(v4 + 3)),
                        *(__m128i *)"xy-authorizationproxy-authorizatproxy-authenticate");
                goto LABEL_113; /*0x10089dc71*/
              case 0x1AuLL: /*0x10089d631*/
                v55 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v4), (__m128i)xmmword_1016748F0); /*0x10089dc45*/
                v56 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v4 + 10)), (__m128i)xmmword_1016748E0); /*0x10089dc53*/
LABEL_113:
                v59 = _mm_or_si128(v56, v55); /*0x10089dc79*/
                if ( _mm_testz_si128(v59, v59) ) /*0x10089dc7d*/
                  goto LABEL_114; /*0x10089dc82*/
                goto LABEL_29; /*0x10089dc82*/
              default:
LABEL_29:
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v15, 1); /*0x10089d355*/
                break; /*0x10089d360*/
            }
          }
          else
          {
            v4 = 1; /*0x10089d21b*/
          }
        }
        http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(&v82, v14, v15, v16, v11, v12); /*0x10089d370*/
        v35 = 0; /*0x10089d39a*/
        if ( LOBYTE(v79[0]) == 3 ) /*0x10089d39f*/
          v35 = v80; /*0x10089d39f*/
        v87 = v82; /*0x10089d3b1*/
        v88 = v83; /*0x10089d3b8*/
        v89 = v84; /*0x10089d3c6*/
        v90 = v85; /*0x10089d3d1*/
        v91[0] = v86; /*0x10089d3dc*/
        v91[1] = v35; /*0x10089d3e0*/
        v91[2] = v81; /*0x10089d3e4*/
        if ( v82 & 1 | (LOBYTE(v79[0]) != 3) ) /*0x10089d3ea*/
        {
          if ( (v82 & 1) == 0 && v88 ) /*0x10089d401*/
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v88 + 32))(v91, v89, v90); /*0x10089d413*/
          goto LABEL_47; /*0x10089d416*/
        }
        v96 = v91[0]; /*0x10089d42b*/
        v95 = v90; /*0x10089d433*/
        v94 = v89; /*0x10089d43e*/
        v93 = v88; /*0x10089d442*/
        if ( v81 ) /*0x10089d449*/
        {
          for ( i = 0; v81 != i; ++i ) /*0x10089d44b*/
          {
            v37 = *(_BYTE *)(v80 + i); /*0x10089d45d*/
            if ( v37 > 0x1Fu ) /*0x10089d464*/
            {
              if ( v37 == 127 ) /*0x10089d453*/
                goto LABEL_42; /*0x10089d453*/
            }
            else if ( v37 != 9 ) /*0x10089d469*/
            {
LABEL_42:
              if ( v93 ) /*0x10089d472*/
                (*(void (__fastcall **)(__int64 *, __int64, __int64))(v93 + 32))(&v96, v94, v95); /*0x10089d484*/
              goto LABEL_47; /*0x10089d487*/
            }
          }
        }
        bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(v62, v80, v81); /*0x10089d490*/
        LOBYTE(v63) = 0; /*0x10089d49c*/
        v60[0] = v62[0]; /*0x10089d4b1*/
        v60[1] = v62[1]; /*0x10089d4b8*/
        v60[2] = v62[2]; /*0x10089d4c6*/
        v60[3] = v62[3]; /*0x10089d4d4*/
        v60[4] = v63; /*0x10089d4e2*/
        v61[3] = v96; /*0x10089d4ed*/
        v61[2] = v95; /*0x10089d4f8*/
        v61[1] = v94; /*0x10089d507*/
        v61[0] = v93; /*0x10089d50e*/
        http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v82, v69, v61, v60); /*0x10089d531*/
        if ( (_BYTE)v86 == 3 ) /*0x10089d53d*/
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016756B5, 23, &v97, &unk_10196D420, &off_10196D130); /*0x10089dd11*/
        v67[1] = v86; /*0x10089d54a*/
        v67[0] = v85; /*0x10089d558*/
        v66 = v84; /*0x10089d566*/
        v65 = v83; /*0x10089d57b*/
        v64 = v82; /*0x10089d582*/
        if ( (_BYTE)v86 != 2 ) /*0x10089d58b*/
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v64 + 32))(v67, v65, v66); /*0x10089d5a9*/
LABEL_47:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v79); /*0x10089d5b0*/
        if ( v13 ) /*0x10089d5bf*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x10089d5d0*/
      }
      _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h92199a5704cddc1e(&v70); /*0x10089dcec*/
    }
  }
}