// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::quarantine_damaged_backups::hb80e26441217e933; addr: 0x100225970; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
void __fastcall codexmate_lib::core::relay::config_takeover::quarantine_damaged_backups::hb80e26441217e933(
        __m256i *a1,
        __int64 a2)
{
  void *v2; // r15
  __int64 v3; // r12
  void *v4; // r13
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r15
  __m128i si128; // xmm0
  size_t epi64; // r14
  __m128i v10; // xmm0
  void *v11; // rdx
  int v12; // edx
  unsigned __int128 v13; // kr20_16
  char v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdi
  size_t v17; // r14
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // r13
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // r14
  size_t v28; // rdx
  __int32 v29; // edx
  unsigned __int128 v30; // kr40_16
  char v31; // r12
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // r15
  __int64 v37; // r15
  __int64 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  size_t v45; // r15
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // r13
  __int64 v50; // r14
  size_t v51; // r14
  __int64 v52; // r13
  __int64 v53; // [rsp+0h] [rbp-2A0h] BYREF
  __int128 v54; // [rsp+8h] [rbp-298h]
  __int64 v55; // [rsp+18h] [rbp-288h] BYREF
  __int128 v56; // [rsp+20h] [rbp-280h]
  unsigned __int128 v57; // [rsp+30h] [rbp-270h] BYREF
  __int64 v58; // [rsp+48h] [rbp-258h] BYREF
  void *v59; // [rsp+50h] [rbp-250h]
  size_t v60; // [rsp+58h] [rbp-248h]
  size_t v61; // [rsp+60h] [rbp-240h] BYREF
  size_t v62; // [rsp+68h] [rbp-238h]
  __int64 v63; // [rsp+70h] [rbp-230h] BYREF
  __int64 v64; // [rsp+78h] [rbp-228h]
  __int64 v65; // [rsp+80h] [rbp-220h]
  __int64 v66; // [rsp+88h] [rbp-218h]
  __m256i v67; // [rsp+90h] [rbp-210h] BYREF
  __m256i v68; // [rsp+B0h] [rbp-1F0h]
  __int64 v69; // [rsp+D0h] [rbp-1D0h]
  __int64 v70; // [rsp+D8h] [rbp-1C8h] BYREF
  size_t v71[2]; // [rsp+E0h] [rbp-1C0h]
  __m256i v72; // [rsp+F0h] [rbp-1B0h]
  __m256i v73; // [rsp+110h] [rbp-190h]
  __m256i v74; // [rsp+130h] [rbp-170h] BYREF
  __m256i v75; // [rsp+150h] [rbp-150h]
  void *v76; // [rsp+170h] [rbp-130h]
  const char *v77; // [rsp+178h] [rbp-128h] BYREF
  __int64 v78; // [rsp+180h] [rbp-120h]
  __int64 v79; // [rsp+188h] [rbp-118h]
  size_t v80; // [rsp+190h] [rbp-110h]
  void *__s2; // [rsp+198h] [rbp-108h]
  __m256i v82[4]; // [rsp+1A0h] [rbp-100h] BYREF
  size_t v83; // [rsp+238h] [rbp-68h]
  size_t v84; // [rsp+240h] [rbp-60h]
  size_t __n; // [rsp+248h] [rbp-58h]
  void *v86; // [rsp+250h] [rbp-50h]
  void *__s1; // [rsp+258h] [rbp-48h]
  void *__src[2]; // [rsp+260h] [rbp-40h] BYREF
  __int64 v89; // [rsp+270h] [rbp-30h]

  codexmate_lib::core::relay::config_takeover::validate_recovery_backups::hf07139a7618471cb(v82, a2); /*0x100225991*/
  if ( v82[0].i32[0] != 11 ) /*0x10022599d*/
  {
    qmemcpy(a1, v82, 0x60u); /*0x100225c6e*/
    return; /*0x100225c6e*/
  }
  v63 = 0; /*0x1002259a3*/
  v64 = 8; /*0x1002259ae*/
  v65 = 0; /*0x1002259b9*/
  v2 = *(void **)(a2 + 584); /*0x1002259c4*/
  v3 = *(_QWORD *)(a2 + 592); /*0x1002259cb*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v58, v2, v3, &anon_8cf26f36e03587b9a54b9e7945b707cc_90, 27); /*0x1002259ef*/
  v79 = v3; /*0x1002259f4*/
  v4 = v59; /*0x1002259fb*/
  v77 = (const char *)&anon_8cf26f36e03587b9a54b9e7945b707cc_90; /*0x100225a09*/
  v78 = 27; /*0x100225a10*/
  v83 = v60; /*0x100225a2b*/
  codexmate_lib::core::relay::config_takeover::read_backup_bytes::hcc31af03538a90c5( /*0x100225a32*/
    v82,
    (__int64)v59,
    v60,
    (__int64)&anon_8cf26f36e03587b9a54b9e7945b707cc_90,
    27);
  v5 = v82[0].i64[1]; /*0x100225a3e*/
  v6 = v82[0].i64[0]; /*0x100225a3e*/
  *(__m128i *)__src = _mm_loadu_si128((const __m128i *)&v82[0].u128[1]); /*0x100225a4d*/
  if ( v82[0].i64[0] != 11 ) /*0x100225a56*/
  {
    v75 = v82[2]; /*0x100225c8b*/
    v74 = v82[1]; /*0x100225cc3*/
    goto LABEL_12; /*0x100225cc3*/
  }
  v76 = v2; /*0x100225a5c*/
  v7 = 0x8000000000000000LL; /*0x100225a63*/
  v80 = v82[0].u64[1]; /*0x100225a6d*/
  v5 = 0x8000000000000000LL; /*0x100225a77*/
  if ( __OFSUB__(-v82[0].i64[1], 1) ) /*0x100225a7a*/
    goto LABEL_29; /*0x100225a7a*/
  si128 = _mm_load_si128((const __m128i *)__src); /*0x100225a80*/
  epi64 = _mm_extract_epi64(si128, 1); /*0x100225a8a*/
  __s2 = (void *)si128.i64[0]; /*0x100225a98*/
  codexmate_lib::core::relay::config_takeover::decode_backup::h928ff6b99b2210ae(v82, si128.i64[0], epi64); /*0x100225aa2*/
  __n = epi64; /*0x100225aa7*/
  v5 = v82[0].i64[1]; /*0x100225ab2*/
  v6 = v82[0].i64[0]; /*0x100225ab2*/
  v10 = _mm_loadu_si128((const __m128i *)&v82[0].u128[1]); /*0x100225ab9*/
  v67 = v82[1]; /*0x100225ad6*/
  v68 = v82[2]; /*0x100225b00*/
  if ( v82[0].i64[0] != 11 ) /*0x100225b35*/
  {
    *(__m128i *)__src = v10; /*0x100225eab*/
    v75 = v68; /*0x100225ec5*/
    v74 = v67; /*0x100225efd*/
    goto LABEL_26; /*0x100225f20*/
  }
  v70 = v82[0].i64[1]; /*0x100225b3b*/
  *(__m128i *)v71 = v10; /*0x100225b42*/
  v72 = v67; /*0x100225b58*/
  v73 = v68; /*0x100225b89*/
  if ( v82[0].i64[1] != 0x8000000000000000LL ) /*0x100225bbd*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..config_takeover..TakeoverBackup$GT$::hffd787307f7fc18a(&v70); /*0x100225f2c*/
    v6 = 11; /*0x100225f31*/
    v5 = 0x8000000000000000LL; /*0x100225f37*/
    goto LABEL_26; /*0x100225f3a*/
  }
  __src[0] = (void *)std::path::Path::parent::h4c3ac26770731fbb(v4, v83); /*0x100225bcf*/
  __s1 = v11; /*0x100225bd3*/
  if ( !__src[0] ) /*0x100225bdc*/
  {
    v70 = (__int64)&v77; /*0x100225f8c*/
    v71[0] = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100225f9a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v82[0].u32[2], "\xC0\x18 has no parent directory", &v70); /*0x100225fb6*/
