// __ZN13codexmate_lib4core5relay13codex_catalog30load_official_catalog_snapshot @ 0x100223520 | 1.2.4 NEW-delta
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::codex_catalog::load_official_catalog_snapshot::habb5579c0ab2db89(
        void *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r14
  _QWORD *v13; // r15
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // rsi
  signed __int64 v17; // r12
  int v18; // ebx
  __int64 v19; // rdi
  char v20; // r13
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rsi
  int v25; // r13d
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rbx
  int v31; // r14d
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 i; // rbx
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int8 *v38; // rax
  int v39; // edx
  __int128 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  __int128 v46; // kr10_16
  __int64 v47; // rcx
  __int64 v48; // rcx
  __m128i v49; // xmm1
  __int64 ps; // rsi
  __int64 v51; // r13
  __int64 v52; // rbx
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r14
  __int64 v59; // r15
  __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 result; // rax
  __m128i v63; // xmm2
  unsigned __int8 v64; // cl
  char v65; // al
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 k; // rbx
  __int64 v70; // rsi
  __int64 j; // rbx
  __int8 v72; // al
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // r14
  signed __int64 v76; // r15
  const void *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rbx
  char v80; // al
  unsigned __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int128 v85; // kr40_16
  __int64 v86; // rdi
  __int64 v87; // r14
  __int64 v89; // rbx
  __int64 v90; // r14
  unsigned __int64 v91; // r12
  __int64 v92; // r15
  __int64 v93; // r13
  __int64 v94; // rbx
  const __m128i *v96; // r14
  int v97; // r12d
  __int64 v98; // rax
  __int64 v99; // rsi
  unsigned __int64 v100; // rax
  __int64 v101; // r15
  bool v102; // zf
  __int64 v103; // r15
  __int64 v104; // r15
  __int64 v105; // rbx
  __int64 v106; // [rsp+8h] [rbp-2A8h]
  __int64 v107; // [rsp+10h] [rbp-2A0h]
  __int64 v108; // [rsp+18h] [rbp-298h] BYREF
  __int64 v109; // [rsp+20h] [rbp-290h]
  __int64 v110; // [rsp+28h] [rbp-288h]
  _QWORD v111[3]; // [rsp+30h] [rbp-280h] BYREF
  __int128 v112; // [rsp+48h] [rbp-268h] BYREF
  __int64 v113; // [rsp+58h] [rbp-258h]
  __int64 v114; // [rsp+60h] [rbp-250h]
  _BYTE v115[152]; // [rsp+68h] [rbp-248h] BYREF
  __int128 v116; // [rsp+100h] [rbp-1B0h]
  __int64 v117; // [rsp+110h] [rbp-1A0h]
  __int64 v118; // [rsp+118h] [rbp-198h] BYREF
  __int64 v119; // [rsp+120h] [rbp-190h]
  unsigned __int64 v120; // [rsp+128h] [rbp-188h]
  __int128 v121; // [rsp+130h] [rbp-180h]
  __int64 v122; // [rsp+140h] [rbp-170h]
  __int64 v123; // [rsp+148h] [rbp-168h] BYREF
  unsigned __int64 v124; // [rsp+150h] [rbp-160h]
  _BYTE v125[15]; // [rsp+158h] [rbp-158h]
  __m256i v126; // [rsp+168h] [rbp-148h] BYREF
  void *v127; // [rsp+188h] [rbp-128h]
  __m128i v128; // [rsp+190h] [rbp-120h] BYREF
  __int64 v129; // [rsp+1A8h] [rbp-108h]
  _OWORD v130[10]; // [rsp+1B0h] [rbp-100h] BYREF
  __int64 v131; // [rsp+250h] [rbp-60h] BYREF
  unsigned __int64 v132; // [rsp+258h] [rbp-58h]
  void *v133; // [rsp+260h] [rbp-50h]
  __int64 v134; // [rsp+268h] [rbp-48h]
  __int64 v135; // [rsp+270h] [rbp-40h]
  __int64 v136; // [rsp+278h] [rbp-38h]
  const void *v137; // [rsp+280h] [rbp-30h]

  v127 = a1;
  std::path::Path::_join::hb1a495d4f06b13b8(
    &v108,
    a2,
    a3,
    "models_cache.json[AiMaMi][catalog] merged account model cache with the matching ChatGPT bundled catalog[AiMaMi][cata"
    "log] using the current ChatGPT bundled official model catalog[AiMaMi][catalog] bundled model command unavailable; us"
    "ing version-matched account model cache[AiMaMi][catalog] current ChatGPT bundled catalog unavailable; account model "
    "cache is not verified current[AiMaMi][catalog] no usable official model source; relay-only catalog will be generated",
    17);
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v126, v109, v110);
  v3 = v126.i64[0];
  if ( !__OFSUB__(-v126.i64[0], 1) )
  {
    v12 = v126.i64[1];
    v130[0] = *(__int128 *)((char *)v126.i128 + 8);
    v130[1] = 0u;
    v130[2] = *(__int128 *)((char *)v126.i128 + 8);
    serde_json::de::from_trait::hbc9c8c8dee91749d(v115, v130);
    if ( v115[0] == 6 )
    {
      v13 = *(_QWORD **)&v115[8];
      v123 = *(_QWORD *)&v115[8];
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        *(_QWORD *)&v112 = &v123;
        *((_QWORD *)&v112 + 1) = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
        *(_QWORD *)&v130[3] = 2;
        *((_QWORD *)&v130[3] + 1) = &unk_1015E09CE;
        *(_QWORD *)&v130[4] = 41;
        *(_QWORD *)&v130[5] = &unk_1017C1C90;
        *((_QWORD *)&v130[5] + 1) = &v112;
        *(_QWORD *)&v130[0] = 0;
        *((_QWORD *)&v130[0] + 1) = &unk_1015E09CE;
        v130[1] = 0x29u;
        *(_QWORD *)&v130[2] = "src/core/relay/codex_catalog.rs";
        *((_QWORD *)&v130[2] + 1) = 31;
        *((_QWORD *)&v130[4] + 1) = 0x3D800000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v111, v130);
        v13 = (_QWORD *)v123;
      }
      LOBYTE(v112) = 6;
      if ( *v13 == 1 )
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hdaf8ae7044e1e341(v13 + 1);
      }
      else if ( !*v13 )
      {
        v14 = v13[2];
        if ( v14 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13[1], v14, 1);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 40, 8);
      if ( !v3 )
        goto LABEL_23;
    }
    else
    {
      v114 = *(_QWORD *)&v115[24];
      v113 = *(_QWORD *)&v115[16];
      v112 = *(_OWORD *)v115;
      if ( !v3 )
        goto LABEL_23;
    }
    v10 = 1;
    v11 = v12;
    v9 = v3;