LABEL_25:
    v5 = v82[0].i64[1]; /*0x100225fbb*/
    *(__m128i *)__src = _mm_loadu_si128((const __m128i *)&v82[0].u128[1]); /*0x100225fca*/
    v74 = v82[1]; /*0x100225fd6*/
    v75 = v82[2]; /*0x10022600e*/
    v6 = 10; /*0x10022603f*/
    goto LABEL_26; /*0x10022603f*/
  }
  v70 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x100225be7*/
  LODWORD(v71[0]) = v12; /*0x100225bee*/
  std::time::SystemTime::duration_since::had059553cab94f96(v82, &v70, 0, 0); /*0x100225c06*/
  v86 = v4; /*0x100225c0b*/
  v13 = v82[0].u64[1] * (unsigned __int128)0x3E8uLL + v82[0].u32[4] / 0xF4240uLL; /*0x100225c2c*/
  v14 = 0; /*0x100225c33*/
  if ( v82[0].i8[0] ) /*0x100225c3d*/
    v13 = 0u; /*0x100225c41*/
  v57 = v13; /*0x100225c45*/
  while ( 1 )
  {
    LOBYTE(v61) = v14; /*0x100225d95*/
    v82[0].i64[0] = (__int64)&v77; /*0x100225da3*/
    v82[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100225db1*/
    v82[0].i64[2] = (__int64)&v57; /*0x100225dbf*/
    v82[0].i64[3] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100225dcd*/
    v82[1].i64[0] = (__int64)&v61; /*0x100225ddb*/
    v82[1].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b; /*0x100225de9*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v70, "\xC0\x09.damaged-\xC0\x01-\xC0\x04.bak", v82); /*0x100225e01*/
    v17 = v71[0]; /*0x100225e06*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v67, __src[0], __s1, v71[0], v71[1]); /*0x100225e26*/
    if ( v70 ) /*0x100225e35*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v70, 1); /*0x100225e3f*/
    v89 = v67.i64[0]; /*0x100225e4b*/
    v18 = v67.i64[2]; /*0x100225e56*/
    v84 = v67.u64[1]; /*0x100225e60*/
    std::sys::fs::metadata::h32fa16d3052ea535(v82, v67.i64[1], v67.i64[2]); /*0x100225e67*/
    v19 = v82[0].i64[0]; /*0x100225e6c*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h47ac3589c64e6d2a( /*0x100225e7d*/
      v82[0].i64[0],
      v82[0].i64[1]);
    if ( !v19 ) /*0x100225e85*/
    {
      if ( v89 ) /*0x100225e92*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v89, 1); /*0x100225ea1*/
      goto LABEL_15; /*0x100225ea6*/
    }
    if ( v89 != 0x8000000000000000LL ) /*0x100225d82*/
      break; /*0x100225d82*/
LABEL_15:
    if ( ++v14 == 100 )
    {
      v70 = (__int64)&v77; /*0x100225f46*/
      v71[0] = (size_t)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100225f54*/
      v4 = v86; /*0x100225f70*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        &v82[0].u32[2],
        ",cannot allocate quarantine path for damaged \xC0\x1Bsync restored config.toml: \xC0\x1Cwrite restored config.to"
        "ml: \xC0\x16sync takeover backup: \xC0\x1Bserialize takeover backup: \xC0\x17write takeover backup: \xC0$write t"
        "akeover-cleaned config.toml: \xC0\atarget=\xC0\x01 \xC02[AiMaMi][router-transition] journal write failed: \xC0sr"
        "c/core/relay/router_transition.rs",
        &v70);
      v7 = 0x8000000000000000LL; /*0x100225f79*/
      goto LABEL_25; /*0x100225f83*/
    }
  }
  v4 = v86; /*0x1002265c3*/
  v7 = 0x8000000000000000LL; /*0x1002265cc*/
  if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hba6c6a10ebc72e28(v84, v18, __s2, __n) & 1) != 0 /*0x1002265dd*/
    || codexmate_lib::core::relay::atomic_write::Publication::require_sync::he91a5964ccac7564(v39) )
  {
    codexmate_lib::core::relay::config_takeover::quarantine_damaged_backup::_$u7b$$u7b$closure$u7d$$u7d$::h537b2ac9ee30a366( /*0x1002265fc*/
      v82,
      &v77);
    goto LABEL_68; /*0x1002265fc*/
  }
  std::fs::read::inner::h6a30c15c40add28b(&v70, v84, v18); /*0x100226964*/
  if ( v70 == 0x8000000000000000LL ) /*0x100226973*/
  {
    codexmate_lib::core::relay::config_takeover::quarantine_damaged_backup::_$u7b$$u7b$closure$u7d$$u7d$::h32340d49a2bfad97( /*0x10022698a*/
      v82,
      &v77,
      v71[0]);
LABEL_68:
    v5 = v82[0].i64[1]; /*0x100226601*/
    v6 = v82[0].i64[0]; /*0x100226608*/
    *(_OWORD *)__src = v82[0].i128[1]; /*0x100226616*/
    v74 = v82[1]; /*0x100226621*/
    v75 = v82[2]; /*0x100226659*/
LABEL_69:
    if ( v89 ) /*0x100226691*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v89, 1); /*0x1002266a0*/
LABEL_26:
    if ( v80 ) /*0x10022604f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v80, 1); /*0x10022605d*/
    if ( v6 == 11 ) /*0x100226066*/
    {
LABEL_29:
      if ( v5 != 0x8000000000000000LL ) /*0x10022606f*/
        goto LABEL_30; /*0x10022606f*/
      goto LABEL_33; /*0x10022606f*/
    }
LABEL_12:
    a1[2] = v75; /*0x100225ce6*/
    a1[1] = v74; /*0x100225d24*/
    a1->i64[0] = v6; /*0x100225d3e*/
    a1->i64[1] = v5; /*0x100225d41*/
    a1->u128[1] = (unsigned __int128)_mm_load_si128((const __m128i *)__src); /*0x100225d4a*/
    v15 = v58; /*0x100225d4f*/
    if ( v58 ) /*0x100225d59*/
    {
      v16 = (__int64)v4; /*0x100225d64*/
      goto LABEL_46; /*0x100225d67*/
    }
LABEL_47:
    v33 = v65; /*0x100226365*/
    if ( v65 ) /*0x10022636f*/
    {
      v34 = (_QWORD *)(v64 + 8); /*0x100226378*/
      do /*0x100226387*/
      {
        v35 = *(v34 - 1); /*0x100226389*/
        if ( v35 ) /*0x100226390*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v34, v35, 1); /*0x10022639a*/
        v34 += 3; /*0x100226380*/
        --v33; /*0x100226384*/
      }
      while ( v33 ); /*0x100226387*/
    }
    if ( v63 ) /*0x1002263ab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, 24 * v63, 8); /*0x1002263c5*/
    return; /*0x1002263ca*/
  }
  __s1 = (void *)v71[0]; /*0x10022699b*/
  v66 = v70; /*0x1002269aa*/
  if ( v71[1] != __n || memcmp(__s1, __s2, __n) ) /*0x1002269be*/
  {
    v82[0].i64[0] = (__int64)&v77; /*0x1002269d2*/
    v82[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1002269e0*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1002269fc*/
      &v55,
      "\bdamaged \xC0\x21 quarantine verification mismatch",
      v82);
    v5 = v55; /*0x100226a01*/
    v6 = 10; /*0x100226a08*/
    *(_OWORD *)__src = v56; /*0x100226a15*/
    goto LABEL_96; /*0x100226a15*/
  }
  std::fs::read::inner::h6a30c15c40add28b(&v70, v4, v83); /*0x100226b3f*/
  v69 = v70; /*0x100226b4b*/
  if ( v70 == 0x8000000000000000LL ) /*0x100226b55*/
  {
    codexmate_lib::core::relay::config_takeover::quarantine_damaged_backup::_$u7b$$u7b$closure$u7d$$u7d$::h709984a275c12bf5( /*0x100226b70*/
      v82,
      &v77,
      v71[0]);
    v5 = v82[0].i64[1]; /*0x100226b7c*/
    v6 = v82[0].i64[0]; /*0x100226b7c*/
    *(_OWORD *)__src = v82[0].i128[1]; /*0x100226b8a*/
    v74 = v82[1]; /*0x100226b95*/
    v75 = v82[2]; /*0x100226bcd*/
    goto LABEL_96; /*0x100226bfe*/
  }
  v45 = v71[0]; /*0x100226c03*/
  if ( v71[1] != __n || memcmp((const void *)v71[0], __s2, __n) ) /*0x100226c25*/
  {
    v82[0].i64[0] = (__int64)&v77; /*0x100226c39*/
    v82[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100226c47*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x100226c63*/
      &v53,
      "\xC0\x31 changed during recovery; original left untouched",
      v82);
    v5 = v53; /*0x100226c68*/
    v6 = 10; /*0x100226c6f*/
    *(_OWORD *)__src = v54; /*0x100226c7c*/
    if ( v69 ) /*0x100226c88*/
      goto LABEL_110; /*0x100226c88*/
    goto LABEL_111; /*0x100226c88*/
  }
  v47 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v86, v83); /*0x100226e32*/
  if ( v47 ) /*0x100226e3a*/
  {
    codexmate_lib::core::relay::config_takeover::quarantine_damaged_backup::_$u7b$$u7b$closure$u7d$$u7d$::h723a09f041dd5a75( /*0x100226e51*/
      v82,
      &v77,
      v47);
    v5 = v82[0].i64[1]; /*0x100226e5d*/
    v6 = v82[0].i64[0]; /*0x100226e5d*/
    *(_OWORD *)__src = v82[0].i128[1]; /*0x100226e6b*/
    v74 = v82[1]; /*0x100226e76*/
    v75 = v82[2]; /*0x100226eae*/
    if ( v69 ) /*0x100226ee7*/
LABEL_110:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v69, 1); /*0x100226c8a*/
LABEL_111:
    v7 = 0x8000000000000000LL; /*0x100226c9e*/
    v4 = v86; /*0x100226ca8*/