LABEL_22:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v9, v10);
    goto LABEL_23;
  }
  v4 = v126.i64[1];
  v123 = v126.i64[1];
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
  {
    *(_QWORD *)v115 = &v108;
    *(_QWORD *)&v115[8] = _$LT$std..sys..os_str..bytes..Buf$u20$as$u20$core..fmt..Debug$GT$::fmt::hb0f847ebf8eb0122;
    *(_QWORD *)&v115[16] = &v123;
    *(_QWORD *)&v115[24] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    *(_QWORD *)&v130[3] = 2;
    *((_QWORD *)&v130[3] + 1) = &unk_1015E09CE;
    *(_QWORD *)&v130[4] = 41;
    *(_QWORD *)&v130[5] = &unk_1017C1CF1;
    *((_QWORD *)&v130[5] + 1) = v115;
    *(_QWORD *)&v130[0] = 0;
    *((_QWORD *)&v130[0] + 1) = &unk_1015E09CE;
    v130[1] = 0x29u;
    *(_QWORD *)&v130[2] = "src/core/relay/codex_catalog.rs";
    *((_QWORD *)&v130[2] + 1) = 31;
    *((_QWORD *)&v130[4] + 1) = 0x3DF00000001LL;
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v111, v130);
    v4 = v123;
  }
  LOBYTE(v112) = 6;
  if ( (v4 & 3) == 1 )
  {
    v5 = v4 - 1;
    v6 = *(_QWORD *)(v4 - 1);
    v7 = *(_QWORD *)(v4 + 7);
    if ( *(_QWORD *)v7 )
      (*(void (__fastcall **)(__int64))v7)(v6);
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16));
    v9 = 24;
    v10 = 8;
    v11 = v5;
    goto LABEL_22;
  }
LABEL_23:
  codexmate_lib::platform::process::codex_bundled_cli_path::h4dba3c7421ecd304(v130);
  v129 = *(_QWORD *)&v130[0];
  if ( *(_QWORD *)&v130[0] != 0x8000000000000000LL )
  {
    v16 = *((_QWORD *)&v130[0] + 1);
    v17 = *(_QWORD *)&v130[1];
    v133 = *((void **)&v130[0] + 1);
    std::sys::fs::metadata::h32fa16d3052ea535(v130, *((_QWORD *)&v130[0] + 1), *(_QWORD *)&v130[1]);
    if ( LOBYTE(v130[0]) )
    {
      *(_QWORD *)v115 = 0;
      v18 = 1000000000;
      if ( (BYTE8(v130[0]) & 3) != 1 )
      {
        v128.i64[0] = 0;
        if ( !qword_101A0FCC8 )
          goto LABEL_32;
        goto LABEL_44;
      }
      v21 = *((_QWORD *)&v130[0] + 1) - 1LL;
      v22 = *(_QWORD *)(*((_QWORD *)&v130[0] + 1) - 1LL);
      v23 = *(_QWORD *)(*((_QWORD *)&v130[0] + 1) + 7LL);
      if ( *(_QWORD *)v23 )
        (*(void (__fastcall **)(__int64))v23)(v22);
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16));
      v16 = 24;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24, 8);
      v128.i64[0] = 0;
      v18 = 1000000000;
      if ( qword_101A0FCC8 )
LABEL_44:
        std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h3de81a062d74ff3a(&codexmate_lib::core::relay::codex_catalog::BUNDLED_CATALOG_CACHE::hc0d8a07b1b0c10c7);
    }
    else
    {
      memcpy(&v115[16], &v130[1], 0x88u);
      v16 = (__int64)&v115[8];
      *(_QWORD *)&v115[8] = *((_QWORD *)&v130[0] + 1);
      *(_QWORD *)v115 = 1;
      std::fs::Metadata::modified::h0e075817eaa8c909(v130, &v115[8]);
      v18 = DWORD2(v130[0]);
      v134 = *(_QWORD *)&v130[0];
      if ( DWORD2(v130[0]) == 1000000000 && (v130[0] & 3) == 1 )
      {
        v25 = DWORD2(v130[0]);
        v26 = v134 - 1;
        v27 = *(_QWORD *)(v134 - 1);
        v28 = *(_QWORD *)(v134 + 7);
        if ( *(_QWORD *)v28 )
          (*(void (__fastcall **)(_QWORD))v28)(*(_QWORD *)(v134 - 1));
        v29 = *(_QWORD *)(v28 + 8);
        if ( v29 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16));
        v16 = 24;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 24, 8);
        v18 = v25;
      }
      v128.i64[0] = 1;
      v135 = *(_QWORD *)&v115[104];
      if ( qword_101A0FCC8 )
        goto LABEL_44;
    }
LABEL_32:
    v19 = codexmate_lib::core::relay::codex_catalog::BUNDLED_CATALOG_CACHE::hc0d8a07b1b0c10c7;
    if ( !codexmate_lib::core::relay::codex_catalog::BUNDLED_CATALOG_CACHE::hc0d8a07b1b0c10c7 )
      v19 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h719e63cd76cd1e9b(&codexmate_lib::core::relay::codex_catalog::BUNDLED_CATALOG_CACHE::hc0d8a07b1b0c10c7);
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0();
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v20 = ((__int64 (*)(void))std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd)() ^ 1;
      if ( byte_101A0FC60 )
      {
LABEL_36:
        if ( !v20
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v19, v16) )
        {
          byte_101A0FC60 = 1;
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(
          codexmate_lib::core::relay::codex_catalog::BUNDLED_CATALOG_CACHE::hc0d8a07b1b0c10c7,
          v16);
        codexmate_lib::core::relay::codex_catalog::read_bundled_cli_version::h1fdb01aca0dd13e0(v130);
        codexmate_lib::core::relay::codex_catalog::read_bundled_models::h152c00ceae399d4b(v115);
        *(_QWORD *)&v130[2] = *(_QWORD *)&v115[16];
        v130[1] = *(_OWORD *)v115;
        goto LABEL_88;
      }
    }
    else
    {
      v20 = 0;
      if ( byte_101A0FC60 )
        goto LABEL_36;
    }
    if ( (_DWORD)qword_101A0FC68 == 2
      || !(unsigned __int8)_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(
                             qword_101A0FC80,
                             qword_101A0FC88,
                             v133,
                             v17) )
    {
      goto LABEL_65;
    }
    if ( dword_101A0FC98 == 1000000000 )
    {
      if ( v18 != 1000000000 )
        goto LABEL_65;
    }
    else if ( v18 == 1000000000 || dword_101A0FC98 != v18 || qword_101A0FC90 != v134 )
    {
      goto LABEL_65;
    }
    if ( (v128.i32[0] & (unsigned int)qword_101A0FC68) != 0 )
    {
      if ( qword_101A0FC70 == v135 )
        goto LABEL_61;
    }
    else if ( !(v128.i64[0] | qword_101A0FC68) )
    {
LABEL_61:
      if ( (_QWORD)xmmword_101A0FCA0 != 0x8000000000000000LL || (_DWORD)xmmword_101A0FCB8 != 0 )
      {
        if ( (_QWORD)xmmword_101A0FCA0 != 0x8000000000000000LL )
        {
          v126.i128[0] = xmmword_101A0FCB8;
LABEL_84:
          v35 = *((_QWORD *)&xmmword_101A0FCA0 + 1);
          _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h052fd23693ef7657(
            v130,
            *((_QWORD *)&xmmword_101A0FCA0 + 1),
            qword_101A0FCB0);
          *(_OWORD *)v115 = *(_OWORD *)((char *)v130 + 8);
          v36 = *(_QWORD *)&v130[0];
LABEL_85:
          v130[0] = v126.i128[0];
          *(_QWORD *)&v130[1] = v36;
          *(_OWORD *)((char *)&v130[1] + 8) = *(_OWORD *)v115;
          if ( !v20
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v130, v35) )
          {
            byte_101A0FC60 = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(
            codexmate_lib::core::relay::codex_catalog::BUNDLED_CATALOG_CACHE::hc0d8a07b1b0c10c7,
            v35);
LABEL_88:
          v128 = (__m128i)v130[0];
          v116 = v130[1];
          v117 = *(_QWORD *)&v130[2];
          if ( (_BYTE)v112 == 6 )
            goto LABEL_25;
          goto LABEL_89;
        }
LABEL_83:
        v35 = qword_101A0FC80;
        codexmate_lib::core::relay::codex_catalog::read_bundled_models::h152c00ceae399d4b(v130);
        qword_101A0FCB0 = *(_QWORD *)&v130[1];
        xmmword_101A0FCA0 = v130[0];
        v126.i128[0] = xmmword_101A0FCB8;
        v36 = 0x8000000000000000LL;
        if ( *(_QWORD *)&v130[0] == 0x8000000000000000LL )
          goto LABEL_85;
        goto LABEL_84;
      }
LABEL_82:
      codexmate_lib::core::relay::codex_catalog::read_bundled_cli_version::h1fdb01aca0dd13e0(v130);
      xmmword_101A0FCB8 = v130[0];
      goto LABEL_83;
    }