LABEL_96:
    if ( v66 ) /*0x100226a23*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v66, 1); /*0x100226a32*/
    goto LABEL_69; /*0x100226a37*/
  }
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100226fbc*/
  {
    v61 = (size_t)v86; /*0x100226fc6*/
    v62 = v83; /*0x100226fd1*/
    v67.i64[0] = v84; /*0x100226fdc*/
    v67.i64[1] = v18; /*0x100226fe3*/
    v70 = (__int64)&v61; /*0x100226ff1*/
    v71[0] = (size_t)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100226fff*/
    v71[1] = (size_t)&v67; /*0x10022700d*/
    v72.i64[0] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100227014*/
    v82[0].i64[0] = (__int64)&unk_1016EA38A; /*0x100227022*/
    v82[0].i64[1] = 43; /*0x100227029*/
    v82[0].i64[2] = (__int64)&unk_1016EA38A; /*0x100227034*/
    v82[0].i64[3] = 43; /*0x10022703b*/
    v82[1].i64[0] = (__int64)&off_101AA33C8; /*0x10022704d*/
    log::__private_api::log::hf5bade4875454669( /*0x10022706e*/
      "6[AiMaMi][takeover] damaged backup quarantined; source=\xC0\x0C; preserved=\xC0\xC0\x31 changed during recovery; o"
      "riginal left untouched",
      &v70,
      2,
      v82);
  }
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v70, v84, v18); /*0x100227081*/
  __src[0] = (void *)v71[0]; /*0x10022708d*/
  v49 = v71[1]; /*0x100227091*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h331ad6372c5f4439(v82, v71[1], 0, 1, 1); /*0x1002270af*/
  v5 = v82[0].i64[1]; /*0x1002270b4*/
  if ( v82[0].i8[0] ) /*0x1002270c2*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v82[0].i64[1], v82[0].i64[2]); /*0x1002273a2*/
  v50 = v82[0].i64[2]; /*0x1002270cf*/
  memcpy((void *)v82[0].i64[2], __src[0], v49); /*0x1002270d9*/
  if ( v69 ) /*0x1002270e6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v69, 1); /*0x1002270f7*/
  if ( v66 ) /*0x100227104*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v66, 1); /*0x100227116*/
  if ( v89 ) /*0x100227120*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v89, 1); /*0x10022712f*/
  if ( v80 ) /*0x10022713c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v80, 1); /*0x100227151*/
  if ( 2 * v70 ) /*0x10022715d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], v70, 1); /*0x100227173*/
  *(__m128i *)__src = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)v49); /*0x100227186*/
  v7 = 0x8000000000000000LL; /*0x10022718b*/
  v4 = v86; /*0x100227195*/
  if ( v5 != 0x8000000000000000LL ) /*0x10022719c*/
  {
LABEL_30:
    v20 = v65; /*0x100226071*/
    if ( v65 == v63 ) /*0x10022607f*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v63); /*0x100226088*/
    v21 = v64; /*0x10022608d*/
    v22 = 3 * v20; /*0x100226094*/
    *(_QWORD *)(v64 + 8 * v22) = v5; /*0x100226098*/
    *(__m128i *)(v21 + 8 * v22 + 8) = _mm_load_si128((const __m128i *)__src); /*0x1002260a1*/
    v65 = v20 + 1; /*0x1002260aa*/
  }