LABEL_65:
    if ( v17 < 0 )
    {
      v30 = 0;
      goto LABEL_67;
    }
    if ( v17 )
    {
      v31 = v18;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2();
      v30 = 1;
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1);
      if ( !v32 )
LABEL_67:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v17);
      v18 = v31;
    }
    else
    {
      v32 = 1;
    }
    v136 = v32;
    memcpy((void *)v32, v133, v17);
    if ( (_DWORD)qword_101A0FC68 != 2 )
    {
      if ( qword_101A0FC78 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(qword_101A0FC80, qword_101A0FC78, 1);
      if ( (_QWORD)xmmword_101A0FCA0 != 0x8000000000000000LL )
      {
        LODWORD(v137) = v18;
        v33 = *((_QWORD *)&xmmword_101A0FCA0 + 1);
        for ( i = qword_101A0FCB0 + 1; i != 1; --i )
        {
          ((void (*)(void))core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b)();
          v33 += 32;
        }
        v18 = (int)v137;
        if ( (_QWORD)xmmword_101A0FCA0 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&xmmword_101A0FCA0 + 1), 32 * xmmword_101A0FCA0, 8);
      }
    }
    qword_101A0FC68 = v128.i64[0];
    qword_101A0FC70 = v135;
    qword_101A0FC78 = v17;
    qword_101A0FC80 = v136;
    qword_101A0FC88 = v17;
    qword_101A0FC90 = v134;
    dword_101A0FC98 = v18;
    *(_QWORD *)&xmmword_101A0FCA0 = 0x8000000000000000LL;
    LODWORD(xmmword_101A0FCB8) = 0;
    goto LABEL_82;
  }
  *(_QWORD *)&v116 = 0x8000000000000000LL;
  v128 = 0;
  if ( (_BYTE)v112 == 6 )
  {
LABEL_25:
    *(_QWORD *)&v121 = 0x8000000000000000LL;
    v15 = 0;
    goto LABEL_110;
  }
LABEL_89:
  v37 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1015E09C8, 6, &v112);
  if ( v37 && *(_BYTE *)v37 == 4 )
  {
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h052fd23693ef7657(
      v130,
      *(_QWORD *)(v37 + 16),
      *(_QWORD *)(v37 + 24));
    if ( *(_QWORD *)&v130[1] )
    {
      v122 = *(_QWORD *)&v130[1];
      v121 = v130[0];
    }
    else
    {
      *(_QWORD *)&v121 = 0x8000000000000000LL;
      if ( *(_QWORD *)&v130[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v130[0] + 1), 32LL * *(_QWORD *)&v130[0], 8);
    }
  }
  else
  {
    *(_QWORD *)&v121 = 0x8000000000000000LL;
  }
  v38 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                             &unk_1015E0ADD,
                             14,
                             &v112);
  v15 = 0;
  if ( !v38 )
  {
LABEL_110:
    LODWORD(v131) = v15;
    *(_QWORD *)&v40 = v116;
    if ( (_QWORD)v116 != 0x8000000000000000LL )
      goto LABEL_111;
LABEL_98:
    v41 = 0;
    goto LABEL_112;
  }
  v39 = *v38;
  if ( v39 == 4 )
  {
    if ( *((_QWORD *)v38 + 3) >= 3u )
    {
      v42 = *((_QWORD *)v38 + 2);
      if ( *(_BYTE *)v42 == 2 && !*(_QWORD *)(v42 + 8) )
      {
        v43 = *(_QWORD *)(v42 + 16);
        if ( !HIDWORD(v43) && *(_BYTE *)(v42 + 32) == 2 && !*(_QWORD *)(v42 + 40) )
        {
          v44 = *(_QWORD *)(v42 + 48);
          if ( !HIDWORD(v44) && *(_BYTE *)(v42 + 64) == 2 && !*(_QWORD *)(v42 + 72) )
          {
            v45 = *(_QWORD *)(v42 + 80);
            if ( !HIDWORD(v45) )
            {
              HIDWORD(v131) = v43;
              v132 = __PAIR64__(v45, v44);
              v15 = 1;
            }
          }
        }
      }
    }
    goto LABEL_110;
  }
  if ( v39 != 3 )
    goto LABEL_110;
  codexmate_lib::core::relay::codex_catalog::parse_model_client_version_text::h6530e9248077026e(
    &v131,
    *((_QWORD *)v38 + 2),
    *((_QWORD *)v38 + 3));
  *(_QWORD *)&v40 = v116;
  if ( (_QWORD)v116 == 0x8000000000000000LL )
    goto LABEL_98;
LABEL_111:
  v41 = v117;
LABEL_112:
  v46 = v121;
  v47 = 0;
  if ( (_QWORD)v121 != 0x8000000000000000LL )
    v47 = v122;
  v134 = v47;
  *((_QWORD *)&v40 + 1) = *((_QWORD *)&v116 + 1);
  v48 = v117;
  v49 = _mm_load_si128(&v128);
  ps = (unsigned int)_mm_cvtsi128_si32(v49);
  if ( ((unsigned __int8)v131
      & ((_QWORD)v121 != 0x8000000000000000LL && (_QWORD)v40 != 0x8000000000000000LL && (_DWORD)ps != 0)) == 0 )
  {
    if ( (_QWORD)v40 == 0x8000000000000000LL )
    {
      if ( (_QWORD)v121 != 0x8000000000000000LL )
      {
        v63 = _mm_load_si128(&v128);
        v64 = _mm_movemask_pd((__m128d)_mm_cvtepi32_epi64(
                                         _mm_cmpeq_epi32(
                                           _mm_shuffle_epi32(v63, 233),
                                           _mm_loadl_epi64((const __m128i *)((char *)&v131 + 4)))));
        v65 = v64 & v131 & ((_DWORD)ps != 0) & (v64 >> 1) & (HIDWORD(v132) == _mm_extract_epi32(v63, 3));
        *(_OWORD *)v115 = v121;
        *(_QWORD *)&v115[16] = v122;
        v115[73] = v65 ^ 3;
        *(__m128i *)&v115[24] = v63;
        *(_QWORD *)&v115[40] = v131;
        *(_QWORD *)&v115[48] = v132;
        *(_QWORD *)&v115[56] = v41;
        *(_QWORD *)&v115[64] = v134;
        v115[72] = v65;
        v66 = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8;
        switch ( v115[73] )
        {
          case 0:
            goto LABEL_145;
          case 1:
            BUG();
          case 2:
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
            {
              *(_QWORD *)&v130[3] = 2;
              *((_QWORD *)&v130[3] + 1) = &unk_1015E09CE;
              *(_QWORD *)&v130[4] = 41;
              *(_QWORD *)&v130[5] = "[AiMaMi][catalog] bundled model command unavailable; using version-matched account model cache[AiMaMi][catalog] current ChatGPT bundled catalog unavailable; account model cache is not verified current[AiMaMi][catalog] no usable official model source; relay-only catalog will be generated";
              *((_QWORD *)&v130[5] + 1) = 189;
              *(_QWORD *)&v130[0] = 0;
              *((_QWORD *)&v130[0] + 1) = &unk_1015E09CE;
              v130[1] = 0x29u;
              *(_QWORD *)&v130[2] = "src/core/relay/codex_catalog.rs";
              *((_QWORD *)&v130[2] + 1) = 31;
              *((_QWORD *)&v130[4] + 1) = 0x3F600000001LL;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v111, v130);
            }
            goto LABEL_134;
          case 3:
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
            {
              *(_QWORD *)&v130[3] = 2;
              *((_QWORD *)&v130[3] + 1) = &unk_1015E09CE;
              *(_QWORD *)&v130[4] = 41;
              *(_QWORD *)&v130[5] = "[AiMaMi][catalog] current ChatGPT bundled catalog unavailable; account model cache is not verified current[AiMaMi][catalog] no usable official model source; relay-only catalog will be generated";
              *((_QWORD *)&v130[5] + 1) = 213;
              *(_QWORD *)&v130[0] = 0;
              *((_QWORD *)&v130[0] + 1) = &unk_1015E09CE;
              v130[1] = 0x29u;
              *(_QWORD *)&v130[2] = "src/core/relay/codex_catalog.rs";
              *((_QWORD *)&v130[2] + 1) = 31;
              *((_QWORD *)&v130[4] + 1) = 0x3F900000001LL;
              _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v111, v130);
            }
            goto LABEL_134;
          case 4:
            goto LABEL_193;
        }
      }
      *(_QWORD *)v115 = 0;
      *(_QWORD *)&v115[8] = 8;
      *(_QWORD *)&v115[16] = 0;
      *(__m128i *)&v115[24] = v128;
      *(_QWORD *)&v115[40] = v131;
      *(_QWORD *)&v115[48] = v132;
      *(_QWORD *)&v115[56] = v41;
      *(_QWORD *)&v115[64] = v134;
      *(_WORD *)&v115[72] = 1024;
      v66 = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8;