LABEL_33:
  if ( v58 ) /*0x1002260bb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v58, 1); /*0x1002260c5*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v58, v76, v79, "codex_router_top_level_backup.json", 34); /*0x1002260ef*/
  v23 = (__int64)v59; /*0x1002260f4*/
  v77 = "codex_router_top_level_backup.json"; /*0x100226102*/
  v78 = 34; /*0x100226109*/
  v84 = v60; /*0x100226124*/
  codexmate_lib::core::relay::config_takeover::read_backup_bytes::hcc31af03538a90c5( /*0x10022612b*/
    v82,
    (__int64)v59,
    v60,
    (__int64)"codex_router_top_level_backup.json",
    34);
  v24 = v82[0].i64[0]; /*0x100226130*/
  *(__m128i *)__src = _mm_loadu_si128((const __m128i *)&v82[0].u128[1]); /*0x100226146*/
  if ( v82[0].i64[0] != 11 ) /*0x10022614f*/
  {
    v70 = v82[1].i64[1]; /*0x10022628c*/
    v27 = v82[1].i64[0]; /*0x10022628c*/
    *(_OWORD *)v71 = v82[1].i128[1]; /*0x10022629a*/
    v72 = v82[2]; /*0x1002262b6*/
    v7 = v82[0].i64[1]; /*0x1002262e7*/
    goto LABEL_44; /*0x1002262e7*/
  }
  if ( v82[0].i64[1] == 0x8000000000000000LL ) /*0x100226158*/
    goto LABEL_77; /*0x100226158*/
  __s1 = (void *)v82[0].i64[1]; /*0x10022615e*/
  v25 = _mm_load_si128((const __m128i *)__src); /*0x100226162*/
  v76 = (void *)v25.i64[0]; /*0x10022617a*/
  v80 = _mm_extract_epi64(v25, 1); /*0x100226181*/
  codexmate_lib::core::relay::config_takeover::decode_backup::h6c968de0bc1845a9(v82, v25.i64[0], v80); /*0x100226188*/
  v7 = v82[0].i64[1]; /*0x100226194*/
  v24 = v82[0].i64[0]; /*0x100226194*/
  v26 = _mm_loadu_si128((const __m128i *)&v82[0].u128[1]); /*0x10022619b*/
  v27 = v82[1].i64[0]; /*0x1002261a3*/
  *(__m128i *)__src = v26; /*0x1002261ae*/
  if ( v82[0].i64[0] != 11 ) /*0x1002261b3*/
  {
    v72 = v82[2]; /*0x100226521*/
    *(_OWORD *)v71 = v82[1].i128[1]; /*0x100226560*/
    v70 = v82[1].i64[1]; /*0x100226567*/
    goto LABEL_74; /*0x10022656e*/
  }
  v67.i64[0] = v82[0].i64[1]; /*0x1002261b9*/
  *(__m128i *)&v67.u32[2] = v26; /*0x1002261c0*/
  v67.i64[3] = v82[1].i64[0]; /*0x1002261c8*/
  if ( v82[0].i64[1] != 0x8000000000000000LL ) /*0x1002261dc*/
  {
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf7b5376469337172(&v67); /*0x10022657a*/
    if ( v7 ) /*0x100226582*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(_mm_load_si128((const __m128i *)__src).u64[0], 24 * v7, 8); /*0x10022659b*/
    v24 = 11; /*0x1002265a0*/
    v7 = 0x8000000000000000LL; /*0x1002265a6*/
    goto LABEL_74; /*0x1002265b0*/
  }
  __src[0] = (void *)std::path::Path::parent::h4c3ac26770731fbb(v23, v84); /*0x1002261ee*/
  v83 = v28; /*0x1002261f2*/
  if ( !__src[0] ) /*0x1002261fb*/
  {
    v67.i64[0] = (__int64)&v77; /*0x1002266ed*/
    v67.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1002266fb*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v82[0].u32[2], "\xC0\x18 has no parent directory", &v67); /*0x100226717*/