LABEL_193:
      if ( v66 >= 2 )
      {
        *(_QWORD *)&v130[3] = 2;
        *((_QWORD *)&v130[3] + 1) = &unk_1015E09CE;
        *(_QWORD *)&v130[4] = 41;
        *(_QWORD *)&v130[5] = "[AiMaMi][catalog] no usable official model source; relay-only catalog will be generated";
        *((_QWORD *)&v130[5] + 1) = 175;
        *(_QWORD *)&v130[0] = 0;
        *((_QWORD *)&v130[0] + 1) = &unk_1015E09CE;
        v130[1] = 0x29u;
        *(_QWORD *)&v130[2] = "src/core/relay/codex_catalog.rs";
        *((_QWORD *)&v130[2] + 1) = 31;
        *((_QWORD *)&v130[4] + 1) = 0x3FC00000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v111, v130);
      }
      goto LABEL_134;
    }
    v130[0] = v40;
    *(_QWORD *)&v130[1] = v117;
    if ( (_QWORD)v121 == 0x8000000000000000LL )
    {
LABEL_132:
      *(_QWORD *)&v115[16] = *(_QWORD *)&v130[1];
      *(_OWORD *)v115 = v130[0];
      *(__m128i *)&v115[24] = v128;
      *(_QWORD *)&v115[40] = v131;
      *(_QWORD *)&v115[48] = v132;
      *(_QWORD *)&v115[56] = v41;
      *(_QWORD *)&v115[64] = v134;
      *(_WORD *)&v115[72] = 257;
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u )
      {
        *(_QWORD *)&v130[3] = 3;
        *((_QWORD *)&v130[3] + 1) = &unk_1015E09CE;
        *(_QWORD *)&v130[4] = 41;
        *(_QWORD *)&v130[5] = "[AiMaMi][catalog] using the current ChatGPT bundled official model catalog[AiMaMi][catalog] bundled model command unavailable; using version-matched account model cache[AiMaMi][catalog] current ChatGPT bundled catalog unavailable; account model cache is not verified current[AiMaMi][catalog] no usable official model source; relay-only catalog will be generated";
        *((_QWORD *)&v130[5] + 1) = 149;
        *(_QWORD *)&v130[0] = 0;
        *((_QWORD *)&v130[0] + 1) = &unk_1015E09CE;
        v130[1] = 0x29u;
        *(_QWORD *)&v130[2] = "src/core/relay/codex_catalog.rs";
        *((_QWORD *)&v130[2] + 1) = 31;
        *((_QWORD *)&v130[4] + 1) = 0x3F400000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v111, v130);
      }
      goto LABEL_134;
    }