LABEL_73:
    v7 = v82[0].i64[1]; /*0x10022671c*/
    *(__m128i *)__src = _mm_loadu_si128((const __m128i *)&v82[0].u128[1]); /*0x10022672b*/
    v70 = v82[1].i64[1]; /*0x10022673e*/
    v27 = v82[1].i64[0]; /*0x10022673e*/
    *(_OWORD *)v71 = v82[1].i128[1]; /*0x10022674c*/
    v72 = v82[2]; /*0x100226768*/
    v24 = 10; /*0x100226799*/
    goto LABEL_74; /*0x100226799*/
  }
  v67.i64[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x100226206*/
  v67.i32[2] = v29; /*0x10022620d*/
  std::time::SystemTime::duration_since::had059553cab94f96(v82, &v67, 0, 0); /*0x100226225*/
  __n = v23; /*0x10022622a*/
  v30 = v82[0].u64[1] * (unsigned __int128)0x3E8uLL + v82[0].u32[4] / 0xF4240uLL; /*0x10022624b*/
  v31 = 0; /*0x100226252*/
  if ( v82[0].i8[0] ) /*0x10022625c*/
    v30 = 0u; /*0x100226260*/
  v57 = v30; /*0x100226264*/
  while ( 2 )
  {
    LOBYTE(v61) = v31; /*0x1002263f0*/
    v82[0].i64[0] = (__int64)&v77; /*0x1002263fe*/
    v82[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x10022640c*/
    v82[0].i64[2] = (__int64)&v57; /*0x10022641a*/
    v82[0].i64[3] = (__int64)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100226428*/
    v82[1].i64[0] = (__int64)&v61; /*0x100226436*/
    v82[1].i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h5116733add2cda9b; /*0x100226444*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v67, "\xC0\x09.damaged-\xC0\x01-\xC0\x04.bak", v82); /*0x10022645c*/
    v36 = v67.i64[1]; /*0x100226461*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v74, __src[0], v83, v67.i64[1], v67.i64[2]); /*0x100226481*/
    if ( v67.i64[0] ) /*0x100226490*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v67.i64[0], 1); /*0x10022649a*/
    v89 = v74.i64[0]; /*0x1002264a6*/
    v37 = v74.i64[2]; /*0x1002264b1*/
    v79 = v74.i64[1]; /*0x1002264bb*/
    std::sys::fs::metadata::h32fa16d3052ea535(v82, v74.i64[1], v74.i64[2]); /*0x1002264c5*/
    v38 = v82[0].i64[0]; /*0x1002264ca*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h47ac3589c64e6d2a( /*0x1002264db*/
      v82[0].i64[0],
      v82[0].i64[1]);
    if ( !v38 )
    {
      if ( v89 ) /*0x1002264f0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v89, 1); /*0x100226502*/
LABEL_55:
      if ( ++v31 == 100 )
      {
        v67.i64[0] = (__int64)&v77; /*0x1002266b1*/
        v67.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1002266bf*/
        v23 = __n; /*0x1002266db*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(
          &v82[0].u32[2],
          ",cannot allocate quarantine path for damaged \xC0\x1Bsync restored config.toml: \xC0\x1Cwrite restored config."
          "toml: \xC0\x16sync takeover backup: \xC0\x1Bserialize takeover backup: \xC0\x17write takeover backup: \xC0$wri"
          "te takeover-cleaned config.toml: \xC0\atarget=\xC0\x01 \xC02[AiMaMi][router-transition] journal write failed: "
          "\xC0src/core/relay/router_transition.rs",
          &v67);
        goto LABEL_73; /*0x1002266e4*/
      }
      continue; /*0x1002263ea*/
    }
    break;
  }
  if ( v89 == 0x8000000000000000LL ) /*0x1002263dd*/
    goto LABEL_55; /*0x1002263dd*/
  v23 = __n; /*0x10022687d*/
  if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hba6c6a10ebc72e28(v79, v37, v76, v80) & 1) != 0 /*0x10022688d*/
    || codexmate_lib::core::relay::atomic_write::Publication::require_sync::he91a5964ccac7564(v44) )
  {
    codexmate_lib::core::relay::config_takeover::quarantine_damaged_backup::_$u7b$$u7b$closure$u7d$$u7d$::h537b2ac9ee30a366( /*0x1002268ac*/
      v82,
      &v77);
    goto LABEL_88; /*0x1002268ac*/
  }
  std::fs::read::inner::h6a30c15c40add28b(&v67, v79, v37); /*0x100226a4d*/
  v27 = v67.i64[0]; /*0x100226a52*/
  if ( v67.i64[0] == 0x8000000000000000LL ) /*0x100226a66*/
  {
    codexmate_lib::core::relay::config_takeover::quarantine_damaged_backup::_$u7b$$u7b$closure$u7d$$u7d$::h32340d49a2bfad97( /*0x100226a7d*/
      v82,
      &v77,
      v67.i64[1]);
LABEL_88:
    v7 = v82[0].i64[1]; /*0x1002268b1*/
    v24 = v82[0].i64[0]; /*0x1002268b8*/
    *(_OWORD *)__src = v82[0].i128[1]; /*0x1002268c6*/
    v70 = v82[1].i64[1]; /*0x1002268d8*/
    v27 = v82[1].i64[0]; /*0x1002268d8*/
    *(_OWORD *)v71 = v82[1].i128[1]; /*0x1002268e6*/
    v72 = v82[2]; /*0x100226902*/
LABEL_89:
    if ( v89 ) /*0x10022693a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v89, 1); /*0x10022694c*/
LABEL_74:
    if ( __s1 ) /*0x1002267a6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, __s1, 1); /*0x1002267b4*/
    if ( v24 == 11 ) /*0x1002267bd*/
    {
LABEL_77:
      if ( v7 != 0x8000000000000000LL ) /*0x1002267d0*/
        goto LABEL_78; /*0x1002267d0*/
      goto LABEL_81; /*0x1002267d0*/
    }
LABEL_44:
    a1[2] = v72; /*0x1002262ea*/
    a1[1].i64[3] = v71[1]; /*0x10022631d*/
    v32 = v70; /*0x100226321*/
    a1[1].i64[2] = v71[0]; /*0x10022632f*/
    a1[1].i64[1] = v32; /*0x100226333*/
    a1->i64[0] = v24; /*0x100226337*/
    a1->i64[1] = v7; /*0x10022633a*/
    a1->u128[1] = (unsigned __int128)_mm_load_si128((const __m128i *)__src); /*0x100226343*/
    a1[1].i64[0] = v27; /*0x100226348*/
    v15 = v58; /*0x10022634c*/
    if ( v58 ) /*0x100226356*/
    {
      v16 = v23; /*0x10022635d*/
LABEL_46:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x100226360*/
    }
    goto LABEL_47; /*0x100226360*/
  }
  __s2 = (void *)v67.i64[1]; /*0x100226aa0*/
  v83 = v67.i64[0]; /*0x100226aa0*/
  if ( v67.i64[2] != v80 || memcmp((const void *)v67.i64[1], v76, v80) ) /*0x100226ab3*/
  {
    v82[0].i64[0] = (__int64)&v77; /*0x100226ac7*/
    v82[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100226ad5*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x100226af1*/
      &v55,
      "\bdamaged \xC0\x21 quarantine verification mismatch",
      v82);
    v7 = v55; /*0x100226af6*/
    v24 = 10; /*0x100226afd*/
    *(_OWORD *)__src = v56; /*0x100226b0a*/
    goto LABEL_103; /*0x100226b0a*/
  }
  std::fs::read::inner::h6a30c15c40add28b(&v67, v23, v84); /*0x100226cbf*/
  v46 = v67.i64[0]; /*0x100226cc4*/
  if ( v67.i64[0] == 0x8000000000000000LL ) /*0x100226cd8*/
  {
    v23 = __n; /*0x100226cf3*/
    codexmate_lib::core::relay::config_takeover::quarantine_damaged_backup::_$u7b$$u7b$closure$u7d$$u7d$::h709984a275c12bf5( /*0x100226cf7*/
      v82,
      &v77,
      v67.i64[1]);
    v7 = v82[0].i64[1]; /*0x100226d03*/
    v24 = v82[0].i64[0]; /*0x100226d03*/
    *(_OWORD *)__src = v82[0].i128[1]; /*0x100226d11*/
    v70 = v82[1].i64[1]; /*0x100226d23*/
    v27 = v82[1].i64[0]; /*0x100226d23*/
    *(_OWORD *)v71 = v82[1].i128[1]; /*0x100226d31*/
    v72 = v82[2]; /*0x100226d4d*/
    goto LABEL_103; /*0x100226d7e*/
  }
  v86 = (void *)v67.i64[1]; /*0x100226d8a*/
  if ( v67.i64[2] != v80 || memcmp(v86, v76, v80) ) /*0x100226db0*/
  {
    v82[0].i64[0] = (__int64)&v77; /*0x100226dc4*/
    v82[0].i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100226dd2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x100226dee*/
      &v53,
      "\xC0\x31 changed during recovery; original left untouched",
      v82);
    v7 = v53; /*0x100226df3*/
    v24 = 10; /*0x100226dfa*/
    *(_OWORD *)__src = v54; /*0x100226e07*/
    if ( v46 ) /*0x100226e0e*/
      goto LABEL_117; /*0x100226e0e*/
    goto LABEL_118; /*0x100226e0e*/
  }
  v48 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac((void *)__n, v84); /*0x100226efa*/
  if ( v48 ) /*0x100226f02*/
  {
    codexmate_lib::core::relay::config_takeover::quarantine_damaged_backup::_$u7b$$u7b$closure$u7d$$u7d$::h723a09f041dd5a75( /*0x100226f19*/
      v82,
      &v77,
      v48);
    v7 = v82[0].i64[1]; /*0x100226f25*/
    v24 = v82[0].i64[0]; /*0x100226f25*/
    *(_OWORD *)__src = v82[0].i128[1]; /*0x100226f33*/
    v70 = v82[1].i64[1]; /*0x100226f45*/
    v27 = v82[1].i64[0]; /*0x100226f45*/
    *(_OWORD *)v71 = v82[1].i128[1]; /*0x100226f53*/
    v72 = v82[2]; /*0x100226f6f*/
    if ( v46 ) /*0x100226fa3*/
LABEL_117:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v46, 1); /*0x100226e10*/
LABEL_118:
    v23 = __n; /*0x100226e21*/