LABEL_127:
    v60 = v122 + 1;
    v61 = *((_QWORD *)&v121 + 1);
    while ( v60 != 1 )
    {
      --v60;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v61, ps, *((_QWORD *)&v40 + 1), v48);
      v61 += 32;
    }
    if ( (_QWORD)v46 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v46 + 1), 32 * v46, 8);
    goto LABEL_132;
  }
  ps = (unsigned int)_mm_movemask_pd((__m128d)_mm_cvtepi32_epi64(
                                                _mm_cmpeq_epi32(
                                                  _mm_shuffle_epi32(v49, 233),
                                                  _mm_loadl_epi64((const __m128i *)((char *)&v131 + 4)))));
  if ( (ps & 1) == 0
    || (LOBYTE(ps) = (unsigned __int8)ps >> 1, !(_BYTE)ps)
    || (ps = (unsigned int)_mm_extract_ps((__m128)v128, 3), HIDWORD(v132) != (_DWORD)ps) )
  {
    v130[0] = v40;
    *(_QWORD *)&v130[1] = v117;
    goto LABEL_127;
  }
  v51 = *((_QWORD *)&v121 + 1);
  v137 = (const void *)v121;
  v135 = v122;
  v53 = *((_QWORD *)&v116 + 1);
  v52 = v116;
  v136 = v117;
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v55 = v54;
  if ( *(_BYTE *)(v54 + 16) == 1 )
  {
    v56 = *(_QWORD *)v54;
    v57 = *(_QWORD *)(v55 + 8);
  }
  else
  {
    v56 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45();
    *(_QWORD *)v55 = v56;
    *(_QWORD *)(v55 + 8) = v57;
    *(_BYTE *)(v55 + 16) = 1;
  }
  *(_QWORD *)v55 = v56 + 1;
  *(_QWORD *)&v115[24] = 0;
  *(_QWORD *)&v115[16] = 0;
  *(_OWORD *)v115 = (unsigned __int64)anon_7245a3145add9b93f83b0a9aa358a664_13;
  *(_QWORD *)&v115[32] = v56;
  *(_QWORD *)&v115[40] = v57;
  v58 = v136 + v135;
  if ( (unsigned __int64)(v136 + v135) > 0x3FFFFFFFFFFFFFFLL )
  {
    v59 = 0;
    goto LABEL_122;
  }
  v107 = v41;
  if ( v58 )
  {
    v106 = v52;
    v52 = 32 * v58;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2();
    v59 = 8;
    v67 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32 * v58, 8);
    if ( !v67 )
LABEL_122:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v59, v52);
    v52 = v106;
  }
  else
  {
    v67 = 8;
  }
  v118 = v58;
  v119 = v67;
  v120 = 0;
  v68 = v53 + 32 * v136;
  *(_QWORD *)&v130[0] = v51;
  *((_QWORD *)&v130[0] + 1) = v51;
  *(_QWORD *)&v130[1] = v137;
  v135 = v51 + 32 * v135;
  *((_QWORD *)&v130[1] + 1) = v135;
  *(_QWORD *)&v130[2] = v53;
  *((_QWORD *)&v130[2] + 1) = v53;
  *(_QWORD *)&v130[3] = v52;
  *((_QWORD *)&v130[3] + 1) = v68;
  k = v51;
  if ( v51 )
    goto LABEL_156;
LABEL_161:
  for ( j = v51; v53 != v68; *(_QWORD *)&v130[0] = 0 )
  {
    *((_QWORD *)&v130[2] + 1) = v53 + 32;
    v72 = *(_BYTE *)v53;
    *(_QWORD *)&v125[7] = *(_QWORD *)(v53 + 24);
    *(_QWORD *)v125 = *(_QWORD *)(v53 + 17);
    v124 = *(_QWORD *)(v53 + 9);
    v123 = *(_QWORD *)(v53 + 1);
    if ( v72 == 6 )
      break;
    v53 += 32;
    v51 = j;
    for ( k = 0; ; k = v70 )
    {
      v126.i8[0] = v72;
      v126.i64[3] = *(_QWORD *)&v125[7];
      *(__int128 *)((char *)v126.i128 + 9) = __PAIR128__(*(unsigned __int64 *)v125, v124);
      *(__int64 *)((char *)v126.i64 + 1) = v123;
      v74 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              "sluglistlastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore",
              4,
              &v126);
      if ( !v74 || *(_BYTE *)v74 != 3 )
        goto LABEL_155;
      v75 = v68;
      v76 = *(_QWORD *)(v74 + 24);
      if ( v76 < 0 )
      {
        v86 = 0;
        goto LABEL_177;
      }
      v77 = *(const void **)(v74 + 16);
      v136 = k;
      if ( v76 )
      {
        v137 = v77;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2();
        v78 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v76, 1);
        if ( !v78 )
        {
          v137 = (const void *)v76;
          v86 = 1;
LABEL_177:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v86, v137);
        }
        v77 = v137;
      }
      else
      {
        v78 = 1;
      }
      v79 = v78;
      memcpy((void *)v78, v77, v76);
      v111[0] = v76;
      v137 = (const void *)v79;
      v111[1] = v79;
      v111[2] = v76;
      v80 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7686243132a986d1(v115, v111);
      v68 = v75;
      k = v136;
      if ( !v80 )
      {
        v81 = v120;
        if ( v120 == v118 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v118);
        v82 = v119;
        v83 = 32 * v81;
        v84 = v126.i64[0];
        v85 = *(__int128 *)((char *)v126.i128 + 8);
        *(_QWORD *)(v119 + v83 + 24) = v126.i64[3];
        *(_OWORD *)(v82 + v83 + 8) = v85;
        *(_QWORD *)(v82 + v83) = v84;
        v120 = v81 + 1;
        k = v136;
        if ( !v136 )
          goto LABEL_161;
      }
      else
      {
LABEL_155:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v126);
        if ( !k )
          goto LABEL_161;
      }