LABEL_103:
    if ( v83 ) /*0x100226b15*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v83, 1); /*0x100226b27*/
    goto LABEL_89; /*0x100226b2c*/
  }
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1002271b5*/
  {
    v61 = __n; /*0x1002271bf*/
    v62 = v84; /*0x1002271ca*/
    v74.i64[0] = v79; /*0x1002271d8*/
    v74.i64[1] = v37; /*0x1002271df*/
    v67.i64[0] = (__int64)&v61; /*0x1002271ed*/
    v67.i64[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1002271fb*/
    v67.i64[2] = (__int64)&v74; /*0x100227209*/
    v67.i64[3] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100227210*/
    v82[0].i64[0] = (__int64)&unk_1016EA38A; /*0x10022721e*/
    v82[0].i64[1] = 43; /*0x100227225*/
    v82[0].i64[2] = (__int64)&unk_1016EA38A; /*0x100227230*/
    v82[0].i64[3] = 43; /*0x100227237*/
    v82[1].i64[0] = (__int64)&off_101AA33C8; /*0x100227249*/
    log::__private_api::log::hf5bade4875454669( /*0x10022726a*/
      "6[AiMaMi][takeover] damaged backup quarantined; source=\xC0\x0C; preserved=\xC0\xC0\x31 changed during recovery; o"
      "riginal left untouched",
      &v67,
      2,
      v82);
  }
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v67, v79, v37); /*0x100227280*/
  v51 = v67.u64[2]; /*0x100227290*/
  __src[0] = (void *)v67.i64[1]; /*0x100227290*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h331ad6372c5f4439(v82, v67.i64[2], 0, 1, 1); /*0x1002272ae*/
  v7 = v82[0].i64[1]; /*0x1002272b3*/
  if ( v82[0].i8[0] ) /*0x1002272c1*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v82[0].i64[1], v82[0].i64[2]); /*0x1002273b3*/
  v52 = v82[0].i64[2]; /*0x1002272ce*/
  memcpy((void *)v82[0].i64[2], __src[0], v51); /*0x1002272d8*/
  if ( v46 ) /*0x1002272e0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v46, 1); /*0x1002272ee*/
  if ( v83 ) /*0x1002272f8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v83, 1); /*0x10022730a*/
  if ( v89 ) /*0x100227314*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v89, 1); /*0x100227326*/
  if ( __s1 ) /*0x100227330*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, __s1, 1); /*0x100227342*/
  if ( 2 * v67.i64[0] ) /*0x10022734e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], v67.i64[0], 1); /*0x100227364*/
  *(__m128i *)__src = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v52, (__m128i)v51); /*0x100227377*/
  v23 = __n; /*0x10022737c*/
  if ( v7 != 0x8000000000000000LL ) /*0x10022738d*/
  {
LABEL_78:
    v40 = v65; /*0x1002267d2*/
    if ( v65 == v63 ) /*0x1002267e0*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v63); /*0x1002267e9*/
    v41 = v64; /*0x1002267ee*/
    v42 = 3 * v40; /*0x1002267f5*/
    *(_QWORD *)(v64 + 8 * v42) = v7; /*0x1002267f9*/
    *(__m128i *)(v41 + 8 * v42 + 8) = _mm_load_si128((const __m128i *)__src); /*0x100226802*/
    v65 = v40 + 1; /*0x10022680b*/
  }
LABEL_81:
  if ( v58 ) /*0x10022681c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v58, 1); /*0x100226826*/
  a1->i64[3] = v65; /*0x100226832*/
  v43 = v63; /*0x100226836*/
  a1->i64[2] = v64; /*0x100226844*/
  a1->i64[1] = v43; /*0x100226848*/
  a1->i64[0] = 11; /*0x10022684c*/
}