LABEL_156:
      v70 = k;
      j = v135;
      if ( v51 == v135 )
        break;
      j = v51 + 32;
      *((_QWORD *)&v130[0] + 1) = v51 + 32;
      v72 = *(_BYTE *)v51;
      if ( *(_BYTE *)v51 == 6 )
        break;
      *(_QWORD *)&v125[7] = *(_QWORD *)(v51 + 24);
      *(_QWORD *)v125 = *(_QWORD *)(v51 + 17);
      v73 = *(_QWORD *)(v51 + 1);
      v124 = *(_QWORD *)(v51 + 9);
      v123 = v73;
      v51 += 32;
    }
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he78e36ca37a8346e(v130);
  }
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he78e36ca37a8346e(&v130[2]);
  v87 = v119;
  _RAX = (unsigned __int64)v111;
  *(_QWORD *)&v130[0] = v111;
  if ( v120 >= 2 )
  {
    if ( v120 >= 0x15 )
    {
      HIDWORD(_RAX) = (unsigned __int64)core::slice::sort::stable::driftsort_main::h7d3349162b9097ed(v119, v120, v130) >> 32;
    }
    else
    {
      v104 = 32 * v120;
      v105 = 32;
      do
      {
        HIDWORD(_RAX) = (unsigned __int64)core::slice::sort::shared::smallsort::insert_tail::h8f2bf86a48508c1e(
                                            v87,
                                            v87 + v105) >> 32;
        v105 += 32;
      }
      while ( v104 != v105 );
    }
  }
  v89 = v118;
  v90 = v119;
  v91 = v120;
  v92 = *(_QWORD *)&v115[8];
  if ( *(_QWORD *)&v115[8] )
  {
    v137 = (const void *)v120;
    v136 = v119;
    v135 = v118;
    v93 = *(_QWORD *)&v115[24];
    if ( *(_QWORD *)&v115[24] )
    {
      v94 = *(_QWORD *)v115;
      _R12D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v115));
      v96 = (const __m128i *)(*(_QWORD *)v115 + 16LL);
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v97 = _mm_movemask_epi8(_mm_load_si128(v96));
            v94 -= 384;
            ++v96;
          }
          while ( v97 == 0xFFFF );
          _R12D = ~v97;
        }
        __asm { tzcnt   eax, r12d }
        v98 = -3LL * _RAX;
        v99 = *(_QWORD *)(v94 + 8 * v98 - 24);
        if ( v99 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v94 + 8 * v98 - 16), v99, 1);
        --v93;
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v93 );
    }
    v100 = (24 * v92 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v101 = v100 + v92;
    v102 = v101 == -17;
    v103 = v101 + 17;
    v89 = v135;
    v90 = v136;
    v91 = (unsigned __int64)v137;
    if ( !v102 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v115 - v100, v103, 16);
  }
  *(_QWORD *)v115 = v89;
  *(_QWORD *)&v115[8] = v90;
  *(_QWORD *)&v115[16] = v91;
  *(__m128i *)&v115[24] = v128;
  *(_QWORD *)&v115[40] = v131;
  *(_QWORD *)&v115[48] = v132;
  *(_QWORD *)&v115[56] = v107;
  *(_QWORD *)&v115[64] = v134;
  *(_WORD *)&v115[72] = 1;
  v66 = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8;
LABEL_145:
  if ( v66 >= 3 )
  {
    *(_QWORD *)&v130[3] = 3;
    *((_QWORD *)&v130[3] + 1) = &unk_1015E09CE;
    *(_QWORD *)&v130[4] = 41;
    *(_QWORD *)&v130[5] = "[AiMaMi][catalog] merged account model cache with the matching ChatGPT bundled catalog[AiMaMi][catalog] using the current ChatGPT bundled official model catalog[AiMaMi][catalog] bundled model command unavailable; using version-matched account model cache[AiMaMi][catalog] current ChatGPT bundled catalog unavailable; account model cache is not verified current[AiMaMi][catalog] no usable official model source; relay-only catalog will be generated";
    *((_QWORD *)&v130[5] + 1) = 173;
    *(_QWORD *)&v130[0] = 0;
    *((_QWORD *)&v130[0] + 1) = &unk_1015E09CE;
    v130[1] = 0x29u;
    *(_QWORD *)&v130[2] = "src/core/relay/codex_catalog.rs";
    *((_QWORD *)&v130[2] + 1) = 31;
    *((_QWORD *)&v130[4] + 1) = 0x3F000000001LL;
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v111, v130);
  }
LABEL_134:
  qmemcpy(v127, v115, 0x50u);
  result = 2 * v129;
  if ( 2 * v129 )
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v129, 1);
    if ( (_BYTE)v112 == 6 )
      goto LABEL_139;
    goto LABEL_138;
  }
  if ( (_BYTE)v112 != 6 )
LABEL_138:
    result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v112);
LABEL_139:
  if ( v108 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v108, 1);
  return result;
}
